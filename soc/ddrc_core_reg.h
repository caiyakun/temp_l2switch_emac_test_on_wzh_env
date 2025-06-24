/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_DDRC_CORE_REG_H_
#define _SOC_DDRC_CORE_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define DDRC_CORE_DDRC_REG_CORE_CLK_EN_REG          (DR_REG_DDRC_CORE_BASE + 0x200)
/* DDRC_CORE_DDRC_CLK_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether to force on core_reg_file clock.; 0: Not force on; 1: Force o
n.*/
#define DDRC_CORE_DDRC_CLK_EN    (BIT(0))
#define DDRC_CORE_DDRC_CLK_EN_M  (BIT(0))
#define DDRC_CORE_DDRC_CLK_EN_V  0x1
#define DDRC_CORE_DDRC_CLK_EN_S  0

#define DDRC_CORE_DDRC_PATH_EN_REG          (DR_REG_DDRC_CORE_BASE + 0x210)
/* DDRC_CORE_DDRC_DRAM_EN : R/W ;bitpos:[16] ;default: 1'h1 ; */
/*description: Configures whether to enable DRAM access. If disable, data write/read requests f
rom AXI port and cache will clear, and give error resp to AXI port.; 0: Disable;
 1: Enable.*/
#define DDRC_CORE_DDRC_DRAM_EN    (BIT(16))
#define DDRC_CORE_DDRC_DRAM_EN_M  (BIT(16))
#define DDRC_CORE_DDRC_DRAM_EN_V  0x1
#define DDRC_CORE_DDRC_DRAM_EN_S  16
/* DDRC_CORE_DDRC_DIS_DATA_PATH : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whenther to disable write/read data path. If disable, data write/read
 requests from AXI port will store in cache, and send to DRAM after enable.; 0:
Enable write/read data path; 1: Disable write/read data path.*/
#define DDRC_CORE_DDRC_DIS_DATA_PATH    (BIT(0))
#define DDRC_CORE_DDRC_DIS_DATA_PATH_M  (BIT(0))
#define DDRC_CORE_DDRC_DIS_DATA_PATH_V  0x1
#define DDRC_CORE_DDRC_DIS_DATA_PATH_S  0

#define DDRC_CORE_DDRC_MR_ACC_REG          (DR_REG_DDRC_CORE_BASE + 0x220)
/* DDRC_CORE_DDRC_MR_WDATA : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Configures DRAM mode register write data..*/
#define DDRC_CORE_DDRC_MR_WDATA    0x0000FFFF
#define DDRC_CORE_DDRC_MR_WDATA_M  ((DDRC_CORE_DDRC_MR_WDATA_V)<<(DDRC_CORE_DDRC_MR_WDATA_S))
#define DDRC_CORE_DDRC_MR_WDATA_V  0xFFFF
#define DDRC_CORE_DDRC_MR_WDATA_S  16
/* DDRC_CORE_DDRC_MR_ADDR : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Configures DRAM mode register operation address(ID)..*/
#define DDRC_CORE_DDRC_MR_ADDR    0x000000FF
#define DDRC_CORE_DDRC_MR_ADDR_M  ((DDRC_CORE_DDRC_MR_ADDR_V)<<(DDRC_CORE_DDRC_MR_ADDR_S))
#define DDRC_CORE_DDRC_MR_ADDR_V  0xFF
#define DDRC_CORE_DDRC_MR_ADDR_S  8
/* DDRC_CORE_DDRC_MR_TYPE : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures DRAM mode register operation type.; 0: Mode register read; 1: Mode re
gister write.*/
#define DDRC_CORE_DDRC_MR_TYPE    (BIT(1))
#define DDRC_CORE_DDRC_MR_TYPE_M  (BIT(1))
#define DDRC_CORE_DDRC_MR_TYPE_V  0x1
#define DDRC_CORE_DDRC_MR_TYPE_S  1
/* DDRC_CORE_DDRC_MR_ACC : R/W/SC ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether to trigger a DRAM mode register read or write operation. When
 the MR operation is complete, HW automatically clears this bit.; 0: No effect;
1: Trigger a mode register operation.*/
#define DDRC_CORE_DDRC_MR_ACC    (BIT(0))
#define DDRC_CORE_DDRC_MR_ACC_M  (BIT(0))
#define DDRC_CORE_DDRC_MR_ACC_V  0x1
#define DDRC_CORE_DDRC_MR_ACC_S  0

#define DDRC_CORE_DDRC_MR_RDATA0_REG          (DR_REG_DDRC_CORE_BASE + 0x230)
/* DDRC_CORE_DDRC_MR_RDATA0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents DRAM mode register read data bit[31:0]..*/
#define DDRC_CORE_DDRC_MR_RDATA0    0xFFFFFFFF
#define DDRC_CORE_DDRC_MR_RDATA0_M  ((DDRC_CORE_DDRC_MR_RDATA0_V)<<(DDRC_CORE_DDRC_MR_RDATA0_S))
#define DDRC_CORE_DDRC_MR_RDATA0_V  0xFFFFFFFF
#define DDRC_CORE_DDRC_MR_RDATA0_S  0

#define DDRC_CORE_DDRC_MR_RDATA1_REG          (DR_REG_DDRC_CORE_BASE + 0x234)
/* DDRC_CORE_DDRC_MR_RDATA1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents DRAM mode register read data bit[63:32]..*/
#define DDRC_CORE_DDRC_MR_RDATA1    0xFFFFFFFF
#define DDRC_CORE_DDRC_MR_RDATA1_M  ((DDRC_CORE_DDRC_MR_RDATA1_V)<<(DDRC_CORE_DDRC_MR_RDATA1_S))
#define DDRC_CORE_DDRC_MR_RDATA1_V  0xFFFFFFFF
#define DDRC_CORE_DDRC_MR_RDATA1_S  0

#define DDRC_CORE_DDRC_MR_RDATA2_REG          (DR_REG_DDRC_CORE_BASE + 0x238)
/* DDRC_CORE_DDRC_MR_RDATA2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents DRAM mode register read data bit[95:64]..*/
#define DDRC_CORE_DDRC_MR_RDATA2    0xFFFFFFFF
#define DDRC_CORE_DDRC_MR_RDATA2_M  ((DDRC_CORE_DDRC_MR_RDATA2_V)<<(DDRC_CORE_DDRC_MR_RDATA2_S))
#define DDRC_CORE_DDRC_MR_RDATA2_V  0xFFFFFFFF
#define DDRC_CORE_DDRC_MR_RDATA2_S  0

