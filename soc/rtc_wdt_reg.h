/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_RTC_WDT_REG_H_
#define _SOC_RTC_WDT_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define RTC_WDT_CONFIG0_REG          (DR_REG_RTC_WDT_BASE + 0x0)
/* RTC_WDT_WDT_EN : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_EN    (BIT(31))
#define RTC_WDT_WDT_EN_M  (BIT(31))
#define RTC_WDT_WDT_EN_V  0x1
#define RTC_WDT_WDT_EN_S  31
/* RTC_WDT_WDT_STG0 : R/W ;bitpos:[30:28] ;default: 3'h0 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_STG0    0x00000007
#define RTC_WDT_WDT_STG0_M  ((RTC_WDT_WDT_STG0_V)<<(RTC_WDT_WDT_STG0_S))
#define RTC_WDT_WDT_STG0_V  0x7
#define RTC_WDT_WDT_STG0_S  28
/* RTC_WDT_WDT_STG1 : R/W ;bitpos:[27:25] ;default: 3'h0 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_STG1    0x00000007
#define RTC_WDT_WDT_STG1_M  ((RTC_WDT_WDT_STG1_V)<<(RTC_WDT_WDT_STG1_S))
#define RTC_WDT_WDT_STG1_V  0x7
#define RTC_WDT_WDT_STG1_S  25
/* RTC_WDT_WDT_STG2 : R/W ;bitpos:[24:22] ;default: 3'h0 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_STG2    0x00000007
#define RTC_WDT_WDT_STG2_M  ((RTC_WDT_WDT_STG2_V)<<(RTC_WDT_WDT_STG2_S))
#define RTC_WDT_WDT_STG2_V  0x7
#define RTC_WDT_WDT_STG2_S  22
/* RTC_WDT_WDT_STG3 : R/W ;bitpos:[21:19] ;default: 3'h0 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_STG3    0x00000007
#define RTC_WDT_WDT_STG3_M  ((RTC_WDT_WDT_STG3_V)<<(RTC_WDT_WDT_STG3_S))
#define RTC_WDT_WDT_STG3_V  0x7
#define RTC_WDT_WDT_STG3_S  19
/* RTC_WDT_WDT_CPU_RESET_LENGTH : R/W ;bitpos:[18:16] ;default: 3'h1 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_CPU_RESET_LENGTH    0x00000007
#define RTC_WDT_WDT_CPU_RESET_LENGTH_M  ((RTC_WDT_WDT_CPU_RESET_LENGTH_V)<<(RTC_WDT_WDT_CPU_RESET_LENGTH_S))
#define RTC_WDT_WDT_CPU_RESET_LENGTH_V  0x7
#define RTC_WDT_WDT_CPU_RESET_LENGTH_S  16
/* RTC_WDT_WDT_SYS_RESET_LENGTH : R/W ;bitpos:[15:13] ;default: 3'h1 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_SYS_RESET_LENGTH    0x00000007
#define RTC_WDT_WDT_SYS_RESET_LENGTH_M  ((RTC_WDT_WDT_SYS_RESET_LENGTH_V)<<(RTC_WDT_WDT_SYS_RESET_LENGTH_S))
#define RTC_WDT_WDT_SYS_RESET_LENGTH_V  0x7
#define RTC_WDT_WDT_SYS_RESET_LENGTH_S  13
/* RTC_WDT_WDT_FLASHBOOT_MOD_EN : R/W ;bitpos:[12] ;default: 1'h1 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_FLASHBOOT_MOD_EN    (BIT(12))
#define RTC_WDT_WDT_FLASHBOOT_MOD_EN_M  (BIT(12))
#define RTC_WDT_WDT_FLASHBOOT_MOD_EN_V  0x1
#define RTC_WDT_WDT_FLASHBOOT_MOD_EN_S  12
/* RTC_WDT_WDT_PROCPU_RESET_EN : R/W ;bitpos:[11] ;default: 1'd0 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_PROCPU_RESET_EN    (BIT(11))
#define RTC_WDT_WDT_PROCPU_RESET_EN_M  (BIT(11))
#define RTC_WDT_WDT_PROCPU_RESET_EN_V  0x1
#define RTC_WDT_WDT_PROCPU_RESET_EN_S  11
/* RTC_WDT_WDT_APPCPU_RESET_EN : R/W ;bitpos:[10] ;default: 1'd0 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_APPCPU_RESET_EN    (BIT(10))
#define RTC_WDT_WDT_APPCPU_RESET_EN_M  (BIT(10))
#define RTC_WDT_WDT_APPCPU_RESET_EN_V  0x1
#define RTC_WDT_WDT_APPCPU_RESET_EN_S  10
/* RTC_WDT_WDT_PAUSE_IN_SLP : R/W ;bitpos:[9] ;default: 1'd1 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_PAUSE_IN_SLP    (BIT(9))
#define RTC_WDT_WDT_PAUSE_IN_SLP_M  (BIT(9))
#define RTC_WDT_WDT_PAUSE_IN_SLP_V  0x1
#define RTC_WDT_WDT_PAUSE_IN_SLP_S  9
/* RTC_WDT_WDT_CHIP_RESET_EN : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_CHIP_RESET_EN    (BIT(8))
#define RTC_WDT_WDT_CHIP_RESET_EN_M  (BIT(8))
#define RTC_WDT_WDT_CHIP_RESET_EN_V  0x1
#define RTC_WDT_WDT_CHIP_RESET_EN_S  8
/* RTC_WDT_WDT_CHIP_RESET_WIDTH : R/W ;bitpos:[7:0] ;default: 8'd20 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_CHIP_RESET_WIDTH    0x000000FF
#define RTC_WDT_WDT_CHIP_RESET_WIDTH_M  ((RTC_WDT_WDT_CHIP_RESET_WIDTH_V)<<(RTC_WDT_WDT_CHIP_RESET_WIDTH_S))
#define RTC_WDT_WDT_CHIP_RESET_WIDTH_V  0xFF
#define RTC_WDT_WDT_CHIP_RESET_WIDTH_S  0

#define RTC_WDT_CONFIG1_REG          (DR_REG_RTC_WDT_BASE + 0x4)
/* RTC_WDT_WDT_STG0_HOLD : R/W ;bitpos:[31:0] ;default: 32'd200000 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_STG0_HOLD    0xFFFFFFFF
#define RTC_WDT_WDT_STG0_HOLD_M  ((RTC_WDT_WDT_STG0_HOLD_V)<<(RTC_WDT_WDT_STG0_HOLD_S))
#define RTC_WDT_WDT_STG0_HOLD_V  0xFFFFFFFF
#define RTC_WDT_WDT_STG0_HOLD_S  0

#define RTC_WDT_CONFIG2_REG          (DR_REG_RTC_WDT_BASE + 0x8)
/* RTC_WDT_WDT_STG1_HOLD : R/W ;bitpos:[31:0] ;default: 32'd80000 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_STG1_HOLD    0xFFFFFFFF
#define RTC_WDT_WDT_STG1_HOLD_M  ((RTC_WDT_WDT_STG1_HOLD_V)<<(RTC_WDT_WDT_STG1_HOLD_S))
#define RTC_WDT_WDT_STG1_HOLD_V  0xFFFFFFFF
#define RTC_WDT_WDT_STG1_HOLD_S  0

#define RTC_WDT_CONFIG3_REG          (DR_REG_RTC_WDT_BASE + 0xC)
/* RTC_WDT_WDT_STG2_HOLD : R/W ;bitpos:[31:0] ;default: 32'hfff ; */
/*description: need_des.*/
#define RTC_WDT_WDT_STG2_HOLD    0xFFFFFFFF
#define RTC_WDT_WDT_STG2_HOLD_M  ((RTC_WDT_WDT_STG2_HOLD_V)<<(RTC_WDT_WDT_STG2_HOLD_S))
#define RTC_WDT_WDT_STG2_HOLD_V  0xFFFFFFFF
#define RTC_WDT_WDT_STG2_HOLD_S  0

