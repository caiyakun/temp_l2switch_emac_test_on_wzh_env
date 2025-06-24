/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_DDRC_APB_REG_H_
#define _SOC_DDRC_APB_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define DDRC_APB_DDRC_REG_APB_CLK_EN_REG          (DR_REG_DDRC_APB_BASE + 0x0)
/* DDRC_APB_DDRC_CLK_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether to force on apb_reg_file clock.; 0 : Not force on; 1 : Force
on.*/
#define DDRC_APB_DDRC_CLK_EN    (BIT(0))
#define DDRC_APB_DDRC_CLK_EN_M  (BIT(0))
#define DDRC_APB_DDRC_CLK_EN_V  0x1
#define DDRC_APB_DDRC_CLK_EN_S  0

#define DDRC_APB_DDRC_MODULE_CLK_EN0_REG          (DR_REG_DDRC_APB_BASE + 0x10)
/* DDRC_APB_DDRC_AXIR_CLK_EN : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Configures whether to force on axi_rd 15~0 module clock. For bit n:; 0 : Not for
ce on axi_rd n clock; 1 : Force on axi_rd n clock.*/
#define DDRC_APB_DDRC_AXIR_CLK_EN    0x0000FFFF
#define DDRC_APB_DDRC_AXIR_CLK_EN_M  ((DDRC_APB_DDRC_AXIR_CLK_EN_V)<<(DDRC_APB_DDRC_AXIR_CLK_EN_S))
#define DDRC_APB_DDRC_AXIR_CLK_EN_V  0xFFFF
#define DDRC_APB_DDRC_AXIR_CLK_EN_S  16
/* DDRC_APB_DDRC_AXIW_CLK_EN : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Configures whether to force on axi_wr 15~0 module clock. For bit n:; 0 : Not for
ce on axi_wr n clock; 1 : Force on axi_wr n clock.*/
#define DDRC_APB_DDRC_AXIW_CLK_EN    0x0000FFFF
#define DDRC_APB_DDRC_AXIW_CLK_EN_M  ((DDRC_APB_DDRC_AXIW_CLK_EN_V)<<(DDRC_APB_DDRC_AXIW_CLK_EN_S))
#define DDRC_APB_DDRC_AXIW_CLK_EN_V  0xFFFF
#define DDRC_APB_DDRC_AXIW_CLK_EN_S  0

#define DDRC_APB_DDRC_MODULE_CLK_EN1_REG          (DR_REG_DDRC_APB_BASE + 0x14)
/* DDRC_APB_DDRC_RDC_MEM_CLK_EN : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: Configures whether to force on rd_cache memory clock.; 0 : Not force on; 1 : For
ce on.*/
#define DDRC_APB_DDRC_RDC_MEM_CLK_EN    (BIT(31))
#define DDRC_APB_DDRC_RDC_MEM_CLK_EN_M  (BIT(31))
#define DDRC_APB_DDRC_RDC_MEM_CLK_EN_V  0x1
#define DDRC_APB_DDRC_RDC_MEM_CLK_EN_S  31
/* DDRC_APB_DDRC_WRC_MEM_CLK_EN : R/W ;bitpos:[30] ;default: 1'h0 ; */
/*description: Configures whether to force on wr_cache memory clock.; 0 : Not force on; 1 : For
ce on.*/
#define DDRC_APB_DDRC_WRC_MEM_CLK_EN    (BIT(30))
#define DDRC_APB_DDRC_WRC_MEM_CLK_EN_M  (BIT(30))
#define DDRC_APB_DDRC_WRC_MEM_CLK_EN_V  0x1
#define DDRC_APB_DDRC_WRC_MEM_CLK_EN_S  30
/* DDRC_APB_DDRC_PHY_CLK_EN : R/W ;bitpos:[28] ;default: 1'h1 ; */
/*description: Configures whether to force on PHY DFI clock. Must set to 1 when PHY work, becau
se PHY do not have HW auto clock gating.; 0 : Not force on; 1 : Force on.*/
#define DDRC_APB_DDRC_PHY_CLK_EN    (BIT(28))
#define DDRC_APB_DDRC_PHY_CLK_EN_M  (BIT(28))
#define DDRC_APB_DDRC_PHY_CLK_EN_V  0x1
#define DDRC_APB_DDRC_PHY_CLK_EN_S  28
/* DDRC_APB_DDRC_DFIC_CLK_EN : R/W ;bitpos:[24] ;default: 1'h1 ; */
/*description: Configures whether to force on dfi_ctrl module clock. Must set to 1 when DDRC wo
rk, because this module do not have HW auto clock gating.; 0 : Not force on; 1 :
 Force on.*/
#define DDRC_APB_DDRC_DFIC_CLK_EN    (BIT(24))
#define DDRC_APB_DDRC_DFIC_CLK_EN_M  (BIT(24))
#define DDRC_APB_DDRC_DFIC_CLK_EN_V  0x1
#define DDRC_APB_DDRC_DFIC_CLK_EN_S  24
/* DDRC_APB_DDRC_AES_CTRL_CLK_EN : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Configures whether to force on sch core module clock.; 0 : Not force on; 1 : For
ce on.*/
#define DDRC_APB_DDRC_AES_CTRL_CLK_EN    (BIT(17))
#define DDRC_APB_DDRC_AES_CTRL_CLK_EN_M  (BIT(17))
#define DDRC_APB_DDRC_AES_CTRL_CLK_EN_V  0x1
#define DDRC_APB_DDRC_AES_CTRL_CLK_EN_S  17
/* DDRC_APB_DDRC_ECC_CLK_EN : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Configures whether to force on ecc_cache module clock.; 0 : Not force on; 1 : Fo
rce on.*/
#define DDRC_APB_DDRC_ECC_CLK_EN    (BIT(16))
#define DDRC_APB_DDRC_ECC_CLK_EN_M  (BIT(16))
#define DDRC_APB_DDRC_ECC_CLK_EN_V  0x1
#define DDRC_APB_DDRC_ECC_CLK_EN_S  16
/* DDRC_APB_DDRC_ARQ_CLK_EN : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether to force on ar_queue module clock.; 0 : Not force on; 1 : For
ce on.*/
#define DDRC_APB_DDRC_ARQ_CLK_EN    (BIT(11))
#define DDRC_APB_DDRC_ARQ_CLK_EN_M  (BIT(11))
#define DDRC_APB_DDRC_ARQ_CLK_EN_V  0x1
#define DDRC_APB_DDRC_ARQ_CLK_EN_S  11
/* DDRC_APB_DDRC_RDC_CLK_EN : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether to force on rd_cache module clock.; 0 : Not force on; 1 : For
ce on.*/
#define DDRC_APB_DDRC_RDC_CLK_EN    (BIT(10))
#define DDRC_APB_DDRC_RDC_CLK_EN_M  (BIT(10))
#define DDRC_APB_DDRC_RDC_CLK_EN_V  0x1
#define DDRC_APB_DDRC_RDC_CLK_EN_S  10
/* DDRC_APB_DDRC_OL_CLK_EN : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether to force on overlap module clock.; 0 : Not force on; 1 : Forc
e on.*/
#define DDRC_APB_DDRC_OL_CLK_EN    (BIT(9))
#define DDRC_APB_DDRC_OL_CLK_EN_M  (BIT(9))
#define DDRC_APB_DDRC_OL_CLK_EN_V  0x1
#define DDRC_APB_DDRC_OL_CLK_EN_S  9
/* DDRC_APB_DDRC_RD_ARB_CLK_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether to force on rd_arb module clock.; 0 : Not force on; 1 : Force
 on.*/
#define DDRC_APB_DDRC_RD_ARB_CLK_EN    (BIT(8))
#define DDRC_APB_DDRC_RD_ARB_CLK_EN_M  (BIT(8))
#define DDRC_APB_DDRC_RD_ARB_CLK_EN_V  0x1
#define DDRC_APB_DDRC_RD_ARB_CLK_EN_S  8
/* DDRC_APB_DDRC_WRC_CLK_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether to force on wr_cache module clock.; 0 : Not force on; 1 : For
ce on.*/
#define DDRC_APB_DDRC_WRC_CLK_EN    (BIT(2))
#define DDRC_APB_DDRC_WRC_CLK_EN_M  (BIT(2))
#define DDRC_APB_DDRC_WRC_CLK_EN_V  0x1
#define DDRC_APB_DDRC_WRC_CLK_EN_S  2
/* DDRC_APB_DDRC_RMW_CLK_EN : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether to force on rmw_cache module clock.; 0 : Not force on; 1 : Fo
rce on.*/
#define DDRC_APB_DDRC_RMW_CLK_EN    (BIT(1))
#define DDRC_APB_DDRC_RMW_CLK_EN_M  (BIT(1))
#define DDRC_APB_DDRC_RMW_CLK_EN_V  0x1
#define DDRC_APB_DDRC_RMW_CLK_EN_S  1
/* DDRC_APB_DDRC_WR_ARB_CLK_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether to force on wr_arb module clock.; 0 : Not force on; 1 : Force
 on.*/
#define DDRC_APB_DDRC_WR_ARB_CLK_EN    (BIT(0))
#define DDRC_APB_DDRC_WR_ARB_CLK_EN_M  (BIT(0))
#define DDRC_APB_DDRC_WR_ARB_CLK_EN_V  0x1
#define DDRC_APB_DDRC_WR_ARB_CLK_EN_S  0

#define DDRC_APB_DDRC_MODULE_RST_N0_REG          (DR_REG_DDRC_APB_BASE + 0x18)
/* DDRC_APB_DDRC_AXIR_RST_N : R/W ;bitpos:[31:16] ;default: 16'hffff ; */
/*description: Configures whether to reset axi_rd 15~0 module. For bit n:; 0 : Reset axi_rd n;
1 : No effect.*/
#define DDRC_APB_DDRC_AXIR_RST_N    0x0000FFFF
#define DDRC_APB_DDRC_AXIR_RST_N_M  ((DDRC_APB_DDRC_AXIR_RST_N_V)<<(DDRC_APB_DDRC_AXIR_RST_N_S))
#define DDRC_APB_DDRC_AXIR_RST_N_V  0xFFFF
#define DDRC_APB_DDRC_AXIR_RST_N_S  16
/* DDRC_APB_DDRC_AXIW_RST_N : R/W ;bitpos:[15:0] ;default: 16'hffff ; */
/*description: Configures whether to reset axi_wr 15~0 module. For bit n:; 0 : Reset axi_wr n;
1 : No effect.*/
#define DDRC_APB_DDRC_AXIW_RST_N    0x0000FFFF
#define DDRC_APB_DDRC_AXIW_RST_N_M  ((DDRC_APB_DDRC_AXIW_RST_N_V)<<(DDRC_APB_DDRC_AXIW_RST_N_S))
#define DDRC_APB_DDRC_AXIW_RST_N_V  0xFFFF
#define DDRC_APB_DDRC_AXIW_RST_N_S  0

#define DDRC_APB_DDRC_MODULE_RST_N1_REG          (DR_REG_DDRC_APB_BASE + 0x1C)
/* DDRC_APB_DDRC_PHY_RST_N : R/W ;bitpos:[28] ;default: 1'h0 ; */
/*description: Configures whether to reset PHY.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_PHY_RST_N    (BIT(28))
#define DDRC_APB_DDRC_PHY_RST_N_M  (BIT(28))
#define DDRC_APB_DDRC_PHY_RST_N_V  0x1
#define DDRC_APB_DDRC_PHY_RST_N_S  28
/* DDRC_APB_DDRC_DFIC_RST_N : R/W ;bitpos:[24] ;default: 1'h0 ; */
/*description: Configures whether to reset dfi_ctrl module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_DFIC_RST_N    (BIT(24))
#define DDRC_APB_DDRC_DFIC_RST_N_M  (BIT(24))
#define DDRC_APB_DDRC_DFIC_RST_N_V  0x1
#define DDRC_APB_DDRC_DFIC_RST_N_S  24
/* DDRC_APB_DDRC_AES_CTRL_RST_N : R/W ;bitpos:[17] ;default: 1'h1 ; */
/*description: Configures whether to reset aes_ctrl module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_AES_CTRL_RST_N    (BIT(17))
#define DDRC_APB_DDRC_AES_CTRL_RST_N_M  (BIT(17))
#define DDRC_APB_DDRC_AES_CTRL_RST_N_V  0x1
#define DDRC_APB_DDRC_AES_CTRL_RST_N_S  17
/* DDRC_APB_DDRC_ECC_RST_N : R/W ;bitpos:[16] ;default: 1'h1 ; */
/*description: Configures whether to reset ecc_cache module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_ECC_RST_N    (BIT(16))
#define DDRC_APB_DDRC_ECC_RST_N_M  (BIT(16))
#define DDRC_APB_DDRC_ECC_RST_N_V  0x1
#define DDRC_APB_DDRC_ECC_RST_N_S  16
/* DDRC_APB_DDRC_ARQ_RST_N : R/W ;bitpos:[11] ;default: 1'h1 ; */
/*description: Configures whether to reset ar_queue module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_ARQ_RST_N    (BIT(11))
#define DDRC_APB_DDRC_ARQ_RST_N_M  (BIT(11))
#define DDRC_APB_DDRC_ARQ_RST_N_V  0x1
#define DDRC_APB_DDRC_ARQ_RST_N_S  11
/* DDRC_APB_DDRC_RDC_RST_N : R/W ;bitpos:[10] ;default: 1'h1 ; */
/*description: Configures whether to reset rd_cache module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_RDC_RST_N    (BIT(10))
#define DDRC_APB_DDRC_RDC_RST_N_M  (BIT(10))
#define DDRC_APB_DDRC_RDC_RST_N_V  0x1
#define DDRC_APB_DDRC_RDC_RST_N_S  10
/* DDRC_APB_DDRC_OL_RST_N : R/W ;bitpos:[9] ;default: 1'h1 ; */
/*description: Configures whether to reset overlap module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_OL_RST_N    (BIT(9))
#define DDRC_APB_DDRC_OL_RST_N_M  (BIT(9))
#define DDRC_APB_DDRC_OL_RST_N_V  0x1
#define DDRC_APB_DDRC_OL_RST_N_S  9
/* DDRC_APB_DDRC_RD_ARB_RST_N : R/W ;bitpos:[8] ;default: 1'h1 ; */
/*description: Configures whether to reset rd_arb module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_RD_ARB_RST_N    (BIT(8))
#define DDRC_APB_DDRC_RD_ARB_RST_N_M  (BIT(8))
#define DDRC_APB_DDRC_RD_ARB_RST_N_V  0x1
#define DDRC_APB_DDRC_RD_ARB_RST_N_S  8
/* DDRC_APB_DDRC_WRC_RST_N : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: Configures whether to reset wr_cache module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_WRC_RST_N    (BIT(2))
#define DDRC_APB_DDRC_WRC_RST_N_M  (BIT(2))
#define DDRC_APB_DDRC_WRC_RST_N_V  0x1
#define DDRC_APB_DDRC_WRC_RST_N_S  2
/* DDRC_APB_DDRC_RMW_RST_N : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: Configures whether to reset rmw_cache module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_RMW_RST_N    (BIT(1))
#define DDRC_APB_DDRC_RMW_RST_N_M  (BIT(1))
#define DDRC_APB_DDRC_RMW_RST_N_V  0x1
#define DDRC_APB_DDRC_RMW_RST_N_S  1
/* DDRC_APB_DDRC_WR_ARB_RST_N : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: Configures whether to reset wr_arb module.; 0 : Reset; 1 : No effect.*/
#define DDRC_APB_DDRC_WR_ARB_RST_N    (BIT(0))
#define DDRC_APB_DDRC_WR_ARB_RST_N_M  (BIT(0))
#define DDRC_APB_DDRC_WR_ARB_RST_N_V  0x1
#define DDRC_APB_DDRC_WR_ARB_RST_N_S  0

