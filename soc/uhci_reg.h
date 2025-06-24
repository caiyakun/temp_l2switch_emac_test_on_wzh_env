/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_UHCI_REG_H_
#define _SOC_UHCI_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define UHCI_CONF0_REG(i)          (REG_UHCI_BASE(i) + 0x0)
/* UHCI_UART_RX_BRK_EOF_EN : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: If this bit is set to 1 UHCI will end payload receive process when NULL frame is
 received by UART..*/
#define UHCI_UART_RX_BRK_EOF_EN    (BIT(12))
#define UHCI_UART_RX_BRK_EOF_EN_M  (BIT(12))
#define UHCI_UART_RX_BRK_EOF_EN_V  0x1
#define UHCI_UART_RX_BRK_EOF_EN_S  12
/* UHCI_CLK_EN : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: 1'b1: Force clock on for register. 1'b0: Support clock only when application wri
tes registers..*/
#define UHCI_CLK_EN    (BIT(11))
#define UHCI_CLK_EN_M  (BIT(11))
#define UHCI_CLK_EN_V  0x1
#define UHCI_CLK_EN_S  11
/* UHCI_ENCODE_CRC_EN : R/W ;bitpos:[10] ;default: 1'b1 ; */
/*description: Set this bit to enable data integrity checking by appending a 16 bit CCITT-CRC t
o end of the payload..*/
#define UHCI_ENCODE_CRC_EN    (BIT(10))
#define UHCI_ENCODE_CRC_EN_M  (BIT(10))
#define UHCI_ENCODE_CRC_EN_V  0x1
#define UHCI_ENCODE_CRC_EN_S  10
/* UHCI_LEN_EOF_EN : R/W ;bitpos:[9] ;default: 1'b1 ; */
/*description: If this bit is set to 1 UHCI decoder receiving payload data is end when the rece
iving byte count has reached the specified value. The value is payload length in
dicated by UHCI packet header when UHCI_HEAD_EN is 1 or the value is configurati
on value when UHCI_HEAD_EN is 0. If this bit is set to 0 UHCI decoder receiving
payload data is end when 0xc0 is received..*/
#define UHCI_LEN_EOF_EN    (BIT(9))
#define UHCI_LEN_EOF_EN_M  (BIT(9))
#define UHCI_LEN_EOF_EN_V  0x1
#define UHCI_LEN_EOF_EN_S  9
/* UHCI_UART_IDLE_EOF_EN : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: If this bit is set to 1 UHCI will end the payload receiving process when UART ha
s been in idle state..*/
#define UHCI_UART_IDLE_EOF_EN    (BIT(8))
#define UHCI_UART_IDLE_EOF_EN_M  (BIT(8))
#define UHCI_UART_IDLE_EOF_EN_V  0x1
#define UHCI_UART_IDLE_EOF_EN_S  8
/* UHCI_CRC_REC_EN : R/W ;bitpos:[7] ;default: 1'b1 ; */
/*description: Set this bit to enable UHCI to receive the 16 bit CRC..*/
#define UHCI_CRC_REC_EN    (BIT(7))
#define UHCI_CRC_REC_EN_M  (BIT(7))
#define UHCI_CRC_REC_EN_V  0x1
#define UHCI_CRC_REC_EN_S  7
/* UHCI_HEAD_EN : R/W ;bitpos:[6] ;default: 1'b1 ; */
/*description: Set this bit to encode the data packet with a formatting header..*/
#define UHCI_HEAD_EN    (BIT(6))
#define UHCI_HEAD_EN_M  (BIT(6))
#define UHCI_HEAD_EN_V  0x1
#define UHCI_HEAD_EN_S  6
/* UHCI_SEPER_EN : R/W ;bitpos:[5] ;default: 1'b1 ; */
/*description: Set this bit to separate the data frame using a special char..*/
#define UHCI_SEPER_EN    (BIT(5))
#define UHCI_SEPER_EN_M  (BIT(5))
#define UHCI_SEPER_EN_V  0x1
#define UHCI_SEPER_EN_S  5
/* UHCI_UART_SEL : R/W ;bitpos:[4:2] ;default: 3'h7 ; */
/*description: Select which uart to connect with GDMA..*/
#define UHCI_UART_SEL    0x00000007
#define UHCI_UART_SEL_M  ((UHCI_UART_SEL_V)<<(UHCI_UART_SEL_S))
#define UHCI_UART_SEL_V  0x7
#define UHCI_UART_SEL_S  2
/* UHCI_RX_RST : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Write 1 then write 0 to this bit to reset encode state machine..*/
#define UHCI_RX_RST    (BIT(1))
#define UHCI_RX_RST_M  (BIT(1))
#define UHCI_RX_RST_V  0x1
#define UHCI_RX_RST_S  1
/* UHCI_TX_RST : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Write 1 then write 0 to this bit to reset decode state machine..*/
#define UHCI_TX_RST    (BIT(0))
#define UHCI_TX_RST_M  (BIT(0))
#define UHCI_TX_RST_V  0x1
#define UHCI_TX_RST_S  0

