#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <inttypes.h>  // 适配打印64位数据
// #include "freertos/FreeRTOS.h"
#include "c_types.h"

#include "fal_typedef.h"

#include "uhal_glb.h"
#include "uhal_reg_access.h"

#include "uhal_emac.h"
#include "uhal_phy.h"

#include "espsw_soc.h"

#include "fal_loopback.h"
#include "fal_tbx.h"
#include "uhal_tbx.h"

#include "gpio_ll.h"
#include "gpio_reg.h"
#include "gpio_sig_map.h"
#include "gpio_struct.h"
#include "soc/io_mux_reg.h"

#include "ut_emac.h"
#include "soc/mp_sys_reg.h"
#include "soc/mp_sys_clkrst_reg.h"

uint32_t g_txrx_meter_up_limit = 0, g_txrx_meter_low_limit =0;

#define STOP_IF_ERR         0 // 如果为1,表示只要检查到错误发生（cntp tx/rx err or cntp packet对不上）,就return，停止test case
                               // 如果为0,表示即使检查到错误发生，也会继续进行

#if !STOP_IF_ERR
uint32_t emac_rx_err_cntp_cnt_record  = 0;
uint32_t emac_tx_err_cntp_cnt_record  = 0;
uint32_t tbx_rx_err_cntp_cnt_record  = 0;
#endif

struct tbx_cntp_num_list tbx_cntp_num[2]= {{0}, {0}};
// uint32_t g_txrx_meter_up_limit = 0, g_txrx_meter_low_limit =0;

char* const emac_cntp_num_list_string[] = {
    // group0 : start offset 0x1C
    "rx_packet_num",
    "rx_pause_packet_num",
    "rx_undersize_packet_num",
    "rx_64B_frame",
    "rx_65B_to127B_frame",
    "rx_128B_to255B_frame",
    "rx_256B_to511B_frame",
    "rx_512B_to1023B_frame",
    "rx_1024B_to1535B_frame",
    "rx_1536B_to2047B_frame",
    "rx_max_byte2048_to9kB_frame",
    "rx_unicaset_frame",
    "rx_multicaset_frame",
    "rx_broadcast_frame",
    "rx_fragment_frame",
    "rx_oversize_frame",
    "rx_jabber_frame",
    "rx_long_packet_frame", // end offset 0xA8
    
    // group1 : start offset 0xAC
    "tx_packet_num",
    "tx_pause_packet_num",
    "tx_undersize_packet_num",
    "tx_64B_frame",
    "tx_65B_to127B_frame",
    "tx_128B_to255B_frame",
    "tx_256B_to511B_frame",
    "rx_512B_to1023B_frame",
    "tx_1024B_to1535B_frame",
    "tx_1536B_to2047B_frame",
    "tx_max_byte2048_to9kB_frame",
    "tx_unicaset_frame",
    "tx_multicaset_frame",
    "tx_broadcast_frame",
    "tx_fragment_frame",
    "tx_oversize_frame",
    "tx_jabber_frame",
    "tx_long_packet_frame",
    "tx_single_collision_frame",
    "tx_multiple_collision_frame",
    "tx_deferred_packet_num", // end offset 0x150

    // group2 : start offset 0x154
    "rx_err_packet_num",
    "rx_fcs_err_packet_num",
    "rx_drop_err_packet_num",
    "rx_len_err_packet_num",
    "rx_dribble_err_packet_num",
    "rx_outrange_err_packet_num",
    "rx_phy_err_packet_num",
    "tx_err_packet_num",
    "tx_fcs_err_packet_num",
    "tx_underflow_err_packet_num",
    "tx_late_collision_packet_num",
    "tx_excession_collision_packet_num",
    "tx_carrier_err_packet_num",
    "tx_excessive_defer_packet_num",
    "tx_collision_packet_num", // end offset 0x1C8
};

char* const emac_cntp_len_list_string[] = {
    "emac rx_total_byte", // start offset 0x6dc
    "emac rx_good_byte",
    "emac tx_total_byte",
    "emac tx_good_byte", // end offset 0x6F8
};

char* const tbx_cntp_num_list_string[] = {
    "tbx_rx_packet_num", // start offset 0x1c
    "tbx_rx_err_packet_num",
    "tbx_tx_packet_num", // end offset 0x30
};

char* const tbx_cntp_len_list_string[] = {
    "tbx rx_packet_byte", // start offset 0x23C
    "tbx rx_err_packet_byte",
    "tbx tx_packet_byte", // end offset 0x250
};




static uint64_t little_endian_to_big_endian_64(uint64_t x) {
    return ((x & 0x00000000000000FF) << 56) |
           ((x & 0x000000000000FF00) << 40) |
           ((x & 0x0000000000FF0000) << 24) |
           ((x & 0x00000000FF000000) << 8) |
           ((x & 0x000000FF00000000) >> 8) |
           ((x & 0x0000FF0000000000) >> 24) |
           ((x & 0x00FF000000000000) >> 40) |
           ((x & 0xFF00000000000000) >> 56);
}

#if(CUR_USED_INTF == SGMII)

#define CHECK_CLK_ON_PCS_NEARLOOP_EN  1 //temp check

bool  g_PCS_NEG_ON = TRUE;

static espsw_error_t emac_test_emac_glb_init(void)
{
    espsw_error_t ret = ESPSW_OK;

    REG_CLR_BIT(MP_SYS_SYS_PD_CTRL_REG, MP_SYS_SWITCH_MEM_SD0 | MP_SYS_SWITCH_MEM_SD1);

    // REG_CLR_BIT(MP_SYS_CLKRST_SWITCH_CONF_REG, MP_SYS_CLKRST_SWITCH_CORE_CLK_EN);
    REG_SET_BIT(MP_SYS_CLKRST_SWITCH_CONF_REG, MP_SYS_CLKRST_SWITCH_CORE_CLK_EN);

    // Reset Switch
    // REG_SET_BIT(MP_SYS_CLKRST_SWITCH_CTRL_REG, MP_SYS_CLKRST_SWITCH_CORE_RST_EN);
    // REG_CLR_BIT(MP_SYS_CLKRST_SWITCH_CTRL_REG, MP_SYS_CLKRST_SWITCH_CORE_RST_EN);

    REG_WRITE(MP_SYS_CLKRST_SWITCH_CTRL_REG,0xFFFFF08); // to check:0xFFFFFF8
    REG_WRITE(MP_SYS_CLKRST_SWITCH_CTRL_REG,0xF0); // 

    /* EMAC global CFG */
    //system clock enable
    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_GLB_CLK_EN_REG, SWITCH_GLB_CLK_EN_M));

    //emac clock enable
    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_EMAC_EMAC_CLK_EN_REG, SWITCH_EMAC_EMAC_CLK_EN_M));

    //BIT3 = 0：reset rx clk(312.5Mhz)为原相位 BIT3=1,set rx clk(312.5Mhz)反相
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_MOD_SEL_S,16,0x00);
    printf("MP_SYS_PROBEA_CTRL_REG = %lx\n", REG_READ(MP_SYS_PROBEA_CTRL_REG));

    printf("MP_SYS_CLKRST_DATE_REG=%x\n",REG_READ(MP_SYS_CLKRST_DATE_REG));

    ets_delay_us(50000);
    return ret;
}

static espsw_error_t emac_test_cfg_and_check(uint32_t emac_id, enum fal_port_speed speed, enum fal_port_duplex duplex)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val;
    uint32_t debug_val;

    uint32_t rx_meter, tx_meter, addr_test;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));

#if (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_20M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000065f); //set 1ms in 20Mhz env
#elif (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_40M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000033f); //set 1ms in 40Mhz env
#endif

    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_FREQ_METER_E_S, 1, 1));

    // phy interface:sgmii
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_PHY_MODE_SEL_S, 3, SGMII));


#if DEBUG_VERBOSE1
    ets_delay_us(2000); // dealy some time before read cntmeter
#else
    ets_delay_us(5000); // dealy some time before read cntmeter
#endif

    //open TX/RX
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_RECEIVE_E_S, 1, 1));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TRANSMIT_E_S, 1, 1));

    // set emac linkup if serdes state is ok
    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    if((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f)
    {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_LINK_UP_S, 1, 1));
    }else{
        printf("serdes's state is not ok! \n");
        assert(0); //stop here and print err message
    }


    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    
#if DEBUG_VERBOSE1
    printf("SWITCH_EMAC_EMAC_CFG_REG addr=%p,2---SWITCH_EMAC_EMAC_CFG_REG = 0x%08lx!!\n",(void*)(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET)),reg_val);
#endif

// while(1) 
{    
    ets_delay_us(300000);
    addr_test = SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
        uhal_reg_get(SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&rx_meter);
    #if 1//DEBUG_VERBOSE1
        printf("EMAC_RX_METER_CNT_REG addr = %p, EMAC_RX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,rx_meter);
    #endif
        addr_test = SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
        uhal_reg_get(SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&tx_meter);
    #if 1//DEBUG_VERBOSE1
        printf("EMAC_TX_METER_CNT_REG addr = %p, EMAC_TX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,tx_meter);
    #endif



}

    if (speed == FAL_SPEED_10){
        g_txrx_meter_up_limit = 2503;
        g_txrx_meter_low_limit = 2497;
        // // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 2.5MHz will be d'2500 (0x9c4)
        // assert(rx_meter>2497 && rx_meter<2503);
        // assert(tx_meter>2497 && tx_meter<2503);
    }
    else if (speed == FAL_SPEED_100){
        g_txrx_meter_up_limit = 25005;
        g_txrx_meter_low_limit = 24995;
        // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 25MHz will be d'25000 (0x61a8)
        assert(rx_meter>24995 && rx_meter<25005);
        assert(tx_meter>24995 && tx_meter<25005);
    } 
    else if (speed == FAL_SPEED_1000){
        g_txrx_meter_up_limit = 125005;
        g_txrx_meter_low_limit = 124995;
        // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 125MHz will be d'125000 (0x1e848)
        // assert(rx_meter>124995 && rx_meter<125005);
        // assert(tx_meter>124995 && tx_meter<125005);
    }
    else {
        // 156.25Mbps * 2 (扣板的156.25M会二倍频给到SWITCH TX使用，SWITCH RX用到的312.5M是通过RX Serdes恢复出来的156.25M二倍频得到的)
        g_txrx_meter_up_limit = 312500 + 10;
        g_txrx_meter_low_limit = 312500 - 10;

        printf("rxmetr = %d,txmter=%d \n",rx_meter,tx_meter);

        // assert((tx_meter>g_txrx_meter_low_limit) && (tx_meter<g_txrx_meter_up_limit));
        // assert((rx_meter>g_txrx_meter_low_limit) && (rx_meter<g_txrx_meter_up_limit));
    }

    addr_test = SWITCH_EMAC_EMAC_DEBUG_STATUS_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_DEBUG_STATUS_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&debug_val);
#if DEBUG_VERBOSE1
    printf("EMAC_DEBUG_STATUS_REG addr = %p, EMAC_DEBUG_STATUS_REG = 0x%08lx (should be 0)!!\n",(void*)addr_test,debug_val);
#endif
    assert(debug_val == 0x00); //make sure

    return ret;
}
/*
// roughly test bandwidth, for 2.5G Test,need to know linkpartner send length
espsw_error_t emac1_test_emac_check_rx_tx_bandwidth(uint32_t emac_id)
{
    uint64_t emac_rx_packet_byte=0, emac_tx_packet_byte=0;
    uint64_t emac_rx_packet_byte_2=0, emac_tx_packet_byte_2=0;
    uint32_t checktimes = 5, time=8000000; //time:us

    // uint32_t emac_rx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG;
    // uint32_t emac_rx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_rx_cntp_addr_offset_to_emac1;
    // // emac_rx_packet_num = REG_READ(emac_rx_cntp_start_addr) + (REG_READ(emac_rx_cntp_start_addr + 4) << 32);

    // uint32_t emac_tx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG;
    // uint32_t emac_tx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_tx_cntp_addr_offset_to_emac1;
    // // emac_tx_packet_num = REG_READ(emac_tx_cntp_start_addr) + (REG_READ(emac_tx_cntp_start_addr + 4) << 32);


        // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t cntp_addr_rx_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_TOTAL_BYTE_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_TOTAL_BYTE_NUM_31TO0_REG;
    uint32_t emacx_cntp_rx_start_addr = SWITCH_EMACCNTP_EMAC1_RX_TOTAL_BYTE_NUM_31TO0_REG + (emac_id-1)*cntp_addr_rx_offset_to_emac1;


    uint32_t cntp_addr_tx_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_TOTAL_BYTE_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_TOTAL_BYTE_NUM_31TO0_REG;
    uint32_t emacx_cntp_tx_start_addr = SWITCH_EMACCNTP_EMAC1_TX_TOTAL_BYTE_NUM_31TO0_REG + (emac_id-1)*cntp_addr_tx_offset_to_emac1;
    
    
    printf("check total times:%d,  every:%d s ......\n",checktimes,time/1000000);
    for(uint32_t i = 0;i<checktimes; i++)
    {
        emac_tx_packet_byte = REG_READ(emacx_cntp_tx_start_addr) + (REG_READ(emacx_cntp_tx_start_addr + 4) << 32);
        emac_rx_packet_byte = REG_READ(emacx_cntp_rx_start_addr) + (REG_READ(emacx_cntp_rx_start_addr + 4) << 32); 

        ets_delay_us(time);

        emac_tx_packet_byte_2 = REG_READ(emacx_cntp_tx_start_addr) + (REG_READ(emacx_cntp_tx_start_addr + 4) << 32);
        emac_rx_packet_byte_2 = REG_READ(emacx_cntp_rx_start_addr) + (REG_READ(emacx_cntp_rx_start_addr + 4) << 32);

        uint64_t tx_bandwidth = (emac_tx_packet_byte_2-emac_tx_packet_byte)>> 20;  //  *8/8  /1000000 (Mbps/s)
        uint64_t rx_bandwidth = (emac_rx_packet_byte_2-emac_rx_packet_byte)>> 20;  //  *8/8  /1000000 (Mbps/s)

        printf(" -%d times: tx_bandwidth=%ld Mbps --- rx_bandwidth=%ld Mbps\n",i+1,tx_bandwidth,rx_bandwidth);
    }
}
*/

static espsw_error_t emac_test_emac_check_rx_packet_received(uint32_t emac_id)
{
    uint32_t emac_tx_err_packet_num=0, emac_rx_err_packet_num=0, tbx_rx_err_packet_num=0;
    uint32_t emac_rx_packet_num=0, emac_tx_packet_num=0;
    uint32_t tbx_rx_packet_num=0, tbx_tx_packet_num=0;
    uint32_t tbx_num = 0;
    bool err_flag = 0;

    if(emac_id == 1)
    {
        tbx_num = 0;
    }else if((emac_id == 3) || (emac_id == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }


    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t rx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_rx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*rx_err_cntp_addr_offset_to_emac1;

    uint32_t tx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_tx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*tx_err_cntp_addr_offset_to_emac1;

    uint32_t rx_err_cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_err_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG + (tbx_num)*rx_err_cntp_addr_offset_to_emac1;

    uint64_t emac_rx_err_cntp_cnt = REG_READ(emacx_rx_err_cntp_start_addr) + (REG_READ(emacx_rx_err_cntp_start_addr + 4) << 32);
    uint64_t emac_tx_err_cntp_cnt = REG_READ(emacx_tx_err_cntp_start_addr) + (REG_READ(emacx_tx_err_cntp_start_addr + 4) << 32);
    uint64_t tbx_rx_err_cntp_cnt = REG_READ(tbx_rx_err_cntp_start_addr) + (REG_READ(tbx_rx_err_cntp_start_addr + 4) << 32);

    uint32_t emac_rx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG;
    uint32_t emac_rx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_rx_cntp_addr_offset_to_emac1;
    emac_rx_packet_num = REG_READ(emac_rx_cntp_start_addr) + (REG_READ(emac_rx_cntp_start_addr + 4) << 32);

    uint32_t emac_tx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG;
    uint32_t emac_tx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_tx_cntp_addr_offset_to_emac1;
    emac_tx_packet_num = REG_READ(emac_tx_cntp_start_addr) + (REG_READ(emac_tx_cntp_start_addr + 4) << 32);

    uint32_t tbx_rx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_RX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_rx_cntp_addr_offset_to_emac1;
    tbx_rx_packet_num = REG_READ(tbx_rx_cntp_start_addr) + (REG_READ(tbx_rx_cntp_start_addr + 4) << 32);

    uint32_t tbx_tx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_TX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_tx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_tx_cntp_addr_offset_to_emac1;
    tbx_tx_packet_num = REG_READ(tbx_tx_cntp_start_addr) + (REG_READ(tbx_tx_cntp_start_addr + 4) << 32);

    if((emac_rx_packet_num == 0) && (tbx_rx_packet_num == 0))
    { 
            printf("emac_id:%d, emac_rx && tbx_rx not received! \n",emac_id);
            err_flag = 1;
    }


    if(!err_flag)
    {
        return ESPSW_OK;
    }else{
        return ESPSW_FAIL;
    }

}

static espsw_error_t emac_test_emac_tx_rx_err_packet_num(uint32_t emac_id)
{
    uint32_t emac_tx_err_packet_num=0, emac_rx_err_packet_num=0, tbx_rx_err_packet_num=0;
    uint32_t emac_rx_packet_num=0, emac_tx_packet_num=0;
    uint32_t tbx_rx_packet_num=0, tbx_tx_packet_num=0;
    uint32_t tbx_num = 0;
    bool err_flag = 0;

    if(emac_id == 1)
    {
        tbx_num = 0;
    }else if((emac_id == 3) || (emac_id == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

#if STOP_IF_ERR         
    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t rx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_rx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*rx_err_cntp_addr_offset_to_emac1;

    uint32_t tx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_tx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*tx_err_cntp_addr_offset_to_emac1;

    uint32_t rx_err_cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_err_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG + (tbx_num)*rx_err_cntp_addr_offset_to_emac1;

    uint64_t emac_rx_err_cntp_cnt = REG_READ(emacx_rx_err_cntp_start_addr) + (REG_READ(emacx_rx_err_cntp_start_addr + 4) << 32);
    uint64_t emac_tx_err_cntp_cnt = REG_READ(emacx_tx_err_cntp_start_addr) + (REG_READ(emacx_tx_err_cntp_start_addr + 4) << 32);
    uint64_t tbx_rx_err_cntp_cnt = REG_READ(tbx_rx_err_cntp_start_addr) + (REG_READ(tbx_rx_err_cntp_start_addr + 4) << 32);

    if((emac_rx_err_cntp_cnt != 0) || (emac_tx_err_cntp_cnt != 0) || (tbx_rx_err_cntp_cnt != 0))
    {
        printf("emac_id:%d, emac or tbx cntp err cnt occurs!\n",emac_id);
        err_flag = 1;
    }


    uint32_t emac_rx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG;
    uint32_t emac_rx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_rx_cntp_addr_offset_to_emac1;
    emac_rx_packet_num = REG_READ(emac_rx_cntp_start_addr) + (REG_READ(emac_rx_cntp_start_addr + 4) << 32);

    uint32_t emac_tx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG;
    uint32_t emac_tx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_tx_cntp_addr_offset_to_emac1;
    emac_tx_packet_num = REG_READ(emac_tx_cntp_start_addr) + (REG_READ(emac_tx_cntp_start_addr + 4) << 32);

    uint32_t tbx_rx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_RX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_rx_cntp_addr_offset_to_emac1;
    tbx_rx_packet_num = REG_READ(tbx_rx_cntp_start_addr) + (REG_READ(tbx_rx_cntp_start_addr + 4) << 32);

    uint32_t tbx_tx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_TX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_tx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_tx_cntp_addr_offset_to_emac1;
    tbx_tx_packet_num = REG_READ(tbx_tx_cntp_start_addr) + (REG_READ(tbx_tx_cntp_start_addr + 4) << 32);

    if((emac_rx_packet_num != emac_tx_packet_num) || (tbx_rx_packet_num != tbx_tx_packet_num))
    {
        printf("emac_id:%d, emac or tbx tx&rx packet num not match!\n",emac_id);
        err_flag = 1;
    }


    if(!err_flag)
    {
        return ESPSW_OK;
    }else{
        return ESPSW_FAIL;
    }
#else
    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t rx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_rx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*rx_err_cntp_addr_offset_to_emac1;

    uint32_t tx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_tx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*tx_err_cntp_addr_offset_to_emac1;

    uint32_t rx_err_cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_err_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG + (tbx_num)*rx_err_cntp_addr_offset_to_emac1;

    uint64_t emac_rx_err_cntp_cnt = REG_READ(emacx_rx_err_cntp_start_addr) + (REG_READ(emacx_rx_err_cntp_start_addr + 4) << 32);
    uint64_t emac_tx_err_cntp_cnt = REG_READ(emacx_tx_err_cntp_start_addr) + (REG_READ(emacx_tx_err_cntp_start_addr + 4) << 32);
    uint64_t tbx_rx_err_cntp_cnt = REG_READ(tbx_rx_err_cntp_start_addr) + (REG_READ(tbx_rx_err_cntp_start_addr + 4) << 32);

    if((emac_rx_err_cntp_cnt != 0) || (emac_tx_err_cntp_cnt != 0) || (tbx_rx_err_cntp_cnt != 0))
    { 
        if((emac_rx_err_cntp_cnt_record != emac_rx_err_cntp_cnt) || (emac_tx_err_cntp_cnt_record != emac_tx_err_cntp_cnt) || (tbx_rx_err_cntp_cnt_record != tbx_rx_err_cntp_cnt))
        {
            printf("emac_id:%d, emac or tbx cntp err cnt occurs!\n",emac_id);

            //update record
            emac_rx_err_cntp_cnt_record = emac_rx_err_cntp_cnt;
            emac_tx_err_cntp_cnt_record = emac_tx_err_cntp_cnt;
            tbx_rx_err_cntp_cnt_record = tbx_rx_err_cntp_cnt;

            err_flag = 1;
        }
    }

    // uint32_t emac_rx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG;
    // uint32_t emac_rx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_rx_cntp_addr_offset_to_emac1;
    // emac_rx_packet_num = REG_READ(emac_rx_cntp_start_addr) + (REG_READ(emac_rx_cntp_start_addr + 4) << 32);

    // uint32_t emac_tx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG;
    // uint32_t emac_tx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_tx_cntp_addr_offset_to_emac1;
    // emac_tx_packet_num = REG_READ(emac_tx_cntp_start_addr) + (REG_READ(emac_tx_cntp_start_addr + 4) << 32);

    // uint32_t tbx_rx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_RX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG;
    // uint32_t tbx_rx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_rx_cntp_addr_offset_to_emac1;
    // tbx_rx_packet_num = REG_READ(tbx_rx_cntp_start_addr) + (REG_READ(tbx_rx_cntp_start_addr + 4) << 32);

    // uint32_t tbx_tx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_TX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG;
    // uint32_t tbx_tx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_tx_cntp_addr_offset_to_emac1;
    // tbx_tx_packet_num = REG_READ(tbx_tx_cntp_start_addr) + (REG_READ(tbx_tx_cntp_start_addr + 4) << 32);

    // if((emac_rx_packet_num != emac_tx_packet_num) || (tbx_rx_packet_num != tbx_tx_packet_num))
    // {
    //     printf("emac_id:%d, emac or tbx tx&rx packet num not match!\n",emac_id);
    //     err_flag = 1;
    // }

    if(!err_flag)
    {
        return ESPSW_OK;
    }else{
        return ESPSW_FAIL;
    }
#endif
}

static void emac_test_cntp_num_read_result_case(uint32_t emac_id)
{
    uint32_t list_count = sizeof(emac_cntp_num_list_string) / sizeof(emac_cntp_num_list_string[0]);

    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG;
    uint32_t emacx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG + (emac_id-1)*cntp_addr_offset_to_emac1;
    
    for(uint32_t i = 0; i < list_count; i++)
    {
        uint64_t cntp_cnt = REG_READ(emacx_cntp_start_addr) + (REG_READ(emacx_cntp_start_addr + 4) << 32);
        emacx_cntp_start_addr += 8;
        printf("%-35s: %ld\n",emac_cntp_num_list_string[i],cntp_cnt); 
    }

}

static void emac_test_cntp_len_read_result_case(uint32_t emac_id)
{
    uint32_t list_count = sizeof(emac_cntp_len_list_string) / sizeof(emac_cntp_len_list_string[0]);

    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_TOTAL_BYTE_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_TOTAL_BYTE_NUM_31TO0_REG;
    uint32_t emacx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_TOTAL_BYTE_NUM_31TO0_REG + (emac_id-1)*cntp_addr_offset_to_emac1;
    
    for(uint32_t i = 0; i < list_count; i++)
    {
        uint64_t cntp_cnt = REG_READ(emacx_cntp_start_addr) + (REG_READ(emacx_cntp_start_addr + 4) << 32);
        emacx_cntp_start_addr += 8;
        printf("%-25s: %ld\n",emac_cntp_len_list_string[i],cntp_cnt); 
    }
}

static void emac_test_tbx_cntp_len_read_result_case(uint32_t emac_id)
{
    uint32_t list_count = sizeof(tbx_cntp_len_list_string) / sizeof(tbx_cntp_len_list_string[0]);
    uint32_t tbx_num = 0, cntp_addr_offset_to_tbx0 = 0, tbxx_cntp_start_addr = 0;
  
    if(emac_id == 1)
    {
        tbx_num = 0;
    }else if((emac_id == 3) || (emac_id == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    // tbx0/1_cntp 地址相对于tbx0_cntp 地址的偏移
    cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_BYTE_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_BYTE_NUM_31TO0_REG;
    tbxx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_BYTE_NUM_31TO0_REG + tbx_num * cntp_addr_offset_to_tbx0;
    
    for(uint32_t i = 0; i < list_count; i++)
    {
        uint64_t cntp_cnt = REG_READ(tbxx_cntp_start_addr) + (REG_READ(tbxx_cntp_start_addr + 4) << 32);
        tbxx_cntp_start_addr += 8;
        printf("%-25s: %ld\n",tbx_cntp_len_list_string[i],cntp_cnt); 
    }
}

static void emac_test_tbx_cntp_num_read_result_case(uint32_t emac_id)
{
    uint32_t list_count = sizeof(tbx_cntp_num_list_string) / sizeof(tbx_cntp_num_list_string[0]);
    uint32_t tbx_num = 0, cntp_addr_offset_to_tbx0 = 0, tbxx_cntp_start_addr = 0;
  
    if(emac_id == 1)
    {
        tbx_num = 0;
    }else if((emac_id == 3) || (emac_id == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    // tbx0/1_cntp 地址相对于tbx0_cntp 地址的偏移
    cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG;
    tbxx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG + tbx_num * cntp_addr_offset_to_tbx0;
    
    for(uint32_t i = 0; i < list_count; i++)
    {
        uint64_t cntp_cnt = REG_READ(tbxx_cntp_start_addr) + (REG_READ(tbxx_cntp_start_addr + 4) << 32);
        tbxx_cntp_start_addr += 8;
        printf("%-25s: %ld\n",tbx_cntp_num_list_string[i],cntp_cnt); 
    }
}
void emac_test_check_all_cntp(uint32_t emac_id)
{
    printf(" ------------- emac cntp num check ------------\n");
    emac_test_cntp_num_read_result_case(emac_id);
    printf(" -  ---------- emac packet len check ----------\n");
    emac_test_cntp_len_read_result_case(emac_id);
    printf(" ------------- tbx cntp num check -------------\n");
    emac_test_tbx_cntp_num_read_result_case(emac_id); 
    printf(" -  ---------- tbx packet len check -----------\n");
    emac_test_tbx_cntp_len_read_result_case(emac_id);
}


static espsw_error_t pcs_check_auto_negotiation(uint32_t emac_id)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val = 0,check_time=100, an_complete_reg=0;
    uint32_t restart_autonego_times = 2;
    bool restart_autonego_on = 1; // 当发现autonego失败后，是否需要restart autonego

    reg_val = REG_READ(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET));
    // printf("befor nego:EMAC_CFG_REG=0x%x  ..... \n",reg_val);
    reg_val = REG_READ(SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG +(emac_id * EMAC_OFFSET));
    // printf("befor nego:SGMII_STATUS_REG=0x%x ..... \n",reg_val);
    
if(g_PCS_NEG_ON == TRUE)
{
    // printf("check negotiation status ..... \n");

    for(int i = 0;i <restart_autonego_times;i++)
    {
        //check negotiation done
        while((!an_complete_reg) && (check_time))
        {
            uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + emac_id*PCS_OFFSET,SWITCH_PCS_AN_COMPLETE_S,1,(uint8_t*)&an_complete_reg);
            // printf("AN_COMPLETE =%d,addr = %p, val= 0x%x \n",reg_val,(SWITCH_PCS_AN_STATUS_REG + emac_id*PCS_OFFSET),REG_READ(SWITCH_PCS_AN_STATUS_REG + emac_id*PCS_OFFSET));
            ets_delay_us(5000); //5ms
            check_time--;
        }

        if(!check_time)
        {
            printf("auto negotiation not complete!\n");
        }
        else{
            printf("auto negotiation done!\n");
            // for(int i =0;i<10;i++){
            //     printf("addr = %p, val= 0x%x\n",(SWITCH_PCS_AN_STATUS_REG + emac_id*PCS_OFFSET),REG_READ(SWITCH_PCS_AN_STATUS_REG + emac_id*PCS_OFFSET));
            // }
           
        }

        uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + emac_id*PCS_OFFSET,SWITCH_PCS_DATA_LINK_STATUS_S,1,(uint8_t*)&reg_val);
        if(reg_val){
            printf("channel is up!\n");
            break; // skip for loop
        }else{
            printf("channel is down!\n");
            if(restart_autonego_on)
            {
                check_time = 100; // reset checktime
                an_complete_reg = 0;
                printf("---- restart negotiation %d times\n",i+1);
                if((i+1)%2) //i为偶数
                {   
                    //CLK REVERSE
                    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_MOD_SEL_S,16,BIT(3));
                    printf("set rxclk reverse phase!\n");
                }else{//i为奇数
                    //原相位
                    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_MOD_SEL_S,16,0x00);
                    printf("set rxclk original phase!\n");
                }

                uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_RESTART_S, 1, 1); // auto-nego restart,max retry restart_autonego_times
                uhal_reg_field_get(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET,SWITCH_PCS_AN_RESTART_S,1,(uint8_t*)&reg_val);
                printf("Wait AN_RESATERT SLEF CLR... \n");
                while(reg_val);// wait AN_RESATERT SLEF CLR
                printf("     AN_RESATERT SLEF CLR Done!\n");
            }else{
                break;
            }
        }
    }
}
else{
    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + emac_id*PCS_OFFSET,SWITCH_PCS_DATA_LINK_STATUS_S,1,(uint8_t*)&reg_val);
    if(reg_val){
        printf("channel is up!\n");
    }else{
        printf("channel is down!\n");
    }
}



    uhal_reg_field_get(SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG + (emac_id * EMAC_OFFSET),SWITCH_EMAC_EMAC_LINK_STATUS_S,1, (uint8_t *)&reg_val);
    if(reg_val){
        printf("link is up!\n");
    }else{
        printf("link is down!\n");
    }

    // reg_val = REG_READ(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET));
    // printf("after nego:EMAC_CFG_REG=0x%x  ..... \n",reg_val);
    // reg_val = REG_READ(SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG +(emac_id * EMAC_OFFSET));
    // printf("after nego:SGMII_STATUS_REG=0x%x ..... \n",reg_val);

    uhal_reg_field_get(SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG + (emac_id * EMAC_OFFSET),SWITCH_EMAC_EMAC_LINK_SPEED_S,2, (uint8_t *)&reg_val);
    printf("after nego:link speed = %d (0:10M, 1:100M ,2:2.5G/1G)!\n",reg_val);

    uhal_reg_field_get(SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG + (emac_id * EMAC_OFFSET),SWITCH_EMAC_EMAC_LINK_MODE_S,1, (uint8_t *)&reg_val);
    printf("after nego:link mode = %d (0:half-duplex, 1:full-duplex)!\n",reg_val);

    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_WORD_ALIGNED_OFST_S,4, (uint8_t *)&reg_val);
    printf("after nego:PCS_WORD_ALIGNED_offset = 0x%lx !\n",reg_val);
    
    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_WORD_ALIGNED_S,1, (uint8_t *)&reg_val);
    printf("after nego:PCS_WORD_ALIGNED = 0x%lx !\n",reg_val);

    // uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_AN_STATE_S,8, (uint8_t *)&reg_val);
    // printf("after nego:AN_STATE = 0x%lx !\n",reg_val);

    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_SYNC_STATUS_S,1, (uint8_t *)&reg_val);
    printf("after nego:PCS_SYNC_STATUs = 0x%lx !\n",reg_val);
    

    return ret;
}
// emac Near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
static espsw_error_t emac_test_near_end_loopback_case(uint32_t emacid, struct tbx_pattern_info* ptn_val)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j, err_cnt=0;
    uint32_t tbx_repeat_num = ptn_val->repeat_num;  // set '0' means infinite transmit
    uint32_t total_len = ptn_val->total_len;        // 设定8的倍数(方便观察)
    uint32_t check_len = 0;
    uint32_t reg_val =0 ;

    uint8_t err_index[128] = {0};  // size need same as byte_init[]
    struct fal_tbx_pattern_switch20 tbx_tx_pattern;
    struct fal_tbx_pattern_switch20 tbx_tx_pattern_check;

    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    // printf("################# near end loop back test#######################\n");

    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_NEAR);   // maybe need to disable tbx_tx when FAL_EMAC_LPBK_FAR mode 

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));
    memset(&tbx_tx_pattern_check, 0, sizeof(struct fal_tbx_pattern_switch20));

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));

    // 初始化 pkt_hdr.byte 数组,will be filled in tbx tx sram
    //note:tbx tx sram is placed by BIG Endian ,(大端序(big-endian)中,最高有效字节存储在最低地址(8byte 一组),而在小端序(little-endian)中,最低有效字节存储在最低地址) 

    // 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (byte_init[]: word[0]:0x45342312,word[1]:0x89786756) wiil placed be Address[7]->Address[6]-> ... ->Address[0] (word[1]:0x12233445,word[0]:0x56677889)
    
    // RAW tbx tx word[0]-L: 0x56677889 - >  dst addr:0x122334455667
    // RAW tbx tx word[1]-H: 0x12233445
    //                                  - >  src addr:0x78899aabbccd  type:0x1122
    // RAW tbx tx word[2]-L: 0x11223344
    // RAW tbx tx word[3]-H: 0x9aabbccd 

    uint8_t byte_init[128] = {
        0x00, 0x5a, 0x5a, 0x5a,
        0x01, 0x11, 0x11, 0x11,
        0x02, 0x22, 0x22, 0x22,  
        0x03, 0x33, 0x33, 0x33,
        
        0x04, 0x44, 0x44, 0x44,
        0x05, 0x55, 0x55, 0x55,
        0x06, 0x66, 0x66, 0x66,
        0x07, 0x77, 0x77, 0x77,

        0x08, 0x88, 0x88, 0x88,
        0x09, 0x99, 0x99, 0x99,
        0x0a, 0xaa, 0xaa, 0xaa,
        0x0b, 0xbb, 0xbb, 0xbb,

        0x0c, 0xcc, 0xcc, 0xcc,
        0x0d, 0xdd, 0xdd, 0xdd,
        0x0e, 0xee, 0xee, 0xee,
        0x0f, 0xff, 0xff, 0xff,
    };

