// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2024 Espressif Systems Co. Ltd.
 */

#ifndef _UHAL_PHY_H_
#define _UHAL_PHY_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "espsw_error.h"

/*
 * PHY Address Defination based on FMC Board.
 */
#define PHY0_ADDR   0x3
#define PHY1_ADDR   0x11
#define PHY2_ADDR   0x12
#define PHY3_ADDR   0x14
#define PHY4_ADDR   0x18

/* Generic MII registers. */
#define MII_BMCR		0x00	/* Basic mode control register */
#define MII_BMSR		0x01	/* Basic mode status register  */
#define MII_PHYSID1		0x02	/* PHYS ID 1                   */
#define MII_PHYSID2		0x03	/* PHYS ID 2                   */
#define MII_ADVERTISE		0x04	/* Advertisement control reg   */
#define MII_LPA			0x05	/* Link partner ability reg    */
#define MII_EXPANSION		0x06	/* Expansion register          */
#define MII_CTRL1000		0x09	/* 1000BASE-T control          */
#define MII_STAT1000		0x0a	/* 1000BASE-T status           */
#define	MII_MMD_CTRL		0x0d	/* MMD Access Control Register */
#define	MII_MMD_DATA		0x0e	/* MMD Access Data Register */
#define MII_ESTATUS		0x0f	/* Extended Status             */
#define MII_DCOUNTER		0x12	/* Disconnect counter          */
#define MII_FCSCOUNTER		0x13	/* False carrier counter       */
#define MII_NWAYTEST		0x14	/* N-way auto-neg test reg     */
#define MII_RERRCOUNTER		0x15	/* Receive error counter       */
#define MII_SREVISION		0x16	/* Silicon revision            */
#define MII_RESV1		0x17	/* Reserved...                 */
#define MII_LBRERROR		0x18	/* Lpback, rx, bypass error    */
#define MII_PHYADDR		0x19	/* PHY address                 */
#define MII_RESV2		0x1a	/* Reserved...                 */
#define MII_TPISTATUS		0x1b	/* TPI status for 10mbps       */
#define MII_NCONFIG		0x1c	/* Network interface config    */

/* Basic mode control register. */
#define BMCR_RESV		0x003f	/* Unused...                   */
#define BMCR_SPEED1000		0x0040	/* MSB of Speed (1000)         */
#define BMCR_CTST		0x0080	/* Collision test              */
#define BMCR_FULLDPLX		0x0100	/* Full duplex                 */
#define BMCR_ANRESTART		0x0200	/* Auto negotiation restart    */
#define BMCR_ISOLATE		0x0400	/* Isolate data paths from MII */
#define BMCR_PDOWN		0x0800	/* Enable low power state      */
#define BMCR_ANENABLE		0x1000	/* Enable auto negotiation     */
#define BMCR_SPEED100		0x2000	/* Select 100Mbps              */
#define BMCR_LOOPBACK		0x4000	/* TXD loopback bits           */
#define BMCR_RESET		0x8000	/* Reset to default state      */
#define BMCR_SPEED10		0x0000	/* Select 10Mbps               */

/* Basic mode status register. */
#define BMSR_ERCAP		0x0001	/* Ext-reg capability          */
#define BMSR_JCD		0x0002	/* Jabber detected             */
#define BMSR_LSTATUS		0x0004	/* Link status                 */
#define BMSR_ANEGCAPABLE	0x0008	/* Able to do auto-negotiation */
#define BMSR_RFAULT		0x0010	/* Remote fault detected       */
#define BMSR_ANEGCOMPLETE	0x0020	/* Auto-negotiation complete   */
#define BMSR_RESV		0x00c0	/* Unused...                   */
#define BMSR_ESTATEN		0x0100	/* Extended Status in R15      */
#define BMSR_100HALF2		0x0200	/* Can do 100BASE-T2 HDX       */
#define BMSR_100FULL2		0x0400	/* Can do 100BASE-T2 FDX       */
#define BMSR_10HALF		0x0800	/* Can do 10mbps, half-duplex  */
#define BMSR_10FULL		0x1000	/* Can do 10mbps, full-duplex  */
#define BMSR_100HALF		0x2000	/* Can do 100mbps, half-duplex */
#define BMSR_100FULL		0x4000	/* Can do 100mbps, full-duplex */
#define BMSR_100BASE4		0x8000	/* Can do 100mbps, 4k packets  */

