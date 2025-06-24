/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_ANA_I2C_MST_STRUCT_H_
#define _SOC_ANA_I2C_MST_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t i2c0_ctrl                     :    25;  /*need des*/
            uint32_t i2c0_busy                     :    1;  /*need des*/
            uint32_t reserved26                    :    6;
        };
        uint32_t val;
    } i2c0_ctrl;
    union {
        struct {
            uint32_t i2c1_ctrl                     :    25;  /*need des*/
            uint32_t i2c1_busy                     :    1;  /*need des*/
            uint32_t reserved26                    :    6;
        };
        uint32_t val;
    } i2c1_ctrl;
    union {
        struct {
            uint32_t i2c0_conf                     :    24;  /*need des*/
            uint32_t i2c0_status                   :    8;  /*need des*/
        };
        uint32_t val;
    } i2c0_conf;
    union {
        struct {
            uint32_t i2c1_conf                     :    24;  /*need des*/
            uint32_t i2c1_status                   :    8;  /*need des*/
        };
        uint32_t val;
    } i2c1_conf;
    uint32_t i2c_burst_conf;
    union {
        struct {
            uint32_t i2c_mst_burst_done            :    1;  /*need des*/
            uint32_t i2c_mst0_burst_err_flag       :    1;  /*need des*/
            uint32_t i2c_mst1_burst_err_flag       :    1;  /*need des*/
            uint32_t reserved3                     :    17;  /*need des*/
            uint32_t i2c_mst_burst_timeout_cnt     :    12;  /*need des*/
        };
        uint32_t val;
    } i2c_burst_status;
    union {
        struct {
            uint32_t ana_conf0                     :    24;  /*need des*/
            uint32_t ana_status0                   :    8;  /*need des*/
        };
        uint32_t val;
    } ana_conf0;
    union {
        struct {
            uint32_t ana_conf1                     :    24;  /*need des*/
            uint32_t ana_status1                   :    8;  /*need des*/
        };
        uint32_t val;
    } ana_conf1;
    union {
        struct {
            uint32_t ana_conf2                     :    24;  /*need des*/
            uint32_t ana_status2                   :    8;  /*need des*/
        };
        uint32_t val;
    } ana_conf2;
    union {
        struct {
            uint32_t i2c0_scl_pulse_dur            :    6;  /*need des*/
            uint32_t i2c0_sda_side_guard           :    5;  /*need des*/
            uint32_t reserved11                    :    21;
        };
        uint32_t val;
    } i2c0_ctrl1;
    union {
        struct {
            uint32_t i2c1_scl_pulse_dur            :    6;  /*need des*/
            uint32_t i2c1_sda_side_guard           :    5;  /*need des*/
            uint32_t reserved11                    :    21;
        };
        uint32_t val;
    } i2c1_ctrl1;
    union {
        struct {
            uint32_t hw_i2c_scl_pulse_dur          :    6;  /*need des*/
            uint32_t hw_i2c_sda_side_guard         :    5;  /*need des*/
            uint32_t arbiter_dis                   :    1;  /*need des*/
            uint32_t reserved12                    :    20;
        };
        uint32_t val;
    } hw_i2c_ctrl;
    uint32_t nouse;
    union {
        struct {
            uint32_t clk_i2c_mst_sel_160m          :    1;  /*need des*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } clk160m;
    union {
        struct {
            uint32_t date                          :    28;  /*need des*/
            uint32_t i2c_mst_clk_en                :    1;  /*need des*/
            uint32_t reserved29                    :    3;  /*need des*/
        };
        uint32_t val;
    } date;
} ana_i2c_mst_dev_t;
extern ana_i2c_mst_dev_t ANA_I2C_MST;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_ANA_I2C_MST_STRUCT_H_ */
