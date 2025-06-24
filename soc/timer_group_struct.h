/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_TIMER_GROUP_STRUCT_H_
#define _SOC_TIMER_GROUP_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t reserved0                     :    9;  /*Reserved*/
            uint32_t use_xtal                      :    1;  /*1: Use XTAL_CLK as the source clock of timer group. 0: Use APB_CLK as the source clock of timer group.*/
            uint32_t alarm_en                      :    1;  /*When set, the alarm is enabled. This bit is automatically cleared once an; alarm occurs. */
            uint32_t reserved11                    :    1;
            uint32_t divcnt_rst                    :    1;  /*When set, Timer $x 's clock divider counter will be reset.*/
            uint32_t divider                       :    16;  /*Timer $x clock (T$x_clk) prescaler value.*/
            uint32_t autoreload                    :    1;  /*When set, timer $x auto-reload at alarm is enabled.*/
            uint32_t increase                      :    1;  /*When set, the timer $x time-base counter will increment every clock tick. When; cleared, the timer $x time-base counter will decrement. */
            uint32_t en                            :    1;  /*When set, the timer $x time-base counter is enabled.*/
        };
        uint32_t val;
    } config;
    uint32_t cnt_low;
    union {
        struct {
            uint32_t hi                            :    22;  /*After writing to TIMG_T$xUPDATE_REG, the high 22 bits of the time-base counter; of timer $x can be read here. */
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } cnt_high;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*Reserved*/
            uint32_t update                        :    1;  /*After writing 0 or 1 to TIMG_T$xUPDATE_REG, the counter value is latched.*/
        };
        uint32_t val;
    } update;
    uint32_t alarm_low;
    union {
        struct {
            uint32_t alarm_hi                      :    22;  /*Timer $x alarm trigger time-base counter value, high 22 bits.*/
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } alarm_high;
    uint32_t load_low;
    union {
        struct {
            uint32_t load_hi                       :    22;  /*High 22 bits of the value that a reload will load onto timer $x time-base; counter. */
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } load_high;
    uint32_t reload;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*Reserved*/
            uint32_t use_xtal                      :    1;  /*1: Use XTAL_CLK as the source clock of timer group. 0: Use APB_CLK as the source clock of timer group.*/
            uint32_t alarm_en                      :    1;  /*When set, the alarm is enabled. This bit is automatically cleared once an; alarm occurs. */
            uint32_t reserved11                    :    1;
            uint32_t divcnt_rst                    :    1;  /*When set, Timer $x 's clock divider counter will be reset.*/
            uint32_t divider                       :    16;  /*Timer $x clock (T$x_clk) prescaler value.*/
            uint32_t autoreload                    :    1;  /*When set, timer $x auto-reload at alarm is enabled.*/
            uint32_t increase                      :    1;  /*When set, the timer $x time-base counter will increment every clock tick. When; cleared, the timer $x time-base counter will decrement. */
            uint32_t en                            :    1;  /*When set, the timer $x time-base counter is enabled.*/
        };
        uint32_t val;
    } t1config;
    uint32_t t1lo;
    union {
        struct {
            uint32_t t1_hi                         :    22;  /*After writing to TIMG_T$xUPDATE_REG, the high 22 bits of the time-base counter; of timer $x can be read here. */
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } t1hi;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*Reserved*/
            uint32_t t1_update                     :    1;  /*After writing 0 or 1 to TIMG_T$xUPDATE_REG, the counter value is latched.*/
        };
        uint32_t val;
    } t1update;
    uint32_t t1alarm_low;
    union {
        struct {
            uint32_t alarm_hi                      :    22;  /*Timer $x alarm trigger time-base counter value, high 22 bits.*/
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } t1alarm_high;
    uint32_t t1loadlo;
    union {
        struct {
            uint32_t load_hi                       :    22;  /*High 22 bits of the value that a reload will load onto timer $x time-base; counter. */
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } t1loadhi;
    uint32_t t1load;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*Reserved*/
            uint32_t appcpu_reset_en               :    1;  /*WDT reset CPU enable.*/
            uint32_t procpu_reset_en               :    1;  /*WDT reset CPU enable.*/
            uint32_t flashboot_mod_en              :    1;  /*When set, Flash boot protection is enabled.*/
            uint32_t sys_reset_length              :    3;  /*System reset signal length selection. 0: 100 ns, 1: 200 ns,; 2: 300 ns, 3: 400 ns, 4: 500 ns, 5: 800 ns, 6: 1.6 us, 7: 3.2 us. */
            uint32_t cpu_reset_length              :    3;  /*CPU reset signal length selection. 0: 100 ns, 1: 200 ns,; 2: 300 ns, 3: 400 ns, 4: 500 ns, 5: 800 ns, 6: 1.6 us, 7: 3.2 us. */
            uint32_t use_xtal                      :    1;  /*choose WDT clock:0-apb_clk, 1-xtal_clk.*/
            uint32_t conf_update_en                :    1;  /*update the WDT configuration registers*/
            uint32_t stg3                          :    2;  /*Stage 3 configuration. 0: off, 1: interrupt, 2: reset CPU, 3: reset system.; */
            uint32_t stg2                          :    2;  /*Stage 2 configuration. 0: off, 1: interrupt, 2: reset CPU, 3: reset system.; */
            uint32_t stg1                          :    2;  /*Stage 1 configuration. 0: off, 1: interrupt, 2: reset CPU, 3: reset system.; */
            uint32_t stg0                          :    2;  /*Stage 0 configuration. 0: off, 1: interrupt, 2: reset CPU, 3: reset system.; */
            uint32_t en                            :    1;  /*When set, MWDT is enabled.*/
        };
        uint32_t val;
    } wdt_config0;
    union {
        struct {
            uint32_t divcnt_rst                    :    1;  /*When set, WDT 's clock divider counter will be reset.*/
            uint32_t reserved1                     :    15;  /*Reserved*/
            uint32_t clk_prescale                  :    16;  /*MWDT clock prescaler value. MWDT clock period = 12.5 ns *; TIMG_WDT_CLK_PRESCALE. */
        };
        uint32_t val;
    } wdt_config1;
    uint32_t wdt_config2;
    uint32_t wdt_config3;
    uint32_t wdt_config4;
    uint32_t wdt_config5;
    uint32_t wdt_feed;
    uint32_t wdt_wprotect;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*Reserved*/
            uint32_t start_cycling                 :    1;  /*0: one-shot frequency calculation,1: periodic frequency calculation,*/
            uint32_t clk_sel                       :    2;  /*0:rtc slow clock. 1:clk_8m, 2:xtal_32k.*/
            uint32_t rdy                           :    1;  /*indicate one-shot frequency calculation is done. */
            uint32_t max                           :    15;  /*Configure the time to calculate RTC slow clock's frequency.*/
            uint32_t start                         :    1;  /*Set this bit to start one-shot frequency calculation.*/
        };
        uint32_t val;
    } rtc_cali_cfg;
    union {
        struct {
            uint32_t cycling_data_vld              :    1;  /*indicate periodic frequency calculation is done. */
            uint32_t reserved1                     :    6;  /*Reserved*/
            uint32_t value                         :    25;  /*When one-shot or periodic frequency calculation is done, read this value to calculate RTC slow clock's frequency.*/
        };
        uint32_t val;
    } rtc_cali_cfg1;
    union {
        struct {
            uint32_t t0                            :    1;  /*The interrupt enable bit for the TIMG_T$x_INT interrupt.*/
            uint32_t t1                            :    1;  /*The interrupt enable bit for the TIMG_T$x_INT interrupt.*/
            uint32_t wdt                           :    1;  /*The interrupt enable bit for the TIMG_WDT_INT interrupt. */
            uint32_t reserved3                     :    29;  /*Reserved*/
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t t0                            :    1;  /*The raw interrupt status bit for the TIMG_T$x_INT interrupt.*/
            uint32_t t1                            :    1;  /*The raw interrupt status bit for the TIMG_T$x_INT interrupt.*/
            uint32_t wdt                           :    1;  /*The raw interrupt status bit for the TIMG_WDT_INT interrupt. */
            uint32_t reserved3                     :    29;  /*Reserved*/
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t t0                            :    1;  /*The masked interrupt status bit for the TIMG_T$x_INT interrupt.*/
            uint32_t t1                            :    1;  /*The masked interrupt status bit for the TIMG_T$x_INT interrupt.*/
            uint32_t wdt                           :    1;  /*The masked interrupt status bit for the TIMG_WDT_INT interrupt. */
            uint32_t reserved3                     :    29;  /*Reserved*/
        };
        uint32_t val;
    } int_st;
    union {
        struct {
            uint32_t t0                            :    1;  /*Set this bit to clear the TIMG_T$x_INT interrupt. */
            uint32_t t1                            :    1;  /*Set this bit to clear the TIMG_T$x_INT interrupt. */
            uint32_t wdt                           :    1;  /*Set this bit to clear the TIMG_WDT_INT interrupt. */
            uint32_t reserved3                     :    29;  /*Reserved*/
        };
        uint32_t val;
    } int_clr;
    union {
        struct {
            uint32_t timeout                       :    1;  /*RTC calibration timeout indicator*/
            uint32_t reserved1                     :    2;  /*Reserved*/
            uint32_t timeout_rst_cnt               :    4;  /*Cycles that release calibration timeout reset*/
            uint32_t timeout_thres                 :    25;  /*Threshold value for the RTC calibration timer. If the calibration timer's value exceeds this threshold, a timeout is triggered.*/
        };
        uint32_t val;
    } rtc_cali_cfg2;
    uint32_t reserved_84;
    uint32_t reserved_88;
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
    union {
        struct {
            uint32_t date                          :    28;  /*Timer version control register*/
            uint32_t reserved28                    :    4;  /*Reserved*/
        };
        uint32_t val;
    } timg_date;
    union {
        struct {
            uint32_t reserved0                     :    28;  /*Reserved*/
            uint32_t etm_en                        :    1;  /*enable timer's etm task and event*/
            uint32_t clk_is_active                 :    1;  /*enable WDT's clock*/
            uint32_t timer_clk_is_active           :    1;  /*enable Timer $x's clock*/
            uint32_t clk_en                        :    1;  /*Register clock gate signal. 1: Registers can be read and written to by software. 0: Registers can not be read or written to by software.*/
        };
        uint32_t val;
    } timgclk;
} timg_dev_t;
extern timg_dev_t TIMERG0;
extern timg_dev_t TIMERG1;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_TIMG_STRUCT_H_ */