#define DDRC_CORE_DDRC_MR_RDATA3_REG          (DR_REG_DDRC_CORE_BASE + 0x23C)
/* DDRC_CORE_DDRC_MR_RDATA3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents DRAM mode register read data bit[127:96]..*/
#define DDRC_CORE_DDRC_MR_RDATA3    0xFFFFFFFF
#define DDRC_CORE_DDRC_MR_RDATA3_M  ((DDRC_CORE_DDRC_MR_RDATA3_V)<<(DDRC_CORE_DDRC_MR_RDATA3_S))
#define DDRC_CORE_DDRC_MR_RDATA3_V  0xFFFFFFFF
#define DDRC_CORE_DDRC_MR_RDATA3_S  0

#define DDRC_CORE_DDRC_REF_RATE_UPD_REG          (DR_REG_DDRC_CORE_BASE + 0x240)
/* DDRC_CORE_DDRC_REF_RATE_UPD_TH_X1024 : R/W ;bitpos:[31:8] ;default: 24'h8000 ; */
/*description: Configures HW auto read LPDDR3/2 MR4 interval threshold. Unit is DDRC core clock
 cycle * 1024. Only use in LPDDR3/2..*/
#define DDRC_CORE_DDRC_REF_RATE_UPD_TH_X1024    0x00FFFFFF
#define DDRC_CORE_DDRC_REF_RATE_UPD_TH_X1024_M  ((DDRC_CORE_DDRC_REF_RATE_UPD_TH_X1024_V)<<(DDRC_CORE_DDRC_REF_RATE_UPD_TH_X1024_S))
#define DDRC_CORE_DDRC_REF_RATE_UPD_TH_X1024_V  0xFFFFFF
#define DDRC_CORE_DDRC_REF_RATE_UPD_TH_X1024_S  8
/* DDRC_CORE_DDRC_REF_RATE_UPD_AUTO_EN : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Configures whether to enable HW auto read LPDDR3/2 MR4 and update Refresh Rate.
Only use in LPDDR3/2, other DRAM type need clear to 0.; 0: Disable; 1: Enable.*/
#define DDRC_CORE_DDRC_REF_RATE_UPD_AUTO_EN    (BIT(4))
#define DDRC_CORE_DDRC_REF_RATE_UPD_AUTO_EN_M  (BIT(4))
#define DDRC_CORE_DDRC_REF_RATE_UPD_AUTO_EN_V  0x1
#define DDRC_CORE_DDRC_REF_RATE_UPD_AUTO_EN_S  4
/* DDRC_CORE_DDRC_REF_RATE : R/W/SS ;bitpos:[2:0] ;default: 3'h3 ; */
/*description: Configures Refresh Rate in LPDDR3/2 MR4; 3'h0 : DRAM Low temperature operating l
imit exceeded; 3'h1 : 4*DDRC_REF_TH_X32; 3'h2 : 2*DDRC_REF_TH_X32; 3'h3 : DDRC_R
EF_TH_X32; 3'h4 : 0.5*DDRC_REF_TH_X32; 3'h5 : 0.25*DDRC_REF_TH_X32; 3'h6 : 0.25*
DDRC_REF_TH_X32, and need de-rate DRAM AC timing; 3'h7 : DRAM High temperature o
perating limit exceeded.*/
#define DDRC_CORE_DDRC_REF_RATE    0x00000007
#define DDRC_CORE_DDRC_REF_RATE_M  ((DDRC_CORE_DDRC_REF_RATE_V)<<(DDRC_CORE_DDRC_REF_RATE_S))
#define DDRC_CORE_DDRC_REF_RATE_V  0x7
#define DDRC_CORE_DDRC_REF_RATE_S  0

#define DDRC_CORE_DDRC_REF_REG          (DR_REG_DDRC_CORE_BASE + 0x244)
/* DDRC_CORE_DDRC_REF_TH_X32 : R/W ;bitpos:[27:16] ;default: 12'h36 ; */
/*description: Configures HW auto send refresh all bank command interval threshold in normal te
mperature. HW will auto * temperature rate based on DDRC_REF_RATE.  Unit is DDRC
 core clock cycle * 32..*/
#define DDRC_CORE_DDRC_REF_TH_X32    0x00000FFF
#define DDRC_CORE_DDRC_REF_TH_X32_M  ((DDRC_CORE_DDRC_REF_TH_X32_V)<<(DDRC_CORE_DDRC_REF_TH_X32_S))
#define DDRC_CORE_DDRC_REF_TH_X32_V  0xFFF
#define DDRC_CORE_DDRC_REF_TH_X32_S  16
/* DDRC_CORE_DDRC_REF_AUTO_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether to enable HW auto send refresh all bank command.; 0 : Disable
; 1 : Enable.*/
#define DDRC_CORE_DDRC_REF_AUTO_EN    (BIT(8))
#define DDRC_CORE_DDRC_REF_AUTO_EN_M  (BIT(8))
#define DDRC_CORE_DDRC_REF_AUTO_EN_V  0x1
#define DDRC_CORE_DDRC_REF_AUTO_EN_S  8
/* DDRC_CORE_DDRC_REF_SEND : WT ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether to trigger a refresh all bank command. HW auto clear this bit
 after receive this trigger.; 0 : No effect; 1 : Trigger a refresh all bank comm
and.*/
#define DDRC_CORE_DDRC_REF_SEND    (BIT(0))
#define DDRC_CORE_DDRC_REF_SEND_M  (BIT(0))
#define DDRC_CORE_DDRC_REF_SEND_V  0x1
#define DDRC_CORE_DDRC_REF_SEND_S  0

#define DDRC_CORE_DDRC_ZQC_REG          (DR_REG_DDRC_CORE_BASE + 0x248)
/* DDRC_CORE_DDRC_ZQCS_TH_X1024 : R/W ;bitpos:[31:12] ;default: 20'h100 ; */
/*description: Configures HW auto send ZQ Short Calibration to DRAM interval threshold. Unit is
 DDRC core clock cycle * 1024..*/
