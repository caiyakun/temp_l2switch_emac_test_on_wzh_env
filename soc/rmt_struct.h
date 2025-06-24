/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_RMT_STRUCT_H_
#define _SOC_RMT_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    uint32_t ch0data;
    uint32_t ch1data;
    uint32_t data;
    uint32_t ch3data;
    uint32_t ch4data;
    uint32_t ch5data;
    uint32_t ch6data;
    uint32_t ch7data;
    union {
        struct {
            uint32_t tx_start                      :    1;  /*Set this bit to start sending data on CHANNEL$n.*/
            uint32_t mem_rd_rst                    :    1;  /*Set this bit to reset read ram address for CHANNEL$n by accessing transmitter.*/
            uint32_t mem_rst                       :    1;  /*Set this bit to reset W/R ram address for CHANNEL$n by accessing apb fifo.*/
            uint32_t tx_conti_mode                 :    1;  /*Set this bit to restart transmission  from the first data to the last data in CHANNEL$n.*/
            uint32_t mem_tx_wrap_en                :    1;  /*This is the channel $n enable bit for wraparound mode: it will resume sending at the start when the data to be sent is more than its memory size.*/
            uint32_t idle_out_lv                   :    1;  /*This bit configures the level of output signal in CHANNEL$n when the latter is in IDLE state.*/
            uint32_t idle_out_en                   :    1;  /*This is the output enable-control bit for CHANNEL$n in IDLE state.*/
            uint32_t tx_stop                       :    1;  /*Set this bit to stop the transmitter of CHANNEL$n sending data out.*/
            uint32_t div_cnt                       :    8;  /*This register is used to configure the divider for clock of CHANNEL$n.*/
            uint32_t mem_size                      :    4;  /*This register is used to configure the maximum size of memory allocated to CHANNEL$n.*/
            uint32_t carrier_eff_en                :    1;  /*1: Add carrier modulation on the output signal only at the send data state for CHANNEL$n. 0: Add carrier modulation on the output signal at all state for CHANNEL$n. Only valid when RMT_CARRIER_EN_CH$n is 1.*/
            uint32_t carrier_en                    :    1;  /*This is the carrier modulation enable-control bit for CHANNEL$n. 1: Add carrier modulation in the output signal. 0: No carrier modulation in sig_out.*/
            uint32_t carrier_out_lv                :    1;  /*This bit is used to configure the position of carrier wave for CHANNEL$n.1'h0: add carrier wave on low level.1'h1: add carrier wave on high level.*/
            uint32_t afifo_rst                     :    1;  /*Reserved*/
            uint32_t conf_update                   :    1;  /*synchronization bit for CHANNEL$n*/
            uint32_t reserved25                    :    7;  /*Reserved*/
        };
        uint32_t val;
    } ch0conf0;
    union {
        struct {
            uint32_t tx_start_ch1                  :    1;  /*Set this bit to start sending data on CHANNEL$n.*/
            uint32_t mem_rd_rst_ch1                :    1;  /*Set this bit to reset read ram address for CHANNEL$n by accessing transmitter.*/
            uint32_t mem_rst_ch1                   :    1;  /*Set this bit to reset W/R ram address for CHANNEL$n by accessing apb fifo.*/
            uint32_t tx_conti_mode_ch1             :    1;  /*Set this bit to restart transmission  from the first data to the last data in CHANNEL$n.*/
            uint32_t mem_tx_wrap_en_ch1            :    1;  /*This is the channel $n enable bit for wraparound mode: it will resume sending at the start when the data to be sent is more than its memory size.*/
            uint32_t idle_out_lv_ch1               :    1;  /*This bit configures the level of output signal in CHANNEL$n when the latter is in IDLE state.*/
            uint32_t idle_out_en_ch1               :    1;  /*This is the output enable-control bit for CHANNEL$n in IDLE state.*/
            uint32_t tx_stop_ch1                   :    1;  /*Set this bit to stop the transmitter of CHANNEL$n sending data out.*/
            uint32_t div_cnt_ch1                   :    8;  /*This register is used to configure the divider for clock of CHANNEL$n.*/
            uint32_t mem_size_ch1                  :    4;  /*This register is used to configure the maximum size of memory allocated to CHANNEL$n.*/
            uint32_t carrier_eff_en_ch1            :    1;  /*1: Add carrier modulation on the output signal only at the send data state for CHANNEL$n. 0: Add carrier modulation on the output signal at all state for CHANNEL$n. Only valid when RMT_CARRIER_EN_CH$n is 1.*/
            uint32_t carrier_en_ch1                :    1;  /*This is the carrier modulation enable-control bit for CHANNEL$n. 1: Add carrier modulation in the output signal. 0: No carrier modulation in sig_out.*/
            uint32_t carrier_out_lv_ch1            :    1;  /*This bit is used to configure the position of carrier wave for CHANNEL$n.1'h0: add carrier wave on low level.1'h1: add carrier wave on high level.*/
            uint32_t afifo_rst_ch1                 :    1;  /*Reserved*/
            uint32_t conf_update_ch1               :    1;  /*synchronization bit for CHANNEL$n*/
            uint32_t reserved25                    :    7;  /*Reserved*/
        };
        uint32_t val;
    } ch1conf0;
    union {
        struct {
            uint32_t tx_start                      :    1;  /*Set this bit to start sending data on CHANNEL$n.*/
            uint32_t mem_rd_rst                    :    1;  /*Set this bit to reset read ram address for CHANNEL$n by accessing transmitter.*/
            uint32_t mem_rst                       :    1;  /*Set this bit to reset W/R ram address for CHANNEL$n by accessing apb fifo.*/
            uint32_t tx_conti_mode                 :    1;  /*Set this bit to restart transmission  from the first data to the last data in CHANNEL$n.*/
            uint32_t mem_tx_wrap_en                :    1;  /*This is the channel $n enable bit for wraparound mode: it will resume sending at the start when the data to be sent is more than its memory size.*/
            uint32_t idle_out_lv                   :    1;  /*This bit configures the level of output signal in CHANNEL$n when the latter is in IDLE state.*/
            uint32_t idle_out_en                   :    1;  /*This is the output enable-control bit for CHANNEL$n in IDLE state.*/
            uint32_t tx_stop                       :    1;  /*Set this bit to stop the transmitter of CHANNEL$n sending data out.*/
            uint32_t div_cnt                       :    8;  /*This register is used to configure the divider for clock of CHANNEL$n.*/
            uint32_t mem_size                      :    4;  /*This register is used to configure the maximum size of memory allocated to CHANNEL$n.*/
            uint32_t carrier_eff_en                :    1;  /*1: Add carrier modulation on the output signal only at the send data state for CHANNEL$n. 0: Add carrier modulation on the output signal at all state for CHANNEL$n. Only valid when RMT_CARRIER_EN_CH$n is 1.*/
            uint32_t carrier_en                    :    1;  /*This is the carrier modulation enable-control bit for CHANNEL$n. 1: Add carrier modulation in the output signal. 0: No carrier modulation in sig_out.*/
            uint32_t carrier_out_lv                :    1;  /*This bit is used to configure the position of carrier wave for CHANNEL$n.1'h0: add carrier wave on low level.1'h1: add carrier wave on high level.*/
            uint32_t afifo_rst                     :    1;  /*Reserved*/
            uint32_t conf_update                   :    1;  /*synchronization bit for CHANNEL$n*/
            uint32_t reserved25                    :    7;  /*Reserved*/
        };
        uint32_t val;
    } conf0;
    union {
        struct {
            uint32_t tx_start_ch3                  :    1;  /*Set this bit to start sending data on CHANNEL$n.*/
            uint32_t mem_rd_rst_ch3                :    1;  /*Set this bit to reset read ram address for CHANNEL$n by accessing transmitter.*/
            uint32_t mem_rst_ch3                   :    1;  /*Set this bit to reset W/R ram address for CHANNEL$n by accessing apb fifo.*/
            uint32_t tx_conti_mode_ch3             :    1;  /*Set this bit to restart transmission  from the first data to the last data in CHANNEL$n.*/
            uint32_t mem_tx_wrap_en_ch3            :    1;  /*This is the channel $n enable bit for wraparound mode: it will resume sending at the start when the data to be sent is more than its memory size.*/
            uint32_t idle_out_lv_ch3               :    1;  /*This bit configures the level of output signal in CHANNEL$n when the latter is in IDLE state.*/
            uint32_t idle_out_en_ch3               :    1;  /*This is the output enable-control bit for CHANNEL$n in IDLE state.*/
            uint32_t tx_stop_ch3                   :    1;  /*Set this bit to stop the transmitter of CHANNEL$n sending data out.*/
            uint32_t div_cnt_ch3                   :    8;  /*This register is used to configure the divider for clock of CHANNEL$n.*/
            uint32_t mem_size_ch3                  :    4;  /*This register is used to configure the maximum size of memory allocated to CHANNEL$n.*/
            uint32_t carrier_eff_en_ch3            :    1;  /*1: Add carrier modulation on the output signal only at the send data state for CHANNEL$n. 0: Add carrier modulation on the output signal at all state for CHANNEL$n. Only valid when RMT_CARRIER_EN_CH$n is 1.*/
            uint32_t carrier_en_ch3                :    1;  /*This is the carrier modulation enable-control bit for CHANNEL$n. 1: Add carrier modulation in the output signal. 0: No carrier modulation in sig_out.*/
            uint32_t carrier_out_lv_ch3            :    1;  /*This bit is used to configure the position of carrier wave for CHANNEL$n.1'h0: add carrier wave on low level.1'h1: add carrier wave on high level.*/
            uint32_t afifo_rst_ch3                 :    1;  /*Reserved*/
            uint32_t conf_update_ch3               :    1;  /*synchronization bit for CHANNEL$n*/
            uint32_t dma_access_en_ch3             :    1;  /*This bit is used to enable the dma access function for CHANNEL$n.*/
            uint32_t reserved26                    :    6;  /*Reserved*/
        };
        uint32_t val;
    } ch3conf0;
    union {
        struct {
            uint32_t div_cnt_ch4                   :    8;  /*This register is used to configure the divider for clock of CHANNEL$m.*/
            uint32_t idle_thres_ch4                :    15;  /*When no edge is detected on the input signal and continuous clock cycles is longer than this register value, received process is finished.*/
            uint32_t reserved23                    :    1;  /*Reserved*/
            uint32_t mem_size_ch4                  :    4;  /*This register is used to configure the maximum size of memory allocated to CHANNEL$m.*/
            uint32_t carrier_en_ch4                :    1;  /*This is the carrier modulation enable-control bit for CHANNEL$m. 1: Add carrier modulation in the output signal. 0: No carrier modulation in sig_out.*/
            uint32_t carrier_out_lv_ch4            :    1;  /*This bit is used to configure the position of carrier wave for CHANNEL$m.1'h0: add carrier wave on low level.1'h1: add carrier wave on high level.*/
            uint32_t reserved30                    :    2;  /*Reserved*/
        };
        uint32_t val;
    } ch4conf0;
    union {
        struct {
            uint32_t rx_en_ch4                     :    1;  /*Set this bit to enable receiver to receive data on CHANNEL$m.*/
            uint32_t mem_wr_rst_ch4                :    1;  /*Set this bit to reset write ram address for CHANNEL$m by accessing receiver.*/
            uint32_t mem_rst_ch4                   :    1;  /*Set this bit to reset W/R ram address for CHANNEL$m by accessing apb fifo.*/
            uint32_t mem_owner_ch4                 :    1;  /*This register marks the ownership of CHANNEL$m's ram block.1'h1: Receiver is using the ram. 1'h0: APB bus is using the ram.*/
            uint32_t rx_filter_en_ch4              :    1;  /*This is the receive filter's enable bit for CHANNEL$m.*/
            uint32_t rx_filter_thres_ch4           :    8;  /*Ignores the input pulse when its width is smaller than this register value in APB clock periods (in receive mode).*/
            uint32_t mem_rx_wrap_en_ch4            :    1;  /*This is the channel $m enable bit for wraparound mode: it will resume receiving at the start when the data to be received is more than its memory size.*/
            uint32_t afifo_rst_ch4                 :    1;  /*Reserved*/
            uint32_t conf_update_ch4               :    1;  /*synchronization bit for CHANNEL$m*/
            uint32_t reserved16                    :    16;  /*Reserved*/
        };
        uint32_t val;
    } ch4conf1;
    union {
        struct {
            uint32_t div_cnt_ch5                   :    8;  /*This register is used to configure the divider for clock of CHANNEL$m.*/
            uint32_t idle_thres_ch5                :    15;  /*When no edge is detected on the input signal and continuous clock cycles is longer than this register value, received process is finished.*/
            uint32_t reserved23                    :    1;  /*Reserved*/
            uint32_t mem_size_ch5                  :    4;  /*This register is used to configure the maximum size of memory allocated to CHANNEL$m.*/
            uint32_t carrier_en_ch5                :    1;  /*This is the carrier modulation enable-control bit for CHANNEL$m. 1: Add carrier modulation in the output signal. 0: No carrier modulation in sig_out.*/
            uint32_t carrier_out_lv_ch5            :    1;  /*This bit is used to configure the position of carrier wave for CHANNEL$m.1'h0: add carrier wave on low level.1'h1: add carrier wave on high level.*/
            uint32_t reserved30                    :    2;  /*Reserved*/
        };
        uint32_t val;
    } ch5conf0;
    union {
        struct {
            uint32_t rx_en_ch5                     :    1;  /*Set this bit to enable receiver to receive data on CHANNEL$m.*/
            uint32_t mem_wr_rst_ch5                :    1;  /*Set this bit to reset write ram address for CHANNEL$m by accessing receiver.*/
            uint32_t mem_rst_ch5                   :    1;  /*Set this bit to reset W/R ram address for CHANNEL$m by accessing apb fifo.*/
            uint32_t mem_owner_ch5                 :    1;  /*This register marks the ownership of CHANNEL$m's ram block.1'h1: Receiver is using the ram. 1'h0: APB bus is using the ram.*/
            uint32_t rx_filter_en_ch5              :    1;  /*This is the receive filter's enable bit for CHANNEL$m.*/
            uint32_t rx_filter_thres_ch5           :    8;  /*Ignores the input pulse when its width is smaller than this register value in APB clock periods (in receive mode).*/
            uint32_t mem_rx_wrap_en_ch5            :    1;  /*This is the channel $m enable bit for wraparound mode: it will resume receiving at the start when the data to be received is more than its memory size.*/
            uint32_t afifo_rst_ch5                 :    1;  /*Reserved*/
            uint32_t conf_update_ch5               :    1;  /*synchronization bit for CHANNEL$m*/
            uint32_t reserved16                    :    16;  /*Reserved*/
        };
        uint32_t val;
    } ch5conf1;
    union {
        struct {
            uint32_t div_cnt_ch6                   :    8;  /*This register is used to configure the divider for clock of CHANNEL$m.*/
            uint32_t idle_thres_ch6                :    15;  /*When no edge is detected on the input signal and continuous clock cycles is longer than this register value, received process is finished.*/
            uint32_t reserved23                    :    1;  /*Reserved*/
            uint32_t mem_size_ch6                  :    4;  /*This register is used to configure the maximum size of memory allocated to CHANNEL$m.*/
            uint32_t carrier_en_ch6                :    1;  /*This is the carrier modulation enable-control bit for CHANNEL$m. 1: Add carrier modulation in the output signal. 0: No carrier modulation in sig_out.*/
            uint32_t carrier_out_lv_ch6            :    1;  /*This bit is used to configure the position of carrier wave for CHANNEL$m.1'h0: add carrier wave on low level.1'h1: add carrier wave on high level.*/
            uint32_t reserved30                    :    2;  /*Reserved*/
        };
        uint32_t val;
    } ch6conf0;
    union {
        struct {
            uint32_t rx_en_ch6                     :    1;  /*Set this bit to enable receiver to receive data on CHANNEL$m.*/
            uint32_t mem_wr_rst_ch6                :    1;  /*Set this bit to reset write ram address for CHANNEL$m by accessing receiver.*/
            uint32_t mem_rst_ch6                   :    1;  /*Set this bit to reset W/R ram address for CHANNEL$m by accessing apb fifo.*/
            uint32_t mem_owner_ch6                 :    1;  /*This register marks the ownership of CHANNEL$m's ram block.1'h1: Receiver is using the ram. 1'h0: APB bus is using the ram.*/
            uint32_t rx_filter_en_ch6              :    1;  /*This is the receive filter's enable bit for CHANNEL$m.*/
            uint32_t rx_filter_thres_ch6           :    8;  /*Ignores the input pulse when its width is smaller than this register value in APB clock periods (in receive mode).*/
            uint32_t mem_rx_wrap_en_ch6            :    1;  /*This is the channel $m enable bit for wraparound mode: it will resume receiving at the start when the data to be received is more than its memory size.*/
            uint32_t afifo_rst_ch6                 :    1;  /*Reserved*/
            uint32_t conf_update_ch6               :    1;  /*synchronization bit for CHANNEL$m*/
            uint32_t reserved16                    :    16;  /*Reserved*/
        };
        uint32_t val;
    } ch6conf1;
    union {
        struct {
            uint32_t div_cnt_ch7                   :    8;  /*This register is used to configure the divider for clock of CHANNEL$m.*/
            uint32_t idle_thres_ch7                :    15;  /*When no edge is detected on the input signal and continuous clock cycles is longer than this register value, received process is finished.*/
            uint32_t dma_access_en_ch7             :    1;  /*This bit is used to enable the dma access function for CHANNEL$m.*/
            uint32_t mem_size_ch7                  :    4;  /*This register is used to configure the maximum size of memory allocated to CHANNEL$m.*/
            uint32_t carrier_en_ch7                :    1;  /*This is the carrier modulation enable-control bit for CHANNEL$m. 1: Add carrier modulation in the output signal. 0: No carrier modulation in sig_out.*/
            uint32_t carrier_out_lv_ch7            :    1;  /*This bit is used to configure the position of carrier wave for CHANNEL$m.1'h0: add carrier wave on low level.1'h1: add carrier wave on high level.*/
            uint32_t reserved30                    :    2;  /*Reserved*/
        };
        uint32_t val;
    } ch7conf0;
    union {
        struct {
            uint32_t rx_en_ch7                     :    1;  /*Set this bit to enable receiver to receive data on CHANNEL$m.*/
            uint32_t mem_wr_rst_ch7                :    1;  /*Set this bit to reset write ram address for CHANNEL$m by accessing receiver.*/
            uint32_t mem_rst_ch7                   :    1;  /*Set this bit to reset W/R ram address for CHANNEL$m by accessing apb fifo.*/
            uint32_t mem_owner_ch7                 :    1;  /*This register marks the ownership of CHANNEL$m's ram block.1'h1: Receiver is using the ram. 1'h0: APB bus is using the ram.*/
            uint32_t rx_filter_en_ch7              :    1;  /*This is the receive filter's enable bit for CHANNEL$m.*/
            uint32_t rx_filter_thres_ch7           :    8;  /*Ignores the input pulse when its width is smaller than this register value in APB clock periods (in receive mode).*/
            uint32_t mem_rx_wrap_en_ch7            :    1;  /*This is the channel $m enable bit for wraparound mode: it will resume receiving at the start when the data to be received is more than its memory size.*/
            uint32_t afifo_rst_ch7                 :    1;  /*Reserved*/
            uint32_t conf_update_ch7               :    1;  /*synchronization bit for CHANNEL$m*/
            uint32_t reserved16                    :    16;  /*Reserved*/
        };
        uint32_t val;
    } ch7conf1;
    union {
        struct {
            uint32_t mem_raddr_ex                  :    10;  /*This register records the memory address offset when transmitter of CHANNEL$n is using the RAM.*/
            uint32_t reserved10                    :    1;  /*Reserved*/
            uint32_t mem_waddr                     :    10;  /*This register records the memory address offset when writes RAM over APB bus.*/
            uint32_t reserved21                    :    1;  /*Reserved*/
            uint32_t state                         :    3;  /*This register records the FSM status of CHANNEL$n.*/
            uint32_t mem_empty                     :    1;  /*This status bit will be set when the data to be set is more than memory size and the wraparound mode is disabled.*/
            uint32_t mem_wr_err                    :    1;  /*This status bit will be set if the offset address out of memory size when writes via APB bus.*/
            uint32_t reserved27                    :    5;  /*Reserved*/
        };
        uint32_t val;
    } ch0status;
    union {
        struct {
            uint32_t mem_raddr_ex_ch1              :    10;  /*This register records the memory address offset when transmitter of CHANNEL$n is using the RAM.*/
            uint32_t reserved10                    :    1;  /*Reserved*/
            uint32_t mem_waddr_ch1                 :    10;  /*This register records the memory address offset when writes RAM over APB bus.*/
            uint32_t reserved21                    :    1;  /*Reserved*/
            uint32_t state_ch1                     :    3;  /*This register records the FSM status of CHANNEL$n.*/
            uint32_t mem_empty_ch1                 :    1;  /*This status bit will be set when the data to be set is more than memory size and the wraparound mode is disabled.*/
            uint32_t mem_wr_err_ch1                :    1;  /*This status bit will be set if the offset address out of memory size when writes via APB bus.*/
            uint32_t reserved27                    :    5;  /*Reserved*/
        };
        uint32_t val;
    } ch1status;
    union {
        struct {
            uint32_t mem_raddr_ex                  :    10;  /*This register records the memory address offset when transmitter of CHANNEL$n is using the RAM.*/
            uint32_t reserved10                    :    1;  /*Reserved*/
            uint32_t mem_waddr                     :    10;  /*This register records the memory address offset when writes RAM over APB bus.*/
            uint32_t reserved21                    :    1;  /*Reserved*/
            uint32_t state                         :    3;  /*This register records the FSM status of CHANNEL$n.*/
            uint32_t mem_empty                     :    1;  /*This status bit will be set when the data to be set is more than memory size and the wraparound mode is disabled.*/
            uint32_t mem_wr_err                    :    1;  /*This status bit will be set if the offset address out of memory size when writes via APB bus.*/
            uint32_t reserved27                    :    5;  /*Reserved*/
        };
        uint32_t val;
    } status;
    union {
        struct {
            uint32_t mem_raddr_ex_ch3              :    10;  /*This register records the memory address offset when transmitter of CHANNEL$n is using the RAM.*/
            uint32_t reserved10                    :    1;  /*Reserved*/
            uint32_t mem_waddr_ch3                 :    10;  /*This register records the memory address offset when writes RAM over APB bus.*/
            uint32_t reserved21                    :    1;  /*Reserved*/
            uint32_t state_ch3                     :    3;  /*This register records the FSM status of CHANNEL$n.*/
            uint32_t mem_empty_ch3                 :    1;  /*This status bit will be set when the data to be set is more than memory size and the wraparound mode is disabled.*/
            uint32_t mem_wr_err_ch3                :    1;  /*This status bit will be set if the offset address out of memory size when writes via APB bus.*/
            uint32_t reserved27                    :    5;  /*Reserved*/
        };
        uint32_t val;
    } ch3status;
    union {
        struct {
            uint32_t mem_waddr_ex_ch4              :    10;  /*This register records the memory address offset when receiver of CHANNEL$m is using the RAM.*/
            uint32_t reserved10                    :    1;  /*Reserved*/
            uint32_t mem_raddr_ch4                 :    10;  /*This register records the memory address offset when reads RAM over APB bus.*/
            uint32_t reserved21                    :    1;  /*Reserved*/
            uint32_t state_ch4                     :    3;  /*This register records the FSM status of CHANNEL$m.*/
            uint32_t mem_owner_err_ch4             :    1;  /*This status bit will be set when the ownership of memory block is wrong.*/
            uint32_t mem_full_ch4                  :    1;  /*This status bit will be set if the receiver receives more data than the memory size.*/
            uint32_t mem_rd_err_ch4                :    1;  /*This status bit will be set if the offset address out of memory size when reads via APB bus.*/
            uint32_t reserved28                    :    4;  /*Reserved*/
        };
        uint32_t val;
    } ch4status;
    union {
        struct {
            uint32_t mem_waddr_ex_ch5              :    10;  /*This register records the memory address offset when receiver of CHANNEL$m is using the RAM.*/
            uint32_t reserved10                    :    1;  /*Reserved*/
            uint32_t mem_raddr_ch5                 :    10;  /*This register records the memory address offset when reads RAM over APB bus.*/
            uint32_t reserved21                    :    1;  /*Reserved*/
            uint32_t state_ch5                     :    3;  /*This register records the FSM status of CHANNEL$m.*/
            uint32_t mem_owner_err_ch5             :    1;  /*This status bit will be set when the ownership of memory block is wrong.*/
            uint32_t mem_full_ch5                  :    1;  /*This status bit will be set if the receiver receives more data than the memory size.*/
            uint32_t mem_rd_err_ch5                :    1;  /*This status bit will be set if the offset address out of memory size when reads via APB bus.*/
            uint32_t reserved28                    :    4;  /*Reserved*/
        };
        uint32_t val;
    } ch5status;
    union {
        struct {
            uint32_t mem_waddr_ex_ch6              :    10;  /*This register records the memory address offset when receiver of CHANNEL$m is using the RAM.*/
            uint32_t reserved10                    :    1;  /*Reserved*/
            uint32_t mem_raddr_ch6                 :    10;  /*This register records the memory address offset when reads RAM over APB bus.*/
            uint32_t reserved21                    :    1;  /*Reserved*/
            uint32_t state_ch6                     :    3;  /*This register records the FSM status of CHANNEL$m.*/
            uint32_t mem_owner_err_ch6             :    1;  /*This status bit will be set when the ownership of memory block is wrong.*/
            uint32_t mem_full_ch6                  :    1;  /*This status bit will be set if the receiver receives more data than the memory size.*/
            uint32_t mem_rd_err_ch6                :    1;  /*This status bit will be set if the offset address out of memory size when reads via APB bus.*/
            uint32_t reserved28                    :    4;  /*Reserved*/
        };
        uint32_t val;
    } ch6status;
    union {
        struct {
            uint32_t mem_waddr_ex_ch7              :    10;  /*This register records the memory address offset when receiver of CHANNEL$m is using the RAM.*/
            uint32_t reserved10                    :    1;  /*Reserved*/
            uint32_t mem_raddr_ch7                 :    10;  /*This register records the memory address offset when reads RAM over APB bus.*/
            uint32_t reserved21                    :    1;  /*Reserved*/
            uint32_t state_ch7                     :    3;  /*This register records the FSM status of CHANNEL$m.*/
            uint32_t mem_owner_err_ch7             :    1;  /*This status bit will be set when the ownership of memory block is wrong.*/
            uint32_t mem_full_ch7                  :    1;  /*This status bit will be set if the receiver receives more data than the memory size.*/
            uint32_t mem_rd_err_ch7                :    1;  /*This status bit will be set if the offset address out of memory size when reads via APB bus.*/
            uint32_t reserved28                    :    4;  /*Reserved*/
        };
        uint32_t val;
    } ch7status;
    union {
        struct {
            uint32_t ch0_tx_end                    :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when transmission done.*/
            uint32_t ch1_tx_end                    :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when transmission done.*/
            uint32_t ch2_tx_end                    :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when transmission done.*/
            uint32_t ch3_tx_end                    :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when transmission done.*/
            uint32_t ch0_err                       :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when error occurs.*/
            uint32_t ch1_err                       :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when error occurs.*/
            uint32_t ch2_err                       :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when error occurs.*/
            uint32_t ch3_err                       :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when error occurs.*/
            uint32_t ch0_tx_thr_event              :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when transmitter sent more data than configured value.*/
            uint32_t ch1_tx_thr_event              :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when transmitter sent more data than configured value.*/
            uint32_t ch2_tx_thr_event              :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when transmitter sent more data than configured value.*/
            uint32_t ch3_tx_thr_event              :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when transmitter sent more data than configured value.*/
            uint32_t ch0_tx_loop                   :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when the loop count reaches the configured threshold value.*/
            uint32_t ch1_tx_loop                   :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when the loop count reaches the configured threshold value.*/
            uint32_t ch2_tx_loop                   :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when the loop count reaches the configured threshold value.*/
            uint32_t ch3_tx_loop                   :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when the loop count reaches the configured threshold value.*/
            uint32_t ch4_rx_end                    :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when reception done.*/
            uint32_t ch5_rx_end                    :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when reception done.*/
            uint32_t ch6_rx_end                    :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when reception done.*/
            uint32_t ch7_rx_end                    :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when reception done.*/
            uint32_t ch4_err                       :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when error occurs.*/
            uint32_t ch5_err                       :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when error occurs.*/
            uint32_t ch6_err                       :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when error occurs.*/
            uint32_t ch7_err                       :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when error occurs.*/
            uint32_t ch4_rx_thr_event              :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when receiver receive more data than configured value.*/
            uint32_t ch5_rx_thr_event              :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when receiver receive more data than configured value.*/
            uint32_t ch6_rx_thr_event              :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when receiver receive more data than configured value.*/
            uint32_t ch7_rx_thr_event              :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when receiver receive more data than configured value.*/
            uint32_t ch3_dma_access_fail           :    1;  /*The interrupt raw bit for CHANNEL$n. Triggered when dma accessing CHANNEL$n fails.*/
            uint32_t ch7_dma_access_fail           :    1;  /*The interrupt raw bit for CHANNEL$m. Triggered when dma accessing CHANNEL$m fails.*/
            uint32_t reserved30                    :    2;  /*Reserved*/
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t ch0_tx_end                    :    1;  /*The masked interrupt status bit for CH$n_TX_END_INT.*/
            uint32_t ch1_tx_end                    :    1;  /*The masked interrupt status bit for CH$n_TX_END_INT.*/
            uint32_t ch2_tx_end                    :    1;  /*The masked interrupt status bit for CH$n_TX_END_INT.*/
            uint32_t ch3_tx_end                    :    1;  /*The masked interrupt status bit for CH$n_TX_END_INT.*/
            uint32_t ch0_err                       :    1;  /*The masked interrupt status bit for CH$n_ERR_INT.*/
            uint32_t ch1_err                       :    1;  /*The masked interrupt status bit for CH$n_ERR_INT.*/
            uint32_t ch2_err                       :    1;  /*The masked interrupt status bit for CH$n_ERR_INT.*/
            uint32_t ch3_err                       :    1;  /*The masked interrupt status bit for CH$n_ERR_INT.*/
            uint32_t ch0_tx_thr_event              :    1;  /*The masked interrupt status bit for CH$n_TX_THR_EVENT_INT.*/
            uint32_t ch1_tx_thr_event              :    1;  /*The masked interrupt status bit for CH$n_TX_THR_EVENT_INT.*/
            uint32_t ch2_tx_thr_event              :    1;  /*The masked interrupt status bit for CH$n_TX_THR_EVENT_INT.*/
            uint32_t ch3_tx_thr_event              :    1;  /*The masked interrupt status bit for CH$n_TX_THR_EVENT_INT.*/
            uint32_t ch0_tx_loop                   :    1;  /*The masked interrupt status bit for CH$n_TX_LOOP_INT.*/
            uint32_t ch1_tx_loop                   :    1;  /*The masked interrupt status bit for CH$n_TX_LOOP_INT.*/
            uint32_t ch2_tx_loop                   :    1;  /*The masked interrupt status bit for CH$n_TX_LOOP_INT.*/
            uint32_t ch3_tx_loop                   :    1;  /*The masked interrupt status bit for CH$n_TX_LOOP_INT.*/
            uint32_t ch4_rx_end                    :    1;  /*The masked interrupt status bit for CH$m_RX_END_INT.*/
            uint32_t ch5_rx_end                    :    1;  /*The masked interrupt status bit for CH$m_RX_END_INT.*/
            uint32_t ch6_rx_end                    :    1;  /*The masked interrupt status bit for CH$m_RX_END_INT.*/
            uint32_t ch7_rx_end                    :    1;  /*The masked interrupt status bit for CH$m_RX_END_INT.*/
            uint32_t ch4_err                       :    1;  /*The masked interrupt status bit for CH$m_ERR_INT.*/
            uint32_t ch5_err                       :    1;  /*The masked interrupt status bit for CH$m_ERR_INT.*/
            uint32_t ch6_err                       :    1;  /*The masked interrupt status bit for CH$m_ERR_INT.*/
            uint32_t ch7_err                       :    1;  /*The masked interrupt status bit for CH$m_ERR_INT.*/
            uint32_t ch4_rx_thr_event              :    1;  /*The masked interrupt status bit for CH$m_RX_THR_EVENT_INT.*/
            uint32_t ch5_rx_thr_event              :    1;  /*The masked interrupt status bit for CH$m_RX_THR_EVENT_INT.*/
            uint32_t ch6_rx_thr_event              :    1;  /*The masked interrupt status bit for CH$m_RX_THR_EVENT_INT.*/
            uint32_t ch7_rx_thr_event              :    1;  /*The masked interrupt status bit for CH$m_RX_THR_EVENT_INT.*/
            uint32_t ch3_dma_access_fail           :    1;  /*The masked interrupt status bit for  CH$n_DMA_ACCESS_FAIL_INT.*/
            uint32_t ch7_dma_access_fail           :    1;  /*The masked interrupt status bit for  CH$m_DMA_ACCESS_FAIL_INT.*/
            uint32_t reserved30                    :    2;  /*Reserved*/
        };
        uint32_t val;
    } int_st;
    union {
        struct {
            uint32_t ch0_tx_end                    :    1;  /*The interrupt enable bit for CH$n_TX_END_INT.*/
            uint32_t ch1_tx_end                    :    1;  /*The interrupt enable bit for CH$n_TX_END_INT.*/
            uint32_t ch2_tx_end                    :    1;  /*The interrupt enable bit for CH$n_TX_END_INT.*/
            uint32_t ch3_tx_end                    :    1;  /*The interrupt enable bit for CH$n_TX_END_INT.*/
            uint32_t ch0_err                       :    1;  /*The interrupt enable bit for CH$n_ERR_INT.*/
            uint32_t ch1_err                       :    1;  /*The interrupt enable bit for CH$n_ERR_INT.*/
            uint32_t ch2_err                       :    1;  /*The interrupt enable bit for CH$n_ERR_INT.*/
            uint32_t ch3_err                       :    1;  /*The interrupt enable bit for CH$n_ERR_INT.*/
            uint32_t ch0_tx_thr_event              :    1;  /*The interrupt enable bit for CH$n_TX_THR_EVENT_INT.*/
            uint32_t ch1_tx_thr_event              :    1;  /*The interrupt enable bit for CH$n_TX_THR_EVENT_INT.*/
            uint32_t ch2_tx_thr_event              :    1;  /*The interrupt enable bit for CH$n_TX_THR_EVENT_INT.*/
            uint32_t ch3_tx_thr_event              :    1;  /*The interrupt enable bit for CH$n_TX_THR_EVENT_INT.*/
            uint32_t ch0_tx_loop                   :    1;  /*The interrupt enable bit for CH$n_TX_LOOP_INT.*/
            uint32_t ch1_tx_loop                   :    1;  /*The interrupt enable bit for CH$n_TX_LOOP_INT.*/
            uint32_t ch2_tx_loop                   :    1;  /*The interrupt enable bit for CH$n_TX_LOOP_INT.*/
            uint32_t ch3_tx_loop                   :    1;  /*The interrupt enable bit for CH$n_TX_LOOP_INT.*/
            uint32_t ch4_rx_end                    :    1;  /*The interrupt enable bit for CH$m_RX_END_INT.*/
            uint32_t ch5_rx_end                    :    1;  /*The interrupt enable bit for CH$m_RX_END_INT.*/
            uint32_t ch6_rx_end                    :    1;  /*The interrupt enable bit for CH$m_RX_END_INT.*/
            uint32_t ch7_rx_end                    :    1;  /*The interrupt enable bit for CH$m_RX_END_INT.*/
            uint32_t ch4_err                       :    1;  /*The interrupt enable bit for CH$m_ERR_INT.*/
            uint32_t ch5_err                       :    1;  /*The interrupt enable bit for CH$m_ERR_INT.*/
            uint32_t ch6_err                       :    1;  /*The interrupt enable bit for CH$m_ERR_INT.*/
            uint32_t ch7_err                       :    1;  /*The interrupt enable bit for CH$m_ERR_INT.*/
            uint32_t ch4_rx_thr_event              :    1;  /*The interrupt enable bit for CH$m_RX_THR_EVENT_INT.*/
            uint32_t ch5_rx_thr_event              :    1;  /*The interrupt enable bit for CH$m_RX_THR_EVENT_INT.*/
            uint32_t ch6_rx_thr_event              :    1;  /*The interrupt enable bit for CH$m_RX_THR_EVENT_INT.*/
            uint32_t ch7_rx_thr_event              :    1;  /*The interrupt enable bit for CH$m_RX_THR_EVENT_INT.*/
            uint32_t ch3_dma_access_fail           :    1;  /*The interrupt enable bit for CH$n_DMA_ACCESS_FAIL_INT.*/
            uint32_t ch7_dma_access_fail           :    1;  /*The interrupt enable bit for CH$m_DMA_ACCESS_FAIL_INT.*/
            uint32_t reserved30                    :    2;  /*Reserved*/
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t ch0_tx_end                    :    1;  /*Set this bit to clear theCH$n_TX_END_INT interrupt.*/
            uint32_t ch1_tx_end                    :    1;  /*Set this bit to clear theCH$n_TX_END_INT interrupt.*/
            uint32_t ch2_tx_end                    :    1;  /*Set this bit to clear theCH$n_TX_END_INT interrupt.*/
            uint32_t ch3_tx_end                    :    1;  /*Set this bit to clear theCH$n_TX_END_INT interrupt.*/
            uint32_t ch0_err                       :    1;  /*Set this bit to clear theCH$n_ERR_INT interrupt.*/
            uint32_t ch1_err                       :    1;  /*Set this bit to clear theCH$n_ERR_INT interrupt.*/
            uint32_t ch2_err                       :    1;  /*Set this bit to clear theCH$n_ERR_INT interrupt.*/
            uint32_t ch3_err                       :    1;  /*Set this bit to clear theCH$n_ERR_INT interrupt.*/
            uint32_t ch0_tx_thr_event              :    1;  /*Set this bit to clear theCH$n_TX_THR_EVENT_INT interrupt.*/
            uint32_t ch1_tx_thr_event              :    1;  /*Set this bit to clear theCH$n_TX_THR_EVENT_INT interrupt.*/
            uint32_t ch2_tx_thr_event              :    1;  /*Set this bit to clear theCH$n_TX_THR_EVENT_INT interrupt.*/
            uint32_t ch3_tx_thr_event              :    1;  /*Set this bit to clear theCH$n_TX_THR_EVENT_INT interrupt.*/
            uint32_t ch0_tx_loop                   :    1;  /*Set this bit to clear theCH$n_TX_LOOP_INT interrupt.*/
            uint32_t ch1_tx_loop                   :    1;  /*Set this bit to clear theCH$n_TX_LOOP_INT interrupt.*/
            uint32_t ch2_tx_loop                   :    1;  /*Set this bit to clear theCH$n_TX_LOOP_INT interrupt.*/
            uint32_t ch3_tx_loop                   :    1;  /*Set this bit to clear theCH$n_TX_LOOP_INT interrupt.*/
            uint32_t ch4_rx_end                    :    1;  /*Set this bit to clear theCH$m_RX_END_INT interrupt.*/
            uint32_t ch5_rx_end                    :    1;  /*Set this bit to clear theCH$m_RX_END_INT interrupt.*/
            uint32_t ch6_rx_end                    :    1;  /*Set this bit to clear theCH$m_RX_END_INT interrupt.*/
            uint32_t ch7_rx_end                    :    1;  /*Set this bit to clear theCH$m_RX_END_INT interrupt.*/
            uint32_t ch4_err                       :    1;  /*Set this bit to clear theCH$m_ERR_INT interrupt.*/
            uint32_t ch5_err                       :    1;  /*Set this bit to clear theCH$m_ERR_INT interrupt.*/
            uint32_t ch6_err                       :    1;  /*Set this bit to clear theCH$m_ERR_INT interrupt.*/
            uint32_t ch7_err                       :    1;  /*Set this bit to clear theCH$m_ERR_INT interrupt.*/
            uint32_t ch4_rx_thr_event              :    1;  /*Set this bit to clear theCH$m_RX_THR_EVENT_INT interrupt.*/
            uint32_t ch5_rx_thr_event              :    1;  /*Set this bit to clear theCH$m_RX_THR_EVENT_INT interrupt.*/
            uint32_t ch6_rx_thr_event              :    1;  /*Set this bit to clear theCH$m_RX_THR_EVENT_INT interrupt.*/
            uint32_t ch7_rx_thr_event              :    1;  /*Set this bit to clear theCH$m_RX_THR_EVENT_INT interrupt.*/
            uint32_t ch3_dma_access_fail           :    1;  /*Set this bit to clear the CH$n_DMA_ACCESS_FAIL_INT interrupt.*/
            uint32_t ch7_dma_access_fail           :    1;  /*Set this bit to clear the CH$m_DMA_ACCESS_FAIL_INT interrupt.*/
            uint32_t reserved30                    :    2;  /*Reserved*/
        };
        uint32_t val;
    } int_clr;
    union {
        struct {
            uint32_t low                           :    16;  /*This register is used to configure carrier wave 's low level clock period for CHANNEL$n.*/
            uint32_t high                          :    16;  /*This register is used to configure carrier wave 's high level clock period for CHANNEL$n.*/
        };
        uint32_t val;
    } ch0carrier_duty;
    union {
        struct {
            uint32_t low_ch1                       :    16;  /*This register is used to configure carrier wave 's low level clock period for CHANNEL$n.*/
            uint32_t high_ch1                      :    16;  /*This register is used to configure carrier wave 's high level clock period for CHANNEL$n.*/
        };
        uint32_t val;
    } ch1carrier_duty;
    union {
        struct {
            uint32_t low                           :    16;  /*This register is used to configure carrier wave 's low level clock period for CHANNEL$n.*/
            uint32_t high                          :    16;  /*This register is used to configure carrier wave 's high level clock period for CHANNEL$n.*/
        };
        uint32_t val;
    } carrier_duty;
    union {
        struct {
            uint32_t low_ch3                       :    16;  /*This register is used to configure carrier wave 's low level clock period for CHANNEL$n.*/
            uint32_t high_ch3                      :    16;  /*This register is used to configure carrier wave 's high level clock period for CHANNEL$n.*/
        };
        uint32_t val;
    } ch3carrier_duty;
    union {
        struct {
            uint32_t low_thres_ch4                 :    16;  /*The low level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_LOW_THRES_CH$m + 1) for channel $m.*/
            uint32_t high_thres_ch4                :    16;  /*The high level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_HIGH_THRES_CH$m + 1) for channel $m.*/
        };
        uint32_t val;
    } ch4_rx_carrier_rm;
    union {
        struct {
            uint32_t low_thres_ch5                 :    16;  /*The low level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_LOW_THRES_CH$m + 1) for channel $m.*/
            uint32_t high_thres_ch5                :    16;  /*The high level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_HIGH_THRES_CH$m + 1) for channel $m.*/
        };
        uint32_t val;
    } ch5_rx_carrier_rm;
    union {
        struct {
            uint32_t low_thres_ch6                 :    16;  /*The low level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_LOW_THRES_CH$m + 1) for channel $m.*/
            uint32_t high_thres_ch6                :    16;  /*The high level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_HIGH_THRES_CH$m + 1) for channel $m.*/
        };
        uint32_t val;
    } ch6_rx_carrier_rm;
    union {
        struct {
            uint32_t low_thres_ch7                 :    16;  /*The low level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_LOW_THRES_CH$m + 1) for channel $m.*/
            uint32_t high_thres_ch7                :    16;  /*The high level period in a carrier modulation mode is (REG_RMT_REG_CARRIER_HIGH_THRES_CH$m + 1) for channel $m.*/
        };
        uint32_t val;
    } ch7_rx_carrier_rm;
    union {
        struct {
            uint32_t tx_lim                        :    9;  /*This register is used to configure the maximum entries that CHANNEL$n can send out.*/
            uint32_t tx_loop_num                   :    10;  /*This register is used to configure the maximum loop count when tx_conti_mode is valid.*/
            uint32_t tx_loop_cnt_en                :    1;  /*This register is the enabled bit for loop count.*/
            uint32_t loop_count_reset              :    1;  /*This register is used to reset the loop count when tx_conti_mode is valid.*/
            uint32_t loop_stop_en                  :    1;  /*This bit is used to enable the loop send stop function after the loop counter counts to  loop number for CHANNEL$n.*/
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } ch0_tx_lim;
    union {
        struct {
            uint32_t tx_lim_ch1                    :    9;  /*This register is used to configure the maximum entries that CHANNEL$n can send out.*/
            uint32_t tx_loop_num_ch1               :    10;  /*This register is used to configure the maximum loop count when tx_conti_mode is valid.*/
            uint32_t tx_loop_cnt_en_ch1            :    1;  /*This register is the enabled bit for loop count.*/
            uint32_t loop_count_reset_ch1          :    1;  /*This register is used to reset the loop count when tx_conti_mode is valid.*/
            uint32_t loop_stop_en_ch1              :    1;  /*This bit is used to enable the loop send stop function after the loop counter counts to  loop number for CHANNEL$n.*/
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } ch1_tx_lim;
    union {
        struct {
            uint32_t tx_lim                        :    9;  /*This register is used to configure the maximum entries that CHANNEL$n can send out.*/
            uint32_t tx_loop_num                   :    10;  /*This register is used to configure the maximum loop count when tx_conti_mode is valid.*/
            uint32_t tx_loop_cnt_en                :    1;  /*This register is the enabled bit for loop count.*/
            uint32_t loop_count_reset              :    1;  /*This register is used to reset the loop count when tx_conti_mode is valid.*/
            uint32_t loop_stop_en                  :    1;  /*This bit is used to enable the loop send stop function after the loop counter counts to  loop number for CHANNEL$n.*/
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } _tx_lim;
    union {
        struct {
            uint32_t tx_lim_ch3                    :    9;  /*This register is used to configure the maximum entries that CHANNEL$n can send out.*/
            uint32_t tx_loop_num_ch3               :    10;  /*This register is used to configure the maximum loop count when tx_conti_mode is valid.*/
            uint32_t tx_loop_cnt_en_ch3            :    1;  /*This register is the enabled bit for loop count.*/
            uint32_t loop_count_reset_ch3          :    1;  /*This register is used to reset the loop count when tx_conti_mode is valid.*/
            uint32_t loop_stop_en_ch3              :    1;  /*This bit is used to enable the loop send stop function after the loop counter counts to  loop number for CHANNEL$n.*/
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } ch3_tx_lim;
    union {
        struct {
            uint32_t rx_lim_ch4                    :    9;  /*This register is used to configure the maximum entries that CHANNEL$m can receive.*/
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } ch4_rx_lim;
    union {
        struct {
            uint32_t rx_lim_ch5                    :    9;  /*This register is used to configure the maximum entries that CHANNEL$m can receive.*/
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } ch5_rx_lim;
    union {
        struct {
            uint32_t rx_lim_ch6                    :    9;  /*This register is used to configure the maximum entries that CHANNEL$m can receive.*/
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } ch6_rx_lim;
    union {
        struct {
            uint32_t rx_lim_ch7                    :    9;  /*This register is used to configure the maximum entries that CHANNEL$m can receive.*/
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } ch7_rx_lim;
    union {
        struct {
            uint32_t fifo_mask                     :    1;  /*1'h1: access memory directly.   1'h0: access memory by FIFO.*/
            uint32_t mem_clk_force_on              :    1;  /*Set this bit to enable the clock for RMT memory.*/
            uint32_t mem_force_pd                  :    1;  /*Set this bit to power down RMT memory.*/
            uint32_t mem_force_pu                  :    1;  /*1: Disable RMT memory light sleep power down function. 0: Power down RMT memory when RMT is in light sleep mode.*/
            uint32_t sclk_div_num                  :    8;  /*the integral part of the fractional divisor*/
            uint32_t sclk_div_a                    :    6;  /*the numerator of the fractional part of the fractional divisor*/
            uint32_t sclk_div_b                    :    6;  /*the denominator of the fractional part of the fractional divisor*/
            uint32_t sclk_sel                      :    2;  /*choose the clock source of rmt_sclk. 1:CLK_80Mhz.2:CLK_8MHz.3:XTAL*/
            uint32_t sclk_active                   :    1;  /*rmt_sclk switch*/
            uint32_t reserved27                    :    4;  /*Reserved*/
            uint32_t clk_en                        :    1;  /*RMT register clock gate enable signal. 1: Power up the drive clock of registers. 0: Power down the drive clock of registers*/
        };
        uint32_t val;
    } sys_conf;
    union {
        struct {
            uint32_t ch0                           :    1;  /*Set this bit to enable CHANNEL$n to start sending data synchronously with other enabled channels.*/
            uint32_t ch1                           :    1;  /*Set this bit to enable CHANNEL$n to start sending data synchronously with other enabled channels.*/
            uint32_t ch2                           :    1;  /*Set this bit to enable CHANNEL$n to start sending data synchronously with other enabled channels.*/
            uint32_t ch3                           :    1;  /*Set this bit to enable CHANNEL$n to start sending data synchronously with other enabled channels.*/
            uint32_t en                            :    1;  /*This register is used to enable multiple of channels to start sending data synchronously.*/
            uint32_t reserved5                     :    27;  /*Reserved*/
        };
        uint32_t val;
    } tx_sim;
    union {
        struct {
            uint32_t ch0                           :    1;  /*This register is used to reset the clock divider of CHANNEL$n.*/
            uint32_t ch1                           :    1;  /*This register is used to reset the clock divider of CHANNEL$n.*/
            uint32_t ch2                           :    1;  /*This register is used to reset the clock divider of CHANNEL$n.*/
            uint32_t ch3                           :    1;  /*This register is used to reset the clock divider of CHANNEL$n.*/
            uint32_t ch4                           :    1;  /*This register is used to reset the clock divider of CHANNEL$m.*/
            uint32_t ch5                           :    1;  /*This register is used to reset the clock divider of CHANNEL$m.*/
            uint32_t ch6                           :    1;  /*This register is used to reset the clock divider of CHANNEL$m.*/
            uint32_t ch7                           :    1;  /*This register is used to reset the clock divider of CHANNEL$m.*/
            uint32_t reserved8                     :    24;  /*Reserved*/
        };
        uint32_t val;
    } ref_cnt_rst;
    union {
        struct {
            uint32_t date                          :    28;  /*This is the version register.*/
            uint32_t reserved28                    :    4;  /*Reserved*/
        };
        uint32_t val;
    } date;
} rmt_dev_t;
extern rmt_dev_t RMT;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_RMT_STRUCT_H_ */
