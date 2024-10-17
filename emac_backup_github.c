#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include "freertos/FreeRTOS.h"

#include "fal_typedef.h"

#include "uhal_glb.h"
#include "uhal_reg_access.h"
// #include "uhal_tarp.h"
// #include "uhal_qman.h"
#include "uhal_emac.h"
#include "uhal_phy.h"
// #include "uhal_acl.h"
#include "espsw_soc.h"

#include "soc/hp_sys_clkrst_reg.h"

#include "fal_loopback.h"
#include "fal_tbx.h"
#include "uhal_tbx.h"


#define GMII_MII            0
#define RMII                1  //switch(digital) not support for now
#define RGMII               2

#define TEST_EMAC1_ID       1   //1,2,3,4
#define TEST_EMAC2_ID       2   //1,2,3,4
#define TEST_EMAC3_ID       3   //1,2,3,4
#define TEST_EMAC4_ID       4   //1,2,3,4

#define EMAC1_USED_INTF     GMII_MII
#define EMAC2_USED_INTF     RGMII
#define EMAC3_USED_INTF     RGMII
#define EMAC4_USED_INTF     RGMII

#define CUR_USED_INTF           EMAC4_USED_INTF
#define CUR_TEST_EMAC_ID        TEST_EMAC3_ID

#define DEBUG_DEFINE   0
#define REVERT_TXCLK   0 // only for test_image which can revert tx clk and then send to phy 



#define FORCE_LINK              0
#if FORCE_LINK
#define FORCE_LINK_SPEED        1000
#endif


#define PHY_LOOPBACK_EN         0
#if PHY_LOOPBACK_EN
#define PHY_LOOP_BACK_MODE      0 //0:phy near end loop back
                                  //1:phy far end looop back
#endif

#define SWITHC_SYS_CLK_20M      1
#define SWITHC_SYS_CLK_40M      2
#define SWITHC_SYS_CLK_USE      SWITHC_SYS_CLK_40M


char *str_interface[]={"GMII_MII","RMII","RGMII"};
uint32_t g_txrx_meter_up_limit = 0, g_txrx_meter_low_limit =0;
uint32_t g_rx_meter_err_record[256] = {0};
uint32_t g_tx_meter_err_record[256] = {0};


//#######################  ----  Advertised Speed and Duplex config  --- ####################
// #-------------------------------VSC8541 PHY PART----------------------------------------------
// # VSC8541 Addr 0x09[9:8] - 1000BASE-T Control;

#define VSC8541PHY_ADVERTISE_1000BASET_FDX   1 //# note: It is advisable not to set EXTPHY_ADVERTISE_1000BASET_HDX to 1 and EXTPHY_ADVERTISE_1000BASET_FDX to 0,
#define VSC8541PHY_ADVERTISE_1000BASET_HDX   0  //#       as many computer network cards do not support 1000BASE-HDX (Half-duplex) mode.


// # VSC8541 Addr 0x05[8:5] - 1000BASE-T Control;
#define VSC8541PHY_ADVERTISE_100BASETX_FDX   1
#define VSC8541PHY_ADVERTISE_100BASETX_HDX   1
#define VSC8541PHY_ADVERTISE_10BASET_FDX     1
#define VSC8541PHY_ADVERTISE_10BASET_HDX     1

struct emac_cntp_num_list
{
    uint32_t rx_total_frame;
    uint32_t tx_total_frame;
    uint32_t rx_err_total_frame;
    uint32_t tx_err_total_frame;
};

struct emac_cntp_len_list
{
    uint32_t rx_total_frame_byte;
    uint32_t rx_good_frame_byte;
    uint32_t tx_total_frame_byte;
    uint32_t tx_good_frame_byte;
};

struct tbx_cntp_num_list
{
    uint32_t rx_packet_num;
    uint32_t rx_err_packet_num;
    uint32_t tx_packet_num;
};

struct tbx_cntp_len_list
{
    uint32_t rx_packet_byte;
    uint32_t rx_err_packet_byte;
    uint32_t tx_packet_byte;

};

struct emac_cntp_num_list emac_cntp_num= {0};
struct emac_cntp_len_list emac_cntp_len= {0};
struct tbx_cntp_num_list tbx_cntp_num[2]= {{0}, {0}};
struct tbx_cntp_len_list tbx_cntp_len[2]= {{0}, {0}};


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
                esp_rom_printf("error  !\n");
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


espsw_error_t emac_test_cfg_set_speed(uint32_t emac_id, enum fal_port_speed speed, enum fal_port_duplex duplex, uint32_t emac_used_intf)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (emac_id >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    printf("EMAC_CFG_REG addr=%p,1---EMAC_CFG_REG = 0x%08lx!!\n",(void*)(EMAC_CFG_REG + (emac_id * EMAC_OFFSET)),reg_val);

    if (speed == FAL_SPEED_10)
        reg_val |= (EMAC_PORTSELECT & (~EMAC_SPEED));
    else if (speed == FAL_SPEED_100)
        reg_val |= (EMAC_PORTSELECT | EMAC_SPEED);
    else if (speed == FAL_SPEED_1000)
        reg_val &= ~EMAC_PORTSELECT;
    else {
        printf("not support speed now=%d\n",speed);
        return ESPSW_BAD_VALUE;
    }

    if (duplex == FAL_FULL_DUPLEX)
        reg_val |= EMAC_DUPLEX_MODE; //100M Full
    else
        reg_val &= ~EMAC_DUPLEX_MODE; //Half


    if(emac_used_intf == RGMII )
    {
        //phy mode select MII/GMII 
        reg_val |= 1;   //  [1:0] : 2'b1: RGMII. 2'b0:GMII/MII.*/
    }
    else // (emac_used_intf == GMII_MII)
    {
        reg_val |= 0;
    }

    ESPSW_RTN_ON_ERROR(uhal_reg_set(EMAC_CFG_REG + (emac_id * EMAC_OFFSET), reg_val));

#if REVERT_TXCLK //debug use: 特定image使用, 翻转 TXCLK使用 emac3的mac_speed_reg (低bit) 或者emac4的mac_speed_reg (H+Lbit) -根据不同image 判断 [9:8]
    uhal_reg_get(EMAC_CFG_REG + (4 * EMAC_OFFSET), (uint8_t *)&reg_val);

    reg_val |= BIT(9); //bit9 =1 翻转tx clk 后从FPGA输出
    ESPSW_RTN_ON_ERROR(uhal_reg_set(EMAC_CFG_REG + (4 * EMAC_OFFSET), reg_val));
#endif



    esp_rom_delay_us(1000);

#if (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_20M)
    uhal_reg_set(SWGLB_PTPT_CFG_REG,0x0000065f); //set 1ms in 20Mhz env
#elif (SWITHC_SYS_CLK_USE == SWITHC_SYS_CLK_40M)
    uhal_reg_set(SWGLB_PTPT_CFG_REG,0x0000033f); //set 1ms in 40Mhz env
#endif

    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(EMAC_CFG_REG +(emac_id * EMAC_OFFSET), EMAC_FREQUENCY_METER_E_S, 1, 1));

    //preamble len -- 设成15数值 可以”临时“解决 RGMII Mode 1000Mbps下 TX测试出现的undersize frame的问题 - 待emac修改verilog 代码之后再复原测试看看
    // ESPSW_RTN_ON_ERROR(uhal_reg_field_set(EMAC_CFG_REG +(emac_id * EMAC_OFFSET), EMAC_TX_PREAMBLE_LENGTH_S, 4, 15));

    //open TX/RX
    ESPSW_RTN_ON_ERROR(uhal_reg_set(EMAC_DATA_PATH_EN_REG + (emac_id * EMAC_OFFSET), EMAC_TRANSMIT_E | EMAC_RECEIVE_E));


    ESPSW_RTN_ON_ERROR(uhal_reg_get(EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    printf("EMAC_CFG_REG addr=%p,2---EMAC_CFG_REG = 0x%08lx!!\n",(void*)(EMAC_CFG_REG + (emac_id * EMAC_OFFSET)),reg_val);

    return ret;
}


espsw_error_t emac_test_check_key_reg_val(uint32_t port, enum fal_port_speed speed)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t rx_meter, tx_meter, debug_val;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (port >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    uint32_t addr_test = EMAC_CFG_REG + (port * EMAC_OFFSET);

    addr_test = EMAC_RX_METER_CNT_REG + (port * EMAC_OFFSET);
    uhal_reg_get(EMAC_RX_METER_CNT_REG + (port * EMAC_OFFSET), (uint8_t *)&rx_meter);
    printf("EMAC_RX_METER_CNT_REG addr = %p, EMAC_RX_METER_CNT_REG = d'%ld!!\n",(void*)addr_test,rx_meter);

    addr_test = EMAC_TX_METER_CNT_REG + (port * EMAC_OFFSET);
    uhal_reg_get(EMAC_TX_METER_CNT_REG + (port * EMAC_OFFSET), (uint8_t *)&tx_meter);
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
        assert(rx_meter>124995 && rx_meter<125005);
        assert(tx_meter>124995 && tx_meter<125005);
    }
    else {
        printf("not support speed now\n");
        return ESPSW_BAD_VALUE;
    }

    addr_test = EMAC_DEBUG_STATUS_REG + (port * EMAC_OFFSET);
    uhal_reg_get(EMAC_DEBUG_STATUS_REG + (port * EMAC_OFFSET), (uint8_t *)&debug_val);
    printf("EMAC_DEBUG_STATUS_REG addr = %p, EMAC_DEBUG_STATUS_REG = 0x%08lx!!\n",(void*)addr_test,debug_val);
    assert(debug_val == 0x00); //make sure

    return ret;
}


