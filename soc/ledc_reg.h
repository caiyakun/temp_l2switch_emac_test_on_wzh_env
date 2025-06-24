/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_LEDC_REG_H_
#define _SOC_LEDC_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define LEDC_CH0_CONF0_REG          (DR_REG_LEDC_BASE + 0x0)
/* LEDC_OVF_CNT_RESET_CH0 : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether or not to reset the  ovf_cnt of channel $n.\\0: Invalid. No e
ffect\\1: Reset the ovf_cnt.*/
#define LEDC_OVF_CNT_RESET_CH0    (BIT(16))
#define LEDC_OVF_CNT_RESET_CH0_M  (BIT(16))
#define LEDC_OVF_CNT_RESET_CH0_V  0x1
#define LEDC_OVF_CNT_RESET_CH0_S  16
/* LEDC_OVF_CNT_EN_CH0 : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the ovf_cnt of channel $n.\\0: Disable\\1: E
nable.*/
#define LEDC_OVF_CNT_EN_CH0    (BIT(15))
#define LEDC_OVF_CNT_EN_CH0_M  (BIT(15))
#define LEDC_OVF_CNT_EN_CH0_V  0x1
#define LEDC_OVF_CNT_EN_CH0_S  15
/* LEDC_OVF_NUM_CH0 : R/W ;bitpos:[14:5] ;default: 10'b0 ; */
/*description: Configures the maximum times of overflow minus 1.The LEDC_OVF_CNT_CH$n_INT inter
rupt will be triggered when channel $n overflows for (LEDC_OVF_NUM_CH$n + 1) tim
es..*/
#define LEDC_OVF_NUM_CH0    0x000003FF
#define LEDC_OVF_NUM_CH0_M  ((LEDC_OVF_NUM_CH0_V)<<(LEDC_OVF_NUM_CH0_S))
#define LEDC_OVF_NUM_CH0_V  0x3FF
#define LEDC_OVF_NUM_CH0_S  5
/* LEDC_PARA_UP_CH0 : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configures whether or not to update LEDC_HPOINT_CH$n, LEDC_DUTY_START_CH$n, LEDC
_SIG_OUT_EN_CH$n, LEDC_TIMER_SEL_CH$n, LEDC_OVF_CNT_EN_CH$n fields and duty cycl
e range configuration for channel $n, and will be automatically cleared by hardw
are.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_PARA_UP_CH0    (BIT(4))
#define LEDC_PARA_UP_CH0_M  (BIT(4))
#define LEDC_PARA_UP_CH0_V  0x1
#define LEDC_PARA_UP_CH0_S  4
/* LEDC_IDLE_LV_CH0 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Configures the output value when channel $n is inactive. Valid only when  LEDC_S
IG_OUT_EN_CH$n is 0.\\0: Output level is low\\1: Output level is high.*/
#define LEDC_IDLE_LV_CH0    (BIT(3))
#define LEDC_IDLE_LV_CH0_M  (BIT(3))
#define LEDC_IDLE_LV_CH0_V  0x1
#define LEDC_IDLE_LV_CH0_S  3
/* LEDC_SIG_OUT_EN_CH0 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configures whether or not to enable signal output on channel $n.\\0: Signal outp
ut disable\\1: Signal output enable.*/
#define LEDC_SIG_OUT_EN_CH0    (BIT(2))
#define LEDC_SIG_OUT_EN_CH0_M  (BIT(2))
#define LEDC_SIG_OUT_EN_CH0_V  0x1
#define LEDC_SIG_OUT_EN_CH0_S  2
/* LEDC_TIMER_SEL_CH0 : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: Configures which timer is channel $n selected.\\0: Select timer0\\1: Select time
r1\\2: Select timer2\\3: Select timer3.*/
#define LEDC_TIMER_SEL_CH0    0x00000003
#define LEDC_TIMER_SEL_CH0_M  ((LEDC_TIMER_SEL_CH0_V)<<(LEDC_TIMER_SEL_CH0_S))
#define LEDC_TIMER_SEL_CH0_V  0x3
#define LEDC_TIMER_SEL_CH0_S  0

#define LEDC_CH0_HPOINT_REG          (DR_REG_LEDC_BASE + 0x4)
/* LEDC_HPOINT_CH0 : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures high point of signal output on channel $n. The output value changes t
o high when the selected timers has reached the value specified by this register
..*/
#define LEDC_HPOINT_CH0    0x000FFFFF
#define LEDC_HPOINT_CH0_M  ((LEDC_HPOINT_CH0_V)<<(LEDC_HPOINT_CH0_S))
#define LEDC_HPOINT_CH0_V  0xFFFFF
#define LEDC_HPOINT_CH0_S  0

#define LEDC_CH0_DUTY_REG          (DR_REG_LEDC_BASE + 0x8)
/* LEDC_DUTY_CH0 : R/W ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Configures the duty of signal output on channel $n..*/
#define LEDC_DUTY_CH0    0x01FFFFFF
#define LEDC_DUTY_CH0_M  ((LEDC_DUTY_CH0_V)<<(LEDC_DUTY_CH0_S))
#define LEDC_DUTY_CH0_V  0x1FFFFFF
#define LEDC_DUTY_CH0_S  0

#define LEDC_CH0_CONF1_REG          (DR_REG_LEDC_BASE + 0xC)
/* LEDC_DUTY_START_CH0 : R/W/SC ;bitpos:[31] ;default: 1'b0 ; */
/*description: Configures whether the duty cycle fading configurations take effect.\\0: Not tak
e effect\\1: Take effect.*/
#define LEDC_DUTY_START_CH0    (BIT(31))
#define LEDC_DUTY_START_CH0_M  (BIT(31))
#define LEDC_DUTY_START_CH0_V  0x1
#define LEDC_DUTY_START_CH0_S  31

#define LEDC_CH0_DUTY_R_REG          (DR_REG_LEDC_BASE + 0x10)
/* LEDC_DUTY_CH0_R : RO ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Represents the current duty of output signal on channel $n..*/
#define LEDC_DUTY_CH0_R    0x01FFFFFF
#define LEDC_DUTY_CH0_R_M  ((LEDC_DUTY_CH0_R_V)<<(LEDC_DUTY_CH0_R_S))
#define LEDC_DUTY_CH0_R_V  0x1FFFFFF
#define LEDC_DUTY_CH0_R_S  0

#define LEDC_CH1_CONF0_REG          (DR_REG_LEDC_BASE + 0x14)
/* LEDC_OVF_CNT_RESET_CH1 : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether or not to reset the  ovf_cnt of channel $n.\\0: Invalid. No e
ffect\\1: Reset the ovf_cnt.*/
#define LEDC_OVF_CNT_RESET_CH1    (BIT(16))
#define LEDC_OVF_CNT_RESET_CH1_M  (BIT(16))
#define LEDC_OVF_CNT_RESET_CH1_V  0x1
#define LEDC_OVF_CNT_RESET_CH1_S  16
/* LEDC_OVF_CNT_EN_CH1 : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the ovf_cnt of channel $n.\\0: Disable\\1: E
nable.*/
#define LEDC_OVF_CNT_EN_CH1    (BIT(15))
#define LEDC_OVF_CNT_EN_CH1_M  (BIT(15))
#define LEDC_OVF_CNT_EN_CH1_V  0x1
#define LEDC_OVF_CNT_EN_CH1_S  15
/* LEDC_OVF_NUM_CH1 : R/W ;bitpos:[14:5] ;default: 10'b0 ; */
/*description: Configures the maximum times of overflow minus 1.The LEDC_OVF_CNT_CH$n_INT inter
rupt will be triggered when channel $n overflows for (LEDC_OVF_NUM_CH$n + 1) tim
es..*/
#define LEDC_OVF_NUM_CH1    0x000003FF
#define LEDC_OVF_NUM_CH1_M  ((LEDC_OVF_NUM_CH1_V)<<(LEDC_OVF_NUM_CH1_S))
#define LEDC_OVF_NUM_CH1_V  0x3FF
#define LEDC_OVF_NUM_CH1_S  5
/* LEDC_PARA_UP_CH1 : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configures whether or not to update LEDC_HPOINT_CH$n, LEDC_DUTY_START_CH$n, LEDC
_SIG_OUT_EN_CH$n, LEDC_TIMER_SEL_CH$n, LEDC_OVF_CNT_EN_CH$n fields and duty cycl
e range configuration for channel $n, and will be automatically cleared by hardw
are.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_PARA_UP_CH1    (BIT(4))
#define LEDC_PARA_UP_CH1_M  (BIT(4))
#define LEDC_PARA_UP_CH1_V  0x1
#define LEDC_PARA_UP_CH1_S  4
/* LEDC_IDLE_LV_CH1 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Configures the output value when channel $n is inactive. Valid only when  LEDC_S
IG_OUT_EN_CH$n is 0.\\0: Output level is low\\1: Output level is high.*/
#define LEDC_IDLE_LV_CH1    (BIT(3))
#define LEDC_IDLE_LV_CH1_M  (BIT(3))
#define LEDC_IDLE_LV_CH1_V  0x1
#define LEDC_IDLE_LV_CH1_S  3
/* LEDC_SIG_OUT_EN_CH1 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configures whether or not to enable signal output on channel $n.\\0: Signal outp
ut disable\\1: Signal output enable.*/
#define LEDC_SIG_OUT_EN_CH1    (BIT(2))
#define LEDC_SIG_OUT_EN_CH1_M  (BIT(2))
#define LEDC_SIG_OUT_EN_CH1_V  0x1
#define LEDC_SIG_OUT_EN_CH1_S  2
/* LEDC_TIMER_SEL_CH1 : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: Configures which timer is channel $n selected.\\0: Select timer0\\1: Select time
r1\\2: Select timer2\\3: Select timer3.*/
#define LEDC_TIMER_SEL_CH1    0x00000003
#define LEDC_TIMER_SEL_CH1_M  ((LEDC_TIMER_SEL_CH1_V)<<(LEDC_TIMER_SEL_CH1_S))
#define LEDC_TIMER_SEL_CH1_V  0x3
#define LEDC_TIMER_SEL_CH1_S  0

#define LEDC_CH1_HPOINT_REG          (DR_REG_LEDC_BASE + 0x18)
/* LEDC_HPOINT_CH1 : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures high point of signal output on channel $n. The output value changes t
o high when the selected timers has reached the value specified by this register
..*/
#define LEDC_HPOINT_CH1    0x000FFFFF
#define LEDC_HPOINT_CH1_M  ((LEDC_HPOINT_CH1_V)<<(LEDC_HPOINT_CH1_S))
#define LEDC_HPOINT_CH1_V  0xFFFFF
#define LEDC_HPOINT_CH1_S  0

#define LEDC_CH1_DUTY_REG          (DR_REG_LEDC_BASE + 0x1C)
/* LEDC_DUTY_CH1 : R/W ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Configures the duty of signal output on channel $n..*/
#define LEDC_DUTY_CH1    0x01FFFFFF
#define LEDC_DUTY_CH1_M  ((LEDC_DUTY_CH1_V)<<(LEDC_DUTY_CH1_S))
#define LEDC_DUTY_CH1_V  0x1FFFFFF
#define LEDC_DUTY_CH1_S  0

#define LEDC_CH1_CONF1_REG          (DR_REG_LEDC_BASE + 0x20)
/* LEDC_DUTY_START_CH1 : R/W/SC ;bitpos:[31] ;default: 1'b0 ; */
/*description: Configures whether the duty cycle fading configurations take effect.\\0: Not tak
e effect\\1: Take effect.*/
#define LEDC_DUTY_START_CH1    (BIT(31))
#define LEDC_DUTY_START_CH1_M  (BIT(31))
#define LEDC_DUTY_START_CH1_V  0x1
#define LEDC_DUTY_START_CH1_S  31

#define LEDC_CH1_DUTY_R_REG          (DR_REG_LEDC_BASE + 0x24)
/* LEDC_DUTY_CH1_R : RO ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Represents the current duty of output signal on channel $n..*/
#define LEDC_DUTY_CH1_R    0x01FFFFFF
#define LEDC_DUTY_CH1_R_M  ((LEDC_DUTY_CH1_R_V)<<(LEDC_DUTY_CH1_R_S))
#define LEDC_DUTY_CH1_R_V  0x1FFFFFF
#define LEDC_DUTY_CH1_R_S  0

#define LEDC_CH2_CONF0_REG          (DR_REG_LEDC_BASE + 0x28)
/* LEDC_OVF_CNT_RESET_CH2 : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether or not to reset the  ovf_cnt of channel $n.\\0: Invalid. No e
ffect\\1: Reset the ovf_cnt.*/
#define LEDC_OVF_CNT_RESET_CH2    (BIT(16))
#define LEDC_OVF_CNT_RESET_CH2_M  (BIT(16))
#define LEDC_OVF_CNT_RESET_CH2_V  0x1
#define LEDC_OVF_CNT_RESET_CH2_S  16
/* LEDC_OVF_CNT_EN_CH2 : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the ovf_cnt of channel $n.\\0: Disable\\1: E
nable.*/
#define LEDC_OVF_CNT_EN_CH2    (BIT(15))
#define LEDC_OVF_CNT_EN_CH2_M  (BIT(15))
#define LEDC_OVF_CNT_EN_CH2_V  0x1
#define LEDC_OVF_CNT_EN_CH2_S  15
/* LEDC_OVF_NUM_CH2 : R/W ;bitpos:[14:5] ;default: 10'b0 ; */
/*description: Configures the maximum times of overflow minus 1.The LEDC_OVF_CNT_CH$n_INT inter
rupt will be triggered when channel $n overflows for (LEDC_OVF_NUM_CH$n + 1) tim
es..*/
#define LEDC_OVF_NUM_CH2    0x000003FF
#define LEDC_OVF_NUM_CH2_M  ((LEDC_OVF_NUM_CH2_V)<<(LEDC_OVF_NUM_CH2_S))
#define LEDC_OVF_NUM_CH2_V  0x3FF
#define LEDC_OVF_NUM_CH2_S  5
/* LEDC_PARA_UP_CH2 : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configures whether or not to update LEDC_HPOINT_CH$n, LEDC_DUTY_START_CH$n, LEDC
_SIG_OUT_EN_CH$n, LEDC_TIMER_SEL_CH$n, LEDC_OVF_CNT_EN_CH$n fields and duty cycl
e range configuration for channel $n, and will be automatically cleared by hardw
are.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_PARA_UP_CH2    (BIT(4))
#define LEDC_PARA_UP_CH2_M  (BIT(4))
#define LEDC_PARA_UP_CH2_V  0x1
#define LEDC_PARA_UP_CH2_S  4
/* LEDC_IDLE_LV_CH2 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Configures the output value when channel $n is inactive. Valid only when  LEDC_S
IG_OUT_EN_CH$n is 0.\\0: Output level is low\\1: Output level is high.*/
#define LEDC_IDLE_LV_CH2    (BIT(3))
#define LEDC_IDLE_LV_CH2_M  (BIT(3))
#define LEDC_IDLE_LV_CH2_V  0x1
#define LEDC_IDLE_LV_CH2_S  3
/* LEDC_SIG_OUT_EN_CH2 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configures whether or not to enable signal output on channel $n.\\0: Signal outp
ut disable\\1: Signal output enable.*/
#define LEDC_SIG_OUT_EN_CH2    (BIT(2))
#define LEDC_SIG_OUT_EN_CH2_M  (BIT(2))
#define LEDC_SIG_OUT_EN_CH2_V  0x1
#define LEDC_SIG_OUT_EN_CH2_S  2
/* LEDC_TIMER_SEL_CH2 : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: Configures which timer is channel $n selected.\\0: Select timer0\\1: Select time
r1\\2: Select timer2\\3: Select timer3.*/
#define LEDC_TIMER_SEL_CH2    0x00000003
#define LEDC_TIMER_SEL_CH2_M  ((LEDC_TIMER_SEL_CH2_V)<<(LEDC_TIMER_SEL_CH2_S))
#define LEDC_TIMER_SEL_CH2_V  0x3
#define LEDC_TIMER_SEL_CH2_S  0

#define LEDC_CH2_HPOINT_REG          (DR_REG_LEDC_BASE + 0x2C)
/* LEDC_HPOINT_CH2 : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures high point of signal output on channel $n. The output value changes t
o high when the selected timers has reached the value specified by this register
..*/
#define LEDC_HPOINT_CH2    0x000FFFFF
#define LEDC_HPOINT_CH2_M  ((LEDC_HPOINT_CH2_V)<<(LEDC_HPOINT_CH2_S))
#define LEDC_HPOINT_CH2_V  0xFFFFF
#define LEDC_HPOINT_CH2_S  0

#define LEDC_CH2_DUTY_REG          (DR_REG_LEDC_BASE + 0x30)
/* LEDC_DUTY_CH2 : R/W ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Configures the duty of signal output on channel $n..*/
#define LEDC_DUTY_CH2    0x01FFFFFF
#define LEDC_DUTY_CH2_M  ((LEDC_DUTY_CH2_V)<<(LEDC_DUTY_CH2_S))
#define LEDC_DUTY_CH2_V  0x1FFFFFF
#define LEDC_DUTY_CH2_S  0

#define LEDC_CH2_CONF1_REG          (DR_REG_LEDC_BASE + 0x34)
/* LEDC_DUTY_START_CH2 : R/W/SC ;bitpos:[31] ;default: 1'b0 ; */
/*description: Configures whether the duty cycle fading configurations take effect.\\0: Not tak
e effect\\1: Take effect.*/
#define LEDC_DUTY_START_CH2    (BIT(31))
#define LEDC_DUTY_START_CH2_M  (BIT(31))
#define LEDC_DUTY_START_CH2_V  0x1
#define LEDC_DUTY_START_CH2_S  31

#define LEDC_CH2_DUTY_R_REG          (DR_REG_LEDC_BASE + 0x38)
/* LEDC_DUTY_CH2_R : RO ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Represents the current duty of output signal on channel $n..*/
#define LEDC_DUTY_CH2_R    0x01FFFFFF
#define LEDC_DUTY_CH2_R_M  ((LEDC_DUTY_CH2_R_V)<<(LEDC_DUTY_CH2_R_S))
#define LEDC_DUTY_CH2_R_V  0x1FFFFFF
#define LEDC_DUTY_CH2_R_S  0

