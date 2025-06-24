/*
 * SPDX-FileCopyrightText: 2017-2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_SYSMAP_REG_H_
#define _SOC_SYSMAP_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define DR_REG_SYSMAP_BASE(i)          (0x2FF0F000 + (i)*0x10000)

#define CORE0_SYSMAP_BASE_ADDR(i)          (DR_REG_SYSMAP_BASE(0) + (i)*8)
#define CORE1_SYSMAP_BASE_ADDR(i)          (DR_REG_SYSMAP_BASE(1) + (i)*8)
/* SYSMAP_BASE_ADDR : R/W ;bitpos:[19:0] ;default: */
/*description: SYSMAP_BASE_ADDR is 4KB aligned .*/
#define SYSMAP_BASE_ADDR    0x000FFFFF
#define SYSMAP_BASE_ADDR_M  ((SYSMAP_BASE_ADDR_V) << (SYSMAP_BASE_ADDR_S))
#define SYSMAP_BASE_ADDR_V  0xFFFFF
#define SYSMAP_BASE_ADDR_S  0

#define CORE0_SYSMAP_FLAG(i)          (DR_REG_SYSMAP_BASE(0) + 0x4 + (i)*8)
#define CORE1_SYSMAP_FLAG(i)          (DR_REG_SYSMAP_BASE(1) + 0x4 + (i)*8)
/* when cpu address is out of the 8 SYSMAP_ADDR regions, it will use the
 * default sysmap flag */
#define CORE0_SYSMAP_FLAG_DEFAULT     (DR_REG_SYSMAP_BASE(0) + 0x40)
#define CORE1_SYSMAP_FLAG_DEFAULT     (DR_REG_SYSMAP_BASE(1) + 0x40)
/* SYSMAP_FLAG_STRONG_ORDER: R/W ;bitpos:[4] ;default: 1'd0 ; */
/*description: . */
#define SYSMAP_FLAG_STRONG_ORDER    (BIT(4))
#define SYSMAP_FLAG_STRONG_ORDER_M  ((SYSMAP_FLAG_STRONG_ORDER_V) << (SYSMAP_FLAG_STRONG_ORDER_S))
#define SYSMAP_FLAG_STRONG_ORDER_V  0x1
#define SYSMAP_FLAG_STRONG_ORDER_S  4
/* SYSMAP_FLAG_CACHEABLE: R/W ;bitpos:[3] ;default: 1'd0 ; */
/*description: not used in esp32p4, we use PMA instead. */
#define SYSMAP_FLAG_CACHEABLE    (BIT(3))
#define SYSMAP_FLAG_CACHEABLE_M  ((SYSMAP_FLAG_CACHEABLE_V) << (SYSMAP_FLAG_CACHEABLE_S))
#define SYSMAP_FLAG_CACHEABLE_V  0x1
#define SYSMAP_FLAG_CACHEABLE_S  3
/* SYSMAP_FLAG_BUFFERABLE: R/W ;bitpos:[2] ;default: 1'd0 ; */
/*description: not used in esp32p4. */
#define SYSMAP_FLAG_BUFFERABLE    (BIT(2))
#define SYSMAP_FLAG_BUFFERABLE_M  ((SYSMAP_FLAG_BUFFERABLE_V) << (SYSMAP_FLAG_BUFFERABLE_S))
#define SYSMAP_FLAG_BUFFERABLE_V  0x1
#define SYSMAP_FLAG_BUFFERABLE_S  2

#ifdef __cplusplus
}
#endif



#endif /*_SOC_SYSMAP_REG_H_ */
