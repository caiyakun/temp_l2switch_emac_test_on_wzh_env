/*
 * SPDX-FileCopyrightText: 2010-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "soc_config.h"
#include "bit_defs.h"
#include "soc_common.h"

/* Basic address */

#define DR_REG_PERIPH0_BASE                     0x09000000
#define DR_REG_PERIPH1_BASE                     0x0A000000

/* PERIPH0 */
#define DR_REG_RMT_BASE                         (DR_REG_PERIPH0_BASE + 0x0)
#define DR_REG_FLASH_MSPI_BASE                  (DR_REG_PERIPH0_BASE + 0x2000)
#define DR_REG_PSRAM_MSPI_BASE                  (DR_REG_PERIPH0_BASE + 0x4000)
#define DR_REG_DDRC_BASE                        (DR_REG_PERIPH0_BASE + 0x6000)
#define DR_REG_AXI_ICM_CPU_BASE                 (DR_REG_PERIPH0_BASE + 0x8000)
#define DR_REG_AXI_ICM_SYS_BASE                 (DR_REG_PERIPH0_BASE + 0x9000)
#define DR_REG_AXI_GDMA_BASE                    (DR_REG_PERIPH0_BASE + 0xA000)
#define DR_REG_AHB_GDMA_BASE                    (DR_REG_PERIPH0_BASE + 0xC000)
#define DR_REG_DW_GDMA_BASE                     (DR_REG_PERIPH0_BASE + 0xE000)
#define DR_REG_REGDMA_BASE                      (DR_REG_PERIPH0_BASE + 0xF000)
#define DR_REG_PCIE0_BASE                       (DR_REG_PERIPH0_BASE + 0x10000)
#define DR_REG_PCIE1_BASE                       (DR_REG_PERIPH0_BASE + 0x14000)
#define DR_REG_SDMMC0_BASE                      (DR_REG_PERIPH0_BASE + 0x18000)
#define DR_REG_SDMMC1_BASE                      (DR_REG_PERIPH0_BASE + 0x19000)
#define DR_REG_PPA_BASE                         (DR_REG_PERIPH0_BASE + 0x1A000)
#define DR_REG_JPEG_BASE                        (DR_REG_PERIPH0_BASE + 0x1B000)
#define DR_REG_DMA2D_BASE                       (DR_REG_PERIPH0_BASE + 0x1C000)
#define DR_REG_H265_BASE                        (DR_REG_PERIPH0_BASE + 0x1D000)
#define DR_REG_SYSREG_BASE                      (DR_REG_PERIPH0_BASE + 0x20000)
#define DR_REG_USBHS0_PHY_BASE                  (DR_REG_PERIPH0_BASE + 0x3E000)
#define DR_REG_USBHS1_PHY_BASE                  (DR_REG_PERIPH0_BASE + 0x3F000)
#define DR_REG_USBHS0_BASE                      (DR_REG_PERIPH0_BASE + 0x40000)
#define DR_REG_USBHS1_BASE                      (DR_REG_PERIPH0_BASE + 0x80000)
#define DR_REG_SWITCH_BASE                      (DR_REG_PERIPH0_BASE + 0x100000)