#define LEDC_CH3_CONF0_REG          (DR_REG_LEDC_BASE + 0x3C)
/* LEDC_OVF_CNT_RESET_CH3 : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether or not to reset the  ovf_cnt of channel $n.\\0: Invalid. No e
ffect\\1: Reset the ovf_cnt.*/
#define LEDC_OVF_CNT_RESET_CH3    (BIT(16))
#define LEDC_OVF_CNT_RESET_CH3_M  (BIT(16))
#define LEDC_OVF_CNT_RESET_CH3_V  0x1
#define LEDC_OVF_CNT_RESET_CH3_S  16
/* LEDC_OVF_CNT_EN_CH3 : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the ovf_cnt of channel $n.\\0: Disable\\1: E
nable.*/
#define LEDC_OVF_CNT_EN_CH3    (BIT(15))
#define LEDC_OVF_CNT_EN_CH3_M  (BIT(15))
#define LEDC_OVF_CNT_EN_CH3_V  0x1
#define LEDC_OVF_CNT_EN_CH3_S  15
/* LEDC_OVF_NUM_CH3 : R/W ;bitpos:[14:5] ;default: 10'b0 ; */
/*description: Configures the maximum times of overflow minus 1.The LEDC_OVF_CNT_CH$n_INT inter
rupt will be triggered when channel $n overflows for (LEDC_OVF_NUM_CH$n + 1) tim
es..*/
#define LEDC_OVF_NUM_CH3    0x000003FF
#define LEDC_OVF_NUM_CH3_M  ((LEDC_OVF_NUM_CH3_V)<<(LEDC_OVF_NUM_CH3_S))
#define LEDC_OVF_NUM_CH3_V  0x3FF
#define LEDC_OVF_NUM_CH3_S  5
/* LEDC_PARA_UP_CH3 : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configures whether or not to update LEDC_HPOINT_CH$n, LEDC_DUTY_START_CH$n, LEDC
_SIG_OUT_EN_CH$n, LEDC_TIMER_SEL_CH$n, LEDC_OVF_CNT_EN_CH$n fields and duty cycl
e range configuration for channel $n, and will be automatically cleared by hardw
are.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_PARA_UP_CH3    (BIT(4))
#define LEDC_PARA_UP_CH3_M  (BIT(4))
#define LEDC_PARA_UP_CH3_V  0x1
#define LEDC_PARA_UP_CH3_S  4
/* LEDC_IDLE_LV_CH3 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Configures the output value when channel $n is inactive. Valid only when  LEDC_S
IG_OUT_EN_CH$n is 0.\\0: Output level is low\\1: Output level is high.*/
#define LEDC_IDLE_LV_CH3    (BIT(3))
#define LEDC_IDLE_LV_CH3_M  (BIT(3))
#define LEDC_IDLE_LV_CH3_V  0x1
#define LEDC_IDLE_LV_CH3_S  3
/* LEDC_SIG_OUT_EN_CH3 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configures whether or not to enable signal output on channel $n.\\0: Signal outp
ut disable\\1: Signal output enable.*/
#define LEDC_SIG_OUT_EN_CH3    (BIT(2))
#define LEDC_SIG_OUT_EN_CH3_M  (BIT(2))
#define LEDC_SIG_OUT_EN_CH3_V  0x1
#define LEDC_SIG_OUT_EN_CH3_S  2
/* LEDC_TIMER_SEL_CH3 : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: Configures which timer is channel $n selected.\\0: Select timer0\\1: Select time
r1\\2: Select timer2\\3: Select timer3.*/
#define LEDC_TIMER_SEL_CH3    0x00000003
#define LEDC_TIMER_SEL_CH3_M  ((LEDC_TIMER_SEL_CH3_V)<<(LEDC_TIMER_SEL_CH3_S))
#define LEDC_TIMER_SEL_CH3_V  0x3
#define LEDC_TIMER_SEL_CH3_S  0

#define LEDC_CH3_HPOINT_REG          (DR_REG_LEDC_BASE + 0x40)
/* LEDC_HPOINT_CH3 : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures high point of signal output on channel $n. The output value changes t
o high when the selected timers has reached the value specified by this register
..*/
#define LEDC_HPOINT_CH3    0x000FFFFF
#define LEDC_HPOINT_CH3_M  ((LEDC_HPOINT_CH3_V)<<(LEDC_HPOINT_CH3_S))
#define LEDC_HPOINT_CH3_V  0xFFFFF
#define LEDC_HPOINT_CH3_S  0

#define LEDC_CH3_DUTY_REG          (DR_REG_LEDC_BASE + 0x44)
/* LEDC_DUTY_CH3 : R/W ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Configures the duty of signal output on channel $n..*/
#define LEDC_DUTY_CH3    0x01FFFFFF
#define LEDC_DUTY_CH3_M  ((LEDC_DUTY_CH3_V)<<(LEDC_DUTY_CH3_S))
#define LEDC_DUTY_CH3_V  0x1FFFFFF
#define LEDC_DUTY_CH3_S  0

#define LEDC_CH3_CONF1_REG          (DR_REG_LEDC_BASE + 0x48)
/* LEDC_DUTY_START_CH3 : R/W/SC ;bitpos:[31] ;default: 1'b0 ; */
/*description: Configures whether the duty cycle fading configurations take effect.\\0: Not tak
e effect\\1: Take effect.*/
#define LEDC_DUTY_START_CH3    (BIT(31))
#define LEDC_DUTY_START_CH3_M  (BIT(31))
#define LEDC_DUTY_START_CH3_V  0x1
#define LEDC_DUTY_START_CH3_S  31

#define LEDC_CH3_DUTY_R_REG          (DR_REG_LEDC_BASE + 0x4C)
/* LEDC_DUTY_CH3_R : RO ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Represents the current duty of output signal on channel $n..*/
#define LEDC_DUTY_CH3_R    0x01FFFFFF
#define LEDC_DUTY_CH3_R_M  ((LEDC_DUTY_CH3_R_V)<<(LEDC_DUTY_CH3_R_S))
#define LEDC_DUTY_CH3_R_V  0x1FFFFFF
#define LEDC_DUTY_CH3_R_S  0

#define LEDC_CH4_CONF0_REG          (DR_REG_LEDC_BASE + 0x50)
/* LEDC_OVF_CNT_RESET_CH4 : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether or not to reset the  ovf_cnt of channel $n.\\0: Invalid. No e
ffect\\1: Reset the ovf_cnt.*/
#define LEDC_OVF_CNT_RESET_CH4    (BIT(16))
#define LEDC_OVF_CNT_RESET_CH4_M  (BIT(16))
#define LEDC_OVF_CNT_RESET_CH4_V  0x1
#define LEDC_OVF_CNT_RESET_CH4_S  16
/* LEDC_OVF_CNT_EN_CH4 : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the ovf_cnt of channel $n.\\0: Disable\\1: E
nable.*/
#define LEDC_OVF_CNT_EN_CH4    (BIT(15))
#define LEDC_OVF_CNT_EN_CH4_M  (BIT(15))
#define LEDC_OVF_CNT_EN_CH4_V  0x1
#define LEDC_OVF_CNT_EN_CH4_S  15
/* LEDC_OVF_NUM_CH4 : R/W ;bitpos:[14:5] ;default: 10'b0 ; */
/*description: Configures the maximum times of overflow minus 1.The LEDC_OVF_CNT_CH$n_INT inter
rupt will be triggered when channel $n overflows for (LEDC_OVF_NUM_CH$n + 1) tim
es..*/
#define LEDC_OVF_NUM_CH4    0x000003FF
#define LEDC_OVF_NUM_CH4_M  ((LEDC_OVF_NUM_CH4_V)<<(LEDC_OVF_NUM_CH4_S))
#define LEDC_OVF_NUM_CH4_V  0x3FF
#define LEDC_OVF_NUM_CH4_S  5
/* LEDC_PARA_UP_CH4 : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configures whether or not to update LEDC_HPOINT_CH$n, LEDC_DUTY_START_CH$n, LEDC
_SIG_OUT_EN_CH$n, LEDC_TIMER_SEL_CH$n, LEDC_OVF_CNT_EN_CH$n fields and duty cycl
e range configuration for channel $n, and will be automatically cleared by hardw
are.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_PARA_UP_CH4    (BIT(4))
#define LEDC_PARA_UP_CH4_M  (BIT(4))
#define LEDC_PARA_UP_CH4_V  0x1
#define LEDC_PARA_UP_CH4_S  4
/* LEDC_IDLE_LV_CH4 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Configures the output value when channel $n is inactive. Valid only when  LEDC_S
IG_OUT_EN_CH$n is 0.\\0: Output level is low\\1: Output level is high.*/
#define LEDC_IDLE_LV_CH4    (BIT(3))
#define LEDC_IDLE_LV_CH4_M  (BIT(3))
#define LEDC_IDLE_LV_CH4_V  0x1
#define LEDC_IDLE_LV_CH4_S  3
/* LEDC_SIG_OUT_EN_CH4 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configures whether or not to enable signal output on channel $n.\\0: Signal outp
ut disable\\1: Signal output enable.*/
#define LEDC_SIG_OUT_EN_CH4    (BIT(2))
#define LEDC_SIG_OUT_EN_CH4_M  (BIT(2))
#define LEDC_SIG_OUT_EN_CH4_V  0x1
#define LEDC_SIG_OUT_EN_CH4_S  2
/* LEDC_TIMER_SEL_CH4 : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: Configures which timer is channel $n selected.\\0: Select timer0\\1: Select time
r1\\2: Select timer2\\3: Select timer3.*/
#define LEDC_TIMER_SEL_CH4    0x00000003
#define LEDC_TIMER_SEL_CH4_M  ((LEDC_TIMER_SEL_CH4_V)<<(LEDC_TIMER_SEL_CH4_S))
#define LEDC_TIMER_SEL_CH4_V  0x3
#define LEDC_TIMER_SEL_CH4_S  0

#define LEDC_CH4_HPOINT_REG          (DR_REG_LEDC_BASE + 0x54)
/* LEDC_HPOINT_CH4 : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures high point of signal output on channel $n. The output value changes t
o high when the selected timers has reached the value specified by this register
..*/
#define LEDC_HPOINT_CH4    0x000FFFFF
#define LEDC_HPOINT_CH4_M  ((LEDC_HPOINT_CH4_V)<<(LEDC_HPOINT_CH4_S))
#define LEDC_HPOINT_CH4_V  0xFFFFF
#define LEDC_HPOINT_CH4_S  0

#define LEDC_CH4_DUTY_REG          (DR_REG_LEDC_BASE + 0x58)
/* LEDC_DUTY_CH4 : R/W ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Configures the duty of signal output on channel $n..*/
#define LEDC_DUTY_CH4    0x01FFFFFF
#define LEDC_DUTY_CH4_M  ((LEDC_DUTY_CH4_V)<<(LEDC_DUTY_CH4_S))
#define LEDC_DUTY_CH4_V  0x1FFFFFF
#define LEDC_DUTY_CH4_S  0

#define LEDC_CH4_CONF1_REG          (DR_REG_LEDC_BASE + 0x5C)
/* LEDC_DUTY_START_CH4 : R/W/SC ;bitpos:[31] ;default: 1'b0 ; */
/*description: Configures whether the duty cycle fading configurations take effect.\\0: Not tak
e effect\\1: Take effect.*/
#define LEDC_DUTY_START_CH4    (BIT(31))
#define LEDC_DUTY_START_CH4_M  (BIT(31))
#define LEDC_DUTY_START_CH4_V  0x1
#define LEDC_DUTY_START_CH4_S  31

#define LEDC_CH4_DUTY_R_REG          (DR_REG_LEDC_BASE + 0x60)
/* LEDC_DUTY_CH4_R : RO ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Represents the current duty of output signal on channel $n..*/
#define LEDC_DUTY_CH4_R    0x01FFFFFF
#define LEDC_DUTY_CH4_R_M  ((LEDC_DUTY_CH4_R_V)<<(LEDC_DUTY_CH4_R_S))
#define LEDC_DUTY_CH4_R_V  0x1FFFFFF
#define LEDC_DUTY_CH4_R_S  0

#define LEDC_CH5_CONF0_REG          (DR_REG_LEDC_BASE + 0x64)
/* LEDC_OVF_CNT_RESET_CH5 : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether or not to reset the  ovf_cnt of channel $n.\\0: Invalid. No e
ffect\\1: Reset the ovf_cnt.*/
#define LEDC_OVF_CNT_RESET_CH5    (BIT(16))
#define LEDC_OVF_CNT_RESET_CH5_M  (BIT(16))
#define LEDC_OVF_CNT_RESET_CH5_V  0x1
#define LEDC_OVF_CNT_RESET_CH5_S  16
/* LEDC_OVF_CNT_EN_CH5 : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the ovf_cnt of channel $n.\\0: Disable\\1: E
nable.*/
#define LEDC_OVF_CNT_EN_CH5    (BIT(15))
#define LEDC_OVF_CNT_EN_CH5_M  (BIT(15))
#define LEDC_OVF_CNT_EN_CH5_V  0x1
#define LEDC_OVF_CNT_EN_CH5_S  15
/* LEDC_OVF_NUM_CH5 : R/W ;bitpos:[14:5] ;default: 10'b0 ; */
/*description: Configures the maximum times of overflow minus 1.The LEDC_OVF_CNT_CH$n_INT inter
rupt will be triggered when channel $n overflows for (LEDC_OVF_NUM_CH$n + 1) tim
es..*/
#define LEDC_OVF_NUM_CH5    0x000003FF
#define LEDC_OVF_NUM_CH5_M  ((LEDC_OVF_NUM_CH5_V)<<(LEDC_OVF_NUM_CH5_S))
#define LEDC_OVF_NUM_CH5_V  0x3FF
#define LEDC_OVF_NUM_CH5_S  5
/* LEDC_PARA_UP_CH5 : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configures whether or not to update LEDC_HPOINT_CH$n, LEDC_DUTY_START_CH$n, LEDC
_SIG_OUT_EN_CH$n, LEDC_TIMER_SEL_CH$n, LEDC_OVF_CNT_EN_CH$n fields and duty cycl
e range configuration for channel $n, and will be automatically cleared by hardw
are.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_PARA_UP_CH5    (BIT(4))
#define LEDC_PARA_UP_CH5_M  (BIT(4))
#define LEDC_PARA_UP_CH5_V  0x1
#define LEDC_PARA_UP_CH5_S  4
/* LEDC_IDLE_LV_CH5 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Configures the output value when channel $n is inactive. Valid only when  LEDC_S
IG_OUT_EN_CH$n is 0.\\0: Output level is low\\1: Output level is high.*/
#define LEDC_IDLE_LV_CH5    (BIT(3))
#define LEDC_IDLE_LV_CH5_M  (BIT(3))
#define LEDC_IDLE_LV_CH5_V  0x1
#define LEDC_IDLE_LV_CH5_S  3
/* LEDC_SIG_OUT_EN_CH5 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configures whether or not to enable signal output on channel $n.\\0: Signal outp
ut disable\\1: Signal output enable.*/
#define LEDC_SIG_OUT_EN_CH5    (BIT(2))
#define LEDC_SIG_OUT_EN_CH5_M  (BIT(2))
#define LEDC_SIG_OUT_EN_CH5_V  0x1
#define LEDC_SIG_OUT_EN_CH5_S  2
/* LEDC_TIMER_SEL_CH5 : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: Configures which timer is channel $n selected.\\0: Select timer0\\1: Select time
r1\\2: Select timer2\\3: Select timer3.*/
#define LEDC_TIMER_SEL_CH5    0x00000003
#define LEDC_TIMER_SEL_CH5_M  ((LEDC_TIMER_SEL_CH5_V)<<(LEDC_TIMER_SEL_CH5_S))
#define LEDC_TIMER_SEL_CH5_V  0x3
#define LEDC_TIMER_SEL_CH5_S  0

#define LEDC_CH5_HPOINT_REG          (DR_REG_LEDC_BASE + 0x68)
/* LEDC_HPOINT_CH5 : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures high point of signal output on channel $n. The output value changes t
o high when the selected timers has reached the value specified by this register
..*/
#define LEDC_HPOINT_CH5    0x000FFFFF
#define LEDC_HPOINT_CH5_M  ((LEDC_HPOINT_CH5_V)<<(LEDC_HPOINT_CH5_S))
#define LEDC_HPOINT_CH5_V  0xFFFFF
#define LEDC_HPOINT_CH5_S  0

#define LEDC_CH5_DUTY_REG          (DR_REG_LEDC_BASE + 0x6C)
/* LEDC_DUTY_CH5 : R/W ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Configures the duty of signal output on channel $n..*/
#define LEDC_DUTY_CH5    0x01FFFFFF
#define LEDC_DUTY_CH5_M  ((LEDC_DUTY_CH5_V)<<(LEDC_DUTY_CH5_S))
#define LEDC_DUTY_CH5_V  0x1FFFFFF
#define LEDC_DUTY_CH5_S  0

#define LEDC_CH5_CONF1_REG          (DR_REG_LEDC_BASE + 0x70)
/* LEDC_DUTY_START_CH5 : R/W/SC ;bitpos:[31] ;default: 1'b0 ; */
/*description: Configures whether the duty cycle fading configurations take effect.\\0: Not tak
e effect\\1: Take effect.*/
#define LEDC_DUTY_START_CH5    (BIT(31))
#define LEDC_DUTY_START_CH5_M  (BIT(31))
#define LEDC_DUTY_START_CH5_V  0x1
#define LEDC_DUTY_START_CH5_S  31

#define LEDC_CH5_DUTY_R_REG          (DR_REG_LEDC_BASE + 0x74)
/* LEDC_DUTY_CH5_R : RO ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Represents the current duty of output signal on channel $n..*/
#define LEDC_DUTY_CH5_R    0x01FFFFFF
#define LEDC_DUTY_CH5_R_M  ((LEDC_DUTY_CH5_R_V)<<(LEDC_DUTY_CH5_R_S))
#define LEDC_DUTY_CH5_R_V  0x1FFFFFF
#define LEDC_DUTY_CH5_R_S  0

#define LEDC_CH6_CONF0_REG          (DR_REG_LEDC_BASE + 0x78)
/* LEDC_OVF_CNT_RESET_CH6 : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether or not to reset the  ovf_cnt of channel $n.\\0: Invalid. No e
ffect\\1: Reset the ovf_cnt.*/
#define LEDC_OVF_CNT_RESET_CH6    (BIT(16))
#define LEDC_OVF_CNT_RESET_CH6_M  (BIT(16))
#define LEDC_OVF_CNT_RESET_CH6_V  0x1
#define LEDC_OVF_CNT_RESET_CH6_S  16
/* LEDC_OVF_CNT_EN_CH6 : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the ovf_cnt of channel $n.\\0: Disable\\1: E
nable.*/
#define LEDC_OVF_CNT_EN_CH6    (BIT(15))
#define LEDC_OVF_CNT_EN_CH6_M  (BIT(15))
#define LEDC_OVF_CNT_EN_CH6_V  0x1
#define LEDC_OVF_CNT_EN_CH6_S  15
/* LEDC_OVF_NUM_CH6 : R/W ;bitpos:[14:5] ;default: 10'b0 ; */
/*description: Configures the maximum times of overflow minus 1.The LEDC_OVF_CNT_CH$n_INT inter
rupt will be triggered when channel $n overflows for (LEDC_OVF_NUM_CH$n + 1) tim
es..*/
#define LEDC_OVF_NUM_CH6    0x000003FF
#define LEDC_OVF_NUM_CH6_M  ((LEDC_OVF_NUM_CH6_V)<<(LEDC_OVF_NUM_CH6_S))
#define LEDC_OVF_NUM_CH6_V  0x3FF
#define LEDC_OVF_NUM_CH6_S  5
/* LEDC_PARA_UP_CH6 : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configures whether or not to update LEDC_HPOINT_CH$n, LEDC_DUTY_START_CH$n, LEDC
_SIG_OUT_EN_CH$n, LEDC_TIMER_SEL_CH$n, LEDC_OVF_CNT_EN_CH$n fields and duty cycl
e range configuration for channel $n, and will be automatically cleared by hardw
are.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_PARA_UP_CH6    (BIT(4))
#define LEDC_PARA_UP_CH6_M  (BIT(4))
#define LEDC_PARA_UP_CH6_V  0x1
#define LEDC_PARA_UP_CH6_S  4
/* LEDC_IDLE_LV_CH6 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Configures the output value when channel $n is inactive. Valid only when  LEDC_S
IG_OUT_EN_CH$n is 0.\\0: Output level is low\\1: Output level is high.*/
#define LEDC_IDLE_LV_CH6    (BIT(3))
#define LEDC_IDLE_LV_CH6_M  (BIT(3))
#define LEDC_IDLE_LV_CH6_V  0x1
#define LEDC_IDLE_LV_CH6_S  3
/* LEDC_SIG_OUT_EN_CH6 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configures whether or not to enable signal output on channel $n.\\0: Signal outp
ut disable\\1: Signal output enable.*/
#define LEDC_SIG_OUT_EN_CH6    (BIT(2))
#define LEDC_SIG_OUT_EN_CH6_M  (BIT(2))
#define LEDC_SIG_OUT_EN_CH6_V  0x1
#define LEDC_SIG_OUT_EN_CH6_S  2
/* LEDC_TIMER_SEL_CH6 : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: Configures which timer is channel $n selected.\\0: Select timer0\\1: Select time
r1\\2: Select timer2\\3: Select timer3.*/
#define LEDC_TIMER_SEL_CH6    0x00000003
#define LEDC_TIMER_SEL_CH6_M  ((LEDC_TIMER_SEL_CH6_V)<<(LEDC_TIMER_SEL_CH6_S))
#define LEDC_TIMER_SEL_CH6_V  0x3
#define LEDC_TIMER_SEL_CH6_S  0

