/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_PPA_REG_H_
#define _SOC_PPA_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define PPA_BLEND0_CLUT_DATA_REG          (DR_REG_PPA_BASE + 0x0)
/* PPA_RDWR_WORD_BLEND0_CLUT : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Write and read data to/from CLUT RAM in background plane of blender engine throu
gh this field in fifo mode..*/
#define PPA_RDWR_WORD_BLEND0_CLUT    0xFFFFFFFF
#define PPA_RDWR_WORD_BLEND0_CLUT_M  ((PPA_RDWR_WORD_BLEND0_CLUT_V)<<(PPA_RDWR_WORD_BLEND0_CLUT_S))
#define PPA_RDWR_WORD_BLEND0_CLUT_V  0xFFFFFFFF
#define PPA_RDWR_WORD_BLEND0_CLUT_S  0

#define PPA_BLEND1_CLUT_DATA_REG          (DR_REG_PPA_BASE + 0x4)
/* PPA_RDWR_WORD_BLEND1_CLUT : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Write and read data to/from CLUT RAM in foreground plane of blender engine throu
gh this field in fifo mode..*/
#define PPA_RDWR_WORD_BLEND1_CLUT    0xFFFFFFFF
#define PPA_RDWR_WORD_BLEND1_CLUT_M  ((PPA_RDWR_WORD_BLEND1_CLUT_V)<<(PPA_RDWR_WORD_BLEND1_CLUT_S))
#define PPA_RDWR_WORD_BLEND1_CLUT_V  0xFFFFFFFF
#define PPA_RDWR_WORD_BLEND1_CLUT_S  0

#define PPA_CLUT_CONF_REG          (DR_REG_PPA_BASE + 0xC)
/* PPA_BLEND_CLUT_MEM_CLK_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: 1: Force clock on for BLEND CLUT memory..*/
#define PPA_BLEND_CLUT_MEM_CLK_ENA    (BIT(7))
#define PPA_BLEND_CLUT_MEM_CLK_ENA_M  (BIT(7))
#define PPA_BLEND_CLUT_MEM_CLK_ENA_V  0x1
#define PPA_BLEND_CLUT_MEM_CLK_ENA_S  7
/* PPA_BLEND_CLUT_MEM_FORCE_PU : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: 1: force power up BLEND CLUT memory..*/
#define PPA_BLEND_CLUT_MEM_FORCE_PU    (BIT(6))
#define PPA_BLEND_CLUT_MEM_FORCE_PU_M  (BIT(6))
#define PPA_BLEND_CLUT_MEM_FORCE_PU_V  0x1
#define PPA_BLEND_CLUT_MEM_FORCE_PU_S  6
/* PPA_BLEND_CLUT_MEM_FORCE_PD : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: 1: force power down BLEND CLUT memory..*/
#define PPA_BLEND_CLUT_MEM_FORCE_PD    (BIT(5))
#define PPA_BLEND_CLUT_MEM_FORCE_PD_M  (BIT(5))
#define PPA_BLEND_CLUT_MEM_FORCE_PD_V  0x1
#define PPA_BLEND_CLUT_MEM_FORCE_PD_S  5
/* PPA_BLEND1_CLUT_MEM_RDADDR_RST : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Write 1 then write 0 to reset the read address of BLEND1 CLUT in fifo mode..*/
#define PPA_BLEND1_CLUT_MEM_RDADDR_RST    (BIT(4))
#define PPA_BLEND1_CLUT_MEM_RDADDR_RST_M  (BIT(4))
#define PPA_BLEND1_CLUT_MEM_RDADDR_RST_V  0x1
#define PPA_BLEND1_CLUT_MEM_RDADDR_RST_S  4
/* PPA_BLEND0_CLUT_MEM_RDADDR_RST : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: Write 1 then write 0 to reset the read address of BLEND0 CLUT in fifo mode..*/
#define PPA_BLEND0_CLUT_MEM_RDADDR_RST    (BIT(3))
#define PPA_BLEND0_CLUT_MEM_RDADDR_RST_M  (BIT(3))
#define PPA_BLEND0_CLUT_MEM_RDADDR_RST_V  0x1
#define PPA_BLEND0_CLUT_MEM_RDADDR_RST_S  3
/* PPA_BLEND1_CLUT_MEM_RST : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Write 1 then write 0 to this bit to reset BLEND1 CLUT..*/
#define PPA_BLEND1_CLUT_MEM_RST    (BIT(2))
#define PPA_BLEND1_CLUT_MEM_RST_M  (BIT(2))
#define PPA_BLEND1_CLUT_MEM_RST_V  0x1
#define PPA_BLEND1_CLUT_MEM_RST_S  2
/* PPA_BLEND0_CLUT_MEM_RST : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Write 1 then write 0 to this bit to reset BLEND0 CLUT..*/
#define PPA_BLEND0_CLUT_MEM_RST    (BIT(1))
#define PPA_BLEND0_CLUT_MEM_RST_M  (BIT(1))
#define PPA_BLEND0_CLUT_MEM_RST_V  0x1
#define PPA_BLEND0_CLUT_MEM_RST_S  1
/* PPA_APB_FIFO_MASK : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: 1'b0: fifo mode to wr/rd clut0/clut1 RAM through register PPA_SRM_CLUT_DATA_REG/
PPA_BLEND0_CLUT_DATA_REG/PPA_BLEND1_CLUT_DATA_REG. 1'b1: memory mode to wr/rd sr
/blend0/blend1 clut RAM. The bit 11 and 10 of the waddr should be 01 to access s
r clut and should be 10 to access blend0 clut and should be 11 to access blend 1
 clut in memory mode..*/
#define PPA_APB_FIFO_MASK    (BIT(0))
#define PPA_APB_FIFO_MASK_M  (BIT(0))
#define PPA_APB_FIFO_MASK_V  0x1
#define PPA_APB_FIFO_MASK_S  0

#define PPA_INT_RAW_REG          (DR_REG_PPA_BASE + 0x10)
/* PPA_BLEND_PARAM_CFG_ERR_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description: The raw interrupt bit turns to high level when the configured blending coefficie
nt is wrong. User can check the reasons through register PPA_BLEND_ST_REG..*/
#define PPA_BLEND_PARAM_CFG_ERR_INT_RAW    (BIT(3))
#define PPA_BLEND_PARAM_CFG_ERR_INT_RAW_M  (BIT(3))
#define PPA_BLEND_PARAM_CFG_ERR_INT_RAW_V  0x1
#define PPA_BLEND_PARAM_CFG_ERR_INT_RAW_S  3
/* PPA_SRM_PARAM_CFG_ERR_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description: The raw interrupt bit turns to high level when the configured scaling and rotati
ng coefficient is wrong. User can check the reasons through register PPA_SRM_PAR
AM_ERR_ST_REG..*/
#define PPA_SRM_PARAM_CFG_ERR_INT_RAW    (BIT(2))
#define PPA_SRM_PARAM_CFG_ERR_INT_RAW_M  (BIT(2))
#define PPA_SRM_PARAM_CFG_ERR_INT_RAW_V  0x1
#define PPA_SRM_PARAM_CFG_ERR_INT_RAW_S  2
/* PPA_BLEND_EOF_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description: The raw interrupt bit turns to high level when blending engine calculate one fra
me image..*/
#define PPA_BLEND_EOF_INT_RAW    (BIT(1))
#define PPA_BLEND_EOF_INT_RAW_M  (BIT(1))
#define PPA_BLEND_EOF_INT_RAW_V  0x1
#define PPA_BLEND_EOF_INT_RAW_S  1
/* PPA_SRM_EOF_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description: The raw interrupt bit turns to high level when scaling and rotating engine calcu
late one frame image..*/
#define PPA_SRM_EOF_INT_RAW    (BIT(0))
#define PPA_SRM_EOF_INT_RAW_M  (BIT(0))
#define PPA_SRM_EOF_INT_RAW_V  0x1
#define PPA_SRM_EOF_INT_RAW_S  0

#define PPA_INT_ST_REG          (DR_REG_PPA_BASE + 0x14)
/* PPA_BLEND_PARAM_CFG_ERR_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description: The raw interrupt status bit for the PPA_BLEND_PARAM_CFG_ERR_INT interrupt..*/
#define PPA_BLEND_PARAM_CFG_ERR_INT_ST    (BIT(3))
#define PPA_BLEND_PARAM_CFG_ERR_INT_ST_M  (BIT(3))
#define PPA_BLEND_PARAM_CFG_ERR_INT_ST_V  0x1
#define PPA_BLEND_PARAM_CFG_ERR_INT_ST_S  3
/* PPA_SRM_PARAM_CFG_ERR_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: The raw interrupt status bit for the PPA_SRM_PARAM_CFG_ERR_INT interrupt..*/
#define PPA_SRM_PARAM_CFG_ERR_INT_ST    (BIT(2))
#define PPA_SRM_PARAM_CFG_ERR_INT_ST_M  (BIT(2))
#define PPA_SRM_PARAM_CFG_ERR_INT_ST_V  0x1
#define PPA_SRM_PARAM_CFG_ERR_INT_ST_S  2
/* PPA_BLEND_EOF_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: The raw interrupt status bit for the PPA_BLEND_EOF_INT interrupt..*/
#define PPA_BLEND_EOF_INT_ST    (BIT(1))
#define PPA_BLEND_EOF_INT_ST_M  (BIT(1))
#define PPA_BLEND_EOF_INT_ST_V  0x1
#define PPA_BLEND_EOF_INT_ST_S  1
/* PPA_SRM_EOF_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: The raw interrupt status bit for the PPA_SRM_EOF_INT interrupt..*/
#define PPA_SRM_EOF_INT_ST    (BIT(0))
#define PPA_SRM_EOF_INT_ST_M  (BIT(0))
#define PPA_SRM_EOF_INT_ST_V  0x1
#define PPA_SRM_EOF_INT_ST_S  0