/* PERIPH1 */
#define DR_REG_UART0_BASE                       (DR_REG_PERIPH1_BASE + 0x0)
#define DR_REG_UART1_BASE                       (DR_REG_PERIPH1_BASE + 0x1000)
#define DR_REG_UART2_BASE                       (DR_REG_PERIPH1_BASE + 0x2000)
#define DR_REG_UART3_BASE                       (DR_REG_PERIPH1_BASE + 0x3000)
#define DR_REG_UART4_BASE                       (DR_REG_PERIPH1_BASE + 0x4000)
#define DR_REG_UHCI_BASE                        (DR_REG_PERIPH1_BASE + 0x5000)
#define DR_REG_TIMG0_BASE                       (DR_REG_PERIPH1_BASE + 0x8000)
#define DR_REG_TIMG1_BASE                       (DR_REG_PERIPH1_BASE + 0x9000)
#define DR_REG_SYSTIMER_BASE                    (DR_REG_PERIPH1_BASE + 0xA000)
#define DR_REG_IO_MUX_BASE                      (DR_REG_PERIPH1_BASE + 0xC000)
#define DR_REG_GPIO_BASE                        (DR_REG_PERIPH1_BASE + 0xD000)
#define DR_REG_MSPI_PAD_CTRL_BASE               (DR_REG_PERIPH1_BASE + 0xE000)
#define DR_REG_SYS_CLKRST_BASE                  (DR_REG_PERIPH1_BASE + 0x10000)
#define DR_REG_MCPWM0_BASE                      (DR_REG_PERIPH1_BASE + 0x11000)
#define DR_REG_MCPWM1_BASE                      (DR_REG_PERIPH1_BASE + 0x12000)
#define DR_REG_MCPWM2_BASE                      (DR_REG_PERIPH1_BASE + 0x13000)
#define DR_REG_I2C0_BASE                        (DR_REG_PERIPH1_BASE + 0x14000)
#define DR_REG_I2C1_BASE                        (DR_REG_PERIPH1_BASE + 0x15000)
#define DR_REG_I2C2_BASE                        (DR_REG_PERIPH1_BASE + 0x16000)
#define DR_REG_I2S0_BASE                        (DR_REG_PERIPH1_BASE + 0x17000)
#define DR_REG_I2S1_BASE                        (DR_REG_PERIPH1_BASE + 0x18000)
#define DR_REG_I2S2_BASE                        (DR_REG_PERIPH1_BASE + 0x19000)
#define DR_REG_PCNT_BASE                        (DR_REG_PERIPH1_BASE + 0x1A000)
#define DR_REG_GPSPI2_BASE                      (DR_REG_PERIPH1_BASE + 0x1B000)
#define DR_REG_GPSPI3_BASE                      (DR_REG_PERIPH1_BASE + 0x1C000)
#define DR_REG_LEDC0_BASE                       (DR_REG_PERIPH1_BASE + 0x1E000)
#define DR_REG_LEDC1_BASE                       (DR_REG_PERIPH1_BASE + 0x1F000)
#define DR_REG_CAN0_BASE                        (DR_REG_PERIPH1_BASE + 0x20000)
#define DR_REG_CAN1_BASE                        (DR_REG_PERIPH1_BASE + 0x21000)
#define DR_REG_CAN2_BASE                        (DR_REG_PERIPH1_BASE + 0x22000)
#define DR_REG_LCDCAM_BASE                      (DR_REG_PERIPH1_BASE + 0x23000)
#define DR_REG_ETM_BASE                         (DR_REG_PERIPH1_BASE + 0x25000)
#define DR_REG_PMU_BASE                         (DR_REG_PERIPH1_BASE + 0x26000)
#define DR_REG_EFUSE_BASE                       (DR_REG_PERIPH1_BASE + 0x27000)
#define DR_REG_RTC_TIMER_BASE                   (DR_REG_PERIPH1_BASE + 0x28000)
#define DR_REG_RTC_WDT_BASE                     (DR_REG_PERIPH1_BASE + 0x29000)
#define DR_REG_ANA_I2C_MST_BASE                 (DR_REG_PERIPH1_BASE + 0x2A000)

#define DR_REG_MP_SYS_CLKRST_BASE               DR_REG_SYS_CLKRST_BASE
#define DR_REG_MP_BASE                          DR_REG_SYS_CLKRST_BASE                
                         
#define DR_REG_IOMUX_MSPI_PIN_BASE              DR_REG_MSPI_PAD_CTRL_BASE
#define DR_REG_MP_SYS_BASE                      DR_REG_SYSREG_BASE

// These base address are left for compile, should be removed later
#define DR_REG_SHA_BASE                         0
#define DR_REG_RSA_BASE                         0
#define DR_REG_ECDSA_BASE                       0
#define DR_REG_HMAC_BASE                        0
#define DR_REG_DIGITAL_SIGNATURE_BASE           0
#define DR_REG_ECC_MULT_BASE                    0
#define DR_REG_AES_BASE                         0
#define DR_REG_HP_SYS_BASE                      0
#define DR_REG_LP_SYS_BASE                      0
#define DR_REG_CACHE_BASE                       0
#define DR_REG_SPI2_BASE                        0
#define DR_REG_HP_SYS_CLKRST_BASE               0
#define DR_REG_INTERRUPT_CORE0_BASE             0
#define DR_REG_KEYMNG_BASE                      0
#define DR_REG_HUK_BASE                         0

