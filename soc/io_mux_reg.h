/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once
#include "soc.h"

/* The following are the bit fields for PERIPHS_IO_MUX_x_U registers */
/* Output enable in sleep mode */
#define SLP_OE (BIT(0))
#define SLP_OE_M (BIT(0))
#define SLP_OE_V 1
#define SLP_OE_S 0
/* Pin used for wakeup from sleep */
#define SLP_SEL (BIT(1))
#define SLP_SEL_M (BIT(1))
#define SLP_SEL_V 1
#define SLP_SEL_S 1
/* Pulldown enable in sleep mode */
#define SLP_PD (BIT(2))
#define SLP_PD_M (BIT(2))
#define SLP_PD_V 1
#define SLP_PD_S 2
/* Pullup enable in sleep mode */
#define SLP_PU (BIT(3))
#define SLP_PU_M (BIT(3))
#define SLP_PU_V 1
#define SLP_PU_S 3
/* Input enable in sleep mode */
#define SLP_IE (BIT(4))
#define SLP_IE_M (BIT(4))
#define SLP_IE_V 1
#define SLP_IE_S 4
/* Drive strength in sleep mode */
#define SLP_DRV 0x7
#define SLP_DRV_M (SLP_DRV_V << SLP_DRV_S)
#define SLP_DRV_V 0x7
#define SLP_DRV_S 5
/* Slew Rate */
#define SLP_SL   (BIT(8))
#define SLP_SL_M (BIT(8))
#define SLP_SL_V 1
#define SLP_SL_S 8
/* Pulldown enable */
#define FUN_PD (BIT(9))
#define FUN_PD_M (BIT(9))
#define FUN_PD_V 1
#define FUN_PD_S 9
/* Pullup enable */
#define FUN_PU (BIT(10))
#define FUN_PU_M (BIT(10))
#define FUN_PU_V 1
#define FUN_PU_S 10
/* Input enable */
#define FUN_IE (BIT(11))
#define FUN_IE_M (FUN_IE_V << FUN_IE_S)
#define FUN_IE_V 1
#define FUN_IE_S 11
/* Drive strength */
#define FUN_DRV 0x7
#define FUN_DRV_M (FUN_DRV_V << FUN_DRV_S)
#define FUN_DRV_V 0x7
#define FUN_DRV_S 12
/* Enable slew rate control */
#define FUN_SL   (BIT(15))
#define FUN_SL_M (BIT(15))
#define FUN_SL_V 1
#define FUN_SL_S 15
/* Function select (possible values are defined for each pin as FUNC_pinname_function below) */
#define MCU_SEL 0x7
#define MCU_SEL_M (MCU_SEL_V << MCU_SEL_S)
#define MCU_SEL_V 0x7
#define MCU_SEL_S 16

#define PIN_INPUT_ENABLE(PIN_NAME)               SET_PERI_REG_MASK(PIN_NAME,FUN_IE)
#define PIN_INPUT_DISABLE(PIN_NAME)              CLEAR_PERI_REG_MASK(PIN_NAME,FUN_IE)
#define PIN_SET_DRV(PIN_NAME, drv)            REG_SET_FIELD(PIN_NAME, FUN_DRV, (drv));
#define PIN_PULLUP_DIS(PIN_NAME)                 REG_CLR_BIT(PIN_NAME, FUN_PU)
#define PIN_PULLUP_EN(PIN_NAME)                  REG_SET_BIT(PIN_NAME, FUN_PU)
#define PIN_PULLDWN_DIS(PIN_NAME)             REG_CLR_BIT(PIN_NAME, FUN_PD)
#define PIN_PULLDWN_EN(PIN_NAME)              REG_SET_BIT(PIN_NAME, FUN_PD)
#define PIN_FUNC_SELECT(PIN_NAME, FUNC)      REG_SET_FIELD(PIN_NAME, MCU_SEL, FUNC)

