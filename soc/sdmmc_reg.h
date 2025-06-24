/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_SDMMC_REG_H_
#define _SOC_SDMMC_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define SDMMC_SDHOST_CTRL_REG          (DR_REG_SDMMC_BASE + 0x0)
/* SDMMC_SDHOST_CEATA_DEVICE_INTERRUPT_STATUS : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Software should appropriately write to this bit after the power-on reset or any
other reset to the CE-ATA device. After reset, the CE-ATA device's interrupt is
usually disabled (nIEN = 1). If the host enables the CE-ATA device's interrupt,
then software should set this bit..*/
#define SDMMC_SDHOST_CEATA_DEVICE_INTERRUPT_STATUS    (BIT(11))
#define SDMMC_SDHOST_CEATA_DEVICE_INTERRUPT_STATUS_M  (BIT(11))
#define SDMMC_SDHOST_CEATA_DEVICE_INTERRUPT_STATUS_V  0x1
#define SDMMC_SDHOST_CEATA_DEVICE_INTERRUPT_STATUS_S  11
/* SDMMC_SDHOST_SEND_AUTO_STOP_CCSD : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Always Set SDHOST_SEND_AUTO_STOP_CCSD and SDHOST_SEND_CCSD bits together; SDHOST
_SEND_AUTO_STOP_CCSD should not be set independently of send_ccsd. When set, SD/
MMC automatically sends an internally-generated STOP command (CMD12) to the CE-A
TA device. After sending this internally-generated STOP command, the Auto Comman
d Done (ACD) bit in SDHOST_RINTSTS_REG is set and an interrupt is generated for
the host, in case the ACD interrupt is not masked. After sending the Command Com
pletion Signal Disable (CCSD), SD/MMC automatically clears the  SDHOST_SEND_AUTO
_STOP_CCSD bit..*/
#define SDMMC_SDHOST_SEND_AUTO_STOP_CCSD    (BIT(10))
#define SDMMC_SDHOST_SEND_AUTO_STOP_CCSD_M  (BIT(10))
#define SDMMC_SDHOST_SEND_AUTO_STOP_CCSD_V  0x1
#define SDMMC_SDHOST_SEND_AUTO_STOP_CCSD_S  10
/* SDMMC_SDHOST_SEND_CCSD : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: When set, SD/MMC sends CCSD to the CE-ATA device. Software sets this bit only if
 the current command is expecting CCS (that is, RW_BLK), and if interrupts are e
nabled for the CE-ATA device. Once the CCSD pattern is sent to the device, SD/MM
C automatically clears the SDHOST_SEND_CCSD bit. It also sets the Command Done (
CD) bit  in the SDHOST_RINTSTS_REG register, and generates an interrupt for the
host, in case the Command Done interrupt is not masked. ; NOTE: Once the SDHOST_
SEND_CCSD bit is set, it takes two card clock cycles to drive the CCSD on the CM
D line. Due to this, within the boundary conditions the CCSD may be sent to the
CE-ATA device, even if the device has signalled CCS..*/
#define SDMMC_SDHOST_SEND_CCSD    (BIT(9))
#define SDMMC_SDHOST_SEND_CCSD_M  (BIT(9))
#define SDMMC_SDHOST_SEND_CCSD_V  0x1
#define SDMMC_SDHOST_SEND_CCSD_S  9
/* SDMMC_SDHOST_ABORT_READ_DATA : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: After a suspend-command is issued during a read-operation, software polls the ca
rd to find when the suspend-event occurred. Once the suspend-event has occurred,
 software sets the bit which will reset the data state machine that is waiting f
or the next block of data. This bit is automatically cleared once the data state
 machine is reset to idle..*/
#define SDMMC_SDHOST_ABORT_READ_DATA    (BIT(8))
#define SDMMC_SDHOST_ABORT_READ_DATA_M  (BIT(8))
#define SDMMC_SDHOST_ABORT_READ_DATA_V  0x1
#define SDMMC_SDHOST_ABORT_READ_DATA_S  8
/* SDMMC_SDHOST_SEND_IRQ_RESPONSE : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: Bit automatically clears once response is sent. To wait for MMC card interrupts,
 host issues CMD40 and waits for interrupt response from MMC card(s). In the mea
ntime, if host wants SD/MMC to exit waiting for interrupt state, it can set this
 bit, at which time SD/MMC command state-machine sends CMD40 response on bus and
 returns to idle state..*/
#define SDMMC_SDHOST_SEND_IRQ_RESPONSE    (BIT(7))
#define SDMMC_SDHOST_SEND_IRQ_RESPONSE_M  (BIT(7))
#define SDMMC_SDHOST_SEND_IRQ_RESPONSE_V  0x1
#define SDMMC_SDHOST_SEND_IRQ_RESPONSE_S  7
/* SDMMC_SDHOST_READ_WAIT : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: For sending read-wait to SDIO cards..*/
#define SDMMC_SDHOST_READ_WAIT    (BIT(6))
#define SDMMC_SDHOST_READ_WAIT_M  (BIT(6))
#define SDMMC_SDHOST_READ_WAIT_V  0x1
#define SDMMC_SDHOST_READ_WAIT_S  6
/* SDMMC_SDHOST_INT_ENABLE : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Global interrupt enable/disable bit. 0: Disable; 1: Enable..*/
#define SDMMC_SDHOST_INT_ENABLE    (BIT(4))
#define SDMMC_SDHOST_INT_ENABLE_M  (BIT(4))
#define SDMMC_SDHOST_INT_ENABLE_V  0x1
#define SDMMC_SDHOST_INT_ENABLE_S  4
/* SDMMC_SDHOST_DMA_RESET : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: To reset DMA interface, firmware should set bit to 1. This bit is auto-cleared a
fter two AHB clocks..*/
#define SDMMC_SDHOST_DMA_RESET    (BIT(2))
#define SDMMC_SDHOST_DMA_RESET_M  (BIT(2))
#define SDMMC_SDHOST_DMA_RESET_V  0x1
#define SDMMC_SDHOST_DMA_RESET_S  2
/* SDMMC_SDHOST_FIFO_RESET : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: To reset FIFO, firmware should set bit to 1. This bit is auto-cleared after comp
letion of reset operation.; Note: FIFO pointers will be out of reset after 2 cyc
les of system clocks in addition to synchronization delay (2 cycles of card cloc
k), after the fifo_reset is cleared..*/
#define SDMMC_SDHOST_FIFO_RESET    (BIT(1))
#define SDMMC_SDHOST_FIFO_RESET_M  (BIT(1))
#define SDMMC_SDHOST_FIFO_RESET_V  0x1
#define SDMMC_SDHOST_FIFO_RESET_S  1
/* SDMMC_SDHOST_CONTROLLER_RESET : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: To reset controller, firmware should set this bit. This bit is auto-cleared afte
r two AHB and two sdhost_cclk_in clock cycles..*/
#define SDMMC_SDHOST_CONTROLLER_RESET    (BIT(0))
#define SDMMC_SDHOST_CONTROLLER_RESET_M  (BIT(0))
#define SDMMC_SDHOST_CONTROLLER_RESET_V  0x1
#define SDMMC_SDHOST_CONTROLLER_RESET_S  0

#define SDMMC_SDHOST_CLKDIV_REG          (DR_REG_SDMMC_BASE + 0x8)
/* SDMMC_SDHOST_CLK_DIVIDER3 : R/W ;bitpos:[31:24] ;default: 8'h0 ; */
/*description: Clock divider3 value. Clock divisor is 2*n, where n = 0 bypasses the divider (di
visor of 1). For example, a value of 1 means divided by 2*1 = 2, a value of 0xFF
 means divided by 2*255 = 510, and so on..*/
#define SDMMC_SDHOST_CLK_DIVIDER3    0x000000FF
#define SDMMC_SDHOST_CLK_DIVIDER3_M  ((SDMMC_SDHOST_CLK_DIVIDER3_V)<<(SDMMC_SDHOST_CLK_DIVIDER3_S))
#define SDMMC_SDHOST_CLK_DIVIDER3_V  0xFF
#define SDMMC_SDHOST_CLK_DIVIDER3_S  24
/* SDMMC_SDHOST_CLK_DIVIDER2 : R/W ;bitpos:[23:16] ;default: 8'h0 ; */
/*description: Clock divider2 value. Clock divisor is 2*n, where n = 0 bypasses the divider (di
visor of 1). For example, a value of 1 means divided by 2*1 = 2, a value of 0xFF
 means divided by 2*255 = 510, and so on..*/
#define SDMMC_SDHOST_CLK_DIVIDER2    0x000000FF
#define SDMMC_SDHOST_CLK_DIVIDER2_M  ((SDMMC_SDHOST_CLK_DIVIDER2_V)<<(SDMMC_SDHOST_CLK_DIVIDER2_S))
#define SDMMC_SDHOST_CLK_DIVIDER2_V  0xFF
#define SDMMC_SDHOST_CLK_DIVIDER2_S  16
/* SDMMC_SDHOST_CLK_DIVIDER1 : R/W ;bitpos:[15:8] ;default: 8'h0 ; */
/*description: Clock divider1 value. Clock divisor is 2*n, where n = 0 bypasses the divider (di
visor of 1). For example, a value of 1 means divided by 2*1 = 2, a value of 0xFF
 means divided by 2*255 = 510, and so on..*/
#define SDMMC_SDHOST_CLK_DIVIDER1    0x000000FF
#define SDMMC_SDHOST_CLK_DIVIDER1_M  ((SDMMC_SDHOST_CLK_DIVIDER1_V)<<(SDMMC_SDHOST_CLK_DIVIDER1_S))
#define SDMMC_SDHOST_CLK_DIVIDER1_V  0xFF
#define SDMMC_SDHOST_CLK_DIVIDER1_S  8
/* SDMMC_SDHOST_CLK_DIVIDER0 : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: Clock divider0 value. Clock divisor is 2*n, where n = 0 bypasses the divider (di
visor of 1). For example, a value of 1 means divided by 2*1 = 2, a value of 0xFF
 means divided by 2*255 = 510, and so on..*/
#define SDMMC_SDHOST_CLK_DIVIDER0    0x000000FF
#define SDMMC_SDHOST_CLK_DIVIDER0_M  ((SDMMC_SDHOST_CLK_DIVIDER0_V)<<(SDMMC_SDHOST_CLK_DIVIDER0_S))
#define SDMMC_SDHOST_CLK_DIVIDER0_V  0xFF
#define SDMMC_SDHOST_CLK_DIVIDER0_S  0

#define SDMMC_SDHOST_CLKSRC_REG          (DR_REG_SDMMC_BASE + 0xC)
/* SDMMC_SDHOST_CLKSRC_REG : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Clock divider source for two SD cards is supported. Each card has two bits assig
ned to it. For example, bit[1:0] are assigned for card 0, bit[3:2] are assigned
for card 1. Card 0 maps and internally routes clock divider[0:3] outputs to cclk
_out[1:0] pins, depending on bit value.; 00 : Clock divider 0;; 01 : Clock divid
er 1;; 10 : Clock divider 2;; 11 : Clock divider 3..*/
#define SDMMC_SDHOST_CLKSRC_REG    0x0000000F
#define SDMMC_SDHOST_CLKSRC_REG_M  ((SDMMC_SDHOST_CLKSRC_REG_V)<<(SDMMC_SDHOST_CLKSRC_REG_S))
#define SDMMC_SDHOST_CLKSRC_REG_V  0xF
#define SDMMC_SDHOST_CLKSRC_REG_S  0

#define SDMMC_SDHOST_CLKENA_REG          (DR_REG_SDMMC_BASE + 0x10)
/* SDMMC_SDHOST_LP_ENABLE : R/W ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: Disable clock when the card is in IDLE state. One bit per card.; 0: clock disabl
ed;; 1: clock enabled..*/
#define SDMMC_SDHOST_LP_ENABLE    0x00000003
#define SDMMC_SDHOST_LP_ENABLE_M  ((SDMMC_SDHOST_LP_ENABLE_V)<<(SDMMC_SDHOST_LP_ENABLE_S))
#define SDMMC_SDHOST_LP_ENABLE_V  0x3
#define SDMMC_SDHOST_LP_ENABLE_S  16
/* SDMMC_SDHOST_CCLK_ENABLE : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Clock-enable control for two SD card clocks and one MMC card clock is supported.
 One bit per card.; 0: Clock disabled;; 1: Clock enabled..*/