#define PPA_INT_ENA_REG          (DR_REG_PPA_BASE + 0x18)
/* PPA_BLEND_PARAM_CFG_ERR_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: The interrupt enable bit for the PPA_BLEND_PARAM_CFG_ERR_INT interrupt..*/
#define PPA_BLEND_PARAM_CFG_ERR_INT_ENA    (BIT(3))
#define PPA_BLEND_PARAM_CFG_ERR_INT_ENA_M  (BIT(3))
#define PPA_BLEND_PARAM_CFG_ERR_INT_ENA_V  0x1
#define PPA_BLEND_PARAM_CFG_ERR_INT_ENA_S  3
/* PPA_SRM_PARAM_CFG_ERR_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: The interrupt enable bit for the PPA_SRM_PARAM_CFG_ERR_INT interrupt..*/
#define PPA_SRM_PARAM_CFG_ERR_INT_ENA    (BIT(2))
#define PPA_SRM_PARAM_CFG_ERR_INT_ENA_M  (BIT(2))
#define PPA_SRM_PARAM_CFG_ERR_INT_ENA_V  0x1
#define PPA_SRM_PARAM_CFG_ERR_INT_ENA_S  2
/* PPA_BLEND_EOF_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: The interrupt enable bit for the PPA_BLEND_EOF_INT interrupt..*/
#define PPA_BLEND_EOF_INT_ENA    (BIT(1))
#define PPA_BLEND_EOF_INT_ENA_M  (BIT(1))
#define PPA_BLEND_EOF_INT_ENA_V  0x1
#define PPA_BLEND_EOF_INT_ENA_S  1
/* PPA_SRM_EOF_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: The interrupt enable bit for the PPA_SRM_EOF_INT interrupt..*/
#define PPA_SRM_EOF_INT_ENA    (BIT(0))
#define PPA_SRM_EOF_INT_ENA_M  (BIT(0))
#define PPA_SRM_EOF_INT_ENA_V  0x1
#define PPA_SRM_EOF_INT_ENA_S  0

#define PPA_INT_CLR_REG          (DR_REG_PPA_BASE + 0x1C)
/* PPA_BLEND_PARAM_CFG_ERR_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to clear the PPA_BLEND_PARAM_CFG_ERR_INT interrupt..*/
#define PPA_BLEND_PARAM_CFG_ERR_INT_CLR    (BIT(3))
#define PPA_BLEND_PARAM_CFG_ERR_INT_CLR_M  (BIT(3))
#define PPA_BLEND_PARAM_CFG_ERR_INT_CLR_V  0x1
#define PPA_BLEND_PARAM_CFG_ERR_INT_CLR_S  3
/* PPA_SRM_PARAM_CFG_ERR_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to clear the PPA_SRM_RX_YSCAL_ERR_INT interrupt..*/
#define PPA_SRM_PARAM_CFG_ERR_INT_CLR    (BIT(2))
#define PPA_SRM_PARAM_CFG_ERR_INT_CLR_M  (BIT(2))
#define PPA_SRM_PARAM_CFG_ERR_INT_CLR_V  0x1
#define PPA_SRM_PARAM_CFG_ERR_INT_CLR_S  2
/* PPA_BLEND_EOF_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to clear the PPA_BLEND_EOF_INT interrupt..*/
#define PPA_BLEND_EOF_INT_CLR    (BIT(1))
#define PPA_BLEND_EOF_INT_CLR_M  (BIT(1))
#define PPA_BLEND_EOF_INT_CLR_V  0x1
#define PPA_BLEND_EOF_INT_CLR_S  1
/* PPA_SRM_EOF_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to clear the PPA_SRM_EOF_INT interrupt..*/
#define PPA_SRM_EOF_INT_CLR    (BIT(0))
#define PPA_SRM_EOF_INT_CLR_M  (BIT(0))
#define PPA_SRM_EOF_INT_CLR_V  0x1
#define PPA_SRM_EOF_INT_CLR_S  0

#define PPA_SRM_COLOR_MODE_REG          (DR_REG_PPA_BASE + 0x20)
/* PPA_YUV422_RX_BYTE_ORDER : R/W ;bitpos:[13:12] ;default: 2'h0 ; */
/*description: YUV422 input byte order when reg_sr_rx_cm is 4'd9. 0: YVYU, 1:YUYV, 2: VYUY, 3:
UYVY.*/
#define PPA_YUV422_RX_BYTE_ORDER    0x00000003
#define PPA_YUV422_RX_BYTE_ORDER_M  ((PPA_YUV422_RX_BYTE_ORDER_V)<<(PPA_YUV422_RX_BYTE_ORDER_S))
#define PPA_YUV422_RX_BYTE_ORDER_V  0x3
#define PPA_YUV422_RX_BYTE_ORDER_S  12
/* PPA_RGB2YUV_PROTOCAL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: RGB to YUV protocal when reg_sr_tx_cm is 4'd8. 0: BT601. 1: BT709.*/
#define PPA_RGB2YUV_PROTOCAL    (BIT(11))
#define PPA_RGB2YUV_PROTOCAL_M  (BIT(11))
#define PPA_RGB2YUV_PROTOCAL_V  0x1
#define PPA_RGB2YUV_PROTOCAL_S  11
/* PPA_YUV2RGB_PROTOCAL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: YUV to RGB protocal when reg_sr_rx_cm is 4'd8. 0: BT601. 1: BT709.*/
#define PPA_YUV2RGB_PROTOCAL    (BIT(10))
#define PPA_YUV2RGB_PROTOCAL_M  (BIT(10))
#define PPA_YUV2RGB_PROTOCAL_V  0x1
#define PPA_YUV2RGB_PROTOCAL_S  10
/* PPA_YUV_TX_RANGE : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: YUV output range when reg_sr_tx_cm is 4'd8. 0: limit range. 1: full range.*/
#define PPA_YUV_TX_RANGE    (BIT(9))
#define PPA_YUV_TX_RANGE_M  (BIT(9))
#define PPA_YUV_TX_RANGE_V  0x1
#define PPA_YUV_TX_RANGE_S  9
/* PPA_YUV_RX_RANGE : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: YUV input range when reg_sr_rx_cm is 4'd8. 0: limit range. 1: full range.*/
#define PPA_YUV_RX_RANGE    (BIT(8))
#define PPA_YUV_RX_RANGE_M  (BIT(8))
#define PPA_YUV_RX_RANGE_V  0x1
#define PPA_YUV_RX_RANGE_S  8
/* PPA_SRM_TX_CM : R/W ;bitpos:[7:4] ;default: 4'b0 ; */
/*description: The destination image color mode for Scaling and Rotating engine Tx. 0: ARGB8888
. 1: RGB888. 2: RGB565. 8: YUV420. 9: YUV422. others: Reserved..*/
#define PPA_SRM_TX_CM    0x0000000F
#define PPA_SRM_TX_CM_M  ((PPA_SRM_TX_CM_V)<<(PPA_SRM_TX_CM_S))
#define PPA_SRM_TX_CM_V  0xF
#define PPA_SRM_TX_CM_S  4
/* PPA_SRM_RX_CM : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description: The source image color mode for Scaling and Rotating engine Rx. 0: ARGB8888. 1:
RGB888. 2: RGB565. 8: YUV420. 9: YUV422. others: Reserved..*/
#define PPA_SRM_RX_CM    0x0000000F
#define PPA_SRM_RX_CM_M  ((PPA_SRM_RX_CM_V)<<(PPA_SRM_RX_CM_S))
#define PPA_SRM_RX_CM_V  0xF
#define PPA_SRM_RX_CM_S  0