#define UHCI_INT_RAW_REG(i)          (REG_UHCI_BASE(i) + 0x4)
/* UHCI_APP_CTRL1_INT_RAW : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: Indicates the raw interrupt of UHCI_APP_CTRL1_INT. Interrupt will be triggered w
hen UHCI_APP_CTRL1_IN_SET is set to 1..*/
#define UHCI_APP_CTRL1_INT_RAW    (BIT(8))
#define UHCI_APP_CTRL1_INT_RAW_M  (BIT(8))
#define UHCI_APP_CTRL1_INT_RAW_V  0x1
#define UHCI_APP_CTRL1_INT_RAW_S  8
/* UHCI_APP_CTRL0_INT_RAW : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Indicates the raw interrupt of UHCI_APP_CTRL0_INT. Interrupt will be triggered w
hen UHCI_APP_CTRL0_IN_SET is set to 1..*/
#define UHCI_APP_CTRL0_INT_RAW    (BIT(7))
#define UHCI_APP_CTRL0_INT_RAW_M  (BIT(7))
#define UHCI_APP_CTRL0_INT_RAW_V  0x1
#define UHCI_APP_CTRL0_INT_RAW_S  7
/* UHCI_OUT_EOF_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description: Indicates the raw interrupt of UHCI_OUT_EOF_INT. Interrupt will be triggered whe
n there are errors in EOF..*/
#define UHCI_OUT_EOF_INT_RAW    (BIT(6))
#define UHCI_OUT_EOF_INT_RAW_M  (BIT(6))
#define UHCI_OUT_EOF_INT_RAW_V  0x1
#define UHCI_OUT_EOF_INT_RAW_S  6
/* UHCI_SEND_A_Q_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description: Indicates the raw interrupt of UHCI_SEND_A_REG_Q_INT. Interrupt will be triggere
d when UHCI sends short packet successfully with always_send mode..*/
#define UHCI_SEND_A_Q_INT_RAW    (BIT(5))
#define UHCI_SEND_A_Q_INT_RAW_M  (BIT(5))
#define UHCI_SEND_A_Q_INT_RAW_V  0x1
#define UHCI_SEND_A_Q_INT_RAW_S  5
/* UHCI_SEND_S_Q_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description: Indicates the raw interrupt of UHCI_SEND_S_REG_Q_INT. Interrupt will be triggere
d when UHCI sends short packet successfully with single_send mode..*/
#define UHCI_SEND_S_Q_INT_RAW    (BIT(4))
#define UHCI_SEND_S_Q_INT_RAW_M  (BIT(4))
#define UHCI_SEND_S_Q_INT_RAW_V  0x1
#define UHCI_SEND_S_Q_INT_RAW_S  4
/* UHCI_TX_HUNG_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description: Indicates the raw interrupt of UHCI_TX_HUNG_INT. Interrupt will be triggered whe
n the required time of DMA reading RAM data  exceeds the configuration value..*/
#define UHCI_TX_HUNG_INT_RAW    (BIT(3))
#define UHCI_TX_HUNG_INT_RAW_M  (BIT(3))
#define UHCI_TX_HUNG_INT_RAW_V  0x1
#define UHCI_TX_HUNG_INT_RAW_S  3
/* UHCI_RX_HUNG_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description: Indicates the raw interrupt of UHCI_RX_HUNG_INT. Interrupt will be triggered whe
n the required time of DMA receiving data  exceeds the configuration value..*/
#define UHCI_RX_HUNG_INT_RAW    (BIT(2))
#define UHCI_RX_HUNG_INT_RAW_M  (BIT(2))
#define UHCI_RX_HUNG_INT_RAW_V  0x1
#define UHCI_RX_HUNG_INT_RAW_S  2
/* UHCI_TX_START_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description: Indicates the raw interrupt of UHCI_TX_START_INT. Interrupt will be triggered wh
en DMA detects delimiter..*/
#define UHCI_TX_START_INT_RAW    (BIT(1))
#define UHCI_TX_START_INT_RAW_M  (BIT(1))
#define UHCI_TX_START_INT_RAW_V  0x1
#define UHCI_TX_START_INT_RAW_S  1
/* UHCI_RX_START_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description: Indicates the raw interrupt of UHCI_RX_START_INT. Interrupt will be triggered wh
en delimiter is sent successfully..*/
#define UHCI_RX_START_INT_RAW    (BIT(0))
#define UHCI_RX_START_INT_RAW_M  (BIT(0))
#define UHCI_RX_START_INT_RAW_V  0x1
#define UHCI_RX_START_INT_RAW_S  0

#define UHCI_INT_ST_REG(i)          (REG_UHCI_BASE(i) + 0x8)
/* UHCI_APP_CTRL1_INT_ST : RO ;bitpos:[8] ;default: 1'b0 ; */
/*description: Indicates the interrupt status of UHCI_APP_CTRL1_INT..*/
#define UHCI_APP_CTRL1_INT_ST    (BIT(8))
#define UHCI_APP_CTRL1_INT_ST_M  (BIT(8))
#define UHCI_APP_CTRL1_INT_ST_V  0x1
#define UHCI_APP_CTRL1_INT_ST_S  8
/* UHCI_APP_CTRL0_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description: Indicates the interrupt status of UHCI_APP_CTRL0_INT..*/
#define UHCI_APP_CTRL0_INT_ST    (BIT(7))
#define UHCI_APP_CTRL0_INT_ST_M  (BIT(7))
#define UHCI_APP_CTRL0_INT_ST_V  0x1
#define UHCI_APP_CTRL0_INT_ST_S  7
/* UHCI_OUTLINK_EOF_ERR_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description: Indicates the interrupt status of UHCI_OUT_EOF_INT..*/
#define UHCI_OUTLINK_EOF_ERR_INT_ST    (BIT(6))
#define UHCI_OUTLINK_EOF_ERR_INT_ST_M  (BIT(6))
#define UHCI_OUTLINK_EOF_ERR_INT_ST_V  0x1
#define UHCI_OUTLINK_EOF_ERR_INT_ST_S  6
/* UHCI_SEND_A_Q_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description: Indicates the interrupt status of UHCI_SEND_A_REG_Q_INT..*/
#define UHCI_SEND_A_Q_INT_ST    (BIT(5))
#define UHCI_SEND_A_Q_INT_ST_M  (BIT(5))
#define UHCI_SEND_A_Q_INT_ST_V  0x1
#define UHCI_SEND_A_Q_INT_ST_S  5
/* UHCI_SEND_S_Q_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description: Indicates the interrupt status of UHCI_SEND_S_REG_Q_INT..*/
#define UHCI_SEND_S_Q_INT_ST    (BIT(4))
#define UHCI_SEND_S_Q_INT_ST_M  (BIT(4))
#define UHCI_SEND_S_Q_INT_ST_V  0x1
#define UHCI_SEND_S_Q_INT_ST_S  4
/* UHCI_TX_HUNG_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description: Indicates the interrupt status of UHCI_TX_HUNG_INT..*/
#define UHCI_TX_HUNG_INT_ST    (BIT(3))
#define UHCI_TX_HUNG_INT_ST_M  (BIT(3))
#define UHCI_TX_HUNG_INT_ST_V  0x1
#define UHCI_TX_HUNG_INT_ST_S  3
/* UHCI_RX_HUNG_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: Indicates the interrupt status of UHCI_RX_HUNG_INT..*/
#define UHCI_RX_HUNG_INT_ST    (BIT(2))
#define UHCI_RX_HUNG_INT_ST_M  (BIT(2))
#define UHCI_RX_HUNG_INT_ST_V  0x1
#define UHCI_RX_HUNG_INT_ST_S  2
/* UHCI_TX_START_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: Indicates the interrupt status of UHCI_TX_START_INT..*/
#define UHCI_TX_START_INT_ST    (BIT(1))
#define UHCI_TX_START_INT_ST_M  (BIT(1))
#define UHCI_TX_START_INT_ST_V  0x1
#define UHCI_TX_START_INT_ST_S  1
/* UHCI_RX_START_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: Indicates the interrupt status of UHCI_RX_START_INT..*/
#define UHCI_RX_START_INT_ST    (BIT(0))
#define UHCI_RX_START_INT_ST_M  (BIT(0))
#define UHCI_RX_START_INT_ST_V  0x1
#define UHCI_RX_START_INT_ST_S  0