// cai for debug test
espsw_error_t emac_test_emac_cntp_read_all(uint32_t port,uint8_t *err_flag, bool tx_read_flag, bool rx_read_flag)
{   
    espsw_error_t ret = ESPSW_OK;
    uint32_t cai_value;
    uint8_t k ;

    if(rx_read_flag)
    {
        printf("     --- EMAC Num CNTP List-Group0(rx) -----------!\n");
        for(k = 0; k< 20;k++)
        {
            uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + k*8 + 0x40), (uint8_t *)&cai_value);
            printf("emac cntprx Module_id%d: %ld \n",k,cai_value);
        }
    }

    if(tx_read_flag)
    {
        printf("     --- EMAC Num CNTP List-Group1(tx) -----------!\n");
        for(k = 20; k< 43;k++)
        {
            uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + k*8 + 0x40), (uint8_t *)&cai_value);
            printf("emac cntptx Module_id%d: %ld \n",k,cai_value);
        }
    }
 
    printf("     --- EMAC Num CNTP List-Group2(rx&tx) -----------!\n");
    for(k = 43; k< 59;k++)
    {
        uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + k*8 + 0x40), (uint8_t *)&cai_value);
        printf("emac cntptxrx Module_id%d: %ld \n",k,cai_value);
        if((k != 43) && (cai_value > 0)) // k=43 represents receive err frame which include jabber(long) frame, But I dont take jabber(long) frame as err frame 
        {
            *err_flag = 1;
        }
    }

    return ret;
}

espsw_error_t emac_test_reg_read_all(uint32_t port)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t cai_value;
    uint8_t k ;

    for(uint32_t i =EMAC_GLB_MAC_CLK_EN1_REG; i<(EMAC_GLB_MAC_DATE_REG+4);i+=4)
    {
        uhal_reg_get(i, (uint8_t *)&cai_value);
        printf("EMAC_GLB_REG addr = %p, result = 0x%08lx\n",(void*)(i),cai_value);
    }

    for(uint32_t i =EMAC_DATE_REG; i<(EMAC_INT_REG+4);i+=4)
    {
        uhal_reg_get(i + (port * EMAC_OFFSET), (uint8_t *)&cai_value);
        printf("EMAC_REG addr = %p, result = 0x%08lx\n",(void*)(i + (port * EMAC_OFFSET)),cai_value);
    }



    // vTaskDelay(pdMS_TO_TICKS(100));
    // printf("     --- EMAC Num CNTP List-Group0(rx) -----------!\n");
    // for(k = 0; k< 20;k++)
    // {
    //     uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + k*8 + 0x40), (uint8_t *)&cai_value);
    //     printf("emac cntprx Module_id%d: %ld!!\n",k,cai_value);
    // }
    
    // printf("     --- EMAC Num CNTP List-Group1(tx) -----------!\n");
    // for(k = 20; k< 43;k++)
    // {
    //     uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + k*8 + 0x40), (uint8_t *)&cai_value);
    //     printf("emac cntprx Module_id%d: %ld!!\n",k,cai_value);
    // }

        
    // printf("     --- EMAC Num CNTP List-Group2(rx&tx) -----------!\n");
    // for(k = 43; k< 59;k++)
    // {
    //     uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + k*8 + 0x40), (uint8_t *)&cai_value);
    //     printf("emac cntprx Module_id%d: %ld!!\n",k,cai_value);
    // }
    
    return ret;
}

uint8_t emac_test_cntp_read_result(uint32_t port, struct emac_cntp_num_list *emac_cntp_num,struct tbx_cntp_num_list *tbx_cntp_num)
{
    uint32_t cai_value;
    uint32_t cai_value_2;
    uint8_t err_flag = 0;
    uint32_t tbx_num = 0xff;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (port >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    if((port == 4) || (port == 0))
    {
        tbx_num = 0;
    }else if((port == 3) || (port == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        // assert(0);
        printf("current emac-ic has no tbx funciton !!! \n");
    }

#if 0
    uint32_t addr_test = EMAC_DEBUG_STATUS_REG + (port * EMAC_OFFSET);
    uint8_t LOOPMAX = 10;
    uint8_t times = 0;
    while(1)
    {
        for(uint8_t i = 0;i< LOOPMAX;i++)
        {
            uhal_reg_get(EMAC_DEBUG_STATUS_REG + (port * EMAC_OFFSET), (uint8_t *)&cai_value);
            printf("EMAC_DEBUG_STATUS_REG addr = %p, EMAC_DEBUG_STATUS_REG = 0x%08x!!\n",addr_test,cai_value);

            uhal_reg_get(EMAC_PHY_INTF_STATUS_REG + (port * EMAC_OFFSET), (uint8_t *)&cai_value);
            printf("EMAC_PHY_INTF_STATUS_REG addr = %p, EMAC_PHY_INTF_STATUS_REG = 0x%08x!!\n",(EMAC_PHY_INTF_STATUS_REG + (port * EMAC_OFFSET)),cai_value);
        }

        if(LOOPMAX < 12)
        { 
            LOOPMAX++;
        }
        else
        {
            LOOPMAX = 10;
            times++;
        }

        vTaskDelay(pdMS_TO_TICKS(LOOPMAX));
        if(times >2)
        {
            times = 0;
            break;
        }
    }

    while(1)
    {
        printf("     --- EMAC Num CNTP List-Group0(rx) -----------!\n");
        for(uint8_t k = 0;k< 1;k++)
        {
            uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + k*8 + 0x40), (uint8_t *)&cai_value);
            printf("emac cntprx id %d:%ld!!\n",k,cai_value);
        }

        uhal_reg_get(EMAC_INT_REG + (port * EMAC_OFFSET), (uint8_t *)&cai_value);
        printf("EMAC_INT_REG addr = %p, EMAC_INT_REG = 0x%08x!!\n",EMAC_INT_REG + (port * EMAC_OFFSET),cai_value);

        uhal_reg_get(EMAC_DEBUG_STATUS_REG + (port * EMAC_OFFSET), (uint8_t *)&cai_value);
        printf("EMAC_DEBUG_STATUS_REG addr = %p, EMAC_DEBUG_STATUS_REG = 0x%08x!!\n",addr_test,cai_value);
        vTaskDelay(pdMS_TO_TICKS(20));
    }
#endif

    uint32_t tbx_cntp_list_addr = 0;
    uint32_t tbx_cntp_len_addr = 0;
    
    /* 
    from yudengke:
    0x52000 是 cntp 模块的地址,+0x40 是计数器的起始地址
    0x52400 是直接算的 TBX1 应该读什么位置
    */
    if((port == 4) || (port == 0)) // tbx num0
    {
        tbx_cntp_list_addr = DR_REG_EIB_CNTP_BASE+0x40; // ???
        tbx_cntp_len_addr =  DR_REG_EIB_CNTP_BASE+ 0x1000;

    }else if((port == 3) || (port == 2)) //tbx num1
    {
        tbx_cntp_list_addr = DR_REG_EIB_CNTP_BASE+0x400; // "'DR_REG_EIB_CNTP_BASE+0x400' is already the TBX1 cntp address,  
                                                               // '-0x40' is to maintain the follwing calculation format"
        tbx_cntp_len_addr =  DR_REG_EIB_CNTP_BASE+ 3*8 +5*5*8 + 0x1000; // 【5*5*8】=> 5:TAPT个数; 5:每个tarp byte有五项统计; 8每项统计占据8个地址. [3*8]=> 3:TBX0数量,8:一个TBX0占据8个地址
    }
    else{
        // force stop run
        // assert(0);
        printf("current emac-ic has no tbx funciton !!! \n");
    }
    
    if(tbx_cntp_list_addr)
    {
        printf("---------------------------------------------------------------------------!\n");
        printf("    ---- tbx rx&tx cnt!\n");
        uhal_reg_get(tbx_cntp_list_addr + (0*8), (uint8_t *)&cai_value);
        printf("emacid:%ld, tbx_cntp_list_addr: %p,tbx rx CNTP:%ld !!\n",port, (void*)(tbx_cntp_list_addr + (0*8)),cai_value);
        tbx_cntp_num[tbx_num].rx_packet_num = cai_value;

        uhal_reg_get(tbx_cntp_list_addr + (1*8), (uint8_t *)&cai_value);
        printf("emacid:%ld, tbx_cntp_list_addr: %p,tbx rx error CNTP:%ld !!\n",port, (void*)(tbx_cntp_list_addr + (1*8)),cai_value);
        tbx_cntp_num[tbx_num].rx_err_packet_num = cai_value;

        uhal_reg_get(tbx_cntp_list_addr + (2*8), (uint8_t *)&cai_value);
        printf("emacid:%ld, tbx_cntp_list_addr: %p,tbx tx CNTP:%ld !!\n",port, (void*)(tbx_cntp_list_addr + (2*8)),cai_value);
        tbx_cntp_num[tbx_num].tx_packet_num = cai_value;
    }


    printf("\n");
    printf("    ---- emac rx&tx cnt!\n");
    uint32_t emac_tx_total_frame_cnt_module_id = 20;
    uint32_t emac_rx_total_frame_cnt_module_id = 0;

    uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + emac_rx_total_frame_cnt_module_id*8 + 0x40), (uint8_t *)&cai_value);
    uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + emac_tx_total_frame_cnt_module_id*8 + 0x40), (uint8_t *)&cai_value_2);
    printf("emacid:%ld,emac cntprx total frame cnt  Module_id: %ld: emac rx cntp %ld!!\n",port,emac_rx_total_frame_cnt_module_id,cai_value);
    printf("emacid:%ld,emac cntptx total frame cnt Module_id :%ld: emac tx cntp %ld!!\n",port,emac_tx_total_frame_cnt_module_id,cai_value_2);
    emac_cntp_num->rx_total_frame = cai_value;
    emac_cntp_num->tx_total_frame = cai_value_2;


    uint32_t emac_tx_err_frame_cnt_module_id = 51;
    uint32_t emac_rx_err_frame_cnt_module_id = 43;
    uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + emac_rx_err_frame_cnt_module_id*8 + 0x40), (uint8_t *)&cai_value);
    uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + emac_tx_err_frame_cnt_module_id*8 + 0x40), (uint8_t *)&cai_value_2);
    // printf("emacid:%ld,emac cntprx err frame cnt  Module_id: %ld: emac rx err cntp %ld!!\n",port,emac_rx_err_frame_cnt_module_id,cai_value);
    // printf("emacid:%ld,emac cntptx err frame cnt Module_id :%ld: emac tx err cntp %ld!!\n",port,emac_tx_total_frame_cnt_module_id,cai_value_2);


    // if(cai_value|cai_value_2) //error occur
    // {
        emac_test_emac_cntp_read_all(port,&err_flag,true,true);
    // }

    uint32_t emac_rx_total_frame_byte_id = 0;
    uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*4*8 + emac_rx_total_frame_byte_id*8 + 0x1000), (uint8_t *)&cai_value);
    printf("emac rx total frame bytes= %ld\n",cai_value);

    uint32_t emac_rx_good_frame_byte_id = 1;
    uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*4*8 + emac_rx_good_frame_byte_id*8 + 0x1000), (uint8_t *)&cai_value);
    printf("emac rx good frame bytes= %ld\n",cai_value);

    uint32_t emac_tx_total_frame_byte_id = 2;
    uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*4*8 + emac_tx_total_frame_byte_id*8 + 0x1000), (uint8_t *)&cai_value);

    printf("emac tx total frame bytes= %ld\n",cai_value);

    uint32_t emac_tx_good_frame_byte_id = 3;
    uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*4*8 + emac_tx_good_frame_byte_id*8 + 0x1000), (uint8_t *)&cai_value);
    printf("emac tx good frame bytes= %ld\n",cai_value);

    if(tbx_cntp_len_addr)
    {
        printf("---------------------------------------------------------------------------!\n");
        uhal_reg_get(tbx_cntp_len_addr + (0*8), (uint8_t *)&cai_value);
        printf("emacid:%ld, tbx_cntp_list_addr: %p, tbx rx total bytes= %ld\n",port, (void*)(tbx_cntp_len_addr + (0*8)), cai_value);

        uhal_reg_get(tbx_cntp_len_addr + (1*8), (uint8_t *)&cai_value);
        printf("emacid:%ld, tbx_cntp_list_addr: %p, tbx rx error bytes= %ld\n",port, (void*)(tbx_cntp_len_addr + (1*8)), cai_value);
       
        uhal_reg_get(tbx_cntp_len_addr + (2*8), (uint8_t *)&cai_value);
        printf("emacid:%ld, tbx_cntp_list_addr: %p, tbx tx total bytes= %ld\n",port, (void*)(tbx_cntp_len_addr + (2*8)), cai_value);

    }

    printf("\n");
    return err_flag;
}


