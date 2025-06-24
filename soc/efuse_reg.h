/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_EFUSE_REG_H_
#define _SOC_EFUSE_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define EFUSE_PGM_DATA0_REG          (DR_REG_EFUSE_BASE + 0x0)
/* EFUSE_PGM_DATA_0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth 32-bit data to be programmed..*/
#define EFUSE_PGM_DATA_0    0xFFFFFFFF
#define EFUSE_PGM_DATA_0_M  ((EFUSE_PGM_DATA_0_V)<<(EFUSE_PGM_DATA_0_S))
#define EFUSE_PGM_DATA_0_V  0xFFFFFFFF
#define EFUSE_PGM_DATA_0_S  0

#define EFUSE_PGM_DATA1_REG          (DR_REG_EFUSE_BASE + 0x4)
/* EFUSE_PGM_DATA_1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth 32-bit data to be programmed..*/
#define EFUSE_PGM_DATA_1    0xFFFFFFFF
#define EFUSE_PGM_DATA_1_M  ((EFUSE_PGM_DATA_1_V)<<(EFUSE_PGM_DATA_1_S))
#define EFUSE_PGM_DATA_1_V  0xFFFFFFFF
#define EFUSE_PGM_DATA_1_S  0

#define EFUSE_PGM_DATA2_REG          (DR_REG_EFUSE_BASE + 0x8)
/* EFUSE_PGM_DATA_2 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth 32-bit data to be programmed..*/
#define EFUSE_PGM_DATA_2    0xFFFFFFFF
#define EFUSE_PGM_DATA_2_M  ((EFUSE_PGM_DATA_2_V)<<(EFUSE_PGM_DATA_2_S))
#define EFUSE_PGM_DATA_2_V  0xFFFFFFFF
#define EFUSE_PGM_DATA_2_S  0

#define EFUSE_PGM_DATA3_REG          (DR_REG_EFUSE_BASE + 0xC)
/* EFUSE_PGM_DATA_3 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth 32-bit data to be programmed..*/
#define EFUSE_PGM_DATA_3    0xFFFFFFFF
#define EFUSE_PGM_DATA_3_M  ((EFUSE_PGM_DATA_3_V)<<(EFUSE_PGM_DATA_3_S))
#define EFUSE_PGM_DATA_3_V  0xFFFFFFFF
#define EFUSE_PGM_DATA_3_S  0

#define EFUSE_PGM_DATA4_REG          (DR_REG_EFUSE_BASE + 0x10)
/* EFUSE_PGM_DATA_4 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth 32-bit data to be programmed..*/
#define EFUSE_PGM_DATA_4    0xFFFFFFFF
#define EFUSE_PGM_DATA_4_M  ((EFUSE_PGM_DATA_4_V)<<(EFUSE_PGM_DATA_4_S))
#define EFUSE_PGM_DATA_4_V  0xFFFFFFFF
#define EFUSE_PGM_DATA_4_S  0

#define EFUSE_PGM_DATA5_REG          (DR_REG_EFUSE_BASE + 0x14)
/* EFUSE_PGM_DATA_5 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth 32-bit data to be programmed..*/
#define EFUSE_PGM_DATA_5    0xFFFFFFFF
#define EFUSE_PGM_DATA_5_M  ((EFUSE_PGM_DATA_5_V)<<(EFUSE_PGM_DATA_5_S))
#define EFUSE_PGM_DATA_5_V  0xFFFFFFFF
#define EFUSE_PGM_DATA_5_S  0

#define EFUSE_PGM_DATA6_REG          (DR_REG_EFUSE_BASE + 0x18)
/* EFUSE_PGM_DATA_6 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth 32-bit data to be programmed..*/
#define EFUSE_PGM_DATA_6    0xFFFFFFFF
#define EFUSE_PGM_DATA_6_M  ((EFUSE_PGM_DATA_6_V)<<(EFUSE_PGM_DATA_6_S))
#define EFUSE_PGM_DATA_6_V  0xFFFFFFFF
#define EFUSE_PGM_DATA_6_S  0

#define EFUSE_PGM_DATA7_REG          (DR_REG_EFUSE_BASE + 0x1C)
/* EFUSE_PGM_DATA_7 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth 32-bit data to be programmed..*/
#define EFUSE_PGM_DATA_7    0xFFFFFFFF
#define EFUSE_PGM_DATA_7_M  ((EFUSE_PGM_DATA_7_V)<<(EFUSE_PGM_DATA_7_S))
#define EFUSE_PGM_DATA_7_V  0xFFFFFFFF
#define EFUSE_PGM_DATA_7_S  0

#define EFUSE_PGM_CHECK_VALUE0_REG          (DR_REG_EFUSE_BASE + 0x20)
/* EFUSE_PGM_RS_DATA_0 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth RS code to be programmed..*/
#define EFUSE_PGM_RS_DATA_0    0xFFFFFFFF
#define EFUSE_PGM_RS_DATA_0_M  ((EFUSE_PGM_RS_DATA_0_V)<<(EFUSE_PGM_RS_DATA_0_S))
#define EFUSE_PGM_RS_DATA_0_V  0xFFFFFFFF
#define EFUSE_PGM_RS_DATA_0_S  0

#define EFUSE_PGM_CHECK_VALUE1_REG          (DR_REG_EFUSE_BASE + 0x24)
/* EFUSE_PGM_RS_DATA_1 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth RS code to be programmed..*/
#define EFUSE_PGM_RS_DATA_1    0xFFFFFFFF
#define EFUSE_PGM_RS_DATA_1_M  ((EFUSE_PGM_RS_DATA_1_V)<<(EFUSE_PGM_RS_DATA_1_S))
#define EFUSE_PGM_RS_DATA_1_V  0xFFFFFFFF
#define EFUSE_PGM_RS_DATA_1_S  0

#define EFUSE_PGM_CHECK_VALUE2_REG          (DR_REG_EFUSE_BASE + 0x28)
/* EFUSE_PGM_RS_DATA_2 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the $nth RS code to be programmed..*/
#define EFUSE_PGM_RS_DATA_2    0xFFFFFFFF
#define EFUSE_PGM_RS_DATA_2_M  ((EFUSE_PGM_RS_DATA_2_V)<<(EFUSE_PGM_RS_DATA_2_S))
#define EFUSE_PGM_RS_DATA_2_V  0xFFFFFFFF
#define EFUSE_PGM_RS_DATA_2_S  0

#define EFUSE_RD_WR_DIS_REG          (DR_REG_EFUSE_BASE + 0x2C)
/* EFUSE_WR_DIS : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents whether programming of individual eFuse memory bit is disabled or ena
bled.\\ 1: Disabled\\ 0: Enabled\\.*/
#define EFUSE_WR_DIS    0xFFFFFFFF
#define EFUSE_WR_DIS_M  ((EFUSE_WR_DIS_V)<<(EFUSE_WR_DIS_S))
#define EFUSE_WR_DIS_V  0xFFFFFFFF
#define EFUSE_WR_DIS_S  0

#define EFUSE_RD_REPEAT_DATA0_REG          (DR_REG_EFUSE_BASE + 0x30)
/* EFUSE_KM_DEPLOY_ONLY_ONCE : RO ;bitpos:[31:27] ;default: 5'h0 ; */
/*description: Set each bit to control whether corresponding key can only be deployed once. 1 i
s true, 0 is false. bit 0: ecsda, bit 1: flash, bit2: hmac, bit3: ds, bit4: psra
m.*/
#define EFUSE_KM_DEPLOY_ONLY_ONCE    0x0000001F
#define EFUSE_KM_DEPLOY_ONLY_ONCE_M  ((EFUSE_KM_DEPLOY_ONLY_ONCE_V)<<(EFUSE_KM_DEPLOY_ONLY_ONCE_S))
#define EFUSE_KM_DEPLOY_ONLY_ONCE_V  0x1F
#define EFUSE_KM_DEPLOY_ONLY_ONCE_S  27
/* EFUSE_KM_RND_SWITCH_CYCLE : RO ;bitpos:[26:25] ;default: 2'h0 ; */
/*description: Set the bits to control key manager random number switch cycle. 0: control by re
gister. 1: 8 km clk cycles. 2: 16 km cycles. 3: 32 km cycles.*/
#define EFUSE_KM_RND_SWITCH_CYCLE    0x00000003
#define EFUSE_KM_RND_SWITCH_CYCLE_M  ((EFUSE_KM_RND_SWITCH_CYCLE_V)<<(EFUSE_KM_RND_SWITCH_CYCLE_S))
#define EFUSE_KM_RND_SWITCH_CYCLE_V  0x3
#define EFUSE_KM_RND_SWITCH_CYCLE_S  25
/* EFUSE_HUK_GEN_STATE : RO ;bitpos:[24:16] ;default: 9'h0 ; */
/*description: Set the bits to control validation of HUK generate mode. Odd of 1 is invalid, ev
en of 1 is valid..*/
#define EFUSE_HUK_GEN_STATE    0x000001FF
#define EFUSE_HUK_GEN_STATE_M  ((EFUSE_HUK_GEN_STATE_V)<<(EFUSE_HUK_GEN_STATE_S))
#define EFUSE_HUK_GEN_STATE_V  0x1FF
#define EFUSE_HUK_GEN_STATE_S  16
/* EFUSE_DIS_PAD_JTAG : RO ;bitpos:[15] ;default: 1'h0 ; */
/*description: Represents whether PAD JTAG is disabled in the hard way (permanently).\\ 1: Disa
bled\\ 0: Enabled\\.*/
#define EFUSE_DIS_PAD_JTAG    (BIT(15))
#define EFUSE_DIS_PAD_JTAG_M  (BIT(15))
#define EFUSE_DIS_PAD_JTAG_V  0x1
#define EFUSE_DIS_PAD_JTAG_S  15
/* EFUSE_SOFT_DIS_JTAG : RO ;bitpos:[14:12] ;default: 3'h0 ; */
/*description: Represents whether PAD JTAG is disabled in the soft way. It can be restarted via
 HMAC. \\ Odd count of bits with a value of 1: Disabled\\ Even count of bits wit
h a value of 1: Enabled\\.*/
#define EFUSE_SOFT_DIS_JTAG    0x00000007
#define EFUSE_SOFT_DIS_JTAG_M  ((EFUSE_SOFT_DIS_JTAG_V)<<(EFUSE_SOFT_DIS_JTAG_S))
#define EFUSE_SOFT_DIS_JTAG_V  0x7
#define EFUSE_SOFT_DIS_JTAG_S  12
/* EFUSE_DIS_TWAI : RO ;bitpos:[11] ;default: 1'h0 ; */
/*description: Represents whether TWAI function is disabled or enabled.\\ 1: Disabled\\ 0: Enab
led\\.*/
#define EFUSE_DIS_TWAI    (BIT(11))
#define EFUSE_DIS_TWAI_M  (BIT(11))
#define EFUSE_DIS_TWAI_V  0x1
#define EFUSE_DIS_TWAI_S  11
/* EFUSE_SPI_DOWNLOAD_MSPI_DIS : RO ;bitpos:[10] ;default: 1'h0 ; */
/*description: Represents accessing MSPI flash/MSPI RAM by SYS AXI matrix is disabled during bo
ot_mode_download.\\ 1: Disabled\\ 0: Enabled\\.*/
#define EFUSE_SPI_DOWNLOAD_MSPI_DIS    (BIT(10))
#define EFUSE_SPI_DOWNLOAD_MSPI_DIS_M  (BIT(10))
#define EFUSE_SPI_DOWNLOAD_MSPI_DIS_V  0x1
#define EFUSE_SPI_DOWNLOAD_MSPI_DIS_S  10
/* EFUSE_DIS_FORCE_DOWNLOAD : RO ;bitpos:[9] ;default: 1'h0 ; */
/*description: Represents whether the function that forces chip into Download mode is disabled.
 \\ 1: Disabled\\ 0: Enabled\\.*/
#define EFUSE_DIS_FORCE_DOWNLOAD    (BIT(9))
#define EFUSE_DIS_FORCE_DOWNLOAD_M  (BIT(9))
#define EFUSE_DIS_FORCE_DOWNLOAD_V  0x1
#define EFUSE_DIS_FORCE_DOWNLOAD_S  9
/* EFUSE_DIS_USB_SERIAL_JTAG : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: Represents whether USB-Serial-JTAG is disabled or enabled.\\ 1: Disabled\\ 0: En
abled\\.*/
#define EFUSE_DIS_USB_SERIAL_JTAG    (BIT(8))
#define EFUSE_DIS_USB_SERIAL_JTAG_M  (BIT(8))
#define EFUSE_DIS_USB_SERIAL_JTAG_V  0x1
#define EFUSE_DIS_USB_SERIAL_JTAG_S  8
/* EFUSE_DIS_USB_JTAG : RO ;bitpos:[7] ;default: 1'h0 ; */
/*description: Represents whether the USB-to-JTAG function in USB Serial/JTAG is disabled. \\ 1
: Disabled\\ 0: Enabled\\.*/
#define EFUSE_DIS_USB_JTAG    (BIT(7))
#define EFUSE_DIS_USB_JTAG_M  (BIT(7))
#define EFUSE_DIS_USB_JTAG_V  0x1
#define EFUSE_DIS_USB_JTAG_S  7
/* EFUSE_RD_DIS : RO ;bitpos:[6:0] ;default: 7'h0 ; */
/*description: Represents whether reading of individual eFuse block(block4~block10) is disabled
 or enabled.\\ 1: Disabled\\ 0: Enabled.\\.*/
#define EFUSE_RD_DIS    0x0000007F
#define EFUSE_RD_DIS_M  ((EFUSE_RD_DIS_V)<<(EFUSE_RD_DIS_S))
#define EFUSE_RD_DIS_V  0x7F
#define EFUSE_RD_DIS_S  0

#define EFUSE_RD_REPEAT_DATA1_REG          (DR_REG_EFUSE_BASE + 0x34)
/* EFUSE_KEY_PURPOSE_2 : RO ;bitpos:[31:27] ;default: 5'h0 ; */
/*description: Represents the purpose of Key2..*/
#define EFUSE_KEY_PURPOSE_2    0x0000001F
#define EFUSE_KEY_PURPOSE_2_M  ((EFUSE_KEY_PURPOSE_2_V)<<(EFUSE_KEY_PURPOSE_2_S))
#define EFUSE_KEY_PURPOSE_2_V  0x1F
#define EFUSE_KEY_PURPOSE_2_S  27
/* EFUSE_KEY_PURPOSE_1 : RO ;bitpos:[26:22] ;default: 5'h0 ; */
/*description: Represents the purpose of Key1..*/
#define EFUSE_KEY_PURPOSE_1    0x0000001F
#define EFUSE_KEY_PURPOSE_1_M  ((EFUSE_KEY_PURPOSE_1_V)<<(EFUSE_KEY_PURPOSE_1_S))
#define EFUSE_KEY_PURPOSE_1_V  0x1F
#define EFUSE_KEY_PURPOSE_1_S  22
/* EFUSE_KEY_PURPOSE_0 : RO ;bitpos:[21:17] ;default: 5'h0 ; */
/*description: Represents the purpose of Key0..*/
#define EFUSE_KEY_PURPOSE_0    0x0000001F
#define EFUSE_KEY_PURPOSE_0_M  ((EFUSE_KEY_PURPOSE_0_V)<<(EFUSE_KEY_PURPOSE_0_S))
#define EFUSE_KEY_PURPOSE_0_V  0x1F
#define EFUSE_KEY_PURPOSE_0_S  17
/* EFUSE_SECURE_BOOT_KEY_REVOKE2 : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents whether revoking third secure boot key is enabled or disabled.\\ 1: e
nabled\\ 0: disabled\\.*/
#define EFUSE_SECURE_BOOT_KEY_REVOKE2    (BIT(16))
#define EFUSE_SECURE_BOOT_KEY_REVOKE2_M  (BIT(16))
#define EFUSE_SECURE_BOOT_KEY_REVOKE2_V  0x1
#define EFUSE_SECURE_BOOT_KEY_REVOKE2_S  16
/* EFUSE_SECURE_BOOT_KEY_REVOKE1 : RO ;bitpos:[15] ;default: 1'h0 ; */
/*description: Represents whether revoking second secure boot key is enabled or disabled.\\ 1:
enabled\\ 0: disabled\\.*/
#define EFUSE_SECURE_BOOT_KEY_REVOKE1    (BIT(15))
#define EFUSE_SECURE_BOOT_KEY_REVOKE1_M  (BIT(15))
#define EFUSE_SECURE_BOOT_KEY_REVOKE1_V  0x1
#define EFUSE_SECURE_BOOT_KEY_REVOKE1_S  15
/* EFUSE_SECURE_BOOT_KEY_REVOKE0 : RO ;bitpos:[14] ;default: 1'h0 ; */
/*description: Represents whether revoking first secure boot key is enabled or disabled.\\ 1: e
nabled\\ 0: disabled\\.*/
#define EFUSE_SECURE_BOOT_KEY_REVOKE0    (BIT(14))
#define EFUSE_SECURE_BOOT_KEY_REVOKE0_M  (BIT(14))
#define EFUSE_SECURE_BOOT_KEY_REVOKE0_V  0x1
#define EFUSE_SECURE_BOOT_KEY_REVOKE0_S  14
/* EFUSE_SPI_BOOT_CRYPT_CNT : RO ;bitpos:[13:11] ;default: 3'h0 ; */
/*description: Represents whether SPI boot encrypt/decrypt is disabled or enabled.\\ Odd number
 of 1: enabled\\ Even number of 1: disabled\\.*/
#define EFUSE_SPI_BOOT_CRYPT_CNT    0x00000007
#define EFUSE_SPI_BOOT_CRYPT_CNT_M  ((EFUSE_SPI_BOOT_CRYPT_CNT_V)<<(EFUSE_SPI_BOOT_CRYPT_CNT_S))
#define EFUSE_SPI_BOOT_CRYPT_CNT_V  0x7
#define EFUSE_SPI_BOOT_CRYPT_CNT_S  11
/* EFUSE_WDT_DELAY_SEL : RO ;bitpos:[10:9] ;default: 2'h0 ; */
/*description: Represents the threshold level of the RTC watchdog STG0 timeout.\\0: Original th
reshold configuration value of STG0 *2 \\1: Original threshold configuration val
ue of STG0 *4 \\2: Original threshold configuration value of STG0 *8 \\3: Origin
al threshold configuration value of STG0 *16 \\.*/
#define EFUSE_WDT_DELAY_SEL    0x00000003
#define EFUSE_WDT_DELAY_SEL_M  ((EFUSE_WDT_DELAY_SEL_V)<<(EFUSE_WDT_DELAY_SEL_S))
#define EFUSE_WDT_DELAY_SEL_V  0x3
#define EFUSE_WDT_DELAY_SEL_S  9
/* EFUSE_DIS_REDUNDANCY : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: Represents whether configuration of eFuse redundancy is diabled or enabled.\\1:
Disabled\\ 0: Enabled.\\.*/
#define EFUSE_DIS_REDUNDANCY    (BIT(8))
#define EFUSE_DIS_REDUNDANCY_M  (BIT(8))
#define EFUSE_DIS_REDUNDANCY_V  0x1
#define EFUSE_DIS_REDUNDANCY_S  8
/* EFUSE_KM_XTS_KEY_LENGTH_256 : RO ;bitpos:[7] ;default: 1'h0 ; */
/*description: Set this bitto configure flash encryption use xts-128 key. else use xts-256 key..*/
#define EFUSE_KM_XTS_KEY_LENGTH_256    (BIT(7))
#define EFUSE_KM_XTS_KEY_LENGTH_256_M  (BIT(7))
#define EFUSE_KM_XTS_KEY_LENGTH_256_V  0x1
#define EFUSE_KM_XTS_KEY_LENGTH_256_S  7
/* EFUSE_FORCE_DISABLE_SW_INIT_KEY : RO ;bitpos:[6] ;default: 1'h0 ; */
/*description: Set this bit to disable software written init key, and force use efuse_init_key..*/
#define EFUSE_FORCE_DISABLE_SW_INIT_KEY    (BIT(6))
#define EFUSE_FORCE_DISABLE_SW_INIT_KEY_M  (BIT(6))
#define EFUSE_FORCE_DISABLE_SW_INIT_KEY_V  0x1
#define EFUSE_FORCE_DISABLE_SW_INIT_KEY_S  6
/* EFUSE_FORCE_USE_KEY_MANAGER_KEY : RO ;bitpos:[5:1] ;default: 5'h0 ; */
/*description: Set each bit to control whether corresponding key must come from key manager. 1
is true, 0 is false. bit 0: ecsda, bit 1: flash, bit2: hmac, bit3: ds, bit4: psr
am.*/
#define EFUSE_FORCE_USE_KEY_MANAGER_KEY    0x0000001F
#define EFUSE_FORCE_USE_KEY_MANAGER_KEY_M  ((EFUSE_FORCE_USE_KEY_MANAGER_KEY_V)<<(EFUSE_FORCE_USE_KEY_MANAGER_KEY_S))
#define EFUSE_FORCE_USE_KEY_MANAGER_KEY_V  0x1F
#define EFUSE_FORCE_USE_KEY_MANAGER_KEY_S  1
/* EFUSE_JTAG_SEL_ENABLE : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents whether the selection of a JTAG signal source through the strapping p
in value is enabled when both EFUSE_DIS_PAD_JTAG and EFUSE_DIS_USB_JTAG are conf
igured to 0. For more information, please refer to Chapter Placeholder.\\ 1: Ena
bled\\ 0: Disabled\\.*/
#define EFUSE_JTAG_SEL_ENABLE    (BIT(0))
#define EFUSE_JTAG_SEL_ENABLE_M  (BIT(0))
#define EFUSE_JTAG_SEL_ENABLE_V  0x1
#define EFUSE_JTAG_SEL_ENABLE_S  0

#define EFUSE_RD_REPEAT_DATA2_REG          (DR_REG_EFUSE_BASE + 0x38)
/* EFUSE_FLASH_TPUW : RO ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: Represents the flash waiting time after power-up, in unit of ms. When the value
less than 15, the waiting time is the programmed value. Otherwise, the waiting t
ime is 2 times the programmed value..*/
#define EFUSE_FLASH_TPUW    0x0000000F
#define EFUSE_FLASH_TPUW_M  ((EFUSE_FLASH_TPUW_V)<<(EFUSE_FLASH_TPUW_S))
#define EFUSE_FLASH_TPUW_V  0xF
#define EFUSE_FLASH_TPUW_S  28
/* EFUSE_DIS_USB_OTG_DOWNLOAD_MODE : RO ;bitpos:[27] ;default: 1'h0 ; */
/*description: Set this bit to disable download via USB-OTG..*/
#define EFUSE_DIS_USB_OTG_DOWNLOAD_MODE    (BIT(27))
#define EFUSE_DIS_USB_OTG_DOWNLOAD_MODE_M  (BIT(27))
#define EFUSE_DIS_USB_OTG_DOWNLOAD_MODE_V  0x1
#define EFUSE_DIS_USB_OTG_DOWNLOAD_MODE_S  27
/* EFUSE_USB_SERIAL_JTAG_EXCHG_PINS : RO ;bitpos:[26] ;default: 1'h0 ; */
/*description: Represents whether enable usb device exchange pins of D+ and D- or not. \\ 1: En
abled\\ 0: Disabled\\.*/
#define EFUSE_USB_SERIAL_JTAG_EXCHG_PINS    (BIT(26))
#define EFUSE_USB_SERIAL_JTAG_EXCHG_PINS_M  (BIT(26))
#define EFUSE_USB_SERIAL_JTAG_EXCHG_PINS_V  0x1
#define EFUSE_USB_SERIAL_JTAG_EXCHG_PINS_S  26
/* EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE : RO ;bitpos:[19] ;default: 1'h0 ; */
/*description: Represents whether revoking aggressive secure boot is enabled or disabled.\\ 1:
enabled.\\ 0: disabled\\.*/
#define EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE    (BIT(19))
#define EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE_M  (BIT(19))
#define EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE_V  0x1
#define EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE_S  19
/* EFUSE_SECURE_BOOT_EN : RO ;bitpos:[18] ;default: 1'h0 ; */
/*description: Represents whether secure boot is enabled or disabled.\\ 1: enabled\\ 0: disable
d\\.*/
#define EFUSE_SECURE_BOOT_EN    (BIT(18))
#define EFUSE_SECURE_BOOT_EN_M  (BIT(18))
#define EFUSE_SECURE_BOOT_EN_V  0x1
#define EFUSE_SECURE_BOOT_EN_S  18
/* EFUSE_CRYPT_DPA_ENABLE : RO ;bitpos:[17] ;default: 1'h0 ; */
/*description: Represents whether anti-dpa attack is enabled. 1. Enable\\ 0: Disable..*/
#define EFUSE_CRYPT_DPA_ENABLE    (BIT(17))
#define EFUSE_CRYPT_DPA_ENABLE_M  (BIT(17))
#define EFUSE_CRYPT_DPA_ENABLE_V  0x1
#define EFUSE_CRYPT_DPA_ENABLE_S  17
/* EFUSE_SEC_DPA_LEVEL : RO ;bitpos:[16:15] ;default: 2'h0 ; */
/*description: Represents the spa secure level by configuring the clock random divide mode..*/
#define EFUSE_SEC_DPA_LEVEL    0x00000003
#define EFUSE_SEC_DPA_LEVEL_M  ((EFUSE_SEC_DPA_LEVEL_V)<<(EFUSE_SEC_DPA_LEVEL_S))
#define EFUSE_SEC_DPA_LEVEL_V  0x3
#define EFUSE_SEC_DPA_LEVEL_S  15
/* EFUSE_KEY_PURPOSE_5 : RO ;bitpos:[14:10] ;default: 5'h0 ; */
/*description: Represents the purpose of Key5..*/
#define EFUSE_KEY_PURPOSE_5    0x0000001F
#define EFUSE_KEY_PURPOSE_5_M  ((EFUSE_KEY_PURPOSE_5_V)<<(EFUSE_KEY_PURPOSE_5_S))
#define EFUSE_KEY_PURPOSE_5_V  0x1F
#define EFUSE_KEY_PURPOSE_5_S  10
/* EFUSE_KEY_PURPOSE_4 : RO ;bitpos:[9:5] ;default: 5'h0 ; */
/*description: Represents the purpose of Key4..*/
#define EFUSE_KEY_PURPOSE_4    0x0000001F
#define EFUSE_KEY_PURPOSE_4_M  ((EFUSE_KEY_PURPOSE_4_V)<<(EFUSE_KEY_PURPOSE_4_S))
#define EFUSE_KEY_PURPOSE_4_V  0x1F
#define EFUSE_KEY_PURPOSE_4_S  5
/* EFUSE_KEY_PURPOSE_3 : RO ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Represents the purpose of Key3..*/
#define EFUSE_KEY_PURPOSE_3    0x0000001F
#define EFUSE_KEY_PURPOSE_3_M  ((EFUSE_KEY_PURPOSE_3_V)<<(EFUSE_KEY_PURPOSE_3_S))
#define EFUSE_KEY_PURPOSE_3_V  0x1F
#define EFUSE_KEY_PURPOSE_3_S  0

