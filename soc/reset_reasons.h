/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

//+-----------------------------------------------Terminology---------------------------------------------+
//|                                                                                                       |
//| CPU Reset:    Reset CPU core only, once reset done, CPU will execute from reset vector                |
//|                                                                                                       |
//| Core Reset:   Reset the whole digital system except RTC sub-system                                    |
//|                                                                                                       |
//| System Reset: Reset the whole digital system, including RTC sub-system                                |
//|                                                                                                       |
//| Chip Reset:   Reset the whole chip, including the analog part                                         |
//|                                                                                                       |
//+-------------------------------------------------------------------------------------------------------+

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NO_MEAN = 0,
    POWERON_RESET = 1,          /**<1, Vbat power on reset*/
    SW_SYS_RESET = 3,           /**<3, Software reset digital core*/
    PMU_SYS_PWR_DOWN_RESET = 5, /**<5, PMU HP system power down reset*/
    HP_SYS_HP_WDT_RESET = 7,    /**<7, HP system reset from HP watchdog*/
    HP_SYS_LP_WDT_RESET = 9,    /**<9, HP system reset from LP watchdog*/
    HP_CORE_HP_WDT_RESET = 11,  /**<11, HP core reset from HP watchdog*/
    SW_CPU_RESET = 12,          /**<12, software reset cpu*/
    HP_CORE_LP_WDT_RESET = 13,  /**<13, HP core reset from LP watchdog*/
    BROWN_OUT_RESET = 15,       /**<15, Reset when the vdd voltage is not stable*/
    CHIP_LP_WDT_RESET = 16,     /**<16, LP watchdog chip reset*/
    SUPER_WDT_RESET = 18,       /**<18, super watchdog reset*/
    GLITCH_RTC_RESET = 19,      /**<19, glitch reset*/
    EFUSE_CRC_ERR_RESET = 20,   /**<20, efuse ecc error reset*/
    CHIP_USB_JTAG_RESET = 22,   /**<22, HP usb jtag chip reset*/
    CHIP_USB_UART_RESET = 23,   /**<23, HP usb uart chip reset*/
    JTAG_RESET = 24,            /**<24, jtag reset*/
    CPU_LOCKUP_RESET = 26,      /**<26, cpu lockup reset*/
} RESET_REASON;

// clang-format off
#define RESET_REASON_STR { \
    "N/A", \
    "POWERON", \
    "N/A", \
    "SW_SYS_RESET", \
    "N/A", \
    "PMU_SYS_PWR_DOWN_RESET", \
    "N/A", \
    "HP_SYS_HP_WDT_RESET", \
    "N/A", \
    "HP_SYS_LP_WDT_RESET", \
    "N/A", \
    "HP_CORE_HP_WDT_RESET", \
    "SW_CPU_RESET", \
    "HP_CORE_LP_WDT_RESET", \
    "N/A", \
    "BROWN_OUT_RESET", \
    "CHIP_LP_WDT_RESET", \
    "N/A", \
    "SUPER_WDT_RESET", \
    "GLITCH_RTC_RESET", \
    "EFUSE_CRC_ERR_RESET", \
    "N/A", \
    "CHIP_USB_JTAG_RESET", \
    "CHIP_USB_UART_RESET", \
    "HP_JTAG_RESET", \
    "N/A", \
    "CPU_LOCKUP_RESET", \
}
// clang-format on

typedef enum {
    NO_SLEEP = 0,
    SDIO_TRIG = BIT0,
    SOFTWARE_TRIG = BIT1,
    HP_GPIO_TRIG = BIT2,
    HP_USB_TRIG = BIT3,
    HP_UART4_TRIG = BIT4,
    HP_UART3_TRIG = BIT5,
    HP_UART2_TRIG = BIT6,
    HP_UART1_TRIG = BIT7,
    HP_UART0_TRIG = BIT8,
    LP_GPIO_TRIG = BIT9,
    LP_UART_TRIG = BIT10,
    EXT_IO_TRIG = BIT11,
    LP_TIMER_0_TIRG = BIT12,
    BOD_TRIG = BIT13,
    VDDBAT_UNDERVOLTAGE_TRIG = BIT14,
    LP_CPU_EXC_TRIG = BIT15,
    ETM_TRIG = BIT16,
    LP_TIMER_1_TRIG = BIT17,
} WAKEUP_REASON;

typedef enum {
    DISEN_WAKEUP = NO_SLEEP,
    SDIO_TRIG_EN = SDIO_TRIG,
    SOFTWARE_TRIG_EN = SOFTWARE_TRIG,
    HP_GPIO_TRIG_EN = HP_GPIO_TRIG,
    HP_USB_TRIG_EN = HP_USB_TRIG,
    HP_UART4_TRIG_EN = HP_UART4_TRIG,
    HP_UART3_TRIG_EN = HP_UART3_TRIG,
    HP_UART2_TRIG_EN = HP_UART2_TRIG,
    HP_UART1_TRIG_EN = HP_UART1_TRIG,
    HP_UART0_TRIG_EN = HP_UART0_TRIG,
    LP_GPIO_TRIG_EN = LP_GPIO_TRIG,
    LP_UART_TRIG_EN = LP_UART_TRIG,
    EXT_IO_TRIG_EN = EXT_IO_TRIG,
    LP_TIMER_0_TIRG_EN = LP_TIMER_0_TIRG,
    BOD_TRIG_EN = BOD_TRIG,
    VDDBAT_UNDERVOLTAGE_TRIG_EN = VDDBAT_UNDERVOLTAGE_TRIG,
    LP_CPU_EXC_TRIG_EN = LP_CPU_EXC_TRIG,
    ETM_TRIG_EN = ETM_TRIG,
    LP_TIMER_1_TRIG_EN = LP_TIMER_1_TRIG,
} WAKEUP_ENABLE;

typedef enum {
    RESET_WAY_SLEEP = 0,
    RESET_WAY_NORMAL = 1,
    RESET_WAY_INVALID = 2,
} RESET_WAY;

#ifdef __cplusplus
}
#endif
