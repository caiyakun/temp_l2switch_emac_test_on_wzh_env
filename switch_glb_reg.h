/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_GLB_REG_H_
#define _SWITCH_SWITCH_GLB_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

#define SWITCH_GLB_DATE_REG          (DR_REG_SWITCH_GLB_BASE + 0x0)
/* SWITCH_GLB_RMK_DATE : HRO ;bitpos:[31:0] ;default: 32'h20240801 ; */
/*description: RMK date.*/
#define SWITCH_GLB_RMK_DATE    0xFFFFFFFF
#define SWITCH_GLB_RMK_DATE_M  ((SWITCH_GLB_RMK_DATE_V)<<(SWITCH_GLB_RMK_DATE_S))
#define SWITCH_GLB_RMK_DATE_V  0xFFFFFFFF
#define SWITCH_GLB_RMK_DATE_S  0

#define SWITCH_GLB_SWITCH_MAC_ADDR_31TO0_REG          (DR_REG_SWITCH_GLB_BASE + 0x4)
/* SWITCH_GLB_SWITCH_MAC_ADDR_31TO0 : R/W ;bitpos:[31:0] ;default: 32'h0000_0000 ; */
/*description: Configures SWITCH MAC address.*/
#define SWITCH_GLB_SWITCH_MAC_ADDR_31TO0    0xFFFFFFFF
#define SWITCH_GLB_SWITCH_MAC_ADDR_31TO0_M  ((SWITCH_GLB_SWITCH_MAC_ADDR_31TO0_V)<<(SWITCH_GLB_SWITCH_MAC_ADDR_31TO0_S))
#define SWITCH_GLB_SWITCH_MAC_ADDR_31TO0_V  0xFFFFFFFF
#define SWITCH_GLB_SWITCH_MAC_ADDR_31TO0_S  0

#define SWITCH_GLB_SWITCH_MAC_ADDR_15TO0_REG          (DR_REG_SWITCH_GLB_BASE + 0x8)
/* SWITCH_GLB_SWITCH_MAC_ADDR_47TO32 : R/W ;bitpos:[15:0] ;default: 16'h0000 ; */
/*description: Configures SWITCH MAC address.*/
#define SWITCH_GLB_SWITCH_MAC_ADDR_47TO32    0x0000FFFF
#define SWITCH_GLB_SWITCH_MAC_ADDR_47TO32_M  ((SWITCH_GLB_SWITCH_MAC_ADDR_47TO32_V)<<(SWITCH_GLB_SWITCH_MAC_ADDR_47TO32_S))
#define SWITCH_GLB_SWITCH_MAC_ADDR_47TO32_V  0xFFFF
#define SWITCH_GLB_SWITCH_MAC_ADDR_47TO32_S  0

