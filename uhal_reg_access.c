// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2023 Espressif Systems Co. Ltd.
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "fal_typedef.h"
#include "uhal_reg_access.h"
#include "soc/soc.h"
#include "espsw_soc.h"
#include "c_types.h"

#define I2C_SLAVE_DEV_ADDR 0x73

/**
 * @brief Get register value
 * @param[in] reg_addr register address
 * @param[in] value[]
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_reg_get(uint32_t reg_addr, uint8_t *value)
{
    *(uint32_t*)value = REG_READ(reg_addr);

    return ESPSW_OK;
}

/**
 * @brief Set register value
 * @param[in] reg_addr register address
 * @param[in] value[]
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_reg_set(uint32_t reg_addr, const uint32_t value)
{
    REG_WRITE(reg_addr, value);

    return ESPSW_OK;
}

/**
 * @brief Get register field value
 * @param[in] reg_addr register address
 * @param[in] bit_offset
 * @param[in] field_len
 * @param[in] value[]
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_reg_field_get(uint32_t reg_addr, uint32_t bit_offset, uint32_t field_len, uint8_t *value)
{
    uint32_t reg_val = 0;

    if ((bit_offset >= 32 || (field_len > 32)) || (field_len == 0))
        return ESPSW_OUT_OF_RANGE;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(reg_addr, (uint8_t *)&reg_val));

    if (32 == field_len) {
        *((uint32_t *) value) = reg_val;
    } else {
        *((uint32_t *) value) = ESPSW_REG_2_FIELD(reg_val, bit_offset, field_len);
    }

    return ESPSW_OK;
}

/**
 * @brief Set register field value
 * @param[in] reg_addr register address
 * @param[in] bit_offset
 * @param[in] field_len
 * @param[in] value[]
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_reg_field_set(uint32_t reg_addr, uint32_t bit_offset, uint32_t field_len, const uint32_t value)
{
    uint32_t reg_val = 0;

    if ((bit_offset >= 32 || (field_len > 32)) || (field_len == 0))
        return ESPSW_OUT_OF_RANGE;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(reg_addr, (uint8_t *)&reg_val));

    if (32 == field_len) {
        reg_val = value;
    } else {
        ESPSW_REG_SET_BY_FIELD_U32(reg_val, value, bit_offset, field_len);
    }
    ESPSW_RTN_ON_ERROR(uhal_reg_set(reg_addr, reg_val));

    return ESPSW_OK;
}
#if(SWITCH_VERSION == 10)
/**
 * @brief Get register value of specific phy
 * @param[in] port port number
 * @param[in] phy_addr phy address
 * @param[in] reg_addr register address
 * @param[out] value[]
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_phy_reg_get(uint32_t port, uint32_t phy_addr, uint32_t reg_addr, uint16_t *value)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val = 0, addr_value;
    uint32_t mac_mdio_addr = 0, mac_mdio_data = 0;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (port >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    mac_mdio_addr = EMAC_MDIO_ADDRESS_REG + (port * EMAC_OFFSET);
    mac_mdio_data = EMAC_MDIO_DATA_REG + (port * EMAC_OFFSET);

    /* Ready value to write */
    addr_value = ((phy_addr & ESPSW_PHY_ADDR_MASK) << ESPSW_PHY_ADDR_OFFSET) |
            ((reg_addr & ESPSW_PHY_REG_MASK) << ESPSW_PHY_REG_OFFSET) |
            (ESPSW_PHY_CLK_FACTOR << ESPSW_PHY_CLK_FACTOR_OFFSET) |
            (ESPSW_PHY_OPS_READ << ESPSW_PHY_OPS_OFFSET); // Read

    //printf("write addr[0x%08x] value : 0x%08x\n", mac_mdio_addr, addr_value);
    ESPSW_RTN_ON_ERROR(uhal_reg_set(mac_mdio_addr, addr_value));

    // check BUSY bit via dealy
    //udelay(5000); //kernel
    //usleep(100*1000);

    /* Got Busy bit */
    do {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(mac_mdio_addr, (uint8_t *)&reg_val));
        if ((reg_val & EMAC_BUSY_BIT) == 0) // progress done
            break;
    } while(1);

    ESPSW_RTN_ON_ERROR(uhal_reg_get(mac_mdio_data, (uint8_t *)&reg_val));
    //printf("got mdio data[0x%08x] value : 0x%08x\n", mac_mdio_data, reg_val);
    *((uint16_t *) value) = ESPSW_REG_2_FIELD(reg_val, ESPSW_PHY_SMA_OFFSET, ESPSW_PHY_SMA_LENGTH);

    return ret;
}

