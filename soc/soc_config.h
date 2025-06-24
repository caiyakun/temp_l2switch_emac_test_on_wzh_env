/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#define SOC_CHIP_ID 18

/* CPU & Cache & System Attributes */
#define CORE_NUM                            2
#define MAIN_CORE_MHARTID                   0
#define SUPPORT_L2_RAM                      0
#if SUPPORT_L2_RAM
#define RAM_DCACHE_BLOCK_SIZE               64
#endif
#define SUPPORT_DEDICATED_EXTERNAL_DCACHE   1
#define SUPPORT_SPIRAM                      1
#define SUPPORT_CPU_PMA                     0
#define SUPPORT_SW_CONFIG_BRANCH_PREDICTOR  1
#if SUPPORT_CPU_PMA
#define PMA_ENTRIES_NUM                     16
#define CPU_ROM_CACHEABLE                   1
#if SUPPORT_L2_RAM
#define SUPPORT_TCM                         1
#endif
#define SUPPORT_LPRAM                       1
#endif
#define SUPPORT_INT_PLIC                    1
#define SUPPORT_INT_CLIC                    0
#define SUPPORT_EFUSE_PURPOSE               1
#define SUPPORT_TEE_PMS                     0
#define BYPASS_SYS_ANA_RST_AS_DEFAULT       1
#define SUPPORT_XTAL_SEL                    0

/* lib link option */
#define SUPPORT_BTDM        0
#define SUPPORT_WIFI        0
#define SUPPORT_BTBB        0
#define SUPPORT_COEXIST     0
#define SUPPORT_MBEDTLS     0

/* USB Attributes */
#define SUPPORT_USB_DWCOTG 0
#define SUPPORT_USB_DEVICE 0
#if SUPPORT_USB_DWCOTG || SUPPORT_USB_DEVICE
#define SUPPORT_USB 1
#else
#define SUPPORT_USB 0
#endif
#define SUPPORT_DIAG_USB_MODE        1
// OTG clk is in sysclk field, default 2 div by cpu frequency
#define USB_DWCOTG_OVER_CLK 1

/* USB config for USB-OTG device */
#define CONFIG_USB_DEVICE_BCD   0x0912
#define CONFIG_USB_DEVICE_NAME  {'E', 'S', 'P', '3', '2', '-', 'P', '4'}

/* Crypto Module Attributes */
#define SUPPORT_HMAC_ACCELERATOR        0
#define SUPPORT_AES_ACCELERATOR         0
#define SUPPORT_RSA_ACCELERATOR         0
#define SUPPORT_DS_ACCELERATOR          0
#define SUPPORT_ECC_MULT_ACCELERATOR    0
#define SUPPORT_ECDSA_ACCELERATOR       0
#define SUPPORT_RSA_MAX_BITS            4096
#define SUPPORT_SHA_MAX_BITS            512
#define SUPPORT_KEY_MANAGER             0

/* Secure Boot Attributes */
#define SUPPORT_SECURE_BOOT             0
#define SUPPORT_SECURE_BOOT_REVOKE      1
#define SUPPORT_ECDSA_SECURE_BOOT       0
#define SUPPORT_ECDSA_EFUSE_DIS_P192    0
#define SUPPORT_RSA_SECURE_BOOT         1
#define SUPPORT_SECURE_BOOT_FAST_WAKE   0
#define SECURE_BOOT_NUM_BLOCKS          3
#define SECURE_BOOT_MAX_KEY_DIGESTS     3
#define SECURE_BOOT_KEY_DIGEST_SIZE     32
#define SECURE_BOOT_DIGEST_OFFSET_BYTES 0
#define SECURE_BOOT_RAM_SIZE            (64 * 1024)
#define SECURE_BOOT_XIP_SIZE            (0 * 1024)
#define SECURE_BOOT_SB_ALIGN            4096 // same as flash erase size

/* Flash & SPI Attributes */
#define SUPPORT_CONFIG_SPI              0
#define SUPPORT_ECC_FLASH               0
#define SUPPORT_ECC_FLASH_16TO17_MODE   0
#define SUPPORT_ECC_FLASH_ADDR_CONV     1
#define SUPPORT_OPIFLASH                0 // flash boot from OPI mode
#define SUPPORT_OCTAL_MODE_CONF         1 // HW can configure octal mode
#define SUPPORT_HEX_MODE_CONF           1 // HW can configure hex mode
#define SUPPORT_IOMUX_OPI_PAD_POWER_SEL 0
#define SUPPORT_FLASH_DDR               1
#define SPI_SLAVE_USE_INTR              1 // DO NOT DELETE
#define SPI_DMA_LINK_NEED_8B_ALIGN      1 // for chip912
#define MAX_ENCRYPT_BLOCK               64
#define MSPI_USE_DEDICATED_GPIO         0


/* ESP32P4 does not provide any spi_flash driver for ESP-IDF, see interface-config.json
 *   - esp_flash (ROM esp_flash API for idf), disabled
 *   - spi_flash_chips (middle layer, used by esp_flash), disabled
 *   - memspi_host (hal layer, used by spi_flash_chips), disabled
 *   - hal_spiflash (hal layer, used by spi_flash_chips), disabled
 *
 * so the MEM SPI Attributes MACROs are all set 0
 */
/* MEM SPI Attributes */
#define SUPPORT_AUTO_SUSPEND            0
#define SUPPORT_AUTO_WAIT_IDLE          0
#define SUPPORT_SW_SUSPEND              0
#define SUPPORT_CHECK_SUS               0
#define SUPPORT_CONTROL_DUMMY_OUTPUT    0

/* Direct Boot Attributes */
#define SUPPORT_DIRECT_BOOT 1
#if SUPPORT_DIRECT_BOOT
#define DIRECT_BOOT_OFFSET     0
#define DIRECT_BOOT_ADDR       (SOC_IROM_LOW + DIRECT_BOOT_OFFSET)
#define DIRECT_BOOT_MAGIC      0xaedb041d
#define DIRECT_BOOT_MAGIC_SIZE 8
#endif

/* Software support cpu jumps to a stub code after deep sleep wakeup
 * we will not support this feature in S/P series chips, because the
 * lp ram speed is quite slow, and lpcore can do the same thing. The
 * C/H series chips will support this.
 */
#define SUPPORT_DEEP_SLEEP_WAKEUP_STUB 0

/* SOC UART CAPS */
//ESP32-P4 has 5 UARTs
#define SOC_UART_NUM          (5)
#define SOC_UART_FIFO_LEN     (128)    /*!< The UART hardware FIFO length */

/* ROM download CAPS */
#define SUPPORT_UART_ISR  1

/* EFUSE CAPS */
