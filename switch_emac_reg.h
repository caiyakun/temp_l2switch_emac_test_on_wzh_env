/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_EMAC_REG_H_
#define _SWITCH_SWITCH_EMAC_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

#define SWITCH_EMAC_EMAC_DATE_REG          (DR_REG_SWITCH_EMAC_BASE + 0x0)
/* SWITCH_EMAC_EMAC_DATE : R/W ;bitpos:[31:0] ;default: 32'h20240412 ; */
/*description: register version..*/
#define SWITCH_EMAC_EMAC_DATE    0xFFFFFFFF
#define SWITCH_EMAC_EMAC_DATE_M  ((SWITCH_EMAC_EMAC_DATE_V)<<(SWITCH_EMAC_EMAC_DATE_S))
#define SWITCH_EMAC_EMAC_DATE_V  0xFFFFFFFF
#define SWITCH_EMAC_EMAC_DATE_S  0

#define SWITCH_EMAC_EMAC_CFG_REG          (DR_REG_SWITCH_EMAC_BASE + 0x4)
/* SWITCH_EMAC_EMAC_FREQ_METER_E : R/W ;bitpos:[29] ;default: 1'h0 ; */
/*description: 0 : frequency meter disable; 1 : frequency meter enable.*/
#define SWITCH_EMAC_EMAC_FREQ_METER_E    (BIT(29))
#define SWITCH_EMAC_EMAC_FREQ_METER_E_M  (BIT(29))
#define SWITCH_EMAC_EMAC_FREQ_METER_E_V  0x1
#define SWITCH_EMAC_EMAC_FREQ_METER_E_S  29
/* SWITCH_EMAC_EMAC_FAR_LPBK : R/W ;bitpos:[28] ;default: 1'h0 ; */
/*description: from rx to tx loopback.*/
#define SWITCH_EMAC_EMAC_FAR_LPBK    (BIT(28))
#define SWITCH_EMAC_EMAC_FAR_LPBK_M  (BIT(28))
#define SWITCH_EMAC_EMAC_FAR_LPBK_V  0x1
#define SWITCH_EMAC_EMAC_FAR_LPBK_S  28
/* SWITCH_EMAC_EMAC_NEAR_LPBK : R/W ;bitpos:[27] ;default: 1'h0 ; */
/*description:  from  tx  phy interface to rx  loopback.*/
#define SWITCH_EMAC_EMAC_NEAR_LPBK    (BIT(27))
#define SWITCH_EMAC_EMAC_NEAR_LPBK_M  (BIT(27))
#define SWITCH_EMAC_EMAC_NEAR_LPBK_V  0x1
#define SWITCH_EMAC_EMAC_NEAR_LPBK_S  27
/* SWITCH_EMAC_EMAC_TX_CONFIG : R/W ;bitpos:[26] ;default: 1'h0 ; */
/*description: transmit config in rgmii.*/
#define SWITCH_EMAC_EMAC_TX_CONFIG    (BIT(26))
#define SWITCH_EMAC_EMAC_TX_CONFIG_M  (BIT(26))
#define SWITCH_EMAC_EMAC_TX_CONFIG_V  0x1
#define SWITCH_EMAC_EMAC_TX_CONFIG_S  26
/* SWITCH_EMAC_EMAC_OUTRANGE_ERR_DIS : R/W ;bitpos:[25] ;default: 1'h0 ; */
/*description: 0 : MAC will consider frame is err frame when length/type > 1500 and length/type
 < 1536 in current frame.; 1 : MAC will not care length/type > 1500 and length/t
ype < 1536..*/
#define SWITCH_EMAC_EMAC_OUTRANGE_ERR_DIS    (BIT(25))
#define SWITCH_EMAC_EMAC_OUTRANGE_ERR_DIS_M  (BIT(25))
#define SWITCH_EMAC_EMAC_OUTRANGE_ERR_DIS_V  0x1
#define SWITCH_EMAC_EMAC_OUTRANGE_ERR_DIS_S  25
/* SWITCH_EMAC_EMAC_NO_RETRY_LMT : R/W ;bitpos:[24] ;default: 1'h0 ; */
/*description: When this bit set, backoff will occur until frame transmission is completed, the
 MAC will keep retransmitting until transmission succeed..*/
#define SWITCH_EMAC_EMAC_NO_RETRY_LMT    (BIT(24))
#define SWITCH_EMAC_EMAC_NO_RETRY_LMT_M  (BIT(24))
#define SWITCH_EMAC_EMAC_NO_RETRY_LMT_V  0x1
#define SWITCH_EMAC_EMAC_NO_RETRY_LMT_S  24
/* SWITCH_EMAC_EMAC_NO_CRS : R/W ;bitpos:[23] ;default: 1'h0 ; */
/*description: Disable Carrier Sense during transmission.; When set high, this bit makes the MA
C transmitter ignore the (G)MII CRS signal during frame transmission in the half
-duplex mode.This request results in no errors generated because of Loss of Carr
ier or No Carrier during such transmission..*/
#define SWITCH_EMAC_EMAC_NO_CRS    (BIT(23))
#define SWITCH_EMAC_EMAC_NO_CRS_M  (BIT(23))
#define SWITCH_EMAC_EMAC_NO_CRS_V  0x1
#define SWITCH_EMAC_EMAC_NO_CRS_S  23
/* SWITCH_EMAC_EMAC_DISRETRY : R/W ;bitpos:[22] ;default: 1'h0 ; */
/*description: When this bit is set,the MAC attempts only one transmission. When a collision oc
curs on the GMII or MII interface, the MAC ignores the current frame transmissio
n. This bit is applicable only in the half-duplex mode..*/
#define SWITCH_EMAC_EMAC_DISRETRY    (BIT(22))
#define SWITCH_EMAC_EMAC_DISRETRY_M  (BIT(22))
#define SWITCH_EMAC_EMAC_DISRETRY_V  0x1
#define SWITCH_EMAC_EMAC_DISRETRY_S  22
/* SWITCH_EMAC_EMAC_BACKOFF_LMT : R/W ;bitpos:[21:20] ;default: 2'h0 ; */
/*description: The Back-OFF limit determines the random integer number (r) of slot time delays(
4096 bit times for 1000Mbps and 512 bit times for 10/100Mbps) for which the MAC
waits before rescheduling a transmission attempt during retries after a collisio
n. This bit is applicable only in the half-duplex mode and reserved(RO) in the d
ull-duplex-only configuration.; 00 : k = min(n,h10); 01 : k = min(n,h8); 10 : k
= min(n,h4); 11 : k = min(n,h1); Where n = retransmission attempt. The random in
teger r takes the value in the range 0 <= r < (2*k).*/
#define SWITCH_EMAC_EMAC_BACKOFF_LMT    0x00000003
#define SWITCH_EMAC_EMAC_BACKOFF_LMT_M  ((SWITCH_EMAC_EMAC_BACKOFF_LMT_V)<<(SWITCH_EMAC_EMAC_BACKOFF_LMT_S))
#define SWITCH_EMAC_EMAC_BACKOFF_LMT_V  0x3
#define SWITCH_EMAC_EMAC_BACKOFF_LMT_S  20
/* SWITCH_EMAC_EMAC_TX_DISPAD : R/W ;bitpos:[19] ;default: 1'h0 ; */
/*description: tx disable padding.*/
#define SWITCH_EMAC_EMAC_TX_DISPAD    (BIT(19))
#define SWITCH_EMAC_EMAC_TX_DISPAD_M  (BIT(19))
#define SWITCH_EMAC_EMAC_TX_DISPAD_V  0x1
#define SWITCH_EMAC_EMAC_TX_DISPAD_S  19
/* SWITCH_EMAC_EMAC_TX_DISCRC : R/W ;bitpos:[18] ;default: 1'h0 ; */
/*description: tx disable adding crc, need check crc.*/
#define SWITCH_EMAC_EMAC_TX_DISCRC    (BIT(18))
#define SWITCH_EMAC_EMAC_TX_DISCRC_M  (BIT(18))
#define SWITCH_EMAC_EMAC_TX_DISCRC_V  0x1
#define SWITCH_EMAC_EMAC_TX_DISCRC_S  18
/* SWITCH_EMAC_EMAC_AUTO_CRCPAD_STRIP : R/W ;bitpos:[17] ;default: 1'h1 ; */
/*description: rx auto strip  crc and pad.*/
#define SWITCH_EMAC_EMAC_AUTO_CRCPAD_STRIP    (BIT(17))
#define SWITCH_EMAC_EMAC_AUTO_CRCPAD_STRIP_M  (BIT(17))
#define SWITCH_EMAC_EMAC_AUTO_CRCPAD_STRIP_V  0x1
#define SWITCH_EMAC_EMAC_AUTO_CRCPAD_STRIP_S  17
/* SWITCH_EMAC_EMAC_TX_PREAMBLE_LENGTH : R/W ;bitpos:[16:13] ;default: 4'h7 ; */
/*description: tx preamble length  value. Value range 4'd7~4'd15.When writing value by software
 is less than 7, this field is 7.*/