#define EFUSE_RD_REPEAT_DATA3_REG          (DR_REG_EFUSE_BASE + 0x3C)
/* EFUSE_HYS_EN_PAD : RO ;bitpos:[31] ;default: 1'h0 ; */
/*description: Represents whether the hysteresis function of corresponding PAD is enabled.\\ 1:
 enabled\\ 0:disabled\\.*/
#define EFUSE_HYS_EN_PAD    (BIT(31))
#define EFUSE_HYS_EN_PAD_M  (BIT(31))
#define EFUSE_HYS_EN_PAD_V  0x1
#define EFUSE_HYS_EN_PAD_S  31
/* EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE : RO ;bitpos:[23] ;default: 1'h0 ; */
/*description: Represents whether FAST VERIFY ON WAKE is disabled or enabled when Secure Boot i
s enabled.\\ 1: disabled\\ 0: enabled\\.*/
#define EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE    (BIT(23))
#define EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE_M  (BIT(23))
#define EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE_V  0x1
#define EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE_S  23
/* EFUSE_SECURE_VERSION : RO ;bitpos:[22:7] ;default: 16'h0 ; */
/*description: Represents the version used by ESP-IDF anti-rollback feature..*/
#define EFUSE_SECURE_VERSION    0x0000FFFF
#define EFUSE_SECURE_VERSION_M  ((EFUSE_SECURE_VERSION_V)<<(EFUSE_SECURE_VERSION_S))
#define EFUSE_SECURE_VERSION_V  0xFFFF
#define EFUSE_SECURE_VERSION_S  7
/* EFUSE_FORCE_SEND_RESUME : RO ;bitpos:[6] ;default: 1'h0 ; */
/*description: Represents whether ROM code is forced to send a resume command during SPI boot.\
\ 1: forced\\ 0:not forced\\.*/
#define EFUSE_FORCE_SEND_RESUME    (BIT(6))
#define EFUSE_FORCE_SEND_RESUME_M  (BIT(6))
#define EFUSE_FORCE_SEND_RESUME_V  0x1
#define EFUSE_FORCE_SEND_RESUME_S  6
/* EFUSE_UART_PRINT_CONTROL : RO ;bitpos:[5:4] ;default: 2'h0 ; */
/*description: Represents the type of UART printing.\\ 00: force enable printing\\ 01: enable p
rinting when GPIO8 is reset at low level\\ 10: enable printing when GPIO8 is res
et at high level\\ 11: force disable printing\\.*/
#define EFUSE_UART_PRINT_CONTROL    0x00000003
#define EFUSE_UART_PRINT_CONTROL_M  ((EFUSE_UART_PRINT_CONTROL_V)<<(EFUSE_UART_PRINT_CONTROL_S))
#define EFUSE_UART_PRINT_CONTROL_V  0x3
#define EFUSE_UART_PRINT_CONTROL_S  4
/* EFUSE_ENABLE_SECURITY_DOWNLOAD : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: Represents whether security download is enabled or disabled.\\ 1: enabled\\ 0: d
isabled\\.*/
#define EFUSE_ENABLE_SECURITY_DOWNLOAD    (BIT(3))
#define EFUSE_ENABLE_SECURITY_DOWNLOAD_M  (BIT(3))
#define EFUSE_ENABLE_SECURITY_DOWNLOAD_V  0x1
#define EFUSE_ENABLE_SECURITY_DOWNLOAD_S  3
/* EFUSE_LOCK_KM_KEY : RO ;bitpos:[2] ;default: 1'h0 ; */
/*description: Represetns whether to lock the efuse xts key.\\ 1. Lock\\ 0: Unlock\\.*/
#define EFUSE_LOCK_KM_KEY    (BIT(2))
#define EFUSE_LOCK_KM_KEY_M  (BIT(2))
#define EFUSE_LOCK_KM_KEY_V  0x1
#define EFUSE_LOCK_KM_KEY_S  2
/* EFUSE_DIS_DIRECT_BOOT : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: Represents whether direct boot mode is disabled or enabled.\\ 1: disabled\\ 0: e
nabled\\.*/
#define EFUSE_DIS_DIRECT_BOOT    (BIT(1))
#define EFUSE_DIS_DIRECT_BOOT_M  (BIT(1))
#define EFUSE_DIS_DIRECT_BOOT_V  0x1
#define EFUSE_DIS_DIRECT_BOOT_S  1
/* EFUSE_DIS_DOWNLOAD_MODE : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents whether Download mode is disabled or enabled.\\ 1: disabled\\ 0: enab
led\\.*/
#define EFUSE_DIS_DOWNLOAD_MODE    (BIT(0))
#define EFUSE_DIS_DOWNLOAD_MODE_M  (BIT(0))
#define EFUSE_DIS_DOWNLOAD_MODE_V  0x1
#define EFUSE_DIS_DOWNLOAD_MODE_S  0

#define EFUSE_RD_REPEAT_DATA4_REG          (DR_REG_EFUSE_BASE + 0x40)
/* EFUSE_PAD_MODE_SELECT : RO ;bitpos:[23:21] ;default: 3'h0 ; */
/*description: Represents each 3318 group pad volt mode. \\0: Pad in 3.3v mode\\1: Pad in 1.8v
mode.*/
#define EFUSE_PAD_MODE_SELECT    0x00000007
#define EFUSE_PAD_MODE_SELECT_M  ((EFUSE_PAD_MODE_SELECT_V)<<(EFUSE_PAD_MODE_SELECT_S))
#define EFUSE_PAD_MODE_SELECT_V  0x7
#define EFUSE_PAD_MODE_SELECT_S  21
/* EFUSE_LOW_POWER_CNTL : RO ;bitpos:[20:7] ;default: 14'h0 ; */
/*description: Reserved for LP..*/
#define EFUSE_LOW_POWER_CNTL    0x00003FFF
#define EFUSE_LOW_POWER_CNTL_M  ((EFUSE_LOW_POWER_CNTL_V)<<(EFUSE_LOW_POWER_CNTL_S))
#define EFUSE_LOW_POWER_CNTL_V  0x3FFF
#define EFUSE_LOW_POWER_CNTL_S  7
/* EFUSE_DIS_SWD : RO ;bitpos:[6] ;default: 1'h0 ; */
/*description: Set this bit to disable super-watchdog..*/
#define EFUSE_DIS_SWD    (BIT(6))
#define EFUSE_DIS_SWD_M  (BIT(6))
#define EFUSE_DIS_SWD_V  0x1
#define EFUSE_DIS_SWD_S  6
/* EFUSE_DIS_WDT : RO ;bitpos:[5] ;default: 1'h0 ; */
/*description: Set this bit to disable watch dog..*/
#define EFUSE_DIS_WDT    (BIT(5))
#define EFUSE_DIS_WDT_M  (BIT(5))
#define EFUSE_DIS_WDT_V  0x1
#define EFUSE_DIS_WDT_S  5
/* EFUSE_KM_DISABLE_DEPLOY_MODE : RO ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Represents whether the deploy mode of key manager is disable or not. \\ 1: disab
led \\ 0: enabled.\\ bit 0: ecsda, bit 1: flash, bit2: hmac, bit3: ds, bit4: psr
am.*/
#define EFUSE_KM_DISABLE_DEPLOY_MODE    0x0000001F
#define EFUSE_KM_DISABLE_DEPLOY_MODE_M  ((EFUSE_KM_DISABLE_DEPLOY_MODE_V)<<(EFUSE_KM_DISABLE_DEPLOY_MODE_S))
#define EFUSE_KM_DISABLE_DEPLOY_MODE_V  0x1F
#define EFUSE_KM_DISABLE_DEPLOY_MODE_S  0

#define EFUSE_RD_MAC_SYS0_REG          (DR_REG_EFUSE_BASE + 0x44)
/* EFUSE_MAC_0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents MAC address. Low 32-bit..*/
#define EFUSE_MAC_0    0xFFFFFFFF
#define EFUSE_MAC_0_M  ((EFUSE_MAC_0_V)<<(EFUSE_MAC_0_S))
#define EFUSE_MAC_0_V  0xFFFFFFFF
#define EFUSE_MAC_0_S  0

#define EFUSE_RD_MAC_SYS1_REG          (DR_REG_EFUSE_BASE + 0x48)
/* EFUSE_MAC_EXT : RO ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: Represents the extended bits of MAC address..*/
#define EFUSE_MAC_EXT    0x0000FFFF
#define EFUSE_MAC_EXT_M  ((EFUSE_MAC_EXT_V)<<(EFUSE_MAC_EXT_S))
#define EFUSE_MAC_EXT_V  0xFFFF
#define EFUSE_MAC_EXT_S  16
/* EFUSE_MAC_1 : RO ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Represents MAC address. High 16-bit..*/
#define EFUSE_MAC_1    0x0000FFFF
#define EFUSE_MAC_1_M  ((EFUSE_MAC_1_V)<<(EFUSE_MAC_1_S))
#define EFUSE_MAC_1_V  0xFFFF
#define EFUSE_MAC_1_S  0

#define EFUSE_RD_MAC_SYS2_REG          (DR_REG_EFUSE_BASE + 0x4C)
/* EFUSE_MAC_RESERVED_1 : RO ;bitpos:[31:14] ;default: 18'h0 ; */
/*description: Reserved..*/
#define EFUSE_MAC_RESERVED_1    0x0003FFFF
#define EFUSE_MAC_RESERVED_1_M  ((EFUSE_MAC_RESERVED_1_V)<<(EFUSE_MAC_RESERVED_1_S))
#define EFUSE_MAC_RESERVED_1_V  0x3FFFF
#define EFUSE_MAC_RESERVED_1_S  14
/* EFUSE_MAC_RESERVED_0 : RO ;bitpos:[13:0] ;default: 14'h0 ; */
/*description: Reserved..*/
#define EFUSE_MAC_RESERVED_0    0x00003FFF
#define EFUSE_MAC_RESERVED_0_M  ((EFUSE_MAC_RESERVED_0_V)<<(EFUSE_MAC_RESERVED_0_S))
#define EFUSE_MAC_RESERVED_0_V  0x3FFF
#define EFUSE_MAC_RESERVED_0_S  0

#define EFUSE_RD_MAC_SYS3_REG          (DR_REG_EFUSE_BASE + 0x50)
/* EFUSE_SYS_DATA_PART0_0 : RO ;bitpos:[31:18] ;default: 14'h0 ; */
/*description: Represents the first 14-bit of zeroth part of system data..*/
#define EFUSE_SYS_DATA_PART0_0    0x00003FFF
#define EFUSE_SYS_DATA_PART0_0_M  ((EFUSE_SYS_DATA_PART0_0_V)<<(EFUSE_SYS_DATA_PART0_0_S))
#define EFUSE_SYS_DATA_PART0_0_V  0x3FFF
#define EFUSE_SYS_DATA_PART0_0_S  18
/* EFUSE_MAC_RESERVED_2 : RO ;bitpos:[17:0] ;default: 18'h0 ; */
/*description: Reserved..*/
#define EFUSE_MAC_RESERVED_2    0x0003FFFF
#define EFUSE_MAC_RESERVED_2_M  ((EFUSE_MAC_RESERVED_2_V)<<(EFUSE_MAC_RESERVED_2_S))
#define EFUSE_MAC_RESERVED_2_V  0x3FFFF
#define EFUSE_MAC_RESERVED_2_S  0

#define EFUSE_RD_MAC_SYS4_REG          (DR_REG_EFUSE_BASE + 0x54)
/* EFUSE_SYS_DATA_PART0_1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of zeroth part of system data..*/
#define EFUSE_SYS_DATA_PART0_1    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART0_1_M  ((EFUSE_SYS_DATA_PART0_1_V)<<(EFUSE_SYS_DATA_PART0_1_S))
#define EFUSE_SYS_DATA_PART0_1_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART0_1_S  0

#define EFUSE_RD_MAC_SYS5_REG          (DR_REG_EFUSE_BASE + 0x58)
/* EFUSE_SYS_DATA_PART0_2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of zeroth part of system data..*/
#define EFUSE_SYS_DATA_PART0_2    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART0_2_M  ((EFUSE_SYS_DATA_PART0_2_V)<<(EFUSE_SYS_DATA_PART0_2_S))
#define EFUSE_SYS_DATA_PART0_2_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART0_2_S  0

#define EFUSE_RD_SYS_PART1_DATA0_REG          (DR_REG_EFUSE_BASE + 0x5C)
/* EFUSE_SYS_DATA_PART1_0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the zeroth 32-bit of first part of system data..*/
#define EFUSE_SYS_DATA_PART1_0    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_0_M  ((EFUSE_SYS_DATA_PART1_0_V)<<(EFUSE_SYS_DATA_PART1_0_S))
#define EFUSE_SYS_DATA_PART1_0_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_0_S  0

#define EFUSE_RD_SYS_PART1_DATA1_REG          (DR_REG_EFUSE_BASE + 0x60)
/* EFUSE_SYS_DATA_PART1_1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the first 32-bit of first part of system data..*/
#define EFUSE_SYS_DATA_PART1_1    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_1_M  ((EFUSE_SYS_DATA_PART1_1_V)<<(EFUSE_SYS_DATA_PART1_1_S))
#define EFUSE_SYS_DATA_PART1_1_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_1_S  0

#define EFUSE_RD_SYS_PART1_DATA2_REG          (DR_REG_EFUSE_BASE + 0x64)
/* EFUSE_SYS_DATA_PART1_2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of first part of system data..*/
#define EFUSE_SYS_DATA_PART1_2    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_2_M  ((EFUSE_SYS_DATA_PART1_2_V)<<(EFUSE_SYS_DATA_PART1_2_S))
#define EFUSE_SYS_DATA_PART1_2_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_2_S  0

#define EFUSE_RD_SYS_PART1_DATA3_REG          (DR_REG_EFUSE_BASE + 0x68)
/* EFUSE_SYS_DATA_PART1_3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of first part of system data..*/
#define EFUSE_SYS_DATA_PART1_3    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_3_M  ((EFUSE_SYS_DATA_PART1_3_V)<<(EFUSE_SYS_DATA_PART1_3_S))
#define EFUSE_SYS_DATA_PART1_3_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_3_S  0

#define EFUSE_RD_SYS_PART1_DATA4_REG          (DR_REG_EFUSE_BASE + 0x6C)
/* EFUSE_SYS_DATA_PART1_4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fourth 32-bit of first part of system data..*/
#define EFUSE_SYS_DATA_PART1_4    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_4_M  ((EFUSE_SYS_DATA_PART1_4_V)<<(EFUSE_SYS_DATA_PART1_4_S))
#define EFUSE_SYS_DATA_PART1_4_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_4_S  0

#define EFUSE_RD_SYS_PART1_DATA5_REG          (DR_REG_EFUSE_BASE + 0x70)
/* EFUSE_SYS_DATA_PART1_5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fifth 32-bit of first part of system data..*/
#define EFUSE_SYS_DATA_PART1_5    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_5_M  ((EFUSE_SYS_DATA_PART1_5_V)<<(EFUSE_SYS_DATA_PART1_5_S))
#define EFUSE_SYS_DATA_PART1_5_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_5_S  0

#define EFUSE_RD_SYS_PART1_DATA6_REG          (DR_REG_EFUSE_BASE + 0x74)
/* EFUSE_SYS_DATA_PART1_6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the sixth 32-bit of first part of system data..*/
#define EFUSE_SYS_DATA_PART1_6    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_6_M  ((EFUSE_SYS_DATA_PART1_6_V)<<(EFUSE_SYS_DATA_PART1_6_S))
#define EFUSE_SYS_DATA_PART1_6_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_6_S  0

#define EFUSE_RD_SYS_PART1_DATA7_REG          (DR_REG_EFUSE_BASE + 0x78)
/* EFUSE_SYS_DATA_PART1_7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the seventh 32-bit of first part of system data..*/
#define EFUSE_SYS_DATA_PART1_7    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_7_M  ((EFUSE_SYS_DATA_PART1_7_V)<<(EFUSE_SYS_DATA_PART1_7_S))
#define EFUSE_SYS_DATA_PART1_7_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART1_7_S  0

#define EFUSE_RD_USR_DATA0_REG          (DR_REG_EFUSE_BASE + 0x7C)
/* EFUSE_USR_DATA0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the zeroth 32-bit of block3 (user)..*/
#define EFUSE_USR_DATA0    0xFFFFFFFF
#define EFUSE_USR_DATA0_M  ((EFUSE_USR_DATA0_V)<<(EFUSE_USR_DATA0_S))
#define EFUSE_USR_DATA0_V  0xFFFFFFFF
#define EFUSE_USR_DATA0_S  0

#define EFUSE_RD_USR_DATA1_REG          (DR_REG_EFUSE_BASE + 0x80)
/* EFUSE_USR_DATA1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the first 32-bit of block3 (user)..*/
#define EFUSE_USR_DATA1    0xFFFFFFFF
#define EFUSE_USR_DATA1_M  ((EFUSE_USR_DATA1_V)<<(EFUSE_USR_DATA1_S))
#define EFUSE_USR_DATA1_V  0xFFFFFFFF
#define EFUSE_USR_DATA1_S  0

#define EFUSE_RD_USR_DATA2_REG          (DR_REG_EFUSE_BASE + 0x84)
/* EFUSE_USR_DATA2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of block3 (user)..*/
#define EFUSE_USR_DATA2    0xFFFFFFFF
#define EFUSE_USR_DATA2_M  ((EFUSE_USR_DATA2_V)<<(EFUSE_USR_DATA2_S))
#define EFUSE_USR_DATA2_V  0xFFFFFFFF
#define EFUSE_USR_DATA2_S  0

#define EFUSE_RD_USR_DATA3_REG          (DR_REG_EFUSE_BASE + 0x88)
/* EFUSE_USR_DATA3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of block3 (user)..*/
#define EFUSE_USR_DATA3    0xFFFFFFFF
#define EFUSE_USR_DATA3_M  ((EFUSE_USR_DATA3_V)<<(EFUSE_USR_DATA3_S))
#define EFUSE_USR_DATA3_V  0xFFFFFFFF
#define EFUSE_USR_DATA3_S  0

#define EFUSE_RD_USR_DATA4_REG          (DR_REG_EFUSE_BASE + 0x8C)
/* EFUSE_USR_DATA4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fourth 32-bit of block3 (user)..*/
#define EFUSE_USR_DATA4    0xFFFFFFFF
#define EFUSE_USR_DATA4_M  ((EFUSE_USR_DATA4_V)<<(EFUSE_USR_DATA4_S))
#define EFUSE_USR_DATA4_V  0xFFFFFFFF
#define EFUSE_USR_DATA4_S  0

#define EFUSE_RD_USR_DATA5_REG          (DR_REG_EFUSE_BASE + 0x90)
/* EFUSE_USR_DATA5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fifth 32-bit of block3 (user)..*/
#define EFUSE_USR_DATA5    0xFFFFFFFF
#define EFUSE_USR_DATA5_M  ((EFUSE_USR_DATA5_V)<<(EFUSE_USR_DATA5_S))
#define EFUSE_USR_DATA5_V  0xFFFFFFFF
#define EFUSE_USR_DATA5_S  0

#define EFUSE_RD_USR_DATA6_REG          (DR_REG_EFUSE_BASE + 0x94)
/* EFUSE_USR_DATA6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the sixth 32-bit of block3 (user)..*/
#define EFUSE_USR_DATA6    0xFFFFFFFF
#define EFUSE_USR_DATA6_M  ((EFUSE_USR_DATA6_V)<<(EFUSE_USR_DATA6_S))
#define EFUSE_USR_DATA6_V  0xFFFFFFFF
#define EFUSE_USR_DATA6_S  0

#define EFUSE_RD_USR_DATA7_REG          (DR_REG_EFUSE_BASE + 0x98)
/* EFUSE_USR_DATA7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the seventh 32-bit of block3 (user)..*/
#define EFUSE_USR_DATA7    0xFFFFFFFF
#define EFUSE_USR_DATA7_M  ((EFUSE_USR_DATA7_V)<<(EFUSE_USR_DATA7_S))
#define EFUSE_USR_DATA7_V  0xFFFFFFFF
#define EFUSE_USR_DATA7_S  0

#define EFUSE_RD_KEY0_DATA0_REG          (DR_REG_EFUSE_BASE + 0x9C)
/* EFUSE_KEY0_DATA0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the zeroth 32-bit of key0..*/
#define EFUSE_KEY0_DATA0    0xFFFFFFFF
#define EFUSE_KEY0_DATA0_M  ((EFUSE_KEY0_DATA0_V)<<(EFUSE_KEY0_DATA0_S))
#define EFUSE_KEY0_DATA0_V  0xFFFFFFFF
#define EFUSE_KEY0_DATA0_S  0

#define EFUSE_RD_KEY0_DATA1_REG          (DR_REG_EFUSE_BASE + 0xA0)
/* EFUSE_KEY0_DATA1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the first 32-bit of key0..*/
#define EFUSE_KEY0_DATA1    0xFFFFFFFF
#define EFUSE_KEY0_DATA1_M  ((EFUSE_KEY0_DATA1_V)<<(EFUSE_KEY0_DATA1_S))
#define EFUSE_KEY0_DATA1_V  0xFFFFFFFF
#define EFUSE_KEY0_DATA1_S  0

#define EFUSE_RD_KEY0_DATA2_REG          (DR_REG_EFUSE_BASE + 0xA4)
/* EFUSE_KEY0_DATA2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of key0..*/
#define EFUSE_KEY0_DATA2    0xFFFFFFFF
#define EFUSE_KEY0_DATA2_M  ((EFUSE_KEY0_DATA2_V)<<(EFUSE_KEY0_DATA2_S))
#define EFUSE_KEY0_DATA2_V  0xFFFFFFFF
#define EFUSE_KEY0_DATA2_S  0

#define EFUSE_RD_KEY0_DATA3_REG          (DR_REG_EFUSE_BASE + 0xA8)
/* EFUSE_KEY0_DATA3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of key0..*/
#define EFUSE_KEY0_DATA3    0xFFFFFFFF
#define EFUSE_KEY0_DATA3_M  ((EFUSE_KEY0_DATA3_V)<<(EFUSE_KEY0_DATA3_S))
#define EFUSE_KEY0_DATA3_V  0xFFFFFFFF
#define EFUSE_KEY0_DATA3_S  0

#define EFUSE_RD_KEY0_DATA4_REG          (DR_REG_EFUSE_BASE + 0xAC)
/* EFUSE_KEY0_DATA4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fourth 32-bit of key0..*/
#define EFUSE_KEY0_DATA4    0xFFFFFFFF
#define EFUSE_KEY0_DATA4_M  ((EFUSE_KEY0_DATA4_V)<<(EFUSE_KEY0_DATA4_S))
#define EFUSE_KEY0_DATA4_V  0xFFFFFFFF
#define EFUSE_KEY0_DATA4_S  0

#define EFUSE_RD_KEY0_DATA5_REG          (DR_REG_EFUSE_BASE + 0xB0)
/* EFUSE_KEY0_DATA5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fifth 32-bit of key0..*/
#define EFUSE_KEY0_DATA5    0xFFFFFFFF
#define EFUSE_KEY0_DATA5_M  ((EFUSE_KEY0_DATA5_V)<<(EFUSE_KEY0_DATA5_S))
#define EFUSE_KEY0_DATA5_V  0xFFFFFFFF
#define EFUSE_KEY0_DATA5_S  0

#define EFUSE_RD_KEY0_DATA6_REG          (DR_REG_EFUSE_BASE + 0xB4)
/* EFUSE_KEY0_DATA6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the sixth 32-bit of key0..*/
#define EFUSE_KEY0_DATA6    0xFFFFFFFF
#define EFUSE_KEY0_DATA6_M  ((EFUSE_KEY0_DATA6_V)<<(EFUSE_KEY0_DATA6_S))
#define EFUSE_KEY0_DATA6_V  0xFFFFFFFF
#define EFUSE_KEY0_DATA6_S  0

#define EFUSE_RD_KEY0_DATA7_REG          (DR_REG_EFUSE_BASE + 0xB8)
/* EFUSE_KEY0_DATA7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the seventh 32-bit of key0..*/
#define EFUSE_KEY0_DATA7    0xFFFFFFFF
#define EFUSE_KEY0_DATA7_M  ((EFUSE_KEY0_DATA7_V)<<(EFUSE_KEY0_DATA7_S))
#define EFUSE_KEY0_DATA7_V  0xFFFFFFFF
#define EFUSE_KEY0_DATA7_S  0

#define EFUSE_RD_KEY1_DATA0_REG          (DR_REG_EFUSE_BASE + 0xBC)
/* EFUSE_KEY1_DATA0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the zeroth 32-bit of key1..*/
#define EFUSE_KEY1_DATA0    0xFFFFFFFF
#define EFUSE_KEY1_DATA0_M  ((EFUSE_KEY1_DATA0_V)<<(EFUSE_KEY1_DATA0_S))
#define EFUSE_KEY1_DATA0_V  0xFFFFFFFF
#define EFUSE_KEY1_DATA0_S  0

#define EFUSE_RD_KEY1_DATA1_REG          (DR_REG_EFUSE_BASE + 0xC0)
/* EFUSE_KEY1_DATA1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the first 32-bit of key1..*/
#define EFUSE_KEY1_DATA1    0xFFFFFFFF
#define EFUSE_KEY1_DATA1_M  ((EFUSE_KEY1_DATA1_V)<<(EFUSE_KEY1_DATA1_S))
#define EFUSE_KEY1_DATA1_V  0xFFFFFFFF
#define EFUSE_KEY1_DATA1_S  0

#define EFUSE_RD_KEY1_DATA2_REG          (DR_REG_EFUSE_BASE + 0xC4)
/* EFUSE_KEY1_DATA2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of key1..*/
#define EFUSE_KEY1_DATA2    0xFFFFFFFF
#define EFUSE_KEY1_DATA2_M  ((EFUSE_KEY1_DATA2_V)<<(EFUSE_KEY1_DATA2_S))
#define EFUSE_KEY1_DATA2_V  0xFFFFFFFF
#define EFUSE_KEY1_DATA2_S  0