#if 1
 if(total_len >= 128)
 {
    for(uint32_t i = 0;i<128;i++)
    {
        byte_init[i] = i;
    }
    check_len = 128;
 }
 else{
    for(uint32_t i = 0;i<(total_len-1);i++)
    {
        byte_init[i] = i;
    }
    check_len = total_len;
 }
#endif

    memcpy(tbx_tx_pattern.pkt_hdr.byte, byte_init, sizeof(byte_init));

    check_len = check_len / 8;
    // little endian change to big-endian style which align tbx sram store method
    uint64_t big_endian_array[16]={0}; //16 is 128/8(uint64_t is for 8bytes)

    // byte_init[0]-[7] : (0x8978675645342312) -> big_endian_array[0]:0x1223344556677889
    for (i = 0, j = 0; i < sizeof(byte_init)/sizeof(byte_init[0]); i += 8, j++) {
        uint64_t num = ((uint64_t)byte_init[i]) |
                   ((uint64_t)byte_init[i + 1] << 8) |
                   ((uint64_t)byte_init[i + 2] << 16) |
                   ((uint64_t)byte_init[i + 3] << 24) |
                   ((uint64_t)byte_init[i + 4] << 32) |
                   ((uint64_t)byte_init[i + 5] << 40) |
                   ((uint64_t)byte_init[i + 6] << 48) |
                   ((uint64_t)byte_init[i + 7] << 56);
    
        big_endian_array[j] = little_endian_to_big_endian_64(num);
    }

#if 0 // debug use
    for (i = 0; i < check_len; i++) // intentionally printing 4 info to reduce content printing
    {
        uint32_t high_part = (uint32_t)(big_endian_array[i] >> 32); // 取得高32位
        uint32_t low_part = (uint32_t)(big_endian_array[i] & 0xFFFFFFFF); // 取得低32位

        // 64bit is 2 word
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i,low_part);
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i+1, high_part);

        // for(j = 0; j < 8; j++)
        // {
        //     printf("RAW tbx tx byte[%ld]: 0x%x\n", i*8+j, ((uint8_t *)&big_endian_array[i])[j]);
        // }

    }
#endif

    tbx_tx_pattern.ptn_info.low32b_tx.total_len = total_len;//1024
    tbx_tx_pattern.ptn_info.low32b_tx.repeat_num = tbx_repeat_num; // set '0' means infinite transmit
    tbx_tx_pattern.ptn_info.high32b_tx.next_pattern = 0; 
    tbx_tx_pattern.ptn_info.high32b_tx.dmac_mode = 0;  //  DMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.smac_mode = 0;  //  SMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.length_mode = 0;//  报文化长度：'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.tx_err_pkt = 0; //  0:当前pattern全部发送eop&（err=0）报文； 1：当前pattern全部发送eop&(err=1)报文 
    
    tbx_tx_pattern.agent_info.data[0] = 0x00;
    tbx_tx_pattern.agent_info.data[1] = 0x00;

    tbx_tx_pattern.payload_pad =0x2a;
    

    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    ret = fal_tbx_pattern_set_switch20(tbx_num,&tbx_tx_pattern);
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_set_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

    ret = fal_tbx_pattern_check_switch20(tbx_num,&tbx_tx_pattern_check);  
    
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_check_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }
#if DEBUG_VERBOSE
    printf("-------------------------- pattern check ---------------\n");
    printf("total_len = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.total_len);
    printf("repeat_num = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.repeat_num);
    printf("next_pattern = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.next_pattern);
    printf("dmac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.dmac_mode);
    printf("smac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.smac_mode);
    printf("length_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.length_mode);
    printf("tx_err_pkt = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.tx_err_pkt);

    printf("ptn_info.val[0] = 0x%lx ;  ptn_info.val[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.ptn_info.val[0],tbx_tx_pattern.ptn_info.val[1]);
    printf("agent_info.data[0] = 0x%lx ;  agent_info.data[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.agent_info.data[0],tbx_tx_pattern.agent_info.data[1]);


    printf("------------ check tbx tx pattern content!!! ---------\n");
    for(int i=0;i< (check_len*2); i++)
    {   
        printf("tbx tx pattern word[%d]: 0x%08x\n",i,tbx_tx_pattern_check.pkt_hdr.word[i]);
    }
#endif
    fal_tbx_config(tbx_num, &tbx_config);
    /*config tbx rx start before tx start*/
    fal_tbx_rx_action(tbx_num, TRUE);

    // NOTE :temp use
    // fal_tbx_rx_action(tbx_num,false);//避免overflow的问题
#if 0
    uhal_reg_get(TBX_GLOBAL_CFG_REG + tbx_num * TBX_OFFSET, (uint8_t *)&reg_val);
    printf("address= %p, 1-- tbx tx glb ctrl reg = 0x%lx\n",TBX_GLOBAL_CFG_REG + tbx_num * TBX_OFFSET, reg_val);

    uhal_reg_get(TBX_RX_CTRL_REG + tbx_num * TBX_OFFSET, (uint8_t *)&reg_val);
    printf("address= %p, 1-- rx ctrl reg = 0x%lx\n",TBX_RX_CTRL_REG + tbx_num * TBX_OFFSET, reg_val);
#endif
    fal_tbx_tx_action(tbx_num, TX_START);

    // delay some time to make sure tbx tx send finished
    ets_delay_us(10000);
        
    fal_tbx_config_check(tbx_num, &tbx_config_chck);
#if DEBUG_VERBOSE
    printf("emac_id = %d; tbx_num=%d; user_mode = %ld (1:A;2:B;3:C;4:D)\n",emacid, tbx_num,tbx_config_chck.user_mode);
    printf("cntp_en = %d\n",tbx_config_chck.cntp_en);
    printf("cntp_afull_stop_en = %d \n",tbx_config_chck.cntp_afull_stop_en);

    printf("tx_en = %d\n",tbx_config_chck.tx_en);
    printf("tx_fsm_state = %d \n",tbx_config_chck.tx_fsm_state);
    printf("tx_done = %d\n",tbx_config_chck.tx_done);
    printf("tx_conn_vld = %d \n",tbx_config_chck.tx_conn_vld);
    printf("tx_conn_rdy = %d \n",tbx_config_chck.tx_conn_rdy);  

    printf("rx_en = %d \n",tbx_config_chck.rx_en);
    printf("rx_fsm_state = %d\n",tbx_config_chck.rx_fsm_state);
    printf("rx_rdy_htime = %d \n",tbx_config_chck.rx_rdy_htime);
    printf("rx_rdy_ltime = %d\n",tbx_config_chck.rx_rdy_ltime);
    printf("rx_conn_vld = %d \n",tbx_config_chck.rx_conn_vld);
    printf("rx_conn_rdy = %d\n",tbx_config_chck.rx_conn_rdy);

    printf("tbx set data_pload = %ld\n",tbx_config_chck.data_pload);

#endif
    fal_tbx_rx_data_check_switch20(tbx_num,&tbx_rx_pattern);

#if DEBUG_VERBOSE
    printf("------------ check tbx rx pattern content!!! ---------\n");

    printf("low32b_rx.total_len = 0x%08x; rx_ptninfo_val[0]=%08x; rx_ptninfo_val[1]=%08x\n",tbx_rx_pattern.ptn_info.low32b_rx.total_len,tbx_rx_pattern.ptn_info.val[0],tbx_rx_pattern.ptn_info.val[1]);
    printf("low32b_rx.cur_pkt_err = 0x%x\n",tbx_rx_pattern.ptn_info.low32b_rx.cur_pkt_err);

    for(int i=0;i<(check_len*2); i++)
    {   
        printf("tbx rx pattern word[%d]: 0x%08x\n",i,tbx_rx_pattern.pkt_hdr.word[i]);
    }
#endif
    uint32_t temp_val1 = MIN(sizeof(big_endian_array)/sizeof(big_endian_array[0]),check_len);
    //note:tbx tx sram is placed by BIG Endian(64bits) , 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (Address[7]->Address[6]-> ... ->Address[0]) 
    for (i = 0; i < temp_val1; i++)  
    {
        for(j = 0; j < 8; j++)
        {
            if (tbx_rx_pattern.pkt_hdr.byte[i*8+j] != ((uint8_t *)&big_endian_array[i])[j])
            {
                err_index[err_cnt++] = i*8+j;                
            }
        }
    }

    if(err_cnt > 0)
    {       
        printf("\n");
        printf(" -------------------------- diff list --------------------------\n");         
        for (j = 0; j < err_cnt; j++)  
        {
            printf("Golden send:tbx tx byte[%ld]:0x%lx  VS. Loopback_Rev: tbx rx byte[%ld]: 0x%lx\n", err_index[j], ((uint8_t *)&big_endian_array[err_index[j]/8])[err_index[j]%8], err_index[j], tbx_rx_pattern.pkt_hdr.byte[err_index[j]]);
        }

         printf("     *** Near end loop back Fail !!!\n");
         ret = ESPSW_FAIL;
    }
    else{
        #if DEBUG_VERBOSE
        printf("     *** tbx tx content = tbx rx content !!!\n");
        #endif
    }

    if(emac_test_emac_tx_rx_err_packet_num(emacid) == ESPSW_OK)
    {
        #if DEBUG_VERBOSE
        printf(" ****** emacid_%d MAC Near end loop back Pass !!!\n",emacid);
        #endif
    }
    else{
        printf(" ****** emacid_%d MAC Near end loop back Fail !!!\n",emacid);
        ret = ESPSW_FAIL;
    }

    // disable emac loopback
    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_DISABLE); 

    // printf("\n\n\n");


    return ret;
}


// emac Near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
static espsw_error_t emac_test_near_end_loopback_send_same_128B_val_case(uint32_t emacid,uint8_t byte_value)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j, err_cnt=0;
    uint32_t tbx_repeat_num = 10;// set '0' means infinite transmit
    uint32_t reg_val =0 ;

    uint8_t err_index[128] = {0};  // size need same as byte_init[]
    struct fal_tbx_pattern_switch20 tbx_tx_pattern;
    struct fal_tbx_pattern_switch20 tbx_tx_pattern_check;

    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    // printf("################# near end loop back test#######################\n");

    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_NEAR);   // maybe need to disable tbx_tx when FAL_EMAC_LPBK_FAR mode 

    // emac_test_reg_read_all(emacid);

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));
    memset(&tbx_tx_pattern_check, 0, sizeof(struct fal_tbx_pattern_switch20));

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));

    // 初始化 pkt_hdr.byte 数组,will be filled in tbx tx sram
    //note:tbx tx sram is placed by BIG Endian ,(大端序(big-endian)中,最高有效字节存储在最低地址(8byte 一组),而在小端序(little-endian)中,最低有效字节存储在最低地址) 

    // 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (byte_init[]: word[0]:0x45342312,word[1]:0x89786756) wiil placed be Address[7]->Address[6]-> ... ->Address[0] (word[1]:0x12233445,word[0]:0x56677889)
    

    // RAW tbx tx word[0]-L: 0x56677889 - >  dst addr:0x122334455667
    // RAW tbx tx word[1]-H: 0x12233445
    //                                  - >  src addr:0x78899aabbccd  type:0x1122
    // RAW tbx tx word[2]-L: 0x11223344
    // RAW tbx tx word[3]-H: 0x9aabbccd 

    uint8_t byte_init[128] = {0};

    #if 1
    for(uint32_t i = 0;i<128;i++)
    {
        byte_init[i] = byte_value;
    }
    #endif

    memcpy(tbx_tx_pattern.pkt_hdr.byte, byte_init, sizeof(byte_init));

    // little endian change to big-endian style which align tbx sram store method
    uint64_t big_endian_array[16]={0}; //16 is 128/8(uint64_t is for 8bytes)

    // byte_init[0]-[7] : (0x8978675645342312) -> big_endian_array[0]:0x1223344556677889
    for (i = 0, j = 0; i < sizeof(byte_init)/sizeof(byte_init[0]); i += 8, j++) {
        uint64_t num = ((uint64_t)byte_init[i]) |
                   ((uint64_t)byte_init[i + 1] << 8) |
                   ((uint64_t)byte_init[i + 2] << 16) |
                   ((uint64_t)byte_init[i + 3] << 24) |
                   ((uint64_t)byte_init[i + 4] << 32) |
                   ((uint64_t)byte_init[i + 5] << 40) |
                   ((uint64_t)byte_init[i + 6] << 48) |
                   ((uint64_t)byte_init[i + 7] << 56);
    
        big_endian_array[j] = little_endian_to_big_endian_64(num);
    }

#if 0 
    for (i = 0; i < 16; i++) // intentionally printing 4 info to reduce content printing
    {
        uint32_t high_part = (uint32_t)(big_endian_array[i] >> 32); // 取得高32位
        uint32_t low_part = (uint32_t)(big_endian_array[i] & 0xFFFFFFFF); // 取得低32位

        // 64bit is 2 word
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i,low_part);
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i+1, high_part);

        // for(j = 0; j < 8; j++)
        // {
        //     printf("RAW tbx tx byte[%ld]: 0x%x\n", i*8+j, ((uint8_t *)&big_endian_array[i])[j]);
        // }

    }