#define DDRC_APB_DDRC_DDR_TYPE_REG          (DR_REG_DDRC_APB_BASE + 0x20)
/* DDRC_APB_DDRC_ADDRMAP_TYPE : R/W ;bitpos:[28] ;default: 1'h1 ; */
/*description: Configures DRAM Physical address mapping type.; 0: {Bank,Row,Column} ; 1: {Row,B
ank,Column}.*/
#define DDRC_APB_DDRC_ADDRMAP_TYPE    (BIT(28))
#define DDRC_APB_DDRC_ADDRMAP_TYPE_M  (BIT(28))
#define DDRC_APB_DDRC_ADDRMAP_TYPE_V  0x1
#define DDRC_APB_DDRC_ADDRMAP_TYPE_S  28
/* DDRC_APB_DDRC_DRAM_VER : R/W ;bitpos:[25:24] ;default: 2'h2 ; */
/*description: Configures DRAM version.; 0x0: LPDDR3; 0x1: LPDDR2; 0x2: DDR3(L); Others: Reserv
ed.*/
#define DDRC_APB_DDRC_DRAM_VER    0x00000003
#define DDRC_APB_DDRC_DRAM_VER_M  ((DDRC_APB_DDRC_DRAM_VER_V)<<(DDRC_APB_DDRC_DRAM_VER_S))
#define DDRC_APB_DDRC_DRAM_VER_V  0x3
#define DDRC_APB_DDRC_DRAM_VER_S  24
/* DDRC_APB_DDRC_DQ_WIDTH : R/W ;bitpos:[21:20] ;default: 2'h1 ; */
/*description: Configures DRAM DQ width.; 0x0: 8bit; 0x1: 16bit; Others: Reserved.*/
#define DDRC_APB_DDRC_DQ_WIDTH    0x00000003
#define DDRC_APB_DDRC_DQ_WIDTH_M  ((DDRC_APB_DDRC_DQ_WIDTH_V)<<(DDRC_APB_DDRC_DQ_WIDTH_S))
#define DDRC_APB_DDRC_DQ_WIDTH_V  0x3
#define DDRC_APB_DDRC_DQ_WIDTH_S  20
/* DDRC_APB_DDRC_BANK_WIDTH : R/W ;bitpos:[17:16] ;default: 2'h3 ; */
/*description: Configures DRAM Bank address width..*/
#define DDRC_APB_DDRC_BANK_WIDTH    0x00000003
#define DDRC_APB_DDRC_BANK_WIDTH_M  ((DDRC_APB_DDRC_BANK_WIDTH_V)<<(DDRC_APB_DDRC_BANK_WIDTH_S))
#define DDRC_APB_DDRC_BANK_WIDTH_V  0x3
#define DDRC_APB_DDRC_BANK_WIDTH_S  16
/* DDRC_APB_DDRC_ROW_WIDTH : R/W ;bitpos:[12:8] ;default: 5'hf ; */
/*description: Configures DRAM Row address width..*/
#define DDRC_APB_DDRC_ROW_WIDTH    0x0000001F
#define DDRC_APB_DDRC_ROW_WIDTH_M  ((DDRC_APB_DDRC_ROW_WIDTH_V)<<(DDRC_APB_DDRC_ROW_WIDTH_S))
#define DDRC_APB_DDRC_ROW_WIDTH_V  0x1F
#define DDRC_APB_DDRC_ROW_WIDTH_S  8
/* DDRC_APB_DDRC_COL_WIDTH : R/W ;bitpos:[4:0] ;default: 5'ha ; */
/*description: Configures DRAM Column address width..*/
#define DDRC_APB_DDRC_COL_WIDTH    0x0000001F
#define DDRC_APB_DDRC_COL_WIDTH_M  ((DDRC_APB_DDRC_COL_WIDTH_V)<<(DDRC_APB_DDRC_COL_WIDTH_S))
#define DDRC_APB_DDRC_COL_WIDTH_V  0x1F
#define DDRC_APB_DDRC_COL_WIDTH_S  0

#define DDRC_APB_DDRC_REGION_GRANU_REG          (DR_REG_DDRC_APB_BASE + 0x24)
/* DDRC_APB_DDRC_REGION_GRANU : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures granularity of region. ; 0x0: 1/32; 0x1: 1/64; 0x2: 1/128; 0x3: 1/256.*/
#define DDRC_APB_DDRC_REGION_GRANU    0x00000003
#define DDRC_APB_DDRC_REGION_GRANU_M  ((DDRC_APB_DDRC_REGION_GRANU_V)<<(DDRC_APB_DDRC_REGION_GRANU_S))
#define DDRC_APB_DDRC_REGION_GRANU_V  0x3
#define DDRC_APB_DDRC_REGION_GRANU_S  0

#define DDRC_APB_DDRC_REGION_ECC_EN_REG          (DR_REG_DDRC_APB_BASE + 0x28)
/* DDRC_APB_DDRC_REGION_ECC_EN : R/W ;bitpos:[31:0] ;default: 32'h3fffffff ; */
/*description: Configures whether to enable Region 31~0 ECC. For bit n:; 0 : Disable Region n E
CC; 1 : Enable Region n ECC.*/
#define DDRC_APB_DDRC_REGION_ECC_EN    0xFFFFFFFF
#define DDRC_APB_DDRC_REGION_ECC_EN_M  ((DDRC_APB_DDRC_REGION_ECC_EN_V)<<(DDRC_APB_DDRC_REGION_ECC_EN_S))
#define DDRC_APB_DDRC_REGION_ECC_EN_V  0xFFFFFFFF
#define DDRC_APB_DDRC_REGION_ECC_EN_S  0

#define DDRC_APB_DDRC_REGION_AES_EN_REG          (DR_REG_DDRC_APB_BASE + 0x2C)
/* DDRC_APB_DDRC_REGION_AES_EN : R/W ;bitpos:[31:0] ;default: 32'h3fffffff ; */
/*description: Configures whether to enable Region 31~0 AES. For bit n:; 0 : Disable Region n A
ES; 1 : Enable Region n AES.*/
#define DDRC_APB_DDRC_REGION_AES_EN    0xFFFFFFFF
#define DDRC_APB_DDRC_REGION_AES_EN_M  ((DDRC_APB_DDRC_REGION_AES_EN_V)<<(DDRC_APB_DDRC_REGION_AES_EN_S))
#define DDRC_APB_DDRC_REGION_AES_EN_V  0xFFFFFFFF
#define DDRC_APB_DDRC_REGION_AES_EN_S  0

#define DDRC_APB_DDRC_AXIW_PRI0_REG          (DR_REG_DDRC_APB_BASE + 0x40)
/* DDRC_APB_DDRC_AXIW_PRI_P7 : R/W ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 7 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P7    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P7_M  ((DDRC_APB_DDRC_AXIW_PRI_P7_V)<<(DDRC_APB_DDRC_AXIW_PRI_P7_S))
#define DDRC_APB_DDRC_AXIW_PRI_P7_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P7_S  28
/* DDRC_APB_DDRC_AXIW_PRI_P6 : R/W ;bitpos:[27:24] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 6 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P6    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P6_M  ((DDRC_APB_DDRC_AXIW_PRI_P6_V)<<(DDRC_APB_DDRC_AXIW_PRI_P6_S))
#define DDRC_APB_DDRC_AXIW_PRI_P6_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P6_S  24
/* DDRC_APB_DDRC_AXIW_PRI_P5 : R/W ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 5 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P5    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P5_M  ((DDRC_APB_DDRC_AXIW_PRI_P5_V)<<(DDRC_APB_DDRC_AXIW_PRI_P5_S))
#define DDRC_APB_DDRC_AXIW_PRI_P5_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P5_S  20
/* DDRC_APB_DDRC_AXIW_PRI_P4 : R/W ;bitpos:[19:16] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 4 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P4    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P4_M  ((DDRC_APB_DDRC_AXIW_PRI_P4_V)<<(DDRC_APB_DDRC_AXIW_PRI_P4_S))
#define DDRC_APB_DDRC_AXIW_PRI_P4_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P4_S  16
/* DDRC_APB_DDRC_AXIW_PRI_P3 : R/W ;bitpos:[15:12] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 3 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P3    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P3_M  ((DDRC_APB_DDRC_AXIW_PRI_P3_V)<<(DDRC_APB_DDRC_AXIW_PRI_P3_S))
#define DDRC_APB_DDRC_AXIW_PRI_P3_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P3_S  12
/* DDRC_APB_DDRC_AXIW_PRI_P2 : R/W ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 2 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P2    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P2_M  ((DDRC_APB_DDRC_AXIW_PRI_P2_V)<<(DDRC_APB_DDRC_AXIW_PRI_P2_S))
#define DDRC_APB_DDRC_AXIW_PRI_P2_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P2_S  8
/* DDRC_APB_DDRC_AXIW_PRI_P1 : R/W ;bitpos:[7:4] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 1 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P1    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P1_M  ((DDRC_APB_DDRC_AXIW_PRI_P1_V)<<(DDRC_APB_DDRC_AXIW_PRI_P1_S))
#define DDRC_APB_DDRC_AXIW_PRI_P1_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P1_S  4
/* DDRC_APB_DDRC_AXIW_PRI_P0 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 0 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P0    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P0_M  ((DDRC_APB_DDRC_AXIW_PRI_P0_V)<<(DDRC_APB_DDRC_AXIW_PRI_P0_S))
#define DDRC_APB_DDRC_AXIW_PRI_P0_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P0_S  0

#define DDRC_APB_DDRC_AXIW_PRI1_REG          (DR_REG_DDRC_APB_BASE + 0x44)
/* DDRC_APB_DDRC_AXIW_PRI_P15 : R/W ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 15 priority. Must < AXI Write Port number, 0x0 is the
lowest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P15    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P15_M  ((DDRC_APB_DDRC_AXIW_PRI_P15_V)<<(DDRC_APB_DDRC_AXIW_PRI_P15_S))
#define DDRC_APB_DDRC_AXIW_PRI_P15_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P15_S  28
/* DDRC_APB_DDRC_AXIW_PRI_P14 : R/W ;bitpos:[27:24] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 14 priority. Must < AXI Write Port number, 0x0 is the
lowest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P14    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P14_M  ((DDRC_APB_DDRC_AXIW_PRI_P14_V)<<(DDRC_APB_DDRC_AXIW_PRI_P14_S))
#define DDRC_APB_DDRC_AXIW_PRI_P14_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P14_S  24
/* DDRC_APB_DDRC_AXIW_PRI_P13 : R/W ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 13 priority. Must < AXI Write Port number, 0x0 is the
lowest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P13    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P13_M  ((DDRC_APB_DDRC_AXIW_PRI_P13_V)<<(DDRC_APB_DDRC_AXIW_PRI_P13_S))
#define DDRC_APB_DDRC_AXIW_PRI_P13_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P13_S  20
/* DDRC_APB_DDRC_AXIW_PRI_P12 : R/W ;bitpos:[19:16] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 12 priority. Must < AXI Write Port number, 0x0 is the
lowest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P12    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P12_M  ((DDRC_APB_DDRC_AXIW_PRI_P12_V)<<(DDRC_APB_DDRC_AXIW_PRI_P12_S))
#define DDRC_APB_DDRC_AXIW_PRI_P12_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P12_S  16
/* DDRC_APB_DDRC_AXIW_PRI_P11 : R/W ;bitpos:[15:12] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 11 priority. Must < AXI Write Port number, 0x0 is the
lowest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P11    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P11_M  ((DDRC_APB_DDRC_AXIW_PRI_P11_V)<<(DDRC_APB_DDRC_AXIW_PRI_P11_S))
#define DDRC_APB_DDRC_AXIW_PRI_P11_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P11_S  12
/* DDRC_APB_DDRC_AXIW_PRI_P10 : R/W ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 10 priority. Must < AXI Write Port number, 0x0 is the
lowest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P10    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P10_M  ((DDRC_APB_DDRC_AXIW_PRI_P10_V)<<(DDRC_APB_DDRC_AXIW_PRI_P10_S))
#define DDRC_APB_DDRC_AXIW_PRI_P10_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P10_S  8
/* DDRC_APB_DDRC_AXIW_PRI_P9 : R/W ;bitpos:[7:4] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 9 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P9    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P9_M  ((DDRC_APB_DDRC_AXIW_PRI_P9_V)<<(DDRC_APB_DDRC_AXIW_PRI_P9_S))
#define DDRC_APB_DDRC_AXIW_PRI_P9_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P9_S  4
/* DDRC_APB_DDRC_AXIW_PRI_P8 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures AXI Write Port 8 priority. Must < AXI Write Port number, 0x0 is the l
owest priority..*/
#define DDRC_APB_DDRC_AXIW_PRI_P8    0x0000000F
#define DDRC_APB_DDRC_AXIW_PRI_P8_M  ((DDRC_APB_DDRC_AXIW_PRI_P8_V)<<(DDRC_APB_DDRC_AXIW_PRI_P8_S))
#define DDRC_APB_DDRC_AXIW_PRI_P8_V  0xF
#define DDRC_APB_DDRC_AXIW_PRI_P8_S  0