/**
 * @brief Set register value of specific phy
 * @param[in] port port number
 * @param[in] phy_addr phy address
 * @param[in] reg_addr register address
 * @param[in] value
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_phy_reg_set(uint32_t port, uint32_t phy_addr, uint32_t reg_addr, const uint16_t value)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val = 0, addr_value;
    uint32_t mac_mdio_addr = 0, mac_mdio_data = 0;

    /* Only 5 ports (CPU port + Ext. four ports) */
    if (port >= ESPSW_MAX_PORT)
        return ESPSW_OUT_OF_RANGE;

    mac_mdio_addr = EMAC_MDIO_ADDRESS_REG + (port * EMAC_OFFSET);
    mac_mdio_data = EMAC_MDIO_DATA_REG + (port * EMAC_OFFSET);

    /* Set MDIO Data Firstly */
    ESPSW_REG_SET_BY_FIELD_U32(reg_val, value, 0, ESPSW_PHY_SMA_LENGTH);
    //printf("write mdio data[0x%08x] value : 0x%08x\n", mac_mdio_data, reg_val);
    ESPSW_RTN_ON_ERROR(uhal_reg_set(mac_mdio_data, reg_val));

    /* Ready value to write */
    addr_value = ((phy_addr & ESPSW_PHY_ADDR_MASK) << ESPSW_PHY_ADDR_OFFSET) |
            ((reg_addr & ESPSW_PHY_REG_MASK) << ESPSW_PHY_REG_OFFSET) |
            (ESPSW_PHY_CLK_FACTOR << ESPSW_PHY_CLK_FACTOR_OFFSET) |
            (ESPSW_PHY_OPS_WRITE << ESPSW_PHY_OPS_OFFSET); // Write

    //printf("write addr[0x%08x] value : 0x%08x\n", mac_mdio_addr, addr_value);
    ESPSW_RTN_ON_ERROR(uhal_reg_set(mac_mdio_addr, addr_value));

    // check BUSY bit via dealy
    //udelay(5000); //kernel
    //usleep(100*1000);

    /* Got Busy bit */
    do {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(mac_mdio_addr, (uint8_t *)&reg_val));
        if ((reg_val & EMAC_BUSY_BIT) == 0) // progress done
            break;
    } while(1);

    return ret;
}
#elif(SWITCH_VERSION == 20)
#include "gpio_ll.h"
#include "gpio_reg.h"
#include "gpio_sig_map.h"
#include "gpio_struct.h"
#include "soc/io_mux_reg.h"

