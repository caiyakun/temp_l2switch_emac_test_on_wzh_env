/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_UART_REG_H_
#define _SOC_UART_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define UART_FIFO_REG(i)          (REG_UART_BASE(i) + 0x0)
/* UART_RXFIFO_RD_BYTE : RO ;bitpos:[7:0] ;default: 8'b0 ; */
/*description: Represents the data UART $n read from FIFO.\\; Measurement unit: byte..*/
#define UART_RXFIFO_RD_BYTE    0xFFFFFFFF
#define UART_RXFIFO_RD_BYTE_M  ((UART_RXFIFO_RD_BYTE_V)<<(UART_RXFIFO_RD_BYTE_S))
#define UART_RXFIFO_RD_BYTE_V  0xFFFFFFFF
#define UART_RXFIFO_RD_BYTE_S  0

#define UART_INT_RAW_REG(i)          (REG_UART_BASE(i) + 0x4)
/* UART_WAKEUP_INT_RAW : R/WTC/SS ;bitpos:[19] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_WAKEUP_INT..*/
#define UART_WAKEUP_INT_RAW    (BIT(19))
#define UART_WAKEUP_INT_RAW_M  (BIT(19))
#define UART_WAKEUP_INT_RAW_V  0x1
#define UART_WAKEUP_INT_RAW_S  19
/* UART_AT_CMD_CHAR_DET_INT_RAW : R/WTC/SS ;bitpos:[18] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_AT_CMD_CHAR_DET_INT..*/
#define UART_AT_CMD_CHAR_DET_INT_RAW    (BIT(18))
#define UART_AT_CMD_CHAR_DET_INT_RAW_M  (BIT(18))
#define UART_AT_CMD_CHAR_DET_INT_RAW_V  0x1
#define UART_AT_CMD_CHAR_DET_INT_RAW_S  18
/* UART_RS485_CLASH_INT_RAW : R/WTC/SS ;bitpos:[17] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_RS485_CLASH_INT..*/
#define UART_RS485_CLASH_INT_RAW    (BIT(17))
#define UART_RS485_CLASH_INT_RAW_M  (BIT(17))
#define UART_RS485_CLASH_INT_RAW_V  0x1
#define UART_RS485_CLASH_INT_RAW_S  17
/* UART_RS485_FRM_ERR_INT_RAW : R/WTC/SS ;bitpos:[16] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_RS485_FRM_ERR_INT..*/
#define UART_RS485_FRM_ERR_INT_RAW    (BIT(16))
#define UART_RS485_FRM_ERR_INT_RAW_M  (BIT(16))
#define UART_RS485_FRM_ERR_INT_RAW_V  0x1
#define UART_RS485_FRM_ERR_INT_RAW_S  16
/* UART_RS485_PARITY_ERR_INT_RAW : R/WTC/SS ;bitpos:[15] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_RS485_PARITY_ERR_INT..*/
#define UART_RS485_PARITY_ERR_INT_RAW    (BIT(15))
#define UART_RS485_PARITY_ERR_INT_RAW_M  (BIT(15))
#define UART_RS485_PARITY_ERR_INT_RAW_V  0x1
#define UART_RS485_PARITY_ERR_INT_RAW_S  15
/* UART_TX_DONE_INT_RAW : R/WTC/SS ;bitpos:[14] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_TX_DONE_INT..*/
#define UART_TX_DONE_INT_RAW    (BIT(14))
#define UART_TX_DONE_INT_RAW_M  (BIT(14))
#define UART_TX_DONE_INT_RAW_V  0x1
#define UART_TX_DONE_INT_RAW_S  14
/* UART_TX_BRK_IDLE_DONE_INT_RAW : R/WTC/SS ;bitpos:[13] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_TX_BRK_IDLE_DONE_INT..*/
#define UART_TX_BRK_IDLE_DONE_INT_RAW    (BIT(13))
#define UART_TX_BRK_IDLE_DONE_INT_RAW_M  (BIT(13))
#define UART_TX_BRK_IDLE_DONE_INT_RAW_V  0x1
#define UART_TX_BRK_IDLE_DONE_INT_RAW_S  13
/* UART_TX_BRK_DONE_INT_RAW : R/WTC/SS ;bitpos:[12] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_TX_BRK_DONE_INT..*/
#define UART_TX_BRK_DONE_INT_RAW    (BIT(12))
#define UART_TX_BRK_DONE_INT_RAW_M  (BIT(12))
#define UART_TX_BRK_DONE_INT_RAW_V  0x1
#define UART_TX_BRK_DONE_INT_RAW_S  12
/* UART_GLITCH_DET_INT_RAW : R/WTC/SS ;bitpos:[11] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_GLITCH_DET_INT..*/
#define UART_GLITCH_DET_INT_RAW    (BIT(11))
#define UART_GLITCH_DET_INT_RAW_M  (BIT(11))
#define UART_GLITCH_DET_INT_RAW_V  0x1
#define UART_GLITCH_DET_INT_RAW_S  11
/* UART_SW_XOFF_INT_RAW : R/WTC/SS ;bitpos:[10] ;default: 1'b0 ; */
/*description: UART_SW_XOFF_INT..*/
#define UART_SW_XOFF_INT_RAW    (BIT(10))
#define UART_SW_XOFF_INT_RAW_M  (BIT(10))
#define UART_SW_XOFF_INT_RAW_V  0x1
#define UART_SW_XOFF_INT_RAW_S  10
/* UART_SW_XON_INT_RAW : R/WTC/SS ;bitpos:[9] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_SW_XON_INT..*/
#define UART_SW_XON_INT_RAW    (BIT(9))
#define UART_SW_XON_INT_RAW_M  (BIT(9))
#define UART_SW_XON_INT_RAW_V  0x1
#define UART_SW_XON_INT_RAW_S  9
/* UART_RXFIFO_TOUT_INT_RAW : R/WTC/SS ;bitpos:[8] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_RXFIFO_TOUT_INT..*/
#define UART_RXFIFO_TOUT_INT_RAW    (BIT(8))
#define UART_RXFIFO_TOUT_INT_RAW_M  (BIT(8))
#define UART_RXFIFO_TOUT_INT_RAW_V  0x1
#define UART_RXFIFO_TOUT_INT_RAW_S  8
/* UART_BRK_DET_INT_RAW : R/WTC/SS ;bitpos:[7] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_BRK_DET_INT..*/
#define UART_BRK_DET_INT_RAW    (BIT(7))
#define UART_BRK_DET_INT_RAW_M  (BIT(7))
#define UART_BRK_DET_INT_RAW_V  0x1
#define UART_BRK_DET_INT_RAW_S  7
/* UART_CTS_CHG_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_CTS_CHG_INT..*/
#define UART_CTS_CHG_INT_RAW    (BIT(6))
#define UART_CTS_CHG_INT_RAW_M  (BIT(6))
#define UART_CTS_CHG_INT_RAW_V  0x1
#define UART_CTS_CHG_INT_RAW_S  6
/* UART_DSR_CHG_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_DSR_CHG_INT..*/
#define UART_DSR_CHG_INT_RAW    (BIT(5))
#define UART_DSR_CHG_INT_RAW_M  (BIT(5))
#define UART_DSR_CHG_INT_RAW_V  0x1
#define UART_DSR_CHG_INT_RAW_S  5
/* UART_RXFIFO_OVF_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_RXFIFO_OVF_INT..*/
#define UART_RXFIFO_OVF_INT_RAW    (BIT(4))
#define UART_RXFIFO_OVF_INT_RAW_M  (BIT(4))
#define UART_RXFIFO_OVF_INT_RAW_V  0x1
#define UART_RXFIFO_OVF_INT_RAW_S  4
/* UART_FRM_ERR_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_FRM_ERR_INT..*/
#define UART_FRM_ERR_INT_RAW    (BIT(3))
#define UART_FRM_ERR_INT_RAW_M  (BIT(3))
#define UART_FRM_ERR_INT_RAW_V  0x1
#define UART_FRM_ERR_INT_RAW_S  3
/* UART_PARITY_ERR_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_PARITY_ERR_INT..*/
#define UART_PARITY_ERR_INT_RAW    (BIT(2))
#define UART_PARITY_ERR_INT_RAW_M  (BIT(2))
#define UART_PARITY_ERR_INT_RAW_V  0x1
#define UART_PARITY_ERR_INT_RAW_S  2
/* UART_TXFIFO_EMPTY_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b1 ; */
/*description: The raw interrupt status of UART_TXFIFO_EMPTY_INT..*/
#define UART_TXFIFO_EMPTY_INT_RAW    (BIT(1))
#define UART_TXFIFO_EMPTY_INT_RAW_M  (BIT(1))
#define UART_TXFIFO_EMPTY_INT_RAW_V  0x1
#define UART_TXFIFO_EMPTY_INT_RAW_S  1
/* UART_RXFIFO_FULL_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description: The raw interrupt status of UART_RXFIFO_FULL_INT..*/
#define UART_RXFIFO_FULL_INT_RAW    (BIT(0))
#define UART_RXFIFO_FULL_INT_RAW_M  (BIT(0))
#define UART_RXFIFO_FULL_INT_RAW_V  0x1
#define UART_RXFIFO_FULL_INT_RAW_S  0