#define SDMMC_SDHOST_CCLK_ENABLE    0x00000003
#define SDMMC_SDHOST_CCLK_ENABLE_M  ((SDMMC_SDHOST_CCLK_ENABLE_V)<<(SDMMC_SDHOST_CCLK_ENABLE_S))
#define SDMMC_SDHOST_CCLK_ENABLE_V  0x3
#define SDMMC_SDHOST_CCLK_ENABLE_S  0

#define SDMMC_SDHOST_TMOUT_REG          (DR_REG_SDMMC_BASE + 0x14)
/* SDMMC_SDHOST_DATA_TIMEOUT : R/W ;bitpos:[31:8] ;default: 24'hffffff ; */
/*description: Value for card data read timeout. This value is also used for data starvation by
 host timeout. The timeout counter is started only after the card clock is stopp
ed. This value is specified in number of card output clocks, i.e. sdhost_cclk_ou
t of the selected card.; NOTE: The software timer should be used if the timeout
value is in the order of 100 ms. In this case, read data timeout interrupt needs
 to be disabled..*/
#define SDMMC_SDHOST_DATA_TIMEOUT    0x00FFFFFF
#define SDMMC_SDHOST_DATA_TIMEOUT_M  ((SDMMC_SDHOST_DATA_TIMEOUT_V)<<(SDMMC_SDHOST_DATA_TIMEOUT_S))
#define SDMMC_SDHOST_DATA_TIMEOUT_V  0xFFFFFF
#define SDMMC_SDHOST_DATA_TIMEOUT_S  8
/* SDMMC_SDHOST_RESPONSE_TIMEOUT : R/W ;bitpos:[7:0] ;default: 8'h40 ; */
/*description: Response timeout value. Value is specified in terms of number of card output clo
cks, i.e., sdhost_cclk_out..*/
#define SDMMC_SDHOST_RESPONSE_TIMEOUT    0x000000FF
#define SDMMC_SDHOST_RESPONSE_TIMEOUT_M  ((SDMMC_SDHOST_RESPONSE_TIMEOUT_V)<<(SDMMC_SDHOST_RESPONSE_TIMEOUT_S))
#define SDMMC_SDHOST_RESPONSE_TIMEOUT_V  0xFF
#define SDMMC_SDHOST_RESPONSE_TIMEOUT_S  0

#define SDMMC_SDHOST_CTYPE_REG          (DR_REG_SDMMC_BASE + 0x18)
/* SDMMC_SDHOST_CARD_WIDTH8 : R/W ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: One bit per card indicates if card is in 8-bit mode.; 0: Non 8-bit mode;; 1: 8-b
it mode.; Bit[17:16] correspond to card[1:0] respectively..*/
#define SDMMC_SDHOST_CARD_WIDTH8    0x00000003
#define SDMMC_SDHOST_CARD_WIDTH8_M  ((SDMMC_SDHOST_CARD_WIDTH8_V)<<(SDMMC_SDHOST_CARD_WIDTH8_S))
#define SDMMC_SDHOST_CARD_WIDTH8_V  0x3
#define SDMMC_SDHOST_CARD_WIDTH8_S  16
/* SDMMC_SDHOST_CARD_WIDTH4 : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: One bit per card indicates if card is 1-bit or 4-bit mode.; 0: 1-bit mode;; 1: 4
-bit mode.; Bit[1:0] correspond to card[1:0] respectively..*/
#define SDMMC_SDHOST_CARD_WIDTH4    0x00000003
#define SDMMC_SDHOST_CARD_WIDTH4_M  ((SDMMC_SDHOST_CARD_WIDTH4_V)<<(SDMMC_SDHOST_CARD_WIDTH4_S))
#define SDMMC_SDHOST_CARD_WIDTH4_V  0x3
#define SDMMC_SDHOST_CARD_WIDTH4_S  0

#define SDMMC_SDHOST_BLKSIZ_REG          (DR_REG_SDMMC_BASE + 0x1C)
/* SDMMC_SDHOST_BLOCK_SIZE : R/W ;bitpos:[15:0] ;default: 16'h200 ; */
/*description: Block size..*/
#define SDMMC_SDHOST_BLOCK_SIZE    0x0000FFFF
#define SDMMC_SDHOST_BLOCK_SIZE_M  ((SDMMC_SDHOST_BLOCK_SIZE_V)<<(SDMMC_SDHOST_BLOCK_SIZE_S))
#define SDMMC_SDHOST_BLOCK_SIZE_V  0xFFFF
#define SDMMC_SDHOST_BLOCK_SIZE_S  0

#define SDMMC_SDHOST_BYTCNT_REG          (DR_REG_SDMMC_BASE + 0x20)
/* SDMMC_SDHOST_BYTE_COUNT : R/W ;bitpos:[31:0] ;default: 32'h200 ; */
/*description: Number of bytes to be transferred, should be an integral multiple of Block Size
for block transfers. For data transfers of undefined byte lengths, byte count sh
ould be set to 0. When byte count is set to 0, it is the responsibility of host
to explicitly send stop/abort command to terminate data transfer..*/
#define SDMMC_SDHOST_BYTE_COUNT    0xFFFFFFFF
#define SDMMC_SDHOST_BYTE_COUNT_M  ((SDMMC_SDHOST_BYTE_COUNT_V)<<(SDMMC_SDHOST_BYTE_COUNT_S))
#define SDMMC_SDHOST_BYTE_COUNT_V  0xFFFFFFFF
#define SDMMC_SDHOST_BYTE_COUNT_S  0

#define SDMMC_SDHOST_INTMASK_REG          (DR_REG_SDMMC_BASE + 0x24)
/* SDMMC_SDHOST_SDIO_INT_MASK : R/W ;bitpos:[17:16] ;default: 16'h0 ; */
/*description: SDIO interrupt mask, one bit for each card. Bit[17:16] correspond to card[15:0]
respectively. When masked, SDIO interrupt detection for that card is disabled. 0
 masks an interrupt, and 1 enables an interrupt..*/
#define SDMMC_SDHOST_SDIO_INT_MASK    0x00000003
#define SDMMC_SDHOST_SDIO_INT_MASK_M  ((SDMMC_SDHOST_SDIO_INT_MASK_V)<<(SDMMC_SDHOST_SDIO_INT_MASK_S))
#define SDMMC_SDHOST_SDIO_INT_MASK_V  0x3
#define SDMMC_SDHOST_SDIO_INT_MASK_S  16
/* SDMMC_SDHOST_INT_MASK : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: These bits used to mask unwanted interrupts. A value of 0 masks interrupt, and a
 value of 1 enables the interrupt.; Bit 15 (EBE): End-bit error/no CRC error;; B
it 14 (ACD): Auto command done;; Bit 13 (SBE/BCI): Rx Start Bit Error;; Bit 12 (
HLE): Hardware locked write error;; Bit 11 (FRUN): FIFO underrun/overrun error;;
 Bit 10 (HTO): Data starvation-by-host timeout;; Bit 9 (DRTO): Data read timeout
;; Bit 8 (RTO): Response timeout; ; Bit 7 (DCRC): Data CRC error; ; Bit 6 (RCRC)
: Response CRC error; ; Bit 5 (RXDR): Receive FIFO data request; ; Bit 4 (TXDR):
 Transmit FIFO data request; ; Bit 3 (DTO): Data transfer over; ; Bit 2 (CD): Co
mmand done; ; Bit 1 (RE): Response error;; Bit 0 (CD): Card detect..*/
#define SDMMC_SDHOST_INT_MASK    0x0000FFFF
#define SDMMC_SDHOST_INT_MASK_M  ((SDMMC_SDHOST_INT_MASK_V)<<(SDMMC_SDHOST_INT_MASK_S))
#define SDMMC_SDHOST_INT_MASK_V  0xFFFF
#define SDMMC_SDHOST_INT_MASK_S  0

#define SDMMC_SDHOST_CMDARG_REG          (DR_REG_SDMMC_BASE + 0x28)
/* SDMMC_SDHOST_CMDARG_REG : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Value indicates command argument to be passed to the card..*/
#define SDMMC_SDHOST_CMDARG_REG    0xFFFFFFFF
#define SDMMC_SDHOST_CMDARG_REG_M  ((SDMMC_SDHOST_CMDARG_REG_V)<<(SDMMC_SDHOST_CMDARG_REG_S))
#define SDMMC_SDHOST_CMDARG_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_CMDARG_REG_S  0

#define SDMMC_SDHOST_CMD_REG          (DR_REG_SDMMC_BASE + 0x2C)
/* SDMMC_SDHOST_START_CMD : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: Start command. Once command is served by the CIU, this bit is automatically clea
red. When this bit is set, host should not attempt to write to any command regis
ters. If a write is attempted, hardware lock error is set in raw interrupt regis
ter. Once command is sent and a response is received from SD_MMC_CEATA cards, Co
mmand Done bit is set in the raw interrupt Register..*/
#define SDMMC_SDHOST_START_CMD    (BIT(31))
#define SDMMC_SDHOST_START_CMD_M  (BIT(31))
#define SDMMC_SDHOST_START_CMD_V  0x1
#define SDMMC_SDHOST_START_CMD_S  31
/* SDMMC_SDHOST_USE_HOLE_REG : R/W ;bitpos:[29] ;default: 1'h1 ; */
/*description: Use Hold Register.; 0: CMD and DATA sent to card bypassing HOLD Register;; 1: CM
D and DATA sent to card through the HOLD Register..*/
#define SDMMC_SDHOST_USE_HOLE_REG    (BIT(29))
#define SDMMC_SDHOST_USE_HOLE_REG_M  (BIT(29))
#define SDMMC_SDHOST_USE_HOLE_REG_V  0x1
#define SDMMC_SDHOST_USE_HOLE_REG_S  29
/* SDMMC_SDHOST_CCS_EXPECTED : R/W ;bitpos:[23] ;default: 1'h0 ; */
/*description: Expected Command Completion Signal (CCS) configuration.; 0: Interrupts are not e
nabled in CE-ATA device (nIEN = 1 in ATA control register), or command does not
expect CCS from device;; 1: Interrupts are enabled in CE-ATA device (nIEN = 0),
and RW_BLK command expects command completion signal from CE-ATA device. ; If th
e command expects Command Completion Signal (CCS) from the CE-ATA device, the so
ftware should set this control bit. SD/MMC sets Data Transfer Over (DTO) bit in
RINTSTS register and generates interrupt to host if Data Transfer Over interrupt
 is not masked..*/