/* Advertisement control register. */
#define ADVERTISE_SLCT		0x001f	/* Selector bits               */
#define ADVERTISE_CSMA		0x0001	/* Only selector supported     */
#define ADVERTISE_10HALF	0x0020	/* Try for 10mbps half-duplex  */
#define ADVERTISE_1000XFULL	0x0020	/* Try for 1000BASE-X full-duplex */
#define ADVERTISE_10FULL	0x0040	/* Try for 10mbps full-duplex  */
#define ADVERTISE_1000XHALF	0x0040	/* Try for 1000BASE-X half-duplex */
#define ADVERTISE_100HALF	0x0080	/* Try for 100mbps half-duplex */
#define ADVERTISE_1000XPAUSE	0x0080	/* Try for 1000BASE-X pause    */
#define ADVERTISE_100FULL	0x0100	/* Try for 100mbps full-duplex */
#define ADVERTISE_1000XPSE_ASYM	0x0100	/* Try for 1000BASE-X asym pause */
#define ADVERTISE_100BASE4	0x0200	/* Try for 100mbps 4k packets  */
#define ADVERTISE_PAUSE_CAP	0x0400	/* Try for pause               */
#define ADVERTISE_PAUSE_ASYM	0x0800	/* Try for asymetric pause     */
#define ADVERTISE_RESV		0x1000	/* Unused...                   */
#define ADVERTISE_RFAULT	0x2000	/* Say we can detect faults    */
#define ADVERTISE_LPACK		0x4000	/* Ack link partners response  */
#define ADVERTISE_NPAGE		0x8000	/* Next page bit               */

#define ADVERTISE_FULL		(ADVERTISE_100FULL | ADVERTISE_10FULL | \
					ADVERTISE_CSMA)
#define ADVERTISE_ALL		(ADVERTISE_10HALF | ADVERTISE_10FULL | \
					ADVERTISE_100HALF | ADVERTISE_100FULL)

/* Link partner ability register. */
#define LPA_SLCT		0x001f	/* Same as advertise selector  */
#define LPA_10HALF		0x0020	/* Can do 10mbps half-duplex   */
#define LPA_1000XFULL		0x0020	/* Can do 1000BASE-X full-duplex */
#define LPA_10FULL		0x0040	/* Can do 10mbps full-duplex   */
#define LPA_1000XHALF		0x0040	/* Can do 1000BASE-X half-duplex */
#define LPA_100HALF		0x0080	/* Can do 100mbps half-duplex  */
#define LPA_1000XPAUSE		0x0080	/* Can do 1000BASE-X pause     */
#define LPA_100FULL		0x0100	/* Can do 100mbps full-duplex  */
#define LPA_1000XPAUSE_ASYM	0x0100	/* Can do 1000BASE-X pause asym*/
#define LPA_100BASE4		0x0200	/* Can do 100mbps 4k packets   */
#define LPA_PAUSE_CAP		0x0400	/* Can pause                   */
#define LPA_PAUSE_ASYM		0x0800	/* Can pause asymetrically     */
#define LPA_RESV		0x1000	/* Unused...                   */
#define LPA_RFAULT		0x2000	/* Link partner faulted        */
#define LPA_LPACK		0x4000	/* Link partner acked us       */
#define LPA_NPAGE		0x8000	/* Next page bit               */

#define LPA_DUPLEX		(LPA_10FULL | LPA_100FULL)
#define LPA_100			(LPA_100FULL | LPA_100HALF | LPA_100BASE4)

/* Expansion register for auto-negotiation. */
#define EXPANSION_NWAY		0x0001	/* Can do N-way auto-nego      */
#define EXPANSION_LCWP		0x0002	/* Got new RX page code word   */
#define EXPANSION_ENABLENPAGE	0x0004	/* This enables npage words    */
#define EXPANSION_NPCAPABLE	0x0008	/* Link partner supports npage */
#define EXPANSION_MFAULTS	0x0010	/* Multiple faults detected    */
#define EXPANSION_RESV		0xffe0	/* Unused...                   */

#define ESTATUS_1000_XFULL	0x8000	/* Can do 1000BaseX Full       */
#define ESTATUS_1000_XHALF	0x4000	/* Can do 1000BaseX Half       */
#define ESTATUS_1000_TFULL	0x2000	/* Can do 1000BT Full          */
#define ESTATUS_1000_THALF	0x1000	/* Can do 1000BT Half          */

/* N-way test register. */
#define NWAYTEST_RESV1		0x00ff	/* Unused...                   */
#define NWAYTEST_LOOPBACK	0x0100	/* Enable loopback for N-way   */
#define NWAYTEST_RESV2		0xfe00	/* Unused...                   */

/* MAC and PHY tx_config_Reg[15:0] for SGMII in-band auto-negotiation.*/
#define ADVERTISE_SGMII		0x0001	/* MAC can do SGMII            */
#define LPA_SGMII		0x0001	/* PHY can do SGMII            */
#define LPA_SGMII_SPD_MASK	0x0c00	/* SGMII speed mask            */
#define LPA_SGMII_FULL_DUPLEX	0x1000	/* SGMII full duplex           */
#define LPA_SGMII_DPX_SPD_MASK	0x1C00	/* SGMII duplex and speed bits */
#define LPA_SGMII_10		0x0000	/* 10Mbps                      */
#define LPA_SGMII_10HALF	0x0000	/* Can do 10mbps half-duplex   */
#define LPA_SGMII_10FULL	0x1000	/* Can do 10mbps full-duplex   */
#define LPA_SGMII_100		0x0400	/* 100Mbps                     */
#define LPA_SGMII_100HALF	0x0400	/* Can do 100mbps half-duplex  */
#define LPA_SGMII_100FULL	0x1400	/* Can do 100mbps full-duplex  */
#define LPA_SGMII_1000		0x0800	/* 1000Mbps                    */
#define LPA_SGMII_1000HALF	0x0800	/* Can do 1000mbps half-duplex */
#define LPA_SGMII_1000FULL	0x1800	/* Can do 1000mbps full-duplex */
#define LPA_SGMII_LINK		0x8000	/* PHY link with copper-side partner */

