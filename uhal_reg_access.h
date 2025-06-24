// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2023 Espressif Systems Co. Ltd.
 */

#ifndef _UHAL_REG_ACCESS_H_
#define _UHAL_REG_ACCESS_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "espsw_error.h"

espsw_error_t uhal_reg_get(uint32_t reg_addr, uint8_t *value);
espsw_error_t uhal_reg_set(uint32_t reg_addr, const uint32_t value);
espsw_error_t uhal_reg_field_get(uint32_t reg_addr, uint32_t bit_offset, uint32_t field_len, uint8_t *value);
espsw_error_t uhal_reg_field_set(uint32_t reg_addr, uint32_t bit_offset, uint32_t field_len, const uint32_t value);
espsw_error_t uhal_phy_reg_get(uint32_t port, uint32_t phy_addr, uint32_t reg_addr, uint16_t *value);
espsw_error_t uhal_phy_reg_set(uint32_t port, uint32_t phy_addr, uint32_t reg_addr, const uint16_t value);
espsw_error_t uhal_reg_dump(uint32_t start_reg, uint32_t length, struct fal_reg_dump *reg_dump);

#if (SWITCH_VERSION == 10)
/* Microsemi PHY Defination */
#define ESPSW_MAX_PORT              5
#define ESPSW_PHY_ADDR_OFFSET       11
#define ESPSW_PHY_ADDR_MASK         0x1F
#define ESPSW_PHY_REG_OFFSET        6
#define ESPSW_PHY_REG_MASK          0x1F

#define ESPSW_PHY_CLK_FACTOR        0x2 // 20-35MHz, SYS clock/16
//#define ESPSW_PHY_CLK_FACTOR        0x3 // 35-60MHz, SYS clock/26
#define ESPSW_PHY_CLK_FACTOR_OFFSET 2

#define ESPSW_PHY_OPS_READ          0x1
#define ESPSW_PHY_OPS_WRITE         0x0
#define ESPSW_PHY_OPS_OFFSET        1

#define ESPSW_PHY_SMA_OFFSET        0x10
#define ESPSW_PHY_SMA_LENGTH        0x10

#elif(SWITCH_VERSION == 20)
#define ESPSW_PHY_SUPPRESSION_VAL               0 //0:disable  1:enable

#define ESPSW_PHY_ADDR_MASK         0x1F
#define ESPSW_PHY_REG_MASK          0x1F


#define ESPSW_PHY_CLK_FACTOR        0x2 // 20-35MHz, SYS clock/16
// #define ESPSW_PHY_CLK_FACTOR            0x3 // 35-60MHz, SYS clock/26

#define ESPSW_PHY_CLAUSE_MODE           0x0 //0:clause22  1:clause45

#define ESPSW_PHY_OPS_ADDR_FOR_CLAUSE45         0x00
#define ESPSW_PHY_OPS_WRITE                     0x1
#define ESPSW_PHY_OPS_READ                      0x2 // read increase for clause45 or read for clause22
#define ESPSW_PHY_OPS_READ_FOR_CLAUSE45         0x3 // read for clause45


#endif
//UHAL Debug Print
#define ESPSW_LOGE(format, ...) //printf(format, ##__VA_ARGS__);printf("\n")
#define ESPSW_LOGD(format, ...) //printf(format, ##__VA_ARGS__);printf("\n")
#define ESPSW_LOGW(format, ...) printf(format, ##__VA_ARGS__);printf("\n")

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _UHAL_REG_ACCESS_H_ */