#define SDMMC_SDHOST_CCS_EXPECTED    (BIT(23))
#define SDMMC_SDHOST_CCS_EXPECTED_M  (BIT(23))
#define SDMMC_SDHOST_CCS_EXPECTED_V  0x1
#define SDMMC_SDHOST_CCS_EXPECTED_S  23
/* SDMMC_SDHOST_READ_CEATA_DEVICE : R/W ;bitpos:[22] ;default: 1'h0 ; */
/*description: Read access flag.; 0: Host is not performing read access (RW_REG or RW_BLK)towar
ds CE-ATA device;; 1: Host is performing read access (RW_REG or RW_BLK) towards
CE-ATA device.; Software should set this bit to indicate that CE-ATA device is b
eing accessed for read transfer. This bit is used to disable read data timeout i
ndication while performing CE-ATA read transfers. Maximum value of I/O transmiss
ion delay can be no less than 10 seconds. SD/MMC should not indicate read data t
imeout while waiting for data from CE-ATA device..*/
#define SDMMC_SDHOST_READ_CEATA_DEVICE    (BIT(22))
#define SDMMC_SDHOST_READ_CEATA_DEVICE_M  (BIT(22))
#define SDMMC_SDHOST_READ_CEATA_DEVICE_V  0x1
#define SDMMC_SDHOST_READ_CEATA_DEVICE_S  22
/* SDMMC_SDHOST_UPDATE_CLOCK_REGISTERS_ONLY : R/W ;bitpos:[21] ;default: 1'h0 ; */
/*description: 0: Normal command sequence; 1: Do not send commands, just update clock register
value into card clock domain.; Following register values are transferred into ca
rd clock domain: CLKDIV, CLRSRC, and CLKENA.; Changes card clocks (change freque
ncy, truncate off or on, and set low-frequency mode). This is provided in order
to change clock frequency or stop clock without having to send command to cards.
 During normal command sequence, when sdhost_update_clock_registers_only = 0, fo
llowing control registers are transferred from BIU to CIU: CMD, CMDARG, TMOUT, C
TYPE, BLKSIZ, and BYTCNT. CIU uses new register values for new command sequence
to card(s). When bit is set, there are no Command Done interrupts because no com
mand is sent to SD_MMC_CEATA cards..*/
#define SDMMC_SDHOST_UPDATE_CLOCK_REGISTERS_ONLY    (BIT(21))
#define SDMMC_SDHOST_UPDATE_CLOCK_REGISTERS_ONLY_M  (BIT(21))
#define SDMMC_SDHOST_UPDATE_CLOCK_REGISTERS_ONLY_V  0x1
#define SDMMC_SDHOST_UPDATE_CLOCK_REGISTERS_ONLY_S  21
/* SDMMC_SDHOST_CARD_NUMBER : R/W ;bitpos:[20:16] ;default: 5'h0 ; */
/*description: Card number in use. Represents physical slot number of card being accessed. In S
D-only mode, up to two cards are supported..*/
#define SDMMC_SDHOST_CARD_NUMBER    0x0000001F
#define SDMMC_SDHOST_CARD_NUMBER_M  ((SDMMC_SDHOST_CARD_NUMBER_V)<<(SDMMC_SDHOST_CARD_NUMBER_S))
#define SDMMC_SDHOST_CARD_NUMBER_V  0x1F
#define SDMMC_SDHOST_CARD_NUMBER_S  16
/* SDMMC_SDHOST_SEND_INITIALIZATION : R/W ;bitpos:[15] ;default: 1'h0 ; */
/*description: 0: Do not send initialization sequence (80 clocks of 1) before sending this comm
and; 1: Send initialization sequence before sending this command.; After powered
 on, 80 clocks must be sent to card for initialization before sending any comman
ds to card. Bit should be set while sending first command to card so that contro
ller will initialize clocks before sending command to card..*/
#define SDMMC_SDHOST_SEND_INITIALIZATION    (BIT(15))
#define SDMMC_SDHOST_SEND_INITIALIZATION_M  (BIT(15))
#define SDMMC_SDHOST_SEND_INITIALIZATION_V  0x1
#define SDMMC_SDHOST_SEND_INITIALIZATION_S  15
/* SDMMC_SDHOST_STOP_ABORT_CMD : R/W ;bitpos:[14] ;default: 1'h0 ; */
/*description: 0: Neither stop nor abort command can stop current data transfer. If abort is se
nt to function-number currently selected or not in data-transfer mode, then bit
should be set to 0; 1: Stop or abort command intended to stop current data trans
fer in progress.; When open-ended or predefined data transfer is in progress, an
d host issues stop or abort command to stop data transfer, bit should be set so
that command/data state-machines of CIU can return correctly to idle state..*/
#define SDMMC_SDHOST_STOP_ABORT_CMD    (BIT(14))
#define SDMMC_SDHOST_STOP_ABORT_CMD_M  (BIT(14))
#define SDMMC_SDHOST_STOP_ABORT_CMD_V  0x1
#define SDMMC_SDHOST_STOP_ABORT_CMD_S  14
/* SDMMC_SDHOST_WAIT_PRVDATA_COMPLETE : R/W ;bitpos:[13] ;default: 1'h0 ; */
/*description: 0: Send command at once, even if previous data transfer has not completed; 1: Wa
it for previous data transfer to complete before sending Command.; The SDHOST_WA
IT_PRVDATA_COMPLETE] = 0 option is typically used to query status of card during
 data transfer or to stop current data transfer. SDHOST_CARD_NUMBERr should be s
ame as in previous command..*/
#define SDMMC_SDHOST_WAIT_PRVDATA_COMPLETE    (BIT(13))
#define SDMMC_SDHOST_WAIT_PRVDATA_COMPLETE_M  (BIT(13))
#define SDMMC_SDHOST_WAIT_PRVDATA_COMPLETE_V  0x1
#define SDMMC_SDHOST_WAIT_PRVDATA_COMPLETE_S  13
/* SDMMC_SDHOST_SEND_AUTO_STOP : R/W ;bitpos:[12] ;default: 1'h0 ; */
/*description: 0: No stop command is sent at the end of data transfer; 1: Send stop command at
the end of data transfer..*/
#define SDMMC_SDHOST_SEND_AUTO_STOP    (BIT(12))
#define SDMMC_SDHOST_SEND_AUTO_STOP_M  (BIT(12))
#define SDMMC_SDHOST_SEND_AUTO_STOP_V  0x1
#define SDMMC_SDHOST_SEND_AUTO_STOP_S  12
/* SDMMC_SDHOST_TRANSFER_MODE : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: 0: Block data transfer command; 1: Stream data transfer command.; Don't care if
no data expected..*/
#define SDMMC_SDHOST_TRANSFER_MODE    (BIT(11))
#define SDMMC_SDHOST_TRANSFER_MODE_M  (BIT(11))
#define SDMMC_SDHOST_TRANSFER_MODE_V  0x1
#define SDMMC_SDHOST_TRANSFER_MODE_S  11
/* SDMMC_SDHOST_READ_WRITE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: 0: Read from card; 1: Write to card.; Don't care if no data is expected from car
d..*/
#define SDMMC_SDHOST_READ_WRITE    (BIT(10))
#define SDMMC_SDHOST_READ_WRITE_M  (BIT(10))
#define SDMMC_SDHOST_READ_WRITE_V  0x1
#define SDMMC_SDHOST_READ_WRITE_S  10
/* SDMMC_SDHOST_DATA_EXPECTED : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: 0: No data transfer expected; 1: Data transfer expected..*/
#define SDMMC_SDHOST_DATA_EXPECTED    (BIT(9))
#define SDMMC_SDHOST_DATA_EXPECTED_M  (BIT(9))
#define SDMMC_SDHOST_DATA_EXPECTED_V  0x1
#define SDMMC_SDHOST_DATA_EXPECTED_S  9
/* SDMMC_SDHOST_CHECK_RESPONSE_CRC : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: 0: Do not check; 1: Check response CRC.; Some of command responses do not return
 valid CRC bits. Software should disable CRC checks for those commands in order
to disable CRC checking by controller..*/
#define SDMMC_SDHOST_CHECK_RESPONSE_CRC    (BIT(8))
#define SDMMC_SDHOST_CHECK_RESPONSE_CRC_M  (BIT(8))
#define SDMMC_SDHOST_CHECK_RESPONSE_CRC_V  0x1
#define SDMMC_SDHOST_CHECK_RESPONSE_CRC_S  8
/* SDMMC_SDHOST_RESPONSE_LENGTH : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: 0: Short response expected from card; 1: Long response expected from card..*/
#define SDMMC_SDHOST_RESPONSE_LENGTH    (BIT(7))
#define SDMMC_SDHOST_RESPONSE_LENGTH_M  (BIT(7))
#define SDMMC_SDHOST_RESPONSE_LENGTH_V  0x1
#define SDMMC_SDHOST_RESPONSE_LENGTH_S  7
/* SDMMC_SDHOST_RESPONSE_EXPECT : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: 0: No response expected from card; 1: Response expected from card..*/
#define SDMMC_SDHOST_RESPONSE_EXPECT    (BIT(6))
#define SDMMC_SDHOST_RESPONSE_EXPECT_M  (BIT(6))
#define SDMMC_SDHOST_RESPONSE_EXPECT_V  0x1
#define SDMMC_SDHOST_RESPONSE_EXPECT_S  6
/* SDMMC_SDHOST_CMD_INDEX : R/W ;bitpos:[5:0] ;default: 6'h0 ; */
/*description: Command index..*/
#define SDMMC_SDHOST_CMD_INDEX    0x0000003F
#define SDMMC_SDHOST_CMD_INDEX_M  ((SDMMC_SDHOST_CMD_INDEX_V)<<(SDMMC_SDHOST_CMD_INDEX_S))
#define SDMMC_SDHOST_CMD_INDEX_V  0x3F
#define SDMMC_SDHOST_CMD_INDEX_S  0

#define SDMMC_SDHOST_RESP0_REG          (DR_REG_SDMMC_BASE + 0x30)
/* SDMMC_SDHOST_RESPONSE0_REG : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Bit[31:0] of response..*/
#define SDMMC_SDHOST_RESPONSE0_REG    0xFFFFFFFF
#define SDMMC_SDHOST_RESPONSE0_REG_M  ((SDMMC_SDHOST_RESPONSE0_REG_V)<<(SDMMC_SDHOST_RESPONSE0_REG_S))
#define SDMMC_SDHOST_RESPONSE0_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_RESPONSE0_REG_S  0

#define SDMMC_SDHOST_RESP1_REG          (DR_REG_SDMMC_BASE + 0x34)
/* SDMMC_SDHOST_RESPONSE1_REG : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Bit[63:32] of long response..*/
#define SDMMC_SDHOST_RESPONSE1_REG    0xFFFFFFFF
#define SDMMC_SDHOST_RESPONSE1_REG_M  ((SDMMC_SDHOST_RESPONSE1_REG_V)<<(SDMMC_SDHOST_RESPONSE1_REG_S))
#define SDMMC_SDHOST_RESPONSE1_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_RESPONSE1_REG_S  0

#define SDMMC_SDHOST_RESP2_REG          (DR_REG_SDMMC_BASE + 0x38)
/* SDMMC_SDHOST_RESPONSE2_REG : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Bit[95:64] of long response..*/
#define SDMMC_SDHOST_RESPONSE2_REG    0xFFFFFFFF
#define SDMMC_SDHOST_RESPONSE2_REG_M  ((SDMMC_SDHOST_RESPONSE2_REG_V)<<(SDMMC_SDHOST_RESPONSE2_REG_S))
#define SDMMC_SDHOST_RESPONSE2_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_RESPONSE2_REG_S  0

#define SDMMC_SDHOST_RESP3_REG          (DR_REG_SDMMC_BASE + 0x3C)
/* SDMMC_SDHOST_RESPONSE3_REG : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Bit[127:96] of long response..*/
#define SDMMC_SDHOST_RESPONSE3_REG    0xFFFFFFFF
#define SDMMC_SDHOST_RESPONSE3_REG_M  ((SDMMC_SDHOST_RESPONSE3_REG_V)<<(SDMMC_SDHOST_RESPONSE3_REG_S))
#define SDMMC_SDHOST_RESPONSE3_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_RESPONSE3_REG_S  0

