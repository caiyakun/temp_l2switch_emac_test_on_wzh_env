/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_PMU_REG_H_
#define _SOC_PMU_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define PMU_FOSC_CTRL_REG          (DR_REG_PMU_BASE + 0x0)
/* PMU_FOSC_SW_PD : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_fosc_pd_sw_ctrl = 1, software can directly control fosc by this bit.*/
#define PMU_FOSC_SW_PD    (BIT(1))
#define PMU_FOSC_SW_PD_M  (BIT(1))
#define PMU_FOSC_SW_PD_V  0x1
#define PMU_FOSC_SW_PD_S  1
/* PMU_FOSC_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control; 0:pmu auto control.*/
#define PMU_FOSC_PD_SW_CTRL    (BIT(0))
#define PMU_FOSC_PD_SW_CTRL_M  (BIT(0))
#define PMU_FOSC_PD_SW_CTRL_V  0x1
#define PMU_FOSC_PD_SW_CTRL_S  0

#define PMU_FOSC_CFG_REG          (DR_REG_PMU_BASE + 0x4)
/* PMU_FOSC_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_FOSC_COOLDOWN_TIME    0x000000FF
#define PMU_FOSC_COOLDOWN_TIME_M  ((PMU_FOSC_COOLDOWN_TIME_V)<<(PMU_FOSC_COOLDOWN_TIME_S))
#define PMU_FOSC_COOLDOWN_TIME_V  0xFF
#define PMU_FOSC_COOLDOWN_TIME_S  8
/* PMU_FOSC_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_FOSC_STABLE_TIME    0x000000FF
#define PMU_FOSC_STABLE_TIME_M  ((PMU_FOSC_STABLE_TIME_V)<<(PMU_FOSC_STABLE_TIME_S))
#define PMU_FOSC_STABLE_TIME_V  0xFF
#define PMU_FOSC_STABLE_TIME_S  0

#define PMU_FOSC_STS_REG          (DR_REG_PMU_BASE + 0x8)
/* PMU_FOSC_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: fosc fsm state for debug.*/
#define PMU_FOSC_STATE    0x00000007
#define PMU_FOSC_STATE_M  ((PMU_FOSC_STATE_V)<<(PMU_FOSC_STATE_S))
#define PMU_FOSC_STATE_V  0x7
#define PMU_FOSC_STATE_S  1
/* PMU_FOSC_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: fosc is ready to work.*/
#define PMU_FOSC_READY    (BIT(0))
#define PMU_FOSC_READY_M  (BIT(0))
#define PMU_FOSC_READY_V  0x1
#define PMU_FOSC_READY_S  0

#define PMU_FOSC_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0xC)
/* PMU_PD_CPU_TOP_FOSC_BOND : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: 1:fosc can be off only after cpu_top power down ; 0:fosc can be off even though
cpu_top is power on.*/
#define PMU_PD_CPU_TOP_FOSC_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_FOSC_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_FOSC_BOND_V  0x1
#define PMU_PD_CPU_TOP_FOSC_BOND_S  2
/* PMU_PD_CPU_CORE0_FOSC_BOND : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1:fosc can be off only after cpu_core0 power down ; 0:fosc can be off even thoug
h cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_FOSC_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_FOSC_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_FOSC_BOND_V  0x1
#define PMU_PD_CPU_CORE0_FOSC_BOND_S  1
/* PMU_PD_CPU_CORE1_FOSC_BOND : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:fosc can be off only after cpu_core1 power down ; 0:fosc can be off even thoug
h cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_FOSC_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_FOSC_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_FOSC_BOND_V  0x1
#define PMU_PD_CPU_CORE1_FOSC_BOND_S  0

#define PMU_XTL_CTRL_REG          (DR_REG_PMU_BASE + 0x10)
/* PMU_XTL_SW_PD : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_xtl_pd_sw_ctrl = 1, software can directly control xtl by this bit.*/
#define PMU_XTL_SW_PD    (BIT(1))
#define PMU_XTL_SW_PD_M  (BIT(1))
#define PMU_XTL_SW_PD_V  0x1
#define PMU_XTL_SW_PD_S  1
/* PMU_XTL_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_XTL_PD_SW_CTRL    (BIT(0))
#define PMU_XTL_PD_SW_CTRL_M  (BIT(0))
#define PMU_XTL_PD_SW_CTRL_V  0x1
#define PMU_XTL_PD_SW_CTRL_S  0

#define PMU_XTL_CFG_REG          (DR_REG_PMU_BASE + 0x14)
/* PMU_XTL_COOLDOWN_TIME : R/W ;bitpos:[17:9] ;default: 9'h12c ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_XTL_COOLDOWN_TIME    0x000001FF
#define PMU_XTL_COOLDOWN_TIME_M  ((PMU_XTL_COOLDOWN_TIME_V)<<(PMU_XTL_COOLDOWN_TIME_S))
#define PMU_XTL_COOLDOWN_TIME_V  0x1FF
#define PMU_XTL_COOLDOWN_TIME_S  9
/* PMU_XTL_STABLE_TIME : R/W ;bitpos:[8:0] ;default: 9'h12c ; */
/*description: time for analog circuit stabilize.*/
#define PMU_XTL_STABLE_TIME    0x000001FF
#define PMU_XTL_STABLE_TIME_M  ((PMU_XTL_STABLE_TIME_V)<<(PMU_XTL_STABLE_TIME_S))
#define PMU_XTL_STABLE_TIME_V  0x1FF
#define PMU_XTL_STABLE_TIME_S  0

#define PMU_XTL_STS_REG          (DR_REG_PMU_BASE + 0x18)
/* PMU_XTL_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: xtl fsm state for debug.*/
#define PMU_XTL_STATE    0x00000007
#define PMU_XTL_STATE_M  ((PMU_XTL_STATE_V)<<(PMU_XTL_STATE_S))
#define PMU_XTL_STATE_V  0x7
#define PMU_XTL_STATE_S  1
/* PMU_XTL_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: xtl is ready to work.*/
#define PMU_XTL_READY    (BIT(0))
#define PMU_XTL_READY_M  (BIT(0))
#define PMU_XTL_READY_V  0x1
#define PMU_XTL_READY_S  0

#define PMU_XTL_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0x1C)
/* PMU_PD_CPU_TOP_XTL_BOND : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: 1:xtl can be off only after cpu_top power down ; 0:xtl can be off even though cp
u_top is power on.*/
#define PMU_PD_CPU_TOP_XTL_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_XTL_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_XTL_BOND_V  0x1
#define PMU_PD_CPU_TOP_XTL_BOND_S  2
/* PMU_PD_CPU_CORE0_XTL_BOND : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1:xtl can be off only after cpu_core0 power down ; 0:xtl can be off even though
cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_XTL_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_XTL_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_XTL_BOND_V  0x1
#define PMU_PD_CPU_CORE0_XTL_BOND_S  1
/* PMU_PD_CPU_CORE1_XTL_BOND : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:xtl can be off only after cpu_core1 power down ; 0:xtl can be off even though
cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_XTL_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_XTL_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_XTL_BOND_V  0x1
#define PMU_PD_CPU_CORE1_XTL_BOND_S  0

#define PMU_CPLL_CTRL_REG          (DR_REG_PMU_BASE + 0x20)
/* PMU_CPLL_SW_PD : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_cpll_pd_sw_ctrl = 1, software can directly control cpll by this bit.*/
#define PMU_CPLL_SW_PD    (BIT(1))
#define PMU_CPLL_SW_PD_M  (BIT(1))
#define PMU_CPLL_SW_PD_V  0x1
#define PMU_CPLL_SW_PD_S  1
/* PMU_CPLL_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_CPLL_PD_SW_CTRL    (BIT(0))
#define PMU_CPLL_PD_SW_CTRL_M  (BIT(0))
#define PMU_CPLL_PD_SW_CTRL_V  0x1
#define PMU_CPLL_PD_SW_CTRL_S  0

#define PMU_CPLL_CFG_REG          (DR_REG_PMU_BASE + 0x24)
/* PMU_CPLL_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_CPLL_COOLDOWN_TIME    0x000000FF
#define PMU_CPLL_COOLDOWN_TIME_M  ((PMU_CPLL_COOLDOWN_TIME_V)<<(PMU_CPLL_COOLDOWN_TIME_S))
#define PMU_CPLL_COOLDOWN_TIME_V  0xFF
#define PMU_CPLL_COOLDOWN_TIME_S  8
/* PMU_CPLL_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_CPLL_STABLE_TIME    0x000000FF
#define PMU_CPLL_STABLE_TIME_M  ((PMU_CPLL_STABLE_TIME_V)<<(PMU_CPLL_STABLE_TIME_S))
#define PMU_CPLL_STABLE_TIME_V  0xFF
#define PMU_CPLL_STABLE_TIME_S  0

#define PMU_CPLL_STS_REG          (DR_REG_PMU_BASE + 0x28)
/* PMU_CPLL_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: cpll fsm state for debug.*/
#define PMU_CPLL_STATE    0x00000007
#define PMU_CPLL_STATE_M  ((PMU_CPLL_STATE_V)<<(PMU_CPLL_STATE_S))
#define PMU_CPLL_STATE_V  0x7
#define PMU_CPLL_STATE_S  1
/* PMU_CPLL_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: cpll is ready to work.*/
#define PMU_CPLL_READY    (BIT(0))
#define PMU_CPLL_READY_M  (BIT(0))
#define PMU_CPLL_READY_V  0x1
#define PMU_CPLL_READY_S  0