#define DDRC_CORE_DDRC_ZQCS_TH_X1024    0x000FFFFF
#define DDRC_CORE_DDRC_ZQCS_TH_X1024_M  ((DDRC_CORE_DDRC_ZQCS_TH_X1024_V)<<(DDRC_CORE_DDRC_ZQCS_TH_X1024_S))
#define DDRC_CORE_DDRC_ZQCS_TH_X1024_V  0xFFFFF
#define DDRC_CORE_DDRC_ZQCS_TH_X1024_S  12
/* DDRC_CORE_DDRC_ZQCS_AUTO_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether to enable HW auto send ZQ Short Calibration to DRAM.; 0 : Dis
able; 1 : Enable.*/
#define DDRC_CORE_DDRC_ZQCS_AUTO_EN    (BIT(8))
#define DDRC_CORE_DDRC_ZQCS_AUTO_EN_M  (BIT(8))
#define DDRC_CORE_DDRC_ZQCS_AUTO_EN_V  0x1
#define DDRC_CORE_DDRC_ZQCS_AUTO_EN_S  8
/* DDRC_CORE_DDRC_ZQC_EN : R/W/SC ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures 1 to corresponding bit to trigger DRAM ZQ calibration. HW auto clear
this field after receive this trigger.; Bit 3: Write 1 to trigger ZQ Initial Cal
ibration, write 0 no effect; Bit 2: Write 1 to trigger ZQ Reset Calibration, wri
te 0 no effect; Bit 1: Write 1 to trigger ZQ Long Calibration, write 0 no effect
; Bit 0: Write 1 to trigger ZQ Short Calibration, write 0 no effect.*/
#define DDRC_CORE_DDRC_ZQC_EN    0x0000000F
#define DDRC_CORE_DDRC_ZQC_EN_M  ((DDRC_CORE_DDRC_ZQC_EN_V)<<(DDRC_CORE_DDRC_ZQC_EN_S))
#define DDRC_CORE_DDRC_ZQC_EN_V  0xF
#define DDRC_CORE_DDRC_ZQC_EN_S  0

#define DDRC_CORE_DDRC_LOWPOWER_REG          (DR_REG_DDRC_CORE_BASE + 0x24C)
/* DDRC_CORE_DDRC_SREF_TH_X32 : R/W ;bitpos:[31:24] ;default: 8'h40 ; */
/*description: Configures HW auto set DRAM Self-Refresh timer threshold. HW can set DRAM Self-R
efresh if command channel being idle for these clocks. Unit is DDRC core clock c
ycle * 32..*/
#define DDRC_CORE_DDRC_SREF_TH_X32    0x000000FF
#define DDRC_CORE_DDRC_SREF_TH_X32_M  ((DDRC_CORE_DDRC_SREF_TH_X32_V)<<(DDRC_CORE_DDRC_SREF_TH_X32_S))
#define DDRC_CORE_DDRC_SREF_TH_X32_V  0xFF
#define DDRC_CORE_DDRC_SREF_TH_X32_S  24
/* DDRC_CORE_DDRC_PD_TH_X32 : R/W ;bitpos:[20:16] ;default: 5'h10 ; */
/*description: Configures HW auto set DRAM Power-Down timer threshold. HW can set DRAM Power-Do
wn if command channel being idle for these clocks. Unit is DDRC core clock cycle
 * 32..*/
#define DDRC_CORE_DDRC_PD_TH_X32    0x0000001F
#define DDRC_CORE_DDRC_PD_TH_X32_M  ((DDRC_CORE_DDRC_PD_TH_X32_V)<<(DDRC_CORE_DDRC_PD_TH_X32_S))
#define DDRC_CORE_DDRC_PD_TH_X32_V  0x1F
#define DDRC_CORE_DDRC_PD_TH_X32_S  16
/* DDRC_CORE_DDRC_SREF_AUTO_EN : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether to enable HW auto set DRAM Self-Refresh if reach max idle clo
cks.; 0 : Disable; 1 : Enable.*/
#define DDRC_CORE_DDRC_SREF_AUTO_EN    (BIT(9))
#define DDRC_CORE_DDRC_SREF_AUTO_EN_M  (BIT(9))
#define DDRC_CORE_DDRC_SREF_AUTO_EN_V  0x1
#define DDRC_CORE_DDRC_SREF_AUTO_EN_S  9
/* DDRC_CORE_DDRC_PD_AUTO_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether to enable HW auto set DRAM Power-Down if reach max idle clock
s.; 0 : Disable; 1 : Enable.*/
#define DDRC_CORE_DDRC_PD_AUTO_EN    (BIT(8))
#define DDRC_CORE_DDRC_PD_AUTO_EN_M  (BIT(8))
#define DDRC_CORE_DDRC_PD_AUTO_EN_V  0x1
#define DDRC_CORE_DDRC_PD_AUTO_EN_S  8
/* DDRC_CORE_DDRC_DPD_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether FW let DRAM Entry/Exit Deep Power-Down. ; 0: Exit Deep Power-
Down; 1: Entry Deep Power-Down.*/
#define DDRC_CORE_DDRC_DPD_EN    (BIT(2))
#define DDRC_CORE_DDRC_DPD_EN_M  (BIT(2))
#define DDRC_CORE_DDRC_DPD_EN_V  0x1
#define DDRC_CORE_DDRC_DPD_EN_S  2
/* DDRC_CORE_DDRC_SREF_EN : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether FW let DRAM Entry/Exit Self-Refresh. ; 0: Exit Self-Refresh;
1: Entry Self-Refresh.*/
#define DDRC_CORE_DDRC_SREF_EN    (BIT(1))
#define DDRC_CORE_DDRC_SREF_EN_M  (BIT(1))
#define DDRC_CORE_DDRC_SREF_EN_V  0x1
#define DDRC_CORE_DDRC_SREF_EN_S  1