#define UART_INT_ST_REG(i)          (REG_UART_BASE(i) + 0x8)
/* UART_WAKEUP_INT_ST : RO ;bitpos:[19] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_WAKEUP_INT..*/
#define UART_WAKEUP_INT_ST    (BIT(19))
#define UART_WAKEUP_INT_ST_M  (BIT(19))
#define UART_WAKEUP_INT_ST_V  0x1
#define UART_WAKEUP_INT_ST_S  19
/* UART_AT_CMD_CHAR_DET_INT_ST : RO ;bitpos:[18] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_AT_CMD_CHAR_DET_INT..*/
#define UART_AT_CMD_CHAR_DET_INT_ST    (BIT(18))
#define UART_AT_CMD_CHAR_DET_INT_ST_M  (BIT(18))
#define UART_AT_CMD_CHAR_DET_INT_ST_V  0x1
#define UART_AT_CMD_CHAR_DET_INT_ST_S  18
/* UART_RS485_CLASH_INT_ST : RO ;bitpos:[17] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_RS485_CLASH_INT..*/
#define UART_RS485_CLASH_INT_ST    (BIT(17))
#define UART_RS485_CLASH_INT_ST_M  (BIT(17))
#define UART_RS485_CLASH_INT_ST_V  0x1
#define UART_RS485_CLASH_INT_ST_S  17
/* UART_RS485_FRM_ERR_INT_ST : RO ;bitpos:[16] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_RS485_FRM_ERR_INT..*/
#define UART_RS485_FRM_ERR_INT_ST    (BIT(16))
#define UART_RS485_FRM_ERR_INT_ST_M  (BIT(16))
#define UART_RS485_FRM_ERR_INT_ST_V  0x1
#define UART_RS485_FRM_ERR_INT_ST_S  16
/* UART_RS485_PARITY_ERR_INT_ST : RO ;bitpos:[15] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_RS485_PARITY_ERR_INT..*/
#define UART_RS485_PARITY_ERR_INT_ST    (BIT(15))
#define UART_RS485_PARITY_ERR_INT_ST_M  (BIT(15))
#define UART_RS485_PARITY_ERR_INT_ST_V  0x1
#define UART_RS485_PARITY_ERR_INT_ST_S  15
/* UART_TX_DONE_INT_ST : RO ;bitpos:[14] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_TX_DONE_INT..*/
#define UART_TX_DONE_INT_ST    (BIT(14))
#define UART_TX_DONE_INT_ST_M  (BIT(14))
#define UART_TX_DONE_INT_ST_V  0x1
#define UART_TX_DONE_INT_ST_S  14
/* UART_TX_BRK_IDLE_DONE_INT_ST : RO ;bitpos:[13] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_TX_BRK_IDLE_DONE_INT..*/
#define UART_TX_BRK_IDLE_DONE_INT_ST    (BIT(13))
#define UART_TX_BRK_IDLE_DONE_INT_ST_M  (BIT(13))
#define UART_TX_BRK_IDLE_DONE_INT_ST_V  0x1
#define UART_TX_BRK_IDLE_DONE_INT_ST_S  13
/* UART_TX_BRK_DONE_INT_ST : RO ;bitpos:[12] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_TX_BRK_DONE_INT..*/
#define UART_TX_BRK_DONE_INT_ST    (BIT(12))
#define UART_TX_BRK_DONE_INT_ST_M  (BIT(12))
#define UART_TX_BRK_DONE_INT_ST_V  0x1
#define UART_TX_BRK_DONE_INT_ST_S  12
/* UART_GLITCH_DET_INT_ST : RO ;bitpos:[11] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_GLITCH_DET_INT..*/
#define UART_GLITCH_DET_INT_ST    (BIT(11))
#define UART_GLITCH_DET_INT_ST_M  (BIT(11))
#define UART_GLITCH_DET_INT_ST_V  0x1
#define UART_GLITCH_DET_INT_ST_S  11
/* UART_SW_XOFF_INT_ST : RO ;bitpos:[10] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_SW_XOFF_INT..*/
#define UART_SW_XOFF_INT_ST    (BIT(10))
#define UART_SW_XOFF_INT_ST_M  (BIT(10))
#define UART_SW_XOFF_INT_ST_V  0x1
#define UART_SW_XOFF_INT_ST_S  10
/* UART_SW_XON_INT_ST : RO ;bitpos:[9] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_SW_XON_INT..*/
#define UART_SW_XON_INT_ST    (BIT(9))
#define UART_SW_XON_INT_ST_M  (BIT(9))
#define UART_SW_XON_INT_ST_V  0x1
#define UART_SW_XON_INT_ST_S  9
/* UART_RXFIFO_TOUT_INT_ST : RO ;bitpos:[8] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_RXFIFO_TOUT_INT..*/
#define UART_RXFIFO_TOUT_INT_ST    (BIT(8))
#define UART_RXFIFO_TOUT_INT_ST_M  (BIT(8))
#define UART_RXFIFO_TOUT_INT_ST_V  0x1
#define UART_RXFIFO_TOUT_INT_ST_S  8
/* UART_BRK_DET_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_BRK_DET_INT..*/
#define UART_BRK_DET_INT_ST    (BIT(7))
#define UART_BRK_DET_INT_ST_M  (BIT(7))
#define UART_BRK_DET_INT_ST_V  0x1
#define UART_BRK_DET_INT_ST_S  7
/* UART_CTS_CHG_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_CTS_CHG_INT..*/
#define UART_CTS_CHG_INT_ST    (BIT(6))
#define UART_CTS_CHG_INT_ST_M  (BIT(6))
#define UART_CTS_CHG_INT_ST_V  0x1
#define UART_CTS_CHG_INT_ST_S  6
/* UART_DSR_CHG_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_DSR_CHG_INT..*/
#define UART_DSR_CHG_INT_ST    (BIT(5))
#define UART_DSR_CHG_INT_ST_M  (BIT(5))
#define UART_DSR_CHG_INT_ST_V  0x1
#define UART_DSR_CHG_INT_ST_S  5
/* UART_RXFIFO_OVF_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_RXFIFO_OVF_INT..*/
#define UART_RXFIFO_OVF_INT_ST    (BIT(4))
#define UART_RXFIFO_OVF_INT_ST_M  (BIT(4))
#define UART_RXFIFO_OVF_INT_ST_V  0x1
#define UART_RXFIFO_OVF_INT_ST_S  4
/* UART_FRM_ERR_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_FRM_ERR_INT..*/
#define UART_FRM_ERR_INT_ST    (BIT(3))
#define UART_FRM_ERR_INT_ST_M  (BIT(3))
#define UART_FRM_ERR_INT_ST_V  0x1
#define UART_FRM_ERR_INT_ST_S  3
/* UART_PARITY_ERR_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_PARITY_ERR_INT..*/
#define UART_PARITY_ERR_INT_ST    (BIT(2))
#define UART_PARITY_ERR_INT_ST_M  (BIT(2))
#define UART_PARITY_ERR_INT_ST_V  0x1
#define UART_PARITY_ERR_INT_ST_S  2
/* UART_TXFIFO_EMPTY_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_TXFIFO_EMPTY_INT..*/
#define UART_TXFIFO_EMPTY_INT_ST    (BIT(1))
#define UART_TXFIFO_EMPTY_INT_ST_M  (BIT(1))
#define UART_TXFIFO_EMPTY_INT_ST_V  0x1
#define UART_TXFIFO_EMPTY_INT_ST_S  1
/* UART_RXFIFO_FULL_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: The masked interrupt status of UART_RXFIFO_FULL_INT..*/
#define UART_RXFIFO_FULL_INT_ST    (BIT(0))
#define UART_RXFIFO_FULL_INT_ST_M  (BIT(0))
#define UART_RXFIFO_FULL_INT_ST_V  0x1
#define UART_RXFIFO_FULL_INT_ST_S  0