espsw_error_t emac_test_cntp_read_tbx(uint32_t port, uint32_t tbx_num,  struct tbx_cntp_num_list *tbx_cntp_num)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t cai_value;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (port >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    uint32_t tbx_cntp_list_addr;
    
    /* 
    from yudengke:
    0x52000 是 cntp 模块的地址,+0x40 是计数器的起始地址
    0x52400 是直接算的 TBX1 应该读什么位置
    */
    if((port == 4) || (port == 0)) // tbx num0
    {
        tbx_cntp_list_addr = DR_REG_EIB_CNTP_BASE; // ???
    }else if((port == 3) || (port == 2)) //tbx num1
    {
        tbx_cntp_list_addr = DR_REG_EIB_CNTP_BASE+0x400 -0x40; // "'DR_REG_EIB_CNTP_BASE+0x400' is already the TBX1 cntp address,  
                                                               // '-0x40' is to maintain the follwing calculation format"
    }
    else{
        // force stop run
        assert(0);
    }
        
    uhal_reg_get(tbx_cntp_list_addr + (0*8 + 0x40), (uint8_t *)&cai_value);
    // printf("emacid:%ld, tbx_cntp_list_addr: %p,tbx rx CNTP:%ld !!\n",port, (void*)(tbx_cntp_list_addr + (0*8 + 0x40)),cai_value);
    tbx_cntp_num[tbx_num].rx_packet_num = cai_value;


    // uint32_t emac_rx_total_frame_cnt_module_id = 0;
    // uhal_reg_get((DR_REG_EMAC_CNTP_BASE + (port-1)*59*8 + emac_rx_total_frame_cnt_module_id*8 + 0x40), (uint8_t *)&cai_value);
    // printf("emacid:%ld,emac cntprx total frame cnt  Module_id: %ld: emac rx cntp %ld!!\n",port,emac_rx_total_frame_cnt_module_id,cai_value);
    // emac_cntp_num->rx_total_frame = cai_value;


    return ret;
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

espsw_error_t emac_test_vsc85xx_phy_packet_gen(uint32_t port)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr;
    uint16_t reg_val;

    //phy addr
    ESPSW_RTN_ON_ERROR(emac_test_vsc85xx_get_phy_addr(port, &phy_addr));

    return ESPSW_OK;
}

espsw_error_t emac_test_vsc85xx_phy_init(uint32_t port,uint32_t port_used_intf)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr;
    uint16_t reg_val;

    //phy addr
    ESPSW_RTN_ON_ERROR(emac_test_vsc85xx_get_phy_addr(port, &phy_addr));

    esp_rom_printf("-------------------------------------\n");
    uhal_phy_reg_get(port,phy_addr,2,&reg_val);
    esp_rom_printf("PHYID 0x%04x\n",reg_val);
    assert(reg_val == 0x0007); // vcs8541 reg2 default value 
    esp_rom_printf("-------------------------------------\n");

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

    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_PHY_EXT_PHY_CNTL_1, reg_val));

    //SW Reset
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, 0, &reg_val));
    reg_val |= (1 << 15);
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0, reg_val));
    usleep(5000);

    int8_t time_wait2 = 1000 / 10; // 1s 
    do
    {   
        uhal_phy_reg_get(port, phy_addr, 0, &reg_val);
        esp_rom_printf("reset done or not..... %d *10ms left\n",time_wait2);
        vTaskDelay(pdMS_TO_TICKS(10));
        time_wait2--;
    }while ((time_wait2) && ((reg_val & 0x8000) == 0x8000)); //check bit15 is 1 or not, 0 is reset done

    if(time_wait2 == 0)
    {
        printf("phy sw reset fail\n");
    }else{
        printf("phy sw reset pass\n");
    }

    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, MSCC_PHY_EXT_PHY_CNTL_1, &reg_val));
    printf("PHY Mode- PHY_EXT_PHY_CNTL_1(Address23) =0x%lx\n",reg_val);



    if(port_used_intf == RGMII)
    {
        //switch to default page2
        ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_EXTENDED_2));

        // set bit11 = 0
        emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~BIT(11),0x00); 
        // set RX_CLK delay to compensate 0x14:[6:4]=001:0.8ns; 010:1.1ns; 011:1.7ns; 100:2.0ns; 101: 2.3 ns; 110:2.6ns; 111:3.4ns;rx_clk delay
        emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~(BIT(6)|BIT(5)| BIT(4)),BIT(6)|BIT(5)| BIT(4)); 
        // set TX_CLK delay to compensate 0x14:[2:0]=001:0.8ns; 010:1.1ns ; 011:1.7ns; 100:2.0ns;  110:2.6ns; 111:3.4ns tx_clk delay
        emac_test_set_phy_reg_bits(port,phy_addr,VSC8502_RGMII_CNTL,~(BIT(2)|BIT(1)| BIT(0)),BIT(2)|BIT(1)| BIT(0)); 
        ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, VSC8502_RGMII_CNTL, &reg_val));
        printf("RGMII_Control = 0x%lx\n",reg_val);

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


    //Restart Autoegotiate
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, 0, &reg_val));
    reg_val |= (1 << 9);

    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0, reg_val));
    usleep(5000);

    // //cai todo:Check bit9 should auto reset to 0  which means autonegotiate done
    // uint32_t time_wait1 = 5;
    // do
    // {   
    //     uhal_phy_reg_get(port, phy_addr, 0, &reg_val);
    //     esp_rom_printf("autonegotiate done or not..... %lds left\n",time_wait1);
    //     vTaskDelay(pdMS_TO_TICKS(1000));
    //     time_wait1--;
    // }while ((time_wait1) && ((reg_val & 0x200) == 0x200)); //check bit9 is 1 or not, 0 is autonegotiate done

    // if(time_wait1 == 0)
    // {
    //     esp_rom_printf(" @@@@@@ timeout, re-autonegotiate timeout!!\n");
    // }else {
    //     esp_rom_printf(" ***** re-autonegotiate pass!!\n");
    // }

    #if FORCE_LINK
    if(FORCE_LINK_SPEED == 100)
    {
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(8),BIT(8)); //# set  = 1
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(13),BIT(13)); //# set  = 1
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(6),0x00); //# set  = 0
    }
    else if(FORCE_LINK_SPEED == 10)
    {
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(8),BIT(8)); //# set  = 1
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(13),0x00); //# set  = 0
        emac_test_set_phy_reg_bits(port, phy_addr,0x00,~BIT(6),0x00); //# set  = 0
    }


    vTaskDelay(pdMS_TO_TICKS(250));
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


/**
 * @brief init switch
 * @return ESPSW_OK or error code
 */

espsw_error_t emac_test_emac_glb_init(void)
{
    espsw_error_t ret = ESPSW_OK;

    /* EMAC global CFG */
    //system clock enable
    ESPSW_RTN_ON_ERROR(uhal_reg_set(EMAC_GLB_MAC_CLK_EN1_REG,
                        EMAC_GLB_MAC_SYS_CLK_FORCE_ON_M | EMAC_GLB_MAC_GLB_REG_CLK_FORCE_ON));
    //rx/tx clock enable
    ESPSW_RTN_ON_ERROR(uhal_reg_set(EMAC_GLB_MAC_CLK_EN2_REG,
                        EMAC_GLB_MAC_RX_CLK_FORCE_ON_M | EMAC_GLB_MAC_TX_CLK_FORCE_ON_M));
    //sw reset emac and phy
    ESPSW_RTN_ON_ERROR(uhal_reg_set(EMAC_GLB_MAC_GLB_SOFT_RESET1_REG,
                        EMAC_GLB_MAC_PHY_RST_N_M | EMAC_GLB_MAC_SYS_SOFT_RST_N_M));
    //sw reset emac and phy rx/tx
    ESPSW_RTN_ON_ERROR(uhal_reg_set(EMAC_GLB_MAC_GLB_SOFT_RESET2_REG,
                        EMAC_GLB_MAC_RX_SOFT_RST_N_M | EMAC_GLB_MAC_TX_SOFT_RST_N_M));

    usleep(30000); // cai:10ms is to small ,minimum is 15ms from vcs8541 spec(wait time from phy reset to access smi interface)

    return ret;
}