#define DDRC_APB_DDRC_AXIW_TOKEN0_REG          (DR_REG_DDRC_APB_BASE + 0x48)
/* DDRC_APB_DDRC_AXIW_TOKEN_P7 : R/W ;bitpos:[31:28] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 7 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P7    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P7_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P7_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P7_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P7_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P7_S  28
/* DDRC_APB_DDRC_AXIW_TOKEN_P6 : R/W ;bitpos:[27:24] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 6 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P6    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P6_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P6_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P6_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P6_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P6_S  24
/* DDRC_APB_DDRC_AXIW_TOKEN_P5 : R/W ;bitpos:[23:20] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 5 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P5    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P5_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P5_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P5_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P5_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P5_S  20
/* DDRC_APB_DDRC_AXIW_TOKEN_P4 : R/W ;bitpos:[19:16] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 4 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P4    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P4_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P4_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P4_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P4_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P4_S  16
/* DDRC_APB_DDRC_AXIW_TOKEN_P3 : R/W ;bitpos:[15:12] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 3 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P3    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P3_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P3_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P3_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P3_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P3_S  12
/* DDRC_APB_DDRC_AXIW_TOKEN_P2 : R/W ;bitpos:[11:8] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 2 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P2    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P2_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P2_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P2_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P2_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P2_S  8
/* DDRC_APB_DDRC_AXIW_TOKEN_P1 : R/W ;bitpos:[7:4] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 1 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P1    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P1_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P1_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P1_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P1_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P1_S  4
/* DDRC_APB_DDRC_AXIW_TOKEN_P0 : R/W ;bitpos:[3:0] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 0 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P0    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P0_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P0_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P0_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P0_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P0_S  0

#define DDRC_APB_DDRC_AXIW_TOKEN1_REG          (DR_REG_DDRC_APB_BASE + 0x4C)
/* DDRC_APB_DDRC_AXIW_TOKEN_P15 : R/W ;bitpos:[31:28] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 15 token. How many wr_cache entries this AXI port can
occupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P15    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P15_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P15_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P15_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P15_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P15_S  28
/* DDRC_APB_DDRC_AXIW_TOKEN_P14 : R/W ;bitpos:[27:24] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 14 token. How many wr_cache entries this AXI port can
occupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P14    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P14_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P14_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P14_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P14_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P14_S  24
/* DDRC_APB_DDRC_AXIW_TOKEN_P13 : R/W ;bitpos:[23:20] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 13 token. How many wr_cache entries this AXI port can
occupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P13    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P13_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P13_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P13_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P13_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P13_S  20
/* DDRC_APB_DDRC_AXIW_TOKEN_P12 : R/W ;bitpos:[19:16] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 12 token. How many wr_cache entries this AXI port can
occupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P12    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P12_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P12_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P12_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P12_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P12_S  16
/* DDRC_APB_DDRC_AXIW_TOKEN_P11 : R/W ;bitpos:[15:12] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 11 token. How many wr_cache entries this AXI port can
occupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P11    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P11_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P11_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P11_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P11_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P11_S  12
/* DDRC_APB_DDRC_AXIW_TOKEN_P10 : R/W ;bitpos:[11:8] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 10 token. How many wr_cache entries this AXI port can
occupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P10    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P10_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P10_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P10_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P10_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P10_S  8
/* DDRC_APB_DDRC_AXIW_TOKEN_P9 : R/W ;bitpos:[7:4] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 9 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P9    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P9_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P9_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P9_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P9_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P9_S  4
/* DDRC_APB_DDRC_AXIW_TOKEN_P8 : R/W ;bitpos:[3:0] ;default: 4'h8 ; */
/*description: Configures AXI Write Port 8 token. How many wr_cache entries this AXI port can o
ccupy at one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIW_TOKEN_P8    0x0000000F
#define DDRC_APB_DDRC_AXIW_TOKEN_P8_M  ((DDRC_APB_DDRC_AXIW_TOKEN_P8_V)<<(DDRC_APB_DDRC_AXIW_TOKEN_P8_S))
#define DDRC_APB_DDRC_AXIW_TOKEN_P8_V  0xF
#define DDRC_APB_DDRC_AXIW_TOKEN_P8_S  0

#define DDRC_APB_DDRC_AXIR_PRI0_REG          (DR_REG_DDRC_APB_BASE + 0x50)
/* DDRC_APB_DDRC_AXIR_PRI_P7 : R/W ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 7 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P7    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P7_M  ((DDRC_APB_DDRC_AXIR_PRI_P7_V)<<(DDRC_APB_DDRC_AXIR_PRI_P7_S))
#define DDRC_APB_DDRC_AXIR_PRI_P7_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P7_S  28
/* DDRC_APB_DDRC_AXIR_PRI_P6 : R/W ;bitpos:[27:24] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 6 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P6    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P6_M  ((DDRC_APB_DDRC_AXIR_PRI_P6_V)<<(DDRC_APB_DDRC_AXIR_PRI_P6_S))
#define DDRC_APB_DDRC_AXIR_PRI_P6_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P6_S  24
/* DDRC_APB_DDRC_AXIR_PRI_P5 : R/W ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 5 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P5    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P5_M  ((DDRC_APB_DDRC_AXIR_PRI_P5_V)<<(DDRC_APB_DDRC_AXIR_PRI_P5_S))
#define DDRC_APB_DDRC_AXIR_PRI_P5_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P5_S  20
/* DDRC_APB_DDRC_AXIR_PRI_P4 : R/W ;bitpos:[19:16] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 4 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P4    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P4_M  ((DDRC_APB_DDRC_AXIR_PRI_P4_V)<<(DDRC_APB_DDRC_AXIR_PRI_P4_S))
#define DDRC_APB_DDRC_AXIR_PRI_P4_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P4_S  16
/* DDRC_APB_DDRC_AXIR_PRI_P3 : R/W ;bitpos:[15:12] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 3 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P3    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P3_M  ((DDRC_APB_DDRC_AXIR_PRI_P3_V)<<(DDRC_APB_DDRC_AXIR_PRI_P3_S))
#define DDRC_APB_DDRC_AXIR_PRI_P3_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P3_S  12
/* DDRC_APB_DDRC_AXIR_PRI_P2 : R/W ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 2 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P2    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P2_M  ((DDRC_APB_DDRC_AXIR_PRI_P2_V)<<(DDRC_APB_DDRC_AXIR_PRI_P2_S))
#define DDRC_APB_DDRC_AXIR_PRI_P2_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P2_S  8
/* DDRC_APB_DDRC_AXIR_PRI_P1 : R/W ;bitpos:[7:4] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 1 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P1    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P1_M  ((DDRC_APB_DDRC_AXIR_PRI_P1_V)<<(DDRC_APB_DDRC_AXIR_PRI_P1_S))
#define DDRC_APB_DDRC_AXIR_PRI_P1_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P1_S  4
/* DDRC_APB_DDRC_AXIR_PRI_P0 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 0 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P0    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P0_M  ((DDRC_APB_DDRC_AXIR_PRI_P0_V)<<(DDRC_APB_DDRC_AXIR_PRI_P0_S))
#define DDRC_APB_DDRC_AXIR_PRI_P0_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P0_S  0

#define DDRC_APB_DDRC_AXIR_PRI1_REG          (DR_REG_DDRC_APB_BASE + 0x54)
/* DDRC_APB_DDRC_AXIR_PRI_P15 : R/W ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 15 priority. Must < AXI Read Port number, 0x0 is the lo
west priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P15    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P15_M  ((DDRC_APB_DDRC_AXIR_PRI_P15_V)<<(DDRC_APB_DDRC_AXIR_PRI_P15_S))
#define DDRC_APB_DDRC_AXIR_PRI_P15_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P15_S  28
/* DDRC_APB_DDRC_AXIR_PRI_P14 : R/W ;bitpos:[27:24] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 14 priority. Must < AXI Read Port number, 0x0 is the lo
west priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P14    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P14_M  ((DDRC_APB_DDRC_AXIR_PRI_P14_V)<<(DDRC_APB_DDRC_AXIR_PRI_P14_S))
#define DDRC_APB_DDRC_AXIR_PRI_P14_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P14_S  24
/* DDRC_APB_DDRC_AXIR_PRI_P13 : R/W ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 13 priority. Must < AXI Read Port number, 0x0 is the lo
west priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P13    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P13_M  ((DDRC_APB_DDRC_AXIR_PRI_P13_V)<<(DDRC_APB_DDRC_AXIR_PRI_P13_S))
#define DDRC_APB_DDRC_AXIR_PRI_P13_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P13_S  20
/* DDRC_APB_DDRC_AXIR_PRI_P12 : R/W ;bitpos:[19:16] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 12 priority. Must < AXI Read Port number, 0x0 is the lo
west priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P12    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P12_M  ((DDRC_APB_DDRC_AXIR_PRI_P12_V)<<(DDRC_APB_DDRC_AXIR_PRI_P12_S))
#define DDRC_APB_DDRC_AXIR_PRI_P12_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P12_S  16
/* DDRC_APB_DDRC_AXIR_PRI_P11 : R/W ;bitpos:[15:12] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 11 priority. Must < AXI Read Port number, 0x0 is the lo
west priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P11    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P11_M  ((DDRC_APB_DDRC_AXIR_PRI_P11_V)<<(DDRC_APB_DDRC_AXIR_PRI_P11_S))
#define DDRC_APB_DDRC_AXIR_PRI_P11_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P11_S  12
/* DDRC_APB_DDRC_AXIR_PRI_P10 : R/W ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 10 priority. Must < AXI Read Port number, 0x0 is the lo
west priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P10    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P10_M  ((DDRC_APB_DDRC_AXIR_PRI_P10_V)<<(DDRC_APB_DDRC_AXIR_PRI_P10_S))
#define DDRC_APB_DDRC_AXIR_PRI_P10_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P10_S  8
/* DDRC_APB_DDRC_AXIR_PRI_P9 : R/W ;bitpos:[7:4] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 9 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P9    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P9_M  ((DDRC_APB_DDRC_AXIR_PRI_P9_V)<<(DDRC_APB_DDRC_AXIR_PRI_P9_S))
#define DDRC_APB_DDRC_AXIR_PRI_P9_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P9_S  4
/* DDRC_APB_DDRC_AXIR_PRI_P8 : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures AXI Read Port 8 priority. Must < AXI Read Port number, 0x0 is the low
est priority..*/
#define DDRC_APB_DDRC_AXIR_PRI_P8    0x0000000F
#define DDRC_APB_DDRC_AXIR_PRI_P8_M  ((DDRC_APB_DDRC_AXIR_PRI_P8_V)<<(DDRC_APB_DDRC_AXIR_PRI_P8_S))
#define DDRC_APB_DDRC_AXIR_PRI_P8_V  0xF
#define DDRC_APB_DDRC_AXIR_PRI_P8_S  0

#define DDRC_APB_DDRC_AXIR_TOKEN0_REG          (DR_REG_DDRC_APB_BASE + 0x58)
/* DDRC_APB_DDRC_AXIR_TOKEN_P7 : R/W ;bitpos:[31:28] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 7 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P7    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P7_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P7_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P7_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P7_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P7_S  28
/* DDRC_APB_DDRC_AXIR_TOKEN_P6 : R/W ;bitpos:[27:24] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 6 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P6    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P6_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P6_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P6_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P6_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P6_S  24
/* DDRC_APB_DDRC_AXIR_TOKEN_P5 : R/W ;bitpos:[23:20] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 5 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P5    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P5_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P5_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P5_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P5_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P5_S  20
/* DDRC_APB_DDRC_AXIR_TOKEN_P4 : R/W ;bitpos:[19:16] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 4 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P4    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P4_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P4_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P4_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P4_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P4_S  16
/* DDRC_APB_DDRC_AXIR_TOKEN_P3 : R/W ;bitpos:[15:12] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 3 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P3    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P3_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P3_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P3_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P3_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P3_S  12
/* DDRC_APB_DDRC_AXIR_TOKEN_P2 : R/W ;bitpos:[11:8] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 2 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P2    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P2_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P2_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P2_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P2_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P2_S  8
/* DDRC_APB_DDRC_AXIR_TOKEN_P1 : R/W ;bitpos:[7:4] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 1 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P1    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P1_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P1_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P1_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P1_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P1_S  4
/* DDRC_APB_DDRC_AXIR_TOKEN_P0 : R/W ;bitpos:[3:0] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 0 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P0    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P0_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P0_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P0_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P0_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P0_S  0

#define DDRC_APB_DDRC_AXIR_TOKEN1_REG          (DR_REG_DDRC_APB_BASE + 0x5C)
/* DDRC_APB_DDRC_AXIR_TOKEN_P15 : R/W ;bitpos:[31:28] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 15 token. How many rd_cache entries this AXI port can o
ccupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P15    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P15_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P15_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P15_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P15_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P15_S  28
/* DDRC_APB_DDRC_AXIR_TOKEN_P14 : R/W ;bitpos:[27:24] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 14 token. How many rd_cache entries this AXI port can o
ccupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P14    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P14_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P14_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P14_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P14_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P14_S  24
/* DDRC_APB_DDRC_AXIR_TOKEN_P13 : R/W ;bitpos:[23:20] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 13 token. How many rd_cache entries this AXI port can o
ccupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P13    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P13_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P13_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P13_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P13_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P13_S  20
/* DDRC_APB_DDRC_AXIR_TOKEN_P12 : R/W ;bitpos:[19:16] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 12 token. How many rd_cache entries this AXI port can o
ccupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P12    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P12_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P12_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P12_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P12_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P12_S  16
/* DDRC_APB_DDRC_AXIR_TOKEN_P11 : R/W ;bitpos:[15:12] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 11 token. How many rd_cache entries this AXI port can o
ccupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P11    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P11_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P11_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P11_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P11_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P11_S  12
/* DDRC_APB_DDRC_AXIR_TOKEN_P10 : R/W ;bitpos:[11:8] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 10 token. How many rd_cache entries this AXI port can o
ccupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P10    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P10_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P10_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P10_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P10_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P10_S  8
/* DDRC_APB_DDRC_AXIR_TOKEN_P9 : R/W ;bitpos:[7:4] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 9 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P9    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P9_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P9_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P9_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P9_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P9_S  4
/* DDRC_APB_DDRC_AXIR_TOKEN_P8 : R/W ;bitpos:[3:0] ;default: 4'h8 ; */
/*description: Configures AXI Read Port 8 token. How many rd_cache entries this AXI port can oc
cupy in one arbiter round, must > 0..*/
#define DDRC_APB_DDRC_AXIR_TOKEN_P8    0x0000000F
#define DDRC_APB_DDRC_AXIR_TOKEN_P8_M  ((DDRC_APB_DDRC_AXIR_TOKEN_P8_V)<<(DDRC_APB_DDRC_AXIR_TOKEN_P8_S))
#define DDRC_APB_DDRC_AXIR_TOKEN_P8_V  0xF
#define DDRC_APB_DDRC_AXIR_TOKEN_P8_S  0

