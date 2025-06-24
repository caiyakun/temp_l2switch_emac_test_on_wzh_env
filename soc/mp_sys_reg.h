/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_MP_SYS_REG_H_
#define _SOC_MP_SYS_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define MP_SYS_CLK_EN_REG          (DR_REG_MP_SYS_BASE + 0x0)
/* MP_SYS_CLK_EN : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: enable mp sysreg clk Configures clock gating.\\\\0: Support clock only when the
application writes registers.\\\\ 1: Always force the clock on for registers.\\\
\.*/
#define MP_SYS_CLK_EN    (BIT(0))
#define MP_SYS_CLK_EN_M  (BIT(0))
#define MP_SYS_CLK_EN_V  0x1
#define MP_SYS_CLK_EN_S  0

#define MP_SYS_GMDA_DEBUG_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x4)
/* MP_SYS_GDMA_DEBUG_CH_NUM : R/W ;bitpos:[2:0] ;default: 3'd0 ; */
/*description: Config debug channel num in gdma.*/
#define MP_SYS_GDMA_DEBUG_CH_NUM    0x00000007
#define MP_SYS_GDMA_DEBUG_CH_NUM_M  ((MP_SYS_GDMA_DEBUG_CH_NUM_V)<<(MP_SYS_GDMA_DEBUG_CH_NUM_S))
#define MP_SYS_GDMA_DEBUG_CH_NUM_V  0x7
#define MP_SYS_GDMA_DEBUG_CH_NUM_S  0

#define MP_SYS_SYS_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x8)
/* MP_SYS_SYSTIMER_STALL_SEL : R/W ;bitpos:[31] ;default: 1'd0 ; */
/*description: 0: use systimer_stall signal from hp_core0, 1: use systimer_stall signal from hp
_core1.*/
#define MP_SYS_SYSTIMER_STALL_SEL    (BIT(31))
#define MP_SYS_SYSTIMER_STALL_SEL_M  (BIT(31))
#define MP_SYS_SYSTIMER_STALL_SEL_V  0x1
#define MP_SYS_SYSTIMER_STALL_SEL_S  31
/* MP_SYS_IO_MUX_RESET_DISABLE : R/W ;bitpos:[11] ;default: 1'd0 ; */
/*description: reset disable bit for IOMUX.*/
#define MP_SYS_IO_MUX_RESET_DISABLE    (BIT(11))
#define MP_SYS_IO_MUX_RESET_DISABLE_M  (BIT(11))
#define MP_SYS_IO_MUX_RESET_DISABLE_V  0x1
#define MP_SYS_IO_MUX_RESET_DISABLE_S  11
/* MP_SYS_FORCE_DOWNLOAD_BOOT : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: for download boot.*/
#define MP_SYS_FORCE_DOWNLOAD_BOOT    (BIT(2))
#define MP_SYS_FORCE_DOWNLOAD_BOOT_M  (BIT(2))
#define MP_SYS_FORCE_DOWNLOAD_BOOT_V  0x1
#define MP_SYS_FORCE_DOWNLOAD_BOOT_S  2

#define MP_SYS_AHB_ICM_H2X_CFG_REG          (DR_REG_MP_SYS_BASE + 0xC)
/* MP_SYS_AHB_ICM_H2X_BRIDGE_BUSY : RO ;bitpos:[2] ;default: 1'd0 ; */
/*description: ahb2axi bridge status. 0: idle, 1: ahb2axi busy..*/
#define MP_SYS_AHB_ICM_H2X_BRIDGE_BUSY    (BIT(2))
#define MP_SYS_AHB_ICM_H2X_BRIDGE_BUSY_M  (BIT(2))
#define MP_SYS_AHB_ICM_H2X_BRIDGE_BUSY_V  0x1
#define MP_SYS_AHB_ICM_H2X_BRIDGE_BUSY_S  2
/* MP_SYS_AHB_ICM_H2X_CUT_THROUGH_EN : R/W ;bitpos:[1] ;default: 1'd1 ; */
/*description: Set this bit to speed up ahb write..*/
#define MP_SYS_AHB_ICM_H2X_CUT_THROUGH_EN    (BIT(1))
#define MP_SYS_AHB_ICM_H2X_CUT_THROUGH_EN_M  (BIT(1))
#define MP_SYS_AHB_ICM_H2X_CUT_THROUGH_EN_V  0x1
#define MP_SYS_AHB_ICM_H2X_CUT_THROUGH_EN_S  1
/* MP_SYS_AHB_ICM_H2X_POST_WR_EN : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: Set this bit to speed up ahb write without waiting axi write response..*/
#define MP_SYS_AHB_ICM_H2X_POST_WR_EN    (BIT(0))
#define MP_SYS_AHB_ICM_H2X_POST_WR_EN_M  (BIT(0))
#define MP_SYS_AHB_ICM_H2X_POST_WR_EN_V  0x1
#define MP_SYS_AHB_ICM_H2X_POST_WR_EN_S  0

#define MP_SYS_ICM_MST_SEL_DDR_REG          (DR_REG_MP_SYS_BASE + 0x10)
/* MP_SYS_SWITCH2DDR_SEL : R/W ;bitpos:[10] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_SWITCH2DDR_SEL    (BIT(10))
#define MP_SYS_SWITCH2DDR_SEL_M  (BIT(10))
#define MP_SYS_SWITCH2DDR_SEL_V  0x1
#define MP_SYS_SWITCH2DDR_SEL_S  10
/* MP_SYS_PCIE_M1_2DDR_SEL : R/W ;bitpos:[9] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_PCIE_M1_2DDR_SEL    (BIT(9))
#define MP_SYS_PCIE_M1_2DDR_SEL_M  (BIT(9))
#define MP_SYS_PCIE_M1_2DDR_SEL_V  0x1
#define MP_SYS_PCIE_M1_2DDR_SEL_S  9
/* MP_SYS_PCIE_M0_2DDR_SEL : R/W ;bitpos:[8] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_PCIE_M0_2DDR_SEL    (BIT(8))
#define MP_SYS_PCIE_M0_2DDR_SEL_M  (BIT(8))
#define MP_SYS_PCIE_M0_2DDR_SEL_V  0x1
#define MP_SYS_PCIE_M0_2DDR_SEL_S  8
/* MP_SYS_HICM2DDR_SEL : R/W ;bitpos:[7] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_HICM2DDR_SEL    (BIT(7))
#define MP_SYS_HICM2DDR_SEL_M  (BIT(7))
#define MP_SYS_HICM2DDR_SEL_V  0x1
#define MP_SYS_HICM2DDR_SEL_S  7
/* MP_SYS_H265_M1_2DDR_SEL : R/W ;bitpos:[6] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_H265_M1_2DDR_SEL    (BIT(6))
#define MP_SYS_H265_M1_2DDR_SEL_M  (BIT(6))
#define MP_SYS_H265_M1_2DDR_SEL_V  0x1
#define MP_SYS_H265_M1_2DDR_SEL_S  6
/* MP_SYS_H265_M0_2DDR_SEL : R/W ;bitpos:[5] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_H265_M0_2DDR_SEL    (BIT(5))
#define MP_SYS_H265_M0_2DDR_SEL_M  (BIT(5))
#define MP_SYS_H265_M0_2DDR_SEL_V  0x1
#define MP_SYS_H265_M0_2DDR_SEL_S  5
/* MP_SYS_DW_GDMA_M1_2DDR_SEL : R/W ;bitpos:[4] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_DW_GDMA_M1_2DDR_SEL    (BIT(4))
#define MP_SYS_DW_GDMA_M1_2DDR_SEL_M  (BIT(4))
#define MP_SYS_DW_GDMA_M1_2DDR_SEL_V  0x1
#define MP_SYS_DW_GDMA_M1_2DDR_SEL_S  4
/* MP_SYS_DW_GDMA_M0_2DDR_SEL : R/W ;bitpos:[3] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_DW_GDMA_M0_2DDR_SEL    (BIT(3))
#define MP_SYS_DW_GDMA_M0_2DDR_SEL_M  (BIT(3))
#define MP_SYS_DW_GDMA_M0_2DDR_SEL_V  0x1
#define MP_SYS_DW_GDMA_M0_2DDR_SEL_S  3
/* MP_SYS_DMA2D2DDR_SEL : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_DMA2D2DDR_SEL    (BIT(2))
#define MP_SYS_DMA2D2DDR_SEL_M  (BIT(2))
#define MP_SYS_DMA2D2DDR_SEL_V  0x1
#define MP_SYS_DMA2D2DDR_SEL_S  2
/* MP_SYS_CPU2DDR_SEL : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CPU2DDR_SEL    (BIT(1))
#define MP_SYS_CPU2DDR_SEL_M  (BIT(1))
#define MP_SYS_CPU2DDR_SEL_V  0x1
#define MP_SYS_CPU2DDR_SEL_S  1
/* MP_SYS_AXI_GDMA2DDR_SEL : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_AXI_GDMA2DDR_SEL    (BIT(0))
#define MP_SYS_AXI_GDMA2DDR_SEL_M  (BIT(0))
#define MP_SYS_AXI_GDMA2DDR_SEL_V  0x1
#define MP_SYS_AXI_GDMA2DDR_SEL_S  0

#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_RAW_REG          (DR_REG_MP_SYS_BASE + 0x14)
/* MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'd0 ; */
/*description: The raw interrupt status of ahb icm h2x error resp.*/
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_RAW    (BIT(0))
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_RAW_M  (BIT(0))
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_RAW_V  0x1
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_RAW_S  0

#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ST_REG          (DR_REG_MP_SYS_BASE + 0x18)
/* MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ST : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: The masked interrupt status of ahb icm h2x error resp.*/
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ST    (BIT(0))
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ST_M  (BIT(0))
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ST_V  0x1
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ST_S  0

#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ENA_REG          (DR_REG_MP_SYS_BASE + 0x1C)
/* MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ENA : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: Write 1 to enable ahb icm h2x error resp int.*/
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ENA    (BIT(0))
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ENA_M  (BIT(0))
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ENA_V  0x1
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_ENA_S  0

#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_CLR_REG          (DR_REG_MP_SYS_BASE + 0x20)
/* MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_CLR : WT ;bitpos:[0] ;default: 1'd0 ; */
/*description: Write 1 to clear ahb icm h2x error resp int.*/
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_CLR    (BIT(0))
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_CLR_M  (BIT(0))
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_CLR_V  0x1
#define MP_SYS_AHB_ICM_H2X_BRESP_ERR_INT_CLR_S  0

#define MP_SYS_CPU_TARGET_ADDR_DET_INT_RAW_REG          (DR_REG_MP_SYS_BASE + 0x24)
/* MP_SYS_CPU_TARGET_RADDR_DET_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'd0 ; */
/*description: The raw interrupt status of cpu target read address detect.*/
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_RAW    (BIT(1))
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_RAW_M  (BIT(1))
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_RAW_V  0x1
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_RAW_S  1
/* MP_SYS_CPU_TARGET_WADDR_DET_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'd0 ; */
/*description: The raw interrupt status of cpu target write address detect.*/
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_RAW    (BIT(0))
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_RAW_M  (BIT(0))
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_RAW_V  0x1
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_RAW_S  0

#define MP_SYS_CPU_TARGET_ADDR_DET_INT_ST_REG          (DR_REG_MP_SYS_BASE + 0x28)
/* MP_SYS_CPU_TARGET_RADDR_DET_INT_ST : RO ;bitpos:[1] ;default: 1'd0 ; */
/*description: The masked interrupt status of cpu target read address detect.*/
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_ST    (BIT(1))
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_ST_M  (BIT(1))
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_ST_V  0x1
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_ST_S  1
/* MP_SYS_CPU_TARGET_WADDR_DET_INT_ST : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: The masked interrupt status of cpu target write address detect.*/
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_ST    (BIT(0))
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_ST_M  (BIT(0))
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_ST_V  0x1
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_ST_S  0

#define MP_SYS_CPU_TARGET_ADDR_DET_INT_ENA_REG          (DR_REG_MP_SYS_BASE + 0x2C)
/* MP_SYS_CPU_TARGET_RADDR_DET_INT_ENA : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: Write 1 to enable cpu target read address detect int.*/
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_ENA    (BIT(1))
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_ENA_M  (BIT(1))
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_ENA_V  0x1
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_ENA_S  1
/* MP_SYS_CPU_TARGET_WADDR_DET_INT_ENA : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: Write 1 to enable cpu target write address detect int.*/
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_ENA    (BIT(0))
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_ENA_M  (BIT(0))
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_ENA_V  0x1
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_ENA_S  0

#define MP_SYS_CPU_TARGET_ADDR_DET_INT_CLR_REG          (DR_REG_MP_SYS_BASE + 0x30)
/* MP_SYS_CPU_TARGET_RADDR_DET_INT_CLR : WT ;bitpos:[1] ;default: 1'd0 ; */
/*description: Write 1 to clear cpu target read address detect int.*/
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_CLR    (BIT(1))
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_CLR_M  (BIT(1))
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_CLR_V  0x1
#define MP_SYS_CPU_TARGET_RADDR_DET_INT_CLR_S  1
/* MP_SYS_CPU_TARGET_WADDR_DET_INT_CLR : WT ;bitpos:[0] ;default: 1'd0 ; */
/*description: Write 1 to clear cpu target write address detect int.*/
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_CLR    (BIT(0))
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_CLR_M  (BIT(0))
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_CLR_V  0x1
#define MP_SYS_CPU_TARGET_WADDR_DET_INT_CLR_S  0

#define MP_SYS_TWAI0_TIMESTAMP_L_REG          (DR_REG_MP_SYS_BASE + 0x34)
/* MP_SYS_HP_TWAI0_TIMESTAMP_L : R/W ;bitpos:[31:0] ;default: 32'hffffffff ; */
/*description: This field used to set lower 32bits of timestamp hp twai0.*/
#define MP_SYS_HP_TWAI0_TIMESTAMP_L    0xFFFFFFFF
#define MP_SYS_HP_TWAI0_TIMESTAMP_L_M  ((MP_SYS_HP_TWAI0_TIMESTAMP_L_V)<<(MP_SYS_HP_TWAI0_TIMESTAMP_L_S))
#define MP_SYS_HP_TWAI0_TIMESTAMP_L_V  0xFFFFFFFF
#define MP_SYS_HP_TWAI0_TIMESTAMP_L_S  0

#define MP_SYS_TWAI0_TIMESTAMP_H_REG          (DR_REG_MP_SYS_BASE + 0x38)
/* MP_SYS_HP_TWAI0_TIMESTAMP_H : R/W ;bitpos:[31:0] ;default: 32'hffffffff ; */
/*description: This field used to set upper 32bits of timestamp hp twai0.*/
#define MP_SYS_HP_TWAI0_TIMESTAMP_H    0xFFFFFFFF
#define MP_SYS_HP_TWAI0_TIMESTAMP_H_M  ((MP_SYS_HP_TWAI0_TIMESTAMP_H_V)<<(MP_SYS_HP_TWAI0_TIMESTAMP_H_S))
#define MP_SYS_HP_TWAI0_TIMESTAMP_H_V  0xFFFFFFFF
#define MP_SYS_HP_TWAI0_TIMESTAMP_H_S  0

#define MP_SYS_TWAI1_TIMESTAMP_L_REG          (DR_REG_MP_SYS_BASE + 0x3C)
/* MP_SYS_HP_TWAI1_TIMESTAMP_L : R/W ;bitpos:[31:0] ;default: 32'hffffffff ; */
/*description: This field used to set lower 32bits of timestamp hp twai1.*/
#define MP_SYS_HP_TWAI1_TIMESTAMP_L    0xFFFFFFFF
#define MP_SYS_HP_TWAI1_TIMESTAMP_L_M  ((MP_SYS_HP_TWAI1_TIMESTAMP_L_V)<<(MP_SYS_HP_TWAI1_TIMESTAMP_L_S))
#define MP_SYS_HP_TWAI1_TIMESTAMP_L_V  0xFFFFFFFF
#define MP_SYS_HP_TWAI1_TIMESTAMP_L_S  0

#define MP_SYS_TWAI1_TIMESTAMP_H_REG          (DR_REG_MP_SYS_BASE + 0x40)
/* MP_SYS_HP_TWAI1_TIMESTAMP_H : R/W ;bitpos:[31:0] ;default: 32'hffffffff ; */
/*description: This field used to set upper 32bits of timestamp hp twai1.*/
#define MP_SYS_HP_TWAI1_TIMESTAMP_H    0xFFFFFFFF
#define MP_SYS_HP_TWAI1_TIMESTAMP_H_M  ((MP_SYS_HP_TWAI1_TIMESTAMP_H_V)<<(MP_SYS_HP_TWAI1_TIMESTAMP_H_S))
#define MP_SYS_HP_TWAI1_TIMESTAMP_H_V  0xFFFFFFFF
#define MP_SYS_HP_TWAI1_TIMESTAMP_H_S  0

#define MP_SYS_TWAI2_TIMESTAMP_L_REG          (DR_REG_MP_SYS_BASE + 0x44)
/* MP_SYS_HP_TWAI2_TIMESTAMP_L : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: This field used to set lower 32bits of timestamp hp twai2.*/
#define MP_SYS_HP_TWAI2_TIMESTAMP_L    0xFFFFFFFF
#define MP_SYS_HP_TWAI2_TIMESTAMP_L_M  ((MP_SYS_HP_TWAI2_TIMESTAMP_L_V)<<(MP_SYS_HP_TWAI2_TIMESTAMP_L_S))
#define MP_SYS_HP_TWAI2_TIMESTAMP_L_V  0xFFFFFFFF
#define MP_SYS_HP_TWAI2_TIMESTAMP_L_S  0

#define MP_SYS_TWAI2_TIMESTAMP_H_REG          (DR_REG_MP_SYS_BASE + 0x48)
/* MP_SYS_HP_TWAI2_TIMESTAMP_H : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: This field used to set upper 32bits of timestamp hp twai2.*/
#define MP_SYS_HP_TWAI2_TIMESTAMP_H    0xFFFFFFFF
#define MP_SYS_HP_TWAI2_TIMESTAMP_H_M  ((MP_SYS_HP_TWAI2_TIMESTAMP_H_V)<<(MP_SYS_HP_TWAI2_TIMESTAMP_H_S))
#define MP_SYS_HP_TWAI2_TIMESTAMP_H_V  0xFFFFFFFF
#define MP_SYS_HP_TWAI2_TIMESTAMP_H_S  0

#define MP_SYS_PROBEA_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x4C)
/* MP_SYS_PROBE_GLOBAL_EN : R/W ;bitpos:[28] ;default: 1'd0 ; */
/*description: Set this bit to enable global debug probe in hp system..*/
#define MP_SYS_PROBE_GLOBAL_EN    (BIT(28))
#define MP_SYS_PROBE_GLOBAL_EN_M  (BIT(28))
#define MP_SYS_PROBE_GLOBAL_EN_V  0x1
#define MP_SYS_PROBE_GLOBAL_EN_S  28
/* MP_SYS_PROBE_H_SEL : R/W ;bitpos:[27:26] ;default: 2'd0 ; */
/*description: This field is used to select probe_out[31:16].*/
#define MP_SYS_PROBE_H_SEL    0x00000003
#define MP_SYS_PROBE_H_SEL_M  ((MP_SYS_PROBE_H_SEL_V)<<(MP_SYS_PROBE_H_SEL_S))
#define MP_SYS_PROBE_H_SEL_V  0x3
#define MP_SYS_PROBE_H_SEL_S  26
/* MP_SYS_PROBE_L_SEL : R/W ;bitpos:[25:24] ;default: 2'd0 ; */
/*description: This field is used to select probe_out[15:0].*/
#define MP_SYS_PROBE_L_SEL    0x00000003
#define MP_SYS_PROBE_L_SEL_M  ((MP_SYS_PROBE_L_SEL_V)<<(MP_SYS_PROBE_L_SEL_S))
#define MP_SYS_PROBE_L_SEL_V  0x3
#define MP_SYS_PROBE_L_SEL_S  24
/* MP_SYS_PROBE_A_TOP_SEL : R/W ;bitpos:[23:16] ;default: 8'd0 ; */
/*description: This field is used to selec module's probe_out[31:0] as probe out in a mode.*/
#define MP_SYS_PROBE_A_TOP_SEL    0x000000FF
#define MP_SYS_PROBE_A_TOP_SEL_M  ((MP_SYS_PROBE_A_TOP_SEL_V)<<(MP_SYS_PROBE_A_TOP_SEL_S))
#define MP_SYS_PROBE_A_TOP_SEL_V  0xFF
#define MP_SYS_PROBE_A_TOP_SEL_S  16
/* MP_SYS_PROBE_A_MOD_SEL : R/W ;bitpos:[15:0] ;default: 16'd0 ; */
/*description: Tihs field is used to selec probe_group from probe_group0 to probe_group15 for m
odule's probe_out[31:0] in a mode.*/
#define MP_SYS_PROBE_A_MOD_SEL    0x0000FFFF
#define MP_SYS_PROBE_A_MOD_SEL_M  ((MP_SYS_PROBE_A_MOD_SEL_V)<<(MP_SYS_PROBE_A_MOD_SEL_S))
#define MP_SYS_PROBE_A_MOD_SEL_V  0xFFFF
#define MP_SYS_PROBE_A_MOD_SEL_S  0