#define UHCI_INT_ENA_REG(i)          (REG_UHCI_BASE(i) + 0xC)
/* UHCI_APP_CTRL1_INT_ENA : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: Set this bit to enable the interrupt of UHCI_APP_CTRL1_INT..*/
#define UHCI_APP_CTRL1_INT_ENA    (BIT(8))
#define UHCI_APP_CTRL1_INT_ENA_M  (BIT(8))
#define UHCI_APP_CTRL1_INT_ENA_V  0x1
#define UHCI_APP_CTRL1_INT_ENA_S  8
/* UHCI_APP_CTRL0_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to enable the interrupt of UHCI_APP_CTRL0_INT..*/
#define UHCI_APP_CTRL0_INT_ENA    (BIT(7))
#define UHCI_APP_CTRL0_INT_ENA_M  (BIT(7))
#define UHCI_APP_CTRL0_INT_ENA_V  0x1
#define UHCI_APP_CTRL0_INT_ENA_S  7
/* UHCI_OUTLINK_EOF_ERR_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: Set this bit to enable the interrupt of UHCI_OUT_EOF_INT..*/
#define UHCI_OUTLINK_EOF_ERR_INT_ENA    (BIT(6))
#define UHCI_OUTLINK_EOF_ERR_INT_ENA_M  (BIT(6))
#define UHCI_OUTLINK_EOF_ERR_INT_ENA_V  0x1
#define UHCI_OUTLINK_EOF_ERR_INT_ENA_S  6
/* UHCI_SEND_A_Q_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: Set this bit to enable the interrupt of UHCI_SEND_A_REG_Q_INT..*/
#define UHCI_SEND_A_Q_INT_ENA    (BIT(5))
#define UHCI_SEND_A_Q_INT_ENA_M  (BIT(5))
#define UHCI_SEND_A_Q_INT_ENA_V  0x1
#define UHCI_SEND_A_Q_INT_ENA_S  5
/* UHCI_SEND_S_Q_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: Set this bit to enable the interrupt of UHCI_SEND_S_REG_Q_INT..*/
#define UHCI_SEND_S_Q_INT_ENA    (BIT(4))
#define UHCI_SEND_S_Q_INT_ENA_M  (BIT(4))
#define UHCI_SEND_S_Q_INT_ENA_V  0x1
#define UHCI_SEND_S_Q_INT_ENA_S  4
/* UHCI_TX_HUNG_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to enable the interrupt of UHCI_TX_HUNG_INT..*/
#define UHCI_TX_HUNG_INT_ENA    (BIT(3))
#define UHCI_TX_HUNG_INT_ENA_M  (BIT(3))
#define UHCI_TX_HUNG_INT_ENA_V  0x1
#define UHCI_TX_HUNG_INT_ENA_S  3
/* UHCI_RX_HUNG_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to enable the interrupt of UHCI_RX_HUNG_INT..*/
#define UHCI_RX_HUNG_INT_ENA    (BIT(2))
#define UHCI_RX_HUNG_INT_ENA_M  (BIT(2))
#define UHCI_RX_HUNG_INT_ENA_V  0x1
#define UHCI_RX_HUNG_INT_ENA_S  2
/* UHCI_TX_START_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to enable the interrupt of UHCI_TX_START_INT..*/
#define UHCI_TX_START_INT_ENA    (BIT(1))
#define UHCI_TX_START_INT_ENA_M  (BIT(1))
#define UHCI_TX_START_INT_ENA_V  0x1
#define UHCI_TX_START_INT_ENA_S  1
/* UHCI_RX_START_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to enable the interrupt of UHCI_RX_START_INT..*/
#define UHCI_RX_START_INT_ENA    (BIT(0))
#define UHCI_RX_START_INT_ENA_M  (BIT(0))
#define UHCI_RX_START_INT_ENA_V  0x1
#define UHCI_RX_START_INT_ENA_S  0

#define UHCI_INT_CLR_REG(i)          (REG_UHCI_BASE(i) + 0x10)
/* UHCI_APP_CTRL1_INT_CLR : WT ;bitpos:[8] ;default: 1'b0 ; */
/*description: Set this bit to clear the raw interrupt of UHCI_APP_CTRL1_INT..*/
#define UHCI_APP_CTRL1_INT_CLR    (BIT(8))
#define UHCI_APP_CTRL1_INT_CLR_M  (BIT(8))
#define UHCI_APP_CTRL1_INT_CLR_V  0x1
#define UHCI_APP_CTRL1_INT_CLR_S  8
/* UHCI_APP_CTRL0_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to clear the raw interrupt of UHCI_APP_CTRL0_INT..*/
#define UHCI_APP_CTRL0_INT_CLR    (BIT(7))
#define UHCI_APP_CTRL0_INT_CLR_M  (BIT(7))
#define UHCI_APP_CTRL0_INT_CLR_V  0x1
#define UHCI_APP_CTRL0_INT_CLR_S  7
/* UHCI_OUTLINK_EOF_ERR_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description: Set this bit to clear the raw interrupt of UHCI_OUT_EOF_INT..*/
#define UHCI_OUTLINK_EOF_ERR_INT_CLR    (BIT(6))
#define UHCI_OUTLINK_EOF_ERR_INT_CLR_M  (BIT(6))
#define UHCI_OUTLINK_EOF_ERR_INT_CLR_V  0x1
#define UHCI_OUTLINK_EOF_ERR_INT_CLR_S  6
/* UHCI_SEND_A_Q_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description: Set this bit to clear the raw interrupt of UHCI_SEND_A_REG_Q_INT..*/
#define UHCI_SEND_A_Q_INT_CLR    (BIT(5))
#define UHCI_SEND_A_Q_INT_CLR_M  (BIT(5))
#define UHCI_SEND_A_Q_INT_CLR_V  0x1
#define UHCI_SEND_A_Q_INT_CLR_S  5
/* UHCI_SEND_S_Q_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Set this bit to clear the raw interrupt of UHCI_SEND_S_REG_Q_INT..*/
#define UHCI_SEND_S_Q_INT_CLR    (BIT(4))
#define UHCI_SEND_S_Q_INT_CLR_M  (BIT(4))
#define UHCI_SEND_S_Q_INT_CLR_V  0x1
#define UHCI_SEND_S_Q_INT_CLR_S  4
/* UHCI_TX_HUNG_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to clear the raw interrupt of UHCI_TX_HUNG_INT..*/
#define UHCI_TX_HUNG_INT_CLR    (BIT(3))
#define UHCI_TX_HUNG_INT_CLR_M  (BIT(3))
#define UHCI_TX_HUNG_INT_CLR_V  0x1
#define UHCI_TX_HUNG_INT_CLR_S  3
/* UHCI_RX_HUNG_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to clear the raw interrupt of UHCI_RX_HUNG_INT..*/
#define UHCI_RX_HUNG_INT_CLR    (BIT(2))
#define UHCI_RX_HUNG_INT_CLR_M  (BIT(2))
#define UHCI_RX_HUNG_INT_CLR_V  0x1
#define UHCI_RX_HUNG_INT_CLR_S  2
/* UHCI_TX_START_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to clear the raw interrupt of UHCI_TX_START_INT..*/
#define UHCI_TX_START_INT_CLR    (BIT(1))
#define UHCI_TX_START_INT_CLR_M  (BIT(1))
#define UHCI_TX_START_INT_CLR_V  0x1
#define UHCI_TX_START_INT_CLR_S  1
/* UHCI_RX_START_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to clear the raw interrupt of UHCI_RX_START_INT..*/
#define UHCI_RX_START_INT_CLR    (BIT(0))
#define UHCI_RX_START_INT_CLR_M  (BIT(0))
#define UHCI_RX_START_INT_CLR_V  0x1
#define UHCI_RX_START_INT_CLR_S  0

