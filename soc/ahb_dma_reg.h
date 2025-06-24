/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_AHB_DMA_REG_H_
#define _SOC_AHB_DMA_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define AHB_DMA_IN_INT_RAW_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x0)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_RAW : R/WTC/SS ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_RAW    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_RAW_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_RAW_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_RAW_S  7
/* AHB_DMA_INFIFO_UDF_CH0_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH0_INT_RAW    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH0_INT_RAW_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH0_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_UDF_CH0_INT_RAW_S  6
/* AHB_DMA_INFIFO_OVF_CH0_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH0_INT_RAW    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH0_INT_RAW_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH0_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_OVF_CH0_INT_RAW_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH0_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_RAW    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_RAW_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_RAW_S  4
/* AHB_DMA_IN_DSCR_ERR_CH0_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_RAW    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_RAW_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_RAW_S  3
/* AHB_DMA_IN_ERR_EOF_CH0_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH0_INT_RAW    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH0_INT_RAW_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH0_INT_RAW_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH0_INT_RAW_S  2
/* AHB_DMA_IN_SUC_EOF_CH0_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH0_INT_RAW    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH0_INT_RAW_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH0_INT_RAW_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH0_INT_RAW_S  1
/* AHB_DMA_IN_DONE_CH0_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH0_INT_RAW    (BIT(0))
#define AHB_DMA_IN_DONE_CH0_INT_RAW_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH0_INT_RAW_V  0x1
#define AHB_DMA_IN_DONE_CH0_INT_RAW_S  0

#define AHB_DMA_IN_INT_ST_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x4)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ST    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ST_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ST_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ST_S  7
/* AHB_DMA_INFIFO_UDF_CH0_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH0_INT_ST    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH0_INT_ST_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH0_INT_ST_V  0x1
#define AHB_DMA_INFIFO_UDF_CH0_INT_ST_S  6
/* AHB_DMA_INFIFO_OVF_CH0_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH0_INT_ST    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH0_INT_ST_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH0_INT_ST_V  0x1
#define AHB_DMA_INFIFO_OVF_CH0_INT_ST_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ST    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ST_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ST_S  4
/* AHB_DMA_IN_DSCR_ERR_CH0_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_ST    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_ST_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_ST_S  3
/* AHB_DMA_IN_ERR_EOF_CH0_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH0_INT_ST    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH0_INT_ST_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH0_INT_ST_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH0_INT_ST_S  2
/* AHB_DMA_IN_SUC_EOF_CH0_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH0_INT_ST    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH0_INT_ST_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH0_INT_ST_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH0_INT_ST_S  1
/* AHB_DMA_IN_DONE_CH0_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH0_INT_ST    (BIT(0))
#define AHB_DMA_IN_DONE_CH0_INT_ST_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH0_INT_ST_V  0x1
#define AHB_DMA_IN_DONE_CH0_INT_ST_S  0

#define AHB_DMA_IN_INT_ENA_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x8)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ENA    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ENA_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ENA_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_ENA_S  7
/* AHB_DMA_INFIFO_UDF_CH0_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH0_INT_ENA    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH0_INT_ENA_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH0_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_UDF_CH0_INT_ENA_S  6
/* AHB_DMA_INFIFO_OVF_CH0_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH0_INT_ENA    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH0_INT_ENA_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH0_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_OVF_CH0_INT_ENA_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ENA    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ENA_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_ENA_S  4
/* AHB_DMA_IN_DSCR_ERR_CH0_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_ENA    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_ENA_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_ENA_S  3
/* AHB_DMA_IN_ERR_EOF_CH0_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH0_INT_ENA    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH0_INT_ENA_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH0_INT_ENA_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH0_INT_ENA_S  2
/* AHB_DMA_IN_SUC_EOF_CH0_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH0_INT_ENA    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH0_INT_ENA_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH0_INT_ENA_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH0_INT_ENA_S  1
/* AHB_DMA_IN_DONE_CH0_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH0_INT_ENA    (BIT(0))
#define AHB_DMA_IN_DONE_CH0_INT_ENA_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH0_INT_ENA_V  0x1
#define AHB_DMA_IN_DONE_CH0_INT_ENA_S  0

#define AHB_DMA_IN_INT_CLR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0xC)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_CLR    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_CLR_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_CLR_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH0_INT_CLR_S  7
/* AHB_DMA_INFIFO_UDF_CH0_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH0_INT_CLR    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH0_INT_CLR_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH0_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_UDF_CH0_INT_CLR_S  6
/* AHB_DMA_INFIFO_OVF_CH0_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH0_INT_CLR    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH0_INT_CLR_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH0_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_OVF_CH0_INT_CLR_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH0_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_CLR    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_CLR_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH0_INT_CLR_S  4
/* AHB_DMA_IN_DSCR_ERR_CH0_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_CLR    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_CLR_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH0_INT_CLR_S  3
/* AHB_DMA_IN_ERR_EOF_CH0_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH0_INT_CLR    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH0_INT_CLR_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH0_INT_CLR_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH0_INT_CLR_S  2
/* AHB_DMA_IN_SUC_EOF_CH0_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH0_INT_CLR    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH0_INT_CLR_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH0_INT_CLR_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH0_INT_CLR_S  1
/* AHB_DMA_IN_DONE_CH0_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH0_INT_CLR    (BIT(0))
#define AHB_DMA_IN_DONE_CH0_INT_CLR_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH0_INT_CLR_V  0x1
#define AHB_DMA_IN_DONE_CH0_INT_CLR_S  0

#define AHB_DMA_IN_INT_RAW_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x10)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_RAW : R/WTC/SS ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_RAW    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_RAW_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_RAW_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_RAW_S  7
/* AHB_DMA_INFIFO_UDF_CH1_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH1_INT_RAW    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH1_INT_RAW_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH1_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_UDF_CH1_INT_RAW_S  6
/* AHB_DMA_INFIFO_OVF_CH1_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH1_INT_RAW    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH1_INT_RAW_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH1_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_OVF_CH1_INT_RAW_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH1_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_RAW    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_RAW_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_RAW_S  4
/* AHB_DMA_IN_DSCR_ERR_CH1_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_RAW    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_RAW_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_RAW_S  3
/* AHB_DMA_IN_ERR_EOF_CH1_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH1_INT_RAW    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH1_INT_RAW_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH1_INT_RAW_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH1_INT_RAW_S  2
/* AHB_DMA_IN_SUC_EOF_CH1_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH1_INT_RAW    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH1_INT_RAW_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH1_INT_RAW_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH1_INT_RAW_S  1
/* AHB_DMA_IN_DONE_CH1_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH1_INT_RAW    (BIT(0))
#define AHB_DMA_IN_DONE_CH1_INT_RAW_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH1_INT_RAW_V  0x1
#define AHB_DMA_IN_DONE_CH1_INT_RAW_S  0

#define AHB_DMA_IN_INT_ST_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x14)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ST    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ST_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ST_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ST_S  7
/* AHB_DMA_INFIFO_UDF_CH1_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH1_INT_ST    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH1_INT_ST_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH1_INT_ST_V  0x1
#define AHB_DMA_INFIFO_UDF_CH1_INT_ST_S  6
/* AHB_DMA_INFIFO_OVF_CH1_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH1_INT_ST    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH1_INT_ST_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH1_INT_ST_V  0x1
#define AHB_DMA_INFIFO_OVF_CH1_INT_ST_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ST    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ST_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ST_S  4
/* AHB_DMA_IN_DSCR_ERR_CH1_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_ST    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_ST_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_ST_S  3
/* AHB_DMA_IN_ERR_EOF_CH1_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH1_INT_ST    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH1_INT_ST_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH1_INT_ST_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH1_INT_ST_S  2
/* AHB_DMA_IN_SUC_EOF_CH1_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH1_INT_ST    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH1_INT_ST_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH1_INT_ST_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH1_INT_ST_S  1
/* AHB_DMA_IN_DONE_CH1_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH1_INT_ST    (BIT(0))
#define AHB_DMA_IN_DONE_CH1_INT_ST_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH1_INT_ST_V  0x1
#define AHB_DMA_IN_DONE_CH1_INT_ST_S  0

#define AHB_DMA_IN_INT_ENA_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x18)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ENA    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ENA_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ENA_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_ENA_S  7
/* AHB_DMA_INFIFO_UDF_CH1_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH1_INT_ENA    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH1_INT_ENA_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH1_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_UDF_CH1_INT_ENA_S  6
/* AHB_DMA_INFIFO_OVF_CH1_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH1_INT_ENA    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH1_INT_ENA_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH1_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_OVF_CH1_INT_ENA_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ENA    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ENA_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_ENA_S  4
/* AHB_DMA_IN_DSCR_ERR_CH1_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_ENA    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_ENA_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_ENA_S  3
/* AHB_DMA_IN_ERR_EOF_CH1_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH1_INT_ENA    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH1_INT_ENA_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH1_INT_ENA_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH1_INT_ENA_S  2
/* AHB_DMA_IN_SUC_EOF_CH1_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH1_INT_ENA    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH1_INT_ENA_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH1_INT_ENA_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH1_INT_ENA_S  1
/* AHB_DMA_IN_DONE_CH1_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH1_INT_ENA    (BIT(0))
#define AHB_DMA_IN_DONE_CH1_INT_ENA_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH1_INT_ENA_V  0x1
#define AHB_DMA_IN_DONE_CH1_INT_ENA_S  0

#define AHB_DMA_IN_INT_CLR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x1C)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_CLR    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_CLR_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_CLR_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH1_INT_CLR_S  7
/* AHB_DMA_INFIFO_UDF_CH1_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH1_INT_CLR    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH1_INT_CLR_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH1_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_UDF_CH1_INT_CLR_S  6
/* AHB_DMA_INFIFO_OVF_CH1_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH1_INT_CLR    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH1_INT_CLR_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH1_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_OVF_CH1_INT_CLR_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH1_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_CLR    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_CLR_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH1_INT_CLR_S  4
/* AHB_DMA_IN_DSCR_ERR_CH1_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_CLR    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_CLR_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH1_INT_CLR_S  3
/* AHB_DMA_IN_ERR_EOF_CH1_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH1_INT_CLR    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH1_INT_CLR_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH1_INT_CLR_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH1_INT_CLR_S  2
/* AHB_DMA_IN_SUC_EOF_CH1_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH1_INT_CLR    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH1_INT_CLR_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH1_INT_CLR_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH1_INT_CLR_S  1
/* AHB_DMA_IN_DONE_CH1_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH1_INT_CLR    (BIT(0))
#define AHB_DMA_IN_DONE_CH1_INT_CLR_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH1_INT_CLR_V  0x1
#define AHB_DMA_IN_DONE_CH1_INT_CLR_S  0

#define AHB_DMA_IN_INT_RAW_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x20)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_RAW : R/WTC/SS ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_RAW    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_RAW_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_RAW_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_RAW_S  7
/* AHB_DMA_INFIFO_UDF_CH2_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH2_INT_RAW    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH2_INT_RAW_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH2_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_UDF_CH2_INT_RAW_S  6
/* AHB_DMA_INFIFO_OVF_CH2_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH2_INT_RAW    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH2_INT_RAW_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH2_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_OVF_CH2_INT_RAW_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH2_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_RAW    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_RAW_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_RAW_S  4
/* AHB_DMA_IN_DSCR_ERR_CH2_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_RAW    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_RAW_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_RAW_S  3
/* AHB_DMA_IN_ERR_EOF_CH2_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH2_INT_RAW    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH2_INT_RAW_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH2_INT_RAW_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH2_INT_RAW_S  2
/* AHB_DMA_IN_SUC_EOF_CH2_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH2_INT_RAW    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH2_INT_RAW_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH2_INT_RAW_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH2_INT_RAW_S  1
/* AHB_DMA_IN_DONE_CH2_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH2_INT_RAW    (BIT(0))
#define AHB_DMA_IN_DONE_CH2_INT_RAW_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH2_INT_RAW_V  0x1
#define AHB_DMA_IN_DONE_CH2_INT_RAW_S  0

#define AHB_DMA_IN_INT_ST_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x24)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ST    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ST_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ST_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ST_S  7
/* AHB_DMA_INFIFO_UDF_CH2_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH2_INT_ST    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH2_INT_ST_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH2_INT_ST_V  0x1
#define AHB_DMA_INFIFO_UDF_CH2_INT_ST_S  6
/* AHB_DMA_INFIFO_OVF_CH2_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH2_INT_ST    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH2_INT_ST_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH2_INT_ST_V  0x1
#define AHB_DMA_INFIFO_OVF_CH2_INT_ST_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ST    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ST_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ST_S  4
/* AHB_DMA_IN_DSCR_ERR_CH2_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_ST    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_ST_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_ST_S  3
/* AHB_DMA_IN_ERR_EOF_CH2_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH2_INT_ST    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH2_INT_ST_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH2_INT_ST_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH2_INT_ST_S  2
/* AHB_DMA_IN_SUC_EOF_CH2_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH2_INT_ST    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH2_INT_ST_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH2_INT_ST_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH2_INT_ST_S  1
/* AHB_DMA_IN_DONE_CH2_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH2_INT_ST    (BIT(0))
#define AHB_DMA_IN_DONE_CH2_INT_ST_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH2_INT_ST_V  0x1
#define AHB_DMA_IN_DONE_CH2_INT_ST_S  0

#define AHB_DMA_IN_INT_ENA_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x28)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ENA    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ENA_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ENA_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_ENA_S  7
/* AHB_DMA_INFIFO_UDF_CH2_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH2_INT_ENA    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH2_INT_ENA_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH2_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_UDF_CH2_INT_ENA_S  6
/* AHB_DMA_INFIFO_OVF_CH2_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH2_INT_ENA    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH2_INT_ENA_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH2_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_OVF_CH2_INT_ENA_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ENA    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ENA_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_ENA_S  4
/* AHB_DMA_IN_DSCR_ERR_CH2_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_ENA    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_ENA_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_ENA_S  3
/* AHB_DMA_IN_ERR_EOF_CH2_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH2_INT_ENA    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH2_INT_ENA_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH2_INT_ENA_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH2_INT_ENA_S  2
/* AHB_DMA_IN_SUC_EOF_CH2_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH2_INT_ENA    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH2_INT_ENA_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH2_INT_ENA_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH2_INT_ENA_S  1
/* AHB_DMA_IN_DONE_CH2_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH2_INT_ENA    (BIT(0))
#define AHB_DMA_IN_DONE_CH2_INT_ENA_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH2_INT_ENA_V  0x1
#define AHB_DMA_IN_DONE_CH2_INT_ENA_S  0

#define AHB_DMA_IN_INT_CLR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x2C)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_CLR    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_CLR_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_CLR_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH2_INT_CLR_S  7
/* AHB_DMA_INFIFO_UDF_CH2_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH2_INT_CLR    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH2_INT_CLR_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH2_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_UDF_CH2_INT_CLR_S  6
/* AHB_DMA_INFIFO_OVF_CH2_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH2_INT_CLR    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH2_INT_CLR_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH2_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_OVF_CH2_INT_CLR_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH2_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_CLR    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_CLR_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH2_INT_CLR_S  4
/* AHB_DMA_IN_DSCR_ERR_CH2_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_CLR    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_CLR_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH2_INT_CLR_S  3
/* AHB_DMA_IN_ERR_EOF_CH2_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH2_INT_CLR    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH2_INT_CLR_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH2_INT_CLR_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH2_INT_CLR_S  2
/* AHB_DMA_IN_SUC_EOF_CH2_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH2_INT_CLR    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH2_INT_CLR_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH2_INT_CLR_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH2_INT_CLR_S  1
/* AHB_DMA_IN_DONE_CH2_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH2_INT_CLR    (BIT(0))
#define AHB_DMA_IN_DONE_CH2_INT_CLR_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH2_INT_CLR_V  0x1
#define AHB_DMA_IN_DONE_CH2_INT_CLR_S  0

#define AHB_DMA_IN_INT_RAW_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x30)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_RAW : R/WTC/SS ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_RAW    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_RAW_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_RAW_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_RAW_S  7
/* AHB_DMA_INFIFO_UDF_CH3_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH3_INT_RAW    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH3_INT_RAW_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH3_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_UDF_CH3_INT_RAW_S  6
/* AHB_DMA_INFIFO_OVF_CH3_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH3_INT_RAW    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH3_INT_RAW_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH3_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_OVF_CH3_INT_RAW_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH3_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_RAW    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_RAW_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_RAW_S  4
/* AHB_DMA_IN_DSCR_ERR_CH3_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_RAW    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_RAW_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_RAW_S  3
/* AHB_DMA_IN_ERR_EOF_CH3_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH3_INT_RAW    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH3_INT_RAW_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH3_INT_RAW_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH3_INT_RAW_S  2
/* AHB_DMA_IN_SUC_EOF_CH3_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH3_INT_RAW    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH3_INT_RAW_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH3_INT_RAW_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH3_INT_RAW_S  1
/* AHB_DMA_IN_DONE_CH3_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH3_INT_RAW    (BIT(0))
#define AHB_DMA_IN_DONE_CH3_INT_RAW_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH3_INT_RAW_V  0x1
#define AHB_DMA_IN_DONE_CH3_INT_RAW_S  0

#define AHB_DMA_IN_INT_ST_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x34)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ST    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ST_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ST_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ST_S  7
/* AHB_DMA_INFIFO_UDF_CH3_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH3_INT_ST    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH3_INT_ST_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH3_INT_ST_V  0x1
#define AHB_DMA_INFIFO_UDF_CH3_INT_ST_S  6
/* AHB_DMA_INFIFO_OVF_CH3_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH3_INT_ST    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH3_INT_ST_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH3_INT_ST_V  0x1
#define AHB_DMA_INFIFO_OVF_CH3_INT_ST_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ST    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ST_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ST_S  4
/* AHB_DMA_IN_DSCR_ERR_CH3_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_ST    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_ST_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_ST_S  3
/* AHB_DMA_IN_ERR_EOF_CH3_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH3_INT_ST    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH3_INT_ST_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH3_INT_ST_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH3_INT_ST_S  2
/* AHB_DMA_IN_SUC_EOF_CH3_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH3_INT_ST    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH3_INT_ST_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH3_INT_ST_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH3_INT_ST_S  1
/* AHB_DMA_IN_DONE_CH3_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH3_INT_ST    (BIT(0))
#define AHB_DMA_IN_DONE_CH3_INT_ST_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH3_INT_ST_V  0x1
#define AHB_DMA_IN_DONE_CH3_INT_ST_S  0

#define AHB_DMA_IN_INT_ENA_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x38)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ENA    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ENA_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ENA_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_ENA_S  7
/* AHB_DMA_INFIFO_UDF_CH3_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH3_INT_ENA    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH3_INT_ENA_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH3_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_UDF_CH3_INT_ENA_S  6
/* AHB_DMA_INFIFO_OVF_CH3_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH3_INT_ENA    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH3_INT_ENA_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH3_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_OVF_CH3_INT_ENA_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ENA    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ENA_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_ENA_S  4
/* AHB_DMA_IN_DSCR_ERR_CH3_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_ENA    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_ENA_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_ENA_S  3
/* AHB_DMA_IN_ERR_EOF_CH3_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH3_INT_ENA    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH3_INT_ENA_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH3_INT_ENA_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH3_INT_ENA_S  2
/* AHB_DMA_IN_SUC_EOF_CH3_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH3_INT_ENA    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH3_INT_ENA_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH3_INT_ENA_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH3_INT_ENA_S  1
/* AHB_DMA_IN_DONE_CH3_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH3_INT_ENA    (BIT(0))
#define AHB_DMA_IN_DONE_CH3_INT_ENA_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH3_INT_ENA_V  0x1
#define AHB_DMA_IN_DONE_CH3_INT_ENA_S  0

#define AHB_DMA_IN_INT_CLR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x3C)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_CLR    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_CLR_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_CLR_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH3_INT_CLR_S  7
/* AHB_DMA_INFIFO_UDF_CH3_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH3_INT_CLR    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH3_INT_CLR_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH3_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_UDF_CH3_INT_CLR_S  6
/* AHB_DMA_INFIFO_OVF_CH3_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH3_INT_CLR    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH3_INT_CLR_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH3_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_OVF_CH3_INT_CLR_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH3_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_CLR    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_CLR_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH3_INT_CLR_S  4
/* AHB_DMA_IN_DSCR_ERR_CH3_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_CLR    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_CLR_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH3_INT_CLR_S  3
/* AHB_DMA_IN_ERR_EOF_CH3_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH3_INT_CLR    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH3_INT_CLR_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH3_INT_CLR_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH3_INT_CLR_S  2
/* AHB_DMA_IN_SUC_EOF_CH3_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH3_INT_CLR    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH3_INT_CLR_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH3_INT_CLR_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH3_INT_CLR_S  1
/* AHB_DMA_IN_DONE_CH3_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH3_INT_CLR    (BIT(0))
#define AHB_DMA_IN_DONE_CH3_INT_CLR_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH3_INT_CLR_V  0x1
#define AHB_DMA_IN_DONE_CH3_INT_CLR_S  0

#define AHB_DMA_IN_INT_RAW_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x40)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_RAW : R/WTC/SS ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_RAW    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_RAW_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_RAW_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_RAW_S  7
/* AHB_DMA_INFIFO_UDF_CH4_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH4_INT_RAW    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH4_INT_RAW_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH4_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_UDF_CH4_INT_RAW_S  6
/* AHB_DMA_INFIFO_OVF_CH4_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH4_INT_RAW    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH4_INT_RAW_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH4_INT_RAW_V  0x1
#define AHB_DMA_INFIFO_OVF_CH4_INT_RAW_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH4_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_RAW    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_RAW_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_RAW_S  4
/* AHB_DMA_IN_DSCR_ERR_CH4_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_RAW    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_RAW_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_RAW_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_RAW_S  3
/* AHB_DMA_IN_ERR_EOF_CH4_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH4_INT_RAW    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH4_INT_RAW_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH4_INT_RAW_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH4_INT_RAW_S  2
/* AHB_DMA_IN_SUC_EOF_CH4_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH4_INT_RAW    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH4_INT_RAW_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH4_INT_RAW_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH4_INT_RAW_S  1
/* AHB_DMA_IN_DONE_CH4_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH4_INT_RAW    (BIT(0))
#define AHB_DMA_IN_DONE_CH4_INT_RAW_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH4_INT_RAW_V  0x1
#define AHB_DMA_IN_DONE_CH4_INT_RAW_S  0

#define AHB_DMA_IN_INT_ST_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x44)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ST    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ST_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ST_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ST_S  7
/* AHB_DMA_INFIFO_UDF_CH4_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH4_INT_ST    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH4_INT_ST_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH4_INT_ST_V  0x1
#define AHB_DMA_INFIFO_UDF_CH4_INT_ST_S  6
/* AHB_DMA_INFIFO_OVF_CH4_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH4_INT_ST    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH4_INT_ST_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH4_INT_ST_V  0x1
#define AHB_DMA_INFIFO_OVF_CH4_INT_ST_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ST    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ST_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ST_S  4
/* AHB_DMA_IN_DSCR_ERR_CH4_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_ST    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_ST_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_ST_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_ST_S  3
/* AHB_DMA_IN_ERR_EOF_CH4_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH4_INT_ST    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH4_INT_ST_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH4_INT_ST_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH4_INT_ST_S  2
/* AHB_DMA_IN_SUC_EOF_CH4_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH4_INT_ST    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH4_INT_ST_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH4_INT_ST_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH4_INT_ST_S  1
/* AHB_DMA_IN_DONE_CH4_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH4_INT_ST    (BIT(0))
#define AHB_DMA_IN_DONE_CH4_INT_ST_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH4_INT_ST_V  0x1
#define AHB_DMA_IN_DONE_CH4_INT_ST_S  0

#define AHB_DMA_IN_INT_ENA_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x48)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ENA    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ENA_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ENA_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_ENA_S  7
/* AHB_DMA_INFIFO_UDF_CH4_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH4_INT_ENA    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH4_INT_ENA_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH4_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_UDF_CH4_INT_ENA_S  6
/* AHB_DMA_INFIFO_OVF_CH4_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH4_INT_ENA    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH4_INT_ENA_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH4_INT_ENA_V  0x1
#define AHB_DMA_INFIFO_OVF_CH4_INT_ENA_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ENA    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ENA_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_ENA_S  4
/* AHB_DMA_IN_DSCR_ERR_CH4_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_ENA    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_ENA_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_ENA_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_ENA_S  3
/* AHB_DMA_IN_ERR_EOF_CH4_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH4_INT_ENA    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH4_INT_ENA_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH4_INT_ENA_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH4_INT_ENA_S  2
/* AHB_DMA_IN_SUC_EOF_CH4_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH4_INT_ENA    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH4_INT_ENA_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH4_INT_ENA_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH4_INT_ENA_S  1
/* AHB_DMA_IN_DONE_CH4_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH4_INT_ENA    (BIT(0))
#define AHB_DMA_IN_DONE_CH4_INT_ENA_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH4_INT_ENA_V  0x1
#define AHB_DMA_IN_DONE_CH4_INT_ENA_S  0

#define AHB_DMA_IN_INT_CLR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x4C)
/* AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_CLR    (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_CLR_M  (BIT(7))
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_CLR_V  0x1
#define AHB_DMA_IN_AHBINF_RESP_ERR_CH4_INT_CLR_S  7
/* AHB_DMA_INFIFO_UDF_CH4_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_INFIFO_UDF_CH4_INT_CLR    (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH4_INT_CLR_M  (BIT(6))
#define AHB_DMA_INFIFO_UDF_CH4_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_UDF_CH4_INT_CLR_S  6
/* AHB_DMA_INFIFO_OVF_CH4_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_INFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_INFIFO_OVF_CH4_INT_CLR    (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH4_INT_CLR_M  (BIT(5))
#define AHB_DMA_INFIFO_OVF_CH4_INT_CLR_V  0x1
#define AHB_DMA_INFIFO_OVF_CH4_INT_CLR_S  5
/* AHB_DMA_IN_DSCR_EMPTY_CH4_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_EMPTY_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_CLR    (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_CLR_M  (BIT(4))
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_EMPTY_CH4_INT_CLR_S  4
/* AHB_DMA_IN_DSCR_ERR_CH4_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_CLR    (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_CLR_M  (BIT(3))
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_CLR_V  0x1
#define AHB_DMA_IN_DSCR_ERR_CH4_INT_CLR_S  3
/* AHB_DMA_IN_ERR_EOF_CH4_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_ERR_EOF_CH$n_INT..*/
#define AHB_DMA_IN_ERR_EOF_CH4_INT_CLR    (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH4_INT_CLR_M  (BIT(2))
#define AHB_DMA_IN_ERR_EOF_CH4_INT_CLR_V  0x1
#define AHB_DMA_IN_ERR_EOF_CH4_INT_CLR_S  2
/* AHB_DMA_IN_SUC_EOF_CH4_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_SUC_EOF_CH$n_INT..*/
#define AHB_DMA_IN_SUC_EOF_CH4_INT_CLR    (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH4_INT_CLR_M  (BIT(1))
#define AHB_DMA_IN_SUC_EOF_CH4_INT_CLR_V  0x1
#define AHB_DMA_IN_SUC_EOF_CH4_INT_CLR_S  1
/* AHB_DMA_IN_DONE_CH4_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_IN_DONE_CH$n_INT..*/
#define AHB_DMA_IN_DONE_CH4_INT_CLR    (BIT(0))
#define AHB_DMA_IN_DONE_CH4_INT_CLR_M  (BIT(0))
#define AHB_DMA_IN_DONE_CH4_INT_CLR_V  0x1
#define AHB_DMA_IN_DONE_CH4_INT_CLR_S  0