#define MP_SYS_PROBEB_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x50)
/* MP_SYS_PROBE_B_EN : R/W ;bitpos:[24] ;default: 1'd0 ; */
/*description: Set this bit to enable b mode for debug probe. 1:  b mode, 0: a mode..*/
#define MP_SYS_PROBE_B_EN    (BIT(24))
#define MP_SYS_PROBE_B_EN_M  (BIT(24))
#define MP_SYS_PROBE_B_EN_V  0x1
#define MP_SYS_PROBE_B_EN_S  24
/* MP_SYS_PROBE_B_TOP_SEL : R/W ;bitpos:[23:16] ;default: 8'd0 ; */
/*description: This field is used to select module's probe_out[31:0] as probe_out in b mode.*/
#define MP_SYS_PROBE_B_TOP_SEL    0x000000FF
#define MP_SYS_PROBE_B_TOP_SEL_M  ((MP_SYS_PROBE_B_TOP_SEL_V)<<(MP_SYS_PROBE_B_TOP_SEL_S))
#define MP_SYS_PROBE_B_TOP_SEL_V  0xFF
#define MP_SYS_PROBE_B_TOP_SEL_S  16
/* MP_SYS_PROBE_B_MOD_SEL : R/W ;bitpos:[15:0] ;default: 16'd0 ; */
/*description: This field is used to selec probe_group from probe_group0 to probe_group15 for m
odule's probe_out[31:0] in b mode..*/
#define MP_SYS_PROBE_B_MOD_SEL    0x0000FFFF
#define MP_SYS_PROBE_B_MOD_SEL_M  ((MP_SYS_PROBE_B_MOD_SEL_V)<<(MP_SYS_PROBE_B_MOD_SEL_S))
#define MP_SYS_PROBE_B_MOD_SEL_V  0xFFFF
#define MP_SYS_PROBE_B_MOD_SEL_S  0

#define MP_SYS_PROBE_OUT_REG          (DR_REG_MP_SYS_BASE + 0x54)
/* MP_SYS_PROBE_TOP_OUT : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_PROBE_TOP_OUT    0xFFFFFFFF
#define MP_SYS_PROBE_TOP_OUT_M  ((MP_SYS_PROBE_TOP_OUT_V)<<(MP_SYS_PROBE_TOP_OUT_S))
#define MP_SYS_PROBE_TOP_OUT_V  0xFFFFFFFF
#define MP_SYS_PROBE_TOP_OUT_S  0

#define MP_SYS_EFUSE_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x58)
/* MP_SYS_DIS_AUTO_READ : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_DIS_AUTO_READ    (BIT(0))
#define MP_SYS_DIS_AUTO_READ_M  (BIT(0))
#define MP_SYS_DIS_AUTO_READ_V  0x1
#define MP_SYS_DIS_AUTO_READ_S  0

#define MP_SYS_IOMUX_FPGA_DEBUG_REG          (DR_REG_MP_SYS_BASE + 0x5C)
/* MP_SYS_FPGA_DEBUG : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: iomux fpga debug.*/
#define MP_SYS_FPGA_DEBUG    (BIT(0))
#define MP_SYS_FPGA_DEBUG_M  (BIT(0))
#define MP_SYS_FPGA_DEBUG_V  0x1
#define MP_SYS_FPGA_DEBUG_S  0

#define MP_SYS_GPIO_ST_CTRL0_REG          (DR_REG_MP_SYS_BASE + 0x60)
/* MP_SYS_GPIO_ST_0 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN ST control.*/
#define MP_SYS_GPIO_ST_0    0xFFFFFFFF
#define MP_SYS_GPIO_ST_0_M  ((MP_SYS_GPIO_ST_0_V)<<(MP_SYS_GPIO_ST_0_S))
#define MP_SYS_GPIO_ST_0_V  0xFFFFFFFF
#define MP_SYS_GPIO_ST_0_S  0

#define MP_SYS_GPIO_ST_CTRL1_REG          (DR_REG_MP_SYS_BASE + 0x64)
/* MP_SYS_GPIO_ST_1 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN ST control.*/
#define MP_SYS_GPIO_ST_1    0xFFFFFFFF
#define MP_SYS_GPIO_ST_1_M  ((MP_SYS_GPIO_ST_1_V)<<(MP_SYS_GPIO_ST_1_S))
#define MP_SYS_GPIO_ST_1_V  0xFFFFFFFF
#define MP_SYS_GPIO_ST_1_S  0

#define MP_SYS_GPIO_ST_CTRL2_REG          (DR_REG_MP_SYS_BASE + 0x68)
/* MP_SYS_GPIO_ST_2 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN ST control.*/
#define MP_SYS_GPIO_ST_2    0xFFFFFFFF
#define MP_SYS_GPIO_ST_2_M  ((MP_SYS_GPIO_ST_2_V)<<(MP_SYS_GPIO_ST_2_S))
#define MP_SYS_GPIO_ST_2_V  0xFFFFFFFF
#define MP_SYS_GPIO_ST_2_S  0

#define MP_SYS_GPIO_ST_CTRL3_REG          (DR_REG_MP_SYS_BASE + 0x6C)
/* MP_SYS_GPIO_ST_3 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN ST control.*/
#define MP_SYS_GPIO_ST_3    0xFFFFFFFF
#define MP_SYS_GPIO_ST_3_M  ((MP_SYS_GPIO_ST_3_V)<<(MP_SYS_GPIO_ST_3_S))
#define MP_SYS_GPIO_ST_3_V  0xFFFFFFFF
#define MP_SYS_GPIO_ST_3_S  0

#define MP_SYS_GPIO_ST_CTRL4_REG          (DR_REG_MP_SYS_BASE + 0x70)
/* MP_SYS_GPIO_ST_4 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN ST control.*/
#define MP_SYS_GPIO_ST_4    0xFFFFFFFF
#define MP_SYS_GPIO_ST_4_M  ((MP_SYS_GPIO_ST_4_V)<<(MP_SYS_GPIO_ST_4_S))
#define MP_SYS_GPIO_ST_4_V  0xFFFFFFFF
#define MP_SYS_GPIO_ST_4_S  0

#define MP_SYS_GPIO_ST_CTRL5_REG          (DR_REG_MP_SYS_BASE + 0x74)
/* MP_SYS_GPIO_ST_5 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN ST control.*/
#define MP_SYS_GPIO_ST_5    0xFFFFFFFF
#define MP_SYS_GPIO_ST_5_M  ((MP_SYS_GPIO_ST_5_V)<<(MP_SYS_GPIO_ST_5_S))
#define MP_SYS_GPIO_ST_5_V  0xFFFFFFFF
#define MP_SYS_GPIO_ST_5_S  0

#define MP_SYS_GPIO_ST_CTRL6_REG          (DR_REG_MP_SYS_BASE + 0x78)
/* MP_SYS_GPIO_ST_6 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN ST control.*/
#define MP_SYS_GPIO_ST_6    0xFFFFFFFF
#define MP_SYS_GPIO_ST_6_M  ((MP_SYS_GPIO_ST_6_V)<<(MP_SYS_GPIO_ST_6_S))
#define MP_SYS_GPIO_ST_6_V  0xFFFFFFFF
#define MP_SYS_GPIO_ST_6_S  0

#define MP_SYS_GPIO_ST_CTRL7_REG          (DR_REG_MP_SYS_BASE + 0x7C)
/* MP_SYS_GPIO_ST_7 : R/W ;bitpos:[23:0] ;default: 24'd0 ; */
/*description: PAD PIN ST control.*/
#define MP_SYS_GPIO_ST_7    0x00FFFFFF
#define MP_SYS_GPIO_ST_7_M  ((MP_SYS_GPIO_ST_7_V)<<(MP_SYS_GPIO_ST_7_S))
#define MP_SYS_GPIO_ST_7_V  0xFFFFFF
#define MP_SYS_GPIO_ST_7_S  0

#define MP_SYS_GPIO_HE_CTRL0_REG          (DR_REG_MP_SYS_BASE + 0x80)
/* MP_SYS_GPIO_HOLD_EN_0 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN HE control.*/
#define MP_SYS_GPIO_HOLD_EN_0    0xFFFFFFFF
#define MP_SYS_GPIO_HOLD_EN_0_M  ((MP_SYS_GPIO_HOLD_EN_0_V)<<(MP_SYS_GPIO_HOLD_EN_0_S))
#define MP_SYS_GPIO_HOLD_EN_0_V  0xFFFFFFFF
#define MP_SYS_GPIO_HOLD_EN_0_S  0

#define MP_SYS_GPIO_HE_CTRL1_REG          (DR_REG_MP_SYS_BASE + 0x84)
/* MP_SYS_GPIO_HOLD_EN_1 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN HE control.*/
#define MP_SYS_GPIO_HOLD_EN_1    0xFFFFFFFF
#define MP_SYS_GPIO_HOLD_EN_1_M  ((MP_SYS_GPIO_HOLD_EN_1_V)<<(MP_SYS_GPIO_HOLD_EN_1_S))
#define MP_SYS_GPIO_HOLD_EN_1_V  0xFFFFFFFF
#define MP_SYS_GPIO_HOLD_EN_1_S  0

#define MP_SYS_GPIO_HE_CTRL2_REG          (DR_REG_MP_SYS_BASE + 0x88)
/* MP_SYS_GPIO_HOLD_EN_2 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN HE control.*/
#define MP_SYS_GPIO_HOLD_EN_2    0xFFFFFFFF
#define MP_SYS_GPIO_HOLD_EN_2_M  ((MP_SYS_GPIO_HOLD_EN_2_V)<<(MP_SYS_GPIO_HOLD_EN_2_S))
#define MP_SYS_GPIO_HOLD_EN_2_V  0xFFFFFFFF
#define MP_SYS_GPIO_HOLD_EN_2_S  0

#define MP_SYS_GPIO_HE_CTRL3_REG          (DR_REG_MP_SYS_BASE + 0x8C)
/* MP_SYS_GPIO_HOLD_EN_3 : R/W ;bitpos:[27:0] ;default: 28'd0 ; */
/*description: PAD PIN HE control.*/
#define MP_SYS_GPIO_HOLD_EN_3    0x0FFFFFFF
#define MP_SYS_GPIO_HOLD_EN_3_M  ((MP_SYS_GPIO_HOLD_EN_3_V)<<(MP_SYS_GPIO_HOLD_EN_3_S))
#define MP_SYS_GPIO_HOLD_EN_3_V  0xFFFFFFF
#define MP_SYS_GPIO_HOLD_EN_3_S  0

#define MP_SYS_GPIO_MS_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x90)
/* MP_SYS_GPIO_MODE_SEL : R/W ;bitpos:[2:0] ;default: 3'd0 ; */
/*description: PAD PIN mode select control \\0 bit: control pad80-89 ms \\1 bit: control pad117
-123 \\value 0:3.3v 1:1.8v.*/
#define MP_SYS_GPIO_MODE_SEL    0x00000007
#define MP_SYS_GPIO_MODE_SEL_M  ((MP_SYS_GPIO_MODE_SEL_V)<<(MP_SYS_GPIO_MODE_SEL_S))
#define MP_SYS_GPIO_MODE_SEL_V  0x7
#define MP_SYS_GPIO_MODE_SEL_S  0

#define MP_SYS_GPIO_O_HOLD_CTRL0_REG          (DR_REG_MP_SYS_BASE + 0x94)
/* MP_SYS_GPIO_0_HOLD_0 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN hold control.*/
#define MP_SYS_GPIO_0_HOLD_0    0xFFFFFFFF
#define MP_SYS_GPIO_0_HOLD_0_M  ((MP_SYS_GPIO_0_HOLD_0_V)<<(MP_SYS_GPIO_0_HOLD_0_S))
#define MP_SYS_GPIO_0_HOLD_0_V  0xFFFFFFFF
#define MP_SYS_GPIO_0_HOLD_0_S  0

#define MP_SYS_GPIO_O_HOLD_CTRL1_REG          (DR_REG_MP_SYS_BASE + 0x98)
/* MP_SYS_GPIO_0_HOLD_1 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN hold control.*/
#define MP_SYS_GPIO_0_HOLD_1    0xFFFFFFFF
#define MP_SYS_GPIO_0_HOLD_1_M  ((MP_SYS_GPIO_0_HOLD_1_V)<<(MP_SYS_GPIO_0_HOLD_1_S))
#define MP_SYS_GPIO_0_HOLD_1_V  0xFFFFFFFF
#define MP_SYS_GPIO_0_HOLD_1_S  0

#define MP_SYS_GPIO_O_HOLD_CTRL2_REG          (DR_REG_MP_SYS_BASE + 0x9C)
/* MP_SYS_GPIO_0_HOLD_2 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: PAD PIN hold control.*/
#define MP_SYS_GPIO_0_HOLD_2    0xFFFFFFFF
#define MP_SYS_GPIO_0_HOLD_2_M  ((MP_SYS_GPIO_0_HOLD_2_V)<<(MP_SYS_GPIO_0_HOLD_2_S))
#define MP_SYS_GPIO_0_HOLD_2_V  0xFFFFFFFF
#define MP_SYS_GPIO_0_HOLD_2_S  0

#define MP_SYS_GPIO_O_HOLD_CTRL3_REG          (DR_REG_MP_SYS_BASE + 0xA0)
/* MP_SYS_GPIO_0_HOLD_3 : R/W ;bitpos:[27:0] ;default: 28'd0 ; */
/*description: PAD PIN hold control.*/
#define MP_SYS_GPIO_0_HOLD_3    0x0FFFFFFF
#define MP_SYS_GPIO_0_HOLD_3_M  ((MP_SYS_GPIO_0_HOLD_3_V)<<(MP_SYS_GPIO_0_HOLD_3_S))
#define MP_SYS_GPIO_0_HOLD_3_V  0xFFFFFFF
#define MP_SYS_GPIO_0_HOLD_3_S  0

#define MP_SYS_GPIO_MS_SRC_CTRL_REG          (DR_REG_MP_SYS_BASE + 0xA4)
/* MP_SYS_GPIO_MODE_SEL_SRC_CTRL : R/W ;bitpos:[5:0] ;default: 6'd0 ; */
/*description: PAD PIN MS(Mode select) signal source select.*/
#define MP_SYS_GPIO_MODE_SEL_SRC_CTRL    0x0000003F
#define MP_SYS_GPIO_MODE_SEL_SRC_CTRL_M  ((MP_SYS_GPIO_MODE_SEL_SRC_CTRL_V)<<(MP_SYS_GPIO_MODE_SEL_SRC_CTRL_S))
#define MP_SYS_GPIO_MODE_SEL_SRC_CTRL_V  0x3F
#define MP_SYS_GPIO_MODE_SEL_SRC_CTRL_S  0

#define MP_SYS_SDMMC0_VOLT_SWITCH_CTRL_REG          (DR_REG_MP_SYS_BASE + 0xA8)
/* MP_SYS_SDMMC0_VOLT_SWITCH_1_RST : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_SDMMC0_VOLT_SWITCH_1_RST    (BIT(1))
#define MP_SYS_SDMMC0_VOLT_SWITCH_1_RST_M  (BIT(1))
#define MP_SYS_SDMMC0_VOLT_SWITCH_1_RST_V  0x1
#define MP_SYS_SDMMC0_VOLT_SWITCH_1_RST_S  1
/* MP_SYS_SDMMC0_VOLT_SWITCH_0_RST : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_SDMMC0_VOLT_SWITCH_0_RST    (BIT(0))
#define MP_SYS_SDMMC0_VOLT_SWITCH_0_RST_M  (BIT(0))
#define MP_SYS_SDMMC0_VOLT_SWITCH_0_RST_V  0x1
#define MP_SYS_SDMMC0_VOLT_SWITCH_0_RST_S  0

#define MP_SYS_SDMMC1_VOLT_SWITCH_CTRL_REG          (DR_REG_MP_SYS_BASE + 0xAC)
/* MP_SYS_SDMMC1_VOLT_SWITCH_0_RST : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_SDMMC1_VOLT_SWITCH_0_RST    (BIT(0))
#define MP_SYS_SDMMC1_VOLT_SWITCH_0_RST_M  (BIT(0))
#define MP_SYS_SDMMC1_VOLT_SWITCH_0_RST_V  0x1
#define MP_SYS_SDMMC1_VOLT_SWITCH_0_RST_S  0

#define MP_SYS_SDMMC0_VOLT_SWITCH_CNT_LIMIT_REG          (DR_REG_MP_SYS_BASE + 0xB0)
/* MP_SYS_SDMMC0_TIME_CNT_AFTER_MS : R/W ;bitpos:[27:16] ;default: 10'd168 ; */
/*description: reserved.*/
#define MP_SYS_SDMMC0_TIME_CNT_AFTER_MS    0x00000FFF
#define MP_SYS_SDMMC0_TIME_CNT_AFTER_MS_M  ((MP_SYS_SDMMC0_TIME_CNT_AFTER_MS_V)<<(MP_SYS_SDMMC0_TIME_CNT_AFTER_MS_S))
#define MP_SYS_SDMMC0_TIME_CNT_AFTER_MS_V  0xFFF
#define MP_SYS_SDMMC0_TIME_CNT_AFTER_MS_S  16
/* MP_SYS_SDMMC0_TIME_CNT_1_MS : R/W ;bitpos:[11:0] ;default: 10'd168 ; */
/*description: reserved.*/
#define MP_SYS_SDMMC0_TIME_CNT_1_MS    0x00000FFF
#define MP_SYS_SDMMC0_TIME_CNT_1_MS_M  ((MP_SYS_SDMMC0_TIME_CNT_1_MS_V)<<(MP_SYS_SDMMC0_TIME_CNT_1_MS_S))
#define MP_SYS_SDMMC0_TIME_CNT_1_MS_V  0xFFF
#define MP_SYS_SDMMC0_TIME_CNT_1_MS_S  0

#define MP_SYS_SDMMC1_VOLT_SWITCH_CNT_LIMIT_REG          (DR_REG_MP_SYS_BASE + 0xB4)
/* MP_SYS_SDMMC1_TIME_CNT_AFTER_MS : R/W ;bitpos:[27:16] ;default: 10'd168 ; */
/*description: reserved.*/
#define MP_SYS_SDMMC1_TIME_CNT_AFTER_MS    0x00000FFF
#define MP_SYS_SDMMC1_TIME_CNT_AFTER_MS_M  ((MP_SYS_SDMMC1_TIME_CNT_AFTER_MS_V)<<(MP_SYS_SDMMC1_TIME_CNT_AFTER_MS_S))
#define MP_SYS_SDMMC1_TIME_CNT_AFTER_MS_V  0xFFF
#define MP_SYS_SDMMC1_TIME_CNT_AFTER_MS_S  16
/* MP_SYS_SDMMC1_TIME_CNT_1_MS : R/W ;bitpos:[11:0] ;default: 10'd168 ; */
/*description: reserved.*/
#define MP_SYS_SDMMC1_TIME_CNT_1_MS    0x00000FFF
#define MP_SYS_SDMMC1_TIME_CNT_1_MS_M  ((MP_SYS_SDMMC1_TIME_CNT_1_MS_V)<<(MP_SYS_SDMMC1_TIME_CNT_1_MS_S))
#define MP_SYS_SDMMC1_TIME_CNT_1_MS_V  0xFFF
#define MP_SYS_SDMMC1_TIME_CNT_1_MS_S  0

#define MP_SYS_SD_VOLT_SWITCH_DONE_INT_RAW_REG          (DR_REG_MP_SYS_BASE + 0xB8)
/* MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'd0 ; */
/*description: The raw interrupt status of sd1 card0 volt switch.*/
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_RAW    (BIT(2))
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_RAW_M  (BIT(2))
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_RAW_V  0x1
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_RAW_S  2
/* MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'd0 ; */
/*description: The raw interrupt status of sd0 card1 volt switch.*/
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_RAW    (BIT(1))
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_RAW_M  (BIT(1))
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_RAW_V  0x1
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_RAW_S  1
/* MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'd0 ; */
/*description: The raw interrupt status of sd0 card0 volt switch.*/
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_RAW    (BIT(0))
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_RAW_M  (BIT(0))
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_RAW_V  0x1
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_RAW_S  0

#define MP_SYS_SD_VOLT_SWITCH_DONE_INT_ST_REG          (DR_REG_MP_SYS_BASE + 0xBC)
/* MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ST : RO ;bitpos:[2] ;default: 1'd0 ; */
/*description: The masked interrupt status of sd1 card0 volt switch.*/
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ST    (BIT(2))
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ST_M  (BIT(2))
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ST_V  0x1
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ST_S  2
/* MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ST : RO ;bitpos:[1] ;default: 1'd0 ; */
/*description: The masked interrupt status of sd0 card1 volt switch.*/
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ST    (BIT(1))
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ST_M  (BIT(1))
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ST_V  0x1
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ST_S  1
/* MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ST : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: The masked interrupt status of sd0 card0 volt switch.*/
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ST    (BIT(0))
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ST_M  (BIT(0))
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ST_V  0x1
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ST_S  0

#define MP_SYS_SD_VOLT_SWITCH_DONE_INT_ENA_REG          (DR_REG_MP_SYS_BASE + 0xC0)
/* MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ENA : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: Wirte 1 to enable sd1 card0 volt switch int.*/
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ENA    (BIT(2))
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ENA_M  (BIT(2))
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ENA_V  0x1
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_ENA_S  2
/* MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ENA : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: Wirte 1 to enable sd0 card1 volt switch int.*/
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ENA    (BIT(1))
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ENA_M  (BIT(1))
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ENA_V  0x1
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_ENA_S  1
/* MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ENA : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: Wirte 1 to enable sd0 card0 volt switch int.*/
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ENA    (BIT(0))
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ENA_M  (BIT(0))
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ENA_V  0x1
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_ENA_S  0