#define SDMMC_SDHOST_MINTSTS_REG          (DR_REG_SDMMC_BASE + 0x40)
/* SDMMC_SDHOST_SDIO_INTERRUPT_MSK : RO ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: Interrupt from SDIO card, one bit for each card. Bit[17:16] correspond to card1
and card0, respectively. SDIO interrupt for card is enabled only if correspondin
g sdhost_sdio_int_mask bit is set in Interrupt mask register (Setting mask bit e
nables interrupt)..*/
#define SDMMC_SDHOST_SDIO_INTERRUPT_MSK    0x00000003
#define SDMMC_SDHOST_SDIO_INTERRUPT_MSK_M  ((SDMMC_SDHOST_SDIO_INTERRUPT_MSK_V)<<(SDMMC_SDHOST_SDIO_INTERRUPT_MSK_S))
#define SDMMC_SDHOST_SDIO_INTERRUPT_MSK_V  0x3
#define SDMMC_SDHOST_SDIO_INTERRUPT_MSK_S  16
/* SDMMC_SDHOST_INT_STATUS_MSK : RO ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Interrupt enabled only if corresponding bit in interrupt mask register is set.;
Bit 15 (EBE): End-bit error/no CRC error;; Bit 14 (ACD): Auto command done;; Bit
 13 (SBE/BCI): RX Start Bit Error;; Bit 12 (HLE): Hardware locked write error; ;
 Bit 11 (FRUN): FIFO underrun/overrun error;; Bit 10 (HTO): Data starvation by h
ost timeout (HTO);; Bit 9 (DTRO): Data read timeout; ; Bit 8 (RTO): Response tim
eout; ; Bit 7 (DCRC): Data CRC error; ; Bit 6 (RCRC): Response CRC error; ; Bit
5 (RXDR): Receive FIFO data request; ; Bit 4 (TXDR): Transmit FIFO data request;
; Bit 3 (DTO): Data transfer over; ; Bit 2 (CD): Command done; ; Bit 1 (RE): Res
ponse error;; Bit 0 (CD): Card detect..*/
#define SDMMC_SDHOST_INT_STATUS_MSK    0x0000FFFF
#define SDMMC_SDHOST_INT_STATUS_MSK_M  ((SDMMC_SDHOST_INT_STATUS_MSK_V)<<(SDMMC_SDHOST_INT_STATUS_MSK_S))
#define SDMMC_SDHOST_INT_STATUS_MSK_V  0xFFFF
#define SDMMC_SDHOST_INT_STATUS_MSK_S  0

#define SDMMC_SDHOST_RINTSTS_REG          (DR_REG_SDMMC_BASE + 0x44)
/* SDMMC_SDHOST_SDIO_INTERRUPT_RAW : R/W ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: Interrupt from SDIO card, one bit for each card. Bit[17:16] correspond to card1
and card0, respectively. Setting a bit clears the corresponding interrupt bit an
d writing 0 has no effect.; 0: No SDIO interrupt from card;; 1: SDIO interrupt f
rom card..*/
#define SDMMC_SDHOST_SDIO_INTERRUPT_RAW    0x00000003
#define SDMMC_SDHOST_SDIO_INTERRUPT_RAW_M  ((SDMMC_SDHOST_SDIO_INTERRUPT_RAW_V)<<(SDMMC_SDHOST_SDIO_INTERRUPT_RAW_S))
#define SDMMC_SDHOST_SDIO_INTERRUPT_RAW_V  0x3
#define SDMMC_SDHOST_SDIO_INTERRUPT_RAW_S  16
/* SDMMC_SDHOST_INT_STATUS_RAW : R/W ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Setting a bit clears the corresponding interrupt and writing 0 has no effect. Bi
ts are logged regardless of interrupt mask status.; Bit 15 (EBE): End-bit error/
no CRC error;; Bit 14 (ACD): Auto command done;; Bit 13 (SBE/BCI): RX Start Bit
Error;; Bit 12 (HLE): Hardware locked write error; ; Bit 11 (FRUN): FIFO underru
n/overrun error;; Bit 10 (HTO): Data starvation by host timeout (HTO);; Bit 9 (D
TRO): Data read timeout; ; Bit 8 (RTO): Response timeout; ; Bit 7 (DCRC): Data C
RC error; ; Bit 6 (RCRC): Response CRC error; ; Bit 5 (RXDR): Receive FIFO data
request; ; Bit 4 (TXDR): Transmit FIFO data request;; Bit 3 (DTO): Data transfer
 over; ; Bit 2 (CD): Command done; ; Bit 1 (RE): Response error;; Bit 0 (CD): Ca
rd detect..*/
#define SDMMC_SDHOST_INT_STATUS_RAW    0x0000FFFF
#define SDMMC_SDHOST_INT_STATUS_RAW_M  ((SDMMC_SDHOST_INT_STATUS_RAW_V)<<(SDMMC_SDHOST_INT_STATUS_RAW_S))
#define SDMMC_SDHOST_INT_STATUS_RAW_V  0xFFFF
#define SDMMC_SDHOST_INT_STATUS_RAW_S  0

#define SDMMC_SDHOST_STATUS_REG          (DR_REG_SDMMC_BASE + 0x48)
/* SDMMC_SDHOST_FIFO_COUNT : RO ;bitpos:[29:17] ;default: 8'h0 ; */
/*description: FIFO count, number of filled locations in FIFO..*/
#define SDMMC_SDHOST_FIFO_COUNT    0x00001FFF
#define SDMMC_SDHOST_FIFO_COUNT_M  ((SDMMC_SDHOST_FIFO_COUNT_V)<<(SDMMC_SDHOST_FIFO_COUNT_S))
#define SDMMC_SDHOST_FIFO_COUNT_V  0x1FFF
#define SDMMC_SDHOST_FIFO_COUNT_S  17
/* SDMMC_SDHOST_RESPONSE_INDEX : RO ;bitpos:[16:11] ;default: 6'h0 ; */
/*description: Index of previous response, including any auto-stop sent by core..*/
#define SDMMC_SDHOST_RESPONSE_INDEX    0x0000003F
#define SDMMC_SDHOST_RESPONSE_INDEX_M  ((SDMMC_SDHOST_RESPONSE_INDEX_V)<<(SDMMC_SDHOST_RESPONSE_INDEX_S))
#define SDMMC_SDHOST_RESPONSE_INDEX_V  0x3F
#define SDMMC_SDHOST_RESPONSE_INDEX_S  11
/* SDMMC_SDHOST_DATA_STATE_MC_BUSY : RO ;bitpos:[10] ;default: 1'h1 ; */
/*description: Data transmit or receive state-machine is busy..*/
#define SDMMC_SDHOST_DATA_STATE_MC_BUSY    (BIT(10))
#define SDMMC_SDHOST_DATA_STATE_MC_BUSY_M  (BIT(10))
#define SDMMC_SDHOST_DATA_STATE_MC_BUSY_V  0x1
#define SDMMC_SDHOST_DATA_STATE_MC_BUSY_S  10
/* SDMMC_SDHOST_DATA_BUSY : RO ;bitpos:[9] ;default: 1'h1 ; */
/*description: Inverted version of raw selected sdhost_card_data[0].; 0: Card data not busy;; 1
: Card data busy..*/
#define SDMMC_SDHOST_DATA_BUSY    (BIT(9))
#define SDMMC_SDHOST_DATA_BUSY_M  (BIT(9))
#define SDMMC_SDHOST_DATA_BUSY_V  0x1
#define SDMMC_SDHOST_DATA_BUSY_S  9
/* SDMMC_SDHOST_DATA_3_STATUS : RO ;bitpos:[8] ;default: 1'h1 ; */
/*description: Raw selected sdhost_card_data[3], checks whether card is present.; 0: card not p
resent;; 1: card present..*/
#define SDMMC_SDHOST_DATA_3_STATUS    (BIT(8))
#define SDMMC_SDHOST_DATA_3_STATUS_M  (BIT(8))
#define SDMMC_SDHOST_DATA_3_STATUS_V  0x1
#define SDMMC_SDHOST_DATA_3_STATUS_S  8
/* SDMMC_SDHOST_COMMAND_FSM_STATES : RO ;bitpos:[7:4] ;default: 4'h1 ; */
/*description: Command FSM states.; 0: Idle;; 1: Send init sequence; ; 2: Send cmd start bit; ;
 3: Send cmd tx bit;; 4: Send cmd index + arg;; 5: Send cmd crc7;; 6: Send cmd e
nd bit;; 7: Receive resp start bit;; 8: Receive resp IRQ response;; 9: Receive r
esp tx bit;; 10: Receive resp cmd idx;; 11: Receive resp data;; 12: Receive resp
 crc7;; 13: Receive resp end bit;; 14: Cmd path wait NCC;; 15: Wait, cmd-to-resp
onse turnaround..*/
#define SDMMC_SDHOST_COMMAND_FSM_STATES    0x0000000F
#define SDMMC_SDHOST_COMMAND_FSM_STATES_M  ((SDMMC_SDHOST_COMMAND_FSM_STATES_V)<<(SDMMC_SDHOST_COMMAND_FSM_STATES_S))
#define SDMMC_SDHOST_COMMAND_FSM_STATES_V  0xF
#define SDMMC_SDHOST_COMMAND_FSM_STATES_S  4
/* SDMMC_SDHOST_FIFO_FULL : RO ;bitpos:[3] ;default: 1'h0 ; */
/*description: FIFO is full status..*/
#define SDMMC_SDHOST_FIFO_FULL    (BIT(3))
#define SDMMC_SDHOST_FIFO_FULL_M  (BIT(3))
#define SDMMC_SDHOST_FIFO_FULL_V  0x1
#define SDMMC_SDHOST_FIFO_FULL_S  3
/* SDMMC_SDHOST_FIFO_EMPTY : RO ;bitpos:[2] ;default: 1'h1 ; */
/*description: FIFO is empty status..*/
#define SDMMC_SDHOST_FIFO_EMPTY    (BIT(2))
#define SDMMC_SDHOST_FIFO_EMPTY_M  (BIT(2))
#define SDMMC_SDHOST_FIFO_EMPTY_V  0x1
#define SDMMC_SDHOST_FIFO_EMPTY_S  2
/* SDMMC_SDHOST_FIFO_TX_WATERMARK : RO ;bitpos:[1] ;default: 1'h1 ; */
/*description: FIFO reached Transmit watermark level, not qualified with data transfer..*/
#define SDMMC_SDHOST_FIFO_TX_WATERMARK    (BIT(1))
#define SDMMC_SDHOST_FIFO_TX_WATERMARK_M  (BIT(1))
#define SDMMC_SDHOST_FIFO_TX_WATERMARK_V  0x1
#define SDMMC_SDHOST_FIFO_TX_WATERMARK_S  1
/* SDMMC_SDHOST_FIFO_RX_WATERMARK : RO ;bitpos:[0] ;default: 1'h0 ; */
/*description: FIFO reached Receive watermark level, not qualified with data transfer..*/
#define SDMMC_SDHOST_FIFO_RX_WATERMARK    (BIT(0))
#define SDMMC_SDHOST_FIFO_RX_WATERMARK_M  (BIT(0))
#define SDMMC_SDHOST_FIFO_RX_WATERMARK_V  0x1
#define SDMMC_SDHOST_FIFO_RX_WATERMARK_S  0

#define SDMMC_SDHOST_FIFOTH_REG          (DR_REG_SDMMC_BASE + 0x4C)
/* SDMMC_SDHOST_DMA_MULTIPLE_TRANSACTION_SIZE : R/W ;bitpos:[30:28] ;default: 3'h0 ; */
/*description: Burst size of multiple transaction, should be programmed same as DMA controller
multiple-transaction-size SDHOST_SRC/DEST_MSIZE.; 000: 1-byte transfer; ; 001: 4
-byte transfer; ; 010: 8-byte transfer; ; 011: 16-byte transfer; ; 100: 32-byte
transfer; ; 101: 64-byte transfer; ; 110: 128-byte transfer; ; 111: 256-byte tra
nsfer..*/
#define SDMMC_SDHOST_DMA_MULTIPLE_TRANSACTION_SIZE    0x00000007
#define SDMMC_SDHOST_DMA_MULTIPLE_TRANSACTION_SIZE_M  ((SDMMC_SDHOST_DMA_MULTIPLE_TRANSACTION_SIZE_V)<<(SDMMC_SDHOST_DMA_MULTIPLE_TRANSACTION_SIZE_S))
#define SDMMC_SDHOST_DMA_MULTIPLE_TRANSACTION_SIZE_V  0x7
#define SDMMC_SDHOST_DMA_MULTIPLE_TRANSACTION_SIZE_S  28
/* SDMMC_SDHOST_RX_WMARK : R/W ;bitpos:[26:16] ;default: 11'h0 ; */
/*description: FIFO threshold watermark level when receiving data to card.When FIFO data count
reaches greater than this number , DMA/FIFO request is raised. During end of pac
ket, request is generated regardless of threshold programming in order to comple
te any remaining data.In non-DMA mode, when receiver FIFO threshold (RXDR) inter
rupt is enabled, then interrupt is generated instead of DMA request.During end o
f packet, interrupt is not generated if threshold programming is larger than any
 remaining data. It is responsibility of host to read remaining bytes on seeing
Data Transfer Done interrupt.In DMA mode, at end of packet, even if remaining by
tes are less than threshold, DMA request does single transfers to flush out any
remaining bytes before Data Transfer Done interrupt is set..*/
#define SDMMC_SDHOST_RX_WMARK    0x000007FF
#define SDMMC_SDHOST_RX_WMARK_M  ((SDMMC_SDHOST_RX_WMARK_V)<<(SDMMC_SDHOST_RX_WMARK_S))
#define SDMMC_SDHOST_RX_WMARK_V  0x7FF
#define SDMMC_SDHOST_RX_WMARK_S  16
/* SDMMC_SDHOST_TX_WMARK : R/W ;bitpos:[11:0] ;default: 12'h0 ; */
/*description: FIFO threshold watermark level when transmitting data to card. When FIFO data co
unt is less than or equal to this number, DMA/FIFO request is raised. If Interru
pt is enabled, then interrupt  occurs. During end of packet, request or interrup
t is generated, regardless of threshold programming.In non-DMA mode, when transm
it FIFO threshold (TXDR) interrupt is enabled, then interrupt is generated inste
ad of DMA request. During end of packet, on last interrupt, host is responsible
for filling FIFO with only required remaining bytes (not before FIFO is full or
after CIU completes data transfers, because FIFO may not be empty).  In DMA mode
, at end of packet, if last transfer is less than burst  size, DMA controller do
es single cycles until required bytes are  transferred..*/
#define SDMMC_SDHOST_TX_WMARK    0x00000FFF
#define SDMMC_SDHOST_TX_WMARK_M  ((SDMMC_SDHOST_TX_WMARK_V)<<(SDMMC_SDHOST_TX_WMARK_S))
#define SDMMC_SDHOST_TX_WMARK_V  0xFFF
#define SDMMC_SDHOST_TX_WMARK_S  0