#define DDRC_APB_DDRC_AXIR_AGING_TH0_REG          (DR_REG_DDRC_APB_BASE + 0x60)
/* DDRC_APB_DDRC_AXIR_AGING_TH_P3 : R/W ;bitpos:[31:24] ;default: 8'ha ; */
/*description: Configures AXI Read Port 3 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P3    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P3_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P3_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P3_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P3_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P3_S  24
/* DDRC_APB_DDRC_AXIR_AGING_TH_P2 : R/W ;bitpos:[23:16] ;default: 8'ha ; */
/*description: Configures AXI Read Port 2 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P2    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P2_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P2_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P2_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P2_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P2_S  16
/* DDRC_APB_DDRC_AXIR_AGING_TH_P1 : R/W ;bitpos:[15:8] ;default: 8'ha ; */
/*description: Configures AXI Read Port 1 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P1    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P1_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P1_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P1_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P1_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P1_S  8
/* DDRC_APB_DDRC_AXIR_AGING_TH_P0 : R/W ;bitpos:[7:0] ;default: 8'ha ; */
/*description: Configures AXI Read Port 0 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P0    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P0_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P0_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P0_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P0_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P0_S  0

#define DDRC_APB_DDRC_AXIR_AGING_TH1_REG          (DR_REG_DDRC_APB_BASE + 0x64)
/* DDRC_APB_DDRC_AXIR_AGING_TH_P7 : R/W ;bitpos:[31:24] ;default: 8'ha ; */
/*description: Configures AXI Read Port 7 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P7    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P7_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P7_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P7_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P7_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P7_S  24
/* DDRC_APB_DDRC_AXIR_AGING_TH_P6 : R/W ;bitpos:[23:16] ;default: 8'ha ; */
/*description: Configures AXI Read Port 6 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P6    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P6_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P6_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P6_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P6_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P6_S  16
/* DDRC_APB_DDRC_AXIR_AGING_TH_P5 : R/W ;bitpos:[15:8] ;default: 8'ha ; */
/*description: Configures AXI Read Port 5 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P5    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P5_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P5_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P5_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P5_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P5_S  8
/* DDRC_APB_DDRC_AXIR_AGING_TH_P4 : R/W ;bitpos:[7:0] ;default: 8'ha ; */
/*description: Configures AXI Read Port 4 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P4    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P4_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P4_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P4_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P4_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P4_S  0

#define DDRC_APB_DDRC_AXIR_AGING_TH2_REG          (DR_REG_DDRC_APB_BASE + 0x68)
/* DDRC_APB_DDRC_AXIR_AGING_TH_P11 : R/W ;bitpos:[31:24] ;default: 8'ha ; */
/*description: Configures AXI Read Port 11 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESC
ALE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P11    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P11_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P11_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P11_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P11_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P11_S  24
/* DDRC_APB_DDRC_AXIR_AGING_TH_P10 : R/W ;bitpos:[23:16] ;default: 8'ha ; */
/*description: Configures AXI Read Port 10 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESC
ALE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P10    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P10_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P10_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P10_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P10_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P10_S  16
/* DDRC_APB_DDRC_AXIR_AGING_TH_P9 : R/W ;bitpos:[15:8] ;default: 8'ha ; */
/*description: Configures AXI Read Port 9 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P9    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P9_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P9_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P9_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P9_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P9_S  8
/* DDRC_APB_DDRC_AXIR_AGING_TH_P8 : R/W ;bitpos:[7:0] ;default: 8'ha ; */
/*description: Configures AXI Read Port 8 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCA
LE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P8    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P8_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P8_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P8_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P8_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P8_S  0

#define DDRC_APB_DDRC_AXIR_AGING_TH3_REG          (DR_REG_DDRC_APB_BASE + 0x6C)
/* DDRC_APB_DDRC_AXIR_AGING_TH_P15 : R/W ;bitpos:[31:24] ;default: 8'ha ; */
/*description: Configures AXI Read Port 15 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESC
ALE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P15    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P15_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P15_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P15_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P15_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P15_S  24
/* DDRC_APB_DDRC_AXIR_AGING_TH_P14 : R/W ;bitpos:[23:16] ;default: 8'ha ; */
/*description: Configures AXI Read Port 14 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESC
ALE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P14    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P14_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P14_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P14_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P14_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P14_S  16
/* DDRC_APB_DDRC_AXIR_AGING_TH_P13 : R/W ;bitpos:[15:8] ;default: 8'ha ; */
/*description: Configures AXI Read Port 13 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESC
ALE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P13    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P13_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P13_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P13_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P13_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P13_S  8
/* DDRC_APB_DDRC_AXIR_AGING_TH_P12 : R/W ;bitpos:[7:0] ;default: 8'ha ; */
/*description: Configures AXI Read Port 12 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESC
ALE  * core_clk cycles..*/
#define DDRC_APB_DDRC_AXIR_AGING_TH_P12    0x000000FF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P12_M  ((DDRC_APB_DDRC_AXIR_AGING_TH_P12_V)<<(DDRC_APB_DDRC_AXIR_AGING_TH_P12_S))
#define DDRC_APB_DDRC_AXIR_AGING_TH_P12_V  0xFF
#define DDRC_APB_DDRC_AXIR_AGING_TH_P12_S  0

#define DDRC_APB_DDRC_AXIR_AGING_PRE_REG          (DR_REG_DDRC_APB_BASE + 0x70)
/* DDRC_APB_DDRC_AXIR_AGING_PRESCALE : R/W ;bitpos:[15:0] ;default: 16'h80 ; */
/*description: Configures AXI read port aging timer prescale..*/
#define DDRC_APB_DDRC_AXIR_AGING_PRESCALE    0x0000FFFF
#define DDRC_APB_DDRC_AXIR_AGING_PRESCALE_M  ((DDRC_APB_DDRC_AXIR_AGING_PRESCALE_V)<<(DDRC_APB_DDRC_AXIR_AGING_PRESCALE_S))
#define DDRC_APB_DDRC_AXIR_AGING_PRESCALE_V  0xFFFF
#define DDRC_APB_DDRC_AXIR_AGING_PRESCALE_S  0

#define DDRC_APB_DDRC_AXI_EN_REG          (DR_REG_DDRC_APB_BASE + 0x74)
/* DDRC_APB_DDRC_AXIW_EN : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Configures whether to enable AXI Read Port 15~0. For bit n:; 0 : Disable AXI Rea
d Port n; 1 : Enable AXI Read Port n.*/
#define DDRC_APB_DDRC_AXIW_EN    0x0000FFFF
#define DDRC_APB_DDRC_AXIW_EN_M  ((DDRC_APB_DDRC_AXIW_EN_V)<<(DDRC_APB_DDRC_AXIW_EN_S))
#define DDRC_APB_DDRC_AXIW_EN_V  0xFFFF
#define DDRC_APB_DDRC_AXIW_EN_S  16
/* DDRC_APB_DDRC_AXIR_EN : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Configures whether to enable AXI Write Port 15~0. For bit n:; 0 : Disable AXI Wr
ite Port n; 1 : Enable AXI Write Port n.*/
#define DDRC_APB_DDRC_AXIR_EN    0x0000FFFF
#define DDRC_APB_DDRC_AXIR_EN_M  ((DDRC_APB_DDRC_AXIR_EN_V)<<(DDRC_APB_DDRC_AXIR_EN_S))
#define DDRC_APB_DDRC_AXIR_EN_V  0xFFFF
#define DDRC_APB_DDRC_AXIR_EN_S  0

#define DDRC_APB_DDRC_CACHE_TH_REG          (DR_REG_DDRC_APB_BASE + 0x78)
/* DDRC_APB_DDRC_ECC_TH : R/W ;bitpos:[23:16] ;default: 8'hd ; */
/*description: Configures ecc_cache almost full threshold. Must < ecc_cache depth..*/
#define DDRC_APB_DDRC_ECC_TH    0x000000FF
#define DDRC_APB_DDRC_ECC_TH_M  ((DDRC_APB_DDRC_ECC_TH_V)<<(DDRC_APB_DDRC_ECC_TH_S))
#define DDRC_APB_DDRC_ECC_TH_V  0xFF
#define DDRC_APB_DDRC_ECC_TH_S  16
/* DDRC_APB_DDRC_WRC_TH : R/W ;bitpos:[15:8] ;default: 8'h18 ; */
/*description: Configures wr_cache almost full threshold. Must < wr_cache depth..*/
#define DDRC_APB_DDRC_WRC_TH    0x000000FF
#define DDRC_APB_DDRC_WRC_TH_M  ((DDRC_APB_DDRC_WRC_TH_V)<<(DDRC_APB_DDRC_WRC_TH_S))
#define DDRC_APB_DDRC_WRC_TH_V  0xFF
#define DDRC_APB_DDRC_WRC_TH_S  8
/* DDRC_APB_DDRC_RMW_TH : R/W ;bitpos:[7:0] ;default: 8'h6 ; */
/*description: Configures rmw_cache almost full threshold. Must < rmw_cache depth..*/
#define DDRC_APB_DDRC_RMW_TH    0x000000FF
#define DDRC_APB_DDRC_RMW_TH_M  ((DDRC_APB_DDRC_RMW_TH_V)<<(DDRC_APB_DDRC_RMW_TH_S))
#define DDRC_APB_DDRC_RMW_TH_V  0xFF
#define DDRC_APB_DDRC_RMW_TH_S  0

#define DDRC_APB_DDRC_CREDIT_CTRL_REG          (DR_REG_DDRC_APB_BASE + 0x7C)
/* DDRC_APB_DDRC_AESD_BYP_CREDIT : R/W ;bitpos:[31:24] ;default: 8'h14 ; */
/*description: Configures AES DEC bypass credit.; If disable AES in all DDR space, set this fie
ld to 0xff for highest thought.; If enable AES in DDR space, set this field to (
byp_fifo depth in aes_ctrl) + byp_more, where (0 <= byp_more <=8) and (byp_more
+ en_more <= 8)..*/
#define DDRC_APB_DDRC_AESD_BYP_CREDIT    0x000000FF
#define DDRC_APB_DDRC_AESD_BYP_CREDIT_M  ((DDRC_APB_DDRC_AESD_BYP_CREDIT_V)<<(DDRC_APB_DDRC_AESD_BYP_CREDIT_S))
#define DDRC_APB_DDRC_AESD_BYP_CREDIT_V  0xFF
#define DDRC_APB_DDRC_AESD_BYP_CREDIT_S  24
/* DDRC_APB_DDRC_AES_EN_CREDIT : R/W ;bitpos:[23:16] ;default: 8'h24 ; */
/*description: Configures AES enable credit.; If enable AES in all DDR space, set this field to
 (AES outstanding number) + 8 for highest thought.; If enable AES in part of DDR
 space, set this field to (AES outstanding number) + en_more, where (0 <= en_mor
e <=8) and (byp_more + en_more <= 8)..*/
#define DDRC_APB_DDRC_AES_EN_CREDIT    0x000000FF
#define DDRC_APB_DDRC_AES_EN_CREDIT_M  ((DDRC_APB_DDRC_AES_EN_CREDIT_V)<<(DDRC_APB_DDRC_AES_EN_CREDIT_S))
#define DDRC_APB_DDRC_AES_EN_CREDIT_V  0xFF
#define DDRC_APB_DDRC_AES_EN_CREDIT_S  16

#define DDRC_APB_DDRC_DDR_STATIC_CFG_REG          (DR_REG_DDRC_APB_BASE + 0xC0)
/* DDRC_APB_DDRC_RD_ODT_EN : R/W ;bitpos:[17] ;default: 1'h1 ; */
/*description: Configures whether to turn on remote ODTs port during a read from DRAM.; 0 : Tur
n off; 1 : Turn on.*/
#define DDRC_APB_DDRC_RD_ODT_EN    (BIT(17))
#define DDRC_APB_DDRC_RD_ODT_EN_M  (BIT(17))
#define DDRC_APB_DDRC_RD_ODT_EN_V  0x1
#define DDRC_APB_DDRC_RD_ODT_EN_S  17
/* DDRC_APB_DDRC_WR_ODT_EN : R/W ;bitpos:[16] ;default: 1'h1 ; */
/*description: Configures whether to turn on remote ODTs port during a write to DRAM.; 0 : Turn
 off; 1 : Turn on.*/
#define DDRC_APB_DDRC_WR_ODT_EN    (BIT(16))
#define DDRC_APB_DDRC_WR_ODT_EN_M  (BIT(16))
#define DDRC_APB_DDRC_WR_ODT_EN_V  0x1
#define DDRC_APB_DDRC_WR_ODT_EN_S  16
/* DDRC_APB_DDRC_DERATE_VALUE : R/W ;bitpos:[10:8] ;default: 3'h2 ; */
/*description: Configures the required cycles for de-rating. It can be determined by RU(1.875ns
/tCK), HW will auto do the de-rate..*/
#define DDRC_APB_DDRC_DERATE_VALUE    0x00000007
#define DDRC_APB_DDRC_DERATE_VALUE_M  ((DDRC_APB_DDRC_DERATE_VALUE_V)<<(DDRC_APB_DDRC_DERATE_VALUE_S))
#define DDRC_APB_DDRC_DERATE_VALUE_V  0x7
#define DDRC_APB_DDRC_DERATE_VALUE_S  8
/* DDRC_APB_DDRC_BURST_LENGTH : R/W ;bitpos:[3:0] ;default: 4'h4 ; */
/*description: Configures DRAM burst length. ; 0x1: BL2; 0x2: BL4; 0x4: BL8; 0x8: BL16; Others:
 Reserved.*/