#define MP_SYS_SD_VOLT_SWITCH_DONE_INT_CLR_REG          (DR_REG_MP_SYS_BASE + 0xC4)
/* MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_CLR : WT ;bitpos:[2] ;default: 1'd0 ; */
/*description: Wirte 1 to clear sd1 card0 volt switch int.*/
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_CLR    (BIT(2))
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_CLR_M  (BIT(2))
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_CLR_V  0x1
#define MP_SYS_SD1_VOLT_SWITCH_0_DONE_INT_CLR_S  2
/* MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_CLR : WT ;bitpos:[1] ;default: 1'd0 ; */
/*description: Wirte 1 to clear sd0 card1 volt switch int.*/
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_CLR    (BIT(1))
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_CLR_M  (BIT(1))
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_CLR_V  0x1
#define MP_SYS_SD0_VOLT_SWITCH_1_DONE_INT_CLR_S  1
/* MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_CLR : WT ;bitpos:[0] ;default: 1'd0 ; */
/*description: Wirte 1 to clear sd0 card0 volt switch int.*/
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_CLR    (BIT(0))
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_CLR_M  (BIT(0))
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_CLR_V  0x1
#define MP_SYS_SD0_VOLT_SWITCH_0_DONE_INT_CLR_S  0

#define MP_SYS_USB_OTGHS0_CTRL_REG          (DR_REG_MP_SYS_BASE + 0xC8)
/* MP_SYS_USB_OTGHS0_PRDYN : RO ;bitpos:[25] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PRDYN    (BIT(25))
#define MP_SYS_USB_OTGHS0_PRDYN_M  (BIT(25))
#define MP_SYS_USB_OTGHS0_PRDYN_V  0x1
#define MP_SYS_USB_OTGHS0_PRDYN_S  25
/* MP_SYS_USB_OTGHS0_PHY_TEST_DONE : RO ;bitpos:[24] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_TEST_DONE    (BIT(24))
#define MP_SYS_USB_OTGHS0_PHY_TEST_DONE_M  (BIT(24))
#define MP_SYS_USB_OTGHS0_PHY_TEST_DONE_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_TEST_DONE_S  24
/* MP_SYS_USB_OTGHS0_MEM_SD : R/W ;bitpos:[23] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_MEM_SD    (BIT(23))
#define MP_SYS_USB_OTGHS0_MEM_SD_M  (BIT(23))
#define MP_SYS_USB_OTGHS0_MEM_SD_V  0x1
#define MP_SYS_USB_OTGHS0_MEM_SD_S  23
/* MP_SYS_USB_OTGHS0_DFIFO_HCLK_FORCE_ON : R/W ;bitpos:[22] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_DFIFO_HCLK_FORCE_ON    (BIT(22))
#define MP_SYS_USB_OTGHS0_DFIFO_HCLK_FORCE_ON_M  (BIT(22))
#define MP_SYS_USB_OTGHS0_DFIFO_HCLK_FORCE_ON_V  0x1
#define MP_SYS_USB_OTGHS0_DFIFO_HCLK_FORCE_ON_S  22
/* MP_SYS_USB_OTGHS0_USB_OTGHS_WAKEUP_CLR : R/W ;bitpos:[21] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_USB_OTGHS_WAKEUP_CLR    (BIT(21))
#define MP_SYS_USB_OTGHS0_USB_OTGHS_WAKEUP_CLR_M  (BIT(21))
#define MP_SYS_USB_OTGHS0_USB_OTGHS_WAKEUP_CLR_V  0x1
#define MP_SYS_USB_OTGHS0_USB_OTGHS_WAKEUP_CLR_S  21
/* MP_SYS_USB_OTGHS0_USB_OTGHS_SUSPEND : R/W ;bitpos:[20] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_USB_OTGHS_SUSPEND    (BIT(20))
#define MP_SYS_USB_OTGHS0_USB_OTGHS_SUSPEND_M  (BIT(20))
#define MP_SYS_USB_OTGHS0_USB_OTGHS_SUSPEND_V  0x1
#define MP_SYS_USB_OTGHS0_USB_OTGHS_SUSPEND_S  20
/* MP_SYS_USB_OTGHS0_PHY_TXBITSTUFF_EN : R/W ;bitpos:[19] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_TXBITSTUFF_EN    (BIT(19))
#define MP_SYS_USB_OTGHS0_PHY_TXBITSTUFF_EN_M  (BIT(19))
#define MP_SYS_USB_OTGHS0_PHY_TXBITSTUFF_EN_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_TXBITSTUFF_EN_S  19
/* MP_SYS_USB_OTGHS0_PHY_SUSPENDM : R/W ;bitpos:[18] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_SUSPENDM    (BIT(18))
#define MP_SYS_USB_OTGHS0_PHY_SUSPENDM_M  (BIT(18))
#define MP_SYS_USB_OTGHS0_PHY_SUSPENDM_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_SUSPENDM_S  18
/* MP_SYS_USB_OTGHS0_PHY_SUSPENDM_FORCE_EN : R/W ;bitpos:[17] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_SUSPENDM_FORCE_EN    (BIT(17))
#define MP_SYS_USB_OTGHS0_PHY_SUSPENDM_FORCE_EN_M  (BIT(17))
#define MP_SYS_USB_OTGHS0_PHY_SUSPENDM_FORCE_EN_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_SUSPENDM_FORCE_EN_S  17
/* MP_SYS_USB_OTGHS0_PHY_SELF_TEST : R/W ;bitpos:[16] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_SELF_TEST    (BIT(16))
#define MP_SYS_USB_OTGHS0_PHY_SELF_TEST_M  (BIT(16))
#define MP_SYS_USB_OTGHS0_PHY_SELF_TEST_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_SELF_TEST_S  16
/* MP_SYS_USB_OTGHS0_PHY_RTC_XPD_USB20PHY : R/W ;bitpos:[15] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_RTC_XPD_USB20PHY    (BIT(15))
#define MP_SYS_USB_OTGHS0_PHY_RTC_XPD_USB20PHY_M  (BIT(15))
#define MP_SYS_USB_OTGHS0_PHY_RTC_XPD_USB20PHY_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_RTC_XPD_USB20PHY_S  15
/* MP_SYS_USB_OTGHS0_PHY_RESET : R/W ;bitpos:[14] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_RESET    (BIT(14))
#define MP_SYS_USB_OTGHS0_PHY_RESET_M  (BIT(14))
#define MP_SYS_USB_OTGHS0_PHY_RESET_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_RESET_S  14
/* MP_SYS_USB_OTGHS0_PHY_RESET_FORCE_EN : R/W ;bitpos:[13] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_RESET_FORCE_EN    (BIT(13))
#define MP_SYS_USB_OTGHS0_PHY_RESET_FORCE_EN_M  (BIT(13))
#define MP_SYS_USB_OTGHS0_PHY_RESET_FORCE_EN_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_RESET_FORCE_EN_S  13
/* MP_SYS_USB_OTGHS0_PHY_REFCLK_MODE : R/W ;bitpos:[12] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_REFCLK_MODE    (BIT(12))
#define MP_SYS_USB_OTGHS0_PHY_REFCLK_MODE_M  (BIT(12))
#define MP_SYS_USB_OTGHS0_PHY_REFCLK_MODE_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_REFCLK_MODE_S  12
/* MP_SYS_USB_OTGHS0_PHY_PLL_FORCE_EN : R/W ;bitpos:[11] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_PLL_FORCE_EN    (BIT(11))
#define MP_SYS_USB_OTGHS0_PHY_PLL_FORCE_EN_M  (BIT(11))
#define MP_SYS_USB_OTGHS0_PHY_PLL_FORCE_EN_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_PLL_FORCE_EN_S  11
/* MP_SYS_USB_OTGHS0_PHY_PLL_EN : R/W ;bitpos:[10] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_PLL_EN    (BIT(10))
#define MP_SYS_USB_OTGHS0_PHY_PLL_EN_M  (BIT(10))
#define MP_SYS_USB_OTGHS0_PHY_PLL_EN_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_PLL_EN_S  10
/* MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM_BYPS : R/W ;bitpos:[9] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM_BYPS    (BIT(9))
#define MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM_BYPS_M  (BIT(9))
#define MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM_BYPS_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM_BYPS_S  9
/* MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM : R/W ;bitpos:[8] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM    (BIT(8))
#define MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM_M  (BIT(8))
#define MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_OTG_SUSPENDM_S  8
/* MP_SYS_USB_OTGHS0_PHY_IDPULLUP : R/W ;bitpos:[7] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_IDPULLUP    (BIT(7))
#define MP_SYS_USB_OTGHS0_PHY_IDPULLUP_M  (BIT(7))
#define MP_SYS_USB_OTGHS0_PHY_IDPULLUP_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_IDPULLUP_S  7
/* MP_SYS_USB_OTGHS0_PHY_DPPULLDOWN : R/W ;bitpos:[6] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_DPPULLDOWN    (BIT(6))
#define MP_SYS_USB_OTGHS0_PHY_DPPULLDOWN_M  (BIT(6))
#define MP_SYS_USB_OTGHS0_PHY_DPPULLDOWN_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_DPPULLDOWN_S  6
/* MP_SYS_USB_OTGHS0_PHY_DMPULLDOWN : R/W ;bitpos:[5] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_DMPULLDOWN    (BIT(5))
#define MP_SYS_USB_OTGHS0_PHY_DMPULLDOWN_M  (BIT(5))
#define MP_SYS_USB_OTGHS0_PHY_DMPULLDOWN_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_DMPULLDOWN_S  5
/* MP_SYS_USB_OTGHS0_PHY_DISCHRGVBUS : R/W ;bitpos:[4] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_DISCHRGVBUS    (BIT(4))
#define MP_SYS_USB_OTGHS0_PHY_DISCHRGVBUS_M  (BIT(4))
#define MP_SYS_USB_OTGHS0_PHY_DISCHRGVBUS_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_DISCHRGVBUS_S  4
/* MP_SYS_USB_OTGHS0_PHY_CHRGVBUS : R/W ;bitpos:[3] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_PHY_CHRGVBUS    (BIT(3))
#define MP_SYS_USB_OTGHS0_PHY_CHRGVBUS_M  (BIT(3))
#define MP_SYS_USB_OTGHS0_PHY_CHRGVBUS_V  0x1
#define MP_SYS_USB_OTGHS0_PHY_CHRGVBUS_S  3
/* MP_SYS_USB_OTGHS0_LS_MODE : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_LS_MODE    (BIT(2))
#define MP_SYS_USB_OTGHS0_LS_MODE_M  (BIT(2))
#define MP_SYS_USB_OTGHS0_LS_MODE_V  0x1
#define MP_SYS_USB_OTGHS0_LS_MODE_S  2
/* MP_SYS_USB_OTGHS0_CORE_SS_SCALEDOWN_MODE : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS0_CORE_SS_SCALEDOWN_MODE    0x00000003
#define MP_SYS_USB_OTGHS0_CORE_SS_SCALEDOWN_MODE_M  ((MP_SYS_USB_OTGHS0_CORE_SS_SCALEDOWN_MODE_V)<<(MP_SYS_USB_OTGHS0_CORE_SS_SCALEDOWN_MODE_S))
#define MP_SYS_USB_OTGHS0_CORE_SS_SCALEDOWN_MODE_V  0x3
#define MP_SYS_USB_OTGHS0_CORE_SS_SCALEDOWN_MODE_S  0

#define MP_SYS_USB_OTGHS1_CTRL_REG          (DR_REG_MP_SYS_BASE + 0xCC)
/* MP_SYS_USB_OTGHS1_PRDYN : RO ;bitpos:[25] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PRDYN    (BIT(25))
#define MP_SYS_USB_OTGHS1_PRDYN_M  (BIT(25))
#define MP_SYS_USB_OTGHS1_PRDYN_V  0x1
#define MP_SYS_USB_OTGHS1_PRDYN_S  25
/* MP_SYS_USB_OTGHS1_PHY_TEST_DONE : RO ;bitpos:[24] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_TEST_DONE    (BIT(24))
#define MP_SYS_USB_OTGHS1_PHY_TEST_DONE_M  (BIT(24))
#define MP_SYS_USB_OTGHS1_PHY_TEST_DONE_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_TEST_DONE_S  24
/* MP_SYS_USB_OTGHS1_MEM_SD : R/W ;bitpos:[23] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_MEM_SD    (BIT(23))
#define MP_SYS_USB_OTGHS1_MEM_SD_M  (BIT(23))
#define MP_SYS_USB_OTGHS1_MEM_SD_V  0x1
#define MP_SYS_USB_OTGHS1_MEM_SD_S  23
/* MP_SYS_USB_OTGHS1_DFIFO_HCLK_FORCE_ON : R/W ;bitpos:[22] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_DFIFO_HCLK_FORCE_ON    (BIT(22))
#define MP_SYS_USB_OTGHS1_DFIFO_HCLK_FORCE_ON_M  (BIT(22))
#define MP_SYS_USB_OTGHS1_DFIFO_HCLK_FORCE_ON_V  0x1
#define MP_SYS_USB_OTGHS1_DFIFO_HCLK_FORCE_ON_S  22
/* MP_SYS_USB_OTGHS1_USB_OTGHS_WAKEUP_CLR : R/W ;bitpos:[21] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_USB_OTGHS_WAKEUP_CLR    (BIT(21))
#define MP_SYS_USB_OTGHS1_USB_OTGHS_WAKEUP_CLR_M  (BIT(21))
#define MP_SYS_USB_OTGHS1_USB_OTGHS_WAKEUP_CLR_V  0x1
#define MP_SYS_USB_OTGHS1_USB_OTGHS_WAKEUP_CLR_S  21
/* MP_SYS_USB_OTGHS1_USB_OTGHS_SUSPEND : R/W ;bitpos:[20] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_USB_OTGHS_SUSPEND    (BIT(20))
#define MP_SYS_USB_OTGHS1_USB_OTGHS_SUSPEND_M  (BIT(20))
#define MP_SYS_USB_OTGHS1_USB_OTGHS_SUSPEND_V  0x1
#define MP_SYS_USB_OTGHS1_USB_OTGHS_SUSPEND_S  20
/* MP_SYS_USB_OTGHS1_PHY_TXBITSTUFF_EN : R/W ;bitpos:[19] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_TXBITSTUFF_EN    (BIT(19))
#define MP_SYS_USB_OTGHS1_PHY_TXBITSTUFF_EN_M  (BIT(19))
#define MP_SYS_USB_OTGHS1_PHY_TXBITSTUFF_EN_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_TXBITSTUFF_EN_S  19
/* MP_SYS_USB_OTGHS1_PHY_SUSPENDM : R/W ;bitpos:[18] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_SUSPENDM    (BIT(18))
#define MP_SYS_USB_OTGHS1_PHY_SUSPENDM_M  (BIT(18))
#define MP_SYS_USB_OTGHS1_PHY_SUSPENDM_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_SUSPENDM_S  18
/* MP_SYS_USB_OTGHS1_PHY_SUSPENDM_FORCE_EN : R/W ;bitpos:[17] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_SUSPENDM_FORCE_EN    (BIT(17))
#define MP_SYS_USB_OTGHS1_PHY_SUSPENDM_FORCE_EN_M  (BIT(17))
#define MP_SYS_USB_OTGHS1_PHY_SUSPENDM_FORCE_EN_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_SUSPENDM_FORCE_EN_S  17
/* MP_SYS_USB_OTGHS1_PHY_SELF_TEST : R/W ;bitpos:[16] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_SELF_TEST    (BIT(16))
#define MP_SYS_USB_OTGHS1_PHY_SELF_TEST_M  (BIT(16))
#define MP_SYS_USB_OTGHS1_PHY_SELF_TEST_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_SELF_TEST_S  16
/* MP_SYS_USB_OTGHS1_PHY_RTC_XPD_USB20PHY : R/W ;bitpos:[15] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_RTC_XPD_USB20PHY    (BIT(15))
#define MP_SYS_USB_OTGHS1_PHY_RTC_XPD_USB20PHY_M  (BIT(15))
#define MP_SYS_USB_OTGHS1_PHY_RTC_XPD_USB20PHY_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_RTC_XPD_USB20PHY_S  15
/* MP_SYS_USB_OTGHS1_PHY_RESET : R/W ;bitpos:[14] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_RESET    (BIT(14))
#define MP_SYS_USB_OTGHS1_PHY_RESET_M  (BIT(14))
#define MP_SYS_USB_OTGHS1_PHY_RESET_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_RESET_S  14
/* MP_SYS_USB_OTGHS1_PHY_RESET_FORCE_EN : R/W ;bitpos:[13] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_RESET_FORCE_EN    (BIT(13))
#define MP_SYS_USB_OTGHS1_PHY_RESET_FORCE_EN_M  (BIT(13))
#define MP_SYS_USB_OTGHS1_PHY_RESET_FORCE_EN_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_RESET_FORCE_EN_S  13
/* MP_SYS_USB_OTGHS1_PHY_REFCLK_MODE : R/W ;bitpos:[12] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_REFCLK_MODE    (BIT(12))
#define MP_SYS_USB_OTGHS1_PHY_REFCLK_MODE_M  (BIT(12))
#define MP_SYS_USB_OTGHS1_PHY_REFCLK_MODE_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_REFCLK_MODE_S  12
/* MP_SYS_USB_OTGHS1_PHY_PLL_FORCE_EN : R/W ;bitpos:[11] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_PLL_FORCE_EN    (BIT(11))
#define MP_SYS_USB_OTGHS1_PHY_PLL_FORCE_EN_M  (BIT(11))
#define MP_SYS_USB_OTGHS1_PHY_PLL_FORCE_EN_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_PLL_FORCE_EN_S  11
/* MP_SYS_USB_OTGHS1_PHY_PLL_EN : R/W ;bitpos:[10] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_PLL_EN    (BIT(10))
#define MP_SYS_USB_OTGHS1_PHY_PLL_EN_M  (BIT(10))
#define MP_SYS_USB_OTGHS1_PHY_PLL_EN_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_PLL_EN_S  10
/* MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM_BYPS : R/W ;bitpos:[9] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM_BYPS    (BIT(9))
#define MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM_BYPS_M  (BIT(9))
#define MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM_BYPS_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM_BYPS_S  9
/* MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM : R/W ;bitpos:[8] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM    (BIT(8))
#define MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM_M  (BIT(8))
#define MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_OTG_SUSPENDM_S  8
/* MP_SYS_USB_OTGHS1_PHY_IDPULLUP : R/W ;bitpos:[7] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_IDPULLUP    (BIT(7))
#define MP_SYS_USB_OTGHS1_PHY_IDPULLUP_M  (BIT(7))
#define MP_SYS_USB_OTGHS1_PHY_IDPULLUP_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_IDPULLUP_S  7
/* MP_SYS_USB_OTGHS1_PHY_DPPULLDOWN : R/W ;bitpos:[6] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_DPPULLDOWN    (BIT(6))
#define MP_SYS_USB_OTGHS1_PHY_DPPULLDOWN_M  (BIT(6))
#define MP_SYS_USB_OTGHS1_PHY_DPPULLDOWN_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_DPPULLDOWN_S  6
/* MP_SYS_USB_OTGHS1_PHY_DMPULLDOWN : R/W ;bitpos:[5] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_DMPULLDOWN    (BIT(5))
#define MP_SYS_USB_OTGHS1_PHY_DMPULLDOWN_M  (BIT(5))
#define MP_SYS_USB_OTGHS1_PHY_DMPULLDOWN_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_DMPULLDOWN_S  5
/* MP_SYS_USB_OTGHS1_PHY_DISCHRGVBUS : R/W ;bitpos:[4] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_DISCHRGVBUS    (BIT(4))
#define MP_SYS_USB_OTGHS1_PHY_DISCHRGVBUS_M  (BIT(4))
#define MP_SYS_USB_OTGHS1_PHY_DISCHRGVBUS_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_DISCHRGVBUS_S  4
/* MP_SYS_USB_OTGHS1_PHY_CHRGVBUS : R/W ;bitpos:[3] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_PHY_CHRGVBUS    (BIT(3))
#define MP_SYS_USB_OTGHS1_PHY_CHRGVBUS_M  (BIT(3))
#define MP_SYS_USB_OTGHS1_PHY_CHRGVBUS_V  0x1
#define MP_SYS_USB_OTGHS1_PHY_CHRGVBUS_S  3
/* MP_SYS_USB_OTGHS1_LS_MODE : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_LS_MODE    (BIT(2))
#define MP_SYS_USB_OTGHS1_LS_MODE_M  (BIT(2))
#define MP_SYS_USB_OTGHS1_LS_MODE_V  0x1
#define MP_SYS_USB_OTGHS1_LS_MODE_S  2
/* MP_SYS_USB_OTGHS1_CORE_SS_SCALEDOWN_MODE : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: reserved.*/
#define MP_SYS_USB_OTGHS1_CORE_SS_SCALEDOWN_MODE    0x00000003
#define MP_SYS_USB_OTGHS1_CORE_SS_SCALEDOWN_MODE_M  ((MP_SYS_USB_OTGHS1_CORE_SS_SCALEDOWN_MODE_V)<<(MP_SYS_USB_OTGHS1_CORE_SS_SCALEDOWN_MODE_S))
#define MP_SYS_USB_OTGHS1_CORE_SS_SCALEDOWN_MODE_V  0x3
#define MP_SYS_USB_OTGHS1_CORE_SS_SCALEDOWN_MODE_S  0