#define LEDC_CH6_HPOINT_REG          (DR_REG_LEDC_BASE + 0x7C)
/* LEDC_HPOINT_CH6 : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures high point of signal output on channel $n. The output value changes t
o high when the selected timers has reached the value specified by this register
..*/
#define LEDC_HPOINT_CH6    0x000FFFFF
#define LEDC_HPOINT_CH6_M  ((LEDC_HPOINT_CH6_V)<<(LEDC_HPOINT_CH6_S))
#define LEDC_HPOINT_CH6_V  0xFFFFF
#define LEDC_HPOINT_CH6_S  0

#define LEDC_CH6_DUTY_REG          (DR_REG_LEDC_BASE + 0x80)
/* LEDC_DUTY_CH6 : R/W ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Configures the duty of signal output on channel $n..*/
#define LEDC_DUTY_CH6    0x01FFFFFF
#define LEDC_DUTY_CH6_M  ((LEDC_DUTY_CH6_V)<<(LEDC_DUTY_CH6_S))
#define LEDC_DUTY_CH6_V  0x1FFFFFF
#define LEDC_DUTY_CH6_S  0

#define LEDC_CH6_CONF1_REG          (DR_REG_LEDC_BASE + 0x84)
/* LEDC_DUTY_START_CH6 : R/W/SC ;bitpos:[31] ;default: 1'b0 ; */
/*description: Configures whether the duty cycle fading configurations take effect.\\0: Not tak
e effect\\1: Take effect.*/
#define LEDC_DUTY_START_CH6    (BIT(31))
#define LEDC_DUTY_START_CH6_M  (BIT(31))
#define LEDC_DUTY_START_CH6_V  0x1
#define LEDC_DUTY_START_CH6_S  31

#define LEDC_CH6_DUTY_R_REG          (DR_REG_LEDC_BASE + 0x88)
/* LEDC_DUTY_CH6_R : RO ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Represents the current duty of output signal on channel $n..*/
#define LEDC_DUTY_CH6_R    0x01FFFFFF
#define LEDC_DUTY_CH6_R_M  ((LEDC_DUTY_CH6_R_V)<<(LEDC_DUTY_CH6_R_S))
#define LEDC_DUTY_CH6_R_V  0x1FFFFFF
#define LEDC_DUTY_CH6_R_S  0

#define LEDC_CH7_CONF0_REG          (DR_REG_LEDC_BASE + 0x8C)
/* LEDC_OVF_CNT_RESET_CH7 : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether or not to reset the  ovf_cnt of channel $n.\\0: Invalid. No e
ffect\\1: Reset the ovf_cnt.*/
#define LEDC_OVF_CNT_RESET_CH7    (BIT(16))
#define LEDC_OVF_CNT_RESET_CH7_M  (BIT(16))
#define LEDC_OVF_CNT_RESET_CH7_V  0x1
#define LEDC_OVF_CNT_RESET_CH7_S  16
/* LEDC_OVF_CNT_EN_CH7 : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Configures whether or not to enable the ovf_cnt of channel $n.\\0: Disable\\1: E
nable.*/
#define LEDC_OVF_CNT_EN_CH7    (BIT(15))
#define LEDC_OVF_CNT_EN_CH7_M  (BIT(15))
#define LEDC_OVF_CNT_EN_CH7_V  0x1
#define LEDC_OVF_CNT_EN_CH7_S  15
/* LEDC_OVF_NUM_CH7 : R/W ;bitpos:[14:5] ;default: 10'b0 ; */
/*description: Configures the maximum times of overflow minus 1.The LEDC_OVF_CNT_CH$n_INT inter
rupt will be triggered when channel $n overflows for (LEDC_OVF_NUM_CH$n + 1) tim
es..*/
#define LEDC_OVF_NUM_CH7    0x000003FF
#define LEDC_OVF_NUM_CH7_M  ((LEDC_OVF_NUM_CH7_V)<<(LEDC_OVF_NUM_CH7_S))
#define LEDC_OVF_NUM_CH7_V  0x3FF
#define LEDC_OVF_NUM_CH7_S  5
/* LEDC_PARA_UP_CH7 : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configures whether or not to update LEDC_HPOINT_CH$n, LEDC_DUTY_START_CH$n, LEDC
_SIG_OUT_EN_CH$n, LEDC_TIMER_SEL_CH$n, LEDC_OVF_CNT_EN_CH$n fields and duty cycl
e range configuration for channel $n, and will be automatically cleared by hardw
are.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_PARA_UP_CH7    (BIT(4))
#define LEDC_PARA_UP_CH7_M  (BIT(4))
#define LEDC_PARA_UP_CH7_V  0x1
#define LEDC_PARA_UP_CH7_S  4
/* LEDC_IDLE_LV_CH7 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Configures the output value when channel $n is inactive. Valid only when  LEDC_S
IG_OUT_EN_CH$n is 0.\\0: Output level is low\\1: Output level is high.*/
#define LEDC_IDLE_LV_CH7    (BIT(3))
#define LEDC_IDLE_LV_CH7_M  (BIT(3))
#define LEDC_IDLE_LV_CH7_V  0x1
#define LEDC_IDLE_LV_CH7_S  3
/* LEDC_SIG_OUT_EN_CH7 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configures whether or not to enable signal output on channel $n.\\0: Signal outp
ut disable\\1: Signal output enable.*/
#define LEDC_SIG_OUT_EN_CH7    (BIT(2))
#define LEDC_SIG_OUT_EN_CH7_M  (BIT(2))
#define LEDC_SIG_OUT_EN_CH7_V  0x1
#define LEDC_SIG_OUT_EN_CH7_S  2
/* LEDC_TIMER_SEL_CH7 : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: Configures which timer is channel $n selected.\\0: Select timer0\\1: Select time
r1\\2: Select timer2\\3: Select timer3.*/
#define LEDC_TIMER_SEL_CH7    0x00000003
#define LEDC_TIMER_SEL_CH7_M  ((LEDC_TIMER_SEL_CH7_V)<<(LEDC_TIMER_SEL_CH7_S))
#define LEDC_TIMER_SEL_CH7_V  0x3
#define LEDC_TIMER_SEL_CH7_S  0

#define LEDC_CH7_HPOINT_REG          (DR_REG_LEDC_BASE + 0x90)
/* LEDC_HPOINT_CH7 : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures high point of signal output on channel $n. The output value changes t
o high when the selected timers has reached the value specified by this register
..*/
#define LEDC_HPOINT_CH7    0x000FFFFF
#define LEDC_HPOINT_CH7_M  ((LEDC_HPOINT_CH7_V)<<(LEDC_HPOINT_CH7_S))
#define LEDC_HPOINT_CH7_V  0xFFFFF
#define LEDC_HPOINT_CH7_S  0

#define LEDC_CH7_DUTY_REG          (DR_REG_LEDC_BASE + 0x94)
/* LEDC_DUTY_CH7 : R/W ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Configures the duty of signal output on channel $n..*/
#define LEDC_DUTY_CH7    0x01FFFFFF
#define LEDC_DUTY_CH7_M  ((LEDC_DUTY_CH7_V)<<(LEDC_DUTY_CH7_S))
#define LEDC_DUTY_CH7_V  0x1FFFFFF
#define LEDC_DUTY_CH7_S  0

#define LEDC_CH7_CONF1_REG          (DR_REG_LEDC_BASE + 0x98)
/* LEDC_DUTY_START_CH7 : R/W/SC ;bitpos:[31] ;default: 1'b0 ; */
/*description: Configures whether the duty cycle fading configurations take effect.\\0: Not tak
e effect\\1: Take effect.*/
#define LEDC_DUTY_START_CH7    (BIT(31))
#define LEDC_DUTY_START_CH7_M  (BIT(31))
#define LEDC_DUTY_START_CH7_V  0x1
#define LEDC_DUTY_START_CH7_S  31

#define LEDC_CH7_DUTY_R_REG          (DR_REG_LEDC_BASE + 0x9C)
/* LEDC_DUTY_CH7_R : RO ;bitpos:[24:0] ;default: 25'h0 ; */
/*description: Represents the current duty of output signal on channel $n..*/
#define LEDC_DUTY_CH7_R    0x01FFFFFF
#define LEDC_DUTY_CH7_R_M  ((LEDC_DUTY_CH7_R_V)<<(LEDC_DUTY_CH7_R_S))
#define LEDC_DUTY_CH7_R_V  0x1FFFFFF
#define LEDC_DUTY_CH7_R_S  0

#define LEDC_TIMER0_CONF_REG          (DR_REG_LEDC_BASE + 0xA0)
/* LEDC_TIMER0_PARA_UP : WT ;bitpos:[26] ;default: 1'h0 ; */
/*description: Configures whether or not to update LEDC_CLK_DIV_TIMER$n and LEDC_TIMER$n_DUTY_R
ES.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_TIMER0_PARA_UP    (BIT(26))
#define LEDC_TIMER0_PARA_UP_M  (BIT(26))
#define LEDC_TIMER0_PARA_UP_V  0x1
#define LEDC_TIMER0_PARA_UP_S  26
/* LEDC_TICK_SEL_TIMER0 : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: Configures which clock is timer $n selected. Unused..*/
#define LEDC_TICK_SEL_TIMER0    (BIT(25))
#define LEDC_TICK_SEL_TIMER0_M  (BIT(25))
#define LEDC_TICK_SEL_TIMER0_V  0x1
#define LEDC_TICK_SEL_TIMER0_S  25
/* LEDC_TIMER0_RST : R/W ;bitpos:[24] ;default: 1'h1 ; */
/*description: Configures whether or not to reset timer $n. The counter will show 0 after reset
.\\0: Not reset\\1: Reset.*/
#define LEDC_TIMER0_RST    (BIT(24))
#define LEDC_TIMER0_RST_M  (BIT(24))
#define LEDC_TIMER0_RST_V  0x1
#define LEDC_TIMER0_RST_S  24
/* LEDC_TIMER0_PAUSE : R/W ;bitpos:[23] ;default: 1'h0 ; */
/*description: Configures whether or not to pause the counter in timer $n.\\0: Normal\\1: Pause.*/
#define LEDC_TIMER0_PAUSE    (BIT(23))
#define LEDC_TIMER0_PAUSE_M  (BIT(23))
#define LEDC_TIMER0_PAUSE_V  0x1
#define LEDC_TIMER0_PAUSE_S  23
/* LEDC_CLK_DIV_TIMER0 : R/W ;bitpos:[22:5] ;default: 18'h0 ; */
/*description: Configures the divisor for the divider in timer $n.The least significant eight b
its represent the fractional part..*/
#define LEDC_CLK_DIV_TIMER0    0x0003FFFF
#define LEDC_CLK_DIV_TIMER0_M  ((LEDC_CLK_DIV_TIMER0_V)<<(LEDC_CLK_DIV_TIMER0_S))
#define LEDC_CLK_DIV_TIMER0_V  0x3FFFF
#define LEDC_CLK_DIV_TIMER0_S  5
/* LEDC_TIMER0_DUTY_RES : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the bit width of the counter in timer $n. Valid values are 1 to 20..*/
#define LEDC_TIMER0_DUTY_RES    0x0000001F
#define LEDC_TIMER0_DUTY_RES_M  ((LEDC_TIMER0_DUTY_RES_V)<<(LEDC_TIMER0_DUTY_RES_S))
#define LEDC_TIMER0_DUTY_RES_V  0x1F
#define LEDC_TIMER0_DUTY_RES_S  0

#define LEDC_TIMER0_VALUE_REG          (DR_REG_LEDC_BASE + 0xA4)
/* LEDC_TIMER0_CNT : RO ;bitpos:[19:0] ;default: 20'b0 ; */
/*description: Represents the current counter value of timer $n..*/
#define LEDC_TIMER0_CNT    0x000FFFFF
#define LEDC_TIMER0_CNT_M  ((LEDC_TIMER0_CNT_V)<<(LEDC_TIMER0_CNT_S))
#define LEDC_TIMER0_CNT_V  0xFFFFF
#define LEDC_TIMER0_CNT_S  0

#define LEDC_TIMER1_CONF_REG          (DR_REG_LEDC_BASE + 0xA8)
/* LEDC_TIMER1_PARA_UP : WT ;bitpos:[26] ;default: 1'h0 ; */
/*description: Configures whether or not to update LEDC_CLK_DIV_TIMER$n and LEDC_TIMER$n_DUTY_R
ES.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_TIMER1_PARA_UP    (BIT(26))
#define LEDC_TIMER1_PARA_UP_M  (BIT(26))
#define LEDC_TIMER1_PARA_UP_V  0x1
#define LEDC_TIMER1_PARA_UP_S  26
/* LEDC_TICK_SEL_TIMER1 : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: Configures which clock is timer $n selected. Unused..*/
#define LEDC_TICK_SEL_TIMER1    (BIT(25))
#define LEDC_TICK_SEL_TIMER1_M  (BIT(25))
#define LEDC_TICK_SEL_TIMER1_V  0x1
#define LEDC_TICK_SEL_TIMER1_S  25
/* LEDC_TIMER1_RST : R/W ;bitpos:[24] ;default: 1'h1 ; */
/*description: Configures whether or not to reset timer $n. The counter will show 0 after reset
.\\0: Not reset\\1: Reset.*/
#define LEDC_TIMER1_RST    (BIT(24))
#define LEDC_TIMER1_RST_M  (BIT(24))
#define LEDC_TIMER1_RST_V  0x1
#define LEDC_TIMER1_RST_S  24
/* LEDC_TIMER1_PAUSE : R/W ;bitpos:[23] ;default: 1'h0 ; */
/*description: Configures whether or not to pause the counter in timer $n.\\0: Normal\\1: Pause.*/
#define LEDC_TIMER1_PAUSE    (BIT(23))
#define LEDC_TIMER1_PAUSE_M  (BIT(23))
#define LEDC_TIMER1_PAUSE_V  0x1
#define LEDC_TIMER1_PAUSE_S  23
/* LEDC_CLK_DIV_TIMER1 : R/W ;bitpos:[22:5] ;default: 18'h0 ; */
/*description: Configures the divisor for the divider in timer $n.The least significant eight b
its represent the fractional part..*/
#define LEDC_CLK_DIV_TIMER1    0x0003FFFF
#define LEDC_CLK_DIV_TIMER1_M  ((LEDC_CLK_DIV_TIMER1_V)<<(LEDC_CLK_DIV_TIMER1_S))
#define LEDC_CLK_DIV_TIMER1_V  0x3FFFF
#define LEDC_CLK_DIV_TIMER1_S  5
/* LEDC_TIMER1_DUTY_RES : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the bit width of the counter in timer $n. Valid values are 1 to 20..*/
#define LEDC_TIMER1_DUTY_RES    0x0000001F
#define LEDC_TIMER1_DUTY_RES_M  ((LEDC_TIMER1_DUTY_RES_V)<<(LEDC_TIMER1_DUTY_RES_S))
#define LEDC_TIMER1_DUTY_RES_V  0x1F
#define LEDC_TIMER1_DUTY_RES_S  0

#define LEDC_TIMER1_VALUE_REG          (DR_REG_LEDC_BASE + 0xAC)
/* LEDC_TIMER1_CNT : RO ;bitpos:[19:0] ;default: 20'b0 ; */
/*description: Represents the current counter value of timer $n..*/
#define LEDC_TIMER1_CNT    0x000FFFFF
#define LEDC_TIMER1_CNT_M  ((LEDC_TIMER1_CNT_V)<<(LEDC_TIMER1_CNT_S))
#define LEDC_TIMER1_CNT_V  0xFFFFF
#define LEDC_TIMER1_CNT_S  0

#define LEDC_TIMER2_CONF_REG          (DR_REG_LEDC_BASE + 0xB0)
/* LEDC_TIMER2_PARA_UP : WT ;bitpos:[26] ;default: 1'h0 ; */
/*description: Configures whether or not to update LEDC_CLK_DIV_TIMER$n and LEDC_TIMER$n_DUTY_R
ES.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_TIMER2_PARA_UP    (BIT(26))
#define LEDC_TIMER2_PARA_UP_M  (BIT(26))
#define LEDC_TIMER2_PARA_UP_V  0x1
#define LEDC_TIMER2_PARA_UP_S  26
/* LEDC_TICK_SEL_TIMER2 : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: Configures which clock is timer $n selected. Unused..*/
#define LEDC_TICK_SEL_TIMER2    (BIT(25))
#define LEDC_TICK_SEL_TIMER2_M  (BIT(25))
#define LEDC_TICK_SEL_TIMER2_V  0x1
#define LEDC_TICK_SEL_TIMER2_S  25
/* LEDC_TIMER2_RST : R/W ;bitpos:[24] ;default: 1'h1 ; */
/*description: Configures whether or not to reset timer $n. The counter will show 0 after reset
.\\0: Not reset\\1: Reset.*/
#define LEDC_TIMER2_RST    (BIT(24))
#define LEDC_TIMER2_RST_M  (BIT(24))
#define LEDC_TIMER2_RST_V  0x1
#define LEDC_TIMER2_RST_S  24
/* LEDC_TIMER2_PAUSE : R/W ;bitpos:[23] ;default: 1'h0 ; */
/*description: Configures whether or not to pause the counter in timer $n.\\0: Normal\\1: Pause.*/
#define LEDC_TIMER2_PAUSE    (BIT(23))
#define LEDC_TIMER2_PAUSE_M  (BIT(23))
#define LEDC_TIMER2_PAUSE_V  0x1
#define LEDC_TIMER2_PAUSE_S  23
/* LEDC_CLK_DIV_TIMER2 : R/W ;bitpos:[22:5] ;default: 18'h0 ; */
/*description: Configures the divisor for the divider in timer $n.The least significant eight b
its represent the fractional part..*/
#define LEDC_CLK_DIV_TIMER2    0x0003FFFF
#define LEDC_CLK_DIV_TIMER2_M  ((LEDC_CLK_DIV_TIMER2_V)<<(LEDC_CLK_DIV_TIMER2_S))
#define LEDC_CLK_DIV_TIMER2_V  0x3FFFF
#define LEDC_CLK_DIV_TIMER2_S  5
/* LEDC_TIMER2_DUTY_RES : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the bit width of the counter in timer $n. Valid values are 1 to 20..*/
#define LEDC_TIMER2_DUTY_RES    0x0000001F
#define LEDC_TIMER2_DUTY_RES_M  ((LEDC_TIMER2_DUTY_RES_V)<<(LEDC_TIMER2_DUTY_RES_S))
#define LEDC_TIMER2_DUTY_RES_V  0x1F
#define LEDC_TIMER2_DUTY_RES_S  0

#define LEDC_TIMER2_VALUE_REG          (DR_REG_LEDC_BASE + 0xB4)
/* LEDC_TIMER2_CNT : RO ;bitpos:[19:0] ;default: 20'b0 ; */
/*description: Represents the current counter value of timer $n..*/
#define LEDC_TIMER2_CNT    0x000FFFFF
#define LEDC_TIMER2_CNT_M  ((LEDC_TIMER2_CNT_V)<<(LEDC_TIMER2_CNT_S))
#define LEDC_TIMER2_CNT_V  0xFFFFF
#define LEDC_TIMER2_CNT_S  0