/**
 * @brief Get register value of specific phy
 * @param[in] port port number
 * @param[in] phy_addr phy address
 * @param[in] reg_addr register address
 * @param[out] value[]
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_phy_reg_get(uint32_t port, uint32_t phy_addr, uint32_t reg_addr, uint16_t *value)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val = 0, addr_value;

#if PCB_NOT_REWORK_SMI_1_TO_4
    switch (port)
    {
        case 1:
            PIN_FUNC_SELECT(IO_MUX_GPIO99_REG,FUNC_GPIO_GPIO);
            gpio_ll_output_enable(&GPIO,99);
            gpio_ll_matrix_out(&GPIO,99,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

            gpio_ll_matrix_in(&GPIO,99,EMAC1_PHY_MDI_PAD_IN_IDX,false);
            PIN_INPUT_ENABLE(IO_MUX_GPIO99_REG);
            break;

        case 2:
            PIN_FUNC_SELECT(IO_MUX_GPIO100_REG,FUNC_GPIO_GPIO);
            gpio_ll_output_enable(&GPIO,100);
            gpio_ll_matrix_out(&GPIO,100,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

            gpio_ll_matrix_in(&GPIO,100,EMAC1_PHY_MDI_PAD_IN_IDX,false);
            PIN_INPUT_ENABLE(IO_MUX_GPIO100_REG);
            break;

        case 3:
            PIN_FUNC_SELECT(IO_MUX_GPIO109_REG,FUNC_GPIO_GPIO);
            gpio_ll_output_enable(&GPIO,109);
            gpio_ll_matrix_out(&GPIO,109,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

            gpio_ll_matrix_in(&GPIO,109,EMAC1_PHY_MDI_PAD_IN_IDX,false);
            PIN_INPUT_ENABLE(IO_MUX_GPIO109_REG);
        break;

        case 4:
            PIN_FUNC_SELECT(IO_MUX_GPIO110_REG,FUNC_GPIO_GPIO);
            gpio_ll_output_enable(&GPIO,110);
            gpio_ll_matrix_out(&GPIO,110,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

            gpio_ll_matrix_in(&GPIO,110,EMAC1_PHY_MDI_PAD_IN_IDX,false);
            PIN_INPUT_ENABLE(IO_MUX_GPIO100_REG);
        break;
        
        default:
            break;
    }
#endif

    /* Ready CFG REG value to write */
    addr_value = (ESPSW_PHY_CLAUSE_MODE << SWITCH_SMA_MDIO_CLAUSE_S) |
                (ESPSW_PHY_CLK_FACTOR << SWITCH_SMA_APPCLKRANGE_S) |
            (ESPSW_PHY_SUPPRESSION_VAL << SWITCH_SMA_MDIO_SUP_PRE_S); 

    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_SMA_MDIO_CFG_REG, addr_value));

    /* Ready CMD REG value to write */
    addr_value = ((phy_addr & ESPSW_PHY_ADDR_MASK) << SWITCH_SMA_MDIO_PHY_PRT_ADDR_S) |
            ((reg_addr & ESPSW_PHY_REG_MASK) << SWITCH_SMA_MDIO_REG_DEV_ADDR_S) |
            (1 << SWITCH_SMA_MDIO_START_BUSY_S) |
            (ESPSW_PHY_OPS_READ << SWITCH_SMA_MDIO_OP_CODE_S); // Read and start

    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_SMA_MDIO_CMD_REG, addr_value));

    /* Got Busy bit */
    do {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_SMA_MDIO_CMD_REG, (uint8_t *)&reg_val));
        if ((reg_val & SWITCH_SMA_MDIO_START_BUSY) == 0) // progress done
            break;
    } while(1);

    ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_SMA_MDIO_READ_DATA_REG, (uint8_t *)&reg_val));
    // printf("got mdio data value : 0x%08x\n", reg_val);
    *((uint16_t *) value) = reg_val;

    return ret;
}