#define UART_INT_ENA_REG(i)          (REG_UART_BASE(i) + 0xC)
/* UART_WAKEUP_INT_ENA : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_WAKEUP_INT..*/
#define UART_WAKEUP_INT_ENA    (BIT(19))
#define UART_WAKEUP_INT_ENA_M  (BIT(19))
#define UART_WAKEUP_INT_ENA_V  0x1
#define UART_WAKEUP_INT_ENA_S  19
/* UART_AT_CMD_CHAR_DET_INT_ENA : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_AT_CMD_CHAR_DET_INT..*/
#define UART_AT_CMD_CHAR_DET_INT_ENA    (BIT(18))
#define UART_AT_CMD_CHAR_DET_INT_ENA_M  (BIT(18))
#define UART_AT_CMD_CHAR_DET_INT_ENA_V  0x1
#define UART_AT_CMD_CHAR_DET_INT_ENA_S  18
/* UART_RS485_CLASH_INT_ENA : R/W ;bitpos:[17] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_RS485_CLASH_INT..*/
#define UART_RS485_CLASH_INT_ENA    (BIT(17))
#define UART_RS485_CLASH_INT_ENA_M  (BIT(17))
#define UART_RS485_CLASH_INT_ENA_V  0x1
#define UART_RS485_CLASH_INT_ENA_S  17
/* UART_RS485_FRM_ERR_INT_ENA : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_RS485_FRM_ERR_INT..*/
#define UART_RS485_FRM_ERR_INT_ENA    (BIT(16))
#define UART_RS485_FRM_ERR_INT_ENA_M  (BIT(16))
#define UART_RS485_FRM_ERR_INT_ENA_V  0x1
#define UART_RS485_FRM_ERR_INT_ENA_S  16
/* UART_RS485_PARITY_ERR_INT_ENA : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_RS485_PARITY_ERR_INT..*/
#define UART_RS485_PARITY_ERR_INT_ENA    (BIT(15))
#define UART_RS485_PARITY_ERR_INT_ENA_M  (BIT(15))
#define UART_RS485_PARITY_ERR_INT_ENA_V  0x1
#define UART_RS485_PARITY_ERR_INT_ENA_S  15
/* UART_TX_DONE_INT_ENA : R/W ;bitpos:[14] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_TX_DONE_INT..*/
#define UART_TX_DONE_INT_ENA    (BIT(14))
#define UART_TX_DONE_INT_ENA_M  (BIT(14))
#define UART_TX_DONE_INT_ENA_V  0x1
#define UART_TX_DONE_INT_ENA_S  14
/* UART_TX_BRK_IDLE_DONE_INT_ENA : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_TX_BRK_IDLE_DONE_INT..*/
#define UART_TX_BRK_IDLE_DONE_INT_ENA    (BIT(13))
#define UART_TX_BRK_IDLE_DONE_INT_ENA_M  (BIT(13))
#define UART_TX_BRK_IDLE_DONE_INT_ENA_V  0x1
#define UART_TX_BRK_IDLE_DONE_INT_ENA_S  13
/* UART_TX_BRK_DONE_INT_ENA : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_TX_BRK_DONE_INT..*/
#define UART_TX_BRK_DONE_INT_ENA    (BIT(12))
#define UART_TX_BRK_DONE_INT_ENA_M  (BIT(12))
#define UART_TX_BRK_DONE_INT_ENA_V  0x1
#define UART_TX_BRK_DONE_INT_ENA_S  12
/* UART_GLITCH_DET_INT_ENA : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_GLITCH_DET_INT..*/
#define UART_GLITCH_DET_INT_ENA    (BIT(11))
#define UART_GLITCH_DET_INT_ENA_M  (BIT(11))
#define UART_GLITCH_DET_INT_ENA_V  0x1
#define UART_GLITCH_DET_INT_ENA_S  11
/* UART_SW_XOFF_INT_ENA : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_SW_XOFF_INT..*/
#define UART_SW_XOFF_INT_ENA    (BIT(10))
#define UART_SW_XOFF_INT_ENA_M  (BIT(10))
#define UART_SW_XOFF_INT_ENA_V  0x1
#define UART_SW_XOFF_INT_ENA_S  10
/* UART_SW_XON_INT_ENA : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_SW_XON_INT..*/
#define UART_SW_XON_INT_ENA    (BIT(9))
#define UART_SW_XON_INT_ENA_M  (BIT(9))
#define UART_SW_XON_INT_ENA_V  0x1
#define UART_SW_XON_INT_ENA_S  9
/* UART_RXFIFO_TOUT_INT_ENA : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_RXFIFO_TOUT_INT..*/
#define UART_RXFIFO_TOUT_INT_ENA    (BIT(8))
#define UART_RXFIFO_TOUT_INT_ENA_M  (BIT(8))
#define UART_RXFIFO_TOUT_INT_ENA_V  0x1
#define UART_RXFIFO_TOUT_INT_ENA_S  8
/* UART_BRK_DET_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_BRK_DET_INT..*/
#define UART_BRK_DET_INT_ENA    (BIT(7))
#define UART_BRK_DET_INT_ENA_M  (BIT(7))
#define UART_BRK_DET_INT_ENA_V  0x1
#define UART_BRK_DET_INT_ENA_S  7
/* UART_CTS_CHG_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_CTS_CHG_INT..*/
#define UART_CTS_CHG_INT_ENA    (BIT(6))
#define UART_CTS_CHG_INT_ENA_M  (BIT(6))
#define UART_CTS_CHG_INT_ENA_V  0x1
#define UART_CTS_CHG_INT_ENA_S  6
/* UART_DSR_CHG_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_DSR_CHG_INT..*/
#define UART_DSR_CHG_INT_ENA    (BIT(5))
#define UART_DSR_CHG_INT_ENA_M  (BIT(5))
#define UART_DSR_CHG_INT_ENA_V  0x1
#define UART_DSR_CHG_INT_ENA_S  5
/* UART_RXFIFO_OVF_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_RXFIFO_OVF_INT..*/
#define UART_RXFIFO_OVF_INT_ENA    (BIT(4))
#define UART_RXFIFO_OVF_INT_ENA_M  (BIT(4))
#define UART_RXFIFO_OVF_INT_ENA_V  0x1
#define UART_RXFIFO_OVF_INT_ENA_S  4
/* UART_FRM_ERR_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_FRM_ERR_INT..*/
#define UART_FRM_ERR_INT_ENA    (BIT(3))
#define UART_FRM_ERR_INT_ENA_M  (BIT(3))
#define UART_FRM_ERR_INT_ENA_V  0x1
#define UART_FRM_ERR_INT_ENA_S  3
/* UART_PARITY_ERR_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_PARITY_ERR_INT..*/
#define UART_PARITY_ERR_INT_ENA    (BIT(2))
#define UART_PARITY_ERR_INT_ENA_M  (BIT(2))
#define UART_PARITY_ERR_INT_ENA_V  0x1
#define UART_PARITY_ERR_INT_ENA_S  2
/* UART_TXFIFO_EMPTY_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_TXFIFO_EMPTY_INT..*/
#define UART_TXFIFO_EMPTY_INT_ENA    (BIT(1))
#define UART_TXFIFO_EMPTY_INT_ENA_M  (BIT(1))
#define UART_TXFIFO_EMPTY_INT_ENA_V  0x1
#define UART_TXFIFO_EMPTY_INT_ENA_S  1
/* UART_RXFIFO_FULL_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Write 1 to enable UART_RXFIFO_FULL_INT..*/
#define UART_RXFIFO_FULL_INT_ENA    (BIT(0))
#define UART_RXFIFO_FULL_INT_ENA_M  (BIT(0))
#define UART_RXFIFO_FULL_INT_ENA_V  0x1
#define UART_RXFIFO_FULL_INT_ENA_S  0

#define UART_INT_CLR_REG(i)          (REG_UART_BASE(i) + 0x10)
/* UART_WAKEUP_INT_CLR : WT ;bitpos:[19] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_WAKEUP_INT..*/
#define UART_WAKEUP_INT_CLR    (BIT(19))
#define UART_WAKEUP_INT_CLR_M  (BIT(19))
#define UART_WAKEUP_INT_CLR_V  0x1
#define UART_WAKEUP_INT_CLR_S  19
/* UART_AT_CMD_CHAR_DET_INT_CLR : WT ;bitpos:[18] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_AT_CMD_CHAR_DET_INT..*/
#define UART_AT_CMD_CHAR_DET_INT_CLR    (BIT(18))
#define UART_AT_CMD_CHAR_DET_INT_CLR_M  (BIT(18))
#define UART_AT_CMD_CHAR_DET_INT_CLR_V  0x1
#define UART_AT_CMD_CHAR_DET_INT_CLR_S  18
/* UART_RS485_CLASH_INT_CLR : WT ;bitpos:[17] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_RS485_CLASH_INT..*/
#define UART_RS485_CLASH_INT_CLR    (BIT(17))
#define UART_RS485_CLASH_INT_CLR_M  (BIT(17))
#define UART_RS485_CLASH_INT_CLR_V  0x1
#define UART_RS485_CLASH_INT_CLR_S  17
/* UART_RS485_FRM_ERR_INT_CLR : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_RS485_FRM_ERR_INT..*/
#define UART_RS485_FRM_ERR_INT_CLR    (BIT(16))
#define UART_RS485_FRM_ERR_INT_CLR_M  (BIT(16))
#define UART_RS485_FRM_ERR_INT_CLR_V  0x1
#define UART_RS485_FRM_ERR_INT_CLR_S  16
/* UART_RS485_PARITY_ERR_INT_CLR : WT ;bitpos:[15] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_RS485_PARITY_ERR_INT..*/
#define UART_RS485_PARITY_ERR_INT_CLR    (BIT(15))
#define UART_RS485_PARITY_ERR_INT_CLR_M  (BIT(15))
#define UART_RS485_PARITY_ERR_INT_CLR_V  0x1
#define UART_RS485_PARITY_ERR_INT_CLR_S  15
/* UART_TX_DONE_INT_CLR : WT ;bitpos:[14] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_TX_DONE_INT..*/
#define UART_TX_DONE_INT_CLR    (BIT(14))
#define UART_TX_DONE_INT_CLR_M  (BIT(14))
#define UART_TX_DONE_INT_CLR_V  0x1
#define UART_TX_DONE_INT_CLR_S  14
/* UART_TX_BRK_IDLE_DONE_INT_CLR : WT ;bitpos:[13] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_TX_BRK_IDLE_DONE_INT..*/
#define UART_TX_BRK_IDLE_DONE_INT_CLR    (BIT(13))
#define UART_TX_BRK_IDLE_DONE_INT_CLR_M  (BIT(13))
#define UART_TX_BRK_IDLE_DONE_INT_CLR_V  0x1
#define UART_TX_BRK_IDLE_DONE_INT_CLR_S  13
/* UART_TX_BRK_DONE_INT_CLR : WT ;bitpos:[12] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_TX_BRK_DONE_INT..*/
#define UART_TX_BRK_DONE_INT_CLR    (BIT(12))
#define UART_TX_BRK_DONE_INT_CLR_M  (BIT(12))
#define UART_TX_BRK_DONE_INT_CLR_V  0x1
#define UART_TX_BRK_DONE_INT_CLR_S  12
/* UART_GLITCH_DET_INT_CLR : WT ;bitpos:[11] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_GLITCH_DET_INT..*/
#define UART_GLITCH_DET_INT_CLR    (BIT(11))
#define UART_GLITCH_DET_INT_CLR_M  (BIT(11))
#define UART_GLITCH_DET_INT_CLR_V  0x1
#define UART_GLITCH_DET_INT_CLR_S  11
/* UART_SW_XOFF_INT_CLR : WT ;bitpos:[10] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_SW_XOFF_INT..*/
#define UART_SW_XOFF_INT_CLR    (BIT(10))
#define UART_SW_XOFF_INT_CLR_M  (BIT(10))
#define UART_SW_XOFF_INT_CLR_V  0x1
#define UART_SW_XOFF_INT_CLR_S  10
/* UART_SW_XON_INT_CLR : WT ;bitpos:[9] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_SW_XON_INT..*/
#define UART_SW_XON_INT_CLR    (BIT(9))
#define UART_SW_XON_INT_CLR_M  (BIT(9))
#define UART_SW_XON_INT_CLR_V  0x1
#define UART_SW_XON_INT_CLR_S  9
/* UART_RXFIFO_TOUT_INT_CLR : WT ;bitpos:[8] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_RXFIFO_TOUT_INT..*/
#define UART_RXFIFO_TOUT_INT_CLR    (BIT(8))
#define UART_RXFIFO_TOUT_INT_CLR_M  (BIT(8))
#define UART_RXFIFO_TOUT_INT_CLR_V  0x1
#define UART_RXFIFO_TOUT_INT_CLR_S  8
/* UART_BRK_DET_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_BRK_DET_INT..*/
#define UART_BRK_DET_INT_CLR    (BIT(7))
#define UART_BRK_DET_INT_CLR_M  (BIT(7))
#define UART_BRK_DET_INT_CLR_V  0x1
#define UART_BRK_DET_INT_CLR_S  7
/* UART_CTS_CHG_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_CTS_CHG_INT..*/
#define UART_CTS_CHG_INT_CLR    (BIT(6))
#define UART_CTS_CHG_INT_CLR_M  (BIT(6))
#define UART_CTS_CHG_INT_CLR_V  0x1
#define UART_CTS_CHG_INT_CLR_S  6
/* UART_DSR_CHG_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_DSR_CHG_INT..*/
#define UART_DSR_CHG_INT_CLR    (BIT(5))
#define UART_DSR_CHG_INT_CLR_M  (BIT(5))
#define UART_DSR_CHG_INT_CLR_V  0x1
#define UART_DSR_CHG_INT_CLR_S  5
/* UART_RXFIFO_OVF_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_RXFIFO_OVF_INT..*/
#define UART_RXFIFO_OVF_INT_CLR    (BIT(4))
#define UART_RXFIFO_OVF_INT_CLR_M  (BIT(4))
#define UART_RXFIFO_OVF_INT_CLR_V  0x1
#define UART_RXFIFO_OVF_INT_CLR_S  4
/* UART_FRM_ERR_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_FRM_ERR_INT..*/
#define UART_FRM_ERR_INT_CLR    (BIT(3))
#define UART_FRM_ERR_INT_CLR_M  (BIT(3))
#define UART_FRM_ERR_INT_CLR_V  0x1
#define UART_FRM_ERR_INT_CLR_S  3
/* UART_PARITY_ERR_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_PARITY_ERR_INT..*/
#define UART_PARITY_ERR_INT_CLR    (BIT(2))
#define UART_PARITY_ERR_INT_CLR_M  (BIT(2))
#define UART_PARITY_ERR_INT_CLR_V  0x1
#define UART_PARITY_ERR_INT_CLR_S  2
/* UART_TXFIFO_EMPTY_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_TXFIFO_EMPTY_INT..*/
#define UART_TXFIFO_EMPTY_INT_CLR    (BIT(1))
#define UART_TXFIFO_EMPTY_INT_CLR_M  (BIT(1))
#define UART_TXFIFO_EMPTY_INT_CLR_V  0x1
#define UART_TXFIFO_EMPTY_INT_CLR_S  1
/* UART_RXFIFO_FULL_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: Write 1 to clear UART_RXFIFO_FULL_INT..*/
#define UART_RXFIFO_FULL_INT_CLR    (BIT(0))
#define UART_RXFIFO_FULL_INT_CLR_M  (BIT(0))
#define UART_RXFIFO_FULL_INT_CLR_V  0x1
#define UART_RXFIFO_FULL_INT_CLR_S  0