espsw_error_t emac_test_emac_phy_init(uint32_t emacid,uint32_t emac_used_intf)
{
    espsw_error_t ret = ESPSW_OK;

    printf("########################################\n");
    printf("############# emac id = %ld ##############\n",emacid);
    printf("########################################\n");

    printf("set interface = %s\n",str_interface[emac_used_intf]);
    ESPSW_RTN_ON_ERROR(emac_test_vsc85xx_phy_init(emacid, emac_used_intf));

    return ret;
}

uint64_t little_endian_to_big_endian_64(uint64_t x) {
    return ((x & 0x00000000000000FF) << 56) |
           ((x & 0x000000000000FF00) << 40) |
           ((x & 0x0000000000FF0000) << 24) |
           ((x & 0x00000000FF000000) << 8) |
           ((x & 0x000000FF00000000) >> 8) |
           ((x & 0x0000FF0000000000) >> 24) |
           ((x & 0x00FF000000000000) >> 40) |
           ((x & 0xFF00000000000000) >> 56);
}

// Near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
espsw_error_t emac_test_near_end_loopback_case(uint32_t emacid)
{
    espsw_error_t ret = ESPSW_OK;
    
    uint32_t tbx_num, i,j, err_cnt=0;
    uint32_t tbx_repeat_num = 1000;// set '0' means infinite transmit
    uint32_t reg_val =0 ;

    uint8_t err_index[128] = {0};  // size need same as byte_init[]
    struct fal_tbx_pattern tbx_tx_pattern;
    struct fal_tbx_pattern tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255, //tbx rx always ready
                                            .rx_rdy_ltime = 1
                                        };

    // printf("################# near end loop back test#######################\n");

    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_NEAR);   // maybe need to disable tbx_tx when FAL_EMAC_LPBK_FAR mode 

    // emac_test_reg_read_all(emacid);

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern));
    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern));

    // 初始化 pkt_hdr.byte 数组,will be filled in tbx tx sram
    //note:tbx tx sram is placed by BIG Endian ,(大端序(big-endian)中,最高有效字节存储在最低地址(8byte 一组),而在小端序(little-endian)中,最低有效字节存储在最低地址) 

    // 0x12, 0x23, 0x34, 0x45, 0x56, 0x67, 0x78, 0x89 (byte_init[]: word[0]:0x45342312,word[1]:0x89786756) wiil placed be Address[7]->Address[6]-> ... ->Address[0] (word[1]:0x12233445,word[0]:0x56677889)
    

    // RAW tbx tx word[0]-L: 0x56677889 - >  dst addr:0x122334455667
    // RAW tbx tx word[1]-H: 0x12233445
    //                                  - >  src addr:0x78899aabbccd  type:0x1122
    // RAW tbx tx word[2]-L: 0x11223344
    // RAW tbx tx word[3]-H: 0x9aabbccd 

    uint8_t byte_init[128] = {
        0x12, 0x23, 0x34, 0x45,
        0x56, 0x67, 0x78, 0x89,  
        0x9a, 0xab, 0xbc, 0xcd,
        0x11, 0x22, 0x33, 0x44,

        0x55, 0x66, 0x77, 0x99,
        0x99, 0xaa, 0xbb, 0xcc,
        0xdd, 0xee, 0xff, 0xff
    };
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

    // for (i = 0; i < 4; i++) // intentionally printing 4 info to reduce content printing
    // {
    //     uint32_t high_part = (uint32_t)(big_endian_array[i] >> 32); // 取得高32位
    //     uint32_t low_part = (uint32_t)(big_endian_array[i] & 0xFFFFFFFF); // 取得低32位

    //     // 64bit is 2 word
    //     printf("RAW tbx tx word[%ld]: 0x%lx\n",2*i,low_part);
    //     printf("RAW tbx tx word[%ld]: 0x%lx\n",2*i+1, high_part);

    //     // for(j = 0; j < 8; j++)
    //     // {
    //     //     printf("RAW tbx tx byte[%ld]: 0x%x\n", i*8+j, ((uint8_t *)&big_endian_array[i])[j]);
    //     // }

    // }

    tbx_tx_pattern.info.total_len = 1024;//1024
    tbx_tx_pattern.info.repeat_num = tbx_repeat_num; // set '0' means infinite transmit
    tbx_tx_pattern.payload_pad =0x2a;


    if((emacid == 4) || (emacid == 2))
    {
        tbx_config.user_mode = USER_B_MODE;
    }else if((emacid == 3) || (emacid == 0))
    {
        tbx_config.user_mode = USER_D_MODE;
    }
    else{
        // force stop run
        printf("current port not support near end loopback for no used tbx!!!\n");
        assert(0);
    }

    if((emacid == 4) || (emacid == 0))
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

    fal_tbx_pattern_set(tbx_num,&tbx_tx_pattern);
    fal_tbx_config(tbx_num, &tbx_config);

    /*config tbx tx start*/
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
    vTaskDelay(pdMS_TO_TICKS(10));

    fal_tbx_rx_data_check(tbx_num,&tbx_rx_pattern);


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

    // if(err_cnt > 0)
    // {       
    //     printf("\n");
    //     printf(" -------------------------- diff list --------------------------\n");         
    //     for (j = 0; j < err_cnt; j++)  // intentionally printing 4 info to reduce content printing
    //     {
    //         printf("Golden send:tbx tx byte[%ld]:0x%lx  VS. Loopback_Rev: tbx rx byte[%ld]: 0x%lx\n", err_index[j], ((uint8_t *)&big_endian_array[j/8])[j%8], err_index[j], tbx_rx_pattern.pkt_hdr.byte[err_index[j]]);
    //     }

    //      printf("     *** Near end loop back Fail !!!\n");
    //     // assert(0);
    // }
    // else{
    //     printf("     *** tbx tx content = tbx rx content !!!\n");
    // }

    // for (int i = 0; i < 32; i++) 
    // for (i = 0; i < 6; i++)  // intentionally printing 6 info to reduce content printing
    // {
    //     printf("tbx rx word[%d]: 0x%08x\n", i, tbx_rx_pattern.pkt_hdr.word[i]);
    // }
   #if 0          
    emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num);

    if((tbx_cntp_num[tbx_num].tx_packet_num == tbx_cntp_num[tbx_num].rx_packet_num) &&\
        (emac_cntp_num.tx_total_frame == emac_cntp_num.rx_total_frame) &&\
        (tbx_cntp_num[tbx_num].tx_packet_num == emac_cntp_num.rx_total_frame)&&\
        tbx_cntp_num[tbx_num].rx_err_packet_num == 0)
    {
        printf("     *** Near end loop back Pass !!!\n");
    }
    else{
        printf("     *** Near end loop back Fail !!!\n");
        // assert(0);
    }

    // vTaskDelay(pdMS_TO_TICKS(3000));
    printf("\n\n\n");
    #endif

    return ret;
}
espsw_error_t emac_test_tbx_tx_ctrl(uint32_t emacid, enum fal_tbx_tx_action tx_act)
{
    uint32_t tbx_num = 0xff;

    if((emacid == 4) || (emacid == 0))
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        // assert(0);
        printf("current emac-ic has no tbx funciton !!! \n");
    }

    fal_tbx_tx_action(tbx_num, tx_act);

    return  ESPSW_OK;
}

espsw_error_t emac_test_tbx_rx_check_prepare(uint32_t emacid,struct fal_tbx_pattern *tbx_rx_pattern)
{
    printf("################# rx check #######################\n");
    uint32_t tbx_num = 0xff;
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1,
                                            .rx_rdy_htime = 255,
                                            .rx_rdy_ltime = 1
                                        };
    memset(tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern));

    if((emacid == 4) || (emacid == 2))
    {
        tbx_config.user_mode = USER_B_MODE;
    }else if((emacid == 3) || (emacid == 0))
    {
        tbx_config.user_mode = USER_D_MODE;
    }
    else{
        // force stop run
        // assert(0);
        printf("current emac-ic has no tbx funciton !!! \n");
    }

    if((emacid == 4) || (emacid == 0))
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        // assert(0);
        printf("current emac-ic has no tbx funciton !!! \n");
    }

    if (tbx_num !=0xff) //normal case
    {
        fal_tbx_config(tbx_num, &tbx_config);

        fal_tbx_rx_action(tbx_num, TRUE);
    }else
    {
        return ESPSW_FAIL;
    }
    return  ESPSW_OK;
}