#endif

    tbx_tx_pattern.ptn_info.low32b_tx.total_len = 1024;//1024
    tbx_tx_pattern.ptn_info.low32b_tx.repeat_num = tbx_repeat_num; // set '0' means infinite transmit
    tbx_tx_pattern.ptn_info.high32b_tx.next_pattern = 0; 
    tbx_tx_pattern.ptn_info.high32b_tx.dmac_mode = 0;  //  DMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.smac_mode = 0;  //  SMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.length_mode = 0;//  报文化长度：'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.tx_err_pkt = 0; //  0:当前pattern全部发送eop&（err=0）报文； 1：当前pattern全部发送eop&(err=1)报文 
    
    tbx_tx_pattern.agent_info.data[0] = 0x00;
    tbx_tx_pattern.agent_info.data[1] = 0x00;

    tbx_tx_pattern.payload_pad =0x2a;
    

    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    ret = fal_tbx_pattern_set_switch20(tbx_num,&tbx_tx_pattern);
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_set_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

    ret = fal_tbx_pattern_check_switch20(tbx_num,&tbx_tx_pattern_check);  
    
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_check_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

    printf("-------------------------- pattern check ---------------\n");
    printf("total_len = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.total_len);
    printf("repeat_num = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.repeat_num);
    printf("next_pattern = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.next_pattern);
    printf("dmac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.dmac_mode);
    printf("smac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.smac_mode);
    printf("length_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.length_mode);
    printf("tx_err_pkt = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.tx_err_pkt);



    printf("ptn_info.val[0] = 0x%lx ;  ptn_info.val[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.ptn_info.val[0],tbx_tx_pattern.ptn_info.val[1]);
    printf("agent_info.data[0] = 0x%lx ;  agent_info.data[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.agent_info.data[0],tbx_tx_pattern.agent_info.data[1]);



    printf("------------ check tbx tx pattern content!!! ---------\n");
    for(int i=0;i<32; i++)
    {   
        printf("tbx tx pattern word[%d]: 0x%08x\n",i,tbx_tx_pattern_check.pkt_hdr.word[i]);
    }

    fal_tbx_config(tbx_num, &tbx_config);
    /*config tbx rx start before tx start*/
    fal_tbx_rx_action(tbx_num, TRUE);

    // NOTE :temp use
    // fal_tbx_rx_action(tbx_num,false);//避免overflow的问题

    fal_tbx_tx_action(tbx_num, TX_START);

    // delay some time to make sure tbx tx send finished
    ets_delay_us(10000);
        
    fal_tbx_config_check(tbx_num, &tbx_config_chck);

    printf("emac_id = %d; tbx_num=%d; user_mode = %ld (1:A;2:B;3:C;4:D)\n",emacid, tbx_num,tbx_config_chck.user_mode);
    printf("cntp_en = %d\n",tbx_config_chck.cntp_en);
    printf("cntp_afull_stop_en = %d \n",tbx_config_chck.cntp_afull_stop_en);

    printf("tx_en = %d\n",tbx_config_chck.tx_en);
    printf("tx_fsm_state = %d \n",tbx_config_chck.tx_fsm_state);
    printf("tx_done = %d\n",tbx_config_chck.tx_done);
    printf("tx_conn_vld = %d \n",tbx_config_chck.tx_conn_vld);
    printf("tx_conn_rdy = %d \n",tbx_config_chck.tx_conn_rdy);  

    printf("rx_en = %d \n",tbx_config_chck.rx_en);
    printf("rx_fsm_state = %d\n",tbx_config_chck.rx_fsm_state);
    printf("rx_rdy_htime = %d \n",tbx_config_chck.rx_rdy_htime);
    printf("rx_rdy_ltime = %d\n",tbx_config_chck.rx_rdy_ltime);
    printf("rx_conn_vld = %d \n",tbx_config_chck.rx_conn_vld);
    printf("rx_conn_rdy = %d\n",tbx_config_chck.rx_conn_rdy);

    printf("tbx set data_pload = %ld\n",tbx_config_chck.data_pload);


    fal_tbx_rx_data_check_switch20(tbx_num,&tbx_rx_pattern);


    printf("------------ check tbx rx pattern content!!! ---------\n");

    printf("low32b_rx.total_len = 0x%08x; rx_ptninfo_val[0]=%08x; rx_ptninfo_val[1]=%08x\n",tbx_rx_pattern.ptn_info.low32b_rx.total_len,tbx_rx_pattern.ptn_info.val[0],tbx_rx_pattern.ptn_info.val[1]);
    printf("low32b_rx.cur_pkt_err = 0x%x\n",tbx_rx_pattern.ptn_info.low32b_rx.cur_pkt_err);

    for(int i=0;i<32; i++)
    {   
        printf("tbx rx pattern word[%d]: 0x%08x\n",i,tbx_rx_pattern.pkt_hdr.word[i]);
    }

    //note:tbx tx sram is placed by BIG Endian(64bits) , 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (Address[7]->Address[6]-> ... ->Address[0]) 
    for (i = 0; i < sizeof(big_endian_array)/sizeof(big_endian_array[0]); i++)  
    {
        for(j = 0; j < 8; j++)
        {
            if (tbx_rx_pattern.pkt_hdr.byte[i*8+j] != ((uint8_t *)&big_endian_array[i])[j])
            {
                err_index[err_cnt++] = i*8+j;                
            }
        }
    }

    if(err_cnt > 0)
    {       
        printf("\n");
        printf(" -------------------------- diff list --------------------------\n");         
        for (j = 0; j < err_cnt; j++)  
        {
            printf("Golden send:tbx tx byte[%ld]:0x%lx  VS. Loopback_Rev: tbx rx byte[%ld]: 0x%lx\n", err_index[j], ((uint8_t *)&big_endian_array[err_index[j]/8])[err_index[j]%8], err_index[j], tbx_rx_pattern.pkt_hdr.byte[err_index[j]]);
        }

         printf("     *** Near end loop back Fail !!!\n");
         ret = ESPSW_FAIL;
    }
    else{
        printf("     *** tbx tx content = tbx rx content !!!\n");
        printf("     *** clr tbx rx mem successfully!!!\n");
    }

    if(emac_test_emac_tx_rx_err_packet_num(emacid) == ESPSW_OK)
    {
        printf(" ****** emacid_%d MAC Near end loop back Pass !!!\n",emacid);
    }
    else{
        printf(" ****** emacid_%d MAC Near end loop back Fail !!!\n",emacid);
    }

    // disable emac loopback
    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_DISABLE); 

    return ret;
}



// pcs Near-end loopback mode :tbx tx -> emac tx pcs tx-> pcsrx-> emacrx ->  tbx rx 
static espsw_error_t emac_test_pcs_near_end_loopback_case(uint32_t emacid)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j, err_cnt=0;
    uint32_t tbx_repeat_num = 1;// set '0' means infinite transmit
    uint32_t reg_val =0 ;

    uint8_t err_index[128] = {0};  // size need same as byte_init[]
    struct fal_tbx_pattern_switch20 tbx_tx_pattern;
    struct fal_tbx_pattern_switch20 tbx_tx_pattern_check;

    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 0
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    // printf("################# pcs near end loop back test#######################\n");
    // uhal_reg_field_set( SWITCH_PCS_CLK_EN_REG + emac_id*PCS_OFFSET, SWITCH_PCS_CLK_EN_S, 1, 1); // pcs clk enable.  TBD？？ 需放在emac_test_emac_glb_init 处吗？
    // uhal_reg_field_set(SWITCH_PCS_CTRL_REG, SWITCH_PCS_AN_EN_S, 1, 1); // pcs auto negotiation enable
    // uhal_reg_field_set(SWITCH_PCS_CTRL_REG, SWITCH_PCS_NEAREND_LPBK_EN_S, 1, 1); // pcs near-end loopback enable
    // ets_delay_us(10000); //caiadd
    

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));
    memset(&tbx_tx_pattern_check, 0, sizeof(struct fal_tbx_pattern_switch20));

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));

    // 初始化 pkt_hdr.byte 数组,will be filled in tbx tx sram
    //note:tbx tx sram is placed by BIG Endian ,(大端序(big-endian)中,最高有效字节存储在最低地址(8byte 一组),而在小端序(little-endian)中,最低有效字节存储在最低地址) 

    // 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (byte_init[]: word[0]:0x45342312,word[1]:0x89786756) wiil placed be Address[7]->Address[6]-> ... ->Address[0] (word[1]:0x12233445,word[0]:0x56677889)
    

    // RAW tbx tx word[0]-L: 0x56677889 - >  dst addr:0x122334455667
    // RAW tbx tx word[1]-H: 0x12233445
    //                                  - >  src addr:0x78899aabbccd  type:0x1122
    // RAW tbx tx word[2]-L: 0x11223344
    // RAW tbx tx word[3]-H: 0x9aabbccd 

    uint8_t byte_init[128] = {0};

#if 1
    for(uint32_t i = 0;i<128;i++)
    {
        byte_init[i] = 128-i;
    }
#endif
    memcpy(tbx_tx_pattern.pkt_hdr.byte, byte_init, sizeof(byte_init));

    // little endian change to big-endian style which align tbx sram store method
    uint64_t big_endian_array[16]={0}; //16 is 128/8(uint64_t is for 8bytes)

    // byte_init[0]-[7] : (0x8978675645342312) -> big_endian_array[0]:0x1223344556677889
    for (i = 0, j = 0; i < sizeof(byte_init)/sizeof(byte_init[0]); i += 8, j++) {
        uint64_t num = ((uint64_t)byte_init[i]) |
                   ((uint64_t)byte_init[i + 1] << 8) |
                   ((uint64_t)byte_init[i + 2] << 16) |
                   ((uint64_t)byte_init[i + 3] << 24) |
                   ((uint64_t)byte_init[i + 4] << 32) |
                   ((uint64_t)byte_init[i + 5] << 40) |
                   ((uint64_t)byte_init[i + 6] << 48) |
                   ((uint64_t)byte_init[i + 7] << 56);
    
        big_endian_array[j] = little_endian_to_big_endian_64(num);
    }
#if DEBUG_VERBOSE
    for (i = 0; i < 16; i++) // intentionally printing 4 info to reduce content printing
    {
        uint32_t high_part = (uint32_t)(big_endian_array[i] >> 32); // 取得高32位
        uint32_t low_part = (uint32_t)(big_endian_array[i] & 0xFFFFFFFF); // 取得低32位

        // 64bit is 2 word
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i,low_part);
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i+1, high_part);

        // for(j = 0; j < 8; j++)
        // {
        //     printf("RAW tbx tx byte[%ld]: 0x%x\n", i*8+j, ((uint8_t *)&big_endian_array[i])[j]);
        // }

    }
#else
    // ets_delay_us(10000);
#endif
    tbx_tx_pattern.ptn_info.low32b_tx.total_len = 1024;//1024
    tbx_tx_pattern.ptn_info.low32b_tx.repeat_num = tbx_repeat_num; // set '0' means infinite transmit
    tbx_tx_pattern.ptn_info.high32b_tx.next_pattern = 0; 
    tbx_tx_pattern.ptn_info.high32b_tx.dmac_mode = 0;  //  DMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.smac_mode = 0;  //  SMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.length_mode = 0;//  报文化长度：'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.tx_err_pkt = 0; //  0:当前pattern全部发送eop&（err=0）报文； 1：当前pattern全部发送eop&(err=1)报文 
    
    tbx_tx_pattern.agent_info.data[0] = 0x00;
    tbx_tx_pattern.agent_info.data[1] = 0x00;

    tbx_tx_pattern.payload_pad =0x2a;
    

    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    ret = fal_tbx_pattern_set_switch20(tbx_num,&tbx_tx_pattern);
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_set_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

    ret = fal_tbx_pattern_check_switch20(tbx_num,&tbx_tx_pattern_check);  
    
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_check_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }
#if DEBUG_VERBOSE
    printf("-------------------------- pattern check ---------------\n");
    printf("total_len = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.total_len);
    printf("repeat_num = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.repeat_num);
    printf("next_pattern = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.next_pattern);
    printf("dmac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.dmac_mode);
    printf("smac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.smac_mode);
    printf("length_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.length_mode);
    printf("tx_err_pkt = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.tx_err_pkt);

    printf("ptn_info.val[0] = 0x%lx ;  ptn_info.val[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.ptn_info.val[0],tbx_tx_pattern.ptn_info.val[1]);
    printf("agent_info.data[0] = 0x%lx ;  agent_info.data[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.agent_info.data[0],tbx_tx_pattern.agent_info.data[1]);

    printf("------------ check tbx tx pattern content!!! ---------\n");
    for(int i=0;i<32; i++)
    {   
        printf("tbx tx pattern word[%d]: 0x%08x\n",i,tbx_tx_pattern_check.pkt_hdr.word[i]);
    }
#else
    // ets_delay_us(10000); // ？？：cai： is important？
#endif
    fal_tbx_config(tbx_num, &tbx_config);
    /*config tbx rx start before tx start*/
    fal_tbx_rx_action(tbx_num, TRUE);

    // NOTE :temp use
    // fal_tbx_rx_action(tbx_num,false);//避免overflow的问题
    fal_tbx_tx_action(tbx_num, TX_START);

#if DEBUG_VERBOSE
    // delay some time to make sure tbx tx send finished
    ets_delay_us(10000);
#else
    ets_delay_us(1000);
#endif
        
    fal_tbx_config_check(tbx_num, &tbx_config_chck);

#if DEBUG_VERBOSE
    printf("emac_id = %d; tbx_num=%d; user_mode = %ld (1:A;2:B;3:C;4:D)\n",emacid, tbx_num,tbx_config_chck.user_mode);
    printf("cntp_en = %d\n",tbx_config_chck.cntp_en);
    printf("cntp_afull_stop_en = %d \n",tbx_config_chck.cntp_afull_stop_en);

    printf("tx_en = %d\n",tbx_config_chck.tx_en);
    printf("tx_fsm_state = %d \n",tbx_config_chck.tx_fsm_state);
    printf("tx_done = %d\n",tbx_config_chck.tx_done);
    printf("tx_conn_vld = %d \n",tbx_config_chck.tx_conn_vld);
    printf("tx_conn_rdy = %d \n",tbx_config_chck.tx_conn_rdy);  

    printf("rx_en = %d \n",tbx_config_chck.rx_en);
    printf("rx_fsm_state = %d\n",tbx_config_chck.rx_fsm_state);
    printf("rx_rdy_htime = %d \n",tbx_config_chck.rx_rdy_htime);
    printf("rx_rdy_ltime = %d\n",tbx_config_chck.rx_rdy_ltime);
    printf("rx_conn_vld = %d \n",tbx_config_chck.rx_conn_vld);
    printf("rx_conn_rdy = %d\n",tbx_config_chck.rx_conn_rdy);

    printf("data_pload = 0x%x\n",tbx_config_chck.data_pload);
#else
    // ets_delay_us(10000);
#endif

    fal_tbx_rx_data_check_switch20(tbx_num,&tbx_rx_pattern);

#if DEBUG_VERBOSE
    printf("------------ check tbx rx pattern content!!! ---------\n");

    printf("low32b_rx.total_len = 0x%08x; rx_ptninfo_val[0]=%08x; rx_ptninfo_val[1]=%08x\n",tbx_rx_pattern.ptn_info.low32b_rx.total_len,tbx_rx_pattern.ptn_info.val[0],tbx_rx_pattern.ptn_info.val[1]);
    printf("low32b_rx.cur_pkt_err = 0x%x\n",tbx_rx_pattern.ptn_info.low32b_rx.cur_pkt_err);

    for(int i=0;i<32; i++)
    {   
        printf("tbx rx pattern word[%d]: 0x%08x\n",i,tbx_rx_pattern.pkt_hdr.word[i]);
    }
#else
    // ets_delay_us(10000);
#endif


#if 0 // chcek byte base
    //note:tbx tx sram is placed by BIG Endian(64bits) , 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (Address[7]->Address[6]-> ... ->Address[0]) 
    for (i = 0; i < sizeof(big_endian_array)/sizeof(big_endian_array[0]); i++)  
    {
        for(j = 0; j < 8; j++)
        {
            if (tbx_rx_pattern.pkt_hdr.byte[i*8+j] != ((uint8_t *)&big_endian_array[i])[j])
            {
                err_index[err_cnt++] = i*8+j;                
            }
        }
    }

    if(err_cnt > 0)
    {       
        printf("\n");
        printf(" -------------------------- diff list --------------------------\n");     

        for (j = 0; j < err_cnt; j++)  
        {
            printf("Golden send:tbx tx byte[%ld]:0x%lx  VS. Loopback_Rev: tbx rx byte[%ld]: 0x%lx\n", err_index[j], ((uint8_t *)&big_endian_array[err_index[j]/8])[err_index[j]%8], err_index[j], tbx_rx_pattern.pkt_hdr.byte[err_index[j]]);
        }

         printf("     *** Near end loop back Fail !!!\n");
        //  ret = ESPSW_FAIL;

         return ESPSW_FAIL;
        // assert(0);
    }
#else // chcek word base
    //note:tbx tx sram is placed by BIG Endian(64bits) , 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (Address[7]->Address[6]-> ... ->Address[0]) 
    for (i = 0; i < 32; i++)  
    {
            if (tbx_tx_pattern_check.pkt_hdr.word[i] != tbx_rx_pattern.pkt_hdr.word[i])
            {
                err_index[err_cnt++] = i;                
            }
    }

    if(err_cnt > 0)
    {       
        printf("\n");
   
        // temp check all
        for(int i=0;i<32; i++)
        {   
            printf("tbx tx pattern word[%d] VS.tbx rx pattern word[%d]:: 0x%08x  0x%08x\n",i,i, tbx_tx_pattern_check.pkt_hdr.word[i],tbx_rx_pattern.pkt_hdr.word[i]);
        }
        printf(" -------------------------- diff list --------------------------\n");  
        for (j = 0; j < err_cnt; j++)  
        {
            printf("Golden send:tbx tx word[%d]:0x%08x  VS. Loopback_Rev: tbx rx word[%d]: 0x%08x\n", err_index[j], tbx_tx_pattern_check.pkt_hdr.word[err_index[j]], err_index[j], tbx_rx_pattern.pkt_hdr.word[err_index[j]]);
        }

         printf("     *** Near end loop back Fail !!!\n");
        //  ret = ESPSW_FAIL;

         return ESPSW_FAIL;
        // assert(0);
    }
#endif

    else{
#if DEBUG_VERBOSE
        printf("     *** tbx tx content = tbx rx content !!!\n");
#endif
    }


    ets_delay_us(5000); //the delay time depends on the (repeat_times*len),make sure send successfullu before check err num and disable pcs loopback enable
    if(emac_test_emac_tx_rx_err_packet_num(emacid) == ESPSW_OK)
    {
#if DEBUG_VERBOSE
        printf(" ****** emacid_%d PCS near end loop back Pass !!!\n",emacid);
#endif
        ret = ESPSW_OK;
    }
    else{
        printf(" ****** emacid_%d PCS end loop back Fail !!!\n",emacid);
        ret = ESPSW_FAIL;
    }

    return ret;
}



// sfp loopback mode :tbx tx -> emac tx pcs tx-> 光纤环回 -> pcsrx-> emacrx ->  tbx rx 
static espsw_error_t emac_test_sfp_loopback_case(uint32_t emacid, uint32_t pseduo_random_val)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j, err_cnt=0;
    uint32_t tbx_repeat_num = 1000;// set '0' means infinite transmit
    uint32_t reg_val =0 ;

    uint8_t err_index[128] = {0};  // size need same as byte_init[]
    struct fal_tbx_pattern_switch20 tbx_tx_pattern;
    struct fal_tbx_pattern_switch20 tbx_tx_pattern_check;

    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    // printf("################# sfp near end loop back test#######################\n");

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));
    memset(&tbx_tx_pattern_check, 0, sizeof(struct fal_tbx_pattern_switch20));

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));

    uint8_t byte_init[128] = {0};

#if 1
    // if(pseduo_random_val>50)
    // {
    //     pseduo_random_val = 0x55;
    // }else{
    //     pseduo_random_val = 0xff;
    // }
    for(uint32_t i = 0;i<128;i++)
    {
        byte_init[i] = pseduo_random_val+(i>>1);
        // byte_init[i] = pseduo_random_val;
    }
    // 这里是lengh/type字段，当<1500时表示len含义，mac会对len字段检查，如果这里len填0，则tx就不会将所有128byte（1024byte）发送出去，会造成只会发前面14笔数据
    // if((byte_init[12] ==0) || (byte_init[13] ==0)) 
    {
        byte_init[12] = 0xff; //直接强制将length/type字段设置为 0xff ff
        byte_init[13] = 0xff;
    }
#endif
    memcpy(tbx_tx_pattern.pkt_hdr.byte, byte_init, sizeof(byte_init));

    // little endian change to big-endian style which align tbx sram store method
    uint64_t big_endian_array[16]={0}; //16 is 128/8(uint64_t is for 8bytes)

    // byte_init[0]-[7] : (0x8978675645342312) -> big_endian_array[0]:0x1223344556677889
    for (i = 0, j = 0; i < sizeof(byte_init)/sizeof(byte_init[0]); i += 8, j++) {
        uint64_t num = ((uint64_t)byte_init[i]) |
                   ((uint64_t)byte_init[i + 1] << 8) |
                   ((uint64_t)byte_init[i + 2] << 16) |
                   ((uint64_t)byte_init[i + 3] << 24) |
                   ((uint64_t)byte_init[i + 4] << 32) |
                   ((uint64_t)byte_init[i + 5] << 40) |
                   ((uint64_t)byte_init[i + 6] << 48) |
                   ((uint64_t)byte_init[i + 7] << 56);
    
        big_endian_array[j] = little_endian_to_big_endian_64(num);
    }
#if DEBUG_VERBOSE  
    for (i = 0; i < 16; i++) // intentionally printing 4 info to reduce content printing
    {
        uint32_t high_part = (uint32_t)(big_endian_array[i] >> 32); // 取得高32位
        uint32_t low_part = (uint32_t)(big_endian_array[i] & 0xFFFFFFFF); // 取得低32位

        // 64bit is 2 word
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i,low_part);
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i+1, high_part);

        // for(j = 0; j < 8; j++)
        // {
        //     printf("RAW tbx tx byte[%ld]: 0x%x\n", i*8+j, ((uint8_t *)&big_endian_array[i])[j]);
        // }

    }
#endif
    tbx_tx_pattern.ptn_info.low32b_tx.total_len = 1024;//1024
    tbx_tx_pattern.ptn_info.low32b_tx.repeat_num = tbx_repeat_num; // set '0' means infinite transmit
    tbx_tx_pattern.ptn_info.high32b_tx.next_pattern = 0; 
    tbx_tx_pattern.ptn_info.high32b_tx.dmac_mode = 0;  //  DMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.smac_mode = 0;  //  SMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.length_mode = 0;//  报文化长度：'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.tx_err_pkt = 0; //  0:当前pattern全部发送eop&（err=0）报文； 1：当前pattern全部发送eop&(err=1)报文 
    
    tbx_tx_pattern.agent_info.data[0] = 0x00;
    tbx_tx_pattern.agent_info.data[1] = 0x00;

    tbx_tx_pattern.payload_pad =0x2a;
    

    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    ret = fal_tbx_pattern_set_switch20(tbx_num,&tbx_tx_pattern);
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_set_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

    ret = fal_tbx_pattern_check_switch20(tbx_num,&tbx_tx_pattern_check);  
    
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_check_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }
#if DEBUG_VERBOSE
    printf("-------------------------- pattern check ---------------\n");
    printf("total_len = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.total_len);
    printf("repeat_num = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.repeat_num);
    printf("next_pattern = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.next_pattern);
    printf("dmac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.dmac_mode);
    printf("smac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.smac_mode);
    printf("length_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.length_mode);
    printf("tx_err_pkt = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.tx_err_pkt);

    printf("ptn_info.val[0] = 0x%lx ;  ptn_info.val[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.ptn_info.val[0],tbx_tx_pattern.ptn_info.val[1]);
    printf("agent_info.data[0] = 0x%lx ;  agent_info.data[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.agent_info.data[0],tbx_tx_pattern.agent_info.data[1]);

    printf("------------ check tbx tx pattern content!!! ---------\n");
    for(int i=0;i<32; i++)
    {   
        printf("tbx tx pattern word[%d]: 0x%08x\n",i,tbx_tx_pattern_check.pkt_hdr.word[i]);
    }
#endif
    fal_tbx_config(tbx_num, &tbx_config);
    /*config tbx rx start before tx start*/
    fal_tbx_rx_action(tbx_num, TRUE);

    // NOTE :temp use
    // fal_tbx_rx_action(tbx_num,false);//避免overflow的问题

    fal_tbx_tx_action(tbx_num, TX_START);

    // delay some time to make sure tbx tx send finished
    ets_delay_us(10000);
        
    fal_tbx_config_check(tbx_num, &tbx_config_chck);

#if DEBUG_VERBOSE  
    printf("emac_id = %d; tbx_num=%d; user_mode = %ld (1:A;2:B;3:C;4:D)\n",emacid, tbx_num,tbx_config_chck.user_mode);
    printf("cntp_en = %d\n",tbx_config_chck.cntp_en);
    printf("cntp_afull_stop_en = %d \n",tbx_config_chck.cntp_afull_stop_en);

    printf("tx_en = %d\n",tbx_config_chck.tx_en);
    printf("tx_fsm_state = %d \n",tbx_config_chck.tx_fsm_state);
    printf("tx_done = %d\n",tbx_config_chck.tx_done);
    printf("tx_conn_vld = %d \n",tbx_config_chck.tx_conn_vld);
    printf("tx_conn_rdy = %d \n",tbx_config_chck.tx_conn_rdy);  

    printf("rx_en = %d \n",tbx_config_chck.rx_en);
    printf("rx_fsm_state = %d\n",tbx_config_chck.rx_fsm_state);
    printf("rx_rdy_htime = %d \n",tbx_config_chck.rx_rdy_htime);
    printf("rx_rdy_ltime = %d\n",tbx_config_chck.rx_rdy_ltime);
    printf("rx_conn_vld = %d \n",tbx_config_chck.rx_conn_vld);
    printf("rx_conn_rdy = %d\n",tbx_config_chck.rx_conn_rdy);

    printf("data_pload = 0x%x\n",tbx_config_chck.data_pload);
#endif

    fal_tbx_rx_data_check_switch20(tbx_num,&tbx_rx_pattern);

#if DEBUG_VERBOSE  
    printf("------------ check tbx rx pattern content!!! ---------\n");

    printf("low32b_rx.total_len = 0x%08x; rx_ptninfo_val[0]=%08x; rx_ptninfo_val[1]=%08x\n",tbx_rx_pattern.ptn_info.low32b_rx.total_len,tbx_rx_pattern.ptn_info.val[0],tbx_rx_pattern.ptn_info.val[1]);
    printf("low32b_rx.cur_pkt_err = 0x%x\n",tbx_rx_pattern.ptn_info.low32b_rx.cur_pkt_err);

    for(int i=0;i<32; i++)
    {   
        printf("tbx rx pattern word[%d]: 0x%08x\n",i,tbx_rx_pattern.pkt_hdr.word[i]);
    }
#endif

    //note:tbx tx sram is placed by BIG Endian(64bits) , 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (Address[7]->Address[6]-> ... ->Address[0]) 
    for (i = 0; i < sizeof(big_endian_array)/sizeof(big_endian_array[0]); i++)  
    {
        for(j = 0; j < 8; j++)
        {
            if (tbx_rx_pattern.pkt_hdr.byte[i*8+j] != ((uint8_t *)&big_endian_array[i])[j])
            {
                err_index[err_cnt++] = i*8+j;                
            }
        }
    }

    if(err_cnt > 0)
    {       
        printf("\n");
        printf(" --------------------------tx & rx diff list --------------------------\n"); 
#if DEBUG_VERBOSE        
        for (j = 0; j < err_cnt; j++)  
        {
            printf("Golden send:tbx tx byte[%ld]:0x%lx  VS. Loopback_Rev: tbx rx byte[%ld]: 0x%lx\n", err_index[j], ((uint8_t *)&big_endian_array[err_index[j]/8])[err_index[j]%8], err_index[j], tbx_rx_pattern.pkt_hdr.byte[err_index[j]]);
        }
#endif
         printf("     *** sfp loop back Fail !!!\n");
        // assert(0);
        return ESPSW_FAIL; //return！！
    }
    else{
#if DEBUG_VERBOSE
        printf("     *** tbx tx content = tbx rx content !!!\n");
#endif
    }

// 插拔光纤测试时，需要mark此
/* 

    if(emac_test_emac_tx_rx_err_packet_num(emacid) == ESPSW_OK)
    {
#if DEBUG_VERBOSE
        printf(" ****** emacid_%d SFP loop back Pass !!!\n",emacid);
#endif
        ret = ESPSW_OK;
    }
    else{
#if DEBUG_VERBOSE
        printf(" ****** emacid_%d SFP loop back Fail !!!\n",emacid);
#endif
        ret = ESPSW_FAIL;
    }
*/
    return ret;
}


// to linkartner
static espsw_error_t emac_test_tx_test_case(uint32_t emacid,uint32_t len,uint32_t repeat_num)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j, err_cnt=0;
    uint32_t tbx_repeat_num = repeat_num;// set '0' means infinite transmit
    uint32_t reg_val =0 ;

    uint8_t err_index[128] = {0};  // size need same as byte_init[]
    struct fal_tbx_pattern_switch20 tbx_tx_pattern;
    struct fal_tbx_pattern_switch20 tbx_tx_pattern_check;

    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    // printf("################# tx test#######################\n");

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));
    memset(&tbx_tx_pattern_check, 0, sizeof(struct fal_tbx_pattern_switch20));

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));

    uint8_t  byte_init[128] = {
        0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xa4, 0xbb,  
        0x6d, 0xb8, 0x11, 0x11,
        0x22, 0x23, 0x33, 0x44,

        0x55, 0x66, 0x77, 0x99,
        0x99, 0xaa, 0xbb, 0xcc,
        0xdd, 0xee, 0xff, 0xff
    };
#if 0
    for(uint32_t i = 0;i<128;i++)
    {
        byte_init[i] = i>>1;
    }
#endif
    memcpy(tbx_tx_pattern.pkt_hdr.byte, byte_init, sizeof(byte_init));

    // little endian change to big-endian style which align tbx sram store method
    uint64_t big_endian_array[16]={0}; //16 is 128/8(uint64_t is for 8bytes)

    // byte_init[0]-[7] : (0x8978675645342312) -> big_endian_array[0]:0x1223344556677889
    for (i = 0, j = 0; i < sizeof(byte_init)/sizeof(byte_init[0]); i += 8, j++) {
        uint64_t num = ((uint64_t)byte_init[i]) |
                   ((uint64_t)byte_init[i + 1] << 8) |
                   ((uint64_t)byte_init[i + 2] << 16) |
                   ((uint64_t)byte_init[i + 3] << 24) |
                   ((uint64_t)byte_init[i + 4] << 32) |
                   ((uint64_t)byte_init[i + 5] << 40) |
                   ((uint64_t)byte_init[i + 6] << 48) |
                   ((uint64_t)byte_init[i + 7] << 56);
    
        big_endian_array[j] = little_endian_to_big_endian_64(num);
    }

    tbx_tx_pattern.ptn_info.low32b_tx.total_len = len;//1024
    tbx_tx_pattern.ptn_info.low32b_tx.repeat_num = tbx_repeat_num; // set '0' means infinite transmit
    tbx_tx_pattern.ptn_info.high32b_tx.next_pattern = 0; 
    tbx_tx_pattern.ptn_info.high32b_tx.dmac_mode = 0;  //  DMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.smac_mode = 0;  //  SMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.length_mode = 0;//  报文化长度：'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.tx_err_pkt = 0; //  0:当前pattern全部发送eop&（err=0）报文； 1：当前pattern全部发送eop&(err=1)报文 
    
    tbx_tx_pattern.agent_info.data[0] = 0x00;
    tbx_tx_pattern.agent_info.data[1] = 0x00;

    tbx_tx_pattern.payload_pad =0x2a;
    

    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    ret = fal_tbx_pattern_set_switch20(tbx_num,&tbx_tx_pattern);
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_set_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

    ret = fal_tbx_pattern_check_switch20(tbx_num,&tbx_tx_pattern_check);  
    
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_check_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

#if DEBUG_VERBOSE
    printf("-------------------------- pattern check ---------------\n");
    printf("total_len = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.total_len);
    printf("repeat_num = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.repeat_num);
    printf("next_pattern = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.next_pattern);
    printf("dmac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.dmac_mode);
    printf("smac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.smac_mode);
    printf("length_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.length_mode);
    printf("tx_err_pkt = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.tx_err_pkt);

    printf("ptn_info.val[0] = 0x%lx ;  ptn_info.val[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.ptn_info.val[0],tbx_tx_pattern.ptn_info.val[1]);
    printf("agent_info.data[0] = 0x%lx ;  agent_info.data[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.agent_info.data[0],tbx_tx_pattern.agent_info.data[1]);

    printf("------------ check tbx tx pattern content!!! ---------\n");
    for(int i=0;i<32; i++)
    {   
        printf("tbx tx pattern word[%d]: 0x%08x\n",i,tbx_tx_pattern_check.pkt_hdr.word[i]);
    }
#endif
    fal_tbx_config(tbx_num, &tbx_config);
    /*config tbx rx start before tx start*/
    fal_tbx_rx_action(tbx_num, TRUE);
    
    fal_tbx_tx_action(tbx_num, TX_START);
        
    fal_tbx_config_check(tbx_num, &tbx_config_chck);
#if DEBUG_VERBOSE
    printf("emac_id = %d; tbx_num=%d; user_mode = %ld (1:A;2:B;3:C;4:D)\n",emacid, tbx_num,tbx_config_chck.user_mode);
    printf("cntp_en = %d\n",tbx_config_chck.cntp_en);
    printf("cntp_afull_stop_en = %d \n",tbx_config_chck.cntp_afull_stop_en);

    printf("tx_en = %d\n",tbx_config_chck.tx_en);
    printf("tx_fsm_state = %d \n",tbx_config_chck.tx_fsm_state);
    printf("tx_done = %d\n",tbx_config_chck.tx_done);
    printf("tx_conn_vld = %d \n",tbx_config_chck.tx_conn_vld);
    printf("tx_conn_rdy = %d \n",tbx_config_chck.tx_conn_rdy);  

    printf("rx_en = %d \n",tbx_config_chck.rx_en);
    printf("rx_fsm_state = %d\n",tbx_config_chck.rx_fsm_state);
    printf("rx_rdy_htime = %d \n",tbx_config_chck.rx_rdy_htime);
    printf("rx_rdy_ltime = %d\n",tbx_config_chck.rx_rdy_ltime);
    printf("rx_conn_vld = %d \n",tbx_config_chck.rx_conn_vld);
    printf("rx_conn_rdy = %d\n",tbx_config_chck.rx_conn_rdy);

    printf("data_pload = 0x%x\n",tbx_config_chck.data_pload);
#endif
    return ret;
}


static espsw_error_t emac_test_cntp_read_tbx(uint32_t emacid, uint32_t tbx_num,  struct tbx_cntp_num_list *tbx_cntp_num)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t cai_value;

    uint32_t tbxx_cntp_start_addr;
    
    if(emacid == 1)
    {
        tbx_num = 0;
        tbxx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
        tbxx_cntp_start_addr = SWITCH_EIBCNTP_TBX1_RX_PACKET_NUM_31TO0_REG;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    uint64_t cntp_cnt = REG_READ(tbxx_cntp_start_addr) + (REG_READ(tbxx_cntp_start_addr + 4) << 32);

    // printf("emacid:%ld, tbx_cntp_list_addr: %p,tbx rx CNTP:%ld !!\n",port, (void*)(tbx_cntp_list_addr + (0*8 + 0x40)),cai_value);
    tbx_cntp_num[tbx_num].rx_packet_num = cntp_cnt;


    // uint32_t emac_rx_total_frame_cnt_module_id = 0;
    // uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + emac_rx_total_frame_cnt_module_id*8 + 0x40), (uint8_t *)&cai_value);
    // printf("emacid:%ld,emac cntprx total frame cnt  Module_id: %ld: emac rx cntp %ld!!\n",port,emac_rx_total_frame_cnt_module_id,cai_value);
    // emac_cntp_num->rx_total_frame = cai_value;


    return ret;
}
// from linkartner
static espsw_error_t emac_test_rx_test_case(uint32_t emacid)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j;

    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    // printf("################# tx test#######################\n");

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));


    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    fal_tbx_config(tbx_num, &tbx_config);
    
    /*config tbx rx start */
    fal_tbx_rx_action(tbx_num, TRUE);
        
    fal_tbx_config_check(tbx_num, &tbx_config_chck);
#if DEBUG_VERBOSE
    printf("emac_id = %d; tbx_num=%d; user_mode = %ld (1:A;2:B;3:C;4:D)\n",emacid, tbx_num,tbx_config_chck.user_mode);
    printf("cntp_en = %d\n",tbx_config_chck.cntp_en);
    printf("cntp_afull_stop_en = %d \n",tbx_config_chck.cntp_afull_stop_en);

    printf("rx_en = %d \n",tbx_config_chck.rx_en);
    printf("rx_fsm_state = %d\n",tbx_config_chck.rx_fsm_state);
    printf("rx_rdy_htime = %d \n",tbx_config_chck.rx_rdy_htime);
    printf("rx_rdy_ltime = %d\n",tbx_config_chck.rx_rdy_ltime);
    printf("rx_conn_vld = %d \n",tbx_config_chck.rx_conn_vld);
    printf("rx_conn_rdy = %d\n",tbx_config_chck.rx_conn_rdy);
#endif

    printf("################# rx check #######################\n");

    emac_test_cntp_read_tbx(emacid,tbx_num,tbx_cntp_num);

    fal_tbx_rx_data_check_switch20(tbx_num,&tbx_rx_pattern);
    return ret;
}


espsw_error_t emac_test_check_key_reg_val(uint32_t emac_id, enum fal_port_speed speed)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t rx_meter, tx_meter, debug_val;

    uint32_t addr_test = EMAC_CFG_REG + (emac_id * EMAC_OFFSET);

    addr_test = EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&rx_meter);
    printf("EMAC_RX_METER_CNT_REG addr = %p, EMAC_RX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,rx_meter);

    addr_test = EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&tx_meter);
    printf("EMAC_TX_METER_CNT_REG addr = %p, EMAC_TX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,tx_meter);

    if (speed == FAL_SPEED_10){
        g_txrx_meter_up_limit = 2503;
        g_txrx_meter_low_limit = 2497;
        // // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 2.5MHz will be d'2500 (0x9c4)
        // assert(rx_meter>2497 && rx_meter<2503);
        // assert(tx_meter>2497 && tx_meter<2503);
    }
    else if (speed == FAL_SPEED_100){
        g_txrx_meter_up_limit = 25005;
        g_txrx_meter_low_limit = 24995;
        // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 25MHz will be d'25000 (0x61a8)
        assert(rx_meter>24995 && rx_meter<25005);
        assert(tx_meter>24995 && tx_meter<25005);
    } 
    else if (speed == FAL_SPEED_1000){
        g_txrx_meter_up_limit = 125005;
        g_txrx_meter_low_limit = 124995;
        // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 125MHz will be d'125000 (0x1e848)
        // assert(rx_meter>124995 && rx_meter<125005);
        // assert(tx_meter>124995 && tx_meter<125005);
    }
    else {
        // 156.25Mbps
        g_txrx_meter_up_limit = 15635;
        g_txrx_meter_low_limit = 15615;
    }

    addr_test = EMAC_DEBUG_STATUS_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(EMAC_DEBUG_STATUS_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&debug_val);
    printf("EMAC_DEBUG_STATUS_REG addr = %p, EMAC_DEBUG_STATUS_REG = 0x%08lx (should be 0)!!\n",(void*)addr_test,debug_val);
    // assert(debug_val == 0x00); //make sure

    return ret;
}


static espsw_error_t emac_test_reg_read_all(uint32_t emac_id)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t cai_value;
    uint8_t k ;

    for(uint32_t i =SWITCH_GLB_DATE_REG; i<(SWITCH_GLB_CLK_EN_REG+4);i+=4)
    {
        uhal_reg_get(i, (uint8_t *)&cai_value);
        printf("SWITCH_GLB_REG addr = %p, result = 0x%08lx\n",(void*)(i),cai_value);
    }

    printf(" - ----------------------------------------- \n");
    for(uint32_t i =SWITCH_EMAC_EMAC_DATE_REG; i<(SWITCH_EMAC_EMAC_CLK_EN_REG+4);i+=4)
    {
        uhal_reg_get(i + (emac_id * EMAC_OFFSET), (uint8_t *)&cai_value);
        printf("EMAC_REG addr = %p, result = 0x%08lx\n",(void*)(i + (emac_id * EMAC_OFFSET)),cai_value);
    }

    printf(" - ----------------------------------------- \n");
    for(uint32_t i =SWITCH_PCS_DATE_REG; i<(SWITCH_PCS_CLK_EN_REG+4);i+=4)
    {
        uhal_reg_get(i + (emac_id * PCS_OFFSET), (uint8_t *)&cai_value);
        printf("SWITCH_PCS_REG addr = %p, result = 0x%08lx\n",(void*)(i),cai_value);
    }

    printf(" - --------------serdes(FPGA)----------------------- \n");
    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    return ret;
}


espsw_error_t emac_test_emac_reg_check(uint32_t emac_id)
{
    // uint32_t emac_id = 1; //emac1

    emac_test_reg_read_all(emac_id);

    return ESPSW_OK;
}



espsw_error_t emac_test_dis_mru_test(uint32_t emacid, bool en)
{
    uhal_reg_field_set(SWITCH_EMAC_EMAC_MAXPKT_REG +(emacid * EMAC_OFFSET), SWITCH_EMAC_EMAC_RX_MAXPKT_DIS_S, 1, en);
    // uhal_reg_field_set(SWITCH_EMAC_EMAC_MAXPKT_REG +(emacid * EMAC_OFFSET), SWITCH_EMAC_EMAC_TX_MAXPKT_DIS_S, 1, en);
    return  ESPSW_OK;
}


espsw_error_t emac_test_tx_rx_flow_ctrl_on(uint32_t emacid, bool en)
{
    uhal_reg_field_set(SWITCH_EMAC_EMAC_FLOW_CTRL_REG +(emacid * EMAC_OFFSET), SWITCH_EMAC_EMAC_RX_FLOWCTRL_E_S, 1, 1);
    uhal_reg_field_set(SWITCH_EMAC_EMAC_FLOW_CTRL_REG +(emacid * EMAC_OFFSET), SWITCH_EMAC_EMAC_TX_FLOWCTRL_E_S, 1, 1);
    return  ESPSW_OK;
}

espsw_error_t emac_test_tx_rx_flow_ctrl_off(uint32_t emacid, bool en)
{
    uhal_reg_field_set(SWITCH_EMAC_EMAC_FLOW_CTRL_REG +(emacid * EMAC_OFFSET), SWITCH_EMAC_EMAC_RX_FLOWCTRL_E_S, 1, 0);
    uhal_reg_field_set(SWITCH_EMAC_EMAC_FLOW_CTRL_REG +(emacid * EMAC_OFFSET), SWITCH_EMAC_EMAC_TX_FLOWCTRL_E_S, 1, 0);
    return  ESPSW_OK;
}

espsw_error_t emac_test_rx_pause_forward_on(uint32_t emacid, bool en)
{
    uhal_reg_field_set(SWITCH_EMAC_EMAC_FLOW_CTRL_REG +(emacid * EMAC_OFFSET), SWITCH_EMAC_EMAC_PAUSE_FORWARD_S, 1, 1);
    return  ESPSW_OK;
}

espsw_error_t emac_test_tbx_tx_ctrl(uint32_t emacid, enum fal_tbx_tx_action tx_act)
{
    uint32_t tbx_num = 0xff;

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }
    fal_tbx_tx_action(tbx_num, tx_act);

    return  ESPSW_OK;
}

espsw_error_t emac_test_tbx_tx_stop(unsigned long *arg_val, uint32_t emacid)
{
    emac_test_tbx_tx_ctrl(emacid,TX_STOP);

    return  ESPSW_OK;
}


espsw_error_t emac_test_basic_run(unsigned long *arg_val, uint32_t emacid)
{
    // emac_test_emac_glb_init();
    printf("------------ Switch 2.0 Test ------------\n");

    uint32_t emac_id = emacid; //emac1

    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);

    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));

    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);


#if CHECK_CLK_ON_PCS_NEARLOOP_EN //temp check
    printf(" ---- enable pcs_near_end_loopback to check tx&rx clkmter!!!\n");
    printf("now you can disconnect (optical fiber)SFP,and rx clk will be assigned equal to txclk\n");

    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_NEAREND_LPBK_EN_S, 1, 1); // pcs near-end loopback enable
    ets_delay_us(5000);
    for(int i=0;i<10;i++)
    {
        emac_test_check_txrx_clk_meter(NULL);  
    }

    printf(" ---- disable pcs_near_end_loopback!!!\n");
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_NEAREND_LPBK_EN_S, 1, 0); // pcs near-end loopback disable
#endif


    return  ESPSW_OK;
}


espsw_error_t emac_test_check_txrx_clk_meter(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val;
    uint32_t debug_val;

    uint32_t rx_meter, tx_meter, addr_test;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    // printf("SWITCH_EMAC_EMAC_CFG_REG addr=%p,1---SWITCH_EMAC_EMAC_CFG_REG = 0x%08lx!!\n",(void*)(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET)),reg_val);

#if (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_20M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000065f); //set 1ms in 20Mhz env
#elif (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_40M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000033f); //set 1ms in 40Mhz env
#endif

    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_FREQ_METER_E_S, 1, 1));

    //open TX/RX
    // ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_RECEIVE_E_S, 1, 1));
    // ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TRANSMIT_E_S, 1, 1));


    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    // printf("SWITCH_EMAC_EMAC_CFG_REG addr=%p,2---SWITCH_EMAC_EMAC_CFG_REG = 0x%08lx!!\n",(void*)(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET)),reg_val);


    addr_test = SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&rx_meter);
    printf("EMAC_RX_METER_CNT_REG addr = %p, EMAC_RX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,rx_meter);

    addr_test = SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&tx_meter);
    printf("EMAC_TX_METER_CNT_REG addr = %p, EMAC_TX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,tx_meter);
    

    return  ESPSW_OK;
}