#define SWITCH_GLB_PHYSICAL_PORT_ID_REG          (DR_REG_SWITCH_GLB_BASE + 0xC)
/* SWITCH_GLB_PP7_ID : RO ;bitpos:[23:21] ;default: 3'd7 ; */
/*description: Respresent Physical Port ID.*/
#define SWITCH_GLB_PP7_ID    0x00000007
#define SWITCH_GLB_PP7_ID_M  ((SWITCH_GLB_PP7_ID_V)<<(SWITCH_GLB_PP7_ID_S))
#define SWITCH_GLB_PP7_ID_V  0x7
#define SWITCH_GLB_PP7_ID_S  21
/* SWITCH_GLB_PP6_ID : RO ;bitpos:[20:18] ;default: 3'd6 ; */
/*description: Respresent Physical Port ID.*/
#define SWITCH_GLB_PP6_ID    0x00000007
#define SWITCH_GLB_PP6_ID_M  ((SWITCH_GLB_PP6_ID_V)<<(SWITCH_GLB_PP6_ID_S))
#define SWITCH_GLB_PP6_ID_V  0x7
#define SWITCH_GLB_PP6_ID_S  18
/* SWITCH_GLB_PP5_ID : RO ;bitpos:[17:15] ;default: 3'd5 ; */
/*description: Respresent Physical Port ID.*/
#define SWITCH_GLB_PP5_ID    0x00000007
#define SWITCH_GLB_PP5_ID_M  ((SWITCH_GLB_PP5_ID_V)<<(SWITCH_GLB_PP5_ID_S))
#define SWITCH_GLB_PP5_ID_V  0x7
#define SWITCH_GLB_PP5_ID_S  15
/* SWITCH_GLB_PP4_ID : RO ;bitpos:[14:12] ;default: 3'd4 ; */
/*description: Respresent Physical Port ID.*/
#define SWITCH_GLB_PP4_ID    0x00000007
#define SWITCH_GLB_PP4_ID_M  ((SWITCH_GLB_PP4_ID_V)<<(SWITCH_GLB_PP4_ID_S))
#define SWITCH_GLB_PP4_ID_V  0x7
#define SWITCH_GLB_PP4_ID_S  12
/* SWITCH_GLB_PP3_ID : RO ;bitpos:[11:9] ;default: 3'd3 ; */
/*description: Respresent Physical Port ID.*/
#define SWITCH_GLB_PP3_ID    0x00000007
#define SWITCH_GLB_PP3_ID_M  ((SWITCH_GLB_PP3_ID_V)<<(SWITCH_GLB_PP3_ID_S))
#define SWITCH_GLB_PP3_ID_V  0x7
#define SWITCH_GLB_PP3_ID_S  9
/* SWITCH_GLB_PP2_ID : RO ;bitpos:[8:6] ;default: 3'd2 ; */
/*description: Respresent Physical Port ID.*/
#define SWITCH_GLB_PP2_ID    0x00000007
#define SWITCH_GLB_PP2_ID_M  ((SWITCH_GLB_PP2_ID_V)<<(SWITCH_GLB_PP2_ID_S))
#define SWITCH_GLB_PP2_ID_V  0x7
#define SWITCH_GLB_PP2_ID_S  6
/* SWITCH_GLB_PP1_ID : RO ;bitpos:[5:3] ;default: 3'd1 ; */
/*description: Respresent Physical Port ID.*/
#define SWITCH_GLB_PP1_ID    0x00000007
#define SWITCH_GLB_PP1_ID_M  ((SWITCH_GLB_PP1_ID_V)<<(SWITCH_GLB_PP1_ID_S))
#define SWITCH_GLB_PP1_ID_V  0x7
#define SWITCH_GLB_PP1_ID_S  3
/* SWITCH_GLB_PP0_ID : RO ;bitpos:[2:0] ;default: 3'd0 ; */
/*description: Respresent Physical Port ID.*/
#define SWITCH_GLB_PP0_ID    0x00000007
#define SWITCH_GLB_PP0_ID_M  ((SWITCH_GLB_PP0_ID_V)<<(SWITCH_GLB_PP0_ID_S))
#define SWITCH_GLB_PP0_ID_V  0x7
#define SWITCH_GLB_PP0_ID_S  0