#define RTC_WDT_CONFIG4_REG          (DR_REG_RTC_WDT_BASE + 0x10)
/* RTC_WDT_WDT_STG3_HOLD : R/W ;bitpos:[31:0] ;default: 32'hfff ; */
/*description: need_des.*/
#define RTC_WDT_WDT_STG3_HOLD    0xFFFFFFFF
#define RTC_WDT_WDT_STG3_HOLD_M  ((RTC_WDT_WDT_STG3_HOLD_V)<<(RTC_WDT_WDT_STG3_HOLD_S))
#define RTC_WDT_WDT_STG3_HOLD_V  0xFFFFFFFF
#define RTC_WDT_WDT_STG3_HOLD_S  0

#define RTC_WDT_FEED_REG          (DR_REG_RTC_WDT_BASE + 0x14)
/* RTC_WDT_FEED : WT ;bitpos:[31] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_FEED    (BIT(31))
#define RTC_WDT_FEED_M  (BIT(31))
#define RTC_WDT_FEED_V  0x1
#define RTC_WDT_FEED_S  31

#define RTC_WDT_WPROTECT_REG          (DR_REG_RTC_WDT_BASE + 0x18)
/* RTC_WDT_WDT_WKEY : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: need_des.*/
#define RTC_WDT_WDT_WKEY    0xFFFFFFFF
#define RTC_WDT_WDT_WKEY_M  ((RTC_WDT_WDT_WKEY_V)<<(RTC_WDT_WDT_WKEY_S))
#define RTC_WDT_WDT_WKEY_V  0xFFFFFFFF
#define RTC_WDT_WDT_WKEY_S  0

