/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_MP_SYS_CLKRST_STRUCT_H_
#define _SOC_MP_SYS_CLKRST_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    uint32_t date;
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*need_des*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } clk_en;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_mp_cpu_root_clk_en        :    1;  /*need_des*/
            uint32_t reg_mp_cpu_root_clk_sel       :    2;  /*need_des*/
        };
        uint32_t val;
    } cpu_root_conf;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_cpu_clk_div_denominator   :    6;  /*need_des*/
            uint32_t reg_cpu_clk_div_numerator     :    6;  /*need_des*/
            uint32_t reg_cpu_clk_div_num           :    8;  /*need_des*/
        };
        uint32_t val;
    } cpu_conf;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_cpu_axi_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_cpu_axi_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_cpu_axi_clk_div_num       :    8;  /*need_des*/
        };
        uint32_t val;
    } cpu_axi_conf;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_cpu_mem_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_cpu_mem_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_cpu_mem_clk_div_num       :    8;  /*need_des*/
        };
        uint32_t val;
    } cpu_mem_conf;
    union {
        struct {
            uint32_t reg_soc_clk_update            :    1;  /*need_des*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } soc_clk_ctrl;
    union {
        struct {
            uint32_t reg_core0_clic_clk_en         :    1;  /*need_des*/
            uint32_t reg_core0_cpu_clk_en          :    1;  /*need_des*/
            uint32_t reg_core0_global_rst_en       :    1;  /*need_des*/
            uint32_t reg_core0_force_norst         :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } mpcore0_ctrl;
    union {
        struct {
            uint32_t reg_core1_clic_clk_en         :    1;  /*need_des*/
            uint32_t reg_core1_cpu_clk_en          :    1;  /*need_des*/
            uint32_t reg_core1_global_rst_en       :    1;  /*need_des*/
            uint32_t reg_core1_force_norst         :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } mpcore1_ctrl;
    union {
        struct {
            uint32_t reg_rom_cpu_clk_en            :    1;  /*need_des*/
            uint32_t reg_rom_cpu_clk_force_on      :    1;  /*need_des*/
            uint32_t reg_rom_rst_en                :    1;  /*need_des*/
            uint32_t reg_rom_force_norst           :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } rom_ctrl;
    union {
        struct {
            uint32_t reg_flash_axi_rst_en          :    1;  /*need_des*/
            uint32_t reg_flash_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_flash_force_norst         :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } flash_ctrl;
    union {
        struct {
            uint32_t reg_psram_axi_rst_en          :    1;  /*need_des*/
            uint32_t reg_psram_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_psram_force_norst         :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } psram_ctrl;
    union {
        struct {
            uint32_t reg_ddrc_rst_en               :    1;  /*need_des*/
            uint32_t reg_ddrc_force_norst          :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } ddrc_ctrl;
    union {
        struct {
            uint32_t reg_iomux_rst_en              :    1;  /*need_des*/
            uint32_t reg_iomux_force_norst         :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } iomux_ctrl;
    union {
        struct {
            uint32_t reg_mspi_pad_ctrl_rst_en      :    1;  /*need_des*/
            uint32_t reg_mspi_pad_ctrl_force_norst :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } mspi_pad_ctrl;
    union {
        struct {
            uint32_t reg_systimer_apb_rst_en       :    1;  /*need_des*/
            uint32_t reg_systimer_core_rst_en      :    1;  /*need_des*/
            uint32_t reg_systimer_force_norst      :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } systimer_ctrl;
    union {
        struct {
            uint32_t reg_timergrp0_apb_rst_en      :    1;  /*need_des*/
            uint32_t reg_timergrp0_t0_rst_en       :    1;  /*need_des*/
            uint32_t reg_timergrp0_t1_rst_en       :    1;  /*need_des*/
            uint32_t reg_timergrp0_wdt_rst_en      :    1;  /*need_des*/
            uint32_t reg_timergrp0_xtal_rst_en     :    1;  /*need_des*/
            uint32_t reg_timergrp0_force_norst     :    1;  /*need_des*/
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } timergrp0_ctrl;
    uint32_t reserved_44;
    union {
        struct {
            uint32_t reg_timergrp1_apb_rst_en      :    1;  /*need_des*/
            uint32_t reg_timergrp1_t0_rst_en       :    1;  /*need_des*/
            uint32_t reg_timergrp1_t1_rst_en       :    1;  /*need_des*/
            uint32_t reg_timergrp1_wdt_rst_en      :    1;  /*need_des*/
            uint32_t reg_timergrp1_xtal_rst_en     :    1;  /*need_des*/
            uint32_t reg_timergrp1_force_norst     :    1;  /*need_des*/
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } timergrp1_ctrl;
    union {
        struct {
            uint32_t reg_uhci_rst_en               :    1;  /*need_des*/
            uint32_t reg_uhci_force_norst          :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } uhci_ctrl;
    union {
        struct {
            uint32_t reg_uart0_core_rst_en         :    1;  /*need_des*/
            uint32_t reg_uart0_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_uart0_force_norst         :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } uart0_ctrl;
    union {
        struct {
            uint32_t reg_uart1_core_rst_en         :    1;  /*need_des*/
            uint32_t reg_uart1_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_uart1_force_norst         :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } uart1_ctrl;
    union {
        struct {
            uint32_t reg_uart2_core_rst_en         :    1;  /*need_des*/
            uint32_t reg_uart2_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_uart2_force_norst         :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } uart2_ctrl;
    union {
        struct {
            uint32_t reg_mpcore0_stall_en          :    1;  /*need_des*/
            uint32_t reg_mpcore0_stall_wait_num    :    8;  /*need_des*/
            uint32_t reg_wdt_mpcore0_rst_len       :    8;  /*need_des*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } mpwdt_core0_rst_ctrl;
    union {
        struct {
            uint32_t reg_mpcore1_stall_en          :    1;  /*need_des*/
            uint32_t reg_mpcore1_stall_wait_num    :    8;  /*need_des*/
            uint32_t reg_wdt_mpcore1_rst_len       :    8;  /*need_des*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } mpwdt_core1_rst_ctrl;
    union {
        struct {
            uint32_t reg_mpcore0_wdt_reset_source_sel:    1;  /*1'b0: use wdt0 to reset hpcore0, 1'b1: use wdt1 to reset hpcore0*/
            uint32_t reg_mpcore1_wdt_reset_source_sel:    1;  /*1'b0: use wdt0 to reset hpcore1, 1'b1: use wdt1 to reset hpcore1*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } mpcore_wdt_reset_source;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_mp_sys_ahb_gen_clk_en     :    1;  /*need_des*/
            uint32_t reg_mp_sys_ahb_gen_clk_sel    :    2;  /*need_des*/
        };
        uint32_t val;
    } ahb_gen_conf;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_ahb_root_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_ahb_root_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_ahb_root_clk_div_num      :    8;  /*need_des*/
        };
        uint32_t val;
    } ahb_root_conf;
    union {
        struct {
            uint32_t reg_ocram_cpu_clk_en          :    1;  /*need_des*/
            uint32_t reg_ocram_cpu_clk_force_on    :    1;  /*need_des*/
            uint32_t reg_ocram_rst_en              :    1;  /*need_des*/
            uint32_t reg_ocram_force_norst         :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ocram_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_apb_hs_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_apb_hs_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_apb_hs_clk_div_num        :    8;  /*need_des*/
        };
        uint32_t val;
    } apb_hs_conf;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_apb_ls_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_apb_ls_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_apb_ls_clk_div_num        :    8;  /*need_des*/
        };
        uint32_t val;
    } apb_ls_conf;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_mp_sys_axi_root_clk_en    :    1;  /*need_des*/
            uint32_t reg_mp_sys_axi_root_clk_sel   :    2;  /*need_des*/
        };
        uint32_t val;
    } axi_root_conf;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_axi_clk_div_denominator   :    6;  /*need_des*/
            uint32_t reg_axi_clk_div_numerator     :    6;  /*need_des*/
            uint32_t reg_axi_clk_div_num           :    8;  /*need_des*/
        };
        uint32_t val;
    } axi_conf;
    union {
        struct {
            uint32_t reserved0                     :    30;  /*reserved*/
            uint32_t reg_mp_cpu_ocram_clk_en       :    1;  /*need_des*/
            uint32_t reg_mp_cpu_rom_clk_en         :    1;  /*need_des*/
        };
        uint32_t val;
    } mem_icg_conf;
    union {
        struct {
            uint32_t reserved0                     :    28;  /*reserved*/
            uint32_t reg_mspi_flash_pll_clk_en     :    1;  /*need_des*/
            uint32_t reg_mspi_flash_clk_en         :    1;  /*need_des*/
            uint32_t reg_mspi_flash_clk_sel        :    2;  /*need_des*/
        };
        uint32_t val;
    } mspi_flash_conf;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_mspi_flash_core_clk_en    :    1;  /*need_des*/
            uint32_t reg_mspi_flash_core_clk_div_num:    8;  /*need_des*/
        };
        uint32_t val;
    } mspi_flash_core_conf;
    union {
        struct {
            uint32_t reserved0                     :    28;  /*reserved*/
            uint32_t reg_mspi_psram_pll_clk_en     :    1;  /*need_des*/
            uint32_t reg_mspi_psram_clk_en         :    1;  /*need_des*/
            uint32_t reg_mspi_psram_clk_sel        :    2;  /*need_des*/
        };
        uint32_t val;
    } mspi_psram_conf;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_mspi_psram_core_clk_en    :    1;  /*need_des*/
            uint32_t reg_mspi_psram_core_clk_div_num:    8;  /*need_des*/
        };
        uint32_t val;
    } mspi_psram_core_conf;
    union {
        struct {
            uint32_t reserved0                     :    11;  /*reserved*/
            uint32_t reg_ddrc_clk_div_denominator  :    6;  /*need_des*/
            uint32_t reg_ddrc_clk_div_numerator    :    6;  /*need_des*/
            uint32_t reg_ddrc_clk_div_num          :    8;  /*need_des*/
            uint32_t reg_ddr_dfi_clk_en            :    1;  /*need_des*/
        };
        uint32_t val;
    } ddrc_conf;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_timergrp0_t0_clk_en       :    1;  /*need_des*/
            uint32_t reg_timergrp0_t0_clk_sel      :    2;  /*need_des*/
        };
        uint32_t val;
    } timergrp0_t0;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_timergrp0_wdt_clk_en      :    1;  /*need_des*/
            uint32_t reg_timergrp0_wdt_clk_sel     :    2;  /*need_des*/
        };
        uint32_t val;
    } timergrp0_wdt;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_timergrp1_t1_clk_en       :    1;  /*need_des*/
            uint32_t reg_timergrp1_t1_clk_sel      :    2;  /*need_des*/
        };
        uint32_t val;
    } timergrp1_t1;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_timergrp1_wdt_clk_en      :    1;  /*need_des*/
            uint32_t reg_timergrp1_wdt_clk_sel     :    2;  /*need_des*/
        };
        uint32_t val;
    } timergrp1_wdt;
    union {
        struct {
            uint32_t reserved0                     :    30;  /*reserved*/
            uint32_t reg_sys_timer_clk_en          :    1;  /*need_des*/
            uint32_t reg_sys_timer_clk_sel         :    1;  /*need_des*/
        };
        uint32_t val;
    } sys_timer;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_uartf0_clk_en             :    1;  /*need_des*/
            uint32_t reg_uartf0_clk_sel            :    2;  /*need_des*/
        };
        uint32_t val;
    } uartf0;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_uarts0_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_uarts0_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_uarts0_clk_div_num        :    8;  /*need_des*/
        };
        uint32_t val;
    } uarts0;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_uartf1_clk_en             :    1;  /*need_des*/
            uint32_t reg_uartf1_clk_sel            :    2;  /*need_des*/
        };
        uint32_t val;
    } uartf1;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_uarts1_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_uarts1_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_uarts1_clk_div_num        :    8;  /*need_des*/
        };
        uint32_t val;
    } uarts1;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_uartf2_clk_en             :    1;  /*need_des*/
            uint32_t reg_uartf2_clk_sel            :    2;  /*need_des*/
        };
        uint32_t val;
    } uartf2;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_uarts2_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_uarts2_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_uarts2_clk_div_num        :    8;  /*need_des*/
        };
        uint32_t val;
    } uarts2;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_iomux_clk_div_denominator :    6;  /*need_des*/
            uint32_t reg_iomux_clk_div_numerator   :    6;  /*need_des*/
            uint32_t reg_iomux_clk_div_num         :    8;  /*need_des*/
            uint32_t reg_mp_iomux_clk_en           :    1;  /*need_des*/
            uint32_t reg_mp_iomux_clk_sel          :    1;  /*need_des*/
        };
        uint32_t val;
    } iomux_conf;
    union {
        struct {
            uint32_t reserved0                     :    19;  /*reserved*/
            uint32_t reg_timergrp0_tgrt_clk_div_num:    8;  /*need_des*/
            uint32_t reg_timergrp0_tgrt_clk_en     :    1;  /*need_des*/
            uint32_t reg_timergrp0_tgrt_clk_sel    :    4;  /*need_des*/
        };
        uint32_t val;
    } timergrp0_tgrt;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_ref_80m_clk_div_num       :    8;  /*need_des*/
            uint32_t reg_ref_80m_clk_en            :    1;  /*need_des*/
        };
        uint32_t val;
    } ref_80m;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_timergrp0_t1_clk_en       :    1;  /*need_des*/
            uint32_t reg_timergrp0_t1_clk_sel      :    2;  /*need_des*/
        };
        uint32_t val;
    } timergrp0_t1;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_timergrp1_t0_clk_en       :    1;  /*need_des*/
            uint32_t reg_timergrp1_t0_clk_sel      :    2;  /*need_des*/
        };
        uint32_t val;
    } timergrp1_t0;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_xtal_48m_clk_en           :    1;  /*need_des*/
        };
        uint32_t val;
    } xtal_48m_conf;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_cpll_1500m_clk_en         :    1;  /*need_des*/
        };
        uint32_t val;
    } cpll_src_conf;
    union {
        struct {
            uint32_t reserved0                     :    30;  /*reserved*/
            uint32_t reg_spll_480m_clk_en          :    1;  /*need_des*/
            uint32_t reg_spll_500m_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } spll_src_conf;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_fosc_20m_clk_en           :    1;  /*need_des*/
        };
        uint32_t val;
    } fosc_src_conf;
    uint32_t reserved_ec;
    uint32_t reserved_f0;
    union {
        struct {
            uint32_t reserved0                     :    17;  /*reserved*/
            uint32_t reg_ahb_usb_otghs1_clk_en     :    1;  /*need_des*/
            uint32_t reg_ahb_usb_otghs0_clk_en     :    1;  /*need_des*/
            uint32_t reg_ahb_etm_clk_en            :    1;  /*need_des*/
            uint32_t reg_ahb_sdmmc1_clk_en         :    1;  /*need_des*/
            uint32_t reg_ahb_sdmmc0_clk_en         :    1;  /*need_des*/
            uint32_t reg_ahb_pcie1_clk_en          :    1;  /*need_des*/
            uint32_t reg_ahb_pcie0_clk_en          :    1;  /*need_des*/
            uint32_t reg_ahb_gdma_clk_en           :    1;  /*need_des*/
            uint32_t reg_ahb_sys_clk_en            :    1;  /*need_des*/
            uint32_t reg_ahb_conf_clk_en           :    1;  /*need_des*/
            uint32_t reg_ahb_uhci_clk_en           :    1;  /*need_des*/
            uint32_t reg_ahb_uart3_clk_en          :    1;  /*need_des*/
            uint32_t reg_ahb_uart2_clk_en          :    1;  /*need_des*/
            uint32_t reg_ahb_uart1_clk_en          :    1;  /*need_des*/
            uint32_t reg_ahb_uart0_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } ahb_icg_conf;
    union {
        struct {
            uint32_t reserved0                     :    28;  /*reserved*/
            uint32_t reg_apb_usb_otghs1_clk_en     :    1;  /*need_des*/
            uint32_t reg_apb_usb_otghs0_clk_en     :    1;  /*need_des*/
            uint32_t reg_apb_pcie1_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_pcie0_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } apb_ls_div_icg_conf;
    union {
        struct {
            uint32_t reserved0                     :    15;  /*reserved*/
            uint32_t reg_axi_tea_clk_en            :    1;  /*need_des*/
            uint32_t reg_axi_video_enc_mst2_clk_en :    1;  /*need_des*/
            uint32_t reg_axi_video_enc_mst1_clk_en :    1;  /*need_des*/
            uint32_t reg_axi_dw_gdma_mst2_clk_en   :    1;  /*need_des*/
            uint32_t reg_axi_dw_gdma_mst1_clk_en   :    1;  /*need_des*/
            uint32_t reg_axi_ppa_clk_en            :    1;  /*need_des*/
            uint32_t reg_axi_jpeg_clk_en           :    1;  /*need_des*/
            uint32_t reg_axi_dma2d_clk_en          :    1;  /*need_des*/
            uint32_t reg_axi_lcdcam_clk_en         :    1;  /*need_des*/
            uint32_t reg_axi_gdma_icm_clk_en       :    1;  /*need_des*/
            uint32_t reg_axi_switch_clk_en         :    1;  /*need_des*/
            uint32_t reg_axi_pcie1_clk_en          :    1;  /*need_des*/
            uint32_t reg_axi_pcie0_clk_en          :    1;  /*need_des*/
            uint32_t reg_axi_ddrc_clk_en           :    1;  /*need_des*/
            uint32_t reg_axi_psram_clk_en          :    1;  /*need_des*/
            uint32_t reg_axi_flash_clk_en          :    1;  /*need_des*/
            uint32_t reg_axi_icm_sys_clk_en        :    1;  /*need_des*/
        };
        uint32_t val;
    } axi_icg_conf;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_ppll_480m_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } ppll_src_conf;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_ddr_pll_clk_en            :    1;  /*need_des*/
        };
        uint32_t val;
    } ddr_pll_src_conf;
    uint32_t reserved_108;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_sdio_pll_clk_en           :    1;  /*need_des*/
        };
        uint32_t val;
    } sdio_pll_src_conf;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_pad_emac_rgmii_clk_en     :    1;  /*need_des*/
        };
        uint32_t val;
    } pad_emac_rgmii_src_conf;
    union {
        struct {
            uint32_t reserved0                     :    28;  /*reserved*/
            uint32_t reg_pad_emac4_rx_clk_en       :    1;  /*need_des*/
            uint32_t reg_pad_emac3_rx_clk_en       :    1;  /*need_des*/
            uint32_t reg_pad_emac2_rx_clk_en       :    1;  /*need_des*/
            uint32_t reg_pad_emac1_rx_clk_en       :    1;  /*need_des*/
        };
        uint32_t val;
    } pad_emac_rx_src_conf;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_apb_ls_div_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_apb_ls_div_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_apb_ls_div_clk_div_num    :    8;  /*need_des*/
        };
        uint32_t val;
    } apb_ls_div_conf;
    union {
        struct {
            uint32_t reserved0                     :    22;  /*reserved*/
            uint32_t reg_pcie0_core_clk_div_num    :    8;  /*need_des*/
            uint32_t reg_pcie0_core_clk_en         :    1;  /*need_des*/
            uint32_t reg_pcie0_core_clk_sel        :    1;  /*need_des*/
        };
        uint32_t val;
    } pcie0_conf;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_switch_core_clk_div_num   :    8;  /*need_des*/
            uint32_t reg_switch_core_clk_en        :    1;  /*need_des*/
        };
        uint32_t val;
    } switch_conf;
    union {
        struct {
            uint32_t reserved0                     :    16;  /*reserved*/
            uint32_t reg_switch_emac4_tx_clk_inv_sel:    1;  /*need_des*/
            uint32_t reg_switch_emac4_tx_clk_en    :    1;  /*need_des*/
            uint32_t reg_switch_emac4_tx_clk_sel   :    2;  /*need_des*/
            uint32_t reg_switch_emac3_tx_clk_inv_sel:    1;  /*need_des*/
            uint32_t reg_switch_emac3_tx_clk_en    :    1;  /*need_des*/
            uint32_t reg_switch_emac3_tx_clk_sel   :    2;  /*need_des*/
            uint32_t reg_switch_emac2_tx_clk_inv_sel:    1;  /*need_des*/
            uint32_t reg_switch_emac2_tx_clk_en    :    1;  /*need_des*/
            uint32_t reg_switch_emac2_tx_clk_sel   :    2;  /*need_des*/
            uint32_t reg_switch_emac1_tx_clk_inv_sel:    1;  /*need_des*/
            uint32_t reg_switch_emac1_tx_clk_en    :    1;  /*need_des*/
            uint32_t reg_switch_emac1_tx_clk_sel   :    2;  /*need_des*/
        };
        uint32_t val;
    } emac_tx_conf;
    union {
        struct {
            uint32_t reserved0                     :    28;  /*reserved*/
            uint32_t reg_switch_emac4_rx_clk_sel   :    1;  /*need_des*/
            uint32_t reg_switch_emac3_rx_clk_sel   :    1;  /*need_des*/
            uint32_t reg_switch_emac2_rx_clk_sel   :    1;  /*need_des*/
            uint32_t reg_switch_emac1_rx_clk_sel   :    1;  /*need_des*/
        };
        uint32_t val;
    } emac_rx_conf;
    union {
        struct {
            uint32_t reg_pcie0_axi_rst_en          :    1;  /*need_des*/
            uint32_t reg_pcie0_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_pcie0_ahb_rst_en          :    1;  /*need_des*/
            uint32_t reg_pcie0_force_norst         :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } pcie0_ctrl;
    union {
        struct {
            uint32_t reg_pcie1_axi_rst_en          :    1;  /*need_des*/
            uint32_t reg_pcie1_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_pcie1_ahb_rst_en          :    1;  /*need_des*/
            uint32_t reg_pcie1_force_norst         :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } pcie1_ctrl;
    union {
        struct {
            uint32_t reg_switch_axi_rst_en         :    1;  /*need_des*/
            uint32_t reg_switch_apb_rst_en         :    1;  /*need_des*/
            uint32_t reg_switch_force_norst        :    1;  /*need_des*/
            uint32_t reg_switch_core_rst_en        :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } switch_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    22;  /*reserved*/
            uint32_t reg_pcie1_core_clk_div_num    :    8;  /*need_des*/
            uint32_t reg_pcie1_core_clk_en         :    1;  /*need_des*/
            uint32_t reg_pcie1_core_clk_sel        :    1;  /*need_des*/
        };
        uint32_t val;
    } pcie1_conf;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_emac_pad_ref_2p5m_clk_sel :    1;  /*need_des*/
            uint32_t reg_emac_pad_ref_25m_clk_sel  :    1;  /*need_des*/
            uint32_t reg_emac_pad_ref_125m_clk_sel :    1;  /*need_des*/
        };
        uint32_t val;
    } emac_pad_ref_conf;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_ref_pcie0_clk_div_num     :    8;  /*need_des*/
            uint32_t reg_ref_pcie0_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } ref_pcie0;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_ref_pcie1_clk_div_num     :    8;  /*need_des*/
            uint32_t reg_ref_pcie1_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } ref_pcie1;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_ref_emac_125m_clk_div_num :    8;  /*need_des*/
            uint32_t reg_ref_emac_125m_clk_en      :    1;  /*need_des*/
        };
        uint32_t val;
    } ref_emac_125m;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_ref_emac_25m_clk_div_num  :    8;  /*need_des*/
            uint32_t reg_ref_emac_25m_clk_en       :    1;  /*need_des*/
        };
        uint32_t val;
    } ref_emac_25m;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_ref_emac_2p5m_clk_div_num :    8;  /*need_des*/
            uint32_t reg_ref_emac_2p5m_clk_en      :    1;  /*need_des*/
        };
        uint32_t val;
    } ref_emac_2p5m;
    union {
        struct {
            uint32_t reserved0                     :    28;  /*reserved*/
            uint32_t reg_pad_emac4_tx_clk_en       :    1;  /*need_des*/
            uint32_t reg_pad_emac3_tx_clk_en       :    1;  /*need_des*/
            uint32_t reg_pad_emac2_tx_clk_en       :    1;  /*need_des*/
            uint32_t reg_pad_emac1_tx_clk_en       :    1;  /*need_des*/
        };
        uint32_t val;
    } pad_emac_tx_src_conf;
    union {
        struct {
            uint32_t reg_ahb_gdma_ahb_rst_en       :    1;  /*need_des*/
            uint32_t reg_ahb_gdma_force_norst      :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } ahb_gdma_ctrl;
    union {
        struct {
            uint32_t reg_uart3_core_rst_en         :    1;  /*need_des*/
            uint32_t reg_uart3_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_uart3_force_norst         :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } uart3_ctrl;
    union {
        struct {
            uint32_t reg_uart4_core_rst_en         :    1;  /*need_des*/
            uint32_t reg_uart4_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_uart4_force_norst         :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } uart4_ctrl;
    union {
        struct {
            uint32_t reg_twai0_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_twai0_force_norst         :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } twai0_ctrl;
    union {
        struct {
            uint32_t reg_twai1_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_twai1_force_norst         :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } twai1_ctrl;
    union {
        struct {
            uint32_t reg_twai2_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_twai2_force_norst         :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } twai2_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_uartf3_clk_en             :    1;  /*need_des*/
            uint32_t reg_uartf3_clk_sel            :    2;  /*need_des*/
        };
        uint32_t val;
    } uartf3;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_uarts3_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_uarts3_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_uarts3_clk_div_num        :    8;  /*need_des*/
        };
        uint32_t val;
    } uarts3;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_uartf4_clk_en             :    1;  /*need_des*/
            uint32_t reg_uartf4_clk_sel            :    2;  /*need_des*/
        };
        uint32_t val;
    } uartf4;
    union {
        struct {
            uint32_t reserved0                     :    12;  /*reserved*/
            uint32_t reg_uarts4_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_uarts4_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_uarts4_clk_div_num        :    8;  /*need_des*/
        };
        uint32_t val;
    } uarts4;
    union {
        struct {
            uint32_t reserved0                     :    30;  /*reserved*/
            uint32_t reg_twai0_clk_en              :    1;  /*need_des*/
            uint32_t reg_twai0_clk_sel             :    1;  /*need_des*/
        };
        uint32_t val;
    } twai0;
    union {
        struct {
            uint32_t reserved0                     :    30;  /*reserved*/
            uint32_t reg_twai1_clk_en              :    1;  /*need_des*/
            uint32_t reg_twai1_clk_sel             :    1;  /*need_des*/
        };
        uint32_t val;
    } twai1;
    union {
        struct {
            uint32_t reserved0                     :    30;  /*reserved*/
            uint32_t reg_twai2_clk_en              :    1;  /*need_des*/
            uint32_t reg_twai2_clk_sel             :    1;  /*need_des*/
        };
        uint32_t val;
    } twai2;
    union {
        struct {
            uint32_t reg_i2c0_core_rst_en          :    1;  /*need_des*/
            uint32_t reg_i2c0_apb_rst_en           :    1;  /*need_des*/
            uint32_t reg_i2c0_force_norst          :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } i2c0_ctrl;
    union {
        struct {
            uint32_t reg_i2c1_core_rst_en          :    1;  /*need_des*/
            uint32_t reg_i2c1_apb_rst_en           :    1;  /*need_des*/
            uint32_t reg_i2c1_force_norst          :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } i2c1_ctrl;
    union {
        struct {
            uint32_t reg_i2c2_core_rst_en          :    1;  /*need_des*/
            uint32_t reg_i2c2_apb_rst_en           :    1;  /*need_des*/
            uint32_t reg_i2c2_force_norst          :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } i2c2_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_i2c0_clk_div_denominator  :    6;  /*need_des*/
            uint32_t reg_i2c0_clk_div_numerator    :    6;  /*need_des*/
            uint32_t reg_i2c0_clk_div_num          :    8;  /*need_des*/
            uint32_t reg_i2c0_clk_en               :    1;  /*need_des*/
            uint32_t reg_i2c0_clk_sel              :    1;  /*need_des*/
        };
        uint32_t val;
    } i2c0;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_i2c1_clk_div_denominator  :    6;  /*need_des*/
            uint32_t reg_i2c1_clk_div_numerator    :    6;  /*need_des*/
            uint32_t reg_i2c1_clk_div_num          :    8;  /*need_des*/
            uint32_t reg_i2c1_clk_en               :    1;  /*need_des*/
            uint32_t reg_i2c1_clk_sel              :    1;  /*need_des*/
        };
        uint32_t val;
    } i2c1;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_i2c2_clk_div_denominator  :    6;  /*need_des*/
            uint32_t reg_i2c2_clk_div_numerator    :    6;  /*need_des*/
            uint32_t reg_i2c2_clk_div_num          :    8;  /*need_des*/
            uint32_t reg_i2c2_clk_en               :    1;  /*need_des*/
            uint32_t reg_i2c2_clk_sel              :    1;  /*need_des*/
        };
        uint32_t val;
    } i2c2;
    union {
        struct {
            uint32_t reg_rmt_core_rst_en           :    1;  /*need_des*/
            uint32_t reg_rmt_apb_rst_en            :    1;  /*need_des*/
            uint32_t reg_rmt_force_norst           :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } rmt_ctrl;
    union {
        struct {
            uint32_t reg_pcnt_apb_rst_en           :    1;  /*need_des*/
            uint32_t reg_pcnt_force_norst          :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } pcnt_ctrl;
    union {
        struct {
            uint32_t reg_mcpwm0_apb_rst_en         :    1;  /*need_des*/
            uint32_t reg_mcpwm0_force_norst        :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } mcpwm0_ctrl;
    union {
        struct {
            uint32_t reg_mcpwm1_apb_rst_en         :    1;  /*need_des*/
            uint32_t reg_mcpwm1_force_norst        :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } mcpwm1_ctrl;
    union {
        struct {
            uint32_t reg_mcpwm2_apb_rst_en         :    1;  /*need_des*/
            uint32_t reg_mcpwm2_force_norst        :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } mcpwm2_ctrl;
    uint32_t reserved_1b8;
    uint32_t reserved_1bc;
    uint32_t reserved_1c0;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_rmt_clk_div_denominator   :    6;  /*need_des*/
            uint32_t reg_rmt_clk_div_numerator     :    6;  /*need_des*/
            uint32_t reg_rmt_clk_div_num           :    8;  /*need_des*/
            uint32_t reg_rmt_clk_en                :    1;  /*need_des*/
            uint32_t reg_rmt_clk_sel               :    1;  /*need_des*/
        };
        uint32_t val;
    } rmt;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_mcpwm0_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_mcpwm0_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_mcpwm0_clk_div_num        :    8;  /*need_des*/
            uint32_t reg_mcpwm0_clk_en             :    1;  /*need_des*/
            uint32_t reg_mcpwm0_clk_sel            :    2;  /*need_des*/
        };
        uint32_t val;
    } mcpwm0;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_mcpwm1_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_mcpwm1_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_mcpwm1_clk_div_num        :    8;  /*need_des*/
            uint32_t reg_mcpwm1_clk_en             :    1;  /*need_des*/
            uint32_t reg_mcpwm1_clk_sel            :    2;  /*need_des*/
        };
        uint32_t val;
    } mcpwm1;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_mcpwm2_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_mcpwm2_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_mcpwm2_clk_div_num        :    8;  /*need_des*/
            uint32_t reg_mcpwm2_clk_en             :    1;  /*need_des*/
            uint32_t reg_mcpwm2_clk_sel            :    2;  /*need_des*/
        };
        uint32_t val;
    } mcpwm2;
    union {
        struct {
            uint32_t reserved0                     :    23;  /*reserved*/
            uint32_t reg_ref_160m_clk_div_num      :    8;  /*need_des*/
            uint32_t reg_ref_160m_clk_en           :    1;  /*need_des*/
        };
        uint32_t val;
    } ref_160m;
    union {
        struct {
            uint32_t reserved0                     :    2;  /*reserved*/
            uint32_t reg_apb_efuse_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_etm_clk_en            :    1;  /*need_des*/
            uint32_t reg_apb_i2s2_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_i2s1_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_i2s0_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_i2cmst_clk_en         :    1;  /*need_des*/
            uint32_t reg_apb_gpspi3_clk_en         :    1;  /*need_des*/
            uint32_t reg_apb_gpspi2_clk_en         :    1;  /*need_des*/
            uint32_t reg_apb_lcdcam_clk_en         :    1;  /*need_des*/
            uint32_t reg_apb_mcpwm2_clk_en         :    1;  /*need_des*/
            uint32_t reg_apb_mcpwm1_clk_en         :    1;  /*need_des*/
            uint32_t reg_apb_mcpwm0_clk_en         :    1;  /*need_des*/
            uint32_t reg_apb_ledc1_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_ledc0_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_pcnt_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_i2c2_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_i2c1_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_i2c0_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_twai2_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_twai1_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_twai0_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_uhci_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_uart4_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_uart3_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_uart2_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_uart1_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_uart0_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_timergrp1_clk_en      :    1;  /*need_des*/
            uint32_t reg_apb_timergrp0_clk_en      :    1;  /*need_des*/
            uint32_t reg_apb_stimer_clk_en         :    1;  /*need_des*/
        };
        uint32_t val;
    } apb_ls_icg_conf0;
    union {
        struct {
            uint32_t reserved0                     :    18;  /*reserved*/
            uint32_t reg_apb_tea_clk_en            :    1;  /*need_des*/
            uint32_t reg_apb_video_enc_clk_en      :    1;  /*need_des*/
            uint32_t reg_apb_rmt_clk_en            :    1;  /*need_des*/
            uint32_t reg_apb_ddrc_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_dw_gdma_clk_en        :    1;  /*need_des*/
            uint32_t reg_apb_sysreg_clk_en         :    1;  /*need_des*/
            uint32_t reg_apb_axi_gdma_clk_en       :    1;  /*need_des*/
            uint32_t reg_apb_ppa_clk_en            :    1;  /*need_des*/
            uint32_t reg_apb_jpeg_clk_en           :    1;  /*need_des*/
            uint32_t reg_apb_dma2d_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_ahbgdma_clk_en        :    1;  /*need_des*/
            uint32_t reg_apb_switch_clk_en         :    1;  /*need_des*/
            uint32_t reg_apb_psram_clk_en          :    1;  /*need_des*/
            uint32_t reg_apb_flash_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } apb_hs_icg_conf;
    union {
        struct {
            uint32_t reg_ledc0_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_ledc0_force_norst         :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } ledc0_ctrl;
    union {
        struct {
            uint32_t reg_ledc1_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_ledc1_force_norst         :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } ledc1_ctrl;
    union {
        struct {
            uint32_t reg_axi_gdma_apb_rst_en       :    1;  /*need_des*/
            uint32_t reg_axi_gdma_axi_rst_en       :    1;  /*need_des*/
            uint32_t reg_axi_gdma_force_norst      :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } axi_gdma_ctrl;
    union {
        struct {
            uint32_t reg_lcdcam_apb_rst_en         :    1;  /*need_des*/
            uint32_t reg_lcdcam_axi_rst_en         :    1;  /*need_des*/
            uint32_t reg_lcdcam_force_norst        :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } lcdcam_ctrl;
    union {
        struct {
            uint32_t reg_gpspi2_apb_rst_en         :    1;  /*need_des*/
            uint32_t reg_gpspi2_force_norst        :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } gpspi2_ctrl;
    union {
        struct {
            uint32_t reg_gpspi3_apb_rst_en         :    1;  /*need_des*/
            uint32_t reg_gpspi3_force_norst        :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } gpspi3_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_ledc0_clk_en              :    1;  /*need_des*/
            uint32_t reg_ledc0_clk_sel             :    2;  /*need_des*/
        };
        uint32_t val;
    } ledc0;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_ledc1_clk_en              :    1;  /*need_des*/
            uint32_t reg_ledc1_clk_sel             :    2;  /*need_des*/
        };
        uint32_t val;
    } ledc1;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_axi_gdma_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_axi_gdma_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_axi_gdma_clk_div_num      :    8;  /*need_des*/
            uint32_t reg_axi_gdma_clk_en           :    1;  /*need_des*/
            uint32_t reg_axi_gdma_clk_sel          :    2;  /*need_des*/
        };
        uint32_t val;
    } axi_gdma;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_lcdcam_aclk_clk_en        :    1;  /*need_des*/
            uint32_t reg_lcdcam_core_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_lcdcam_core_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_lcdcam_core_clk_div_num   :    8;  /*need_des*/
            uint32_t reg_lcdcam_core_clk_en        :    1;  /*need_des*/
            uint32_t reg_lcdcam_core_clk_sel       :    1;  /*need_des*/
        };
        uint32_t val;
    } lcd_cam;
    union {
        struct {
            uint32_t reserved0                     :    8;  /*reserved*/
            uint32_t reg_gpspi2_hspeed_clk_en      :    1;  /*need_des*/
            uint32_t reg_gpspi2_core_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_gpspi2_core_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_gpspi2_core_clk_div_num   :    8;  /*need_des*/
            uint32_t reg_gpspi2_core_clk_en        :    1;  /*need_des*/
            uint32_t reg_gpspi2_core_clk_sel       :    2;  /*need_des*/
        };
        uint32_t val;
    } gpspi2_hs;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_gpspi2_aclk_clk_en        :    1;  /*need_des*/
            uint32_t reg_gpspi2_mst_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_gpspi2_mst_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_gpspi2_mst_clk_div_num    :    8;  /*need_des*/
            uint32_t reg_gpspi2_mst_clk_clk_en     :    1;  /*need_des*/
        };
        uint32_t val;
    } gpspi2_mst;
    union {
        struct {
            uint32_t reg_sysreg_apb_rst_en         :    1;  /*need_des*/
            uint32_t reg_sysreg_force_norst        :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } sysreg_ctrl;
    union {
        struct {
            uint32_t reg_i2cmst_apb_rst_en         :    1;  /*need_des*/
            uint32_t reg_i2cmst_core_rst_en        :    1;  /*need_des*/
            uint32_t reg_i2cmst_force_norst        :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } i2cmst_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_i2cmst_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_i2cmst_clk_div_numerator  :    6;  /*need_des*/
            uint32_t reg_i2cmst_clk_div_num        :    8;  /*need_des*/
            uint32_t reg_i2cmst_clk_en             :    1;  /*need_des*/
            uint32_t reg_i2cmst_clk_sel            :    1;  /*need_des*/
        };
        uint32_t val;
    } i2cmst;
    union {
        struct {
            uint32_t reg_sdmmc0_sys_clk_en         :    1;  /*need_des*/
            uint32_t reg_sdio0_hs_mode             :    1;  /*reserved*/
            uint32_t reg_sdio0_ls_clk_src_sel      :    1;  /*reserved*/
            uint32_t reg_sdio0_ls_clk_en           :    1;  /*need_des*/
            uint32_t reg_sdio0_ls_clk_div_num      :    8;  /*need_des*/
            uint32_t reserved12                    :    20;
        };
        uint32_t val;
    } sdio0_host_ctrl0;
    union {
        struct {
            uint32_t reg_sdio0_ls_clk_edge_cfg_update:    1;  /*need_des*/
            uint32_t reg_sdio0_ls_clk_edge_l       :    4;  /*need_des*/
            uint32_t reg_sdio0_ls_clk_edge_h       :    4;  /*need_des*/
            uint32_t reg_sdio0_ls_clk_edge_n       :    4;  /*need_des*/
            uint32_t reg_sdio0_ls_slf_clk_edge_sel :    2;  /*need_des*/
            uint32_t reg_sdio0_ls_drv_clk_edge_sel :    2;  /*need_des*/
            uint32_t reg_sdio0_ls_sam_clk_edge_sel :    2;  /*need_des*/
            uint32_t reg_sdio0_ls_slf_clk_en       :    1;  /*need_des*/
            uint32_t reg_sdio0_ls_drv_clk_en       :    1;  /*need_des*/
            uint32_t reg_sdio0_ls_sam_clk_en       :    1;  /*need_des*/
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } sdio0_host_func_ctrl0;
    union {
        struct {
            uint32_t reg_sdmmc1_sys_clk_en         :    1;  /*need_des*/
            uint32_t reg_sdio1_hs_mode             :    1;  /*reserved*/
            uint32_t reg_sdio1_ls_clk_src_sel      :    1;  /*reserved*/
            uint32_t reg_sdio1_ls_clk_en           :    1;  /*need_des*/
            uint32_t reg_sdio1_ls_clk_div_num      :    8;  /*need_des*/
            uint32_t reserved12                    :    20;
        };
        uint32_t val;
    } sdio1_host_ctrl0;
    union {
        struct {
            uint32_t reg_sdio1_ls_clk_edge_cfg_update:    1;  /*need_des*/
            uint32_t reg_sdio1_ls_clk_edge_l       :    4;  /*need_des*/
            uint32_t reg_sdio1_ls_clk_edge_h       :    4;  /*need_des*/
            uint32_t reg_sdio1_ls_clk_edge_n       :    4;  /*need_des*/
            uint32_t reg_sdio1_ls_slf_clk_edge_sel :    2;  /*need_des*/
            uint32_t reg_sdio1_ls_drv_clk_edge_sel :    2;  /*need_des*/
            uint32_t reg_sdio1_ls_sam_clk_edge_sel :    2;  /*need_des*/
            uint32_t reg_sdio1_ls_slf_clk_en       :    1;  /*need_des*/
            uint32_t reg_sdio1_ls_drv_clk_en       :    1;  /*need_des*/
            uint32_t reg_sdio1_ls_sam_clk_en       :    1;  /*need_des*/
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } sdio1_host_func_ctrl0;
    union {
        struct {
            uint32_t reg_sdmmc0_ahb_rst_en         :    1;  /*need_des*/
            uint32_t reg_sdmmc0_force_norst        :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } sdmmc0_ctrl;
    union {
        struct {
            uint32_t reg_sdmmc1_ahb_rst_en         :    1;  /*need_des*/
            uint32_t reg_sdmmc1_force_norst        :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } sdmmc1_ctrl;
    union {
        struct {
            uint32_t reg_i2s0_apb_rst_en           :    1;  /*need_des*/
            uint32_t reg_i2s0_force_norst          :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } i2s0_ctrl;
    union {
        struct {
            uint32_t reg_i2s1_apb_rst_en           :    1;  /*need_des*/
            uint32_t reg_i2s1_force_norst          :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } i2s1_ctrl;
    union {
        struct {
            uint32_t reg_i2s2_apb_rst_en           :    1;  /*need_des*/
            uint32_t reg_i2s2_force_norst          :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } i2s2_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_pad_i2s2_tx_clk_en        :    1;  /*need_des*/
            uint32_t reg_pad_i2s1_tx_clk_en        :    1;  /*need_des*/
            uint32_t reg_pad_i2s0_tx_clk_en        :    1;  /*need_des*/
        };
        uint32_t val;
    } pad_i2s_tx_conf;
    union {
        struct {
            uint32_t reserved0                     :    29;  /*reserved*/
            uint32_t reg_pad_i2s2_rx_clk_en        :    1;  /*need_des*/
            uint32_t reg_pad_i2s1_rx_clk_en        :    1;  /*need_des*/
            uint32_t reg_pad_i2s0_rx_clk_en        :    1;  /*need_des*/
        };
        uint32_t val;
    } pad_i2s_rx_conf;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_i2s0_rx_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_i2s0_rx_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_i2s0_rx_clk_div_num       :    8;  /*need_des*/
            uint32_t reg_i2s0_rx_pad_clk_sel       :    1;  /*need_des*/
            uint32_t reg_i2s0_rx_core_clk_en       :    1;  /*need_des*/
            uint32_t reg_i2s0_rx_core_clk_sel      :    1;  /*need_des*/
        };
        uint32_t val;
    } i2s0_rx;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_i2s0_tx_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_i2s0_tx_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_i2s0_tx_clk_div_num       :    8;  /*need_des*/
            uint32_t reg_i2s0_tx_pad_clk_sel       :    1;  /*need_des*/
            uint32_t reg_i2s0_tx_core_clk_en       :    1;  /*need_des*/
            uint32_t reg_i2s0_tx_core_clk_sel      :    1;  /*need_des*/
        };
        uint32_t val;
    } i2s0_tx;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_i2s0_pad_mst_clk_sel      :    1;  /*need_des*/
        };
        uint32_t val;
    } i2s0_pad;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_i2s1_rx_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_i2s1_rx_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_i2s1_rx_clk_div_num       :    8;  /*need_des*/
            uint32_t reg_i2s1_rx_pad_clk_sel       :    1;  /*need_des*/
            uint32_t reg_i2s1_rx_core_clk_en       :    1;  /*need_des*/
            uint32_t reg_i2s1_rx_core_clk_sel      :    1;  /*need_des*/
        };
        uint32_t val;
    } i2s1_rx;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_i2s1_tx_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_i2s1_tx_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_i2s1_tx_clk_div_num       :    8;  /*need_des*/
            uint32_t reg_i2s1_tx_pad_clk_sel       :    1;  /*need_des*/
            uint32_t reg_i2s1_tx_core_clk_en       :    1;  /*need_des*/
            uint32_t reg_i2s1_tx_core_clk_sel      :    1;  /*need_des*/
        };
        uint32_t val;
    } i2s1_tx;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_i2s1_pad_mst_clk_sel      :    1;  /*need_des*/
        };
        uint32_t val;
    } i2s1_pad;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_i2s2_rx_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_i2s2_rx_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_i2s2_rx_clk_div_num       :    8;  /*need_des*/
            uint32_t reg_i2s2_rx_pad_clk_sel       :    1;  /*need_des*/
            uint32_t reg_i2s2_rx_core_clk_en       :    1;  /*need_des*/
            uint32_t reg_i2s2_rx_core_clk_sel      :    1;  /*need_des*/
        };
        uint32_t val;
    } i2s2_rx;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_i2s2_tx_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_i2s2_tx_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_i2s2_tx_clk_div_num       :    8;  /*need_des*/
            uint32_t reg_i2s2_tx_pad_clk_sel       :    1;  /*need_des*/
            uint32_t reg_i2s2_tx_core_clk_en       :    1;  /*need_des*/
            uint32_t reg_i2s2_tx_core_clk_sel      :    1;  /*need_des*/
        };
        uint32_t val;
    } i2s2_tx;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_i2s2_pad_mst_clk_sel      :    1;  /*need_des*/
        };
        uint32_t val;
    } i2s2_pad;
    union {
        struct {
            uint32_t reg_etm_apb_rst_en            :    1;  /*need_des*/
            uint32_t reg_etm_force_norst           :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } etm_ctrl;
    union {
        struct {
            uint32_t reg_efuse_core_rst_en         :    1;  /*need_des*/
            uint32_t reg_efuse_apb_rst_en          :    1;  /*need_des*/
            uint32_t reg_efuse_force_norst         :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } efuse_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_cam_pad_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_cam_pad_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_cam_pad_clk_div_num       :    8;  /*need_des*/
            uint32_t reg_cam_pad_clk_en            :    1;  /*need_des*/
            uint32_t reg_cam_pad_clk_sel           :    1;  /*need_des*/
        };
        uint32_t val;
    } cam_pad;
    uint32_t reserved_278;
    union {
        struct {
            uint32_t reg_dw_gdma_rst_en            :    1;  /*need_des*/
            uint32_t reg_dw_gdma_force_norst       :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } dw_gdma_ctrl;
    union {
        struct {
            uint32_t reg_dma2d_rst_en              :    1;  /*need_des*/
            uint32_t reg_dma2d_force_norst         :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } dma2d_ctrl;
    union {
        struct {
            uint32_t reg_jpeg_rst_en               :    1;  /*need_des*/
            uint32_t reg_jpeg_force_norst          :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } jpeg_ctrl;
    union {
        struct {
            uint32_t reg_ppa_rst_en                :    1;  /*need_des*/
            uint32_t reg_ppa_force_norst           :    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } ppa_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_efuse_core_clk_en         :    1;  /*need_des*/
            uint32_t reg_efuse_core_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_efuse_core_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_efuse_core_clk_div_num    :    8;  /*need_des*/
            uint32_t reg_efuse_aon_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } efuse_core;
    union {
        struct {
            uint32_t reserved0                     :    6;  /*reserved*/
            uint32_t reg_ppa_clk_en                :    1;  /*need_des*/
            uint32_t reg_jpeg_clk_en               :    1;  /*need_des*/
            uint32_t reg_dma2d_clk_en              :    1;  /*need_des*/
            uint32_t reg_vpu_clk_div_denominator   :    6;  /*need_des*/
            uint32_t reg_vpu_clk_div_numerator     :    6;  /*need_des*/
            uint32_t reg_vpu_clk_div_num           :    8;  /*need_des*/
            uint32_t reg_vpu_clk_en                :    1;  /*need_des*/
            uint32_t reg_vpu_clk_sel               :    2;  /*need_des*/
        };
        uint32_t val;
    } vpu;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_dw_gdma_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_dw_gdma_clk_div_numerator :    6;  /*need_des*/
            uint32_t reg_dw_gdma_clk_div_num       :    8;  /*need_des*/
            uint32_t reg_dw_gdma_clk_en            :    1;  /*need_des*/
            uint32_t reg_dw_gdma_clk_sel           :    2;  /*need_des*/
        };
        uint32_t val;
    } dw_gdma;
    union {
        struct {
            uint32_t reg_rtc_wdt_sosc_rst_en       :    1;  /*need_des*/
            uint32_t reg_rtc_wdt_aon_rst_en        :    1;  /*need_des*/
            uint32_t reg_rtc_wdt_apb_rst_en        :    1;  /*need_des*/
            uint32_t reg_rtc_wdt_force_norst       :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } rtc_wdt_ctrl;
    union {
        struct {
            uint32_t reg_lp_timer_aon_rst_en       :    1;  /*need_des*/
            uint32_t reg_lp_timer_apb_rst_en       :    1;  /*need_des*/
            uint32_t reg_lp_timer_force_norst      :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } lp_timer_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    11;  /*reserved*/
            uint32_t reg_pmu_fast_clk_en           :    1;  /*need_des*/
            uint32_t reg_pmu_fast_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_pmu_fast_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_pmu_fast_clk_div_num      :    8;  /*need_des*/
        };
        uint32_t val;
    } pmu_fast;
    union {
        struct {
            uint32_t reserved0                     :    11;  /*reserved*/
            uint32_t reg_pmu_slow_clk_en           :    1;  /*need_des*/
            uint32_t reg_pmu_slow_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_pmu_slow_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_pmu_slow_clk_div_num      :    8;  /*need_des*/
        };
        uint32_t val;
    } pmu_slow;
    union {
        struct {
            uint32_t reserved0                     :    6;  /*reserved*/
            uint32_t reg_aon_usb_otghs1_wakeup_clk_en:    1;  /*need_des*/
            uint32_t reg_aon_usb_otghs0_wakeup_clk_en:    1;  /*need_des*/
            uint32_t reg_aon_lp_timer_fast_clk_en  :    1;  /*need_des*/
            uint32_t reg_aon_rtc_wdt_fast_clk_en   :    1;  /*need_des*/
            uint32_t reg_aon_fast_clk_en           :    1;  /*need_des*/
            uint32_t reg_aon_fast_clk_sel          :    1;  /*need_des*/
            uint32_t reg_aon_fast_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_aon_fast_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_aon_fast_clk_div_num      :    8;  /*need_des*/
        };
        uint32_t val;
    } aon_fast;
    union {
        struct {
            uint32_t reserved0                     :    6;  /*reserved*/
            uint32_t reg_aon_lp_timer_slow_clk_en  :    1;  /*need_des*/
            uint32_t reg_aon_rtc_wdt_slow_clk_en   :    1;  /*need_des*/
            uint32_t reg_aon_slow_clk_en           :    1;  /*need_des*/
            uint32_t reg_aon_slow_clk_sel          :    1;  /*need_des*/
            uint32_t reg_aon_slow_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_aon_slow_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_aon_slow_clk_div_num      :    10;  /*need_des*/
        };
        uint32_t val;
    } aon_slow;
    union {
        struct {
            uint32_t reserved0                     :    25;  /*reserved*/
            uint32_t reg_apb_usb_serial_jtag_clk_en:    1;  /*need_des*/
            uint32_t reg_apb_rng_clk_en            :    1;  /*need_des*/
            uint32_t reg_apb_pmu_intc_core1_clk_en :    1;  /*need_des*/
            uint32_t reg_apb_pmu_intc_core0_clk_en :    1;  /*need_des*/
            uint32_t reg_apb_rtc_wdt_clk_en        :    1;  /*need_des*/
            uint32_t reg_apb_lp_timer_clk_en       :    1;  /*need_des*/
            uint32_t reg_apb_pmu_clk_en            :    1;  /*need_des*/
        };
        uint32_t val;
    } apb_ls_icg_conf1;
    union {
        struct {
            uint32_t reserved0                     :    30;  /*reserved*/
            uint32_t reg_pmu_clk_auto_sel          :    1;  /*need_des*/
            uint32_t reg_pmu_clk_sel               :    1;  /*need_des*/
        };
        uint32_t val;
    } pmu_sel;
    union {
        struct {
            uint32_t reg_rng_rst_en                :    1;  /*need_des*/
            uint32_t reg_rng_apb_rst_en            :    1;  /*need_des*/
            uint32_t reg_rng_force_norst           :    1;  /*need_des*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } rng_ctrl;
    union {
        struct {
            uint32_t reg_usb_otghs0_apb_rst_en     :    1;  /*need_des*/
            uint32_t reg_usb_otghs0_ahb_rst_en     :    1;  /*need_des*/
            uint32_t reg_usb_otghs0_ref_rst_en     :    1;  /*need_des*/
            uint32_t reg_usb_otghs0_wakeup_rst_en  :    1;  /*need_des*/
            uint32_t reg_usb_otghs0_force_norst    :    1;  /*need_des*/
            uint32_t reserved5                     :    27;
        };
        uint32_t val;
    } usb_otghs0_ctrl;
    uint32_t reserved_2c0;
    uint32_t reserved_2c4;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_rng_clk_en                :    1;  /*need_des*/
        };
        uint32_t val;
    } rng;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_sdio_pll0_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } sdio_pll0_src_conf;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_sdio_pll1_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } sdio_pll1_src_conf;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_sdio_pll2_clk_en          :    1;  /*need_des*/
        };
        uint32_t val;
    } sdio_pll2_src_conf;
    union {
        struct {
            uint32_t reg_pmu_intc_core0_apb_rst_en :    1;  /*need_des*/
            uint32_t reg_pmu_intc_core0_force_norst:    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } pmu_intc_core0_ctrl;
    union {
        struct {
            uint32_t reg_pmu_intc_core1_apb_rst_en :    1;  /*need_des*/
            uint32_t reg_pmu_intc_core1_force_norst:    1;  /*need_des*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } pmu_intc_core1_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    28;  /*reserved*/
            uint32_t reg_mp_cpu_core1_clk_en       :    1;  /*need_des*/
            uint32_t reg_mp_cpu_core0_clk_en       :    1;  /*need_des*/
            uint32_t reg_mp_cpu_axi_clk_en         :    1;  /*need_des*/
            uint32_t reg_mp_cpu_top_clk_en         :    1;  /*need_des*/
        };
        uint32_t val;
    } cpu_icg_conf;
    union {
        struct {
            uint32_t reg_usb_otghs1_apb_rst_en     :    1;  /*need_des*/
            uint32_t reg_usb_otghs1_ahb_rst_en     :    1;  /*need_des*/
            uint32_t reg_usb_otghs1_ref_rst_en     :    1;  /*need_des*/
            uint32_t reg_usb_otghs1_wakeup_rst_en  :    1;  /*need_des*/
            uint32_t reg_usb_otghs1_force_norst    :    1;  /*need_des*/
            uint32_t reserved5                     :    27;
        };
        uint32_t val;
    } usb_otghs1_ctrl;
    union {
        struct {
            uint32_t reg_video_enc_mst1_axi_rst_en :    1;  /*need_des*/
            uint32_t reg_video_enc_mst2_axi_rst_en :    1;  /*need_des*/
            uint32_t reg_video_enc_apb_rst_en      :    1;  /*need_des*/
            uint32_t reg_video_enc_force_norst     :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } video_enc_ctrl;
    uint32_t reserved_2ec;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_video_enc_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_video_enc_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_video_enc_clk_div_num     :    8;  /*need_des*/
            uint32_t reg_video_enc_clk_en          :    1;  /*need_des*/
            uint32_t reg_video_enc_clk_sel         :    2;  /*need_des*/
        };
        uint32_t val;
    } video_enc;
    union {
        struct {
            uint32_t reg_tea_axi_rst_en            :    1;  /*need_des*/
            uint32_t reg_tea_apb_rst_en            :    1;  /*need_des*/
            uint32_t reg_tea_core_rst_en           :    1;  /*need_des*/
            uint32_t reg_tea_force_norst           :    1;  /*need_des*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } tea_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    9;  /*reserved*/
            uint32_t reg_tea_clk_div_denominator   :    6;  /*need_des*/
            uint32_t reg_tea_clk_div_numerator     :    6;  /*need_des*/
            uint32_t reg_tea_clk_div_num           :    8;  /*need_des*/
            uint32_t reg_tea_clk_en                :    1;  /*need_des*/
            uint32_t reg_tea_clk_sel               :    2;  /*need_des*/
        };
        uint32_t val;
    } tea;
    union {
        struct {
            uint32_t reserved0                     :    8;  /*reserved*/
            uint32_t reg_gpspi3_hspeed_clk_en      :    1;  /*need_des*/
            uint32_t reg_gpspi3_core_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_gpspi3_core_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_gpspi3_core_clk_div_num   :    8;  /*need_des*/
            uint32_t reg_gpspi3_core_clk_en        :    1;  /*need_des*/
            uint32_t reg_gpspi3_core_clk_sel       :    2;  /*need_des*/
        };
        uint32_t val;
    } gpspi3_hs;
    union {
        struct {
            uint32_t reserved0                     :    10;  /*reserved*/
            uint32_t reg_gpspi3_aclk_clk_en        :    1;  /*need_des*/
            uint32_t reg_gpspi3_mst_clk_div_denominator:    6;  /*need_des*/
            uint32_t reg_gpspi3_mst_clk_div_numerator:    6;  /*need_des*/
            uint32_t reg_gpspi3_mst_clk_div_num    :    8;  /*need_des*/
            uint32_t reg_gpspi3_mst_clk_clk_en     :    1;  /*need_des*/
        };
        uint32_t val;
    } gpspi3_mst;
    union {
        struct {
            uint32_t reg_usb_serial_jtag_48m_po_rst_en:    1;  /*need_des*/
            uint32_t reg_usb_serial_jtag_apb_po_rst_en:    1;  /*need_des*/
            uint32_t reg_usb_serial_jtag_apb_rst_en:    1;  /*need_des*/
            uint32_t reg_usb_serial_jtag_force_norst:    1;  /*need_des*/
            uint32_t reg_usb_serial_jtag_48m_clk_en:    1;  /*need_des*/
            uint32_t reserved5                     :    27;
        };
        uint32_t val;
    } usb_serial_jtag_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    30;  /*reserved*/
            uint32_t reg_por_aon_clk_en            :    1;  /*need_des*/
            uint32_t reg_por_aon_clk_sel           :    1;  /*need_des*/
        };
        uint32_t val;
    } por_aon;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_usb_serial_jtag_phy_clk_en:    1;  /*need_des*/
        };
        uint32_t val;
    } usb_serial_jtag_phy;
    union {
        struct {
            uint32_t reserved0                     :    11;  /*reserved*/
            uint32_t reg_ref_usb_otghs0_phy_clk_en :    1;  /*need_des*/
            uint32_t reg_ref_usb_otghs0_phy_clk_sel:    2;  /*need_des*/
            uint32_t reg_ref_usb_otghs0_phy_25m_clk_div_num:    8;  /*need_des*/
            uint32_t reg_ref_usb_otghs0_phy_25m_clk_en:    1;  /*need_des*/
            uint32_t reg_ref_usb_otghs0_phy_12m_clk_div_num:    8;  /*need_des*/
            uint32_t reg_ref_usb_otghs0_phy_12m_clk_en:    1;  /*need_des*/
        };
        uint32_t val;
    } ref_usb_otghs0;
    union {
        struct {
            uint32_t reserved0                     :    11;  /*reserved*/
            uint32_t reg_ref_usb_otghs1_phy_clk_en :    1;  /*need_des*/
            uint32_t reg_ref_usb_otghs1_phy_clk_sel:    2;  /*need_des*/
            uint32_t reg_ref_usb_otghs1_phy_25m_clk_div_num:    8;  /*need_des*/
            uint32_t reg_ref_usb_otghs1_phy_25m_clk_en:    1;  /*need_des*/
            uint32_t reg_ref_usb_otghs1_phy_12m_clk_div_num:    8;  /*need_des*/
            uint32_t reg_ref_usb_otghs1_phy_12m_clk_en:    1;  /*need_des*/
        };
        uint32_t val;
    } ref_usb_otghs1;
    union {
        struct {
            uint32_t reserved0                     :    31;  /*reserved*/
            uint32_t reg_xtal_32k_clk_en           :    1;  /*need_des*/
        };
        uint32_t val;
    } xtal_32k_conf;
} mp_sys_clkrst_dev_t;
extern mp_sys_clkrst_dev_t MP_SYS_CLKRST;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_MP_SYS_CLKRST_STRUCT_H_ */