#define EFUSE_RD_KEY1_DATA3_REG          (DR_REG_EFUSE_BASE + 0xC8)
/* EFUSE_KEY1_DATA3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of key1..*/
#define EFUSE_KEY1_DATA3    0xFFFFFFFF
#define EFUSE_KEY1_DATA3_M  ((EFUSE_KEY1_DATA3_V)<<(EFUSE_KEY1_DATA3_S))
#define EFUSE_KEY1_DATA3_V  0xFFFFFFFF
#define EFUSE_KEY1_DATA3_S  0

#define EFUSE_RD_KEY1_DATA4_REG          (DR_REG_EFUSE_BASE + 0xCC)
/* EFUSE_KEY1_DATA4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fourth 32-bit of key1..*/
#define EFUSE_KEY1_DATA4    0xFFFFFFFF
#define EFUSE_KEY1_DATA4_M  ((EFUSE_KEY1_DATA4_V)<<(EFUSE_KEY1_DATA4_S))
#define EFUSE_KEY1_DATA4_V  0xFFFFFFFF
#define EFUSE_KEY1_DATA4_S  0

#define EFUSE_RD_KEY1_DATA5_REG          (DR_REG_EFUSE_BASE + 0xD0)
/* EFUSE_KEY1_DATA5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fifth 32-bit of key1..*/
#define EFUSE_KEY1_DATA5    0xFFFFFFFF
#define EFUSE_KEY1_DATA5_M  ((EFUSE_KEY1_DATA5_V)<<(EFUSE_KEY1_DATA5_S))
#define EFUSE_KEY1_DATA5_V  0xFFFFFFFF
#define EFUSE_KEY1_DATA5_S  0

#define EFUSE_RD_KEY1_DATA6_REG          (DR_REG_EFUSE_BASE + 0xD4)
/* EFUSE_KEY1_DATA6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the sixth 32-bit of key1..*/
#define EFUSE_KEY1_DATA6    0xFFFFFFFF
#define EFUSE_KEY1_DATA6_M  ((EFUSE_KEY1_DATA6_V)<<(EFUSE_KEY1_DATA6_S))
#define EFUSE_KEY1_DATA6_V  0xFFFFFFFF
#define EFUSE_KEY1_DATA6_S  0

#define EFUSE_RD_KEY1_DATA7_REG          (DR_REG_EFUSE_BASE + 0xD8)
/* EFUSE_KEY1_DATA7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the seventh 32-bit of key1..*/
#define EFUSE_KEY1_DATA7    0xFFFFFFFF
#define EFUSE_KEY1_DATA7_M  ((EFUSE_KEY1_DATA7_V)<<(EFUSE_KEY1_DATA7_S))
#define EFUSE_KEY1_DATA7_V  0xFFFFFFFF
#define EFUSE_KEY1_DATA7_S  0

#define EFUSE_RD_KEY2_DATA0_REG          (DR_REG_EFUSE_BASE + 0xDC)
/* EFUSE_KEY2_DATA0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the zeroth 32-bit of key2..*/
#define EFUSE_KEY2_DATA0    0xFFFFFFFF
#define EFUSE_KEY2_DATA0_M  ((EFUSE_KEY2_DATA0_V)<<(EFUSE_KEY2_DATA0_S))
#define EFUSE_KEY2_DATA0_V  0xFFFFFFFF
#define EFUSE_KEY2_DATA0_S  0

#define EFUSE_RD_KEY2_DATA1_REG          (DR_REG_EFUSE_BASE + 0xE0)
/* EFUSE_KEY2_DATA1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the first 32-bit of key2..*/
#define EFUSE_KEY2_DATA1    0xFFFFFFFF
#define EFUSE_KEY2_DATA1_M  ((EFUSE_KEY2_DATA1_V)<<(EFUSE_KEY2_DATA1_S))
#define EFUSE_KEY2_DATA1_V  0xFFFFFFFF
#define EFUSE_KEY2_DATA1_S  0

#define EFUSE_RD_KEY2_DATA2_REG          (DR_REG_EFUSE_BASE + 0xE4)
/* EFUSE_KEY2_DATA2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of key2..*/
#define EFUSE_KEY2_DATA2    0xFFFFFFFF
#define EFUSE_KEY2_DATA2_M  ((EFUSE_KEY2_DATA2_V)<<(EFUSE_KEY2_DATA2_S))
#define EFUSE_KEY2_DATA2_V  0xFFFFFFFF
#define EFUSE_KEY2_DATA2_S  0

#define EFUSE_RD_KEY2_DATA3_REG          (DR_REG_EFUSE_BASE + 0xE8)
/* EFUSE_KEY2_DATA3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of key2..*/
#define EFUSE_KEY2_DATA3    0xFFFFFFFF
#define EFUSE_KEY2_DATA3_M  ((EFUSE_KEY2_DATA3_V)<<(EFUSE_KEY2_DATA3_S))
#define EFUSE_KEY2_DATA3_V  0xFFFFFFFF
#define EFUSE_KEY2_DATA3_S  0

#define EFUSE_RD_KEY2_DATA4_REG          (DR_REG_EFUSE_BASE + 0xEC)
/* EFUSE_KEY2_DATA4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fourth 32-bit of key2..*/
#define EFUSE_KEY2_DATA4    0xFFFFFFFF
#define EFUSE_KEY2_DATA4_M  ((EFUSE_KEY2_DATA4_V)<<(EFUSE_KEY2_DATA4_S))
#define EFUSE_KEY2_DATA4_V  0xFFFFFFFF
#define EFUSE_KEY2_DATA4_S  0

#define EFUSE_RD_KEY2_DATA5_REG          (DR_REG_EFUSE_BASE + 0xF0)
/* EFUSE_KEY2_DATA5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fifth 32-bit of key2..*/
#define EFUSE_KEY2_DATA5    0xFFFFFFFF
#define EFUSE_KEY2_DATA5_M  ((EFUSE_KEY2_DATA5_V)<<(EFUSE_KEY2_DATA5_S))
#define EFUSE_KEY2_DATA5_V  0xFFFFFFFF
#define EFUSE_KEY2_DATA5_S  0

#define EFUSE_RD_KEY2_DATA6_REG          (DR_REG_EFUSE_BASE + 0xF4)
/* EFUSE_KEY2_DATA6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the sixth 32-bit of key2..*/
#define EFUSE_KEY2_DATA6    0xFFFFFFFF
#define EFUSE_KEY2_DATA6_M  ((EFUSE_KEY2_DATA6_V)<<(EFUSE_KEY2_DATA6_S))
#define EFUSE_KEY2_DATA6_V  0xFFFFFFFF
#define EFUSE_KEY2_DATA6_S  0

#define EFUSE_RD_KEY2_DATA7_REG          (DR_REG_EFUSE_BASE + 0xF8)
/* EFUSE_KEY2_DATA7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the seventh 32-bit of key2..*/
#define EFUSE_KEY2_DATA7    0xFFFFFFFF
#define EFUSE_KEY2_DATA7_M  ((EFUSE_KEY2_DATA7_V)<<(EFUSE_KEY2_DATA7_S))
#define EFUSE_KEY2_DATA7_V  0xFFFFFFFF
#define EFUSE_KEY2_DATA7_S  0

#define EFUSE_RD_KEY3_DATA0_REG          (DR_REG_EFUSE_BASE + 0xFC)
/* EFUSE_KEY3_DATA0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the zeroth 32-bit of key3..*/
#define EFUSE_KEY3_DATA0    0xFFFFFFFF
#define EFUSE_KEY3_DATA0_M  ((EFUSE_KEY3_DATA0_V)<<(EFUSE_KEY3_DATA0_S))
#define EFUSE_KEY3_DATA0_V  0xFFFFFFFF
#define EFUSE_KEY3_DATA0_S  0

#define EFUSE_RD_KEY3_DATA1_REG          (DR_REG_EFUSE_BASE + 0x100)
/* EFUSE_KEY3_DATA1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the first 32-bit of key3..*/
#define EFUSE_KEY3_DATA1    0xFFFFFFFF
#define EFUSE_KEY3_DATA1_M  ((EFUSE_KEY3_DATA1_V)<<(EFUSE_KEY3_DATA1_S))
#define EFUSE_KEY3_DATA1_V  0xFFFFFFFF
#define EFUSE_KEY3_DATA1_S  0

#define EFUSE_RD_KEY3_DATA2_REG          (DR_REG_EFUSE_BASE + 0x104)
/* EFUSE_KEY3_DATA2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of key3..*/
#define EFUSE_KEY3_DATA2    0xFFFFFFFF
#define EFUSE_KEY3_DATA2_M  ((EFUSE_KEY3_DATA2_V)<<(EFUSE_KEY3_DATA2_S))
#define EFUSE_KEY3_DATA2_V  0xFFFFFFFF
#define EFUSE_KEY3_DATA2_S  0

#define EFUSE_RD_KEY3_DATA3_REG          (DR_REG_EFUSE_BASE + 0x108)
/* EFUSE_KEY3_DATA3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of key3..*/
#define EFUSE_KEY3_DATA3    0xFFFFFFFF
#define EFUSE_KEY3_DATA3_M  ((EFUSE_KEY3_DATA3_V)<<(EFUSE_KEY3_DATA3_S))
#define EFUSE_KEY3_DATA3_V  0xFFFFFFFF
#define EFUSE_KEY3_DATA3_S  0

#define EFUSE_RD_KEY3_DATA4_REG          (DR_REG_EFUSE_BASE + 0x10C)
/* EFUSE_KEY3_DATA4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fourth 32-bit of key3..*/
#define EFUSE_KEY3_DATA4    0xFFFFFFFF
#define EFUSE_KEY3_DATA4_M  ((EFUSE_KEY3_DATA4_V)<<(EFUSE_KEY3_DATA4_S))
#define EFUSE_KEY3_DATA4_V  0xFFFFFFFF
#define EFUSE_KEY3_DATA4_S  0

#define EFUSE_RD_KEY3_DATA5_REG          (DR_REG_EFUSE_BASE + 0x110)
/* EFUSE_KEY3_DATA5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fifth 32-bit of key3..*/
#define EFUSE_KEY3_DATA5    0xFFFFFFFF
#define EFUSE_KEY3_DATA5_M  ((EFUSE_KEY3_DATA5_V)<<(EFUSE_KEY3_DATA5_S))
#define EFUSE_KEY3_DATA5_V  0xFFFFFFFF
#define EFUSE_KEY3_DATA5_S  0

#define EFUSE_RD_KEY3_DATA6_REG          (DR_REG_EFUSE_BASE + 0x114)
/* EFUSE_KEY3_DATA6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the sixth 32-bit of key3..*/
#define EFUSE_KEY3_DATA6    0xFFFFFFFF
#define EFUSE_KEY3_DATA6_M  ((EFUSE_KEY3_DATA6_V)<<(EFUSE_KEY3_DATA6_S))
#define EFUSE_KEY3_DATA6_V  0xFFFFFFFF
#define EFUSE_KEY3_DATA6_S  0

#define EFUSE_RD_KEY3_DATA7_REG          (DR_REG_EFUSE_BASE + 0x118)
/* EFUSE_KEY3_DATA7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the seventh 32-bit of key3..*/
#define EFUSE_KEY3_DATA7    0xFFFFFFFF
#define EFUSE_KEY3_DATA7_M  ((EFUSE_KEY3_DATA7_V)<<(EFUSE_KEY3_DATA7_S))
#define EFUSE_KEY3_DATA7_V  0xFFFFFFFF
#define EFUSE_KEY3_DATA7_S  0

#define EFUSE_RD_KEY4_DATA0_REG          (DR_REG_EFUSE_BASE + 0x11C)
/* EFUSE_KEY4_DATA0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the zeroth 32-bit of key4..*/
#define EFUSE_KEY4_DATA0    0xFFFFFFFF
#define EFUSE_KEY4_DATA0_M  ((EFUSE_KEY4_DATA0_V)<<(EFUSE_KEY4_DATA0_S))
#define EFUSE_KEY4_DATA0_V  0xFFFFFFFF
#define EFUSE_KEY4_DATA0_S  0

#define EFUSE_RD_KEY4_DATA1_REG          (DR_REG_EFUSE_BASE + 0x120)
/* EFUSE_KEY4_DATA1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the first 32-bit of key4..*/
#define EFUSE_KEY4_DATA1    0xFFFFFFFF
#define EFUSE_KEY4_DATA1_M  ((EFUSE_KEY4_DATA1_V)<<(EFUSE_KEY4_DATA1_S))
#define EFUSE_KEY4_DATA1_V  0xFFFFFFFF
#define EFUSE_KEY4_DATA1_S  0

#define EFUSE_RD_KEY4_DATA2_REG          (DR_REG_EFUSE_BASE + 0x124)
/* EFUSE_KEY4_DATA2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of key4..*/
#define EFUSE_KEY4_DATA2    0xFFFFFFFF
#define EFUSE_KEY4_DATA2_M  ((EFUSE_KEY4_DATA2_V)<<(EFUSE_KEY4_DATA2_S))
#define EFUSE_KEY4_DATA2_V  0xFFFFFFFF
#define EFUSE_KEY4_DATA2_S  0

#define EFUSE_RD_KEY4_DATA3_REG          (DR_REG_EFUSE_BASE + 0x128)
/* EFUSE_KEY4_DATA3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of key4..*/
#define EFUSE_KEY4_DATA3    0xFFFFFFFF
#define EFUSE_KEY4_DATA3_M  ((EFUSE_KEY4_DATA3_V)<<(EFUSE_KEY4_DATA3_S))
#define EFUSE_KEY4_DATA3_V  0xFFFFFFFF
#define EFUSE_KEY4_DATA3_S  0

#define EFUSE_RD_KEY4_DATA4_REG          (DR_REG_EFUSE_BASE + 0x12C)
/* EFUSE_KEY4_DATA4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fourth 32-bit of key4..*/
#define EFUSE_KEY4_DATA4    0xFFFFFFFF
#define EFUSE_KEY4_DATA4_M  ((EFUSE_KEY4_DATA4_V)<<(EFUSE_KEY4_DATA4_S))
#define EFUSE_KEY4_DATA4_V  0xFFFFFFFF
#define EFUSE_KEY4_DATA4_S  0

#define EFUSE_RD_KEY4_DATA5_REG          (DR_REG_EFUSE_BASE + 0x130)
/* EFUSE_KEY4_DATA5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fifth 32-bit of key4..*/
#define EFUSE_KEY4_DATA5    0xFFFFFFFF
#define EFUSE_KEY4_DATA5_M  ((EFUSE_KEY4_DATA5_V)<<(EFUSE_KEY4_DATA5_S))
#define EFUSE_KEY4_DATA5_V  0xFFFFFFFF
#define EFUSE_KEY4_DATA5_S  0

#define EFUSE_RD_KEY4_DATA6_REG          (DR_REG_EFUSE_BASE + 0x134)
/* EFUSE_KEY4_DATA6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the sixth 32-bit of key4..*/
#define EFUSE_KEY4_DATA6    0xFFFFFFFF
#define EFUSE_KEY4_DATA6_M  ((EFUSE_KEY4_DATA6_V)<<(EFUSE_KEY4_DATA6_S))
#define EFUSE_KEY4_DATA6_V  0xFFFFFFFF
#define EFUSE_KEY4_DATA6_S  0

#define EFUSE_RD_KEY4_DATA7_REG          (DR_REG_EFUSE_BASE + 0x138)
/* EFUSE_KEY4_DATA7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the seventh 32-bit of key4..*/
#define EFUSE_KEY4_DATA7    0xFFFFFFFF
#define EFUSE_KEY4_DATA7_M  ((EFUSE_KEY4_DATA7_V)<<(EFUSE_KEY4_DATA7_S))
#define EFUSE_KEY4_DATA7_V  0xFFFFFFFF
#define EFUSE_KEY4_DATA7_S  0

#define EFUSE_RD_KEY5_DATA0_REG          (DR_REG_EFUSE_BASE + 0x13C)
/* EFUSE_KEY5_DATA0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the zeroth 32-bit of key5..*/
#define EFUSE_KEY5_DATA0    0xFFFFFFFF
#define EFUSE_KEY5_DATA0_M  ((EFUSE_KEY5_DATA0_V)<<(EFUSE_KEY5_DATA0_S))
#define EFUSE_KEY5_DATA0_V  0xFFFFFFFF
#define EFUSE_KEY5_DATA0_S  0

#define EFUSE_RD_KEY5_DATA1_REG          (DR_REG_EFUSE_BASE + 0x140)
/* EFUSE_KEY5_DATA1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the first 32-bit of key5..*/
#define EFUSE_KEY5_DATA1    0xFFFFFFFF
#define EFUSE_KEY5_DATA1_M  ((EFUSE_KEY5_DATA1_V)<<(EFUSE_KEY5_DATA1_S))
#define EFUSE_KEY5_DATA1_V  0xFFFFFFFF
#define EFUSE_KEY5_DATA1_S  0

#define EFUSE_RD_KEY5_DATA2_REG          (DR_REG_EFUSE_BASE + 0x144)
/* EFUSE_KEY5_DATA2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of key5..*/
#define EFUSE_KEY5_DATA2    0xFFFFFFFF
#define EFUSE_KEY5_DATA2_M  ((EFUSE_KEY5_DATA2_V)<<(EFUSE_KEY5_DATA2_S))
#define EFUSE_KEY5_DATA2_V  0xFFFFFFFF
#define EFUSE_KEY5_DATA2_S  0

#define EFUSE_RD_KEY5_DATA3_REG          (DR_REG_EFUSE_BASE + 0x148)
/* EFUSE_KEY5_DATA3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of key5..*/
#define EFUSE_KEY5_DATA3    0xFFFFFFFF
#define EFUSE_KEY5_DATA3_M  ((EFUSE_KEY5_DATA3_V)<<(EFUSE_KEY5_DATA3_S))
#define EFUSE_KEY5_DATA3_V  0xFFFFFFFF
#define EFUSE_KEY5_DATA3_S  0

#define EFUSE_RD_KEY5_DATA4_REG          (DR_REG_EFUSE_BASE + 0x14C)
/* EFUSE_KEY5_DATA4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fourth 32-bit of key5..*/
#define EFUSE_KEY5_DATA4    0xFFFFFFFF
#define EFUSE_KEY5_DATA4_M  ((EFUSE_KEY5_DATA4_V)<<(EFUSE_KEY5_DATA4_S))
#define EFUSE_KEY5_DATA4_V  0xFFFFFFFF
#define EFUSE_KEY5_DATA4_S  0

#define EFUSE_RD_KEY5_DATA5_REG          (DR_REG_EFUSE_BASE + 0x150)
/* EFUSE_KEY5_DATA5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fifth 32-bit of key5..*/
#define EFUSE_KEY5_DATA5    0xFFFFFFFF
#define EFUSE_KEY5_DATA5_M  ((EFUSE_KEY5_DATA5_V)<<(EFUSE_KEY5_DATA5_S))
#define EFUSE_KEY5_DATA5_V  0xFFFFFFFF
#define EFUSE_KEY5_DATA5_S  0

#define EFUSE_RD_KEY5_DATA6_REG          (DR_REG_EFUSE_BASE + 0x154)
/* EFUSE_KEY5_DATA6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the sixth 32-bit of key5..*/
#define EFUSE_KEY5_DATA6    0xFFFFFFFF
#define EFUSE_KEY5_DATA6_M  ((EFUSE_KEY5_DATA6_V)<<(EFUSE_KEY5_DATA6_S))
#define EFUSE_KEY5_DATA6_V  0xFFFFFFFF
#define EFUSE_KEY5_DATA6_S  0

#define EFUSE_RD_KEY5_DATA7_REG          (DR_REG_EFUSE_BASE + 0x158)
/* EFUSE_KEY5_DATA7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the seventh 32-bit of key5..*/
#define EFUSE_KEY5_DATA7    0xFFFFFFFF
#define EFUSE_KEY5_DATA7_M  ((EFUSE_KEY5_DATA7_V)<<(EFUSE_KEY5_DATA7_S))
#define EFUSE_KEY5_DATA7_V  0xFFFFFFFF
#define EFUSE_KEY5_DATA7_S  0

#define EFUSE_RD_SYS_PART2_DATA0_REG          (DR_REG_EFUSE_BASE + 0x15C)
/* EFUSE_SYS_DATA_PART2_0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the zeroth 32-bit of second part of system data..*/
#define EFUSE_SYS_DATA_PART2_0    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_0_M  ((EFUSE_SYS_DATA_PART2_0_V)<<(EFUSE_SYS_DATA_PART2_0_S))
#define EFUSE_SYS_DATA_PART2_0_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_0_S  0

#define EFUSE_RD_SYS_PART2_DATA1_REG          (DR_REG_EFUSE_BASE + 0x160)
/* EFUSE_SYS_DATA_PART2_1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the first 32-bit of second part of system data..*/
#define EFUSE_SYS_DATA_PART2_1    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_1_M  ((EFUSE_SYS_DATA_PART2_1_V)<<(EFUSE_SYS_DATA_PART2_1_S))
#define EFUSE_SYS_DATA_PART2_1_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_1_S  0

#define EFUSE_RD_SYS_PART2_DATA2_REG          (DR_REG_EFUSE_BASE + 0x164)
/* EFUSE_SYS_DATA_PART2_2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the second 32-bit of second part of system data..*/
#define EFUSE_SYS_DATA_PART2_2    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_2_M  ((EFUSE_SYS_DATA_PART2_2_V)<<(EFUSE_SYS_DATA_PART2_2_S))
#define EFUSE_SYS_DATA_PART2_2_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_2_S  0

#define EFUSE_RD_SYS_PART2_DATA3_REG          (DR_REG_EFUSE_BASE + 0x168)
/* EFUSE_SYS_DATA_PART2_3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the third 32-bit of second part of system data..*/
#define EFUSE_SYS_DATA_PART2_3    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_3_M  ((EFUSE_SYS_DATA_PART2_3_V)<<(EFUSE_SYS_DATA_PART2_3_S))
#define EFUSE_SYS_DATA_PART2_3_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_3_S  0

#define EFUSE_RD_SYS_PART2_DATA4_REG          (DR_REG_EFUSE_BASE + 0x16C)
/* EFUSE_SYS_DATA_PART2_4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fourth 32-bit of second part of system data..*/
#define EFUSE_SYS_DATA_PART2_4    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_4_M  ((EFUSE_SYS_DATA_PART2_4_V)<<(EFUSE_SYS_DATA_PART2_4_S))
#define EFUSE_SYS_DATA_PART2_4_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_4_S  0

#define EFUSE_RD_SYS_PART2_DATA5_REG          (DR_REG_EFUSE_BASE + 0x170)
/* EFUSE_SYS_DATA_PART2_5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the fifth 32-bit of second part of system data..*/
#define EFUSE_SYS_DATA_PART2_5    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_5_M  ((EFUSE_SYS_DATA_PART2_5_V)<<(EFUSE_SYS_DATA_PART2_5_S))
#define EFUSE_SYS_DATA_PART2_5_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_5_S  0

#define EFUSE_RD_SYS_PART2_DATA6_REG          (DR_REG_EFUSE_BASE + 0x174)
/* EFUSE_SYS_DATA_PART2_6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the sixth 32-bit of second part of system data..*/
#define EFUSE_SYS_DATA_PART2_6    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_6_M  ((EFUSE_SYS_DATA_PART2_6_V)<<(EFUSE_SYS_DATA_PART2_6_S))
#define EFUSE_SYS_DATA_PART2_6_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_6_S  0

#define EFUSE_RD_SYS_PART2_DATA7_REG          (DR_REG_EFUSE_BASE + 0x178)
/* EFUSE_SYS_DATA_PART2_7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the seventh 32-bit of second part of system data..*/
#define EFUSE_SYS_DATA_PART2_7    0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_7_M  ((EFUSE_SYS_DATA_PART2_7_V)<<(EFUSE_SYS_DATA_PART2_7_S))
#define EFUSE_SYS_DATA_PART2_7_V  0xFFFFFFFF
#define EFUSE_SYS_DATA_PART2_7_S  0