#define RTC_WDT_SWD_CONFIG_REG          (DR_REG_RTC_WDT_BASE + 0x1C)
/* RTC_WDT_SWD_FEED : WT ;bitpos:[31] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_SWD_FEED    (BIT(31))
#define RTC_WDT_SWD_FEED_M  (BIT(31))
#define RTC_WDT_SWD_FEED_V  0x1
#define RTC_WDT_SWD_FEED_S  31
/* RTC_WDT_SWD_DISABLE : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_SWD_DISABLE    (BIT(30))
#define RTC_WDT_SWD_DISABLE_M  (BIT(30))
#define RTC_WDT_SWD_DISABLE_V  0x1
#define RTC_WDT_SWD_DISABLE_S  30
/* RTC_WDT_SWD_SIGNAL_WIDTH : R/W ;bitpos:[29:20] ;default: 10'd300 ; */
/*description: need_des.*/
#define RTC_WDT_SWD_SIGNAL_WIDTH    0x000003FF
#define RTC_WDT_SWD_SIGNAL_WIDTH_M  ((RTC_WDT_SWD_SIGNAL_WIDTH_V)<<(RTC_WDT_SWD_SIGNAL_WIDTH_S))
#define RTC_WDT_SWD_SIGNAL_WIDTH_V  0x3FF
#define RTC_WDT_SWD_SIGNAL_WIDTH_S  20
/* RTC_WDT_SWD_RST_FLAG_CLR : WT ;bitpos:[19] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_SWD_RST_FLAG_CLR    (BIT(19))
#define RTC_WDT_SWD_RST_FLAG_CLR_M  (BIT(19))
#define RTC_WDT_SWD_RST_FLAG_CLR_V  0x1
#define RTC_WDT_SWD_RST_FLAG_CLR_S  19
/* RTC_WDT_SWD_AUTO_FEED_EN : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_SWD_AUTO_FEED_EN    (BIT(18))
#define RTC_WDT_SWD_AUTO_FEED_EN_M  (BIT(18))
#define RTC_WDT_SWD_AUTO_FEED_EN_V  0x1
#define RTC_WDT_SWD_AUTO_FEED_EN_S  18
/* RTC_WDT_SWD_RESET_FLAG : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_SWD_RESET_FLAG    (BIT(0))
#define RTC_WDT_SWD_RESET_FLAG_M  (BIT(0))
#define RTC_WDT_SWD_RESET_FLAG_V  0x1
#define RTC_WDT_SWD_RESET_FLAG_S  0

#define RTC_WDT_SWD_WPROTECT_REG          (DR_REG_RTC_WDT_BASE + 0x20)
/* RTC_WDT_SWD_WKEY : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: need_des.*/
#define RTC_WDT_SWD_WKEY    0xFFFFFFFF
#define RTC_WDT_SWD_WKEY_M  ((RTC_WDT_SWD_WKEY_V)<<(RTC_WDT_SWD_WKEY_S))
#define RTC_WDT_SWD_WKEY_V  0xFFFFFFFF
#define RTC_WDT_SWD_WKEY_S  0

