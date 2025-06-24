/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_SOC_ETM_STRUCT_H_
#define _SOC_SOC_ETM_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t ch_enabled0                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled1                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled2                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled3                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled4                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled5                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled6                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled7                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled8                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled9                   :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled10                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled11                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled12                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled13                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled14                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled15                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled16                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled17                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled18                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled19                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled20                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled21                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled22                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled23                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled24                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled25                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled26                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled27                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled28                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled29                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled30                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled31                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
        };
        uint32_t val;
    } ch_ena_ad0;
    union {
        struct {
            uint32_t ch_enable0                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable1                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable2                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable3                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable4                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable5                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable6                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable7                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable8                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable9                    :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable10                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable11                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable12                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable13                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable14                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable15                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable16                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable17                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable18                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable19                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable20                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable21                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable22                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable23                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable24                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable25                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable26                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable27                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable28                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable29                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable30                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable31                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
        };
        uint32_t val;
    } ch_ena_ad0_set;
    union {
        struct {
            uint32_t ch_disable0                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable1                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable2                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable3                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable4                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable5                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable6                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable7                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable8                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable9                   :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable10                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable11                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable12                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable13                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable14                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable15                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable16                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable17                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable18                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable19                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable20                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable21                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable22                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable23                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable24                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable25                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable26                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable27                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable28                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable29                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable30                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable31                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } ch_ena_ad0_clr;
    union {
        struct {
            uint32_t ch_enabled32                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled33                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled34                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled35                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled36                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled37                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled38                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled39                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled40                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled41                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled42                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled43                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled44                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled45                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled46                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled47                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled48                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t ch_enabled49                  :    1;  /*Represents ch$n enable status.\\0: Disable\\1: Enable*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } ch_ena_ad1;
    union {
        struct {
            uint32_t ch_enable32                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable33                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable34                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable35                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable36                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable37                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable38                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable39                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable40                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable41                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable42                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable43                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable44                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable45                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable46                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable47                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable48                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t ch_enable49                   :    1;  /*Configures whether or not to enable ch$n.\\0: Invalid, No effect\\1: Enable*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } ch_ena_ad1_set;
    union {
        struct {
            uint32_t ch_disable32                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable33                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable34                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable35                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable36                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable37                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable38                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable39                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable40                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable41                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable42                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable43                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable44                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable45                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable46                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable47                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable48                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ch_disable49                  :    1;  /*Configures whether or not to clear ch$n enable.\\0: Invalid, No effect\\1: Clear*/
            uint32_t reserved18                    :    14;  /*reserved*/
        };
        uint32_t val;
    } ch_ena_ad1_clr;
    struct {
        union {
            struct {
                uint32_t evt_id                        :    9;  /*Configures ch$n_evt_id*/
                uint32_t reserved9                     :    23;  /*reserved*/
            };
            uint32_t val;
        } evt_id;
        union {
            struct {
                uint32_t task_id                       :    9;  /*Configures ch$n_task_id*/
                uint32_t reserved9                     :    23;  /*reserved*/
            };
            uint32_t val;
        } task_id;
    } channel[50];
    union {
        struct {
            uint32_t gpio_evt_rise_edge_st         :    1;  /*Represents GPIO_evt_ch0_rise_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch1_rise_edge_st     :    1;  /*Represents GPIO_evt_ch1_rise_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch2_rise_edge_st     :    1;  /*Represents GPIO_evt_ch2_rise_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch3_rise_edge_st     :    1;  /*Represents GPIO_evt_ch3_rise_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch4_rise_edge_st     :    1;  /*Represents GPIO_evt_ch4_rise_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch5_rise_edge_st     :    1;  /*Represents GPIO_evt_ch5_rise_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch6_rise_edge_st     :    1;  /*Represents GPIO_evt_ch6_rise_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch7_rise_edge_st     :    1;  /*Represents GPIO_evt_ch7_rise_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_fall_edge_st         :    1;  /*Represents GPIO_evt_ch0_fall_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch1_fall_edge_st     :    1;  /*Represents GPIO_evt_ch1_fall_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch2_fall_edge_st     :    1;  /*Represents GPIO_evt_ch2_fall_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch3_fall_edge_st     :    1;  /*Represents GPIO_evt_ch3_fall_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch4_fall_edge_st     :    1;  /*Represents GPIO_evt_ch4_fall_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch5_fall_edge_st     :    1;  /*Represents GPIO_evt_ch5_fall_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch6_fall_edge_st     :    1;  /*Represents GPIO_evt_ch6_fall_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch7_fall_edge_st     :    1;  /*Represents GPIO_evt_ch7_fall_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_any_edge_st          :    1;  /*Represents GPIO_evt_ch0_any_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch1_any_edge_st      :    1;  /*Represents GPIO_evt_ch1_any_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch2_any_edge_st      :    1;  /*Represents GPIO_evt_ch2_any_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch3_any_edge_st      :    1;  /*Represents GPIO_evt_ch3_any_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch4_any_edge_st      :    1;  /*Represents GPIO_evt_ch4_any_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch5_any_edge_st      :    1;  /*Represents GPIO_evt_ch5_any_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch6_any_edge_st      :    1;  /*Represents GPIO_evt_ch6_any_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_evt_ch7_any_edge_st      :    1;  /*Represents GPIO_evt_ch7_any_edge trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_duty_chng_end_st    :    1;  /*Represents LEDC0_evt_duty_chng_end_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_duty_chng_end_ch1_st:    1;  /*Represents LEDC0_evt_duty_chng_end_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_duty_chng_end_ch2_st:    1;  /*Represents LEDC0_evt_duty_chng_end_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_duty_chng_end_ch3_st:    1;  /*Represents LEDC0_evt_duty_chng_end_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_duty_chng_end_ch4_st:    1;  /*Represents LEDC0_evt_duty_chng_end_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_duty_chng_end_ch5_st:    1;  /*Represents LEDC0_evt_duty_chng_end_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_duty_chng_end_ch6_st:    1;  /*Represents LEDC0_evt_duty_chng_end_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_duty_chng_end_ch7_st:    1;  /*Represents LEDC0_evt_duty_chng_end_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } evt_st0;
    union {
        struct {
            uint32_t gpio_evt_rise_edge_st_clr     :    1;  /*Configures whether or not to clear GPIO_evt_ch0_rise_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch1_rise_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch1_rise_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch2_rise_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch2_rise_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch3_rise_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch3_rise_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch4_rise_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch4_rise_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch5_rise_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch5_rise_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch6_rise_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch6_rise_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch7_rise_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch7_rise_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_fall_edge_st_clr     :    1;  /*Configures whether or not to clear GPIO_evt_ch0_fall_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch1_fall_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch1_fall_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch2_fall_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch2_fall_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch3_fall_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch3_fall_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch4_fall_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch4_fall_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch5_fall_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch5_fall_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch6_fall_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch6_fall_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch7_fall_edge_st_clr :    1;  /*Configures whether or not to clear GPIO_evt_ch7_fall_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_any_edge_st_clr      :    1;  /*Configures whether or not to clear GPIO_evt_ch0_any_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch1_any_edge_st_clr  :    1;  /*Configures whether or not to clear GPIO_evt_ch1_any_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch2_any_edge_st_clr  :    1;  /*Configures whether or not to clear GPIO_evt_ch2_any_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch3_any_edge_st_clr  :    1;  /*Configures whether or not to clear GPIO_evt_ch3_any_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch4_any_edge_st_clr  :    1;  /*Configures whether or not to clear GPIO_evt_ch4_any_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch5_any_edge_st_clr  :    1;  /*Configures whether or not to clear GPIO_evt_ch5_any_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch6_any_edge_st_clr  :    1;  /*Configures whether or not to clear GPIO_evt_ch6_any_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_evt_ch7_any_edge_st_clr  :    1;  /*Configures whether or not to clear GPIO_evt_ch7_any_edge trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_duty_chng_end_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_duty_chng_end_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_duty_chng_end_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_duty_chng_end_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_duty_chng_end_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_duty_chng_end_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_duty_chng_end_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_duty_chng_end_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_duty_chng_end_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_duty_chng_end_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_duty_chng_end_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_duty_chng_end_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_duty_chng_end_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_duty_chng_end_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_duty_chng_end_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_duty_chng_end_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } evt_st0_clr;
    union {
        struct {
            uint32_t ledc0_evt_ovf_cnt_pls_st      :    1;  /*Represents LEDC0_evt_ovf_cnt_pls_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch1_st  :    1;  /*Represents LEDC0_evt_ovf_cnt_pls_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch2_st  :    1;  /*Represents LEDC0_evt_ovf_cnt_pls_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch3_st  :    1;  /*Represents LEDC0_evt_ovf_cnt_pls_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch4_st  :    1;  /*Represents LEDC0_evt_ovf_cnt_pls_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch5_st  :    1;  /*Represents LEDC0_evt_ovf_cnt_pls_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch6_st  :    1;  /*Represents LEDC0_evt_ovf_cnt_pls_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch7_st  :    1;  /*Represents LEDC0_evt_ovf_cnt_pls_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_time_ovf_timer0_st  :    1;  /*Represents LEDC0_evt_time_ovf_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_time_ovf_timer1_st  :    1;  /*Represents LEDC0_evt_time_ovf_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_time_ovf_timer2_st  :    1;  /*Represents LEDC0_evt_time_ovf_timer2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_time_ovf_timer3_st  :    1;  /*Represents LEDC0_evt_time_ovf_timer3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_timer0_cmp_st       :    1;  /*Represents LEDC0_evt_timer0_cmp trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_timer1_cmp_st       :    1;  /*Represents LEDC0_evt_timer1_cmp trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_timer2_cmp_st       :    1;  /*Represents LEDC0_evt_timer2_cmp trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_evt_timer3_cmp_st       :    1;  /*Represents LEDC0_evt_timer3_cmp trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_duty_chng_end_st    :    1;  /*Represents LEDC1_evt_duty_chng_end_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_duty_chng_end_ch1_st:    1;  /*Represents LEDC1_evt_duty_chng_end_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_duty_chng_end_ch2_st:    1;  /*Represents LEDC1_evt_duty_chng_end_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_duty_chng_end_ch3_st:    1;  /*Represents LEDC1_evt_duty_chng_end_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_duty_chng_end_ch4_st:    1;  /*Represents LEDC1_evt_duty_chng_end_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_duty_chng_end_ch5_st:    1;  /*Represents LEDC1_evt_duty_chng_end_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_duty_chng_end_ch6_st:    1;  /*Represents LEDC1_evt_duty_chng_end_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_duty_chng_end_ch7_st:    1;  /*Represents LEDC1_evt_duty_chng_end_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_ovf_cnt_pls_st      :    1;  /*Represents LEDC1_evt_ovf_cnt_pls_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch1_st  :    1;  /*Represents LEDC1_evt_ovf_cnt_pls_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch2_st  :    1;  /*Represents LEDC1_evt_ovf_cnt_pls_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch3_st  :    1;  /*Represents LEDC1_evt_ovf_cnt_pls_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch4_st  :    1;  /*Represents LEDC1_evt_ovf_cnt_pls_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch5_st  :    1;  /*Represents LEDC1_evt_ovf_cnt_pls_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch6_st  :    1;  /*Represents LEDC1_evt_ovf_cnt_pls_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch7_st  :    1;  /*Represents LEDC1_evt_ovf_cnt_pls_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } evt_st1;
    union {
        struct {
            uint32_t ledc0_evt_ovf_cnt_pls_st_clr  :    1;  /*Configures whether or not to clear LEDC0_evt_ovf_cnt_pls_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_ovf_cnt_pls_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_ovf_cnt_pls_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_ovf_cnt_pls_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_ovf_cnt_pls_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_ovf_cnt_pls_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_ovf_cnt_pls_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_ovf_cnt_pls_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_ovf_cnt_pls_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_time_ovf_timer0_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_time_ovf_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_time_ovf_timer1_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_time_ovf_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_time_ovf_timer2_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_time_ovf_timer2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_time_ovf_timer3_st_clr:    1;  /*Configures whether or not to clear LEDC0_evt_time_ovf_timer3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_timer0_cmp_st_clr   :    1;  /*Configures whether or not to clear LEDC0_evt_timer0_cmp trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_timer1_cmp_st_clr   :    1;  /*Configures whether or not to clear LEDC0_evt_timer1_cmp trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_timer2_cmp_st_clr   :    1;  /*Configures whether or not to clear LEDC0_evt_timer2_cmp trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_evt_timer3_cmp_st_clr   :    1;  /*Configures whether or not to clear LEDC0_evt_timer3_cmp trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_duty_chng_end_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_duty_chng_end_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_duty_chng_end_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_duty_chng_end_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_duty_chng_end_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_duty_chng_end_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_duty_chng_end_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_duty_chng_end_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_duty_chng_end_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_duty_chng_end_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_duty_chng_end_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_duty_chng_end_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_duty_chng_end_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_duty_chng_end_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_duty_chng_end_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_duty_chng_end_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_ovf_cnt_pls_st_clr  :    1;  /*Configures whether or not to clear LEDC1_evt_ovf_cnt_pls_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_ovf_cnt_pls_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_ovf_cnt_pls_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_ovf_cnt_pls_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_ovf_cnt_pls_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_ovf_cnt_pls_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_ovf_cnt_pls_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_ovf_cnt_pls_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_ovf_cnt_pls_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } evt_st1_clr;
    union {
        struct {
            uint32_t ledc1_evt_time_ovf_timer0_st  :    1;  /*Represents LEDC1_evt_time_ovf_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_time_ovf_timer1_st  :    1;  /*Represents LEDC1_evt_time_ovf_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_time_ovf_timer2_st  :    1;  /*Represents LEDC1_evt_time_ovf_timer2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_time_ovf_timer3_st  :    1;  /*Represents LEDC1_evt_time_ovf_timer3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_timer0_cmp_st       :    1;  /*Represents LEDC1_evt_timer0_cmp trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_timer1_cmp_st       :    1;  /*Represents LEDC1_evt_timer1_cmp trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_timer2_cmp_st       :    1;  /*Represents LEDC1_evt_timer2_cmp trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_evt_timer3_cmp_st       :    1;  /*Represents LEDC1_evt_timer3_cmp trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_evt_cnt_cmp_timer0_st     :    1;  /*Represents TG0_evt_cnt_cmp_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_evt_cnt_cmp_timer1_st     :    1;  /*Represents TG0_evt_cnt_cmp_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_evt_cnt_cmp_timer0_st     :    1;  /*Represents TG1_evt_cnt_cmp_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_evt_cnt_cmp_timer1_st     :    1;  /*Represents TG1_evt_cnt_cmp_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t systimer_evt_cnt_cmp0_st      :    1;  /*Represents SYSTIMER_evt_cnt_cmp0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t systimer_evt_cnt_cmp1_st      :    1;  /*Represents SYSTIMER_evt_cnt_cmp1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t systimer_evt_cnt_cmp2_st      :    1;  /*Represents SYSTIMER_evt_cnt_cmp2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_timer0_stop_st     :    1;  /*Represents MCPWM0_evt_timer0_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_timer1_stop_st     :    1;  /*Represents MCPWM0_evt_timer1_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_timer2_stop_st     :    1;  /*Represents MCPWM0_evt_timer2_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_timer0_tez_st      :    1;  /*Represents MCPWM0_evt_timer0_tez trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_timer1_tez_st      :    1;  /*Represents MCPWM0_evt_timer1_tez trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_timer2_tez_st      :    1;  /*Represents MCPWM0_evt_timer2_tez trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_timer0_tep_st      :    1;  /*Represents MCPWM0_evt_timer0_tep trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_timer1_tep_st      :    1;  /*Represents MCPWM0_evt_timer1_tep trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_timer2_tep_st      :    1;  /*Represents MCPWM0_evt_timer2_tep trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op0_tea_st         :    1;  /*Represents MCPWM0_evt_op0_tea trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op1_tea_st         :    1;  /*Represents MCPWM0_evt_op1_tea trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op2_tea_st         :    1;  /*Represents MCPWM0_evt_op2_tea trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op0_teb_st         :    1;  /*Represents MCPWM0_evt_op0_teb trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op1_teb_st         :    1;  /*Represents MCPWM0_evt_op1_teb trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op2_teb_st         :    1;  /*Represents MCPWM0_evt_op2_teb trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_f0_st              :    1;  /*Represents MCPWM0_evt_f0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_f1_st              :    1;  /*Represents MCPWM0_evt_f1 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } evt_st2;
    union {
        struct {
            uint32_t ledc1_evt_time_ovf_timer0_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_time_ovf_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_time_ovf_timer1_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_time_ovf_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_time_ovf_timer2_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_time_ovf_timer2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_time_ovf_timer3_st_clr:    1;  /*Configures whether or not to clear LEDC1_evt_time_ovf_timer3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_timer0_cmp_st_clr   :    1;  /*Configures whether or not to clear LEDC1_evt_timer0_cmp trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_timer1_cmp_st_clr   :    1;  /*Configures whether or not to clear LEDC1_evt_timer1_cmp trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_timer2_cmp_st_clr   :    1;  /*Configures whether or not to clear LEDC1_evt_timer2_cmp trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_evt_timer3_cmp_st_clr   :    1;  /*Configures whether or not to clear LEDC1_evt_timer3_cmp trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_evt_cnt_cmp_timer0_st_clr :    1;  /*Configures whether or not to clear TG0_evt_cnt_cmp_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_evt_cnt_cmp_timer1_st_clr :    1;  /*Configures whether or not to clear TG0_evt_cnt_cmp_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_evt_cnt_cmp_timer0_st_clr :    1;  /*Configures whether or not to clear TG1_evt_cnt_cmp_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_evt_cnt_cmp_timer1_st_clr :    1;  /*Configures whether or not to clear TG1_evt_cnt_cmp_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t systimer_evt_cnt_cmp0_st_clr  :    1;  /*Configures whether or not to clear SYSTIMER_evt_cnt_cmp0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t systimer_evt_cnt_cmp1_st_clr  :    1;  /*Configures whether or not to clear SYSTIMER_evt_cnt_cmp1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t systimer_evt_cnt_cmp2_st_clr  :    1;  /*Configures whether or not to clear SYSTIMER_evt_cnt_cmp2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_timer0_stop_st_clr :    1;  /*Configures whether or not to clear MCPWM0_evt_timer0_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_timer1_stop_st_clr :    1;  /*Configures whether or not to clear MCPWM0_evt_timer1_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_timer2_stop_st_clr :    1;  /*Configures whether or not to clear MCPWM0_evt_timer2_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_timer0_tez_st_clr  :    1;  /*Configures whether or not to clear MCPWM0_evt_timer0_tez trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_timer1_tez_st_clr  :    1;  /*Configures whether or not to clear MCPWM0_evt_timer1_tez trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_timer2_tez_st_clr  :    1;  /*Configures whether or not to clear MCPWM0_evt_timer2_tez trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_timer0_tep_st_clr  :    1;  /*Configures whether or not to clear MCPWM0_evt_timer0_tep trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_timer1_tep_st_clr  :    1;  /*Configures whether or not to clear MCPWM0_evt_timer1_tep trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_timer2_tep_st_clr  :    1;  /*Configures whether or not to clear MCPWM0_evt_timer2_tep trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op0_tea_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_op0_tea trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op1_tea_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_op1_tea trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op2_tea_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_op2_tea trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op0_teb_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_op0_teb trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op1_teb_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_op1_teb trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op2_teb_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_op2_teb trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_f0_st_clr          :    1;  /*Configures whether or not to clear MCPWM0_evt_f0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_f1_st_clr          :    1;  /*Configures whether or not to clear MCPWM0_evt_f1 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } evt_st2_clr;
    union {
        struct {
            uint32_t mcpwm0_evt_f2_st              :    1;  /*Represents MCPWM0_evt_f2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_f0_clr_st          :    1;  /*Represents MCPWM0_evt_f0_clr trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_f1_clr_st          :    1;  /*Represents MCPWM0_evt_f1_clr trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_f2_clr_st          :    1;  /*Represents MCPWM0_evt_f2_clr trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_tz0_cbc_st         :    1;  /*Represents MCPWM0_evt_tz0_cbc trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_tz1_cbc_st         :    1;  /*Represents MCPWM0_evt_tz1_cbc trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_tz2_cbc_st         :    1;  /*Represents MCPWM0_evt_tz2_cbc trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_tz0_ost_st         :    1;  /*Represents MCPWM0_evt_tz0_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_tz1_ost_st         :    1;  /*Represents MCPWM0_evt_tz1_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_tz2_ost_st         :    1;  /*Represents MCPWM0_evt_tz2_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_cap0_st            :    1;  /*Represents MCPWM0_evt_cap0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_cap1_st            :    1;  /*Represents MCPWM0_evt_cap1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_cap2_st            :    1;  /*Represents MCPWM0_evt_cap2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op0_tee1_st        :    1;  /*Represents MCPWM0_evt_op0_tee1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op1_tee1_st        :    1;  /*Represents MCPWM0_evt_op1_tee1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op2_tee1_st        :    1;  /*Represents MCPWM0_evt_op2_tee1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op0_tee2_st        :    1;  /*Represents MCPWM0_evt_op0_tee2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op1_tee2_st        :    1;  /*Represents MCPWM0_evt_op1_tee2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_evt_op2_tee2_st        :    1;  /*Represents MCPWM0_evt_op2_tee2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_timer0_stop_st     :    1;  /*Represents MCPWM1_evt_timer0_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_timer1_stop_st     :    1;  /*Represents MCPWM1_evt_timer1_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_timer2_stop_st     :    1;  /*Represents MCPWM1_evt_timer2_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_timer0_tez_st      :    1;  /*Represents MCPWM1_evt_timer0_tez trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_timer1_tez_st      :    1;  /*Represents MCPWM1_evt_timer1_tez trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_timer2_tez_st      :    1;  /*Represents MCPWM1_evt_timer2_tez trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_timer0_tep_st      :    1;  /*Represents MCPWM1_evt_timer0_tep trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_timer1_tep_st      :    1;  /*Represents MCPWM1_evt_timer1_tep trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_timer2_tep_st      :    1;  /*Represents MCPWM1_evt_timer2_tep trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op0_tea_st         :    1;  /*Represents MCPWM1_evt_op0_tea trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op1_tea_st         :    1;  /*Represents MCPWM1_evt_op1_tea trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op2_tea_st         :    1;  /*Represents MCPWM1_evt_op2_tea trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op0_teb_st         :    1;  /*Represents MCPWM1_evt_op0_teb trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } evt_st3;
    union {
        struct {
            uint32_t mcpwm0_evt_f2_st_clr          :    1;  /*Configures whether or not to clear MCPWM0_evt_f2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_f0_clr_st_clr      :    1;  /*Configures whether or not to clear MCPWM0_evt_f0_clr trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_f1_clr_st_clr      :    1;  /*Configures whether or not to clear MCPWM0_evt_f1_clr trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_f2_clr_st_clr      :    1;  /*Configures whether or not to clear MCPWM0_evt_f2_clr trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_tz0_cbc_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_tz0_cbc trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_tz1_cbc_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_tz1_cbc trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_tz2_cbc_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_tz2_cbc trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_tz0_ost_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_tz0_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_tz1_ost_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_tz1_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_tz2_ost_st_clr     :    1;  /*Configures whether or not to clear MCPWM0_evt_tz2_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_cap0_st_clr        :    1;  /*Configures whether or not to clear MCPWM0_evt_cap0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_cap1_st_clr        :    1;  /*Configures whether or not to clear MCPWM0_evt_cap1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_cap2_st_clr        :    1;  /*Configures whether or not to clear MCPWM0_evt_cap2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op0_tee1_st_clr    :    1;  /*Configures whether or not to clear MCPWM0_evt_op0_tee1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op1_tee1_st_clr    :    1;  /*Configures whether or not to clear MCPWM0_evt_op1_tee1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op2_tee1_st_clr    :    1;  /*Configures whether or not to clear MCPWM0_evt_op2_tee1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op0_tee2_st_clr    :    1;  /*Configures whether or not to clear MCPWM0_evt_op0_tee2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op1_tee2_st_clr    :    1;  /*Configures whether or not to clear MCPWM0_evt_op1_tee2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_evt_op2_tee2_st_clr    :    1;  /*Configures whether or not to clear MCPWM0_evt_op2_tee2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_timer0_stop_st_clr :    1;  /*Configures whether or not to clear MCPWM1_evt_timer0_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_timer1_stop_st_clr :    1;  /*Configures whether or not to clear MCPWM1_evt_timer1_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_timer2_stop_st_clr :    1;  /*Configures whether or not to clear MCPWM1_evt_timer2_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_timer0_tez_st_clr  :    1;  /*Configures whether or not to clear MCPWM1_evt_timer0_tez trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_timer1_tez_st_clr  :    1;  /*Configures whether or not to clear MCPWM1_evt_timer1_tez trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_timer2_tez_st_clr  :    1;  /*Configures whether or not to clear MCPWM1_evt_timer2_tez trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_timer0_tep_st_clr  :    1;  /*Configures whether or not to clear MCPWM1_evt_timer0_tep trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_timer1_tep_st_clr  :    1;  /*Configures whether or not to clear MCPWM1_evt_timer1_tep trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_timer2_tep_st_clr  :    1;  /*Configures whether or not to clear MCPWM1_evt_timer2_tep trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op0_tea_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_op0_tea trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op1_tea_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_op1_tea trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op2_tea_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_op2_tea trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op0_teb_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_op0_teb trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } evt_st3_clr;
    union {
        struct {
            uint32_t mcpwm1_evt_op1_teb_st         :    1;  /*Represents MCPWM1_evt_op1_teb trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op2_teb_st         :    1;  /*Represents MCPWM1_evt_op2_teb trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_f0_st              :    1;  /*Represents MCPWM1_evt_f0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_f1_st              :    1;  /*Represents MCPWM1_evt_f1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_f2_st              :    1;  /*Represents MCPWM1_evt_f2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_f0_clr_st          :    1;  /*Represents MCPWM1_evt_f0_clr trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_f1_clr_st          :    1;  /*Represents MCPWM1_evt_f1_clr trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_f2_clr_st          :    1;  /*Represents MCPWM1_evt_f2_clr trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_tz0_cbc_st         :    1;  /*Represents MCPWM1_evt_tz0_cbc trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_tz1_cbc_st         :    1;  /*Represents MCPWM1_evt_tz1_cbc trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_tz2_cbc_st         :    1;  /*Represents MCPWM1_evt_tz2_cbc trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_tz0_ost_st         :    1;  /*Represents MCPWM1_evt_tz0_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_tz1_ost_st         :    1;  /*Represents MCPWM1_evt_tz1_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_tz2_ost_st         :    1;  /*Represents MCPWM1_evt_tz2_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_cap0_st            :    1;  /*Represents MCPWM1_evt_cap0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_cap1_st            :    1;  /*Represents MCPWM1_evt_cap1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_cap2_st            :    1;  /*Represents MCPWM1_evt_cap2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op0_tee1_st        :    1;  /*Represents MCPWM1_evt_op0_tee1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op1_tee1_st        :    1;  /*Represents MCPWM1_evt_op1_tee1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op2_tee1_st        :    1;  /*Represents MCPWM1_evt_op2_tee1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op0_tee2_st        :    1;  /*Represents MCPWM1_evt_op0_tee2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op1_tee2_st        :    1;  /*Represents MCPWM1_evt_op1_tee2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_evt_op2_tee2_st        :    1;  /*Represents MCPWM1_evt_op2_tee2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_timer0_stop_st     :    1;  /*Represents MCPWM2_evt_timer0_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_timer1_stop_st     :    1;  /*Represents MCPWM2_evt_timer1_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_timer2_stop_st     :    1;  /*Represents MCPWM2_evt_timer2_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_timer0_tez_st      :    1;  /*Represents MCPWM2_evt_timer0_tez trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_timer1_tez_st      :    1;  /*Represents MCPWM2_evt_timer1_tez trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_timer2_tez_st      :    1;  /*Represents MCPWM2_evt_timer2_tez trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_timer0_tep_st      :    1;  /*Represents MCPWM2_evt_timer0_tep trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_timer1_tep_st      :    1;  /*Represents MCPWM2_evt_timer1_tep trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_timer2_tep_st      :    1;  /*Represents MCPWM2_evt_timer2_tep trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } evt_st4;
    union {
        struct {
            uint32_t mcpwm1_evt_op1_teb_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_op1_teb trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op2_teb_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_op2_teb trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_f0_st_clr          :    1;  /*Configures whether or not to clear MCPWM1_evt_f0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_f1_st_clr          :    1;  /*Configures whether or not to clear MCPWM1_evt_f1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_f2_st_clr          :    1;  /*Configures whether or not to clear MCPWM1_evt_f2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_f0_clr_st_clr      :    1;  /*Configures whether or not to clear MCPWM1_evt_f0_clr trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_f1_clr_st_clr      :    1;  /*Configures whether or not to clear MCPWM1_evt_f1_clr trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_f2_clr_st_clr      :    1;  /*Configures whether or not to clear MCPWM1_evt_f2_clr trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_tz0_cbc_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_tz0_cbc trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_tz1_cbc_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_tz1_cbc trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_tz2_cbc_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_tz2_cbc trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_tz0_ost_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_tz0_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_tz1_ost_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_tz1_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_tz2_ost_st_clr     :    1;  /*Configures whether or not to clear MCPWM1_evt_tz2_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_cap0_st_clr        :    1;  /*Configures whether or not to clear MCPWM1_evt_cap0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_cap1_st_clr        :    1;  /*Configures whether or not to clear MCPWM1_evt_cap1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_cap2_st_clr        :    1;  /*Configures whether or not to clear MCPWM1_evt_cap2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op0_tee1_st_clr    :    1;  /*Configures whether or not to clear MCPWM1_evt_op0_tee1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op1_tee1_st_clr    :    1;  /*Configures whether or not to clear MCPWM1_evt_op1_tee1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op2_tee1_st_clr    :    1;  /*Configures whether or not to clear MCPWM1_evt_op2_tee1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op0_tee2_st_clr    :    1;  /*Configures whether or not to clear MCPWM1_evt_op0_tee2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op1_tee2_st_clr    :    1;  /*Configures whether or not to clear MCPWM1_evt_op1_tee2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_evt_op2_tee2_st_clr    :    1;  /*Configures whether or not to clear MCPWM1_evt_op2_tee2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_timer0_stop_st_clr :    1;  /*Configures whether or not to clear MCPWM2_evt_timer0_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_timer1_stop_st_clr :    1;  /*Configures whether or not to clear MCPWM2_evt_timer1_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_timer2_stop_st_clr :    1;  /*Configures whether or not to clear MCPWM2_evt_timer2_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_timer0_tez_st_clr  :    1;  /*Configures whether or not to clear MCPWM2_evt_timer0_tez trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_timer1_tez_st_clr  :    1;  /*Configures whether or not to clear MCPWM2_evt_timer1_tez trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_timer2_tez_st_clr  :    1;  /*Configures whether or not to clear MCPWM2_evt_timer2_tez trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_timer0_tep_st_clr  :    1;  /*Configures whether or not to clear MCPWM2_evt_timer0_tep trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_timer1_tep_st_clr  :    1;  /*Configures whether or not to clear MCPWM2_evt_timer1_tep trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_timer2_tep_st_clr  :    1;  /*Configures whether or not to clear MCPWM2_evt_timer2_tep trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } evt_st4_clr;
    union {
        struct {
            uint32_t mcpwm2_evt_op0_tea_st         :    1;  /*Represents MCPWM2_evt_op0_tea trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op1_tea_st         :    1;  /*Represents MCPWM2_evt_op1_tea trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op2_tea_st         :    1;  /*Represents MCPWM2_evt_op2_tea trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op0_teb_st         :    1;  /*Represents MCPWM2_evt_op0_teb trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op1_teb_st         :    1;  /*Represents MCPWM2_evt_op1_teb trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op2_teb_st         :    1;  /*Represents MCPWM2_evt_op2_teb trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_f0_st              :    1;  /*Represents MCPWM2_evt_f0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_f1_st              :    1;  /*Represents MCPWM2_evt_f1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_f2_st              :    1;  /*Represents MCPWM2_evt_f2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_f0_clr_st          :    1;  /*Represents MCPWM2_evt_f0_clr trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_f1_clr_st          :    1;  /*Represents MCPWM2_evt_f1_clr trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_f2_clr_st          :    1;  /*Represents MCPWM2_evt_f2_clr trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_tz0_cbc_st         :    1;  /*Represents MCPWM2_evt_tz0_cbc trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_tz1_cbc_st         :    1;  /*Represents MCPWM2_evt_tz1_cbc trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_tz2_cbc_st         :    1;  /*Represents MCPWM2_evt_tz2_cbc trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_tz0_ost_st         :    1;  /*Represents MCPWM2_evt_tz0_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_tz1_ost_st         :    1;  /*Represents MCPWM2_evt_tz1_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_tz2_ost_st         :    1;  /*Represents MCPWM2_evt_tz2_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_cap0_st            :    1;  /*Represents MCPWM2_evt_cap0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_cap1_st            :    1;  /*Represents MCPWM2_evt_cap1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_cap2_st            :    1;  /*Represents MCPWM2_evt_cap2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op0_tee1_st        :    1;  /*Represents MCPWM2_evt_op0_tee1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op1_tee1_st        :    1;  /*Represents MCPWM2_evt_op1_tee1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op2_tee1_st        :    1;  /*Represents MCPWM2_evt_op2_tee1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op0_tee2_st        :    1;  /*Represents MCPWM2_evt_op0_tee2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op1_tee2_st        :    1;  /*Represents MCPWM2_evt_op1_tee2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_evt_op2_tee2_st        :    1;  /*Represents MCPWM2_evt_op2_tee2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s0_evt_rx_done_st           :    1;  /*Represents I2S0_evt_rx_done trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s0_evt_tx_done_st           :    1;  /*Represents I2S0_evt_tx_done trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s0_evt_x_words_received_st  :    1;  /*Represents I2S0_evt_x_words_received trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s0_evt_x_words_sent_st      :    1;  /*Represents I2S0_evt_x_words_sent trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s1_evt_rx_done_st           :    1;  /*Represents I2S1_evt_rx_done trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } evt_st5;
    union {
        struct {
            uint32_t mcpwm2_evt_op0_tea_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_op0_tea trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op1_tea_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_op1_tea trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op2_tea_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_op2_tea trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op0_teb_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_op0_teb trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op1_teb_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_op1_teb trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op2_teb_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_op2_teb trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_f0_st_clr          :    1;  /*Configures whether or not to clear MCPWM2_evt_f0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_f1_st_clr          :    1;  /*Configures whether or not to clear MCPWM2_evt_f1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_f2_st_clr          :    1;  /*Configures whether or not to clear MCPWM2_evt_f2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_f0_clr_st_clr      :    1;  /*Configures whether or not to clear MCPWM2_evt_f0_clr trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_f1_clr_st_clr      :    1;  /*Configures whether or not to clear MCPWM2_evt_f1_clr trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_f2_clr_st_clr      :    1;  /*Configures whether or not to clear MCPWM2_evt_f2_clr trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_tz0_cbc_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_tz0_cbc trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_tz1_cbc_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_tz1_cbc trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_tz2_cbc_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_tz2_cbc trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_tz0_ost_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_tz0_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_tz1_ost_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_tz1_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_tz2_ost_st_clr     :    1;  /*Configures whether or not to clear MCPWM2_evt_tz2_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_cap0_st_clr        :    1;  /*Configures whether or not to clear MCPWM2_evt_cap0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_cap1_st_clr        :    1;  /*Configures whether or not to clear MCPWM2_evt_cap1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_cap2_st_clr        :    1;  /*Configures whether or not to clear MCPWM2_evt_cap2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op0_tee1_st_clr    :    1;  /*Configures whether or not to clear MCPWM2_evt_op0_tee1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op1_tee1_st_clr    :    1;  /*Configures whether or not to clear MCPWM2_evt_op1_tee1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op2_tee1_st_clr    :    1;  /*Configures whether or not to clear MCPWM2_evt_op2_tee1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op0_tee2_st_clr    :    1;  /*Configures whether or not to clear MCPWM2_evt_op0_tee2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op1_tee2_st_clr    :    1;  /*Configures whether or not to clear MCPWM2_evt_op1_tee2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_evt_op2_tee2_st_clr    :    1;  /*Configures whether or not to clear MCPWM2_evt_op2_tee2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s0_evt_rx_done_st_clr       :    1;  /*Configures whether or not to clear I2S0_evt_rx_done trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s0_evt_tx_done_st_clr       :    1;  /*Configures whether or not to clear I2S0_evt_tx_done trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s0_evt_x_words_received_st_clr:    1;  /*Configures whether or not to clear I2S0_evt_x_words_received trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s0_evt_x_words_sent_st_clr  :    1;  /*Configures whether or not to clear I2S0_evt_x_words_sent trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s1_evt_rx_done_st_clr       :    1;  /*Configures whether or not to clear I2S1_evt_rx_done trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } evt_st5_clr;
    union {
        struct {
            uint32_t i2s1_evt_tx_done_st           :    1;  /*Represents I2S1_evt_tx_done trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s1_evt_x_words_received_st  :    1;  /*Represents I2S1_evt_x_words_received trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s1_evt_x_words_sent_st      :    1;  /*Represents I2S1_evt_x_words_sent trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s2_evt_rx_done_st           :    1;  /*Represents I2S2_evt_rx_done trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s2_evt_tx_done_st           :    1;  /*Represents I2S2_evt_tx_done trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s2_evt_x_words_received_st  :    1;  /*Represents I2S2_evt_x_words_received trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s2_evt_x_words_sent_st      :    1;  /*Represents I2S2_evt_x_words_sent trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_done_st       :    1;  /*Represents PDMA_AHB_evt_in_done_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_done_ch1_st   :    1;  /*Represents PDMA_AHB_evt_in_done_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_done_ch2_st   :    1;  /*Represents PDMA_AHB_evt_in_done_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_done_ch3_st   :    1;  /*Represents PDMA_AHB_evt_in_done_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_done_ch4_st   :    1;  /*Represents PDMA_AHB_evt_in_done_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_suc_eof_st    :    1;  /*Represents PDMA_AHB_evt_in_suc_eof_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_suc_eof_ch1_st:    1;  /*Represents PDMA_AHB_evt_in_suc_eof_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_suc_eof_ch2_st:    1;  /*Represents PDMA_AHB_evt_in_suc_eof_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_suc_eof_ch3_st:    1;  /*Represents PDMA_AHB_evt_in_suc_eof_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_suc_eof_ch4_st:    1;  /*Represents PDMA_AHB_evt_in_suc_eof_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_empty_st :    1;  /*Represents PDMA_AHB_evt_in_fifo_empty_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_empty_ch1_st:    1;  /*Represents PDMA_AHB_evt_in_fifo_empty_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_empty_ch2_st:    1;  /*Represents PDMA_AHB_evt_in_fifo_empty_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_empty_ch3_st:    1;  /*Represents PDMA_AHB_evt_in_fifo_empty_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_empty_ch4_st:    1;  /*Represents PDMA_AHB_evt_in_fifo_empty_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_full_st  :    1;  /*Represents PDMA_AHB_evt_in_fifo_full_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_full_ch1_st:    1;  /*Represents PDMA_AHB_evt_in_fifo_full_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_full_ch2_st:    1;  /*Represents PDMA_AHB_evt_in_fifo_full_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_full_ch3_st:    1;  /*Represents PDMA_AHB_evt_in_fifo_full_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_in_fifo_full_ch4_st:    1;  /*Represents PDMA_AHB_evt_in_fifo_full_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_done_st      :    1;  /*Represents PDMA_AHB_evt_out_done_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_done_ch1_st  :    1;  /*Represents PDMA_AHB_evt_out_done_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_done_ch2_st  :    1;  /*Represents PDMA_AHB_evt_out_done_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_done_ch3_st  :    1;  /*Represents PDMA_AHB_evt_out_done_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_done_ch4_st  :    1;  /*Represents PDMA_AHB_evt_out_done_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } evt_st6;
    union {
        struct {
            uint32_t i2s1_evt_tx_done_st_clr       :    1;  /*Configures whether or not to clear I2S1_evt_tx_done trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s1_evt_x_words_received_st_clr:    1;  /*Configures whether or not to clear I2S1_evt_x_words_received trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s1_evt_x_words_sent_st_clr  :    1;  /*Configures whether or not to clear I2S1_evt_x_words_sent trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s2_evt_rx_done_st_clr       :    1;  /*Configures whether or not to clear I2S2_evt_rx_done trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s2_evt_tx_done_st_clr       :    1;  /*Configures whether or not to clear I2S2_evt_tx_done trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s2_evt_x_words_received_st_clr:    1;  /*Configures whether or not to clear I2S2_evt_x_words_received trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s2_evt_x_words_sent_st_clr  :    1;  /*Configures whether or not to clear I2S2_evt_x_words_sent trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_done_st_clr   :    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_done_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_done_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_done_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_done_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_done_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_done_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_done_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_done_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_done_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_suc_eof_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_suc_eof_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_suc_eof_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_suc_eof_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_suc_eof_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_suc_eof_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_suc_eof_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_suc_eof_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_suc_eof_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_suc_eof_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_empty_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_empty_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_empty_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_empty_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_empty_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_empty_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_empty_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_empty_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_empty_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_empty_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_full_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_full_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_full_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_full_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_full_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_full_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_full_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_full_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_in_fifo_full_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_in_fifo_full_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_done_st_clr  :    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_done_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_done_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_done_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_done_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_done_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_done_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_done_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_done_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_done_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } evt_st6_clr;
    union {
        struct {
            uint32_t pdma_ahb_evt_out_eof_st       :    1;  /*Represents PDMA_AHB_evt_out_eof_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_eof_ch1_st   :    1;  /*Represents PDMA_AHB_evt_out_eof_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_eof_ch2_st   :    1;  /*Represents PDMA_AHB_evt_out_eof_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_eof_ch3_st   :    1;  /*Represents PDMA_AHB_evt_out_eof_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_eof_ch4_st   :    1;  /*Represents PDMA_AHB_evt_out_eof_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_total_eof_st :    1;  /*Represents PDMA_AHB_evt_out_total_eof_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_total_eof_ch1_st:    1;  /*Represents PDMA_AHB_evt_out_total_eof_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_total_eof_ch2_st:    1;  /*Represents PDMA_AHB_evt_out_total_eof_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_total_eof_ch3_st:    1;  /*Represents PDMA_AHB_evt_out_total_eof_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_total_eof_ch4_st:    1;  /*Represents PDMA_AHB_evt_out_total_eof_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_empty_st:    1;  /*Represents PDMA_AHB_evt_out_fifo_empty_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_empty_ch1_st:    1;  /*Represents PDMA_AHB_evt_out_fifo_empty_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_empty_ch2_st:    1;  /*Represents PDMA_AHB_evt_out_fifo_empty_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_empty_ch3_st:    1;  /*Represents PDMA_AHB_evt_out_fifo_empty_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_empty_ch4_st:    1;  /*Represents PDMA_AHB_evt_out_fifo_empty_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_full_st :    1;  /*Represents PDMA_AHB_evt_out_fifo_full_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_full_ch1_st:    1;  /*Represents PDMA_AHB_evt_out_fifo_full_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_full_ch2_st:    1;  /*Represents PDMA_AHB_evt_out_fifo_full_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_full_ch3_st:    1;  /*Represents PDMA_AHB_evt_out_fifo_full_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_evt_out_fifo_full_ch4_st:    1;  /*Represents PDMA_AHB_evt_out_fifo_full_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_done_st       :    1;  /*Represents PDMA_AXI_evt_in_done_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_done_ch1_st   :    1;  /*Represents PDMA_AXI_evt_in_done_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_done_ch2_st   :    1;  /*Represents PDMA_AXI_evt_in_done_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_suc_eof_st    :    1;  /*Represents PDMA_AXI_evt_in_suc_eof_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_suc_eof_ch1_st:    1;  /*Represents PDMA_AXI_evt_in_suc_eof_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_suc_eof_ch2_st:    1;  /*Represents PDMA_AXI_evt_in_suc_eof_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_fifo_empty_st :    1;  /*Represents PDMA_AXI_evt_in_fifo_empty_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_fifo_empty_ch1_st:    1;  /*Represents PDMA_AXI_evt_in_fifo_empty_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_fifo_empty_ch2_st:    1;  /*Represents PDMA_AXI_evt_in_fifo_empty_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_fifo_full_st  :    1;  /*Represents PDMA_AXI_evt_in_fifo_full_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_fifo_full_ch1_st:    1;  /*Represents PDMA_AXI_evt_in_fifo_full_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_in_fifo_full_ch2_st:    1;  /*Represents PDMA_AXI_evt_in_fifo_full_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } evt_st7;
    union {
        struct {
            uint32_t pdma_ahb_evt_out_eof_st_clr   :    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_eof_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_eof_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_eof_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_eof_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_eof_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_eof_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_eof_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_eof_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_eof_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_total_eof_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_total_eof_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_total_eof_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_total_eof_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_total_eof_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_total_eof_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_total_eof_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_total_eof_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_total_eof_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_total_eof_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_empty_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_empty_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_empty_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_empty_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_empty_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_empty_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_empty_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_empty_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_empty_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_empty_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_full_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_full_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_full_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_full_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_full_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_full_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_full_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_full_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_evt_out_fifo_full_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_evt_out_fifo_full_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_done_st_clr   :    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_done_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_done_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_done_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_done_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_done_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_suc_eof_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_suc_eof_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_suc_eof_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_suc_eof_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_suc_eof_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_suc_eof_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_fifo_empty_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_fifo_empty_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_fifo_empty_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_fifo_empty_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_fifo_empty_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_fifo_empty_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_fifo_full_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_fifo_full_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_fifo_full_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_fifo_full_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_in_fifo_full_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_in_fifo_full_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } evt_st7_clr;
    union {
        struct {
            uint32_t pdma_axi_evt_out_done_st      :    1;  /*Represents PDMA_AXI_evt_out_done_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_done_ch1_st  :    1;  /*Represents PDMA_AXI_evt_out_done_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_done_ch2_st  :    1;  /*Represents PDMA_AXI_evt_out_done_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_eof_st       :    1;  /*Represents PDMA_AXI_evt_out_eof_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_eof_ch1_st   :    1;  /*Represents PDMA_AXI_evt_out_eof_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_eof_ch2_st   :    1;  /*Represents PDMA_AXI_evt_out_eof_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_total_eof_st :    1;  /*Represents PDMA_AXI_evt_out_total_eof_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_total_eof_ch1_st:    1;  /*Represents PDMA_AXI_evt_out_total_eof_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_total_eof_ch2_st:    1;  /*Represents PDMA_AXI_evt_out_total_eof_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_fifo_empty_st:    1;  /*Represents PDMA_AXI_evt_out_fifo_empty_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_fifo_empty_ch1_st:    1;  /*Represents PDMA_AXI_evt_out_fifo_empty_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_fifo_empty_ch2_st:    1;  /*Represents PDMA_AXI_evt_out_fifo_empty_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_fifo_full_st :    1;  /*Represents PDMA_AXI_evt_out_fifo_full_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_fifo_full_ch1_st:    1;  /*Represents PDMA_AXI_evt_out_fifo_full_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_evt_out_fifo_full_ch2_st:    1;  /*Represents PDMA_AXI_evt_out_fifo_full_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_in_done_st          :    1;  /*Represents DMA2D_evt_in_done_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_in_done_ch1_st      :    1;  /*Represents DMA2D_evt_in_done_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_in_done_ch2_st      :    1;  /*Represents DMA2D_evt_in_done_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_in_suc_eof_st       :    1;  /*Represents DMA2D_evt_in_suc_eof_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_in_suc_eof_ch1_st   :    1;  /*Represents DMA2D_evt_in_suc_eof_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_in_suc_eof_ch2_st   :    1;  /*Represents DMA2D_evt_in_suc_eof_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_done_st         :    1;  /*Represents DMA2D_evt_out_done_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_done_ch1_st     :    1;  /*Represents DMA2D_evt_out_done_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_done_ch2_st     :    1;  /*Represents DMA2D_evt_out_done_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_done_ch3_st     :    1;  /*Represents DMA2D_evt_out_done_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_eof_st          :    1;  /*Represents DMA2D_evt_out_eof_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_eof_ch1_st      :    1;  /*Represents DMA2D_evt_out_eof_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_eof_ch2_st      :    1;  /*Represents DMA2D_evt_out_eof_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_eof_ch3_st      :    1;  /*Represents DMA2D_evt_out_eof_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_total_eof_st    :    1;  /*Represents DMA2D_evt_out_total_eof_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_total_eof_ch1_st:    1;  /*Represents DMA2D_evt_out_total_eof_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_evt_out_total_eof_ch2_st:    1;  /*Represents DMA2D_evt_out_total_eof_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } evt_st8;
    union {
        struct {
            uint32_t pdma_axi_evt_out_done_st_clr  :    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_done_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_done_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_done_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_done_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_done_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_eof_st_clr   :    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_eof_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_eof_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_eof_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_eof_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_eof_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_total_eof_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_total_eof_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_total_eof_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_total_eof_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_total_eof_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_total_eof_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_fifo_empty_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_fifo_empty_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_fifo_empty_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_fifo_empty_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_fifo_empty_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_fifo_empty_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_fifo_full_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_fifo_full_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_fifo_full_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_fifo_full_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_evt_out_fifo_full_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_evt_out_fifo_full_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_in_done_st_clr      :    1;  /*Configures whether or not to clear DMA2D_evt_in_done_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_in_done_ch1_st_clr  :    1;  /*Configures whether or not to clear DMA2D_evt_in_done_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_in_done_ch2_st_clr  :    1;  /*Configures whether or not to clear DMA2D_evt_in_done_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_in_suc_eof_st_clr   :    1;  /*Configures whether or not to clear DMA2D_evt_in_suc_eof_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_in_suc_eof_ch1_st_clr:    1;  /*Configures whether or not to clear DMA2D_evt_in_suc_eof_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_in_suc_eof_ch2_st_clr:    1;  /*Configures whether or not to clear DMA2D_evt_in_suc_eof_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_done_st_clr     :    1;  /*Configures whether or not to clear DMA2D_evt_out_done_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_done_ch1_st_clr :    1;  /*Configures whether or not to clear DMA2D_evt_out_done_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_done_ch2_st_clr :    1;  /*Configures whether or not to clear DMA2D_evt_out_done_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_done_ch3_st_clr :    1;  /*Configures whether or not to clear DMA2D_evt_out_done_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_eof_st_clr      :    1;  /*Configures whether or not to clear DMA2D_evt_out_eof_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_eof_ch1_st_clr  :    1;  /*Configures whether or not to clear DMA2D_evt_out_eof_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_eof_ch2_st_clr  :    1;  /*Configures whether or not to clear DMA2D_evt_out_eof_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_eof_ch3_st_clr  :    1;  /*Configures whether or not to clear DMA2D_evt_out_eof_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_total_eof_st_clr:    1;  /*Configures whether or not to clear DMA2D_evt_out_total_eof_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_total_eof_ch1_st_clr:    1;  /*Configures whether or not to clear DMA2D_evt_out_total_eof_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_evt_out_total_eof_ch2_st_clr:    1;  /*Configures whether or not to clear DMA2D_evt_out_total_eof_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } evt_st8_clr;
    union {
        struct {
            uint32_t gpio_task_set_st              :    1;  /*Represents GPIO_task_ch0_set trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch1_set_st          :    1;  /*Represents GPIO_task_ch1_set trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch2_set_st          :    1;  /*Represents GPIO_task_ch2_set trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch3_set_st          :    1;  /*Represents GPIO_task_ch3_set trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch4_set_st          :    1;  /*Represents GPIO_task_ch4_set trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch5_set_st          :    1;  /*Represents GPIO_task_ch5_set trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch6_set_st          :    1;  /*Represents GPIO_task_ch6_set trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch7_set_st          :    1;  /*Represents GPIO_task_ch7_set trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_clear_st            :    1;  /*Represents GPIO_task_ch0_clear trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch1_clear_st        :    1;  /*Represents GPIO_task_ch1_clear trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch2_clear_st        :    1;  /*Represents GPIO_task_ch2_clear trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch3_clear_st        :    1;  /*Represents GPIO_task_ch3_clear trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch4_clear_st        :    1;  /*Represents GPIO_task_ch4_clear trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch5_clear_st        :    1;  /*Represents GPIO_task_ch5_clear trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch6_clear_st        :    1;  /*Represents GPIO_task_ch6_clear trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch7_clear_st        :    1;  /*Represents GPIO_task_ch7_clear trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_toggle_st           :    1;  /*Represents GPIO_task_ch0_toggle trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch1_toggle_st       :    1;  /*Represents GPIO_task_ch1_toggle trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch2_toggle_st       :    1;  /*Represents GPIO_task_ch2_toggle trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch3_toggle_st       :    1;  /*Represents GPIO_task_ch3_toggle trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch4_toggle_st       :    1;  /*Represents GPIO_task_ch4_toggle trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch5_toggle_st       :    1;  /*Represents GPIO_task_ch5_toggle trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch6_toggle_st       :    1;  /*Represents GPIO_task_ch6_toggle trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t gpio_task_ch7_toggle_st       :    1;  /*Represents GPIO_task_ch7_toggle trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer0_res_update_st:    1;  /*Represents LEDC0_task_timer0_res_update trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer1_res_update_st:    1;  /*Represents LEDC0_task_timer1_res_update trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer2_res_update_st:    1;  /*Represents LEDC0_task_timer2_res_update trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer3_res_update_st:    1;  /*Represents LEDC0_task_timer3_res_update trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_rsv0_st            :    1;  /*Represents LEDC0_task_rsv0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_rsv1_st            :    1;  /*Represents LEDC0_task_rsv1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_duty_scale_update_st:    1;  /*Represents LEDC0_task_duty_scale_update_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_duty_scale_update_ch1_st:    1;  /*Represents LEDC0_task_duty_scale_update_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } task_st0;
    union {
        struct {
            uint32_t gpio_task_set_st_clr          :    1;  /*Configures whether or not to clear GPIO_task_ch0_set trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch1_set_st_clr      :    1;  /*Configures whether or not to clear GPIO_task_ch1_set trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch2_set_st_clr      :    1;  /*Configures whether or not to clear GPIO_task_ch2_set trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch3_set_st_clr      :    1;  /*Configures whether or not to clear GPIO_task_ch3_set trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch4_set_st_clr      :    1;  /*Configures whether or not to clear GPIO_task_ch4_set trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch5_set_st_clr      :    1;  /*Configures whether or not to clear GPIO_task_ch5_set trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch6_set_st_clr      :    1;  /*Configures whether or not to clear GPIO_task_ch6_set trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch7_set_st_clr      :    1;  /*Configures whether or not to clear GPIO_task_ch7_set trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_clear_st_clr        :    1;  /*Configures whether or not to clear GPIO_task_ch0_clear trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch1_clear_st_clr    :    1;  /*Configures whether or not to clear GPIO_task_ch1_clear trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch2_clear_st_clr    :    1;  /*Configures whether or not to clear GPIO_task_ch2_clear trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch3_clear_st_clr    :    1;  /*Configures whether or not to clear GPIO_task_ch3_clear trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch4_clear_st_clr    :    1;  /*Configures whether or not to clear GPIO_task_ch4_clear trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch5_clear_st_clr    :    1;  /*Configures whether or not to clear GPIO_task_ch5_clear trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch6_clear_st_clr    :    1;  /*Configures whether or not to clear GPIO_task_ch6_clear trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch7_clear_st_clr    :    1;  /*Configures whether or not to clear GPIO_task_ch7_clear trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_toggle_st_clr       :    1;  /*Configures whether or not to clear GPIO_task_ch0_toggle trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch1_toggle_st_clr   :    1;  /*Configures whether or not to clear GPIO_task_ch1_toggle trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch2_toggle_st_clr   :    1;  /*Configures whether or not to clear GPIO_task_ch2_toggle trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch3_toggle_st_clr   :    1;  /*Configures whether or not to clear GPIO_task_ch3_toggle trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch4_toggle_st_clr   :    1;  /*Configures whether or not to clear GPIO_task_ch4_toggle trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch5_toggle_st_clr   :    1;  /*Configures whether or not to clear GPIO_task_ch5_toggle trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch6_toggle_st_clr   :    1;  /*Configures whether or not to clear GPIO_task_ch6_toggle trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t gpio_task_ch7_toggle_st_clr   :    1;  /*Configures whether or not to clear GPIO_task_ch7_toggle trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer0_res_update_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer0_res_update trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer1_res_update_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer1_res_update trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer2_res_update_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer2_res_update trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer3_res_update_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer3_res_update trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_rsv0_st_clr        :    1;  /*Configures whether or not to clear LEDC0_task_rsv0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_rsv1_st_clr        :    1;  /*Configures whether or not to clear LEDC0_task_rsv1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_duty_scale_update_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_duty_scale_update_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_duty_scale_update_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_duty_scale_update_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } task_st0_clr;
    union {
        struct {
            uint32_t ledc0_task_duty_scale_update_ch2_st:    1;  /*Represents LEDC0_task_duty_scale_update_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_duty_scale_update_ch3_st:    1;  /*Represents LEDC0_task_duty_scale_update_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_duty_scale_update_ch4_st:    1;  /*Represents LEDC0_task_duty_scale_update_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_duty_scale_update_ch5_st:    1;  /*Represents LEDC0_task_duty_scale_update_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_duty_scale_update_ch6_st:    1;  /*Represents LEDC0_task_duty_scale_update_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_duty_scale_update_ch7_st:    1;  /*Represents LEDC0_task_duty_scale_update_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer0_cap_st      :    1;  /*Represents LEDC0_task_timer0_cap trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer1_cap_st      :    1;  /*Represents LEDC0_task_timer1_cap trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer2_cap_st      :    1;  /*Represents LEDC0_task_timer2_cap trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer3_cap_st      :    1;  /*Represents LEDC0_task_timer3_cap trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_sig_out_dis_st     :    1;  /*Represents LEDC0_task_sig_out_dis_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_sig_out_dis_ch1_st :    1;  /*Represents LEDC0_task_sig_out_dis_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_sig_out_dis_ch2_st :    1;  /*Represents LEDC0_task_sig_out_dis_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_sig_out_dis_ch3_st :    1;  /*Represents LEDC0_task_sig_out_dis_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_sig_out_dis_ch4_st :    1;  /*Represents LEDC0_task_sig_out_dis_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_sig_out_dis_ch5_st :    1;  /*Represents LEDC0_task_sig_out_dis_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_sig_out_dis_ch6_st :    1;  /*Represents LEDC0_task_sig_out_dis_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_sig_out_dis_ch7_st :    1;  /*Represents LEDC0_task_sig_out_dis_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_ovf_cnt_rst_st     :    1;  /*Represents LEDC0_task_ovf_cnt_rst_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_ovf_cnt_rst_ch1_st :    1;  /*Represents LEDC0_task_ovf_cnt_rst_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_ovf_cnt_rst_ch2_st :    1;  /*Represents LEDC0_task_ovf_cnt_rst_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_ovf_cnt_rst_ch3_st :    1;  /*Represents LEDC0_task_ovf_cnt_rst_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_ovf_cnt_rst_ch4_st :    1;  /*Represents LEDC0_task_ovf_cnt_rst_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_ovf_cnt_rst_ch5_st :    1;  /*Represents LEDC0_task_ovf_cnt_rst_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_ovf_cnt_rst_ch6_st :    1;  /*Represents LEDC0_task_ovf_cnt_rst_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_ovf_cnt_rst_ch7_st :    1;  /*Represents LEDC0_task_ovf_cnt_rst_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer0_rst_st      :    1;  /*Represents LEDC0_task_timer0_rst trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer1_rst_st      :    1;  /*Represents LEDC0_task_timer1_rst trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer2_rst_st      :    1;  /*Represents LEDC0_task_timer2_rst trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer3_rst_st      :    1;  /*Represents LEDC0_task_timer3_rst trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer0_resume_st   :    1;  /*Represents LEDC0_task_timer0_resume trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer1_resume_st   :    1;  /*Represents LEDC0_task_timer1_resume trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } task_st1;
    union {
        struct {
            uint32_t ledc0_task_duty_scale_update_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_duty_scale_update_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_duty_scale_update_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_duty_scale_update_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_duty_scale_update_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_duty_scale_update_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_duty_scale_update_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_duty_scale_update_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_duty_scale_update_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_duty_scale_update_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_duty_scale_update_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_duty_scale_update_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer0_cap_st_clr  :    1;  /*Configures whether or not to clear LEDC0_task_timer0_cap trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer1_cap_st_clr  :    1;  /*Configures whether or not to clear LEDC0_task_timer1_cap trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer2_cap_st_clr  :    1;  /*Configures whether or not to clear LEDC0_task_timer2_cap trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer3_cap_st_clr  :    1;  /*Configures whether or not to clear LEDC0_task_timer3_cap trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_sig_out_dis_st_clr :    1;  /*Configures whether or not to clear LEDC0_task_sig_out_dis_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_sig_out_dis_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_sig_out_dis_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_sig_out_dis_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_sig_out_dis_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_sig_out_dis_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_sig_out_dis_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_sig_out_dis_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_sig_out_dis_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_sig_out_dis_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_sig_out_dis_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_sig_out_dis_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_sig_out_dis_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_sig_out_dis_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_sig_out_dis_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_ovf_cnt_rst_st_clr :    1;  /*Configures whether or not to clear LEDC0_task_ovf_cnt_rst_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_ovf_cnt_rst_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_ovf_cnt_rst_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_ovf_cnt_rst_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_ovf_cnt_rst_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_ovf_cnt_rst_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_ovf_cnt_rst_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_ovf_cnt_rst_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_ovf_cnt_rst_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_ovf_cnt_rst_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_ovf_cnt_rst_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_ovf_cnt_rst_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_ovf_cnt_rst_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_ovf_cnt_rst_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_ovf_cnt_rst_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer0_rst_st_clr  :    1;  /*Configures whether or not to clear LEDC0_task_timer0_rst trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer1_rst_st_clr  :    1;  /*Configures whether or not to clear LEDC0_task_timer1_rst trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer2_rst_st_clr  :    1;  /*Configures whether or not to clear LEDC0_task_timer2_rst trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer3_rst_st_clr  :    1;  /*Configures whether or not to clear LEDC0_task_timer3_rst trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer0_resume_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer0_resume trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer1_resume_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer1_resume trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } task_st1_clr;
    union {
        struct {
            uint32_t ledc0_task_timer2_resume_st   :    1;  /*Represents LEDC0_task_timer2_resume trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer3_resume_st   :    1;  /*Represents LEDC0_task_timer3_resume trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer0_pause_st    :    1;  /*Represents LEDC0_task_timer0_pause trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer1_pause_st    :    1;  /*Represents LEDC0_task_timer1_pause trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer2_pause_st    :    1;  /*Represents LEDC0_task_timer2_pause trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_timer3_pause_st    :    1;  /*Represents LEDC0_task_timer3_pause trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_restart_st   :    1;  /*Represents LEDC0_task_gamma_restart_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_restart_ch1_st:    1;  /*Represents LEDC0_task_gamma_restart_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_restart_ch2_st:    1;  /*Represents LEDC0_task_gamma_restart_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_restart_ch3_st:    1;  /*Represents LEDC0_task_gamma_restart_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_restart_ch4_st:    1;  /*Represents LEDC0_task_gamma_restart_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_restart_ch5_st:    1;  /*Represents LEDC0_task_gamma_restart_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_restart_ch6_st:    1;  /*Represents LEDC0_task_gamma_restart_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_restart_ch7_st:    1;  /*Represents LEDC0_task_gamma_restart_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_pause_st     :    1;  /*Represents LEDC0_task_gamma_pause_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_pause_ch1_st :    1;  /*Represents LEDC0_task_gamma_pause_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_pause_ch2_st :    1;  /*Represents LEDC0_task_gamma_pause_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_pause_ch3_st :    1;  /*Represents LEDC0_task_gamma_pause_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_pause_ch4_st :    1;  /*Represents LEDC0_task_gamma_pause_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_pause_ch5_st :    1;  /*Represents LEDC0_task_gamma_pause_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_pause_ch6_st :    1;  /*Represents LEDC0_task_gamma_pause_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_pause_ch7_st :    1;  /*Represents LEDC0_task_gamma_pause_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_resume_st    :    1;  /*Represents LEDC0_task_gamma_resume_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_resume_ch1_st:    1;  /*Represents LEDC0_task_gamma_resume_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_resume_ch2_st:    1;  /*Represents LEDC0_task_gamma_resume_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_resume_ch3_st:    1;  /*Represents LEDC0_task_gamma_resume_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_resume_ch4_st:    1;  /*Represents LEDC0_task_gamma_resume_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_resume_ch5_st:    1;  /*Represents LEDC0_task_gamma_resume_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_resume_ch6_st:    1;  /*Represents LEDC0_task_gamma_resume_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc0_task_gamma_resume_ch7_st:    1;  /*Represents LEDC0_task_gamma_resume_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer0_res_update_st:    1;  /*Represents LEDC1_task_timer0_res_update trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer1_res_update_st:    1;  /*Represents LEDC1_task_timer1_res_update trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } task_st2;
    union {
        struct {
            uint32_t ledc0_task_timer2_resume_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer2_resume trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer3_resume_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer3_resume trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer0_pause_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer0_pause trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer1_pause_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer1_pause trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer2_pause_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer2_pause trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_timer3_pause_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_timer3_pause trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_restart_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_restart_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_restart_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_restart_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_restart_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_restart_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_restart_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_restart_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_restart_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_restart_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_restart_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_restart_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_restart_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_restart_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_restart_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_restart_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_pause_st_clr :    1;  /*Configures whether or not to clear LEDC0_task_gamma_pause_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_pause_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_pause_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_pause_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_pause_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_pause_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_pause_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_pause_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_pause_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_pause_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_pause_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_pause_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_pause_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_pause_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_pause_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_resume_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_resume_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_resume_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_resume_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_resume_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_resume_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_resume_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_resume_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_resume_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_resume_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_resume_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_resume_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_resume_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_resume_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc0_task_gamma_resume_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC0_task_gamma_resume_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer0_res_update_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer0_res_update trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer1_res_update_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer1_res_update trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } task_st2_clr;
    union {
        struct {
            uint32_t ledc1_task_timer2_res_update_st:    1;  /*Represents LEDC1_task_timer2_res_update trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer3_res_update_st:    1;  /*Represents LEDC1_task_timer3_res_update trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_rsv0_st            :    1;  /*Represents LEDC1_task_rsv0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_rsv1_st            :    1;  /*Represents LEDC1_task_rsv1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_duty_scale_update_st:    1;  /*Represents LEDC1_task_duty_scale_update_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_duty_scale_update_ch1_st:    1;  /*Represents LEDC1_task_duty_scale_update_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_duty_scale_update_ch2_st:    1;  /*Represents LEDC1_task_duty_scale_update_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_duty_scale_update_ch3_st:    1;  /*Represents LEDC1_task_duty_scale_update_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_duty_scale_update_ch4_st:    1;  /*Represents LEDC1_task_duty_scale_update_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_duty_scale_update_ch5_st:    1;  /*Represents LEDC1_task_duty_scale_update_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_duty_scale_update_ch6_st:    1;  /*Represents LEDC1_task_duty_scale_update_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_duty_scale_update_ch7_st:    1;  /*Represents LEDC1_task_duty_scale_update_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer0_cap_st      :    1;  /*Represents LEDC1_task_timer0_cap trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer1_cap_st      :    1;  /*Represents LEDC1_task_timer1_cap trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer2_cap_st      :    1;  /*Represents LEDC1_task_timer2_cap trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer3_cap_st      :    1;  /*Represents LEDC1_task_timer3_cap trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_sig_out_dis_st     :    1;  /*Represents LEDC1_task_sig_out_dis_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_sig_out_dis_ch1_st :    1;  /*Represents LEDC1_task_sig_out_dis_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_sig_out_dis_ch2_st :    1;  /*Represents LEDC1_task_sig_out_dis_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_sig_out_dis_ch3_st :    1;  /*Represents LEDC1_task_sig_out_dis_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_sig_out_dis_ch4_st :    1;  /*Represents LEDC1_task_sig_out_dis_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_sig_out_dis_ch5_st :    1;  /*Represents LEDC1_task_sig_out_dis_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_sig_out_dis_ch6_st :    1;  /*Represents LEDC1_task_sig_out_dis_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_sig_out_dis_ch7_st :    1;  /*Represents LEDC1_task_sig_out_dis_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_ovf_cnt_rst_st     :    1;  /*Represents LEDC1_task_ovf_cnt_rst_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_ovf_cnt_rst_ch1_st :    1;  /*Represents LEDC1_task_ovf_cnt_rst_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_ovf_cnt_rst_ch2_st :    1;  /*Represents LEDC1_task_ovf_cnt_rst_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_ovf_cnt_rst_ch3_st :    1;  /*Represents LEDC1_task_ovf_cnt_rst_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_ovf_cnt_rst_ch4_st :    1;  /*Represents LEDC1_task_ovf_cnt_rst_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_ovf_cnt_rst_ch5_st :    1;  /*Represents LEDC1_task_ovf_cnt_rst_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_ovf_cnt_rst_ch6_st :    1;  /*Represents LEDC1_task_ovf_cnt_rst_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_ovf_cnt_rst_ch7_st :    1;  /*Represents LEDC1_task_ovf_cnt_rst_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } task_st3;
    union {
        struct {
            uint32_t ledc1_task_timer2_res_update_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer2_res_update trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer3_res_update_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer3_res_update trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_rsv0_st_clr        :    1;  /*Configures whether or not to clear LEDC1_task_rsv0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_rsv1_st_clr        :    1;  /*Configures whether or not to clear LEDC1_task_rsv1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_duty_scale_update_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_duty_scale_update_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_duty_scale_update_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_duty_scale_update_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_duty_scale_update_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_duty_scale_update_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_duty_scale_update_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_duty_scale_update_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_duty_scale_update_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_duty_scale_update_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_duty_scale_update_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_duty_scale_update_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_duty_scale_update_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_duty_scale_update_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_duty_scale_update_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_duty_scale_update_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer0_cap_st_clr  :    1;  /*Configures whether or not to clear LEDC1_task_timer0_cap trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer1_cap_st_clr  :    1;  /*Configures whether or not to clear LEDC1_task_timer1_cap trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer2_cap_st_clr  :    1;  /*Configures whether or not to clear LEDC1_task_timer2_cap trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer3_cap_st_clr  :    1;  /*Configures whether or not to clear LEDC1_task_timer3_cap trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_sig_out_dis_st_clr :    1;  /*Configures whether or not to clear LEDC1_task_sig_out_dis_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_sig_out_dis_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_sig_out_dis_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_sig_out_dis_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_sig_out_dis_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_sig_out_dis_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_sig_out_dis_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_sig_out_dis_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_sig_out_dis_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_sig_out_dis_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_sig_out_dis_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_sig_out_dis_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_sig_out_dis_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_sig_out_dis_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_sig_out_dis_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_ovf_cnt_rst_st_clr :    1;  /*Configures whether or not to clear LEDC1_task_ovf_cnt_rst_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_ovf_cnt_rst_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_ovf_cnt_rst_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_ovf_cnt_rst_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_ovf_cnt_rst_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_ovf_cnt_rst_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_ovf_cnt_rst_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_ovf_cnt_rst_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_ovf_cnt_rst_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_ovf_cnt_rst_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_ovf_cnt_rst_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_ovf_cnt_rst_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_ovf_cnt_rst_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_ovf_cnt_rst_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_ovf_cnt_rst_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } task_st3_clr;
    union {
        struct {
            uint32_t ledc1_task_timer0_rst_st      :    1;  /*Represents LEDC1_task_timer0_rst trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer1_rst_st      :    1;  /*Represents LEDC1_task_timer1_rst trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer2_rst_st      :    1;  /*Represents LEDC1_task_timer2_rst trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer3_rst_st      :    1;  /*Represents LEDC1_task_timer3_rst trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer0_resume_st   :    1;  /*Represents LEDC1_task_timer0_resume trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer1_resume_st   :    1;  /*Represents LEDC1_task_timer1_resume trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer2_resume_st   :    1;  /*Represents LEDC1_task_timer2_resume trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer3_resume_st   :    1;  /*Represents LEDC1_task_timer3_resume trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer0_pause_st    :    1;  /*Represents LEDC1_task_timer0_pause trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer1_pause_st    :    1;  /*Represents LEDC1_task_timer1_pause trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer2_pause_st    :    1;  /*Represents LEDC1_task_timer2_pause trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_timer3_pause_st    :    1;  /*Represents LEDC1_task_timer3_pause trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_restart_st   :    1;  /*Represents LEDC1_task_gamma_restart_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_restart_ch1_st:    1;  /*Represents LEDC1_task_gamma_restart_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_restart_ch2_st:    1;  /*Represents LEDC1_task_gamma_restart_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_restart_ch3_st:    1;  /*Represents LEDC1_task_gamma_restart_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_restart_ch4_st:    1;  /*Represents LEDC1_task_gamma_restart_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_restart_ch5_st:    1;  /*Represents LEDC1_task_gamma_restart_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_restart_ch6_st:    1;  /*Represents LEDC1_task_gamma_restart_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_restart_ch7_st:    1;  /*Represents LEDC1_task_gamma_restart_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_pause_st     :    1;  /*Represents LEDC1_task_gamma_pause_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_pause_ch1_st :    1;  /*Represents LEDC1_task_gamma_pause_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_pause_ch2_st :    1;  /*Represents LEDC1_task_gamma_pause_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_pause_ch3_st :    1;  /*Represents LEDC1_task_gamma_pause_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_pause_ch4_st :    1;  /*Represents LEDC1_task_gamma_pause_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_pause_ch5_st :    1;  /*Represents LEDC1_task_gamma_pause_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_pause_ch6_st :    1;  /*Represents LEDC1_task_gamma_pause_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_pause_ch7_st :    1;  /*Represents LEDC1_task_gamma_pause_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_resume_st    :    1;  /*Represents LEDC1_task_gamma_resume_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_resume_ch1_st:    1;  /*Represents LEDC1_task_gamma_resume_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_resume_ch2_st:    1;  /*Represents LEDC1_task_gamma_resume_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_resume_ch3_st:    1;  /*Represents LEDC1_task_gamma_resume_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } task_st4;
    union {
        struct {
            uint32_t ledc1_task_timer0_rst_st_clr  :    1;  /*Configures whether or not to clear LEDC1_task_timer0_rst trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer1_rst_st_clr  :    1;  /*Configures whether or not to clear LEDC1_task_timer1_rst trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer2_rst_st_clr  :    1;  /*Configures whether or not to clear LEDC1_task_timer2_rst trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer3_rst_st_clr  :    1;  /*Configures whether or not to clear LEDC1_task_timer3_rst trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer0_resume_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer0_resume trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer1_resume_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer1_resume trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer2_resume_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer2_resume trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer3_resume_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer3_resume trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer0_pause_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer0_pause trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer1_pause_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer1_pause trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer2_pause_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer2_pause trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_timer3_pause_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_timer3_pause trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_restart_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_restart_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_restart_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_restart_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_restart_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_restart_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_restart_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_restart_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_restart_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_restart_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_restart_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_restart_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_restart_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_restart_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_restart_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_restart_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_pause_st_clr :    1;  /*Configures whether or not to clear LEDC1_task_gamma_pause_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_pause_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_pause_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_pause_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_pause_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_pause_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_pause_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_pause_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_pause_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_pause_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_pause_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_pause_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_pause_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_pause_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_pause_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_resume_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_resume_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_resume_ch1_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_resume_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_resume_ch2_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_resume_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_resume_ch3_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_resume_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } task_st4_clr;
    union {
        struct {
            uint32_t ledc1_task_gamma_resume_ch4_st:    1;  /*Represents LEDC1_task_gamma_resume_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_resume_ch5_st:    1;  /*Represents LEDC1_task_gamma_resume_ch5 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_resume_ch6_st:    1;  /*Represents LEDC1_task_gamma_resume_ch6 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t ledc1_task_gamma_resume_ch7_st:    1;  /*Represents LEDC1_task_gamma_resume_ch7 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_cnt_start_timer0_st  :    1;  /*Represents TG0_task_cnt_start_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_alarm_start_timer0_st:    1;  /*Represents TG0_task_alarm_start_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_cnt_stop_timer0_st   :    1;  /*Represents TG0_task_cnt_stop_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_cnt_reload_timer0_st :    1;  /*Represents TG0_task_cnt_reload_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_cnt_cap_timer0_st    :    1;  /*Represents TG0_task_cnt_cap_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_cnt_start_timer1_st  :    1;  /*Represents TG0_task_cnt_start_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_alarm_start_timer1_st:    1;  /*Represents TG0_task_alarm_start_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_cnt_stop_timer1_st   :    1;  /*Represents TG0_task_cnt_stop_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_cnt_reload_timer1_st :    1;  /*Represents TG0_task_cnt_reload_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg0_task_cnt_cap_timer1_st    :    1;  /*Represents TG0_task_cnt_cap_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_cnt_start_timer0_st  :    1;  /*Represents TG1_task_cnt_start_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_alarm_start_timer0_st:    1;  /*Represents TG1_task_alarm_start_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_cnt_stop_timer0_st   :    1;  /*Represents TG1_task_cnt_stop_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_cnt_reload_timer0_st :    1;  /*Represents TG1_task_cnt_reload_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_cnt_cap_timer0_st    :    1;  /*Represents TG1_task_cnt_cap_timer0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_cnt_start_timer1_st  :    1;  /*Represents TG1_task_cnt_start_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_alarm_start_timer1_st:    1;  /*Represents TG1_task_alarm_start_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_cnt_stop_timer1_st   :    1;  /*Represents TG1_task_cnt_stop_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_cnt_reload_timer1_st :    1;  /*Represents TG1_task_cnt_reload_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t tg1_task_cnt_cap_timer1_st    :    1;  /*Represents TG1_task_cnt_cap_timer1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_cmpr0_a_up_st     :    1;  /*Represents MCPWM0_task_cmpr0_a_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_cmpr1_a_up_st     :    1;  /*Represents MCPWM0_task_cmpr1_a_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_cmpr2_a_up_st     :    1;  /*Represents MCPWM0_task_cmpr2_a_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_cmpr0_b_up_st     :    1;  /*Represents MCPWM0_task_cmpr0_b_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_cmpr1_b_up_st     :    1;  /*Represents MCPWM0_task_cmpr1_b_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_cmpr2_b_up_st     :    1;  /*Represents MCPWM0_task_cmpr2_b_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_gen_stop_st       :    1;  /*Represents MCPWM0_task_gen_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_timer0_syn_st     :    1;  /*Represents MCPWM0_task_timer0_syn trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } task_st5;
    union {
        struct {
            uint32_t ledc1_task_gamma_resume_ch4_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_resume_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_resume_ch5_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_resume_ch5 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_resume_ch6_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_resume_ch6 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t ledc1_task_gamma_resume_ch7_st_clr:    1;  /*Configures whether or not to clear LEDC1_task_gamma_resume_ch7 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_cnt_start_timer0_st_clr:    1;  /*Configures whether or not to clear TG0_task_cnt_start_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_alarm_start_timer0_st_clr:    1;  /*Configures whether or not to clear TG0_task_alarm_start_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_cnt_stop_timer0_st_clr:    1;  /*Configures whether or not to clear TG0_task_cnt_stop_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_cnt_reload_timer0_st_clr:    1;  /*Configures whether or not to clear TG0_task_cnt_reload_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_cnt_cap_timer0_st_clr:    1;  /*Configures whether or not to clear TG0_task_cnt_cap_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_cnt_start_timer1_st_clr:    1;  /*Configures whether or not to clear TG0_task_cnt_start_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_alarm_start_timer1_st_clr:    1;  /*Configures whether or not to clear TG0_task_alarm_start_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_cnt_stop_timer1_st_clr:    1;  /*Configures whether or not to clear TG0_task_cnt_stop_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_cnt_reload_timer1_st_clr:    1;  /*Configures whether or not to clear TG0_task_cnt_reload_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg0_task_cnt_cap_timer1_st_clr:    1;  /*Configures whether or not to clear TG0_task_cnt_cap_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_cnt_start_timer0_st_clr:    1;  /*Configures whether or not to clear TG1_task_cnt_start_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_alarm_start_timer0_st_clr:    1;  /*Configures whether or not to clear TG1_task_alarm_start_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_cnt_stop_timer0_st_clr:    1;  /*Configures whether or not to clear TG1_task_cnt_stop_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_cnt_reload_timer0_st_clr:    1;  /*Configures whether or not to clear TG1_task_cnt_reload_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_cnt_cap_timer0_st_clr:    1;  /*Configures whether or not to clear TG1_task_cnt_cap_timer0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_cnt_start_timer1_st_clr:    1;  /*Configures whether or not to clear TG1_task_cnt_start_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_alarm_start_timer1_st_clr:    1;  /*Configures whether or not to clear TG1_task_alarm_start_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_cnt_stop_timer1_st_clr:    1;  /*Configures whether or not to clear TG1_task_cnt_stop_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_cnt_reload_timer1_st_clr:    1;  /*Configures whether or not to clear TG1_task_cnt_reload_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t tg1_task_cnt_cap_timer1_st_clr:    1;  /*Configures whether or not to clear TG1_task_cnt_cap_timer1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_cmpr0_a_up_st_clr :    1;  /*Configures whether or not to clear MCPWM0_task_cmpr0_a_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_cmpr1_a_up_st_clr :    1;  /*Configures whether or not to clear MCPWM0_task_cmpr1_a_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_cmpr2_a_up_st_clr :    1;  /*Configures whether or not to clear MCPWM0_task_cmpr2_a_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_cmpr0_b_up_st_clr :    1;  /*Configures whether or not to clear MCPWM0_task_cmpr0_b_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_cmpr1_b_up_st_clr :    1;  /*Configures whether or not to clear MCPWM0_task_cmpr1_b_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_cmpr2_b_up_st_clr :    1;  /*Configures whether or not to clear MCPWM0_task_cmpr2_b_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_gen_stop_st_clr   :    1;  /*Configures whether or not to clear MCPWM0_task_gen_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_timer0_syn_st_clr :    1;  /*Configures whether or not to clear MCPWM0_task_timer0_syn trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } task_st5_clr;
    union {
        struct {
            uint32_t mcpwm0_task_timer1_syn_st     :    1;  /*Represents MCPWM0_task_timer1_syn trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_timer2_syn_st     :    1;  /*Represents MCPWM0_task_timer2_syn trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_timer0_period_up_st:    1;  /*Represents MCPWM0_task_timer0_period_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_timer1_period_up_st:    1;  /*Represents MCPWM0_task_timer1_period_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_timer2_period_up_st:    1;  /*Represents MCPWM0_task_timer2_period_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_tz0_ost_st        :    1;  /*Represents MCPWM0_task_tz0_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_tz1_ost_st        :    1;  /*Represents MCPWM0_task_tz1_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_tz2_ost_st        :    1;  /*Represents MCPWM0_task_tz2_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_clr0_ost_st       :    1;  /*Represents MCPWM0_task_clr0_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_clr1_ost_st       :    1;  /*Represents MCPWM0_task_clr1_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_clr2_ost_st       :    1;  /*Represents MCPWM0_task_clr2_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_cap0_st           :    1;  /*Represents MCPWM0_task_cap0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_cap1_st           :    1;  /*Represents MCPWM0_task_cap1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm0_task_cap2_st           :    1;  /*Represents MCPWM0_task_cap2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_cmpr0_a_up_st     :    1;  /*Represents MCPWM1_task_cmpr0_a_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_cmpr1_a_up_st     :    1;  /*Represents MCPWM1_task_cmpr1_a_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_cmpr2_a_up_st     :    1;  /*Represents MCPWM1_task_cmpr2_a_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_cmpr0_b_up_st     :    1;  /*Represents MCPWM1_task_cmpr0_b_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_cmpr1_b_up_st     :    1;  /*Represents MCPWM1_task_cmpr1_b_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_cmpr2_b_up_st     :    1;  /*Represents MCPWM1_task_cmpr2_b_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_gen_stop_st       :    1;  /*Represents MCPWM1_task_gen_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_timer0_syn_st     :    1;  /*Represents MCPWM1_task_timer0_syn trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_timer1_syn_st     :    1;  /*Represents MCPWM1_task_timer1_syn trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_timer2_syn_st     :    1;  /*Represents MCPWM1_task_timer2_syn trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_timer0_period_up_st:    1;  /*Represents MCPWM1_task_timer0_period_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_timer1_period_up_st:    1;  /*Represents MCPWM1_task_timer1_period_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_timer2_period_up_st:    1;  /*Represents MCPWM1_task_timer2_period_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_tz0_ost_st        :    1;  /*Represents MCPWM1_task_tz0_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_tz1_ost_st        :    1;  /*Represents MCPWM1_task_tz1_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_tz2_ost_st        :    1;  /*Represents MCPWM1_task_tz2_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_clr0_ost_st       :    1;  /*Represents MCPWM1_task_clr0_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_clr1_ost_st       :    1;  /*Represents MCPWM1_task_clr1_ost trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } task_st6;
    union {
        struct {
            uint32_t mcpwm0_task_timer1_syn_st_clr :    1;  /*Configures whether or not to clear MCPWM0_task_timer1_syn trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_timer2_syn_st_clr :    1;  /*Configures whether or not to clear MCPWM0_task_timer2_syn trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_timer0_period_up_st_clr:    1;  /*Configures whether or not to clear MCPWM0_task_timer0_period_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_timer1_period_up_st_clr:    1;  /*Configures whether or not to clear MCPWM0_task_timer1_period_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_timer2_period_up_st_clr:    1;  /*Configures whether or not to clear MCPWM0_task_timer2_period_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_tz0_ost_st_clr    :    1;  /*Configures whether or not to clear MCPWM0_task_tz0_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_tz1_ost_st_clr    :    1;  /*Configures whether or not to clear MCPWM0_task_tz1_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_tz2_ost_st_clr    :    1;  /*Configures whether or not to clear MCPWM0_task_tz2_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_clr0_ost_st_clr   :    1;  /*Configures whether or not to clear MCPWM0_task_clr0_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_clr1_ost_st_clr   :    1;  /*Configures whether or not to clear MCPWM0_task_clr1_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_clr2_ost_st_clr   :    1;  /*Configures whether or not to clear MCPWM0_task_clr2_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_cap0_st_clr       :    1;  /*Configures whether or not to clear MCPWM0_task_cap0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_cap1_st_clr       :    1;  /*Configures whether or not to clear MCPWM0_task_cap1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm0_task_cap2_st_clr       :    1;  /*Configures whether or not to clear MCPWM0_task_cap2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_cmpr0_a_up_st_clr :    1;  /*Configures whether or not to clear MCPWM1_task_cmpr0_a_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_cmpr1_a_up_st_clr :    1;  /*Configures whether or not to clear MCPWM1_task_cmpr1_a_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_cmpr2_a_up_st_clr :    1;  /*Configures whether or not to clear MCPWM1_task_cmpr2_a_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_cmpr0_b_up_st_clr :    1;  /*Configures whether or not to clear MCPWM1_task_cmpr0_b_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_cmpr1_b_up_st_clr :    1;  /*Configures whether or not to clear MCPWM1_task_cmpr1_b_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_cmpr2_b_up_st_clr :    1;  /*Configures whether or not to clear MCPWM1_task_cmpr2_b_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_gen_stop_st_clr   :    1;  /*Configures whether or not to clear MCPWM1_task_gen_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_timer0_syn_st_clr :    1;  /*Configures whether or not to clear MCPWM1_task_timer0_syn trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_timer1_syn_st_clr :    1;  /*Configures whether or not to clear MCPWM1_task_timer1_syn trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_timer2_syn_st_clr :    1;  /*Configures whether or not to clear MCPWM1_task_timer2_syn trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_timer0_period_up_st_clr:    1;  /*Configures whether or not to clear MCPWM1_task_timer0_period_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_timer1_period_up_st_clr:    1;  /*Configures whether or not to clear MCPWM1_task_timer1_period_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_timer2_period_up_st_clr:    1;  /*Configures whether or not to clear MCPWM1_task_timer2_period_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_tz0_ost_st_clr    :    1;  /*Configures whether or not to clear MCPWM1_task_tz0_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_tz1_ost_st_clr    :    1;  /*Configures whether or not to clear MCPWM1_task_tz1_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_tz2_ost_st_clr    :    1;  /*Configures whether or not to clear MCPWM1_task_tz2_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_clr0_ost_st_clr   :    1;  /*Configures whether or not to clear MCPWM1_task_clr0_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_clr1_ost_st_clr   :    1;  /*Configures whether or not to clear MCPWM1_task_clr1_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } task_st6_clr;
    union {
        struct {
            uint32_t mcpwm1_task_clr2_ost_st       :    1;  /*Represents MCPWM1_task_clr2_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_cap0_st           :    1;  /*Represents MCPWM1_task_cap0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_cap1_st           :    1;  /*Represents MCPWM1_task_cap1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm1_task_cap2_st           :    1;  /*Represents MCPWM1_task_cap2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_cmpr0_a_up_st     :    1;  /*Represents MCPWM2_task_cmpr0_a_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_cmpr1_a_up_st     :    1;  /*Represents MCPWM2_task_cmpr1_a_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_cmpr2_a_up_st     :    1;  /*Represents MCPWM2_task_cmpr2_a_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_cmpr0_b_up_st     :    1;  /*Represents MCPWM2_task_cmpr0_b_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_cmpr1_b_up_st     :    1;  /*Represents MCPWM2_task_cmpr1_b_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_cmpr2_b_up_st     :    1;  /*Represents MCPWM2_task_cmpr2_b_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_gen_stop_st       :    1;  /*Represents MCPWM2_task_gen_stop trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_timer0_syn_st     :    1;  /*Represents MCPWM2_task_timer0_syn trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_timer1_syn_st     :    1;  /*Represents MCPWM2_task_timer1_syn trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_timer2_syn_st     :    1;  /*Represents MCPWM2_task_timer2_syn trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_timer0_period_up_st:    1;  /*Represents MCPWM2_task_timer0_period_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_timer1_period_up_st:    1;  /*Represents MCPWM2_task_timer1_period_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_timer2_period_up_st:    1;  /*Represents MCPWM2_task_timer2_period_up trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_tz0_ost_st        :    1;  /*Represents MCPWM2_task_tz0_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_tz1_ost_st        :    1;  /*Represents MCPWM2_task_tz1_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_tz2_ost_st        :    1;  /*Represents MCPWM2_task_tz2_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_clr0_ost_st       :    1;  /*Represents MCPWM2_task_clr0_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_clr1_ost_st       :    1;  /*Represents MCPWM2_task_clr1_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_clr2_ost_st       :    1;  /*Represents MCPWM2_task_clr2_ost trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_cap0_st           :    1;  /*Represents MCPWM2_task_cap0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_cap1_st           :    1;  /*Represents MCPWM2_task_cap1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t mcpwm2_task_cap2_st           :    1;  /*Represents MCPWM2_task_cap2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s0_task_start_rx_st         :    1;  /*Represents I2S0_task_start_rx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s0_task_start_tx_st         :    1;  /*Represents I2S0_task_start_tx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s0_task_stop_rx_st          :    1;  /*Represents I2S0_task_stop_rx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s0_task_stop_tx_st          :    1;  /*Represents I2S0_task_stop_tx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s0_task_sync_check_st       :    1;  /*Represents I2S0_task_sync_check trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s1_task_start_rx_st         :    1;  /*Represents I2S1_task_start_rx trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } task_st7;
    union {
        struct {
            uint32_t mcpwm1_task_clr2_ost_st_clr   :    1;  /*Configures whether or not to clear MCPWM1_task_clr2_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_cap0_st_clr       :    1;  /*Configures whether or not to clear MCPWM1_task_cap0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_cap1_st_clr       :    1;  /*Configures whether or not to clear MCPWM1_task_cap1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm1_task_cap2_st_clr       :    1;  /*Configures whether or not to clear MCPWM1_task_cap2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_cmpr0_a_up_st_clr :    1;  /*Configures whether or not to clear MCPWM2_task_cmpr0_a_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_cmpr1_a_up_st_clr :    1;  /*Configures whether or not to clear MCPWM2_task_cmpr1_a_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_cmpr2_a_up_st_clr :    1;  /*Configures whether or not to clear MCPWM2_task_cmpr2_a_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_cmpr0_b_up_st_clr :    1;  /*Configures whether or not to clear MCPWM2_task_cmpr0_b_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_cmpr1_b_up_st_clr :    1;  /*Configures whether or not to clear MCPWM2_task_cmpr1_b_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_cmpr2_b_up_st_clr :    1;  /*Configures whether or not to clear MCPWM2_task_cmpr2_b_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_gen_stop_st_clr   :    1;  /*Configures whether or not to clear MCPWM2_task_gen_stop trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_timer0_syn_st_clr :    1;  /*Configures whether or not to clear MCPWM2_task_timer0_syn trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_timer1_syn_st_clr :    1;  /*Configures whether or not to clear MCPWM2_task_timer1_syn trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_timer2_syn_st_clr :    1;  /*Configures whether or not to clear MCPWM2_task_timer2_syn trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_timer0_period_up_st_clr:    1;  /*Configures whether or not to clear MCPWM2_task_timer0_period_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_timer1_period_up_st_clr:    1;  /*Configures whether or not to clear MCPWM2_task_timer1_period_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_timer2_period_up_st_clr:    1;  /*Configures whether or not to clear MCPWM2_task_timer2_period_up trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_tz0_ost_st_clr    :    1;  /*Configures whether or not to clear MCPWM2_task_tz0_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_tz1_ost_st_clr    :    1;  /*Configures whether or not to clear MCPWM2_task_tz1_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_tz2_ost_st_clr    :    1;  /*Configures whether or not to clear MCPWM2_task_tz2_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_clr0_ost_st_clr   :    1;  /*Configures whether or not to clear MCPWM2_task_clr0_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_clr1_ost_st_clr   :    1;  /*Configures whether or not to clear MCPWM2_task_clr1_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_clr2_ost_st_clr   :    1;  /*Configures whether or not to clear MCPWM2_task_clr2_ost trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_cap0_st_clr       :    1;  /*Configures whether or not to clear MCPWM2_task_cap0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_cap1_st_clr       :    1;  /*Configures whether or not to clear MCPWM2_task_cap1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t mcpwm2_task_cap2_st_clr       :    1;  /*Configures whether or not to clear MCPWM2_task_cap2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s0_task_start_rx_st_clr     :    1;  /*Configures whether or not to clear I2S0_task_start_rx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s0_task_start_tx_st_clr     :    1;  /*Configures whether or not to clear I2S0_task_start_tx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s0_task_stop_rx_st_clr      :    1;  /*Configures whether or not to clear I2S0_task_stop_rx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s0_task_stop_tx_st_clr      :    1;  /*Configures whether or not to clear I2S0_task_stop_tx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s0_task_sync_check_st_clr   :    1;  /*Configures whether or not to clear I2S0_task_sync_check trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s1_task_start_rx_st_clr     :    1;  /*Configures whether or not to clear I2S1_task_start_rx trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } task_st7_clr;
    union {
        struct {
            uint32_t i2s1_task_start_tx_st         :    1;  /*Represents I2S1_task_start_tx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s1_task_stop_rx_st          :    1;  /*Represents I2S1_task_stop_rx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s1_task_stop_tx_st          :    1;  /*Represents I2S1_task_stop_tx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s1_task_sync_check_st       :    1;  /*Represents I2S1_task_sync_check trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s2_task_start_rx_st         :    1;  /*Represents I2S2_task_start_rx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s2_task_start_tx_st         :    1;  /*Represents I2S2_task_start_tx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s2_task_stop_rx_st          :    1;  /*Represents I2S2_task_stop_rx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s2_task_stop_tx_st          :    1;  /*Represents I2S2_task_stop_tx trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t i2s2_task_sync_check_st       :    1;  /*Represents I2S2_task_sync_check trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_in_start_st     :    1;  /*Represents PDMA_AHB_task_in_start_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_in_start_ch1_st :    1;  /*Represents PDMA_AHB_task_in_start_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_in_start_ch2_st :    1;  /*Represents PDMA_AHB_task_in_start_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_in_start_ch3_st :    1;  /*Represents PDMA_AHB_task_in_start_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_in_start_ch4_st :    1;  /*Represents PDMA_AHB_task_in_start_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_out_start_st    :    1;  /*Represents PDMA_AHB_task_out_start_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_out_start_ch1_st:    1;  /*Represents PDMA_AHB_task_out_start_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_out_start_ch2_st:    1;  /*Represents PDMA_AHB_task_out_start_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_out_start_ch3_st:    1;  /*Represents PDMA_AHB_task_out_start_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_ahb_task_out_start_ch4_st:    1;  /*Represents PDMA_AHB_task_out_start_ch4 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_task_in_start_st     :    1;  /*Represents PDMA_AXI_task_in_start_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_task_in_start_ch1_st :    1;  /*Represents PDMA_AXI_task_in_start_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_task_in_start_ch2_st :    1;  /*Represents PDMA_AXI_task_in_start_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_task_out_start_st    :    1;  /*Represents PDMA_AXI_task_out_start_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_task_out_start_ch1_st:    1;  /*Represents PDMA_AXI_task_out_start_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t pdma_axi_task_out_start_ch2_st:    1;  /*Represents PDMA_AXI_task_out_start_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_in_start_st        :    1;  /*Represents DMA2D_task_in_start_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_in_start_ch1_st    :    1;  /*Represents DMA2D_task_in_start_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_in_start_ch2_st    :    1;  /*Represents DMA2D_task_in_start_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_in_dscr_ready_st   :    1;  /*Represents DMA2D_task_in_dscr_ready_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_in_dscr_ready_ch1_st:    1;  /*Represents DMA2D_task_in_dscr_ready_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_in_dscr_ready_ch2_st:    1;  /*Represents DMA2D_task_in_dscr_ready_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_out_start_st       :    1;  /*Represents DMA2D_task_out_start_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
        };
        uint32_t val;
    } task_st8;
    union {
        struct {
            uint32_t i2s1_task_start_tx_st_clr     :    1;  /*Configures whether or not to clear I2S1_task_start_tx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s1_task_stop_rx_st_clr      :    1;  /*Configures whether or not to clear I2S1_task_stop_rx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s1_task_stop_tx_st_clr      :    1;  /*Configures whether or not to clear I2S1_task_stop_tx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s1_task_sync_check_st_clr   :    1;  /*Configures whether or not to clear I2S1_task_sync_check trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s2_task_start_rx_st_clr     :    1;  /*Configures whether or not to clear I2S2_task_start_rx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s2_task_start_tx_st_clr     :    1;  /*Configures whether or not to clear I2S2_task_start_tx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s2_task_stop_rx_st_clr      :    1;  /*Configures whether or not to clear I2S2_task_stop_rx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s2_task_stop_tx_st_clr      :    1;  /*Configures whether or not to clear I2S2_task_stop_tx trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t i2s2_task_sync_check_st_clr   :    1;  /*Configures whether or not to clear I2S2_task_sync_check trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_in_start_st_clr :    1;  /*Configures whether or not to clear PDMA_AHB_task_in_start_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_in_start_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_task_in_start_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_in_start_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_task_in_start_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_in_start_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_task_in_start_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_in_start_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_task_in_start_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_out_start_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_task_out_start_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_out_start_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_task_out_start_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_out_start_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_task_out_start_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_out_start_ch3_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_task_out_start_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_ahb_task_out_start_ch4_st_clr:    1;  /*Configures whether or not to clear PDMA_AHB_task_out_start_ch4 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_task_in_start_st_clr :    1;  /*Configures whether or not to clear PDMA_AXI_task_in_start_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_task_in_start_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_task_in_start_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_task_in_start_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_task_in_start_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_task_out_start_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_task_out_start_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_task_out_start_ch1_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_task_out_start_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t pdma_axi_task_out_start_ch2_st_clr:    1;  /*Configures whether or not to clear PDMA_AXI_task_out_start_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_in_start_st_clr    :    1;  /*Configures whether or not to clear DMA2D_task_in_start_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_in_start_ch1_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_in_start_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_in_start_ch2_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_in_start_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_in_dscr_ready_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_in_dscr_ready_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_in_dscr_ready_ch1_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_in_dscr_ready_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_in_dscr_ready_ch2_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_in_dscr_ready_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_out_start_st_clr   :    1;  /*Configures whether or not to clear DMA2D_task_out_start_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
        };
        uint32_t val;
    } task_st8_clr;
    union {
        struct {
            uint32_t dma2d_task_out_start_ch1_st   :    1;  /*Represents DMA2D_task_out_start_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_out_start_ch2_st   :    1;  /*Represents DMA2D_task_out_start_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_out_start_ch3_st   :    1;  /*Represents DMA2D_task_out_start_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_out_dscr_ready_st  :    1;  /*Represents DMA2D_task_out_dscr_ready_ch0 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_out_dscr_ready_ch1_st:    1;  /*Represents DMA2D_task_out_dscr_ready_ch1 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_out_dscr_ready_ch2_st:    1;  /*Represents DMA2D_task_out_dscr_ready_ch2 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t dma2d_task_out_dscr_ready_ch3_st:    1;  /*Represents DMA2D_task_out_dscr_ready_ch3 trigger status.\\0: Not triggered\\1: Triggered*/
            uint32_t reserved7                     :    25;  /*reserved*/
        };
        uint32_t val;
    } task_st9;
    union {
        struct {
            uint32_t dma2d_task_out_start_ch1_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_out_start_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_out_start_ch2_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_out_start_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_out_start_ch3_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_out_start_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_out_dscr_ready_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_out_dscr_ready_ch0 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_out_dscr_ready_ch1_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_out_dscr_ready_ch1 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_out_dscr_ready_ch2_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_out_dscr_ready_ch2 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t dma2d_task_out_dscr_ready_ch3_st_clr:    1;  /*Configures whether or not to clear DMA2D_task_out_dscr_ready_ch3 trigger status.\\0: Invalid, No effect\\1: Clear*/
            uint32_t reserved7                     :    25;  /*reserved*/
        };
        uint32_t val;
    } task_st9_clr;
    union {
        struct {
            uint32_t clk_en                        :    1;  /*Configures whether or not to open register clock gate.\\0: Open the clock gate only when application writes registers\\1: Force open the clock gate for register*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } clk_en;
    union {
        struct {
            uint32_t date                          :    28;  /*Configures the version.*/
            uint32_t reserved28                    :    4;  /*reserved*/
        };
        uint32_t val;
    } date;
} soc_etm_dev_t;
extern soc_etm_dev_t SOC_ETM;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_SOC_ETM_STRUCT_H_ */
