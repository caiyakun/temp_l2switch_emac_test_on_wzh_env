/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_GDMA_STRUCT_H_
#define _SOC_GDMA_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    uint32_t id0;
    uint32_t reserved_4;
    uint32_t compver0;
    uint32_t reserved_c;
    union {
        struct {
            uint32_t dmac_en                       :    1;
            uint32_t int_en                        :    1;
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } cfg0;
    uint32_t reserved_14;
    union {
        struct {
            uint32_t ch1_en                        :    1;
            uint32_t ch2_en                        :    1;
            uint32_t ch3_en                        :    1;
            uint32_t ch4_en                        :    1;
            uint32_t ch5_en                        :    1;
            uint32_t ch6_en                        :    1;
            uint32_t ch7_en                        :    1;
            uint32_t ch8_en                        :    1;
            uint32_t ch1_en_we                     :    1;
            uint32_t ch2_en_we                     :    1;
            uint32_t ch3_en_we                     :    1;
            uint32_t ch4_en_we                     :    1;
            uint32_t ch5_en_we                     :    1;
            uint32_t ch6_en_we                     :    1;
            uint32_t ch7_en_we                     :    1;
            uint32_t ch8_en_we                     :    1;
            uint32_t ch1_susp                      :    1;
            uint32_t ch2_susp                      :    1;
            uint32_t ch3_susp                      :    1;
            uint32_t ch4_susp                      :    1;
            uint32_t ch5_susp                      :    1;
            uint32_t ch6_susp                      :    1;
            uint32_t ch7_susp                      :    1;
            uint32_t ch8_susp                      :    1;
            uint32_t ch1_susp_we                   :    1;
            uint32_t ch2_susp_we                   :    1;
            uint32_t ch3_susp_we                   :    1;
            uint32_t ch4_susp_we                   :    1;
            uint32_t ch5_susp_we                   :    1;
            uint32_t ch6_susp_we                   :    1;
            uint32_t ch7_susp_we                   :    1;
            uint32_t ch8_susp_we                   :    1;
        };
        uint32_t val;
    } chen0;
    union {
        struct {
            uint32_t ch1_abort                     :    1;
            uint32_t ch2_abort                     :    1;
            uint32_t ch3_abort                     :    1;
            uint32_t ch4_abort                     :    1;
            uint32_t ch5_abort                     :    1;
            uint32_t ch6_abort                     :    1;
            uint32_t ch7_abort                     :    1;
            uint32_t ch8_abort                     :    1;
            uint32_t ch1_abort_we                  :    1;
            uint32_t ch2_abort_we                  :    1;
            uint32_t ch3_abort_we                  :    1;
            uint32_t ch4_abort_we                  :    1;
            uint32_t ch5_abort_we                  :    1;
            uint32_t ch6_abort_we                  :    1;
            uint32_t ch7_abort_we                  :    1;
            uint32_t ch8_abort_we                  :    1;
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } chen1;
    uint32_t reserved_20;
    uint32_t reserved_24;
    uint32_t reserved_28;
    uint32_t reserved_2c;
    union {
        struct {
            uint32_t ch1                           :    1;
            uint32_t ch2                           :    1;
            uint32_t ch3                           :    1;
            uint32_t ch4                           :    1;
            uint32_t ch5                           :    1;
            uint32_t ch6                           :    1;
            uint32_t ch7                           :    1;
            uint32_t ch8                           :    1;
            uint32_t reserved8                     :    8;
            uint32_t commonreg                     :    1;
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } int_st0;
    uint32_t reserved_34;
    union {
        struct {
            uint32_t slvif_commonreg_dec_err       :    1;
            uint32_t slvif_commonreg_wr2ro_err     :    1;
            uint32_t slvif_commonreg_rd2wo_err     :    1;
            uint32_t slvif_commonreg_wronhold_err  :    1;
            uint32_t reserved4                     :    3;
            uint32_t slvif_commonreg_wrparity_err  :    1;
            uint32_t slvif_undefinedreg_dec_err    :    1;
            uint32_t mxif1_rch0_eccprot_correrr    :    1;
            uint32_t mxif1_rch0_eccprot_uncorrerr  :    1;
            uint32_t mxif1_rch1_eccprot_correrr    :    1;
            uint32_t mxif1_rch1_eccprot_uncorrerr  :    1;
            uint32_t mxif1_bch_eccprot_correrr     :    1;
            uint32_t mxif1_bch_eccprot_uncorrerr   :    1;
            uint32_t mxif2_rch0_eccprot_correrr    :    1;
            uint32_t mxif2_rch0_eccprot_uncorrerr  :    1;
            uint32_t mxif2_rch1_eccprot_correrr    :    1;
            uint32_t mxif2_rch1_eccprot_uncorrerr  :    1;
            uint32_t mxif2_bch_eccprot_correrr     :    1;
            uint32_t mxif2_bch_eccprot_uncorrerr   :    1;
            uint32_t reserved21                    :    11;
        };
        uint32_t val;
    } common_int_clr0;
    uint32_t reserved_3c;
    union {
        struct {
            uint32_t slvif_commonreg_dec_err       :    1;
            uint32_t slvif_commonreg_wr2ro_err     :    1;
            uint32_t slvif_commonreg_rd2wo_err     :    1;
            uint32_t slvif_commonreg_wronhold_err  :    1;
            uint32_t reserved4                     :    3;
            uint32_t slvif_commonreg_wrparity_err  :    1;
            uint32_t slvif_undefinedreg_dec_err    :    1;
            uint32_t mxif1_rch0_eccprot_correrr    :    1;
            uint32_t mxif1_rch0_eccprot_uncorrerr  :    1;
            uint32_t mxif1_rch1_eccprot_correrr    :    1;
            uint32_t mxif1_rch1_eccprot_uncorrerr  :    1;
            uint32_t mxif1_bch_eccprot_correrr     :    1;
            uint32_t mxif1_bch_eccprot_uncorrerr   :    1;
            uint32_t mxif2_rch0_eccprot_correrr    :    1;
            uint32_t mxif2_rch0_eccprot_uncorrerr  :    1;
            uint32_t mxif2_rch1_eccprot_correrr    :    1;
            uint32_t mxif2_rch1_eccprot_uncorrerr  :    1;
            uint32_t mxif2_bch_eccprot_correrr     :    1;
            uint32_t mxif2_bch_eccprot_uncorrerr   :    1;
            uint32_t reserved21                    :    11;
        };
        uint32_t val;
    } common_int_st_ena0;
    uint32_t reserved_44;
    union {
        struct {
            uint32_t slvif_commonreg_dec_err       :    1;
            uint32_t slvif_commonreg_wr2ro_err     :    1;
            uint32_t slvif_commonreg_rd2wo_err     :    1;
            uint32_t slvif_commonreg_wronhold_err  :    1;
            uint32_t reserved4                     :    3;
            uint32_t slvif_commonreg_wrparity_err  :    1;
            uint32_t slvif_undefinedreg_dec_err    :    1;
            uint32_t mxif1_rch0_eccprot_correrr    :    1;
            uint32_t mxif1_rch0_eccprot_uncorrerr  :    1;
            uint32_t mxif1_rch1_eccprot_correrr    :    1;
            uint32_t mxif1_rch1_eccprot_uncorrerr  :    1;
            uint32_t mxif1_bch_eccprot_correrr     :    1;
            uint32_t mxif1_bch_eccprot_uncorrerr   :    1;
            uint32_t mxif2_rch0_eccprot_correrr    :    1;
            uint32_t mxif2_rch0_eccprot_uncorrerr  :    1;
            uint32_t mxif2_rch1_eccprot_correrr    :    1;
            uint32_t mxif2_rch1_eccprot_uncorrerr  :    1;
            uint32_t mxif2_bch_eccprot_correrr     :    1;
            uint32_t mxif2_bch_eccprot_uncorrerr   :    1;
            uint32_t reserved21                    :    11;
        };
        uint32_t val;
    } common_int_sig_ena0;
    uint32_t reserved_4c;
    union {
        struct {
            uint32_t slvif_commonreg_dec_err       :    1;
            uint32_t slvif_commonreg_wr2ro_err     :    1;
            uint32_t slvif_commonreg_rd2wo_err     :    1;
            uint32_t slvif_commonreg_wronhold_err  :    1;
            uint32_t reserved4                     :    3;
            uint32_t slvif_commonreg_wrparity_err  :    1;
            uint32_t slvif_undefinedreg_dec_err    :    1;
            uint32_t mxif1_rch0_eccprot_correrr    :    1;
            uint32_t mxif1_rch0_eccprot_uncorrerr  :    1;
            uint32_t mxif1_rch1_eccprot_correrr    :    1;
            uint32_t mxif1_rch1_eccprot_uncorrerr  :    1;
            uint32_t mxif1_bch_eccprot_correrr     :    1;
            uint32_t mxif1_bch_eccprot_uncorrerr   :    1;
            uint32_t mxif2_rch0_eccprot_correrr    :    1;
            uint32_t mxif2_rch0_eccprot_uncorrerr  :    1;
            uint32_t mxif2_rch1_eccprot_correrr    :    1;
            uint32_t mxif2_rch1_eccprot_uncorrerr  :    1;
            uint32_t mxif2_bch_eccprot_correrr     :    1;
            uint32_t mxif2_bch_eccprot_uncorrerr   :    1;
            uint32_t reserved21                    :    11;
        };
        uint32_t val;
    } common_int_st0;
    uint32_t reserved_54;
    union {
        struct {
            uint32_t dmac_rst                      :    1;
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } reset0;
    uint32_t reserved_5c;
    union {
        struct {
            uint32_t gbl_cslp_en                   :    1;
            uint32_t chnl_cslp_en                  :    1;
            uint32_t sbiu_cslp_en                  :    1;
            uint32_t mxif_cslp_en                  :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } lowpower_cfg0;
    union {
        struct {
            uint32_t glch_lpdly                    :    8;
            uint32_t sbiu_lpdly                    :    8;
            uint32_t mxif_lpdly                    :    8;
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } lowpower_cfg1;
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
    uint32_t reserved_150;
    uint32_t reserved_250;
    uint32_t reserved_350;
    uint32_t reserved_450;
    struct {
        uint32_t sar0;
        uint32_t sar1;
        uint32_t dar0;
        uint32_t dar1;
        union {
            struct {
                uint32_t block_ts                      :    22;
                uint32_t reserved22                    :    10;
            };
            uint32_t val;
        } block_ts0;
        uint32_t reserved_114;
        union {
            struct {
                uint32_t sms                           :    1;
                uint32_t reserved1                     :    1;
                uint32_t dms                           :    1;
                uint32_t reserved3                     :    1;
                uint32_t sinc                          :    1;
                uint32_t reserved5                     :    1;
                uint32_t dinc                          :    1;
                uint32_t reserved7                     :    1;
                uint32_t src_tr_width                  :    3;
                uint32_t dst_tr_width                  :    3;
                uint32_t src_msize                     :    4;
                uint32_t dst_msize                     :    4;
                uint32_t ar_cache                      :    4;
                uint32_t aw_cache                      :    4;
                uint32_t nonposted_lastwrite_en        :    1;
                uint32_t reserved31                    :    1;
            };
            uint32_t val;
        } ctl0;
        union {
            struct {
                uint32_t ar_prot                       :    3;
                uint32_t aw_prot                       :    3;
                uint32_t arlen_en                      :    1;
                uint32_t arlen                         :    8;
                uint32_t awlen_en                      :    1;
                uint32_t awlen                         :    8;
                uint32_t src_stat_en                   :    1;
                uint32_t dst_stat_en                   :    1;
                uint32_t ioc_blktfr                    :    1;
                uint32_t reserved27                    :    3;
                uint32_t shadowreg_or_lli_last         :    1;
                uint32_t shadowreg_or_lli_valid        :    1;
            };
            uint32_t val;
        } ctl1;
        union {
            struct {
                uint32_t src_multblk_type              :    2;
                uint32_t dst_multblk_type              :    2;
                uint32_t reserved4                     :    14;
                uint32_t rd_uid                        :    4;
                uint32_t reserved22                    :    3;
                uint32_t wr_uid                        :    4;
                uint32_t reserved29                    :    3;
            };
            uint32_t val;
        } cfg0;
        union {
            struct {
                uint32_t tt_fc                         :    3;
                uint32_t hs_sel_src                    :    1;
                uint32_t hs_sel_dst                    :    1;
                uint32_t src_hwhs_pol                  :    1;
                uint32_t dst_hwhs_pol                  :    1;
                uint32_t src_per                       :    1;
                uint32_t reserved8                     :    3;
                uint32_t reserved11                    :    1;
                uint32_t dst_per                       :    1;
                uint32_t reserved13                    :    3;
                uint32_t reserved16                    :    1;
                uint32_t ch_prior                      :    3;
                uint32_t lock_ch                       :    1;
                uint32_t lock_ch_l                     :    2;
                uint32_t src_osr_lmt                   :    4;
                uint32_t dst_osr_lmt                   :    4;
                uint32_t reserved31                    :    1;
            };
            uint32_t val;
        } cfg1;
        union {
            struct {
                uint32_t lms                           :    1;
                uint32_t reserved1                     :    5;
                uint32_t loc0                          :    26;
            };
            uint32_t val;
        } llp0;
        uint32_t llp1;
        union {
            struct {
                uint32_t cmpltd_blk_tfr_size           :    22;
                uint32_t reserved22                    :    10;
            };
            uint32_t val;
        } status0;
        union {
            struct {
                uint32_t data_left_in_fifo             :    15;
                uint32_t reserved15                    :    17;
            };
            uint32_t val;
        } status1;
        union {
            struct {
                uint32_t swhs_req_src                  :    1;
                uint32_t swhs_req_src_we               :    1;
                uint32_t swhs_sglreq_src               :    1;
                uint32_t swhs_sglreq_src_we            :    1;
                uint32_t swhs_lst_src                  :    1;
                uint32_t swhs_lst_src_we               :    1;
                uint32_t reserved6                     :    26;
            };
            uint32_t val;
        } swhssrc0;
        uint32_t reserved_13c;
        union {
            struct {
                uint32_t swhs_req_dst                  :    1;
                uint32_t swhs_req_dst_we               :    1;
                uint32_t swhs_sglreq_dst               :    1;
                uint32_t swhs_sglreq_dst_we            :    1;
                uint32_t swhs_lst_dst                  :    1;
                uint32_t swhs_lst_dst_we               :    1;
                uint32_t reserved6                     :    26;
            };
            uint32_t val;
        } swhsdst0;
        uint32_t reserved_144;
        union {
            struct {
                uint32_t blk_tfr_resumereq             :    1;
                uint32_t reserved1                     :    31;
            };
            uint32_t val;
        } blk_tfr_resumereq0;
        uint32_t reserved_14c;
        uint32_t reserved_154;
        union {
            struct {
                uint32_t axi_awqos                     :    4;
                uint32_t axi_arqos                     :    4;
                uint32_t reserved8                     :    24;
            };
            uint32_t val;
        } axi_qos0;
        uint32_t reserved_15c;
        uint32_t sstat0;
        uint32_t reserved_164;
        uint32_t dstat0;
        uint32_t reserved_16c;
        uint32_t sstatar0;
        uint32_t sstatar1;
        uint32_t dstatar0;
        uint32_t dstatar1;
        union {
            struct {
                uint32_t block_tfr_done                :    1;
                uint32_t dma_tfr_done                  :    1;
                uint32_t reserved2                     :    1;
                uint32_t src_transcomp                 :    1;
                uint32_t dst_transcomp                 :    1;
                uint32_t src_dec_err                   :    1;
                uint32_t dst_dec_err                   :    1;
                uint32_t src_slv_err                   :    1;
                uint32_t dst_slv_err                   :    1;
                uint32_t lli_rd_dec_err                :    1;
                uint32_t lli_wr_dec_err                :    1;
                uint32_t lli_rd_slv_err                :    1;
                uint32_t lli_wr_slv_err                :    1;
                uint32_t shadowreg_or_lli_invalid_err  :    1;
                uint32_t slvif_multiblktype_err        :    1;
                uint32_t reserved15                    :    1;
                uint32_t slvif_dec_err                 :    1;
                uint32_t slvif_wr2ro_err               :    1;
                uint32_t slvif_rd2rwo_err              :    1;
                uint32_t slvif_wronchen_err            :    1;
                uint32_t slvif_shadowreg_wron_valid_err:    1;
                uint32_t slvif_wronhold_err            :    1;
                uint32_t reserved22                    :    3;
                uint32_t slvif_wrparity_err            :    1;
                uint32_t reserved26                    :    1;
                uint32_t ch_lock_cleared               :    1;
                uint32_t ch_src_suspended              :    1;
                uint32_t ch_suspended                  :    1;
                uint32_t ch_disabled                   :    1;
                uint32_t ch_aborted                    :    1;
            };
            uint32_t val;
        } int_st_ena0;
        union {
            struct {
                uint32_t ecc_prot_chmem_correrr        :    1;
                uint32_t ecc_prot_chmem_uncorrerr      :    1;
                uint32_t ecc_prot_uidmem_correrr       :    1;
                uint32_t ecc_prot_uidmem_uncorrerr     :    1;
                uint32_t reserved4                     :    28;
            };
            uint32_t val;
        } int_st_ena1;
        union {
            struct {
                uint32_t block_tfr_done                :    1;
                uint32_t dma_tfr_done                  :    1;
                uint32_t reserved2                     :    1;
                uint32_t src_transcomp                 :    1;
                uint32_t dst_transcomp                 :    1;
                uint32_t src_dec_err                   :    1;
                uint32_t dst_dec_err                   :    1;
                uint32_t src_slv_err                   :    1;
                uint32_t dst_slv_err                   :    1;
                uint32_t lli_rd_dec_err                :    1;
                uint32_t lli_wr_dec_err                :    1;
                uint32_t lli_rd_slv_err                :    1;
                uint32_t lli_wr_slv_err                :    1;
                uint32_t shadowreg_or_lli_invalid_err  :    1;
                uint32_t slvif_multiblktype_err        :    1;
                uint32_t reserved15                    :    1;
                uint32_t slvif_dec_err                 :    1;
                uint32_t slvif_wr2ro_err               :    1;
                uint32_t slvif_rd2rwo_err              :    1;
                uint32_t slvif_wronchen_err            :    1;
                uint32_t slvif_shadowreg_wron_valid_err:    1;
                uint32_t slvif_wronhold_err            :    1;
                uint32_t reserved22                    :    3;
                uint32_t slvif_wrparity_err            :    1;
                uint32_t reserved26                    :    1;
                uint32_t ch_lock_cleared               :    1;
                uint32_t ch_src_suspended              :    1;
                uint32_t ch_suspended                  :    1;
                uint32_t ch_disabled                   :    1;
                uint32_t ch_aborted                    :    1;
            };
            uint32_t val;
        } int_st0;
        union {
            struct {
                uint32_t ecc_prot_chmem_correrr        :    1;
                uint32_t ecc_prot_chmem_uncorrerr      :    1;
                uint32_t ecc_prot_uidmem_correrr       :    1;
                uint32_t ecc_prot_uidmem_uncorrerr     :    1;
                uint32_t reserved4                     :    28;
            };
            uint32_t val;
        } int_st1;
        union {
            struct {
                uint32_t block_tfr_done                :    1;
                uint32_t dma_tfr_done                  :    1;
                uint32_t reserved2                     :    1;
                uint32_t src_transcomp                 :    1;
                uint32_t dst_transcomp                 :    1;
                uint32_t src_dec_err                   :    1;
                uint32_t dst_dec_err                   :    1;
                uint32_t src_slv_err                   :    1;
                uint32_t dst_slv_err                   :    1;
                uint32_t lli_rd_dec_err                :    1;
                uint32_t lli_wr_dec_err                :    1;
                uint32_t lli_rd_slv_err                :    1;
                uint32_t lli_wr_slv_err                :    1;
                uint32_t shadowreg_or_lli_invalid_err  :    1;
                uint32_t slvif_multiblktype_err        :    1;
                uint32_t reserved15                    :    1;
                uint32_t slvif_dec_err                 :    1;
                uint32_t slvif_wr2ro_err               :    1;
                uint32_t slvif_rd2rwo_err              :    1;
                uint32_t slvif_wronchen_err            :    1;
                uint32_t slvif_shadowreg_wron_valid_err:    1;
                uint32_t slvif_wronhold_err            :    1;
                uint32_t reserved22                    :    3;
                uint32_t slvif_wrparity_err            :    1;
                uint32_t reserved26                    :    1;
                uint32_t ch_lock_cleared               :    1;
                uint32_t ch_src_suspended              :    1;
                uint32_t ch_suspended                  :    1;
                uint32_t ch_disabled                   :    1;
                uint32_t ch_aborted                    :    1;
            };
            uint32_t val;
        } int_sig_ena0;
        union {
            struct {
                uint32_t ecc_prot_chmem_correrr        :    1;
                uint32_t ecc_prot_chmem_uncorrerr      :    1;
                uint32_t ecc_prot_uidmem_correrr       :    1;
                uint32_t ecc_prot_uidmem_uncorrerr     :    1;
                uint32_t reserved4                     :    28;
            };
            uint32_t val;
        } int_sig_ena1;
        union {
            struct {
                uint32_t block_tfr_done                :    1;
                uint32_t dma_tfr_done                  :    1;
                uint32_t reserved2                     :    1;
                uint32_t src_transcomp                 :    1;
                uint32_t dst_transcomp                 :    1;
                uint32_t src_dec_err                   :    1;
                uint32_t dst_dec_err                   :    1;
                uint32_t src_slv_err                   :    1;
                uint32_t dst_slv_err                   :    1;
                uint32_t lli_rd_dec_err                :    1;
                uint32_t lli_wr_dec_err                :    1;
                uint32_t lli_rd_slv_err                :    1;
                uint32_t lli_wr_slv_err                :    1;
                uint32_t shadowreg_or_lli_invalid_err  :    1;
                uint32_t slvif_multiblktype_err        :    1;
                uint32_t reserved15                    :    1;
                uint32_t slvif_dec_err                 :    1;
                uint32_t slvif_wr2ro_err               :    1;
                uint32_t slvif_rd2rwo_err              :    1;
                uint32_t slvif_wronchen_err            :    1;
                uint32_t slvif_shadowreg_wron_valid_err:    1;
                uint32_t slvif_wronhold_err            :    1;
                uint32_t reserved22                    :    3;
                uint32_t slvif_wrparity_err            :    1;
                uint32_t reserved26                    :    1;
                uint32_t ch_lock_cleared               :    1;
                uint32_t ch_src_suspended              :    1;
                uint32_t ch_suspended                  :    1;
                uint32_t ch_disabled                   :    1;
                uint32_t ch_aborted                    :    1;
            };
            uint32_t val;
        } int_clr0;
        union {
            struct {
                uint32_t ecc_prot_chmem_correrr        :    1;
                uint32_t ecc_prot_chmem_uncorrerr      :    1;
                uint32_t ecc_prot_uidmem_correrr       :    1;
                uint32_t ecc_prot_uidmem_uncorrerr     :    1;
                uint32_t reserved4                     :    28;
            };
            uint32_t val;
        } int_clr1;
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
    } ch[4];
    uint32_t reserved_4a0;
    uint32_t reserved_4a4;
    uint32_t reserved_4a8;
    uint32_t reserved_4ac;
    uint32_t reserved_4b0;
    uint32_t reserved_4b4;
    uint32_t reserved_4b8;
    uint32_t reserved_4bc;
    uint32_t reserved_4c0;
    uint32_t reserved_4c4;
    uint32_t reserved_4c8;
    uint32_t reserved_4cc;
    uint32_t reserved_4d0;
    uint32_t reserved_4d4;
    uint32_t reserved_4d8;
    uint32_t reserved_4dc;
    uint32_t reserved_4e0;
    uint32_t reserved_4e4;
    uint32_t reserved_4e8;
    uint32_t reserved_4ec;
    uint32_t reserved_4f0;
    uint32_t reserved_4f4;
    uint32_t reserved_4f8;
    uint32_t reserved_4fc;
    uint32_t ch5_sar0;
    uint32_t ch5_sar1;
    uint32_t ch5_dar0;
    uint32_t ch5_dar1;
    union {
        struct {
            uint32_t ch5_block_ts                  :    22;
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } ch5_block_ts0;
    uint32_t reserved_514;
    union {
        struct {
            uint32_t ch5_sms                       :    1;
            uint32_t reserved1                     :    1;
            uint32_t ch5_dms                       :    1;
            uint32_t reserved3                     :    1;
            uint32_t ch5_sinc                      :    1;
            uint32_t reserved5                     :    1;
            uint32_t ch5_dinc                      :    1;
            uint32_t reserved7                     :    1;
            uint32_t ch5_src_tr_width              :    3;
            uint32_t ch5_dst_tr_width              :    3;
            uint32_t ch5_src_msize                 :    4;
            uint32_t ch5_dst_msize                 :    4;
            uint32_t ch5_ar_cache                  :    4;
            uint32_t ch5_aw_cache                  :    4;
            uint32_t ch5_nonposted_lastwrite_en    :    1;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ch5_ctl0;
    union {
        struct {
            uint32_t ch5_ar_prot                   :    3;
            uint32_t ch5_aw_prot                   :    3;
            uint32_t ch5_arlen_en                  :    1;
            uint32_t ch5_arlen                     :    8;
            uint32_t ch5_awlen_en                  :    1;
            uint32_t ch5_awlen                     :    8;
            uint32_t ch5_src_stat_en               :    1;
            uint32_t ch5_dst_stat_en               :    1;
            uint32_t ch5_ioc_blktfr                :    1;
            uint32_t reserved27                    :    3;
            uint32_t ch5_shadowreg_or_lli_last     :    1;
            uint32_t ch5_shadowreg_or_lli_valid    :    1;
        };
        uint32_t val;
    } ch5_ctl1;
    union {
        struct {
            uint32_t ch5_src_multblk_type          :    2;
            uint32_t ch5_dst_multblk_type          :    2;
            uint32_t reserved4                     :    14;
            uint32_t ch5_rd_uid                    :    4;
            uint32_t reserved22                    :    3;
            uint32_t ch5_wr_uid                    :    4;
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ch5_cfg0;
    union {
        struct {
            uint32_t ch5_tt_fc                     :    3;
            uint32_t ch5_hs_sel_src                :    1;
            uint32_t ch5_hs_sel_dst                :    1;
            uint32_t ch5_src_hwhs_pol              :    1;
            uint32_t ch5_dst_hwhs_pol              :    1;
            uint32_t ch5_src_per                   :    1;
            uint32_t reserved8                     :    3;
            uint32_t reserved11                    :    1;
            uint32_t ch5_dst_per                   :    1;
            uint32_t reserved13                    :    3;
            uint32_t reserved16                    :    1;
            uint32_t ch5_ch_prior                  :    3;
            uint32_t ch5_lock_ch                   :    1;
            uint32_t ch5_lock_ch_l                 :    2;
            uint32_t ch5_src_osr_lmt               :    4;
            uint32_t ch5_dst_osr_lmt               :    4;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ch5_cfg1;
    union {
        struct {
            uint32_t ch5_lms                       :    1;
            uint32_t reserved1                     :    5;
            uint32_t ch5_loc0                      :    26;
        };
        uint32_t val;
    } ch5_llp0;
    uint32_t ch5_llp1;
    union {
        struct {
            uint32_t ch5_cmpltd_blk_tfr_size       :    22;
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } ch5_status0;
    union {
        struct {
            uint32_t ch5_data_left_in_fifo         :    15;
            uint32_t reserved15                    :    17;
        };
        uint32_t val;
    } ch5_status1;
    union {
        struct {
            uint32_t ch5_swhs_req_src              :    1;
            uint32_t ch5_swhs_req_src_we           :    1;
            uint32_t ch5_swhs_sglreq_src           :    1;
            uint32_t ch5_swhs_sglreq_src_we        :    1;
            uint32_t ch5_swhs_lst_src              :    1;
            uint32_t ch5_swhs_lst_src_we           :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } ch5_swhssrc0;
    uint32_t reserved_53c;
    union {
        struct {
            uint32_t ch5_swhs_req_dst              :    1;
            uint32_t ch5_swhs_req_dst_we           :    1;
            uint32_t ch5_swhs_sglreq_dst           :    1;
            uint32_t ch5_swhs_sglreq_dst_we        :    1;
            uint32_t ch5_swhs_lst_dst              :    1;
            uint32_t ch5_swhs_lst_dst_we           :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } ch5_swhsdst0;
    uint32_t reserved_544;
    union {
        struct {
            uint32_t ch5_blk_tfr_resumereq         :    1;
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } ch5_blk_tfr_resumereq0;
    uint32_t reserved_54c;
    uint32_t reserved_550;
    uint32_t reserved_554;
    union {
        struct {
            uint32_t ch5_axi_awqos                 :    4;
            uint32_t ch5_axi_arqos                 :    4;
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } ch5_axi_qos0;
    uint32_t reserved_55c;
    uint32_t ch5_sstat0;
    uint32_t reserved_564;
    uint32_t ch5_dstat0;
    uint32_t reserved_56c;
    uint32_t ch5_sstatar0;
    uint32_t ch5_sstatar1;
    uint32_t ch5_dstatar0;
    uint32_t ch5_dstatar1;
    union {
        struct {
            uint32_t ch5_block_tfr_done            :    1;
            uint32_t ch5_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch5_src_transcomp             :    1;
            uint32_t ch5_dst_transcomp             :    1;
            uint32_t ch5_src_dec_err               :    1;
            uint32_t ch5_dst_dec_err               :    1;
            uint32_t ch5_src_slv_err               :    1;
            uint32_t ch5_dst_slv_err               :    1;
            uint32_t ch5_lli_rd_dec_err            :    1;
            uint32_t ch5_lli_wr_dec_err            :    1;
            uint32_t ch5_lli_rd_slv_err            :    1;
            uint32_t ch5_lli_wr_slv_err            :    1;
            uint32_t ch5_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch5_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch5_slvif_dec_err             :    1;
            uint32_t ch5_slvif_wr2ro_err           :    1;
            uint32_t ch5_slvif_rd2rwo_err          :    1;
            uint32_t ch5_slvif_wronchen_err        :    1;
            uint32_t ch5_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch5_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch5_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch5_ch_lock_cleared           :    1;
            uint32_t ch5_ch_src_suspended          :    1;
            uint32_t ch5_ch_suspended              :    1;
            uint32_t ch5_ch_disabled               :    1;
            uint32_t ch5_ch_aborted                :    1;
        };
        uint32_t val;
    } ch5_int_st_ena0;
    union {
        struct {
            uint32_t ch5_ecc_prot_chmem_correrr    :    1;
            uint32_t ch5_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch5_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch5_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch5_int_st_ena1;
    union {
        struct {
            uint32_t ch5_block_tfr_done            :    1;
            uint32_t ch5_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch5_src_transcomp             :    1;
            uint32_t ch5_dst_transcomp             :    1;
            uint32_t ch5_src_dec_err               :    1;
            uint32_t ch5_dst_dec_err               :    1;
            uint32_t ch5_src_slv_err               :    1;
            uint32_t ch5_dst_slv_err               :    1;
            uint32_t ch5_lli_rd_dec_err            :    1;
            uint32_t ch5_lli_wr_dec_err            :    1;
            uint32_t ch5_lli_rd_slv_err            :    1;
            uint32_t ch5_lli_wr_slv_err            :    1;
            uint32_t ch5_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch5_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch5_slvif_dec_err             :    1;
            uint32_t ch5_slvif_wr2ro_err           :    1;
            uint32_t ch5_slvif_rd2rwo_err          :    1;
            uint32_t ch5_slvif_wronchen_err        :    1;
            uint32_t ch5_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch5_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch5_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch5_ch_lock_cleared           :    1;
            uint32_t ch5_ch_src_suspended          :    1;
            uint32_t ch5_ch_suspended              :    1;
            uint32_t ch5_ch_disabled               :    1;
            uint32_t ch5_ch_aborted                :    1;
        };
        uint32_t val;
    } ch5_int_st0;
    union {
        struct {
            uint32_t ch5_ecc_prot_chmem_correrr    :    1;
            uint32_t ch5_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch5_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch5_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch5_int_st1;
    union {
        struct {
            uint32_t ch5_block_tfr_done            :    1;
            uint32_t ch5_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch5_src_transcomp             :    1;
            uint32_t ch5_dst_transcomp             :    1;
            uint32_t ch5_src_dec_err               :    1;
            uint32_t ch5_dst_dec_err               :    1;
            uint32_t ch5_src_slv_err               :    1;
            uint32_t ch5_dst_slv_err               :    1;
            uint32_t ch5_lli_rd_dec_err            :    1;
            uint32_t ch5_lli_wr_dec_err            :    1;
            uint32_t ch5_lli_rd_slv_err            :    1;
            uint32_t ch5_lli_wr_slv_err            :    1;
            uint32_t ch5_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch5_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch5_slvif_dec_err             :    1;
            uint32_t ch5_slvif_wr2ro_err           :    1;
            uint32_t ch5_slvif_rd2rwo_err          :    1;
            uint32_t ch5_slvif_wronchen_err        :    1;
            uint32_t ch5_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch5_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch5_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch5_ch_lock_cleared           :    1;
            uint32_t ch5_ch_src_suspended          :    1;
            uint32_t ch5_ch_suspended              :    1;
            uint32_t ch5_ch_disabled               :    1;
            uint32_t ch5_ch_aborted                :    1;
        };
        uint32_t val;
    } ch5_int_sig_ena0;
    union {
        struct {
            uint32_t ch5_ecc_prot_chmem_correrr    :    1;
            uint32_t ch5_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch5_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch5_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch5_int_sig_ena1;
    union {
        struct {
            uint32_t ch5_block_tfr_done            :    1;
            uint32_t ch5_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch5_src_transcomp             :    1;
            uint32_t ch5_dst_transcomp             :    1;
            uint32_t ch5_src_dec_err               :    1;
            uint32_t ch5_dst_dec_err               :    1;
            uint32_t ch5_src_slv_err               :    1;
            uint32_t ch5_dst_slv_err               :    1;
            uint32_t ch5_lli_rd_dec_err            :    1;
            uint32_t ch5_lli_wr_dec_err            :    1;
            uint32_t ch5_lli_rd_slv_err            :    1;
            uint32_t ch5_lli_wr_slv_err            :    1;
            uint32_t ch5_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch5_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch5_slvif_dec_err             :    1;
            uint32_t ch5_slvif_wr2ro_err           :    1;
            uint32_t ch5_slvif_rd2rwo_err          :    1;
            uint32_t ch5_slvif_wronchen_err        :    1;
            uint32_t ch5_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch5_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch5_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch5_ch_lock_cleared           :    1;
            uint32_t ch5_ch_src_suspended          :    1;
            uint32_t ch5_ch_suspended              :    1;
            uint32_t ch5_ch_disabled               :    1;
            uint32_t ch5_ch_aborted                :    1;
        };
        uint32_t val;
    } ch5_int_clr0;
    union {
        struct {
            uint32_t ch5_ecc_prot_chmem_correrr    :    1;
            uint32_t ch5_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch5_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch5_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch5_int_clr1;
    uint32_t reserved_5a0;
    uint32_t reserved_5a4;
    uint32_t reserved_5a8;
    uint32_t reserved_5ac;
    uint32_t reserved_5b0;
    uint32_t reserved_5b4;
    uint32_t reserved_5b8;
    uint32_t reserved_5bc;
    uint32_t reserved_5c0;
    uint32_t reserved_5c4;
    uint32_t reserved_5c8;
    uint32_t reserved_5cc;
    uint32_t reserved_5d0;
    uint32_t reserved_5d4;
    uint32_t reserved_5d8;
    uint32_t reserved_5dc;
    uint32_t reserved_5e0;
    uint32_t reserved_5e4;
    uint32_t reserved_5e8;
    uint32_t reserved_5ec;
    uint32_t reserved_5f0;
    uint32_t reserved_5f4;
    uint32_t reserved_5f8;
    uint32_t reserved_5fc;
    uint32_t ch6_sar0;
    uint32_t ch6_sar1;
    uint32_t ch6_dar0;
    uint32_t ch6_dar1;
    union {
        struct {
            uint32_t ch6_block_ts                  :    22;
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } ch6_block_ts0;
    uint32_t reserved_614;
    union {
        struct {
            uint32_t ch6_sms                       :    1;
            uint32_t reserved1                     :    1;
            uint32_t ch6_dms                       :    1;
            uint32_t reserved3                     :    1;
            uint32_t ch6_sinc                      :    1;
            uint32_t reserved5                     :    1;
            uint32_t ch6_dinc                      :    1;
            uint32_t reserved7                     :    1;
            uint32_t ch6_src_tr_width              :    3;
            uint32_t ch6_dst_tr_width              :    3;
            uint32_t ch6_src_msize                 :    4;
            uint32_t ch6_dst_msize                 :    4;
            uint32_t ch6_ar_cache                  :    4;
            uint32_t ch6_aw_cache                  :    4;
            uint32_t ch6_nonposted_lastwrite_en    :    1;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ch6_ctl0;
    union {
        struct {
            uint32_t ch6_ar_prot                   :    3;
            uint32_t ch6_aw_prot                   :    3;
            uint32_t ch6_arlen_en                  :    1;
            uint32_t ch6_arlen                     :    8;
            uint32_t ch6_awlen_en                  :    1;
            uint32_t ch6_awlen                     :    8;
            uint32_t ch6_src_stat_en               :    1;
            uint32_t ch6_dst_stat_en               :    1;
            uint32_t ch6_ioc_blktfr                :    1;
            uint32_t reserved27                    :    3;
            uint32_t ch6_shadowreg_or_lli_last     :    1;
            uint32_t ch6_shadowreg_or_lli_valid    :    1;
        };
        uint32_t val;
    } ch6_ctl1;
    union {
        struct {
            uint32_t ch6_src_multblk_type          :    2;
            uint32_t ch6_dst_multblk_type          :    2;
            uint32_t reserved4                     :    14;
            uint32_t ch6_rd_uid                    :    4;
            uint32_t reserved22                    :    3;
            uint32_t ch6_wr_uid                    :    4;
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ch6_cfg0;
    union {
        struct {
            uint32_t ch6_tt_fc                     :    3;
            uint32_t ch6_hs_sel_src                :    1;
            uint32_t ch6_hs_sel_dst                :    1;
            uint32_t ch6_src_hwhs_pol              :    1;
            uint32_t ch6_dst_hwhs_pol              :    1;
            uint32_t ch6_src_per                   :    1;
            uint32_t reserved8                     :    3;
            uint32_t reserved11                    :    1;
            uint32_t ch6_dst_per                   :    1;
            uint32_t reserved13                    :    3;
            uint32_t reserved16                    :    1;
            uint32_t ch6_ch_prior                  :    3;
            uint32_t ch6_lock_ch                   :    1;
            uint32_t ch6_lock_ch_l                 :    2;
            uint32_t ch6_src_osr_lmt               :    4;
            uint32_t ch6_dst_osr_lmt               :    4;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ch6_cfg1;
    union {
        struct {
            uint32_t ch6_lms                       :    1;
            uint32_t reserved1                     :    5;
            uint32_t ch6_loc0                      :    26;
        };
        uint32_t val;
    } ch6_llp0;
    uint32_t ch6_llp1;
    union {
        struct {
            uint32_t ch6_cmpltd_blk_tfr_size       :    22;
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } ch6_status0;
    union {
        struct {
            uint32_t ch6_data_left_in_fifo         :    15;
            uint32_t reserved15                    :    17;
        };
        uint32_t val;
    } ch6_status1;
    union {
        struct {
            uint32_t ch6_swhs_req_src              :    1;
            uint32_t ch6_swhs_req_src_we           :    1;
            uint32_t ch6_swhs_sglreq_src           :    1;
            uint32_t ch6_swhs_sglreq_src_we        :    1;
            uint32_t ch6_swhs_lst_src              :    1;
            uint32_t ch6_swhs_lst_src_we           :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } ch6_swhssrc0;
    uint32_t reserved_63c;
    union {
        struct {
            uint32_t ch6_swhs_req_dst              :    1;
            uint32_t ch6_swhs_req_dst_we           :    1;
            uint32_t ch6_swhs_sglreq_dst           :    1;
            uint32_t ch6_swhs_sglreq_dst_we        :    1;
            uint32_t ch6_swhs_lst_dst              :    1;
            uint32_t ch6_swhs_lst_dst_we           :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } ch6_swhsdst0;
    uint32_t reserved_644;
    union {
        struct {
            uint32_t ch6_blk_tfr_resumereq         :    1;
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } ch6_blk_tfr_resumereq0;
    uint32_t reserved_64c;
    uint32_t reserved_650;
    uint32_t reserved_654;
    union {
        struct {
            uint32_t ch6_axi_awqos                 :    4;
            uint32_t ch6_axi_arqos                 :    4;
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } ch6_axi_qos0;
    uint32_t reserved_65c;
    uint32_t ch6_sstat0;
    uint32_t reserved_664;
    uint32_t ch6_dstat0;
    uint32_t reserved_66c;
    uint32_t ch6_sstatar0;
    uint32_t ch6_sstatar1;
    uint32_t ch6_dstatar0;
    uint32_t ch6_dstatar1;
    union {
        struct {
            uint32_t ch6_block_tfr_done            :    1;
            uint32_t ch6_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch6_src_transcomp             :    1;
            uint32_t ch6_dst_transcomp             :    1;
            uint32_t ch6_src_dec_err               :    1;
            uint32_t ch6_dst_dec_err               :    1;
            uint32_t ch6_src_slv_err               :    1;
            uint32_t ch6_dst_slv_err               :    1;
            uint32_t ch6_lli_rd_dec_err            :    1;
            uint32_t ch6_lli_wr_dec_err            :    1;
            uint32_t ch6_lli_rd_slv_err            :    1;
            uint32_t ch6_lli_wr_slv_err            :    1;
            uint32_t ch6_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch6_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch6_slvif_dec_err             :    1;
            uint32_t ch6_slvif_wr2ro_err           :    1;
            uint32_t ch6_slvif_rd2rwo_err          :    1;
            uint32_t ch6_slvif_wronchen_err        :    1;
            uint32_t ch6_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch6_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch6_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch6_ch_lock_cleared           :    1;
            uint32_t ch6_ch_src_suspended          :    1;
            uint32_t ch6_ch_suspended              :    1;
            uint32_t ch6_ch_disabled               :    1;
            uint32_t ch6_ch_aborted                :    1;
        };
        uint32_t val;
    } ch6_int_st_ena0;
    union {
        struct {
            uint32_t ch6_ecc_prot_chmem_correrr    :    1;
            uint32_t ch6_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch6_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch6_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch6_int_st_ena1;
    union {
        struct {
            uint32_t ch6_block_tfr_done            :    1;
            uint32_t ch6_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch6_src_transcomp             :    1;
            uint32_t ch6_dst_transcomp             :    1;
            uint32_t ch6_src_dec_err               :    1;
            uint32_t ch6_dst_dec_err               :    1;
            uint32_t ch6_src_slv_err               :    1;
            uint32_t ch6_dst_slv_err               :    1;
            uint32_t ch6_lli_rd_dec_err            :    1;
            uint32_t ch6_lli_wr_dec_err            :    1;
            uint32_t ch6_lli_rd_slv_err            :    1;
            uint32_t ch6_lli_wr_slv_err            :    1;
            uint32_t ch6_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch6_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch6_slvif_dec_err             :    1;
            uint32_t ch6_slvif_wr2ro_err           :    1;
            uint32_t ch6_slvif_rd2rwo_err          :    1;
            uint32_t ch6_slvif_wronchen_err        :    1;
            uint32_t ch6_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch6_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch6_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch6_ch_lock_cleared           :    1;
            uint32_t ch6_ch_src_suspended          :    1;
            uint32_t ch6_ch_suspended              :    1;
            uint32_t ch6_ch_disabled               :    1;
            uint32_t ch6_ch_aborted                :    1;
        };
        uint32_t val;
    } ch6_int_st0;
    union {
        struct {
            uint32_t ch6_ecc_prot_chmem_correrr    :    1;
            uint32_t ch6_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch6_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch6_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch6_int_st1;
    union {
        struct {
            uint32_t ch6_block_tfr_done            :    1;
            uint32_t ch6_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch6_src_transcomp             :    1;
            uint32_t ch6_dst_transcomp             :    1;
            uint32_t ch6_src_dec_err               :    1;
            uint32_t ch6_dst_dec_err               :    1;
            uint32_t ch6_src_slv_err               :    1;
            uint32_t ch6_dst_slv_err               :    1;
            uint32_t ch6_lli_rd_dec_err            :    1;
            uint32_t ch6_lli_wr_dec_err            :    1;
            uint32_t ch6_lli_rd_slv_err            :    1;
            uint32_t ch6_lli_wr_slv_err            :    1;
            uint32_t ch6_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch6_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch6_slvif_dec_err             :    1;
            uint32_t ch6_slvif_wr2ro_err           :    1;
            uint32_t ch6_slvif_rd2rwo_err          :    1;
            uint32_t ch6_slvif_wronchen_err        :    1;
            uint32_t ch6_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch6_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch6_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch6_ch_lock_cleared           :    1;
            uint32_t ch6_ch_src_suspended          :    1;
            uint32_t ch6_ch_suspended              :    1;
            uint32_t ch6_ch_disabled               :    1;
            uint32_t ch6_ch_aborted                :    1;
        };
        uint32_t val;
    } ch6_int_sig_ena0;
    union {
        struct {
            uint32_t ch6_ecc_prot_chmem_correrr    :    1;
            uint32_t ch6_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch6_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch6_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch6_int_sig_ena1;
    union {
        struct {
            uint32_t ch6_block_tfr_done            :    1;
            uint32_t ch6_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch6_src_transcomp             :    1;
            uint32_t ch6_dst_transcomp             :    1;
            uint32_t ch6_src_dec_err               :    1;
            uint32_t ch6_dst_dec_err               :    1;
            uint32_t ch6_src_slv_err               :    1;
            uint32_t ch6_dst_slv_err               :    1;
            uint32_t ch6_lli_rd_dec_err            :    1;
            uint32_t ch6_lli_wr_dec_err            :    1;
            uint32_t ch6_lli_rd_slv_err            :    1;
            uint32_t ch6_lli_wr_slv_err            :    1;
            uint32_t ch6_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch6_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch6_slvif_dec_err             :    1;
            uint32_t ch6_slvif_wr2ro_err           :    1;
            uint32_t ch6_slvif_rd2rwo_err          :    1;
            uint32_t ch6_slvif_wronchen_err        :    1;
            uint32_t ch6_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch6_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch6_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch6_ch_lock_cleared           :    1;
            uint32_t ch6_ch_src_suspended          :    1;
            uint32_t ch6_ch_suspended              :    1;
            uint32_t ch6_ch_disabled               :    1;
            uint32_t ch6_ch_aborted                :    1;
        };
        uint32_t val;
    } ch6_int_clr0;
    union {
        struct {
            uint32_t ch6_ecc_prot_chmem_correrr    :    1;
            uint32_t ch6_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch6_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch6_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch6_int_clr1;
    uint32_t reserved_6a0;
    uint32_t reserved_6a4;
    uint32_t reserved_6a8;
    uint32_t reserved_6ac;
    uint32_t reserved_6b0;
    uint32_t reserved_6b4;
    uint32_t reserved_6b8;
    uint32_t reserved_6bc;
    uint32_t reserved_6c0;
    uint32_t reserved_6c4;
    uint32_t reserved_6c8;
    uint32_t reserved_6cc;
    uint32_t reserved_6d0;
    uint32_t reserved_6d4;
    uint32_t reserved_6d8;
    uint32_t reserved_6dc;
    uint32_t reserved_6e0;
    uint32_t reserved_6e4;
    uint32_t reserved_6e8;
    uint32_t reserved_6ec;
    uint32_t reserved_6f0;
    uint32_t reserved_6f4;
    uint32_t reserved_6f8;
    uint32_t reserved_6fc;
    uint32_t ch7_sar0;
    uint32_t ch7_sar1;
    uint32_t ch7_dar0;
    uint32_t ch7_dar1;
    union {
        struct {
            uint32_t ch7_block_ts                  :    22;
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } ch7_block_ts0;
    uint32_t reserved_714;
    union {
        struct {
            uint32_t ch7_sms                       :    1;
            uint32_t reserved1                     :    1;
            uint32_t ch7_dms                       :    1;
            uint32_t reserved3                     :    1;
            uint32_t ch7_sinc                      :    1;
            uint32_t reserved5                     :    1;
            uint32_t ch7_dinc                      :    1;
            uint32_t reserved7                     :    1;
            uint32_t ch7_src_tr_width              :    3;
            uint32_t ch7_dst_tr_width              :    3;
            uint32_t ch7_src_msize                 :    4;
            uint32_t ch7_dst_msize                 :    4;
            uint32_t ch7_ar_cache                  :    4;
            uint32_t ch7_aw_cache                  :    4;
            uint32_t ch7_nonposted_lastwrite_en    :    1;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ch7_ctl0;
    union {
        struct {
            uint32_t ch7_ar_prot                   :    3;
            uint32_t ch7_aw_prot                   :    3;
            uint32_t ch7_arlen_en                  :    1;
            uint32_t ch7_arlen                     :    8;
            uint32_t ch7_awlen_en                  :    1;
            uint32_t ch7_awlen                     :    8;
            uint32_t ch7_src_stat_en               :    1;
            uint32_t ch7_dst_stat_en               :    1;
            uint32_t ch7_ioc_blktfr                :    1;
            uint32_t reserved27                    :    3;
            uint32_t ch7_shadowreg_or_lli_last     :    1;
            uint32_t ch7_shadowreg_or_lli_valid    :    1;
        };
        uint32_t val;
    } ch7_ctl1;
    union {
        struct {
            uint32_t ch7_src_multblk_type          :    2;
            uint32_t ch7_dst_multblk_type          :    2;
            uint32_t reserved4                     :    14;
            uint32_t ch7_rd_uid                    :    4;
            uint32_t reserved22                    :    3;
            uint32_t ch7_wr_uid                    :    4;
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ch7_cfg0;
    union {
        struct {
            uint32_t ch7_tt_fc                     :    3;
            uint32_t ch7_hs_sel_src                :    1;
            uint32_t ch7_hs_sel_dst                :    1;
            uint32_t ch7_src_hwhs_pol              :    1;
            uint32_t ch7_dst_hwhs_pol              :    1;
            uint32_t ch7_src_per                   :    1;
            uint32_t reserved8                     :    3;
            uint32_t reserved11                    :    1;
            uint32_t ch7_dst_per                   :    1;
            uint32_t reserved13                    :    3;
            uint32_t reserved16                    :    1;
            uint32_t ch7_ch_prior                  :    3;
            uint32_t ch7_lock_ch                   :    1;
            uint32_t ch7_lock_ch_l                 :    2;
            uint32_t ch7_src_osr_lmt               :    4;
            uint32_t ch7_dst_osr_lmt               :    4;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ch7_cfg1;
    union {
        struct {
            uint32_t ch7_lms                       :    1;
            uint32_t reserved1                     :    5;
            uint32_t ch7_loc0                      :    26;
        };
        uint32_t val;
    } ch7_llp0;
    uint32_t ch7_llp1;
    union {
        struct {
            uint32_t ch7_cmpltd_blk_tfr_size       :    22;
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } ch7_status0;
    union {
        struct {
            uint32_t ch7_data_left_in_fifo         :    15;
            uint32_t reserved15                    :    17;
        };
        uint32_t val;
    } ch7_status1;
    union {
        struct {
            uint32_t ch7_swhs_req_src              :    1;
            uint32_t ch7_swhs_req_src_we           :    1;
            uint32_t ch7_swhs_sglreq_src           :    1;
            uint32_t ch7_swhs_sglreq_src_we        :    1;
            uint32_t ch7_swhs_lst_src              :    1;
            uint32_t ch7_swhs_lst_src_we           :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } ch7_swhssrc0;
    uint32_t reserved_73c;
    union {
        struct {
            uint32_t ch7_swhs_req_dst              :    1;
            uint32_t ch7_swhs_req_dst_we           :    1;
            uint32_t ch7_swhs_sglreq_dst           :    1;
            uint32_t ch7_swhs_sglreq_dst_we        :    1;
            uint32_t ch7_swhs_lst_dst              :    1;
            uint32_t ch7_swhs_lst_dst_we           :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } ch7_swhsdst0;
    uint32_t reserved_744;
    union {
        struct {
            uint32_t ch7_blk_tfr_resumereq         :    1;
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } ch7_blk_tfr_resumereq0;
    uint32_t reserved_74c;
    uint32_t reserved_750;
    uint32_t reserved_754;
    union {
        struct {
            uint32_t ch7_axi_awqos                 :    4;
            uint32_t ch7_axi_arqos                 :    4;
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } ch7_axi_qos0;
    uint32_t reserved_75c;
    uint32_t ch7_sstat0;
    uint32_t reserved_764;
    uint32_t ch7_dstat0;
    uint32_t reserved_76c;
    uint32_t ch7_sstatar0;
    uint32_t ch7_sstatar1;
    uint32_t ch7_dstatar0;
    uint32_t ch7_dstatar1;
    union {
        struct {
            uint32_t ch7_block_tfr_done            :    1;
            uint32_t ch7_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch7_src_transcomp             :    1;
            uint32_t ch7_dst_transcomp             :    1;
            uint32_t ch7_src_dec_err               :    1;
            uint32_t ch7_dst_dec_err               :    1;
            uint32_t ch7_src_slv_err               :    1;
            uint32_t ch7_dst_slv_err               :    1;
            uint32_t ch7_lli_rd_dec_err            :    1;
            uint32_t ch7_lli_wr_dec_err            :    1;
            uint32_t ch7_lli_rd_slv_err            :    1;
            uint32_t ch7_lli_wr_slv_err            :    1;
            uint32_t ch7_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch7_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch7_slvif_dec_err             :    1;
            uint32_t ch7_slvif_wr2ro_err           :    1;
            uint32_t ch7_slvif_rd2rwo_err          :    1;
            uint32_t ch7_slvif_wronchen_err        :    1;
            uint32_t ch7_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch7_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch7_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch7_ch_lock_cleared           :    1;
            uint32_t ch7_ch_src_suspended          :    1;
            uint32_t ch7_ch_suspended              :    1;
            uint32_t ch7_ch_disabled               :    1;
            uint32_t ch7_ch_aborted                :    1;
        };
        uint32_t val;
    } ch7_int_st_ena0;
    union {
        struct {
            uint32_t ch7_ecc_prot_chmem_correrr    :    1;
            uint32_t ch7_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch7_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch7_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch7_int_st_ena1;
    union {
        struct {
            uint32_t ch7_block_tfr_done            :    1;
            uint32_t ch7_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch7_src_transcomp             :    1;
            uint32_t ch7_dst_transcomp             :    1;
            uint32_t ch7_src_dec_err               :    1;
            uint32_t ch7_dst_dec_err               :    1;
            uint32_t ch7_src_slv_err               :    1;
            uint32_t ch7_dst_slv_err               :    1;
            uint32_t ch7_lli_rd_dec_err            :    1;
            uint32_t ch7_lli_wr_dec_err            :    1;
            uint32_t ch7_lli_rd_slv_err            :    1;
            uint32_t ch7_lli_wr_slv_err            :    1;
            uint32_t ch7_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch7_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch7_slvif_dec_err             :    1;
            uint32_t ch7_slvif_wr2ro_err           :    1;
            uint32_t ch7_slvif_rd2rwo_err          :    1;
            uint32_t ch7_slvif_wronchen_err        :    1;
            uint32_t ch7_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch7_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch7_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch7_ch_lock_cleared           :    1;
            uint32_t ch7_ch_src_suspended          :    1;
            uint32_t ch7_ch_suspended              :    1;
            uint32_t ch7_ch_disabled               :    1;
            uint32_t ch7_ch_aborted                :    1;
        };
        uint32_t val;
    } ch7_int_st0;
    union {
        struct {
            uint32_t ch7_ecc_prot_chmem_correrr    :    1;
            uint32_t ch7_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch7_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch7_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch7_int_st1;
    union {
        struct {
            uint32_t ch7_block_tfr_done            :    1;
            uint32_t ch7_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch7_src_transcomp             :    1;
            uint32_t ch7_dst_transcomp             :    1;
            uint32_t ch7_src_dec_err               :    1;
            uint32_t ch7_dst_dec_err               :    1;
            uint32_t ch7_src_slv_err               :    1;
            uint32_t ch7_dst_slv_err               :    1;
            uint32_t ch7_lli_rd_dec_err            :    1;
            uint32_t ch7_lli_wr_dec_err            :    1;
            uint32_t ch7_lli_rd_slv_err            :    1;
            uint32_t ch7_lli_wr_slv_err            :    1;
            uint32_t ch7_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch7_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch7_slvif_dec_err             :    1;
            uint32_t ch7_slvif_wr2ro_err           :    1;
            uint32_t ch7_slvif_rd2rwo_err          :    1;
            uint32_t ch7_slvif_wronchen_err        :    1;
            uint32_t ch7_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch7_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch7_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch7_ch_lock_cleared           :    1;
            uint32_t ch7_ch_src_suspended          :    1;
            uint32_t ch7_ch_suspended              :    1;
            uint32_t ch7_ch_disabled               :    1;
            uint32_t ch7_ch_aborted                :    1;
        };
        uint32_t val;
    } ch7_int_sig_ena0;
    union {
        struct {
            uint32_t ch7_ecc_prot_chmem_correrr    :    1;
            uint32_t ch7_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch7_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch7_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch7_int_sig_ena1;
    union {
        struct {
            uint32_t ch7_block_tfr_done            :    1;
            uint32_t ch7_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch7_src_transcomp             :    1;
            uint32_t ch7_dst_transcomp             :    1;
            uint32_t ch7_src_dec_err               :    1;
            uint32_t ch7_dst_dec_err               :    1;
            uint32_t ch7_src_slv_err               :    1;
            uint32_t ch7_dst_slv_err               :    1;
            uint32_t ch7_lli_rd_dec_err            :    1;
            uint32_t ch7_lli_wr_dec_err            :    1;
            uint32_t ch7_lli_rd_slv_err            :    1;
            uint32_t ch7_lli_wr_slv_err            :    1;
            uint32_t ch7_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch7_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch7_slvif_dec_err             :    1;
            uint32_t ch7_slvif_wr2ro_err           :    1;
            uint32_t ch7_slvif_rd2rwo_err          :    1;
            uint32_t ch7_slvif_wronchen_err        :    1;
            uint32_t ch7_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch7_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch7_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch7_ch_lock_cleared           :    1;
            uint32_t ch7_ch_src_suspended          :    1;
            uint32_t ch7_ch_suspended              :    1;
            uint32_t ch7_ch_disabled               :    1;
            uint32_t ch7_ch_aborted                :    1;
        };
        uint32_t val;
    } ch7_int_clr0;
    union {
        struct {
            uint32_t ch7_ecc_prot_chmem_correrr    :    1;
            uint32_t ch7_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch7_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch7_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch7_int_clr1;
    uint32_t reserved_7a0;
    uint32_t reserved_7a4;
    uint32_t reserved_7a8;
    uint32_t reserved_7ac;
    uint32_t reserved_7b0;
    uint32_t reserved_7b4;
    uint32_t reserved_7b8;
    uint32_t reserved_7bc;
    uint32_t reserved_7c0;
    uint32_t reserved_7c4;
    uint32_t reserved_7c8;
    uint32_t reserved_7cc;
    uint32_t reserved_7d0;
    uint32_t reserved_7d4;
    uint32_t reserved_7d8;
    uint32_t reserved_7dc;
    uint32_t reserved_7e0;
    uint32_t reserved_7e4;
    uint32_t reserved_7e8;
    uint32_t reserved_7ec;
    uint32_t reserved_7f0;
    uint32_t reserved_7f4;
    uint32_t reserved_7f8;
    uint32_t reserved_7fc;
    uint32_t ch8_sar0;
    uint32_t ch8_sar1;
    uint32_t ch8_dar0;
    uint32_t ch8_dar1;
    union {
        struct {
            uint32_t ch8_block_ts                  :    22;
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } ch8_block_ts0;
    uint32_t reserved_814;
    union {
        struct {
            uint32_t ch8_sms                       :    1;
            uint32_t reserved1                     :    1;
            uint32_t ch8_dms                       :    1;
            uint32_t reserved3                     :    1;
            uint32_t ch8_sinc                      :    1;
            uint32_t reserved5                     :    1;
            uint32_t ch8_dinc                      :    1;
            uint32_t reserved7                     :    1;
            uint32_t ch8_src_tr_width              :    3;
            uint32_t ch8_dst_tr_width              :    3;
            uint32_t ch8_src_msize                 :    4;
            uint32_t ch8_dst_msize                 :    4;
            uint32_t ch8_ar_cache                  :    4;
            uint32_t ch8_aw_cache                  :    4;
            uint32_t ch8_nonposted_lastwrite_en    :    1;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ch8_ctl0;
    union {
        struct {
            uint32_t ch8_ar_prot                   :    3;
            uint32_t ch8_aw_prot                   :    3;
            uint32_t ch8_arlen_en                  :    1;
            uint32_t ch8_arlen                     :    8;
            uint32_t ch8_awlen_en                  :    1;
            uint32_t ch8_awlen                     :    8;
            uint32_t ch8_src_stat_en               :    1;
            uint32_t ch8_dst_stat_en               :    1;
            uint32_t ch8_ioc_blktfr                :    1;
            uint32_t reserved27                    :    3;
            uint32_t ch8_shadowreg_or_lli_last     :    1;
            uint32_t ch8_shadowreg_or_lli_valid    :    1;
        };
        uint32_t val;
    } ch8_ctl1;
    union {
        struct {
            uint32_t ch8_src_multblk_type          :    2;
            uint32_t ch8_dst_multblk_type          :    2;
            uint32_t reserved4                     :    14;
            uint32_t ch8_rd_uid                    :    4;
            uint32_t reserved22                    :    3;
            uint32_t ch8_wr_uid                    :    4;
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ch8_cfg0;
    union {
        struct {
            uint32_t ch8_tt_fc                     :    3;
            uint32_t ch8_hs_sel_src                :    1;
            uint32_t ch8_hs_sel_dst                :    1;
            uint32_t ch8_src_hwhs_pol              :    1;
            uint32_t ch8_dst_hwhs_pol              :    1;
            uint32_t ch8_src_per                   :    1;
            uint32_t reserved8                     :    3;
            uint32_t reserved11                    :    1;
            uint32_t ch8_dst_per                   :    1;
            uint32_t reserved13                    :    3;
            uint32_t reserved16                    :    1;
            uint32_t ch8_ch_prior                  :    3;
            uint32_t ch8_lock_ch                   :    1;
            uint32_t ch8_lock_ch_l                 :    2;
            uint32_t ch8_src_osr_lmt               :    4;
            uint32_t ch8_dst_osr_lmt               :    4;
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ch8_cfg1;
    union {
        struct {
            uint32_t ch8_lms                       :    1;
            uint32_t reserved1                     :    5;
            uint32_t ch8_loc0                      :    26;
        };
        uint32_t val;
    } ch8_llp0;
    uint32_t ch8_llp1;
    union {
        struct {
            uint32_t ch8_cmpltd_blk_tfr_size       :    22;
            uint32_t reserved22                    :    10;
        };
        uint32_t val;
    } ch8_status0;
    union {
        struct {
            uint32_t ch8_data_left_in_fifo         :    15;
            uint32_t reserved15                    :    17;
        };
        uint32_t val;
    } ch8_status1;
    union {
        struct {
            uint32_t ch8_swhs_req_src              :    1;
            uint32_t ch8_swhs_req_src_we           :    1;
            uint32_t ch8_swhs_sglreq_src           :    1;
            uint32_t ch8_swhs_sglreq_src_we        :    1;
            uint32_t ch8_swhs_lst_src              :    1;
            uint32_t ch8_swhs_lst_src_we           :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } ch8_swhssrc0;
    uint32_t reserved_83c;
    union {
        struct {
            uint32_t ch8_swhs_req_dst              :    1;
            uint32_t ch8_swhs_req_dst_we           :    1;
            uint32_t ch8_swhs_sglreq_dst           :    1;
            uint32_t ch8_swhs_sglreq_dst_we        :    1;
            uint32_t ch8_swhs_lst_dst              :    1;
            uint32_t ch8_swhs_lst_dst_we           :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } ch8_swhsdst0;
    uint32_t reserved_844;
    union {
        struct {
            uint32_t ch8_blk_tfr_resumereq         :    1;
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } ch8_blk_tfr_resumereq0;
    uint32_t reserved_84c;
    uint32_t reserved_850;
    uint32_t reserved_854;
    union {
        struct {
            uint32_t ch8_axi_awqos                 :    4;
            uint32_t ch8_axi_arqos                 :    4;
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } ch8_axi_qos0;
    uint32_t reserved_85c;
    uint32_t ch8_sstat0;
    uint32_t reserved_864;
    uint32_t ch8_dstat0;
    uint32_t reserved_86c;
    uint32_t ch8_sstatar0;
    uint32_t ch8_sstatar1;
    uint32_t ch8_dstatar0;
    uint32_t ch8_dstatar1;
    union {
        struct {
            uint32_t ch8_block_tfr_done            :    1;
            uint32_t ch8_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch8_src_transcomp             :    1;
            uint32_t ch8_dst_transcomp             :    1;
            uint32_t ch8_src_dec_err               :    1;
            uint32_t ch8_dst_dec_err               :    1;
            uint32_t ch8_src_slv_err               :    1;
            uint32_t ch8_dst_slv_err               :    1;
            uint32_t ch8_lli_rd_dec_err            :    1;
            uint32_t ch8_lli_wr_dec_err            :    1;
            uint32_t ch8_lli_rd_slv_err            :    1;
            uint32_t ch8_lli_wr_slv_err            :    1;
            uint32_t ch8_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch8_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch8_slvif_dec_err             :    1;
            uint32_t ch8_slvif_wr2ro_err           :    1;
            uint32_t ch8_slvif_rd2rwo_err          :    1;
            uint32_t ch8_slvif_wronchen_err        :    1;
            uint32_t ch8_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch8_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch8_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch8_ch_lock_cleared           :    1;
            uint32_t ch8_ch_src_suspended          :    1;
            uint32_t ch8_ch_suspended              :    1;
            uint32_t ch8_ch_disabled               :    1;
            uint32_t ch8_ch_aborted                :    1;
        };
        uint32_t val;
    } ch8_int_st_ena0;
    union {
        struct {
            uint32_t ch8_ecc_prot_chmem_correrr    :    1;
            uint32_t ch8_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch8_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch8_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch8_int_st_ena1;
    union {
        struct {
            uint32_t ch8_block_tfr_done            :    1;
            uint32_t ch8_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch8_src_transcomp             :    1;
            uint32_t ch8_dst_transcomp             :    1;
            uint32_t ch8_src_dec_err               :    1;
            uint32_t ch8_dst_dec_err               :    1;
            uint32_t ch8_src_slv_err               :    1;
            uint32_t ch8_dst_slv_err               :    1;
            uint32_t ch8_lli_rd_dec_err            :    1;
            uint32_t ch8_lli_wr_dec_err            :    1;
            uint32_t ch8_lli_rd_slv_err            :    1;
            uint32_t ch8_lli_wr_slv_err            :    1;
            uint32_t ch8_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch8_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch8_slvif_dec_err             :    1;
            uint32_t ch8_slvif_wr2ro_err           :    1;
            uint32_t ch8_slvif_rd2rwo_err          :    1;
            uint32_t ch8_slvif_wronchen_err        :    1;
            uint32_t ch8_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch8_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch8_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch8_ch_lock_cleared           :    1;
            uint32_t ch8_ch_src_suspended          :    1;
            uint32_t ch8_ch_suspended              :    1;
            uint32_t ch8_ch_disabled               :    1;
            uint32_t ch8_ch_aborted                :    1;
        };
        uint32_t val;
    } ch8_int_st0;
    union {
        struct {
            uint32_t ch8_ecc_prot_chmem_correrr    :    1;
            uint32_t ch8_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch8_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch8_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch8_int_st1;
    union {
        struct {
            uint32_t ch8_block_tfr_done            :    1;
            uint32_t ch8_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch8_src_transcomp             :    1;
            uint32_t ch8_dst_transcomp             :    1;
            uint32_t ch8_src_dec_err               :    1;
            uint32_t ch8_dst_dec_err               :    1;
            uint32_t ch8_src_slv_err               :    1;
            uint32_t ch8_dst_slv_err               :    1;
            uint32_t ch8_lli_rd_dec_err            :    1;
            uint32_t ch8_lli_wr_dec_err            :    1;
            uint32_t ch8_lli_rd_slv_err            :    1;
            uint32_t ch8_lli_wr_slv_err            :    1;
            uint32_t ch8_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch8_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch8_slvif_dec_err             :    1;
            uint32_t ch8_slvif_wr2ro_err           :    1;
            uint32_t ch8_slvif_rd2rwo_err          :    1;
            uint32_t ch8_slvif_wronchen_err        :    1;
            uint32_t ch8_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch8_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch8_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch8_ch_lock_cleared           :    1;
            uint32_t ch8_ch_src_suspended          :    1;
            uint32_t ch8_ch_suspended              :    1;
            uint32_t ch8_ch_disabled               :    1;
            uint32_t ch8_ch_aborted                :    1;
        };
        uint32_t val;
    } ch8_int_sig_ena0;
    union {
        struct {
            uint32_t ch8_ecc_prot_chmem_correrr    :    1;
            uint32_t ch8_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch8_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch8_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch8_int_sig_ena1;
    union {
        struct {
            uint32_t ch8_block_tfr_done            :    1;
            uint32_t ch8_dma_tfr_done              :    1;
            uint32_t reserved2                     :    1;
            uint32_t ch8_src_transcomp             :    1;
            uint32_t ch8_dst_transcomp             :    1;
            uint32_t ch8_src_dec_err               :    1;
            uint32_t ch8_dst_dec_err               :    1;
            uint32_t ch8_src_slv_err               :    1;
            uint32_t ch8_dst_slv_err               :    1;
            uint32_t ch8_lli_rd_dec_err            :    1;
            uint32_t ch8_lli_wr_dec_err            :    1;
            uint32_t ch8_lli_rd_slv_err            :    1;
            uint32_t ch8_lli_wr_slv_err            :    1;
            uint32_t ch8_shadowreg_or_lli_invalid_err:    1;
            uint32_t ch8_slvif_multiblktype_err    :    1;
            uint32_t reserved15                    :    1;
            uint32_t ch8_slvif_dec_err             :    1;
            uint32_t ch8_slvif_wr2ro_err           :    1;
            uint32_t ch8_slvif_rd2rwo_err          :    1;
            uint32_t ch8_slvif_wronchen_err        :    1;
            uint32_t ch8_slvif_shadowreg_wron_valid_err:    1;
            uint32_t ch8_slvif_wronhold_err        :    1;
            uint32_t reserved22                    :    3;
            uint32_t ch8_slvif_wrparity_err        :    1;
            uint32_t reserved26                    :    1;
            uint32_t ch8_ch_lock_cleared           :    1;
            uint32_t ch8_ch_src_suspended          :    1;
            uint32_t ch8_ch_suspended              :    1;
            uint32_t ch8_ch_disabled               :    1;
            uint32_t ch8_ch_aborted                :    1;
        };
        uint32_t val;
    } ch8_int_clr0;
    union {
        struct {
            uint32_t ch8_ecc_prot_chmem_correrr    :    1;
            uint32_t ch8_ecc_prot_chmem_uncorrerr  :    1;
            uint32_t ch8_ecc_prot_uidmem_correrr   :    1;
            uint32_t ch8_ecc_prot_uidmem_uncorrerr :    1;
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } ch8_int_clr1;
} gdma_dev_t;
extern gdma_dev_t GDMA;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_GDMA_STRUCT_H_ */