#define SWITCH_EMAC_EMAC_TX_PREAMBLE_LENGTH    0x0000000F
#define SWITCH_EMAC_EMAC_TX_PREAMBLE_LENGTH_M  ((SWITCH_EMAC_EMAC_TX_PREAMBLE_LENGTH_V)<<(SWITCH_EMAC_EMAC_TX_PREAMBLE_LENGTH_S))
#define SWITCH_EMAC_EMAC_TX_PREAMBLE_LENGTH_V  0xF
#define SWITCH_EMAC_EMAC_TX_PREAMBLE_LENGTH_S  13
/* SWITCH_EMAC_EMAC_IPG : R/W ;bitpos:[12:9] ;default: 4'h0 ; */
/*description: These bits control the minimum IPG between frames during transmission.; 0000 : 9
6 bit times; 0001 : 88 bit times; 0010 : 80 bit times; ???; 0111 : 40 bit times;
 1000：32 bit times; 1001 : 24 bit times; 1010~1111 : resv ; In the half-duplex m
ode, the minimum IPG can be configured only for 64 bit times(IFG=100).Lower valu
se are not considered.*/
#define SWITCH_EMAC_EMAC_IPG    0x0000000F
#define SWITCH_EMAC_EMAC_IPG_M  ((SWITCH_EMAC_EMAC_IPG_V)<<(SWITCH_EMAC_EMAC_IPG_S))
#define SWITCH_EMAC_EMAC_IPG_V  0xF
#define SWITCH_EMAC_EMAC_IPG_S  9
/* SWITCH_EMAC_EMAC_LINK_UP : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: This bit indicates whether the link is up or down during the transmission of con
figuration in the RGMII interface.*/
#define SWITCH_EMAC_EMAC_LINK_UP    (BIT(8))
#define SWITCH_EMAC_EMAC_LINK_UP_M  (BIT(8))
#define SWITCH_EMAC_EMAC_LINK_UP_V  0x1
#define SWITCH_EMAC_EMAC_LINK_UP_S  8
/* SWITCH_EMAC_EMAC_PHY_MODE_SEL : R/W ;bitpos:[7:5] ;default: 3'h0 ; */
/*description: 3'b000:GMII/MII; 3'b001: RGMII; 3'b010: SGMII; 3'b011: RMII; 3'b100~3'b111: resv.*/
#define SWITCH_EMAC_EMAC_PHY_MODE_SEL    0x00000007
#define SWITCH_EMAC_EMAC_PHY_MODE_SEL_M  ((SWITCH_EMAC_EMAC_PHY_MODE_SEL_V)<<(SWITCH_EMAC_EMAC_PHY_MODE_SEL_S))
#define SWITCH_EMAC_EMAC_PHY_MODE_SEL_V  0x7
#define SWITCH_EMAC_EMAC_PHY_MODE_SEL_S  5
/* SWITCH_EMAC_EMAC_DUPLEX_MODE : R/W ;bitpos:[4] ;default: 1'h1 ; */
/*description: When this bit set,  the MAC operates in the full-duplex mode..*/
#define SWITCH_EMAC_EMAC_DUPLEX_MODE    (BIT(4))
#define SWITCH_EMAC_EMAC_DUPLEX_MODE_M  (BIT(4))
#define SWITCH_EMAC_EMAC_DUPLEX_MODE_V  0x1
#define SWITCH_EMAC_EMAC_DUPLEX_MODE_S  4
/* SWITCH_EMAC_EMAC_SPEED : R/W ;bitpos:[3:2] ;default: 2'h2 ; */
/*description: this bit indicates the current speed of link; 00 : 2.5MHZ; 01 : 25MHZ; 10 : 125M
HZ/312.5MHZ.*/
#define SWITCH_EMAC_EMAC_SPEED    0x00000003
#define SWITCH_EMAC_EMAC_SPEED_M  ((SWITCH_EMAC_EMAC_SPEED_V)<<(SWITCH_EMAC_EMAC_SPEED_S))
#define SWITCH_EMAC_EMAC_SPEED_V  0x3
#define SWITCH_EMAC_EMAC_SPEED_S  2
/* SWITCH_EMAC_EMAC_RECEIVE_E : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Receiver Enable When this bit is set.*/
#define SWITCH_EMAC_EMAC_RECEIVE_E    (BIT(1))
#define SWITCH_EMAC_EMAC_RECEIVE_E_M  (BIT(1))
#define SWITCH_EMAC_EMAC_RECEIVE_E_V  0x1
#define SWITCH_EMAC_EMAC_RECEIVE_E_S  1
/* SWITCH_EMAC_EMAC_TRANSMIT_E : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Transmitter Enable When this bit is set.*/
#define SWITCH_EMAC_EMAC_TRANSMIT_E    (BIT(0))
#define SWITCH_EMAC_EMAC_TRANSMIT_E_M  (BIT(0))
#define SWITCH_EMAC_EMAC_TRANSMIT_E_V  0x1
#define SWITCH_EMAC_EMAC_TRANSMIT_E_S  0

