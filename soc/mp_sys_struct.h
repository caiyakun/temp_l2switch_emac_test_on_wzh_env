/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_MP_SYS_STRUCT_H_
#define _SOC_MP_SYS_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*enable mp sysreg clk Configures clock gating.\\\\0: Support clock only when the application writes registers.\\\\ 1: Always force the clock on for registers.\\\\  */
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } clk_en;
    union {
        struct {
            uint32_t reg_gdma_debug_ch_num         :    3;  /*Config debug channel num in gdma*/
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } gmda_debug_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    2;  /*reserved*/
            uint32_t reg_force_download_boot       :    1;  /*for download boot*/
            uint32_t reserved3                     :    8;  /*reserved*/
            uint32_t reg_io_mux_reset_disable      :    1;  /*reset disable bit for IOMUX*/
            uint32_t reserved12                    :    19;  /*reserved*/
            uint32_t reg_systimer_stall_sel        :    1;  /*0: use systimer_stall signal from hp_core0, 1: use systimer_stall signal from hp_core1 */
        };
        uint32_t val;
    } sys_ctrl;
    union {
        struct {
            uint32_t reg_ahb_icm_h2x_post_wr_en    :    1;  /*Set this bit to speed up ahb write without waiting axi write response.*/
            uint32_t reg_ahb_icm_h2x_cut_through_en:    1;  /*Set this bit to speed up ahb write.*/
            uint32_t reg_ahb_icm_h2x_bridge_busy   :    1;  /*ahb2axi bridge status. 0: idle, 1: ahb2axi busy.*/
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } ahb_icm_h2x_cfg;
    union {
        struct {
            uint32_t reg_axi_gdma2ddr_sel          :    1;  /*reserved*/
            uint32_t reg_cpu2ddr_sel               :    1;  /*reserved*/
            uint32_t reg_dma2d2ddr_sel             :    1;  /*reserved*/
            uint32_t reg_dw_gdma_m0_2ddr_sel       :    1;  /*reserved*/
            uint32_t reg_dw_gdma_m1_2ddr_sel       :    1;  /*reserved*/
            uint32_t reg_h265_m0_2ddr_sel          :    1;  /*reserved*/
            uint32_t reg_h265_m1_2ddr_sel          :    1;  /*reserved*/
            uint32_t reg_hicm2ddr_sel              :    1;  /*reserved*/
            uint32_t reg_pcie_m0_2ddr_sel          :    1;  /*reserved*/
            uint32_t reg_pcie_m1_2ddr_sel          :    1;  /*reserved*/
            uint32_t reg_switch2ddr_sel            :    1;  /*reserved*/
            uint32_t reserved11                    :    21;  /*reserved*/
        };
        uint32_t val;
    } icm_mst_sel_ddr;
    union {
        struct {
            uint32_t reg_ahb_icm_h2x_bresp_err_int_raw:    1;  /*The raw interrupt status of ahb icm h2x error resp*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } ahb_icm_h2x_bresp_err_int_raw;
    union {
        struct {
            uint32_t reg_ahb_icm_h2x_bresp_err_int_st:    1;  /*The masked interrupt status of ahb icm h2x error resp*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } ahb_icm_h2x_bresp_err_int_st;
    union {
        struct {
            uint32_t reg_ahb_icm_h2x_bresp_err_int_ena:    1;  /*Write 1 to enable ahb icm h2x error resp int*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } ahb_icm_h2x_bresp_err_int_ena;
    union {
        struct {
            uint32_t reg_ahb_icm_h2x_bresp_err_int_clr:    1;  /*Write 1 to clear ahb icm h2x error resp int*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } ahb_icm_h2x_bresp_err_int_clr;
    union {
        struct {
            uint32_t reg_cpu_target_waddr_det_int_raw:    1;  /*The raw interrupt status of cpu target write address detect */
            uint32_t reg_cpu_target_raddr_det_int_raw:    1;  /*The raw interrupt status of cpu target read address detect */
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } cpu_target_addr_det_int_raw;
    union {
        struct {
            uint32_t reg_cpu_target_waddr_det_int_st:    1;  /*The masked interrupt status of cpu target write address detect*/
            uint32_t reg_cpu_target_raddr_det_int_st:    1;  /*The masked interrupt status of cpu target read address detect*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } cpu_target_addr_det_int_st;
    union {
        struct {
            uint32_t reg_cpu_target_waddr_det_int_ena:    1;  /*Write 1 to enable cpu target write address detect int*/
            uint32_t reg_cpu_target_raddr_det_int_ena:    1;  /*Write 1 to enable cpu target read address detect int*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } cpu_target_addr_det_int_ena;
    union {
        struct {
            uint32_t reg_cpu_target_waddr_det_int_clr:    1;  /*Write 1 to clear cpu target write address detect int*/
            uint32_t reg_cpu_target_raddr_det_int_clr:    1;  /*Write 1 to clear cpu target read address detect int*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } cpu_target_addr_det_int_clr;
    uint32_t twai0_timestamp_l;
    uint32_t twai0_timestamp_h;
    uint32_t twai1_timestamp_l;
    uint32_t twai1_timestamp_h;
    uint32_t twai2_timestamp_l;
    uint32_t twai2_timestamp_h;
    union {
        struct {
            uint32_t reg_probe_a_mod_sel           :    16;  /*Tihs field is used to selec probe_group from probe_group0 to probe_group15 for module's probe_out[31:0] in a mode */
            uint32_t reg_probe_a_top_sel           :    8;  /*This field is used to selec module's probe_out[31:0] as probe out in a mode*/
            uint32_t reg_probe_l_sel               :    2;  /*This field is used to select probe_out[15:0] */
            uint32_t reg_probe_h_sel               :    2;  /*This field is used to select probe_out[31:16] */
            uint32_t reg_probe_global_en           :    1;  /*Set this bit to enable global debug probe in hp system. */
            uint32_t reserved29                    :    3;  /*reserved*/
        };
        uint32_t val;
    } probea_ctrl;
    union {
        struct {
            uint32_t reg_probe_b_mod_sel           :    16;  /*This field is used to selec probe_group from probe_group0 to probe_group15 for module's probe_out[31:0] in b mode. */
            uint32_t reg_probe_b_top_sel           :    8;  /*This field is used to select module's probe_out[31:0] as probe_out in b mode   */
            uint32_t reg_probe_b_en                :    1;  /*Set this bit to enable b mode for debug probe. 1:  b mode, 0: a mode.       */
            uint32_t reserved25                    :    7;  /*reserved*/
        };
        uint32_t val;
    } probeb_ctrl;
    uint32_t probe_out;
    union {
        struct {
            uint32_t reg_dis_auto_read             :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } efuse_ctrl;
    union {
        struct {
            uint32_t reg_fpga_debug                :    1;  /*iomux fpga debug*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } iomux_fpga_debug;
    uint32_t gpio_st_ctrl0;
    uint32_t gpio_st_ctrl1;
    uint32_t gpio_st_ctrl2;
    uint32_t gpio_st_ctrl3;
    uint32_t gpio_st_ctrl4;
    uint32_t gpio_st_ctrl5;
    uint32_t gpio_st_ctrl6;
    union {
        struct {
            uint32_t reg_gpio_st_7                 :    24;  /*PAD PIN ST control*/
            uint32_t reserved24                    :    8;  /*reserved*/
        };
        uint32_t val;
    } gpio_st_ctrl7;
    uint32_t gpio_he_ctrl0;
    uint32_t gpio_he_ctrl1;
    uint32_t gpio_he_ctrl2;
    union {
        struct {
            uint32_t reg_gpio_hold_en_3            :    28;  /*PAD PIN HE control*/
            uint32_t reserved28                    :    4;  /*reserved*/
        };
        uint32_t val;
    } gpio_he_ctrl3;
    union {
        struct {
            uint32_t reg_gpio_mode_sel             :    3;  /*PAD PIN mode select control \\0 bit: control pad80-89 ms \\1 bit: control pad117-123 \\value 0:3.3v 1:1.8v*/
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } gpio_ms_ctrl;
    uint32_t gpio_o_hold_ctrl0;
    uint32_t gpio_o_hold_ctrl1;
    uint32_t gpio_o_hold_ctrl2;
    union {
        struct {
            uint32_t reg_gpio_0_hold_3             :    28;  /*PAD PIN hold control*/
            uint32_t reserved28                    :    4;  /*reserved*/
        };
        uint32_t val;
    } gpio_o_hold_ctrl3;
    union {
        struct {
            uint32_t reg_gpio_mode_sel_src_ctrl    :    6;  /*PAD PIN MS(Mode select) signal source select */
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } gpio_ms_src_ctrl;
    union {
        struct {
            uint32_t reg_sdmmc0_volt_switch_0_rst  :    1;  /*reserved*/
            uint32_t reg_sdmmc0_volt_switch_1_rst  :    1;  /*reserved*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } sdmmc0_volt_switch_ctrl;
    union {
        struct {
            uint32_t reg_sdmmc1_volt_switch_0_rst  :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } sdmmc1_volt_switch_ctrl;
    union {
        struct {
            uint32_t reg_sdmmc0_time_cnt_1_ms      :    12;  /*reserved*/
            uint32_t reserved12                    :    4;  /*reserved*/
            uint32_t reg_sdmmc0_time_cnt_after_ms  :    12;  /*reserved*/
            uint32_t reserved28                    :    4;  /*reserved*/
        };
        uint32_t val;
    } sdmmc0_volt_switch_cnt_limit;
    union {
        struct {
            uint32_t reg_sdmmc1_time_cnt_1_ms      :    12;  /*reserved*/
            uint32_t reserved12                    :    4;  /*reserved*/
            uint32_t reg_sdmmc1_time_cnt_after_ms  :    12;  /*reserved*/
            uint32_t reserved28                    :    4;  /*reserved*/
        };
        uint32_t val;
    } sdmmc1_volt_switch_cnt_limit;
    union {
        struct {
            uint32_t reg_sd0_volt_switch_0_done_int_raw:    1;  /*The raw interrupt status of sd0 card0 volt switch*/
            uint32_t reg_sd0_volt_switch_1_done_int_raw:    1;  /*The raw interrupt status of sd0 card1 volt switch*/
            uint32_t reg_sd1_volt_switch_0_done_int_raw:    1;  /*The raw interrupt status of sd1 card0 volt switch*/
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } sd_volt_switch_done_int_raw;
    union {
        struct {
            uint32_t reg_sd0_volt_switch_0_done_int_st:    1;  /*The masked interrupt status of sd0 card0 volt switch*/
            uint32_t reg_sd0_volt_switch_1_done_int_st:    1;  /*The masked interrupt status of sd0 card1 volt switch*/
            uint32_t reg_sd1_volt_switch_0_done_int_st:    1;  /*The masked interrupt status of sd1 card0 volt switch*/
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } sd_volt_switch_done_int_st;
    union {
        struct {
            uint32_t reg_sd0_volt_switch_0_done_int_ena:    1;  /*Wirte 1 to enable sd0 card0 volt switch int */
            uint32_t reg_sd0_volt_switch_1_done_int_ena:    1;  /*Wirte 1 to enable sd0 card1 volt switch int */
            uint32_t reg_sd1_volt_switch_0_done_int_ena:    1;  /*Wirte 1 to enable sd1 card0 volt switch int */
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } sd_volt_switch_done_int_ena;
    union {
        struct {
            uint32_t reg_sd0_volt_switch_0_done_int_clr:    1;  /*Wirte 1 to clear sd0 card0 volt switch int */
            uint32_t reg_sd0_volt_switch_1_done_int_clr:    1;  /*Wirte 1 to clear sd0 card1 volt switch int */
            uint32_t reg_sd1_volt_switch_0_done_int_clr:    1;  /*Wirte 1 to clear sd1 card0 volt switch int */
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } sd_volt_switch_done_int_clr;
    union {
        struct {
            uint32_t reg_usb_otghs0_core_ss_scaledown_mode:    2;  /*reserved*/
            uint32_t reg_usb_otghs0_ls_mode        :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_chrgvbus   :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_dischrgvbus:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_dmpulldown :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_dppulldown :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_idpullup   :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_otg_suspendm:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_otg_suspendm_byps:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_pll_en     :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_pll_force_en:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_refclk_mode:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_reset_force_en:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_reset      :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_rtc_xpd_usb20phy:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_self_test  :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_suspendm_force_en:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_suspendm   :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_txbitstuff_en:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_usb_otghs_suspend:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_usb_otghs_wakeup_clr:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_dfifo_hclk_force_on:    1;  /*reserved*/
            uint32_t reg_usb_otghs0_mem_sd         :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_phy_test_done  :    1;  /*reserved*/
            uint32_t reg_usb_otghs0_prdyn          :    1;  /*reserved*/
            uint32_t reserved26                    :    6;  /*reserved*/
        };
        uint32_t val;
    } usb_otghs0_ctrl;
    union {
        struct {
            uint32_t reg_usb_otghs1_core_ss_scaledown_mode:    2;  /*reserved*/
            uint32_t reg_usb_otghs1_ls_mode        :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_chrgvbus   :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_dischrgvbus:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_dmpulldown :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_dppulldown :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_idpullup   :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_otg_suspendm:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_otg_suspendm_byps:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_pll_en     :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_pll_force_en:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_refclk_mode:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_reset_force_en:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_reset      :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_rtc_xpd_usb20phy:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_self_test  :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_suspendm_force_en:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_suspendm   :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_txbitstuff_en:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_usb_otghs_suspend:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_usb_otghs_wakeup_clr:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_dfifo_hclk_force_on:    1;  /*reserved*/
            uint32_t reg_usb_otghs1_mem_sd         :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_phy_test_done  :    1;  /*reserved*/
            uint32_t reg_usb_otghs1_prdyn          :    1;  /*reserved*/
            uint32_t reserved26                    :    6;  /*reserved*/
        };
        uint32_t val;
    } usb_otghs1_ctrl;
    union {
        struct {
            uint32_t reg_ddrphy_bufferen_core      :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } ddrc_ctrl;
    union {
        struct {
            uint32_t reg_dft_ddrphy_bist_mode      :    1;  /*Set to enable BIST mode.*/
            uint32_t reg_dft_ddrphy_bist_mux       :    1;  /*Choose BIST mode. 0: CMD/DATA BIST, 1: Register BIST mode.*/
            uint32_t reg_dft_ddrphy_bist_start     :    1;  /*BIST start*/
            uint32_t reg_dft_ddrphy_bist_complete  :    1;  /*BIST complete status*/
            uint32_t reg_dft_ddrphy_bist_error     :    1;  /*BIST error status*/
            uint32_t reserved5                     :    27;  /*reserved*/
        };
        uint32_t val;
    } ddr_phy_bist;
    union {
        struct {
            uint32_t reg_dft_pcie0_phy_bist_mode   :    4;  /*Set BIST mode.4'h1000: PHY external BIST from TXP/TXN to RXP/RXN, 4'b1001: PHY internal BIST.*/
            uint32_t reg_dft_pcie0_phy_bist_out    :    2;  /*Monitor test probe out. 2'b11: BIST PASS, 2'b10: BIST FAIL*/
            uint32_t reg_dft_pcie0_phy_testo       :    1;  /*PCIe0 PHY test signal output. .*/
            uint32_t reserved7                     :    1;  /*reserved*/
            uint32_t reg_dft_pcie1_phy_bist_mode   :    4;  /*Set BIST mode.4'h1000: PHY external BIST from TXP/TXN to RXP/RXN, 4'b1001: PHY internal BIST.*/
            uint32_t reg_dft_pcie1_phy_bist_out    :    2;  /*Monitor test probe out. 2'b11: BIST PASS, 2'b10: BIST FAIL*/
            uint32_t reg_dft_pcie1_phy_testo       :    1;  /*PCIe1 PHY test signal output. .*/
            uint32_t reserved15                    :    17;  /*reserved*/
        };
        uint32_t val;
    } pcie_phy_bist;
    union {
        struct {
            uint32_t reg_cpu_int_from_cpu_0        :    1;  /*set 1 will triger a interrupt*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_int_from_cpu_0;
    union {
        struct {
            uint32_t reg_cpu_int_from_cpu_1        :    1;  /*set 1 will triger a interrupt*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_int_from_cpu_1;
    union {
        struct {
            uint32_t reg_core0_pad_jdb_pm          :    2;  /*reserved*/
            uint32_t reg_core1_pad_jdb_pm          :    2;  /*reserved*/
            uint32_t reserved4                     :    28;  /*reserved*/
        };
        uint32_t val;
    } cpu_core_pad_jdb_pm;
    uint32_t cpu_core0_pad_mstatus_0;
    uint32_t cpu_core0_pad_mstatus_1;
    uint32_t cpu_core1_pad_mstatus_0;
    uint32_t cpu_core1_pad_mstatus_1;
    uint32_t cpu_core0_pad_retire0_pc_0;
    union {
        struct {
            uint32_t reg_core0_pad_retire0_pc_1    :    8;  /*reserved*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_core0_pad_retire0_pc_1;
    uint32_t cpu_core0_pad_retire1_pc_0;
    union {
        struct {
            uint32_t reg_core0_pad_retire1_pc_1    :    8;  /*reserved*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_core0_pad_retire1_pc_1;
    uint32_t cpu_core0_pad_retire2_pc_0;
    union {
        struct {
            uint32_t reg_core0_pad_retire2_pc_1    :    8;  /*reserved*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_core0_pad_retire2_pc_1;
    uint32_t cpu_core1_pad_retire0_pc_0;
    union {
        struct {
            uint32_t reg_core1_pad_retire0_pc_1    :    8;  /*reserved*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_core1_pad_retire0_pc_1;
    uint32_t cpu_core1_pad_retire1_pc_0;
    union {
        struct {
            uint32_t reg_core1_pad_retire1_pc_1    :    8;  /*reserved*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_core1_pad_retire1_pc_1;
    uint32_t cpu_core1_pad_retire2_pc_0;
    union {
        struct {
            uint32_t reg_core1_pad_retire2_pc_1    :    8;  /*reserved*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_core1_pad_retire2_pc_1;
    union {
        struct {
            uint32_t reg_core0_dbgrq_b             :    1;  /*reserved*/
            uint32_t reg_core0_dbg_mask            :    1;  /*reserved*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } cpu_core0_dbg_ctrl;
    union {
        struct {
            uint32_t reg_core1_dbgrq_b             :    1;  /*reserved*/
            uint32_t reg_core1_dbg_mask            :    1;  /*reserved*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } cpu_core1_dbg_ctrl;
    union {
        struct {
            uint32_t reg_pmu_cpu_rst_casue_mask    :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } pmu_cpu_rst_ctrl;
    union {
        struct {
            uint32_t reg_mp_core0_reset_flag       :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_core0_reset_flag;
    union {
        struct {
            uint32_t reg_mp_core0_reset_flag_clr   :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_core0_reset_flag_clr;
    union {
        struct {
            uint32_t reg_mp_core0_reset_cause      :    6;  /*reserved*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } cpu_core0_reset_cause;
    union {
        struct {
            uint32_t reg_mp_core0_reset_cause_clr  :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_core0_reset_cause_clr;
    union {
        struct {
            uint32_t reg_mp_core1_reset_flag       :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_core1_reset_flag;
    union {
        struct {
            uint32_t reg_mp_core1_reset_flag_clr   :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_core1_reset_flag_clr;
    union {
        struct {
            uint32_t reg_mp_core1_reset_cause      :    6;  /*reserved*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } cpu_core1_reset_cause;
    union {
        struct {
            uint32_t reg_mp_core1_reset_cause_clr  :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_core1_reset_cause_clr;
    union {
        struct {
            uint32_t reg_por_digital_cnt           :    3;  /*reserved*/
            uint32_t reg_por_rst_ori_cnt           :    8;  /*reserved*/
            uint32_t reserved11                    :    21;  /*reserved*/
        };
        uint32_t val;
    } por_rst_ctrl;
    union {
        struct {
            uint32_t reg_enable_cus_debug          :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } enable_cus_debug;
    union {
        struct {
            uint32_t reg_mp_ocram_ahb_rdbuffer_en  :    1;  /*reserved*/
            uint32_t reg_mp_ocram_ahb_wrbuffer_en  :    1;  /*reserved*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } ocram_ahb_buffer_enable;
    uint32_t date;
    uint32_t aon_store0;
    uint32_t aon_store1;
    uint32_t aon_store2;
    uint32_t aon_store3;
    uint32_t aon_store4;
    uint32_t aon_store5;
    uint32_t aon_store6;
    uint32_t aon_store7;
    uint32_t aon_store8;
    uint32_t aon_store9;
    uint32_t aon_store10;
    uint32_t aon_store11;
    uint32_t aon_store12;
    uint32_t aon_store13;
    uint32_t aon_store14;
    uint32_t aon_store15;
    uint32_t cpu_core0_boot_addr_sw;
    uint32_t cpu_core1_boot_addr_sw;
    uint32_t cpu_core0_boot_addr;
    uint32_t cpu_core1_boot_addr;
    union {
        struct {
            uint32_t reg_rng_sample_enable         :    1;  /*enable rng sample chain*/
            uint32_t reserved1                     :    23;  /*reserved*/
            uint32_t reg_rng_sample_cnt            :    8;  /*debug rng sample cnt*/
        };
        uint32_t val;
    } rng_sample_cnt;
    union {
        struct {
            uint32_t reg_cpu_conf_timeout_int_raw  :    1;  /*The raw interrupt status of cpu conf timeout*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_conf_timeout_int_raw;
    union {
        struct {
            uint32_t reg_cpu_conf_timeout_int_st   :    1;  /*The masked interrupt status of cpu conf timeout*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_conf_timeout_int_st;
    union {
        struct {
            uint32_t reg_cpu_conf_timeout_int_ena  :    1;  /*Write 1 to enable cpu conf timeout int*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_conf_timeout_int_ena;
    union {
        struct {
            uint32_t reg_cpu_conf_timeout_int_clr  :    1;  /*Write 1 to clear cpu conf timeout int*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_conf_timeout_int_clr;
    union {
        struct {
            uint32_t reg_cpu_conf_err_dis          :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_conf_error_dis;
    union {
        struct {
            uint32_t reg_cpu_conf_timeout_en       :    1;  /*Set to enable apb timeout function*/
            uint32_t reg_cpu_conf_timeout_thres    :    16;  /*Set apb timeout threshold*/
            uint32_t reserved17                    :    15;  /*reserved*/
        };
        uint32_t val;
    } cpu_conf_timeout_ctrl;
    union {
        struct {
            uint32_t reg_usb_com_sel               :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } usb_com_ctrl;
    union {
        struct {
            uint32_t reg_tea_smb2ddr_sel           :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } tea_smb2ddr_sel;
    union {
        struct {
            uint32_t reg_ana_sdio_pll_phase0       :    6;  /*reserved*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } ana_sdio_pll_phase0;
    union {
        struct {
            uint32_t reg_ana_sdio_pll_phase1       :    6;  /*reserved*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } ana_sdio_pll_phase1;
    union {
        struct {
            uint32_t reg_ana_sdio_pll_phase2       :    6;  /*reserved*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } ana_sdio_pll_phase2;
    union {
        struct {
            uint32_t reg_enb_xtal32k               :    1;  /*reserved*/
            uint32_t reg_dcur_xtal32k              :    3;  /*reserved*/
            uint32_t reg_dgm_xtal32k               :    3;  /*reserved*/
            uint32_t reserved7                     :    25;  /*reserved*/
        };
        uint32_t val;
    } xtal32k;
    union {
        struct {
            uint32_t reg_rtc_en_amux               :    2;  /*reserved*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } rtc_en_amux;
    uint32_t reserved_1ec;
    uint32_t reserved_1f0;
    uint32_t reserved_1f4;
    uint32_t reserved_1f8;
    uint32_t reserved_1fc;
    union {
        struct {
            uint32_t reg_video_enc_vppa_mem_clk_force_on:    1;  /*Set this bit to force on mem clk in video enc vppa  */
            uint32_t reg_video_enc_dma_mem_clk_force_on:    1;  /*Set this bit to force on mem clk in video enc dma  */
            uint32_t reg_video_enc_core_mem_clk_force_on:    1;  /*Set this bit to force on mem clk in video enc core  */
            uint32_t reg_gdma_mem_clk_force_on     :    1;  /*Set this bit to force on mem clk in gdma  */
            uint32_t reg_rmt_mem_clk_force_on      :    1;  /*Set this bit to force on mem clk in rmt  */
            uint32_t reg_switch_mem_clk_force_on   :    1;  /*Set this bit to force on mem clk in switch  */
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } mem_clk_force_on;
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
    union {
        struct {
            uint32_t reg_gdma_mem_pd               :    1;  /*Set this bit to power down gdma internal memory. */
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } gdma_mem_pd;
    union {
        struct {
            uint32_t reg_hp_uart_mem_force_pd      :    1;  /*Set this bit to power down hp uart internal memory.    */
            uint32_t reg_hp_uart_mem_force_pu      :    1;  /*Set this bit to force power up hp uart internal memory  */
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } uart_pd_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    2;  /*reserved*/
            uint32_t reg_ledc0_mem_sd              :    1;  /*Set this bit to force power down ledc0 internal memory. */
            uint32_t reg_ledc1_mem_sd              :    1;  /*Set this bit to force power down ledc1 internal memory.  */
            uint32_t reg_rmt_mem_sd                :    1;  /*Set this bit to force power down rmt internal memory. */
            uint32_t reg_usb_serial_jtag_mem_sd    :    1;  /*Set this bit to force power down usb_serial_jtag internal memory*/
            uint32_t reg_switch_mem_sd0            :    1;  /*Set this bit to force power down usb_serial_jtag internal memory*/
            uint32_t reg_switch_mem_sd1            :    1;  /*Set this bit to force power down usb_serial_jtag internal memory*/
            uint32_t reg_pcie0_mem_sd0             :    1;  /*Set this bit to force power down pcie0 group0 internal memory. */
            uint32_t reg_pcie0_mem_sd1             :    1;  /*Set this bit to force power down pcie0 group1 internal memory. */
            uint32_t reg_pcie1_mem_sd0             :    1;  /*Set this bit to force power down pcie1 group0 internal memory. */
            uint32_t reg_pcie1_mem_sd1             :    1;  /*Set this bit to force power down pcie1 group1 internal memory. */
            uint32_t reg_small_sys_mem_sd          :    1;  /*reserved*/
            uint32_t reg_mp_mem_sd                 :    1;  /*reserved*/
            uint32_t reg_core0_rf_mem_pd           :    1;  /*reserved*/
            uint32_t reg_core0_sram_mem_pd         :    1;  /*reserved*/
            uint32_t reg_core1_rf_mem_pd           :    1;  /*reserved*/
            uint32_t reg_core1_sram_mem_pd         :    1;  /*reserved*/
            uint32_t reg_core_top_rf_mem_pd        :    1;  /*reserved*/
            uint32_t reg_core_top_sram_mem_pd      :    1;  /*reserved*/
            uint32_t reg_sdmmc0_mem_sd             :    1;  /*reserved*/
            uint32_t reg_sdmmc1_mem_sd             :    1;  /*reserved*/
            uint32_t reserved22                    :    10;  /*reserved*/
        };
        uint32_t val;
    } sys_pd_ctrl;
    union {
        struct {
            uint32_t reg_ppa_blend_mem_pd          :    1;  /*Set this bit to power down ppa blend internal memory. */
            uint32_t reg_ppa_sr_mem_pd             :    1;  /*Set this bit to power down ppa sr internal memory. */
            uint32_t reg_jpeg_mem_pd               :    1;  /*Set this bit to power down jpeg internal memory. */
            uint32_t reg_dma2d_mem_pd              :    1;  /*Set this bit to power down dma2d internal memory. */
            uint32_t reg_video_enc_dma_mem_sd      :    1;  /*Set this bit to power down dma2d internal memory. */
            uint32_t reg_video_enc_vppa_mem_sd     :    1;  /*reserved*/
            uint32_t reg_video_enc_core0_mem_sd    :    1;  /*reserved*/
            uint32_t reg_video_enc_core1_mem_sd    :    1;  /*reserved*/
            uint32_t reg_video_enc_core2_mem_sd    :    1;  /*reserved*/
            uint32_t reg_video_enc_core3_mem_sd    :    1;  /*reserved*/
            uint32_t reg_video_enc_core4_mem_sd    :    1;  /*reserved*/
            uint32_t reg_video_enc_core5_mem_sd    :    1;  /*reserved*/
            uint32_t reserved12                    :    20;  /*reserved*/
        };
        uint32_t val;
    } vpu_ctrl;
    union {
        struct {
            uint32_t reg_gdma_mem_prdyn            :    1;  /*record memory power status*/
            uint32_t reg_dma2d_mem_prdyn           :    1;  /*record memory power status*/
            uint32_t reg_jpeg_mem_prdyn            :    1;  /*record memory power status*/
            uint32_t reg_ppa_mem_prdyn             :    1;  /*record memory power status*/
            uint32_t reserved4                     :    1;  /*reserved*/
            uint32_t reg_video_enc_dma_mem_prdyn   :    1;  /*record memory power status*/
            uint32_t reg_video_enc_vppa_mem_prdyn  :    1;  /*record memory power status*/
            uint32_t reg_axi_gdma_mem_prdyn        :    1;  /*record memory power status*/
            uint32_t reg_hp_uart_mem_prdyn         :    1;  /*record memory power status*/
            uint32_t reg_ledc0_mem_prdyn           :    1;  /*record memory power status*/
            uint32_t reg_ledc1_mem_prdyn           :    1;  /*record memory power status*/
            uint32_t reg_rmt_mem_prdyn             :    1;  /*record memory power status*/
            uint32_t reg_lp_efuse_mem_prdyn        :    1;  /*record memory power status*/
            uint32_t reg_usb_serial_jtag_prdyn     :    1;  /*record memory power status*/
            uint32_t reg_video_enc_core0_mem_prdyn :    1;  /*record memory power status*/
            uint32_t reg_video_enc_core1_mem_prdyn :    1;  /*record memory power status*/
            uint32_t reg_video_enc_core2_mem_prdyn :    1;  /*record memory power status*/
            uint32_t reg_video_enc_core3_mem_prdyn :    1;  /*record memory power status*/
            uint32_t reg_video_enc_core4_mem_prdyn :    1;  /*record memory power status*/
            uint32_t reg_video_enc_core5_mem_prdyn :    1;  /*record memory power status*/
            uint32_t reserved20                    :    12;  /*reserved*/
        };
        uint32_t val;
    } prdyn_st;
    union {
        struct {
            uint32_t reg_mp_sys_rdn_eco_en         :    1;  /*reserved*/
            uint32_t reg_mp_sys_rdn_eco_result     :    1;  /*reserved*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } rdn_eco_cs;
    uint32_t switch_sdprf_mem_aux_ctrl;
    uint32_t switch_spram_mem_aux_ctrl;
    uint32_t switch_sprf_mem_aux_ctrl;
    union {
        struct {
            uint32_t reg_sw_sys_rst                :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } sw_sys_rst;
    union {
        struct {
            uint32_t reg_ana_cpu_pll_cal_end       :    1;  /*reserved*/
            uint32_t reg_ana_ddr_pll_cal_end       :    1;  /*reserved*/
            uint32_t reg_ana_sdio_pll_cal_end      :    1;  /*reserved*/
            uint32_t reg_ana_sys0_pll_cal_end      :    1;  /*reserved*/
            uint32_t reg_ana_sys1_pll_cal_end      :    1;  /*reserved*/
            uint32_t reg_ana_sys2_pll_cal_end      :    1;  /*reserved*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } pll_cal_end;
    union {
        struct {
            uint32_t reg_ana_cpu_pll_cal_stop      :    1;  /*reserved*/
            uint32_t reg_ana_ddr_pll_cal_stop      :    1;  /*reserved*/
            uint32_t reg_ana_sdio_pll_cal_stop     :    1;  /*reserved*/
            uint32_t reg_ana_sys0_pll_cal_stop     :    1;  /*reserved*/
            uint32_t reg_ana_sys1_pll_cal_stop     :    1;  /*reserved*/
            uint32_t reg_ana_sys2_pll_cal_stop     :    1;  /*reserved*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } pll_cal_stop;
    union {
        struct {
            uint32_t reg_ana_vgood_vppa            :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } vgood_vppa;
    union {
        struct {
            uint32_t reg_ana_vgood_vpppst          :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } vgood_vpppst;
    union {
        struct {
            uint32_t reg_tea_smb_version           :    9;  /*reserved*/
            uint32_t reserved9                     :    23;  /*reserved*/
        };
        uint32_t val;
    } tea_smb_version;
    union {
        struct {
            uint32_t reg_ana_xpd_perif             :    1;  /*reserved*/
            uint32_t reg_ana_xpd_sar               :    1;  /*reserved*/
            uint32_t reg_ana_dig_iso               :    1;  /*reserved*/
            uint32_t reg_ana_enb_rc_ck_bias        :    1;  /*reserved*/
            uint32_t reg_ana_enb_rc_ck             :    1;  /*reserved*/
            uint32_t reg_ana_enb_slow_ck           :    1;  /*reserved*/
            uint32_t reg_ana_sleep_i2cpor          :    1;  /*reserved*/
            uint32_t reserved7                     :    25;  /*reserved*/
        };
        uint32_t val;
    } analog_ctrl;
    uint32_t cpu_wr_target_addr_l;
    uint32_t cpu_wr_target_addr_l_msk;
    union {
        struct {
            uint32_t reg_cpu_target_waddr_h        :    8;  /*Configure write target address for cpu     */
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_wr_target_addr_h;
    union {
        struct {
            uint32_t reg_cpu_target_waddr_h_msk    :    8;  /*Configure write target address mask for cpu     */
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_wr_target_addr_h_msk;
    uint32_t cpu_rd_target_addr_l;
    uint32_t cpu_rd_target_addr_l_msk;
    union {
        struct {
            uint32_t reg_cpu_target_raddr_h        :    8;  /*Configure read target address for cpu*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_rd_target_addr_h;
    union {
        struct {
            uint32_t reg_cpu_target_raddr_h_msk    :    8;  /*Configure read target address for cpu*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } cpu_rd_target_addr_h_msk;
    union {
        struct {
            uint32_t reg_cpu_waddr_det_en          :    1;  /*Set to enable write target address detection for cpu*/
            uint32_t reg_cpu_raddr_det_en          :    1;  /*Set to enable read target address detection for cpu*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } cpu_addr_detect_enable;
    uint32_t t22nm_rom_aux_xor_value;
    uint32_t t22nm_sprf_aux_xor_value;
    uint32_t t22nm_spram_aux_xor_value;
    uint32_t t22nm_dpram_aux_xor_value;
    uint32_t t22nm_sdprf_aux_xor_value;
    uint32_t video_enc_t22nm_sprf_aux_xor_value;
    uint32_t axi_gdma_t22nm_sprf_aux_xor_value;
    uint32_t ddrc_t22nm_sprf_aux_xor_value;
    uint32_t ocram_t22nm_sprf_aux_xor_value;
    uint32_t core_top_rf_t22nm_sprf_aux_xor_value;
    uint32_t core_top_sram_t22nm_sprf_aux_xor_value;
    uint32_t mp_core0_rf_t22nm_sprf_aux_xor_value;
    uint32_t mp_core0_sram_t22nm_sprf_aux_xor_value;
    uint32_t mp_core1_rf_t22nm_sprf_aux_xor_value;
    uint32_t mp_core1_sram_t22nm_sprf_aux_xor_value;
    union {
        struct {
            uint32_t reg_tea_ust_msg_indexes       :    9;  /*reserved*/
            uint32_t reserved9                     :    23;  /*reserved*/
        };
        uint32_t val;
    } tea_ust_msg_indexes;
    uint32_t tea_ust_time;
    union {
        struct {
            uint32_t reg_cpu_dmactive              :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } cpu_dmactive;
    union {
        struct {
            uint32_t reg_pcie0_mem_sel_true_axi_slave:    1;  /*reserved*/
            uint32_t reg_pcie1_mem_sel_true_axi_slave:    1;  /*reserved*/
            uint32_t reg_ddrc0_sel_true_axi_slave  :    1;  /*reserved*/
            uint32_t reg_ddrc1_sel_true_axi_slave  :    1;  /*reserved*/
            uint32_t reg_flash_sel_true_axi_slave  :    1;  /*reserved*/
            uint32_t reg_psram_sel_true_axi_slave  :    1;  /*reserved*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } true_axi_slave_sel;
    union {
        struct {
            uint32_t reg_pcie0_mem_sel_true_axi_slave_done:    1;  /*reserved*/
            uint32_t reg_pcie1_mem_sel_true_axi_slave_done:    1;  /*reserved*/
            uint32_t reg_ddrc0_sel_true_axi_slave_done:    1;  /*reserved*/
            uint32_t reg_ddrc1_sel_true_axi_slave_done:    1;  /*reserved*/
            uint32_t reg_flash_sel_true_axi_slave_done:    1;  /*reserved*/
            uint32_t reg_psram_sel_true_axi_slave_done:    1;  /*reserved*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } true_axi_slave_sel_status;
} mp_sys_dev_t;
extern mp_sys_dev_t MP_SYS;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_MP_SYS_STRUCT_H_ */