#define MP_SYS_DDRC_CTRL_REG          (DR_REG_MP_SYS_BASE + 0xD0)
/* MP_SYS_DDRPHY_BUFFEREN_CORE : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_DDRPHY_BUFFEREN_CORE    (BIT(0))
#define MP_SYS_DDRPHY_BUFFEREN_CORE_M  (BIT(0))
#define MP_SYS_DDRPHY_BUFFEREN_CORE_V  0x1
#define MP_SYS_DDRPHY_BUFFEREN_CORE_S  0

#define MP_SYS_DDR_PHY_BIST_REG          (DR_REG_MP_SYS_BASE + 0xD4)
/* MP_SYS_DFT_DDRPHY_BIST_ERROR : RO ;bitpos:[4] ;default: 1'd0 ; */
/*description: BIST error status.*/
#define MP_SYS_DFT_DDRPHY_BIST_ERROR    (BIT(4))
#define MP_SYS_DFT_DDRPHY_BIST_ERROR_M  (BIT(4))
#define MP_SYS_DFT_DDRPHY_BIST_ERROR_V  0x1
#define MP_SYS_DFT_DDRPHY_BIST_ERROR_S  4
/* MP_SYS_DFT_DDRPHY_BIST_COMPLETE : RO ;bitpos:[3] ;default: 1'd0 ; */
/*description: BIST complete status.*/
#define MP_SYS_DFT_DDRPHY_BIST_COMPLETE    (BIT(3))
#define MP_SYS_DFT_DDRPHY_BIST_COMPLETE_M  (BIT(3))
#define MP_SYS_DFT_DDRPHY_BIST_COMPLETE_V  0x1
#define MP_SYS_DFT_DDRPHY_BIST_COMPLETE_S  3
/* MP_SYS_DFT_DDRPHY_BIST_START : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: BIST start.*/
#define MP_SYS_DFT_DDRPHY_BIST_START    (BIT(2))
#define MP_SYS_DFT_DDRPHY_BIST_START_M  (BIT(2))
#define MP_SYS_DFT_DDRPHY_BIST_START_V  0x1
#define MP_SYS_DFT_DDRPHY_BIST_START_S  2
/* MP_SYS_DFT_DDRPHY_BIST_MUX : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: Choose BIST mode. 0: CMD/DATA BIST, 1: Register BIST mode..*/
#define MP_SYS_DFT_DDRPHY_BIST_MUX    (BIT(1))
#define MP_SYS_DFT_DDRPHY_BIST_MUX_M  (BIT(1))
#define MP_SYS_DFT_DDRPHY_BIST_MUX_V  0x1
#define MP_SYS_DFT_DDRPHY_BIST_MUX_S  1
/* MP_SYS_DFT_DDRPHY_BIST_MODE : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: Set to enable BIST mode..*/
#define MP_SYS_DFT_DDRPHY_BIST_MODE    (BIT(0))
#define MP_SYS_DFT_DDRPHY_BIST_MODE_M  (BIT(0))
#define MP_SYS_DFT_DDRPHY_BIST_MODE_V  0x1
#define MP_SYS_DFT_DDRPHY_BIST_MODE_S  0

#define MP_SYS_PCIE_PHY_BIST_REG          (DR_REG_MP_SYS_BASE + 0xD8)
/* MP_SYS_DFT_PCIE1_PHY_TESTO : RO ;bitpos:[14] ;default: 1'd0 ; */
/*description: PCIe1 PHY test signal output. ..*/
#define MP_SYS_DFT_PCIE1_PHY_TESTO    (BIT(14))
#define MP_SYS_DFT_PCIE1_PHY_TESTO_M  (BIT(14))
#define MP_SYS_DFT_PCIE1_PHY_TESTO_V  0x1
#define MP_SYS_DFT_PCIE1_PHY_TESTO_S  14
/* MP_SYS_DFT_PCIE1_PHY_BIST_OUT : RO ;bitpos:[13:12] ;default: 2'd0 ; */
/*description: Monitor test probe out. 2'b11: BIST PASS, 2'b10: BIST FAIL.*/
#define MP_SYS_DFT_PCIE1_PHY_BIST_OUT    0x00000003
#define MP_SYS_DFT_PCIE1_PHY_BIST_OUT_M  ((MP_SYS_DFT_PCIE1_PHY_BIST_OUT_V)<<(MP_SYS_DFT_PCIE1_PHY_BIST_OUT_S))
#define MP_SYS_DFT_PCIE1_PHY_BIST_OUT_V  0x3
#define MP_SYS_DFT_PCIE1_PHY_BIST_OUT_S  12
/* MP_SYS_DFT_PCIE1_PHY_BIST_MODE : R/W ;bitpos:[11:8] ;default: 4'd0 ; */
/*description: Set BIST mode.4'h1000: PHY external BIST from TXP/TXN to RXP/RXN, 4'b1001: PHY i
nternal BIST..*/
#define MP_SYS_DFT_PCIE1_PHY_BIST_MODE    0x0000000F
#define MP_SYS_DFT_PCIE1_PHY_BIST_MODE_M  ((MP_SYS_DFT_PCIE1_PHY_BIST_MODE_V)<<(MP_SYS_DFT_PCIE1_PHY_BIST_MODE_S))
#define MP_SYS_DFT_PCIE1_PHY_BIST_MODE_V  0xF
#define MP_SYS_DFT_PCIE1_PHY_BIST_MODE_S  8
/* MP_SYS_DFT_PCIE0_PHY_TESTO : RO ;bitpos:[6] ;default: 1'd0 ; */
/*description: PCIe0 PHY test signal output. ..*/
#define MP_SYS_DFT_PCIE0_PHY_TESTO    (BIT(6))
#define MP_SYS_DFT_PCIE0_PHY_TESTO_M  (BIT(6))
#define MP_SYS_DFT_PCIE0_PHY_TESTO_V  0x1
#define MP_SYS_DFT_PCIE0_PHY_TESTO_S  6
/* MP_SYS_DFT_PCIE0_PHY_BIST_OUT : RO ;bitpos:[5:4] ;default: 2'd0 ; */
/*description: Monitor test probe out. 2'b11: BIST PASS, 2'b10: BIST FAIL.*/
#define MP_SYS_DFT_PCIE0_PHY_BIST_OUT    0x00000003
#define MP_SYS_DFT_PCIE0_PHY_BIST_OUT_M  ((MP_SYS_DFT_PCIE0_PHY_BIST_OUT_V)<<(MP_SYS_DFT_PCIE0_PHY_BIST_OUT_S))
#define MP_SYS_DFT_PCIE0_PHY_BIST_OUT_V  0x3
#define MP_SYS_DFT_PCIE0_PHY_BIST_OUT_S  4
/* MP_SYS_DFT_PCIE0_PHY_BIST_MODE : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: Set BIST mode.4'h1000: PHY external BIST from TXP/TXN to RXP/RXN, 4'b1001: PHY i
nternal BIST..*/
#define MP_SYS_DFT_PCIE0_PHY_BIST_MODE    0x0000000F
#define MP_SYS_DFT_PCIE0_PHY_BIST_MODE_M  ((MP_SYS_DFT_PCIE0_PHY_BIST_MODE_V)<<(MP_SYS_DFT_PCIE0_PHY_BIST_MODE_S))
#define MP_SYS_DFT_PCIE0_PHY_BIST_MODE_V  0xF
#define MP_SYS_DFT_PCIE0_PHY_BIST_MODE_S  0

#define MP_SYS_CPU_INT_FROM_CPU_0_REG          (DR_REG_MP_SYS_BASE + 0xDC)
/* MP_SYS_CPU_INT_FROM_CPU_0 : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: set 1 will triger a interrupt.*/
#define MP_SYS_CPU_INT_FROM_CPU_0    (BIT(0))
#define MP_SYS_CPU_INT_FROM_CPU_0_M  (BIT(0))
#define MP_SYS_CPU_INT_FROM_CPU_0_V  0x1
#define MP_SYS_CPU_INT_FROM_CPU_0_S  0

#define MP_SYS_CPU_INT_FROM_CPU_1_REG          (DR_REG_MP_SYS_BASE + 0xE0)
/* MP_SYS_CPU_INT_FROM_CPU_1 : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: set 1 will triger a interrupt.*/
#define MP_SYS_CPU_INT_FROM_CPU_1    (BIT(0))
#define MP_SYS_CPU_INT_FROM_CPU_1_M  (BIT(0))
#define MP_SYS_CPU_INT_FROM_CPU_1_V  0x1
#define MP_SYS_CPU_INT_FROM_CPU_1_S  0

#define MP_SYS_CPU_CORE_PAD_JDB_PM_REG          (DR_REG_MP_SYS_BASE + 0xE4)
/* MP_SYS_CORE1_PAD_JDB_PM : RO ;bitpos:[3:2] ;default: 2'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_PAD_JDB_PM    0x00000003
#define MP_SYS_CORE1_PAD_JDB_PM_M  ((MP_SYS_CORE1_PAD_JDB_PM_V)<<(MP_SYS_CORE1_PAD_JDB_PM_S))
#define MP_SYS_CORE1_PAD_JDB_PM_V  0x3
#define MP_SYS_CORE1_PAD_JDB_PM_S  2
/* MP_SYS_CORE0_PAD_JDB_PM : RO ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_PAD_JDB_PM    0x00000003
#define MP_SYS_CORE0_PAD_JDB_PM_M  ((MP_SYS_CORE0_PAD_JDB_PM_V)<<(MP_SYS_CORE0_PAD_JDB_PM_S))
#define MP_SYS_CORE0_PAD_JDB_PM_V  0x3
#define MP_SYS_CORE0_PAD_JDB_PM_S  0

#define MP_SYS_CPU_CORE0_PAD_MSTATUS_0_REG          (DR_REG_MP_SYS_BASE + 0xE8)
/* MP_SYS_CORE0_PAD_MSTATUS_0 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_PAD_MSTATUS_0    0xFFFFFFFF
#define MP_SYS_CORE0_PAD_MSTATUS_0_M  ((MP_SYS_CORE0_PAD_MSTATUS_0_V)<<(MP_SYS_CORE0_PAD_MSTATUS_0_S))
#define MP_SYS_CORE0_PAD_MSTATUS_0_V  0xFFFFFFFF
#define MP_SYS_CORE0_PAD_MSTATUS_0_S  0

#define MP_SYS_CPU_CORE0_PAD_MSTATUS_1_REG          (DR_REG_MP_SYS_BASE + 0xEC)
/* MP_SYS_CORE0_PAD_MSTATUS_1 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_PAD_MSTATUS_1    0xFFFFFFFF
#define MP_SYS_CORE0_PAD_MSTATUS_1_M  ((MP_SYS_CORE0_PAD_MSTATUS_1_V)<<(MP_SYS_CORE0_PAD_MSTATUS_1_S))
#define MP_SYS_CORE0_PAD_MSTATUS_1_V  0xFFFFFFFF
#define MP_SYS_CORE0_PAD_MSTATUS_1_S  0

#define MP_SYS_CPU_CORE1_PAD_MSTATUS_0_REG          (DR_REG_MP_SYS_BASE + 0xF0)
/* MP_SYS_CORE1_PAD_MSTATUS_0 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_PAD_MSTATUS_0    0xFFFFFFFF
#define MP_SYS_CORE1_PAD_MSTATUS_0_M  ((MP_SYS_CORE1_PAD_MSTATUS_0_V)<<(MP_SYS_CORE1_PAD_MSTATUS_0_S))
#define MP_SYS_CORE1_PAD_MSTATUS_0_V  0xFFFFFFFF
#define MP_SYS_CORE1_PAD_MSTATUS_0_S  0

#define MP_SYS_CPU_CORE1_PAD_MSTATUS_1_REG          (DR_REG_MP_SYS_BASE + 0xF4)
/* MP_SYS_CORE1_PAD_MSTATUS_1 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_PAD_MSTATUS_1    0xFFFFFFFF
#define MP_SYS_CORE1_PAD_MSTATUS_1_M  ((MP_SYS_CORE1_PAD_MSTATUS_1_V)<<(MP_SYS_CORE1_PAD_MSTATUS_1_S))
#define MP_SYS_CORE1_PAD_MSTATUS_1_V  0xFFFFFFFF
#define MP_SYS_CORE1_PAD_MSTATUS_1_S  0

#define MP_SYS_CPU_CORE0_PAD_RETIRE0_PC_0_REG          (DR_REG_MP_SYS_BASE + 0xF8)
/* MP_SYS_CORE0_PAD_RETIRE0_PC_0 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_PAD_RETIRE0_PC_0    0xFFFFFFFF
#define MP_SYS_CORE0_PAD_RETIRE0_PC_0_M  ((MP_SYS_CORE0_PAD_RETIRE0_PC_0_V)<<(MP_SYS_CORE0_PAD_RETIRE0_PC_0_S))
#define MP_SYS_CORE0_PAD_RETIRE0_PC_0_V  0xFFFFFFFF
#define MP_SYS_CORE0_PAD_RETIRE0_PC_0_S  0

#define MP_SYS_CPU_CORE0_PAD_RETIRE0_PC_1_REG          (DR_REG_MP_SYS_BASE + 0xFC)
/* MP_SYS_CORE0_PAD_RETIRE0_PC_1 : RO ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_PAD_RETIRE0_PC_1    0x000000FF
#define MP_SYS_CORE0_PAD_RETIRE0_PC_1_M  ((MP_SYS_CORE0_PAD_RETIRE0_PC_1_V)<<(MP_SYS_CORE0_PAD_RETIRE0_PC_1_S))
#define MP_SYS_CORE0_PAD_RETIRE0_PC_1_V  0xFF
#define MP_SYS_CORE0_PAD_RETIRE0_PC_1_S  0

#define MP_SYS_CPU_CORE0_PAD_RETIRE1_PC_0_REG          (DR_REG_MP_SYS_BASE + 0x100)
/* MP_SYS_CORE0_PAD_RETIRE1_PC_0 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_PAD_RETIRE1_PC_0    0xFFFFFFFF
#define MP_SYS_CORE0_PAD_RETIRE1_PC_0_M  ((MP_SYS_CORE0_PAD_RETIRE1_PC_0_V)<<(MP_SYS_CORE0_PAD_RETIRE1_PC_0_S))
#define MP_SYS_CORE0_PAD_RETIRE1_PC_0_V  0xFFFFFFFF
#define MP_SYS_CORE0_PAD_RETIRE1_PC_0_S  0

#define MP_SYS_CPU_CORE0_PAD_RETIRE1_PC_1_REG          (DR_REG_MP_SYS_BASE + 0x104)
/* MP_SYS_CORE0_PAD_RETIRE1_PC_1 : RO ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_PAD_RETIRE1_PC_1    0x000000FF
#define MP_SYS_CORE0_PAD_RETIRE1_PC_1_M  ((MP_SYS_CORE0_PAD_RETIRE1_PC_1_V)<<(MP_SYS_CORE0_PAD_RETIRE1_PC_1_S))
#define MP_SYS_CORE0_PAD_RETIRE1_PC_1_V  0xFF
#define MP_SYS_CORE0_PAD_RETIRE1_PC_1_S  0

#define MP_SYS_CPU_CORE0_PAD_RETIRE2_PC_0_REG          (DR_REG_MP_SYS_BASE + 0x108)
/* MP_SYS_CORE0_PAD_RETIRE2_PC_0 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_PAD_RETIRE2_PC_0    0xFFFFFFFF
#define MP_SYS_CORE0_PAD_RETIRE2_PC_0_M  ((MP_SYS_CORE0_PAD_RETIRE2_PC_0_V)<<(MP_SYS_CORE0_PAD_RETIRE2_PC_0_S))
#define MP_SYS_CORE0_PAD_RETIRE2_PC_0_V  0xFFFFFFFF
#define MP_SYS_CORE0_PAD_RETIRE2_PC_0_S  0

#define MP_SYS_CPU_CORE0_PAD_RETIRE2_PC_1_REG          (DR_REG_MP_SYS_BASE + 0x10C)
/* MP_SYS_CORE0_PAD_RETIRE2_PC_1 : RO ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_PAD_RETIRE2_PC_1    0x000000FF
#define MP_SYS_CORE0_PAD_RETIRE2_PC_1_M  ((MP_SYS_CORE0_PAD_RETIRE2_PC_1_V)<<(MP_SYS_CORE0_PAD_RETIRE2_PC_1_S))
#define MP_SYS_CORE0_PAD_RETIRE2_PC_1_V  0xFF
#define MP_SYS_CORE0_PAD_RETIRE2_PC_1_S  0

#define MP_SYS_CPU_CORE1_PAD_RETIRE0_PC_0_REG          (DR_REG_MP_SYS_BASE + 0x110)
/* MP_SYS_CORE1_PAD_RETIRE0_PC_0 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_PAD_RETIRE0_PC_0    0xFFFFFFFF
#define MP_SYS_CORE1_PAD_RETIRE0_PC_0_M  ((MP_SYS_CORE1_PAD_RETIRE0_PC_0_V)<<(MP_SYS_CORE1_PAD_RETIRE0_PC_0_S))
#define MP_SYS_CORE1_PAD_RETIRE0_PC_0_V  0xFFFFFFFF
#define MP_SYS_CORE1_PAD_RETIRE0_PC_0_S  0

#define MP_SYS_CPU_CORE1_PAD_RETIRE0_PC_1_REG          (DR_REG_MP_SYS_BASE + 0x114)
/* MP_SYS_CORE1_PAD_RETIRE0_PC_1 : RO ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_PAD_RETIRE0_PC_1    0x000000FF
#define MP_SYS_CORE1_PAD_RETIRE0_PC_1_M  ((MP_SYS_CORE1_PAD_RETIRE0_PC_1_V)<<(MP_SYS_CORE1_PAD_RETIRE0_PC_1_S))
#define MP_SYS_CORE1_PAD_RETIRE0_PC_1_V  0xFF
#define MP_SYS_CORE1_PAD_RETIRE0_PC_1_S  0

#define MP_SYS_CPU_CORE1_PAD_RETIRE1_PC_0_REG          (DR_REG_MP_SYS_BASE + 0x118)
/* MP_SYS_CORE1_PAD_RETIRE1_PC_0 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_PAD_RETIRE1_PC_0    0xFFFFFFFF
#define MP_SYS_CORE1_PAD_RETIRE1_PC_0_M  ((MP_SYS_CORE1_PAD_RETIRE1_PC_0_V)<<(MP_SYS_CORE1_PAD_RETIRE1_PC_0_S))
#define MP_SYS_CORE1_PAD_RETIRE1_PC_0_V  0xFFFFFFFF
#define MP_SYS_CORE1_PAD_RETIRE1_PC_0_S  0

#define MP_SYS_CPU_CORE1_PAD_RETIRE1_PC_1_REG          (DR_REG_MP_SYS_BASE + 0x11C)
/* MP_SYS_CORE1_PAD_RETIRE1_PC_1 : RO ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_PAD_RETIRE1_PC_1    0x000000FF
#define MP_SYS_CORE1_PAD_RETIRE1_PC_1_M  ((MP_SYS_CORE1_PAD_RETIRE1_PC_1_V)<<(MP_SYS_CORE1_PAD_RETIRE1_PC_1_S))
#define MP_SYS_CORE1_PAD_RETIRE1_PC_1_V  0xFF
#define MP_SYS_CORE1_PAD_RETIRE1_PC_1_S  0

#define MP_SYS_CPU_CORE1_PAD_RETIRE2_PC_0_REG          (DR_REG_MP_SYS_BASE + 0x120)
/* MP_SYS_CORE1_PAD_RETIRE2_PC_0 : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_PAD_RETIRE2_PC_0    0xFFFFFFFF
#define MP_SYS_CORE1_PAD_RETIRE2_PC_0_M  ((MP_SYS_CORE1_PAD_RETIRE2_PC_0_V)<<(MP_SYS_CORE1_PAD_RETIRE2_PC_0_S))
#define MP_SYS_CORE1_PAD_RETIRE2_PC_0_V  0xFFFFFFFF
#define MP_SYS_CORE1_PAD_RETIRE2_PC_0_S  0

#define MP_SYS_CPU_CORE1_PAD_RETIRE2_PC_1_REG          (DR_REG_MP_SYS_BASE + 0x124)
/* MP_SYS_CORE1_PAD_RETIRE2_PC_1 : RO ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_PAD_RETIRE2_PC_1    0x000000FF
#define MP_SYS_CORE1_PAD_RETIRE2_PC_1_M  ((MP_SYS_CORE1_PAD_RETIRE2_PC_1_V)<<(MP_SYS_CORE1_PAD_RETIRE2_PC_1_S))
#define MP_SYS_CORE1_PAD_RETIRE2_PC_1_V  0xFF
#define MP_SYS_CORE1_PAD_RETIRE2_PC_1_S  0

#define MP_SYS_CPU_CORE0_DBG_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x128)
/* MP_SYS_CORE0_DBG_MASK : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_DBG_MASK    (BIT(1))
#define MP_SYS_CORE0_DBG_MASK_M  (BIT(1))
#define MP_SYS_CORE0_DBG_MASK_V  0x1
#define MP_SYS_CORE0_DBG_MASK_S  1
/* MP_SYS_CORE0_DBGRQ_B : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_DBGRQ_B    (BIT(0))
#define MP_SYS_CORE0_DBGRQ_B_M  (BIT(0))
#define MP_SYS_CORE0_DBGRQ_B_V  0x1
#define MP_SYS_CORE0_DBGRQ_B_S  0

#define MP_SYS_CPU_CORE1_DBG_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x12C)
/* MP_SYS_CORE1_DBG_MASK : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_DBG_MASK    (BIT(1))
#define MP_SYS_CORE1_DBG_MASK_M  (BIT(1))
#define MP_SYS_CORE1_DBG_MASK_V  0x1
#define MP_SYS_CORE1_DBG_MASK_S  1
/* MP_SYS_CORE1_DBGRQ_B : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_DBGRQ_B    (BIT(0))
#define MP_SYS_CORE1_DBGRQ_B_M  (BIT(0))
#define MP_SYS_CORE1_DBGRQ_B_V  0x1
#define MP_SYS_CORE1_DBGRQ_B_S  0

#define MP_SYS_PMU_CPU_RST_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x130)
/* MP_SYS_PMU_CPU_RST_CASUE_MASK : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_PMU_CPU_RST_CASUE_MASK    (BIT(0))
#define MP_SYS_PMU_CPU_RST_CASUE_MASK_M  (BIT(0))
#define MP_SYS_PMU_CPU_RST_CASUE_MASK_V  0x1
#define MP_SYS_PMU_CPU_RST_CASUE_MASK_S  0

#define MP_SYS_CPU_CORE0_RESET_FLAG_REG          (DR_REG_MP_SYS_BASE + 0x134)
/* MP_SYS_MP_CORE0_RESET_FLAG : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE0_RESET_FLAG    (BIT(0))
#define MP_SYS_MP_CORE0_RESET_FLAG_M  (BIT(0))
#define MP_SYS_MP_CORE0_RESET_FLAG_V  0x1
#define MP_SYS_MP_CORE0_RESET_FLAG_S  0

#define MP_SYS_CPU_CORE0_RESET_FLAG_CLR_REG          (DR_REG_MP_SYS_BASE + 0x138)
/* MP_SYS_MP_CORE0_RESET_FLAG_CLR : WT ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE0_RESET_FLAG_CLR    (BIT(0))
#define MP_SYS_MP_CORE0_RESET_FLAG_CLR_M  (BIT(0))
#define MP_SYS_MP_CORE0_RESET_FLAG_CLR_V  0x1
#define MP_SYS_MP_CORE0_RESET_FLAG_CLR_S  0

#define MP_SYS_CPU_CORE0_RESET_CAUSE_REG          (DR_REG_MP_SYS_BASE + 0x13C)
/* MP_SYS_MP_CORE0_RESET_CAUSE : RO ;bitpos:[5:0] ;default: 6'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE0_RESET_CAUSE    0x0000003F
#define MP_SYS_MP_CORE0_RESET_CAUSE_M  ((MP_SYS_MP_CORE0_RESET_CAUSE_V)<<(MP_SYS_MP_CORE0_RESET_CAUSE_S))
#define MP_SYS_MP_CORE0_RESET_CAUSE_V  0x3F
#define MP_SYS_MP_CORE0_RESET_CAUSE_S  0

#define MP_SYS_CPU_CORE0_RESET_CAUSE_CLR_REG          (DR_REG_MP_SYS_BASE + 0x140)
/* MP_SYS_MP_CORE0_RESET_CAUSE_CLR : WT ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE0_RESET_CAUSE_CLR    (BIT(0))
#define MP_SYS_MP_CORE0_RESET_CAUSE_CLR_M  (BIT(0))
#define MP_SYS_MP_CORE0_RESET_CAUSE_CLR_V  0x1
#define MP_SYS_MP_CORE0_RESET_CAUSE_CLR_S  0

#define MP_SYS_CPU_CORE1_RESET_FLAG_REG          (DR_REG_MP_SYS_BASE + 0x144)
/* MP_SYS_MP_CORE1_RESET_FLAG : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE1_RESET_FLAG    (BIT(0))
#define MP_SYS_MP_CORE1_RESET_FLAG_M  (BIT(0))
#define MP_SYS_MP_CORE1_RESET_FLAG_V  0x1
#define MP_SYS_MP_CORE1_RESET_FLAG_S  0

#define MP_SYS_CPU_CORE1_RESET_FLAG_CLR_REG          (DR_REG_MP_SYS_BASE + 0x148)
/* MP_SYS_MP_CORE1_RESET_FLAG_CLR : WT ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE1_RESET_FLAG_CLR    (BIT(0))
#define MP_SYS_MP_CORE1_RESET_FLAG_CLR_M  (BIT(0))
#define MP_SYS_MP_CORE1_RESET_FLAG_CLR_V  0x1
#define MP_SYS_MP_CORE1_RESET_FLAG_CLR_S  0

#define MP_SYS_CPU_CORE1_RESET_CAUSE_REG          (DR_REG_MP_SYS_BASE + 0x14C)
/* MP_SYS_MP_CORE1_RESET_CAUSE : RO ;bitpos:[5:0] ;default: 6'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE1_RESET_CAUSE    0x0000003F
#define MP_SYS_MP_CORE1_RESET_CAUSE_M  ((MP_SYS_MP_CORE1_RESET_CAUSE_V)<<(MP_SYS_MP_CORE1_RESET_CAUSE_S))
#define MP_SYS_MP_CORE1_RESET_CAUSE_V  0x3F
#define MP_SYS_MP_CORE1_RESET_CAUSE_S  0

#define MP_SYS_CPU_CORE1_RESET_CAUSE_CLR_REG          (DR_REG_MP_SYS_BASE + 0x150)
/* MP_SYS_MP_CORE1_RESET_CAUSE_CLR : WT ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE1_RESET_CAUSE_CLR    (BIT(0))
#define MP_SYS_MP_CORE1_RESET_CAUSE_CLR_M  (BIT(0))
#define MP_SYS_MP_CORE1_RESET_CAUSE_CLR_V  0x1
#define MP_SYS_MP_CORE1_RESET_CAUSE_CLR_S  0

#define MP_SYS_POR_RST_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x154)
/* MP_SYS_POR_RST_ORI_CNT : RO ;bitpos:[10:3] ;default: 8'd0 ; */
/*description: reserved.*/
#define MP_SYS_POR_RST_ORI_CNT    0x000000FF
#define MP_SYS_POR_RST_ORI_CNT_M  ((MP_SYS_POR_RST_ORI_CNT_V)<<(MP_SYS_POR_RST_ORI_CNT_S))
#define MP_SYS_POR_RST_ORI_CNT_V  0xFF
#define MP_SYS_POR_RST_ORI_CNT_S  3
/* MP_SYS_POR_DIGITAL_CNT : RO ;bitpos:[2:0] ;default: 3'd0 ; */
/*description: reserved.*/
#define MP_SYS_POR_DIGITAL_CNT    0x00000007
#define MP_SYS_POR_DIGITAL_CNT_M  ((MP_SYS_POR_DIGITAL_CNT_V)<<(MP_SYS_POR_DIGITAL_CNT_S))
#define MP_SYS_POR_DIGITAL_CNT_V  0x7
#define MP_SYS_POR_DIGITAL_CNT_S  0

