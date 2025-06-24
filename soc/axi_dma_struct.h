/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_AXI_DMA_STRUCT_H_
#define _SOC_AXI_DMA_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    struct {
        union {
            struct {
                uint32_t done                          :    1;  /*The raw interrupt bit turns to high level when the last data pointed by one inlink descriptor has been received for Rx channel 0.*/
                uint32_t suc_eof                       :    1;  /*The raw interrupt bit turns to high level when the last data pointed by one inlink descriptor has been received for Rx channel 0. For UHCI0 the raw interrupt bit turns to high level when the last data pointed by one inlink descriptor has been received and no data error is detected for Rx channel 0.*/
                uint32_t err_eof                       :    1;  /*The raw interrupt bit turns to high level when data error is detected only in the case that the peripheral is UHCI0 for Rx channel 0. For other peripherals this raw interrupt is reserved.*/
                uint32_t dscr_err                      :    1;  /*The raw interrupt bit turns to high level when detecting inlink descriptor error including owner error and the second and third word error of inlink descriptor for Rx channel 0.*/
                uint32_t dscr_empty                    :    1;  /*The raw interrupt bit turns to high level when Rx buffer pointed by inlink is full and receiving data is not completed but there is no more inlink for Rx channel 0.*/
                uint32_t infifo_l1_ovf                 :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Rx channel 0 is overflow. */
                uint32_t infifo_l1_udf                 :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Rx channel 0 is underflow. */
                uint32_t infifo_l2_ovf                 :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Rx channel 0 is overflow. */
                uint32_t infifo_l2_udf                 :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Rx channel 0 is underflow. */
                uint32_t infifo_l3_ovf                 :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Rx channel 0 is overflow. */
                uint32_t infifo_l3_udf                 :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Rx channel 0 is underflow. */
                uint32_t reserved11                    :    21;  /*reserved*/
            };
            uint32_t val;
        } raw;
        union {
            struct {
                uint32_t done                          :    1;  /*The raw interrupt status bit for the IN_DONE_CH_INT interrupt.*/
                uint32_t suc_eof                       :    1;  /*The raw interrupt status bit for the IN_SUC_EOF_CH_INT interrupt.*/
                uint32_t err_eof                       :    1;  /*The raw interrupt status bit for the IN_ERR_EOF_CH_INT interrupt.*/
                uint32_t dscr_err                      :    1;  /*The raw interrupt status bit for the IN_DSCR_ERR_CH_INT interrupt.*/
                uint32_t dscr_empty                    :    1;  /*The raw interrupt status bit for the IN_DSCR_EMPTY_CH_INT interrupt.*/
                uint32_t infifo_l1_ovf                 :    1;  /*The raw interrupt status bit for the INFIFO_OVF_L1_CH_INT interrupt.*/
                uint32_t infifo_l1_udf                 :    1;  /*The raw interrupt status bit for the INFIFO_UDF_L1_CH_INT interrupt.*/
                uint32_t infifo_l2_ovf                 :    1;  /*The raw interrupt status bit for the INFIFO_OVF_L2_CH_INT interrupt.*/
                uint32_t infifo_l2_udf                 :    1;  /*The raw interrupt status bit for the INFIFO_UDF_L2_CH_INT interrupt.*/
                uint32_t infifo_l3_ovf                 :    1;  /*The raw interrupt status bit for the INFIFO_OVF_L3_CH_INT interrupt.*/
                uint32_t infifo_l3_udf                 :    1;  /*The raw interrupt status bit for the INFIFO_UDF_L3_CH_INT interrupt.*/
                uint32_t reserved11                    :    21;  /*reserved*/
            };
            uint32_t val;
        } st;
        union {
            struct {
                uint32_t done                          :    1;  /*The interrupt enable bit for the IN_DONE_CH_INT interrupt.*/
                uint32_t suc_eof                       :    1;  /*The interrupt enable bit for the IN_SUC_EOF_CH_INT interrupt.*/
                uint32_t err_eof                       :    1;  /*The interrupt enable bit for the IN_ERR_EOF_CH_INT interrupt.*/
                uint32_t dscr_err                      :    1;  /*The interrupt enable bit for the IN_DSCR_ERR_CH_INT interrupt.*/
                uint32_t dscr_empty                    :    1;  /*The interrupt enable bit for the IN_DSCR_EMPTY_CH_INT interrupt.*/
                uint32_t infifo_l1_ovf                 :    1;  /*The interrupt enable bit for the INFIFO_OVF_L1_CH_INT interrupt.*/
                uint32_t infifo_l1_udf                 :    1;  /*The interrupt enable bit for the INFIFO_UDF_L1_CH_INT interrupt.*/
                uint32_t infifo_l2_ovf                 :    1;  /*The interrupt enable bit for the INFIFO_OVF_L2_CH_INT interrupt.*/
                uint32_t infifo_l2_udf                 :    1;  /*The interrupt enable bit for the INFIFO_UDF_L2_CH_INT interrupt.*/
                uint32_t infifo_l3_ovf                 :    1;  /*The interrupt enable bit for the INFIFO_OVF_L3_CH_INT interrupt.*/
                uint32_t infifo_l3_udf                 :    1;  /*The interrupt enable bit for the INFIFO_UDF_L3_CH_INT interrupt.*/
                uint32_t reserved11                    :    21;  /*reserved*/
            };
            uint32_t val;
        } ena;
        union {
            struct {
                uint32_t done                          :    1;  /*Set this bit to clear the IN_DONE_CH_INT interrupt.*/
                uint32_t suc_eof                       :    1;  /*Set this bit to clear the IN_SUC_EOF_CH_INT interrupt.*/
                uint32_t err_eof                       :    1;  /*Set this bit to clear the IN_ERR_EOF_CH_INT interrupt.*/
                uint32_t dscr_err                      :    1;  /*Set this bit to clear the IN_DSCR_ERR_CH_INT interrupt.*/
                uint32_t dscr_empty                    :    1;  /*Set this bit to clear the IN_DSCR_EMPTY_CH_INT interrupt.*/
                uint32_t infifo_l1_ovf                 :    1;  /*Set this bit to clear the INFIFO_OVF_L1_CH_INT interrupt.*/
                uint32_t infifo_l1_udf                 :    1;  /*Set this bit to clear the INFIFO_UDF_L1_CH_INT interrupt.*/
                uint32_t infifo_l2_ovf                 :    1;  /*Set this bit to clear the INFIFO_OVF_L2_CH_INT interrupt.*/
                uint32_t infifo_l2_udf                 :    1;  /*Set this bit to clear the INFIFO_UDF_L2_CH_INT interrupt.*/
                uint32_t infifo_l3_ovf                 :    1;  /*Set this bit to clear the INFIFO_OVF_L3_CH_INT interrupt.*/
                uint32_t infifo_l3_udf                 :    1;  /*Set this bit to clear the INFIFO_UDF_L3_CH_INT interrupt.*/
                uint32_t reserved11                    :    21;  /*reserved*/
            };
            uint32_t val;
        } clr;
        union {
            struct {
                uint32_t in_rst                        :    1;  /*This bit is used to reset AXI_DMA channel 0 Rx FSM and Rx FIFO pointer.*/
                uint32_t in_loop_test                  :    1;  /*reserved*/
                uint32_t mem_trans_en                  :    1;  /*Set this bit 1 to enable automatic transmitting data from memory to memory via AXI_DMA.*/
                uint32_t in_etm_en                     :    1;  /*Set this bit to 1 to enable etm control mode, dma Rx channel 0 is triggered by etm task.*/
                uint32_t in_burst_size_sel             :    3;  /*3'b000-3'b100:burst length 8byte~128byte*/
                uint32_t in_cmd_disable                :    1;  /*1:mean disable cmd of this ch0*/
                uint32_t in_ecc_aes_en                 :    1;  /*1: mean access ecc or aes domain,0: mean not*/
                uint32_t indscr_burst_en               :    1;  /*Set this bit to 1 to enable INCR burst transfer for Rx channel 0 reading link descriptor when accessing internal SRAM. */
                uint32_t reserved10                    :    22;  /*reserved*/
            };
            uint32_t val;
        } in_conf0;
        union {
            struct {
                uint32_t reserved0                     :    12;
                uint32_t in_check_owner                :    1;  /*Set this bit to enable checking the owner attribute of the link descriptor.*/
                uint32_t reserved13                    :    19;  /*reserved*/
            };
            uint32_t val;
        } in_conf1;
        union {
            struct {
                uint32_t infifo_l3_full                :    1;  /*L3 Rx FIFO full signal for Rx channel 0.*/
                uint32_t infifo_l3_empty               :    1;  /*L3 Rx FIFO empty signal for Rx channel 0.*/
                uint32_t infifo_l3_cnt                 :    6;  /*The register stores the byte number of the data in L3 Rx FIFO for Rx channel 0.*/
                uint32_t infifo_l3_udf                 :    1;  /*L3 Rx FIFO under flow signal for Rx channel 0.*/
                uint32_t infifo_l3_ovf                 :    1;  /*L3 Rx FIFO over flow signal for Rx channel 0.*/
                uint32_t infifo_l1_full                :    1;  /*L1 Rx FIFO full signal for Rx channel 0.*/
                uint32_t infifo_l1_empty               :    1;  /*L1 Rx FIFO empty signal for Rx channel 0.*/
                uint32_t infifo_l1_udf                 :    1;  /*L1 Rx FIFO under flow signal for Rx channel 0.*/
                uint32_t infifo_l1_ovf                 :    1;  /*L1 Rx FIFO over flow signal for Rx channel 0.*/
                uint32_t infifo_l2_full                :    1;  /*L2 Rx RAM full signal for Rx channel 0.*/
                uint32_t infifo_l2_empty               :    1;  /*L2 Rx RAM empty signal for Rx channel 0.*/
                uint32_t infifo_l2_udf                 :    1;  /*L2 Rx FIFO under flow signal for Rx channel 0.*/
                uint32_t infifo_l2_ovf                 :    1;  /*L2 Rx FIFO over flow signal for Rx channel 0.*/
                uint32_t reserved18                    :    5;  /*reserved*/
                uint32_t in_remain_under_1b            :    1;  /*reserved*/
                uint32_t in_remain_under_2b            :    1;  /*reserved*/
                uint32_t in_remain_under_3b            :    1;  /*reserved*/
                uint32_t in_remain_under_4b            :    1;  /*reserved*/
                uint32_t in_remain_under_5b            :    1;  /*reserved*/
                uint32_t in_remain_under_6b            :    1;  /*reserved*/
                uint32_t in_remain_under_7b            :    1;  /*reserved*/
                uint32_t in_remain_under_8b            :    1;  /*reserved*/
                uint32_t in_buf_hungry                 :    1;  /*reserved*/
            };
            uint32_t val;
        } infifo_status;
        union {
            struct {
                uint32_t infifo_rdata                  :    12;  /*This register stores the data popping from AXI_DMA FIFO.*/
                uint32_t infifo_pop                    :    1;  /*Set this bit to pop data from AXI_DMA FIFO.*/
                uint32_t reserved13                    :    19;  /*reserved*/
            };
            uint32_t val;
        } in_pop;
        union {
            struct {
                uint32_t auto_ret                      :    1;  /*Set this bit to return to current inlink descriptor's address when there are some errors in current receiving data.*/
                uint32_t stop                          :    1;  /*Set this bit to stop dealing with the inlink descriptors.*/
                uint32_t start                         :    1;  /*Set this bit to start dealing with the inlink descriptors.*/
                uint32_t restart                       :    1;  /*Set this bit to mount a new inlink descriptor.*/
                uint32_t park                          :    1;  /*1: the inlink descriptor's FSM is in idle state.  0: the inlink descriptor's FSM is working.*/
                uint32_t reserved5                     :    27;
            };
            uint32_t val;
        } in_link1;
        uint32_t in_link2;
        union {
            struct {
                uint32_t dscr_addr                     :    18;  /*This register stores the current inlink descriptor's address.*/
                uint32_t in_dscr_state                 :    2;  /*reserved*/
                uint32_t in_state                      :    3;  /*reserved*/
                uint32_t reserved23                    :    9;  /*reserved*/
            };
            uint32_t val;
        } in_state;
        uint32_t in_suc_eof_des_addr;
        uint32_t in_err_eof_des_addr;
        uint32_t in_dscr;
        uint32_t in_dscr_bf0;
        uint32_t in_dscr_bf1;
        union {
            struct {
                uint32_t rx_pri                        :    4;  /*The priority of Rx channel 0. The larger of the value the higher of the priority.*/
                uint32_t rx_arb_weight_value           :    4;  /*The weight of Rx channel 0*/
                uint32_t rx_arb_weight_opt_dis         :    1;  /*0: mean not optimazation weight function ,1: mean optimazation*/
                uint32_t reserved9                     :    23;
            };
            uint32_t val;
        } in_pri;
        union {
            struct {
                uint32_t sel                           :    6;  /*This register is used to select peripheral for Rx channel 0. 0:lcdcam. 1: gpspi_2. 2: gpspi_3. 3: parl_io. 4: aes. 5: sha. 6~15: Dummy*/
                uint32_t reserved6                     :    26;
            };
            uint32_t val;
        } in_peri_sel;
        uint32_t in_crc_init_data;
        union {
            struct {
                uint32_t rx_crc_width                  :    2;  /*reserved*/
                uint32_t rx_crc_latch_flag             :    1;  /*reserved*/
                uint32_t reserved3                     :    29;
            };
            uint32_t val;
        } rx_crc_width;
        union {
            struct {
                uint32_t rx_crc_clear                  :    1;  /*This register is used to clear ch0 of rx crc result*/
                uint32_t reserved1                     :    31;
            };
            uint32_t val;
        } in_crc_clear;
        uint32_t in_crc_final_result;
        uint32_t rx_crc_en_wr_data;
        uint32_t rx_crc_en_addr;
        union {
            struct {
                uint32_t rx_crc_data_en_wr_data        :    16;  /*reserved*/
                uint32_t reserved16                    :    16;
            };
            uint32_t val;
        } rx_crc_data_en_wr_data;
        uint32_t rx_crc_data_en_addr;
    } in[3];
    struct {
        union {
            struct {
                uint32_t done                          :    1;  /*The raw interrupt bit turns to high level when the last data pointed by one outlink descriptor has been transmitted to peripherals for Tx channel0.*/
                uint32_t eof                           :    1;  /*The raw interrupt bit turns to high level when the last data pointed by one outlink descriptor has been read from memory for Tx channel0. */
                uint32_t dscr_err                      :    1;  /*The raw interrupt bit turns to high level when detecting outlink descriptor error including owner error and the second and third word error of outlink descriptor for Tx channel0.*/
                uint32_t total_eof                     :    1;  /*The raw interrupt bit turns to high level when data corresponding a outlink (includes one link descriptor or few link descriptors) is transmitted out for Tx channel0.*/
                uint32_t outfifo_l1_ovf                :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Tx channel0 is overflow. */
                uint32_t outfifo_l1_udf                :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Tx channel0 is underflow. */
                uint32_t outfifo_l2_ovf                :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Tx channel0 is overflow. */
                uint32_t outfifo_l2_udf                :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Tx channel0 is underflow. */
                uint32_t outfifo_l3_ovf                :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Tx channel0 is overflow. */
                uint32_t outfifo_l3_udf                :    1;  /*This raw interrupt bit turns to high level when level 1 fifo of Tx channel0 is underflow. */
                uint32_t reserved10                    :    22;  /*reserved*/
            };
            uint32_t val;
        } raw;
        union {
            struct {
                uint32_t done                          :    1;  /*The raw interrupt status bit for the OUT_DONE_CH_INT interrupt.*/
                uint32_t eof                           :    1;  /*The raw interrupt status bit for the OUT_EOF_CH_INT interrupt.*/
                uint32_t dscr_err                      :    1;  /*The raw interrupt status bit for the OUT_DSCR_ERR_CH_INT interrupt.*/
                uint32_t total_eof                     :    1;  /*The raw interrupt status bit for the OUT_TOTAL_EOF_CH_INT interrupt.*/
                uint32_t outfifo_l1_ovf                :    1;  /*The raw interrupt status bit for the OUTFIFO_OVF_L1_CH_INT interrupt.*/
                uint32_t outfifo_l1_udf                :    1;  /*The raw interrupt status bit for the OUTFIFO_UDF_L1_CH_INT interrupt.*/
                uint32_t outfifo_l2_ovf                :    1;  /*The raw interrupt status bit for the OUTFIFO_OVF_L2_CH_INT interrupt.*/
                uint32_t outfifo_l2_udf                :    1;  /*The raw interrupt status bit for the OUTFIFO_UDF_L2_CH_INT interrupt.*/
                uint32_t outfifo_l3_ovf                :    1;  /*The raw interrupt status bit for the OUTFIFO_OVF_L3_CH_INT interrupt.*/
                uint32_t outfifo_l3_udf                :    1;  /*The raw interrupt status bit for the OUTFIFO_UDF_L3_CH_INT interrupt.*/
                uint32_t reserved10                    :    22;  /*reserved*/
            };
            uint32_t val;
        } st;
        union {
            struct {
                uint32_t done                          :    1;  /*The interrupt enable bit for the OUT_DONE_CH_INT interrupt.*/
                uint32_t eof                           :    1;  /*The interrupt enable bit for the OUT_EOF_CH_INT interrupt.*/
                uint32_t dscr_err                      :    1;  /*The interrupt enable bit for the OUT_DSCR_ERR_CH_INT interrupt.*/
                uint32_t total_eof                     :    1;  /*The interrupt enable bit for the OUT_TOTAL_EOF_CH_INT interrupt.*/
                uint32_t outfifo_l1_ovf                :    1;  /*The interrupt enable bit for the OUTFIFO_OVF_L1_CH_INT interrupt.*/
                uint32_t outfifo_l1_udf                :    1;  /*The interrupt enable bit for the OUTFIFO_UDF_L1_CH_INT interrupt.*/
                uint32_t outfifo_l2_ovf                :    1;  /*The interrupt enable bit for the OUTFIFO_OVF_L2_CH_INT interrupt.*/
                uint32_t outfifo_l2_udf                :    1;  /*The interrupt enable bit for the OUTFIFO_UDF_L2_CH_INT interrupt.*/
                uint32_t outfifo_l3_ovf                :    1;  /*The interrupt enable bit for the OUTFIFO_OVF_L3_CH_INT interrupt.*/
                uint32_t outfifo_l3_udf                :    1;  /*The interrupt enable bit for the OUTFIFO_UDF_L3_CH_INT interrupt.*/
                uint32_t reserved10                    :    22;  /*reserved*/
            };
            uint32_t val;
        } ena;
        union {
            struct {
                uint32_t done                          :    1;  /*Set this bit to clear the OUT_DONE_CH_INT interrupt.*/
                uint32_t eof                           :    1;  /*Set this bit to clear the OUT_EOF_CH_INT interrupt.*/
                uint32_t dscr_err                      :    1;  /*Set this bit to clear the OUT_DSCR_ERR_CH_INT interrupt.*/
                uint32_t total_eof                     :    1;  /*Set this bit to clear the OUT_TOTAL_EOF_CH_INT interrupt.*/
                uint32_t outfifo_l1_ovf                :    1;  /*Set this bit to clear the OUTFIFO_OVF_L1_CH_INT interrupt.*/
                uint32_t outfifo_l1_udf                :    1;  /*Set this bit to clear the OUTFIFO_UDF_L1_CH_INT interrupt.*/
                uint32_t outfifo_l2_ovf                :    1;  /*Set this bit to clear the OUTFIFO_OVF_L2_CH_INT interrupt.*/
                uint32_t outfifo_l2_udf                :    1;  /*Set this bit to clear the OUTFIFO_UDF_L2_CH_INT interrupt.*/
                uint32_t outfifo_l3_ovf                :    1;  /*Set this bit to clear the OUTFIFO_OVF_L3_CH_INT interrupt.*/
                uint32_t outfifo_l3_udf                :    1;  /*Set this bit to clear the OUTFIFO_UDF_L3_CH_INT interrupt.*/
                uint32_t reserved10                    :    22;  /*reserved*/
            };
            uint32_t val;
        } clr;
        union {
            struct {
                uint32_t out_rst                       :    1;  /*This bit is used to reset AXI_DMA channel0 Tx FSM and Tx FIFO pointer.*/
                uint32_t out_loop_test                 :    1;  /*reserved*/
                uint32_t out_auto_wrback               :    1;  /*Set this bit to enable automatic outlink-writeback when all the data in tx buffer has been transmitted.*/
                uint32_t out_eof_mode                  :    1;  /*EOF flag generation mode when transmitting data. 1: EOF flag for Tx channel0 is generated when data need to transmit has been popped from FIFO in AXI_DMA*/
                uint32_t out_etm_en                    :    1;  /*Set this bit to 1 to enable etm control mode, dma Tx channel0 is triggered by etm task.*/
                uint32_t out_burst_size_sel            :    3;  /*3'b000-3'b100:burst length 8byte~128byte*/
                uint32_t out_cmd_disable               :    1;  /*1:mean disable cmd of this ch0*/
                uint32_t out_ecc_aes_en                :    1;  /*1: mean access ecc or aes domain,0: mean not*/
                uint32_t outdscr_burst_en              :    1;  /*Set this bit to 1 to enable INCR burst transfer for Tx channel0 reading link descriptor when accessing internal SRAM. */
                uint32_t reserved11                    :    21;
            };
            uint32_t val;
        } out_conf0;
        union {
            struct {
                uint32_t reserved0                     :    12;
                uint32_t out_check_owner               :    1;  /*Set this bit to enable checking the owner attribute of the link descriptor.*/
                uint32_t reserved13                    :    19;  /*reserved*/
            };
            uint32_t val;
        } out_conf1;
        union {
            struct {
                uint32_t outfifo_l3_full               :    1;  /*L3 Tx FIFO full signal for Tx channel0.*/
                uint32_t outfifo_l3_empty              :    1;  /*L3 Tx FIFO empty signal for Tx channel0.*/
                uint32_t outfifo_l3_cnt                :    6;  /*The register stores the byte number of the data in L3 Tx FIFO for Tx channel0.*/
                uint32_t outfifo_l3_udf                :    1;  /*L3 Tx FIFO under flow signal for Tx channel0.*/
                uint32_t outfifo_l3_ovf                :    1;  /*L3 Tx FIFO over flow signal for Tx channel0.*/
                uint32_t outfifo_l1_full               :    1;  /*L1 Tx FIFO full signal for Tx channel0.*/
                uint32_t outfifo_l1_empty              :    1;  /*L1 Tx FIFO empty signal for Tx channel0.*/
                uint32_t outfifo_l1_udf                :    1;  /*L1 Tx FIFO under flow signal for Tx channel0.*/
                uint32_t outfifo_l1_ovf                :    1;  /*L1 Tx FIFO over flow signal for Tx channel0.*/
                uint32_t outfifo_l2_full               :    1;  /*L2 Tx RAM full signal for Tx channel0.*/
                uint32_t outfifo_l2_empty              :    1;  /*L2 Tx RAM empty signal for Tx channel0.*/
                uint32_t outfifo_l2_udf                :    1;  /*L2 Tx FIFO under flow signal for Tx channel0.*/
                uint32_t outfifo_l2_ovf                :    1;  /*L2 Tx FIFO over flow signal for Tx channel0.*/
                uint32_t reserved18                    :    5;  /*reserved*/
                uint32_t out_remain_under_1b           :    1;  /*reserved*/
                uint32_t out_remain_under_2b           :    1;  /*reserved*/
                uint32_t out_remain_under_3b           :    1;  /*reserved*/
                uint32_t out_remain_under_4b           :    1;  /*reserved*/
                uint32_t out_remain_under_5b           :    1;  /*reserved*/
                uint32_t out_remain_under_6b           :    1;  /*reserved*/
                uint32_t out_remain_under_7b           :    1;  /*reserved*/
                uint32_t out_remain_under_8b           :    1;  /*reserved*/
                uint32_t reserved31                    :    1;  /*reserved*/
            };
            uint32_t val;
        } outfifo_status;
        union {
            struct {
                uint32_t outfifo_wdata                 :    9;  /*This register stores the data that need to be pushed into AXI_DMA FIFO.*/
                uint32_t outfifo_push                  :    1;  /*Set this bit to push data into AXI_DMA FIFO.*/
                uint32_t reserved10                    :    22;  /*reserved*/
            };
            uint32_t val;
        } out_push;
        union {
            struct {
                uint32_t stop                          :    1;  /*Set this bit to stop dealing with the outlink descriptors.*/
                uint32_t start                         :    1;  /*Set this bit to start dealing with the outlink descriptors.*/
                uint32_t restart                       :    1;  /*Set this bit to restart a new outlink from the last address. */
                uint32_t park                          :    1;  /*1: the outlink descriptor's FSM is in idle state.  0: the outlink descriptor's FSM is working.*/
                uint32_t reserved4                     :    28;
            };
            uint32_t val;
        } out_link1;
        uint32_t out_link2;
        union {
            struct {
                uint32_t dscr_addr                     :    18;  /*This register stores the current outlink descriptor's address.*/
                uint32_t out_dscr_state                :    2;  /*reserved*/
                uint32_t out_state                     :    3;  /*reserved*/
                uint32_t reserved23                    :    9;  /*reserved*/
            };
            uint32_t val;
        } out_state;
        uint32_t out_eof_des_addr;
        uint32_t out_eof_bfr_des_addr;
        uint32_t out_dscr;
        uint32_t out_dscr_bf0;
        uint32_t out_dscr_bf1;
        union {
            struct {
                uint32_t tx_pri                        :    4;  /*The priority of Tx channel0. The larger of the value the higher of the priority.*/
                uint32_t tx_arb_weight_value           :    4;  /*The weight of Tx channel0*/
                uint32_t tx_arb_weight_opt_dis         :    1;  /*0: mean not optimazation weight function ,1: mean optimazation*/
                uint32_t reserved9                     :    23;
            };
            uint32_t val;
        } out_pri;
        union {
            struct {
                uint32_t sel                           :    6;  /*This register is used to select peripheral for Tx channel0. 0:lcdcam. 1: gpspi_2. 2: gpspi_3. 3: parl_io. 4: aes. 5: sha. 6~15: Dummy*/
                uint32_t reserved6                     :    26;
            };
            uint32_t val;
        } out_peri_sel;
        uint32_t out_crc_init_data;
        union {
            struct {
                uint32_t tx_crc_width                  :    2;  /*reserved*/
                uint32_t tx_crc_latch_flag             :    1;  /*reserved*/
                uint32_t reserved3                     :    29;
            };
            uint32_t val;
        } tx_crc_width;
        union {
            struct {
                uint32_t tx_crc_clear                  :    1;  /*This register is used to clear ch0 of tx crc result*/
                uint32_t reserved1                     :    31;
            };
            uint32_t val;
        } out_crc_clear;
        uint32_t out_crc_final_result;
        uint32_t tx_crc_en_wr_data;
        uint32_t tx_crc_en_addr;
        union {
            struct {
                uint32_t tx_crc_data_en_wr_data        :    16;  /*reserved*/
                uint32_t reserved16                    :    16;
            };
            uint32_t val;
        } tx_crc_data_en_wr_data;
        uint32_t tx_crc_data_en_addr;
    } out[3];
    union {
        struct {
            uint32_t arb_timeout_num_tx            :    16;  /*This register is used to config tx arbiter time out value*/
            uint32_t arb_timeout_num_rx            :    16;  /*This register is used to config rx arbiter time out value*/
        };
        uint32_t val;
    } arb_timeout;
    union {
        struct {
            uint32_t weight_en_tx                  :    1;  /*This register is used to config tx arbiter weight function  off/on*/
            uint32_t weight_en_rx                  :    1;  /*This register is used to config rx arbiter weight function  off/on*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } weight_en;
    union {
        struct {
            uint32_t in_mem_clk_force_en           :    1;  /*1: Force to open the clock and bypass the gate-clock when accessing the RAM in AXI_DMA. 0: A gate-clock will be used when accessing the RAM in AXI_DMA.*/
            uint32_t in_mem_force_pu               :    1;  /*Force power up ram */
            uint32_t in_mem_force_pd               :    1;  /*Force power down ram */
            uint32_t out_mem_clk_force_en          :    1;  /*1: Force to open the clock and bypass the gate-clock when accessing the RAM in AXI_DMA. 0: A gate-clock will be used when accessing the RAM in AXI_DMA.*/
            uint32_t out_mem_force_pu              :    1;  /*Force power up ram */
            uint32_t out_mem_force_pd              :    1;  /*Force power down ram */
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } in_mem_conf;
    uint32_t intr_mem_start_addr;
    uint32_t intr_mem_end_addr;
    uint32_t extr_mem_start_addr;
    uint32_t extr_mem_end_addr;
    union {
        struct {
            uint32_t in_reset_avail                :    1;  /*rx chan0 reset valid reg.*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } in_reset_avail_ch[3];
    union {
        struct {
            uint32_t out_reset_avail               :    1;  /*tx chan0 reset valid reg.*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } out_reset_avail_ch[3];
    uint32_t reserved_2a4;
    union {
        struct {
            uint32_t axim_wr_rst_inter             :    1;  /*Set this bit then clear this bit to reset the internal axi_wr FSM.*/
            uint32_t axim_rd_rst_inter             :    1;  /*Set this bit then clear this bit to reset the internal axi_rd FSM.*/
            uint32_t reserved2                     :    1;
            uint32_t arb_pri_dis                   :    1;  /*Set this bit to disable priority arbitration function.*/
            uint32_t clk_en                        :    1;  /*1'h1: Force clock on for register. 1'h0: Support clock only when application writes registers.*/
            uint32_t reserved5                     :    27;
        };
        uint32_t val;
    } misc_conf;
    union {
        struct {
            uint32_t rdn_ena                       :    1;  /*reserved*/
            uint32_t rdn_result                    :    1;  /*reserved*/
            uint32_t reserved2                     :    30;  /*reserved*/
        };
        uint32_t val;
    } rdn_result;
    uint32_t rdn_eco_high;
    uint32_t rdn_eco_low;
    union {
        struct {
            uint32_t wresp_err_cnt                 :    4;  /*axi wr responce cnt reg.*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } wresp_cnt;
    union {
        struct {
            uint32_t rresp_err_cnt                 :    4;  /*axi rd responce cnt reg.*/
            uint32_t reserved4                     :    28;
        };
        uint32_t val;
    } rresp_cnt;
    union {
        struct {
            uint32_t infifo_l1_cnt                 :    6;  /*The register stores the byte number of the data in L1 Rx FIFO for Rx channel 0.*/
            uint32_t infifo_l2_cnt                 :    4;  /*The register stores the byte number of the data in L2 Rx FIFO for Rx channel 0.*/
            uint32_t reserved10                    :    22;  /*reserved*/
        };
        uint32_t val;
    } infifo_status1;
    union {
        struct {
            uint32_t infifo_l1_cnt_ch1             :    6;  /*The register stores the byte number of the data in L1 Rx FIFO for Rx channel 1.*/
            uint32_t infifo_l2_cnt_ch1             :    4;  /*The register stores the byte number of the data in L2 Rx FIFO for Rx channel 1.*/
            uint32_t reserved10                    :    22;  /*reserved*/
        };
        uint32_t val;
    } infifo_status1_ch1;
    union {
        struct {
            uint32_t infifo_l1_cnt_ch2             :    6;  /*The register stores the byte number of the data in L1 Rx FIFO for Rx channel 2.*/
            uint32_t infifo_l2_cnt_ch2             :    4;  /*The register stores the byte number of the data in L2 Rx FIFO for Rx channel 2.*/
            uint32_t reserved10                    :    22;  /*reserved*/
        };
        uint32_t val;
    } infifo_status1_ch2;
    union {
        struct {
            uint32_t outfifo_l1_cnt                :    6;  /*The register stores the byte number of the data in L1 Tx FIFO for Tx channel 0.*/
            uint32_t outfifo_l2_cnt                :    4;  /*The register stores the byte number of the data in L2 Tx FIFO for Tx channel 0.*/
            uint32_t reserved10                    :    22;  /*reserved*/
        };
        uint32_t val;
    } outfifo_status1;
    union {
        struct {
            uint32_t outfifo_l1_cnt_ch1            :    6;  /*The register stores the byte number of the data in L1 Tx FIFO for Tx channel 1.*/
            uint32_t outfifo_l2_cnt_ch1            :    4;  /*The register stores the byte number of the data in L2 Tx FIFO for Tx channel 1.*/
            uint32_t reserved10                    :    22;  /*reserved*/
        };
        uint32_t val;
    } outfifo_status1_ch1;
    union {
        struct {
            uint32_t outfifo_l1_cnt_ch2            :    6;  /*The register stores the byte number of the data in L1 Tx FIFO for Tx channel 2.*/
            uint32_t outfifo_l2_cnt_ch2            :    4;  /*The register stores the byte number of the data in L2 Tx FIFO for Tx channel 2.*/
            uint32_t reserved10                    :    22;  /*reserved*/
        };
        uint32_t val;
    } outfifo_status1_ch2;
    uint32_t date;
} axi_dma_dev_t;
extern axi_dma_dev_t AXI_DMA;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_AXI_DMA_STRUCT_H_ */