#define PMU_CPLL_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0x2C)
/* PMU_PD_CPU_TOP_CPLL_BOND : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: 1:cpll can be off only after cpu_top power down ; 0:cpll can be off even though
cpu_top is power on.*/
#define PMU_PD_CPU_TOP_CPLL_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_CPLL_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_CPLL_BOND_V  0x1
#define PMU_PD_CPU_TOP_CPLL_BOND_S  2
/* PMU_PD_CPU_CORE0_CPLL_BOND : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1:cpll can be off only after cpu_core0 power down ; 0:cpll can be off even thoug
h cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_CPLL_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_CPLL_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_CPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE0_CPLL_BOND_S  1
/* PMU_PD_CPU_CORE1_CPLL_BOND : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:cpll can be off only after cpu_core1 power down ; 0:cpll can be off even thoug
h cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_CPLL_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_CPLL_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_CPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE1_CPLL_BOND_S  0

#define PMU_SYSPLL0_CTRL_REG          (DR_REG_PMU_BASE + 0x30)
/* PMU_SYSPLL0_SW_PD : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_syspll0_pd_sw_ctrl = 1, software can directly control syspll0 by this b
it.*/
#define PMU_SYSPLL0_SW_PD    (BIT(1))
#define PMU_SYSPLL0_SW_PD_M  (BIT(1))
#define PMU_SYSPLL0_SW_PD_V  0x1
#define PMU_SYSPLL0_SW_PD_S  1
/* PMU_SYSPLL0_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_SYSPLL0_PD_SW_CTRL    (BIT(0))
#define PMU_SYSPLL0_PD_SW_CTRL_M  (BIT(0))
#define PMU_SYSPLL0_PD_SW_CTRL_V  0x1
#define PMU_SYSPLL0_PD_SW_CTRL_S  0

#define PMU_SYSPLL0_CFG_REG          (DR_REG_PMU_BASE + 0x34)
/* PMU_SYSPLL0_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_SYSPLL0_COOLDOWN_TIME    0x000000FF
#define PMU_SYSPLL0_COOLDOWN_TIME_M  ((PMU_SYSPLL0_COOLDOWN_TIME_V)<<(PMU_SYSPLL0_COOLDOWN_TIME_S))
#define PMU_SYSPLL0_COOLDOWN_TIME_V  0xFF
#define PMU_SYSPLL0_COOLDOWN_TIME_S  8
/* PMU_SYSPLL0_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_SYSPLL0_STABLE_TIME    0x000000FF
#define PMU_SYSPLL0_STABLE_TIME_M  ((PMU_SYSPLL0_STABLE_TIME_V)<<(PMU_SYSPLL0_STABLE_TIME_S))
#define PMU_SYSPLL0_STABLE_TIME_V  0xFF
#define PMU_SYSPLL0_STABLE_TIME_S  0

#define PMU_SYSPLL0_STS_REG          (DR_REG_PMU_BASE + 0x38)
/* PMU_SYSPLL0_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: syspll0 fsm state for debug.*/
#define PMU_SYSPLL0_STATE    0x00000007
#define PMU_SYSPLL0_STATE_M  ((PMU_SYSPLL0_STATE_V)<<(PMU_SYSPLL0_STATE_S))
#define PMU_SYSPLL0_STATE_V  0x7
#define PMU_SYSPLL0_STATE_S  1
/* PMU_SYSPLL0_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: syspll0 is ready to work.*/
#define PMU_SYSPLL0_READY    (BIT(0))
#define PMU_SYSPLL0_READY_M  (BIT(0))
#define PMU_SYSPLL0_READY_V  0x1
#define PMU_SYSPLL0_READY_S  0

#define PMU_SYSPLL0_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0x3C)
/* PMU_PD_CPU_TOP_SYSPLL0_BOND : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: 1:syspll0 can be off only after cpu_top power down ; 0:syspll0 can be off even t
hough cpu_top is power on.*/
#define PMU_PD_CPU_TOP_SYSPLL0_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_SYSPLL0_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_SYSPLL0_BOND_V  0x1
#define PMU_PD_CPU_TOP_SYSPLL0_BOND_S  2
/* PMU_PD_CPU_CORE0_SYSPLL0_BOND : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1:syspll0 can be off only after cpu_core0 power down ; 0:syspll0 can be off even
 though cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_SYSPLL0_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_SYSPLL0_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_SYSPLL0_BOND_V  0x1
#define PMU_PD_CPU_CORE0_SYSPLL0_BOND_S  1
/* PMU_PD_CPU_CORE1_SYSPLL0_BOND : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:syspll0 can be off only after cpu_core1 power down ; 0:syspll0 can be off even
 though cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_SYSPLL0_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_SYSPLL0_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_SYSPLL0_BOND_V  0x1
#define PMU_PD_CPU_CORE1_SYSPLL0_BOND_S  0

#define PMU_SYSPLL1_CTRL_REG          (DR_REG_PMU_BASE + 0x40)
/* PMU_SYSPLL1_SW_PD : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_syspll1_pd_sw_ctrl = 1, software can directly control syspll1 by this b
it.*/
#define PMU_SYSPLL1_SW_PD    (BIT(1))
#define PMU_SYSPLL1_SW_PD_M  (BIT(1))
#define PMU_SYSPLL1_SW_PD_V  0x1
#define PMU_SYSPLL1_SW_PD_S  1
/* PMU_SYSPLL1_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_SYSPLL1_PD_SW_CTRL    (BIT(0))
#define PMU_SYSPLL1_PD_SW_CTRL_M  (BIT(0))
#define PMU_SYSPLL1_PD_SW_CTRL_V  0x1
#define PMU_SYSPLL1_PD_SW_CTRL_S  0

#define PMU_SYSPLL1_CFG_REG          (DR_REG_PMU_BASE + 0x44)
/* PMU_SYSPLL1_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_SYSPLL1_COOLDOWN_TIME    0x000000FF
#define PMU_SYSPLL1_COOLDOWN_TIME_M  ((PMU_SYSPLL1_COOLDOWN_TIME_V)<<(PMU_SYSPLL1_COOLDOWN_TIME_S))
#define PMU_SYSPLL1_COOLDOWN_TIME_V  0xFF
#define PMU_SYSPLL1_COOLDOWN_TIME_S  8
/* PMU_SYSPLL1_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_SYSPLL1_STABLE_TIME    0x000000FF
#define PMU_SYSPLL1_STABLE_TIME_M  ((PMU_SYSPLL1_STABLE_TIME_V)<<(PMU_SYSPLL1_STABLE_TIME_S))
#define PMU_SYSPLL1_STABLE_TIME_V  0xFF
#define PMU_SYSPLL1_STABLE_TIME_S  0

#define PMU_SYSPLL1_STS_REG          (DR_REG_PMU_BASE + 0x48)
/* PMU_SYSPLL1_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: syspll1 fsm state for debug.*/
#define PMU_SYSPLL1_STATE    0x00000007
#define PMU_SYSPLL1_STATE_M  ((PMU_SYSPLL1_STATE_V)<<(PMU_SYSPLL1_STATE_S))
#define PMU_SYSPLL1_STATE_V  0x7
#define PMU_SYSPLL1_STATE_S  1
/* PMU_SYSPLL1_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: syspll1 is ready to work.*/
#define PMU_SYSPLL1_READY    (BIT(0))
#define PMU_SYSPLL1_READY_M  (BIT(0))
#define PMU_SYSPLL1_READY_V  0x1
#define PMU_SYSPLL1_READY_S  0