#define EFUSE_RD_REPEAT_DATA_ERR0_REG          (DR_REG_EFUSE_BASE + 0x17C)
/* EFUSE_KM_DEPLOY_ONLY_ONCE_ERR : RO ;bitpos:[31:27] ;default: 5'h0 ; */
/*description: Represents the programming error of EFUSE_KM_DEPLOY_ONLY_ONCE.*/
#define EFUSE_KM_DEPLOY_ONLY_ONCE_ERR    0x0000001F
#define EFUSE_KM_DEPLOY_ONLY_ONCE_ERR_M  ((EFUSE_KM_DEPLOY_ONLY_ONCE_ERR_V)<<(EFUSE_KM_DEPLOY_ONLY_ONCE_ERR_S))
#define EFUSE_KM_DEPLOY_ONLY_ONCE_ERR_V  0x1F
#define EFUSE_KM_DEPLOY_ONLY_ONCE_ERR_S  27
/* EFUSE_KM_RND_SWITCH_CYCLE_ERR : RO ;bitpos:[26:25] ;default: 2'h0 ; */
/*description: Represents the programming error of EFUSE_KM_RND_SWITCH_CYCLE.*/
#define EFUSE_KM_RND_SWITCH_CYCLE_ERR    0x00000003
#define EFUSE_KM_RND_SWITCH_CYCLE_ERR_M  ((EFUSE_KM_RND_SWITCH_CYCLE_ERR_V)<<(EFUSE_KM_RND_SWITCH_CYCLE_ERR_S))
#define EFUSE_KM_RND_SWITCH_CYCLE_ERR_V  0x3
#define EFUSE_KM_RND_SWITCH_CYCLE_ERR_S  25
/* EFUSE_HUK_GEN_STATE_ERR : RO ;bitpos:[24:16] ;default: 9'h0 ; */
/*description: Represents the programming error of EFUSE_HUK_GEN_STATE.*/
#define EFUSE_HUK_GEN_STATE_ERR    0x000001FF
#define EFUSE_HUK_GEN_STATE_ERR_M  ((EFUSE_HUK_GEN_STATE_ERR_V)<<(EFUSE_HUK_GEN_STATE_ERR_S))
#define EFUSE_HUK_GEN_STATE_ERR_V  0x1FF
#define EFUSE_HUK_GEN_STATE_ERR_S  16
/* EFUSE_DIS_PAD_JTAG_ERR : RO ;bitpos:[15] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_PAD_JTAG.*/
#define EFUSE_DIS_PAD_JTAG_ERR    (BIT(15))
#define EFUSE_DIS_PAD_JTAG_ERR_M  (BIT(15))
#define EFUSE_DIS_PAD_JTAG_ERR_V  0x1
#define EFUSE_DIS_PAD_JTAG_ERR_S  15
/* EFUSE_SOFT_DIS_JTAG_ERR : RO ;bitpos:[14:12] ;default: 3'h0 ; */
/*description: Represents the programming error of EFUSE_SOFT_DIS_JTAG.*/
#define EFUSE_SOFT_DIS_JTAG_ERR    0x00000007
#define EFUSE_SOFT_DIS_JTAG_ERR_M  ((EFUSE_SOFT_DIS_JTAG_ERR_V)<<(EFUSE_SOFT_DIS_JTAG_ERR_S))
#define EFUSE_SOFT_DIS_JTAG_ERR_V  0x7
#define EFUSE_SOFT_DIS_JTAG_ERR_S  12
/* EFUSE_DIS_TWAI_ERR : RO ;bitpos:[11] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_TWAI.*/
#define EFUSE_DIS_TWAI_ERR    (BIT(11))
#define EFUSE_DIS_TWAI_ERR_M  (BIT(11))
#define EFUSE_DIS_TWAI_ERR_V  0x1
#define EFUSE_DIS_TWAI_ERR_S  11
/* EFUSE_SPI_DOWNLOAD_MSPI_DIS_ERR : RO ;bitpos:[10] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_SPI_DOWNLOAD_MSPI_DIS.*/
#define EFUSE_SPI_DOWNLOAD_MSPI_DIS_ERR    (BIT(10))
#define EFUSE_SPI_DOWNLOAD_MSPI_DIS_ERR_M  (BIT(10))
#define EFUSE_SPI_DOWNLOAD_MSPI_DIS_ERR_V  0x1
#define EFUSE_SPI_DOWNLOAD_MSPI_DIS_ERR_S  10
/* EFUSE_DIS_FORCE_DOWNLOAD_ERR : RO ;bitpos:[9] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_FORCE_DOWNLOAD.*/
#define EFUSE_DIS_FORCE_DOWNLOAD_ERR    (BIT(9))
#define EFUSE_DIS_FORCE_DOWNLOAD_ERR_M  (BIT(9))
#define EFUSE_DIS_FORCE_DOWNLOAD_ERR_V  0x1
#define EFUSE_DIS_FORCE_DOWNLOAD_ERR_S  9
/* EFUSE_DIS_USB_SERIAL_JTAG_ERR : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_USB_SERIAL_JTAG.*/
#define EFUSE_DIS_USB_SERIAL_JTAG_ERR    (BIT(8))
#define EFUSE_DIS_USB_SERIAL_JTAG_ERR_M  (BIT(8))
#define EFUSE_DIS_USB_SERIAL_JTAG_ERR_V  0x1
#define EFUSE_DIS_USB_SERIAL_JTAG_ERR_S  8
/* EFUSE_DIS_USB_JTAG_ERR : RO ;bitpos:[7] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_USB_JTAG.*/
#define EFUSE_DIS_USB_JTAG_ERR    (BIT(7))
#define EFUSE_DIS_USB_JTAG_ERR_M  (BIT(7))
#define EFUSE_DIS_USB_JTAG_ERR_V  0x1
#define EFUSE_DIS_USB_JTAG_ERR_S  7
/* EFUSE_RD_DIS_ERR : RO ;bitpos:[6:0] ;default: 7'h0 ; */
/*description: Represents the programming error of EFUSE_RD_DIS.*/
#define EFUSE_RD_DIS_ERR    0x0000007F
#define EFUSE_RD_DIS_ERR_M  ((EFUSE_RD_DIS_ERR_V)<<(EFUSE_RD_DIS_ERR_S))
#define EFUSE_RD_DIS_ERR_V  0x7F
#define EFUSE_RD_DIS_ERR_S  0

#define EFUSE_RD_REPEAT_DATA_ERR1_REG          (DR_REG_EFUSE_BASE + 0x180)
/* EFUSE_KEY_PURPOSE_2_ERR : RO ;bitpos:[31:27] ;default: 5'h0 ; */
/*description: Represents the programming error of EFUSE_KEY_PURPOSE_2.*/
#define EFUSE_KEY_PURPOSE_2_ERR    0x0000001F
#define EFUSE_KEY_PURPOSE_2_ERR_M  ((EFUSE_KEY_PURPOSE_2_ERR_V)<<(EFUSE_KEY_PURPOSE_2_ERR_S))
#define EFUSE_KEY_PURPOSE_2_ERR_V  0x1F
#define EFUSE_KEY_PURPOSE_2_ERR_S  27
/* EFUSE_KEY_PURPOSE_1_ERR : RO ;bitpos:[26:22] ;default: 5'h0 ; */
/*description: Represents the programming error of EFUSE_KEY_PURPOSE_1.*/
#define EFUSE_KEY_PURPOSE_1_ERR    0x0000001F
#define EFUSE_KEY_PURPOSE_1_ERR_M  ((EFUSE_KEY_PURPOSE_1_ERR_V)<<(EFUSE_KEY_PURPOSE_1_ERR_S))
#define EFUSE_KEY_PURPOSE_1_ERR_V  0x1F
#define EFUSE_KEY_PURPOSE_1_ERR_S  22
/* EFUSE_KEY_PURPOSE_0_ERR : RO ;bitpos:[21:17] ;default: 5'h0 ; */
/*description: Represents the programming error of EFUSE_KEY_PURPOSE_0.*/
#define EFUSE_KEY_PURPOSE_0_ERR    0x0000001F
#define EFUSE_KEY_PURPOSE_0_ERR_M  ((EFUSE_KEY_PURPOSE_0_ERR_V)<<(EFUSE_KEY_PURPOSE_0_ERR_S))
#define EFUSE_KEY_PURPOSE_0_ERR_V  0x1F
#define EFUSE_KEY_PURPOSE_0_ERR_S  17
/* EFUSE_SECURE_BOOT_KEY_REVOKE2_ERR : RO ;bitpos:[16] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_SECURE_BOOT_KEY_REVOKE2.*/
#define EFUSE_SECURE_BOOT_KEY_REVOKE2_ERR    (BIT(16))
#define EFUSE_SECURE_BOOT_KEY_REVOKE2_ERR_M  (BIT(16))
#define EFUSE_SECURE_BOOT_KEY_REVOKE2_ERR_V  0x1
#define EFUSE_SECURE_BOOT_KEY_REVOKE2_ERR_S  16
/* EFUSE_SECURE_BOOT_KEY_REVOKE1_ERR : RO ;bitpos:[15] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_SECURE_BOOT_KEY_REVOKE1.*/
#define EFUSE_SECURE_BOOT_KEY_REVOKE1_ERR    (BIT(15))
#define EFUSE_SECURE_BOOT_KEY_REVOKE1_ERR_M  (BIT(15))
#define EFUSE_SECURE_BOOT_KEY_REVOKE1_ERR_V  0x1
#define EFUSE_SECURE_BOOT_KEY_REVOKE1_ERR_S  15
/* EFUSE_SECURE_BOOT_KEY_REVOKE0_ERR : RO ;bitpos:[14] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_SECURE_BOOT_KEY_REVOKE0.*/
#define EFUSE_SECURE_BOOT_KEY_REVOKE0_ERR    (BIT(14))
#define EFUSE_SECURE_BOOT_KEY_REVOKE0_ERR_M  (BIT(14))
#define EFUSE_SECURE_BOOT_KEY_REVOKE0_ERR_V  0x1
#define EFUSE_SECURE_BOOT_KEY_REVOKE0_ERR_S  14
/* EFUSE_SPI_BOOT_CRYPT_CNT_ERR : RO ;bitpos:[13:11] ;default: 3'h0 ; */
/*description: Represents the programming error of EFUSE_SPI_BOOT_CRYPT_CNT.*/
#define EFUSE_SPI_BOOT_CRYPT_CNT_ERR    0x00000007
#define EFUSE_SPI_BOOT_CRYPT_CNT_ERR_M  ((EFUSE_SPI_BOOT_CRYPT_CNT_ERR_V)<<(EFUSE_SPI_BOOT_CRYPT_CNT_ERR_S))
#define EFUSE_SPI_BOOT_CRYPT_CNT_ERR_V  0x7
#define EFUSE_SPI_BOOT_CRYPT_CNT_ERR_S  11
/* EFUSE_WDT_DELAY_SEL_ERR : RO ;bitpos:[10:9] ;default: 2'h0 ; */
/*description: Represents the programming error of EFUSE_WDT_DELAY_SEL.*/
#define EFUSE_WDT_DELAY_SEL_ERR    0x00000003
#define EFUSE_WDT_DELAY_SEL_ERR_M  ((EFUSE_WDT_DELAY_SEL_ERR_V)<<(EFUSE_WDT_DELAY_SEL_ERR_S))
#define EFUSE_WDT_DELAY_SEL_ERR_V  0x3
#define EFUSE_WDT_DELAY_SEL_ERR_S  9
/* EFUSE_DIS_REDUNDANCY_ERR : RO ;bitpos:[8] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_REDUNDANCY.*/
#define EFUSE_DIS_REDUNDANCY_ERR    (BIT(8))
#define EFUSE_DIS_REDUNDANCY_ERR_M  (BIT(8))
#define EFUSE_DIS_REDUNDANCY_ERR_V  0x1
#define EFUSE_DIS_REDUNDANCY_ERR_S  8
/* EFUSE_KM_XTS_KEY_LENGTH_256_ERR : RO ;bitpos:[7] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_KM_XTS_KEY_LENGTH_256.*/
#define EFUSE_KM_XTS_KEY_LENGTH_256_ERR    (BIT(7))
#define EFUSE_KM_XTS_KEY_LENGTH_256_ERR_M  (BIT(7))
#define EFUSE_KM_XTS_KEY_LENGTH_256_ERR_V  0x1
#define EFUSE_KM_XTS_KEY_LENGTH_256_ERR_S  7
/* EFUSE_FORCE_DISABLE_SW_INIT_KEY_ERR : RO ;bitpos:[6] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_FORCE_DISABLE_SW_INIT_KEY.*/
#define EFUSE_FORCE_DISABLE_SW_INIT_KEY_ERR    (BIT(6))
#define EFUSE_FORCE_DISABLE_SW_INIT_KEY_ERR_M  (BIT(6))
#define EFUSE_FORCE_DISABLE_SW_INIT_KEY_ERR_V  0x1
#define EFUSE_FORCE_DISABLE_SW_INIT_KEY_ERR_S  6
/* EFUSE_FORCE_USE_KEY_MANAGER_KEY_ERR : RO ;bitpos:[5:1] ;default: 5'h0 ; */
/*description: Represents the programming error of EFUSE_FORCE_USE_KEY_MANAGER_KEY.*/
#define EFUSE_FORCE_USE_KEY_MANAGER_KEY_ERR    0x0000001F
#define EFUSE_FORCE_USE_KEY_MANAGER_KEY_ERR_M  ((EFUSE_FORCE_USE_KEY_MANAGER_KEY_ERR_V)<<(EFUSE_FORCE_USE_KEY_MANAGER_KEY_ERR_S))
#define EFUSE_FORCE_USE_KEY_MANAGER_KEY_ERR_V  0x1F
#define EFUSE_FORCE_USE_KEY_MANAGER_KEY_ERR_S  1
/* EFUSE_JTAG_SEL_ENABLE_ERR : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_JTAG_SEL_ENABLE.*/
#define EFUSE_JTAG_SEL_ENABLE_ERR    (BIT(0))
#define EFUSE_JTAG_SEL_ENABLE_ERR_M  (BIT(0))
#define EFUSE_JTAG_SEL_ENABLE_ERR_V  0x1
#define EFUSE_JTAG_SEL_ENABLE_ERR_S  0

#define EFUSE_RD_REPEAT_DATA_ERR2_REG          (DR_REG_EFUSE_BASE + 0x184)
/* EFUSE_FLASH_TPUW_ERR : RO ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: Represents the programming error of EFUSE_FLASH_TPUW.*/
#define EFUSE_FLASH_TPUW_ERR    0x0000000F
#define EFUSE_FLASH_TPUW_ERR_M  ((EFUSE_FLASH_TPUW_ERR_V)<<(EFUSE_FLASH_TPUW_ERR_S))
#define EFUSE_FLASH_TPUW_ERR_V  0xF
#define EFUSE_FLASH_TPUW_ERR_S  28
/* EFUSE_DIS_USB_OTG_DOWNLOAD_MODE_ERR : RO ;bitpos:[27] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_USB_OTG_DOWNLOAD_MODE.*/
#define EFUSE_DIS_USB_OTG_DOWNLOAD_MODE_ERR    (BIT(27))
#define EFUSE_DIS_USB_OTG_DOWNLOAD_MODE_ERR_M  (BIT(27))
#define EFUSE_DIS_USB_OTG_DOWNLOAD_MODE_ERR_V  0x1
#define EFUSE_DIS_USB_OTG_DOWNLOAD_MODE_ERR_S  27
/* EFUSE_USB_SERIAL_JTAG_EXCHG_PINS_ERR : RO ;bitpos:[26] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_USB_SERIAL_JTAG_EXCHG_PINS.*/
#define EFUSE_USB_SERIAL_JTAG_EXCHG_PINS_ERR    (BIT(26))
#define EFUSE_USB_SERIAL_JTAG_EXCHG_PINS_ERR_M  (BIT(26))
#define EFUSE_USB_SERIAL_JTAG_EXCHG_PINS_ERR_V  0x1
#define EFUSE_USB_SERIAL_JTAG_EXCHG_PINS_ERR_S  26
/* EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE_ERR : RO ;bitpos:[19] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE.*/
#define EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE_ERR    (BIT(19))
#define EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE_ERR_M  (BIT(19))
#define EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE_ERR_V  0x1
#define EFUSE_SECURE_BOOT_AGGRESSIVE_REVOKE_ERR_S  19
/* EFUSE_SECURE_BOOT_EN_ERR : RO ;bitpos:[18] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_SECURE_BOOT_EN.*/
#define EFUSE_SECURE_BOOT_EN_ERR    (BIT(18))
#define EFUSE_SECURE_BOOT_EN_ERR_M  (BIT(18))
#define EFUSE_SECURE_BOOT_EN_ERR_V  0x1
#define EFUSE_SECURE_BOOT_EN_ERR_S  18
/* EFUSE_CRYPT_DPA_ENABLE_ERR : RO ;bitpos:[17] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_CRYPT_DPA_ENABLE.*/
#define EFUSE_CRYPT_DPA_ENABLE_ERR    (BIT(17))
#define EFUSE_CRYPT_DPA_ENABLE_ERR_M  (BIT(17))
#define EFUSE_CRYPT_DPA_ENABLE_ERR_V  0x1
#define EFUSE_CRYPT_DPA_ENABLE_ERR_S  17
/* EFUSE_SEC_DPA_LEVEL_ERR : RO ;bitpos:[16:15] ;default: 2'h0 ; */
/*description: Represents the programming error of EFUSE_SEC_DPA_LEVEL.*/
#define EFUSE_SEC_DPA_LEVEL_ERR    0x00000003
#define EFUSE_SEC_DPA_LEVEL_ERR_M  ((EFUSE_SEC_DPA_LEVEL_ERR_V)<<(EFUSE_SEC_DPA_LEVEL_ERR_S))
#define EFUSE_SEC_DPA_LEVEL_ERR_V  0x3
#define EFUSE_SEC_DPA_LEVEL_ERR_S  15
/* EFUSE_KEY_PURPOSE_5_ERR : RO ;bitpos:[14:10] ;default: 5'h0 ; */
/*description: Represents the programming error of EFUSE_KEY_PURPOSE_5.*/
#define EFUSE_KEY_PURPOSE_5_ERR    0x0000001F
#define EFUSE_KEY_PURPOSE_5_ERR_M  ((EFUSE_KEY_PURPOSE_5_ERR_V)<<(EFUSE_KEY_PURPOSE_5_ERR_S))
#define EFUSE_KEY_PURPOSE_5_ERR_V  0x1F
#define EFUSE_KEY_PURPOSE_5_ERR_S  10
/* EFUSE_KEY_PURPOSE_4_ERR : RO ;bitpos:[9:5] ;default: 5'h0 ; */
/*description: Represents the programming error of EFUSE_KEY_PURPOSE_4.*/
#define EFUSE_KEY_PURPOSE_4_ERR    0x0000001F
#define EFUSE_KEY_PURPOSE_4_ERR_M  ((EFUSE_KEY_PURPOSE_4_ERR_V)<<(EFUSE_KEY_PURPOSE_4_ERR_S))
#define EFUSE_KEY_PURPOSE_4_ERR_V  0x1F
#define EFUSE_KEY_PURPOSE_4_ERR_S  5
/* EFUSE_KEY_PURPOSE_3_ERR : RO ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Represents the programming error of EFUSE_KEY_PURPOSE_3.*/
#define EFUSE_KEY_PURPOSE_3_ERR    0x0000001F
#define EFUSE_KEY_PURPOSE_3_ERR_M  ((EFUSE_KEY_PURPOSE_3_ERR_V)<<(EFUSE_KEY_PURPOSE_3_ERR_S))
#define EFUSE_KEY_PURPOSE_3_ERR_V  0x1F
#define EFUSE_KEY_PURPOSE_3_ERR_S  0

#define EFUSE_RD_REPEAT_DATA_ERR3_REG          (DR_REG_EFUSE_BASE + 0x188)
/* EFUSE_HYS_EN_PAD_ERR : RO ;bitpos:[31] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_HYS_EN_PAD.*/
#define EFUSE_HYS_EN_PAD_ERR    (BIT(31))
#define EFUSE_HYS_EN_PAD_ERR_M  (BIT(31))
#define EFUSE_HYS_EN_PAD_ERR_V  0x1
#define EFUSE_HYS_EN_PAD_ERR_S  31
/* EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE_ERR : RO ;bitpos:[23] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE.*/
#define EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE_ERR    (BIT(23))
#define EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE_ERR_M  (BIT(23))
#define EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE_ERR_V  0x1
#define EFUSE_SECURE_BOOT_DISABLE_FAST_WAKE_ERR_S  23
/* EFUSE_SECURE_VERSION_ERR : RO ;bitpos:[22:7] ;default: 16'h0 ; */
/*description: Represents the programming error of EFUSE_SECURE_VERSION.*/
#define EFUSE_SECURE_VERSION_ERR    0x0000FFFF
#define EFUSE_SECURE_VERSION_ERR_M  ((EFUSE_SECURE_VERSION_ERR_V)<<(EFUSE_SECURE_VERSION_ERR_S))
#define EFUSE_SECURE_VERSION_ERR_V  0xFFFF
#define EFUSE_SECURE_VERSION_ERR_S  7
/* EFUSE_FORCE_SEND_RESUME_ERR : RO ;bitpos:[6] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_FORCE_SEND_RESUME.*/
#define EFUSE_FORCE_SEND_RESUME_ERR    (BIT(6))
#define EFUSE_FORCE_SEND_RESUME_ERR_M  (BIT(6))
#define EFUSE_FORCE_SEND_RESUME_ERR_V  0x1
#define EFUSE_FORCE_SEND_RESUME_ERR_S  6
/* EFUSE_UART_PRINT_CONTROL_ERR : RO ;bitpos:[5:4] ;default: 2'h0 ; */
/*description: Represents the programming error of EFUSE_UART_PRINT_CONTROL.*/
#define EFUSE_UART_PRINT_CONTROL_ERR    0x00000003
#define EFUSE_UART_PRINT_CONTROL_ERR_M  ((EFUSE_UART_PRINT_CONTROL_ERR_V)<<(EFUSE_UART_PRINT_CONTROL_ERR_S))
#define EFUSE_UART_PRINT_CONTROL_ERR_V  0x3
#define EFUSE_UART_PRINT_CONTROL_ERR_S  4
/* EFUSE_ENABLE_SECURITY_DOWNLOAD_ERR : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_ENABLE_SECURITY_DOWNLOAD.*/
#define EFUSE_ENABLE_SECURITY_DOWNLOAD_ERR    (BIT(3))
#define EFUSE_ENABLE_SECURITY_DOWNLOAD_ERR_M  (BIT(3))
#define EFUSE_ENABLE_SECURITY_DOWNLOAD_ERR_V  0x1
#define EFUSE_ENABLE_SECURITY_DOWNLOAD_ERR_S  3
/* EFUSE_LOCK_KM_KEY_ERR : RO ;bitpos:[2] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_LOCK_KM_KEY.*/
#define EFUSE_LOCK_KM_KEY_ERR    (BIT(2))
#define EFUSE_LOCK_KM_KEY_ERR_M  (BIT(2))
#define EFUSE_LOCK_KM_KEY_ERR_V  0x1
#define EFUSE_LOCK_KM_KEY_ERR_S  2
/* EFUSE_DIS_DIRECT_BOOT_ERR : RO ;bitpos:[1] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_DIRECT_BOOT.*/
#define EFUSE_DIS_DIRECT_BOOT_ERR    (BIT(1))
#define EFUSE_DIS_DIRECT_BOOT_ERR_M  (BIT(1))
#define EFUSE_DIS_DIRECT_BOOT_ERR_V  0x1
#define EFUSE_DIS_DIRECT_BOOT_ERR_S  1
/* EFUSE_DIS_DOWNLOAD_MODE_ERR : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_DOWNLOAD_MODE.*/
#define EFUSE_DIS_DOWNLOAD_MODE_ERR    (BIT(0))
#define EFUSE_DIS_DOWNLOAD_MODE_ERR_M  (BIT(0))
#define EFUSE_DIS_DOWNLOAD_MODE_ERR_V  0x1
#define EFUSE_DIS_DOWNLOAD_MODE_ERR_S  0

#define EFUSE_RD_REPEAT_DATA_ERR4_REG          (DR_REG_EFUSE_BASE + 0x18C)
/* EFUSE_PAD_MODE_SELECT_ERR : RO ;bitpos:[23:21] ;default: 3'h0 ; */
/*description: Represents the programming error of EFUSE_PAD_MODE_SELECT.*/
#define EFUSE_PAD_MODE_SELECT_ERR    0x00000007
#define EFUSE_PAD_MODE_SELECT_ERR_M  ((EFUSE_PAD_MODE_SELECT_ERR_V)<<(EFUSE_PAD_MODE_SELECT_ERR_S))
#define EFUSE_PAD_MODE_SELECT_ERR_V  0x7
#define EFUSE_PAD_MODE_SELECT_ERR_S  21
/* EFUSE_LOW_POWER_CNTL_ERR : RO ;bitpos:[20:7] ;default: 14'h0 ; */
/*description: Represents the programming error of EFUSE_LOW_POWER_CNTL.*/
#define EFUSE_LOW_POWER_CNTL_ERR    0x00003FFF
#define EFUSE_LOW_POWER_CNTL_ERR_M  ((EFUSE_LOW_POWER_CNTL_ERR_V)<<(EFUSE_LOW_POWER_CNTL_ERR_S))
#define EFUSE_LOW_POWER_CNTL_ERR_V  0x3FFF
#define EFUSE_LOW_POWER_CNTL_ERR_S  7
/* EFUSE_DIS_SWD_ERR : RO ;bitpos:[6] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_SWD.*/
#define EFUSE_DIS_SWD_ERR    (BIT(6))
#define EFUSE_DIS_SWD_ERR_M  (BIT(6))
#define EFUSE_DIS_SWD_ERR_V  0x1
#define EFUSE_DIS_SWD_ERR_S  6
/* EFUSE_DIS_WDT_ERR : RO ;bitpos:[5] ;default: 1'h0 ; */
/*description: Represents the programming error of EFUSE_DIS_WDT.*/
#define EFUSE_DIS_WDT_ERR    (BIT(5))
#define EFUSE_DIS_WDT_ERR_M  (BIT(5))
#define EFUSE_DIS_WDT_ERR_V  0x1
#define EFUSE_DIS_WDT_ERR_S  5
/* EFUSE_KM_DISABLE_DEPLOY_MODE_ERR : RO ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: Represents the programming error of EFUSE_KM_DISABLE_DEPLOY_MODE.*/
#define EFUSE_KM_DISABLE_DEPLOY_MODE_ERR    0x0000001F
#define EFUSE_KM_DISABLE_DEPLOY_MODE_ERR_M  ((EFUSE_KM_DISABLE_DEPLOY_MODE_ERR_V)<<(EFUSE_KM_DISABLE_DEPLOY_MODE_ERR_S))
#define EFUSE_KM_DISABLE_DEPLOY_MODE_ERR_V  0x1F
#define EFUSE_KM_DISABLE_DEPLOY_MODE_ERR_S  0

