/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_IOMUX_MSPI_PIN_STRUCT_H_
#define _SOC_IOMUX_MSPI_PIN_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t clk_en                        :    1;  /*1: auto clock gating on; 0: auto clock gating off*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } clk_en0;
    uint32_t reserved_4;
    uint32_t reserved_8;
    uint32_t reserved_c;
    uint32_t reserved_10;
    uint32_t reserved_14;
    uint32_t reserved_18;
    union {
        struct {
            uint32_t psram_d_st                    :    2;  /*psram d st*/
            uint32_t psram_d_hold_en               :    1;  /*psram d hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_d_sl                    :    1;  /*psram d sl*/
            uint32_t psram_d_ie                    :    1;  /*Reserved*/
            uint32_t psram_d_ps                    :    1;  /*psram d ps*/
            uint32_t psram_d_pe                    :    1;  /*psram d pe*/
            uint32_t psram_d_drv                   :    2;  /*psram d drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_d_hold                  :    1;  /*psram d hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_d_pin0;
    union {
        struct {
            uint32_t psram_q_st                    :    2;  /*psram q st*/
            uint32_t psram_q_hold_en               :    1;  /*psram q hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_q_sl                    :    1;  /*psram q sl*/
            uint32_t psram_q_ie                    :    1;  /*Reserved*/
            uint32_t psram_q_ps                    :    1;  /*psram q ps*/
            uint32_t psram_q_pe                    :    1;  /*psram q pe*/
            uint32_t psram_q_drv                   :    2;  /*psram q drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_q_hold                  :    1;  /*psram q hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_q_pin0;
    union {
        struct {
            uint32_t psram_wp_st                   :    2;  /*psram wp st*/
            uint32_t psram_wp_hold_en              :    1;  /*psram wp hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_wp_sl                   :    1;  /*psram wp sl*/
            uint32_t psram_wp_ie                   :    1;  /*Reserved*/
            uint32_t psram_wp_ps                   :    1;  /*psram wp ps*/
            uint32_t psram_wp_pe                   :    1;  /*psram wp pe*/
            uint32_t psram_wp_drv                  :    2;  /*psram wp drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_wp_hold                 :    1;  /*psram wp hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_wp_pin0;
    union {
        struct {
            uint32_t psram_hold_st                 :    2;  /*psram hold st*/
            uint32_t psram_hold_hold_en            :    1;  /*psram hold hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_hold_sl                 :    1;  /*psram hold sl*/
            uint32_t psram_hold_ie                 :    1;  /*Reserved*/
            uint32_t psram_hold_ps                 :    1;  /*psram hold ps*/
            uint32_t psram_hold_pe                 :    1;  /*psram hold pe*/
            uint32_t psram_hold_drv                :    2;  /*psram hold drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_hold_hold               :    1;  /*psram hold hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_hold_pin0;
    union {
        struct {
            uint32_t psram_dq4_st                  :    2;  /*psram dq4 st*/
            uint32_t psram_dq4_hold_en             :    1;  /*psram dq4 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq4_sl                  :    1;  /*psram dq4 sl*/
            uint32_t psram_dq4_ie                  :    1;  /*Reserved*/
            uint32_t psram_dq4_ps                  :    1;  /*psram dq4 ps*/
            uint32_t psram_dq4_pe                  :    1;  /*psram dq4 pe*/
            uint32_t psram_dq4_drv                 :    2;  /*psram dq4 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq4_hold                :    1;  /*psram dq4 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq4_pin0;
    union {
        struct {
            uint32_t psram_dq5_st                  :    2;  /*psram dq5 st*/
            uint32_t psram_dq5_hold_en             :    1;  /*psram dq5 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq5_sl                  :    1;  /*psram dq5 sl*/
            uint32_t psram_dq5_ie                  :    1;  /*Reserved*/
            uint32_t psram_dq5_ps                  :    1;  /*psram dq5 ps*/
            uint32_t psram_dq5_pe                  :    1;  /*psram dq5 pe*/
            uint32_t psram_dq5_drv                 :    2;  /*psram dq5 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq5_hold                :    1;  /*psram dq5 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq5_pin0;
    union {
        struct {
            uint32_t psram_dq6_st                  :    2;  /*psram dq6 st*/
            uint32_t psram_dq6_hold_en             :    1;  /*psram dq6 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq6_sl                  :    1;  /*psram dq6 sl*/
            uint32_t psram_dq6_ie                  :    1;  /*Reserved*/
            uint32_t psram_dq6_ps                  :    1;  /*psram dq6 ps*/
            uint32_t psram_dq6_pe                  :    1;  /*psram dq6 pe*/
            uint32_t psram_dq6_drv                 :    2;  /*psram dq6 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq6_hold                :    1;  /*psram dq6 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq6_pin0;
    union {
        struct {
            uint32_t psram_dq7_st                  :    2;  /*psram dq7 st*/
            uint32_t psram_dq7_hold_en             :    1;  /*psram dq7 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq7_sl                  :    1;  /*psram dq7 sl*/
            uint32_t psram_dq7_ie                  :    1;  /*Reserved*/
            uint32_t psram_dq7_ps                  :    1;  /*psram dq7 ps*/
            uint32_t psram_dq7_pe                  :    1;  /*psram dq7 pe*/
            uint32_t psram_dq7_drv                 :    2;  /*psram dq7 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq7_hold                :    1;  /*psram dq7 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq7_pin0;
    union {
        struct {
            uint32_t psram_dqs_0_st                :    2;  /*psram dqs 0 st*/
            uint32_t psram_dqs_0_hold_en           :    1;  /*psram dqs 0 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dqs_0_sl                :    1;  /*psram dqs 0 sl*/
            uint32_t psram_dqs_0_ie                :    1;  /*Reserved*/
            uint32_t psram_dqs_0_ps                :    1;  /*psram dqs 0 ps*/
            uint32_t psram_dqs_0_pe                :    1;  /*psram dqs 0 pe*/
            uint32_t psram_dqs_0_drv               :    2;  /*psram dqs 0 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dqs_0_hold              :    1;  /*psram dqs 0 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dqs_0_pin0;
    union {
        struct {
            uint32_t psram_ck_st                   :    2;  /*psram ck st*/
            uint32_t psram_ck_hold_en              :    1;  /*psram ck hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_ck_sl                   :    1;  /*psram ck sl*/
            uint32_t psram_ck_ie                   :    1;  /*Reserved*/
            uint32_t psram_ck_ps                   :    1;  /*psram ck ps*/
            uint32_t psram_ck_pe                   :    1;  /*psram ck pe*/
            uint32_t psram_ck_drv                  :    2;  /*psram ck drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_ck_hold                 :    1;  /*psram ck hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_ck_pin0;
    union {
        struct {
            uint32_t psram_cs_st                   :    2;  /*psram cs st*/
            uint32_t psram_cs_hold_en              :    1;  /*psram cs hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_cs_sl                   :    1;  /*psram cs sl*/
            uint32_t psram_cs_ie                   :    1;  /*Reserved*/
            uint32_t psram_cs_ps                   :    1;  /*psram cs ps*/
            uint32_t psram_cs_pe                   :    1;  /*psram cs pe*/
            uint32_t psram_cs_drv                  :    2;  /*psram cs drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_cs_hold                 :    1;  /*psram cs hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_cs_pin0;
    union {
        struct {
            uint32_t psram_dq8_st                  :    2;  /*psram dq8 st*/
            uint32_t psram_dq8_hold_en             :    1;  /*psram dq8 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq8_sl                  :    1;  /*psram dq8 sl*/
            uint32_t psram_dq8_ie                  :    1;  /*Reserved*/
            uint32_t psram_dq8_ps                  :    1;  /*psram dq8 ps*/
            uint32_t psram_dq8_pe                  :    1;  /*psram dq8 pe*/
            uint32_t psram_dq8_drv                 :    2;  /*psram dq8 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq8_hold                :    1;  /*psram dq8 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq8_pin0;
    union {
        struct {
            uint32_t psram_dq9_st                  :    2;  /*psram dq9 st*/
            uint32_t psram_dq9_hold_en             :    1;  /*psram dq9 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq9_sl                  :    1;  /*psram dq9 sl*/
            uint32_t psram_dq9_ie                  :    1;  /*Reserved*/
            uint32_t psram_dq9_ps                  :    1;  /*psram dq9 ps*/
            uint32_t psram_dq9_pe                  :    1;  /*psram dq9 pe*/
            uint32_t psram_dq9_drv                 :    2;  /*psram dq9 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq9_hold                :    1;  /*psram dq9 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq9_pin0;
    union {
        struct {
            uint32_t psram_dq10_st                 :    2;  /*psram dq10 st*/
            uint32_t psram_dq10_hold_en            :    1;  /*psram dq10 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq10_sl                 :    1;  /*psram dq10 sl*/
            uint32_t psram_dq10_ie                 :    1;  /*Reserved*/
            uint32_t psram_dq10_ps                 :    1;  /*psram dq10 ps*/
            uint32_t psram_dq10_pe                 :    1;  /*psram dq10 pe*/
            uint32_t psram_dq10_drv                :    2;  /*psram dq10 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq10_hold               :    1;  /*psram dq10 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq10_pin0;
    union {
        struct {
            uint32_t psram_dq11_st                 :    2;  /*psram dq11 st*/
            uint32_t psram_dq11_hold_en            :    1;  /*psram dq11 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq11_sl                 :    1;  /*psram dq11 sl*/
            uint32_t psram_dq11_ie                 :    1;  /*Reserved*/
            uint32_t psram_dq11_ps                 :    1;  /*psram dq11 ps*/
            uint32_t psram_dq11_pe                 :    1;  /*psram dq11 pe*/
            uint32_t psram_dq11_drv                :    2;  /*psram dq11 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq11_hold               :    1;  /*psram dq11 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq11_pin0;
    union {
        struct {
            uint32_t psram_dq12_st                 :    2;  /*psram dq12 st*/
            uint32_t psram_dq12_hold_en            :    1;  /*psram dq12 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq12_sl                 :    1;  /*psram dq12 sl*/
            uint32_t psram_dq12_ie                 :    1;  /*Reserved*/
            uint32_t psram_dq12_ps                 :    1;  /*psram dq12 ps*/
            uint32_t psram_dq12_pe                 :    1;  /*psram dq12 pe*/
            uint32_t psram_dq12_drv                :    2;  /*psram dq12 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq12_hold               :    1;  /*psram dq12 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq12_pin0;
    union {
        struct {
            uint32_t psram_dq13_st                 :    2;  /*psram dq13 st*/
            uint32_t psram_dq13_hold_en            :    1;  /*psram dq13 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq13_sl                 :    1;  /*psram dq13 sl*/
            uint32_t psram_dq13_ie                 :    1;  /*Reserved*/
            uint32_t psram_dq13_ps                 :    1;  /*psram dq13 ps*/
            uint32_t psram_dq13_pe                 :    1;  /*psram dq13 pe*/
            uint32_t psram_dq13_drv                :    2;  /*psram dq13 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq13_hold               :    1;  /*psram dq13 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq13_pin0;
    union {
        struct {
            uint32_t psram_dq14_st                 :    2;  /*psram dq14 st*/
            uint32_t psram_dq14_hold_en            :    1;  /*psram dq14 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq14_sl                 :    1;  /*psram dq14 sl*/
            uint32_t psram_dq14_ie                 :    1;  /*Reserved*/
            uint32_t psram_dq14_ps                 :    1;  /*psram dq14 ps*/
            uint32_t psram_dq14_pe                 :    1;  /*psram dq14 pe*/
            uint32_t psram_dq14_drv                :    2;  /*psram dq14 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq14_hold               :    1;  /*psram dq14 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq14_pin0;
    union {
        struct {
            uint32_t psram_dq15_st                 :    2;  /*psram dq15 st*/
            uint32_t psram_dq15_hold_en            :    1;  /*psram dq15 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dq15_sl                 :    1;  /*psram dq15 sl*/
            uint32_t psram_dq15_ie                 :    1;  /*Reserved*/
            uint32_t psram_dq15_ps                 :    1;  /*psram dq15 ps*/
            uint32_t psram_dq15_pe                 :    1;  /*psram dq15 pe*/
            uint32_t psram_dq15_drv                :    2;  /*psram dq15 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dq15_hold               :    1;  /*psram dq15 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dq15_pin0;
    union {
        struct {
            uint32_t psram_dqs_1_st                :    2;  /*psram dqs_1 st*/
            uint32_t psram_dqs_1_hold_en           :    1;  /*psram dqs_1 hold_en*/
            uint32_t reserved3                     :    5;
            uint32_t psram_dqs_1_sl                :    1;  /*psram dqs_1 sl*/
            uint32_t psram_dqs_1_ie                :    1;  /*Reserved*/
            uint32_t psram_dqs_1_ps                :    1;  /*psram dqs_1 ps*/
            uint32_t psram_dqs_1_pe                :    1;  /*psram dqs_1 pe*/
            uint32_t psram_dqs_1_drv               :    2;  /*psram dqs_1 drv*/
            uint32_t reserved14                    :    1;
            uint32_t psram_dqs_1_hold              :    1;  /*psram dqs_1 hold*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } psram_dqs_1_pin0;
} iomux_mspi_pin_dev_t;
extern iomux_mspi_pin_dev_t IOMUX_MSPI_PIN;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_IOMUX_MSPI_PIN_STRUCT_H_ */