#define MP_SYS_ENABLE_CUS_DEBUG_REG          (DR_REG_MP_SYS_BASE + 0x158)
/* MP_SYS_ENABLE_CUS_DEBUG : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ENABLE_CUS_DEBUG    (BIT(0))
#define MP_SYS_ENABLE_CUS_DEBUG_M  (BIT(0))
#define MP_SYS_ENABLE_CUS_DEBUG_V  0x1
#define MP_SYS_ENABLE_CUS_DEBUG_S  0

#define MP_SYS_OCRAM_AHB_BUFFER_ENABLE_REG          (DR_REG_MP_SYS_BASE + 0x15C)
/* MP_SYS_MP_OCRAM_AHB_WRBUFFER_EN : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_OCRAM_AHB_WRBUFFER_EN    (BIT(1))
#define MP_SYS_MP_OCRAM_AHB_WRBUFFER_EN_M  (BIT(1))
#define MP_SYS_MP_OCRAM_AHB_WRBUFFER_EN_V  0x1
#define MP_SYS_MP_OCRAM_AHB_WRBUFFER_EN_S  1
/* MP_SYS_MP_OCRAM_AHB_RDBUFFER_EN : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_OCRAM_AHB_RDBUFFER_EN    (BIT(0))
#define MP_SYS_MP_OCRAM_AHB_RDBUFFER_EN_M  (BIT(0))
#define MP_SYS_MP_OCRAM_AHB_RDBUFFER_EN_V  0x1
#define MP_SYS_MP_OCRAM_AHB_RDBUFFER_EN_S  0

#define MP_SYS_REG_DATE_REG          (DR_REG_MP_SYS_BASE + 0x160)
/* MP_SYS_DATE : R/W ;bitpos:[31:0] ;default: 32'h20241112 ; */
/*description: reserved.*/
#define MP_SYS_DATE    0xFFFFFFFF
#define MP_SYS_DATE_M  ((MP_SYS_DATE_V)<<(MP_SYS_DATE_S))
#define MP_SYS_DATE_V  0xFFFFFFFF
#define MP_SYS_DATE_S  0

#define MP_SYS_AON_STORE0_REG          (DR_REG_MP_SYS_BASE + 0x164)
/* MP_SYS_AON_SCRATCH0 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH0    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH0_M  ((MP_SYS_AON_SCRATCH0_V)<<(MP_SYS_AON_SCRATCH0_S))
#define MP_SYS_AON_SCRATCH0_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH0_S  0

#define MP_SYS_AON_STORE1_REG          (DR_REG_MP_SYS_BASE + 0x168)
/* MP_SYS_AON_SCRATCH1 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH1    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH1_M  ((MP_SYS_AON_SCRATCH1_V)<<(MP_SYS_AON_SCRATCH1_S))
#define MP_SYS_AON_SCRATCH1_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH1_S  0

#define MP_SYS_AON_STORE2_REG          (DR_REG_MP_SYS_BASE + 0x16C)
/* MP_SYS_AON_SCRATCH2 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH2    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH2_M  ((MP_SYS_AON_SCRATCH2_V)<<(MP_SYS_AON_SCRATCH2_S))
#define MP_SYS_AON_SCRATCH2_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH2_S  0

#define MP_SYS_AON_STORE3_REG          (DR_REG_MP_SYS_BASE + 0x170)
/* MP_SYS_AON_SCRATCH3 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH3    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH3_M  ((MP_SYS_AON_SCRATCH3_V)<<(MP_SYS_AON_SCRATCH3_S))
#define MP_SYS_AON_SCRATCH3_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH3_S  0

#define MP_SYS_AON_STORE4_REG          (DR_REG_MP_SYS_BASE + 0x174)
/* MP_SYS_AON_SCRATCH4 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH4    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH4_M  ((MP_SYS_AON_SCRATCH4_V)<<(MP_SYS_AON_SCRATCH4_S))
#define MP_SYS_AON_SCRATCH4_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH4_S  0

#define MP_SYS_AON_STORE5_REG          (DR_REG_MP_SYS_BASE + 0x178)
/* MP_SYS_AON_SCRATCH5 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH5    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH5_M  ((MP_SYS_AON_SCRATCH5_V)<<(MP_SYS_AON_SCRATCH5_S))
#define MP_SYS_AON_SCRATCH5_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH5_S  0

#define MP_SYS_AON_STORE6_REG          (DR_REG_MP_SYS_BASE + 0x17C)
/* MP_SYS_AON_SCRATCH6 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH6    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH6_M  ((MP_SYS_AON_SCRATCH6_V)<<(MP_SYS_AON_SCRATCH6_S))
#define MP_SYS_AON_SCRATCH6_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH6_S  0

#define MP_SYS_AON_STORE7_REG          (DR_REG_MP_SYS_BASE + 0x180)
/* MP_SYS_AON_SCRATCH7 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH7    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH7_M  ((MP_SYS_AON_SCRATCH7_V)<<(MP_SYS_AON_SCRATCH7_S))
#define MP_SYS_AON_SCRATCH7_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH7_S  0

#define MP_SYS_AON_STORE8_REG          (DR_REG_MP_SYS_BASE + 0x184)
/* MP_SYS_AON_SCRATCH8 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH8    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH8_M  ((MP_SYS_AON_SCRATCH8_V)<<(MP_SYS_AON_SCRATCH8_S))
#define MP_SYS_AON_SCRATCH8_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH8_S  0

#define MP_SYS_AON_STORE9_REG          (DR_REG_MP_SYS_BASE + 0x188)
/* MP_SYS_AON_SCRATCH9 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH9    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH9_M  ((MP_SYS_AON_SCRATCH9_V)<<(MP_SYS_AON_SCRATCH9_S))
#define MP_SYS_AON_SCRATCH9_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH9_S  0

#define MP_SYS_AON_STORE10_REG          (DR_REG_MP_SYS_BASE + 0x18C)
/* MP_SYS_AON_SCRATCH10 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH10    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH10_M  ((MP_SYS_AON_SCRATCH10_V)<<(MP_SYS_AON_SCRATCH10_S))
#define MP_SYS_AON_SCRATCH10_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH10_S  0

#define MP_SYS_AON_STORE11_REG          (DR_REG_MP_SYS_BASE + 0x190)
/* MP_SYS_AON_SCRATCH11 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH11    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH11_M  ((MP_SYS_AON_SCRATCH11_V)<<(MP_SYS_AON_SCRATCH11_S))
#define MP_SYS_AON_SCRATCH11_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH11_S  0

#define MP_SYS_AON_STORE12_REG          (DR_REG_MP_SYS_BASE + 0x194)
/* MP_SYS_AON_SCRATCH12 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH12    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH12_M  ((MP_SYS_AON_SCRATCH12_V)<<(MP_SYS_AON_SCRATCH12_S))
#define MP_SYS_AON_SCRATCH12_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH12_S  0

#define MP_SYS_AON_STORE13_REG          (DR_REG_MP_SYS_BASE + 0x198)
/* MP_SYS_AON_SCRATCH13 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH13    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH13_M  ((MP_SYS_AON_SCRATCH13_V)<<(MP_SYS_AON_SCRATCH13_S))
#define MP_SYS_AON_SCRATCH13_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH13_S  0

#define MP_SYS_AON_STORE14_REG          (DR_REG_MP_SYS_BASE + 0x19C)
/* MP_SYS_AON_SCRATCH14 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH14    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH14_M  ((MP_SYS_AON_SCRATCH14_V)<<(MP_SYS_AON_SCRATCH14_S))
#define MP_SYS_AON_SCRATCH14_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH14_S  0

#define MP_SYS_AON_STORE15_REG          (DR_REG_MP_SYS_BASE + 0x1A0)
/* MP_SYS_AON_SCRATCH15 : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_AON_SCRATCH15    0xFFFFFFFF
#define MP_SYS_AON_SCRATCH15_M  ((MP_SYS_AON_SCRATCH15_V)<<(MP_SYS_AON_SCRATCH15_S))
#define MP_SYS_AON_SCRATCH15_V  0xFFFFFFFF
#define MP_SYS_AON_SCRATCH15_S  0

#define MP_SYS_CPU_CORE0_BOOT_ADDR_SW_REG          (DR_REG_MP_SYS_BASE + 0x1A4)
/* MP_SYS_CPU_CORE0_BOOT_ADDR_SW : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CPU_CORE0_BOOT_ADDR_SW    0xFFFFFFFF
#define MP_SYS_CPU_CORE0_BOOT_ADDR_SW_M  ((MP_SYS_CPU_CORE0_BOOT_ADDR_SW_V)<<(MP_SYS_CPU_CORE0_BOOT_ADDR_SW_S))
#define MP_SYS_CPU_CORE0_BOOT_ADDR_SW_V  0xFFFFFFFF
#define MP_SYS_CPU_CORE0_BOOT_ADDR_SW_S  0

#define MP_SYS_CPU_CORE1_BOOT_ADDR_SW_REG          (DR_REG_MP_SYS_BASE + 0x1A8)
/* MP_SYS_CPU_CORE1_BOOT_ADDR_SW : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_CPU_CORE1_BOOT_ADDR_SW    0xFFFFFFFF
#define MP_SYS_CPU_CORE1_BOOT_ADDR_SW_M  ((MP_SYS_CPU_CORE1_BOOT_ADDR_SW_V)<<(MP_SYS_CPU_CORE1_BOOT_ADDR_SW_S))
#define MP_SYS_CPU_CORE1_BOOT_ADDR_SW_V  0xFFFFFFFF
#define MP_SYS_CPU_CORE1_BOOT_ADDR_SW_S  0

#define MP_SYS_CPU_CORE0_BOOT_ADDR_REG          (DR_REG_MP_SYS_BASE + 0x1AC)
/* MP_SYS_CPU_CORE0_BOOT_ADDR : R/W ;bitpos:[31:0] ;default: 32'h20200000 ; */
/*description: reserved.*/
#define MP_SYS_CPU_CORE0_BOOT_ADDR    0xFFFFFFFF
#define MP_SYS_CPU_CORE0_BOOT_ADDR_M  ((MP_SYS_CPU_CORE0_BOOT_ADDR_V)<<(MP_SYS_CPU_CORE0_BOOT_ADDR_S))
#define MP_SYS_CPU_CORE0_BOOT_ADDR_V  0xFFFFFFFF
#define MP_SYS_CPU_CORE0_BOOT_ADDR_S  0

#define MP_SYS_CPU_CORE1_BOOT_ADDR_REG          (DR_REG_MP_SYS_BASE + 0x1B0)
/* MP_SYS_CPU_CORE1_BOOT_ADDR : R/W ;bitpos:[31:0] ;default: 32'h20200000 ; */
/*description: reserved.*/
#define MP_SYS_CPU_CORE1_BOOT_ADDR    0xFFFFFFFF
#define MP_SYS_CPU_CORE1_BOOT_ADDR_M  ((MP_SYS_CPU_CORE1_BOOT_ADDR_V)<<(MP_SYS_CPU_CORE1_BOOT_ADDR_S))
#define MP_SYS_CPU_CORE1_BOOT_ADDR_V  0xFFFFFFFF
#define MP_SYS_CPU_CORE1_BOOT_ADDR_S  0

#define MP_SYS_RNG_SAMPLE_CNT_REG          (DR_REG_MP_SYS_BASE + 0x1B4)
/* MP_SYS_RNG_SAMPLE_CNT : RO ;bitpos:[31:24] ;default: 8'd0 ; */
/*description: debug rng sample cnt.*/
#define MP_SYS_RNG_SAMPLE_CNT    0x000000FF
#define MP_SYS_RNG_SAMPLE_CNT_M  ((MP_SYS_RNG_SAMPLE_CNT_V)<<(MP_SYS_RNG_SAMPLE_CNT_S))
#define MP_SYS_RNG_SAMPLE_CNT_V  0xFF
#define MP_SYS_RNG_SAMPLE_CNT_S  24
/* MP_SYS_RNG_SAMPLE_ENABLE : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: enable rng sample chain.*/
#define MP_SYS_RNG_SAMPLE_ENABLE    (BIT(0))
#define MP_SYS_RNG_SAMPLE_ENABLE_M  (BIT(0))
#define MP_SYS_RNG_SAMPLE_ENABLE_V  0x1
#define MP_SYS_RNG_SAMPLE_ENABLE_S  0

#define MP_SYS_CPU_CONF_TIMEOUT_INT_RAW_REG          (DR_REG_MP_SYS_BASE + 0x1B8)
/* MP_SYS_CPU_CONF_TIMEOUT_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'd0 ; */
/*description: The raw interrupt status of cpu conf timeout.*/
#define MP_SYS_CPU_CONF_TIMEOUT_INT_RAW    (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_INT_RAW_M  (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_INT_RAW_V  0x1
#define MP_SYS_CPU_CONF_TIMEOUT_INT_RAW_S  0

#define MP_SYS_CPU_CONF_TIMEOUT_INT_ST_REG          (DR_REG_MP_SYS_BASE + 0x1BC)
/* MP_SYS_CPU_CONF_TIMEOUT_INT_ST : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: The masked interrupt status of cpu conf timeout.*/
#define MP_SYS_CPU_CONF_TIMEOUT_INT_ST    (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_INT_ST_M  (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_INT_ST_V  0x1
#define MP_SYS_CPU_CONF_TIMEOUT_INT_ST_S  0

#define MP_SYS_CPU_CONF_TIMEOUT_INT_ENA_REG          (DR_REG_MP_SYS_BASE + 0x1C0)
/* MP_SYS_CPU_CONF_TIMEOUT_INT_ENA : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: Write 1 to enable cpu conf timeout int.*/
#define MP_SYS_CPU_CONF_TIMEOUT_INT_ENA    (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_INT_ENA_M  (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_INT_ENA_V  0x1
#define MP_SYS_CPU_CONF_TIMEOUT_INT_ENA_S  0

#define MP_SYS_CPU_CONF_TIMEOUT_INT_CLR_REG          (DR_REG_MP_SYS_BASE + 0x1C4)
/* MP_SYS_CPU_CONF_TIMEOUT_INT_CLR : WT ;bitpos:[0] ;default: 1'd0 ; */
/*description: Write 1 to clear cpu conf timeout int.*/
#define MP_SYS_CPU_CONF_TIMEOUT_INT_CLR    (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_INT_CLR_M  (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_INT_CLR_V  0x1
#define MP_SYS_CPU_CONF_TIMEOUT_INT_CLR_S  0