#define PPA_BLEND_COLOR_MODE_REG          (DR_REG_PPA_BASE + 0x24)
/* PPA_BLEND0_RX_YUV422_BYTE_ORDER : R/W ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: YUV422 input byte order when reg_sr_rx_cm is 4'd9. 0: YVYU, 1:YUYV, 2: VYUY, 3:
UYVY.*/
#define PPA_BLEND0_RX_YUV422_BYTE_ORDER    0x00000003
#define PPA_BLEND0_RX_YUV422_BYTE_ORDER_M  ((PPA_BLEND0_RX_YUV422_BYTE_ORDER_V)<<(PPA_BLEND0_RX_YUV422_BYTE_ORDER_S))
#define PPA_BLEND0_RX_YUV422_BYTE_ORDER_V  0x3
#define PPA_BLEND0_RX_YUV422_BYTE_ORDER_S  16
/* PPA_BLEND_TX_RGB2YUV_PROTOCAL : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: RGB to YUV protocal when blend tx cm is yuv. 0: BT601. 1: BT709.*/
#define PPA_BLEND_TX_RGB2YUV_PROTOCAL    (BIT(15))
#define PPA_BLEND_TX_RGB2YUV_PROTOCAL_M  (BIT(15))
#define PPA_BLEND_TX_RGB2YUV_PROTOCAL_V  0x1
#define PPA_BLEND_TX_RGB2YUV_PROTOCAL_S  15
/* PPA_BLEND0_RX_YUV2RGB_PROTOCAL : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: YUV to RGB protocal when blend0 rx cm is yuv. 0: BT601. 1: BT709.*/
#define PPA_BLEND0_RX_YUV2RGB_PROTOCAL    (BIT(14))
#define PPA_BLEND0_RX_YUV2RGB_PROTOCAL_M  (BIT(14))
#define PPA_BLEND0_RX_YUV2RGB_PROTOCAL_V  0x1
#define PPA_BLEND0_RX_YUV2RGB_PROTOCAL_S  14
/* PPA_BLEND_TX_YUV_RANGE : R/W ;bitpos:[13] ;default: 1'h0 ; */
/*description: YUV output range when blend tx cm is yuv. 0: limit range. 1: full range.*/
#define PPA_BLEND_TX_YUV_RANGE    (BIT(13))
#define PPA_BLEND_TX_YUV_RANGE_M  (BIT(13))
#define PPA_BLEND_TX_YUV_RANGE_V  0x1
#define PPA_BLEND_TX_YUV_RANGE_S  13
/* PPA_BLEND0_RX_YUV_RANGE : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: YUV input range when blend0 rx cm is yuv. 0: limit range. 1: full range.*/
#define PPA_BLEND0_RX_YUV_RANGE    (BIT(12))
#define PPA_BLEND0_RX_YUV_RANGE_M  (BIT(12))
#define PPA_BLEND0_RX_YUV_RANGE_V  0x1
#define PPA_BLEND0_RX_YUV_RANGE_S  12
/* PPA_BLEND_TX_CM : R/W ;bitpos:[11:8] ;default: 4'b0 ; */
/*description: The destination image color mode for output of blender. 0: ARGB8888. 1: RGB888.
2: RGB565. 3: Reserved. 8: YUV420. 9: YUV422..*/
#define PPA_BLEND_TX_CM    0x0000000F
#define PPA_BLEND_TX_CM_M  ((PPA_BLEND_TX_CM_V)<<(PPA_BLEND_TX_CM_S))
#define PPA_BLEND_TX_CM_V  0xF
#define PPA_BLEND_TX_CM_S  8
/* PPA_BLEND1_RX_CM : R/W ;bitpos:[7:4] ;default: 4'b0 ; */
/*description: The source image color mode for foreground plane. 0: ARGB8888. 1: RGB888. 2: RGB
565. 3: Reserved. 4: L8. 5: L4. 6: A8. 7: A4..*/
#define PPA_BLEND1_RX_CM    0x0000000F
#define PPA_BLEND1_RX_CM_M  ((PPA_BLEND1_RX_CM_V)<<(PPA_BLEND1_RX_CM_S))
#define PPA_BLEND1_RX_CM_V  0xF
#define PPA_BLEND1_RX_CM_S  4
/* PPA_BLEND0_RX_CM : R/W ;bitpos:[3:0] ;default: 4'b0 ; */
/*description: The source image color mode for background plane. 0: ARGB8888. 1: RGB888. 2: RGB
565. 3: Reserved. 4: L8. 5: L4. 8: YUV420. 9: YUV422.*/
#define PPA_BLEND0_RX_CM    0x0000000F
#define PPA_BLEND0_RX_CM_M  ((PPA_BLEND0_RX_CM_V)<<(PPA_BLEND0_RX_CM_S))
#define PPA_BLEND0_RX_CM_V  0xF
#define PPA_BLEND0_RX_CM_S  0

#define PPA_SRM_BYTE_ORDER_REG          (DR_REG_PPA_BASE + 0x28)
/* PPA_SRM_BK_SIZE_SEL : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: sel srm pix_blk size, 0:32x32, 1:16x16.*/
#define PPA_SRM_BK_SIZE_SEL    (BIT(3))
#define PPA_SRM_BK_SIZE_SEL_M  (BIT(3))
#define PPA_SRM_BK_SIZE_SEL_V  0x1
#define PPA_SRM_BK_SIZE_SEL_S  3
/* PPA_SRM_MACRO_BK_RO_BYPASS : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to 1 to bypass the macro block order function. This function is use
d to improve efficient accessing external memory..*/
#define PPA_SRM_MACRO_BK_RO_BYPASS    (BIT(2))
#define PPA_SRM_MACRO_BK_RO_BYPASS_M  (BIT(2))
#define PPA_SRM_MACRO_BK_RO_BYPASS_V  0x1
#define PPA_SRM_MACRO_BK_RO_BYPASS_S  2
/* PPA_SRM_RX_RGB_SWAP_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to 1  the data into Rx channel 0 would be swapped in rgb. It means
rgb would be swap to bgr..*/
#define PPA_SRM_RX_RGB_SWAP_EN    (BIT(1))
#define PPA_SRM_RX_RGB_SWAP_EN_M  (BIT(1))
#define PPA_SRM_RX_RGB_SWAP_EN_V  0x1
#define PPA_SRM_RX_RGB_SWAP_EN_S  1
/* PPA_SRM_RX_BYTE_SWAP_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to 1  the data into Rx channel 0 would be swapped in byte. The Byte
0 and Byte1 would be swapped while byte 2 and byte 3 would be swappped..*/
#define PPA_SRM_RX_BYTE_SWAP_EN    (BIT(0))
#define PPA_SRM_RX_BYTE_SWAP_EN_M  (BIT(0))
#define PPA_SRM_RX_BYTE_SWAP_EN_V  0x1
#define PPA_SRM_RX_BYTE_SWAP_EN_S  0

#define PPA_BLEND_BYTE_ORDER_REG          (DR_REG_PPA_BASE + 0x2C)
/* PPA_BLEND1_RX_RGB_SWAP_EN : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to 1  the data into Rx channel 0 would be swapped in rgb. It means
rgb would be swap to bgr..*/
#define PPA_BLEND1_RX_RGB_SWAP_EN    (BIT(3))
#define PPA_BLEND1_RX_RGB_SWAP_EN_M  (BIT(3))
#define PPA_BLEND1_RX_RGB_SWAP_EN_V  0x1
#define PPA_BLEND1_RX_RGB_SWAP_EN_S  3
/* PPA_BLEND0_RX_RGB_SWAP_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to 1  the data into Rx channel 0 would be swapped in rgb. It means
rgb would be swap to bgr..*/
#define PPA_BLEND0_RX_RGB_SWAP_EN    (BIT(2))
#define PPA_BLEND0_RX_RGB_SWAP_EN_M  (BIT(2))
#define PPA_BLEND0_RX_RGB_SWAP_EN_V  0x1
#define PPA_BLEND0_RX_RGB_SWAP_EN_S  2
/* PPA_BLEND1_RX_BYTE_SWAP_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to 1  the data into Rx channel 0 would be swapped in byte. The Byte
0 and Byte1 would be swapped while byte 2 and byte 3 would be swappped..*/
#define PPA_BLEND1_RX_BYTE_SWAP_EN    (BIT(1))
#define PPA_BLEND1_RX_BYTE_SWAP_EN_M  (BIT(1))
#define PPA_BLEND1_RX_BYTE_SWAP_EN_V  0x1
#define PPA_BLEND1_RX_BYTE_SWAP_EN_S  1
/* PPA_BLEND0_RX_BYTE_SWAP_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to 1  the data into Rx channel 0 would be swapped in byte. The Byte
0 and Byte1 would be swapped while byte 2 and byte 3 would be swappped..*/
#define PPA_BLEND0_RX_BYTE_SWAP_EN    (BIT(0))
#define PPA_BLEND0_RX_BYTE_SWAP_EN_M  (BIT(0))
#define PPA_BLEND0_RX_BYTE_SWAP_EN_V  0x1
#define PPA_BLEND0_RX_BYTE_SWAP_EN_S  0

