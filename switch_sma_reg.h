/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_SMA_REG_H_
#define _SWITCH_SWITCH_SMA_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

#define SWITCH_SMA_MDIO_CFG_REG          (DR_REG_SWITCH_SMA_BASE + 0x0)
/* SWITCH_SMA_MDIO_SUP_PRE : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether to accelerate external PHY configutation management. 0:MDIO f
rames have 32-bit preamble(all-ones). 1:MDIO frames have 1-bit preamble(all-ones
)..*/
#define SWITCH_SMA_MDIO_SUP_PRE    (BIT(8))
#define SWITCH_SMA_MDIO_SUP_PRE_M  (BIT(8))
#define SWITCH_SMA_MDIO_SUP_PRE_V  0x1
#define SWITCH_SMA_MDIO_SUP_PRE_S  8
/* SWITCH_SMA_APPCLKRANGE : R/W ;bitpos:[4:1] ;default: 4'h0 ; */
/*description: SYS CLK Range. The SYS CLK Range selection determines the frequency of the MDC c
lock according to  the SYS clock frequency used in your design. The suggested ra
nge of CYS clock frequency applicable for each value(when Bit[5]=0) ensures that
 the MDC clock is approximately between the frequency range 1.0MHZ-2.5MHZ.; 0000
 : The CYS clock frequency is 60-100MHZ and the MDC clock frequency is CYS clock
/42.; 0001 : The CYS clock frequency is 100-150MHZ and the MDC clock frequency i
s CYS clock/62.; 0010 : The CYS clock frequency is 20-35MHZ and the MDC clock fr
equency is CYS clock/16.; 0011 : The CYS clock frequency is 35-60MHZ and the MDC
 clock frequency is CYS clock/26.; 0100 : The CYS clock frequency is 150-250MHZ
and the MDC clock frequency is CYS clock/102.; 0101 : The CYS clock frequency is
 250-300MHZ and the MDC clock frequency is CYS clock/124.; 0110 ,0111 : Reserved
; When Bit5 is set,you can achieve higher frequency of the MAC clock than the fr
equency limit of 2.5MHZ. Program the following values only if the interfacing ch
ips support faster MDC clocks.; 1000 : CYS clock/4; 1001 : CYS clock/6; 1010 : C
YS clock/8; 1011 : CYS clock/10; 1100 : CYS clock/12; 1101 : CYS clock/14; 1110
: CYS clock/16; 1111 : CYS clock/18.*/
#define SWITCH_SMA_APPCLKRANGE    0x0000000F
#define SWITCH_SMA_APPCLKRANGE_M  ((SWITCH_SMA_APPCLKRANGE_V)<<(SWITCH_SMA_APPCLKRANGE_S))
#define SWITCH_SMA_APPCLKRANGE_V  0xF
#define SWITCH_SMA_APPCLKRANGE_S  1
/* SWITCH_SMA_MDIO_CLAUSE : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: 0 : Clause 22; 1 : Clause 45.*/
#define SWITCH_SMA_MDIO_CLAUSE    (BIT(0))
#define SWITCH_SMA_MDIO_CLAUSE_M  (BIT(0))
#define SWITCH_SMA_MDIO_CLAUSE_V  0x1
#define SWITCH_SMA_MDIO_CLAUSE_S  0