espsw_error_t emac_test_mac_near_end_loopback(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;

    uint32_t emac_id = 1; //emac1

    struct tbx_pattern_info ptn_val = {0};

    ptn_val = *(struct tbx_pattern_info*)(arg_val);

    // printf("ptn.total_len = %d, ptn.repeat_num=%d\n",ptn_val.total_len,ptn_val.repeat_num);
    
    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
#if DEBUG_VERBOSE1
    printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));
#endif

    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);
#if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
#endif
    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);

    for(uint32_t i=0;i<100;i++)
    {
        if(emac_test_near_end_loopback_case(emac_id,&ptn_val) == ESPSW_FAIL)
		{
			printf("[no repeat reset]mac nearend loopback fail at %d/100*1000 times\n",i+1);
            ret = ESPSW_FAIL;
			break;
		}else{
			if(!((i+1)%10))
			{
				printf("[no repeat reset]mac nearend loopback pass at %d/100*1000 times\n",i+1);
			}
		}
    }

    return  ret;
}

espsw_error_t emac_test_pcs_near_end_loopback(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    
    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    //printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));
    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);

    uhal_reg_field_set( SWITCH_PCS_CLK_EN_REG + emac_id*PCS_OFFSET, SWITCH_PCS_CLK_EN_S, 1, 1); // pcs clk enable.  TBD？？ 需放在emac_test_emac_glb_init 处吗？
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 1); // pcs auto negotiation enable
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_NEAREND_LPBK_EN_S, 1, 1); // pcs near-end loopback enable

#if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
#endif

    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);

    return emac_test_pcs_near_end_loopback_case(emac_id);
}

espsw_error_t emac_test_pcs_near_end_loopback_no_repeat_reset_huge_times(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t emac_id = 1; //emac1
    uint32_t huge_times = 5000;
    
    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    //printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);

    uhal_reg_field_set( SWITCH_PCS_CLK_EN_REG + emac_id*PCS_OFFSET, SWITCH_PCS_CLK_EN_S, 1, 1); // pcs clk enable.  TBD？？ 需放在emac_test_emac_glb_init 处吗？
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 1); // pcs auto negotiation enable
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_NEAREND_LPBK_EN_S, 1, 1); // pcs near-end loopback enable
    ets_delay_us(5000);

#if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
#endif

    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);

    for(uint32_t i=0;i<huge_times;i++)
    {
        if(emac_test_pcs_near_end_loopback_case(emac_id) == ESPSW_FAIL)
		{
			printf("[no repeat reset]pcs neadend loopback fail at %d/%d*1000 times\n",i+1,huge_times);
#if STOP_IF_ERR         
            ret = ESPSW_FAIL;
            break;
#else
            emac_test_check_all_cntp(emac_id);
#endif

		}else{
			if(!((i+1)%1000))
			{
				printf("[no repeat reset]pcs neadend loopback pass at %d/%d*1000 times\n",i+1,huge_times);
			}
		}
    }

    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_NEAREND_LPBK_EN_S, 1, 0); // pcs near-end loopback disabled
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 0); // pcs auto negotiation disable
    return ret;
}



espsw_error_t emac_test_pcs_near_end_loopback_no_repeat_reset(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t emac_id = 1; //emac1
    uint32_t inter_loop = 10; //emac1
    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    //printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);

#if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
#endif

    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);


    uhal_reg_field_set( SWITCH_PCS_CLK_EN_REG + emac_id*PCS_OFFSET, SWITCH_PCS_CLK_EN_S, 1, 1); // pcs clk enable.  TBD？？ 需放在emac_test_emac_glb_init 处吗？
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 1); // pcs auto negotiation enable
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_NEAREND_LPBK_EN_S, 1, 1); // pcs near-end loopback enable

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);

    // set with auto-negotiation, means tx will send config (at rgmii mode and sgmii mode)
    uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TX_CONFIG_S, 1, 1);
    // check pcs negotiation status
    pcs_check_auto_negotiation(emac_id); //
    ets_delay_us(5000);


    for(uint32_t i=0;i<inter_loop;i++)
    {
        if(emac_test_pcs_near_end_loopback_case(emac_id) == ESPSW_FAIL)
		{
			printf("[no repeat reset]pcs neadend loopback fail at %d/%d*1000 times\n",i+1,inter_loop);
            ret = ESPSW_FAIL;
			break;
		}else{
			if(!((i+1)%10))
			{
				printf("[no repeat reset]pcs neadend loopback pass at %d/%d*1000 times\n",i+1,inter_loop);
			}
		}
    }

    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_NEAREND_LPBK_EN_S, 1, 0); // pcs near-end loopback disabled
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 0); // pcs auto negotiation disable
    return ret;
}



espsw_error_t emac_test_sfp_loopback(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t emac_id = 1; //emac1
    uint32 random_val=0,reg_val=0;
    // uint32_t huge_times = 30;
    
    uint32_t huge_times = *(uint32_t*)(arg_val);
    
    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);

    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));

    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);

    uhal_reg_field_set( SWITCH_PCS_CLK_EN_REG + emac_id*PCS_OFFSET, SWITCH_PCS_CLK_EN_S, 1, 1); // pcs clk enable.  TBD？？ 需放在emac_test_emac_glb_init 处吗？
#if 1
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 1); // pcs auto negotiation enable
    // set with auto-negotiation, means tx will send config (at rgmii mode and sgmii mode)
    uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TX_CONFIG_S, 1, 1);
    pcs_check_auto_negotiation(emac_id);
#else
    // uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 0); // pcs auto negotiation disable
    // printf("SWITCH_PCS_CTRL_REG = 0x%lx!\n",REG_READ(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET));

    uhal_reg_field_get(SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG + (emac_id * EMAC_OFFSET),SWITCH_EMAC_EMAC_LINK_SPEED_S,2, (uint8_t *)&reg_val);
    printf("link status = %d (0:10M, 1:100M ,2:2.5G/1G)!\n",reg_val);

    uhal_reg_field_get(SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG + (emac_id * EMAC_OFFSET),SWITCH_EMAC_EMAC_LINK_MODE_S,1, (uint8_t *)&reg_val);
    printf("link mode = %d (0:half-duplex, 1:full-duplex)!\n",reg_val);
    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_WORD_ALIGNED_S,1, (uint8_t *)&reg_val);
    printf("PCS_WORD_ALIGNED = 0x%lx !\n",reg_val);

    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_SYNC_STATUS_S,1, (uint8_t *)&reg_val);
    printf("PCS_SYNC_STATUs = 0x%lx !\n",reg_val);
#endif    
    ets_delay_us(1000000); //1s

    

    for(uint32 i=0,random_val=0;i<huge_times;i++,random_val+=1)
    {
        if(emac_test_sfp_loopback_case(emac_id,random_val)== ESPSW_FAIL)
		{
			printf("sfp loopback fail at %d/%d*1000 times\n",i+1,huge_times);
            
            bool clk_rev_val = REG_GET_BIT(MP_SYS_PROBEA_CTRL_REG,BIT(3));

            if(clk_rev_val) // 反相位
            {                
                //CLK REVERSE
                uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_MOD_SEL_S,16,0x00);// 原相位
                printf("set rxclk reverse phase!\n");

            }else{ //原相位
                //CLK REVERSE
                uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_MOD_SEL_S,16,BIT(3));// 反相位
                printf("set rxclk reverse phase!\n");
            }

            ret = ESPSW_FAIL;
#if STOP_IF_ERR
			break;
#endif
		}else{
			if(!((i+1)%10))
			{
				printf("sfploopback pass at %d/%d*1000 times\n",i+1,huge_times);
			}
		}
    }
    return  ret;

}


espsw_error_t emac_test_fpga_serdes_pcs_pma_loopback(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t emac_id = 1; //emac1
    uint32 random_val=0,reg_val=0;
    uint32_t huge_times = 50000;
    
    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);


    // FPGA SEDES-PCS NEAREND LOOPBACK
    // uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_MOD_SEL,16,1);


    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));

    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);

    uhal_reg_field_set( SWITCH_PCS_CLK_EN_REG + emac_id*PCS_OFFSET, SWITCH_PCS_CLK_EN_S, 1, 1); // pcs clk enable.  TBD？？ 需放在emac_test_emac_glb_init 处吗？
    
    #if 1

    uint32_t check_time = 100;
    uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 0); // pcs auto negotiation disable
    printf("SWITCH_PCS_CTRL_REG = 0x%lx!\n",REG_READ(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET));

    uhal_reg_field_get(SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG + (emac_id * EMAC_OFFSET),SWITCH_EMAC_EMAC_LINK_SPEED_S,2, (uint8_t *)&reg_val);
    printf("after nego:link status = %d (0:10M, 1:100M ,2:2.5G/1G)!\n",reg_val);

    uhal_reg_field_get(SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG + (emac_id * EMAC_OFFSET),SWITCH_EMAC_EMAC_LINK_MODE_S,1, (uint8_t *)&reg_val);
    printf("after nego:link mode = %d (0:half-duplex, 1:full-duplex)!\n",reg_val);

    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_WORD_ALIGNED_OFST_S,4, (uint8_t *)&reg_val);
    printf("after nego:PCS_WORD_ALIGNED_offset = 0x%lx !\n",reg_val);
    
    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_WORD_ALIGNED_S,1, (uint8_t *)&reg_val);
    printf("after nego:PCS_WORD_ALIGNED = 0x%lx !\n",reg_val);

    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_AN_STATE_S,8, (uint8_t *)&reg_val);
    printf("after nego:AN_STATE = 0x%lx !\n",reg_val);
    uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_SYNC_STATUS_S,1, (uint8_t *)&reg_val);
    printf("after nego:PCS_SYNC_STATUs = 0x%lx !\n",reg_val);

    while(check_time--)
    {
        // uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_WORD_ALIGNED_OFST_S,4, (uint8_t *)&reg_val);
        // printf("after nego:PCS_WORD_ALIGNED_offset = 0x%lx !\n",reg_val);
        
        // uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_WORD_ALIGNED_S,1, (uint8_t *)&reg_val);
        // printf("after nego:PCS_WORD_ALIGNED = 0x%lx !\n",reg_val);

        // uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_AN_STATE_S,8, (uint8_t *)&reg_val);
        // uhal_reg_field_get(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET),SWITCH_PCS_SYNC_STATUS_S,1, (uint8_t *)&reg_val);
        reg_val = REG_READ(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET));
        // printf("after nego:PCS_SYNC_STATUs = 0x%lx !\n",reg_val);
        // if(reg_val)
        // {
        //     printf("---------------------------- !\n");
        //     ets_delay_us(1000000);
        // }
        if((reg_val & SWITCH_PCS_SYNC_STATUS) == SWITCH_PCS_SYNC_STATUS)
        {
            printf(" !!!! pcs sync at checktime = %d\n",(100-check_time));

            while(reg_val&SWITCH_PCS_SYNC_STATUS)
            {
                reg_val = REG_READ(SWITCH_PCS_AN_STATUS_REG + (emac_id * PCS_OFFSET));
            }
            printf(" !!!! pcs sync lsot again !!!!!!\n\n\n\n\n");
            return  ESPSW_OK;
        }
        ets_delay_us(30000);
    }
    return  ESPSW_FAIL;
    #else
    // uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 1); // pcs auto negotiation enable

    // set with auto-negotiation, means tx will send config (at rgmii mode and sgmii mode)
    // uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TX_CONFIG_S, 1, 1);
    pcs_check_auto_negotiation(emac_id);


    ets_delay_us(1000);

    for(uint32 i=0,random_val=0;i<huge_times;i++,random_val+=1)
    {
        if(emac_test_sfp_loopback_case(emac_id,random_val)== ESPSW_FAIL)
		{
			printf("sfp loopback fail at %d/%d*1000 times\n",huge_times,i+1);

            ret = ESPSW_FAIL;
#if STOP_IF_ERR
			break;
#endif
		}else{
			if(!((i+1)%10))
			{
				printf("sfploopback pass at %d/%d*1000 times\n",huge_times,i+1);
			}
		}
    }
    #endif
    return  ret;

}


// communication with linkpater：TX test
espsw_error_t emac_test_tx_test_to_linkpartner_no_reset(unsigned long *arg_val)
{
    // uint32_t loop = 2000;
    uint32_t emac_id = 1; //emac1
    // for(uint32_t tx=0; tx<loop;tx++)
    // {
    //     emac_test_tx_test_case(emac_id,1024,1000); //emac_test_tx_check(emacid,1024,1000)

    //     // ets_delay_us(200);
    //     ets_delay_us(12000);
    // }
    // emac_test_check_all_cntp(emac_id);

    emac_test_tx_test_case(emac_id,1024,0); //emac_test_tx_check(emacid,1024,1000)
}

espsw_error_t emac_test_tx_test_to_linkpartner_no_reset_max_9716(unsigned long *arg_val)
{
    // uint32_t loop = 2000;
    uint32_t emac_id = 1; //emac1
    // for(uint32_t tx=0; tx<loop;tx++)
    // {
    //     emac_test_tx_test_case(emac_id,1024,1000); //emac_test_tx_check(emacid,1024,1000)

    //     // ets_delay_us(200);
    //     ets_delay_us(12000);
    // }
    // emac_test_check_all_cntp(emac_id);

    emac_test_tx_test_case(emac_id,9716,0); //emac_test_tx_check(emacid,1024,1000)
}


// communication with linkpater：TX test
espsw_error_t emac_test_tx_test_to_linkpartner(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    uint32_t reg_val = 0,check_time=100;

    g_PCS_NEG_ON = *(bool*)(arg_val);

    printf("pcs auto negotiation state: %d \n",g_PCS_NEG_ON);

    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);

    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));

    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);

    uhal_reg_field_set(SWITCH_PCS_CLK_EN_REG + emac_id*PCS_OFFSET, SWITCH_PCS_CLK_EN_S, 1, 1); // pcs clk enable.  TBD？？ 需放在emac_test_emac_glb_init 处吗？
    
    
    if(g_PCS_NEG_ON == TRUE)
    {
        // set with auto-negotiation, means tx will send config (at rgmii mode and sgmii mode)
        uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TX_CONFIG_S, 1, 1);
        uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 1); // pcs auto negotiation enable

        ets_delay_us(100000);
        printf("check negotiation status ..... \n");
        pcs_check_auto_negotiation(emac_id);

        // NOTE: it is required to delay some time to make sure both side is ready and sent packet can be received by link partner
        ets_delay_us(3000000);
        ets_delay_us(1000000);

    }else{
        uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 0); // pcs auto negotiation disable

        ets_delay_us(100000);
        pcs_check_auto_negotiation(emac_id);

        // NOTE: it is required to delay some time to make sure both side is ready and sent packet can be received by link partner
        ets_delay_us(3000000);

        ets_delay_us(1000000);
        if(emac_test_emac_check_rx_packet_received(emac_id) == ESPSW_FAIL)
        {
            //CLK REVERSE
            uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_MOD_SEL_S,16,BIT(3));
            printf("set rxclk reverse phase!\n");
        }
    }


    for(uint32_t tx=0; tx<1000;tx++)
    {
        emac_test_tx_test_case(emac_id,1024,1000); //emac_test_tx_check(emacid,1024,1000)

        // ets_delay_us(200);
        ets_delay_us(100000);
    }

    // ets_delay_us(100000);
    
    // emac_test_check_all_cntp(emac_id);
    return  ESPSW_OK;

}

// communication with linkpater：RX test
espsw_error_t emac_test_rx_test_from_linkpartner(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    uint32_t reg_val = 0,check_time=100;
    
    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);

    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));

    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);

    uhal_reg_field_set(SWITCH_PCS_CLK_EN_REG + emac_id*PCS_OFFSET, SWITCH_PCS_CLK_EN_S, 1, 1); // pcs clk enable.  TBD？？ 需放在emac_test_emac_glb_init 处吗？
    
    if(g_PCS_NEG_ON == TRUE)
    {
        // set with auto-negotiation, means tx will send config (at rgmii mode and sgmii mode)
        uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TX_CONFIG_S, 1, 1);
        uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 1); // pcs auto negotiation enable

        ets_delay_us(10000);
        printf("check negotiation status ..... \n");
        pcs_check_auto_negotiation(emac_id);

        // NOTE: it is required to delay some time to make sure both side is ready and sent packet can be received by link partner
        ets_delay_us(3000000);

        // /*config tbx rx start*/
        // fal_tbx_rx_action(0, TRUE);
        // // open emac rx
        // ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_RECEIVE_E_S, 1, 1));
        ets_delay_us(1000000);

    }else{
        uhal_reg_field_set(SWITCH_PCS_CTRL_REG + emac_id*PCS_OFFSET, SWITCH_PCS_AN_EN_S, 1, 0); // pcs auto negotiation disable

        ets_delay_us(10000);
        pcs_check_auto_negotiation(emac_id);

        // NOTE: it is required to delay some time to make sure both side is ready and sent packet can be received by link partner
        ets_delay_us(3000000);

        // /*config tbx rx start*/
        // fal_tbx_rx_action(0, TRUE);
        // // open emac rx
        // ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_RECEIVE_E_S, 1, 1));

        ets_delay_us(1000000);
        if(emac_test_emac_check_rx_packet_received(emac_id) == ESPSW_FAIL)
        {
            //CLK REVERSE
            uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_MOD_SEL_S,16,BIT(3));
            printf("set rxclk reverse phase!\n");
        }
    }
    
    emac_test_check_all_cntp(emac_id);
    return  ESPSW_OK;

}



espsw_error_t emac_test_emac_near_loopback_send_same_val(unsigned long *arg_val)
{
    // emac_test_emac_glb_init();
    printf("------------ Switch 2.0 Test ------------\n");

    uint32_t emac_id = 1; //emac1
    uint8_t byte_value = *(uint8*)(arg_val);//128byte pattern value

    emac_test_emac_glb_init();

    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    assert((REG_READ(MP_SYS_PROBE_OUT_REG)&0x1f) == 0x1f);

    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));

    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_cfg_and_check(emac_id,FAL_SPEED_2500,FAL_FULL_DUPLEX);

    emac_test_near_end_loopback_send_same_128B_val_case(emac_id,byte_value);
    
    return  ESPSW_OK;

}


espsw_error_t emac_test_cntp_num_read_result(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1

    emac_test_cntp_num_read_result_case(emac_id);

    return  ESPSW_OK;

}

espsw_error_t emac_test_cntp_len_read_result(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    
    emac_test_cntp_len_read_result_case(emac_id);

    return  ESPSW_OK;

}

espsw_error_t emac_test_tbx_cntp_num_read_result(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    
    emac_test_tbx_cntp_num_read_result_case(emac_id);

    return  ESPSW_OK;

}


espsw_error_t emac_test_tbx_cntp_len_read_result(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    
    emac_test_tbx_cntp_len_read_result_case(emac_id);

    return  ESPSW_OK;

}

#else
// test
// #define SMI_INF_1to4_TEST       1 // use 1 smi controller(MDIO/MDC) to controller 4 PHY
typedef enum {
    RGMII_TX_CLK_PAD_NOT_USE,
    RGMII_TX_CLK_PAD_GEN_CLK,
} RgmiiEmacTxClkMode;

#define RGMII_EMACX_TX_CLK_MODE  RGMII_TX_CLK_PAD_GEN_CLK // RGMII_TX_CLK_PAD_GEN_CLK:emacx tx clk pad is used to generate txclk(mac->phy),RGMII_TX_CLK_PAD_NOT_USE:tx clk pad is not used(no function)


#define FORCE_LINK              0   // for emac_near end test, dont need to connect to linkpartner
#if FORCE_LINK
enum fal_port_speed FORCE_LINK_SPEED = FAL_SPEED_1000;
#endif

//#######################  ----  Advertised Speed and Duplex config  --- ####################
// #-------------------------------VSC8541 PHY PART----------------------------------------------
// # VSC8541 Addr 0x09[9:8] - 1000BASE-T Control;

#define VSC8541PHY_ADVERTISE_1000BASET_FDX   1//# note: It is advisable not to set EXTPHY_ADVERTISE_1000BASET_HDX to 1 and EXTPHY_ADVERTISE_1000BASET_FDX to 0,
#define VSC8541PHY_ADVERTISE_1000BASET_HDX   0  //#       as many computer network cards do not support 1000BASE-HDX (Half-duplex) mode.


// # VSC8541 Addr 0x05[8:5] - 1000BASE-T Control;
#define VSC8541PHY_ADVERTISE_100BASETX_FDX   1
#define VSC8541PHY_ADVERTISE_100BASETX_HDX   1
#define VSC8541PHY_ADVERTISE_10BASET_FDX     1
#define VSC8541PHY_ADVERTISE_10BASET_HDX     1


#define TEST_EMAC1_ID       1   //1,2,3,4
#define TEST_EMAC2_ID       2   //1,2,3,4
#define TEST_EMAC3_ID       3   //1,2,3,4
#define TEST_EMAC4_ID       4   //1,2,3,4


char *str_interface[]={"GMII_MII","RGMII","SGMII","RMII"};

typedef enum {
    TXCLK_125M=1,
    TXCLK_25M,
    TXCLK_2_5M,
} TX_CLK_SPEED;

uint32_t emacx_txclk_gpio_num_fpga_env[4] = {16,28,44,56};

struct EMACX_TXRX_CLK_SET{
    bool emacx_tx_clk_reverse_flag; //depends on FPGA test results(varys on differents FPGA images);  FALSE: keep; TRUE:reverse;
    bool emacx_rx_clk_reverse_flag; //depends on FPGA test results(varys on differents FPGA images) FALSE: keep; TRUE:reverse;
    uint32_t  emacx_tx_clk_delay;// set TX_CLK delay to compensate 0x14:[2:0]=001:0.8ns; 010:1.1ns ; 011:1.7ns; 100:2.0ns;  110:2.6ns; 111:3.4ns 
    uint32_t  emacx_rx_clk_delay;// set RX_CLK delay to compensate 0x14:[6:4]=001:0.8ns; 010:1.1ns; 011:1.7ns; 100:2.0ns; 101: 2.3 ns; 110:2.6ns; 111:3.4ns;
};


/*   0618 image test result pass case:
*** EMAC1: 
        TX setting:[0,1],[0,2],[0,3],[0,4],[0,5] -> select [0,3] : Tx clk not reverse + BIT(1)|BIT(0)
        RX setting:[0,5],[0,6],[0,7]             -> select [0,6] : Rx clk not reverse + BIT(6)|BIT(5)
*** EMAC2: 
        TX setting:[0,0],[0,1],[0,2],[0,3],[1,7] -> select [0,1] : Tx clk not reverse + BIT(0)
        RX setting:[1,4],[1,5],[1,6],[1,7]       -> select [1,6] : Rx clk reverse +     BIT(6)|BIT(5)
*/


struct EMACX_TXRX_CLK_SET emacx_1000m_tx_rx_clk_setting[5] = {
    {0,0,0,0}, //EMAC0 N/A
    {FALSE,FALSE,BIT(1)|BIT(0),BIT(6)|BIT(5)}, //EMAC1 
    {FALSE,TRUE,BIT(0),BIT(6)|BIT(5)}, //EMAC2 
    {0,0,0,0}, //EMAC3 N/A
    {0,0,0,0}  //EMAC4 N/A
};

struct EMACX_TXRX_CLK_SET emacx_100m_tx_rx_clk_setting[5] = {
    {0,0,0,0}, //EMAC0 N/A
    {FALSE,TRUE,BIT(2),BIT(5)}, //EMAC1
    {FALSE,TRUE,BIT(2),BIT(5)}, //EMAC2 
    {0,0,0,0}, //EMAC3 N/A
    {0,0,0,0}  //EMAC4 N/A
};

struct EMACX_TXRX_CLK_SET emacx_10m_tx_rx_clk_setting[5] = {
    {0,0,0,0}, //EMAC0 N/A
    {FALSE,TRUE,BIT(2),BIT(5)}, //EMAC1 :1000mtx_rev,100mtx_rev,1000rx_rev,100rx_rev,1000m tx_delay,1000m tx_delay
    {FALSE,TRUE,BIT(2),BIT(5)}, //EMAC2 
    {0,0,0,0}, //EMAC3 N/A
    {0,0,0,0}  //EMAC4 N/A
};



/**
 * @brief init switch
 * @return ESPSW_OK or error code
 */
static void emac_test_cntp_num_read_result_case(uint32_t emac_id)
{
    uint32_t list_count = sizeof(emac_cntp_num_list_string) / sizeof(emac_cntp_num_list_string[0]);

    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG;
    uint32_t emacx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG + (emac_id-1)*cntp_addr_offset_to_emac1;
    
    for(uint32_t i = 0; i < list_count; i++)
    {
        uint64_t cntp_cnt = REG_READ(emacx_cntp_start_addr) + (REG_READ(emacx_cntp_start_addr + 4) << 32);
        emacx_cntp_start_addr += 8;
        printf("%-35s: %ld\n",emac_cntp_num_list_string[i],cntp_cnt); 
    }

}

static void emac_test_cntp_len_read_result_case(uint32_t emac_id)
{
    uint32_t list_count = sizeof(emac_cntp_len_list_string) / sizeof(emac_cntp_len_list_string[0]);

    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_TOTAL_BYTE_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_TOTAL_BYTE_NUM_31TO0_REG;
    uint32_t emacx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_TOTAL_BYTE_NUM_31TO0_REG + (emac_id-1)*cntp_addr_offset_to_emac1;
    
    for(uint32_t i = 0; i < list_count; i++)
    {
        uint64_t cntp_cnt = REG_READ(emacx_cntp_start_addr) + (REG_READ(emacx_cntp_start_addr + 4) << 32);
        emacx_cntp_start_addr += 8;
        printf("%-25s: %ld\n",emac_cntp_len_list_string[i],cntp_cnt); 
    }
}