#define PPA_BLEND_TRANS_MODE_REG          (DR_REG_PPA_BASE + 0x34)
/* PPA_BLEND_VB : RO ;bitpos:[31:7] ;default: 25'b0 ; */
/*description: The vertical width of image block that would be filled in fix pixel filling mode
. The unit is pixel.*/
#define PPA_BLEND_VB    0x01FFFFFF
#define PPA_BLEND_VB_M  ((PPA_BLEND_VB_V)<<(PPA_BLEND_VB_S))
#define PPA_BLEND_VB_V  0x1FFFFFF
#define PPA_BLEND_VB_S  7
/* PPA_BLEND_TX_INF_SEL : R/W ;bitpos:[6:5] ;default: 2'h0 ; */
/*description: Configures blend tx interface. 0: dma2d only, 1: le_enc only, 2: dma2d and ls_en
c.*/
#define PPA_BLEND_TX_INF_SEL    0x00000003
#define PPA_BLEND_TX_INF_SEL_M  ((PPA_BLEND_TX_INF_SEL_V)<<(PPA_BLEND_TX_INF_SEL_S))
#define PPA_BLEND_TX_INF_SEL_V  0x3
#define PPA_BLEND_TX_INF_SEL_S  5
/* PPA_BLEND_RST : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: write 1 then write 0 to reset blending engine..*/
#define PPA_BLEND_RST    (BIT(4))
#define PPA_BLEND_RST_M  (BIT(4))
#define PPA_BLEND_RST_V  0x1
#define PPA_BLEND_RST_S  4
/* PPA_BLEND_TRANS_MODE_UPDATE : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to update the transfer mode. Only the bit is set  the transfer mode
 is valid..*/
#define PPA_BLEND_TRANS_MODE_UPDATE    (BIT(3))
#define PPA_BLEND_TRANS_MODE_UPDATE_M  (BIT(3))
#define PPA_BLEND_TRANS_MODE_UPDATE_V  0x1
#define PPA_BLEND_TRANS_MODE_UPDATE_S  3
/* PPA_BLEND_FIX_PIXEL_FILL_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: This bit is used to enable fix pixel filling. When this mode is enable  only Tx
channel is work and the output pixel is configured by PPA_OUT_FIX_PIXEL..*/
#define PPA_BLEND_FIX_PIXEL_FILL_EN    (BIT(2))
#define PPA_BLEND_FIX_PIXEL_FILL_EN_M  (BIT(2))
#define PPA_BLEND_FIX_PIXEL_FILL_EN_V  0x1
#define PPA_BLEND_FIX_PIXEL_FILL_EN_S  2
/* PPA_BLEND_BYPASS : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to bypass blender. Then background date would be output..*/
#define PPA_BLEND_BYPASS    (BIT(1))
#define PPA_BLEND_BYPASS_M  (BIT(1))
#define PPA_BLEND_BYPASS_V  0x1
#define PPA_BLEND_BYPASS_S  1
/* PPA_BLEND_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to enable alpha blending..*/
#define PPA_BLEND_EN    (BIT(0))
#define PPA_BLEND_EN_M  (BIT(0))
#define PPA_BLEND_EN_V  0x1
#define PPA_BLEND_EN_S  0

#define PPA_SRM_FIX_ALPHA_REG          (DR_REG_PPA_BASE + 0x38)
/* PPA_SRM_RX_ALPHA_INV : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: Set this bit to invert the original alpha value. When RX color mode is RGB565/RG
B88. The original alpha value is 255..*/
#define PPA_SRM_RX_ALPHA_INV    (BIT(10))
#define PPA_SRM_RX_ALPHA_INV_M  (BIT(10))
#define PPA_SRM_RX_ALPHA_INV_V  0x1
#define PPA_SRM_RX_ALPHA_INV_S  10
/* PPA_SRM_RX_ALPHA_MOD : R/W ;bitpos:[9:8] ;default: 2'b0 ; */
/*description: Alpha mode. 0/3: not replace alpha. 1: replace alpha with PPA_SRM_FIX_ALPHA. 2:
Original alpha multiply with PPA_SRM_FIX_ALPHA/256..*/
#define PPA_SRM_RX_ALPHA_MOD    0x00000003
#define PPA_SRM_RX_ALPHA_MOD_M  ((PPA_SRM_RX_ALPHA_MOD_V)<<(PPA_SRM_RX_ALPHA_MOD_S))
#define PPA_SRM_RX_ALPHA_MOD_V  0x3
#define PPA_SRM_RX_ALPHA_MOD_S  8
/* PPA_SRM_RX_FIX_ALPHA : R/W ;bitpos:[7:0] ;default: 8'd128 ; */
/*description: The value would replace the alpha value in received pixel for Scaling and Rotati
ng engine when PPA_SRM_RX_ALPHA_CONF_EN is enabled..*/
#define PPA_SRM_RX_FIX_ALPHA    0x000000FF
#define PPA_SRM_RX_FIX_ALPHA_M  ((PPA_SRM_RX_FIX_ALPHA_V)<<(PPA_SRM_RX_FIX_ALPHA_S))
#define PPA_SRM_RX_FIX_ALPHA_V  0xFF
#define PPA_SRM_RX_FIX_ALPHA_S  0

#define PPA_BLEND_TX_SIZE_REG          (DR_REG_PPA_BASE + 0x3C)
/* PPA_BLEND_VB : R/W ;bitpos:[27:14] ;default: 14'b0 ; */
/*description: The vertical width of image block that would be filled in fix pixel filling mode
 or blend mode. The unit is pixel. Must be even num when YUV420.*/
#define PPA_BLEND_VB    0x00003FFF
#define PPA_BLEND_VB_M  ((PPA_BLEND_VB_V)<<(PPA_BLEND_VB_S))
#define PPA_BLEND_VB_V  0x3FFF
#define PPA_BLEND_VB_S  14
/* PPA_BLEND_HB : R/W ;bitpos:[13:0] ;default: 14'b0 ; */
/*description: The horizontal width of image block that would be filled in fix pixel filling mo
de or blend mode. The unit is pixel. Must be even num when YUV422 or YUV420.*/
#define PPA_BLEND_HB    0x00003FFF
#define PPA_BLEND_HB_M  ((PPA_BLEND_HB_V)<<(PPA_BLEND_HB_S))
#define PPA_BLEND_HB_V  0x3FFF
#define PPA_BLEND_HB_S  0

#define PPA_BLEND_FIX_ALPHA_REG          (DR_REG_PPA_BASE + 0x40)
/* PPA_BLEND1_RX_ALPHA_INV : R/W ;bitpos:[21] ;default: 1'b0 ; */
/*description: Set this bit to invert the original alpha value. When RX color mode is RGB565/RG
B88. The original alpha value is 255..*/
#define PPA_BLEND1_RX_ALPHA_INV    (BIT(21))
#define PPA_BLEND1_RX_ALPHA_INV_M  (BIT(21))
#define PPA_BLEND1_RX_ALPHA_INV_V  0x1
#define PPA_BLEND1_RX_ALPHA_INV_S  21
/* PPA_BLEND0_RX_ALPHA_INV : R/W ;bitpos:[20] ;default: 1'b0 ; */
/*description: Set this bit to invert the original alpha value. When RX color mode is RGB565/RG
B88. The original alpha value is 255..*/
#define PPA_BLEND0_RX_ALPHA_INV    (BIT(20))
#define PPA_BLEND0_RX_ALPHA_INV_M  (BIT(20))
#define PPA_BLEND0_RX_ALPHA_INV_V  0x1
#define PPA_BLEND0_RX_ALPHA_INV_S  20
/* PPA_BLEND1_RX_ALPHA_MOD : R/W ;bitpos:[19:18] ;default: 2'b0 ; */
/*description: Alpha mode. 0/3: not replace alpha. 1: replace alpha with PPA_BLEND1_FIX_ALPHA.
2: Original alpha multiply with PPA_SRM_FIX_ALPHA/256..*/
#define PPA_BLEND1_RX_ALPHA_MOD    0x00000003
#define PPA_BLEND1_RX_ALPHA_MOD_M  ((PPA_BLEND1_RX_ALPHA_MOD_V)<<(PPA_BLEND1_RX_ALPHA_MOD_S))
#define PPA_BLEND1_RX_ALPHA_MOD_V  0x3
#define PPA_BLEND1_RX_ALPHA_MOD_S  18
/* PPA_BLEND0_RX_ALPHA_MOD : R/W ;bitpos:[17:16] ;default: 2'b0 ; */
/*description: Alpha mode. 0/3: not replace alpha. 1: replace alpha with PPA_BLEND0_FIX_ALPHA.
2: Original alpha multiply with PPA_SRM_FIX_ALPHA/256..*/
#define PPA_BLEND0_RX_ALPHA_MOD    0x00000003
#define PPA_BLEND0_RX_ALPHA_MOD_M  ((PPA_BLEND0_RX_ALPHA_MOD_V)<<(PPA_BLEND0_RX_ALPHA_MOD_S))
#define PPA_BLEND0_RX_ALPHA_MOD_V  0x3
#define PPA_BLEND0_RX_ALPHA_MOD_S  16
/* PPA_BLEND1_RX_FIX_ALPHA : R/W ;bitpos:[15:8] ;default: 8'd128 ; */
/*description: The value would replace the alpha value in received pixel for foreground plane o
f blender when PPA_BLEND1_RX_ALPHA_CONF_EN is enabled..*/
#define PPA_BLEND1_RX_FIX_ALPHA    0x000000FF
#define PPA_BLEND1_RX_FIX_ALPHA_M  ((PPA_BLEND1_RX_FIX_ALPHA_V)<<(PPA_BLEND1_RX_FIX_ALPHA_S))
#define PPA_BLEND1_RX_FIX_ALPHA_V  0xFF
#define PPA_BLEND1_RX_FIX_ALPHA_S  8
/* PPA_BLEND0_RX_FIX_ALPHA : R/W ;bitpos:[7:0] ;default: 8'd128 ; */
/*description: The value would replace the alpha value in received pixel for background plane o
f blender when PPA_BLEND0_RX_ALPHA_CONF_EN is enabled..*/
#define PPA_BLEND0_RX_FIX_ALPHA    0x000000FF
#define PPA_BLEND0_RX_FIX_ALPHA_M  ((PPA_BLEND0_RX_FIX_ALPHA_V)<<(PPA_BLEND0_RX_FIX_ALPHA_S))
#define PPA_BLEND0_RX_FIX_ALPHA_V  0xFF
#define PPA_BLEND0_RX_FIX_ALPHA_S  0