#define PMU_SYSPLL1_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0x4C)
/* PMU_PD_CPU_TOP_SYSPLL1_BOND : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: 1:syspll1 can be off only after cpu_top power down ; 0:syspll1 can be off even t
hough cpu_top is power on.*/
#define PMU_PD_CPU_TOP_SYSPLL1_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_SYSPLL1_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_SYSPLL1_BOND_V  0x1
#define PMU_PD_CPU_TOP_SYSPLL1_BOND_S  2
/* PMU_PD_CPU_CORE0_SYSPLL1_BOND : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1:syspll1 can be off only after cpu_core0 power down ; 0:syspll1 can be off even
 though cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_SYSPLL1_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_SYSPLL1_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_SYSPLL1_BOND_V  0x1
#define PMU_PD_CPU_CORE0_SYSPLL1_BOND_S  1
/* PMU_PD_CPU_CORE1_SYSPLL1_BOND : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:syspll1 can be off only after cpu_core1 power down ; 0:syspll1 can be off even
 though cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_SYSPLL1_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_SYSPLL1_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_SYSPLL1_BOND_V  0x1
#define PMU_PD_CPU_CORE1_SYSPLL1_BOND_S  0

#define PMU_SYSPLL2_CTRL_REG          (DR_REG_PMU_BASE + 0x50)
/* PMU_SYSPLL2_SW_PD : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_syspll2_pd_sw_ctrl = 1, software can directly control syspll2 by this b
it.*/
#define PMU_SYSPLL2_SW_PD    (BIT(1))
#define PMU_SYSPLL2_SW_PD_M  (BIT(1))
#define PMU_SYSPLL2_SW_PD_V  0x1
#define PMU_SYSPLL2_SW_PD_S  1
/* PMU_SYSPLL2_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_SYSPLL2_PD_SW_CTRL    (BIT(0))
#define PMU_SYSPLL2_PD_SW_CTRL_M  (BIT(0))
#define PMU_SYSPLL2_PD_SW_CTRL_V  0x1
#define PMU_SYSPLL2_PD_SW_CTRL_S  0

#define PMU_SYSPLL2_CFG_REG          (DR_REG_PMU_BASE + 0x54)
/* PMU_SYSPLL2_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_SYSPLL2_COOLDOWN_TIME    0x000000FF
#define PMU_SYSPLL2_COOLDOWN_TIME_M  ((PMU_SYSPLL2_COOLDOWN_TIME_V)<<(PMU_SYSPLL2_COOLDOWN_TIME_S))
#define PMU_SYSPLL2_COOLDOWN_TIME_V  0xFF
#define PMU_SYSPLL2_COOLDOWN_TIME_S  8
/* PMU_SYSPLL2_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_SYSPLL2_STABLE_TIME    0x000000FF
#define PMU_SYSPLL2_STABLE_TIME_M  ((PMU_SYSPLL2_STABLE_TIME_V)<<(PMU_SYSPLL2_STABLE_TIME_S))
#define PMU_SYSPLL2_STABLE_TIME_V  0xFF
#define PMU_SYSPLL2_STABLE_TIME_S  0

#define PMU_SYSPLL2_STS_REG          (DR_REG_PMU_BASE + 0x58)
/* PMU_SYSPLL2_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: syspll2 fsm state for debug.*/
#define PMU_SYSPLL2_STATE    0x00000007
#define PMU_SYSPLL2_STATE_M  ((PMU_SYSPLL2_STATE_V)<<(PMU_SYSPLL2_STATE_S))
#define PMU_SYSPLL2_STATE_V  0x7
#define PMU_SYSPLL2_STATE_S  1
/* PMU_SYSPLL2_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: syspll2 is ready to work.*/
#define PMU_SYSPLL2_READY    (BIT(0))
#define PMU_SYSPLL2_READY_M  (BIT(0))
#define PMU_SYSPLL2_READY_V  0x1
#define PMU_SYSPLL2_READY_S  0

#define PMU_SYSPLL2_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0x5C)
/* PMU_PD_CPU_TOP_SYSPLL2_BOND : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: 1:syspll2 can be off only after cpu_top power down ; 0:syspll2 can be off even t
hough cpu_top is power on.*/
#define PMU_PD_CPU_TOP_SYSPLL2_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_SYSPLL2_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_SYSPLL2_BOND_V  0x1
#define PMU_PD_CPU_TOP_SYSPLL2_BOND_S  2
/* PMU_PD_CPU_CORE0_SYSPLL2_BOND : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1:syspll2 can be off only after cpu_core0 power down ; 0:syspll2 can be off even
 though cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_SYSPLL2_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_SYSPLL2_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_SYSPLL2_BOND_V  0x1
#define PMU_PD_CPU_CORE0_SYSPLL2_BOND_S  1
/* PMU_PD_CPU_CORE1_SYSPLL2_BOND : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:syspll2 can be off only after cpu_core1 power down ; 0:syspll2 can be off even
 though cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_SYSPLL2_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_SYSPLL2_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_SYSPLL2_BOND_V  0x1
#define PMU_PD_CPU_CORE1_SYSPLL2_BOND_S  0

#define PMU_PERIPLL_CTRL_REG          (DR_REG_PMU_BASE + 0x60)
/* PMU_PERIPLL_SW_PD : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: when reg_peripll_pd_sw_ctrl = 1, software can directly control peripll by this b
it.*/
#define PMU_PERIPLL_SW_PD    (BIT(1))
#define PMU_PERIPLL_SW_PD_M  (BIT(1))
#define PMU_PERIPLL_SW_PD_V  0x1
#define PMU_PERIPLL_SW_PD_S  1
/* PMU_PERIPLL_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_PERIPLL_PD_SW_CTRL    (BIT(0))
#define PMU_PERIPLL_PD_SW_CTRL_M  (BIT(0))
#define PMU_PERIPLL_PD_SW_CTRL_V  0x1
#define PMU_PERIPLL_PD_SW_CTRL_S  0

#define PMU_PERIPLL_CFG_REG          (DR_REG_PMU_BASE + 0x64)
/* PMU_PERIPLL_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_PERIPLL_COOLDOWN_TIME    0x000000FF
#define PMU_PERIPLL_COOLDOWN_TIME_M  ((PMU_PERIPLL_COOLDOWN_TIME_V)<<(PMU_PERIPLL_COOLDOWN_TIME_S))
#define PMU_PERIPLL_COOLDOWN_TIME_V  0xFF
#define PMU_PERIPLL_COOLDOWN_TIME_S  8
/* PMU_PERIPLL_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_PERIPLL_STABLE_TIME    0x000000FF
#define PMU_PERIPLL_STABLE_TIME_M  ((PMU_PERIPLL_STABLE_TIME_V)<<(PMU_PERIPLL_STABLE_TIME_S))
#define PMU_PERIPLL_STABLE_TIME_V  0xFF
#define PMU_PERIPLL_STABLE_TIME_S  0

#define PMU_PERIPLL_STS_REG          (DR_REG_PMU_BASE + 0x68)
/* PMU_PERIPLL_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: peripll fsm state for debug.*/
#define PMU_PERIPLL_STATE    0x00000007
#define PMU_PERIPLL_STATE_M  ((PMU_PERIPLL_STATE_V)<<(PMU_PERIPLL_STATE_S))
#define PMU_PERIPLL_STATE_V  0x7
#define PMU_PERIPLL_STATE_S  1
/* PMU_PERIPLL_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: peripll is ready to work.*/
#define PMU_PERIPLL_READY    (BIT(0))
#define PMU_PERIPLL_READY_M  (BIT(0))
#define PMU_PERIPLL_READY_V  0x1
#define PMU_PERIPLL_READY_S  0