#define SDMMC_SDHOST_CDETECT_REG          (DR_REG_SDMMC_BASE + 0x50)
/* SDMMC_SDHOST_CARD_DETECT_N : RO ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Value on sdhost_card_detect_n input ports (1 bit per card), read-only bits. 0 re
presents presence of card. Only NUM_CARDS number of bits are implemented..*/
#define SDMMC_SDHOST_CARD_DETECT_N    0x00000003
#define SDMMC_SDHOST_CARD_DETECT_N_M  ((SDMMC_SDHOST_CARD_DETECT_N_V)<<(SDMMC_SDHOST_CARD_DETECT_N_S))
#define SDMMC_SDHOST_CARD_DETECT_N_V  0x3
#define SDMMC_SDHOST_CARD_DETECT_N_S  0

#define SDMMC_SDHOST_WRTPRT_REG          (DR_REG_SDMMC_BASE + 0x54)
/* SDMMC_SDHOST_WRITE_PROTECT : RO ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Value on sdhost_card_write_prt input ports (1 bit per card). 1 represents write
protection. Only NUM_CARDS number of bits are implemented..*/
#define SDMMC_SDHOST_WRITE_PROTECT    0x00000003
#define SDMMC_SDHOST_WRITE_PROTECT_M  ((SDMMC_SDHOST_WRITE_PROTECT_V)<<(SDMMC_SDHOST_WRITE_PROTECT_S))
#define SDMMC_SDHOST_WRITE_PROTECT_V  0x3
#define SDMMC_SDHOST_WRITE_PROTECT_S  0

#define SDMMC_SDHOST_TCBCNT_REG          (DR_REG_SDMMC_BASE + 0x5C)
/* SDMMC_SDHOST_TCBCNT_REG : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Number of bytes transferred by CIU unit to card..*/
#define SDMMC_SDHOST_TCBCNT_REG    0xFFFFFFFF
#define SDMMC_SDHOST_TCBCNT_REG_M  ((SDMMC_SDHOST_TCBCNT_REG_V)<<(SDMMC_SDHOST_TCBCNT_REG_S))
#define SDMMC_SDHOST_TCBCNT_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_TCBCNT_REG_S  0

#define SDMMC_SDHOST_TBBCNT_REG          (DR_REG_SDMMC_BASE + 0x60)
/* SDMMC_SDHOST_TBBCNT_REG : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Number of bytes transferred between Host/DMA memory and BIU FIFO..*/
#define SDMMC_SDHOST_TBBCNT_REG    0xFFFFFFFF
#define SDMMC_SDHOST_TBBCNT_REG_M  ((SDMMC_SDHOST_TBBCNT_REG_V)<<(SDMMC_SDHOST_TBBCNT_REG_S))
#define SDMMC_SDHOST_TBBCNT_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_TBBCNT_REG_S  0

#define SDMMC_SDHOST_DEBNCE_REG          (DR_REG_SDMMC_BASE + 0x64)
/* SDMMC_SDHOST_DEBOUNCE_COUNT : R/W ;bitpos:[23:0] ;default: 24'h0 ; */
/*description: Number of host clocks (clk) used by debounce filter logic. The typical debounce
time is 5 \verb+~+ 25 ms to prevent the card instability when the card is insert
ed or removed..*/
#define SDMMC_SDHOST_DEBOUNCE_COUNT    0x00FFFFFF
#define SDMMC_SDHOST_DEBOUNCE_COUNT_M  ((SDMMC_SDHOST_DEBOUNCE_COUNT_V)<<(SDMMC_SDHOST_DEBOUNCE_COUNT_S))
#define SDMMC_SDHOST_DEBOUNCE_COUNT_V  0xFFFFFF
#define SDMMC_SDHOST_DEBOUNCE_COUNT_S  0

#define SDMMC_SDHOST_USRID_REG          (DR_REG_SDMMC_BASE + 0x68)
/* SDMMC_SDHOST_USRID_REG : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: User identification register, value set by user. Can also be used as a scratchpa
d register by user..*/
#define SDMMC_SDHOST_USRID_REG    0xFFFFFFFF
#define SDMMC_SDHOST_USRID_REG_M  ((SDMMC_SDHOST_USRID_REG_V)<<(SDMMC_SDHOST_USRID_REG_S))
#define SDMMC_SDHOST_USRID_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_USRID_REG_S  0

#define SDMMC_SDHOST_VERID_REG          (DR_REG_SDMMC_BASE + 0x6C)
/* SDMMC_SDHOST_VERSIONID_REG : RO ;bitpos:[31:0] ;default: 32'h5432270a ; */
/*description: Hardware version register. Can also be read by fireware..*/
#define SDMMC_SDHOST_VERSIONID_REG    0xFFFFFFFF
#define SDMMC_SDHOST_VERSIONID_REG_M  ((SDMMC_SDHOST_VERSIONID_REG_V)<<(SDMMC_SDHOST_VERSIONID_REG_S))
#define SDMMC_SDHOST_VERSIONID_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_VERSIONID_REG_S  0

#define SDMMC_SDHOST_HCON_REG          (DR_REG_SDMMC_BASE + 0x70)
/* SDMMC_SDHOST_NUM_CLK_DIV_REG : RO ;bitpos:[25:24] ;default: 2'h3 ; */
/*description: Have 4 clk divider in design ..*/
#define SDMMC_SDHOST_NUM_CLK_DIV_REG    0x00000003
#define SDMMC_SDHOST_NUM_CLK_DIV_REG_M  ((SDMMC_SDHOST_NUM_CLK_DIV_REG_V)<<(SDMMC_SDHOST_NUM_CLK_DIV_REG_S))
#define SDMMC_SDHOST_NUM_CLK_DIV_REG_V  0x3
#define SDMMC_SDHOST_NUM_CLK_DIV_REG_S  24
/* SDMMC_SDHOST_HOLD_REG : RO ;bitpos:[22] ;default: 1'h1 ; */
/*description: Have a hold regiser in data path ..*/
#define SDMMC_SDHOST_HOLD_REG    (BIT(22))
#define SDMMC_SDHOST_HOLD_REG_M  (BIT(22))
#define SDMMC_SDHOST_HOLD_REG_V  0x1
#define SDMMC_SDHOST_HOLD_REG_S  22
/* SDMMC_SDHOST_RAM_INDISE_REG : RO ;bitpos:[21] ;default: 1'h0 ; */
/*description: Inside RAM in SDMMC module..*/
#define SDMMC_SDHOST_RAM_INDISE_REG    (BIT(21))
#define SDMMC_SDHOST_RAM_INDISE_REG_M  (BIT(21))
#define SDMMC_SDHOST_RAM_INDISE_REG_V  0x1
#define SDMMC_SDHOST_RAM_INDISE_REG_S  21
/* SDMMC_SDHOST_DMA_WIDTH_REG : RO ;bitpos:[20:18] ;default: 3'h1 ; */
/*description: DMA data witdth is 32..*/
#define SDMMC_SDHOST_DMA_WIDTH_REG    0x00000007
#define SDMMC_SDHOST_DMA_WIDTH_REG_M  ((SDMMC_SDHOST_DMA_WIDTH_REG_V)<<(SDMMC_SDHOST_DMA_WIDTH_REG_S))
#define SDMMC_SDHOST_DMA_WIDTH_REG_V  0x7
#define SDMMC_SDHOST_DMA_WIDTH_REG_S  18
/* SDMMC_SDHOST_ADDR_WIDTH_REG : RO ;bitpos:[15:10] ;default: 6'h13 ; */
/*description: Register address width is 32..*/
#define SDMMC_SDHOST_ADDR_WIDTH_REG    0x0000003F
#define SDMMC_SDHOST_ADDR_WIDTH_REG_M  ((SDMMC_SDHOST_ADDR_WIDTH_REG_V)<<(SDMMC_SDHOST_ADDR_WIDTH_REG_S))
#define SDMMC_SDHOST_ADDR_WIDTH_REG_V  0x3F
#define SDMMC_SDHOST_ADDR_WIDTH_REG_S  10
/* SDMMC_SDHOST_DATA_WIDTH_REG : RO ;bitpos:[9:7] ;default: 3'h1 ; */
/*description: Regisger data widht is 32..*/
#define SDMMC_SDHOST_DATA_WIDTH_REG    0x00000007
#define SDMMC_SDHOST_DATA_WIDTH_REG_M  ((SDMMC_SDHOST_DATA_WIDTH_REG_V)<<(SDMMC_SDHOST_DATA_WIDTH_REG_S))
#define SDMMC_SDHOST_DATA_WIDTH_REG_V  0x7
#define SDMMC_SDHOST_DATA_WIDTH_REG_S  7
/* SDMMC_SDHOST_BUS_TYPE_REG : RO ;bitpos:[6] ;default: 1'h1 ; */
/*description: Register config is APB bus..*/
#define SDMMC_SDHOST_BUS_TYPE_REG    (BIT(6))
#define SDMMC_SDHOST_BUS_TYPE_REG_M  (BIT(6))
#define SDMMC_SDHOST_BUS_TYPE_REG_V  0x1
#define SDMMC_SDHOST_BUS_TYPE_REG_S  6
/* SDMMC_SDHOST_CARD_NUM_REG : RO ;bitpos:[5:1] ;default: 5'h1 ; */
/*description: Support card number is 2..*/
#define SDMMC_SDHOST_CARD_NUM_REG    0x0000001F
#define SDMMC_SDHOST_CARD_NUM_REG_M  ((SDMMC_SDHOST_CARD_NUM_REG_V)<<(SDMMC_SDHOST_CARD_NUM_REG_S))
#define SDMMC_SDHOST_CARD_NUM_REG_V  0x1F
#define SDMMC_SDHOST_CARD_NUM_REG_S  1
/* SDMMC_SDHOST_CARD_TYPE_REG : RO ;bitpos:[0] ;default: 1'h1 ; */
/*description: Hardware support SDIO and MMC..*/
#define SDMMC_SDHOST_CARD_TYPE_REG    (BIT(0))
#define SDMMC_SDHOST_CARD_TYPE_REG_M  (BIT(0))
#define SDMMC_SDHOST_CARD_TYPE_REG_V  0x1
#define SDMMC_SDHOST_CARD_TYPE_REG_S  0

