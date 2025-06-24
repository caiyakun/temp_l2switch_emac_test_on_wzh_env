/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_AHB_DMA_STRUCT_H_
#define _SOC_AHB_DMA_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    struct {
        union {
            struct {
                uint32_t done                          :    1;  /* The raw interrupt status of AHB_DMA_IN_DONE_CH$n_INT.*/
                uint32_t suc_eof                       :    1;  /* The raw interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
                uint32_t err_eof                       :    1;  /* The raw interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
                uint32_t dscr_err                      :    1;  /* The raw interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
                uint32_t dscr_empty                    :    1;  /* The raw interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
                uint32_t fifo_ovf                      :    1;  /* The raw interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT.*/
                uint32_t fifo_udf                      :    1;  /* The raw interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT.*/
                uint32_t in_ahbinf_resp_err            :    1;  /* The raw interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
                uint32_t reserved8                     :    24;  /* reserved*/
            };
            uint32_t val;
        } raw;
        union {
            struct {
                uint32_t done                          :    1;  /* The masked interrupt status of AHB_DMA_IN_DONE_CH$n_INT.*/
                uint32_t suc_eof                       :    1;  /* The masked interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
                uint32_t err_eof                       :    1;  /* The masked interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
                uint32_t dscr_err                      :    1;  /* The masked interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
                uint32_t dscr_empty                    :    1;  /* The masked interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
                uint32_t fifo_ovf                      :    1;  /* The masked interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT.*/
                uint32_t fifo_udf                      :    1;  /* The masked interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT.*/
                uint32_t in_ahbinf_resp_err            :    1;  /* The masked interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
                uint32_t reserved8                     :    24;  /* reserved*/
            };
            uint32_t val;
        } st;
        union {
            struct {
                uint32_t done                          :    1;  /* Write 1 to enable AHB_DMA_IN_DONE_CH$n_INT.*/
                uint32_t suc_eof                       :    1;  /* Write 1 to enable AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
                uint32_t err_eof                       :    1;  /* Write 1 to enable AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
                uint32_t dscr_err                      :    1;  /* Write 1 to enable AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
                uint32_t dscr_empty                    :    1;  /* Write 1 to enable AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
                uint32_t fifo_ovf                      :    1;  /* Write 1 to enable AHB_DMA_INFIFO_OVF_CH$n_INT.*/
                uint32_t fifo_udf                      :    1;  /* Write 1 to enable AHB_DMA_INFIFO_UDF_CH$n_INT.*/
                uint32_t in_ahbinf_resp_err            :    1;  /* Write 1 to enable AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
                uint32_t reserved8                     :    24;  /* reserved*/
            };
            uint32_t val;
        } ena;
        union {
            struct {
                uint32_t done                          :    1;  /* Write 1 to clear AHB_DMA_IN_DONE_CH$n_INT.*/
                uint32_t suc_eof                       :    1;  /* Write 1 to clear AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
                uint32_t err_eof                       :    1;  /* Write 1 to clear AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
                uint32_t dscr_err                      :    1;  /* Write 1 to clear AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
                uint32_t dscr_empty                    :    1;  /* Write 1 to clear AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
                uint32_t fifo_ovf                      :    1;  /* Write 1 to clear AHB_DMA_INFIFO_OVF_CH$n_INT.*/
                uint32_t fifo_udf                      :    1;  /* Write 1 to clear AHB_DMA_INFIFO_UDF_CH$n_INT.*/
                uint32_t in_ahbinf_resp_err            :    1;  /* Write 1 to clear AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
                uint32_t reserved8                     :    24;  /* reserved*/
            };
            uint32_t val;
        } clr;
    } in_intr[3];
    union {
        struct {
            uint32_t done_ch3_int_raw              :    1;  /* The raw interrupt status of AHB_DMA_IN_DONE_CH$n_INT.*/
            uint32_t suc_eof_ch3_int_raw           :    1;  /* The raw interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
            uint32_t err_eof_ch3_int_raw           :    1;  /* The raw interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch3_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
            uint32_t dscr_empty_ch3_int_raw        :    1;  /* The raw interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
            uint32_t fifo_ovf_ch3_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch3_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT.*/
            uint32_t in_ahbinf_resp_err_ch3_int_raw:    1;  /* The raw interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } raw_ch3;
    union {
        struct {
            uint32_t done_ch3_int_st               :    1;  /* The masked interrupt status of AHB_DMA_IN_DONE_CH$n_INT.*/
            uint32_t suc_eof_ch3_int_st            :    1;  /* The masked interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
            uint32_t err_eof_ch3_int_st            :    1;  /* The masked interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch3_int_st           :    1;  /* The masked interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
            uint32_t dscr_empty_ch3_int_st         :    1;  /* The masked interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
            uint32_t fifo_ovf_ch3_int_st           :    1;  /* The masked interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch3_int_st           :    1;  /* The masked interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT.*/
            uint32_t in_ahbinf_resp_err_ch3_int_st :    1;  /* The masked interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } st_ch3;
    union {
        struct {
            uint32_t done_ch3_int_ena              :    1;  /* Write 1 to enable AHB_DMA_IN_DONE_CH$n_INT.*/
            uint32_t suc_eof_ch3_int_ena           :    1;  /* Write 1 to enable AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
            uint32_t err_eof_ch3_int_ena           :    1;  /* Write 1 to enable AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch3_int_ena          :    1;  /* Write 1 to enable AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
            uint32_t dscr_empty_ch3_int_ena        :    1;  /* Write 1 to enable AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
            uint32_t fifo_ovf_ch3_int_ena          :    1;  /* Write 1 to enable AHB_DMA_INFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch3_int_ena          :    1;  /* Write 1 to enable AHB_DMA_INFIFO_UDF_CH$n_INT.*/
            uint32_t in_ahbinf_resp_err_ch3_int_ena:    1;  /* Write 1 to enable AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } ena_ch3;
    union {
        struct {
            uint32_t done_ch3_int_clr              :    1;  /* Write 1 to clear AHB_DMA_IN_DONE_CH$n_INT.*/
            uint32_t suc_eof_ch3_int_clr           :    1;  /* Write 1 to clear AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
            uint32_t err_eof_ch3_int_clr           :    1;  /* Write 1 to clear AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch3_int_clr          :    1;  /* Write 1 to clear AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
            uint32_t dscr_empty_ch3_int_clr        :    1;  /* Write 1 to clear AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
            uint32_t fifo_ovf_ch3_int_clr          :    1;  /* Write 1 to clear AHB_DMA_INFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch3_int_clr          :    1;  /* Write 1 to clear AHB_DMA_INFIFO_UDF_CH$n_INT.*/
            uint32_t in_ahbinf_resp_err_ch3_int_clr:    1;  /* Write 1 to clear AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } clr_ch3;
    union {
        struct {
            uint32_t done_ch4_int_raw              :    1;  /* The raw interrupt status of AHB_DMA_IN_DONE_CH$n_INT.*/
            uint32_t suc_eof_ch4_int_raw           :    1;  /* The raw interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
            uint32_t err_eof_ch4_int_raw           :    1;  /* The raw interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch4_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
            uint32_t dscr_empty_ch4_int_raw        :    1;  /* The raw interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
            uint32_t fifo_ovf_ch4_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch4_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT.*/
            uint32_t in_ahbinf_resp_err_ch4_int_raw:    1;  /* The raw interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } raw_ch4;
    union {
        struct {
            uint32_t done_ch4_int_st               :    1;  /* The masked interrupt status of AHB_DMA_IN_DONE_CH$n_INT.*/
            uint32_t suc_eof_ch4_int_st            :    1;  /* The masked interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
            uint32_t err_eof_ch4_int_st            :    1;  /* The masked interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch4_int_st           :    1;  /* The masked interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
            uint32_t dscr_empty_ch4_int_st         :    1;  /* The masked interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
            uint32_t fifo_ovf_ch4_int_st           :    1;  /* The masked interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch4_int_st           :    1;  /* The masked interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT.*/
            uint32_t in_ahbinf_resp_err_ch4_int_st :    1;  /* The masked interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } st_ch4;
    union {
        struct {
            uint32_t done_ch4_int_ena              :    1;  /* Write 1 to enable AHB_DMA_IN_DONE_CH$n_INT.*/
            uint32_t suc_eof_ch4_int_ena           :    1;  /* Write 1 to enable AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
            uint32_t err_eof_ch4_int_ena           :    1;  /* Write 1 to enable AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch4_int_ena          :    1;  /* Write 1 to enable AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
            uint32_t dscr_empty_ch4_int_ena        :    1;  /* Write 1 to enable AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
            uint32_t fifo_ovf_ch4_int_ena          :    1;  /* Write 1 to enable AHB_DMA_INFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch4_int_ena          :    1;  /* Write 1 to enable AHB_DMA_INFIFO_UDF_CH$n_INT.*/
            uint32_t in_ahbinf_resp_err_ch4_int_ena:    1;  /* Write 1 to enable AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } ena_ch4;
    union {
        struct {
            uint32_t done_ch4_int_clr              :    1;  /* Write 1 to clear AHB_DMA_IN_DONE_CH$n_INT.*/
            uint32_t suc_eof_ch4_int_clr           :    1;  /* Write 1 to clear AHB_DMA_IN_SUC_EOF_CH$n_INT.*/
            uint32_t err_eof_ch4_int_clr           :    1;  /* Write 1 to clear AHB_DMA_IN_ERR_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch4_int_clr          :    1;  /* Write 1 to clear AHB_DMA_IN_DSCR_ERR_CH$n_INT.*/
            uint32_t dscr_empty_ch4_int_clr        :    1;  /* Write 1 to clear AHB_DMA_IN_DSCR_EMPTY_CH$n_INT.*/
            uint32_t fifo_ovf_ch4_int_clr          :    1;  /* Write 1 to clear AHB_DMA_INFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch4_int_clr          :    1;  /* Write 1 to clear AHB_DMA_INFIFO_UDF_CH$n_INT.*/
            uint32_t in_ahbinf_resp_err_ch4_int_clr:    1;  /* Write 1 to clear AHB_DMA_IN_RESP_ERR_CH$n_INT.*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } clr_ch4;
    struct {
        union {
            struct {
                uint32_t done                          :    1;  /* The raw interrupt status of AHB_DMA_OUT_DONE_CH$n_INT.*/
                uint32_t eof                           :    1;  /* The raw interrupt status of AHB_DMA_OUT_EOF_CH$n_INT.*/
                uint32_t dscr_err                      :    1;  /* The raw interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
                uint32_t total_eof                     :    1;  /* The raw interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
                uint32_t fifo_ovf                      :    1;  /* The raw interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
                uint32_t fifo_udf                      :    1;  /* The raw interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
                uint32_t out_ahbinf_resp_err           :    1;  /* The raw interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
                uint32_t reserved7                     :    25;  /* reserved*/
            };
            uint32_t val;
        } raw;
        union {
            struct {
                uint32_t done                          :    1;  /* The masked interrupt status of AHB_DMA_OUT_DONE_CH$n_INT.*/
                uint32_t eof                           :    1;  /* The masked interrupt status of AHB_DMA_OUT_EOF_CH$n_INT.*/
                uint32_t dscr_err                      :    1;  /* The masked interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
                uint32_t total_eof                     :    1;  /* The masked interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
                uint32_t fifo_ovf                      :    1;  /* The masked interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
                uint32_t fifo_udf                      :    1;  /* The masked interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
                uint32_t out_ahbinf_resp_err           :    1;  /* The masked interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
                uint32_t reserved7                     :    25;  /* reserved*/
            };
            uint32_t val;
        } st;
        union {
            struct {
                uint32_t done                          :    1;  /* Write 1 to enable AHB_DMA_OUT_DONE_CH$n_INT.*/
                uint32_t eof                           :    1;  /* Write 1 to enable AHB_DMA_OUT_EOF_CH$n_INT.*/
                uint32_t dscr_err                      :    1;  /* Write 1 to enable AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
                uint32_t total_eof                     :    1;  /* Write 1 to enable AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
                uint32_t fifo_ovf                      :    1;  /* Write 1 to enable AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
                uint32_t fifo_udf                      :    1;  /* Write 1 to enable AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
                uint32_t out_ahbinf_resp_err           :    1;  /* Write 1 to enable AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
                uint32_t reserved7                     :    25;  /* reserved*/
            };
            uint32_t val;
        } ena;
        union {
            struct {
                uint32_t done                          :    1;  /* Write 1 to clear AHB_DMA_OUT_DONE_CH$n_INT.*/
                uint32_t eof                           :    1;  /* Write 1 to clear AHB_DMA_OUT_EOF_CH$n_INT.*/
                uint32_t dscr_err                      :    1;  /* Write 1 to clear AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
                uint32_t total_eof                     :    1;  /* Write 1 to clear AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
                uint32_t fifo_ovf                      :    1;  /* Write 1 to clear AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
                uint32_t fifo_udf                      :    1;  /* Write 1 to clear AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
                uint32_t out_ahbinf_resp_err           :    1;  /* Write 1 to clear AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
                uint32_t reserved7                     :    25;  /* reserved*/
            };
            uint32_t val;
        } clr;
    } out_intr[3];
    union {
        struct {
            uint32_t done_ch3_int_raw              :    1;  /* The raw interrupt status of AHB_DMA_OUT_DONE_CH$n_INT.*/
            uint32_t eof_ch3_int_raw               :    1;  /* The raw interrupt status of AHB_DMA_OUT_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch3_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
            uint32_t total_eof_ch3_int_raw         :    1;  /* The raw interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
            uint32_t fifo_ovf_ch3_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch3_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
            uint32_t out_ahbinf_resp_err_ch3_int_raw:    1;  /* The raw interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
            uint32_t reserved7                     :    25;  /* reserved*/
        };
        uint32_t val;
    } raw_ch3;
    union {
        struct {
            uint32_t done_ch3_int_st               :    1;  /* The masked interrupt status of AHB_DMA_OUT_DONE_CH$n_INT.*/
            uint32_t eof_ch3_int_st                :    1;  /* The masked interrupt status of AHB_DMA_OUT_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch3_int_st           :    1;  /* The masked interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
            uint32_t total_eof_ch3_int_st          :    1;  /* The masked interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
            uint32_t fifo_ovf_ch3_int_st           :    1;  /* The masked interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch3_int_st           :    1;  /* The masked interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
            uint32_t out_ahbinf_resp_err_ch3_int_st:    1;  /* The masked interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
            uint32_t reserved7                     :    25;  /* reserved*/
        };
        uint32_t val;
    } st_ch3;
    union {
        struct {
            uint32_t done_ch3_int_ena              :    1;  /* Write 1 to enable AHB_DMA_OUT_DONE_CH$n_INT.*/
            uint32_t eof_ch3_int_ena               :    1;  /* Write 1 to enable AHB_DMA_OUT_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch3_int_ena          :    1;  /* Write 1 to enable AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
            uint32_t total_eof_ch3_int_ena         :    1;  /* Write 1 to enable AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
            uint32_t fifo_ovf_ch3_int_ena          :    1;  /* Write 1 to enable AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch3_int_ena          :    1;  /* Write 1 to enable AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
            uint32_t out_ahbinf_resp_err_ch3_int_ena:    1;  /* Write 1 to enable AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
            uint32_t reserved7                     :    25;  /* reserved*/
        };
        uint32_t val;
    } ena_ch3;
    union {
        struct {
            uint32_t done_ch3_int_clr              :    1;  /* Write 1 to clear AHB_DMA_OUT_DONE_CH$n_INT.*/
            uint32_t eof_ch3_int_clr               :    1;  /* Write 1 to clear AHB_DMA_OUT_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch3_int_clr          :    1;  /* Write 1 to clear AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
            uint32_t total_eof_ch3_int_clr         :    1;  /* Write 1 to clear AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
            uint32_t fifo_ovf_ch3_int_clr          :    1;  /* Write 1 to clear AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch3_int_clr          :    1;  /* Write 1 to clear AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
            uint32_t out_ahbinf_resp_err_ch3_int_clr:    1;  /* Write 1 to clear AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
            uint32_t reserved7                     :    25;  /* reserved*/
        };
        uint32_t val;
    } clr_ch3;
    union {
        struct {
            uint32_t done_ch4_int_raw              :    1;  /* The raw interrupt status of AHB_DMA_OUT_DONE_CH$n_INT.*/
            uint32_t eof_ch4_int_raw               :    1;  /* The raw interrupt status of AHB_DMA_OUT_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch4_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
            uint32_t total_eof_ch4_int_raw         :    1;  /* The raw interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
            uint32_t fifo_ovf_ch4_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch4_int_raw          :    1;  /* The raw interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
            uint32_t out_ahbinf_resp_err_ch4_int_raw:    1;  /* The raw interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
            uint32_t reserved7                     :    25;  /* reserved*/
        };
        uint32_t val;
    } raw_ch4;
    union {
        struct {
            uint32_t done_ch4_int_st               :    1;  /* The masked interrupt status of AHB_DMA_OUT_DONE_CH$n_INT.*/
            uint32_t eof_ch4_int_st                :    1;  /* The masked interrupt status of AHB_DMA_OUT_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch4_int_st           :    1;  /* The masked interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
            uint32_t total_eof_ch4_int_st          :    1;  /* The masked interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
            uint32_t fifo_ovf_ch4_int_st           :    1;  /* The masked interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch4_int_st           :    1;  /* The masked interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
            uint32_t out_ahbinf_resp_err_ch4_int_st:    1;  /* The masked interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
            uint32_t reserved7                     :    25;  /* reserved*/
        };
        uint32_t val;
    } st_ch4;
    union {
        struct {
            uint32_t done_ch4_int_ena              :    1;  /* Write 1 to enable AHB_DMA_OUT_DONE_CH$n_INT.*/
            uint32_t eof_ch4_int_ena               :    1;  /* Write 1 to enable AHB_DMA_OUT_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch4_int_ena          :    1;  /* Write 1 to enable AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
            uint32_t total_eof_ch4_int_ena         :    1;  /* Write 1 to enable AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
            uint32_t fifo_ovf_ch4_int_ena          :    1;  /* Write 1 to enable AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch4_int_ena          :    1;  /* Write 1 to enable AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
            uint32_t out_ahbinf_resp_err_ch4_int_ena:    1;  /* Write 1 to enable AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
            uint32_t reserved7                     :    25;  /* reserved*/
        };
        uint32_t val;
    } ena_ch4;
    union {
        struct {
            uint32_t done_ch4_int_clr              :    1;  /* Write 1 to clear AHB_DMA_OUT_DONE_CH$n_INT.*/
            uint32_t eof_ch4_int_clr               :    1;  /* Write 1 to clear AHB_DMA_OUT_EOF_CH$n_INT.*/
            uint32_t dscr_err_ch4_int_clr          :    1;  /* Write 1 to clear AHB_DMA_OUT_DSCR_ERR_CH$n_INT.*/
            uint32_t total_eof_ch4_int_clr         :    1;  /* Write 1 to clear AHB_DMA_OUT_TOTAL_EOF_CH$n_INT.*/
            uint32_t fifo_ovf_ch4_int_clr          :    1;  /* Write 1 to clear AHB_DMA_OUTFIFO_OVF_CH$n_INT.*/
            uint32_t fifo_udf_ch4_int_clr          :    1;  /* Write 1 to clear AHB_DMA_OUTFIFO_UDF_CH$n_INT.*/
            uint32_t out_ahbinf_resp_err_ch4_int_clr:    1;  /* Write 1 to clear AHB_DMA_OUT_RESP_ERR_CH$n_INT.*/
            uint32_t reserved7                     :    25;  /* reserved*/
        };
        uint32_t val;
    } clr_ch4;
    union {
        struct {
            uint32_t ahb_testmode                  :    3;  /* reserved*/
            uint32_t reserved3                     :    1;  /* reserved*/
            uint32_t ahb_testaddr                  :    2;  /* reserved*/
            uint32_t reserved6                     :    26;  /* reserved*/
        };
        uint32_t val;
    } ahb_test;
    union {
        struct {
            uint32_t ahbm_rst_inter                :    1;  /* Write 1 and then 0 to reset the internal AHB FSM.*/
            uint32_t reserved1                     :    1;
            uint32_t arb_pri_dis                   :    1;  /* Configures whether to disable the fixed-priority channel arbitration.\\0: Enable\\1: Disable\\*/
            uint32_t clk_en                        :    1;  /* Configures clock gating.\\0: Support clock only when the application writes registers.\\ 1: Always force the clock on for registers.\\*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } misc_conf;
    uint32_t date;
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
    uint32_t in_link_addr;
    uint32_t in_done_des_addr;
    union {
        struct {
            uint32_t rx_arb_weight_value           :    4;  /* Configures the weight(i.e the number of tokens) of RX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } rx_ch_arb_weigh;
    union {
        struct {
            uint32_t rx_arb_weight_opt_dis         :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } rx_arb_weigh_opt_dir;
    uint32_t reserved_144;
    uint32_t reserved_148;
    uint32_t reserved_14c;
    uint32_t reserved_150;
    uint32_t reserved_154;
    uint32_t reserved_158;
    uint32_t reserved_15c;
    uint32_t reserved_160;
    uint32_t out_link_addr;
    uint32_t out_done_des_addr;
    union {
        struct {
            uint32_t tx_arb_weight_value           :    4;  /* Configures the weight(i.e the number of tokens) of TX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } tx_ch_arb_weigh;
    union {
        struct {
            uint32_t tx_arb_weight_opt_dis         :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } tx_arb_weigh_opt_dir;
    uint32_t reserved_1f0;
    uint32_t reserved_1f4;
    uint32_t reserved_1f8;
    uint32_t reserved_1fc;
    uint32_t in_link_addr_ch1;
    uint32_t in_done_des_addr_ch1;
    union {
        struct {
            uint32_t rx_arb_weight_value_ch1       :    4;  /* Configures the weight(i.e the number of tokens) of RX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } rx_ch_arb_weigh_ch1;
    union {
        struct {
            uint32_t rx_arb_weight_opt_dis_ch1     :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } rx_arb_weigh_opt_dir_ch1;
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
    uint32_t out_link_addr_ch1;
    uint32_t out_done_des_addr_ch1;
    union {
        struct {
            uint32_t tx_arb_weight_value_ch1       :    4;  /* Configures the weight(i.e the number of tokens) of TX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } tx_ch_arb_weigh_ch1;
    union {
        struct {
            uint32_t tx_arb_weight_opt_dis_ch1     :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } tx_arb_weigh_opt_dir_ch1;
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
    uint32_t in_link_addr_ch2;
    uint32_t in_done_des_addr_ch2;
    union {
        struct {
            uint32_t rx_arb_weight_value_ch2       :    4;  /* Configures the weight(i.e the number of tokens) of RX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } rx_ch_arb_weigh_ch2;
    union {
        struct {
            uint32_t rx_arb_weight_opt_dis_ch2     :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } rx_arb_weigh_opt_dir_ch2;
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
    uint32_t out_link_addr_ch2;
    uint32_t out_done_des_addr_ch2;
    struct {
        struct {
            uint32_t reserved_ac;
            uint32_t reserved_b0;
            uint32_t reserved_b4;
            uint32_t reserved_b8;
            uint32_t reserved_bc;
            uint32_t reserved_c0;
            uint32_t reserved_c4;
            uint32_t reserved_c8;
            uint32_t reserved_cc;
            union {
                struct {
                    uint32_t in_rst                        :    1;  /* Write 1 and then 0 to reset AHB_DMA channel 0 RX FSM and RX FIFO pointer.*/
                    uint32_t in_loop_test                  :    1;  /* Reserved.*/
                    uint32_t indscr_burst_en               :    1;  /* Configures whether to enable INCR burst transfer for RX channel $n to read descriptors.\\0: Disable\\1: Enable\\*/
                    uint32_t reserved3                     :    1;
                    uint32_t mem_trans_en                  :    1;  /* Configures whether to enable memory-to-memory data transfer.\\0: Disable\\1: Enable\\*/
                    uint32_t in_etm_en                     :    1;  /* Configures whether to enable ETM control for RX channel$n.\\0: Disable\\1: Enable\\*/
                    uint32_t in_data_burst_mode_sel        :    2;  /* Configures max burst size for Rx channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b10: incr8\\ 2'b11: incr16\\*/
                    uint32_t reserved8                     :    24;  /* reserved*/
                };
                uint32_t val;
            } in_conf0;
            union {
                struct {
                    uint32_t reserved0                     :    12;
                    uint32_t in_check_owner                :    1;  /* Configures whether to enable owner bit check for RX channel $n.\\0: Disable\\1: Enable\\*/
                    uint32_t reserved13                    :    19;  /* reserved*/
                };
                uint32_t val;
            } in_conf1;
            union {
                struct {
                    uint32_t infifo_full                   :    1;  /* Represents whether L1 RX FIFO is full.\\0: Not Full\\1: Full\\*/
                    uint32_t infifo_empty                  :    1;  /* Represents whether L1 RX FIFO is empty.\\0: Not empty\\1: Empty\\*/
                    uint32_t reserved2                     :    6;  /* reserved*/
                    uint32_t infifo_cnt                    :    7;  /* Represents the number of data bytes in L1 RX FIFO for RX channel $n.*/
                    uint32_t reserved15                    :    8;  /* reserved*/
                    uint32_t in_remain_under_1b            :    1;  /* reserved*/
                    uint32_t in_remain_under_2b            :    1;  /* reserved*/
                    uint32_t in_remain_under_3b            :    1;  /* reserved*/
                    uint32_t in_remain_under_4b            :    1;  /* reserved*/
                    uint32_t in_buf_hungry                 :    1;  /* reserved*/
                    uint32_t reserved28                    :    4;  /* reserved*/
                };
                uint32_t val;
            } infifo_status;
            union {
                struct {
                    uint32_t infifo_rdata                  :    12;  /* Represents the data popped from AHB_DMA FIFO.*/
                    uint32_t infifo_pop                    :    1;  /* Configures whether to pop data from AHB_DMA FIFO.\\0: Invalid. No effect\\1: Pop\\*/
                    uint32_t reserved13                    :    19;  /* reserved*/
                };
                uint32_t val;
            } in_pop;
            union {
                struct {
                    uint32_t auto_ret                      :    1;  /* Configures whether to return to current receive descriptor's address when there are some errors in current receiving data.\\0: Not return\\1: Return\\*/
                    uint32_t stop                          :    1;  /* Configures whether to stop AHB_DMA's RX channel $n from receiving data.\\0: Invalid. No effect\\1: Stop\\*/
                    uint32_t start                         :    1;  /* Configures whether to enable AHB_DMA's RX channel $n for data transfer.\\0: Disable\\1: Enable\\*/
                    uint32_t restart                       :    1;  /* Configures whether to restart RX channel $n for AHB_DMA transfer.\\0: Invalid. No effect\\1: Restart\\*/
                    uint32_t park                          :    1;  /* Represents the status of the receive descriptor's FSM.\\0: Running\\1: Idle\\*/
                    uint32_t reserved5                     :    27;
                };
                uint32_t val;
            } in_link;
            union {
                struct {
                    uint32_t dscr_addr                     :    18;  /* Represents the address of the lower 18 bits of the next receive descriptor to be processed.*/
                    uint32_t in_dscr_state                 :    2;  /* reserved*/
                    uint32_t in_state                      :    3;  /* reserved*/
                    uint32_t reserved23                    :    9;  /* reserved*/
                };
                uint32_t val;
            } in_state;
            uint32_t in_suc_eof_des_addr;
            uint32_t in_err_eof_des_addr;
            uint32_t in_dscr;
            uint32_t in_dscr_bf0;
            uint32_t in_dscr_bf1;
            union {
                struct {
                    uint32_t rx_pri                        :    4;  /* Configures the priority of RX channel $n.The larger of the value, the higher of the priority.*/
                    uint32_t reserved4                     :    28;
                };
                uint32_t val;
            } in_pri;
            union {
                struct {
                    uint32_t sel                           :    6;  /* Configures the peripheral connected to RX channel $n. \\0: UHCI0. \\1: I2S0-0. \\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT.*/
                    uint32_t reserved6                     :    26;
                };
                uint32_t val;
            } in_peri_sel;
        } in;
        struct {
            union {
                struct {
                    uint32_t out_rst                       :    1;  /* Configures the reset state of AHB_DMA channel $n TX FSM and TX FIFO pointer.\\0: Release reset\\1: Reset\\*/
                    uint32_t out_loop_test                 :    1;  /* Reserved.*/
                    uint32_t out_auto_wrback               :    1;  /* Configures whether to enable automatic outlink write-back when all the data in TX FIFO has been transmitted.\\0: Disable\\1: Enable\\*/
                    uint32_t out_eof_mode                  :    1;  /* Configures when to generate EOF flag.\\0: EOF flag for TX channel $n is generated when data to be transmitted has been pushed into FIFO in AHB_DMA.\\ 1: EOF flag for TX channel $n is generated when data to be transmitted has been popped from FIFO in AHB_DMA.\\*/
                    uint32_t outdscr_burst_en              :    1;  /* Configures whether to enable INCR burst transfer for TX channel $n reading descriptors.\\0: Disable\\1: Enable\\*/
                    uint32_t reserved5                     :    1;
                    uint32_t out_etm_en                    :    1;  /* Configures whether to enable ETM control for TX channel $n.\\0: Disable\\1: Enable\\*/
                    uint32_t reserved7                     :    1;
                    uint32_t out_data_burst_mode_sel       :    2;  /* Configures max burst size for TX channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b10: incr8\\ 2'b11: incr16\\*/
                    uint32_t reserved10                    :    22;
                };
                uint32_t val;
            } out_conf0;
            union {
                struct {
                    uint32_t reserved0                     :    12;
                    uint32_t out_check_owner               :    1;  /* Configures whether to enable owner bit check for TX channel $n.\\0: Disable\\1: Enable\\*/
                    uint32_t reserved13                    :    19;  /* reserved*/
                };
                uint32_t val;
            } out_conf1;
            union {
                struct {
                    uint32_t outfifo_full                  :    1;  /* Represents whether L1 TX FIFO is full.\\0: Not Full\\1: Full\\*/
                    uint32_t outfifo_empty                 :    1;  /* Represents whether L1 TX FIFO is empty.\\0: Not empty\\1: Empty\\*/
                    uint32_t reserved2                     :    6;
                    uint32_t outfifo_cnt                   :    7;  /* Represents the number of data bytes in L1 TX FIFO for TX channel $n.*/
                    uint32_t reserved15                    :    8;  /* Reserved.*/
                    uint32_t out_remain_under_1b           :    1;  /* Reserved.*/
                    uint32_t out_remain_under_2b           :    1;  /* Reserved.*/
                    uint32_t out_remain_under_3b           :    1;  /* Reserved.*/
                    uint32_t out_remain_under_4b           :    1;  /* Reserved.*/
                    uint32_t reserved27                    :    5;  /* Reserved.*/
                };
                uint32_t val;
            } outfifo_status;
            union {
                struct {
                    uint32_t outfifo_wdata                 :    9;  /* Configures the data that need to be pushed into AHB_DMA FIFO.*/
                    uint32_t outfifo_push                  :    1;  /* Configures whether to push data into AHB_DMA FIFO.\\0: Invalid. No effect\\1: Push\\*/
                    uint32_t reserved10                    :    22;  /* reserved*/
                };
                uint32_t val;
            } out_push;
            union {
                struct {
                    uint32_t stop                          :    1;  /* Configures whether to stop AHB_DMA's TX channel $n from transmitting data.\\0: Invalid. No effect\\1: Stop\\*/
                    uint32_t start                         :    1;  /* Configures whether to enable AHB_DMA's TX channel $n for data transfer.\\0: Disable\\1: Enable\\*/
                    uint32_t restart                       :    1;  /* Configures whether to restart TX channel $n for AHB_DMA transfer.\\0: Invalid. No effect\\1: Restart\\*/
                    uint32_t park                          :    1;  /* Represents the status of the transmit descriptor's FSM.\\0: Running\\1: Idle\\*/
                    uint32_t reserved4                     :    28;
                };
                uint32_t val;
            } out_link;
            union {
                struct {
                    uint32_t dscr_addr                     :    18;  /* Represents the lower 18 bits of the address of the next transmit descriptor to be processed.*/
                    uint32_t out_dscr_state                :    2;  /* reserved*/
                    uint32_t out_state                     :    3;  /* reserved*/
                    uint32_t reserved23                    :    9;  /* reserved*/
                };
                uint32_t val;
            } out_state;
            uint32_t out_eof_des_addr;
            uint32_t out_eof_bfr_des_addr;
            uint32_t out_dscr;
            uint32_t out_dscr_bf0;
            uint32_t out_dscr_bf1;
            union {
                struct {
                    uint32_t tx_pri                        :    4;  /* Configures the priority of TX channel $n.The larger of the value, the higher of the priority.*/
                    uint32_t reserved4                     :    28;
                };
                uint32_t val;
            } out_pri;
            union {
                struct {
                    uint32_t sel                           :    6;  /* Configures the peripheral connected to TX channel $n. \\0: UHCI0. \\1: I2S0-0. \\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT.*/
                    uint32_t reserved6                     :    26;
                };
                uint32_t val;
            } out_peri_sel;
        } out;
    } channel[3];
    union {
        struct {
            uint32_t tx_arb_weight_value_ch2       :    4;  /* Configures the weight(i.e the number of tokens) of TX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } tx_ch_arb_weigh_ch2;
    union {
        struct {
            uint32_t tx_arb_weight_opt_dis_ch2     :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } tx_arb_weigh_opt_dir_ch2;
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
    union {
        struct {
            uint32_t in_rst_ch3                    :    1;  /* Write 1 and then 0 to reset AHB_DMA channel 2 RX FSM and RX FIFO pointer.*/
            uint32_t in_loop_test_ch3              :    1;  /* Reserved.*/
            uint32_t indscr_burst_en_ch3           :    1;  /* Configures whether to enable INCR burst transfer for RX channel $n to read descriptors.\\0: Disable\\1: Enable\\*/
            uint32_t reserved3                     :    1;
            uint32_t mem_trans_en_ch3              :    1;  /* Configures whether to enable memory-to-memory data transfer.\\0: Disable\\1: Enable\\*/
            uint32_t in_etm_en_ch3                 :    1;  /* Configures whether to enable ETM control for RX channel$n.\\0: Disable\\1: Enable\\*/
            uint32_t in_data_burst_mode_sel_ch3    :    2;  /* Configures max burst size for Rx channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b10: incr8\\ 2'b11: incr16\\*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } in_conf0_ch3;
    union {
        struct {
            uint32_t reserved0                     :    12;
            uint32_t in_check_owner_ch3            :    1;  /* Configures whether to enable owner bit check for RX channel $n.\\0: Disable\\1: Enable\\*/
            uint32_t reserved13                    :    19;  /* reserved*/
        };
        uint32_t val;
    } in_conf1_ch3;
    union {
        struct {
            uint32_t infifo_full_ch3               :    1;  /* Represents whether L1 RX FIFO is full.\\0: Not Full\\1: Full\\*/
            uint32_t infifo_empty_ch3              :    1;  /* Represents whether L1 RX FIFO is empty.\\0: Not empty\\1: Empty\\*/
            uint32_t reserved2                     :    6;  /* reserved*/
            uint32_t infifo_cnt_ch3                :    7;  /* Represents the number of data bytes in L1 RX FIFO for RX channel $n.*/
            uint32_t reserved15                    :    8;  /* reserved*/
            uint32_t in_remain_under_1b_ch3        :    1;  /* reserved*/
            uint32_t in_remain_under_2b_ch3        :    1;  /* reserved*/
            uint32_t in_remain_under_3b_ch3        :    1;  /* reserved*/
            uint32_t in_remain_under_4b_ch3        :    1;  /* reserved*/
            uint32_t in_buf_hungry_ch3             :    1;  /* reserved*/
            uint32_t reserved28                    :    4;  /* reserved*/
        };
        uint32_t val;
    } infifo_status_ch3;
    union {
        struct {
            uint32_t infifo_rdata_ch3              :    12;  /* Represents the data popped from AHB_DMA FIFO.*/
            uint32_t infifo_pop_ch3                :    1;  /* Configures whether to pop data from AHB_DMA FIFO.\\0: Invalid. No effect\\1: Pop\\*/
            uint32_t reserved13                    :    19;  /* reserved*/
        };
        uint32_t val;
    } in_pop_ch3;
    union {
        struct {
            uint32_t auto_ret_ch3                  :    1;  /* Configures whether to return to current receive descriptor's address when there are some errors in current receiving data.\\0: Not return\\1: Return\\*/
            uint32_t stop_ch3                      :    1;  /* Configures whether to stop AHB_DMA's RX channel $n from receiving data.\\0: Invalid. No effect\\1: Stop\\*/
            uint32_t start_ch3                     :    1;  /* Configures whether to enable AHB_DMA's RX channel $n for data transfer.\\0: Disable\\1: Enable\\*/
            uint32_t restart_ch3                   :    1;  /* Configures whether to restart RX channel $n for AHB_DMA transfer.\\0: Invalid. No effect\\1: Restart\\*/
            uint32_t park_ch3                      :    1;  /* Represents the status of the receive descriptor's FSM.\\0: Running\\1: Idle\\*/
            uint32_t reserved5                     :    27;
        };
        uint32_t val;
    } in_link_ch3;
    uint32_t in_link_addr_ch3;
    union {
        struct {
            uint32_t dscr_addr_ch3                 :    18;  /* Represents the address of the lower 18 bits of the next receive descriptor to be processed.*/
            uint32_t in_dscr_state_ch3             :    2;  /* reserved*/
            uint32_t in_state_ch3                  :    3;  /* reserved*/
            uint32_t reserved23                    :    9;  /* reserved*/
        };
        uint32_t val;
    } in_state_ch3;
    uint32_t in_suc_eof_des_addr_ch3;
    uint32_t in_err_eof_des_addr_ch3;
    uint32_t in_done_des_addr_ch3;
    uint32_t in_dscr_ch3;
    uint32_t in_dscr_bf0_ch3;
    uint32_t in_dscr_bf1_ch3;
    union {
        struct {
            uint32_t rx_pri_ch3                    :    4;  /* Configures the priority of RX channel $n.The larger of the value, the higher of the priority.*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } in_pri_ch3;
    union {
        struct {
            uint32_t sel_ch3                       :    6;  /* Configures the peripheral connected to RX channel $n. \\0: UHCI0. \\1: I2S0-0. \\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT.*/
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } in_peri_sel_ch3;
    union {
        struct {
            uint32_t rx_arb_weight_value_ch3       :    4;  /* Configures the weight(i.e the number of tokens) of RX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } rx_ch_arb_weigh_ch3;
    union {
        struct {
            uint32_t rx_arb_weight_opt_dis_ch3     :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } rx_arb_weigh_opt_dir_ch3;
    uint32_t reserved_444;
    uint32_t reserved_448;
    uint32_t reserved_44c;
    uint32_t reserved_450;
    uint32_t reserved_454;
    uint32_t reserved_458;
    uint32_t reserved_45c;
    uint32_t reserved_460;
    uint32_t reserved_464;
    uint32_t reserved_468;
    uint32_t reserved_46c;
    uint32_t reserved_470;
    uint32_t reserved_474;
    uint32_t reserved_478;
    uint32_t reserved_47c;
    union {
        struct {
            uint32_t out_rst_ch3                   :    1;  /* Configures the reset state of AHB_DMA channel $n TX FSM and TX FIFO pointer.\\0: Release reset\\1: Reset\\*/
            uint32_t out_loop_test_ch3             :    1;  /* Reserved.*/
            uint32_t out_auto_wrback_ch3           :    1;  /* Configures whether to enable automatic outlink write-back when all the data in TX FIFO has been transmitted.\\0: Disable\\1: Enable\\*/
            uint32_t out_eof_mode_ch3              :    1;  /* Configures when to generate EOF flag.\\0: EOF flag for TX channel $n is generated when data to be transmitted has been pushed into FIFO in AHB_DMA.\\ 1: EOF flag for TX channel $n is generated when data to be transmitted has been popped from FIFO in AHB_DMA.\\*/
            uint32_t outdscr_burst_en_ch3          :    1;  /* Configures whether to enable INCR burst transfer for TX channel $n reading descriptors.\\0: Disable\\1: Enable\\*/
            uint32_t reserved5                     :    1;
            uint32_t out_etm_en_ch3                :    1;  /* Configures whether to enable ETM control for TX channel $n.\\0: Disable\\1: Enable\\*/
            uint32_t reserved7                     :    1;
            uint32_t out_data_burst_mode_sel_ch3   :    2;  /* Configures max burst size for TX channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b10: incr8\\ 2'b11: incr16\\*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } out_conf0_ch3;
    union {
        struct {
            uint32_t reserved0                     :    12;
            uint32_t out_check_owner_ch3           :    1;  /* Configures whether to enable owner bit check for TX channel $n.\\0: Disable\\1: Enable\\*/
            uint32_t reserved13                    :    19;  /* reserved*/
        };
        uint32_t val;
    } out_conf1_ch3;
    union {
        struct {
            uint32_t outfifo_full_ch3              :    1;  /* Represents whether L1 TX FIFO is full.\\0: Not Full\\1: Full\\*/
            uint32_t outfifo_empty_ch3             :    1;  /* Represents whether L1 TX FIFO is empty.\\0: Not empty\\1: Empty\\*/
            uint32_t reserved2                     :    6;
            uint32_t outfifo_cnt_ch3               :    7;  /* Represents the number of data bytes in L1 TX FIFO for TX channel $n.*/
            uint32_t reserved15                    :    8;  /* Reserved.*/
            uint32_t out_remain_under_1b_ch3       :    1;  /* Reserved.*/
            uint32_t out_remain_under_2b_ch3       :    1;  /* Reserved.*/
            uint32_t out_remain_under_3b_ch3       :    1;  /* Reserved.*/
            uint32_t out_remain_under_4b_ch3       :    1;  /* Reserved.*/
            uint32_t reserved27                    :    5;  /* Reserved.*/
        };
        uint32_t val;
    } outfifo_status_ch3;
    union {
        struct {
            uint32_t outfifo_wdata_ch3             :    9;  /* Configures the data that need to be pushed into AHB_DMA FIFO.*/
            uint32_t outfifo_push_ch3              :    1;  /* Configures whether to push data into AHB_DMA FIFO.\\0: Invalid. No effect\\1: Push\\*/
            uint32_t reserved10                    :    22;  /* reserved*/
        };
        uint32_t val;
    } out_push_ch3;
    union {
        struct {
            uint32_t stop_ch3                      :    1;  /* Configures whether to stop AHB_DMA's TX channel $n from transmitting data.\\0: Invalid. No effect\\1: Stop\\*/
            uint32_t start_ch3                     :    1;  /* Configures whether to enable AHB_DMA's TX channel $n for data transfer.\\0: Disable\\1: Enable\\*/
            uint32_t restart_ch3                   :    1;  /* Configures whether to restart TX channel $n for AHB_DMA transfer.\\0: Invalid. No effect\\1: Restart\\*/
            uint32_t park_ch3                      :    1;  /* Represents the status of the transmit descriptor's FSM.\\0: Running\\1: Idle\\*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } out_link_ch3;
    uint32_t out_link_addr_ch3;
    union {
        struct {
            uint32_t dscr_addr_ch3                 :    18;  /* Represents the lower 18 bits of the address of the next transmit descriptor to be processed.*/
            uint32_t out_dscr_state_ch3            :    2;  /* reserved*/
            uint32_t out_state_ch3                 :    3;  /* reserved*/
            uint32_t reserved23                    :    9;  /* reserved*/
        };
        uint32_t val;
    } out_state_ch3;
    uint32_t out_eof_des_addr_ch3;
    uint32_t out_eof_bfr_des_addr_ch3;
    uint32_t out_done_des_addr_ch3;
    uint32_t out_dscr_ch3;
    uint32_t out_dscr_bf0_ch3;
    uint32_t out_dscr_bf1_ch3;
    union {
        struct {
            uint32_t tx_pri_ch3                    :    4;  /* Configures the priority of TX channel $n.The larger of the value, the higher of the priority.*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } out_pri_ch3;
    union {
        struct {
            uint32_t sel_ch3                       :    6;  /* Configures the peripheral connected to TX channel $n. \\0: UHCI0. \\1: I2S0-0. \\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT.*/
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } out_peri_sel_ch3;
    union {
        struct {
            uint32_t tx_arb_weight_value_ch3       :    4;  /* Configures the weight(i.e the number of tokens) of TX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } tx_ch_arb_weigh_ch3;
    union {
        struct {
            uint32_t tx_arb_weight_opt_dis_ch3     :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } tx_arb_weigh_opt_dir_ch3;
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
    union {
        struct {
            uint32_t in_rst_ch4                    :    1;  /* Write 1 and then 0 to reset AHB_DMA channel 2 RX FSM and RX FIFO pointer.*/
            uint32_t in_loop_test_ch4              :    1;  /* Reserved.*/
            uint32_t indscr_burst_en_ch4           :    1;  /* Configures whether to enable INCR burst transfer for RX channel $n to read descriptors.\\0: Disable\\1: Enable\\*/
            uint32_t reserved3                     :    1;
            uint32_t mem_trans_en_ch4              :    1;  /* Configures whether to enable memory-to-memory data transfer.\\0: Disable\\1: Enable\\*/
            uint32_t in_etm_en_ch4                 :    1;  /* Configures whether to enable ETM control for RX channel$n.\\0: Disable\\1: Enable\\*/
            uint32_t in_data_burst_mode_sel_ch4    :    2;  /* Configures max burst size for Rx channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b10: incr8\\ 2'b11: incr16\\*/
            uint32_t reserved8                     :    24;  /* reserved*/
        };
        uint32_t val;
    } in_conf0_ch4;
    union {
        struct {
            uint32_t reserved0                     :    12;
            uint32_t in_check_owner_ch4            :    1;  /* Configures whether to enable owner bit check for RX channel $n.\\0: Disable\\1: Enable\\*/
            uint32_t reserved13                    :    19;  /* reserved*/
        };
        uint32_t val;
    } in_conf1_ch4;
    union {
        struct {
            uint32_t infifo_full_ch4               :    1;  /* Represents whether L1 RX FIFO is full.\\0: Not Full\\1: Full\\*/
            uint32_t infifo_empty_ch4              :    1;  /* Represents whether L1 RX FIFO is empty.\\0: Not empty\\1: Empty\\*/
            uint32_t reserved2                     :    6;  /* reserved*/
            uint32_t infifo_cnt_ch4                :    7;  /* Represents the number of data bytes in L1 RX FIFO for RX channel $n.*/
            uint32_t reserved15                    :    8;  /* reserved*/
            uint32_t in_remain_under_1b_ch4        :    1;  /* reserved*/
            uint32_t in_remain_under_2b_ch4        :    1;  /* reserved*/
            uint32_t in_remain_under_3b_ch4        :    1;  /* reserved*/
            uint32_t in_remain_under_4b_ch4        :    1;  /* reserved*/
            uint32_t in_buf_hungry_ch4             :    1;  /* reserved*/
            uint32_t reserved28                    :    4;  /* reserved*/
        };
        uint32_t val;
    } infifo_status_ch4;
    union {
        struct {
            uint32_t infifo_rdata_ch4              :    12;  /* Represents the data popped from AHB_DMA FIFO.*/
            uint32_t infifo_pop_ch4                :    1;  /* Configures whether to pop data from AHB_DMA FIFO.\\0: Invalid. No effect\\1: Pop\\*/
            uint32_t reserved13                    :    19;  /* reserved*/
        };
        uint32_t val;
    } in_pop_ch4;
    union {
        struct {
            uint32_t auto_ret_ch4                  :    1;  /* Configures whether to return to current receive descriptor's address when there are some errors in current receiving data.\\0: Not return\\1: Return\\*/
            uint32_t stop_ch4                      :    1;  /* Configures whether to stop AHB_DMA's RX channel $n from receiving data.\\0: Invalid. No effect\\1: Stop\\*/
            uint32_t start_ch4                     :    1;  /* Configures whether to enable AHB_DMA's RX channel $n for data transfer.\\0: Disable\\1: Enable\\*/
            uint32_t restart_ch4                   :    1;  /* Configures whether to restart RX channel $n for AHB_DMA transfer.\\0: Invalid. No effect\\1: Restart\\*/
            uint32_t park_ch4                      :    1;  /* Represents the status of the receive descriptor's FSM.\\0: Running\\1: Idle\\*/
            uint32_t reserved5                     :    27;
        };
        uint32_t val;
    } in_link_ch4;
    uint32_t in_link_addr_ch4;
    union {
        struct {
            uint32_t dscr_addr_ch4                 :    18;  /* Represents the address of the lower 18 bits of the next receive descriptor to be processed.*/
            uint32_t in_dscr_state_ch4             :    2;  /* reserved*/
            uint32_t in_state_ch4                  :    3;  /* reserved*/
            uint32_t reserved23                    :    9;  /* reserved*/
        };
        uint32_t val;
    } in_state_ch4;
    uint32_t in_suc_eof_des_addr_ch4;
    uint32_t in_err_eof_des_addr_ch4;
    uint32_t in_done_des_addr_ch4;
    uint32_t in_dscr_ch4;
    uint32_t in_dscr_bf0_ch4;
    uint32_t in_dscr_bf1_ch4;
    union {
        struct {
            uint32_t rx_pri_ch4                    :    4;  /* Configures the priority of RX channel $n.The larger of the value, the higher of the priority.*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } in_pri_ch4;
    union {
        struct {
            uint32_t sel_ch4                       :    6;  /* Configures the peripheral connected to RX channel $n. \\0: UHCI0. \\1: I2S0-0. \\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT.*/
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } in_peri_sel_ch4;
    union {
        struct {
            uint32_t rx_arb_weight_value_ch4       :    4;  /* Configures the weight(i.e the number of tokens) of RX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } rx_ch_arb_weigh_ch4;
    union {
        struct {
            uint32_t rx_arb_weight_opt_dis_ch4     :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } rx_arb_weigh_opt_dir_ch4;
    uint32_t reserved_544;
    uint32_t reserved_548;
    uint32_t reserved_54c;
    uint32_t reserved_550;
    uint32_t reserved_554;
    uint32_t reserved_558;
    uint32_t reserved_55c;
    uint32_t reserved_560;
    uint32_t reserved_564;
    uint32_t reserved_568;
    uint32_t reserved_56c;
    uint32_t reserved_570;
    uint32_t reserved_574;
    uint32_t reserved_578;
    uint32_t reserved_57c;
    union {
        struct {
            uint32_t out_rst_ch4                   :    1;  /* Configures the reset state of AHB_DMA channel $n TX FSM and TX FIFO pointer.\\0: Release reset\\1: Reset\\*/
            uint32_t out_loop_test_ch4             :    1;  /* Reserved.*/
            uint32_t out_auto_wrback_ch4           :    1;  /* Configures whether to enable automatic outlink write-back when all the data in TX FIFO has been transmitted.\\0: Disable\\1: Enable\\*/
            uint32_t out_eof_mode_ch4              :    1;  /* Configures when to generate EOF flag.\\0: EOF flag for TX channel $n is generated when data to be transmitted has been pushed into FIFO in AHB_DMA.\\ 1: EOF flag for TX channel $n is generated when data to be transmitted has been popped from FIFO in AHB_DMA.\\*/
            uint32_t outdscr_burst_en_ch4          :    1;  /* Configures whether to enable INCR burst transfer for TX channel $n reading descriptors.\\0: Disable\\1: Enable\\*/
            uint32_t reserved5                     :    1;
            uint32_t out_etm_en_ch4                :    1;  /* Configures whether to enable ETM control for TX channel $n.\\0: Disable\\1: Enable\\*/
            uint32_t reserved7                     :    1;
            uint32_t out_data_burst_mode_sel_ch4   :    2;  /* Configures max burst size for TX channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b10: incr8\\ 2'b11: incr16\\*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } out_conf0_ch4;
    union {
        struct {
            uint32_t reserved0                     :    12;
            uint32_t out_check_owner_ch4           :    1;  /* Configures whether to enable owner bit check for TX channel $n.\\0: Disable\\1: Enable\\*/
            uint32_t reserved13                    :    19;  /* reserved*/
        };
        uint32_t val;
    } out_conf1_ch4;
    union {
        struct {
            uint32_t outfifo_full_ch4              :    1;  /* Represents whether L1 TX FIFO is full.\\0: Not Full\\1: Full\\*/
            uint32_t outfifo_empty_ch4             :    1;  /* Represents whether L1 TX FIFO is empty.\\0: Not empty\\1: Empty\\*/
            uint32_t reserved2                     :    6;
            uint32_t outfifo_cnt_ch4               :    7;  /* Represents the number of data bytes in L1 TX FIFO for TX channel $n.*/
            uint32_t reserved15                    :    8;  /* Reserved.*/
            uint32_t out_remain_under_1b_ch4       :    1;  /* Reserved.*/
            uint32_t out_remain_under_2b_ch4       :    1;  /* Reserved.*/
            uint32_t out_remain_under_3b_ch4       :    1;  /* Reserved.*/
            uint32_t out_remain_under_4b_ch4       :    1;  /* Reserved.*/
            uint32_t reserved27                    :    5;  /* Reserved.*/
        };
        uint32_t val;
    } outfifo_status_ch4;
    union {
        struct {
            uint32_t outfifo_wdata_ch4             :    9;  /* Configures the data that need to be pushed into AHB_DMA FIFO.*/
            uint32_t outfifo_push_ch4              :    1;  /* Configures whether to push data into AHB_DMA FIFO.\\0: Invalid. No effect\\1: Push\\*/
            uint32_t reserved10                    :    22;  /* reserved*/
        };
        uint32_t val;
    } out_push_ch4;
    union {
        struct {
            uint32_t stop_ch4                      :    1;  /* Configures whether to stop AHB_DMA's TX channel $n from transmitting data.\\0: Invalid. No effect\\1: Stop\\*/
            uint32_t start_ch4                     :    1;  /* Configures whether to enable AHB_DMA's TX channel $n for data transfer.\\0: Disable\\1: Enable\\*/
            uint32_t restart_ch4                   :    1;  /* Configures whether to restart TX channel $n for AHB_DMA transfer.\\0: Invalid. No effect\\1: Restart\\*/
            uint32_t park_ch4                      :    1;  /* Represents the status of the transmit descriptor's FSM.\\0: Running\\1: Idle\\*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } out_link_ch4;
    uint32_t out_link_addr_ch4;
    union {
        struct {
            uint32_t dscr_addr_ch4                 :    18;  /* Represents the lower 18 bits of the address of the next transmit descriptor to be processed.*/
            uint32_t out_dscr_state_ch4            :    2;  /* reserved*/
            uint32_t out_state_ch4                 :    3;  /* reserved*/
            uint32_t reserved23                    :    9;  /* reserved*/
        };
        uint32_t val;
    } out_state_ch4;
    uint32_t out_eof_des_addr_ch4;
    uint32_t out_eof_bfr_des_addr_ch4;
    uint32_t out_done_des_addr_ch4;
    uint32_t out_dscr_ch4;
    uint32_t out_dscr_bf0_ch4;
    uint32_t out_dscr_bf1_ch4;
    union {
        struct {
            uint32_t tx_pri_ch4                    :    4;  /* Configures the priority of TX channel $n.The larger of the value, the higher of the priority.*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } out_pri_ch4;
    union {
        struct {
            uint32_t sel_ch4                       :    6;  /* Configures the peripheral connected to TX channel $n. \\0: UHCI0. \\1: I2S0-0. \\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT.*/
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } out_peri_sel_ch4;
    union {
        struct {
            uint32_t tx_arb_weight_value_ch4       :    4;  /* Configures the weight(i.e the number of tokens) of TX channel$n*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } tx_ch_arb_weigh_ch4;
    union {
        struct {
            uint32_t tx_arb_weight_opt_dis_ch4     :    1;  /* reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } tx_arb_weigh_opt_dir_ch4;
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
    uint32_t intr_mem_start_addr;
    uint32_t intr_mem_end_addr;
    union {
        struct {
            uint32_t arb_timeout_num               :    16;  /* Configures the time slot. Measurement unit: AHB bus clock cycle.*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } arb_timeout;
    uint32_t reserved_60c;
    union {
        struct {
            uint32_t weight_en                     :    1;  /* Configures whether to enable weight arbitration.\\0: Disable\\1: Enable\\*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } weight_en;
    uint32_t reserved_614;
    union {
        struct {
            uint32_t ahb_apb_sync_clk_en           :    5;  /* Configures whether to force on ahb_apb_sync 4~0 module clock. For bit n:\\0 : Not force on ahb_apb_sync n clock \\1 : Force on ahb_apb_sync n clock\\*/
            uint32_t out_dscr_clk_en               :    5;  /* Configures whether to force on out_dscr 4~0 module clock. For bit n:\\0 : Not force on out_dscr n clock \\1 : Force on out_dscr n clock\\*/
            uint32_t out_ctrl_clk_en               :    5;  /* Configures whether to force on out_ctrl 4~0 module clock. For bit n:\\0 : Not force on out_ctrl n clock \\1 : Force on out_ctrl n clock\\*/
            uint32_t in_dscr_clk_en                :    5;  /* Configures whether to force on in_dscr 4~0 module clock. For bit n:\\0 : Not force on in_dscr n clock \\1 : Force on in_dscr n clock\\*/
            uint32_t in_ctrl_clk_en                :    5;  /* Configures whether to force on in_ctrl 4~0 module clock. For bit n:\\0 : Not force on in_ctrl n clock \\1 : Force on in_ctrl n clock\\*/
            uint32_t reserved25                    :    1;
            uint32_t reserved26                    :    1;
            uint32_t cmd_arb_clk_en                :    1;  /* Configures whether to force on cmd_arb module clock. \\0 : Not force on cmd_arb clock \\1 : Force on cmd_arb clock\\*/
            uint32_t ahbinf_clk_en                 :    1;  /* Configures whether to force on ahbinf module clock. \\0 : Not force on ahbinf clock \\1 : Force on ahbinf clock\\*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } module_clk_en;
    uint32_t reserved_61c;
    uint32_t ahbinf_resp_err_status0;
    union {
        struct {
            uint32_t ahbinf_resp_err_wr            :    1;  /* Represents the AHB response error is write request.*/
            uint32_t ahbinf_resp_err_id            :    4;  /* Represents the AHB response error request id.*/
            uint32_t ahbinf_resp_err_ch_id         :    4;  /* Represents the AHB response error request channel id.bit[3]=1:TX channel.\\bit[3]=0:RX channel.\\*/
            uint32_t reserved9                     :    23;
        };
        uint32_t val;
    } ahbinf_resp_err_status1;
} ahb_dma_dev_t;
extern ahb_dma_dev_t AHB_DMA;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_AHB_DMA_STRUCT_H_ */