#define LEDC_TIMER3_CONF_REG          (DR_REG_LEDC_BASE + 0xB8)
/* LEDC_TIMER3_PARA_UP : WT ;bitpos:[26] ;default: 1'h0 ; */
/*description: Configures whether or not to update LEDC_CLK_DIV_TIMER$n and LEDC_TIMER$n_DUTY_R
ES.\\0: Invalid. No effect\\1: Update.*/
#define LEDC_TIMER3_PARA_UP    (BIT(26))
#define LEDC_TIMER3_PARA_UP_M  (BIT(26))
#define LEDC_TIMER3_PARA_UP_V  0x1
#define LEDC_TIMER3_PARA_UP_S  26
/* LEDC_TICK_SEL_TIMER3 : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: Configures which clock is timer $n selected. Unused..*/
#define LEDC_TICK_SEL_TIMER3    (BIT(25))
#define LEDC_TICK_SEL_TIMER3_M  (BIT(25))
#define LEDC_TICK_SEL_TIMER3_V  0x1
#define LEDC_TICK_SEL_TIMER3_S  25
/* LEDC_TIMER3_RST : R/W ;bitpos:[24] ;default: 1'b1 ; */
/*description: Configures whether or not to reset timer $n. The counter will show 0 after reset
.\\0: Not reset\\1: Reset.*/
#define LEDC_TIMER3_RST    (BIT(24))
#define LEDC_TIMER3_RST_M  (BIT(24))
#define LEDC_TIMER3_RST_V  0x1
#define LEDC_TIMER3_RST_S  24
/* LEDC_TIMER3_PAUSE : R/W ;bitpos:[23] ;default: 1'b0 ; */
/*description: Configures whether or not to pause the counter in timer $n.\\0: Normal\\1: Pause.*/
#define LEDC_TIMER3_PAUSE    (BIT(23))
#define LEDC_TIMER3_PAUSE_M  (BIT(23))
#define LEDC_TIMER3_PAUSE_V  0x1
#define LEDC_TIMER3_PAUSE_S  23
/* LEDC_CLK_DIV_TIMER3 : R/W ;bitpos:[22:5] ;default: 18'h0 ; */
/*description: Configures the divisor for the divider in timer $n.The least significant eight b
its represent the fractional part..*/
#define LEDC_CLK_DIV_TIMER3    0x0003FFFF
#define LEDC_CLK_DIV_TIMER3_M  ((LEDC_CLK_DIV_TIMER3_V)<<(LEDC_CLK_DIV_TIMER3_S))
#define LEDC_CLK_DIV_TIMER3_V  0x3FFFF
#define LEDC_CLK_DIV_TIMER3_S  5
/* LEDC_TIMER3_DUTY_RES : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the bit width of the counter in timer $n. Valid values are 1 to 20..*/
#define LEDC_TIMER3_DUTY_RES    0x0000001F
#define LEDC_TIMER3_DUTY_RES_M  ((LEDC_TIMER3_DUTY_RES_V)<<(LEDC_TIMER3_DUTY_RES_S))
#define LEDC_TIMER3_DUTY_RES_V  0x1F
#define LEDC_TIMER3_DUTY_RES_S  0

#define LEDC_TIMER3_VALUE_REG          (DR_REG_LEDC_BASE + 0xBC)
/* LEDC_TIMER3_CNT : RO ;bitpos:[19:0] ;default: 20'b0 ; */
/*description: Represents the current counter value of timer $n..*/
#define LEDC_TIMER3_CNT    0x000FFFFF
#define LEDC_TIMER3_CNT_M  ((LEDC_TIMER3_CNT_V)<<(LEDC_TIMER3_CNT_S))
#define LEDC_TIMER3_CNT_V  0xFFFFF
#define LEDC_TIMER3_CNT_S  0

#define LEDC_INT_RAW_REG          (DR_REG_LEDC_BASE + 0xC0)
/* LEDC_OVF_CNT_CH7_INT_RAW : R/WTC/SS ;bitpos:[19] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered whe
n the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n..*/
#define LEDC_OVF_CNT_CH7_INT_RAW    (BIT(19))
#define LEDC_OVF_CNT_CH7_INT_RAW_M  (BIT(19))
#define LEDC_OVF_CNT_CH7_INT_RAW_V  0x1
#define LEDC_OVF_CNT_CH7_INT_RAW_S  19
/* LEDC_OVF_CNT_CH6_INT_RAW : R/WTC/SS ;bitpos:[18] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered whe
n the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n..*/
#define LEDC_OVF_CNT_CH6_INT_RAW    (BIT(18))
#define LEDC_OVF_CNT_CH6_INT_RAW_M  (BIT(18))
#define LEDC_OVF_CNT_CH6_INT_RAW_V  0x1
#define LEDC_OVF_CNT_CH6_INT_RAW_S  18
/* LEDC_OVF_CNT_CH5_INT_RAW : R/WTC/SS ;bitpos:[17] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered whe
n the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n..*/
#define LEDC_OVF_CNT_CH5_INT_RAW    (BIT(17))
#define LEDC_OVF_CNT_CH5_INT_RAW_M  (BIT(17))
#define LEDC_OVF_CNT_CH5_INT_RAW_V  0x1
#define LEDC_OVF_CNT_CH5_INT_RAW_S  17
/* LEDC_OVF_CNT_CH4_INT_RAW : R/WTC/SS ;bitpos:[16] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered whe
n the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n..*/
#define LEDC_OVF_CNT_CH4_INT_RAW    (BIT(16))
#define LEDC_OVF_CNT_CH4_INT_RAW_M  (BIT(16))
#define LEDC_OVF_CNT_CH4_INT_RAW_V  0x1
#define LEDC_OVF_CNT_CH4_INT_RAW_S  16
/* LEDC_OVF_CNT_CH3_INT_RAW : R/WTC/SS ;bitpos:[15] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered whe
n the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n..*/
#define LEDC_OVF_CNT_CH3_INT_RAW    (BIT(15))
#define LEDC_OVF_CNT_CH3_INT_RAW_M  (BIT(15))
#define LEDC_OVF_CNT_CH3_INT_RAW_V  0x1
#define LEDC_OVF_CNT_CH3_INT_RAW_S  15
/* LEDC_OVF_CNT_CH2_INT_RAW : R/WTC/SS ;bitpos:[14] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered whe
n the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n..*/
#define LEDC_OVF_CNT_CH2_INT_RAW    (BIT(14))
#define LEDC_OVF_CNT_CH2_INT_RAW_M  (BIT(14))
#define LEDC_OVF_CNT_CH2_INT_RAW_V  0x1
#define LEDC_OVF_CNT_CH2_INT_RAW_S  14
/* LEDC_OVF_CNT_CH1_INT_RAW : R/WTC/SS ;bitpos:[13] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered whe
n the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n..*/
#define LEDC_OVF_CNT_CH1_INT_RAW    (BIT(13))
#define LEDC_OVF_CNT_CH1_INT_RAW_M  (BIT(13))
#define LEDC_OVF_CNT_CH1_INT_RAW_V  0x1
#define LEDC_OVF_CNT_CH1_INT_RAW_S  13
/* LEDC_OVF_CNT_CH0_INT_RAW : R/WTC/SS ;bitpos:[12] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered whe
n the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n..*/
#define LEDC_OVF_CNT_CH0_INT_RAW    (BIT(12))
#define LEDC_OVF_CNT_CH0_INT_RAW_M  (BIT(12))
#define LEDC_OVF_CNT_CH0_INT_RAW_V  0x1
#define LEDC_OVF_CNT_CH0_INT_RAW_S  12
/* LEDC_DUTY_CHNG_END_CH7_INT_RAW : R/WTC/SS ;bitpos:[11] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Trigger
ed when the fading of duty has finished..*/
#define LEDC_DUTY_CHNG_END_CH7_INT_RAW    (BIT(11))
#define LEDC_DUTY_CHNG_END_CH7_INT_RAW_M  (BIT(11))
#define LEDC_DUTY_CHNG_END_CH7_INT_RAW_V  0x1
#define LEDC_DUTY_CHNG_END_CH7_INT_RAW_S  11
/* LEDC_DUTY_CHNG_END_CH6_INT_RAW : R/WTC/SS ;bitpos:[10] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Trigger
ed when the fading of duty has finished..*/
#define LEDC_DUTY_CHNG_END_CH6_INT_RAW    (BIT(10))
#define LEDC_DUTY_CHNG_END_CH6_INT_RAW_M  (BIT(10))
#define LEDC_DUTY_CHNG_END_CH6_INT_RAW_V  0x1
#define LEDC_DUTY_CHNG_END_CH6_INT_RAW_S  10
/* LEDC_DUTY_CHNG_END_CH5_INT_RAW : R/WTC/SS ;bitpos:[9] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Trigger
ed when the fading of duty has finished..*/
#define LEDC_DUTY_CHNG_END_CH5_INT_RAW    (BIT(9))
#define LEDC_DUTY_CHNG_END_CH5_INT_RAW_M  (BIT(9))
#define LEDC_DUTY_CHNG_END_CH5_INT_RAW_V  0x1
#define LEDC_DUTY_CHNG_END_CH5_INT_RAW_S  9
/* LEDC_DUTY_CHNG_END_CH4_INT_RAW : R/WTC/SS ;bitpos:[8] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Trigger
ed when the fading of duty has finished..*/
#define LEDC_DUTY_CHNG_END_CH4_INT_RAW    (BIT(8))
#define LEDC_DUTY_CHNG_END_CH4_INT_RAW_M  (BIT(8))
#define LEDC_DUTY_CHNG_END_CH4_INT_RAW_V  0x1
#define LEDC_DUTY_CHNG_END_CH4_INT_RAW_S  8
/* LEDC_DUTY_CHNG_END_CH3_INT_RAW : R/WTC/SS ;bitpos:[7] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Trigger
ed when the fading of duty has finished..*/
#define LEDC_DUTY_CHNG_END_CH3_INT_RAW    (BIT(7))
#define LEDC_DUTY_CHNG_END_CH3_INT_RAW_M  (BIT(7))
#define LEDC_DUTY_CHNG_END_CH3_INT_RAW_V  0x1
#define LEDC_DUTY_CHNG_END_CH3_INT_RAW_S  7
/* LEDC_DUTY_CHNG_END_CH2_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Trigger
ed when the fading of duty has finished..*/
#define LEDC_DUTY_CHNG_END_CH2_INT_RAW    (BIT(6))
#define LEDC_DUTY_CHNG_END_CH2_INT_RAW_M  (BIT(6))
#define LEDC_DUTY_CHNG_END_CH2_INT_RAW_V  0x1
#define LEDC_DUTY_CHNG_END_CH2_INT_RAW_S  6
/* LEDC_DUTY_CHNG_END_CH1_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Trigger
ed when the fading of duty has finished..*/
#define LEDC_DUTY_CHNG_END_CH1_INT_RAW    (BIT(5))
#define LEDC_DUTY_CHNG_END_CH1_INT_RAW_M  (BIT(5))
#define LEDC_DUTY_CHNG_END_CH1_INT_RAW_V  0x1
#define LEDC_DUTY_CHNG_END_CH1_INT_RAW_S  5
/* LEDC_DUTY_CHNG_END_CH0_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Trigger
ed when the fading of duty has finished..*/
#define LEDC_DUTY_CHNG_END_CH0_INT_RAW    (BIT(4))
#define LEDC_DUTY_CHNG_END_CH0_INT_RAW_M  (BIT(4))
#define LEDC_DUTY_CHNG_END_CH0_INT_RAW_V  0x1
#define LEDC_DUTY_CHNG_END_CH0_INT_RAW_S  4
/* LEDC_TIMER3_OVF_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_TIMER$n_OVF_INT. Triggered when
 the timer$n has reached its maximum counter value..*/
#define LEDC_TIMER3_OVF_INT_RAW    (BIT(3))
#define LEDC_TIMER3_OVF_INT_RAW_M  (BIT(3))
#define LEDC_TIMER3_OVF_INT_RAW_V  0x1
#define LEDC_TIMER3_OVF_INT_RAW_S  3
/* LEDC_TIMER2_OVF_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_TIMER$n_OVF_INT. Triggered when
 the timer$n has reached its maximum counter value..*/
#define LEDC_TIMER2_OVF_INT_RAW    (BIT(2))
#define LEDC_TIMER2_OVF_INT_RAW_M  (BIT(2))
#define LEDC_TIMER2_OVF_INT_RAW_V  0x1
#define LEDC_TIMER2_OVF_INT_RAW_S  2
/* LEDC_TIMER1_OVF_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_TIMER$n_OVF_INT. Triggered when
 the timer$n has reached its maximum counter value..*/
#define LEDC_TIMER1_OVF_INT_RAW    (BIT(1))
#define LEDC_TIMER1_OVF_INT_RAW_M  (BIT(1))
#define LEDC_TIMER1_OVF_INT_RAW_V  0x1
#define LEDC_TIMER1_OVF_INT_RAW_S  1
/* LEDC_TIMER0_OVF_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description: Raw status bit: The raw interrupt status of LEDC_TIMER$n_OVF_INT. Triggered when
 the timer$n has reached its maximum counter value..*/
#define LEDC_TIMER0_OVF_INT_RAW    (BIT(0))
#define LEDC_TIMER0_OVF_INT_RAW_M  (BIT(0))
#define LEDC_TIMER0_OVF_INT_RAW_V  0x1
#define LEDC_TIMER0_OVF_INT_RAW_S  0

#define LEDC_INT_ST_REG          (DR_REG_LEDC_BASE + 0xC4)
/* LEDC_OVF_CNT_CH7_INT_ST : RO ;bitpos:[19] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid o
nly when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1..*/
#define LEDC_OVF_CNT_CH7_INT_ST    (BIT(19))
#define LEDC_OVF_CNT_CH7_INT_ST_M  (BIT(19))
#define LEDC_OVF_CNT_CH7_INT_ST_V  0x1
#define LEDC_OVF_CNT_CH7_INT_ST_S  19
/* LEDC_OVF_CNT_CH6_INT_ST : RO ;bitpos:[18] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid o
nly when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1..*/
#define LEDC_OVF_CNT_CH6_INT_ST    (BIT(18))
#define LEDC_OVF_CNT_CH6_INT_ST_M  (BIT(18))
#define LEDC_OVF_CNT_CH6_INT_ST_V  0x1
#define LEDC_OVF_CNT_CH6_INT_ST_S  18
/* LEDC_OVF_CNT_CH5_INT_ST : RO ;bitpos:[17] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid o
nly when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1..*/
#define LEDC_OVF_CNT_CH5_INT_ST    (BIT(17))
#define LEDC_OVF_CNT_CH5_INT_ST_M  (BIT(17))
#define LEDC_OVF_CNT_CH5_INT_ST_V  0x1
#define LEDC_OVF_CNT_CH5_INT_ST_S  17
/* LEDC_OVF_CNT_CH4_INT_ST : RO ;bitpos:[16] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid o
nly when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1..*/
#define LEDC_OVF_CNT_CH4_INT_ST    (BIT(16))
#define LEDC_OVF_CNT_CH4_INT_ST_M  (BIT(16))
#define LEDC_OVF_CNT_CH4_INT_ST_V  0x1
#define LEDC_OVF_CNT_CH4_INT_ST_S  16
/* LEDC_OVF_CNT_CH3_INT_ST : RO ;bitpos:[15] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid o
nly when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1..*/
#define LEDC_OVF_CNT_CH3_INT_ST    (BIT(15))
#define LEDC_OVF_CNT_CH3_INT_ST_M  (BIT(15))
#define LEDC_OVF_CNT_CH3_INT_ST_V  0x1
#define LEDC_OVF_CNT_CH3_INT_ST_S  15
/* LEDC_OVF_CNT_CH2_INT_ST : RO ;bitpos:[14] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid o
nly when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1..*/
#define LEDC_OVF_CNT_CH2_INT_ST    (BIT(14))
#define LEDC_OVF_CNT_CH2_INT_ST_M  (BIT(14))
#define LEDC_OVF_CNT_CH2_INT_ST_V  0x1
#define LEDC_OVF_CNT_CH2_INT_ST_S  14
/* LEDC_OVF_CNT_CH1_INT_ST : RO ;bitpos:[13] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid o
nly when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1..*/
#define LEDC_OVF_CNT_CH1_INT_ST    (BIT(13))
#define LEDC_OVF_CNT_CH1_INT_ST_M  (BIT(13))
#define LEDC_OVF_CNT_CH1_INT_ST_V  0x1
#define LEDC_OVF_CNT_CH1_INT_ST_S  13
/* LEDC_OVF_CNT_CH0_INT_ST : RO ;bitpos:[12] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid o
nly when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1..*/
#define LEDC_OVF_CNT_CH0_INT_ST    (BIT(12))
#define LEDC_OVF_CNT_CH0_INT_ST_M  (BIT(12))
#define LEDC_OVF_CNT_CH0_INT_ST_V  0x1
#define LEDC_OVF_CNT_CH0_INT_ST_S  12
/* LEDC_DUTY_CHNG_END_CH7_INT_ST : RO ;bitpos:[11] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. V
alid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1..*/
#define LEDC_DUTY_CHNG_END_CH7_INT_ST    (BIT(11))
#define LEDC_DUTY_CHNG_END_CH7_INT_ST_M  (BIT(11))
#define LEDC_DUTY_CHNG_END_CH7_INT_ST_V  0x1
#define LEDC_DUTY_CHNG_END_CH7_INT_ST_S  11
/* LEDC_DUTY_CHNG_END_CH6_INT_ST : RO ;bitpos:[10] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. V
alid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1..*/
#define LEDC_DUTY_CHNG_END_CH6_INT_ST    (BIT(10))
#define LEDC_DUTY_CHNG_END_CH6_INT_ST_M  (BIT(10))
#define LEDC_DUTY_CHNG_END_CH6_INT_ST_V  0x1
#define LEDC_DUTY_CHNG_END_CH6_INT_ST_S  10
/* LEDC_DUTY_CHNG_END_CH5_INT_ST : RO ;bitpos:[9] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. V
alid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1..*/
#define LEDC_DUTY_CHNG_END_CH5_INT_ST    (BIT(9))
#define LEDC_DUTY_CHNG_END_CH5_INT_ST_M  (BIT(9))
#define LEDC_DUTY_CHNG_END_CH5_INT_ST_V  0x1
#define LEDC_DUTY_CHNG_END_CH5_INT_ST_S  9
/* LEDC_DUTY_CHNG_END_CH4_INT_ST : RO ;bitpos:[8] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. V
alid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1..*/
#define LEDC_DUTY_CHNG_END_CH4_INT_ST    (BIT(8))
#define LEDC_DUTY_CHNG_END_CH4_INT_ST_M  (BIT(8))
#define LEDC_DUTY_CHNG_END_CH4_INT_ST_V  0x1
#define LEDC_DUTY_CHNG_END_CH4_INT_ST_S  8
/* LEDC_DUTY_CHNG_END_CH3_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. V
alid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1..*/
#define LEDC_DUTY_CHNG_END_CH3_INT_ST    (BIT(7))
#define LEDC_DUTY_CHNG_END_CH3_INT_ST_M  (BIT(7))
#define LEDC_DUTY_CHNG_END_CH3_INT_ST_V  0x1
#define LEDC_DUTY_CHNG_END_CH3_INT_ST_S  7
/* LEDC_DUTY_CHNG_END_CH2_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. V
alid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1..*/
#define LEDC_DUTY_CHNG_END_CH2_INT_ST    (BIT(6))
#define LEDC_DUTY_CHNG_END_CH2_INT_ST_M  (BIT(6))
#define LEDC_DUTY_CHNG_END_CH2_INT_ST_V  0x1
#define LEDC_DUTY_CHNG_END_CH2_INT_ST_S  6
/* LEDC_DUTY_CHNG_END_CH1_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. V
alid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1..*/
#define LEDC_DUTY_CHNG_END_CH1_INT_ST    (BIT(5))
#define LEDC_DUTY_CHNG_END_CH1_INT_ST_M  (BIT(5))
#define LEDC_DUTY_CHNG_END_CH1_INT_ST_V  0x1
#define LEDC_DUTY_CHNG_END_CH1_INT_ST_S  5
/* LEDC_DUTY_CHNG_END_CH0_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. V
alid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1..*/
#define LEDC_DUTY_CHNG_END_CH0_INT_ST    (BIT(4))
#define LEDC_DUTY_CHNG_END_CH0_INT_ST_M  (BIT(4))
#define LEDC_DUTY_CHNG_END_CH0_INT_ST_V  0x1
#define LEDC_DUTY_CHNG_END_CH0_INT_ST_S  4
/* LEDC_TIMER3_OVF_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_TIMER$n_OVF_INT. Valid on
ly when LEDC_TIMER$n_OVF_INT_ENA is set to 1..*/
#define LEDC_TIMER3_OVF_INT_ST    (BIT(3))
#define LEDC_TIMER3_OVF_INT_ST_M  (BIT(3))
#define LEDC_TIMER3_OVF_INT_ST_V  0x1
#define LEDC_TIMER3_OVF_INT_ST_S  3
/* LEDC_TIMER2_OVF_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_TIMER$n_OVF_INT. Valid on
ly when LEDC_TIMER$n_OVF_INT_ENA is set to 1..*/
#define LEDC_TIMER2_OVF_INT_ST    (BIT(2))
#define LEDC_TIMER2_OVF_INT_ST_M  (BIT(2))
#define LEDC_TIMER2_OVF_INT_ST_V  0x1
#define LEDC_TIMER2_OVF_INT_ST_S  2
/* LEDC_TIMER1_OVF_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_TIMER$n_OVF_INT. Valid on
ly when LEDC_TIMER$n_OVF_INT_ENA is set to 1..*/
#define LEDC_TIMER1_OVF_INT_ST    (BIT(1))
#define LEDC_TIMER1_OVF_INT_ST_M  (BIT(1))
#define LEDC_TIMER1_OVF_INT_ST_V  0x1
#define LEDC_TIMER1_OVF_INT_ST_S  1
/* LEDC_TIMER0_OVF_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: Masked status bit: The masked interrupt status of LEDC_TIMER$n_OVF_INT. Valid on
ly when LEDC_TIMER$n_OVF_INT_ENA is set to 1..*/
#define LEDC_TIMER0_OVF_INT_ST    (BIT(0))
#define LEDC_TIMER0_OVF_INT_ST_M  (BIT(0))
#define LEDC_TIMER0_OVF_INT_ST_V  0x1
#define LEDC_TIMER0_OVF_INT_ST_S  0

