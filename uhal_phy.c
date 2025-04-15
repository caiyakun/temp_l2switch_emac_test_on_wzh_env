// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2024 Espressif Systems Co. Ltd.
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#include "fal_typedef.h"

#include "espsw_soc.h"
#include "uhal_reg_access.h"
#include "uhal_phy.h"

/*
 *  PHY0 uses DP83867 as GPHY/Internal PHY/CPU Port
 */
#define	MII_MMD_CTRL		    0x0d	/* MMD Access Control Register */
#define	MII_MMD_DATA		    0x0e	/* MMD Access Data Register */
/* MMD Access Control register fields */
#define MII_MMD_CTRL_DEVAD_MASK	0x1f	/* Mask MMD DEVAD*/
#define MII_MMD_CTRL_ADDR	    0x0000	/* Address */
#define MII_MMD_CTRL_NOINCR	    0x4000	/* no post increment */
#define MII_MMD_CTRL_INCR_RDWT	0x8000	/* post increment on reads & writes */
#define MII_MMD_CTRL_INCR_ON_WT	0xC000	/* post increment on writes only */

static espsw_error_t uhal_dp83867_mmd_phy_indirect(int phy_addr, int devad, uint16_t regnum)
{
    espsw_error_t ret = ESPSW_OK;

    /* Write the desired MMD Devad */
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(0, phy_addr, MII_MMD_CTRL, devad));

    /* Write the desired MMD register address */
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(0, phy_addr, MII_MMD_DATA, regnum));

    /* Select the Function : DATA with no post increment */
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(0, phy_addr, MII_MMD_CTRL, devad | MII_MMD_CTRL_NOINCR));

    return ret;
}

espsw_error_t uhal_dp83867_phy_init(uint32_t port)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr;
    uint16_t reg_val;

    if(port != 0) {
        return ESPSW_BAD_VALUE;
    }
    phy_addr = PHY0_ADDR;

    ESPSW_RTN_ON_ERROR(uhal_dp83867_mmd_phy_indirect(phy_addr, DP83867_DEVADDR, DP83867_SGMIICTL));
    /* Read the content of the MMD's selected register */
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(0, phy_addr, MII_MMD_DATA, &reg_val));

    //SGMII 6 lines mode
    reg_val |= DP83867_SGMII_TYPE;

    ESPSW_RTN_ON_ERROR(uhal_dp83867_mmd_phy_indirect(phy_addr, DP83867_DEVADDR, DP83867_SGMIICTL));
    /* Write the data into MMD's selected register */
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(0, phy_addr, MII_MMD_DATA, reg_val));

    return ret;
}

/*
 *  PHY1-PHY4 uses VSC8541 as External PHY Ports
 */
espsw_error_t uhal_vsc85xx_get_phy_addr(uint32_t port, uint32_t *addr)
{
    espsw_error_t ret = ESPSW_OK;

    switch(port) {
        case 1:
            *addr = PHY1_ADDR;
            break;
        case 2:
            *addr = PHY2_ADDR;
            break;
        case 3:
            *addr = PHY3_ADDR;
            break;
        case 4:
            *addr = PHY4_ADDR;
            break;
        default:
            return ESPSW_OUT_OF_RANGE;
    }
    return ret;
}

espsw_error_t uhal_vsc85xx_coma_mode_release(uint32_t port)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr;

    //phy addr
    ESPSW_RTN_ON_ERROR(uhal_vsc85xx_get_phy_addr(port, &phy_addr));

    //switch page
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_EXTENDED_GPIO));
    //COMA Mode
    //ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_PHY_GPIO_CONTROL_2, MSCC_PHY_COMA_MODE | MSCC_PHY_COMA_OUTPUT));
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_PHY_GPIO_CONTROL_2, 0x200));
    //switch to default page
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_STANDARD));

    return ret;
}

espsw_error_t uhal_vsc85xx_phy_init(uint32_t port)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr;
    uint16_t reg_val;

    //phy addr
    ESPSW_RTN_ON_ERROR(uhal_vsc85xx_get_phy_addr(port, &phy_addr));

    //switch to default page
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_EXT_PAGE_ACCESS, MSCC_PHY_PAGE_STANDARD));

    //PHY CONTROL 1
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, MSCC_PHY_EXT_PHY_CNTL_1, &reg_val));
    reg_val &= ~(MAC_IF_SELECTION_MASK);
    //force to MII/GMII
    reg_val |= (MAC_IF_SELECTION_GMII << MAC_IF_SELECTION_POS);
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, MSCC_PHY_EXT_PHY_CNTL_1, reg_val));

    //SW Reset
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, 0, &reg_val));
    reg_val |= (1 << 15);
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0, reg_val));
    usleep(5000);

    //Advertise Symmetric pause, 100M Full Duplex
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0x04, 0x500));
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0x09, 0x0));

    //Restart Autoegotiate
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(port, phy_addr, 0, &reg_val));
    reg_val |= (1 << 9);
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_set(port, phy_addr, 0, reg_val));
    usleep(5000);

    //COMA Mode
    ESPSW_RTN_ON_ERROR(uhal_vsc85xx_coma_mode_release(port));

    return ret;
}