/* 1000BASE-T Control register */
#define ADVERTISE_1000FULL	0x0200  /* Advertise 1000BASE-T full duplex */
#define ADVERTISE_1000HALF	0x0100  /* Advertise 1000BASE-T half duplex */
#define CTL1000_PREFER_MASTER	0x0400  /* prefer to operate as master */
#define CTL1000_AS_MASTER	0x0800
#define CTL1000_ENABLE_MASTER	0x1000

/* 1000BASE-T Status register */
#define LPA_1000MSFAIL		0x8000	/* Master/Slave resolution failure */
#define LPA_1000MSRES		0x4000	/* Master/Slave resolution status */
#define LPA_1000LOCALRXOK	0x2000	/* Link partner local receiver status */
#define LPA_1000REMRXOK		0x1000	/* Link partner remote receiver status */
#define LPA_1000FULL		0x0800	/* Link partner 1000BASE-T full duplex */
#define LPA_1000HALF		0x0400	/* Link partner 1000BASE-T half duplex */

/* Flow control flags */
#define FLOW_CTRL_TX		0x01
#define FLOW_CTRL_RX		0x02

/* MMD Access Control register fields */
#define MII_MMD_CTRL_DEVAD_MASK	0x1f	/* Mask MMD DEVAD*/
#define MII_MMD_CTRL_ADDR	0x0000	/* Address */
#define MII_MMD_CTRL_NOINCR	0x4000	/* no post increment */
#define MII_MMD_CTRL_INCR_RDWT	0x8000	/* post increment on reads & writes */
#define MII_MMD_CTRL_INCR_ON_WT	0xC000	/* post increment on writes only */

/*
 *  PHY0 uses DP83867 as GPHY/Internal PHY/CPU Port
 */
#define DP83867_PHY_ID		                    0x2000a231
#define DP83867_DEVADDR		                    0x1f

#define MII_DP83867_PHYCTRL	                    0x10
#define MII_DP83867_PHYSTS	                    0x11
#define MII_DP83867_MICR	                    0x12
#define MII_DP83867_ISR		                    0x13
#define DP83867_CFG2		                    0x14
#define DP83867_LEDCR1		                    0x18
#define DP83867_LEDCR2		                    0x19
#define DP83867_CFG3		                    0x1e
#define DP83867_CTRL		                    0x1f

/* Extended Registers */
#define DP83867_FLD_THR_CFG	                    0x002e
#define DP83867_CFG4		                    0x0031
#define DP83867_CFG4_SGMII_ANEG_MASK            (BIT(5) | BIT(6))
#define DP83867_CFG4_SGMII_ANEG_TIMER_11MS      (3 << 5)
#define DP83867_CFG4_SGMII_ANEG_TIMER_800US     (2 << 5)
#define DP83867_CFG4_SGMII_ANEG_TIMER_2US       (1 << 5)
#define DP83867_CFG4_SGMII_ANEG_TIMER_16MS      (0 << 5)

#define DP83867_RGMIICTL	                    0x0032
#define DP83867_STRAP_STS1	                    0x006E
#define DP83867_STRAP_STS2	                    0x006f
#define DP83867_RGMIIDCTL	                    0x0086
#define DP83867_DSP_FFE_CFG	                    0x012c
#define DP83867_RXFCFG		                    0x0134
#define DP83867_RXFPMD1	                        0x0136
#define DP83867_RXFPMD2	                        0x0137
#define DP83867_RXFPMD3	                        0x0138
#define DP83867_RXFSOP1	                        0x0139
#define DP83867_RXFSOP2	                        0x013A
#define DP83867_RXFSOP3	                        0x013B
#define DP83867_IO_MUX_CFG	                    0x0170
#define DP83867_SGMIICTL	                    0x00D3
#define DP83867_10M_SGMII_CFG                   0x016F
#define DP83867_10M_SGMII_RATE_ADAPT_MASK       BIT(7)

#define DP83867_SW_RESET	                    BIT(15)
#define DP83867_SW_RESTART	                    BIT(14)