#define PMU_PERIPLL_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0x6C)
/* PMU_PD_CPU_TOP_PERIPLL_BOND : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: 1:peripll can be off only after cpu_top power down ; 0:peripll can be off even t
hough cpu_top is power on.*/
#define PMU_PD_CPU_TOP_PERIPLL_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_PERIPLL_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_PERIPLL_BOND_V  0x1
#define PMU_PD_CPU_TOP_PERIPLL_BOND_S  2
/* PMU_PD_CPU_CORE0_PERIPLL_BOND : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: 1:peripll can be off only after cpu_core0 power down ; 0:peripll can be off even
 though cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_PERIPLL_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_PERIPLL_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_PERIPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE0_PERIPLL_BOND_S  1
/* PMU_PD_CPU_CORE1_PERIPLL_BOND : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: 1:peripll can be off only after cpu_core1 power down ; 0:peripll can be off even
 though cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_PERIPLL_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_PERIPLL_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_PERIPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE1_PERIPLL_BOND_S  0

#define PMU_MPLL_CTRL_REG          (DR_REG_PMU_BASE + 0x70)
/* PMU_MPLL_SW_PD : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: when reg_mpll_pd_sw_ctrl = 1, software can directly control mpll by this bit.*/
#define PMU_MPLL_SW_PD    (BIT(1))
#define PMU_MPLL_SW_PD_M  (BIT(1))
#define PMU_MPLL_SW_PD_V  0x1
#define PMU_MPLL_SW_PD_S  1
/* PMU_MPLL_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_MPLL_PD_SW_CTRL    (BIT(0))
#define PMU_MPLL_PD_SW_CTRL_M  (BIT(0))
#define PMU_MPLL_PD_SW_CTRL_V  0x1
#define PMU_MPLL_PD_SW_CTRL_S  0

#define PMU_MPLL_CFG_REG          (DR_REG_PMU_BASE + 0x74)
/* PMU_MPLL_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_MPLL_COOLDOWN_TIME    0x000000FF
#define PMU_MPLL_COOLDOWN_TIME_M  ((PMU_MPLL_COOLDOWN_TIME_V)<<(PMU_MPLL_COOLDOWN_TIME_S))
#define PMU_MPLL_COOLDOWN_TIME_V  0xFF
#define PMU_MPLL_COOLDOWN_TIME_S  8
/* PMU_MPLL_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_MPLL_STABLE_TIME    0x000000FF
#define PMU_MPLL_STABLE_TIME_M  ((PMU_MPLL_STABLE_TIME_V)<<(PMU_MPLL_STABLE_TIME_S))
#define PMU_MPLL_STABLE_TIME_V  0xFF
#define PMU_MPLL_STABLE_TIME_S  0

#define PMU_MPLL_STS_REG          (DR_REG_PMU_BASE + 0x78)
/* PMU_MPLL_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: mpll fsm state for debug.*/
#define PMU_MPLL_STATE    0x00000007
#define PMU_MPLL_STATE_M  ((PMU_MPLL_STATE_V)<<(PMU_MPLL_STATE_S))
#define PMU_MPLL_STATE_V  0x7
#define PMU_MPLL_STATE_S  1
/* PMU_MPLL_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: mpll is ready to work.*/
#define PMU_MPLL_READY    (BIT(0))
#define PMU_MPLL_READY_M  (BIT(0))
#define PMU_MPLL_READY_V  0x1
#define PMU_MPLL_READY_S  0

#define PMU_MPLL_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0x7C)
/* PMU_PD_CPU_TOP_MPLL_BOND : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: 1:mpll can be off only after cpu_top power down ; 0:mpll can be off even though
cpu_top is power on.*/
#define PMU_PD_CPU_TOP_MPLL_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_MPLL_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_MPLL_BOND_V  0x1
#define PMU_PD_CPU_TOP_MPLL_BOND_S  2
/* PMU_PD_CPU_CORE0_MPLL_BOND : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: 1:mpll can be off only after cpu_core0 power down ; 0:mpll can be off even thoug
h cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_MPLL_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_MPLL_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_MPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE0_MPLL_BOND_S  1
/* PMU_PD_CPU_CORE1_MPLL_BOND : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: 1:mpll can be off only after cpu_core1 power down ; 0:mpll can be off even thoug
h cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_MPLL_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_MPLL_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_MPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE1_MPLL_BOND_S  0

#define PMU_DDRPLL_CTRL_REG          (DR_REG_PMU_BASE + 0x80)
/* PMU_DDRPLL_SW_PD : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_ddrpll_pd_sw_ctrl = 1, software can directly control ddrpll by this bit.*/
#define PMU_DDRPLL_SW_PD    (BIT(1))
#define PMU_DDRPLL_SW_PD_M  (BIT(1))
#define PMU_DDRPLL_SW_PD_V  0x1
#define PMU_DDRPLL_SW_PD_S  1
/* PMU_DDRPLL_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_DDRPLL_PD_SW_CTRL    (BIT(0))
#define PMU_DDRPLL_PD_SW_CTRL_M  (BIT(0))
#define PMU_DDRPLL_PD_SW_CTRL_V  0x1
#define PMU_DDRPLL_PD_SW_CTRL_S  0

#define PMU_DDRPLL_CFG_REG          (DR_REG_PMU_BASE + 0x84)
/* PMU_DDRPLL_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_DDRPLL_COOLDOWN_TIME    0x000000FF
#define PMU_DDRPLL_COOLDOWN_TIME_M  ((PMU_DDRPLL_COOLDOWN_TIME_V)<<(PMU_DDRPLL_COOLDOWN_TIME_S))
#define PMU_DDRPLL_COOLDOWN_TIME_V  0xFF
#define PMU_DDRPLL_COOLDOWN_TIME_S  8
/* PMU_DDRPLL_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_DDRPLL_STABLE_TIME    0x000000FF
#define PMU_DDRPLL_STABLE_TIME_M  ((PMU_DDRPLL_STABLE_TIME_V)<<(PMU_DDRPLL_STABLE_TIME_S))
#define PMU_DDRPLL_STABLE_TIME_V  0xFF
#define PMU_DDRPLL_STABLE_TIME_S  0

#define PMU_DDRPLL_STS_REG          (DR_REG_PMU_BASE + 0x88)
/* PMU_DDRPLL_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: ddrpll fsm state for debug.*/
#define PMU_DDRPLL_STATE    0x00000007
#define PMU_DDRPLL_STATE_M  ((PMU_DDRPLL_STATE_V)<<(PMU_DDRPLL_STATE_S))
#define PMU_DDRPLL_STATE_V  0x7
#define PMU_DDRPLL_STATE_S  1
/* PMU_DDRPLL_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: ddrpll is ready to work.*/
#define PMU_DDRPLL_READY    (BIT(0))
#define PMU_DDRPLL_READY_M  (BIT(0))
#define PMU_DDRPLL_READY_V  0x1
#define PMU_DDRPLL_READY_S  0

#define PMU_DDRPLL_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0x8C)
/* PMU_PD_CPU_TOP_DDRPLL_BOND : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: 1:ddrpll can be off only after cpu_top power down ; 0:ddrpll can be off even tho
ugh cpu_top is power on.*/
#define PMU_PD_CPU_TOP_DDRPLL_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_DDRPLL_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_DDRPLL_BOND_V  0x1
#define PMU_PD_CPU_TOP_DDRPLL_BOND_S  2
/* PMU_PD_CPU_CORE0_DDRPLL_BOND : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1:ddrpll can be off only after cpu_core0 power down ; 0:ddrpll can be off even t
hough cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_DDRPLL_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_DDRPLL_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_DDRPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE0_DDRPLL_BOND_S  1
/* PMU_PD_CPU_CORE1_DDRPLL_BOND : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:ddrpll can be off only after cpu_core1 power down ; 0:ddrpll can be off even t
hough cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_DDRPLL_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_DDRPLL_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_DDRPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE1_DDRPLL_BOND_S  0

#define PMU_SDIOPLL_CTRL_REG          (DR_REG_PMU_BASE + 0x90)
/* PMU_SDIOPLL_SW_PD : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_sdiopll_pd_sw_ctrl = 1, software can directly control sdiopll by this b
it.*/
#define PMU_SDIOPLL_SW_PD    (BIT(1))
#define PMU_SDIOPLL_SW_PD_M  (BIT(1))
#define PMU_SDIOPLL_SW_PD_V  0x1
#define PMU_SDIOPLL_SW_PD_S  1
/* PMU_SDIOPLL_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_SDIOPLL_PD_SW_CTRL    (BIT(0))
#define PMU_SDIOPLL_PD_SW_CTRL_M  (BIT(0))
#define PMU_SDIOPLL_PD_SW_CTRL_V  0x1
#define PMU_SDIOPLL_PD_SW_CTRL_S  0

#define PMU_SDIOPLL_CFG_REG          (DR_REG_PMU_BASE + 0x94)
/* PMU_SDIOPLL_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_SDIOPLL_COOLDOWN_TIME    0x000000FF
#define PMU_SDIOPLL_COOLDOWN_TIME_M  ((PMU_SDIOPLL_COOLDOWN_TIME_V)<<(PMU_SDIOPLL_COOLDOWN_TIME_S))
#define PMU_SDIOPLL_COOLDOWN_TIME_V  0xFF
#define PMU_SDIOPLL_COOLDOWN_TIME_S  8
/* PMU_SDIOPLL_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_SDIOPLL_STABLE_TIME    0x000000FF
#define PMU_SDIOPLL_STABLE_TIME_M  ((PMU_SDIOPLL_STABLE_TIME_V)<<(PMU_SDIOPLL_STABLE_TIME_S))
#define PMU_SDIOPLL_STABLE_TIME_V  0xFF
#define PMU_SDIOPLL_STABLE_TIME_S  0

#define PMU_SDIOPLL_STS_REG          (DR_REG_PMU_BASE + 0x98)
/* PMU_SDIOPLL_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: sdiopll fsm state for debug.*/
#define PMU_SDIOPLL_STATE    0x00000007
#define PMU_SDIOPLL_STATE_M  ((PMU_SDIOPLL_STATE_V)<<(PMU_SDIOPLL_STATE_S))
#define PMU_SDIOPLL_STATE_V  0x7
#define PMU_SDIOPLL_STATE_S  1
/* PMU_SDIOPLL_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: sdiopll is ready to work.*/
#define PMU_SDIOPLL_READY    (BIT(0))
#define PMU_SDIOPLL_READY_M  (BIT(0))
#define PMU_SDIOPLL_READY_V  0x1
#define PMU_SDIOPLL_READY_S  0