#define UHCI_CONF1_REG(i)          (REG_UHCI_BASE(i) + 0x14)
/* UHCI_SW_START : WT ;bitpos:[8] ;default: 1'b0 ; */
/*description: Set this bit to transmit data packet if UCHI_ENCODE_STATE is ST_SW_WAIT..*/
#define UHCI_SW_START    (BIT(8))
#define UHCI_SW_START_M  (BIT(8))
#define UHCI_SW_START_V  0x1
#define UHCI_SW_START_S  8
/* UHCI_WAIT_SW_START : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to enable UHCI encoder transfer to ST_SW_WAIT status..*/
#define UHCI_WAIT_SW_START    (BIT(7))
#define UHCI_WAIT_SW_START_M  (BIT(7))
#define UHCI_WAIT_SW_START_V  0x1
#define UHCI_WAIT_SW_START_S  7
/* UHCI_TX_ACK_NUM_RE : R/W ;bitpos:[5] ;default: 1'b1 ; */
/*description: Set this bit to encode data packet with ACK when reliable data packet is ready..*/
#define UHCI_TX_ACK_NUM_RE    (BIT(5))
#define UHCI_TX_ACK_NUM_RE_M  (BIT(5))
#define UHCI_TX_ACK_NUM_RE_V  0x1
#define UHCI_TX_ACK_NUM_RE_S  5
/* UHCI_TX_CHECK_SUM_RE : R/W ;bitpos:[4] ;default: 1'b1 ; */
/*description: Set this bit to encode data packet with checksum..*/
#define UHCI_TX_CHECK_SUM_RE    (BIT(4))
#define UHCI_TX_CHECK_SUM_RE_M  (BIT(4))
#define UHCI_TX_CHECK_SUM_RE_V  0x1
#define UHCI_TX_CHECK_SUM_RE_S  4
/* UHCI_SAVE_HEAD : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to save data packet head when UHCI receive data..*/
#define UHCI_SAVE_HEAD    (BIT(3))
#define UHCI_SAVE_HEAD_M  (BIT(3))
#define UHCI_SAVE_HEAD_V  0x1
#define UHCI_SAVE_HEAD_S  3
/* UHCI_CRC_DISABLE : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to support CRC calculation, and data integrity check bit should 1..*/
#define UHCI_CRC_DISABLE    (BIT(2))
#define UHCI_CRC_DISABLE_M  (BIT(2))
#define UHCI_CRC_DISABLE_V  0x1
#define UHCI_CRC_DISABLE_S  2
/* UHCI_CHECK_SEQ_EN : R/W ;bitpos:[1] ;default: 1'b1 ; */
/*description: Set this bit to  enable sequence number check when receiving..*/
#define UHCI_CHECK_SEQ_EN    (BIT(1))
#define UHCI_CHECK_SEQ_EN_M  (BIT(1))
#define UHCI_CHECK_SEQ_EN_V  0x1
#define UHCI_CHECK_SEQ_EN_S  1
/* UHCI_CHECK_SUM_EN : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: Set this bit to enable head checksum check when receiving..*/
#define UHCI_CHECK_SUM_EN    (BIT(0))
#define UHCI_CHECK_SUM_EN_M  (BIT(0))
#define UHCI_CHECK_SUM_EN_V  0x1
#define UHCI_CHECK_SUM_EN_S  0

#define UHCI_STATE0_REG(i)          (REG_UHCI_BASE(i) + 0x18)
/* UHCI_DECODE_STATE : RO ;bitpos:[5:3] ;default: 3'b0 ; */
/*description: Indicates UHCI decoder status..*/
#define UHCI_DECODE_STATE    0x00000007
#define UHCI_DECODE_STATE_M  ((UHCI_DECODE_STATE_V)<<(UHCI_DECODE_STATE_S))
#define UHCI_DECODE_STATE_V  0x7
#define UHCI_DECODE_STATE_S  3
/* UHCI_RX_ERR_CAUSE : RO ;bitpos:[2:0] ;default: 3'b0 ; */
/*description: Indicates the error types when DMA receives the error frame. 3'b001: UHCI packet
 checksum error. 3'b010: UHCI packet sequence number error. 3'b011: UHCI packet
CRC bit error. 3'b100: find 0xC0, but received packet is uncompleted. 3'b101: 0x
C0 is not found, but received packet is completed. 3'b110: CRC check error..*/
#define UHCI_RX_ERR_CAUSE    0x00000007
#define UHCI_RX_ERR_CAUSE_M  ((UHCI_RX_ERR_CAUSE_V)<<(UHCI_RX_ERR_CAUSE_S))
#define UHCI_RX_ERR_CAUSE_V  0x7
#define UHCI_RX_ERR_CAUSE_S  0

#define UHCI_STATE1_REG(i)          (REG_UHCI_BASE(i) + 0x1C)
/* UHCI_ENCODE_STATE : RO ;bitpos:[2:0] ;default: 3'b0 ; */
/*description: Indicates UHCI encoder status..*/
#define UHCI_ENCODE_STATE    0x00000007
#define UHCI_ENCODE_STATE_M  ((UHCI_ENCODE_STATE_V)<<(UHCI_ENCODE_STATE_S))
#define UHCI_ENCODE_STATE_V  0x7
#define UHCI_ENCODE_STATE_S  0