/* MICR Interrupt bits */
#define MII_DP83867_MICR_AN_ERR_INT_EN		    BIT(15)
#define MII_DP83867_MICR_SPEED_CHNG_INT_EN	    BIT(14)
#define MII_DP83867_MICR_DUP_MODE_CHNG_INT_EN	BIT(13)
#define MII_DP83867_MICR_PAGE_RXD_INT_EN	    BIT(12)
#define MII_DP83867_MICR_AUTONEG_COMP_INT_EN	BIT(11)
#define MII_DP83867_MICR_LINK_STS_CHNG_INT_EN	BIT(10)
#define MII_DP83867_MICR_FALSE_CARRIER_INT_EN	BIT(8)
#define MII_DP83867_MICR_SLEEP_MODE_CHNG_INT_EN	BIT(4)
#define MII_DP83867_MICR_WOL_INT_EN		        BIT(3)
#define MII_DP83867_MICR_XGMII_ERR_INT_EN	    BIT(2)
#define MII_DP83867_MICR_POL_CHNG_INT_EN	    BIT(1)
#define MII_DP83867_MICR_JABBER_INT_EN		    BIT(0)

/* RGMIICTL bits */
#define DP83867_RGMII_TX_CLK_DELAY_EN		    BIT(1)
#define DP83867_RGMII_RX_CLK_DELAY_EN		    BIT(0)

/* SGMIICTL bits */
#define DP83867_SGMII_TYPE		                BIT(14)

/* RXFCFG bits*/
#define DP83867_WOL_MAGIC_EN		            BIT(0)
#define DP83867_WOL_BCAST_EN		            BIT(2)
#define DP83867_WOL_UCAST_EN		            BIT(4)
#define DP83867_WOL_SEC_EN		                BIT(5)
#define DP83867_WOL_ENH_MAC		                BIT(7)

/* STRAP_STS1 bits */
#define DP83867_STRAP_STS1_RESERVED		        BIT(11)

/* STRAP_STS2 bits */
#define DP83867_STRAP_STS2_CLK_SKEW_TX_MASK	    GENMASK(6, 4)
#define DP83867_STRAP_STS2_CLK_SKEW_TX_SHIFT	4
#define DP83867_STRAP_STS2_CLK_SKEW_RX_MASK	    GENMASK(2, 0)
#define DP83867_STRAP_STS2_CLK_SKEW_RX_SHIFT	0
#define DP83867_STRAP_STS2_CLK_SKEW_NONE	    BIT(2)
#define DP83867_STRAP_STS2_STRAP_FLD		    BIT(10)

/* PHY CTRL bits */
#define DP83867_PHYCR_TX_FIFO_DEPTH_SHIFT	    14
#define DP83867_PHYCR_RX_FIFO_DEPTH_SHIFT	    12
#define DP83867_PHYCR_FIFO_DEPTH_MAX		    0x03
#define DP83867_PHYCR_TX_FIFO_DEPTH_MASK	    GENMASK(15, 14)
#define DP83867_PHYCR_RX_FIFO_DEPTH_MASK	    GENMASK(13, 12)
#define DP83867_PHYCR_RESERVED_MASK		        BIT(11)
#define DP83867_PHYCR_FORCE_LINK_GOOD		    BIT(10)

/* RGMIIDCTL bits */
#define DP83867_RGMII_TX_CLK_DELAY_MAX		    0xf
#define DP83867_RGMII_TX_CLK_DELAY_SHIFT	    4
#define DP83867_RGMII_TX_CLK_DELAY_INV	        (DP83867_RGMII_TX_CLK_DELAY_MAX + 1)
#define DP83867_RGMII_RX_CLK_DELAY_MAX		    0xf
#define DP83867_RGMII_RX_CLK_DELAY_SHIFT	    0
#define DP83867_RGMII_RX_CLK_DELAY_INV	        (DP83867_RGMII_RX_CLK_DELAY_MAX + 1)

/* IO_MUX_CFG bits */
#define DP83867_IO_MUX_CFG_IO_IMPEDANCE_MASK	0x1f
#define DP83867_IO_MUX_CFG_IO_IMPEDANCE_MAX	    0x0
#define DP83867_IO_MUX_CFG_IO_IMPEDANCE_MIN	    0x1f
#define DP83867_IO_MUX_CFG_CLK_O_DISABLE	    BIT(6)
#define DP83867_IO_MUX_CFG_CLK_O_SEL_MASK	    (0x1f << 8)
#define DP83867_IO_MUX_CFG_CLK_O_SEL_SHIFT	    8

/* PHY STS bits */
#define DP83867_PHYSTS_1000			            BIT(15)
#define DP83867_PHYSTS_100			            BIT(14)
#define DP83867_PHYSTS_DUPLEX			        BIT(13)
#define DP83867_PHYSTS_AUTONEG			        BIT(11)
#define DP83867_PHYSTS_LINK			            BIT(10)

