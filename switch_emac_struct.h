/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_EMAC_STRUCT_H_
#define _SWITCH_SWITCH_EMAC_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

typedef volatile struct {
    uint32_t emac_date;
    union {
        struct {
            uint32_t reg_transmit_e                :    1;  /*Transmitter Enable When this bit is set*/
            uint32_t reg_receive_e                 :    1;  /*Receiver Enable When this bit is set*/
            uint32_t reg_speed                     :    2;  /*this bit indicates the current speed of link; 00 : 2.5MHZ; 01 : 25MHZ; 10 : 125MHZ/312.5MHZ*/
            uint32_t reg_duplex_mode               :    1;  /*When this bit set,  the MAC operates in the full-duplex mode.*/
            uint32_t reg_phy_mode_sel              :    3;  /*3'b000:GMII/MII; 3'b001: RGMII; 3'b010: SGMII; 3'b011: RMII; 3'b100~3'b111: resv*/
            uint32_t reg_link_up                   :    1;  /*This bit indicates whether the link is up or down during the transmission of configuration in the RGMII interface*/
            uint32_t reg_ipg                       :    4;  /*These bits control the minimum IPG between frames during transmission.; 0000 : 96 bit times; 0001 : 88 bit times; 0010 : 80 bit times; ???; 0111 : 40 bit times; 1000：32 bit times; 1001 : 24 bit times; 1010~1111 : resv ; In the half-duplex mode, the minimum IPG can be configured only for 64 bit times(IFG=100).Lower valuse are not considered*/
            uint32_t reg_tx_preamble_length        :    4;  /*tx preamble length  value. Value range 4'd7~4'd15.When writing value by software is less than 7, this field is 7*/
            uint32_t reg_auto_crcpad_strip         :    1;  /*rx auto strip  crc and pad*/
            uint32_t reg_tx_discrc                 :    1;  /*tx disable adding crc, need check crc*/
            uint32_t reg_tx_dispad                 :    1;  /*tx disable padding*/
            uint32_t reg_backoff_lmt               :    2;  /*The Back-OFF limit determines the random integer number (r) of slot time delays(4096 bit times for 1000Mbps and 512 bit times for 10/100Mbps) for which the MAC waits before rescheduling a transmission attempt during retries after a collision. This bit is applicable only in the half-duplex mode and reserved(RO) in the dull-duplex-only configuration.; 00 : k = min(n,h10); 01 : k = min(n,h8); 10 : k = min(n,h4); 11 : k = min(n,h1); Where n = retransmission attempt. The random integer r takes the value in the range 0 <= r < (2*k)*/
            uint32_t reg_disretry                  :    1;  /*When this bit is set,the MAC attempts only one transmission. When a collision occurs on the GMII or MII interface, the MAC ignores the current frame transmission. This bit is applicable only in the half-duplex mode.*/
            uint32_t reg_no_crs                    :    1;  /*Disable Carrier Sense during transmission.; When set high, this bit makes the MAC transmitter ignore the (G)MII CRS signal during frame transmission in the half-duplex mode.This request results in no errors generated because of Loss of Carrier or No Carrier during such transmission.*/
            uint32_t reg_no_retry_lmt              :    1;  /*When this bit set, backoff will occur until frame transmission is completed, the MAC will keep retransmitting until transmission succeed.*/
            uint32_t reg_outrange_err_dis          :    1;  /*0 : MAC will consider frame is err frame when length/type > 1500 and length/type < 1536 in current frame.; 1 : MAC will not care length/type > 1500 and length/type < 1536.*/
            uint32_t reg_tx_config                 :    1;  /*transmit config in rgmii*/
            uint32_t reg_near_lpbk                 :    1;  /* from  tx  phy interface to rx  loopback*/
            uint32_t reg_far_lpbk                  :    1;  /*from rx to tx loopback*/
            uint32_t reg_freq_meter_e              :    1;  /*0 : frequency meter disable; 1 : frequency meter enable*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } emac_cfg;
    union {
        struct {
            uint32_t reg_tx_flowctrl_e             :    1;  /*Transmit Flow Control Enable*/
            uint32_t reg_rx_flowctrl_e             :    1;  /*Receive Flow Control Enable When this bit is set*/
            uint32_t reg_flow_thresh               :    2;  /*Pause Low Threshold this field configures the threshold of the Pause timer at which the flow control signal is checked for automatic retransmission of the Pause frame. The threshold values should be always less than the Pause Time configured in Bits[31:16].2'b00: 16'h4. 2'b01 : 16'h40. 2'b10 : 16'h80. 2'b11: 16'h100. Unit : 512bit time*/
            uint32_t reg_dis_zqpf                  :    1;  /*Disable ZeroQuanta Pause When this bit is set, it disables the automatic generation of the ZeroQuanta Pause on the deassertion of flowcontrol signal from mti_flowctrl_i. when this bit is reset, normal operation with automatic ZeroQuanta Pause frame generation is enabled*/
            uint32_t reg_pause_forward             :    1;  /*0 :  this pause frame is discard by switch when emac receives pause frame from PHY; 1 :  this pause frame is not discard by switch when emac receives pause frame from PHY*/
            uint32_t reg_backpressure              :    1;  /*This bit activates the backpressure function in the half-duplex mode if the reg_tx_flowctrl_e bit is set.*/
            uint32_t reserved7                     :    9;
            uint32_t reg_pause_time                :    16;  /*Pause Time This field holds the value to be used in the Pause Time field in the transmit control frame.unit : 512bit time*/
        };
        uint32_t val;
    } emac_flow_ctrl;
    union {
        struct {
            uint32_t reg_addrhi                    :    16;  /*Contains the higher 16 bits of the first MAC address*/
            uint32_t reg_addr_e                    :    1;  /*this bit indicates whether emac can replace the mac address in the frame from switch*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } emac_address0_h;
    uint32_t emac_address0_l;
    union {
        struct {
            uint32_t reg_tx_maxpkt_to              :    14;  /*TX max packet value. When writing value by software is more than 9720, this field is 9720*/
            uint32_t reg_tx_maxpkt_dis             :    1;  /*TX max packet disable*/
            uint32_t reserved15                    :    1;
            uint32_t reg_rx_maxpkt_to              :    14;  /*RX max packet value. When writing value by software is more than 9720, this field is 9720.*/
            uint32_t reg_rx_maxpkt_dis             :    1;  /*RX max packet disable*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } emac_maxpkt;
    union {
        struct {
            uint32_t reg_tx_exssdef_lmt            :    14;  /*configures the max value of deferred time.Unit:8bits*/
            uint32_t reserved14                    :    2;
            uint32_t reg_tx_deferral_chk           :    1;  /*when this bit is set, the deferral check function is enabled in the MAC. When the transmit state machine is deferred for more than reg_tx_exssdef_lmt value, the MAC issues a tx_exssdef in cntp*/
            uint32_t reg_tx_exssdef_drop_en        :    1;  /*when this bit is set, mac will drop current frame when deferred timer more than reg_tx_exssdef_lmt value. When this bit is not set, the MAC will wait transmit current frame until the transfer is complete*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } emac_defer_cfg;
    union {
        struct {
            uint32_t reg_tpe_lpi_trans             :    1;  /*when set, this bit indicates that the MAC is transmitting the LPI pattern on the GMII or MII interface.*/
            uint32_t reg_rpe_lpi_rcvd              :    1;  /*when set, this bit indicates that the MAC is receiving the LPI pattern on the GMII or MII interface.*/
            uint32_t reserved2                     :    6;
            uint32_t reg_lpi_mode_ena_tx           :    1;  /*when set, this bit indicates the MAC transmitter to enter the LPI state. When reset, this bit indicates the MAC to exit the LPI state and resume normal transmission.*/
            uint32_t reg_phy_link_status           :    1;  /*this bit indicates the link status of the PHY. The MAC transmitter asserts the LPI pattern only when the link status is up(OKAY) at least for the time indicated by the reg_lpi_ls_timer.; When set, the link is considered to be okay(up) and when reset, the link is considered to be down.*/
            uint32_t reg_phyif_ls_en               :    1;  /*this bit enables the link status received on the RGMII receive paths to be used for activating the reg_lpi_ls_timer.; When set the MAC uses the reg_link_status bits of EMAC_RGMII_STATUS_REG(0x0024) and reg_phy_link_status for the reg_lpi_ls_timer trigger. When cleared, the MAC ignores the reg_link_status bits of EMAC_RGMII_STATUS_REG(0x0024) and takes only the reg_phy_link_status.*/
            uint32_t reg_lpi_mode_tx_automate      :    1;  /*this bit controls the behavior of the MAC when it is entering or coming out of the LPI mode on the transmit side. If the reg_lpi_mode_tx_automate and reg_lpi_mode_ena_tx bits are set to 1, the MAC enters the LPI mode only after all outstanding frames and pending frames have been transmitted. The MAC comes out of the LPI mode when the application sends any frame for transmission. ; When this bit is 0, the reg_lpi_mode_ena_tx bit directly controls behavior of the MAC when it is entering or coming out of the LPI mode.*/
            uint32_t reg_drop_frame_in_lpi         :    1;  /*when this bit is set, the MAC will drop frame from switch when MAC is in LPI state. When this bit is reset, the MAC will not drop frame from switch when MAC is in LPI state.*/
            uint32_t reserved13                    :    19;
        };
        uint32_t val;
    } emac_lpi_ctrl_and_status;
    union {
        struct {
            uint32_t reg_lpi_tw_timer              :    16;  /*this field specifies the minimum time (in microseconds) for which the MAC waits after it stops transmitting the LPI pattern to the PHY and before it resumes the normal transmission.*/
            uint32_t reg_lpi_ls_timer              :    10;  /*this field specifies the minimum time (in milliseconds) for which reg_phy_link_status should be up(OKAY) before the LPI pattern can be transmitted to the PHY. The MAC does not transmit the LPI pattern even when the reg_lpi_mode_ena_tx bit is set unless the reg_lpi_ls_timer reaches the programmed terminal count. The default value of reg_lpi_ls_timer is 1000 (1 sec) as defined in the IEEE standard.*/
            uint32_t reserved26                    :    6;
        };
        uint32_t val;
    } emac_lpi_timers;
    uint32_t reserved_24;
    uint32_t reserved_28;
    uint32_t reserved_2c;
    uint32_t reserved_30;
    uint32_t reserved_34;
    uint32_t reserved_38;
    uint32_t reserved_3c;
    union {
        struct {
            uint32_t reg_link_mode                 :    1;  /*this bit indicates the current mode of operation of link; 1'b0 : Half-duplex mode; 1'b1 : Full-duplex mode*/
            uint32_t reg_link_speed                :    2;  /*this bit indicates the current speed of link; 00 : 2.5MHZ; 01 : 25MHZ; 10 : 125MHZ*/
            uint32_t reg_link_status               :    1;  /*This bit indicates whether the link between the local PHY and the remote PHY is up or down.; 0 : down; 1 : up*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } emac_rgmii_sgmii_status;
    union {
        struct {
            uint32_t reg_rpe_sts                   :    3;  /*when high, this bit indicates that the MAC RPE is actively receiving data and not in IDLE state.*/
            uint32_t reg_tpe_sts                   :    3;  /*when high, this bit indicates that the MAC TPE is actively transmitting data and is not in the IDLE state.*/
            uint32_t reg_tfc_sts                   :    3;  /*this field indicates the state of the MAC TFC module :; 2'b00 : IDLE state; 2'b01 : Waiting for status of previous frame or IPG or backoff period to be over; 2'b10 : Generating and transmitting a Pause frame(in the full-duplex mode); 2'b11 : Transferring input frame for transmission*/
            uint32_t reg_tx_paused                 :    1;  /*when high,this bit indicates that the MAC transmitter is in the Pause condition(in the full-duplex-only mode) and hence does not schedule any frame for transmission*/
            uint32_t reg_tx_rst_st                 :    1;  /*when high, this bit indicates that the MAC transmitter is in the reset state(tx_rst_n low or transmit_en low).*/
            uint32_t reg_rx_rst_st                 :    1;  /*when high, this bit indicates that the MAC receiver is in the reset state(rx_rst_n low ).*/
            uint32_t reserved12                    :    20;
        };
        uint32_t val;
    } emac_debug_status;
    union {
        struct {
            uint32_t reg_phy_txd                   :    8;  /*reserved*/
            uint32_t reg_phy_txer                  :    1;  /*reserved*/
            uint32_t reg_phy_txen                  :    1;  /*reserved*/
            uint32_t reserved10                    :    6;
            uint32_t reg_phy_rxd                   :    8;  /*reserved*/
            uint32_t reg_phy_rxer                  :    1;  /*reserved*/
            uint32_t reg_phy_rxdv                  :    1;  /*reserved*/
            uint32_t reg_phy_col                   :    1;  /*reserved*/
            uint32_t reg_phy_crs                   :    1;  /*reserved*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } emac_phy_intf_status;
    uint32_t reserved_4c;
    union {
        struct {
            uint32_t reg_meter_cnt_clr             :    1;  /*this bit indicates whether clear reg_rx_meter_cnt or reg_tx_meter_cnt*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } emac_freq_meter_cnt_clr;
    union {
        struct {
            uint32_t reg_rx_meter_cnt              :    24;  /*rx clock counter per 1ms,range 0~(1ms-1clk)*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } emac_rx_meter_cnt;
    union {
        struct {
            uint32_t reg_tx_meter_cnt              :    24;  /*tx clock counter per 1ms,range 0~(1ms-1clk)*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } emac_tx_meter_cnt;
    uint32_t reserved_5c;
    union {
        struct {
            uint32_t reg_tx_fifo_full_int          :    1;  /*MAC interrupt. Tx afifo full.*/
            uint32_t reg_tx_fifo_empty_int         :    1;  /*MAC interrupt. Tx afifo empty.*/
            uint32_t reg_tx_fifo_underflow_int     :    1;  /*MAC interrupt. Tx afifo underflow.*/
            uint32_t reg_rx_fifo_full_int          :    1;  /*MAC interrupt. Rx afifo full.*/
            uint32_t reg_rx_fifo_empty_int         :    1;  /*MAC interrupt. Rx afifo empty.*/
            uint32_t reg_rx_fifo_overflow_int      :    1;  /*MAC interrupt. Rx afifo overflow.*/
            uint32_t reserved6                     :    1;
            uint32_t reg_link_status_change_int    :    1;  /*MAC interrupt. Gmii link status change*/
            uint32_t reg_cntp_len_overflow_int     :    1;  /*MAC interrupt. cntp len group overflow*/
            uint32_t reg_err_cntp_num_overflow_int :    1;  /*MAC interrupt. ERR cntp num group overflow*/
            uint32_t reg_tx_cntp_num_overflow_int  :    1;  /*MAC interrupt. TX cntp num group overflow*/
            uint32_t reg_rx_cntp_num_overflow_int  :    1;  /*MAC interrupt. RX cntp num group overflow*/
            uint32_t reserved12                    :    4;
            uint32_t reg_tpe_lpi_enter_int         :    1;  /*MAC interrupt. MAC TX enter LPI state*/
            uint32_t reg_tpe_lpi_exit_int          :    1;  /*MAC interrupt. MAC TX exit LPI state*/
            uint32_t reg_rpe_lpi_enter_int         :    1;  /*MAC interrupt. MAC RX enter LPI state*/
            uint32_t reg_rpe_lpi_exit_int          :    1;  /*MAC interrupt. MAC RX exit LPI state*/
            uint32_t reserved20                    :    12;
        };
        uint32_t val;
    } emac_interrupt;
    union {
        struct {
            uint32_t reg_tx_fifo_full_int_test     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tx_fifo_empty_int_test    :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tx_fifo_underflow_int_test:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_fifo_full_int_test     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_fifo_empty_int_test    :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_fifo_overflow_int_test :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reserved6                     :    1;
            uint32_t reg_link_status_change_int_test:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_cntp_len_overflow_int_test:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_err_cntp_num_overflow_int_test:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tx_cntp_num_overflow_int_test:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_cntp_num_overflow_int_test:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reserved12                    :    4;
            uint32_t reg_tpe_lpi_enter_int_test    :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tpe_lpi_exit_int_test     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rpe_lpi_enter_int_test    :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rpe_lpi_exit_int_test     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reserved20                    :    12;
        };
        uint32_t val;
    } emac_interrupt_test;
    union {
        struct {
            uint32_t reg_tx_fifo_full_int_raw      :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tx_fifo_empty_int_raw     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tx_fifo_underflow_int_raw :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_fifo_full_int_raw      :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_fifo_empty_int_raw     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_fifo_overflow_int_raw  :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reserved6                     :    1;
            uint32_t reg_link_status_change_int_raw:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_cntp_len_overflow_int_raw :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_err_cntp_num_overflow_int_raw:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tx_cntp_num_overflow_int_raw:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_cntp_num_overflow_int_raw:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reserved12                    :    4;
            uint32_t reg_tpe_lpi_enter_int_raw     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tpe_lpi_exit_int_raw      :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rpe_lpi_enter_int_raw     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rpe_lpi_exit_int_raw      :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reserved20                    :    12;
        };
        uint32_t val;
    } emac_interrupt_raw;
    union {
        struct {
            uint32_t reg_tx_fifo_full_int_st       :    1;  /*st = ena && raw*/
            uint32_t reg_tx_fifo_empty_int_st      :    1;  /*st = ena && raw*/
            uint32_t reg_tx_fifo_underflow_int_st  :    1;  /*st = ena && raw*/
            uint32_t reg_rx_fifo_full_int_st       :    1;  /*st = ena && raw*/
            uint32_t reg_rx_fifo_empty_int_st      :    1;  /*st = ena && raw*/
            uint32_t reg_rx_fifo_overflow_int_st   :    1;  /*st = ena && raw*/
            uint32_t reserved6                     :    1;
            uint32_t reg_link_status_change_int_st :    1;  /*st = ena && raw*/
            uint32_t reg_cntp_len_overflow_int_st  :    1;  /*st = ena && raw*/
            uint32_t reg_err_cntp_num_overflow_int_st:    1;  /*st = ena && raw*/
            uint32_t reg_tx_cntp_num_overflow_int_st:    1;  /*st = ena && raw*/
            uint32_t reg_rx_cntp_num_overflow_int_st:    1;  /*st = ena && raw*/
            uint32_t reserved12                    :    4;
            uint32_t reg_tpe_lpi_enter_int_st      :    1;  /*st = ena && raw*/
            uint32_t reg_tpe_lpi_exit_int_st       :    1;  /*st = ena && raw*/
            uint32_t reg_rpe_lpi_enter_int_st      :    1;  /*st = ena && raw*/
            uint32_t reg_rpe_lpi_exit_int_st       :    1;  /*st = ena && raw*/
            uint32_t reserved20                    :    12;
        };
        uint32_t val;
    } emac_interrupt_st;
    union {
        struct {
            uint32_t reg_tx_fifo_full_int_ena      :    1;  /*st = ena && raw*/
            uint32_t reg_tx_fifo_empty_int_ena     :    1;  /*st = ena && raw*/
            uint32_t reg_tx_fifo_underflow_int_ena :    1;  /*st = ena && raw*/
            uint32_t reg_rx_fifo_full_int_ena      :    1;  /*st = ena && raw*/
            uint32_t reg_rx_fifo_empty_int_ena     :    1;  /*st = ena && raw*/
            uint32_t reg_rx_fifo_overflow_int_ena  :    1;  /*st = ena && raw*/
            uint32_t reserved6                     :    1;
            uint32_t reg_link_status_change_int_ena:    1;  /*st = ena && raw*/
            uint32_t reg_cntp_len_overflow_int_ena :    1;  /*st = ena && raw*/
            uint32_t reg_err_cntp_num_overflow_int_ena:    1;  /*st = ena && raw*/
            uint32_t reg_tx_cntp_num_overflow_int_ena:    1;  /*st = ena && raw*/
            uint32_t reg_rx_cntp_num_overflow_int_ena:    1;  /*st = ena && raw*/
            uint32_t reserved12                    :    4;
            uint32_t reg_tpe_lpi_enter_int_ena     :    1;  /*st = ena && raw*/
            uint32_t reg_tpe_lpi_exit_int_ena      :    1;  /*st = ena && raw*/
            uint32_t reg_rpe_lpi_enter_int_ena     :    1;  /*st = ena && raw*/
            uint32_t reg_rpe_lpi_exit_int_ena      :    1;  /*st = ena && raw*/
            uint32_t reserved20                    :    12;
        };
        uint32_t val;
    } emac_interrupt_ena;
    union {
        struct {
            uint32_t reg_tx_fifo_full_int_clr      :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tx_fifo_empty_int_clr     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tx_fifo_underflow_int_clr :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_fifo_full_int_clr      :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_fifo_empty_int_clr     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_fifo_overflow_int_clr  :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reserved6                     :    1;
            uint32_t reg_link_status_change_int_clr:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_cntp_len_overflow_int_clr :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_err_cntp_num_overflow_int_clr:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tx_cntp_num_overflow_int_clr:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rx_cntp_num_overflow_int_clr:    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reserved12                    :    4;
            uint32_t reg_tpe_lpi_enter_int_clr     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_tpe_lpi_exit_int_clr      :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rpe_lpi_enter_int_clr     :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reg_rpe_lpi_exit_int_clr      :    1;  /*if(int || test), raw <= 1.; else if(clr), raw <= 0*/
            uint32_t reserved20                    :    12;
        };
        uint32_t val;
    } emac_interrupt_clr;
    uint32_t reserved_78;
    uint32_t reserved_7c;
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } emac_clk_en;
} switch_emac_dev_t;
extern switch_emac_dev_t SWITCH_EMAC;
#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_EMAC_STRUCT_H_ */