espsw_error_t emac_test_rx_check(uint32_t emacid)
{
    uint32_t tbx_num = 0xff;
    uint32_t rx_meter = 0, tx_meter = 0, rx_meter_err_cnt=0,tx_meter_err_cnt=0, total_check_cnt=0;
    uint32_t err_flag = 0;

    struct fal_tbx_pattern tbx_rx_pattern;

    if((emacid == 4) || (emacid == 0))
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        // assert(0);
        printf("current emac-ic has no tbx funciton !!! \n");
    }

    emac_test_tbx_rx_check_prepare(emacid, &tbx_rx_pattern);

    printf("################# rx check #######################\n");

    // fal_tbx_rx_action(tbx_num,false); //避免overflow的问题
    // delay some time 
    vTaskDelay(pdMS_TO_TICKS(5000));

    while(1)
    {
        // // disable emac cntp
        // uhal_reg_field_set(EMAC_CFG_REG, EMAC_CNTP_E_S, 1, 0);

        fal_tbx_rx_data_check(tbx_num,&tbx_rx_pattern);
        printf(" ------------------------------------------------------- \n");
        printf(" ------------------------------------------------------- \n");
        // for (int i = 0; i < 18; i++)  // intentionally printing 6 info to reduce content printing
        // {
        //     printf("byte[%ld] = 0x%lx\n",i,tbx_rx_pattern.pkt_hdr.word[i]);
        // }

        printf("第 %ld 笔  print message\n",total_check_cnt/100);

        err_flag = emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num);
        if (err_flag)
        {
            printf(" ------------------------------- err_flag id occurs ------------- !\n");
            emac_test_reg_read_all(emacid);
        }


        // Print message every 10min(6000);5min(3000);1min(600);10s(100)
        for (int i = 0; i < 100; i++)
        {
            vTaskDelay(pdMS_TO_TICKS(100));
            
            //check rx meter every 0.1s
            uhal_reg_get(EMAC_RX_METER_CNT_REG + (emacid * EMAC_OFFSET), (uint8_t *)&rx_meter);
            uhal_reg_get(EMAC_TX_METER_CNT_REG + (emacid * EMAC_OFFSET), (uint8_t *)&tx_meter);

            total_check_cnt++;

            if((tx_meter>g_txrx_meter_up_limit)||(tx_meter<g_txrx_meter_low_limit)) //check 100M clk meter
            {
                if(tx_meter_err_cnt <= 255) //数组大小最多记录256笔
                {
                    g_tx_meter_err_record[tx_meter_err_cnt++] = tx_meter;
                }
                else
                {
                    tx_meter_err_cnt++; //超过256笔的err tx_meter内容不记录进数组内,仅仅统计erro cnt
                }

            }

            if((rx_meter>g_txrx_meter_up_limit)||(rx_meter<g_txrx_meter_low_limit))
            {
                if(rx_meter_err_cnt <= 255) //数组大小最多记录256笔
                {
                    g_rx_meter_err_record[rx_meter_err_cnt++] = rx_meter;
                }
                else
                {
                    rx_meter_err_cnt++; //超过256笔的err rx_meter内容不记录进数组内,仅仅统计erro cnt
                }

            }
        }

        printf(" ### rx_metter_err_cnt:tx_metter_err_cnt / [total_check cnt] : %ld:%ld/[%ld] !!\n",rx_meter_err_cnt,tx_meter_err_cnt,total_check_cnt);
        
        if(rx_meter_err_cnt)
        {
            if(rx_meter_err_cnt > 256)
            {
                rx_meter_err_cnt = 256;
            }

            for(uint32_t err_cnt_i =0;err_cnt_i < rx_meter_err_cnt;err_cnt_i++)
            {
                printf(" ### 第%ld 笔err rx_meter = d'%ld!!\n",err_cnt_i, g_rx_meter_err_record[err_cnt_i]);
            }
        }
        else{
            printf(" ### rx_meter check pass in total cnt:%ld !!!! \n\n",total_check_cnt);
        }

        if(tx_meter_err_cnt)
        {
            if(tx_meter_err_cnt > 256)
            {
                tx_meter_err_cnt = 256;
            }

            for(uint32_t err_cnt_j =0;err_cnt_j < tx_meter_err_cnt;err_cnt_j++)
            {
                printf(" ### 第%ld 笔err tx_meter = d'%ld!!\n",err_cnt_j, g_tx_meter_err_record[err_cnt_j]);
            }
        }
        else{
            printf(" ### tx_meter check pass in total cnt:%ld \n",total_check_cnt);
        }
    }

    return ESPSW_OK;
}


// Far-end loopback mode  :link-partner tx -> (phyrx -> emacrx ->  emac tx ->phytx) -> link-partner rx
espsw_error_t emac_test_far_end_loopback_case(uint32_t emacid)
{
    espsw_error_t ret = ESPSW_OK;

    printf("################# far end loop back test#######################\n");
    uint32_t tbx_num = 0xff;
    uint32_t rx_meter, tx_meter;
    uint32_t tx_meter_err_cnt = 0,rx_meter_err_cnt = 0,total_check_cnt = 0;
    struct fal_tbx_pattern tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1
                                        };

    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_FAR);   // maybe need to disable tbx_tx when FAL_EMAC_LPBK_FAR mode 

    // emac_test_reg_read_all(emacid);

    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern));

    if((emacid == 4) || (emacid == 2))
    {
        tbx_config.user_mode = USER_B_MODE;
    }else if((emacid == 3) || (emacid == 0))
    {
        tbx_config.user_mode = USER_D_MODE;
    }
    else{
        // force stop run
        // assert(0);
        printf("current emac-ic has no tbx funciton !!! \n");
    }

    if((emacid == 4) || (emacid == 0))
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        // assert(0);
        printf("current emac-ic has no tbx funciton !!! \n");
    }

    if (tbx_num !=0xff) //normal case
    {
        fal_tbx_config(tbx_num, &tbx_config);

        fal_tbx_rx_action(tbx_num, TRUE);
        // fal_tbx_tx_action(tbx_num, TX_START); /* Far-end loopback dont need tbx tx*/

        // delay some time 
        vTaskDelay(pdMS_TO_TICKS(500));

        fal_tbx_rx_data_check(tbx_num,&tbx_rx_pattern);
    }

    // for (int i = 0; i < 32; i++) 
    // for (i = 0; i < 6; i++)  // intentionally printing 6 info to reduce content printing
    // {
    //     printf("tbx rx word[%d]: 0x%08x\n", i, tbx_rx_pattern.pkt_hdr.word[i]);
    // }
            

    printf("pls use wireshark to check loopback info !!!\n");

    // check 1 min
    // for (int i = 0; i < 30; i++) 
    while(1)
    {
        // // disable emac cntp
        // uhal_reg_field_set(EMAC_CFG_REG, EMAC_CNTP_E_S, 1, 0);
        // vTaskDelay(pdMS_TO_TICKS(10));

        printf(" ------------------------------------------------------- \n");
        printf(" ------------------------------------------------------- \n");
        emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num);
        // emac_test_reg_read_all(emacid);
        // assert(emac_cntp_num.tx_total_frame == emac_cntp_num.rx_total_frame);
        

        #if DEBUG_DEFINE// test use
        while(1)
        {
            uhal_reg_get(EMAC_RX_METER_CNT_REG + (emacid * EMAC_OFFSET), (uint8_t *)&rx_meter);
            // printf("EMAC_RX_METER_CNT_REG = d'%ld!!\n",rx_meter);

            uhal_reg_get(EMAC_TX_METER_CNT_REG + (emacid * EMAC_OFFSET), (uint8_t *)&tx_meter);
            // printf("EMAC_TX_METER_CNT_REG = d'%ld!!\n",tx_meter);
            total_check_cnt++;
            if((tx_meter>g_txrx_meter_up_limit)||(tx_meter<g_txrx_meter_low_limit)) //check 100M clk meter
            {
                tx_meter_err_cnt++;
                printf("tx_meter = d'%ld!!\n",tx_meter);

            }

            if((rx_meter>g_txrx_meter_up_limit)||(rx_meter<g_txrx_meter_low_limit))
            {
                rx_meter_err_cnt++;
                printf("rx_meter = d'%ld!!\n",rx_meter);

            }

            if(total_check_cnt>2000)
            {
                printf("tx_metter_err_cnt:rx_metter_err_cnt//[total_check cnt] :%ld:%ld//[%ld] !!\n",tx_meter_err_cnt,rx_meter_err_cnt,total_check_cnt);
                vTaskDelay(pdMS_TO_TICKS(80000));
            }
       
            vTaskDelay(pdMS_TO_TICKS(20));
        }        
         #endif

        // enable emac cntp
        // uhal_reg_field_set(EMAC_CFG_REG, EMAC_CNTP_E_S, 1, 0);
        vTaskDelay(pdMS_TO_TICKS(10000));
    }

    // disable loopback mode
    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_DISABLE);

    return ret;
}



    // for (size_t i = 0; i < length / 2; i++) {
    //     uint8_t temp = byte_init[i];
    //     byte_init[i] = byte_init[length - i - 1];
    //     byte_init[length - i - 1] = temp;
    // }