#define SWITCH_GLB_LOGIC_PORT_ID_REG          (DR_REG_SWITCH_GLB_BASE + 0x10)
/* SWITCH_GLB_LP7_ID : R/W ;bitpos:[23:21] ;default: 3'd7 ; */
/*description: Configures Logic Port ID.*/
#define SWITCH_GLB_LP7_ID    0x00000007
#define SWITCH_GLB_LP7_ID_M  ((SWITCH_GLB_LP7_ID_V)<<(SWITCH_GLB_LP7_ID_S))
#define SWITCH_GLB_LP7_ID_V  0x7
#define SWITCH_GLB_LP7_ID_S  21
/* SWITCH_GLB_LP6_ID : R/W ;bitpos:[20:18] ;default: 3'd6 ; */
/*description: Configures Logic Port ID.*/
#define SWITCH_GLB_LP6_ID    0x00000007
#define SWITCH_GLB_LP6_ID_M  ((SWITCH_GLB_LP6_ID_V)<<(SWITCH_GLB_LP6_ID_S))
#define SWITCH_GLB_LP6_ID_V  0x7
#define SWITCH_GLB_LP6_ID_S  18
/* SWITCH_GLB_LP5_ID : R/W ;bitpos:[17:15] ;default: 3'd5 ; */
/*description: Configures Logic Port ID.*/
#define SWITCH_GLB_LP5_ID    0x00000007
#define SWITCH_GLB_LP5_ID_M  ((SWITCH_GLB_LP5_ID_V)<<(SWITCH_GLB_LP5_ID_S))
#define SWITCH_GLB_LP5_ID_V  0x7
#define SWITCH_GLB_LP5_ID_S  15
/* SWITCH_GLB_LP4_ID : R/W ;bitpos:[14:12] ;default: 3'd4 ; */
/*description: Configures Logic Port ID.*/
#define SWITCH_GLB_LP4_ID    0x00000007
#define SWITCH_GLB_LP4_ID_M  ((SWITCH_GLB_LP4_ID_V)<<(SWITCH_GLB_LP4_ID_S))
#define SWITCH_GLB_LP4_ID_V  0x7
#define SWITCH_GLB_LP4_ID_S  12
/* SWITCH_GLB_LP3_ID : R/W ;bitpos:[11:9] ;default: 3'd3 ; */
/*description: Configures Logic Port ID.*/
#define SWITCH_GLB_LP3_ID    0x00000007
#define SWITCH_GLB_LP3_ID_M  ((SWITCH_GLB_LP3_ID_V)<<(SWITCH_GLB_LP3_ID_S))
#define SWITCH_GLB_LP3_ID_V  0x7
#define SWITCH_GLB_LP3_ID_S  9
/* SWITCH_GLB_LP2_ID : R/W ;bitpos:[8:6] ;default: 3'd2 ; */
/*description: Configures Logic Port ID.*/
#define SWITCH_GLB_LP2_ID    0x00000007
#define SWITCH_GLB_LP2_ID_M  ((SWITCH_GLB_LP2_ID_V)<<(SWITCH_GLB_LP2_ID_S))
#define SWITCH_GLB_LP2_ID_V  0x7
#define SWITCH_GLB_LP2_ID_S  6
/* SWITCH_GLB_LP1_ID : R/W ;bitpos:[5:3] ;default: 3'd1 ; */
/*description: Configures Logic Port ID.*/
#define SWITCH_GLB_LP1_ID    0x00000007
#define SWITCH_GLB_LP1_ID_M  ((SWITCH_GLB_LP1_ID_V)<<(SWITCH_GLB_LP1_ID_S))
#define SWITCH_GLB_LP1_ID_V  0x7
#define SWITCH_GLB_LP1_ID_S  3
/* SWITCH_GLB_LP0_ID : R/W ;bitpos:[2:0] ;default: 3'd0 ; */
/*description: Configures Logic Port ID.*/
#define SWITCH_GLB_LP0_ID    0x00000007
#define SWITCH_GLB_LP0_ID_M  ((SWITCH_GLB_LP0_ID_V)<<(SWITCH_GLB_LP0_ID_S))
#define SWITCH_GLB_LP0_ID_V  0x7
#define SWITCH_GLB_LP0_ID_S  0

#define SWITCH_GLB_IMP_TAG_REG          (DR_REG_SWITCH_GLB_BASE + 0x14)
/* SWITCH_GLB_IMP_TAG_TYPE : R/W ;bitpos:[31:16] ;default: 16'h9998 ; */
/*description: Configures IMP Tag type.*/
#define SWITCH_GLB_IMP_TAG_TYPE    0x0000FFFF
#define SWITCH_GLB_IMP_TAG_TYPE_M  ((SWITCH_GLB_IMP_TAG_TYPE_V)<<(SWITCH_GLB_IMP_TAG_TYPE_S))
#define SWITCH_GLB_IMP_TAG_TYPE_V  0xFFFF
#define SWITCH_GLB_IMP_TAG_TYPE_S  16
/* SWITCH_GLB_PP0_IMP_TAG_EN : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: Configures Physical Port 0, IMP Tag en.*/
#define SWITCH_GLB_PP0_IMP_TAG_EN    (BIT(0))
#define SWITCH_GLB_PP0_IMP_TAG_EN_M  (BIT(0))
#define SWITCH_GLB_PP0_IMP_TAG_EN_V  0x1
#define SWITCH_GLB_PP0_IMP_TAG_EN_S  0