#define DDRC_CORE_DDRC_MODULE_STATUS0_REG          (DR_REG_DDRC_CORE_BASE + 0x260)
/* DDRC_CORE_DDRC_AXIR_IDLE : RO ;bitpos:[31:16] ;default: 16'hffff ; */
/*description: Represents AXI read port 15~0 are idle or not. For bit n:; 0 : AXI read port n b
usy; 1 : AXI read port n idle.*/
#define DDRC_CORE_DDRC_AXIR_IDLE    0x0000FFFF
#define DDRC_CORE_DDRC_AXIR_IDLE_M  ((DDRC_CORE_DDRC_AXIR_IDLE_V)<<(DDRC_CORE_DDRC_AXIR_IDLE_S))
#define DDRC_CORE_DDRC_AXIR_IDLE_V  0xFFFF
#define DDRC_CORE_DDRC_AXIR_IDLE_S  16
/* DDRC_CORE_DDRC_AXIW_IDLE : RO ;bitpos:[15:0] ;default: 16'hffff ; */
/*description: Represents AXI write port 15~0 are idle or not. For bit n:; 0 : AXI write port n
 busy; 1 : AXI write port n idle.*/
#define DDRC_CORE_DDRC_AXIW_IDLE    0x0000FFFF
#define DDRC_CORE_DDRC_AXIW_IDLE_M  ((DDRC_CORE_DDRC_AXIW_IDLE_V)<<(DDRC_CORE_DDRC_AXIW_IDLE_S))
#define DDRC_CORE_DDRC_AXIW_IDLE_V  0xFFFF
#define DDRC_CORE_DDRC_AXIW_IDLE_S  0

#define DDRC_CORE_DDRC_MODULE_STATUS1_REG          (DR_REG_DDRC_CORE_BASE + 0x264)
/* DDRC_CORE_DDRC_DFI_IDLE : RO ;bitpos:[28] ;default: 1'h1 ; */
/*description: Represents dfi_ctrl module is idle or not.; 0 : dfi_ctrl module busy; 1 : dfi_ct
rl module idle.*/
#define DDRC_CORE_DDRC_DFI_IDLE    (BIT(28))
#define DDRC_CORE_DDRC_DFI_IDLE_M  (BIT(28))
#define DDRC_CORE_DDRC_DFI_IDLE_V  0x1
#define DDRC_CORE_DDRC_DFI_IDLE_S  28
/* DDRC_CORE_DDRC_DATA_PATH_IDLE : RO ;bitpos:[24] ;default: 1'h1 ; */
/*description: Represents read/write data path is idle or not.; 0 : Read/write data path busy;
1 : Read/write data path idle.*/
#define DDRC_CORE_DDRC_DATA_PATH_IDLE    (BIT(24))
#define DDRC_CORE_DDRC_DATA_PATH_IDLE_M  (BIT(24))
#define DDRC_CORE_DDRC_DATA_PATH_IDLE_V  0x1
#define DDRC_CORE_DDRC_DATA_PATH_IDLE_S  24
/* DDRC_CORE_DDRC_AES_DEC_BYP_EMPTY : RO ;bitpos:[18] ;default: 1'h1 ; */
/*description: Represents aes_dec bypass path is empty or not.; 0 : not empty; 1 : Empty.*/
#define DDRC_CORE_DDRC_AES_DEC_BYP_EMPTY    (BIT(18))
#define DDRC_CORE_DDRC_AES_DEC_BYP_EMPTY_M  (BIT(18))
#define DDRC_CORE_DDRC_AES_DEC_BYP_EMPTY_V  0x1
#define DDRC_CORE_DDRC_AES_DEC_BYP_EMPTY_S  18
/* DDRC_CORE_DDRC_AES_EN_EMPTY : RO ;bitpos:[17] ;default: 1'h1 ; */
/*description: Represents aes enable path is empty or not.; 0 : Not empty; 1 : Empty.*/
#define DDRC_CORE_DDRC_AES_EN_EMPTY    (BIT(17))
#define DDRC_CORE_DDRC_AES_EN_EMPTY_M  (BIT(17))
#define DDRC_CORE_DDRC_AES_EN_EMPTY_V  0x1
#define DDRC_CORE_DDRC_AES_EN_EMPTY_S  17
/* DDRC_CORE_DDRC_ECC_EMPTY : RO ;bitpos:[16] ;default: 1'h1 ; */
/*description: Represents ecc_cache module is empty or not.; 0 : Not empty ; 1 : Empty.*/
#define DDRC_CORE_DDRC_ECC_EMPTY    (BIT(16))
#define DDRC_CORE_DDRC_ECC_EMPTY_M  (BIT(16))
#define DDRC_CORE_DDRC_ECC_EMPTY_V  0x1
#define DDRC_CORE_DDRC_ECC_EMPTY_S  16
/* DDRC_CORE_DDRC_ARQ_EMPTY : RO ;bitpos:[11] ;default: 1'h1 ; */
/*description: Represents ar_queue module is empty or not.; 0 : Not empty; 1 : Empty.*/
#define DDRC_CORE_DDRC_ARQ_EMPTY    (BIT(11))
#define DDRC_CORE_DDRC_ARQ_EMPTY_M  (BIT(11))
#define DDRC_CORE_DDRC_ARQ_EMPTY_V  0x1
#define DDRC_CORE_DDRC_ARQ_EMPTY_S  11
/* DDRC_CORE_DDRC_RDC_EMPTY : RO ;bitpos:[10] ;default: 1'h1 ; */
/*description: Represents rd_cache module is empty or not.; 0 : Not empty; 1 : Empty.*/
#define DDRC_CORE_DDRC_RDC_EMPTY    (BIT(10))
#define DDRC_CORE_DDRC_RDC_EMPTY_M  (BIT(10))
#define DDRC_CORE_DDRC_RDC_EMPTY_V  0x1
#define DDRC_CORE_DDRC_RDC_EMPTY_S  10
/* DDRC_CORE_DDRC_OL_EMPTY : RO ;bitpos:[9] ;default: 1'h1 ; */
/*description: Represents overlap module is empty or not.; 0 : Not empty; 1 : Empty.*/
#define DDRC_CORE_DDRC_OL_EMPTY    (BIT(9))
#define DDRC_CORE_DDRC_OL_EMPTY_M  (BIT(9))
#define DDRC_CORE_DDRC_OL_EMPTY_V  0x1
#define DDRC_CORE_DDRC_OL_EMPTY_S  9
/* DDRC_CORE_DDRC_WRC_EMPTY : RO ;bitpos:[2] ;default: 1'h1 ; */
/*description: Represents wr_cache module is empty or not.; 0 : Not empty ; 1 : Empty.*/
#define DDRC_CORE_DDRC_WRC_EMPTY    (BIT(2))
#define DDRC_CORE_DDRC_WRC_EMPTY_M  (BIT(2))
#define DDRC_CORE_DDRC_WRC_EMPTY_V  0x1
#define DDRC_CORE_DDRC_WRC_EMPTY_S  2
/* DDRC_CORE_DDRC_RMW_EMPTY : RO ;bitpos:[1] ;default: 1'h1 ; */
/*description: Represents rmw_cache module is empty or not.; 0 : Not empty; 1 : Empty.*/
#define DDRC_CORE_DDRC_RMW_EMPTY    (BIT(1))
#define DDRC_CORE_DDRC_RMW_EMPTY_M  (BIT(1))
#define DDRC_CORE_DDRC_RMW_EMPTY_V  0x1
#define DDRC_CORE_DDRC_RMW_EMPTY_S  1

