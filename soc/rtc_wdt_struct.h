/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_RTC_WDT_STRUCT_H_
#define _SOC_RTC_WDT_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t reg_wdt_chip_reset_width      :    8;  /*need_des*/
            uint32_t reg_wdt_chip_reset_en         :    1;  /*need_des*/
            uint32_t reg_wdt_pause_in_slp          :    1;  /*need_des*/
            uint32_t reg_wdt_appcpu_reset_en       :    1;  /*need_des*/
            uint32_t reg_wdt_procpu_reset_en       :    1;  /*need_des*/
            uint32_t reg_wdt_flashboot_mod_en      :    1;  /*need_des*/
            uint32_t reg_wdt_sys_reset_length      :    3;  /*need_des*/
            uint32_t reg_wdt_cpu_reset_length      :    3;  /*need_des*/
            uint32_t reg_wdt_stg3                  :    3;  /*need_des*/
            uint32_t reg_wdt_stg2                  :    3;  /*need_des*/
            uint32_t reg_wdt_stg1                  :    3;  /*need_des*/
            uint32_t reg_wdt_stg0                  :    3;  /*need_des*/
            uint32_t reg_wdt_en                    :    1;  /*need_des*/
        };
        uint32_t val;
    } config0;
    uint32_t config1;
    uint32_t config2;
    uint32_t config3;
    uint32_t config4;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*need_des*/
            uint32_t reg_feed                      :    1;  /*need_des*/
        };
        uint32_t val;
    } feed;
    uint32_t wprotect;
    union {
        struct {
            uint32_t reg_swd_reset_flag            :    1;  /*need_des*/
            uint32_t reserved1                     :    17;
            uint32_t reg_swd_auto_feed_en          :    1;  /*need_des*/
            uint32_t reg_swd_rst_flag_clr          :    1;  /*need_des*/
            uint32_t reg_swd_signal_width          :    10;  /*need_des*/
            uint32_t reg_swd_disable               :    1;  /*need_des*/
            uint32_t reg_swd_feed                  :    1;  /*need_des*/
        };
        uint32_t val;
    } swd_config;
    uint32_t swd_wprotect;
    union {
        struct {
            uint32_t reserved0                     :    30;
            uint32_t reg_lp_super_wdt_int_raw      :    1;  /*need_des*/
            uint32_t reg_lp_wdt_int_raw            :    1;  /*need_des*/
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t reserved0                     :    30;
            uint32_t reg_lp_super_wdt_int_st       :    1;  /*need_des*/
            uint32_t reg_lp_wdt_int_st             :    1;  /*need_des*/
        };
        uint32_t val;
    } int_st;
    union {
        struct {
            uint32_t reserved0                     :    30;
            uint32_t reg_lp_super_wdt_int_ena      :    1;  /*need_des*/
            uint32_t reg_lp_wdt_int_ena            :    1;  /*need_des*/
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t reserved0                     :    30;
            uint32_t reg_lp_super_wdt_int_clr      :    1;  /*need_des*/
            uint32_t reg_lp_wdt_int_clr            :    1;  /*need_des*/
        };
        uint32_t val;
    } int_clr;
    uint32_t reserved_34;
    uint32_t reserved_38;
    uint32_t reserved_3c;
    uint32_t reserved_40;
    uint32_t reserved_44;
    uint32_t reserved_48;
    uint32_t reserved_4c;
    uint32_t reserved_50;
    uint32_t reserved_54;
    uint32_t reserved_58;
    uint32_t reserved_5c;
    uint32_t reserved_60;
    uint32_t reserved_64;
    uint32_t reserved_68;
    uint32_t reserved_6c;
    uint32_t reserved_70;
    uint32_t reserved_74;
    uint32_t reserved_78;
    uint32_t reserved_7c;
    uint32_t reserved_80;
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
    uint32_t reserved_f8;
    uint32_t reserved_fc;
    uint32_t reserved_100;
    uint32_t reserved_104;
    uint32_t reserved_108;
    uint32_t reserved_10c;
    uint32_t reserved_110;
    uint32_t reserved_114;
    uint32_t reserved_118;
    uint32_t reserved_11c;
    uint32_t reserved_120;
    uint32_t reserved_124;
    uint32_t reserved_128;
    uint32_t reserved_12c;
    uint32_t reserved_130;
    uint32_t reserved_134;
    uint32_t reserved_138;
    uint32_t reserved_13c;
    uint32_t reserved_140;
    uint32_t reserved_144;
    uint32_t reserved_148;
    uint32_t reserved_14c;
    uint32_t reserved_150;
    uint32_t reserved_154;
    uint32_t reserved_158;
    uint32_t reserved_15c;
    uint32_t reserved_160;
    uint32_t reserved_164;
    uint32_t reserved_168;
    uint32_t reserved_16c;
    uint32_t reserved_170;
    uint32_t reserved_174;
    uint32_t reserved_178;
    uint32_t reserved_17c;
    uint32_t reserved_180;
    uint32_t reserved_184;
    uint32_t reserved_188;
    uint32_t reserved_18c;
    uint32_t reserved_190;
    uint32_t reserved_194;
    uint32_t reserved_198;
    uint32_t reserved_19c;
    uint32_t reserved_1a0;
    uint32_t reserved_1a4;
    uint32_t reserved_1a8;
    uint32_t reserved_1ac;
    uint32_t reserved_1b0;
    uint32_t reserved_1b4;
    uint32_t reserved_1b8;
    uint32_t reserved_1bc;
    uint32_t reserved_1c0;
    uint32_t reserved_1c4;
    uint32_t reserved_1c8;
    uint32_t reserved_1cc;
    uint32_t reserved_1d0;
    uint32_t reserved_1d4;
    uint32_t reserved_1d8;
    uint32_t reserved_1dc;
    uint32_t reserved_1e0;
    uint32_t reserved_1e4;
    uint32_t reserved_1e8;
    uint32_t reserved_1ec;
    uint32_t reserved_1f0;
    uint32_t reserved_1f4;
    uint32_t reserved_1f8;
    uint32_t reserved_1fc;
    uint32_t reserved_200;
    uint32_t reserved_204;
    uint32_t reserved_208;
    uint32_t reserved_20c;
    uint32_t reserved_210;
    uint32_t reserved_214;
    uint32_t reserved_218;
    uint32_t reserved_21c;
    uint32_t reserved_220;
    uint32_t reserved_224;
    uint32_t reserved_228;
    uint32_t reserved_22c;
    uint32_t reserved_230;
    uint32_t reserved_234;
    uint32_t reserved_238;
    uint32_t reserved_23c;
    uint32_t reserved_240;
    uint32_t reserved_244;
    uint32_t reserved_248;
    uint32_t reserved_24c;
    uint32_t reserved_250;
    uint32_t reserved_254;
    uint32_t reserved_258;
    uint32_t reserved_25c;
    uint32_t reserved_260;
    uint32_t reserved_264;
    uint32_t reserved_268;
    uint32_t reserved_26c;
    uint32_t reserved_270;
    uint32_t reserved_274;
    uint32_t reserved_278;
    uint32_t reserved_27c;
    uint32_t reserved_280;
    uint32_t reserved_284;
    uint32_t reserved_288;
    uint32_t reserved_28c;
    uint32_t reserved_290;
    uint32_t reserved_294;
    uint32_t reserved_298;
    uint32_t reserved_29c;
    uint32_t reserved_2a0;
    uint32_t reserved_2a4;
    uint32_t reserved_2a8;
    uint32_t reserved_2ac;
    uint32_t reserved_2b0;
    uint32_t reserved_2b4;
    uint32_t reserved_2b8;
    uint32_t reserved_2bc;
    uint32_t reserved_2c0;
    uint32_t reserved_2c4;
    uint32_t reserved_2c8;
    uint32_t reserved_2cc;
    uint32_t reserved_2d0;
    uint32_t reserved_2d4;
    uint32_t reserved_2d8;
    uint32_t reserved_2dc;
    uint32_t reserved_2e0;
    uint32_t reserved_2e4;
    uint32_t reserved_2e8;
    uint32_t reserved_2ec;
    uint32_t reserved_2f0;
    uint32_t reserved_2f4;
    uint32_t reserved_2f8;
    uint32_t reserved_2fc;
    uint32_t reserved_300;
    uint32_t reserved_304;
    uint32_t reserved_308;
    uint32_t reserved_30c;
    uint32_t reserved_310;
    uint32_t reserved_314;
    uint32_t reserved_318;
    uint32_t reserved_31c;
    uint32_t reserved_320;
    uint32_t reserved_324;
    uint32_t reserved_328;
    uint32_t reserved_32c;
    uint32_t reserved_330;
    uint32_t reserved_334;
    uint32_t reserved_338;
    uint32_t reserved_33c;
    uint32_t reserved_340;
    uint32_t reserved_344;
    uint32_t reserved_348;
    uint32_t reserved_34c;
    uint32_t reserved_350;
    uint32_t reserved_354;
    uint32_t reserved_358;
    uint32_t reserved_35c;
    uint32_t reserved_360;
    uint32_t reserved_364;
    uint32_t reserved_368;
    uint32_t reserved_36c;
    uint32_t reserved_370;
    uint32_t reserved_374;
    uint32_t reserved_378;
    uint32_t reserved_37c;
    uint32_t reserved_380;
    uint32_t reserved_384;
    uint32_t reserved_388;
    uint32_t reserved_38c;
    uint32_t reserved_390;
    uint32_t reserved_394;
    uint32_t reserved_398;
    uint32_t reserved_39c;
    uint32_t reserved_3a0;
    uint32_t reserved_3a4;
    uint32_t reserved_3a8;
    uint32_t reserved_3ac;
    uint32_t reserved_3b0;
    uint32_t reserved_3b4;
    uint32_t reserved_3b8;
    uint32_t reserved_3bc;
    uint32_t reserved_3c0;
    uint32_t reserved_3c4;
    uint32_t reserved_3c8;
    uint32_t reserved_3cc;
    uint32_t reserved_3d0;
    uint32_t reserved_3d4;
    uint32_t reserved_3d8;
    uint32_t reserved_3dc;
    uint32_t reserved_3e0;
    uint32_t reserved_3e4;
    uint32_t reserved_3e8;
    uint32_t reserved_3ec;
    uint32_t reserved_3f0;
    uint32_t reserved_3f4;
    uint32_t reserved_3f8;
    union {
        struct {
            uint32_t reg_lp_wdt_date               :    31;  /*need_des*/
            uint32_t reg_clk_en                    :    1;  /*need_des*/
        };
        uint32_t val;
    } date;
} rtc_wdt_dev_t;
extern rtc_wdt_dev_t RTC_WDT;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_RTC_WDT_STRUCT_H_ */