#define PMU_SDIOPLL_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0x9C)
/* PMU_PD_CPU_TOP_SDIOPLL_BOND : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: 1:sdiopll can be off only after cpu_top power down ; 0:sdiopll can be off even t
hough cpu_top is power on.*/
#define PMU_PD_CPU_TOP_SDIOPLL_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_SDIOPLL_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_SDIOPLL_BOND_V  0x1
#define PMU_PD_CPU_TOP_SDIOPLL_BOND_S  2
/* PMU_PD_CPU_CORE0_SDIOPLL_BOND : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1:sdiopll can be off only after cpu_core0 power down ; 0:sdiopll can be off even
 though cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_SDIOPLL_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_SDIOPLL_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_SDIOPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE0_SDIOPLL_BOND_S  1
/* PMU_PD_CPU_CORE1_SDIOPLL_BOND : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:sdiopll can be off only after cpu_core1 power down ; 0:sdiopll can be off even
 though cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_SDIOPLL_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_SDIOPLL_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_SDIOPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE1_SDIOPLL_BOND_S  0

#define PMU_AUDIOPLL_CTRL_REG          (DR_REG_PMU_BASE + 0xA0)
/* PMU_AUDIOPLL_SW_PD : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: when reg_audiopll_pd_sw_ctrl = 1, software can directly control audiopll by this
 bit.*/
#define PMU_AUDIOPLL_SW_PD    (BIT(1))
#define PMU_AUDIOPLL_SW_PD_M  (BIT(1))
#define PMU_AUDIOPLL_SW_PD_V  0x1
#define PMU_AUDIOPLL_SW_PD_S  1
/* PMU_AUDIOPLL_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_AUDIOPLL_PD_SW_CTRL    (BIT(0))
#define PMU_AUDIOPLL_PD_SW_CTRL_M  (BIT(0))
#define PMU_AUDIOPLL_PD_SW_CTRL_V  0x1
#define PMU_AUDIOPLL_PD_SW_CTRL_S  0

#define PMU_AUDIOPLL_CFG_REG          (DR_REG_PMU_BASE + 0xA4)
/* PMU_AUDIOPLL_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_AUDIOPLL_COOLDOWN_TIME    0x000000FF
#define PMU_AUDIOPLL_COOLDOWN_TIME_M  ((PMU_AUDIOPLL_COOLDOWN_TIME_V)<<(PMU_AUDIOPLL_COOLDOWN_TIME_S))
#define PMU_AUDIOPLL_COOLDOWN_TIME_V  0xFF
#define PMU_AUDIOPLL_COOLDOWN_TIME_S  8
/* PMU_AUDIOPLL_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_AUDIOPLL_STABLE_TIME    0x000000FF
#define PMU_AUDIOPLL_STABLE_TIME_M  ((PMU_AUDIOPLL_STABLE_TIME_V)<<(PMU_AUDIOPLL_STABLE_TIME_S))
#define PMU_AUDIOPLL_STABLE_TIME_V  0xFF
#define PMU_AUDIOPLL_STABLE_TIME_S  0

#define PMU_AUDIOPLL_STS_REG          (DR_REG_PMU_BASE + 0xA8)
/* PMU_AUDIOPLL_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: audiopll fsm state for debug.*/
#define PMU_AUDIOPLL_STATE    0x00000007
#define PMU_AUDIOPLL_STATE_M  ((PMU_AUDIOPLL_STATE_V)<<(PMU_AUDIOPLL_STATE_S))
#define PMU_AUDIOPLL_STATE_V  0x7
#define PMU_AUDIOPLL_STATE_S  1
/* PMU_AUDIOPLL_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: audiopll is ready to work.*/
#define PMU_AUDIOPLL_READY    (BIT(0))
#define PMU_AUDIOPLL_READY_M  (BIT(0))
#define PMU_AUDIOPLL_READY_V  0x1
#define PMU_AUDIOPLL_READY_S  0

#define PMU_AUDIOPLL_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0xAC)
/* PMU_PD_CPU_TOP_AUDIOPLL_BOND : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: 1:audiopll can be off only after cpu_top power down ; 0:audiopll can be off even
 though cpu_top is power on.*/
#define PMU_PD_CPU_TOP_AUDIOPLL_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_AUDIOPLL_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_AUDIOPLL_BOND_V  0x1
#define PMU_PD_CPU_TOP_AUDIOPLL_BOND_S  2
/* PMU_PD_CPU_CORE0_AUDIOPLL_BOND : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: 1:audiopll can be off only after cpu_core0 power down ; 0:audiopll can be off ev
en though cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_AUDIOPLL_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_AUDIOPLL_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_AUDIOPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE0_AUDIOPLL_BOND_S  1
/* PMU_PD_CPU_CORE1_AUDIOPLL_BOND : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: 1:audiopll can be off only after cpu_core1 power down ; 0:audiopll can be off ev
en though cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_AUDIOPLL_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_AUDIOPLL_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_AUDIOPLL_BOND_V  0x1
#define PMU_PD_CPU_CORE1_AUDIOPLL_BOND_S  0

#define PMU_DCDC_CPU_CTRL_REG          (DR_REG_PMU_BASE + 0xB0)
/* PMU_DCDC_CPU_SW_PD : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_dcdc_cpu_pd_sw_ctrl = 1, software can directly control dcdc_cpu by this
 bit.*/
#define PMU_DCDC_CPU_SW_PD    (BIT(1))
#define PMU_DCDC_CPU_SW_PD_M  (BIT(1))
#define PMU_DCDC_CPU_SW_PD_V  0x1
#define PMU_DCDC_CPU_SW_PD_S  1
/* PMU_DCDC_CPU_PD_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_DCDC_CPU_PD_SW_CTRL    (BIT(0))
#define PMU_DCDC_CPU_PD_SW_CTRL_M  (BIT(0))
#define PMU_DCDC_CPU_PD_SW_CTRL_V  0x1
#define PMU_DCDC_CPU_PD_SW_CTRL_S  0

#define PMU_DCDC_CPU_CFG_REG          (DR_REG_PMU_BASE + 0xB4)
/* PMU_DCDC_CPU_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h1e ; */
/*description: time for analog circuit stabilize.*/
#define PMU_DCDC_CPU_STABLE_TIME    0x000000FF
#define PMU_DCDC_CPU_STABLE_TIME_M  ((PMU_DCDC_CPU_STABLE_TIME_V)<<(PMU_DCDC_CPU_STABLE_TIME_S))
#define PMU_DCDC_CPU_STABLE_TIME_V  0xFF
#define PMU_DCDC_CPU_STABLE_TIME_S  0