#define UART_CLKDIV_SYNC_REG(i)          (REG_UART_BASE(i) + 0x14)
/* UART_CLKDIV_FRAG : R/W ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: Configures the fractional part of the divisor for baud rate generation..*/
#define UART_CLKDIV_FRAG    0x0000000F
#define UART_CLKDIV_FRAG_M  ((UART_CLKDIV_FRAG_V)<<(UART_CLKDIV_FRAG_S))
#define UART_CLKDIV_FRAG_V  0xF
#define UART_CLKDIV_FRAG_S  20
/* UART_CLKDIV : R/W ;bitpos:[11:0] ;default: 12'h2b6 ; */
/*description: Configures the integral part of the divisor for baud rate generation..*/
#define UART_CLKDIV    0x00000FFF
#define UART_CLKDIV_M  ((UART_CLKDIV_V)<<(UART_CLKDIV_S))
#define UART_CLKDIV_V  0xFFF
#define UART_CLKDIV_S  0

#define UART_RX_FILT_REG(i)          (REG_UART_BASE(i) + 0x18)
/* UART_GLITCH_FILT_EN : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: Configures whether or not to enable RX signal filter.\\; 0: Disable\\; 1: Enable.*/
#define UART_GLITCH_FILT_EN    (BIT(8))
#define UART_GLITCH_FILT_EN_M  (BIT(8))
#define UART_GLITCH_FILT_EN_V  0x1
#define UART_GLITCH_FILT_EN_S  8
/* UART_GLITCH_FILT : R/W ;bitpos:[7:0] ;default: 8'h8 ; */
/*description: Configures the width of a pulse to be filtered.\\Measurement unit: UART Core's c
lock cycle.\\Pulses whose width is lower than this value will be ignored..*/
#define UART_GLITCH_FILT    0x000000FF
#define UART_GLITCH_FILT_M  ((UART_GLITCH_FILT_V)<<(UART_GLITCH_FILT_S))
#define UART_GLITCH_FILT_V  0xFF
#define UART_GLITCH_FILT_S  0

#define UART_STATUS_REG(i)          (REG_UART_BASE(i) + 0x1C)
/* UART_TXD : RO ;bitpos:[31] ;default: 1'h1 ; */
/*description: Represents the  level of the internal UART TXD signal..*/
#define UART_TXD    (BIT(31))
#define UART_TXD_M  (BIT(31))
#define UART_TXD_V  0x1
#define UART_TXD_S  31
/* UART_RTSN : RO ;bitpos:[30] ;default: 1'b1 ; */
/*description: Represents the level of the internal UART RTS signal..*/
#define UART_RTSN    (BIT(30))
#define UART_RTSN_M  (BIT(30))
#define UART_RTSN_V  0x1
#define UART_RTSN_S  30
/* UART_DTRN : RO ;bitpos:[29] ;default: 1'b1 ; */
/*description: Represents the level of the internal UART DTR signal..*/
#define UART_DTRN    (BIT(29))
#define UART_DTRN_M  (BIT(29))
#define UART_DTRN_V  0x1
#define UART_DTRN_S  29
/* UART_TXFIFO_CNT : RO ;bitpos:[23:16] ;default: 8'b0 ; */
/*description: Represents the number of valid data bytes in RX FIFO..*/
#define UART_TXFIFO_CNT    0x000000FF
#define UART_TXFIFO_CNT_M  ((UART_TXFIFO_CNT_V)<<(UART_TXFIFO_CNT_S))
#define UART_TXFIFO_CNT_V  0xFF
#define UART_TXFIFO_CNT_S  16
/* UART_RXD : RO ;bitpos:[15] ;default: 1'b1 ; */
/*description: Represents the  level of the internal UART RXD signal..*/
#define UART_RXD    (BIT(15))
#define UART_RXD_M  (BIT(15))
#define UART_RXD_V  0x1
#define UART_RXD_S  15
/* UART_CTSN : RO ;bitpos:[14] ;default: 1'b1 ; */
/*description: Represents the level of the internal UART CTS signal..*/
#define UART_CTSN    (BIT(14))
#define UART_CTSN_M  (BIT(14))
#define UART_CTSN_V  0x1
#define UART_CTSN_S  14
/* UART_DSRN : RO ;bitpos:[13] ;default: 1'b0 ; */
/*description: Represents the level of the internal UART DSR signal..*/
#define UART_DSRN    (BIT(13))
#define UART_DSRN_M  (BIT(13))
#define UART_DSRN_V  0x1
#define UART_DSRN_S  13
/* UART_RXFIFO_CNT : RO ;bitpos:[7:0] ;default: 8'b0 ; */
/*description: Represents the number of valid data bytes in RX FIFO..*/
#define UART_RXFIFO_CNT    0x000000FF
#define UART_RXFIFO_CNT_M  ((UART_RXFIFO_CNT_V)<<(UART_RXFIFO_CNT_S))
#define UART_RXFIFO_CNT_V  0xFF
#define UART_RXFIFO_CNT_S  0

#define UART_CONF0_SYNC_REG(i)          (REG_UART_BASE(i) + 0x20)
/* UART_TXFIFO_RST : R/W ;bitpos:[23] ;default: 1'h0 ; */
/*description: Configures whether or not to reset the UART TX FIFO.\\; 0: Not reset\\; 1: Reset
\\.*/
#define UART_TXFIFO_RST    (BIT(23))
#define UART_TXFIFO_RST_M  (BIT(23))
#define UART_TXFIFO_RST_V  0x1
#define UART_TXFIFO_RST_S  23
/* UART_RXFIFO_RST : R/W ;bitpos:[22] ;default: 1'h0 ; */
/*description: Configures whether or not to reset the UART RX FIFO.\\; 0: Not reset\\; 1: Reset
\\.*/
#define UART_RXFIFO_RST    (BIT(22))
#define UART_RXFIFO_RST_M  (BIT(22))
#define UART_RXFIFO_RST_V  0x1
#define UART_RXFIFO_RST_S  22
/* UART_SW_RTS : R/W ;bitpos:[21] ;default: 1'b0 ; */
/*description: Configures the RTS signal used in software flow control.\\; 0: The UART transmit
ter is allowed to send data.\\; 1: The UART transmitted is not allowed to send d
ata.\\.*/
#define UART_SW_RTS    (BIT(21))
#define UART_SW_RTS_M  (BIT(21))
#define UART_SW_RTS_V  0x1
#define UART_SW_RTS_S  21
/* UART_MEM_CLK_EN : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Configures whether or not to enable clock gating for UART memory.\\; 0: Disable\
\; 1: Enable\\.*/
#define UART_MEM_CLK_EN    (BIT(20))
#define UART_MEM_CLK_EN_M  (BIT(20))
#define UART_MEM_CLK_EN_V  0x1
#define UART_MEM_CLK_EN_S  20
/* UART_AUTOBAUD_EN : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: Configures whether or not to enable baud rate detection.\\; 0: Disable\\; 1: Ena
ble\\.*/
#define UART_AUTOBAUD_EN    (BIT(19))
#define UART_AUTOBAUD_EN_M  (BIT(19))
#define UART_AUTOBAUD_EN_V  0x1
#define UART_AUTOBAUD_EN_S  19
/* UART_ERR_WR_MASK : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: Configures whether or not to store the received data with errors into FIFO.\\; 0
: Store\\; 1: Not store\\.*/
#define UART_ERR_WR_MASK    (BIT(18))
#define UART_ERR_WR_MASK_M  (BIT(18))
#define UART_ERR_WR_MASK_V  0x1
#define UART_ERR_WR_MASK_S  18
/* UART_DIS_RX_DAT_OVF : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Configures whether or not to disable data overflow detection for the UART receiv
er.\\; 0: Enable\\; 1: Disable\\.*/
#define UART_DIS_RX_DAT_OVF    (BIT(17))
#define UART_DIS_RX_DAT_OVF_M  (BIT(17))
#define UART_DIS_RX_DAT_OVF_V  0x1
#define UART_DIS_RX_DAT_OVF_S  17
/* UART_TXD_INV : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the level of UART TXD signal.\\; 0: Not inve
rt\\; 1: Invert\\.*/
#define UART_TXD_INV    (BIT(16))
#define UART_TXD_INV_M  (BIT(16))
#define UART_TXD_INV_V  0x1
#define UART_TXD_INV_S  16
/* UART_RXD_INV : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the level of UART RXD signal.\\; 0: Not inve
rt\\; 1: Invert\\.*/
#define UART_RXD_INV    (BIT(15))
#define UART_RXD_INV_M  (BIT(15))
#define UART_RXD_INV_V  0x1
#define UART_RXD_INV_S  15
/* UART_IRDA_EN : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: Configures whether or not to enable IrDA protocol.\\; 0: Disable\\; 1: Enable\\.*/
#define UART_IRDA_EN    (BIT(14))
#define UART_IRDA_EN_M  (BIT(14))
#define UART_IRDA_EN_V  0x1
#define UART_IRDA_EN_S  14
/* UART_TX_FLOW_EN : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: Configures whether or not to enable flow control for the transmitter.\\; 0: Disa
ble\\; 1: Enable\\.*/
#define UART_TX_FLOW_EN    (BIT(13))
#define UART_TX_FLOW_EN_M  (BIT(13))
#define UART_TX_FLOW_EN_V  0x1
#define UART_TX_FLOW_EN_S  13
/* UART_LOOPBACK : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: Configures whether or not to enable UART loopback test.\\; 0: Disable\\; 1: Enab
le\\.*/
#define UART_LOOPBACK    (BIT(12))
#define UART_LOOPBACK_M  (BIT(12))
#define UART_LOOPBACK_V  0x1
#define UART_LOOPBACK_S  12
/* UART_IRDA_RX_INV : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: Configures whether or not to invert the level of the IrDA receiver.\\; 0: Not in
vert\\; 1: Invert\\.*/
#define UART_IRDA_RX_INV    (BIT(11))
#define UART_IRDA_RX_INV_M  (BIT(11))
#define UART_IRDA_RX_INV_V  0x1
#define UART_IRDA_RX_INV_S  11
/* UART_IRDA_TX_INV : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: Configures whether or not to invert the level of the IrDA transmitter.\\; 0: Not
 invert\\; 1: Invert\\.*/