#define IO_MUX_GPIO0_REG                    PERIPHS_IO_MUX_U_PAD_GPIO0
#define IO_MUX_GPIO1_REG                    PERIPHS_IO_MUX_U_PAD_GPIO1
#define IO_MUX_GPIO2_REG                    PERIPHS_IO_MUX_U_PAD_GPIO2
#define IO_MUX_GPIO3_REG                    PERIPHS_IO_MUX_U_PAD_GPIO3
#define IO_MUX_GPIO4_REG                    PERIPHS_IO_MUX_U_PAD_GPIO4
#define IO_MUX_GPIO5_REG                    PERIPHS_IO_MUX_U_PAD_GPIO5
#define IO_MUX_GPIO6_REG                    PERIPHS_IO_MUX_U_PAD_GPIO6
#define IO_MUX_GPIO7_REG                    PERIPHS_IO_MUX_U_PAD_GPIO7
#define IO_MUX_GPIO8_REG                    PERIPHS_IO_MUX_U_PAD_GPIO8
#define IO_MUX_GPIO9_REG                    PERIPHS_IO_MUX_U_PAD_GPIO9
#define IO_MUX_GPIO10_REG                   PERIPHS_IO_MUX_U_PAD_GPIO10
#define IO_MUX_GPIO11_REG                   PERIPHS_IO_MUX_U_PAD_GPIO11
#define IO_MUX_GPIO12_REG                   PERIPHS_IO_MUX_U_PAD_GPIO12
#define IO_MUX_GPIO13_REG                   PERIPHS_IO_MUX_U_PAD_GPIO13
#define IO_MUX_GPIO14_REG                   PERIPHS_IO_MUX_U_PAD_GPIO14
#define IO_MUX_GPIO15_REG                   PERIPHS_IO_MUX_U_PAD_GPIO15
#define IO_MUX_GPIO16_REG                   PERIPHS_IO_MUX_U_PAD_GPIO16
#define IO_MUX_GPIO17_REG                   PERIPHS_IO_MUX_U_PAD_GPIO17
#define IO_MUX_GPIO18_REG                   PERIPHS_IO_MUX_U_PAD_GPIO18
#define IO_MUX_GPIO19_REG                   PERIPHS_IO_MUX_U_PAD_GPIO19
#define IO_MUX_GPIO20_REG                   PERIPHS_IO_MUX_U_PAD_GPIO20
#define IO_MUX_GPIO21_REG                   PERIPHS_IO_MUX_U_PAD_GPIO21
#define IO_MUX_GPIO22_REG                   PERIPHS_IO_MUX_U_PAD_GPIO22
#define IO_MUX_GPIO23_REG                   PERIPHS_IO_MUX_U_PAD_GPIO23
#define IO_MUX_GPIO24_REG                   PERIPHS_IO_MUX_U_PAD_GPIO24
#define IO_MUX_GPIO25_REG                   PERIPHS_IO_MUX_U_PAD_GPIO25
#define IO_MUX_GPIO26_REG                   PERIPHS_IO_MUX_U_PAD_GPIO26
#define IO_MUX_GPIO27_REG                   PERIPHS_IO_MUX_U_PAD_GPIO27
#define IO_MUX_GPIO28_REG                   PERIPHS_IO_MUX_U_PAD_GPIO28
#define IO_MUX_GPIO29_REG                   PERIPHS_IO_MUX_U_PAD_GPIO29
#define IO_MUX_GPIO30_REG                   PERIPHS_IO_MUX_U_PAD_GPIO30
#define IO_MUX_GPIO31_REG                   PERIPHS_IO_MUX_U_PAD_GPIO31
#define IO_MUX_GPIO32_REG                   PERIPHS_IO_MUX_U_PAD_GPIO32
#define IO_MUX_GPIO33_REG                   PERIPHS_IO_MUX_U_PAD_GPIO33
#define IO_MUX_GPIO34_REG                   PERIPHS_IO_MUX_U_PAD_GPIO34
#define IO_MUX_GPIO35_REG                   PERIPHS_IO_MUX_U_PAD_GPIO35
#define IO_MUX_GPIO36_REG                   PERIPHS_IO_MUX_U_PAD_GPIO36
#define IO_MUX_GPIO37_REG                   PERIPHS_IO_MUX_U_PAD_GPIO37
#define IO_MUX_GPIO38_REG                   PERIPHS_IO_MUX_U_PAD_GPIO38
#define IO_MUX_GPIO39_REG                   PERIPHS_IO_MUX_U_PAD_GPIO39
#define IO_MUX_GPIO40_REG                   PERIPHS_IO_MUX_U_PAD_GPIO40
#define IO_MUX_GPIO41_REG                   PERIPHS_IO_MUX_U_PAD_GPIO41
#define IO_MUX_GPIO42_REG                   PERIPHS_IO_MUX_U_PAD_GPIO42
#define IO_MUX_GPIO43_REG                   PERIPHS_IO_MUX_U_PAD_GPIO43
#define IO_MUX_GPIO44_REG                   PERIPHS_IO_MUX_U_PAD_GPIO44
#define IO_MUX_GPIO45_REG                   PERIPHS_IO_MUX_U_PAD_GPIO45
#define IO_MUX_GPIO46_REG                   PERIPHS_IO_MUX_U_PAD_GPIO46
#define IO_MUX_GPIO47_REG                   PERIPHS_IO_MUX_U_PAD_GPIO47
#define IO_MUX_GPIO48_REG                   PERIPHS_IO_MUX_U_PAD_GPIO48
#define IO_MUX_GPIO49_REG                   PERIPHS_IO_MUX_U_PAD_GPIO49
#define IO_MUX_GPIO50_REG                   PERIPHS_IO_MUX_U_PAD_GPIO50
#define IO_MUX_GPIO51_REG                   PERIPHS_IO_MUX_U_PAD_GPIO51
#define IO_MUX_GPIO52_REG                   PERIPHS_IO_MUX_U_PAD_GPIO52
#define IO_MUX_GPIO53_REG                   PERIPHS_IO_MUX_U_PAD_GPIO53
#define IO_MUX_GPIO54_REG                   PERIPHS_IO_MUX_U_PAD_GPIO54
#define IO_MUX_GPIO55_REG                   PERIPHS_IO_MUX_U_PAD_GPIO55
#define IO_MUX_GPIO56_REG                   PERIPHS_IO_MUX_U_PAD_GPIO56
#define IO_MUX_GPIO57_REG                   PERIPHS_IO_MUX_U_PAD_GPIO57
#define IO_MUX_GPIO58_REG                   PERIPHS_IO_MUX_U_PAD_GPIO58
#define IO_MUX_GPIO59_REG                   PERIPHS_IO_MUX_U_PAD_GPIO59
#define IO_MUX_GPIO60_REG                   PERIPHS_IO_MUX_U_PAD_GPIO60
#define IO_MUX_GPIO61_REG                   PERIPHS_IO_MUX_U_PAD_GPIO61
#define IO_MUX_GPIO62_REG                   PERIPHS_IO_MUX_U_PAD_GPIO62
#define IO_MUX_GPIO63_REG                   PERIPHS_IO_MUX_U_PAD_GPIO63
#define IO_MUX_GPIO64_REG                   PERIPHS_IO_MUX_U_PAD_GPIO64
#define IO_MUX_GPIO65_REG                   PERIPHS_IO_MUX_U_PAD_GPIO65
#define IO_MUX_GPIO66_REG                   PERIPHS_IO_MUX_U_PAD_GPIO66
#define IO_MUX_GPIO67_REG                   PERIPHS_IO_MUX_U_PAD_GPIO67
#define IO_MUX_GPIO68_REG                   PERIPHS_IO_MUX_U_PAD_GPIO68
#define IO_MUX_GPIO69_REG                   PERIPHS_IO_MUX_U_PAD_GPIO69
#define IO_MUX_GPIO70_REG                   PERIPHS_IO_MUX_U_PAD_GPIO70
#define IO_MUX_GPIO71_REG                   PERIPHS_IO_MUX_U_PAD_GPIO71
#define IO_MUX_GPIO72_REG                   PERIPHS_IO_MUX_U_PAD_GPIO72
#define IO_MUX_GPIO73_REG                   PERIPHS_IO_MUX_U_PAD_GPIO73
#define IO_MUX_GPIO74_REG                   PERIPHS_IO_MUX_U_PAD_GPIO74
#define IO_MUX_GPIO75_REG                   PERIPHS_IO_MUX_U_PAD_GPIO75
#define IO_MUX_GPIO76_REG                   PERIPHS_IO_MUX_U_PAD_GPIO76
#define IO_MUX_GPIO77_REG                   PERIPHS_IO_MUX_U_PAD_GPIO77
#define IO_MUX_GPIO78_REG                   PERIPHS_IO_MUX_U_PAD_GPIO78
#define IO_MUX_GPIO79_REG                   PERIPHS_IO_MUX_U_PAD_GPIO79
#define IO_MUX_GPIO80_REG                   PERIPHS_IO_MUX_U_PAD_GPIO80
#define IO_MUX_GPIO81_REG                   PERIPHS_IO_MUX_U_PAD_GPIO81
#define IO_MUX_GPIO82_REG                   PERIPHS_IO_MUX_U_PAD_GPIO82
#define IO_MUX_GPIO83_REG                   PERIPHS_IO_MUX_U_PAD_GPIO83
#define IO_MUX_GPIO84_REG                   PERIPHS_IO_MUX_U_PAD_GPIO84
#define IO_MUX_GPIO85_REG                   PERIPHS_IO_MUX_U_PAD_GPIO85
#define IO_MUX_GPIO86_REG                   PERIPHS_IO_MUX_U_PAD_GPIO86
#define IO_MUX_GPIO87_REG                   PERIPHS_IO_MUX_U_PAD_GPIO87
#define IO_MUX_GPIO88_REG                   PERIPHS_IO_MUX_U_PAD_GPIO88
#define IO_MUX_GPIO89_REG                   PERIPHS_IO_MUX_U_PAD_GPIO89
#define IO_MUX_GPIO90_REG                   PERIPHS_IO_MUX_U_PAD_GPIO90
#define IO_MUX_GPIO91_REG                   PERIPHS_IO_MUX_U_PAD_GPIO91
#define IO_MUX_GPIO92_REG                   PERIPHS_IO_MUX_U_PAD_GPIO92
#define IO_MUX_GPIO93_REG                   PERIPHS_IO_MUX_U_PAD_GPIO93
#define IO_MUX_GPIO94_REG                   PERIPHS_IO_MUX_U_PAD_GPIO94
#define IO_MUX_GPIO95_REG                   PERIPHS_IO_MUX_U_PAD_GPIO95
#define IO_MUX_GPIO96_REG                   PERIPHS_IO_MUX_U_PAD_GPIO96
#define IO_MUX_GPIO97_REG                   PERIPHS_IO_MUX_U_PAD_GPIO97
#define IO_MUX_GPIO98_REG                   PERIPHS_IO_MUX_U_PAD_GPIO98
#define IO_MUX_GPIO99_REG                   PERIPHS_IO_MUX_U_PAD_GPIO99
#define IO_MUX_GPIO100_REG                  PERIPHS_IO_MUX_U_PAD_GPIO100
#define IO_MUX_GPIO101_REG                  PERIPHS_IO_MUX_U_PAD_GPIO101
#define IO_MUX_GPIO102_REG                  PERIPHS_IO_MUX_U_PAD_GPIO102
#define IO_MUX_GPIO103_REG                  PERIPHS_IO_MUX_U_PAD_GPIO103
#define IO_MUX_GPIO104_REG                  PERIPHS_IO_MUX_U_PAD_GPIO104
#define IO_MUX_GPIO105_REG                  PERIPHS_IO_MUX_U_PAD_GPIO105
#define IO_MUX_GPIO106_REG                  PERIPHS_IO_MUX_U_PAD_GPIO106
#define IO_MUX_GPIO107_REG                  PERIPHS_IO_MUX_U_PAD_GPIO107
#define IO_MUX_GPIO108_REG                  PERIPHS_IO_MUX_U_PAD_GPIO108
#define IO_MUX_GPIO109_REG                  PERIPHS_IO_MUX_U_PAD_GPIO109
#define IO_MUX_GPIO110_REG                  PERIPHS_IO_MUX_U_PAD_GPIO110
#define IO_MUX_GPIO111_REG                  PERIPHS_IO_MUX_U_PAD_GPIO111
#define IO_MUX_GPIO112_REG                  PERIPHS_IO_MUX_U_PAD_GPIO112
#define IO_MUX_GPIO113_REG                  PERIPHS_IO_MUX_U_PAD_GPIO113
#define IO_MUX_GPIO114_REG                  PERIPHS_IO_MUX_U_PAD_GPIO114
#define IO_MUX_GPIO115_REG                  PERIPHS_IO_MUX_U_PAD_GPIO115
#define IO_MUX_GPIO116_REG                  PERIPHS_IO_MUX_U_PAD_GPIO116
#define IO_MUX_GPIO117_REG                  PERIPHS_IO_MUX_U_PAD_GPIO117
#define IO_MUX_GPIO118_REG                  PERIPHS_IO_MUX_U_PAD_GPIO118
#define IO_MUX_GPIO119_REG                  PERIPHS_IO_MUX_U_PAD_GPIO119
#define IO_MUX_GPIO120_REG                  PERIPHS_IO_MUX_U_PAD_GPIO120
#define IO_MUX_GPIO121_REG                  PERIPHS_IO_MUX_U_PAD_GPIO121
#define IO_MUX_GPIO122_REG                  PERIPHS_IO_MUX_U_PAD_GPIO122
#define IO_MUX_GPIO123_REG                  PERIPHS_IO_MUX_U_PAD_GPIO123