static void emac_test_tbx_cntp_len_read_result_case(uint32_t emac_id)
{
    uint32_t list_count = sizeof(tbx_cntp_len_list_string) / sizeof(tbx_cntp_len_list_string[0]);
    uint32_t tbx_num = 0, cntp_addr_offset_to_tbx0 = 0, tbxx_cntp_start_addr = 0;
  
    if(emac_id == 1)
    {
        tbx_num = 0;
    }else if((emac_id == 3) || (emac_id == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    // tbx0/1_cntp 地址相对于tbx0_cntp 地址的偏移
    cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_BYTE_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_BYTE_NUM_31TO0_REG;
    tbxx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_BYTE_NUM_31TO0_REG + tbx_num * cntp_addr_offset_to_tbx0;
    
    for(uint32_t i = 0; i < list_count; i++)
    {
        uint64_t cntp_cnt = REG_READ(tbxx_cntp_start_addr) + (REG_READ(tbxx_cntp_start_addr + 4) << 32);
        tbxx_cntp_start_addr += 8;
        printf("%-25s: %ld\n",tbx_cntp_len_list_string[i],cntp_cnt); 
    }
}

static void emac_test_tbx_cntp_num_read_result_case(uint32_t emac_id)
{
    uint32_t list_count = sizeof(tbx_cntp_num_list_string) / sizeof(tbx_cntp_num_list_string[0]);
    uint32_t tbx_num = 0, cntp_addr_offset_to_tbx0 = 0, tbxx_cntp_start_addr = 0;
  
    if(emac_id == 1)
    {
        tbx_num = 0;
    }else if((emac_id == 3) || (emac_id == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    // tbx0/1_cntp 地址相对于tbx0_cntp 地址的偏移
    cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG;
    tbxx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG + tbx_num * cntp_addr_offset_to_tbx0;
    
    for(uint32_t i = 0; i < list_count; i++)
    {
        uint64_t cntp_cnt = REG_READ(tbxx_cntp_start_addr) + (REG_READ(tbxx_cntp_start_addr + 4) << 32);
        tbxx_cntp_start_addr += 8;
        printf("%-25s: %ld\n",tbx_cntp_num_list_string[i],cntp_cnt); 
    }
}



void emac_test_check_all_cntp(uint32_t emac_id)
{
    printf(" ------------- emac%d cntp num check ------------\n",emac_id);
    emac_test_cntp_num_read_result_case(emac_id);
    printf(" -  ---------- emac%d packet len check ----------\n",emac_id);
    emac_test_cntp_len_read_result_case(emac_id);
    printf(" ------------- tbx(emac%d) cntp num check -------------\n",emac_id);
    emac_test_tbx_cntp_num_read_result_case(emac_id); 
    printf(" -  ---------- tbx(emac%d) packet len check -----------\n",emac_id);
    emac_test_tbx_cntp_len_read_result_case(emac_id);
}

espsw_error_t emac_test_cntp_num_read_result(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1

    emac_test_cntp_num_read_result_case(emac_id);

    return  ESPSW_OK;

}

espsw_error_t emac_test_cntp_len_read_result(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    
    emac_test_cntp_len_read_result_case(emac_id);

    return  ESPSW_OK;

}

espsw_error_t emac_test_tbx_cntp_num_read_result(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    
    emac_test_tbx_cntp_num_read_result_case(emac_id);

    return  ESPSW_OK;

}


espsw_error_t emac_test_tbx_cntp_len_read_result(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    
    emac_test_tbx_cntp_len_read_result_case(emac_id);

    return  ESPSW_OK;

}


espsw_error_t emac_test_check_txrx_clk_meter(unsigned long *arg_val)
{
    uint32_t emac_id = 1; //emac1
    
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val;
    uint32_t debug_val;

    uint32_t rx_meter, tx_meter, addr_test;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    // printf("SWITCH_EMAC_EMAC_CFG_REG addr=%p,1---SWITCH_EMAC_EMAC_CFG_REG = 0x%08lx!!\n",(void*)(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET)),reg_val);

#if (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_20M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000065f); //set 1ms in 20Mhz env
#elif (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_40M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000033f); //set 1ms in 40Mhz env
#endif

    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_FREQ_METER_E_S, 1, 1));

    //open TX/RX
    // ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_RECEIVE_E_S, 1, 1));
    // ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TRANSMIT_E_S, 1, 1));


    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    // printf("SWITCH_EMAC_EMAC_CFG_REG addr=%p,2---SWITCH_EMAC_EMAC_CFG_REG = 0x%08lx!!\n",(void*)(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET)),reg_val);


    addr_test = SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&rx_meter);
    printf("EMAC_RX_METER_CNT_REG addr = %p, EMAC_RX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,rx_meter);

    addr_test = SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&tx_meter);
    printf("EMAC_TX_METER_CNT_REG addr = %p, EMAC_TX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,tx_meter);
    

    return  ESPSW_OK;
}


static espsw_error_t emac_test_reg_read_all(uint32_t emac_id)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t cai_value;
    uint8_t k ;

    for(uint32_t i =SWITCH_GLB_DATE_REG; i<(SWITCH_GLB_CLK_EN_REG+4);i+=4)
    {
        uhal_reg_get(i, (uint8_t *)&cai_value);
        printf("SWITCH_GLB_REG addr = %p, result = 0x%08lx\n",(void*)(i),cai_value);
    }

    printf(" - ------------------emac-------------------- \n");
    for(uint32_t i =SWITCH_EMAC_EMAC_DATE_REG; i<(SWITCH_EMAC_EMAC_CLK_EN_REG+4);i+=4)
    {
        uhal_reg_get(i + (emac_id * EMAC_OFFSET), (uint8_t *)&cai_value);
        printf("EMAC_REG addr = %p, result = 0x%08lx\n",(void*)(i + (emac_id * EMAC_OFFSET)),cai_value);
    }

    printf(" - ---------------pcs----------------------- \n");
    for(uint32_t i =SWITCH_PCS_DATE_REG; i<(SWITCH_PCS_CLK_EN_REG+4);i+=4)
    {
        uhal_reg_get(i + (emac_id * PCS_OFFSET), (uint8_t *)&cai_value);
        printf("SWITCH_PCS_REG addr = %p, result = 0x%08lx\n",(void*)(i),cai_value);
    }

    printf(" - ----------------tbx0---------------------- \n");
    for(uint32_t i =SWITCH_SWDBG_TBX0_GLOBAL_CFG_REG; i<(SWITCH_SWDBG_TBX0_RX_CTRL_REG+4);i+=4)
    {
        uhal_reg_get(i , (uint8_t *)&cai_value);
        printf("tbx0 ctrl reg addr = %p, result = 0x%08lx\n",(void*)(i),cai_value);
    }

    uhal_reg_get(SWITCH_SWDBG_TBX0_STATUS_REG , (uint8_t *)&cai_value);
    printf("tbx0 status reg addr = %p, result = 0x%08lx\n",(void*)(SWITCH_SWDBG_TBX0_STATUS_REG),cai_value);

    printf(" - ----------------tbx1---------------------- \n");
    for(uint32_t i =SWITCH_SWDBG_TBX1_GLOBAL_CFG_REG; i<(SWITCH_SWDBG_TBX1_RX_CTRL_REG+4);i+=4)
    {
        uhal_reg_get(i , (uint8_t *)&cai_value);
        printf("tbx1 ctrl reg addr = %p, result = 0x%08lx\n",(void*)(i),cai_value);
    }
    uhal_reg_get(SWITCH_SWDBG_TBX1_STATUS_REG , (uint8_t *)&cai_value);
    printf("tbx1 status reg addr = %p, result = 0x%08lx\n",(void*)(SWITCH_SWDBG_TBX1_STATUS_REG),cai_value);


    printf(" - --------------serdes(FPGA)----------------------- \n");
    // From xiongbing: serdes's powergood/plllock/resetdone status (MP_SYS_PROBE_OUT_REG:Low 5bits 0x1F is ok)
    uhal_reg_field_set(MP_SYS_PROBEA_CTRL_REG,MP_SYS_PROBE_A_TOP_SEL_S,8,21);
    printf("MP_SYS_PROBE_OUT_REG = %lx\n", REG_READ(MP_SYS_PROBE_OUT_REG));

    return ret;
}


espsw_error_t emac_test_emac_reg_check(uint32_t emac_id)
{
    // uint32_t emac_id = 1; //emac1
    emac_test_reg_read_all(emac_id);

    return ESPSW_OK;
}


static espsw_error_t emac_test_emac_glb_init(void)
{
    espsw_error_t ret = ESPSW_OK;

    REG_CLR_BIT(MP_SYS_SYS_PD_CTRL_REG, MP_SYS_SWITCH_MEM_SD0 | MP_SYS_SWITCH_MEM_SD1);
    REG_SET_BIT(MP_SYS_CLKRST_SWITCH_CONF_REG, MP_SYS_CLKRST_SWITCH_CORE_CLK_EN);

    // GPIO87/88/89/90:emac1/2/3/4 rstn
    PIN_FUNC_SELECT(IO_MUX_GPIO87_REG,FUNC_GPIO_GPIO);
    gpio_ll_output_enable(&GPIO,87);
    gpio_ll_matrix_out(&GPIO,87,EMAC1_PHY_RSTN_OUT_IDX,false,false);

    PIN_FUNC_SELECT(IO_MUX_GPIO88_REG,FUNC_GPIO_GPIO);
    gpio_ll_output_enable(&GPIO,88);
    gpio_ll_matrix_out(&GPIO,88,EMAC2_PHY_RSTN_OUT_IDX,false,false);

    PIN_FUNC_SELECT(IO_MUX_GPIO89_REG,FUNC_GPIO_GPIO);
    gpio_ll_output_enable(&GPIO,89);
    gpio_ll_matrix_out(&GPIO,89,EMAC3_PHY_RSTN_OUT_IDX,false,false);

    PIN_FUNC_SELECT(IO_MUX_GPIO90_REG,FUNC_GPIO_GPIO);
    gpio_ll_output_enable(&GPIO,90);
    gpio_ll_matrix_out(&GPIO,90,EMAC4_PHY_RSTN_OUT_IDX,false,false);

    
    // Reset Switch
    // REG_SET_BIT(MP_SYS_CLKRST_SWITCH_CTRL_REG, MP_SYS_CLKRST_SWITCH_CORE_RST_EN);
    // REG_CLR_BIT(MP_SYS_CLKRST_SWITCH_CTRL_REG, MP_SYS_CLKRST_SWITCH_CORE_RST_EN);

    REG_WRITE(MP_SYS_CLKRST_SWITCH_CTRL_REG,0xFFFFF08); // to check:0xFFFFFF8
    ets_delay_us(10000); // make sure reset
    REG_WRITE(MP_SYS_CLKRST_SWITCH_CTRL_REG,0x00000F0); // 

    /* EMAC global CFG */
    //system clock enable
    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_GLB_CLK_EN_REG, SWITCH_GLB_CLK_EN_M));

    //emac clock enable
    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_EMAC_EMAC_CLK_EN_REG, SWITCH_EMAC_EMAC_CLK_EN_M));

    //emac clock enable
    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_SMA_CLK_EN_REG, SWITCH_SMA_CLK_EN_M));

    ets_delay_us(50000); // cai:10ms is to small ,minimum is 15ms from vcs8541 spec(wait time from phy reset to access smi interface)

    return ret;
}


// matrix connect
void emac_test_smi_gpio_init(void)
{
    #if 0 // image不对mdio做处理，pcb上面外部端接mdio
 // GPIO99/100/109/110:emac1/2/3/4 mdi & mdo
    PIN_FUNC_SELECT(IO_MUX_GPIO99_REG,FUNC_GPIO_GPIO);
    gpio_ll_output_enable(&GPIO,99);
    gpio_ll_matrix_out(&GPIO,99,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

    gpio_ll_matrix_in(&GPIO,99,EMAC1_PHY_MDI_PAD_IN_IDX,false);
    PIN_INPUT_ENABLE(IO_MUX_GPIO99_REG);


    PIN_FUNC_SELECT(IO_MUX_GPIO100_REG,FUNC_GPIO_GPIO);
    gpio_ll_output_enable(&GPIO,100);
    gpio_ll_matrix_out(&GPIO,100,EMAC2_PHY_MDO_PAD_OUT_IDX,false,false);
    
    gpio_ll_matrix_in(&GPIO,100,EMAC2_PHY_MDI_PAD_IN_IDX,false);
    PIN_INPUT_ENABLE(IO_MUX_GPIO100_REG);


    PIN_FUNC_SELECT(IO_MUX_GPIO109_REG,FUNC_GPIO_GPIO);
    gpio_ll_output_enable(&GPIO,109);
    gpio_ll_matrix_out(&GPIO,109,EMAC3_PHY_MDO_PAD_OUT_IDX,false,false);
    
    gpio_ll_matrix_in(&GPIO,109,EMAC3_PHY_MDI_PAD_IN_IDX,false);
    PIN_INPUT_ENABLE(IO_MUX_GPIO109_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO110_REG,FUNC_GPIO_GPIO);
    gpio_ll_output_enable(&GPIO,110);
    gpio_ll_matrix_out(&GPIO,110,EMAC4_PHY_MDO_PAD_OUT_IDX,false,false);
    
    gpio_ll_matrix_in(&GPIO,110,EMAC4_PHY_MDI_PAD_IN_IDX,false);
    PIN_INPUT_ENABLE(IO_MUX_GPIO110_REG);

    #else //image对mdio做处理，pcb外部短接mdio （or image对mdio做处理，pcb不短接mdio，在每次phy read/write时重新mapping gpio)
    // GPIO99/100/109/110:emac1/2/3/4 mdi & mdo

    PIN_FUNC_SELECT(IO_MUX_GPIO99_REG,FUNC_GPIO_GPIO);
    gpio_ll_output_enable(&GPIO,99);
    gpio_ll_matrix_out(&GPIO,99,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

    gpio_ll_matrix_in(&GPIO,99,EMAC1_PHY_MDI_PAD_IN_IDX,false);
    PIN_INPUT_ENABLE(IO_MUX_GPIO99_REG);

    printf("GPIO_FUNC4_IN_SEL_CFG_REG=0x%x\n",REG_READ(GPIO_FUNC4_IN_SEL_CFG_REG));


    // gpio99/100/109/110均配置为：reg gpio_func4/9_in_sel，即matrix都是拉到emac1的mdi/mdo idx 
    // for(uint32_t i =0;i<2;i++)
    // {
    //     PIN_FUNC_SELECT(IO_MUX_GPIO99_REG+4*i,FUNC_GPIO_GPIO);
    //     gpio_ll_output_enable(&GPIO,99+i);
    //     gpio_ll_matrix_out(&GPIO,99+i,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

    //     gpio_ll_matrix_in(&GPIO,99+i,EMAC1_PHY_MDI_PAD_IN_IDX,false);
    //     PIN_INPUT_ENABLE(IO_MUX_GPIO99_REG+4*i);
    // }
    // for(uint32_t i =0;i<2;i++)
    // {
    //     PIN_FUNC_SELECT(IO_MUX_GPIO109_REG+4*i,FUNC_GPIO_GPIO);
    //     gpio_ll_output_enable(&GPIO,109+i);
    //     gpio_ll_matrix_out(&GPIO,109+i,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

    //     gpio_ll_matrix_in(&GPIO,109+i,EMAC1_PHY_MDI_PAD_IN_IDX,false);
    //     PIN_INPUT_ENABLE(IO_MUX_GPIO109_REG+4*i);
    // }
    #endif

    // GPIO95/96/97/98:emac1/2/3/4 mdc
    gpio_ll_matrix_out(&GPIO,95,EMAC1_PHY_MDC_PAD_OUT_IDX,false,false);
    // gpio_ll_output_enable(&GPIO,95);
    PIN_FUNC_SELECT(IO_MUX_GPIO95_REG,FUNC_GPIO_GPIO);

    
    gpio_ll_matrix_out(&GPIO,96,EMAC2_PHY_MDC_PAD_OUT_IDX,false,false);
    // gpio_ll_output_enable(&GPIO,96);
    PIN_FUNC_SELECT(IO_MUX_GPIO96_REG,FUNC_GPIO_GPIO);

    
    gpio_ll_matrix_out(&GPIO,97,EMAC3_PHY_MDC_PAD_OUT_IDX,false,false);
    // gpio_ll_output_enable(&GPIO,97);
    PIN_FUNC_SELECT(IO_MUX_GPIO97_REG,FUNC_GPIO_GPIO);

    
    gpio_ll_matrix_out(&GPIO,98,EMAC4_PHY_MDC_PAD_OUT_IDX,false,false);
    // gpio_ll_output_enable(&GPIO,98);
    PIN_FUNC_SELECT(IO_MUX_GPIO98_REG,FUNC_GPIO_GPIO);
}

//IOMUX connect
void emac_test_datainf_gpio_init(void)
{
    /*
     * EMAC1 data inf config
     */

    // RX Part
    PIN_FUNC_SELECT(IO_MUX_GPIO10_REG,FUNC_GPIO10_EMAC1_PHY_RXDV_PAD); //RXDV
    PIN_INPUT_ENABLE(IO_MUX_GPIO10_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO11_REG,FUNC_GPIO11_EMAC1_PHY_RXD0_PAD); //RXD0
    PIN_INPUT_ENABLE(IO_MUX_GPIO11_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO12_REG,FUNC_GPIO12_EMAC1_PHY_RXD1_PAD); //RXD1
    PIN_INPUT_ENABLE(IO_MUX_GPIO12_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO13_REG,FUNC_GPIO13_EMAC1_PHY_RXD2_PAD); //RXD2
    PIN_INPUT_ENABLE(IO_MUX_GPIO13_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO14_REG,FUNC_GPIO14_EMAC1_PHY_RXD3_PAD); //RXD3
    PIN_INPUT_ENABLE(IO_MUX_GPIO14_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO15_REG,FUNC_GPIO15_EMAC1_PHY_RX_CLK_PAD); //RXCLK
    PIN_INPUT_ENABLE(IO_MUX_GPIO15_REG);
    
    
    // TX Part
    // PIN_FUNC_SELECT(IO_MUX_GPIO16_REG,FUNC_GPIO16_REF_125M_CLK_PAD); // TXCLK
    // PIN_INPUT_DISABLE(IO_MUX_GPIO16_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO17_REG,FUNC_GPIO17_EMAC1_PHY_TXEN_PAD); // TX EN
    PIN_INPUT_DISABLE(IO_MUX_GPIO17_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO18_REG,FUNC_GPIO18_EMAC1_PHY_TXD0_PAD); // TXD0
    PIN_INPUT_DISABLE(IO_MUX_GPIO18_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO19_REG,FUNC_GPIO19_EMAC1_PHY_TXD1_PAD); // TXD1
    PIN_INPUT_DISABLE(IO_MUX_GPIO19_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO20_REG,FUNC_GPIO20_EMAC1_PHY_TXD2_PAD); // TXD2
    PIN_INPUT_DISABLE(IO_MUX_GPIO20_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO21_REG,FUNC_GPIO21_EMAC1_PHY_TXD3_PAD); // TXD3
    PIN_INPUT_DISABLE(IO_MUX_GPIO21_REG);

    /*
     * EMAC2 data inf config
     */

        // RX Part
    PIN_FUNC_SELECT(IO_MUX_GPIO22_REG,FUNC_GPIO22_EMAC2_PHY_RXDV_PAD); //RXDV
    PIN_INPUT_ENABLE(IO_MUX_GPIO22_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO23_REG,FUNC_GPIO23_EMAC2_PHY_RXD0_PAD); //RXD0
    PIN_INPUT_ENABLE(IO_MUX_GPIO23_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO24_REG,FUNC_GPIO24_EMAC2_PHY_RXD1_PAD); //RXD1
    PIN_INPUT_ENABLE(IO_MUX_GPIO24_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO25_REG,FUNC_GPIO25_EMAC2_PHY_RXD2_PAD); //RXD2
    PIN_INPUT_ENABLE(IO_MUX_GPIO25_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO26_REG,FUNC_GPIO26_EMAC2_PHY_RXD3_PAD); //RXD3
    PIN_INPUT_ENABLE(IO_MUX_GPIO26_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO27_REG,FUNC_GPIO27_EMAC2_PHY_RX_CLK_PAD); //RXCLK
    PIN_INPUT_ENABLE(IO_MUX_GPIO27_REG);
    
    
    // TX Part
    // PIN_FUNC_SELECT(IO_MUX_GPIO28_REG,FUNC_GPIO28_REF_125M_CLK_PAD); // TXCLK
    // PIN_INPUT_DISABLE(IO_MUX_GPIO28_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO29_REG,FUNC_GPIO29_EMAC2_PHY_TXEN_PAD); // TX EN
    PIN_INPUT_DISABLE(IO_MUX_GPIO29_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO30_REG,FUNC_GPIO30_EMAC2_PHY_TXD0_PAD); // TXD0
    PIN_INPUT_DISABLE(IO_MUX_GPIO30_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO31_REG,FUNC_GPIO31_EMAC2_PHY_TXD1_PAD); // TXD1
    PIN_INPUT_DISABLE(IO_MUX_GPIO31_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO32_REG,FUNC_GPIO32_EMAC2_PHY_TXD2_PAD); // TXD2
    PIN_INPUT_DISABLE(IO_MUX_GPIO32_REG);

    PIN_FUNC_SELECT(IO_MUX_GPIO33_REG,FUNC_GPIO33_EMAC2_PHY_TXD3_PAD); // TXD3
    PIN_INPUT_DISABLE(IO_MUX_GPIO33_REG);



    /*
     * EMAC3/4 data inf config
     */

    for (int i = 0; i< 2; i++)
    {
        PIN_FUNC_SELECT(IO_MUX_GPIO38_REG + i*12*4,FUNC_GPIO38_EMAC3_PHY_RXDV_PAD); //RXDV
        PIN_INPUT_ENABLE(IO_MUX_GPIO38_REG + i*12*4);
        
        PIN_FUNC_SELECT(IO_MUX_GPIO39_REG + i*12*4,FUNC_GPIO39_EMAC3_PHY_RXD0_PAD); //RXD0
        PIN_INPUT_ENABLE(IO_MUX_GPIO39_REG + i*12*4);
        
        PIN_FUNC_SELECT(IO_MUX_GPIO40_REG + i*12*4,FUNC_GPIO40_EMAC3_PHY_RXD1_PAD); //RXD1
        PIN_INPUT_ENABLE(IO_MUX_GPIO40_REG + i*12*4);
        
        PIN_FUNC_SELECT(IO_MUX_GPIO41_REG + i*12*4,FUNC_GPIO41_EMAC3_PHY_RXD2_PAD); //RXD2
        PIN_INPUT_ENABLE(IO_MUX_GPIO41_REG + i*12*4);
        
        PIN_FUNC_SELECT(IO_MUX_GPIO42_REG + i*12*4,FUNC_GPIO42_EMAC3_PHY_RXD3_PAD); //RXD3
        PIN_INPUT_ENABLE(IO_MUX_GPIO42_REG + i*12*4);
        
        PIN_FUNC_SELECT(IO_MUX_GPIO43_REG + i*12*4,FUNC_GPIO43_EMAC3_PHY_RX_CLK_PAD); //RXCLK
        PIN_INPUT_ENABLE(IO_MUX_GPIO43_REG + i*12*4);


        // TX Part
        // PIN_FUNC_SELECT(IO_MUX_GPIO44_REG + i*12*4,FUNC_GPIO44_REF_125M_CLK_PAD); //TX_CLK
        // PIN_INPUT_DISABLE(IO_MUX_GPIO44_REG + i*12*4);

        PIN_FUNC_SELECT(IO_MUX_GPIO45_REG + i*12*4,FUNC_GPIO45_EMAC3_PHY_TXEN_PAD); //txen
        PIN_INPUT_DISABLE(IO_MUX_GPIO45_REG + i*12*4);

        PIN_FUNC_SELECT(IO_MUX_GPIO46_REG + i*12*4,FUNC_GPIO46_EMAC3_PHY_TXD0_PAD); //TXD0
        PIN_INPUT_DISABLE(IO_MUX_GPIO46_REG + i*12*4);

        PIN_FUNC_SELECT(IO_MUX_GPIO47_REG + i*12*4,FUNC_GPIO47_EMAC3_PHY_TXD1_PAD); //TXD1
        PIN_INPUT_DISABLE(IO_MUX_GPIO47_REG + i*12*4);

        PIN_FUNC_SELECT(IO_MUX_GPIO48_REG + i*12*4,FUNC_GPIO48_EMAC3_PHY_TXD2_PAD); //TXD2
        PIN_INPUT_DISABLE(IO_MUX_GPIO48_REG + i*12*4);

        PIN_FUNC_SELECT(IO_MUX_GPIO49_REG + i*12*4,FUNC_GPIO49_EMAC3_PHY_TXD3_PAD); //TXD3
        PIN_INPUT_DISABLE(IO_MUX_GPIO49_REG + i*12*4);

    }
}


// # for vsc8541 phy : e.g. reg_wr_phy_bits(port,PHY_ADDR,0x01, ~(BIT(1)|BIT(2)), BIT(1)) --> set bit(1) = 1,bit(2) = 0)
espsw_error_t emac_test_set_phy_reg_bits(uint32_t port, uint32_t phy_addr, uint32_t reg_addr, uint16_t u16And, uint16_t u16Or)
{
    espsw_error_t ret = ESPSW_OK;
    uint16_t reg_val;

    uhal_phy_reg_get(port, phy_addr, reg_addr, &reg_val);
    reg_val = ((reg_val & (u16And)) | u16Or);
    uhal_phy_reg_set(port, phy_addr, reg_addr, reg_val);

    return ret;
}

/*
 *  PHY1-PHY4 uses VSC8541 as External PHY Ports
 */
espsw_error_t emac_test_vsc85xx_get_phy_addr(uint32_t port, uint32_t *addr)
{
    espsw_error_t ret = ESPSW_OK;

    switch(port) {
        case 1:
            *addr = PHY1_ADDR;
            break;
        case 2:
            *addr = PHY2_ADDR;
            break;
        case 3:
            *addr = PHY3_ADDR;
            break;
        case 4:
            *addr = PHY4_ADDR;
            break;
        default:
            return ESPSW_OUT_OF_RANGE;
    }
    return ret;
}


espsw_error_t emac_test_vsc85xx_phy_init(uint32_t port,uint32_t port_used_intf)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr;
    uint16_t reg_val;

    emac_test_smi_gpio_init();
    emac_test_datainf_gpio_init();
    
    //phy addr
    ESPSW_RTN_ON_ERROR(emac_test_vsc85xx_get_phy_addr(port, &phy_addr));


    printf("-------phy_addr = 0x%lx ------------------------------\n",phy_addr);

    uhal_phy_reg_get(port,phy_addr,2,&reg_val);
    printf("PHYID 0x%04x\n",reg_val);

    // uint32_t addr[4]={0,1,2,4};

    // for(int i=1;i<5;i++)
    // {
    //     uhal_phy_reg_get(i,addr[i-1],2,&reg_val);

    //     printf("port:%d,PHYID 0x%04x\n",i,reg_val);
    // }

    // assert(reg_val == 0x0007); // vcs8541 reg2 default value 
    printf("-------------------------------------\n");

    //switch to default page
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_STANDARD));

    //PHY CONTROL 1
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, MSCC_PHY_EXT_PHY_CNTL_1, &reg_val));

    reg_val &= ~(MAC_IF_SELECTION_MASK);

    if(port_used_intf == GMII_MII)
    {
        //force to MII/GMII
        reg_val |= (MAC_IF_SELECTION_GMII << MAC_IF_SELECTION_POS);
    }
    else if(port_used_intf == RGMII)
    {
        // force to RGMII
        reg_val |= (MAC_IF_SELECTION_RGMII << MAC_IF_SELECTION_POS);
    }
    else // RMII
    {
        reg_val |= (MAC_IF_SELECTION_RMII << MAC_IF_SELECTION_POS);
    }
    // printf(" prepared PHY Mode- PHY_EXT_PHY_CNTL_1(Address23) =0x%lx\n",reg_val); 
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_PHY_EXT_PHY_CNTL_1, reg_val));

    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, MSCC_PHY_EXT_PHY_CNTL_1, &reg_val));
    // printf("PHY Mode read before SWRST:PHY_EXT_PHY_CNTL_1(Address23) =0x%lx\n",reg_val);

    //SW Reset
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, 0, &reg_val));
    reg_val |= (1 << 15);
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0, reg_val));
    ets_delay_us(5000);

    int8_t time_wait2 = 1000 / 10; // 1s 
    do
    {   
        uhal_phy_reg_get(port, phy_addr, 0, &reg_val);
        printf("reset done or not..... %d *10ms left\n",time_wait2);
        ets_delay_us(10000);
        time_wait2--;
    }while ((time_wait2) && ((reg_val & 0x8000) == 0x8000)); //check bit15 is 1 or not, 0 is reset done

    if(time_wait2 == 0)
    {
        printf("phy sw reset fail\n");
    }else{
        printf("phy sw reset pass\n");
    }

    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, MSCC_PHY_EXT_PHY_CNTL_1, &reg_val));
    // printf("PHY Mode read after SWRST: PHY_EXT_PHY_CNTL_1(Address23) =0x%lx\n",reg_val);


    if(port_used_intf == RGMII)
    {
        //switch to default page2
        ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_EXTENDED_2));

        if(VSC8541PHY_ADVERTISE_1000BASET_FDX == 1) //1000Mbps setting
        {
            // set bit11 = 0
            emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~BIT(11),0x00); 
            // set RX_CLK delay to compensate 0x14:[6:4]=001:0.8ns; 010:1.1ns; 011:1.7ns; 100:2.0ns; 101: 2.3 ns; 110:2.6ns; 111:3.4ns;rx_clk delay
            emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~(BIT(6)|BIT(5)| BIT(4)),emacx_1000m_tx_rx_clk_setting[port].emacx_rx_clk_delay); 
            // set TX_CLK delay to compensate 0x14:[2:0]=001:0.8ns; 010:1.1ns ; 011:1.7ns; 100:2.0ns;  110:2.6ns; 111:3.4ns tx_clk delay
            emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~(BIT(2)|BIT(1)| BIT(0)),emacx_1000m_tx_rx_clk_setting[port].emacx_tx_clk_delay); 
            ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, VSC8502_RGMII_CNTL, &reg_val));
            // printf("RGMII_Control = 0x%lx\n",reg_val);
        }else if(VSC8541PHY_ADVERTISE_100BASETX_FDX == 1)
        {
            // set bit11 = 0
            emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~BIT(11),0x00); 
            // set RX_CLK delay to compensate 0x14:[6:4]=001:0.8ns; 010:1.1ns; 011:1.7ns; 100:2.0ns; 101: 2.3 ns; 110:2.6ns; 111:3.4ns;rx_clk delay
            emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~(BIT(6)|BIT(5)| BIT(4)),emacx_100m_tx_rx_clk_setting[port].emacx_rx_clk_delay); 
            // set TX_CLK delay to compensate 0x14:[2:0]=001:0.8ns; 010:1.1ns ; 011:1.7ns; 100:2.0ns;  110:2.6ns; 111:3.4ns tx_clk delay
            emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~(BIT(2)|BIT(1)| BIT(0)),emacx_100m_tx_rx_clk_setting[port].emacx_tx_clk_delay); 
            ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, VSC8502_RGMII_CNTL, &reg_val));
        }else if(VSC8541PHY_ADVERTISE_10BASET_FDX == 1){
            // set bit11 = 0
            emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~BIT(11),0x00); 
            // set RX_CLK delay to compensate 0x14:[6:4]=001:0.8ns; 010:1.1ns; 011:1.7ns; 100:2.0ns; 101: 2.3 ns; 110:2.6ns; 111:3.4ns;rx_clk delay
            emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~(BIT(6)|BIT(5)| BIT(4)),emacx_10m_tx_rx_clk_setting[port].emacx_rx_clk_delay); 
            // set TX_CLK delay to compensate 0x14:[2:0]=001:0.8ns; 010:1.1ns ; 011:1.7ns; 100:2.0ns;  110:2.6ns; 111:3.4ns tx_clk delay
            emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~(BIT(2)|BIT(1)| BIT(0)),emacx_10m_tx_rx_clk_setting[port].emacx_tx_clk_delay); 
            ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, VSC8502_RGMII_CNTL, &reg_val));
        }else{
            //TBD
        }

        //switch to default page
        ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_STANDARD));
    }

    //Advertise Symmetric pause, 100M Full Duplex
    // ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0x04, 0x501));
    // ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0x09, 0x0));


    // #Advertise symmetric pause

    emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(10),BIT(10)); //# set bit10 = 1
    emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(11),0x00); //# set bit11 = 0

    //# ------------ 1000M Full duplex support setting
    if (VSC8541PHY_ADVERTISE_1000BASET_FDX == 1)
    {
        emac_test_set_phy_reg_bits(port, phy_addr,0x09,~BIT(9),BIT(9)); //# set bit9 = 1
    }
    else{
        emac_test_set_phy_reg_bits(port, phy_addr,0x09,~BIT(9),0x00);   //# set bit9 = 0
    }

    //# ------------ 1000M half duplex support setting
    if (VSC8541PHY_ADVERTISE_1000BASET_HDX == 1){ 
        emac_test_set_phy_reg_bits(port, phy_addr,0x09,~BIT(8),BIT(8)); //# set bit8 = 1
    }
    else{
        emac_test_set_phy_reg_bits(port, phy_addr,0x09,~BIT(8),0x00); //# set bit8 = 0
    }

    //# ------------ 100M Full duplex support setting
    if (VSC8541PHY_ADVERTISE_100BASETX_FDX == 1){ 
        emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(8),BIT(8)); //# set bit8 = 1
    }
    else{
        emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(8),0x00); //# set bit8 = 0
    }

    //# ------------ 100M half duplex support setting
    if (VSC8541PHY_ADVERTISE_100BASETX_HDX == 1){ 
        emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(7),BIT(7));
    }
    else{
        emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(7),0x00); 
    }

    //# ------------ 10M Full duplex support setting
    if (VSC8541PHY_ADVERTISE_10BASET_FDX == 1){ 
        emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(6),BIT(6));
    }
    else{
        emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(6),0x00); 
    }

    //# ------------ 10M half duplex support setting
    if (VSC8541PHY_ADVERTISE_10BASET_HDX == 1){ 
        emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(5),BIT(5)); 
    }
    else{
        emac_test_set_phy_reg_bits(port, phy_addr,0x04,~BIT(5),0x00);
    }

    uhal_phy_reg_get(port, phy_addr, 0x04, &reg_val);
    printf("0x04 is 0x%4lx\n",reg_val);
    uhal_phy_reg_get(port, phy_addr, 0x09, &reg_val);
    printf("0x09 is 0x%4lx\n",reg_val);
    
    
    #if FORCE_LINK //for emac near-end loop test
    emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(12),0x00); //auto negotiation disable

    if(FORCE_LINK_SPEED == FAL_SPEED_100)
    {
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(8),BIT(8)); //# set  = 1
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~(BIT(6)|BIT(13)),BIT(13)); //# set  = 'b01
    }
    else if(FORCE_LINK_SPEED == FAL_SPEED_10)
    {
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(8),BIT(8)); //# set  = 1
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~(BIT(6)|BIT(13)),0x00); //# set  = 'b00
    }else if(FORCE_LINK_SPEED == FAL_SPEED_1000)
    {
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(8),BIT(8)); //# set  = 1
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~(BIT(6)|BIT(13)),BIT(6)); //# set  = 'b10
    }


    ets_delay_us(250000);
    #else
    //Restart Autoegotiate
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, 0, &reg_val));
    reg_val |= (1 << 9);

    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0, reg_val));
    ets_delay_us(5000);

    // //cai todo:Check bit9 should auto reset to 0  which means autonegotiate done
    // uint32_t time_wait1 = 5;
    // do
    // {   
    //     uhal_phy_reg_get(port, phy_addr, 0, &reg_val);
    //     printf("autonegotiate done or not..... %lds left\n",time_wait1);
    //     ets_delay_us(1000000);
    //     time_wait1--;
    // }while ((time_wait1) && ((reg_val & 0x200) == 0x200)); //check bit9 is 1 or not, 0 is autonegotiate done

    // if(time_wait1 == 0)
    // {
    //     printf(" @@@@@@ timeout, re-autonegotiate timeout!!\n");
    // }else {
    //     printf(" ***** re-autonegotiate pass!!\n");
    // }

    #endif

    #if PHY_LOOPBACK_EN
    if(PHY_LOOP_BACK_MODE ==0) // phy near end loop back
    {
        printf("phy near end loop back enable!\n");
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(14),BIT(14)); //loopback enable
    }
    else if(PHY_LOOP_BACK_MODE ==1) // phy far end loop back
    {   
        printf("phy far end loop back enable!\n");
        emac_test_set_phy_reg_bits(port, phy_addr,0x17,~BIT(3),BIT(3)); //loopback enable
    }
    #endif
    //COMA Mode
    ESPSW_RTN_ON_ERROR(uhal_vsc85xx_coma_mode_release(port));

    return ret;
}