/* CFG2 bits */
#define DP83867_DOWNSHIFT_EN		            (BIT(8) | BIT(9))
#define DP83867_DOWNSHIFT_ATTEMPT_MASK	        (BIT(10) | BIT(11))
#define DP83867_DOWNSHIFT_1_COUNT_VAL	        0
#define DP83867_DOWNSHIFT_2_COUNT_VAL	        1
#define DP83867_DOWNSHIFT_4_COUNT_VAL	        2
#define DP83867_DOWNSHIFT_8_COUNT_VAL	        3
#define DP83867_DOWNSHIFT_1_COUNT	            1
#define DP83867_DOWNSHIFT_2_COUNT	            2
#define DP83867_DOWNSHIFT_4_COUNT	            4
#define DP83867_DOWNSHIFT_8_COUNT	            8
#define DP83867_SGMII_AUTONEG_EN	            BIT(7)

/* CFG3 bits */
#define DP83867_CFG3_INT_OE			            BIT(7)
#define DP83867_CFG3_ROBUST_AUTO_MDIX		    BIT(9)

/* CFG4 bits */
#define DP83867_CFG4_PORT_MIRROR_EN             BIT(0)

/* FLD_THR_CFG */
#define DP83867_FLD_THR_CFG_ENERGY_LOST_THR_MASK    0x7

#define DP83867_LED_COUNT	                    4

/* LED_DRV bits */
#define DP83867_LED_DRV_EN(x)	                BIT((x) * 4)
#define DP83867_LED_DRV_VAL(x)	                BIT((x) * 4 + 1)


/*
 *  PHY1-PHY4 uses VSC8541 as External PHY Ports
 */
/* Microsemi VSC85xx PHY registers */
/* IEEE 802. Std Registers */
#define MSCC_PHY_BYPASS_CONTROL		            18
#define DISABLE_HP_AUTO_MDIX_MASK	            0x0080
#define DISABLE_PAIR_SWAP_CORR_MASK	            0x0020
#define DISABLE_POLARITY_CORR_MASK	            0x0010
#define PARALLEL_DET_IGNORE_ADVERTISED          0x0008

#define MSCC_PHY_EXT_CNTL_STATUS                22
#define SMI_BROADCAST_WR_EN		                0x0001

#define MSCC_PHY_ERR_RX_CNT		                19
#define MSCC_PHY_ERR_FALSE_CARRIER_CNT	        20
#define MSCC_PHY_ERR_LINK_DISCONNECT_CNT        21
#define ERR_CNT_MASK			                GENMASK(7, 0)

#define MSCC_PHY_EXT_PHY_CNTL_1                 23
#define MAC_IF_SELECTION_MASK                   0x1800
#define MAC_IF_SELECTION_GMII                   0
#define MAC_IF_SELECTION_RMII                   1
#define MAC_IF_SELECTION_RGMII                  2
#define MAC_IF_SELECTION_POS                    11
#define VSC8584_MAC_IF_SELECTION_MASK           0x1000
#define VSC8584_MAC_IF_SELECTION_SGMII          0
#define VSC8584_MAC_IF_SELECTION_1000BASEX      1
#define VSC8584_MAC_IF_SELECTION_POS            12
#define FAR_END_LOOPBACK_MODE_MASK              0x0008
#define MEDIA_OP_MODE_MASK		                0x0700
#define MEDIA_OP_MODE_COPPER		            0
#define MEDIA_OP_MODE_SERDES		            1
#define MEDIA_OP_MODE_1000BASEX		            2
#define MEDIA_OP_MODE_100BASEFX		            3
#define MEDIA_OP_MODE_AMS_COPPER_SERDES	        5
#define MEDIA_OP_MODE_AMS_COPPER_1000BASEX	    6
#define MEDIA_OP_MODE_AMS_COPPER_100BASEFX	    7
#define MEDIA_OP_MODE_POS		                8

#define MSCC_PHY_EXT_PHY_CNTL_2		            24

#define MII_VSC85XX_INT_MASK		            25
#define MII_VSC85XX_INT_MASK_MDINT	            BIT(15)
#define MII_VSC85XX_INT_MASK_LINK_CHG	        BIT(13)
#define MII_VSC85XX_INT_MASK_WOL	            BIT(6)
#define MII_VSC85XX_INT_MASK_EXT	            BIT(5)
#define MII_VSC85XX_INT_STATUS		            26

#define MII_VSC85XX_INT_MASK_MASK   (MII_VSC85XX_INT_MASK_MDINT    | \
					                MII_VSC85XX_INT_MASK_LINK_CHG | \
					                MII_VSC85XX_INT_MASK_EXT)

#define MSCC_PHY_WOL_MAC_CONTROL                27
#define EDGE_RATE_CNTL_POS                      5
#define EDGE_RATE_CNTL_MASK                     0x00E0

#define MSCC_PHY_DEV_AUX_CNTL		            28
#define HP_AUTO_MDIX_X_OVER_IND_MASK	        0x2000

#define MSCC_PHY_LED_MODE_SEL		            29
#define LED_MODE_SEL_POS(x)		                ((x) * 4)
#define LED_MODE_SEL_MASK(x)		            (GENMASK(3, 0) << LED_MODE_SEL_POS(x))
#define LED_MODE_SEL(x, mode)		            (((mode) << LED_MODE_SEL_POS(x)) & LED_MODE_SEL_MASK(x))

