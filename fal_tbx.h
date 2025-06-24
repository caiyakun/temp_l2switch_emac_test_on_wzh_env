// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2023 Espressif Systems Co. Ltd.
 */

#ifndef _FAL_TBX_H_
#define _FAL_TBX_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdbool.h>
#include "fal_typedef.h"

espsw_error_t fal_tbx_date_check(uint32_t tbx_num, uint8_t *value);
espsw_error_t fal_tbx_reg_dump(uint32_t tbx_num, struct fal_reg_dump *reg_dump);
espsw_error_t fal_tbx_test_intr(uint32_t tbx_num, uint32_t intr_num);
espsw_error_t fal_tbx_pattern_set(uint32_t tbx_num, const struct fal_tbx_pattern *tbx_pattern);
espsw_error_t fal_tbx_pattern_check(uint32_t tbx_num, struct fal_tbx_pattern *tbx_pattern);
#if(SWITCH_VERSION == 20)
espsw_error_t fal_tbx_pattern_set_switch20(uint32_t tbx_num, const struct fal_tbx_pattern_switch20 *tbx_pattern);
espsw_error_t fal_tbx_pattern_check_switch20(uint32_t tbx_num, struct fal_tbx_pattern_switch20 *tbx_pattern);
espsw_error_t fal_tbx_rx_data_check_switch20(uint32_t tbx_num, struct fal_tbx_pattern_switch20 *tbx_pattern);
#endif

espsw_error_t fal_tbx_config(uint32_t tbx_num, const struct fal_tbx_config *tbx_config);
espsw_error_t fal_tbx_config_check(uint32_t tbx_num, struct fal_tbx_config *tbx_config);
espsw_error_t fal_tbx_tx_action(uint32_t tbx_num, enum fal_tbx_tx_action tx_act);
espsw_error_t fal_tbx_rx_action(uint32_t tbx_num, bool enable);
espsw_error_t fal_tbx_rx_data_check(uint32_t tbx_num, struct fal_tbx_pattern *tbx_pattern);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _FAL_TBX_H_ */