#define DDRC_APB_DDRC_BURST_LENGTH    0x0000000F
#define DDRC_APB_DDRC_BURST_LENGTH_M  ((DDRC_APB_DDRC_BURST_LENGTH_V)<<(DDRC_APB_DDRC_BURST_LENGTH_S))
#define DDRC_APB_DDRC_BURST_LENGTH_V  0xF
#define DDRC_APB_DDRC_BURST_LENGTH_S  0

#define DDRC_APB_DDRC_DFI_STATIC_CFG_REG          (DR_REG_DDRC_APB_BASE + 0xC4)
/* DDRC_APB_DDRC_DFI_FREQUENCY : R/W ;bitpos:[28:24] ;default: 5'h0 ; */
/*description: Configures the value drive on dfi_frequency signal..*/
#define DDRC_APB_DDRC_DFI_FREQUENCY    0x0000001F
#define DDRC_APB_DDRC_DFI_FREQUENCY_M  ((DDRC_APB_DDRC_DFI_FREQUENCY_V)<<(DDRC_APB_DDRC_DFI_FREQUENCY_S))
#define DDRC_APB_DDRC_DFI_FREQUENCY_V  0x1F
#define DDRC_APB_DDRC_DFI_FREQUENCY_S  24
/* DDRC_APB_DDRC_LP_WAKEUP_DPD : R/W ;bitpos:[19:16] ;default: 4'h0 ; */
/*description: Configures the value drive on dfi_lp_wakeup signal when Deep Power-Down mode is
entered..*/
#define DDRC_APB_DDRC_LP_WAKEUP_DPD    0x0000000F
#define DDRC_APB_DDRC_LP_WAKEUP_DPD_M  ((DDRC_APB_DDRC_LP_WAKEUP_DPD_V)<<(DDRC_APB_DDRC_LP_WAKEUP_DPD_S))
#define DDRC_APB_DDRC_LP_WAKEUP_DPD_V  0xF
#define DDRC_APB_DDRC_LP_WAKEUP_DPD_S  16
/* DDRC_APB_DDRC_LP_WAKEUP_SR : R/W ;bitpos:[15:12] ;default: 4'h0 ; */
/*description: Configures the value drive on dfi_lp_wakeup signal when Self-Refresh mode is ent
ered..*/
#define DDRC_APB_DDRC_LP_WAKEUP_SR    0x0000000F
#define DDRC_APB_DDRC_LP_WAKEUP_SR_M  ((DDRC_APB_DDRC_LP_WAKEUP_SR_V)<<(DDRC_APB_DDRC_LP_WAKEUP_SR_S))
#define DDRC_APB_DDRC_LP_WAKEUP_SR_V  0xF
#define DDRC_APB_DDRC_LP_WAKEUP_SR_S  12
/* DDRC_APB_DDRC_LP_WAKEUP_PD : R/W ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: Configures the value drive on dfi_lp_wakeup signal when Power-Down mode is enter
ed..*/
#define DDRC_APB_DDRC_LP_WAKEUP_PD    0x0000000F
#define DDRC_APB_DDRC_LP_WAKEUP_PD_M  ((DDRC_APB_DDRC_LP_WAKEUP_PD_V)<<(DDRC_APB_DDRC_LP_WAKEUP_PD_S))
#define DDRC_APB_DDRC_LP_WAKEUP_PD_V  0xF
#define DDRC_APB_DDRC_LP_WAKEUP_PD_S  8
/* DDRC_APB_DDRC_LP_EN_DPD : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether to enable DFI Low Power interface handshaking during Deep Pow
er-Down Entry/Exit..*/
#define DDRC_APB_DDRC_LP_EN_DPD    (BIT(2))
#define DDRC_APB_DDRC_LP_EN_DPD_M  (BIT(2))
#define DDRC_APB_DDRC_LP_EN_DPD_V  0x1
#define DDRC_APB_DDRC_LP_EN_DPD_S  2
/* DDRC_APB_DDRC_LP_EN_SR : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether to enable DFI Low Power interface handshaking during Self-Ref
resh Entry/Exit..*/
#define DDRC_APB_DDRC_LP_EN_SR    (BIT(1))
#define DDRC_APB_DDRC_LP_EN_SR_M  (BIT(1))
#define DDRC_APB_DDRC_LP_EN_SR_V  0x1
#define DDRC_APB_DDRC_LP_EN_SR_S  1
/* DDRC_APB_DDRC_LP_EN_PD : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether to enable DFI Low Power interface handshaking during Power-Do
wn Entry/Exit..*/
#define DDRC_APB_DDRC_LP_EN_PD    (BIT(0))
#define DDRC_APB_DDRC_LP_EN_PD_M  (BIT(0))
#define DDRC_APB_DDRC_LP_EN_PD_V  0x1
#define DDRC_APB_DDRC_LP_EN_PD_S  0

#define DDRC_APB_DDRC_DYNC_CFG_REG          (DR_REG_DDRC_APB_BASE + 0xD0)
/* DDRC_APB_DDRC_DFI_RESET_N : R/W ;bitpos:[28] ;default: 1'h1 ; */
/*description: Configures whether to force DFI Interface signal dfi_reset_n to 0.; 0: Force dfi
_reset_n to 0 ; 1: Not force dfi_reset_n.*/
#define DDRC_APB_DDRC_DFI_RESET_N    (BIT(28))
#define DDRC_APB_DDRC_DFI_RESET_N_M  (BIT(28))
#define DDRC_APB_DDRC_DFI_RESET_N_V  0x1
#define DDRC_APB_DDRC_DFI_RESET_N_S  28
/* DDRC_APB_DDRC_DLL_OFF_MODE : R/W ;bitpos:[24] ;default: 1'h0 ; */
/*description: Configures whether  DDR3(L) work at DLL-off mode. Only used for DDR3(L).; 0: DDR
3(L) work at DLL-on mode; 1: DDR3(L) work at DLL-off mode.*/
#define DDRC_APB_DDRC_DLL_OFF_MODE    (BIT(24))
#define DDRC_APB_DDRC_DLL_OFF_MODE_M  (BIT(24))
#define DDRC_APB_DDRC_DLL_OFF_MODE_V  0x1
#define DDRC_APB_DDRC_DLL_OFF_MODE_S  24
/* DDRC_APB_DDRC_EN_DRAM_CLK_DISABLE : R/W ;bitpos:[16] ;default: 1'h1 ; */
/*description: Configures whether to enable the assertion of dfi_dram_clk_disable whenever a cl
ock is not required by the DRAM.; 0 : dfi_dram_clk_disable is never asserted; 1
: dfi_dram_clk_disable is asserted when DRAM not require clock, for example in P
ower-Down, Self-Refresh, Deep Power-Down mode.*/
#define DDRC_APB_DDRC_EN_DRAM_CLK_DISABLE    (BIT(16))
#define DDRC_APB_DDRC_EN_DRAM_CLK_DISABLE_M  (BIT(16))
#define DDRC_APB_DDRC_EN_DRAM_CLK_DISABLE_V  0x1
#define DDRC_APB_DDRC_EN_DRAM_CLK_DISABLE_S  16
/* DDRC_APB_DDRC_CTRLUPD_REQ_TRIGGER : R/W/SC ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures whether to trigger a DFI Interface signal dfi_ctrlupd_req to the PHY.
 When this request finished, the bit is automatically cleared.; 0 : No effect; 1
 : Trigger.*/
#define DDRC_APB_DDRC_CTRLUPD_REQ_TRIGGER    (BIT(12))
#define DDRC_APB_DDRC_CTRLUPD_REQ_TRIGGER_M  (BIT(12))
#define DDRC_APB_DDRC_CTRLUPD_REQ_TRIGGER_V  0x1
#define DDRC_APB_DDRC_CTRLUPD_REQ_TRIGGER_S  12
/* DDRC_APB_DDRC_DIS_AUTO_CTRLUPD : R/W ;bitpos:[8] ;default: 1'h1 ; */
/*description: Configures whether to disable HW automatic send DFI Interface signal dfi_ctrlupd
_req.; 0 : Enable; 1 : Disable.*/
#define DDRC_APB_DDRC_DIS_AUTO_CTRLUPD    (BIT(8))
#define DDRC_APB_DDRC_DIS_AUTO_CTRLUPD_M  (BIT(8))
#define DDRC_APB_DDRC_DIS_AUTO_CTRLUPD_V  0x1
#define DDRC_APB_DDRC_DIS_AUTO_CTRLUPD_S  8
/* DDRC_APB_DDRC_DFI_INIT_COMPLETE : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: Represents DFI Interface signal dfi_init_complete value..*/
#define DDRC_APB_DDRC_DFI_INIT_COMPLETE    (BIT(1))
#define DDRC_APB_DDRC_DFI_INIT_COMPLETE_M  (BIT(1))
#define DDRC_APB_DDRC_DFI_INIT_COMPLETE_V  0x1
#define DDRC_APB_DDRC_DFI_INIT_COMPLETE_S  1
/* DDRC_APB_DDRC_DFI_INIT_START : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures DFI interface signal dfi_init_start value..*/
#define DDRC_APB_DDRC_DFI_INIT_START    (BIT(0))
#define DDRC_APB_DDRC_DFI_INIT_START_M  (BIT(0))
#define DDRC_APB_DDRC_DFI_INIT_START_V  0x1
#define DDRC_APB_DDRC_DFI_INIT_START_S  0

#define DDRC_APB_DDRC_DDR_STATUS_REG          (DR_REG_DDRC_APB_BASE + 0xE0)
/* DDRC_APB_DDRC_OPERATING_MODE : RO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Represents DRAM operating mode.; 0x0: Initial; 0x1: Normal; 0x2: Power-Down; 0x3
: Self-Refresh; 0x4: Deep Power-Down; Others: Reserved.*/
#define DDRC_APB_DDRC_OPERATING_MODE    0x00000007
#define DDRC_APB_DDRC_OPERATING_MODE_M  ((DDRC_APB_DDRC_OPERATING_MODE_V)<<(DDRC_APB_DDRC_OPERATING_MODE_S))
#define DDRC_APB_DDRC_OPERATING_MODE_V  0x7
#define DDRC_APB_DDRC_OPERATING_MODE_S  0

#define DDRC_APB_DDRC_DDR_INIT0_REG          (DR_REG_DDRC_APB_BASE + 0x100)
/* DDRC_APB_DDRC_DRAM_INIT_EN : R/W ;bitpos:[29:28] ;default: 2'h1 ; */
/*description: Configures DDRC initialization mode.; 0x0: Reserved ; 0x1: DRAM Initialization i
s run after dfi_ctrl reset; 0x2: Reserved ; 0x3: DRAM Initialization is skipped
after dfi_ctrl reset, DDRC starts up in Self-Refresh Mode.*/
#define DDRC_APB_DDRC_DRAM_INIT_EN    0x00000003
#define DDRC_APB_DDRC_DRAM_INIT_EN_M  ((DDRC_APB_DDRC_DRAM_INIT_EN_V)<<(DDRC_APB_DDRC_DRAM_INIT_EN_S))
#define DDRC_APB_DDRC_DRAM_INIT_EN_V  0x3
#define DDRC_APB_DDRC_DRAM_INIT_EN_S  28
/* DDRC_APB_DDRC_T_POST_CKE_X1024 : R/W ;bitpos:[25:16] ;default: 10'h1 ; */
/*description: Configures initialization sequence timing value from driving CKE high to start t
he SDRAM initialization sequence minimum interval, unit is DFI PHY clock cycle *
 1024..*/
#define DDRC_APB_DDRC_T_POST_CKE_X1024    0x000003FF
#define DDRC_APB_DDRC_T_POST_CKE_X1024_M  ((DDRC_APB_DDRC_T_POST_CKE_X1024_V)<<(DDRC_APB_DDRC_T_POST_CKE_X1024_S))
#define DDRC_APB_DDRC_T_POST_CKE_X1024_V  0x3FF
#define DDRC_APB_DDRC_T_POST_CKE_X1024_S  16
/* DDRC_APB_DDRC_T_PRE_CKE_X1024 : R/W ;bitpos:[11:0] ;default: 12'h187 ; */
/*description: Configures initialization sequence timing value from release reset to driving CK
E high minimum interval, unit is DFI PHY clock cycle * 1024..*/
#define DDRC_APB_DDRC_T_PRE_CKE_X1024    0x00000FFF
#define DDRC_APB_DDRC_T_PRE_CKE_X1024_M  ((DDRC_APB_DDRC_T_PRE_CKE_X1024_V)<<(DDRC_APB_DDRC_T_PRE_CKE_X1024_S))
#define DDRC_APB_DDRC_T_PRE_CKE_X1024_V  0xFFF
#define DDRC_APB_DDRC_T_PRE_CKE_X1024_S  0

#define DDRC_APB_DDRC_DDR_INIT1_REG          (DR_REG_DDRC_APB_BASE + 0x104)
/* DDRC_APB_DDRC_T_DRAM_RSTN_X1024 : R/W ;bitpos:[24:16] ;default: 9'h9d ; */
/*description: Configures initialization sequence timing value of SDRAM reset signal assert min
imum width, unit is DFI PHY clock cycle * 1024. Only used for DDR3(L)..*/
#define DDRC_APB_DDRC_T_DRAM_RSTN_X1024    0x000001FF
#define DDRC_APB_DDRC_T_DRAM_RSTN_X1024_M  ((DDRC_APB_DDRC_T_DRAM_RSTN_X1024_V)<<(DDRC_APB_DDRC_T_DRAM_RSTN_X1024_S))
#define DDRC_APB_DDRC_T_DRAM_RSTN_X1024_V  0x1FF
#define DDRC_APB_DDRC_T_DRAM_RSTN_X1024_S  16
/* DDRC_APB_DDRC_T_MAX_AUTO_INIT_X1024 : R/W ;bitpos:[9:0] ;default: 10'h8 ; */
/*description: Configures initialization sequence timing value of tINIT5 (the maximum duration
of the auto initialization), unit is DFI PHY clock cycle * 1024. Only used for L
PDDR3/2..*/
#define DDRC_APB_DDRC_T_MAX_AUTO_INIT_X1024    0x000003FF
#define DDRC_APB_DDRC_T_MAX_AUTO_INIT_X1024_M  ((DDRC_APB_DDRC_T_MAX_AUTO_INIT_X1024_V)<<(DDRC_APB_DDRC_T_MAX_AUTO_INIT_X1024_S))
#define DDRC_APB_DDRC_T_MAX_AUTO_INIT_X1024_V  0x3FF
#define DDRC_APB_DDRC_T_MAX_AUTO_INIT_X1024_S  0