#define DDRC_CORE_DDRC_ECC_ERR_TH_REG          (DR_REG_DDRC_CORE_BASE + 0x280)
/* DDRC_CORE_DDRC_ECC_UNCORR_ERR_TH : R/W ;bitpos:[31:16] ;default: 16'h1000 ; */
/*description: Configures ECC uncorrectable error threshold. If error count > threshold, may se
nd interrupt..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_ERR_TH    0x0000FFFF
#define DDRC_CORE_DDRC_ECC_UNCORR_ERR_TH_M  ((DDRC_CORE_DDRC_ECC_UNCORR_ERR_TH_V)<<(DDRC_CORE_DDRC_ECC_UNCORR_ERR_TH_S))
#define DDRC_CORE_DDRC_ECC_UNCORR_ERR_TH_V  0xFFFF
#define DDRC_CORE_DDRC_ECC_UNCORR_ERR_TH_S  16
/* DDRC_CORE_DDRC_ECC_CORR_ERR_TH : R/W ;bitpos:[15:0] ;default: 16'h1000 ; */
/*description: Configures ECC correctable error threshold. If error count > threshold, may send
 interrupt..*/
#define DDRC_CORE_DDRC_ECC_CORR_ERR_TH    0x0000FFFF
#define DDRC_CORE_DDRC_ECC_CORR_ERR_TH_M  ((DDRC_CORE_DDRC_ECC_CORR_ERR_TH_V)<<(DDRC_CORE_DDRC_ECC_CORR_ERR_TH_S))
#define DDRC_CORE_DDRC_ECC_CORR_ERR_TH_V  0xFFFF
#define DDRC_CORE_DDRC_ECC_CORR_ERR_TH_S  0

#define DDRC_CORE_DDRC_ECC_ERR_CNT_REG          (DR_REG_DDRC_CORE_BASE + 0x284)
/* DDRC_CORE_DDRC_ECC_UNCORR_ERR_CNT : RO ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Represents ECC uncorrectable error count..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_ERR_CNT    0x0000FFFF
#define DDRC_CORE_DDRC_ECC_UNCORR_ERR_CNT_M  ((DDRC_CORE_DDRC_ECC_UNCORR_ERR_CNT_V)<<(DDRC_CORE_DDRC_ECC_UNCORR_ERR_CNT_S))
#define DDRC_CORE_DDRC_ECC_UNCORR_ERR_CNT_V  0xFFFF
#define DDRC_CORE_DDRC_ECC_UNCORR_ERR_CNT_S  16
/* DDRC_CORE_DDRC_ECC_CORR_ERR_CNT : RO ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Represents ECC correctable error count..*/
#define DDRC_CORE_DDRC_ECC_CORR_ERR_CNT    0x0000FFFF
#define DDRC_CORE_DDRC_ECC_CORR_ERR_CNT_M  ((DDRC_CORE_DDRC_ECC_CORR_ERR_CNT_V)<<(DDRC_CORE_DDRC_ECC_CORR_ERR_CNT_S))
#define DDRC_CORE_DDRC_ECC_CORR_ERR_CNT_V  0xFFFF
#define DDRC_CORE_DDRC_ECC_CORR_ERR_CNT_S  0

#define DDRC_CORE_DDRC_ECC_CORR_ADDR_REG          (DR_REG_DDRC_CORE_BASE + 0x288)
/* DDRC_CORE_DDRC_ECC_CORR_RMW : RO ;bitpos:[31] ;default: 1'h0 ; */
/*description: Represents the last ECC correctable error is RMW read..*/
#define DDRC_CORE_DDRC_ECC_CORR_RMW    (BIT(31))
#define DDRC_CORE_DDRC_ECC_CORR_RMW_M  (BIT(31))
#define DDRC_CORE_DDRC_ECC_CORR_RMW_V  0x1
#define DDRC_CORE_DDRC_ECC_CORR_RMW_S  31
/* DDRC_CORE_DDRC_ECC_CORR_BANK : RO ;bitpos:[30:28] ;default: 3'h0 ; */
/*description: Represents the last ECC correctable error bank address..*/
#define DDRC_CORE_DDRC_ECC_CORR_BANK    0x00000007
#define DDRC_CORE_DDRC_ECC_CORR_BANK_M  ((DDRC_CORE_DDRC_ECC_CORR_BANK_V)<<(DDRC_CORE_DDRC_ECC_CORR_BANK_S))
#define DDRC_CORE_DDRC_ECC_CORR_BANK_V  0x7
#define DDRC_CORE_DDRC_ECC_CORR_BANK_S  28
/* DDRC_CORE_DDRC_ECC_CORR_ROW : RO ;bitpos:[27:12] ;default: 16'h0 ; */
/*description: Represents the last ECC correctable error row address..*/
#define DDRC_CORE_DDRC_ECC_CORR_ROW    0x0000FFFF
#define DDRC_CORE_DDRC_ECC_CORR_ROW_M  ((DDRC_CORE_DDRC_ECC_CORR_ROW_V)<<(DDRC_CORE_DDRC_ECC_CORR_ROW_S))
#define DDRC_CORE_DDRC_ECC_CORR_ROW_V  0xFFFF
#define DDRC_CORE_DDRC_ECC_CORR_ROW_S  12
/* DDRC_CORE_DDRC_ECC_CORR_COL : RO ;bitpos:[11:0] ;default: 12'h0 ; */
/*description: Represents the last ECC correctable error column address..*/
#define DDRC_CORE_DDRC_ECC_CORR_COL    0x00000FFF
#define DDRC_CORE_DDRC_ECC_CORR_COL_M  ((DDRC_CORE_DDRC_ECC_CORR_COL_V)<<(DDRC_CORE_DDRC_ECC_CORR_COL_S))
#define DDRC_CORE_DDRC_ECC_CORR_COL_V  0xFFF
#define DDRC_CORE_DDRC_ECC_CORR_COL_S  0