#if 1
// not HW loopback function, something like FW loopback,but I can modify rx data and then transmit.
// link-partner tx -> (phyrx -> emacrx -> (tbxrx sram -> modify -> tbxtx sram -> )->emac tx ->phytx) -> link-partner rx
espsw_error_t emac_test_rx_modify_back_to_tx_case(uint32_t emacid)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t rev_cnt = 0;
    printf("################# rx_modify_back_to_tx test#######################\n");

    uint32_t tbx_num, i,j, err_cnt=0;

    struct fal_tbx_pattern tbx_tx_pattern;
    struct fal_tbx_pattern tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1
                                        };

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern));
    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern));

    tbx_tx_pattern.info.total_len = 128; // packet header max size
    tbx_tx_pattern.info.repeat_num = 1; // set '0' means infinite transmit
    // tbx_tx_pattern.payload_pad =0x2a; // total len is 128 so no paload


    if((emacid == 4) || (emacid == 2))
    {
        tbx_config.user_mode = USER_B_MODE;
    }else if((emacid == 3) || (emacid == 0))
    {
        tbx_config.user_mode = USER_D_MODE;
    }
    else{
        // force stop run
        assert(0);
    }

    if((emacid == 4) || (emacid == 0))
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        assert(0);
    }

    fal_tbx_config(tbx_num, &tbx_config);
    /*config tbx rx start*/
    fal_tbx_rx_action(tbx_num, TRUE);

    emac_test_cntp_read_tbx(emacid, tbx_num, tbx_cntp_num);
    uint32_t old_tbx_rx_num = tbx_cntp_num[tbx_num].rx_packet_num;
    while(1)
    {
        emac_test_cntp_read_tbx(emacid, tbx_num, tbx_cntp_num);
        uint32_t new_tbx_rx_num = tbx_cntp_num[tbx_num].rx_packet_num;

        if(old_tbx_rx_num != new_tbx_rx_num) // rev new packet
        {
            printf("rev pc new packet !\n");
            old_tbx_rx_num = new_tbx_rx_num;
            fal_tbx_rx_data_check(tbx_num,&tbx_rx_pattern);

            // printf("tbx_rx_type[0] = 0x%x\n",tbx_rx_pattern.pkt_hdr.byte[12]);
            // printf("tbx_rx_type[1] = 0x%x\n",tbx_rx_pattern.pkt_hdr.byte[13]);

            // for (i = 0; i < 26; i++)  // intentionally printing 6 info to reduce content printing
            // {
            //     printf("tbx rx word[%d]: 0x%x\n", i, tbx_rx_pattern.pkt_hdr.byte[i]);
            // }

            // tbx_rx_pattern is already sram format, but  i will call fal_tbx_pattern_set(xx, tbx_rx_pattern) later ,which will do Little-endian to big-endian.
            // so I do Little-endian to big-endian in advance here is to realize  '- - is +'
            uint64_t big_endian_array[16]={0}; //16 is 128/8(uint64_t is for 8bytes)
            // byte_init[7]-[0] : (0x8978675645342312) -> big_endian_array[0]:0x1223344556677889
            for (i = 0, j = 0; i < sizeof(tbx_rx_pattern.pkt_hdr.byte)/sizeof(tbx_rx_pattern.pkt_hdr.byte[0]); i += 8, j++) {
                uint64_t num = ((uint64_t)tbx_rx_pattern.pkt_hdr.byte[i]) |
                        ((uint64_t)tbx_rx_pattern.pkt_hdr.byte[i + 1] << 8) |
                        ((uint64_t)tbx_rx_pattern.pkt_hdr.byte[i + 2] << 16) |
                        ((uint64_t)tbx_rx_pattern.pkt_hdr.byte[i + 3] << 24) |
                        ((uint64_t)tbx_rx_pattern.pkt_hdr.byte[i + 4] << 32) |
                        ((uint64_t)tbx_rx_pattern.pkt_hdr.byte[i + 5] << 40) |
                        ((uint64_t)tbx_rx_pattern.pkt_hdr.byte[i + 6] << 48) |
                        ((uint64_t)tbx_rx_pattern.pkt_hdr.byte[i + 7] << 56);
            
                big_endian_array[j] = little_endian_to_big_endian_64(num);

                for(int u = 0; u < 8; u++)
                {
                    tbx_rx_pattern.pkt_hdr.byte[j*8+u] = ((uint8_t *)&big_endian_array[j])[u];
                }
            }
                
                // for (i = 0; i < 16; i++)  // intentionally printing 6 info to reduce content printing
                // {
                //     printf("byte[%ld] = 0x%x\n",i,tbx_rx_pattern.pkt_hdr.byte[i]);
                // }


            if((tbx_rx_pattern.pkt_hdr.byte[12] == 0x22) && (tbx_rx_pattern.pkt_hdr.byte[13] == 0x22)) // from my python script specific packet
            {
                rev_cnt++;
                printf("rev new packet from python,rev_cnt =%ld !\n",rev_cnt);

                // tbx tx pattern use tbx_rx_pattern (modify type field and send back)
                tbx_rx_pattern.pkt_hdr.byte[12] = 0x66;
                tbx_rx_pattern.pkt_hdr.byte[13] = 0x66;
                tbx_rx_pattern.info.total_len = 128; // packet header max size
                tbx_rx_pattern.info.repeat_num = 1; // set '0' means infinite transmit

                fal_tbx_pattern_set(tbx_num,&tbx_rx_pattern);
                /*config tbx tx start*/
                fal_tbx_tx_action(tbx_num, TX_START);
            }
            // restart tbx rx
            /*config tbx rx start*/
            fal_tbx_rx_action(tbx_num, TRUE);
        }
        vTaskDelay(pdMS_TO_TICKS(10));
    }



    return ret;
}

// not HW loopback function, something like FW loopback,but I can modify rx data and then transmit.
// link-partner tx -> (phyrx -> emacrx -> (tbxrx sram -> modify -> tbxtx sram -> )->emac tx ->phytx) -> link-partner rx
espsw_error_t emac_test_tx_check(uint32_t emacid ,uint32_t tx_len, uint32_t repeat_num) //tx_len:14bit, repeate num:10bit,0 represents infinite transmit
{
    espsw_error_t ret = ESPSW_OK;

    // printf("################# tx check #######################\n");

    uint32_t tbx_num=0;

    struct fal_tbx_pattern tbx_tx_pattern;
    struct fal_tbx_pattern tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .rx_en = 1,
                                            .tx_en = 1

                                        };

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern));
    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern));

    tbx_tx_pattern.info.total_len = tx_len; // packet header max size
    tbx_tx_pattern.info.repeat_num = repeat_num ; // set '0' means infinite transmit
    tbx_tx_pattern.payload_pad =0x2a; // total len is 128 so no paload

    uint8_t byte_init[128] = {
        0x12, 0x23, 0x34, 0x45,
        0x56, 0x67, 0x78, 0x89,  
        0x9a, 0xab, 0xbc, 0xcd,
        0x11, 0x22, 0x33, 0x44,

        0x55, 0x66, 0x77, 0x99,
        0x99, 0xaa, 0xbb, 0xcc,
        0xdd, 0xee, 0xff, 0xff
    };

    // temp test, set all data = 0xff
    // int test;
    // for(test=0;test<128;test++)
    // {
    //     // byte_init[test] = 0x5a;
    //     byte_init[test] = 0x0f;
    //     // byte_init[test+1] = 0xaa;
    // }

    memcpy(tbx_tx_pattern.pkt_hdr.byte, byte_init, sizeof(byte_init));



    if((emacid == 4) || (emacid == 2))
    {
        tbx_config.user_mode = USER_B_MODE;
    }else if((emacid == 3) || (emacid == 0))
    {
        tbx_config.user_mode = USER_D_MODE;
    }
    else{
        // force stop run
        assert(0);
    }

    if((emacid == 4) || (emacid == 0))
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        assert(0);
    }

    fal_tbx_config(tbx_num, &tbx_config);

    fal_tbx_pattern_set(tbx_num,&tbx_tx_pattern);
    /*config tbx tx start*/
    fal_tbx_tx_action(tbx_num, TX_START);

    // vTaskDelay(pdMS_TO_TICKS(1000));
    // emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num);
    
    // while(1)
    // {
    //     //stop here
    //     vTaskDelay(pdMS_TO_TICKS(5000));
    // }

    return ret;
}


