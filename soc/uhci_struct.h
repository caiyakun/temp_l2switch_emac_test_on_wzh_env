/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_UHCI_STRUCT_H_
#define _SOC_UHCI_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t tx_rst                        :    1;  /*Write 1 then write 0 to this bit to reset decode state machine.*/
            uint32_t rx_rst                        :    1;  /*Write 1 then write 0 to this bit to reset encode state machine.*/
            uint32_t uart_sel                      :    3;  /*Select which uart to connect with GDMA.*/
            uint32_t seper_en                      :    1;  /*Set this bit to separate the data frame using a special char.*/
            uint32_t head_en                       :    1;  /*Set this bit to encode the data packet with a formatting header.*/
            uint32_t crc_rec_en                    :    1;  /*Set this bit to enable UHCI to receive the 16 bit CRC.*/
            uint32_t uart_idle_eof_en              :    1;  /*If this bit is set to 1 UHCI will end the payload receiving process when UART has been in idle state. */
            uint32_t len_eof_en                    :    1;  /*If this bit is set to 1 UHCI decoder receiving payload data is end when the receiving byte count has reached the specified value. The value is payload length indicated by UHCI packet header when UHCI_HEAD_EN is 1 or the value is configuration value when UHCI_HEAD_EN is 0. If this bit is set to 0 UHCI decoder receiving payload data is end when 0xc0 is received.*/
            uint32_t encode_crc_en                 :    1;  /*Set this bit to enable data integrity checking by appending a 16 bit CCITT-CRC to end of the payload.*/
            uint32_t clk_en                        :    1;  /*1'b1: Force clock on for register. 1'b0: Support clock only when application writes registers.*/
            uint32_t uart_rx_brk_eof_en            :    1;  /*If this bit is set to 1 UHCI will end payload receive process when NULL frame is received by UART.*/
            uint32_t reserved13                    :    19;  /*Reserved*/
        };
        uint32_t val;
    } conf0;
    union {
        struct {
            uint32_t rx_start                      :    1;  /*Indicates the raw interrupt of UHCI_RX_START_INT. Interrupt will be triggered when delimiter is sent successfully.*/
            uint32_t tx_start                      :    1;  /*Indicates the raw interrupt of UHCI_TX_START_INT. Interrupt will be triggered when DMA detects delimiter.*/
            uint32_t rx_hung                       :    1;  /*Indicates the raw interrupt of UHCI_RX_HUNG_INT. Interrupt will be triggered when the required time of DMA receiving data  exceeds the configuration value.*/
            uint32_t tx_hung                       :    1;  /*Indicates the raw interrupt of UHCI_TX_HUNG_INT. Interrupt will be triggered when the required time of DMA reading RAM data  exceeds the configuration value.*/
            uint32_t send_s_q                      :    1;  /*Indicates the raw interrupt of UHCI_SEND_S_REG_Q_INT. Interrupt will be triggered when UHCI sends short packet successfully with single_send mode.*/
            uint32_t send_a_q                      :    1;  /*Indicates the raw interrupt of UHCI_SEND_A_REG_Q_INT. Interrupt will be triggered when UHCI sends short packet successfully with always_send mode.*/
            uint32_t outlink_eof_err               :    1;  /*Indicates the raw interrupt of UHCI_OUT_EOF_INT. Interrupt will be triggered when there are errors in EOF.*/
            uint32_t app_ctrl0                     :    1;  /*Indicates the raw interrupt of UHCI_APP_CTRL0_INT. Interrupt will be triggered when UHCI_APP_CTRL0_IN_SET is set to 1.*/
            uint32_t app_ctrl1                     :    1;  /*Indicates the raw interrupt of UHCI_APP_CTRL1_INT. Interrupt will be triggered when UHCI_APP_CTRL1_IN_SET is set to 1.*/
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t rx_start                      :    1;  /*Indicates the interrupt status of UHCI_RX_START_INT. */
            uint32_t tx_start                      :    1;  /*Indicates the interrupt status of UHCI_TX_START_INT. */
            uint32_t rx_hung                       :    1;  /*Indicates the interrupt status of UHCI_RX_HUNG_INT.*/
            uint32_t tx_hung                       :    1;  /*Indicates the interrupt status of UHCI_TX_HUNG_INT. */
            uint32_t send_s_q                      :    1;  /*Indicates the interrupt status of UHCI_SEND_S_REG_Q_INT. */
            uint32_t send_a_q                      :    1;  /*Indicates the interrupt status of UHCI_SEND_A_REG_Q_INT. */
            uint32_t outlink_eof_err               :    1;  /*Indicates the interrupt status of UHCI_OUT_EOF_INT. */
            uint32_t app_ctrl0                     :    1;  /*Indicates the interrupt status of UHCI_APP_CTRL0_INT. */
            uint32_t app_ctrl1                     :    1;  /*Indicates the interrupt status of UHCI_APP_CTRL1_INT.*/
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } int_st;
    union {
        struct {
            uint32_t rx_start                      :    1;  /*Set this bit to enable the interrupt of UHCI_RX_START_INT. */
            uint32_t tx_start                      :    1;  /*Set this bit to enable the interrupt of UHCI_TX_START_INT. */
            uint32_t rx_hung                       :    1;  /*Set this bit to enable the interrupt of UHCI_RX_HUNG_INT.*/
            uint32_t tx_hung                       :    1;  /*Set this bit to enable the interrupt of UHCI_TX_HUNG_INT. */
            uint32_t send_s_q                      :    1;  /*Set this bit to enable the interrupt of UHCI_SEND_S_REG_Q_INT. */
            uint32_t send_a_q                      :    1;  /*Set this bit to enable the interrupt of UHCI_SEND_A_REG_Q_INT. */
            uint32_t outlink_eof_err               :    1;  /*Set this bit to enable the interrupt of UHCI_OUT_EOF_INT. */
            uint32_t app_ctrl0                     :    1;  /*Set this bit to enable the interrupt of UHCI_APP_CTRL0_INT. */
            uint32_t app_ctrl1                     :    1;  /*Set this bit to enable the interrupt of UHCI_APP_CTRL1_INT.*/
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t rx_start                      :    1;  /*Set this bit to clear the raw interrupt of UHCI_RX_START_INT. */
            uint32_t tx_start                      :    1;  /*Set this bit to clear the raw interrupt of UHCI_TX_START_INT. */
            uint32_t rx_hung                       :    1;  /*Set this bit to clear the raw interrupt of UHCI_RX_HUNG_INT.*/
            uint32_t tx_hung                       :    1;  /*Set this bit to clear the raw interrupt of UHCI_TX_HUNG_INT. */
            uint32_t send_s_q                      :    1;  /*Set this bit to clear the raw interrupt of UHCI_SEND_S_REG_Q_INT. */
            uint32_t send_a_q                      :    1;  /*Set this bit to clear the raw interrupt of UHCI_SEND_A_REG_Q_INT. */
            uint32_t outlink_eof_err               :    1;  /*Set this bit to clear the raw interrupt of UHCI_OUT_EOF_INT. */
            uint32_t app_ctrl0                     :    1;  /*Set this bit to clear the raw interrupt of UHCI_APP_CTRL0_INT. */
            uint32_t app_ctrl1                     :    1;  /*Set this bit to clear the raw interrupt of UHCI_APP_CTRL1_INT.*/
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } int_clr;
    union {
        struct {
            uint32_t check_sum_en                  :    1;  /*Set this bit to enable head checksum check when receiving.*/
            uint32_t check_seq_en                  :    1;  /*Set this bit to  enable sequence number check when receiving.*/
            uint32_t crc_disable                   :    1;  /*Set this bit to support CRC calculation, and data integrity check bit should 1.*/
            uint32_t save_head                     :    1;  /*Set this bit to save data packet head when UHCI receive data.*/
            uint32_t tx_check_sum_re               :    1;  /*Set this bit to encode data packet with checksum.*/
            uint32_t tx_ack_num_re                 :    1;  /*Set this bit to encode data packet with ACK when reliable data packet is ready.*/
            uint32_t reserved6                     :    1;  /*Reserved*/
            uint32_t wait_sw_start                 :    1;  /*Set this bit to enable UHCI encoder transfer to ST_SW_WAIT status.*/
            uint32_t sw_start                      :    1;  /*Set this bit to transmit data packet if UCHI_ENCODE_STATE is ST_SW_WAIT.*/
            uint32_t reserved9                     :    12;  /*Reserved*/
            uint32_t reserved21                    :    11;  /*Reserved*/
        };
        uint32_t val;
    } conf1;
    union {
        struct {
            uint32_t rx_err_cause                  :    3;  /*Indicates the error types when DMA receives the error frame. 3'b001: UHCI packet checksum error. 3'b010: UHCI packet sequence number error. 3'b011: UHCI packet CRC bit error. 3'b100: find 0xC0, but received packet is uncompleted. 3'b101: 0xC0 is not found, but received packet is completed. 3'b110: CRC check error.  */
            uint32_t decode_state                  :    3;  /*Indicates UHCI decoder status.*/
            uint32_t reserved6                     :    26;  /*Reserved*/
        };
        uint32_t val;
    } state0;
    union {
        struct {
            uint32_t encode_state                  :    3;  /*Indicates UHCI encoder status.*/
            uint32_t reserved3                     :    29;  /*Reserved*/
        };
        uint32_t val;
    } state1;
    union {
        struct {
            uint32_t tx_c0_esc_en                  :    1;  /*Set this bit to enable resolve char 0xC0 when DMA receiving data.*/
            uint32_t tx_db_esc_en                  :    1;  /*Set this bit to enable resolve char 0xDB when DMA receiving data.*/
            uint32_t tx_11_esc_en                  :    1;  /*Set this bit to enable resolve flow control char 0x11 when DMA receiving data.*/
            uint32_t tx_13_esc_en                  :    1;  /*Set this bit to enable resolve flow control char 0x13 when DMA receiving data.*/
            uint32_t rx_c0_esc_en                  :    1;  /*Set this bit to enable replacing 0xC0 with special char when DMA receiving data.*/
            uint32_t rx_db_esc_en                  :    1;  /*Set this bit to enable replacing 0xDB with special char when DMA receiving data.*/
            uint32_t rx_11_esc_en                  :    1;  /*Set this bit to enable replacing 0x11 with special char when DMA receiving data.*/
            uint32_t rx_13_esc_en                  :    1;  /*Set this bit to enable replacing 0x13 with special char when DMA receiving data.*/
            uint32_t reserved8                     :    24;  /*Reserved*/
        };
        uint32_t val;
    } escape_conf;
    union {
        struct {
            uint32_t txfifo_timeout                :    8;  /*Stores the timeout value. DMA generates UHCI_TX_HUNG_INT for timeout when receiving data.*/
            uint32_t txfifo_timeout_shift          :    3;  /*Configures the maximum counter value.*/
            uint32_t txfifo_timeout_ena            :    1;  /*Set this bit to enable TX FIFO timeout when receiving.*/
            uint32_t rxfifo_timeout                :    8;  /*Stores the timeout value. DMA generates UHCI_TX_HUNG_INT for timeout when reading RAM data.*/
            uint32_t rxfifo_timeout_shift          :    3;  /*Configures the maximum counter value.*/
            uint32_t rxfifo_timeout_ena            :    1;  /*Set this bit to enable TX FIFO timeout when DMA sending data.*/
            uint32_t reserved24                    :    8;  /*Reserved*/
        };
        uint32_t val;
    } hung_conf;
    union {
        struct {
            uint32_t ack_num                       :    3;  /*Indicates the ACK number during software flow control.*/
            uint32_t ack_num_load                  :    1;  /*Set this bit to load the ACK value of UHCI_ACK_NUM.*/
            uint32_t reserved4                     :    28;  /*Reserved*/
        };
        uint32_t val;
    } ack_num;
    uint32_t rx_head;
    union {
        struct {
            uint32_t single_send_num               :    3;  /*Configures single_send mode.*/
            uint32_t single_send_en                :    1;  /*Set this bit to enable sending short packet with single_send mode.*/
            uint32_t always_send_num               :    3;  /*Configures always_send mode.*/
            uint32_t always_send_en                :    1;  /*Set this bit to enable sending short packet with always_send mode.*/
            uint32_t reserved8                     :    24;  /*Reserved*/
        };
        uint32_t val;
    } quick_sent;
    uint32_t q0_word0;
    uint32_t q0_word1;
    uint32_t q1_word0;
    uint32_t q1_word1;
    uint32_t q2_word0;
    uint32_t q2_word1;
    uint32_t q3_word0;
    uint32_t q3_word1;
    uint32_t q4_word0;
    uint32_t q4_word1;
    uint32_t q5_word0;
    uint32_t q5_word1;
    uint32_t q6_word0;
    uint32_t q6_word1;
    union {
        struct {
            uint32_t seper_char                    :    8;  /*Configures the delimiter for encoding, default value is 0xC0.*/
            uint32_t seper_esc_char0               :    8;  /*Configures the first char of SLIP escape character, default value is 0xDB.*/
            uint32_t seper_esc_char1               :    8;  /*Configures the second char of SLIP escape character, default value is 0xDC.*/
            uint32_t reserved24                    :    8;  /*Reserved*/
        };
        uint32_t val;
    } esc_conf0;
    union {
        struct {
            uint32_t seq0                          :    8;  /*Configures the char needing encoding, which is 0xDB as flow control char by default.*/
            uint32_t seq0_char0                    :    8;  /*Configures the first char of SLIP escape character, default value is 0xDB.*/
            uint32_t seq0_char1                    :    8;  /*Configures the second char of SLIP escape character, default value is 0xDD.*/
            uint32_t reserved24                    :    8;  /*Reserved*/
        };
        uint32_t val;
    } esc_conf1;
    union {
        struct {
            uint32_t seq1                          :    8;  /*Configures the char needing encoding, which is 0x11 as flow control char by default.*/
            uint32_t seq1_char0                    :    8;  /*Configures the first char of SLIP escape character, default value is 0xDB.*/
            uint32_t seq1_char1                    :    8;  /*Configures the second char of SLIP escape character, default value is 0xDE.*/
            uint32_t reserved24                    :    8;  /*Reserved*/
        };
        uint32_t val;
    } esc_conf2;
    union {
        struct {
            uint32_t seq2                          :    8;  /*Configures the char needing encoding, which is 0x13 as flow control char by default.*/
            uint32_t seq2_char0                    :    8;  /*Configures the first char of SLIP escape character, default value is 0xDB.*/
            uint32_t seq2_char1                    :    8;  /*Configures the second char of SLIP escape character, default value is 0xDF.*/
            uint32_t reserved24                    :    8;  /*Reserved*/
        };
        uint32_t val;
    } esc_conf3;
    union {
        struct {
            uint32_t thrs                          :    13;  /*Configures the data packet's maximum length when UHCI_HEAD_EN is 0.*/
            uint32_t reserved13                    :    19;  /*Reserved*/
        };
        uint32_t val;
    } pkt_thres;
    uint32_t date;
} uhci_dev_t;
extern uhci_dev_t UHCI0;
extern uhci_dev_t UHCI1;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_UHCI_STRUCT_H_ */