#define UHCI_ESCAPE_CONF_REG(i)          (REG_UHCI_BASE(i) + 0x20)
/* UHCI_RX_13_ESC_EN : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to enable replacing 0x13 with special char when DMA receiving data..*/
#define UHCI_RX_13_ESC_EN    (BIT(7))
#define UHCI_RX_13_ESC_EN_M  (BIT(7))
#define UHCI_RX_13_ESC_EN_V  0x1
#define UHCI_RX_13_ESC_EN_S  7
/* UHCI_RX_11_ESC_EN : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: Set this bit to enable replacing 0x11 with special char when DMA receiving data..*/
#define UHCI_RX_11_ESC_EN    (BIT(6))
#define UHCI_RX_11_ESC_EN_M  (BIT(6))
#define UHCI_RX_11_ESC_EN_V  0x1
#define UHCI_RX_11_ESC_EN_S  6
/* UHCI_RX_DB_ESC_EN : R/W ;bitpos:[5] ;default: 1'b1 ; */
/*description: Set this bit to enable replacing 0xDB with special char when DMA receiving data..*/
#define UHCI_RX_DB_ESC_EN    (BIT(5))
#define UHCI_RX_DB_ESC_EN_M  (BIT(5))
#define UHCI_RX_DB_ESC_EN_V  0x1
#define UHCI_RX_DB_ESC_EN_S  5
/* UHCI_RX_C0_ESC_EN : R/W ;bitpos:[4] ;default: 1'b1 ; */
/*description: Set this bit to enable replacing 0xC0 with special char when DMA receiving data..*/
#define UHCI_RX_C0_ESC_EN    (BIT(4))
#define UHCI_RX_C0_ESC_EN_M  (BIT(4))
#define UHCI_RX_C0_ESC_EN_V  0x1
#define UHCI_RX_C0_ESC_EN_S  4
/* UHCI_TX_13_ESC_EN : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to enable resolve flow control char 0x13 when DMA receiving data..*/
#define UHCI_TX_13_ESC_EN    (BIT(3))
#define UHCI_TX_13_ESC_EN_M  (BIT(3))
#define UHCI_TX_13_ESC_EN_V  0x1
#define UHCI_TX_13_ESC_EN_S  3
/* UHCI_TX_11_ESC_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to enable resolve flow control char 0x11 when DMA receiving data..*/
#define UHCI_TX_11_ESC_EN    (BIT(2))
#define UHCI_TX_11_ESC_EN_M  (BIT(2))
#define UHCI_TX_11_ESC_EN_V  0x1
#define UHCI_TX_11_ESC_EN_S  2
/* UHCI_TX_DB_ESC_EN : R/W ;bitpos:[1] ;default: 1'b1 ; */
/*description: Set this bit to enable resolve char 0xDB when DMA receiving data..*/
#define UHCI_TX_DB_ESC_EN    (BIT(1))
#define UHCI_TX_DB_ESC_EN_M  (BIT(1))
#define UHCI_TX_DB_ESC_EN_V  0x1
#define UHCI_TX_DB_ESC_EN_S  1
/* UHCI_TX_C0_ESC_EN : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: Set this bit to enable resolve char 0xC0 when DMA receiving data..*/
#define UHCI_TX_C0_ESC_EN    (BIT(0))
#define UHCI_TX_C0_ESC_EN_M  (BIT(0))
#define UHCI_TX_C0_ESC_EN_V  0x1
#define UHCI_TX_C0_ESC_EN_S  0

#define UHCI_HUNG_CONF_REG(i)          (REG_UHCI_BASE(i) + 0x24)
/* UHCI_RXFIFO_TIMEOUT_ENA : R/W ;bitpos:[23] ;default: 1'b1 ; */
/*description: Set this bit to enable TX FIFO timeout when DMA sending data..*/
#define UHCI_RXFIFO_TIMEOUT_ENA    (BIT(23))
#define UHCI_RXFIFO_TIMEOUT_ENA_M  (BIT(23))
#define UHCI_RXFIFO_TIMEOUT_ENA_V  0x1
#define UHCI_RXFIFO_TIMEOUT_ENA_S  23
/* UHCI_RXFIFO_TIMEOUT_SHIFT : R/W ;bitpos:[22:20] ;default: 3'b0 ; */
/*description: Configures the maximum counter value..*/
#define UHCI_RXFIFO_TIMEOUT_SHIFT    0x00000007
#define UHCI_RXFIFO_TIMEOUT_SHIFT_M  ((UHCI_RXFIFO_TIMEOUT_SHIFT_V)<<(UHCI_RXFIFO_TIMEOUT_SHIFT_S))
#define UHCI_RXFIFO_TIMEOUT_SHIFT_V  0x7
#define UHCI_RXFIFO_TIMEOUT_SHIFT_S  20
/* UHCI_RXFIFO_TIMEOUT : R/W ;bitpos:[19:12] ;default: 8'h10 ; */
/*description: Stores the timeout value. DMA generates UHCI_TX_HUNG_INT for timeout when readin
g RAM data..*/
#define UHCI_RXFIFO_TIMEOUT    0x000000FF
#define UHCI_RXFIFO_TIMEOUT_M  ((UHCI_RXFIFO_TIMEOUT_V)<<(UHCI_RXFIFO_TIMEOUT_S))
#define UHCI_RXFIFO_TIMEOUT_V  0xFF
#define UHCI_RXFIFO_TIMEOUT_S  12
/* UHCI_TXFIFO_TIMEOUT_ENA : R/W ;bitpos:[11] ;default: 1'b1 ; */
/*description: Set this bit to enable TX FIFO timeout when receiving..*/
#define UHCI_TXFIFO_TIMEOUT_ENA    (BIT(11))
#define UHCI_TXFIFO_TIMEOUT_ENA_M  (BIT(11))
#define UHCI_TXFIFO_TIMEOUT_ENA_V  0x1
#define UHCI_TXFIFO_TIMEOUT_ENA_S  11
/* UHCI_TXFIFO_TIMEOUT_SHIFT : R/W ;bitpos:[10:8] ;default: 3'b0 ; */
/*description: Configures the maximum counter value..*/
#define UHCI_TXFIFO_TIMEOUT_SHIFT    0x00000007
#define UHCI_TXFIFO_TIMEOUT_SHIFT_M  ((UHCI_TXFIFO_TIMEOUT_SHIFT_V)<<(UHCI_TXFIFO_TIMEOUT_SHIFT_S))
#define UHCI_TXFIFO_TIMEOUT_SHIFT_V  0x7
#define UHCI_TXFIFO_TIMEOUT_SHIFT_S  8
/* UHCI_TXFIFO_TIMEOUT : R/W ;bitpos:[7:0] ;default: 8'h10 ; */
/*description: Stores the timeout value. DMA generates UHCI_TX_HUNG_INT for timeout when receiv
ing data..*/
#define UHCI_TXFIFO_TIMEOUT    0x000000FF
#define UHCI_TXFIFO_TIMEOUT_M  ((UHCI_TXFIFO_TIMEOUT_V)<<(UHCI_TXFIFO_TIMEOUT_S))
#define UHCI_TXFIFO_TIMEOUT_V  0xFF
#define UHCI_TXFIFO_TIMEOUT_S  0

