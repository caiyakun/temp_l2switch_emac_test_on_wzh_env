/*
 * SPDX-FileCopyrightText: 2015-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _CACHE_MEMORY_H_
#define _CACHE_MEMORY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/*IDRAM0 is connected with Cache IBUS0/DBUS0*/
#define IDRAM0_L1_CACHE_ADDRESS_LOW    0x40000000
#define IDRAM0_L1_CACHE_ADDRESS_HIGH   0x50000000

#define FLASH_CACHE_ADDRESS_LOW    0x60000000
#define FLASH_CACHE_ADDRESS_HIGH   0x64000000
#define PSRAM_CACHE_ADDRESS_LOW    0xC0000000
#define PSRAM_CACHE_ADDRESS_HIGH   0xC4000000

#define IDRAM0_CACHE_OPERATION_HIGH PSRAM_CACHE_ADDRESS_HIGH
#define ESP_CACHE_TEMP_ADDR FLASH_CACHE_ADDRESS_LOW

#define BUS_SIZE(bus_name)              (bus_name##_ADDRESS_HIGH - bus_name##_ADDRESS_LOW)
#define ADDRESS_IN_BUS(bus_name, vaddr) ((vaddr) >= bus_name##_ADDRESS_LOW && (vaddr) < bus_name##_ADDRESS_HIGH)

#define ADDRESS_IN_IDRAM0_L1_CACHE(vaddr)       ADDRESS_IN_BUS(IDRAM0_L1_CACHE, vaddr)
#define ADDRESS_IN_FLASH_CACHE(vaddr)           ADDRESS_IN_BUS(FLASH_CACHE, vaddr)
#define ADDRESS_IN_PSRAM_CACHE(vaddr)           ADDRESS_IN_BUS(PSRAM_CACHE, vaddr)

#define CACHE_IBUS                      0
#define CACHE_DBUS                      1

#define CACHE_IROM_MMU_START            0
#define CACHE_IROM_MMU_END              Cache_Get_IROM_MMU_End()
#define CACHE_IROM_MMU_SIZE             (CACHE_IROM_MMU_END - CACHE_IROM_MMU_START)

#define CACHE_DROM_MMU_START            CACHE_IROM_MMU_END
#define CACHE_DROM_MMU_END              Cache_Get_DROM_MMU_End()
#define CACHE_DROM_MMU_SIZE             (CACHE_DROM_MMU_END - CACHE_DROM_MMU_START)
#define CACHE_DROM_MMU_MAX_END          MMU_SIZE
#define MMU_SIZE                        (0x400 * 4)

/*
 * ESP32P4 FLASH MMU entry structure
 * ---------------------------------------------------------------------
 * |       reserved      |  sensitive  |  valid  |  type  |     ppn     |
 * ---------------------------------------------------------------------
 * |  31             14  |      13     |   12    | fix 0  |  10       0  |
 * ---------------------------------------------------------------------
 *
 * @ppn: physical page number this entry mapped to
 * @type: when valid is set, 0 means entry mapped to spi flash
 *                           1 means entry mapped to spiram
 * @valid: 0 means entry is invalid, 1 means entry is valid
 * @sensitive: 0 means corresponding page does not do flash encryption and ECC
 *             1 means corresponding page does do flash encryption and ECC
 *
 * ESP32P4 PSRAM MMU entry structure
 * ---------------------------------------------------------------------
 * |       reserved      |  sensitive  |  valid  |  type  |     ppn     |
 * ---------------------------------------------------------------------
 * |  31             13  |      12     |   11    | fix 1  |  9       0  |
 * ---------------------------------------------------------------------
 *
 * @ppn: physical page number this entry mapped to
 * @type: when valid is set, 0 means entry mapped to spi flash
 *                           1 means entry mapped to spiram
 * @valid: 0 means entry is invalid, 1 means entry is valid
 * @sensitive: 0 means corresponding page does not do flash encryption and ECC
 *             1 means corresponding page does do flash encryption and ECC

 */