#define SWITCH_EMAC_EMAC_FLOW_CTRL_REG          (DR_REG_SWITCH_EMAC_BASE + 0x8)
/* SWITCH_EMAC_EMAC_PAUSE_TIME : R/W ;bitpos:[31:16] ;default: 16'h0200 ; */
/*description: Pause Time This field holds the value to be used in the Pause Time field in the
transmit control frame.unit : 512bit time.*/
#define SWITCH_EMAC_EMAC_PAUSE_TIME    0x0000FFFF
#define SWITCH_EMAC_EMAC_PAUSE_TIME_M  ((SWITCH_EMAC_EMAC_PAUSE_TIME_V)<<(SWITCH_EMAC_EMAC_PAUSE_TIME_S))
#define SWITCH_EMAC_EMAC_PAUSE_TIME_V  0xFFFF
#define SWITCH_EMAC_EMAC_PAUSE_TIME_S  16
/* SWITCH_EMAC_EMAC_BACKPRESSURE : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: This bit activates the backpressure function in the half-duplex mode if the reg_
tx_flowctrl_e bit is set..*/
#define SWITCH_EMAC_EMAC_BACKPRESSURE    (BIT(6))
#define SWITCH_EMAC_EMAC_BACKPRESSURE_M  (BIT(6))
#define SWITCH_EMAC_EMAC_BACKPRESSURE_V  0x1
#define SWITCH_EMAC_EMAC_BACKPRESSURE_S  6
/* SWITCH_EMAC_EMAC_PAUSE_FORWARD : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: 0 :  this pause frame is discard by switch when emac receives pause frame from P
HY; 1 :  this pause frame is not discard by switch when emac receives pause fram
e from PHY.*/
#define SWITCH_EMAC_EMAC_PAUSE_FORWARD    (BIT(5))
#define SWITCH_EMAC_EMAC_PAUSE_FORWARD_M  (BIT(5))
#define SWITCH_EMAC_EMAC_PAUSE_FORWARD_V  0x1
#define SWITCH_EMAC_EMAC_PAUSE_FORWARD_S  5
/* SWITCH_EMAC_EMAC_DIS_ZQPF : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Disable ZeroQuanta Pause When this bit is set, it disables the automatic generat
ion of the ZeroQuanta Pause on the deassertion of flowcontrol signal from mti_fl
owctrl_i. when this bit is reset, normal operation with automatic ZeroQuanta Pau
se frame generation is enabled.*/
#define SWITCH_EMAC_EMAC_DIS_ZQPF    (BIT(4))
#define SWITCH_EMAC_EMAC_DIS_ZQPF_M  (BIT(4))
#define SWITCH_EMAC_EMAC_DIS_ZQPF_V  0x1
#define SWITCH_EMAC_EMAC_DIS_ZQPF_S  4
/* SWITCH_EMAC_EMAC_FLOW_THRESH : R/W ;bitpos:[3:2] ;default: 2'h0 ; */
/*description: Pause Low Threshold this field configures the threshold of the Pause timer at wh
ich the flow control signal is checked for automatic retransmission of the Pause
 frame. The threshold values should be always less than the Pause Time configure
d in Bits[31:16].2'b00: 16'h4. 2'b01 : 16'h40. 2'b10 : 16'h80. 2'b11: 16'h100. U
nit : 512bit time.*/
#define SWITCH_EMAC_EMAC_FLOW_THRESH    0x00000003
#define SWITCH_EMAC_EMAC_FLOW_THRESH_M  ((SWITCH_EMAC_EMAC_FLOW_THRESH_V)<<(SWITCH_EMAC_EMAC_FLOW_THRESH_S))
#define SWITCH_EMAC_EMAC_FLOW_THRESH_V  0x3
#define SWITCH_EMAC_EMAC_FLOW_THRESH_S  2
/* SWITCH_EMAC_EMAC_RX_FLOWCTRL_E : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Receive Flow Control Enable When this bit is set.*/
#define SWITCH_EMAC_EMAC_RX_FLOWCTRL_E    (BIT(1))
#define SWITCH_EMAC_EMAC_RX_FLOWCTRL_E_M  (BIT(1))
#define SWITCH_EMAC_EMAC_RX_FLOWCTRL_E_V  0x1
#define SWITCH_EMAC_EMAC_RX_FLOWCTRL_E_S  1
/* SWITCH_EMAC_EMAC_TX_FLOWCTRL_E : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Transmit Flow Control Enable.*/
#define SWITCH_EMAC_EMAC_TX_FLOWCTRL_E    (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FLOWCTRL_E_M  (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FLOWCTRL_E_V  0x1
#define SWITCH_EMAC_EMAC_TX_FLOWCTRL_E_S  0

#define SWITCH_EMAC_EMAC_ADDRESS0_H_REG          (DR_REG_SWITCH_EMAC_BASE + 0xC)
/* SWITCH_EMAC_EMAC_ADDR_E : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: this bit indicates whether emac can replace the mac address in the frame from sw
itch.*/
#define SWITCH_EMAC_EMAC_ADDR_E    (BIT(16))
#define SWITCH_EMAC_EMAC_ADDR_E_M  (BIT(16))
#define SWITCH_EMAC_EMAC_ADDR_E_V  0x1
#define SWITCH_EMAC_EMAC_ADDR_E_S  16
/* SWITCH_EMAC_EMAC_ADDRHI : R/W ;bitpos:[15:0] ;default: 16'h0010 ; */
/*description: Contains the higher 16 bits of the first MAC address.*/
#define SWITCH_EMAC_EMAC_ADDRHI    0x0000FFFF
#define SWITCH_EMAC_EMAC_ADDRHI_M  ((SWITCH_EMAC_EMAC_ADDRHI_V)<<(SWITCH_EMAC_EMAC_ADDRHI_S))
#define SWITCH_EMAC_EMAC_ADDRHI_V  0xFFFF
#define SWITCH_EMAC_EMAC_ADDRHI_S  0

#define SWITCH_EMAC_EMAC_ADDRESS0_L_REG          (DR_REG_SWITCH_EMAC_BASE + 0x10)
/* SWITCH_EMAC_EMAC_ADDRLO : R/W ;bitpos:[31:0] ;default: 32'ha1ffffff ; */
/*description: Contains the lower 32 bits of the first MAC address.*/
#define SWITCH_EMAC_EMAC_ADDRLO    0xFFFFFFFF
#define SWITCH_EMAC_EMAC_ADDRLO_M  ((SWITCH_EMAC_EMAC_ADDRLO_V)<<(SWITCH_EMAC_EMAC_ADDRLO_S))
#define SWITCH_EMAC_EMAC_ADDRLO_V  0xFFFFFFFF
#define SWITCH_EMAC_EMAC_ADDRLO_S  0