#define PPA_BLEND_RGB_REG          (DR_REG_PPA_BASE + 0x48)
/* PPA_BLEND1_RX_R : R/W ;bitpos:[23:16] ;default: 8'd128 ; */
/*description: red color for A4/A8 mode..*/
#define PPA_BLEND1_RX_R    0x000000FF
#define PPA_BLEND1_RX_R_M  ((PPA_BLEND1_RX_R_V)<<(PPA_BLEND1_RX_R_S))
#define PPA_BLEND1_RX_R_V  0xFF
#define PPA_BLEND1_RX_R_S  16
/* PPA_BLEND1_RX_G : R/W ;bitpos:[15:8] ;default: 8'd128 ; */
/*description: green color for A4/A8 mode..*/
#define PPA_BLEND1_RX_G    0x000000FF
#define PPA_BLEND1_RX_G_M  ((PPA_BLEND1_RX_G_V)<<(PPA_BLEND1_RX_G_S))
#define PPA_BLEND1_RX_G_V  0xFF
#define PPA_BLEND1_RX_G_S  8
/* PPA_BLEND1_RX_B : R/W ;bitpos:[7:0] ;default: 8'd128 ; */
/*description: blue color for A4/A8 mode..*/
#define PPA_BLEND1_RX_B    0x000000FF
#define PPA_BLEND1_RX_B_M  ((PPA_BLEND1_RX_B_V)<<(PPA_BLEND1_RX_B_S))
#define PPA_BLEND1_RX_B_V  0xFF
#define PPA_BLEND1_RX_B_S  0

#define PPA_BLEND_FIX_PIXEL_REG          (DR_REG_PPA_BASE + 0x4C)
/* PPA_BLEND_TX_FIX_PIXEL : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: The configure fix pixel in fix pixel filling mode for blender engine..*/
#define PPA_BLEND_TX_FIX_PIXEL    0xFFFFFFFF
#define PPA_BLEND_TX_FIX_PIXEL_M  ((PPA_BLEND_TX_FIX_PIXEL_V)<<(PPA_BLEND_TX_FIX_PIXEL_S))
#define PPA_BLEND_TX_FIX_PIXEL_V  0xFFFFFFFF
#define PPA_BLEND_TX_FIX_PIXEL_S  0

#define PPA_CK_FG_LOW_REG          (DR_REG_PPA_BASE + 0x50)
/* PPA_COLORKEY_FG_R_LOW : R/W ;bitpos:[23:16] ;default: 8'hff ; */
/*description: color key lower threshold of foreground r channel.*/
#define PPA_COLORKEY_FG_R_LOW    0x000000FF
#define PPA_COLORKEY_FG_R_LOW_M  ((PPA_COLORKEY_FG_R_LOW_V)<<(PPA_COLORKEY_FG_R_LOW_S))
#define PPA_COLORKEY_FG_R_LOW_V  0xFF
#define PPA_COLORKEY_FG_R_LOW_S  16
/* PPA_COLORKEY_FG_G_LOW : R/W ;bitpos:[15:8] ;default: 8'hff ; */
/*description: color key lower threshold of foreground g channel.*/
#define PPA_COLORKEY_FG_G_LOW    0x000000FF
#define PPA_COLORKEY_FG_G_LOW_M  ((PPA_COLORKEY_FG_G_LOW_V)<<(PPA_COLORKEY_FG_G_LOW_S))
#define PPA_COLORKEY_FG_G_LOW_V  0xFF
#define PPA_COLORKEY_FG_G_LOW_S  8
/* PPA_COLORKEY_FG_B_LOW : R/W ;bitpos:[7:0] ;default: 8'hff ; */
/*description: color key lower threshold of foreground b channel.*/
#define PPA_COLORKEY_FG_B_LOW    0x000000FF
#define PPA_COLORKEY_FG_B_LOW_M  ((PPA_COLORKEY_FG_B_LOW_V)<<(PPA_COLORKEY_FG_B_LOW_S))
#define PPA_COLORKEY_FG_B_LOW_V  0xFF
#define PPA_COLORKEY_FG_B_LOW_S  0

#define PPA_CK_FG_HIGH_REG          (DR_REG_PPA_BASE + 0x54)
/* PPA_COLORKEY_FG_R_HIGH : R/W ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: color key higher threshold of foreground r channel.*/
#define PPA_COLORKEY_FG_R_HIGH    0x000000FF
#define PPA_COLORKEY_FG_R_HIGH_M  ((PPA_COLORKEY_FG_R_HIGH_V)<<(PPA_COLORKEY_FG_R_HIGH_S))
#define PPA_COLORKEY_FG_R_HIGH_V  0xFF
#define PPA_COLORKEY_FG_R_HIGH_S  16
/* PPA_COLORKEY_FG_G_HIGH : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: color key higher threshold of foreground g channel.*/
#define PPA_COLORKEY_FG_G_HIGH    0x000000FF
#define PPA_COLORKEY_FG_G_HIGH_M  ((PPA_COLORKEY_FG_G_HIGH_V)<<(PPA_COLORKEY_FG_G_HIGH_S))
#define PPA_COLORKEY_FG_G_HIGH_V  0xFF
#define PPA_COLORKEY_FG_G_HIGH_S  8
/* PPA_COLORKEY_FG_B_HIGH : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: color key higher threshold of foreground b channel.*/
#define PPA_COLORKEY_FG_B_HIGH    0x000000FF
#define PPA_COLORKEY_FG_B_HIGH_M  ((PPA_COLORKEY_FG_B_HIGH_V)<<(PPA_COLORKEY_FG_B_HIGH_S))
#define PPA_COLORKEY_FG_B_HIGH_V  0xFF
#define PPA_COLORKEY_FG_B_HIGH_S  0

#define PPA_CK_BG_LOW_REG          (DR_REG_PPA_BASE + 0x58)
/* PPA_COLORKEY_BG_R_LOW : R/W ;bitpos:[23:16] ;default: 8'hff ; */
/*description: color key lower threshold of background r channel.*/
#define PPA_COLORKEY_BG_R_LOW    0x000000FF
#define PPA_COLORKEY_BG_R_LOW_M  ((PPA_COLORKEY_BG_R_LOW_V)<<(PPA_COLORKEY_BG_R_LOW_S))
#define PPA_COLORKEY_BG_R_LOW_V  0xFF
#define PPA_COLORKEY_BG_R_LOW_S  16
/* PPA_COLORKEY_BG_G_LOW : R/W ;bitpos:[15:8] ;default: 8'hff ; */
/*description: color key lower threshold of background g channel.*/
#define PPA_COLORKEY_BG_G_LOW    0x000000FF
#define PPA_COLORKEY_BG_G_LOW_M  ((PPA_COLORKEY_BG_G_LOW_V)<<(PPA_COLORKEY_BG_G_LOW_S))
#define PPA_COLORKEY_BG_G_LOW_V  0xFF
#define PPA_COLORKEY_BG_G_LOW_S  8
/* PPA_COLORKEY_BG_B_LOW : R/W ;bitpos:[7:0] ;default: 8'hff ; */
/*description: color key lower threshold of background b channel.*/
#define PPA_COLORKEY_BG_B_LOW    0x000000FF
#define PPA_COLORKEY_BG_B_LOW_M  ((PPA_COLORKEY_BG_B_LOW_V)<<(PPA_COLORKEY_BG_B_LOW_S))
#define PPA_COLORKEY_BG_B_LOW_V  0xFF
#define PPA_COLORKEY_BG_B_LOW_S  0