#define FLASH_MMU_MSPI_INVALID                0
#define FLASH_MMU_MSPI_ACCESS_FLASH           0
#define FLASH_MMU_MSPI_VALID                  BIT(12)
#define FLASH_MMU_MSPI_SENSITIVE              BIT(13)

#define PSRAM_MMU_MSPI_ACCESS_SPIRAM          BIT(10)
#define PSRAM_MMU_MSPI_VALID                  BIT(11)
#define PSRAM_MMU_MSPI_SENSITIVE              BIT(12)

/* in order to be compartible with boot code */
#define MMU_ACCESS_FLASH                FLASH_MMU_MSPI_ACCESS_FLASH
#define MMU_ACCESS_SPIRAM               PSRAM_MMU_MSPI_ACCESS_SPIRAM

#define CACHE_MAX_SYNC_NUM              ((CACHE_SYNC_SIZE + 1) >> 1)
#define CACHE_MAX_LOCK_NUM              ((CACHE_LOCK_SIZE + 1) >> 1)

#define FLASH_MMU_TABLE_SIZE            (0x400 * 4)

// although the flash mmu vaddr space is 64M, the physical support is 128M
#define FLASH_MMU_ADDRESS_MASK          0x7ff
#define MMU_PAGE_SIZE                   0x10000
#define MMU_PAGE_SIZE_K                 64
// a pre-defined invalid phy page address, same as ESP-IDF
#define FLASH_INVALID_PHY_PAGE          0xffff
#define FLASH_PHY_PAGE_ADDRESS_MASK     (MMU_PAGE_SIZE - 1)

#define L2_CACHE_BUS_ADDR_SIZE          (FLASH_CACHE_ADDRESS_HIGH - FLASH_CACHE_ADDRESS_LOW)
#define L2_CACHE_BUS_ADDR_MASK          (L2_CACHE_BUS_ADDR_SIZE - 1)
#define L1_CACHE_BUS_ADDR_SIZE          (IDRAM0_L1_CACHE_ADDRESS_HIGH - IDRAM0_L1_CACHE_ADDRESS_LOW)
#define L1_CACHE_BUS_ADDR_MASK          (L1_CACHE_BUS_ADDR_SIZE - 1)

/* MACROs for flash mmap */
#define IROM0_PAGES_START               (CACHE_IROM_MMU_START / sizeof(uint32_t))
#define IROM0_PAGES_END                 (CACHE_IROM_MMU_END / sizeof(uint32_t))
#define DROM0_PAGES_START               (CACHE_DROM_MMU_START / sizeof(uint32_t))
#define DROM0_PAGES_END                 (CACHE_DROM_MMU_END / sizeof(uint32_t))
#define FLASH_MMU_INVALID_MASK          FLASH_MMU_MSPI_VALID
#define FLASH_MMU_ADDR_MASK             FLASH_MMU_ADDRESS_MASK
#define PAGE_IN_FLASH(page)             ((page) | FLASH_MMU_MSPI_ACCESS_FLASH)
#define PRO_IRAM0_FIRST_USABLE_PAGE     (IROM0_PAGES_START)
#define IROM0_PAGES_NUM                 (IROM0_PAGES_END - IROM0_PAGES_START)
#define DROM0_PAGES_NUM                 (DROM0_PAGES_END - DROM0_PAGES_START)
#define PAGES_LIMIT                     (IROM0_PAGES_END > DROM0_PAGES_END ? IROM0_PAGES_END : DROM0_PAGES_END)
#define VADDR0_START_ADDR               (SOC_DROM_LOW + (DROM0_PAGES_START * MMU_PAGE_SIZE))
#define VADDR1_START_ADDR               (SOC_IROM_LOW)

#ifdef __cplusplus
}
#endif

#endif /*_CACHE_MEMORY_H_ */