#define UHCI_ACK_NUM_REG(i)          (REG_UHCI_BASE(i) + 0x28)
/* UHCI_ACK_NUM_LOAD : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to load the ACK value of UHCI_ACK_NUM..*/
#define UHCI_ACK_NUM_LOAD    (BIT(3))
#define UHCI_ACK_NUM_LOAD_M  (BIT(3))
#define UHCI_ACK_NUM_LOAD_V  0x1
#define UHCI_ACK_NUM_LOAD_S  3
/* UHCI_ACK_NUM : R/W ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Indicates the ACK number during software flow control..*/
#define UHCI_ACK_NUM    0x00000007
#define UHCI_ACK_NUM_M  ((UHCI_ACK_NUM_V)<<(UHCI_ACK_NUM_S))
#define UHCI_ACK_NUM_V  0x7
#define UHCI_ACK_NUM_S  0

#define UHCI_RX_HEAD_REG(i)          (REG_UHCI_BASE(i) + 0x2C)
/* UHCI_RX_HEAD : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Stores the head of received packet..*/
#define UHCI_RX_HEAD    0xFFFFFFFF
#define UHCI_RX_HEAD_M  ((UHCI_RX_HEAD_V)<<(UHCI_RX_HEAD_S))
#define UHCI_RX_HEAD_V  0xFFFFFFFF
#define UHCI_RX_HEAD_S  0

#define UHCI_QUICK_SENT_REG(i)          (REG_UHCI_BASE(i) + 0x30)
/* UHCI_ALWAYS_SEND_EN : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit to enable sending short packet with always_send mode..*/
#define UHCI_ALWAYS_SEND_EN    (BIT(7))
#define UHCI_ALWAYS_SEND_EN_M  (BIT(7))
#define UHCI_ALWAYS_SEND_EN_V  0x1
#define UHCI_ALWAYS_SEND_EN_S  7
/* UHCI_ALWAYS_SEND_NUM : R/W ;bitpos:[6:4] ;default: 3'h0 ; */
/*description: Configures always_send mode..*/
#define UHCI_ALWAYS_SEND_NUM    0x00000007
#define UHCI_ALWAYS_SEND_NUM_M  ((UHCI_ALWAYS_SEND_NUM_V)<<(UHCI_ALWAYS_SEND_NUM_S))
#define UHCI_ALWAYS_SEND_NUM_V  0x7
#define UHCI_ALWAYS_SEND_NUM_S  4
/* UHCI_SINGLE_SEND_EN : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to enable sending short packet with single_send mode..*/
#define UHCI_SINGLE_SEND_EN    (BIT(3))
#define UHCI_SINGLE_SEND_EN_M  (BIT(3))
#define UHCI_SINGLE_SEND_EN_V  0x1
#define UHCI_SINGLE_SEND_EN_S  3
/* UHCI_SINGLE_SEND_NUM : R/W ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Configures single_send mode..*/
#define UHCI_SINGLE_SEND_NUM    0x00000007
#define UHCI_SINGLE_SEND_NUM_M  ((UHCI_SINGLE_SEND_NUM_V)<<(UHCI_SINGLE_SEND_NUM_S))
#define UHCI_SINGLE_SEND_NUM_V  0x7
#define UHCI_SINGLE_SEND_NUM_S  0