#define SWITCH_EMAC_EMAC_MAXPKT_REG          (DR_REG_SWITCH_EMAC_BASE + 0x14)
/* SWITCH_EMAC_EMAC_RX_MAXPKT_DIS : R/W ;bitpos:[30] ;default: 1'h0 ; */
/*description: RX max packet disable.*/
#define SWITCH_EMAC_EMAC_RX_MAXPKT_DIS    (BIT(30))
#define SWITCH_EMAC_EMAC_RX_MAXPKT_DIS_M  (BIT(30))
#define SWITCH_EMAC_EMAC_RX_MAXPKT_DIS_V  0x1
#define SWITCH_EMAC_EMAC_RX_MAXPKT_DIS_S  30
/* SWITCH_EMAC_EMAC_RX_MAXPKT_TO : R/W/SS ;bitpos:[29:16] ;default: 14'd1536 ; */
/*description: RX max packet value. When writing value by software is more than 9720, this fiel
d is 9720..*/
#define SWITCH_EMAC_EMAC_RX_MAXPKT_TO    0x00003FFF
#define SWITCH_EMAC_EMAC_RX_MAXPKT_TO_M  ((SWITCH_EMAC_EMAC_RX_MAXPKT_TO_V)<<(SWITCH_EMAC_EMAC_RX_MAXPKT_TO_S))
#define SWITCH_EMAC_EMAC_RX_MAXPKT_TO_V  0x3FFF
#define SWITCH_EMAC_EMAC_RX_MAXPKT_TO_S  16
/* SWITCH_EMAC_EMAC_TX_MAXPKT_DIS : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: TX max packet disable.*/
#define SWITCH_EMAC_EMAC_TX_MAXPKT_DIS    (BIT(14))
#define SWITCH_EMAC_EMAC_TX_MAXPKT_DIS_M  (BIT(14))
#define SWITCH_EMAC_EMAC_TX_MAXPKT_DIS_V  0x1
#define SWITCH_EMAC_EMAC_TX_MAXPKT_DIS_S  14
/* SWITCH_EMAC_EMAC_TX_MAXPKT_TO : R/W/SS ;bitpos:[13:0] ;default: 14'd1536 ; */
/*description: TX max packet value. When writing value by software is more than 9720, this fiel
d is 9720.*/
#define SWITCH_EMAC_EMAC_TX_MAXPKT_TO    0x00003FFF
#define SWITCH_EMAC_EMAC_TX_MAXPKT_TO_M  ((SWITCH_EMAC_EMAC_TX_MAXPKT_TO_V)<<(SWITCH_EMAC_EMAC_TX_MAXPKT_TO_S))
#define SWITCH_EMAC_EMAC_TX_MAXPKT_TO_V  0x3FFF
#define SWITCH_EMAC_EMAC_TX_MAXPKT_TO_S  0

#define SWITCH_EMAC_EMAC_DEFER_CFG_REG          (DR_REG_SWITCH_EMAC_BASE + 0x18)
/* SWITCH_EMAC_EMAC_TX_EXSSDEF_DROP_EN : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: when this bit is set, mac will drop current frame when deferred timer more than
reg_tx_exssdef_lmt value. When this bit is not set, the MAC will wait transmit c
urrent frame until the transfer is complete.*/
#define SWITCH_EMAC_EMAC_TX_EXSSDEF_DROP_EN    (BIT(17))
#define SWITCH_EMAC_EMAC_TX_EXSSDEF_DROP_EN_M  (BIT(17))
#define SWITCH_EMAC_EMAC_TX_EXSSDEF_DROP_EN_V  0x1
#define SWITCH_EMAC_EMAC_TX_EXSSDEF_DROP_EN_S  17
/* SWITCH_EMAC_EMAC_TX_DEFERRAL_CHK : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: when this bit is set, the deferral check function is enabled in the MAC. When th
e transmit state machine is deferred for more than reg_tx_exssdef_lmt value, the
 MAC issues a tx_exssdef in cntp.*/
#define SWITCH_EMAC_EMAC_TX_DEFERRAL_CHK    (BIT(16))
#define SWITCH_EMAC_EMAC_TX_DEFERRAL_CHK_M  (BIT(16))
#define SWITCH_EMAC_EMAC_TX_DEFERRAL_CHK_V  0x1
#define SWITCH_EMAC_EMAC_TX_DEFERRAL_CHK_S  16
/* SWITCH_EMAC_EMAC_TX_EXSSDEF_LMT : R/W ;bitpos:[13:0] ;default: 14'h17b7 ; */
/*description: configures the max value of deferred time.Unit:8bits.*/
#define SWITCH_EMAC_EMAC_TX_EXSSDEF_LMT    0x00003FFF
#define SWITCH_EMAC_EMAC_TX_EXSSDEF_LMT_M  ((SWITCH_EMAC_EMAC_TX_EXSSDEF_LMT_V)<<(SWITCH_EMAC_EMAC_TX_EXSSDEF_LMT_S))
#define SWITCH_EMAC_EMAC_TX_EXSSDEF_LMT_V  0x3FFF
#define SWITCH_EMAC_EMAC_TX_EXSSDEF_LMT_S  0

#define SWITCH_EMAC_EMAC_LPI_CTRL_AND_STATUS_REG          (DR_REG_SWITCH_EMAC_BASE + 0x1C)
/* SWITCH_EMAC_EMAC_DROP_FRAME_IN_LPI : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: when this bit is set, the MAC will drop frame from switch when MAC is in LPI sta
te. When this bit is reset, the MAC will not drop frame from switch when MAC is
in LPI state..*/
#define SWITCH_EMAC_EMAC_DROP_FRAME_IN_LPI    (BIT(12))
#define SWITCH_EMAC_EMAC_DROP_FRAME_IN_LPI_M  (BIT(12))
#define SWITCH_EMAC_EMAC_DROP_FRAME_IN_LPI_V  0x1
#define SWITCH_EMAC_EMAC_DROP_FRAME_IN_LPI_S  12
/* SWITCH_EMAC_EMAC_LPI_MODE_TX_AUTOMATE : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: this bit controls the behavior of the MAC when it is entering or coming out of t
he LPI mode on the transmit side. If the reg_lpi_mode_tx_automate and reg_lpi_mo
de_ena_tx bits are set to 1, the MAC enters the LPI mode only after all outstand
ing frames and pending frames have been transmitted. The MAC comes out of the LP
I mode when the application sends any frame for transmission. ; When this bit is
 0, the reg_lpi_mode_ena_tx bit directly controls behavior of the MAC when it is
 entering or coming out of the LPI mode..*/