#define DDRC_CORE_DDRC_ECC_UNCORR_ADDR_REG          (DR_REG_DDRC_CORE_BASE + 0x28C)
/* DDRC_CORE_DDRC_ECC_UNCORR_RMW : RO ;bitpos:[31] ;default: 1'h0 ; */
/*description: Represents the last ECC uncorrectable error is RMW read..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_RMW    (BIT(31))
#define DDRC_CORE_DDRC_ECC_UNCORR_RMW_M  (BIT(31))
#define DDRC_CORE_DDRC_ECC_UNCORR_RMW_V  0x1
#define DDRC_CORE_DDRC_ECC_UNCORR_RMW_S  31
/* DDRC_CORE_DDRC_ECC_UNCORR_BANK : RO ;bitpos:[30:28] ;default: 3'h0 ; */
/*description: Represents the last ECC uncorrectable error bank address..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_BANK    0x00000007
#define DDRC_CORE_DDRC_ECC_UNCORR_BANK_M  ((DDRC_CORE_DDRC_ECC_UNCORR_BANK_V)<<(DDRC_CORE_DDRC_ECC_UNCORR_BANK_S))
#define DDRC_CORE_DDRC_ECC_UNCORR_BANK_V  0x7
#define DDRC_CORE_DDRC_ECC_UNCORR_BANK_S  28
/* DDRC_CORE_DDRC_ECC_UNCORR_ROW : RO ;bitpos:[27:12] ;default: 16'h0 ; */
/*description: Represents the last ECC uncorrectable error row address..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_ROW    0x0000FFFF
#define DDRC_CORE_DDRC_ECC_UNCORR_ROW_M  ((DDRC_CORE_DDRC_ECC_UNCORR_ROW_V)<<(DDRC_CORE_DDRC_ECC_UNCORR_ROW_S))
#define DDRC_CORE_DDRC_ECC_UNCORR_ROW_V  0xFFFF
#define DDRC_CORE_DDRC_ECC_UNCORR_ROW_S  12
/* DDRC_CORE_DDRC_ECC_UNCORR_COL : RO ;bitpos:[11:0] ;default: 12'h0 ; */
/*description: Represents the last ECC uncorrectable error column address..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_COL    0x00000FFF
#define DDRC_CORE_DDRC_ECC_UNCORR_COL_M  ((DDRC_CORE_DDRC_ECC_UNCORR_COL_V)<<(DDRC_CORE_DDRC_ECC_UNCORR_COL_S))
#define DDRC_CORE_DDRC_ECC_UNCORR_COL_V  0xFFF
#define DDRC_CORE_DDRC_ECC_UNCORR_COL_S  0

#define DDRC_CORE_DDRC_ERR_INT_RAW_REG          (DR_REG_DDRC_CORE_BASE + 0x290)
/* DDRC_CORE_DDRC_READ_BUF_OF_INT_RAW : R/SS/WTC ;bitpos:[6] ;default: 1'h0 ; */
/*description: The raw interrupt status of  READ_BUF_OF_INT. Read buffer overflow, caused by cr
edit control error, need reduce credit in DDRC_CREDIT_CTRL_REG..*/
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_RAW    (BIT(6))
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_RAW_M  (BIT(6))
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_RAW_V  0x1
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_RAW_S  6
/* DDRC_CORE_DDRC_TEMP_ERR_INT_RAW : R/SS/WTC ;bitpos:[5] ;default: 1'h0 ; */
/*description: The raw interrupt status of TEMP_ERR_INT. DRAM temperature exceed..*/
#define DDRC_CORE_DDRC_TEMP_ERR_INT_RAW    (BIT(5))
#define DDRC_CORE_DDRC_TEMP_ERR_INT_RAW_M  (BIT(5))
#define DDRC_CORE_DDRC_TEMP_ERR_INT_RAW_V  0x1
#define DDRC_CORE_DDRC_TEMP_ERR_INT_RAW_S  5
/* DDRC_CORE_DDRC_DFI_ERR_INT_RAW : R/SS/WTC ;bitpos:[4] ;default: 1'h0 ; */
/*description: The raw interrupt status of DFI_ERR_INT. PHY report error by dfi interface..*/
#define DDRC_CORE_DDRC_DFI_ERR_INT_RAW    (BIT(4))
#define DDRC_CORE_DDRC_DFI_ERR_INT_RAW_M  (BIT(4))
#define DDRC_CORE_DDRC_DFI_ERR_INT_RAW_V  0x1
#define DDRC_CORE_DDRC_DFI_ERR_INT_RAW_S  4
/* DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_RAW : R/SS/WTC ;bitpos:[3] ;default: 1'h0 ; */
/*description: The raw interrupt status of ECC_UNCORR_OF_INT. ECC uncorrectable error count > t
hreshold..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_RAW    (BIT(3))
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_RAW_M  (BIT(3))
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_RAW_V  0x1
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_RAW_S  3
/* DDRC_CORE_DDRC_ECC_UNCORR_INT_RAW : R/SS/WTC ;bitpos:[2] ;default: 1'h0 ; */
/*description: The raw interrupt status of ECC_UNCORR_INT. ECC uncorrectable error happened..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_RAW    (BIT(2))
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_RAW_M  (BIT(2))
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_RAW_V  0x1
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_RAW_S  2
/* DDRC_CORE_DDRC_ECC_CORR_OF_INT_RAW : R/SS/WTC ;bitpos:[1] ;default: 1'h0 ; */
/*description: The raw interrupt status of ECC_CORR_OF_INT. ECC correctable error count > thres
hold..*/
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_RAW    (BIT(1))
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_RAW_M  (BIT(1))
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_RAW_V  0x1
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_RAW_S  1
/* DDRC_CORE_DDRC_ECC_CORR_INT_RAW : R/SS/WTC ;bitpos:[0] ;default: 1'h0 ; */
/*description: The raw interrupt status of ECC_CORR_INT. ECC correctable error happened..*/
#define DDRC_CORE_DDRC_ECC_CORR_INT_RAW    (BIT(0))
#define DDRC_CORE_DDRC_ECC_CORR_INT_RAW_M  (BIT(0))
#define DDRC_CORE_DDRC_ECC_CORR_INT_RAW_V  0x1
#define DDRC_CORE_DDRC_ECC_CORR_INT_RAW_S  0

