/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_DDR_ASIC_PHY_STRUCT_H_
#define _SOC_DDR_ASIC_PHY_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t reg_soft_reset                :    1;  /*cfg0*/
            uint32_t reg_soft_reset0               :    1;  /*cfg0*/
            uint32_t reg_soft_reset1               :    1;  /*cfg0*/
            uint32_t reserved3                     :    1;
            uint32_t reg_mem_select_t              :    3;  /*cfg0*/
            uint32_t reg_burst_sel                 :    1;  /*cfg0*/
            uint32_t reg_channel_en                :    9;  /*cfg0*/
            uint32_t reserved17                    :    1;
            uint32_t reg_ddrphy_udimm_addr_mirror  :    2;  /*cfg0*/
            uint32_t reserved20                    :    12;
        };
        uint32_t val;
    } ddr_phy_basic_cfg;
    union {
        struct {
            uint32_t reg_start_calib               :    1;  /*cfg1*/
            uint32_t reg_calib_bypass              :    1;  /*cfg1*/
            uint32_t reg_calcs_sel                 :    2;  /*cfg1*/
            uint32_t reg_wl_enable                 :    1;  /*cfg1*/
            uint32_t reg_wl_bypass                 :    1;  /*cfg1*/
            uint32_t reg_wlcs_sel                  :    2;  /*cfg1*/
            uint32_t reg_wl_enable_2               :    1;  /*cfg1*/
            uint32_t reserved9                     :    7;
            uint32_t reg_wl_loadmode               :    16;  /*cfg1*/
        };
        uint32_t val;
    } ddr_phy_wl_dqs_training;
    union {
        struct {
            uint32_t reg_al_pre_op3                :    6;  /*cfg2*/
            uint32_t reserved6                     :    2;
            uint32_t reg_al_pre_op2                :    6;  /*cfg2*/
            uint32_t reserved14                    :    2;
            uint32_t reg_al_pre_op1                :    6;  /*cfg2*/
            uint32_t reserved22                    :    2;
            uint32_t reg_al_pre_op0                :    6;  /*cfg2*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_al_cfg;
    union {
        struct {
            uint32_t reg_cl_pre_op3                :    6;  /*cfg3*/
            uint32_t reserved6                     :    2;
            uint32_t reg_cl_pre_op2                :    6;  /*cfg3*/
            uint32_t reserved14                    :    2;
            uint32_t reg_cl_pre_op1                :    6;  /*cfg3*/
            uint32_t reserved22                    :    2;
            uint32_t reg_cl_pre_op0                :    6;  /*cfg3*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cl_cfg;
    union {
        struct {
            uint32_t reg_cwl_pre_op3               :    6;  /*cfg4*/
            uint32_t reserved6                     :    2;
            uint32_t reg_cwl_pre_op2               :    6;  /*cfg4*/
            uint32_t reserved14                    :    2;
            uint32_t reg_cwl_pre_op1               :    6;  /*cfg4*/
            uint32_t reserved22                    :    2;
            uint32_t reg_cwl_pre_op0               :    6;  /*cfg4*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cwl_cfg;
    union {
        struct {
            uint32_t reg_h1xclk_invdelaysel_dqcmd  :    5;  /*cfg5*/
            uint32_t reg_cmd_ph90en_bp_1           :    2;  /*cfg5*/
            uint32_t reserved7                     :    1;
            uint32_t reg_h4xclkdqs_invdelaysel_dqcmd:    5;  /*cfg5*/
            uint32_t reserved13                    :    3;
            uint32_t reg_h4xclk_invdelaysel_dqcmd  :    5;  /*cfg5*/
            uint32_t reserved21                    :    3;
            uint32_t reg_fb1xclk_invdelaysel_dqcmd :    5;  /*cfg5*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_clk_ctrl;
    uint32_t ddr_phy_cmd_ph90en;
    union {
        struct {
            uint32_t reg_pllcpi_bias_fsp0          :    3;  /*cfg7*/
            uint32_t reg_pllpostdiven_fsp0         :    1;  /*cfg7*/
            uint32_t reg_pllpostdiv_fsp0           :    3;  /*cfg7*/
            uint32_t reserved7                     :    1;
            uint32_t reg_pllcpi_bias_fsp1          :    3;  /*cfg7*/
            uint32_t reg_pllpostdiven_fsp1         :    1;  /*cfg7*/
            uint32_t reg_pllpostdiv_fsp1           :    3;  /*cfg7*/
            uint32_t reserved15                    :    1;
            uint32_t reg_pllcpi_bias_fsp2          :    3;  /*cfg7*/
            uint32_t reg_pllpostdiven_fsp2         :    1;  /*cfg7*/
            uint32_t reg_pllpostdiv_fsp2           :    3;  /*cfg7*/
            uint32_t reserved23                    :    1;
            uint32_t reg_pllcpi_bias_fsp3          :    3;  /*cfg7*/
            uint32_t reg_pllpostdiven_fsp3         :    1;  /*cfg7*/
            uint32_t reg_pllpostdiv_fsp3           :    3;  /*cfg7*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_pll_cfg;
    union {
        struct {
            uint32_t reg_rxodt_start_point         :    4;  /*cfg8*/
            uint32_t reg_rxodt_length              :    4;  /*cfg8*/
            uint32_t reg_rxodt_stdelay             :    4;  /*cfg8*/
            uint32_t reserved12                    :    1;
            uint32_t reg_rxodt_st_bypass           :    1;  /*cfg8*/
            uint32_t reg_rdodt_bypass              :    1;  /*cfg8*/
            uint32_t reserved15                    :    1;
            uint32_t reg_rden_delay                :    3;  /*cfg8*/
            uint32_t reg_rden_bypass               :    1;  /*cfg8*/
            uint32_t reg_ph90en_bp_dq              :    1;  /*cfg8*/
            uint32_t reg_ph90en_bp                 :    1;  /*cfg8*/
            uint32_t reg_cmdout_mux                :    1;  /*cfg8*/
            uint32_t reg_vt_comp_bp                :    1;  /*cfg8*/
            uint32_t reg_x1clk_div_sel             :    1;  /*cfg8*/
            uint32_t reg_oscen_t                   :    1;  /*cfg8*/
            uint32_t reg_cmd_2t_mode_t             :    1;  /*cfg8*/
            uint32_t reg_cmd_bist_err_inject       :    1;  /*cfg8*/
            uint32_t reg_osc_sel                   :    1;  /*cfg8*/
            uint32_t reg_catrain_init_from_bist    :    1;  /*cfg8*/
            uint32_t reg_bist_init_done_bypass     :    1;  /*cfg8*/
            uint32_t reg_bist_init_done            :    1;  /*cfg8*/
        };
        uint32_t val;
    } ddr_phy_func_ctrl;
    union {
        struct {
            uint32_t reg_ddrc_treset_h_x1024       :    8;  /*cfg9*/
            uint32_t reg_ddrc_treset_l_x1024       :    8;  /*cfg9*/
            uint32_t reg_ddrc_tzqlat               :    8;  /*cfg9*/
            uint32_t reg_ddrc_tzqinit              :    8;  /*cfg9*/
        };
        uint32_t val;
    } ddr_phy_lpddr4_init_timing;
    union {
        struct {
            uint32_t reg_cat_enable                :    1;  /*cfg10*/
            uint32_t reg_cat_start                 :    1;  /*cfg10*/
            uint32_t reg_cat_bp_start              :    1;  /*cfg10*/
            uint32_t reg_cat_bp_en                 :    1;  /*cfg10*/
            uint32_t reg_cat_bp_mode               :    1;  /*cfg10*/
            uint32_t reg_cat_bp_cmd_send           :    1;  /*cfg10*/
            uint32_t reg_cat_bp_rank_sel           :    2;  /*cfg10*/
            uint32_t reg_clk_div_cnt               :    5;  /*cfg10*/
            uint32_t reg_cat_clear                 :    1;  /*cfg10*/
            uint32_t reg_cat_ca_then_cs            :    1;  /*cfg10*/
            uint32_t reserved15                    :    1;
            uint32_t reg_cat_channel_num           :    2;  /*cfg10*/
            uint32_t reg_cat_rank_num              :    2;  /*cfg10*/
            uint32_t reserved20                    :    4;
            uint32_t reg_ddrc_tckeh                :    8;  /*cfg10*/
        };
        uint32_t val;
    } ddr_phy_cmd_bus_train_cfg;
    union {
        struct {
            uint32_t reg_tcacd                     :    5;  /*cfg11*/
            uint32_t reg_tmrw                      :    4;  /*cfg11*/
            uint32_t reserved9                     :    1;
            uint32_t reg_tdstrain                  :    4;  /*cfg11*/
            uint32_t reserved14                    :    1;
            uint32_t reg_tckelck                   :    4;  /*cfg11*/
            uint32_t reserved19                    :    1;
            uint32_t reg_tadr                      :    4;  /*cfg11*/
            uint32_t reserved24                    :    1;
            uint32_t reg_txcbt                     :    4;  /*cfg11*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_timing_cfg0;
    union {
        struct {
            uint32_t reg_tfc                       :    8;  /*cfg12*/
            uint32_t reg_tcaent                    :    8;  /*cfg12*/
            uint32_t reg_tvrefca_long              :    8;  /*cfg12*/
            uint32_t reg_cat_cs_left_scan_steps    :    8;  /*cfg12*/
        };
        uint32_t val;
    } ddr_phy_timing_cfg1;
    union {
        struct {
            uint32_t reg_mr11                      :    8;  /*cfg13*/
            uint32_t reg_mr3                       :    8;  /*cfg13*/
            uint32_t reg_mr2                       :    8;  /*cfg13*/
            uint32_t reg_mr1                       :    8;  /*cfg13*/
        };
        uint32_t val;
    } ddr_phy_mr_cfg0;
    union {
        struct {
            uint32_t reg_mr22                      :    8;  /*cfg14*/
            uint32_t reg_mr14                      :    8;  /*cfg14*/
            uint32_t reg_mr13                      :    8;  /*cfg14*/
            uint32_t reg_cat_cs_right_scan_steps   :    8;  /*cfg14*/
        };
        uint32_t val;
    } ddr_phy_mr_cfg1;
    union {
        struct {
            uint32_t reg_chb_cat_vref_bp_value     :    7;  /*cfg15*/
            uint32_t reserved7                     :    1;
            uint32_t reg_cha_cat_vref_bp_value     :    7;  /*cfg15*/
            uint32_t reserved15                    :    1;
            uint32_t reg_cat_vref_scan_min         :    6;  /*cfg15*/
            uint32_t reserved22                    :    2;
            uint32_t reg_cat_vref_scan_max         :    6;  /*cfg15*/
            uint32_t reg_cat_vref_scan_disable     :    1;  /*cfg15*/
            uint32_t reg_ca_vref_update            :    1;  /*cfg15*/
        };
        uint32_t val;
    } ddr_phy_cat_vref_cfg;
    union {
        struct {
            uint32_t reg_ca_perbit_skew_update     :    1;  /*cfg16*/
            uint32_t reg_cmd_perbit_skew_bp        :    1;  /*cfg16*/
            uint32_t reg_cat_skip_cs_train         :    1;  /*cfg16*/
            uint32_t reg_cat_fc_pd_en              :    1;  /*cfg16*/
            uint32_t reg_cat_fspy_rank             :    2;  /*cfg16*/
            uint32_t reg_cat_skip_fspy             :    1;  /*cfg16*/
            uint32_t reg_cs_pwc_disable            :    1;  /*cfg16*/
            uint32_t reg_cat_vref_scan_steps       :    3;  /*cfg16*/
            uint32_t reg_lpddr4_ca_odt_sel         :    1;  /*cfg16*/
            uint32_t reg_lpddr4_ca_odt             :    2;  /*cfg16*/
            uint32_t reserved14                    :    2;
            uint32_t reg_cs_perbit_skew_offest_fsp3:    4;  /*cfg16*/
            uint32_t reg_cs_perbit_skew_offest_fsp2:    4;  /*cfg16*/
            uint32_t reg_cs_perbit_skew_offest_fsp1:    4;  /*cfg16*/
            uint32_t reg_cs_perbit_skew_offest_fsp0:    4;  /*cfg16*/
        };
        uint32_t val;
    } ddr_phy_cmd_bus_train_cfg1;
    union {
        struct {
            uint32_t reg_cat_cs_train_value        :    6;  /*cfg17*/
            uint32_t reserved6                     :    2;
            uint32_t reg_cat_ca_train_value        :    6;  /*cfg17*/
            uint32_t reserved14                    :    2;
            uint32_t reg_cat_ca_scan_max           :    8;  /*cfg17*/
            uint32_t reg_cat_ck_cke_odt_fix_perbit_skew:    1;  /*cfg17*/
            uint32_t reg_cat_cke_mode              :    1;  /*cfg17*/
            uint32_t reserved26                    :    6;
        };
        uint32_t val;
    } ddr_phy_cat_pattern_cfg;
    union {
        struct {
            uint32_t reg_chb_cat_ca_check_value    :    6;  /*cfg18*/
            uint32_t reserved6                     :    2;
            uint32_t reg_cha_cat_ca_check_value    :    6;  /*cfg18*/
            uint32_t reserved14                    :    2;
            uint32_t reg_chb_cat_cs_check_value    :    6;  /*cfg18*/
            uint32_t reserved22                    :    2;
            uint32_t reg_cha_cat_cs_check_value    :    6;  /*cfg18*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cat_check_pattern;
    union {
        struct {
            uint32_t reg_scr_cketrirnk0            :    1;  /*cfg19*/
            uint32_t reg_scr_cmdtrien              :    1;  /*cfg19*/
            uint32_t reg_scr_csbtrien              :    1;  /*cfg19*/
            uint32_t reg_scr_odttrien              :    1;  /*cfg19*/
            uint32_t reg_scr_sdhsclk_pos1neg0sel   :    1;  /*cfg19*/
            uint32_t reg_scr_sdhsclkb_pos1neg0sel  :    1;  /*cfg19*/
            uint32_t reg_scr_sckdimm0dis           :    1;  /*cfg19*/
            uint32_t reg_scr_rcvmodsel             :    1;  /*cfg19*/
            uint32_t reg_rdptr_delay               :    1;  /*cfg19*/
            uint32_t reg_sync_en                   :    1;  /*cfg19*/
            uint32_t reg_mux_sync_sel              :    1;  /*cfg19*/
            uint32_t reg_mch_odt                   :    1;  /*cfg19*/
            uint32_t reg_bist_ck_select            :    1;  /*cfg19*/
            uint32_t reg_fiford_delay              :    1;  /*cfg19*/
            uint32_t reg_bist_calibst              :    1;  /*cfg19*/
            uint32_t reg_b0_obsdataen              :    1;  /*cfg19*/
            uint32_t reg_b0_cmdobsmuxsel           :    4;  /*cfg19*/
            uint32_t reg_lpddr4_cmd_gap_for_diff_rank:    3;  /*cfg19*/
            uint32_t reserved23                    :    1;
            uint32_t reg_calib_mode_sel            :    1;  /*cfg19*/
            uint32_t reg_sdram_vref_update         :    1;  /*cfg19*/
            uint32_t reg_cmd_abutobsmodeen         :    1;  /*cfg19*/
            uint32_t reg_calib_freq_update         :    1;  /*cfg19*/
            uint32_t reg_wl_freq_update            :    1;  /*cfg19*/
            uint32_t reg_lpddr4_rd_preamble        :    1;  /*cfg19*/
            uint32_t reg_freq_choose_op_t          :    2;  /*cfg19*/
        };
        uint32_t val;
    } ddr_phy_freq_ctrl;
    union {
        struct {
            uint32_t reg_mpr_cnt                   :    8;  /*cfg20*/
            uint32_t reg_bypassen                  :    9;  /*cfg20*/
            uint32_t reg_cmd_iobufact_bp           :    1;  /*cfg20*/
            uint32_t reg_cmd_bypassen              :    1;  /*cfg20*/
            uint32_t reg_cmd_delay_one_ui          :    1;  /*cfg20*/
            uint32_t reg_io_highz_dis              :    1;  /*cfg20*/
            uint32_t reserved21                    :    11;
        };
        uint32_t val;
    } ddr_phy_cmd_cfg;
    union {
        struct {
            uint32_t reg_calib_timeout             :    16;  /*cfg21*/
            uint32_t reg_max_rdvalue               :    8;  /*cfg21*/
            uint32_t reg_dfi_clk_gate_bp           :    1;  /*cfg21*/
            uint32_t reg_cmd_invdelay_lp_en        :    1;  /*cfg21*/
            uint32_t reg_freq_choose_wr_t          :    2;  /*cfg21*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } ddr_phy_dqs_gating_cfg;
    union {
        struct {
            uint32_t reg_wrrank_1xdly              :    3;  /*cfg22*/
            uint32_t reserved3                     :    1;
            uint32_t reg_rdrank_1xdly              :    3;  /*cfg22*/
            uint32_t reg_rdrank_delay_bp           :    1;  /*cfg22*/
            uint32_t reg_rdrank_4xdly              :    2;  /*cfg22*/
            uint32_t reg_rrankdly_4x_dec           :    1;  /*cfg22*/
            uint32_t reg_wl_ranksel_1xdly          :    3;  /*cfg22*/
            uint32_t reserved14                    :    11;  /*cfg22*/
            uint32_t reg_phy_sdram_initial         :    1;  /*cfg22*/
            uint32_t reg_mdll_update_cnt_clear     :    1;  /*cfg22*/
            uint32_t reg_rx_lock_code_bp_en        :    1;  /*cfg22*/
            uint32_t reg_tx_lock_code_bp_en        :    1;  /*cfg22*/
            uint32_t reg_pvt_comp_dis              :    1;  /*cfg22*/
            uint32_t reg_add_dqsenb_delay          :    2;  /*cfg22*/
        };
        uint32_t val;
    } ddr_phy_pvt_comp_cfg;
    union {
        struct {
            uint32_t reg_rx_lock_code_bp_value     :    8;  /*cfg23*/
            uint32_t reg_tx_lock_code_bp_value     :    8;  /*cfg23*/
            uint32_t reg_pvt_comp_req_wait_cnt     :    8;  /*cfg23*/
            uint32_t reg_mdll_chg_margin           :    8;  /*cfg23*/
        };
        uint32_t val;
    } ddr_phy_dll_lock_value;
    union {
        struct {
            uint32_t reg_cmd5_wrap_sel             :    5;  /*cfg24*/
            uint32_t reg_cmd4_wrap_sel             :    5;  /*cfg24*/
            uint32_t reg_cmd3_wrap_sel             :    5;  /*cfg24*/
            uint32_t reg_cmd2_wrap_sel             :    5;  /*cfg24*/
            uint32_t reg_cmd1_wrap_sel             :    5;  /*cfg24*/
            uint32_t reg_cmd0_wrap_sel             :    5;  /*cfg24*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cmd_wrap_sel_cfg0;
    union {
        struct {
            uint32_t reg_cmd11_wrap_sel            :    5;  /*cfg25*/
            uint32_t reg_cmd10_wrap_sel            :    5;  /*cfg25*/
            uint32_t reg_cmd9_wrap_sel             :    5;  /*cfg25*/
            uint32_t reg_cmd8_wrap_sel             :    5;  /*cfg25*/
            uint32_t reg_cmd7_wrap_sel             :    5;  /*cfg25*/
            uint32_t reg_cmd6_wrap_sel             :    5;  /*cfg25*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cmd_wrap_sel_cfg1;
    union {
        struct {
            uint32_t reg_cmd17_wrap_sel            :    5;  /*cfg26*/
            uint32_t reg_cmd16_wrap_sel            :    5;  /*cfg26*/
            uint32_t reg_cmd15_wrap_sel            :    5;  /*cfg26*/
            uint32_t reg_cmd14_wrap_sel            :    5;  /*cfg26*/
            uint32_t reg_cmd13_wrap_sel            :    5;  /*cfg26*/
            uint32_t reg_cmd12_wrap_sel            :    5;  /*cfg26*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cmd_wrap_sel_cfg2;
    union {
        struct {
            uint32_t reg_cmd23_wrap_sel            :    5;  /*cfg27*/
            uint32_t reg_cmd22_wrap_sel            :    5;  /*cfg27*/
            uint32_t reg_cmd21_wrap_sel            :    5;  /*cfg27*/
            uint32_t reg_cmd20_wrap_sel            :    5;  /*cfg27*/
            uint32_t reg_cmd19_wrap_sel            :    5;  /*cfg27*/
            uint32_t reg_cmd18_wrap_sel            :    5;  /*cfg27*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cmd_wrap_sel_cfg3;
    union {
        struct {
            uint32_t reg_cmd29_wrap_sel            :    5;  /*cfg28*/
            uint32_t reg_cmd28_wrap_sel            :    5;  /*cfg28*/
            uint32_t reg_cmd27_wrap_sel            :    5;  /*cfg28*/
            uint32_t reg_cmd26_wrap_sel            :    5;  /*cfg28*/
            uint32_t reg_cmd25_wrap_sel            :    5;  /*cfg28*/
            uint32_t reg_cmd24_wrap_sel            :    5;  /*cfg28*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cmd_wrap_sel_cfg4;
    union {
        struct {
            uint32_t reserved0                     :    25;
            uint32_t reg_cmd30_wrap_sel            :    5;  /*cfg29*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cmd_wrap_sel_cfg5;
    union {
        struct {
            uint32_t reg_byte8_wrap_sel            :    4;  /*cfg30*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ddr_phy_byte_wrap_sel_cfg0;
    union {
        struct {
            uint32_t reg_byte0_wrap_sel            :    4;  /*cfg31*/
            uint32_t reg_byte1_wrap_sel            :    4;  /*cfg31*/
            uint32_t reg_byte2_wrap_sel            :    4;  /*cfg31*/
            uint32_t reg_byte3_wrap_sel            :    4;  /*cfg31*/
            uint32_t reg_byte4_wrap_sel            :    4;  /*cfg31*/
            uint32_t reg_byte5_wrap_sel            :    4;  /*cfg31*/
            uint32_t reg_byte6_wrap_sel            :    4;  /*cfg31*/
            uint32_t reg_byte7_wrap_sel            :    4;  /*cfg31*/
        };
        uint32_t val;
    } ddr_phy_byte_wrap_sel_cfg1;
    uint32_t ddr_phy_cke_ck_remap;
    union {
        struct {
            uint32_t reg_pllpostdiv_1s             :    3;  /*cfg33*/
            uint32_t reg_pllpostdiven_1s           :    1;  /*cfg33*/
            uint32_t reg_pllprediv_dqcmd           :    5;  /*cfg33*/
            uint32_t reserved9                     :    7;
            uint32_t reg_pllfbdiv_dqcmd            :    9;  /*cfg33*/
            uint32_t reserved25                    :    7;
        };
        uint32_t val;
    } ddr_phy_pll_cfg1;
    union {
        struct {
            uint32_t reg_pllpd_dqcmd_t             :    1;  /*cfg34*/
            uint32_t reg_pllclkouten_dqcmd_t       :    1;  /*cfg34*/
            uint32_t reg_pllincz_dqcmd             :    1;  /*cfg34*/
            uint32_t reg_ssc_rstn                  :    1;  /*cfg34*/
            uint32_t reg_pllref_clk_byp_dqcmd      :    1;  /*cfg34*/
            uint32_t reg_pllrstbsel_dqcmd          :    1;  /*cfg34*/
            uint32_t reg_lockenb_dqcmd             :    1;  /*cfg34*/
            uint32_t reg_plltestouten_dqcmd        :    1;  /*cfg34*/
            uint32_t reg_pllcpp_bias_dqcmd         :    3;  /*cfg34*/
            uint32_t reserved11                    :    1;
            uint32_t reg_pllcpi_bias_1s            :    3;  /*cfg34*/
            uint32_t reserved15                    :    1;
            uint32_t reg_pllgvco_bias_dqcmd        :    2;  /*cfg34*/
            uint32_t reg_plltestsel_dqcmd          :    2;  /*cfg34*/
            uint32_t reg_invdelaysel_osc_reg       :    8;  /*cfg34*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } ddr_phy_pll_cfg2;
    union {
        struct {
            uint32_t reg_lp_pllpd_ctrl_en          :    1;  /*cfg35*/
            uint32_t reg_lp_io_ctrl_en             :    1;  /*cfg35*/
            uint32_t reg_lp_dig_clk_ctrl_en        :    1;  /*cfg35*/
            uint32_t reg_lp_spll_clktree_ctrl_en   :    1;  /*cfg35*/
            uint32_t reg_lp_dig_rst_ctrl_en        :    1;  /*cfg35*/
            uint32_t reg_lp_dq_clk_ctrl_en         :    1;  /*cfg35*/
            uint32_t reg_lp_io_dis_ctrl            :    2;  /*cfg35*/
            uint32_t reg_lp_wakeup_threhold        :    4;  /*cfg35*/
            uint32_t reg_lp_vref_ctrl_en           :    1;  /*cfg35*/
            uint32_t reg_lp_wakeup_sel             :    1;  /*cfg35*/
            uint32_t reg_deep_lp_en                :    1;  /*cfg35*/
            uint32_t reg_lp_bypass                 :    1;  /*cfg35*/
            uint32_t reg_outclken                  :    1;  /*cfg35*/
            uint32_t reg_dqclken_t                 :    1;  /*cfg35*/
            uint32_t reg_train_reg_update_en       :    1;  /*cfg35*/
            uint32_t reg_hclk_ca_sel               :    1;  /*cfg35*/
            uint32_t reg_hclk_byte_sel             :    1;  /*cfg35*/
            uint32_t reg_hclk_byte0_sel            :    1;  /*cfg35*/
            uint32_t reg_hclk_byte1_sel            :    1;  /*cfg35*/
            uint32_t reg_hclk_byte2_sel            :    1;  /*cfg35*/
            uint32_t reg_hclk_byte3_sel            :    1;  /*cfg35*/
            uint32_t reg_hclk_byte4_sel            :    1;  /*cfg35*/
            uint32_t reg_hclk_byte5_sel            :    1;  /*cfg35*/
            uint32_t reg_hclk_byte6_sel            :    1;  /*cfg35*/
            uint32_t reg_hclk_byte7_sel            :    1;  /*cfg35*/
            uint32_t reg_hclk_zqcalib_sel          :    1;  /*cfg35*/
            uint32_t reg_hclk_bist_sel             :    1;  /*cfg35*/
            uint32_t reg_hclk_train_sel            :    1;  /*cfg35*/
        };
        uint32_t val;
    } ddr_phy_clk_gating_cfg;
    union {
        struct {
            uint32_t reg_wait_cnt                  :    16;  /*cfg36*/
            uint32_t reg_lp_ackvalue               :    4;  /*cfg36*/
            uint32_t reg_lp_stvalue                :    4;  /*cfg36*/
            uint32_t reserved24                    :    7;
            uint32_t reg_hclk_byte8_sel            :    1;  /*cfg36*/
        };
        uint32_t val;
    } ddr_phy_lp_resp_timing;
    union {
        struct {
            uint32_t reg_zqcali_en                 :    1;  /*cfg37*/
            uint32_t reg_zqcali_bypass             :    1;  /*cfg37*/
            uint32_t reg_zqcali_clear              :    1;  /*cfg37*/
            uint32_t reg_pd_zqcali                 :    1;  /*cfg37*/
            uint32_t reserved4                     :    6;
            uint32_t reg_pu_interval               :    9;  /*cfg37*/
            uint32_t reserved19                    :    1;
            uint32_t reg_zq_chg_interval           :    9;  /*cfg37*/
            uint32_t reg_lpddr4x_zqcal             :    1;  /*cfg37*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_zq_calib_cfg;
    union {
        struct {
            uint32_t reg_drvpu_zqcali_vref_sel     :    8;  /*cfg38*/
            uint32_t reg_drvpd_zqcali_vref_sel     :    8;  /*cfg38*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_zq_calib_vref_sel;
    union {
        struct {
            uint32_t reg_odtpu_zqcali_vref_sel     :    8;  /*cfg39*/
            uint32_t reg_odtpd_zqcali_vref_sel     :    8;  /*cfg39*/
            uint32_t reg_odtlegpd_zqcali           :    5;  /*cfg39*/
            uint32_t reserved21                    :    3;
            uint32_t reg_odtlegpu_zqcali           :    5;  /*cfg39*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_zq_calib_odt_cfg;
    union {
        struct {
            uint32_t reg_wr_train_dq_range_bypass  :    1;  /*cfg40*/
            uint32_t reg_wr_train_dq_start_point_bypass:    1;  /*cfg40*/
            uint32_t reg_wr_train_dqs_adjust_en    :    1;  /*cfg40*/
            uint32_t reserved3                     :    13;
            uint32_t reg_drvlegpd_zqcali           :    5;  /*cfg40*/
            uint32_t reserved21                    :    3;
            uint32_t reg_drvlegpu_zqcali           :    5;  /*cfg40*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_wr_train_cfg;
    union {
        struct {
            uint32_t reg_dq_rd_train_en            :    1;  /*cfg41*/
            uint32_t reg_dqs_rd_train_en           :    1;  /*cfg41*/
            uint32_t reg_rd_train_freq_update      :    1;  /*cfg41*/
            uint32_t reg_rd_train_check_value_en   :    1;  /*cfg41*/
            uint32_t reg_bypass_rd_train_en        :    1;  /*cfg41*/
            uint32_t reg_bypass_rd_train_cmd_start_en:    1;  /*cfg41*/
            uint32_t reg_rd_train_dqs_range_bypass :    1;  /*cfg41*/
            uint32_t reg_rx_vref_value_update      :    1;  /*cfg41*/
            uint32_t reg_rdtrain_cs_sel            :    2;  /*cfg41*/
            uint32_t reg_ddr4_dbi                  :    1;  /*cfg41*/
            uint32_t reg_train_vref_en             :    1;  /*cfg41*/
            uint32_t reg_rd_train_perdef_en        :    1;  /*cfg41*/
            uint32_t reserved13                    :    3;
            uint32_t reg_rd_train_dqs_scan_max     :    7;  /*cfg41*/
            uint32_t reserved23                    :    1;
            uint32_t reg_rd_train_dq_scan_max      :    7;  /*cfg41*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_rd_train_cfg;
    union {
        struct {
            uint32_t reg_lpddr4_mr40_value         :    8;  /*cfg42*/
            uint32_t reg_lpddr4_mr32_value         :    8;  /*cfg42*/
            uint32_t reg_lpddr4_mr20_value         :    8;  /*cfg42*/
            uint32_t reg_lpddr4_mr15_value         :    8;  /*cfg42*/
        };
        uint32_t val;
    } ddr_phy_lpddr4_mr_value;
    union {
        struct {
            uint32_t reg_ddr4_mr3                  :    8;  /*cfg43*/
            uint32_t reserved8                     :    8;
            uint32_t reg_ddr4_mr4_value            :    16;  /*cfg43*/
        };
        uint32_t val;
    } ddr_phy_ddr4_mr_value;
    union {
        struct {
            uint32_t reg_dq_wr_train_auto          :    1;  /*cfg44*/
            uint32_t reg_dq_wr_train_en            :    1;  /*cfg44*/
            uint32_t reg_wr_train_freq_update      :    1;  /*cfg44*/
            uint32_t reg_wr_train_dqs_range_bypass :    1;  /*cfg44*/
            uint32_t reg_wr_train_dqs_default_bypass:    1;  /*cfg44*/
            uint32_t reg_wr_train_rst              :    1;  /*cfg44*/
            uint32_t reg_wrtrain_cs_sel            :    2;  /*cfg44*/
            uint32_t reg_wrtrain_check_data_value_random_gen:    1;  /*cfg44*/
            uint32_t reg_dqs_wr_train_en           :    1;  /*cfg44*/
            uint32_t reserved10                    :    6;
            uint32_t reg_pbit_deskew_offset_for_lpddr4:    12;  /*cfg44*/
            uint32_t reg_wrtrain_lpddr4_vref_range :    1;  /*cfg44*/
            uint32_t reg_dm_wr_train_en            :    1;  /*cfg44*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_wr_train_cfg1;
    union {
        struct {
            uint32_t reg_wr_train_row_addr         :    16;  /*cfg45*/
            uint32_t reg_wr_train_col_addr         :    10;  /*cfg45*/
            uint32_t reserved26                    :    2;
            uint32_t reg_wr_train_ba_addr          :    3;  /*cfg45*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_wr_train_addr_cfg;
    union {
        struct {
            uint32_t reg_phy_refresh_en            :    1;  /*cfg46*/
            uint32_t reg_cke1_lp4x_en              :    1;  /*cfg46*/
            uint32_t reserved2                     :    2;
            uint32_t reg_max_refi_cnt              :    4;  /*cfg46*/
            uint32_t reg_phy_trfc                  :    10;  /*cfg46*/
            uint32_t reg_phy_trefi                 :    14;  /*cfg46*/
        };
        uint32_t val;
    } ddr_phy_auto_ref_cfg;
    union {
        struct {
            uint32_t reg_cmd_ca_enb_lp4            :    1;  /*cfg47*/
            uint32_t reg_resetn_lp4x_en            :    1;  /*cfg47*/
            uint32_t reg_odt1_lp4x_en              :    1;  /*cfg47*/
            uint32_t reg_csb1_lp4x_en              :    1;  /*cfg47*/
            uint32_t reg_odt0_lp4x_en              :    1;  /*cfg47*/
            uint32_t reg_csb0_lp4x_en              :    1;  /*cfg47*/
            uint32_t reg_cke0_lp4x_en              :    1;  /*cfg47*/
            uint32_t reg_ckb_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_ck_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_bg1_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_bg0_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_ba1_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_ba0_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_actn_lp4x_en              :    1;  /*cfg47*/
            uint32_t reg_a17_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_a16_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_a15_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_a14_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_a13_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_a12_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_a11_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_a10_lp4x_en               :    1;  /*cfg47*/
            uint32_t reg_a9_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_a8_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_a7_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_a6_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_a5_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_a4_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_a3_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_a2_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_a1_lp4x_en                :    1;  /*cfg47*/
            uint32_t reg_a0_lp4x_en                :    1;  /*cfg47*/
        };
        uint32_t val;
    } ddr_phy_lp4x_enable;
    union {
        struct {
            uint32_t reg_resetn_pvt_comp_en        :    1;  /*cfg48*/
            uint32_t reg_odt1_pvt_comp_en          :    1;  /*cfg48*/
            uint32_t reg_csb1_pvt_comp_en          :    1;  /*cfg48*/
            uint32_t reg_cke1_pvt_comp_en          :    1;  /*cfg48*/
            uint32_t reg_odt0_pvt_comp_en          :    1;  /*cfg48*/
            uint32_t reg_csb0_pvt_comp_en          :    1;  /*cfg48*/
            uint32_t reg_cke0_pvt_comp_en          :    1;  /*cfg48*/
            uint32_t reg_ckb_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_ck_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_bg1_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_bg0_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_ba1_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_ba0_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_actn_pvt_comp_en          :    1;  /*cfg48*/
            uint32_t reg_a0_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a1_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a2_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a3_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a4_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a5_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a6_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a7_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a8_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a9_pvt_comp_en            :    1;  /*cfg48*/
            uint32_t reg_a10_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_a11_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_a12_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_a13_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_a14_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_a15_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_a16_pvt_comp_en           :    1;  /*cfg48*/
            uint32_t reg_a17_pvt_comp_en           :    1;  /*cfg48*/
        };
        uint32_t val;
    } ddr_phy_pvt_comp_update_en;
    union {
        struct {
            uint32_t reg_cmd_abutslewpd_reg        :    5;  /*cfg49*/
            uint32_t reg_cmd_abutweakpd_reg        :    1;  /*cfg49*/
            uint32_t reserved6                     :    2;
            uint32_t reg_cmd_abutslewpu_reg        :    5;  /*cfg49*/
            uint32_t reg_cmd_abutweakpub_reg       :    1;  /*cfg49*/
            uint32_t reserved14                    :    1;
            uint32_t reg_cmd_fben_reg              :    1;  /*cfg49*/
            uint32_t reg_cmd_fbsel_reg             :    1;  /*cfg49*/
            uint32_t reg_cmd_drv_zqcalib_en        :    1;  /*cfg49*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } ddr_phy_cmd_ctrl_sig;
    union {
        struct {
            uint32_t reg_cmd_abutprcomp0_ck0_reg   :    1;  /*cfg50*/
            uint32_t reg_cmd_abutprcomp1_ck0_reg   :    1;  /*cfg50*/
            uint32_t reg_cmd_abutprcomp2_ck0_reg   :    1;  /*cfg50*/
            uint32_t reg_cmd_abutprcomp3_ck0_reg   :    1;  /*cfg50*/
            uint32_t reg_cmd_abutprcomp4_ck0_reg   :    1;  /*cfg50*/
            uint32_t reserved5                     :    3;
            uint32_t reg_cmd_abutnrcomp0_ck0_reg   :    1;  /*cfg50*/
            uint32_t reg_cmd_abutnrcomp1_ck0_reg   :    1;  /*cfg50*/
            uint32_t reg_cmd_abutnrcomp2_ck0_reg   :    1;  /*cfg50*/
            uint32_t reg_cmd_abutnrcomp3_ck0_reg   :    1;  /*cfg50*/
            uint32_t reg_cmd_abutnrcomp4_ck0_reg   :    1;  /*cfg50*/
            uint32_t reserved13                    :    3;
            uint32_t reg_cmd_abutprcomp0_reg       :    1;  /*cfg50*/
            uint32_t reg_cmd_abutprcomp1_reg       :    1;  /*cfg50*/
            uint32_t reg_cmd_abutprcomp2_reg       :    1;  /*cfg50*/
            uint32_t reg_cmd_abutprcomp3_reg       :    1;  /*cfg50*/
            uint32_t reg_cmd_abutprcomp4_reg       :    1;  /*cfg50*/
            uint32_t reserved21                    :    3;
            uint32_t reg_cmd_abutnrcomp0_reg       :    1;  /*cfg50*/
            uint32_t reg_cmd_abutnrcomp1_reg       :    1;  /*cfg50*/
            uint32_t reg_cmd_abutnrcomp2_reg       :    1;  /*cfg50*/
            uint32_t reg_cmd_abutnrcomp3_reg       :    1;  /*cfg50*/
            uint32_t reg_cmd_abutnrcomp4_reg       :    1;  /*cfg50*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_resistance_cfg;
    union {
        struct {
            uint32_t reg_cmd_abutprcomp0_special_reg:    1;  /*cfg51*/
            uint32_t reg_cmd_abutprcomp1_special_reg:    1;  /*cfg51*/
            uint32_t reg_cmd_abutprcomp2_special_reg:    1;  /*cfg51*/
            uint32_t reg_cmd_abutprcomp3_special_reg:    1;  /*cfg51*/
            uint32_t reg_cmd_abutprcomp4_special_reg:    1;  /*cfg51*/
            uint32_t reserved5                     :    3;
            uint32_t reg_cmd_abutnrcomp0_special_reg:    1;  /*cfg51*/
            uint32_t reg_cmd_abutnrcomp1_special_reg:    1;  /*cfg51*/
            uint32_t reg_cmd_abutnrcomp2_special_reg:    1;  /*cfg51*/
            uint32_t reg_cmd_abutnrcomp3_special_reg:    1;  /*cfg51*/
            uint32_t reg_cmd_abutnrcomp4_special_reg:    1;  /*cfg51*/
            uint32_t reserved13                    :    3;
            uint32_t reg_ram_vref1_margsel_reg     :    9;  /*cfg51*/
            uint32_t reserved25                    :    7;
        };
        uint32_t val;
    } ddr_phy_resistance_special_cfg;
    union {
        struct {
            uint32_t reg_a3_invdelaysel_bp         :    8;  /*cfg52*/
            uint32_t reg_a2_invdelaysel_bp         :    8;  /*cfg52*/
            uint32_t reg_a1_invdelaysel_bp         :    8;  /*cfg52*/
            uint32_t reg_a0_invdelaysel_bp         :    8;  /*cfg52*/
        };
        uint32_t val;
    } ddr_phy_tx_delay_line_cfg0;
    union {
        struct {
            uint32_t reg_a7_invdelaysel_bp         :    8;  /*cfg53*/
            uint32_t reg_a6_invdelaysel_bp         :    8;  /*cfg53*/
            uint32_t reg_a5_invdelaysel_bp         :    8;  /*cfg53*/
            uint32_t reg_a4_invdelaysel_bp         :    8;  /*cfg53*/
        };
        uint32_t val;
    } ddr_phy_tx_delay_line_cfg1;
    union {
        struct {
            uint32_t reg_a11_invdelaysel_bp        :    8;  /*cfg54*/
            uint32_t reg_a10_invdelaysel_bp        :    8;  /*cfg54*/
            uint32_t reg_a9_invdelaysel_bp         :    8;  /*cfg54*/
            uint32_t reg_a8_invdelaysel_bp         :    8;  /*cfg54*/
        };
        uint32_t val;
    } ddr_phy_tx_delay_line_cfg2;
    union {
        struct {
            uint32_t reg_a15_invdelaysel_bp        :    8;  /*cfg55*/
            uint32_t reg_a14_invdelaysel_bp        :    8;  /*cfg55*/
            uint32_t reg_a13_invdelaysel_bp        :    8;  /*cfg55*/
            uint32_t reg_a12_invdelaysel_bp        :    8;  /*cfg55*/
        };
        uint32_t val;
    } ddr_phy_tx_delay_line_cfg3;
    union {
        struct {
            uint32_t reg_ba1_invdelaysel_bp        :    8;  /*cfg56*/
            uint32_t reg_ba0_invdelaysel_bp        :    8;  /*cfg56*/
            uint32_t reg_a17_invdelaysel_bp        :    8;  /*cfg56*/
            uint32_t reg_a16_invdelaysel_bp        :    8;  /*cfg56*/
        };
        uint32_t val;
    } ddr_phy_tx_delay_line_cfg4;
    union {
        struct {
            uint32_t reg_cke1_invdelaysel_bp       :    8;  /*cfg57*/
            uint32_t reg_cke0_invdelaysel_bp       :    8;  /*cfg57*/
            uint32_t reg_bg1_invdelaysel_bp        :    8;  /*cfg57*/
            uint32_t reg_bg0_invdelaysel_bp        :    8;  /*cfg57*/
        };
        uint32_t val;
    } ddr_phy_tx_delay_line_cfg5;
    union {
        struct {
            uint32_t reg_odt1_invdelaysel_bp       :    8;  /*cfg58*/
            uint32_t reg_odt0_invdelaysel_bp       :    8;  /*cfg58*/
            uint32_t reg_ck_invdelaysel_bp         :    8;  /*cfg58*/
            uint32_t reg_ckb_invdelaysel_bp        :    8;  /*cfg58*/
        };
        uint32_t val;
    } ddr_phy_tx_delay_line_cfg6;
    union {
        struct {
            uint32_t reg_actn_invdelaysel_bp       :    8;  /*cfg59*/
            uint32_t reg_resetn_invdelaysel_bp     :    8;  /*cfg59*/
            uint32_t reg_csb1_invdelaysel_bp       :    8;  /*cfg59*/
            uint32_t reg_csb0_invdelaysel_bp       :    8;  /*cfg59*/
        };
        uint32_t val;
    } ddr_phy_tx_delay_line_cfg7;
    union {
        struct {
            uint32_t reg_group1_dq0_train_check_data_value3:    8;  /*cfg60*/
            uint32_t reg_group1_dq0_train_check_data_value2:    8;  /*cfg60*/
            uint32_t reg_group1_dq0_train_check_data_value1:    8;  /*cfg60*/
            uint32_t reg_group1_dq0_train_check_data_value0:    8;  /*cfg60*/
        };
        uint32_t val;
    } ddr_phy_dq0_train_check_data_cfg0;
    union {
        struct {
            uint32_t reg_group1_dq0_train_check_data_value7:    8;  /*cfg61*/
            uint32_t reg_group1_dq0_train_check_data_value6:    8;  /*cfg61*/
            uint32_t reg_group1_dq0_train_check_data_value5:    8;  /*cfg61*/
            uint32_t reg_group1_dq0_train_check_data_value4:    8;  /*cfg61*/
        };
        uint32_t val;
    } ddr_phy_dq0_train_check_data_cfg1;
    union {
        struct {
            uint32_t reg_group1_dq0_train_check_data_value9:    8;  /*cfg62*/
            uint32_t reg_group1_dq0_train_check_data_value8:    8;  /*cfg62*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_dq0_train_check_data_cfg2;
    union {
        struct {
            uint32_t reg_group1_dq1_train_check_data_value3:    8;  /*cfg63*/
            uint32_t reg_group1_dq1_train_check_data_value2:    8;  /*cfg63*/
            uint32_t reg_group1_dq1_train_check_data_value1:    8;  /*cfg63*/
            uint32_t reg_group1_dq1_train_check_data_value0:    8;  /*cfg63*/
        };
        uint32_t val;
    } ddr_phy_dq1_train_check_data_cfg0;
    union {
        struct {
            uint32_t reg_group1_dq1_train_check_data_value7:    8;  /*cfg64*/
            uint32_t reg_group1_dq1_train_check_data_value6:    8;  /*cfg64*/
            uint32_t reg_group1_dq1_train_check_data_value5:    8;  /*cfg64*/
            uint32_t reg_group1_dq1_train_check_data_value4:    8;  /*cfg64*/
        };
        uint32_t val;
    } ddr_phy_dq1_train_check_data_cfg1;
    union {
        struct {
            uint32_t reg_group1_dq1_train_check_data_value9:    8;  /*cfg65*/
            uint32_t reg_group1_dq1_train_check_data_value8:    8;  /*cfg65*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_dq1_train_check_data_cfg2;
    union {
        struct {
            uint32_t reg_group1_dq2_train_check_data_value3:    8;  /*cfg66*/
            uint32_t reg_group1_dq2_train_check_data_value2:    8;  /*cfg66*/
            uint32_t reg_group1_dq2_train_check_data_value1:    8;  /*cfg66*/
            uint32_t reg_group1_dq2_train_check_data_value0:    8;  /*cfg66*/
        };
        uint32_t val;
    } ddr_phy_dq2_train_check_data_cfg0;
    union {
        struct {
            uint32_t reg_group1_dq2_train_check_data_value7:    8;  /*cfg67*/
            uint32_t reg_group1_dq2_train_check_data_value6:    8;  /*cfg67*/
            uint32_t reg_group1_dq2_train_check_data_value5:    8;  /*cfg67*/
            uint32_t reg_group1_dq2_train_check_data_value4:    8;  /*cfg67*/
        };
        uint32_t val;
    } ddr_phy_dq2_train_check_data_cfg1;
    union {
        struct {
            uint32_t reg_group1_dq2_train_check_data_value9:    8;  /*cfg68*/
            uint32_t reg_group1_dq2_train_check_data_value8:    8;  /*cfg68*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_dq2_train_check_data_cfg2;
    union {
        struct {
            uint32_t reg_group1_dq3_train_check_data_value3:    8;  /*cfg69*/
            uint32_t reg_group1_dq3_train_check_data_value2:    8;  /*cfg69*/
            uint32_t reg_group1_dq3_train_check_data_value1:    8;  /*cfg69*/
            uint32_t reg_group1_dq3_train_check_data_value0:    8;  /*cfg69*/
        };
        uint32_t val;
    } ddr_phy_dq3_train_check_data_cfg0;
    union {
        struct {
            uint32_t reg_group1_dq3_train_check_data_value7:    8;  /*cfg70*/
            uint32_t reg_group1_dq3_train_check_data_value6:    8;  /*cfg70*/
            uint32_t reg_group1_dq3_train_check_data_value5:    8;  /*cfg70*/
            uint32_t reg_group1_dq3_train_check_data_value4:    8;  /*cfg70*/
        };
        uint32_t val;
    } ddr_phy_dq3_train_check_data_cfg1;
    union {
        struct {
            uint32_t reg_group1_dq3_train_check_data_value9:    8;  /*cfg71*/
            uint32_t reg_group1_dq3_train_check_data_value8:    8;  /*cfg71*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_dq3_train_check_data_cfg2;
    union {
        struct {
            uint32_t reg_group1_dq4_train_check_data_value3:    8;  /*cfg72*/
            uint32_t reg_group1_dq4_train_check_data_value2:    8;  /*cfg72*/
            uint32_t reg_group1_dq4_train_check_data_value1:    8;  /*cfg72*/
            uint32_t reg_group1_dq4_train_check_data_value0:    8;  /*cfg72*/
        };
        uint32_t val;
    } ddr_phy_dq4_train_check_data_cfg0;
    union {
        struct {
            uint32_t reg_group1_dq4_train_check_data_value7:    8;  /*cfg73*/
            uint32_t reg_group1_dq4_train_check_data_value6:    8;  /*cfg73*/
            uint32_t reg_group1_dq4_train_check_data_value5:    8;  /*cfg73*/
            uint32_t reg_group1_dq4_train_check_data_value4:    8;  /*cfg73*/
        };
        uint32_t val;
    } ddr_phy_dq4_train_check_data_cfg1;
    union {
        struct {
            uint32_t reg_group1_dq4_train_check_data_value9:    8;  /*cfg74*/
            uint32_t reg_group1_dq4_train_check_data_value8:    8;  /*cfg74*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_dq4_train_check_data_cfg2;
    union {
        struct {
            uint32_t reg_group1_dq5_train_check_data_value3:    8;  /*cfg75*/
            uint32_t reg_group1_dq5_train_check_data_value2:    8;  /*cfg75*/
            uint32_t reg_group1_dq5_train_check_data_value1:    8;  /*cfg75*/
            uint32_t reg_group1_dq5_train_check_data_value0:    8;  /*cfg75*/
        };
        uint32_t val;
    } ddr_phy_dq5_train_check_data_cfg0;
    union {
        struct {
            uint32_t reg_group1_dq5_train_check_data_value7:    8;  /*cfg76*/
            uint32_t reg_group1_dq5_train_check_data_value6:    8;  /*cfg76*/
            uint32_t reg_group1_dq5_train_check_data_value5:    8;  /*cfg76*/
            uint32_t reg_group1_dq5_train_check_data_value4:    8;  /*cfg76*/
        };
        uint32_t val;
    } ddr_phy_dq5_train_check_data_cfg1;
    union {
        struct {
            uint32_t reg_group1_dq5_train_check_data_value9:    8;  /*cfg77*/
            uint32_t reg_group1_dq5_train_check_data_value8:    8;  /*cfg77*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_dq5_train_check_data_cfg2;
    union {
        struct {
            uint32_t reg_group1_dq6_train_check_data_value3:    8;  /*cfg78*/
            uint32_t reg_group1_dq6_train_check_data_value2:    8;  /*cfg78*/
            uint32_t reg_group1_dq6_train_check_data_value1:    8;  /*cfg78*/
            uint32_t reg_group1_dq6_train_check_data_value0:    8;  /*cfg78*/
        };
        uint32_t val;
    } ddr_phy_dq6_train_check_data_cfg0;
    union {
        struct {
            uint32_t reg_group1_dq6_train_check_data_value7:    8;  /*cfg79*/
            uint32_t reg_group1_dq6_train_check_data_value6:    8;  /*cfg79*/
            uint32_t reg_group1_dq6_train_check_data_value5:    8;  /*cfg79*/
            uint32_t reg_group1_dq6_train_check_data_value4:    8;  /*cfg79*/
        };
        uint32_t val;
    } ddr_phy_dq6_train_check_data_cfg1;
    union {
        struct {
            uint32_t reg_group1_dq6_train_check_data_value9:    8;  /*cfg80*/
            uint32_t reg_group1_dq6_train_check_data_value8:    8;  /*cfg80*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_dq6_train_check_data_cfg2;
    union {
        struct {
            uint32_t reg_group1_dq7_train_check_data_value3:    8;  /*cfg81*/
            uint32_t reg_group1_dq7_train_check_data_value2:    8;  /*cfg81*/
            uint32_t reg_group1_dq7_train_check_data_value1:    8;  /*cfg81*/
            uint32_t reg_group1_dq7_train_check_data_value0:    8;  /*cfg81*/
        };
        uint32_t val;
    } ddr_phy_dq7_train_check_data_cfg0;
    union {
        struct {
            uint32_t reg_group1_dq7_train_check_data_value7:    8;  /*cfg82*/
            uint32_t reg_group1_dq7_train_check_data_value6:    8;  /*cfg82*/
            uint32_t reg_group1_dq7_train_check_data_value5:    8;  /*cfg82*/
            uint32_t reg_group1_dq7_train_check_data_value4:    8;  /*cfg82*/
        };
        uint32_t val;
    } ddr_phy_dq7_train_check_data_cfg1;
    union {
        struct {
            uint32_t reg_group1_dq7_train_check_data_value9:    8;  /*cfg83*/
            uint32_t reg_group1_dq7_train_check_data_value8:    8;  /*cfg83*/
            uint32_t reg_wrtrain_odt_keep          :    3;  /*cfg83*/
            uint32_t reg_wrtrain_odt_advance       :    1;  /*cfg83*/
            uint32_t reserved20                    :    12;
        };
        uint32_t val;
    } ddr_phy_dq7_train_check_data_cfg2;
    union {
        struct {
            uint32_t reg_rdtrain_wait_vref_valid_cnt:    10;  /*cfg84*/
            uint32_t reg_cmd_invdelaysel_sel       :    6;  /*cfg84*/
            uint32_t reg_train_vref_step_max       :    5;  /*cfg84*/
            uint32_t reg_train_vref_step_min       :    3;  /*cfg84*/
            uint32_t reg_wrtrain_vref_wait_vref_cnt_50ns:    8;  /*cfg84*/
        };
        uint32_t val;
    } ddr_phy_vref_scan_cfg;
    union {
        struct {
            uint32_t reg_lpddr4_write_postamble_sel:    1;  /*cfg85*/
            uint32_t reg_pllpd_bypass              :    1;  /*cfg85*/
            uint32_t reg_pll_lock_bypass           :    1;  /*cfg85*/
            uint32_t reg_all_freq_train_finish     :    1;  /*cfg85*/
            uint32_t reg_freq_choose_op_bypass     :    1;  /*cfg85*/
            uint32_t reg_data_path_clk_gate_dly_bp :    1;  /*cfg85*/
            uint32_t reg_data_path_clk_gate_dly    :    6;  /*cfg85*/
            uint32_t reg_freq_choose_wr_bypass     :    1;  /*cfg85*/
            uint32_t reg_wl_dqs_lock_point         :    6;  /*cfg85*/
            uint32_t reserved19                    :    5;
            uint32_t reg_ddrphy_trp                :    8;  /*cfg85*/
        };
        uint32_t val;
    } ddr_phy_ctrl_mode_select;
    union {
        struct {
            uint32_t reg_train_true_done           :    1;  /*common only rd0*/
            uint32_t reg_train_step3_error         :    1;  /*common only rd0*/
            uint32_t reg_train_step2_error         :    1;  /*common only rd0*/
            uint32_t reg_train_step1_error         :    1;  /*common only rd0*/
            uint32_t reg_train_step3_delay_done    :    1;  /*common only rd0*/
            uint32_t reg_train_step2_vref_done     :    1;  /*common only rd0*/
            uint32_t reg_train_step1_delay_done    :    1;  /*common only rd0*/
            uint32_t reg_train_all_step_done       :    1;  /*common only rd0*/
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } ddr_phy_train_result;
    union {
        struct {
            uint32_t reg_lock_pll_dqcmd            :    1;  /*common only rd1*/
            uint32_t reg_lock_mpll                 :    1;  /*common only rd1*/
            uint32_t reg_dll_lock_to_reg           :    1;  /*common only rd1*/
            uint32_t reg_pwrokcore                 :    1;  /*common only rd1*/
            uint32_t reserved4                     :    1;
            uint32_t reg_user_load_mode_busy       :    1;  /*common only rd1*/
            uint32_t reg_cat_low_freq_sel          :    1;  /*common only rd1*/
            uint32_t reg_pvt_comp_req_wait_time_out_to_reg:    1;  /*common only rd1*/
            uint32_t reg_pvt_comp_cs_to_reg        :    6;  /*common only rd1*/
            uint32_t reserved14                    :    18;
        };
        uint32_t val;
    } ddr_phy_pll_lock_flag;
    union {
        struct {
            uint32_t reg_odtlegpu_zqcali_2reg      :    5;  /*common only rd2*/
            uint32_t reserved5                     :    3;
            uint32_t reg_odtlegpd_zqcali_2reg      :    5;  /*common only rd2*/
            uint32_t reserved13                    :    3;
            uint32_t reg_drvlegpu_zqcali_2reg      :    5;  /*common only rd2*/
            uint32_t reserved21                    :    3;
            uint32_t reg_drvlegpd_zqcali_2reg      :    5;  /*common only rd2*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_zqcali_result0;
    union {
        struct {
            uint32_t reg_odtpu_overflow            :    1;  /*common only rd3*/
            uint32_t reg_odtpd_overflow            :    1;  /*common only rd3*/
            uint32_t reg_drvpu_overflow            :    1;  /*common only rd3*/
            uint32_t reg_drvpd_overflow            :    1;  /*common only rd3*/
            uint32_t reg_zqcali_done               :    1;  /*common only rd3*/
            uint32_t reserved5                     :    3;
            uint32_t reg_x1clk_ndiv_cnt            :    11;  /*common only rd3*/
            uint32_t reserved19                    :    13;
        };
        uint32_t val;
    } ddr_phy_zqcali_result1;
    union {
        struct {
            uint32_t reg_bist_complete             :    1;  /*common only rd4*/
            uint32_t reg_dq_error_flag             :    1;  /*common only rd4*/
            uint32_t reg_dm_error_flag             :    1;  /*common only rd4*/
            uint32_t reg_cmd_error_flag            :    1;  /*common only rd4*/
            uint32_t reserved4                     :    4;
            uint32_t reg_bist_error_dm             :    9;  /*common only rd4*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } ddr_phy_bist_result0;
    uint32_t ddr_phy_bist_result1;
    union {
        struct {
            uint32_t reg_bist_error_cmd            :    30;  /*common only rd6*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_bist_result2;
    union {
        struct {
            uint32_t reg_calib_done_byte           :    9;  /*common only rd7*/
            uint32_t reg_calib_error               :    1;  /*common only rd7*/
            uint32_t reg_calib_end                 :    1;  /*common only rd7*/
            uint32_t reserved11                    :    5;
            uint32_t reg_wl_done_byte              :    9;  /*common only rd7*/
            uint32_t reg_wl2_done                  :    1;  /*common only rd7*/
            uint32_t reserved26                    :    6;
        };
        uint32_t val;
    } ddr_phy_rx_dqs_calib_result;
    union {
        struct {
            uint32_t reg_ca_check_value            :    12;  /*common only rd8*/
            uint32_t reg_chb_rank_cat_bp_done      :    2;  /*common only rd8*/
            uint32_t reg_cha_rank_cat_bp_done      :    2;  /*common only rd8*/
            uint32_t reg_chb_rank_cat_bp_cmd_send_rdy:    2;  /*common only rd8*/
            uint32_t reg_cha_rank_cat_bp_cmd_send_rdy:    2;  /*common only rd8*/
            uint32_t reserved20                    :    12;
        };
        uint32_t val;
    } ddr_phy_cmd_bus_training_info;
    union {
        struct {
            uint32_t reg_chb_cat_bp_cmd_send_done  :    1;  /*common only rd9*/
            uint32_t reg_cha_cat_bp_cmd_send_done  :    1;  /*common only rd9*/
            uint32_t reg_chb_cat_done              :    1;  /*common only rd9*/
            uint32_t reg_cha_cat_done              :    1;  /*common only rd9*/
            uint32_t reserved4                     :    4;
            uint32_t reg_chb_cat_auto_cs_train_err :    10;  /*common only rd9*/
            uint32_t reg_cha_cat_auto_cs_train_err :    10;  /*common only rd9*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } ddr_phy_cmd_bus_training_result;
    union {
        struct {
            uint32_t reg_wrtrain_vref_min_value    :    7;  /*common only rd10*/
            uint32_t reserved7                     :    1;
            uint32_t reg_wrtrain_vref_max_value    :    7;  /*common only rd10*/
            uint32_t reserved15                    :    1;
            uint32_t reg_cmd_invdelaysel           :    8;  /*common only rd10*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } ddr_phy_wrtrain_vref_value;
    union {
        struct {
            uint32_t reg_cha_rank0_ca3_min_perbit_skew_pass:    8;  /*common only rd11*/
            uint32_t reg_cha_rank0_ca2_min_perbit_skew_pass:    8;  /*common only rd11*/
            uint32_t reg_cha_rank0_ca1_min_perbit_skew_pass:    8;  /*common only rd11*/
            uint32_t reg_cha_rank0_ca0_min_perbit_skew_pass:    8;  /*common only rd11*/
        };
        uint32_t val;
    } ddr_phy_cha_tx_delay_line_result;
    union {
        struct {
            uint32_t reg_cha_rank1_ca1_min_perbit_skew_pass:    8;  /*common only rd12*/
            uint32_t reg_cha_rank1_ca0_min_perbit_skew_pass:    8;  /*common only rd12*/
            uint32_t reg_cha_rank0_ca5_min_perbit_skew_pass:    8;  /*common only rd12*/
            uint32_t reg_cha_rank0_ca4_min_perbit_skew_pass:    8;  /*common only rd12*/
        };
        uint32_t val;
    } ddr_phy_cha_tx_delay_line_result1;
    union {
        struct {
            uint32_t reg_cha_rank1_ca5_min_perbit_skew_pass:    8;  /*common only rd13*/
            uint32_t reg_cha_rank1_ca4_min_perbit_skew_pass:    8;  /*common only rd13*/
            uint32_t reg_cha_rank1_ca3_min_perbit_skew_pass:    8;  /*common only rd13*/
            uint32_t reg_cha_rank1_ca2_min_perbit_skew_pass:    8;  /*common only rd13*/
        };
        uint32_t val;
    } ddr_phy_cha_tx_delay_line_result2;
    union {
        struct {
            uint32_t reg_cha_rank1_max_cs_perbit_skew_pass:    8;  /*common only rd14*/
            uint32_t reg_cha_rank0_max_cs_perbit_skew_pass:    8;  /*common only rd14*/
            uint32_t reg_cha_rank1_min_cs_perbit_skew_pass:    8;  /*common only rd14*/
            uint32_t reg_cha_rank0_min_cs_perbit_skew_pass:    8;  /*common only rd14*/
        };
        uint32_t val;
    } ddr_phy_cha_tx_delay_line_result3;
    union {
        struct {
            uint32_t reg_cha_rank0_ca3_max_perbit_skew_pass:    8;  /*common only rd15*/
            uint32_t reg_cha_rank0_ca2_max_perbit_skew_pass:    8;  /*common only rd15*/
            uint32_t reg_cha_rank0_ca1_max_perbit_skew_pass:    8;  /*common only rd15*/
            uint32_t reg_cha_rank0_ca0_max_perbit_skew_pass:    8;  /*common only rd15*/
        };
        uint32_t val;
    } ddr_phy_cha_tx_delay_line_result4;
    union {
        struct {
            uint32_t reg_cha_rank1_ca1_max_perbit_skew_pass:    8;  /*common only rd16*/
            uint32_t reg_cha_rank1_ca0_max_perbit_skew_pass:    8;  /*common only rd16*/
            uint32_t reg_cha_rank0_ca5_max_perbit_skew_pass:    8;  /*common only rd16*/
            uint32_t reg_cha_rank0_ca4_max_perbit_skew_pass:    8;  /*common only rd16*/
        };
        uint32_t val;
    } ddr_phy_cha_tx_delay_line_result5;
    union {
        struct {
            uint32_t reg_cha_rank1_ca5_max_perbit_skew_pass:    8;  /*common only rd17*/
            uint32_t reg_cha_rank1_ca4_max_perbit_skew_pass:    8;  /*common only rd17*/
            uint32_t reg_cha_rank1_ca3_max_perbit_skew_pass:    8;  /*common only rd17*/
            uint32_t reg_cha_rank1_ca2_max_perbit_skew_pass:    8;  /*common only rd17*/
        };
        uint32_t val;
    } ddr_phy_cha_tx_delay_line_result6;
    union {
        struct {
            uint32_t reg_chb_rank0_ca3_min_perbit_skew_pass:    8;  /*common only rd18*/
            uint32_t reg_chb_rank0_ca2_min_perbit_skew_pass:    8;  /*common only rd18*/
            uint32_t reg_chb_rank0_ca1_min_perbit_skew_pass:    8;  /*common only rd18*/
            uint32_t reg_chb_rank0_ca0_min_perbit_skew_pass:    8;  /*common only rd18*/
        };
        uint32_t val;
    } ddr_phy_chb_tx_delay_line_result;
    union {
        struct {
            uint32_t reg_chb_rank1_ca1_min_perbit_skew_pass:    8;  /*common only rd19*/
            uint32_t reg_chb_rank1_ca0_min_perbit_skew_pass:    8;  /*common only rd19*/
            uint32_t reg_chb_rank0_ca5_min_perbit_skew_pass:    8;  /*common only rd19*/
            uint32_t reg_chb_rank0_ca4_min_perbit_skew_pass:    8;  /*common only rd19*/
        };
        uint32_t val;
    } ddr_phy_chb_tx_delay_line_result1;
    union {
        struct {
            uint32_t reg_chb_rank1_ca5_min_perbit_skew_pass:    8;  /*common only rd20*/
            uint32_t reg_chb_rank1_ca4_min_perbit_skew_pass:    8;  /*common only rd20*/
            uint32_t reg_chb_rank1_ca3_min_perbit_skew_pass:    8;  /*common only rd20*/
            uint32_t reg_chb_rank1_ca2_min_perbit_skew_pass:    8;  /*common only rd20*/
        };
        uint32_t val;
    } ddr_phy_chb_tx_delay_line_result2;
    union {
        struct {
            uint32_t reg_chb_rank1_max_cs_perbit_skew_pass:    8;  /*common only rd21*/
            uint32_t reg_chb_rank0_max_cs_perbit_skew_pass:    8;  /*common only rd21*/
            uint32_t reg_chb_rank1_min_cs_perbit_skew_pass:    8;  /*common only rd21*/
            uint32_t reg_chb_rank0_min_cs_perbit_skew_pass:    8;  /*common only rd21*/
        };
        uint32_t val;
    } ddr_phy_chb_tx_delay_line_result3;
    union {
        struct {
            uint32_t reg_chb_rank0_ca3_max_perbit_skew_pass:    8;  /*common only rd22*/
            uint32_t reg_chb_rank0_ca2_max_perbit_skew_pass:    8;  /*common only rd22*/
            uint32_t reg_chb_rank0_ca1_max_perbit_skew_pass:    8;  /*common only rd22*/
            uint32_t reg_chb_rank0_ca0_max_perbit_skew_pass:    8;  /*common only rd22*/
        };
        uint32_t val;
    } ddr_phy_chb_tx_delay_line_result4;
    union {
        struct {
            uint32_t reg_chb_rank1_ca1_max_perbit_skew_pass:    8;  /*common only rd23*/
            uint32_t reg_chb_rank1_ca0_max_perbit_skew_pass:    8;  /*common only rd23*/
            uint32_t reg_chb_rank0_ca5_max_perbit_skew_pass:    8;  /*common only rd23*/
            uint32_t reg_chb_rank0_ca4_max_perbit_skew_pass:    8;  /*common only rd23*/
        };
        uint32_t val;
    } ddr_phy_chb_tx_delay_line_result5;
    union {
        struct {
            uint32_t reg_chb_rank1_ca5_max_perbit_skew_pass:    8;  /*common only rd24*/
            uint32_t reg_chb_rank1_ca4_max_perbit_skew_pass:    8;  /*common only rd24*/
            uint32_t reg_chb_rank1_ca3_max_perbit_skew_pass:    8;  /*common only rd24*/
            uint32_t reg_chb_rank1_ca2_max_perbit_skew_pass:    8;  /*common only rd24*/
        };
        uint32_t val;
    } ddr_phy_chb_tx_delay_line_result6;
    union {
        struct {
            uint32_t reg_cha_rank1_max_cs_vref_pass:    6;  /*common only rd25*/
            uint32_t reserved6                     :    2;
            uint32_t reg_cha_rank1_min_cs_vref_pass:    6;  /*common only rd25*/
            uint32_t reserved14                    :    2;
            uint32_t reg_cha_rank0_max_cs_vref_pass:    6;  /*common only rd25*/
            uint32_t reserved22                    :    2;
            uint32_t reg_cha_rank0_min_cs_vref_pass:    6;  /*common only rd25*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_cha_tx_sdram_vref_result;
    union {
        struct {
            uint32_t reg_chb_rank1_max_cs_vref_pass:    6;  /*common only rd26*/
            uint32_t reserved6                     :    2;
            uint32_t reg_chb_rank1_min_cs_vref_pass:    6;  /*common only rd26*/
            uint32_t reserved14                    :    2;
            uint32_t reg_chb_rank0_max_cs_vref_pass:    6;  /*common only rd26*/
            uint32_t reserved22                    :    2;
            uint32_t reg_chb_rank0_min_cs_vref_pass:    6;  /*common only rd26*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_chb_tx_sdram_vref_result;
    union {
        struct {
            uint32_t reg_wr_train_error_byte       :    9;  /*common only rd27*/
            uint32_t reg_wr_train_done_byte        :    9;  /*common only rd27*/
            uint32_t reg_train_error_for_rd_byte   :    9;  /*common only rd27*/
            uint32_t reserved27                    :    5;
        };
        uint32_t val;
    } ddr_phy_wr_train_byte_result;
    union {
        struct {
            uint32_t reg_halfui_lock_code_to_reg   :    8;  /*common only rd28*/
            uint32_t reg_mdll_update_cnt           :    7;  /*common only rd28*/
            uint32_t reserved15                    :    1;
            uint32_t reg_mdll_timeout_to_reg       :    1;  /*common only rd28*/
            uint32_t reserved17                    :    6;
            uint32_t reg_train_done_for_rd_to_reg_byte:    9;  /*common only rd28*/
        };
        uint32_t val;
    } ddr_phy_mdll_result;
    union {
        struct {
            uint32_t reg_group1_dm_train_check_data_value3:    8;  /*cfg86*/
            uint32_t reg_group1_dm_train_check_data_value2:    8;  /*cfg86*/
            uint32_t reg_group1_dm_train_check_data_value1:    8;  /*cfg86*/
            uint32_t reg_group1_dm_train_check_data_value0:    8;  /*cfg86*/
        };
        uint32_t val;
    } ddr_phy_wr_train_dm_pattern_cfg0;
    uint32_t reserved_1d0;
    uint32_t reserved_1d4;
    uint32_t reserved_1d8;
    uint32_t reserved_1dc;
    union {
        struct {
            uint32_t reg_group1_dm_train_check_data_value7:    8;  /*cfg87*/
            uint32_t reg_group1_dm_train_check_data_value6:    8;  /*cfg87*/
            uint32_t reg_group1_dm_train_check_data_value5:    8;  /*cfg87*/
            uint32_t reg_group1_dm_train_check_data_value4:    8;  /*cfg87*/
        };
        uint32_t val;
    } ddr_phy_wr_train_dm_pattern_cfg1;
    union {
        struct {
            uint32_t reg_group1_dm_train_check_data_value9:    8;  /*cfg88*/
            uint32_t reg_group1_dm_train_check_data_value8:    8;  /*cfg88*/
            uint32_t reserved16                    :    4;
            uint32_t reg_wrtrain_vref_scan_min     :    7;  /*cfg88*/
            uint32_t reserved27                    :    5;
        };
        uint32_t val;
    } ddr_phy_wr_train_dm_pattern_cfg2;
    union {
        struct {
            uint32_t reg_rd_train_readback_data_valid_byte:    9;  /*common only rd29*/
            uint32_t reg_bist_error_dq_byte8       :    8;  /*common only rd29*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } ddr_phy_rd_train_data_valid_byte;
    uint32_t ddr_phy_bist_error_dq_byte;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_phy_twr                   :    7;  /*cfg89*/
            uint32_t reserved15                    :    1;
            uint32_t reg_phy_trp                   :    7;  /*cfg89*/
            uint32_t reg_phy_twtr_l                :    7;  /*cfg89*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_wl2_timing_cfg;
    union {
        struct {
            uint32_t reg_wl_dqs_start_point        :    12;  /*cfg90*/
            uint32_t reserved12                    :    20;
        };
        uint32_t val;
    } ddr_phy_wl_dqs_start_point;
    uint32_t reserved_1f8;
    uint32_t reserved_1fc;
    union {
        struct {
            uint32_t reg_a_l_abutslewpd_reg        :    5;  /*byte cfg0*/
            uint32_t reg_a_l_dqsbweakpub_reg       :    1;  /*byte cfg0*/
            uint32_t reg_a_l_dqsweakpd_reg         :    1;  /*byte cfg0*/
            uint32_t reg_a_l_enb_lp4mode_reg       :    1;  /*byte cfg0*/
            uint32_t reg_a_l_abutslewpu_reg        :    5;  /*byte cfg0*/
            uint32_t reg_a_l_weakpub_reg           :    2;  /*byte cfg0*/
            uint32_t reg_a_l_weakpd_reg            :    2;  /*byte cfg0*/
            uint32_t reg_a_l_vref1_pd_reg          :    1;  /*byte cfg0*/
            uint32_t reg_a_l_abutdiffampseen_reg   :    1;  /*byte cfg0*/
            uint32_t reg_a_l_abutweakpubdq_reg     :    1;  /*byte cfg0*/
            uint32_t reg_a_l_abutweakpddq_reg      :    1;  /*byte cfg0*/
            uint32_t reg_a_l_dq_drv_zqcali_en      :    1;  /*byte cfg0*/
            uint32_t reg_a_l_dq_odt_zqcali_en      :    1;  /*byte cfg0*/
            uint32_t reg_a_l_vref1_margsel_reg     :    9;  /*byte cfg0*/
        };
        uint32_t val;
    } ddr_phy_dq_state_ctrl_l;
    union {
        struct {
            uint32_t reg_a_l_abutodtpudq0_reg      :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutodtpudq1_reg      :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutodtpudq2_reg      :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutodtpudq3_reg      :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutodtpudq4_reg      :    1;  /*byte cfg1*/
            uint32_t reserved5                     :    3;
            uint32_t reg_a_l_abutodtpddq0_reg      :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutodtpddq1_reg      :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutodtpddq2_reg      :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutodtpddq3_reg      :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutodtpddq4_reg      :    1;  /*byte cfg1*/
            uint32_t reserved13                    :    3;
            uint32_t reg_a_l_abutprcompdq0_reg     :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutprcompdq1_reg     :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutprcompdq2_reg     :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutprcompdq3_reg     :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutprcompdq4_reg     :    1;  /*byte cfg1*/
            uint32_t reserved21                    :    3;
            uint32_t reg_a_l_abutnrcompdq0_reg     :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutnrcompdq1_reg     :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutnrcompdq2_reg     :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutnrcompdq3_reg     :    1;  /*byte cfg1*/
            uint32_t reg_a_l_abutnrcompdq4_reg     :    1;  /*byte cfg1*/
            uint32_t reg_a_l_dqfbsel_reg           :    1;  /*byte cfg1*/
            uint32_t reg_a_l_dqfben_reg            :    1;  /*byte cfg1*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_data_io_drv_strength_ctrl_l;
    union {
        struct {
            uint32_t reg_a_l_rxmen1_sdlltap_bp     :    5;  /*byte cfg2*/
            uint32_t reg_a_l_rxmen1_ophsel_bp      :    3;  /*byte cfg2*/
            uint32_t reg_a_l_rxmen1_delay_bp       :    3;  /*byte cfg2*/
            uint32_t reserved11                    :    5;
            uint32_t reg_a_l_rxmen0_sdlltap_bp     :    5;  /*byte cfg2*/
            uint32_t reg_a_l_rxmen0_ophsel_bp      :    3;  /*byte cfg2*/
            uint32_t reg_a_l_rxmen0_delay_bp       :    3;  /*byte cfg2*/
            uint32_t reserved27                    :    5;
        };
        uint32_t val;
    } ddr_phy_dqs_cali_bp_mode_l;
    union {
        struct {
            uint32_t reg_a_l_rdodt1_dllsel         :    5;  /*byte cfg3*/
            uint32_t reg_a_l_rdodt1_ophsel         :    3;  /*byte cfg3*/
            uint32_t reg_a_l_rdodt1_delay          :    3;  /*byte cfg3*/
            uint32_t reserved11                    :    5;
            uint32_t reg_a_l_rdodt0_dllsel         :    5;  /*byte cfg3*/
            uint32_t reg_a_l_rdodt0_ophsel         :    3;  /*byte cfg3*/
            uint32_t reg_a_l_rdodt0_delay          :    3;  /*byte cfg3*/
            uint32_t reserved27                    :    5;
        };
        uint32_t val;
    } ddr_phy_rx_odt_bp_mode_l;
    union {
        struct {
            uint32_t reg_a_l_rrankdly_4x_cs1       :    3;  /*byte cfg4*/
            uint32_t reg_a_l_rrankdly_4x_cs0       :    3;  /*byte cfg4*/
            uint32_t reg_a_l_rxm4p5en_r2           :    1;  /*byte cfg4*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_rxpst_bp              :    1;  /*byte cfg4*/
            uint32_t reg_a_l_tsm_iobufact_bp       :    1;  /*byte cfg4*/
            uint32_t reg_a_l_rxm4p5en              :    1;  /*byte cfg4*/
            uint32_t reserved11                    :    1;
            uint32_t reg_a_l_abutobsmodeen         :    1;  /*byte cfg4*/
            uint32_t reg_a_l_rxm_odiffampen        :    1;  /*byte cfg4*/
            uint32_t reg_a_l_wrptrclrb             :    1;  /*byte cfg4*/
            uint32_t reg_a_l_selfclren             :    1;  /*byte cfg4*/
            uint32_t reg_a_l_rcvdqsmodsel          :    1;  /*byte cfg4*/
            uint32_t reg_a_l_dqs_ph90en_bp         :    1;  /*byte cfg4*/
            uint32_t reg_a_l_dq_ph90en_bp          :    1;  /*byte cfg4*/
            uint32_t reg_a_l_dmout_mux             :    1;  /*byte cfg4*/
            uint32_t reg_a_l_dqout_mux             :    1;  /*byte cfg4*/
            uint32_t reg_a_l_pvt_comp_en           :    1;  /*byte cfg4*/
            uint32_t reg_a_l_lp4x_en               :    1;  /*byte cfg4*/
            uint32_t reg_a_l_rxen_lp4              :    1;  /*byte cfg4*/
            uint32_t reg_a_l_dqobsmuxsel           :    4;  /*byte cfg4*/
            uint32_t reg_a_l_dm_obsdataen          :    1;  /*byte cfg4*/
            uint32_t reg_a_l_dq_invdelay_lp_en     :    1;  /*byte cfg4*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_byte0_mode_ctrl;
    union {
        struct {
            uint32_t reg_a_l_wrankdlysel           :    8;  /*byte cfg5*/
            uint32_t reg_a_l_wrankphsel            :    3;  /*byte cfg5*/
            uint32_t reserved11                    :    1;
            uint32_t reg_a_l_rrankdly_1x_cs0       :    3;  /*byte cfg5*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_rrankdly_1x_cs1       :    3;  /*byte cfg5*/
            uint32_t reserved19                    :    13;
        };
        uint32_t val;
    } ddr_phy_delay_of_wr_rd_rank_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_cs0_dm_invdelaysel    :    8;  /*byte cfg6*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_cs0_dm_tx_delay_line_l;
    union {
        struct {
            uint32_t reg_a_l_cs0_dq3_invdelaysel   :    8;  /*byte cfg7*/
            uint32_t reg_a_l_cs0_dq2_invdelaysel   :    8;  /*byte cfg7*/
            uint32_t reg_a_l_cs0_dq1_invdelaysel   :    8;  /*byte cfg7*/
            uint32_t reg_a_l_cs0_dq0_invdelaysel   :    8;  /*byte cfg7*/
        };
        uint32_t val;
    } ddr_phy_cs0_dq_tx_delay_line0_l;
    union {
        struct {
            uint32_t reg_a_l_cs0_dq7_invdelaysel   :    8;  /*byte cfg8*/
            uint32_t reg_a_l_cs0_dq6_invdelaysel   :    8;  /*byte cfg8*/
            uint32_t reg_a_l_cs0_dq5_invdelaysel   :    8;  /*byte cfg8*/
            uint32_t reg_a_l_cs0_dq4_invdelaysel   :    8;  /*byte cfg8*/
        };
        uint32_t val;
    } ddr_phy_cs0_dq_tx_delay_line1_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_cs0_dqsb_invdelaysel  :    8;  /*byte cfg9*/
            uint32_t reserved16                    :    8;
            uint32_t reg_a_l_cs0_dqs_invdelaysel   :    8;  /*byte cfg9*/
        };
        uint32_t val;
    } ddr_phy_cs0_dqs_tx_delay_line_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_cs0_dm_invdelayselrx  :    7;  /*byte cfg10*/
            uint32_t reserved15                    :    9;
            uint32_t reg_a_l_cs0_loop_invdelaysel  :    5;  /*byte cfg10*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_cs0_dm_rx_delay_line_l;
    union {
        struct {
            uint32_t reg_a_l_cs0_dq3_invdelayselrx :    7;  /*byte cfg11*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_cs0_dq2_invdelayselrx :    7;  /*byte cfg11*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_cs0_dq1_invdelayselrx :    7;  /*byte cfg11*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_l_cs0_dq0_invdelayselrx :    7;  /*byte cfg11*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs0_dq_rx_delay_line0_l;
    union {
        struct {
            uint32_t reg_a_l_cs0_dq7_invdelayselrx :    7;  /*byte cfg12*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_cs0_dq6_invdelayselrx :    7;  /*byte cfg12*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_cs0_dq5_invdelayselrx :    7;  /*byte cfg12*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_l_cs0_dq4_invdelayselrx :    7;  /*byte cfg12*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs0_dq_rx_delay_line1_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_cs0_dqsb_invdelayselrx:    7;  /*byte cfg13*/
            uint32_t reserved15                    :    9;
            uint32_t reg_a_l_cs0_dqs_invdelayselrx :    7;  /*byte cfg13*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs0_dqs_rx_delay_line_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_cs1_dm_invdelaysel    :    8;  /*byte cfg14*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_cs1_dm_tx_delay_line_l;
    union {
        struct {
            uint32_t reg_a_l_cs1_dq3_invdelaysel   :    8;  /*byte cfg15*/
            uint32_t reg_a_l_cs1_dq2_invdelaysel   :    8;  /*byte cfg15*/
            uint32_t reg_a_l_cs1_dq1_invdelaysel   :    8;  /*byte cfg15*/
            uint32_t reg_a_l_cs1_dq0_invdelaysel   :    8;  /*byte cfg15*/
        };
        uint32_t val;
    } ddr_phy_cs1_dq_tx_delay_line0_l;
    union {
        struct {
            uint32_t reg_a_l_cs1_dq7_invdelaysel   :    8;  /*byte cfg16*/
            uint32_t reg_a_l_cs1_dq6_invdelaysel   :    8;  /*byte cfg16*/
            uint32_t reg_a_l_cs1_dq5_invdelaysel   :    8;  /*byte cfg16*/
            uint32_t reg_a_l_cs1_dq4_invdelaysel   :    8;  /*byte cfg16*/
        };
        uint32_t val;
    } ddr_phy_cs1_dq_tx_delay_line1_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_cs1_dqsb_invdelaysel  :    8;  /*byte cfg17*/
            uint32_t reserved16                    :    8;
            uint32_t reg_a_l_cs1_dqs_invdelaysel   :    8;  /*byte cfg17*/
        };
        uint32_t val;
    } ddr_phy_cs1_dqs_tx_delay_line_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_cs1_dm_invdelayselrx  :    7;  /*byte cfg18*/
            uint32_t reserved15                    :    9;
            uint32_t reg_a_l_cs1_loop_invdelaysel  :    5;  /*byte cfg18*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_cs1_dm_rx_delay_line_l;
    union {
        struct {
            uint32_t reg_a_l_cs1_dq3_invdelayselrx :    7;  /*byte cfg19*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_cs1_dq2_invdelayselrx :    7;  /*byte cfg19*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_cs1_dq1_invdelayselrx :    7;  /*byte cfg19*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_l_cs1_dq0_invdelayselrx :    7;  /*byte cfg19*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs1_dq_rx_delay_line0_l;
    union {
        struct {
            uint32_t reg_a_l_cs1_dq7_invdelayselrx :    7;  /*byte cfg20*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_cs1_dq6_invdelayselrx :    7;  /*byte cfg20*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_cs1_dq5_invdelayselrx :    7;  /*byte cfg20*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_l_cs1_dq4_invdelayselrx :    7;  /*byte cfg20*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs1_dq_rx_delay_line1_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_cs1_dqsb_invdelayselrx:    7;  /*byte cfg21*/
            uint32_t reserved15                    :    9;
            uint32_t reg_a_l_cs1_dqs_invdelayselrx :    7;  /*byte cfg21*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs1_dqs_rx_delay_line_l;
    union {
        struct {
            uint32_t reg_a_l_rd_train_dqs_range_min:    7;  /*byte cfg22*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_rd_train_dqs_range_max:    7;  /*byte cfg22*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_train_dqs_default     :    8;  /*byte cfg22*/
            uint32_t reg_a_l_rd_train_dqs_default  :    7;  /*byte cfg22*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dqs_train_cfg_l;
    union {
        struct {
            uint32_t reserved0                     :    16;
            uint32_t reg_a_l_rdtrain_check_wrap1   :    8;  /*byte cfg23*/
            uint32_t reg_a_l_rdtrain_check_wrap0   :    8;  /*byte cfg23*/
        };
        uint32_t val;
    } ddr_phy_rdtrain_check_pattern_l;
    uint32_t reserved_260;
    uint32_t reserved_264;
    uint32_t reserved_268;
    uint32_t reserved_26c;
    uint32_t reserved_270;
    uint32_t reserved_274;
    uint32_t reserved_278;
    uint32_t reserved_27c;
    union {
        struct {
            uint32_t reg_a_l_tdqs_invdelaysel1     :    8;  /*byte rd0*/
            uint32_t reserved8                     :    8;
            uint32_t reg_a_l_tdqs_invdelaysel0     :    8;  /*byte rd0*/
            uint32_t reserved24                    :    6;
            uint32_t reg_a_l_dqs_idqshigh          :    1;  /*byte rd0*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_wl_result_l;
    union {
        struct {
            uint32_t reg_a_l_dllsel                :    5;  /*byte rd1*/
            uint32_t reg_a_l_ophsel                :    3;  /*byte rd1*/
            uint32_t reg_a_l_cycsel                :    3;  /*byte rd1*/
            uint32_t reserved11                    :    21;
        };
        uint32_t val;
    } ddr_phy_rx_dqs_cali_delay_l;
    union {
        struct {
            uint32_t reg_a_l_calib_result_cs1      :    11;  /*byte rd2*/
            uint32_t reserved11                    :    5;
            uint32_t reg_a_l_calib_result_cs0      :    11;  /*byte rd2*/
            uint32_t reserved27                    :    5;
        };
        uint32_t val;
    } ddr_phy_rx_dqs_calib_result_l;
    union {
        struct {
            uint32_t reg_a_l_cs0_value_dqx_invdelaysel:    8;  /*byte rd3*/
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } ddr_phy_cs0_value_dqx_invdelaysel_l;
    union {
        struct {
            uint32_t reg_a_l_cs1_value_dqx_invdelaysel:    8;  /*byte rd4*/
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } ddr_phy_cs1_value_dqx_invdelaysel_l;
    union {
        struct {
            uint32_t reg_a_l_train_min_for_rd_dq3  :    7;  /*byte rd5*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_train_min_for_rd_dq2  :    7;  /*byte rd5*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_train_min_for_rd_dq1  :    7;  /*byte rd5*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_l_train_min_for_rd_dq0  :    7;  /*byte rd5*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dq_rx_delay_line_min_pp0_l;
    union {
        struct {
            uint32_t reg_a_l_train_min_for_rd_dq7  :    7;  /*byte rd6*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_train_min_for_rd_dq6  :    7;  /*byte rd6*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_train_min_for_rd_dq5  :    7;  /*byte rd6*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_l_train_min_for_rd_dq4  :    7;  /*byte rd6*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dq_rx_delay_line_min_pp1_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_train_min_for_rd_dqs  :    7;  /*byte rd7*/
            uint32_t reserved15                    :    17;
        };
        uint32_t val;
    } ddr_phy_dqs_rx_delay_line_min_pp_l;
    union {
        struct {
            uint32_t reg_a_l_train_max_for_rd_dq3  :    7;  /*byte rd8*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_train_max_for_rd_dq2  :    7;  /*byte rd8*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_train_max_for_rd_dq1  :    7;  /*byte rd8*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_l_train_max_for_rd_dq0  :    7;  /*byte rd8*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dq_rx_delay_line_max_pp0_l;
    union {
        struct {
            uint32_t reg_a_l_train_max_for_rd_dq7  :    7;  /*byte rd9*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_train_max_for_rd_dq6  :    7;  /*byte rd9*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_train_max_for_rd_dq5  :    7;  /*byte rd9*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_l_train_max_for_rd_dq4  :    7;  /*byte rd9*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dq_rx_delay_line_max_pp1_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_train_max_for_rd_dqs  :    7;  /*byte rd10*/
            uint32_t reserved15                    :    17;
        };
        uint32_t val;
    } ddr_phy_dqs_rx_delay_line_max_pp_l;
    union {
        struct {
            uint32_t reserved0                     :    2;
            uint32_t reg_a_l_right_boundary_overflow_for_rd:    1;  /*byte rd11*/
            uint32_t reg_a_l_left_boundary_overflow_for_rd:    1;  /*byte rd11*/
            uint32_t reserved4                     :    1;
            uint32_t reg_a_l_change_rd_dqs_default :    1;  /*byte rd11*/
            uint32_t reserved6                     :    18;
            uint32_t reg_a_l_train_result_for_rd_base_dqs:    7;  /*byte rd11*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dqs_rx_delay_line_state_l;
    union {
        struct {
            uint32_t reg_a_l_rd_train_readback_data_dq1:    16;  /*byte rd12*/
            uint32_t reg_a_l_rd_train_readback_data_dq0:    16;  /*byte rd12*/
        };
        uint32_t val;
    } ddr_phy_rd_train_readback_data0_l;
    union {
        struct {
            uint32_t reg_a_l_rd_train_readback_data_dq3:    16;  /*byte rd13*/
            uint32_t reg_a_l_rd_train_readback_data_dq2:    16;  /*byte rd13*/
        };
        uint32_t val;
    } ddr_phy_rd_train_readback_data1_l;
    union {
        struct {
            uint32_t reg_a_l_rd_train_readback_data_dq5:    16;  /*byte rd14*/
            uint32_t reg_a_l_rd_train_readback_data_dq4:    16;  /*byte rd14*/
        };
        uint32_t val;
    } ddr_phy_rd_train_readback_data2_l;
    union {
        struct {
            uint32_t reg_a_l_rd_train_readback_data_dq7:    16;  /*byte rd15*/
            uint32_t reg_a_l_rd_train_readback_data_dq6:    16;  /*byte rd15*/
        };
        uint32_t val;
    } ddr_phy_rd_train_readback_data3_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_train_min_for_dqs     :    8;  /*byte rd16*/
            uint32_t reserved16                    :    1;
            uint32_t reg_a_l_change_dqs_default    :    1;  /*byte rd16*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } ddr_phy_dqs_tx_delay_line_min_pp_l;
    union {
        struct {
            uint32_t reg_a_l_train_min_for_dq3     :    8;  /*byte rd17*/
            uint32_t reg_a_l_train_min_for_dq2     :    8;  /*byte rd17*/
            uint32_t reg_a_l_train_min_for_dq1     :    8;  /*byte rd17*/
            uint32_t reg_a_l_train_min_for_dq0     :    8;  /*byte rd17*/
        };
        uint32_t val;
    } ddr_phy_dq_tx_delay_line_min_pp0_l;
    union {
        struct {
            uint32_t reg_a_l_train_min_for_dq7     :    8;  /*byte rd18*/
            uint32_t reg_a_l_train_min_for_dq6     :    8;  /*byte rd18*/
            uint32_t reg_a_l_train_min_for_dq5     :    8;  /*byte rd18*/
            uint32_t reg_a_l_train_min_for_dq4     :    8;  /*byte rd18*/
        };
        uint32_t val;
    } ddr_phy_dq_tx_delay_line_min_pp1_l;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_l_train_max_for_dqs     :    8;  /*byte rd19*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_dqs_tx_delay_line_max_pp_l;
    uint32_t reserved_2d0;
    uint32_t reserved_2d4;
    uint32_t reserved_2d8;
    uint32_t reserved_2dc;
    union {
        struct {
            uint32_t reg_a_l_train_max_for_dq3     :    8;  /*byte rd20*/
            uint32_t reg_a_l_train_max_for_dq2     :    8;  /*byte rd20*/
            uint32_t reg_a_l_train_max_for_dq1     :    8;  /*byte rd20*/
            uint32_t reg_a_l_train_max_for_dq0     :    8;  /*byte rd20*/
        };
        uint32_t val;
    } ddr_phy_dq_tx_delay_line_max_pp0_l;
    union {
        struct {
            uint32_t reg_a_l_train_max_for_dq7     :    8;  /*byte rd21*/
            uint32_t reg_a_l_train_max_for_dq6     :    8;  /*byte rd21*/
            uint32_t reg_a_l_train_max_for_dq5     :    8;  /*byte rd21*/
            uint32_t reg_a_l_train_max_for_dq4     :    8;  /*byte rd21*/
        };
        uint32_t val;
    } ddr_phy_dq_tx_delay_line_max_pp1_l;
    union {
        struct {
            uint32_t reg_a_l_rdtrain_vref_min      :    9;  /*byte rd22*/
            uint32_t reserved9                     :    7;
            uint32_t reg_a_l_rdtrain_vref_max      :    9;  /*byte rd22*/
            uint32_t reserved25                    :    7;
        };
        uint32_t val;
    } ddr_phy_rdtrain_vref_value_range_l;
    union {
        struct {
            uint32_t reg_a_l_train_max_for_rd_dm   :    7;  /*byte rd23*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_l_train_min_for_rd_dm   :    7;  /*byte rd23*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_l_train_max_for_dm      :    8;  /*byte rd23*/
            uint32_t reg_a_l_train_min_for_dm      :    8;  /*byte rd23*/
        };
        uint32_t val;
    } ddr_phy_dm_train_pp_range_l;
    uint32_t reserved_2f0;
    uint32_t reserved_2f4;
    uint32_t reserved_2f8;
    uint32_t reserved_2fc;
    union {
        struct {
            uint32_t reg_a_h_abutslewpd_reg        :    5;  /*byte h cfg0*/
            uint32_t reg_a_h_dqsbweakpub_reg       :    1;  /*byte h cfg0*/
            uint32_t reg_a_h_dqsweakpd_reg         :    1;  /*byte h cfg0*/
            uint32_t reg_a_h_enb_lp4mode_reg       :    1;  /*byte h cfg0*/
            uint32_t reg_a_h_abutslewpu_reg        :    5;  /*byte h cfg0*/
            uint32_t reg_a_h_weakpub_reg           :    2;  /*byte h cfg0*/
            uint32_t reg_a_h_weakpd_reg            :    2;  /*byte h cfg0*/
            uint32_t reg_a_h_vref1_pd_reg          :    1;  /*byte h cfg0*/
            uint32_t reg_a_h_abutdiffampseen_reg   :    1;  /*byte h cfg0*/
            uint32_t reg_a_h_abutweakpubdq_reg     :    1;  /*byte h cfg0*/
            uint32_t reg_a_h_abutweakpddq_reg      :    1;  /*byte h cfg0*/
            uint32_t reg_a_h_dq_drv_zqcali_en      :    1;  /*byte h cfg0*/
            uint32_t reg_a_h_dq_odt_zqcali_en      :    1;  /*byte h cfg0*/
            uint32_t reg_a_h_vref1_margsel_reg     :    9;  /*byte h cfg0*/
        };
        uint32_t val;
    } ddr_phy_dq_state_ctrl_h;
    union {
        struct {
            uint32_t reg_a_h_abutodtpudq0_reg      :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutodtpudq1_reg      :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutodtpudq2_reg      :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutodtpudq3_reg      :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutodtpudq4_reg      :    1;  /*byte h cfg1*/
            uint32_t reserved5                     :    3;
            uint32_t reg_a_h_abutodtpddq0_reg      :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutodtpddq1_reg      :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutodtpddq2_reg      :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutodtpddq3_reg      :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutodtpddq4_reg      :    1;  /*byte h cfg1*/
            uint32_t reserved13                    :    3;
            uint32_t reg_a_h_abutprcompdq0_reg     :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutprcompdq1_reg     :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutprcompdq2_reg     :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutprcompdq3_reg     :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutprcompdq4_reg     :    1;  /*byte h cfg1*/
            uint32_t reserved21                    :    3;
            uint32_t reg_a_h_abutnrcompdq0_reg     :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutnrcompdq1_reg     :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutnrcompdq2_reg     :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutnrcompdq3_reg     :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_abutnrcompdq4_reg     :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_dqfbsel_reg           :    1;  /*byte h cfg1*/
            uint32_t reg_a_h_dqfben_reg            :    1;  /*byte h cfg1*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_data_io_drv_strength_ctrl_h;
    union {
        struct {
            uint32_t reg_a_h_rxmen1_sdlltap_bp     :    5;  /*byte h cfg2*/
            uint32_t reg_a_h_rxmen1_ophsel_bp      :    3;  /*byte h cfg2*/
            uint32_t reg_a_h_rxmen1_delay_bp       :    3;  /*byte h cfg2*/
            uint32_t reserved11                    :    5;
            uint32_t reg_a_h_rxmen0_sdlltap_bp     :    5;  /*byte h cfg2*/
            uint32_t reg_a_h_rxmen0_ophsel_bp      :    3;  /*byte h cfg2*/
            uint32_t reg_a_h_rxmen0_delay_bp       :    3;  /*byte h cfg2*/
            uint32_t reserved27                    :    5;
        };
        uint32_t val;
    } ddr_phy_dqs_cali_bp_mode_h;
    union {
        struct {
            uint32_t reg_a_h_rdodt1_dllsel         :    5;  /*byte h cfg3*/
            uint32_t reg_a_h_rdodt1_ophsel         :    3;  /*byte h cfg3*/
            uint32_t reg_a_h_rdodt1_delay          :    3;  /*byte h cfg3*/
            uint32_t reserved11                    :    5;
            uint32_t reg_a_h_rdodt0_dllsel         :    5;  /*byte h cfg3*/
            uint32_t reg_a_h_rdodt0_ophsel         :    3;  /*byte h cfg3*/
            uint32_t reg_a_h_rdodt0_delay          :    3;  /*byte h cfg3*/
            uint32_t reserved27                    :    5;
        };
        uint32_t val;
    } ddr_phy_rx_odt_bp_mode_h;
    union {
        struct {
            uint32_t reg_a_h_rrankdly_4x_cs1       :    3;  /*byte h cfg4*/
            uint32_t reg_a_h_rrankdly_4x_cs0       :    3;  /*byte h cfg4*/
            uint32_t reg_a_h_rxm4p5en_r2           :    1;  /*byte h cfg4*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_rxpst_bp              :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_tsm_iobufact_bp       :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_rxm4p5en              :    1;  /*byte h cfg4*/
            uint32_t reserved11                    :    1;
            uint32_t reg_a_h_abutobsmodeen         :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_rxm_odiffampen        :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_wrptrclrb             :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_selfclren             :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_rcvdqsmodsel          :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_dqs_ph90en_bp         :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_dq_ph90en_bp          :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_dmout_mux             :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_dqout_mux             :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_pvt_comp_en           :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_lp4x_en               :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_rxen_lp4              :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_dqobsmuxsel           :    4;  /*byte h cfg4*/
            uint32_t reg_a_h_dm_obsdataen          :    1;  /*byte h cfg4*/
            uint32_t reg_a_h_dq_invdelay_lp_en     :    1;  /*byte h cfg4*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddr_phy_byte1_mode_ctrl;
    union {
        struct {
            uint32_t reg_a_h_wrankdlysel           :    8;  /*byte h cfg5*/
            uint32_t reg_a_h_wrankphsel            :    3;  /*byte h cfg5*/
            uint32_t reserved11                    :    1;
            uint32_t reg_a_h_rrankdly_1x_cs0       :    3;  /*byte h cfg5*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_rrankdly_1x_cs1       :    3;  /*byte h cfg5*/
            uint32_t reserved19                    :    13;
        };
        uint32_t val;
    } ddr_phy_delay_of_wr_rd_rank_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_cs0_dm_invdelaysel    :    8;  /*byte h cfg6*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_cs0_dm_tx_delay_line_h;
    union {
        struct {
            uint32_t reg_a_h_cs0_dq3_invdelaysel   :    8;  /*byte h cfg7*/
            uint32_t reg_a_h_cs0_dq2_invdelaysel   :    8;  /*byte h cfg7*/
            uint32_t reg_a_h_cs0_dq1_invdelaysel   :    8;  /*byte h cfg7*/
            uint32_t reg_a_h_cs0_dq0_invdelaysel   :    8;  /*byte h cfg7*/
        };
        uint32_t val;
    } ddr_phy_cs0_dq_tx_delay_line0_h;
    union {
        struct {
            uint32_t reg_a_h_cs0_dq7_invdelaysel   :    8;  /*byte h cfg8*/
            uint32_t reg_a_h_cs0_dq6_invdelaysel   :    8;  /*byte h cfg8*/
            uint32_t reg_a_h_cs0_dq5_invdelaysel   :    8;  /*byte h cfg8*/
            uint32_t reg_a_h_cs0_dq4_invdelaysel   :    8;  /*byte h cfg8*/
        };
        uint32_t val;
    } ddr_phy_cs0_dq_tx_delay_line1_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_cs0_dqsb_invdelaysel  :    8;  /*byte h cfg9*/
            uint32_t reserved16                    :    8;
            uint32_t reg_a_h_cs0_dqs_invdelaysel   :    8;  /*byte h cfg9*/
        };
        uint32_t val;
    } ddr_phy_cs0_dqs_tx_delay_line_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_cs0_dm_invdelayselrx  :    7;  /*byte h cfg10*/
            uint32_t reserved15                    :    9;
            uint32_t reg_a_h_cs0_loop_invdelaysel  :    5;  /*byte h cfg10*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_cs0_dm_rx_delay_line_h;
    union {
        struct {
            uint32_t reg_a_h_cs0_dq3_invdelayselrx :    7;  /*byte h cfg11*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_cs0_dq2_invdelayselrx :    7;  /*byte h cfg11*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_cs0_dq1_invdelayselrx :    7;  /*byte h cfg11*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_h_cs0_dq0_invdelayselrx :    7;  /*byte h cfg11*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs0_dq_rx_delay_line0_h;
    union {
        struct {
            uint32_t reg_a_h_cs0_dq7_invdelayselrx :    7;  /*byte h cfg12*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_cs0_dq6_invdelayselrx :    7;  /*byte h cfg12*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_cs0_dq5_invdelayselrx :    7;  /*byte h cfg12*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_h_cs0_dq4_invdelayselrx :    7;  /*byte h cfg12*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs0_dq_rx_delay_line1_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_cs0_dqsb_invdelayselrx:    7;  /*byte h cfg13*/
            uint32_t reserved15                    :    9;
            uint32_t reg_a_h_cs0_dqs_invdelayselrx :    7;  /*byte h cfg13*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs0_dqs_rx_delay_line_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_cs1_dm_invdelaysel    :    8;  /*byte h cfg14*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_cs1_dm_tx_delay_line_h;
    union {
        struct {
            uint32_t reg_a_h_cs1_dq3_invdelaysel   :    8;  /*byte h cfg15*/
            uint32_t reg_a_h_cs1_dq2_invdelaysel   :    8;  /*byte h cfg15*/
            uint32_t reg_a_h_cs1_dq1_invdelaysel   :    8;  /*byte h cfg15*/
            uint32_t reg_a_h_cs1_dq0_invdelaysel   :    8;  /*byte h cfg15*/
        };
        uint32_t val;
    } ddr_phy_cs1_dq_tx_delay_line0_h;
    union {
        struct {
            uint32_t reg_a_h_cs1_dq7_invdelaysel   :    8;  /*byte h cfg16*/
            uint32_t reg_a_h_cs1_dq6_invdelaysel   :    8;  /*byte h cfg16*/
            uint32_t reg_a_h_cs1_dq5_invdelaysel   :    8;  /*byte h cfg16*/
            uint32_t reg_a_h_cs1_dq4_invdelaysel   :    8;  /*byte h cfg16*/
        };
        uint32_t val;
    } ddr_phy_cs1_dq_tx_delay_line1_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_cs1_dqsb_invdelaysel  :    8;  /*byte h cfg17*/
            uint32_t reserved16                    :    8;
            uint32_t reg_a_h_cs1_dqs_invdelaysel   :    8;  /*byte h cfg17*/
        };
        uint32_t val;
    } ddr_phy_cs1_dqs_tx_delay_line_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_cs1_dm_invdelayselrx  :    7;  /*byte h cfg18*/
            uint32_t reserved15                    :    9;
            uint32_t reg_a_h_cs1_loop_invdelaysel  :    5;  /*byte h cfg18*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddr_phy_cs1_dm_rx_delay_line_h;
    union {
        struct {
            uint32_t reg_a_h_cs1_dq3_invdelayselrx :    7;  /*byte h cfg19*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_cs1_dq2_invdelayselrx :    7;  /*byte h cfg19*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_cs1_dq1_invdelayselrx :    7;  /*byte h cfg19*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_h_cs1_dq0_invdelayselrx :    7;  /*byte h cfg19*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs1_dq_rx_delay_line0_h;
    union {
        struct {
            uint32_t reg_a_h_cs1_dq7_invdelayselrx :    7;  /*byte h cfg20*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_cs1_dq6_invdelayselrx :    7;  /*byte h cfg20*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_cs1_dq5_invdelayselrx :    7;  /*byte h cfg20*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_h_cs1_dq4_invdelayselrx :    7;  /*byte h cfg20*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs1_dq_rx_delay_line1_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_cs1_dqsb_invdelayselrx:    7;  /*byte h cfg21*/
            uint32_t reserved15                    :    9;
            uint32_t reg_a_h_cs1_dqs_invdelayselrx :    7;  /*byte h cfg21*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_cs1_dqs_rx_delay_line_h;
    union {
        struct {
            uint32_t reg_a_h_rd_train_dqs_range_min:    7;  /*byte h cfg22*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_rd_train_dqs_range_max:    7;  /*byte h cfg22*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_train_dqs_default     :    8;  /*byte h cfg22*/
            uint32_t reg_a_h_rd_train_dqs_default  :    7;  /*byte h cfg22*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dqs_train_cfg_h;
    union {
        struct {
            uint32_t reserved0                     :    16;
            uint32_t reg_a_h_rdtrain_check_wrap1   :    8;  /*byte h cfg23*/
            uint32_t reg_a_h_rdtrain_check_wrap0   :    8;  /*byte h cfg23*/
        };
        uint32_t val;
    } ddr_phy_rdtrain_check_pattern_h;
    uint32_t reserved_360;
    uint32_t reserved_364;
    uint32_t reserved_368;
    uint32_t reserved_36c;
    uint32_t reserved_370;
    uint32_t reserved_374;
    uint32_t reserved_378;
    uint32_t reserved_37c;
    union {
        struct {
            uint32_t reg_a_h_tdqs_invdelaysel1     :    8;  /*byte h rd0*/
            uint32_t reserved8                     :    8;
            uint32_t reg_a_h_tdqs_invdelaysel0     :    8;  /*byte h rd0*/
            uint32_t reserved24                    :    6;
            uint32_t reg_a_h_dqs_idqshigh          :    1;  /*byte h rd0*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_wl_result_h;
    union {
        struct {
            uint32_t reg_a_h_dllsel                :    5;  /*byte h rd1*/
            uint32_t reg_a_h_ophsel                :    3;  /*byte h rd1*/
            uint32_t reg_a_h_cycsel                :    3;  /*byte h rd1*/
            uint32_t reserved11                    :    21;
        };
        uint32_t val;
    } ddr_phy_rx_dqs_cali_delay_h;
    union {
        struct {
            uint32_t reg_a_h_calib_result_cs1      :    11;  /*byte h rd2*/
            uint32_t reserved11                    :    5;
            uint32_t reg_a_h_calib_result_cs0      :    11;  /*byte h rd2*/
            uint32_t reserved27                    :    5;
        };
        uint32_t val;
    } ddr_phy_rx_dqs_calib_result_h;
    union {
        struct {
            uint32_t reg_a_h_cs0_value_dqx_invdelaysel:    8;  /*byte h rd3*/
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } ddr_phy_cs0_value_dqx_invdelaysel_h;
    union {
        struct {
            uint32_t reg_a_h_cs1_value_dqx_invdelaysel:    8;  /*byte h rd4*/
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } ddr_phy_cs1_value_dqx_invdelaysel_h;
    union {
        struct {
            uint32_t reg_a_h_train_min_for_rd_dq3  :    7;  /*byte h rd5*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_train_min_for_rd_dq2  :    7;  /*byte h rd5*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_train_min_for_rd_dq1  :    7;  /*byte h rd5*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_h_train_min_for_rd_dq0  :    7;  /*byte h rd5*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dq_rx_delay_line_min_pp0_h;
    union {
        struct {
            uint32_t reg_a_h_train_min_for_rd_dq7  :    7;  /*byte h rd6*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_train_min_for_rd_dq6  :    7;  /*byte h rd6*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_train_min_for_rd_dq5  :    7;  /*byte h rd6*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_h_train_min_for_rd_dq4  :    7;  /*byte h rd6*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dq_rx_delay_line_min_pp1_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_train_min_for_rd_dqs  :    7;  /*byte h rd7*/
            uint32_t reserved15                    :    17;
        };
        uint32_t val;
    } ddr_phy_dqs_rx_delay_line_min_pp_h;
    union {
        struct {
            uint32_t reg_a_h_train_max_for_rd_dq3  :    7;  /*byte h rd8*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_train_max_for_rd_dq2  :    7;  /*byte h rd8*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_train_max_for_rd_dq1  :    7;  /*byte h rd8*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_h_train_max_for_rd_dq0  :    7;  /*byte h rd8*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dq_rx_delay_line_max_pp0_h;
    union {
        struct {
            uint32_t reg_a_h_train_max_for_rd_dq7  :    7;  /*byte h rd9*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_train_max_for_rd_dq6  :    7;  /*byte h rd9*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_train_max_for_rd_dq5  :    7;  /*byte h rd9*/
            uint32_t reserved23                    :    1;
            uint32_t reg_a_h_train_max_for_rd_dq4  :    7;  /*byte h rd9*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dq_rx_delay_line_max_pp1_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_train_max_for_rd_dqs  :    7;  /*byte h rd10*/
            uint32_t reserved15                    :    17;
        };
        uint32_t val;
    } ddr_phy_dqs_rx_delay_line_max_pp_h;
    union {
        struct {
            uint32_t reserved0                     :    2;
            uint32_t reg_a_h_right_boundary_overflow_for_rd:    1;  /*byte h rd11*/
            uint32_t reg_a_h_left_boundary_overflow_for_rd:    1;  /*byte h rd11*/
            uint32_t reserved4                     :    1;
            uint32_t reg_a_h_change_rd_dqs_default :    1;  /*byte h rd11*/
            uint32_t reserved6                     :    18;
            uint32_t reg_a_h_train_result_for_rd_base_dqs:    7;  /*byte h rd11*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddr_phy_dqs_rx_delay_line_state_h;
    union {
        struct {
            uint32_t reg_a_h_rd_train_readback_data_dq1:    16;  /*byte h rd12*/
            uint32_t reg_a_h_rd_train_readback_data_dq0:    16;  /*byte h rd12*/
        };
        uint32_t val;
    } ddr_phy_rd_train_readback_data0_h;
    union {
        struct {
            uint32_t reg_a_h_rd_train_readback_data_dq3:    16;  /*byte h rd13*/
            uint32_t reg_a_h_rd_train_readback_data_dq2:    16;  /*byte h rd13*/
        };
        uint32_t val;
    } ddr_phy_rd_train_readback_data1_h;
    union {
        struct {
            uint32_t reg_a_h_rd_train_readback_data_dq5:    16;  /*byte h rd14*/
            uint32_t reg_a_h_rd_train_readback_data_dq4:    16;  /*byte h rd14*/
        };
        uint32_t val;
    } ddr_phy_rd_train_readback_data2_h;
    union {
        struct {
            uint32_t reg_a_h_rd_train_readback_data_dq7:    16;  /*byte h rd15*/
            uint32_t reg_a_h_rd_train_readback_data_dq6:    16;  /*byte h rd15*/
        };
        uint32_t val;
    } ddr_phy_rd_train_readback_data3_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_train_min_for_dqs     :    8;  /*byte h rd16*/
            uint32_t reserved16                    :    1;
            uint32_t reg_a_h_change_dqs_default    :    1;  /*byte h rd16*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } ddr_phy_dqs_tx_delay_line_min_pp_h;
    union {
        struct {
            uint32_t reg_a_h_train_min_for_dq3     :    8;  /*byte h rd17*/
            uint32_t reg_a_h_train_min_for_dq2     :    8;  /*byte h rd17*/
            uint32_t reg_a_h_train_min_for_dq1     :    8;  /*byte h rd17*/
            uint32_t reg_a_h_train_min_for_dq0     :    8;  /*byte h rd17*/
        };
        uint32_t val;
    } ddr_phy_dq_tx_delay_line_min_pp0_h;
    union {
        struct {
            uint32_t reg_a_h_train_min_for_dq7     :    8;  /*byte h rd18*/
            uint32_t reg_a_h_train_min_for_dq6     :    8;  /*byte h rd18*/
            uint32_t reg_a_h_train_min_for_dq5     :    8;  /*byte h rd18*/
            uint32_t reg_a_h_train_min_for_dq4     :    8;  /*byte h rd18*/
        };
        uint32_t val;
    } ddr_phy_dq_tx_delay_line_min_pp1_h;
    union {
        struct {
            uint32_t reserved0                     :    8;
            uint32_t reg_a_h_train_max_for_dqs     :    8;  /*byte h rd19*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddr_phy_dqs_tx_delay_line_max_pp_h;
    uint32_t reserved_3d0;
    uint32_t reserved_3d4;
    uint32_t reserved_3d8;
    uint32_t reserved_3dc;
    union {
        struct {
            uint32_t reg_a_h_train_max_for_dq3     :    8;  /*byte h rd20*/
            uint32_t reg_a_h_train_max_for_dq2     :    8;  /*byte h rd20*/
            uint32_t reg_a_h_train_max_for_dq1     :    8;  /*byte h rd20*/
            uint32_t reg_a_h_train_max_for_dq0     :    8;  /*byte h rd20*/
        };
        uint32_t val;
    } ddr_phy_dq_tx_delay_line_max_pp0_h;
    union {
        struct {
            uint32_t reg_a_h_train_max_for_dq7     :    8;  /*byte h rd21*/
            uint32_t reg_a_h_train_max_for_dq6     :    8;  /*byte h rd21*/
            uint32_t reg_a_h_train_max_for_dq5     :    8;  /*byte h rd21*/
            uint32_t reg_a_h_train_max_for_dq4     :    8;  /*byte h rd21*/
        };
        uint32_t val;
    } ddr_phy_dq_tx_delay_line_max_pp1_h;
    union {
        struct {
            uint32_t reg_a_h_rdtrain_vref_min      :    9;  /*byte h rd22*/
            uint32_t reserved9                     :    7;
            uint32_t reg_a_h_rdtrain_vref_max      :    9;  /*byte h rd22*/
            uint32_t reserved25                    :    7;
        };
        uint32_t val;
    } ddr_phy_rdtrain_vref_value_range_h;
    union {
        struct {
            uint32_t reg_a_h_train_max_for_rd_dm   :    7;  /*byte h rd23*/
            uint32_t reserved7                     :    1;
            uint32_t reg_a_h_train_min_for_rd_dm   :    7;  /*byte h rd23*/
            uint32_t reserved15                    :    1;
            uint32_t reg_a_h_train_max_for_dm      :    8;  /*byte h rd23*/
            uint32_t reg_a_h_train_min_for_dm      :    8;  /*byte h rd23*/
        };
        uint32_t val;
    } ddr_phy_dm_train_pp_range_h;
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*this reg_file clock force on*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } ddr_phy_apb_clk_en;
} ddr_asic_phy_dev_t;
extern ddr_asic_phy_dev_t DDR_ASIC_PHY;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_DDR_ASIC_PHY_STRUCT_H_ */