#define LEDC_INT_ENA_REG          (DR_REG_LEDC_BASE + 0xC8)
/* LEDC_OVF_CNT_CH7_INT_ENA : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH7_INT_ENA    (BIT(19))
#define LEDC_OVF_CNT_CH7_INT_ENA_M  (BIT(19))
#define LEDC_OVF_CNT_CH7_INT_ENA_V  0x1
#define LEDC_OVF_CNT_CH7_INT_ENA_S  19
/* LEDC_OVF_CNT_CH6_INT_ENA : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH6_INT_ENA    (BIT(18))
#define LEDC_OVF_CNT_CH6_INT_ENA_M  (BIT(18))
#define LEDC_OVF_CNT_CH6_INT_ENA_V  0x1
#define LEDC_OVF_CNT_CH6_INT_ENA_S  18
/* LEDC_OVF_CNT_CH5_INT_ENA : R/W ;bitpos:[17] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH5_INT_ENA    (BIT(17))
#define LEDC_OVF_CNT_CH5_INT_ENA_M  (BIT(17))
#define LEDC_OVF_CNT_CH5_INT_ENA_V  0x1
#define LEDC_OVF_CNT_CH5_INT_ENA_S  17
/* LEDC_OVF_CNT_CH4_INT_ENA : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH4_INT_ENA    (BIT(16))
#define LEDC_OVF_CNT_CH4_INT_ENA_M  (BIT(16))
#define LEDC_OVF_CNT_CH4_INT_ENA_V  0x1
#define LEDC_OVF_CNT_CH4_INT_ENA_S  16
/* LEDC_OVF_CNT_CH3_INT_ENA : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH3_INT_ENA    (BIT(15))
#define LEDC_OVF_CNT_CH3_INT_ENA_M  (BIT(15))
#define LEDC_OVF_CNT_CH3_INT_ENA_V  0x1
#define LEDC_OVF_CNT_CH3_INT_ENA_S  15
/* LEDC_OVF_CNT_CH2_INT_ENA : R/W ;bitpos:[14] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH2_INT_ENA    (BIT(14))
#define LEDC_OVF_CNT_CH2_INT_ENA_M  (BIT(14))
#define LEDC_OVF_CNT_CH2_INT_ENA_V  0x1
#define LEDC_OVF_CNT_CH2_INT_ENA_S  14
/* LEDC_OVF_CNT_CH1_INT_ENA : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH1_INT_ENA    (BIT(13))
#define LEDC_OVF_CNT_CH1_INT_ENA_M  (BIT(13))
#define LEDC_OVF_CNT_CH1_INT_ENA_V  0x1
#define LEDC_OVF_CNT_CH1_INT_ENA_S  13
/* LEDC_OVF_CNT_CH0_INT_ENA : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH0_INT_ENA    (BIT(12))
#define LEDC_OVF_CNT_CH0_INT_ENA_M  (BIT(12))
#define LEDC_OVF_CNT_CH0_INT_ENA_V  0x1
#define LEDC_OVF_CNT_CH0_INT_ENA_S  12
/* LEDC_DUTY_CHNG_END_CH7_INT_ENA : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH7_INT_ENA    (BIT(11))
#define LEDC_DUTY_CHNG_END_CH7_INT_ENA_M  (BIT(11))
#define LEDC_DUTY_CHNG_END_CH7_INT_ENA_V  0x1
#define LEDC_DUTY_CHNG_END_CH7_INT_ENA_S  11
/* LEDC_DUTY_CHNG_END_CH6_INT_ENA : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH6_INT_ENA    (BIT(10))
#define LEDC_DUTY_CHNG_END_CH6_INT_ENA_M  (BIT(10))
#define LEDC_DUTY_CHNG_END_CH6_INT_ENA_V  0x1
#define LEDC_DUTY_CHNG_END_CH6_INT_ENA_S  10
/* LEDC_DUTY_CHNG_END_CH5_INT_ENA : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH5_INT_ENA    (BIT(9))
#define LEDC_DUTY_CHNG_END_CH5_INT_ENA_M  (BIT(9))
#define LEDC_DUTY_CHNG_END_CH5_INT_ENA_V  0x1
#define LEDC_DUTY_CHNG_END_CH5_INT_ENA_S  9
/* LEDC_DUTY_CHNG_END_CH4_INT_ENA : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH4_INT_ENA    (BIT(8))
#define LEDC_DUTY_CHNG_END_CH4_INT_ENA_M  (BIT(8))
#define LEDC_DUTY_CHNG_END_CH4_INT_ENA_V  0x1
#define LEDC_DUTY_CHNG_END_CH4_INT_ENA_S  8
/* LEDC_DUTY_CHNG_END_CH3_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH3_INT_ENA    (BIT(7))
#define LEDC_DUTY_CHNG_END_CH3_INT_ENA_M  (BIT(7))
#define LEDC_DUTY_CHNG_END_CH3_INT_ENA_V  0x1
#define LEDC_DUTY_CHNG_END_CH3_INT_ENA_S  7
/* LEDC_DUTY_CHNG_END_CH2_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH2_INT_ENA    (BIT(6))
#define LEDC_DUTY_CHNG_END_CH2_INT_ENA_M  (BIT(6))
#define LEDC_DUTY_CHNG_END_CH2_INT_ENA_V  0x1
#define LEDC_DUTY_CHNG_END_CH2_INT_ENA_S  6
/* LEDC_DUTY_CHNG_END_CH1_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH1_INT_ENA    (BIT(5))
#define LEDC_DUTY_CHNG_END_CH1_INT_ENA_M  (BIT(5))
#define LEDC_DUTY_CHNG_END_CH1_INT_ENA_V  0x1
#define LEDC_DUTY_CHNG_END_CH1_INT_ENA_S  5
/* LEDC_DUTY_CHNG_END_CH0_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH0_INT_ENA    (BIT(4))
#define LEDC_DUTY_CHNG_END_CH0_INT_ENA_M  (BIT(4))
#define LEDC_DUTY_CHNG_END_CH0_INT_ENA_V  0x1
#define LEDC_DUTY_CHNG_END_CH0_INT_ENA_S  4
/* LEDC_TIMER3_OVF_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_TIMER$n_OVF_INT..*/
#define LEDC_TIMER3_OVF_INT_ENA    (BIT(3))
#define LEDC_TIMER3_OVF_INT_ENA_M  (BIT(3))
#define LEDC_TIMER3_OVF_INT_ENA_V  0x1
#define LEDC_TIMER3_OVF_INT_ENA_S  3
/* LEDC_TIMER2_OVF_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_TIMER$n_OVF_INT..*/
#define LEDC_TIMER2_OVF_INT_ENA    (BIT(2))
#define LEDC_TIMER2_OVF_INT_ENA_M  (BIT(2))
#define LEDC_TIMER2_OVF_INT_ENA_V  0x1
#define LEDC_TIMER2_OVF_INT_ENA_S  2
/* LEDC_TIMER1_OVF_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_TIMER$n_OVF_INT..*/
#define LEDC_TIMER1_OVF_INT_ENA    (BIT(1))
#define LEDC_TIMER1_OVF_INT_ENA_M  (BIT(1))
#define LEDC_TIMER1_OVF_INT_ENA_V  0x1
#define LEDC_TIMER1_OVF_INT_ENA_S  1
/* LEDC_TIMER0_OVF_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Enable bit: Write 1 to enable LEDC_TIMER$n_OVF_INT..*/
#define LEDC_TIMER0_OVF_INT_ENA    (BIT(0))
#define LEDC_TIMER0_OVF_INT_ENA_M  (BIT(0))
#define LEDC_TIMER0_OVF_INT_ENA_V  0x1
#define LEDC_TIMER0_OVF_INT_ENA_S  0

#define LEDC_INT_CLR_REG          (DR_REG_LEDC_BASE + 0xCC)
/* LEDC_OVF_CNT_CH7_INT_CLR : WT ;bitpos:[19] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH7_INT_CLR    (BIT(19))
#define LEDC_OVF_CNT_CH7_INT_CLR_M  (BIT(19))
#define LEDC_OVF_CNT_CH7_INT_CLR_V  0x1
#define LEDC_OVF_CNT_CH7_INT_CLR_S  19
/* LEDC_OVF_CNT_CH6_INT_CLR : WT ;bitpos:[18] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH6_INT_CLR    (BIT(18))
#define LEDC_OVF_CNT_CH6_INT_CLR_M  (BIT(18))
#define LEDC_OVF_CNT_CH6_INT_CLR_V  0x1
#define LEDC_OVF_CNT_CH6_INT_CLR_S  18
/* LEDC_OVF_CNT_CH5_INT_CLR : WT ;bitpos:[17] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH5_INT_CLR    (BIT(17))
#define LEDC_OVF_CNT_CH5_INT_CLR_M  (BIT(17))
#define LEDC_OVF_CNT_CH5_INT_CLR_V  0x1
#define LEDC_OVF_CNT_CH5_INT_CLR_S  17
/* LEDC_OVF_CNT_CH4_INT_CLR : WT ;bitpos:[16] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH4_INT_CLR    (BIT(16))
#define LEDC_OVF_CNT_CH4_INT_CLR_M  (BIT(16))
#define LEDC_OVF_CNT_CH4_INT_CLR_V  0x1
#define LEDC_OVF_CNT_CH4_INT_CLR_S  16
/* LEDC_OVF_CNT_CH3_INT_CLR : WT ;bitpos:[15] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH3_INT_CLR    (BIT(15))
#define LEDC_OVF_CNT_CH3_INT_CLR_M  (BIT(15))
#define LEDC_OVF_CNT_CH3_INT_CLR_V  0x1
#define LEDC_OVF_CNT_CH3_INT_CLR_S  15
/* LEDC_OVF_CNT_CH2_INT_CLR : WT ;bitpos:[14] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH2_INT_CLR    (BIT(14))
#define LEDC_OVF_CNT_CH2_INT_CLR_M  (BIT(14))
#define LEDC_OVF_CNT_CH2_INT_CLR_V  0x1
#define LEDC_OVF_CNT_CH2_INT_CLR_S  14
/* LEDC_OVF_CNT_CH1_INT_CLR : WT ;bitpos:[13] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH1_INT_CLR    (BIT(13))
#define LEDC_OVF_CNT_CH1_INT_CLR_M  (BIT(13))
#define LEDC_OVF_CNT_CH1_INT_CLR_V  0x1
#define LEDC_OVF_CNT_CH1_INT_CLR_S  13
/* LEDC_OVF_CNT_CH0_INT_CLR : WT ;bitpos:[12] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT..*/
#define LEDC_OVF_CNT_CH0_INT_CLR    (BIT(12))
#define LEDC_OVF_CNT_CH0_INT_CLR_M  (BIT(12))
#define LEDC_OVF_CNT_CH0_INT_CLR_V  0x1
#define LEDC_OVF_CNT_CH0_INT_CLR_S  12
/* LEDC_DUTY_CHNG_END_CH7_INT_CLR : WT ;bitpos:[11] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH7_INT_CLR    (BIT(11))
#define LEDC_DUTY_CHNG_END_CH7_INT_CLR_M  (BIT(11))
#define LEDC_DUTY_CHNG_END_CH7_INT_CLR_V  0x1
#define LEDC_DUTY_CHNG_END_CH7_INT_CLR_S  11
/* LEDC_DUTY_CHNG_END_CH6_INT_CLR : WT ;bitpos:[10] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH6_INT_CLR    (BIT(10))
#define LEDC_DUTY_CHNG_END_CH6_INT_CLR_M  (BIT(10))
#define LEDC_DUTY_CHNG_END_CH6_INT_CLR_V  0x1
#define LEDC_DUTY_CHNG_END_CH6_INT_CLR_S  10
/* LEDC_DUTY_CHNG_END_CH5_INT_CLR : WT ;bitpos:[9] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH5_INT_CLR    (BIT(9))
#define LEDC_DUTY_CHNG_END_CH5_INT_CLR_M  (BIT(9))
#define LEDC_DUTY_CHNG_END_CH5_INT_CLR_V  0x1
#define LEDC_DUTY_CHNG_END_CH5_INT_CLR_S  9
/* LEDC_DUTY_CHNG_END_CH4_INT_CLR : WT ;bitpos:[8] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH4_INT_CLR    (BIT(8))
#define LEDC_DUTY_CHNG_END_CH4_INT_CLR_M  (BIT(8))
#define LEDC_DUTY_CHNG_END_CH4_INT_CLR_V  0x1
#define LEDC_DUTY_CHNG_END_CH4_INT_CLR_S  8
/* LEDC_DUTY_CHNG_END_CH3_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH3_INT_CLR    (BIT(7))
#define LEDC_DUTY_CHNG_END_CH3_INT_CLR_M  (BIT(7))
#define LEDC_DUTY_CHNG_END_CH3_INT_CLR_V  0x1
#define LEDC_DUTY_CHNG_END_CH3_INT_CLR_S  7
/* LEDC_DUTY_CHNG_END_CH2_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH2_INT_CLR    (BIT(6))
#define LEDC_DUTY_CHNG_END_CH2_INT_CLR_M  (BIT(6))
#define LEDC_DUTY_CHNG_END_CH2_INT_CLR_V  0x1
#define LEDC_DUTY_CHNG_END_CH2_INT_CLR_S  6
/* LEDC_DUTY_CHNG_END_CH1_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH1_INT_CLR    (BIT(5))
#define LEDC_DUTY_CHNG_END_CH1_INT_CLR_M  (BIT(5))
#define LEDC_DUTY_CHNG_END_CH1_INT_CLR_V  0x1
#define LEDC_DUTY_CHNG_END_CH1_INT_CLR_S  5
/* LEDC_DUTY_CHNG_END_CH0_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT..*/
#define LEDC_DUTY_CHNG_END_CH0_INT_CLR    (BIT(4))
#define LEDC_DUTY_CHNG_END_CH0_INT_CLR_M  (BIT(4))
#define LEDC_DUTY_CHNG_END_CH0_INT_CLR_V  0x1
#define LEDC_DUTY_CHNG_END_CH0_INT_CLR_S  4
/* LEDC_TIMER3_OVF_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_TIMER$n_OVF_INT..*/
#define LEDC_TIMER3_OVF_INT_CLR    (BIT(3))
#define LEDC_TIMER3_OVF_INT_CLR_M  (BIT(3))
#define LEDC_TIMER3_OVF_INT_CLR_V  0x1
#define LEDC_TIMER3_OVF_INT_CLR_S  3
/* LEDC_TIMER2_OVF_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_TIMER$n_OVF_INT..*/
#define LEDC_TIMER2_OVF_INT_CLR    (BIT(2))
#define LEDC_TIMER2_OVF_INT_CLR_M  (BIT(2))
#define LEDC_TIMER2_OVF_INT_CLR_V  0x1
#define LEDC_TIMER2_OVF_INT_CLR_S  2
/* LEDC_TIMER1_OVF_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_TIMER$n_OVF_INT..*/
#define LEDC_TIMER1_OVF_INT_CLR    (BIT(1))
#define LEDC_TIMER1_OVF_INT_CLR_M  (BIT(1))
#define LEDC_TIMER1_OVF_INT_CLR_V  0x1
#define LEDC_TIMER1_OVF_INT_CLR_S  1
/* LEDC_TIMER0_OVF_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: Clear bit: Write 1 to clear LEDC_TIMER$n_OVF_INT..*/
#define LEDC_TIMER0_OVF_INT_CLR    (BIT(0))
#define LEDC_TIMER0_OVF_INT_CLR_M  (BIT(0))
#define LEDC_TIMER0_OVF_INT_CLR_V  0x1
#define LEDC_TIMER0_OVF_INT_CLR_S  0

#define LEDC_CH0_GAMMA_CONF_REG          (DR_REG_LEDC_BASE + 0x100)
/* LEDC_CH0_GAMMA_RESUME : WT ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or nor to resume duty cycle fading of LEDC ch$n.\\0: Invalid.
 No effect\\1: Resume.*/
#define LEDC_CH0_GAMMA_RESUME    (BIT(6))
#define LEDC_CH0_GAMMA_RESUME_M  (BIT(6))
#define LEDC_CH0_GAMMA_RESUME_V  0x1
#define LEDC_CH0_GAMMA_RESUME_S  6
/* LEDC_CH0_GAMMA_PAUSE : WT ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to pause duty cycle fading of LEDC ch$n.\\0: Invalid.
No effect\\1: Pause.*/
#define LEDC_CH0_GAMMA_PAUSE    (BIT(5))
#define LEDC_CH0_GAMMA_PAUSE_M  (BIT(5))
#define LEDC_CH0_GAMMA_PAUSE_V  0x1
#define LEDC_CH0_GAMMA_PAUSE_S  5
/* LEDC_CH0_GAMMA_ENTRY_NUM : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the number of duty cycle fading rages for LEDC ch$n..*/
#define LEDC_CH0_GAMMA_ENTRY_NUM    0x0000001F
#define LEDC_CH0_GAMMA_ENTRY_NUM_M  ((LEDC_CH0_GAMMA_ENTRY_NUM_V)<<(LEDC_CH0_GAMMA_ENTRY_NUM_S))
#define LEDC_CH0_GAMMA_ENTRY_NUM_V  0x1F
#define LEDC_CH0_GAMMA_ENTRY_NUM_S  0