#define UART_IRDA_TX_INV    (BIT(10))
#define UART_IRDA_TX_INV_M  (BIT(10))
#define UART_IRDA_TX_INV_V  0x1
#define UART_IRDA_TX_INV_S  10
/* UART_IRDA_WCTL : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: Configures the 11th bit of the IrDA transmitter.\\; 0: This bit is 0.\\; 1: This
 bit is the same as the 10th bit.\\.*/
#define UART_IRDA_WCTL    (BIT(9))
#define UART_IRDA_WCTL_M  (BIT(9))
#define UART_IRDA_WCTL_V  0x1
#define UART_IRDA_WCTL_S  9
/* UART_IRDA_TX_EN : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the IrDA transmitter.\\; 0: Disable\\; 1: En
able\\.*/
#define UART_IRDA_TX_EN    (BIT(8))
#define UART_IRDA_TX_EN_M  (BIT(8))
#define UART_IRDA_TX_EN_V  0x1
#define UART_IRDA_TX_EN_S  8
/* UART_IRDA_DPLX : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Configures whether or not to enable IrDA loopback test.\\; 0: Disable\\; 1: Enab
le\\.*/
#define UART_IRDA_DPLX    (BIT(7))
#define UART_IRDA_DPLX_M  (BIT(7))
#define UART_IRDA_DPLX_V  0x1
#define UART_IRDA_DPLX_S  7
/* UART_TXD_BRK : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: Configures whether or not to send NULL characters when finishing data transmissi
on.\\; 0: Not send\\; 1: Send\\.*/
#define UART_TXD_BRK    (BIT(6))
#define UART_TXD_BRK_M  (BIT(6))
#define UART_TXD_BRK_V  0x1
#define UART_TXD_BRK_S  6
/* UART_STOP_BIT_NUM : R/W ;bitpos:[5:4] ;default: 2'd1 ; */
/*description: Configures the number of stop bits.\\; 0: Invalid. No effect\\; 1: 1 bits\\; 2:
1.5 bits\\; 3: 2 bits\\.*/
#define UART_STOP_BIT_NUM    0x00000003
#define UART_STOP_BIT_NUM_M  ((UART_STOP_BIT_NUM_V)<<(UART_STOP_BIT_NUM_S))
#define UART_STOP_BIT_NUM_V  0x3
#define UART_STOP_BIT_NUM_S  4
/* UART_BIT_NUM : R/W ;bitpos:[3:2] ;default: 2'd3 ; */
/*description: Configures the number of data bits.\\; 0: 5 bits\\; 1: 6 bits\\; 2: 7 bits\\; 3:
 8 bits\\.*/
#define UART_BIT_NUM    0x00000003
#define UART_BIT_NUM_M  ((UART_BIT_NUM_V)<<(UART_BIT_NUM_S))
#define UART_BIT_NUM_V  0x3
#define UART_BIT_NUM_S  2
/* UART_PARITY_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Configures whether or not to enable UART parity check.\\; 0: Disable\\; 1: Enabl
e\\.*/
#define UART_PARITY_EN    (BIT(1))
#define UART_PARITY_EN_M  (BIT(1))
#define UART_PARITY_EN_V  0x1
#define UART_PARITY_EN_S  1
/* UART_PARITY : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Configures the parity check mode.\\; 0: Even parity\\; 1: Odd parity\\.*/
#define UART_PARITY    (BIT(0))
#define UART_PARITY_M  (BIT(0))
#define UART_PARITY_V  0x1
#define UART_PARITY_S  0

#define UART_CONF1_REG(i)          (REG_UART_BASE(i) + 0x24)
/* UART_CLK_EN : R/W ;bitpos:[21] ;default: 1'h0 ; */
/*description: Configures clock gating.\\; 0: Support clock only when the application writes re
gisters.\\ ; 1: Always force the clock on for registers.\\.*/
#define UART_CLK_EN    (BIT(21))
#define UART_CLK_EN_M  (BIT(21))
#define UART_CLK_EN_V  0x1
#define UART_CLK_EN_S  21
/* UART_SW_DTR : R/W ;bitpos:[20] ;default: 1'b0 ; */
/*description: Configures the DTR signal used in software flow control.\\; 0: Data to be transm
itted is not ready.\\; 1: Data to be transmitted is ready.\\.*/
#define UART_SW_DTR    (BIT(20))
#define UART_SW_DTR_M  (BIT(20))
#define UART_SW_DTR_V  0x1
#define UART_SW_DTR_S  20
/* UART_DTR_INV : R/W ;bitpos:[19] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the level of UART DTR signal.\\; 0: Not inve
rt\\; 1: Invert\\.*/
#define UART_DTR_INV    (BIT(19))
#define UART_DTR_INV_M  (BIT(19))
#define UART_DTR_INV_V  0x1
#define UART_DTR_INV_S  19
/* UART_RTS_INV : R/W ;bitpos:[18] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the level of UART RTS signal.\\; 0: Not inve
rt\\; 1: Invert\\.*/
#define UART_RTS_INV    (BIT(18))
#define UART_RTS_INV_M  (BIT(18))
#define UART_RTS_INV_V  0x1
#define UART_RTS_INV_S  18
/* UART_DSR_INV : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the level of UART DSR signal.\\; 0: Not inve
rt\\; 1: Invert\\.*/
#define UART_DSR_INV    (BIT(17))
#define UART_DSR_INV_M  (BIT(17))
#define UART_DSR_INV_V  0x1
#define UART_DSR_INV_S  17
/* UART_CTS_INV : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the level of UART CTS signal.\\; 0: Not inve
rt\\; 1: Invert\\.*/
#define UART_CTS_INV    (BIT(16))
#define UART_CTS_INV_M  (BIT(16))
#define UART_CTS_INV_V  0x1
#define UART_CTS_INV_S  16
/* UART_TXFIFO_EMPTY_THRHD : R/W ;bitpos:[15:8] ;default: 8'h60 ; */
/*description: Configures the threshold for TX FIFO being empty.\\Measurement unit: byte..*/
#define UART_TXFIFO_EMPTY_THRHD    0x000000FF
#define UART_TXFIFO_EMPTY_THRHD_M  ((UART_TXFIFO_EMPTY_THRHD_V)<<(UART_TXFIFO_EMPTY_THRHD_S))
#define UART_TXFIFO_EMPTY_THRHD_V  0xFF
#define UART_TXFIFO_EMPTY_THRHD_S  8
/* UART_RXFIFO_FULL_THRHD : R/W ;bitpos:[7:0] ;default: 8'h60 ; */
/*description: Configures the threshold for RX FIFO being full.\\Measurement unit: byte..*/
#define UART_RXFIFO_FULL_THRHD    0x000000FF
#define UART_RXFIFO_FULL_THRHD_M  ((UART_RXFIFO_FULL_THRHD_V)<<(UART_RXFIFO_FULL_THRHD_S))
#define UART_RXFIFO_FULL_THRHD_V  0xFF
#define UART_RXFIFO_FULL_THRHD_S  0

#define UART_HWFC_CONF_SYNC_REG(i)          (REG_UART_BASE(i) + 0x2C)
/* UART_RX_FLOW_EN : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the UART receiver.\\; 0: Disable\\; 1: Enabl
e\\.*/
#define UART_RX_FLOW_EN    (BIT(8))
#define UART_RX_FLOW_EN_M  (BIT(8))
#define UART_RX_FLOW_EN_V  0x1
#define UART_RX_FLOW_EN_S  8
/* UART_RX_FLOW_THRHD : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Configures the maximum number of data bytes that can be received  during hardwar
e flow control.\\Measurement unit: byte..*/
#define UART_RX_FLOW_THRHD    0x000000FF
#define UART_RX_FLOW_THRHD_M  ((UART_RX_FLOW_THRHD_V)<<(UART_RX_FLOW_THRHD_S))
#define UART_RX_FLOW_THRHD_V  0xFF
#define UART_RX_FLOW_THRHD_S  0

#define UART_SLEEP_CONF0_REG(i)          (REG_UART_BASE(i) + 0x30)
/* UART_WK_CHAR4 : R/W ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Configures wakeup character 4..*/
#define UART_WK_CHAR4    0x000000FF
#define UART_WK_CHAR4_M  ((UART_WK_CHAR4_V)<<(UART_WK_CHAR4_S))
#define UART_WK_CHAR4_V  0xFF
#define UART_WK_CHAR4_S  24
/* UART_WK_CHAR3 : R/W ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: Configures wakeup character 3..*/
#define UART_WK_CHAR3    0x000000FF
#define UART_WK_CHAR3_M  ((UART_WK_CHAR3_V)<<(UART_WK_CHAR3_S))
#define UART_WK_CHAR3_V  0xFF
#define UART_WK_CHAR3_S  16
/* UART_WK_CHAR2 : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Configures wakeup character 2..*/
#define UART_WK_CHAR2    0x000000FF
#define UART_WK_CHAR2_M  ((UART_WK_CHAR2_V)<<(UART_WK_CHAR2_S))
#define UART_WK_CHAR2_V  0xFF
#define UART_WK_CHAR2_S  8
/* UART_WK_CHAR1 : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Configures wakeup character 1..*/
#define UART_WK_CHAR1    0x000000FF
#define UART_WK_CHAR1_M  ((UART_WK_CHAR1_V)<<(UART_WK_CHAR1_S))
#define UART_WK_CHAR1_V  0xFF
#define UART_WK_CHAR1_S  0