#define SDMMC_SDHOST_UHS_REG          (DR_REG_SDMMC_BASE + 0x74)
/* SDMMC_SDHOST_DDR_REG : R/W ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: DDR mode selecton,1 bit for each card.; 0-Non-DDR mdoe.; 1-DDR mdoe..*/
#define SDMMC_SDHOST_DDR_REG    0x00000003
#define SDMMC_SDHOST_DDR_REG_M  ((SDMMC_SDHOST_DDR_REG_V)<<(SDMMC_SDHOST_DDR_REG_S))
#define SDMMC_SDHOST_DDR_REG_V  0x3
#define SDMMC_SDHOST_DDR_REG_S  16

#define SDMMC_SDHOST_RST_N_REG          (DR_REG_SDMMC_BASE + 0x78)
/* SDMMC_SDHOST_CARD_RESET : R/W ;bitpos:[1:0] ;default: 2'h1 ; */
/*description: Hardware reset.; 1: Active mode; ; 0: Reset. ; These bits cause the cards to ent
er pre-idle state, which requires them to be re-initialized. SDHOST_RST_CARD_RES
ET[0] should be set to 1'b0 to reset card0, SDHOST_RST_CARD_RESET[1] should be s
et to 1'b0 to reset card1..*/
#define SDMMC_SDHOST_CARD_RESET    0x00000003
#define SDMMC_SDHOST_CARD_RESET_M  ((SDMMC_SDHOST_CARD_RESET_V)<<(SDMMC_SDHOST_CARD_RESET_S))
#define SDMMC_SDHOST_CARD_RESET_V  0x3
#define SDMMC_SDHOST_CARD_RESET_S  0

#define SDMMC_SDHOST_BMOD_REG          (DR_REG_SDMMC_BASE + 0x80)
/* SDMMC_SDHOST_BMOD_PBL : R/W ;bitpos:[10:8] ;default: 3'h0 ; */
/*description: Programmable Burst Length. These bits indicate the maximum number of beats to be
 performed in one IDMAC???Internal DMA Control???transaction. The IDMAC will alw
ays attempt to burst as specified in PBL each time it starts a burst transfer on
 the host bus. The permissible values are 1, 4, 8, 16, 32, 64, 128 and 256. This
 value is the mirror of MSIZE of FIFOTH register. In order to change this value,
 write the required value to FIFOTH register. This is an encode value as follows
:; 000: 1-byte transfer; ; 001: 4-byte transfer; ; 010: 8-byte transfer; ; 011:
16-byte transfer; ; 100: 32-byte transfer; ; 101: 64-byte transfer; ; 110: 128-b
yte transfer; ; 111: 256-byte transfer.; PBL is a read-only value and is applica
ble only for data access, it does not apply to descriptor access..*/
#define SDMMC_SDHOST_BMOD_PBL    0x00000007
#define SDMMC_SDHOST_BMOD_PBL_M  ((SDMMC_SDHOST_BMOD_PBL_V)<<(SDMMC_SDHOST_BMOD_PBL_S))
#define SDMMC_SDHOST_BMOD_PBL_V  0x7
#define SDMMC_SDHOST_BMOD_PBL_S  8
/* SDMMC_SDHOST_BMOD_DE : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: IDMAC Enable. When set, the IDMAC is enabled..*/
#define SDMMC_SDHOST_BMOD_DE    (BIT(7))
#define SDMMC_SDHOST_BMOD_DE_M  (BIT(7))
#define SDMMC_SDHOST_BMOD_DE_V  0x1
#define SDMMC_SDHOST_BMOD_DE_S  7
/* SDMMC_SDHOST_BMOD_FB : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Fixed Burst. Controls whether the AHB Master interface performs fixed burst tran
sfers or not. When set, the AHB will use only SINGLE, INCR4, INCR8 or INCR16 dur
ing start of normal burst transfers. When reset, the AHB will use SINGLE and INC
R burst transfer operations..*/
#define SDMMC_SDHOST_BMOD_FB    (BIT(1))
#define SDMMC_SDHOST_BMOD_FB_M  (BIT(1))
#define SDMMC_SDHOST_BMOD_FB_V  0x1
#define SDMMC_SDHOST_BMOD_FB_S  1
/* SDMMC_SDHOST_BMOD_SWR : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Software Reset. When set, the DMA Controller resets all its internal registers.
It is automatically cleared after one clock cycle..*/
#define SDMMC_SDHOST_BMOD_SWR    (BIT(0))
#define SDMMC_SDHOST_BMOD_SWR_M  (BIT(0))
#define SDMMC_SDHOST_BMOD_SWR_V  0x1
#define SDMMC_SDHOST_BMOD_SWR_S  0

#define SDMMC_SDHOST_PLDMND_REG          (DR_REG_SDMMC_BASE + 0x84)
/* SDMMC_SDHOST_PLDMND_PD : WO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Poll Demand. If the OWNER bit of a descriptor is not set, the FSM goes to the Su
spend state. The host needs to write any value into this register for the IDMAC
FSM to resume normal descriptor fetch operation. This is a write only ..*/
#define SDMMC_SDHOST_PLDMND_PD    0xFFFFFFFF
#define SDMMC_SDHOST_PLDMND_PD_M  ((SDMMC_SDHOST_PLDMND_PD_V)<<(SDMMC_SDHOST_PLDMND_PD_S))
#define SDMMC_SDHOST_PLDMND_PD_V  0xFFFFFFFF
#define SDMMC_SDHOST_PLDMND_PD_S  0

#define SDMMC_SDHOST_DBADDR_REG          (DR_REG_SDMMC_BASE + 0x88)
/* SDMMC_SDHOST_DBADDR_REG : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Start of Descriptor List. Contains the base address of the First Descriptor. The
 LSB bits [1:0] are ignored and taken as all-zero by the IDMAC internally. Hence
 these LSB bits may be treated as read-only..*/
#define SDMMC_SDHOST_DBADDR_REG    0xFFFFFFFF
#define SDMMC_SDHOST_DBADDR_REG_M  ((SDMMC_SDHOST_DBADDR_REG_V)<<(SDMMC_SDHOST_DBADDR_REG_S))
#define SDMMC_SDHOST_DBADDR_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_DBADDR_REG_S  0

#define SDMMC_SDHOST_IDSTS_REG          (DR_REG_SDMMC_BASE + 0x8C)
/* SDMMC_SDHOST_IDSTS_FSM : R/W ;bitpos:[16:13] ;default: 4'h0 ; */
/*description: DMAC FSM present state.; 0: DMA_IDLE (idle state); ; 1: DMA_SUSPEND (suspend sta
te); ; 2: DESC_RD (descriptor reading state); ; 3: DESC_CHK (descriptor checking
 state); ; 4: DMA_RD_REQ_WAIT (read-data request waiting state);; 5: DMA_WR_REQ_
WAIT (write-data request waiting state); ; 6: DMA_RD (data-read state); ; 7: DMA
_WR (data-write state); ; 8: DESC_CLOSE (descriptor close state)..*/
#define SDMMC_SDHOST_IDSTS_FSM    0x0000000F
#define SDMMC_SDHOST_IDSTS_FSM_M  ((SDMMC_SDHOST_IDSTS_FSM_V)<<(SDMMC_SDHOST_IDSTS_FSM_S))
#define SDMMC_SDHOST_IDSTS_FSM_V  0xF
#define SDMMC_SDHOST_IDSTS_FSM_S  13
/* SDMMC_SDHOST_IDSTS_FBE_CODE : R/W ;bitpos:[12:10] ;default: 3'h0 ; */
/*description: Fatal Bus Error Code. Indicates the type of error that caused a Bus Error. Valid
 only when the Fatal Bus Error bit IDSTS[2] is set. This field does not generate
 an interrupt.; 001: Host Abort received during transmission;; 010: Host Abort r
eceived during reception;; Others: Reserved..*/
#define SDMMC_SDHOST_IDSTS_FBE_CODE    0x00000007
#define SDMMC_SDHOST_IDSTS_FBE_CODE_M  ((SDMMC_SDHOST_IDSTS_FBE_CODE_V)<<(SDMMC_SDHOST_IDSTS_FBE_CODE_S))
#define SDMMC_SDHOST_IDSTS_FBE_CODE_V  0x7
#define SDMMC_SDHOST_IDSTS_FBE_CODE_S  10
/* SDMMC_SDHOST_IDSTS_AIS : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Abnormal Interrupt Summary. Logical OR of the following: IDSTS[2] : Fatal Bus In
terrupt, IDSTS[4] : DU bit Interrupt. Only unmasked bits affect this bit. This i
s a sticky bit and must be cleared each time a corresponding bit that causes AIS
 to be set is cleared. Writing 1 clears this bit..*/
#define SDMMC_SDHOST_IDSTS_AIS    (BIT(9))
#define SDMMC_SDHOST_IDSTS_AIS_M  (BIT(9))
#define SDMMC_SDHOST_IDSTS_AIS_V  0x1
#define SDMMC_SDHOST_IDSTS_AIS_S  9
/* SDMMC_SDHOST_IDSTS_NIS : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Normal Interrupt Summary. Logical OR of the following: IDSTS[0] : Transmit Inter
rupt, IDSTS[1] : Receive Interrupt. Only unmasked bits affect this bit. This is
a sticky bit and must be cleared each time a corresponding bit that causes NIS t
o be set is cleared. Writing 1 clears this bit..*/
#define SDMMC_SDHOST_IDSTS_NIS    (BIT(8))
#define SDMMC_SDHOST_IDSTS_NIS_M  (BIT(8))
#define SDMMC_SDHOST_IDSTS_NIS_V  0x1
#define SDMMC_SDHOST_IDSTS_NIS_S  8
/* SDMMC_SDHOST_IDSTS_CES : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: Card Error Summary. Indicates the status of the transaction to/from the card, al
so present in RINTSTS. Indicates the logical OR of the following bits:; EBE : En
d Bit Error; ; RTO : Response Timeout/Boot Ack Timeout; ; RCRC : Response CRC; ;
 SBE : Start Bit Error; ; DRTO : Data Read Timeout/BDS timeout; ; DCRC : Data CR
C for Receive; ; RE : Response Error.; Writing 1 clears this bit. The abort cond
ition of the IDMAC depends on the setting of this CES bit. If the CES bit is ena
bled, then the IDMAC aborts on a response error..*/
#define SDMMC_SDHOST_IDSTS_CES    (BIT(5))
#define SDMMC_SDHOST_IDSTS_CES_M  (BIT(5))
#define SDMMC_SDHOST_IDSTS_CES_V  0x1
#define SDMMC_SDHOST_IDSTS_CES_S  5
/* SDMMC_SDHOST_IDSTS_DU : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Descriptor Unavailable Interrupt. This bit is set when the descriptor is unavail
able due to OWNER bit = 0 (DES0[31] = 0). Writing 1 clears this bit..*/
#define SDMMC_SDHOST_IDSTS_DU    (BIT(4))
#define SDMMC_SDHOST_IDSTS_DU_M  (BIT(4))
#define SDMMC_SDHOST_IDSTS_DU_V  0x1
#define SDMMC_SDHOST_IDSTS_DU_S  4
/* SDMMC_SDHOST_IDSTS_FBE : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Fatal Bus Error Interrupt. Indicates that a Bus Error occurred (IDSTS[12:10]) .
When this bit is set, the DMA disables all its bus accesses. Writing 1 clears th
is bit..*/
#define SDMMC_SDHOST_IDSTS_FBE    (BIT(2))
#define SDMMC_SDHOST_IDSTS_FBE_M  (BIT(2))
#define SDMMC_SDHOST_IDSTS_FBE_V  0x1
#define SDMMC_SDHOST_IDSTS_FBE_S  2
/* SDMMC_SDHOST_IDSTS_RI : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Receive Interrupt. Indicates the completion of data reception for a descriptor.
Writing 1 clears this bit..*/
#define SDMMC_SDHOST_IDSTS_RI    (BIT(1))
#define SDMMC_SDHOST_IDSTS_RI_M  (BIT(1))
#define SDMMC_SDHOST_IDSTS_RI_V  0x1
#define SDMMC_SDHOST_IDSTS_RI_S  1
/* SDMMC_SDHOST_IDSTS_TI : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Transmit Interrupt. Indicates that data transmission is finished for a descripto
r. Writing 1 clears this bit..*/
#define SDMMC_SDHOST_IDSTS_TI    (BIT(0))
#define SDMMC_SDHOST_IDSTS_TI_M  (BIT(0))
#define SDMMC_SDHOST_IDSTS_TI_V  0x1
#define SDMMC_SDHOST_IDSTS_TI_S  0

