// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2023 Espressif Systems Co. Ltd.
 */

#ifndef _UHAL_TBX_H_
#define _UHAL_TBX_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "fal_typedef.h"

/* Total two TBX Entities */
enum TBX_ENTITY {
    TBX_NUM0 = 0,
    TBX_NUM1 = 1,
    TBX_MAX,
};

/*
 * TBX Interrupt Struct
 */
struct tbx_intr_info {
    uint32_t reg_bit;
    uint32_t ena_val;
    uint32_t int_val;
    uint32_t raw_val;
    uint32_t st_val;
    const char *name;
};

espsw_error_t uhal_tbx_date_check(uint32_t tbx_num, uint8_t *value);
espsw_error_t uhal_tbx_reg_dump(uint32_t tbx_num, struct fal_reg_dump *reg_dump);
espsw_error_t uhal_tbx_test_intr(uint32_t tbx_num, uint32_t intr_num);
#if(SWITCH_VERSION == 10)
espsw_error_t uhal_tbx_pattern_set(uint32_t tbx_num, const struct fal_tbx_pattern *tbx_pattern);
espsw_error_t uhal_tbx_pattern_check(uint32_t tbx_num, struct fal_tbx_pattern *tbx_pattern);
espsw_error_t uhal_tbx_rx_data_check(uint32_t tbx_num, struct fal_tbx_pattern *tbx_pattern);
#elif(SWITCH_VERSION == 20)
espsw_error_t uhal_tbx_pattern_set(uint32_t tbx_num, const struct fal_tbx_pattern_switch20 *tbx_pattern);
espsw_error_t uhal_tbx_pattern_check(uint32_t tbx_num, struct fal_tbx_pattern_switch20 *tbx_pattern);
espsw_error_t uhal_tbx_rx_data_check(uint32_t tbx_num, struct fal_tbx_pattern_switch20 *tbx_pattern);
#endif

espsw_error_t uhal_tbx_config(uint32_t tbx_num, const struct fal_tbx_config *tbx_config);
espsw_error_t uhal_tbx_config_check(uint32_t tbx_num, struct fal_tbx_config *tbx_config);
espsw_error_t uhal_tbx_tx_action(uint32_t tbx_num, enum fal_tbx_tx_action tx_act);
espsw_error_t uhal_tbx_rx_action(uint32_t tbx_num, bool enable);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _UHAL_TBX_H_ */