#define DDRC_APB_DDRC_DDR_INIT2_REG          (DR_REG_DDRC_APB_BASE + 0x108)
/* DDRC_APB_DDRC_INIT_MR1 : R/W ;bitpos:[31:16] ;default: 16'h44 ; */
/*description: Configures MR1 value write to DRAM in initialization sequence..*/
#define DDRC_APB_DDRC_INIT_MR1    0x0000FFFF
#define DDRC_APB_DDRC_INIT_MR1_M  ((DDRC_APB_DDRC_INIT_MR1_V)<<(DDRC_APB_DDRC_INIT_MR1_S))
#define DDRC_APB_DDRC_INIT_MR1_V  0xFFFF
#define DDRC_APB_DDRC_INIT_MR1_S  16
/* DDRC_APB_DDRC_INIT_MR0 : R/W ;bitpos:[15:0] ;default: 16'hd70 ; */
/*description: Configures MR0 value write to DRAM in initialization sequence..*/
#define DDRC_APB_DDRC_INIT_MR0    0x0000FFFF
#define DDRC_APB_DDRC_INIT_MR0_M  ((DDRC_APB_DDRC_INIT_MR0_V)<<(DDRC_APB_DDRC_INIT_MR0_S))
#define DDRC_APB_DDRC_INIT_MR0_V  0xFFFF
#define DDRC_APB_DDRC_INIT_MR0_S  0

#define DDRC_APB_DDRC_DDR_INIT3_REG          (DR_REG_DDRC_APB_BASE + 0x10C)
/* DDRC_APB_DDRC_INIT_MR3 : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Configures MR3 value write to DRAM in initialization sequence..*/
#define DDRC_APB_DDRC_INIT_MR3    0x0000FFFF
#define DDRC_APB_DDRC_INIT_MR3_M  ((DDRC_APB_DDRC_INIT_MR3_V)<<(DDRC_APB_DDRC_INIT_MR3_S))
#define DDRC_APB_DDRC_INIT_MR3_V  0xFFFF
#define DDRC_APB_DDRC_INIT_MR3_S  16
/* DDRC_APB_DDRC_INIT_MR2 : R/W ;bitpos:[15:0] ;default: 16'h18 ; */
/*description: Configures MR2 value write to DRAM in initialization sequence..*/
#define DDRC_APB_DDRC_INIT_MR2    0x0000FFFF
#define DDRC_APB_DDRC_INIT_MR2_M  ((DDRC_APB_DDRC_INIT_MR2_V)<<(DDRC_APB_DDRC_INIT_MR2_S))
#define DDRC_APB_DDRC_INIT_MR2_V  0xFFFF
#define DDRC_APB_DDRC_INIT_MR2_S  0

#define DDRC_APB_DDRC_DDR_TIMING0_REG          (DR_REG_DDRC_APB_BASE + 0x140)
/* DDRC_APB_DDRC_T_CKDPDX : R/W ;bitpos:[23:20] ;default: 4'h2 ; */
/*description: Configures timing value of tCKDPDX (minimum time CK is maintained as a valid clo
ck before deep-power-down Exit), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_CKDPDX    0x0000000F
#define DDRC_APB_DDRC_T_CKDPDX_M  ((DDRC_APB_DDRC_T_CKDPDX_V)<<(DDRC_APB_DDRC_T_CKDPDX_S))
#define DDRC_APB_DDRC_T_CKDPDX_V  0xF
#define DDRC_APB_DDRC_T_CKDPDX_S  20
/* DDRC_APB_DDRC_T_CKDPDE : R/W ;bitpos:[19:16] ;default: 4'h2 ; */
/*description: Configures timing value of tCKDPDE (minimum time CK is maintained as a valid clo
ck after deep-power-down Entry), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_CKDPDE    0x0000000F
#define DDRC_APB_DDRC_T_CKDPDE_M  ((DDRC_APB_DDRC_T_CKDPDE_V)<<(DDRC_APB_DDRC_T_CKDPDE_S))
#define DDRC_APB_DDRC_T_CKDPDE_V  0xF
#define DDRC_APB_DDRC_T_CKDPDE_S  16
/* DDRC_APB_DDRC_T_CKSRX : R/W ;bitpos:[15:12] ;default: 4'h8 ; */
/*description: Configures timing value of tCKSRX (minimum time CK is maintained as a valid cloc
k before self-refresh Exit), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_CKSRX    0x0000000F
#define DDRC_APB_DDRC_T_CKSRX_M  ((DDRC_APB_DDRC_T_CKSRX_V)<<(DDRC_APB_DDRC_T_CKSRX_S))
#define DDRC_APB_DDRC_T_CKSRX_V  0xF
#define DDRC_APB_DDRC_T_CKSRX_S  12
/* DDRC_APB_DDRC_T_CKSRE : R/W ;bitpos:[11:8] ;default: 4'h8 ; */
/*description: Configures timing value of tCKSRE (minimum time CK is maintained as a valid cloc
k after self-refresh Entry), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_CKSRE    0x0000000F
#define DDRC_APB_DDRC_T_CKSRE_M  ((DDRC_APB_DDRC_T_CKSRE_V)<<(DDRC_APB_DDRC_T_CKSRE_S))
#define DDRC_APB_DDRC_T_CKSRE_V  0xF
#define DDRC_APB_DDRC_T_CKSRE_S  8
/* DDRC_APB_DDRC_T_CKPDX : R/W ;bitpos:[7:4] ;default: 4'h8 ; */
/*description: Configures timing value of tCKPDX (minimum time CK is maintained as a valid cloc
k before power-down Exit), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_CKPDX    0x0000000F
#define DDRC_APB_DDRC_T_CKPDX_M  ((DDRC_APB_DDRC_T_CKPDX_V)<<(DDRC_APB_DDRC_T_CKPDX_S))
#define DDRC_APB_DDRC_T_CKPDX_V  0xF
#define DDRC_APB_DDRC_T_CKPDX_S  4
/* DDRC_APB_DDRC_T_CKPDE : R/W ;bitpos:[3:0] ;default: 4'h8 ; */
/*description: Configures timing value of tCKPDE (minimum time CK is maintained as a valid cloc
k after power-down Entry), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_CKPDE    0x0000000F
#define DDRC_APB_DDRC_T_CKPDE_M  ((DDRC_APB_DDRC_T_CKPDE_V)<<(DDRC_APB_DDRC_T_CKPDE_S))
#define DDRC_APB_DDRC_T_CKPDE_V  0xF
#define DDRC_APB_DDRC_T_CKPDE_S  0

#define DDRC_APB_DDRC_DDR_TIMING1_REG          (DR_REG_DDRC_APB_BASE + 0x144)
/* DDRC_APB_DDRC_T_CKESR : R/W ;bitpos:[13:8] ;default: 6'h6 ; */
/*description: Configures timing value of tCKESR (CKE low minimum width during Power-Down and S
elf-Refresh), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RAT
IO..*/
#define DDRC_APB_DDRC_T_CKESR    0x0000003F
#define DDRC_APB_DDRC_T_CKESR_M  ((DDRC_APB_DDRC_T_CKESR_V)<<(DDRC_APB_DDRC_T_CKESR_S))
#define DDRC_APB_DDRC_T_CKESR_V  0x3F
#define DDRC_APB_DDRC_T_CKESR_S  8
/* DDRC_APB_DDRC_T_CKE : R/W ;bitpos:[4:0] ;default: 5'h4 ; */
/*description: Configures timing value of tCKE (CKE high/low pulse minimum width), unit is DFI
PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO..*/
#define DDRC_APB_DDRC_T_CKE    0x0000001F
#define DDRC_APB_DDRC_T_CKE_M  ((DDRC_APB_DDRC_T_CKE_V)<<(DDRC_APB_DDRC_T_CKE_S))
#define DDRC_APB_DDRC_T_CKE_V  0x1F
#define DDRC_APB_DDRC_T_CKE_S  0

#define DDRC_APB_DDRC_DDR_TIMING2_REG          (DR_REG_DDRC_APB_BASE + 0x148)
/* DDRC_APB_DDRC_T_XS_X32 : R/W ;bitpos:[30:24] ;default: 7'h7 ; */
/*description: Configures timing value of tXS (minimum width from exit Self-Refresh to any comm
and not requiring a locked DLL), unit is DFI PHY clock cycles * 32. Only used fo
r DDR3(L)..*/
#define DDRC_APB_DDRC_T_XS_X32    0x0000007F
#define DDRC_APB_DDRC_T_XS_X32_M  ((DDRC_APB_DDRC_T_XS_X32_V)<<(DDRC_APB_DDRC_T_XS_X32_S))
#define DDRC_APB_DDRC_T_XS_X32_V  0x7F
#define DDRC_APB_DDRC_T_XS_X32_S  24
/* DDRC_APB_DDRC_T_XS_DLL_X32 : R/W ;bitpos:[22:16] ;default: 7'h10 ; */
/*description: Configures timing value of tXSDLL (minimum width from exit Self-Refresh to any c
ommand requiring a locked DLL), unit is DFI PHY clock cycles * 32. Only used for
 DDR3(L)..*/
#define DDRC_APB_DDRC_T_XS_DLL_X32    0x0000007F
#define DDRC_APB_DDRC_T_XS_DLL_X32_M  ((DDRC_APB_DDRC_T_XS_DLL_X32_V)<<(DDRC_APB_DDRC_T_XS_DLL_X32_S))
#define DDRC_APB_DDRC_T_XS_DLL_X32_V  0x7F
#define DDRC_APB_DDRC_T_XS_DLL_X32_S  16
/* DDRC_APB_DDRC_T_XSR : R/W ;bitpos:[11:0] ;default: 12'h70 ; */
/*description: Configures timing value of tXSR (minimum width from exit Self-Refresh to any com
mand), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO. Onl
y use for LPDDR3/2..*/
#define DDRC_APB_DDRC_T_XSR    0x00000FFF
#define DDRC_APB_DDRC_T_XSR_M  ((DDRC_APB_DDRC_T_XSR_V)<<(DDRC_APB_DDRC_T_XSR_S))
#define DDRC_APB_DDRC_T_XSR_V  0xFFF
#define DDRC_APB_DDRC_T_XSR_S  0

#define DDRC_APB_DDRC_DDR_TIMING3_REG          (DR_REG_DDRC_APB_BASE + 0x14C)
/* DDRC_APB_DDRC_T_DPD_X4096 : R/W ;bitpos:[15:8] ;default: 8'h62 ; */
/*description: Configures timing value of tDPD (minimum Deep Power-Down width), unit is DFI PHY
 clock cycles * 4096. Only use for LPDDR3/2..*/
#define DDRC_APB_DDRC_T_DPD_X4096    0x000000FF
#define DDRC_APB_DDRC_T_DPD_X4096_M  ((DDRC_APB_DDRC_T_DPD_X4096_V)<<(DDRC_APB_DDRC_T_DPD_X4096_S))
#define DDRC_APB_DDRC_T_DPD_X4096_V  0xFF
#define DDRC_APB_DDRC_T_DPD_X4096_S  8
/* DDRC_APB_DDRC_T_XP : R/W ;bitpos:[4:0] ;default: 5'h14 ; */
/*description: Configures timing value of tXP (minimum width from exit Power-Down to any comman
d), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO. For DD
R3(L), this must be programmed to tXPDLL if slow Power-Down exit is selected in
MR0[12]..*/
#define DDRC_APB_DDRC_T_XP    0x0000001F
#define DDRC_APB_DDRC_T_XP_M  ((DDRC_APB_DDRC_T_XP_V)<<(DDRC_APB_DDRC_T_XP_S))
#define DDRC_APB_DDRC_T_XP_V  0x1F
#define DDRC_APB_DDRC_T_XP_S  0

#define DDRC_APB_DDRC_DDR_TIMING4_REG          (DR_REG_DDRC_APB_BASE + 0x150)
/* DDRC_APB_DDRC_T_ZQCL : R/W ;bitpos:[26:16] ;default: 11'h100 ; */
/*description: Configures timing value of tZQCL/tZQoper (NOP required after a ZQ Long Calibrati
on), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO..*/
#define DDRC_APB_DDRC_T_ZQCL    0x000007FF
#define DDRC_APB_DDRC_T_ZQCL_M  ((DDRC_APB_DDRC_T_ZQCL_V)<<(DDRC_APB_DDRC_T_ZQCL_S))
#define DDRC_APB_DDRC_T_ZQCL_V  0x7FF
#define DDRC_APB_DDRC_T_ZQCL_S  16
/* DDRC_APB_DDRC_T_ZQCS : R/W ;bitpos:[9:0] ;default: 10'h40 ; */
/*description: Configures timing value of tZQCS (NOP required after a ZQ Short Calibration), un
it is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO..*/
#define DDRC_APB_DDRC_T_ZQCS    0x000003FF
#define DDRC_APB_DDRC_T_ZQCS_M  ((DDRC_APB_DDRC_T_ZQCS_V)<<(DDRC_APB_DDRC_T_ZQCS_S))
#define DDRC_APB_DDRC_T_ZQCS_V  0x3FF
#define DDRC_APB_DDRC_T_ZQCS_S  0