#define GPIO_PAD_PULLUP(num)                     do{PIN_PULLDWN_DIS(IOMUX_REG_GPIO##num);PIN_PULLUP_EN(IOMUX_REG_GPIO##num);}while(0)
#define GPIO_PAD_PULLDOWN(num)                   do{PIN_PULLUP_DIS(IOMUX_REG_GPIO##num);PIN_PULLDWN_EN(IOMUX_REG_GPIO##num);}while(0)
#define GPIO_PAD_SET_DRV(num, drv)               PIN_SET_DRV(IOMUX_REG_GPIO##num, drv)

// used in uart_ll.h and uart_isr.c to init uart gpio
#define U0RXD_GPIO_NUM                           7
#define U0TXD_GPIO_NUM                           6
#define FUNC_GPIO_GPIO                           1

#define SPI_HD_GPIO_NUM                          77
#define SPI_WP_GPIO_NUM                          76
#define SPI_CLK_GPIO_NUM                         78
#define SPI_Q_GPIO_NUM                           75
#define SPI_D_GPIO_NUM                           79
#define SPI_CS0_GPIO_NUM                         74

#define MAX_PAD_GPIO_NUM                         123
// used in rtc_ll.h, keep it same as MAX_PAD_GPIO_NUM
#define MAX_PAD_GPIO_NUM1                        123
#define MAX_GPIO_NUM                             127
// #define HIGH_IO_HOLD_BIT_SHIFT                   32
#define GPIO_NUM_IN_FORCE_0                      0xC0
#define GPIO_NUM_IN_FORCE_1                      0x80
#define GPIO_NUM_IN_INVALID                      0xA0