#define SWITCH_EMAC_EMAC_LPI_MODE_TX_AUTOMATE    (BIT(11))
#define SWITCH_EMAC_EMAC_LPI_MODE_TX_AUTOMATE_M  (BIT(11))
#define SWITCH_EMAC_EMAC_LPI_MODE_TX_AUTOMATE_V  0x1
#define SWITCH_EMAC_EMAC_LPI_MODE_TX_AUTOMATE_S  11
/* SWITCH_EMAC_EMAC_PHYIF_LS_EN : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: this bit enables the link status received on the RGMII receive paths to be used
for activating the reg_lpi_ls_timer.; When set the MAC uses the reg_link_status
bits of EMAC_RGMII_STATUS_REG(0x0024) and reg_phy_link_status for the reg_lpi_ls
_timer trigger. When cleared, the MAC ignores the reg_link_status bits of EMAC_R
GMII_STATUS_REG(0x0024) and takes only the reg_phy_link_status..*/
#define SWITCH_EMAC_EMAC_PHYIF_LS_EN    (BIT(10))
#define SWITCH_EMAC_EMAC_PHYIF_LS_EN_M  (BIT(10))
#define SWITCH_EMAC_EMAC_PHYIF_LS_EN_V  0x1
#define SWITCH_EMAC_EMAC_PHYIF_LS_EN_S  10
/* SWITCH_EMAC_EMAC_PHY_LINK_STATUS : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: this bit indicates the link status of the PHY. The MAC transmitter asserts the L
PI pattern only when the link status is up(OKAY) at least for the time indicated
 by the reg_lpi_ls_timer.; When set, the link is considered to be okay(up) and w
hen reset, the link is considered to be down..*/
#define SWITCH_EMAC_EMAC_PHY_LINK_STATUS    (BIT(9))
#define SWITCH_EMAC_EMAC_PHY_LINK_STATUS_M  (BIT(9))
#define SWITCH_EMAC_EMAC_PHY_LINK_STATUS_V  0x1
#define SWITCH_EMAC_EMAC_PHY_LINK_STATUS_S  9
/* SWITCH_EMAC_EMAC_LPI_MODE_ENA_TX : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: when set, this bit indicates the MAC transmitter to enter the LPI state. When re
set, this bit indicates the MAC to exit the LPI state and resume normal transmis
sion..*/
#define SWITCH_EMAC_EMAC_LPI_MODE_ENA_TX    (BIT(8))
#define SWITCH_EMAC_EMAC_LPI_MODE_ENA_TX_M  (BIT(8))
#define SWITCH_EMAC_EMAC_LPI_MODE_ENA_TX_V  0x1
#define SWITCH_EMAC_EMAC_LPI_MODE_ENA_TX_S  8
/* SWITCH_EMAC_EMAC_RPE_LPI_RCVD : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: when set, this bit indicates that the MAC is receiving the LPI pattern on the GM
II or MII interface..*/
#define SWITCH_EMAC_EMAC_RPE_LPI_RCVD    (BIT(1))
#define SWITCH_EMAC_EMAC_RPE_LPI_RCVD_M  (BIT(1))
#define SWITCH_EMAC_EMAC_RPE_LPI_RCVD_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_RCVD_S  1
/* SWITCH_EMAC_EMAC_TPE_LPI_TRANS : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: when set, this bit indicates that the MAC is transmitting the LPI pattern on the
 GMII or MII interface..*/
#define SWITCH_EMAC_EMAC_TPE_LPI_TRANS    (BIT(0))
#define SWITCH_EMAC_EMAC_TPE_LPI_TRANS_M  (BIT(0))
#define SWITCH_EMAC_EMAC_TPE_LPI_TRANS_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_TRANS_S  0

#define SWITCH_EMAC_EMAC_LPI_TIMERS_REG          (DR_REG_SWITCH_EMAC_BASE + 0x20)
/* SWITCH_EMAC_EMAC_LPI_LS_TIMER : R/W ;bitpos:[25:16] ;default: 10'h3e8 ; */
/*description: this field specifies the minimum time (in milliseconds) for which reg_phy_link_s
tatus should be up(OKAY) before the LPI pattern can be transmitted to the PHY. T
he MAC does not transmit the LPI pattern even when the reg_lpi_mode_ena_tx bit i
s set unless the reg_lpi_ls_timer reaches the programmed terminal count. The def
ault value of reg_lpi_ls_timer is 1000 (1 sec) as defined in the IEEE standard..*/
#define SWITCH_EMAC_EMAC_LPI_LS_TIMER    0x000003FF
#define SWITCH_EMAC_EMAC_LPI_LS_TIMER_M  ((SWITCH_EMAC_EMAC_LPI_LS_TIMER_V)<<(SWITCH_EMAC_EMAC_LPI_LS_TIMER_S))
#define SWITCH_EMAC_EMAC_LPI_LS_TIMER_V  0x3FF
#define SWITCH_EMAC_EMAC_LPI_LS_TIMER_S  16
/* SWITCH_EMAC_EMAC_LPI_TW_TIMER : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: this field specifies the minimum time (in microseconds) for which the MAC waits
after it stops transmitting the LPI pattern to the PHY and before it resumes the
 normal transmission..*/
#define SWITCH_EMAC_EMAC_LPI_TW_TIMER    0x0000FFFF
#define SWITCH_EMAC_EMAC_LPI_TW_TIMER_M  ((SWITCH_EMAC_EMAC_LPI_TW_TIMER_V)<<(SWITCH_EMAC_EMAC_LPI_TW_TIMER_S))
#define SWITCH_EMAC_EMAC_LPI_TW_TIMER_V  0xFFFF
#define SWITCH_EMAC_EMAC_LPI_TW_TIMER_S  0

#define SWITCH_EMAC_EMAC_RGMII_SGMII_STATUS_REG          (DR_REG_SWITCH_EMAC_BASE + 0x40)
/* SWITCH_EMAC_EMAC_LINK_STATUS : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: This bit indicates whether the link between the local PHY and the remote PHY is
up or down.; 0 : down; 1 : up.*/
#define SWITCH_EMAC_EMAC_LINK_STATUS    (BIT(3))
#define SWITCH_EMAC_EMAC_LINK_STATUS_M  (BIT(3))
#define SWITCH_EMAC_EMAC_LINK_STATUS_V  0x1
#define SWITCH_EMAC_EMAC_LINK_STATUS_S  3
/* SWITCH_EMAC_EMAC_LINK_SPEED : RO ;bitpos:[2:1] ;default: 2'h0 ; */
/*description: this bit indicates the current speed of link; 00 : 2.5MHZ; 01 : 25MHZ; 10 : 125M
HZ.*/
#define SWITCH_EMAC_EMAC_LINK_SPEED    0x00000003
#define SWITCH_EMAC_EMAC_LINK_SPEED_M  ((SWITCH_EMAC_EMAC_LINK_SPEED_V)<<(SWITCH_EMAC_EMAC_LINK_SPEED_S))
#define SWITCH_EMAC_EMAC_LINK_SPEED_V  0x3
#define SWITCH_EMAC_EMAC_LINK_SPEED_S  1
/* SWITCH_EMAC_EMAC_LINK_MODE : RO ;bitpos:[0] ;default: 1'h1 ; */
/*description: this bit indicates the current mode of operation of link; 1'b0 : Half-duplex mod
e; 1'b1 : Full-duplex mode.*/
#define SWITCH_EMAC_EMAC_LINK_MODE    (BIT(0))
#define SWITCH_EMAC_EMAC_LINK_MODE_M  (BIT(0))
#define SWITCH_EMAC_EMAC_LINK_MODE_V  0x1
#define SWITCH_EMAC_EMAC_LINK_MODE_S  0