espsw_error_t emac_test_emac_phy_init(uint32_t emacid,uint32_t emac_used_intf)
{
    espsw_error_t ret = ESPSW_OK;

    printf("set interface = %s\n",str_interface[emac_used_intf]);

    ESPSW_RTN_ON_ERROR(emac_test_vsc85xx_phy_init(emacid, emac_used_intf));

    return ret;
}


// force phy mode(for emac near-end loop back)  TO-DO
static espsw_error_t emac_test_force_cfg_and_check(uint32_t emac_id, enum fal_port_speed speed,uint32_t emac_used_intf)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val;
    uint32_t debug_val;

    uint32_t rx_meter, tx_meter, addr_test;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));


    #if FORCE_LINK //for emac near-end loop test
    if(FORCE_LINK_SPEED == FAL_SPEED_100)
    {
        //force 100/10M TX CLK
        gpio_ll_matrix_out(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1],REF_25M_CLK_PAD_OUT_IDX,false,false);
        gpio_ll_output_enable(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1]);
        PIN_FUNC_SELECT(IO_MUX_GPIO0_REG + emacx_txclk_gpio_num_fpga_env[emac_id-1]*4,FUNC_GPIO_GPIO);
        uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_SEL_S - (emac_id-1)*4),2,TXCLK_25M); // 1:125M, 2:25M, 3:2.5M
        
        // Inverse TX CLK
        // uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_INV_SEL_S - (emac_id-1)*4),1,1); // 1:inverse  0:no reverse
        // Inverse RX CLK
        // uhal_reg_field_set(MP_SYS_CLKRST_EMAC_RX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_RX_CLK_SEL_S - (emac_id-1)),1,1); // 1:inverse  0:no reverse
        
        // mac speed:100
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_SPEED_S, 2, 1));
    }
    else if(FORCE_LINK_SPEED == FAL_SPEED_10)
    {
        //force 10 TX CLK
        gpio_ll_matrix_out(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1],REF_2P5M_CLK_PAD_OUT_IDX,false,false);
        gpio_ll_output_enable(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1]);
        PIN_FUNC_SELECT(IO_MUX_GPIO0_REG + emacx_txclk_gpio_num_fpga_env[emac_id-1]*4,FUNC_GPIO_GPIO);
        uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_SEL_S - (emac_id-1)*4),2,TXCLK_2_5M); // 1:125M, 2:25M, 3:2.5M

        // Inverse TX CLK
        // uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_INV_SEL_S - (emac_id-1)*4),1,1); // 1:inverse  0:no reverse
        // Inverse RX CLK
        //uhal_reg_field_set(MP_SYS_CLKRST_EMAC_RX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_RX_CLK_SEL_S - (emac_id-1)),1,1); // 1:inverse  0:no reverse

        // mac speed:10
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_SPEED_S, 2, 0));
    }else if(FORCE_LINK_SPEED == FAL_SPEED_1000)
    {
        //force 1000 TX CLK
        gpio_ll_matrix_out(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1],FUNC_GPIO28_REF_125M_CLK_PAD,false,false);
        gpio_ll_output_enable(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1]);
        PIN_FUNC_SELECT(IO_MUX_GPIO0_REG + emacx_txclk_gpio_num_fpga_env[emac_id-1]*4,FUNC_GPIO_GPIO);
        uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_SEL_S - (emac_id-1)*4),2,TXCLK_125M); // 1:125M, 2:25M, 3:2.5M

        // mac speed:1000
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_SPEED_S, 2, 2));
    }
    #endif

    // phy interface:RGMII
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_PHY_MODE_SEL_S, 3, emac_used_intf));
    // set linkup
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_LINK_UP_S, 1, 1));

#if (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_20M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000065f); //set 1ms in 20Mhz env
#elif (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_40M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000033f); //set 1ms in 40Mhz env
#endif

    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_FREQ_METER_E_S, 1, 1));

    

#if DEBUG_VERBOSE1
    ets_delay_us(2000); // dealy some time before read cntmeter
#else
    ets_delay_us(5000); // dealy some time before read cntmeter
#endif

    //open TX/RX
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_RECEIVE_E_S, 1, 1));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TRANSMIT_E_S, 1, 1));


    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    
#if DEBUG_VERBOSE1
    printf("SWITCH_EMAC_EMAC_CFG_REG addr=%p,2---SWITCH_EMAC_EMAC_CFG_REG = 0x%08lx!!\n",(void*)(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET)),reg_val);
#endif

    addr_test = SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&rx_meter);
#if DEBUG_VERBOSE1
    printf("EMAC_RX_METER_CNT_REG addr = %p, EMAC_RX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,rx_meter);
#endif
    addr_test = SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&tx_meter);
#if DEBUG_VERBOSE1
    printf("EMAC_TX_METER_CNT_REG addr = %p, EMAC_TX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,tx_meter);
#endif
    if (speed == FAL_SPEED_10){
        g_txrx_meter_up_limit = 2503;
        g_txrx_meter_low_limit = 2497;
        // // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 2.5MHz will be d'2500 (0x9c4)
        // assert(rx_meter>2497 && rx_meter<2503);
        // assert(tx_meter>2497 && tx_meter<2503);
    }
    else if (speed == FAL_SPEED_100){
        g_txrx_meter_up_limit = 25005;
        g_txrx_meter_low_limit = 24995;
        // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 25MHz will be d'25000 (0x61a8)
        // assert(rx_meter>24995 && rx_meter<25005);
        // assert(tx_meter>24995 && tx_meter<25005);
    } 
    else if (speed == FAL_SPEED_1000){
        g_txrx_meter_up_limit = 125005;
        g_txrx_meter_low_limit = 124995;
        // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 125MHz will be d'125000 (0x1e848)
        // assert(rx_meter>124995 && rx_meter<125005);
        // assert(tx_meter>124995 && tx_meter<125005);
    }
    else {
        // 156.25Mbps * 2 (扣板的156.25M会二倍频给到SWITCH TX使用，SWITCH RX用到的312.5M是通过RX Serdes恢复出来的156.25M二倍频得到的)
        g_txrx_meter_up_limit = 312500 + 10;
        g_txrx_meter_low_limit = 312500 - 10;

        // assert((tx_meter>g_txrx_meter_low_limit) && (tx_meter<g_txrx_meter_up_limit));
        // assert((rx_meter>g_txrx_meter_low_limit) && (rx_meter<g_txrx_meter_up_limit));
    }

    printf("rxmetr = %d,txmter=%d \n",rx_meter,tx_meter);

    addr_test = SWITCH_EMAC_EMAC_DEBUG_STATUS_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_DEBUG_STATUS_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&debug_val);
#if DEBUG_VERBOSE1
    printf("EMAC_DEBUG_STATUS_REG addr = %p, EMAC_DEBUG_STATUS_REG = 0x%08lx (should be 0)!!\n",(void*)addr_test,debug_val);
#endif
    assert(debug_val == 0x00); //make sure

    return ret;
}

// force phy mode(for emac near-end loop back)  TO-DO
static espsw_error_t emac_test_cfg_and_check(uint32_t emac_id, enum fal_port_speed speed, enum fal_port_duplex duplex, uint32_t emac_used_intf)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val;
    uint32_t debug_val;
    uint32_t tbx_num;
    

    uint32_t rx_meter, tx_meter, addr_test;

    if(emac_id == 1)
    {
        tbx_num = 0;
    }else if((emac_id == 3) || (emac_id == 2))
    {
        tbx_num = 1;
    }

    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));


    if (speed == FAL_SPEED_10)
    {

        // For RGMII .TX CLK is self-generated and will souce to PHY 
        if((CUR_USED_INTF == RGMII) && (RGMII_EMACX_TX_CLK_MODE == RGMII_TX_CLK_PAD_GEN_CLK))
        {
            printf("------------ config 10M Setting ------------\n");

            //100/10M TX CLK
            gpio_ll_matrix_out(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1],REF_2P5M_CLK_PAD_OUT_IDX,false,false);
            gpio_ll_output_enable(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1]);
            PIN_FUNC_SELECT(IO_MUX_GPIO0_REG + emacx_txclk_gpio_num_fpga_env[emac_id-1]*4,FUNC_GPIO_GPIO);

            uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_SEL_S - (emac_id-1)*4),2,TXCLK_2_5M); // 1:125M, 2:25M, 3:2.5M

            // Inverse RX CLK
            uhal_reg_field_set(MP_SYS_CLKRST_EMAC_RX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_RX_CLK_SEL_S - (emac_id-1)),1,emacx_10m_tx_rx_clk_setting[emac_id].emacx_rx_clk_reverse_flag); // 1:inverse  0:no reverse
            // Inverse TX CLK
            uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_INV_SEL_S - (emac_id-1)*4),1,emacx_10m_tx_rx_clk_setting[emac_id].emacx_tx_clk_reverse_flag); // 1:inverse  0:no reverse
        }

        reg_val |= (0 << SWITCH_EMAC_EMAC_SPEED_S);
    }
    else if (speed == FAL_SPEED_100)
    {
        // For RGMII .TX CLK is self-generated and will souce to PHY 
        if((CUR_USED_INTF == RGMII) && (RGMII_EMACX_TX_CLK_MODE == RGMII_TX_CLK_PAD_GEN_CLK))
        {
            printf("------------ config 100M Setting ------------\n");

            //100/10M TX CLK
            gpio_ll_matrix_out(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1],REF_25M_CLK_PAD_OUT_IDX,false,false);
            gpio_ll_output_enable(&GPIO,emacx_txclk_gpio_num_fpga_env[emac_id-1]);
            PIN_FUNC_SELECT(IO_MUX_GPIO0_REG + emacx_txclk_gpio_num_fpga_env[emac_id-1]*4,FUNC_GPIO_GPIO);

            uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_SEL_S - (emac_id-1)*4),2,TXCLK_25M); // 1:125M, 2:25M, 3:2.5M

            // Inverse RX CLK
            uhal_reg_field_set(MP_SYS_CLKRST_EMAC_RX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_RX_CLK_SEL_S - (emac_id-1)),1,emacx_100m_tx_rx_clk_setting[emac_id].emacx_rx_clk_reverse_flag); // 1:inverse  0:no reverse

            // Inverse TX CLK
            uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_INV_SEL_S - (emac_id-1)*4),1,emacx_100m_tx_rx_clk_setting[emac_id].emacx_tx_clk_reverse_flag); // 1:inverse  0:no reverse
        }

        reg_val |= (1 << SWITCH_EMAC_EMAC_SPEED_S);
    }
    else if (speed == FAL_SPEED_1000)
    {
         
        //  For RGMII .TX CLK is self-generated and will souce to PHY 
        if((CUR_USED_INTF == RGMII) && (RGMII_EMACX_TX_CLK_MODE == RGMII_TX_CLK_PAD_GEN_CLK))
        {
            printf("------------ config 1000M Setting ------------\n");

             PIN_FUNC_SELECT(IO_MUX_GPIO0_REG + emacx_txclk_gpio_num_fpga_env[emac_id-1]*4,FUNC_GPIO28_REF_125M_CLK_PAD); // TXCLK
             PIN_INPUT_DISABLE(IO_MUX_GPIO0_REG + emacx_txclk_gpio_num_fpga_env[emac_id-1]*4);

             uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_SEL_S - (emac_id-1)*4),2,TXCLK_125M); // 1:125M, 2:25M, 3:2.5M
            
            // Inverse RX CLK
            uhal_reg_field_set(MP_SYS_CLKRST_EMAC_RX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_RX_CLK_SEL_S - (emac_id-1)),1,emacx_1000m_tx_rx_clk_setting[emac_id].emacx_rx_clk_reverse_flag); // 1:inverse  0:no reverse

            // Inverse TX CLK
            uhal_reg_field_set(MP_SYS_CLKRST_EMAC_TX_CONF_REG,(MP_SYS_CLKRST_SWITCH_EMAC1_TX_CLK_INV_SEL_S - (emac_id-1)*4),1,emacx_1000m_tx_rx_clk_setting[emac_id].emacx_tx_clk_reverse_flag); // 1:inverse  0:no reverse
        }

       reg_val |= (2 << SWITCH_EMAC_EMAC_SPEED_S);
    }
    else {
        printf("not support speed now=%d\n",speed);
        return ESPSW_BAD_VALUE;
    }

    if (duplex == FAL_FULL_DUPLEX)
        reg_val |= SWITCH_EMAC_EMAC_DUPLEX_MODE; //100M Full
    else
        reg_val &= ~SWITCH_EMAC_EMAC_DUPLEX_MODE; //Half


    if(emac_used_intf == RGMII )
    {
        //phy mode select MII/GMII 
        reg_val |= (RGMII << SWITCH_EMAC_EMAC_PHY_MODE_SEL_S);   //  [7:5] : 3'b1: RGMII. 3'b0:GMII/MII. 3'b010:SGMII. 3'b011: RMII
    }
    else // (emac_used_intf == GMII_MII)
    {
        reg_val |= (GMII_MII << SWITCH_EMAC_EMAC_PHY_MODE_SEL_S);;
    }

    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET),reg_val));



#if (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_20M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000065f); //set 1ms in 20Mhz env
#elif (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_40M)
    uhal_reg_set(SWITCH_GLB_PTPT_CFG_REG,0x0000033f); //set 1ms in 40Mhz env
#endif

    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_FREQ_METER_E_S, 1, 1));


#if DEBUG_VERBOSE1
    ets_delay_us(2000); // dealy some time before read cntmeter
#else
    ets_delay_us(5000); // dealy some time before read cntmeter
#endif

    //open emac TX/RX
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_RECEIVE_E_S, 1, 1));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EMAC_EMAC_CFG_REG +(emac_id * EMAC_OFFSET), SWITCH_EMAC_EMAC_TRANSMIT_E_S, 1, 1));

    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
#if DEBUG_VERBOSE1
    printf("SWITCH_EMAC_EMAC_CFG_REG addr=%p,2---SWITCH_EMAC_EMAC_CFG_REG = 0x%08lx!!\n",(void*)(SWITCH_EMAC_EMAC_CFG_REG + (emac_id * EMAC_OFFSET)),reg_val);
    #endif
    
    

    addr_test = SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_RX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&rx_meter);
#if DEBUG_VERBOSE1
    printf("EMAC_RX_METER_CNT_REG addr = %p, EMAC_RX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,rx_meter);
#endif
    addr_test = SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_TX_METER_CNT_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&tx_meter);
#if DEBUG_VERBOSE1
    printf("EMAC_TX_METER_CNT_REG addr = %p, EMAC_TX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,tx_meter);
#endif
    if (speed == FAL_SPEED_10){
        g_txrx_meter_up_limit = 2503;
        g_txrx_meter_low_limit = 2497;
        // // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 2.5MHz will be d'2500 (0x9c4)
        // assert(rx_meter>2497 && rx_meter<2503);
        // assert(tx_meter>2497 && tx_meter<2503);
    }
    else if (speed == FAL_SPEED_100){
        g_txrx_meter_up_limit = 25005;
        g_txrx_meter_low_limit = 24995;
        // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 25MHz will be d'25000 (0x61a8)
        assert(rx_meter>24995 && rx_meter<25005);
        assert(tx_meter>24995 && tx_meter<25005);
    } 
    else if (speed == FAL_SPEED_1000){
        g_txrx_meter_up_limit = 125005;
        g_txrx_meter_low_limit = 124995;
        // caculate 1ms( by SWGLB_PTPT_CFG_REG) , so 125MHz will be d'125000 (0x1e848)
        // assert(rx_meter>124995 && rx_meter<125005);
        // assert(tx_meter>124995 && tx_meter<125005);
    }
    else {
        // 156.25Mbps * 2 (扣板的156.25M会二倍频给到SWITCH TX使用，SWITCH RX用到的312.5M是通过RX Serdes恢复出来的156.25M二倍频得到的)
        g_txrx_meter_up_limit = 312500 + 10;
        g_txrx_meter_low_limit = 312500 - 10;

        // assert((tx_meter>g_txrx_meter_low_limit) && (tx_meter<g_txrx_meter_up_limit));
        // assert((rx_meter>g_txrx_meter_low_limit) && (rx_meter<g_txrx_meter_up_limit));
    }

    printf("rxmetr = %d,txmter=%d \n",rx_meter,tx_meter);

    addr_test = SWITCH_EMAC_EMAC_DEBUG_STATUS_REG + (emac_id * EMAC_OFFSET);
    uhal_reg_get(SWITCH_EMAC_EMAC_DEBUG_STATUS_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&debug_val);
#if DEBUG_VERBOSE1
    printf("EMAC_DEBUG_STATUS_REG addr = %p, EMAC_DEBUG_STATUS_REG = 0x%08lx (should be 0)!!\n",(void*)addr_test,debug_val);
#endif
    assert(debug_val == 0x00); //make sure

    return ret;
}