#define UART_SLEEP_CONF1_REG(i)          (REG_UART_BASE(i) + 0x34)
/* UART_WK_CHAR0 : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Configures wakeup character 0..*/
#define UART_WK_CHAR0    0x000000FF
#define UART_WK_CHAR0_M  ((UART_WK_CHAR0_V)<<(UART_WK_CHAR0_S))
#define UART_WK_CHAR0_V  0xFF
#define UART_WK_CHAR0_S  0

#define UART_SLEEP_CONF2_REG(i)          (REG_UART_BASE(i) + 0x38)
/* UART_WK_MODE_SEL : R/W ;bitpos:[27:26] ;default: 2'b0 ; */
/*description: Configures which wakeup mode to select.\\; 0: Mode 0\\; 1: Mode 1\\; 2: Mode 2\\
; 3: Mode 3\\.*/
#define UART_WK_MODE_SEL    0x00000003
#define UART_WK_MODE_SEL_M  ((UART_WK_MODE_SEL_V)<<(UART_WK_MODE_SEL_S))
#define UART_WK_MODE_SEL_V  0x3
#define UART_WK_MODE_SEL_S  26
/* UART_WK_CHAR_MASK : R/W ;bitpos:[25:21] ;default: 5'h0 ; */
/*description: Configures whether or not to mask wakeup characters.\\; 0: Not mask\\; 1: Mask\\.*/
#define UART_WK_CHAR_MASK    0x0000001F
#define UART_WK_CHAR_MASK_M  ((UART_WK_CHAR_MASK_V)<<(UART_WK_CHAR_MASK_S))
#define UART_WK_CHAR_MASK_V  0x1F
#define UART_WK_CHAR_MASK_S  21
/* UART_WK_CHAR_NUM : R/W ;bitpos:[20:18] ;default: 3'h5 ; */
/*description: Configures the number of wakeup characters..*/
#define UART_WK_CHAR_NUM    0x00000007
#define UART_WK_CHAR_NUM_M  ((UART_WK_CHAR_NUM_V)<<(UART_WK_CHAR_NUM_S))
#define UART_WK_CHAR_NUM_V  0x7
#define UART_WK_CHAR_NUM_S  18
/* UART_RX_WAKE_UP_THRHD : R/W ;bitpos:[17:10] ;default: 8'd1 ; */
/*description: Configures the number of received data bytes to wake up the chip in wakeup mode
1..*/
#define UART_RX_WAKE_UP_THRHD    0x000000FF
#define UART_RX_WAKE_UP_THRHD_M  ((UART_RX_WAKE_UP_THRHD_V)<<(UART_RX_WAKE_UP_THRHD_S))
#define UART_RX_WAKE_UP_THRHD_V  0xFF
#define UART_RX_WAKE_UP_THRHD_S  10
/* UART_ACTIVE_THRESHOLD : R/W ;bitpos:[9:0] ;default: 10'hf0 ; */
/*description: Configures the number of RXD edge changes to wake up the chip in wakeup mode 0..*/
#define UART_ACTIVE_THRESHOLD    0x000003FF
#define UART_ACTIVE_THRESHOLD_M  ((UART_ACTIVE_THRESHOLD_V)<<(UART_ACTIVE_THRESHOLD_S))
#define UART_ACTIVE_THRESHOLD_V  0x3FF
#define UART_ACTIVE_THRESHOLD_S  0

#define UART_SWFC_CONF0_SYNC_REG(i)          (REG_UART_BASE(i) + 0x3C)
/* UART_SEND_XOFF : R/W/SS/SC ;bitpos:[22] ;default: 1'b0 ; */
/*description: Configures whether or not to send XOFF characters.\\; 0: Not send\\; 1: Send\\.*/
#define UART_SEND_XOFF    (BIT(22))
#define UART_SEND_XOFF_M  (BIT(22))
#define UART_SEND_XOFF_V  0x1
#define UART_SEND_XOFF_S  22
/* UART_SEND_XON : R/W/SS/SC ;bitpos:[21] ;default: 1'b0 ; */
/*description: Configures whether or not to send XON characters.\\; 0: Not send\\; 1: Send\\.*/
#define UART_SEND_XON    (BIT(21))
#define UART_SEND_XON_M  (BIT(21))
#define UART_SEND_XON_V  0x1
#define UART_SEND_XON_S  21
/* UART_FORCE_XOFF : R/W ;bitpos:[20] ;default: 1'b0 ; */
/*description: Configures whether or not to stop the transmitter from sending data.\\; 0: Not s
top\\; 1: Stop\\.*/
#define UART_FORCE_XOFF    (BIT(20))
#define UART_FORCE_XOFF_M  (BIT(20))
#define UART_FORCE_XOFF_V  0x1
#define UART_FORCE_XOFF_S  20
/* UART_FORCE_XON : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: Configures whether the transmitter continues to sending data.\\; 0: Not send\\;
1: Send\\.*/
#define UART_FORCE_XON    (BIT(19))
#define UART_FORCE_XON_M  (BIT(19))
#define UART_FORCE_XON_V  0x1
#define UART_FORCE_XON_S  19
/* UART_XONOFF_DEL : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: Configures whether or not to remove flow control characters from the received da
ta.\\; 0: Not move\\; 1: Move\\.*/
#define UART_XONOFF_DEL    (BIT(18))
#define UART_XONOFF_DEL_M  (BIT(18))
#define UART_XONOFF_DEL_V  0x1
#define UART_XONOFF_DEL_S  18
/* UART_SW_FLOW_CON_EN : R/W ;bitpos:[17] ;default: 1'b0 ; */
/*description: Configures whether or not to enable software flow control.\\; 0: Disable\\; 1: E
nable\\.*/
#define UART_SW_FLOW_CON_EN    (BIT(17))
#define UART_SW_FLOW_CON_EN_M  (BIT(17))
#define UART_SW_FLOW_CON_EN_V  0x1
#define UART_SW_FLOW_CON_EN_S  17
/* UART_XON_XOFF_STILL_SEND : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether the UART transmitter can send XON or XOFF characters when it
is disabled.\\; 0: Cannot send\\; 1: Can send\\.*/
#define UART_XON_XOFF_STILL_SEND    (BIT(16))
#define UART_XON_XOFF_STILL_SEND_M  (BIT(16))
#define UART_XON_XOFF_STILL_SEND_V  0x1
#define UART_XON_XOFF_STILL_SEND_S  16
/* UART_XOFF_CHAR : R/W ;bitpos:[15:8] ;default: 8'h13 ; */
/*description: Configures the XOFF character for flow control..*/
#define UART_XOFF_CHAR    0x000000FF
#define UART_XOFF_CHAR_M  ((UART_XOFF_CHAR_V)<<(UART_XOFF_CHAR_S))
#define UART_XOFF_CHAR_V  0xFF
#define UART_XOFF_CHAR_S  8
/* UART_XON_CHAR : R/W ;bitpos:[7:0] ;default: 8'h11 ; */
/*description: Configures the XON character for flow control..*/
#define UART_XON_CHAR    0x000000FF
#define UART_XON_CHAR_M  ((UART_XON_CHAR_V)<<(UART_XON_CHAR_S))
#define UART_XON_CHAR_V  0xFF
#define UART_XON_CHAR_S  0

#define UART_SWFC_CONF1_REG(i)          (REG_UART_BASE(i) + 0x40)
/* UART_XOFF_THRESHOLD : R/W ;bitpos:[15:8] ;default: 8'he0 ; */
/*description:  Configures the threshold for data in RX FIFO to send XOFF characters in softwar
e flow control.\\Measurement unit: byte..*/
#define UART_XOFF_THRESHOLD    0x000000FF
#define UART_XOFF_THRESHOLD_M  ((UART_XOFF_THRESHOLD_V)<<(UART_XOFF_THRESHOLD_S))
#define UART_XOFF_THRESHOLD_V  0xFF
#define UART_XOFF_THRESHOLD_S  8
/* UART_XON_THRESHOLD : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Configures the threshold for data in RX FIFO to send XON characters in software
flow control.\\Measurement unit: byte..*/
#define UART_XON_THRESHOLD    0x000000FF
#define UART_XON_THRESHOLD_M  ((UART_XON_THRESHOLD_V)<<(UART_XON_THRESHOLD_S))
#define UART_XON_THRESHOLD_V  0xFF
#define UART_XON_THRESHOLD_S  0

#define UART_TXBRK_CONF_SYNC_REG(i)          (REG_UART_BASE(i) + 0x44)
/* UART_TX_BRK_NUM : R/W ;bitpos:[7:0] ;default: 8'ha ; */
/*description: Configures the number of NULL characters to be sent after finishing data transmi
ssion.\\Valid only when UART_TXD_BRK is 1..*/
#define UART_TX_BRK_NUM    0x000000FF
#define UART_TX_BRK_NUM_M  ((UART_TX_BRK_NUM_V)<<(UART_TX_BRK_NUM_S))
#define UART_TX_BRK_NUM_V  0xFF
#define UART_TX_BRK_NUM_S  0

#define UART_IDLE_CONF_SYNC_REG(i)          (REG_UART_BASE(i) + 0x48)
/* UART_TX_IDLE_NUM : R/W ;bitpos:[19:10] ;default: 10'h100 ; */
/*description: Configures the interval between two data transfers.\\Measurement unit: bit time
(the time to transmit 1 bit)..*/
#define UART_TX_IDLE_NUM    0x000003FF
#define UART_TX_IDLE_NUM_M  ((UART_TX_IDLE_NUM_V)<<(UART_TX_IDLE_NUM_S))
#define UART_TX_IDLE_NUM_V  0x3FF
#define UART_TX_IDLE_NUM_S  10
/* UART_RX_IDLE_THRHD : R/W ;bitpos:[9:0] ;default: 10'h100 ; */
/*description: Configures the threshold to generate a frame end signal when the receiver takes
more time to receive one data byte data.\\Measurement unit: bit time (the time t
o transmit 1 bit)..*/
#define UART_RX_IDLE_THRHD    0x000003FF
#define UART_RX_IDLE_THRHD_M  ((UART_RX_IDLE_THRHD_V)<<(UART_RX_IDLE_THRHD_S))
#define UART_RX_IDLE_THRHD_V  0x3FF
#define UART_RX_IDLE_THRHD_S  0