#define SDMMC_SDHOST_IDINTEN_REG          (DR_REG_SDMMC_BASE + 0x90)
/* SDMMC_SDHOST_IDINTEN_AI : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Abnormal Interrupt Summary Enable. When set, an abnormal interrupt is enabled. T
his bit enables the following bits:; IDINTEN[2]: Fatal Bus Error Interrupt;; IDI
NTEN[4]: DU Interrupt..*/
#define SDMMC_SDHOST_IDINTEN_AI    (BIT(9))
#define SDMMC_SDHOST_IDINTEN_AI_M  (BIT(9))
#define SDMMC_SDHOST_IDINTEN_AI_V  0x1
#define SDMMC_SDHOST_IDINTEN_AI_S  9
/* SDMMC_SDHOST_IDINTEN_NI : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Normal Interrupt Summary Enable. When set, a normal interrupt is enabled. When r
eset, a normal interrupt is disabled. This bit enables the following bits:; IDIN
TEN[0]: Transmit Interrupt;; IDINTEN[1]: Receive Interrupt..*/
#define SDMMC_SDHOST_IDINTEN_NI    (BIT(8))
#define SDMMC_SDHOST_IDINTEN_NI_M  (BIT(8))
#define SDMMC_SDHOST_IDINTEN_NI_V  0x1
#define SDMMC_SDHOST_IDINTEN_NI_S  8
/* SDMMC_SDHOST_IDINTEN_CES : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: Card Error summary Interrupt Enable. When set, it enables the Card Interrupt sum
mary..*/
#define SDMMC_SDHOST_IDINTEN_CES    (BIT(5))
#define SDMMC_SDHOST_IDINTEN_CES_M  (BIT(5))
#define SDMMC_SDHOST_IDINTEN_CES_V  0x1
#define SDMMC_SDHOST_IDINTEN_CES_S  5
/* SDMMC_SDHOST_IDINTEN_DU : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: Descriptor Unavailable Interrupt. When set along with Abnormal Interrupt Summary
 Enable, the DU interrupt is enabled..*/
#define SDMMC_SDHOST_IDINTEN_DU    (BIT(4))
#define SDMMC_SDHOST_IDINTEN_DU_M  (BIT(4))
#define SDMMC_SDHOST_IDINTEN_DU_V  0x1
#define SDMMC_SDHOST_IDINTEN_DU_S  4
/* SDMMC_SDHOST_IDINTEN_FBE : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Fatal Bus Error Enable. When set with Abnormal Interrupt Summary Enable, the Fat
al Bus Error Interrupt is enabled. When reset, Fatal Bus Error Enable Interrupt
is disabled..*/
#define SDMMC_SDHOST_IDINTEN_FBE    (BIT(2))
#define SDMMC_SDHOST_IDINTEN_FBE_M  (BIT(2))
#define SDMMC_SDHOST_IDINTEN_FBE_V  0x1
#define SDMMC_SDHOST_IDINTEN_FBE_S  2
/* SDMMC_SDHOST_IDINTEN_RI : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Receive Interrupt Enable. When set with Normal Interrupt Summary Enable, Receive
 Interrupt is enabled. When reset, Receive Interrupt is disabled..*/
#define SDMMC_SDHOST_IDINTEN_RI    (BIT(1))
#define SDMMC_SDHOST_IDINTEN_RI_M  (BIT(1))
#define SDMMC_SDHOST_IDINTEN_RI_V  0x1
#define SDMMC_SDHOST_IDINTEN_RI_S  1
/* SDMMC_SDHOST_IDINTEN_TI : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Transmit Interrupt Enable. When set with Normal Interrupt Summary Enable, Transm
it Interrupt is enabled. When reset, Transmit Interrupt is disabled..*/
#define SDMMC_SDHOST_IDINTEN_TI    (BIT(0))
#define SDMMC_SDHOST_IDINTEN_TI_M  (BIT(0))
#define SDMMC_SDHOST_IDINTEN_TI_V  0x1
#define SDMMC_SDHOST_IDINTEN_TI_S  0

#define SDMMC_SDHOST_DSCADDR_REG          (DR_REG_SDMMC_BASE + 0x94)
/* SDMMC_SDHOST_DSCADDR_REG : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Host Descriptor Address Pointer, updated by IDMAC during operation and cleared o
n reset. This register points to the start address of the current descriptor rea
d by the IDMAC..*/
#define SDMMC_SDHOST_DSCADDR_REG    0xFFFFFFFF
#define SDMMC_SDHOST_DSCADDR_REG_M  ((SDMMC_SDHOST_DSCADDR_REG_V)<<(SDMMC_SDHOST_DSCADDR_REG_S))
#define SDMMC_SDHOST_DSCADDR_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_DSCADDR_REG_S  0

#define SDMMC_SDHOST_BUFADDR_REG          (DR_REG_SDMMC_BASE + 0x98)
/* SDMMC_SDHOST_BUFADDR_REG : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Host Buffer Address Pointer, updated by IDMAC during operation and cleared on re
set. This register points to the current Data Buffer Address being accessed by t
he IDMAC..*/
#define SDMMC_SDHOST_BUFADDR_REG    0xFFFFFFFF
#define SDMMC_SDHOST_BUFADDR_REG_M  ((SDMMC_SDHOST_BUFADDR_REG_V)<<(SDMMC_SDHOST_BUFADDR_REG_S))
#define SDMMC_SDHOST_BUFADDR_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_BUFADDR_REG_S  0

#define SDMMC_SDHOST_CARDTHRCTL_REG          (DR_REG_SDMMC_BASE + 0x100)
/* SDMMC_SDHOST_CARDTHRESHOLD_REG : R/W ;bitpos:[31:16] ;default: 16'h0 ; */
/*description: The inside FIFO size is 512,This register is applicable when SDHOST_CARDERTHREN_
REG is set to 1 or SDHOST_CARDRDTHREN_REG set to 1..*/
#define SDMMC_SDHOST_CARDTHRESHOLD_REG    0x0000FFFF
#define SDMMC_SDHOST_CARDTHRESHOLD_REG_M  ((SDMMC_SDHOST_CARDTHRESHOLD_REG_V)<<(SDMMC_SDHOST_CARDTHRESHOLD_REG_S))
#define SDMMC_SDHOST_CARDTHRESHOLD_REG_V  0xFFFF
#define SDMMC_SDHOST_CARDTHRESHOLD_REG_S  16
/* SDMMC_SDHOST_CARDWRTHREN_REG : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Applicable when HS400 mode is enabled.; 1'b0-Card write Threshold disabled.; 1'b
1-Card write Threshold enabled..*/
#define SDMMC_SDHOST_CARDWRTHREN_REG    (BIT(2))
#define SDMMC_SDHOST_CARDWRTHREN_REG_M  (BIT(2))
#define SDMMC_SDHOST_CARDWRTHREN_REG_V  0x1
#define SDMMC_SDHOST_CARDWRTHREN_REG_S  2
/* SDMMC_SDHOST_CARDCLRINTEN_REG : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: Busy clear interrupt generation:; 1'b0-Busy clear interrypt disabled.; 1'b1-Busy
 clear interrypt enabled..*/
#define SDMMC_SDHOST_CARDCLRINTEN_REG    (BIT(1))
#define SDMMC_SDHOST_CARDCLRINTEN_REG_M  (BIT(1))
#define SDMMC_SDHOST_CARDCLRINTEN_REG_V  0x1
#define SDMMC_SDHOST_CARDCLRINTEN_REG_S  1
/* SDMMC_SDHOST_CARDRDTHREN_REG : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: Card read threshold enable.; 1'b0-Card read threshold disabled.; 1'b1-Card read
threshold enabled..*/
#define SDMMC_SDHOST_CARDRDTHREN_REG    (BIT(0))
#define SDMMC_SDHOST_CARDRDTHREN_REG_M  (BIT(0))
#define SDMMC_SDHOST_CARDRDTHREN_REG_V  0x1
#define SDMMC_SDHOST_CARDRDTHREN_REG_S  0

#define SDMMC_SDHOST_EMMCDDR_REG          (DR_REG_SDMMC_BASE + 0x10C)
/* SDMMC_SDHOST_HS400_MODE_REG : R/W ;bitpos:[31] ;default: 1'h0 ; */
/*description: Set 1 to enable HS400 mode..*/
#define SDMMC_SDHOST_HS400_MODE_REG    (BIT(31))
#define SDMMC_SDHOST_HS400_MODE_REG_M  (BIT(31))
#define SDMMC_SDHOST_HS400_MODE_REG_V  0x1
#define SDMMC_SDHOST_HS400_MODE_REG_S  31
/* SDMMC_SDHOST_HALFSTARTBIT_REG : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Control for start bit detection mechanism duration of start bit.Each bit refers
to one slot.Set this bit to 1 for eMMC4.5 and above,set to 0 for SD applications
.For eMMC4.5,start bit can be:; 1'b0-Full cycle.; 1'b1-less than one full cycle..*/
#define SDMMC_SDHOST_HALFSTARTBIT_REG    0x00000003
#define SDMMC_SDHOST_HALFSTARTBIT_REG_M  ((SDMMC_SDHOST_HALFSTARTBIT_REG_V)<<(SDMMC_SDHOST_HALFSTARTBIT_REG_S))
#define SDMMC_SDHOST_HALFSTARTBIT_REG_V  0x3
#define SDMMC_SDHOST_HALFSTARTBIT_REG_S  0

#define SDMMC_SDHOST_ENSHIFT_REG          (DR_REG_SDMMC_BASE + 0x110)
/* SDMMC_SDHOST_ENABLE_SHIFT_REG : R/W ;bitpos:[3:0] ;default: 4'h0 ; */
/*description: Control for the amount of phase shift provided on the default enables in the des
ign.Two bits assigned for each card.; 2'b00-Default phase shift.; 2'b01-Enables
shifted to next immediate positive edge.; 2'b10-Enables shifted to next immediat
e negative edge.; 2'b11-Reserved..*/
#define SDMMC_SDHOST_ENABLE_SHIFT_REG    0x0000000F
#define SDMMC_SDHOST_ENABLE_SHIFT_REG_M  ((SDMMC_SDHOST_ENABLE_SHIFT_REG_V)<<(SDMMC_SDHOST_ENABLE_SHIFT_REG_S))
#define SDMMC_SDHOST_ENABLE_SHIFT_REG_V  0xF
#define SDMMC_SDHOST_ENABLE_SHIFT_REG_S  0

#define SDMMC_SDHOST_BUFFIFO_REG          (DR_REG_SDMMC_BASE + 0x200)
/* SDMMC_SDHOST_BUFFIFO_REG : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: CPU write and read transmit data by FIFO. This register points to the current Da
ta FIFO ..*/
#define SDMMC_SDHOST_BUFFIFO_REG    0xFFFFFFFF
#define SDMMC_SDHOST_BUFFIFO_REG_M  ((SDMMC_SDHOST_BUFFIFO_REG_V)<<(SDMMC_SDHOST_BUFFIFO_REG_S))
#define SDMMC_SDHOST_BUFFIFO_REG_V  0xFFFFFFFF
#define SDMMC_SDHOST_BUFFIFO_REG_S  0