#define MSCC_EXT_PAGE_CSR_CNTL_17	            17
#define MSCC_EXT_PAGE_CSR_CNTL_18	            18
#define MSCC_EXT_PAGE_CSR_CNTL_19	            19
#define MSCC_PHY_CSR_CNTL_19_REG_ADDR(x)        (x)
#define MSCC_PHY_CSR_CNTL_19_TARGET(x)	        ((x) << 12)
#define MSCC_PHY_CSR_CNTL_19_READ	            BIT(14)
#define MSCC_PHY_CSR_CNTL_19_CMD	            BIT(15)

#define MSCC_EXT_PAGE_CSR_CNTL_20	            20
#define MSCC_PHY_CSR_CNTL_20_TARGET(x)	        (x)

#define PHY_MCB_TARGET			                0x07
#define PHY_MCB_S6G_WRITE		                BIT(31)
#define PHY_MCB_S6G_READ		                BIT(30)

#define PHY_S6G_PLL5G_CFG0		                0x06
#define PHY_S6G_PLL5G_CFG2		                0x08
#define PHY_S6G_LCPLL_CFG		                0x11
#define PHY_S6G_PLL_CFG			                0x2b
#define PHY_S6G_COMMON_CFG		                0x2c
#define PHY_S6G_GPC_CFG			                0x2e
#define PHY_S6G_MISC_CFG		                0x3b
#define PHY_MCB_S6G_CFG			                0x3f
#define PHY_S6G_DFT_CFG2		                0x3e
#define PHY_S6G_PLL_STATUS		                0x31
#define PHY_S6G_IB_STATUS0		                0x2f

#define PHY_S6G_SYS_RST_POS		                31
#define PHY_S6G_ENA_LANE_POS		            18
#define PHY_S6G_ENA_LOOP_POS		            8
#define PHY_S6G_QRATE_POS		                6
#define PHY_S6G_IF_MODE_POS		                4
#define PHY_S6G_PLL_ENA_OFFS_POS	            21
#define PHY_S6G_PLL_FSM_CTRL_DATA_POS	        8
#define PHY_S6G_PLL_FSM_ENA_POS		            7

#define PHY_S6G_CFG2_FSM_DIS                    1
#define PHY_S6G_CFG2_FSM_CLK_BP                 23

#define MSCC_EXT_PAGE_ACCESS		            31
#define MSCC_PHY_PAGE_STANDARD		            0x0000 /* Standard registers */
#define MSCC_PHY_PAGE_EXTENDED		            0x0001 /* Extended registers */
#define MSCC_PHY_PAGE_EXTENDED_2	            0x0002 /* Extended reg - page 2 */
#define MSCC_PHY_PAGE_EXTENDED_3	            0x0003 /* Extended reg - page 3 */
#define MSCC_PHY_PAGE_EXTENDED_4	            0x0004 /* Extended reg - page 4 */
#define MSCC_PHY_PAGE_CSR_CNTL		            MSCC_PHY_PAGE_EXTENDED_4
#define MSCC_PHY_PAGE_MACSEC		            MSCC_PHY_PAGE_EXTENDED_4
/* Extended reg - GPIO; this is a bank of registers that are shared for all PHYs
 * in the same package.
 */
#define MSCC_PHY_PAGE_EXTENDED_GPIO	            0x0010 /* Extended reg - GPIO */
#define MSCC_PHY_PAGE_1588		                0x1588 /* PTP (1588) */
#define MSCC_PHY_PAGE_TEST		                0x2a30 /* Test reg */
#define MSCC_PHY_PAGE_TR		                0x52b5 /* Token ring registers */
#define MSCC_PHY_GPIO_CONTROL_2                 14

#define MSCC_PHY_COMA_MODE		                0x2000 /* input(1) / output(0) */
#define MSCC_PHY_COMA_OUTPUT		            0x1000 /* value to output */

/* Extended Page 1 Registers */
#define MSCC_PHY_CU_MEDIA_CRC_VALID_CNT	        18
#define VALID_CRC_CNT_CRC_MASK		            GENMASK(13, 0)

#define MSCC_PHY_EXT_MODE_CNTL		            19
#define FORCE_MDI_CROSSOVER_MASK	            0x000C
#define FORCE_MDI_CROSSOVER_MDIX	            0x000C
#define FORCE_MDI_CROSSOVER_MDI		            0x0008

#define MSCC_PHY_ACTIPHY_CNTL		            20
#define PHY_ADDR_REVERSED		                0x0200
#define DOWNSHIFT_CNTL_MASK		                0x001C
#define DOWNSHIFT_EN			                0x0010
#define DOWNSHIFT_CNTL_POS		                2

#define MSCC_PHY_EXT_PHY_CNTL_4		            23
#define PHY_CNTL_4_ADDR_POS		                11

#define MSCC_PHY_VERIPHY_CNTL_2		            25
#define MSCC_PHY_VERIPHY_CNTL_3		            26