#define SWITCH_SMA_MDIO_CMD_REG          (DR_REG_SWITCH_SMA_BASE + 0x4)
/* SWITCH_SMA_MDIO_OP_DONE : RO ;bitpos:[29] ;default: 1'h0 ; */
/*description: this bit is set when  transaction completes..*/
#define SWITCH_SMA_MDIO_OP_DONE    (BIT(29))
#define SWITCH_SMA_MDIO_OP_DONE_M  (BIT(29))
#define SWITCH_SMA_MDIO_OP_DONE_V  0x1
#define SWITCH_SMA_MDIO_OP_DONE_S  29
/* SWITCH_SMA_MDIO_START_BUSY : R/W/SS ;bitpos:[28] ;default: 1'h0 ; */
/*description: START_BUSY, Self-clearing, CPU writes this bit to 1 in order to initiate MDIO tr
ansaction. When transaction completes hardware will clear this bit..*/
#define SWITCH_SMA_MDIO_START_BUSY    (BIT(28))
#define SWITCH_SMA_MDIO_START_BUSY_M  (BIT(28))
#define SWITCH_SMA_MDIO_START_BUSY_V  0x1
#define SWITCH_SMA_MDIO_START_BUSY_S  28
/* SWITCH_SMA_MDIO_OP_CODE : R/W ;bitpos:[27:26] ;default: 2'h0 ; */
/*description: 00b : Address for Clause 45; 01b : Write; 10b : Read for clause 22 or Read incre
ment for clause 45; 11b : Read for clause 45.*/
#define SWITCH_SMA_MDIO_OP_CODE    0x00000003
#define SWITCH_SMA_MDIO_OP_CODE_M  ((SWITCH_SMA_MDIO_OP_CODE_V)<<(SWITCH_SMA_MDIO_OP_CODE_S))
#define SWITCH_SMA_MDIO_OP_CODE_V  0x3
#define SWITCH_SMA_MDIO_OP_CODE_S  26
/* SWITCH_SMA_MDIO_PHY_PRT_ADDR : R/W ;bitpos:[25:21] ;default: 5'h0 ; */
/*description: PHY address[4:0] for Clause 22, Port address[4:0] for Clause 45..*/
#define SWITCH_SMA_MDIO_PHY_PRT_ADDR    0x0000001F
#define SWITCH_SMA_MDIO_PHY_PRT_ADDR_M  ((SWITCH_SMA_MDIO_PHY_PRT_ADDR_V)<<(SWITCH_SMA_MDIO_PHY_PRT_ADDR_S))
#define SWITCH_SMA_MDIO_PHY_PRT_ADDR_V  0x1F
#define SWITCH_SMA_MDIO_PHY_PRT_ADDR_S  21
/* SWITCH_SMA_MDIO_REG_DEV_ADDR : R/W ;bitpos:[20:16] ;default: 5'h0 ; */
/*description: Register address[4:0] for Clause 22, Device address[4:0] for Clause 45..*/
#define SWITCH_SMA_MDIO_REG_DEV_ADDR    0x0000001F
#define SWITCH_SMA_MDIO_REG_DEV_ADDR_M  ((SWITCH_SMA_MDIO_REG_DEV_ADDR_V)<<(SWITCH_SMA_MDIO_REG_DEV_ADDR_S))
#define SWITCH_SMA_MDIO_REG_DEV_ADDR_V  0x1F
#define SWITCH_SMA_MDIO_REG_DEV_ADDR_S  16
/* SWITCH_SMA_MDIO_WDATA_ADDR : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: When op is Write , this field is MDIO Write data[15:0]. When op is Address, this
 field is MDIO address[15:0]..*/
#define SWITCH_SMA_MDIO_WDATA_ADDR    0x0000FFFF
#define SWITCH_SMA_MDIO_WDATA_ADDR_M  ((SWITCH_SMA_MDIO_WDATA_ADDR_V)<<(SWITCH_SMA_MDIO_WDATA_ADDR_S))
#define SWITCH_SMA_MDIO_WDATA_ADDR_V  0xFFFF
#define SWITCH_SMA_MDIO_WDATA_ADDR_S  0

#define SWITCH_SMA_MDIO_READ_DATA_REG          (DR_REG_SWITCH_SMA_BASE + 0x8)
/* SWITCH_SMA_MDIO_RDATA : RO ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: This field contains the 16-bit data value read from the PHY after a Management R
ead operation..*/
#define SWITCH_SMA_MDIO_RDATA    0x0000FFFF
#define SWITCH_SMA_MDIO_RDATA_M  ((SWITCH_SMA_MDIO_RDATA_V)<<(SWITCH_SMA_MDIO_RDATA_S))
#define SWITCH_SMA_MDIO_RDATA_V  0xFFFF
#define SWITCH_SMA_MDIO_RDATA_S  0

#define SWITCH_SMA_CLK_EN_REG          (DR_REG_SWITCH_SMA_BASE + 0xC)
/* SWITCH_SMA_CLK_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: reserved.*/
#define SWITCH_SMA_CLK_EN    (BIT(0))
#define SWITCH_SMA_CLK_EN_M  (BIT(0))
#define SWITCH_SMA_CLK_EN_V  0x1
#define SWITCH_SMA_CLK_EN_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_SMA_REG_H_ */
