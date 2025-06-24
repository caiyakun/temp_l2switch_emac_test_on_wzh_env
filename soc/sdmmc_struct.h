/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_SDMMC_STRUCT_H_
#define _SOC_SDMMC_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t reg_controller_reset          :    1;  /*To reset controller, firmware should set this bit. This bit is auto-cleared after two AHB and two sdhost_cclk_in clock cycles.*/
            uint32_t reg_fifo_reset                :    1;  /*To reset FIFO, firmware should set bit to 1. This bit is auto-cleared after completion of reset operation.; Note: FIFO pointers will be out of reset after 2 cycles of system clocks in addition to synchronization delay (2 cycles of card clock), after the fifo_reset is cleared.*/
            uint32_t reg_dma_reset                 :    1;  /*To reset DMA interface, firmware should set bit to 1. This bit is auto-cleared after two AHB clocks.*/
            uint32_t reserved3                     :    1;  /*Reserved*/
            uint32_t reg_int_enable                :    1;  /*Global interrupt enable/disable bit. 0: Disable; 1: Enable.*/
            uint32_t reserved5                     :    1;  /*Reserved*/
            uint32_t reg_read_wait                 :    1;  /*For sending read-wait to SDIO cards.*/
            uint32_t reg_send_irq_response         :    1;  /*Bit automatically clears once response is sent. To wait for MMC card interrupts, host issues CMD40 and waits for interrupt response from MMC card(s). In the meantime, if host wants SD/MMC to exit waiting for interrupt state, it can set this bit, at which time SD/MMC command state-machine sends CMD40 response on bus and returns to idle state.*/
            uint32_t reg_abort_read_data           :    1;  /*After a suspend-command is issued during a read-operation, software polls the card to find when the suspend-event occurred. Once the suspend-event has occurred, software sets the bit which will reset the data state machine that is waiting for the next block of data. This bit is automatically cleared once the data state machine is reset to idle.*/
            uint32_t reg_send_ccsd                 :    1;  /*When set, SD/MMC sends CCSD to the CE-ATA device. Software sets this bit only if the current command is expecting CCS (that is, RW_BLK), and if interrupts are enabled for the CE-ATA device. Once the CCSD pattern is sent to the device, SD/MMC automatically clears the SDHOST_SEND_CCSD bit. It also sets the Command Done (CD) bit  in the SDHOST_RINTSTS_REG register, and generates an interrupt for the host, in case the Command Done interrupt is not masked. ; NOTE: Once the SDHOST_SEND_CCSD bit is set, it takes two card clock cycles to drive the CCSD on the CMD line. Due to this, within the boundary conditions the CCSD may be sent to the CE-ATA device, even if the device has signalled CCS.*/
            uint32_t reg_send_auto_stop_ccsd       :    1;  /*Always Set SDHOST_SEND_AUTO_STOP_CCSD and SDHOST_SEND_CCSD bits together; SDHOST_SEND_AUTO_STOP_CCSD should not be set independently of send_ccsd. When set, SD/MMC automatically sends an internally-generated STOP command (CMD12) to the CE-ATA device. After sending this internally-generated STOP command, the Auto Command Done (ACD) bit in SDHOST_RINTSTS_REG is set and an interrupt is generated for the host, in case the ACD interrupt is not masked. After sending the Command Completion Signal Disable (CCSD), SD/MMC automatically clears the  SDHOST_SEND_AUTO_STOP_CCSD bit.*/
            uint32_t reg_ceata_device_interrupt_status:    1;  /*Software should appropriately write to this bit after the power-on reset or any other reset to the CE-ATA device. After reset, the CE-ATA device's interrupt is usually disabled (nIEN = 1). If the host enables the CE-ATA device's interrupt, then software should set this bit.*/
            uint32_t reserved12                    :    12;  /*Reserved*/
            uint32_t reserved24                    :    1;  /*Reserved*/
            uint32_t reserved25                    :    7;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_ctrl;
    uint32_t reserved_4;
    union {
        struct {
            uint32_t reg_clk_divider0              :    8;  /*Clock divider0 value. Clock divisor is 2*n, where n = 0 bypasses the divider (divisor of 1). For example, a value of 1 means divided by 2*1 = 2, a value of 0xFF means divided by 2*255 = 510, and so on.*/
            uint32_t reg_clk_divider1              :    8;  /*Clock divider1 value. Clock divisor is 2*n, where n = 0 bypasses the divider (divisor of 1). For example, a value of 1 means divided by 2*1 = 2, a value of 0xFF means divided by 2*255 = 510, and so on.*/
            uint32_t reg_clk_divider2              :    8;  /*Clock divider2 value. Clock divisor is 2*n, where n = 0 bypasses the divider (divisor of 1). For example, a value of 1 means divided by 2*1 = 2, a value of 0xFF means divided by 2*255 = 510, and so on.*/
            uint32_t reg_clk_divider3              :    8;  /*Clock divider3 value. Clock divisor is 2*n, where n = 0 bypasses the divider (divisor of 1). For example, a value of 1 means divided by 2*1 = 2, a value of 0xFF means divided by 2*255 = 510, and so on.*/
        };
        uint32_t val;
    } sdhost_clkdiv;
    union {
        struct {
            uint32_t reg_clksrc_reg                :    4;  /*Clock divider source for two SD cards is supported. Each card has two bits assigned to it. For example, bit[1:0] are assigned for card 0, bit[3:2] are assigned for card 1. Card 0 maps and internally routes clock divider[0:3] outputs to cclk_out[1:0] pins, depending on bit value.; 00 : Clock divider 0;; 01 : Clock divider 1;; 10 : Clock divider 2;; 11 : Clock divider 3.*/
            uint32_t reserved4                     :    28;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_clksrc;
    union {
        struct {
            uint32_t reg_cclk_enable               :    2;  /*Clock-enable control for two SD card clocks and one MMC card clock is supported. One bit per card.; 0: Clock disabled;; 1: Clock enabled. */
            uint32_t reserved2                     :    14;  /*Reserved*/
            uint32_t reg_lp_enable                 :    2;  /*Disable clock when the card is in IDLE state. One bit per card.; 0: clock disabled;; 1: clock enabled. */
            uint32_t reserved18                    :    14;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_clkena;
    union {
        struct {
            uint32_t reg_response_timeout          :    8;  /*Response timeout value. Value is specified in terms of number of card output clocks, i.e., sdhost_cclk_out.*/
            uint32_t reg_data_timeout              :    24;  /*Value for card data read timeout. This value is also used for data starvation by host timeout. The timeout counter is started only after the card clock is stopped. This value is specified in number of card output clocks, i.e. sdhost_cclk_out of the selected card.; NOTE: The software timer should be used if the timeout value is in the order of 100 ms. In this case, read data timeout interrupt needs to be disabled. */
        };
        uint32_t val;
    } sdhost_tmout;
    union {
        struct {
            uint32_t reg_card_width4               :    2;  /*One bit per card indicates if card is 1-bit or 4-bit mode.; 0: 1-bit mode;; 1: 4-bit mode.; Bit[1:0] correspond to card[1:0] respectively. */
            uint32_t reserved2                     :    14;  /*Reserved*/
            uint32_t reg_card_width8               :    2;  /*One bit per card indicates if card is in 8-bit mode.; 0: Non 8-bit mode;; 1: 8-bit mode.; Bit[17:16] correspond to card[1:0] respectively. */
            uint32_t reserved18                    :    14;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_ctype;
    union {
        struct {
            uint32_t reg_block_size                :    16;  /*Block size.*/
            uint32_t reserved16                    :    16;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_blksiz;
    uint32_t sdhost_bytcnt;
    union {
        struct {
            uint32_t reg_int_mask                  :    16;  /*These bits used to mask unwanted interrupts. A value of 0 masks interrupt, and a value of 1 enables the interrupt.; Bit 15 (EBE): End-bit error/no CRC error;; Bit 14 (ACD): Auto command done;; Bit 13 (SBE/BCI): Rx Start Bit Error;; Bit 12 (HLE): Hardware locked write error;; Bit 11 (FRUN): FIFO underrun/overrun error;; Bit 10 (HTO): Data starvation-by-host timeout;; Bit 9 (DRTO): Data read timeout;; Bit 8 (RTO): Response timeout; ; Bit 7 (DCRC): Data CRC error; ; Bit 6 (RCRC): Response CRC error; ; Bit 5 (RXDR): Receive FIFO data request; ; Bit 4 (TXDR): Transmit FIFO data request; ; Bit 3 (DTO): Data transfer over; ; Bit 2 (CD): Command done; ; Bit 1 (RE): Response error;; Bit 0 (CD): Card detect.  */
            uint32_t reg_sdio_int_mask             :    2;  /*SDIO interrupt mask, one bit for each card. Bit[17:16] correspond to card[15:0] respectively. When masked, SDIO interrupt detection for that card is disabled. 0 masks an interrupt, and 1 enables an interrupt.*/
            uint32_t reserved18                    :    14;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_intmask;
    uint32_t sdhost_cmdarg;
    union {
        struct {
            uint32_t reg_cmd_index                 :    6;  /*Command index.*/
            uint32_t reg_response_expect           :    1;  /*0: No response expected from card; 1: Response expected from card.*/
            uint32_t reg_response_length           :    1;  /*0: Short response expected from card; 1: Long response expected from card.*/
            uint32_t reg_check_response_crc        :    1;  /*0: Do not check; 1: Check response CRC.; Some of command responses do not return valid CRC bits. Software should disable CRC checks for those commands in order to disable CRC checking by controller.*/
            uint32_t reg_data_expected             :    1;  /*0: No data transfer expected; 1: Data transfer expected.*/
            uint32_t reg_read_write                :    1;  /*0: Read from card; 1: Write to card.; Don't care if no data is expected from card.*/
            uint32_t reg_transfer_mode             :    1;  /*0: Block data transfer command; 1: Stream data transfer command.; Don't care if no data expected. */
            uint32_t reg_send_auto_stop            :    1;  /*0: No stop command is sent at the end of data transfer; 1: Send stop command at the end of data transfer.*/
            uint32_t reg_wait_prvdata_complete     :    1;  /*0: Send command at once, even if previous data transfer has not completed; 1: Wait for previous data transfer to complete before sending Command.; The SDHOST_WAIT_PRVDATA_COMPLETE] = 0 option is typically used to query status of card during data transfer or to stop current data transfer. SDHOST_CARD_NUMBERr should be same as in previous command. */
            uint32_t reg_stop_abort_cmd            :    1;  /*0: Neither stop nor abort command can stop current data transfer. If abort is sent to function-number currently selected or not in data-transfer mode, then bit should be set to 0; 1: Stop or abort command intended to stop current data transfer in progress.; When open-ended or predefined data transfer is in progress, and host issues stop or abort command to stop data transfer, bit should be set so that command/data state-machines of CIU can return correctly to idle state. */
            uint32_t reg_send_initialization       :    1;  /*0: Do not send initialization sequence (80 clocks of 1) before sending this command; 1: Send initialization sequence before sending this command.; After powered on, 80 clocks must be sent to card for initialization before sending any commands to card. Bit should be set while sending first command to card so that controller will initialize clocks before sending command to card. */
            uint32_t reg_card_number               :    5;  /*Card number in use. Represents physical slot number of card being accessed. In SD-only mode, up to two cards are supported.*/
            uint32_t reg_update_clock_registers_only:    1;  /*0: Normal command sequence; 1: Do not send commands, just update clock register value into card clock domain.; Following register values are transferred into card clock domain: CLKDIV, CLRSRC, and CLKENA.; Changes card clocks (change frequency, truncate off or on, and set low-frequency mode). This is provided in order to change clock frequency or stop clock without having to send command to cards. During normal command sequence, when sdhost_update_clock_registers_only = 0, following control registers are transferred from BIU to CIU: CMD, CMDARG, TMOUT, CTYPE, BLKSIZ, and BYTCNT. CIU uses new register values for new command sequence to card(s). When bit is set, there are no Command Done interrupts because no command is sent to SD_MMC_CEATA cards.*/
            uint32_t reg_read_ceata_device         :    1;  /*Read access flag.; 0: Host is not performing read access (RW_REG or RW_BLK)towards CE-ATA device;; 1: Host is performing read access (RW_REG or RW_BLK) towards CE-ATA device.; Software should set this bit to indicate that CE-ATA device is being accessed for read transfer. This bit is used to disable read data timeout indication while performing CE-ATA read transfers. Maximum value of I/O transmission delay can be no less than 10 seconds. SD/MMC should not indicate read data timeout while waiting for data from CE-ATA device. */
            uint32_t reg_ccs_expected              :    1;  /*Expected Command Completion Signal (CCS) configuration.; 0: Interrupts are not enabled in CE-ATA device (nIEN = 1 in ATA control register), or command does not expect CCS from device;; 1: Interrupts are enabled in CE-ATA device (nIEN = 0), and RW_BLK command expects command completion signal from CE-ATA device. ; If the command expects Command Completion Signal (CCS) from the CE-ATA device, the software should set this control bit. SD/MMC sets Data Transfer Over (DTO) bit in RINTSTS register and generates interrupt to host if Data Transfer Over interrupt is not masked. */
            uint32_t reserved24                    :    1;  /*Reserved*/
            uint32_t reserved25                    :    1;  /*Reserved*/
            uint32_t reserved26                    :    1;  /*Reserved*/
            uint32_t reserved27                    :    1;  /*Reserved*/
            uint32_t reserved28                    :    1;  /*Reserved*/
            uint32_t reg_use_hole_reg              :    1;  /*Use Hold Register.; 0: CMD and DATA sent to card bypassing HOLD Register;; 1: CMD and DATA sent to card through the HOLD Register. */
            uint32_t reserved30                    :    1;  /*Reserved*/
            uint32_t reg_start_cmd                 :    1;  /*Start command. Once command is served by the CIU, this bit is automatically cleared. When this bit is set, host should not attempt to write to any command registers. If a write is attempted, hardware lock error is set in raw interrupt register. Once command is sent and a response is received from SD_MMC_CEATA cards, Command Done bit is set in the raw interrupt Register.*/
        };
        uint32_t val;
    } sdhost_cmd;
    uint32_t sdhost_resp0;
    uint32_t sdhost_resp1;
    uint32_t sdhost_resp2;
    uint32_t sdhost_resp3;
    union {
        struct {
            uint32_t reg_int_status_msk            :    16;  /*Interrupt enabled only if corresponding bit in interrupt mask register is set.; Bit 15 (EBE): End-bit error/no CRC error;; Bit 14 (ACD): Auto command done;; Bit 13 (SBE/BCI): RX Start Bit Error;; Bit 12 (HLE): Hardware locked write error; ; Bit 11 (FRUN): FIFO underrun/overrun error;; Bit 10 (HTO): Data starvation by host timeout (HTO);; Bit 9 (DTRO): Data read timeout; ; Bit 8 (RTO): Response timeout; ; Bit 7 (DCRC): Data CRC error; ; Bit 6 (RCRC): Response CRC error; ; Bit 5 (RXDR): Receive FIFO data request; ; Bit 4 (TXDR): Transmit FIFO data request;; Bit 3 (DTO): Data transfer over; ; Bit 2 (CD): Command done; ; Bit 1 (RE): Response error;; Bit 0 (CD): Card detect. */
            uint32_t reg_sdio_interrupt_msk        :    2;  /*Interrupt from SDIO card, one bit for each card. Bit[17:16] correspond to card1 and card0, respectively. SDIO interrupt for card is enabled only if corresponding sdhost_sdio_int_mask bit is set in Interrupt mask register (Setting mask bit enables interrupt).*/
            uint32_t reserved18                    :    14;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_mintsts;
    union {
        struct {
            uint32_t reg_int_status_raw            :    16;  /*Setting a bit clears the corresponding interrupt and writing 0 has no effect. Bits are logged regardless of interrupt mask status.; Bit 15 (EBE): End-bit error/no CRC error;; Bit 14 (ACD): Auto command done;; Bit 13 (SBE/BCI): RX Start Bit Error;; Bit 12 (HLE): Hardware locked write error; ; Bit 11 (FRUN): FIFO underrun/overrun error;; Bit 10 (HTO): Data starvation by host timeout (HTO);; Bit 9 (DTRO): Data read timeout; ; Bit 8 (RTO): Response timeout; ; Bit 7 (DCRC): Data CRC error; ; Bit 6 (RCRC): Response CRC error; ; Bit 5 (RXDR): Receive FIFO data request; ; Bit 4 (TXDR): Transmit FIFO data request;; Bit 3 (DTO): Data transfer over; ; Bit 2 (CD): Command done; ; Bit 1 (RE): Response error;; Bit 0 (CD): Card detect.  */
            uint32_t reg_sdio_interrupt_raw        :    2;  /*Interrupt from SDIO card, one bit for each card. Bit[17:16] correspond to card1 and card0, respectively. Setting a bit clears the corresponding interrupt bit and writing 0 has no effect.; 0: No SDIO interrupt from card;; 1: SDIO interrupt from card. */
            uint32_t reserved18                    :    14;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_rintsts;
    union {
        struct {
            uint32_t reg_fifo_rx_watermark         :    1;  /*FIFO reached Receive watermark level, not qualified with data transfer.*/
            uint32_t reg_fifo_tx_watermark         :    1;  /*FIFO reached Transmit watermark level, not qualified with data transfer.*/
            uint32_t reg_fifo_empty                :    1;  /*FIFO is empty status.*/
            uint32_t reg_fifo_full                 :    1;  /*FIFO is full status.*/
            uint32_t reg_command_fsm_states        :    4;  /*Command FSM states.; 0: Idle;; 1: Send init sequence; ; 2: Send cmd start bit; ; 3: Send cmd tx bit;; 4: Send cmd index + arg;; 5: Send cmd crc7;; 6: Send cmd end bit;; 7: Receive resp start bit;; 8: Receive resp IRQ response;; 9: Receive resp tx bit;; 10: Receive resp cmd idx;; 11: Receive resp data;; 12: Receive resp crc7;; 13: Receive resp end bit;; 14: Cmd path wait NCC;; 15: Wait, cmd-to-response turnaround.   */
            uint32_t reg_data_3_status             :    1;  /*Raw selected sdhost_card_data[3], checks whether card is present.; 0: card not present;; 1: card present.*/
            uint32_t reg_data_busy                 :    1;  /*Inverted version of raw selected sdhost_card_data[0].; 0: Card data not busy;; 1: Card data busy.*/
            uint32_t reg_data_state_mc_busy        :    1;  /*Data transmit or receive state-machine is busy.*/
            uint32_t reg_response_index            :    6;  /*Index of previous response, including any auto-stop sent by core.*/
            uint32_t reg_fifo_count                :    13;  /*FIFO count, number of filled locations in FIFO.*/
            uint32_t reserved30                    :    1;  /*Reserved*/
            uint32_t reserved31                    :    1;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_status;
    union {
        struct {
            uint32_t reg_tx_wmark                  :    12;  /*FIFO threshold watermark level when transmitting data to card. When FIFO data count is less than or equal to this number, DMA/FIFO request is raised. If Interrupt is enabled, then interrupt  occurs. During end of packet, request or interrupt is generated, regardless of threshold programming.In non-DMA mode, when transmit FIFO threshold (TXDR) interrupt is enabled, then interrupt is generated instead of DMA request. During end of packet, on last interrupt, host is responsible for filling FIFO with only required remaining bytes (not before FIFO is full or after CIU completes data transfers, because FIFO may not be empty).  In DMA mode, at end of packet, if last transfer is less than burst  size, DMA controller does single cycles until required bytes are  transferred.*/
            uint32_t reserved12                    :    4;  /*Reserved*/
            uint32_t reg_rx_wmark                  :    11;  /*FIFO threshold watermark level when receiving data to card.When FIFO data count reaches greater than this number , DMA/FIFO request is raised. During end of packet, request is generated regardless of threshold programming in order to complete any remaining data.In non-DMA mode, when receiver FIFO threshold (RXDR) interrupt is enabled, then interrupt is generated instead of DMA request.During end of packet, interrupt is not generated if threshold programming is larger than any remaining data. It is responsibility of host to read remaining bytes on seeing Data Transfer Done interrupt.In DMA mode, at end of packet, even if remaining bytes are less than threshold, DMA request does single transfers to flush out any remaining bytes before Data Transfer Done interrupt is set. */
            uint32_t reserved27                    :    1;  /*Reserved*/
            uint32_t reg_dma_multiple_transaction_size:    3;  /*Burst size of multiple transaction, should be programmed same as DMA controller multiple-transaction-size SDHOST_SRC/DEST_MSIZE.; 000: 1-byte transfer; ; 001: 4-byte transfer; ; 010: 8-byte transfer; ; 011: 16-byte transfer; ; 100: 32-byte transfer; ; 101: 64-byte transfer; ; 110: 128-byte transfer; ; 111: 256-byte transfer. */
            uint32_t reserved31                    :    1;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_fifoth;
    union {
        struct {
            uint32_t reg_card_detect_n             :    2;  /*Value on sdhost_card_detect_n input ports (1 bit per card), read-only bits. 0 represents presence of card. Only NUM_CARDS number of bits are implemented.*/
            uint32_t reserved2                     :    30;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_cdetect;
    union {
        struct {
            uint32_t reg_write_protect             :    2;  /*Value on sdhost_card_write_prt input ports (1 bit per card). 1 represents write protection. Only NUM_CARDS number of bits are implemented.*/
            uint32_t reserved2                     :    30;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_wrtprt;
    uint32_t reserved_58;
    uint32_t sdhost_tcbcnt;
    uint32_t sdhost_tbbcnt;
    union {
        struct {
            uint32_t reg_debounce_count            :    24;  /*Number of host clocks (clk) used by debounce filter logic. The typical debounce time is 5 \verb+~+ 25 ms to prevent the card instability when the card is inserted or removed.*/
            uint32_t reserved24                    :    8;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_debnce;
    uint32_t sdhost_usrid;
    uint32_t sdhost_verid;
    union {
        struct {
            uint32_t reg_card_type_reg             :    1;  /*Hardware support SDIO and MMC.*/
            uint32_t reg_card_num_reg              :    5;  /*Support card number is 2.*/
            uint32_t reg_bus_type_reg              :    1;  /*Register config is APB bus.*/
            uint32_t reg_data_width_reg            :    3;  /*Regisger data widht is 32.*/
            uint32_t reg_addr_width_reg            :    6;  /*Register address width is 32.*/
            uint32_t reserved16                    :    2;  /*Reserved*/
            uint32_t reg_dma_width_reg             :    3;  /*DMA data witdth is 32.*/
            uint32_t reg_ram_indise_reg            :    1;  /*Inside RAM in SDMMC module.*/
            uint32_t reg_hold_reg                  :    1;  /*Have a hold regiser in data path .*/
            uint32_t reserved23                    :    1;  /*Reserved*/
            uint32_t reg_num_clk_div_reg           :    2;  /*Have 4 clk divider in design .*/
            uint32_t reserved26                    :    1;  /*Reserved*/
            uint32_t reserved27                    :    5;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_hcon;
    union {
        struct {
            uint32_t reserved0                     :    16;  /*Reserved*/
            uint32_t reg_ddr_reg                   :    2;  /*DDR mode selecton,1 bit for each card.; 0-Non-DDR mdoe.; 1-DDR mdoe.*/
            uint32_t reserved18                    :    14;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_uhs;
    union {
        struct {
            uint32_t reg_card_reset                :    2;  /*Hardware reset.; 1: Active mode; ; 0: Reset. ; These bits cause the cards to enter pre-idle state, which requires them to be re-initialized. SDHOST_RST_CARD_RESET[0] should be set to 1'b0 to reset card0, SDHOST_RST_CARD_RESET[1] should be set to 1'b0 to reset card1.*/
            uint32_t reserved2                     :    30;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_rst_n;
    uint32_t reserved_7c;
    union {
        struct {
            uint32_t reg_bmod_swr                  :    1;  /*Software Reset. When set, the DMA Controller resets all its internal registers. It is automatically cleared after one clock cycle. */
            uint32_t reg_bmod_fb                   :    1;  /*Fixed Burst. Controls whether the AHB Master interface performs fixed burst transfers or not. When set, the AHB will use only SINGLE, INCR4, INCR8 or INCR16 during start of normal burst transfers. When reset, the AHB will use SINGLE and INCR burst transfer operations. */
            uint32_t reserved2                     :    5;  /*Reserved*/
            uint32_t reg_bmod_de                   :    1;  /*IDMAC Enable. When set, the IDMAC is enabled.*/
            uint32_t reg_bmod_pbl                  :    3;  /*Programmable Burst Length. These bits indicate the maximum number of beats to be performed in one IDMAC???Internal DMA Control???transaction. The IDMAC will always attempt to burst as specified in PBL each time it starts a burst transfer on the host bus. The permissible values are 1, 4, 8, 16, 32, 64, 128 and 256. This value is the mirror of MSIZE of FIFOTH register. In order to change this value, write the required value to FIFOTH register. This is an encode value as follows:; 000: 1-byte transfer; ; 001: 4-byte transfer; ; 010: 8-byte transfer; ; 011: 16-byte transfer; ; 100: 32-byte transfer; ; 101: 64-byte transfer; ; 110: 128-byte transfer; ; 111: 256-byte transfer.; PBL is a read-only value and is applicable only for data access, it does not apply to descriptor access. */
            uint32_t reserved11                    :    21;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_bmod;
    uint32_t sdhost_pldmnd;
    uint32_t sdhost_dbaddr;
    union {
        struct {
            uint32_t reg_idsts_ti                  :    1;  /*Transmit Interrupt. Indicates that data transmission is finished for a descriptor. Writing 1 clears this bit.*/
            uint32_t reg_idsts_ri                  :    1;  /*Receive Interrupt. Indicates the completion of data reception for a descriptor. Writing 1 clears this bit.*/
            uint32_t reg_idsts_fbe                 :    1;  /*Fatal Bus Error Interrupt. Indicates that a Bus Error occurred (IDSTS[12:10]) . When this bit is set, the DMA disables all its bus accesses. Writing 1 clears this bit.*/
            uint32_t reserved3                     :    1;  /*Reserved*/
            uint32_t reg_idsts_du                  :    1;  /*Descriptor Unavailable Interrupt. This bit is set when the descriptor is unavailable due to OWNER bit = 0 (DES0[31] = 0). Writing 1 clears this bit.*/
            uint32_t reg_idsts_ces                 :    1;  /*Card Error Summary. Indicates the status of the transaction to/from the card, also present in RINTSTS. Indicates the logical OR of the following bits:; EBE : End Bit Error; ; RTO : Response Timeout/Boot Ack Timeout; ; RCRC : Response CRC; ; SBE : Start Bit Error; ; DRTO : Data Read Timeout/BDS timeout; ; DCRC : Data CRC for Receive; ; RE : Response Error.; Writing 1 clears this bit. The abort condition of the IDMAC depends on the setting of this CES bit. If the CES bit is enabled, then the IDMAC aborts on a response error. */
            uint32_t reserved6                     :    2;  /*Reserved*/
            uint32_t reg_idsts_nis                 :    1;  /*Normal Interrupt Summary. Logical OR of the following: IDSTS[0] : Transmit Interrupt, IDSTS[1] : Receive Interrupt. Only unmasked bits affect this bit. This is a sticky bit and must be cleared each time a corresponding bit that causes NIS to be set is cleared. Writing 1 clears this bit.*/
            uint32_t reg_idsts_ais                 :    1;  /*Abnormal Interrupt Summary. Logical OR of the following: IDSTS[2] : Fatal Bus Interrupt, IDSTS[4] : DU bit Interrupt. Only unmasked bits affect this bit. This is a sticky bit and must be cleared each time a corresponding bit that causes AIS to be set is cleared. Writing 1 clears this bit.*/
            uint32_t reg_idsts_fbe_code            :    3;  /*Fatal Bus Error Code. Indicates the type of error that caused a Bus Error. Valid only when the Fatal Bus Error bit IDSTS[2] is set. This field does not generate an interrupt.; 001: Host Abort received during transmission;; 010: Host Abort received during reception;; Others: Reserved. */
            uint32_t reg_idsts_fsm                 :    4;  /*DMAC FSM present state.; 0: DMA_IDLE (idle state); ; 1: DMA_SUSPEND (suspend state); ; 2: DESC_RD (descriptor reading state); ; 3: DESC_CHK (descriptor checking state); ; 4: DMA_RD_REQ_WAIT (read-data request waiting state);; 5: DMA_WR_REQ_WAIT (write-data request waiting state); ; 6: DMA_RD (data-read state); ; 7: DMA_WR (data-write state); ; 8: DESC_CLOSE (descriptor close state). */
            uint32_t reserved17                    :    15;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_idsts;
    union {
        struct {
            uint32_t reg_idinten_ti                :    1;  /*Transmit Interrupt Enable. When set with Normal Interrupt Summary Enable, Transmit Interrupt is enabled. When reset, Transmit Interrupt is disabled.*/
            uint32_t reg_idinten_ri                :    1;  /*Receive Interrupt Enable. When set with Normal Interrupt Summary Enable, Receive Interrupt is enabled. When reset, Receive Interrupt is disabled. */
            uint32_t reg_idinten_fbe               :    1;  /*Fatal Bus Error Enable. When set with Abnormal Interrupt Summary Enable, the Fatal Bus Error Interrupt is enabled. When reset, Fatal Bus Error Enable Interrupt is disabled.*/
            uint32_t reserved3                     :    1;  /*Reserved*/
            uint32_t reg_idinten_du                :    1;  /*Descriptor Unavailable Interrupt. When set along with Abnormal Interrupt Summary Enable, the DU interrupt is enabled.*/
            uint32_t reg_idinten_ces               :    1;  /*Card Error summary Interrupt Enable. When set, it enables the Card Interrupt summary.*/
            uint32_t reserved6                     :    2;  /*Reserved*/
            uint32_t reg_idinten_ni                :    1;  /*Normal Interrupt Summary Enable. When set, a normal interrupt is enabled. When reset, a normal interrupt is disabled. This bit enables the following bits:; IDINTEN[0]: Transmit Interrupt;; IDINTEN[1]: Receive Interrupt.  */
            uint32_t reg_idinten_ai                :    1;  /*Abnormal Interrupt Summary Enable. When set, an abnormal interrupt is enabled. This bit enables the following bits:; IDINTEN[2]: Fatal Bus Error Interrupt;; IDINTEN[4]: DU Interrupt.  */
            uint32_t reserved10                    :    22;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_idinten;
    uint32_t sdhost_dscaddr;
    uint32_t sdhost_bufaddr;
    uint32_t reserved_9c;
    uint32_t reserved_a0;
    uint32_t reserved_a4;
    uint32_t reserved_a8;
    uint32_t reserved_ac;
    uint32_t reserved_b0;
    uint32_t reserved_b4;
    uint32_t reserved_b8;
    uint32_t reserved_bc;
    uint32_t reserved_c0;
    uint32_t reserved_c4;
    uint32_t reserved_c8;
    uint32_t reserved_cc;
    uint32_t reserved_d0;
    uint32_t reserved_d4;
    uint32_t reserved_d8;
    uint32_t reserved_dc;
    uint32_t reserved_e0;
    uint32_t reserved_e4;
    uint32_t reserved_e8;
    uint32_t reserved_ec;
    uint32_t reserved_f0;
    uint32_t reserved_f4;
    uint32_t reserved_f8;
    uint32_t reserved_fc;
    union {
        struct {
            uint32_t reg_cardrdthren_reg           :    1;  /*Card read threshold enable.; 1'b0-Card read threshold disabled.; 1'b1-Card read threshold enabled.*/
            uint32_t reg_cardclrinten_reg          :    1;  /*Busy clear interrupt generation:; 1'b0-Busy clear interrypt disabled.; 1'b1-Busy clear interrypt enabled.*/
            uint32_t reg_cardwrthren_reg           :    1;  /*Applicable when HS400 mode is enabled.; 1'b0-Card write Threshold disabled.; 1'b1-Card write Threshold enabled.*/
            uint32_t reserved3                     :    13;  /*Reserved*/
            uint32_t reg_cardthreshold_reg         :    16;  /*The inside FIFO size is 512,This register is applicable when SDHOST_CARDERTHREN_REG is set to 1 or SDHOST_CARDRDTHREN_REG set to 1.*/
        };
        uint32_t val;
    } sdhost_cardthrctl;
    uint32_t reserved_104;
    uint32_t reserved_108;
    union {
        struct {
            uint32_t reg_halfstartbit_reg          :    2;  /*Control for start bit detection mechanism duration of start bit.Each bit refers to one slot.Set this bit to 1 for eMMC4.5 and above,set to 0 for SD applications.For eMMC4.5,start bit can be:; 1'b0-Full cycle.; 1'b1-less than one full cycle.*/
            uint32_t reserved2                     :    29;  /*Reserved*/
            uint32_t reg_hs400_mode_reg            :    1;  /*Set 1 to enable HS400 mode.*/
        };
        uint32_t val;
    } sdhost_emmcddr;
    union {
        struct {
            uint32_t reg_enable_shift_reg          :    4;  /*Control for the amount of phase shift provided on the default enables in the design.Two bits assigned for each card.; 2'b00-Default phase shift.; 2'b01-Enables shifted to next immediate positive edge.; 2'b10-Enables shifted to next immediate negative edge.; 2'b11-Reserved.*/
            uint32_t reserved4                     :    28;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_enshift;
    uint32_t reserved_114;
    uint32_t reserved_118;
    uint32_t reserved_11c;
    uint32_t reserved_120;
    uint32_t reserved_124;
    uint32_t reserved_128;
    uint32_t reserved_12c;
    uint32_t reserved_130;
    uint32_t reserved_134;
    uint32_t reserved_138;
    uint32_t reserved_13c;
    uint32_t reserved_140;
    uint32_t reserved_144;
    uint32_t reserved_148;
    uint32_t reserved_14c;
    uint32_t reserved_150;
    uint32_t reserved_154;
    uint32_t reserved_158;
    uint32_t reserved_15c;
    uint32_t reserved_160;
    uint32_t reserved_164;
    uint32_t reserved_168;
    uint32_t reserved_16c;
    uint32_t reserved_170;
    uint32_t reserved_174;
    uint32_t reserved_178;
    uint32_t reserved_17c;
    uint32_t reserved_180;
    uint32_t reserved_184;
    uint32_t reserved_188;
    uint32_t reserved_18c;
    uint32_t reserved_190;
    uint32_t reserved_194;
    uint32_t reserved_198;
    uint32_t reserved_19c;
    uint32_t reserved_1a0;
    uint32_t reserved_1a4;
    uint32_t reserved_1a8;
    uint32_t reserved_1ac;
    uint32_t reserved_1b0;
    uint32_t reserved_1b4;
    uint32_t reserved_1b8;
    uint32_t reserved_1bc;
    uint32_t reserved_1c0;
    uint32_t reserved_1c4;
    uint32_t reserved_1c8;
    uint32_t reserved_1cc;
    uint32_t reserved_1d0;
    uint32_t reserved_1d4;
    uint32_t reserved_1d8;
    uint32_t reserved_1dc;
    uint32_t reserved_1e0;
    uint32_t reserved_1e4;
    uint32_t reserved_1e8;
    uint32_t reserved_1ec;
    uint32_t reserved_1f0;
    uint32_t reserved_1f4;
    uint32_t reserved_1f8;
    uint32_t reserved_1fc;
    uint32_t sdhost_buffifo;
    uint32_t reserved_204;
    uint32_t reserved_208;
    uint32_t reserved_20c;
    uint32_t reserved_210;
    uint32_t reserved_214;
    uint32_t reserved_218;
    uint32_t reserved_21c;
    uint32_t reserved_220;
    uint32_t reserved_224;
    uint32_t reserved_228;
    uint32_t reserved_22c;
    uint32_t reserved_230;
    uint32_t reserved_234;
    uint32_t reserved_238;
    uint32_t reserved_23c;
    uint32_t reserved_240;
    uint32_t reserved_244;
    uint32_t reserved_248;
    uint32_t reserved_24c;
    uint32_t reserved_250;
    uint32_t reserved_254;
    uint32_t reserved_258;
    uint32_t reserved_25c;
    uint32_t reserved_260;
    uint32_t reserved_264;
    uint32_t reserved_268;
    uint32_t reserved_26c;
    uint32_t reserved_270;
    uint32_t reserved_274;
    uint32_t reserved_278;
    uint32_t reserved_27c;
    uint32_t reserved_280;
    uint32_t reserved_284;
    uint32_t reserved_288;
    uint32_t reserved_28c;
    uint32_t reserved_290;
    uint32_t reserved_294;
    uint32_t reserved_298;
    uint32_t reserved_29c;
    uint32_t reserved_2a0;
    uint32_t reserved_2a4;
    uint32_t reserved_2a8;
    uint32_t reserved_2ac;
    uint32_t reserved_2b0;
    uint32_t reserved_2b4;
    uint32_t reserved_2b8;
    uint32_t reserved_2bc;
    uint32_t reserved_2c0;
    uint32_t reserved_2c4;
    uint32_t reserved_2c8;
    uint32_t reserved_2cc;
    uint32_t reserved_2d0;
    uint32_t reserved_2d4;
    uint32_t reserved_2d8;
    uint32_t reserved_2dc;
    uint32_t reserved_2e0;
    uint32_t reserved_2e4;
    uint32_t reserved_2e8;
    uint32_t reserved_2ec;
    uint32_t reserved_2f0;
    uint32_t reserved_2f4;
    uint32_t reserved_2f8;
    uint32_t reserved_2fc;
    uint32_t reserved_300;
    uint32_t reserved_304;
    uint32_t reserved_308;
    uint32_t reserved_30c;
    uint32_t reserved_310;
    uint32_t reserved_314;
    uint32_t reserved_318;
    uint32_t reserved_31c;
    uint32_t reserved_320;
    uint32_t reserved_324;
    uint32_t reserved_328;
    uint32_t reserved_32c;
    uint32_t reserved_330;
    uint32_t reserved_334;
    uint32_t reserved_338;
    uint32_t reserved_33c;
    uint32_t reserved_340;
    uint32_t reserved_344;
    uint32_t reserved_348;
    uint32_t reserved_34c;
    uint32_t reserved_350;
    uint32_t reserved_354;
    uint32_t reserved_358;
    uint32_t reserved_35c;
    uint32_t reserved_360;
    uint32_t reserved_364;
    uint32_t reserved_368;
    uint32_t reserved_36c;
    uint32_t reserved_370;
    uint32_t reserved_374;
    uint32_t reserved_378;
    uint32_t reserved_37c;
    uint32_t reserved_380;
    uint32_t reserved_384;
    uint32_t reserved_388;
    uint32_t reserved_38c;
    uint32_t reserved_390;
    uint32_t reserved_394;
    uint32_t reserved_398;
    uint32_t reserved_39c;
    uint32_t reserved_3a0;
    uint32_t reserved_3a4;
    uint32_t reserved_3a8;
    uint32_t reserved_3ac;
    uint32_t reserved_3b0;
    uint32_t reserved_3b4;
    uint32_t reserved_3b8;
    uint32_t reserved_3bc;
    uint32_t reserved_3c0;
    uint32_t reserved_3c4;
    uint32_t reserved_3c8;
    uint32_t reserved_3cc;
    uint32_t reserved_3d0;
    uint32_t reserved_3d4;
    uint32_t reserved_3d8;
    uint32_t reserved_3dc;
    uint32_t reserved_3e0;
    uint32_t reserved_3e4;
    uint32_t reserved_3e8;
    uint32_t reserved_3ec;
    uint32_t reserved_3f0;
    uint32_t reserved_3f4;
    uint32_t reserved_3f8;
    uint32_t reserved_3fc;
    uint32_t reserved_400;
    uint32_t reserved_404;
    uint32_t reserved_408;
    uint32_t reserved_40c;
    uint32_t reserved_410;
    uint32_t reserved_414;
    uint32_t reserved_418;
    uint32_t reserved_41c;
    uint32_t reserved_420;
    uint32_t reserved_424;
    uint32_t reserved_428;
    uint32_t reserved_42c;
    uint32_t reserved_430;
    uint32_t reserved_434;
    uint32_t reserved_438;
    uint32_t reserved_43c;
    uint32_t reserved_440;
    uint32_t reserved_444;
    uint32_t reserved_448;
    uint32_t reserved_44c;
    uint32_t reserved_450;
    uint32_t reserved_454;
    uint32_t reserved_458;
    uint32_t reserved_45c;
    uint32_t reserved_460;
    uint32_t reserved_464;
    uint32_t reserved_468;
    uint32_t reserved_46c;
    uint32_t reserved_470;
    uint32_t reserved_474;
    uint32_t reserved_478;
    uint32_t reserved_47c;
    uint32_t reserved_480;
    uint32_t reserved_484;
    uint32_t reserved_488;
    uint32_t reserved_48c;
    uint32_t reserved_490;
    uint32_t reserved_494;
    uint32_t reserved_498;
    uint32_t reserved_49c;
    uint32_t reserved_4a0;
    uint32_t reserved_4a4;
    uint32_t reserved_4a8;
    uint32_t reserved_4ac;
    uint32_t reserved_4b0;
    uint32_t reserved_4b4;
    uint32_t reserved_4b8;
    uint32_t reserved_4bc;
    uint32_t reserved_4c0;
    uint32_t reserved_4c4;
    uint32_t reserved_4c8;
    uint32_t reserved_4cc;
    uint32_t reserved_4d0;
    uint32_t reserved_4d4;
    uint32_t reserved_4d8;
    uint32_t reserved_4dc;
    uint32_t reserved_4e0;
    uint32_t reserved_4e4;
    uint32_t reserved_4e8;
    uint32_t reserved_4ec;
    uint32_t reserved_4f0;
    uint32_t reserved_4f4;
    uint32_t reserved_4f8;
    uint32_t reserved_4fc;
    uint32_t reserved_500;
    uint32_t reserved_504;
    uint32_t reserved_508;
    uint32_t reserved_50c;
    uint32_t reserved_510;
    uint32_t reserved_514;
    uint32_t reserved_518;
    uint32_t reserved_51c;
    uint32_t reserved_520;
    uint32_t reserved_524;
    uint32_t reserved_528;
    uint32_t reserved_52c;
    uint32_t reserved_530;
    uint32_t reserved_534;
    uint32_t reserved_538;
    uint32_t reserved_53c;
    uint32_t reserved_540;
    uint32_t reserved_544;
    uint32_t reserved_548;
    uint32_t reserved_54c;
    uint32_t reserved_550;
    uint32_t reserved_554;
    uint32_t reserved_558;
    uint32_t reserved_55c;
    uint32_t reserved_560;
    uint32_t reserved_564;
    uint32_t reserved_568;
    uint32_t reserved_56c;
    uint32_t reserved_570;
    uint32_t reserved_574;
    uint32_t reserved_578;
    uint32_t reserved_57c;
    uint32_t reserved_580;
    uint32_t reserved_584;
    uint32_t reserved_588;
    uint32_t reserved_58c;
    uint32_t reserved_590;
    uint32_t reserved_594;
    uint32_t reserved_598;
    uint32_t reserved_59c;
    uint32_t reserved_5a0;
    uint32_t reserved_5a4;
    uint32_t reserved_5a8;
    uint32_t reserved_5ac;
    uint32_t reserved_5b0;
    uint32_t reserved_5b4;
    uint32_t reserved_5b8;
    uint32_t reserved_5bc;
    uint32_t reserved_5c0;
    uint32_t reserved_5c4;
    uint32_t reserved_5c8;
    uint32_t reserved_5cc;
    uint32_t reserved_5d0;
    uint32_t reserved_5d4;
    uint32_t reserved_5d8;
    uint32_t reserved_5dc;
    uint32_t reserved_5e0;
    uint32_t reserved_5e4;
    uint32_t reserved_5e8;
    uint32_t reserved_5ec;
    uint32_t reserved_5f0;
    uint32_t reserved_5f4;
    uint32_t reserved_5f8;
    uint32_t reserved_5fc;
    uint32_t reserved_600;
    uint32_t reserved_604;
    uint32_t reserved_608;
    uint32_t reserved_60c;
    uint32_t reserved_610;
    uint32_t reserved_614;
    uint32_t reserved_618;
    uint32_t reserved_61c;
    uint32_t reserved_620;
    uint32_t reserved_624;
    uint32_t reserved_628;
    uint32_t reserved_62c;
    uint32_t reserved_630;
    uint32_t reserved_634;
    uint32_t reserved_638;
    uint32_t reserved_63c;
    uint32_t reserved_640;
    uint32_t reserved_644;
    uint32_t reserved_648;
    uint32_t reserved_64c;
    uint32_t reserved_650;
    uint32_t reserved_654;
    uint32_t reserved_658;
    uint32_t reserved_65c;
    uint32_t reserved_660;
    uint32_t reserved_664;
    uint32_t reserved_668;
    uint32_t reserved_66c;
    uint32_t reserved_670;
    uint32_t reserved_674;
    uint32_t reserved_678;
    uint32_t reserved_67c;
    uint32_t reserved_680;
    uint32_t reserved_684;
    uint32_t reserved_688;
    uint32_t reserved_68c;
    uint32_t reserved_690;
    uint32_t reserved_694;
    uint32_t reserved_698;
    uint32_t reserved_69c;
    uint32_t reserved_6a0;
    uint32_t reserved_6a4;
    uint32_t reserved_6a8;
    uint32_t reserved_6ac;
    uint32_t reserved_6b0;
    uint32_t reserved_6b4;
    uint32_t reserved_6b8;
    uint32_t reserved_6bc;
    uint32_t reserved_6c0;
    uint32_t reserved_6c4;
    uint32_t reserved_6c8;
    uint32_t reserved_6cc;
    uint32_t reserved_6d0;
    uint32_t reserved_6d4;
    uint32_t reserved_6d8;
    uint32_t reserved_6dc;
    uint32_t reserved_6e0;
    uint32_t reserved_6e4;
    uint32_t reserved_6e8;
    uint32_t reserved_6ec;
    uint32_t reserved_6f0;
    uint32_t reserved_6f4;
    uint32_t reserved_6f8;
    uint32_t reserved_6fc;
    uint32_t reserved_700;
    uint32_t reserved_704;
    uint32_t reserved_708;
    uint32_t reserved_70c;
    uint32_t reserved_710;
    uint32_t reserved_714;
    uint32_t reserved_718;
    uint32_t reserved_71c;
    uint32_t reserved_720;
    uint32_t reserved_724;
    uint32_t reserved_728;
    uint32_t reserved_72c;
    uint32_t reserved_730;
    uint32_t reserved_734;
    uint32_t reserved_738;
    uint32_t reserved_73c;
    uint32_t reserved_740;
    uint32_t reserved_744;
    uint32_t reserved_748;
    uint32_t reserved_74c;
    uint32_t reserved_750;
    uint32_t reserved_754;
    uint32_t reserved_758;
    uint32_t reserved_75c;
    uint32_t reserved_760;
    uint32_t reserved_764;
    uint32_t reserved_768;
    uint32_t reserved_76c;
    uint32_t reserved_770;
    uint32_t reserved_774;
    uint32_t reserved_778;
    uint32_t reserved_77c;
    uint32_t reserved_780;
    uint32_t reserved_784;
    uint32_t reserved_788;
    uint32_t reserved_78c;
    uint32_t reserved_790;
    uint32_t reserved_794;
    uint32_t reserved_798;
    uint32_t reserved_79c;
    uint32_t reserved_7a0;
    uint32_t reserved_7a4;
    uint32_t reserved_7a8;
    uint32_t reserved_7ac;
    uint32_t reserved_7b0;
    uint32_t reserved_7b4;
    uint32_t reserved_7b8;
    uint32_t reserved_7bc;
    uint32_t reserved_7c0;
    uint32_t reserved_7c4;
    uint32_t reserved_7c8;
    uint32_t reserved_7cc;
    uint32_t reserved_7d0;
    uint32_t reserved_7d4;
    uint32_t reserved_7d8;
    uint32_t reserved_7dc;
    uint32_t reserved_7e0;
    uint32_t reserved_7e4;
    uint32_t reserved_7e8;
    uint32_t reserved_7ec;
    uint32_t reserved_7f0;
    uint32_t reserved_7f4;
    uint32_t reserved_7f8;
    uint32_t reserved_7fc;
    union {
        struct {
            uint32_t reg_cclkin_edge_drv_sel       :    3;  /*It's used to select the clock phase of the output signal from phase 0, phase 90, phase 180, phase 270.*/
            uint32_t reg_cclkin_edge_sam_sel       :    3;  /*It's used to select the clock phase of the input signal from phase 0, phase 90, phase 180, phase 270.*/
            uint32_t reg_cclkin_edge_slf_sel       :    3;  /*It's used to select the clock phase of the internal signal from phase 0, phase 90, phase 180, phase 270.*/
            uint32_t reg_cclkin_edge_h             :    4;  /*The high level of the divider clock. The value should be smaller than CCLKIN_EDGE_L.*/
            uint32_t reg_cclkin_edge_l             :    4;  /*The low level of the divider clock. The value should be larger than CCLKIN_EDGE_H.*/
            uint32_t reg_cclkin_edge_n             :    4;  /*The clock division of cclk_in.*/
            uint32_t reg_esdio_mode                :    1;  /*Enable esdio mode.*/
            uint32_t reg_esd_mode                  :    1;  /*Enable esd mode.*/
            uint32_t reg_cclk_en                   :    1;  /*Sdio clock enable.*/
            uint32_t reg_ultra_high_speed_mode     :    1;  /*Enable ultra high speed mode, use dll to generate clk.*/
            uint32_t reserved24                    :    8;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_clk_edge_sel;
    uint32_t sdhost_raw_ints;
    union {
        struct {
            uint32_t reg_dll_cclk_in_slf_en        :    1;  /*Clock enable of cclk_in_slf when ULTRA_HIGH_SPEED_MODE==1.*/
            uint32_t reg_dll_cclk_in_drv_en        :    1;  /*Clock enable of cclk_in_drv when ULTRA_HIGH_SPEED_MODE==1.*/
            uint32_t reg_dll_cclk_in_sam_en        :    1;  /*Clock enable of cclk_in_sam when ULTRA_HIGH_SPEED_MODE==1.*/
            uint32_t reg_dll_cclk_in_slf_phase     :    6;  /*It's used to control the phase of cclk_in_slf when ULTRA_HIGH_SPEED_MODE==1.*/
            uint32_t reg_dll_cclk_in_drv_phase     :    6;  /*It's used to control the phase of cclk_in_drv when ULTRA_HIGH_SPEED_MODE==1.*/
            uint32_t reg_dll_cclk_in_sam_phase     :    6;  /*It's used to control the phase of cclk_in_sam when ULTRA_HIGH_SPEED_MODE==1.*/
            uint32_t reserved21                    :    11;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_dll_clk_conf;
    union {
        struct {
            uint32_t reg_dll_cal_stop              :    1;  /*Set 1 to stop calibration.*/
            uint32_t reg_dll_cal_end               :    1;  /*1 means calibration finished.*/
            uint32_t reserved2                     :    30;  /*Reserved*/
        };
        uint32_t val;
    } sdhost_dll_conf;
} sdmmc_dev_t;
extern sdmmc_dev_t SDMMC;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_SDMMC_STRUCT_H_ */