#define UHCI_Q0_WORD0_REG(i)          (REG_UHCI_BASE(i) + 0x34)
/* UHCI_SEND_Q0_WORD0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q0_WORD0    0xFFFFFFFF
#define UHCI_SEND_Q0_WORD0_M  ((UHCI_SEND_Q0_WORD0_V)<<(UHCI_SEND_Q0_WORD0_S))
#define UHCI_SEND_Q0_WORD0_V  0xFFFFFFFF
#define UHCI_SEND_Q0_WORD0_S  0

#define UHCI_Q0_WORD1_REG(i)          (REG_UHCI_BASE(i) + 0x38)
/* UHCI_SEND_Q0_WORD1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q0_WORD1    0xFFFFFFFF
#define UHCI_SEND_Q0_WORD1_M  ((UHCI_SEND_Q0_WORD1_V)<<(UHCI_SEND_Q0_WORD1_S))
#define UHCI_SEND_Q0_WORD1_V  0xFFFFFFFF
#define UHCI_SEND_Q0_WORD1_S  0

#define UHCI_Q1_WORD0_REG(i)          (REG_UHCI_BASE(i) + 0x3C)
/* UHCI_SEND_Q1_WORD0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q1_WORD0    0xFFFFFFFF
#define UHCI_SEND_Q1_WORD0_M  ((UHCI_SEND_Q1_WORD0_V)<<(UHCI_SEND_Q1_WORD0_S))
#define UHCI_SEND_Q1_WORD0_V  0xFFFFFFFF
#define UHCI_SEND_Q1_WORD0_S  0

#define UHCI_Q1_WORD1_REG(i)          (REG_UHCI_BASE(i) + 0x40)
/* UHCI_SEND_Q1_WORD1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q1_WORD1    0xFFFFFFFF
#define UHCI_SEND_Q1_WORD1_M  ((UHCI_SEND_Q1_WORD1_V)<<(UHCI_SEND_Q1_WORD1_S))
#define UHCI_SEND_Q1_WORD1_V  0xFFFFFFFF
#define UHCI_SEND_Q1_WORD1_S  0

#define UHCI_Q2_WORD0_REG(i)          (REG_UHCI_BASE(i) + 0x44)
/* UHCI_SEND_Q2_WORD0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q2_WORD0    0xFFFFFFFF
#define UHCI_SEND_Q2_WORD0_M  ((UHCI_SEND_Q2_WORD0_V)<<(UHCI_SEND_Q2_WORD0_S))
#define UHCI_SEND_Q2_WORD0_V  0xFFFFFFFF
#define UHCI_SEND_Q2_WORD0_S  0

#define UHCI_Q2_WORD1_REG(i)          (REG_UHCI_BASE(i) + 0x48)
/* UHCI_SEND_Q2_WORD1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q2_WORD1    0xFFFFFFFF
#define UHCI_SEND_Q2_WORD1_M  ((UHCI_SEND_Q2_WORD1_V)<<(UHCI_SEND_Q2_WORD1_S))
#define UHCI_SEND_Q2_WORD1_V  0xFFFFFFFF
#define UHCI_SEND_Q2_WORD1_S  0

#define UHCI_Q3_WORD0_REG(i)          (REG_UHCI_BASE(i) + 0x4C)
/* UHCI_SEND_Q3_WORD0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q3_WORD0    0xFFFFFFFF
#define UHCI_SEND_Q3_WORD0_M  ((UHCI_SEND_Q3_WORD0_V)<<(UHCI_SEND_Q3_WORD0_S))
#define UHCI_SEND_Q3_WORD0_V  0xFFFFFFFF
#define UHCI_SEND_Q3_WORD0_S  0

#define UHCI_Q3_WORD1_REG(i)          (REG_UHCI_BASE(i) + 0x50)
/* UHCI_SEND_Q3_WORD1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q3_WORD1    0xFFFFFFFF
#define UHCI_SEND_Q3_WORD1_M  ((UHCI_SEND_Q3_WORD1_V)<<(UHCI_SEND_Q3_WORD1_S))
#define UHCI_SEND_Q3_WORD1_V  0xFFFFFFFF
#define UHCI_SEND_Q3_WORD1_S  0

#define UHCI_Q4_WORD0_REG(i)          (REG_UHCI_BASE(i) + 0x54)
/* UHCI_SEND_Q4_WORD0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q4_WORD0    0xFFFFFFFF
#define UHCI_SEND_Q4_WORD0_M  ((UHCI_SEND_Q4_WORD0_V)<<(UHCI_SEND_Q4_WORD0_S))
#define UHCI_SEND_Q4_WORD0_V  0xFFFFFFFF
#define UHCI_SEND_Q4_WORD0_S  0

#define UHCI_Q4_WORD1_REG(i)          (REG_UHCI_BASE(i) + 0x58)
/* UHCI_SEND_Q4_WORD1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q4_WORD1    0xFFFFFFFF
#define UHCI_SEND_Q4_WORD1_M  ((UHCI_SEND_Q4_WORD1_V)<<(UHCI_SEND_Q4_WORD1_S))
#define UHCI_SEND_Q4_WORD1_V  0xFFFFFFFF
#define UHCI_SEND_Q4_WORD1_S  0

#define UHCI_Q5_WORD0_REG(i)          (REG_UHCI_BASE(i) + 0x5C)
/* UHCI_SEND_Q5_WORD0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q5_WORD0    0xFFFFFFFF
#define UHCI_SEND_Q5_WORD0_M  ((UHCI_SEND_Q5_WORD0_V)<<(UHCI_SEND_Q5_WORD0_S))
#define UHCI_SEND_Q5_WORD0_V  0xFFFFFFFF
#define UHCI_SEND_Q5_WORD0_S  0

#define UHCI_Q5_WORD1_REG(i)          (REG_UHCI_BASE(i) + 0x60)
/* UHCI_SEND_Q5_WORD1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q5_WORD1    0xFFFFFFFF
#define UHCI_SEND_Q5_WORD1_M  ((UHCI_SEND_Q5_WORD1_V)<<(UHCI_SEND_Q5_WORD1_S))
#define UHCI_SEND_Q5_WORD1_V  0xFFFFFFFF
#define UHCI_SEND_Q5_WORD1_S  0

#define UHCI_Q6_WORD0_REG(i)          (REG_UHCI_BASE(i) + 0x64)
/* UHCI_SEND_Q6_WORD0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q6_WORD0    0xFFFFFFFF
#define UHCI_SEND_Q6_WORD0_M  ((UHCI_SEND_Q6_WORD0_V)<<(UHCI_SEND_Q6_WORD0_S))
#define UHCI_SEND_Q6_WORD0_V  0xFFFFFFFF
#define UHCI_SEND_Q6_WORD0_S  0

#define UHCI_Q6_WORD1_REG(i)          (REG_UHCI_BASE(i) + 0x68)
/* UHCI_SEND_Q6_WORD1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Serves as quick sending register in specified mode in UHCI_ALWAYS_SEND_NUM or UH
CI_SINGLE_SEND_NUM..*/
#define UHCI_SEND_Q6_WORD1    0xFFFFFFFF
#define UHCI_SEND_Q6_WORD1_M  ((UHCI_SEND_Q6_WORD1_V)<<(UHCI_SEND_Q6_WORD1_S))
#define UHCI_SEND_Q6_WORD1_V  0xFFFFFFFF
#define UHCI_SEND_Q6_WORD1_S  0

#define UHCI_ESC_CONF0_REG(i)          (REG_UHCI_BASE(i) + 0x6C)
/* UHCI_SEPER_ESC_CHAR1 : R/W ;bitpos:[23:16] ;default: 8'hdc ; */
/*description: Configures the second char of SLIP escape character, default value is 0xDC..*/
#define UHCI_SEPER_ESC_CHAR1    0x000000FF
#define UHCI_SEPER_ESC_CHAR1_M  ((UHCI_SEPER_ESC_CHAR1_V)<<(UHCI_SEPER_ESC_CHAR1_S))
#define UHCI_SEPER_ESC_CHAR1_V  0xFF
#define UHCI_SEPER_ESC_CHAR1_S  16
/* UHCI_SEPER_ESC_CHAR0 : R/W ;bitpos:[15:8] ;default: 8'hdb ; */
/*description: Configures the first char of SLIP escape character, default value is 0xDB..*/
#define UHCI_SEPER_ESC_CHAR0    0x000000FF
#define UHCI_SEPER_ESC_CHAR0_M  ((UHCI_SEPER_ESC_CHAR0_V)<<(UHCI_SEPER_ESC_CHAR0_S))
#define UHCI_SEPER_ESC_CHAR0_V  0xFF
#define UHCI_SEPER_ESC_CHAR0_S  8
/* UHCI_SEPER_CHAR : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures the delimiter for encoding, default value is 0xC0..*/
#define UHCI_SEPER_CHAR    0x000000FF
#define UHCI_SEPER_CHAR_M  ((UHCI_SEPER_CHAR_V)<<(UHCI_SEPER_CHAR_S))
#define UHCI_SEPER_CHAR_V  0xFF
#define UHCI_SEPER_CHAR_S  0