espsw_error_t emac_test_emac2emac_connect_test(uint32_t emacid_tx, uint32_t emacid_rx)
{
    espsw_error_t ret = ESPSW_OK;

    printf("################# tx test#######################\n");

    uint32_t tbx_num=0;

    struct fal_tbx_pattern tbx_tx_pattern;
    struct fal_tbx_pattern tbx_rx_pattern;
    /*config tbx mode*/
    struct fal_tbx_config  tbx_config = {   .cntp_en = 1,
                                            .tx_en = 1,
                                            .rx_en = 1
                                        };

    memset(&tbx_tx_pattern, 0, sizeof(struct fal_tbx_pattern));
    memset(&tbx_rx_pattern, 0, sizeof(struct fal_tbx_pattern));

    tbx_tx_pattern.info.total_len = 128; // packet header max size
    tbx_tx_pattern.info.repeat_num = 1000; // set '0' means infinite transmit
    // tbx_tx_pattern.payload_pad =0x2a; // total len is 128 so no paload

    uint8_t byte_init[128] = {
        0x12, 0x23, 0x34, 0x45,
        0x56, 0x67, 0x78, 0x89,  
        0x9a, 0xab, 0xbc, 0xcd,
        0x11, 0x22, 0x33, 0x44,

        0x55, 0x66, 0x77, 0x99,
        0x99, 0xaa, 0xbb, 0xcc,
        0xdd, 0xee, 0xff, 0xff
    };
    memcpy(tbx_tx_pattern.pkt_hdr.byte, byte_init, sizeof(byte_init));



    if((emacid_tx == 4) || (emacid_tx == 2))
    {
        tbx_config.user_mode = USER_B_MODE;
    }else if((emacid_tx == 3) || (emacid_tx == 0))
    {
        tbx_config.user_mode = USER_D_MODE;
    }
    else{
        // force stop run
        assert(0);
    }

    if((emacid_tx == 4) || (emacid_tx == 0))
    {
        tbx_num = 0;
    }else if((emacid_tx == 3) || (emacid_tx == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        assert(0);
    }

    fal_tbx_config(tbx_num, &tbx_config);

    fal_tbx_pattern_set(tbx_num,&tbx_tx_pattern);
    /*config tbx tx start*/
    fal_tbx_tx_action(tbx_num, TX_START);

    vTaskDelay(pdMS_TO_TICKS(3000));
    emac_test_cntp_read_result(emacid_tx, &emac_cntp_num, tbx_cntp_num);
   
    return ret;
}

#endif

void emac_test_check_clk_meter(uint32_t emacid)
{
    uint32_t rx_meter=0,tx_meter=0,tx_meter_err_cnt=0,rx_meter_err_cnt=0,total_check_cnt=0;

    while(1)
    {
        uhal_reg_get(EMAC_RX_METER_CNT_REG + (emacid * EMAC_OFFSET), (uint8_t *)&rx_meter);
        // printf("EMAC_RX_METER_CNT_REG = d'%ld!!\n",rx_meter);

        uhal_reg_get(EMAC_TX_METER_CNT_REG + (emacid * EMAC_OFFSET), (uint8_t *)&tx_meter);
        // printf("EMAC_TX_METER_CNT_REG = d'%ld!!\n",tx_meter);
        total_check_cnt++;
        if((tx_meter>g_txrx_meter_up_limit)||(tx_meter<g_txrx_meter_low_limit)) //check 100M clk meter
        {
            tx_meter_err_cnt++;
            printf("tx_meter = d'%ld!!\n",tx_meter);

        }

        if((rx_meter>g_txrx_meter_up_limit)||(rx_meter<g_txrx_meter_low_limit))
        {
            rx_meter_err_cnt++;
            printf("rx_meter = d'%ld!!\n",rx_meter);

        }

        if(total_check_cnt>2000)
        {
            printf("tx_metter_err_cnt:rx_metter_err_cnt//[total_check cnt] :%ld:%ld//[%ld] !!\n",tx_meter_err_cnt,rx_meter_err_cnt,total_check_cnt);
            break;
        }
                
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}


//EMAC2 connect EMAC3 test,  RGMII mode!!
// emac2 tx,emac3 rx
espsw_error_t emac_test_run4(unsigned long *arg_val)
{
    // initial link_status struct
    struct fal_port_link link_status_emac2 = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    struct fal_port_link link_status_emac3 = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    struct fal_tbx_pattern tbx_rx_pattern;
    bool link_staus_old = PORT_LINK_DOWN;
    
    uint32_t loop_cnt = 0;
    uint32_t len_array[] = {30,60,65,128,256,512,1024,1536,2048,9716}; //30 将会补齐到64byte, tbx tx/emac tx/emac rx max support 9720 byte
    uint32_t len_array_index = 0; 
    uint8_t emac_tx_err_flag = 0, emac_rx_err_flag = 0;

    emac_test_emac_glb_init();
    emac_test_emac_phy_init(TEST_EMAC2_ID,EMAC2_USED_INTF);
    emac_test_emac_phy_init(TEST_EMAC3_ID,EMAC3_USED_INTF);

    printf("waiting to linkup... ... ...\n");

    while(1)
    {   
        emac_test_port_link_get(TEST_EMAC2_ID , &link_status_emac2);
        emac_test_port_link_get(TEST_EMAC3_ID , &link_status_emac3);

        // EMAC2 connect EMAC3, just monitor one linkstaus between them
        if(link_staus_old != link_status_emac2.link_up) //link_status.linkup change
        {
            // record new link_up status
            link_staus_old = link_status_emac2.link_up;

            if(link_status_emac2.link_up == PORT_LINK_UP)
            {
                printf("----------- emac2 phy linkup! ---------\n");
                printf("--------    speed=%ld            \n",(uint32_t)link_status_emac2.speed);
                printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status_emac2.duplex);
                printf("--------------------------------\n\n\n");

                printf("----------- emac3 phy linkup! ---------\n");
                printf("--------    speed=%ld            \n",(uint32_t)link_status_emac3.speed);
                printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status_emac3.duplex);
                printf("--------------------------------");

                emac_test_cfg_set_speed(TEST_EMAC2_ID, link_status_emac2.speed, link_status_emac2.duplex,EMAC2_USED_INTF);
                emac_test_cfg_set_speed(TEST_EMAC3_ID, link_status_emac3.speed, link_status_emac3.duplex,EMAC3_USED_INTF);


                emac_test_check_key_reg_val(TEST_EMAC2_ID, link_status_emac2.speed);
                emac_test_check_key_reg_val(TEST_EMAC3_ID, link_status_emac3.speed);


                //emac3 rx; emac2 tx  , note: for emac2&3 use same tbx1,so tbx1 just used to send(tbx1->emac2) ,but dont use to receive
                //emac_test_tbx_rx_check_prepare(TEST_EMAC3_ID,&tbx_rx_pattern);
                
                #if 1
                //temp test
                emac_test_tx_check(TEST_EMAC2_ID,1024,0); //infinite sen

                for(uint32_t time_cnt = 0;time_cnt < 800;time_cnt++)  //4s
                {
                    esp_rom_delay_us(5000);
                }

                emac_test_tbx_tx_ctrl(TEST_EMAC2_ID, TX_STOP);
                

                vTaskDelay(pdMS_TO_TICKS(1000));
                emac_test_cntp_read_result(TEST_EMAC2_ID, &emac_cntp_num, tbx_cntp_num);
                emac_test_cntp_read_result(TEST_EMAC3_ID, &emac_cntp_num, tbx_cntp_num);

                #else
                while(1)
                {
                    // emac_test_tbx_tx_ctrl(TEST_EMAC4_ID, TX_STOP);

                    for(uint32_t tx=0; tx<10;tx++) //1s, every loop has 10 different len,so 1 loop =10s, total frame cnt for 1 loop is 10*1000 *10 = 10w
                    {
                        emac_test_tx_check(TEST_EMAC2_ID,len_array[len_array_index],1000);
                        vTaskDelay(pdMS_TO_TICKS(100));
                    }
                    
                    len_array_index++;
                    if(len_array_index == (sizeof(len_array)/sizeof(len_array[0]))) // 发送了一轮不同数据长度的data之后,打印数据检查
                    {
                        len_array_index = 0;
                        

                        if( (++loop_cnt) % 360 == 0) //print message every 10 loops (360 * 10s = 60min)
                        {
                            vTaskDelay(pdMS_TO_TICKS(100));

                            printf("==================================== check emac2 tx status ==============================\n");
                            //emac_tx_err_flag = emac_test_cntp_read_result(TEST_EMAC2_ID, &emac_cntp_num, tbx_cntp_num);
                            emac_test_emac_cntp_read_all(TEST_EMAC2_ID,&emac_tx_err_flag,true,false);
                            printf("==================================== check emac3 rx status ==============================\n");
                            //emac_rx_err_flag = emac_test_cntp_read_result(TEST_EMAC3_ID, &emac_cntp_num, tbx_cntp_num);
                            emac_test_emac_cntp_read_all(TEST_EMAC3_ID,&emac_rx_err_flag,false,true);


                            if(emac_tx_err_flag || emac_rx_err_flag)
                            {
                                printf("!!!! erro occur ,at loop= %ld !!! \n",loop_cnt);
                                emac_test_tbx_tx_ctrl(TEST_EMAC2_ID, TX_STOP);
                                break;
                            }else{
                                printf("  !!!!!! pass has %ld loop !!! \n",loop_cnt);
                            }

                            if(loop_cnt >= 1800)
                            {
                                emac_test_cntp_read_result(TEST_EMAC2_ID, &emac_cntp_num, tbx_cntp_num);
                                emac_test_cntp_read_result(TEST_EMAC3_ID, &emac_cntp_num, tbx_cntp_num);
                                break;
                            }

                        }
                    }


                    // emac_test_tbx_tx_ctrl(TEST_EMAC4_ID, TX_START);
                }
                #endif

            }
            else 
            {
                //nothing
                printf("----------- phy linkdown! ---------\n");
            }
        }

        // check link status every 1s
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
    return  ESPSW_OK;
}


//EMAC1 connect EMAC2 test, TO-DO!!
// emac2 tx,emac1 rx
espsw_error_t emac_test_run3(unsigned long *arg_val)
{
    // initial link_status struct
    struct fal_port_link link_status_emac1 = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    struct fal_port_link link_status_emac2 = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    bool link_staus_old = PORT_LINK_DOWN;

    emac_test_emac_glb_init();
    emac_test_emac_phy_init(TEST_EMAC1_ID,EMAC1_USED_INTF);
    emac_test_emac_phy_init(TEST_EMAC2_ID,EMAC2_USED_INTF);

    printf("waiting to linkup... ... ...\n");

    while(1)
    {   

        emac_test_port_link_get(TEST_EMAC2_ID , &link_status_emac2);
        emac_test_port_link_get(TEST_EMAC1_ID , &link_status_emac1);

        // EMAC1 connect EMAC2, just monitor one linkstaus between them
        if(link_staus_old != link_status_emac2.link_up) //link_status.linkup change
        {
            // record new link_up status
            link_staus_old = link_status_emac2.link_up;

            if(link_status_emac2.link_up == PORT_LINK_UP)
            {
                printf("----------- emac2 phy linkup! ---------\n");
                printf("--------    speed=%ld            \n",(uint32_t)link_status_emac2.speed);
                printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status_emac2.duplex);
                printf("--------------------------------\n\n\n");

                printf("----------- emac1 phy linkup! ---------\n");
                printf("--------    speed=%ld            \n",(uint32_t)link_status_emac1.speed);
                printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status_emac1.duplex);
                printf("--------------------------------");

                emac_test_cfg_set_speed(TEST_EMAC2_ID, link_status_emac2.speed, link_status_emac2.duplex,EMAC2_USED_INTF);
                emac_test_cfg_set_speed(TEST_EMAC1_ID, link_status_emac1.speed, link_status_emac1.duplex,EMAC1_USED_INTF);


                emac_test_check_key_reg_val(TEST_EMAC1_ID, link_status_emac1.speed);
                emac_test_check_key_reg_val(TEST_EMAC2_ID, link_status_emac2.speed);

                //temp test
                emac_test_tx_check(TEST_EMAC1_ID,128,1000);
                // emac_test_rx_check(emacid);

                // TODO ---- !!!!!!
                // ...
                // ...
            }
            else 
            {
                //nothing
                printf("----------- phy linkdown! ---------\n");
            }
        }

        // check link status every 1s
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
    return  ESPSW_OK;
}