#define LEDC_CH1_GAMMA_CONF_REG          (DR_REG_LEDC_BASE + 0x104)
/* LEDC_CH1_GAMMA_RESUME : WT ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or nor to resume duty cycle fading of LEDC ch$n.\\0: Invalid.
 No effect\\1: Resume.*/
#define LEDC_CH1_GAMMA_RESUME    (BIT(6))
#define LEDC_CH1_GAMMA_RESUME_M  (BIT(6))
#define LEDC_CH1_GAMMA_RESUME_V  0x1
#define LEDC_CH1_GAMMA_RESUME_S  6
/* LEDC_CH1_GAMMA_PAUSE : WT ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to pause duty cycle fading of LEDC ch$n.\\0: Invalid.
No effect\\1: Pause.*/
#define LEDC_CH1_GAMMA_PAUSE    (BIT(5))
#define LEDC_CH1_GAMMA_PAUSE_M  (BIT(5))
#define LEDC_CH1_GAMMA_PAUSE_V  0x1
#define LEDC_CH1_GAMMA_PAUSE_S  5
/* LEDC_CH1_GAMMA_ENTRY_NUM : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the number of duty cycle fading rages for LEDC ch$n..*/
#define LEDC_CH1_GAMMA_ENTRY_NUM    0x0000001F
#define LEDC_CH1_GAMMA_ENTRY_NUM_M  ((LEDC_CH1_GAMMA_ENTRY_NUM_V)<<(LEDC_CH1_GAMMA_ENTRY_NUM_S))
#define LEDC_CH1_GAMMA_ENTRY_NUM_V  0x1F
#define LEDC_CH1_GAMMA_ENTRY_NUM_S  0

#define LEDC_CH2_GAMMA_CONF_REG          (DR_REG_LEDC_BASE + 0x108)
/* LEDC_CH2_GAMMA_RESUME : WT ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or nor to resume duty cycle fading of LEDC ch$n.\\0: Invalid.
 No effect\\1: Resume.*/
#define LEDC_CH2_GAMMA_RESUME    (BIT(6))
#define LEDC_CH2_GAMMA_RESUME_M  (BIT(6))
#define LEDC_CH2_GAMMA_RESUME_V  0x1
#define LEDC_CH2_GAMMA_RESUME_S  6
/* LEDC_CH2_GAMMA_PAUSE : WT ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to pause duty cycle fading of LEDC ch$n.\\0: Invalid.
No effect\\1: Pause.*/
#define LEDC_CH2_GAMMA_PAUSE    (BIT(5))
#define LEDC_CH2_GAMMA_PAUSE_M  (BIT(5))
#define LEDC_CH2_GAMMA_PAUSE_V  0x1
#define LEDC_CH2_GAMMA_PAUSE_S  5
/* LEDC_CH2_GAMMA_ENTRY_NUM : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the number of duty cycle fading rages for LEDC ch$n..*/
#define LEDC_CH2_GAMMA_ENTRY_NUM    0x0000001F
#define LEDC_CH2_GAMMA_ENTRY_NUM_M  ((LEDC_CH2_GAMMA_ENTRY_NUM_V)<<(LEDC_CH2_GAMMA_ENTRY_NUM_S))
#define LEDC_CH2_GAMMA_ENTRY_NUM_V  0x1F
#define LEDC_CH2_GAMMA_ENTRY_NUM_S  0

#define LEDC_CH3_GAMMA_CONF_REG          (DR_REG_LEDC_BASE + 0x10C)
/* LEDC_CH3_GAMMA_RESUME : WT ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or nor to resume duty cycle fading of LEDC ch$n.\\0: Invalid.
 No effect\\1: Resume.*/
#define LEDC_CH3_GAMMA_RESUME    (BIT(6))
#define LEDC_CH3_GAMMA_RESUME_M  (BIT(6))
#define LEDC_CH3_GAMMA_RESUME_V  0x1
#define LEDC_CH3_GAMMA_RESUME_S  6
/* LEDC_CH3_GAMMA_PAUSE : WT ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to pause duty cycle fading of LEDC ch$n.\\0: Invalid.
No effect\\1: Pause.*/
#define LEDC_CH3_GAMMA_PAUSE    (BIT(5))
#define LEDC_CH3_GAMMA_PAUSE_M  (BIT(5))
#define LEDC_CH3_GAMMA_PAUSE_V  0x1
#define LEDC_CH3_GAMMA_PAUSE_S  5
/* LEDC_CH3_GAMMA_ENTRY_NUM : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the number of duty cycle fading rages for LEDC ch$n..*/
#define LEDC_CH3_GAMMA_ENTRY_NUM    0x0000001F
#define LEDC_CH3_GAMMA_ENTRY_NUM_M  ((LEDC_CH3_GAMMA_ENTRY_NUM_V)<<(LEDC_CH3_GAMMA_ENTRY_NUM_S))
#define LEDC_CH3_GAMMA_ENTRY_NUM_V  0x1F
#define LEDC_CH3_GAMMA_ENTRY_NUM_S  0

#define LEDC_CH4_GAMMA_CONF_REG          (DR_REG_LEDC_BASE + 0x110)
/* LEDC_CH4_GAMMA_RESUME : WT ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or nor to resume duty cycle fading of LEDC ch$n.\\0: Invalid.
 No effect\\1: Resume.*/
#define LEDC_CH4_GAMMA_RESUME    (BIT(6))
#define LEDC_CH4_GAMMA_RESUME_M  (BIT(6))
#define LEDC_CH4_GAMMA_RESUME_V  0x1
#define LEDC_CH4_GAMMA_RESUME_S  6
/* LEDC_CH4_GAMMA_PAUSE : WT ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to pause duty cycle fading of LEDC ch$n.\\0: Invalid.
No effect\\1: Pause.*/
#define LEDC_CH4_GAMMA_PAUSE    (BIT(5))
#define LEDC_CH4_GAMMA_PAUSE_M  (BIT(5))
#define LEDC_CH4_GAMMA_PAUSE_V  0x1
#define LEDC_CH4_GAMMA_PAUSE_S  5
/* LEDC_CH4_GAMMA_ENTRY_NUM : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the number of duty cycle fading rages for LEDC ch$n..*/
#define LEDC_CH4_GAMMA_ENTRY_NUM    0x0000001F
#define LEDC_CH4_GAMMA_ENTRY_NUM_M  ((LEDC_CH4_GAMMA_ENTRY_NUM_V)<<(LEDC_CH4_GAMMA_ENTRY_NUM_S))
#define LEDC_CH4_GAMMA_ENTRY_NUM_V  0x1F
#define LEDC_CH4_GAMMA_ENTRY_NUM_S  0

#define LEDC_CH5_GAMMA_CONF_REG          (DR_REG_LEDC_BASE + 0x114)
/* LEDC_CH5_GAMMA_RESUME : WT ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or nor to resume duty cycle fading of LEDC ch$n.\\0: Invalid.
 No effect\\1: Resume.*/
#define LEDC_CH5_GAMMA_RESUME    (BIT(6))
#define LEDC_CH5_GAMMA_RESUME_M  (BIT(6))
#define LEDC_CH5_GAMMA_RESUME_V  0x1
#define LEDC_CH5_GAMMA_RESUME_S  6
/* LEDC_CH5_GAMMA_PAUSE : WT ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to pause duty cycle fading of LEDC ch$n.\\0: Invalid.
No effect\\1: Pause.*/
#define LEDC_CH5_GAMMA_PAUSE    (BIT(5))
#define LEDC_CH5_GAMMA_PAUSE_M  (BIT(5))
#define LEDC_CH5_GAMMA_PAUSE_V  0x1
#define LEDC_CH5_GAMMA_PAUSE_S  5
/* LEDC_CH5_GAMMA_ENTRY_NUM : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the number of duty cycle fading rages for LEDC ch$n..*/
#define LEDC_CH5_GAMMA_ENTRY_NUM    0x0000001F
#define LEDC_CH5_GAMMA_ENTRY_NUM_M  ((LEDC_CH5_GAMMA_ENTRY_NUM_V)<<(LEDC_CH5_GAMMA_ENTRY_NUM_S))
#define LEDC_CH5_GAMMA_ENTRY_NUM_V  0x1F
#define LEDC_CH5_GAMMA_ENTRY_NUM_S  0

#define LEDC_CH6_GAMMA_CONF_REG          (DR_REG_LEDC_BASE + 0x118)
/* LEDC_CH6_GAMMA_RESUME : WT ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or nor to resume duty cycle fading of LEDC ch$n.\\0: Invalid.
 No effect\\1: Resume.*/
#define LEDC_CH6_GAMMA_RESUME    (BIT(6))
#define LEDC_CH6_GAMMA_RESUME_M  (BIT(6))
#define LEDC_CH6_GAMMA_RESUME_V  0x1
#define LEDC_CH6_GAMMA_RESUME_S  6
/* LEDC_CH6_GAMMA_PAUSE : WT ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to pause duty cycle fading of LEDC ch$n.\\0: Invalid.
No effect\\1: Pause.*/
#define LEDC_CH6_GAMMA_PAUSE    (BIT(5))
#define LEDC_CH6_GAMMA_PAUSE_M  (BIT(5))
#define LEDC_CH6_GAMMA_PAUSE_V  0x1
#define LEDC_CH6_GAMMA_PAUSE_S  5
/* LEDC_CH6_GAMMA_ENTRY_NUM : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the number of duty cycle fading rages for LEDC ch$n..*/
#define LEDC_CH6_GAMMA_ENTRY_NUM    0x0000001F
#define LEDC_CH6_GAMMA_ENTRY_NUM_M  ((LEDC_CH6_GAMMA_ENTRY_NUM_V)<<(LEDC_CH6_GAMMA_ENTRY_NUM_S))
#define LEDC_CH6_GAMMA_ENTRY_NUM_V  0x1F
#define LEDC_CH6_GAMMA_ENTRY_NUM_S  0

#define LEDC_CH7_GAMMA_CONF_REG          (DR_REG_LEDC_BASE + 0x11C)
/* LEDC_CH7_GAMMA_RESUME : WT ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or nor to resume duty cycle fading of LEDC ch$n.\\0: Invalid.
 No effect\\1: Resume.*/
#define LEDC_CH7_GAMMA_RESUME    (BIT(6))
#define LEDC_CH7_GAMMA_RESUME_M  (BIT(6))
#define LEDC_CH7_GAMMA_RESUME_V  0x1
#define LEDC_CH7_GAMMA_RESUME_S  6
/* LEDC_CH7_GAMMA_PAUSE : WT ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to pause duty cycle fading of LEDC ch$n.\\0: Invalid.
No effect\\1: Pause.*/
#define LEDC_CH7_GAMMA_PAUSE    (BIT(5))
#define LEDC_CH7_GAMMA_PAUSE_M  (BIT(5))
#define LEDC_CH7_GAMMA_PAUSE_V  0x1
#define LEDC_CH7_GAMMA_PAUSE_S  5
/* LEDC_CH7_GAMMA_ENTRY_NUM : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Configures the number of duty cycle fading rages for LEDC ch$n..*/
#define LEDC_CH7_GAMMA_ENTRY_NUM    0x0000001F
#define LEDC_CH7_GAMMA_ENTRY_NUM_M  ((LEDC_CH7_GAMMA_ENTRY_NUM_V)<<(LEDC_CH7_GAMMA_ENTRY_NUM_S))
#define LEDC_CH7_GAMMA_ENTRY_NUM_V  0x1F
#define LEDC_CH7_GAMMA_ENTRY_NUM_S  0

#define LEDC_EVT_TASK_EN0_REG          (DR_REG_LEDC_BASE + 0x120)
/* LEDC_TASK_DUTY_SCALE_UPDATE_CH7_EN : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\
0: Disable\\1: Enable.*/
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH7_EN    (BIT(31))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH7_EN_M  (BIT(31))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH7_EN_V  0x1
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH7_EN_S  31
/* LEDC_TASK_DUTY_SCALE_UPDATE_CH6_EN : R/W ;bitpos:[30] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\
0: Disable\\1: Enable.*/
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH6_EN    (BIT(30))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH6_EN_M  (BIT(30))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH6_EN_V  0x1
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH6_EN_S  30
/* LEDC_TASK_DUTY_SCALE_UPDATE_CH5_EN : R/W ;bitpos:[29] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\
0: Disable\\1: Enable.*/
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH5_EN    (BIT(29))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH5_EN_M  (BIT(29))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH5_EN_V  0x1
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH5_EN_S  29
/* LEDC_TASK_DUTY_SCALE_UPDATE_CH4_EN : R/W ;bitpos:[28] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\
0: Disable\\1: Enable.*/
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH4_EN    (BIT(28))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH4_EN_M  (BIT(28))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH4_EN_V  0x1
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH4_EN_S  28
/* LEDC_TASK_DUTY_SCALE_UPDATE_CH3_EN : R/W ;bitpos:[27] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\
0: Disable\\1: Enable.*/
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH3_EN    (BIT(27))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH3_EN_M  (BIT(27))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH3_EN_V  0x1
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH3_EN_S  27
/* LEDC_TASK_DUTY_SCALE_UPDATE_CH2_EN : R/W ;bitpos:[26] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\
0: Disable\\1: Enable.*/
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH2_EN    (BIT(26))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH2_EN_M  (BIT(26))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH2_EN_V  0x1
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH2_EN_S  26
/* LEDC_TASK_DUTY_SCALE_UPDATE_CH1_EN : R/W ;bitpos:[25] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\
0: Disable\\1: Enable.*/
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH1_EN    (BIT(25))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH1_EN_M  (BIT(25))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH1_EN_V  0x1
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH1_EN_S  25
/* LEDC_TASK_DUTY_SCALE_UPDATE_CH0_EN : R/W ;bitpos:[24] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\
0: Disable\\1: Enable.*/
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH0_EN    (BIT(24))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH0_EN_M  (BIT(24))
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH0_EN_V  0x1
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH0_EN_S  24
/* LEDC_EVT_TIME3_CMP_EN : R/W ;bitpos:[23] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_TIMER$n_CMP event.\\0: Disable\
\1: Enable.*/
#define LEDC_EVT_TIME3_CMP_EN    (BIT(23))
#define LEDC_EVT_TIME3_CMP_EN_M  (BIT(23))
#define LEDC_EVT_TIME3_CMP_EN_V  0x1
#define LEDC_EVT_TIME3_CMP_EN_S  23
/* LEDC_EVT_TIME2_CMP_EN : R/W ;bitpos:[22] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_TIMER$n_CMP event.\\0: Disable\
\1: Enable.*/
#define LEDC_EVT_TIME2_CMP_EN    (BIT(22))
#define LEDC_EVT_TIME2_CMP_EN_M  (BIT(22))
#define LEDC_EVT_TIME2_CMP_EN_V  0x1
#define LEDC_EVT_TIME2_CMP_EN_S  22
/* LEDC_EVT_TIME1_CMP_EN : R/W ;bitpos:[21] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_TIMER$n_CMP event.\\0: Disable\
\1: Enable.*/
#define LEDC_EVT_TIME1_CMP_EN    (BIT(21))
#define LEDC_EVT_TIME1_CMP_EN_M  (BIT(21))
#define LEDC_EVT_TIME1_CMP_EN_V  0x1
#define LEDC_EVT_TIME1_CMP_EN_S  21
/* LEDC_EVT_TIME0_CMP_EN : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_TIMER$n_CMP event.\\0: Disable\
\1: Enable.*/
#define LEDC_EVT_TIME0_CMP_EN    (BIT(20))
#define LEDC_EVT_TIME0_CMP_EN_M  (BIT(20))
#define LEDC_EVT_TIME0_CMP_EN_V  0x1
#define LEDC_EVT_TIME0_CMP_EN_S  20
/* LEDC_EVT_TIME_OVF_TIMER3_EN : R/W ;bitpos:[19] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_TIME_OVF_TIMER$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_TIME_OVF_TIMER3_EN    (BIT(19))
#define LEDC_EVT_TIME_OVF_TIMER3_EN_M  (BIT(19))
#define LEDC_EVT_TIME_OVF_TIMER3_EN_V  0x1
#define LEDC_EVT_TIME_OVF_TIMER3_EN_S  19
/* LEDC_EVT_TIME_OVF_TIMER2_EN : R/W ;bitpos:[18] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_TIME_OVF_TIMER$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_TIME_OVF_TIMER2_EN    (BIT(18))
#define LEDC_EVT_TIME_OVF_TIMER2_EN_M  (BIT(18))
#define LEDC_EVT_TIME_OVF_TIMER2_EN_V  0x1
#define LEDC_EVT_TIME_OVF_TIMER2_EN_S  18
/* LEDC_EVT_TIME_OVF_TIMER1_EN : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_TIME_OVF_TIMER$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_TIME_OVF_TIMER1_EN    (BIT(17))
#define LEDC_EVT_TIME_OVF_TIMER1_EN_M  (BIT(17))
#define LEDC_EVT_TIME_OVF_TIMER1_EN_V  0x1
#define LEDC_EVT_TIME_OVF_TIMER1_EN_S  17
/* LEDC_EVT_TIME_OVF_TIMER0_EN : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_TIME_OVF_TIMER$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_TIME_OVF_TIMER0_EN    (BIT(16))
#define LEDC_EVT_TIME_OVF_TIMER0_EN_M  (BIT(16))
#define LEDC_EVT_TIME_OVF_TIMER0_EN_V  0x1
#define LEDC_EVT_TIME_OVF_TIMER0_EN_S  16
/* LEDC_EVT_OVF_CNT_PLS_CH7_EN : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_OVF_CNT_PLS_CH7_EN    (BIT(15))
#define LEDC_EVT_OVF_CNT_PLS_CH7_EN_M  (BIT(15))
#define LEDC_EVT_OVF_CNT_PLS_CH7_EN_V  0x1
#define LEDC_EVT_OVF_CNT_PLS_CH7_EN_S  15
/* LEDC_EVT_OVF_CNT_PLS_CH6_EN : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_OVF_CNT_PLS_CH6_EN    (BIT(14))
#define LEDC_EVT_OVF_CNT_PLS_CH6_EN_M  (BIT(14))
#define LEDC_EVT_OVF_CNT_PLS_CH6_EN_V  0x1
#define LEDC_EVT_OVF_CNT_PLS_CH6_EN_S  14
/* LEDC_EVT_OVF_CNT_PLS_CH5_EN : R/W ;bitpos:[13] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_OVF_CNT_PLS_CH5_EN    (BIT(13))
#define LEDC_EVT_OVF_CNT_PLS_CH5_EN_M  (BIT(13))
#define LEDC_EVT_OVF_CNT_PLS_CH5_EN_V  0x1
#define LEDC_EVT_OVF_CNT_PLS_CH5_EN_S  13
/* LEDC_EVT_OVF_CNT_PLS_CH4_EN : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_OVF_CNT_PLS_CH4_EN    (BIT(12))
#define LEDC_EVT_OVF_CNT_PLS_CH4_EN_M  (BIT(12))
#define LEDC_EVT_OVF_CNT_PLS_CH4_EN_V  0x1
#define LEDC_EVT_OVF_CNT_PLS_CH4_EN_S  12
/* LEDC_EVT_OVF_CNT_PLS_CH3_EN : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_OVF_CNT_PLS_CH3_EN    (BIT(11))
#define LEDC_EVT_OVF_CNT_PLS_CH3_EN_M  (BIT(11))
#define LEDC_EVT_OVF_CNT_PLS_CH3_EN_V  0x1
#define LEDC_EVT_OVF_CNT_PLS_CH3_EN_S  11
/* LEDC_EVT_OVF_CNT_PLS_CH2_EN : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_OVF_CNT_PLS_CH2_EN    (BIT(10))
#define LEDC_EVT_OVF_CNT_PLS_CH2_EN_M  (BIT(10))
#define LEDC_EVT_OVF_CNT_PLS_CH2_EN_V  0x1
#define LEDC_EVT_OVF_CNT_PLS_CH2_EN_S  10
/* LEDC_EVT_OVF_CNT_PLS_CH1_EN : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_OVF_CNT_PLS_CH1_EN    (BIT(9))
#define LEDC_EVT_OVF_CNT_PLS_CH1_EN_M  (BIT(9))
#define LEDC_EVT_OVF_CNT_PLS_CH1_EN_V  0x1
#define LEDC_EVT_OVF_CNT_PLS_CH1_EN_S  9
/* LEDC_EVT_OVF_CNT_PLS_CH0_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Dis
able\\1: Enable.*/
#define LEDC_EVT_OVF_CNT_PLS_CH0_EN    (BIT(8))
#define LEDC_EVT_OVF_CNT_PLS_CH0_EN_M  (BIT(8))
#define LEDC_EVT_OVF_CNT_PLS_CH0_EN_V  0x1
#define LEDC_EVT_OVF_CNT_PLS_CH0_EN_S  8
/* LEDC_EVT_DUTY_CHNG_END_CH7_EN : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: D
isable\\1: Enable.*/
#define LEDC_EVT_DUTY_CHNG_END_CH7_EN    (BIT(7))
#define LEDC_EVT_DUTY_CHNG_END_CH7_EN_M  (BIT(7))
#define LEDC_EVT_DUTY_CHNG_END_CH7_EN_V  0x1
#define LEDC_EVT_DUTY_CHNG_END_CH7_EN_S  7
/* LEDC_EVT_DUTY_CHNG_END_CH6_EN : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: D
isable\\1: Enable.*/
#define LEDC_EVT_DUTY_CHNG_END_CH6_EN    (BIT(6))
#define LEDC_EVT_DUTY_CHNG_END_CH6_EN_M  (BIT(6))
#define LEDC_EVT_DUTY_CHNG_END_CH6_EN_V  0x1
#define LEDC_EVT_DUTY_CHNG_END_CH6_EN_S  6
/* LEDC_EVT_DUTY_CHNG_END_CH5_EN : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: D
isable\\1: Enable.*/
#define LEDC_EVT_DUTY_CHNG_END_CH5_EN    (BIT(5))
#define LEDC_EVT_DUTY_CHNG_END_CH5_EN_M  (BIT(5))
#define LEDC_EVT_DUTY_CHNG_END_CH5_EN_V  0x1
#define LEDC_EVT_DUTY_CHNG_END_CH5_EN_S  5
/* LEDC_EVT_DUTY_CHNG_END_CH4_EN : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: D
isable\\1: Enable.*/
#define LEDC_EVT_DUTY_CHNG_END_CH4_EN    (BIT(4))
#define LEDC_EVT_DUTY_CHNG_END_CH4_EN_M  (BIT(4))
#define LEDC_EVT_DUTY_CHNG_END_CH4_EN_V  0x1
#define LEDC_EVT_DUTY_CHNG_END_CH4_EN_S  4
/* LEDC_EVT_DUTY_CHNG_END_CH3_EN : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: D
isable\\1: Enable.*/
#define LEDC_EVT_DUTY_CHNG_END_CH3_EN    (BIT(3))
#define LEDC_EVT_DUTY_CHNG_END_CH3_EN_M  (BIT(3))
#define LEDC_EVT_DUTY_CHNG_END_CH3_EN_V  0x1
#define LEDC_EVT_DUTY_CHNG_END_CH3_EN_S  3
/* LEDC_EVT_DUTY_CHNG_END_CH2_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: D
isable\\1: Enable.*/
#define LEDC_EVT_DUTY_CHNG_END_CH2_EN    (BIT(2))
#define LEDC_EVT_DUTY_CHNG_END_CH2_EN_M  (BIT(2))
#define LEDC_EVT_DUTY_CHNG_END_CH2_EN_V  0x1
#define LEDC_EVT_DUTY_CHNG_END_CH2_EN_S  2
/* LEDC_EVT_DUTY_CHNG_END_CH1_EN : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: D
isable\\1: Enable.*/
#define LEDC_EVT_DUTY_CHNG_END_CH1_EN    (BIT(1))
#define LEDC_EVT_DUTY_CHNG_END_CH1_EN_M  (BIT(1))
#define LEDC_EVT_DUTY_CHNG_END_CH1_EN_V  0x1
#define LEDC_EVT_DUTY_CHNG_END_CH1_EN_S  1
/* LEDC_EVT_DUTY_CHNG_END_CH0_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: D
isable\\1: Enable.*/
#define LEDC_EVT_DUTY_CHNG_END_CH0_EN    (BIT(0))
#define LEDC_EVT_DUTY_CHNG_END_CH0_EN_M  (BIT(0))
#define LEDC_EVT_DUTY_CHNG_END_CH0_EN_V  0x1
#define LEDC_EVT_DUTY_CHNG_END_CH0_EN_S  0