#define PMU_DCDC_CPU_STS_REG          (DR_REG_PMU_BASE + 0xB8)
/* PMU_DCDC_CPU_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: dcdc_cpu fsm state for debug.*/
#define PMU_DCDC_CPU_STATE    0x00000007
#define PMU_DCDC_CPU_STATE_M  ((PMU_DCDC_CPU_STATE_V)<<(PMU_DCDC_CPU_STATE_S))
#define PMU_DCDC_CPU_STATE_V  0x7
#define PMU_DCDC_CPU_STATE_S  1
/* PMU_DCDC_CPU_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: dcdc_cpu is ready to work.*/
#define PMU_DCDC_CPU_READY    (BIT(0))
#define PMU_DCDC_CPU_READY_M  (BIT(0))
#define PMU_DCDC_CPU_READY_V  0x1
#define PMU_DCDC_CPU_READY_S  0

#define PMU_DCDC_CPU_BONDING_OPT_REG          (DR_REG_PMU_BASE + 0xBC)
/* PMU_PD_CPU_TOP_DCDC_CPU_BOND : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: 1:dcdc_cpu can be off only after cpu_top power down ; 0:dcdc_cpu can be off even
 though cpu_top is power on.*/
#define PMU_PD_CPU_TOP_DCDC_CPU_BOND    (BIT(2))
#define PMU_PD_CPU_TOP_DCDC_CPU_BOND_M  (BIT(2))
#define PMU_PD_CPU_TOP_DCDC_CPU_BOND_V  0x1
#define PMU_PD_CPU_TOP_DCDC_CPU_BOND_S  2
/* PMU_PD_CPU_CORE0_DCDC_CPU_BOND : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1:dcdc_cpu can be off only after cpu_core0 power down ; 0:dcdc_cpu can be off ev
en though cpu_core0 is power on.*/
#define PMU_PD_CPU_CORE0_DCDC_CPU_BOND    (BIT(1))
#define PMU_PD_CPU_CORE0_DCDC_CPU_BOND_M  (BIT(1))
#define PMU_PD_CPU_CORE0_DCDC_CPU_BOND_V  0x1
#define PMU_PD_CPU_CORE0_DCDC_CPU_BOND_S  1
/* PMU_PD_CPU_CORE1_DCDC_CPU_BOND : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:dcdc_cpu can be off only after cpu_core1 power down ; 0:dcdc_cpu can be off ev
en though cpu_core1 is power on.*/
#define PMU_PD_CPU_CORE1_DCDC_CPU_BOND    (BIT(0))
#define PMU_PD_CPU_CORE1_DCDC_CPU_BOND_M  (BIT(0))
#define PMU_PD_CPU_CORE1_DCDC_CPU_BOND_V  0x1
#define PMU_PD_CPU_CORE1_DCDC_CPU_BOND_S  0

#define PMU_PD_CPU_TOP_CTRL_REG          (DR_REG_PMU_BASE + 0xC0)
/* PMU_PD_CPU_TOP_MEM_SW_PD : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: when reg_pd_cpu_top_mem_sw_ctrl= 1, software can directly control sram in pd_cpu
_top enter shutdown/retention mode by this bit.*/
#define PMU_PD_CPU_TOP_MEM_SW_PD    (BIT(4))
#define PMU_PD_CPU_TOP_MEM_SW_PD_M  (BIT(4))
#define PMU_PD_CPU_TOP_MEM_SW_PD_V  0x1
#define PMU_PD_CPU_TOP_MEM_SW_PD_S  4
/* PMU_PD_CPU_TOP_MEM_SW_CTRL : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: 1:software directly control sram  ; 0:pmu auto control sram.*/
#define PMU_PD_CPU_TOP_MEM_SW_CTRL    (BIT(3))
#define PMU_PD_CPU_TOP_MEM_SW_CTRL_M  (BIT(3))
#define PMU_PD_CPU_TOP_MEM_SW_CTRL_V  0x1
#define PMU_PD_CPU_TOP_MEM_SW_CTRL_S  3
/* PMU_PD_CPU_TOP_MEM_RET_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: 1:sram in pd_cpu_top will enter retention mode when pd_cpu_top power down or sw_
pd; 0:sram in pd_cpu_top will enter shutdown mode when pd_cpu_top power down or
sw_pd.*/
#define PMU_PD_CPU_TOP_MEM_RET_EN    (BIT(2))
#define PMU_PD_CPU_TOP_MEM_RET_EN_M  (BIT(2))
#define PMU_PD_CPU_TOP_MEM_RET_EN_V  0x1
#define PMU_PD_CPU_TOP_MEM_RET_EN_S  2
/* PMU_PD_CPU_TOP_SW_DEEP_SLEEP : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_pd_cpu_top_sw_ctrl = 1, software can directly control pd_cpu_top by thi
s bit.*/
#define PMU_PD_CPU_TOP_SW_DEEP_SLEEP    (BIT(1))
#define PMU_PD_CPU_TOP_SW_DEEP_SLEEP_M  (BIT(1))
#define PMU_PD_CPU_TOP_SW_DEEP_SLEEP_V  0x1
#define PMU_PD_CPU_TOP_SW_DEEP_SLEEP_S  1
/* PMU_PD_CPU_TOP_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_PD_CPU_TOP_SW_CTRL    (BIT(0))
#define PMU_PD_CPU_TOP_SW_CTRL_M  (BIT(0))
#define PMU_PD_CPU_TOP_SW_CTRL_V  0x1
#define PMU_PD_CPU_TOP_SW_CTRL_S  0

#define PMU_PD_CPU_TOP_CFG_REG          (DR_REG_PMU_BASE + 0xC4)
/* PMU_PD_CPU_TOP_MEM_ON_DELAY : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: time to wait sram stabilize.*/
#define PMU_PD_CPU_TOP_MEM_ON_DELAY    0x000000FF
#define PMU_PD_CPU_TOP_MEM_ON_DELAY_M  ((PMU_PD_CPU_TOP_MEM_ON_DELAY_V)<<(PMU_PD_CPU_TOP_MEM_ON_DELAY_S))
#define PMU_PD_CPU_TOP_MEM_ON_DELAY_V  0xFF
#define PMU_PD_CPU_TOP_MEM_ON_DELAY_S  8
/* PMU_PD_CPU_TOP_PSW_ON_DELAY : R/W ;bitpos:[7:0] ;default: 8'h19 ; */
/*description: time to wait power switch stabilize.*/
#define PMU_PD_CPU_TOP_PSW_ON_DELAY    0x000000FF
#define PMU_PD_CPU_TOP_PSW_ON_DELAY_M  ((PMU_PD_CPU_TOP_PSW_ON_DELAY_V)<<(PMU_PD_CPU_TOP_PSW_ON_DELAY_S))
#define PMU_PD_CPU_TOP_PSW_ON_DELAY_V  0xFF
#define PMU_PD_CPU_TOP_PSW_ON_DELAY_S  0

#define PMU_PD_CPU_TOP_STS_REG          (DR_REG_PMU_BASE + 0xC8)
/* PMU_PD_CPU_TOP_STATE : RO ;bitpos:[5:2] ;default: 4'h0 ; */
/*description: pd_cpu_top fsm state for debug.*/
#define PMU_PD_CPU_TOP_STATE    0x0000000F
#define PMU_PD_CPU_TOP_STATE_M  ((PMU_PD_CPU_TOP_STATE_V)<<(PMU_PD_CPU_TOP_STATE_S))
#define PMU_PD_CPU_TOP_STATE_V  0xF
#define PMU_PD_CPU_TOP_STATE_S  2
/* PMU_PD_CPU_TOP_POWER_ON : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: pd_cpu_top is aready power on.*/
#define PMU_PD_CPU_TOP_POWER_ON    (BIT(1))
#define PMU_PD_CPU_TOP_POWER_ON_M  (BIT(1))
#define PMU_PD_CPU_TOP_POWER_ON_V  0x1
#define PMU_PD_CPU_TOP_POWER_ON_S  1
/* PMU_PD_CPU_TOP_POWER_OFF : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: pd_cpu_top is aready power off.*/
#define PMU_PD_CPU_TOP_POWER_OFF    (BIT(0))
#define PMU_PD_CPU_TOP_POWER_OFF_M  (BIT(0))
#define PMU_PD_CPU_TOP_POWER_OFF_V  0x1
#define PMU_PD_CPU_TOP_POWER_OFF_S  0