#define PPA_CK_BG_HIGH_REG          (DR_REG_PPA_BASE + 0x5C)
/* PPA_COLORKEY_BG_R_HIGH : R/W ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: color key higher threshold of background r channel.*/
#define PPA_COLORKEY_BG_R_HIGH    0x000000FF
#define PPA_COLORKEY_BG_R_HIGH_M  ((PPA_COLORKEY_BG_R_HIGH_V)<<(PPA_COLORKEY_BG_R_HIGH_S))
#define PPA_COLORKEY_BG_R_HIGH_V  0xFF
#define PPA_COLORKEY_BG_R_HIGH_S  16
/* PPA_COLORKEY_BG_G_HIGH : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: color key higher threshold of background g channel.*/
#define PPA_COLORKEY_BG_G_HIGH    0x000000FF
#define PPA_COLORKEY_BG_G_HIGH_M  ((PPA_COLORKEY_BG_G_HIGH_V)<<(PPA_COLORKEY_BG_G_HIGH_S))
#define PPA_COLORKEY_BG_G_HIGH_V  0xFF
#define PPA_COLORKEY_BG_G_HIGH_S  8
/* PPA_COLORKEY_BG_B_HIGH : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: color key higher threshold of background b channel.*/
#define PPA_COLORKEY_BG_B_HIGH    0x000000FF
#define PPA_COLORKEY_BG_B_HIGH_M  ((PPA_COLORKEY_BG_B_HIGH_V)<<(PPA_COLORKEY_BG_B_HIGH_S))
#define PPA_COLORKEY_BG_B_HIGH_V  0xFF
#define PPA_COLORKEY_BG_B_HIGH_S  0

#define PPA_CK_DEFAULT_REG          (DR_REG_PPA_BASE + 0x60)
/* PPA_COLORKEY_FG_BG_REVERSE : R/W ;bitpos:[24] ;default: 1'h0 ; */
/*description: when pixel in bg ck range but not in fg ck range, 0: the result is bg, 1: the re
sult is fg.*/
#define PPA_COLORKEY_FG_BG_REVERSE    (BIT(24))
#define PPA_COLORKEY_FG_BG_REVERSE_M  (BIT(24))
#define PPA_COLORKEY_FG_BG_REVERSE_V  0x1
#define PPA_COLORKEY_FG_BG_REVERSE_S  24
/* PPA_COLORKEY_DEFAULT_R : R/W ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: default R channle value of color key.*/
#define PPA_COLORKEY_DEFAULT_R    0x000000FF
#define PPA_COLORKEY_DEFAULT_R_M  ((PPA_COLORKEY_DEFAULT_R_V)<<(PPA_COLORKEY_DEFAULT_R_S))
#define PPA_COLORKEY_DEFAULT_R_V  0xFF
#define PPA_COLORKEY_DEFAULT_R_S  16
/* PPA_COLORKEY_DEFAULT_G : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: default G channle value of color key.*/
#define PPA_COLORKEY_DEFAULT_G    0x000000FF
#define PPA_COLORKEY_DEFAULT_G_M  ((PPA_COLORKEY_DEFAULT_G_V)<<(PPA_COLORKEY_DEFAULT_G_S))
#define PPA_COLORKEY_DEFAULT_G_V  0xFF
#define PPA_COLORKEY_DEFAULT_G_S  8
/* PPA_COLORKEY_DEFAULT_B : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: default B channle value of color key.*/
#define PPA_COLORKEY_DEFAULT_B    0x000000FF
#define PPA_COLORKEY_DEFAULT_B_M  ((PPA_COLORKEY_DEFAULT_B_V)<<(PPA_COLORKEY_DEFAULT_B_S))
#define PPA_COLORKEY_DEFAULT_B_V  0xFF
#define PPA_COLORKEY_DEFAULT_B_S  0

#define PPA_SRM_SCAL_ROTATE_REG          (DR_REG_PPA_BASE + 0x64)
/* PPA_SRM_MIRROR_Y : R/W ;bitpos:[29] ;default: 1'b0 ; */
/*description: Image mirror in Y direction. 0: disable, 1: enable.*/
#define PPA_SRM_MIRROR_Y    (BIT(29))
#define PPA_SRM_MIRROR_Y_M  (BIT(29))
#define PPA_SRM_MIRROR_Y_V  0x1
#define PPA_SRM_MIRROR_Y_S  29
/* PPA_SRM_MIRROR_X : R/W ;bitpos:[28] ;default: 1'b0 ; */
/*description: Image mirror in X direction. 0: disable, 1: enable.*/
#define PPA_SRM_MIRROR_X    (BIT(28))
#define PPA_SRM_MIRROR_X_M  (BIT(28))
#define PPA_SRM_MIRROR_X_V  0x1
#define PPA_SRM_MIRROR_X_S  28
/* PPA_SCAL_ROTATE_START : WT ;bitpos:[27] ;default: 1'b0 ; */
/*description: Write 1 to enable scaling and rotating engine after parameter is configured..*/
#define PPA_SCAL_ROTATE_START    (BIT(27))
#define PPA_SCAL_ROTATE_START_M  (BIT(27))
#define PPA_SCAL_ROTATE_START_V  0x1
#define PPA_SCAL_ROTATE_START_S  27
/* PPA_SCAL_ROTATE_RST : R/W ;bitpos:[26] ;default: 1'b0 ; */
/*description: Write 1 then write 0 to this bit to reset scaling and rotating engine..*/
#define PPA_SCAL_ROTATE_RST    (BIT(26))
#define PPA_SCAL_ROTATE_RST_M  (BIT(26))
#define PPA_SCAL_ROTATE_RST_V  0x1
#define PPA_SCAL_ROTATE_RST_S  26
/* PPA_SRM_ROTATE_ANGLE : R/W ;bitpos:[25:24] ;default: 2'b0 ; */
/*description: The rotate angle. 0: 0 degree. 1: 90 degree. 2: 180 degree. 3: 270 degree..*/
#define PPA_SRM_ROTATE_ANGLE    0x00000003
#define PPA_SRM_ROTATE_ANGLE_M  ((PPA_SRM_ROTATE_ANGLE_V)<<(PPA_SRM_ROTATE_ANGLE_S))
#define PPA_SRM_ROTATE_ANGLE_V  0x3
#define PPA_SRM_ROTATE_ANGLE_S  24
/* PPA_SRM_SCAL_Y_FRAG : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: The fragment part of scaling coefficient in Y direction..*/
#define PPA_SRM_SCAL_Y_FRAG    0x0000000F
#define PPA_SRM_SCAL_Y_FRAG_M  ((PPA_SRM_SCAL_Y_FRAG_V)<<(PPA_SRM_SCAL_Y_FRAG_S))
#define PPA_SRM_SCAL_Y_FRAG_V  0xF
#define PPA_SRM_SCAL_Y_FRAG_S  20
/* PPA_SRM_SCAL_Y_INT : R/W ;bitpos:[19:12] ;default: 8'b1 ; */
/*description: The integrated part of scaling coefficient in Y direction..*/
#define PPA_SRM_SCAL_Y_INT    0x000000FF
#define PPA_SRM_SCAL_Y_INT_M  ((PPA_SRM_SCAL_Y_INT_V)<<(PPA_SRM_SCAL_Y_INT_S))
#define PPA_SRM_SCAL_Y_INT_V  0xFF
#define PPA_SRM_SCAL_Y_INT_S  12
/* PPA_SRM_SCAL_X_FRAG : R/W ;bitpos:[11:8] ;default: 4'b0 ; */
/*description: The fragment part of scaling coefficient in X direction..*/
#define PPA_SRM_SCAL_X_FRAG    0x0000000F
#define PPA_SRM_SCAL_X_FRAG_M  ((PPA_SRM_SCAL_X_FRAG_V)<<(PPA_SRM_SCAL_X_FRAG_S))
#define PPA_SRM_SCAL_X_FRAG_V  0xF
#define PPA_SRM_SCAL_X_FRAG_S  8
/* PPA_SRM_SCAL_X_INT : R/W ;bitpos:[7:0] ;default: 8'b1 ; */
/*description: The integrated part of scaling coefficient in X direction..*/
#define PPA_SRM_SCAL_X_INT    0x000000FF
#define PPA_SRM_SCAL_X_INT_M  ((PPA_SRM_SCAL_X_INT_V)<<(PPA_SRM_SCAL_X_INT_S))
#define PPA_SRM_SCAL_X_INT_V  0xFF
#define PPA_SRM_SCAL_X_INT_S  0

#define PPA_SRM_MEM_PD_REG          (DR_REG_PPA_BASE + 0x68)
/* PPA_SRM_MEM_FORCE_PU : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to force power up scaling and rotating engine's data memory..*/
#define PPA_SRM_MEM_FORCE_PU    (BIT(2))
#define PPA_SRM_MEM_FORCE_PU_M  (BIT(2))
#define PPA_SRM_MEM_FORCE_PU_V  0x1
#define PPA_SRM_MEM_FORCE_PU_S  2
/* PPA_SRM_MEM_FORCE_PD : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to force power down scaling and rotating engine's data memory..*/
#define PPA_SRM_MEM_FORCE_PD    (BIT(1))
#define PPA_SRM_MEM_FORCE_PD_M  (BIT(1))
#define PPA_SRM_MEM_FORCE_PD_V  0x1
#define PPA_SRM_MEM_FORCE_PD_S  1
/* PPA_SRM_MEM_CLK_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to force clock enable of scaling and rotating engine's data memory..*/
#define PPA_SRM_MEM_CLK_ENA    (BIT(0))
#define PPA_SRM_MEM_CLK_ENA_M  (BIT(0))
#define PPA_SRM_MEM_CLK_ENA_V  0x1
#define PPA_SRM_MEM_CLK_ENA_S  0