#define SWITCH_GLB_PKT_GAP_VALUE_REG          (DR_REG_SWITCH_GLB_BASE + 0x18)
/* SWITCH_GLB_GAP_VALUE : R/W ;bitpos:[7:0] ;default: 8'd24 ; */
/*description: Configures Packet gap value; IPG+CRC+Preamble; Default: 24Byte.*/
#define SWITCH_GLB_GAP_VALUE    0x000000FF
#define SWITCH_GLB_GAP_VALUE_M  ((SWITCH_GLB_GAP_VALUE_V)<<(SWITCH_GLB_GAP_VALUE_S))
#define SWITCH_GLB_GAP_VALUE_V  0xFF
#define SWITCH_GLB_GAP_VALUE_S  0

#define SWITCH_GLB_RMU_REG          (DR_REG_SWITCH_GLB_BASE + 0x1C)
/* SWITCH_GLB_RMU_TX_TIMEOUT : R/W/SC ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: Configures RMU TX Packet timeout; 4'd0: 0us; 4'd1: 1us; 4'd2: 2us; 4'd3: 4us; 4'
d4: 8us; 4'd5: 16us; 4'd6: 32us; 4'd7: 64us; 4'd8: 128us; 4'd9: 256us; 4'd10: 51
2us; Others: Resv.*/
#define SWITCH_GLB_RMU_TX_TIMEOUT    0x0000000F
#define SWITCH_GLB_RMU_TX_TIMEOUT_M  ((SWITCH_GLB_RMU_TX_TIMEOUT_V)<<(SWITCH_GLB_RMU_TX_TIMEOUT_S))
#define SWITCH_GLB_RMU_TX_TIMEOUT_V  0xF
#define SWITCH_GLB_RMU_TX_TIMEOUT_S  24
/* SWITCH_GLB_RMU_EN_P4 : R/W ;bitpos:[20] ;default: 1'b0 ; */
/*description: See bit[16].*/
#define SWITCH_GLB_RMU_EN_P4    (BIT(20))
#define SWITCH_GLB_RMU_EN_P4_M  (BIT(20))
#define SWITCH_GLB_RMU_EN_P4_V  0x1
#define SWITCH_GLB_RMU_EN_P4_S  20
/* SWITCH_GLB_RMU_EN_P3 : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: See bit[16].*/
#define SWITCH_GLB_RMU_EN_P3    (BIT(19))
#define SWITCH_GLB_RMU_EN_P3_M  (BIT(19))
#define SWITCH_GLB_RMU_EN_P3_V  0x1
#define SWITCH_GLB_RMU_EN_P3_S  19
/* SWITCH_GLB_RMU_EN_P2 : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: See bit[16].*/
#define SWITCH_GLB_RMU_EN_P2    (BIT(18))
#define SWITCH_GLB_RMU_EN_P2_M  (BIT(18))
#define SWITCH_GLB_RMU_EN_P2_V  0x1
#define SWITCH_GLB_RMU_EN_P2_S  18
/* SWITCH_GLB_RMU_EN_P1 : R/W ;bitpos:[17] ;default: 1'b0 ; */
/*description: See bit[16].*/
#define SWITCH_GLB_RMU_EN_P1    (BIT(17))
#define SWITCH_GLB_RMU_EN_P1_M  (BIT(17))
#define SWITCH_GLB_RMU_EN_P1_V  0x1
#define SWITCH_GLB_RMU_EN_P1_S  17
/* SWITCH_GLB_RMU_EN_P0 : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures RMU enable for Port.*/
#define SWITCH_GLB_RMU_EN_P0    (BIT(16))
#define SWITCH_GLB_RMU_EN_P0_M  (BIT(16))
#define SWITCH_GLB_RMU_EN_P0_V  0x1
#define SWITCH_GLB_RMU_EN_P0_S  16
/* SWITCH_GLB_RMU_TAG_TYPE : R/W ;bitpos:[15:0] ;default: 16'h9999 ; */
/*description: Configures RMU Tag Type.*/
#define SWITCH_GLB_RMU_TAG_TYPE    0x0000FFFF
#define SWITCH_GLB_RMU_TAG_TYPE_M  ((SWITCH_GLB_RMU_TAG_TYPE_V)<<(SWITCH_GLB_RMU_TAG_TYPE_S))
#define SWITCH_GLB_RMU_TAG_TYPE_V  0xFFFF
#define SWITCH_GLB_RMU_TAG_TYPE_S  0