#define PMU_PD_CPU_CORE0_CTRL_REG          (DR_REG_PMU_BASE + 0xD0)
/* PMU_PD_CPU_CORE0_MEM_SW_PD : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: when reg_pd_cpu_core0_mem_sw_ctrl= 1, software can directly control sram in pd_c
pu_core0 enter shutdown/retention mode by this bit.*/
#define PMU_PD_CPU_CORE0_MEM_SW_PD    (BIT(4))
#define PMU_PD_CPU_CORE0_MEM_SW_PD_M  (BIT(4))
#define PMU_PD_CPU_CORE0_MEM_SW_PD_V  0x1
#define PMU_PD_CPU_CORE0_MEM_SW_PD_S  4
/* PMU_PD_CPU_CORE0_MEM_SW_CTRL : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: 1:software directly control sram  ; 0:pmu auto control sram.*/
#define PMU_PD_CPU_CORE0_MEM_SW_CTRL    (BIT(3))
#define PMU_PD_CPU_CORE0_MEM_SW_CTRL_M  (BIT(3))
#define PMU_PD_CPU_CORE0_MEM_SW_CTRL_V  0x1
#define PMU_PD_CPU_CORE0_MEM_SW_CTRL_S  3
/* PMU_PD_CPU_CORE0_MEM_RET_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: 1:sram in pd_cpu_core0 will enter retention mode when pd_cpu_core0 power down or
 sw_pd; 0:sram in pd_cpu_core0 will enter shutdown mode when pd_cpu_core0 power
down or sw_pd.*/
#define PMU_PD_CPU_CORE0_MEM_RET_EN    (BIT(2))
#define PMU_PD_CPU_CORE0_MEM_RET_EN_M  (BIT(2))
#define PMU_PD_CPU_CORE0_MEM_RET_EN_V  0x1
#define PMU_PD_CPU_CORE0_MEM_RET_EN_S  2
/* PMU_PD_CPU_CORE0_SW_DEEP_SLEEP : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: when reg_pd_cpu_core0_sw_ctrl = 1, software can directly control pd_cpu_core0 by
 this bit.*/
#define PMU_PD_CPU_CORE0_SW_DEEP_SLEEP    (BIT(1))
#define PMU_PD_CPU_CORE0_SW_DEEP_SLEEP_M  (BIT(1))
#define PMU_PD_CPU_CORE0_SW_DEEP_SLEEP_V  0x1
#define PMU_PD_CPU_CORE0_SW_DEEP_SLEEP_S  1
/* PMU_PD_CPU_CORE0_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_PD_CPU_CORE0_SW_CTRL    (BIT(0))
#define PMU_PD_CPU_CORE0_SW_CTRL_M  (BIT(0))
#define PMU_PD_CPU_CORE0_SW_CTRL_V  0x1
#define PMU_PD_CPU_CORE0_SW_CTRL_S  0

#define PMU_PD_CPU_CORE0_CFG_REG          (DR_REG_PMU_BASE + 0xD4)
/* PMU_PD_CPU_CORE0_MEM_ON_DELAY : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: time to wait sram stabilize.*/
#define PMU_PD_CPU_CORE0_MEM_ON_DELAY    0x000000FF
#define PMU_PD_CPU_CORE0_MEM_ON_DELAY_M  ((PMU_PD_CPU_CORE0_MEM_ON_DELAY_V)<<(PMU_PD_CPU_CORE0_MEM_ON_DELAY_S))
#define PMU_PD_CPU_CORE0_MEM_ON_DELAY_V  0xFF
#define PMU_PD_CPU_CORE0_MEM_ON_DELAY_S  8
/* PMU_PD_CPU_CORE0_PSW_ON_DELAY : R/W ;bitpos:[7:0] ;default: 8'h19 ; */
/*description: time to wait power switch stabilize.*/
#define PMU_PD_CPU_CORE0_PSW_ON_DELAY    0x000000FF
#define PMU_PD_CPU_CORE0_PSW_ON_DELAY_M  ((PMU_PD_CPU_CORE0_PSW_ON_DELAY_V)<<(PMU_PD_CPU_CORE0_PSW_ON_DELAY_S))
#define PMU_PD_CPU_CORE0_PSW_ON_DELAY_V  0xFF
#define PMU_PD_CPU_CORE0_PSW_ON_DELAY_S  0

#define PMU_PD_CPU_CORE0_STS_REG          (DR_REG_PMU_BASE + 0xD8)
/* PMU_PD_CPU_CORE0_STATE : RO ;bitpos:[5:2] ;default: 4'h0 ; */
/*description: pd_cpu_core0 fsm state for debug.*/
#define PMU_PD_CPU_CORE0_STATE    0x0000000F
#define PMU_PD_CPU_CORE0_STATE_M  ((PMU_PD_CPU_CORE0_STATE_V)<<(PMU_PD_CPU_CORE0_STATE_S))
#define PMU_PD_CPU_CORE0_STATE_V  0xF
#define PMU_PD_CPU_CORE0_STATE_S  2
/* PMU_PD_CPU_CORE0_POWER_ON : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: pd_cpu_core0 is aready power on.*/
#define PMU_PD_CPU_CORE0_POWER_ON    (BIT(1))
#define PMU_PD_CPU_CORE0_POWER_ON_M  (BIT(1))
#define PMU_PD_CPU_CORE0_POWER_ON_V  0x1
#define PMU_PD_CPU_CORE0_POWER_ON_S  1
/* PMU_PD_CPU_CORE0_POWER_OFF : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: pd_cpu_core0 is aready power off.*/
#define PMU_PD_CPU_CORE0_POWER_OFF    (BIT(0))
#define PMU_PD_CPU_CORE0_POWER_OFF_M  (BIT(0))
#define PMU_PD_CPU_CORE0_POWER_OFF_V  0x1
#define PMU_PD_CPU_CORE0_POWER_OFF_S  0

#define PMU_PD_CPU_CORE1_CTRL_REG          (DR_REG_PMU_BASE + 0xE0)
/* PMU_PD_CPU_CORE1_MEM_SW_PD : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: when reg_pd_cpu_core1_mem_sw_ctrl= 1, software can directly control sram in pd_c
pu_core1 enter shutdown/retention mode by this bit.*/
#define PMU_PD_CPU_CORE1_MEM_SW_PD    (BIT(4))
#define PMU_PD_CPU_CORE1_MEM_SW_PD_M  (BIT(4))
#define PMU_PD_CPU_CORE1_MEM_SW_PD_V  0x1
#define PMU_PD_CPU_CORE1_MEM_SW_PD_S  4
/* PMU_PD_CPU_CORE1_MEM_SW_CTRL : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: 1:software directly control sram  ; 0:pmu auto control sram.*/
#define PMU_PD_CPU_CORE1_MEM_SW_CTRL    (BIT(3))
#define PMU_PD_CPU_CORE1_MEM_SW_CTRL_M  (BIT(3))
#define PMU_PD_CPU_CORE1_MEM_SW_CTRL_V  0x1
#define PMU_PD_CPU_CORE1_MEM_SW_CTRL_S  3
/* PMU_PD_CPU_CORE1_MEM_RET_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: 1:sram in pd_cpu_core1 will enter retention mode when pd_cpu_core1 power down or
 sw_pd; 0:sram in pd_cpu_core1 will enter shutdown mode when pd_cpu_core1 power
down or sw_pd.*/
#define PMU_PD_CPU_CORE1_MEM_RET_EN    (BIT(2))
#define PMU_PD_CPU_CORE1_MEM_RET_EN_M  (BIT(2))
#define PMU_PD_CPU_CORE1_MEM_RET_EN_V  0x1
#define PMU_PD_CPU_CORE1_MEM_RET_EN_S  2
/* PMU_PD_CPU_CORE1_SW_DEEP_SLEEP : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: when reg_pd_cpu_core1_sw_ctrl = 1, software can directly control pd_cpu_core1 by
 this bit.*/
#define PMU_PD_CPU_CORE1_SW_DEEP_SLEEP    (BIT(1))
#define PMU_PD_CPU_CORE1_SW_DEEP_SLEEP_M  (BIT(1))
#define PMU_PD_CPU_CORE1_SW_DEEP_SLEEP_V  0x1
#define PMU_PD_CPU_CORE1_SW_DEEP_SLEEP_S  1
/* PMU_PD_CPU_CORE1_SW_CTRL : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1:software directly control ; 0:pmu auto control.*/
#define PMU_PD_CPU_CORE1_SW_CTRL    (BIT(0))
#define PMU_PD_CPU_CORE1_SW_CTRL_M  (BIT(0))
#define PMU_PD_CPU_CORE1_SW_CTRL_V  0x1
#define PMU_PD_CPU_CORE1_SW_CTRL_S  0