#define LEDC_EVT_TASK_EN1_REG          (DR_REG_LEDC_BASE + 0x124)
/* LEDC_TASK_TIMER3_PAUSE_RESUME_EN : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_PAUSE and LEDC_TASK_TIMER$
n _RESUME task.\\0: Disable\\1: Enable.*/
#define LEDC_TASK_TIMER3_PAUSE_RESUME_EN    (BIT(31))
#define LEDC_TASK_TIMER3_PAUSE_RESUME_EN_M  (BIT(31))
#define LEDC_TASK_TIMER3_PAUSE_RESUME_EN_V  0x1
#define LEDC_TASK_TIMER3_PAUSE_RESUME_EN_S  31
/* LEDC_TASK_TIMER2_PAUSE_RESUME_EN : R/W ;bitpos:[30] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_PAUSE and LEDC_TASK_TIMER$
n _RESUME task.\\0: Disable\\1: Enable.*/
#define LEDC_TASK_TIMER2_PAUSE_RESUME_EN    (BIT(30))
#define LEDC_TASK_TIMER2_PAUSE_RESUME_EN_M  (BIT(30))
#define LEDC_TASK_TIMER2_PAUSE_RESUME_EN_V  0x1
#define LEDC_TASK_TIMER2_PAUSE_RESUME_EN_S  30
/* LEDC_TASK_TIMER1_PAUSE_RESUME_EN : R/W ;bitpos:[29] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_PAUSE and LEDC_TASK_TIMER$
n _RESUME task.\\0: Disable\\1: Enable.*/
#define LEDC_TASK_TIMER1_PAUSE_RESUME_EN    (BIT(29))
#define LEDC_TASK_TIMER1_PAUSE_RESUME_EN_M  (BIT(29))
#define LEDC_TASK_TIMER1_PAUSE_RESUME_EN_V  0x1
#define LEDC_TASK_TIMER1_PAUSE_RESUME_EN_S  29
/* LEDC_TASK_TIMER0_PAUSE_RESUME_EN : R/W ;bitpos:[28] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_PAUSE and LEDC_TASK_TIMER$
n _RESUME task.\\0: Disable\\1: Enable.*/
#define LEDC_TASK_TIMER0_PAUSE_RESUME_EN    (BIT(28))
#define LEDC_TASK_TIMER0_PAUSE_RESUME_EN_M  (BIT(28))
#define LEDC_TASK_TIMER0_PAUSE_RESUME_EN_V  0x1
#define LEDC_TASK_TIMER0_PAUSE_RESUME_EN_S  28
/* LEDC_TASK_TIMER3_RST_EN : R/W ;bitpos:[27] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_RST task.\\0: Disable\\1:
Enable.*/
#define LEDC_TASK_TIMER3_RST_EN    (BIT(27))
#define LEDC_TASK_TIMER3_RST_EN_M  (BIT(27))
#define LEDC_TASK_TIMER3_RST_EN_V  0x1
#define LEDC_TASK_TIMER3_RST_EN_S  27
/* LEDC_TASK_TIMER2_RST_EN : R/W ;bitpos:[26] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_RST task.\\0: Disable\\1:
Enable.*/
#define LEDC_TASK_TIMER2_RST_EN    (BIT(26))
#define LEDC_TASK_TIMER2_RST_EN_M  (BIT(26))
#define LEDC_TASK_TIMER2_RST_EN_V  0x1
#define LEDC_TASK_TIMER2_RST_EN_S  26
/* LEDC_TASK_TIMER1_RST_EN : R/W ;bitpos:[25] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_RST task.\\0: Disable\\1:
Enable.*/
#define LEDC_TASK_TIMER1_RST_EN    (BIT(25))
#define LEDC_TASK_TIMER1_RST_EN_M  (BIT(25))
#define LEDC_TASK_TIMER1_RST_EN_V  0x1
#define LEDC_TASK_TIMER1_RST_EN_S  25
/* LEDC_TASK_TIMER0_RST_EN : R/W ;bitpos:[24] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_RST task.\\0: Disable\\1:
Enable.*/
#define LEDC_TASK_TIMER0_RST_EN    (BIT(24))
#define LEDC_TASK_TIMER0_RST_EN_M  (BIT(24))
#define LEDC_TASK_TIMER0_RST_EN_V  0x1
#define LEDC_TASK_TIMER0_RST_EN_S  24
/* LEDC_TASK_OVF_CNT_RST_CH7_EN : R/W ;bitpos:[23] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_OVF_CNT_RST_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_OVF_CNT_RST_CH7_EN    (BIT(23))
#define LEDC_TASK_OVF_CNT_RST_CH7_EN_M  (BIT(23))
#define LEDC_TASK_OVF_CNT_RST_CH7_EN_V  0x1
#define LEDC_TASK_OVF_CNT_RST_CH7_EN_S  23
/* LEDC_TASK_OVF_CNT_RST_CH6_EN : R/W ;bitpos:[22] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_OVF_CNT_RST_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_OVF_CNT_RST_CH6_EN    (BIT(22))
#define LEDC_TASK_OVF_CNT_RST_CH6_EN_M  (BIT(22))
#define LEDC_TASK_OVF_CNT_RST_CH6_EN_V  0x1
#define LEDC_TASK_OVF_CNT_RST_CH6_EN_S  22
/* LEDC_TASK_OVF_CNT_RST_CH5_EN : R/W ;bitpos:[21] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_OVF_CNT_RST_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_OVF_CNT_RST_CH5_EN    (BIT(21))
#define LEDC_TASK_OVF_CNT_RST_CH5_EN_M  (BIT(21))
#define LEDC_TASK_OVF_CNT_RST_CH5_EN_V  0x1
#define LEDC_TASK_OVF_CNT_RST_CH5_EN_S  21
/* LEDC_TASK_OVF_CNT_RST_CH4_EN : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_OVF_CNT_RST_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_OVF_CNT_RST_CH4_EN    (BIT(20))
#define LEDC_TASK_OVF_CNT_RST_CH4_EN_M  (BIT(20))
#define LEDC_TASK_OVF_CNT_RST_CH4_EN_V  0x1
#define LEDC_TASK_OVF_CNT_RST_CH4_EN_S  20
/* LEDC_TASK_OVF_CNT_RST_CH3_EN : R/W ;bitpos:[19] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_OVF_CNT_RST_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_OVF_CNT_RST_CH3_EN    (BIT(19))
#define LEDC_TASK_OVF_CNT_RST_CH3_EN_M  (BIT(19))
#define LEDC_TASK_OVF_CNT_RST_CH3_EN_V  0x1
#define LEDC_TASK_OVF_CNT_RST_CH3_EN_S  19
/* LEDC_TASK_OVF_CNT_RST_CH2_EN : R/W ;bitpos:[18] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_OVF_CNT_RST_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_OVF_CNT_RST_CH2_EN    (BIT(18))
#define LEDC_TASK_OVF_CNT_RST_CH2_EN_M  (BIT(18))
#define LEDC_TASK_OVF_CNT_RST_CH2_EN_V  0x1
#define LEDC_TASK_OVF_CNT_RST_CH2_EN_S  18
/* LEDC_TASK_OVF_CNT_RST_CH1_EN : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_OVF_CNT_RST_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_OVF_CNT_RST_CH1_EN    (BIT(17))
#define LEDC_TASK_OVF_CNT_RST_CH1_EN_M  (BIT(17))
#define LEDC_TASK_OVF_CNT_RST_CH1_EN_V  0x1
#define LEDC_TASK_OVF_CNT_RST_CH1_EN_S  17
/* LEDC_TASK_OVF_CNT_RST_CH0_EN : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_OVF_CNT_RST_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_OVF_CNT_RST_CH0_EN    (BIT(16))
#define LEDC_TASK_OVF_CNT_RST_CH0_EN_M  (BIT(16))
#define LEDC_TASK_OVF_CNT_RST_CH0_EN_V  0x1
#define LEDC_TASK_OVF_CNT_RST_CH0_EN_S  16
/* LEDC_TASK_SIG_OUT_DIS_CH7_EN : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_SIG_OUT_DIS_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_SIG_OUT_DIS_CH7_EN    (BIT(15))
#define LEDC_TASK_SIG_OUT_DIS_CH7_EN_M  (BIT(15))
#define LEDC_TASK_SIG_OUT_DIS_CH7_EN_V  0x1
#define LEDC_TASK_SIG_OUT_DIS_CH7_EN_S  15
/* LEDC_TASK_SIG_OUT_DIS_CH6_EN : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_SIG_OUT_DIS_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_SIG_OUT_DIS_CH6_EN    (BIT(14))
#define LEDC_TASK_SIG_OUT_DIS_CH6_EN_M  (BIT(14))
#define LEDC_TASK_SIG_OUT_DIS_CH6_EN_V  0x1
#define LEDC_TASK_SIG_OUT_DIS_CH6_EN_S  14
/* LEDC_TASK_SIG_OUT_DIS_CH5_EN : R/W ;bitpos:[13] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_SIG_OUT_DIS_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_SIG_OUT_DIS_CH5_EN    (BIT(13))
#define LEDC_TASK_SIG_OUT_DIS_CH5_EN_M  (BIT(13))
#define LEDC_TASK_SIG_OUT_DIS_CH5_EN_V  0x1
#define LEDC_TASK_SIG_OUT_DIS_CH5_EN_S  13
/* LEDC_TASK_SIG_OUT_DIS_CH4_EN : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_SIG_OUT_DIS_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_SIG_OUT_DIS_CH4_EN    (BIT(12))
#define LEDC_TASK_SIG_OUT_DIS_CH4_EN_M  (BIT(12))
#define LEDC_TASK_SIG_OUT_DIS_CH4_EN_V  0x1
#define LEDC_TASK_SIG_OUT_DIS_CH4_EN_S  12
/* LEDC_TASK_SIG_OUT_DIS_CH3_EN : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_SIG_OUT_DIS_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_SIG_OUT_DIS_CH3_EN    (BIT(11))
#define LEDC_TASK_SIG_OUT_DIS_CH3_EN_M  (BIT(11))
#define LEDC_TASK_SIG_OUT_DIS_CH3_EN_V  0x1
#define LEDC_TASK_SIG_OUT_DIS_CH3_EN_S  11
/* LEDC_TASK_SIG_OUT_DIS_CH2_EN : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_SIG_OUT_DIS_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_SIG_OUT_DIS_CH2_EN    (BIT(10))
#define LEDC_TASK_SIG_OUT_DIS_CH2_EN_M  (BIT(10))
#define LEDC_TASK_SIG_OUT_DIS_CH2_EN_V  0x1
#define LEDC_TASK_SIG_OUT_DIS_CH2_EN_S  10
/* LEDC_TASK_SIG_OUT_DIS_CH1_EN : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_SIG_OUT_DIS_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_SIG_OUT_DIS_CH1_EN    (BIT(9))
#define LEDC_TASK_SIG_OUT_DIS_CH1_EN_M  (BIT(9))
#define LEDC_TASK_SIG_OUT_DIS_CH1_EN_V  0x1
#define LEDC_TASK_SIG_OUT_DIS_CH1_EN_S  9
/* LEDC_TASK_SIG_OUT_DIS_CH0_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_SIG_OUT_DIS_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_SIG_OUT_DIS_CH0_EN    (BIT(8))
#define LEDC_TASK_SIG_OUT_DIS_CH0_EN_M  (BIT(8))
#define LEDC_TASK_SIG_OUT_DIS_CH0_EN_V  0x1
#define LEDC_TASK_SIG_OUT_DIS_CH0_EN_S  8
/* LEDC_TASK_TIMER3_CAP_EN : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_CAP task.\\0: Disable\\1:
Enable.*/
#define LEDC_TASK_TIMER3_CAP_EN    (BIT(7))
#define LEDC_TASK_TIMER3_CAP_EN_M  (BIT(7))
#define LEDC_TASK_TIMER3_CAP_EN_V  0x1
#define LEDC_TASK_TIMER3_CAP_EN_S  7
/* LEDC_TASK_TIMER2_CAP_EN : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_CAP task.\\0: Disable\\1:
Enable.*/
#define LEDC_TASK_TIMER2_CAP_EN    (BIT(6))
#define LEDC_TASK_TIMER2_CAP_EN_M  (BIT(6))
#define LEDC_TASK_TIMER2_CAP_EN_V  0x1
#define LEDC_TASK_TIMER2_CAP_EN_S  6
/* LEDC_TASK_TIMER1_CAP_EN : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_CAP task.\\0: Disable\\1:
Enable.*/
#define LEDC_TASK_TIMER1_CAP_EN    (BIT(5))
#define LEDC_TASK_TIMER1_CAP_EN_M  (BIT(5))
#define LEDC_TASK_TIMER1_CAP_EN_V  0x1
#define LEDC_TASK_TIMER1_CAP_EN_S  5
/* LEDC_TASK_TIMER0_CAP_EN : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_CAP task.\\0: Disable\\1:
Enable.*/
#define LEDC_TASK_TIMER0_CAP_EN    (BIT(4))
#define LEDC_TASK_TIMER0_CAP_EN_M  (BIT(4))
#define LEDC_TASK_TIMER0_CAP_EN_V  0x1
#define LEDC_TASK_TIMER0_CAP_EN_S  4
/* LEDC_TASK_TIMER3_RES_UPDATE_EN : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_RES_UPDATE task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_TIMER3_RES_UPDATE_EN    (BIT(3))
#define LEDC_TASK_TIMER3_RES_UPDATE_EN_M  (BIT(3))
#define LEDC_TASK_TIMER3_RES_UPDATE_EN_V  0x1
#define LEDC_TASK_TIMER3_RES_UPDATE_EN_S  3
/* LEDC_TASK_TIMER2_RES_UPDATE_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_RES_UPDATE task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_TIMER2_RES_UPDATE_EN    (BIT(2))
#define LEDC_TASK_TIMER2_RES_UPDATE_EN_M  (BIT(2))
#define LEDC_TASK_TIMER2_RES_UPDATE_EN_V  0x1
#define LEDC_TASK_TIMER2_RES_UPDATE_EN_S  2
/* LEDC_TASK_TIMER1_RES_UPDATE_EN : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_RES_UPDATE task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_TIMER1_RES_UPDATE_EN    (BIT(1))
#define LEDC_TASK_TIMER1_RES_UPDATE_EN_M  (BIT(1))
#define LEDC_TASK_TIMER1_RES_UPDATE_EN_V  0x1
#define LEDC_TASK_TIMER1_RES_UPDATE_EN_S  1
/* LEDC_TASK_TIMER0_RES_UPDATE_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_TIMER$n_RES_UPDATE task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_TIMER0_RES_UPDATE_EN    (BIT(0))
#define LEDC_TASK_TIMER0_RES_UPDATE_EN_M  (BIT(0))
#define LEDC_TASK_TIMER0_RES_UPDATE_EN_V  0x1
#define LEDC_TASK_TIMER0_RES_UPDATE_EN_S  0

#define LEDC_EVT_TASK_EN2_REG          (DR_REG_LEDC_BASE + 0x128)
/* LEDC_TASK_GAMMA_RESUME_CH7_EN : R/W ;bitpos:[23] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disabl
e\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESUME_CH7_EN    (BIT(23))
#define LEDC_TASK_GAMMA_RESUME_CH7_EN_M  (BIT(23))
#define LEDC_TASK_GAMMA_RESUME_CH7_EN_V  0x1
#define LEDC_TASK_GAMMA_RESUME_CH7_EN_S  23
/* LEDC_TASK_GAMMA_RESUME_CH6_EN : R/W ;bitpos:[22] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disabl
e\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESUME_CH6_EN    (BIT(22))
#define LEDC_TASK_GAMMA_RESUME_CH6_EN_M  (BIT(22))
#define LEDC_TASK_GAMMA_RESUME_CH6_EN_V  0x1
#define LEDC_TASK_GAMMA_RESUME_CH6_EN_S  22
/* LEDC_TASK_GAMMA_RESUME_CH5_EN : R/W ;bitpos:[21] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disabl
e\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESUME_CH5_EN    (BIT(21))
#define LEDC_TASK_GAMMA_RESUME_CH5_EN_M  (BIT(21))
#define LEDC_TASK_GAMMA_RESUME_CH5_EN_V  0x1
#define LEDC_TASK_GAMMA_RESUME_CH5_EN_S  21
/* LEDC_TASK_GAMMA_RESUME_CH4_EN : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disabl
e\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESUME_CH4_EN    (BIT(20))
#define LEDC_TASK_GAMMA_RESUME_CH4_EN_M  (BIT(20))
#define LEDC_TASK_GAMMA_RESUME_CH4_EN_V  0x1
#define LEDC_TASK_GAMMA_RESUME_CH4_EN_S  20
/* LEDC_TASK_GAMMA_RESUME_CH3_EN : R/W ;bitpos:[19] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disabl
e\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESUME_CH3_EN    (BIT(19))
#define LEDC_TASK_GAMMA_RESUME_CH3_EN_M  (BIT(19))
#define LEDC_TASK_GAMMA_RESUME_CH3_EN_V  0x1
#define LEDC_TASK_GAMMA_RESUME_CH3_EN_S  19
/* LEDC_TASK_GAMMA_RESUME_CH2_EN : R/W ;bitpos:[18] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disabl
e\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESUME_CH2_EN    (BIT(18))
#define LEDC_TASK_GAMMA_RESUME_CH2_EN_M  (BIT(18))
#define LEDC_TASK_GAMMA_RESUME_CH2_EN_V  0x1
#define LEDC_TASK_GAMMA_RESUME_CH2_EN_S  18
/* LEDC_TASK_GAMMA_RESUME_CH1_EN : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disabl
e\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESUME_CH1_EN    (BIT(17))
#define LEDC_TASK_GAMMA_RESUME_CH1_EN_M  (BIT(17))
#define LEDC_TASK_GAMMA_RESUME_CH1_EN_V  0x1
#define LEDC_TASK_GAMMA_RESUME_CH1_EN_S  17
/* LEDC_TASK_GAMMA_RESUME_CH0_EN : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disabl
e\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESUME_CH0_EN    (BIT(16))
#define LEDC_TASK_GAMMA_RESUME_CH0_EN_M  (BIT(16))
#define LEDC_TASK_GAMMA_RESUME_CH0_EN_V  0x1
#define LEDC_TASK_GAMMA_RESUME_CH0_EN_S  16
/* LEDC_TASK_GAMMA_PAUSE_CH7_EN : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_GAMMA_PAUSE_CH7_EN    (BIT(15))
#define LEDC_TASK_GAMMA_PAUSE_CH7_EN_M  (BIT(15))
#define LEDC_TASK_GAMMA_PAUSE_CH7_EN_V  0x1
#define LEDC_TASK_GAMMA_PAUSE_CH7_EN_S  15
/* LEDC_TASK_GAMMA_PAUSE_CH6_EN : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_GAMMA_PAUSE_CH6_EN    (BIT(14))
#define LEDC_TASK_GAMMA_PAUSE_CH6_EN_M  (BIT(14))
#define LEDC_TASK_GAMMA_PAUSE_CH6_EN_V  0x1
#define LEDC_TASK_GAMMA_PAUSE_CH6_EN_S  14
/* LEDC_TASK_GAMMA_PAUSE_CH5_EN : R/W ;bitpos:[13] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_GAMMA_PAUSE_CH5_EN    (BIT(13))
#define LEDC_TASK_GAMMA_PAUSE_CH5_EN_M  (BIT(13))
#define LEDC_TASK_GAMMA_PAUSE_CH5_EN_V  0x1
#define LEDC_TASK_GAMMA_PAUSE_CH5_EN_S  13
/* LEDC_TASK_GAMMA_PAUSE_CH4_EN : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_GAMMA_PAUSE_CH4_EN    (BIT(12))
#define LEDC_TASK_GAMMA_PAUSE_CH4_EN_M  (BIT(12))
#define LEDC_TASK_GAMMA_PAUSE_CH4_EN_V  0x1
#define LEDC_TASK_GAMMA_PAUSE_CH4_EN_S  12
/* LEDC_TASK_GAMMA_PAUSE_CH3_EN : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_GAMMA_PAUSE_CH3_EN    (BIT(11))
#define LEDC_TASK_GAMMA_PAUSE_CH3_EN_M  (BIT(11))
#define LEDC_TASK_GAMMA_PAUSE_CH3_EN_V  0x1
#define LEDC_TASK_GAMMA_PAUSE_CH3_EN_S  11
/* LEDC_TASK_GAMMA_PAUSE_CH2_EN : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_GAMMA_PAUSE_CH2_EN    (BIT(10))
#define LEDC_TASK_GAMMA_PAUSE_CH2_EN_M  (BIT(10))
#define LEDC_TASK_GAMMA_PAUSE_CH2_EN_V  0x1
#define LEDC_TASK_GAMMA_PAUSE_CH2_EN_S  10
/* LEDC_TASK_GAMMA_PAUSE_CH1_EN : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_GAMMA_PAUSE_CH1_EN    (BIT(9))
#define LEDC_TASK_GAMMA_PAUSE_CH1_EN_M  (BIT(9))
#define LEDC_TASK_GAMMA_PAUSE_CH1_EN_V  0x1
#define LEDC_TASK_GAMMA_PAUSE_CH1_EN_S  9
/* LEDC_TASK_GAMMA_PAUSE_CH0_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable
\\1: Enable.*/
#define LEDC_TASK_GAMMA_PAUSE_CH0_EN    (BIT(8))
#define LEDC_TASK_GAMMA_PAUSE_CH0_EN_M  (BIT(8))
#define LEDC_TASK_GAMMA_PAUSE_CH0_EN_V  0x1
#define LEDC_TASK_GAMMA_PAUSE_CH0_EN_S  8
/* LEDC_TASK_GAMMA_RESTART_CH7_EN : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESTART_CH7_EN    (BIT(7))
#define LEDC_TASK_GAMMA_RESTART_CH7_EN_M  (BIT(7))
#define LEDC_TASK_GAMMA_RESTART_CH7_EN_V  0x1
#define LEDC_TASK_GAMMA_RESTART_CH7_EN_S  7
/* LEDC_TASK_GAMMA_RESTART_CH6_EN : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESTART_CH6_EN    (BIT(6))
#define LEDC_TASK_GAMMA_RESTART_CH6_EN_M  (BIT(6))
#define LEDC_TASK_GAMMA_RESTART_CH6_EN_V  0x1
#define LEDC_TASK_GAMMA_RESTART_CH6_EN_S  6
/* LEDC_TASK_GAMMA_RESTART_CH5_EN : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESTART_CH5_EN    (BIT(5))
#define LEDC_TASK_GAMMA_RESTART_CH5_EN_M  (BIT(5))
#define LEDC_TASK_GAMMA_RESTART_CH5_EN_V  0x1
#define LEDC_TASK_GAMMA_RESTART_CH5_EN_S  5
/* LEDC_TASK_GAMMA_RESTART_CH4_EN : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESTART_CH4_EN    (BIT(4))
#define LEDC_TASK_GAMMA_RESTART_CH4_EN_M  (BIT(4))
#define LEDC_TASK_GAMMA_RESTART_CH4_EN_V  0x1
#define LEDC_TASK_GAMMA_RESTART_CH4_EN_S  4
/* LEDC_TASK_GAMMA_RESTART_CH3_EN : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESTART_CH3_EN    (BIT(3))
#define LEDC_TASK_GAMMA_RESTART_CH3_EN_M  (BIT(3))
#define LEDC_TASK_GAMMA_RESTART_CH3_EN_V  0x1
#define LEDC_TASK_GAMMA_RESTART_CH3_EN_S  3
/* LEDC_TASK_GAMMA_RESTART_CH2_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESTART_CH2_EN    (BIT(2))
#define LEDC_TASK_GAMMA_RESTART_CH2_EN_M  (BIT(2))
#define LEDC_TASK_GAMMA_RESTART_CH2_EN_V  0x1
#define LEDC_TASK_GAMMA_RESTART_CH2_EN_S  2
/* LEDC_TASK_GAMMA_RESTART_CH1_EN : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESTART_CH1_EN    (BIT(1))
#define LEDC_TASK_GAMMA_RESTART_CH1_EN_M  (BIT(1))
#define LEDC_TASK_GAMMA_RESTART_CH1_EN_V  0x1
#define LEDC_TASK_GAMMA_RESTART_CH1_EN_S  1
/* LEDC_TASK_GAMMA_RESTART_CH0_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disab
le\\1: Enable.*/
#define LEDC_TASK_GAMMA_RESTART_CH0_EN    (BIT(0))
#define LEDC_TASK_GAMMA_RESTART_CH0_EN_M  (BIT(0))
#define LEDC_TASK_GAMMA_RESTART_CH0_EN_V  0x1
#define LEDC_TASK_GAMMA_RESTART_CH0_EN_S  0

