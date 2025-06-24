/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_PCS_REG_H_
#define _SWITCH_SWITCH_PCS_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

#define SWITCH_PCS_DATE_REG          (DR_REG_SWITCH_PCS_BASE + 0x0)
/* SWITCH_PCS_DATE : R/W ;bitpos:[31:0] ;default: 32'h20240412 ; */
/*description: register version..*/
#define SWITCH_PCS_DATE    0xFFFFFFFF
#define SWITCH_PCS_DATE_M  ((SWITCH_PCS_DATE_V)<<(SWITCH_PCS_DATE_S))
#define SWITCH_PCS_DATE_V  0xFFFFFFFF
#define SWITCH_PCS_DATE_S  0

#define SWITCH_PCS_CTRL_REG          (DR_REG_SWITCH_PCS_BASE + 0x4)
/* SWITCH_PCS_FAREND_LPBK_EN : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: configures whether PCS loopback the receive data into the transmit path..*/
#define SWITCH_PCS_FAREND_LPBK_EN    (BIT(15))
#define SWITCH_PCS_FAREND_LPBK_EN_M  (BIT(15))
#define SWITCH_PCS_FAREND_LPBK_EN_V  0x1
#define SWITCH_PCS_FAREND_LPBK_EN_S  15
/* SWITCH_PCS_NEAREND_LPBK_EN : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: configures whether PCS loopback the transmit data into the receive path..*/
#define SWITCH_PCS_NEAREND_LPBK_EN    (BIT(14))
#define SWITCH_PCS_NEAREND_LPBK_EN_M  (BIT(14))
#define SWITCH_PCS_NEAREND_LPBK_EN_V  0x1
#define SWITCH_PCS_NEAREND_LPBK_EN_S  14
/* SWITCH_PCS_AN_EN : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures whether to enable the PCS to perform auto-negotiation with the link p
artner..*/
#define SWITCH_PCS_AN_EN    (BIT(12))
#define SWITCH_PCS_AN_EN_M  (BIT(12))
#define SWITCH_PCS_AN_EN_V  0x1
#define SWITCH_PCS_AN_EN_S  12
/* SWITCH_PCS_AN_RESTART : R/W/SS ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether to restart auto-negotiation if reg_an_en is set. This bit is
self-clearing after auto-negotiation starts..*/
#define SWITCH_PCS_AN_RESTART    (BIT(9))
#define SWITCH_PCS_AN_RESTART_M  (BIT(9))
#define SWITCH_PCS_AN_RESTART_V  0x1
#define SWITCH_PCS_AN_RESTART_S  9

#define SWITCH_PCS_AN_STATUS_REG          (DR_REG_SWITCH_PCS_BASE + 0x8)
/* SWITCH_PCS_WORD_ALIGNED_OFST : RO ;bitpos:[20:17] ;default: 4'h0 ; */
/*description: Represent word aligned offset.*/
#define SWITCH_PCS_WORD_ALIGNED_OFST    0x0000000F
#define SWITCH_PCS_WORD_ALIGNED_OFST_M  ((SWITCH_PCS_WORD_ALIGNED_OFST_V)<<(SWITCH_PCS_WORD_ALIGNED_OFST_S))
#define SWITCH_PCS_WORD_ALIGNED_OFST_V  0xF
#define SWITCH_PCS_WORD_ALIGNED_OFST_S  17
/* SWITCH_PCS_WORD_ALIGNED : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represent whether word aligned work.*/
#define SWITCH_PCS_WORD_ALIGNED    (BIT(16))
#define SWITCH_PCS_WORD_ALIGNED_M  (BIT(16))
#define SWITCH_PCS_WORD_ALIGNED_V  0x1
#define SWITCH_PCS_WORD_ALIGNED_S  16
/* SWITCH_PCS_AN_STATE : RO ;bitpos:[15:8] ;default: 8'h1 ; */
/*description: Represent auto-negotiation fsm state..*/
#define SWITCH_PCS_AN_STATE    0x000000FF
#define SWITCH_PCS_AN_STATE_M  ((SWITCH_PCS_AN_STATE_V)<<(SWITCH_PCS_AN_STATE_S))
#define SWITCH_PCS_AN_STATE_V  0xFF
#define SWITCH_PCS_AN_STATE_S  8
/* SWITCH_PCS_SYNC_STATUS : RO ;bitpos:[6] ;default: 1'h0 ; */
/*description: Represent whether the sync status is up..*/
#define SWITCH_PCS_SYNC_STATUS    (BIT(6))
#define SWITCH_PCS_SYNC_STATUS_M  (BIT(6))
#define SWITCH_PCS_SYNC_STATUS_V  0x1
#define SWITCH_PCS_SYNC_STATUS_S  6
/* SWITCH_PCS_AN_COMPLETE : RO ;bitpos:[5] ;default: 1'h0 ; */
/*description: Represent whether the auto-negotiation process is complete..*/
#define SWITCH_PCS_AN_COMPLETE    (BIT(5))
#define SWITCH_PCS_AN_COMPLETE_M  (BIT(5))
#define SWITCH_PCS_AN_COMPLETE_V  0x1
#define SWITCH_PCS_AN_COMPLETE_S  5
/* SWITCH_PCS_AN_ABILITY : RO ;bitpos:[3] ;default: 1'h1 ; */
/*description: an_initiated.*/
#define SWITCH_PCS_AN_ABILITY    (BIT(3))
#define SWITCH_PCS_AN_ABILITY_M  (BIT(3))
#define SWITCH_PCS_AN_ABILITY_V  0x1
#define SWITCH_PCS_AN_ABILITY_S  3
/* SWITCH_PCS_DATA_LINK_STATUS : RO ;bitpos:[2] ;default: 1'h0 ; */
/*description: Represent whether the data channel is up or down.If AN is going on, data  cannot
 be transferred across the link and hence the link is given as down..*/
#define SWITCH_PCS_DATA_LINK_STATUS    (BIT(2))
#define SWITCH_PCS_DATA_LINK_STATUS_M  (BIT(2))
#define SWITCH_PCS_DATA_LINK_STATUS_V  0x1
#define SWITCH_PCS_DATA_LINK_STATUS_S  2

#define SWITCH_PCS_LINK_TIMER_REG          (DR_REG_SWITCH_PCS_BASE + 0xC)
/* SWITCH_PCS_LINK_TIMER : R/W ;bitpos:[18:0] ;default: 19'd200000 ; */
/*description: Configures the value of link_timer,unit number of PCS RX clock.*/
#define SWITCH_PCS_LINK_TIMER    0x0007FFFF
#define SWITCH_PCS_LINK_TIMER_M  ((SWITCH_PCS_LINK_TIMER_V)<<(SWITCH_PCS_LINK_TIMER_S))
#define SWITCH_PCS_LINK_TIMER_V  0x7FFFF
#define SWITCH_PCS_LINK_TIMER_S  0

#define SWITCH_PCS_CLK_EN_REG          (DR_REG_SWITCH_PCS_BASE + 0x10)
/* SWITCH_PCS_CLK_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: reserved.*/
#define SWITCH_PCS_CLK_EN    (BIT(0))
#define SWITCH_PCS_CLK_EN_M  (BIT(0))
#define SWITCH_PCS_CLK_EN_V  0x1
#define SWITCH_PCS_CLK_EN_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_PCS_REG_H_ */