#define MP_SYS_CPU_CONF_ERROR_DIS_REG          (DR_REG_MP_SYS_BASE + 0x1C8)
/* MP_SYS_CPU_CONF_ERR_DIS : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CPU_CONF_ERR_DIS    (BIT(0))
#define MP_SYS_CPU_CONF_ERR_DIS_M  (BIT(0))
#define MP_SYS_CPU_CONF_ERR_DIS_V  0x1
#define MP_SYS_CPU_CONF_ERR_DIS_S  0

#define MP_SYS_CPU_CONF_TIMEOUT_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x1CC)
/* MP_SYS_CPU_CONF_TIMEOUT_THRES : R/W ;bitpos:[16:1] ;default: 16'hffff ; */
/*description: Set apb timeout threshold.*/
#define MP_SYS_CPU_CONF_TIMEOUT_THRES    0x0000FFFF
#define MP_SYS_CPU_CONF_TIMEOUT_THRES_M  ((MP_SYS_CPU_CONF_TIMEOUT_THRES_V)<<(MP_SYS_CPU_CONF_TIMEOUT_THRES_S))
#define MP_SYS_CPU_CONF_TIMEOUT_THRES_V  0xFFFF
#define MP_SYS_CPU_CONF_TIMEOUT_THRES_S  1
/* MP_SYS_CPU_CONF_TIMEOUT_EN : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: Set to enable apb timeout function.*/
#define MP_SYS_CPU_CONF_TIMEOUT_EN    (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_EN_M  (BIT(0))
#define MP_SYS_CPU_CONF_TIMEOUT_EN_V  0x1
#define MP_SYS_CPU_CONF_TIMEOUT_EN_S  0

#define MP_SYS_USB_COM_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x1D0)
/* MP_SYS_USB_COM_SEL : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_USB_COM_SEL    (BIT(0))
#define MP_SYS_USB_COM_SEL_M  (BIT(0))
#define MP_SYS_USB_COM_SEL_V  0x1
#define MP_SYS_USB_COM_SEL_S  0

#define MP_SYS_TEA_SMB2DDR_SEL_REG          (DR_REG_MP_SYS_BASE + 0x1D4)
/* MP_SYS_TEA_SMB2DDR_SEL : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_TEA_SMB2DDR_SEL    (BIT(0))
#define MP_SYS_TEA_SMB2DDR_SEL_M  (BIT(0))
#define MP_SYS_TEA_SMB2DDR_SEL_V  0x1
#define MP_SYS_TEA_SMB2DDR_SEL_S  0

#define MP_SYS_ANA_SDIO_PLL_PHASE0_REG          (DR_REG_MP_SYS_BASE + 0x1D8)
/* MP_SYS_ANA_SDIO_PLL_PHASE0 : R/W ;bitpos:[5:0] ;default: 6'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SDIO_PLL_PHASE0    0x0000003F
#define MP_SYS_ANA_SDIO_PLL_PHASE0_M  ((MP_SYS_ANA_SDIO_PLL_PHASE0_V)<<(MP_SYS_ANA_SDIO_PLL_PHASE0_S))
#define MP_SYS_ANA_SDIO_PLL_PHASE0_V  0x3F
#define MP_SYS_ANA_SDIO_PLL_PHASE0_S  0

#define MP_SYS_ANA_SDIO_PLL_PHASE1_REG          (DR_REG_MP_SYS_BASE + 0x1DC)
/* MP_SYS_ANA_SDIO_PLL_PHASE1 : R/W ;bitpos:[5:0] ;default: 6'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SDIO_PLL_PHASE1    0x0000003F
#define MP_SYS_ANA_SDIO_PLL_PHASE1_M  ((MP_SYS_ANA_SDIO_PLL_PHASE1_V)<<(MP_SYS_ANA_SDIO_PLL_PHASE1_S))
#define MP_SYS_ANA_SDIO_PLL_PHASE1_V  0x3F
#define MP_SYS_ANA_SDIO_PLL_PHASE1_S  0

#define MP_SYS_ANA_SDIO_PLL_PHASE2_REG          (DR_REG_MP_SYS_BASE + 0x1E0)
/* MP_SYS_ANA_SDIO_PLL_PHASE2 : R/W ;bitpos:[5:0] ;default: 6'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SDIO_PLL_PHASE2    0x0000003F
#define MP_SYS_ANA_SDIO_PLL_PHASE2_M  ((MP_SYS_ANA_SDIO_PLL_PHASE2_V)<<(MP_SYS_ANA_SDIO_PLL_PHASE2_S))
#define MP_SYS_ANA_SDIO_PLL_PHASE2_V  0x3F
#define MP_SYS_ANA_SDIO_PLL_PHASE2_S  0

#define MP_SYS_XTAL32K_REG          (DR_REG_MP_SYS_BASE + 0x1E4)
/* MP_SYS_DGM_XTAL32K : R/W ;bitpos:[6:4] ;default: 3'd0 ; */
/*description: reserved.*/
#define MP_SYS_DGM_XTAL32K    0x00000007
#define MP_SYS_DGM_XTAL32K_M  ((MP_SYS_DGM_XTAL32K_V)<<(MP_SYS_DGM_XTAL32K_S))
#define MP_SYS_DGM_XTAL32K_V  0x7
#define MP_SYS_DGM_XTAL32K_S  4
/* MP_SYS_DCUR_XTAL32K : R/W ;bitpos:[3:1] ;default: 3'd0 ; */
/*description: reserved.*/
#define MP_SYS_DCUR_XTAL32K    0x00000007
#define MP_SYS_DCUR_XTAL32K_M  ((MP_SYS_DCUR_XTAL32K_V)<<(MP_SYS_DCUR_XTAL32K_S))
#define MP_SYS_DCUR_XTAL32K_V  0x7
#define MP_SYS_DCUR_XTAL32K_S  1
/* MP_SYS_ENB_XTAL32K : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_ENB_XTAL32K    (BIT(0))
#define MP_SYS_ENB_XTAL32K_M  (BIT(0))
#define MP_SYS_ENB_XTAL32K_V  0x1
#define MP_SYS_ENB_XTAL32K_S  0

#define MP_SYS_RTC_EN_AMUX_REG          (DR_REG_MP_SYS_BASE + 0x1E8)
/* MP_SYS_RTC_EN_AMUX : R/W ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: reserved.*/
#define MP_SYS_RTC_EN_AMUX    0x00000003
#define MP_SYS_RTC_EN_AMUX_M  ((MP_SYS_RTC_EN_AMUX_V)<<(MP_SYS_RTC_EN_AMUX_S))
#define MP_SYS_RTC_EN_AMUX_V  0x3
#define MP_SYS_RTC_EN_AMUX_S  0

#define MP_SYS_MEM_CLK_FORCE_ON_REG          (DR_REG_MP_SYS_BASE + 0x200)
/* MP_SYS_SWITCH_MEM_CLK_FORCE_ON : R/W ;bitpos:[5] ;default: 1'd0 ; */
/*description: Set this bit to force on mem clk in switch.*/
#define MP_SYS_SWITCH_MEM_CLK_FORCE_ON    (BIT(5))
#define MP_SYS_SWITCH_MEM_CLK_FORCE_ON_M  (BIT(5))
#define MP_SYS_SWITCH_MEM_CLK_FORCE_ON_V  0x1
#define MP_SYS_SWITCH_MEM_CLK_FORCE_ON_S  5
/* MP_SYS_RMT_MEM_CLK_FORCE_ON : R/W ;bitpos:[4] ;default: 1'd0 ; */
/*description: Set this bit to force on mem clk in rmt.*/
#define MP_SYS_RMT_MEM_CLK_FORCE_ON    (BIT(4))
#define MP_SYS_RMT_MEM_CLK_FORCE_ON_M  (BIT(4))
#define MP_SYS_RMT_MEM_CLK_FORCE_ON_V  0x1
#define MP_SYS_RMT_MEM_CLK_FORCE_ON_S  4
/* MP_SYS_GDMA_MEM_CLK_FORCE_ON : R/W ;bitpos:[3] ;default: 1'd0 ; */
/*description: Set this bit to force on mem clk in gdma.*/
#define MP_SYS_GDMA_MEM_CLK_FORCE_ON    (BIT(3))
#define MP_SYS_GDMA_MEM_CLK_FORCE_ON_M  (BIT(3))
#define MP_SYS_GDMA_MEM_CLK_FORCE_ON_V  0x1
#define MP_SYS_GDMA_MEM_CLK_FORCE_ON_S  3
/* MP_SYS_VIDEO_ENC_CORE_MEM_CLK_FORCE_ON : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: Set this bit to force on mem clk in video enc core.*/
#define MP_SYS_VIDEO_ENC_CORE_MEM_CLK_FORCE_ON    (BIT(2))
#define MP_SYS_VIDEO_ENC_CORE_MEM_CLK_FORCE_ON_M  (BIT(2))
#define MP_SYS_VIDEO_ENC_CORE_MEM_CLK_FORCE_ON_V  0x1
#define MP_SYS_VIDEO_ENC_CORE_MEM_CLK_FORCE_ON_S  2
/* MP_SYS_VIDEO_ENC_DMA_MEM_CLK_FORCE_ON : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: Set this bit to force on mem clk in video enc dma.*/
#define MP_SYS_VIDEO_ENC_DMA_MEM_CLK_FORCE_ON    (BIT(1))
#define MP_SYS_VIDEO_ENC_DMA_MEM_CLK_FORCE_ON_M  (BIT(1))
#define MP_SYS_VIDEO_ENC_DMA_MEM_CLK_FORCE_ON_V  0x1
#define MP_SYS_VIDEO_ENC_DMA_MEM_CLK_FORCE_ON_S  1
/* MP_SYS_VIDEO_ENC_VPPA_MEM_CLK_FORCE_ON : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: Set this bit to force on mem clk in video enc vppa.*/
#define MP_SYS_VIDEO_ENC_VPPA_MEM_CLK_FORCE_ON    (BIT(0))
#define MP_SYS_VIDEO_ENC_VPPA_MEM_CLK_FORCE_ON_M  (BIT(0))
#define MP_SYS_VIDEO_ENC_VPPA_MEM_CLK_FORCE_ON_V  0x1
#define MP_SYS_VIDEO_ENC_VPPA_MEM_CLK_FORCE_ON_S  0

#define MP_SYS_GDMA_MEM_PD_REG          (DR_REG_MP_SYS_BASE + 0x300)
/* MP_SYS_GDMA_MEM_PD : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: Set this bit to power down gdma internal memory..*/
#define MP_SYS_GDMA_MEM_PD    (BIT(0))
#define MP_SYS_GDMA_MEM_PD_M  (BIT(0))
#define MP_SYS_GDMA_MEM_PD_V  0x1
#define MP_SYS_GDMA_MEM_PD_S  0

#define MP_SYS_UART_PD_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x304)
/* MP_SYS_HP_UART_MEM_FORCE_PU : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: Set this bit to force power up hp uart internal memory.*/
#define MP_SYS_HP_UART_MEM_FORCE_PU    (BIT(1))
#define MP_SYS_HP_UART_MEM_FORCE_PU_M  (BIT(1))
#define MP_SYS_HP_UART_MEM_FORCE_PU_V  0x1
#define MP_SYS_HP_UART_MEM_FORCE_PU_S  1
/* MP_SYS_HP_UART_MEM_FORCE_PD : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: Set this bit to power down hp uart internal memory..*/
#define MP_SYS_HP_UART_MEM_FORCE_PD    (BIT(0))
#define MP_SYS_HP_UART_MEM_FORCE_PD_M  (BIT(0))
#define MP_SYS_HP_UART_MEM_FORCE_PD_V  0x1
#define MP_SYS_HP_UART_MEM_FORCE_PD_S  0

#define MP_SYS_SYS_PD_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x308)
/* MP_SYS_SDMMC1_MEM_SD : R/W ;bitpos:[21] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_SDMMC1_MEM_SD    (BIT(21))
#define MP_SYS_SDMMC1_MEM_SD_M  (BIT(21))
#define MP_SYS_SDMMC1_MEM_SD_V  0x1
#define MP_SYS_SDMMC1_MEM_SD_S  21
/* MP_SYS_SDMMC0_MEM_SD : R/W ;bitpos:[20] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_SDMMC0_MEM_SD    (BIT(20))
#define MP_SYS_SDMMC0_MEM_SD_M  (BIT(20))
#define MP_SYS_SDMMC0_MEM_SD_V  0x1
#define MP_SYS_SDMMC0_MEM_SD_S  20
/* MP_SYS_CORE_TOP_SRAM_MEM_PD : R/W ;bitpos:[19] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE_TOP_SRAM_MEM_PD    (BIT(19))
#define MP_SYS_CORE_TOP_SRAM_MEM_PD_M  (BIT(19))
#define MP_SYS_CORE_TOP_SRAM_MEM_PD_V  0x1
#define MP_SYS_CORE_TOP_SRAM_MEM_PD_S  19
/* MP_SYS_CORE_TOP_RF_MEM_PD : R/W ;bitpos:[18] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE_TOP_RF_MEM_PD    (BIT(18))
#define MP_SYS_CORE_TOP_RF_MEM_PD_M  (BIT(18))
#define MP_SYS_CORE_TOP_RF_MEM_PD_V  0x1
#define MP_SYS_CORE_TOP_RF_MEM_PD_S  18
/* MP_SYS_CORE1_SRAM_MEM_PD : R/W ;bitpos:[17] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_SRAM_MEM_PD    (BIT(17))
#define MP_SYS_CORE1_SRAM_MEM_PD_M  (BIT(17))
#define MP_SYS_CORE1_SRAM_MEM_PD_V  0x1
#define MP_SYS_CORE1_SRAM_MEM_PD_S  17
/* MP_SYS_CORE1_RF_MEM_PD : R/W ;bitpos:[16] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE1_RF_MEM_PD    (BIT(16))
#define MP_SYS_CORE1_RF_MEM_PD_M  (BIT(16))
#define MP_SYS_CORE1_RF_MEM_PD_V  0x1
#define MP_SYS_CORE1_RF_MEM_PD_S  16
/* MP_SYS_CORE0_SRAM_MEM_PD : R/W ;bitpos:[15] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_SRAM_MEM_PD    (BIT(15))
#define MP_SYS_CORE0_SRAM_MEM_PD_M  (BIT(15))
#define MP_SYS_CORE0_SRAM_MEM_PD_V  0x1
#define MP_SYS_CORE0_SRAM_MEM_PD_S  15
/* MP_SYS_CORE0_RF_MEM_PD : R/W ;bitpos:[14] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CORE0_RF_MEM_PD    (BIT(14))
#define MP_SYS_CORE0_RF_MEM_PD_M  (BIT(14))
#define MP_SYS_CORE0_RF_MEM_PD_V  0x1
#define MP_SYS_CORE0_RF_MEM_PD_S  14
/* MP_SYS_MP_MEM_SD : R/W ;bitpos:[13] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_MP_MEM_SD    (BIT(13))
#define MP_SYS_MP_MEM_SD_M  (BIT(13))
#define MP_SYS_MP_MEM_SD_V  0x1
#define MP_SYS_MP_MEM_SD_S  13
/* MP_SYS_SMALL_SYS_MEM_SD : R/W ;bitpos:[12] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_SMALL_SYS_MEM_SD    (BIT(12))
#define MP_SYS_SMALL_SYS_MEM_SD_M  (BIT(12))
#define MP_SYS_SMALL_SYS_MEM_SD_V  0x1
#define MP_SYS_SMALL_SYS_MEM_SD_S  12
/* MP_SYS_PCIE1_MEM_SD1 : R/W ;bitpos:[11] ;default: 1'd1 ; */
/*description: Set this bit to force power down pcie1 group1 internal memory..*/
#define MP_SYS_PCIE1_MEM_SD1    (BIT(11))
#define MP_SYS_PCIE1_MEM_SD1_M  (BIT(11))
#define MP_SYS_PCIE1_MEM_SD1_V  0x1
#define MP_SYS_PCIE1_MEM_SD1_S  11
/* MP_SYS_PCIE1_MEM_SD0 : R/W ;bitpos:[10] ;default: 1'd1 ; */
/*description: Set this bit to force power down pcie1 group0 internal memory..*/
#define MP_SYS_PCIE1_MEM_SD0    (BIT(10))
#define MP_SYS_PCIE1_MEM_SD0_M  (BIT(10))
#define MP_SYS_PCIE1_MEM_SD0_V  0x1
#define MP_SYS_PCIE1_MEM_SD0_S  10
/* MP_SYS_PCIE0_MEM_SD1 : R/W ;bitpos:[9] ;default: 1'd1 ; */
/*description: Set this bit to force power down pcie0 group1 internal memory..*/
#define MP_SYS_PCIE0_MEM_SD1    (BIT(9))
#define MP_SYS_PCIE0_MEM_SD1_M  (BIT(9))
#define MP_SYS_PCIE0_MEM_SD1_V  0x1
#define MP_SYS_PCIE0_MEM_SD1_S  9
/* MP_SYS_PCIE0_MEM_SD0 : R/W ;bitpos:[8] ;default: 1'd1 ; */
/*description: Set this bit to force power down pcie0 group0 internal memory..*/
#define MP_SYS_PCIE0_MEM_SD0    (BIT(8))
#define MP_SYS_PCIE0_MEM_SD0_M  (BIT(8))
#define MP_SYS_PCIE0_MEM_SD0_V  0x1
#define MP_SYS_PCIE0_MEM_SD0_S  8
/* MP_SYS_SWITCH_MEM_SD1 : R/W ;bitpos:[7] ;default: 1'd1 ; */
/*description: Set this bit to force power down usb_serial_jtag internal memory.*/
#define MP_SYS_SWITCH_MEM_SD1    (BIT(7))
#define MP_SYS_SWITCH_MEM_SD1_M  (BIT(7))
#define MP_SYS_SWITCH_MEM_SD1_V  0x1
#define MP_SYS_SWITCH_MEM_SD1_S  7
/* MP_SYS_SWITCH_MEM_SD0 : R/W ;bitpos:[6] ;default: 1'd1 ; */
/*description: Set this bit to force power down usb_serial_jtag internal memory.*/
#define MP_SYS_SWITCH_MEM_SD0    (BIT(6))
#define MP_SYS_SWITCH_MEM_SD0_M  (BIT(6))
#define MP_SYS_SWITCH_MEM_SD0_V  0x1
#define MP_SYS_SWITCH_MEM_SD0_S  6
/* MP_SYS_USB_SERIAL_JTAG_MEM_SD : R/W ;bitpos:[5] ;default: 1'd1 ; */
/*description: Set this bit to force power down usb_serial_jtag internal memory.*/
#define MP_SYS_USB_SERIAL_JTAG_MEM_SD    (BIT(5))
#define MP_SYS_USB_SERIAL_JTAG_MEM_SD_M  (BIT(5))
#define MP_SYS_USB_SERIAL_JTAG_MEM_SD_V  0x1
#define MP_SYS_USB_SERIAL_JTAG_MEM_SD_S  5
/* MP_SYS_RMT_MEM_SD : R/W ;bitpos:[4] ;default: 1'd1 ; */
/*description: Set this bit to force power down rmt internal memory..*/
#define MP_SYS_RMT_MEM_SD    (BIT(4))
#define MP_SYS_RMT_MEM_SD_M  (BIT(4))
#define MP_SYS_RMT_MEM_SD_V  0x1
#define MP_SYS_RMT_MEM_SD_S  4
/* MP_SYS_LEDC1_MEM_SD : R/W ;bitpos:[3] ;default: 1'd1 ; */
/*description: Set this bit to force power down ledc1 internal memory..*/
#define MP_SYS_LEDC1_MEM_SD    (BIT(3))
#define MP_SYS_LEDC1_MEM_SD_M  (BIT(3))
#define MP_SYS_LEDC1_MEM_SD_V  0x1
#define MP_SYS_LEDC1_MEM_SD_S  3
/* MP_SYS_LEDC0_MEM_SD : R/W ;bitpos:[2] ;default: 1'd1 ; */
/*description: Set this bit to force power down ledc0 internal memory..*/
#define MP_SYS_LEDC0_MEM_SD    (BIT(2))
#define MP_SYS_LEDC0_MEM_SD_M  (BIT(2))
#define MP_SYS_LEDC0_MEM_SD_V  0x1
#define MP_SYS_LEDC0_MEM_SD_S  2