#define EFUSE_RD_RS_DATA_ERR0_REG          (DR_REG_EFUSE_BASE + 0x190)
/* EFUSE_RD_KEY4_DATA_FAIL : RO ;bitpos:[31] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_key4_data is reliable\\ 1: Means that programming rd_key4_data failed and the
number of error bytes is over 6..*/
#define EFUSE_RD_KEY4_DATA_FAIL    (BIT(31))
#define EFUSE_RD_KEY4_DATA_FAIL_M  (BIT(31))
#define EFUSE_RD_KEY4_DATA_FAIL_V  0x1
#define EFUSE_RD_KEY4_DATA_FAIL_S  31
/* EFUSE_RD_KEY4_DATA_ERR_NUM : RO ;bitpos:[30:28] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_key4_data.*/
#define EFUSE_RD_KEY4_DATA_ERR_NUM    0x00000007
#define EFUSE_RD_KEY4_DATA_ERR_NUM_M  ((EFUSE_RD_KEY4_DATA_ERR_NUM_V)<<(EFUSE_RD_KEY4_DATA_ERR_NUM_S))
#define EFUSE_RD_KEY4_DATA_ERR_NUM_V  0x7
#define EFUSE_RD_KEY4_DATA_ERR_NUM_S  28
/* EFUSE_RD_KEY3_DATA_FAIL : RO ;bitpos:[27] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_key3_data is reliable\\ 1: Means that programming rd_key3_data failed and the
number of error bytes is over 6..*/
#define EFUSE_RD_KEY3_DATA_FAIL    (BIT(27))
#define EFUSE_RD_KEY3_DATA_FAIL_M  (BIT(27))
#define EFUSE_RD_KEY3_DATA_FAIL_V  0x1
#define EFUSE_RD_KEY3_DATA_FAIL_S  27
/* EFUSE_RD_KEY3_DATA_ERR_NUM : RO ;bitpos:[26:24] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_key3_data.*/
#define EFUSE_RD_KEY3_DATA_ERR_NUM    0x00000007
#define EFUSE_RD_KEY3_DATA_ERR_NUM_M  ((EFUSE_RD_KEY3_DATA_ERR_NUM_V)<<(EFUSE_RD_KEY3_DATA_ERR_NUM_S))
#define EFUSE_RD_KEY3_DATA_ERR_NUM_V  0x7
#define EFUSE_RD_KEY3_DATA_ERR_NUM_S  24
/* EFUSE_RD_KEY2_DATA_FAIL : RO ;bitpos:[23] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_key2_data is reliable\\ 1: Means that programming rd_key2_data failed and the
number of error bytes is over 6..*/
#define EFUSE_RD_KEY2_DATA_FAIL    (BIT(23))
#define EFUSE_RD_KEY2_DATA_FAIL_M  (BIT(23))
#define EFUSE_RD_KEY2_DATA_FAIL_V  0x1
#define EFUSE_RD_KEY2_DATA_FAIL_S  23
/* EFUSE_RD_KEY2_DATA_ERR_NUM : RO ;bitpos:[22:20] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_key2_data.*/
#define EFUSE_RD_KEY2_DATA_ERR_NUM    0x00000007
#define EFUSE_RD_KEY2_DATA_ERR_NUM_M  ((EFUSE_RD_KEY2_DATA_ERR_NUM_V)<<(EFUSE_RD_KEY2_DATA_ERR_NUM_S))
#define EFUSE_RD_KEY2_DATA_ERR_NUM_V  0x7
#define EFUSE_RD_KEY2_DATA_ERR_NUM_S  20
/* EFUSE_RD_KEY1_DATA_FAIL : RO ;bitpos:[19] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_key1_data is reliable\\ 1: Means that programming rd_key1_data failed and the
number of error bytes is over 6..*/
#define EFUSE_RD_KEY1_DATA_FAIL    (BIT(19))
#define EFUSE_RD_KEY1_DATA_FAIL_M  (BIT(19))
#define EFUSE_RD_KEY1_DATA_FAIL_V  0x1
#define EFUSE_RD_KEY1_DATA_FAIL_S  19
/* EFUSE_RD_KEY1_DATA_ERR_NUM : RO ;bitpos:[18:16] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_key1_data.*/
#define EFUSE_RD_KEY1_DATA_ERR_NUM    0x00000007
#define EFUSE_RD_KEY1_DATA_ERR_NUM_M  ((EFUSE_RD_KEY1_DATA_ERR_NUM_V)<<(EFUSE_RD_KEY1_DATA_ERR_NUM_S))
#define EFUSE_RD_KEY1_DATA_ERR_NUM_V  0x7
#define EFUSE_RD_KEY1_DATA_ERR_NUM_S  16
/* EFUSE_RD_KEY0_DATA_FAIL : RO ;bitpos:[15] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_key0_data is reliable\\ 1: Means that programming rd_key0_data failed and the
number of error bytes is over 6..*/
#define EFUSE_RD_KEY0_DATA_FAIL    (BIT(15))
#define EFUSE_RD_KEY0_DATA_FAIL_M  (BIT(15))
#define EFUSE_RD_KEY0_DATA_FAIL_V  0x1
#define EFUSE_RD_KEY0_DATA_FAIL_S  15
/* EFUSE_RD_KEY0_DATA_ERR_NUM : RO ;bitpos:[14:12] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_key0_data.*/
#define EFUSE_RD_KEY0_DATA_ERR_NUM    0x00000007
#define EFUSE_RD_KEY0_DATA_ERR_NUM_M  ((EFUSE_RD_KEY0_DATA_ERR_NUM_V)<<(EFUSE_RD_KEY0_DATA_ERR_NUM_S))
#define EFUSE_RD_KEY0_DATA_ERR_NUM_V  0x7
#define EFUSE_RD_KEY0_DATA_ERR_NUM_S  12
/* EFUSE_RD_USR_DATA_FAIL : RO ;bitpos:[11] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_usr_data is reliable\\ 1: Means that programming rd_usr_data failed and the nu
mber of error bytes is over 6..*/
#define EFUSE_RD_USR_DATA_FAIL    (BIT(11))
#define EFUSE_RD_USR_DATA_FAIL_M  (BIT(11))
#define EFUSE_RD_USR_DATA_FAIL_V  0x1
#define EFUSE_RD_USR_DATA_FAIL_S  11
/* EFUSE_RD_USR_DATA_ERR_NUM : RO ;bitpos:[10:8] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_usr_data.*/
#define EFUSE_RD_USR_DATA_ERR_NUM    0x00000007
#define EFUSE_RD_USR_DATA_ERR_NUM_M  ((EFUSE_RD_USR_DATA_ERR_NUM_V)<<(EFUSE_RD_USR_DATA_ERR_NUM_S))
#define EFUSE_RD_USR_DATA_ERR_NUM_V  0x7
#define EFUSE_RD_USR_DATA_ERR_NUM_S  8
/* EFUSE_RD_SYS_PART1_DATA_FAIL : RO ;bitpos:[7] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_sys_part1_data is reliable\\ 1: Means that programming rd_sys_part1_data faile
d and the number of error bytes is over 6..*/
#define EFUSE_RD_SYS_PART1_DATA_FAIL    (BIT(7))
#define EFUSE_RD_SYS_PART1_DATA_FAIL_M  (BIT(7))
#define EFUSE_RD_SYS_PART1_DATA_FAIL_V  0x1
#define EFUSE_RD_SYS_PART1_DATA_FAIL_S  7
/* EFUSE_RD_SYS_PART1_DATA_ERR_NUM : RO ;bitpos:[6:4] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_sys_part1_data.*/
#define EFUSE_RD_SYS_PART1_DATA_ERR_NUM    0x00000007
#define EFUSE_RD_SYS_PART1_DATA_ERR_NUM_M  ((EFUSE_RD_SYS_PART1_DATA_ERR_NUM_V)<<(EFUSE_RD_SYS_PART1_DATA_ERR_NUM_S))
#define EFUSE_RD_SYS_PART1_DATA_ERR_NUM_V  0x7
#define EFUSE_RD_SYS_PART1_DATA_ERR_NUM_S  4
/* EFUSE_RD_MAC_SYS_FAIL : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_mac_sys is reliable\\ 1: Means that programming rd_mac_sys failed and the numb
er of error bytes is over 6..*/
#define EFUSE_RD_MAC_SYS_FAIL    (BIT(3))
#define EFUSE_RD_MAC_SYS_FAIL_M  (BIT(3))
#define EFUSE_RD_MAC_SYS_FAIL_V  0x1
#define EFUSE_RD_MAC_SYS_FAIL_S  3
/* EFUSE_RD_MAC_SYS_ERR_NUM : RO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_mac_sys.*/
#define EFUSE_RD_MAC_SYS_ERR_NUM    0x00000007
#define EFUSE_RD_MAC_SYS_ERR_NUM_M  ((EFUSE_RD_MAC_SYS_ERR_NUM_V)<<(EFUSE_RD_MAC_SYS_ERR_NUM_S))
#define EFUSE_RD_MAC_SYS_ERR_NUM_V  0x7
#define EFUSE_RD_MAC_SYS_ERR_NUM_S  0

#define EFUSE_RD_RS_DATA_ERR1_REG          (DR_REG_EFUSE_BASE + 0x194)
/* EFUSE_RD_SYS_PART2_DATA_FAIL : RO ;bitpos:[7] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_sys_part2_data is reliable\\ 1: Means that programming rd_sys_part2_data faile
d and the number of error bytes is over 6..*/
#define EFUSE_RD_SYS_PART2_DATA_FAIL    (BIT(7))
#define EFUSE_RD_SYS_PART2_DATA_FAIL_M  (BIT(7))
#define EFUSE_RD_SYS_PART2_DATA_FAIL_V  0x1
#define EFUSE_RD_SYS_PART2_DATA_FAIL_S  7
/* EFUSE_RD_SYS_PART2_DATA_ERR_NUM : RO ;bitpos:[6:4] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_sys_part2_data.*/
#define EFUSE_RD_SYS_PART2_DATA_ERR_NUM    0x00000007
#define EFUSE_RD_SYS_PART2_DATA_ERR_NUM_M  ((EFUSE_RD_SYS_PART2_DATA_ERR_NUM_V)<<(EFUSE_RD_SYS_PART2_DATA_ERR_NUM_S))
#define EFUSE_RD_SYS_PART2_DATA_ERR_NUM_V  0x7
#define EFUSE_RD_SYS_PART2_DATA_ERR_NUM_S  4
/* EFUSE_RD_KEY5_DATA_FAIL : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: Represents error status of register.\\0: Means no failure and that the data of r
d_key5_data is reliable\\ 1: Means that programming rd_key5_data failed and the
number of error bytes is over 6..*/
#define EFUSE_RD_KEY5_DATA_FAIL    (BIT(3))
#define EFUSE_RD_KEY5_DATA_FAIL_M  (BIT(3))
#define EFUSE_RD_KEY5_DATA_FAIL_V  0x1
#define EFUSE_RD_KEY5_DATA_FAIL_S  3
/* EFUSE_RD_KEY5_DATA_ERR_NUM : RO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: Represents the error number of registers.\\The value of this signal means the nu
mber of error bytes in rd_key5_data.*/
#define EFUSE_RD_KEY5_DATA_ERR_NUM    0x00000007
#define EFUSE_RD_KEY5_DATA_ERR_NUM_M  ((EFUSE_RD_KEY5_DATA_ERR_NUM_V)<<(EFUSE_RD_KEY5_DATA_ERR_NUM_S))
#define EFUSE_RD_KEY5_DATA_ERR_NUM_V  0x7
#define EFUSE_RD_KEY5_DATA_ERR_NUM_S  0

#define EFUSE_DATE_REG          (DR_REG_EFUSE_BASE + 0x198)
/* EFUSE_DATE : R/W ;bitpos:[27:0] ;default: 28'h2411052 ; */
/*description: Represents eFuse version. Date:2024-11-05 16:37:32, ScriptRev:7b927b70228b3ea6b0
c0c661890e999cfe0856ef.*/
#define EFUSE_DATE    0x0FFFFFFF
#define EFUSE_DATE_M  ((EFUSE_DATE_V)<<(EFUSE_DATE_S))
#define EFUSE_DATE_V  0xFFFFFFF
#define EFUSE_DATE_S  0

#define EFUSE_CLK_REG          (DR_REG_EFUSE_BASE + 0x1C8)
/* EFUSE_CLK_EN : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: Set this bit to force enable eFuse register configuration clock signal..*/
#define EFUSE_CLK_EN    (BIT(16))
#define EFUSE_CLK_EN_M  (BIT(16))
#define EFUSE_CLK_EN_V  0x1
#define EFUSE_CLK_EN_S  16
/* EFUSE_OTP_PD : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit to force eFuse otp into power-down mode. \\ 0x1: otp_pd=0\\ 0x1: ot
p_pd=1.*/
#define EFUSE_OTP_PD    (BIT(3))
#define EFUSE_OTP_PD_M  (BIT(3))
#define EFUSE_OTP_PD_V  0x1
#define EFUSE_OTP_PD_S  3
/* EFUSE_MEM_FORCE_PU : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to force eFuse SRAM into working mode..*/
#define EFUSE_MEM_FORCE_PU    (BIT(2))
#define EFUSE_MEM_FORCE_PU_M  (BIT(2))
#define EFUSE_MEM_FORCE_PU_V  0x1
#define EFUSE_MEM_FORCE_PU_S  2
/* EFUSE_MEM_CLK_FORCE_ON : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit and force to activate clock signal of eFuse SRAM..*/
#define EFUSE_MEM_CLK_FORCE_ON    (BIT(1))
#define EFUSE_MEM_CLK_FORCE_ON_M  (BIT(1))
#define EFUSE_MEM_CLK_FORCE_ON_V  0x1
#define EFUSE_MEM_CLK_FORCE_ON_S  1
/* EFUSE_MEM_FORCE_PD : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to force eFuse SRAM into power-saving mode..*/
#define EFUSE_MEM_FORCE_PD    (BIT(0))
#define EFUSE_MEM_FORCE_PD_M  (BIT(0))
#define EFUSE_MEM_FORCE_PD_V  0x1
#define EFUSE_MEM_FORCE_PD_S  0

#define EFUSE_CONF_REG          (DR_REG_EFUSE_BASE + 0x1CC)
/* EFUSE_SW_CTRL_PD : R/W ;bitpos:[24] ;default: 1'h1 ; */
/*description: Configures if software controls otp_pd. \\0x0: HW controls otp_pd, reg_efuse_otp
_pd is invalid\\ 0x1: SW controls otp_pd, reg_efuse_otp_pd is valid.*/
#define EFUSE_SW_CTRL_PD    (BIT(24))
#define EFUSE_SW_CTRL_PD_M  (BIT(24))
#define EFUSE_SW_CTRL_PD_V  0x1
#define EFUSE_SW_CTRL_PD_S  24
/* EFUSE_CFG_ECDSA_H_BLK : R/W ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: Configures which block to use for ECDSA key high part output..*/
#define EFUSE_CFG_ECDSA_H_BLK    0x0000000F
#define EFUSE_CFG_ECDSA_H_BLK_M  ((EFUSE_CFG_ECDSA_H_BLK_V)<<(EFUSE_CFG_ECDSA_H_BLK_S))
#define EFUSE_CFG_ECDSA_H_BLK_V  0xF
#define EFUSE_CFG_ECDSA_H_BLK_S  20
/* EFUSE_CFG_ECDSA_L_BLK : R/W ;bitpos:[19:16] ;default: 4'h0 ; */
/*description: Configures which block to use for ECDSA key low part output..*/
#define EFUSE_CFG_ECDSA_L_BLK    0x0000000F
#define EFUSE_CFG_ECDSA_L_BLK_M  ((EFUSE_CFG_ECDSA_L_BLK_V)<<(EFUSE_CFG_ECDSA_L_BLK_S))
#define EFUSE_CFG_ECDSA_L_BLK_V  0xF
#define EFUSE_CFG_ECDSA_L_BLK_S  16
/* EFUSE_OP_CODE : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: 0x5A5A:program command, 0x5A5B:program redundancy command, 0x5AA5:read with redu
ndancy command, 0x5AA6:read without redundancy mode, 0x5AA7:read repair informat
ion row mode, 0x6AA5:margin read with redundancy command, 0x6AA6:margin read wit
hout redundancy mode, 0x6AA7:margin read repair information row mode..*/
#define EFUSE_OP_CODE    0x0000FFFF
#define EFUSE_OP_CODE_M  ((EFUSE_OP_CODE_V)<<(EFUSE_OP_CODE_S))
#define EFUSE_OP_CODE_V  0xFFFF
#define EFUSE_OP_CODE_S  0

#define EFUSE_STATUS_REG          (DR_REG_EFUSE_BASE + 0x1D0)
/* EFUSE_ERR_CODE : RO ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: Represents error code of efuse controller: \\0x1: Reconfiguration of eFuse redun
dancy is disabled, but program RIR command  is detected..*/
#define EFUSE_ERR_CODE    0x0000000F
#define EFUSE_ERR_CODE_M  ((EFUSE_ERR_CODE_V)<<(EFUSE_ERR_CODE_S))
#define EFUSE_ERR_CODE_V  0xF
#define EFUSE_ERR_CODE_S  28
/* EFUSE_CUR_ECDSA_H_BLK : RO ;bitpos:[27:24] ;default: 4'h0 ; */
/*description: Represents which block is used for ECDSA key high part output..*/
#define EFUSE_CUR_ECDSA_H_BLK    0x0000000F
#define EFUSE_CUR_ECDSA_H_BLK_M  ((EFUSE_CUR_ECDSA_H_BLK_V)<<(EFUSE_CUR_ECDSA_H_BLK_S))
#define EFUSE_CUR_ECDSA_H_BLK_V  0xF
#define EFUSE_CUR_ECDSA_H_BLK_S  24
/* EFUSE_CUR_ECDSA_L_BLK : RO ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: Represents which block is used for ECDSA key low part output..*/
#define EFUSE_CUR_ECDSA_L_BLK    0x0000000F
#define EFUSE_CUR_ECDSA_L_BLK_M  ((EFUSE_CUR_ECDSA_L_BLK_V)<<(EFUSE_CUR_ECDSA_L_BLK_S))
#define EFUSE_CUR_ECDSA_L_BLK_V  0xF
#define EFUSE_CUR_ECDSA_L_BLK_S  20
/* EFUSE_BLK0_VALID_BIT_CNT : RO ;bitpos:[19:10] ;default: 10'h0 ; */
/*description: Indicates the number of block valid bit..*/
#define EFUSE_BLK0_VALID_BIT_CNT    0x000003FF
#define EFUSE_BLK0_VALID_BIT_CNT_M  ((EFUSE_BLK0_VALID_BIT_CNT_V)<<(EFUSE_BLK0_VALID_BIT_CNT_S))
#define EFUSE_BLK0_VALID_BIT_CNT_V  0x3FF
#define EFUSE_BLK0_VALID_BIT_CNT_S  10
/* EFUSE_OTP_VDDQ_IS_SW : RO ;bitpos:[9] ;default: 1'b0 ; */
/*description: The value of OTP_VDDQ_IS_SW..*/
#define EFUSE_OTP_VDDQ_IS_SW    (BIT(9))
#define EFUSE_OTP_VDDQ_IS_SW_M  (BIT(9))
#define EFUSE_OTP_VDDQ_IS_SW_V  0x1
#define EFUSE_OTP_VDDQ_IS_SW_S  9
/* EFUSE_OTP_PGENB_SW : RO ;bitpos:[8] ;default: 1'b0 ; */
/*description: The value of OTP_PGENB_SW..*/
#define EFUSE_OTP_PGENB_SW    (BIT(8))
#define EFUSE_OTP_PGENB_SW_M  (BIT(8))
#define EFUSE_OTP_PGENB_SW_V  0x1
#define EFUSE_OTP_PGENB_SW_S  8
/* EFUSE_OTP_CSB_SW : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description: The value of OTP_CSB_SW..*/
#define EFUSE_OTP_CSB_SW    (BIT(7))
#define EFUSE_OTP_CSB_SW_M  (BIT(7))
#define EFUSE_OTP_CSB_SW_V  0x1
#define EFUSE_OTP_CSB_SW_S  7
/* EFUSE_OTP_STROBE_SW : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description: The value of OTP_STROBE_SW..*/
#define EFUSE_OTP_STROBE_SW    (BIT(6))
#define EFUSE_OTP_STROBE_SW_M  (BIT(6))
#define EFUSE_OTP_STROBE_SW_V  0x1
#define EFUSE_OTP_STROBE_SW_S  6
/* EFUSE_OTP_VDDQ_C_SYNC2 : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description: The value of OTP_VDDQ_C_SYNC2..*/
#define EFUSE_OTP_VDDQ_C_SYNC2    (BIT(5))
#define EFUSE_OTP_VDDQ_C_SYNC2_M  (BIT(5))
#define EFUSE_OTP_VDDQ_C_SYNC2_V  0x1
#define EFUSE_OTP_VDDQ_C_SYNC2_S  5
/* EFUSE_OTP_LOAD_SW : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description: The value of OTP_LOAD_SW..*/
#define EFUSE_OTP_LOAD_SW    (BIT(4))
#define EFUSE_OTP_LOAD_SW_M  (BIT(4))
#define EFUSE_OTP_LOAD_SW_V  0x1
#define EFUSE_OTP_LOAD_SW_S  4
/* EFUSE_STATE : RO ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Indicates the state of the eFuse state machine..*/
#define EFUSE_STATE    0x0000000F
#define EFUSE_STATE_M  ((EFUSE_STATE_V)<<(EFUSE_STATE_S))
#define EFUSE_STATE_V  0xF
#define EFUSE_STATE_S  0

#define EFUSE_CMD_REG          (DR_REG_EFUSE_BASE + 0x1D4)
/* EFUSE_BLK_NUM : R/W ;bitpos:[5:2] ;default: 4'h0 ; */
/*description: The serial number of the block to be programmed. Value 0-10 corresponds to block
 number 0-10, respectively..*/
#define EFUSE_BLK_NUM    0x0000000F
#define EFUSE_BLK_NUM_M  ((EFUSE_BLK_NUM_V)<<(EFUSE_BLK_NUM_S))
#define EFUSE_BLK_NUM_V  0xF
#define EFUSE_BLK_NUM_S  2
/* EFUSE_PGM_CMD : R/W/SC ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit to send programming command..*/
#define EFUSE_PGM_CMD    (BIT(1))
#define EFUSE_PGM_CMD_M  (BIT(1))
#define EFUSE_PGM_CMD_V  0x1
#define EFUSE_PGM_CMD_S  1
/* EFUSE_READ_CMD : R/W/SC ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to send read command..*/
#define EFUSE_READ_CMD    (BIT(0))
#define EFUSE_READ_CMD_M  (BIT(0))
#define EFUSE_READ_CMD_V  0x1
#define EFUSE_READ_CMD_S  0

#define EFUSE_INT_RAW_REG          (DR_REG_EFUSE_BASE + 0x1D8)
/* EFUSE_PGM_DONE_INT_RAW : R/SS/WTC ;bitpos:[1] ;default: 1'b0 ; */
/*description: The raw bit signal for pgm_done interrupt..*/
#define EFUSE_PGM_DONE_INT_RAW    (BIT(1))
#define EFUSE_PGM_DONE_INT_RAW_M  (BIT(1))
#define EFUSE_PGM_DONE_INT_RAW_V  0x1
#define EFUSE_PGM_DONE_INT_RAW_S  1
/* EFUSE_READ_DONE_INT_RAW : R/SS/WTC ;bitpos:[0] ;default: 1'b0 ; */
/*description: The raw bit signal for read_done interrupt..*/
#define EFUSE_READ_DONE_INT_RAW    (BIT(0))
#define EFUSE_READ_DONE_INT_RAW_M  (BIT(0))
#define EFUSE_READ_DONE_INT_RAW_V  0x1
#define EFUSE_READ_DONE_INT_RAW_S  0

#define EFUSE_INT_ST_REG          (DR_REG_EFUSE_BASE + 0x1DC)
/* EFUSE_PGM_DONE_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: The status signal for pgm_done interrupt..*/
#define EFUSE_PGM_DONE_INT_ST    (BIT(1))
#define EFUSE_PGM_DONE_INT_ST_M  (BIT(1))
#define EFUSE_PGM_DONE_INT_ST_V  0x1
#define EFUSE_PGM_DONE_INT_ST_S  1
/* EFUSE_READ_DONE_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: The status signal for read_done interrupt..*/
#define EFUSE_READ_DONE_INT_ST    (BIT(0))
#define EFUSE_READ_DONE_INT_ST_M  (BIT(0))
#define EFUSE_READ_DONE_INT_ST_V  0x1
#define EFUSE_READ_DONE_INT_ST_S  0

#define EFUSE_INT_ENA_REG          (DR_REG_EFUSE_BASE + 0x1E0)
/* EFUSE_PGM_DONE_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: The enable signal for pgm_done interrupt..*/
#define EFUSE_PGM_DONE_INT_ENA    (BIT(1))
#define EFUSE_PGM_DONE_INT_ENA_M  (BIT(1))
#define EFUSE_PGM_DONE_INT_ENA_V  0x1
#define EFUSE_PGM_DONE_INT_ENA_S  1
/* EFUSE_READ_DONE_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: The enable signal for read_done interrupt..*/
#define EFUSE_READ_DONE_INT_ENA    (BIT(0))
#define EFUSE_READ_DONE_INT_ENA_M  (BIT(0))
#define EFUSE_READ_DONE_INT_ENA_V  0x1
#define EFUSE_READ_DONE_INT_ENA_S  0

#define EFUSE_INT_CLR_REG          (DR_REG_EFUSE_BASE + 0x1E4)
/* EFUSE_PGM_DONE_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: The clear signal for pgm_done interrupt..*/
#define EFUSE_PGM_DONE_INT_CLR    (BIT(1))
#define EFUSE_PGM_DONE_INT_CLR_M  (BIT(1))
#define EFUSE_PGM_DONE_INT_CLR_V  0x1
#define EFUSE_PGM_DONE_INT_CLR_S  1
/* EFUSE_READ_DONE_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: The clear signal for read_done interrupt..*/
#define EFUSE_READ_DONE_INT_CLR    (BIT(0))
#define EFUSE_READ_DONE_INT_CLR_M  (BIT(0))
#define EFUSE_READ_DONE_INT_CLR_V  0x1
#define EFUSE_READ_DONE_INT_CLR_S  0

#define EFUSE_DAC_CONF_REG          (DR_REG_EFUSE_BASE + 0x1E8)
/* EFUSE_OE_CLR : R/W ;bitpos:[17] ;default: 1'b0 ; */
/*description: Reduces the power supply of the programming voltage..*/
#define EFUSE_OE_CLR    (BIT(17))
#define EFUSE_OE_CLR_M  (BIT(17))
#define EFUSE_OE_CLR_V  0x1
#define EFUSE_OE_CLR_S  17
/* EFUSE_DAC_NUM : R/W ;bitpos:[16:9] ;default: 8'd190 ; */
/*description: Controls the rising period of the programming voltage..*/
#define EFUSE_DAC_NUM    0x000000FF
#define EFUSE_DAC_NUM_M  ((EFUSE_DAC_NUM_V)<<(EFUSE_DAC_NUM_S))
#define EFUSE_DAC_NUM_V  0xFF
#define EFUSE_DAC_NUM_S  9
/* EFUSE_DAC_CLK_DIV : R/W ;bitpos:[7:0] ;default: 8'd28 ; */
/*description: Controls the division factor of the rising clock of the programming voltage..*/
#define EFUSE_DAC_CLK_DIV    0x000000FF
#define EFUSE_DAC_CLK_DIV_M  ((EFUSE_DAC_CLK_DIV_V)<<(EFUSE_DAC_CLK_DIV_S))
#define EFUSE_DAC_CLK_DIV_V  0xFF
#define EFUSE_DAC_CLK_DIV_S  0

#define EFUSE_RD_TIM_CONF_REG          (DR_REG_EFUSE_BASE + 0x1EC)
/* EFUSE_READ_INIT_NUM : R/W ;bitpos:[31:24] ;default: 8'h1b ; */
/*description: Configures the waiting time of reading eFuse memory..*/
#define EFUSE_READ_INIT_NUM    0x000000FF
#define EFUSE_READ_INIT_NUM_M  ((EFUSE_READ_INIT_NUM_V)<<(EFUSE_READ_INIT_NUM_S))
#define EFUSE_READ_INIT_NUM_V  0xFF
#define EFUSE_READ_INIT_NUM_S  24
/* EFUSE_TSUR_A : R/W ;bitpos:[23:16] ;default: 8'h1 ; */
/*description: Configures the read setup time..*/
#define EFUSE_TSUR_A    0x000000FF
#define EFUSE_TSUR_A_M  ((EFUSE_TSUR_A_V)<<(EFUSE_TSUR_A_S))
#define EFUSE_TSUR_A_V  0xFF
#define EFUSE_TSUR_A_S  16
/* EFUSE_TRD : R/W ;bitpos:[15:8] ;default: 8'h5 ; */
/*description: Configures the read time..*/
#define EFUSE_TRD    0x000000FF
#define EFUSE_TRD_M  ((EFUSE_TRD_V)<<(EFUSE_TRD_S))
#define EFUSE_TRD_V  0xFF
#define EFUSE_TRD_S  8
/* EFUSE_THR_A : R/W ;bitpos:[7:0] ;default: 8'h1 ; */
/*description: Configures the read hold time..*/
#define EFUSE_THR_A    0x000000FF
#define EFUSE_THR_A_M  ((EFUSE_THR_A_V)<<(EFUSE_THR_A_S))
#define EFUSE_THR_A_V  0xFF
#define EFUSE_THR_A_S  0