espsw_error_t uhal_emac_get_phy_reg(uint32_t emac_id, uint32_t *value)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr = 0;
    uint16_t reg_val;

    if(emac_id == 0) {
        phy_addr = PHY0_ADDR;
    } else {
        //phy addr
        ESPSW_RTN_ON_ERROR(uhal_vsc85xx_get_phy_addr(emac_id, &phy_addr));
    }
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, 2, &reg_val));
    *(uint32_t *)value = (reg_val << 16);
    ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, 3, &reg_val));
    *(uint32_t *)value |= reg_val;

    return ret;
}

espsw_error_t uhal_get_phy_status(uint32_t emac_id, struct fal_port_phy_stat *phy_status)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t phy_addr = 0;
    uint16_t reg_val = 0, bmcr_val = 0, bmsr_val = 0, lpa_val = 0, adv_val = 0;
    int sp = -1, dplx = -1;

    //port 0
    if(emac_id == 0) {
        phy_addr = PHY0_ADDR;
        ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_DP83867_PHYSTS, &reg_val));

        /* autoneg */
        phy_status->autoneg_complete = reg_val & DP83867_PHYSTS_AUTONEG ? 1 : 0;
        /* get phy link status */
        if (reg_val & DP83867_PHYSTS_LINK) {
            phy_status->link_status = PORT_LINK_UP;
        } else {
            phy_status->link_status = PORT_LINK_DOWN;
            return ESPSW_OK;
        }
        /* get phy speed */
        if (reg_val & DP83867_PHYSTS_1000)
            phy_status->speed = FAL_SPEED_1000;
        else if (reg_val & DP83867_PHYSTS_100)
            phy_status->speed = FAL_SPEED_100;
        else
            phy_status->speed = FAL_SPEED_10;
        /* get phy duplex */
        if (reg_val & DP83867_PHYSTS_DUPLEX)
            phy_status->duplex = FAL_FULL_DUPLEX;
        else
            phy_status->duplex = FAL_HALF_DUPLEX;

    } else {
        //phy addr
        ESPSW_RTN_ON_ERROR(uhal_vsc85xx_get_phy_addr(emac_id, &phy_addr));

        /* Autoneg is being started, report link as down */
        ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_BMCR, &bmcr_val));
        if (bmcr_val & BMCR_ANRESTART) {
            phy_status->link_status = PORT_LINK_DOWN;
            return ESPSW_OK;
        }

        /* read link and autonegotiation status */
        ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_BMSR, &bmsr_val));
        phy_status->link_status = bmsr_val & BMSR_LSTATUS ? PORT_LINK_UP : PORT_LINK_DOWN;
        phy_status->autoneg_complete = bmsr_val & BMSR_ANEGCOMPLETE ? 1 : 0;

        /* BMCR Status */
        //cmd_printf("port %d, BMCR: 0x%08x BMSR: 0x%08x\n", emac_id, bmcr_val, bmsr_val);
        if (!(bmcr_val & BMCR_ANENABLE)) {
            dplx = (bmcr_val & BMCR_FULLDPLX) ? FAL_FULL_DUPLEX : FAL_HALF_DUPLEX;
            if (bmcr_val & BMCR_SPEED1000)
                sp = FAL_SPEED_1000;
            else if (bmcr_val & BMCR_SPEED100)
                sp = FAL_SPEED_100;
            else
                sp = FAL_SPEED_10;
        } else if (bmsr_val & BMSR_ANEGCOMPLETE) {
            ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_LPA, &lpa_val));
            ESPSW_RTN_ON_ERROR(uhal_phy_reg_get(emac_id, phy_addr, MII_ADVERTISE, &adv_val));
            if (adv_val & lpa_val & ADVERTISE_1000XFULL) {
                dplx = FAL_FULL_DUPLEX;
                sp = FAL_SPEED_1000;
            } else if (adv_val & lpa_val & ADVERTISE_1000XHALF) {
                dplx = FAL_HALF_DUPLEX;
                sp = FAL_SPEED_1000;
            } else if (adv_val & lpa_val & ADVERTISE_100FULL) {
                dplx = FAL_FULL_DUPLEX;
                sp = FAL_SPEED_100;
            } else if (adv_val & lpa_val & ADVERTISE_100HALF) {
                dplx = FAL_HALF_DUPLEX;
                sp = FAL_SPEED_100;
            } else {
                dplx = FAL_HALF_DUPLEX;
                sp = FAL_SPEED_10;
            }
        }

        phy_status->duplex = dplx;
        phy_status->speed = sp;
    }
    return ret;
}