_Static_assert(GPIO_NUM_IN_INVALID > MAX_GPIO_NUM && GPIO_NUM_IN_INVALID != GPIO_NUM_IN_FORCE_0 && GPIO_NUM_IN_INVALID != GPIO_NUM_IN_FORCE_1,
        "GPIO_NUM_IN_INVALID should NOT be equal to any meaningful gpio number!");

#define REG_IO_MUX_BASE DR_REG_IO_MUX_BASE
#define PIN_CTRL                          (REG_IO_MUX_BASE +0x00)
#define PAD_POWER_SEL                               BIT(15)
#define PAD_POWER_SEL_V                             0x1
#define PAD_POWER_SEL_M                             BIT(15)
#define PAD_POWER_SEL_S                             15

#define PAD_POWER_SWITCH_DELAY                      0x7
#define PAD_POWER_SWITCH_DELAY_V                    0x7
#define PAD_POWER_SWITCH_DELAY_M                    (PAD_POWER_SWITCH_DELAY_V << PAD_POWER_SWITCH_DELAY_S)
#define PAD_POWER_SWITCH_DELAY_S                    12

#define CLK_OUT3                                    IO_MUX_CLK_OUT3
#define CLK_OUT3_V                                  IO_MUX_CLK_OUT3_V
#define CLK_OUT3_S                                  IO_MUX_CLK_OUT3_S
#define CLK_OUT3_M                                  IO_MUX_CLK_OUT3_M
#define CLK_OUT2                                    IO_MUX_CLK_OUT2
#define CLK_OUT2_V                                  IO_MUX_CLK_OUT2_V
#define CLK_OUT2_S                                  IO_MUX_CLK_OUT2_S
#define CLK_OUT2_M                                  IO_MUX_CLK_OUT2_M
#define CLK_OUT1                                    IO_MUX_CLK_OUT1
#define CLK_OUT1_V                                  IO_MUX_CLK_OUT1_V
#define CLK_OUT1_S                                  IO_MUX_CLK_OUT1_S
#define CLK_OUT1_M                                  IO_MUX_CLK_OUT1_M
// definitions above are inherited from previous version of code, should double check

// definitions below are generated from pin_txt.csv
#define PERIPHS_IO_MUX_U_PAD_GPIO0                 (REG_IO_MUX_BASE + 0x0)
#define FUNC_GPIO0_GPIO0                                                 1
#define FUNC_GPIO0_GPIO0_0                                               0

#define PERIPHS_IO_MUX_U_PAD_GPIO1                 (REG_IO_MUX_BASE + 0x4)
#define FUNC_GPIO1_GPIO1                                                 1
#define FUNC_GPIO1_GPIO1_0                                               0

#define PERIPHS_IO_MUX_U_PAD_GPIO2                 (REG_IO_MUX_BASE + 0x8)
#define FUNC_GPIO2_GPIO2                                                 1
#define FUNC_GPIO2_MTCK                                                  0

#define PERIPHS_IO_MUX_U_PAD_GPIO3                 (REG_IO_MUX_BASE + 0xC)
#define FUNC_GPIO3_GPIO3                                                 1
#define FUNC_GPIO3_MTDI                                                  0

#define PERIPHS_IO_MUX_U_PAD_GPIO4                (REG_IO_MUX_BASE + 0x10)
#define FUNC_GPIO4_GPIO4                                                 1
#define FUNC_GPIO4_MTMS                                                  0

#define PERIPHS_IO_MUX_U_PAD_GPIO5                (REG_IO_MUX_BASE + 0x14)
#define FUNC_GPIO5_GPIO5                                                 1
#define FUNC_GPIO5_MTDO                                                  0

#define PERIPHS_IO_MUX_U_PAD_GPIO6                (REG_IO_MUX_BASE + 0x18)
#define FUNC_GPIO6_GPIO6                                                 1
#define FUNC_GPIO6_UART0_TXD_PAD                                         0

#define PERIPHS_IO_MUX_U_PAD_GPIO7                (REG_IO_MUX_BASE + 0x1C)
#define FUNC_GPIO7_GPIO7                                                 1
#define FUNC_GPIO7_UART0_RXD_PAD                                         0

#define PERIPHS_IO_MUX_U_PAD_GPIO8                (REG_IO_MUX_BASE + 0x20)
#define FUNC_GPIO8_GPIO8                                                 1
#define FUNC_GPIO8_UART1_TXD_PAD                                         0

#define PERIPHS_IO_MUX_U_PAD_GPIO9                (REG_IO_MUX_BASE + 0x24)
#define FUNC_GPIO9_GPIO9                                                 1
#define FUNC_GPIO9_UART1_RXD_PAD                                         0

#define PERIPHS_IO_MUX_U_PAD_GPIO10               (REG_IO_MUX_BASE + 0x28)
#define FUNC_GPIO10_DBG_PSRAM_CK_PAD                                     4
#define FUNC_GPIO10_SPI2_HOLD_PAD                                        2
#define FUNC_GPIO10_GPIO10                                               1
#define FUNC_GPIO10_EMAC1_PHY_RXDV_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO11               (REG_IO_MUX_BASE + 0x2C)
#define FUNC_GPIO11_DBG_PSRAM_CS_PAD                                     4
#define FUNC_GPIO11_SPI2_CS_PAD                                          2
#define FUNC_GPIO11_GPIO11                                               1
#define FUNC_GPIO11_EMAC1_PHY_RXD0_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO12               (REG_IO_MUX_BASE + 0x30)
#define FUNC_GPIO12_DBG_PSRAM_D_PAD                                      4
#define FUNC_GPIO12_SPI2_D_PAD                                           2
#define FUNC_GPIO12_GPIO12                                               1
#define FUNC_GPIO12_EMAC1_PHY_RXD1_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO13               (REG_IO_MUX_BASE + 0x34)
#define FUNC_GPIO13_DBG_PSRAM_Q_PAD                                      4
#define FUNC_GPIO13_SPI2_CK_PAD                                          2
#define FUNC_GPIO13_GPIO13                                               1
#define FUNC_GPIO13_EMAC1_PHY_RXD2_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO14               (REG_IO_MUX_BASE + 0x38)
#define FUNC_GPIO14_DBG_PSRAM_WP_PAD                                     4
#define FUNC_GPIO14_SPI2_Q_PAD                                           2
#define FUNC_GPIO14_GPIO14                                               1
#define FUNC_GPIO14_EMAC1_PHY_RXD3_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO15               (REG_IO_MUX_BASE + 0x3C)
#define FUNC_GPIO15_DBG_PSRAM_HOLD_PAD                                   4
#define FUNC_GPIO15_SPI2_WP_PAD                                          2
#define FUNC_GPIO15_GPIO15                                               1
#define FUNC_GPIO15_EMAC1_PHY_RX_CLK_PAD                                 0