/* Extended Page 2 Registers */
#define MSCC_PHY_CU_PMD_TX_CNTL		            16

/* RGMII setting controls at address 18E2, for VSC8572 and similar */
#define VSC8572_RGMII_CNTL		                18
#define VSC8572_RGMII_RX_DELAY_MASK	            0x000E
#define VSC8572_RGMII_TX_DELAY_MASK	            0x0070

/* RGMII controls at address 20E2, for VSC8502 and similar */
#define VSC8502_RGMII_CNTL		                20
#define VSC8502_RGMII_RX_DELAY_MASK	            0x0070
#define VSC8502_RGMII_TX_DELAY_MASK	            0x0007
#define VSC8502_RGMII_RX_CLK_DISABLE	        0x0800

#define MSCC_PHY_WOL_LOWER_MAC_ADDR	            21
#define MSCC_PHY_WOL_MID_MAC_ADDR	            22
#define MSCC_PHY_WOL_UPPER_MAC_ADDR	            23
#define MSCC_PHY_WOL_LOWER_PASSWD	            24
#define MSCC_PHY_WOL_MID_PASSWD		            25
#define MSCC_PHY_WOL_UPPER_PASSWD	            26
#define MSCC_PHY_WOL_MAC_CONTROL	            27
#define SECURE_ON_ENABLE		                0x8000
#define SECURE_ON_PASSWD_LEN_4		            0x4000

#define MSCC_PHY_EXTENDED_INT		            28
#define MSCC_PHY_EXTENDED_INT_MS_EGR	        BIT(9)

/* Extended Page 3 Registers */
#define MSCC_PHY_SERDES_TX_VALID_CNT	        21
#define MSCC_PHY_SERDES_TX_CRC_ERR_CNT	        22
#define MSCC_PHY_SERDES_RX_VALID_CNT	        28
#define MSCC_PHY_SERDES_RX_CRC_ERR_CNT	        29

/* Extended page GPIO Registers */
#define MSCC_DW8051_CNTL_STATUS		            0
#define MICRO_NSOFT_RESET		                0x8000
#define RUN_FROM_INT_ROM		                0x4000
#define AUTOINC_ADDR			                0x2000
#define PATCH_RAM_CLK			                0x1000
#define MICRO_PATCH_EN			                0x0080
#define DW8051_CLK_EN			                0x0010
#define MICRO_CLK_EN			                0x0008
#define MICRO_CLK_DIVIDE(x)		                ((x) >> 1)
#define MSCC_DW8051_VLD_MASK		            0xf1ff

/* x Address in range 1-4 */
#define MSCC_TRAP_ROM_ADDR(x)		            ((x) * 2 + 1)
#define MSCC_PATCH_RAM_ADDR(x)		            (((x) + 1) * 2)
#define MSCC_INT_MEM_ADDR		                11

#define MSCC_INT_MEM_CNTL		                12
#define READ_SFR			                    0x6000
#define READ_PRAM			                    0x4000
#define READ_ROM			                    0x2000
#define READ_RAM			                    0x0000
#define INT_MEM_WRITE_EN		                0x1000
#define EN_PATCH_RAM_TRAP_ADDR(x)	            (0x0100 << ((x) - 1))
#define INT_MEM_DATA_M			                0x00ff
#define INT_MEM_DATA(x)			                (INT_MEM_DATA_M & (x))

#define MSCC_PHY_PROC_CMD		                18
#define PROC_CMD_NCOMPLETED		                0x8000
#define PROC_CMD_FAILED			                0x4000
#define PROC_CMD_SGMII_PORT(x)		            ((x) << 8)
#define PROC_CMD_FIBER_PORT(x)		            (0x0100 << (x) % 4)
#define PROC_CMD_QSGMII_PORT		            0x0c00
#define PROC_CMD_RST_CONF_PORT		            0x0080
#define PROC_CMD_RECONF_PORT		            0x0000
#define PROC_CMD_READ_MOD_WRITE_PORT	        0x0040
#define PROC_CMD_WRITE			                0x0040
#define PROC_CMD_READ			                0x0000
#define PROC_CMD_FIBER_DISABLE		            0x0020
#define PROC_CMD_FIBER_100BASE_FX	            0x0010
#define PROC_CMD_FIBER_1000BASE_X	            0x0000
#define PROC_CMD_SGMII_MAC		                0x0030
#define PROC_CMD_QSGMII_MAC		                0x0020
#define PROC_CMD_NO_MAC_CONF		            0x0000
#define PROC_CMD_1588_DEFAULT_INIT	            0x0010
#define PROC_CMD_NOP			                0x000f
#define PROC_CMD_PHY_INIT		                0x000a
#define PROC_CMD_CRC16			                0x0008
#define PROC_CMD_FIBER_MEDIA_CONF	            0x0001
#define PROC_CMD_MCB_ACCESS_MAC_CONF	        0x0000
#define PROC_CMD_NCOMPLETED_TIMEOUT_MS          500

