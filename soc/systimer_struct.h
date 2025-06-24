/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_SYSTIMER_STRUCT_H_
#define _SOC_SYSTIMER_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t clk_fo                        :    1;  /*systimer clock force on*/
            uint32_t etm_en                        :    1;  /*Configures whether or not to enable generation of ETM events.\\; 0: Disable\\; 1: Enable\\*/
            uint32_t reserved2                     :    20;  /*reserved*/
            uint32_t target2_work_en               :    1;  /*Configures whether or not to enable COMP2.\\; 0: Disable\\; 1: Enable\\;  */
            uint32_t target1_work_en               :    1;  /*Configures whether or not to enable COMP1. See details in SYSTIMER_TARGET2_WORK_EN. */
            uint32_t target0_work_en               :    1;  /*Configures whether or not to enable COMP0. See details in SYSTIMER_TARGET2_WORK_EN. */
            uint32_t unit1_core1_stall_en          :    1;  /*Configures whether or not UNIT1 is stalled when CORE1 is stalled. \\; 0: UNIT1 is not stalled. \\; 1: UNIT1 is stalled.\\*/
            uint32_t unit1_core0_stall_en          :    1;  /*Configures whether or not UNIT1 is stalled when CORE0 is stalled. See details in SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN. */
            uint32_t unit0_core1_stall_en          :    1;  /*Configures whether or not UNIT0 is stalled when CORE1 is stalled. See details in SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN. */
            uint32_t unit0_core0_stall_en          :    1;  /*Configures whether or not UNIT0 is stalled when CORE0 is stalled. See details in SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN. */
            uint32_t unit1_work_en                 :    1;  /*Configures whether or not to enable UNIT1. \\; 0: Disable\\; 1: Enable\\*/
            uint32_t unit0_work_en                 :    1;  /*Configures whether or not to enable UNIT0. \\; 0: Disable\\; 1: Enable\\*/
            uint32_t clk_en                        :    1;  /*Configures register clock gating. \\; 0: Only enable needed clock for register read or write operations. \\; 1: Register clock is always enabled for read and write operations. \\*/
        };
        uint32_t val;
    } conf;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t valid                         :    1;  /*Represents UNIT0 value is synchronized and valid. */
            uint32_t unit0_update                  :    1;  /*Configures whether or not to update timer UNIT0, i.e., reads the UNIT0 count value to SYSTIMER_TIMER_UNIT0_VALUE_HI and SYSTIMER_TIMER_UNIT0_VALUE_LO. \\; 0: No effect\\; 1: Update timer UNIT0 \\*/
            uint32_t reserved31                    :    1;  /*reserved*/
        };
        uint32_t val;
    } op_unit[2];
    struct {
        union {
            struct {
                uint32_t hi                            :    20;  /*Configures the value to be loaded to UNIT0, high 20 bits. */
                uint32_t reserved20                    :    12;  /*reserved*/
            };
            uint32_t val;
        } hi;
        uint32_t lo;
    } load_val_unit[2];
    struct {
        union {
            struct {
                uint32_t hi                            :    20;  /*Configures the alarm value to be loaded to COMP0, high 20 bits. */
                uint32_t reserved20                    :    12;  /*reserved*/
            };
            uint32_t val;
        } hi;
        uint32_t lo;
    } target[3];
    union {
        struct {
            uint32_t period                        :    26;  /*Configures COMP0 alarm period. */
            uint32_t reserved26                    :    4;  /*reserved*/
            uint32_t mode                          :    1;  /*Selects the two alarm modes for COMP0. \\; 0: Target mode\\; 1: Period mode\\*/
            uint32_t sel                           :    1;  /*Chooses the counter value for comparison with COMP0.\\; 0: Use the count value from UNIT$0\\; 1: Use the count value from UNIT$1\\*/
        };
        uint32_t val;
    } target_conf[3];
    struct {
        union {
            struct {
                uint32_t hi                            :    20;  /*Represents UNIT0 read value, high 20 bits. */
                uint32_t reserved20                    :    12;  /*reserved*/
            };
            uint32_t val;
        } hi;
        uint32_t lo;
    } value_unit[2];
    union {
        struct {
            uint32_t load                          :    1;  /*Configures whether or not to enable COMP0 synchronization, i.e., reload the alarm value/period to COMP0.\\; 0: No effect \\; 1: Enable COMP0 synchronization\\;  */
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } comp_load[3];
    union {
        struct {
            uint32_t unit0_load                    :    1;  /*Configures whether or not to reload the value of UNIT0, i.e., reloads the values of SYSTIMER_TIMER_UNIT0_VALUE_HI and SYSTIMER_TIMER_UNIT0_VALUE_LO to UNIT0. \\; 0: No effect \\; 1: Reload the value of UNIT0\\*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } load_unit[2];
    union {
        struct {
            uint32_t target0                       :    1;  /*Write 1 to enable SYSTIMER_TARGET0_INT. */
            uint32_t target1                       :    1;  /*Write 1 to enable SYSTIMER_TARGET1_INT. */
            uint32_t target2                       :    1;  /*Write 1 to enable SYSTIMER_TARGET2_INT. */
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t target0                       :    1;  /*The raw interrupt status of SYSTIMER_TARGET0_INT. */
            uint32_t target1                       :    1;  /*The raw interrupt status of SYSTIMER_TARGET1_INT. */
            uint32_t target2                       :    1;  /*The raw interrupt status of SYSTIMER_TARGET2_INT. */
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t target0                       :    1;  /*Write 1 to clear SYSTIMER_TARGET0_INT. */
            uint32_t target1                       :    1;  /*Write 1 to clear SYSTIMER_TARGET1_INT. */
            uint32_t target2                       :    1;  /*Write 1 to clear SYSTIMER_TARGET2_INT. */
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } int_clr;
    union {
        struct {
            uint32_t target0                       :    1;  /*The interrupt status of SYSTIMER_TARGET0_INT. */
            uint32_t target1                       :    1;  /*The interrupt status of SYSTIMER_TARGET1_INT. */
            uint32_t target2                       :    1;  /*The interrupt status of SYSTIMER_TARGET2_INT. */
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } int_st;
    struct {
        uint32_t lo;
        union {
            struct {
                uint32_t hi                            :    20;  /*Represents the actual target value of COMP0, high 20 bits. */
                uint32_t reserved20                    :    12;  /*reserved*/
            };
            uint32_t val;
        } hi;
    } real_target[3];
    uint32_t reserved_8c;
    uint32_t reserved_90;
    uint32_t reserved_94;
    uint32_t reserved_98;
    uint32_t reserved_9c;
    uint32_t reserved_a0;
    uint32_t reserved_a4;
    uint32_t reserved_a8;
    uint32_t reserved_ac;
    uint32_t reserved_b0;
    uint32_t reserved_b4;
    uint32_t reserved_b8;
    uint32_t reserved_bc;
    uint32_t reserved_c0;
    uint32_t reserved_c4;
    uint32_t reserved_c8;
    uint32_t reserved_cc;
    uint32_t reserved_d0;
    uint32_t reserved_d4;
    uint32_t reserved_d8;
    uint32_t reserved_dc;
    uint32_t reserved_e0;
    uint32_t reserved_e4;
    uint32_t reserved_e8;
    uint32_t reserved_ec;
    uint32_t reserved_f0;
    uint32_t reserved_f4;
    uint32_t reserved_f8;
    uint32_t date;
} systimer_dev_t;
extern systimer_dev_t SYSTIMER;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_SYSTIMER_STRUCT_H_ */