#define AHB_DMA_OUT_INT_RAW_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x50)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_RAW    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_RAW_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_RAW_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_RAW_S  6
/* AHB_DMA_OUTFIFO_UDF_CH0_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_RAW    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_RAW_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_RAW_S  5
/* AHB_DMA_OUTFIFO_OVF_CH0_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_RAW    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_RAW_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_RAW_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH0_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_RAW    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_RAW_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_RAW_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_RAW_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH0_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_RAW    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_RAW_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_RAW_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_RAW_S  2
/* AHB_DMA_OUT_EOF_CH0_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH0_INT_RAW    (BIT(1))
#define AHB_DMA_OUT_EOF_CH0_INT_RAW_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH0_INT_RAW_V  0x1
#define AHB_DMA_OUT_EOF_CH0_INT_RAW_S  1
/* AHB_DMA_OUT_DONE_CH0_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH0_INT_RAW    (BIT(0))
#define AHB_DMA_OUT_DONE_CH0_INT_RAW_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH0_INT_RAW_V  0x1
#define AHB_DMA_OUT_DONE_CH0_INT_RAW_S  0

#define AHB_DMA_OUT_INT_ST_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x54)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ST    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ST_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ST_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ST_S  6
/* AHB_DMA_OUTFIFO_UDF_CH0_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_ST    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_ST_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_ST_S  5
/* AHB_DMA_OUTFIFO_OVF_CH0_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_ST    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_ST_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_ST_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ST    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ST_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ST_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ST_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH0_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_ST    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_ST_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_ST_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_ST_S  2
/* AHB_DMA_OUT_EOF_CH0_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH0_INT_ST    (BIT(1))
#define AHB_DMA_OUT_EOF_CH0_INT_ST_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH0_INT_ST_V  0x1
#define AHB_DMA_OUT_EOF_CH0_INT_ST_S  1
/* AHB_DMA_OUT_DONE_CH0_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH0_INT_ST    (BIT(0))
#define AHB_DMA_OUT_DONE_CH0_INT_ST_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH0_INT_ST_V  0x1
#define AHB_DMA_OUT_DONE_CH0_INT_ST_S  0

#define AHB_DMA_OUT_INT_ENA_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x58)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ENA    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ENA_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ENA_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_ENA_S  6
/* AHB_DMA_OUTFIFO_UDF_CH0_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_ENA    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_ENA_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_ENA_S  5
/* AHB_DMA_OUTFIFO_OVF_CH0_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_ENA    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_ENA_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_ENA_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ENA    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ENA_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ENA_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_ENA_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH0_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_ENA    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_ENA_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_ENA_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_ENA_S  2
/* AHB_DMA_OUT_EOF_CH0_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH0_INT_ENA    (BIT(1))
#define AHB_DMA_OUT_EOF_CH0_INT_ENA_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH0_INT_ENA_V  0x1
#define AHB_DMA_OUT_EOF_CH0_INT_ENA_S  1
/* AHB_DMA_OUT_DONE_CH0_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH0_INT_ENA    (BIT(0))
#define AHB_DMA_OUT_DONE_CH0_INT_ENA_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH0_INT_ENA_V  0x1
#define AHB_DMA_OUT_DONE_CH0_INT_ENA_S  0

#define AHB_DMA_OUT_INT_CLR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x5C)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_CLR    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_CLR_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_CLR_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH0_INT_CLR_S  6
/* AHB_DMA_OUTFIFO_UDF_CH0_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_CLR    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_CLR_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH0_INT_CLR_S  5
/* AHB_DMA_OUTFIFO_OVF_CH0_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_CLR    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_CLR_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH0_INT_CLR_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH0_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_CLR    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_CLR_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_CLR_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH0_INT_CLR_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH0_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_CLR    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_CLR_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_CLR_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH0_INT_CLR_S  2
/* AHB_DMA_OUT_EOF_CH0_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH0_INT_CLR    (BIT(1))
#define AHB_DMA_OUT_EOF_CH0_INT_CLR_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH0_INT_CLR_V  0x1
#define AHB_DMA_OUT_EOF_CH0_INT_CLR_S  1
/* AHB_DMA_OUT_DONE_CH0_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH0_INT_CLR    (BIT(0))
#define AHB_DMA_OUT_DONE_CH0_INT_CLR_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH0_INT_CLR_V  0x1
#define AHB_DMA_OUT_DONE_CH0_INT_CLR_S  0

#define AHB_DMA_OUT_INT_RAW_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x60)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_RAW    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_RAW_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_RAW_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_RAW_S  6
/* AHB_DMA_OUTFIFO_UDF_CH1_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_RAW    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_RAW_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_RAW_S  5
/* AHB_DMA_OUTFIFO_OVF_CH1_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_RAW    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_RAW_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_RAW_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH1_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_RAW    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_RAW_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_RAW_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_RAW_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH1_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_RAW    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_RAW_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_RAW_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_RAW_S  2
/* AHB_DMA_OUT_EOF_CH1_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH1_INT_RAW    (BIT(1))
#define AHB_DMA_OUT_EOF_CH1_INT_RAW_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH1_INT_RAW_V  0x1
#define AHB_DMA_OUT_EOF_CH1_INT_RAW_S  1
/* AHB_DMA_OUT_DONE_CH1_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH1_INT_RAW    (BIT(0))
#define AHB_DMA_OUT_DONE_CH1_INT_RAW_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH1_INT_RAW_V  0x1
#define AHB_DMA_OUT_DONE_CH1_INT_RAW_S  0

#define AHB_DMA_OUT_INT_ST_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x64)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ST    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ST_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ST_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ST_S  6
/* AHB_DMA_OUTFIFO_UDF_CH1_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_ST    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_ST_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_ST_S  5
/* AHB_DMA_OUTFIFO_OVF_CH1_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_ST    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_ST_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_ST_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ST    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ST_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ST_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ST_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH1_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_ST    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_ST_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_ST_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_ST_S  2
/* AHB_DMA_OUT_EOF_CH1_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH1_INT_ST    (BIT(1))
#define AHB_DMA_OUT_EOF_CH1_INT_ST_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH1_INT_ST_V  0x1
#define AHB_DMA_OUT_EOF_CH1_INT_ST_S  1
/* AHB_DMA_OUT_DONE_CH1_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH1_INT_ST    (BIT(0))
#define AHB_DMA_OUT_DONE_CH1_INT_ST_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH1_INT_ST_V  0x1
#define AHB_DMA_OUT_DONE_CH1_INT_ST_S  0

#define AHB_DMA_OUT_INT_ENA_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x68)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ENA    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ENA_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ENA_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_ENA_S  6
/* AHB_DMA_OUTFIFO_UDF_CH1_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_ENA    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_ENA_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_ENA_S  5
/* AHB_DMA_OUTFIFO_OVF_CH1_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_ENA    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_ENA_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_ENA_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ENA    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ENA_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ENA_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_ENA_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH1_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_ENA    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_ENA_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_ENA_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_ENA_S  2
/* AHB_DMA_OUT_EOF_CH1_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH1_INT_ENA    (BIT(1))
#define AHB_DMA_OUT_EOF_CH1_INT_ENA_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH1_INT_ENA_V  0x1
#define AHB_DMA_OUT_EOF_CH1_INT_ENA_S  1
/* AHB_DMA_OUT_DONE_CH1_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH1_INT_ENA    (BIT(0))
#define AHB_DMA_OUT_DONE_CH1_INT_ENA_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH1_INT_ENA_V  0x1
#define AHB_DMA_OUT_DONE_CH1_INT_ENA_S  0

#define AHB_DMA_OUT_INT_CLR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x6C)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_CLR    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_CLR_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_CLR_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH1_INT_CLR_S  6
/* AHB_DMA_OUTFIFO_UDF_CH1_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_CLR    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_CLR_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH1_INT_CLR_S  5
/* AHB_DMA_OUTFIFO_OVF_CH1_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_CLR    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_CLR_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH1_INT_CLR_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH1_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_CLR    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_CLR_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_CLR_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH1_INT_CLR_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH1_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_CLR    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_CLR_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_CLR_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH1_INT_CLR_S  2
/* AHB_DMA_OUT_EOF_CH1_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH1_INT_CLR    (BIT(1))
#define AHB_DMA_OUT_EOF_CH1_INT_CLR_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH1_INT_CLR_V  0x1
#define AHB_DMA_OUT_EOF_CH1_INT_CLR_S  1
/* AHB_DMA_OUT_DONE_CH1_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH1_INT_CLR    (BIT(0))
#define AHB_DMA_OUT_DONE_CH1_INT_CLR_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH1_INT_CLR_V  0x1
#define AHB_DMA_OUT_DONE_CH1_INT_CLR_S  0

#define AHB_DMA_OUT_INT_RAW_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x70)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_RAW    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_RAW_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_RAW_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_RAW_S  6
/* AHB_DMA_OUTFIFO_UDF_CH2_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_RAW    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_RAW_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_RAW_S  5
/* AHB_DMA_OUTFIFO_OVF_CH2_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_RAW    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_RAW_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_RAW_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH2_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_RAW    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_RAW_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_RAW_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_RAW_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH2_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_RAW    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_RAW_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_RAW_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_RAW_S  2
/* AHB_DMA_OUT_EOF_CH2_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH2_INT_RAW    (BIT(1))
#define AHB_DMA_OUT_EOF_CH2_INT_RAW_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH2_INT_RAW_V  0x1
#define AHB_DMA_OUT_EOF_CH2_INT_RAW_S  1
/* AHB_DMA_OUT_DONE_CH2_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH2_INT_RAW    (BIT(0))
#define AHB_DMA_OUT_DONE_CH2_INT_RAW_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH2_INT_RAW_V  0x1
#define AHB_DMA_OUT_DONE_CH2_INT_RAW_S  0

#define AHB_DMA_OUT_INT_ST_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x74)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ST    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ST_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ST_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ST_S  6
/* AHB_DMA_OUTFIFO_UDF_CH2_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_ST    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_ST_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_ST_S  5
/* AHB_DMA_OUTFIFO_OVF_CH2_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_ST    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_ST_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_ST_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ST    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ST_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ST_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ST_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH2_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_ST    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_ST_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_ST_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_ST_S  2
/* AHB_DMA_OUT_EOF_CH2_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH2_INT_ST    (BIT(1))
#define AHB_DMA_OUT_EOF_CH2_INT_ST_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH2_INT_ST_V  0x1
#define AHB_DMA_OUT_EOF_CH2_INT_ST_S  1
/* AHB_DMA_OUT_DONE_CH2_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH2_INT_ST    (BIT(0))
#define AHB_DMA_OUT_DONE_CH2_INT_ST_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH2_INT_ST_V  0x1
#define AHB_DMA_OUT_DONE_CH2_INT_ST_S  0

#define AHB_DMA_OUT_INT_ENA_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x78)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ENA    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ENA_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ENA_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_ENA_S  6
/* AHB_DMA_OUTFIFO_UDF_CH2_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_ENA    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_ENA_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_ENA_S  5
/* AHB_DMA_OUTFIFO_OVF_CH2_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_ENA    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_ENA_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_ENA_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ENA    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ENA_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ENA_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_ENA_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH2_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_ENA    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_ENA_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_ENA_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_ENA_S  2
/* AHB_DMA_OUT_EOF_CH2_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH2_INT_ENA    (BIT(1))
#define AHB_DMA_OUT_EOF_CH2_INT_ENA_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH2_INT_ENA_V  0x1
#define AHB_DMA_OUT_EOF_CH2_INT_ENA_S  1
/* AHB_DMA_OUT_DONE_CH2_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH2_INT_ENA    (BIT(0))
#define AHB_DMA_OUT_DONE_CH2_INT_ENA_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH2_INT_ENA_V  0x1
#define AHB_DMA_OUT_DONE_CH2_INT_ENA_S  0

#define AHB_DMA_OUT_INT_CLR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x7C)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_CLR    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_CLR_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_CLR_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH2_INT_CLR_S  6
/* AHB_DMA_OUTFIFO_UDF_CH2_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_CLR    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_CLR_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH2_INT_CLR_S  5
/* AHB_DMA_OUTFIFO_OVF_CH2_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_CLR    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_CLR_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH2_INT_CLR_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH2_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_CLR    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_CLR_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_CLR_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH2_INT_CLR_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH2_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_CLR    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_CLR_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_CLR_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH2_INT_CLR_S  2
/* AHB_DMA_OUT_EOF_CH2_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH2_INT_CLR    (BIT(1))
#define AHB_DMA_OUT_EOF_CH2_INT_CLR_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH2_INT_CLR_V  0x1
#define AHB_DMA_OUT_EOF_CH2_INT_CLR_S  1
/* AHB_DMA_OUT_DONE_CH2_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH2_INT_CLR    (BIT(0))
#define AHB_DMA_OUT_DONE_CH2_INT_CLR_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH2_INT_CLR_V  0x1
#define AHB_DMA_OUT_DONE_CH2_INT_CLR_S  0

#define AHB_DMA_OUT_INT_RAW_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x80)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_RAW    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_RAW_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_RAW_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_RAW_S  6
/* AHB_DMA_OUTFIFO_UDF_CH3_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_RAW    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_RAW_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_RAW_S  5
/* AHB_DMA_OUTFIFO_OVF_CH3_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_RAW    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_RAW_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_RAW_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH3_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_RAW    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_RAW_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_RAW_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_RAW_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH3_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_RAW    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_RAW_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_RAW_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_RAW_S  2
/* AHB_DMA_OUT_EOF_CH3_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH3_INT_RAW    (BIT(1))
#define AHB_DMA_OUT_EOF_CH3_INT_RAW_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH3_INT_RAW_V  0x1
#define AHB_DMA_OUT_EOF_CH3_INT_RAW_S  1
/* AHB_DMA_OUT_DONE_CH3_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH3_INT_RAW    (BIT(0))
#define AHB_DMA_OUT_DONE_CH3_INT_RAW_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH3_INT_RAW_V  0x1
#define AHB_DMA_OUT_DONE_CH3_INT_RAW_S  0

#define AHB_DMA_OUT_INT_ST_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x84)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ST    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ST_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ST_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ST_S  6
/* AHB_DMA_OUTFIFO_UDF_CH3_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_ST    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_ST_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_ST_S  5
/* AHB_DMA_OUTFIFO_OVF_CH3_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_ST    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_ST_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_ST_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ST    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ST_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ST_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ST_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH3_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_ST    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_ST_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_ST_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_ST_S  2
/* AHB_DMA_OUT_EOF_CH3_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH3_INT_ST    (BIT(1))
#define AHB_DMA_OUT_EOF_CH3_INT_ST_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH3_INT_ST_V  0x1
#define AHB_DMA_OUT_EOF_CH3_INT_ST_S  1
/* AHB_DMA_OUT_DONE_CH3_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH3_INT_ST    (BIT(0))
#define AHB_DMA_OUT_DONE_CH3_INT_ST_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH3_INT_ST_V  0x1
#define AHB_DMA_OUT_DONE_CH3_INT_ST_S  0

#define AHB_DMA_OUT_INT_ENA_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x88)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ENA    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ENA_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ENA_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_ENA_S  6
/* AHB_DMA_OUTFIFO_UDF_CH3_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_ENA    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_ENA_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_ENA_S  5
/* AHB_DMA_OUTFIFO_OVF_CH3_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_ENA    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_ENA_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_ENA_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ENA    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ENA_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ENA_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_ENA_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH3_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_ENA    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_ENA_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_ENA_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_ENA_S  2
/* AHB_DMA_OUT_EOF_CH3_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH3_INT_ENA    (BIT(1))
#define AHB_DMA_OUT_EOF_CH3_INT_ENA_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH3_INT_ENA_V  0x1
#define AHB_DMA_OUT_EOF_CH3_INT_ENA_S  1
/* AHB_DMA_OUT_DONE_CH3_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH3_INT_ENA    (BIT(0))
#define AHB_DMA_OUT_DONE_CH3_INT_ENA_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH3_INT_ENA_V  0x1
#define AHB_DMA_OUT_DONE_CH3_INT_ENA_S  0

#define AHB_DMA_OUT_INT_CLR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x8C)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_CLR    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_CLR_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_CLR_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH3_INT_CLR_S  6
/* AHB_DMA_OUTFIFO_UDF_CH3_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_CLR    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_CLR_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH3_INT_CLR_S  5
/* AHB_DMA_OUTFIFO_OVF_CH3_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_CLR    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_CLR_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH3_INT_CLR_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH3_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_CLR    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_CLR_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_CLR_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH3_INT_CLR_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH3_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_CLR    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_CLR_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_CLR_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH3_INT_CLR_S  2
/* AHB_DMA_OUT_EOF_CH3_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH3_INT_CLR    (BIT(1))
#define AHB_DMA_OUT_EOF_CH3_INT_CLR_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH3_INT_CLR_V  0x1
#define AHB_DMA_OUT_EOF_CH3_INT_CLR_S  1
/* AHB_DMA_OUT_DONE_CH3_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH3_INT_CLR    (BIT(0))
#define AHB_DMA_OUT_DONE_CH3_INT_CLR_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH3_INT_CLR_V  0x1
#define AHB_DMA_OUT_DONE_CH3_INT_CLR_S  0

#define AHB_DMA_OUT_INT_RAW_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x90)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_RAW    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_RAW_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_RAW_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_RAW_S  6
/* AHB_DMA_OUTFIFO_UDF_CH4_INT_RAW : R/WTC/SS ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_RAW    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_RAW_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_RAW_S  5
/* AHB_DMA_OUTFIFO_OVF_CH4_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_RAW    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_RAW_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_RAW_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_RAW_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH4_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_RAW    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_RAW_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_RAW_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_RAW_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH4_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_RAW    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_RAW_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_RAW_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_RAW_S  2
/* AHB_DMA_OUT_EOF_CH4_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH4_INT_RAW    (BIT(1))
#define AHB_DMA_OUT_EOF_CH4_INT_RAW_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH4_INT_RAW_V  0x1
#define AHB_DMA_OUT_EOF_CH4_INT_RAW_S  1
/* AHB_DMA_OUT_DONE_CH4_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The raw interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH4_INT_RAW    (BIT(0))
#define AHB_DMA_OUT_DONE_CH4_INT_RAW_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH4_INT_RAW_V  0x1
#define AHB_DMA_OUT_DONE_CH4_INT_RAW_S  0

#define AHB_DMA_OUT_INT_ST_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x94)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ST    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ST_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ST_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ST_S  6
/* AHB_DMA_OUTFIFO_UDF_CH4_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_ST    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_ST_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_ST_S  5
/* AHB_DMA_OUTFIFO_OVF_CH4_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_ST    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_ST_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_ST_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_ST_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ST    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ST_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ST_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ST_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH4_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_ST    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_ST_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_ST_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_ST_S  2
/* AHB_DMA_OUT_EOF_CH4_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH4_INT_ST    (BIT(1))
#define AHB_DMA_OUT_EOF_CH4_INT_ST_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH4_INT_ST_V  0x1
#define AHB_DMA_OUT_EOF_CH4_INT_ST_S  1
/* AHB_DMA_OUT_DONE_CH4_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  The masked interrupt status of AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH4_INT_ST    (BIT(0))
#define AHB_DMA_OUT_DONE_CH4_INT_ST_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH4_INT_ST_V  0x1
#define AHB_DMA_OUT_DONE_CH4_INT_ST_S  0

#define AHB_DMA_OUT_INT_ENA_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x98)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ENA    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ENA_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ENA_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_ENA_S  6
/* AHB_DMA_OUTFIFO_UDF_CH4_INT_ENA : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_ENA    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_ENA_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_ENA_S  5
/* AHB_DMA_OUTFIFO_OVF_CH4_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_ENA    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_ENA_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_ENA_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_ENA_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ENA    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ENA_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ENA_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_ENA_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH4_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_ENA    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_ENA_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_ENA_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_ENA_S  2
/* AHB_DMA_OUT_EOF_CH4_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH4_INT_ENA    (BIT(1))
#define AHB_DMA_OUT_EOF_CH4_INT_ENA_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH4_INT_ENA_V  0x1
#define AHB_DMA_OUT_EOF_CH4_INT_ENA_S  1
/* AHB_DMA_OUT_DONE_CH4_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to enable AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH4_INT_ENA    (BIT(0))
#define AHB_DMA_OUT_DONE_CH4_INT_ENA_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH4_INT_ENA_V  0x1
#define AHB_DMA_OUT_DONE_CH4_INT_ENA_S  0

#define AHB_DMA_OUT_INT_CLR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x9C)
/* AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_RESP_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_CLR    (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_CLR_M  (BIT(6))
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_CLR_V  0x1
#define AHB_DMA_OUT_AHBINF_RESP_ERR_CH4_INT_CLR_S  6
/* AHB_DMA_OUTFIFO_UDF_CH4_INT_CLR : WT ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_UDF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_CLR    (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_CLR_M  (BIT(5))
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_UDF_CH4_INT_CLR_S  5
/* AHB_DMA_OUTFIFO_OVF_CH4_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUTFIFO_OVF_CH$n_INT..*/
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_CLR    (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_CLR_M  (BIT(4))
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_CLR_V  0x1
#define AHB_DMA_OUTFIFO_OVF_CH4_INT_CLR_S  4
/* AHB_DMA_OUT_TOTAL_EOF_CH4_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_TOTAL_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_CLR    (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_CLR_M  (BIT(3))
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_CLR_V  0x1
#define AHB_DMA_OUT_TOTAL_EOF_CH4_INT_CLR_S  3
/* AHB_DMA_OUT_DSCR_ERR_CH4_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DSCR_ERR_CH$n_INT..*/
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_CLR    (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_CLR_M  (BIT(2))
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_CLR_V  0x1
#define AHB_DMA_OUT_DSCR_ERR_CH4_INT_CLR_S  2
/* AHB_DMA_OUT_EOF_CH4_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_EOF_CH$n_INT..*/
#define AHB_DMA_OUT_EOF_CH4_INT_CLR    (BIT(1))
#define AHB_DMA_OUT_EOF_CH4_INT_CLR_M  (BIT(1))
#define AHB_DMA_OUT_EOF_CH4_INT_CLR_V  0x1
#define AHB_DMA_OUT_EOF_CH4_INT_CLR_S  1
/* AHB_DMA_OUT_DONE_CH4_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 to clear AHB_DMA_OUT_DONE_CH$n_INT..*/
#define AHB_DMA_OUT_DONE_CH4_INT_CLR    (BIT(0))
#define AHB_DMA_OUT_DONE_CH4_INT_CLR_M  (BIT(0))
#define AHB_DMA_OUT_DONE_CH4_INT_CLR_V  0x1
#define AHB_DMA_OUT_DONE_CH4_INT_CLR_S  0

#define AHB_DMA_AHB_TEST_REG          (DR_REG_AHB_DMA_BASE + 0xA0)
/* AHB_DMA_AHB_TESTADDR : R/W ;bitpos:[5:4] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_AHB_TESTADDR    0x00000003
#define AHB_DMA_AHB_TESTADDR_M  ((AHB_DMA_AHB_TESTADDR_V)<<(AHB_DMA_AHB_TESTADDR_S))
#define AHB_DMA_AHB_TESTADDR_V  0x3
#define AHB_DMA_AHB_TESTADDR_S  4
/* AHB_DMA_AHB_TESTMODE : R/W ;bitpos:[2:0] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_AHB_TESTMODE    0x00000007
#define AHB_DMA_AHB_TESTMODE_M  ((AHB_DMA_AHB_TESTMODE_V)<<(AHB_DMA_AHB_TESTMODE_S))
#define AHB_DMA_AHB_TESTMODE_V  0x7
#define AHB_DMA_AHB_TESTMODE_S  0

#define AHB_DMA_MISC_CONF_REG          (DR_REG_AHB_DMA_BASE + 0xA4)
/* AHB_DMA_CLK_EN : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Configures clock gating.\\0: Support clock only when the application writes reg
isters.\\ 1: Always force the clock on for registers.\\.*/
#define AHB_DMA_CLK_EN    (BIT(3))
#define AHB_DMA_CLK_EN_M  (BIT(3))
#define AHB_DMA_CLK_EN_V  0x1
#define AHB_DMA_CLK_EN_S  3
/* AHB_DMA_ARB_PRI_DIS : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to disable the fixed-priority channel arbitration.\\0: Enabl
e\\1: Disable\\.*/
#define AHB_DMA_ARB_PRI_DIS    (BIT(2))
#define AHB_DMA_ARB_PRI_DIS_M  (BIT(2))
#define AHB_DMA_ARB_PRI_DIS_V  0x1
#define AHB_DMA_ARB_PRI_DIS_S  2
/* AHB_DMA_AHBM_RST_INTER : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Write 1 and then 0 to reset the internal AHB FSM..*/
#define AHB_DMA_AHBM_RST_INTER    (BIT(0))
#define AHB_DMA_AHBM_RST_INTER_M  (BIT(0))
#define AHB_DMA_AHBM_RST_INTER_V  0x1
#define AHB_DMA_AHBM_RST_INTER_S  0

#define AHB_DMA_DATE_REG          (DR_REG_AHB_DMA_BASE + 0xA8)
/* AHB_DMA_DATE : R/W ;bitpos:[31:0] ;default: 32'h2407310 ; */
/*description:  Version control register..*/
#define AHB_DMA_DATE    0xFFFFFFFF
#define AHB_DMA_DATE_M  ((AHB_DMA_DATE_V)<<(AHB_DMA_DATE_S))
#define AHB_DMA_DATE_V  0xFFFFFFFF
#define AHB_DMA_DATE_S  0

#define AHB_DMA_IN_CONF0_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x100)
/* AHB_DMA_IN_DATA_BURST_MODE_SEL_CH0 : R/W ;bitpos:[7:6] ;default: 2'b0 ; */
/*description:  Configures max burst size for Rx channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH0    0x00000003
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH0_M  ((AHB_DMA_IN_DATA_BURST_MODE_SEL_CH0_V)<<(AHB_DMA_IN_DATA_BURST_MODE_SEL_CH0_S))
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH0_V  0x3
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH0_S  6
/* AHB_DMA_IN_ETM_EN_CH0 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for RX channel$n.\\0: Disable\\1: Enab
le\\.*/
#define AHB_DMA_IN_ETM_EN_CH0    (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH0_M  (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH0_V  0x1
#define AHB_DMA_IN_ETM_EN_CH0_S  5
/* AHB_DMA_MEM_TRANS_EN_CH0 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable memory-to-memory data transfer.\\0: Disable\\1: En
able\\.*/
#define AHB_DMA_MEM_TRANS_EN_CH0    (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH0_M  (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH0_V  0x1
#define AHB_DMA_MEM_TRANS_EN_CH0_S  4
/* AHB_DMA_INDSCR_BURST_EN_CH0 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for RX channel $n to read desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_INDSCR_BURST_EN_CH0    (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH0_M  (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH0_V  0x1
#define AHB_DMA_INDSCR_BURST_EN_CH0_S  2
/* AHB_DMA_IN_LOOP_TEST_CH0 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_IN_LOOP_TEST_CH0    (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH0_M  (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH0_V  0x1
#define AHB_DMA_IN_LOOP_TEST_CH0_S  1
/* AHB_DMA_IN_RST_CH0 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  Write 1 and then 0 to reset AHB_DMA channel 0 RX FSM and RX FIFO pointer..*/
#define AHB_DMA_IN_RST_CH0    (BIT(0))
#define AHB_DMA_IN_RST_CH0_M  (BIT(0))
#define AHB_DMA_IN_RST_CH0_V  0x1
#define AHB_DMA_IN_RST_CH0_S  0

#define AHB_DMA_IN_CONF1_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x104)
/* AHB_DMA_IN_CHECK_OWNER_CH0 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for RX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_IN_CHECK_OWNER_CH0    (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH0_M  (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH0_V  0x1
#define AHB_DMA_IN_CHECK_OWNER_CH0_S  12

#define AHB_DMA_INFIFO_STATUS_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x108)
/* AHB_DMA_IN_BUF_HUNGRY_CH0 : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_BUF_HUNGRY_CH0    (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH0_M  (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH0_V  0x1
#define AHB_DMA_IN_BUF_HUNGRY_CH0_S  27
/* AHB_DMA_IN_REMAIN_UNDER_4B_CH0 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH0    (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH0_M  (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH0_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH0_S  26
/* AHB_DMA_IN_REMAIN_UNDER_3B_CH0 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH0    (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH0_M  (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH0_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH0_S  25
/* AHB_DMA_IN_REMAIN_UNDER_2B_CH0 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH0    (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH0_M  (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH0_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH0_S  24
/* AHB_DMA_IN_REMAIN_UNDER_1B_CH0 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH0    (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH0_M  (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH0_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH0_S  23
/* AHB_DMA_INFIFO_CNT_CH0 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 RX FIFO for RX channel $n..*/
#define AHB_DMA_INFIFO_CNT_CH0    0x0000007F
#define AHB_DMA_INFIFO_CNT_CH0_M  ((AHB_DMA_INFIFO_CNT_CH0_V)<<(AHB_DMA_INFIFO_CNT_CH0_S))
#define AHB_DMA_INFIFO_CNT_CH0_V  0x7F
#define AHB_DMA_INFIFO_CNT_CH0_S  8
/* AHB_DMA_INFIFO_EMPTY_CH0 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_INFIFO_EMPTY_CH0    (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH0_M  (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH0_V  0x1
#define AHB_DMA_INFIFO_EMPTY_CH0_S  1
/* AHB_DMA_INFIFO_FULL_CH0 : RO ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_INFIFO_FULL_CH0    (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH0_M  (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH0_V  0x1
#define AHB_DMA_INFIFO_FULL_CH0_S  0

#define AHB_DMA_IN_POP_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x10C)
/* AHB_DMA_INFIFO_POP_CH0 : WT ;bitpos:[12] ;default: 1'h0 ; */
/*description:  Configures whether to pop data from AHB_DMA FIFO.\\0: Invalid. No effect\\1: Po
p\\.*/
#define AHB_DMA_INFIFO_POP_CH0    (BIT(12))
#define AHB_DMA_INFIFO_POP_CH0_M  (BIT(12))
#define AHB_DMA_INFIFO_POP_CH0_V  0x1
#define AHB_DMA_INFIFO_POP_CH0_S  12
/* AHB_DMA_INFIFO_RDATA_CH0 : RO ;bitpos:[11:0] ;default: 12'h800 ; */
/*description:  Represents the data popped from AHB_DMA FIFO..*/
#define AHB_DMA_INFIFO_RDATA_CH0    0x00000FFF
#define AHB_DMA_INFIFO_RDATA_CH0_M  ((AHB_DMA_INFIFO_RDATA_CH0_V)<<(AHB_DMA_INFIFO_RDATA_CH0_S))
#define AHB_DMA_INFIFO_RDATA_CH0_V  0xFFF
#define AHB_DMA_INFIFO_RDATA_CH0_S  0

#define AHB_DMA_IN_LINK_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x110)
/* AHB_DMA_INLINK_PARK_CH0 : RO ;bitpos:[4] ;default: 1'h1 ; */
/*description:  Represents the status of the receive descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_INLINK_PARK_CH0    (BIT(4))
#define AHB_DMA_INLINK_PARK_CH0_M  (BIT(4))
#define AHB_DMA_INLINK_PARK_CH0_V  0x1
#define AHB_DMA_INLINK_PARK_CH0_S  4
/* AHB_DMA_INLINK_RESTART_CH0 : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Configures whether to restart RX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_INLINK_RESTART_CH0    (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH0_M  (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH0_V  0x1
#define AHB_DMA_INLINK_RESTART_CH0_S  3
/* AHB_DMA_INLINK_START_CH0 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's RX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_INLINK_START_CH0    (BIT(2))
#define AHB_DMA_INLINK_START_CH0_M  (BIT(2))
#define AHB_DMA_INLINK_START_CH0_V  0x1
#define AHB_DMA_INLINK_START_CH0_S  2
/* AHB_DMA_INLINK_STOP_CH0 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's RX channel $n from receiving data.\\0: Inv
alid. No effect\\1: Stop\\.*/
#define AHB_DMA_INLINK_STOP_CH0    (BIT(1))
#define AHB_DMA_INLINK_STOP_CH0_M  (BIT(1))
#define AHB_DMA_INLINK_STOP_CH0_V  0x1
#define AHB_DMA_INLINK_STOP_CH0_S  1
/* AHB_DMA_INLINK_AUTO_RET_CH0 : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Configures whether to return to current receive descriptor's address when there
 are some errors in current receiving data.\\0: Not return\\1: Return\\.*/
#define AHB_DMA_INLINK_AUTO_RET_CH0    (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH0_M  (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH0_V  0x1
#define AHB_DMA_INLINK_AUTO_RET_CH0_S  0

#define AHB_DMA_IN_LINK_ADDR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x114)
/* AHB_DMA_INLINK_ADDR_CH0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_INLINK_ADDR_CH0    0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH0_M  ((AHB_DMA_INLINK_ADDR_CH0_V)<<(AHB_DMA_INLINK_ADDR_CH0_S))
#define AHB_DMA_INLINK_ADDR_CH0_V  0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH0_S  0

#define AHB_DMA_IN_STATE_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x118)
/* AHB_DMA_IN_STATE_CH0 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_STATE_CH0    0x00000007
#define AHB_DMA_IN_STATE_CH0_M  ((AHB_DMA_IN_STATE_CH0_V)<<(AHB_DMA_IN_STATE_CH0_S))
#define AHB_DMA_IN_STATE_CH0_V  0x7
#define AHB_DMA_IN_STATE_CH0_S  20
/* AHB_DMA_IN_DSCR_STATE_CH0 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_DSCR_STATE_CH0    0x00000003
#define AHB_DMA_IN_DSCR_STATE_CH0_M  ((AHB_DMA_IN_DSCR_STATE_CH0_V)<<(AHB_DMA_IN_DSCR_STATE_CH0_S))
#define AHB_DMA_IN_DSCR_STATE_CH0_V  0x3
#define AHB_DMA_IN_DSCR_STATE_CH0_S  18
/* AHB_DMA_INLINK_DSCR_ADDR_CH0 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the address of the lower 18 bits of the next receive descriptor to b
e processed..*/
#define AHB_DMA_INLINK_DSCR_ADDR_CH0    0x0003FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH0_M  ((AHB_DMA_INLINK_DSCR_ADDR_CH0_V)<<(AHB_DMA_INLINK_DSCR_ADDR_CH0_S))
#define AHB_DMA_INLINK_DSCR_ADDR_CH0_V  0x3FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH0_S  0

#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x11C)
/* AHB_DMA_IN_SUC_EOF_DES_ADDR_CH0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when the EOF bit in this descr
iptor is 1..*/
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH0    0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH0_M  ((AHB_DMA_IN_SUC_EOF_DES_ADDR_CH0_V)<<(AHB_DMA_IN_SUC_EOF_DES_ADDR_CH0_S))
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH0_V  0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH0_S  0

#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x120)
/* AHB_DMA_IN_ERR_EOF_DES_ADDR_CH0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when there are some errors in
the currently received data..*/
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH0    0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH0_M  ((AHB_DMA_IN_ERR_EOF_DES_ADDR_CH0_V)<<(AHB_DMA_IN_ERR_EOF_DES_ADDR_CH0_S))
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH0_V  0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH0_S  0

#define AHB_DMA_IN_DONE_DES_ADDR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x124)
/* AHB_DMA_IN_DONE_DES_ADDR_CH0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the inlink descriptor when  this descriptor is comple
ted ..*/
#define AHB_DMA_IN_DONE_DES_ADDR_CH0    0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH0_M  ((AHB_DMA_IN_DONE_DES_ADDR_CH0_V)<<(AHB_DMA_IN_DONE_DES_ADDR_CH0_S))
#define AHB_DMA_IN_DONE_DES_ADDR_CH0_V  0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH0_S  0

#define AHB_DMA_IN_DSCR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x128)
/* AHB_DMA_INLINK_DSCR_CH0 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next receive descriptor x+1 pointed by the curren
t receive descriptor that has already been fetched..*/
#define AHB_DMA_INLINK_DSCR_CH0    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH0_M  ((AHB_DMA_INLINK_DSCR_CH0_V)<<(AHB_DMA_INLINK_DSCR_CH0_S))
#define AHB_DMA_INLINK_DSCR_CH0_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH0_S  0

#define AHB_DMA_IN_DSCR_BF0_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x12C)
/* AHB_DMA_INLINK_DSCR_BF0_CH0 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current receive descriptor x that has already bee
n fetched..*/
#define AHB_DMA_INLINK_DSCR_BF0_CH0    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH0_M  ((AHB_DMA_INLINK_DSCR_BF0_CH0_V)<<(AHB_DMA_INLINK_DSCR_BF0_CH0_S))
#define AHB_DMA_INLINK_DSCR_BF0_CH0_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH0_S  0

#define AHB_DMA_IN_DSCR_BF1_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x130)
/* AHB_DMA_INLINK_DSCR_BF1_CH0 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous receive descriptor x-1 that has already
been fetched..*/
#define AHB_DMA_INLINK_DSCR_BF1_CH0    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH0_M  ((AHB_DMA_INLINK_DSCR_BF1_CH0_V)<<(AHB_DMA_INLINK_DSCR_BF1_CH0_S))
#define AHB_DMA_INLINK_DSCR_BF1_CH0_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH0_S  0

#define AHB_DMA_IN_PRI_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x134)
/* AHB_DMA_RX_PRI_CH0 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of RX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_RX_PRI_CH0    0x0000000F
#define AHB_DMA_RX_PRI_CH0_M  ((AHB_DMA_RX_PRI_CH0_V)<<(AHB_DMA_RX_PRI_CH0_S))
#define AHB_DMA_RX_PRI_CH0_V  0xF
#define AHB_DMA_RX_PRI_CH0_S  0

#define AHB_DMA_IN_PERI_SEL_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x138)
/* AHB_DMA_PERI_IN_SEL_CH0 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to RX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_IN_SEL_CH0    0x0000003F
#define AHB_DMA_PERI_IN_SEL_CH0_M  ((AHB_DMA_PERI_IN_SEL_CH0_V)<<(AHB_DMA_PERI_IN_SEL_CH0_S))
#define AHB_DMA_PERI_IN_SEL_CH0_V  0x3F
#define AHB_DMA_PERI_IN_SEL_CH0_S  0

#define AHB_DMA_RX_CH_ARB_WEIGH_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x13C)
/* AHB_DMA_RX_CH_ARB_WEIGH_CH0 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of RX channel$n.*/
#define AHB_DMA_RX_CH_ARB_WEIGH_CH0    0x0000000F
#define AHB_DMA_RX_CH_ARB_WEIGH_CH0_M  ((AHB_DMA_RX_CH_ARB_WEIGH_CH0_V)<<(AHB_DMA_RX_CH_ARB_WEIGH_CH0_S))
#define AHB_DMA_RX_CH_ARB_WEIGH_CH0_V  0xF
#define AHB_DMA_RX_CH_ARB_WEIGH_CH0_S  0

#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x140)
/* AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH0 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH0    (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH0_M  (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH0_V  0x1
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH0_S  0

#define AHB_DMA_OUT_CONF0_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x180)
/* AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH0 : R/W ;bitpos:[9:8] ;default: 2'b0 ; */
/*description:  Configures max burst size for TX channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH0    0x00000003
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH0_M  ((AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH0_V)<<(AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH0_S))
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH0_V  0x3
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH0_S  8
/* AHB_DMA_OUT_ETM_EN_CH0 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for TX channel $n.\\0: Disable\\1: Ena
ble\\.*/
#define AHB_DMA_OUT_ETM_EN_CH0    (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH0_M  (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH0_V  0x1
#define AHB_DMA_OUT_ETM_EN_CH0_S  6
/* AHB_DMA_OUTDSCR_BURST_EN_CH0 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for TX channel $n reading desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUTDSCR_BURST_EN_CH0    (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH0_M  (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH0_V  0x1
#define AHB_DMA_OUTDSCR_BURST_EN_CH0_S  4
/* AHB_DMA_OUT_EOF_MODE_CH0 : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description:  Configures when to generate EOF flag.\\0: EOF flag for TX channel $n is generat
ed when data to be transmitted has been pushed into FIFO in AHB_DMA.\\ 1: EOF fl
ag for TX channel $n is generated when data to be transmitted has been popped fr
om FIFO in AHB_DMA.\\.*/
#define AHB_DMA_OUT_EOF_MODE_CH0    (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH0_M  (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH0_V  0x1
#define AHB_DMA_OUT_EOF_MODE_CH0_S  3
/* AHB_DMA_OUT_AUTO_WRBACK_CH0 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable automatic outlink write-back when all the data in
TX FIFO has been transmitted.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUT_AUTO_WRBACK_CH0    (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH0_M  (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH0_V  0x1
#define AHB_DMA_OUT_AUTO_WRBACK_CH0_S  2
/* AHB_DMA_OUT_LOOP_TEST_CH0 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_LOOP_TEST_CH0    (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH0_M  (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH0_V  0x1
#define AHB_DMA_OUT_LOOP_TEST_CH0_S  1
/* AHB_DMA_OUT_RST_CH0 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures the reset state of AHB_DMA channel $n TX FSM and TX FIFO pointer.\\0
: Release reset\\1: Reset\\.*/
#define AHB_DMA_OUT_RST_CH0    (BIT(0))
#define AHB_DMA_OUT_RST_CH0_M  (BIT(0))
#define AHB_DMA_OUT_RST_CH0_V  0x1
#define AHB_DMA_OUT_RST_CH0_S  0

#define AHB_DMA_OUT_CONF1_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x184)
/* AHB_DMA_OUT_CHECK_OWNER_CH0 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for TX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_OUT_CHECK_OWNER_CH0    (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH0_M  (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH0_V  0x1
#define AHB_DMA_OUT_CHECK_OWNER_CH0_S  12

#define AHB_DMA_OUTFIFO_STATUS_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x188)
/* AHB_DMA_OUT_REMAIN_UNDER_4B_CH0 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH0    (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH0_M  (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH0_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH0_S  26
/* AHB_DMA_OUT_REMAIN_UNDER_3B_CH0 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH0    (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH0_M  (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH0_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH0_S  25
/* AHB_DMA_OUT_REMAIN_UNDER_2B_CH0 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH0    (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH0_M  (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH0_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH0_S  24
/* AHB_DMA_OUT_REMAIN_UNDER_1B_CH0 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH0    (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH0_M  (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH0_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH0_S  23
/* AHB_DMA_OUTFIFO_CNT_CH0 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 TX FIFO for TX channel $n..*/
#define AHB_DMA_OUTFIFO_CNT_CH0    0x0000007F
#define AHB_DMA_OUTFIFO_CNT_CH0_M  ((AHB_DMA_OUTFIFO_CNT_CH0_V)<<(AHB_DMA_OUTFIFO_CNT_CH0_S))
#define AHB_DMA_OUTFIFO_CNT_CH0_V  0x7F
#define AHB_DMA_OUTFIFO_CNT_CH0_S  8
/* AHB_DMA_OUTFIFO_EMPTY_CH0 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 TX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_OUTFIFO_EMPTY_CH0    (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH0_M  (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH0_V  0x1
#define AHB_DMA_OUTFIFO_EMPTY_CH0_S  1
/* AHB_DMA_OUTFIFO_FULL_CH0 : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Represents whether L1 TX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_OUTFIFO_FULL_CH0    (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH0_M  (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH0_V  0x1
#define AHB_DMA_OUTFIFO_FULL_CH0_S  0

#define AHB_DMA_OUT_PUSH_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x18C)
/* AHB_DMA_OUTFIFO_PUSH_CH0 : WT ;bitpos:[9] ;default: 1'h0 ; */
/*description:  Configures whether to push data into AHB_DMA FIFO.\\0: Invalid. No effect\\1: P
ush\\.*/
#define AHB_DMA_OUTFIFO_PUSH_CH0    (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH0_M  (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH0_V  0x1
#define AHB_DMA_OUTFIFO_PUSH_CH0_S  9
/* AHB_DMA_OUTFIFO_WDATA_CH0 : R/W ;bitpos:[8:0] ;default: 9'h0 ; */
/*description:  Configures the data that need to be pushed into AHB_DMA FIFO..*/
#define AHB_DMA_OUTFIFO_WDATA_CH0    0x000001FF
#define AHB_DMA_OUTFIFO_WDATA_CH0_M  ((AHB_DMA_OUTFIFO_WDATA_CH0_V)<<(AHB_DMA_OUTFIFO_WDATA_CH0_S))
#define AHB_DMA_OUTFIFO_WDATA_CH0_V  0x1FF
#define AHB_DMA_OUTFIFO_WDATA_CH0_S  0

#define AHB_DMA_OUT_LINK_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x190)
/* AHB_DMA_OUTLINK_PARK_CH0 : RO ;bitpos:[3] ;default: 1'h1 ; */
/*description:  Represents the status of the transmit descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_OUTLINK_PARK_CH0    (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH0_M  (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH0_V  0x1
#define AHB_DMA_OUTLINK_PARK_CH0_S  3
/* AHB_DMA_OUTLINK_RESTART_CH0 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to restart TX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_OUTLINK_RESTART_CH0    (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH0_M  (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH0_V  0x1
#define AHB_DMA_OUTLINK_RESTART_CH0_S  2
/* AHB_DMA_OUTLINK_START_CH0 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's TX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_OUTLINK_START_CH0    (BIT(1))
#define AHB_DMA_OUTLINK_START_CH0_M  (BIT(1))
#define AHB_DMA_OUTLINK_START_CH0_V  0x1
#define AHB_DMA_OUTLINK_START_CH0_S  1
/* AHB_DMA_OUTLINK_STOP_CH0 : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's TX channel $n from transmitting data.\\0:
Invalid. No effect\\1: Stop\\.*/
#define AHB_DMA_OUTLINK_STOP_CH0    (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH0_M  (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH0_V  0x1
#define AHB_DMA_OUTLINK_STOP_CH0_S  0

#define AHB_DMA_OUT_LINK_ADDR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x194)
/* AHB_DMA_OUTLINK_ADDR_CH0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_OUTLINK_ADDR_CH0    0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH0_M  ((AHB_DMA_OUTLINK_ADDR_CH0_V)<<(AHB_DMA_OUTLINK_ADDR_CH0_S))
#define AHB_DMA_OUTLINK_ADDR_CH0_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH0_S  0

#define AHB_DMA_OUT_STATE_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x198)
/* AHB_DMA_OUT_STATE_CH0 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_STATE_CH0    0x00000007
#define AHB_DMA_OUT_STATE_CH0_M  ((AHB_DMA_OUT_STATE_CH0_V)<<(AHB_DMA_OUT_STATE_CH0_S))
#define AHB_DMA_OUT_STATE_CH0_V  0x7
#define AHB_DMA_OUT_STATE_CH0_S  20
/* AHB_DMA_OUT_DSCR_STATE_CH0 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_DSCR_STATE_CH0    0x00000003
#define AHB_DMA_OUT_DSCR_STATE_CH0_M  ((AHB_DMA_OUT_DSCR_STATE_CH0_V)<<(AHB_DMA_OUT_DSCR_STATE_CH0_S))
#define AHB_DMA_OUT_DSCR_STATE_CH0_V  0x3
#define AHB_DMA_OUT_DSCR_STATE_CH0_S  18
/* AHB_DMA_OUTLINK_DSCR_ADDR_CH0 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the lower 18 bits of the address of the next transmit descriptor to
be processed..*/
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH0    0x0003FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH0_M  ((AHB_DMA_OUTLINK_DSCR_ADDR_CH0_V)<<(AHB_DMA_OUTLINK_DSCR_ADDR_CH0_S))
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH0_V  0x3FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH0_S  0

#define AHB_DMA_OUT_EOF_DES_ADDR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x19C)
/* AHB_DMA_OUT_EOF_DES_ADDR_CH0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor when the EOF bit in this desc
riptor is 1..*/
#define AHB_DMA_OUT_EOF_DES_ADDR_CH0    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH0_M  ((AHB_DMA_OUT_EOF_DES_ADDR_CH0_V)<<(AHB_DMA_OUT_EOF_DES_ADDR_CH0_S))
#define AHB_DMA_OUT_EOF_DES_ADDR_CH0_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH0_S  0

#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x1A0)
/* AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor before the last transmit desc
riptor..*/
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH0    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH0_M  ((AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH0_V)<<(AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH0_S))
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH0_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH0_S  0

#define AHB_DMA_OUT_DONE_DES_ADDR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x1A4)
/* AHB_DMA_OUT_DONE_DES_ADDR_CH0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the outlink descriptor when this descriptor is comple
ted..*/
#define AHB_DMA_OUT_DONE_DES_ADDR_CH0    0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH0_M  ((AHB_DMA_OUT_DONE_DES_ADDR_CH0_V)<<(AHB_DMA_OUT_DONE_DES_ADDR_CH0_S))
#define AHB_DMA_OUT_DONE_DES_ADDR_CH0_V  0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH0_S  0

#define AHB_DMA_OUT_DSCR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x1A8)
/* AHB_DMA_OUTLINK_DSCR_CH0 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next transmit descriptor y+1 pointed by the curre
nt transmit descriptor that has already been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_CH0    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH0_M  ((AHB_DMA_OUTLINK_DSCR_CH0_V)<<(AHB_DMA_OUTLINK_DSCR_CH0_S))
#define AHB_DMA_OUTLINK_DSCR_CH0_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH0_S  0

#define AHB_DMA_OUT_DSCR_BF0_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x1AC)
/* AHB_DMA_OUTLINK_DSCR_BF0_CH0 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current transmit descriptor y that has already be
en fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF0_CH0    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH0_M  ((AHB_DMA_OUTLINK_DSCR_BF0_CH0_V)<<(AHB_DMA_OUTLINK_DSCR_BF0_CH0_S))
#define AHB_DMA_OUTLINK_DSCR_BF0_CH0_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH0_S  0

#define AHB_DMA_OUT_DSCR_BF1_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x1B0)
/* AHB_DMA_OUTLINK_DSCR_BF1_CH0 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous transmit descriptor y-1 that has already
 been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF1_CH0    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH0_M  ((AHB_DMA_OUTLINK_DSCR_BF1_CH0_V)<<(AHB_DMA_OUTLINK_DSCR_BF1_CH0_S))
#define AHB_DMA_OUTLINK_DSCR_BF1_CH0_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH0_S  0

#define AHB_DMA_OUT_PRI_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x1B4)
/* AHB_DMA_TX_PRI_CH0 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of TX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_TX_PRI_CH0    0x0000000F
#define AHB_DMA_TX_PRI_CH0_M  ((AHB_DMA_TX_PRI_CH0_V)<<(AHB_DMA_TX_PRI_CH0_S))
#define AHB_DMA_TX_PRI_CH0_V  0xF
#define AHB_DMA_TX_PRI_CH0_S  0

#define AHB_DMA_OUT_PERI_SEL_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x1B8)
/* AHB_DMA_PERI_OUT_SEL_CH0 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to TX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_OUT_SEL_CH0    0x0000003F
#define AHB_DMA_PERI_OUT_SEL_CH0_M  ((AHB_DMA_PERI_OUT_SEL_CH0_V)<<(AHB_DMA_PERI_OUT_SEL_CH0_S))
#define AHB_DMA_PERI_OUT_SEL_CH0_V  0x3F
#define AHB_DMA_PERI_OUT_SEL_CH0_S  0

#define AHB_DMA_TX_CH_ARB_WEIGH_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x1BC)
/* AHB_DMA_TX_CH_ARB_WEIGH_CH0 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of TX channel$n.*/
#define AHB_DMA_TX_CH_ARB_WEIGH_CH0    0x0000000F
#define AHB_DMA_TX_CH_ARB_WEIGH_CH0_M  ((AHB_DMA_TX_CH_ARB_WEIGH_CH0_V)<<(AHB_DMA_TX_CH_ARB_WEIGH_CH0_S))
#define AHB_DMA_TX_CH_ARB_WEIGH_CH0_V  0xF
#define AHB_DMA_TX_CH_ARB_WEIGH_CH0_S  0

#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH0_REG          (DR_REG_AHB_DMA_BASE + 0x1C0)
/* AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH0 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH0    (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH0_M  (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH0_V  0x1
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH0_S  0

#define AHB_DMA_IN_CONF0_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x200)
/* AHB_DMA_IN_DATA_BURST_MODE_SEL_CH1 : R/W ;bitpos:[7:6] ;default: 2'b0 ; */
/*description:  Configures max burst size for Rx channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH1    0x00000003
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH1_M  ((AHB_DMA_IN_DATA_BURST_MODE_SEL_CH1_V)<<(AHB_DMA_IN_DATA_BURST_MODE_SEL_CH1_S))
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH1_V  0x3
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH1_S  6
/* AHB_DMA_IN_ETM_EN_CH1 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for RX channel$n.\\0: Disable\\1: Enab
le\\.*/
#define AHB_DMA_IN_ETM_EN_CH1    (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH1_M  (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH1_V  0x1
#define AHB_DMA_IN_ETM_EN_CH1_S  5
/* AHB_DMA_MEM_TRANS_EN_CH1 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable memory-to-memory data transfer.\\0: Disable\\1: En
able\\.*/
#define AHB_DMA_MEM_TRANS_EN_CH1    (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH1_M  (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH1_V  0x1
#define AHB_DMA_MEM_TRANS_EN_CH1_S  4
/* AHB_DMA_INDSCR_BURST_EN_CH1 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for RX channel $n to read desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_INDSCR_BURST_EN_CH1    (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH1_M  (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH1_V  0x1
#define AHB_DMA_INDSCR_BURST_EN_CH1_S  2
/* AHB_DMA_IN_LOOP_TEST_CH1 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_IN_LOOP_TEST_CH1    (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH1_M  (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH1_V  0x1
#define AHB_DMA_IN_LOOP_TEST_CH1_S  1
/* AHB_DMA_IN_RST_CH1 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  Write 1 and then 0 to reset AHB_DMA channel 1 RX FSM and RX FIFO pointer..*/
#define AHB_DMA_IN_RST_CH1    (BIT(0))
#define AHB_DMA_IN_RST_CH1_M  (BIT(0))
#define AHB_DMA_IN_RST_CH1_V  0x1
#define AHB_DMA_IN_RST_CH1_S  0

#define AHB_DMA_IN_CONF1_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x204)
/* AHB_DMA_IN_CHECK_OWNER_CH1 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for RX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_IN_CHECK_OWNER_CH1    (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH1_M  (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH1_V  0x1
#define AHB_DMA_IN_CHECK_OWNER_CH1_S  12

#define AHB_DMA_INFIFO_STATUS_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x208)
/* AHB_DMA_IN_BUF_HUNGRY_CH1 : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_BUF_HUNGRY_CH1    (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH1_M  (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH1_V  0x1
#define AHB_DMA_IN_BUF_HUNGRY_CH1_S  27
/* AHB_DMA_IN_REMAIN_UNDER_4B_CH1 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH1    (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH1_M  (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH1_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH1_S  26
/* AHB_DMA_IN_REMAIN_UNDER_3B_CH1 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH1    (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH1_M  (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH1_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH1_S  25
/* AHB_DMA_IN_REMAIN_UNDER_2B_CH1 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH1    (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH1_M  (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH1_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH1_S  24
/* AHB_DMA_IN_REMAIN_UNDER_1B_CH1 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH1    (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH1_M  (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH1_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH1_S  23
/* AHB_DMA_INFIFO_CNT_CH1 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 RX FIFO for RX channel $n..*/
#define AHB_DMA_INFIFO_CNT_CH1    0x0000007F
#define AHB_DMA_INFIFO_CNT_CH1_M  ((AHB_DMA_INFIFO_CNT_CH1_V)<<(AHB_DMA_INFIFO_CNT_CH1_S))
#define AHB_DMA_INFIFO_CNT_CH1_V  0x7F
#define AHB_DMA_INFIFO_CNT_CH1_S  8
/* AHB_DMA_INFIFO_EMPTY_CH1 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_INFIFO_EMPTY_CH1    (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH1_M  (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH1_V  0x1
#define AHB_DMA_INFIFO_EMPTY_CH1_S  1
/* AHB_DMA_INFIFO_FULL_CH1 : RO ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_INFIFO_FULL_CH1    (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH1_M  (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH1_V  0x1
#define AHB_DMA_INFIFO_FULL_CH1_S  0

#define AHB_DMA_IN_POP_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x20C)
/* AHB_DMA_INFIFO_POP_CH1 : WT ;bitpos:[12] ;default: 1'h0 ; */
/*description:  Configures whether to pop data from AHB_DMA FIFO.\\0: Invalid. No effect\\1: Po
p\\.*/
#define AHB_DMA_INFIFO_POP_CH1    (BIT(12))
#define AHB_DMA_INFIFO_POP_CH1_M  (BIT(12))
#define AHB_DMA_INFIFO_POP_CH1_V  0x1
#define AHB_DMA_INFIFO_POP_CH1_S  12
/* AHB_DMA_INFIFO_RDATA_CH1 : RO ;bitpos:[11:0] ;default: 12'h800 ; */
/*description:  Represents the data popped from AHB_DMA FIFO..*/
#define AHB_DMA_INFIFO_RDATA_CH1    0x00000FFF
#define AHB_DMA_INFIFO_RDATA_CH1_M  ((AHB_DMA_INFIFO_RDATA_CH1_V)<<(AHB_DMA_INFIFO_RDATA_CH1_S))
#define AHB_DMA_INFIFO_RDATA_CH1_V  0xFFF
#define AHB_DMA_INFIFO_RDATA_CH1_S  0

#define AHB_DMA_IN_LINK_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x210)
/* AHB_DMA_INLINK_PARK_CH1 : RO ;bitpos:[4] ;default: 1'h1 ; */
/*description:  Represents the status of the receive descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_INLINK_PARK_CH1    (BIT(4))
#define AHB_DMA_INLINK_PARK_CH1_M  (BIT(4))
#define AHB_DMA_INLINK_PARK_CH1_V  0x1
#define AHB_DMA_INLINK_PARK_CH1_S  4
/* AHB_DMA_INLINK_RESTART_CH1 : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Configures whether to restart RX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_INLINK_RESTART_CH1    (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH1_M  (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH1_V  0x1
#define AHB_DMA_INLINK_RESTART_CH1_S  3
/* AHB_DMA_INLINK_START_CH1 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's RX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_INLINK_START_CH1    (BIT(2))
#define AHB_DMA_INLINK_START_CH1_M  (BIT(2))
#define AHB_DMA_INLINK_START_CH1_V  0x1
#define AHB_DMA_INLINK_START_CH1_S  2
/* AHB_DMA_INLINK_STOP_CH1 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's RX channel $n from receiving data.\\0: Inv
alid. No effect\\1: Stop\\.*/
#define AHB_DMA_INLINK_STOP_CH1    (BIT(1))
#define AHB_DMA_INLINK_STOP_CH1_M  (BIT(1))
#define AHB_DMA_INLINK_STOP_CH1_V  0x1
#define AHB_DMA_INLINK_STOP_CH1_S  1
/* AHB_DMA_INLINK_AUTO_RET_CH1 : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Configures whether to return to current receive descriptor's address when there
 are some errors in current receiving data.\\0: Not return\\1: Return\\.*/
#define AHB_DMA_INLINK_AUTO_RET_CH1    (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH1_M  (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH1_V  0x1
#define AHB_DMA_INLINK_AUTO_RET_CH1_S  0

#define AHB_DMA_IN_LINK_ADDR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x214)
/* AHB_DMA_INLINK_ADDR_CH1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_INLINK_ADDR_CH1    0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH1_M  ((AHB_DMA_INLINK_ADDR_CH1_V)<<(AHB_DMA_INLINK_ADDR_CH1_S))
#define AHB_DMA_INLINK_ADDR_CH1_V  0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH1_S  0

#define AHB_DMA_IN_STATE_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x218)
/* AHB_DMA_IN_STATE_CH1 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_STATE_CH1    0x00000007
#define AHB_DMA_IN_STATE_CH1_M  ((AHB_DMA_IN_STATE_CH1_V)<<(AHB_DMA_IN_STATE_CH1_S))
#define AHB_DMA_IN_STATE_CH1_V  0x7
#define AHB_DMA_IN_STATE_CH1_S  20
/* AHB_DMA_IN_DSCR_STATE_CH1 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_DSCR_STATE_CH1    0x00000003
#define AHB_DMA_IN_DSCR_STATE_CH1_M  ((AHB_DMA_IN_DSCR_STATE_CH1_V)<<(AHB_DMA_IN_DSCR_STATE_CH1_S))
#define AHB_DMA_IN_DSCR_STATE_CH1_V  0x3
#define AHB_DMA_IN_DSCR_STATE_CH1_S  18
/* AHB_DMA_INLINK_DSCR_ADDR_CH1 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the address of the lower 18 bits of the next receive descriptor to b
e processed..*/
#define AHB_DMA_INLINK_DSCR_ADDR_CH1    0x0003FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH1_M  ((AHB_DMA_INLINK_DSCR_ADDR_CH1_V)<<(AHB_DMA_INLINK_DSCR_ADDR_CH1_S))
#define AHB_DMA_INLINK_DSCR_ADDR_CH1_V  0x3FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH1_S  0

#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x21C)
/* AHB_DMA_IN_SUC_EOF_DES_ADDR_CH1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when the EOF bit in this descr
iptor is 1..*/
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH1    0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH1_M  ((AHB_DMA_IN_SUC_EOF_DES_ADDR_CH1_V)<<(AHB_DMA_IN_SUC_EOF_DES_ADDR_CH1_S))
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH1_V  0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH1_S  0

#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x220)
/* AHB_DMA_IN_ERR_EOF_DES_ADDR_CH1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when there are some errors in
the currently received data..*/
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH1    0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH1_M  ((AHB_DMA_IN_ERR_EOF_DES_ADDR_CH1_V)<<(AHB_DMA_IN_ERR_EOF_DES_ADDR_CH1_S))
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH1_V  0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH1_S  0

#define AHB_DMA_IN_DONE_DES_ADDR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x224)
/* AHB_DMA_IN_DONE_DES_ADDR_CH1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the inlink descriptor when this descriptor is complet
ed..*/
#define AHB_DMA_IN_DONE_DES_ADDR_CH1    0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH1_M  ((AHB_DMA_IN_DONE_DES_ADDR_CH1_V)<<(AHB_DMA_IN_DONE_DES_ADDR_CH1_S))
#define AHB_DMA_IN_DONE_DES_ADDR_CH1_V  0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH1_S  0

#define AHB_DMA_IN_DSCR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x228)
/* AHB_DMA_INLINK_DSCR_CH1 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next receive descriptor x+1 pointed by the curren
t receive descriptor that has already been fetched..*/
#define AHB_DMA_INLINK_DSCR_CH1    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH1_M  ((AHB_DMA_INLINK_DSCR_CH1_V)<<(AHB_DMA_INLINK_DSCR_CH1_S))
#define AHB_DMA_INLINK_DSCR_CH1_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH1_S  0

#define AHB_DMA_IN_DSCR_BF0_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x22C)
/* AHB_DMA_INLINK_DSCR_BF0_CH1 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current receive descriptor x that has already bee
n fetched..*/
#define AHB_DMA_INLINK_DSCR_BF0_CH1    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH1_M  ((AHB_DMA_INLINK_DSCR_BF0_CH1_V)<<(AHB_DMA_INLINK_DSCR_BF0_CH1_S))
#define AHB_DMA_INLINK_DSCR_BF0_CH1_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH1_S  0

#define AHB_DMA_IN_DSCR_BF1_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x230)
/* AHB_DMA_INLINK_DSCR_BF1_CH1 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous receive descriptor x-1 that has already
been fetched..*/
#define AHB_DMA_INLINK_DSCR_BF1_CH1    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH1_M  ((AHB_DMA_INLINK_DSCR_BF1_CH1_V)<<(AHB_DMA_INLINK_DSCR_BF1_CH1_S))
#define AHB_DMA_INLINK_DSCR_BF1_CH1_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH1_S  0

#define AHB_DMA_IN_PRI_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x234)
/* AHB_DMA_RX_PRI_CH1 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of RX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_RX_PRI_CH1    0x0000000F
#define AHB_DMA_RX_PRI_CH1_M  ((AHB_DMA_RX_PRI_CH1_V)<<(AHB_DMA_RX_PRI_CH1_S))
#define AHB_DMA_RX_PRI_CH1_V  0xF
#define AHB_DMA_RX_PRI_CH1_S  0

#define AHB_DMA_IN_PERI_SEL_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x238)
/* AHB_DMA_PERI_IN_SEL_CH1 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to RX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_IN_SEL_CH1    0x0000003F
#define AHB_DMA_PERI_IN_SEL_CH1_M  ((AHB_DMA_PERI_IN_SEL_CH1_V)<<(AHB_DMA_PERI_IN_SEL_CH1_S))
#define AHB_DMA_PERI_IN_SEL_CH1_V  0x3F
#define AHB_DMA_PERI_IN_SEL_CH1_S  0

#define AHB_DMA_RX_CH_ARB_WEIGH_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x23C)
/* AHB_DMA_RX_CH_ARB_WEIGH_CH1 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of RX channel$n.*/
#define AHB_DMA_RX_CH_ARB_WEIGH_CH1    0x0000000F
#define AHB_DMA_RX_CH_ARB_WEIGH_CH1_M  ((AHB_DMA_RX_CH_ARB_WEIGH_CH1_V)<<(AHB_DMA_RX_CH_ARB_WEIGH_CH1_S))
#define AHB_DMA_RX_CH_ARB_WEIGH_CH1_V  0xF
#define AHB_DMA_RX_CH_ARB_WEIGH_CH1_S  0

#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x240)
/* AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH1 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH1    (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH1_M  (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH1_V  0x1
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH1_S  0

#define AHB_DMA_OUT_CONF0_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x280)
/* AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH1 : R/W ;bitpos:[9:8] ;default: 2'b0 ; */
/*description:  Configures max burst size for TX channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH1    0x00000003
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH1_M  ((AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH1_V)<<(AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH1_S))
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH1_V  0x3
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH1_S  8
/* AHB_DMA_OUT_ETM_EN_CH1 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for TX channel $n.\\0: Disable\\1: Ena
ble\\.*/
#define AHB_DMA_OUT_ETM_EN_CH1    (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH1_M  (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH1_V  0x1
#define AHB_DMA_OUT_ETM_EN_CH1_S  6
/* AHB_DMA_OUTDSCR_BURST_EN_CH1 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for TX channel $n reading desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUTDSCR_BURST_EN_CH1    (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH1_M  (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH1_V  0x1
#define AHB_DMA_OUTDSCR_BURST_EN_CH1_S  4
/* AHB_DMA_OUT_EOF_MODE_CH1 : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description:  Configures when to generate EOF flag.\\0: EOF flag for TX channel $n is generat
ed when data to be transmitted has been pushed into FIFO in AHB_DMA.\\ 1: EOF fl
ag for TX channel $n is generated when data to be transmitted has been popped fr
om FIFO in AHB_DMA.\\.*/
#define AHB_DMA_OUT_EOF_MODE_CH1    (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH1_M  (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH1_V  0x1
#define AHB_DMA_OUT_EOF_MODE_CH1_S  3
/* AHB_DMA_OUT_AUTO_WRBACK_CH1 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable automatic outlink write-back when all the data in
TX FIFO has been transmitted.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUT_AUTO_WRBACK_CH1    (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH1_M  (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH1_V  0x1
#define AHB_DMA_OUT_AUTO_WRBACK_CH1_S  2
/* AHB_DMA_OUT_LOOP_TEST_CH1 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_LOOP_TEST_CH1    (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH1_M  (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH1_V  0x1
#define AHB_DMA_OUT_LOOP_TEST_CH1_S  1
/* AHB_DMA_OUT_RST_CH1 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures the reset state of AHB_DMA channel $n TX FSM and TX FIFO pointer.\\0
: Release reset\\1: Reset\\.*/
#define AHB_DMA_OUT_RST_CH1    (BIT(0))
#define AHB_DMA_OUT_RST_CH1_M  (BIT(0))
#define AHB_DMA_OUT_RST_CH1_V  0x1
#define AHB_DMA_OUT_RST_CH1_S  0

#define AHB_DMA_OUT_CONF1_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x284)
/* AHB_DMA_OUT_CHECK_OWNER_CH1 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for TX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_OUT_CHECK_OWNER_CH1    (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH1_M  (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH1_V  0x1
#define AHB_DMA_OUT_CHECK_OWNER_CH1_S  12

#define AHB_DMA_OUTFIFO_STATUS_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x288)
/* AHB_DMA_OUT_REMAIN_UNDER_4B_CH1 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH1    (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH1_M  (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH1_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH1_S  26
/* AHB_DMA_OUT_REMAIN_UNDER_3B_CH1 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH1    (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH1_M  (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH1_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH1_S  25
/* AHB_DMA_OUT_REMAIN_UNDER_2B_CH1 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH1    (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH1_M  (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH1_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH1_S  24
/* AHB_DMA_OUT_REMAIN_UNDER_1B_CH1 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH1    (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH1_M  (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH1_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH1_S  23
/* AHB_DMA_OUTFIFO_CNT_CH1 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 TX FIFO for TX channel $n..*/
#define AHB_DMA_OUTFIFO_CNT_CH1    0x0000007F
#define AHB_DMA_OUTFIFO_CNT_CH1_M  ((AHB_DMA_OUTFIFO_CNT_CH1_V)<<(AHB_DMA_OUTFIFO_CNT_CH1_S))
#define AHB_DMA_OUTFIFO_CNT_CH1_V  0x7F
#define AHB_DMA_OUTFIFO_CNT_CH1_S  8
/* AHB_DMA_OUTFIFO_EMPTY_CH1 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 TX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_OUTFIFO_EMPTY_CH1    (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH1_M  (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH1_V  0x1
#define AHB_DMA_OUTFIFO_EMPTY_CH1_S  1
/* AHB_DMA_OUTFIFO_FULL_CH1 : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Represents whether L1 TX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_OUTFIFO_FULL_CH1    (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH1_M  (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH1_V  0x1
#define AHB_DMA_OUTFIFO_FULL_CH1_S  0

#define AHB_DMA_OUT_PUSH_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x28C)
/* AHB_DMA_OUTFIFO_PUSH_CH1 : WT ;bitpos:[9] ;default: 1'h0 ; */
/*description:  Configures whether to push data into AHB_DMA FIFO.\\0: Invalid. No effect\\1: P
ush\\.*/
#define AHB_DMA_OUTFIFO_PUSH_CH1    (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH1_M  (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH1_V  0x1
#define AHB_DMA_OUTFIFO_PUSH_CH1_S  9
/* AHB_DMA_OUTFIFO_WDATA_CH1 : R/W ;bitpos:[8:0] ;default: 9'h0 ; */
/*description:  Configures the data that need to be pushed into AHB_DMA FIFO..*/
#define AHB_DMA_OUTFIFO_WDATA_CH1    0x000001FF
#define AHB_DMA_OUTFIFO_WDATA_CH1_M  ((AHB_DMA_OUTFIFO_WDATA_CH1_V)<<(AHB_DMA_OUTFIFO_WDATA_CH1_S))
#define AHB_DMA_OUTFIFO_WDATA_CH1_V  0x1FF
#define AHB_DMA_OUTFIFO_WDATA_CH1_S  0

#define AHB_DMA_OUT_LINK_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x290)
/* AHB_DMA_OUTLINK_PARK_CH1 : RO ;bitpos:[3] ;default: 1'h1 ; */
/*description:  Represents the status of the transmit descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_OUTLINK_PARK_CH1    (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH1_M  (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH1_V  0x1
#define AHB_DMA_OUTLINK_PARK_CH1_S  3
/* AHB_DMA_OUTLINK_RESTART_CH1 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to restart TX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_OUTLINK_RESTART_CH1    (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH1_M  (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH1_V  0x1
#define AHB_DMA_OUTLINK_RESTART_CH1_S  2
/* AHB_DMA_OUTLINK_START_CH1 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's TX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_OUTLINK_START_CH1    (BIT(1))
#define AHB_DMA_OUTLINK_START_CH1_M  (BIT(1))
#define AHB_DMA_OUTLINK_START_CH1_V  0x1
#define AHB_DMA_OUTLINK_START_CH1_S  1
/* AHB_DMA_OUTLINK_STOP_CH1 : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's TX channel $n from transmitting data.\\0:
Invalid. No effect\\1: Stop\\.*/
#define AHB_DMA_OUTLINK_STOP_CH1    (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH1_M  (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH1_V  0x1
#define AHB_DMA_OUTLINK_STOP_CH1_S  0

#define AHB_DMA_OUT_LINK_ADDR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x294)
/* AHB_DMA_OUTLINK_ADDR_CH1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_OUTLINK_ADDR_CH1    0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH1_M  ((AHB_DMA_OUTLINK_ADDR_CH1_V)<<(AHB_DMA_OUTLINK_ADDR_CH1_S))
#define AHB_DMA_OUTLINK_ADDR_CH1_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH1_S  0

#define AHB_DMA_OUT_STATE_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x298)
/* AHB_DMA_OUT_STATE_CH1 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_STATE_CH1    0x00000007
#define AHB_DMA_OUT_STATE_CH1_M  ((AHB_DMA_OUT_STATE_CH1_V)<<(AHB_DMA_OUT_STATE_CH1_S))
#define AHB_DMA_OUT_STATE_CH1_V  0x7
#define AHB_DMA_OUT_STATE_CH1_S  20
/* AHB_DMA_OUT_DSCR_STATE_CH1 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_DSCR_STATE_CH1    0x00000003
#define AHB_DMA_OUT_DSCR_STATE_CH1_M  ((AHB_DMA_OUT_DSCR_STATE_CH1_V)<<(AHB_DMA_OUT_DSCR_STATE_CH1_S))
#define AHB_DMA_OUT_DSCR_STATE_CH1_V  0x3
#define AHB_DMA_OUT_DSCR_STATE_CH1_S  18
/* AHB_DMA_OUTLINK_DSCR_ADDR_CH1 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the lower 18 bits of the address of the next transmit descriptor to
be processed..*/
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH1    0x0003FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH1_M  ((AHB_DMA_OUTLINK_DSCR_ADDR_CH1_V)<<(AHB_DMA_OUTLINK_DSCR_ADDR_CH1_S))
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH1_V  0x3FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH1_S  0

#define AHB_DMA_OUT_EOF_DES_ADDR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x29C)
/* AHB_DMA_OUT_EOF_DES_ADDR_CH1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor when the EOF bit in this desc
riptor is 1..*/
#define AHB_DMA_OUT_EOF_DES_ADDR_CH1    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH1_M  ((AHB_DMA_OUT_EOF_DES_ADDR_CH1_V)<<(AHB_DMA_OUT_EOF_DES_ADDR_CH1_S))
#define AHB_DMA_OUT_EOF_DES_ADDR_CH1_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH1_S  0

#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x2A0)
/* AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor before the last transmit desc
riptor..*/
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH1    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH1_M  ((AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH1_V)<<(AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH1_S))
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH1_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH1_S  0

#define AHB_DMA_OUT_DONE_DES_ADDR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x2A4)
/* AHB_DMA_OUT_DONE_DES_ADDR_CH1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the outlink descriptor when this descriptor is comple
ted..*/
#define AHB_DMA_OUT_DONE_DES_ADDR_CH1    0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH1_M  ((AHB_DMA_OUT_DONE_DES_ADDR_CH1_V)<<(AHB_DMA_OUT_DONE_DES_ADDR_CH1_S))
#define AHB_DMA_OUT_DONE_DES_ADDR_CH1_V  0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH1_S  0

#define AHB_DMA_OUT_DSCR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x2A8)
/* AHB_DMA_OUTLINK_DSCR_CH1 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next transmit descriptor y+1 pointed by the curre
nt transmit descriptor that has already been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_CH1    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH1_M  ((AHB_DMA_OUTLINK_DSCR_CH1_V)<<(AHB_DMA_OUTLINK_DSCR_CH1_S))
#define AHB_DMA_OUTLINK_DSCR_CH1_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH1_S  0

#define AHB_DMA_OUT_DSCR_BF0_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x2AC)
/* AHB_DMA_OUTLINK_DSCR_BF0_CH1 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current transmit descriptor y that has already be
en fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF0_CH1    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH1_M  ((AHB_DMA_OUTLINK_DSCR_BF0_CH1_V)<<(AHB_DMA_OUTLINK_DSCR_BF0_CH1_S))
#define AHB_DMA_OUTLINK_DSCR_BF0_CH1_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH1_S  0

#define AHB_DMA_OUT_DSCR_BF1_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x2B0)
/* AHB_DMA_OUTLINK_DSCR_BF1_CH1 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous transmit descriptor y-1 that has already
 been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF1_CH1    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH1_M  ((AHB_DMA_OUTLINK_DSCR_BF1_CH1_V)<<(AHB_DMA_OUTLINK_DSCR_BF1_CH1_S))
#define AHB_DMA_OUTLINK_DSCR_BF1_CH1_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH1_S  0

#define AHB_DMA_OUT_PRI_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x2B4)
/* AHB_DMA_TX_PRI_CH1 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of TX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_TX_PRI_CH1    0x0000000F
#define AHB_DMA_TX_PRI_CH1_M  ((AHB_DMA_TX_PRI_CH1_V)<<(AHB_DMA_TX_PRI_CH1_S))
#define AHB_DMA_TX_PRI_CH1_V  0xF
#define AHB_DMA_TX_PRI_CH1_S  0

#define AHB_DMA_OUT_PERI_SEL_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x2B8)
/* AHB_DMA_PERI_OUT_SEL_CH1 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to TX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_OUT_SEL_CH1    0x0000003F
#define AHB_DMA_PERI_OUT_SEL_CH1_M  ((AHB_DMA_PERI_OUT_SEL_CH1_V)<<(AHB_DMA_PERI_OUT_SEL_CH1_S))
#define AHB_DMA_PERI_OUT_SEL_CH1_V  0x3F
#define AHB_DMA_PERI_OUT_SEL_CH1_S  0

#define AHB_DMA_TX_CH_ARB_WEIGH_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x2BC)
/* AHB_DMA_TX_CH_ARB_WEIGH_CH1 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of TX channel$n.*/
#define AHB_DMA_TX_CH_ARB_WEIGH_CH1    0x0000000F
#define AHB_DMA_TX_CH_ARB_WEIGH_CH1_M  ((AHB_DMA_TX_CH_ARB_WEIGH_CH1_V)<<(AHB_DMA_TX_CH_ARB_WEIGH_CH1_S))
#define AHB_DMA_TX_CH_ARB_WEIGH_CH1_V  0xF
#define AHB_DMA_TX_CH_ARB_WEIGH_CH1_S  0

#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH1_REG          (DR_REG_AHB_DMA_BASE + 0x2C0)
/* AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH1 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH1    (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH1_M  (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH1_V  0x1
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH1_S  0

#define AHB_DMA_IN_CONF0_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x300)
/* AHB_DMA_IN_DATA_BURST_MODE_SEL_CH2 : R/W ;bitpos:[7:6] ;default: 2'b0 ; */
/*description:  Configures max burst size for Rx channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH2    0x00000003
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH2_M  ((AHB_DMA_IN_DATA_BURST_MODE_SEL_CH2_V)<<(AHB_DMA_IN_DATA_BURST_MODE_SEL_CH2_S))
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH2_V  0x3
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH2_S  6
/* AHB_DMA_IN_ETM_EN_CH2 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for RX channel$n.\\0: Disable\\1: Enab
le\\.*/
#define AHB_DMA_IN_ETM_EN_CH2    (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH2_M  (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH2_V  0x1
#define AHB_DMA_IN_ETM_EN_CH2_S  5
/* AHB_DMA_MEM_TRANS_EN_CH2 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable memory-to-memory data transfer.\\0: Disable\\1: En
able\\.*/
#define AHB_DMA_MEM_TRANS_EN_CH2    (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH2_M  (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH2_V  0x1
#define AHB_DMA_MEM_TRANS_EN_CH2_S  4
/* AHB_DMA_INDSCR_BURST_EN_CH2 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for RX channel $n to read desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_INDSCR_BURST_EN_CH2    (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH2_M  (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH2_V  0x1
#define AHB_DMA_INDSCR_BURST_EN_CH2_S  2
/* AHB_DMA_IN_LOOP_TEST_CH2 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_IN_LOOP_TEST_CH2    (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH2_M  (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH2_V  0x1
#define AHB_DMA_IN_LOOP_TEST_CH2_S  1
/* AHB_DMA_IN_RST_CH2 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  Write 1 and then 0 to reset AHB_DMA channel 2 RX FSM and RX FIFO pointer..*/
#define AHB_DMA_IN_RST_CH2    (BIT(0))
#define AHB_DMA_IN_RST_CH2_M  (BIT(0))
#define AHB_DMA_IN_RST_CH2_V  0x1
#define AHB_DMA_IN_RST_CH2_S  0

#define AHB_DMA_IN_CONF1_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x304)
/* AHB_DMA_IN_CHECK_OWNER_CH2 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for RX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_IN_CHECK_OWNER_CH2    (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH2_M  (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH2_V  0x1
#define AHB_DMA_IN_CHECK_OWNER_CH2_S  12

#define AHB_DMA_INFIFO_STATUS_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x308)
/* AHB_DMA_IN_BUF_HUNGRY_CH2 : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_BUF_HUNGRY_CH2    (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH2_M  (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH2_V  0x1
#define AHB_DMA_IN_BUF_HUNGRY_CH2_S  27
/* AHB_DMA_IN_REMAIN_UNDER_4B_CH2 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH2    (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH2_M  (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH2_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH2_S  26
/* AHB_DMA_IN_REMAIN_UNDER_3B_CH2 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH2    (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH2_M  (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH2_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH2_S  25
/* AHB_DMA_IN_REMAIN_UNDER_2B_CH2 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH2    (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH2_M  (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH2_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH2_S  24
/* AHB_DMA_IN_REMAIN_UNDER_1B_CH2 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH2    (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH2_M  (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH2_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH2_S  23
/* AHB_DMA_INFIFO_CNT_CH2 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 RX FIFO for RX channel $n..*/
#define AHB_DMA_INFIFO_CNT_CH2    0x0000007F
#define AHB_DMA_INFIFO_CNT_CH2_M  ((AHB_DMA_INFIFO_CNT_CH2_V)<<(AHB_DMA_INFIFO_CNT_CH2_S))
#define AHB_DMA_INFIFO_CNT_CH2_V  0x7F
#define AHB_DMA_INFIFO_CNT_CH2_S  8
/* AHB_DMA_INFIFO_EMPTY_CH2 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_INFIFO_EMPTY_CH2    (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH2_M  (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH2_V  0x1
#define AHB_DMA_INFIFO_EMPTY_CH2_S  1
/* AHB_DMA_INFIFO_FULL_CH2 : RO ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_INFIFO_FULL_CH2    (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH2_M  (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH2_V  0x1
#define AHB_DMA_INFIFO_FULL_CH2_S  0

#define AHB_DMA_IN_POP_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x30C)
/* AHB_DMA_INFIFO_POP_CH2 : WT ;bitpos:[12] ;default: 1'h0 ; */
/*description:  Configures whether to pop data from AHB_DMA FIFO.\\0: Invalid. No effect\\1: Po
p\\.*/
#define AHB_DMA_INFIFO_POP_CH2    (BIT(12))
#define AHB_DMA_INFIFO_POP_CH2_M  (BIT(12))
#define AHB_DMA_INFIFO_POP_CH2_V  0x1
#define AHB_DMA_INFIFO_POP_CH2_S  12
/* AHB_DMA_INFIFO_RDATA_CH2 : RO ;bitpos:[11:0] ;default: 12'h800 ; */
/*description:  Represents the data popped from AHB_DMA FIFO..*/
#define AHB_DMA_INFIFO_RDATA_CH2    0x00000FFF
#define AHB_DMA_INFIFO_RDATA_CH2_M  ((AHB_DMA_INFIFO_RDATA_CH2_V)<<(AHB_DMA_INFIFO_RDATA_CH2_S))
#define AHB_DMA_INFIFO_RDATA_CH2_V  0xFFF
#define AHB_DMA_INFIFO_RDATA_CH2_S  0

#define AHB_DMA_IN_LINK_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x310)
/* AHB_DMA_INLINK_PARK_CH2 : RO ;bitpos:[4] ;default: 1'h1 ; */
/*description:  Represents the status of the receive descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_INLINK_PARK_CH2    (BIT(4))
#define AHB_DMA_INLINK_PARK_CH2_M  (BIT(4))
#define AHB_DMA_INLINK_PARK_CH2_V  0x1
#define AHB_DMA_INLINK_PARK_CH2_S  4
/* AHB_DMA_INLINK_RESTART_CH2 : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Configures whether to restart RX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_INLINK_RESTART_CH2    (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH2_M  (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH2_V  0x1
#define AHB_DMA_INLINK_RESTART_CH2_S  3
/* AHB_DMA_INLINK_START_CH2 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's RX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_INLINK_START_CH2    (BIT(2))
#define AHB_DMA_INLINK_START_CH2_M  (BIT(2))
#define AHB_DMA_INLINK_START_CH2_V  0x1
#define AHB_DMA_INLINK_START_CH2_S  2
/* AHB_DMA_INLINK_STOP_CH2 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's RX channel $n from receiving data.\\0: Inv
alid. No effect\\1: Stop\\.*/
#define AHB_DMA_INLINK_STOP_CH2    (BIT(1))
#define AHB_DMA_INLINK_STOP_CH2_M  (BIT(1))
#define AHB_DMA_INLINK_STOP_CH2_V  0x1
#define AHB_DMA_INLINK_STOP_CH2_S  1
/* AHB_DMA_INLINK_AUTO_RET_CH2 : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Configures whether to return to current receive descriptor's address when there
 are some errors in current receiving data.\\0: Not return\\1: Return\\.*/
#define AHB_DMA_INLINK_AUTO_RET_CH2    (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH2_M  (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH2_V  0x1
#define AHB_DMA_INLINK_AUTO_RET_CH2_S  0

#define AHB_DMA_IN_LINK_ADDR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x314)
/* AHB_DMA_INLINK_ADDR_CH2 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_INLINK_ADDR_CH2    0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH2_M  ((AHB_DMA_INLINK_ADDR_CH2_V)<<(AHB_DMA_INLINK_ADDR_CH2_S))
#define AHB_DMA_INLINK_ADDR_CH2_V  0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH2_S  0

#define AHB_DMA_IN_STATE_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x318)
/* AHB_DMA_IN_STATE_CH2 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_STATE_CH2    0x00000007
#define AHB_DMA_IN_STATE_CH2_M  ((AHB_DMA_IN_STATE_CH2_V)<<(AHB_DMA_IN_STATE_CH2_S))
#define AHB_DMA_IN_STATE_CH2_V  0x7
#define AHB_DMA_IN_STATE_CH2_S  20
/* AHB_DMA_IN_DSCR_STATE_CH2 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_DSCR_STATE_CH2    0x00000003
#define AHB_DMA_IN_DSCR_STATE_CH2_M  ((AHB_DMA_IN_DSCR_STATE_CH2_V)<<(AHB_DMA_IN_DSCR_STATE_CH2_S))
#define AHB_DMA_IN_DSCR_STATE_CH2_V  0x3
#define AHB_DMA_IN_DSCR_STATE_CH2_S  18
/* AHB_DMA_INLINK_DSCR_ADDR_CH2 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the address of the lower 18 bits of the next receive descriptor to b
e processed..*/
#define AHB_DMA_INLINK_DSCR_ADDR_CH2    0x0003FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH2_M  ((AHB_DMA_INLINK_DSCR_ADDR_CH2_V)<<(AHB_DMA_INLINK_DSCR_ADDR_CH2_S))
#define AHB_DMA_INLINK_DSCR_ADDR_CH2_V  0x3FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH2_S  0

#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x31C)
/* AHB_DMA_IN_SUC_EOF_DES_ADDR_CH2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when the EOF bit in this descr
iptor is 1..*/
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH2    0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH2_M  ((AHB_DMA_IN_SUC_EOF_DES_ADDR_CH2_V)<<(AHB_DMA_IN_SUC_EOF_DES_ADDR_CH2_S))
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH2_V  0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH2_S  0

#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x320)
/* AHB_DMA_IN_ERR_EOF_DES_ADDR_CH2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when there are some errors in
the currently received data..*/
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH2    0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH2_M  ((AHB_DMA_IN_ERR_EOF_DES_ADDR_CH2_V)<<(AHB_DMA_IN_ERR_EOF_DES_ADDR_CH2_S))
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH2_V  0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH2_S  0

#define AHB_DMA_IN_DONE_DES_ADDR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x324)
/* AHB_DMA_IN_DONE_DES_ADDR_CH2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the inlink descriptor when this descriptor is complet
ed..*/
#define AHB_DMA_IN_DONE_DES_ADDR_CH2    0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH2_M  ((AHB_DMA_IN_DONE_DES_ADDR_CH2_V)<<(AHB_DMA_IN_DONE_DES_ADDR_CH2_S))
#define AHB_DMA_IN_DONE_DES_ADDR_CH2_V  0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH2_S  0

#define AHB_DMA_IN_DSCR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x328)
/* AHB_DMA_INLINK_DSCR_CH2 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next receive descriptor x+1 pointed by the curren
t receive descriptor that has already been fetched..*/
#define AHB_DMA_INLINK_DSCR_CH2    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH2_M  ((AHB_DMA_INLINK_DSCR_CH2_V)<<(AHB_DMA_INLINK_DSCR_CH2_S))
#define AHB_DMA_INLINK_DSCR_CH2_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH2_S  0

#define AHB_DMA_IN_DSCR_BF0_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x32C)
/* AHB_DMA_INLINK_DSCR_BF0_CH2 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current receive descriptor x that has already bee
n fetched..*/
#define AHB_DMA_INLINK_DSCR_BF0_CH2    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH2_M  ((AHB_DMA_INLINK_DSCR_BF0_CH2_V)<<(AHB_DMA_INLINK_DSCR_BF0_CH2_S))
#define AHB_DMA_INLINK_DSCR_BF0_CH2_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH2_S  0

#define AHB_DMA_IN_DSCR_BF1_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x330)
/* AHB_DMA_INLINK_DSCR_BF1_CH2 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous receive descriptor x-1 that has already
been fetched..*/
#define AHB_DMA_INLINK_DSCR_BF1_CH2    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH2_M  ((AHB_DMA_INLINK_DSCR_BF1_CH2_V)<<(AHB_DMA_INLINK_DSCR_BF1_CH2_S))
#define AHB_DMA_INLINK_DSCR_BF1_CH2_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH2_S  0

#define AHB_DMA_IN_PRI_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x334)
/* AHB_DMA_RX_PRI_CH2 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of RX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_RX_PRI_CH2    0x0000000F
#define AHB_DMA_RX_PRI_CH2_M  ((AHB_DMA_RX_PRI_CH2_V)<<(AHB_DMA_RX_PRI_CH2_S))
#define AHB_DMA_RX_PRI_CH2_V  0xF
#define AHB_DMA_RX_PRI_CH2_S  0

#define AHB_DMA_IN_PERI_SEL_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x338)
/* AHB_DMA_PERI_IN_SEL_CH2 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to RX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_IN_SEL_CH2    0x0000003F
#define AHB_DMA_PERI_IN_SEL_CH2_M  ((AHB_DMA_PERI_IN_SEL_CH2_V)<<(AHB_DMA_PERI_IN_SEL_CH2_S))
#define AHB_DMA_PERI_IN_SEL_CH2_V  0x3F
#define AHB_DMA_PERI_IN_SEL_CH2_S  0

#define AHB_DMA_RX_CH_ARB_WEIGH_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x33C)
/* AHB_DMA_RX_CH_ARB_WEIGH_CH2 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of RX channel$n.*/
#define AHB_DMA_RX_CH_ARB_WEIGH_CH2    0x0000000F
#define AHB_DMA_RX_CH_ARB_WEIGH_CH2_M  ((AHB_DMA_RX_CH_ARB_WEIGH_CH2_V)<<(AHB_DMA_RX_CH_ARB_WEIGH_CH2_S))
#define AHB_DMA_RX_CH_ARB_WEIGH_CH2_V  0xF
#define AHB_DMA_RX_CH_ARB_WEIGH_CH2_S  0

#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x340)
/* AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH2 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH2    (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH2_M  (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH2_V  0x1
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH2_S  0

#define AHB_DMA_OUT_CONF0_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x380)
/* AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH2 : R/W ;bitpos:[9:8] ;default: 2'b0 ; */
/*description:  Configures max burst size for TX channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH2    0x00000003
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH2_M  ((AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH2_V)<<(AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH2_S))
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH2_V  0x3
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH2_S  8
/* AHB_DMA_OUT_ETM_EN_CH2 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for TX channel $n.\\0: Disable\\1: Ena
ble\\.*/
#define AHB_DMA_OUT_ETM_EN_CH2    (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH2_M  (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH2_V  0x1
#define AHB_DMA_OUT_ETM_EN_CH2_S  6
/* AHB_DMA_OUTDSCR_BURST_EN_CH2 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for TX channel $n reading desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUTDSCR_BURST_EN_CH2    (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH2_M  (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH2_V  0x1
#define AHB_DMA_OUTDSCR_BURST_EN_CH2_S  4
/* AHB_DMA_OUT_EOF_MODE_CH2 : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description:  Configures when to generate EOF flag.\\0: EOF flag for TX channel $n is generat
ed when data to be transmitted has been pushed into FIFO in AHB_DMA.\\ 1: EOF fl
ag for TX channel $n is generated when data to be transmitted has been popped fr
om FIFO in AHB_DMA.\\.*/
#define AHB_DMA_OUT_EOF_MODE_CH2    (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH2_M  (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH2_V  0x1
#define AHB_DMA_OUT_EOF_MODE_CH2_S  3
/* AHB_DMA_OUT_AUTO_WRBACK_CH2 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable automatic outlink write-back when all the data in
TX FIFO has been transmitted.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUT_AUTO_WRBACK_CH2    (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH2_M  (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH2_V  0x1
#define AHB_DMA_OUT_AUTO_WRBACK_CH2_S  2
/* AHB_DMA_OUT_LOOP_TEST_CH2 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_LOOP_TEST_CH2    (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH2_M  (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH2_V  0x1
#define AHB_DMA_OUT_LOOP_TEST_CH2_S  1
/* AHB_DMA_OUT_RST_CH2 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures the reset state of AHB_DMA channel $n TX FSM and TX FIFO pointer.\\0
: Release reset\\1: Reset\\.*/
#define AHB_DMA_OUT_RST_CH2    (BIT(0))
#define AHB_DMA_OUT_RST_CH2_M  (BIT(0))
#define AHB_DMA_OUT_RST_CH2_V  0x1
#define AHB_DMA_OUT_RST_CH2_S  0

#define AHB_DMA_OUT_CONF1_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x384)
/* AHB_DMA_OUT_CHECK_OWNER_CH2 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for TX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_OUT_CHECK_OWNER_CH2    (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH2_M  (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH2_V  0x1
#define AHB_DMA_OUT_CHECK_OWNER_CH2_S  12

#define AHB_DMA_OUTFIFO_STATUS_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x388)
/* AHB_DMA_OUT_REMAIN_UNDER_4B_CH2 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH2    (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH2_M  (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH2_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH2_S  26
/* AHB_DMA_OUT_REMAIN_UNDER_3B_CH2 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH2    (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH2_M  (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH2_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH2_S  25
/* AHB_DMA_OUT_REMAIN_UNDER_2B_CH2 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH2    (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH2_M  (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH2_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH2_S  24
/* AHB_DMA_OUT_REMAIN_UNDER_1B_CH2 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH2    (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH2_M  (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH2_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH2_S  23
/* AHB_DMA_OUTFIFO_CNT_CH2 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 TX FIFO for TX channel $n..*/
#define AHB_DMA_OUTFIFO_CNT_CH2    0x0000007F
#define AHB_DMA_OUTFIFO_CNT_CH2_M  ((AHB_DMA_OUTFIFO_CNT_CH2_V)<<(AHB_DMA_OUTFIFO_CNT_CH2_S))
#define AHB_DMA_OUTFIFO_CNT_CH2_V  0x7F
#define AHB_DMA_OUTFIFO_CNT_CH2_S  8
/* AHB_DMA_OUTFIFO_EMPTY_CH2 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 TX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_OUTFIFO_EMPTY_CH2    (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH2_M  (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH2_V  0x1
#define AHB_DMA_OUTFIFO_EMPTY_CH2_S  1
/* AHB_DMA_OUTFIFO_FULL_CH2 : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Represents whether L1 TX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_OUTFIFO_FULL_CH2    (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH2_M  (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH2_V  0x1
#define AHB_DMA_OUTFIFO_FULL_CH2_S  0

#define AHB_DMA_OUT_PUSH_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x38C)
/* AHB_DMA_OUTFIFO_PUSH_CH2 : WT ;bitpos:[9] ;default: 1'h0 ; */
/*description:  Configures whether to push data into AHB_DMA FIFO.\\0: Invalid. No effect\\1: P
ush\\.*/
#define AHB_DMA_OUTFIFO_PUSH_CH2    (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH2_M  (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH2_V  0x1
#define AHB_DMA_OUTFIFO_PUSH_CH2_S  9
/* AHB_DMA_OUTFIFO_WDATA_CH2 : R/W ;bitpos:[8:0] ;default: 9'h0 ; */
/*description:  Configures the data that need to be pushed into AHB_DMA FIFO..*/
#define AHB_DMA_OUTFIFO_WDATA_CH2    0x000001FF
#define AHB_DMA_OUTFIFO_WDATA_CH2_M  ((AHB_DMA_OUTFIFO_WDATA_CH2_V)<<(AHB_DMA_OUTFIFO_WDATA_CH2_S))
#define AHB_DMA_OUTFIFO_WDATA_CH2_V  0x1FF
#define AHB_DMA_OUTFIFO_WDATA_CH2_S  0

#define AHB_DMA_OUT_LINK_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x390)
/* AHB_DMA_OUTLINK_PARK_CH2 : RO ;bitpos:[3] ;default: 1'h1 ; */
/*description:  Represents the status of the transmit descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_OUTLINK_PARK_CH2    (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH2_M  (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH2_V  0x1
#define AHB_DMA_OUTLINK_PARK_CH2_S  3
/* AHB_DMA_OUTLINK_RESTART_CH2 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to restart TX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_OUTLINK_RESTART_CH2    (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH2_M  (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH2_V  0x1
#define AHB_DMA_OUTLINK_RESTART_CH2_S  2
/* AHB_DMA_OUTLINK_START_CH2 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's TX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_OUTLINK_START_CH2    (BIT(1))
#define AHB_DMA_OUTLINK_START_CH2_M  (BIT(1))
#define AHB_DMA_OUTLINK_START_CH2_V  0x1
#define AHB_DMA_OUTLINK_START_CH2_S  1
/* AHB_DMA_OUTLINK_STOP_CH2 : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's TX channel $n from transmitting data.\\0:
Invalid. No effect\\1: Stop\\.*/
#define AHB_DMA_OUTLINK_STOP_CH2    (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH2_M  (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH2_V  0x1
#define AHB_DMA_OUTLINK_STOP_CH2_S  0

#define AHB_DMA_OUT_LINK_ADDR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x394)
/* AHB_DMA_OUTLINK_ADDR_CH2 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_OUTLINK_ADDR_CH2    0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH2_M  ((AHB_DMA_OUTLINK_ADDR_CH2_V)<<(AHB_DMA_OUTLINK_ADDR_CH2_S))
#define AHB_DMA_OUTLINK_ADDR_CH2_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH2_S  0

#define AHB_DMA_OUT_STATE_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x398)
/* AHB_DMA_OUT_STATE_CH2 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_STATE_CH2    0x00000007
#define AHB_DMA_OUT_STATE_CH2_M  ((AHB_DMA_OUT_STATE_CH2_V)<<(AHB_DMA_OUT_STATE_CH2_S))
#define AHB_DMA_OUT_STATE_CH2_V  0x7
#define AHB_DMA_OUT_STATE_CH2_S  20
/* AHB_DMA_OUT_DSCR_STATE_CH2 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_DSCR_STATE_CH2    0x00000003
#define AHB_DMA_OUT_DSCR_STATE_CH2_M  ((AHB_DMA_OUT_DSCR_STATE_CH2_V)<<(AHB_DMA_OUT_DSCR_STATE_CH2_S))
#define AHB_DMA_OUT_DSCR_STATE_CH2_V  0x3
#define AHB_DMA_OUT_DSCR_STATE_CH2_S  18
/* AHB_DMA_OUTLINK_DSCR_ADDR_CH2 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the lower 18 bits of the address of the next transmit descriptor to
be processed..*/
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH2    0x0003FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH2_M  ((AHB_DMA_OUTLINK_DSCR_ADDR_CH2_V)<<(AHB_DMA_OUTLINK_DSCR_ADDR_CH2_S))
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH2_V  0x3FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH2_S  0

#define AHB_DMA_OUT_EOF_DES_ADDR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x39C)
/* AHB_DMA_OUT_EOF_DES_ADDR_CH2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor when the EOF bit in this desc
riptor is 1..*/
#define AHB_DMA_OUT_EOF_DES_ADDR_CH2    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH2_M  ((AHB_DMA_OUT_EOF_DES_ADDR_CH2_V)<<(AHB_DMA_OUT_EOF_DES_ADDR_CH2_S))
#define AHB_DMA_OUT_EOF_DES_ADDR_CH2_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH2_S  0

#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x3A0)
/* AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor before the last transmit desc
riptor..*/
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH2    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH2_M  ((AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH2_V)<<(AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH2_S))
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH2_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH2_S  0

#define AHB_DMA_OUT_DONE_DES_ADDR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x3A4)
/* AHB_DMA_OUT_DONE_DES_ADDR_CH2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the outlink descriptor when this descriptor is comple
ted..*/
#define AHB_DMA_OUT_DONE_DES_ADDR_CH2    0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH2_M  ((AHB_DMA_OUT_DONE_DES_ADDR_CH2_V)<<(AHB_DMA_OUT_DONE_DES_ADDR_CH2_S))
#define AHB_DMA_OUT_DONE_DES_ADDR_CH2_V  0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH2_S  0

#define AHB_DMA_OUT_DSCR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x3A8)
/* AHB_DMA_OUTLINK_DSCR_CH2 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next transmit descriptor y+1 pointed by the curre
nt transmit descriptor that has already been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_CH2    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH2_M  ((AHB_DMA_OUTLINK_DSCR_CH2_V)<<(AHB_DMA_OUTLINK_DSCR_CH2_S))
#define AHB_DMA_OUTLINK_DSCR_CH2_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH2_S  0

#define AHB_DMA_OUT_DSCR_BF0_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x3AC)
/* AHB_DMA_OUTLINK_DSCR_BF0_CH2 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current transmit descriptor y that has already be
en fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF0_CH2    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH2_M  ((AHB_DMA_OUTLINK_DSCR_BF0_CH2_V)<<(AHB_DMA_OUTLINK_DSCR_BF0_CH2_S))
#define AHB_DMA_OUTLINK_DSCR_BF0_CH2_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH2_S  0

#define AHB_DMA_OUT_DSCR_BF1_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x3B0)
/* AHB_DMA_OUTLINK_DSCR_BF1_CH2 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous transmit descriptor y-1 that has already
 been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF1_CH2    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH2_M  ((AHB_DMA_OUTLINK_DSCR_BF1_CH2_V)<<(AHB_DMA_OUTLINK_DSCR_BF1_CH2_S))
#define AHB_DMA_OUTLINK_DSCR_BF1_CH2_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH2_S  0

#define AHB_DMA_OUT_PRI_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x3B4)
/* AHB_DMA_TX_PRI_CH2 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of TX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_TX_PRI_CH2    0x0000000F
#define AHB_DMA_TX_PRI_CH2_M  ((AHB_DMA_TX_PRI_CH2_V)<<(AHB_DMA_TX_PRI_CH2_S))
#define AHB_DMA_TX_PRI_CH2_V  0xF
#define AHB_DMA_TX_PRI_CH2_S  0

#define AHB_DMA_OUT_PERI_SEL_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x3B8)
/* AHB_DMA_PERI_OUT_SEL_CH2 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to TX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_OUT_SEL_CH2    0x0000003F
#define AHB_DMA_PERI_OUT_SEL_CH2_M  ((AHB_DMA_PERI_OUT_SEL_CH2_V)<<(AHB_DMA_PERI_OUT_SEL_CH2_S))
#define AHB_DMA_PERI_OUT_SEL_CH2_V  0x3F
#define AHB_DMA_PERI_OUT_SEL_CH2_S  0

#define AHB_DMA_TX_CH_ARB_WEIGH_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x3BC)
/* AHB_DMA_TX_CH_ARB_WEIGH_CH2 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of TX channel$n.*/
#define AHB_DMA_TX_CH_ARB_WEIGH_CH2    0x0000000F
#define AHB_DMA_TX_CH_ARB_WEIGH_CH2_M  ((AHB_DMA_TX_CH_ARB_WEIGH_CH2_V)<<(AHB_DMA_TX_CH_ARB_WEIGH_CH2_S))
#define AHB_DMA_TX_CH_ARB_WEIGH_CH2_V  0xF
#define AHB_DMA_TX_CH_ARB_WEIGH_CH2_S  0

#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH2_REG          (DR_REG_AHB_DMA_BASE + 0x3C0)
/* AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH2 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH2    (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH2_M  (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH2_V  0x1
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH2_S  0

#define AHB_DMA_IN_CONF0_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x400)
/* AHB_DMA_IN_DATA_BURST_MODE_SEL_CH3 : R/W ;bitpos:[7:6] ;default: 2'b0 ; */
/*description:  Configures max burst size for Rx channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH3    0x00000003
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH3_M  ((AHB_DMA_IN_DATA_BURST_MODE_SEL_CH3_V)<<(AHB_DMA_IN_DATA_BURST_MODE_SEL_CH3_S))
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH3_V  0x3
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH3_S  6
/* AHB_DMA_IN_ETM_EN_CH3 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for RX channel$n.\\0: Disable\\1: Enab
le\\.*/
#define AHB_DMA_IN_ETM_EN_CH3    (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH3_M  (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH3_V  0x1
#define AHB_DMA_IN_ETM_EN_CH3_S  5
/* AHB_DMA_MEM_TRANS_EN_CH3 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable memory-to-memory data transfer.\\0: Disable\\1: En
able\\.*/
#define AHB_DMA_MEM_TRANS_EN_CH3    (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH3_M  (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH3_V  0x1
#define AHB_DMA_MEM_TRANS_EN_CH3_S  4
/* AHB_DMA_INDSCR_BURST_EN_CH3 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for RX channel $n to read desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_INDSCR_BURST_EN_CH3    (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH3_M  (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH3_V  0x1
#define AHB_DMA_INDSCR_BURST_EN_CH3_S  2
/* AHB_DMA_IN_LOOP_TEST_CH3 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_IN_LOOP_TEST_CH3    (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH3_M  (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH3_V  0x1
#define AHB_DMA_IN_LOOP_TEST_CH3_S  1
/* AHB_DMA_IN_RST_CH3 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  Write 1 and then 0 to reset AHB_DMA channel 2 RX FSM and RX FIFO pointer..*/
#define AHB_DMA_IN_RST_CH3    (BIT(0))
#define AHB_DMA_IN_RST_CH3_M  (BIT(0))
#define AHB_DMA_IN_RST_CH3_V  0x1
#define AHB_DMA_IN_RST_CH3_S  0

#define AHB_DMA_IN_CONF1_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x404)
/* AHB_DMA_IN_CHECK_OWNER_CH3 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for RX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_IN_CHECK_OWNER_CH3    (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH3_M  (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH3_V  0x1
#define AHB_DMA_IN_CHECK_OWNER_CH3_S  12

#define AHB_DMA_INFIFO_STATUS_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x408)
/* AHB_DMA_IN_BUF_HUNGRY_CH3 : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_BUF_HUNGRY_CH3    (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH3_M  (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH3_V  0x1
#define AHB_DMA_IN_BUF_HUNGRY_CH3_S  27
/* AHB_DMA_IN_REMAIN_UNDER_4B_CH3 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH3    (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH3_M  (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH3_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH3_S  26
/* AHB_DMA_IN_REMAIN_UNDER_3B_CH3 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH3    (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH3_M  (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH3_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH3_S  25
/* AHB_DMA_IN_REMAIN_UNDER_2B_CH3 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH3    (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH3_M  (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH3_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH3_S  24
/* AHB_DMA_IN_REMAIN_UNDER_1B_CH3 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH3    (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH3_M  (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH3_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH3_S  23
/* AHB_DMA_INFIFO_CNT_CH3 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 RX FIFO for RX channel $n..*/
#define AHB_DMA_INFIFO_CNT_CH3    0x0000007F
#define AHB_DMA_INFIFO_CNT_CH3_M  ((AHB_DMA_INFIFO_CNT_CH3_V)<<(AHB_DMA_INFIFO_CNT_CH3_S))
#define AHB_DMA_INFIFO_CNT_CH3_V  0x7F
#define AHB_DMA_INFIFO_CNT_CH3_S  8
/* AHB_DMA_INFIFO_EMPTY_CH3 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_INFIFO_EMPTY_CH3    (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH3_M  (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH3_V  0x1
#define AHB_DMA_INFIFO_EMPTY_CH3_S  1
/* AHB_DMA_INFIFO_FULL_CH3 : RO ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_INFIFO_FULL_CH3    (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH3_M  (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH3_V  0x1
#define AHB_DMA_INFIFO_FULL_CH3_S  0

#define AHB_DMA_IN_POP_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x40C)
/* AHB_DMA_INFIFO_POP_CH3 : WT ;bitpos:[12] ;default: 1'h0 ; */
/*description:  Configures whether to pop data from AHB_DMA FIFO.\\0: Invalid. No effect\\1: Po
p\\.*/
#define AHB_DMA_INFIFO_POP_CH3    (BIT(12))
#define AHB_DMA_INFIFO_POP_CH3_M  (BIT(12))
#define AHB_DMA_INFIFO_POP_CH3_V  0x1
#define AHB_DMA_INFIFO_POP_CH3_S  12
/* AHB_DMA_INFIFO_RDATA_CH3 : RO ;bitpos:[11:0] ;default: 12'h800 ; */
/*description:  Represents the data popped from AHB_DMA FIFO..*/
#define AHB_DMA_INFIFO_RDATA_CH3    0x00000FFF
#define AHB_DMA_INFIFO_RDATA_CH3_M  ((AHB_DMA_INFIFO_RDATA_CH3_V)<<(AHB_DMA_INFIFO_RDATA_CH3_S))
#define AHB_DMA_INFIFO_RDATA_CH3_V  0xFFF
#define AHB_DMA_INFIFO_RDATA_CH3_S  0

#define AHB_DMA_IN_LINK_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x410)
/* AHB_DMA_INLINK_PARK_CH3 : RO ;bitpos:[4] ;default: 1'h1 ; */
/*description:  Represents the status of the receive descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_INLINK_PARK_CH3    (BIT(4))
#define AHB_DMA_INLINK_PARK_CH3_M  (BIT(4))
#define AHB_DMA_INLINK_PARK_CH3_V  0x1
#define AHB_DMA_INLINK_PARK_CH3_S  4
/* AHB_DMA_INLINK_RESTART_CH3 : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Configures whether to restart RX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_INLINK_RESTART_CH3    (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH3_M  (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH3_V  0x1
#define AHB_DMA_INLINK_RESTART_CH3_S  3
/* AHB_DMA_INLINK_START_CH3 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's RX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_INLINK_START_CH3    (BIT(2))
#define AHB_DMA_INLINK_START_CH3_M  (BIT(2))
#define AHB_DMA_INLINK_START_CH3_V  0x1
#define AHB_DMA_INLINK_START_CH3_S  2
/* AHB_DMA_INLINK_STOP_CH3 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's RX channel $n from receiving data.\\0: Inv
alid. No effect\\1: Stop\\.*/
#define AHB_DMA_INLINK_STOP_CH3    (BIT(1))
#define AHB_DMA_INLINK_STOP_CH3_M  (BIT(1))
#define AHB_DMA_INLINK_STOP_CH3_V  0x1
#define AHB_DMA_INLINK_STOP_CH3_S  1
/* AHB_DMA_INLINK_AUTO_RET_CH3 : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Configures whether to return to current receive descriptor's address when there
 are some errors in current receiving data.\\0: Not return\\1: Return\\.*/
#define AHB_DMA_INLINK_AUTO_RET_CH3    (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH3_M  (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH3_V  0x1
#define AHB_DMA_INLINK_AUTO_RET_CH3_S  0

#define AHB_DMA_IN_LINK_ADDR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x414)
/* AHB_DMA_INLINK_ADDR_CH3 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_INLINK_ADDR_CH3    0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH3_M  ((AHB_DMA_INLINK_ADDR_CH3_V)<<(AHB_DMA_INLINK_ADDR_CH3_S))
#define AHB_DMA_INLINK_ADDR_CH3_V  0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH3_S  0

#define AHB_DMA_IN_STATE_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x418)
/* AHB_DMA_IN_STATE_CH3 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_STATE_CH3    0x00000007
#define AHB_DMA_IN_STATE_CH3_M  ((AHB_DMA_IN_STATE_CH3_V)<<(AHB_DMA_IN_STATE_CH3_S))
#define AHB_DMA_IN_STATE_CH3_V  0x7
#define AHB_DMA_IN_STATE_CH3_S  20
/* AHB_DMA_IN_DSCR_STATE_CH3 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_DSCR_STATE_CH3    0x00000003
#define AHB_DMA_IN_DSCR_STATE_CH3_M  ((AHB_DMA_IN_DSCR_STATE_CH3_V)<<(AHB_DMA_IN_DSCR_STATE_CH3_S))
#define AHB_DMA_IN_DSCR_STATE_CH3_V  0x3
#define AHB_DMA_IN_DSCR_STATE_CH3_S  18
/* AHB_DMA_INLINK_DSCR_ADDR_CH3 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the address of the lower 18 bits of the next receive descriptor to b
e processed..*/
#define AHB_DMA_INLINK_DSCR_ADDR_CH3    0x0003FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH3_M  ((AHB_DMA_INLINK_DSCR_ADDR_CH3_V)<<(AHB_DMA_INLINK_DSCR_ADDR_CH3_S))
#define AHB_DMA_INLINK_DSCR_ADDR_CH3_V  0x3FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH3_S  0

#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x41C)
/* AHB_DMA_IN_SUC_EOF_DES_ADDR_CH3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when the EOF bit in this descr
iptor is 1..*/
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH3    0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH3_M  ((AHB_DMA_IN_SUC_EOF_DES_ADDR_CH3_V)<<(AHB_DMA_IN_SUC_EOF_DES_ADDR_CH3_S))
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH3_V  0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH3_S  0

#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x420)
/* AHB_DMA_IN_ERR_EOF_DES_ADDR_CH3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when there are some errors in
the currently received data..*/
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH3    0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH3_M  ((AHB_DMA_IN_ERR_EOF_DES_ADDR_CH3_V)<<(AHB_DMA_IN_ERR_EOF_DES_ADDR_CH3_S))
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH3_V  0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH3_S  0

#define AHB_DMA_IN_DONE_DES_ADDR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x424)
/* AHB_DMA_IN_DONE_DES_ADDR_CH3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the inlink descriptor when this descriptor is complet
ed..*/
#define AHB_DMA_IN_DONE_DES_ADDR_CH3    0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH3_M  ((AHB_DMA_IN_DONE_DES_ADDR_CH3_V)<<(AHB_DMA_IN_DONE_DES_ADDR_CH3_S))
#define AHB_DMA_IN_DONE_DES_ADDR_CH3_V  0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH3_S  0

#define AHB_DMA_IN_DSCR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x428)
/* AHB_DMA_INLINK_DSCR_CH3 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next receive descriptor x+1 pointed by the curren
t receive descriptor that has already been fetched..*/
#define AHB_DMA_INLINK_DSCR_CH3    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH3_M  ((AHB_DMA_INLINK_DSCR_CH3_V)<<(AHB_DMA_INLINK_DSCR_CH3_S))
#define AHB_DMA_INLINK_DSCR_CH3_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH3_S  0

#define AHB_DMA_IN_DSCR_BF0_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x42C)
/* AHB_DMA_INLINK_DSCR_BF0_CH3 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current receive descriptor x that has already bee
n fetched..*/
#define AHB_DMA_INLINK_DSCR_BF0_CH3    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH3_M  ((AHB_DMA_INLINK_DSCR_BF0_CH3_V)<<(AHB_DMA_INLINK_DSCR_BF0_CH3_S))
#define AHB_DMA_INLINK_DSCR_BF0_CH3_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH3_S  0

#define AHB_DMA_IN_DSCR_BF1_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x430)
/* AHB_DMA_INLINK_DSCR_BF1_CH3 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous receive descriptor x-1 that has already
been fetched..*/
#define AHB_DMA_INLINK_DSCR_BF1_CH3    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH3_M  ((AHB_DMA_INLINK_DSCR_BF1_CH3_V)<<(AHB_DMA_INLINK_DSCR_BF1_CH3_S))
#define AHB_DMA_INLINK_DSCR_BF1_CH3_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH3_S  0

#define AHB_DMA_IN_PRI_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x434)
/* AHB_DMA_RX_PRI_CH3 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of RX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_RX_PRI_CH3    0x0000000F
#define AHB_DMA_RX_PRI_CH3_M  ((AHB_DMA_RX_PRI_CH3_V)<<(AHB_DMA_RX_PRI_CH3_S))
#define AHB_DMA_RX_PRI_CH3_V  0xF
#define AHB_DMA_RX_PRI_CH3_S  0

#define AHB_DMA_IN_PERI_SEL_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x438)
/* AHB_DMA_PERI_IN_SEL_CH3 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to RX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_IN_SEL_CH3    0x0000003F
#define AHB_DMA_PERI_IN_SEL_CH3_M  ((AHB_DMA_PERI_IN_SEL_CH3_V)<<(AHB_DMA_PERI_IN_SEL_CH3_S))
#define AHB_DMA_PERI_IN_SEL_CH3_V  0x3F
#define AHB_DMA_PERI_IN_SEL_CH3_S  0

#define AHB_DMA_RX_CH_ARB_WEIGH_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x43C)
/* AHB_DMA_RX_CH_ARB_WEIGH_CH3 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of RX channel$n.*/
#define AHB_DMA_RX_CH_ARB_WEIGH_CH3    0x0000000F
#define AHB_DMA_RX_CH_ARB_WEIGH_CH3_M  ((AHB_DMA_RX_CH_ARB_WEIGH_CH3_V)<<(AHB_DMA_RX_CH_ARB_WEIGH_CH3_S))
#define AHB_DMA_RX_CH_ARB_WEIGH_CH3_V  0xF
#define AHB_DMA_RX_CH_ARB_WEIGH_CH3_S  0

#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x440)
/* AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH3 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH3    (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH3_M  (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH3_V  0x1
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH3_S  0

#define AHB_DMA_OUT_CONF0_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x480)
/* AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH3 : R/W ;bitpos:[9:8] ;default: 2'b0 ; */
/*description:  Configures max burst size for TX channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH3    0x00000003
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH3_M  ((AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH3_V)<<(AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH3_S))
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH3_V  0x3
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH3_S  8
/* AHB_DMA_OUT_ETM_EN_CH3 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for TX channel $n.\\0: Disable\\1: Ena
ble\\.*/
#define AHB_DMA_OUT_ETM_EN_CH3    (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH3_M  (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH3_V  0x1
#define AHB_DMA_OUT_ETM_EN_CH3_S  6
/* AHB_DMA_OUTDSCR_BURST_EN_CH3 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for TX channel $n reading desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUTDSCR_BURST_EN_CH3    (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH3_M  (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH3_V  0x1
#define AHB_DMA_OUTDSCR_BURST_EN_CH3_S  4
/* AHB_DMA_OUT_EOF_MODE_CH3 : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description:  Configures when to generate EOF flag.\\0: EOF flag for TX channel $n is generat
ed when data to be transmitted has been pushed into FIFO in AHB_DMA.\\ 1: EOF fl
ag for TX channel $n is generated when data to be transmitted has been popped fr
om FIFO in AHB_DMA.\\.*/
#define AHB_DMA_OUT_EOF_MODE_CH3    (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH3_M  (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH3_V  0x1
#define AHB_DMA_OUT_EOF_MODE_CH3_S  3
/* AHB_DMA_OUT_AUTO_WRBACK_CH3 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable automatic outlink write-back when all the data in
TX FIFO has been transmitted.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUT_AUTO_WRBACK_CH3    (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH3_M  (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH3_V  0x1
#define AHB_DMA_OUT_AUTO_WRBACK_CH3_S  2
/* AHB_DMA_OUT_LOOP_TEST_CH3 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_LOOP_TEST_CH3    (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH3_M  (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH3_V  0x1
#define AHB_DMA_OUT_LOOP_TEST_CH3_S  1
/* AHB_DMA_OUT_RST_CH3 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures the reset state of AHB_DMA channel $n TX FSM and TX FIFO pointer.\\0
: Release reset\\1: Reset\\.*/
#define AHB_DMA_OUT_RST_CH3    (BIT(0))
#define AHB_DMA_OUT_RST_CH3_M  (BIT(0))
#define AHB_DMA_OUT_RST_CH3_V  0x1
#define AHB_DMA_OUT_RST_CH3_S  0

#define AHB_DMA_OUT_CONF1_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x484)
/* AHB_DMA_OUT_CHECK_OWNER_CH3 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for TX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_OUT_CHECK_OWNER_CH3    (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH3_M  (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH3_V  0x1
#define AHB_DMA_OUT_CHECK_OWNER_CH3_S  12

#define AHB_DMA_OUTFIFO_STATUS_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x488)
/* AHB_DMA_OUT_REMAIN_UNDER_4B_CH3 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH3    (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH3_M  (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH3_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH3_S  26
/* AHB_DMA_OUT_REMAIN_UNDER_3B_CH3 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH3    (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH3_M  (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH3_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH3_S  25
/* AHB_DMA_OUT_REMAIN_UNDER_2B_CH3 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH3    (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH3_M  (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH3_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH3_S  24
/* AHB_DMA_OUT_REMAIN_UNDER_1B_CH3 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH3    (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH3_M  (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH3_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH3_S  23
/* AHB_DMA_OUTFIFO_CNT_CH3 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 TX FIFO for TX channel $n..*/
#define AHB_DMA_OUTFIFO_CNT_CH3    0x0000007F
#define AHB_DMA_OUTFIFO_CNT_CH3_M  ((AHB_DMA_OUTFIFO_CNT_CH3_V)<<(AHB_DMA_OUTFIFO_CNT_CH3_S))
#define AHB_DMA_OUTFIFO_CNT_CH3_V  0x7F
#define AHB_DMA_OUTFIFO_CNT_CH3_S  8
/* AHB_DMA_OUTFIFO_EMPTY_CH3 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 TX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_OUTFIFO_EMPTY_CH3    (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH3_M  (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH3_V  0x1
#define AHB_DMA_OUTFIFO_EMPTY_CH3_S  1
/* AHB_DMA_OUTFIFO_FULL_CH3 : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Represents whether L1 TX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_OUTFIFO_FULL_CH3    (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH3_M  (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH3_V  0x1
#define AHB_DMA_OUTFIFO_FULL_CH3_S  0

#define AHB_DMA_OUT_PUSH_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x48C)
/* AHB_DMA_OUTFIFO_PUSH_CH3 : WT ;bitpos:[9] ;default: 1'h0 ; */
/*description:  Configures whether to push data into AHB_DMA FIFO.\\0: Invalid. No effect\\1: P
ush\\.*/
#define AHB_DMA_OUTFIFO_PUSH_CH3    (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH3_M  (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH3_V  0x1
#define AHB_DMA_OUTFIFO_PUSH_CH3_S  9
/* AHB_DMA_OUTFIFO_WDATA_CH3 : R/W ;bitpos:[8:0] ;default: 9'h0 ; */
/*description:  Configures the data that need to be pushed into AHB_DMA FIFO..*/
#define AHB_DMA_OUTFIFO_WDATA_CH3    0x000001FF
#define AHB_DMA_OUTFIFO_WDATA_CH3_M  ((AHB_DMA_OUTFIFO_WDATA_CH3_V)<<(AHB_DMA_OUTFIFO_WDATA_CH3_S))
#define AHB_DMA_OUTFIFO_WDATA_CH3_V  0x1FF
#define AHB_DMA_OUTFIFO_WDATA_CH3_S  0

#define AHB_DMA_OUT_LINK_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x490)
/* AHB_DMA_OUTLINK_PARK_CH3 : RO ;bitpos:[3] ;default: 1'h1 ; */
/*description:  Represents the status of the transmit descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_OUTLINK_PARK_CH3    (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH3_M  (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH3_V  0x1
#define AHB_DMA_OUTLINK_PARK_CH3_S  3
/* AHB_DMA_OUTLINK_RESTART_CH3 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to restart TX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_OUTLINK_RESTART_CH3    (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH3_M  (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH3_V  0x1
#define AHB_DMA_OUTLINK_RESTART_CH3_S  2
/* AHB_DMA_OUTLINK_START_CH3 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's TX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_OUTLINK_START_CH3    (BIT(1))
#define AHB_DMA_OUTLINK_START_CH3_M  (BIT(1))
#define AHB_DMA_OUTLINK_START_CH3_V  0x1
#define AHB_DMA_OUTLINK_START_CH3_S  1
/* AHB_DMA_OUTLINK_STOP_CH3 : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's TX channel $n from transmitting data.\\0:
Invalid. No effect\\1: Stop\\.*/
#define AHB_DMA_OUTLINK_STOP_CH3    (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH3_M  (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH3_V  0x1
#define AHB_DMA_OUTLINK_STOP_CH3_S  0

#define AHB_DMA_OUT_LINK_ADDR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x494)
/* AHB_DMA_OUTLINK_ADDR_CH3 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_OUTLINK_ADDR_CH3    0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH3_M  ((AHB_DMA_OUTLINK_ADDR_CH3_V)<<(AHB_DMA_OUTLINK_ADDR_CH3_S))
#define AHB_DMA_OUTLINK_ADDR_CH3_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH3_S  0

#define AHB_DMA_OUT_STATE_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x498)
/* AHB_DMA_OUT_STATE_CH3 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_STATE_CH3    0x00000007
#define AHB_DMA_OUT_STATE_CH3_M  ((AHB_DMA_OUT_STATE_CH3_V)<<(AHB_DMA_OUT_STATE_CH3_S))
#define AHB_DMA_OUT_STATE_CH3_V  0x7
#define AHB_DMA_OUT_STATE_CH3_S  20
/* AHB_DMA_OUT_DSCR_STATE_CH3 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_DSCR_STATE_CH3    0x00000003
#define AHB_DMA_OUT_DSCR_STATE_CH3_M  ((AHB_DMA_OUT_DSCR_STATE_CH3_V)<<(AHB_DMA_OUT_DSCR_STATE_CH3_S))
#define AHB_DMA_OUT_DSCR_STATE_CH3_V  0x3
#define AHB_DMA_OUT_DSCR_STATE_CH3_S  18
/* AHB_DMA_OUTLINK_DSCR_ADDR_CH3 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the lower 18 bits of the address of the next transmit descriptor to
be processed..*/
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH3    0x0003FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH3_M  ((AHB_DMA_OUTLINK_DSCR_ADDR_CH3_V)<<(AHB_DMA_OUTLINK_DSCR_ADDR_CH3_S))
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH3_V  0x3FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH3_S  0

#define AHB_DMA_OUT_EOF_DES_ADDR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x49C)
/* AHB_DMA_OUT_EOF_DES_ADDR_CH3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor when the EOF bit in this desc
riptor is 1..*/
#define AHB_DMA_OUT_EOF_DES_ADDR_CH3    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH3_M  ((AHB_DMA_OUT_EOF_DES_ADDR_CH3_V)<<(AHB_DMA_OUT_EOF_DES_ADDR_CH3_S))
#define AHB_DMA_OUT_EOF_DES_ADDR_CH3_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH3_S  0

#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x4A0)
/* AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor before the last transmit desc
riptor..*/
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH3    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH3_M  ((AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH3_V)<<(AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH3_S))
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH3_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH3_S  0

#define AHB_DMA_OUT_DONE_DES_ADDR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x4A4)
/* AHB_DMA_OUT_DONE_DES_ADDR_CH3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the outlink descriptor when this descriptor is comple
ted..*/
#define AHB_DMA_OUT_DONE_DES_ADDR_CH3    0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH3_M  ((AHB_DMA_OUT_DONE_DES_ADDR_CH3_V)<<(AHB_DMA_OUT_DONE_DES_ADDR_CH3_S))
#define AHB_DMA_OUT_DONE_DES_ADDR_CH3_V  0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH3_S  0

#define AHB_DMA_OUT_DSCR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x4A8)
/* AHB_DMA_OUTLINK_DSCR_CH3 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next transmit descriptor y+1 pointed by the curre
nt transmit descriptor that has already been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_CH3    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH3_M  ((AHB_DMA_OUTLINK_DSCR_CH3_V)<<(AHB_DMA_OUTLINK_DSCR_CH3_S))
#define AHB_DMA_OUTLINK_DSCR_CH3_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH3_S  0

#define AHB_DMA_OUT_DSCR_BF0_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x4AC)
/* AHB_DMA_OUTLINK_DSCR_BF0_CH3 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current transmit descriptor y that has already be
en fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF0_CH3    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH3_M  ((AHB_DMA_OUTLINK_DSCR_BF0_CH3_V)<<(AHB_DMA_OUTLINK_DSCR_BF0_CH3_S))
#define AHB_DMA_OUTLINK_DSCR_BF0_CH3_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH3_S  0

#define AHB_DMA_OUT_DSCR_BF1_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x4B0)
/* AHB_DMA_OUTLINK_DSCR_BF1_CH3 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous transmit descriptor y-1 that has already
 been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF1_CH3    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH3_M  ((AHB_DMA_OUTLINK_DSCR_BF1_CH3_V)<<(AHB_DMA_OUTLINK_DSCR_BF1_CH3_S))
#define AHB_DMA_OUTLINK_DSCR_BF1_CH3_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH3_S  0

#define AHB_DMA_OUT_PRI_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x4B4)
/* AHB_DMA_TX_PRI_CH3 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of TX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_TX_PRI_CH3    0x0000000F
#define AHB_DMA_TX_PRI_CH3_M  ((AHB_DMA_TX_PRI_CH3_V)<<(AHB_DMA_TX_PRI_CH3_S))
#define AHB_DMA_TX_PRI_CH3_V  0xF
#define AHB_DMA_TX_PRI_CH3_S  0

#define AHB_DMA_OUT_PERI_SEL_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x4B8)
/* AHB_DMA_PERI_OUT_SEL_CH3 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to TX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_OUT_SEL_CH3    0x0000003F
#define AHB_DMA_PERI_OUT_SEL_CH3_M  ((AHB_DMA_PERI_OUT_SEL_CH3_V)<<(AHB_DMA_PERI_OUT_SEL_CH3_S))
#define AHB_DMA_PERI_OUT_SEL_CH3_V  0x3F
#define AHB_DMA_PERI_OUT_SEL_CH3_S  0

#define AHB_DMA_TX_CH_ARB_WEIGH_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x4BC)
/* AHB_DMA_TX_CH_ARB_WEIGH_CH3 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of TX channel$n.*/
#define AHB_DMA_TX_CH_ARB_WEIGH_CH3    0x0000000F
#define AHB_DMA_TX_CH_ARB_WEIGH_CH3_M  ((AHB_DMA_TX_CH_ARB_WEIGH_CH3_V)<<(AHB_DMA_TX_CH_ARB_WEIGH_CH3_S))
#define AHB_DMA_TX_CH_ARB_WEIGH_CH3_V  0xF
#define AHB_DMA_TX_CH_ARB_WEIGH_CH3_S  0

#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH3_REG          (DR_REG_AHB_DMA_BASE + 0x4C0)
/* AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH3 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH3    (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH3_M  (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH3_V  0x1
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH3_S  0

#define AHB_DMA_IN_CONF0_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x500)
/* AHB_DMA_IN_DATA_BURST_MODE_SEL_CH4 : R/W ;bitpos:[7:6] ;default: 2'b0 ; */
/*description:  Configures max burst size for Rx channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH4    0x00000003
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH4_M  ((AHB_DMA_IN_DATA_BURST_MODE_SEL_CH4_V)<<(AHB_DMA_IN_DATA_BURST_MODE_SEL_CH4_S))
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH4_V  0x3
#define AHB_DMA_IN_DATA_BURST_MODE_SEL_CH4_S  6
/* AHB_DMA_IN_ETM_EN_CH4 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for RX channel$n.\\0: Disable\\1: Enab
le\\.*/
#define AHB_DMA_IN_ETM_EN_CH4    (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH4_M  (BIT(5))
#define AHB_DMA_IN_ETM_EN_CH4_V  0x1
#define AHB_DMA_IN_ETM_EN_CH4_S  5
/* AHB_DMA_MEM_TRANS_EN_CH4 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable memory-to-memory data transfer.\\0: Disable\\1: En
able\\.*/
#define AHB_DMA_MEM_TRANS_EN_CH4    (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH4_M  (BIT(4))
#define AHB_DMA_MEM_TRANS_EN_CH4_V  0x1
#define AHB_DMA_MEM_TRANS_EN_CH4_S  4
/* AHB_DMA_INDSCR_BURST_EN_CH4 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for RX channel $n to read desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_INDSCR_BURST_EN_CH4    (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH4_M  (BIT(2))
#define AHB_DMA_INDSCR_BURST_EN_CH4_V  0x1
#define AHB_DMA_INDSCR_BURST_EN_CH4_S  2
/* AHB_DMA_IN_LOOP_TEST_CH4 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_IN_LOOP_TEST_CH4    (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH4_M  (BIT(1))
#define AHB_DMA_IN_LOOP_TEST_CH4_V  0x1
#define AHB_DMA_IN_LOOP_TEST_CH4_S  1
/* AHB_DMA_IN_RST_CH4 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  Write 1 and then 0 to reset AHB_DMA channel 2 RX FSM and RX FIFO pointer..*/
#define AHB_DMA_IN_RST_CH4    (BIT(0))
#define AHB_DMA_IN_RST_CH4_M  (BIT(0))
#define AHB_DMA_IN_RST_CH4_V  0x1
#define AHB_DMA_IN_RST_CH4_S  0

#define AHB_DMA_IN_CONF1_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x504)
/* AHB_DMA_IN_CHECK_OWNER_CH4 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for RX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_IN_CHECK_OWNER_CH4    (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH4_M  (BIT(12))
#define AHB_DMA_IN_CHECK_OWNER_CH4_V  0x1
#define AHB_DMA_IN_CHECK_OWNER_CH4_S  12

#define AHB_DMA_INFIFO_STATUS_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x508)
/* AHB_DMA_IN_BUF_HUNGRY_CH4 : RO ;bitpos:[27] ;default: 1'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_BUF_HUNGRY_CH4    (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH4_M  (BIT(27))
#define AHB_DMA_IN_BUF_HUNGRY_CH4_V  0x1
#define AHB_DMA_IN_BUF_HUNGRY_CH4_S  27
/* AHB_DMA_IN_REMAIN_UNDER_4B_CH4 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH4    (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH4_M  (BIT(26))
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH4_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_4B_CH4_S  26
/* AHB_DMA_IN_REMAIN_UNDER_3B_CH4 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH4    (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH4_M  (BIT(25))
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH4_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_3B_CH4_S  25
/* AHB_DMA_IN_REMAIN_UNDER_2B_CH4 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH4    (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH4_M  (BIT(24))
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH4_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_2B_CH4_S  24
/* AHB_DMA_IN_REMAIN_UNDER_1B_CH4 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH4    (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH4_M  (BIT(23))
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH4_V  0x1
#define AHB_DMA_IN_REMAIN_UNDER_1B_CH4_S  23
/* AHB_DMA_INFIFO_CNT_CH4 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 RX FIFO for RX channel $n..*/
#define AHB_DMA_INFIFO_CNT_CH4    0x0000007F
#define AHB_DMA_INFIFO_CNT_CH4_M  ((AHB_DMA_INFIFO_CNT_CH4_V)<<(AHB_DMA_INFIFO_CNT_CH4_S))
#define AHB_DMA_INFIFO_CNT_CH4_V  0x7F
#define AHB_DMA_INFIFO_CNT_CH4_S  8
/* AHB_DMA_INFIFO_EMPTY_CH4 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_INFIFO_EMPTY_CH4    (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH4_M  (BIT(1))
#define AHB_DMA_INFIFO_EMPTY_CH4_V  0x1
#define AHB_DMA_INFIFO_EMPTY_CH4_S  1
/* AHB_DMA_INFIFO_FULL_CH4 : RO ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Represents whether L1 RX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_INFIFO_FULL_CH4    (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH4_M  (BIT(0))
#define AHB_DMA_INFIFO_FULL_CH4_V  0x1
#define AHB_DMA_INFIFO_FULL_CH4_S  0

#define AHB_DMA_IN_POP_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x50C)
/* AHB_DMA_INFIFO_POP_CH4 : WT ;bitpos:[12] ;default: 1'h0 ; */
/*description:  Configures whether to pop data from AHB_DMA FIFO.\\0: Invalid. No effect\\1: Po
p\\.*/
#define AHB_DMA_INFIFO_POP_CH4    (BIT(12))
#define AHB_DMA_INFIFO_POP_CH4_M  (BIT(12))
#define AHB_DMA_INFIFO_POP_CH4_V  0x1
#define AHB_DMA_INFIFO_POP_CH4_S  12
/* AHB_DMA_INFIFO_RDATA_CH4 : RO ;bitpos:[11:0] ;default: 12'h800 ; */
/*description:  Represents the data popped from AHB_DMA FIFO..*/
#define AHB_DMA_INFIFO_RDATA_CH4    0x00000FFF
#define AHB_DMA_INFIFO_RDATA_CH4_M  ((AHB_DMA_INFIFO_RDATA_CH4_V)<<(AHB_DMA_INFIFO_RDATA_CH4_S))
#define AHB_DMA_INFIFO_RDATA_CH4_V  0xFFF
#define AHB_DMA_INFIFO_RDATA_CH4_S  0

#define AHB_DMA_IN_LINK_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x510)
/* AHB_DMA_INLINK_PARK_CH4 : RO ;bitpos:[4] ;default: 1'h1 ; */
/*description:  Represents the status of the receive descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_INLINK_PARK_CH4    (BIT(4))
#define AHB_DMA_INLINK_PARK_CH4_M  (BIT(4))
#define AHB_DMA_INLINK_PARK_CH4_V  0x1
#define AHB_DMA_INLINK_PARK_CH4_S  4
/* AHB_DMA_INLINK_RESTART_CH4 : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description:  Configures whether to restart RX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_INLINK_RESTART_CH4    (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH4_M  (BIT(3))
#define AHB_DMA_INLINK_RESTART_CH4_V  0x1
#define AHB_DMA_INLINK_RESTART_CH4_S  3
/* AHB_DMA_INLINK_START_CH4 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's RX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_INLINK_START_CH4    (BIT(2))
#define AHB_DMA_INLINK_START_CH4_M  (BIT(2))
#define AHB_DMA_INLINK_START_CH4_V  0x1
#define AHB_DMA_INLINK_START_CH4_S  2
/* AHB_DMA_INLINK_STOP_CH4 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's RX channel $n from receiving data.\\0: Inv
alid. No effect\\1: Stop\\.*/
#define AHB_DMA_INLINK_STOP_CH4    (BIT(1))
#define AHB_DMA_INLINK_STOP_CH4_M  (BIT(1))
#define AHB_DMA_INLINK_STOP_CH4_V  0x1
#define AHB_DMA_INLINK_STOP_CH4_S  1
/* AHB_DMA_INLINK_AUTO_RET_CH4 : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description:  Configures whether to return to current receive descriptor's address when there
 are some errors in current receiving data.\\0: Not return\\1: Return\\.*/
#define AHB_DMA_INLINK_AUTO_RET_CH4    (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH4_M  (BIT(0))
#define AHB_DMA_INLINK_AUTO_RET_CH4_V  0x1
#define AHB_DMA_INLINK_AUTO_RET_CH4_S  0

#define AHB_DMA_IN_LINK_ADDR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x514)
/* AHB_DMA_INLINK_ADDR_CH4 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_INLINK_ADDR_CH4    0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH4_M  ((AHB_DMA_INLINK_ADDR_CH4_V)<<(AHB_DMA_INLINK_ADDR_CH4_S))
#define AHB_DMA_INLINK_ADDR_CH4_V  0xFFFFFFFF
#define AHB_DMA_INLINK_ADDR_CH4_S  0

#define AHB_DMA_IN_STATE_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x518)
/* AHB_DMA_IN_STATE_CH4 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_STATE_CH4    0x00000007
#define AHB_DMA_IN_STATE_CH4_M  ((AHB_DMA_IN_STATE_CH4_V)<<(AHB_DMA_IN_STATE_CH4_S))
#define AHB_DMA_IN_STATE_CH4_V  0x7
#define AHB_DMA_IN_STATE_CH4_S  20
/* AHB_DMA_IN_DSCR_STATE_CH4 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_IN_DSCR_STATE_CH4    0x00000003
#define AHB_DMA_IN_DSCR_STATE_CH4_M  ((AHB_DMA_IN_DSCR_STATE_CH4_V)<<(AHB_DMA_IN_DSCR_STATE_CH4_S))
#define AHB_DMA_IN_DSCR_STATE_CH4_V  0x3
#define AHB_DMA_IN_DSCR_STATE_CH4_S  18
/* AHB_DMA_INLINK_DSCR_ADDR_CH4 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the address of the lower 18 bits of the next receive descriptor to b
e processed..*/
#define AHB_DMA_INLINK_DSCR_ADDR_CH4    0x0003FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH4_M  ((AHB_DMA_INLINK_DSCR_ADDR_CH4_V)<<(AHB_DMA_INLINK_DSCR_ADDR_CH4_S))
#define AHB_DMA_INLINK_DSCR_ADDR_CH4_V  0x3FFFF
#define AHB_DMA_INLINK_DSCR_ADDR_CH4_S  0

#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x51C)
/* AHB_DMA_IN_SUC_EOF_DES_ADDR_CH4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when the EOF bit in this descr
iptor is 1..*/
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH4    0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH4_M  ((AHB_DMA_IN_SUC_EOF_DES_ADDR_CH4_V)<<(AHB_DMA_IN_SUC_EOF_DES_ADDR_CH4_S))
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH4_V  0xFFFFFFFF
#define AHB_DMA_IN_SUC_EOF_DES_ADDR_CH4_S  0

#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x520)
/* AHB_DMA_IN_ERR_EOF_DES_ADDR_CH4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the receive descriptor when there are some errors in
the currently received data..*/
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH4    0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH4_M  ((AHB_DMA_IN_ERR_EOF_DES_ADDR_CH4_V)<<(AHB_DMA_IN_ERR_EOF_DES_ADDR_CH4_S))
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH4_V  0xFFFFFFFF
#define AHB_DMA_IN_ERR_EOF_DES_ADDR_CH4_S  0

#define AHB_DMA_IN_DONE_DES_ADDR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x524)
/* AHB_DMA_IN_DONE_DES_ADDR_CH4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the inlink descriptor when this descriptor is complet
ed..*/
#define AHB_DMA_IN_DONE_DES_ADDR_CH4    0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH4_M  ((AHB_DMA_IN_DONE_DES_ADDR_CH4_V)<<(AHB_DMA_IN_DONE_DES_ADDR_CH4_S))
#define AHB_DMA_IN_DONE_DES_ADDR_CH4_V  0xFFFFFFFF
#define AHB_DMA_IN_DONE_DES_ADDR_CH4_S  0

#define AHB_DMA_IN_DSCR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x528)
/* AHB_DMA_INLINK_DSCR_CH4 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next receive descriptor x+1 pointed by the curren
t receive descriptor that has already been fetched..*/
#define AHB_DMA_INLINK_DSCR_CH4    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH4_M  ((AHB_DMA_INLINK_DSCR_CH4_V)<<(AHB_DMA_INLINK_DSCR_CH4_S))
#define AHB_DMA_INLINK_DSCR_CH4_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_CH4_S  0

#define AHB_DMA_IN_DSCR_BF0_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x52C)
/* AHB_DMA_INLINK_DSCR_BF0_CH4 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current receive descriptor x that has already bee
n fetched..*/
#define AHB_DMA_INLINK_DSCR_BF0_CH4    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH4_M  ((AHB_DMA_INLINK_DSCR_BF0_CH4_V)<<(AHB_DMA_INLINK_DSCR_BF0_CH4_S))
#define AHB_DMA_INLINK_DSCR_BF0_CH4_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF0_CH4_S  0

#define AHB_DMA_IN_DSCR_BF1_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x530)
/* AHB_DMA_INLINK_DSCR_BF1_CH4 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous receive descriptor x-1 that has already
been fetched..*/
#define AHB_DMA_INLINK_DSCR_BF1_CH4    0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH4_M  ((AHB_DMA_INLINK_DSCR_BF1_CH4_V)<<(AHB_DMA_INLINK_DSCR_BF1_CH4_S))
#define AHB_DMA_INLINK_DSCR_BF1_CH4_V  0xFFFFFFFF
#define AHB_DMA_INLINK_DSCR_BF1_CH4_S  0

#define AHB_DMA_IN_PRI_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x534)
/* AHB_DMA_RX_PRI_CH4 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of RX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_RX_PRI_CH4    0x0000000F
#define AHB_DMA_RX_PRI_CH4_M  ((AHB_DMA_RX_PRI_CH4_V)<<(AHB_DMA_RX_PRI_CH4_S))
#define AHB_DMA_RX_PRI_CH4_V  0xF
#define AHB_DMA_RX_PRI_CH4_S  0

#define AHB_DMA_IN_PERI_SEL_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x538)
/* AHB_DMA_PERI_IN_SEL_CH4 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to RX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_IN_SEL_CH4    0x0000003F
#define AHB_DMA_PERI_IN_SEL_CH4_M  ((AHB_DMA_PERI_IN_SEL_CH4_V)<<(AHB_DMA_PERI_IN_SEL_CH4_S))
#define AHB_DMA_PERI_IN_SEL_CH4_V  0x3F
#define AHB_DMA_PERI_IN_SEL_CH4_S  0

#define AHB_DMA_RX_CH_ARB_WEIGH_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x53C)
/* AHB_DMA_RX_CH_ARB_WEIGH_CH4 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of RX channel$n.*/
#define AHB_DMA_RX_CH_ARB_WEIGH_CH4    0x0000000F
#define AHB_DMA_RX_CH_ARB_WEIGH_CH4_M  ((AHB_DMA_RX_CH_ARB_WEIGH_CH4_V)<<(AHB_DMA_RX_CH_ARB_WEIGH_CH4_S))
#define AHB_DMA_RX_CH_ARB_WEIGH_CH4_V  0xF
#define AHB_DMA_RX_CH_ARB_WEIGH_CH4_S  0

#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x540)
/* AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH4 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH4    (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH4_M  (BIT(0))
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH4_V  0x1
#define AHB_DMA_RX_ARB_WEIGH_OPT_DIR_CH4_S  0

#define AHB_DMA_OUT_CONF0_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x580)
/* AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH4 : R/W ;bitpos:[9:8] ;default: 2'b0 ; */
/*description:  Configures max burst size for TX channel$n.\\2'b00: single\\ 2'b01: incr4\\ 2'b
10: incr8\\ 2'b11: incr16\\.*/
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH4    0x00000003
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH4_M  ((AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH4_V)<<(AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH4_S))
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH4_V  0x3
#define AHB_DMA_OUT_DATA_BURST_MODE_SEL_CH4_S  8
/* AHB_DMA_OUT_ETM_EN_CH4 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description:  Configures whether to enable ETM control for TX channel $n.\\0: Disable\\1: Ena
ble\\.*/
#define AHB_DMA_OUT_ETM_EN_CH4    (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH4_M  (BIT(6))
#define AHB_DMA_OUT_ETM_EN_CH4_V  0x1
#define AHB_DMA_OUT_ETM_EN_CH4_S  6
/* AHB_DMA_OUTDSCR_BURST_EN_CH4 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description:  Configures whether to enable INCR burst transfer for TX channel $n reading desc
riptors.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUTDSCR_BURST_EN_CH4    (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH4_M  (BIT(4))
#define AHB_DMA_OUTDSCR_BURST_EN_CH4_V  0x1
#define AHB_DMA_OUTDSCR_BURST_EN_CH4_S  4
/* AHB_DMA_OUT_EOF_MODE_CH4 : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description:  Configures when to generate EOF flag.\\0: EOF flag for TX channel $n is generat
ed when data to be transmitted has been pushed into FIFO in AHB_DMA.\\ 1: EOF fl
ag for TX channel $n is generated when data to be transmitted has been popped fr
om FIFO in AHB_DMA.\\.*/
#define AHB_DMA_OUT_EOF_MODE_CH4    (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH4_M  (BIT(3))
#define AHB_DMA_OUT_EOF_MODE_CH4_V  0x1
#define AHB_DMA_OUT_EOF_MODE_CH4_S  3
/* AHB_DMA_OUT_AUTO_WRBACK_CH4 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to enable automatic outlink write-back when all the data in
TX FIFO has been transmitted.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_OUT_AUTO_WRBACK_CH4    (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH4_M  (BIT(2))
#define AHB_DMA_OUT_AUTO_WRBACK_CH4_V  0x1
#define AHB_DMA_OUT_AUTO_WRBACK_CH4_S  2
/* AHB_DMA_OUT_LOOP_TEST_CH4 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_LOOP_TEST_CH4    (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH4_M  (BIT(1))
#define AHB_DMA_OUT_LOOP_TEST_CH4_V  0x1
#define AHB_DMA_OUT_LOOP_TEST_CH4_S  1
/* AHB_DMA_OUT_RST_CH4 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures the reset state of AHB_DMA channel $n TX FSM and TX FIFO pointer.\\0
: Release reset\\1: Reset\\.*/
#define AHB_DMA_OUT_RST_CH4    (BIT(0))
#define AHB_DMA_OUT_RST_CH4_M  (BIT(0))
#define AHB_DMA_OUT_RST_CH4_V  0x1
#define AHB_DMA_OUT_RST_CH4_S  0

#define AHB_DMA_OUT_CONF1_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x584)
/* AHB_DMA_OUT_CHECK_OWNER_CH4 : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description:  Configures whether to enable owner bit check for TX channel $n.\\0: Disable\\1:
 Enable\\.*/
#define AHB_DMA_OUT_CHECK_OWNER_CH4    (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH4_M  (BIT(12))
#define AHB_DMA_OUT_CHECK_OWNER_CH4_V  0x1
#define AHB_DMA_OUT_CHECK_OWNER_CH4_S  12

#define AHB_DMA_OUTFIFO_STATUS_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x588)
/* AHB_DMA_OUT_REMAIN_UNDER_4B_CH4 : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH4    (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH4_M  (BIT(26))
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH4_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_4B_CH4_S  26
/* AHB_DMA_OUT_REMAIN_UNDER_3B_CH4 : RO ;bitpos:[25] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH4    (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH4_M  (BIT(25))
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH4_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_3B_CH4_S  25
/* AHB_DMA_OUT_REMAIN_UNDER_2B_CH4 : RO ;bitpos:[24] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH4    (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH4_M  (BIT(24))
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH4_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_2B_CH4_S  24
/* AHB_DMA_OUT_REMAIN_UNDER_1B_CH4 : RO ;bitpos:[23] ;default: 1'b1 ; */
/*description:  Reserved..*/
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH4    (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH4_M  (BIT(23))
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH4_V  0x1
#define AHB_DMA_OUT_REMAIN_UNDER_1B_CH4_S  23
/* AHB_DMA_OUTFIFO_CNT_CH4 : RO ;bitpos:[14:8] ;default: 7'b0 ; */
/*description:  Represents the number of data bytes in L1 TX FIFO for TX channel $n..*/
#define AHB_DMA_OUTFIFO_CNT_CH4    0x0000007F
#define AHB_DMA_OUTFIFO_CNT_CH4_M  ((AHB_DMA_OUTFIFO_CNT_CH4_V)<<(AHB_DMA_OUTFIFO_CNT_CH4_S))
#define AHB_DMA_OUTFIFO_CNT_CH4_V  0x7F
#define AHB_DMA_OUTFIFO_CNT_CH4_S  8
/* AHB_DMA_OUTFIFO_EMPTY_CH4 : RO ;bitpos:[1] ;default: 1'b1 ; */
/*description:  Represents whether L1 TX FIFO is empty.\\0: Not empty\\1: Empty\\.*/
#define AHB_DMA_OUTFIFO_EMPTY_CH4    (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH4_M  (BIT(1))
#define AHB_DMA_OUTFIFO_EMPTY_CH4_V  0x1
#define AHB_DMA_OUTFIFO_EMPTY_CH4_S  1
/* AHB_DMA_OUTFIFO_FULL_CH4 : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Represents whether L1 TX FIFO is full.\\0: Not Full\\1: Full\\.*/
#define AHB_DMA_OUTFIFO_FULL_CH4    (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH4_M  (BIT(0))
#define AHB_DMA_OUTFIFO_FULL_CH4_V  0x1
#define AHB_DMA_OUTFIFO_FULL_CH4_S  0

#define AHB_DMA_OUT_PUSH_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x58C)
/* AHB_DMA_OUTFIFO_PUSH_CH4 : WT ;bitpos:[9] ;default: 1'h0 ; */
/*description:  Configures whether to push data into AHB_DMA FIFO.\\0: Invalid. No effect\\1: P
ush\\.*/
#define AHB_DMA_OUTFIFO_PUSH_CH4    (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH4_M  (BIT(9))
#define AHB_DMA_OUTFIFO_PUSH_CH4_V  0x1
#define AHB_DMA_OUTFIFO_PUSH_CH4_S  9
/* AHB_DMA_OUTFIFO_WDATA_CH4 : R/W ;bitpos:[8:0] ;default: 9'h0 ; */
/*description:  Configures the data that need to be pushed into AHB_DMA FIFO..*/
#define AHB_DMA_OUTFIFO_WDATA_CH4    0x000001FF
#define AHB_DMA_OUTFIFO_WDATA_CH4_M  ((AHB_DMA_OUTFIFO_WDATA_CH4_V)<<(AHB_DMA_OUTFIFO_WDATA_CH4_S))
#define AHB_DMA_OUTFIFO_WDATA_CH4_V  0x1FF
#define AHB_DMA_OUTFIFO_WDATA_CH4_S  0

#define AHB_DMA_OUT_LINK_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x590)
/* AHB_DMA_OUTLINK_PARK_CH4 : RO ;bitpos:[3] ;default: 1'h1 ; */
/*description:  Represents the status of the transmit descriptor's FSM.\\0: Running\\1: Idle\\.*/
#define AHB_DMA_OUTLINK_PARK_CH4    (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH4_M  (BIT(3))
#define AHB_DMA_OUTLINK_PARK_CH4_V  0x1
#define AHB_DMA_OUTLINK_PARK_CH4_S  3
/* AHB_DMA_OUTLINK_RESTART_CH4 : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description:  Configures whether to restart TX channel $n for AHB_DMA transfer.\\0: Invalid.
No effect\\1: Restart\\.*/
#define AHB_DMA_OUTLINK_RESTART_CH4    (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH4_M  (BIT(2))
#define AHB_DMA_OUTLINK_RESTART_CH4_V  0x1
#define AHB_DMA_OUTLINK_RESTART_CH4_S  2
/* AHB_DMA_OUTLINK_START_CH4 : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description:  Configures whether to enable AHB_DMA's TX channel $n for data transfer.\\0: Dis
able\\1: Enable\\.*/
#define AHB_DMA_OUTLINK_START_CH4    (BIT(1))
#define AHB_DMA_OUTLINK_START_CH4_M  (BIT(1))
#define AHB_DMA_OUTLINK_START_CH4_V  0x1
#define AHB_DMA_OUTLINK_START_CH4_S  1
/* AHB_DMA_OUTLINK_STOP_CH4 : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description:  Configures whether to stop AHB_DMA's TX channel $n from transmitting data.\\0:
Invalid. No effect\\1: Stop\\.*/
#define AHB_DMA_OUTLINK_STOP_CH4    (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH4_M  (BIT(0))
#define AHB_DMA_OUTLINK_STOP_CH4_V  0x1
#define AHB_DMA_OUTLINK_STOP_CH4_S  0

#define AHB_DMA_OUT_LINK_ADDR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x594)
/* AHB_DMA_OUTLINK_ADDR_CH4 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the 32 bits of the first receive descriptor's address..*/
#define AHB_DMA_OUTLINK_ADDR_CH4    0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH4_M  ((AHB_DMA_OUTLINK_ADDR_CH4_V)<<(AHB_DMA_OUTLINK_ADDR_CH4_S))
#define AHB_DMA_OUTLINK_ADDR_CH4_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_ADDR_CH4_S  0

#define AHB_DMA_OUT_STATE_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x598)
/* AHB_DMA_OUT_STATE_CH4 : RO ;bitpos:[22:20] ;default: 3'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_STATE_CH4    0x00000007
#define AHB_DMA_OUT_STATE_CH4_M  ((AHB_DMA_OUT_STATE_CH4_V)<<(AHB_DMA_OUT_STATE_CH4_S))
#define AHB_DMA_OUT_STATE_CH4_V  0x7
#define AHB_DMA_OUT_STATE_CH4_S  20
/* AHB_DMA_OUT_DSCR_STATE_CH4 : RO ;bitpos:[19:18] ;default: 2'b0 ; */
/*description:  reserved.*/
#define AHB_DMA_OUT_DSCR_STATE_CH4    0x00000003
#define AHB_DMA_OUT_DSCR_STATE_CH4_M  ((AHB_DMA_OUT_DSCR_STATE_CH4_V)<<(AHB_DMA_OUT_DSCR_STATE_CH4_S))
#define AHB_DMA_OUT_DSCR_STATE_CH4_V  0x3
#define AHB_DMA_OUT_DSCR_STATE_CH4_S  18
/* AHB_DMA_OUTLINK_DSCR_ADDR_CH4 : RO ;bitpos:[17:0] ;default: 18'b0 ; */
/*description:  Represents the lower 18 bits of the address of the next transmit descriptor to
be processed..*/
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH4    0x0003FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH4_M  ((AHB_DMA_OUTLINK_DSCR_ADDR_CH4_V)<<(AHB_DMA_OUTLINK_DSCR_ADDR_CH4_S))
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH4_V  0x3FFFF
#define AHB_DMA_OUTLINK_DSCR_ADDR_CH4_S  0

#define AHB_DMA_OUT_EOF_DES_ADDR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x59C)
/* AHB_DMA_OUT_EOF_DES_ADDR_CH4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor when the EOF bit in this desc
riptor is 1..*/
#define AHB_DMA_OUT_EOF_DES_ADDR_CH4    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH4_M  ((AHB_DMA_OUT_EOF_DES_ADDR_CH4_V)<<(AHB_DMA_OUT_EOF_DES_ADDR_CH4_S))
#define AHB_DMA_OUT_EOF_DES_ADDR_CH4_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_DES_ADDR_CH4_S  0

#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x5A0)
/* AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the transmit descriptor before the last transmit desc
riptor..*/
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH4    0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH4_M  ((AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH4_V)<<(AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH4_S))
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH4_V  0xFFFFFFFF
#define AHB_DMA_OUT_EOF_BFR_DES_ADDR_CH4_S  0

#define AHB_DMA_OUT_DONE_DES_ADDR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x5A4)
/* AHB_DMA_OUT_DONE_DES_ADDR_CH4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the outlink descriptor when this descriptor is comple
ted..*/
#define AHB_DMA_OUT_DONE_DES_ADDR_CH4    0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH4_M  ((AHB_DMA_OUT_DONE_DES_ADDR_CH4_V)<<(AHB_DMA_OUT_DONE_DES_ADDR_CH4_S))
#define AHB_DMA_OUT_DONE_DES_ADDR_CH4_V  0xFFFFFFFF
#define AHB_DMA_OUT_DONE_DES_ADDR_CH4_S  0

#define AHB_DMA_OUT_DSCR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x5A8)
/* AHB_DMA_OUTLINK_DSCR_CH4 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the next transmit descriptor y+1 pointed by the curre
nt transmit descriptor that has already been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_CH4    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH4_M  ((AHB_DMA_OUTLINK_DSCR_CH4_V)<<(AHB_DMA_OUTLINK_DSCR_CH4_S))
#define AHB_DMA_OUTLINK_DSCR_CH4_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_CH4_S  0

#define AHB_DMA_OUT_DSCR_BF0_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x5AC)
/* AHB_DMA_OUTLINK_DSCR_BF0_CH4 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the current transmit descriptor y that has already be
en fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF0_CH4    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH4_M  ((AHB_DMA_OUTLINK_DSCR_BF0_CH4_V)<<(AHB_DMA_OUTLINK_DSCR_BF0_CH4_S))
#define AHB_DMA_OUTLINK_DSCR_BF0_CH4_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF0_CH4_S  0

#define AHB_DMA_OUT_DSCR_BF1_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x5B0)
/* AHB_DMA_OUTLINK_DSCR_BF1_CH4 : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description:  Represents the address of the previous transmit descriptor y-1 that has already
 been fetched..*/
#define AHB_DMA_OUTLINK_DSCR_BF1_CH4    0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH4_M  ((AHB_DMA_OUTLINK_DSCR_BF1_CH4_V)<<(AHB_DMA_OUTLINK_DSCR_BF1_CH4_S))
#define AHB_DMA_OUTLINK_DSCR_BF1_CH4_V  0xFFFFFFFF
#define AHB_DMA_OUTLINK_DSCR_BF1_CH4_S  0

#define AHB_DMA_OUT_PRI_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x5B4)
/* AHB_DMA_TX_PRI_CH4 : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description:  Configures the priority of TX channel $n.The larger of the value, the higher of
 the priority..*/
#define AHB_DMA_TX_PRI_CH4    0x0000000F
#define AHB_DMA_TX_PRI_CH4_M  ((AHB_DMA_TX_PRI_CH4_V)<<(AHB_DMA_TX_PRI_CH4_S))
#define AHB_DMA_TX_PRI_CH4_V  0xF
#define AHB_DMA_TX_PRI_CH4_S  0

#define AHB_DMA_OUT_PERI_SEL_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x5B8)
/* AHB_DMA_PERI_OUT_SEL_CH4 : R/W ;bitpos:[5:0] ;default: 6'h3f ; */
/*description:  Configures the peripheral connected to TX channel $n. \\0: UHCI0. \\1: I2S0-0.
\\2: I2S0-1. \\3: I2S0-2. \\4: I2S0-3. \\5: I2S1-0. \\6: I2S1-1. \\7: I2S1-2. \\
8: I2S1-3 \\9: I2S2-0. \\10: I2S2-1. \\11: I2S-2. \\12: I2S-3. \\13: RMT..*/
#define AHB_DMA_PERI_OUT_SEL_CH4    0x0000003F
#define AHB_DMA_PERI_OUT_SEL_CH4_M  ((AHB_DMA_PERI_OUT_SEL_CH4_V)<<(AHB_DMA_PERI_OUT_SEL_CH4_S))
#define AHB_DMA_PERI_OUT_SEL_CH4_V  0x3F
#define AHB_DMA_PERI_OUT_SEL_CH4_S  0

#define AHB_DMA_TX_CH_ARB_WEIGH_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x5BC)
/* AHB_DMA_TX_CH_ARB_WEIGH_CH4 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description:  Configures the weight(i.e the number of tokens) of TX channel$n.*/
#define AHB_DMA_TX_CH_ARB_WEIGH_CH4    0x0000000F
#define AHB_DMA_TX_CH_ARB_WEIGH_CH4_M  ((AHB_DMA_TX_CH_ARB_WEIGH_CH4_V)<<(AHB_DMA_TX_CH_ARB_WEIGH_CH4_S))
#define AHB_DMA_TX_CH_ARB_WEIGH_CH4_V  0xF
#define AHB_DMA_TX_CH_ARB_WEIGH_CH4_S  0

#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH4_REG          (DR_REG_AHB_DMA_BASE + 0x5C0)
/* AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH4 : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  reserved.*/
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH4    (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH4_M  (BIT(0))
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH4_V  0x1
#define AHB_DMA_TX_ARB_WEIGH_OPT_DIR_CH4_S  0

#define AHB_DMA_INTR_MEM_START_ADDR_REG          (DR_REG_AHB_DMA_BASE + 0x600)
/* AHB_DMA_ACCESS_INTR_MEM_START_ADDR : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Configures the start address of accessible address space..*/
#define AHB_DMA_ACCESS_INTR_MEM_START_ADDR    0xFFFFFFFF
#define AHB_DMA_ACCESS_INTR_MEM_START_ADDR_M  ((AHB_DMA_ACCESS_INTR_MEM_START_ADDR_V)<<(AHB_DMA_ACCESS_INTR_MEM_START_ADDR_S))
#define AHB_DMA_ACCESS_INTR_MEM_START_ADDR_V  0xFFFFFFFF
#define AHB_DMA_ACCESS_INTR_MEM_START_ADDR_S  0

#define AHB_DMA_INTR_MEM_END_ADDR_REG          (DR_REG_AHB_DMA_BASE + 0x604)
/* AHB_DMA_ACCESS_INTR_MEM_END_ADDR : R/W ;bitpos:[31:0] ;default: 32'hffffffff ; */
/*description:  Configures the end address of accessible address space..*/
#define AHB_DMA_ACCESS_INTR_MEM_END_ADDR    0xFFFFFFFF
#define AHB_DMA_ACCESS_INTR_MEM_END_ADDR_M  ((AHB_DMA_ACCESS_INTR_MEM_END_ADDR_V)<<(AHB_DMA_ACCESS_INTR_MEM_END_ADDR_S))
#define AHB_DMA_ACCESS_INTR_MEM_END_ADDR_V  0xFFFFFFFF
#define AHB_DMA_ACCESS_INTR_MEM_END_ADDR_S  0

#define AHB_DMA_ARB_TIMEOUT_REG          (DR_REG_AHB_DMA_BASE + 0x608)
/* AHB_DMA_ARB_TIMEOUT : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description:  Configures the time slot. Measurement unit: AHB bus clock cycle..*/
#define AHB_DMA_ARB_TIMEOUT    0x0000FFFF
#define AHB_DMA_ARB_TIMEOUT_M  ((AHB_DMA_ARB_TIMEOUT_V)<<(AHB_DMA_ARB_TIMEOUT_S))
#define AHB_DMA_ARB_TIMEOUT_V  0xFFFF
#define AHB_DMA_ARB_TIMEOUT_S  0

#define AHB_DMA_WEIGHT_EN_REG          (DR_REG_AHB_DMA_BASE + 0x610)
/* AHB_DMA_WEIGHT_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description:  Configures whether to enable weight arbitration.\\0: Disable\\1: Enable\\.*/
#define AHB_DMA_WEIGHT_EN    (BIT(0))
#define AHB_DMA_WEIGHT_EN_M  (BIT(0))
#define AHB_DMA_WEIGHT_EN_V  0x1
#define AHB_DMA_WEIGHT_EN_S  0

#define AHB_DMA_MODULE_CLK_EN_REG          (DR_REG_AHB_DMA_BASE + 0x618)
/* AHB_DMA_AHBINF_CLK_EN : R/W ;bitpos:[28] ;default: 1'h1 ; */
/*description:  Configures whether to force on ahbinf module clock. \\0 : Not force on ahbinf c
lock \\1 : Force on ahbinf clock\\.*/
#define AHB_DMA_AHBINF_CLK_EN    (BIT(28))
#define AHB_DMA_AHBINF_CLK_EN_M  (BIT(28))
#define AHB_DMA_AHBINF_CLK_EN_V  0x1
#define AHB_DMA_AHBINF_CLK_EN_S  28
/* AHB_DMA_CMD_ARB_CLK_EN : R/W ;bitpos:[27] ;default: 1'h1 ; */
/*description:  Configures whether to force on cmd_arb module clock. \\0 : Not force on cmd_arb
 clock \\1 : Force on cmd_arb clock\\.*/
#define AHB_DMA_CMD_ARB_CLK_EN    (BIT(27))
#define AHB_DMA_CMD_ARB_CLK_EN_M  (BIT(27))
#define AHB_DMA_CMD_ARB_CLK_EN_V  0x1
#define AHB_DMA_CMD_ARB_CLK_EN_S  27
/* AHB_DMA_IN_CTRL_CLK_EN : R/W ;bitpos:[24:20] ;default: 5'h1f ; */
/*description:  Configures whether to force on in_ctrl 4~0 module clock. For bit n:\\0 : Not fo
rce on in_ctrl n clock \\1 : Force on in_ctrl n clock\\.*/
#define AHB_DMA_IN_CTRL_CLK_EN    0x0000001F
#define AHB_DMA_IN_CTRL_CLK_EN_M  ((AHB_DMA_IN_CTRL_CLK_EN_V)<<(AHB_DMA_IN_CTRL_CLK_EN_S))
#define AHB_DMA_IN_CTRL_CLK_EN_V  0x1F
#define AHB_DMA_IN_CTRL_CLK_EN_S  20
/* AHB_DMA_IN_DSCR_CLK_EN : R/W ;bitpos:[19:15] ;default: 5'h1f ; */
/*description:  Configures whether to force on in_dscr 4~0 module clock. For bit n:\\0 : Not fo
rce on in_dscr n clock \\1 : Force on in_dscr n clock\\.*/
#define AHB_DMA_IN_DSCR_CLK_EN    0x0000001F
#define AHB_DMA_IN_DSCR_CLK_EN_M  ((AHB_DMA_IN_DSCR_CLK_EN_V)<<(AHB_DMA_IN_DSCR_CLK_EN_S))
#define AHB_DMA_IN_DSCR_CLK_EN_V  0x1F
#define AHB_DMA_IN_DSCR_CLK_EN_S  15
/* AHB_DMA_OUT_CTRL_CLK_EN : R/W ;bitpos:[14:10] ;default: 5'h1f ; */
/*description:  Configures whether to force on out_ctrl 4~0 module clock. For bit n:\\0 : Not f
orce on out_ctrl n clock \\1 : Force on out_ctrl n clock\\.*/
#define AHB_DMA_OUT_CTRL_CLK_EN    0x0000001F
#define AHB_DMA_OUT_CTRL_CLK_EN_M  ((AHB_DMA_OUT_CTRL_CLK_EN_V)<<(AHB_DMA_OUT_CTRL_CLK_EN_S))
#define AHB_DMA_OUT_CTRL_CLK_EN_V  0x1F
#define AHB_DMA_OUT_CTRL_CLK_EN_S  10
/* AHB_DMA_OUT_DSCR_CLK_EN : R/W ;bitpos:[9:5] ;default: 5'h1f ; */
/*description:  Configures whether to force on out_dscr 4~0 module clock. For bit n:\\0 : Not f
orce on out_dscr n clock \\1 : Force on out_dscr n clock\\.*/
#define AHB_DMA_OUT_DSCR_CLK_EN    0x0000001F
#define AHB_DMA_OUT_DSCR_CLK_EN_M  ((AHB_DMA_OUT_DSCR_CLK_EN_V)<<(AHB_DMA_OUT_DSCR_CLK_EN_S))
#define AHB_DMA_OUT_DSCR_CLK_EN_V  0x1F
#define AHB_DMA_OUT_DSCR_CLK_EN_S  5
/* AHB_DMA_AHB_APB_SYNC_CLK_EN : R/W ;bitpos:[4:0] ;default: 5'h1f ; */
/*description:  Configures whether to force on ahb_apb_sync 4~0 module clock. For bit n:\\0 : N
ot force on ahb_apb_sync n clock \\1 : Force on ahb_apb_sync n clock\\.*/
#define AHB_DMA_AHB_APB_SYNC_CLK_EN    0x0000001F
#define AHB_DMA_AHB_APB_SYNC_CLK_EN_M  ((AHB_DMA_AHB_APB_SYNC_CLK_EN_V)<<(AHB_DMA_AHB_APB_SYNC_CLK_EN_S))
#define AHB_DMA_AHB_APB_SYNC_CLK_EN_V  0x1F
#define AHB_DMA_AHB_APB_SYNC_CLK_EN_S  0

#define AHB_DMA_AHBINF_RESP_ERR_STATUS0_REG          (DR_REG_AHB_DMA_BASE + 0x620)
/* AHB_DMA_AHBINF_RESP_ERR_ADDR : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description:  Represents the address of the AHB response error..*/
#define AHB_DMA_AHBINF_RESP_ERR_ADDR    0xFFFFFFFF
#define AHB_DMA_AHBINF_RESP_ERR_ADDR_M  ((AHB_DMA_AHBINF_RESP_ERR_ADDR_V)<<(AHB_DMA_AHBINF_RESP_ERR_ADDR_S))
#define AHB_DMA_AHBINF_RESP_ERR_ADDR_V  0xFFFFFFFF
#define AHB_DMA_AHBINF_RESP_ERR_ADDR_S  0

#define AHB_DMA_AHBINF_RESP_ERR_STATUS1_REG          (DR_REG_AHB_DMA_BASE + 0x624)
/* AHB_DMA_AHBINF_RESP_ERR_CH_ID : RO ;bitpos:[8:5] ;default: 4'h0 ; */
/*description:  Represents the AHB response error request channel id.bit[3]=1:TX channel.\\bit[
3]=0:RX channel.\\.*/
#define AHB_DMA_AHBINF_RESP_ERR_CH_ID    0x0000000F
#define AHB_DMA_AHBINF_RESP_ERR_CH_ID_M  ((AHB_DMA_AHBINF_RESP_ERR_CH_ID_V)<<(AHB_DMA_AHBINF_RESP_ERR_CH_ID_S))
#define AHB_DMA_AHBINF_RESP_ERR_CH_ID_V  0xF
#define AHB_DMA_AHBINF_RESP_ERR_CH_ID_S  5
/* AHB_DMA_AHBINF_RESP_ERR_ID : RO ;bitpos:[4:1] ;default: 4'hf ; */
/*description:  Represents the AHB response error request id..*/
#define AHB_DMA_AHBINF_RESP_ERR_ID    0x0000000F
#define AHB_DMA_AHBINF_RESP_ERR_ID_M  ((AHB_DMA_AHBINF_RESP_ERR_ID_V)<<(AHB_DMA_AHBINF_RESP_ERR_ID_S))
#define AHB_DMA_AHBINF_RESP_ERR_ID_V  0xF
#define AHB_DMA_AHBINF_RESP_ERR_ID_S  1
/* AHB_DMA_AHBINF_RESP_ERR_WR : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description:  Represents the AHB response error is write request..*/
#define AHB_DMA_AHBINF_RESP_ERR_WR    (BIT(0))
#define AHB_DMA_AHBINF_RESP_ERR_WR_M  (BIT(0))
#define AHB_DMA_AHBINF_RESP_ERR_WR_V  0x1
#define AHB_DMA_AHBINF_RESP_ERR_WR_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_AHB_DMA_REG_H_ */
