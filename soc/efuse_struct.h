/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_EFUSE_STRUCT_H_
#define _SOC_EFUSE_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    uint32_t pgm_data0;
    uint32_t pgm_data1;
    uint32_t pgm_data2;
    uint32_t pgm_data3;
    uint32_t pgm_data4;
    uint32_t pgm_data5;
    uint32_t pgm_data6;
    uint32_t pgm_data7;
    uint32_t pgm_check_value0;
    uint32_t pgm_check_value1;
    uint32_t pgm_check_value2;
    uint32_t rd_wr_dis;
    union {
        struct {
            uint32_t rd_dis                    :    7;  /*Represents whether reading of individual eFuse block(block4~block10) is disabled or enabled.\\ 1: Disabled\\ 0: Enabled.\\*/
            uint32_t dis_usb_jtag              :    1;  /*Represents whether the USB-to-JTAG function in USB Serial/JTAG is disabled. \\ 1: Disabled\\ 0: Enabled\\*/
            uint32_t dis_usb_serial_jtag       :    1;  /*Represents whether USB-Serial-JTAG is disabled or enabled.\\ 1: Disabled\\ 0: Enabled\\*/
            uint32_t dis_force_download        :    1;  /*Represents whether the function that forces chip into Download mode is disabled. \\ 1: Disabled\\ 0: Enabled\\*/
            uint32_t spi_download_mspi_dis     :    1;  /*Represents accessing MSPI flash/MSPI RAM by SYS AXI matrix is disabled during boot_mode_download.\\ 1: Disabled\\ 0: Enabled\\*/
            uint32_t dis_twai                  :    1;  /*Represents whether TWAI function is disabled or enabled.\\ 1: Disabled\\ 0: Enabled\\*/
            uint32_t soft_dis_jtag             :    3;  /*Represents whether PAD JTAG is disabled in the soft way. It can be restarted via HMAC. \\ Odd count of bits with a value of 1: Disabled\\ Even count of bits with a value of 1: Enabled\\*/
            uint32_t dis_pad_jtag              :    1;  /*Represents whether PAD JTAG is disabled in the hard way (permanently).\\ 1: Disabled\\ 0: Enabled\\*/
            uint32_t huk_gen_state             :    9;  /*Set the bits to control validation of HUK generate mode. Odd of 1 is invalid, even of 1 is valid.*/
            uint32_t km_rnd_switch_cycle       :    2;  /*Set the bits to control key manager random number switch cycle. 0: control by register. 1: 8 km clk cycles. 2: 16 km cycles. 3: 32 km cycles*/
            uint32_t km_deploy_only_once       :    5;  /*Set each bit to control whether corresponding key can only be deployed once. 1 is true, 0 is false. bit 0: ecsda, bit 1: flash, bit2: hmac, bit3: ds, bit4: psram*/
        };
        uint32_t val;
    } rd_repeat_data0;
    union {
        struct {
            uint32_t jtag_sel_enable           :    1;  /*Represents whether the selection of a JTAG signal source through the strapping pin value is enabled when both EFUSE_DIS_PAD_JTAG and EFUSE_DIS_USB_JTAG are configured to 0. For more information, please refer to Chapter Placeholder.\\ 1: Enabled\\ 0: Disabled\\*/
            uint32_t force_use_key_manager_key :    5;  /*Set each bit to control whether corresponding key must come from key manager. 1 is true, 0 is false. bit 0: ecsda, bit 1: flash, bit2: hmac, bit3: ds, bit4: psram*/
            uint32_t force_disable_sw_init_key :    1;  /*Set this bit to disable software written init key, and force use efuse_init_key.*/
            uint32_t km_xts_key_length_256     :    1;  /*Set this bitto configure flash encryption use xts-128 key. else use xts-256 key.*/
            uint32_t dis_redundancy            :    1;  /*Represents whether configuration of eFuse redundancy is diabled or enabled.\\1: Disabled\\ 0: Enabled.\\*/
            uint32_t wdt_delay_sel             :    2;  /*Represents the threshold level of the RTC watchdog STG0 timeout.\\0: Original threshold configuration value of STG0 *2 \\1: Original threshold configuration value of STG0 *4 \\2: Original threshold configuration value of STG0 *8 \\3: Original threshold configuration value of STG0 *16 \\*/
            uint32_t spi_boot_crypt_cnt        :    3;  /*Represents whether SPI boot encrypt/decrypt is disabled or enabled.\\ Odd number of 1: enabled\\ Even number of 1: disabled\\*/
            uint32_t secure_boot_key_revoke0   :    1;  /*Represents whether revoking first secure boot key is enabled or disabled.\\ 1: enabled\\ 0: disabled\\*/
            uint32_t secure_boot_key_revoke1   :    1;  /*Represents whether revoking second secure boot key is enabled or disabled.\\ 1: enabled\\ 0: disabled\\*/
            uint32_t secure_boot_key_revoke2   :    1;  /*Represents whether revoking third secure boot key is enabled or disabled.\\ 1: enabled\\ 0: disabled\\*/
            uint32_t key_purpose_0             :    5;  /*Represents the purpose of Key0.*/
            uint32_t key_purpose_1             :    5;  /*Represents the purpose of Key1.*/
            uint32_t key_purpose_2             :    5;  /*Represents the purpose of Key2.*/
        };
        uint32_t val;
    } rd_repeat_data1;
    union {
        struct {
            uint32_t key_purpose_3             :    5;  /*Represents the purpose of Key3.*/
            uint32_t key_purpose_4             :    5;  /*Represents the purpose of Key4.*/
            uint32_t key_purpose_5             :    5;  /*Represents the purpose of Key5.*/
            uint32_t sec_dpa_level             :    2;  /*Represents the spa secure level by configuring the clock random divide mode.*/
            uint32_t crypt_dpa_enable          :    1;  /*Represents whether anti-dpa attack is enabled. 1. Enable\\ 0: Disable.*/
            uint32_t secure_boot_en            :    1;  /*Represents whether secure boot is enabled or disabled.\\ 1: enabled\\ 0: disabled\\*/
            uint32_t secure_boot_aggressive_revoke:    1;  /*Represents whether revoking aggressive secure boot is enabled or disabled.\\ 1: enabled.\\ 0: disabled\\*/
            uint32_t reserved20                    :    6;  /*Reserved.*/
            uint32_t usb_serial_jtag_exchg_pins:    1;  /*Represents whether enable usb device exchange pins of D+ and D- or not. \\ 1: Enabled\\ 0: Disabled\\*/
            uint32_t dis_usb_otg_download_mode :    1;  /*Set this bit to disable download via USB-OTG.*/
            uint32_t flash_tpuw                :    4;  /*Represents the flash waiting time after power-up, in unit of ms. When the value less than 15, the waiting time is the programmed value. Otherwise, the waiting time is 2 times the programmed value.*/
        };
        uint32_t val;
    } rd_repeat_data2;
    union {
        struct {
            uint32_t dis_download_mode         :    1;  /*Represents whether Download mode is disabled or enabled.\\ 1: disabled\\ 0: enabled\\*/
            uint32_t dis_direct_boot           :    1;  /*Represents whether direct boot mode is disabled or enabled.\\ 1: disabled\\ 0: enabled\\*/
            uint32_t lock_km_key               :    1;  /*Represetns whether to lock the efuse xts key.\\ 1. Lock\\ 0: Unlock\\*/
            uint32_t enable_security_download  :    1;  /*Represents whether security download is enabled or disabled.\\ 1: enabled\\ 0: disabled\\*/
            uint32_t uart_print_control        :    2;  /*Represents the type of UART printing.\\ 00: force enable printing\\ 01: enable printing when GPIO8 is reset at low level\\ 10: enable printing when GPIO8 is reset at high level\\ 11: force disable printing\\*/
            uint32_t force_send_resume         :    1;  /*Represents whether ROM code is forced to send a resume command during SPI boot.\\ 1: forced\\ 0:not forced\\*/
            uint32_t secure_version            :    16;  /*Represents the version used by ESP-IDF anti-rollback feature.*/
            uint32_t secure_boot_disable_fast_wake:    1;  /*Represents whether FAST VERIFY ON WAKE is disabled or enabled when Secure Boot is enabled.\\ 1: disabled\\ 0: enabled\\*/
            uint32_t reserved24                    :    7;  /*Reserved.*/
            uint32_t hys_en_pad                :    1;  /*Represents whether the hysteresis function of corresponding PAD is enabled.\\ 1: enabled\\ 0:disabled\\*/
        };
        uint32_t val;
    } rd_repeat_data3;
    union {
        struct {
            uint32_t km_disable_deploy_mode    :    5;  /*Represents whether the deploy mode of key manager is disable or not. \\ 1: disabled \\ 0: enabled.\\ bit 0: ecsda, bit 1: flash, bit2: hmac, bit3: ds, bit4: psram*/
            uint32_t dis_wdt                   :    1;  /*Set this bit to disable watch dog.*/
            uint32_t dis_swd                   :    1;  /*Set this bit to disable super-watchdog.*/
            uint32_t low_power_cntl            :    14;  /*Reserved for LP.*/
            uint32_t pad_mode_select           :    3;  /*Represents each 3318 group pad volt mode. \\0: Pad in 3.3v mode\\1: Pad in 1.8v mode*/
            uint32_t reserved24                    :    8;  /*Reserved.*/
        };
        uint32_t val;
    } rd_repeat_data4;
    uint32_t rd_mac_sys0;
    union {
        struct {
            uint32_t mac_1                     :    16;  /*Represents MAC address. High 16-bit.*/
            uint32_t mac_ext                   :    16;  /*Represents the extended bits of MAC address.*/
        };
        uint32_t val;
    } rd_mac_sys1;
    union {
        struct {
            uint32_t mac_reserved_0            :    14;  /*Reserved.*/
            uint32_t mac_reserved_1            :    18;  /*Reserved.*/
        };
        uint32_t val;
    } rd_mac_sys2;
    union {
        struct {
            uint32_t mac_reserved_2            :    18;  /*Reserved.*/
            uint32_t sys_data_part0_0          :    14;  /*Represents the first 14-bit of zeroth part of system data.*/
        };
        uint32_t val;
    } rd_mac_sys3;
    uint32_t rd_mac_sys4;
    uint32_t rd_mac_sys5;
    uint32_t rd_sys_part1_data0;
    uint32_t rd_sys_part1_data1;
    uint32_t rd_sys_part1_data2;
    uint32_t rd_sys_part1_data3;
    uint32_t rd_sys_part1_data4;
    uint32_t rd_sys_part1_data5;
    uint32_t rd_sys_part1_data6;
    uint32_t rd_sys_part1_data7;
    uint32_t rd_usr_data0;
    uint32_t rd_usr_data1;
    uint32_t rd_usr_data2;
    uint32_t rd_usr_data3;
    uint32_t rd_usr_data4;
    uint32_t rd_usr_data5;
    uint32_t rd_usr_data6;
    uint32_t rd_usr_data7;
    uint32_t rd_key0_data0;
    uint32_t rd_key0_data1;
    uint32_t rd_key0_data2;
    uint32_t rd_key0_data3;
    uint32_t rd_key0_data4;
    uint32_t rd_key0_data5;
    uint32_t rd_key0_data6;
    uint32_t rd_key0_data7;
    uint32_t rd_key1_data0;
    uint32_t rd_key1_data1;
    uint32_t rd_key1_data2;
    uint32_t rd_key1_data3;
    uint32_t rd_key1_data4;
    uint32_t rd_key1_data5;
    uint32_t rd_key1_data6;
    uint32_t rd_key1_data7;
    uint32_t rd_key2_data0;
    uint32_t rd_key2_data1;
    uint32_t rd_key2_data2;
    uint32_t rd_key2_data3;
    uint32_t rd_key2_data4;
    uint32_t rd_key2_data5;
    uint32_t rd_key2_data6;
    uint32_t rd_key2_data7;
    uint32_t rd_key3_data0;
    uint32_t rd_key3_data1;
    uint32_t rd_key3_data2;
    uint32_t rd_key3_data3;
    uint32_t rd_key3_data4;
    uint32_t rd_key3_data5;
    uint32_t rd_key3_data6;
    uint32_t rd_key3_data7;
    uint32_t rd_key4_data0;
    uint32_t rd_key4_data1;
    uint32_t rd_key4_data2;
    uint32_t rd_key4_data3;
    uint32_t rd_key4_data4;
    uint32_t rd_key4_data5;
    uint32_t rd_key4_data6;
    uint32_t rd_key4_data7;
    uint32_t rd_key5_data0;
    uint32_t rd_key5_data1;
    uint32_t rd_key5_data2;
    uint32_t rd_key5_data3;
    uint32_t rd_key5_data4;
    uint32_t rd_key5_data5;
    uint32_t rd_key5_data6;
    uint32_t rd_key5_data7;
    uint32_t rd_sys_part2_data0;
    uint32_t rd_sys_part2_data1;
    uint32_t rd_sys_part2_data2;
    uint32_t rd_sys_part2_data3;
    uint32_t rd_sys_part2_data4;
    uint32_t rd_sys_part2_data5;
    uint32_t rd_sys_part2_data6;
    uint32_t rd_sys_part2_data7;
    union {
        struct {
            uint32_t rd_dis_err                :    7;  /*Represents the programming error of EFUSE_RD_DIS*/
            uint32_t dis_usb_jtag_err          :    1;  /*Represents the programming error of EFUSE_DIS_USB_JTAG*/
            uint32_t dis_usb_serial_jtag_err   :    1;  /*Represents the programming error of EFUSE_DIS_USB_SERIAL_JTAG*/
            uint32_t dis_force_download_err    :    1;  /*Represents the programming error of EFUSE_DIS_FORCE_DOWNLOAD*/
            uint32_t spi_download_mspi_dis_err :    1;  /*Represents the programming error of EFUSE_SPI_DOWNLOAD_MSPI_DIS*/
            uint32_t dis_twai_err              :    1;  /*Represents the programming error of EFUSE_DIS_TWAI*/
            uint32_t soft_dis_jtag_err         :    3;  /*Represents the programming error of EFUSE_SOFT_DIS_JTAG*/
            uint32_t dis_pad_jtag_err          :    1;  /*Represents the programming error of EFUSE_DIS_PAD_JTAG*/
            uint32_t huk_gen_state_err         :    9;  /*Represents the programming error of EFUSE_HUK_GEN_STATE*/
            uint32_t km_rnd_switch_cycle_err   :    2;  /*Represents the programming error of EFUSE_KM_RND_SWITCH_CYCLE*/
            uint32_t km_deploy_only_once_err   :    5;  /*Represents the programming error of EFUSE_KM_DEPLOY_ONLY_ONCE*/
        };
        uint32_t val;
    } rd_repeat_data_err0;
    union {
        struct {
            uint32_t jtag_sel_enable_err       :    1;  /*Represents the programming error of EFUSE_JTAG_SEL_ENABLE*/
            uint32_t force_use_key_manager_key_err:    5;  /*Represents the programming error of EFUSE_FORCE_USE_KEY_MANAGER_KEY*/
            uint32_t force_disable_sw_init_key_err:    1;  /*Represents the programming error of EFUSE_FORCE_DISABLE_SW_INIT_KEY*/
            uint32_t km_xts_key_length_256_err :    1;  /*Represents the programming error of EFUSE_KM_XTS_KEY_LENGTH_256*/
            uint32_t dis_redundancy_err        :    1;  /*Represents the programming error of EFUSE_DIS_REDUNDANCY*/
            uint32_t wdt_delay_sel_err         :    2;  /*Represents the programming error of EFUSE_WDT_DELAY_SEL*/
            uint32_t spi_boot_crypt_cnt_err    :    3;  /*Represents the programming error of EFUSE_SPI_BOOT_CRYPT_CNT*/
            uint32_t secure_boot_key_revoke0_err:    1;  /*Represents the programming error of EFUSE_SECURE_BOOT_KEY_REVOKE0*/
            uint32_t secure_boot_key_revoke1_err:    1;  /*Represents the programming error of EFUSE_SECURE_BOOT_KEY_REVOKE1*/
            uint32_t secure_boot_key_revoke2_err:    1;  /*Represents the programming error of EFUSE_SECURE_BOOT_KEY_REVOKE2*/
            uint32_t key_purpose_0_err         :    5;  /*Represents the programming error of EFUSE_KEY_PURPOSE_0*/
            uint32_t key_purpose_1_err         :    5;  /*Represents the programming error of EFUSE_KEY_PURPOSE_1*/
            uint32_t key_purpose_2_err         :    5;  /*Represents the programming error of EFUSE_KEY_PURPOSE_2*/
        };
        uint32_t val;
    } rd_repeat_data_err1;
    union {
        struct {
            uint32_t key_purpose_3_err         :    5;  /*Represents the programming error of EFUSE_KEY_PURPOSE_3*/
            uint32_t key_purpose_4_err         :    5;  /*Represents the programming error of EFUSE_KEY_PURPOSE_4*/
            uint32_t key_purpose_5_err         :    5;  /*Represents the programming error of EFUSE_KEY_PURPOSE_5*/
            uint32_t sec_dpa_level_err         :    2;  /*Represents the programming error of EFUSE_SEC_DPA_LEVEL*/
            uint32_t crypt_dpa_enable_err      :    1;  /*Represents the programming error of EFUSE_CRYPT_DPA_ENABLE*/
            uint32_t secure_boot_en_err        :    1;  /*Represents the programming error of EFUSE_SECURE_BOOT_EN*/
            uint32_t secure_boot_aggressive_revoke_err:    1;  /*Represents the programming error of EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE*/
            uint32_t reserved20                    :    6;  /*Reserved.*/
            uint32_t usb_serial_jtag_exchg_pins_err:    1;  /*Represents the programming error of EFUSE_USB_SERIAL_JTAG_EXCHG_PINS*/
            uint32_t dis_usb_otg_download_mode_err:    1;  /*Represents the programming error of EFUSE_DIS_USB_OTG_DOWNLOAD_MODE*/
            uint32_t flash_tpuw_err            :    4;  /*Represents the programming error of EFUSE_FLASH_TPUW*/
        };
        uint32_t val;
    } rd_repeat_data_err2;
    union {
        struct {
            uint32_t dis_download_mode_err     :    1;  /*Represents the programming error of EFUSE_DIS_DOWNLOAD_MODE*/
            uint32_t dis_direct_boot_err       :    1;  /*Represents the programming error of EFUSE_DIS_DIRECT_BOOT*/
            uint32_t lock_km_key_err           :    1;  /*Represents the programming error of EFUSE_LOCK_KM_KEY*/
            uint32_t enable_security_download_err:    1;  /*Represents the programming error of EFUSE_ENABLE_SECURITY_DOWNLOAD*/
            uint32_t uart_print_control_err    :    2;  /*Represents the programming error of EFUSE_UART_PRINT_CONTROL*/
            uint32_t force_send_resume_err     :    1;  /*Represents the programming error of EFUSE_FORCE_SEND_RESUME*/
            uint32_t secure_version_err        :    16;  /*Represents the programming error of EFUSE_SECURE_VERSION*/
            uint32_t secure_boot_disable_fast_wake_err:    1;  /*Represents the programming error of EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE*/
            uint32_t reserved24                    :    7;  /*Reserved.*/
            uint32_t hys_en_pad_err            :    1;  /*Represents the programming error of EFUSE_HYS_EN_PAD*/
        };
        uint32_t val;
    } rd_repeat_data_err3;
    union {
        struct {
            uint32_t km_disable_deploy_mode_err:    5;  /*Represents the programming error of EFUSE_KM_DISABLE_DEPLOY_MODE*/
            uint32_t dis_wdt_err               :    1;  /*Represents the programming error of EFUSE_DIS_WDT*/
            uint32_t dis_swd_err               :    1;  /*Represents the programming error of EFUSE_DIS_SWD*/
            uint32_t low_power_cntl_err        :    14;  /*Represents the programming error of EFUSE_LOW_POWER_CNTL*/
            uint32_t pad_mode_select_err       :    3;  /*Represents the programming error of EFUSE_PAD_MODE_SELECT*/
            uint32_t reserved24                    :    8;  /*Reserved.*/
        };
        uint32_t val;
    } rd_repeat_data_err4;
    union {
        struct {
            uint32_t rd_mac_sys_err_num        :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_mac_sys*/
            uint32_t rd_mac_sys_fail           :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_mac_sys is reliable\\ 1: Means that programming rd_mac_sys failed and the number of error bytes is over 6.*/
            uint32_t rd_sys_part1_data_err_num :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_sys_part1_data*/
            uint32_t rd_sys_part1_data_fail    :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_sys_part1_data is reliable\\ 1: Means that programming rd_sys_part1_data failed and the number of error bytes is over 6.*/
            uint32_t rd_usr_data_err_num       :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_usr_data*/
            uint32_t rd_usr_data_fail          :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_usr_data is reliable\\ 1: Means that programming rd_usr_data failed and the number of error bytes is over 6.*/
            uint32_t rd_key0_data_err_num      :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_key0_data*/
            uint32_t rd_key0_data_fail         :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_key0_data is reliable\\ 1: Means that programming rd_key0_data failed and the number of error bytes is over 6.*/
            uint32_t rd_key1_data_err_num      :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_key1_data*/
            uint32_t rd_key1_data_fail         :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_key1_data is reliable\\ 1: Means that programming rd_key1_data failed and the number of error bytes is over 6.*/
            uint32_t rd_key2_data_err_num      :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_key2_data*/
            uint32_t rd_key2_data_fail         :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_key2_data is reliable\\ 1: Means that programming rd_key2_data failed and the number of error bytes is over 6.*/
            uint32_t rd_key3_data_err_num      :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_key3_data*/
            uint32_t rd_key3_data_fail         :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_key3_data is reliable\\ 1: Means that programming rd_key3_data failed and the number of error bytes is over 6.*/
            uint32_t rd_key4_data_err_num      :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_key4_data*/
            uint32_t rd_key4_data_fail         :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_key4_data is reliable\\ 1: Means that programming rd_key4_data failed and the number of error bytes is over 6.*/
        };
        uint32_t val;
    } rd_rs_data_err0;
    union {
        struct {
            uint32_t rd_key5_data_err_num      :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_key5_data*/
            uint32_t rd_key5_data_fail         :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_key5_data is reliable\\ 1: Means that programming rd_key5_data failed and the number of error bytes is over 6.*/
            uint32_t rd_sys_part2_data_err_num :    3;  /*Represents the error number of registers.\\The value of this signal means the number of error bytes in rd_sys_part2_data*/
            uint32_t rd_sys_part2_data_fail    :    1;  /*Represents error status of register.\\0: Means no failure and that the data of rd_sys_part2_data is reliable\\ 1: Means that programming rd_sys_part2_data failed and the number of error bytes is over 6.*/
            uint32_t reserved8                     :    24;  /*Reserved.*/
        };
        uint32_t val;
    } rd_rs_data_err1;
    union {
        struct {
            uint32_t date                      :    28;  /*Represents eFuse version. Date:2024-11-05 16:37:32, ScriptRev:7b927b70228b3ea6b0c0c661890e999cfe0856ef*/
            uint32_t reserved28                    :    4;  /*Reserved.*/
        };
        uint32_t val;
    } date;
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
    union {
        struct {
            uint32_t efuse_mem_force_pd        :    1;  /*Set this bit to force eFuse SRAM into power-saving mode.*/
            uint32_t efuse_mem_clk_force_on    :    1;  /*Set this bit and force to activate clock signal of eFuse SRAM.*/
            uint32_t efuse_mem_force_pu        :    1;  /*Set this bit to force eFuse SRAM into working mode.*/
            uint32_t efuse_otp_pd              :    1;  /*Set this bit to force eFuse otp into power-down mode. \\ 0x1: otp_pd=0\\ 0x1: otp_pd=1*/
            uint32_t reserved4                     :    12;  /*Reserved.*/
            uint32_t clk_en                    :    1;  /*Set this bit to force enable eFuse register configuration clock signal.*/
            uint32_t reserved17                    :    15;  /*Reserved.*/
        };
        uint32_t val;
    } clk;
    union {
        struct {
            uint32_t op_code                   :    16;  /*0x5A5A:program command, 0x5A5B:program redundancy command, 0x5AA5:read with redundancy command, 0x5AA6:read without redundancy mode, 0x5AA7:read repair information row mode, 0x6AA5:margin read with redundancy command, 0x6AA6:margin read without redundancy mode, 0x6AA7:margin read repair information row mode.*/
            uint32_t cfg_ecdsa_l_blk           :    4;  /*Configures which block to use for ECDSA key low part output.*/
            uint32_t cfg_ecdsa_h_blk           :    4;  /*Configures which block to use for ECDSA key high part output.*/
            uint32_t sw_ctrl_pd                :    1;  /*Configures if software controls otp_pd. \\0x0: HW controls otp_pd, efuse_otp_pd is invalid\\ 0x1: SW controls otp_pd, efuse_otp_pd is valid*/
            uint32_t reserved25                    :    7;  /*Reserved.*/
        };
        uint32_t val;
    } conf;
    union {
        struct {
            uint32_t state                     :    4;  /*Indicates the state of the eFuse state machine.*/
            uint32_t otp_load_sw               :    1;  /*The value of OTP_LOAD_SW.*/
            uint32_t otp_vddq_c_sync2          :    1;  /*The value of OTP_VDDQ_C_SYNC2.*/
            uint32_t otp_strobe_sw             :    1;  /*The value of OTP_STROBE_SW.*/
            uint32_t otp_csb_sw                :    1;  /*The value of OTP_CSB_SW.*/
            uint32_t otp_pgenb_sw              :    1;  /*The value of OTP_PGENB_SW.*/
            uint32_t otp_vddq_is_sw            :    1;  /*The value of OTP_VDDQ_IS_SW.*/
            uint32_t blk0_valid_bit_cnt        :    10;  /*Indicates the number of block valid bit.*/
            uint32_t cur_ecdsa_l_blk           :    4;  /*Represents which block is used for ECDSA key low part output.*/
            uint32_t cur_ecdsa_h_blk           :    4;  /*Represents which block is used for ECDSA key high part output.*/
            uint32_t err_code                  :    4;  /*Represents error code of efuse controller: \\0x1: Reconfiguration of eFuse redundancy is disabled, but program RIR command  is detected.*/
        };
        uint32_t val;
    } status;
    union {
        struct {
            uint32_t read_cmd                  :    1;  /*Set this bit to send read command.*/
            uint32_t pgm_cmd                   :    1;  /*Set this bit to send programming command.*/
            uint32_t blk_num                   :    4;  /*The serial number of the block to be programmed. Value 0-10 corresponds to block number 0-10, respectively.*/
            uint32_t reserved6                     :    26;  /*Reserved.*/
        };
        uint32_t val;
    } cmd;
    union {
        struct {
            uint32_t read_done_int_raw         :    1;  /*The raw bit signal for read_done interrupt.*/
            uint32_t pgm_done_int_raw          :    1;  /*The raw bit signal for pgm_done interrupt.*/
            uint32_t reserved2                     :    30;  /*Reserved.*/
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t read_done_int_st          :    1;  /*The status signal for read_done interrupt.*/
            uint32_t pgm_done_int_st           :    1;  /*The status signal for pgm_done interrupt.*/
            uint32_t reserved2                     :    30;  /*Reserved.*/
        };
        uint32_t val;
    } int_st;
    union {
        struct {
            uint32_t read_done_int_ena         :    1;  /*The enable signal for read_done interrupt.*/
            uint32_t pgm_done_int_ena          :    1;  /*The enable signal for pgm_done interrupt.*/
            uint32_t reserved2                     :    30;  /*Reserved.*/
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t read_done_int_clr         :    1;  /*The clear signal for read_done interrupt.*/
            uint32_t pgm_done_int_clr          :    1;  /*The clear signal for pgm_done interrupt.*/
            uint32_t reserved2                     :    30;  /*Reserved.*/
        };
        uint32_t val;
    } int_clr;
    union {
        struct {
            uint32_t dac_clk_div               :    8;  /*Controls the division factor of the rising clock of the programming voltage.*/
            uint32_t reserved8                     :    1;  /*Reserved.*/
            uint32_t dac_num                   :    8;  /*Controls the rising period of the programming voltage.*/
            uint32_t oe_clr                    :    1;  /*Reduces the power supply of the programming voltage.*/
            uint32_t reserved18                    :    14;  /*Reserved.*/
        };
        uint32_t val;
    } dac_conf;
    union {
        struct {
            uint32_t thr_a                     :    8;  /*Configures the read hold time.*/
            uint32_t trd                       :    8;  /*Configures the read time.*/
            uint32_t tsur_a                    :    8;  /*Configures the read setup time.*/
            uint32_t read_init_num             :    8;  /*Configures the waiting time of reading eFuse memory.*/
        };
        uint32_t val;
    } rd_tim_conf;
    union {
        struct {
            uint32_t tsup_a                    :    8;  /*Configures the programming setup time.*/
            uint32_t pwr_on_num                :    16;  /*Configures the power up time for VDDQ.*/
            uint32_t thp_a                     :    8;  /*Configures the programming hold time.*/
        };
        uint32_t val;
    } wr_tim_conf1;
    union {
        struct {
            uint32_t pwr_off_num               :    16;  /*Configures the power outage time for VDDQ.*/
            uint32_t tpgm                      :    16;  /*Configures the active programming time.*/
        };
        uint32_t val;
    } wr_tim_conf2;
    union {
        struct {
            uint32_t thp_cs                    :    8;  /*Configures otp_csb to otp_ps, please make sure thp_ps-thp_cs>thp_ps_cs.*/
            uint32_t tsup_ps_cs                :    8;  /*Configures otp_ps to otp_csb, please make sure thp_ps-thp_ps_cs>thp_cs. */
            uint32_t thp_ps                    :    8;  /*Configures otp_strobe to otp_ps, please make sure thp_ps-thp_cs>thp_ps_cs. */
            uint32_t tsup_ps                   :    8;  /*Configures otp_ps to otp_strobe, please make sure tsup_ps-tsup_ps_cs>tsup_cs. */
        };
        uint32_t val;
    } wr_tim_conf3;
    union {
        struct {
            uint32_t bypass_rs_correction      :    1;  /*Set this bit to bypass reed solomon correction step.*/
            uint32_t bypass_rs_blk_num         :    11;  /*Configures block number of programming twice operation.*/
            uint32_t update                    :    1;  /*Set this bit to update multi-bit register signals.*/
            uint32_t reserved13                    :    19;  /*Reserved.*/
        };
        uint32_t val;
    } wr_tim_conf0_rs_bypass;
    union {
        struct {
            uint32_t rir_fb0_addr              :    12;  /*Address field of repair_information_row0.*/
            uint32_t rir_fb0_disable           :    1;  /*Disable bit of repair_information_row0.*/
            uint32_t rir_fb0_data              :    1;  /*Data bit of repair_information_row0.*/
            uint32_t rir_rf0                   :    1;  /*Flag bit of repair_information_row0.*/
            uint32_t reserved15                    :    1;  /*Reserved.*/
            uint32_t rir_fb1_addr              :    12;  /*Address field of repair_information_row1.*/
            uint32_t rir_fb1_disable           :    1;  /*Disable bit of repair_information_row1.*/
            uint32_t rir_fb1_data              :    1;  /*Data bit of repair_information_row1.*/
            uint32_t rir_rf1                   :    1;  /*Flag bit of repair_information_row1.*/
            uint32_t reserved31                    :    1;  /*Reserved.*/
        };
        uint32_t val;
    } repair_information0;
    union {
        struct {
            uint32_t rir_fb2_addr              :    12;  /*Address field of repair_information_row2.*/
            uint32_t rir_fb2_disable           :    1;  /*Disable bit of repair_information_row2.*/
            uint32_t rir_fb2_data              :    1;  /*Data bit of repair_information_row2.*/
            uint32_t rir_rf2                   :    1;  /*Flag bit of repair_information_row2.*/
            uint32_t reserved15                    :    1;  /*Reserved.*/
            uint32_t rir_fb3_addr              :    12;  /*Address field of repair_information_row3.*/
            uint32_t rir_fb3_disable           :    1;  /*Disable bit of repair_information_row3.*/
            uint32_t rir_fb3_data              :    1;  /*Data bit of repair_information_row3.*/
            uint32_t rir_rf3                   :    1;  /*Flag bit of repair_information_row3.*/
            uint32_t reserved31                    :    1;  /*Reserved.*/
        };
        uint32_t val;
    } repair_information1;
    union {
        struct {
            uint32_t rir_fb4_addr              :    12;  /*Address field of repair_information_row4.*/
            uint32_t rir_fb4_disable           :    1;  /*Disable bit of repair_information_row4.*/
            uint32_t rir_fb4_data              :    1;  /*Data bit of repair_information_row4.*/
            uint32_t rir_rf4                   :    1;  /*Flag bit of repair_information_row4.*/
            uint32_t reserved15                    :    1;  /*Reserved.*/
            uint32_t rir_fb5_addr              :    12;  /*Address field of repair_information_row5.*/
            uint32_t rir_fb5_disable           :    1;  /*Disable bit of repair_information_row5.*/
            uint32_t rir_fb5_data              :    1;  /*Data bit of repair_information_row5.*/
            uint32_t rir_rf5                   :    1;  /*Flag bit of repair_information_row5.*/
            uint32_t reserved31                    :    1;  /*Reserved.*/
        };
        uint32_t val;
    } repair_information2;
    union {
        struct {
            uint32_t rir_fb6_addr              :    12;  /*Address field of repair_information_row6.*/
            uint32_t rir_fb6_disable           :    1;  /*Disable bit of repair_information_row6.*/
            uint32_t rir_fb6_data              :    1;  /*Data bit of repair_information_row6.*/
            uint32_t rir_rf6                   :    1;  /*Flag bit of repair_information_row6.*/
            uint32_t reserved15                    :    1;  /*Reserved.*/
            uint32_t rir_fb7_addr              :    12;  /*Address field of repair_information_row7.*/
            uint32_t rir_fb7_disable           :    1;  /*Disable bit of repair_information_row7.*/
            uint32_t rir_fb7_data              :    1;  /*Data bit of repair_information_row7.*/
            uint32_t rir_rf7                   :    1;  /*Flag bit of repair_information_row7.*/
            uint32_t reserved31                    :    1;  /*Reserved.*/
        };
        uint32_t val;
    } repair_information3;
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
    uint32_t reserved_3fc;
    uint32_t apb2otp_wr_dis;
    uint32_t apb2otp_blk0_backup1_w1;
    uint32_t apb2otp_blk0_backup1_w2;
    uint32_t apb2otp_blk0_backup1_w3;
    uint32_t apb2otp_blk0_backup1_w4;
    uint32_t apb2otp_blk0_backup1_w5;
    uint32_t apb2otp_blk0_backup2_w1;
    uint32_t apb2otp_blk0_backup2_w2;
    uint32_t apb2otp_blk0_backup2_w3;
    uint32_t apb2otp_blk0_backup2_w4;
    uint32_t apb2otp_blk0_backup2_w5;
    uint32_t apb2otp_blk0_backup3_w1;
    uint32_t apb2otp_blk0_backup3_w2;
    uint32_t apb2otp_blk0_backup3_w3;
    uint32_t apb2otp_blk0_backup3_w4;
    uint32_t apb2otp_blk0_backup3_w5;
    uint32_t apb2otp_blk0_backup4_w1;
    uint32_t apb2otp_blk0_backup4_w2;
    uint32_t apb2otp_blk0_backup4_w3;
    uint32_t apb2otp_blk0_backup4_w4;
    uint32_t apb2otp_blk0_backup4_w5;
    uint32_t apb2otp_blk1_w1;
    uint32_t apb2otp_blk1_w2;
    uint32_t apb2otp_blk1_w3;
    uint32_t apb2otp_blk1_w4;
    uint32_t apb2otp_blk1_w5;
    uint32_t apb2otp_blk1_w6;
    uint32_t apb2otp_blk1_w7;
    uint32_t apb2otp_blk1_w8;
    uint32_t apb2otp_blk1_w9;
    uint32_t apb2otp_blk2_w1;
    uint32_t apb2otp_blk2_w2;
    uint32_t apb2otp_blk2_w3;
    uint32_t apb2otp_blk2_w4;
    uint32_t apb2otp_blk2_w5;
    uint32_t apb2otp_blk2_w6;
    uint32_t apb2otp_blk2_w7;
    uint32_t apb2otp_blk2_w8;
    uint32_t apb2otp_blk2_w9;
    uint32_t apb2otp_blk2_w10;
    uint32_t apb2otp_blk2_w11;
    uint32_t apb2otp_blk3_w1;
    uint32_t apb2otp_blk3_w2;
    uint32_t apb2otp_blk3_w3;
    uint32_t apb2otp_blk3_w4;
    uint32_t apb2otp_blk3_w5;
    uint32_t apb2otp_blk3_w6;
    uint32_t apb2otp_blk3_w7;
    uint32_t apb2otp_blk3_w8;
    uint32_t apb2otp_blk3_w9;
    uint32_t apb2otp_blk3_w10;
    uint32_t apb2otp_blk3_w11;
    uint32_t apb2otp_blk4_w1;
    uint32_t apb2otp_blk4_w2;
    uint32_t apb2otp_blk4_w3;
    uint32_t apb2otp_blk4_w4;
    uint32_t apb2otp_blk4_w5;
    uint32_t apb2otp_blk4_w6;
    uint32_t apb2otp_blk4_w7;
    uint32_t apb2otp_blk4_w8;
    uint32_t apb2otp_blk4_w9;
    uint32_t apb2otp_blk4_w10;
    uint32_t apb2otp_blk4_w11;
    uint32_t apb2otp_blk5_w1;
    uint32_t apb2otp_blk5_w2;
    uint32_t apb2otp_blk5_w3;
    uint32_t apb2otp_blk5_w4;
    uint32_t apb2otp_blk5_w5;
    uint32_t apb2otp_blk5_w6;
    uint32_t apb2otp_blk5_w7;
    uint32_t apb2otp_blk5_w8;
    uint32_t apb2otp_blk5_w9;
    uint32_t apb2otp_blk5_w10;
    uint32_t apb2otp_blk5_w11;
    uint32_t apb2otp_blk6_w1;
    uint32_t apb2otp_blk6_w2;
    uint32_t apb2otp_blk6_w3;
    uint32_t apb2otp_blk6_w4;
    uint32_t apb2otp_blk6_w5;
    uint32_t apb2otp_blk6_w6;
    uint32_t apb2otp_blk6_w7;
    uint32_t apb2otp_blk6_w8;
    uint32_t apb2otp_blk6_w9;
    uint32_t apb2otp_blk6_w10;
    uint32_t apb2otp_blk6_w11;
    uint32_t apb2otp_blk7_w1;
    uint32_t apb2otp_blk7_w2;
    uint32_t apb2otp_blk7_w3;
    uint32_t apb2otp_blk7_w4;
    uint32_t apb2otp_blk7_w5;
    uint32_t apb2otp_blk7_w6;
    uint32_t apb2otp_blk7_w7;
    uint32_t apb2otp_blk7_w8;
    uint32_t apb2otp_blk7_w9;
    uint32_t apb2otp_blk7_w10;
    uint32_t apb2otp_blk7_w11;
    uint32_t apb2otp_blk8_w1;
    uint32_t apb2otp_blk8_w2;
    uint32_t apb2otp_blk8_w3;
    uint32_t apb2otp_blk8_w4;
    uint32_t apb2otp_blk8_w5;
    uint32_t apb2otp_blk8_w6;
    uint32_t apb2otp_blk8_w7;
    uint32_t apb2otp_blk8_w8;
    uint32_t apb2otp_blk8_w9;
    uint32_t apb2otp_blk8_w10;
    uint32_t apb2otp_blk8_w11;
    uint32_t apb2otp_blk9_w1;
    uint32_t apb2otp_blk9_w2;
    uint32_t apb2otp_blk9_w3;
    uint32_t apb2otp_blk9_w4;
    uint32_t apb2otp_blk9_w5;
    uint32_t apb2otp_blk9_w6;
    uint32_t apb2otp_blk9_w7;
    uint32_t apb2otp_blk9_w8;
    uint32_t apb2otp_blk9_w9;
    uint32_t apb2otp_blk9_w10;
    uint32_t apb2otp_blk9_w11;
    uint32_t apb2otp_blk10_w1;
    uint32_t apb2otp_blk10_w2;
    uint32_t apb2otp_blk10_w3;
    uint32_t apb2otp_blk10_w4;
    uint32_t apb2otp_blk10_w5;
    uint32_t apb2otp_blk10_w6;
    uint32_t apb2otp_blk10_w7;
    uint32_t apb2otp_blk10_w8;
    uint32_t apb2otp_blk10_w9;
    uint32_t apb2otp_blk10_w10;
    uint32_t apb2otp_blk10_w11;
    uint32_t reserved_604;
    union {
        struct {
            uint32_t apb2otp_enable            :    1;  /*Apb2otp mode enable signal.*/
            uint32_t apb2otp_rsb               :    1;  /*Apb2otp redundancy enable signal*/
            uint32_t apb2otp_rwl               :    1;  /*Apb2otp repair info row select signal*/
            uint32_t apb2otp_mr                :    1;  /*Apb2otp margin read signal*/
            uint32_t reserved4                     :    28;  /*Reserved.*/
        };
        uint32_t val;
    } apb2otp_cfg;
} efuse_dev_t;
extern efuse_dev_t EFUSE;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_EFUSE_STRUCT_H_ */