#define PPA_REG_CONF_REG          (DR_REG_PPA_BASE + 0x6C)
/* PPA_CLK_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: PPA register clock gate enable signal..*/
#define PPA_CLK_EN    (BIT(0))
#define PPA_CLK_EN_M  (BIT(0))
#define PPA_CLK_EN_V  0x1
#define PPA_CLK_EN_S  0

#define PPA_CLUT_CNT_REG          (DR_REG_PPA_BASE + 0x70)
/* PPA_BLEND1_CLUT_CNT : RO ;bitpos:[17:9] ;default: 9'h0 ; */
/*description: The write data counter of BLEND1 CLUT in fifo mode..*/
#define PPA_BLEND1_CLUT_CNT    0x000001FF
#define PPA_BLEND1_CLUT_CNT_M  ((PPA_BLEND1_CLUT_CNT_V)<<(PPA_BLEND1_CLUT_CNT_S))
#define PPA_BLEND1_CLUT_CNT_V  0x1FF
#define PPA_BLEND1_CLUT_CNT_S  9
/* PPA_BLEND0_CLUT_CNT : RO ;bitpos:[8:0] ;default: 9'h0 ; */
/*description: The write data counter of BLEND0 CLUT in fifo mode..*/
#define PPA_BLEND0_CLUT_CNT    0x000001FF
#define PPA_BLEND0_CLUT_CNT_M  ((PPA_BLEND0_CLUT_CNT_V)<<(PPA_BLEND0_CLUT_CNT_S))
#define PPA_BLEND0_CLUT_CNT_V  0x1FF
#define PPA_BLEND0_CLUT_CNT_S  0

#define PPA_BLEND_ST_REG          (DR_REG_PPA_BASE + 0x74)
/* PPA_BLEND_YUV_Y_SCALE_ERR_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: Represents that y param is an odd num when enable yuv420.*/
#define PPA_BLEND_YUV_Y_SCALE_ERR_ST    (BIT(2))
#define PPA_BLEND_YUV_Y_SCALE_ERR_ST_M  (BIT(2))
#define PPA_BLEND_YUV_Y_SCALE_ERR_ST_V  0x1
#define PPA_BLEND_YUV_Y_SCALE_ERR_ST_S  2
/* PPA_BLEND_YUV_X_SCALE_ERR_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: Represents that x param is an odd num when enable yuv422 or yuv420.*/
#define PPA_BLEND_YUV_X_SCALE_ERR_ST    (BIT(1))
#define PPA_BLEND_YUV_X_SCALE_ERR_ST_M  (BIT(1))
#define PPA_BLEND_YUV_X_SCALE_ERR_ST_V  0x1
#define PPA_BLEND_YUV_X_SCALE_ERR_ST_S  1
/* PPA_BLEND_SIZE_DIFF_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: 1: indicate the size of two image is different..*/
#define PPA_BLEND_SIZE_DIFF_ST    (BIT(0))
#define PPA_BLEND_SIZE_DIFF_ST_M  (BIT(0))
#define PPA_BLEND_SIZE_DIFF_ST_V  0x1
#define PPA_BLEND_SIZE_DIFF_ST_S  0

#define PPA_SRM_PARAM_ERR_ST_REG          (DR_REG_PPA_BASE + 0x78)
/* PPA_Y_YUV_TX_SCALE_ERR_ST : RO ;bitpos:[13] ;default: 1'b0 ; */
/*description: The error is that the va/vb/y param in dma2d descriptor is an odd num when enabl
e yuv420 tx.*/
#define PPA_Y_YUV_TX_SCALE_ERR_ST    (BIT(13))
#define PPA_Y_YUV_TX_SCALE_ERR_ST_M  (BIT(13))
#define PPA_Y_YUV_TX_SCALE_ERR_ST_V  0x1
#define PPA_Y_YUV_TX_SCALE_ERR_ST_S  13
/* PPA_X_YUV_TX_SCALE_ERR_ST : RO ;bitpos:[12] ;default: 1'b0 ; */
/*description: The error is that the ha/hb/x param in dma2d descriptor is an odd num when enabl
e yuv422 or yuv420 tx.*/
#define PPA_X_YUV_TX_SCALE_ERR_ST    (BIT(12))
#define PPA_X_YUV_TX_SCALE_ERR_ST_M  (BIT(12))
#define PPA_X_YUV_TX_SCALE_ERR_ST_V  0x1
#define PPA_X_YUV_TX_SCALE_ERR_ST_S  12
/* PPA_Y_YUV_RX_SCALE_ERR_ST : RO ;bitpos:[11] ;default: 1'b0 ; */
/*description: The error is that the va/vb/y param in dma2d descriptor is an odd num when enabl
e yuv420 rx.*/
#define PPA_Y_YUV_RX_SCALE_ERR_ST    (BIT(11))
#define PPA_Y_YUV_RX_SCALE_ERR_ST_M  (BIT(11))
#define PPA_Y_YUV_RX_SCALE_ERR_ST_V  0x1
#define PPA_Y_YUV_RX_SCALE_ERR_ST_S  11
/* PPA_X_YUV_RX_SCALE_ERR_ST : RO ;bitpos:[10] ;default: 1'b0 ; */
/*description: The error is that the ha/hb/x param in dma2d descriptor is an odd num when enabl
e yuv422 or yuv420 rx.*/
#define PPA_X_YUV_RX_SCALE_ERR_ST    (BIT(10))
#define PPA_X_YUV_RX_SCALE_ERR_ST_M  (BIT(10))
#define PPA_X_YUV_RX_SCALE_ERR_ST_V  0x1
#define PPA_X_YUV_RX_SCALE_ERR_ST_S  10
/* PPA_XDST_LEN_TOO_LARGE_ERR_ST : RO ;bitpos:[9] ;default: 1'b0 ; */
/*description: The error is that the scaled image height is larger than (2^13 - 1)..*/
#define PPA_XDST_LEN_TOO_LARGE_ERR_ST    (BIT(9))
#define PPA_XDST_LEN_TOO_LARGE_ERR_ST_M  (BIT(9))
#define PPA_XDST_LEN_TOO_LARGE_ERR_ST_V  0x1
#define PPA_XDST_LEN_TOO_LARGE_ERR_ST_S  9
/* PPA_XDST_LEN_TOO_SAMLL_ERR_ST : RO ;bitpos:[8] ;default: 1'b0 ; */
/*description: The error is that the scaled image height is 0. For example.  when source height
 is 14. scaled value is 1/16. and no rotate operation. then scaled height would
be 0 as the result would be floored..*/
#define PPA_XDST_LEN_TOO_SAMLL_ERR_ST    (BIT(8))
#define PPA_XDST_LEN_TOO_SAMLL_ERR_ST_M  (BIT(8))
#define PPA_XDST_LEN_TOO_SAMLL_ERR_ST_V  0x1
#define PPA_XDST_LEN_TOO_SAMLL_ERR_ST_S  8
/* PPA_RX_DSCR_HB_ERR_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description: The error is that the HB in 2DDMA transmit descriptor plus the offset of X coord
inate in 2DDMA transmit descriptor is larger than HA in 2DDMA transmit descripto
r..*/
#define PPA_RX_DSCR_HB_ERR_ST    (BIT(7))
#define PPA_RX_DSCR_HB_ERR_ST_M  (BIT(7))
#define PPA_RX_DSCR_HB_ERR_ST_V  0x1
#define PPA_RX_DSCR_HB_ERR_ST_S  7
/* PPA_X_RX_SCAL_EQUAL_0_ERR_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description: The error is that the scaled image height is 0..*/
#define PPA_X_RX_SCAL_EQUAL_0_ERR_ST    (BIT(6))
#define PPA_X_RX_SCAL_EQUAL_0_ERR_ST_M  (BIT(6))
#define PPA_X_RX_SCAL_EQUAL_0_ERR_ST_V  0x1
#define PPA_X_RX_SCAL_EQUAL_0_ERR_ST_S  6
/* PPA_YDST_LEN_TOO_LARGE_ERR_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description: The error is that the scaled width is larger than (2^13 - 1)..*/
#define PPA_YDST_LEN_TOO_LARGE_ERR_ST    (BIT(5))
#define PPA_YDST_LEN_TOO_LARGE_ERR_ST_M  (BIT(5))
#define PPA_YDST_LEN_TOO_LARGE_ERR_ST_V  0x1
#define PPA_YDST_LEN_TOO_LARGE_ERR_ST_S  5
/* PPA_YDST_LEN_TOO_SAMLL_ERR_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description: The error is that the scaled image width is 0. For example.  when source width i
s 14. scaled value is 1/16. and no rotate operation. then scaled width would be
0 as the result would be floored..*/
#define PPA_YDST_LEN_TOO_SAMLL_ERR_ST    (BIT(4))
#define PPA_YDST_LEN_TOO_SAMLL_ERR_ST_M  (BIT(4))
#define PPA_YDST_LEN_TOO_SAMLL_ERR_ST_V  0x1
#define PPA_YDST_LEN_TOO_SAMLL_ERR_ST_S  4
/* PPA_RX_DSCR_VB_ERR_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description: The error is that VB in 2DDMA receive descriptor plus the offset of Y coordinate
 in 2DDMA transmit descriptor is larger than VA in 2DDMA transmit descriptor.*/