#define EFUSE_WR_TIM_CONF1_REG          (DR_REG_EFUSE_BASE + 0x1F0)
/* EFUSE_THP_A : R/W ;bitpos:[31:24] ;default: 8'h1 ; */
/*description: Configures the programming hold time..*/
#define EFUSE_THP_A    0x000000FF
#define EFUSE_THP_A_M  ((EFUSE_THP_A_V)<<(EFUSE_THP_A_S))
#define EFUSE_THP_A_V  0xFF
#define EFUSE_THP_A_S  24
/* EFUSE_PWR_ON_NUM : R/W ;bitpos:[23:8] ;default: 16'h3000 ; */
/*description: Configures the power up time for VDDQ..*/
#define EFUSE_PWR_ON_NUM    0x0000FFFF
#define EFUSE_PWR_ON_NUM_M  ((EFUSE_PWR_ON_NUM_V)<<(EFUSE_PWR_ON_NUM_S))
#define EFUSE_PWR_ON_NUM_V  0xFFFF
#define EFUSE_PWR_ON_NUM_S  8
/* EFUSE_TSUP_A : R/W ;bitpos:[7:0] ;default: 8'h1 ; */
/*description: Configures the programming setup time..*/
#define EFUSE_TSUP_A    0x000000FF
#define EFUSE_TSUP_A_M  ((EFUSE_TSUP_A_V)<<(EFUSE_TSUP_A_S))
#define EFUSE_TSUP_A_V  0xFF
#define EFUSE_TSUP_A_S  0

#define EFUSE_WR_TIM_CONF2_REG          (DR_REG_EFUSE_BASE + 0x1F4)
/* EFUSE_TPGM : R/W ;bitpos:[31:16] ;default: 16'h120 ; */
/*description: Configures the active programming time..*/
#define EFUSE_TPGM    0x0000FFFF
#define EFUSE_TPGM_M  ((EFUSE_TPGM_V)<<(EFUSE_TPGM_S))
#define EFUSE_TPGM_V  0xFFFF
#define EFUSE_TPGM_S  16
/* EFUSE_PWR_OFF_NUM : R/W ;bitpos:[15:0] ;default: 16'h190 ; */
/*description: Configures the power outage time for VDDQ..*/
#define EFUSE_PWR_OFF_NUM    0x0000FFFF
#define EFUSE_PWR_OFF_NUM_M  ((EFUSE_PWR_OFF_NUM_V)<<(EFUSE_PWR_OFF_NUM_S))
#define EFUSE_PWR_OFF_NUM_V  0xFFFF
#define EFUSE_PWR_OFF_NUM_S  0

#define EFUSE_WR_TIM_CONF3_REG          (DR_REG_EFUSE_BASE + 0x1F8)
/* EFUSE_TSUP_PS : R/W ;bitpos:[31:24] ;default: 8'h3 ; */
/*description: Configures otp_ps to otp_strobe, please make sure tsup_ps-tsup_ps_cs>tsup_cs..*/
#define EFUSE_TSUP_PS    0x000000FF
#define EFUSE_TSUP_PS_M  ((EFUSE_TSUP_PS_V)<<(EFUSE_TSUP_PS_S))
#define EFUSE_TSUP_PS_V  0xFF
#define EFUSE_TSUP_PS_S  24
/* EFUSE_THP_PS : R/W ;bitpos:[23:16] ;default: 8'h3 ; */
/*description: Configures otp_strobe to otp_ps, please make sure thp_ps-thp_cs>thp_ps_cs..*/
#define EFUSE_THP_PS    0x000000FF
#define EFUSE_THP_PS_M  ((EFUSE_THP_PS_V)<<(EFUSE_THP_PS_S))
#define EFUSE_THP_PS_V  0xFF
#define EFUSE_THP_PS_S  16
/* EFUSE_TSP_PS_CS : R/W ;bitpos:[15:8] ;default: 8'h2 ; */
/*description: Configures otp_ps to otp_csb, please make sure thp_ps-thp_ps_cs>thp_cs..*/
#define EFUSE_TSP_PS_CS    0x000000FF
#define EFUSE_TSP_PS_CS_M  ((EFUSE_TSP_PS_CS_V)<<(EFUSE_TSP_PS_CS_S))
#define EFUSE_TSP_PS_CS_V  0xFF
#define EFUSE_TSP_PS_CS_S  8
/* EFUSE_THP_CS : R/W ;bitpos:[7:0] ;default: 8'h1 ; */
/*description: Configures otp_csb to otp_ps, please make sure thp_ps-thp_cs>thp_ps_cs..*/
#define EFUSE_THP_CS    0x000000FF
#define EFUSE_THP_CS_M  ((EFUSE_THP_CS_V)<<(EFUSE_THP_CS_S))
#define EFUSE_THP_CS_V  0xFF
#define EFUSE_THP_CS_S  0

#define EFUSE_WR_TIM_CONF0_RS_BYPASS_REG          (DR_REG_EFUSE_BASE + 0x1FC)
/* EFUSE_UPDATE : WT ;bitpos:[12] ;default: 1'b0 ; */
/*description: Set this bit to update multi-bit register signals..*/
#define EFUSE_UPDATE    (BIT(12))
#define EFUSE_UPDATE_M  (BIT(12))
#define EFUSE_UPDATE_V  0x1
#define EFUSE_UPDATE_S  12
/* EFUSE_BYPASS_RS_BLK_NUM : R/W ;bitpos:[11:1] ;default: 11'h0 ; */
/*description: Configures block number of programming twice operation..*/
#define EFUSE_BYPASS_RS_BLK_NUM    0x000007FF
#define EFUSE_BYPASS_RS_BLK_NUM_M  ((EFUSE_BYPASS_RS_BLK_NUM_V)<<(EFUSE_BYPASS_RS_BLK_NUM_S))
#define EFUSE_BYPASS_RS_BLK_NUM_V  0x7FF
#define EFUSE_BYPASS_RS_BLK_NUM_S  1
/* EFUSE_BYPASS_RS_CORRECTION : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to bypass reed solomon correction step..*/
#define EFUSE_BYPASS_RS_CORRECTION    (BIT(0))
#define EFUSE_BYPASS_RS_CORRECTION_M  (BIT(0))
#define EFUSE_BYPASS_RS_CORRECTION_V  0x1
#define EFUSE_BYPASS_RS_CORRECTION_S  0

#define EFUSE_REPAIR_INFORMATION0_REG          (DR_REG_EFUSE_BASE + 0x200)
/* EFUSE_RIR_RF1 : RO ;bitpos:[30] ;default: 1'h0 ; */
/*description: Flag bit of repair_information_row1..*/
#define EFUSE_RIR_RF1    (BIT(30))
#define EFUSE_RIR_RF1_M  (BIT(30))
#define EFUSE_RIR_RF1_V  0x1
#define EFUSE_RIR_RF1_S  30
/* EFUSE_RIR_FB1_DATA : RO ;bitpos:[29] ;default: 1'h0 ; */
/*description: Data bit of repair_information_row1..*/
#define EFUSE_RIR_FB1_DATA    (BIT(29))
#define EFUSE_RIR_FB1_DATA_M  (BIT(29))
#define EFUSE_RIR_FB1_DATA_V  0x1
#define EFUSE_RIR_FB1_DATA_S  29
/* EFUSE_RIR_FB1_DISABLE : RO ;bitpos:[28] ;default: 1'h0 ; */
/*description: Disable bit of repair_information_row1..*/
#define EFUSE_RIR_FB1_DISABLE    (BIT(28))
#define EFUSE_RIR_FB1_DISABLE_M  (BIT(28))
#define EFUSE_RIR_FB1_DISABLE_V  0x1
#define EFUSE_RIR_FB1_DISABLE_S  28
/* EFUSE_RIR_FB1_ADDR : RO ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Address field of repair_information_row1..*/
#define EFUSE_RIR_FB1_ADDR    0x00000FFF
#define EFUSE_RIR_FB1_ADDR_M  ((EFUSE_RIR_FB1_ADDR_V)<<(EFUSE_RIR_FB1_ADDR_S))
#define EFUSE_RIR_FB1_ADDR_V  0xFFF
#define EFUSE_RIR_FB1_ADDR_S  16
/* EFUSE_RIR_RF0 : RO ;bitpos:[14] ;default: 1'h0 ; */
/*description: Flag bit of repair_information_row0..*/
#define EFUSE_RIR_RF0    (BIT(14))
#define EFUSE_RIR_RF0_M  (BIT(14))
#define EFUSE_RIR_RF0_V  0x1
#define EFUSE_RIR_RF0_S  14
/* EFUSE_RIR_FB0_DATA : RO ;bitpos:[13] ;default: 1'h0 ; */
/*description: Data bit of repair_information_row0..*/
#define EFUSE_RIR_FB0_DATA    (BIT(13))
#define EFUSE_RIR_FB0_DATA_M  (BIT(13))
#define EFUSE_RIR_FB0_DATA_V  0x1
#define EFUSE_RIR_FB0_DATA_S  13
/* EFUSE_RIR_FB0_DISABLE : RO ;bitpos:[12] ;default: 1'h0 ; */
/*description: Disable bit of repair_information_row0..*/
#define EFUSE_RIR_FB0_DISABLE    (BIT(12))
#define EFUSE_RIR_FB0_DISABLE_M  (BIT(12))
#define EFUSE_RIR_FB0_DISABLE_V  0x1
#define EFUSE_RIR_FB0_DISABLE_S  12
/* EFUSE_RIR_FB0_ADDR : RO ;bitpos:[11:0] ;default: 12'h0 ; */
/*description: Address field of repair_information_row0..*/
#define EFUSE_RIR_FB0_ADDR    0x00000FFF
#define EFUSE_RIR_FB0_ADDR_M  ((EFUSE_RIR_FB0_ADDR_V)<<(EFUSE_RIR_FB0_ADDR_S))
#define EFUSE_RIR_FB0_ADDR_V  0xFFF
#define EFUSE_RIR_FB0_ADDR_S  0

#define EFUSE_REPAIR_INFORMATION1_REG          (DR_REG_EFUSE_BASE + 0x204)
/* EFUSE_RIR_RF3 : RO ;bitpos:[30] ;default: 1'h0 ; */
/*description: Flag bit of repair_information_row3..*/
#define EFUSE_RIR_RF3    (BIT(30))
#define EFUSE_RIR_RF3_M  (BIT(30))
#define EFUSE_RIR_RF3_V  0x1
#define EFUSE_RIR_RF3_S  30
/* EFUSE_RIR_FB3_DATA : RO ;bitpos:[29] ;default: 1'h0 ; */
/*description: Data bit of repair_information_row3..*/
#define EFUSE_RIR_FB3_DATA    (BIT(29))
#define EFUSE_RIR_FB3_DATA_M  (BIT(29))
#define EFUSE_RIR_FB3_DATA_V  0x1
#define EFUSE_RIR_FB3_DATA_S  29
/* EFUSE_RIR_FB3_DISABLE : RO ;bitpos:[28] ;default: 1'h0 ; */
/*description: Disable bit of repair_information_row3..*/
#define EFUSE_RIR_FB3_DISABLE    (BIT(28))
#define EFUSE_RIR_FB3_DISABLE_M  (BIT(28))
#define EFUSE_RIR_FB3_DISABLE_V  0x1
#define EFUSE_RIR_FB3_DISABLE_S  28
/* EFUSE_RIR_FB3_ADDR : RO ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Address field of repair_information_row3..*/
#define EFUSE_RIR_FB3_ADDR    0x00000FFF
#define EFUSE_RIR_FB3_ADDR_M  ((EFUSE_RIR_FB3_ADDR_V)<<(EFUSE_RIR_FB3_ADDR_S))
#define EFUSE_RIR_FB3_ADDR_V  0xFFF
#define EFUSE_RIR_FB3_ADDR_S  16
/* EFUSE_RIR_RF2 : RO ;bitpos:[14] ;default: 1'h0 ; */
/*description: Flag bit of repair_information_row2..*/
#define EFUSE_RIR_RF2    (BIT(14))
#define EFUSE_RIR_RF2_M  (BIT(14))
#define EFUSE_RIR_RF2_V  0x1
#define EFUSE_RIR_RF2_S  14
/* EFUSE_RIR_FB2_DATA : RO ;bitpos:[13] ;default: 1'h0 ; */
/*description: Data bit of repair_information_row2..*/
#define EFUSE_RIR_FB2_DATA    (BIT(13))
#define EFUSE_RIR_FB2_DATA_M  (BIT(13))
#define EFUSE_RIR_FB2_DATA_V  0x1
#define EFUSE_RIR_FB2_DATA_S  13
/* EFUSE_RIR_FB2_DISABLE : RO ;bitpos:[12] ;default: 1'h0 ; */
/*description: Disable bit of repair_information_row2..*/
#define EFUSE_RIR_FB2_DISABLE    (BIT(12))
#define EFUSE_RIR_FB2_DISABLE_M  (BIT(12))
#define EFUSE_RIR_FB2_DISABLE_V  0x1
#define EFUSE_RIR_FB2_DISABLE_S  12
/* EFUSE_RIR_FB2_ADDR : RO ;bitpos:[11:0] ;default: 12'h0 ; */
/*description: Address field of repair_information_row2..*/
#define EFUSE_RIR_FB2_ADDR    0x00000FFF
#define EFUSE_RIR_FB2_ADDR_M  ((EFUSE_RIR_FB2_ADDR_V)<<(EFUSE_RIR_FB2_ADDR_S))
#define EFUSE_RIR_FB2_ADDR_V  0xFFF
#define EFUSE_RIR_FB2_ADDR_S  0

#define EFUSE_REPAIR_INFORMATION2_REG          (DR_REG_EFUSE_BASE + 0x208)
/* EFUSE_RIR_RF5 : RO ;bitpos:[30] ;default: 1'h0 ; */
/*description: Flag bit of repair_information_row5..*/
#define EFUSE_RIR_RF5    (BIT(30))
#define EFUSE_RIR_RF5_M  (BIT(30))
#define EFUSE_RIR_RF5_V  0x1
#define EFUSE_RIR_RF5_S  30
/* EFUSE_RIR_FB5_DATA : RO ;bitpos:[29] ;default: 1'h0 ; */
/*description: Data bit of repair_information_row5..*/
#define EFUSE_RIR_FB5_DATA    (BIT(29))
#define EFUSE_RIR_FB5_DATA_M  (BIT(29))
#define EFUSE_RIR_FB5_DATA_V  0x1
#define EFUSE_RIR_FB5_DATA_S  29
/* EFUSE_RIR_FB5_DISABLE : RO ;bitpos:[28] ;default: 1'h0 ; */
/*description: Disable bit of repair_information_row5..*/
#define EFUSE_RIR_FB5_DISABLE    (BIT(28))
#define EFUSE_RIR_FB5_DISABLE_M  (BIT(28))
#define EFUSE_RIR_FB5_DISABLE_V  0x1
#define EFUSE_RIR_FB5_DISABLE_S  28
/* EFUSE_RIR_FB5_ADDR : RO ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Address field of repair_information_row5..*/
#define EFUSE_RIR_FB5_ADDR    0x00000FFF
#define EFUSE_RIR_FB5_ADDR_M  ((EFUSE_RIR_FB5_ADDR_V)<<(EFUSE_RIR_FB5_ADDR_S))
#define EFUSE_RIR_FB5_ADDR_V  0xFFF
#define EFUSE_RIR_FB5_ADDR_S  16
/* EFUSE_RIR_RF4 : RO ;bitpos:[14] ;default: 1'h0 ; */
/*description: Flag bit of repair_information_row4..*/
#define EFUSE_RIR_RF4    (BIT(14))
#define EFUSE_RIR_RF4_M  (BIT(14))
#define EFUSE_RIR_RF4_V  0x1
#define EFUSE_RIR_RF4_S  14
/* EFUSE_RIR_FB4_DATA : RO ;bitpos:[13] ;default: 1'h0 ; */
/*description: Data bit of repair_information_row4..*/
#define EFUSE_RIR_FB4_DATA    (BIT(13))
#define EFUSE_RIR_FB4_DATA_M  (BIT(13))
#define EFUSE_RIR_FB4_DATA_V  0x1
#define EFUSE_RIR_FB4_DATA_S  13
/* EFUSE_RIR_FB4_DISABLE : RO ;bitpos:[12] ;default: 1'h0 ; */
/*description: Disable bit of repair_information_row4..*/
#define EFUSE_RIR_FB4_DISABLE    (BIT(12))
#define EFUSE_RIR_FB4_DISABLE_M  (BIT(12))
#define EFUSE_RIR_FB4_DISABLE_V  0x1
#define EFUSE_RIR_FB4_DISABLE_S  12
/* EFUSE_RIR_FB4_ADDR : RO ;bitpos:[11:0] ;default: 12'h0 ; */
/*description: Address field of repair_information_row4..*/
#define EFUSE_RIR_FB4_ADDR    0x00000FFF
#define EFUSE_RIR_FB4_ADDR_M  ((EFUSE_RIR_FB4_ADDR_V)<<(EFUSE_RIR_FB4_ADDR_S))
#define EFUSE_RIR_FB4_ADDR_V  0xFFF
#define EFUSE_RIR_FB4_ADDR_S  0

#define EFUSE_REPAIR_INFORMATION3_REG          (DR_REG_EFUSE_BASE + 0x20C)
/* EFUSE_RIR_RF7 : RO ;bitpos:[30] ;default: 1'h0 ; */
/*description: Flag bit of repair_information_row7..*/
#define EFUSE_RIR_RF7    (BIT(30))
#define EFUSE_RIR_RF7_M  (BIT(30))
#define EFUSE_RIR_RF7_V  0x1
#define EFUSE_RIR_RF7_S  30
/* EFUSE_RIR_FB7_DATA : RO ;bitpos:[29] ;default: 1'h0 ; */
/*description: Data bit of repair_information_row7..*/
#define EFUSE_RIR_FB7_DATA    (BIT(29))
#define EFUSE_RIR_FB7_DATA_M  (BIT(29))
#define EFUSE_RIR_FB7_DATA_V  0x1
#define EFUSE_RIR_FB7_DATA_S  29
/* EFUSE_RIR_FB7_DISABLE : RO ;bitpos:[28] ;default: 1'h0 ; */
/*description: Disable bit of repair_information_row7..*/
#define EFUSE_RIR_FB7_DISABLE    (BIT(28))
#define EFUSE_RIR_FB7_DISABLE_M  (BIT(28))
#define EFUSE_RIR_FB7_DISABLE_V  0x1
#define EFUSE_RIR_FB7_DISABLE_S  28
/* EFUSE_RIR_FB7_ADDR : RO ;bitpos:[27:16] ;default: 12'h0 ; */
/*description: Address field of repair_information_row7..*/
#define EFUSE_RIR_FB7_ADDR    0x00000FFF
#define EFUSE_RIR_FB7_ADDR_M  ((EFUSE_RIR_FB7_ADDR_V)<<(EFUSE_RIR_FB7_ADDR_S))
#define EFUSE_RIR_FB7_ADDR_V  0xFFF
#define EFUSE_RIR_FB7_ADDR_S  16
/* EFUSE_RIR_RF6 : RO ;bitpos:[14] ;default: 1'h0 ; */
/*description: Flag bit of repair_information_row6..*/
#define EFUSE_RIR_RF6    (BIT(14))
#define EFUSE_RIR_RF6_M  (BIT(14))
#define EFUSE_RIR_RF6_V  0x1
#define EFUSE_RIR_RF6_S  14
/* EFUSE_RIR_FB6_DATA : RO ;bitpos:[13] ;default: 1'h0 ; */
/*description: Data bit of repair_information_row6..*/
#define EFUSE_RIR_FB6_DATA    (BIT(13))
#define EFUSE_RIR_FB6_DATA_M  (BIT(13))
#define EFUSE_RIR_FB6_DATA_V  0x1
#define EFUSE_RIR_FB6_DATA_S  13
/* EFUSE_RIR_FB6_DISABLE : RO ;bitpos:[12] ;default: 1'h0 ; */
/*description: Disable bit of repair_information_row6..*/
#define EFUSE_RIR_FB6_DISABLE    (BIT(12))
#define EFUSE_RIR_FB6_DISABLE_M  (BIT(12))
#define EFUSE_RIR_FB6_DISABLE_V  0x1
#define EFUSE_RIR_FB6_DISABLE_S  12
/* EFUSE_RIR_FB6_ADDR : RO ;bitpos:[11:0] ;default: 12'h0 ; */
/*description: Address field of repair_information_row6..*/
#define EFUSE_RIR_FB6_ADDR    0x00000FFF
#define EFUSE_RIR_FB6_ADDR_M  ((EFUSE_RIR_FB6_ADDR_V)<<(EFUSE_RIR_FB6_ADDR_S))
#define EFUSE_RIR_FB6_ADDR_V  0xFFF
#define EFUSE_RIR_FB6_ADDR_S  0

#define EFUSE_APB2OTP_WR_DIS_REG          (DR_REG_EFUSE_BASE + 0x400)
/* EFUSE_APB2OTP_BLOCK0_WR_DIS : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 write disable data..*/
#define EFUSE_APB2OTP_BLOCK0_WR_DIS    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_WR_DIS_M  ((EFUSE_APB2OTP_BLOCK0_WR_DIS_V)<<(EFUSE_APB2OTP_BLOCK0_WR_DIS_S))
#define EFUSE_APB2OTP_BLOCK0_WR_DIS_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_WR_DIS_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP1_W1_REG          (DR_REG_EFUSE_BASE + 0x404)
/* EFUSE_APB2OTP_BLOCK0_BACKUP1_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup1 word1 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W1_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP1_W1_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP1_W1_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W1_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP1_W2_REG          (DR_REG_EFUSE_BASE + 0x408)
/* EFUSE_APB2OTP_BLOCK0_BACKUP1_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup1 word2 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W2_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP1_W2_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP1_W2_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W2_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP1_W3_REG          (DR_REG_EFUSE_BASE + 0x40C)
/* EFUSE_APB2OTP_BLOCK0_BACKUP1_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup1 word3 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W3_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP1_W3_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP1_W3_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W3_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP1_W4_REG          (DR_REG_EFUSE_BASE + 0x410)
/* EFUSE_APB2OTP_BLOCK0_BACKUP1_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup1 word4 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W4_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP1_W4_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP1_W4_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W4_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP1_W5_REG          (DR_REG_EFUSE_BASE + 0x414)
/* EFUSE_APB2OTP_BLOCK0_BACKUP1_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup1 word5 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W5_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP1_W5_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP1_W5_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP1_W5_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP2_W1_REG          (DR_REG_EFUSE_BASE + 0x418)
/* EFUSE_APB2OTP_BLOCK0_BACKUP2_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup2 word1 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W1_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP2_W1_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP2_W1_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W1_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP2_W2_REG          (DR_REG_EFUSE_BASE + 0x41C)
/* EFUSE_APB2OTP_BLOCK0_BACKUP2_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup2 word2 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W2_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP2_W2_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP2_W2_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W2_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP2_W3_REG          (DR_REG_EFUSE_BASE + 0x420)
/* EFUSE_APB2OTP_BLOCK0_BACKUP2_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup2 word3 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W3_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP2_W3_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP2_W3_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W3_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP2_W4_REG          (DR_REG_EFUSE_BASE + 0x424)
/* EFUSE_APB2OTP_BLOCK0_BACKUP2_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup2 word4 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W4_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP2_W4_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP2_W4_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W4_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP2_W5_REG          (DR_REG_EFUSE_BASE + 0x428)
/* EFUSE_APB2OTP_BLOCK0_BACKUP2_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup2 word5 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W5_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP2_W5_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP2_W5_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP2_W5_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP3_W1_REG          (DR_REG_EFUSE_BASE + 0x42C)
/* EFUSE_APB2OTP_BLOCK0_BACKUP3_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup3 word1 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W1_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP3_W1_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP3_W1_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W1_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP3_W2_REG          (DR_REG_EFUSE_BASE + 0x430)
/* EFUSE_APB2OTP_BLOCK0_BACKUP3_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup3 word2 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W2_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP3_W2_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP3_W2_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W2_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP3_W3_REG          (DR_REG_EFUSE_BASE + 0x434)
/* EFUSE_APB2OTP_BLOCK0_BACKUP3_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup3 word3 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W3_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP3_W3_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP3_W3_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W3_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP3_W4_REG          (DR_REG_EFUSE_BASE + 0x438)
/* EFUSE_APB2OTP_BLOCK0_BACKUP3_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup3 word4 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W4_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP3_W4_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP3_W4_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W4_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP3_W5_REG          (DR_REG_EFUSE_BASE + 0x43C)
/* EFUSE_APB2OTP_BLOCK0_BACKUP3_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup3 word5 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W5_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP3_W5_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP3_W5_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP3_W5_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP4_W1_REG          (DR_REG_EFUSE_BASE + 0x440)
/* EFUSE_APB2OTP_BLOCK0_BACKUP4_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup4 word1 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W1_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP4_W1_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP4_W1_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W1_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP4_W2_REG          (DR_REG_EFUSE_BASE + 0x444)
/* EFUSE_APB2OTP_BLOCK0_BACKUP4_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup4 word2 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W2_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP4_W2_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP4_W2_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W2_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP4_W3_REG          (DR_REG_EFUSE_BASE + 0x448)
/* EFUSE_APB2OTP_BLOCK0_BACKUP4_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup4 word3 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W3_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP4_W3_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP4_W3_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W3_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP4_W4_REG          (DR_REG_EFUSE_BASE + 0x44C)
/* EFUSE_APB2OTP_BLOCK0_BACKUP4_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup4 word4 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W4_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP4_W4_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP4_W4_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W4_S  0

#define EFUSE_APB2OTP_BLK0_BACKUP4_W5_REG          (DR_REG_EFUSE_BASE + 0x450)
/* EFUSE_APB2OTP_BLOCK0_BACKUP4_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block0 backup4 word5 data..*/
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W5_M  ((EFUSE_APB2OTP_BLOCK0_BACKUP4_W5_V)<<(EFUSE_APB2OTP_BLOCK0_BACKUP4_W5_S))
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK0_BACKUP4_W5_S  0

#define EFUSE_APB2OTP_BLK1_W1_REG          (DR_REG_EFUSE_BASE + 0x454)
/* EFUSE_APB2OTP_BLOCK1_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block1  word1 data..*/
#define EFUSE_APB2OTP_BLOCK1_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W1_M  ((EFUSE_APB2OTP_BLOCK1_W1_V)<<(EFUSE_APB2OTP_BLOCK1_W1_S))
#define EFUSE_APB2OTP_BLOCK1_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W1_S  0