#define RTC_WDT_INT_RAW_REG          (DR_REG_RTC_WDT_BASE + 0x24)
/* RTC_WDT_LP_WDT_INT_RAW : R/WTC/SS ;bitpos:[31] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_LP_WDT_INT_RAW    (BIT(31))
#define RTC_WDT_LP_WDT_INT_RAW_M  (BIT(31))
#define RTC_WDT_LP_WDT_INT_RAW_V  0x1
#define RTC_WDT_LP_WDT_INT_RAW_S  31
/* RTC_WDT_SUPER_WDT_INT_RAW : R/WTC/SS ;bitpos:[30] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_SUPER_WDT_INT_RAW    (BIT(30))
#define RTC_WDT_SUPER_WDT_INT_RAW_M  (BIT(30))
#define RTC_WDT_SUPER_WDT_INT_RAW_V  0x1
#define RTC_WDT_SUPER_WDT_INT_RAW_S  30

#define RTC_WDT_INT_ST_REG          (DR_REG_RTC_WDT_BASE + 0x28)
/* RTC_WDT_LP_WDT_INT_ST : RO ;bitpos:[31] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_LP_WDT_INT_ST    (BIT(31))
#define RTC_WDT_LP_WDT_INT_ST_M  (BIT(31))
#define RTC_WDT_LP_WDT_INT_ST_V  0x1
#define RTC_WDT_LP_WDT_INT_ST_S  31
/* RTC_WDT_SUPER_WDT_INT_ST : RO ;bitpos:[30] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_SUPER_WDT_INT_ST    (BIT(30))
#define RTC_WDT_SUPER_WDT_INT_ST_M  (BIT(30))
#define RTC_WDT_SUPER_WDT_INT_ST_V  0x1
#define RTC_WDT_SUPER_WDT_INT_ST_S  30

#define RTC_WDT_INT_ENA_REG          (DR_REG_RTC_WDT_BASE + 0x2C)
/* RTC_WDT_LP_WDT_INT_ENA : R/W ;bitpos:[31] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_LP_WDT_INT_ENA    (BIT(31))
#define RTC_WDT_LP_WDT_INT_ENA_M  (BIT(31))
#define RTC_WDT_LP_WDT_INT_ENA_V  0x1
#define RTC_WDT_LP_WDT_INT_ENA_S  31
/* RTC_WDT_SUPER_WDT_INT_ENA : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_SUPER_WDT_INT_ENA    (BIT(30))
#define RTC_WDT_SUPER_WDT_INT_ENA_M  (BIT(30))
#define RTC_WDT_SUPER_WDT_INT_ENA_V  0x1
#define RTC_WDT_SUPER_WDT_INT_ENA_S  30

#define RTC_WDT_INT_CLR_REG          (DR_REG_RTC_WDT_BASE + 0x30)
/* RTC_WDT_LP_WDT_INT_CLR : WT ;bitpos:[31] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_LP_WDT_INT_CLR    (BIT(31))
#define RTC_WDT_LP_WDT_INT_CLR_M  (BIT(31))
#define RTC_WDT_LP_WDT_INT_CLR_V  0x1
#define RTC_WDT_LP_WDT_INT_CLR_S  31
/* RTC_WDT_SUPER_WDT_INT_CLR : WT ;bitpos:[30] ;default: 1'b0 ; */
/*description: need_des.*/
#define RTC_WDT_SUPER_WDT_INT_CLR    (BIT(30))
#define RTC_WDT_SUPER_WDT_INT_CLR_M  (BIT(30))
#define RTC_WDT_SUPER_WDT_INT_CLR_V  0x1
#define RTC_WDT_SUPER_WDT_INT_CLR_S  30

#define RTC_WDT_DATE_REG          (DR_REG_RTC_WDT_BASE + 0x3FC)
/* RTC_WDT_CLK_EN : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: need_des.*/
#define RTC_WDT_CLK_EN    (BIT(31))
#define RTC_WDT_CLK_EN_M  (BIT(31))
#define RTC_WDT_CLK_EN_V  0x1
#define RTC_WDT_CLK_EN_S  31
/* RTC_WDT_LP_WDT_DATE : R/W ;bitpos:[30:0] ;default: 31'h2112080 ; */
/*description: need_des.*/
#define RTC_WDT_LP_WDT_DATE    0x7FFFFFFF
#define RTC_WDT_LP_WDT_DATE_M  ((RTC_WDT_LP_WDT_DATE_V)<<(RTC_WDT_LP_WDT_DATE_S))
#define RTC_WDT_LP_WDT_DATE_V  0x7FFFFFFF
#define RTC_WDT_LP_WDT_DATE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_RTC_WDT_REG_H_ */