#define PPA_RX_DSCR_VB_ERR_ST    (BIT(3))
#define PPA_RX_DSCR_VB_ERR_ST_M  (BIT(3))
#define PPA_RX_DSCR_VB_ERR_ST_V  0x1
#define PPA_RX_DSCR_VB_ERR_ST_S  3
/* PPA_Y_RX_SCAL_EQUAL_0_ERR_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: The error is that the PPA_SRM_SCAL_Y_INT and PPA_SRM_CAL_Y_FRAG both are 0..*/
#define PPA_Y_RX_SCAL_EQUAL_0_ERR_ST    (BIT(2))
#define PPA_Y_RX_SCAL_EQUAL_0_ERR_ST_M  (BIT(2))
#define PPA_Y_RX_SCAL_EQUAL_0_ERR_ST_V  0x1
#define PPA_Y_RX_SCAL_EQUAL_0_ERR_ST_S  2
/* PPA_TX_DSCR_HB_ERR_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: The error is that the scaled HB plus the offset of X coordinate in 2DDMA receive
 descriptor is larger than HA in 2DDMA receive descriptor..*/
#define PPA_TX_DSCR_HB_ERR_ST    (BIT(1))
#define PPA_TX_DSCR_HB_ERR_ST_M  (BIT(1))
#define PPA_TX_DSCR_HB_ERR_ST_V  0x1
#define PPA_TX_DSCR_HB_ERR_ST_S  1
/* PPA_TX_DSCR_VB_ERR_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: The error is that the scaled VB plus the offset of Y coordinate in 2DDMA receive
 descriptor is larger than VA in 2DDMA receive descriptor..*/
#define PPA_TX_DSCR_VB_ERR_ST    (BIT(0))
#define PPA_TX_DSCR_VB_ERR_ST_M  (BIT(0))
#define PPA_TX_DSCR_VB_ERR_ST_V  0x1
#define PPA_TX_DSCR_VB_ERR_ST_S  0

#define PPA_SRM_STATUS_REG          (DR_REG_PPA_BASE + 0x7C)
/* PPA_SRM_TX_SCAN_STATE : RO ;bitpos:[8:6] ;default: 3'b0 ; */
/*description: Reserved..*/
#define PPA_SRM_TX_SCAN_STATE    0x00000007
#define PPA_SRM_TX_SCAN_STATE_M  ((PPA_SRM_TX_SCAN_STATE_V)<<(PPA_SRM_TX_SCAN_STATE_S))
#define PPA_SRM_TX_SCAN_STATE_V  0x7
#define PPA_SRM_TX_SCAN_STATE_S  6
/* PPA_SRM_TX_DSCR_SAMPLE_STATE : RO ;bitpos:[5:4] ;default: 2'b0 ; */
/*description: Reserved..*/
#define PPA_SRM_TX_DSCR_SAMPLE_STATE    0x00000003
#define PPA_SRM_TX_DSCR_SAMPLE_STATE_M  ((PPA_SRM_TX_DSCR_SAMPLE_STATE_V)<<(PPA_SRM_TX_DSCR_SAMPLE_STATE_S))
#define PPA_SRM_TX_DSCR_SAMPLE_STATE_V  0x3
#define PPA_SRM_TX_DSCR_SAMPLE_STATE_S  4
/* PPA_SRM_RX_SCAN_STATE : RO ;bitpos:[3:2] ;default: 2'b0 ; */
/*description: Reserved..*/
#define PPA_SRM_RX_SCAN_STATE    0x00000003
#define PPA_SRM_RX_SCAN_STATE_M  ((PPA_SRM_RX_SCAN_STATE_V)<<(PPA_SRM_RX_SCAN_STATE_S))
#define PPA_SRM_RX_SCAN_STATE_V  0x3
#define PPA_SRM_RX_SCAN_STATE_S  2
/* PPA_SRM_RX_DSCR_SAMPLE_STATE : RO ;bitpos:[1:0] ;default: 2'b0 ; */
/*description: Reserved..*/
#define PPA_SRM_RX_DSCR_SAMPLE_STATE    0x00000003
#define PPA_SRM_RX_DSCR_SAMPLE_STATE_M  ((PPA_SRM_RX_DSCR_SAMPLE_STATE_V)<<(PPA_SRM_RX_DSCR_SAMPLE_STATE_S))
#define PPA_SRM_RX_DSCR_SAMPLE_STATE_V  0x3
#define PPA_SRM_RX_DSCR_SAMPLE_STATE_S  0

#define PPA_ECO_LOW_REG          (DR_REG_PPA_BASE + 0x80)
/* PPA_RND_ECO_LOW : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Reserved..*/
#define PPA_RND_ECO_LOW    0xFFFFFFFF
#define PPA_RND_ECO_LOW_M  ((PPA_RND_ECO_LOW_V)<<(PPA_RND_ECO_LOW_S))
#define PPA_RND_ECO_LOW_V  0xFFFFFFFF
#define PPA_RND_ECO_LOW_S  0

#define PPA_ECO_HIGH_REG          (DR_REG_PPA_BASE + 0x84)
/* PPA_RND_ECO_HIGH : R/W ;bitpos:[31:0] ;default: 32'hffffffff ; */
/*description: Reserved..*/
#define PPA_RND_ECO_HIGH    0xFFFFFFFF
#define PPA_RND_ECO_HIGH_M  ((PPA_RND_ECO_HIGH_V)<<(PPA_RND_ECO_HIGH_S))
#define PPA_RND_ECO_HIGH_V  0xFFFFFFFF
#define PPA_RND_ECO_HIGH_S  0

#define PPA_ECO_CELL_CTRL_REG          (DR_REG_PPA_BASE + 0x88)
/* PPA_RDN_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Reserved..*/
#define PPA_RDN_ENA    (BIT(1))
#define PPA_RDN_ENA_M  (BIT(1))
#define PPA_RDN_ENA_V  0x1
#define PPA_RDN_ENA_S  1
/* PPA_RDN_RESULT : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: Reserved..*/
#define PPA_RDN_RESULT    (BIT(0))
#define PPA_RDN_RESULT_M  (BIT(0))
#define PPA_RDN_RESULT_V  0x1
#define PPA_RDN_RESULT_S  0

#define PPA_SRAM_CTRL_REG          (DR_REG_PPA_BASE + 0x8C)
/* PPA_MEM_AUX_CTRL : R/W ;bitpos:[13:0] ;default: 14'h1320 ; */
/*description: Control signals.*/
#define PPA_MEM_AUX_CTRL    0x00003FFF
#define PPA_MEM_AUX_CTRL_M  ((PPA_MEM_AUX_CTRL_V)<<(PPA_MEM_AUX_CTRL_S))
#define PPA_MEM_AUX_CTRL_V  0x3FFF
#define PPA_MEM_AUX_CTRL_S  0

#define PPA_DEBUG_CTRL0_REG          (DR_REG_PPA_BASE + 0x90)
/* PPA_DBG_REPLACE_SEL : R/W ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Configures the data replace location. 0: not replace, 1: srm rx input, 2: srm rx
 bilin interpolation, 3: srm tx output, 4: blend fg input, 5: blend bg input, 6:
 blend output.*/
#define PPA_DBG_REPLACE_SEL    0x00000007
#define PPA_DBG_REPLACE_SEL_M  ((PPA_DBG_REPLACE_SEL_V)<<(PPA_DBG_REPLACE_SEL_S))
#define PPA_DBG_REPLACE_SEL_V  0x7
#define PPA_DBG_REPLACE_SEL_S  0

#define PPA_DEBUG_CTRL1_REG          (DR_REG_PPA_BASE + 0x94)
/* PPA_DBG_REPLACE_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the replace data.*/
#define PPA_DBG_REPLACE_DATA    0xFFFFFFFF
#define PPA_DBG_REPLACE_DATA_M  ((PPA_DBG_REPLACE_DATA_V)<<(PPA_DBG_REPLACE_DATA_S))
#define PPA_DBG_REPLACE_DATA_V  0xFFFFFFFF
#define PPA_DBG_REPLACE_DATA_S  0

#define PPA_DATE_REG          (DR_REG_PPA_BASE + 0x100)
/* PPA_DATE : R/W ;bitpos:[31:0] ;default: 32'h20240911 ; */
/*description: register version..*/
#define PPA_DATE    0xFFFFFFFF
#define PPA_DATE_M  ((PPA_DATE_V)<<(PPA_DATE_S))
#define PPA_DATE_V  0xFFFFFFFF
#define PPA_DATE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_PPA_REG_H_ */