#define EFUSE_APB2OTP_BLK1_W2_REG          (DR_REG_EFUSE_BASE + 0x458)
/* EFUSE_APB2OTP_BLOCK1_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block1  word2 data..*/
#define EFUSE_APB2OTP_BLOCK1_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W2_M  ((EFUSE_APB2OTP_BLOCK1_W2_V)<<(EFUSE_APB2OTP_BLOCK1_W2_S))
#define EFUSE_APB2OTP_BLOCK1_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W2_S  0

#define EFUSE_APB2OTP_BLK1_W3_REG          (DR_REG_EFUSE_BASE + 0x45C)
/* EFUSE_APB2OTP_BLOCK1_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block1  word3 data..*/
#define EFUSE_APB2OTP_BLOCK1_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W3_M  ((EFUSE_APB2OTP_BLOCK1_W3_V)<<(EFUSE_APB2OTP_BLOCK1_W3_S))
#define EFUSE_APB2OTP_BLOCK1_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W3_S  0

#define EFUSE_APB2OTP_BLK1_W4_REG          (DR_REG_EFUSE_BASE + 0x460)
/* EFUSE_APB2OTP_BLOCK1_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block1  word4 data..*/
#define EFUSE_APB2OTP_BLOCK1_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W4_M  ((EFUSE_APB2OTP_BLOCK1_W4_V)<<(EFUSE_APB2OTP_BLOCK1_W4_S))
#define EFUSE_APB2OTP_BLOCK1_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W4_S  0

#define EFUSE_APB2OTP_BLK1_W5_REG          (DR_REG_EFUSE_BASE + 0x464)
/* EFUSE_APB2OTP_BLOCK1_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block1  word5 data..*/
#define EFUSE_APB2OTP_BLOCK1_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W5_M  ((EFUSE_APB2OTP_BLOCK1_W5_V)<<(EFUSE_APB2OTP_BLOCK1_W5_S))
#define EFUSE_APB2OTP_BLOCK1_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W5_S  0

#define EFUSE_APB2OTP_BLK1_W6_REG          (DR_REG_EFUSE_BASE + 0x468)
/* EFUSE_APB2OTP_BLOCK1_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block1  word6 data..*/
#define EFUSE_APB2OTP_BLOCK1_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W6_M  ((EFUSE_APB2OTP_BLOCK1_W6_V)<<(EFUSE_APB2OTP_BLOCK1_W6_S))
#define EFUSE_APB2OTP_BLOCK1_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W6_S  0

#define EFUSE_APB2OTP_BLK1_W7_REG          (DR_REG_EFUSE_BASE + 0x46C)
/* EFUSE_APB2OTP_BLOCK1_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block1  word7 data..*/
#define EFUSE_APB2OTP_BLOCK1_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W7_M  ((EFUSE_APB2OTP_BLOCK1_W7_V)<<(EFUSE_APB2OTP_BLOCK1_W7_S))
#define EFUSE_APB2OTP_BLOCK1_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W7_S  0

#define EFUSE_APB2OTP_BLK1_W8_REG          (DR_REG_EFUSE_BASE + 0x470)
/* EFUSE_APB2OTP_BLOCK1_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block1  word8 data..*/
#define EFUSE_APB2OTP_BLOCK1_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W8_M  ((EFUSE_APB2OTP_BLOCK1_W8_V)<<(EFUSE_APB2OTP_BLOCK1_W8_S))
#define EFUSE_APB2OTP_BLOCK1_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W8_S  0

#define EFUSE_APB2OTP_BLK1_W9_REG          (DR_REG_EFUSE_BASE + 0x474)
/* EFUSE_APB2OTP_BLOCK1_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block1  word9 data..*/
#define EFUSE_APB2OTP_BLOCK1_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W9_M  ((EFUSE_APB2OTP_BLOCK1_W9_V)<<(EFUSE_APB2OTP_BLOCK1_W9_S))
#define EFUSE_APB2OTP_BLOCK1_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK1_W9_S  0

#define EFUSE_APB2OTP_BLK2_W1_REG          (DR_REG_EFUSE_BASE + 0x478)
/* EFUSE_APB2OTP_BLOCK2_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word1 data..*/
#define EFUSE_APB2OTP_BLOCK2_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W1_M  ((EFUSE_APB2OTP_BLOCK2_W1_V)<<(EFUSE_APB2OTP_BLOCK2_W1_S))
#define EFUSE_APB2OTP_BLOCK2_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W1_S  0

#define EFUSE_APB2OTP_BLK2_W2_REG          (DR_REG_EFUSE_BASE + 0x47C)
/* EFUSE_APB2OTP_BLOCK2_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word2 data..*/
#define EFUSE_APB2OTP_BLOCK2_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W2_M  ((EFUSE_APB2OTP_BLOCK2_W2_V)<<(EFUSE_APB2OTP_BLOCK2_W2_S))
#define EFUSE_APB2OTP_BLOCK2_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W2_S  0

#define EFUSE_APB2OTP_BLK2_W3_REG          (DR_REG_EFUSE_BASE + 0x480)
/* EFUSE_APB2OTP_BLOCK2_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word3 data..*/
#define EFUSE_APB2OTP_BLOCK2_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W3_M  ((EFUSE_APB2OTP_BLOCK2_W3_V)<<(EFUSE_APB2OTP_BLOCK2_W3_S))
#define EFUSE_APB2OTP_BLOCK2_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W3_S  0

#define EFUSE_APB2OTP_BLK2_W4_REG          (DR_REG_EFUSE_BASE + 0x484)
/* EFUSE_APB2OTP_BLOCK2_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word4 data..*/
#define EFUSE_APB2OTP_BLOCK2_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W4_M  ((EFUSE_APB2OTP_BLOCK2_W4_V)<<(EFUSE_APB2OTP_BLOCK2_W4_S))
#define EFUSE_APB2OTP_BLOCK2_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W4_S  0

#define EFUSE_APB2OTP_BLK2_W5_REG          (DR_REG_EFUSE_BASE + 0x488)
/* EFUSE_APB2OTP_BLOCK2_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word5 data..*/
#define EFUSE_APB2OTP_BLOCK2_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W5_M  ((EFUSE_APB2OTP_BLOCK2_W5_V)<<(EFUSE_APB2OTP_BLOCK2_W5_S))
#define EFUSE_APB2OTP_BLOCK2_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W5_S  0

#define EFUSE_APB2OTP_BLK2_W6_REG          (DR_REG_EFUSE_BASE + 0x48C)
/* EFUSE_APB2OTP_BLOCK2_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word6 data..*/
#define EFUSE_APB2OTP_BLOCK2_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W6_M  ((EFUSE_APB2OTP_BLOCK2_W6_V)<<(EFUSE_APB2OTP_BLOCK2_W6_S))
#define EFUSE_APB2OTP_BLOCK2_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W6_S  0

#define EFUSE_APB2OTP_BLK2_W7_REG          (DR_REG_EFUSE_BASE + 0x490)
/* EFUSE_APB2OTP_BLOCK2_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word7 data..*/
#define EFUSE_APB2OTP_BLOCK2_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W7_M  ((EFUSE_APB2OTP_BLOCK2_W7_V)<<(EFUSE_APB2OTP_BLOCK2_W7_S))
#define EFUSE_APB2OTP_BLOCK2_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W7_S  0

#define EFUSE_APB2OTP_BLK2_W8_REG          (DR_REG_EFUSE_BASE + 0x494)
/* EFUSE_APB2OTP_BLOCK2_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word8 data..*/
#define EFUSE_APB2OTP_BLOCK2_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W8_M  ((EFUSE_APB2OTP_BLOCK2_W8_V)<<(EFUSE_APB2OTP_BLOCK2_W8_S))
#define EFUSE_APB2OTP_BLOCK2_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W8_S  0

#define EFUSE_APB2OTP_BLK2_W9_REG          (DR_REG_EFUSE_BASE + 0x498)
/* EFUSE_APB2OTP_BLOCK2_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word9 data..*/
#define EFUSE_APB2OTP_BLOCK2_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W9_M  ((EFUSE_APB2OTP_BLOCK2_W9_V)<<(EFUSE_APB2OTP_BLOCK2_W9_S))
#define EFUSE_APB2OTP_BLOCK2_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W9_S  0

#define EFUSE_APB2OTP_BLK2_W10_REG          (DR_REG_EFUSE_BASE + 0x49C)
/* EFUSE_APB2OTP_BLOCK2_W10 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word10 data..*/
#define EFUSE_APB2OTP_BLOCK2_W10    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W10_M  ((EFUSE_APB2OTP_BLOCK2_W10_V)<<(EFUSE_APB2OTP_BLOCK2_W10_S))
#define EFUSE_APB2OTP_BLOCK2_W10_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W10_S  0

#define EFUSE_APB2OTP_BLK2_W11_REG          (DR_REG_EFUSE_BASE + 0x4A0)
/* EFUSE_APB2OTP_BLOCK2_W11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block2 word11 data..*/
#define EFUSE_APB2OTP_BLOCK2_W11    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W11_M  ((EFUSE_APB2OTP_BLOCK2_W11_V)<<(EFUSE_APB2OTP_BLOCK2_W11_S))
#define EFUSE_APB2OTP_BLOCK2_W11_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK2_W11_S  0

#define EFUSE_APB2OTP_BLK3_W1_REG          (DR_REG_EFUSE_BASE + 0x4A4)
/* EFUSE_APB2OTP_BLOCK3_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word1 data..*/
#define EFUSE_APB2OTP_BLOCK3_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W1_M  ((EFUSE_APB2OTP_BLOCK3_W1_V)<<(EFUSE_APB2OTP_BLOCK3_W1_S))
#define EFUSE_APB2OTP_BLOCK3_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W1_S  0

#define EFUSE_APB2OTP_BLK3_W2_REG          (DR_REG_EFUSE_BASE + 0x4A8)
/* EFUSE_APB2OTP_BLOCK3_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word2 data..*/
#define EFUSE_APB2OTP_BLOCK3_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W2_M  ((EFUSE_APB2OTP_BLOCK3_W2_V)<<(EFUSE_APB2OTP_BLOCK3_W2_S))
#define EFUSE_APB2OTP_BLOCK3_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W2_S  0

#define EFUSE_APB2OTP_BLK3_W3_REG          (DR_REG_EFUSE_BASE + 0x4AC)
/* EFUSE_APB2OTP_BLOCK3_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word3 data..*/
#define EFUSE_APB2OTP_BLOCK3_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W3_M  ((EFUSE_APB2OTP_BLOCK3_W3_V)<<(EFUSE_APB2OTP_BLOCK3_W3_S))
#define EFUSE_APB2OTP_BLOCK3_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W3_S  0

#define EFUSE_APB2OTP_BLK3_W4_REG          (DR_REG_EFUSE_BASE + 0x4B0)
/* EFUSE_APB2OTP_BLOCK3_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word4 data..*/
#define EFUSE_APB2OTP_BLOCK3_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W4_M  ((EFUSE_APB2OTP_BLOCK3_W4_V)<<(EFUSE_APB2OTP_BLOCK3_W4_S))
#define EFUSE_APB2OTP_BLOCK3_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W4_S  0

#define EFUSE_APB2OTP_BLK3_W5_REG          (DR_REG_EFUSE_BASE + 0x4B4)
/* EFUSE_APB2OTP_BLOCK3_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word5 data..*/
#define EFUSE_APB2OTP_BLOCK3_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W5_M  ((EFUSE_APB2OTP_BLOCK3_W5_V)<<(EFUSE_APB2OTP_BLOCK3_W5_S))
#define EFUSE_APB2OTP_BLOCK3_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W5_S  0

#define EFUSE_APB2OTP_BLK3_W6_REG          (DR_REG_EFUSE_BASE + 0x4B8)
/* EFUSE_APB2OTP_BLOCK3_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word6 data..*/
#define EFUSE_APB2OTP_BLOCK3_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W6_M  ((EFUSE_APB2OTP_BLOCK3_W6_V)<<(EFUSE_APB2OTP_BLOCK3_W6_S))
#define EFUSE_APB2OTP_BLOCK3_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W6_S  0

#define EFUSE_APB2OTP_BLK3_W7_REG          (DR_REG_EFUSE_BASE + 0x4BC)
/* EFUSE_APB2OTP_BLOCK3_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word7 data..*/
#define EFUSE_APB2OTP_BLOCK3_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W7_M  ((EFUSE_APB2OTP_BLOCK3_W7_V)<<(EFUSE_APB2OTP_BLOCK3_W7_S))
#define EFUSE_APB2OTP_BLOCK3_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W7_S  0

#define EFUSE_APB2OTP_BLK3_W8_REG          (DR_REG_EFUSE_BASE + 0x4C0)
/* EFUSE_APB2OTP_BLOCK3_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word8 data..*/
#define EFUSE_APB2OTP_BLOCK3_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W8_M  ((EFUSE_APB2OTP_BLOCK3_W8_V)<<(EFUSE_APB2OTP_BLOCK3_W8_S))
#define EFUSE_APB2OTP_BLOCK3_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W8_S  0

#define EFUSE_APB2OTP_BLK3_W9_REG          (DR_REG_EFUSE_BASE + 0x4C4)
/* EFUSE_APB2OTP_BLOCK3_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word9 data..*/
#define EFUSE_APB2OTP_BLOCK3_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W9_M  ((EFUSE_APB2OTP_BLOCK3_W9_V)<<(EFUSE_APB2OTP_BLOCK3_W9_S))
#define EFUSE_APB2OTP_BLOCK3_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W9_S  0

#define EFUSE_APB2OTP_BLK3_W10_REG          (DR_REG_EFUSE_BASE + 0x4C8)
/* EFUSE_APB2OTP_BLOCK3_W10 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word10 data..*/
#define EFUSE_APB2OTP_BLOCK3_W10    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W10_M  ((EFUSE_APB2OTP_BLOCK3_W10_V)<<(EFUSE_APB2OTP_BLOCK3_W10_S))
#define EFUSE_APB2OTP_BLOCK3_W10_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W10_S  0

#define EFUSE_APB2OTP_BLK3_W11_REG          (DR_REG_EFUSE_BASE + 0x4CC)
/* EFUSE_APB2OTP_BLOCK3_W11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block3 word11 data..*/
#define EFUSE_APB2OTP_BLOCK3_W11    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W11_M  ((EFUSE_APB2OTP_BLOCK3_W11_V)<<(EFUSE_APB2OTP_BLOCK3_W11_S))
#define EFUSE_APB2OTP_BLOCK3_W11_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK3_W11_S  0

#define EFUSE_APB2OTP_BLK4_W1_REG          (DR_REG_EFUSE_BASE + 0x4D0)
/* EFUSE_APB2OTP_BLOCK4_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word1 data..*/
#define EFUSE_APB2OTP_BLOCK4_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W1_M  ((EFUSE_APB2OTP_BLOCK4_W1_V)<<(EFUSE_APB2OTP_BLOCK4_W1_S))
#define EFUSE_APB2OTP_BLOCK4_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W1_S  0

#define EFUSE_APB2OTP_BLK4_W2_REG          (DR_REG_EFUSE_BASE + 0x4D4)
/* EFUSE_APB2OTP_BLOCK4_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word2 data..*/
#define EFUSE_APB2OTP_BLOCK4_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W2_M  ((EFUSE_APB2OTP_BLOCK4_W2_V)<<(EFUSE_APB2OTP_BLOCK4_W2_S))
#define EFUSE_APB2OTP_BLOCK4_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W2_S  0

#define EFUSE_APB2OTP_BLK4_W3_REG          (DR_REG_EFUSE_BASE + 0x4D8)
/* EFUSE_APB2OTP_BLOCK4_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word3 data..*/
#define EFUSE_APB2OTP_BLOCK4_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W3_M  ((EFUSE_APB2OTP_BLOCK4_W3_V)<<(EFUSE_APB2OTP_BLOCK4_W3_S))
#define EFUSE_APB2OTP_BLOCK4_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W3_S  0

#define EFUSE_APB2OTP_BLK4_W4_REG          (DR_REG_EFUSE_BASE + 0x4DC)
/* EFUSE_APB2OTP_BLOCK4_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word4 data..*/
#define EFUSE_APB2OTP_BLOCK4_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W4_M  ((EFUSE_APB2OTP_BLOCK4_W4_V)<<(EFUSE_APB2OTP_BLOCK4_W4_S))
#define EFUSE_APB2OTP_BLOCK4_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W4_S  0

#define EFUSE_APB2OTP_BLK4_W5_REG          (DR_REG_EFUSE_BASE + 0x4E0)
/* EFUSE_APB2OTP_BLOCK4_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word5 data..*/
#define EFUSE_APB2OTP_BLOCK4_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W5_M  ((EFUSE_APB2OTP_BLOCK4_W5_V)<<(EFUSE_APB2OTP_BLOCK4_W5_S))
#define EFUSE_APB2OTP_BLOCK4_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W5_S  0

#define EFUSE_APB2OTP_BLK4_W6_REG          (DR_REG_EFUSE_BASE + 0x4E4)
/* EFUSE_APB2OTP_BLOCK4_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word6 data..*/
#define EFUSE_APB2OTP_BLOCK4_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W6_M  ((EFUSE_APB2OTP_BLOCK4_W6_V)<<(EFUSE_APB2OTP_BLOCK4_W6_S))
#define EFUSE_APB2OTP_BLOCK4_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W6_S  0

#define EFUSE_APB2OTP_BLK4_W7_REG          (DR_REG_EFUSE_BASE + 0x4E8)
/* EFUSE_APB2OTP_BLOCK4_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word7 data..*/
#define EFUSE_APB2OTP_BLOCK4_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W7_M  ((EFUSE_APB2OTP_BLOCK4_W7_V)<<(EFUSE_APB2OTP_BLOCK4_W7_S))
#define EFUSE_APB2OTP_BLOCK4_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W7_S  0

#define EFUSE_APB2OTP_BLK4_W8_REG          (DR_REG_EFUSE_BASE + 0x4EC)
/* EFUSE_APB2OTP_BLOCK4_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word8 data..*/
#define EFUSE_APB2OTP_BLOCK4_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W8_M  ((EFUSE_APB2OTP_BLOCK4_W8_V)<<(EFUSE_APB2OTP_BLOCK4_W8_S))
#define EFUSE_APB2OTP_BLOCK4_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W8_S  0

#define EFUSE_APB2OTP_BLK4_W9_REG          (DR_REG_EFUSE_BASE + 0x4F0)
/* EFUSE_APB2OTP_BLOCK4_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word9 data..*/
#define EFUSE_APB2OTP_BLOCK4_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W9_M  ((EFUSE_APB2OTP_BLOCK4_W9_V)<<(EFUSE_APB2OTP_BLOCK4_W9_S))
#define EFUSE_APB2OTP_BLOCK4_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W9_S  0

#define EFUSE_APB2OTP_BLK4_W10_REG          (DR_REG_EFUSE_BASE + 0x4F4)
/* EFUSE_APB2OTP_BLOCK4_W10 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word10 data..*/
#define EFUSE_APB2OTP_BLOCK4_W10    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W10_M  ((EFUSE_APB2OTP_BLOCK4_W10_V)<<(EFUSE_APB2OTP_BLOCK4_W10_S))
#define EFUSE_APB2OTP_BLOCK4_W10_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W10_S  0

#define EFUSE_APB2OTP_BLK4_W11_REG          (DR_REG_EFUSE_BASE + 0x4F8)
/* EFUSE_APB2OTP_BLOCK4_W11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block4 word11 data..*/
#define EFUSE_APB2OTP_BLOCK4_W11    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W11_M  ((EFUSE_APB2OTP_BLOCK4_W11_V)<<(EFUSE_APB2OTP_BLOCK4_W11_S))
#define EFUSE_APB2OTP_BLOCK4_W11_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK4_W11_S  0

#define EFUSE_APB2OTP_BLK5_W1_REG          (DR_REG_EFUSE_BASE + 0x4FC)
/* EFUSE_APB2OTP_BLOCK5_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word1 data..*/
#define EFUSE_APB2OTP_BLOCK5_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W1_M  ((EFUSE_APB2OTP_BLOCK5_W1_V)<<(EFUSE_APB2OTP_BLOCK5_W1_S))
#define EFUSE_APB2OTP_BLOCK5_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W1_S  0

#define EFUSE_APB2OTP_BLK5_W2_REG          (DR_REG_EFUSE_BASE + 0x500)
/* EFUSE_APB2OTP_BLOCK5_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word2 data..*/
#define EFUSE_APB2OTP_BLOCK5_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W2_M  ((EFUSE_APB2OTP_BLOCK5_W2_V)<<(EFUSE_APB2OTP_BLOCK5_W2_S))
#define EFUSE_APB2OTP_BLOCK5_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W2_S  0

#define EFUSE_APB2OTP_BLK5_W3_REG          (DR_REG_EFUSE_BASE + 0x504)
/* EFUSE_APB2OTP_BLOCK5_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word3 data..*/
#define EFUSE_APB2OTP_BLOCK5_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W3_M  ((EFUSE_APB2OTP_BLOCK5_W3_V)<<(EFUSE_APB2OTP_BLOCK5_W3_S))
#define EFUSE_APB2OTP_BLOCK5_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W3_S  0

#define EFUSE_APB2OTP_BLK5_W4_REG          (DR_REG_EFUSE_BASE + 0x508)
/* EFUSE_APB2OTP_BLOCK5_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word4 data..*/
#define EFUSE_APB2OTP_BLOCK5_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W4_M  ((EFUSE_APB2OTP_BLOCK5_W4_V)<<(EFUSE_APB2OTP_BLOCK5_W4_S))
#define EFUSE_APB2OTP_BLOCK5_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W4_S  0

#define EFUSE_APB2OTP_BLK5_W5_REG          (DR_REG_EFUSE_BASE + 0x50C)
/* EFUSE_APB2OTP_BLOCK5_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word5 data..*/
#define EFUSE_APB2OTP_BLOCK5_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W5_M  ((EFUSE_APB2OTP_BLOCK5_W5_V)<<(EFUSE_APB2OTP_BLOCK5_W5_S))
#define EFUSE_APB2OTP_BLOCK5_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W5_S  0

#define EFUSE_APB2OTP_BLK5_W6_REG          (DR_REG_EFUSE_BASE + 0x510)
/* EFUSE_APB2OTP_BLOCK5_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word6 data..*/
#define EFUSE_APB2OTP_BLOCK5_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W6_M  ((EFUSE_APB2OTP_BLOCK5_W6_V)<<(EFUSE_APB2OTP_BLOCK5_W6_S))
#define EFUSE_APB2OTP_BLOCK5_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W6_S  0

#define EFUSE_APB2OTP_BLK5_W7_REG          (DR_REG_EFUSE_BASE + 0x514)
/* EFUSE_APB2OTP_BLOCK5_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word7 data..*/
#define EFUSE_APB2OTP_BLOCK5_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W7_M  ((EFUSE_APB2OTP_BLOCK5_W7_V)<<(EFUSE_APB2OTP_BLOCK5_W7_S))
#define EFUSE_APB2OTP_BLOCK5_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W7_S  0

#define EFUSE_APB2OTP_BLK5_W8_REG          (DR_REG_EFUSE_BASE + 0x518)
/* EFUSE_APB2OTP_BLOCK5_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word8 data..*/
#define EFUSE_APB2OTP_BLOCK5_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W8_M  ((EFUSE_APB2OTP_BLOCK5_W8_V)<<(EFUSE_APB2OTP_BLOCK5_W8_S))
#define EFUSE_APB2OTP_BLOCK5_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W8_S  0

#define EFUSE_APB2OTP_BLK5_W9_REG          (DR_REG_EFUSE_BASE + 0x51C)
/* EFUSE_APB2OTP_BLOCK5_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word9 data..*/
#define EFUSE_APB2OTP_BLOCK5_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W9_M  ((EFUSE_APB2OTP_BLOCK5_W9_V)<<(EFUSE_APB2OTP_BLOCK5_W9_S))
#define EFUSE_APB2OTP_BLOCK5_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W9_S  0

#define EFUSE_APB2OTP_BLK5_W10_REG          (DR_REG_EFUSE_BASE + 0x520)
/* EFUSE_APB2OTP_BLOCK5_W10 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word10 data..*/
#define EFUSE_APB2OTP_BLOCK5_W10    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W10_M  ((EFUSE_APB2OTP_BLOCK5_W10_V)<<(EFUSE_APB2OTP_BLOCK5_W10_S))
#define EFUSE_APB2OTP_BLOCK5_W10_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W10_S  0

#define EFUSE_APB2OTP_BLK5_W11_REG          (DR_REG_EFUSE_BASE + 0x524)
/* EFUSE_APB2OTP_BLOCK5_W11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block5 word11 data..*/
#define EFUSE_APB2OTP_BLOCK5_W11    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W11_M  ((EFUSE_APB2OTP_BLOCK5_W11_V)<<(EFUSE_APB2OTP_BLOCK5_W11_S))
#define EFUSE_APB2OTP_BLOCK5_W11_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK5_W11_S  0

#define EFUSE_APB2OTP_BLK6_W1_REG          (DR_REG_EFUSE_BASE + 0x528)
/* EFUSE_APB2OTP_BLOCK6_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word1 data..*/
#define EFUSE_APB2OTP_BLOCK6_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W1_M  ((EFUSE_APB2OTP_BLOCK6_W1_V)<<(EFUSE_APB2OTP_BLOCK6_W1_S))
#define EFUSE_APB2OTP_BLOCK6_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W1_S  0

#define EFUSE_APB2OTP_BLK6_W2_REG          (DR_REG_EFUSE_BASE + 0x52C)
/* EFUSE_APB2OTP_BLOCK6_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word2 data..*/
#define EFUSE_APB2OTP_BLOCK6_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W2_M  ((EFUSE_APB2OTP_BLOCK6_W2_V)<<(EFUSE_APB2OTP_BLOCK6_W2_S))
#define EFUSE_APB2OTP_BLOCK6_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W2_S  0

#define EFUSE_APB2OTP_BLK6_W3_REG          (DR_REG_EFUSE_BASE + 0x530)
/* EFUSE_APB2OTP_BLOCK6_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word3 data..*/
#define EFUSE_APB2OTP_BLOCK6_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W3_M  ((EFUSE_APB2OTP_BLOCK6_W3_V)<<(EFUSE_APB2OTP_BLOCK6_W3_S))
#define EFUSE_APB2OTP_BLOCK6_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W3_S  0