#define SWITCH_EMAC_EMAC_DEBUG_STATUS_REG          (DR_REG_SWITCH_EMAC_BASE + 0x44)
/* SWITCH_EMAC_EMAC_RX_RST_ST : RO ;bitpos:[11] ;default: 1'h1 ; */
/*description: when high, this bit indicates that the MAC receiver is in the reset state(rx_rst
_n low )..*/
#define SWITCH_EMAC_EMAC_RX_RST_ST    (BIT(11))
#define SWITCH_EMAC_EMAC_RX_RST_ST_M  (BIT(11))
#define SWITCH_EMAC_EMAC_RX_RST_ST_V  0x1
#define SWITCH_EMAC_EMAC_RX_RST_ST_S  11
/* SWITCH_EMAC_EMAC_TX_RST_ST : RO ;bitpos:[10] ;default: 1'h1 ; */
/*description: when high, this bit indicates that the MAC transmitter is in the reset state(tx_
rst_n low or transmit_en low)..*/
#define SWITCH_EMAC_EMAC_TX_RST_ST    (BIT(10))
#define SWITCH_EMAC_EMAC_TX_RST_ST_M  (BIT(10))
#define SWITCH_EMAC_EMAC_TX_RST_ST_V  0x1
#define SWITCH_EMAC_EMAC_TX_RST_ST_S  10
/* SWITCH_EMAC_EMAC_TX_PAUSED : RO ;bitpos:[9] ;default: 1'h0 ; */
/*description: when high,this bit indicates that the MAC transmitter is in the Pause condition(
in the full-duplex-only mode) and hence does not schedule any frame for transmis
sion.*/
#define SWITCH_EMAC_EMAC_TX_PAUSED    (BIT(9))
#define SWITCH_EMAC_EMAC_TX_PAUSED_M  (BIT(9))
#define SWITCH_EMAC_EMAC_TX_PAUSED_V  0x1
#define SWITCH_EMAC_EMAC_TX_PAUSED_S  9
/* SWITCH_EMAC_EMAC_TFC_STS : RO ;bitpos:[8:6] ;default: 3'h0 ; */
/*description: this field indicates the state of the MAC TFC module :; 2'b00 : IDLE state; 2'b0
1 : Waiting for status of previous frame or IPG or backoff period to be over; 2'
b10 : Generating and transmitting a Pause frame(in the full-duplex mode); 2'b11
: Transferring input frame for transmission.*/
#define SWITCH_EMAC_EMAC_TFC_STS    0x00000007
#define SWITCH_EMAC_EMAC_TFC_STS_M  ((SWITCH_EMAC_EMAC_TFC_STS_V)<<(SWITCH_EMAC_EMAC_TFC_STS_S))
#define SWITCH_EMAC_EMAC_TFC_STS_V  0x7
#define SWITCH_EMAC_EMAC_TFC_STS_S  6
/* SWITCH_EMAC_EMAC_TPE_STS : RO ;bitpos:[5:3] ;default: 3'h0 ; */
/*description: when high, this bit indicates that the MAC TPE is actively transmitting data and
 is not in the IDLE state..*/
#define SWITCH_EMAC_EMAC_TPE_STS    0x00000007
#define SWITCH_EMAC_EMAC_TPE_STS_M  ((SWITCH_EMAC_EMAC_TPE_STS_V)<<(SWITCH_EMAC_EMAC_TPE_STS_S))
#define SWITCH_EMAC_EMAC_TPE_STS_V  0x7
#define SWITCH_EMAC_EMAC_TPE_STS_S  3
/* SWITCH_EMAC_EMAC_RPE_STS : RO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: when high, this bit indicates that the MAC RPE is actively receiving data and no
t in IDLE state..*/
#define SWITCH_EMAC_EMAC_RPE_STS    0x00000007
#define SWITCH_EMAC_EMAC_RPE_STS_M  ((SWITCH_EMAC_EMAC_RPE_STS_V)<<(SWITCH_EMAC_EMAC_RPE_STS_S))
#define SWITCH_EMAC_EMAC_RPE_STS_V  0x7
#define SWITCH_EMAC_EMAC_RPE_STS_S  0

#define SWITCH_EMAC_EMAC_PHY_INTF_STATUS_REG          (DR_REG_SWITCH_EMAC_BASE + 0x48)
/* SWITCH_EMAC_EMAC_PHY_CRS : RO ;bitpos:[27] ;default: 1'h0 ; */
/*description: reserved.*/
#define SWITCH_EMAC_EMAC_PHY_CRS    (BIT(27))
#define SWITCH_EMAC_EMAC_PHY_CRS_M  (BIT(27))
#define SWITCH_EMAC_EMAC_PHY_CRS_V  0x1
#define SWITCH_EMAC_EMAC_PHY_CRS_S  27
/* SWITCH_EMAC_EMAC_PHY_COL : RO ;bitpos:[26] ;default: 1'h0 ; */
/*description: reserved.*/
#define SWITCH_EMAC_EMAC_PHY_COL    (BIT(26))
#define SWITCH_EMAC_EMAC_PHY_COL_M  (BIT(26))
#define SWITCH_EMAC_EMAC_PHY_COL_V  0x1
#define SWITCH_EMAC_EMAC_PHY_COL_S  26
/* SWITCH_EMAC_EMAC_PHY_RXDV : RO ;bitpos:[25] ;default: 1'h0 ; */
/*description: reserved.*/
#define SWITCH_EMAC_EMAC_PHY_RXDV    (BIT(25))
#define SWITCH_EMAC_EMAC_PHY_RXDV_M  (BIT(25))
#define SWITCH_EMAC_EMAC_PHY_RXDV_V  0x1
#define SWITCH_EMAC_EMAC_PHY_RXDV_S  25
/* SWITCH_EMAC_EMAC_PHY_RXER : RO ;bitpos:[24] ;default: 1'h0 ; */
/*description: reserved.*/
#define SWITCH_EMAC_EMAC_PHY_RXER    (BIT(24))
#define SWITCH_EMAC_EMAC_PHY_RXER_M  (BIT(24))
#define SWITCH_EMAC_EMAC_PHY_RXER_V  0x1
#define SWITCH_EMAC_EMAC_PHY_RXER_S  24
/* SWITCH_EMAC_EMAC_PHY_RXD : RO ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: reserved.*/
#define SWITCH_EMAC_EMAC_PHY_RXD    0x000000FF
#define SWITCH_EMAC_EMAC_PHY_RXD_M  ((SWITCH_EMAC_EMAC_PHY_RXD_V)<<(SWITCH_EMAC_EMAC_PHY_RXD_S))
#define SWITCH_EMAC_EMAC_PHY_RXD_V  0xFF
#define SWITCH_EMAC_EMAC_PHY_RXD_S  16
/* SWITCH_EMAC_EMAC_PHY_TXEN : RO ;bitpos:[9] ;default: 1'h0 ; */
/*description: reserved.*/
#define SWITCH_EMAC_EMAC_PHY_TXEN    (BIT(9))
#define SWITCH_EMAC_EMAC_PHY_TXEN_M  (BIT(9))
#define SWITCH_EMAC_EMAC_PHY_TXEN_V  0x1
#define SWITCH_EMAC_EMAC_PHY_TXEN_S  9
/* SWITCH_EMAC_EMAC_PHY_TXER : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: reserved.*/
#define SWITCH_EMAC_EMAC_PHY_TXER    (BIT(8))
#define SWITCH_EMAC_EMAC_PHY_TXER_M  (BIT(8))
#define SWITCH_EMAC_EMAC_PHY_TXER_V  0x1
#define SWITCH_EMAC_EMAC_PHY_TXER_S  8
/* SWITCH_EMAC_EMAC_PHY_TXD : RO ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: reserved.*/
#define SWITCH_EMAC_EMAC_PHY_TXD    0x000000FF
#define SWITCH_EMAC_EMAC_PHY_TXD_M  ((SWITCH_EMAC_EMAC_PHY_TXD_V)<<(SWITCH_EMAC_EMAC_PHY_TXD_S))
#define SWITCH_EMAC_EMAC_PHY_TXD_V  0xFF
#define SWITCH_EMAC_EMAC_PHY_TXD_S  0