#define UART_RS485_CONF_SYNC_REG(i)          (REG_UART_BASE(i) + 0x4C)
/* UART_RS485_TX_DLY_NUM : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: Configures the delay of internal data signals in the transmitter.\\Measurement u
nit: bit time (the time to transmit 1 bit)..*/
#define UART_RS485_TX_DLY_NUM    0x0000000F
#define UART_RS485_TX_DLY_NUM_M  ((UART_RS485_TX_DLY_NUM_V)<<(UART_RS485_TX_DLY_NUM_S))
#define UART_RS485_TX_DLY_NUM_V  0xF
#define UART_RS485_TX_DLY_NUM_S  6
/* UART_RS485_RX_DLY_NUM : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: Configures the delay of internal data signals in the receiver.\\Measurement unit
: bit time (the time to transmit 1 bit)...*/
#define UART_RS485_RX_DLY_NUM    (BIT(5))
#define UART_RS485_RX_DLY_NUM_M  (BIT(5))
#define UART_RS485_RX_DLY_NUM_V  0x1
#define UART_RS485_RX_DLY_NUM_S  5
/* UART_RS485RXBY_TX_EN : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configures whether to enable the RS485 transmitter for data transmission when th
e RS485 receiver is busy.\\; 0: Disable\\; 1: Enable\\.*/
#define UART_RS485RXBY_TX_EN    (BIT(4))
#define UART_RS485RXBY_TX_EN_M  (BIT(4))
#define UART_RS485RXBY_TX_EN_V  0x1
#define UART_RS485RXBY_TX_EN_S  4
/* UART_RS485TX_RX_EN : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the receiver for data reception when the tra
nsmitter is transmitting data in RS485 mode.\\; 0: Disable\\; 1: Enable\\.*/
#define UART_RS485TX_RX_EN    (BIT(3))
#define UART_RS485TX_RX_EN_M  (BIT(3))
#define UART_RS485TX_RX_EN_V  0x1
#define UART_RS485TX_RX_EN_S  3
/* UART_DL1_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configures whether or not to add a turnaround delay of 1 bit after the stop bit.
\\; 0: Not add\\; 1: Add\\.*/
#define UART_DL1_EN    (BIT(2))
#define UART_DL1_EN_M  (BIT(2))
#define UART_DL1_EN_V  0x1
#define UART_DL1_EN_S  2
/* UART_DL0_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Configures whether or not to add a turnaround delay of 1 bit before the start bi
t.\\; 0: Not add\\; 1: Add\\.*/
#define UART_DL0_EN    (BIT(1))
#define UART_DL0_EN_M  (BIT(1))
#define UART_DL0_EN_V  0x1
#define UART_DL0_EN_S  1
/* UART_RS485_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Configures whether or not to enable RS485 mode.\\; 0: Disable\\; 1: Enable\\.*/
#define UART_RS485_EN    (BIT(0))
#define UART_RS485_EN_M  (BIT(0))
#define UART_RS485_EN_V  0x1
#define UART_RS485_EN_S  0

#define UART_AT_CMD_PRECNT_SYNC_REG(i)          (REG_UART_BASE(i) + 0x50)
/* UART_PRE_IDLE_NUM : R/W ;bitpos:[15:0] ;default: 16'h901 ; */
/*description: Configures the idle time before the receiver receives the first AT_CMD.\\Measure
ment unit: bit time (the time to transmit 1 bit)..*/
#define UART_PRE_IDLE_NUM    0x0000FFFF
#define UART_PRE_IDLE_NUM_M  ((UART_PRE_IDLE_NUM_V)<<(UART_PRE_IDLE_NUM_S))
#define UART_PRE_IDLE_NUM_V  0xFFFF
#define UART_PRE_IDLE_NUM_S  0

#define UART_AT_CMD_POSTCNT_SYNC_REG(i)          (REG_UART_BASE(i) + 0x54)
/* UART_POST_IDLE_NUM : R/W ;bitpos:[15:0] ;default: 16'h901 ; */
/*description: Configures the interval between the last AT_CMD and subsequent data.\\Measuremen
t unit: bit time (the time to transmit 1 bit)..*/
#define UART_POST_IDLE_NUM    0x0000FFFF
#define UART_POST_IDLE_NUM_M  ((UART_POST_IDLE_NUM_V)<<(UART_POST_IDLE_NUM_S))
#define UART_POST_IDLE_NUM_V  0xFFFF
#define UART_POST_IDLE_NUM_S  0

#define UART_AT_CMD_GAPTOUT_SYNC_REG(i)          (REG_UART_BASE(i) + 0x58)
/* UART_RX_GAP_TOUT : R/W ;bitpos:[15:0] ;default: 16'd11 ; */
/*description: Configures the interval between two AT_CMD characters.\\Measurement unit: bit ti
me (the time to transmit 1 bit)..*/
#define UART_RX_GAP_TOUT    0x0000FFFF
#define UART_RX_GAP_TOUT_M  ((UART_RX_GAP_TOUT_V)<<(UART_RX_GAP_TOUT_S))
#define UART_RX_GAP_TOUT_V  0xFFFF
#define UART_RX_GAP_TOUT_S  0

#define UART_AT_CMD_CHAR_SYNC_REG(i)          (REG_UART_BASE(i) + 0x5C)
/* UART_CHAR_NUM : R/W ;bitpos:[15:8] ;default: 8'h3 ; */
/*description: Configures the number of continuous AT_CMD characters a receiver can receive..*/
#define UART_CHAR_NUM    0x000000FF
#define UART_CHAR_NUM_M  ((UART_CHAR_NUM_V)<<(UART_CHAR_NUM_S))
#define UART_CHAR_NUM_V  0xFF
#define UART_CHAR_NUM_S  8
/* UART_AT_CMD_CHAR : R/W ;bitpos:[7:0] ;default: 8'h2b ; */
/*description: Configures the AT_CMD character..*/
#define UART_AT_CMD_CHAR    0x000000FF
#define UART_AT_CMD_CHAR_M  ((UART_AT_CMD_CHAR_V)<<(UART_AT_CMD_CHAR_S))
#define UART_AT_CMD_CHAR_V  0xFF
#define UART_AT_CMD_CHAR_S  0

#define UART_MEM_CONF_REG(i)          (REG_UART_BASE(i) + 0x60)
/* UART_MEM_FORCE_PU : R/W ;bitpos:[26] ;default: 1'b0 ; */
/*description: Set this bit to force power up UART memory..*/
#define UART_MEM_FORCE_PU    (BIT(26))
#define UART_MEM_FORCE_PU_M  (BIT(26))
#define UART_MEM_FORCE_PU_V  0x1
#define UART_MEM_FORCE_PU_S  26
/* UART_MEM_FORCE_PD : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: Set this bit to force power down UART memory..*/
#define UART_MEM_FORCE_PD    (BIT(25))
#define UART_MEM_FORCE_PD_M  (BIT(25))
#define UART_MEM_FORCE_PD_V  0x1
#define UART_MEM_FORCE_PD_S  25

#define UART_TOUT_CONF_SYNC_REG(i)          (REG_UART_BASE(i) + 0x64)
/* UART_RX_TOUT_THRHD : R/W ;bitpos:[11:2] ;default: 10'ha ; */
/*description: Configures the amount of time that the bus can remain idle before timeout.\\ Mea
surement unit: bit time (the time to transmit 1 bit)..*/
#define UART_RX_TOUT_THRHD    0x000003FF
#define UART_RX_TOUT_THRHD_M  ((UART_RX_TOUT_THRHD_V)<<(UART_RX_TOUT_THRHD_S))
#define UART_RX_TOUT_THRHD_V  0x3FF
#define UART_RX_TOUT_THRHD_S  2
/* UART_RX_TOUT_FLOW_DIS : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to stop accumulating idle_cnt when hardware flow control works..*/
#define UART_RX_TOUT_FLOW_DIS    (BIT(1))
#define UART_RX_TOUT_FLOW_DIS_M  (BIT(1))
#define UART_RX_TOUT_FLOW_DIS_V  0x1
#define UART_RX_TOUT_FLOW_DIS_S  1
/* UART_RX_TOUT_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Configures whether or not to enable UART receiver's timeout function.\\; 0: Disa
ble\\; 1: Enable\\.*/
#define UART_RX_TOUT_EN    (BIT(0))
#define UART_RX_TOUT_EN_M  (BIT(0))
#define UART_RX_TOUT_EN_V  0x1
#define UART_RX_TOUT_EN_S  0

#define UART_MEM_TX_STATUS_REG(i)          (REG_UART_BASE(i) + 0x68)
/* UART_TX_SRAM_RADDR : RO ;bitpos:[16:9] ;default: 8'h0 ; */
/*description: Represents the offset address to read TX FIFO..*/
#define UART_TX_SRAM_RADDR    0x000000FF
#define UART_TX_SRAM_RADDR_M  ((UART_TX_SRAM_RADDR_V)<<(UART_TX_SRAM_RADDR_S))
#define UART_TX_SRAM_RADDR_V  0xFF
#define UART_TX_SRAM_RADDR_S  9
/* UART_TX_SRAM_WADDR : RO ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Represents the offset address to write TX FIFO..*/
#define UART_TX_SRAM_WADDR    0x000000FF
#define UART_TX_SRAM_WADDR_M  ((UART_TX_SRAM_WADDR_V)<<(UART_TX_SRAM_WADDR_S))
#define UART_TX_SRAM_WADDR_V  0xFF
#define UART_TX_SRAM_WADDR_S  0

