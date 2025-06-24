// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2023 Espressif Systems Co. Ltd.
 */

#include <stdint.h>
#include "fal_reg_access.h"


// User Mode
#if !(defined(KERNEL_MODE)) && defined(USER_MODE)
#include "uhal_reg_access.h"
#endif

espsw_error_t fal_reg_get(uint32_t reg_addr, uint8_t *value)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_REG_GET, reg_addr, value);
#else
    ret = uhal_reg_get(reg_addr, value); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_reg_set(uint32_t reg_addr, uint32_t value)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_REG_SET, reg_addr, value);
#else
    ret = uhal_reg_set(reg_addr, value); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_reg_dump(uint32_t start_reg, uint32_t length, struct fal_reg_dump *reg_dump)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_REG_DUMP, start_reg, length, reg_dump);
#else
    ret = uhal_reg_dump(start_reg, length, reg_dump); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_reg_field_get(uint32_t reg_addr, uint32_t bit_offset, uint32_t field_len, uint8_t *value)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_REG_FIELD_GET, reg_addr, bit_offset, field_len, value);
#else
    ret = uhal_reg_field_get(reg_addr, bit_offset, field_len, value); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_reg_field_set(uint32_t reg_addr, uint32_t bit_offset, uint32_t field_len, const uint32_t value)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_REG_FIELD_SET, reg_addr, bit_offset, field_len, value);
#else
    ret = uhal_reg_field_set(reg_addr, bit_offset, field_len, value); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_phy_get(uint32_t port_num, uint32_t phy_addr, uint32_t reg_addr, uint16_t *value)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_PHY_GET, port_num, phy_addr, reg_addr, value);
#else
    ret = uhal_phy_reg_get(port_num, phy_addr, reg_addr, value); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_phy_set(uint32_t port_num, uint32_t phy_addr, uint32_t reg_addr, const uint16_t value)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_PHY_SET, port_num, phy_addr, reg_addr, value);
#else
    ret = uhal_phy_reg_set(port_num, phy_addr, reg_addr, value); //User mode, directly call uhal
#endif

    return ret;
}