#define UHCI_ESC_CONF1_REG(i)          (REG_UHCI_BASE(i) + 0x70)
/* UHCI_ESC_SEQ0_CHAR1 : R/W ;bitpos:[23:16] ;default: 8'hdd ; */
/*description: Configures the second char of SLIP escape character, default value is 0xDD..*/
#define UHCI_ESC_SEQ0_CHAR1    0x000000FF
#define UHCI_ESC_SEQ0_CHAR1_M  ((UHCI_ESC_SEQ0_CHAR1_V)<<(UHCI_ESC_SEQ0_CHAR1_S))
#define UHCI_ESC_SEQ0_CHAR1_V  0xFF
#define UHCI_ESC_SEQ0_CHAR1_S  16
/* UHCI_ESC_SEQ0_CHAR0 : R/W ;bitpos:[15:8] ;default: 8'hdb ; */
/*description: Configures the first char of SLIP escape character, default value is 0xDB..*/
#define UHCI_ESC_SEQ0_CHAR0    0x000000FF
#define UHCI_ESC_SEQ0_CHAR0_M  ((UHCI_ESC_SEQ0_CHAR0_V)<<(UHCI_ESC_SEQ0_CHAR0_S))
#define UHCI_ESC_SEQ0_CHAR0_V  0xFF
#define UHCI_ESC_SEQ0_CHAR0_S  8
/* UHCI_ESC_SEQ0 : R/W ;bitpos:[7:0] ;default: 8'hdb ; */
/*description: Configures the char needing encoding, which is 0xDB as flow control char by defa
ult..*/
#define UHCI_ESC_SEQ0    0x000000FF
#define UHCI_ESC_SEQ0_M  ((UHCI_ESC_SEQ0_V)<<(UHCI_ESC_SEQ0_S))
#define UHCI_ESC_SEQ0_V  0xFF
#define UHCI_ESC_SEQ0_S  0

#define UHCI_ESC_CONF2_REG(i)          (REG_UHCI_BASE(i) + 0x74)
/* UHCI_ESC_SEQ1_CHAR1 : R/W ;bitpos:[23:16] ;default: 8'hde ; */
/*description: Configures the second char of SLIP escape character, default value is 0xDE..*/
#define UHCI_ESC_SEQ1_CHAR1    0x000000FF
#define UHCI_ESC_SEQ1_CHAR1_M  ((UHCI_ESC_SEQ1_CHAR1_V)<<(UHCI_ESC_SEQ1_CHAR1_S))
#define UHCI_ESC_SEQ1_CHAR1_V  0xFF
#define UHCI_ESC_SEQ1_CHAR1_S  16
/* UHCI_ESC_SEQ1_CHAR0 : R/W ;bitpos:[15:8] ;default: 8'hdb ; */
/*description: Configures the first char of SLIP escape character, default value is 0xDB..*/
#define UHCI_ESC_SEQ1_CHAR0    0x000000FF
#define UHCI_ESC_SEQ1_CHAR0_M  ((UHCI_ESC_SEQ1_CHAR0_V)<<(UHCI_ESC_SEQ1_CHAR0_S))
#define UHCI_ESC_SEQ1_CHAR0_V  0xFF
#define UHCI_ESC_SEQ1_CHAR0_S  8
/* UHCI_ESC_SEQ1 : R/W ;bitpos:[7:0] ;default: 8'h11 ; */
/*description: Configures the char needing encoding, which is 0x11 as flow control char by defa
ult..*/
#define UHCI_ESC_SEQ1    0x000000FF
#define UHCI_ESC_SEQ1_M  ((UHCI_ESC_SEQ1_V)<<(UHCI_ESC_SEQ1_S))
#define UHCI_ESC_SEQ1_V  0xFF
#define UHCI_ESC_SEQ1_S  0

#define UHCI_ESC_CONF3_REG(i)          (REG_UHCI_BASE(i) + 0x78)
/* UHCI_ESC_SEQ2_CHAR1 : R/W ;bitpos:[23:16] ;default: 8'hdf ; */
/*description: Configures the second char of SLIP escape character, default value is 0xDF..*/
#define UHCI_ESC_SEQ2_CHAR1    0x000000FF
#define UHCI_ESC_SEQ2_CHAR1_M  ((UHCI_ESC_SEQ2_CHAR1_V)<<(UHCI_ESC_SEQ2_CHAR1_S))
#define UHCI_ESC_SEQ2_CHAR1_V  0xFF
#define UHCI_ESC_SEQ2_CHAR1_S  16
/* UHCI_ESC_SEQ2_CHAR0 : R/W ;bitpos:[15:8] ;default: 8'hdb ; */
/*description: Configures the first char of SLIP escape character, default value is 0xDB..*/
#define UHCI_ESC_SEQ2_CHAR0    0x000000FF
#define UHCI_ESC_SEQ2_CHAR0_M  ((UHCI_ESC_SEQ2_CHAR0_V)<<(UHCI_ESC_SEQ2_CHAR0_S))
#define UHCI_ESC_SEQ2_CHAR0_V  0xFF
#define UHCI_ESC_SEQ2_CHAR0_S  8
/* UHCI_ESC_SEQ2 : R/W ;bitpos:[7:0] ;default: 8'h13 ; */
/*description: Configures the char needing encoding, which is 0x13 as flow control char by defa
ult..*/
#define UHCI_ESC_SEQ2    0x000000FF
#define UHCI_ESC_SEQ2_M  ((UHCI_ESC_SEQ2_V)<<(UHCI_ESC_SEQ2_S))
#define UHCI_ESC_SEQ2_V  0xFF
#define UHCI_ESC_SEQ2_S  0

#define UHCI_PKT_THRES_REG(i)          (REG_UHCI_BASE(i) + 0x7C)
/* UHCI_PKT_THRS : R/W ;bitpos:[12:0] ;default: 13'h80 ; */
/*description: Configures the data packet's maximum length when UHCI_HEAD_EN is 0..*/
#define UHCI_PKT_THRS    0x00001FFF
#define UHCI_PKT_THRS_M  ((UHCI_PKT_THRS_V)<<(UHCI_PKT_THRS_S))
#define UHCI_PKT_THRS_V  0x1FFF
#define UHCI_PKT_THRS_S  0

#define UHCI_DATE_REG(i)          (REG_UHCI_BASE(i) + 0x80)
/* UHCI_DATE : R/W ;bitpos:[31:0] ;default: 32'h2201100 ; */
/*description: Configures version..*/
#define UHCI_DATE    0xFFFFFFFF
#define UHCI_DATE_M  ((UHCI_DATE_V)<<(UHCI_DATE_S))
#define UHCI_DATE_V  0xFFFFFFFF
#define UHCI_DATE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_UHCI_REG_H_ */