#define SWITCH_GLB_PTPT_CFG_REG          (DR_REG_SWITCH_GLB_BASE + 0x20)
/* SWITCH_GLB_PT_NSEC_FRACTION : R/W ;bitpos:[20:13] ;default: 8'd0 ; */
/*description: Configures ptpt timer period ns fraction(fraction * 1/256ns).*/
#define SWITCH_GLB_PT_NSEC_FRACTION    0x000000FF
#define SWITCH_GLB_PT_NSEC_FRACTION_M  ((SWITCH_GLB_PT_NSEC_FRACTION_V)<<(SWITCH_GLB_PT_NSEC_FRACTION_S))
#define SWITCH_GLB_PT_NSEC_FRACTION_V  0xFF
#define SWITCH_GLB_PT_NSEC_FRACTION_S  13
/* SWITCH_GLB_PT_NSEC_INTEGER : R/W ;bitpos:[12:5] ;default: 8'd4 ; */
/*description: Configures ptpt timer period ns integer(0~255ns).*/
#define SWITCH_GLB_PT_NSEC_INTEGER    0x000000FF
#define SWITCH_GLB_PT_NSEC_INTEGER_M  ((SWITCH_GLB_PT_NSEC_INTEGER_V)<<(SWITCH_GLB_PT_NSEC_INTEGER_S))
#define SWITCH_GLB_PT_NSEC_INTEGER_V  0xFF
#define SWITCH_GLB_PT_NSEC_INTEGER_S  5
/* SWITCH_GLB_PT_TIMER_EN : R/W ;bitpos:[4] ;default: 1'b1 ; */
/*description: Configures ptpt enable.*/
#define SWITCH_GLB_PT_TIMER_EN    (BIT(4))
#define SWITCH_GLB_PT_TIMER_EN_M  (BIT(4))
#define SWITCH_GLB_PT_TIMER_EN_V  0x1
#define SWITCH_GLB_PT_TIMER_EN_S  4
/* SWITCH_GLB_PT_PULSE_1S_EN : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description: Configures ptpt 1s enable.*/
#define SWITCH_GLB_PT_PULSE_1S_EN    (BIT(3))
#define SWITCH_GLB_PT_PULSE_1S_EN_M  (BIT(3))
#define SWITCH_GLB_PT_PULSE_1S_EN_V  0x1
#define SWITCH_GLB_PT_PULSE_1S_EN_S  3
/* SWITCH_GLB_PT_PULSE_10MS_EN : R/W ;bitpos:[2] ;default: 1'b1 ; */
/*description: Configures ptpt 10ms enable.*/
#define SWITCH_GLB_PT_PULSE_10MS_EN    (BIT(2))
#define SWITCH_GLB_PT_PULSE_10MS_EN_M  (BIT(2))
#define SWITCH_GLB_PT_PULSE_10MS_EN_V  0x1
#define SWITCH_GLB_PT_PULSE_10MS_EN_S  2
/* SWITCH_GLB_PT_PULSE_1MS_EN : R/W ;bitpos:[1] ;default: 1'b1 ; */
/*description: Configures ptpt 1ms enable.*/
#define SWITCH_GLB_PT_PULSE_1MS_EN    (BIT(1))
#define SWITCH_GLB_PT_PULSE_1MS_EN_M  (BIT(1))
#define SWITCH_GLB_PT_PULSE_1MS_EN_V  0x1
#define SWITCH_GLB_PT_PULSE_1MS_EN_S  1
/* SWITCH_GLB_PT_PULSE_1US_EN : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: Configures ptpt 1us enable.*/
#define SWITCH_GLB_PT_PULSE_1US_EN    (BIT(0))
#define SWITCH_GLB_PT_PULSE_1US_EN_M  (BIT(0))
#define SWITCH_GLB_PT_PULSE_1US_EN_V  0x1
#define SWITCH_GLB_PT_PULSE_1US_EN_S  0

#define SWITCH_GLB_CLK_EN_REG          (DR_REG_SWITCH_GLB_BASE + 0x24)
/* SWITCH_GLB_CLK_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Configures CLK_EN.*/
#define SWITCH_GLB_CLK_EN    (BIT(0))
#define SWITCH_GLB_CLK_EN_M  (BIT(0))
#define SWITCH_GLB_CLK_EN_V  0x1
#define SWITCH_GLB_CLK_EN_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_GLB_REG_H_ */
