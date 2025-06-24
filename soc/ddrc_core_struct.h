/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_DDRC_CORE_STRUCT_H_
#define _SOC_DDRC_CORE_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    uint32_t reserved_0;
    uint32_t reserved_4;
    uint32_t reserved_8;
    uint32_t reserved_c;
    uint32_t reserved_10;
    uint32_t reserved_14;
    uint32_t reserved_18;
    uint32_t reserved_1c;
    uint32_t reserved_20;
    uint32_t reserved_24;
    uint32_t reserved_28;
    uint32_t reserved_2c;
    uint32_t reserved_30;
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
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*Configures whether to force on core_reg_file clock.; 0: Not force on; 1: Force on*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } clk_en;
    uint32_t reserved_204;
    uint32_t reserved_208;
    uint32_t reserved_20c;
    union {
        struct {
            uint32_t reg_dis_data_path             :    1;  /*Configures whenther to disable write/read data path. If disable, data write/read requests from AXI port will store in cache, and send to DRAM after enable.; 0: Enable write/read data path; 1: Disable write/read data path*/
            uint32_t reserved1                     :    15;
            uint32_t reg_dram_en                   :    1;  /*Configures whether to enable DRAM access. If disable, data write/read requests from AXI port and cache will clear, and give error resp to AXI port.; 0: Disable; 1: Enable*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } ddrc_path_en;
    uint32_t reserved_214;
    uint32_t reserved_218;
    uint32_t reserved_21c;
    union {
        struct {
            uint32_t reg_mr_acc                    :    1;  /*Configures whether to trigger a DRAM mode register read or write operation. When the MR operation is complete, HW automatically clears this bit.; 0: No effect; 1: Trigger a mode register operation*/
            uint32_t reg_mr_type                   :    1;  /*Configures DRAM mode register operation type.; 0: Mode register read; 1: Mode register write*/
            uint32_t reserved2                     :    6;
            uint32_t reg_mr_addr                   :    8;  /*Configures DRAM mode register operation address(ID).*/
            uint32_t reg_mr_wdata                  :    16;  /*Configures DRAM mode register write data.*/
        };
        uint32_t val;
    } ddrc_mr_acc;
    uint32_t reserved_224;
    uint32_t reserved_228;
    uint32_t reserved_22c;
    uint32_t ddrc_mr_rdata0;
    uint32_t ddrc_mr_rdata1;
    uint32_t ddrc_mr_rdata2;
    uint32_t ddrc_mr_rdata3;
    union {
        struct {
            uint32_t reg_ref_rate                  :    3;  /*Configures Refresh Rate in LPDDR3/2 MR4; 3'h0 : DRAM Low temperature operating limit exceeded; 3'h1 : 4*DDRC_REF_TH_X32; 3'h2 : 2*DDRC_REF_TH_X32; 3'h3 : DDRC_REF_TH_X32; 3'h4 : 0.5*DDRC_REF_TH_X32; 3'h5 : 0.25*DDRC_REF_TH_X32; 3'h6 : 0.25*DDRC_REF_TH_X32, and need de-rate DRAM AC timing; 3'h7 : DRAM High temperature operating limit exceeded*/
            uint32_t reserved3                     :    1;
            uint32_t reg_ref_rate_upd_auto_en      :    1;  /*Configures whether to enable HW auto read LPDDR3/2 MR4 and update Refresh Rate. Only use in LPDDR3/2, other DRAM type need clear to 0.; 0: Disable; 1: Enable*/
            uint32_t reserved5                     :    3;
            uint32_t reg_ref_rate_upd_th_x1024     :    24;  /*Configures HW auto read LPDDR3/2 MR4 interval threshold. Unit is DDRC core clock cycle * 1024. Only use in LPDDR3/2.*/
        };
        uint32_t val;
    } ddrc_ref_rate_upd;
    union {
        struct {
            uint32_t reg_ref_send                  :    1;  /*Configures whether to trigger a refresh all bank command. HW auto clear this bit after receive this trigger.; 0 : No effect; 1 : Trigger a refresh all bank command*/
            uint32_t reserved1                     :    7;
            uint32_t reg_ref_auto_en               :    1;  /*Configures whether to enable HW auto send refresh all bank command.; 0 : Disable; 1 : Enable*/
            uint32_t reserved9                     :    7;
            uint32_t reg_ref_th_x32                :    12;  /*Configures HW auto send refresh all bank command interval threshold in normal temperature. HW will auto * temperature rate based on DDRC_REF_RATE.  Unit is DDRC core clock cycle * 32.*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } ddrc_ref;
    union {
        struct {
            uint32_t reg_zqc_en                    :    4;  /*Configures 1 to corresponding bit to trigger DRAM ZQ calibration. HW auto clear this field after receive this trigger.; Bit 3: Write 1 to trigger ZQ Initial Calibration, write 0 no effect; Bit 2: Write 1 to trigger ZQ Reset Calibration, write 0 no effect; Bit 1: Write 1 to trigger ZQ Long Calibration, write 0 no effect; Bit 0: Write 1 to trigger ZQ Short Calibration, write 0 no effect*/
            uint32_t reserved4                     :    4;
            uint32_t reg_zqcs_auto_en              :    1;  /*Configures whether to enable HW auto send ZQ Short Calibration to DRAM.; 0 : Disable; 1 : Enable*/
            uint32_t reserved9                     :    3;
            uint32_t reg_zqcs_th_x1024             :    20;  /*Configures HW auto send ZQ Short Calibration to DRAM interval threshold. Unit is DDRC core clock cycle * 1024.*/
        };
        uint32_t val;
    } ddrc_zqc;
    union {
        struct {
            uint32_t reserved0                     :    1;
            uint32_t reg_sref_en                   :    1;  /*Configures whether FW let DRAM Entry/Exit Self-Refresh. ; 0: Exit Self-Refresh; 1: Entry Self-Refresh*/
            uint32_t reg_dpd_en                    :    1;  /*Configures whether FW let DRAM Entry/Exit Deep Power-Down. ; 0: Exit Deep Power-Down; 1: Entry Deep Power-Down*/
            uint32_t reserved3                     :    5;
            uint32_t reg_pd_auto_en                :    1;  /*Configures whether to enable HW auto set DRAM Power-Down if reach max idle clocks.; 0 : Disable; 1 : Enable*/
            uint32_t reg_sref_auto_en              :    1;  /*Configures whether to enable HW auto set DRAM Self-Refresh if reach max idle clocks.; 0 : Disable; 1 : Enable*/
            uint32_t reserved10                    :    6;
            uint32_t reg_pd_th_x32                 :    5;  /*Configures HW auto set DRAM Power-Down timer threshold. HW can set DRAM Power-Down if command channel being idle for these clocks. Unit is DDRC core clock cycle * 32.*/
            uint32_t reserved21                    :    3;
            uint32_t reg_sref_th_x32               :    8;  /*Configures HW auto set DRAM Self-Refresh timer threshold. HW can set DRAM Self-Refresh if command channel being idle for these clocks. Unit is DDRC core clock cycle * 32.*/
        };
        uint32_t val;
    } ddrc_lowpower;
    uint32_t reserved_250;
    uint32_t reserved_254;
    uint32_t reserved_258;
    uint32_t reserved_25c;
    union {
        struct {
            uint32_t reg_axiw_idle                 :    16;  /*Represents AXI write port 15~0 are idle or not. For bit n:; 0 : AXI write port n busy; 1 : AXI write port n idle*/
            uint32_t reg_axir_idle                 :    16;  /*Represents AXI read port 15~0 are idle or not. For bit n:; 0 : AXI read port n busy; 1 : AXI read port n idle*/
        };
        uint32_t val;
    } ddrc_module_status0;
    union {
        struct {
            uint32_t reserved0                     :    1;
            uint32_t reg_rmw_empty                 :    1;  /*Represents rmw_cache module is empty or not.; 0 : Not empty; 1 : Empty*/
            uint32_t reg_wrc_empty                 :    1;  /*Represents wr_cache module is empty or not.; 0 : Not empty ; 1 : Empty*/
            uint32_t reserved3                     :    6;
            uint32_t reg_ol_empty                  :    1;  /*Represents overlap module is empty or not.; 0 : Not empty; 1 : Empty*/
            uint32_t reg_rdc_empty                 :    1;  /*Represents rd_cache module is empty or not.; 0 : Not empty; 1 : Empty*/
            uint32_t reg_arq_empty                 :    1;  /*Represents ar_queue module is empty or not.; 0 : Not empty; 1 : Empty*/
            uint32_t reserved12                    :    4;
            uint32_t reg_ecc_empty                 :    1;  /*Represents ecc_cache module is empty or not.; 0 : Not empty ; 1 : Empty*/
            uint32_t reg_aes_en_empty              :    1;  /*Represents aes enable path is empty or not.; 0 : Not empty; 1 : Empty*/
            uint32_t reg_aes_dec_byp_empty         :    1;  /*Represents aes_dec bypass path is empty or not.; 0 : not empty; 1 : Empty*/
            uint32_t reserved19                    :    5;
            uint32_t reg_data_path_idle            :    1;  /*Represents read/write data path is idle or not.; 0 : Read/write data path busy; 1 : Read/write data path idle*/
            uint32_t reserved25                    :    3;
            uint32_t reg_dfi_idle                  :    1;  /*Represents dfi_ctrl module is idle or not.; 0 : dfi_ctrl module busy; 1 : dfi_ctrl module idle*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddrc_module_status1;
    uint32_t reserved_268;
    uint32_t reserved_26c;
    uint32_t reserved_270;
    uint32_t reserved_274;
    uint32_t reserved_278;
    uint32_t reserved_27c;
    union {
        struct {
            uint32_t reg_ecc_corr_err_th           :    16;  /*Configures ECC correctable error threshold. If error count > threshold, may send interrupt.*/
            uint32_t reg_ecc_uncorr_err_th         :    16;  /*Configures ECC uncorrectable error threshold. If error count > threshold, may send interrupt.*/
        };
        uint32_t val;
    } ddrc_ecc_err_th;
    union {
        struct {
            uint32_t reg_ecc_corr_err_cnt          :    16;  /*Represents ECC correctable error count.*/
            uint32_t reg_ecc_uncorr_err_cnt        :    16;  /*Represents ECC uncorrectable error count.*/
        };
        uint32_t val;
    } ddrc_ecc_err_cnt;
    union {
        struct {
            uint32_t reg_ecc_corr_col              :    12;  /*Represents the last ECC correctable error column address.*/
            uint32_t reg_ecc_corr_row              :    16;  /*Represents the last ECC correctable error row address.*/
            uint32_t reg_ecc_corr_bank             :    3;  /*Represents the last ECC correctable error bank address.*/
            uint32_t reg_ecc_corr_rmw              :    1;  /*Represents the last ECC correctable error is RMW read.*/
        };
        uint32_t val;
    } ddrc_ecc_corr_addr;
    union {
        struct {
            uint32_t reg_ecc_uncorr_col            :    12;  /*Represents the last ECC uncorrectable error column address.*/
            uint32_t reg_ecc_uncorr_row            :    16;  /*Represents the last ECC uncorrectable error row address.*/
            uint32_t reg_ecc_uncorr_bank           :    3;  /*Represents the last ECC uncorrectable error bank address.*/
            uint32_t reg_ecc_uncorr_rmw            :    1;  /*Represents the last ECC uncorrectable error is RMW read.*/
        };
        uint32_t val;
    } ddrc_ecc_uncorr_addr;
    union {
        struct {
            uint32_t reg_ecc_corr_int_raw          :    1;  /*The raw interrupt status of ECC_CORR_INT. ECC correctable error happened.*/
            uint32_t reg_ecc_corr_of_int_raw       :    1;  /*The raw interrupt status of ECC_CORR_OF_INT. ECC correctable error count > threshold.*/
            uint32_t reg_ecc_uncorr_int_raw        :    1;  /*The raw interrupt status of ECC_UNCORR_INT. ECC uncorrectable error happened.*/
            uint32_t reg_ecc_uncorr_of_int_raw     :    1;  /*The raw interrupt status of ECC_UNCORR_OF_INT. ECC uncorrectable error count > threshold.*/
            uint32_t reg_dfi_err_int_raw           :    1;  /*The raw interrupt status of DFI_ERR_INT. PHY report error by dfi interface.*/
            uint32_t reg_temp_err_int_raw          :    1;  /*The raw interrupt status of TEMP_ERR_INT. DRAM temperature exceed.*/
            uint32_t reg_read_buf_of_int_raw       :    1;  /*The raw interrupt status of  READ_BUF_OF_INT. Read buffer overflow, caused by credit control error, need reduce credit in DDRC_CREDIT_CTRL_REG.*/
            uint32_t reserved7                     :    25;
        };
        uint32_t val;
    } ddrc_err_int_raw;
    union {
        struct {
            uint32_t reg_ecc_corr_int_st           :    1;  /*The masked interrupt status of ECC_CORR_INT.*/
            uint32_t reg_ecc_corr_of_int_st        :    1;  /*The masked interrupt status of ECC_CORR_OF_INT.*/
            uint32_t reg_ecc_uncorr_int_st         :    1;  /*The masked interrupt status of ECC_UNCORR_INT.*/
            uint32_t reg_ecc_uncorr_of_int_st      :    1;  /*The masked interrupt status of ECC_UNCORR_OF_INT.*/
            uint32_t reg_dfi_err_int_st            :    1;  /*The masked interrupt status of DFI_ERR_INT.*/
            uint32_t reg_temp_err_int_st           :    1;  /*The masked interrupt status of TEMP_ERR_INT.*/
            uint32_t reg_read_buf_of_int_st        :    1;  /*The masked interrupt status of  READ_BUF_OF_INT.*/
            uint32_t reserved7                     :    25;
        };
        uint32_t val;
    } ddrc_err_int_st;
    union {
        struct {
            uint32_t reg_ecc_corr_int_ena          :    1;  /*Write 1 to enable interrupt ECC_CORR_INT.*/
            uint32_t reg_ecc_corr_of_int_ena       :    1;  /*Write 1 to enable interrupt ECC_CORR_OF_INT.*/
            uint32_t reg_ecc_uncorr_int_ena        :    1;  /*Write 1 to enable interrupt ECC_UNCORR_INT.*/
            uint32_t reg_ecc_uncorr_of_int_ena     :    1;  /*Write 1 to enable interrupt ECC_UNCORR_OF_INT.*/
            uint32_t reg_dfi_err_int_ena           :    1;  /*Write 1 to enable interrupt DFI_ERR_INT.*/
            uint32_t reg_temp_err_int_ena          :    1;  /*Write 1 to enable interrupt TEMP_ERR_INT.*/
            uint32_t reg_read_buf_of_int_ena       :    1;  /*Write 1 to enable interrupt READ_BUF_OF_INT.*/
            uint32_t reserved7                     :    25;
        };
        uint32_t val;
    } ddrc_err_int_ena;
    union {
        struct {
            uint32_t reg_ecc_corr_int_clr          :    1;  /*Write 1 to clear interrupt ECC_CORR_INT.*/
            uint32_t reg_ecc_corr_of_int_clr       :    1;  /*Write 1 to clear interrupt ECC_CORR_OF_INT.*/
            uint32_t reg_ecc_uncorr_int_clr        :    1;  /*Write 1 to clear interrupt ECC_UNCORR_INT.*/
            uint32_t reg_ecc_uncorr_of_int_clr     :    1;  /*Write 1 to clear interrupt ECC_UNCORR_OF_INT.*/
            uint32_t reg_dfi_err_int_clr           :    1;  /*Write 1 to clear interrupt DFI_ERR_INT.*/
            uint32_t reg_temp_err_int_clr          :    1;  /*Write 1 to clear interrupt TEMP_ERR_INT.*/
            uint32_t reg_read_buf_of_int_clr       :    1;  /*Write 1 to clear interrupt READ_BUF_OF_INT.*/
            uint32_t reserved7                     :    25;
        };
        uint32_t val;
    } ddrc_err_int_clr;
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
    uint32_t version;
    uint32_t eco0;
    uint32_t eco1;
    uint32_t eco2;
} ddrc_core_dev_t;
extern ddrc_core_dev_t DDRC_CORE;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_DDRC_CORE_STRUCT_H_ */