#define DDRC_APB_DDRC_DDR_TIMING5_REG          (DR_REG_DDRC_APB_BASE + 0x154)
/* DDRC_APB_DDRC_T_ZQINIT_X32 : R/W ;bitpos:[23:16] ;default: 8'h10 ; */
/*description: Configures timing value of tZQINIT (NOP required after a ZQ Initial Calibration)
, unit is DFI PHY clock cycles *32..*/
#define DDRC_APB_DDRC_T_ZQINIT_X32    0x000000FF
#define DDRC_APB_DDRC_T_ZQINIT_X32_M  ((DDRC_APB_DDRC_T_ZQINIT_X32_V)<<(DDRC_APB_DDRC_T_ZQINIT_X32_S))
#define DDRC_APB_DDRC_T_ZQINIT_X32_V  0xFF
#define DDRC_APB_DDRC_T_ZQINIT_X32_S  16
/* DDRC_APB_DDRC_T_ZQRST : R/W ;bitpos:[9:0] ;default: 10'h28 ; */
/*description: Configures timing value of tZQRESET (NOP required after a ZQ Reset Calibration),
 unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO..*/
#define DDRC_APB_DDRC_T_ZQRST    0x000003FF
#define DDRC_APB_DDRC_T_ZQRST_M  ((DDRC_APB_DDRC_T_ZQRST_V)<<(DDRC_APB_DDRC_T_ZQRST_S))
#define DDRC_APB_DDRC_T_ZQRST_V  0x3FF
#define DDRC_APB_DDRC_T_ZQRST_S  0

#define DDRC_APB_DDRC_DDR_TIMING6_REG          (DR_REG_DDRC_APB_BASE + 0x158)
/* DDRC_APB_DDRC_T_MRW : R/W ;bitpos:[25:16] ;default: 10'h4 ; */
/*description: Configures timing value of tMRW (wait after a mode register write), unit is DFI
PHY clock cycles..*/
#define DDRC_APB_DDRC_T_MRW    0x000003FF
#define DDRC_APB_DDRC_T_MRW_M  ((DDRC_APB_DDRC_T_MRW_V)<<(DDRC_APB_DDRC_T_MRW_S))
#define DDRC_APB_DDRC_T_MRW_V  0x3FF
#define DDRC_APB_DDRC_T_MRW_S  16
/* DDRC_APB_DDRC_T_MRR : R/W ;bitpos:[9:0] ;default: 10'h10 ; */
/*description: Configures timing value of tMRR (wait after a mode register read), unit is DFI P
HY clock cycles..*/
#define DDRC_APB_DDRC_T_MRR    0x000003FF
#define DDRC_APB_DDRC_T_MRR_M  ((DDRC_APB_DDRC_T_MRR_V)<<(DDRC_APB_DDRC_T_MRR_S))
#define DDRC_APB_DDRC_T_MRR_V  0x3FF
#define DDRC_APB_DDRC_T_MRR_S  0

#define DDRC_APB_DDRC_DDR_TIMING7_REG          (DR_REG_DDRC_APB_BASE + 0x15C)
/* DDRC_APB_DDRC_T_MRR2MRW : R/W ;bitpos:[22:16] ;default: 7'h10 ; */
/*description: Configures timing value from a mode register read to a mode register write, unit
 is DFI PHY clock cycles. Program it to max(DDRC_T_RD2WR,DDRC_T_MRR)..*/
#define DDRC_APB_DDRC_T_MRR2MRW    0x0000007F
#define DDRC_APB_DDRC_T_MRR2MRW_M  ((DDRC_APB_DDRC_T_MRR2MRW_V)<<(DDRC_APB_DDRC_T_MRR2MRW_S))
#define DDRC_APB_DDRC_T_MRR2MRW_V  0x7F
#define DDRC_APB_DDRC_T_MRR2MRW_S  16
/* DDRC_APB_DDRC_T_MOD : R/W ;bitpos:[9:0] ;default: 10'hc ; */
/*description: Configures timing value of tMOD (wait after a MRS to a non-MRS), unit is DFI PHY
 clock cycles. Only use for DDR3(L)..*/
#define DDRC_APB_DDRC_T_MOD    0x000003FF
#define DDRC_APB_DDRC_T_MOD_M  ((DDRC_APB_DDRC_T_MOD_V)<<(DDRC_APB_DDRC_T_MOD_S))
#define DDRC_APB_DDRC_T_MOD_V  0x3FF
#define DDRC_APB_DDRC_T_MOD_S  0

#define DDRC_APB_DDRC_DDR_TIMING8_REG          (DR_REG_DDRC_APB_BASE + 0x160)
/* DDRC_APB_DDRC_T_RFC : R/W ;bitpos:[29:20] ;default: 10'hd0 ; */
/*description: Configures timing value of tRFC (minimum width from refresh to refresh or activa
te), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_RFC    0x000003FF
#define DDRC_APB_DDRC_T_RFC_M  ((DDRC_APB_DDRC_T_RFC_V)<<(DDRC_APB_DDRC_T_RFC_S))
#define DDRC_APB_DDRC_T_RFC_V  0x3FF
#define DDRC_APB_DDRC_T_RFC_S  20
/* DDRC_APB_DDRC_T_RRD : R/W ;bitpos:[19:16] ;default: 4'h6 ; */
/*description: Configures timing value of tRRD (minimum width between activate bank A to activa
te bank B), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO
..*/
#define DDRC_APB_DDRC_T_RRD    0x0000000F
#define DDRC_APB_DDRC_T_RRD_M  ((DDRC_APB_DDRC_T_RRD_V)<<(DDRC_APB_DDRC_T_RRD_S))
#define DDRC_APB_DDRC_T_RRD_V  0xF
#define DDRC_APB_DDRC_T_RRD_S  16
/* DDRC_APB_DDRC_T_RCD : R/W ;bitpos:[12:8] ;default: 5'hb ; */
/*description: Configures timing value of tRCD (minimum width from activate to read or write co
mmand to same bank), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_RCD    0x0000001F
#define DDRC_APB_DDRC_T_RCD_M  ((DDRC_APB_DDRC_T_RCD_V)<<(DDRC_APB_DDRC_T_RCD_S))
#define DDRC_APB_DDRC_T_RCD_V  0x1F
#define DDRC_APB_DDRC_T_RCD_S  8
/* DDRC_APB_DDRC_T_RAS : R/W ;bitpos:[5:0] ;default: 6'h1c ; */
/*description: Configures timing value of tRAS (minimum width from activate to precharge to the
 same bank), unit is DFI PHY clock cycles, must Round UP to n*DDRC_PHY_FREQ_RATI
O..*/
#define DDRC_APB_DDRC_T_RAS    0x0000003F
#define DDRC_APB_DDRC_T_RAS_M  ((DDRC_APB_DDRC_T_RAS_V)<<(DDRC_APB_DDRC_T_RAS_S))
#define DDRC_APB_DDRC_T_RAS_V  0x3F
#define DDRC_APB_DDRC_T_RAS_S  0

#define DDRC_APB_DDRC_DDR_TIMING9_REG          (DR_REG_DDRC_APB_BASE + 0x164)
/* DDRC_APB_DDRC_T_RD2WR : R/W ;bitpos:[31:24] ;default: 8'h9 ; */
/*description: Configures timing value of minimum width from read command to write command, uni
t is DFI PHY clock cycles.; For LPDDR3/2: RL + BL/2 + RU(tDQSCKmax/tCK) + 1 - WL
; For DDR3(L): RL + BL/2 + 2 - WL + (ODT_en ? 1 : 0).*/
#define DDRC_APB_DDRC_T_RD2WR    0x000000FF
#define DDRC_APB_DDRC_T_RD2WR_M  ((DDRC_APB_DDRC_T_RD2WR_V)<<(DDRC_APB_DDRC_T_RD2WR_S))
#define DDRC_APB_DDRC_T_RD2WR_V  0xFF
#define DDRC_APB_DDRC_T_RD2WR_S  24
/* DDRC_APB_DDRC_T_RD2PRE : R/W ;bitpos:[23:16] ;default: 8'h6 ; */
/*description: Configures timing value of minimum width from read to precharge to same bank, un
it is DFI PHY clock cycles.; For LPDDR3: BL/2 + max(RU(tRTP/tCK),4) - 4; For LPD
DR2-S2: BL/2 + RU(tRTP/tCK) – 1; For LPDDR2-S4: BL/2 + max(RU(tRTP/tCK),2) - 2;
For DDR3(L): AL + max(RU(tRTP/tCK),4).*/
#define DDRC_APB_DDRC_T_RD2PRE    0x000000FF
#define DDRC_APB_DDRC_T_RD2PRE_M  ((DDRC_APB_DDRC_T_RD2PRE_V)<<(DDRC_APB_DDRC_T_RD2PRE_S))
#define DDRC_APB_DDRC_T_RD2PRE_V  0xFF
#define DDRC_APB_DDRC_T_RD2PRE_S  16
/* DDRC_APB_DDRC_T_WR2RD : R/W ;bitpos:[15:8] ;default: 8'h12 ; */
/*description: Configures timing value of minimum width from write command to read command, uni
t is DFI PHY clock cycles.; For LPDDR3/2: WL + BL/2 + tWTR + 1; For DDR3(L): CWL
 + BL/2 + tWTR.*/
#define DDRC_APB_DDRC_T_WR2RD    0x000000FF
#define DDRC_APB_DDRC_T_WR2RD_M  ((DDRC_APB_DDRC_T_WR2RD_V)<<(DDRC_APB_DDRC_T_WR2RD_S))
#define DDRC_APB_DDRC_T_WR2RD_V  0xFF
#define DDRC_APB_DDRC_T_WR2RD_S  8
/* DDRC_APB_DDRC_T_WR2PRE : R/W ;bitpos:[7:0] ;default: 8'h18 ; */
/*description: Configures timing value of minimum width from write to precharge to same bank, u
nit is DFI PHY clock cycles. ; For LPDDR3/2: WL + BL/2 + tWR + 1.; For DDR3(L):
WL + BL/2 + tWR..*/
#define DDRC_APB_DDRC_T_WR2PRE    0x000000FF
#define DDRC_APB_DDRC_T_WR2PRE_M  ((DDRC_APB_DDRC_T_WR2PRE_V)<<(DDRC_APB_DDRC_T_WR2PRE_S))
#define DDRC_APB_DDRC_T_WR2PRE_V  0xFF
#define DDRC_APB_DDRC_T_WR2PRE_S  0

#define DDRC_APB_DDRC_DDR_TIMING10_REG          (DR_REG_DDRC_APB_BASE + 0x168)
/* DDRC_APB_DDRC_T_CCD : R/W ;bitpos:[23:16] ;default: 8'h4 ; */
/*description: Configures timing value of tCCD (minimum width between two reads or two writes),
 unit is DFI PHY clock cycles. Normal is BL/2..*/
#define DDRC_APB_DDRC_T_CCD    0x000000FF
#define DDRC_APB_DDRC_T_CCD_M  ((DDRC_APB_DDRC_T_CCD_V)<<(DDRC_APB_DDRC_T_CCD_S))
#define DDRC_APB_DDRC_T_CCD_V  0xFF
#define DDRC_APB_DDRC_T_CCD_S  16
/* DDRC_APB_DDRC_T_RPPB : R/W ;bitpos:[12:8] ;default: 5'hb ; */
/*description: Configures timing value of tRPpb (minimum width from single-bank precharge to ac
tivate of same bank), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_RPPB    0x0000001F
#define DDRC_APB_DDRC_T_RPPB_M  ((DDRC_APB_DDRC_T_RPPB_V)<<(DDRC_APB_DDRC_T_RPPB_S))
#define DDRC_APB_DDRC_T_RPPB_V  0x1F
#define DDRC_APB_DDRC_T_RPPB_S  8
/* DDRC_APB_DDRC_T_RPAB : R/W ;bitpos:[4:0] ;default: 5'hb ; */
/*description: Configures timing value of tRPpab (minimum width from all-bank precharge to acti
vate), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_RPAB    0x0000001F
#define DDRC_APB_DDRC_T_RPAB_M  ((DDRC_APB_DDRC_T_RPAB_V)<<(DDRC_APB_DDRC_T_RPAB_S))
#define DDRC_APB_DDRC_T_RPAB_V  0x1F
#define DDRC_APB_DDRC_T_RPAB_S  0

#define DDRC_APB_DDRC_DDR_TIMING11_REG          (DR_REG_DDRC_APB_BASE + 0x16C)
/* DDRC_APB_DDRC_T_RD_ODT_DELAY : R/W ;bitpos:[28:24] ;default: 5'h3 ; */
/*description: Configures timing value from issuing a read command to setting ODT values associ
ated with that command, unit is DFI PHY clock cycles.; For LPDDR3: Recommend val
ue is RL + RD(tDQSCK(min)/tCK) - 1 - RU(tODTon(max)/tCK); For DDR3(L): Recommend
 value is CL - CWL.*/
#define DDRC_APB_DDRC_T_RD_ODT_DELAY    0x0000001F
#define DDRC_APB_DDRC_T_RD_ODT_DELAY_M  ((DDRC_APB_DDRC_T_RD_ODT_DELAY_V)<<(DDRC_APB_DDRC_T_RD_ODT_DELAY_S))
#define DDRC_APB_DDRC_T_RD_ODT_DELAY_V  0x1F
#define DDRC_APB_DDRC_T_RD_ODT_DELAY_S  24
/* DDRC_APB_DDRC_T_RD_ODT_HOLD : R/W ;bitpos:[19:16] ;default: 4'h6 ; */
/*description: Configures timing value to hold ODT for a read command, unit is DFI PHY clock cy
cles.; For LPDDR3: Recommend value when BL8 is 5 + RU(tDQSCK(max)/tCK) - RD(tDQS
CK(min)/tCK) + RU(tODTon(max)/tCK); For DDR3(L): Recommend value when BL8 is 0x6.*/
#define DDRC_APB_DDRC_T_RD_ODT_HOLD    0x0000000F
#define DDRC_APB_DDRC_T_RD_ODT_HOLD_M  ((DDRC_APB_DDRC_T_RD_ODT_HOLD_V)<<(DDRC_APB_DDRC_T_RD_ODT_HOLD_S))
#define DDRC_APB_DDRC_T_RD_ODT_HOLD_V  0xF
#define DDRC_APB_DDRC_T_RD_ODT_HOLD_S  16
/* DDRC_APB_DDRC_T_WR_ODT_DELAY : R/W ;bitpos:[12:8] ;default: 5'h0 ; */
/*description: Configures timing value from issuing a write command to setting ODT values assoc
iated with that command, unit is DFI PHY clock cycles.; For LPDDR3: Recommend va
lue is WL - 1 + RU(tODTon(max)/tCK); For DDR3(L): Recommend value is 0x0.*/
#define DDRC_APB_DDRC_T_WR_ODT_DELAY    0x0000001F
#define DDRC_APB_DDRC_T_WR_ODT_DELAY_M  ((DDRC_APB_DDRC_T_WR_ODT_DELAY_V)<<(DDRC_APB_DDRC_T_WR_ODT_DELAY_S))
#define DDRC_APB_DDRC_T_WR_ODT_DELAY_V  0x1F
#define DDRC_APB_DDRC_T_WR_ODT_DELAY_S  8
/* DDRC_APB_DDRC_T_WR_ODT_HOLD : R/W ;bitpos:[3:0] ;default: 4'h6 ; */
/*description: Configures timing value to hold ODT for a write command, unit is DFI PHY clock c
ycles.; For LPDDR3: Recommend value when BL8 is 7 + RU(tODTon(max)/tCK); For DDR
3(L): Recommend value when BL8 is 0x6.*/
#define DDRC_APB_DDRC_T_WR_ODT_HOLD    0x0000000F
#define DDRC_APB_DDRC_T_WR_ODT_HOLD_M  ((DDRC_APB_DDRC_T_WR_ODT_HOLD_V)<<(DDRC_APB_DDRC_T_WR_ODT_HOLD_S))
#define DDRC_APB_DDRC_T_WR_ODT_HOLD_V  0xF
#define DDRC_APB_DDRC_T_WR_ODT_HOLD_S  0