static espsw_error_t emac_test_emac_tx_rx_err_packet_num(uint32_t emac_id)
{
    uint32_t emac_tx_err_packet_num=0, emac_rx_err_packet_num=0, tbx_rx_err_packet_num=0;
    uint32_t emac_rx_packet_num=0, emac_tx_packet_num=0;
    uint32_t tbx_rx_packet_num=0, tbx_tx_packet_num=0;
    uint32_t tbx_num = 0;
    bool err_flag = 0;

    if(emac_id == 1)
    {
        tbx_num = 0;
    }else if((emac_id == 3) || (emac_id == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

#if STOP_IF_ERR         
    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t rx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_rx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*rx_err_cntp_addr_offset_to_emac1;

    uint32_t tx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_tx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*tx_err_cntp_addr_offset_to_emac1;

    uint32_t rx_err_cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_err_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG + (tbx_num)*rx_err_cntp_addr_offset_to_emac1;

    uint64_t emac_rx_err_cntp_cnt = REG_READ(emacx_rx_err_cntp_start_addr) + (REG_READ(emacx_rx_err_cntp_start_addr + 4) << 32);
    uint64_t emac_tx_err_cntp_cnt = REG_READ(emacx_tx_err_cntp_start_addr) + (REG_READ(emacx_tx_err_cntp_start_addr + 4) << 32);
    uint64_t tbx_rx_err_cntp_cnt = REG_READ(tbx_rx_err_cntp_start_addr) + (REG_READ(tbx_rx_err_cntp_start_addr + 4) << 32);

    if((emac_rx_err_cntp_cnt != 0) || (emac_tx_err_cntp_cnt != 0) || (tbx_rx_err_cntp_cnt != 0))
    {
        printf("emac_id:%d, emac or tbx cntp err cnt occurs!\n",emac_id);
        err_flag = 1;
    }


    uint32_t emac_rx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG;
    uint32_t emac_rx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_rx_cntp_addr_offset_to_emac1;
    emac_rx_packet_num = REG_READ(emac_rx_cntp_start_addr) + (REG_READ(emac_rx_cntp_start_addr + 4) << 32);

    uint32_t emac_tx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG;
    uint32_t emac_tx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_tx_cntp_addr_offset_to_emac1;
    emac_tx_packet_num = REG_READ(emac_tx_cntp_start_addr) + (REG_READ(emac_tx_cntp_start_addr + 4) << 32);

    uint32_t tbx_rx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_RX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_rx_cntp_addr_offset_to_emac1;
    tbx_rx_packet_num = REG_READ(tbx_rx_cntp_start_addr) + (REG_READ(tbx_rx_cntp_start_addr + 4) << 32);

    uint32_t tbx_tx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_TX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_tx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_tx_cntp_addr_offset_to_emac1;
    tbx_tx_packet_num = REG_READ(tbx_tx_cntp_start_addr) + (REG_READ(tbx_tx_cntp_start_addr + 4) << 32);

    if((emac_rx_packet_num != emac_tx_packet_num) || (tbx_rx_packet_num != tbx_tx_packet_num))
    {
        printf("emac_id:%d, emac or tbx tx&rx packet num not match!\n",emac_id);
        err_flag = 1;
    }


    if(!err_flag)
    {
        return ESPSW_OK;
    }else{
        return ESPSW_FAIL;
    }
#else
    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t rx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_rx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*rx_err_cntp_addr_offset_to_emac1;

    uint32_t tx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_tx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*tx_err_cntp_addr_offset_to_emac1;

    uint32_t rx_err_cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_err_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG + (tbx_num)*rx_err_cntp_addr_offset_to_emac1;

    uint64_t emac_rx_err_cntp_cnt = REG_READ(emacx_rx_err_cntp_start_addr) + (REG_READ(emacx_rx_err_cntp_start_addr + 4) << 32);
    uint64_t emac_tx_err_cntp_cnt = REG_READ(emacx_tx_err_cntp_start_addr) + (REG_READ(emacx_tx_err_cntp_start_addr + 4) << 32);
    uint64_t tbx_rx_err_cntp_cnt = REG_READ(tbx_rx_err_cntp_start_addr) + (REG_READ(tbx_rx_err_cntp_start_addr + 4) << 32);

    uint32_t emac_rx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG;
    uint32_t emac_rx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_rx_cntp_addr_offset_to_emac1;
    emac_rx_packet_num = REG_READ(emac_rx_cntp_start_addr) + (REG_READ(emac_rx_cntp_start_addr + 4) << 32);

    uint32_t emac_tx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG;
    uint32_t emac_tx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_tx_cntp_addr_offset_to_emac1;
    emac_tx_packet_num = REG_READ(emac_tx_cntp_start_addr) + (REG_READ(emac_tx_cntp_start_addr + 4) << 32);

    uint32_t tbx_rx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_RX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_rx_cntp_addr_offset_to_emac1;
    tbx_rx_packet_num = REG_READ(tbx_rx_cntp_start_addr) + (REG_READ(tbx_rx_cntp_start_addr + 4) << 32);

    uint32_t tbx_tx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_TX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_tx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_tx_cntp_addr_offset_to_emac1;
    tbx_tx_packet_num = REG_READ(tbx_tx_cntp_start_addr) + (REG_READ(tbx_tx_cntp_start_addr + 4) << 32);

    if((emac_rx_err_cntp_cnt != 0) || (emac_tx_err_cntp_cnt != 0) || (tbx_rx_err_cntp_cnt != 0))
    { 
        if((emac_rx_err_cntp_cnt_record != emac_rx_err_cntp_cnt) || (emac_tx_err_cntp_cnt_record != emac_tx_err_cntp_cnt) || (tbx_rx_err_cntp_cnt_record != tbx_rx_err_cntp_cnt))
        {
            printf("emac_id:%d, emac or tbx cntp err cnt occurs!\n",emac_id);

            printf("    >>> emac_rx_packet_num:%d\n",emac_rx_packet_num);
            printf("    >>> tbx_rx_packet_num:%d\n",tbx_rx_packet_num);
            printf("    >>> emac_rx_err_cntp_cnt:%d\n",emac_rx_err_cntp_cnt);
            printf("    >>> tbx_rx_err_cntp_cnt:%d\n",tbx_rx_err_cntp_cnt);

            //update record
            emac_rx_err_cntp_cnt_record = emac_rx_err_cntp_cnt;
            emac_tx_err_cntp_cnt_record = emac_tx_err_cntp_cnt;
            tbx_rx_err_cntp_cnt_record = tbx_rx_err_cntp_cnt;

            err_flag = 1;
        }
    }



    // if((emac_rx_packet_num != emac_tx_packet_num) || (tbx_rx_packet_num != tbx_tx_packet_num))
    // {
    //     printf("emac_id:%d, emac or tbx tx&rx packet num not match!\n",emac_id);
    //     err_flag = 1;
    // }

    if(!err_flag)
    {
        return ESPSW_OK;
    }else{
        return ESPSW_FAIL;
    }
#endif
}

static espsw_error_t emac_test_emac_check_rx_packet_received(uint32_t emac_id)
{
    uint32_t emac_tx_err_packet_num=0, emac_rx_err_packet_num=0, tbx_rx_err_packet_num=0;
    uint32_t emac_rx_packet_num=0, emac_tx_packet_num=0;
    uint32_t tbx_rx_packet_num=0, tbx_tx_packet_num=0;
    uint32_t tbx_num = 0;
    bool err_flag = 0;

    if(emac_id == 1)
    {
        tbx_num = 0;
    }else if((emac_id == 3) || (emac_id == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }


    // emacx_cntp 地址相对于emac1_cntp 地址的偏移
    uint32_t rx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_rx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*rx_err_cntp_addr_offset_to_emac1;

    uint32_t tx_err_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t emacx_tx_err_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_ERR_PACKET_NUM_31TO0_REG + (emac_id-1)*tx_err_cntp_addr_offset_to_emac1;

    uint32_t rx_err_cntp_addr_offset_to_tbx0 = SWITCH_EIBCNTP_TBX1_RX_ERR_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_err_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_ERR_PACKET_NUM_31TO0_REG + (tbx_num)*rx_err_cntp_addr_offset_to_emac1;

    uint64_t emac_rx_err_cntp_cnt = REG_READ(emacx_rx_err_cntp_start_addr) + (REG_READ(emacx_rx_err_cntp_start_addr + 4) << 32);
    uint64_t emac_tx_err_cntp_cnt = REG_READ(emacx_tx_err_cntp_start_addr) + (REG_READ(emacx_tx_err_cntp_start_addr + 4) << 32);
    uint64_t tbx_rx_err_cntp_cnt = REG_READ(tbx_rx_err_cntp_start_addr) + (REG_READ(tbx_rx_err_cntp_start_addr + 4) << 32);

    uint32_t emac_rx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_RX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG;
    uint32_t emac_rx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_RX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_rx_cntp_addr_offset_to_emac1;
    emac_rx_packet_num = REG_READ(emac_rx_cntp_start_addr) + (REG_READ(emac_rx_cntp_start_addr + 4) << 32);

    uint32_t emac_tx_cntp_addr_offset_to_emac1 = SWITCH_EMACCNTP_EMAC2_TX_PACKET_NUM_31TO0_REG - SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG;
    uint32_t emac_tx_cntp_start_addr = SWITCH_EMACCNTP_EMAC1_TX_PACKET_NUM_31TO0_REG + (emac_id-1)*emac_tx_cntp_addr_offset_to_emac1;
    emac_tx_packet_num = REG_READ(emac_tx_cntp_start_addr) + (REG_READ(emac_tx_cntp_start_addr + 4) << 32);

    uint32_t tbx_rx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_RX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_rx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_RX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_rx_cntp_addr_offset_to_emac1;
    tbx_rx_packet_num = REG_READ(tbx_rx_cntp_start_addr) + (REG_READ(tbx_rx_cntp_start_addr + 4) << 32);

    uint32_t tbx_tx_cntp_addr_offset_to_emac1 = SWITCH_EIBCNTP_TBX1_TX_PACKET_NUM_31TO0_REG - SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG;
    uint32_t tbx_tx_cntp_start_addr = SWITCH_EIBCNTP_TBX0_TX_PACKET_NUM_31TO0_REG + (tbx_num)*tbx_tx_cntp_addr_offset_to_emac1;
    tbx_tx_packet_num = REG_READ(tbx_tx_cntp_start_addr) + (REG_READ(tbx_tx_cntp_start_addr + 4) << 32);

    if((emac_rx_packet_num == 0) && (tbx_rx_packet_num == 0))
    { 
            printf("emac_id:%d, emac_rx && tbx_rx not received! \n",emac_id);
            err_flag = 1;
    }


    if(!err_flag)
    {
        return ESPSW_OK;
    }else{
        return ESPSW_FAIL;
    }

}

// emac Near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
static espsw_error_t emac_test_near_end_loopback_case(uint32_t emacid, struct tbx_pattern_info* ptn_val)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j, err_cnt=0;
    uint32_t tbx_repeat_num = ptn_val->repeat_num;  // set '0' means infinite transmit
    uint32_t total_len = ptn_val->total_len;        // 设定8的倍数(方便观察)
    uint32_t check_len = 0;
    uint32_t reg_val =0 ;

    uint8_t err_index[128] = {0};  // size need same as byte_init[]
    struct fal_tbx_pattern_switch20 tbx_tx_pattern;
    struct fal_tbx_pattern_switch20 tbx_tx_pattern_check;

    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    // printf("################# near end loop back test#######################\n");

    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_NEAR);   // maybe need to disable tbx_tx when FAL_EMAC_LPBK_FAR mode 

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));
    memset(&tbx_tx_pattern_check, 0, sizeof(struct fal_tbx_pattern_switch20));

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));

    // 初始化 pkt_hdr.byte 数组,will be filled in tbx tx sram
    //note:tbx tx sram is placed by BIG Endian ,(大端序(big-endian)中,最高有效字节存储在最低地址(8byte 一组),而在小端序(little-endian)中,最低有效字节存储在最低地址) 

    // 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (byte_init[]: word[0]:0x45342312,word[1]:0x89786756) wiil placed be Address[7]->Address[6]-> ... ->Address[0] (word[1]:0x12233445,word[0]:0x56677889)
    
    // RAW tbx tx word[0]-L: 0x56677889 - >  dst addr:0x122334455667
    // RAW tbx tx word[1]-H: 0x12233445
    //                                  - >  src addr:0x78899aabbccd  type:0x1122
    // RAW tbx tx word[2]-L: 0x11223344
    // RAW tbx tx word[3]-H: 0x9aabbccd 

    uint8_t byte_init[128] = {
        0x00, 0x5a, 0x5a, 0x5a,
        0x01, 0x11, 0x11, 0x11,
        0x02, 0x22, 0x22, 0x22,  
        0x03, 0x33, 0x33, 0x33,
        
        0x04, 0x44, 0x44, 0x44,
        0x05, 0x55, 0x55, 0x55,
        0x06, 0x66, 0x66, 0x66,
        0x07, 0x77, 0x77, 0x77,

        0x08, 0x88, 0x88, 0x88,
        0x09, 0x99, 0x99, 0x99,
        0x0a, 0xaa, 0xaa, 0xaa,
        0x0b, 0xbb, 0xbb, 0xbb,

        0x0c, 0xcc, 0xcc, 0xcc,
        0x0d, 0xdd, 0xdd, 0xdd,
        0x0e, 0xee, 0xee, 0xee,
        0x0f, 0xff, 0xff, 0xff,
    };

#if 1
 if(total_len >= 128)
 {
    for(uint32_t i = 0;i<128;i++)
    {
        byte_init[i] = i;
    }
    check_len = 128;
 }
 else{
    for(uint32_t i = 0;i<(total_len-1);i++)
    {
        byte_init[i] = i;
    }
    check_len = total_len;
 }
#endif


    memcpy(tbx_tx_pattern.pkt_hdr.byte, byte_init, sizeof(byte_init));

    check_len = check_len / 8;
    // little endian change to big-endian style which align tbx sram store method
    uint64_t big_endian_array[16]={0}; //16 is 128/8(uint64_t is for 8bytes)

    // byte_init[0]-[7] : (0x8978675645342312) -> big_endian_array[0]:0x1223344556677889
    for (i = 0, j = 0; i < sizeof(byte_init)/sizeof(byte_init[0]); i += 8, j++) {
        uint64_t num = ((uint64_t)byte_init[i]) |
                   ((uint64_t)byte_init[i + 1] << 8) |
                   ((uint64_t)byte_init[i + 2] << 16) |
                   ((uint64_t)byte_init[i + 3] << 24) |
                   ((uint64_t)byte_init[i + 4] << 32) |
                   ((uint64_t)byte_init[i + 5] << 40) |
                   ((uint64_t)byte_init[i + 6] << 48) |
                   ((uint64_t)byte_init[i + 7] << 56);
    
        big_endian_array[j] = little_endian_to_big_endian_64(num);
    }

#if 0 // debug use
    for (i = 0; i < check_len; i++) // intentionally printing 4 info to reduce content printing
    {
        uint32_t high_part = (uint32_t)(big_endian_array[i] >> 32); // 取得高32位
        uint32_t low_part = (uint32_t)(big_endian_array[i] & 0xFFFFFFFF); // 取得低32位

        // 64bit is 2 word
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i,low_part);
        printf("RAW tbx tx word[%ld]: 0x%08x\n",2*i+1, high_part);

        // for(j = 0; j < 8; j++)
        // {
        //     printf("RAW tbx tx byte[%ld]: 0x%x\n", i*8+j, ((uint8_t *)&big_endian_array[i])[j]);
        // }

    }
#endif

    tbx_tx_pattern.ptn_info.low32b_tx.total_len = total_len;//1024
    tbx_tx_pattern.ptn_info.low32b_tx.repeat_num = tbx_repeat_num; // set '0' means infinite transmit
    tbx_tx_pattern.ptn_info.high32b_tx.next_pattern = 0; 
    tbx_tx_pattern.ptn_info.high32b_tx.dmac_mode = 0;  //  DMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.smac_mode = 0;  //  SMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.length_mode = 0;//  报文化长度：'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.tx_err_pkt = 0; //  0:当前pattern全部发送eop&（err=0）报文； 1：当前pattern全部发送eop&(err=1)报文 
    
    tbx_tx_pattern.agent_info.data[0] = 0x00;
    tbx_tx_pattern.agent_info.data[1] = 0x00;

    tbx_tx_pattern.payload_pad =0x2a;
    

    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    ret = fal_tbx_pattern_set_switch20(tbx_num,&tbx_tx_pattern);
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_set_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

    ret = fal_tbx_pattern_check_switch20(tbx_num,&tbx_tx_pattern_check);  
    
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_check_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }
#if DEBUG_VERBOSE
    printf("-------------------------- pattern check ---------------\n");
    printf("total_len = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.total_len);
    printf("repeat_num = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.repeat_num);
    printf("next_pattern = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.next_pattern);
    printf("dmac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.dmac_mode);
    printf("smac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.smac_mode);
    printf("length_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.length_mode);
    printf("tx_err_pkt = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.tx_err_pkt);

    printf("ptn_info.val[0] = 0x%lx ;  ptn_info.val[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.ptn_info.val[0],tbx_tx_pattern.ptn_info.val[1]);
    printf("agent_info.data[0] = 0x%lx ;  agent_info.data[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.agent_info.data[0],tbx_tx_pattern.agent_info.data[1]);


    printf("------------ check tbx tx pattern content!!! ---------\n");
    for(int i=0;i< (check_len*2); i++)
    {   
        printf("tbx tx pattern word[%d]: 0x%08x\n",i,tbx_tx_pattern_check.pkt_hdr.word[i]);
    }
#endif
    fal_tbx_config(tbx_num, &tbx_config);
    /*config tbx rx start before tx start*/
    fal_tbx_rx_action(tbx_num, TRUE);

    // NOTE :temp use
    // fal_tbx_rx_action(tbx_num,false);//避免overflow的问题
#if 0
    uhal_reg_get(TBX_GLOBAL_CFG_REG + tbx_num * TBX_OFFSET, (uint8_t *)&reg_val);
    printf("address= %p, 1-- tbx tx glb ctrl reg = 0x%lx\n",TBX_GLOBAL_CFG_REG + tbx_num * TBX_OFFSET, reg_val);

    uhal_reg_get(TBX_RX_CTRL_REG + tbx_num * TBX_OFFSET, (uint8_t *)&reg_val);
    printf("address= %p, 1-- rx ctrl reg = 0x%lx\n",TBX_RX_CTRL_REG + tbx_num * TBX_OFFSET, reg_val);
#endif
    fal_tbx_tx_action(tbx_num, TX_START);

    // delay some time to make sure tbx tx send finished

#if FORCE_LINK
    // delay some to make tbx send done before next repeat_num packets, note:delay_time depends on cur speed and repeat_num*length
    if(FORCE_LINK_SPEED == FAL_SPEED_10){
        ets_delay_us(150000); //150ms
    }else if(FORCE_LINK_SPEED == FAL_SPEED_100){
        ets_delay_us(15000); //15ms
    }else{
        ets_delay_us(2000); //2ms
    }
#endif
    ets_delay_us(2000); //for 1000Mbps only
        
    fal_tbx_config_check(tbx_num, &tbx_config_chck);
#if DEBUG_VERBOSE
    printf("emac_id = %d; tbx_num=%d; user_mode = %ld (1:A;2:B;3:C;4:D)\n",emacid, tbx_num,tbx_config_chck.user_mode);
    printf("cntp_en = %d\n",tbx_config_chck.cntp_en);
    printf("cntp_afull_stop_en = %d \n",tbx_config_chck.cntp_afull_stop_en);

    printf("tx_en = %d\n",tbx_config_chck.tx_en);
    printf("tx_fsm_state = %d \n",tbx_config_chck.tx_fsm_state);
    printf("tx_done = %d\n",tbx_config_chck.tx_done);
    printf("tx_conn_vld = %d \n",tbx_config_chck.tx_conn_vld);
    printf("tx_conn_rdy = %d \n",tbx_config_chck.tx_conn_rdy);  

    printf("rx_en = %d \n",tbx_config_chck.rx_en);
    printf("rx_fsm_state = %d\n",tbx_config_chck.rx_fsm_state);
    printf("rx_rdy_htime = %d \n",tbx_config_chck.rx_rdy_htime);
    printf("rx_rdy_ltime = %d\n",tbx_config_chck.rx_rdy_ltime);
    printf("rx_conn_vld = %d \n",tbx_config_chck.rx_conn_vld);
    printf("rx_conn_rdy = %d\n",tbx_config_chck.rx_conn_rdy);

    printf("tbx set data_pload = %ld\n",tbx_config_chck.data_pload);

#endif
    fal_tbx_rx_data_check_switch20(tbx_num,&tbx_rx_pattern);

#if DEBUG_VERBOSE
    printf("------------ check tbx rx pattern content!!! ---------\n");

    printf("low32b_rx.total_len = 0x%08x; rx_ptninfo_val[0]=%08x; rx_ptninfo_val[1]=%08x\n",tbx_rx_pattern.ptn_info.low32b_rx.total_len,tbx_rx_pattern.ptn_info.val[0],tbx_rx_pattern.ptn_info.val[1]);
    printf("low32b_rx.cur_pkt_err = 0x%x\n",tbx_rx_pattern.ptn_info.low32b_rx.cur_pkt_err);

    for(int i=0;i<(check_len*2); i++)
    {   
        printf("tbx rx pattern word[%d]: 0x%08x\n",i,tbx_rx_pattern.pkt_hdr.word[i]);
    }
#endif
    uint32_t temp_val1 = MIN(sizeof(big_endian_array)/sizeof(big_endian_array[0]),check_len);
    //note:tbx tx sram is placed by BIG Endian(64bits) , 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (Address[7]->Address[6]-> ... ->Address[0]) 
    for (i = 0; i < temp_val1; i++)  
    {
        for(j = 0; j < 8; j++)
        {
            if (tbx_rx_pattern.pkt_hdr.byte[i*8+j] != ((uint8_t *)&big_endian_array[i])[j])
            {
                err_index[err_cnt++] = i*8+j;                
            }
        }
    }

    if(err_cnt > 0)
    {       
        printf("\n");
        printf(" -------------------------- diff list --------------------------\n");         
        for (j = 0; j < err_cnt; j++)  
        {
            printf("Golden send:tbx tx byte[%ld]:0x%lx  VS. Loopback_Rev: tbx rx byte[%ld]: 0x%lx\n", err_index[j], ((uint8_t *)&big_endian_array[err_index[j]/8])[err_index[j]%8], err_index[j], tbx_rx_pattern.pkt_hdr.byte[err_index[j]]);
        }

         printf("     *** Near end loop back Fail !!!\n");
         ret = ESPSW_FAIL;
    }
    else{
        #if DEBUG_VERBOSE
        printf("     *** tbx tx content = tbx rx content !!!\n");
        #endif
    }

    if(emac_test_emac_tx_rx_err_packet_num(emacid) == ESPSW_OK)
    {
        #if DEBUG_VERBOSE
        printf(" ****** emacid_%d MAC Near end loop back Pass !!!\n",emacid);
        #endif
    }
    else{
        printf(" ****** emacid_%d MAC Near end loop back Fail !!!\n",emacid);
        ret = ESPSW_FAIL;
    }

    // disable emac loopback
    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_DISABLE); 

    // printf("\n\n\n");


    return ret;
}


// Far-end loopback mode  :link-partner tx -> (phyrx -> emacrx ->  emac tx ->phytx) -> link-partner rx
espsw_error_t emac_test_far_end_loopback_case(uint32_t emacid)
{
    espsw_error_t ret = ESPSW_OK;

    printf("################# far end loop back test#######################\n");
    uint32_t tbx_num = 0xff;
    uint32_t rx_meter, tx_meter;
    uint32_t tx_meter_err_cnt = 0,rx_meter_err_cnt = 0,total_check_cnt = 0;
    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));

    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }


    fal_tbx_config(tbx_num, &tbx_config);

    fal_tbx_rx_action(tbx_num, TRUE);
    // fal_tbx_tx_action(tbx_num, TX_START); /* Far-end loopback dont need tbx tx*/

    // delay some time 
    ets_delay_us(500000);

    fal_tbx_rx_data_check_switch20(tbx_num,&tbx_rx_pattern);

    printf("------------ check tbx rx pattern content!!! ---------\n");

    printf("low32b_rx.total_len = 0x%08x; rx_ptninfo_val[0]=%08x; rx_ptninfo_val[1]=%08x\n",tbx_rx_pattern.ptn_info.low32b_rx.total_len,tbx_rx_pattern.ptn_info.val[0],tbx_rx_pattern.ptn_info.val[1]);
    printf("low32b_rx.cur_pkt_err = 0x%x\n",tbx_rx_pattern.ptn_info.low32b_rx.cur_pkt_err);

    for(int i=0; i<32; i++)
    {   
        printf("tbx rx pattern word[%d]: 0x%08x\n",i,tbx_rx_pattern.pkt_hdr.word[i]);
    } 

    printf("pls use wireshark to check loopback info...... !!!\n");


    for(int i=0; i<10; i++)
    {  
        ets_delay_us(1000000);//1s
        printf("%ds... !!!\n" ,10-i);
    }

    // disable loopback mode
    // fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_DISABLE);

    return ret;
}

espsw_error_t emac_test_get_phy_status(uint32_t emac_id, struct fal_port_phy_stat *phy_status)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr = 0;
    uint16_t reg_val = 0, bmcr_val = 0, bmsr_val = 0, auxiliary_status_val = 0;
    uint8_t speed_status = 0, fdx_status = 0;
    int sp = -1, dplx = -1;

    //port 0 -- todo
    if(emac_id == 0) {
        assert(0); // intentionally stop here

        // phy_addr = PHY0_ADDR;
        // ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_DP83867_PHYSTS, &reg_val));

        // /* autoneg */
        // phy_status->autoneg_complete = reg_val & DP83867_PHYSTS_AUTONEG ? 1 : 0;
        // /* get phy link status */
        // if (reg_val & DP83867_PHYSTS_LINK) {
        //     phy_status->link_status = PORT_LINK_UP;
        // } else {
        //     phy_status->link_status = PORT_LINK_DOWN;
        //     return ESPSW_OK;
        // }
        // /* get phy speed */
        // if (reg_val & DP83867_PHYSTS_1000)
        //     phy_status->speed = FAL_SPEED_1000;
        // else if (reg_val & DP83867_PHYSTS_100)
        //     phy_status->speed = FAL_SPEED_100;
        // else
        //     phy_status->speed = FAL_SPEED_10;
        // /* get phy duplex */
        // if (reg_val & DP83867_PHYSTS_DUPLEX)
        //     phy_status->duplex = FAL_FULL_DUPLEX;
        // else
        //     phy_status->duplex = FAL_HALF_DUPLEX;
    } else {
        //phy addr
        ESPSW_RTN_ON_ERROR(emac_test_vsc85xx_get_phy_addr(emac_id, &phy_addr));

        /* Autoneg is being started, report link as down */
        ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_BMCR, &bmcr_val));
        if (bmcr_val & BMCR_ANRESTART) {
            phy_status->link_status = PORT_LINK_DOWN;
            return ESPSW_OK;
        }

        /* read link and autonegotiation status */
        ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_BMSR, &bmsr_val));
        phy_status->link_status = bmsr_val & BMSR_LSTATUS ? PORT_LINK_UP : PORT_LINK_DOWN;
        phy_status->autoneg_complete = bmsr_val & BMSR_ANEGCOMPLETE ? 1 : 0;

        /* BMCR Status */
        //cmd_printf("port %d, BMCR: 0x%08x BMSR: 0x%08x\n", emac_id, bmcr_val, bmsr_val);
        if (!(bmcr_val & BMCR_ANENABLE)) {
            dplx = (bmcr_val & BMCR_FULLDPLX) ? FAL_FULL_DUPLEX : FAL_HALF_DUPLEX;
            if (bmcr_val & BMCR_SPEED1000)
                sp = FAL_SPEED_1000;
            else if (bmcr_val & BMCR_SPEED100)
                sp = FAL_SPEED_100;
            else
                sp = FAL_SPEED_10;
        } else if (bmsr_val & BMSR_ANEGCOMPLETE) {
            #if 1
            ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_NCONFIG, &auxiliary_status_val)); // note:for vsc8541, 0x1c is Auxiliary Control and status Register

            speed_status = (auxiliary_status_val >> 3) & 0b11;  // 提取bit[4:3]的值
            fdx_status = (auxiliary_status_val >> 5) & 0b1 ; // 提取bit[5]的值

            if(speed_status == 0b00)
            {
                sp = FAL_SPEED_10;
            }
            else if(speed_status == 0b01)
            {
                sp = FAL_SPEED_100;
            }
            else if(speed_status == 0b10)
            {
                sp = FAL_SPEED_1000;
            }
            else{
                printf("error  !\n");
            }

            if(fdx_status == 0b0)
            {
                dplx = FAL_HALF_DUPLEX;
            }
            else{
                dplx = FAL_FULL_DUPLEX;
            }

            #else 
            ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_LPA, &lpa_val));
            ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_ADVERTISE, &adv_val));
            if (adv_val & lpa_val & ADVERTISE_1000XFULL) {
                dplx = FAL_FULL_DUPLEX;
                sp = FAL_SPEED_1000;
            } else if (adv_val & lpa_val & ADVERTISE_1000XHALF) {
                dplx = FAL_HALF_DUPLEX;
                sp = FAL_SPEED_1000;
            } else if (adv_val & lpa_val & ADVERTISE_100FULL) {
                dplx = FAL_FULL_DUPLEX;
                sp = FAL_SPEED_100;
            } else if (adv_val & lpa_val & ADVERTISE_100HALF) {
                dplx = FAL_HALF_DUPLEX;
                sp = FAL_SPEED_100;
            } else {
                dplx = FAL_HALF_DUPLEX;
                sp = FAL_SPEED_10;
            }
            #endif
        }

        phy_status->duplex = dplx;
        phy_status->speed = sp;
    }
    return ret;
}

espsw_error_t emac_test_port_link_get(uint32_t port_id, struct fal_port_link *status)
{
    struct fal_port_phy_stat phy_status = {0};

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (port_id >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    ESPSW_RTN_ON_ERROR(emac_test_get_phy_status(port_id, &phy_status));

    /* link status */
    status->link_up = phy_status.link_status;
    /* duplex */
    if (phy_status.link_status == PORT_LINK_UP) {
        status->duplex = phy_status.duplex;
    } else {
        status->duplex = FAL_HALF_DUPLEX;
    }
    /* speed */
    if (phy_status.link_status == PORT_LINK_UP) {
        status->speed = phy_status.speed;
    } else {
        status->speed = FAL_SPEED_10;
    }
    return ESPSW_OK;
}

espsw_error_t emac_test_tbx_tx_ctrl(uint32_t emacid, enum fal_tbx_tx_action tx_act)
{
    uint32_t tbx_num = 0xff;

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }
    fal_tbx_tx_action(tbx_num, tx_act);

    return  ESPSW_OK;
}

espsw_error_t emac_test_tbx_rx_ctrl(uint32_t emacid, bool rx_act)
{
    uint32_t tbx_num = 0xff;

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }
    fal_tbx_rx_action(tbx_num, rx_act);

    return  ESPSW_OK;
}


static espsw_error_t rgmii_emac_test_txrx_test_case(uint32_t emacid,uint32_t len,uint32_t repeat_num)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j, err_cnt=0;
    uint32_t tbx_repeat_num = repeat_num;// set '0' means infinite transmit
    uint32_t reg_val =0 ;

    uint8_t err_index[128] = {0};  // size need same as byte_init[]
    struct fal_tbx_pattern_switch20 tbx_tx_pattern;
    struct fal_tbx_pattern_switch20 tbx_tx_pattern_check;

    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    // printf("################# tx test#######################\n");

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));
    memset(&tbx_tx_pattern_check, 0, sizeof(struct fal_tbx_pattern_switch20));

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));


#if 1
    uint8_t byte_init[128] = {
        0x12, 0x23, 0x34, 0x45,
        0x56, 0x67, 0x78, 0x89,  
        0x9a, 0xab, 0xbc, 0xcd,
        0x11, 0x22, 0x33, 0x44,

        0x55, 0x66, 0x77, 0x99,
        0x99, 0xaa, 0xbb, 0xcc,
        0xdd, 0xee, 0xff, 0xff
    };
#endif
    memcpy(tbx_tx_pattern.pkt_hdr.byte, byte_init, sizeof(byte_init));

    // little endian change to big-endian style which align tbx sram store method
    uint64_t big_endian_array[16]={0}; //16 is 128/8(uint64_t is for 8bytes)

    // byte_init[0]-[7] : (0x8978675645342312) -> big_endian_array[0]:0x1223344556677889
    for (i = 0, j = 0; i < sizeof(byte_init)/sizeof(byte_init[0]); i += 8, j++) {
        uint64_t num = ((uint64_t)byte_init[i]) |
                   ((uint64_t)byte_init[i + 1] << 8) |
                   ((uint64_t)byte_init[i + 2] << 16) |
                   ((uint64_t)byte_init[i + 3] << 24) |
                   ((uint64_t)byte_init[i + 4] << 32) |
                   ((uint64_t)byte_init[i + 5] << 40) |
                   ((uint64_t)byte_init[i + 6] << 48) |
                   ((uint64_t)byte_init[i + 7] << 56);
    
        big_endian_array[j] = little_endian_to_big_endian_64(num);
    }

    tbx_tx_pattern.ptn_info.low32b_tx.total_len = len;//1024
    tbx_tx_pattern.ptn_info.low32b_tx.repeat_num = tbx_repeat_num; // set '0' means infinite transmit
    tbx_tx_pattern.ptn_info.high32b_tx.next_pattern = 0; 
    tbx_tx_pattern.ptn_info.high32b_tx.dmac_mode = 0;  //  DMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.smac_mode = 0;  //  SMAC ： 'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.length_mode = 0;//  报文化长度：'b00 or 'b11:保持不变； 'b10:递增+1; 'b10:递减-1
    tbx_tx_pattern.ptn_info.high32b_tx.tx_err_pkt = 0; //  0:当前pattern全部发送eop&（err=0）报文； 1：当前pattern全部发送eop&(err=1)报文 
    
    tbx_tx_pattern.agent_info.data[0] = 0x00;
    tbx_tx_pattern.agent_info.data[1] = 0x00;

    tbx_tx_pattern.payload_pad =0x2a;
    

    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    ret = fal_tbx_pattern_set_switch20(tbx_num,&tbx_tx_pattern);
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_set_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

    ret = fal_tbx_pattern_check_switch20(tbx_num,&tbx_tx_pattern_check);  
    
    if(ret != ESPSW_OK)
    {
        printf("fal_tbx_pattern_check_switch20 error occur!!! ret = %d\n",ret);
        return ret;
    }

