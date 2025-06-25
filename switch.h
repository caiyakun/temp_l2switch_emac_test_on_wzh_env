/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_H_
#define _SWITCH_H_


#ifdef __cplusplus
extern "C" {
#endif


#define SWITCH_VERSION                     20 // 2.0
#define PCB_NOT_REWORK_SMI_1_TO_4           1 //1: the 4 pairs of mdio are not short on the PCB ; 0: the 4 pairs of mdio are short on the PCB

#define SWITCH_DR_REG_EIB_BLOCK_BASE       0x09100000

/* ===========================  EMAC Block  =========================== */
/*
 * @module: EMAC/PCS/PHY GLB CFG
 *
 * @base: 
 *
 * @size: 24KB
 */
#define SWITCH_DR_REG_EMAC_GLB_BASE               (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x18000)

#define SWITCH_DR_REG_PCS_GLB_BASE                (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1A400)


/* 
 * @module: EMAC1
 *
 * @base: BASE+0x18400
 
 * @size: 1KB
 */
#define SWITCH_DR_REG_EMAC1_BASE           (SWITCH_DR_REG_EMAC_GLB_BASE + 0x400*1)

/*
 * @module: EMAC2
 *
 * @base: BASE+0x18800
 *
 * @size: 1KB
 */
#define SWITCH_DR_REG_EMAC2_BASE           (SWITCH_DR_REG_EMAC_GLB_BASE + 0x400*2)

/*
 * @module: EMAC3
 *
 * @base: BASE+0x18c00
 *
 * @size: 8KB
 */
#define SWITCH_DR_REG_EMAC3_BASE            (SWITCH_DR_REG_EMAC_GLB_BASE + 0x400*3)

/*
 * @module: EMAC4
 *
 * @base: BASE+0x19000
 *
 * @size: 1KB
 */
#define SWITCH_DR_REG_EMAC4_BASE            (SWITCH_DR_REG_EMAC_GLB_BASE + 0x400*4)

#define SWITCH_DR_REG_EMAC5_BASE            (SWITCH_DR_REG_EMAC_GLB_BASE + 0x400*5)
#define SWITCH_DR_REG_EMAC6_BASE            (SWITCH_DR_REG_EMAC_GLB_BASE + 0x400*6)
#define SWITCH_DR_REG_EMAC7_BASE            (SWITCH_DR_REG_EMAC_GLB_BASE + 0x400*7)

// --- PCS ---
/*
 * @module: PCS1
 *
 * @base: BASE+0x1A480
 *
 * @size: 128B
 */
#define DR_REG_PCS1_BASE            (SWITCH_DR_REG_PCS_GLB_BASE + 0x80*1)

#define DR_REG_PCS2_BASE            (SWITCH_DR_REG_PCS_GLB_BASE + 0x80*2)

#define DR_REG_PCS3_BASE            (SWITCH_DR_REG_PCS_GLB_BASE + 0x80*3)

#define DR_REG_PCS4_BASE            (SWITCH_DR_REG_PCS_GLB_BASE + 0x80*4)

#define DR_REG_PCS5_BASE            (SWITCH_DR_REG_PCS_GLB_BASE + 0x80*5)
#define DR_REG_PCS6_BASE            (SWITCH_DR_REG_PCS_GLB_BASE + 0x80*6)
#define DR_REG_PCS7_BASE            (SWITCH_DR_REG_PCS_GLB_BASE + 0x80*7)


/* Basic address, l2 swith register address (1MB) */

#define DR_REG_SWITCH_GLB_BASE                  (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1000)
#define DR_REG_SWITCH_INTR_BASE                 (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1800)
#define DR_REG_SWITCH_SWDBG_BASE                (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x6000)
#define DR_REG_SWITCH_EIB_CNTP_MEM_BASE         (SWITCH_DR_REG_EIB_BLOCK_BASE + 0xf000)
#define DR_REG_SWITCH_EMAC_CNTP_MEM_BASE        (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x11000)
#define DR_REG_SWITCH_TBX_MEM_BASE              (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x13800) //TBX0
#define DR_REG_SWITCH_TBX1_MEM_BASE             (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x13C00) //TBX1 ，Only exist in FPGA env
#define DR_REG_SWITCH_TBX_RX_MEM_BASE           (DR_REG_SWITCH_TBX_MEM_BASE   + 0x240)
#define DR_REG_SWITCH_TBX1_RX_MEM_BASE          (DR_REG_SWITCH_TBX1_MEM_BASE  + 0x240)
#define DR_REG_SWITCH_EMAC_BASE                 (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x18000) //EMAC1,DR_REG_EMAC1_BASE
#define DR_REG_SWITCH_SMA_BASE                  (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1A000)
#define DR_REG_SWITCH_PCS_BASE                  (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1A400) 
#define DR_REG_SWITCH_INTF_10B_TO_20B_BASE      (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1A800) // @note: Only exist in FPGA test env



 







// address TBD
#define DR_REG_SWITCH_AGENT_BASE                (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1e000)
#define DR_REG_SWITCH_AGENT_CNTP_MEM_BASE       (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_BQM_BASE                  (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_EEE_BASE                  (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_LAG_BASE                  (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_MIR_BASE                  (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_PANA_BASE                 (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_PF_CNTP_MEM_BASE          (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_PFWD_BASE                 (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_QMAN_MEM_BASE             (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_QOS_BASE                  (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_RATE_LIMIT_BASE           (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_RMK_BASE                  (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_TABLE_BASE                (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_TARP_BASE                 (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_TRAFFIC_POLICER_BASE      (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_VLAN_BASE                 (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)
#define DR_REG_SWITCH_SERDES_BASE               (SWITCH_DR_REG_EIB_BLOCK_BASE + 0x1f000)//ASIC use，FPGA not use







/* Basic address, l2 swith register address (1MB) */

#define DR_REG_EIB_BLOCK_BASE       0x09100000
#define DR_REG_EMAC_BLOCK_BASE      0x09160000
#define DR_REG_PF_BLOCK_BASE        0x09180000

/* ===========================  EIB Block  =========================== */
/*
 * @module: BMAN
 *
 * @base: 0x00000000
 *
 * @size: 256KB
 */
#define DR_REG_BMAN_BASE            (0x09100000)

#define DR_REG_BMAN_MEM_BASE        (0x09100000)

/*
 * @module: TBX0
 *
 * @base: 0x0x00040000
 *
 * @size: 4KB
 */
#define DR_REG_TBX0_BASE            (0x09140000)
#define DR_REG_TBX0_MEM_BASE        DR_REG_TBX0_BASE

/*
 * @module: EIB CFGI/SW-GLB-CFG
 *
 * @base: 0x00041000
 *
 * @size: 4KB
 */
#define DR_REG_SWGLB_BASE           (0x09141000)

/*
 * @module: TARP0
 *
 * @base: 0x00042000
 *
 * @size: 8KB
 */
#define DR_REG_TARP0_BASE           (0x09142000)
#define DR_REG_TARP0_MEM_BASE       DR_REG_TARP0_BASE

/*
 * @module: TARP1
 *
 * @base: 0x00044000
 *
 * @size: 8KB
 */
#define DR_REG_TARP1_BASE           (0x09144000)
#define DR_REG_TARP1_MEM_BASE       DR_REG_TARP1_BASE

/*
 * @module: TARP2
 *
 * @base: 0x00046000
 *
 * @size: 8KB
 */
#define DR_REG_TARP2_BASE           (0x09146000)
#define DR_REG_TARP2_MEM_BASE       DR_REG_TARP2_BASE

/*
 * @module: TARP3
 *
 * @base: 0x00048000
 *
 * @size: 8KB
 */
#define DR_REG_TARP3_BASE           (0x09148000 )
#define DR_REG_TARP3_MEM_BASE       DR_REG_TARP3_BASE

/*
 * @module: TARP4
 *
 * @base: 0x0004A000
 *
 * @size: 8KB
 */
#define DR_REG_TARP4_BASE           (0x0914A000)
#define DR_REG_TARP4_MEM_BASE       DR_REG_TARP4_BASE

/*
 * @module: TARP
 *
 * @base: 0x00042000
 *
 * @size: 8KB
 */
#define DR_REG_TARP_BASE            (0x09142000)
#define DR_REG_TARP_MEM_BASE        DR_REG_TARP_BASE
#define TARP_OFFSET                 0x2000

/*
 * @module: EIB CNTP
 *
 * @base: 0x00052000
 *
 * @size: 8KB
 */
#define DR_REG_EIB_CNTP_BASE        (0x09152000)
#define DR_REG_EIB_CNTP_MEM_BASE    DR_REG_EIB_CNTP_BASE

/*
 * @module: CNTP
 *
 * @base: 0x00052000
 *
 * @size: 8KB
 */
#define DR_REG_CNTP_BASE            DR_REG_EIB_CNTP_BASE
#define DR_REG_CNTP_MEM_BASE        DR_REG_CNTP_BASE

/*
 * @module: TBX1
 *
 * @base: 0x0x00054000
 *
 * @size: 4KB
 */
#define DR_REG_TBX1_BASE            (0x09154000)
#define DR_REG_TBX1_MEM_BASE        DR_REG_TBX1_BASE

/*
 * @module: TBX
 *
 * @base: 0x0x00040000
 *
 * @size: 4KB
 */
#define DR_REG_TBX_BASE             DR_REG_TBX0_BASE
#define DR_REG_TBX_MEM_BASE         DR_REG_TBX0_BASE

#if(SWITCH_VERSION == 10)
#define TBX_OFFSET                  (DR_REG_TBX1_BASE - DR_REG_TBX0_BASE)
#elif(SWITCH_VERSION == 20)
#define TBX_OFFSET                  (DR_REG_SWITCH_TBX1_MEM_BASE - DR_REG_SWITCH_TBX_MEM_BASE)
#endif
/* ===========================  EMAC Block  =========================== */
/*
 * @module: EMAC GLB CFG
 *
 * @base: 0x00060000
 *
 * @size: 4KB
 */
#define DR_REG_EMAC_GLB_BASE        (0x09160000)

/*
 * @module: EMAC0/PCS0/PHY0
 *
 * @base: 0x00062000
 *
 * @size: 8KB
 */
#define DR_REG_EMAC0_BASE           (0x09162000)

/*
 * @module: EMAC1/PCS1/PHY1
 *
 * @base: 0x00064000
 *
 * @size: 8KB
 */
#define DR_REG_EMAC1_BASE           (0x09164000)

/*
 * @module: EMAC2/PCS2/PHY2
 *
 * @base: 0x00066000
 *
 * @size: 8KB
 */
#define DR_REG_EMAC2_BASE           (0x09166000)

/*
 * @module: EMAC3/PCS3/PHY3
 *
 * @base: 0x00068000
 *
 * @size: 8KB
 */
#define DR_REG_EMAC3_BASE           (0x09168000)

/*
 * @module: EMAC4/PCS4/PHY4
 *
 * @base: 0x0006A000
 *
 * @size: 8KB
 */
#define DR_REG_EMAC4_BASE           (0x0916A000)

/*
 * @module: EMAC/PCS/PHY
 *
 * @base: 0x00062000
 *
 * @size: 8KB
 */
#define DR_REG_EMAC_BASE            (0x09162000)
#if(SWITCH_VERSION == 10)
#define EMAC_OFFSET                 0x2000
#elif(SWITCH_VERSION == 20)
#define EMAC_OFFSET                 0x400
#define PCS_OFFSET                  0x80
#endif

/*
 * @module: EMAC CNTP
 *
 * @base: 0x00072000
 *
 * @size: 8KB
 */
#define DR_REG_EMAC_CNTP_BASE       (0x09172000)
#define DR_REG_EMAC_CNTP_MEM_BASE   DR_REG_EMAC_CNTP_BASE

/* ===========================  PF Block  =========================== */
/*
 * @module: LOOKUP
 *
 * @base: 0x00080000
 *
 * @size: 128KB
 */
#define DR_REG_LOOKUP_BASE          (0x09180000)
#define DR_REG_LOOKUP_MEM_BASE      DR_REG_LOOKUP_BASE

/*
 * @module: QMAN
 *
 * @base: 0x000A0000
 *
 * @size: 64KB
 */
#define DR_REG_QMAN_BASE            (0x091A0000)
#define DR_REG_QMAN_MEM_BASE        DR_REG_QMAN_BASE

/*
 * @module: L2FM
 *
 * @base: 0x000B0000
 *
 * @size: 64KB
 */
#define DR_REG_L2FM_BASE            (0x091B0000)
#define DR_REG_L2FM_MEM_BASE        DR_REG_L2FM_BASE

/*
 * @module: PARSER
 *
 * @base: 0x000C0000
 *
 * @size: 16KB
 */
#define DR_REG_PARSER_BASE          (0x091C0000)
#define DR_REG_PARSER_MEM_BASE      DR_REG_PARSER_BASE

/*
 * @module: PREP
 *
 * @base: 0x000C4000
 *
 * @size: 16KB
 */
#define DR_REG_PREP_BASE            (0x091C4000)
#define DR_REG_PREP_MEM_BASE        DR_REG_PREP_BASE

/*
 * @module: L2PC
 *
 * @base: 0x000C8000
 *
 * @size: 4KB
 */
#define DR_REG_L2PC_BASE            (0x091C8000)
#define DR_REG_L2PC_MEM_BASE        DR_REG_L2PC_BASE

/*
 * @module: PF CFGI
 *
 * @base: 0x000C9000
 *
 * @size: 4KB
 */
#define DR_REG_PF_CFGI_BASE         (0x091C9000)

/*
 * @module: PF CNTP0 (QMAN + L2PC)
 *
 * @base: 0x000CA000
 *
 * @size: 8KB
 */
#define DR_REG_PF0_CNTP_BASE        (0x091CA000)
#define DR_REG_PF0_CNTP_MEM_BASE    DR_REG_PF0_CNTP_BASE

/*
 * @module: PF CNTP1 (PARSER + PREP + L2FM)
 *
 * @base: 0x000CC000
 *
 * @size: 8KB
 */
#define DR_REG_PF1_CNTP_BASE        (0x091CC000)
#define DR_REG_PF1_CNTP_MEM_BASE    DR_REG_PF1_CNTP_BASE

/*
 * @module: AGENT
 *
 * @base: 0x000F8000
 *
 * @size: 4KB
 */
#define DR_REG_AGENT_BASE            (0x091F8000)
#define DR_REG_AGENT_MEM_BASE        DR_REG_AGENT_BASE

#ifndef BIT
#define BIT(_n)     (1UL << (_n))
#endif

#ifndef BITS
#define BITS(_s, _n)     (((1UL << (_n)) - 1) << _s)
#endif

#ifdef __cplusplus
}
#endif

#endif /*_SWITCH_H_ */