/**
 * @brief Set register value of specific phy
 * @param[in] port port number
 * @param[in] phy_addr phy address
 * @param[in] reg_addr register address
 * @param[in] value
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_phy_reg_set(uint32_t port, uint32_t phy_addr, uint32_t reg_addr, const uint16_t value)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val = 0, addr_value;

#if PCB_NOT_REWORK_SMI_1_TO_4
   switch (port)
    {
        case 1:
            PIN_FUNC_SELECT(IO_MUX_GPIO99_REG,FUNC_GPIO_GPIO);
            gpio_ll_output_enable(&GPIO,99);
            gpio_ll_matrix_out(&GPIO,99,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

            gpio_ll_matrix_in(&GPIO,99,EMAC1_PHY_MDI_PAD_IN_IDX,false);
            PIN_INPUT_ENABLE(IO_MUX_GPIO99_REG);
            break;

        case 2:
            PIN_FUNC_SELECT(IO_MUX_GPIO100_REG,FUNC_GPIO_GPIO);
            gpio_ll_output_enable(&GPIO,100);
            gpio_ll_matrix_out(&GPIO,100,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

            gpio_ll_matrix_in(&GPIO,100,EMAC1_PHY_MDI_PAD_IN_IDX,false);
            PIN_INPUT_ENABLE(IO_MUX_GPIO100_REG);
            break;

        case 3:
            PIN_FUNC_SELECT(IO_MUX_GPIO109_REG,FUNC_GPIO_GPIO);
            gpio_ll_output_enable(&GPIO,109);
            gpio_ll_matrix_out(&GPIO,109,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

            gpio_ll_matrix_in(&GPIO,109,EMAC1_PHY_MDI_PAD_IN_IDX,false);
            PIN_INPUT_ENABLE(IO_MUX_GPIO109_REG);
        break;

        case 4:
            PIN_FUNC_SELECT(IO_MUX_GPIO110_REG,FUNC_GPIO_GPIO);
            gpio_ll_output_enable(&GPIO,110);
            gpio_ll_matrix_out(&GPIO,110,EMAC1_PHY_MDO_PAD_OUT_IDX,false,false);

            gpio_ll_matrix_in(&GPIO,110,EMAC1_PHY_MDI_PAD_IN_IDX,false);
            PIN_INPUT_ENABLE(IO_MUX_GPIO100_REG);
        break;
        
        default:
            break;
    }
#endif

    /* Ready CFG REG value to write */
    addr_value = (ESPSW_PHY_CLAUSE_MODE << SWITCH_SMA_MDIO_CLAUSE_S) |
                (ESPSW_PHY_CLK_FACTOR << SWITCH_SMA_APPCLKRANGE_S) |
            (ESPSW_PHY_SUPPRESSION_VAL << SWITCH_SMA_MDIO_SUP_PRE_S); 

    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_SMA_MDIO_CFG_REG, addr_value));

    /* Ready CMD REG value to write */
    addr_value = ((phy_addr & ESPSW_PHY_ADDR_MASK) << SWITCH_SMA_MDIO_PHY_PRT_ADDR_S) |
            ((reg_addr & ESPSW_PHY_REG_MASK) << SWITCH_SMA_MDIO_REG_DEV_ADDR_S) |
            ((value & 0xffff)<< SWITCH_SMA_MDIO_WDATA_ADDR_S) |
            ( 1 << SWITCH_SMA_MDIO_START_BUSY_S) |
            (ESPSW_PHY_OPS_WRITE << SWITCH_SMA_MDIO_OP_CODE_S); // Write and start

    ESPSW_RTN_ON_ERROR(uhal_reg_set(SWITCH_SMA_MDIO_CMD_REG, addr_value));

    // check BUSY bit via dealy
    //usleep(100*1000);
    
    /* Got Busy bit */
    do {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(SWITCH_SMA_MDIO_CMD_REG, (uint8_t *)&reg_val));
        if ((reg_val & SWITCH_SMA_MDIO_START_BUSY) == 0) // progress done
            break;
    } while(1);

    return ret;
}
#endif
/**
 * @brief Dump registers
 * @param[in] start_reg register start address
 * @param[in] length dump length
 * @param[out] reg_dump register dump result
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_reg_dump(uint32_t start_reg, uint32_t length, struct fal_reg_dump *reg_dump)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_base, reg_len;
    uint32_t reg_addr, reg_count = 0, reg_val = 0;

#define ALIGN_UP(addr, size) (((addr) + (size) - 1) & ~(size - 1))

    /* align register address */
    reg_base = ALIGN_UP(start_reg, 4);
    reg_len = ALIGN_UP(length, 4);

    for (reg_addr = reg_base; reg_addr < reg_base + reg_len; reg_count++) {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(reg_addr, (uint8_t *)&reg_val));
        reg_dump->reg_value[reg_count] = reg_val;
        reg_addr += 4;
    }

    reg_dump->reg_count = reg_count;
    reg_dump->reg_base = reg_base;
    reg_dump->reg_end = reg_addr - 4;
    snprintf((char *)reg_dump->reg_name, sizeof(reg_dump->reg_name), "Address");

    return ret;
}