#define PERIPHS_IO_MUX_U_PAD_GPIO16               (REG_IO_MUX_BASE + 0x40)
#define FUNC_GPIO16_DBG_PSRAM_DQ4_PAD                                    4
#define FUNC_GPIO16_REF_125M_CLK_PAD                                     2
#define FUNC_GPIO16_GPIO16                                               1
#define FUNC_GPIO16_EMAC1_PHY_TX_CLK_PAD                                 0

#define PERIPHS_IO_MUX_U_PAD_GPIO17               (REG_IO_MUX_BASE + 0x44)
#define FUNC_GPIO17_DBG_PSRAM_DQ5_PAD                                    4
#define FUNC_GPIO17_PCIE0_INNER_CLK_PAD                                  3
#define FUNC_GPIO17_GPIO17                                               1
#define FUNC_GPIO17_EMAC1_PHY_TXEN_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO18               (REG_IO_MUX_BASE + 0x48)
#define FUNC_GPIO18_DBG_PSRAM_DQ6_PAD                                    4
#define FUNC_GPIO18_PCIE1_INNER_CLK_PAD                                  3
#define FUNC_GPIO18_GPIO18                                               1
#define FUNC_GPIO18_EMAC1_PHY_TXD0_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO19               (REG_IO_MUX_BASE + 0x4C)
#define FUNC_GPIO19_DBG_PSRAM_DQ7_PAD                                    4
#define FUNC_GPIO19_GPIO19                                               1
#define FUNC_GPIO19_EMAC1_PHY_TXD1_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO20               (REG_IO_MUX_BASE + 0x50)
#define FUNC_GPIO20_DBG_PSRAM_DQS_0_PAD                                  4
#define FUNC_GPIO20_GPIO20                                               1
#define FUNC_GPIO20_EMAC1_PHY_TXD2_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO21               (REG_IO_MUX_BASE + 0x54)
#define FUNC_GPIO21_DBG_PSRAM_DQ8_PAD                                    4
#define FUNC_GPIO21_SPI2_CS_PAD                                          3
#define FUNC_GPIO21_GPIO21                                               1
#define FUNC_GPIO21_EMAC1_PHY_TXD3_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO22               (REG_IO_MUX_BASE + 0x58)
#define FUNC_GPIO22_DBG_PSRAM_DQ9_PAD                                    4
#define FUNC_GPIO22_SPI2_D_PAD                                           3
#define FUNC_GPIO22_GPIO22                                               1
#define FUNC_GPIO22_EMAC2_PHY_RXDV_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO23               (REG_IO_MUX_BASE + 0x5C)
#define FUNC_GPIO23_DBG_PSRAM_DQ10_PAD                                   4
#define FUNC_GPIO23_SPI2_CK_PAD                                          3
#define FUNC_GPIO23_GPIO23                                               1
#define FUNC_GPIO23_EMAC2_PHY_RXD0_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO24               (REG_IO_MUX_BASE + 0x60)
#define FUNC_GPIO24_DBG_PSRAM_DQ11_PAD                                   4
#define FUNC_GPIO24_SPI2_Q_PAD                                           3
#define FUNC_GPIO24_GPIO24                                               1
#define FUNC_GPIO24_EMAC2_PHY_RXD1_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO25               (REG_IO_MUX_BASE + 0x64)
#define FUNC_GPIO25_DBG_PSRAM_DQ12_PAD                                   4
#define FUNC_GPIO25_SPI2_HOLD_PAD                                        3
#define FUNC_GPIO25_GPIO25                                               1
#define FUNC_GPIO25_EMAC2_PHY_RXD2_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO26               (REG_IO_MUX_BASE + 0x68)
#define FUNC_GPIO26_DBG_PSRAM_DQ13_PAD                                   4
#define FUNC_GPIO26_SPI2_WP_PAD                                          3
#define FUNC_GPIO26_GPIO26                                               1
#define FUNC_GPIO26_EMAC2_PHY_RXD3_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO27               (REG_IO_MUX_BASE + 0x6C)
#define FUNC_GPIO27_DBG_PSRAM_DQ14_PAD                                   4
#define FUNC_GPIO27_SPI2_IO4_PAD                                         3
#define FUNC_GPIO27_GPIO27                                               1
#define FUNC_GPIO27_EMAC2_PHY_RX_CLK_PAD                                 0

#define PERIPHS_IO_MUX_U_PAD_GPIO28               (REG_IO_MUX_BASE + 0x70)
#define FUNC_GPIO28_DBG_PSRAM_DQ15_PAD                                   4
#define FUNC_GPIO28_SPI2_IO5_PAD                                         3
#define FUNC_GPIO28_REF_125M_CLK_PAD                                     2
#define FUNC_GPIO28_GPIO28                                               1
#define FUNC_GPIO28_EMAC2_PHY_TX_CLK_PAD                                 0