#define EFUSE_APB2OTP_BLK6_W4_REG          (DR_REG_EFUSE_BASE + 0x534)
/* EFUSE_APB2OTP_BLOCK6_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word4 data..*/
#define EFUSE_APB2OTP_BLOCK6_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W4_M  ((EFUSE_APB2OTP_BLOCK6_W4_V)<<(EFUSE_APB2OTP_BLOCK6_W4_S))
#define EFUSE_APB2OTP_BLOCK6_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W4_S  0

#define EFUSE_APB2OTP_BLK6_W5_REG          (DR_REG_EFUSE_BASE + 0x538)
/* EFUSE_APB2OTP_BLOCK6_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word5 data..*/
#define EFUSE_APB2OTP_BLOCK6_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W5_M  ((EFUSE_APB2OTP_BLOCK6_W5_V)<<(EFUSE_APB2OTP_BLOCK6_W5_S))
#define EFUSE_APB2OTP_BLOCK6_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W5_S  0

#define EFUSE_APB2OTP_BLK6_W6_REG          (DR_REG_EFUSE_BASE + 0x53C)
/* EFUSE_APB2OTP_BLOCK6_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word6 data..*/
#define EFUSE_APB2OTP_BLOCK6_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W6_M  ((EFUSE_APB2OTP_BLOCK6_W6_V)<<(EFUSE_APB2OTP_BLOCK6_W6_S))
#define EFUSE_APB2OTP_BLOCK6_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W6_S  0

#define EFUSE_APB2OTP_BLK6_W7_REG          (DR_REG_EFUSE_BASE + 0x540)
/* EFUSE_APB2OTP_BLOCK6_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word7 data..*/
#define EFUSE_APB2OTP_BLOCK6_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W7_M  ((EFUSE_APB2OTP_BLOCK6_W7_V)<<(EFUSE_APB2OTP_BLOCK6_W7_S))
#define EFUSE_APB2OTP_BLOCK6_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W7_S  0

#define EFUSE_APB2OTP_BLK6_W8_REG          (DR_REG_EFUSE_BASE + 0x544)
/* EFUSE_APB2OTP_BLOCK6_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word8 data..*/
#define EFUSE_APB2OTP_BLOCK6_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W8_M  ((EFUSE_APB2OTP_BLOCK6_W8_V)<<(EFUSE_APB2OTP_BLOCK6_W8_S))
#define EFUSE_APB2OTP_BLOCK6_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W8_S  0

#define EFUSE_APB2OTP_BLK6_W9_REG          (DR_REG_EFUSE_BASE + 0x548)
/* EFUSE_APB2OTP_BLOCK6_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word9 data..*/
#define EFUSE_APB2OTP_BLOCK6_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W9_M  ((EFUSE_APB2OTP_BLOCK6_W9_V)<<(EFUSE_APB2OTP_BLOCK6_W9_S))
#define EFUSE_APB2OTP_BLOCK6_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W9_S  0

#define EFUSE_APB2OTP_BLK6_W10_REG          (DR_REG_EFUSE_BASE + 0x54C)
/* EFUSE_APB2OTP_BLOCK6_W10 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word10 data..*/
#define EFUSE_APB2OTP_BLOCK6_W10    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W10_M  ((EFUSE_APB2OTP_BLOCK6_W10_V)<<(EFUSE_APB2OTP_BLOCK6_W10_S))
#define EFUSE_APB2OTP_BLOCK6_W10_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W10_S  0

#define EFUSE_APB2OTP_BLK6_W11_REG          (DR_REG_EFUSE_BASE + 0x550)
/* EFUSE_APB2OTP_BLOCK6_W11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block6 word11 data..*/
#define EFUSE_APB2OTP_BLOCK6_W11    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W11_M  ((EFUSE_APB2OTP_BLOCK6_W11_V)<<(EFUSE_APB2OTP_BLOCK6_W11_S))
#define EFUSE_APB2OTP_BLOCK6_W11_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK6_W11_S  0

#define EFUSE_APB2OTP_BLK7_W1_REG          (DR_REG_EFUSE_BASE + 0x554)
/* EFUSE_APB2OTP_BLOCK7_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word1 data..*/
#define EFUSE_APB2OTP_BLOCK7_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W1_M  ((EFUSE_APB2OTP_BLOCK7_W1_V)<<(EFUSE_APB2OTP_BLOCK7_W1_S))
#define EFUSE_APB2OTP_BLOCK7_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W1_S  0

#define EFUSE_APB2OTP_BLK7_W2_REG          (DR_REG_EFUSE_BASE + 0x558)
/* EFUSE_APB2OTP_BLOCK7_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word2 data..*/
#define EFUSE_APB2OTP_BLOCK7_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W2_M  ((EFUSE_APB2OTP_BLOCK7_W2_V)<<(EFUSE_APB2OTP_BLOCK7_W2_S))
#define EFUSE_APB2OTP_BLOCK7_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W2_S  0

#define EFUSE_APB2OTP_BLK7_W3_REG          (DR_REG_EFUSE_BASE + 0x55C)
/* EFUSE_APB2OTP_BLOCK7_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word3 data..*/
#define EFUSE_APB2OTP_BLOCK7_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W3_M  ((EFUSE_APB2OTP_BLOCK7_W3_V)<<(EFUSE_APB2OTP_BLOCK7_W3_S))
#define EFUSE_APB2OTP_BLOCK7_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W3_S  0

#define EFUSE_APB2OTP_BLK7_W4_REG          (DR_REG_EFUSE_BASE + 0x560)
/* EFUSE_APB2OTP_BLOCK7_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word4 data..*/
#define EFUSE_APB2OTP_BLOCK7_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W4_M  ((EFUSE_APB2OTP_BLOCK7_W4_V)<<(EFUSE_APB2OTP_BLOCK7_W4_S))
#define EFUSE_APB2OTP_BLOCK7_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W4_S  0

#define EFUSE_APB2OTP_BLK7_W5_REG          (DR_REG_EFUSE_BASE + 0x564)
/* EFUSE_APB2OTP_BLOCK7_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word5 data..*/
#define EFUSE_APB2OTP_BLOCK7_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W5_M  ((EFUSE_APB2OTP_BLOCK7_W5_V)<<(EFUSE_APB2OTP_BLOCK7_W5_S))
#define EFUSE_APB2OTP_BLOCK7_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W5_S  0

#define EFUSE_APB2OTP_BLK7_W6_REG          (DR_REG_EFUSE_BASE + 0x568)
/* EFUSE_APB2OTP_BLOCK7_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word6 data..*/
#define EFUSE_APB2OTP_BLOCK7_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W6_M  ((EFUSE_APB2OTP_BLOCK7_W6_V)<<(EFUSE_APB2OTP_BLOCK7_W6_S))
#define EFUSE_APB2OTP_BLOCK7_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W6_S  0

#define EFUSE_APB2OTP_BLK7_W7_REG          (DR_REG_EFUSE_BASE + 0x56C)
/* EFUSE_APB2OTP_BLOCK7_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word7 data..*/
#define EFUSE_APB2OTP_BLOCK7_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W7_M  ((EFUSE_APB2OTP_BLOCK7_W7_V)<<(EFUSE_APB2OTP_BLOCK7_W7_S))
#define EFUSE_APB2OTP_BLOCK7_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W7_S  0

#define EFUSE_APB2OTP_BLK7_W8_REG          (DR_REG_EFUSE_BASE + 0x570)
/* EFUSE_APB2OTP_BLOCK7_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word8 data..*/
#define EFUSE_APB2OTP_BLOCK7_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W8_M  ((EFUSE_APB2OTP_BLOCK7_W8_V)<<(EFUSE_APB2OTP_BLOCK7_W8_S))
#define EFUSE_APB2OTP_BLOCK7_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W8_S  0

#define EFUSE_APB2OTP_BLK7_W9_REG          (DR_REG_EFUSE_BASE + 0x574)
/* EFUSE_APB2OTP_BLOCK7_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word9 data..*/
#define EFUSE_APB2OTP_BLOCK7_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W9_M  ((EFUSE_APB2OTP_BLOCK7_W9_V)<<(EFUSE_APB2OTP_BLOCK7_W9_S))
#define EFUSE_APB2OTP_BLOCK7_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W9_S  0

#define EFUSE_APB2OTP_BLK7_W10_REG          (DR_REG_EFUSE_BASE + 0x578)
/* EFUSE_APB2OTP_BLOCK7_W10 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word10 data..*/
#define EFUSE_APB2OTP_BLOCK7_W10    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W10_M  ((EFUSE_APB2OTP_BLOCK7_W10_V)<<(EFUSE_APB2OTP_BLOCK7_W10_S))
#define EFUSE_APB2OTP_BLOCK7_W10_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W10_S  0

#define EFUSE_APB2OTP_BLK7_W11_REG          (DR_REG_EFUSE_BASE + 0x57C)
/* EFUSE_APB2OTP_BLOCK7_W11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block7 word11 data..*/
#define EFUSE_APB2OTP_BLOCK7_W11    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W11_M  ((EFUSE_APB2OTP_BLOCK7_W11_V)<<(EFUSE_APB2OTP_BLOCK7_W11_S))
#define EFUSE_APB2OTP_BLOCK7_W11_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK7_W11_S  0

#define EFUSE_APB2OTP_BLK8_W1_REG          (DR_REG_EFUSE_BASE + 0x580)
/* EFUSE_APB2OTP_BLOCK8_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word1 data..*/
#define EFUSE_APB2OTP_BLOCK8_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W1_M  ((EFUSE_APB2OTP_BLOCK8_W1_V)<<(EFUSE_APB2OTP_BLOCK8_W1_S))
#define EFUSE_APB2OTP_BLOCK8_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W1_S  0

#define EFUSE_APB2OTP_BLK8_W2_REG          (DR_REG_EFUSE_BASE + 0x584)
/* EFUSE_APB2OTP_BLOCK8_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word2 data..*/
#define EFUSE_APB2OTP_BLOCK8_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W2_M  ((EFUSE_APB2OTP_BLOCK8_W2_V)<<(EFUSE_APB2OTP_BLOCK8_W2_S))
#define EFUSE_APB2OTP_BLOCK8_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W2_S  0

#define EFUSE_APB2OTP_BLK8_W3_REG          (DR_REG_EFUSE_BASE + 0x588)
/* EFUSE_APB2OTP_BLOCK8_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word3 data..*/
#define EFUSE_APB2OTP_BLOCK8_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W3_M  ((EFUSE_APB2OTP_BLOCK8_W3_V)<<(EFUSE_APB2OTP_BLOCK8_W3_S))
#define EFUSE_APB2OTP_BLOCK8_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W3_S  0

#define EFUSE_APB2OTP_BLK8_W4_REG          (DR_REG_EFUSE_BASE + 0x58C)
/* EFUSE_APB2OTP_BLOCK8_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word4 data..*/
#define EFUSE_APB2OTP_BLOCK8_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W4_M  ((EFUSE_APB2OTP_BLOCK8_W4_V)<<(EFUSE_APB2OTP_BLOCK8_W4_S))
#define EFUSE_APB2OTP_BLOCK8_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W4_S  0

#define EFUSE_APB2OTP_BLK8_W5_REG          (DR_REG_EFUSE_BASE + 0x590)
/* EFUSE_APB2OTP_BLOCK8_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word5 data..*/
#define EFUSE_APB2OTP_BLOCK8_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W5_M  ((EFUSE_APB2OTP_BLOCK8_W5_V)<<(EFUSE_APB2OTP_BLOCK8_W5_S))
#define EFUSE_APB2OTP_BLOCK8_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W5_S  0

#define EFUSE_APB2OTP_BLK8_W6_REG          (DR_REG_EFUSE_BASE + 0x594)
/* EFUSE_APB2OTP_BLOCK8_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word6 data..*/
#define EFUSE_APB2OTP_BLOCK8_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W6_M  ((EFUSE_APB2OTP_BLOCK8_W6_V)<<(EFUSE_APB2OTP_BLOCK8_W6_S))
#define EFUSE_APB2OTP_BLOCK8_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W6_S  0

#define EFUSE_APB2OTP_BLK8_W7_REG          (DR_REG_EFUSE_BASE + 0x598)
/* EFUSE_APB2OTP_BLOCK8_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word7 data..*/
#define EFUSE_APB2OTP_BLOCK8_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W7_M  ((EFUSE_APB2OTP_BLOCK8_W7_V)<<(EFUSE_APB2OTP_BLOCK8_W7_S))
#define EFUSE_APB2OTP_BLOCK8_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W7_S  0

#define EFUSE_APB2OTP_BLK8_W8_REG          (DR_REG_EFUSE_BASE + 0x59C)
/* EFUSE_APB2OTP_BLOCK8_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word8 data..*/
#define EFUSE_APB2OTP_BLOCK8_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W8_M  ((EFUSE_APB2OTP_BLOCK8_W8_V)<<(EFUSE_APB2OTP_BLOCK8_W8_S))
#define EFUSE_APB2OTP_BLOCK8_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W8_S  0

#define EFUSE_APB2OTP_BLK8_W9_REG          (DR_REG_EFUSE_BASE + 0x5A0)
/* EFUSE_APB2OTP_BLOCK8_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word9 data..*/
#define EFUSE_APB2OTP_BLOCK8_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W9_M  ((EFUSE_APB2OTP_BLOCK8_W9_V)<<(EFUSE_APB2OTP_BLOCK8_W9_S))
#define EFUSE_APB2OTP_BLOCK8_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W9_S  0

#define EFUSE_APB2OTP_BLK8_W10_REG          (DR_REG_EFUSE_BASE + 0x5A4)
/* EFUSE_APB2OTP_BLOCK8_W10 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word10 data..*/
#define EFUSE_APB2OTP_BLOCK8_W10    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W10_M  ((EFUSE_APB2OTP_BLOCK8_W10_V)<<(EFUSE_APB2OTP_BLOCK8_W10_S))
#define EFUSE_APB2OTP_BLOCK8_W10_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W10_S  0

#define EFUSE_APB2OTP_BLK8_W11_REG          (DR_REG_EFUSE_BASE + 0x5A8)
/* EFUSE_APB2OTP_BLOCK8_W11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block8 word11 data..*/
#define EFUSE_APB2OTP_BLOCK8_W11    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W11_M  ((EFUSE_APB2OTP_BLOCK8_W11_V)<<(EFUSE_APB2OTP_BLOCK8_W11_S))
#define EFUSE_APB2OTP_BLOCK8_W11_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK8_W11_S  0

#define EFUSE_APB2OTP_BLK9_W1_REG          (DR_REG_EFUSE_BASE + 0x5AC)
/* EFUSE_APB2OTP_BLOCK9_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word1 data..*/
#define EFUSE_APB2OTP_BLOCK9_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W1_M  ((EFUSE_APB2OTP_BLOCK9_W1_V)<<(EFUSE_APB2OTP_BLOCK9_W1_S))
#define EFUSE_APB2OTP_BLOCK9_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W1_S  0

#define EFUSE_APB2OTP_BLK9_W2_REG          (DR_REG_EFUSE_BASE + 0x5B0)
/* EFUSE_APB2OTP_BLOCK9_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word2 data..*/
#define EFUSE_APB2OTP_BLOCK9_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W2_M  ((EFUSE_APB2OTP_BLOCK9_W2_V)<<(EFUSE_APB2OTP_BLOCK9_W2_S))
#define EFUSE_APB2OTP_BLOCK9_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W2_S  0

#define EFUSE_APB2OTP_BLK9_W3_REG          (DR_REG_EFUSE_BASE + 0x5B4)
/* EFUSE_APB2OTP_BLOCK9_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word3 data..*/
#define EFUSE_APB2OTP_BLOCK9_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W3_M  ((EFUSE_APB2OTP_BLOCK9_W3_V)<<(EFUSE_APB2OTP_BLOCK9_W3_S))
#define EFUSE_APB2OTP_BLOCK9_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W3_S  0

#define EFUSE_APB2OTP_BLK9_W4_REG          (DR_REG_EFUSE_BASE + 0x5B8)
/* EFUSE_APB2OTP_BLOCK9_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word4 data..*/
#define EFUSE_APB2OTP_BLOCK9_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W4_M  ((EFUSE_APB2OTP_BLOCK9_W4_V)<<(EFUSE_APB2OTP_BLOCK9_W4_S))
#define EFUSE_APB2OTP_BLOCK9_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W4_S  0

#define EFUSE_APB2OTP_BLK9_W5_REG          (DR_REG_EFUSE_BASE + 0x5BC)
/* EFUSE_APB2OTP_BLOCK9_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word5 data..*/
#define EFUSE_APB2OTP_BLOCK9_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W5_M  ((EFUSE_APB2OTP_BLOCK9_W5_V)<<(EFUSE_APB2OTP_BLOCK9_W5_S))
#define EFUSE_APB2OTP_BLOCK9_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W5_S  0

#define EFUSE_APB2OTP_BLK9_W6_REG          (DR_REG_EFUSE_BASE + 0x5C0)
/* EFUSE_APB2OTP_BLOCK9_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word6 data..*/
#define EFUSE_APB2OTP_BLOCK9_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W6_M  ((EFUSE_APB2OTP_BLOCK9_W6_V)<<(EFUSE_APB2OTP_BLOCK9_W6_S))
#define EFUSE_APB2OTP_BLOCK9_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W6_S  0

#define EFUSE_APB2OTP_BLK9_W7_REG          (DR_REG_EFUSE_BASE + 0x5C4)
/* EFUSE_APB2OTP_BLOCK9_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word7 data..*/
#define EFUSE_APB2OTP_BLOCK9_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W7_M  ((EFUSE_APB2OTP_BLOCK9_W7_V)<<(EFUSE_APB2OTP_BLOCK9_W7_S))
#define EFUSE_APB2OTP_BLOCK9_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W7_S  0

#define EFUSE_APB2OTP_BLK9_W8_REG          (DR_REG_EFUSE_BASE + 0x5C8)
/* EFUSE_APB2OTP_BLOCK9_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word8 data..*/
#define EFUSE_APB2OTP_BLOCK9_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W8_M  ((EFUSE_APB2OTP_BLOCK9_W8_V)<<(EFUSE_APB2OTP_BLOCK9_W8_S))
#define EFUSE_APB2OTP_BLOCK9_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W8_S  0

#define EFUSE_APB2OTP_BLK9_W9_REG          (DR_REG_EFUSE_BASE + 0x5CC)
/* EFUSE_APB2OTP_BLOCK9_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word9 data..*/
#define EFUSE_APB2OTP_BLOCK9_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W9_M  ((EFUSE_APB2OTP_BLOCK9_W9_V)<<(EFUSE_APB2OTP_BLOCK9_W9_S))
#define EFUSE_APB2OTP_BLOCK9_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W9_S  0

#define EFUSE_APB2OTP_BLK9_W10_REG          (DR_REG_EFUSE_BASE + 0x5D0)
/* EFUSE_APB2OTP_BLOCK9_W10 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word10 data..*/
#define EFUSE_APB2OTP_BLOCK9_W10    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W10_M  ((EFUSE_APB2OTP_BLOCK9_W10_V)<<(EFUSE_APB2OTP_BLOCK9_W10_S))
#define EFUSE_APB2OTP_BLOCK9_W10_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W10_S  0

#define EFUSE_APB2OTP_BLK9_W11_REG          (DR_REG_EFUSE_BASE + 0x5D4)
/* EFUSE_APB2OTP_BLOCK9_W11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block9 word11 data..*/
#define EFUSE_APB2OTP_BLOCK9_W11    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W11_M  ((EFUSE_APB2OTP_BLOCK9_W11_V)<<(EFUSE_APB2OTP_BLOCK9_W11_S))
#define EFUSE_APB2OTP_BLOCK9_W11_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK9_W11_S  0

#define EFUSE_APB2OTP_BLK10_W1_REG          (DR_REG_EFUSE_BASE + 0x5D8)
/* EFUSE_APB2OTP_BLOCK10_W1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word1 data..*/
#define EFUSE_APB2OTP_BLOCK10_W1    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W1_M  ((EFUSE_APB2OTP_BLOCK10_W1_V)<<(EFUSE_APB2OTP_BLOCK10_W1_S))
#define EFUSE_APB2OTP_BLOCK10_W1_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W1_S  0

#define EFUSE_APB2OTP_BLK10_W2_REG          (DR_REG_EFUSE_BASE + 0x5DC)
/* EFUSE_APB2OTP_BLOCK10_W2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word2 data..*/
#define EFUSE_APB2OTP_BLOCK10_W2    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W2_M  ((EFUSE_APB2OTP_BLOCK10_W2_V)<<(EFUSE_APB2OTP_BLOCK10_W2_S))
#define EFUSE_APB2OTP_BLOCK10_W2_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W2_S  0

#define EFUSE_APB2OTP_BLK10_W3_REG          (DR_REG_EFUSE_BASE + 0x5E0)
/* EFUSE_APB2OTP_BLOCK10_W3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word3 data..*/
#define EFUSE_APB2OTP_BLOCK10_W3    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W3_M  ((EFUSE_APB2OTP_BLOCK10_W3_V)<<(EFUSE_APB2OTP_BLOCK10_W3_S))
#define EFUSE_APB2OTP_BLOCK10_W3_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W3_S  0

#define EFUSE_APB2OTP_BLK10_W4_REG          (DR_REG_EFUSE_BASE + 0x5E4)
/* EFUSE_APB2OTP_BLOCK10_W4 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word4 data..*/
#define EFUSE_APB2OTP_BLOCK10_W4    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W4_M  ((EFUSE_APB2OTP_BLOCK10_W4_V)<<(EFUSE_APB2OTP_BLOCK10_W4_S))
#define EFUSE_APB2OTP_BLOCK10_W4_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W4_S  0

#define EFUSE_APB2OTP_BLK10_W5_REG          (DR_REG_EFUSE_BASE + 0x5E8)
/* EFUSE_APB2OTP_BLOCK10_W5 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word5 data..*/
#define EFUSE_APB2OTP_BLOCK10_W5    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W5_M  ((EFUSE_APB2OTP_BLOCK10_W5_V)<<(EFUSE_APB2OTP_BLOCK10_W5_S))
#define EFUSE_APB2OTP_BLOCK10_W5_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W5_S  0

#define EFUSE_APB2OTP_BLK10_W6_REG          (DR_REG_EFUSE_BASE + 0x5EC)
/* EFUSE_APB2OTP_BLOCK10_W6 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word6 data..*/
#define EFUSE_APB2OTP_BLOCK10_W6    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W6_M  ((EFUSE_APB2OTP_BLOCK10_W6_V)<<(EFUSE_APB2OTP_BLOCK10_W6_S))
#define EFUSE_APB2OTP_BLOCK10_W6_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W6_S  0

#define EFUSE_APB2OTP_BLK10_W7_REG          (DR_REG_EFUSE_BASE + 0x5F0)
/* EFUSE_APB2OTP_BLOCK10_W7 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word7 data..*/
#define EFUSE_APB2OTP_BLOCK10_W7    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W7_M  ((EFUSE_APB2OTP_BLOCK10_W7_V)<<(EFUSE_APB2OTP_BLOCK10_W7_S))
#define EFUSE_APB2OTP_BLOCK10_W7_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W7_S  0

#define EFUSE_APB2OTP_BLK10_W8_REG          (DR_REG_EFUSE_BASE + 0x5F4)
/* EFUSE_APB2OTP_BLOCK10_W8 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word8 data..*/
#define EFUSE_APB2OTP_BLOCK10_W8    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W8_M  ((EFUSE_APB2OTP_BLOCK10_W8_V)<<(EFUSE_APB2OTP_BLOCK10_W8_S))
#define EFUSE_APB2OTP_BLOCK10_W8_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W8_S  0

#define EFUSE_APB2OTP_BLK10_W9_REG          (DR_REG_EFUSE_BASE + 0x5F8)
/* EFUSE_APB2OTP_BLOCK10_W9 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word9 data..*/
#define EFUSE_APB2OTP_BLOCK10_W9    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W9_M  ((EFUSE_APB2OTP_BLOCK10_W9_V)<<(EFUSE_APB2OTP_BLOCK10_W9_S))
#define EFUSE_APB2OTP_BLOCK10_W9_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W9_S  0

#define EFUSE_APB2OTP_BLK10_W10_REG          (DR_REG_EFUSE_BASE + 0x5FC)
/* EFUSE_APB2OTP_BLOCK10_W10 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word10 data..*/
#define EFUSE_APB2OTP_BLOCK10_W10    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W10_M  ((EFUSE_APB2OTP_BLOCK10_W10_V)<<(EFUSE_APB2OTP_BLOCK10_W10_S))
#define EFUSE_APB2OTP_BLOCK10_W10_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W10_S  0

#define EFUSE_APB2OTP_BLK10_W11_REG          (DR_REG_EFUSE_BASE + 0x600)
/* EFUSE_APB2OTP_BLOCK10_W11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Otp block10 word11 data..*/
#define EFUSE_APB2OTP_BLOCK10_W11    0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W11_M  ((EFUSE_APB2OTP_BLOCK10_W11_V)<<(EFUSE_APB2OTP_BLOCK10_W11_S))
#define EFUSE_APB2OTP_BLOCK10_W11_V  0xFFFFFFFF
#define EFUSE_APB2OTP_BLOCK10_W11_S  0

#define EFUSE_APB2OTP_CFG_REG          (DR_REG_EFUSE_BASE + 0x608)
/* EFUSE_APB2OTP_MR : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Apb2otp margin read signal.*/
#define EFUSE_APB2OTP_MR    (BIT(3))
#define EFUSE_APB2OTP_MR_M  (BIT(3))
#define EFUSE_APB2OTP_MR_V  0x1
#define EFUSE_APB2OTP_MR_S  3
/* EFUSE_APB2OTP_RWL : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Apb2otp repair info row select signal.*/
#define EFUSE_APB2OTP_RWL    (BIT(2))
#define EFUSE_APB2OTP_RWL_M  (BIT(2))
#define EFUSE_APB2OTP_RWL_V  0x1
#define EFUSE_APB2OTP_RWL_S  2
/* EFUSE_APB2OTP_RSB : R/W ;bitpos:[1] ;default: 1'b1 ; */
/*description: Apb2otp redundancy enable signal.*/
#define EFUSE_APB2OTP_RSB    (BIT(1))
#define EFUSE_APB2OTP_RSB_M  (BIT(1))
#define EFUSE_APB2OTP_RSB_V  0x1
#define EFUSE_APB2OTP_RSB_S  1
/* EFUSE_APB2OTP_APB2OTP_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Apb2otp mode enable signal..*/
#define EFUSE_APB2OTP_APB2OTP_EN    (BIT(0))
#define EFUSE_APB2OTP_APB2OTP_EN_M  (BIT(0))
#define EFUSE_APB2OTP_APB2OTP_EN_V  0x1
#define EFUSE_APB2OTP_APB2OTP_EN_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_EFUSE_REG_H_ */