#define DDRC_APB_DDRC_DFI_TIMING0_REG          (DR_REG_DDRC_APB_BASE + 0x180)
/* DDRC_APB_DDRC_T_DRAM_CLK_EN : R/W ;bitpos:[20:16] ;default: 5'he ; */
/*description: Configures timing value of tdram_clk_enable (delay from DFI Interface signal dfi
_dram_clk_disable de-assert to DRAM get first valid clock rising edge at the PHY
-DRAM boundary), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_DRAM_CLK_EN    0x0000001F
#define DDRC_APB_DDRC_T_DRAM_CLK_EN_M  ((DDRC_APB_DDRC_T_DRAM_CLK_EN_V)<<(DDRC_APB_DDRC_T_DRAM_CLK_EN_S))
#define DDRC_APB_DDRC_T_DRAM_CLK_EN_V  0x1F
#define DDRC_APB_DDRC_T_DRAM_CLK_EN_S  16
/* DDRC_APB_DDRC_T_DRAM_CLK_DIS : R/W ;bitpos:[12:8] ;default: 5'h6 ; */
/*description: Configures timing value of tdram_clk_disable (delay from DFI Interface signal df
i_dram_clk_disable assert to DRAM clock maintains low at the PHY-DRAM boundary),
 unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_DRAM_CLK_DIS    0x0000001F
#define DDRC_APB_DDRC_T_DRAM_CLK_DIS_M  ((DDRC_APB_DDRC_T_DRAM_CLK_DIS_V)<<(DDRC_APB_DDRC_T_DRAM_CLK_DIS_S))
#define DDRC_APB_DDRC_T_DRAM_CLK_DIS_V  0x1F
#define DDRC_APB_DDRC_T_DRAM_CLK_DIS_S  8
/* DDRC_APB_DDRC_T_CTRL_DELAY : R/W ;bitpos:[4:0] ;default: 5'hc ; */
/*description: Configures timing value of tctrl_delay (delay from DFI control signals to PHY-DR
AM interface), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_CTRL_DELAY    0x0000001F
#define DDRC_APB_DDRC_T_CTRL_DELAY_M  ((DDRC_APB_DDRC_T_CTRL_DELAY_V)<<(DDRC_APB_DDRC_T_CTRL_DELAY_S))
#define DDRC_APB_DDRC_T_CTRL_DELAY_V  0x1F
#define DDRC_APB_DDRC_T_CTRL_DELAY_S  0

#define DDRC_APB_DDRC_DFI_TIMING1_REG          (DR_REG_DDRC_APB_BASE + 0x184)
/* DDRC_APB_DDRC_T_PHY_WRDATA_DELAY : R/W ;bitpos:[20:16] ;default: 5'h10 ; */
/*description: Configures timing value of twrdata_delay (delay from DFI Interface signal dfi_wd
ata_en assert to corresponding write data transfer is completed on the DRAM bus)
, unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_PHY_WRDATA_DELAY    0x0000001F
#define DDRC_APB_DDRC_T_PHY_WRDATA_DELAY_M  ((DDRC_APB_DDRC_T_PHY_WRDATA_DELAY_V)<<(DDRC_APB_DDRC_T_PHY_WRDATA_DELAY_S))
#define DDRC_APB_DDRC_T_PHY_WRDATA_DELAY_V  0x1F
#define DDRC_APB_DDRC_T_PHY_WRDATA_DELAY_S  16
/* DDRC_APB_DDRC_T_PHY_WRDATA : R/W ;bitpos:[13:8] ;default: 6'h0 ; */
/*description: Configures timing value of tphy_wrdata (delay from DFI Interface signal dfi_wrda
ta_en assert to associated write data is driven on DFI Interface signal dfi_wrda
ta), unit is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_PHY_WRDATA    0x0000003F
#define DDRC_APB_DDRC_T_PHY_WRDATA_M  ((DDRC_APB_DDRC_T_PHY_WRDATA_V)<<(DDRC_APB_DDRC_T_PHY_WRDATA_S))
#define DDRC_APB_DDRC_T_PHY_WRDATA_V  0x3F
#define DDRC_APB_DDRC_T_PHY_WRDATA_S  8
/* DDRC_APB_DDRC_T_PHY_WR_LAT : R/W ;bitpos:[5:0] ;default: 6'h4 ; */
/*description: Configures timing value of tphy_wrlat (delay from write command send on DFI Inte
rface to DFI Interface signal dfi_wdata_en assert), unit is DFI PHY clock cycles
..*/
#define DDRC_APB_DDRC_T_PHY_WR_LAT    0x0000003F
#define DDRC_APB_DDRC_T_PHY_WR_LAT_M  ((DDRC_APB_DDRC_T_PHY_WR_LAT_V)<<(DDRC_APB_DDRC_T_PHY_WR_LAT_S))
#define DDRC_APB_DDRC_T_PHY_WR_LAT_V  0x3F
#define DDRC_APB_DDRC_T_PHY_WR_LAT_S  0

#define DDRC_APB_DDRC_DFI_TIMING2_REG          (DR_REG_DDRC_APB_BASE + 0x188)
/* DDRC_APB_DDRC_T_PHY_RD_LAT : R/W ;bitpos:[14:8] ;default: 7'h40 ; */
/*description: Configures timing value of tphy_rdlat (max delay from DFI Interface signal dfi_r
data_en assert to corresponding DFI Interface signal dfi_rdata_valid back), unit
 is DFI PHY clock cycles..*/
#define DDRC_APB_DDRC_T_PHY_RD_LAT    0x0000007F
#define DDRC_APB_DDRC_T_PHY_RD_LAT_M  ((DDRC_APB_DDRC_T_PHY_RD_LAT_V)<<(DDRC_APB_DDRC_T_PHY_RD_LAT_S))
#define DDRC_APB_DDRC_T_PHY_RD_LAT_V  0x7F
#define DDRC_APB_DDRC_T_PHY_RD_LAT_S  8
/* DDRC_APB_DDRC_T_PHY_RDDATA_EN : R/W ;bitpos:[6:0] ;default: 7'h8 ; */
/*description: Configures timing value of trddata_en (delay from read command send on DFI Inter
face to DFI Interface signal dfi_rddata_en assert), unit is DFI PHY clock cycles
..*/
#define DDRC_APB_DDRC_T_PHY_RDDATA_EN    0x0000007F
#define DDRC_APB_DDRC_T_PHY_RDDATA_EN_M  ((DDRC_APB_DDRC_T_PHY_RDDATA_EN_V)<<(DDRC_APB_DDRC_T_PHY_RDDATA_EN_S))
#define DDRC_APB_DDRC_T_PHY_RDDATA_EN_V  0x7F
#define DDRC_APB_DDRC_T_PHY_RDDATA_EN_S  0

#define DDRC_APB_DDRC_DFI_TIMING3_REG          (DR_REG_DDRC_APB_BASE + 0x18C)
/* DDRC_APB_DDRC_T_LP_RESP : R/W ;bitpos:[28:24] ;default: 5'he ; */
/*description: Configures timing value of tlp_resp (minimum width that DFI Interface signal dfi
_lp_req must assert, DDRC expects PHY to respond within this time), unit is DFI
PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO..*/
#define DDRC_APB_DDRC_T_LP_RESP    0x0000001F
#define DDRC_APB_DDRC_T_LP_RESP_M  ((DDRC_APB_DDRC_T_LP_RESP_V)<<(DDRC_APB_DDRC_T_LP_RESP_S))
#define DDRC_APB_DDRC_T_LP_RESP_V  0x1F
#define DDRC_APB_DDRC_T_LP_RESP_S  24
/* DDRC_APB_DDRC_T_CTRLUPD_INTERVAL_X1024 : R/W ;bitpos:[23:16] ;default: 8'h1 ; */
/*description: Configures timing value of tctrlupd_interval (interval between DDRC initiated DF
I update requests), unit is DFI PHY clock cycle * 1024..*/
#define DDRC_APB_DDRC_T_CTRLUPD_INTERVAL_X1024    0x000000FF
#define DDRC_APB_DDRC_T_CTRLUPD_INTERVAL_X1024_M  ((DDRC_APB_DDRC_T_CTRLUPD_INTERVAL_X1024_V)<<(DDRC_APB_DDRC_T_CTRLUPD_INTERVAL_X1024_S))
#define DDRC_APB_DDRC_T_CTRLUPD_INTERVAL_X1024_V  0xFF
#define DDRC_APB_DDRC_T_CTRLUPD_INTERVAL_X1024_S  16
/* DDRC_APB_DDRC_T_CTRLUPD_MIN : R/W ;bitpos:[9:0] ;default: 10'h4 ; */
/*description: Configures timing value of tctrlupd_min (minimum width that DFI Interface signal
 dfi_ctrlupd_req must assert, DDRC expects PHY to respond within this time), uni
t is DFI PHY clock cycle, must Round Up to n*DDRC_PHY_FREQ_RATIO..*/
#define DDRC_APB_DDRC_T_CTRLUPD_MIN    0x000003FF
#define DDRC_APB_DDRC_T_CTRLUPD_MIN_M  ((DDRC_APB_DDRC_T_CTRLUPD_MIN_V)<<(DDRC_APB_DDRC_T_CTRLUPD_MIN_S))
#define DDRC_APB_DDRC_T_CTRLUPD_MIN_V  0x3FF
#define DDRC_APB_DDRC_T_CTRLUPD_MIN_S  0

#define DDRC_APB_DDRC_PHY_IO_REG          (DR_REG_DDRC_APB_BASE + 0x1C0)
/* DDRC_APB_DDRC_PHY_PLLLOCK : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents the value of PHY interface signal ddr_plllock.; 0: PLL not lock; 1: P
LL lock.*/
#define DDRC_APB_DDRC_PHY_PLLLOCK    (BIT(16))
#define DDRC_APB_DDRC_PHY_PLLLOCK_M  (BIT(16))
#define DDRC_APB_DDRC_PHY_PLLLOCK_V  0x1
#define DDRC_APB_DDRC_PHY_PLLLOCK_S  16
/* DDRC_APB_DDRC_PHY_BUFFEREN_CORE : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: Configures the value of PHY interface signal bufferen_core.; 0: PHY go into low
power state, keep IO CKE low, IO RESETN high and close the other IO; 1: PHY is i
n normal state.*/
#define DDRC_APB_DDRC_PHY_BUFFEREN_CORE    (BIT(0))
#define DDRC_APB_DDRC_PHY_BUFFEREN_CORE_M  (BIT(0))
#define DDRC_APB_DDRC_PHY_BUFFEREN_CORE_V  0x1
#define DDRC_APB_DDRC_PHY_BUFFEREN_CORE_S  0

#define DDRC_APB_REG_VERSION_REG          (DR_REG_DDRC_APB_BASE + 0x1F0)
/* DDRC_APB_REG_VERSION : R/W ;bitpos:[31:0] ;default: 32'h02410210 ; */
/*description: Represents reg_file version..*/
#define DDRC_APB_REG_VERSION    0xFFFFFFFF
#define DDRC_APB_REG_VERSION_M  ((DDRC_APB_REG_VERSION_V)<<(DDRC_APB_REG_VERSION_S))
#define DDRC_APB_REG_VERSION_V  0xFFFFFFFF
#define DDRC_APB_REG_VERSION_S  0

#define DDRC_APB_REG_ECO0_REG          (DR_REG_DDRC_APB_BASE + 0x1F4)
/* DDRC_APB_REG_ECO0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ECO use..*/
#define DDRC_APB_REG_ECO0    0xFFFFFFFF
#define DDRC_APB_REG_ECO0_M  ((DDRC_APB_REG_ECO0_V)<<(DDRC_APB_REG_ECO0_S))
#define DDRC_APB_REG_ECO0_V  0xFFFFFFFF
#define DDRC_APB_REG_ECO0_S  0

#define DDRC_APB_REG_ECO1_REG          (DR_REG_DDRC_APB_BASE + 0x1F8)
/* DDRC_APB_REG_ECO1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ECO use..*/
#define DDRC_APB_REG_ECO1    0xFFFFFFFF
#define DDRC_APB_REG_ECO1_M  ((DDRC_APB_REG_ECO1_V)<<(DDRC_APB_REG_ECO1_S))
#define DDRC_APB_REG_ECO1_V  0xFFFFFFFF
#define DDRC_APB_REG_ECO1_S  0

#define DDRC_APB_REG_ECO2_REG          (DR_REG_DDRC_APB_BASE + 0x1FC)
/* DDRC_APB_REG_ECO2 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ECO use..*/
#define DDRC_APB_REG_ECO2    0xFFFFFFFF
#define DDRC_APB_REG_ECO2_M  ((DDRC_APB_REG_ECO2_V)<<(DDRC_APB_REG_ECO2_S))
#define DDRC_APB_REG_ECO2_V  0xFFFFFFFF
#define DDRC_APB_REG_ECO2_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_DDRC_APB_REG_H_ */