#define MP_SYS_VPU_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x30C)
/* MP_SYS_VIDEO_ENC_CORE5_MEM_SD : R/W ;bitpos:[11] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_VIDEO_ENC_CORE5_MEM_SD    (BIT(11))
#define MP_SYS_VIDEO_ENC_CORE5_MEM_SD_M  (BIT(11))
#define MP_SYS_VIDEO_ENC_CORE5_MEM_SD_V  0x1
#define MP_SYS_VIDEO_ENC_CORE5_MEM_SD_S  11
/* MP_SYS_VIDEO_ENC_CORE4_MEM_SD : R/W ;bitpos:[10] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_VIDEO_ENC_CORE4_MEM_SD    (BIT(10))
#define MP_SYS_VIDEO_ENC_CORE4_MEM_SD_M  (BIT(10))
#define MP_SYS_VIDEO_ENC_CORE4_MEM_SD_V  0x1
#define MP_SYS_VIDEO_ENC_CORE4_MEM_SD_S  10
/* MP_SYS_VIDEO_ENC_CORE3_MEM_SD : R/W ;bitpos:[9] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_VIDEO_ENC_CORE3_MEM_SD    (BIT(9))
#define MP_SYS_VIDEO_ENC_CORE3_MEM_SD_M  (BIT(9))
#define MP_SYS_VIDEO_ENC_CORE3_MEM_SD_V  0x1
#define MP_SYS_VIDEO_ENC_CORE3_MEM_SD_S  9
/* MP_SYS_VIDEO_ENC_CORE2_MEM_SD : R/W ;bitpos:[8] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_VIDEO_ENC_CORE2_MEM_SD    (BIT(8))
#define MP_SYS_VIDEO_ENC_CORE2_MEM_SD_M  (BIT(8))
#define MP_SYS_VIDEO_ENC_CORE2_MEM_SD_V  0x1
#define MP_SYS_VIDEO_ENC_CORE2_MEM_SD_S  8
/* MP_SYS_VIDEO_ENC_CORE1_MEM_SD : R/W ;bitpos:[7] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_VIDEO_ENC_CORE1_MEM_SD    (BIT(7))
#define MP_SYS_VIDEO_ENC_CORE1_MEM_SD_M  (BIT(7))
#define MP_SYS_VIDEO_ENC_CORE1_MEM_SD_V  0x1
#define MP_SYS_VIDEO_ENC_CORE1_MEM_SD_S  7
/* MP_SYS_VIDEO_ENC_CORE0_MEM_SD : R/W ;bitpos:[6] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_VIDEO_ENC_CORE0_MEM_SD    (BIT(6))
#define MP_SYS_VIDEO_ENC_CORE0_MEM_SD_M  (BIT(6))
#define MP_SYS_VIDEO_ENC_CORE0_MEM_SD_V  0x1
#define MP_SYS_VIDEO_ENC_CORE0_MEM_SD_S  6
/* MP_SYS_VIDEO_ENC_VPPA_MEM_SD : R/W ;bitpos:[5] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_VIDEO_ENC_VPPA_MEM_SD    (BIT(5))
#define MP_SYS_VIDEO_ENC_VPPA_MEM_SD_M  (BIT(5))
#define MP_SYS_VIDEO_ENC_VPPA_MEM_SD_V  0x1
#define MP_SYS_VIDEO_ENC_VPPA_MEM_SD_S  5
/* MP_SYS_VIDEO_ENC_DMA_MEM_SD : R/W ;bitpos:[4] ;default: 1'd1 ; */
/*description: Set this bit to power down dma2d internal memory..*/
#define MP_SYS_VIDEO_ENC_DMA_MEM_SD    (BIT(4))
#define MP_SYS_VIDEO_ENC_DMA_MEM_SD_M  (BIT(4))
#define MP_SYS_VIDEO_ENC_DMA_MEM_SD_V  0x1
#define MP_SYS_VIDEO_ENC_DMA_MEM_SD_S  4
/* MP_SYS_DMA2D_MEM_PD : R/W ;bitpos:[3] ;default: 1'd1 ; */
/*description: Set this bit to power down dma2d internal memory..*/
#define MP_SYS_DMA2D_MEM_PD    (BIT(3))
#define MP_SYS_DMA2D_MEM_PD_M  (BIT(3))
#define MP_SYS_DMA2D_MEM_PD_V  0x1
#define MP_SYS_DMA2D_MEM_PD_S  3
/* MP_SYS_JPEG_MEM_PD : R/W ;bitpos:[2] ;default: 1'd1 ; */
/*description: Set this bit to power down jpeg internal memory..*/
#define MP_SYS_JPEG_MEM_PD    (BIT(2))
#define MP_SYS_JPEG_MEM_PD_M  (BIT(2))
#define MP_SYS_JPEG_MEM_PD_V  0x1
#define MP_SYS_JPEG_MEM_PD_S  2
/* MP_SYS_PPA_SR_MEM_PD : R/W ;bitpos:[1] ;default: 1'd1 ; */
/*description: Set this bit to power down ppa sr internal memory..*/
#define MP_SYS_PPA_SR_MEM_PD    (BIT(1))
#define MP_SYS_PPA_SR_MEM_PD_M  (BIT(1))
#define MP_SYS_PPA_SR_MEM_PD_V  0x1
#define MP_SYS_PPA_SR_MEM_PD_S  1
/* MP_SYS_PPA_BLEND_MEM_PD : R/W ;bitpos:[0] ;default: 1'd1 ; */
/*description: Set this bit to power down ppa blend internal memory..*/
#define MP_SYS_PPA_BLEND_MEM_PD    (BIT(0))
#define MP_SYS_PPA_BLEND_MEM_PD_M  (BIT(0))
#define MP_SYS_PPA_BLEND_MEM_PD_V  0x1
#define MP_SYS_PPA_BLEND_MEM_PD_S  0

#define MP_SYS_PRDYN_ST_REG          (DR_REG_MP_SYS_BASE + 0x310)
/* MP_SYS_VIDEO_ENC_CORE5_MEM_PRDYN : RO ;bitpos:[19] ;default: 1'd0 ; */
/*description: record memory power status.*/
#define MP_SYS_VIDEO_ENC_CORE5_MEM_PRDYN    (BIT(19))
#define MP_SYS_VIDEO_ENC_CORE5_MEM_PRDYN_M  (BIT(19))
#define MP_SYS_VIDEO_ENC_CORE5_MEM_PRDYN_V  0x1
#define MP_SYS_VIDEO_ENC_CORE5_MEM_PRDYN_S  19
/* MP_SYS_VIDEO_ENC_CORE4_MEM_PRDYN : RO ;bitpos:[18] ;default: 1'd0 ; */
/*description: record memory power status.*/
#define MP_SYS_VIDEO_ENC_CORE4_MEM_PRDYN    (BIT(18))
#define MP_SYS_VIDEO_ENC_CORE4_MEM_PRDYN_M  (BIT(18))
#define MP_SYS_VIDEO_ENC_CORE4_MEM_PRDYN_V  0x1
#define MP_SYS_VIDEO_ENC_CORE4_MEM_PRDYN_S  18
/* MP_SYS_VIDEO_ENC_CORE3_MEM_PRDYN : RO ;bitpos:[17] ;default: 1'd0 ; */
/*description: record memory power status.*/
#define MP_SYS_VIDEO_ENC_CORE3_MEM_PRDYN    (BIT(17))
#define MP_SYS_VIDEO_ENC_CORE3_MEM_PRDYN_M  (BIT(17))
#define MP_SYS_VIDEO_ENC_CORE3_MEM_PRDYN_V  0x1
#define MP_SYS_VIDEO_ENC_CORE3_MEM_PRDYN_S  17
/* MP_SYS_VIDEO_ENC_CORE2_MEM_PRDYN : RO ;bitpos:[16] ;default: 1'd0 ; */
/*description: record memory power status.*/
#define MP_SYS_VIDEO_ENC_CORE2_MEM_PRDYN    (BIT(16))
#define MP_SYS_VIDEO_ENC_CORE2_MEM_PRDYN_M  (BIT(16))
#define MP_SYS_VIDEO_ENC_CORE2_MEM_PRDYN_V  0x1
#define MP_SYS_VIDEO_ENC_CORE2_MEM_PRDYN_S  16
/* MP_SYS_VIDEO_ENC_CORE1_MEM_PRDYN : RO ;bitpos:[15] ;default: 1'd0 ; */
/*description: record memory power status.*/
#define MP_SYS_VIDEO_ENC_CORE1_MEM_PRDYN    (BIT(15))
#define MP_SYS_VIDEO_ENC_CORE1_MEM_PRDYN_M  (BIT(15))
#define MP_SYS_VIDEO_ENC_CORE1_MEM_PRDYN_V  0x1
#define MP_SYS_VIDEO_ENC_CORE1_MEM_PRDYN_S  15
/* MP_SYS_VIDEO_ENC_CORE0_MEM_PRDYN : RO ;bitpos:[14] ;default: 1'd0 ; */
/*description: record memory power status.*/
#define MP_SYS_VIDEO_ENC_CORE0_MEM_PRDYN    (BIT(14))
#define MP_SYS_VIDEO_ENC_CORE0_MEM_PRDYN_M  (BIT(14))
#define MP_SYS_VIDEO_ENC_CORE0_MEM_PRDYN_V  0x1
#define MP_SYS_VIDEO_ENC_CORE0_MEM_PRDYN_S  14
/* MP_SYS_USB_SERIAL_JTAG_PRDYN : RO ;bitpos:[13] ;default: 1'd0 ; */
/*description: record memory power status.*/
#define MP_SYS_USB_SERIAL_JTAG_PRDYN    (BIT(13))
#define MP_SYS_USB_SERIAL_JTAG_PRDYN_M  (BIT(13))
#define MP_SYS_USB_SERIAL_JTAG_PRDYN_V  0x1
#define MP_SYS_USB_SERIAL_JTAG_PRDYN_S  13
/* MP_SYS_LP_EFUSE_MEM_PRDYN : RO ;bitpos:[12] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_LP_EFUSE_MEM_PRDYN    (BIT(12))
#define MP_SYS_LP_EFUSE_MEM_PRDYN_M  (BIT(12))
#define MP_SYS_LP_EFUSE_MEM_PRDYN_V  0x1
#define MP_SYS_LP_EFUSE_MEM_PRDYN_S  12
/* MP_SYS_RMT_MEM_PRDYN : RO ;bitpos:[11] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_RMT_MEM_PRDYN    (BIT(11))
#define MP_SYS_RMT_MEM_PRDYN_M  (BIT(11))
#define MP_SYS_RMT_MEM_PRDYN_V  0x1
#define MP_SYS_RMT_MEM_PRDYN_S  11
/* MP_SYS_LEDC1_MEM_PRDYN : RO ;bitpos:[10] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_LEDC1_MEM_PRDYN    (BIT(10))
#define MP_SYS_LEDC1_MEM_PRDYN_M  (BIT(10))
#define MP_SYS_LEDC1_MEM_PRDYN_V  0x1
#define MP_SYS_LEDC1_MEM_PRDYN_S  10
/* MP_SYS_LEDC0_MEM_PRDYN : RO ;bitpos:[9] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_LEDC0_MEM_PRDYN    (BIT(9))
#define MP_SYS_LEDC0_MEM_PRDYN_M  (BIT(9))
#define MP_SYS_LEDC0_MEM_PRDYN_V  0x1
#define MP_SYS_LEDC0_MEM_PRDYN_S  9
/* MP_SYS_HP_UART_MEM_PRDYN : RO ;bitpos:[8] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_HP_UART_MEM_PRDYN    (BIT(8))
#define MP_SYS_HP_UART_MEM_PRDYN_M  (BIT(8))
#define MP_SYS_HP_UART_MEM_PRDYN_V  0x1
#define MP_SYS_HP_UART_MEM_PRDYN_S  8
/* MP_SYS_AXI_GDMA_MEM_PRDYN : RO ;bitpos:[7] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_AXI_GDMA_MEM_PRDYN    (BIT(7))
#define MP_SYS_AXI_GDMA_MEM_PRDYN_M  (BIT(7))
#define MP_SYS_AXI_GDMA_MEM_PRDYN_V  0x1
#define MP_SYS_AXI_GDMA_MEM_PRDYN_S  7
/* MP_SYS_VIDEO_ENC_VPPA_MEM_PRDYN : RO ;bitpos:[6] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_VIDEO_ENC_VPPA_MEM_PRDYN    (BIT(6))
#define MP_SYS_VIDEO_ENC_VPPA_MEM_PRDYN_M  (BIT(6))
#define MP_SYS_VIDEO_ENC_VPPA_MEM_PRDYN_V  0x1
#define MP_SYS_VIDEO_ENC_VPPA_MEM_PRDYN_S  6
/* MP_SYS_VIDEO_ENC_DMA_MEM_PRDYN : RO ;bitpos:[5] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_VIDEO_ENC_DMA_MEM_PRDYN    (BIT(5))
#define MP_SYS_VIDEO_ENC_DMA_MEM_PRDYN_M  (BIT(5))
#define MP_SYS_VIDEO_ENC_DMA_MEM_PRDYN_V  0x1
#define MP_SYS_VIDEO_ENC_DMA_MEM_PRDYN_S  5
/* MP_SYS_PPA_MEM_PRDYN : RO ;bitpos:[3] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_PPA_MEM_PRDYN    (BIT(3))
#define MP_SYS_PPA_MEM_PRDYN_M  (BIT(3))
#define MP_SYS_PPA_MEM_PRDYN_V  0x1
#define MP_SYS_PPA_MEM_PRDYN_S  3
/* MP_SYS_JPEG_MEM_PRDYN : RO ;bitpos:[2] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_JPEG_MEM_PRDYN    (BIT(2))
#define MP_SYS_JPEG_MEM_PRDYN_M  (BIT(2))
#define MP_SYS_JPEG_MEM_PRDYN_V  0x1
#define MP_SYS_JPEG_MEM_PRDYN_S  2
/* MP_SYS_DMA2D_MEM_PRDYN : RO ;bitpos:[1] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_DMA2D_MEM_PRDYN    (BIT(1))
#define MP_SYS_DMA2D_MEM_PRDYN_M  (BIT(1))
#define MP_SYS_DMA2D_MEM_PRDYN_V  0x1
#define MP_SYS_DMA2D_MEM_PRDYN_S  1
/* MP_SYS_GDMA_MEM_PRDYN : RO ;bitpos:[0] ;default: 1'd1 ; */
/*description: record memory power status.*/
#define MP_SYS_GDMA_MEM_PRDYN    (BIT(0))
#define MP_SYS_GDMA_MEM_PRDYN_M  (BIT(0))
#define MP_SYS_GDMA_MEM_PRDYN_V  0x1
#define MP_SYS_GDMA_MEM_PRDYN_S  0

#define MP_SYS_RDN_ECO_CS_REG          (DR_REG_MP_SYS_BASE + 0x314)
/* MP_SYS_MP_SYS_RDN_ECO_RESULT : RO ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_SYS_RDN_ECO_RESULT    (BIT(1))
#define MP_SYS_MP_SYS_RDN_ECO_RESULT_M  (BIT(1))
#define MP_SYS_MP_SYS_RDN_ECO_RESULT_V  0x1
#define MP_SYS_MP_SYS_RDN_ECO_RESULT_S  1
/* MP_SYS_MP_SYS_RDN_ECO_EN : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_MP_SYS_RDN_ECO_EN    (BIT(0))
#define MP_SYS_MP_SYS_RDN_ECO_EN_M  (BIT(0))
#define MP_SYS_MP_SYS_RDN_ECO_EN_V  0x1
#define MP_SYS_MP_SYS_RDN_ECO_EN_S  0

#define MP_SYS_SWITCH_SDPRF_MEM_AUX_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x318)
/* MP_SYS_SWITCH_SDPRF_MEM_AUX_CTRL : R/W ;bitpos:[31:0] ;default: 32'h00030772 ; */
/*description: reserved.*/
#define MP_SYS_SWITCH_SDPRF_MEM_AUX_CTRL    0xFFFFFFFF
#define MP_SYS_SWITCH_SDPRF_MEM_AUX_CTRL_M  ((MP_SYS_SWITCH_SDPRF_MEM_AUX_CTRL_V)<<(MP_SYS_SWITCH_SDPRF_MEM_AUX_CTRL_S))
#define MP_SYS_SWITCH_SDPRF_MEM_AUX_CTRL_V  0xFFFFFFFF
#define MP_SYS_SWITCH_SDPRF_MEM_AUX_CTRL_S  0

#define MP_SYS_SWITCH_SPRAM_MEM_AUX_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x31C)
/* MP_SYS_SWITCH_SPRAM_MEM_AUX_CTRL : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_SWITCH_SPRAM_MEM_AUX_CTRL    0xFFFFFFFF
#define MP_SYS_SWITCH_SPRAM_MEM_AUX_CTRL_M  ((MP_SYS_SWITCH_SPRAM_MEM_AUX_CTRL_V)<<(MP_SYS_SWITCH_SPRAM_MEM_AUX_CTRL_S))
#define MP_SYS_SWITCH_SPRAM_MEM_AUX_CTRL_V  0xFFFFFFFF
#define MP_SYS_SWITCH_SPRAM_MEM_AUX_CTRL_S  0

#define MP_SYS_SWITCH_SPRF_MEM_AUX_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x320)
/* MP_SYS_SWITCH_SPRF_MEM_AUX_CTRL : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_SWITCH_SPRF_MEM_AUX_CTRL    0xFFFFFFFF
#define MP_SYS_SWITCH_SPRF_MEM_AUX_CTRL_M  ((MP_SYS_SWITCH_SPRF_MEM_AUX_CTRL_V)<<(MP_SYS_SWITCH_SPRF_MEM_AUX_CTRL_S))
#define MP_SYS_SWITCH_SPRF_MEM_AUX_CTRL_V  0xFFFFFFFF
#define MP_SYS_SWITCH_SPRF_MEM_AUX_CTRL_S  0

#define MP_SYS_SW_SYS_RST_REG          (DR_REG_MP_SYS_BASE + 0x324)
/* MP_SYS_SW_SYS_RST : WT ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_SW_SYS_RST    (BIT(0))
#define MP_SYS_SW_SYS_RST_M  (BIT(0))
#define MP_SYS_SW_SYS_RST_V  0x1
#define MP_SYS_SW_SYS_RST_S  0

#define MP_SYS_PLL_CAL_END_REG          (DR_REG_MP_SYS_BASE + 0x328)
/* MP_SYS_ANA_SYS2_PLL_CAL_END : RO ;bitpos:[5] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SYS2_PLL_CAL_END    (BIT(5))
#define MP_SYS_ANA_SYS2_PLL_CAL_END_M  (BIT(5))
#define MP_SYS_ANA_SYS2_PLL_CAL_END_V  0x1
#define MP_SYS_ANA_SYS2_PLL_CAL_END_S  5
/* MP_SYS_ANA_SYS1_PLL_CAL_END : RO ;bitpos:[4] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SYS1_PLL_CAL_END    (BIT(4))
#define MP_SYS_ANA_SYS1_PLL_CAL_END_M  (BIT(4))
#define MP_SYS_ANA_SYS1_PLL_CAL_END_V  0x1
#define MP_SYS_ANA_SYS1_PLL_CAL_END_S  4
/* MP_SYS_ANA_SYS0_PLL_CAL_END : RO ;bitpos:[3] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SYS0_PLL_CAL_END    (BIT(3))
#define MP_SYS_ANA_SYS0_PLL_CAL_END_M  (BIT(3))
#define MP_SYS_ANA_SYS0_PLL_CAL_END_V  0x1
#define MP_SYS_ANA_SYS0_PLL_CAL_END_S  3
/* MP_SYS_ANA_SDIO_PLL_CAL_END : RO ;bitpos:[2] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SDIO_PLL_CAL_END    (BIT(2))
#define MP_SYS_ANA_SDIO_PLL_CAL_END_M  (BIT(2))
#define MP_SYS_ANA_SDIO_PLL_CAL_END_V  0x1
#define MP_SYS_ANA_SDIO_PLL_CAL_END_S  2
/* MP_SYS_ANA_DDR_PLL_CAL_END : RO ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_DDR_PLL_CAL_END    (BIT(1))
#define MP_SYS_ANA_DDR_PLL_CAL_END_M  (BIT(1))
#define MP_SYS_ANA_DDR_PLL_CAL_END_V  0x1
#define MP_SYS_ANA_DDR_PLL_CAL_END_S  1
/* MP_SYS_ANA_CPU_PLL_CAL_END : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_CPU_PLL_CAL_END    (BIT(0))
#define MP_SYS_ANA_CPU_PLL_CAL_END_M  (BIT(0))
#define MP_SYS_ANA_CPU_PLL_CAL_END_V  0x1
#define MP_SYS_ANA_CPU_PLL_CAL_END_S  0

#define MP_SYS_PLL_CAL_STOP_REG          (DR_REG_MP_SYS_BASE + 0x32C)
/* MP_SYS_ANA_SYS2_PLL_CAL_STOP : R/W ;bitpos:[5] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SYS2_PLL_CAL_STOP    (BIT(5))
#define MP_SYS_ANA_SYS2_PLL_CAL_STOP_M  (BIT(5))
#define MP_SYS_ANA_SYS2_PLL_CAL_STOP_V  0x1
#define MP_SYS_ANA_SYS2_PLL_CAL_STOP_S  5
/* MP_SYS_ANA_SYS1_PLL_CAL_STOP : R/W ;bitpos:[4] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SYS1_PLL_CAL_STOP    (BIT(4))
#define MP_SYS_ANA_SYS1_PLL_CAL_STOP_M  (BIT(4))
#define MP_SYS_ANA_SYS1_PLL_CAL_STOP_V  0x1
#define MP_SYS_ANA_SYS1_PLL_CAL_STOP_S  4
/* MP_SYS_ANA_SYS0_PLL_CAL_STOP : R/W ;bitpos:[3] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SYS0_PLL_CAL_STOP    (BIT(3))
#define MP_SYS_ANA_SYS0_PLL_CAL_STOP_M  (BIT(3))
#define MP_SYS_ANA_SYS0_PLL_CAL_STOP_V  0x1
#define MP_SYS_ANA_SYS0_PLL_CAL_STOP_S  3
/* MP_SYS_ANA_SDIO_PLL_CAL_STOP : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SDIO_PLL_CAL_STOP    (BIT(2))
#define MP_SYS_ANA_SDIO_PLL_CAL_STOP_M  (BIT(2))
#define MP_SYS_ANA_SDIO_PLL_CAL_STOP_V  0x1
#define MP_SYS_ANA_SDIO_PLL_CAL_STOP_S  2
/* MP_SYS_ANA_DDR_PLL_CAL_STOP : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_DDR_PLL_CAL_STOP    (BIT(1))
#define MP_SYS_ANA_DDR_PLL_CAL_STOP_M  (BIT(1))
#define MP_SYS_ANA_DDR_PLL_CAL_STOP_V  0x1
#define MP_SYS_ANA_DDR_PLL_CAL_STOP_S  1
/* MP_SYS_ANA_CPU_PLL_CAL_STOP : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_CPU_PLL_CAL_STOP    (BIT(0))
#define MP_SYS_ANA_CPU_PLL_CAL_STOP_M  (BIT(0))
#define MP_SYS_ANA_CPU_PLL_CAL_STOP_V  0x1
#define MP_SYS_ANA_CPU_PLL_CAL_STOP_S  0

#define MP_SYS_VGOOD_VPPA_REG          (DR_REG_MP_SYS_BASE + 0x330)
/* MP_SYS_ANA_VGOOD_VPPA : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_VGOOD_VPPA    (BIT(0))
#define MP_SYS_ANA_VGOOD_VPPA_M  (BIT(0))
#define MP_SYS_ANA_VGOOD_VPPA_V  0x1
#define MP_SYS_ANA_VGOOD_VPPA_S  0

#define MP_SYS_VGOOD_VPPPST_REG          (DR_REG_MP_SYS_BASE + 0x334)
/* MP_SYS_ANA_VGOOD_VPPPST : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_VGOOD_VPPPST    (BIT(0))
#define MP_SYS_ANA_VGOOD_VPPPST_M  (BIT(0))
#define MP_SYS_ANA_VGOOD_VPPPST_V  0x1
#define MP_SYS_ANA_VGOOD_VPPPST_S  0

#define MP_SYS_TEA_SMB_VERSION_REG          (DR_REG_MP_SYS_BASE + 0x338)
/* MP_SYS_TEA_SMB_VERSION : RO ;bitpos:[8:0] ;default: 9'd0 ; */
/*description: reserved.*/
#define MP_SYS_TEA_SMB_VERSION    0x000001FF
#define MP_SYS_TEA_SMB_VERSION_M  ((MP_SYS_TEA_SMB_VERSION_V)<<(MP_SYS_TEA_SMB_VERSION_S))
#define MP_SYS_TEA_SMB_VERSION_V  0x1FF
#define MP_SYS_TEA_SMB_VERSION_S  0