#define PERIPHS_IO_MUX_U_PAD_GPIO29               (REG_IO_MUX_BASE + 0x74)
#define FUNC_GPIO29_DBG_PSRAM_DQS_1_PAD                                  4
#define FUNC_GPIO29_SPI2_IO6_PAD                                         3
#define FUNC_GPIO29_GPIO29                                               1
#define FUNC_GPIO29_EMAC2_PHY_TXEN_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO30               (REG_IO_MUX_BASE + 0x78)
#define FUNC_GPIO30_SPI2_IO7_PAD                                         3
#define FUNC_GPIO30_GPIO30                                               1
#define FUNC_GPIO30_EMAC2_PHY_TXD0_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO31               (REG_IO_MUX_BASE + 0x7C)
#define FUNC_GPIO31_DBG_FLASH_CS_PAD                                     4
#define FUNC_GPIO31_SPI2_DQS_PAD                                         3
#define FUNC_GPIO31_GPIO31                                               1
#define FUNC_GPIO31_EMAC2_PHY_TXD1_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO32               (REG_IO_MUX_BASE + 0x80)
#define FUNC_GPIO32_DBG_FLASH_Q_PAD                                      4
#define FUNC_GPIO32_GPIO32                                               1
#define FUNC_GPIO32_EMAC2_PHY_TXD2_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO33               (REG_IO_MUX_BASE + 0x84)
#define FUNC_GPIO33_DBG_FLASH_WP_PAD                                     4
#define FUNC_GPIO33_GPIO33                                               1
#define FUNC_GPIO33_EMAC2_PHY_TXD3_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO34               (REG_IO_MUX_BASE + 0x88)
#define FUNC_GPIO34_DBG_FLASH_HOLD_PAD                                   4
#define FUNC_GPIO34_GPIO34                                               1
#define FUNC_GPIO34_GPIO34_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO35               (REG_IO_MUX_BASE + 0x8C)
#define FUNC_GPIO35_DBG_FLASH_CK_PAD                                     4
#define FUNC_GPIO35_GPIO35                                               1
#define FUNC_GPIO35_GPIO35_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO36               (REG_IO_MUX_BASE + 0x90)
#define FUNC_GPIO36_DBG_FLASH_D_PAD                                      4
#define FUNC_GPIO36_GPIO36                                               1
#define FUNC_GPIO36_GPIO36_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO37               (REG_IO_MUX_BASE + 0x94)
#define FUNC_GPIO37_GPIO37                                               1
#define FUNC_GPIO37_GPIO37_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO38               (REG_IO_MUX_BASE + 0x98)
#define FUNC_GPIO38_GPIO38                                               1
#define FUNC_GPIO38_EMAC3_PHY_RXDV_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO39               (REG_IO_MUX_BASE + 0x9C)
#define FUNC_GPIO39_GPIO39                                               1
#define FUNC_GPIO39_EMAC3_PHY_RXD0_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO40               (REG_IO_MUX_BASE + 0xA0)
#define FUNC_GPIO40_GPIO40                                               1
#define FUNC_GPIO40_EMAC3_PHY_RXD1_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO41               (REG_IO_MUX_BASE + 0xA4)
#define FUNC_GPIO41_GPIO41                                               1
#define FUNC_GPIO41_EMAC3_PHY_RXD2_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO42               (REG_IO_MUX_BASE + 0xA8)
#define FUNC_GPIO42_GPIO42                                               1
#define FUNC_GPIO42_EMAC3_PHY_RXD3_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO43               (REG_IO_MUX_BASE + 0xAC)
#define FUNC_GPIO43_GPIO43                                               1
#define FUNC_GPIO43_EMAC3_PHY_RX_CLK_PAD                                 0

#define PERIPHS_IO_MUX_U_PAD_GPIO44               (REG_IO_MUX_BASE + 0xB0)
#define FUNC_GPIO44_REF_125M_CLK_PAD                                     2
#define FUNC_GPIO44_GPIO44                                               1
#define FUNC_GPIO44_EMAC3_PHY_TX_CLK_PAD                                 0

#define PERIPHS_IO_MUX_U_PAD_GPIO45               (REG_IO_MUX_BASE + 0xB4)
#define FUNC_GPIO45_GPIO45                                               1
#define FUNC_GPIO45_EMAC3_PHY_TXEN_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO46               (REG_IO_MUX_BASE + 0xB8)
#define FUNC_GPIO46_GPIO46                                               1
#define FUNC_GPIO46_EMAC3_PHY_TXD0_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO47               (REG_IO_MUX_BASE + 0xBC)
#define FUNC_GPIO47_GPIO47                                               1
#define FUNC_GPIO47_EMAC3_PHY_TXD1_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO48               (REG_IO_MUX_BASE + 0xC0)
#define FUNC_GPIO48_GPIO48                                               1
#define FUNC_GPIO48_EMAC3_PHY_TXD2_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO49               (REG_IO_MUX_BASE + 0xC4)
#define FUNC_GPIO49_GPIO49                                               1
#define FUNC_GPIO49_EMAC3_PHY_TXD3_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO50               (REG_IO_MUX_BASE + 0xC8)
#define FUNC_GPIO50_GPIO50                                               1
#define FUNC_GPIO50_EMAC4_PHY_RXDV_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO51               (REG_IO_MUX_BASE + 0xCC)
#define FUNC_GPIO51_GPIO51                                               1
#define FUNC_GPIO51_EMAC4_PHY_RXD0_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO52               (REG_IO_MUX_BASE + 0xD0)
#define FUNC_GPIO52_GPIO52                                               1
#define FUNC_GPIO52_EMAC4_PHY_RXD1_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO53               (REG_IO_MUX_BASE + 0xD4)
#define FUNC_GPIO53_GPIO53                                               1
#define FUNC_GPIO53_EMAC4_PHY_RXD2_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO54               (REG_IO_MUX_BASE + 0xD8)
#define FUNC_GPIO54_GPIO54                                               1
#define FUNC_GPIO54_EMAC4_PHY_RXD3_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO55               (REG_IO_MUX_BASE + 0xDC)
#define FUNC_GPIO55_GPIO55                                               1
#define FUNC_GPIO55_EMAC4_PHY_RX_CLK_PAD                                 0

#define PERIPHS_IO_MUX_U_PAD_GPIO56               (REG_IO_MUX_BASE + 0xE0)
#define FUNC_GPIO56_REF_125M_CLK_PAD                                     2
#define FUNC_GPIO56_GPIO56                                               1
#define FUNC_GPIO56_EMAC4_PHY_TX_CLK_PAD                                 0

#define PERIPHS_IO_MUX_U_PAD_GPIO57               (REG_IO_MUX_BASE + 0xE4)
#define FUNC_GPIO57_GPIO57                                               1
#define FUNC_GPIO57_EMAC4_PHY_TXEN_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO58               (REG_IO_MUX_BASE + 0xE8)
#define FUNC_GPIO58_GPIO58                                               1
#define FUNC_GPIO58_EMAC4_PHY_TXD0_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO59               (REG_IO_MUX_BASE + 0xEC)
#define FUNC_GPIO59_GPIO59                                               1
#define FUNC_GPIO59_EMAC4_PHY_TXD1_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO60               (REG_IO_MUX_BASE + 0xF0)
#define FUNC_GPIO60_GPIO60                                               1
#define FUNC_GPIO60_EMAC4_PHY_TXD2_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO61               (REG_IO_MUX_BASE + 0xF4)
#define FUNC_GPIO61_GPIO61                                               1
#define FUNC_GPIO61_EMAC4_PHY_TXD3_PAD                                   0