#define MSCC_PHY_MAC_CFG_FASTLINK	            19
#define MAC_CFG_MASK			                0xc000
#define MAC_CFG_SGMII			                0x0000
#define MAC_CFG_QSGMII			                0x4000
#define MAC_CFG_RGMII			                0x8000

/* Test page Registers */
#define MSCC_PHY_TEST_PAGE_5		            5
#define MSCC_PHY_TEST_PAGE_8		            8
#define TR_CLK_DISABLE			                0x8000
#define MSCC_PHY_TEST_PAGE_9		            9
#define MSCC_PHY_TEST_PAGE_20		            20
#define MSCC_PHY_TEST_PAGE_24		            24

/* Token ring page Registers */
#define MSCC_PHY_TR_CNTL		                16
#define TR_WRITE			                    0x8000
#define TR_ADDR(x)			                    (0x7fff & (x))
#define MSCC_PHY_TR_LSB			                17
#define MSCC_PHY_TR_MSB			                18

/* Microsemi PHY ID's
 *   Code assumes lowest nibble is 0
 */
#define PHY_ID_VSC8501			                0x00070530
#define PHY_ID_VSC8502			                0x00070630
#define PHY_ID_VSC8504			                0x000704c0
#define PHY_ID_VSC8514			                0x00070670
#define PHY_ID_VSC8530			                0x00070560
#define PHY_ID_VSC8531			                0x00070570
#define PHY_ID_VSC8540			                0x00070760
#define PHY_ID_VSC8541			                0x00070770
#define PHY_ID_VSC8552			                0x000704e0
#define PHY_ID_VSC856X			                0x000707e0
#define PHY_ID_VSC8572			                0x000704d0
#define PHY_ID_VSC8574			                0x000704a0
#define PHY_ID_VSC8575			                0x000707d0
#define PHY_ID_VSC8582			                0x000707b0
#define PHY_ID_VSC8584			                0x000707c0

#define MSCC_VDDMAC_1500		                1500
#define MSCC_VDDMAC_1800		                1800
#define MSCC_VDDMAC_2500		                2500
#define MSCC_VDDMAC_3300		                3300

#define DOWNSHIFT_COUNT_MAX		                5

#define MAX_LEDS			                    4

#define VSC8584_SUPP_LED_MODES (BIT(VSC8531_LINK_ACTIVITY) | \
			                    BIT(VSC8531_LINK_1000_ACTIVITY) | \
				                BIT(VSC8531_LINK_100_ACTIVITY) | \
				                BIT(VSC8531_LINK_10_ACTIVITY) | \
				                BIT(VSC8531_LINK_100_1000_ACTIVITY) | \
				                BIT(VSC8531_LINK_10_1000_ACTIVITY) | \
				                BIT(VSC8531_LINK_10_100_ACTIVITY) | \
				                BIT(VSC8584_LINK_100FX_1000X_ACTIVITY) | \
				                BIT(VSC8531_DUPLEX_COLLISION) | \
				                BIT(VSC8531_COLLISION) | \
				                BIT(VSC8531_ACTIVITY) | \
				                BIT(VSC8584_100FX_1000X_ACTIVITY) | \
				                BIT(VSC8531_AUTONEG_FAULT) | \
				                BIT(VSC8531_SERIAL_MODE) | \
				                BIT(VSC8531_FORCE_LED_OFF) | \
				                BIT(VSC8531_FORCE_LED_ON))

#define VSC85XX_SUPP_LED_MODES (BIT(VSC8531_LINK_ACTIVITY) | \
				                BIT(VSC8531_LINK_1000_ACTIVITY) | \
				                BIT(VSC8531_LINK_100_ACTIVITY) | \
				                BIT(VSC8531_LINK_10_ACTIVITY) | \
				                BIT(VSC8531_LINK_100_1000_ACTIVITY) | \
				                BIT(VSC8531_LINK_10_1000_ACTIVITY) | \
				                BIT(VSC8531_LINK_10_100_ACTIVITY) | \
				                BIT(VSC8531_DUPLEX_COLLISION) | \
				                BIT(VSC8531_COLLISION) | \
				                BIT(VSC8531_ACTIVITY) | \
				                BIT(VSC8531_AUTONEG_FAULT) | \
				                BIT(VSC8531_SERIAL_MODE) | \
				                BIT(VSC8531_FORCE_LED_OFF) | \
				                BIT(VSC8531_FORCE_LED_ON))


espsw_error_t uhal_dp83867_phy_init(uint32_t port);
espsw_error_t uhal_vsc85xx_coma_mode_release(uint32_t port);
espsw_error_t uhal_vsc85xx_phy_init(uint32_t port);

espsw_error_t uhal_emac_get_phy_reg(uint32_t emac_id, uint32_t *value);
espsw_error_t uhal_get_phy_status(uint32_t emac_id, struct fal_port_phy_stat *phy_status);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _UHAL_PHY_H_ */