#if DEBUG_VERBOSE
    printf("-------------------------- pattern check ---------------\n");
    printf("total_len = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.total_len);
    printf("repeat_num = 0x%lx\n", tbx_tx_pattern_check.ptn_info.low32b_tx.repeat_num);
    printf("next_pattern = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.next_pattern);
    printf("dmac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.dmac_mode);
    printf("smac_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.smac_mode);
    printf("length_mode = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.length_mode);
    printf("tx_err_pkt = 0x%lx\n", tbx_tx_pattern_check.ptn_info.high32b_tx.tx_err_pkt);

    printf("ptn_info.val[0] = 0x%lx ;  ptn_info.val[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.ptn_info.val[0],tbx_tx_pattern.ptn_info.val[1]);
    printf("agent_info.data[0] = 0x%lx ;  agent_info.data[1]= 0x%lx !!!!!!!!!!\n",tbx_tx_pattern.agent_info.data[0],tbx_tx_pattern.agent_info.data[1]);

    printf("------------ check tbx tx pattern content!!! ---------\n");
    for(int i=0;i<32; i++)
    {   
        printf("tbx tx pattern word[%d]: 0x%08x\n",i,tbx_tx_pattern_check.pkt_hdr.word[i]);
    }
#endif
    fal_tbx_config(tbx_num, &tbx_config);
    
    /*config tbx rx start before tbx tx start*/
    fal_tbx_rx_action(tbx_num, TRUE);
    fal_tbx_tx_action(tbx_num, TX_START);

    // delay some to make tbx send done before next repeat_num packets, note:delay_time depends on cur speed and repeat_num*length

    // ets_delay_us(150000); //150ms  for 10Mbps
    // ets_delay_us(15000); //15ms for 100Mbps
    // ets_delay_us(2000); //2ms for 1000Mbps
    
        
    fal_tbx_config_check(tbx_num, &tbx_config_chck);
#if DEBUG_VERBOSE
    printf("emac_id = %d; tbx_num=%d; user_mode = %ld (1:A;2:B;3:C;4:D)\n",emacid, tbx_num,tbx_config_chck.user_mode);
    printf("cntp_en = %d\n",tbx_config_chck.cntp_en);
    printf("cntp_afull_stop_en = %d \n",tbx_config_chck.cntp_afull_stop_en);

    printf("tx_en = %d\n",tbx_config_chck.tx_en);
    printf("tx_fsm_state = %d \n",tbx_config_chck.tx_fsm_state);
    printf("tx_done = %d\n",tbx_config_chck.tx_done);
    printf("tx_conn_vld = %d \n",tbx_config_chck.tx_conn_vld);
    printf("tx_conn_rdy = %d \n",tbx_config_chck.tx_conn_rdy);  

    printf("rx_en = %d \n",tbx_config_chck.rx_en);
    printf("rx_fsm_state = %d\n",tbx_config_chck.rx_fsm_state);
    printf("rx_rdy_htime = %d \n",tbx_config_chck.rx_rdy_htime);
    printf("rx_rdy_ltime = %d\n",tbx_config_chck.rx_rdy_ltime);
    printf("rx_conn_vld = %d \n",tbx_config_chck.rx_conn_vld);
    printf("rx_conn_rdy = %d\n",tbx_config_chck.rx_conn_rdy);

    printf("data_pload = 0x%x\n",tbx_config_chck.data_pload);
#endif
    return ret;
}


// from linkartner
static espsw_error_t rgmii_emac_test_rx_test_case(uint32_t emacid)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j;

    struct fal_tbx_pattern_switch20 tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    struct fal_tbx_config  tbx_config_chck = {0};

    // printf("################# tx test#######################\n");

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern_switch20));


    if((emacid == 1) || (emacid == 3))
    {
        tbx_config.user_mode = USER_D_MODE;
    }else if(emacid == 2)
    {
        tbx_config.user_mode = USER_B_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if(emacid == 1)
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    fal_tbx_config(tbx_num, &tbx_config);
    
    /*config tbx rx start */
    fal_tbx_rx_action(tbx_num, TRUE);

    // printf(" ***************************** \n 1--SWITCH_SWDBG_TBX0_RX_CTRL_REG = 0x%lx \n",REG_READ(SWITCH_SWDBG_TBX0_RX_CTRL_REG));
        
    fal_tbx_config_check(tbx_num, &tbx_config_chck);
#if DEBUG_VERBOSE
    printf("emac_id = %d; tbx_num=%d; user_mode = %ld (1:A;2:B;3:C;4:D)\n",emacid, tbx_num,tbx_config_chck.user_mode);
    printf("cntp_en = %d\n",tbx_config_chck.cntp_en);
    printf("cntp_afull_stop_en = %d \n",tbx_config_chck.cntp_afull_stop_en);

    printf("rx_en = %d \n",tbx_config_chck.rx_en);
    printf("rx_fsm_state = %d\n",tbx_config_chck.rx_fsm_state);
    printf("rx_rdy_htime = %d \n",tbx_config_chck.rx_rdy_htime);
    printf("rx_rdy_ltime = %d\n",tbx_config_chck.rx_rdy_ltime);
    printf("rx_conn_vld = %d \n",tbx_config_chck.rx_conn_vld);
    printf("rx_conn_rdy = %d\n",tbx_config_chck.rx_conn_rdy);
#endif

    printf("################# emac_%d rx check #######################\n",emacid);

    // emac_test_cntp_read_tbx(emacid,tbx_num,tbx_cntp_num);

    fal_tbx_rx_data_check_switch20(tbx_num,&tbx_rx_pattern);

    // printf(" ***************************** \n 2--SWITCH_SWDBG_TBX0_RX_CTRL_REG = 0x%lx \n",REG_READ(SWITCH_SWDBG_TBX0_RX_CTRL_REG));
    return ret;
}

espsw_error_t rgmii_emac_test_smi_mdio_read_and_write(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr;
    uint16_t reg_val;
    uint32_t emac_id = 1; //emac1

    struct tbx_pattern_info ptn_val = {0};

    ptn_val = *(struct tbx_pattern_info*)(arg_val);

    // printf("ptn.total_len = %d, ptn.repeat_num=%d\n",ptn_val.total_len,ptn_val.repeat_num);
    
    emac_test_smi_gpio_init();
    emac_test_datainf_gpio_init();

    emac_test_emac_glb_init();

#if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
#endif
    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);
    
    // emac_test_smi_gpio_init();
    // emac_test_datainf_gpio_init();

    for(uint32_t emac_index = 1;emac_index < 4;emac_index++)
    {
        emac_test_vsc85xx_get_phy_addr(emac_index, &phy_addr);

        // read test
        printf("----------  emac_id:%d,phy_addr = 0x%lx ------------\n",emac_index,phy_addr);
        uhal_phy_reg_get(emac_index,phy_addr,MII_PHYSID1,&reg_val);
        printf("    ===> [read]PHYID: 0x%04x\n",reg_val);
    
        // assert(reg_val == 0x0007); // vcs8541 reg2 default value 
        // printf(">MDIO [READ] PASS\n");


        for(uint32_t regaddr=0x00;regaddr<31;regaddr++)
        {
            uhal_phy_reg_get(emac_index,phy_addr,regaddr,&reg_val);
            printf("reg addr 0x%x = 0x%04x\n",regaddr,reg_val);
        }

        //write test
        uhal_phy_reg_set(emac_index, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_EXTENDED_3);   //switch to MSCC_PHY_PAGE_EXTENDED_3
        uhal_phy_reg_get(emac_index,phy_addr,MSCC_EXT_PAGE_ACCESS,&reg_val);

        printf("    ===> [read]PAGE: 0x%04x\n",reg_val);
        // assert(reg_val == MSCC_PHY_PAGE_EXTENDED_3); 

        uhal_phy_reg_set(emac_index, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_STANDARD);   //switch to default page
        uhal_phy_reg_get(emac_index,phy_addr,MSCC_EXT_PAGE_ACCESS,&reg_val);
        printf("    ===> [read]PAGE: 0x%04x\n",reg_val);
        // assert(reg_val == MSCC_PHY_PAGE_STANDARD); 
        printf(">MDIO [WRITE] PASS\n");

        // temp debug
        // uint32_t time = 50000;
        // while(time--)
        // {
        //     uhal_phy_reg_get(emac_index,phy_addr,MII_BMSR,&reg_val);
        //     // printf("0x%04x\n",reg_val);
        //     // uhal_phy_reg_set(emac_index, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_EXTENDED_2);   //switch to default page
        //     ets_delay_us(100);
        // }
    }

    return  ret;
}

// emac Near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
espsw_error_t rgmii_emac_test_mac_near_end_loopback(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;

    uint32_t emac_id = 1; //emac1

    struct tbx_pattern_info ptn_val = {0};
    
    // initial link_status struct
    struct fal_port_link link_status_emacx = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};

    ptn_val = *(struct tbx_pattern_info*)(arg_val);

    // printf("ptn.total_len = %d, ptn.repeat_num=%d\n",ptn_val.total_len,ptn_val.repeat_num);
    
    emac_test_emac_glb_init();

    #if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
    #endif
    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);


    if (!FORCE_LINK)
    {
        printf(" [Warning]: emac near end loopback need forced link speed!!! \n");
        assert(0); // stop and print error message 
    }


    for(uint32_t emac_index = 1;emac_index < 3;emac_index++)
    {
        printf("########################################\n");
        printf("############# emac id = %ld ##############\n",emac_index);
        printf("########################################\n");

        assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_index * EMAC_OFFSET)) == 0x20240412);

        for(uint32_t forced_speed = FAL_SPEED_10; forced_speed <= FAL_SPEED_1000; forced_speed=10*forced_speed)
        {
#if FORCE_LINK
            FORCE_LINK_SPEED = forced_speed;
            printf("\n  =>>>>>>> forced speed = %d \n",FORCE_LINK_SPEED);
#endif
            emac_test_emac_phy_init(emac_index,RGMII); 
            // printf("waiting to linkup... ... ...\n");
            // emac_test_port_link_get(emac_index , &link_status_emacx);

            emac_test_force_cfg_and_check(emac_index,forced_speed,RGMII);

            for(uint32_t i=0;i<100;i++)
            {
                if(emac_test_near_end_loopback_case(emac_index,&ptn_val) == ESPSW_FAIL)
                {
                    printf("[no repeat reset]mac%d @ speed:%dMbps nearend loopback fail at %d/100*1000 times\n",emac_index,forced_speed,i+1);
                    ret = ESPSW_FAIL;
                    break;
                }else{
                    if(!((i+1)%10))
                    {
                        printf("[no repeat reset]mac%d @ speed:%dMbps nearend loopback pass at %d/100*1000 times\n",emac_index,forced_speed,i+1);
                    }
                }
            }
        }
    }


    return  ret;
}

// Far-end loopback mode  :link-partner tx -> (phyrx -> emacrx ->  emac tx ->phytx) -> link-partner rx
espsw_error_t rgmii_emac_test_mac_far_end_loopback(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;

    uint32_t emac_id = 1; //emac1

    struct tbx_pattern_info ptn_val = {0};

    ptn_val = *(struct tbx_pattern_info*)(arg_val);

    // printf("ptn.total_len = %d, ptn.repeat_num=%d\n",ptn_val.total_len,ptn_val.repeat_num);
    
    emac_test_emac_glb_init();

#if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
#endif
    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

    emac_test_emac_phy_init(emac_id,RGMII); //TO-DO (SMI interface)


    emac_test_cfg_and_check(emac_id,FAL_SPEED_1000,RGMII,FAL_FULL_DUPLEX);

    emac_test_far_end_loopback_case(emac_id);

    return  ret;
}

// communication with linkpater：TX test
espsw_error_t rgmii_emac_test_tx_test_to_linkpartner_no_reset(uint32_t emac_id)
{
    rgmii_emac_test_txrx_test_case(emac_id,1024,0); //emac_test_tx_check(emacid,1024,1000)
}

// emac :tbx tx -> emac tx -> phytx ->  linkpartner 
espsw_error_t rgmii_emac_test_mac_tx_test(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;

    // uint32_t emac_id = 1; //emac1
    uint32_t checktime = 0; 
    struct tbx_pattern_info ptn_val = {0};
    
    // initial link_status struct
    struct fal_port_link link_status = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    bool link_staus_old = PORT_LINK_DOWN;

    ptn_val = *(struct tbx_pattern_info*)(arg_val);

    // printf("ptn.total_len = %d, ptn.repeat_num=%d\n",ptn_val.total_len,ptn_val.repeat_num);
    
    emac_test_emac_glb_init();

    #if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
    #endif
    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);

    for(uint32_t emac_index = 1;emac_index < 3;emac_index++)
    {
        if(checktime > 30) // due to emac1 check times > 30s
        {
            checktime = 0;
            break; // break for ignore emac2
        }else{ // due to disconnect emac1
            checktime = 0;
        }
        
        assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_index * EMAC_OFFSET)) == 0x20240412);
        emac_test_emac_phy_init(emac_index,RGMII); 
        printf("emac_index_%d waiting to linkup... ... ...\n",emac_index);

        while(1)
        {
            emac_test_port_link_get(emac_index , &link_status);
            
            if(link_staus_old != link_status.link_up) //link_status.linkup change
            {
                // record new link_up status
                link_staus_old = link_status.link_up;
                if(link_status.link_up == PORT_LINK_UP)
                {
                    printf("----------- phy linkup! ---------\n");
                    printf("--------    speed=%ld            \n",(uint32_t)link_status.speed);
                    printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status.duplex);
                    printf("--------------------------------");

                    emac_test_cfg_and_check(emac_index,link_status.speed,link_status.duplex,RGMII);

                    rgmii_emac_test_txrx_test_case(emac_index, 1024, 0); // can also receive !!!

                    // ets_delay_us(12000);
                    // emac_test_tbx_tx_ctrl(emac_index, TX_STOP);
                    // emac_test_check_all_cntp(emac_index);
                    printf("----------- check wireshark ------------ \n");


                }else{
                    //nothing
                    printf("-----------emac_index_%d phy linkdown! ---------\n",emac_index);
                    break; // break while(1) to loop next emac
                }
            }

            // check link status every 1s
            ets_delay_us(1000000);

            if(link_status.link_up == PORT_LINK_UP)
            {
                checktime++;
                if(checktime > 30)
                {
                    break; // break while(1) to loop next emac
                }else{
                    if(!(checktime%5)){
                        emac_test_check_all_cntp(emac_index);
                    }
                }

            }else{ // phy link donwn
                if(checktime) //曾经link up 过
                {
                    printf("-----------emac_index_%d phy linkdown! ---------\n",emac_index);
                    break; // break while(1) to loop next emac
                }
            }
        }
    }


    return  ret;
}




espsw_error_t rgmii_emac_test_mac_rx_test(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;

    // uint32_t emac_id = 1; //emac1
    uint32_t checktime = 0; 
    struct tbx_pattern_info ptn_val = {0};
    
    // initial link_status struct
    struct fal_port_link link_status = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    bool link_staus_old = PORT_LINK_DOWN;

    ptn_val = *(struct tbx_pattern_info*)(arg_val);

    // printf("ptn.total_len = %d, ptn.repeat_num=%d\n",ptn_val.total_len,ptn_val.repeat_num);
    
    emac_test_emac_glb_init();

    #if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
    #endif
    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);

    for(uint32_t emac_index = 1;emac_index < 3;emac_index++)
    {
        if(checktime > 30) // due to emac1 check times > 30s
        {
            checktime = 0;
            break; // break for ignore emac2
        }else{ // due to disconnect emac1
            checktime = 0;
        }

        assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_index * EMAC_OFFSET)) == 0x20240412);
        emac_test_emac_phy_init(emac_index,RGMII); 
        printf("emac_index_%d waiting to linkup... ... ...\n",emac_index);

        while(1)
        {
            emac_test_port_link_get(emac_index , &link_status);
            
            if(link_staus_old != link_status.link_up) //link_status.linkup change
            {
                // record new link_up status
                link_staus_old = link_status.link_up;
                if(link_status.link_up == PORT_LINK_UP)
                {
                    printf("----------- phy linkup! ---------\n");
                    printf("--------    speed=%ld            \n",(uint32_t)link_status.speed);
                    printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status.duplex);
                    printf("--------------------------------");

                    emac_test_cfg_and_check(emac_index,link_status.speed,link_status.duplex,RGMII);

                    rgmii_emac_test_rx_test_case(emac_index);


                    ets_delay_us(5000);

                    emac_test_check_all_cntp(emac_index);
                    // break; 

                }else{
                    //nothing
                    printf("-----------emac_index_%d phy linkdown! ---------\n",emac_index);
                    break; // break while(1) to loop next emac
                }
            }

            // check link status every 1s
            ets_delay_us(1000000);


            if(link_status.link_up == PORT_LINK_UP)
            {
                checktime++;
                if(checktime > 30)
                {
                    break; // break while(1) to loop next emac
                }else{
                    if(!(checktime%5)){
                        emac_test_check_all_cntp(emac_index);
                    }
                }

            }else{ // phy link donwn
                if(checktime) //曾经link up 过
                {
                    printf("-----------emac_index_%d phy linkdown! ---------\n",emac_index);
                    break; // break while(1) to loop next emac
                }
            }
        }
    }

    return  ret;
}


//检查使用哪种rx clk设定（是否reverse； rxclk delay设置多少）可以让收到的数据没有错误
espsw_error_t rgmii_emac_test_mac_rx_debug(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;

    // uint32_t emac_id = 2; //emac1
    uint32_t safed_time = 0;

    struct tbx_pattern_info ptn_val = {0};
    
    // initial link_status struct
    struct fal_port_link link_status = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    bool link_staus_old = PORT_LINK_DOWN;

    ptn_val = *(struct tbx_pattern_info*)(arg_val);

    // printf("ptn.total_len = %d, ptn.repeat_num=%d\n",ptn_val.total_len,ptn_val.repeat_num);

    uint32_t rx_clk_reverse_flag[2] = {FALSE, TRUE};
    uint32_t rx_clk_phy_delay[8] =   {0x00, BIT(4),BIT(5),BIT(5)|BIT(4),BIT(6),BIT(6)|BIT(4),BIT(6)|BIT(5),BIT(6)|BIT(5)|BIT(4)};

    uint32_t record_i_j[16][2]={};
    uint32_t record_pass_times = 0;
    uint32_t fail_due_to_no_data_received_times = 0;
    uint32_t fail_due_to_rx_err_times = 0;

    for(uint32_t emac_id = 1; emac_id <4; emac_id++)
    {
        record_pass_times = 0;
        fail_due_to_no_data_received_times=0;
        fail_due_to_rx_err_times=0;

        for(uint32_t i=0; i < 2;i++)
        {
            for(uint32_t j=0; j<8; j++)
            {
                safed_time = 0;
                link_staus_old = PORT_LINK_DOWN;
                emac_rx_err_cntp_cnt_record  = 0;
                emac_tx_err_cntp_cnt_record  = 0;
                tbx_rx_err_cntp_cnt_record  = 0;

                emacx_1000m_tx_rx_clk_setting[emac_id].emacx_rx_clk_reverse_flag = rx_clk_reverse_flag[i];
                emacx_1000m_tx_rx_clk_setting[emac_id].emacx_rx_clk_delay = rx_clk_phy_delay[j];

                emacx_100m_tx_rx_clk_setting[emac_id].emacx_rx_clk_reverse_flag = rx_clk_reverse_flag[i];
                emacx_100m_tx_rx_clk_setting[emac_id].emacx_rx_clk_delay = rx_clk_phy_delay[j];

                emacx_10m_tx_rx_clk_setting[emac_id].emacx_rx_clk_reverse_flag = rx_clk_reverse_flag[i];
                emacx_10m_tx_rx_clk_setting[emac_id].emacx_rx_clk_delay = rx_clk_phy_delay[j];

                emac_test_emac_glb_init();

                #if DEBUG_VERBOSE1
                printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
                printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
                #endif
                assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);

                assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);
                emac_test_emac_phy_init(emac_id,RGMII); 
                printf("emac_index_%d waiting to linkup at i=%d, j=%d... ... ...\n",emac_id,i,j);

                while(1)
                {
                    emac_test_port_link_get(emac_id , &link_status);
                    
                    if(link_staus_old != link_status.link_up) //link_status.linkup change
                    {
                        // record new link_up status
                        link_staus_old = link_status.link_up;
                        if(link_status.link_up == PORT_LINK_UP)
                        {
                            printf("----------- phy linkup! ---------\n");
                            printf("--------    speed=%ld            \n",(uint32_t)link_status.speed);
                            printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status.duplex);
                            printf("--------------------------------");

                            emac_test_cfg_and_check(emac_id,link_status.speed,link_status.duplex,RGMII);

                            rgmii_emac_test_rx_test_case(emac_id);


                            ets_delay_us(5000);
                        }else{
                            //nothing
                            printf("-----------emac_index_%d phy linkdown! ---------\n",emac_id);
                        }
                    }

                    // check link status every 1s
                    ets_delay_us(1000000);


                    if(link_status.link_up == PORT_LINK_UP){
                        safed_time++;
                        if(emac_test_emac_tx_rx_err_packet_num(emac_id) == ESPSW_OK)
                        {
                            if(!(safed_time%3)) //print every 3s
                            {
                                printf(" emac_%d safed time has %d s\n",emac_id,safed_time);
                            }

                            if(safed_time >= 3) // pass 3s
                            {
                                if(emac_test_emac_check_rx_packet_received(emac_id) == ESPSW_OK)
                                {
                                    printf(" emac_%d rx passed safed_time %ds at i=%d, j=%d \n",emac_id,safed_time,i ,j);
                                    record_i_j[record_pass_times][0]=i;
                                    record_i_j[record_pass_times][1]=j;
                                    record_pass_times++;
                                    emac_test_check_all_cntp(emac_id);
                                    break;  // break while(1) to loop next 
                                }else{
                                    printf(" emac_%d safed_time %ds due to no data received !!! at i=%d, j=%d \n",emac_id,safed_time,i ,j);
                                    fail_due_to_no_data_received_times++;
                                    break;
                                }

                            }
                        }
                        else{
                            printf("---------- emac%d rx-fail at i=%d, j=%d  ---------\n",emac_id,i,j);
                            fail_due_to_rx_err_times++;
                            break;  // break while(1) to loop next 
                        }
                    }
                }
            }
        }

        if(record_pass_times)
        {
            printf("passed total times: %d,no_data_received_times:%d,rx_err_tims:%d \n",record_pass_times,fail_due_to_no_data_received_times,fail_due_to_rx_err_times);
            for(uint32_t i=0;i<record_pass_times;i++)
            {
                printf("emac_%d passed setting i=%d,j=%d \n",emac_id,record_i_j[i][0],record_i_j[i][1]);
            }
        }else{
            printf(" --@@-@@-@@-@@-- emac%d rx-fail all setting: no_data_received_times:%d,rx_err_tims:%d  ---------\n",emac_id,fail_due_to_no_data_received_times,fail_due_to_rx_err_times);
        }
    }


    return  ret;
}




//检查使用哪种tx clk设定（是否reverse； txclk delay设置多少）可以让收到的数据没有错误
espsw_error_t rgmii_emac_test_mac_tx_debug(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;

    uint32_t tx_check_time = 5;

    struct tbx_pattern_info ptn_val = {0};
    
    // initial link_status struct
    struct fal_port_link link_status = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    bool link_staus_old = PORT_LINK_DOWN;

    ptn_val = *(struct tbx_pattern_info*)(arg_val);

    // printf("ptn.total_len = %d, ptn.repeat_num=%d\n",ptn_val.total_len,ptn_val.repeat_num);

    uint32_t tx_clk_reverse_flag[2] = {FALSE, TRUE};
    uint32_t tx_clk_phy_delay[8] = {0x00, BIT(0),BIT(1),BIT(1)|BIT(0),BIT(2),BIT(2)|BIT(0),BIT(2)|BIT(1),BIT(2)|BIT(1)|BIT(0)};


    // uint32_t emac_id = 3; //emac1
    for(uint32_t emac_id = 1; emac_id <4; emac_id++)
    {
        for(uint32_t i=0; i < 2;i++)
        {
            for(uint32_t j=0; j<8; j++)
            {
                tx_check_time=3;
                link_staus_old = PORT_LINK_DOWN;
                emacx_1000m_tx_rx_clk_setting[emac_id].emacx_tx_clk_reverse_flag = tx_clk_reverse_flag[i];
                emacx_1000m_tx_rx_clk_setting[emac_id].emacx_tx_clk_delay = tx_clk_phy_delay[j];

                emacx_100m_tx_rx_clk_setting[emac_id].emacx_tx_clk_reverse_flag = tx_clk_reverse_flag[i];
                emacx_100m_tx_rx_clk_setting[emac_id].emacx_tx_clk_delay = tx_clk_phy_delay[j];

                emac_test_emac_glb_init();

                #if DEBUG_VERBOSE1
                printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
                printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
                #endif
                assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);

                assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET)) == 0x20240412);

                printf("\n\n");
                emac_test_emac_phy_init(emac_id,RGMII); 
                printf("emac_index_%d waiting to linkup at i=%d, j=%d... ... ...\n",emac_id,i,j);

                while(tx_check_time)
                {
                    emac_test_port_link_get(emac_id , &link_status);
                    
                    if(link_staus_old != link_status.link_up) //link_status.linkup change
                    {
                        // record new link_up status
                        link_staus_old = link_status.link_up;
                        if(link_status.link_up == PORT_LINK_UP)
                        {
                            printf("----------- phy linkup! ---------\n");
                            printf("--------    speed=%ld            \n",(uint32_t)link_status.speed);
                            printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status.duplex);
                            printf("--------------------------------");

                            emac_test_cfg_and_check(emac_id,link_status.speed,link_status.duplex,RGMII);

                            printf(" --------- check wireshark ------------\n");
                            rgmii_emac_test_txrx_test_case(emac_id, 1024, 1000);

                            ets_delay_us(5000);
                        }else{
                            //nothing
                            printf("-----------emac_index_%d phy linkdown! ---------\n",emac_id);
                        }
                    }

                    //check wireshark after link up
                    if(link_status.link_up == PORT_LINK_UP){
                        tx_check_time--;
                        printf("    ->>>>>> check time %ds\n",tx_check_time);
                    }

                    // check link status every 1s
                    ets_delay_us(1000000);

                }
            }
        }
    }
    return  ret;
}

//检查使用哪种tx clk设定（是否reverse； txclk delay设置多少）可以让收到的数据没有错误
espsw_error_t rgmii_emac_test_emac1_connect_emac2_test(unsigned long *arg_val)
{
    espsw_error_t ret = ESPSW_OK;
    struct tbx_pattern_info ptn_val = {0};
    uint32_t check_times = 30;//
    
    // initial link_status struct
    struct fal_port_link link_status_emac1 = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    struct fal_port_link link_status_emac2 = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    bool link_staus_old = PORT_LINK_DOWN;

    ptn_val = *(struct tbx_pattern_info*)(arg_val);

    // printf("ptn.total_len = %d, ptn.repeat_num=%d\n",ptn_val.total_len,ptn_val.repeat_num);
    emac_test_emac_glb_init();

    emac_test_emac_phy_init(TEST_EMAC1_ID,RGMII); // emac1 rgmii mode
    emac_test_emac_phy_init(TEST_EMAC2_ID,RGMII); // emac2 rgmii mode

    #if DEBUG_VERBOSE1
    printf("SWITCH_GLB_DATE_REG = %lx\n", REG_READ(SWITCH_GLB_DATE_REG));
    printf("EMAC_DATE_REG addr=%p, SWITCH_EMAC_EMAC_DATE_REG = %lx\n", (SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET), REG_READ(SWITCH_EMAC_EMAC_DATE_REG + emac_id * EMAC_OFFSET));
    #endif
    assert((REG_READ(SWITCH_GLB_DATE_REG)) == 0x20240801);

    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + TEST_EMAC1_ID * EMAC_OFFSET)) == 0x20240412);
    assert((REG_READ(SWITCH_EMAC_EMAC_DATE_REG + TEST_EMAC2_ID * EMAC_OFFSET)) == 0x20240412);

    printf("waiting to linkup... ... ...\n");

    while(1)
    {
        emac_test_port_link_get(TEST_EMAC1_ID , &link_status_emac1);
        emac_test_port_link_get(TEST_EMAC2_ID , &link_status_emac2);
        

        // EMAC2 connect EMAC1, just monitor one linkstaus between them
        if(link_staus_old != link_status_emac1.link_up) //link_status.linkup change
        {
            // record new link_up status
            link_staus_old = link_status_emac1.link_up;
            if(link_status_emac1.link_up == PORT_LINK_UP)
            {
                printf("----------- emac1 phy linkup! ---------\n");
                printf("--------    speed=%ld            \n",(uint32_t)link_status_emac1.speed);
                printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status_emac1.duplex);
                printf("--------------------------------\n\n\n");

                printf("----------- emac2 phy linkup! ---------\n");
                printf("--------    speed=%ld            \n",(uint32_t)link_status_emac2.speed);
                printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status_emac2.duplex);
                printf("--------------------------------");

                emac_test_cfg_and_check(TEST_EMAC1_ID,link_status_emac1.speed,link_status_emac1.duplex,RGMII);
                emac_test_cfg_and_check(TEST_EMAC2_ID,link_status_emac2.speed,link_status_emac2.duplex,RGMII);

                // stage1 :  transimit 1000 packet
                for(uint32_t i = 0;i<150;i++)
                {
                    rgmii_emac_test_txrx_test_case(TEST_EMAC2_ID,1024,1000); 
                    rgmii_emac_test_txrx_test_case(TEST_EMAC1_ID,1024,1000);
                    ets_delay_us(12000);
                }

                emac_test_check_all_cntp(TEST_EMAC1_ID);
                emac_test_check_all_cntp(TEST_EMAC2_ID);

                printf("\n [stage1]: check emac1 and emac2 receive 150,000 num packet\n");
                printf("-------------------------------------------------\n");
                ets_delay_us(3000000);

                printf("\n [stage2]: infinite transmit test start\n");
                // stage2 : infinite transimit
                rgmii_emac_test_txrx_test_case(TEST_EMAC2_ID,1024,0);
                rgmii_emac_test_txrx_test_case(TEST_EMAC1_ID,1024,0);

                for(uint32_t i =0;i< check_times;i++)
                {
                    //send 10s then check cntp
                    ets_delay_us(10000000);
                    if((emac_test_emac_tx_rx_err_packet_num(TEST_EMAC1_ID) == ESPSW_OK) && (emac_test_emac_tx_rx_err_packet_num(TEST_EMAC2_ID) == ESPSW_OK)) 
                    {
                        printf("passd times(10s/times) %d/%d\n",i+1,check_times);
                    }else{
                        printf("failed times(10s/times) %d/%d\n",i+1,check_times);
                        break;
                    }
                }

                emac_test_tbx_tx_ctrl(TEST_EMAC1_ID, TX_STOP);
                emac_test_tbx_tx_ctrl(TEST_EMAC2_ID, TX_STOP);

                emac_test_check_all_cntp(TEST_EMAC1_ID);
                emac_test_check_all_cntp(TEST_EMAC2_ID);

                printf(" ===>[stage2]:check emac1 and emac2 no err packet\n");
                break; 

            }else{
                //nothing
                printf("-----------emac phy linkdown! ---------\n");
                break; // break while(1) to loop next emac
            }
        }

        // check link status every 1s
        ets_delay_us(1000000);
    }

    return  ret;
}



#endif