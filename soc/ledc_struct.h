/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_LEDC_STRUCT_H_
#define _SOC_LEDC_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    struct {
        struct {
            union {
                struct {
                    uint32_t timer_sel                     :    2;  /*Configures which timer is channel $n selected.\\0: Select timer0\\1: Select timer1\\2: Select timer2\\3: Select timer3*/
                    uint32_t sig_out_en                    :    1;  /*Configures whether or not to enable signal output on channel $n.\\0: Signal output disable\\1: Signal output enable*/
                    uint32_t idle_lv                       :    1;  /*Configures the output value when channel $n is inactive. Valid only when  LEDC_SIG_OUT_EN_CH$n is 0.\\0: Output level is low\\1: Output level is high*/
                    uint32_t para_up                       :    1;  /*Configures whether or not to update LEDC_HPOINT_CH$n, LEDC_DUTY_START_CH$n, LEDC_SIG_OUT_EN_CH$n, LEDC_TIMER_SEL_CH$n, LEDC_OVF_CNT_EN_CH$n fields and duty cycle range configuration for channel $n, and will be automatically cleared by hardware.\\0: Invalid. No effect\\1: Update*/
                    uint32_t ovf_num                       :    10;  /*Configures the maximum times of overflow minus 1.The LEDC_OVF_CNT_CH$n_INT interrupt will be triggered when channel $n overflows for (LEDC_OVF_NUM_CH$n + 1) times.*/
                    uint32_t ovf_cnt_en                    :    1;  /*Configures whether or not to enable the ovf_cnt of channel $n.\\0: Disable\\1: Enable*/
                    uint32_t ovf_cnt_rst                   :    1;  /*Configures whether or not to reset the  ovf_cnt of channel $n.\\0: Invalid. No effect\\1: Reset the ovf_cnt*/
                    uint32_t reserved17                    :    15;  /*Reserved*/
                };
                uint32_t val;
            } conf0;
            union {
                struct {
                    uint32_t hpoint                        :    20;  /*Configures high point of signal output on channel $n. The output value changes to high when the selected timers has reached the value specified by this register.*/
                    uint32_t reserved20                    :    12;  /*Reserved*/
                };
                uint32_t val;
            } hpoint;
            union {
                struct {
                    uint32_t duty                          :    25;  /*Configures the duty of signal output on channel $n.*/
                    uint32_t reserved25                    :    7;  /*Reserved*/
                };
                uint32_t val;
            } duty;
            union {
                struct {
                    uint32_t reserved0                     :    31;  /*Reserved*/
                    uint32_t duty_start                    :    1;  /*Configures whether the duty cycle fading configurations take effect.\\0: Not take effect\\1: Take effect*/
                };
                uint32_t val;
            } conf1;
            union {
                struct {
                    uint32_t duty_r                        :    25;  /*Represents the current duty of output signal on channel $n.*/
                    uint32_t reserved25                    :    7;  /*Reserved*/
                };
                uint32_t val;
            } duty_rd;
        } channel[8];
    } channel_group[1];
    struct {
        struct {
            union {
                struct {
                    uint32_t duty_resolution               :    5;  /*Configures the bit width of the counter in timer $n. Valid values are 1 to 20.*/
                    uint32_t clk_div                       :    18;  /*Configures the divisor for the divider in timer $n.The least significant eight bits represent the fractional part.*/
                    uint32_t pause                         :    1;  /*Configures whether or not to pause the counter in timer $n.\\0: Normal\\1: Pause*/
                    uint32_t rst                           :    1;  /*Configures whether or not to reset timer $n. The counter will show 0 after reset.\\0: Not reset\\1: Reset*/
                    uint32_t tick_sel                      :    1;  /*Configures which clock is timer $n selected. Unused.*/
                    uint32_t para_up                       :    1;  /*Configures whether or not to update LEDC_CLK_DIV_TIMER$n and LEDC_TIMER$n_DUTY_RES.\\0: Invalid. No effect\\1: Update*/
                    uint32_t reserved27                    :    5;  /*Reserved*/
                };
                uint32_t val;
            } conf;
            union {
                struct {
                    uint32_t timer_cnt                     :    20;  /*Represents the current counter value of timer $n.*/
                    uint32_t reserved20                    :    12;  /*Reserved*/
                };
                uint32_t val;
            } value;
        } timer[4];
    } timer_group[1];
    union {
        struct {
            uint32_t timer0_ovf                    :    1;  /*Raw status bit: The raw interrupt status of LEDC_TIMER$n_OVF_INT. Triggered when the timer$n has reached its maximum counter value.*/
            uint32_t timer1_ovf                    :    1;  /*Raw status bit: The raw interrupt status of LEDC_TIMER$n_OVF_INT. Triggered when the timer$n has reached its maximum counter value.*/
            uint32_t timer2_ovf                    :    1;  /*Raw status bit: The raw interrupt status of LEDC_TIMER$n_OVF_INT. Triggered when the timer$n has reached its maximum counter value.*/
            uint32_t timer3_ovf                    :    1;  /*Raw status bit: The raw interrupt status of LEDC_TIMER$n_OVF_INT. Triggered when the timer$n has reached its maximum counter value.*/
            uint32_t duty_chng_end                 :    1;  /*Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Triggered when the fading of duty has finished.*/
            uint32_t duty_chng_end_ch1             :    1;  /*Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Triggered when the fading of duty has finished.*/
            uint32_t duty_chng_end_ch2             :    1;  /*Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Triggered when the fading of duty has finished.*/
            uint32_t duty_chng_end_ch3             :    1;  /*Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Triggered when the fading of duty has finished.*/
            uint32_t duty_chng_end_ch4             :    1;  /*Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Triggered when the fading of duty has finished.*/
            uint32_t duty_chng_end_ch5             :    1;  /*Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Triggered when the fading of duty has finished.*/
            uint32_t duty_chng_end_ch6             :    1;  /*Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Triggered when the fading of duty has finished.*/
            uint32_t duty_chng_end_ch7             :    1;  /*Raw status bit: The raw interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Triggered when the fading of duty has finished.*/
            uint32_t ovf_cnt                       :    1;  /*Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered when the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n.*/
            uint32_t ovf_cnt_ch1                   :    1;  /*Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered when the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n.*/
            uint32_t ovf_cnt_ch2                   :    1;  /*Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered when the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n.*/
            uint32_t ovf_cnt_ch3                   :    1;  /*Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered when the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n.*/
            uint32_t ovf_cnt_ch4                   :    1;  /*Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered when the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n.*/
            uint32_t ovf_cnt_ch5                   :    1;  /*Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered when the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n.*/
            uint32_t ovf_cnt_ch6                   :    1;  /*Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered when the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n.*/
            uint32_t ovf_cnt_ch7                   :    1;  /*Raw status bit: The raw interrupt status of LEDC_OVF_CNT_CH$n_INT. Triggered when the ovf_cnt has reached the value specified by LEDC_OVF_NUM_CH$n.*/
            uint32_t reserved20                    :    12;  /*Reserved*/
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t timer0_ovf                    :    1;  /*Masked status bit: The masked interrupt status of LEDC_TIMER$n_OVF_INT. Valid only when LEDC_TIMER$n_OVF_INT_ENA is set to 1.*/
            uint32_t timer1_ovf                    :    1;  /*Masked status bit: The masked interrupt status of LEDC_TIMER$n_OVF_INT. Valid only when LEDC_TIMER$n_OVF_INT_ENA is set to 1.*/
            uint32_t timer2_ovf                    :    1;  /*Masked status bit: The masked interrupt status of LEDC_TIMER$n_OVF_INT. Valid only when LEDC_TIMER$n_OVF_INT_ENA is set to 1.*/
            uint32_t timer3_ovf                    :    1;  /*Masked status bit: The masked interrupt status of LEDC_TIMER$n_OVF_INT. Valid only when LEDC_TIMER$n_OVF_INT_ENA is set to 1.*/
            uint32_t duty_chng_end                 :    1;  /*Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Valid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1.*/
            uint32_t duty_chng_end_ch1             :    1;  /*Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Valid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1.*/
            uint32_t duty_chng_end_ch2             :    1;  /*Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Valid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1.*/
            uint32_t duty_chng_end_ch3             :    1;  /*Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Valid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1.*/
            uint32_t duty_chng_end_ch4             :    1;  /*Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Valid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1.*/
            uint32_t duty_chng_end_ch5             :    1;  /*Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Valid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1.*/
            uint32_t duty_chng_end_ch6             :    1;  /*Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Valid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1.*/
            uint32_t duty_chng_end_ch7             :    1;  /*Masked status bit: The masked interrupt status of LEDC_DUTY_CHNG_END_CH$n_INT. Valid only when LEDC_DUTY_CHNG_END_CH$n_INT_ENA is set to 1.*/
            uint32_t ovf_cnt                       :    1;  /*Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid only when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1.*/
            uint32_t ovf_cnt_ch1                   :    1;  /*Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid only when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1.*/
            uint32_t ovf_cnt_ch2                   :    1;  /*Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid only when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1.*/
            uint32_t ovf_cnt_ch3                   :    1;  /*Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid only when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1.*/
            uint32_t ovf_cnt_ch4                   :    1;  /*Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid only when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1.*/
            uint32_t ovf_cnt_ch5                   :    1;  /*Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid only when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1.*/
            uint32_t ovf_cnt_ch6                   :    1;  /*Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid only when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1.*/
            uint32_t ovf_cnt_ch7                   :    1;  /*Masked status bit: The masked interrupt status of LEDC_OVF_CNT_CH$n_INT. Valid only when LEDC_OVF_CNT_CH$n_INT_ENA is set to 1.*/
            uint32_t reserved20                    :    12;  /*Reserved*/
        };
        uint32_t val;
    } int_st;
    union {
        struct {
            uint32_t timer0_ovf                    :    1;  /*Enable bit: Write 1 to enable LEDC_TIMER$n_OVF_INT.*/
            uint32_t timer1_ovf                    :    1;  /*Enable bit: Write 1 to enable LEDC_TIMER$n_OVF_INT.*/
            uint32_t timer2_ovf                    :    1;  /*Enable bit: Write 1 to enable LEDC_TIMER$n_OVF_INT.*/
            uint32_t timer3_ovf                    :    1;  /*Enable bit: Write 1 to enable LEDC_TIMER$n_OVF_INT.*/
            uint32_t duty_chng_end                 :    1;  /*Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch1             :    1;  /*Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch2             :    1;  /*Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch3             :    1;  /*Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch4             :    1;  /*Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch5             :    1;  /*Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch6             :    1;  /*Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch7             :    1;  /*Enable bit: Write 1 to enable LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t ovf_cnt                       :    1;  /*Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch1                   :    1;  /*Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch2                   :    1;  /*Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch3                   :    1;  /*Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch4                   :    1;  /*Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch5                   :    1;  /*Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch6                   :    1;  /*Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch7                   :    1;  /*Enable bit: Write 1 to enable LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t reserved20                    :    12;  /*Reserved*/
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t timer0_ovf                    :    1;  /*Clear bit: Write 1 to clear LEDC_TIMER$n_OVF_INT.*/
            uint32_t timer1_ovf                    :    1;  /*Clear bit: Write 1 to clear LEDC_TIMER$n_OVF_INT.*/
            uint32_t timer2_ovf                    :    1;  /*Clear bit: Write 1 to clear LEDC_TIMER$n_OVF_INT.*/
            uint32_t timer3_ovf                    :    1;  /*Clear bit: Write 1 to clear LEDC_TIMER$n_OVF_INT.*/
            uint32_t duty_chng_end                 :    1;  /*Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch1             :    1;  /*Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch2             :    1;  /*Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch3             :    1;  /*Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch4             :    1;  /*Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch5             :    1;  /*Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch6             :    1;  /*Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t duty_chng_end_ch7             :    1;  /*Clear bit: Write 1 to clear LEDC_DUTY_CHNG_END_CH$n_INT.*/
            uint32_t ovf_cnt                       :    1;  /*Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch1                   :    1;  /*Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch2                   :    1;  /*Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch3                   :    1;  /*Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch4                   :    1;  /*Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch5                   :    1;  /*Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch6                   :    1;  /*Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t ovf_cnt_ch7                   :    1;  /*Clear bit: Write 1 to clear LEDC_OVF_CNT_CH$n_INT.*/
            uint32_t reserved20                    :    12;  /*Reserved*/
        };
        uint32_t val;
    } int_clr;
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
    uint32_t reserved_fc;
    union {
        struct {
            uint32_t entry_num                     :    5;  /*Configures the number of duty cycle fading rages for LEDC ch$n.*/
            uint32_t pause                         :    1;  /*Configures whether or not to pause duty cycle fading of LEDC ch$n.\\0: Invalid. No effect\\1: Pause*/
            uint32_t resume                        :    1;  /*Configures whether or nor to resume duty cycle fading of LEDC ch$n.\\0: Invalid. No effect\\1: Resume*/
            uint32_t reserved7                     :    25;  /*Reserved*/
        };
        uint32_t val;
    } gamma_conf[8];
    union {
        struct {
            uint32_t task_restart_en               :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_restart_ch1_en           :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_restart_ch2_en           :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_restart_ch3_en           :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_restart_ch4_en           :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_restart_ch5_en           :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_restart_ch6_en           :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_restart_ch7_en           :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESTART_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_pause_en                 :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_pause_ch1_en             :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_pause_ch2_en             :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_pause_ch3_en             :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_pause_ch4_en             :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_pause_ch5_en             :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_pause_ch6_en             :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_pause_ch7_en             :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_PAUSE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_resume_en                :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_resume_ch1_en            :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_resume_ch2_en            :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_resume_ch3_en            :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_resume_ch4_en            :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_resume_ch5_en            :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_resume_ch6_en            :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_resume_ch7_en            :    1;  /*Configures whether or not to enable LEDC_TASK_GAMMA_RESUME_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t reserved24                    :    8;  /*Reserved*/
        };
        uint32_t val;
    } evt_task_en2;
    union {
        struct {
            uint32_t evt_duty_chng_end_en          :    1;  /*Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_duty_chng_end_ch1_en      :    1;  /*Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_duty_chng_end_ch2_en      :    1;  /*Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_duty_chng_end_ch3_en      :    1;  /*Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_duty_chng_end_ch4_en      :    1;  /*Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_duty_chng_end_ch5_en      :    1;  /*Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_duty_chng_end_ch6_en      :    1;  /*Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_duty_chng_end_ch7_en      :    1;  /*Configures whether or not to enable the LEDC_EVT_DUTY_CHNG_END_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_ovf_cnt_pls_en            :    1;  /*Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_ovf_cnt_pls_ch1_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_ovf_cnt_pls_ch2_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_ovf_cnt_pls_ch3_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_ovf_cnt_pls_ch4_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_ovf_cnt_pls_ch5_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_ovf_cnt_pls_ch6_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_ovf_cnt_pls_ch7_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_OVF_CNT_PLS_CH$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_time_ovf_en               :    1;  /*Configures whether or not to enable the LEDC_EVT_TIME_OVF_TIMER$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_time_ovf_timer1_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_TIME_OVF_TIMER$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_time_ovf_timer2_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_TIME_OVF_TIMER$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_time_ovf_timer3_en        :    1;  /*Configures whether or not to enable the LEDC_EVT_TIME_OVF_TIMER$n event.\\0: Disable\\1: Enable*/
            uint32_t evt_cmp_en                    :    1;  /*Configures whether or not to enable the LEDC_EVT_TIMER$n_CMP event.\\0: Disable\\1: Enable*/
            uint32_t evt_timer1_cmp_en             :    1;  /*Configures whether or not to enable the LEDC_EVT_TIMER$n_CMP event.\\0: Disable\\1: Enable*/
            uint32_t evt_timer2_cmp_en             :    1;  /*Configures whether or not to enable the LEDC_EVT_TIMER$n_CMP event.\\0: Disable\\1: Enable*/
            uint32_t evt_timer3_cmp_en             :    1;  /*Configures whether or not to enable the LEDC_EVT_TIMER$n_CMP event.\\0: Disable\\1: Enable*/
            uint32_t task_duty_scale_update_en     :    1;  /*Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_duty_scale_update_ch1_en :    1;  /*Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_duty_scale_update_ch2_en :    1;  /*Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_duty_scale_update_ch3_en :    1;  /*Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_duty_scale_update_ch4_en :    1;  /*Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_duty_scale_update_ch5_en :    1;  /*Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_duty_scale_update_ch6_en :    1;  /*Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\0: Disable\\1: Enable*/
            uint32_t task_duty_scale_update_ch7_en :    1;  /*Configures whether or not to enable the LEDC_TASK_DUTY_SCALE_UPDATE_CH$n task.\\0: Disable\\1: Enable*/
        };
        uint32_t val;
    } evt_task_en[3];
    uint32_t reserved_12c;
    uint32_t reserved_130;
    uint32_t reserved_134;
    uint32_t reserved_138;
    uint32_t reserved_13c;
    union {
        struct {
            uint32_t timer0_cmp                    :    20;  /*Configures the comparison value for LEDC timer$n.*/
            uint32_t reserved20                    :    12;  /*Reserved*/
        };
        uint32_t val;
    } timer_cmp[4];
    union {
        struct {
            uint32_t timer_cnt_cap                 :    20;  /*Represents the captured LEDC timer$n count value.*/
            uint32_t reserved20                    :    12;  /*Reserved*/
        };
        uint32_t val;
    } timer_cnt_cap[4];
    uint32_t reserved_160;
    uint32_t reserved_164;
    uint32_t reserved_168;
    uint32_t reserved_16c;
    union {
        struct {
            uint32_t reserved0                     :    2;
            uint32_t ram_clk_en                    :    1;  /*Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the clock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force open the clock gate for LEDC ch$n gamma ram*/
            uint32_t ram_clk_en_ch1                :    1;  /*Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the clock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force open the clock gate for LEDC ch$n gamma ram*/
            uint32_t ram_clk_en_ch2                :    1;  /*Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the clock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force open the clock gate for LEDC ch$n gamma ram*/
            uint32_t ram_clk_en_ch3                :    1;  /*Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the clock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force open the clock gate for LEDC ch$n gamma ram*/
            uint32_t ram_clk_en_ch4                :    1;  /*Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the clock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force open the clock gate for LEDC ch$n gamma ram*/
            uint32_t ram_clk_en_ch5                :    1;  /*Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the clock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force open the clock gate for LEDC ch$n gamma ram*/
            uint32_t ram_clk_en_ch6                :    1;  /*Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the clock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force open the clock gate for LEDC ch$n gamma ram*/
            uint32_t ram_clk_en_ch7                :    1;  /*Configures whether or not to open LEDC ch$n gamma ram clock gate.\\0: Open the clock gate only when application writes or reads LEDC ch$n gamma ram\\1: Force open the clock gate for LEDC ch$n gamma ram*/
            uint32_t reserved10                    :    21;  /*Reserved*/
            uint32_t clk_en                        :    1;  /*Configures whether or not to open register clock gate.\\0: Open the clock gate only when application writes registers\\1: Force open the clock gate for register*/
        };
        uint32_t val;
    } conf;
    union {
        struct {
            uint32_t ledc_date                     :    28;  /*Configures the version.*/
            uint32_t reserved28                    :    4;  /*Reserved*/
        };
        uint32_t val;
    } date;
} ledc_dev_t;
extern ledc_dev_t LEDC;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_LEDC_STRUCT_H_ */