#define DDRC_CORE_DDRC_ERR_INT_ST_REG          (DR_REG_DDRC_CORE_BASE + 0x294)
/* DDRC_CORE_DDRC_READ_BUF_OF_INT_ST : RO ;bitpos:[6] ;default: 1'h0 ; */
/*description: The masked interrupt status of  READ_BUF_OF_INT..*/
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_ST    (BIT(6))
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_ST_M  (BIT(6))
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_ST_V  0x1
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_ST_S  6
/* DDRC_CORE_DDRC_TEMP_ERR_INT_ST : RO ;bitpos:[5] ;default: 1'h0 ; */
/*description: The masked interrupt status of TEMP_ERR_INT..*/
#define DDRC_CORE_DDRC_TEMP_ERR_INT_ST    (BIT(5))
#define DDRC_CORE_DDRC_TEMP_ERR_INT_ST_M  (BIT(5))
#define DDRC_CORE_DDRC_TEMP_ERR_INT_ST_V  0x1
#define DDRC_CORE_DDRC_TEMP_ERR_INT_ST_S  5
/* DDRC_CORE_DDRC_DFI_ERR_INT_ST : RO ;bitpos:[4] ;default: 1'h0 ; */
/*description: The masked interrupt status of DFI_ERR_INT..*/
#define DDRC_CORE_DDRC_DFI_ERR_INT_ST    (BIT(4))
#define DDRC_CORE_DDRC_DFI_ERR_INT_ST_M  (BIT(4))
#define DDRC_CORE_DDRC_DFI_ERR_INT_ST_V  0x1
#define DDRC_CORE_DDRC_DFI_ERR_INT_ST_S  4
/* DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ST : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: The masked interrupt status of ECC_UNCORR_OF_INT..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ST    (BIT(3))
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ST_M  (BIT(3))
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ST_V  0x1
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ST_S  3
/* DDRC_CORE_DDRC_ECC_UNCORR_INT_ST : RO ;bitpos:[2] ;default: 1'h0 ; */
/*description: The masked interrupt status of ECC_UNCORR_INT..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_ST    (BIT(2))
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_ST_M  (BIT(2))
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_ST_V  0x1
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_ST_S  2
/* DDRC_CORE_DDRC_ECC_CORR_OF_INT_ST : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: The masked interrupt status of ECC_CORR_OF_INT..*/
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_ST    (BIT(1))
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_ST_M  (BIT(1))
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_ST_V  0x1
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_ST_S  1
/* DDRC_CORE_DDRC_ECC_CORR_INT_ST : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: The masked interrupt status of ECC_CORR_INT..*/
#define DDRC_CORE_DDRC_ECC_CORR_INT_ST    (BIT(0))
#define DDRC_CORE_DDRC_ECC_CORR_INT_ST_M  (BIT(0))
#define DDRC_CORE_DDRC_ECC_CORR_INT_ST_V  0x1
#define DDRC_CORE_DDRC_ECC_CORR_INT_ST_S  0

#define DDRC_CORE_DDRC_ERR_INT_ENA_REG          (DR_REG_DDRC_CORE_BASE + 0x298)
/* DDRC_CORE_DDRC_READ_BUF_OF_INT_ENA : R/W ;bitpos:[6] ;default: 1'h1 ; */
/*description: Write 1 to enable interrupt READ_BUF_OF_INT..*/
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_ENA    (BIT(6))
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_ENA_M  (BIT(6))
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_ENA_V  0x1
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_ENA_S  6
/* DDRC_CORE_DDRC_TEMP_ERR_INT_ENA : R/W ;bitpos:[5] ;default: 1'h1 ; */
/*description: Write 1 to enable interrupt TEMP_ERR_INT..*/
#define DDRC_CORE_DDRC_TEMP_ERR_INT_ENA    (BIT(5))
#define DDRC_CORE_DDRC_TEMP_ERR_INT_ENA_M  (BIT(5))
#define DDRC_CORE_DDRC_TEMP_ERR_INT_ENA_V  0x1
#define DDRC_CORE_DDRC_TEMP_ERR_INT_ENA_S  5
/* DDRC_CORE_DDRC_DFI_ERR_INT_ENA : R/W ;bitpos:[4] ;default: 1'h1 ; */
/*description: Write 1 to enable interrupt DFI_ERR_INT..*/
#define DDRC_CORE_DDRC_DFI_ERR_INT_ENA    (BIT(4))
#define DDRC_CORE_DDRC_DFI_ERR_INT_ENA_M  (BIT(4))
#define DDRC_CORE_DDRC_DFI_ERR_INT_ENA_V  0x1
#define DDRC_CORE_DDRC_DFI_ERR_INT_ENA_S  4
/* DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ENA : R/W ;bitpos:[3] ;default: 1'h1 ; */
/*description: Write 1 to enable interrupt ECC_UNCORR_OF_INT..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ENA    (BIT(3))
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ENA_M  (BIT(3))
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ENA_V  0x1
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_ENA_S  3
/* DDRC_CORE_DDRC_ECC_UNCORR_INT_ENA : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: Write 1 to enable interrupt ECC_UNCORR_INT..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_ENA    (BIT(2))
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_ENA_M  (BIT(2))
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_ENA_V  0x1
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_ENA_S  2
/* DDRC_CORE_DDRC_ECC_CORR_OF_INT_ENA : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: Write 1 to enable interrupt ECC_CORR_OF_INT..*/
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_ENA    (BIT(1))
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_ENA_M  (BIT(1))
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_ENA_V  0x1
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_ENA_S  1
/* DDRC_CORE_DDRC_ECC_CORR_INT_ENA : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Write 1 to enable interrupt ECC_CORR_INT..*/
#define DDRC_CORE_DDRC_ECC_CORR_INT_ENA    (BIT(0))
#define DDRC_CORE_DDRC_ECC_CORR_INT_ENA_M  (BIT(0))
#define DDRC_CORE_DDRC_ECC_CORR_INT_ENA_V  0x1
#define DDRC_CORE_DDRC_ECC_CORR_INT_ENA_S  0