#define SWITCH_EMAC_EMAC_FREQ_METER_CNT_CLR_REG          (DR_REG_SWITCH_EMAC_BASE + 0x50)
/* SWITCH_EMAC_EMAC_METER_CNT_CLR : WT ;bitpos:[0] ;default: 1'h0 ; */
/*description: this bit indicates whether clear reg_rx_meter_cnt or reg_tx_meter_cnt.*/
#define SWITCH_EMAC_EMAC_METER_CNT_CLR    (BIT(0))
#define SWITCH_EMAC_EMAC_METER_CNT_CLR_M  (BIT(0))
#define SWITCH_EMAC_EMAC_METER_CNT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_METER_CNT_CLR_S  0

#define SWITCH_EMAC_EMAC_RX_METER_CNT_REG          (DR_REG_SWITCH_EMAC_BASE + 0x54)
/* SWITCH_EMAC_EMAC_RX_METER_CNT : RO ;bitpos:[23:0] ;default: 24'h0 ; */
/*description: rx clock counter per 1ms,range 0~(1ms-1clk).*/
#define SWITCH_EMAC_EMAC_RX_METER_CNT    0x00FFFFFF
#define SWITCH_EMAC_EMAC_RX_METER_CNT_M  ((SWITCH_EMAC_EMAC_RX_METER_CNT_V)<<(SWITCH_EMAC_EMAC_RX_METER_CNT_S))
#define SWITCH_EMAC_EMAC_RX_METER_CNT_V  0xFFFFFF
#define SWITCH_EMAC_EMAC_RX_METER_CNT_S  0

#define SWITCH_EMAC_EMAC_TX_METER_CNT_REG          (DR_REG_SWITCH_EMAC_BASE + 0x58)
/* SWITCH_EMAC_EMAC_TX_METER_CNT : RO ;bitpos:[23:0] ;default: 24'h0 ; */
/*description: tx clock counter per 1ms,range 0~(1ms-1clk).*/
#define SWITCH_EMAC_EMAC_TX_METER_CNT    0x00FFFFFF
#define SWITCH_EMAC_EMAC_TX_METER_CNT_M  ((SWITCH_EMAC_EMAC_TX_METER_CNT_V)<<(SWITCH_EMAC_EMAC_TX_METER_CNT_S))
#define SWITCH_EMAC_EMAC_TX_METER_CNT_V  0xFFFFFF
#define SWITCH_EMAC_EMAC_TX_METER_CNT_S  0