#define MP_SYS_ANALOG_CTRL_REG          (DR_REG_MP_SYS_BASE + 0x33C)
/* MP_SYS_ANA_SLEEP_I2CPOR : R/W ;bitpos:[6] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_SLEEP_I2CPOR    (BIT(6))
#define MP_SYS_ANA_SLEEP_I2CPOR_M  (BIT(6))
#define MP_SYS_ANA_SLEEP_I2CPOR_V  0x1
#define MP_SYS_ANA_SLEEP_I2CPOR_S  6
/* MP_SYS_ANA_ENB_SLOW_CK : R/W ;bitpos:[5] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_ENB_SLOW_CK    (BIT(5))
#define MP_SYS_ANA_ENB_SLOW_CK_M  (BIT(5))
#define MP_SYS_ANA_ENB_SLOW_CK_V  0x1
#define MP_SYS_ANA_ENB_SLOW_CK_S  5
/* MP_SYS_ANA_ENB_RC_CK : R/W ;bitpos:[4] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_ENB_RC_CK    (BIT(4))
#define MP_SYS_ANA_ENB_RC_CK_M  (BIT(4))
#define MP_SYS_ANA_ENB_RC_CK_V  0x1
#define MP_SYS_ANA_ENB_RC_CK_S  4
/* MP_SYS_ANA_ENB_RC_CK_BIAS : R/W ;bitpos:[3] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_ENB_RC_CK_BIAS    (BIT(3))
#define MP_SYS_ANA_ENB_RC_CK_BIAS_M  (BIT(3))
#define MP_SYS_ANA_ENB_RC_CK_BIAS_V  0x1
#define MP_SYS_ANA_ENB_RC_CK_BIAS_S  3
/* MP_SYS_ANA_DIG_ISO : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_DIG_ISO    (BIT(2))
#define MP_SYS_ANA_DIG_ISO_M  (BIT(2))
#define MP_SYS_ANA_DIG_ISO_V  0x1
#define MP_SYS_ANA_DIG_ISO_S  2
/* MP_SYS_ANA_XPD_SAR : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_XPD_SAR    (BIT(1))
#define MP_SYS_ANA_XPD_SAR_M  (BIT(1))
#define MP_SYS_ANA_XPD_SAR_V  0x1
#define MP_SYS_ANA_XPD_SAR_S  1
/* MP_SYS_ANA_XPD_PERIF : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_ANA_XPD_PERIF    (BIT(0))
#define MP_SYS_ANA_XPD_PERIF_M  (BIT(0))
#define MP_SYS_ANA_XPD_PERIF_V  0x1
#define MP_SYS_ANA_XPD_PERIF_S  0

#define MP_SYS_CPU_WR_TARGET_ADDR_L_REG          (DR_REG_MP_SYS_BASE + 0x340)
/* MP_SYS_CPU_TARGET_WADDR_L : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: Configure write target address for cpu.*/
#define MP_SYS_CPU_TARGET_WADDR_L    0xFFFFFFFF
#define MP_SYS_CPU_TARGET_WADDR_L_M  ((MP_SYS_CPU_TARGET_WADDR_L_V)<<(MP_SYS_CPU_TARGET_WADDR_L_S))
#define MP_SYS_CPU_TARGET_WADDR_L_V  0xFFFFFFFF
#define MP_SYS_CPU_TARGET_WADDR_L_S  0

#define MP_SYS_CPU_WR_TARGET_ADDR_L_MSK_REG          (DR_REG_MP_SYS_BASE + 0x344)
/* MP_SYS_CPU_TARGET_WADDR_L_MSK : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: Configure write target address mask for cpu.*/
#define MP_SYS_CPU_TARGET_WADDR_L_MSK    0xFFFFFFFF
#define MP_SYS_CPU_TARGET_WADDR_L_MSK_M  ((MP_SYS_CPU_TARGET_WADDR_L_MSK_V)<<(MP_SYS_CPU_TARGET_WADDR_L_MSK_S))
#define MP_SYS_CPU_TARGET_WADDR_L_MSK_V  0xFFFFFFFF
#define MP_SYS_CPU_TARGET_WADDR_L_MSK_S  0

#define MP_SYS_CPU_WR_TARGET_ADDR_H_REG          (DR_REG_MP_SYS_BASE + 0x348)
/* MP_SYS_CPU_TARGET_WADDR_H : R/W ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: Configure write target address for cpu.*/
#define MP_SYS_CPU_TARGET_WADDR_H    0x000000FF
#define MP_SYS_CPU_TARGET_WADDR_H_M  ((MP_SYS_CPU_TARGET_WADDR_H_V)<<(MP_SYS_CPU_TARGET_WADDR_H_S))
#define MP_SYS_CPU_TARGET_WADDR_H_V  0xFF
#define MP_SYS_CPU_TARGET_WADDR_H_S  0

#define MP_SYS_CPU_WR_TARGET_ADDR_H_MSK_REG          (DR_REG_MP_SYS_BASE + 0x34C)
/* MP_SYS_CPU_TARGET_WADDR_H_MSK : R/W ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: Configure write target address mask for cpu.*/
#define MP_SYS_CPU_TARGET_WADDR_H_MSK    0x000000FF
#define MP_SYS_CPU_TARGET_WADDR_H_MSK_M  ((MP_SYS_CPU_TARGET_WADDR_H_MSK_V)<<(MP_SYS_CPU_TARGET_WADDR_H_MSK_S))
#define MP_SYS_CPU_TARGET_WADDR_H_MSK_V  0xFF
#define MP_SYS_CPU_TARGET_WADDR_H_MSK_S  0

#define MP_SYS_CPU_RD_TARGET_ADDR_L_REG          (DR_REG_MP_SYS_BASE + 0x350)
/* MP_SYS_CPU_TARGET_RADDR_L : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: Configure read target address for cpu.*/
#define MP_SYS_CPU_TARGET_RADDR_L    0xFFFFFFFF
#define MP_SYS_CPU_TARGET_RADDR_L_M  ((MP_SYS_CPU_TARGET_RADDR_L_V)<<(MP_SYS_CPU_TARGET_RADDR_L_S))
#define MP_SYS_CPU_TARGET_RADDR_L_V  0xFFFFFFFF
#define MP_SYS_CPU_TARGET_RADDR_L_S  0

#define MP_SYS_CPU_RD_TARGET_ADDR_L_MSK_REG          (DR_REG_MP_SYS_BASE + 0x354)
/* MP_SYS_CPU_TARGET_RADDR_L_MSK : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: Configure read target address for cpu.*/
#define MP_SYS_CPU_TARGET_RADDR_L_MSK    0xFFFFFFFF
#define MP_SYS_CPU_TARGET_RADDR_L_MSK_M  ((MP_SYS_CPU_TARGET_RADDR_L_MSK_V)<<(MP_SYS_CPU_TARGET_RADDR_L_MSK_S))
#define MP_SYS_CPU_TARGET_RADDR_L_MSK_V  0xFFFFFFFF
#define MP_SYS_CPU_TARGET_RADDR_L_MSK_S  0

#define MP_SYS_CPU_RD_TARGET_ADDR_H_REG          (DR_REG_MP_SYS_BASE + 0x358)
/* MP_SYS_CPU_TARGET_RADDR_H : R/W ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: Configure read target address for cpu.*/
#define MP_SYS_CPU_TARGET_RADDR_H    0x000000FF
#define MP_SYS_CPU_TARGET_RADDR_H_M  ((MP_SYS_CPU_TARGET_RADDR_H_V)<<(MP_SYS_CPU_TARGET_RADDR_H_S))
#define MP_SYS_CPU_TARGET_RADDR_H_V  0xFF
#define MP_SYS_CPU_TARGET_RADDR_H_S  0

#define MP_SYS_CPU_RD_TARGET_ADDR_H_MSK_REG          (DR_REG_MP_SYS_BASE + 0x35C)
/* MP_SYS_CPU_TARGET_RADDR_H_MSK : R/W ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: Configure read target address for cpu.*/
#define MP_SYS_CPU_TARGET_RADDR_H_MSK    0x000000FF
#define MP_SYS_CPU_TARGET_RADDR_H_MSK_M  ((MP_SYS_CPU_TARGET_RADDR_H_MSK_V)<<(MP_SYS_CPU_TARGET_RADDR_H_MSK_S))
#define MP_SYS_CPU_TARGET_RADDR_H_MSK_V  0xFF
#define MP_SYS_CPU_TARGET_RADDR_H_MSK_S  0

#define MP_SYS_CPU_ADDR_DETECT_ENABLE_REG          (DR_REG_MP_SYS_BASE + 0x360)
/* MP_SYS_CPU_RADDR_DET_EN : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: Set to enable read target address detection for cpu.*/
#define MP_SYS_CPU_RADDR_DET_EN    (BIT(1))
#define MP_SYS_CPU_RADDR_DET_EN_M  (BIT(1))
#define MP_SYS_CPU_RADDR_DET_EN_V  0x1
#define MP_SYS_CPU_RADDR_DET_EN_S  1
/* MP_SYS_CPU_WADDR_DET_EN : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: Set to enable write target address detection for cpu.*/
#define MP_SYS_CPU_WADDR_DET_EN    (BIT(0))
#define MP_SYS_CPU_WADDR_DET_EN_M  (BIT(0))
#define MP_SYS_CPU_WADDR_DET_EN_V  0x1
#define MP_SYS_CPU_WADDR_DET_EN_S  0

#define MP_SYS_T22NM_ROM_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x364)
/* MP_SYS_T22NM_ROM_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h0000001e ; */
/*description: reserved.*/
#define MP_SYS_T22NM_ROM_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_T22NM_ROM_AUX_XOR_VALUE_M  ((MP_SYS_T22NM_ROM_AUX_XOR_VALUE_V)<<(MP_SYS_T22NM_ROM_AUX_XOR_VALUE_S))
#define MP_SYS_T22NM_ROM_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_T22NM_ROM_AUX_XOR_VALUE_S  0

#define MP_SYS_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x368)
/* MP_SYS_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_T22NM_SPRAM_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x36C)
/* MP_SYS_T22NM_SPRAM_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_T22NM_SPRAM_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_T22NM_SPRAM_AUX_XOR_VALUE_M  ((MP_SYS_T22NM_SPRAM_AUX_XOR_VALUE_V)<<(MP_SYS_T22NM_SPRAM_AUX_XOR_VALUE_S))
#define MP_SYS_T22NM_SPRAM_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_T22NM_SPRAM_AUX_XOR_VALUE_S  0

#define MP_SYS_T22NM_DPRAM_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x370)
/* MP_SYS_T22NM_DPRAM_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h000303f0 ; */
/*description: reserved.*/
#define MP_SYS_T22NM_DPRAM_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_T22NM_DPRAM_AUX_XOR_VALUE_M  ((MP_SYS_T22NM_DPRAM_AUX_XOR_VALUE_V)<<(MP_SYS_T22NM_DPRAM_AUX_XOR_VALUE_S))
#define MP_SYS_T22NM_DPRAM_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_T22NM_DPRAM_AUX_XOR_VALUE_S  0

#define MP_SYS_T22NM_SDPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x374)
/* MP_SYS_T22NM_SDPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00030772 ; */
/*description: reserved.*/
#define MP_SYS_T22NM_SDPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_T22NM_SDPRF_AUX_XOR_VALUE_M  ((MP_SYS_T22NM_SDPRF_AUX_XOR_VALUE_V)<<(MP_SYS_T22NM_SDPRF_AUX_XOR_VALUE_S))
#define MP_SYS_T22NM_SDPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_T22NM_SDPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_VIDEO_ENC_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x378)
/* MP_SYS_VIDEO_ENC_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_VIDEO_ENC_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_VIDEO_ENC_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_VIDEO_ENC_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_VIDEO_ENC_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_VIDEO_ENC_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_VIDEO_ENC_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_AXI_GDMA_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x37C)
/* MP_SYS_AXI_GDMA_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_AXI_GDMA_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_AXI_GDMA_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_AXI_GDMA_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_AXI_GDMA_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_AXI_GDMA_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_AXI_GDMA_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_DDRC_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x380)
/* MP_SYS_DDRC_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_DDRC_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_DDRC_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_DDRC_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_DDRC_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_DDRC_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_DDRC_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_OCRAM_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x384)
/* MP_SYS_OCRAM_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_OCRAM_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_OCRAM_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_OCRAM_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_OCRAM_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_OCRAM_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_OCRAM_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_CORE_TOP_RF_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x388)
/* MP_SYS_CORE_TOP_RF_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_CORE_TOP_RF_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_CORE_TOP_RF_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_CORE_TOP_RF_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_CORE_TOP_RF_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_CORE_TOP_RF_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_CORE_TOP_RF_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_CORE_TOP_SRAM_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x38C)
/* MP_SYS_CORE_TOP_SRAM_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_CORE_TOP_SRAM_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_CORE_TOP_SRAM_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_CORE_TOP_SRAM_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_CORE_TOP_SRAM_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_CORE_TOP_SRAM_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_CORE_TOP_SRAM_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_MP_CORE0_RF_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x390)
/* MP_SYS_MP_CORE0_RF_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE0_RF_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_MP_CORE0_RF_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_MP_CORE0_RF_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_MP_CORE0_RF_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_MP_CORE0_RF_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_MP_CORE0_RF_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_MP_CORE0_SRAM_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x394)
/* MP_SYS_MP_CORE0_SRAM_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE0_SRAM_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_MP_CORE0_SRAM_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_MP_CORE0_SRAM_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_MP_CORE0_SRAM_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_MP_CORE0_SRAM_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_MP_CORE0_SRAM_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_MP_CORE1_RF_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x398)
/* MP_SYS_MP_CORE1_RF_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE1_RF_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_MP_CORE1_RF_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_MP_CORE1_RF_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_MP_CORE1_RF_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_MP_CORE1_RF_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_MP_CORE1_RF_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_MP_CORE1_SRAM_T22NM_SPRF_AUX_XOR_VALUE_REG          (DR_REG_MP_SYS_BASE + 0x39C)
/* MP_SYS_MP_CORE1_SRAM_T22NM_SPRF_AUX_XOR_VALUE : R/W ;bitpos:[31:0] ;default: 32'h00033f02 ; */
/*description: reserved.*/
#define MP_SYS_MP_CORE1_SRAM_T22NM_SPRF_AUX_XOR_VALUE    0xFFFFFFFF
#define MP_SYS_MP_CORE1_SRAM_T22NM_SPRF_AUX_XOR_VALUE_M  ((MP_SYS_MP_CORE1_SRAM_T22NM_SPRF_AUX_XOR_VALUE_V)<<(MP_SYS_MP_CORE1_SRAM_T22NM_SPRF_AUX_XOR_VALUE_S))
#define MP_SYS_MP_CORE1_SRAM_T22NM_SPRF_AUX_XOR_VALUE_V  0xFFFFFFFF
#define MP_SYS_MP_CORE1_SRAM_T22NM_SPRF_AUX_XOR_VALUE_S  0

#define MP_SYS_TEA_UST_MSG_INDEXES_REG          (DR_REG_MP_SYS_BASE + 0x3A0)
/* MP_SYS_TEA_UST_MSG_INDEXES : RO ;bitpos:[8:0] ;default: 9'd0 ; */
/*description: reserved.*/
#define MP_SYS_TEA_UST_MSG_INDEXES    0x000001FF
#define MP_SYS_TEA_UST_MSG_INDEXES_M  ((MP_SYS_TEA_UST_MSG_INDEXES_V)<<(MP_SYS_TEA_UST_MSG_INDEXES_S))
#define MP_SYS_TEA_UST_MSG_INDEXES_V  0x1FF
#define MP_SYS_TEA_UST_MSG_INDEXES_S  0

#define MP_SYS_TEA_UST_TIME_REG          (DR_REG_MP_SYS_BASE + 0x3A4)
/* MP_SYS_TEA_UST_TIME : RO ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reserved.*/
#define MP_SYS_TEA_UST_TIME    0xFFFFFFFF
#define MP_SYS_TEA_UST_TIME_M  ((MP_SYS_TEA_UST_TIME_V)<<(MP_SYS_TEA_UST_TIME_S))
#define MP_SYS_TEA_UST_TIME_V  0xFFFFFFFF
#define MP_SYS_TEA_UST_TIME_S  0

#define MP_SYS_CPU_DMACTIVE_REG          (DR_REG_MP_SYS_BASE + 0x3A8)
/* MP_SYS_CPU_DMACTIVE : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_CPU_DMACTIVE    (BIT(0))
#define MP_SYS_CPU_DMACTIVE_M  (BIT(0))
#define MP_SYS_CPU_DMACTIVE_V  0x1
#define MP_SYS_CPU_DMACTIVE_S  0

#define MP_SYS_TRUE_AXI_SLAVE_SEL_REG          (DR_REG_MP_SYS_BASE + 0x3AC)
/* MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE : R/W ;bitpos:[5] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE    (BIT(5))
#define MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE_M  (BIT(5))
#define MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE_V  0x1
#define MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE_S  5
/* MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE : R/W ;bitpos:[4] ;default: 1'd1 ; */
/*description: reserved.*/
#define MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE    (BIT(4))
#define MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE_M  (BIT(4))
#define MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE_V  0x1
#define MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE_S  4
/* MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE : R/W ;bitpos:[3] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE    (BIT(3))
#define MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE_M  (BIT(3))
#define MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE_V  0x1
#define MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE_S  3
/* MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE : R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE    (BIT(2))
#define MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE_M  (BIT(2))
#define MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE_V  0x1
#define MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE_S  2
/* MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE    (BIT(1))
#define MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE_M  (BIT(1))
#define MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE_V  0x1
#define MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE_S  1
/* MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE    (BIT(0))
#define MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE_M  (BIT(0))
#define MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE_V  0x1
#define MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE_S  0

#define MP_SYS_TRUE_AXI_SLAVE_SEL_STATUS_REG          (DR_REG_MP_SYS_BASE + 0x3B0)
/* MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE_DONE : RO ;bitpos:[5] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE_DONE    (BIT(5))
#define MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE_DONE_M  (BIT(5))
#define MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE_DONE_V  0x1
#define MP_SYS_PSRAM_SEL_TRUE_AXI_SLAVE_DONE_S  5
/* MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE_DONE : RO ;bitpos:[4] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE_DONE    (BIT(4))
#define MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE_DONE_M  (BIT(4))
#define MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE_DONE_V  0x1
#define MP_SYS_FLASH_SEL_TRUE_AXI_SLAVE_DONE_S  4
/* MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE_DONE : RO ;bitpos:[3] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE_DONE    (BIT(3))
#define MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE_DONE_M  (BIT(3))
#define MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE_DONE_V  0x1
#define MP_SYS_DDRC1_SEL_TRUE_AXI_SLAVE_DONE_S  3
/* MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE_DONE : RO ;bitpos:[2] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE_DONE    (BIT(2))
#define MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE_DONE_M  (BIT(2))
#define MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE_DONE_V  0x1
#define MP_SYS_DDRC0_SEL_TRUE_AXI_SLAVE_DONE_S  2
/* MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE_DONE : RO ;bitpos:[1] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE_DONE    (BIT(1))
#define MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE_DONE_M  (BIT(1))
#define MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE_DONE_V  0x1
#define MP_SYS_PCIE1_MEM_SEL_TRUE_AXI_SLAVE_DONE_S  1
/* MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE_DONE : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reserved.*/
#define MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE_DONE    (BIT(0))
#define MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE_DONE_M  (BIT(0))
#define MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE_DONE_V  0x1
#define MP_SYS_PCIE0_MEM_SEL_TRUE_AXI_SLAVE_DONE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_MP_SYS_REG_H_ */
