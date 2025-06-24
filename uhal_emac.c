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
#include "uhal_emac.h"
#include "uhal_phy.h"

espsw_error_t uhal_emac_date_check(uint32_t emac_id, uint8_t *value)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (emac_id >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(EMAC_DATE_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    *((uint32_t *) value) = reg_val;

    return ret;
}

espsw_error_t uhal_emac_cfg_default_check(uint32_t emac_id, uint8_t *value)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (emac_id >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    *((uint32_t *) value) = reg_val;

    return ret;
}

espsw_error_t uhal_emac_cfg_set_speed(uint32_t emac_id, enum fal_port_speed speed, enum fal_port_duplex duplex)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (emac_id >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(EMAC_CFG_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));

    if (speed == FAL_SPEED_10 || speed == FAL_SPEED_100)
        reg_val |= (EMAC_PORTSELECT | EMAC_SPEED);
    else if (speed == FAL_SPEED_1000)
        reg_val &= ~EMAC_PORTSELECT;
    else {
        printf("not support speed now\n");
        return ESPSW_BAD_VALUE;
    }

    if (duplex == FAL_FULL_DUPLEX)
        reg_val |= EMAC_DUPLEX_MODE; //100M Full
    else
        reg_val &= ~EMAC_DUPLEX_MODE; //Half

    ESPSW_RTN_ON_ERROR(uhal_reg_set(EMAC_CFG_REG + (emac_id * EMAC_OFFSET), reg_val));

    //open TX/RX
    ESPSW_RTN_ON_ERROR(uhal_reg_set(EMAC_DATA_PATH_EN_REG + (emac_id * EMAC_OFFSET), EMAC_TRANSMIT_E | EMAC_RECEIVE_E));

    return ret;
}

/*
 * EMAC Interrupts
 */
static char* emac_intr_name[] = {
    "EMAC_TX_FIFO_FULL_INT",
    "EMAC_TX_FIFO_EMPTY_INT",
    "EMAC_TX_FIFO_UNDERFLOW_INT",
    "EMAC_RX_FIFO_FULL_INT",
    "EMAC_RX_FIFO_EMPTY_INT",
    "EMAC_RX_FIFO_OVERFLOW_INT",
    "NULL", // bit6
    "EMAC_LINK_STATUS_CHANGE_INT",
    "EMAC_CNTP_LEN_OVERFLOW_INT",
    "EMAC_ERR_CNTP_NUM_OVERFLOW_INT",
    "EMAC_TX_CNTP_NUM_OVERFLOW_INT",
    "EMAC_RX_CNTP_NUM_OVERFLOW_INT",
    "NULL",
    "NULL",
    "NULL",
    "NULL",
    "EMAC_TPE_LPI_ENTER_INT",
    "EMAC_TPE_LPI_EXIT_INT",
    "EMAC_RPE_LPI_ENTER_INT",
    "EMAC_RPE_LPI_EXIT_INT",
};

#define EMAC_INTR_MAX 19

espsw_error_t uhal_emac_intr_set(uint32_t emac_id, uint32_t intr_id, bool enable)
{
    espsw_error_t ret = ESPSW_OK;

    if (intr_id > EMAC_INTR_MAX)
        return ESPSW_BAD_PARAM;

    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(EMAC_INT_ENA_REG + (emac_id * EMAC_OFFSET), intr_id, 1, enable));

    return ret;
}

espsw_error_t uhal_emac_intr_clr(uint32_t emac_id, uint32_t intr_id)
{
    espsw_error_t ret = ESPSW_OK;

    if (intr_id > EMAC_INTR_MAX)
        return ESPSW_BAD_PARAM;

    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(EMAC_INT_CLR_REG + (emac_id * EMAC_OFFSET), intr_id, 1, 1));

    return ret;
}

espsw_error_t uhal_emac_intr_get(uint32_t emac_id, uint32_t intr_id, struct fal_intr_info* intr_info)
{
    espsw_error_t ret = ESPSW_OK;

    if (intr_id > EMAC_INTR_MAX)
        return ESPSW_BAD_PARAM;

    intr_info->reg_bit = intr_id;
    intr_info->name = emac_intr_name[intr_id];

    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(EMAC_INT_REG + (emac_id * EMAC_OFFSET), intr_id, 1, (uint8_t*)(&intr_info->int_val)));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(EMAC_INT_ENA_REG + (emac_id * EMAC_OFFSET), intr_id, 1, (uint8_t*)(&intr_info->ena_val)));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(EMAC_INT_RAW_REG + (emac_id * EMAC_OFFSET), intr_id, 1, (uint8_t*)(&intr_info->raw_val)));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(EMAC_INT_ST_REG + (emac_id * EMAC_OFFSET), intr_id, 1, (uint8_t*)(&intr_info->st_val)));

    return ret;
}

espsw_error_t uhal_get_port_status(uint32_t emac_id, struct fal_port_status *port_stat)
{
    uint32_t reg_val = 0;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (emac_id >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    /* get phy status */
    ESPSW_RTN_ON_ERROR(uhal_get_phy_status(emac_id, &port_stat->phy_stat));

    /* get tx/rx flowcontrol */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(EMAC_FLOW_CTRL_REG + (emac_id * EMAC_OFFSET), (uint8_t *)&reg_val));
    port_stat->tx_flowctrl = reg_val & EMAC_TX_FLOWCTRL_E ? 1 : 0;
    port_stat->rx_flowctrl = reg_val & EMAC_RX_FLOWCTRL_E ? 1 : 0;

    return ESPSW_OK;
}