#define PERIPHS_IO_MUX_U_PAD_GPIO62               (REG_IO_MUX_BASE + 0xF8)
#define FUNC_GPIO62_GPIO62                                               1
#define FUNC_GPIO62_GPIO62_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO63               (REG_IO_MUX_BASE + 0xFC)
#define FUNC_GPIO63_GPIO63                                               1
#define FUNC_GPIO63_GPIO63_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO64              (REG_IO_MUX_BASE + 0x100)
#define FUNC_GPIO64_GPIO64                                               1
#define FUNC_GPIO64_GPIO64_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO65              (REG_IO_MUX_BASE + 0x104)
#define FUNC_GPIO65_GPIO65                                               1
#define FUNC_GPIO65_GPIO65_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO66              (REG_IO_MUX_BASE + 0x108)
#define FUNC_GPIO66_GPIO66                                               1
#define FUNC_GPIO66_GPIO66_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO67              (REG_IO_MUX_BASE + 0x10C)
#define FUNC_GPIO67_GPIO67                                               1
#define FUNC_GPIO67_GPIO67_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO68              (REG_IO_MUX_BASE + 0x110)
#define FUNC_GPIO68_GPIO68                                               1
#define FUNC_GPIO68_GPIO68_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO69              (REG_IO_MUX_BASE + 0x114)
#define FUNC_GPIO69_GPIO69                                               1
#define FUNC_GPIO69_GPIO69_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO70              (REG_IO_MUX_BASE + 0x118)
#define FUNC_GPIO70_GPIO70                                               1
#define FUNC_GPIO70_GPIO70_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO71              (REG_IO_MUX_BASE + 0x11C)
#define FUNC_GPIO71_GPIO71                                               1
#define FUNC_GPIO71_GPIO71_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO72              (REG_IO_MUX_BASE + 0x120)
#define FUNC_GPIO72_GPIO72                                               1
#define FUNC_GPIO72_GPIO72_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO73              (REG_IO_MUX_BASE + 0x124)
#define FUNC_GPIO73_GPIO73                                               1
#define FUNC_GPIO73_GPIO73_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO74              (REG_IO_MUX_BASE + 0x128)
#define FUNC_GPIO74_GPIO74                                               1
#define FUNC_GPIO74_FLASH_CS_PAD                                         0

#define PERIPHS_IO_MUX_U_PAD_GPIO75              (REG_IO_MUX_BASE + 0x12C)
#define FUNC_GPIO75_GPIO75                                               1
#define FUNC_GPIO75_FLASH_Q_PAD                                          0

#define PERIPHS_IO_MUX_U_PAD_GPIO76              (REG_IO_MUX_BASE + 0x130)
#define FUNC_GPIO76_GPIO76                                               1
#define FUNC_GPIO76_FLASH_WP_PAD                                         0

#define PERIPHS_IO_MUX_U_PAD_GPIO77              (REG_IO_MUX_BASE + 0x134)
#define FUNC_GPIO77_GPIO77                                               1
#define FUNC_GPIO77_FLASH_HOLD_PAD                                       0

#define PERIPHS_IO_MUX_U_PAD_GPIO78              (REG_IO_MUX_BASE + 0x138)
#define FUNC_GPIO78_GPIO78                                               1
#define FUNC_GPIO78_FLASH_CK_PAD                                         0

#define PERIPHS_IO_MUX_U_PAD_GPIO79              (REG_IO_MUX_BASE + 0x13C)
#define FUNC_GPIO79_GPIO79                                               1
#define FUNC_GPIO79_FLASH_D_PAD                                          0

#define PERIPHS_IO_MUX_U_PAD_GPIO80              (REG_IO_MUX_BASE + 0x140)
#define FUNC_GPIO80_GPIO80                                               1
#define FUNC_GPIO80_SD1_CCLK_PAD                                         0

#define PERIPHS_IO_MUX_U_PAD_GPIO81              (REG_IO_MUX_BASE + 0x144)
#define FUNC_GPIO81_GPIO81                                               1
#define FUNC_GPIO81_SD1_CDATA0_PAD                                       0

#define PERIPHS_IO_MUX_U_PAD_GPIO82              (REG_IO_MUX_BASE + 0x148)
#define FUNC_GPIO82_GPIO82                                               1
#define FUNC_GPIO82_SD1_CDATA1_PAD                                       0

#define PERIPHS_IO_MUX_U_PAD_GPIO83              (REG_IO_MUX_BASE + 0x14C)
#define FUNC_GPIO83_GPIO83                                               1
#define FUNC_GPIO83_SD1_CDATA2_PAD                                       0

#define PERIPHS_IO_MUX_U_PAD_GPIO84              (REG_IO_MUX_BASE + 0x150)
#define FUNC_GPIO84_GPIO84                                               1
#define FUNC_GPIO84_SD1_CDATA3_PAD                                       0

#define PERIPHS_IO_MUX_U_PAD_GPIO85              (REG_IO_MUX_BASE + 0x154)
#define FUNC_GPIO85_GPIO85                                               1
#define FUNC_GPIO85_SD1_CDATA4_PAD                                       0

#define PERIPHS_IO_MUX_U_PAD_GPIO86              (REG_IO_MUX_BASE + 0x158)
#define FUNC_GPIO86_GPIO86                                               1
#define FUNC_GPIO86_SD1_CDATA5_PAD                                       0

#define PERIPHS_IO_MUX_U_PAD_GPIO87              (REG_IO_MUX_BASE + 0x15C)
#define FUNC_GPIO87_GPIO87                                               1
#define FUNC_GPIO87_SD1_CDATA6_PAD                                       0

#define PERIPHS_IO_MUX_U_PAD_GPIO88              (REG_IO_MUX_BASE + 0x160)
#define FUNC_GPIO88_GPIO88                                               1
#define FUNC_GPIO88_SD1_CDATA7_PAD                                       0

#define PERIPHS_IO_MUX_U_PAD_GPIO89              (REG_IO_MUX_BASE + 0x164)
#define FUNC_GPIO89_GPIO89                                               1
#define FUNC_GPIO89_SD1_CCMD_PAD                                         0

#define PERIPHS_IO_MUX_U_PAD_GPIO90              (REG_IO_MUX_BASE + 0x168)
#define FUNC_GPIO90_GPIO90                                               1
#define FUNC_GPIO90_REF_125M_CLK_PAD                                     0