#define LEDC_TIMER0_CMP_REG          (DR_REG_LEDC_BASE + 0x140)
/* LEDC_TIMER0_CMP : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures the comparison value for LEDC timer$n..*/
#define LEDC_TIMER0_CMP    0x000FFFFF
#define LEDC_TIMER0_CMP_M  ((LEDC_TIMER0_CMP_V)<<(LEDC_TIMER0_CMP_S))
#define LEDC_TIMER0_CMP_V  0xFFFFF
#define LEDC_TIMER0_CMP_S  0

#define LEDC_TIMER1_CMP_REG          (DR_REG_LEDC_BASE + 0x144)
/* LEDC_TIMER1_CMP : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures the comparison value for LEDC timer$n..*/
#define LEDC_TIMER1_CMP    0x000FFFFF
#define LEDC_TIMER1_CMP_M  ((LEDC_TIMER1_CMP_V)<<(LEDC_TIMER1_CMP_S))
#define LEDC_TIMER1_CMP_V  0xFFFFF
#define LEDC_TIMER1_CMP_S  0

#define LEDC_TIMER2_CMP_REG          (DR_REG_LEDC_BASE + 0x148)
/* LEDC_TIMER2_CMP : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures the comparison value for LEDC timer$n..*/
#define LEDC_TIMER2_CMP    0x000FFFFF
#define LEDC_TIMER2_CMP_M  ((LEDC_TIMER2_CMP_V)<<(LEDC_TIMER2_CMP_S))
#define LEDC_TIMER2_CMP_V  0xFFFFF
#define LEDC_TIMER2_CMP_S  0

#define LEDC_TIMER3_CMP_REG          (DR_REG_LEDC_BASE + 0x14C)
/* LEDC_TIMER3_CMP : R/W ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Configures the comparison value for LEDC timer$n..*/
#define LEDC_TIMER3_CMP    0x000FFFFF
#define LEDC_TIMER3_CMP_M  ((LEDC_TIMER3_CMP_V)<<(LEDC_TIMER3_CMP_S))
#define LEDC_TIMER3_CMP_V  0xFFFFF
#define LEDC_TIMER3_CMP_S  0

#define LEDC_TIMER0_CNT_CAP_REG          (DR_REG_LEDC_BASE + 0x150)
/* LEDC_TIMER0_CNT_CAP : RO ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Represents the captured LEDC timer$n count value..*/
#define LEDC_TIMER0_CNT_CAP    0x000FFFFF
#define LEDC_TIMER0_CNT_CAP_M  ((LEDC_TIMER0_CNT_CAP_V)<<(LEDC_TIMER0_CNT_CAP_S))
#define LEDC_TIMER0_CNT_CAP_V  0xFFFFF
#define LEDC_TIMER0_CNT_CAP_S  0

#define LEDC_TIMER1_CNT_CAP_REG          (DR_REG_LEDC_BASE + 0x154)
/* LEDC_TIMER1_CNT_CAP : RO ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Represents the captured LEDC timer$n count value..*/
#define LEDC_TIMER1_CNT_CAP    0x000FFFFF
#define LEDC_TIMER1_CNT_CAP_M  ((LEDC_TIMER1_CNT_CAP_V)<<(LEDC_TIMER1_CNT_CAP_S))
#define LEDC_TIMER1_CNT_CAP_V  0xFFFFF
#define LEDC_TIMER1_CNT_CAP_S  0

#define LEDC_TIMER2_CNT_CAP_REG          (DR_REG_LEDC_BASE + 0x158)
/* LEDC_TIMER2_CNT_CAP : RO ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Represents the captured LEDC timer$n count value..*/
#define LEDC_TIMER2_CNT_CAP    0x000FFFFF
#define LEDC_TIMER2_CNT_CAP_M  ((LEDC_TIMER2_CNT_CAP_V)<<(LEDC_TIMER2_CNT_CAP_S))
#define LEDC_TIMER2_CNT_CAP_V  0xFFFFF
#define LEDC_TIMER2_CNT_CAP_S  0

#define LEDC_TIMER3_CNT_CAP_REG          (DR_REG_LEDC_BASE + 0x15C)
/* LEDC_TIMER3_CNT_CAP : RO ;bitpos:[19:0] ;default: 20'h0 ; */
/*description: Represents the captured LEDC timer$n count value..*/
#define LEDC_TIMER3_CNT_CAP    0x000FFFFF
#define LEDC_TIMER3_CNT_CAP_M  ((LEDC_TIMER3_CNT_CAP_V)<<(LEDC_TIMER3_CNT_CAP_S))
#define LEDC_TIMER3_CNT_CAP_V  0xFFFFF
#define LEDC_TIMER3_CNT_CAP_S  0

#define LEDC_CONF_REG          (DR_REG_LEDC_BASE + 0x170)
/* LEDC_CLK_EN : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: Configures whether or not to open register clock gate.\\0: Open the clock gate o
nly when application writes registers\\1: Force open the clock gate for register.*/
#define LEDC_CLK_EN    (BIT(31))
#define LEDC_CLK_EN_M  (BIT(31))
#define LEDC_CLK_EN_V  0x1
#define LEDC_CLK_EN_S  31
/* LEDC_GAMMA_RAM_CLK_EN_CH7 : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the c
lock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force op
en the clock gate for LEDC ch$n gamma ram.*/
#define LEDC_GAMMA_RAM_CLK_EN_CH7    (BIT(9))
#define LEDC_GAMMA_RAM_CLK_EN_CH7_M  (BIT(9))
#define LEDC_GAMMA_RAM_CLK_EN_CH7_V  0x1
#define LEDC_GAMMA_RAM_CLK_EN_CH7_S  9
/* LEDC_GAMMA_RAM_CLK_EN_CH6 : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the c
lock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force op
en the clock gate for LEDC ch$n gamma ram.*/
#define LEDC_GAMMA_RAM_CLK_EN_CH6    (BIT(8))
#define LEDC_GAMMA_RAM_CLK_EN_CH6_M  (BIT(8))
#define LEDC_GAMMA_RAM_CLK_EN_CH6_V  0x1
#define LEDC_GAMMA_RAM_CLK_EN_CH6_S  8
/* LEDC_GAMMA_RAM_CLK_EN_CH5 : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the c
lock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force op
en the clock gate for LEDC ch$n gamma ram.*/
#define LEDC_GAMMA_RAM_CLK_EN_CH5    (BIT(7))
#define LEDC_GAMMA_RAM_CLK_EN_CH5_M  (BIT(7))
#define LEDC_GAMMA_RAM_CLK_EN_CH5_V  0x1
#define LEDC_GAMMA_RAM_CLK_EN_CH5_S  7
/* LEDC_GAMMA_RAM_CLK_EN_CH4 : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the c
lock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force op
en the clock gate for LEDC ch$n gamma ram.*/
#define LEDC_GAMMA_RAM_CLK_EN_CH4    (BIT(6))
#define LEDC_GAMMA_RAM_CLK_EN_CH4_M  (BIT(6))
#define LEDC_GAMMA_RAM_CLK_EN_CH4_V  0x1
#define LEDC_GAMMA_RAM_CLK_EN_CH4_S  6
/* LEDC_GAMMA_RAM_CLK_EN_CH3 : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the c
lock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force op
en the clock gate for LEDC ch$n gamma ram.*/
#define LEDC_GAMMA_RAM_CLK_EN_CH3    (BIT(5))
#define LEDC_GAMMA_RAM_CLK_EN_CH3_M  (BIT(5))
#define LEDC_GAMMA_RAM_CLK_EN_CH3_V  0x1
#define LEDC_GAMMA_RAM_CLK_EN_CH3_S  5
/* LEDC_GAMMA_RAM_CLK_EN_CH2 : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the c
lock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force op
en the clock gate for LEDC ch$n gamma ram.*/
#define LEDC_GAMMA_RAM_CLK_EN_CH2    (BIT(4))
#define LEDC_GAMMA_RAM_CLK_EN_CH2_M  (BIT(4))
#define LEDC_GAMMA_RAM_CLK_EN_CH2_V  0x1
#define LEDC_GAMMA_RAM_CLK_EN_CH2_S  4
/* LEDC_GAMMA_RAM_CLK_EN_CH1 : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the c
lock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force op
en the clock gate for LEDC ch$n gamma ram.*/
#define LEDC_GAMMA_RAM_CLK_EN_CH1    (BIT(3))
#define LEDC_GAMMA_RAM_CLK_EN_CH1_M  (BIT(3))
#define LEDC_GAMMA_RAM_CLK_EN_CH1_V  0x1
#define LEDC_GAMMA_RAM_CLK_EN_CH1_S  3
/* LEDC_GAMMA_RAM_CLK_EN_CH0 : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the c
lock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force op
en the clock gate for LEDC ch$n gamma ram.*/
#define LEDC_GAMMA_RAM_CLK_EN_CH0    (BIT(2))
#define LEDC_GAMMA_RAM_CLK_EN_CH0_M  (BIT(2))
#define LEDC_GAMMA_RAM_CLK_EN_CH0_V  0x1
#define LEDC_GAMMA_RAM_CLK_EN_CH0_S  2

#define LEDC_DATE_REG          (DR_REG_LEDC_BASE + 0x174)
/* LEDC_LEDC_DATE : R/W ;bitpos:[27:0] ;default: 28'h2409260 ; */
/*description: Configures the version..*/
#define LEDC_LEDC_DATE    0x0FFFFFFF
#define LEDC_LEDC_DATE_M  ((LEDC_LEDC_DATE_V)<<(LEDC_LEDC_DATE_S))
#define LEDC_LEDC_DATE_V  0xFFFFFFF
#define LEDC_LEDC_DATE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_LEDC_REG_H_ */