#define DDRC_CORE_DDRC_ERR_INT_CLR_REG          (DR_REG_DDRC_CORE_BASE + 0x29C)
/* DDRC_CORE_DDRC_READ_BUF_OF_INT_CLR : WT ;bitpos:[6] ;default: 1'h0 ; */
/*description: Write 1 to clear interrupt READ_BUF_OF_INT..*/
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_CLR    (BIT(6))
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_CLR_M  (BIT(6))
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_CLR_V  0x1
#define DDRC_CORE_DDRC_READ_BUF_OF_INT_CLR_S  6
/* DDRC_CORE_DDRC_TEMP_ERR_INT_CLR : WT ;bitpos:[5] ;default: 1'h0 ; */
/*description: Write 1 to clear interrupt TEMP_ERR_INT..*/
#define DDRC_CORE_DDRC_TEMP_ERR_INT_CLR    (BIT(5))
#define DDRC_CORE_DDRC_TEMP_ERR_INT_CLR_M  (BIT(5))
#define DDRC_CORE_DDRC_TEMP_ERR_INT_CLR_V  0x1
#define DDRC_CORE_DDRC_TEMP_ERR_INT_CLR_S  5
/* DDRC_CORE_DDRC_DFI_ERR_INT_CLR : WT ;bitpos:[4] ;default: 1'h0 ; */
/*description: Write 1 to clear interrupt DFI_ERR_INT..*/
#define DDRC_CORE_DDRC_DFI_ERR_INT_CLR    (BIT(4))
#define DDRC_CORE_DDRC_DFI_ERR_INT_CLR_M  (BIT(4))
#define DDRC_CORE_DDRC_DFI_ERR_INT_CLR_V  0x1
#define DDRC_CORE_DDRC_DFI_ERR_INT_CLR_S  4
/* DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_CLR : WT ;bitpos:[3] ;default: 1'h0 ; */
/*description: Write 1 to clear interrupt ECC_UNCORR_OF_INT..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_CLR    (BIT(3))
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_CLR_M  (BIT(3))
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_CLR_V  0x1
#define DDRC_CORE_DDRC_ECC_UNCORR_OF_INT_CLR_S  3
/* DDRC_CORE_DDRC_ECC_UNCORR_INT_CLR : WT ;bitpos:[2] ;default: 1'h0 ; */
/*description: Write 1 to clear interrupt ECC_UNCORR_INT..*/
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_CLR    (BIT(2))
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_CLR_M  (BIT(2))
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_CLR_V  0x1
#define DDRC_CORE_DDRC_ECC_UNCORR_INT_CLR_S  2
/* DDRC_CORE_DDRC_ECC_CORR_OF_INT_CLR : WT ;bitpos:[1] ;default: 1'h0 ; */
/*description: Write 1 to clear interrupt ECC_CORR_OF_INT..*/
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_CLR    (BIT(1))
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_CLR_M  (BIT(1))
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_CLR_V  0x1
#define DDRC_CORE_DDRC_ECC_CORR_OF_INT_CLR_S  1
/* DDRC_CORE_DDRC_ECC_CORR_INT_CLR : WT ;bitpos:[0] ;default: 1'h0 ; */
/*description: Write 1 to clear interrupt ECC_CORR_INT..*/
#define DDRC_CORE_DDRC_ECC_CORR_INT_CLR    (BIT(0))
#define DDRC_CORE_DDRC_ECC_CORR_INT_CLR_M  (BIT(0))
#define DDRC_CORE_DDRC_ECC_CORR_INT_CLR_V  0x1
#define DDRC_CORE_DDRC_ECC_CORR_INT_CLR_S  0

#define DDRC_CORE_REG_VERSION_REG          (DR_REG_DDRC_CORE_BASE + 0x2F0)
/* DDRC_CORE_REG_VERSION : R/W ;bitpos:[31:0] ;default: 32'h02410210 ; */
/*description: Represents reg_file version..*/
#define DDRC_CORE_REG_VERSION    0xFFFFFFFF
#define DDRC_CORE_REG_VERSION_M  ((DDRC_CORE_REG_VERSION_V)<<(DDRC_CORE_REG_VERSION_S))
#define DDRC_CORE_REG_VERSION_V  0xFFFFFFFF
#define DDRC_CORE_REG_VERSION_S  0

#define DDRC_CORE_REG_ECO0_REG          (DR_REG_DDRC_CORE_BASE + 0x2F4)
/* DDRC_CORE_REG_ECO0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ECO use..*/
#define DDRC_CORE_REG_ECO0    0xFFFFFFFF
#define DDRC_CORE_REG_ECO0_M  ((DDRC_CORE_REG_ECO0_V)<<(DDRC_CORE_REG_ECO0_S))
#define DDRC_CORE_REG_ECO0_V  0xFFFFFFFF
#define DDRC_CORE_REG_ECO0_S  0

#define DDRC_CORE_REG_ECO1_REG          (DR_REG_DDRC_CORE_BASE + 0x2F8)
/* DDRC_CORE_REG_ECO1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ECO use..*/
#define DDRC_CORE_REG_ECO1    0xFFFFFFFF
#define DDRC_CORE_REG_ECO1_M  ((DDRC_CORE_REG_ECO1_V)<<(DDRC_CORE_REG_ECO1_S))
#define DDRC_CORE_REG_ECO1_V  0xFFFFFFFF
#define DDRC_CORE_REG_ECO1_S  0

#define DDRC_CORE_REG_ECO2_REG          (DR_REG_DDRC_CORE_BASE + 0x2FC)
/* DDRC_CORE_REG_ECO2 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ECO use..*/
#define DDRC_CORE_REG_ECO2    0xFFFFFFFF
#define DDRC_CORE_REG_ECO2_M  ((DDRC_CORE_REG_ECO2_V)<<(DDRC_CORE_REG_ECO2_S))
#define DDRC_CORE_REG_ECO2_V  0xFFFFFFFF
#define DDRC_CORE_REG_ECO2_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_DDRC_CORE_REG_H_ */