#define PERIPHS_IO_MUX_U_PAD_GPIO91              (REG_IO_MUX_BASE + 0x16C)
#define FUNC_GPIO91_GPIO91                                               1
#define FUNC_GPIO91_GPIO91_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO92              (REG_IO_MUX_BASE + 0x170)
#define FUNC_GPIO92_GPIO92                                               1
#define FUNC_GPIO92_GPIO92_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO93              (REG_IO_MUX_BASE + 0x174)
#define FUNC_GPIO93_GPIO93                                               1
#define FUNC_GPIO93_GPIO93_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO94              (REG_IO_MUX_BASE + 0x178)
#define FUNC_GPIO94_GPIO94                                               1
#define FUNC_GPIO94_GPIO94_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO95              (REG_IO_MUX_BASE + 0x17C)
#define FUNC_GPIO95_GPIO95                                               1
#define FUNC_GPIO95_GPIO95_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO96              (REG_IO_MUX_BASE + 0x180)
#define FUNC_GPIO96_GPIO96                                               1
#define FUNC_GPIO96_GPIO96_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO97              (REG_IO_MUX_BASE + 0x184)
#define FUNC_GPIO97_GPIO97                                               1
#define FUNC_GPIO97_GPIO97_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO98              (REG_IO_MUX_BASE + 0x188)
#define FUNC_GPIO98_GPIO98                                               1
#define FUNC_GPIO98_GPIO98_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO99              (REG_IO_MUX_BASE + 0x18C)
#define FUNC_GPIO99_GPIO99                                               1
#define FUNC_GPIO99_GPIO99_0                                             0

#define PERIPHS_IO_MUX_U_PAD_GPIO100             (REG_IO_MUX_BASE + 0x190)
#define FUNC_GPIO100_GPIO100                                             1
#define FUNC_GPIO100_GPIO100_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO101             (REG_IO_MUX_BASE + 0x194)
#define FUNC_GPIO101_GPIO101                                             1
#define FUNC_GPIO101_GPIO101_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO102             (REG_IO_MUX_BASE + 0x198)
#define FUNC_GPIO102_GPIO102                                             1
#define FUNC_GPIO102_GPIO102_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO103             (REG_IO_MUX_BASE + 0x19C)
#define FUNC_GPIO103_GPIO103                                             1
#define FUNC_GPIO103_GPIO103_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO104             (REG_IO_MUX_BASE + 0x1A0)
#define FUNC_GPIO104_GPIO104                                             1
#define FUNC_GPIO104_GPIO104_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO105             (REG_IO_MUX_BASE + 0x1A4)
#define FUNC_GPIO105_GPIO105                                             1
#define FUNC_GPIO105_GPIO105_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO106             (REG_IO_MUX_BASE + 0x1A8)
#define FUNC_GPIO106_GPIO106                                             1
#define FUNC_GPIO106_GPIO106_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO107             (REG_IO_MUX_BASE + 0x1AC)
#define FUNC_GPIO107_GPIO107                                             1
#define FUNC_GPIO107_GPIO107_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO108             (REG_IO_MUX_BASE + 0x1B0)
#define FUNC_GPIO108_GPIO108                                             1
#define FUNC_GPIO108_GPIO108_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO109             (REG_IO_MUX_BASE + 0x1B4)
#define FUNC_GPIO109_GPIO109                                             1
#define FUNC_GPIO109_SD0_CDATA3_PAD                                      0

#define PERIPHS_IO_MUX_U_PAD_GPIO110             (REG_IO_MUX_BASE + 0x1B8)
#define FUNC_GPIO110_GPIO110                                             1
#define FUNC_GPIO110_SD0_CCMD_PAD                                        0

#define PERIPHS_IO_MUX_U_PAD_GPIO111             (REG_IO_MUX_BASE + 0x1BC)
#define FUNC_GPIO111_GPIO111                                             1
#define FUNC_GPIO111_SD0_CCLK_PAD                                        0

#define PERIPHS_IO_MUX_U_PAD_GPIO112             (REG_IO_MUX_BASE + 0x1C0)
#define FUNC_GPIO112_GPIO112                                             1
#define FUNC_GPIO112_SD0_CDATA0_PAD                                      0

#define PERIPHS_IO_MUX_U_PAD_GPIO113             (REG_IO_MUX_BASE + 0x1C4)
#define FUNC_GPIO113_GPIO113                                             1
#define FUNC_GPIO113_SD0_CDATA1_PAD                                      0

#define PERIPHS_IO_MUX_U_PAD_GPIO114             (REG_IO_MUX_BASE + 0x1C8)
#define FUNC_GPIO114_GPIO114                                             1
#define FUNC_GPIO114_SD0_CDATA2_PAD                                      0

#define PERIPHS_IO_MUX_U_PAD_GPIO115             (REG_IO_MUX_BASE + 0x1CC)
#define FUNC_GPIO115_GPIO115                                             1
#define FUNC_GPIO115_GPIO115_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO116             (REG_IO_MUX_BASE + 0x1D0)
#define FUNC_GPIO116_GPIO116                                             1
#define FUNC_GPIO116_GPIO116_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO117             (REG_IO_MUX_BASE + 0x1D4)
#define FUNC_GPIO117_GPIO117                                             1
#define FUNC_GPIO117_GPIO117_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO118             (REG_IO_MUX_BASE + 0x1D8)
#define FUNC_GPIO118_GPIO118                                             1
#define FUNC_GPIO118_GPIO118_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO119             (REG_IO_MUX_BASE + 0x1DC)
#define FUNC_GPIO119_GPIO119                                             1
#define FUNC_GPIO119_GPIO119_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO120             (REG_IO_MUX_BASE + 0x1E0)
#define FUNC_GPIO120_GPIO120                                             1
#define FUNC_GPIO120_GPIO120_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO121             (REG_IO_MUX_BASE + 0x1E4)
#define FUNC_GPIO121_GPIO121                                             1
#define FUNC_GPIO121_GPIO121_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO122             (REG_IO_MUX_BASE + 0x1E8)
#define FUNC_GPIO122_GPIO122                                             1
#define FUNC_GPIO122_GPIO122_0                                           0

#define PERIPHS_IO_MUX_U_PAD_GPIO123             (REG_IO_MUX_BASE + 0x1EC)
#define FUNC_GPIO123_GPIO123                                             1
#define FUNC_GPIO123_GPIO123_0                                           0

#define IO_MUX_DATE_REG          (REG_IO_MUX_BASE + 0x1FC)
/* IO_MUX_REG_DATE : R/W ;bitpos:[27:0] ;default: 28'h2307200 ; */
/*description: Version control register.*/
#define IO_MUX_REG_DATE    0x0FFFFFFF
#define IO_MUX_REG_DATE_M  ((IO_MUX_REG_DATE_V)<<(IO_MUX_REG_DATE_S))
#define IO_MUX_REG_DATE_V  0xFFFFFFF
#define IO_MUX_REG_DATE_S  0
