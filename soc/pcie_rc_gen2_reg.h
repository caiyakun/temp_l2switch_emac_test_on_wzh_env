/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_PCIE_RC_GEN2_REG_H_
#define _SOC_PCIE_RC_GEN2_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define PCIE_RC_GEN2_PCIE_REG_CLK_EN_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0xC)
/* PCIE_RC_GEN2_PCIE_CLK_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether to force on reg_file clock.; 0 : Not force on; 1 : Force on.*/
#define PCIE_RC_GEN2_PCIE_CLK_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_CLK_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_CLK_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CLK_EN_S  0

#define PCIE_RC_GEN2_PCIE_CFGCTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x84)
/* PCIE_RC_GEN2_PCIE_PRIMARY_BUS_NUM : R/W ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Configure the chosen primary Bus# of the rootport.*/
#define PCIE_RC_GEN2_PCIE_PRIMARY_BUS_NUM    0x000000FF
#define PCIE_RC_GEN2_PCIE_PRIMARY_BUS_NUM_M  ((PCIE_RC_GEN2_PCIE_PRIMARY_BUS_NUM_V)<<(PCIE_RC_GEN2_PCIE_PRIMARY_BUS_NUM_S))
#define PCIE_RC_GEN2_PCIE_PRIMARY_BUS_NUM_V  0xFF
#define PCIE_RC_GEN2_PCIE_PRIMARY_BUS_NUM_S  24
/* PCIE_RC_GEN2_PCIE_PRIMARY_DEV_NUM : R/W ;bitpos:[23:19] ;default: 5'h0 ; */
/*description: Configure the chosen primary Dev# of the rootport.*/
#define PCIE_RC_GEN2_PCIE_PRIMARY_DEV_NUM    0x0000001F
#define PCIE_RC_GEN2_PCIE_PRIMARY_DEV_NUM_M  ((PCIE_RC_GEN2_PCIE_PRIMARY_DEV_NUM_V)<<(PCIE_RC_GEN2_PCIE_PRIMARY_DEV_NUM_S))
#define PCIE_RC_GEN2_PCIE_PRIMARY_DEV_NUM_V  0x1F
#define PCIE_RC_GEN2_PCIE_PRIMARY_DEV_NUM_S  19
/* PCIE_RC_GEN2_PCIE_LTSSM_DISABLE : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether to disable PCIe LTSSM state move.; 0 : Not disable; 1 : Disab
le.*/
#define PCIE_RC_GEN2_PCIE_LTSSM_DISABLE    (BIT(2))
#define PCIE_RC_GEN2_PCIE_LTSSM_DISABLE_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_LTSSM_DISABLE_V  0x1
#define PCIE_RC_GEN2_PCIE_LTSSM_DISABLE_S  2

#define PCIE_RC_GEN2_PCIE_PCI_IDS0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x98)
/* PCIE_RC_GEN2_PCIE_DEVICE_ID : R/W ;bitpos:[31:16] ;default: 16'h1111 ; */
/*description: Configures the Product Device ID..*/
#define PCIE_RC_GEN2_PCIE_DEVICE_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_DEVICE_ID_M  ((PCIE_RC_GEN2_PCIE_DEVICE_ID_V)<<(PCIE_RC_GEN2_PCIE_DEVICE_ID_S))
#define PCIE_RC_GEN2_PCIE_DEVICE_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_DEVICE_ID_S  16
/* PCIE_RC_GEN2_PCIE_VENDOR_ID : R/W ;bitpos:[15:0] ;default: 16'h1556 ; */
/*description: Configures the Product Vendor ID..*/
#define PCIE_RC_GEN2_PCIE_VENDOR_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_VENDOR_ID_M  ((PCIE_RC_GEN2_PCIE_VENDOR_ID_V)<<(PCIE_RC_GEN2_PCIE_VENDOR_ID_S))
#define PCIE_RC_GEN2_PCIE_VENDOR_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_VENDOR_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCI_IDS1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x9C)
/* PCIE_RC_GEN2_PCIE_CLASS_CODE : R/W ;bitpos:[31:8] ;default: 24'hd2100 ; */
/*description: Configures the Product Class Code..*/
#define PCIE_RC_GEN2_PCIE_CLASS_CODE    0x00FFFFFF
#define PCIE_RC_GEN2_PCIE_CLASS_CODE_M  ((PCIE_RC_GEN2_PCIE_CLASS_CODE_V)<<(PCIE_RC_GEN2_PCIE_CLASS_CODE_S))
#define PCIE_RC_GEN2_PCIE_CLASS_CODE_V  0xFFFFFF
#define PCIE_RC_GEN2_PCIE_CLASS_CODE_S  8
/* PCIE_RC_GEN2_PCIE_REVISION_ID : R/W ;bitpos:[7:0] ;default: 8'h2 ; */
/*description: Configures the Product Revision ID..*/
#define PCIE_RC_GEN2_PCIE_REVISION_ID    0x000000FF
#define PCIE_RC_GEN2_PCIE_REVISION_ID_M  ((PCIE_RC_GEN2_PCIE_REVISION_ID_V)<<(PCIE_RC_GEN2_PCIE_REVISION_ID_S))
#define PCIE_RC_GEN2_PCIE_REVISION_ID_V  0xFF
#define PCIE_RC_GEN2_PCIE_REVISION_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCI_IDS2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0xA0)
/* PCIE_RC_GEN2_PCIE_SUB_DEVICE_ID : R/W ;bitpos:[31:16] ;default: 16'h1111 ; */
/*description: Configures the Product Subsystem Device ID..*/
#define PCIE_RC_GEN2_PCIE_SUB_DEVICE_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_SUB_DEVICE_ID_M  ((PCIE_RC_GEN2_PCIE_SUB_DEVICE_ID_V)<<(PCIE_RC_GEN2_PCIE_SUB_DEVICE_ID_S))
#define PCIE_RC_GEN2_PCIE_SUB_DEVICE_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_SUB_DEVICE_ID_S  16
/* PCIE_RC_GEN2_PCIE_SUB_VENDOR_ID : R/W ;bitpos:[15:0] ;default: 16'h1556 ; */
/*description: Configures the Product Subsystem Vendor ID..*/
#define PCIE_RC_GEN2_PCIE_SUB_VENDOR_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_SUB_VENDOR_ID_M  ((PCIE_RC_GEN2_PCIE_SUB_VENDOR_ID_V)<<(PCIE_RC_GEN2_PCIE_SUB_VENDOR_ID_S))
#define PCIE_RC_GEN2_PCIE_SUB_VENDOR_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_SUB_VENDOR_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCI_EXT_LPM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0xA4)
/* PCIE_RC_GEN2_PCIE_PME_FROM_D3COLD : R/W ;bitpos:[31] ;default: 1'h1 ; */
/*description: Configures whether or not support PME from D3cold.; 0 : Not support; 1 : Support.*/
#define PCIE_RC_GEN2_PCIE_PME_FROM_D3COLD    (BIT(31))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D3COLD_M  (BIT(31))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D3COLD_V  0x1
#define PCIE_RC_GEN2_PCIE_PME_FROM_D3COLD_S  31
/* PCIE_RC_GEN2_PCIE_PME_FROM_D3HOT : R/W ;bitpos:[30] ;default: 1'h1 ; */
/*description: Configures whether or not support PME from D3hot.; 0 : Not support; 1 : Support.*/
#define PCIE_RC_GEN2_PCIE_PME_FROM_D3HOT    (BIT(30))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D3HOT_M  (BIT(30))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D3HOT_V  0x1
#define PCIE_RC_GEN2_PCIE_PME_FROM_D3HOT_S  30
/* PCIE_RC_GEN2_PCIE_PME_FROM_D2 : R/W ;bitpos:[29] ;default: 1'h1 ; */
/*description: Configures whether or not support PME from D2.; 0 : Not support; 1 : Support.*/
#define PCIE_RC_GEN2_PCIE_PME_FROM_D2    (BIT(29))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D2_M  (BIT(29))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D2_V  0x1
#define PCIE_RC_GEN2_PCIE_PME_FROM_D2_S  29
/* PCIE_RC_GEN2_PCIE_PME_FROM_D1 : R/W ;bitpos:[28] ;default: 1'h1 ; */
/*description: Configures whether or not support PME from D1.; 0 : Not support; 1 : Support.*/
#define PCIE_RC_GEN2_PCIE_PME_FROM_D1    (BIT(28))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D1_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D1_V  0x1
#define PCIE_RC_GEN2_PCIE_PME_FROM_D1_S  28
/* PCIE_RC_GEN2_PCIE_PME_FROM_D0 : R/W ;bitpos:[27] ;default: 1'h1 ; */
/*description: Configures whether or not support PME from D0.; 0 : Not support; 1 : Support.*/
#define PCIE_RC_GEN2_PCIE_PME_FROM_D0    (BIT(27))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D0_M  (BIT(27))
#define PCIE_RC_GEN2_PCIE_PME_FROM_D0_V  0x1
#define PCIE_RC_GEN2_PCIE_PME_FROM_D0_S  27
/* PCIE_RC_GEN2_PCIE_SUPPORT_D2 : R/W ;bitpos:[26] ;default: 1'h1 ; */
/*description: Configures whether or not support D2.; 0 : Not support; 1 : Support.*/
#define PCIE_RC_GEN2_PCIE_SUPPORT_D2    (BIT(26))
#define PCIE_RC_GEN2_PCIE_SUPPORT_D2_M  (BIT(26))
#define PCIE_RC_GEN2_PCIE_SUPPORT_D2_V  0x1
#define PCIE_RC_GEN2_PCIE_SUPPORT_D2_S  26
/* PCIE_RC_GEN2_PCIE_SUPPORT_D1 : R/W ;bitpos:[25] ;default: 1'h1 ; */
/*description: Configures whether or not support D1.; 0 : Not support; 1 : Support.*/
#define PCIE_RC_GEN2_PCIE_SUPPORT_D1    (BIT(25))
#define PCIE_RC_GEN2_PCIE_SUPPORT_D1_M  (BIT(25))
#define PCIE_RC_GEN2_PCIE_SUPPORT_D1_V  0x1
#define PCIE_RC_GEN2_PCIE_SUPPORT_D1_S  25
/* PCIE_RC_GEN2_PCIE_AUX_CURRENT : R/W ;bitpos:[24:22] ;default: 3'h0 ; */
/*description: Configures the Auxiliary current..*/
#define PCIE_RC_GEN2_PCIE_AUX_CURRENT    0x00000007
#define PCIE_RC_GEN2_PCIE_AUX_CURRENT_M  ((PCIE_RC_GEN2_PCIE_AUX_CURRENT_V)<<(PCIE_RC_GEN2_PCIE_AUX_CURRENT_S))
#define PCIE_RC_GEN2_PCIE_AUX_CURRENT_V  0x7
#define PCIE_RC_GEN2_PCIE_AUX_CURRENT_S  22

#define PCIE_RC_GEN2_PCIE_DEVICE_CAP_SET_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0xC0)
/* PCIE_RC_GEN2_PCIE_FLR_CAP : R/W ;bitpos:[28] ;default: 1'h1 ; */
/*description: Configures whether or not the Function supports Function Level Reset.; 0: Not su
pport; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_FLR_CAP    (BIT(28))
#define PCIE_RC_GEN2_PCIE_FLR_CAP_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_FLR_CAP_V  0x1
#define PCIE_RC_GEN2_PCIE_FLR_CAP_S  28
/* PCIE_RC_GEN2_PCIE_EP_L1_ACCEPT_LATENCY : R/W ;bitpos:[11:9] ;default: 3'h7 ; */
/*description: Configures the acceptable total latency from L1 to L0 state.; 0x0: 1us; 0x1: 2us
; 0x2: 4us; 0x3: 8us; 0x4: 16us; 0x5: 32us; 0x6: 64us; 0x7: No limit.*/
#define PCIE_RC_GEN2_PCIE_EP_L1_ACCEPT_LATENCY    0x00000007
#define PCIE_RC_GEN2_PCIE_EP_L1_ACCEPT_LATENCY_M  ((PCIE_RC_GEN2_PCIE_EP_L1_ACCEPT_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_EP_L1_ACCEPT_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_EP_L1_ACCEPT_LATENCY_V  0x7
#define PCIE_RC_GEN2_PCIE_EP_L1_ACCEPT_LATENCY_S  9
/* PCIE_RC_GEN2_PCIE_EP_L0S_ACCEPT_LATENCY : R/W ;bitpos:[8:6] ;default: 3'h7 ; */
/*description: Configures the acceptable total latency from L0s to L0 state.; 0x0: 64ns; 0x1: 1
28ns; 0x2: 256ns; 0x3: 512ns; 0x4: 1us; 0x5: 2us; 0x6: 4us; 0x7: No limit.*/
#define PCIE_RC_GEN2_PCIE_EP_L0S_ACCEPT_LATENCY    0x00000007
#define PCIE_RC_GEN2_PCIE_EP_L0S_ACCEPT_LATENCY_M  ((PCIE_RC_GEN2_PCIE_EP_L0S_ACCEPT_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_EP_L0S_ACCEPT_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_EP_L0S_ACCEPT_LATENCY_V  0x7
#define PCIE_RC_GEN2_PCIE_EP_L0S_ACCEPT_LATENCY_S  6

#define PCIE_RC_GEN2_PCIE_LINK_CAP_SET_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0xC8)
/* PCIE_RC_GEN2_PCIE_PORT_NUM : RO ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Configures the PCIe Port number for the given PCIe link..*/
#define PCIE_RC_GEN2_PCIE_PORT_NUM    0x000000FF
#define PCIE_RC_GEN2_PCIE_PORT_NUM_M  ((PCIE_RC_GEN2_PCIE_PORT_NUM_V)<<(PCIE_RC_GEN2_PCIE_PORT_NUM_S))
#define PCIE_RC_GEN2_PCIE_PORT_NUM_V  0xFF
#define PCIE_RC_GEN2_PCIE_PORT_NUM_S  24
/* PCIE_RC_GEN2_PCIE_CLK_PM : R/W ;bitpos:[18] ;default: 1'h0 ; */
/*description: Configures whether or not the component tolerate the removal of any reference cl
ock via the CLKREQ# mechanism when the link is in L1 and L2/L3 Ready Link states
.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_CLK_PM    (BIT(18))
#define PCIE_RC_GEN2_PCIE_CLK_PM_M  (BIT(18))
#define PCIE_RC_GEN2_PCIE_CLK_PM_V  0x1
#define PCIE_RC_GEN2_PCIE_CLK_PM_S  18
/* PCIE_RC_GEN2_PCIE_L1_EXIT_LATENCY : R/W ;bitpos:[17:15] ;default: 3'h6 ; */
/*description: Configures the maximum L1 exit latency.; 0x0: 1us; 0x1: 2us; 0x2: 4us; 0x3: 8us;
 0x4: 16us; 0x5: 32us; 0x6: 64us; 0x7: More than 64us.*/
#define PCIE_RC_GEN2_PCIE_L1_EXIT_LATENCY    0x00000007
#define PCIE_RC_GEN2_PCIE_L1_EXIT_LATENCY_M  ((PCIE_RC_GEN2_PCIE_L1_EXIT_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_L1_EXIT_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_L1_EXIT_LATENCY_V  0x7
#define PCIE_RC_GEN2_PCIE_L1_EXIT_LATENCY_S  15
/* PCIE_RC_GEN2_PCIE_L0S_EXIT_LATENCY : R/W ;bitpos:[14:12] ;default: 3'h4 ; */
/*description: Configures the maximum L0s exit latency.; 0x0: 64ns; 0x1: 128ns; 0x2: 256ns; 0x3
: 512ns; 0x4: 1us; 0x5: 2us; 0x6: 4us; 0x7: More than 4us.*/
#define PCIE_RC_GEN2_PCIE_L0S_EXIT_LATENCY    0x00000007
#define PCIE_RC_GEN2_PCIE_L0S_EXIT_LATENCY_M  ((PCIE_RC_GEN2_PCIE_L0S_EXIT_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_L0S_EXIT_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_L0S_EXIT_LATENCY_V  0x7
#define PCIE_RC_GEN2_PCIE_L0S_EXIT_LATENCY_S  12
/* PCIE_RC_GEN2_PCIE_ASPM_SUP : R/W ;bitpos:[11:10] ;default: 2'h3 ; */
/*description: Configures ASPM supported level.; 0x0: No ASPM Support; 0x1: L0s Supported; 0x2:
 L1 Supported; 0x3: L0s and L1 Supported.*/
#define PCIE_RC_GEN2_PCIE_ASPM_SUP    0x00000003
#define PCIE_RC_GEN2_PCIE_ASPM_SUP_M  ((PCIE_RC_GEN2_PCIE_ASPM_SUP_V)<<(PCIE_RC_GEN2_PCIE_ASPM_SUP_S))
#define PCIE_RC_GEN2_PCIE_ASPM_SUP_V  0x3
#define PCIE_RC_GEN2_PCIE_ASPM_SUP_S  10

#define PCIE_RC_GEN2_PCIE_SPC2_CAP_SET_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0xD8)
/* PCIE_RC_GEN2_PCIE_ASPM_L1_ENTRY_LATENCY : R/W ;bitpos:[27:18] ;default: 10'h64 ; */
/*description: Configures the ASPM L1 entry delay (in steps of 256ns, from 1~1023). The value i
s rounded up to the nearest us. For backward compatibility purposes, a value of
0 indicates an entry delay of 4us..*/
#define PCIE_RC_GEN2_PCIE_ASPM_L1_ENTRY_LATENCY    0x000003FF
#define PCIE_RC_GEN2_PCIE_ASPM_L1_ENTRY_LATENCY_M  ((PCIE_RC_GEN2_PCIE_ASPM_L1_ENTRY_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_ASPM_L1_ENTRY_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_ASPM_L1_ENTRY_LATENCY_V  0x3FF
#define PCIE_RC_GEN2_PCIE_ASPM_L1_ENTRY_LATENCY_S  18
/* PCIE_RC_GEN2_PCIE_ASPM_L0S_ENTRY_LATENCY : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures the ASPM L0s entry delay (in steps of 256ns, from 4~31). The value is
 rounded up to the nearest us. A value of 0 indicates an entry delay of 4us..*/
#define PCIE_RC_GEN2_PCIE_ASPM_L0S_ENTRY_LATENCY    0x0000001F
#define PCIE_RC_GEN2_PCIE_ASPM_L0S_ENTRY_LATENCY_M  ((PCIE_RC_GEN2_PCIE_ASPM_L0S_ENTRY_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_ASPM_L0S_ENTRY_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_ASPM_L0S_ENTRY_LATENCY_V  0x1F
#define PCIE_RC_GEN2_PCIE_ASPM_L0S_ENTRY_LATENCY_S  13
/* PCIE_RC_GEN2_PCIE_ECRC_CHK_SUP : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: Configures whether or not support ECRC check.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_ECRC_CHK_SUP    (BIT(2))
#define PCIE_RC_GEN2_PCIE_ECRC_CHK_SUP_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_ECRC_CHK_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_ECRC_CHK_SUP_S  2
/* PCIE_RC_GEN2_PCIE_ECRC_GEN_SUP : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: Configures whether or not support ECRC generate.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_ECRC_GEN_SUP    (BIT(1))
#define PCIE_RC_GEN2_PCIE_ECRC_GEN_SUP_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_ECRC_GEN_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_ECRC_GEN_SUP_S  1

#define PCIE_RC_GEN2_PCIE_NFTS_SET_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0xDC)
/* PCIE_RC_GEN2_PCIE_NFTS_GEN2 : R/W ;bitpos:[15:8] ;default: 8'h20 ; */
/*description: Configures Number of Fast Training Sequences at Gen2 5.0GT/s..*/
#define PCIE_RC_GEN2_PCIE_NFTS_GEN2    0x000000FF
#define PCIE_RC_GEN2_PCIE_NFTS_GEN2_M  ((PCIE_RC_GEN2_PCIE_NFTS_GEN2_V)<<(PCIE_RC_GEN2_PCIE_NFTS_GEN2_S))
#define PCIE_RC_GEN2_PCIE_NFTS_GEN2_V  0xFF
#define PCIE_RC_GEN2_PCIE_NFTS_GEN2_S  8
/* PCIE_RC_GEN2_PCIE_NFTS_GEN1 : R/W ;bitpos:[7:0] ;default: 8'h20 ; */
/*description: Configures Number of Fast Training Sequences at Gen1 2.5GT/s..*/
#define PCIE_RC_GEN2_PCIE_NFTS_GEN1    0x000000FF
#define PCIE_RC_GEN2_PCIE_NFTS_GEN1_M  ((PCIE_RC_GEN2_PCIE_NFTS_GEN1_V)<<(PCIE_RC_GEN2_PCIE_NFTS_GEN1_S))
#define PCIE_RC_GEN2_PCIE_NFTS_GEN1_V  0xFF
#define PCIE_RC_GEN2_PCIE_NFTS_GEN1_S  0

#define PCIE_RC_GEN2_PCIE_L1SS_CAP_SET_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0xE0)
/* PCIE_RC_GEN2_PCIE_L1SS_L10 : R/W ;bitpos:[27:24] ;default: 4'h4 ; */
/*description: Configures the power state to use in L1.0 when L1 substates are enabled..*/
#define PCIE_RC_GEN2_PCIE_L1SS_L10    0x0000000F
#define PCIE_RC_GEN2_PCIE_L1SS_L10_M  ((PCIE_RC_GEN2_PCIE_L1SS_L10_V)<<(PCIE_RC_GEN2_PCIE_L1SS_L10_S))
#define PCIE_RC_GEN2_PCIE_L1SS_L10_V  0xF
#define PCIE_RC_GEN2_PCIE_L1SS_L10_S  24
/* PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_VALUE : R/W ;bitpos:[23:19] ;default: 5'h5 ; */
/*description: Configures the Port T_POWER_ON Value..*/
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_VALUE    0x0000001F
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_VALUE_M  ((PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_VALUE_V)<<(PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_VALUE_S))
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_VALUE_V  0x1F
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_VALUE_S  19
/* PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_SCALE : R/W ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: Configures the scale used for Port T_POWER_ON Value.; 0x0: 2us; 0x1: 10us; 0x2:
100 us; 0x3: Reserved.*/
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_SCALE    0x00000003
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_SCALE_M  ((PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_SCALE_V)<<(PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_SCALE_S))
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_SCALE_V  0x3
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_POWER_ON_SCALE_S  16
/* PCIE_RC_GEN2_PCIE_L1SS_PORT_T_COMMON_RESTORE : R/W ;bitpos:[15:8] ;default: 8'hff ; */
/*description: Configures the Port Common_Mode_Restore_Time, unit us us..*/
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_COMMON_RESTORE    0x000000FF
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_COMMON_RESTORE_M  ((PCIE_RC_GEN2_PCIE_L1SS_PORT_T_COMMON_RESTORE_V)<<(PCIE_RC_GEN2_PCIE_L1SS_PORT_T_COMMON_RESTORE_S))
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_COMMON_RESTORE_V  0xFF
#define PCIE_RC_GEN2_PCIE_L1SS_PORT_T_COMMON_RESTORE_S  8
/* PCIE_RC_GEN2_PCIE_L1SS_SUB_SUP : R/W ;bitpos:[4] ;default: 1'h1 ; */
/*description: Configures whether or not support L1 PM Substates.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1SS_SUB_SUP    (BIT(4))
#define PCIE_RC_GEN2_PCIE_L1SS_SUB_SUP_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_L1SS_SUB_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1SS_SUB_SUP_S  4
/* PCIE_RC_GEN2_PCIE_L1SS_ASPM_L11_SUP : R/W ;bitpos:[3] ;default: 1'h1 ; */
/*description: Configures whether or not support ASPM L1.1.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1SS_ASPM_L11_SUP    (BIT(3))
#define PCIE_RC_GEN2_PCIE_L1SS_ASPM_L11_SUP_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_L1SS_ASPM_L11_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1SS_ASPM_L11_SUP_S  3
/* PCIE_RC_GEN2_PCIE_L1SS_ASPM_L12_SUP : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: Configures whether or not support ASPM L1.2.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1SS_ASPM_L12_SUP    (BIT(2))
#define PCIE_RC_GEN2_PCIE_L1SS_ASPM_L12_SUP_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_L1SS_ASPM_L12_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1SS_ASPM_L12_SUP_S  2
/* PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L11_SUP : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: Configures whether or not support PCI-PM L1.1.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L11_SUP    (BIT(1))
#define PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L11_SUP_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L11_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L11_SUP_S  1
/* PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L12_SUP : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: Configures whether or not support PCI-PM L1.2.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L12_SUP    (BIT(0))
#define PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L12_SUP_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L12_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1SS_PCIPM_L12_SUP_S  0

#define PCIE_RC_GEN2_PCIE_BUS_DEVICE_NUM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x144)
/* PCIE_RC_GEN2_PCIE_BUS_NUM : RO ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Represents Bus Number (ID) have been assigned to the device..*/
#define PCIE_RC_GEN2_PCIE_BUS_NUM    0x000000FF
#define PCIE_RC_GEN2_PCIE_BUS_NUM_M  ((PCIE_RC_GEN2_PCIE_BUS_NUM_V)<<(PCIE_RC_GEN2_PCIE_BUS_NUM_S))
#define PCIE_RC_GEN2_PCIE_BUS_NUM_V  0xFF
#define PCIE_RC_GEN2_PCIE_BUS_NUM_S  8
/* PCIE_RC_GEN2_PCIE_DEVICE_NUM : RO ;bitpos:[7:3] ;default: 5'h0 ; */
/*description: Represents Device Number (ID) have been assigned to the device..*/
#define PCIE_RC_GEN2_PCIE_DEVICE_NUM    0x0000001F
#define PCIE_RC_GEN2_PCIE_DEVICE_NUM_M  ((PCIE_RC_GEN2_PCIE_DEVICE_NUM_V)<<(PCIE_RC_GEN2_PCIE_DEVICE_NUM_S))
#define PCIE_RC_GEN2_PCIE_DEVICE_NUM_V  0x1F
#define PCIE_RC_GEN2_PCIE_DEVICE_NUM_S  3

#define PCIE_RC_GEN2_PCIE_LOCAL_INT_MASK_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x180)
/* PCIE_RC_GEN2_PCIE_LOCAL_PM_CHG_INT_MASK : R/W ;bitpos:[31:24] ;default: 8'hff ; */
/*description: Write 1 to enable interrupt PM_MSI_INT. Refer to PLDA 23.2 for details.*/
#define PCIE_RC_GEN2_PCIE_LOCAL_PM_CHG_INT_MASK    0x000000FF
#define PCIE_RC_GEN2_PCIE_LOCAL_PM_CHG_INT_MASK_M  ((PCIE_RC_GEN2_PCIE_LOCAL_PM_CHG_INT_MASK_V)<<(PCIE_RC_GEN2_PCIE_LOCAL_PM_CHG_INT_MASK_S))
#define PCIE_RC_GEN2_PCIE_LOCAL_PM_CHG_INT_MASK_V  0xFF
#define PCIE_RC_GEN2_PCIE_LOCAL_PM_CHG_INT_MASK_S  24
/* PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_MASK : R/W ;bitpos:[18] ;default: 1'h1 ; */
/*description: Write 1 to enable interrupt FLR_REQ_INT. Received Function Level Reset request..*/
#define PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_MASK    (BIT(18))
#define PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_MASK_M  (BIT(18))
#define PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_MASK_S  18
/* PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_MASK : R/W ;bitpos:[17] ;default: 1'h1 ; */
/*description: Write 1 to enable interrupt L2_ENTRY_INT. Received L2 Entry request..*/
#define PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_MASK    (BIT(17))
#define PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_MASK_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_MASK_S  17
/* PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_MASK : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Write 1 to enable interrupt PCIE_RESET_INT. PCIe IP reset happened..*/
#define PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_MASK    (BIT(16))
#define PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_MASK_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_MASK_S  16
/* PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_MASK : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Write 1 to enable interrupt DMA_ERR.*/
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_MASK    0x000000FF
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_MASK_M  ((PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_MASK_V)<<(PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_MASK_S))
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_MASK_V  0xFF
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_MASK_S  8
/* PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_MASK : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Write 1 to enable interrupt DMA_END.*/
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_MASK    0x000000FF
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_MASK_M  ((PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_MASK_V)<<(PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_MASK_S))
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_MASK_V  0xFF
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_MASK_S  0

#define PCIE_RC_GEN2_PCIE_LOCAL_INT_RAW_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x184)
/* PCIE_RC_GEN2_PCIE_LOCAL_PM_MSI_INT_RAW : R/W1C ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: The raw interrupt status of PM_MSI_INT. Refer to PLDA 23.2 for details.*/
#define PCIE_RC_GEN2_PCIE_LOCAL_PM_MSI_INT_RAW    0x000000FF
#define PCIE_RC_GEN2_PCIE_LOCAL_PM_MSI_INT_RAW_M  ((PCIE_RC_GEN2_PCIE_LOCAL_PM_MSI_INT_RAW_V)<<(PCIE_RC_GEN2_PCIE_LOCAL_PM_MSI_INT_RAW_S))
#define PCIE_RC_GEN2_PCIE_LOCAL_PM_MSI_INT_RAW_V  0xFF
#define PCIE_RC_GEN2_PCIE_LOCAL_PM_MSI_INT_RAW_S  24
/* PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_RAW : R/W1C ;bitpos:[18] ;default: 1'h0 ; */
/*description: The raw interrupt status of FLR_REQ_INT. Received Function Level Reset request..*/
#define PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_RAW    (BIT(18))
#define PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_RAW_M  (BIT(18))
#define PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_RAW_V  0x1
#define PCIE_RC_GEN2_PCIE_LOCAL_FLR_REQ_INT_RAW_S  18
/* PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_RAW : R/W1C ;bitpos:[17] ;default: 1'h0 ; */
/*description: The raw interrupt status of L2_ENTRY_INT. Received L2 Entry request..*/
#define PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_RAW    (BIT(17))
#define PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_RAW_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_RAW_V  0x1
#define PCIE_RC_GEN2_PCIE_LOCAL_L2_ENTRY_REQ_INT_RAW_S  17
/* PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_RAW : R/W1C ;bitpos:[16] ;default: 1'h1 ; */
/*description: The raw interrupt status of PCIE_RESET_INT. PCIe IP reset happened..*/
#define PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_RAW    (BIT(16))
#define PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_RAW_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_RAW_V  0x1
#define PCIE_RC_GEN2_PCIE_LOCAL_PCIE_RESET_INT_RAW_S  16
/* PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_RAW : R/W1C ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: The raw interrupt status of DMA transfer ERROR.*/
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_RAW    0x000000FF
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_RAW_M  ((PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_RAW_V)<<(PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_RAW_S))
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_RAW_V  0xFF
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_ERR_INT_RAW_S  8
/* PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_RAW : R/W1C ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: The raw interrupt status of DMA transfer ended.*/
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_RAW    0x000000FF
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_RAW_M  ((PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_RAW_V)<<(PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_RAW_S))
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_RAW_V  0xFF
#define PCIE_RC_GEN2_PCIE_LOCAL_DMA_END_INT_RAW_S  0

#define PCIE_RC_GEN2_PCIE_PM_CTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x198)
/* PCIE_RC_GEN2_PCIE_PMC_ASPM_L1_ENTRY_DIS : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Configures whether or not disable ASPM L1 entry.; 0 : Not disable; 1 : Disable.*/
#define PCIE_RC_GEN2_PCIE_PMC_ASPM_L1_ENTRY_DIS    (BIT(17))
#define PCIE_RC_GEN2_PCIE_PMC_ASPM_L1_ENTRY_DIS_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_PMC_ASPM_L1_ENTRY_DIS_V  0x1
#define PCIE_RC_GEN2_PCIE_PMC_ASPM_L1_ENTRY_DIS_S  17
/* PCIE_RC_GEN2_PCIE_PMC_ASPM_L0S_ENTRY_DIS : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Configures whether or not disable ASPM L0s entry.; 0 : Not disable; 1 : Disable.*/
#define PCIE_RC_GEN2_PCIE_PMC_ASPM_L0S_ENTRY_DIS    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PMC_ASPM_L0S_ENTRY_DIS_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PMC_ASPM_L0S_ENTRY_DIS_V  0x1
#define PCIE_RC_GEN2_PCIE_PMC_ASPM_L0S_ENTRY_DIS_S  16
/* PCIE_RC_GEN2_PCIE_PMC_REF_CLK_RM : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not user allows remove PCIe reference clock.; 0 : Not allo
w; 1 : Allow.*/
#define PCIE_RC_GEN2_PCIE_PMC_REF_CLK_RM    (BIT(8))
#define PCIE_RC_GEN2_PCIE_PMC_REF_CLK_RM_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_PMC_REF_CLK_RM_V  0x1
#define PCIE_RC_GEN2_PCIE_PMC_REF_CLK_RM_S  8
/* PCIE_RC_GEN2_PCIE_PMC_L2_ENTRY_ACK : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not user is ready for L2 state entry.; 0 : Not ready; 1 :
Ready.*/
#define PCIE_RC_GEN2_PCIE_PMC_L2_ENTRY_ACK    (BIT(5))
#define PCIE_RC_GEN2_PCIE_PMC_L2_ENTRY_ACK_M  (BIT(5))
#define PCIE_RC_GEN2_PCIE_PMC_L2_ENTRY_ACK_V  0x1
#define PCIE_RC_GEN2_PCIE_PMC_L2_ENTRY_ACK_S  5
/* PCIE_RC_GEN2_PCIE_PMC_PME_SEND : R/W/SC ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not trigger a PME# event on PCIe link. HW will auto clear
this filed after PME# send.; 0 : Not trigger; 1 : Trigger.*/
#define PCIE_RC_GEN2_PCIE_PMC_PME_SEND    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PMC_PME_SEND_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PMC_PME_SEND_V  0x1
#define PCIE_RC_GEN2_PCIE_PMC_PME_SEND_S  0

#define PCIE_RC_GEN2_PCIE_PM_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x19C)
/* PCIE_RC_GEN2_PCIE_PMS_L1SS_STA : RO ;bitpos:[10:8] ;default: 3'h0 ; */
/*description: Represents L1 PM substate.; 0x0: Inactive; 0x1: L1.1; 0x2: L1.2 entry; 0x3: L1.2
 idle; 0x4: L1.2 exit; 0x5: L1.0; 0x6: Entry; 0x7: Exit.*/
#define PCIE_RC_GEN2_PCIE_PMS_L1SS_STA    0x00000007
#define PCIE_RC_GEN2_PCIE_PMS_L1SS_STA_M  ((PCIE_RC_GEN2_PCIE_PMS_L1SS_STA_V)<<(PCIE_RC_GEN2_PCIE_PMS_L1SS_STA_S))
#define PCIE_RC_GEN2_PCIE_PMS_L1SS_STA_V  0x7
#define PCIE_RC_GEN2_PCIE_PMS_L1SS_STA_S  8
/* PCIE_RC_GEN2_PCIE_PMS_LPM_STA : RO ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Represents PCI Legacy Power Management state.; 0x0: D0; 0x1: D1; 0x2: D2; 0x3: D
3hot or D3cold.*/
#define PCIE_RC_GEN2_PCIE_PMS_LPM_STA    0x00000003
#define PCIE_RC_GEN2_PCIE_PMS_LPM_STA_M  ((PCIE_RC_GEN2_PCIE_PMS_LPM_STA_V)<<(PCIE_RC_GEN2_PCIE_PMS_LPM_STA_S))
#define PCIE_RC_GEN2_PCIE_PMS_LPM_STA_V  0x3
#define PCIE_RC_GEN2_PCIE_PMS_LPM_STA_S  0

#define PCIE_RC_GEN2_PCIE_LTR_VALUE_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1A4)
/* PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_REQ : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: Configures whether or not No-Snoop latency is required.; 0 : Not require; 1 : Re
quire.*/
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_REQ    (BIT(31))
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_REQ_M  (BIT(31))
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_REQ_V  0x1
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_REQ_S  31
/* PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_SCALE : R/W ;bitpos:[28:26] ;default: 3'h0 ; */
/*description: Configures the No-Snoop latency scale used to send LTR messages and manage inter
nal L1 PM substates.; 0x0: 1ns; 0x1: 32ns; 0x2: 1024ns; 0x3: 32768ns; 0x4: 10485
76ns; 0x5: 33554432ns; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_SCALE    0x00000007
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_SCALE_M  ((PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_SCALE_V)<<(PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_SCALE_S))
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_SCALE_V  0x7
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_SCALE_S  26
/* PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_VALUE : R/W ;bitpos:[25:16] ;default: 10'h0 ; */
/*description: Configures the No-Snoop latency value used to send LTR messages and manage inter
nal L1 PM substates..*/
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_VALUE    0x000003FF
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_VALUE_M  ((PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_VALUE_V)<<(PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_VALUE_S))
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_VALUE_V  0x3FF
#define PCIE_RC_GEN2_PCIE_LTRV_NO_SNOOP_VALUE_S  16
/* PCIE_RC_GEN2_PCIE_LTRV_SNOOP_REQ : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: Configures whether or not Snoop latency is required.; 0 : Not require; 1 : Requi
re.*/
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_REQ    (BIT(15))
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_REQ_M  (BIT(15))
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_REQ_V  0x1
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_REQ_S  15
/* PCIE_RC_GEN2_PCIE_LTRV_SNOOP_SCALE : R/W ;bitpos:[12:10] ;default: 3'h0 ; */
/*description: Configures the Snoop latency scale used to send LTR messages and manage internal
 L1 PM substates.; 0x0: 1ns; 0x1: 32ns; 0x2: 1024ns; 0x3: 32768ns; 0x4: 1048576n
s; 0x5: 33554432ns; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_SCALE    0x00000007
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_SCALE_M  ((PCIE_RC_GEN2_PCIE_LTRV_SNOOP_SCALE_V)<<(PCIE_RC_GEN2_PCIE_LTRV_SNOOP_SCALE_S))
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_SCALE_V  0x7
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_SCALE_S  10
/* PCIE_RC_GEN2_PCIE_LTRV_SNOOP_VALUE : R/W ;bitpos:[9:0] ;default: 10'h0 ; */
/*description: Configures the Snoop latency value used to send LTR messages and manage internal
 L1 PM substates..*/
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_VALUE    0x000003FF
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_VALUE_M  ((PCIE_RC_GEN2_PCIE_LTRV_SNOOP_VALUE_V)<<(PCIE_RC_GEN2_PCIE_LTRV_SNOOP_VALUE_S))
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_VALUE_V  0x3FF
#define PCIE_RC_GEN2_PCIE_LTRV_SNOOP_VALUE_S  0

#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_SEND_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3F0)
/* PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD1_SEND : R/W ;bitpos:[5] ;default: 1'h1 ; */
/*description: Configures whether or not send the received PCIe Vendor-Defined Type 1 Message t
o AXI Space.; 0: Not send; 1: Send.*/
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD1_SEND    (BIT(5))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD1_SEND_M  (BIT(5))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD1_SEND_V  0x1
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD1_SEND_S  5
/* PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD0_SEND : R/W ;bitpos:[4] ;default: 1'h1 ; */
/*description: Configures whether or not send the received PCIe Vendor-Defined Type 0 Message t
o AXI Space.; 0: Not send; 1: Send.*/
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD0_SEND    (BIT(4))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD0_SEND_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD0_SEND_V  0x1
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_VD0_SEND_S  4
/* PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_OBFF_SEND : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: Configures whether or not send the received PCIe OBFF Message to AXI Space.; 0:
Not send; 1: Send.*/
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_OBFF_SEND    (BIT(3))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_OBFF_SEND_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_OBFF_SEND_V  0x1
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_OBFF_SEND_S  3
/* PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_LTR_SEND : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether or not send the received PCIe LTR Message to AXI Space.; 0: N
ot send; 1: Send.*/
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_LTR_SEND    (BIT(2))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_LTR_SEND_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_LTR_SEND_V  0x1
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_LTR_SEND_S  2
/* PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_ATS_SEND : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether or not send the received PCIe ATS Message to AXI Space.; 0: N
ot send; 1: Send.*/
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_ATS_SEND    (BIT(1))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_ATS_SEND_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_ATS_SEND_V  0x1
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_ATS_SEND_S  1
/* PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_UNLOCK_SEND : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not send the received PCIe Unlock Message to AXI Space.; 0
: Not send; 1: Send.*/
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_UNLOCK_SEND    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_UNLOCK_SEND_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_UNLOCK_SEND_V  0x1
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_UNLOCK_SEND_S  0

#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3F8)
/* PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRL : R/W ;bitpos:[31:12] ;default: 20'habcd0 ; */
/*description: Configures the received PCIe Message send to which AXI Address, this field is th
e AXI start address bit [31:12]..*/
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRL_M  ((PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRL_S  12

#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3FC)
/* PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the received PCIe Message send to which AXI Address, this field is th
e AXI start address bit [63:32]..*/
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRU_M  ((PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSG2AXI_TBL_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_SRCPARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x400)
/* PCIE_RC_GEN2_PCIE_DMA0_SRC_TRSF_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures Transfer Parameters (see Section 8.2). ; Its content depends on the v
alue of SRC_ID..*/
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_TRSF_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_TRSF_PARAM_M  ((PCIE_RC_GEN2_PCIE_DMA0_SRC_TRSF_PARAM_V)<<(PCIE_RC_GEN2_PCIE_DMA0_SRC_TRSF_PARAM_S))
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_TRSF_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_TRSF_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_DMA0_SRC_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Source interface ID of the DMA Transfer:; 4’h0: PCIe Interface; 4
’h4 - 4’h7: AXI4-Manager Interface Number 0-3.*/
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_ID_M  ((PCIE_RC_GEN2_PCIE_DMA0_SRC_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA0_SRC_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_ID_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_DESTPARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x404)
/* PCIE_RC_GEN2_PCIE_DMA0_DEST_TRSF_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures Transfer Parameters (see Section 8.2).; Its content depends on the va
lue of DEST_ID..*/
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_TRSF_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_TRSF_PARAM_M  ((PCIE_RC_GEN2_PCIE_DMA0_DEST_TRSF_PARAM_V)<<(PCIE_RC_GEN2_PCIE_DMA0_DEST_TRSF_PARAM_S))
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_TRSF_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_TRSF_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_DMA0_DEST_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Destination interface ID of the DMA Transfer: ; 4’h0: PCIe Interf
ace ; 4’h4 - 4’h7: AXI4-Manager Interface Number 0-3.*/
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_ID_M  ((PCIE_RC_GEN2_PCIE_DMA0_DEST_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA0_DEST_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_ID_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x408)
/* PCIE_RC_GEN2_PCIE_DMA0_SRCADDRL : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the DMA Source Address bit [31:0].*/
#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRL    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRL_M  ((PCIE_RC_GEN2_PCIE_DMA0_SRCADDRL_V)<<(PCIE_RC_GEN2_PCIE_DMA0_SRCADDRL_S))
#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRL_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRL_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRH_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x40C)
/* PCIE_RC_GEN2_PCIE_DMA0_SRCADDRH : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the DMA Source Address bit [63:32].*/
#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRH    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRH_M  ((PCIE_RC_GEN2_PCIE_DMA0_SRCADDRH_V)<<(PCIE_RC_GEN2_PCIE_DMA0_SRCADDRH_S))
#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRH_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_SRCADDRH_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x410)
/* PCIE_RC_GEN2_PCIE_DMA0_DESTADDRL : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the DMA Destination Address bit [31:0].*/
#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRL    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRL_M  ((PCIE_RC_GEN2_PCIE_DMA0_DESTADDRL_V)<<(PCIE_RC_GEN2_PCIE_DMA0_DESTADDRL_S))
#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRL_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRL_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRH_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x414)
/* PCIE_RC_GEN2_PCIE_DMA0_DESTADDRH : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the DMA Destination Address bit [63:32].*/
#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRH    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRH_M  ((PCIE_RC_GEN2_PCIE_DMA0_DESTADDRH_V)<<(PCIE_RC_GEN2_PCIE_DMA0_DESTADDRH_S))
#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRH_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_DESTADDRH_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_LENGTH_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x418)
/* PCIE_RC_GEN2_PCIE_DMA0_LENGTH : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the lengh of data to transfer from source to destination.*/
#define PCIE_RC_GEN2_PCIE_DMA0_LENGTH    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_LENGTH_M  ((PCIE_RC_GEN2_PCIE_DMA0_LENGTH_V)<<(PCIE_RC_GEN2_PCIE_DMA0_LENGTH_S))
#define PCIE_RC_GEN2_PCIE_DMA0_LENGTH_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_LENGTH_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_CONTROL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x41C)
/* PCIE_RC_GEN2_PCIE_DMA0_SG2_ID : R/W ;bitpos:[31:29] ;default: 3'h0 ; */
/*description: Configure the SG2_ID as for SG_ID.*/
#define PCIE_RC_GEN2_PCIE_DMA0_SG2_ID    0x00000007
#define PCIE_RC_GEN2_PCIE_DMA0_SG2_ID_M  ((PCIE_RC_GEN2_PCIE_DMA0_SG2_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA0_SG2_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA0_SG2_ID_V  0x7
#define PCIE_RC_GEN2_PCIE_DMA0_SG2_ID_S  29
/* PCIE_RC_GEN2_PCIE_DMA0_SG_ID : R/W ;bitpos:[28:26] ;default: 3'h0 ; */
/*description: Configure the interface the descriptors should be read from:; 3’h0: PCIe Interfa
ce; 3’h3: AXI4-Manager Descriptor Interface; 3’h4 - 4’h7: AXI4-Manager Interface
 Number 0-3.*/
#define PCIE_RC_GEN2_PCIE_DMA0_SG_ID    0x00000007
#define PCIE_RC_GEN2_PCIE_DMA0_SG_ID_M  ((PCIE_RC_GEN2_PCIE_DMA0_SG_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA0_SG_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA0_SG_ID_V  0x7
#define PCIE_RC_GEN2_PCIE_DMA0_SG_ID_S  26
/* PCIE_RC_GEN2_PCIE_DMA0_SG_TYPE : R/W ;bitpos:[25:24] ;default: 2'h0 ; */
/*description: Configure Scatter-Gather type for the DMA (only relevant if bit 3 of CTRL Field
is set). ; 2’b00: independent SG for both Source and Destination; 2’b01: Source
address is set according to Descriptor, Destination address is incremented; 2’b1
0: Destination address is set according to Descriptor, Source address is increme
nted; 2’b11: Source and Destination addresses are set according to Descriptor.*/
#define PCIE_RC_GEN2_PCIE_DMA0_SG_TYPE    0x00000003
#define PCIE_RC_GEN2_PCIE_DMA0_SG_TYPE_M  ((PCIE_RC_GEN2_PCIE_DMA0_SG_TYPE_V)<<(PCIE_RC_GEN2_PCIE_DMA0_SG_TYPE_S))
#define PCIE_RC_GEN2_PCIE_DMA0_SG_TYPE_V  0x3
#define PCIE_RC_GEN2_PCIE_DMA0_SG_TYPE_S  24
/* PCIE_RC_GEN2_PCIE_DMA0_DESC_UPDT : R/W ;bitpos:[23] ;default: 1'b0 ; */
/*description: Configure to 1 by the application to indicate to the DMA Engine that a Descripto
r has been updated. It is only relevant ; when SG mode is enabled and the DESC_N
EXT_RDY field was set to 0 (see DESC_NEXT_RDY). This bit is automatically cleare
d by the DMA Engine.*/
#define PCIE_RC_GEN2_PCIE_DMA0_DESC_UPDT    (BIT(23))
#define PCIE_RC_GEN2_PCIE_DMA0_DESC_UPDT_M  (BIT(23))
#define PCIE_RC_GEN2_PCIE_DMA0_DESC_UPDT_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA0_DESC_UPDT_S  23
/* PCIE_RC_GEN2_PCIE_DMA0_IDE_CHK : R/W ;bitpos:[14] ;default: 1'b0 ; */
/*description: Configure to perform IDE stream check on PCIE completion.*/
#define PCIE_RC_GEN2_PCIE_DMA0_IDE_CHK    (BIT(14))
#define PCIE_RC_GEN2_PCIE_DMA0_IDE_CHK_M  (BIT(14))
#define PCIE_RC_GEN2_PCIE_DMA0_IDE_CHK_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA0_IDE_CHK_S  14
/* PCIE_RC_GEN2_PCIE_DMA0_IRQ_ID : R/W ;bitpos:[13:12] ;default: 2'h0 ; */
/*description: Configure on which interface DMA transfer events should be reported:; Bit [12]:
interrupt is issued to the Local Processor (on AXI domain).; Bit [13]: interrupt
 is issued to the Host Processor (on PCIe domain).;.*/
#define PCIE_RC_GEN2_PCIE_DMA0_IRQ_ID    0x00000003
#define PCIE_RC_GEN2_PCIE_DMA0_IRQ_ID_M  ((PCIE_RC_GEN2_PCIE_DMA0_IRQ_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA0_IRQ_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA0_IRQ_ID_V  0x3
#define PCIE_RC_GEN2_PCIE_DMA0_IRQ_ID_S  12
/* PCIE_RC_GEN2_PCIE_DMA0_IRQ : R/W ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: Configure when an interrupt should be issued:; Bit [8]: an IRQ is issued on a DM
A end.; Bit [9]: an IRQ is issued if an error occurs.; Bit [10]: an IRQ is issue
d if the source of the transfer reports an EOP condition.; Bit [11]: reserved.*/
#define PCIE_RC_GEN2_PCIE_DMA0_IRQ    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA0_IRQ_M  ((PCIE_RC_GEN2_PCIE_DMA0_IRQ_V)<<(PCIE_RC_GEN2_PCIE_DMA0_IRQ_S))
#define PCIE_RC_GEN2_PCIE_DMA0_IRQ_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA0_IRQ_S  8
/* PCIE_RC_GEN2_PCIE_DMA0_SE_COND : R/W ;bitpos:[7:4] ;default: 4'h0 ; */
/*description: Configure the Start and End conditions of the DMA:; Bit [4]: reserved; Bit [5]:
Stop if DMA_LENGTH is reached.; Bit [6]: reserved; Bit [7]: Abort on error condi
tion (otherwise erroneous packet or descriptor is considered as processed, but t
he error is logged in source and/or destination error fields).; Note that if bit
s [7:5] SE_COND Field are 3’b000, a DMA transfer can only stop on a user abort o
r if SG mode is enabled and an End Of Chain is received.*/
#define PCIE_RC_GEN2_PCIE_DMA0_SE_COND    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA0_SE_COND_M  ((PCIE_RC_GEN2_PCIE_DMA0_SE_COND_V)<<(PCIE_RC_GEN2_PCIE_DMA0_SE_COND_S))
#define PCIE_RC_GEN2_PCIE_DMA0_SE_COND_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA0_SE_COND_S  4
/* PCIE_RC_GEN2_PCIE_DMA0_CTRL : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configure the  the basic controls of the DMA: ; Bit [0]: Start/Abort: When set t
o 1b, it launches the DMA transfer; appropriate registers should have previously
 been set. This bit is automatically cleared by the DMA Engine at the end of the
 DMA transfer. If the transfer is not ended and a user sets it to 0, the transfe
r is aborted (see Section 8.5).; Bit [1]: Pause/Resume: When set to 1b, DMA tran
sfer is paused (to temporarily give more bandwidth to a transfer with higher pri
ority).; Bit [2]: reserved; Bit [3]: enables SG mode. When this register field i
s not hardwired by Core Constants, it is read/write and its default value after
reset is 0b.*/
#define PCIE_RC_GEN2_PCIE_DMA0_CTRL    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA0_CTRL_M  ((PCIE_RC_GEN2_PCIE_DMA0_CTRL_V)<<(PCIE_RC_GEN2_PCIE_DMA0_CTRL_S))
#define PCIE_RC_GEN2_PCIE_DMA0_CTRL_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA0_CTRL_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_STATUS_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x420)
/* PCIE_RC_GEN2_PCIE_DMA0_DESC_ERROR : RO ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Errors detected when reading Descriptor:; Bit [24]: Source Descriptor error; Bit
 [25]: Destination descriptor error; Bit [26]: Descriptor reading failed due to
Completion Timeout; Bit [27]: Descriptor reading failed due to CA received if on
 PCIe domain, or DECERR received if on AXI domain.; Bit [28]: Descriptor reading
 failed due to UR or EP received if onPCIe domain, or SLVERR response received i
f on AXI domain.; Bit [29]: Descriptor reading failed due to ECRC received if on
 PCIe domain, PCIe Controller or Bridge Memory Error; or Descriptor error report
ed by the AXI Application if on AXI domain.; Bit [30]: reserved; Bit [31]: Read
descriptor completed with wrong stream ID.*/
#define PCIE_RC_GEN2_PCIE_DMA0_DESC_ERROR    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA0_DESC_ERROR_M  ((PCIE_RC_GEN2_PCIE_DMA0_DESC_ERROR_V)<<(PCIE_RC_GEN2_PCIE_DMA0_DESC_ERROR_S))
#define PCIE_RC_GEN2_PCIE_DMA0_DESC_ERROR_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA0_DESC_ERROR_S  24
/* PCIE_RC_GEN2_PCIE_DMA0_DEST_ERROR : RO ;bitpos:[23:16] ;default: 8'h0 ; */
/*description:  Errors detected when reading Destination  Data. Format same as SRC_ERROR Below.*/
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_ERROR    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_ERROR_M  ((PCIE_RC_GEN2_PCIE_DMA0_DEST_ERROR_V)<<(PCIE_RC_GEN2_PCIE_DMA0_DEST_ERROR_S))
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_ERROR_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA0_DEST_ERROR_S  16
/* PCIE_RC_GEN2_PCIE_DMA0_SRC_ERROR : RO ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Errors detected when reading Source Data or Descriptor: ; Bit [8]: Data reading
failed due to Completion Timeout; Bit [9]: Data reading failed due to CA receive
d if on PCIe domain, or DECERR received if on AXI domain.; Bit [10]: Data readin
g failed due to UR or EP received if on PCIe domain, or SLVERR response received
 if on AXI domain.; Bit [11]: Data reading failed due to ECRC received if on PCI
e domain, PCIe Controller or Bridge Memory Error; or Data error reported by the
AXI Application if on AXI domain.; Bit [12]: reserved; Bit [13]: Read data compl
eted with wrong stream ID; Bit [15:14]: reserved.*/
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_ERROR    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_ERROR_M  ((PCIE_RC_GEN2_PCIE_DMA0_SRC_ERROR_V)<<(PCIE_RC_GEN2_PCIE_DMA0_SRC_ERROR_S))
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_ERROR_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA0_SRC_ERROR_S  8
/* PCIE_RC_GEN2_PCIE_DMA0_STATUS : RO ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: STATUS:; Bit [0]: DMA Complete with DMA_LENGTH reached. When the DMA is programm
ed with DMA_LENGTH equal to 0 (Infinite DMA transfer), DMA_STATUS[0] is irreleva
nt.; Bit [1]: DMA Complete with an EOP condition reported by the source of the t
ransfer; Bit [2]: DMA Complete with EOC received on last descriptor readby the D
MA engine.; Bit [3]: DMA Complete with Error; Bit [4]: DMA Complete with more th
an 4GBytes of data transferred; Bit [5]: reserved; Bit [6]: DMA successfully sto
pped by user ; Bit [7]: DMA incorrectly ended (buffer or descriptor not released
); ; Note that if DMA ends because of an error, the Error Status field will be s
omething other than 8’b0. This field is automatically cleared when DMA_CONTROL[0
] is set to 1b..*/
#define PCIE_RC_GEN2_PCIE_DMA0_STATUS    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA0_STATUS_M  ((PCIE_RC_GEN2_PCIE_DMA0_STATUS_V)<<(PCIE_RC_GEN2_PCIE_DMA0_STATUS_S))
#define PCIE_RC_GEN2_PCIE_DMA0_STATUS_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA0_STATUS_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_PRC_LENGTH_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x424)
/* PCIE_RC_GEN2_PCIE_DMA0_PRC_LENGTH : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures this 32-bit register provides the amount of data in bytes transferred
 from the Source to the Destination. It is only relevant if Bit 4 of the STATUS
Field is cleared.*/
#define PCIE_RC_GEN2_PCIE_DMA0_PRC_LENGTH    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_PRC_LENGTH_M  ((PCIE_RC_GEN2_PCIE_DMA0_PRC_LENGTH_V)<<(PCIE_RC_GEN2_PCIE_DMA0_PRC_LENGTH_S))
#define PCIE_RC_GEN2_PCIE_DMA0_PRC_LENGTH_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_PRC_LENGTH_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_SHARE_ACCESS_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x428)
/* PCIE_RC_GEN2_PCIE_DMA0_PHYSICAL_FUNC_NUMBER : RO ;bitpos:[18:13] ;default: 6'h0 ; */
/*description: Bit [18:13]: RO: Physical function number (0 - 63). These bits are only availabl
e if multiple physical functions are implemented.*/
#define PCIE_RC_GEN2_PCIE_DMA0_PHYSICAL_FUNC_NUMBER    0x0000003F
#define PCIE_RC_GEN2_PCIE_DMA0_PHYSICAL_FUNC_NUMBER_M  ((PCIE_RC_GEN2_PCIE_DMA0_PHYSICAL_FUNC_NUMBER_V)<<(PCIE_RC_GEN2_PCIE_DMA0_PHYSICAL_FUNC_NUMBER_S))
#define PCIE_RC_GEN2_PCIE_DMA0_PHYSICAL_FUNC_NUMBER_V  0x3F
#define PCIE_RC_GEN2_PCIE_DMA0_PHYSICAL_FUNC_NUMBER_S  13
/* PCIE_RC_GEN2_PCIE_DMA0_VIRTUAL_FUNC_NUMBER : RO ;bitpos:[12:4] ;default: 9'h0 ; */
/*description: Bit [12:4]: RO: Virtual function number (1 - 511): If 0, then a physical functio
n is targeted. These bits are only available if virtual functions are implemente
d..*/
#define PCIE_RC_GEN2_PCIE_DMA0_VIRTUAL_FUNC_NUMBER    0x000001FF
#define PCIE_RC_GEN2_PCIE_DMA0_VIRTUAL_FUNC_NUMBER_M  ((PCIE_RC_GEN2_PCIE_DMA0_VIRTUAL_FUNC_NUMBER_V)<<(PCIE_RC_GEN2_PCIE_DMA0_VIRTUAL_FUNC_NUMBER_S))
#define PCIE_RC_GEN2_PCIE_DMA0_VIRTUAL_FUNC_NUMBER_V  0x1FF
#define PCIE_RC_GEN2_PCIE_DMA0_VIRTUAL_FUNC_NUMBER_S  4
/* PCIE_RC_GEN2_PCIE_DMA0_ACCESS_GRANTED : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: Bit [1]: RO: DMA Access Granted: Returns 1 when read by the Physical or Virtual
Functions identified by Bits [18:4] or when DMA Access Locked is set to 0. Other
wise, it returns 0..*/
#define PCIE_RC_GEN2_PCIE_DMA0_ACCESS_GRANTED    (BIT(1))
#define PCIE_RC_GEN2_PCIE_DMA0_ACCESS_GRANTED_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_DMA0_ACCESS_GRANTED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA0_ACCESS_GRANTED_S  1
/* PCIE_RC_GEN2_PCIE_DMA0_ACCESS_LOCKED : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Bit [0]: R/W: DMA Access Locked: When set to 1, write access to the DMA Engine r
egisters is restricted to the Physical or Virtual Function identified by Bits [1
8:4]. Otherwise all functions are allowed write Access..*/
#define PCIE_RC_GEN2_PCIE_DMA0_ACCESS_LOCKED    (BIT(0))
#define PCIE_RC_GEN2_PCIE_DMA0_ACCESS_LOCKED_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_DMA0_ACCESS_LOCKED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA0_ACCESS_LOCKED_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_PASID_STREAMID_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x42C)
/* PCIE_RC_GEN2_PCIE_DMA0_EXPECTED_STREAM_ID : R/W ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Configure expected stream id.*/
#define PCIE_RC_GEN2_PCIE_DMA0_EXPECTED_STREAM_ID    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA0_EXPECTED_STREAM_ID_M  ((PCIE_RC_GEN2_PCIE_DMA0_EXPECTED_STREAM_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA0_EXPECTED_STREAM_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA0_EXPECTED_STREAM_ID_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA0_EXPECTED_STREAM_ID_S  24
/* PCIE_RC_GEN2_PCIE_DMA0_PASID : R/W ;bitpos:[22:3] ;default: 20'h0 ; */
/*description: Configure Process Address Space ID.*/
#define PCIE_RC_GEN2_PCIE_DMA0_PASID    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_PASID_M  ((PCIE_RC_GEN2_PCIE_DMA0_PASID_V)<<(PCIE_RC_GEN2_PCIE_DMA0_PASID_S))
#define PCIE_RC_GEN2_PCIE_DMA0_PASID_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_PASID_S  3
/* PCIE_RC_GEN2_PCIE_DMA0_PRIVILEGED_MODE_REQUESTED : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configure Privileged Mode Reuested.*/
#define PCIE_RC_GEN2_PCIE_DMA0_PRIVILEGED_MODE_REQUESTED    (BIT(2))
#define PCIE_RC_GEN2_PCIE_DMA0_PRIVILEGED_MODE_REQUESTED_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_DMA0_PRIVILEGED_MODE_REQUESTED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA0_PRIVILEGED_MODE_REQUESTED_S  2
/* PCIE_RC_GEN2_PCIE_DMA0_EXE_REQUESTED : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Configure Execute Requested.*/
#define PCIE_RC_GEN2_PCIE_DMA0_EXE_REQUESTED    (BIT(1))
#define PCIE_RC_GEN2_PCIE_DMA0_EXE_REQUESTED_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_DMA0_EXE_REQUESTED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA0_EXE_REQUESTED_S  1
/* PCIE_RC_GEN2_PCIE_DMA0_PASID_ENABLED : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Configure PASID enabled.*/
#define PCIE_RC_GEN2_PCIE_DMA0_PASID_ENABLED    (BIT(0))
#define PCIE_RC_GEN2_PCIE_DMA0_PASID_ENABLED_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_DMA0_PASID_ENABLED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA0_PASID_ENABLED_S  0

#define PCIE_RC_GEN2_PCIE_DMA0_CONF_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x430)
/* PCIE_RC_GEN2_PCIE_DMA0_CONF : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: DMA Conf: provides certain G_DMA0_CONF fields to software. See Section 5.1.3.6 f
or more information about these fields. ; Bit [1:0]: DMA Source Address Alignmen
t, see G_DMA0_CONF[32:31]; Bit [3:2]: DMA Destination Address Alignment, seeG_DM
A0_CONF[34:33] ; Bit [5:4]: DMA Length Alignment, see G_DMA0_CONF[36:35]; Bit [6
]: DMA Scatter Gather Parameters Programming, see G_DMA0_CONF[18] ; Bit [7]: DMA
 Scatter Gather Support Fixed Value, see G_DMA0_CONF[19] ; Bit [9:8]: DMA Scatte
r Gather Type Fixed Value, see G_DMA0_CONF[21:20]; Bit [15:10]: reserved.*/
#define PCIE_RC_GEN2_PCIE_DMA0_CONF    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_CONF_M  ((PCIE_RC_GEN2_PCIE_DMA0_CONF_V)<<(PCIE_RC_GEN2_PCIE_DMA0_CONF_S))
#define PCIE_RC_GEN2_PCIE_DMA0_CONF_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA0_CONF_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_SRCPARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x440)
/* PCIE_RC_GEN2_PCIE_DMA1_SRC_TRSF_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures Transfer Parameters (see Section 8.2). ; Its content depends on the v
alue of SRC_ID..*/
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_TRSF_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_TRSF_PARAM_M  ((PCIE_RC_GEN2_PCIE_DMA1_SRC_TRSF_PARAM_V)<<(PCIE_RC_GEN2_PCIE_DMA1_SRC_TRSF_PARAM_S))
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_TRSF_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_TRSF_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_DMA1_SRC_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Source interface ID of the DMA Transfer:; 4’h0: PCIe Interface; 4
’h4 - 4’h7: AXI4-Manager Interface Number 0-3.*/
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_ID_M  ((PCIE_RC_GEN2_PCIE_DMA1_SRC_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA1_SRC_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_ID_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_DESTPARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x444)
/* PCIE_RC_GEN2_PCIE_DMA1_DEST_TRSF_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures Transfer Parameters (see Section 8.2).; Its content depends on the va
lue of DEST_ID..*/
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_TRSF_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_TRSF_PARAM_M  ((PCIE_RC_GEN2_PCIE_DMA1_DEST_TRSF_PARAM_V)<<(PCIE_RC_GEN2_PCIE_DMA1_DEST_TRSF_PARAM_S))
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_TRSF_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_TRSF_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_DMA1_DEST_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Destination interface ID of the DMA Transfer: ; 4’h0: PCIe Interf
ace ; 4’h4 - 4’h7: AXI4-Manager Interface Number 0-3.*/
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_ID_M  ((PCIE_RC_GEN2_PCIE_DMA1_DEST_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA1_DEST_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_ID_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x448)
/* PCIE_RC_GEN2_PCIE_DMA1_SRCADDRL : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the DMA Source Address bit [31:0].*/
#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRL    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRL_M  ((PCIE_RC_GEN2_PCIE_DMA1_SRCADDRL_V)<<(PCIE_RC_GEN2_PCIE_DMA1_SRCADDRL_S))
#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRL_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRL_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRH_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x44C)
/* PCIE_RC_GEN2_PCIE_DMA1_SRCADDRH : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the DMA Source Address bit [63:32].*/
#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRH    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRH_M  ((PCIE_RC_GEN2_PCIE_DMA1_SRCADDRH_V)<<(PCIE_RC_GEN2_PCIE_DMA1_SRCADDRH_S))
#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRH_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_SRCADDRH_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x450)
/* PCIE_RC_GEN2_PCIE_DMA1_DESTADDRL : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the DMA Destination Address bit [31:0].*/
#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRL    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRL_M  ((PCIE_RC_GEN2_PCIE_DMA1_DESTADDRL_V)<<(PCIE_RC_GEN2_PCIE_DMA1_DESTADDRL_S))
#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRL_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRL_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRH_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x454)
/* PCIE_RC_GEN2_PCIE_DMA1_DESTADDRH : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the DMA Destination Address bit [63:32].*/
#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRH    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRH_M  ((PCIE_RC_GEN2_PCIE_DMA1_DESTADDRH_V)<<(PCIE_RC_GEN2_PCIE_DMA1_DESTADDRH_S))
#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRH_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_DESTADDRH_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_LENGTH_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x458)
/* PCIE_RC_GEN2_PCIE_DMA1_LENGTH : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the lengh of data to transfer from source to destination.*/
#define PCIE_RC_GEN2_PCIE_DMA1_LENGTH    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_LENGTH_M  ((PCIE_RC_GEN2_PCIE_DMA1_LENGTH_V)<<(PCIE_RC_GEN2_PCIE_DMA1_LENGTH_S))
#define PCIE_RC_GEN2_PCIE_DMA1_LENGTH_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_LENGTH_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_CONTROL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x45C)
/* PCIE_RC_GEN2_PCIE_DMA1_SG2_ID : R/W ;bitpos:[31:29] ;default: 3'h0 ; */
/*description: Configure the SG2_ID as for SG_ID.*/
#define PCIE_RC_GEN2_PCIE_DMA1_SG2_ID    0x00000007
#define PCIE_RC_GEN2_PCIE_DMA1_SG2_ID_M  ((PCIE_RC_GEN2_PCIE_DMA1_SG2_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA1_SG2_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA1_SG2_ID_V  0x7
#define PCIE_RC_GEN2_PCIE_DMA1_SG2_ID_S  29
/* PCIE_RC_GEN2_PCIE_DMA1_SG_ID : R/W ;bitpos:[28:26] ;default: 3'h0 ; */
/*description: Configure the interface the descriptors should be read from:; 3’h0: PCIe Interfa
ce; 3’h3: AXI4-Manager Descriptor Interface; 3’h4 - 4’h7: AXI4-Manager Interface
 Number 0-3.*/
#define PCIE_RC_GEN2_PCIE_DMA1_SG_ID    0x00000007
#define PCIE_RC_GEN2_PCIE_DMA1_SG_ID_M  ((PCIE_RC_GEN2_PCIE_DMA1_SG_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA1_SG_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA1_SG_ID_V  0x7
#define PCIE_RC_GEN2_PCIE_DMA1_SG_ID_S  26
/* PCIE_RC_GEN2_PCIE_DMA1_SG_TYPE : R/W ;bitpos:[25:24] ;default: 2'h0 ; */
/*description: Configure Scatter-Gather type for the DMA (only relevant if bit 3 of CTRL Field
is set). ; 2’b00: independent SG for both Source and Destination; 2’b01: Source
address is set according to Descriptor, Destination address is incremented; 2’b1
0: Destination address is set according to Descriptor, Source address is increme
nted; 2’b11: Source and Destination addresses are set according to Descriptor.*/
#define PCIE_RC_GEN2_PCIE_DMA1_SG_TYPE    0x00000003
#define PCIE_RC_GEN2_PCIE_DMA1_SG_TYPE_M  ((PCIE_RC_GEN2_PCIE_DMA1_SG_TYPE_V)<<(PCIE_RC_GEN2_PCIE_DMA1_SG_TYPE_S))
#define PCIE_RC_GEN2_PCIE_DMA1_SG_TYPE_V  0x3
#define PCIE_RC_GEN2_PCIE_DMA1_SG_TYPE_S  24
/* PCIE_RC_GEN2_PCIE_DMA1_DESC_UPDT : R/W ;bitpos:[23] ;default: 1'b0 ; */
/*description: Configure to 1 by the application to indicate to the DMA Engine that a Descripto
r has been updated. It is only relevant ; when SG mode is enabled and the DESC_N
EXT_RDY field was set to 0 (see DESC_NEXT_RDY). This bit is automatically cleare
d by the DMA Engine.*/
#define PCIE_RC_GEN2_PCIE_DMA1_DESC_UPDT    (BIT(23))
#define PCIE_RC_GEN2_PCIE_DMA1_DESC_UPDT_M  (BIT(23))
#define PCIE_RC_GEN2_PCIE_DMA1_DESC_UPDT_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA1_DESC_UPDT_S  23
/* PCIE_RC_GEN2_PCIE_DMA1_IDE_CHK : R/W ;bitpos:[14] ;default: 1'b0 ; */
/*description: Configure to perform IDE stream check on PCIE completion.*/
#define PCIE_RC_GEN2_PCIE_DMA1_IDE_CHK    (BIT(14))
#define PCIE_RC_GEN2_PCIE_DMA1_IDE_CHK_M  (BIT(14))
#define PCIE_RC_GEN2_PCIE_DMA1_IDE_CHK_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA1_IDE_CHK_S  14
/* PCIE_RC_GEN2_PCIE_DMA1_IRQ_ID : R/W ;bitpos:[13:12] ;default: 2'h0 ; */
/*description: Configure on which interface DMA transfer events should be reported:; Bit [12]:
interrupt is issued to the Local Processor (on AXI domain).; Bit [13]: interrupt
 is issued to the Host Processor (on PCIe domain).;.*/
#define PCIE_RC_GEN2_PCIE_DMA1_IRQ_ID    0x00000003
#define PCIE_RC_GEN2_PCIE_DMA1_IRQ_ID_M  ((PCIE_RC_GEN2_PCIE_DMA1_IRQ_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA1_IRQ_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA1_IRQ_ID_V  0x3
#define PCIE_RC_GEN2_PCIE_DMA1_IRQ_ID_S  12
/* PCIE_RC_GEN2_PCIE_DMA1_IRQ : R/W ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: Configure when an interrupt should be issued:; Bit [8]: an IRQ is issued on a DM
A end.; Bit [9]: an IRQ is issued if an error occurs.; Bit [10]: an IRQ is issue
d if the source of the transfer reports an EOP condition.; Bit [11]: reserved.*/
#define PCIE_RC_GEN2_PCIE_DMA1_IRQ    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA1_IRQ_M  ((PCIE_RC_GEN2_PCIE_DMA1_IRQ_V)<<(PCIE_RC_GEN2_PCIE_DMA1_IRQ_S))
#define PCIE_RC_GEN2_PCIE_DMA1_IRQ_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA1_IRQ_S  8
/* PCIE_RC_GEN2_PCIE_DMA1_SE_COND : R/W ;bitpos:[7:4] ;default: 4'h0 ; */
/*description: Configure the Start and End conditions of the DMA:; Bit [4]: reserved; Bit [5]:
Stop if DMA_LENGTH is reached.; Bit [6]: reserved; Bit [7]: Abort on error condi
tion (otherwise erroneous packet or descriptor is considered as processed, but t
he error is logged in source and/or destination error fields).; Note that if bit
s [7:5] SE_COND Field are 3’b000, a DMA transfer can only stop on a user abort o
r if SG mode is enabled and an End Of Chain is received.*/
#define PCIE_RC_GEN2_PCIE_DMA1_SE_COND    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA1_SE_COND_M  ((PCIE_RC_GEN2_PCIE_DMA1_SE_COND_V)<<(PCIE_RC_GEN2_PCIE_DMA1_SE_COND_S))
#define PCIE_RC_GEN2_PCIE_DMA1_SE_COND_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA1_SE_COND_S  4
/* PCIE_RC_GEN2_PCIE_DMA1_CTRL : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configure the  the basic controls of the DMA: ; Bit [0]: Start/Abort: When set t
o 1b, it launches the DMA transfer; appropriate registers should have previously
 been set. This bit is automatically cleared by the DMA Engine at the end of the
 DMA transfer. If the transfer is not ended and a user sets it to 0, the transfe
r is aborted (see Section 8.5).; Bit [1]: Pause/Resume: When set to 1b, DMA tran
sfer is paused (to temporarily give more bandwidth to a transfer with higher pri
ority).; Bit [2]: reserved; Bit [3]: enables SG mode. When this register field i
s not hardwired by Core Constants, it is read/write and its default value after
reset is 0b.*/
#define PCIE_RC_GEN2_PCIE_DMA1_CTRL    0x0000000F
#define PCIE_RC_GEN2_PCIE_DMA1_CTRL_M  ((PCIE_RC_GEN2_PCIE_DMA1_CTRL_V)<<(PCIE_RC_GEN2_PCIE_DMA1_CTRL_S))
#define PCIE_RC_GEN2_PCIE_DMA1_CTRL_V  0xF
#define PCIE_RC_GEN2_PCIE_DMA1_CTRL_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_STATUS_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x460)
/* PCIE_RC_GEN2_PCIE_DMA1_DESC_ERROR : RO ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Errors detected when reading Descriptor:; Bit [24]: Source Descriptor error; Bit
 [25]: Destination descriptor error; Bit [26]: Descriptor reading failed due to
Completion Timeout; Bit [27]: Descriptor reading failed due to CA received if on
 PCIe domain, or DECERR received if on AXI domain.; Bit [28]: Descriptor reading
 failed due to UR or EP received if onPCIe domain, or SLVERR response received i
f on AXI domain.; Bit [29]: Descriptor reading failed due to ECRC received if on
 PCIe domain, PCIe Controller or Bridge Memory Error; or Descriptor error report
ed by the AXI Application if on AXI domain.; Bit [30]: reserved; Bit [31]: Read
descriptor completed with wrong stream ID.*/
#define PCIE_RC_GEN2_PCIE_DMA1_DESC_ERROR    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA1_DESC_ERROR_M  ((PCIE_RC_GEN2_PCIE_DMA1_DESC_ERROR_V)<<(PCIE_RC_GEN2_PCIE_DMA1_DESC_ERROR_S))
#define PCIE_RC_GEN2_PCIE_DMA1_DESC_ERROR_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA1_DESC_ERROR_S  24
/* PCIE_RC_GEN2_PCIE_DMA1_DEST_ERROR : RO ;bitpos:[23:16] ;default: 8'h0 ; */
/*description:  Errors detected when reading Destination  Data. Format same as SRC_ERROR Below.*/
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_ERROR    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_ERROR_M  ((PCIE_RC_GEN2_PCIE_DMA1_DEST_ERROR_V)<<(PCIE_RC_GEN2_PCIE_DMA1_DEST_ERROR_S))
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_ERROR_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA1_DEST_ERROR_S  16
/* PCIE_RC_GEN2_PCIE_DMA1_SRC_ERROR : RO ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Errors detected when reading Source Data or Descriptor: ; Bit [8]: Data reading
failed due to Completion Timeout; Bit [9]: Data reading failed due to CA receive
d if on PCIe domain, or DECERR received if on AXI domain.; Bit [10]: Data readin
g failed due to UR or EP received if on PCIe domain, or SLVERR response received
 if on AXI domain.; Bit [11]: Data reading failed due to ECRC received if on PCI
e domain, PCIe Controller or Bridge Memory Error; or Data error reported by the
AXI Application if on AXI domain.; Bit [12]: reserved; Bit [13]: Read data compl
eted with wrong stream ID; Bit [15:14]: reserved.*/
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_ERROR    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_ERROR_M  ((PCIE_RC_GEN2_PCIE_DMA1_SRC_ERROR_V)<<(PCIE_RC_GEN2_PCIE_DMA1_SRC_ERROR_S))
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_ERROR_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA1_SRC_ERROR_S  8
/* PCIE_RC_GEN2_PCIE_DMA1_STATUS : RO ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: STATUS:; Bit [0]: DMA Complete with DMA_LENGTH reached. When the DMA is programm
ed with DMA_LENGTH equal to 0 (Infinite DMA transfer), DMA_STATUS[0] is irreleva
nt.; Bit [1]: DMA Complete with an EOP condition reported by the source of the t
ransfer; Bit [2]: DMA Complete with EOC received on last descriptor readby the D
MA engine.; Bit [3]: DMA Complete with Error; Bit [4]: DMA Complete with more th
an 4GBytes of data transferred; Bit [5]: reserved; Bit [6]: DMA successfully sto
pped by user ; Bit [7]: DMA incorrectly ended (buffer or descriptor not released
); ; Note that if DMA ends because of an error, the Error Status field will be s
omething other than 8’b0. This field is automatically cleared when DMA_CONTROL[0
] is set to 1b..*/
#define PCIE_RC_GEN2_PCIE_DMA1_STATUS    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA1_STATUS_M  ((PCIE_RC_GEN2_PCIE_DMA1_STATUS_V)<<(PCIE_RC_GEN2_PCIE_DMA1_STATUS_S))
#define PCIE_RC_GEN2_PCIE_DMA1_STATUS_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA1_STATUS_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_PRC_LENGTH_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x464)
/* PCIE_RC_GEN2_PCIE_DMA1_PRC_LENGTH : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures this 32-bit register provides the amount of data in bytes transferred
 from the Source to the Destination. It is only relevant if Bit 4 of the STATUS
Field is cleared.*/
#define PCIE_RC_GEN2_PCIE_DMA1_PRC_LENGTH    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_PRC_LENGTH_M  ((PCIE_RC_GEN2_PCIE_DMA1_PRC_LENGTH_V)<<(PCIE_RC_GEN2_PCIE_DMA1_PRC_LENGTH_S))
#define PCIE_RC_GEN2_PCIE_DMA1_PRC_LENGTH_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_PRC_LENGTH_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_SHARE_ACCESS_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x468)
/* PCIE_RC_GEN2_PCIE_DMA1_PHYSICAL_FUNC_NUMBER : RO ;bitpos:[18:13] ;default: 6'h0 ; */
/*description: Bit [18:13]: RO: Physical function number (0 - 63). These bits are only availabl
e if multiple physical functions are implemented.*/
#define PCIE_RC_GEN2_PCIE_DMA1_PHYSICAL_FUNC_NUMBER    0x0000003F
#define PCIE_RC_GEN2_PCIE_DMA1_PHYSICAL_FUNC_NUMBER_M  ((PCIE_RC_GEN2_PCIE_DMA1_PHYSICAL_FUNC_NUMBER_V)<<(PCIE_RC_GEN2_PCIE_DMA1_PHYSICAL_FUNC_NUMBER_S))
#define PCIE_RC_GEN2_PCIE_DMA1_PHYSICAL_FUNC_NUMBER_V  0x3F
#define PCIE_RC_GEN2_PCIE_DMA1_PHYSICAL_FUNC_NUMBER_S  13
/* PCIE_RC_GEN2_PCIE_DMA1_VIRTUAL_FUNC_NUMBER : RO ;bitpos:[12:4] ;default: 9'h0 ; */
/*description: Bit [12:4]: RO: Virtual function number (1 - 511): If 0, then a physical functio
n is targeted. These bits are only available if virtual functions are implemente
d..*/
#define PCIE_RC_GEN2_PCIE_DMA1_VIRTUAL_FUNC_NUMBER    0x000001FF
#define PCIE_RC_GEN2_PCIE_DMA1_VIRTUAL_FUNC_NUMBER_M  ((PCIE_RC_GEN2_PCIE_DMA1_VIRTUAL_FUNC_NUMBER_V)<<(PCIE_RC_GEN2_PCIE_DMA1_VIRTUAL_FUNC_NUMBER_S))
#define PCIE_RC_GEN2_PCIE_DMA1_VIRTUAL_FUNC_NUMBER_V  0x1FF
#define PCIE_RC_GEN2_PCIE_DMA1_VIRTUAL_FUNC_NUMBER_S  4
/* PCIE_RC_GEN2_PCIE_DMA1_ACCESS_GRANTED : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: Bit [1]: RO: DMA Access Granted: Returns 1 when read by the Physical or Virtual
Functions identified by Bits [18:4] or when DMA Access Locked is set to 0. Other
wise, it returns 0..*/
#define PCIE_RC_GEN2_PCIE_DMA1_ACCESS_GRANTED    (BIT(1))
#define PCIE_RC_GEN2_PCIE_DMA1_ACCESS_GRANTED_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_DMA1_ACCESS_GRANTED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA1_ACCESS_GRANTED_S  1
/* PCIE_RC_GEN2_PCIE_DMA1_ACCESS_LOCKED : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Bit [0]: R/W: DMA Access Locked: When set to 1, write access to the DMA Engine r
egisters is restricted to the Physical or Virtual Function identified by Bits [1
8:4]. Otherwise all functions are allowed write Access..*/
#define PCIE_RC_GEN2_PCIE_DMA1_ACCESS_LOCKED    (BIT(0))
#define PCIE_RC_GEN2_PCIE_DMA1_ACCESS_LOCKED_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_DMA1_ACCESS_LOCKED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA1_ACCESS_LOCKED_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_PASID_STREAMID_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x46C)
/* PCIE_RC_GEN2_PCIE_DMA1_EXPECTED_STREAM_ID : R/W ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Configure expected stream id.*/
#define PCIE_RC_GEN2_PCIE_DMA1_EXPECTED_STREAM_ID    0x000000FF
#define PCIE_RC_GEN2_PCIE_DMA1_EXPECTED_STREAM_ID_M  ((PCIE_RC_GEN2_PCIE_DMA1_EXPECTED_STREAM_ID_V)<<(PCIE_RC_GEN2_PCIE_DMA1_EXPECTED_STREAM_ID_S))
#define PCIE_RC_GEN2_PCIE_DMA1_EXPECTED_STREAM_ID_V  0xFF
#define PCIE_RC_GEN2_PCIE_DMA1_EXPECTED_STREAM_ID_S  24
/* PCIE_RC_GEN2_PCIE_DMA1_PASID : R/W ;bitpos:[22:3] ;default: 20'h0 ; */
/*description: Configure Process Address Space ID.*/
#define PCIE_RC_GEN2_PCIE_DMA1_PASID    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_PASID_M  ((PCIE_RC_GEN2_PCIE_DMA1_PASID_V)<<(PCIE_RC_GEN2_PCIE_DMA1_PASID_S))
#define PCIE_RC_GEN2_PCIE_DMA1_PASID_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_PASID_S  3
/* PCIE_RC_GEN2_PCIE_DMA1_PRIVILEGED_MODE_REQUESTED : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Configure Privileged Mode Reuested.*/
#define PCIE_RC_GEN2_PCIE_DMA1_PRIVILEGED_MODE_REQUESTED    (BIT(2))
#define PCIE_RC_GEN2_PCIE_DMA1_PRIVILEGED_MODE_REQUESTED_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_DMA1_PRIVILEGED_MODE_REQUESTED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA1_PRIVILEGED_MODE_REQUESTED_S  2
/* PCIE_RC_GEN2_PCIE_DMA1_EXE_REQUESTED : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Configure Execute Requested.*/
#define PCIE_RC_GEN2_PCIE_DMA1_EXE_REQUESTED    (BIT(1))
#define PCIE_RC_GEN2_PCIE_DMA1_EXE_REQUESTED_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_DMA1_EXE_REQUESTED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA1_EXE_REQUESTED_S  1
/* PCIE_RC_GEN2_PCIE_DMA1_PASID_ENABLED : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Configure PASID enabled.*/
#define PCIE_RC_GEN2_PCIE_DMA1_PASID_ENABLED    (BIT(0))
#define PCIE_RC_GEN2_PCIE_DMA1_PASID_ENABLED_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_DMA1_PASID_ENABLED_V  0x1
#define PCIE_RC_GEN2_PCIE_DMA1_PASID_ENABLED_S  0

#define PCIE_RC_GEN2_PCIE_DMA1_CONF_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x470)
/* PCIE_RC_GEN2_PCIE_DMA1_CONF : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: DMA Conf: provides certain G_DMA1_CONF fields to software. See Section 5.1.3.6 f
or more information about these fields. ; Bit [1:0]: DMA Source Address Alignmen
t, see G_DMA1_CONF[32:31]; Bit [3:2]: DMA Destination Address Alignment, seeG_DM
A1_CONF[34:33] ; Bit [5:4]: DMA Length Alignment, see G_DMA1_CONF[36:35]; Bit [6
]: DMA Scatter Gather Parameters Programming, see G_DMA1_CONF[18] ; Bit [7]: DMA
 Scatter Gather Support Fixed Value, see G_DMA1_CONF[19] ; Bit [9:8]: DMA Scatte
r Gather Type Fixed Value, see G_DMA1_CONF[21:20]; Bit [15:10]: reserved.*/
#define PCIE_RC_GEN2_PCIE_DMA1_CONF    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_CONF_M  ((PCIE_RC_GEN2_PCIE_DMA1_CONF_V)<<(PCIE_RC_GEN2_PCIE_DMA1_CONF_S))
#define PCIE_RC_GEN2_PCIE_DMA1_CONF_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_DMA1_CONF_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x600)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: Configures the PCIe to AXI Address Translate Table n PCIe start address bit [31:
12]..*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRL_S  12
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: Configures the PCIe to AXI Address Translate Table n Translation Space Size. ; T
his space size in bytes is equal to 2^(PCIE_PCIE2AXI_TBLn_SIZE+1), allowed value
s for this field are from 0xb to 0x3f..*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_SIZE_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_SIZE_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_SIZE_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not enable this table.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_EN_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x604)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the PCIe to AXI Address Translate Table n PCIe start address bit [63:
32]..*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x608)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: Configures the PCIe to AXI Address Translate Table n translated AXI start addres
s bit [31:12]..*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRL_S  12

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x60C)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the PCIe to AXI Address Translate Table n translated AXI start addres
s bit [63:32]..*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x610)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PARAM_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PARAM_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PARAM_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_ID_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_ID_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_ID_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL0_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x620)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRL_S  12
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_SIZE_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_SIZE_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_SIZE_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_EN_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x624)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x628)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRL_S  12

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x62C)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x630)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PARAM_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PARAM_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PARAM_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_ID_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_ID_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_ID_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL1_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x640)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRL_S  12
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_SIZE_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_SIZE_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_SIZE_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_EN_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x644)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x648)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRL_S  12

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x64C)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x650)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PARAM_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PARAM_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PARAM_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_ID_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_ID_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_ID_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL2_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x660)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRL_S  12
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_SIZE_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_SIZE_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_SIZE_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_EN_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x664)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x668)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRL_S  12

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x66C)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x670)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PARAM_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PARAM_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PARAM_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_ID_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_ID_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_ID_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL3_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x680)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRL_S  12
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_SIZE_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_SIZE_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_SIZE_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_EN_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x684)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x688)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRL_S  12

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x68C)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x690)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PARAM_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PARAM_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PARAM_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_ID_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_ID_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_ID_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL4_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6A0)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRL_S  12
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_SIZE_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_SIZE_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_SIZE_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_EN_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6A4)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6A8)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRL_S  12

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6AC)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6B0)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PARAM_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PARAM_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PARAM_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_ID_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_ID_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_ID_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL5_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6C0)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRL_S  12
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_SIZE_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_SIZE_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_SIZE_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_EN_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6C4)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6C8)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRL_S  12

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6CC)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6D0)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PARAM_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PARAM_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PARAM_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_ID_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_ID_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_ID_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL6_ID_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6E0)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRL_S  12
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_SIZE_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_SIZE_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_SIZE_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_EN_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6E4)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6E8)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRL_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRL_S  12

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6EC)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRU_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x6F0)
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PARAM_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PARAM_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PARAM_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_ID_M  ((PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_ID_V)<<(PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_ID_S))
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_PCIE2AXI_TBL7_ID_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x800)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: Configures the AXI to PCIe Address Translate Table n AXI start address bit [31:1
2]..*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRL_S  12
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: Configures the AXI to PCIe Address Translate Table n Translation Space Size. ; T
his space size in bytes is equal to 2^(PCIE_AXI2PCIE_TBLn_SIZE+1), allowed value
s for this field are from 0xb to 0x3f..*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_SIZE_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_SIZE_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_SIZE_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_EN : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: Configures whether or not enable this table.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_EN_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x804)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the AXI to PCIe Address Translate Table n AXI start address bit [63:3
2]..*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x808)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: Configures the AXI to PCIe Address Translate Table n translated PCIe start addre
ss bit [31:12]..*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRL_S  12

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x80C)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the AXI to PCIe Address Translate Table n translated PCIe start addre
ss bit [63:32]..*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x810)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PARAM_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PARAM_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PARAM_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_ID_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_ID_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_ID_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL0_ID_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x820)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRL_S  12
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_SIZE_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_SIZE_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_SIZE_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_EN_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x824)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x828)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRL_S  12

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x82C)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x830)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PARAM_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PARAM_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PARAM_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_ID_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_ID_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_ID_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL1_ID_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x840)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRL_S  12
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_SIZE_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_SIZE_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_SIZE_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_EN_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x844)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x848)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRL_S  12

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x84C)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x850)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PARAM_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PARAM_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PARAM_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_ID_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_ID_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_ID_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL2_ID_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x860)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRL_S  12
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_SIZE_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_SIZE_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_SIZE_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_EN_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x864)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x868)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRL_S  12

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x86C)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x870)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PARAM_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PARAM_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PARAM_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_ID_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_ID_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_ID_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL3_ID_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x880)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRL_S  12
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_SIZE_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_SIZE_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_SIZE_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_EN_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x884)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x888)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRL_S  12

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x88C)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x890)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PARAM_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PARAM_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PARAM_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_ID_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_ID_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_ID_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL4_ID_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8A0)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRL_S  12
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_SIZE_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_SIZE_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_SIZE_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_EN_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8A4)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8A8)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRL_S  12

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8AC)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8B0)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PARAM_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PARAM_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PARAM_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_ID_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_ID_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_ID_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL5_ID_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8C0)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRL_S  12
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_SIZE_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_SIZE_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_SIZE_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_EN_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8C4)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8C8)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRL_S  12

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8CC)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8D0)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PARAM_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PARAM_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PARAM_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_ID_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_ID_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_ID_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL6_ID_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8E0)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRL_S  12
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_SIZE : R/W ;bitpos:[6:1] ;default: 6'hb ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_SIZE    0x0000003F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_SIZE_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_SIZE_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_SIZE_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_SIZE_V  0x3F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_SIZE_S  1
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_EN_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8E4)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_XADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8E8)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRL_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRL_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRL_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRL_S  12

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8EC)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRU_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRU_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRU_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PADDRU_S  0

#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PARAM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x8F0)
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PARAM : R/W ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Configures the Translated Parameter of the request.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PARAM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PARAM_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PARAM_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PARAM_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PARAM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_PARAM_S  16
/* PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_ID : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Translated ID of the request; 4’d0: PCIe Tx/Rx Interface; 4’d1: P
CIe Config or I/O Interface ; 4’d2: AXI4-Lite Manager Interface (External Regist
ers); 4’d4 + k: AXI4 Manager Number k=0 - 3 Interface; 4’d12: Bridge Internal Re
gisters.*/
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_ID    0x0000000F
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_ID_M  ((PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_ID_V)<<(PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_ID_S))
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_ID_V  0xF
#define PCIE_RC_GEN2_PCIE_AXI2PCIE_TBL7_ID_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_VEN_DEV_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1000)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_DEVICE_ID : RO ;bitpos:[31:16] ;default: 16'h1111 ; */
/*description: Represents Device ID defined by Vendor..*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_DEVICE_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_DEVICE_ID_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_DEVICE_ID_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_DEVICE_ID_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_DEVICE_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_DEVICE_ID_S  16
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_VENDOR_ID : RO ;bitpos:[15:0] ;default: 16'h1556 ; */
/*description: Represents PCI-SIG Vendor ID..*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_VENDOR_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_VENDOR_ID_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_VENDOR_ID_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_VENDOR_ID_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_VENDOR_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_VENDOR_ID_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CMD_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1004)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_DETECT_PAR_ERR : R/W1C ;bitpos:[31] ;default: 1'h0 ; */
/*description: Represents whether or not the Function receives a Poisoned TLP.; 0: Not receive;
 1: Receive.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_DETECT_PAR_ERR    (BIT(31))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_DETECT_PAR_ERR_M  (BIT(31))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_DETECT_PAR_ERR_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_DETECT_PAR_ERR_S  31
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_SYS_ERR : R/W1C ;bitpos:[30] ;default: 1'h0 ; */
/*description: Represents whether or not the Function sends an ERR_FATAL or ERR_NONFATAL Messag
e.; 0: Not send; 1: Send.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_SYS_ERR    (BIT(30))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_SYS_ERR_M  (BIT(30))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_SYS_ERR_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_SYS_ERR_S  30
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_MST_ABORT : R/W1C ;bitpos:[29] ;default: 1'h0 ; */
/*description: Represents whether or not the Requester receives a Completion with Unsupported R
equest Completion Status.; 0: Not receive; 1: Receive.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_MST_ABORT    (BIT(29))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_MST_ABORT_M  (BIT(29))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_MST_ABORT_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_MST_ABORT_S  29
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_TARGET_ABORT : R/W1C ;bitpos:[28] ;default: 1'h0 ; */
/*description: Represents whether or not the Requester receives a Completion with Completer Abo
rt Completion Status.; 0: Not receive; 1: Receive.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_TARGET_ABORT    (BIT(28))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_TARGET_ABORT_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_TARGET_ABORT_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_RX_TARGET_ABORT_S  28
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_TARGET_ABORT : R/W1C ;bitpos:[27] ;default: 1'h0 ; */
/*description: Represents whether or not the Function completes a Posted or Non-Posted Request
as a Completer Abort error.; 0: Not complete; 1: Complete.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_TARGET_ABORT    (BIT(27))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_TARGET_ABORT_M  (BIT(27))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_TARGET_ABORT_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SIGNALED_TARGET_ABORT_S  27
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_MST_DATA_PAR_ERR : R/W1C ;bitpos:[24] ;default: 1'h0 ; */
/*description: Represents whether or not the Function receives a Poisoned Completion or transmi
ts a Poisoned Request, and the Parity Error Response bit in the Command Register
 is 1.; 0: Not receive; 1: Receive.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MST_DATA_PAR_ERR    (BIT(24))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MST_DATA_PAR_ERR_M  (BIT(24))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MST_DATA_PAR_ERR_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MST_DATA_PAR_ERR_S  24
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_CAP_LIST : RO ;bitpos:[20] ;default: 1'h1 ; */
/*description: Represents whether or not an Extended Capability list is presence.; 0: Not prese
nce; 1: Presence.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CAP_LIST    (BIT(20))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CAP_LIST_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CAP_LIST_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CAP_LIST_S  20
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_STA : RO ;bitpos:[19] ;default: 1'h0 ; */
/*description: Represents whether or not an INTx emulation interrupt is pending internally.; 0:
 Not pending; 1: Pending.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_STA    (BIT(19))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_STA_M  (BIT(19))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_STA_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_STA_S  19
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_IMMEDIATE_READINESS : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not the Function is guaranteed to be ready to successfully
 complete valid Configuration Requests at any time.; 0: Not ready; 1: Ready.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IMMEDIATE_READINESS    (BIT(16))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IMMEDIATE_READINESS_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IMMEDIATE_READINESS_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IMMEDIATE_READINESS_S  16
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_EN : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not enable generate INTx interrupts.; 0: Disable; 1: Enabl
e.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_EN    (BIT(10))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_EN_M  (BIT(10))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_EN_S  10
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_SERR_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not enable reporting upstream of Non-fatal and Fatal error
s.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SERR_EN    (BIT(8))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SERR_EN_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SERR_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SERR_EN_S  8
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_PAR_ERR_RESP : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or not enable logging poisoned TLPs in PCIE_TYPE1HEADER_MST_D
ATA_PAR_ERR bit.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PAR_ERR_RESP    (BIT(6))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PAR_ERR_RESP_M  (BIT(6))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PAR_ERR_RESP_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PAR_ERR_RESP_S  6
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_BUS_MST_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether or not enable issue Memory or I/O Requests.; 0: Disable; 1: E
nable.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BUS_MST_EN    (BIT(2))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BUS_MST_EN_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BUS_MST_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BUS_MST_EN_S  2
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEM_SPACE_EN : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether or not enable response to Memory Space accesses.; 0: Disable;
 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEM_SPACE_EN    (BIT(1))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEM_SPACE_EN_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEM_SPACE_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEM_SPACE_EN_S  1
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_SPACE_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not enable response to I/O Space accesses.; 0: Disable; 1:
 Enable.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_SPACE_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_SPACE_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_SPACE_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_SPACE_EN_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_REV_CLA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1008)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_CLASS_CODE : RO ;bitpos:[31:8] ;default: 24'hd2100 ; */
/*description: Represents Class Code..*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CLASS_CODE    0x00FFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CLASS_CODE_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_CLASS_CODE_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_CLASS_CODE_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CLASS_CODE_V  0xFFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CLASS_CODE_S  8
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_REVISION_ID : RO ;bitpos:[7:0] ;default: 8'h2 ; */
/*description: Represents Revision ID..*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_REVISION_ID    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_REVISION_ID_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_REVISION_ID_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_REVISION_ID_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_REVISION_ID_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_REVISION_ID_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CAP_MSIC_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x100C)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_BIST_CAP : RO ;bitpos:[31] ;default: 1'h0 ; */
/*description: Represents whether or not the Device supports BIST.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BIST_CAP    (BIT(31))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BIST_CAP_M  (BIT(31))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BIST_CAP_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BIST_CAP_S  31
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_MULTI_FUN : RO ;bitpos:[23] ;default: 1'h0 ; */
/*description: Represents whether or not the Device contain multiple Functions.; 0: Not contain
 multiple Functions; 1: Contain multiple Functions.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MULTI_FUN    (BIT(23))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MULTI_FUN_M  (BIT(23))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MULTI_FUN_V  0x1
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MULTI_FUN_S  23
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_TYPE1HEADER_LAYOUT : RO ;bitpos:[22:16] ;default: 7'h0 ; */
/*description: Represents layout of the second part of the predefined type1header..*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_TYPE1HEADER_LAYOUT    0x0000007F
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_TYPE1HEADER_LAYOUT_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_TYPE1HEADER_LAYOUT_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_TYPE1HEADER_LAYOUT_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_TYPE1HEADER_LAYOUT_V  0x7F
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_TYPE1HEADER_LAYOUT_S  16
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_CACHE_LINE_SIZE : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Configures the system cache line size..*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CACHE_LINE_SIZE    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CACHE_LINE_SIZE_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_CACHE_LINE_SIZE_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_CACHE_LINE_SIZE_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CACHE_LINE_SIZE_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_CACHE_LINE_SIZE_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1010)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR0 : R/W ;bitpos:[31:0] ;default: 32'h4 ; */
/*description: Configures the Base Address Register 0 (BAR0)..*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR0    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR0_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR0_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR0_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR0_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR0_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1014)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the Base Address Register 1 (BAR1)..*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR1    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR1_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR1_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR1_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR1_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BAR1_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BUS_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1018)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_LATENCY_TIMER : R/W ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Subordinate Latency Timer.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_LATENCY_TIMER    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_LATENCY_TIMER_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_LATENCY_TIMER_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_LATENCY_TIMER_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_LATENCY_TIMER_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_LATENCY_TIMER_S  24
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_BUS : R/W ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: Subordinate Bus Number.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_BUS    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_BUS_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_BUS_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_BUS_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_BUS_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SUBORDINATE_BUS_S  16
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_BUS : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Secondary Bus Number.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_BUS    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_BUS_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_BUS_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_BUS_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_BUS_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_BUS_S  8
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_PRIMARY_BUS : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Primary Bus Number.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PRIMARY_BUS    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PRIMARY_BUS_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_PRIMARY_BUS_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_PRIMARY_BUS_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PRIMARY_BUS_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PRIMARY_BUS_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x101C)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_STATUS : RO ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Secondary Status.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_STATUS    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_STATUS_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_STATUS_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_STATUS_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_STATUS_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_SECONDARY_STATUS_S  16
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: I/O Limit.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_S  8
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: I/O Base.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1020)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_LIMIT : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Memory Limit.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_LIMIT    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_LIMIT_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_LIMIT_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_LIMIT_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_LIMIT_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_LIMIT_S  16
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_BASE : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Memory Base.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_BASE    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_BASE_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_BASE_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_BASE_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_BASE_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_MEMORY_BASE_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLE_MEMORY_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1024)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Prefetchable Memory Limit.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_S  16
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Prefetchable Memory Base.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLE_BASE_UPPER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x102C)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_UPPER : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Prefetchable Memory Base Upper 32 bit.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_UPPER    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_UPPER_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_UPPER_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_UPPER_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_UPPER_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_BASE_UPPER_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLE_LIMIT_UPPER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1030)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_UPPER : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Prefetchable Memory Limit Upper 32 bit.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_UPPER    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_UPPER_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_UPPER_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_UPPER_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_UPPER_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_PREFETCHABLEMEMORY_LIMIT_UPPER_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_UPPER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1034)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_UPPER : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Prefetchable Memory Limit Upper 16 bit.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_UPPER    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_UPPER_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_UPPER_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_UPPER_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_UPPER_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_LIMIT_UPPER_S  16
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_UPPER : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Prefetchable Memory Base Upper 16 bit.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_UPPER    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_UPPER_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_UPPER_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_UPPER_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_UPPER_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_IO_BASE_UPPER_S  0

#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_MSIC_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x103C)
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_BRIDGE_CTRL : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Bridge Control (Details to be filled if necessary).*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BRIDGE_CTRL    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BRIDGE_CTRL_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_BRIDGE_CTRL_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_BRIDGE_CTRL_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BRIDGE_CTRL_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_BRIDGE_CTRL_S  16
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_PIN : RO ;bitpos:[15:8] ;default: 8'h1 ; */
/*description: Represents the Function uses which legacy interrupt Message.; 0x0: None; 0x1: IN
TA; 0x2: INTB; 0x3: INTC; 0x4: INTD; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_PIN    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_PIN_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_PIN_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_PIN_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_PIN_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_PIN_S  8
/* PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_LINE : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Configures the interrupt line routing information..*/
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_LINE    0x000000FF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_LINE_M  ((PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_LINE_V)<<(PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_LINE_S))
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_LINE_V  0xFF
#define PCIE_RC_GEN2_PCIE_TYPE1HEADER_INTR_LINE_S  0

#define PCIE_RC_GEN2_PCIE_CAP_HEADER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1080)
/* PCIE_RC_GEN2_PCIE_CAP_INTR_MESSAGE_NUM : RO ;bitpos:[29:25] ;default: 5'h0 ; */
/*description: Represents MSI/MSI-X vector used for the interrupt message generated in associat
ion with any of the status bits of this Capability structure..*/
#define PCIE_RC_GEN2_PCIE_CAP_INTR_MESSAGE_NUM    0x0000001F
#define PCIE_RC_GEN2_PCIE_CAP_INTR_MESSAGE_NUM_M  ((PCIE_RC_GEN2_PCIE_CAP_INTR_MESSAGE_NUM_V)<<(PCIE_RC_GEN2_PCIE_CAP_INTR_MESSAGE_NUM_S))
#define PCIE_RC_GEN2_PCIE_CAP_INTR_MESSAGE_NUM_V  0x1F
#define PCIE_RC_GEN2_PCIE_CAP_INTR_MESSAGE_NUM_S  25
/* PCIE_RC_GEN2_PCIE_CAP_SLOT_IMPL : RO ;bitpos:[24] ;default: 1'h0 ; */
/*description: Represents the port is conneted to a slot??.*/
#define PCIE_RC_GEN2_PCIE_CAP_SLOT_IMPL    (BIT(24))
#define PCIE_RC_GEN2_PCIE_CAP_SLOT_IMPL_M  (BIT(24))
#define PCIE_RC_GEN2_PCIE_CAP_SLOT_IMPL_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_SLOT_IMPL_S  24
/* PCIE_RC_GEN2_PCIE_CAP_DEVICE_PORT_TYPE : RO ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: Represents PCIe Port Type is Root Port of PCI Express Root Complext. (0100b).*/
#define PCIE_RC_GEN2_PCIE_CAP_DEVICE_PORT_TYPE    0x0000000F
#define PCIE_RC_GEN2_PCIE_CAP_DEVICE_PORT_TYPE_M  ((PCIE_RC_GEN2_PCIE_CAP_DEVICE_PORT_TYPE_V)<<(PCIE_RC_GEN2_PCIE_CAP_DEVICE_PORT_TYPE_S))
#define PCIE_RC_GEN2_PCIE_CAP_DEVICE_PORT_TYPE_V  0xF
#define PCIE_RC_GEN2_PCIE_CAP_DEVICE_PORT_TYPE_S  20
/* PCIE_RC_GEN2_PCIE_CAP_CAP_VERSION : RO ;bitpos:[19:16] ;default: 4'h2 ; */
/*description: Represents Capability Version..*/
#define PCIE_RC_GEN2_PCIE_CAP_CAP_VERSION    0x0000000F
#define PCIE_RC_GEN2_PCIE_CAP_CAP_VERSION_M  ((PCIE_RC_GEN2_PCIE_CAP_CAP_VERSION_V)<<(PCIE_RC_GEN2_PCIE_CAP_CAP_VERSION_S))
#define PCIE_RC_GEN2_PCIE_CAP_CAP_VERSION_V  0xF
#define PCIE_RC_GEN2_PCIE_CAP_CAP_VERSION_S  16
/* PCIE_RC_GEN2_PCIE_CAP_NEXT_CAP_PTR : RO ;bitpos:[15:8] ;default: 8'hd0 ; */
/*description: Represents offset to next Capability Structure..*/
#define PCIE_RC_GEN2_PCIE_CAP_NEXT_CAP_PTR    0x000000FF
#define PCIE_RC_GEN2_PCIE_CAP_NEXT_CAP_PTR_M  ((PCIE_RC_GEN2_PCIE_CAP_NEXT_CAP_PTR_V)<<(PCIE_RC_GEN2_PCIE_CAP_NEXT_CAP_PTR_S))
#define PCIE_RC_GEN2_PCIE_CAP_NEXT_CAP_PTR_V  0xFF
#define PCIE_RC_GEN2_PCIE_CAP_NEXT_CAP_PTR_S  8
/* PCIE_RC_GEN2_PCIE_CAP_CAP_ID : RO ;bitpos:[7:0] ;default: 8'h10 ; */
/*description: Represents Capability ID..*/
#define PCIE_RC_GEN2_PCIE_CAP_CAP_ID    0x000000FF
#define PCIE_RC_GEN2_PCIE_CAP_CAP_ID_M  ((PCIE_RC_GEN2_PCIE_CAP_CAP_ID_V)<<(PCIE_RC_GEN2_PCIE_CAP_CAP_ID_S))
#define PCIE_RC_GEN2_PCIE_CAP_CAP_ID_V  0xFF
#define PCIE_RC_GEN2_PCIE_CAP_CAP_ID_S  0

#define PCIE_RC_GEN2_PCIE_CAP_DEVICE_CAP_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1084)
/* PCIE_RC_GEN2_PCIE_CAP_FLR_CAP : RO ;bitpos:[28] ;default: 1'h1 ; */
/*description: Represents whether or not the Function supports Function Level Reset.; 0: Not su
pport; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_CAP_FLR_CAP    (BIT(28))
#define PCIE_RC_GEN2_PCIE_CAP_FLR_CAP_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_CAP_FLR_CAP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_FLR_CAP_S  28
/* PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_SCALE : RO ;bitpos:[27:26] ;default: 2'h0 ; */
/*description: Represents the unit of PCIE_CAP_CAPT_SPL_VALUE.; 0x0: 1.0x; 0x1: 0.1x; 0x2: 0.01
x; 0x3: 0.001x.*/
#define PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_SCALE    0x00000003
#define PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_SCALE_M  ((PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_SCALE_V)<<(PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_SCALE_S))
#define PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_SCALE_V  0x3
#define PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_SCALE_S  26
/* PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_VALUE : RO ;bitpos:[25:18] ;default: 8'h0 ; */
/*description: Represents the upper limit on power available to the adapter, unit is defined by
 PCIE_CAP_CAPT_SPL_SCALE..*/
#define PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_VALUE    0x000000FF
#define PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_VALUE_M  ((PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_VALUE_V)<<(PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_VALUE_S))
#define PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_VALUE_V  0xFF
#define PCIE_RC_GEN2_PCIE_CAP_CAPT_SPL_VALUE_S  18
/* PCIE_RC_GEN2_PCIE_CAP_ERR_COR_SUBCLASS_CAP : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not the Function supports the ERR_COR Subclass field in ER
R_COR Messages.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_CAP_ERR_COR_SUBCLASS_CAP    (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_ERR_COR_SUBCLASS_CAP_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_ERR_COR_SUBCLASS_CAP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_ERR_COR_SUBCLASS_CAP_S  16
/* PCIE_RC_GEN2_PCIE_CAP_ROLE_BASED_ERR_RPT : RO ;bitpos:[15] ;default: 1'h1 ; */
/*description: Represents whether or not the Function implements Role-Based Error Reporting.; 0
: Not implement; 1: Implement.*/
#define PCIE_RC_GEN2_PCIE_CAP_ROLE_BASED_ERR_RPT    (BIT(15))
#define PCIE_RC_GEN2_PCIE_CAP_ROLE_BASED_ERR_RPT_M  (BIT(15))
#define PCIE_RC_GEN2_PCIE_CAP_ROLE_BASED_ERR_RPT_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_ROLE_BASED_ERR_RPT_S  15
/* PCIE_RC_GEN2_PCIE_CAP_EP_L1_ACCEPT_LATENCY : RO ;bitpos:[11:9] ;default: 3'h7 ; */
/*description: Represents the acceptable total latency from L1 to L0 state.; 0x0: 1us; 0x1: 2us
; 0x2: 4us; 0x3: 8us; 0x4: 16us; 0x5: 32us; 0x6: 64us; 0x7: No limit.*/
#define PCIE_RC_GEN2_PCIE_CAP_EP_L1_ACCEPT_LATENCY    0x00000007
#define PCIE_RC_GEN2_PCIE_CAP_EP_L1_ACCEPT_LATENCY_M  ((PCIE_RC_GEN2_PCIE_CAP_EP_L1_ACCEPT_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_CAP_EP_L1_ACCEPT_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_CAP_EP_L1_ACCEPT_LATENCY_V  0x7
#define PCIE_RC_GEN2_PCIE_CAP_EP_L1_ACCEPT_LATENCY_S  9
/* PCIE_RC_GEN2_PCIE_CAP_EP_L0S_ACCEPT_LATENCY : RO ;bitpos:[8:6] ;default: 3'h7 ; */
/*description: Represents the acceptable total latency from L0s to L0 state.; 0x0: 64ns; 0x1: 1
28ns; 0x2: 256ns; 0x3: 512ns; 0x4: 1us; 0x5: 2us; 0x6: 4us; 0x7: No limit.*/
#define PCIE_RC_GEN2_PCIE_CAP_EP_L0S_ACCEPT_LATENCY    0x00000007
#define PCIE_RC_GEN2_PCIE_CAP_EP_L0S_ACCEPT_LATENCY_M  ((PCIE_RC_GEN2_PCIE_CAP_EP_L0S_ACCEPT_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_CAP_EP_L0S_ACCEPT_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_CAP_EP_L0S_ACCEPT_LATENCY_V  0x7
#define PCIE_RC_GEN2_PCIE_CAP_EP_L0S_ACCEPT_LATENCY_S  6
/* PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_FIELD_SUP : RO ;bitpos:[5] ;default: 1'h1 ; */
/*description: Represents whether or not support extended Tag Field.; 0: 5bit Tag field support
ed; 1: 8bit Tag field supported.*/
#define PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_FIELD_SUP    (BIT(5))
#define PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_FIELD_SUP_M  (BIT(5))
#define PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_FIELD_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_FIELD_SUP_S  5
/* PCIE_RC_GEN2_PCIE_CAP_PHANTOM_FUN_SUP : RO ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Represents not support Phantom Functions..*/
#define PCIE_RC_GEN2_PCIE_CAP_PHANTOM_FUN_SUP    0x00000003
#define PCIE_RC_GEN2_PCIE_CAP_PHANTOM_FUN_SUP_M  ((PCIE_RC_GEN2_PCIE_CAP_PHANTOM_FUN_SUP_V)<<(PCIE_RC_GEN2_PCIE_CAP_PHANTOM_FUN_SUP_S))
#define PCIE_RC_GEN2_PCIE_CAP_PHANTOM_FUN_SUP_V  0x3
#define PCIE_RC_GEN2_PCIE_CAP_PHANTOM_FUN_SUP_S  3
/* PCIE_RC_GEN2_PCIE_CAP_MPS_SUP : RO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Represents maximum payload size can support for TLPs.; 0x0: 128 Bytes; 0x1: 256
Bytes; 0x2: 512 Bytes; 0x3: 1024 Bytes; 0x4: 2048 Bytes; 0x5: 4096 Bytes; Others
: Reserved.*/
#define PCIE_RC_GEN2_PCIE_CAP_MPS_SUP    0x00000007
#define PCIE_RC_GEN2_PCIE_CAP_MPS_SUP_M  ((PCIE_RC_GEN2_PCIE_CAP_MPS_SUP_V)<<(PCIE_RC_GEN2_PCIE_CAP_MPS_SUP_S))
#define PCIE_RC_GEN2_PCIE_CAP_MPS_SUP_V  0x7
#define PCIE_RC_GEN2_PCIE_CAP_MPS_SUP_S  0

#define PCIE_RC_GEN2_PCIE_CAP_DEVICE_CTRL_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1088)
/* PCIE_RC_GEN2_PCIE_CAP_TRANS_PENDING : RO ;bitpos:[21] ;default: 1'h0 ; */
/*description: Represents whether or not the Function has issued Non-Posted Requests that have
not been completed.; 0: All Non-Posted Requests completed; 1: Non-Posted Request
s not been completed.*/
#define PCIE_RC_GEN2_PCIE_CAP_TRANS_PENDING    (BIT(21))
#define PCIE_RC_GEN2_PCIE_CAP_TRANS_PENDING_M  (BIT(21))
#define PCIE_RC_GEN2_PCIE_CAP_TRANS_PENDING_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_TRANS_PENDING_S  21
/* PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_DET : RO ;bitpos:[20] ;default: 1'h0 ; */
/*description: Represents whether or not auxiliary power detected.; 0: Not detected; 1: Detecte
d.*/
#define PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_DET    (BIT(20))
#define PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_DET_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_DET_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_DET_S  20
/* PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_DET : R/W1C ;bitpos:[19] ;default: 1'h0 ; */
/*description: Represents whether or not Unsupported Request detected.; 0: Not detected; 1: Det
ected.*/
#define PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_DET    (BIT(19))
#define PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_DET_M  (BIT(19))
#define PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_DET_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_DET_S  19
/* PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_DET : R/W1C ;bitpos:[18] ;default: 1'h0 ; */
/*description: Represents whether or not Fatal errors detected.; 0: Not detected; 1: Detected.*/
#define PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_DET    (BIT(18))
#define PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_DET_M  (BIT(18))
#define PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_DET_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_DET_S  18
/* PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_DET : R/W1C ;bitpos:[17] ;default: 1'h0 ; */
/*description: Represents whether or not Non-fatal errors detected.; 0: Not detected; 1: Detect
ed.*/
#define PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_DET    (BIT(17))
#define PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_DET_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_DET_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_DET_S  17
/* PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_DET : R/W1C ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not correctable errors detected.; 0: Not detected; 1: Dete
cted.*/
#define PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_DET    (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_DET_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_DET_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_DET_S  16
/* PCIE_RC_GEN2_PCIE_CAP_INIT_FLR : R/WT ;bitpos:[15] ;default: 1'h0 ; */
/*description: Write 1 to initiates Function Level Reset to the Function..*/
#define PCIE_RC_GEN2_PCIE_CAP_INIT_FLR    (BIT(15))
#define PCIE_RC_GEN2_PCIE_CAP_INIT_FLR_M  (BIT(15))
#define PCIE_RC_GEN2_PCIE_CAP_INIT_FLR_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_INIT_FLR_S  15
/* PCIE_RC_GEN2_PCIE_CAP_MRRS : R/W ;bitpos:[14:12] ;default: 3'h2 ; */
/*description: Configures maximum Read Request size for the Function as a Requester.; 0x0: 128
Bytes; 0x1: 256 Bytes; 0x2: 512 Bytes; 0x3: 1024 Bytes; 0x4: 2048 Bytes; 0x5: 40
96 Bytes; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_CAP_MRRS    0x00000007
#define PCIE_RC_GEN2_PCIE_CAP_MRRS_M  ((PCIE_RC_GEN2_PCIE_CAP_MRRS_V)<<(PCIE_RC_GEN2_PCIE_CAP_MRRS_S))
#define PCIE_RC_GEN2_PCIE_CAP_MRRS_V  0x7
#define PCIE_RC_GEN2_PCIE_CAP_MRRS_S  12
/* PCIE_RC_GEN2_PCIE_CAP_EN_NO_SNOOP : R/W ;bitpos:[11] ;default: 1'h1 ; */
/*description: Configures whether or not enable No Snoop.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_EN_NO_SNOOP    (BIT(11))
#define PCIE_RC_GEN2_PCIE_CAP_EN_NO_SNOOP_M  (BIT(11))
#define PCIE_RC_GEN2_PCIE_CAP_EN_NO_SNOOP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_EN_NO_SNOOP_S  11
/* PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_PM_EN : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not enable the Function to draw auxiliary power independen
t of PME Aux power.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_PM_EN    (BIT(10))
#define PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_PM_EN_M  (BIT(10))
#define PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_PM_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_AUX_POWER_PM_EN_S  10
/* PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_EN : R/W ;bitpos:[8] ;default: 1'h1 ; */
/*description: Configures whether or not enable 8-bit Tag field.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_EN    (BIT(8))
#define PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_EN_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_EXT_TAG_EN_S  8
/* PCIE_RC_GEN2_PCIE_CAP_MPS : RO ;bitpos:[7:5] ;default: 3'h0 ; */
/*description: Configures maximum TLP payload size for the Function.; 0x0: 128 Bytes; 0x1: 256
Bytes; 0x2: 512 Bytes; 0x3: 1024 Bytes; 0x4: 2048 Bytes; 0x5: 4096 Bytes; Others
: Reserved.*/
#define PCIE_RC_GEN2_PCIE_CAP_MPS    0x00000007
#define PCIE_RC_GEN2_PCIE_CAP_MPS_M  ((PCIE_RC_GEN2_PCIE_CAP_MPS_V)<<(PCIE_RC_GEN2_PCIE_CAP_MPS_S))
#define PCIE_RC_GEN2_PCIE_CAP_MPS_V  0x7
#define PCIE_RC_GEN2_PCIE_CAP_MPS_S  5
/* PCIE_RC_GEN2_PCIE_CAP_EN_RELAX_ORDER : R/W ;bitpos:[4] ;default: 1'h1 ; */
/*description: Configures whether or not enable Relaxed Ordering in the Attributes field.; 0: D
isable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_EN_RELAX_ORDER    (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_EN_RELAX_ORDER_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_EN_RELAX_ORDER_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_EN_RELAX_ORDER_S  4
/* PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_RPT_EN : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: Configures whether or not enable sending error Message of Unsupported Request Er
rors.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_RPT_EN    (BIT(3))
#define PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_RPT_EN_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_RPT_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_UNSUP_REQ_RPT_EN_S  3
/* PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_RPT_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether or not enable sending ERR_FATAL Message.; 0: Disable; 1: Enab
le.*/
#define PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_RPT_EN    (BIT(2))
#define PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_RPT_EN_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_RPT_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_FATAL_ERR_RPT_EN_S  2
/* PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_RPT_EN : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether or not enable sending ERR_NONFATAL Message.; 0: Disable; 1: E
nable.*/
#define PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_RPT_EN    (BIT(1))
#define PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_RPT_EN_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_RPT_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_NONFATAL_ERR_RPT_EN_S  1
/* PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_RPT_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not enable sending ERR_COR Message.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_RPT_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_RPT_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_RPT_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_CORR_ERR_RPT_EN_S  0

#define PCIE_RC_GEN2_PCIE_CAP_LINK_CAP_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x108C)
/* PCIE_RC_GEN2_PCIE_CAP_PORT_NUM : RO ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Represents the PCIe Port number for the given PCIe link..*/
#define PCIE_RC_GEN2_PCIE_CAP_PORT_NUM    0x000000FF
#define PCIE_RC_GEN2_PCIE_CAP_PORT_NUM_M  ((PCIE_RC_GEN2_PCIE_CAP_PORT_NUM_V)<<(PCIE_RC_GEN2_PCIE_CAP_PORT_NUM_S))
#define PCIE_RC_GEN2_PCIE_CAP_PORT_NUM_V  0xFF
#define PCIE_RC_GEN2_PCIE_CAP_PORT_NUM_S  24
/* PCIE_RC_GEN2_PCIE_CAP_ASPM_OPT_COMP : RO ;bitpos:[22] ;default: 1'h1 ; */
/*description: Represents ASPM Optionality Compliance, must be set to 1..*/
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_OPT_COMP    (BIT(22))
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_OPT_COMP_M  (BIT(22))
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_OPT_COMP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_OPT_COMP_S  22
/* PCIE_RC_GEN2_PCIE_CAP_CLK_PM : RO ;bitpos:[18] ;default: 1'h0 ; */
/*description: Represents whether or not the component tolerate the removal of any reference cl
ock via the CLKREQ# mechanism when the link is in L1 and L2/L3 Ready Link states
.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_CAP_CLK_PM    (BIT(18))
#define PCIE_RC_GEN2_PCIE_CAP_CLK_PM_M  (BIT(18))
#define PCIE_RC_GEN2_PCIE_CAP_CLK_PM_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_CLK_PM_S  18
/* PCIE_RC_GEN2_PCIE_CAP_L1_EXIT_LATENCY : RO ;bitpos:[17:15] ;default: 3'h6 ; */
/*description: Represents the maximum L1 exit latency.; 0x0: 1us; 0x1: 2us; 0x2: 4us; 0x3: 8us;
 0x4: 16us; 0x5: 32us; 0x6: 64us; 0x7: More than 64us.*/
#define PCIE_RC_GEN2_PCIE_CAP_L1_EXIT_LATENCY    0x00000007
#define PCIE_RC_GEN2_PCIE_CAP_L1_EXIT_LATENCY_M  ((PCIE_RC_GEN2_PCIE_CAP_L1_EXIT_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_CAP_L1_EXIT_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_CAP_L1_EXIT_LATENCY_V  0x7
#define PCIE_RC_GEN2_PCIE_CAP_L1_EXIT_LATENCY_S  15
/* PCIE_RC_GEN2_PCIE_CAP_L0S_EXIT_LATENCY : RO ;bitpos:[14:12] ;default: 3'h4 ; */
/*description: Represents the maximum L0s exit latency.; 0x0: 64ns; 0x1: 128ns; 0x2: 256ns; 0x3
: 512ns; 0x4: 1us; 0x5: 2us; 0x6: 4us; 0x7: More than 4us.*/
#define PCIE_RC_GEN2_PCIE_CAP_L0S_EXIT_LATENCY    0x00000007
#define PCIE_RC_GEN2_PCIE_CAP_L0S_EXIT_LATENCY_M  ((PCIE_RC_GEN2_PCIE_CAP_L0S_EXIT_LATENCY_V)<<(PCIE_RC_GEN2_PCIE_CAP_L0S_EXIT_LATENCY_S))
#define PCIE_RC_GEN2_PCIE_CAP_L0S_EXIT_LATENCY_V  0x7
#define PCIE_RC_GEN2_PCIE_CAP_L0S_EXIT_LATENCY_S  12
/* PCIE_RC_GEN2_PCIE_CAP_ASPM_SUP : RO ;bitpos:[11:10] ;default: 2'h3 ; */
/*description: Represents ASPM supported level.; 0x0: No ASPM Support; 0x1: L0s Supported; 0x2:
 L1 Supported; 0x3: L0s and L1 Supported.*/
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_SUP    0x00000003
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_SUP_M  ((PCIE_RC_GEN2_PCIE_CAP_ASPM_SUP_V)<<(PCIE_RC_GEN2_PCIE_CAP_ASPM_SUP_S))
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_SUP_V  0x3
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_SUP_S  10
/* PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_WIDTH : RO ;bitpos:[9:4] ;default: 6'h1 ; */
/*description: Represents maximum Link width is x1..*/
#define PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_WIDTH    0x0000003F
#define PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_WIDTH_M  ((PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_WIDTH_V)<<(PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_WIDTH_S))
#define PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_WIDTH_V  0x3F
#define PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_WIDTH_S  4
/* PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_SPEED : RO ;bitpos:[3:0] ;default: 4'h2 ; */
/*description: Represents maximum Link speed is Gen2..*/
#define PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_SPEED    0x0000000F
#define PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_SPEED_M  ((PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_SPEED_V)<<(PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_SPEED_S))
#define PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_SPEED_V  0xF
#define PCIE_RC_GEN2_PCIE_CAP_MAX_LINK_SPEED_S  0

#define PCIE_RC_GEN2_PCIE_CAP_LINK_CTRL_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1090)
/* PCIE_RC_GEN2_PCIE_CAP_SLOT_CLK_CFG : RO ;bitpos:[28] ;default: 1'h1 ; */
/*description: Represents whether or not the component uses the same physical reference clock t
hat the platform provides on the connector.; 0: Use an independent clock; 1: Use
 the same clock.*/
#define PCIE_RC_GEN2_PCIE_CAP_SLOT_CLK_CFG    (BIT(28))
#define PCIE_RC_GEN2_PCIE_CAP_SLOT_CLK_CFG_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_CAP_SLOT_CLK_CFG_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_SLOT_CLK_CFG_S  28
/* PCIE_RC_GEN2_PCIE_CAP_NEG_LINK_WIDTH : RO ;bitpos:[25:20] ;default: 6'h0 ; */
/*description: Represents the negotiated width of the given PCIe Link.; 0x1: x1; Others: Reserv
ed.*/
#define PCIE_RC_GEN2_PCIE_CAP_NEG_LINK_WIDTH    0x0000003F
#define PCIE_RC_GEN2_PCIE_CAP_NEG_LINK_WIDTH_M  ((PCIE_RC_GEN2_PCIE_CAP_NEG_LINK_WIDTH_V)<<(PCIE_RC_GEN2_PCIE_CAP_NEG_LINK_WIDTH_S))
#define PCIE_RC_GEN2_PCIE_CAP_NEG_LINK_WIDTH_V  0x3F
#define PCIE_RC_GEN2_PCIE_CAP_NEG_LINK_WIDTH_S  20
/* PCIE_RC_GEN2_PCIE_CAP_CUR_LINK_SPEED : RO ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: Represents the negotiated Link speed of the given PCIe Link.; 0x1: Gen1; 0x2: Ge
n2; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_CAP_CUR_LINK_SPEED    0x0000000F
#define PCIE_RC_GEN2_PCIE_CAP_CUR_LINK_SPEED_M  ((PCIE_RC_GEN2_PCIE_CAP_CUR_LINK_SPEED_V)<<(PCIE_RC_GEN2_PCIE_CAP_CUR_LINK_SPEED_S))
#define PCIE_RC_GEN2_PCIE_CAP_CUR_LINK_SPEED_V  0xF
#define PCIE_RC_GEN2_PCIE_CAP_CUR_LINK_SPEED_S  16
/* PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_WIDTH_DIS : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not disable hardware from changing the Link width for reas
ons other than attempting to correct unreliable Link operation by reducing Link
width.; 0: Not disable; 1: Disable.*/
#define PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_WIDTH_DIS    (BIT(9))
#define PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_WIDTH_DIS_M  (BIT(9))
#define PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_WIDTH_DIS_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_WIDTH_DIS_S  9
/* PCIE_RC_GEN2_PCIE_CAP_EN_CLK_PM : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not enable Clock Power Management though CLKREQ#.; 0: Disa
ble; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_EN_CLK_PM    (BIT(8))
#define PCIE_RC_GEN2_PCIE_CAP_EN_CLK_PM_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_CAP_EN_CLK_PM_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_EN_CLK_PM_S  8
/* PCIE_RC_GEN2_PCIE_CAP_EXT_SYNCH : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: Configures whether or not forces the transmission of additional Ordered Sets whe
n exiting the L0s state and when in the Recovery state.; 0: Not force additional
 Ordered Sets; 1: Force additional Ordered Sets.*/
#define PCIE_RC_GEN2_PCIE_CAP_EXT_SYNCH    (BIT(7))
#define PCIE_RC_GEN2_PCIE_CAP_EXT_SYNCH_M  (BIT(7))
#define PCIE_RC_GEN2_PCIE_CAP_EXT_SYNCH_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_EXT_SYNCH_S  7
/* PCIE_RC_GEN2_PCIE_CAP_COMMON_CLK_CFG : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or not this component and the component at the opposite end o
f the Link are operating with a distributed common reference clock.; 0: Asynchro
nous reference clock; 1: Common reference clock.*/
#define PCIE_RC_GEN2_PCIE_CAP_COMMON_CLK_CFG    (BIT(6))
#define PCIE_RC_GEN2_PCIE_CAP_COMMON_CLK_CFG_M  (BIT(6))
#define PCIE_RC_GEN2_PCIE_CAP_COMMON_CLK_CFG_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_COMMON_CLK_CFG_S  6
/* PCIE_RC_GEN2_PCIE_CAP_RCB : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: Represents the Read Completion Boundary.; 0: 64 byte; 1: 128 byte.*/
#define PCIE_RC_GEN2_PCIE_CAP_RCB    (BIT(3))
#define PCIE_RC_GEN2_PCIE_CAP_RCB_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_CAP_RCB_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_RCB_S  3
/* PCIE_RC_GEN2_PCIE_CAP_ASPM_CTRL : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures the ASPM level enabled on the given PCIe Link.; 0x0: Disabled; 0x1: L
0s Entry Enabled; 0x2: L1 Entry Enabled; 0x3: L0s and L1 Entry Enabled.*/
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_CTRL    0x00000003
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_CTRL_M  ((PCIE_RC_GEN2_PCIE_CAP_ASPM_CTRL_V)<<(PCIE_RC_GEN2_PCIE_CAP_ASPM_CTRL_S))
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_CTRL_V  0x3
#define PCIE_RC_GEN2_PCIE_CAP_ASPM_CTRL_S  0

#define PCIE_RC_GEN2_PCIE_CAP_ROOT_CTRL_CAP_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x109C)
/* PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY : RO ;bitpos:[16] ;default: 1'b0 ; */
/*description: CRS Software Visibility.*/
#define PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY    (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY_S  16
/* PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY_EN : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: CRS Software Visibility Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY_EN    (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY_EN_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_CRS_SW_VISIBILITY_EN_S  4
/* PCIE_RC_GEN2_PCIE_CAP_PME_INTERRUPT_EN : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: PME Interrupt Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_PME_INTERRUPT_EN    (BIT(3))
#define PCIE_RC_GEN2_PCIE_CAP_PME_INTERRUPT_EN_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_CAP_PME_INTERRUPT_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_PME_INTERRUPT_EN_S  3
/* PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_FATAL_ERR_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: System Error on Fatal Error Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_FATAL_ERR_EN    (BIT(2))
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_FATAL_ERR_EN_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_FATAL_ERR_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_FATAL_ERR_EN_S  2
/* PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_NONFATAL_ERR_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: System Error on Non-Fatal Error Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_NONFATAL_ERR_EN    (BIT(1))
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_NONFATAL_ERR_EN_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_NONFATAL_ERR_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_NONFATAL_ERR_EN_S  1
/* PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_CORRECTABLE_ERR_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: System Error on Correctable Error Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_CORRECTABLE_ERR_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_CORRECTABLE_ERR_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_CORRECTABLE_ERR_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_SYSERR_ON_CORRECTABLE_ERR_EN_S  0

#define PCIE_RC_GEN2_PCIE_CAP_ROOT_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10A0)
/* PCIE_RC_GEN2_PCIE_CAP_PME_PENDING : RO ;bitpos:[17] ;default: 1'b0 ; */
/*description: PME Pending.*/
#define PCIE_RC_GEN2_PCIE_CAP_PME_PENDING    (BIT(17))
#define PCIE_RC_GEN2_PCIE_CAP_PME_PENDING_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_CAP_PME_PENDING_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_PME_PENDING_S  17
/* PCIE_RC_GEN2_PCIE_CAP_PME_STATUS : R/W1C ;bitpos:[16] ;default: 1'b0 ; */
/*description: PME Status.*/
#define PCIE_RC_GEN2_PCIE_CAP_PME_STATUS    (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_PME_STATUS_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_PME_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_PME_STATUS_S  16
/* PCIE_RC_GEN2_PCIE_CAP_PME_REQUESTER_ID : RO ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: PME Requester ID.*/
#define PCIE_RC_GEN2_PCIE_CAP_PME_REQUESTER_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_CAP_PME_REQUESTER_ID_M  ((PCIE_RC_GEN2_PCIE_CAP_PME_REQUESTER_ID_V)<<(PCIE_RC_GEN2_PCIE_CAP_PME_REQUESTER_ID_S))
#define PCIE_RC_GEN2_PCIE_CAP_PME_REQUESTER_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_CAP_PME_REQUESTER_ID_S  0

#define PCIE_RC_GEN2_PCIE_CAP_DEVICE_CAP2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10A4)
/* PCIE_RC_GEN2_PCIE_CAP_FRS_SUP : RO ;bitpos:[31] ;default: 1'h0 ; */
/*description: Represents whether or not support Function Readiness Status capability.; 0: Not
support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_CAP_FRS_SUP    (BIT(31))
#define PCIE_RC_GEN2_PCIE_CAP_FRS_SUP_M  (BIT(31))
#define PCIE_RC_GEN2_PCIE_CAP_FRS_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_FRS_SUP_S  31
/* PCIE_RC_GEN2_PCIE_CAP_MAX_TLP_PREFIX : RO ;bitpos:[23:22] ;default: 2'h0 ; */
/*description: Represents maximum number of End-End TLP Prefixes supported.; 0x1: 1 End-End TLP
 Prefixe; 0x2: 2 End-End TLP Prefixes; 0x3: 3 End-End TLP Prefixes; 0x0: 4 End-E
nd TLP Prefixes.*/
#define PCIE_RC_GEN2_PCIE_CAP_MAX_TLP_PREFIX    0x00000003
#define PCIE_RC_GEN2_PCIE_CAP_MAX_TLP_PREFIX_M  ((PCIE_RC_GEN2_PCIE_CAP_MAX_TLP_PREFIX_V)<<(PCIE_RC_GEN2_PCIE_CAP_MAX_TLP_PREFIX_S))
#define PCIE_RC_GEN2_PCIE_CAP_MAX_TLP_PREFIX_V  0x3
#define PCIE_RC_GEN2_PCIE_CAP_MAX_TLP_PREFIX_S  22
/* PCIE_RC_GEN2_PCIE_CAP_TLP_PREFIX_SUP : RO ;bitpos:[21] ;default: 1'h0 ; */
/*description: Represents whether or not support End-End TLP Prefix.; 0: Not support; 1: Suppor
t.*/
#define PCIE_RC_GEN2_PCIE_CAP_TLP_PREFIX_SUP    (BIT(21))
#define PCIE_RC_GEN2_PCIE_CAP_TLP_PREFIX_SUP_M  (BIT(21))
#define PCIE_RC_GEN2_PCIE_CAP_TLP_PREFIX_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_TLP_PREFIX_SUP_S  21
/* PCIE_RC_GEN2_PCIE_CAP_EXT_FMT_SUP : RO ;bitpos:[20] ;default: 1'h1 ; */
/*description: Represents whether or not support 3-Bit Fmt field in TLP.; 0: Not support; 1: Su
pport.*/
#define PCIE_RC_GEN2_PCIE_CAP_EXT_FMT_SUP    (BIT(20))
#define PCIE_RC_GEN2_PCIE_CAP_EXT_FMT_SUP_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_CAP_EXT_FMT_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_EXT_FMT_SUP_S  20
/* PCIE_RC_GEN2_PCIE_CAP_OBFF_SUP : RO ;bitpos:[19:18] ;default: 2'h0 ; */
/*description: Represents whether or not support OBFF capability.; 0x0: Not support; 0x1: Suppo
rt using Message signaling only; 0x2: Support using WAKE# signaling only; 0x3: S
upport using WAKE# and Message signaling.*/
#define PCIE_RC_GEN2_PCIE_CAP_OBFF_SUP    0x00000003
#define PCIE_RC_GEN2_PCIE_CAP_OBFF_SUP_M  ((PCIE_RC_GEN2_PCIE_CAP_OBFF_SUP_V)<<(PCIE_RC_GEN2_PCIE_CAP_OBFF_SUP_S))
#define PCIE_RC_GEN2_PCIE_CAP_OBFF_SUP_V  0x3
#define PCIE_RC_GEN2_PCIE_CAP_OBFF_SUP_S  18
/* PCIE_RC_GEN2_PCIE_CAP_TAG_10B_REQ_SUP : RO ;bitpos:[17] ;default: 1'h0 ; */
/*description: Represents whether or not support 10-Bit Tag Requester capability.; 0: Not suppo
rt; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_CAP_TAG_10B_REQ_SUP    (BIT(17))
#define PCIE_RC_GEN2_PCIE_CAP_TAG_10B_REQ_SUP_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_CAP_TAG_10B_REQ_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_TAG_10B_REQ_SUP_S  17
/* PCIE_RC_GEN2_PCIE_CAP_TAG_10B_CPL_SUP : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not support 10-Bit Tag Completer capability.; 0: Not suppo
rt; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_CAP_TAG_10B_CPL_SUP    (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_TAG_10B_CPL_SUP_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_TAG_10B_CPL_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_TAG_10B_CPL_SUP_S  16
/* PCIE_RC_GEN2_PCIE_CAP_TPH_CPL_SUP : RO ;bitpos:[13:12] ;default: 2'h0 ; */
/*description: Represents whether or not support TPH or Extended TPH.; 0x0: TPH and Extended TP
H Completer not supported; 0x1: TPH supported, Extended TPH Completer not suppor
ted; 0x3: TPH and Extended TPH Completer supported; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_CAP_TPH_CPL_SUP    0x00000003
#define PCIE_RC_GEN2_PCIE_CAP_TPH_CPL_SUP_M  ((PCIE_RC_GEN2_PCIE_CAP_TPH_CPL_SUP_V)<<(PCIE_RC_GEN2_PCIE_CAP_TPH_CPL_SUP_S))
#define PCIE_RC_GEN2_PCIE_CAP_TPH_CPL_SUP_V  0x3
#define PCIE_RC_GEN2_PCIE_CAP_TPH_CPL_SUP_S  12
/* PCIE_RC_GEN2_PCIE_CAP_LTR_SUP : RO ;bitpos:[11] ;default: 1'h1 ; */
/*description: Represents whether or not support Latency Tolerance Reporting mechanism.; 0: Not
 support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_CAP_LTR_SUP    (BIT(11))
#define PCIE_RC_GEN2_PCIE_CAP_LTR_SUP_M  (BIT(11))
#define PCIE_RC_GEN2_PCIE_CAP_LTR_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_LTR_SUP_S  11
/* PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS_SUP : RO ;bitpos:[4] ;default: 1'h1 ; */
/*description: Represents whether or not support Completion Timeout Disable mechanism.; 0: Not
support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS_SUP    (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS_SUP_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS_SUP_S  4
/* PCIE_RC_GEN2_PCIE_CAP_CPL_TO_RANGE_SUP : RO ;bitpos:[3:0] ;default: 4'hf ; */
/*description: Represents support for Completion Timeout Ranges.; 0x0: Not support; 0x1: Range
A; 0x2: Range B; 0x3: Range A and B; 0x6: Range B and C; 0x7: Range A, B, and C;
 0xe: Range B, C, and D; 0xf: Range A, B, C, and D.*/
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_RANGE_SUP    0x0000000F
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_RANGE_SUP_M  ((PCIE_RC_GEN2_PCIE_CAP_CPL_TO_RANGE_SUP_V)<<(PCIE_RC_GEN2_PCIE_CAP_CPL_TO_RANGE_SUP_S))
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_RANGE_SUP_V  0xF
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_RANGE_SUP_S  0

#define PCIE_RC_GEN2_PCIE_CAP_DEVICE_CTRL_STA2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10A8)
/* PCIE_RC_GEN2_PCIE_CAP_LTR_EN : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not enable send LTR messages.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_LTR_EN    (BIT(10))
#define PCIE_RC_GEN2_PCIE_CAP_LTR_EN_M  (BIT(10))
#define PCIE_RC_GEN2_PCIE_CAP_LTR_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_LTR_EN_S  10
/* PCIE_RC_GEN2_PCIE_CAP_IDO_CPL_EN : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not enable set ID-Based Ordering bit in Completions TLP.;
0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_IDO_CPL_EN    (BIT(9))
#define PCIE_RC_GEN2_PCIE_CAP_IDO_CPL_EN_M  (BIT(9))
#define PCIE_RC_GEN2_PCIE_CAP_IDO_CPL_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_IDO_CPL_EN_S  9
/* PCIE_RC_GEN2_PCIE_CAP_IDO_REQ_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not enable set ID-Based Ordering bit in Requests TLP.; 0:
Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_CAP_IDO_REQ_EN    (BIT(8))
#define PCIE_RC_GEN2_PCIE_CAP_IDO_REQ_EN_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_CAP_IDO_REQ_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_IDO_REQ_EN_S  8
/* PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Configures whether or not disable Completion Timeout mechanism.; 0: Not disable;
 1: Disable.*/
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS    (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_DIS_S  4
/* PCIE_RC_GEN2_PCIE_CAP_CPL_TO_VALUE : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the Completion Timeout Value.; 0x0: 50us to 50ms; 0x1: 50us to 100us;
 0x2: 1ms to 10ms; 0x5: 16ms to 55ms; 0x6: 65ms to 210ms; 0x9: 260ms to 900ms; 0
xa: 1s to 3.5s; 0xd: 4s to 13s; 0xe: 17s to 64s; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_VALUE    0x0000000F
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_VALUE_M  ((PCIE_RC_GEN2_PCIE_CAP_CPL_TO_VALUE_V)<<(PCIE_RC_GEN2_PCIE_CAP_CPL_TO_VALUE_S))
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_VALUE_V  0xF
#define PCIE_RC_GEN2_PCIE_CAP_CPL_TO_VALUE_S  0

#define PCIE_RC_GEN2_PCIE_CAP_LINK_CAP2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10AC)
/* PCIE_RC_GEN2_PCIE_CAP_SUP_LINK_SPEED_VECTOR : RO ;bitpos:[7:1] ;default: 7'h3 ; */
/*description: Represents supported Link speeds are 2.5GT/s and 5.0GT/s..*/
#define PCIE_RC_GEN2_PCIE_CAP_SUP_LINK_SPEED_VECTOR    0x0000007F
#define PCIE_RC_GEN2_PCIE_CAP_SUP_LINK_SPEED_VECTOR_M  ((PCIE_RC_GEN2_PCIE_CAP_SUP_LINK_SPEED_VECTOR_V)<<(PCIE_RC_GEN2_PCIE_CAP_SUP_LINK_SPEED_VECTOR_S))
#define PCIE_RC_GEN2_PCIE_CAP_SUP_LINK_SPEED_VECTOR_V  0x7F
#define PCIE_RC_GEN2_PCIE_CAP_SUP_LINK_SPEED_VECTOR_S  1

#define PCIE_RC_GEN2_PCIE_CAP_LINK_CTRL_STA2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10B0)
/* PCIE_RC_GEN2_PCIE_CAP_CUR_DE_EMPHASIS_LEVEL : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents the de-emphasis level.; 1: -3.5dB; 0: -6dB.*/
#define PCIE_RC_GEN2_PCIE_CAP_CUR_DE_EMPHASIS_LEVEL    (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_CUR_DE_EMPHASIS_LEVEL_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_CAP_CUR_DE_EMPHASIS_LEVEL_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_CUR_DE_EMPHASIS_LEVEL_S  16
/* PCIE_RC_GEN2_PCIE_CAP_COMP_DE_EMPHASIS : R/W ;bitpos:[15:12] ;default: 4'h0 ; */
/*description: Configures the de-emphasis level in Polling.Compliance.; 0x1: -3.5dB; 0x0: -6dB;
 Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_CAP_COMP_DE_EMPHASIS    0x0000000F
#define PCIE_RC_GEN2_PCIE_CAP_COMP_DE_EMPHASIS_M  ((PCIE_RC_GEN2_PCIE_CAP_COMP_DE_EMPHASIS_V)<<(PCIE_RC_GEN2_PCIE_CAP_COMP_DE_EMPHASIS_S))
#define PCIE_RC_GEN2_PCIE_CAP_COMP_DE_EMPHASIS_V  0xF
#define PCIE_RC_GEN2_PCIE_CAP_COMP_DE_EMPHASIS_S  12
/* PCIE_RC_GEN2_PCIE_CAP_COMP_SOS : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not let the LTSSM send SKP Ordered Sets between sequences
when sending the Compliance Pattern or Modified Compliance Pattern.; 0: Not send
 SKP Ordered Sets; 1: Send SKP Ordered Sets.*/
#define PCIE_RC_GEN2_PCIE_CAP_COMP_SOS    (BIT(11))
#define PCIE_RC_GEN2_PCIE_CAP_COMP_SOS_M  (BIT(11))
#define PCIE_RC_GEN2_PCIE_CAP_COMP_SOS_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_COMP_SOS_S  11
/* PCIE_RC_GEN2_PCIE_CAP_ENTER_MOD_COMP : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not let the device transmits Modified Compliance Pattern i
f the LTSSM enters Polling.Compliance substate.; 0: Not transmits Modified Compl
iance Pattern; 1: Transmits Modified Compliance Pattern.*/
#define PCIE_RC_GEN2_PCIE_CAP_ENTER_MOD_COMP    (BIT(10))
#define PCIE_RC_GEN2_PCIE_CAP_ENTER_MOD_COMP_M  (BIT(10))
#define PCIE_RC_GEN2_PCIE_CAP_ENTER_MOD_COMP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_ENTER_MOD_COMP_S  10
/* PCIE_RC_GEN2_PCIE_CAP_TRANS_MARGIN : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures the value of the non-deemphasized voltage level at the Transmitter pi
ns..*/
#define PCIE_RC_GEN2_PCIE_CAP_TRANS_MARGIN    0x00000007
#define PCIE_RC_GEN2_PCIE_CAP_TRANS_MARGIN_M  ((PCIE_RC_GEN2_PCIE_CAP_TRANS_MARGIN_V)<<(PCIE_RC_GEN2_PCIE_CAP_TRANS_MARGIN_S))
#define PCIE_RC_GEN2_PCIE_CAP_TRANS_MARGIN_V  0x7
#define PCIE_RC_GEN2_PCIE_CAP_TRANS_MARGIN_S  7
/* PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_SPEED_DIS : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not disable hardware from changing the Link speed for devi
ce-specific reasons other than attempting to correct unreliable Link operation b
y reducing Link speed.; 0: Not disable; 1: Disable.*/
#define PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_SPEED_DIS    (BIT(5))
#define PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_SPEED_DIS_M  (BIT(5))
#define PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_SPEED_DIS_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_HW_AUTO_SPEED_DIS_S  5
/* PCIE_RC_GEN2_PCIE_CAP_ENTER_COMP : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Configures whether or not force enter Compliance mode at the speed indicated by
PCIE_CAP_TARGET_LINK_SPEED field.; 0: Not force; 1: Force.*/
#define PCIE_RC_GEN2_PCIE_CAP_ENTER_COMP    (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_ENTER_COMP_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_CAP_ENTER_COMP_V  0x1
#define PCIE_RC_GEN2_PCIE_CAP_ENTER_COMP_S  4
/* PCIE_RC_GEN2_PCIE_CAP_TARGET_LINK_SPEED : R/W ;bitpos:[3:0] ;default: 4'h2 ; */
/*description: Configures the Target Link Speed.; 0x1: 2.5GT/s; 0x2: 5GT/s; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_CAP_TARGET_LINK_SPEED    0x0000000F
#define PCIE_RC_GEN2_PCIE_CAP_TARGET_LINK_SPEED_M  ((PCIE_RC_GEN2_PCIE_CAP_TARGET_LINK_SPEED_V)<<(PCIE_RC_GEN2_PCIE_CAP_TARGET_LINK_SPEED_S))
#define PCIE_RC_GEN2_PCIE_CAP_TARGET_LINK_SPEED_V  0xF
#define PCIE_RC_GEN2_PCIE_CAP_TARGET_LINK_SPEED_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_HEADER_CTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10D0)
/* PCIE_RC_GEN2_PCIE_MSIX_EN : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: Configures whether or not enable MSI-X.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_MSIX_EN    (BIT(31))
#define PCIE_RC_GEN2_PCIE_MSIX_EN_M  (BIT(31))
#define PCIE_RC_GEN2_PCIE_MSIX_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_EN_S  31
/* PCIE_RC_GEN2_PCIE_MSIX_FUN_MASK : R/W ;bitpos:[30] ;default: 1'h0 ; */
/*description: Configures whether or not mask all vectors associated with the Function.; 0: Not
 mask; 1: Mask.*/
#define PCIE_RC_GEN2_PCIE_MSIX_FUN_MASK    (BIT(30))
#define PCIE_RC_GEN2_PCIE_MSIX_FUN_MASK_M  (BIT(30))
#define PCIE_RC_GEN2_PCIE_MSIX_FUN_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_FUN_MASK_S  30
/* PCIE_RC_GEN2_PCIE_MSIX_TBL_SIZE : RO ;bitpos:[26:16] ;default: 11'hf ; */
/*description: Represents MSI-X Table Size, which is encoded as N-1..*/
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_SIZE    0x000007FF
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_SIZE_M  ((PCIE_RC_GEN2_PCIE_MSIX_TBL_SIZE_V)<<(PCIE_RC_GEN2_PCIE_MSIX_TBL_SIZE_S))
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_SIZE_V  0x7FF
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_SIZE_S  16
/* PCIE_RC_GEN2_PCIE_MSIX_NEXT_CAP_PTR : RO ;bitpos:[15:8] ;default: 8'hf8 ; */
/*description: Represents offset to next Capability Structure..*/
#define PCIE_RC_GEN2_PCIE_MSIX_NEXT_CAP_PTR    0x000000FF
#define PCIE_RC_GEN2_PCIE_MSIX_NEXT_CAP_PTR_M  ((PCIE_RC_GEN2_PCIE_MSIX_NEXT_CAP_PTR_V)<<(PCIE_RC_GEN2_PCIE_MSIX_NEXT_CAP_PTR_S))
#define PCIE_RC_GEN2_PCIE_MSIX_NEXT_CAP_PTR_V  0xFF
#define PCIE_RC_GEN2_PCIE_MSIX_NEXT_CAP_PTR_S  8
/* PCIE_RC_GEN2_PCIE_MSIX_CAP_ID : RO ;bitpos:[7:0] ;default: 8'h11 ; */
/*description: Represents Capability ID..*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAP_ID    0x000000FF
#define PCIE_RC_GEN2_PCIE_MSIX_CAP_ID_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAP_ID_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAP_ID_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAP_ID_V  0xFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAP_ID_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_TBL_OFST_BIR_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10D4)
/* PCIE_RC_GEN2_PCIE_MSIX_TBL_OFST : RO ;bitpos:[31:3] ;default: 19'h400 ; */
/*description: Represents offset in the BAR point to the base of the MSI-X Table, the lower 3 b
its are masked off to form a aligned offset..*/
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_OFST    0x1FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_OFST_M  ((PCIE_RC_GEN2_PCIE_MSIX_TBL_OFST_V)<<(PCIE_RC_GEN2_PCIE_MSIX_TBL_OFST_S))
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_OFST_V  0x1FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_OFST_S  3
/* PCIE_RC_GEN2_PCIE_MSIX_TBL_BIR : RO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Represents which BAR is used to map the MSI-X Table..*/
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_BIR    0x00000007
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_BIR_M  ((PCIE_RC_GEN2_PCIE_MSIX_TBL_BIR_V)<<(PCIE_RC_GEN2_PCIE_MSIX_TBL_BIR_S))
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_BIR_V  0x7
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_BIR_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_PBA_OFST_BIR_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10D8)
/* PCIE_RC_GEN2_PCIE_MSIX_PBA_OFST : RO ;bitpos:[31:3] ;default: 19'h600 ; */
/*description: Represents offset in the BAR point to the base of the MSI-X PBA, the lower 3 bit
s are masked off to form a aligned offset..*/
#define PCIE_RC_GEN2_PCIE_MSIX_PBA_OFST    0x1FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_PBA_OFST_M  ((PCIE_RC_GEN2_PCIE_MSIX_PBA_OFST_V)<<(PCIE_RC_GEN2_PCIE_MSIX_PBA_OFST_S))
#define PCIE_RC_GEN2_PCIE_MSIX_PBA_OFST_V  0x1FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_PBA_OFST_S  3
/* PCIE_RC_GEN2_PCIE_MSIX_PBA_BIR : RO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Represents which BAR is used to map the MSI-X PBA..*/
#define PCIE_RC_GEN2_PCIE_MSIX_PBA_BIR    0x00000007
#define PCIE_RC_GEN2_PCIE_MSIX_PBA_BIR_M  ((PCIE_RC_GEN2_PCIE_MSIX_PBA_BIR_V)<<(PCIE_RC_GEN2_PCIE_MSIX_PBA_BIR_S))
#define PCIE_RC_GEN2_PCIE_MSIX_PBA_BIR_V  0x7
#define PCIE_RC_GEN2_PCIE_MSIX_PBA_BIR_S  0

#define PCIE_RC_GEN2_PCIE_PM_HEADER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10F8)
/* PCIE_RC_GEN2_PCIE_PM_PME_SUP : RO ;bitpos:[31:27] ;default: 5'h1f ; */
/*description: Represents PME can be generated from D0/D1/D2/D3Hot/D3Cold power states..*/
#define PCIE_RC_GEN2_PCIE_PM_PME_SUP    0x0000001F
#define PCIE_RC_GEN2_PCIE_PM_PME_SUP_M  ((PCIE_RC_GEN2_PCIE_PM_PME_SUP_V)<<(PCIE_RC_GEN2_PCIE_PM_PME_SUP_S))
#define PCIE_RC_GEN2_PCIE_PM_PME_SUP_V  0x1F
#define PCIE_RC_GEN2_PCIE_PM_PME_SUP_S  27
/* PCIE_RC_GEN2_PCIE_PM_D2_SUP : RO ;bitpos:[26] ;default: 1'h1 ; */
/*description: Represents whether or not support D2 Power Management State.; 0: Not support; 1:
 support.*/
#define PCIE_RC_GEN2_PCIE_PM_D2_SUP    (BIT(26))
#define PCIE_RC_GEN2_PCIE_PM_D2_SUP_M  (BIT(26))
#define PCIE_RC_GEN2_PCIE_PM_D2_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_PM_D2_SUP_S  26
/* PCIE_RC_GEN2_PCIE_PM_D1_SUP : RO ;bitpos:[25] ;default: 1'h1 ; */
/*description: Represents whether or not support D1 Power Management State.; 0: Not support; 1:
 support.*/
#define PCIE_RC_GEN2_PCIE_PM_D1_SUP    (BIT(25))
#define PCIE_RC_GEN2_PCIE_PM_D1_SUP_M  (BIT(25))
#define PCIE_RC_GEN2_PCIE_PM_D1_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_PM_D1_SUP_S  25
/* PCIE_RC_GEN2_PCIE_PM_AUX_CURRENT : RO ;bitpos:[24:22] ;default: 3'h0 ; */
/*description: Represents the Vaux auxiliary current requirements.; 0x7: 375mA; 0x6: 320mA; 0x5
: 270mA; 0x4: 220mA; 0x3: 160mA; 0x2: 100mA; 0x1: 55mA; 0x0: 0 (self powered).*/
#define PCIE_RC_GEN2_PCIE_PM_AUX_CURRENT    0x00000007
#define PCIE_RC_GEN2_PCIE_PM_AUX_CURRENT_M  ((PCIE_RC_GEN2_PCIE_PM_AUX_CURRENT_V)<<(PCIE_RC_GEN2_PCIE_PM_AUX_CURRENT_S))
#define PCIE_RC_GEN2_PCIE_PM_AUX_CURRENT_V  0x7
#define PCIE_RC_GEN2_PCIE_PM_AUX_CURRENT_S  22
/* PCIE_RC_GEN2_PCIE_PM_DSI : RO ;bitpos:[21] ;default: 1'h0 ; */
/*description: Represents whether or not special initialization is required.; 0: Not require; 1
: Require.*/
#define PCIE_RC_GEN2_PCIE_PM_DSI    (BIT(21))
#define PCIE_RC_GEN2_PCIE_PM_DSI_M  (BIT(21))
#define PCIE_RC_GEN2_PCIE_PM_DSI_V  0x1
#define PCIE_RC_GEN2_PCIE_PM_DSI_S  21
/* PCIE_RC_GEN2_PCIE_PM_CAP_VERSION : RO ;bitpos:[18:16] ;default: 3'h3 ; */
/*description: Represents Capability Version..*/
#define PCIE_RC_GEN2_PCIE_PM_CAP_VERSION    0x00000007
#define PCIE_RC_GEN2_PCIE_PM_CAP_VERSION_M  ((PCIE_RC_GEN2_PCIE_PM_CAP_VERSION_V)<<(PCIE_RC_GEN2_PCIE_PM_CAP_VERSION_S))
#define PCIE_RC_GEN2_PCIE_PM_CAP_VERSION_V  0x7
#define PCIE_RC_GEN2_PCIE_PM_CAP_VERSION_S  16
/* PCIE_RC_GEN2_PCIE_PM_NEXT_CAP_PTR : RO ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Represents offset to next Capability Structure..*/
#define PCIE_RC_GEN2_PCIE_PM_NEXT_CAP_PTR    0x000000FF
#define PCIE_RC_GEN2_PCIE_PM_NEXT_CAP_PTR_M  ((PCIE_RC_GEN2_PCIE_PM_NEXT_CAP_PTR_V)<<(PCIE_RC_GEN2_PCIE_PM_NEXT_CAP_PTR_S))
#define PCIE_RC_GEN2_PCIE_PM_NEXT_CAP_PTR_V  0xFF
#define PCIE_RC_GEN2_PCIE_PM_NEXT_CAP_PTR_S  8
/* PCIE_RC_GEN2_PCIE_PM_CAP_ID : RO ;bitpos:[7:0] ;default: 8'h1 ; */
/*description: Represents Capability ID..*/
#define PCIE_RC_GEN2_PCIE_PM_CAP_ID    0x000000FF
#define PCIE_RC_GEN2_PCIE_PM_CAP_ID_M  ((PCIE_RC_GEN2_PCIE_PM_CAP_ID_V)<<(PCIE_RC_GEN2_PCIE_PM_CAP_ID_S))
#define PCIE_RC_GEN2_PCIE_PM_CAP_ID_V  0xFF
#define PCIE_RC_GEN2_PCIE_PM_CAP_ID_S  0

#define PCIE_RC_GEN2_PCIE_PM_CTRL_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x10FC)
/* PCIE_RC_GEN2_PCIE_PM_PME_STATUE : R/W1C ;bitpos:[15] ;default: 1'h0 ; */
/*description: Represents whether or not the Function would normally generate a PME signal.; 0:
 Would not  normally generate a PME signal; 1: Would normally generate a PME sig
nal.*/
#define PCIE_RC_GEN2_PCIE_PM_PME_STATUE    (BIT(15))
#define PCIE_RC_GEN2_PCIE_PM_PME_STATUE_M  (BIT(15))
#define PCIE_RC_GEN2_PCIE_PM_PME_STATUE_V  0x1
#define PCIE_RC_GEN2_PCIE_PM_PME_STATUE_S  15
/* PCIE_RC_GEN2_PCIE_PM_PME_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not enable generate PME.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_PM_PME_EN    (BIT(8))
#define PCIE_RC_GEN2_PCIE_PM_PME_EN_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_PM_PME_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PM_PME_EN_S  8
/* PCIE_RC_GEN2_PCIE_PM_NO_SOFT_RESET : RO ;bitpos:[3] ;default: 1'h1 ; */
/*description: Represents the state after writing the PCIE_PM_POWERSTATE field to transition th
e Function from D3Hot to D0..*/
#define PCIE_RC_GEN2_PCIE_PM_NO_SOFT_RESET    (BIT(3))
#define PCIE_RC_GEN2_PCIE_PM_NO_SOFT_RESET_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_PM_NO_SOFT_RESET_V  0x1
#define PCIE_RC_GEN2_PCIE_PM_NO_SOFT_RESET_S  3
/* PCIE_RC_GEN2_PCIE_PM_POWERSTATE : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures the function into a new power and Represents the current power state.
; 0x0: D0; 0x1: D1; 0x2: D2; 0x3: D3Hot.*/
#define PCIE_RC_GEN2_PCIE_PM_POWERSTATE    0x00000003
#define PCIE_RC_GEN2_PCIE_PM_POWERSTATE_M  ((PCIE_RC_GEN2_PCIE_PM_POWERSTATE_V)<<(PCIE_RC_GEN2_PCIE_PM_POWERSTATE_S))
#define PCIE_RC_GEN2_PCIE_PM_POWERSTATE_V  0x3
#define PCIE_RC_GEN2_PCIE_PM_POWERSTATE_S  0

#define PCIE_RC_GEN2_PCIE_VSEC_CAP_HEADER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1100)
/* PCIE_RC_GEN2_PCIE_VSEC_NEXT_CAP_PTR : RO ;bitpos:[31:20] ;default: 12'h108 ; */
/*description: Represents offset to next Capability Structure..*/
#define PCIE_RC_GEN2_PCIE_VSEC_NEXT_CAP_PTR    0x00000FFF
#define PCIE_RC_GEN2_PCIE_VSEC_NEXT_CAP_PTR_M  ((PCIE_RC_GEN2_PCIE_VSEC_NEXT_CAP_PTR_V)<<(PCIE_RC_GEN2_PCIE_VSEC_NEXT_CAP_PTR_S))
#define PCIE_RC_GEN2_PCIE_VSEC_NEXT_CAP_PTR_V  0xFFF
#define PCIE_RC_GEN2_PCIE_VSEC_NEXT_CAP_PTR_S  20
/* PCIE_RC_GEN2_PCIE_VSEC_CAP_VERSION : RO ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: Represents Capability Version..*/
#define PCIE_RC_GEN2_PCIE_VSEC_CAP_VERSION    0x0000000F
#define PCIE_RC_GEN2_PCIE_VSEC_CAP_VERSION_M  ((PCIE_RC_GEN2_PCIE_VSEC_CAP_VERSION_V)<<(PCIE_RC_GEN2_PCIE_VSEC_CAP_VERSION_S))
#define PCIE_RC_GEN2_PCIE_VSEC_CAP_VERSION_V  0xF
#define PCIE_RC_GEN2_PCIE_VSEC_CAP_VERSION_S  16
/* PCIE_RC_GEN2_PCIE_VSEC_CAP_ID : RO ;bitpos:[15:0] ;default: 16'hb ; */
/*description: Represents Capability ID..*/
#define PCIE_RC_GEN2_PCIE_VSEC_CAP_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_VSEC_CAP_ID_M  ((PCIE_RC_GEN2_PCIE_VSEC_CAP_ID_V)<<(PCIE_RC_GEN2_PCIE_VSEC_CAP_ID_S))
#define PCIE_RC_GEN2_PCIE_VSEC_CAP_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_VSEC_CAP_ID_S  0

#define PCIE_RC_GEN2_PCIE_VSEC_HEADER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1104)
/* PCIE_RC_GEN2_PCIE_VSEC_VSEC_LENGTH : RO ;bitpos:[31:20] ;default: 12'h8 ; */
/*description: Represents the number of bytes in the entire VSEC structure..*/
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_LENGTH    0x00000FFF
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_LENGTH_M  ((PCIE_RC_GEN2_PCIE_VSEC_VSEC_LENGTH_V)<<(PCIE_RC_GEN2_PCIE_VSEC_VSEC_LENGTH_S))
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_LENGTH_V  0xFFF
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_LENGTH_S  20
/* PCIE_RC_GEN2_PCIE_VSEC_VSEC_REV : RO ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: Represents vendor-defined version number of the VSEC structure..*/
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_REV    0x0000000F
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_REV_M  ((PCIE_RC_GEN2_PCIE_VSEC_VSEC_REV_V)<<(PCIE_RC_GEN2_PCIE_VSEC_VSEC_REV_S))
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_REV_V  0xF
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_REV_S  16
/* PCIE_RC_GEN2_PCIE_VSEC_VSEC_ID : RO ;bitpos:[15:0] ;default: 16'h1556 ; */
/*description: Represents vendor-defined ID number of the VSEC structure..*/
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_ID_M  ((PCIE_RC_GEN2_PCIE_VSEC_VSEC_ID_V)<<(PCIE_RC_GEN2_PCIE_VSEC_VSEC_ID_S))
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_VSEC_VSEC_ID_S  0

#define PCIE_RC_GEN2_PCIE_LTR_CAP_HEADER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1108)
/* PCIE_RC_GEN2_PCIE_LTR_NEXT_CAP_PTR : RO ;bitpos:[31:20] ;default: 12'h110 ; */
/*description: Represents offset to next Capability Structure..*/
#define PCIE_RC_GEN2_PCIE_LTR_NEXT_CAP_PTR    0x00000FFF
#define PCIE_RC_GEN2_PCIE_LTR_NEXT_CAP_PTR_M  ((PCIE_RC_GEN2_PCIE_LTR_NEXT_CAP_PTR_V)<<(PCIE_RC_GEN2_PCIE_LTR_NEXT_CAP_PTR_S))
#define PCIE_RC_GEN2_PCIE_LTR_NEXT_CAP_PTR_V  0xFFF
#define PCIE_RC_GEN2_PCIE_LTR_NEXT_CAP_PTR_S  20
/* PCIE_RC_GEN2_PCIE_LTR_CAP_VERSION : RO ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: Represents Capability Version..*/
#define PCIE_RC_GEN2_PCIE_LTR_CAP_VERSION    0x0000000F
#define PCIE_RC_GEN2_PCIE_LTR_CAP_VERSION_M  ((PCIE_RC_GEN2_PCIE_LTR_CAP_VERSION_V)<<(PCIE_RC_GEN2_PCIE_LTR_CAP_VERSION_S))
#define PCIE_RC_GEN2_PCIE_LTR_CAP_VERSION_V  0xF
#define PCIE_RC_GEN2_PCIE_LTR_CAP_VERSION_S  16
/* PCIE_RC_GEN2_PCIE_LTR_CAP_ID : RO ;bitpos:[15:0] ;default: 16'h18 ; */
/*description: Represents Capability ID..*/
#define PCIE_RC_GEN2_PCIE_LTR_CAP_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_LTR_CAP_ID_M  ((PCIE_RC_GEN2_PCIE_LTR_CAP_ID_V)<<(PCIE_RC_GEN2_PCIE_LTR_CAP_ID_S))
#define PCIE_RC_GEN2_PCIE_LTR_CAP_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_LTR_CAP_ID_S  0

#define PCIE_RC_GEN2_PCIE_LTR_LATENCY_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x110C)
/* PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_SCALE : R/W ;bitpos:[28:26] ;default: 3'h0 ; */
/*description: Configures the scale used for Max No-Snoop Latency Value.; 0x0: 1ns; 0x1: 32ns;
0x2: 1024ns; 0x3: 32768ns; 0x4: 1048576ns; 0x5: 33554432ns; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_SCALE    0x00000007
#define PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_SCALE_M  ((PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_SCALE_V)<<(PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_SCALE_S))
#define PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_SCALE_V  0x7
#define PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_SCALE_S  26
/* PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_VALUE : R/W ;bitpos:[25:16] ;default: 10'h0 ; */
/*description: Configures the Max No-Snoop Latency Value..*/
#define PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_VALUE    0x000003FF
#define PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_VALUE_M  ((PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_VALUE_V)<<(PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_VALUE_S))
#define PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_VALUE_V  0x3FF
#define PCIE_RC_GEN2_PCIE_LTR_NO_SNOOP_VALUE_S  16
/* PCIE_RC_GEN2_PCIE_LTR_SNOOP_SCALE : R/W ;bitpos:[12:10] ;default: 3'h0 ; */
/*description: Configures the scale used for Max Snoop Latency Value.; 0x0: 1ns; 0x1: 32ns; 0x2
: 1024ns; 0x3: 32768ns; 0x4: 1048576ns; 0x5: 33554432ns; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_LTR_SNOOP_SCALE    0x00000007
#define PCIE_RC_GEN2_PCIE_LTR_SNOOP_SCALE_M  ((PCIE_RC_GEN2_PCIE_LTR_SNOOP_SCALE_V)<<(PCIE_RC_GEN2_PCIE_LTR_SNOOP_SCALE_S))
#define PCIE_RC_GEN2_PCIE_LTR_SNOOP_SCALE_V  0x7
#define PCIE_RC_GEN2_PCIE_LTR_SNOOP_SCALE_S  10
/* PCIE_RC_GEN2_PCIE_LTR_SNOOP_VALUE : R/W ;bitpos:[9:0] ;default: 10'h0 ; */
/*description: Configures the Max Snoop Latency Value..*/
#define PCIE_RC_GEN2_PCIE_LTR_SNOOP_VALUE    0x000003FF
#define PCIE_RC_GEN2_PCIE_LTR_SNOOP_VALUE_M  ((PCIE_RC_GEN2_PCIE_LTR_SNOOP_VALUE_V)<<(PCIE_RC_GEN2_PCIE_LTR_SNOOP_VALUE_S))
#define PCIE_RC_GEN2_PCIE_LTR_SNOOP_VALUE_V  0x3FF
#define PCIE_RC_GEN2_PCIE_LTR_SNOOP_VALUE_S  0

#define PCIE_RC_GEN2_PCIE_L1PM_CAP_HEADER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1110)
/* PCIE_RC_GEN2_PCIE_L1PM_NEXT_CAP_PTR : RO ;bitpos:[31:20] ;default: 12'h128 ; */
/*description: Represents offset to next Capability Structure..*/
#define PCIE_RC_GEN2_PCIE_L1PM_NEXT_CAP_PTR    0x00000FFF
#define PCIE_RC_GEN2_PCIE_L1PM_NEXT_CAP_PTR_M  ((PCIE_RC_GEN2_PCIE_L1PM_NEXT_CAP_PTR_V)<<(PCIE_RC_GEN2_PCIE_L1PM_NEXT_CAP_PTR_S))
#define PCIE_RC_GEN2_PCIE_L1PM_NEXT_CAP_PTR_V  0xFFF
#define PCIE_RC_GEN2_PCIE_L1PM_NEXT_CAP_PTR_S  20
/* PCIE_RC_GEN2_PCIE_L1PM_CAP_VERSION : RO ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: Represents Capability Version..*/
#define PCIE_RC_GEN2_PCIE_L1PM_CAP_VERSION    0x0000000F
#define PCIE_RC_GEN2_PCIE_L1PM_CAP_VERSION_M  ((PCIE_RC_GEN2_PCIE_L1PM_CAP_VERSION_V)<<(PCIE_RC_GEN2_PCIE_L1PM_CAP_VERSION_S))
#define PCIE_RC_GEN2_PCIE_L1PM_CAP_VERSION_V  0xF
#define PCIE_RC_GEN2_PCIE_L1PM_CAP_VERSION_S  16
/* PCIE_RC_GEN2_PCIE_L1PM_CAP_ID : RO ;bitpos:[15:0] ;default: 16'h1e ; */
/*description: Represents Capability ID..*/
#define PCIE_RC_GEN2_PCIE_L1PM_CAP_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_L1PM_CAP_ID_M  ((PCIE_RC_GEN2_PCIE_L1PM_CAP_ID_V)<<(PCIE_RC_GEN2_PCIE_L1PM_CAP_ID_S))
#define PCIE_RC_GEN2_PCIE_L1PM_CAP_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_L1PM_CAP_ID_S  0

#define PCIE_RC_GEN2_PCIE_L1PM_CAP_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1114)
/* PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_VALUE : RO ;bitpos:[23:19] ;default: 5'h5 ; */
/*description: Represents the Port T_POWER_ON Value..*/
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_VALUE    0x0000001F
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_VALUE_M  ((PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_VALUE_V)<<(PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_VALUE_S))
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_VALUE_V  0x1F
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_VALUE_S  19
/* PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_SCALE : RO ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: Represents the scale used for Port T_POWER_ON Value.; 0x0: 2us; 0x1: 10us; 0x2:
100 us; 0x3: Reserved.*/
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_SCALE    0x00000003
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_SCALE_M  ((PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_SCALE_V)<<(PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_SCALE_S))
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_SCALE_V  0x3
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_POWER_ON_SCALE_S  16
/* PCIE_RC_GEN2_PCIE_L1PM_PORT_T_COMMON_RESTORE : RO ;bitpos:[15:8] ;default: 8'hff ; */
/*description: Represents the Port Common_Mode_Restore_Time, unit us us..*/
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_COMMON_RESTORE    0x000000FF
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_COMMON_RESTORE_M  ((PCIE_RC_GEN2_PCIE_L1PM_PORT_T_COMMON_RESTORE_V)<<(PCIE_RC_GEN2_PCIE_L1PM_PORT_T_COMMON_RESTORE_S))
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_COMMON_RESTORE_V  0xFF
#define PCIE_RC_GEN2_PCIE_L1PM_PORT_T_COMMON_RESTORE_S  8
/* PCIE_RC_GEN2_PCIE_L1PM_SUB_SUP : RO ;bitpos:[4] ;default: 1'h1 ; */
/*description: Represents whether or not support L1 PM Substates.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1PM_SUB_SUP    (BIT(4))
#define PCIE_RC_GEN2_PCIE_L1PM_SUB_SUP_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_L1PM_SUB_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1PM_SUB_SUP_S  4
/* PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_SUP : RO ;bitpos:[3] ;default: 1'h1 ; */
/*description: Represents whether or not support ASPM L1.1.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_SUP    (BIT(3))
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_SUP_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_SUP_S  3
/* PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_SUP : RO ;bitpos:[2] ;default: 1'h1 ; */
/*description: Represents whether or not support ASPM L1.2.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_SUP    (BIT(2))
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_SUP_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_SUP_S  2
/* PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_SUP : RO ;bitpos:[1] ;default: 1'h1 ; */
/*description: Represents whether or not support PCI-PM L1.1.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_SUP    (BIT(1))
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_SUP_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_SUP_S  1
/* PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_SUP : RO ;bitpos:[0] ;default: 1'h1 ; */
/*description: Represents whether or not support PCI-PM L1.2.; 0: Not support; 1: Support.*/
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_SUP    (BIT(0))
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_SUP_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_SUP_V  0x1
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_SUP_S  0

#define PCIE_RC_GEN2_PCIE_L1PM_CTRL1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1118)
/* PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_SCALE : R/W ;bitpos:[31:29] ;default: 3'h0 ; */
/*description: Configures the scale used for LTR_L1.2_THRESHOLD_Value.; 0x0: 1ns; 0x1: 32ns; 0x
2: 1024ns; 0x3: 32768ns; 0x4: 1048576ns; 0x5: 33554432ns; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_SCALE    0x00000007
#define PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_SCALE_M  ((PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_SCALE_V)<<(PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_SCALE_S))
#define PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_SCALE_V  0x7
#define PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_SCALE_S  29
/* PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_VALUE : R/W ;bitpos:[25:16] ;default: 10'h0 ; */
/*description: Configures the LTR_L1.2_THRESHOLD_Value..*/
#define PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_VALUE    0x000003FF
#define PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_VALUE_M  ((PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_VALUE_V)<<(PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_VALUE_S))
#define PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_VALUE_V  0x3FF
#define PCIE_RC_GEN2_PCIE_L1PM_LTR_L12_VALUE_S  16
/* PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_EN : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: Configures whether or not enable ASPM L1.1.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_EN    (BIT(3))
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_EN_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L11_EN_S  3
/* PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_EN : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures whether or not enable ASPM L1.2.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_EN    (BIT(2))
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_EN_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_L1PM_ASPM_L12_EN_S  2
/* PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_EN : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures whether or not enable PCI-PM L1.1.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_EN    (BIT(1))
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_EN_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L11_EN_S  1
/* PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not enable PCI-PM L1.2.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_EN    (BIT(0))
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_EN_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_L1PM_PCIPM_L12_EN_S  0

#define PCIE_RC_GEN2_PCIE_L1PM_CTRL2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x111C)
/* PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_VALUE : R/W ;bitpos:[7:3] ;default: 5'h5 ; */
/*description: Configures the T_POWER_ON Value..*/
#define PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_VALUE    0x0000001F
#define PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_VALUE_M  ((PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_VALUE_V)<<(PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_VALUE_S))
#define PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_VALUE_V  0x1F
#define PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_VALUE_S  3
/* PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_SCALE : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures the scale used for T_POWER_ON Value.; 0x0: 2us; 0x1: 10us; 0x2: 100 u
s; 0x3: Reserved.*/
#define PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_SCALE    0x00000003
#define PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_SCALE_M  ((PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_SCALE_V)<<(PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_SCALE_S))
#define PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_SCALE_V  0x3
#define PCIE_RC_GEN2_PCIE_L1PM_T_POWER_ON_SCALE_S  0

#define PCIE_RC_GEN2_PCIE_ARI_CAP_HEADER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1128)
/* PCIE_RC_GEN2_PCIE_ARI_NEXT_CAP_PTR : RO ;bitpos:[31:20] ;default: 12'h200 ; */
/*description: Represents offset to next Capability Structure..*/
#define PCIE_RC_GEN2_PCIE_ARI_NEXT_CAP_PTR    0x00000FFF
#define PCIE_RC_GEN2_PCIE_ARI_NEXT_CAP_PTR_M  ((PCIE_RC_GEN2_PCIE_ARI_NEXT_CAP_PTR_V)<<(PCIE_RC_GEN2_PCIE_ARI_NEXT_CAP_PTR_S))
#define PCIE_RC_GEN2_PCIE_ARI_NEXT_CAP_PTR_V  0xFFF
#define PCIE_RC_GEN2_PCIE_ARI_NEXT_CAP_PTR_S  20
/* PCIE_RC_GEN2_PCIE_ARI_CAP_VERSION : RO ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: Represents Capability Version..*/
#define PCIE_RC_GEN2_PCIE_ARI_CAP_VERSION    0x0000000F
#define PCIE_RC_GEN2_PCIE_ARI_CAP_VERSION_M  ((PCIE_RC_GEN2_PCIE_ARI_CAP_VERSION_V)<<(PCIE_RC_GEN2_PCIE_ARI_CAP_VERSION_S))
#define PCIE_RC_GEN2_PCIE_ARI_CAP_VERSION_V  0xF
#define PCIE_RC_GEN2_PCIE_ARI_CAP_VERSION_S  16
/* PCIE_RC_GEN2_PCIE_ARI_CAP_ID : RO ;bitpos:[15:0] ;default: 16'he ; */
/*description: Represents Capability ID..*/
#define PCIE_RC_GEN2_PCIE_ARI_CAP_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_ARI_CAP_ID_M  ((PCIE_RC_GEN2_PCIE_ARI_CAP_ID_V)<<(PCIE_RC_GEN2_PCIE_ARI_CAP_ID_S))
#define PCIE_RC_GEN2_PCIE_ARI_CAP_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_ARI_CAP_ID_S  0

#define PCIE_RC_GEN2_PCIE_ARI_CAP_CTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x112C)
/* PCIE_RC_GEN2_PCIE_ARI_NEXT_FUN_NUM : RO ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Represents the Function Number of next higher numbered Function in the Device..*/
#define PCIE_RC_GEN2_PCIE_ARI_NEXT_FUN_NUM    0x000000FF
#define PCIE_RC_GEN2_PCIE_ARI_NEXT_FUN_NUM_M  ((PCIE_RC_GEN2_PCIE_ARI_NEXT_FUN_NUM_V)<<(PCIE_RC_GEN2_PCIE_ARI_NEXT_FUN_NUM_S))
#define PCIE_RC_GEN2_PCIE_ARI_NEXT_FUN_NUM_V  0xFF
#define PCIE_RC_GEN2_PCIE_ARI_NEXT_FUN_NUM_S  8
/* PCIE_RC_GEN2_PCIE_ARI_ACS_FUN_CAP : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: Represents the ARI Device supports Function Group level granularity for ACS P2P
Egress Control via its ACS Capability structures..*/
#define PCIE_RC_GEN2_PCIE_ARI_ACS_FUN_CAP    (BIT(1))
#define PCIE_RC_GEN2_PCIE_ARI_ACS_FUN_CAP_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_ARI_ACS_FUN_CAP_V  0x1
#define PCIE_RC_GEN2_PCIE_ARI_ACS_FUN_CAP_S  1
/* PCIE_RC_GEN2_PCIE_ARI_MFVC_FUN_CAP : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents the ARI Device supports Function Group level arbitration via its Mult
i-Function Virtual Channel Capability structure..*/
#define PCIE_RC_GEN2_PCIE_ARI_MFVC_FUN_CAP    (BIT(0))
#define PCIE_RC_GEN2_PCIE_ARI_MFVC_FUN_CAP_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_ARI_MFVC_FUN_CAP_V  0x1
#define PCIE_RC_GEN2_PCIE_ARI_MFVC_FUN_CAP_S  0

#define PCIE_RC_GEN2_PCIE_AER_CAP_HEADER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1200)
/* PCIE_RC_GEN2_PCIE_AER_NEXT_CAP_PTR : RO ;bitpos:[31:20] ;default: 12'h480 ; */
/*description: Represents offset to next Capability Structure..*/
#define PCIE_RC_GEN2_PCIE_AER_NEXT_CAP_PTR    0x00000FFF
#define PCIE_RC_GEN2_PCIE_AER_NEXT_CAP_PTR_M  ((PCIE_RC_GEN2_PCIE_AER_NEXT_CAP_PTR_V)<<(PCIE_RC_GEN2_PCIE_AER_NEXT_CAP_PTR_S))
#define PCIE_RC_GEN2_PCIE_AER_NEXT_CAP_PTR_V  0xFFF
#define PCIE_RC_GEN2_PCIE_AER_NEXT_CAP_PTR_S  20
/* PCIE_RC_GEN2_PCIE_AER_CAP_VERSION : RO ;bitpos:[19:16] ;default: 4'h2 ; */
/*description: Represents Capability Version..*/
#define PCIE_RC_GEN2_PCIE_AER_CAP_VERSION    0x0000000F
#define PCIE_RC_GEN2_PCIE_AER_CAP_VERSION_M  ((PCIE_RC_GEN2_PCIE_AER_CAP_VERSION_V)<<(PCIE_RC_GEN2_PCIE_AER_CAP_VERSION_S))
#define PCIE_RC_GEN2_PCIE_AER_CAP_VERSION_V  0xF
#define PCIE_RC_GEN2_PCIE_AER_CAP_VERSION_S  16
/* PCIE_RC_GEN2_PCIE_AER_CAP_ID : RO ;bitpos:[15:0] ;default: 16'h1 ; */
/*description: Represents Capability ID..*/
#define PCIE_RC_GEN2_PCIE_AER_CAP_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_AER_CAP_ID_M  ((PCIE_RC_GEN2_PCIE_AER_CAP_ID_V)<<(PCIE_RC_GEN2_PCIE_AER_CAP_ID_S))
#define PCIE_RC_GEN2_PCIE_AER_CAP_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_AER_CAP_ID_S  0

#define PCIE_RC_GEN2_PCIE_AER_UNCORR_STATUS_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1204)
/* PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_STATUS : R/W1C ;bitpos:[22] ;default: 1'h0 ; */
/*description: Represents Uncorrectable Internal Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_STATUS    (BIT(22))
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_STATUS_M  (BIT(22))
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_STATUS_S  22
/* PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_STATUS : R/W1C ;bitpos:[20] ;default: 1'h0 ; */
/*description: Represents Unsupported Request Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_STATUS    (BIT(20))
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_STATUS_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_STATUS_S  20
/* PCIE_RC_GEN2_PCIE_AER_ECRC_STATUS : R/W1C ;bitpos:[19] ;default: 1'h0 ; */
/*description: Represents ECRC Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_ECRC_STATUS    (BIT(19))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_STATUS_M  (BIT(19))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_ECRC_STATUS_S  19
/* PCIE_RC_GEN2_PCIE_AER_MALF_STATUS : R/W1C ;bitpos:[18] ;default: 1'h0 ; */
/*description: Represents Malformed TLP status..*/
#define PCIE_RC_GEN2_PCIE_AER_MALF_STATUS    (BIT(18))
#define PCIE_RC_GEN2_PCIE_AER_MALF_STATUS_M  (BIT(18))
#define PCIE_RC_GEN2_PCIE_AER_MALF_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_MALF_STATUS_S  18
/* PCIE_RC_GEN2_PCIE_AER_RX_OVF_STATUS : R/W1C ;bitpos:[17] ;default: 1'h0 ; */
/*description: Represents Receiver Overflow status..*/
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_STATUS    (BIT(17))
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_STATUS_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_STATUS_S  17
/* PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_STATUS : R/W1C ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents Unexpected Completion Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_STATUS    (BIT(16))
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_STATUS_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_STATUS_S  16
/* PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_STATUS : R/W1C ;bitpos:[15] ;default: 1'h0 ; */
/*description: Represents Completer Abort Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_STATUS    (BIT(15))
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_STATUS_M  (BIT(15))
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_STATUS_S  15
/* PCIE_RC_GEN2_PCIE_AER_CPL_TO_STATUS : R/W1C ;bitpos:[14] ;default: 1'h0 ; */
/*description: Represents Completion Timeout Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_STATUS    (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_STATUS_M  (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_STATUS_S  14
/* PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_STATUS : R/W1C ;bitpos:[13] ;default: 1'h0 ; */
/*description: Represents Flow Control Protocol Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_STATUS    (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_STATUS_M  (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_STATUS_S  13
/* PCIE_RC_GEN2_PCIE_AER_POISONED_RX_STATUS : R/W1C ;bitpos:[12] ;default: 1'h0 ; */
/*description: Represents Poisoned TLP Received status..*/
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_STATUS    (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_STATUS_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_STATUS_S  12
/* PCIE_RC_GEN2_PCIE_AER_DATA_LINK_STATUS : R/W1C ;bitpos:[4] ;default: 1'h0 ; */
/*description: Represents Data Link Protocol Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_STATUS    (BIT(4))
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_STATUS_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_STATUS_S  4

#define PCIE_RC_GEN2_PCIE_AER_UNCORR_MASK_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1208)
/* PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_MASK : R/W ;bitpos:[22] ;default: 1'h1 ; */
/*description: Write 1 to mask Uncorrectable Internal Error..*/
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_MASK    (BIT(22))
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_MASK_M  (BIT(22))
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_MASK_S  22
/* PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_MASK : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Write 1 to mask Unsupported Request Error..*/
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_MASK    (BIT(20))
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_MASK_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_MASK_S  20
/* PCIE_RC_GEN2_PCIE_AER_ECRC_MASK : R/W ;bitpos:[19] ;default: 1'h0 ; */
/*description: Write 1 to mask ECRC Error..*/
#define PCIE_RC_GEN2_PCIE_AER_ECRC_MASK    (BIT(19))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_MASK_M  (BIT(19))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_ECRC_MASK_S  19
/* PCIE_RC_GEN2_PCIE_AER_MALF_MASK : R/W ;bitpos:[18] ;default: 1'h0 ; */
/*description: Write 1 to mask Malformed TLP..*/
#define PCIE_RC_GEN2_PCIE_AER_MALF_MASK    (BIT(18))
#define PCIE_RC_GEN2_PCIE_AER_MALF_MASK_M  (BIT(18))
#define PCIE_RC_GEN2_PCIE_AER_MALF_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_MALF_MASK_S  18
/* PCIE_RC_GEN2_PCIE_AER_RX_OVF_MASK : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Write 1 to mask Receiver Overflow..*/
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_MASK    (BIT(17))
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_MASK_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_MASK_S  17
/* PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_MASK : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Write 1 to mask Unexpected Completion Error..*/
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_MASK    (BIT(16))
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_MASK_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_MASK_S  16
/* PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_MASK : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: Write 1 to mask Completer Abort Error..*/
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_MASK    (BIT(15))
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_MASK_M  (BIT(15))
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_MASK_S  15
/* PCIE_RC_GEN2_PCIE_AER_CPL_TO_MASK : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: Write 1 to mask Completion Timeout Error..*/
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_MASK    (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_MASK_M  (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_MASK_S  14
/* PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_MASK : R/W ;bitpos:[13] ;default: 1'h0 ; */
/*description: Write 1 to mask Flow Control Protocol Error..*/
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_MASK    (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_MASK_M  (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_MASK_S  13
/* PCIE_RC_GEN2_PCIE_AER_POISONED_RX_MASK : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Write 1 to mask Poisoned TLP Received..*/
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_MASK    (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_MASK_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_MASK_S  12
/* PCIE_RC_GEN2_PCIE_AER_DATA_LINK_MASK : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Write 1 to mask Data Link Protocol Error..*/
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_MASK    (BIT(4))
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_MASK_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_MASK_S  4

#define PCIE_RC_GEN2_PCIE_AER_UNCORR_SEVERITY_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x120C)
/* PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_SEVERITY : R/W ;bitpos:[22] ;default: 1'h1 ; */
/*description: Configures Uncorrectable Internal Error Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_SEVERITY    (BIT(22))
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_SEVERITY_M  (BIT(22))
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_UNCORR_INTER_SEVERITY_S  22
/* PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_SEVERITY : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Configures Unsupported Request Error Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_SEVERITY    (BIT(20))
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_SEVERITY_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_UNSUP_REQ_SEVERITY_S  20
/* PCIE_RC_GEN2_PCIE_AER_ECRC_SEVERITY : R/W ;bitpos:[19] ;default: 1'h0 ; */
/*description: Configures ECRC Error Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_ECRC_SEVERITY    (BIT(19))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_SEVERITY_M  (BIT(19))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_ECRC_SEVERITY_S  19
/* PCIE_RC_GEN2_PCIE_AER_MALF_SEVERITY : R/W ;bitpos:[18] ;default: 1'h1 ; */
/*description: Configures Malformed TLP Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_MALF_SEVERITY    (BIT(18))
#define PCIE_RC_GEN2_PCIE_AER_MALF_SEVERITY_M  (BIT(18))
#define PCIE_RC_GEN2_PCIE_AER_MALF_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_MALF_SEVERITY_S  18
/* PCIE_RC_GEN2_PCIE_AER_RX_OVF_SEVERITY : R/W ;bitpos:[17] ;default: 1'h1 ; */
/*description: Configures Receiver Overflow Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_SEVERITY    (BIT(17))
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_SEVERITY_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_RX_OVF_SEVERITY_S  17
/* PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_SEVERITY : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Configures Unexpected Completion Error Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_SEVERITY    (BIT(16))
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_SEVERITY_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_UNEXP_CPL_SEVERITY_S  16
/* PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_SEVERITY : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: Configures Completer Abort Error Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_SEVERITY    (BIT(15))
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_SEVERITY_M  (BIT(15))
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_CPL_ABORT_SEVERITY_S  15
/* PCIE_RC_GEN2_PCIE_AER_CPL_TO_SEVERITY : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: Configures Completion Timeout Error Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_SEVERITY    (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_SEVERITY_M  (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_CPL_TO_SEVERITY_S  14
/* PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_SEVERITY : R/W ;bitpos:[13] ;default: 1'h1 ; */
/*description: Configures Flow Control Protocol Error Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_SEVERITY    (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_SEVERITY_M  (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_FLOW_CTRL_SEVERITY_S  13
/* PCIE_RC_GEN2_PCIE_AER_POISONED_RX_SEVERITY : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures Poisoned TLP Received Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_SEVERITY    (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_SEVERITY_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_POISONED_RX_SEVERITY_S  12
/* PCIE_RC_GEN2_PCIE_AER_DATA_LINK_SEVERITY : R/W ;bitpos:[4] ;default: 1'h1 ; */
/*description: Configures Data Link Protocol Error Severity..*/
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_SEVERITY    (BIT(4))
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_SEVERITY_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_SEVERITY_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_DATA_LINK_SEVERITY_S  4

#define PCIE_RC_GEN2_PCIE_AER_CORR_STATUS_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1210)
/* PCIE_RC_GEN2_PCIE_AER_HEADER_OVF_STATUS : R/W1C ;bitpos:[15] ;default: 1'h0 ; */
/*description: Represents Header Log Overflow status..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_OVF_STATUS    (BIT(15))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_OVF_STATUS_M  (BIT(15))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_OVF_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_HEADER_OVF_STATUS_S  15
/* PCIE_RC_GEN2_PCIE_AER_CORR_INTER_STATUS : R/W1C ;bitpos:[14] ;default: 1'h0 ; */
/*description: Represents Corrected Internal Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_CORR_INTER_STATUS    (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CORR_INTER_STATUS_M  (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CORR_INTER_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_CORR_INTER_STATUS_S  14
/* PCIE_RC_GEN2_PCIE_AER_ADV_NONF_STATUS : R/W1C ;bitpos:[13] ;default: 1'h0 ; */
/*description: Represents Advisory Non-Fatal Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_ADV_NONF_STATUS    (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_ADV_NONF_STATUS_M  (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_ADV_NONF_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_ADV_NONF_STATUS_S  13
/* PCIE_RC_GEN2_PCIE_AER_REPLY_TO_STATUS : R/W1C ;bitpos:[12] ;default: 1'h0 ; */
/*description: Represents Replay Timer Timeout status..*/
#define PCIE_RC_GEN2_PCIE_AER_REPLY_TO_STATUS    (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_REPLY_TO_STATUS_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_REPLY_TO_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_REPLY_TO_STATUS_S  12
/* PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_STATUS : R/W1C ;bitpos:[8] ;default: 1'h0 ; */
/*description: Represents REPLAY_NUM Rollover status..*/
#define PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_STATUS    (BIT(8))
#define PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_STATUS_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_STATUS_S  8
/* PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_STATUS : R/W1C ;bitpos:[7] ;default: 1'h0 ; */
/*description: Represents Bad DLLP status..*/
#define PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_STATUS    (BIT(7))
#define PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_STATUS_M  (BIT(7))
#define PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_STATUS_S  7
/* PCIE_RC_GEN2_PCIE_AER_BAD_TLP_STATUS : R/W1C ;bitpos:[6] ;default: 1'h0 ; */
/*description: Represents Bad TLP status..*/
#define PCIE_RC_GEN2_PCIE_AER_BAD_TLP_STATUS    (BIT(6))
#define PCIE_RC_GEN2_PCIE_AER_BAD_TLP_STATUS_M  (BIT(6))
#define PCIE_RC_GEN2_PCIE_AER_BAD_TLP_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_BAD_TLP_STATUS_S  6
/* PCIE_RC_GEN2_PCIE_AER_RX_ERR_STATUS : R/W1C ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents Receiver Error status..*/
#define PCIE_RC_GEN2_PCIE_AER_RX_ERR_STATUS    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AER_RX_ERR_STATUS_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AER_RX_ERR_STATUS_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_RX_ERR_STATUS_S  0

#define PCIE_RC_GEN2_PCIE_AER_CORR_MASK_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1214)
/* PCIE_RC_GEN2_PCIE_AER_CORR_INTER_MASK : R/W ;bitpos:[14] ;default: 1'h1 ; */
/*description: Write 1 to mask Corrected Internal Error..*/
#define PCIE_RC_GEN2_PCIE_AER_CORR_INTER_MASK    (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CORR_INTER_MASK_M  (BIT(14))
#define PCIE_RC_GEN2_PCIE_AER_CORR_INTER_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_CORR_INTER_MASK_S  14
/* PCIE_RC_GEN2_PCIE_AER_ADV_NONF_MASK : R/W ;bitpos:[13] ;default: 1'h1 ; */
/*description: Write 1 to mask Advisory Non-Fatal Error..*/
#define PCIE_RC_GEN2_PCIE_AER_ADV_NONF_MASK    (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_ADV_NONF_MASK_M  (BIT(13))
#define PCIE_RC_GEN2_PCIE_AER_ADV_NONF_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_ADV_NONF_MASK_S  13
/* PCIE_RC_GEN2_PCIE_AER_REPLY_TO_MASK : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Write 1 to mask Replay Timer Timeout..*/
#define PCIE_RC_GEN2_PCIE_AER_REPLY_TO_MASK    (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_REPLY_TO_MASK_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_AER_REPLY_TO_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_REPLY_TO_MASK_S  12
/* PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_MASK : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Write 1 to mask REPLAY_NUM Rollover..*/
#define PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_MASK    (BIT(8))
#define PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_MASK_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_REPLY_NUM_MASK_S  8
/* PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_MASK : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: Write 1 to mask Bad DLLP..*/
#define PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_MASK    (BIT(7))
#define PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_MASK_M  (BIT(7))
#define PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_BAD_DLLP_MASK_S  7
/* PCIE_RC_GEN2_PCIE_AER_BAD_TLP_MASK : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: Write 1 to mask Bad TLP..*/
#define PCIE_RC_GEN2_PCIE_AER_BAD_TLP_MASK    (BIT(6))
#define PCIE_RC_GEN2_PCIE_AER_BAD_TLP_MASK_M  (BIT(6))
#define PCIE_RC_GEN2_PCIE_AER_BAD_TLP_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_BAD_TLP_MASK_S  6
/* PCIE_RC_GEN2_PCIE_AER_RX_ERR_MASK : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Write 1 to mask Receiver Error..*/
#define PCIE_RC_GEN2_PCIE_AER_RX_ERR_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_AER_RX_ERR_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_AER_RX_ERR_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_RX_ERR_MASK_S  0

#define PCIE_RC_GEN2_PCIE_AER_CAP_CTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1218)
/* PCIE_RC_GEN2_PCIE_AER_MULTI_HEADER_CAP : RO ;bitpos:[9] ;default: 1'h0 ; */
/*description: Represents whether or not the Function is capable of record more than one error
header.; 0: Can only record one error header; 1: Can record more than one error
header.*/
#define PCIE_RC_GEN2_PCIE_AER_MULTI_HEADER_CAP    (BIT(9))
#define PCIE_RC_GEN2_PCIE_AER_MULTI_HEADER_CAP_M  (BIT(9))
#define PCIE_RC_GEN2_PCIE_AER_MULTI_HEADER_CAP_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_MULTI_HEADER_CAP_S  9
/* PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not enable ECRC check.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_EN    (BIT(8))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_EN_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_EN_S  8
/* PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_CAP : RO ;bitpos:[7] ;default: 1'h1 ; */
/*description: Represents whether or not the Function is capable of check ECRC.; 0: Can not che
ck ECRC; 1: Can check ECRC.*/
#define PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_CAP    (BIT(7))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_CAP_M  (BIT(7))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_CAP_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_ECRC_CHK_CAP_S  7
/* PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_EN : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: Configures whether or not enable ECRC generation.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_EN    (BIT(6))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_EN_M  (BIT(6))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_EN_S  6
/* PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_CAP : RO ;bitpos:[5] ;default: 1'h1 ; */
/*description: Represents whether or not the Function is capable of generate ECRC.; 0: Can not
generate ECRC; 1: Can generate ECRC.*/
#define PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_CAP    (BIT(5))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_CAP_M  (BIT(5))
#define PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_CAP_V  0x1
#define PCIE_RC_GEN2_PCIE_AER_ECRC_GEN_CAP_S  5
/* PCIE_RC_GEN2_PCIE_AER_FIRST_ERR_PTR : RO ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Represents the bit position of the first error reported in the Uncorrectable Err
or Status register..*/
#define PCIE_RC_GEN2_PCIE_AER_FIRST_ERR_PTR    0x0000001F
#define PCIE_RC_GEN2_PCIE_AER_FIRST_ERR_PTR_M  ((PCIE_RC_GEN2_PCIE_AER_FIRST_ERR_PTR_V)<<(PCIE_RC_GEN2_PCIE_AER_FIRST_ERR_PTR_S))
#define PCIE_RC_GEN2_PCIE_AER_FIRST_ERR_PTR_V  0x1F
#define PCIE_RC_GEN2_PCIE_AER_FIRST_ERR_PTR_S  0

#define PCIE_RC_GEN2_PCIE_AER_HEARER_DW0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x121C)
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE0 : RO ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 0 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE0    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE0_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE0_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE0_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE0_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE0_S  24
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE1 : RO ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 1 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE1    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE1_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE1_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE1_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE1_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE1_S  16
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE2 : RO ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 2 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE2    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE2_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE2_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE2_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE2_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE2_S  8
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE3 : RO ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 3 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE3    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE3_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE3_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE3_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE3_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE3_S  0

#define PCIE_RC_GEN2_PCIE_AER_HEARER_DW1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1220)
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE4 : RO ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 4 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE4    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE4_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE4_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE4_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE4_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE4_S  24
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE5 : RO ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 5 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE5    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE5_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE5_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE5_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE5_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE5_S  16
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE6 : RO ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 6 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE6    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE6_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE6_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE6_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE6_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE6_S  8
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE7 : RO ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 7 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE7    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE7_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE7_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE7_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE7_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE7_S  0

#define PCIE_RC_GEN2_PCIE_AER_HEARER_DW2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1224)
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE8 : RO ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 8 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE8    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE8_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE8_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE8_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE8_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE8_S  24
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE9 : RO ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 9 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE9    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE9_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE9_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE9_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE9_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE9_S  16
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE10 : RO ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 10 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE10    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE10_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE10_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE10_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE10_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE10_S  8
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE11 : RO ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 11 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE11    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE11_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE11_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE11_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE11_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE11_S  0

#define PCIE_RC_GEN2_PCIE_AER_HEARER_DW3_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1228)
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE12 : RO ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 12 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE12    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE12_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE12_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE12_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE12_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE12_S  24
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE13 : RO ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 13 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE13    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE13_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE13_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE13_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE13_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE13_S  16
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE14 : RO ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 14 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE14    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE14_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE14_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE14_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE14_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE14_S  8
/* PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE15 : RO ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Represents TLP Header Byte 15 associated with error..*/
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE15    0x000000FF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE15_M  ((PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE15_V)<<(PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE15_S))
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE15_V  0xFF
#define PCIE_RC_GEN2_PCIE_AER_HEADER_BYTE15_S  0

#define PCIE_RC_GEN2_PCIE_VC_CAP_HEADER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1480)
/* PCIE_RC_GEN2_PCIE_VC_NEXT_CAP_PTR : RO ;bitpos:[31:20] ;default: 12'h0 ; */
/*description: Represents offset to next Capability Structure..*/
#define PCIE_RC_GEN2_PCIE_VC_NEXT_CAP_PTR    0x00000FFF
#define PCIE_RC_GEN2_PCIE_VC_NEXT_CAP_PTR_M  ((PCIE_RC_GEN2_PCIE_VC_NEXT_CAP_PTR_V)<<(PCIE_RC_GEN2_PCIE_VC_NEXT_CAP_PTR_S))
#define PCIE_RC_GEN2_PCIE_VC_NEXT_CAP_PTR_V  0xFFF
#define PCIE_RC_GEN2_PCIE_VC_NEXT_CAP_PTR_S  20
/* PCIE_RC_GEN2_PCIE_VC_CAP_VERSION : RO ;bitpos:[19:16] ;default: 4'h1 ; */
/*description: Represents Capability Version..*/
#define PCIE_RC_GEN2_PCIE_VC_CAP_VERSION    0x0000000F
#define PCIE_RC_GEN2_PCIE_VC_CAP_VERSION_M  ((PCIE_RC_GEN2_PCIE_VC_CAP_VERSION_V)<<(PCIE_RC_GEN2_PCIE_VC_CAP_VERSION_S))
#define PCIE_RC_GEN2_PCIE_VC_CAP_VERSION_V  0xF
#define PCIE_RC_GEN2_PCIE_VC_CAP_VERSION_S  16
/* PCIE_RC_GEN2_PCIE_VC_CAP_ID : RO ;bitpos:[15:0] ;default: 16'h2 ; */
/*description: Represents Capability ID..*/
#define PCIE_RC_GEN2_PCIE_VC_CAP_ID    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_VC_CAP_ID_M  ((PCIE_RC_GEN2_PCIE_VC_CAP_ID_V)<<(PCIE_RC_GEN2_PCIE_VC_CAP_ID_S))
#define PCIE_RC_GEN2_PCIE_VC_CAP_ID_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_VC_CAP_ID_S  0

#define PCIE_RC_GEN2_PCIE_VC_CAP1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1484)
/* PCIE_RC_GEN2_PCIE_VC_LOW_PRI_EXT_VC_CNT : RO ;bitpos:[6:4] ;default: 3'h0 ; */
/*description: Represents extended Virtual Channel number in addition to the default VC belongi
ng to the low-priority VC group..*/
#define PCIE_RC_GEN2_PCIE_VC_LOW_PRI_EXT_VC_CNT    0x00000007
#define PCIE_RC_GEN2_PCIE_VC_LOW_PRI_EXT_VC_CNT_M  ((PCIE_RC_GEN2_PCIE_VC_LOW_PRI_EXT_VC_CNT_V)<<(PCIE_RC_GEN2_PCIE_VC_LOW_PRI_EXT_VC_CNT_S))
#define PCIE_RC_GEN2_PCIE_VC_LOW_PRI_EXT_VC_CNT_V  0x7
#define PCIE_RC_GEN2_PCIE_VC_LOW_PRI_EXT_VC_CNT_S  4
/* PCIE_RC_GEN2_PCIE_VC_EXT_VC_CNT : RO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Represents extended Virtual Channel number in addition to the default VC support
ed by the device..*/
#define PCIE_RC_GEN2_PCIE_VC_EXT_VC_CNT    0x00000007
#define PCIE_RC_GEN2_PCIE_VC_EXT_VC_CNT_M  ((PCIE_RC_GEN2_PCIE_VC_EXT_VC_CNT_V)<<(PCIE_RC_GEN2_PCIE_VC_EXT_VC_CNT_S))
#define PCIE_RC_GEN2_PCIE_VC_EXT_VC_CNT_V  0x7
#define PCIE_RC_GEN2_PCIE_VC_EXT_VC_CNT_S  0

#define PCIE_RC_GEN2_PCIE_VC_CAP2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1488)
/* PCIE_RC_GEN2_PCIE_VC_ARB_TBL_OFFSET : RO ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Represents no VC Arbitration Table..*/
#define PCIE_RC_GEN2_PCIE_VC_ARB_TBL_OFFSET    0x000000FF
#define PCIE_RC_GEN2_PCIE_VC_ARB_TBL_OFFSET_M  ((PCIE_RC_GEN2_PCIE_VC_ARB_TBL_OFFSET_V)<<(PCIE_RC_GEN2_PCIE_VC_ARB_TBL_OFFSET_S))
#define PCIE_RC_GEN2_PCIE_VC_ARB_TBL_OFFSET_V  0xFF
#define PCIE_RC_GEN2_PCIE_VC_ARB_TBL_OFFSET_S  24

#define PCIE_RC_GEN2_PCIE_VC_RESOURCE_CTRL_0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x1494)
/* PCIE_RC_GEN2_PCIE_VC_VC_EN : RO ;bitpos:[31] ;default: 1'h1 ; */
/*description: Represents whether or not enable VC0.; 0: Disable; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_VC_VC_EN    (BIT(31))
#define PCIE_RC_GEN2_PCIE_VC_VC_EN_M  (BIT(31))
#define PCIE_RC_GEN2_PCIE_VC_VC_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_VC_VC_EN_S  31
/* PCIE_RC_GEN2_PCIE_VC_VC_ID : RO ;bitpos:[26:24] ;default: 3'h0 ; */
/*description: Represents VC Resource ID..*/
#define PCIE_RC_GEN2_PCIE_VC_VC_ID    0x00000007
#define PCIE_RC_GEN2_PCIE_VC_VC_ID_M  ((PCIE_RC_GEN2_PCIE_VC_VC_ID_V)<<(PCIE_RC_GEN2_PCIE_VC_VC_ID_S))
#define PCIE_RC_GEN2_PCIE_VC_VC_ID_V  0x7
#define PCIE_RC_GEN2_PCIE_VC_VC_ID_S  24
/* PCIE_RC_GEN2_PCIE_VC_TC7_VC0_MAP : R/W ;bitpos:[7] ;default: 1'h1 ; */
/*description: Configures whether or not map TC7 to VC0.; 0: Not map; 1: Map.*/
#define PCIE_RC_GEN2_PCIE_VC_TC7_VC0_MAP    (BIT(7))
#define PCIE_RC_GEN2_PCIE_VC_TC7_VC0_MAP_M  (BIT(7))
#define PCIE_RC_GEN2_PCIE_VC_TC7_VC0_MAP_V  0x1
#define PCIE_RC_GEN2_PCIE_VC_TC7_VC0_MAP_S  7
/* PCIE_RC_GEN2_PCIE_VC_TC6_VC0_MAP : R/W ;bitpos:[6] ;default: 1'h1 ; */
/*description: Configures whether or not map TC6 to VC0.; 0: Not map; 1: Map.*/
#define PCIE_RC_GEN2_PCIE_VC_TC6_VC0_MAP    (BIT(6))
#define PCIE_RC_GEN2_PCIE_VC_TC6_VC0_MAP_M  (BIT(6))
#define PCIE_RC_GEN2_PCIE_VC_TC6_VC0_MAP_V  0x1
#define PCIE_RC_GEN2_PCIE_VC_TC6_VC0_MAP_S  6
/* PCIE_RC_GEN2_PCIE_VC_TC5_VC0_MAP : R/W ;bitpos:[5] ;default: 1'h1 ; */
/*description: Configures whether or not map TC5 to VC0.; 0: Not map; 1: Map.*/
#define PCIE_RC_GEN2_PCIE_VC_TC5_VC0_MAP    (BIT(5))
#define PCIE_RC_GEN2_PCIE_VC_TC5_VC0_MAP_M  (BIT(5))
#define PCIE_RC_GEN2_PCIE_VC_TC5_VC0_MAP_V  0x1
#define PCIE_RC_GEN2_PCIE_VC_TC5_VC0_MAP_S  5
/* PCIE_RC_GEN2_PCIE_VC_TC4_VC0_MAP : R/W ;bitpos:[4] ;default: 1'h1 ; */
/*description: Configures whether or not map TC4 to VC0.; 0: Not map; 1: Map.*/
#define PCIE_RC_GEN2_PCIE_VC_TC4_VC0_MAP    (BIT(4))
#define PCIE_RC_GEN2_PCIE_VC_TC4_VC0_MAP_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_VC_TC4_VC0_MAP_V  0x1
#define PCIE_RC_GEN2_PCIE_VC_TC4_VC0_MAP_S  4
/* PCIE_RC_GEN2_PCIE_VC_TC3_VC0_MAP : R/W ;bitpos:[3] ;default: 1'h1 ; */
/*description: Configures whether or not map TC3 to VC0.; 0: Not map; 1: Map.*/
#define PCIE_RC_GEN2_PCIE_VC_TC3_VC0_MAP    (BIT(3))
#define PCIE_RC_GEN2_PCIE_VC_TC3_VC0_MAP_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_VC_TC3_VC0_MAP_V  0x1
#define PCIE_RC_GEN2_PCIE_VC_TC3_VC0_MAP_S  3
/* PCIE_RC_GEN2_PCIE_VC_TC2_VC0_MAP : R/W ;bitpos:[2] ;default: 1'h1 ; */
/*description: Configures whether or not map TC2 to VC0.; 0: Not map; 1: Map.*/
#define PCIE_RC_GEN2_PCIE_VC_TC2_VC0_MAP    (BIT(2))
#define PCIE_RC_GEN2_PCIE_VC_TC2_VC0_MAP_M  (BIT(2))
#define PCIE_RC_GEN2_PCIE_VC_TC2_VC0_MAP_V  0x1
#define PCIE_RC_GEN2_PCIE_VC_TC2_VC0_MAP_S  2
/* PCIE_RC_GEN2_PCIE_VC_TC1_VC0_MAP : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: Configures whether or not map TC1 to VC0.; 0: Not map; 1: Map.*/
#define PCIE_RC_GEN2_PCIE_VC_TC1_VC0_MAP    (BIT(1))
#define PCIE_RC_GEN2_PCIE_VC_TC1_VC0_MAP_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_VC_TC1_VC0_MAP_V  0x1
#define PCIE_RC_GEN2_PCIE_VC_TC1_VC0_MAP_S  1
/* PCIE_RC_GEN2_PCIE_VC_TC0_VC0_MAP : RO ;bitpos:[0] ;default: 1'h1 ; */
/*description: Represents whether or not map TC0 to VC0.; 0: Not map; 1: Map.*/
#define PCIE_RC_GEN2_PCIE_VC_TC0_VC0_MAP    (BIT(0))
#define PCIE_RC_GEN2_PCIE_VC_TC0_VC0_MAP_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_VC_TC0_VC0_MAP_V  0x1
#define PCIE_RC_GEN2_PCIE_VC_TC0_VC0_MAP_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2000)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: Configures MSI-X Table Vector N address bit[31:2]..*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2004)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures MSI-X Table Vector N address bit[63:32]..*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2008)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT0_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures MSI-X Table Vector N data bits..*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT0_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT0_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x200C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT0_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: Configures MSI-X Table Vector N mask bit..*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT0_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2010)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2014)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2018)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT1_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT1_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT1_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x201C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT1_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT1_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2020)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2024)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2028)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT2_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT2_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT2_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x202C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT2_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT2_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2030)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2034)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2038)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT3_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT3_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT3_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x203C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT3_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT3_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2040)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2044)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2048)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT4_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT4_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT4_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x204C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT4_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT4_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2050)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2054)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2058)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT5_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT5_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT5_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x205C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT5_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT5_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2060)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2064)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2068)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT6_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT6_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT6_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x206C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT6_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT6_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2070)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2074)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2078)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT7_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT7_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT7_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x207C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT7_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT7_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2080)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2084)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2088)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT8_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT8_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT8_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x208C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT8_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT8_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2090)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2094)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2098)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT9_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT9_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT9_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x209C)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT9_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT9_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20A0)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20A4)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20A8)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT10_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT10_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT10_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20AC)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT10_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT10_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20B0)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20B4)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20B8)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT11_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT11_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT11_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20BC)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT11_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT11_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20C0)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20C4)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20C8)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT12_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT12_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT12_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20CC)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT12_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT12_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20D0)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20D4)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20D8)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT13_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT13_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT13_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20DC)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT13_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT13_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20E0)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20E4)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20E8)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT14_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT14_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT14_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20EC)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT14_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT14_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20F0)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRL : R/W ;bitpos:[31:2] ;default: 30'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRL    0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRL_V  0x3FFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRL_S  2

#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20F4)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_DATA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20F8)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT15_DATA : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_DATA    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_DATA_M  ((PCIE_RC_GEN2_PCIE_MSIX_VECT15_DATA_V)<<(PCIE_RC_GEN2_PCIE_MSIX_VECT15_DATA_S))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_DATA_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_DATA_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_MAST_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x20FC)
/* PCIE_RC_GEN2_PCIE_MSIX_VECT15_MASK : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_MASK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_MASK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_MASK_V  0x1
#define PCIE_RC_GEN2_PCIE_MSIX_VECT15_MASK_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2800)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: The MSI-X interrupt or other information interaction register between PCIe RC an
d EP. Both of them can access it..*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE0    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE0_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE0_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE0_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE0_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE0_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2804)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE1    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE1_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE1_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE1_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE1_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE1_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2808)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE2 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE2    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE2_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE2_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE2_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE2_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE2_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE3_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x280C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE3 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE3    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE3_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE3_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE3_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE3_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE3_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE4_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2810)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE4 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE4    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE4_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE4_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE4_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE4_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE4_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE5_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2814)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE5 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE5    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE5_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE5_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE5_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE5_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE5_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE6_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2818)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE6 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE6    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE6_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE6_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE6_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE6_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE6_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE7_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x281C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE7 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE7    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE7_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE7_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE7_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE7_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE7_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE8_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2820)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE8 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE8    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE8_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE8_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE8_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE8_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE8_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE9_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2824)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE9 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE9    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE9_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE9_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE9_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE9_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE9_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE10_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2828)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE10 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE10    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE10_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE10_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE10_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE10_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE10_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE11_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x282C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE11 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE11    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE11_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE11_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE11_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE11_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE11_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE12_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2830)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE12 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE12    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE12_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE12_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE12_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE12_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE12_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE13_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2834)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE13 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE13    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE13_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE13_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE13_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE13_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE13_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE14_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2838)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE14 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE14    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE14_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE14_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE14_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE14_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE14_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE15_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x283C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE15 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE15    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE15_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE15_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE15_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE15_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE15_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE16_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2840)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE16 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE16    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE16_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE16_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE16_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE16_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE16_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE17_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2844)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE17 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE17    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE17_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE17_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE17_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE17_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE17_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE18_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2848)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE18 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE18    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE18_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE18_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE18_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE18_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE18_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE19_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x284C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE19 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE19    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE19_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE19_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE19_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE19_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE19_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE20_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2850)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE20 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE20    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE20_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE20_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE20_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE20_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE20_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE21_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2854)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE21 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE21    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE21_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE21_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE21_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE21_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE21_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE22_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2858)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE22 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE22    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE22_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE22_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE22_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE22_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE22_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE23_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x285C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE23 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE23    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE23_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE23_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE23_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE23_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE23_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE24_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2860)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE24 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE24    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE24_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE24_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE24_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE24_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE24_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE25_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2864)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE25 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE25    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE25_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE25_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE25_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE25_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE25_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE26_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2868)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE26 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE26    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE26_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE26_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE26_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE26_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE26_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE27_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x286C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE27 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE27    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE27_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE27_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE27_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE27_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE27_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE28_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2870)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE28 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE28    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE28_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE28_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE28_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE28_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE28_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE29_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2874)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE29 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE29    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE29_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE29_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE29_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE29_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE29_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE30_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2878)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE30 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE30    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE30_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE30_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE30_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE30_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE30_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE31_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x287C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE31 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE31    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE31_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE31_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE31_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE31_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE31_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE32_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2880)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE32 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE32    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE32_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE32_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE32_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE32_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE32_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE33_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2884)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE33 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE33    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE33_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE33_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE33_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE33_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE33_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE34_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2888)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE34 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE34    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE34_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE34_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE34_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE34_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE34_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE35_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x288C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE35 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE35    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE35_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE35_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE35_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE35_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE35_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE36_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2890)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE36 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE36    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE36_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE36_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE36_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE36_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE36_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE37_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2894)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE37 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE37    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE37_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE37_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE37_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE37_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE37_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE38_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2898)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE38 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE38    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE38_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE38_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE38_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE38_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE38_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE39_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x289C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE39 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE39    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE39_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE39_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE39_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE39_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE39_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE40_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28A0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE40 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE40    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE40_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE40_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE40_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE40_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE40_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE41_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28A4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE41 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE41    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE41_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE41_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE41_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE41_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE41_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE42_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28A8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE42 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE42    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE42_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE42_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE42_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE42_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE42_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE43_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28AC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE43 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE43    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE43_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE43_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE43_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE43_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE43_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE44_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28B0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE44 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE44    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE44_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE44_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE44_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE44_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE44_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE45_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28B4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE45 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE45    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE45_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE45_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE45_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE45_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE45_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE46_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28B8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE46 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE46    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE46_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE46_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE46_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE46_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE46_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE47_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28BC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE47 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE47    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE47_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE47_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE47_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE47_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE47_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE48_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28C0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE48 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE48    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE48_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE48_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE48_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE48_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE48_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE49_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28C4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE49 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE49    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE49_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE49_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE49_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE49_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE49_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE50_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28C8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE50 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE50    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE50_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE50_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE50_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE50_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE50_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE51_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28CC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE51 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE51    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE51_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE51_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE51_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE51_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE51_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE52_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28D0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE52 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE52    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE52_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE52_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE52_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE52_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE52_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE53_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28D4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE53 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE53    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE53_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE53_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE53_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE53_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE53_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE54_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28D8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE54 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE54    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE54_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE54_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE54_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE54_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE54_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE55_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28DC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE55 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE55    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE55_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE55_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE55_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE55_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE55_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE56_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28E0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE56 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE56    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE56_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE56_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE56_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE56_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE56_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE57_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28E4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE57 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE57    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE57_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE57_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE57_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE57_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE57_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE58_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28E8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE58 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE58    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE58_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE58_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE58_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE58_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE58_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE59_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28EC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE59 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE59    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE59_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE59_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE59_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE59_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE59_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE60_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28F0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE60 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE60    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE60_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE60_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE60_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE60_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE60_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE61_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28F4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE61 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE61    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE61_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE61_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE61_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE61_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE61_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE62_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28F8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE62 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE62    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE62_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE62_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE62_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE62_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE62_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE63_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x28FC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE63 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE63    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE63_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE63_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE63_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE63_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE63_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE64_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2900)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE64 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE64    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE64_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE64_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE64_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE64_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE64_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE65_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2904)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE65 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE65    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE65_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE65_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE65_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE65_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE65_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE66_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2908)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE66 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE66    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE66_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE66_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE66_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE66_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE66_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE67_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x290C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE67 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE67    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE67_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE67_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE67_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE67_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE67_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE68_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2910)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE68 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE68    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE68_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE68_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE68_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE68_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE68_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE69_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2914)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE69 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE69    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE69_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE69_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE69_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE69_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE69_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE70_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2918)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE70 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE70    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE70_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE70_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE70_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE70_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE70_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE71_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x291C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE71 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE71    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE71_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE71_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE71_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE71_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE71_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE72_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2920)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE72 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE72    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE72_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE72_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE72_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE72_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE72_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE73_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2924)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE73 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE73    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE73_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE73_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE73_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE73_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE73_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE74_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2928)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE74 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE74    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE74_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE74_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE74_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE74_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE74_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE75_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x292C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE75 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE75    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE75_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE75_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE75_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE75_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE75_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE76_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2930)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE76 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE76    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE76_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE76_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE76_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE76_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE76_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE77_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2934)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE77 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE77    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE77_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE77_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE77_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE77_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE77_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE78_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2938)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE78 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE78    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE78_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE78_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE78_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE78_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE78_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE79_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x293C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE79 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE79    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE79_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE79_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE79_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE79_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE79_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE80_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2940)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE80 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE80    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE80_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE80_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE80_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE80_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE80_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE81_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2944)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE81 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE81    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE81_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE81_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE81_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE81_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE81_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE82_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2948)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE82 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE82    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE82_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE82_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE82_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE82_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE82_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE83_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x294C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE83 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE83    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE83_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE83_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE83_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE83_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE83_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE84_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2950)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE84 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE84    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE84_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE84_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE84_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE84_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE84_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE85_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2954)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE85 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE85    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE85_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE85_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE85_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE85_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE85_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE86_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2958)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE86 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE86    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE86_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE86_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE86_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE86_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE86_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE87_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x295C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE87 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE87    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE87_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE87_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE87_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE87_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE87_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE88_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2960)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE88 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE88    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE88_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE88_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE88_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE88_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE88_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE89_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2964)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE89 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE89    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE89_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE89_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE89_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE89_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE89_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE90_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2968)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE90 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE90    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE90_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE90_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE90_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE90_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE90_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE91_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x296C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE91 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE91    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE91_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE91_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE91_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE91_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE91_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE92_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2970)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE92 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE92    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE92_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE92_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE92_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE92_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE92_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE93_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2974)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE93 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE93    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE93_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE93_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE93_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE93_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE93_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE94_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2978)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE94 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE94    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE94_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE94_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE94_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE94_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE94_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE95_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x297C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE95 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE95    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE95_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE95_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE95_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE95_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE95_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE96_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2980)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE96 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE96    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE96_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE96_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE96_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE96_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE96_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE97_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2984)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE97 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE97    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE97_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE97_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE97_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE97_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE97_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE98_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2988)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE98 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE98    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE98_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE98_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE98_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE98_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE98_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE99_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x298C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE99 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE99    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE99_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE99_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE99_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE99_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE99_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE100_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2990)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE100 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE100    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE100_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE100_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE100_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE100_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE100_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE101_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2994)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE101 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE101    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE101_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE101_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE101_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE101_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE101_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE102_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2998)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE102 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE102    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE102_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE102_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE102_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE102_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE102_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE103_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x299C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE103 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE103    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE103_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE103_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE103_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE103_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE103_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE104_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29A0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE104 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE104    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE104_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE104_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE104_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE104_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE104_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE105_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29A4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE105 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE105    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE105_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE105_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE105_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE105_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE105_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE106_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29A8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE106 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE106    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE106_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE106_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE106_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE106_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE106_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE107_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29AC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE107 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE107    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE107_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE107_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE107_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE107_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE107_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE108_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29B0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE108 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE108    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE108_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE108_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE108_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE108_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE108_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE109_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29B4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE109 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE109    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE109_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE109_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE109_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE109_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE109_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE110_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29B8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE110 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE110    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE110_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE110_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE110_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE110_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE110_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE111_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29BC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE111 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE111    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE111_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE111_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE111_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE111_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE111_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE112_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29C0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE112 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE112    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE112_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE112_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE112_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE112_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE112_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE113_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29C4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE113 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE113    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE113_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE113_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE113_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE113_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE113_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE114_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29C8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE114 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE114    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE114_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE114_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE114_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE114_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE114_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE115_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29CC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE115 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE115    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE115_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE115_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE115_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE115_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE115_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE116_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29D0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE116 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE116    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE116_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE116_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE116_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE116_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE116_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE117_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29D4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE117 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE117    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE117_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE117_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE117_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE117_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE117_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE118_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29D8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE118 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE118    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE118_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE118_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE118_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE118_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE118_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE119_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29DC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE119 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE119    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE119_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE119_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE119_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE119_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE119_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE120_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29E0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE120 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE120    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE120_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE120_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE120_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE120_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE120_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE121_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29E4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE121 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE121    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE121_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE121_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE121_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE121_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE121_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE122_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29E8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE122 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE122    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE122_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE122_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE122_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE122_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE122_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE123_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29EC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE123 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE123    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE123_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE123_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE123_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE123_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE123_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE124_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29F0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE124 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE124    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE124_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE124_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE124_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE124_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE124_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE125_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29F4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE125 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE125    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE125_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE125_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE125_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE125_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE125_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE126_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29F8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE126 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE126    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE126_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE126_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE126_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE126_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE126_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE127_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x29FC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE127 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE127    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE127_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE127_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE127_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE127_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE127_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE128_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A00)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE128 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE128    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE128_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE128_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE128_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE128_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE128_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE129_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A04)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE129 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE129    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE129_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE129_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE129_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE129_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE129_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE130_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A08)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE130 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE130    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE130_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE130_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE130_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE130_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE130_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE131_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A0C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE131 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE131    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE131_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE131_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE131_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE131_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE131_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE132_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A10)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE132 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE132    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE132_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE132_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE132_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE132_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE132_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE133_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A14)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE133 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE133    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE133_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE133_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE133_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE133_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE133_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE134_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A18)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE134 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE134    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE134_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE134_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE134_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE134_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE134_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE135_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A1C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE135 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE135    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE135_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE135_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE135_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE135_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE135_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE136_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A20)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE136 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE136    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE136_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE136_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE136_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE136_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE136_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE137_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A24)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE137 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE137    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE137_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE137_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE137_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE137_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE137_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE138_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A28)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE138 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE138    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE138_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE138_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE138_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE138_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE138_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE139_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A2C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE139 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE139    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE139_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE139_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE139_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE139_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE139_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE140_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A30)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE140 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE140    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE140_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE140_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE140_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE140_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE140_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE141_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A34)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE141 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE141    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE141_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE141_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE141_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE141_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE141_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE142_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A38)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE142 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE142    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE142_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE142_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE142_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE142_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE142_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE143_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A3C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE143 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE143    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE143_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE143_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE143_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE143_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE143_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE144_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A40)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE144 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE144    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE144_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE144_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE144_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE144_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE144_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE145_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A44)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE145 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE145    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE145_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE145_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE145_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE145_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE145_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE146_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A48)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE146 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE146    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE146_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE146_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE146_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE146_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE146_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE147_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A4C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE147 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE147    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE147_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE147_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE147_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE147_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE147_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE148_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A50)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE148 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE148    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE148_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE148_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE148_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE148_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE148_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE149_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A54)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE149 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE149    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE149_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE149_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE149_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE149_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE149_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE150_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A58)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE150 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE150    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE150_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE150_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE150_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE150_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE150_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE151_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A5C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE151 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE151    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE151_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE151_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE151_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE151_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE151_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE152_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A60)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE152 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE152    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE152_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE152_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE152_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE152_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE152_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE153_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A64)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE153 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE153    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE153_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE153_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE153_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE153_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE153_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE154_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A68)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE154 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE154    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE154_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE154_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE154_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE154_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE154_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE155_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A6C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE155 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE155    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE155_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE155_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE155_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE155_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE155_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE156_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A70)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE156 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE156    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE156_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE156_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE156_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE156_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE156_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE157_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A74)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE157 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE157    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE157_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE157_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE157_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE157_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE157_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE158_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A78)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE158 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE158    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE158_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE158_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE158_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE158_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE158_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE159_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A7C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE159 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE159    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE159_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE159_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE159_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE159_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE159_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE160_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A80)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE160 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE160    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE160_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE160_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE160_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE160_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE160_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE161_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A84)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE161 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE161    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE161_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE161_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE161_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE161_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE161_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE162_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A88)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE162 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE162    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE162_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE162_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE162_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE162_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE162_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE163_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A8C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE163 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE163    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE163_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE163_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE163_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE163_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE163_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE164_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A90)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE164 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE164    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE164_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE164_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE164_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE164_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE164_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE165_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A94)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE165 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE165    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE165_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE165_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE165_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE165_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE165_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE166_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A98)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE166 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE166    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE166_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE166_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE166_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE166_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE166_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE167_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2A9C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE167 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE167    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE167_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE167_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE167_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE167_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE167_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE168_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AA0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE168 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE168    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE168_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE168_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE168_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE168_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE168_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE169_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AA4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE169 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE169    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE169_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE169_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE169_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE169_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE169_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE170_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AA8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE170 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE170    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE170_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE170_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE170_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE170_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE170_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE171_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AAC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE171 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE171    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE171_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE171_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE171_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE171_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE171_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE172_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AB0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE172 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE172    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE172_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE172_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE172_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE172_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE172_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE173_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AB4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE173 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE173    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE173_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE173_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE173_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE173_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE173_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE174_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AB8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE174 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE174    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE174_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE174_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE174_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE174_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE174_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE175_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2ABC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE175 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE175    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE175_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE175_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE175_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE175_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE175_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE176_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AC0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE176 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE176    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE176_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE176_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE176_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE176_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE176_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE177_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AC4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE177 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE177    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE177_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE177_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE177_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE177_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE177_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE178_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AC8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE178 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE178    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE178_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE178_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE178_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE178_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE178_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE179_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2ACC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE179 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE179    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE179_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE179_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE179_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE179_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE179_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE180_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AD0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE180 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE180    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE180_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE180_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE180_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE180_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE180_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE181_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AD4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE181 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE181    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE181_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE181_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE181_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE181_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE181_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE182_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AD8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE182 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE182    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE182_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE182_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE182_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE182_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE182_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE183_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2ADC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE183 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE183    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE183_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE183_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE183_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE183_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE183_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE184_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AE0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE184 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE184    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE184_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE184_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE184_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE184_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE184_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE185_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AE4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE185 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE185    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE185_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE185_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE185_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE185_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE185_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE186_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AE8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE186 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE186    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE186_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE186_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE186_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE186_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE186_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE187_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AEC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE187 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE187    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE187_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE187_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE187_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE187_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE187_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE188_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AF0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE188 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE188    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE188_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE188_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE188_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE188_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE188_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE189_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AF4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE189 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE189    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE189_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE189_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE189_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE189_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE189_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE190_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AF8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE190 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE190    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE190_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE190_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE190_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE190_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE190_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE191_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2AFC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE191 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE191    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE191_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE191_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE191_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE191_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE191_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE192_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B00)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE192 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE192    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE192_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE192_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE192_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE192_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE192_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE193_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B04)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE193 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE193    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE193_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE193_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE193_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE193_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE193_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE194_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B08)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE194 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE194    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE194_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE194_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE194_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE194_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE194_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE195_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B0C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE195 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE195    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE195_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE195_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE195_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE195_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE195_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE196_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B10)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE196 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE196    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE196_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE196_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE196_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE196_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE196_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE197_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B14)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE197 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE197    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE197_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE197_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE197_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE197_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE197_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE198_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B18)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE198 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE198    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE198_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE198_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE198_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE198_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE198_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE199_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B1C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE199 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE199    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE199_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE199_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE199_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE199_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE199_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE200_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B20)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE200 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE200    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE200_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE200_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE200_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE200_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE200_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE201_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B24)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE201 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE201    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE201_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE201_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE201_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE201_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE201_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE202_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B28)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE202 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE202    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE202_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE202_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE202_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE202_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE202_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE203_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B2C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE203 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE203    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE203_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE203_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE203_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE203_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE203_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE204_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B30)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE204 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE204    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE204_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE204_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE204_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE204_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE204_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE205_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B34)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE205 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE205    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE205_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE205_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE205_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE205_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE205_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE206_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B38)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE206 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE206    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE206_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE206_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE206_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE206_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE206_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE207_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B3C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE207 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE207    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE207_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE207_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE207_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE207_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE207_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE208_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B40)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE208 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE208    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE208_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE208_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE208_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE208_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE208_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE209_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B44)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE209 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE209    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE209_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE209_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE209_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE209_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE209_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE210_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B48)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE210 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE210    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE210_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE210_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE210_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE210_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE210_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE211_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B4C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE211 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE211    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE211_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE211_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE211_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE211_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE211_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE212_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B50)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE212 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE212    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE212_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE212_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE212_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE212_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE212_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE213_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B54)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE213 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE213    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE213_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE213_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE213_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE213_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE213_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE214_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B58)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE214 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE214    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE214_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE214_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE214_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE214_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE214_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE215_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B5C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE215 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE215    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE215_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE215_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE215_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE215_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE215_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE216_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B60)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE216 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE216    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE216_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE216_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE216_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE216_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE216_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE217_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B64)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE217 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE217    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE217_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE217_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE217_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE217_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE217_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE218_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B68)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE218 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE218    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE218_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE218_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE218_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE218_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE218_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE219_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B6C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE219 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE219    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE219_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE219_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE219_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE219_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE219_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE220_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B70)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE220 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE220    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE220_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE220_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE220_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE220_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE220_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE221_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B74)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE221 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE221    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE221_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE221_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE221_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE221_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE221_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE222_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B78)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE222 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE222    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE222_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE222_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE222_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE222_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE222_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE223_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B7C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE223 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE223    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE223_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE223_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE223_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE223_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE223_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE224_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B80)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE224 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE224    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE224_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE224_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE224_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE224_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE224_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE225_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B84)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE225 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE225    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE225_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE225_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE225_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE225_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE225_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE226_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B88)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE226 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE226    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE226_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE226_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE226_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE226_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE226_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE227_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B8C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE227 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE227    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE227_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE227_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE227_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE227_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE227_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE228_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B90)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE228 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE228    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE228_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE228_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE228_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE228_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE228_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE229_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B94)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE229 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE229    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE229_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE229_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE229_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE229_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE229_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE230_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B98)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE230 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE230    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE230_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE230_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE230_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE230_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE230_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE231_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2B9C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE231 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE231    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE231_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE231_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE231_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE231_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE231_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE232_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BA0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE232 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE232    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE232_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE232_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE232_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE232_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE232_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE233_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BA4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE233 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE233    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE233_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE233_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE233_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE233_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE233_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE234_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BA8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE234 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE234    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE234_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE234_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE234_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE234_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE234_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE235_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BAC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE235 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE235    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE235_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE235_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE235_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE235_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE235_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE236_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BB0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE236 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE236    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE236_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE236_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE236_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE236_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE236_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE237_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BB4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE237 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE237    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE237_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE237_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE237_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE237_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE237_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE238_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BB8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE238 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE238    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE238_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE238_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE238_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE238_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE238_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE239_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BBC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE239 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE239    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE239_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE239_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE239_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE239_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE239_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE240_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BC0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE240 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE240    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE240_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE240_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE240_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE240_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE240_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE241_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BC4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE241 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE241    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE241_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE241_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE241_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE241_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE241_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE242_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BC8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE242 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE242    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE242_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE242_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE242_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE242_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE242_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE243_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BCC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE243 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE243    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE243_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE243_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE243_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE243_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE243_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE244_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BD0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE244 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE244    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE244_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE244_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE244_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE244_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE244_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE245_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BD4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE245 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE245    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE245_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE245_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE245_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE245_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE245_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE246_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BD8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE246 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE246    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE246_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE246_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE246_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE246_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE246_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE247_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BDC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE247 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE247    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE247_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE247_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE247_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE247_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE247_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE248_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BE0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE248 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE248    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE248_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE248_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE248_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE248_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE248_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE249_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BE4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE249 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE249    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE249_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE249_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE249_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE249_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE249_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE250_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BE8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE250 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE250    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE250_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE250_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE250_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE250_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE250_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE251_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BEC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE251 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE251    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE251_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE251_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE251_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE251_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE251_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE252_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BF0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE252 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE252    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE252_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE252_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE252_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE252_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE252_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE253_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BF4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE253 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE253    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE253_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE253_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE253_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE253_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE253_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE254_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BF8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE254 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE254    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE254_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE254_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE254_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE254_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE254_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE255_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2BFC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE255 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE255    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE255_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE255_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE255_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE255_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE255_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE256_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C00)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE256 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE256    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE256_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE256_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE256_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE256_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE256_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE257_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C04)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE257 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE257    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE257_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE257_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE257_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE257_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE257_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE258_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C08)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE258 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE258    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE258_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE258_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE258_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE258_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE258_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE259_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C0C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE259 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE259    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE259_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE259_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE259_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE259_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE259_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE260_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C10)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE260 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE260    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE260_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE260_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE260_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE260_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE260_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE261_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C14)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE261 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE261    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE261_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE261_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE261_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE261_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE261_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE262_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C18)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE262 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE262    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE262_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE262_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE262_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE262_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE262_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE263_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C1C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE263 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE263    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE263_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE263_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE263_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE263_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE263_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE264_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C20)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE264 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE264    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE264_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE264_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE264_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE264_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE264_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE265_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C24)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE265 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE265    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE265_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE265_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE265_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE265_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE265_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE266_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C28)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE266 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE266    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE266_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE266_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE266_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE266_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE266_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE267_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C2C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE267 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE267    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE267_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE267_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE267_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE267_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE267_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE268_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C30)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE268 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE268    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE268_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE268_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE268_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE268_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE268_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE269_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C34)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE269 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE269    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE269_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE269_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE269_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE269_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE269_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE270_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C38)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE270 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE270    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE270_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE270_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE270_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE270_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE270_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE271_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C3C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE271 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE271    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE271_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE271_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE271_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE271_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE271_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE272_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C40)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE272 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE272    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE272_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE272_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE272_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE272_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE272_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE273_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C44)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE273 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE273    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE273_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE273_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE273_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE273_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE273_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE274_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C48)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE274 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE274    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE274_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE274_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE274_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE274_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE274_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE275_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C4C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE275 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE275    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE275_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE275_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE275_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE275_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE275_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE276_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C50)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE276 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE276    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE276_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE276_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE276_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE276_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE276_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE277_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C54)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE277 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE277    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE277_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE277_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE277_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE277_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE277_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE278_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C58)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE278 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE278    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE278_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE278_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE278_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE278_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE278_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE279_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C5C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE279 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE279    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE279_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE279_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE279_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE279_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE279_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE280_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C60)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE280 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE280    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE280_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE280_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE280_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE280_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE280_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE281_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C64)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE281 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE281    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE281_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE281_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE281_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE281_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE281_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE282_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C68)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE282 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE282    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE282_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE282_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE282_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE282_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE282_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE283_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C6C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE283 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE283    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE283_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE283_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE283_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE283_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE283_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE284_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C70)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE284 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE284    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE284_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE284_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE284_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE284_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE284_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE285_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C74)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE285 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE285    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE285_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE285_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE285_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE285_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE285_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE286_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C78)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE286 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE286    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE286_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE286_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE286_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE286_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE286_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE287_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C7C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE287 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE287    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE287_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE287_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE287_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE287_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE287_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE288_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C80)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE288 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE288    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE288_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE288_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE288_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE288_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE288_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE289_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C84)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE289 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE289    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE289_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE289_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE289_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE289_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE289_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE290_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C88)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE290 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE290    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE290_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE290_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE290_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE290_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE290_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE291_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C8C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE291 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE291    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE291_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE291_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE291_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE291_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE291_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE292_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C90)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE292 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE292    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE292_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE292_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE292_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE292_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE292_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE293_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C94)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE293 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE293    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE293_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE293_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE293_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE293_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE293_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE294_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C98)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE294 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE294    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE294_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE294_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE294_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE294_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE294_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE295_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2C9C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE295 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE295    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE295_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE295_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE295_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE295_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE295_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE296_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CA0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE296 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE296    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE296_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE296_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE296_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE296_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE296_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE297_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CA4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE297 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE297    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE297_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE297_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE297_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE297_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE297_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE298_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CA8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE298 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE298    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE298_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE298_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE298_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE298_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE298_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE299_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CAC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE299 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE299    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE299_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE299_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE299_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE299_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE299_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE300_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CB0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE300 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE300    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE300_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE300_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE300_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE300_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE300_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE301_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CB4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE301 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE301    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE301_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE301_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE301_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE301_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE301_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE302_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CB8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE302 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE302    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE302_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE302_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE302_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE302_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE302_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE303_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CBC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE303 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE303    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE303_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE303_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE303_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE303_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE303_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE304_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CC0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE304 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE304    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE304_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE304_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE304_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE304_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE304_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE305_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CC4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE305 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE305    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE305_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE305_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE305_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE305_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE305_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE306_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CC8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE306 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE306    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE306_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE306_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE306_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE306_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE306_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE307_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CCC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE307 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE307    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE307_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE307_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE307_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE307_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE307_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE308_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CD0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE308 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE308    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE308_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE308_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE308_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE308_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE308_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE309_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CD4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE309 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE309    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE309_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE309_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE309_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE309_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE309_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE310_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CD8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE310 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE310    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE310_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE310_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE310_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE310_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE310_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE311_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CDC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE311 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE311    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE311_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE311_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE311_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE311_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE311_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE312_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CE0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE312 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE312    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE312_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE312_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE312_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE312_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE312_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE313_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CE4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE313 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE313    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE313_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE313_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE313_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE313_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE313_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE314_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CE8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE314 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE314    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE314_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE314_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE314_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE314_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE314_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE315_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CEC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE315 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE315    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE315_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE315_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE315_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE315_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE315_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE316_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CF0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE316 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE316    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE316_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE316_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE316_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE316_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE316_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE317_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CF4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE317 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE317    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE317_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE317_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE317_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE317_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE317_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE318_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CF8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE318 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE318    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE318_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE318_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE318_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE318_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE318_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE319_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2CFC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE319 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE319    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE319_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE319_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE319_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE319_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE319_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE320_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D00)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE320 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE320    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE320_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE320_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE320_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE320_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE320_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE321_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D04)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE321 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE321    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE321_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE321_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE321_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE321_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE321_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE322_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D08)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE322 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE322    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE322_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE322_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE322_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE322_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE322_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE323_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D0C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE323 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE323    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE323_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE323_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE323_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE323_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE323_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE324_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D10)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE324 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE324    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE324_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE324_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE324_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE324_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE324_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE325_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D14)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE325 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE325    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE325_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE325_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE325_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE325_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE325_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE326_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D18)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE326 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE326    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE326_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE326_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE326_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE326_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE326_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE327_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D1C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE327 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE327    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE327_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE327_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE327_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE327_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE327_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE328_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D20)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE328 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE328    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE328_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE328_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE328_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE328_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE328_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE329_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D24)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE329 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE329    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE329_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE329_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE329_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE329_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE329_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE330_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D28)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE330 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE330    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE330_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE330_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE330_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE330_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE330_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE331_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D2C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE331 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE331    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE331_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE331_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE331_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE331_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE331_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE332_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D30)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE332 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE332    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE332_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE332_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE332_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE332_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE332_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE333_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D34)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE333 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE333    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE333_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE333_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE333_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE333_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE333_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE334_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D38)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE334 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE334    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE334_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE334_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE334_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE334_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE334_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE335_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D3C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE335 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE335    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE335_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE335_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE335_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE335_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE335_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE336_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D40)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE336 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE336    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE336_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE336_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE336_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE336_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE336_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE337_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D44)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE337 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE337    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE337_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE337_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE337_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE337_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE337_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE338_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D48)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE338 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE338    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE338_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE338_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE338_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE338_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE338_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE339_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D4C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE339 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE339    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE339_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE339_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE339_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE339_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE339_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE340_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D50)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE340 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE340    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE340_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE340_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE340_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE340_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE340_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE341_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D54)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE341 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE341    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE341_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE341_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE341_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE341_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE341_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE342_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D58)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE342 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE342    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE342_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE342_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE342_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE342_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE342_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE343_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D5C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE343 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE343    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE343_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE343_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE343_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE343_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE343_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE344_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D60)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE344 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE344    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE344_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE344_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE344_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE344_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE344_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE345_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D64)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE345 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE345    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE345_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE345_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE345_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE345_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE345_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE346_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D68)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE346 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE346    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE346_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE346_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE346_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE346_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE346_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE347_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D6C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE347 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE347    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE347_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE347_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE347_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE347_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE347_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE348_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D70)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE348 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE348    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE348_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE348_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE348_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE348_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE348_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE349_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D74)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE349 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE349    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE349_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE349_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE349_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE349_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE349_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE350_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D78)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE350 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE350    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE350_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE350_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE350_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE350_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE350_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE351_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D7C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE351 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE351    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE351_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE351_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE351_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE351_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE351_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE352_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D80)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE352 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE352    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE352_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE352_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE352_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE352_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE352_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE353_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D84)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE353 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE353    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE353_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE353_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE353_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE353_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE353_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE354_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D88)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE354 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE354    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE354_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE354_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE354_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE354_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE354_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE355_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D8C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE355 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE355    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE355_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE355_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE355_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE355_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE355_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE356_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D90)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE356 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE356    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE356_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE356_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE356_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE356_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE356_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE357_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D94)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE357 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE357    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE357_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE357_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE357_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE357_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE357_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE358_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D98)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE358 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE358    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE358_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE358_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE358_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE358_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE358_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE359_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2D9C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE359 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE359    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE359_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE359_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE359_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE359_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE359_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE360_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DA0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE360 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE360    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE360_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE360_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE360_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE360_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE360_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE361_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DA4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE361 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE361    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE361_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE361_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE361_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE361_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE361_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE362_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DA8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE362 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE362    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE362_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE362_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE362_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE362_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE362_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE363_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DAC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE363 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE363    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE363_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE363_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE363_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE363_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE363_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE364_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DB0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE364 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE364    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE364_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE364_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE364_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE364_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE364_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE365_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DB4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE365 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE365    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE365_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE365_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE365_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE365_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE365_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE366_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DB8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE366 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE366    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE366_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE366_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE366_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE366_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE366_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE367_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DBC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE367 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE367    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE367_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE367_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE367_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE367_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE367_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE368_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DC0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE368 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE368    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE368_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE368_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE368_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE368_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE368_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE369_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DC4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE369 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE369    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE369_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE369_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE369_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE369_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE369_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE370_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DC8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE370 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE370    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE370_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE370_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE370_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE370_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE370_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE371_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DCC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE371 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE371    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE371_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE371_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE371_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE371_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE371_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE372_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DD0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE372 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE372    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE372_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE372_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE372_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE372_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE372_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE373_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DD4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE373 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE373    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE373_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE373_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE373_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE373_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE373_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE374_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DD8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE374 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE374    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE374_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE374_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE374_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE374_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE374_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE375_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DDC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE375 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE375    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE375_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE375_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE375_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE375_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE375_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE376_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DE0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE376 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE376    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE376_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE376_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE376_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE376_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE376_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE377_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DE4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE377 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE377    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE377_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE377_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE377_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE377_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE377_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE378_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DE8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE378 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE378    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE378_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE378_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE378_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE378_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE378_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE379_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DEC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE379 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE379    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE379_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE379_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE379_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE379_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE379_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE380_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DF0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE380 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE380    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE380_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE380_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE380_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE380_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE380_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE381_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DF4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE381 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE381    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE381_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE381_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE381_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE381_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE381_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE382_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DF8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE382 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE382    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE382_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE382_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE382_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE382_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE382_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE383_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2DFC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE383 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE383    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE383_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE383_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE383_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE383_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE383_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE384_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E00)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE384 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE384    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE384_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE384_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE384_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE384_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE384_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE385_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E04)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE385 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE385    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE385_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE385_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE385_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE385_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE385_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE386_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E08)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE386 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE386    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE386_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE386_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE386_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE386_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE386_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE387_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E0C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE387 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE387    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE387_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE387_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE387_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE387_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE387_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE388_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E10)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE388 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE388    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE388_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE388_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE388_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE388_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE388_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE389_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E14)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE389 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE389    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE389_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE389_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE389_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE389_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE389_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE390_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E18)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE390 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE390    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE390_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE390_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE390_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE390_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE390_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE391_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E1C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE391 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE391    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE391_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE391_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE391_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE391_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE391_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE392_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E20)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE392 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE392    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE392_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE392_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE392_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE392_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE392_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE393_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E24)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE393 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE393    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE393_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE393_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE393_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE393_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE393_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE394_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E28)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE394 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE394    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE394_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE394_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE394_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE394_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE394_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE395_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E2C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE395 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE395    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE395_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE395_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE395_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE395_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE395_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE396_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E30)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE396 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE396    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE396_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE396_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE396_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE396_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE396_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE397_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E34)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE397 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE397    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE397_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE397_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE397_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE397_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE397_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE398_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E38)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE398 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE398    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE398_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE398_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE398_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE398_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE398_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE399_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E3C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE399 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE399    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE399_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE399_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE399_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE399_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE399_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE400_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E40)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE400 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE400    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE400_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE400_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE400_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE400_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE400_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE401_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E44)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE401 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE401    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE401_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE401_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE401_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE401_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE401_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE402_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E48)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE402 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE402    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE402_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE402_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE402_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE402_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE402_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE403_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E4C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE403 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE403    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE403_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE403_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE403_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE403_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE403_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE404_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E50)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE404 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE404    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE404_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE404_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE404_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE404_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE404_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE405_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E54)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE405 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE405    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE405_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE405_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE405_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE405_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE405_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE406_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E58)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE406 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE406    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE406_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE406_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE406_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE406_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE406_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE407_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E5C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE407 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE407    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE407_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE407_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE407_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE407_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE407_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE408_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E60)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE408 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE408    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE408_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE408_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE408_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE408_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE408_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE409_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E64)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE409 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE409    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE409_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE409_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE409_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE409_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE409_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE410_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E68)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE410 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE410    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE410_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE410_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE410_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE410_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE410_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE411_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E6C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE411 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE411    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE411_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE411_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE411_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE411_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE411_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE412_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E70)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE412 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE412    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE412_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE412_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE412_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE412_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE412_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE413_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E74)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE413 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE413    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE413_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE413_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE413_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE413_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE413_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE414_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E78)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE414 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE414    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE414_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE414_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE414_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE414_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE414_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE415_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E7C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE415 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE415    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE415_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE415_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE415_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE415_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE415_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE416_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E80)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE416 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE416    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE416_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE416_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE416_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE416_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE416_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE417_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E84)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE417 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE417    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE417_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE417_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE417_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE417_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE417_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE418_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E88)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE418 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE418    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE418_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE418_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE418_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE418_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE418_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE419_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E8C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE419 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE419    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE419_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE419_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE419_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE419_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE419_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE420_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E90)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE420 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE420    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE420_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE420_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE420_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE420_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE420_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE421_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E94)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE421 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE421    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE421_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE421_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE421_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE421_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE421_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE422_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E98)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE422 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE422    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE422_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE422_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE422_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE422_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE422_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE423_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2E9C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE423 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE423    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE423_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE423_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE423_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE423_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE423_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE424_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EA0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE424 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE424    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE424_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE424_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE424_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE424_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE424_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE425_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EA4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE425 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE425    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE425_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE425_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE425_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE425_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE425_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE426_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EA8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE426 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE426    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE426_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE426_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE426_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE426_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE426_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE427_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EAC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE427 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE427    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE427_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE427_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE427_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE427_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE427_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE428_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EB0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE428 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE428    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE428_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE428_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE428_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE428_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE428_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE429_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EB4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE429 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE429    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE429_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE429_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE429_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE429_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE429_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE430_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EB8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE430 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE430    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE430_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE430_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE430_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE430_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE430_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE431_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EBC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE431 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE431    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE431_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE431_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE431_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE431_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE431_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE432_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EC0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE432 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE432    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE432_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE432_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE432_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE432_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE432_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE433_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EC4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE433 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE433    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE433_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE433_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE433_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE433_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE433_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE434_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EC8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE434 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE434    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE434_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE434_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE434_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE434_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE434_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE435_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2ECC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE435 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE435    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE435_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE435_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE435_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE435_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE435_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE436_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2ED0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE436 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE436    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE436_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE436_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE436_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE436_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE436_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE437_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2ED4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE437 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE437    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE437_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE437_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE437_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE437_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE437_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE438_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2ED8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE438 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE438    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE438_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE438_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE438_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE438_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE438_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE439_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EDC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE439 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE439    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE439_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE439_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE439_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE439_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE439_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE440_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EE0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE440 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE440    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE440_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE440_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE440_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE440_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE440_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE441_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EE4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE441 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE441    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE441_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE441_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE441_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE441_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE441_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE442_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EE8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE442 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE442    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE442_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE442_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE442_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE442_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE442_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE443_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EEC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE443 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE443    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE443_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE443_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE443_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE443_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE443_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE444_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EF0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE444 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE444    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE444_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE444_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE444_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE444_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE444_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE445_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EF4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE445 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE445    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE445_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE445_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE445_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE445_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE445_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE446_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EF8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE446 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE446    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE446_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE446_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE446_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE446_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE446_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE447_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2EFC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE447 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE447    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE447_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE447_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE447_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE447_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE447_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE448_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F00)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE448 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE448    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE448_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE448_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE448_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE448_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE448_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE449_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F04)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE449 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE449    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE449_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE449_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE449_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE449_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE449_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE450_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F08)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE450 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE450    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE450_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE450_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE450_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE450_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE450_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE451_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F0C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE451 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE451    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE451_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE451_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE451_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE451_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE451_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE452_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F10)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE452 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE452    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE452_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE452_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE452_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE452_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE452_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE453_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F14)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE453 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE453    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE453_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE453_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE453_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE453_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE453_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE454_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F18)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE454 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE454    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE454_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE454_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE454_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE454_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE454_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE455_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F1C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE455 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE455    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE455_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE455_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE455_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE455_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE455_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE456_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F20)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE456 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE456    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE456_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE456_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE456_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE456_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE456_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE457_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F24)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE457 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE457    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE457_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE457_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE457_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE457_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE457_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE458_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F28)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE458 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE458    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE458_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE458_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE458_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE458_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE458_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE459_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F2C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE459 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE459    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE459_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE459_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE459_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE459_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE459_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE460_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F30)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE460 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE460    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE460_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE460_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE460_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE460_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE460_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE461_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F34)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE461 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE461    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE461_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE461_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE461_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE461_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE461_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE462_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F38)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE462 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE462    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE462_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE462_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE462_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE462_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE462_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE463_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F3C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE463 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE463    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE463_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE463_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE463_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE463_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE463_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE464_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F40)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE464 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE464    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE464_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE464_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE464_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE464_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE464_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE465_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F44)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE465 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE465    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE465_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE465_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE465_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE465_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE465_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE466_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F48)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE466 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE466    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE466_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE466_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE466_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE466_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE466_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE467_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F4C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE467 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE467    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE467_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE467_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE467_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE467_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE467_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE468_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F50)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE468 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE468    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE468_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE468_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE468_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE468_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE468_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE469_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F54)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE469 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE469    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE469_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE469_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE469_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE469_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE469_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE470_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F58)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE470 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE470    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE470_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE470_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE470_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE470_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE470_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE471_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F5C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE471 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE471    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE471_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE471_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE471_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE471_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE471_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE472_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F60)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE472 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE472    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE472_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE472_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE472_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE472_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE472_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE473_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F64)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE473 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE473    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE473_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE473_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE473_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE473_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE473_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE474_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F68)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE474 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE474    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE474_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE474_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE474_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE474_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE474_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE475_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F6C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE475 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE475    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE475_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE475_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE475_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE475_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE475_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE476_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F70)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE476 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE476    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE476_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE476_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE476_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE476_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE476_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE477_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F74)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE477 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE477    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE477_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE477_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE477_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE477_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE477_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE478_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F78)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE478 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE478    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE478_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE478_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE478_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE478_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE478_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE479_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F7C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE479 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE479    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE479_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE479_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE479_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE479_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE479_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE480_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F80)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE480 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE480    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE480_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE480_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE480_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE480_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE480_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE481_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F84)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE481 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE481    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE481_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE481_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE481_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE481_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE481_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE482_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F88)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE482 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE482    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE482_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE482_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE482_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE482_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE482_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE483_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F8C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE483 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE483    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE483_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE483_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE483_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE483_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE483_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE484_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F90)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE484 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE484    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE484_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE484_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE484_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE484_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE484_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE485_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F94)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE485 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE485    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE485_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE485_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE485_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE485_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE485_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE486_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F98)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE486 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE486    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE486_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE486_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE486_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE486_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE486_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE487_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2F9C)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE487 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE487    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE487_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE487_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE487_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE487_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE487_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE488_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FA0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE488 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE488    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE488_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE488_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE488_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE488_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE488_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE489_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FA4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE489 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE489    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE489_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE489_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE489_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE489_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE489_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE490_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FA8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE490 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE490    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE490_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE490_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE490_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE490_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE490_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE491_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FAC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE491 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE491    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE491_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE491_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE491_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE491_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE491_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE492_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FB0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE492 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE492    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE492_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE492_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE492_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE492_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE492_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE493_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FB4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE493 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE493    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE493_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE493_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE493_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE493_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE493_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE494_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FB8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE494 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE494    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE494_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE494_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE494_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE494_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE494_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE495_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FBC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE495 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE495    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE495_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE495_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE495_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE495_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE495_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE496_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FC0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE496 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE496    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE496_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE496_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE496_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE496_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE496_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE497_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FC4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE497 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE497    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE497_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE497_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE497_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE497_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE497_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE498_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FC8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE498 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE498    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE498_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE498_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE498_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE498_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE498_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE499_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FCC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE499 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE499    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE499_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE499_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE499_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE499_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE499_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE500_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FD0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE500 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE500    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE500_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE500_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE500_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE500_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE500_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE501_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FD4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE501 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE501    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE501_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE501_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE501_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE501_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE501_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE502_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FD8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE502 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE502    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE502_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE502_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE502_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE502_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE502_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE503_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FDC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE503 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE503    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE503_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE503_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE503_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE503_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE503_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE504_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FE0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE504 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE504    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE504_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE504_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE504_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE504_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE504_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE505_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FE4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE505 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE505    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE505_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE505_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE505_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE505_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE505_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE506_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FE8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE506 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE506    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE506_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE506_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE506_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE506_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE506_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE507_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FEC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE507 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE507    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE507_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE507_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE507_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE507_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE507_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE508_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FF0)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE508 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE508    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE508_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE508_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE508_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE508_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE508_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE509_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FF4)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE509 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE509    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE509_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE509_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE509_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE509_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE509_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE510_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FF8)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE510 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE510    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE510_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE510_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE510_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE510_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE510_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE511_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x2FFC)
/* PCIE_RC_GEN2_PCIE_MSIX_CAUSE511 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: ****.*/
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE511    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE511_M  ((PCIE_RC_GEN2_PCIE_MSIX_CAUSE511_V)<<(PCIE_RC_GEN2_PCIE_MSIX_CAUSE511_S))
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE511_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_CAUSE511_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_PENDING0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3000)
/* PCIE_RC_GEN2_PCIE_MSIX_PENDING0 : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Represents MSI-X vector 15~0 Pending bits. Hardware will auto clear correspondin
g bit after MSI-X interrupt send to PCIe Host. Strongly suggest Software not wri
te this field..*/
#define PCIE_RC_GEN2_PCIE_MSIX_PENDING0    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_MSIX_PENDING0_M  ((PCIE_RC_GEN2_PCIE_MSIX_PENDING0_V)<<(PCIE_RC_GEN2_PCIE_MSIX_PENDING0_S))
#define PCIE_RC_GEN2_PCIE_MSIX_PENDING0_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_PENDING0_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_PSET0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3020)
/* PCIE_RC_GEN2_PCIE_MSIX_PSET0 : WT ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Write 1 to bit 15~0 set MSI-X vector 15~0 Pending bit..*/
#define PCIE_RC_GEN2_PCIE_MSIX_PSET0    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_MSIX_PSET0_M  ((PCIE_RC_GEN2_PCIE_MSIX_PSET0_V)<<(PCIE_RC_GEN2_PCIE_MSIX_PSET0_S))
#define PCIE_RC_GEN2_PCIE_MSIX_PSET0_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_PSET0_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_PCLR0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3040)
/* PCIE_RC_GEN2_PCIE_MSIX_PCLR0 : WT ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Write 1 to bit 15~0 clear MSI-X vector 15~0 Pending bit..*/
#define PCIE_RC_GEN2_PCIE_MSIX_PCLR0    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_MSIX_PCLR0_M  ((PCIE_RC_GEN2_PCIE_MSIX_PCLR0_V)<<(PCIE_RC_GEN2_PCIE_MSIX_PCLR0_S))
#define PCIE_RC_GEN2_PCIE_MSIX_PCLR0_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_PCLR0_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3100)
/* PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRL : R/W ;bitpos:[31:12] ;default: 20'h0 ; */
/*description: Configures the PCIe to AXI Address Translate Table n translated AXI start addres
s bit [31:12] to hold MSIX Message.*/
#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRL    0x000FFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRL_M  ((PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRL_V)<<(PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRL_S))
#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRL_V  0xFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRL_S  12

#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRU_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3104)
/* PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRU : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the PCIe to AXI Address Translate Table n translated AXI start addres
s bit [63:32]. to hold MSIX Message.*/
#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRU    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRU_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_MSIX_MSG_PCIE2AXI_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_MSIX_TBL_NUMBER_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3108)
/* PCIE_RC_GEN2_PCIE_MSIX_TBL_PCIE2AXI_ADDRU : R/W ;bitpos:[11:0] ;default: 12'h0 ; */
/*description: Configure Number of MSIX TABLE to hold.*/
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_PCIE2AXI_ADDRU    0x00000FFF
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_PCIE2AXI_ADDRU_M  ((PCIE_RC_GEN2_PCIE_MSIX_TBL_PCIE2AXI_ADDRU_V)<<(PCIE_RC_GEN2_PCIE_MSIX_TBL_PCIE2AXI_ADDRU_S))
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_PCIE2AXI_ADDRU_V  0xFFF
#define PCIE_RC_GEN2_PCIE_MSIX_TBL_PCIE2AXI_ADDRU_S  0

#define PCIE_RC_GEN2_PCIE_CORE_FREQ_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3400)
/* PCIE_RC_GEN2_PCIE_CORE_FREQ : R/W ;bitpos:[21:0] ;default: 22'h78 ; */
/*description: Represents the frequency of PCIe Controller core_clk, unit is MHz..*/
#define PCIE_RC_GEN2_PCIE_CORE_FREQ    0x003FFFFF
#define PCIE_RC_GEN2_PCIE_CORE_FREQ_M  ((PCIE_RC_GEN2_PCIE_CORE_FREQ_V)<<(PCIE_RC_GEN2_PCIE_CORE_FREQ_S))
#define PCIE_RC_GEN2_PCIE_CORE_FREQ_V  0x3FFFFF
#define PCIE_RC_GEN2_PCIE_CORE_FREQ_S  0

#define PCIE_RC_GEN2_PCIE_CORE_REFCLK_CTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3404)
/* PCIE_RC_GEN2_PCIE_CLKREQ_OEN_FORCE : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Configure whether to take CLKREQ_OEN from PHY and Controller (this is useful for
 initial bringup).*/
#define PCIE_RC_GEN2_PCIE_CLKREQ_OEN_FORCE    (BIT(7))
#define PCIE_RC_GEN2_PCIE_CLKREQ_OEN_FORCE_M  (BIT(7))
#define PCIE_RC_GEN2_PCIE_CLKREQ_OEN_FORCE_V  0x1
#define PCIE_RC_GEN2_PCIE_CLKREQ_OEN_FORCE_S  7
/* PCIE_RC_GEN2_PCIE_CLKREQ_OEN_LEVEL : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: Configure the CLKREQ_OEN force level when using register to control instead of t
aking from PHY and Controller.*/
#define PCIE_RC_GEN2_PCIE_CLKREQ_OEN_LEVEL    (BIT(6))
#define PCIE_RC_GEN2_PCIE_CLKREQ_OEN_LEVEL_M  (BIT(6))
#define PCIE_RC_GEN2_PCIE_CLKREQ_OEN_LEVEL_V  0x1
#define PCIE_RC_GEN2_PCIE_CLKREQ_OEN_LEVEL_S  6
/* PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_FORCE : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: Configure whether to take CLKREQ from PIN (this is useful for initial bringup).*/
#define PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_FORCE    (BIT(5))
#define PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_FORCE_M  (BIT(5))
#define PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_FORCE_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_FORCE_S  5
/* PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_LEVEL : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: Configure the clkreq_in force level when using register to control instead of ta
king from CLKREQ PIN.*/
#define PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_LEVEL    (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_LEVEL_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_LEVEL_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_CLKREQ_IN_LEVEL_S  4
/* PCIE_RC_GEN2_PCIE_PHY_CKREF_SOURCE : R/W ;bitpos:[3:2] ;default: 2'h0 ; */
/*description: Configures PHY refclk source.; 2'b00: PLL_CKREF_INNER; 2'b01: CKREFP/N; 2'b10: P
LL_CKREF_INNER as input, CKREFP/N as output when CLKREQ=1; 2'b11: N/A.*/
#define PCIE_RC_GEN2_PCIE_PHY_CKREF_SOURCE    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_CKREF_SOURCE_M  ((PCIE_RC_GEN2_PCIE_PHY_CKREF_SOURCE_V)<<(PCIE_RC_GEN2_PCIE_PHY_CKREF_SOURCE_S))
#define PCIE_RC_GEN2_PCIE_PHY_CKREF_SOURCE_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_CKREF_SOURCE_S  2
/* PCIE_RC_GEN2_PCIE_PHY_CLK_SEL : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures PHY clk select; 2'b00: 24Mhz ; 2'b01: 25Mhz; 2'b10: 100Mhz; 2'b11: N/
A.*/
#define PCIE_RC_GEN2_PCIE_PHY_CLK_SEL    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_CLK_SEL_M  ((PCIE_RC_GEN2_PCIE_PHY_CLK_SEL_V)<<(PCIE_RC_GEN2_PCIE_PHY_CLK_SEL_S))
#define PCIE_RC_GEN2_PCIE_PHY_CLK_SEL_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_CLK_SEL_S  0

#define PCIE_RC_GEN2_PCIE_CLK_FORCE_ON_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3408)
/* PCIE_RC_GEN2_PCIE_PMU_POWER_FORCE_ON : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: Configures whether to force on PCIe pmu power.; 0: Not force on; 1: Force on.*/
#define PCIE_RC_GEN2_PCIE_PMU_POWER_FORCE_ON    (BIT(31))
#define PCIE_RC_GEN2_PCIE_PMU_POWER_FORCE_ON_M  (BIT(31))
#define PCIE_RC_GEN2_PCIE_PMU_POWER_FORCE_ON_V  0x1
#define PCIE_RC_GEN2_PCIE_PMU_POWER_FORCE_ON_S  31
/* PCIE_RC_GEN2_PCIE_CLK_FORCE_ON : R/W ;bitpos:[30:0] ;default: 31'h0 ; */
/*description: Configures whether to force on related clock. For every bit:; [0]: N/A; [1]: If
set to 1, force on p2a memory write clock; [2]: If set to 1, force on p2a memory
 read clock; [3]: If set to 1, force on a2p memory write clock; [4]: If set to 1
, force on a2p memory read clock; [5]: If set to 1, force on tx memory write clo
ck; [6]: If set to 1, force on tx memory read clock; [7]: If set to 1, force on
rx memory write clock; [8]: If set to 1, force on rx memory read clock; [24]: If
 set to 1, force on apb_clk used for sub-modules logic; [25]: If set to 1, force
 on axi_clk used for sub-modules logic; [26]: If set to 1, force on tl_clk used
for sub-modules logic; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_CLK_FORCE_ON    0x7FFFFFFF
#define PCIE_RC_GEN2_PCIE_CLK_FORCE_ON_M  ((PCIE_RC_GEN2_PCIE_CLK_FORCE_ON_V)<<(PCIE_RC_GEN2_PCIE_CLK_FORCE_ON_S))
#define PCIE_RC_GEN2_PCIE_CLK_FORCE_ON_V  0x7FFFFFFF
#define PCIE_RC_GEN2_PCIE_CLK_FORCE_ON_S  0

#define PCIE_RC_GEN2_PCIE_FLR_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3410)
/* PCIE_RC_GEN2_PCIE_FLR_ACK : WT ;bitpos:[16] ;default: 1'h0 ; */
/*description: Write 1 to send a pulse on Controller interface signal local_pf_flr_ack, means r
eady to perform a function-level reset..*/
#define PCIE_RC_GEN2_PCIE_FLR_ACK    (BIT(16))
#define PCIE_RC_GEN2_PCIE_FLR_ACK_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_FLR_ACK_V  0x1
#define PCIE_RC_GEN2_PCIE_FLR_ACK_S  16
/* PCIE_RC_GEN2_PCIE_FLR_REQ : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents the value of Controller interface signal local_pf_flr_req.; 0: No Fun
ction Level Reset is requested; 1: Function Level Reset is requested.*/
#define PCIE_RC_GEN2_PCIE_FLR_REQ    (BIT(0))
#define PCIE_RC_GEN2_PCIE_FLR_REQ_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_FLR_REQ_V  0x1
#define PCIE_RC_GEN2_PCIE_FLR_REQ_S  0

#define PCIE_RC_GEN2_PCIE_TEST_IN0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3420)
/* PCIE_RC_GEN2_PCIE_TEST_IN0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the value of Controller interface signal test_in[31:0]. For every bit
:; [31:30]: Reserved; [29]: If set to 1, enable internal loopback at the PIPE in
terface level, connecting the TX data interface to the RX data interface; [28]:
If set to 1, the LTSSM will use a simplified sequence to reach L0 (Detect, Polli
ng, Recovery, and L0), this enables the Core to emulate a link-up condition in t
he absence of a link partner, allowing a loopback mechanism to be used; [27:16]
Reserved; [15]: If set to 1, force LTSSM to stay in recovery.receiverlock; [14]:
 If set to 1, filter out exits from electrical in Polling.Compliance during rate
 change; [13]: If set to 1, disable reporting of equalization problems; [12]: Re
served; [11]: If set to 1, force receiver detection on all implemented lanes in
Detect.Active; [10]: If set to 1, force entry in Polling.Compliance from Polling
.active; [9]:  If set to 1, disable entry in Polling.Compliance from Polling.act
ive (does not apply if the TS1 compliance receive bit is set); [8]: Reserved; [7
]: Set compliance receive bit in transmitted TS1 ordered set; [6]: If set to 1,
disable scrambling (Gen1/Gen2 modes only); [5:3]: Reserved; [2]: If set to 1, di
rect the Link to loopback (in Master mode), when the Core is in Loopback Master
mode, then it transmits a Modified Compliance Pattern in Loopback.Active; [1]: I
f set to 1, disable all low power state negotiation; [0]: Reserved.*/
#define PCIE_RC_GEN2_PCIE_TEST_IN0    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TEST_IN0_M  ((PCIE_RC_GEN2_PCIE_TEST_IN0_V)<<(PCIE_RC_GEN2_PCIE_TEST_IN0_S))
#define PCIE_RC_GEN2_PCIE_TEST_IN0_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TEST_IN0_S  0

#define PCIE_RC_GEN2_PCIE_TEST_IN1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3424)
/* PCIE_RC_GEN2_PCIE_TEST_IN1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the value of Controller interface signal test_in[63:32]. For every bi
t:; [31:25]: Reserved; [24]: If set to 1, use Max Payload Size can be supported
as the Max Payload Size value; [23:0]: Reserved.*/
#define PCIE_RC_GEN2_PCIE_TEST_IN1    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TEST_IN1_M  ((PCIE_RC_GEN2_PCIE_TEST_IN1_V)<<(PCIE_RC_GEN2_PCIE_TEST_IN1_S))
#define PCIE_RC_GEN2_PCIE_TEST_IN1_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_TEST_IN1_S  0

#define PCIE_RC_GEN2_PCIE_MSIC_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3700)
/* PCIE_RC_GEN2_PCIE_LTSSM : RO ;bitpos:[28:24] ;default: 5'h0 ; */
/*description: Represents current LTSSM status.; 0x0: detect.quiet; 0x1: detect.active; 0x2: po
lling.active; 0x3: polling.compliance; 0x4: polling.configuration; 0x5: config.l
inkwidthstart; 0x6: config.linkwidthaccept; 0x7: config.lanenumwait; 0x8: config
.lanenumaccept; 0x9: config.complete; 0xa: config.idle; 0xb: recovery.receiverlo
ck; 0xc: recovery.equalization; 0xd: recovery.speed; 0xe: recovery.receiverconfi
g; 0xf: recovery.idle; 0x10: L0; 0x11: L0s; 0x12: L1.entry; 0x13: L1.idle; 0x14:
 L2.idle/L2.transmitwake; 0x16: disable; 0x17: loopback.entry; 0x18: loopback.ac
tive; 0x19: loopback.exit; 0x1a: hotreset; Others: reserved.*/
#define PCIE_RC_GEN2_PCIE_LTSSM    0x0000001F
#define PCIE_RC_GEN2_PCIE_LTSSM_M  ((PCIE_RC_GEN2_PCIE_LTSSM_V)<<(PCIE_RC_GEN2_PCIE_LTSSM_S))
#define PCIE_RC_GEN2_PCIE_LTSSM_V  0x1F
#define PCIE_RC_GEN2_PCIE_LTSSM_S  24
/* PCIE_RC_GEN2_PCIE_PCLK_SWITCH_SEL : R/W ;bitpos:[21] ;default: 1'h0 ; */
/*description: Configures whether or not use APB clock as pclk (PCIe PL clock), when pclk is sw
itched by software, only use for debug.; 0 : Use PHY PLL clock as pclk; 1 : Use
APB clock as pclk.*/
#define PCIE_RC_GEN2_PCIE_PCLK_SWITCH_SEL    (BIT(21))
#define PCIE_RC_GEN2_PCIE_PCLK_SWITCH_SEL_M  (BIT(21))
#define PCIE_RC_GEN2_PCIE_PCLK_SWITCH_SEL_V  0x1
#define PCIE_RC_GEN2_PCIE_PCLK_SWITCH_SEL_S  21
/* PCIE_RC_GEN2_PCIE_PCLK_SWITCH_BY_SW : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Configures whether or not pclk (PCIe PL clock) is switched by software, only use
 for debug.; 0 : Switched by hardware; 1 : Switched by software.*/
#define PCIE_RC_GEN2_PCIE_PCLK_SWITCH_BY_SW    (BIT(20))
#define PCIE_RC_GEN2_PCIE_PCLK_SWITCH_BY_SW_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_PCLK_SWITCH_BY_SW_V  0x1
#define PCIE_RC_GEN2_PCIE_PCLK_SWITCH_BY_SW_S  20
/* PCIE_RC_GEN2_PCIE_PHY_PCLK_RDY : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not clock from PHY PLL is ready.; 0: Not ready; 1: Ready.*/
#define PCIE_RC_GEN2_PCIE_PHY_PCLK_RDY    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_PCLK_RDY_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_PCLK_RDY_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PCLK_RDY_S  16
/* PCIE_RC_GEN2_PCIE_RESET_STA : RO ;bitpos:[12] ;default: 1'h1 ; */
/*description: Represents whether or not PCIe IP is in reset state.; 0: In reset state; 1: Rese
t release.*/
#define PCIE_RC_GEN2_PCIE_RESET_STA    (BIT(12))
#define PCIE_RC_GEN2_PCIE_RESET_STA_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_RESET_STA_V  0x1
#define PCIE_RC_GEN2_PCIE_RESET_STA_S  12
/* PCIE_RC_GEN2_PCIE_PMU_STA : RO ;bitpos:[11:8] ;default: 4'h5 ; */
/*description: Represents the PCIe pmu status. For every bit:; [0]: 0 means pmu disable clock,
1 means pmu enable clock; [1]: 0 means pmu disable isolation, 1 means pmu enable
 isolation; [2]: 0 means pmu enable reset, 1 means pmu disable reset; [3]: 0 mea
ns pmu enable power, 1 means pmu disable power.*/
#define PCIE_RC_GEN2_PCIE_PMU_STA    0x0000000F
#define PCIE_RC_GEN2_PCIE_PMU_STA_M  ((PCIE_RC_GEN2_PCIE_PMU_STA_V)<<(PCIE_RC_GEN2_PCIE_PMU_STA_S))
#define PCIE_RC_GEN2_PCIE_PMU_STA_V  0xF
#define PCIE_RC_GEN2_PCIE_PMU_STA_S  8
/* PCIE_RC_GEN2_PCIE_PERST_N : R/W ;bitpos:[1] ;default: 1'b1 ; */
/*description: Configures whether or not to hold PERST# Pin reset PCIe PHY. 0 : Reset 1 : No ef
fect.*/
#define PCIE_RC_GEN2_PCIE_PERST_N    (BIT(1))
#define PCIE_RC_GEN2_PCIE_PERST_N_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_PERST_N_V  0x1
#define PCIE_RC_GEN2_PCIE_PERST_N_S  1
/* PCIE_RC_GEN2_PCIE_PHY_RST_N : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: Configures whether or not reset PCIe PHY.; 0 : Reset; 1 : No effect.*/
#define PCIE_RC_GEN2_PCIE_PHY_RST_N    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_RST_N_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_RST_N_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RST_N_S  0

#define PCIE_RC_GEN2_PCIE_PHY_TEST0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3800)
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_RESETN : R/W ;bitpos:[28] ;default: 1'h0 ; */
/*description: Configures whether or not bypass PMA reset.; 0: PMA is reset by reset pin; 1: PM
A is not controlled by reset pin.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RESETN    (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RESETN_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RESETN_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RESETN_S  28
/* PCIE_RC_GEN2_PCIE_PHY_BIST_OUT_SEL : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Configures the mux of BIST_OUT[1:0].; 0: BIST_OUT[0] is the result of bist finis
h and BIST_OUT[1] is the result of bist done; 1: BIST_OUT[0] is the result of re
ceiver detection finish and BIST_OUT[1] is the result of receiver detection resu
lt.*/
#define PCIE_RC_GEN2_PCIE_PHY_BIST_OUT_SEL    (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_BIST_OUT_SEL_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_BIST_OUT_SEL_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BIST_OUT_SEL_S  20
/* PCIE_RC_GEN2_PCIE_PHY_CLK_OUT_SEL : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures which internal clock connect to output test_clk.; 0: TXPLL clock/4; 1
: RXCDR clock/4.*/
#define PCIE_RC_GEN2_PCIE_PHY_CLK_OUT_SEL    (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_CLK_OUT_SEL_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_CLK_OUT_SEL_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_CLK_OUT_SEL_S  12
/* PCIE_RC_GEN2_PCIE_PHY_NEAR_END_LP_EN : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not enable PHY Near end loop back in BIST mode.; 0: Not en
able; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_PHY_NEAR_END_LP_EN    (BIT(11))
#define PCIE_RC_GEN2_PCIE_PHY_NEAR_END_LP_EN_M  (BIT(11))
#define PCIE_RC_GEN2_PCIE_PHY_NEAR_END_LP_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_NEAR_END_LP_EN_S  11
/* PCIE_RC_GEN2_PCIE_PHY_LB_TEST : R/W ;bitpos:[10:8] ;default: 3'h0 ; */
/*description: Configures the time for bist test..*/
#define PCIE_RC_GEN2_PCIE_PHY_LB_TEST    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_LB_TEST_M  ((PCIE_RC_GEN2_PCIE_PHY_LB_TEST_V)<<(PCIE_RC_GEN2_PCIE_PHY_LB_TEST_S))
#define PCIE_RC_GEN2_PCIE_PHY_LB_TEST_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_LB_TEST_S  8
/* PCIE_RC_GEN2_PCIE_PHY_BIST_MODE : R/W ;bitpos:[7:4] ;default: 4'h0 ; */
/*description: Configures signal of bist_mode, mux with the port of BIST_MODE..*/
#define PCIE_RC_GEN2_PCIE_PHY_BIST_MODE    0x0000000F
#define PCIE_RC_GEN2_PCIE_PHY_BIST_MODE_M  ((PCIE_RC_GEN2_PCIE_PHY_BIST_MODE_V)<<(PCIE_RC_GEN2_PCIE_PHY_BIST_MODE_S))
#define PCIE_RC_GEN2_PCIE_PHY_BIST_MODE_V  0xF
#define PCIE_RC_GEN2_PCIE_PHY_BIST_MODE_S  4
/* PCIE_RC_GEN2_PCIE_PHY_TEST_SEL : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Configures the digital test signal.; 0x0: Input Reference Clock; 0x1: PLL Loopba
ck Clock; 0x2: PLL Locked; 0x3: RX PCL enable; 0x4: RX CDR enable; 0x5: RX CTLE
enable; 0x6: CDR overflow; 0x7: RX ready; 0x8: RX LFPS idle detect; 0x9: RX PCIE
 idle detect; 0xa: RX SATA idle detect; 0xb: RX super speed detect; 0xc: Iddq_en
; 0xd: Rterm detect; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_PHY_TEST_SEL    0x0000000F
#define PCIE_RC_GEN2_PCIE_PHY_TEST_SEL_M  ((PCIE_RC_GEN2_PCIE_PHY_TEST_SEL_V)<<(PCIE_RC_GEN2_PCIE_PHY_TEST_SEL_S))
#define PCIE_RC_GEN2_PCIE_PHY_TEST_SEL_V  0xF
#define PCIE_RC_GEN2_PCIE_PHY_TEST_SEL_S  0

#define PCIE_RC_GEN2_PCIE_PHY_TEST1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3804)
/* PCIE_RC_GEN2_PCIE_PHY_TESTO_SEL : R/W ;bitpos:[20:13] ;default: 8'h0 ; */
/*description: Configures the select of test singals..*/
#define PCIE_RC_GEN2_PCIE_PHY_TESTO_SEL    0x000000FF
#define PCIE_RC_GEN2_PCIE_PHY_TESTO_SEL_M  ((PCIE_RC_GEN2_PCIE_PHY_TESTO_SEL_V)<<(PCIE_RC_GEN2_PCIE_PHY_TESTO_SEL_S))
#define PCIE_RC_GEN2_PCIE_PHY_TESTO_SEL_V  0xFF
#define PCIE_RC_GEN2_PCIE_PHY_TESTO_SEL_S  13
/* PCIE_RC_GEN2_PCIE_PHY_TX_SWING : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures signal of tx_swing, mux with the port of TX_SWING..*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_SWING    (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_TX_SWING_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_TX_SWING_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_TX_SWING_S  12
/* PCIE_RC_GEN2_PCIE_PHY_TX_DEEMPH : R/W ;bitpos:[10:8] ;default: 3'h0 ; */
/*description: Configures signal of tx_deemph, mux with the port of TX_DEEMPH..*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_DEEMPH    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_TX_DEEMPH_M  ((PCIE_RC_GEN2_PCIE_PHY_TX_DEEMPH_V)<<(PCIE_RC_GEN2_PCIE_PHY_TX_DEEMPH_S))
#define PCIE_RC_GEN2_PCIE_PHY_TX_DEEMPH_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_TX_DEEMPH_S  8
/* PCIE_RC_GEN2_PCIE_PHY_TX_MARGIN : R/W ;bitpos:[6:4] ;default: 3'h0 ; */
/*description: Configures signal of tx_margin, mux with the port of TX_MARGIN..*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_MARGIN    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_TX_MARGIN_M  ((PCIE_RC_GEN2_PCIE_PHY_TX_MARGIN_V)<<(PCIE_RC_GEN2_PCIE_PHY_TX_MARGIN_S))
#define PCIE_RC_GEN2_PCIE_PHY_TX_MARGIN_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_TX_MARGIN_S  4
/* PCIE_RC_GEN2_PCIE_PHY_TX_SWING_COMP : R/W ;bitpos:[3:0] ;default: 4'h8 ; */
/*description: Configures TX boost level adjust signal.; 0x0: minimum; 0xf: maximum.*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_SWING_COMP    0x0000000F
#define PCIE_RC_GEN2_PCIE_PHY_TX_SWING_COMP_M  ((PCIE_RC_GEN2_PCIE_PHY_TX_SWING_COMP_V)<<(PCIE_RC_GEN2_PCIE_PHY_TX_SWING_COMP_S))
#define PCIE_RC_GEN2_PCIE_PHY_TX_SWING_COMP_V  0xF
#define PCIE_RC_GEN2_PCIE_PHY_TX_SWING_COMP_S  0

#define PCIE_RC_GEN2_PCIE_PHY_PCS_CTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3808)
/* PCIE_RC_GEN2_PCIE_PHY_BEACON_TIMEOUT_SEL : R/W ;bitpos:[22] ;default: 1'h0 ; */
/*description: Configures PCIE beacon timeout select..*/
#define PCIE_RC_GEN2_PCIE_PHY_BEACON_TIMEOUT_SEL    (BIT(22))
#define PCIE_RC_GEN2_PCIE_PHY_BEACON_TIMEOUT_SEL_M  (BIT(22))
#define PCIE_RC_GEN2_PCIE_PHY_BEACON_TIMEOUT_SEL_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BEACON_TIMEOUT_SEL_S  22
/* PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN : R/W ;bitpos:[13] ;default: 1'h0 ; */
/*description: Configures signal of cdr_fl_en..*/
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN    (BIT(13))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN_M  (BIT(13))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN_S  13
/* PCIE_RC_GEN2_PCIE_PHY_CDR_LOOP_MANUAL : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures mux control signal for cdr_fl_en.; 0: cdr_fl_en is controlled by rx_r
dy; 1: cdr_fl_en come from register PCIE_PHY_CDR_FL_EN.*/
#define PCIE_RC_GEN2_PCIE_PHY_CDR_LOOP_MANUAL    (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_LOOP_MANUAL_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_LOOP_MANUAL_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_CDR_LOOP_MANUAL_S  12
/* PCIE_RC_GEN2_PCIE_PHY_INV_RXCDRCLK : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: Configures whether or not invert the clock rx_pck.; 0: Not invert; 1: Invert.*/
#define PCIE_RC_GEN2_PCIE_PHY_INV_RXCDRCLK    (BIT(5))
#define PCIE_RC_GEN2_PCIE_PHY_INV_RXCDRCLK_M  (BIT(5))
#define PCIE_RC_GEN2_PCIE_PHY_INV_RXCDRCLK_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_INV_RXCDRCLK_S  5
/* PCIE_RC_GEN2_PCIE_PHY_INV_TXPLLCLK : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Configures whether or not invert the clock tx_pck.; 0: Not invert; 1: Invert.*/
#define PCIE_RC_GEN2_PCIE_PHY_INV_TXPLLCLK    (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_INV_TXPLLCLK_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_INV_TXPLLCLK_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_INV_TXPLLCLK_S  4
/* PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_SEL : R/W ;bitpos:[1:0] ;default: 2'h2 ; */
/*description: Configures PMA data to PCS data valid delay time select.; 0x0: 1.28us; 0x1: 0.64
us; 0x2: 0.32us; 0x3: 0.16us.*/
#define PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_SEL    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_SEL_M  ((PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_SEL_V)<<(PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_SEL_S))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_SEL_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_SEL_S  0

#define PCIE_RC_GEN2_PCIE_PHY_PWDN_CTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x380C)
/* PCIE_RC_GEN2_PCIE_PHY_PWDN_CTRL : R/W ;bitpos:[9:0] ;default: 10'h3fe ; */
/*description: Configures whether or not PHY block power controlled by pwon* signals instead of
 PIPE signals. For every bit:; [0]: 0 means PHY block power controlled by PIPE s
ignals, 1 means PHY block power controlled by pwon* signals; [1]: connect to the
 port of ivref; [2]: connect to the pwon_tx_buf; [3]: connect to the pwon_pll; [
4]: connect to the pwon_idle_det; [5]: connect to the pwon_lfps_det; [6]: connec
t to the pwon_rx_buf; [7]: connect to the pwon_cdr; [8]: connect to the pwon_oob
_det; [9]: connect to the pwon_hs_det.*/
#define PCIE_RC_GEN2_PCIE_PHY_PWDN_CTRL    0x000003FF
#define PCIE_RC_GEN2_PCIE_PHY_PWDN_CTRL_M  ((PCIE_RC_GEN2_PCIE_PHY_PWDN_CTRL_V)<<(PCIE_RC_GEN2_PCIE_PHY_PWDN_CTRL_S))
#define PCIE_RC_GEN2_PCIE_PHY_PWDN_CTRL_V  0x3FF
#define PCIE_RC_GEN2_PCIE_PHY_PWDN_CTRL_S  0

#define PCIE_RC_GEN2_PCIE_PHY_RATE_CTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3810)
/* PCIE_RC_GEN2_PCIE_PHY_MODE : R/W ;bitpos:[14:12] ;default: 3'h0 ; */
/*description: Configures PHY work mode. For every bit:; bit [2]: Select the phy_mode control c
omes from PIPE interface or register, 0 means PIPE interface, 1 means register;
bit [1:0]: Control the phy_mode with register, mux with the port of phy_mode.*/
#define PCIE_RC_GEN2_PCIE_PHY_MODE    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_MODE_M  ((PCIE_RC_GEN2_PCIE_PHY_MODE_V)<<(PCIE_RC_GEN2_PCIE_PHY_MODE_S))
#define PCIE_RC_GEN2_PCIE_PHY_MODE_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_MODE_S  12
/* PCIE_RC_GEN2_PCIE_PHY_RATE : R/W ;bitpos:[10:8] ;default: 3'h0 ; */
/*description: Configures PHY work rate. For every bit:; bit [2]: Select the rate signal come f
rom PIPE interface or register, 0 means PIPE interface, 1 means register; bit [1
:0]: Control the pma_rate with register, mux with the port of RATE.*/
#define PCIE_RC_GEN2_PCIE_PHY_RATE    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_RATE_M  ((PCIE_RC_GEN2_PCIE_PHY_RATE_V)<<(PCIE_RC_GEN2_PCIE_PHY_RATE_S))
#define PCIE_RC_GEN2_PCIE_PHY_RATE_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_RATE_S  8
/* PCIE_RC_GEN2_PCIE_PHY_RX_RATE : R/W ;bitpos:[6:4] ;default: 3'h0 ; */
/*description: Configures PHY RX work rate. For every bit:; bit [2]: Select the rate signal com
e from PIPE interface or register, 0 means PIPE interface, 1 means register; bit
 [1:0]: Control the pma_rx_rate with register, mux with the port of RATE.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_RATE    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_RX_RATE_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_RATE_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_RATE_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_RATE_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_RX_RATE_S  4
/* PCIE_RC_GEN2_PCIE_PHY_TX_RATE : R/W ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Configures PHY TX work rate. For every bit:; bit [2]: Select the rate signal com
e from PIPE interface or register, 0 means PIPE interface, 1 means register; bit
 [1:0]: Control the pma_tx_rate with register, mux with the port of RATE.*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_RATE    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_TX_RATE_M  ((PCIE_RC_GEN2_PCIE_PHY_TX_RATE_V)<<(PCIE_RC_GEN2_PCIE_PHY_TX_RATE_S))
#define PCIE_RC_GEN2_PCIE_PHY_TX_RATE_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_TX_RATE_S  0

#define PCIE_RC_GEN2_PCIE_PHY_MSIC_CTRL0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3814)
/* PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME1 : R/W ;bitpos:[31:0] ;default: 32'h05080004 ; */
/*description: Configures PHY MSIC control. For every bit:; bit [1]: Select P1.1 or P1.2 entry
logic controlled by PWDN directly, 0 means controlled directly by PWON, 1 means
not controlled directly by PWDN; bit [2]: Connect to byps_length_enough; bit [3]
: Connect to gate_tx_pck_sel, used to control the delay PLL turnoff time; bit [6
]: Shorten the receiver detection time for simulation, 0 means no shorter, 1 mea
ns shortened; bit [7]: Select the source of control signal comes from register o
r port, 0 means tx_swing is controlled by TX_SWING port, 1 means tx_swing is con
trolled by register; bit [8]: Select the source of control signal comes from reg
ister or port, 0 means tx_deemph is controlled by TX_DEEMPH port, 1 means tx_dee
mph is controlled by register; bit [9]: Select the source of control signal come
s from register or port, 0 means tx_margin is controlled by TX_MARGIN port, 1 me
ans tx_margin is controlled by register; bit [10]: Bypass cdr_mode, 0 means not
bypass, 1 means bypass; bit [11]: Bypass the P1.2 low power status, 0 means supp
ort P1.2 low power status, 1 means not support P1.2 low power status; bit [13:12
]: Used to delay RX_SUPERSPEED signal to pcs; bit [14]: Select the source of con
trol signal come from register or port, 0 means bist_mode is controlled by BIST_
MODE port, 1 means bist_mode is controlled by register; bit [16:15]: Register si
gnal connect for CKREF_SRC_O; bit [17]: Select the source of control signal come
 from register or port, 0 means CKREF_SRC_O is controlled by CKREF_SRC port, 1 m
eans CKREF_SRC_O is controlled by register; bit [19:18]: Select the delay time f
or rx_electidle; bit [27]: Select the P1.1 or P1.2 exit logic, 0 means exit base
d on phy_status, 1 means exit based on PWDN; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME1    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME1_M  ((PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME1_V)<<(PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME1_S))
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME1_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME1_S  0

#define PCIE_RC_GEN2_PCIE_PHY_MSIC_CTRL1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3818)
/* PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_1 : R/W ;bitpos:[31:0] ;default: 32'h000c0000 ; */
/*description: Configures PHY MSIC control. For every bit:; bit [0]: Bypass the mode of pd_ck10
0m controlling CKDRV, 0 means CKDRV is on only in PCIE mode, 1 means CKDRV is co
ntrolled by ckref_src; bit [2:1]: CKDRV output slew rate adjust, 0x0 means fast,
 0x3 means slow; bit [3]: 50ohm termination disable signal in CKREP/N TX mode, 0
 means not disable, 1 means disable; bit [5:4]: Select signal of SSC direction,
0x0 means downward spread spectrum, 0x1 means upward spread spectrum, 0x2 means
intermediate spread spectrum, 0x3 is illegal; bit [7:6]: SSC offset compensation
, 0x0 means 0ppm, 0x1 means +500ppm, 0x2/0x3 means -500ppm; bit [8]: pll_rdy del
ay control when rate change, 0 means delay 3*TX_PCK relative to the falling edge
 of gate_tx_pck, 1 means delay about 20us relative to the falling edge of gate_t
x_pck; bit [9]: Select pll_lock to TX/RX, 0 means pll_lock_txrx is same to pll_l
ock_pcs, 1 means pll_lock_txrx is not controled by gate_tx_pck; bit [12:10]: PLL
 KVCO fine tuning signals, 0x0 means min, 0xf means max; bit [15:13]: PLL charge
 pump current adjust signals; bit [16]: PLL LPF R1 select signals; bit [17]: PLL
 bypass v2i LDO signals; bit [20]: CDR cpath bandwidth gain adjust, 0 means low
bandwidth, 1 means high bandwidth; Bit [22:21]: power_select, 0x0 means AVDH=3.3
V, 0x1 means AVDH=2.5V, 0x2 means AVDH=1.8V, 0x3 is illegal; bit [23]: cdr_gain_
h signal for CDR gain adjust; bit [24]: byps_rx_cdr_gain singal, 1 means select
cdr_gain_h.rx_cdr_trim<4>, 0 means select rate<0:1>; bit [25]: With bit[12:10] f
or PLL KVCO fine tuning signals; bit [26]: High speed clock frequency ratio sele
ct, 0 means no, 1 means div2; bit [27]: With rx_trim[5], loop clock frequency ra
tio select, 0x0 means 1, 0x1/0x2 means 1/ 2, 0x3 means 1/4; bit [29:28]: PLL kvc
o trim duration control signal, 0x0 means min, 0x3 means max; bit [30]: PLL kvco
 trim power down control signal, 0 means power down, 1 means power enable; bit [
31]: Bypass pll kvco trim; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_1    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_1_M  ((PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_1_V)<<(PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_1_S))
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_1_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_1_S  0

#define PCIE_RC_GEN2_PCIE_PHY_MSIC_CTRL2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x381C)
/* PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_2 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures PHY MSIC control. For every bit:; bit [0]: Invert the input signal CL
KREQ, 0 means not inverted, 1 means inverted; bit [1]: Disable the port RXELECID
LE_DISABLE control, 0 means the function of port RXELECIDLE_DISABLE is enabled,
1 means the function of port RXELECIDLE_DISABLE is disabled; bit [2]: Disable th
e port TXCOMMOMMODE_DISABLE control, 0 means the function of port TXCOMMOMMODE_D
ISABLE is enabled, 1 means the function of port TXCOMMOMMODE_DISABLE is disabled
; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_2    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_2_M  ((PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_2_V)<<(PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_2_S))
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_2_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PHY_UNUSED_NAME2_2_S  0

#define PCIE_RC_GEN2_PCIE_PHY_SSC_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3900)
/* PCIE_RC_GEN2_PCIE_PHY_SSC_CONTROL : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Configures whether or not enable SSC; 0: In U3, SSC is off; 1: In U3, SSC is on.*/
#define PCIE_RC_GEN2_PCIE_PHY_SSC_CONTROL    (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_SSC_CONTROL_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_SSC_CONTROL_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_SSC_CONTROL_S  20
/* PCIE_RC_GEN2_PCIE_PHY_SSC_PPM : R/W ;bitpos:[19:16] ;default: 4'h9 ; */
/*description: Configures PLL SCC ppm adjust signal by step 500ppm..*/
#define PCIE_RC_GEN2_PCIE_PHY_SSC_PPM    0x0000000F
#define PCIE_RC_GEN2_PCIE_PHY_SSC_PPM_M  ((PCIE_RC_GEN2_PCIE_PHY_SSC_PPM_V)<<(PCIE_RC_GEN2_PCIE_PHY_SSC_PPM_S))
#define PCIE_RC_GEN2_PCIE_PHY_SSC_PPM_V  0xF
#define PCIE_RC_GEN2_PCIE_PHY_SSC_PPM_S  16
/* PCIE_RC_GEN2_PCIE_PHY_SSC_CNT : R/W ;bitpos:[10:0] ;default: 11'h18d ; */
/*description: Configures PLL control SSC module period.; When the pll_ckref_inner is 100MHz, t
his signals should be set to its default value (0x633 & 31.5KHz) unless the user
 want change the 31.5KHz SSC modulation frequency; When the pll_ckref_inner is 2
5MHz, This signals should be set to its default value (0x18d & 31.5KHz) unless t
he user want change the 31.5KHz SSC modulation frequency; When the pll_ckref_inn
er is 24MHz, this signal should be set to its default value (0x17d & 31.5KHz) un
less the user want change the 31.5KHz SSC modulation frequency.*/
#define PCIE_RC_GEN2_PCIE_PHY_SSC_CNT    0x000007FF
#define PCIE_RC_GEN2_PCIE_PHY_SSC_CNT_M  ((PCIE_RC_GEN2_PCIE_PHY_SSC_CNT_V)<<(PCIE_RC_GEN2_PCIE_PHY_SSC_CNT_S))
#define PCIE_RC_GEN2_PCIE_PHY_SSC_CNT_V  0x7FF
#define PCIE_RC_GEN2_PCIE_PHY_SSC_CNT_S  0

#define PCIE_RC_GEN2_PCIE_PHY_PLL_DIV_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3904)
/* PCIE_RC_GEN2_PCIE_PHY_PLL_CKREF_DIV : R/W ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: Configures PLL reference clock input pre-divider, valid when PCIE_PHY_SU_TRIM[14
] is 1.; 0x0: 1; 0x1: 1/2; 0x2: 1/3; 0x3: 1/4.*/
#define PCIE_RC_GEN2_PCIE_PHY_PLL_CKREF_DIV    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_PLL_CKREF_DIV_M  ((PCIE_RC_GEN2_PCIE_PHY_PLL_CKREF_DIV_V)<<(PCIE_RC_GEN2_PCIE_PHY_PLL_CKREF_DIV_S))
#define PCIE_RC_GEN2_PCIE_PHY_PLL_CKREF_DIV_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_PLL_CKREF_DIV_S  16
/* PCIE_RC_GEN2_PCIE_PHY_PLL_DIV : R/W ;bitpos:[14:0] ;default: 15'h3200 ; */
/*description: Configures PLL loop divider, valid when PCIE_PHY_SU_TRIM[14] is 1, bit [14:10] i
s the integer number of divider factor, and bit [9:0] are the decimal fraction..*/
#define PCIE_RC_GEN2_PCIE_PHY_PLL_DIV    0x00007FFF
#define PCIE_RC_GEN2_PCIE_PHY_PLL_DIV_M  ((PCIE_RC_GEN2_PCIE_PHY_PLL_DIV_V)<<(PCIE_RC_GEN2_PCIE_PHY_PLL_DIV_S))
#define PCIE_RC_GEN2_PCIE_PHY_PLL_DIV_V  0x7FFF
#define PCIE_RC_GEN2_PCIE_PHY_PLL_DIV_S  0

#define PCIE_RC_GEN2_PCIE_PHY_SU_TRIM_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3908)
/* PCIE_RC_GEN2_PCIE_PHY_SU_TRIM : R/W ;bitpos:[31:0] ;default: 32'h95080293 ; */
/*description: Configures the SU adjust signal. For every bit:; bit [2:0]: PLL KVCO adjust, 0x0
 means min, 0x7 means max; Bit [3]: PLL force lock; bit [6:4]: PLL charge pump c
urrent adjust, 0x0 means min, 0x7 means max; bit [10:7]: PLL LPF R1 adjust, 0x0
means max, 0xf means min; bit [11]: bypass pll power down control; bit [12]: byp
ass ref clock detect function; bit [13]: bypass vcntl detect; bit [14]: bypass P
LL loop divider code; bit [15]: bypass ivref ota control; bit [16]: bypass PLL l
ock detect mode of always detect; bit [17]: bypass POR function; bit [18]: bypas
s ivref power down control; bit [19]: CKRCV common voltage adjust, 0 means float
ing, 1 means GND; bit [21:20]: CKRCV termination resister adjust, 0x0 means 100o
hm, 0x1 means 200ohm, 0x2 means 1000ohm, 0x3 means Hi-Z; bit [22]: CKRCV mode se
lect, 0 means difference receiver mode, 1 means signal receiver mode (CKREFP is
valid, CKREFN is disable); bit [24:23]: CKRCV common mode voltage adjust, 0x0 me
ans min, 0x3 means max; bit [28:25]: CKDRV output swing adjust (setp by 50mv), 0
x0 means100mV, 0xf means 860mV; bit [29]: CKDRV input clock select signal, 0 mea
ns ck100m_pcie from PLL, 1 means ckref from CKRCV; bit [31:30]: CKDRV output sle
w rate adjust, 0x0 means fast, 0x3 means slow.*/
#define PCIE_RC_GEN2_PCIE_PHY_SU_TRIM    0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PHY_SU_TRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_SU_TRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_SU_TRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_SU_TRIM_V  0xFFFFFFFF
#define PCIE_RC_GEN2_PCIE_PHY_SU_TRIM_S  0

#define PCIE_RC_GEN2_PCIE_PHY_RX_CTRL0_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3A00)
/* PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_LIMIT : R/W ;bitpos:[25] ;default: 1'h1 ; */
/*description: Configures the CDR CPATH overflow mode.; 0: CDR CPATH will be reset while CDR CP
ATH is overflow; 1: CDR CPATH will be locked to MAX frequency offset while CDR C
PATH is overflow.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_LIMIT    (BIT(25))
#define PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_LIMIT_M  (BIT(25))
#define PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_LIMIT_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_LIMIT_S  25
/* PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_OVERFLOW : R/W ;bitpos:[24] ;default: 1'h1 ; */
/*description: Configures the CDR CPATH control source select.; 0: CDR CPATH is controlled by C
DR CPATH overflow; 1: CDR CPATH is not controlled by CDR CPATH overflow.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_OVERFLOW    (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_OVERFLOW_M  (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_OVERFLOW_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPAS_CAPTH_OVERFLOW_S  24
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_FGAIN_ADPT : R/W ;bitpos:[18] ;default: 1'h0 ; */
/*description: Configures the CDR CPATH gain.; 0: CDR CPATH gain is X2 while CDR recover freque
ncy while PCIE_PHY_RX_CDR_TRIM[6] is 0; 1: CDR CPATH gain is X1 while CDR recove
r frequency while PCIE_PHY_RX_CDR_TRIM[6] is 0.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_FGAIN_ADPT    (BIT(18))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_FGAIN_ADPT_M  (BIT(18))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_FGAIN_ADPT_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_FGAIN_ADPT_S  18
/* PCIE_RC_GEN2_PCIE_PHY_EN_ADPT : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Configures the Adaptive Continuous Time Linear Equalizer (CTLE) enable signal.;
0: Disable adaptive CTLE; 1: Enable adaptive CTLE.*/
#define PCIE_RC_GEN2_PCIE_PHY_EN_ADPT    (BIT(17))
#define PCIE_RC_GEN2_PCIE_PHY_EN_ADPT_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_PHY_EN_ADPT_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_EN_ADPT_S  17
/* PCIE_RC_GEN2_PCIE_PHY_FREZ_ADPT_EQ : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: Configures whether or not  freeze the adaptive equalizer.; 0: The adaptive equal
izer will be always working when the adaptive equalizer function is enable; 1: T
he adaptive equalizer will freeze at its final result when equalizer training pa
ttern transmission is done (This signal is used in USB3.1 mode when equalizer tr
aining pattern transmission is done, IP user can stop adaptive equalization and
freeze the result).*/
#define PCIE_RC_GEN2_PCIE_PHY_FREZ_ADPT_EQ    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_FREZ_ADPT_EQ_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_FREZ_ADPT_EQ_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_FREZ_ADPT_EQ_S  16
/* PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_TRIM : R/W ;bitpos:[11:0] ;default: 12'h2c8 ; */
/*description: Configures the RX adaptive equalizer trim. For every bit:; bit [2:0]: adaptive e
qualizer detection threshold control; bit [3]: adaptive equalizer gain control;
bit [6:4]: adaptive equalizer bandwidth control; bit [8:7]: adaptive output refr
esh bandwidth control; bit [9]: bypass the adaptive Cj function; bit [10]: test
mode select; Bit [11]: Reserved.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_TRIM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_TRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_TRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_TRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_TRIM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_TRIM_S  0

#define PCIE_RC_GEN2_PCIE_PHY_RX_CTRL1_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3A04)
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_BUF : R/W ;bitpos:[21] ;default: 1'h0 ; */
/*description: Configures CTLE and LOS detector control mode.; 0: CTLE and LOS detector is cont
rolled by PWDN; 1: CTLE and LOS detector is operation while reference clock and
RX termination are present.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_BUF    (BIT(21))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_BUF_M  (BIT(21))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_BUF_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_BUF_S  21
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_CDR : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: Configures CDR control mode.; 0: CDR is controlled by PWDN; 1: CDR is operation
after PLL is locked while reference clock and RX termination are present.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_CDR    (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_CDR_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_CDR_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_RX_CDR_S  20
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_EN : R/W ;bitpos:[17] ;default: 1'h0 ; */
/*description: Configures CDR clock mode.; 0: CDR recovered clock will be operation while PLL i
s locked and CDR is operation, and PCIE_PHY_RX_CDR_TRIM[7] only can be set to 0
using reference clock for rx_rdy generation; 1: CDR recovered clock will be oper
ation while PLL is locked, and PCIE_PHY_RX_CDR_TRIM[7] can be set to 1 using rec
overed clock for rx_rdy generation.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_EN    (BIT(17))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_EN_M  (BIT(17))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_EN_S  17
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_CDR_IDLE : R/W ;bitpos:[16] ;default: 1'h0 ; */
/*description: Configures whether or not CDR detect LOS Detect module.; 0: CDR is reset if EIDL
E is detected by LOS Detect module; 1: CDR is not controlled by LOS Detect modul
e.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_CDR_IDLE    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_CDR_IDLE_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_CDR_IDLE_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_CDR_IDLE_S  16
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_RDY_PULSE_REG : R/W ;bitpos:[13] ;default: 1'h0 ; */
/*description: Configures signal rx_rdy mode.; 0: rx_rdy is pulse signal; 1: rx_rdy is step sig
nal while byps_cdr_fl_en=1.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_RDY_PULSE_REG    (BIT(13))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_RDY_PULSE_REG_M  (BIT(13))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_RDY_PULSE_REG_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RX_RDY_PULSE_REG_S  13
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_FL_EN_REG : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures whether or not bypass signal cdr_fl_en.; 0: rx_rdy is pulse singal to
 indicate CDR start to clock and data recoved from input serial data; 1: rx_rdy
is not controlled by PMA/PCS interface signal cdr_fl_en.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_FL_EN_REG    (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_FL_EN_REG_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_FL_EN_REG_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_CDR_FL_EN_REG_S  12
/* PCIE_RC_GEN2_PCIE_PHY_RX_CDR_TRIM : R/W ;bitpos:[11:0] ;default: 12'h3 ; */
/*description: Configures the RX CDR trim. For every bit:; bit [2:0]: The slew rate control for
 PI, 0x0 means fast slew rate, 0x7 means slow slew rate; bit [4:3]: CDR gain adj
ust, 0x0/0x1/0x3 means 1/8, 0x2 means 1/4; bit [5]: CDR phase path gain adjust,
0 means x1, 1 means x2; bit [6]: CDR cpath bandwidth gain adjust, 0 means low ba
ndwidth, 1 means high bandwidth; bit [7]: rx_rdy counter clock select, 0 means r
ef clock, 1 means CDR recovery clock; bit [9:8]: rx_rdy delay time select, 0x0 m
eans 1.28us, 0x1 means 0.64us, 0x2 means 2.65us, 0x3 means 5.12us; bit [10]: rx_
pck10 invert signal, 0 means no inverted, 1means inverted; bit [11]: Adaptive CT
LE control mode select signal, 0 means auto control mode, 1 means manual control
 mode.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_CDR_TRIM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PHY_RX_CDR_TRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_CDR_TRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_CDR_TRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_CDR_TRIM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PHY_RX_CDR_TRIM_S  0

#define PCIE_RC_GEN2_PCIE_PHY_RX_CTRL2_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3A08)
/* PCIE_RC_GEN2_PCIE_PHY_RX_POLAR : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: Configures the RX output polarity.; 0: Not invert RX output data polarity; 1: In
vert RX output data polarity.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_POLAR    (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_RX_POLAR_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_RX_POLAR_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RX_POLAR_S  12
/* PCIE_RC_GEN2_PCIE_PHY_RX_LOS_TRIM : R/W ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: Configures the RX los detect adjust. For every bit:; bit [1:0]: Low vth adjust;
Bit [3:2]: Reserved.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_LOS_TRIM    0x0000000F
#define PCIE_RC_GEN2_PCIE_PHY_RX_LOS_TRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_LOS_TRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_LOS_TRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_LOS_TRIM_V  0xF
#define PCIE_RC_GEN2_PCIE_PHY_RX_LOS_TRIM_S  8
/* PCIE_RC_GEN2_PCIE_PHY_RX_TRIM : R/W ;bitpos:[7:2] ;default: 6'h0 ; */
/*description: Configures the RX trim control. For every bit:; bit [0]: PLL kvco trim polar con
trol; bit [1]: loopdiv_double_sel signal, inverted, 0 means double, 1 means no;
bit [4:2]: PLL kvco trim voltage control, bit[4] and bit[2] inverted, 0x0 means
650mV, 0x1 means 700mV, 0x2 means 750mV, 0x3 means 800mV, 0x4 means 850mV, 0x5 m
eans 900mV (default at PCIE mode), 0x6 means 950mV, 0x7 means 1000mV; bit [5]: H
igh speed clock frequency ratio select, 0 means no, 1 means div2.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_TRIM    0x0000003F
#define PCIE_RC_GEN2_PCIE_PHY_RX_TRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_TRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_TRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_TRIM_V  0x3F
#define PCIE_RC_GEN2_PCIE_PHY_RX_TRIM_S  2
/* PCIE_RC_GEN2_PCIE_PHY_RX_MSB_EN : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Configures rx data msb select signal.; 0: LSB first; 1: MSB first.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_MSB_EN    (BIT(1))
#define PCIE_RC_GEN2_PCIE_PHY_RX_MSB_EN_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_PHY_RX_MSB_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RX_MSB_EN_S  1
/* PCIE_RC_GEN2_PCIE_PHY_RX_PCK_SEL : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Configures whether or not invert the clock rx_pck.; 0: Not invert; 1: Invert.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_PCK_SEL    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_RX_PCK_SEL_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_RX_PCK_SEL_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RX_PCK_SEL_S  0

#define PCIE_RC_GEN2_PCIE_PHY_RX_CTRL3_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3A0C)
/* PCIE_RC_GEN2_PCIE_PHY_RX_SQDET_TRIM : R/W ;bitpos:[11:0] ;default: 12'h10b ; */
/*description: Configures the RX squelch adjust. For every bit:; bit [2:0]: Squelch input fille
r bandwidth adjust, 0x0 means max bandwidth, 0x7 means min bandwidth; bit [4:3]:
 Squelch delay adjust, 0x0 means max delay, 0x3 means min delay; bit [6:5]: Amp
bias adjust, 0x0 means max ibias, 0x3 means min ibias; bit [8:7]: Squelch detect
 vth adjust, 0x0 means min vth, 0x3 means max vth; bit [9]: Bypass rx_superspeed
, 0 means rx_superspeed normal working, 1 means force PMA rx_superspeed output i
s 1; bit [10]: rx_superspeed function select, 0 means ~los output, 1 means ~los
| squelch output; bit [11]: rx_pcie_idle function select, 0 means ~ squelch outp
ut, 1 means los output.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_SQDET_TRIM    0x00000FFF
#define PCIE_RC_GEN2_PCIE_PHY_RX_SQDET_TRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_SQDET_TRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_SQDET_TRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_SQDET_TRIM_V  0xFFF
#define PCIE_RC_GEN2_PCIE_PHY_RX_SQDET_TRIM_S  0

#define PCIE_RC_GEN2_PCIE_PHY_RX_CTRL4_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3A10)
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_RTERM_EN : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures the RX termination select signal.; 0: RX termination is controlled by
 RTERM_EN; 1: RX termination is present all the way.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RTERM_EN    (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RTERM_EN_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RTERM_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_RTERM_EN_S  8
/* PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_VCOM : R/W ;bitpos:[5:4] ;default: 2'h0 ; */
/*description: Configures RX vcom voltage select signal.; 0x0: GND; 0x1/0x2: Floating; 0x3: 320
mV.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_VCOM    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_VCOM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_VCOM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_VCOM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_VCOM_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_VCOM_S  4
/* PCIE_RC_GEN2_PCIE_PHY_RX_RTERM : R/W ;bitpos:[3:0] ;default: 4'h8 ; */
/*description: Configures RX input impedance tuning bits to cancel process variation.; 0x0: Rou
t (ohm) 600/10 ; 0x1: Rout (ohm) 600/10.25; 0x2: Rout (ohm) 600/10.5; 0x3: Rout
(ohm) 600/10.75; 0x4: Rout (ohm) 600/11; 0x5: Rout (ohm) 600/11.25; 0x6: Rout (o
hm) 600/11.5  ; 0x7: Rout (ohm) 600/11.75; 0x8: Rout (ohm) 600/12 ; 0x9: Rout (o
hm) 600/12.25; 0xa: Rout (ohm) 600/12.5; 0xb: Rout (ohm) 600/12.75; 0xc: Rout (o
hm) 600/13; 0xd: Rout (ohm) 600/13.25; 0xe: Rout (ohm) 600/13.5  ; 0xf: Rout (oh
m) 600/13.75.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_RTERM    0x0000000F
#define PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_V  0xF
#define PCIE_RC_GEN2_PCIE_PHY_RX_RTERM_S  0

#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3A14)
/* PCIE_RC_GEN2_PCIE_PHY_RX_AFE_CTRIM : R/W ;bitpos:[10:8] ;default: 3'h3 ; */
/*description: Configures the Receiver 1st stage equalizer cap control, used to adjust pole-zer
o of RX EQ..*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_CTRIM    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_CTRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_AFE_CTRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_AFE_CTRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_CTRIM_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_CTRIM_S  8
/* PCIE_RC_GEN2_PCIE_PHY_RX_AFE_TRIM : R/W ;bitpos:[6:4] ;default: 3'h3 ; */
/*description: Configures the Receiver 2st stage equalizer res control, used to adjust pole-zer
o of RX EQ..*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_TRIM    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_TRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_AFE_TRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_AFE_TRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_TRIM_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_TRIM_S  4
/* PCIE_RC_GEN2_PCIE_PHY_RX_AFE_RTRIM : R/W ;bitpos:[3:0] ;default: 4'h8 ; */
/*description: Configures the Receiver 1st stage equalizer res control, used to adjust pole-zer
o of RX EQ..*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_RTRIM    0x0000000F
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_RTRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_AFE_RTRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_AFE_RTRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_RTRIM_V  0xF
#define PCIE_RC_GEN2_PCIE_PHY_RX_AFE_RTRIM_S  0

#define PCIE_RC_GEN2_PCIE_PHY_TX_CTRL_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3A18)
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_TX_BUF : R/W ;bitpos:[29] ;default: 1'h0 ; */
/*description: Configures the Transmitter power on control.; 0: TX Driver is controlled by PWDN
; 1: TX Driver is automatic work after PLL is locked while reference clock is pr
esent and TX detect RX is finished.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_TX_BUF    (BIT(29))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_TX_BUF_M  (BIT(29))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_TX_BUF_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_PWON_TX_BUF_S  29
/* PCIE_RC_GEN2_PCIE_PHY_BYPS_TX_EIDLE_EN : R/W ;bitpos:[28] ;default: 1'h0 ; */
/*description: Configures Transmitter electrical idle control.; 0: PMA tx_elecidle controlled b
y PMA/PCS interface signal tx_lfps_beacon_en; 1: Bypass tx_eidle_en control from
 pcs.*/
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_TX_EIDLE_EN    (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_TX_EIDLE_EN_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_TX_EIDLE_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BYPS_TX_EIDLE_EN_S  28
/* PCIE_RC_GEN2_PCIE_PHY_TX_RTERM : R/W ;bitpos:[27:24] ;default: 4'h8 ; */
/*description: Configures TX output impedance tuning bits to cancel process variation.; 0x0: Ro
ut (ohm) 600/10 ; 0x1: Rout (ohm) 600/10.25; 0x2: Rout (ohm) 600/10.5; 0x3: Rout
 (ohm) 600/10.75; 0x4: Rout (ohm) 600/11; 0x5: Rout (ohm) 600/11.25; 0x6: Rout (
ohm) 600/11.5  ; 0x7: Rout (ohm) 600/11.75; 0x8: Rout (ohm) 600/12 ; 0x9: Rout (
ohm) 600/12.25; 0xa: Rout (ohm) 600/12.5; 0xb: Rout (ohm) 600/12.75; 0xc: Rout (
ohm) 600/13; 0xd: Rout (ohm) 600/13.25; 0xe: Rout (ohm) 600/13.5  ; 0xf: Rout (o
hm) 600/13.75.*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_RTERM    0x0000000F
#define PCIE_RC_GEN2_PCIE_PHY_TX_RTERM_M  ((PCIE_RC_GEN2_PCIE_PHY_TX_RTERM_V)<<(PCIE_RC_GEN2_PCIE_PHY_TX_RTERM_S))
#define PCIE_RC_GEN2_PCIE_PHY_TX_RTERM_V  0xF
#define PCIE_RC_GEN2_PCIE_PHY_TX_RTERM_S  24
/* PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_TRIM : R/W ;bitpos:[20:16] ;default: 5'h5 ; */
/*description: Configures the rterm detect time adjust. For every bit:; bit [1:0]: rterm detect
 post-charge time adjust, 0x0 means 16us, 0x1 means 32us, 0x2 means 64us, and 0x
3 means 128us; bit [3:2]: rterm detect pre-charge time adjust, 0x0 means 512us,
0x1 means 1024us, 0x2 means 2048us, and 0x3 means 4096us; bit [4]: Reserved.*/
#define PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_TRIM    0x0000001F
#define PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_TRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_TRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_TRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_TRIM_V  0x1F
#define PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_TRIM_S  16
/* PCIE_RC_GEN2_PCIE_PHY_TX_TRIM : R/W ;bitpos:[15:0] ;default: 16'h1000 ; */
/*description: Configures the TX trim control. For every bit:; bit [3:0]: TX deemph adjust, val
id when bit[4] = 1; bit [4]: Manual mode enable; bit [5]: Force rterm detect rea
dy, 0 means rterm detect normal working, 1 means force phy_lane_rterm_det_out =1
; bit [6]: Force eidle, 0 means TXP/TXN electrical idle control by tx_eilde_en f
rom PCS, 1 means force TXP/TXN into electrical idle mode; bit [7]: Hi-z idle ena
ble; bit [8]: tx_pck invert enable; bit [9]: Transmitter MSB enable; bit [10]: B
ypass low resister eidle mode, 0 means eidle has not hi-z mode, 1: means eidle h
as hi-z mode; bit [11]: Bypass the gate_tx_pck control from PCS; bit [13:12]: rt
erm detect vth adjust, 0x0 means max vth, 0x3 means min vth; bit [14]: Reserved;
 bit [15]: tx_polarity control.*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_TRIM    0x0000FFFF
#define PCIE_RC_GEN2_PCIE_PHY_TX_TRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_TX_TRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_TX_TRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_TX_TRIM_V  0xFFFF
#define PCIE_RC_GEN2_PCIE_PHY_TX_TRIM_S  0

#define PCIE_RC_GEN2_PCIE_PHY_PWON_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3B00)
/* PCIE_RC_GEN2_PCIE_PHY_PWON_CDR_O : RO ;bitpos:[28] ;default: 1'h0 ; */
/*description: Represents whether or not PHY CDR is power up.; 0: Power off; 1: Power up.*/
#define PCIE_RC_GEN2_PCIE_PHY_PWON_CDR_O    (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_CDR_O_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_CDR_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PWON_CDR_O_S  28
/* PCIE_RC_GEN2_PCIE_PHY_PWON_IDLE_DET_O : RO ;bitpos:[20] ;default: 1'h0 ; */
/*description: Represents whether or not PHY electrical idle detect is power up.; 0: Power off;
 1: Power up.*/
#define PCIE_RC_GEN2_PCIE_PHY_PWON_IDLE_DET_O    (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_IDLE_DET_O_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_IDLE_DET_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PWON_IDLE_DET_O_S  20
/* PCIE_RC_GEN2_PCIE_PHY_PWON_IRF_O : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not PHY IVREF is power up.; 0: Power off; 1: Power up.*/
#define PCIE_RC_GEN2_PCIE_PHY_PWON_IRF_O    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_IRF_O_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_IRF_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PWON_IRF_O_S  16
/* PCIE_RC_GEN2_PCIE_PHY_PWON_PLL_O : RO ;bitpos:[4] ;default: 1'h0 ; */
/*description: Represents whether or not PHY PLL is power up.; 0: Power off; 1: Power up.*/
#define PCIE_RC_GEN2_PCIE_PHY_PWON_PLL_O    (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_PLL_O_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_PLL_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PWON_PLL_O_S  4
/* PCIE_RC_GEN2_PCIE_PHY_PWON_RX_BUF_O : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: Represents whether or not PHY RX CTLE is power up.; 0: Power off; 1: Power up.*/
#define PCIE_RC_GEN2_PCIE_PHY_PWON_RX_BUF_O    (BIT(1))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_RX_BUF_O_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_RX_BUF_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PWON_RX_BUF_O_S  1
/* PCIE_RC_GEN2_PCIE_PHY_PWON_TX_BUF_O : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents whether or not PHY Transmitter is power up.; 0: Power off; 1: Power u
p.*/
#define PCIE_RC_GEN2_PCIE_PHY_PWON_TX_BUF_O    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_TX_BUF_O_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_PWON_TX_BUF_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PWON_TX_BUF_O_S  0

#define PCIE_RC_GEN2_PCIE_PHY_RATE_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3B04)
/* PCIE_RC_GEN2_PCIE_PHY_RATE_O : RO ;bitpos:[9:8] ;default: 2'h0 ; */
/*description: Represents PHY RATE..*/
#define PCIE_RC_GEN2_PCIE_PHY_RATE_O    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_RATE_O_M  ((PCIE_RC_GEN2_PCIE_PHY_RATE_O_V)<<(PCIE_RC_GEN2_PCIE_PHY_RATE_O_S))
#define PCIE_RC_GEN2_PCIE_PHY_RATE_O_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_RATE_O_S  8
/* PCIE_RC_GEN2_PCIE_PHY_RATE_RX : RO ;bitpos:[5:4] ;default: 2'h0 ; */
/*description: Represents PHY RX_RATE..*/
#define PCIE_RC_GEN2_PCIE_PHY_RATE_RX    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_RATE_RX_M  ((PCIE_RC_GEN2_PCIE_PHY_RATE_RX_V)<<(PCIE_RC_GEN2_PCIE_PHY_RATE_RX_S))
#define PCIE_RC_GEN2_PCIE_PHY_RATE_RX_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_RATE_RX_S  4
/* PCIE_RC_GEN2_PCIE_PHY_RATE_TX : RO ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Represents PHY TX_RATE..*/
#define PCIE_RC_GEN2_PCIE_PHY_RATE_TX    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_RATE_TX_M  ((PCIE_RC_GEN2_PCIE_PHY_RATE_TX_V)<<(PCIE_RC_GEN2_PCIE_PHY_RATE_TX_S))
#define PCIE_RC_GEN2_PCIE_PHY_RATE_TX_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_RATE_TX_S  0

#define PCIE_RC_GEN2_PCIE_PHY_PCS_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3B08)
/* PCIE_RC_GEN2_PCIE_PHY_GATE_PLL_CLK : RO ;bitpos:[28] ;default: 1'h0 ; */
/*description: Represents whether or not PHY rate change or PHY PLL is power off, pulse signal.
; 0: No PHY rate change or PHY PLL is power off; 1: PHY rate change or PHY PLL i
s power off.*/
#define PCIE_RC_GEN2_PCIE_PHY_GATE_PLL_CLK    (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_GATE_PLL_CLK_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_GATE_PLL_CLK_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_GATE_PLL_CLK_S  28
/* PCIE_RC_GEN2_PCIE_PHY_SSCG_MODULATION : RO ;bitpos:[24] ;default: 1'h0 ; */
/*description: Represents whether or not the PHY spread spectrum function is enable.; 0: Not en
able; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_PHY_SSCG_MODULATION    (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_SSCG_MODULATION_M  (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_SSCG_MODULATION_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_SSCG_MODULATION_S  24
/* PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN_O : RO ;bitpos:[20] ;default: 1'h0 ; */
/*description: Represents cdr_fl_en signal value, it will be set to 0 if CDR is locked, else is
 1..*/
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN_O    (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN_O_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FL_EN_O_S  20
/* PCIE_RC_GEN2_PCIE_PHY_RX_ELECIDLE_O : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents RX_ELECIDLE in PIPE interface..*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_ELECIDLE_O    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_RX_ELECIDLE_O_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_RX_ELECIDLE_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RX_ELECIDLE_O_S  16
/* PCIE_RC_GEN2_PCIE_PHY_RX_VALID_O : RO ;bitpos:[12] ;default: 1'h0 ; */
/*description: Represents RX_VALID in PIPE interface..*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_VALID_O    (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_RX_VALID_O_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_RX_VALID_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RX_VALID_O_S  12
/* PCIE_RC_GEN2_PCIE_PHY_TX_BEACON_LFPS_O : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: Represents Beacon signaling in PCIe mode..*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_BEACON_LFPS_O    (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_TX_BEACON_LFPS_O_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_TX_BEACON_LFPS_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_TX_BEACON_LFPS_O_S  8
/* PCIE_RC_GEN2_PCIE_PHY_TX_DETECT_RX_O : RO ;bitpos:[4] ;default: 1'h0 ; */
/*description: Represents whether or not Receiver detection function is enabled.; 0: Not enable
; 1: Enable.*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_DETECT_RX_O    (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_TX_DETECT_RX_O_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_TX_DETECT_RX_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_TX_DETECT_RX_O_S  4
/* PCIE_RC_GEN2_PCIE_PHY_TX_ELECIDLE_O : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents whether or not the Transmitter is in electrical idle state.; 0: Norma
l working; 1: Electrical idle.*/
#define PCIE_RC_GEN2_PCIE_PHY_TX_ELECIDLE_O    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_TX_ELECIDLE_O_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_TX_ELECIDLE_O_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_TX_ELECIDLE_O_S  0

#define PCIE_RC_GEN2_PCIE_PHY_LOCK_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3C00)
/* PCIE_RC_GEN2_PCIE_PHY_CDR_FRQ_LOCK : RO ;bitpos:[24] ;default: 1'h0 ; */
/*description: Represents whether or not CDR is locked.; 0: Not locked; 1: Locked.*/
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FRQ_LOCK    (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FRQ_LOCK_M  (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FRQ_LOCK_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_CDR_FRQ_LOCK_S  24
/* PCIE_RC_GEN2_PCIE_PHY_RX_DETECTED_I : RO ;bitpos:[20] ;default: 1'h0 ; */
/*description: Represents whether or not Receiver is detected in PCS.; 0: Not detected; 1: Dete
cted.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_DETECTED_I    (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_RX_DETECTED_I_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_RX_DETECTED_I_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RX_DETECTED_I_S  20
/* PCIE_RC_GEN2_PCIE_PHY_RX_PCIE_IDLE_I : RO ;bitpos:[12] ;default: 1'h0 ; */
/*description: Represents whether or not the idle is detected in PCIe mode, but detected result
 is not credible.; 0: Not detected; 1: Detected.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_PCIE_IDLE_I    (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_RX_PCIE_IDLE_I_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_RX_PCIE_IDLE_I_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RX_PCIE_IDLE_I_S  12
/* PCIE_RC_GEN2_PCIE_PHY_TXPLL_LOCK : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents whether or not the PLL is locked.; 0: Not locked; 1: Locked.*/
#define PCIE_RC_GEN2_PCIE_PHY_TXPLL_LOCK    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_TXPLL_LOCK_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_TXPLL_LOCK_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_TXPLL_LOCK_S  0

#define PCIE_RC_GEN2_PCIE_PHY_BIST_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3C04)
/* PCIE_RC_GEN2_PCIE_PHY_BIST_DONE : RO ;bitpos:[29] ;default: 1'h0 ; */
/*description: Represents whether or not the BIST is finished.; 0: Not finished; 1: Finished.*/
#define PCIE_RC_GEN2_PCIE_PHY_BIST_DONE    (BIT(29))
#define PCIE_RC_GEN2_PCIE_PHY_BIST_DONE_M  (BIT(29))
#define PCIE_RC_GEN2_PCIE_PHY_BIST_DONE_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BIST_DONE_S  29
/* PCIE_RC_GEN2_PCIE_PHY_BIST_RESULT : RO ;bitpos:[28] ;default: 1'h0 ; */
/*description: Represents the PHY BIST result.; 0: Fail; 1: Pass.*/
#define PCIE_RC_GEN2_PCIE_PHY_BIST_RESULT    (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_BIST_RESULT_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_BIST_RESULT_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BIST_RESULT_S  28
/* PCIE_RC_GEN2_PCIE_PHY_BIST_TIMEOUT : RO ;bitpos:[24] ;default: 1'h0 ; */
/*description: Represents whether or not CDR is unlock for a long time in BIST mode and will be
 reset.; 0: Not timeout; 1: timeout and CDR will be reset.*/
#define PCIE_RC_GEN2_PCIE_PHY_BIST_TIMEOUT    (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_BIST_TIMEOUT_M  (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_BIST_TIMEOUT_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_BIST_TIMEOUT_S  24
/* PCIE_RC_GEN2_PCIE_PHY_ERR_CNT : RO ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Represents the result of error counter in BIST mode..*/
#define PCIE_RC_GEN2_PCIE_PHY_ERR_CNT    0x000000FF
#define PCIE_RC_GEN2_PCIE_PHY_ERR_CNT_M  ((PCIE_RC_GEN2_PCIE_PHY_ERR_CNT_V)<<(PCIE_RC_GEN2_PCIE_PHY_ERR_CNT_S))
#define PCIE_RC_GEN2_PCIE_PHY_ERR_CNT_V  0xFF
#define PCIE_RC_GEN2_PCIE_PHY_ERR_CNT_S  0

#define PCIE_RC_GEN2_PCIE_PHY_DET_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3C08)
/* PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID : RO ;bitpos:[28] ;default: 1'h0 ; */
/*description: Represents whether or not the CDR data is valid in PCS.; 0: Not valid; 1: Valid.*/
#define PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID    (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_M  (BIT(28))
#define PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_CDR_DATA_VALID_S  28
/* PCIE_RC_GEN2_PCIE_PHY_DET_RESULT : RO ;bitpos:[24] ;default: 1'h0 ; */
/*description: Represents the result of receiver detect operation in PCS.; 0: Not detected; 1:
Detected.*/
#define PCIE_RC_GEN2_PCIE_PHY_DET_RESULT    (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_DET_RESULT_M  (BIT(24))
#define PCIE_RC_GEN2_PCIE_PHY_DET_RESULT_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_DET_RESULT_S  24
/* PCIE_RC_GEN2_PCIE_PHY_DET_FINISH : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not the receiver detect operation is finished. It always s
tays at 1 when detect operation is finished before the detect is cancel.; 0: Not
 finished; 1: Finished.*/
#define PCIE_RC_GEN2_PCIE_PHY_DET_FINISH    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_DET_FINISH_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_DET_FINISH_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_DET_FINISH_S  16
/* PCIE_RC_GEN2_PCIE_PHY_DET_FINISH_PULSE_SYS : RO ;bitpos:[12] ;default: 1'h0 ; */
/*description: Represents whether or not the receiver detect operation is finished, pulse signa
l.; 0: Not finished; 1: Finished.*/
#define PCIE_RC_GEN2_PCIE_PHY_DET_FINISH_PULSE_SYS    (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_DET_FINISH_PULSE_SYS_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_DET_FINISH_PULSE_SYS_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_DET_FINISH_PULSE_SYS_S  12
/* PCIE_RC_GEN2_PCIE_PHY_REFCK_DET_OUT : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: Represents whether or not the reference clock is detected.; 0: Not detected; 1:
Detected.*/
#define PCIE_RC_GEN2_PCIE_PHY_REFCK_DET_OUT    (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_REFCK_DET_OUT_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_REFCK_DET_OUT_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_REFCK_DET_OUT_S  8
/* PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_OUT : RO ;bitpos:[4] ;default: 1'h0 ; */
/*description: Represents whether or not the receiver is detected in PMA.; 0: Not detected; 1:
Detected.*/
#define PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_OUT    (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_OUT_M  (BIT(4))
#define PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_OUT_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RTERM_DET_OUT_S  4
/* PCIE_RC_GEN2_PCIE_PHY_COMMA_DET : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: Represents whether or not the comma is aligned in PCS.; 0: Not aligned; 1: Align
ed.*/
#define PCIE_RC_GEN2_PCIE_PHY_COMMA_DET    (BIT(1))
#define PCIE_RC_GEN2_PCIE_PHY_COMMA_DET_M  (BIT(1))
#define PCIE_RC_GEN2_PCIE_PHY_COMMA_DET_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_COMMA_DET_S  1
/* PCIE_RC_GEN2_PCIE_PHY_COMMA_RECEIVED : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents whether or not the comma symbol is received in current data, pulse si
gnal.; 0: Not received; 1: Received.*/
#define PCIE_RC_GEN2_PCIE_PHY_COMMA_RECEIVED    (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_COMMA_RECEIVED_M  (BIT(0))
#define PCIE_RC_GEN2_PCIE_PHY_COMMA_RECEIVED_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_COMMA_RECEIVED_S  0

#define PCIE_RC_GEN2_PCIE_PHY_EB_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3C0C)
/* PCIE_RC_GEN2_PCIE_PHY_EB_OR : RO ;bitpos:[20] ;default: 1'h0 ; */
/*description: Represents whether or not the Elastic Buffer is overflowed.; 0: Normal working;
1: overflow.*/
#define PCIE_RC_GEN2_PCIE_PHY_EB_OR    (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_EB_OR_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_EB_OR_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_EB_OR_S  20
/* PCIE_RC_GEN2_PCIE_PHY_EB_UR : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not the Elastic Buffer is underflow.; 0: Normal working; 1
: Underflow.*/
#define PCIE_RC_GEN2_PCIE_PHY_EB_UR    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_EB_UR_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_EB_UR_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_EB_UR_S  16
/* PCIE_RC_GEN2_PCIE_PHY_SKP_INSERTED : RO ;bitpos:[12] ;default: 1'h0 ; */
/*description: Represents whether or not the Elastic Buffer is inserted into SKP.; 0: Not added
; 1: Added.*/
#define PCIE_RC_GEN2_PCIE_PHY_SKP_INSERTED    (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_SKP_INSERTED_M  (BIT(12))
#define PCIE_RC_GEN2_PCIE_PHY_SKP_INSERTED_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_SKP_INSERTED_S  12
/* PCIE_RC_GEN2_PCIE_PHY_SKP_REMOVED : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: Represents whether or not the Elastic Buffer is removed the SKP.; 0: Not removed
; 1: Removed.*/
#define PCIE_RC_GEN2_PCIE_PHY_SKP_REMOVED    (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_SKP_REMOVED_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_SKP_REMOVED_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_SKP_REMOVED_S  8
/* PCIE_RC_GEN2_PCIE_PHY_DISPARITY_ERR : RO ;bitpos:[5:4] ;default: 2'h0 ; */
/*description: Represents whether or not the disparity is error in 10b-8b decoder.; 0: Not erro
r; 1: Error.*/
#define PCIE_RC_GEN2_PCIE_PHY_DISPARITY_ERR    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_DISPARITY_ERR_M  ((PCIE_RC_GEN2_PCIE_PHY_DISPARITY_ERR_V)<<(PCIE_RC_GEN2_PCIE_PHY_DISPARITY_ERR_S))
#define PCIE_RC_GEN2_PCIE_PHY_DISPARITY_ERR_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_DISPARITY_ERR_S  4
/* PCIE_RC_GEN2_PCIE_PHY_INVALID_CODE : RO ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Represents whether or not the data is invalid after 10b-8b decoder.; 0: Valid; 1
: Invalid.*/
#define PCIE_RC_GEN2_PCIE_PHY_INVALID_CODE    0x00000003
#define PCIE_RC_GEN2_PCIE_PHY_INVALID_CODE_M  ((PCIE_RC_GEN2_PCIE_PHY_INVALID_CODE_V)<<(PCIE_RC_GEN2_PCIE_PHY_INVALID_CODE_S))
#define PCIE_RC_GEN2_PCIE_PHY_INVALID_CODE_V  0x3
#define PCIE_RC_GEN2_PCIE_PHY_INVALID_CODE_S  0

#define PCIE_RC_GEN2_PCIE_PHY_MODE_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3C10)
/* PCIE_RC_GEN2_PCIE_PHY_LP_RX_EN : RO ;bitpos:[20] ;default: 1'h0 ; */
/*description: Represents whether or not the PHY is working in loopback mode.; 0: Non-loopback
mode; 1: Loopback mode.*/
#define PCIE_RC_GEN2_PCIE_PHY_LP_RX_EN    (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_LP_RX_EN_M  (BIT(20))
#define PCIE_RC_GEN2_PCIE_PHY_LP_RX_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_LP_RX_EN_S  20
/* PCIE_RC_GEN2_PCIE_PHY_LP_SLAVE_EN : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not the PHY is working in BIST mode.; 0: Non-BIST mode; 1:
 BIST mode.*/
#define PCIE_RC_GEN2_PCIE_PHY_LP_SLAVE_EN    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_LP_SLAVE_EN_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_LP_SLAVE_EN_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_LP_SLAVE_EN_S  16
/* PCIE_RC_GEN2_PCIE_PHY_PCIE_MODE : RO ;bitpos:[8] ;default: 1'h1 ; */
/*description: Represents whether or not the PHY is working in PCIe mode.; 0: Other mode; 1: PC
Ie mode.*/
#define PCIE_RC_GEN2_PCIE_PHY_PCIE_MODE    (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_PCIE_MODE_M  (BIT(8))
#define PCIE_RC_GEN2_PCIE_PHY_PCIE_MODE_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PCIE_MODE_S  8

#define PCIE_RC_GEN2_PCIE_PHY_RX_STA_REG          (DR_REG_PCIE_RC_GEN2_BASE + 0x3C14)
/* PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_OVERFLOW : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether or not the PHY PMA adaptive equalizer is overflowed.; 0: Norm
al working; 1: Overflowed.*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_OVERFLOW    (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_OVERFLOW_M  (BIT(16))
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_OVERFLOW_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_OVERFLOW_S  16
/* PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_CTRLM : RO ;bitpos:[14:12] ;default: 3'h0 ; */
/*description: Represents receiver 1st stage equalizer capacitance control, use to adjust pole-
zero of RX EQ..*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_CTRLM    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_CTRLM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_CTRLM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_CTRLM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_CTRLM_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_CTRLM_S  12
/* PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_RTRIM : RO ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: Represents receiver 1st stage equalizer resistor control, use to adjust pole-zer
o of RX EQ..*/
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_RTRIM    0x0000000F
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_RTRIM_M  ((PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_RTRIM_V)<<(PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_RTRIM_S))
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_RTRIM_V  0xF
#define PCIE_RC_GEN2_PCIE_PHY_RX_ADPT_EQ_RTRIM_S  8
/* PCIE_RC_GEN2_PCIE_PHY_PMA_RX_PCIE_MODE : RO ;bitpos:[7] ;default: 1'h0 ; */
/*description: Represents whether or not the PHY PMA RX is working in PCIe mode.; 0: Other mode
; 1: PCIe mode.*/
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_PCIE_MODE    (BIT(7))
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_PCIE_MODE_M  (BIT(7))
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_PCIE_MODE_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_PCIE_MODE_S  7
/* PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_WORK : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: Represents whether or not the PHY PMA RXRX CDR is working.; 0: Power down; 1: Wo
rking.*/
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_WORK    (BIT(3))
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_WORK_M  (BIT(3))
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_WORK_V  0x1
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_WORK_S  3
/* PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR : RO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Represents rate mode of PMA RX CDR.; 0x1: Qurater rate; 0x2: Half rate; 0x4: Ful
l rate; Others: Reserved.*/
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR    0x00000007
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_M  ((PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_V)<<(PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_S))
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_V  0x7
#define PCIE_RC_GEN2_PCIE_PHY_PMA_RX_CDR_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_PCIE_RC_GEN2_REG_H_ */