#define SDMMC_SDHOST_CLK_EDGE_SEL_REG          (DR_REG_SDMMC_BASE + 0x800)
/* SDMMC_SDHOST_ULTRA_HIGH_SPEED_MODE : R/W ;bitpos:[24] ;default: 1'b0 ; */
/*description: Enable ultra high speed mode, use dll to generate clk..*/
#define SDMMC_SDHOST_ULTRA_HIGH_SPEED_MODE    (BIT(24))
#define SDMMC_SDHOST_ULTRA_HIGH_SPEED_MODE_M  (BIT(24))
#define SDMMC_SDHOST_ULTRA_HIGH_SPEED_MODE_V  0x1
#define SDMMC_SDHOST_ULTRA_HIGH_SPEED_MODE_S  24
/* SDMMC_SDHOST_CCLK_EN : R/W ;bitpos:[23] ;default: 1'b1 ; */
/*description: Sdio clock enable..*/
#define SDMMC_SDHOST_CCLK_EN    (BIT(23))
#define SDMMC_SDHOST_CCLK_EN_M  (BIT(23))
#define SDMMC_SDHOST_CCLK_EN_V  0x1
#define SDMMC_SDHOST_CCLK_EN_S  23
/* SDMMC_SDHOST_ESD_MODE : R/W ;bitpos:[22] ;default: 1'b0 ; */
/*description: Enable esd mode..*/
#define SDMMC_SDHOST_ESD_MODE    (BIT(22))
#define SDMMC_SDHOST_ESD_MODE_M  (BIT(22))
#define SDMMC_SDHOST_ESD_MODE_V  0x1
#define SDMMC_SDHOST_ESD_MODE_S  22
/* SDMMC_SDHOST_ESDIO_MODE : R/W ;bitpos:[21] ;default: 1'b0 ; */
/*description: Enable esdio mode..*/
#define SDMMC_SDHOST_ESDIO_MODE    (BIT(21))
#define SDMMC_SDHOST_ESDIO_MODE_M  (BIT(21))
#define SDMMC_SDHOST_ESDIO_MODE_V  0x1
#define SDMMC_SDHOST_ESDIO_MODE_S  21
/* SDMMC_SDHOST_CCLLKIN_EDGE_N : R/W ;bitpos:[20:17] ;default: 4'b1 ; */
/*description: The clock division of cclk_in..*/
#define SDMMC_SDHOST_CCLLKIN_EDGE_N    0x0000000F
#define SDMMC_SDHOST_CCLLKIN_EDGE_N_M  ((SDMMC_SDHOST_CCLLKIN_EDGE_N_V)<<(SDMMC_SDHOST_CCLLKIN_EDGE_N_S))
#define SDMMC_SDHOST_CCLLKIN_EDGE_N_V  0xF
#define SDMMC_SDHOST_CCLLKIN_EDGE_N_S  17
/* SDMMC_SDHOST_CCLLKIN_EDGE_L : R/W ;bitpos:[16:13] ;default: 4'b0 ; */
/*description: The low level of the divider clock. The value should be larger than CCLKIN_EDGE_
H..*/
#define SDMMC_SDHOST_CCLLKIN_EDGE_L    0x0000000F
#define SDMMC_SDHOST_CCLLKIN_EDGE_L_M  ((SDMMC_SDHOST_CCLLKIN_EDGE_L_V)<<(SDMMC_SDHOST_CCLLKIN_EDGE_L_S))
#define SDMMC_SDHOST_CCLLKIN_EDGE_L_V  0xF
#define SDMMC_SDHOST_CCLLKIN_EDGE_L_S  13
/* SDMMC_SDHOST_CCLLKIN_EDGE_H : R/W ;bitpos:[12:9] ;default: 4'b1 ; */
/*description: The high level of the divider clock. The value should be smaller than CCLKIN_EDG
E_L..*/
#define SDMMC_SDHOST_CCLLKIN_EDGE_H    0x0000000F
#define SDMMC_SDHOST_CCLLKIN_EDGE_H_M  ((SDMMC_SDHOST_CCLLKIN_EDGE_H_V)<<(SDMMC_SDHOST_CCLLKIN_EDGE_H_S))
#define SDMMC_SDHOST_CCLLKIN_EDGE_H_V  0xF
#define SDMMC_SDHOST_CCLLKIN_EDGE_H_S  9
/* SDMMC_SDHOST_CCLKIN_EDGE_SLF_SEL : R/W ;bitpos:[8:6] ;default: 3'b0 ; */
/*description: It's used to select the clock phase of the internal signal from phase 0, phase 9
0, phase 180, phase 270..*/
#define SDMMC_SDHOST_CCLKIN_EDGE_SLF_SEL    0x00000007
#define SDMMC_SDHOST_CCLKIN_EDGE_SLF_SEL_M  ((SDMMC_SDHOST_CCLKIN_EDGE_SLF_SEL_V)<<(SDMMC_SDHOST_CCLKIN_EDGE_SLF_SEL_S))
#define SDMMC_SDHOST_CCLKIN_EDGE_SLF_SEL_V  0x7
#define SDMMC_SDHOST_CCLKIN_EDGE_SLF_SEL_S  6
/* SDMMC_SDHOST_CCLKIN_EDGE_SAM_SEL : R/W ;bitpos:[5:3] ;default: 3'b0 ; */
/*description: It's used to select the clock phase of the input signal from phase 0, phase 90,
phase 180, phase 270..*/
#define SDMMC_SDHOST_CCLKIN_EDGE_SAM_SEL    0x00000007
#define SDMMC_SDHOST_CCLKIN_EDGE_SAM_SEL_M  ((SDMMC_SDHOST_CCLKIN_EDGE_SAM_SEL_V)<<(SDMMC_SDHOST_CCLKIN_EDGE_SAM_SEL_S))
#define SDMMC_SDHOST_CCLKIN_EDGE_SAM_SEL_V  0x7
#define SDMMC_SDHOST_CCLKIN_EDGE_SAM_SEL_S  3
/* SDMMC_SDHOST_CCLKIN_EDGE_DRV_SEL : R/W ;bitpos:[2:0] ;default: 3'b0 ; */
/*description: It's used to select the clock phase of the output signal from phase 0, phase 90,
 phase 180, phase 270..*/
#define SDMMC_SDHOST_CCLKIN_EDGE_DRV_SEL    0x00000007
#define SDMMC_SDHOST_CCLKIN_EDGE_DRV_SEL_M  ((SDMMC_SDHOST_CCLKIN_EDGE_DRV_SEL_V)<<(SDMMC_SDHOST_CCLKIN_EDGE_DRV_SEL_S))
#define SDMMC_SDHOST_CCLKIN_EDGE_DRV_SEL_V  0x7
#define SDMMC_SDHOST_CCLKIN_EDGE_DRV_SEL_S  0

#define SDMMC_SDHOST_RAW_INTS_REG          (DR_REG_SDMMC_BASE + 0x804)
/* SDMMC_SDHOST_RAW_INTS : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: It indicates raw ints..*/
#define SDMMC_SDHOST_RAW_INTS    0xFFFFFFFF
#define SDMMC_SDHOST_RAW_INTS_M  ((SDMMC_SDHOST_RAW_INTS_V)<<(SDMMC_SDHOST_RAW_INTS_S))
#define SDMMC_SDHOST_RAW_INTS_V  0xFFFFFFFF
#define SDMMC_SDHOST_RAW_INTS_S  0

#define SDMMC_SDHOST_DLL_CLK_CONF_REG          (DR_REG_SDMMC_BASE + 0x808)
/* SDMMC_SDHOST_DLL_CCLK_IN_SAM_PHASE : R/W ;bitpos:[20:15] ;default: 6'b0 ; */
/*description: It's used to control the phase of cclk_in_sam when ULTRA_HIGH_SPEED_MODE==1..*/
#define SDMMC_SDHOST_DLL_CCLK_IN_SAM_PHASE    0x0000003F
#define SDMMC_SDHOST_DLL_CCLK_IN_SAM_PHASE_M  ((SDMMC_SDHOST_DLL_CCLK_IN_SAM_PHASE_V)<<(SDMMC_SDHOST_DLL_CCLK_IN_SAM_PHASE_S))
#define SDMMC_SDHOST_DLL_CCLK_IN_SAM_PHASE_V  0x3F
#define SDMMC_SDHOST_DLL_CCLK_IN_SAM_PHASE_S  15
/* SDMMC_SDHOST_DLL_CCLK_IN_DRV_PHASE : R/W ;bitpos:[14:9] ;default: 6'b0 ; */
/*description: It's used to control the phase of cclk_in_drv when ULTRA_HIGH_SPEED_MODE==1..*/
#define SDMMC_SDHOST_DLL_CCLK_IN_DRV_PHASE    0x0000003F
#define SDMMC_SDHOST_DLL_CCLK_IN_DRV_PHASE_M  ((SDMMC_SDHOST_DLL_CCLK_IN_DRV_PHASE_V)<<(SDMMC_SDHOST_DLL_CCLK_IN_DRV_PHASE_S))
#define SDMMC_SDHOST_DLL_CCLK_IN_DRV_PHASE_V  0x3F
#define SDMMC_SDHOST_DLL_CCLK_IN_DRV_PHASE_S  9
/* SDMMC_SDHOST_DLL_CCLK_IN_SLF_PHASE : R/W ;bitpos:[8:3] ;default: 6'b0 ; */
/*description: It's used to control the phase of cclk_in_slf when ULTRA_HIGH_SPEED_MODE==1..*/
#define SDMMC_SDHOST_DLL_CCLK_IN_SLF_PHASE    0x0000003F
#define SDMMC_SDHOST_DLL_CCLK_IN_SLF_PHASE_M  ((SDMMC_SDHOST_DLL_CCLK_IN_SLF_PHASE_V)<<(SDMMC_SDHOST_DLL_CCLK_IN_SLF_PHASE_S))
#define SDMMC_SDHOST_DLL_CCLK_IN_SLF_PHASE_V  0x3F
#define SDMMC_SDHOST_DLL_CCLK_IN_SLF_PHASE_S  3
/* SDMMC_SDHOST_DLL_CCLK_IN_SAM_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Clock enable of cclk_in_sam when ULTRA_HIGH_SPEED_MODE==1..*/
#define SDMMC_SDHOST_DLL_CCLK_IN_SAM_EN    (BIT(2))
#define SDMMC_SDHOST_DLL_CCLK_IN_SAM_EN_M  (BIT(2))
#define SDMMC_SDHOST_DLL_CCLK_IN_SAM_EN_V  0x1
#define SDMMC_SDHOST_DLL_CCLK_IN_SAM_EN_S  2
/* SDMMC_SDHOST_DLL_CCLK_IN_DRV_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Clock enable of cclk_in_drv when ULTRA_HIGH_SPEED_MODE==1..*/
#define SDMMC_SDHOST_DLL_CCLK_IN_DRV_EN    (BIT(1))
#define SDMMC_SDHOST_DLL_CCLK_IN_DRV_EN_M  (BIT(1))
#define SDMMC_SDHOST_DLL_CCLK_IN_DRV_EN_V  0x1
#define SDMMC_SDHOST_DLL_CCLK_IN_DRV_EN_S  1
/* SDMMC_SDHOST_DLL_CCLK_IN_SLF_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Clock enable of cclk_in_slf when ULTRA_HIGH_SPEED_MODE==1..*/
#define SDMMC_SDHOST_DLL_CCLK_IN_SLF_EN    (BIT(0))
#define SDMMC_SDHOST_DLL_CCLK_IN_SLF_EN_M  (BIT(0))
#define SDMMC_SDHOST_DLL_CCLK_IN_SLF_EN_V  0x1
#define SDMMC_SDHOST_DLL_CCLK_IN_SLF_EN_S  0

#define SDMMC_SDHOST_DLL_CONF_REG          (DR_REG_SDMMC_BASE + 0x80C)
/* SDMMC_SDHOST_DLL_CAL_END : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: 1 means calibration finished..*/
#define SDMMC_SDHOST_DLL_CAL_END    (BIT(1))
#define SDMMC_SDHOST_DLL_CAL_END_M  (BIT(1))
#define SDMMC_SDHOST_DLL_CAL_END_V  0x1
#define SDMMC_SDHOST_DLL_CAL_END_S  1
/* SDMMC_SDHOST_DLL_CAL_STOP : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set 1 to stop calibration..*/
#define SDMMC_SDHOST_DLL_CAL_STOP    (BIT(0))
#define SDMMC_SDHOST_DLL_CAL_STOP_M  (BIT(0))
#define SDMMC_SDHOST_DLL_CAL_STOP_V  0x1
#define SDMMC_SDHOST_DLL_CAL_STOP_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_SDMMC_REG_H_ */