#define SWITCH_EMAC_EMAC_INTERRUPT_REG          (DR_REG_SWITCH_EMAC_BASE + 0x60)
/* SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT : RO ;bitpos:[19] ;default: 1'h0 ; */
/*description: MAC interrupt. MAC RX exit LPI state.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT    (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_M  (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_S  19
/* SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT : RO ;bitpos:[18] ;default: 1'h0 ; */
/*description: MAC interrupt. MAC RX enter LPI state.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT    (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_M  (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_S  18
/* SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT : RO ;bitpos:[17] ;default: 1'h0 ; */
/*description: MAC interrupt. MAC TX exit LPI state.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT    (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_M  (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_S  17
/* SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: MAC interrupt. MAC TX enter LPI state.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT    (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_M  (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_S  16
/* SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT : RO ;bitpos:[11] ;default: 1'h0 ; */
/*description: MAC interrupt. RX cntp num group overflow.*/
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT    (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_M  (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_V  0x1
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_S  11
/* SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT : RO ;bitpos:[10] ;default: 1'h0 ; */
/*description: MAC interrupt. TX cntp num group overflow.*/
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT    (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_M  (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_V  0x1
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_S  10
/* SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT : RO ;bitpos:[9] ;default: 1'h0 ; */
/*description: MAC interrupt. ERR cntp num group overflow.*/
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT    (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_M  (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_V  0x1
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_S  9
/* SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: MAC interrupt. cntp len group overflow.*/
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT    (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_M  (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_V  0x1
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_S  8
/* SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT : RO ;bitpos:[7] ;default: 1'h0 ; */
/*description: MAC interrupt. Gmii link status change.*/
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT    (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_M  (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_V  0x1
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_S  7
/* SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT : RO ;bitpos:[5] ;default: 1'h0 ; */
/*description: MAC interrupt. Rx afifo overflow..*/
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT    (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_M  (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_S  5
/* SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT : RO ;bitpos:[4] ;default: 1'h0 ; */
/*description: MAC interrupt. Rx afifo empty..*/
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT    (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_M  (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_S  4
/* SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: MAC interrupt. Rx afifo full..*/
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT    (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_M  (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_S  3
/* SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT : RO ;bitpos:[2] ;default: 1'h0 ; */
/*description: MAC interrupt. Tx afifo underflow..*/
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT    (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_M  (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_S  2
/* SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: MAC interrupt. Tx afifo empty..*/
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT    (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_M  (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_S  1
/* SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: MAC interrupt. Tx afifo full..*/
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT    (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_M  (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_S  0

#define SWITCH_EMAC_EMAC_INTERRUPT_TEST_REG          (DR_REG_SWITCH_EMAC_BASE + 0x64)
/* SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_TEST : WT ;bitpos:[19] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_TEST    (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_TEST_M  (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_TEST_S  19
/* SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_TEST : WT ;bitpos:[18] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_TEST    (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_TEST_M  (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_TEST_S  18
/* SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_TEST : WT ;bitpos:[17] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_TEST    (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_TEST_M  (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_TEST_S  17
/* SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_TEST : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_TEST    (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_TEST_M  (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_TEST_S  16
/* SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_TEST : WT ;bitpos:[11] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_TEST    (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_TEST_M  (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_TEST_S  11
/* SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_TEST : WT ;bitpos:[10] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_TEST    (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_TEST_M  (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_TEST_S  10
/* SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_TEST : WT ;bitpos:[9] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_TEST    (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_TEST_M  (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_TEST_S  9
/* SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_TEST : WT ;bitpos:[8] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_TEST    (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_TEST_M  (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_TEST_S  8
/* SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_TEST : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_TEST    (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_TEST_M  (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_TEST_S  7
/* SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_TEST : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_TEST    (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_TEST_M  (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_TEST_S  5
/* SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_TEST : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_TEST    (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_TEST_M  (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_TEST_S  4
/* SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_TEST : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_TEST    (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_TEST_M  (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_TEST_S  3
/* SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_TEST : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_TEST    (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_TEST_M  (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_TEST_S  2
/* SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_TEST : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_TEST    (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_TEST_M  (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_TEST_S  1
/* SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_TEST : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_TEST    (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_TEST_M  (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_TEST_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_TEST_S  0

#define SWITCH_EMAC_EMAC_INTERRUPT_RAW_REG          (DR_REG_SWITCH_EMAC_BASE + 0x68)
/* SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_RAW : R/SS/WTC ;bitpos:[19] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_RAW    (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_RAW_M  (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_RAW_S  19
/* SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_RAW : R/SS/WTC ;bitpos:[18] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_RAW    (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_RAW_M  (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_RAW_S  18
/* SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_RAW : R/SS/WTC ;bitpos:[17] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_RAW    (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_RAW_M  (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_RAW_S  17
/* SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_RAW : R/SS/WTC ;bitpos:[16] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_RAW    (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_RAW_M  (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_RAW_S  16
/* SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_RAW : R/SS/WTC ;bitpos:[11] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_RAW    (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_RAW_M  (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_RAW_S  11
/* SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_RAW : R/SS/WTC ;bitpos:[10] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_RAW    (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_RAW_M  (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_RAW_S  10
/* SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_RAW : R/SS/WTC ;bitpos:[9] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_RAW    (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_RAW_M  (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_RAW_S  9
/* SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_RAW : R/SS/WTC ;bitpos:[8] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_RAW    (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_RAW_M  (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_RAW_S  8
/* SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_RAW : R/SS/WTC ;bitpos:[7] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_RAW    (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_RAW_M  (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_RAW_S  7
/* SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_RAW : R/SS/WTC ;bitpos:[5] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_RAW    (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_RAW_M  (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_RAW_S  5
/* SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_RAW : R/SS/WTC ;bitpos:[4] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_RAW    (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_RAW_M  (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_RAW_S  4
/* SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_RAW : R/SS/WTC ;bitpos:[3] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_RAW    (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_RAW_M  (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_RAW_S  3
/* SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_RAW : R/SS/WTC ;bitpos:[2] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_RAW    (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_RAW_M  (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_RAW_S  2
/* SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_RAW : R/SS/WTC ;bitpos:[1] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_RAW    (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_RAW_M  (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_RAW_S  1
/* SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_RAW : R/SS/WTC ;bitpos:[0] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_RAW    (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_RAW_M  (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_RAW_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_RAW_S  0

#define SWITCH_EMAC_EMAC_INTERRUPT_ST_REG          (DR_REG_SWITCH_EMAC_BASE + 0x6C)
/* SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ST : RO ;bitpos:[19] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ST    (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ST_M  (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ST_S  19
/* SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ST : RO ;bitpos:[18] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ST    (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ST_M  (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ST_S  18
/* SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ST : RO ;bitpos:[17] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ST    (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ST_M  (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ST_S  17
/* SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ST : RO ;bitpos:[16] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ST    (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ST_M  (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ST_S  16
/* SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ST : RO ;bitpos:[11] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ST    (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ST_M  (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ST_S  11
/* SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ST : RO ;bitpos:[10] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ST    (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ST_M  (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ST_S  10
/* SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ST : RO ;bitpos:[9] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ST    (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ST_M  (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ST_S  9
/* SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ST : RO ;bitpos:[8] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ST    (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ST_M  (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ST_S  8
/* SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ST    (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ST_M  (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ST_S  7
/* SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ST    (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ST_M  (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ST_S  5
/* SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ST    (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ST_M  (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ST_S  4
/* SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ST    (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ST_M  (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ST_S  3
/* SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ST    (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ST_M  (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ST_S  2
/* SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ST    (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ST_M  (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ST_S  1
/* SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ST    (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ST_M  (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ST_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ST_S  0

#define SWITCH_EMAC_EMAC_INTERRUPT_ENA_REG          (DR_REG_SWITCH_EMAC_BASE + 0x70)
/* SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ENA : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ENA    (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ENA_M  (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_ENA_S  19
/* SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ENA : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ENA    (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ENA_M  (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_ENA_S  18
/* SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ENA : R/W ;bitpos:[17] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ENA    (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ENA_M  (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_ENA_S  17
/* SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ENA : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ENA    (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ENA_M  (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_ENA_S  16
/* SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ENA : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ENA    (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ENA_M  (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_ENA_S  11
/* SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ENA : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ENA    (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ENA_M  (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_ENA_S  10
/* SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ENA : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ENA    (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ENA_M  (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_ENA_S  9
/* SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ENA : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ENA    (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ENA_M  (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_ENA_S  8
/* SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ENA    (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ENA_M  (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_ENA_S  7
/* SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ENA    (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ENA_M  (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_ENA_S  5
/* SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ENA    (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ENA_M  (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_ENA_S  4
/* SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ENA    (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ENA_M  (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_ENA_S  3
/* SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ENA    (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ENA_M  (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_ENA_S  2
/* SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ENA    (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ENA_M  (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_ENA_S  1
/* SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: st = ena && raw.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ENA    (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ENA_M  (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ENA_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_ENA_S  0

#define SWITCH_EMAC_EMAC_INTERRUPT_CLR_REG          (DR_REG_SWITCH_EMAC_BASE + 0x74)
/* SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_CLR : WT ;bitpos:[19] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_CLR    (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_CLR_M  (BIT(19))
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_EXIT_INT_CLR_S  19
/* SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_CLR : WT ;bitpos:[18] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_CLR    (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_CLR_M  (BIT(18))
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_RPE_LPI_ENTER_INT_CLR_S  18
/* SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_CLR : WT ;bitpos:[17] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_CLR    (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_CLR_M  (BIT(17))
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_EXIT_INT_CLR_S  17
/* SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_CLR : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_CLR    (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_CLR_M  (BIT(16))
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_TPE_LPI_ENTER_INT_CLR_S  16
/* SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_CLR : WT ;bitpos:[11] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_CLR    (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_CLR_M  (BIT(11))
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_RX_CNTP_NUM_OVERFLOW_INT_CLR_S  11
/* SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_CLR : WT ;bitpos:[10] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_CLR    (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_CLR_M  (BIT(10))
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_TX_CNTP_NUM_OVERFLOW_INT_CLR_S  10
/* SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_CLR : WT ;bitpos:[9] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_CLR    (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_CLR_M  (BIT(9))
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_ERR_CNTP_NUM_OVERFLOW_INT_CLR_S  9
/* SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_CLR : WT ;bitpos:[8] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_CLR    (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_CLR_M  (BIT(8))
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_CNTP_LEN_OVERFLOW_INT_CLR_S  8
/* SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_CLR    (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_CLR_M  (BIT(7))
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_LINK_STATUS_CHANGE_INT_CLR_S  7
/* SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_CLR    (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_CLR_M  (BIT(5))
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_OVERFLOW_INT_CLR_S  5
/* SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_CLR    (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_CLR_M  (BIT(4))
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_EMPTY_INT_CLR_S  4
/* SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_CLR    (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_CLR_M  (BIT(3))
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_RX_FIFO_FULL_INT_CLR_S  3
/* SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_CLR    (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_CLR_M  (BIT(2))
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_UNDERFLOW_INT_CLR_S  2
/* SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_CLR    (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_CLR_M  (BIT(1))
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_EMPTY_INT_CLR_S  1
/* SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: if(int || test), raw <= 1.; else if(clr), raw <= 0.*/
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_CLR    (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_CLR_M  (BIT(0))
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_CLR_V  0x1
#define SWITCH_EMAC_EMAC_TX_FIFO_FULL_INT_CLR_S  0

#define SWITCH_EMAC_EMAC_CLK_EN_REG          (DR_REG_SWITCH_EMAC_BASE + 0x80)
/* SWITCH_EMAC_EMAC_CLK_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: reserved.*/
#define SWITCH_EMAC_EMAC_CLK_EN    (BIT(0))
#define SWITCH_EMAC_EMAC_CLK_EN_M  (BIT(0))
#define SWITCH_EMAC_EMAC_CLK_EN_V  0x1
#define SWITCH_EMAC_EMAC_CLK_EN_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_EMAC_REG_H_ */