//EMAC3 connect EMAC4 test,  RGMII/ MII mode!!
// emac4 tx,emac3 rx
espsw_error_t emac_test_run2(unsigned long *arg_val)
{
    // initial link_status struct
    struct fal_port_link link_status_emac3 = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    struct fal_port_link link_status_emac4 = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    struct fal_tbx_pattern tbx_rx_pattern;
    bool link_staus_old = PORT_LINK_DOWN;
    uint32_t reg_val = 0;
    uint32_t tbx_num = 0xff;
    uint32_t time_cnt = 0;

    emac_test_emac_glb_init();
    emac_test_emac_phy_init(TEST_EMAC3_ID,EMAC3_USED_INTF);
    emac_test_emac_phy_init(TEST_EMAC4_ID,EMAC4_USED_INTF);

    printf("waiting to linkup... ... ...\n");

    while(1)
    {   
        emac_test_port_link_get(TEST_EMAC4_ID , &link_status_emac4);
        emac_test_port_link_get(TEST_EMAC3_ID , &link_status_emac3);

        // EMAC4 connect EMAC3, just monitor one linkstaus between them
        if(link_staus_old != link_status_emac4.link_up) //link_status.linkup change
        {
            // record new link_up status
            link_staus_old = link_status_emac4.link_up;

            if(link_status_emac4.link_up == PORT_LINK_UP)
            {
                printf("----------- emac4 phy linkup! ---------\n");
                printf("--------    speed=%ld            \n",(uint32_t)link_status_emac4.speed);
                printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status_emac4.duplex);
                printf("--------------------------------\n\n\n");

                printf("----------- emac3 phy linkup! ---------\n");
                printf("--------    speed=%ld            \n",(uint32_t)link_status_emac3.speed);
                printf("-------     duplex=%ld (0:half;1:full)\n",(uint32_t)link_status_emac3.duplex);
                printf("--------------------------------");

                emac_test_cfg_set_speed(TEST_EMAC4_ID, link_status_emac4.speed, link_status_emac4.duplex,EMAC4_USED_INTF);
                emac_test_cfg_set_speed(TEST_EMAC3_ID, link_status_emac3.speed, link_status_emac3.duplex,EMAC3_USED_INTF);


                emac_test_check_key_reg_val(TEST_EMAC4_ID, link_status_emac4.speed);
                emac_test_check_key_reg_val(TEST_EMAC3_ID, link_status_emac3.speed);



                #if 1
                //emac3 tx&rx; emac4 tx&rx
                emac_test_tbx_rx_check_prepare(TEST_EMAC3_ID,&tbx_rx_pattern);
                // emac_test_tbx_rx_check_prepare(TEST_EMAC4_ID,&tbx_rx_pattern);

                //temp test
                // emac_test_tx_check(TEST_EMAC3_ID,1024,0);
                emac_test_tx_check(TEST_EMAC4_ID,1024,0);

                vTaskDelay(pdMS_TO_TICKS(5*1000)); //send 5s then check cntp
                // emac_test_tbx_tx_ctrl(TEST_EMAC3_ID, TX_STOP);
                emac_test_tbx_tx_ctrl(TEST_EMAC4_ID, TX_STOP);
                vTaskDelay(pdMS_TO_TICKS(2*1000));
                printf("------------------------ emac4 -----------------------\n");
                emac_test_cntp_read_result(TEST_EMAC4_ID, &emac_cntp_num, tbx_cntp_num);
                printf("\n\n");
                printf("------------------------ emac3 -----------------------\n");
                emac_test_cntp_read_result(TEST_EMAC3_ID, &emac_cntp_num, tbx_cntp_num);


                #else
                //emac3 rx; emac4 tx
                emac_test_tbx_rx_check_prepare(TEST_EMAC3_ID,&tbx_rx_pattern);
                //temp test
                emac_test_tx_check(TEST_EMAC4_ID,1024,0);

                vTaskDelay(pdMS_TO_TICKS(10));
                uint8_t emac_tx_err_flag = emac_test_cntp_read_result(TEST_EMAC4_ID, &emac_cntp_num, tbx_cntp_num);
                uint8_t emac_rx_err_flag = emac_test_cntp_read_result(TEST_EMAC3_ID, &emac_cntp_num, tbx_cntp_num);

                while(1)
                {
                    vTaskDelay(pdMS_TO_TICKS(60*1000)); // Chcek once every 1min
                    // emac_test_tbx_tx_ctrl(TEST_EMAC4_ID, TX_STOP);
                    time_cnt++;
                    emac_tx_err_flag = emac_test_cntp_read_result(TEST_EMAC4_ID, &emac_cntp_num, tbx_cntp_num);
                    emac_rx_err_flag = emac_test_cntp_read_result(TEST_EMAC3_ID, &emac_cntp_num, tbx_cntp_num);

                    if(emac_tx_err_flag || emac_rx_err_flag)
                    {
                        printf("erro occur ,at time= %ld min!!! \n",time_cnt);
                        emac_test_tbx_tx_ctrl(TEST_EMAC4_ID, TX_STOP);
                        break;
                    }else{
                        printf("pass time has %ld min!!! \n",time_cnt);
                    }
                    // emac_test_tbx_tx_ctrl(TEST_EMAC4_ID, TX_START);
                }
                break;// means error occured!!
                #endif
            }
            else 
            {
                //nothing
                printf("----------- phy linkdown! ---------\n");
            }
        }

        // check link status every 1s
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
    return  ESPSW_OK;
}




espsw_error_t emac_test_run(unsigned long *arg_val)
{
    // initial link_status struct
    struct fal_port_link link_status = {PORT_LINK_DOWN, FAL_DUPLEX_BUTT, FAL_SPEED_BUTT};
    struct fal_tbx_pattern tbx_rx_pattern;

    bool link_staus_old = PORT_LINK_DOWN;
    uint32_t emacid = CUR_TEST_EMAC_ID , emac_used_intf = CUR_USED_INTF;
    uint32_t test_num = 0;
    uint32_t reg_val = 0;
    uint32_t tbx_num = 0xff;
    uint32_t reg_val1 = 0,reg_val2 = 0,reg_val3 = 0;
    uint32_t half_duplex_test_emac_id = TEST_EMAC2_ID;


    if((emacid == 4) || (emacid == 0))
    {
        tbx_num = 0;
    }else if((emacid == 3) || (emacid == 2))
    {
        tbx_num = 1;
    }
    else{
        // force stop run
        // assert(0);
        printf("current emac-ic has no tbx funciton !!! \n");
    }

    emac_test_emac_glb_init();
    emac_test_emac_phy_init(emacid,emac_used_intf);

    printf("waiting to linkup... ... ...\n");


#if FORCE_LINK
    emac_test_cfg_set_speed(emacid, FORCE_LINK_SPEED, FAL_FULL_DUPLEX,emac_used_intf);
    vTaskDelay(pdMS_TO_TICKS(100));
    emac_test_check_key_reg_val(emacid, FORCE_LINK_SPEED);

    #if PHY_LOOPBACK_EN // phy near end 1000M not work on force link for now

    emac_test_tbx_rx_check_prepare(emacid, &tbx_rx_pattern);
    vTaskDelay(pdMS_TO_TICKS(1000));

    for(uint32_t tx=0; tx<10;tx++)
    {
        emac_test_tx_check(emacid,1024,100);
        vTaskDelay(pdMS_TO_TICKS(100));
    }

    vTaskDelay(pdMS_TO_TICKS(3000));
    emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num);
    emac_test_reg_read_all(emacid);
    // emac_test_rx_check(emacid);

    while(1)
    {
        //stop here
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
    #else
    printf("########### emac_test_NEAR_end_loopback_case ##############\n");
    // for(int i = 0; i<20 ; i++)
    // {
    //     emac_test_near_end_loopback_case(emacid);   
    // }

    // while(1)
    for(int i = 0; i<10 ; i++)
    {
        emac_test_near_end_loopback_case(emacid);   
        vTaskDelay(pdMS_TO_TICKS(1000));
        test_num ++;

        if(((test_num)%3600) == 0)
        {
            printf("send times = %ld hour\n",test_num/3600);
            emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num); 
        }
        if(test_num > 36000)
        {
            printf("test done \n");
            break;
        }
    }
    // disable loopback mode
    fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_DISABLE);

    emac_test_reg_read_all(emacid);
    emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num);

    uhal_reg_get(TBX_INTERRUPT_RAW_REG + tbx_num * TBX_OFFSET, (uint8_t *)&reg_val);

    printf("address= %p, TBX_INTERRUPT_RAW_REG = 0x%lx\n",TBX_INTERRUPT_RAW_REG + tbx_num * TBX_OFFSET, reg_val);

    printf("test done \n");
    #endif // endif of PHY_LOOPBACK_EN
                
#else
    while(1)
    {
        emac_test_port_link_get(emacid , &link_status);

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

                emac_test_cfg_set_speed(emacid, link_status.speed, link_status.duplex,emac_used_intf);
                emac_test_check_key_reg_val(emacid, link_status.speed);

            #if 1
                // temp test
                // emac_test_check_clk_meter(emacid);

                // #if ((PHY_LOOPBACK_EN) & (~PHY_LOOP_BACK_MODE)) //phy near end loopback
                //     emac_test_tbx_rx_check_prepare(emacid, &tbx_rx_pattern);
                //     vTaskDelay(pdMS_TO_TICKS(1000));
                // #endif

                /* ----------------------tx check ---------------------*/
                for(uint32_t tx=0; tx<10;tx++)
                // while(1)
                {
                    emac_test_tx_check(emacid,1024,1000);
                    vTaskDelay(pdMS_TO_TICKS(1200));
                }
                    
                vTaskDelay(pdMS_TO_TICKS(1000));
                emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num);
                emac_test_reg_read_all(emacid);

                
                
                // while(1)
                // {
                //     //stop here
                //     vTaskDelay(pdMS_TO_TICKS(5000));
                // }

                //----------------------rx check ---------------------
                emac_test_rx_check(emacid);
            #endif


                #if 0
                printf("########### emac_test_NEAR_end_loopback_case ##############\n");

                for(int i = 0; i<5 ; i++)
                // while(1)
                {
                    emac_test_near_end_loopback_case(emacid);   
                    vTaskDelay(pdMS_TO_TICKS(1000));
                    test_num ++;

                    if(((test_num)%3600) == 0)
                    {
                        printf("send times = %ld hour\n",test_num/3600);
                        emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num); 
                    }
                    if(test_num > 36000)
                    {
                        printf("test done \n");
                        break;
                    }
                }
                // disable loopback mode
                fal_loopback_emac_set(emacid,FAL_EMAC_LPBK_DISABLE);

                emac_test_reg_read_all(emacid);
                emac_test_cntp_read_result(emacid, &emac_cntp_num, tbx_cntp_num); 
                // emac_test_check_clk_meter(emacid);
                #endif
                
                
                // printf("########### emac_test_rx_modify_back_to_tx_case ###########\n");
                // emac_test_rx_modify_back_to_tx_case(emacid);
                

                printf("########### emac_test_FAR_end_loopback_case  ##############\n");
                emac_test_far_end_loopback_case(emacid);

            }
            else 
            {
                //nothing
                printf("----------- phy linkdown! ---------\n");
            }
        }

        // check link status every 1s
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
    #endif 
    return  ESPSW_OK;
}