// uart0, uart1, uart2, uart3 and uart4
#define REG_UART_BASE(i)                        (DR_REG_UART0_BASE + (i)*0x1000)
#define UART_FIFO_AHB_REG(i)                    (REG_UART_BASE(i) + 0x0)
#define REG_SPI_MEM_BASE(i)                     (DR_REG_FLASH_MSPI_BASE + (i)*0x1000)
#define REG_SPI_BASE(i)                         (DR_REG_GPSPI2_BASE + (i - 2) * 0x1000)
// timg0 and timg1
#define REG_TIMG_BASE(i)                        (DR_REG_TIMG0_BASE + (i)*0x1000)

//Periheral Clock
#define ANA_FOSC_CLK_ROM                        (20 * 1000000)
#define ANA_FXTAL_CLK_ROM                       (40 * 1000000)
#define ANA_SPLL_CLK_ROM                        (480 * 1000000)
#define ANA_CPLL_CLK_ROM                        (400 * 1000000)
#define APB_CLK_FREQ_ROM                        (40 * 1000000)
#define CPU_CLK_FREQ_ROM                        APB_CLK_FREQ_ROM
#define UART_CLK_FREQ_ROM                       (48 * 1000000)
#define EFUSE_CLK_FREQ_ROM                      (20 * 1000000)
#define CPU_CLK_FREQ                            APB_CLK_FREQ
#define APB_CLK_FREQ                            APB_CLK_FREQ_ROM
#define UART_CLK_FREQ                           APB_CLK_FREQ
#define SPI_CLK_DIV                             4
#define TICKS_PER_US_ROM                        40 // CPU is 40MHz

/* Overall memory map */
#define SOC_IROM_MASK_LOW                       0x20200000
#define SOC_IROM_MASK_HIGH                      0x20210000
#define SOC_DROM_MASK_LOW                       0x20200000
#define SOC_DROM_MASK_HIGH                      0x20210000
#define SOC_IROM_LOW                            0x60000000
#define SOC_IROM_HIGH                           0x70000000
#define SOC_DROM_LOW                            0x60000000
#define SOC_DROM_HIGH                           0x70000000
#define SOC_IRAM_LOW                            0x20100000
#define SOC_IRAM_HIGH                           0x20120000
#define SOC_DRAM_LOW                            0x20100000
#define SOC_DRAM_HIGH                           0x20120000

//First and last words of the D/IRAM region, for both the DRAM address as well as the IRAM alias.
#define SOC_DIRAM_IRAM_LOW                      SOC_IRAM_LOW
#define SOC_DIRAM_IRAM_HIGH                     SOC_IRAM_HIGH
#define SOC_DIRAM_DRAM_LOW                      SOC_DRAM_LOW
#define SOC_DIRAM_DRAM_HIGH                     SOC_DRAM_HIGH

// Region of memory accessible via DMA. See esp_ptr_dma_capable().
#define SOC_DMA_LOW                             SOC_DRAM_LOW
#define SOC_DMA_HIGH                            SOC_DRAM_HIGH

// Region of memory accessible via DMA in external memory. See esp_ptr_dma_ext_capable().
#define SOC_DMA_EXT_LOW                         SOC_EXTRAM_DATA_LOW
#define SOC_DMA_EXT_HIGH                        SOC_EXTRAM_DATA_HIGH

// Region of memory that is byte-accessible. See esp_ptr_byte_accessible().
#define SOC_BYTE_ACCESSIBLE_LOW                 SOC_DRAM_LOW
#define SOC_BYTE_ACCESSIBLE_HIGH                SOC_DRAM_HIGH

//Region of memory that is internal, as in on the same silicon die as the ESP32P4 CPUs
//(excluding RTC data region, that's checked separately.) See esp_ptr_internal().
#define SOC_MEM_INTERNAL_LOW                    SOC_DRAM_LOW
#define SOC_MEM_INTERNAL_HIGH                   SOC_DRAM_HIGH
#define SOC_MEM_INTERNAL_LOW1                   SOC_RTC_DRAM_LOW
#define SOC_MEM_INTERNAL_HIGH1                  SOC_RTC_DRAM_HIGH
#define SOC_MEM_INTERNAL_LOW2                   SOC_DRAM_TCM_LOW
#define SOC_MEM_INTERNAL_HIGH2                  SOC_DRAM_TCM_HIGH

#define SOC_LOWEST_INSTR                        SOC_IRAM_TCM_LOW
#define SOC_HIGHEST_INSTR                       SOC_IRAM_HIGH
#define SOC_LOWEST_DATA                         SOC_DRAM_TCM_LOW
/*ROM did not use Non-Cacheable address*/
#define SOC_HIGHEST_DATA                        SOC_DRAM_HIGH