#define UART_MEM_RX_STATUS_REG(i)          (REG_UART_BASE(i) + 0x6C)
/* UART_RX_SRAM_WADDR : RO ;bitpos:[16:9] ;default: 8'h80 ; */
/*description: Represents the offset address to write RX FIFO..*/
#define UART_RX_SRAM_WADDR    0x000000FF
#define UART_RX_SRAM_WADDR_M  ((UART_RX_SRAM_WADDR_V)<<(UART_RX_SRAM_WADDR_S))
#define UART_RX_SRAM_WADDR_V  0xFF
#define UART_RX_SRAM_WADDR_S  9
/* UART_RX_SRAM_RADDR : RO ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Represents the offset address to read RX FIFO..*/
#define UART_RX_SRAM_RADDR    0x000000FF
#define UART_RX_SRAM_RADDR_M  ((UART_RX_SRAM_RADDR_V)<<(UART_RX_SRAM_RADDR_S))
#define UART_RX_SRAM_RADDR_V  0xFF
#define UART_RX_SRAM_RADDR_S  0

#define UART_FSM_STATUS_REG(i)          (REG_UART_BASE(i) + 0x70)
/* UART_ST_UTX_OUT : RO ;bitpos:[7:4] ;default: 4'b0 ; */
/*description: Represents the status of the transmitter..*/
#define UART_ST_UTX_OUT    0x0000000F
#define UART_ST_UTX_OUT_M  ((UART_ST_UTX_OUT_V)<<(UART_ST_UTX_OUT_S))
#define UART_ST_UTX_OUT_V  0xF
#define UART_ST_UTX_OUT_S  4
/* UART_ST_URX_OUT : RO ;bitpos:[3:0] ;default: 4'b0 ; */
/*description: Represents the status of the receiver..*/
#define UART_ST_URX_OUT    0x0000000F
#define UART_ST_URX_OUT_M  ((UART_ST_URX_OUT_V)<<(UART_ST_URX_OUT_S))
#define UART_ST_URX_OUT_V  0xF
#define UART_ST_URX_OUT_S  0

#define UART_POSPULSE_REG(i)          (REG_UART_BASE(i) + 0x74)
/* UART_POSEDGE_MIN_CNT : RO ;bitpos:[11:0] ;default: 12'hfff ; */
/*description: Represents the minimal input clock counter value between two positive edges. It
is used for baud rate detection..*/
#define UART_POSEDGE_MIN_CNT    0x00000FFF
#define UART_POSEDGE_MIN_CNT_M  ((UART_POSEDGE_MIN_CNT_V)<<(UART_POSEDGE_MIN_CNT_S))
#define UART_POSEDGE_MIN_CNT_V  0xFFF
#define UART_POSEDGE_MIN_CNT_S  0

#define UART_NEGPULSE_REG(i)          (REG_UART_BASE(i) + 0x78)
/* UART_NEGEDGE_MIN_CNT : RO ;bitpos:[11:0] ;default: 12'hfff ; */
/*description: Represents the minimal input clock counter value between two negative edges. It
is used for baud rate detection..*/
#define UART_NEGEDGE_MIN_CNT    0x00000FFF
#define UART_NEGEDGE_MIN_CNT_M  ((UART_NEGEDGE_MIN_CNT_V)<<(UART_NEGEDGE_MIN_CNT_S))
#define UART_NEGEDGE_MIN_CNT_V  0xFFF
#define UART_NEGEDGE_MIN_CNT_S  0

#define UART_LOWPULSE_REG(i)          (REG_UART_BASE(i) + 0x7C)
/* UART_LOWPULSE_MIN_CNT : RO ;bitpos:[11:0] ;default: 12'hfff ; */
/*description: Represents the minimum duration time of a low-level pulse. It is used for baud r
ate detection.\\Measurement unit: APB_CLK clock cycle..*/
#define UART_LOWPULSE_MIN_CNT    0x00000FFF
#define UART_LOWPULSE_MIN_CNT_M  ((UART_LOWPULSE_MIN_CNT_V)<<(UART_LOWPULSE_MIN_CNT_S))
#define UART_LOWPULSE_MIN_CNT_V  0xFFF
#define UART_LOWPULSE_MIN_CNT_S  0

#define UART_HIGHPULSE_REG(i)          (REG_UART_BASE(i) + 0x80)
/* UART_HIGHPULSE_MIN_CNT : RO ;bitpos:[11:0] ;default: 12'hfff ; */
/*description: Represents  the maximum duration time for a high-level pulse. It is used for bau
d rate detection.\\Measurement unit: APB_CLK clock cycle..*/
#define UART_HIGHPULSE_MIN_CNT    0x00000FFF
#define UART_HIGHPULSE_MIN_CNT_M  ((UART_HIGHPULSE_MIN_CNT_V)<<(UART_HIGHPULSE_MIN_CNT_S))
#define UART_HIGHPULSE_MIN_CNT_V  0xFFF
#define UART_HIGHPULSE_MIN_CNT_S  0

#define UART_RXD_CNT_REG(i)          (REG_UART_BASE(i) + 0x84)
/* UART_RXD_EDGE_CNT : RO ;bitpos:[9:0] ;default: 10'h0 ; */
/*description: Represents the number of RXD edge changes. It is used for baud rate detection..*/
#define UART_RXD_EDGE_CNT    0x000003FF
#define UART_RXD_EDGE_CNT_M  ((UART_RXD_EDGE_CNT_V)<<(UART_RXD_EDGE_CNT_S))
#define UART_RXD_EDGE_CNT_V  0x3FF
#define UART_RXD_EDGE_CNT_S  0

#define UART_CLK_CONF_REG(i)          (REG_UART_BASE(i) + 0x88)
/* UART_RX_RST_CORE : R/W ;bitpos:[27] ;default: 1'b0 ; */
/*description: Write 1 and then write 0 to reset UART RX..*/
#define UART_RX_RST_CORE    (BIT(27))
#define UART_RX_RST_CORE_M  (BIT(27))
#define UART_RX_RST_CORE_V  0x1
#define UART_RX_RST_CORE_S  27
/* UART_TX_RST_CORE : R/W ;bitpos:[26] ;default: 1'b0 ; */
/*description: Write 1 and then write 0 to reset UART TX..*/
#define UART_TX_RST_CORE    (BIT(26))
#define UART_TX_RST_CORE_M  (BIT(26))
#define UART_TX_RST_CORE_V  0x1
#define UART_TX_RST_CORE_S  26
/* UART_RX_SCLK_EN : R/W ;bitpos:[25] ;default: 1'b1 ; */
/*description: Configures whether or not to enable UART RX clock.\\; 0: Disable\\; 1: Enable\\.*/
#define UART_RX_SCLK_EN    (BIT(25))
#define UART_RX_SCLK_EN_M  (BIT(25))
#define UART_RX_SCLK_EN_V  0x1
#define UART_RX_SCLK_EN_S  25
/* UART_TX_SCLK_EN : R/W ;bitpos:[24] ;default: 1'b1 ; */
/*description: Configures whether or not to enable UART TX clock.\\; 0: Disable\\; 1: Enable\\.*/
#define UART_TX_SCLK_EN    (BIT(24))
#define UART_TX_SCLK_EN_M  (BIT(24))
#define UART_TX_SCLK_EN_V  0x1
#define UART_TX_SCLK_EN_S  24

#define UART_DATE_REG(i)          (REG_UART_BASE(i) + 0x8C)
/* UART_DATE : R/W ;bitpos:[31:0] ;default: 32'h2312220 ; */
/*description: Version control register..*/
#define UART_DATE    0xFFFFFFFF
#define UART_DATE_M  ((UART_DATE_V)<<(UART_DATE_S))
#define UART_DATE_V  0xFFFFFFFF
#define UART_DATE_S  0

#define UART_AFIFO_STATUS_REG(i)          (REG_UART_BASE(i) + 0x90)
/* UART_RX_AFIFO_EMPTY : RO ;bitpos:[3] ;default: 1'b1 ; */
/*description: Represents whether or not the APB RX asynchronous FIFO is empty.\\; 0: Not empty
\\; 1: Empty\\.*/
#define UART_RX_AFIFO_EMPTY    (BIT(3))
#define UART_RX_AFIFO_EMPTY_M  (BIT(3))
#define UART_RX_AFIFO_EMPTY_V  0x1
#define UART_RX_AFIFO_EMPTY_S  3
/* UART_RX_AFIFO_FULL : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: Represents whether or not the APB RX asynchronous FIFO is full.\\; 0: Not full\\
; 1: Full\\.*/
#define UART_RX_AFIFO_FULL    (BIT(2))
#define UART_RX_AFIFO_FULL_M  (BIT(2))
#define UART_RX_AFIFO_FULL_V  0x1
#define UART_RX_AFIFO_FULL_S  2
/* UART_TX_AFIFO_EMPTY : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description: Represents whether or not the APB TX asynchronous FIFO is empty.\\; 0: Not empty
\\; 1: Empty\\.*/
#define UART_TX_AFIFO_EMPTY    (BIT(1))
#define UART_TX_AFIFO_EMPTY_M  (BIT(1))
#define UART_TX_AFIFO_EMPTY_V  0x1
#define UART_TX_AFIFO_EMPTY_S  1
/* UART_TX_AFIFO_FULL : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: Represents whether or not the APB TX asynchronous FIFO is full.\\; 0: Not full\\
; 1: Full\\.*/
#define UART_TX_AFIFO_FULL    (BIT(0))
#define UART_TX_AFIFO_FULL_M  (BIT(0))
#define UART_TX_AFIFO_FULL_V  0x1
#define UART_TX_AFIFO_FULL_S  0

#define UART_REG_UPDATE_REG(i)          (REG_UART_BASE(i) + 0x98)
/* UART_REG_UPDATE : R/W/SC ;bitpos:[0] ;default: 1'b0 ; */
/*description: Configures whether or not to synchronize registers.\\; 0: Not synchronize\\; 1:
Synchronize\\.*/
#define UART_REG_UPDATE    (BIT(0))
#define UART_REG_UPDATE_M  (BIT(0))
#define UART_REG_UPDATE_V  0x1
#define UART_REG_UPDATE_S  0

#define UART_ID_REG(i)          (REG_UART_BASE(i) + 0x9C)
/* UART_ID : R/W ;bitpos:[31:0] ;default: 30'h0500 ; */
/*description: Configures the UART ID..*/
#define UART_ID    0xFFFFFFFF
#define UART_ID_M  ((UART_ID_V)<<(UART_ID_S))
#define UART_ID_V  0xFFFFFFFF
#define UART_ID_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_UART_REG_H_ */
