/*
 * SPDX-FileCopyrightText: 2017-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _SOC_BOOT_MODE_H_
#define _SOC_BOOT_MODE_H_

#include "soc.h"
#include "gpio_reg.h" // used for GPIO_STRAP_REG

/* Joint Boot */
#define IS_1XXXX(v) (((v)&0x10) == 0x10)

/* Joint Download */
#define IS_01XXX(v) (((v)&0x18) == 0x08)

/* SPI Nor Boot */
#define IS_00000(v) (((v)&0x1f) == 0x00)

/* SPI Nand Boot */
#define IS_00001(v) (((v)&0x1f) == 0x01)

/* SD/eMMC Boot */
#define IS_00010(v) (((v)&0x1f) == 0x02)

/* USB Boot */
#define IS_00011(v) (((v)&0x1f) == 0x03)

/* ATE/Analog Mode */
#define IS_001XX(v) (((v)&0x14) == 0x04)

// TODO
/*print control*/
#define IS_X1XX(v) (((v)&0x04) == 0x04)

#define BOOT_MODE_GET() (GPIO_REG_READ(GPIO_STRAP_REG))

#define ETS_PRINT_CONTROL_HIGH_LEVEL() IS_X1XX(BOOT_MODE_GET())

#define ETS_IS_JOINT_DOWNLOAD() IS_01XXX(BOOT_MODE_GET())

#define ETS_IS_JOINT_BOOT() IS_1XXXX(BOOT_MODE_GET())

#define ETS_NOR_FLASH_BOOT() IS_00000(BOOT_MODE_GET())

#define ETS_NAND_FLASH_BOOT() IS_00001(BOOT_MODE_GET())

#define ETS_SD_EMMC_BOOT() IS_00010(BOOT_MODE_GET())

#define ETS_USB_BOOT() IS_00011(BOOT_MODE_GET())

#define ETS_IS_ATE_BOOT() IS_001XX(BOOT_MODE_GET())

/*used by  ETS_IS_SDIO_UART_BOOT*/
#define SEL_NO_BOOT        0
#define SEL_SDIO_BOOT      BIT0
#define SEL_UART_BOOT      BIT1
#define SEL_SPI_SLAVE_BOOT BIT2
#define SEL_USB_BOOT       BIT3

#endif /* _SOC_BOOT_MODE_H_ */