#define PMU_PD_CPU_CORE1_CFG_REG          (DR_REG_PMU_BASE + 0xE4)
/* PMU_PD_CPU_CORE1_MEM_ON_DELAY : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: time to wait sram stabilize.*/
#define PMU_PD_CPU_CORE1_MEM_ON_DELAY    0x000000FF
#define PMU_PD_CPU_CORE1_MEM_ON_DELAY_M  ((PMU_PD_CPU_CORE1_MEM_ON_DELAY_V)<<(PMU_PD_CPU_CORE1_MEM_ON_DELAY_S))
#define PMU_PD_CPU_CORE1_MEM_ON_DELAY_V  0xFF
#define PMU_PD_CPU_CORE1_MEM_ON_DELAY_S  8
/* PMU_PD_CPU_CORE1_PSW_ON_DELAY : R/W ;bitpos:[7:0] ;default: 8'h19 ; */
/*description: time to wait power switch stabilize.*/
#define PMU_PD_CPU_CORE1_PSW_ON_DELAY    0x000000FF
#define PMU_PD_CPU_CORE1_PSW_ON_DELAY_M  ((PMU_PD_CPU_CORE1_PSW_ON_DELAY_V)<<(PMU_PD_CPU_CORE1_PSW_ON_DELAY_S))
#define PMU_PD_CPU_CORE1_PSW_ON_DELAY_V  0xFF
#define PMU_PD_CPU_CORE1_PSW_ON_DELAY_S  0

#define PMU_PD_CPU_CORE1_STS_REG          (DR_REG_PMU_BASE + 0xE8)
/* PMU_PD_CPU_CORE1_STATE : RO ;bitpos:[5:2] ;default: 4'h0 ; */
/*description: pd_cpu_core1 fsm state for debug.*/
#define PMU_PD_CPU_CORE1_STATE    0x0000000F
#define PMU_PD_CPU_CORE1_STATE_M  ((PMU_PD_CPU_CORE1_STATE_V)<<(PMU_PD_CPU_CORE1_STATE_S))
#define PMU_PD_CPU_CORE1_STATE_V  0xF
#define PMU_PD_CPU_CORE1_STATE_S  2
/* PMU_PD_CPU_CORE1_POWER_ON : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: pd_cpu_core1 is aready power on.*/
#define PMU_PD_CPU_CORE1_POWER_ON    (BIT(1))
#define PMU_PD_CPU_CORE1_POWER_ON_M  (BIT(1))
#define PMU_PD_CPU_CORE1_POWER_ON_V  0x1
#define PMU_PD_CPU_CORE1_POWER_ON_S  1
/* PMU_PD_CPU_CORE1_POWER_OFF : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: pd_cpu_core1 is aready power off.*/
#define PMU_PD_CPU_CORE1_POWER_OFF    (BIT(0))
#define PMU_PD_CPU_CORE1_POWER_OFF_M  (BIT(0))
#define PMU_PD_CPU_CORE1_POWER_OFF_V  0x1
#define PMU_PD_CPU_CORE1_POWER_OFF_S  0

#define PMU_BIAS_CFG_REG          (DR_REG_PMU_BASE + 0xF0)
/* PMU_BIAS_ACTIVE_DTUNE : R/W ;bitpos:[27:22] ;default: 6'h28 ; */
/*description: voltage scale when chip active.*/
#define PMU_BIAS_ACTIVE_DTUNE    0x0000003F
#define PMU_BIAS_ACTIVE_DTUNE_M  ((PMU_BIAS_ACTIVE_DTUNE_V)<<(PMU_BIAS_ACTIVE_DTUNE_S))
#define PMU_BIAS_ACTIVE_DTUNE_V  0x3F
#define PMU_BIAS_ACTIVE_DTUNE_S  22
/* PMU_BIAS_IDLE_DTUNE : R/W ;bitpos:[21:16] ;default: 6'h28 ; */
/*description: voltage scale when chip sleep.*/
#define PMU_BIAS_IDLE_DTUNE    0x0000003F
#define PMU_BIAS_IDLE_DTUNE_M  ((PMU_BIAS_IDLE_DTUNE_V)<<(PMU_BIAS_IDLE_DTUNE_S))
#define PMU_BIAS_IDLE_DTUNE_V  0x3F
#define PMU_BIAS_IDLE_DTUNE_S  16
/* PMU_BIAS_COOLDOWN_TIME : R/W ;bitpos:[15:8] ;default: 8'h96 ; */
/*description: time between the last turning off and next turning on.*/
#define PMU_BIAS_COOLDOWN_TIME    0x000000FF
#define PMU_BIAS_COOLDOWN_TIME_M  ((PMU_BIAS_COOLDOWN_TIME_V)<<(PMU_BIAS_COOLDOWN_TIME_S))
#define PMU_BIAS_COOLDOWN_TIME_V  0xFF
#define PMU_BIAS_COOLDOWN_TIME_S  8
/* PMU_BIAS_STABLE_TIME : R/W ;bitpos:[7:0] ;default: 8'h96 ; */
/*description: time for analog circuit stabilize.*/
#define PMU_BIAS_STABLE_TIME    0x000000FF
#define PMU_BIAS_STABLE_TIME_M  ((PMU_BIAS_STABLE_TIME_V)<<(PMU_BIAS_STABLE_TIME_S))
#define PMU_BIAS_STABLE_TIME_V  0xFF
#define PMU_BIAS_STABLE_TIME_S  0

#define PMU_BIAS_STS_REG          (DR_REG_PMU_BASE + 0xF4)
/* PMU_BIAS_STATE : RO ;bitpos:[3:1] ;default: 3'h0 ; */
/*description: xtl fsm state for debug.*/
#define PMU_BIAS_STATE    0x00000007
#define PMU_BIAS_STATE_M  ((PMU_BIAS_STATE_V)<<(PMU_BIAS_STATE_S))
#define PMU_BIAS_STATE_V  0x7
#define PMU_BIAS_STATE_S  1
/* PMU_BIAS_READY : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: xtl is ready to work.*/
#define PMU_BIAS_READY    (BIT(0))
#define PMU_BIAS_READY_M  (BIT(0))
#define PMU_BIAS_READY_V  0x1
#define PMU_BIAS_READY_S  0

#define PMU_CLK_REG          (DR_REG_PMU_BASE + 0xF00)
/* PMU_CLK_EN : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: register.*/
#define PMU_CLK_EN    (BIT(31))
#define PMU_CLK_EN_M  (BIT(31))
#define PMU_CLK_EN_V  0x1
#define PMU_CLK_EN_S  31
/* PMU_DATE : R/W ;bitpos:[30:0] ;default: 31'h2410080 ; */
/*description: register.*/
#define PMU_DATE    0x7FFFFFFF
#define PMU_DATE_M  ((PMU_DATE_V)<<(PMU_DATE_S))
#define PMU_DATE_V  0x7FFFFFFF
#define PMU_DATE_S  0

#define PMU_PSW_DBG_REG          (DR_REG_PMU_BASE + 0xF04)
/* PMU_PD_CPU_CORE1_DBG_PSW_FRC_ON : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: dbg.*/
#define PMU_PD_CPU_CORE1_DBG_PSW_FRC_ON    (BIT(2))
#define PMU_PD_CPU_CORE1_DBG_PSW_FRC_ON_M  (BIT(2))
#define PMU_PD_CPU_CORE1_DBG_PSW_FRC_ON_V  0x1
#define PMU_PD_CPU_CORE1_DBG_PSW_FRC_ON_S  2
/* PMU_PD_CPU_CORE0_DBG_PSW_FRC_ON : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: dbg.*/
#define PMU_PD_CPU_CORE0_DBG_PSW_FRC_ON    (BIT(1))
#define PMU_PD_CPU_CORE0_DBG_PSW_FRC_ON_M  (BIT(1))
#define PMU_PD_CPU_CORE0_DBG_PSW_FRC_ON_V  0x1
#define PMU_PD_CPU_CORE0_DBG_PSW_FRC_ON_S  1
/* PMU_PD_CPU_TOP_DBG_PSW_FRC_ON : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: dbg.*/
#define PMU_PD_CPU_TOP_DBG_PSW_FRC_ON    (BIT(0))
#define PMU_PD_CPU_TOP_DBG_PSW_FRC_ON_M  (BIT(0))
#define PMU_PD_CPU_TOP_DBG_PSW_FRC_ON_V  0x1
#define PMU_PD_CPU_TOP_DBG_PSW_FRC_ON_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_PMU_REG_H_ */
