// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2023 Espressif Systems Co. Ltd.
 */

#include <stdint.h>
#include "fal_tbx.h"


// User Mode
#if !(defined(KERNEL_MODE)) && defined(USER_MODE)
#include "uhal_tbx.h"
#endif

espsw_error_t fal_tbx_date_check(uint32_t tbx_num, uint8_t *value)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_DATE_CHECK, tbx_num, value);
#else
    ret = uhal_tbx_date_check(tbx_num, value); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_tbx_reg_dump(uint32_t tbx_num, struct fal_reg_dump *reg_dump)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_REG_DUMP, tbx_num, reg_dump);
#else
    ret = uhal_tbx_reg_dump(tbx_num, reg_dump); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_tbx_test_intr(uint32_t tbx_num, uint32_t intr_num)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_INTR_TEST, tbx_num, intr_num);
#else
    ret = uhal_tbx_test_intr(tbx_num, intr_num); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_tbx_pattern_set(uint32_t tbx_num, const struct fal_tbx_pattern *tbx_pattern)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_PATTERN_SET, tbx_num, tbx_pattern);
#else
    ret = uhal_tbx_pattern_set(tbx_num, tbx_pattern); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_tbx_pattern_check(uint32_t tbx_num, struct fal_tbx_pattern *tbx_pattern)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_PATTERN_CHECK, tbx_num, tbx_pattern);
#else
    ret = uhal_tbx_pattern_check(tbx_num, tbx_pattern); //User mode, directly call uhal
#endif

    return ret;
}



#if(SWITCH_VERSION == 20)
espsw_error_t fal_tbx_pattern_set_switch20(uint32_t tbx_num, const struct fal_tbx_pattern_switch20 *tbx_pattern)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_PATTERN_SET, tbx_num, tbx_pattern);
#else
    ret = uhal_tbx_pattern_set(tbx_num, tbx_pattern); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_tbx_pattern_check_switch20(uint32_t tbx_num, struct fal_tbx_pattern_switch20 *tbx_pattern)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_PATTERN_CHECK, tbx_num, tbx_pattern);
#else
    ret = uhal_tbx_pattern_check(tbx_num, tbx_pattern); //User mode, directly call uhal
#endif

    return ret;
}

#endif

espsw_error_t fal_tbx_config(uint32_t tbx_num, const struct fal_tbx_config *tbx_config)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_MODE_SET, tbx_num, tbx_config);
#else
    ret = uhal_tbx_config(tbx_num, tbx_config); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_tbx_config_check(uint32_t tbx_num, struct fal_tbx_config *tbx_config)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_MODE_CHECK, tbx_num, tbx_config);
#else
    ret = uhal_tbx_config_check(tbx_num, tbx_config); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_tbx_tx_action(uint32_t tbx_num, enum fal_tbx_tx_action tx_act)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_TX_ACTION, tbx_num, tx_act);
#else
    ret = uhal_tbx_tx_action(tbx_num, tx_act); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_tbx_rx_action(uint32_t tbx_num, bool enable)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_RX_ACTION, tbx_num, enable);
#else
    ret = uhal_tbx_rx_action(tbx_num, enable); //User mode, directly call uhal
#endif

    return ret;
}

espsw_error_t fal_tbx_rx_data_check(uint32_t tbx_num, struct fal_tbx_pattern *tbx_pattern)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_RXDATA_CHECK, tbx_num, tbx_pattern);
#else
    ret = uhal_tbx_rx_data_check(tbx_num, tbx_pattern); //User mode, directly call uhal
#endif

    return ret;
}

#if(SWITCH_VERSION == 20)
espsw_error_t fal_tbx_rx_data_check_switch20(uint32_t tbx_num, struct fal_tbx_pattern_switch20 *tbx_pattern)
{
    espsw_error_t ret;

#ifdef KERNEL_MODE
    ret = espsw_ioctl_exec(ESPSW_API_TBX_RXDATA_CHECK, tbx_num, tbx_pattern);
#else
    ret = uhal_tbx_rx_data_check(tbx_num, tbx_pattern); //User mode, directly call uhal
#endif

    return ret;
}
#endif