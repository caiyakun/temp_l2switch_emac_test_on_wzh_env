/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_JPEG_STRUCT_H_
#define _SOC_JPEG_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t fsm_rst                       :    1;  /*fsm reset*/
            uint32_t start                         :    1;  /*start to compress a new pic(in dma reg mode)*/
            uint32_t qnr_precision                 :    1;  /*0:8bit qnr,1:12bit qnr(TBD)*/
            uint32_t ff_check_en                   :    1;  /*enable whether to add "00" after "ff"*/
            uint32_t sample_sel                    :    2;  /*0:yuv444,1:yuv422, 2:yuv420*/
            uint32_t debug_direct_out_en           :    1;  /*0:normal mode,1:debug mode for direct output from input*/
            uint32_t qnr_fifo_en                   :    1;  /*0:use non-fifo way to access qnr ram,1:use fifo way to access qnr ram*/
            uint32_t lqnr_tbl_sel                  :    2;  /*choose  luminance quntization table id(TBD)*/
            uint32_t cqnr_tbl_sel                  :    2;  /*choose  chrominance quntization table id (TBD)*/
            uint32_t color_space                   :    3;  /*configure picture's color space:0-rgb888,1-yuv422,2-rgb565,3-gray,4-yuv444,5-yuv420*/
            uint32_t dht_fifo_en                   :    1;  /*0:use non-fifo way to write dht len_total/codemin/value table,1:use fifo way to write dht len_total/codemin/value table. Reading dht len_total/codemin/value table only has nonfifo way*/
            uint32_t mem_clk_force_on              :    1;  /*force memory's clock enabled*/
            uint32_t decode_timeout_thres          :    6;  /*decode pause period to trigger decode_timeout int, the timeout periods =2 power (reg_decode_timeout_thres) -1*/
            uint32_t decode_timeout_task_sel       :    1;  /*0: software use reset to abort decode process ,1: decoder abort decode process by itself*/
            uint32_t soft_rst                      :    1;  /*when set to 1, soft reset JPEG module except jpeg_reg module*/
            uint32_t fifo_rst                      :    1;  /*fifo reset*/
            uint32_t pixel_rev                     :    1;  /*reverse the source color pixel*/
            uint32_t tailer_en                     :    1;  /*set this bit to add EOI of "0xffd9" at the end of bitstream*/
            uint32_t pause_en                      :    1;  /*set this bit to pause jpeg encoding*/
            uint32_t mem_force_pd                  :    1;  /*0: no operation,1:force jpeg memory to power down*/
            uint32_t mem_force_pu                  :    1;  /*0: no operation,1:force jpeg memory to power up*/
            uint32_t mode                          :    1;  /*0:encoder mode, 1: decoder mode*/
        };
        uint32_t val;
    } config;
    union {
        struct {
            uint32_t t0_dqt_info                   :    8;  /*Configure dqt table0's quantization coefficient precision in bit[7:4], configure dqt table0's table id in bit[3:0]*/
            uint32_t t1_dqt_info                   :    8;  /*Configure dqt table1's quantization coefficient precision in bit[7:4], configure dqt table1's table id in bit[3:0]*/
            uint32_t t2_dqt_info                   :    8;  /*Configure dqt table2's quantization coefficient precision in bit[7:4], configure dqt table2's table id in bit[3:0]*/
            uint32_t t3_dqt_info                   :    8;  /*Configure dqt table3's quantization coefficient precision in bit[7:4], configure dqt table3's table id in bit[3:0]*/
        };
        uint32_t val;
    } dqt_info;
    union {
        struct {
            uint32_t va                            :    16;  /*configure picture's height. when encode, the max configurable bits is 14, when decode, the max configurable bits is 16*/
            uint32_t ha                            :    16;  /*configure picture's width. when encode, the max configurable bits is 14, when decode, the max configurable bits is 16*/
        };
        uint32_t val;
    } pic_size;
    uint32_t reserved_c;
    uint32_t t0qnr;
    uint32_t t1qnr;
    uint32_t t2qnr;
    uint32_t t3qnr;
    union {
        struct {
            uint32_t restart_interval              :    16;  /*configure restart interval in DRI marker when decode*/
            uint32_t component_num                 :    8;  /*configure number of components in frame when decode*/
            uint32_t sw_dht_en                     :    1;  /*software decode dht table enable*/
            uint32_t sos_check_byte_num            :    2;  /*Configure the byte number to check next sos marker in the multi-scan picture after one scan is decoded down. The real check number is reg_sos_check_byte_num+1*/
            uint32_t rst_check_byte_num            :    2;  /*Configure the byte number to check next rst marker after one rst interval is decoded down. The real check number is reg_rst_check_byte_num+1*/
            uint32_t multi_scan_err_check          :    1;  /*reserved for decoder*/
            uint32_t dezigzag_ready_ctl            :    1;  /*reserved for decoder*/
            uint32_t reserved31                    :    1;  /*reserved*/
        };
        uint32_t val;
    } decode_conf;
    union {
        struct {
            uint32_t c0_dqt_tbl_sel                :    8;  /*choose  c0 quntization table id (TBD)*/
            uint32_t c0_y_factor                   :    4;  /*vertical sampling factor of c0*/
            uint32_t c0_x_factor                   :    4;  /*horizontal sampling factor of c0*/
            uint32_t c0_id                         :    8;  /*the identifier of c0*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } c0;
    union {
        struct {
            uint32_t c1_dqt_tbl_sel                :    8;  /*choose  c1 quntization table id (TBD)*/
            uint32_t c1_y_factor                   :    4;  /*vertical sampling factor of c1*/
            uint32_t c1_x_factor                   :    4;  /*horizontal sampling factor of c1*/
            uint32_t c1_id                         :    8;  /*the identifier of c1*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } c1;
    union {
        struct {
            uint32_t c2_dqt_tbl_sel                :    8;  /*choose  c2 quntization table id (TBD)*/
            uint32_t c2_y_factor                   :    4;  /*vertical sampling factor of c2*/
            uint32_t c2_x_factor                   :    4;  /*horizontal sampling factor of c2*/
            uint32_t c2_id                         :    8;  /*the identifier of c2*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } c2;
    union {
        struct {
            uint32_t c3_dqt_tbl_sel                :    8;  /*choose  c3 quntization table id (TBD)*/
            uint32_t c3_y_factor                   :    4;  /*vertical sampling factor of c3*/
            uint32_t c3_x_factor                   :    4;  /*horizontal sampling factor of c3*/
            uint32_t c3_id                         :    8;  /*the identifier of c3*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } c3;
    union {
        struct {
            uint32_t dc0_dht_id                    :    4;  /*configure dht dc table 0 id*/
            uint32_t dc1_dht_id                    :    4;  /*configure dht dc table 1 id*/
            uint32_t ac0_dht_id                    :    4;  /*configure dht ac table 0 id*/
            uint32_t ac1_dht_id                    :    4;  /*configure dht ac table 1 id*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } dht_info;
    union {
        struct {
            uint32_t done                          :    1;  /*This raw interrupt bit turns to high level when JPEG finishes encoding a picture.. */
            uint32_t rle_parallel_err              :    1;  /*The raw interrupt bit to sign that rle parallel error when decoding.*/
            uint32_t cid_err                       :    1;  /*The raw interrupt bit to sign that scan id check with component fails when decoding.*/
            uint32_t c_dht_dc_id_err               :    1;  /*The raw interrupt bit to sign that scan component's dc dht id check with dc dht table's id fails when decoding.*/
            uint32_t c_dht_ac_id_err               :    1;  /*The raw interrupt bit to sign that scan component's ac dht id check with ac dht table's id fails when decoding.*/
            uint32_t c_dqt_id_err                  :    1;  /*The raw interrupt bit to sign that scan component's dqt id check with dqt table's id fails when decoding.*/
            uint32_t rst_uxp_err                   :    1;  /*The raw interrupt bit to sign that RST header marker is detected but restart interval is 0 when decoding.*/
            uint32_t rst_check_none_err            :    1;  /*The raw interrupt bit to sign that RST header marker is not detected but restart interval is not 0 when decoding.*/
            uint32_t rst_check_pos_err             :    1;  /*The raw interrupt bit to sign that RST header marker position mismatches with restart interval when decoding.*/
            uint32_t out_eof                       :    1;  /*The raw interrupt bit turns to high level when the last pixel of one square has been transmitted for Tx channel.*/
            uint32_t sr_color_mode_err             :    1;  /*The raw interrupt bit to sign that the selected source color mode is not supported.*/
            uint32_t dct_done                      :    1;  /*The raw interrupt bit to sign that one dct calculation is finished.*/
            uint32_t bs_last_block_eof             :    1;  /*The raw interrupt bit to sign that the coding process for last block is finished.*/
            uint32_t scan_check_none_err           :    1;  /*The raw interrupt bit to sign that SOS header marker is not detected but there are still components left to be decoded.*/
            uint32_t scan_check_pos_err            :    1;  /*The raw interrupt bit to sign that SOS header marker position wrong when decoding.*/
            uint32_t uxp_det                       :    1;  /*The raw interrupt bit to sign that unsupported header marker is detected when decoding.*/
            uint32_t en_frame_eof_err              :    1;  /*The raw interrupt bit to sign that received pixel blocks are smaller than expected when encoding.*/
            uint32_t en_frame_eof_lack             :    1;  /*The raw interrupt bit to sign that the frame eof sign bit from dma input is missing when encoding. But the number of pixel blocks is enough.*/
            uint32_t de_frame_eof_err              :    1;  /*The raw interrupt bit to sign that decoded blocks are smaller than expected when decoding.*/
            uint32_t de_frame_eof_lack             :    1;  /*The raw interrupt bit to sign that the either frame eof from dma input or eoi marker is missing when encoding. But the number of decoded blocks is enough.*/
            uint32_t sos_unmatch_err               :    1;  /*The raw interrupt bit to sign that the component number of a scan is 0 or does not match the sos marker's length when decoding. */
            uint32_t marker_err_fst_scan           :    1;  /*The raw interrupt bit to sign that the first scan has header marker error when decoding.*/
            uint32_t marker_err_other_scan         :    1;  /*The raw interrupt bit to sign that the following scans but not the first scan have header marker error when decoding.*/
            uint32_t undet                         :    1;  /*The raw interrupt bit to sign that JPEG format is not detected at the eof data of a packet when decoding.*/
            uint32_t decode_timeout                :    1;  /*The raw interrupt bit to sign that decode pause time is longer than the setting decode timeout time when decoding.*/
            uint32_t reserved25                    :    7;
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t done                          :    1;  /*This enable interrupt bit turns to high level when JPEG finishes encoding a picture.. */
            uint32_t rle_parallel_err              :    1;  /*The enable interrupt bit to sign that rle parallel error when decoding.*/
            uint32_t cid_err                       :    1;  /*The enable interrupt bit to sign that scan id check with component fails when decoding.*/
            uint32_t c_dht_dc_id_err               :    1;  /*The enable interrupt bit to sign that scan component's dc dht id check with dc dht table's id fails when decoding.*/
            uint32_t c_dht_ac_id_err               :    1;  /*The enable interrupt bit to sign that scan component's ac dht id check with ac dht table's id fails when decoding.*/
            uint32_t c_dqt_id_err                  :    1;  /*The enable interrupt bit to sign that scan component's dqt id check with dqt table's id fails when decoding.*/
            uint32_t rst_uxp_err                   :    1;  /*The enable interrupt bit to sign that RST header marker is detected but restart interval is 0 when decoding.*/
            uint32_t rst_check_none_err            :    1;  /*The enable interrupt bit to sign that RST header marker is not detected but restart interval is not 0 when decoding.*/
            uint32_t rst_check_pos_err             :    1;  /*The enable interrupt bit to sign that RST header marker position mismatches with restart interval when decoding.*/
            uint32_t out_eof                       :    1;  /*The enable interrupt bit turns to high level when the last pixel of one square has been transmitted for Tx channel.*/
            uint32_t sr_color_mode_err             :    1;  /*The enable interrupt bit to sign that the selected source color mode is not supported.*/
            uint32_t dct_done                      :    1;  /*The enable interrupt bit to sign that one dct calculation is finished.*/
            uint32_t bs_last_block_eof             :    1;  /*The enable interrupt bit to sign that the coding process for last block is finished.*/
            uint32_t scan_check_none_err           :    1;  /*The enable interrupt bit to sign that SOS header marker is not detected but there are still components left to be decoded.*/
            uint32_t scan_check_pos_err            :    1;  /*The enable interrupt bit to sign that SOS header marker position wrong when decoding.*/
            uint32_t uxp_det                       :    1;  /*The enable interrupt bit to sign that unsupported header marker is detected when decoding.*/
            uint32_t en_frame_eof_err              :    1;  /*The enable interrupt bit to sign that received pixel blocks are smaller than expected when encoding.*/
            uint32_t en_frame_eof_lack             :    1;  /*The enable interrupt bit to sign that the frame eof sign bit from dma input is missing when encoding. But the number of pixel blocks is enough.*/
            uint32_t de_frame_eof_err              :    1;  /*The enable interrupt bit to sign that decoded blocks are smaller than expected when decoding.*/
            uint32_t de_frame_eof_lack             :    1;  /*The enable interrupt bit to sign that the either frame eof from dma input or eoi marker is missing when encoding. But the number of decoded blocks is enough.*/
            uint32_t sos_unmatch_err               :    1;  /*The enable interrupt bit to sign that the component number of a scan is 0 or does not match the sos marker's length when decoding. */
            uint32_t marker_err_fst_scan           :    1;  /*The enable interrupt bit to sign that the first scan has header marker error when decoding.*/
            uint32_t marker_err_other_scan         :    1;  /*The enable interrupt bit to sign that the following scans but not the first scan have header marker error when decoding.*/
            uint32_t undet                         :    1;  /*The enable interrupt bit to sign that JPEG format is not detected at the eof data of a packet when decoding.*/
            uint32_t decode_timeout                :    1;  /*The enable interrupt bit to sign that decode pause time is longer than the setting decode timeout time when decoding.*/
            uint32_t reserved25                    :    7;
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t done                          :    1;  /*This status interrupt bit turns to high level when JPEG finishes encoding a picture.. */
            uint32_t rle_parallel_err              :    1;  /*The status interrupt bit to sign that rle parallel error when decoding.*/
            uint32_t cid_err                       :    1;  /*The status interrupt bit to sign that scan id check with component fails when decoding.*/
            uint32_t c_dht_dc_id_err               :    1;  /*The status interrupt bit to sign that scan component's dc dht id check with dc dht table's id fails when decoding.*/
            uint32_t c_dht_ac_id_err               :    1;  /*The status interrupt bit to sign that scan component's ac dht id check with ac dht table's id fails when decoding.*/
            uint32_t c_dqt_id_err                  :    1;  /*The status interrupt bit to sign that scan component's dqt id check with dqt table's id fails when decoding.*/
            uint32_t rst_uxp_err                   :    1;  /*The status interrupt bit to sign that RST header marker is detected but restart interval is 0 when decoding.*/
            uint32_t rst_check_none_err            :    1;  /*The status interrupt bit to sign that RST header marker is not detected but restart interval is not 0 when decoding.*/
            uint32_t rst_check_pos_err             :    1;  /*The status interrupt bit to sign that RST header marker position mismatches with restart interval when decoding.*/
            uint32_t out_eof                       :    1;  /*The status interrupt bit turns to high level when the last pixel of one square has been transmitted for Tx channel.*/
            uint32_t sr_color_mode_err             :    1;  /*The status interrupt bit to sign that the selected source color mode is not supported.*/
            uint32_t dct_done                      :    1;  /*The status interrupt bit to sign that one dct calculation is finished.*/
            uint32_t bs_last_block_eof             :    1;  /*The status interrupt bit to sign that the coding process for last block is finished.*/
            uint32_t scan_check_none_err           :    1;  /*The status interrupt bit to sign that SOS header marker is not detected but there are still components left to be decoded.*/
            uint32_t scan_check_pos_err            :    1;  /*The status interrupt bit to sign that SOS header marker position wrong when decoding.*/
            uint32_t uxp_det                       :    1;  /*The status interrupt bit to sign that unsupported header marker is detected when decoding.*/
            uint32_t en_frame_eof_err              :    1;  /*The status interrupt bit to sign that received pixel blocks are smaller than expected when encoding.*/
            uint32_t en_frame_eof_lack             :    1;  /*The status interrupt bit to sign that the frame eof sign bit from dma input is missing when encoding. But the number of pixel blocks is enough.*/
            uint32_t de_frame_eof_err              :    1;  /*The status interrupt bit to sign that decoded blocks are smaller than expected when decoding.*/
            uint32_t de_frame_eof_lack             :    1;  /*The status interrupt bit to sign that the either frame eof from dma input or eoi marker is missing when encoding. But the number of decoded blocks is enough.*/
            uint32_t sos_unmatch_err               :    1;  /*The status interrupt bit to sign that the component number of a scan is 0 or does not match the sos marker's length when decoding. */
            uint32_t marker_err_fst_scan           :    1;  /*The status interrupt bit to sign that the first scan has header marker error when decoding.*/
            uint32_t marker_err_other_scan         :    1;  /*The status interrupt bit to sign that the following scans but not the first scan have header marker error when decoding.*/
            uint32_t undet                         :    1;  /*The status interrupt bit to sign that JPEG format is not detected at the eof data of a packet when decoding.*/
            uint32_t decode_timeout                :    1;  /*The status interrupt bit to sign that decode pause time is longer than the setting decode timeout time when decoding.*/
            uint32_t reserved25                    :    7;
        };
        uint32_t val;
    } int_st;
    union {
        struct {
            uint32_t done                          :    1;  /*This clear interrupt bit turns to high level when JPEG finishes encoding a picture.. */
            uint32_t rle_parallel_err              :    1;  /*The clear interrupt bit to sign that rle parallel error when decoding.*/
            uint32_t cid_err                       :    1;  /*The clear interrupt bit to sign that scan id check with component fails when decoding.*/
            uint32_t c_dht_dc_id_err               :    1;  /*The clear interrupt bit to sign that scan component's dc dht id check with dc dht table's id fails when decoding.*/
            uint32_t c_dht_ac_id_err               :    1;  /*The clear interrupt bit to sign that scan component's ac dht id check with ac dht table's id fails when decoding.*/
            uint32_t c_dqt_id_err                  :    1;  /*The clear interrupt bit to sign that scan component's dqt id check with dqt table's id fails when decoding.*/
            uint32_t rst_uxp_err                   :    1;  /*The clear interrupt bit to sign that RST header marker is detected but restart interval is 0 when decoding.*/
            uint32_t rst_check_none_err            :    1;  /*The clear interrupt bit to sign that RST header marker is not detected but restart interval is not 0 when decoding.*/
            uint32_t rst_check_pos_err             :    1;  /*The clear interrupt bit to sign that RST header marker position mismatches with restart interval when decoding.*/
            uint32_t out_eof                       :    1;  /*The clear interrupt bit turns to high level when the last pixel of one square has been transmitted for Tx channel.*/
            uint32_t sr_color_mode_err             :    1;  /*The clear interrupt bit to sign that the selected source color mode is not supported.*/
            uint32_t dct_done                      :    1;  /*The clear interrupt bit to sign that one dct calculation is finished.*/
            uint32_t bs_last_block_eof             :    1;  /*The clear interrupt bit to sign that the coding process for last block is finished.*/
            uint32_t scan_check_none_err           :    1;  /*The clear interrupt bit to sign that SOS header marker is not detected but there are still components left to be decoded.*/
            uint32_t scan_check_pos_err            :    1;  /*The clear interrupt bit to sign that SOS header marker position wrong when decoding.*/
            uint32_t uxp_det                       :    1;  /*The clear interrupt bit to sign that unsupported header marker is detected when decoding.*/
            uint32_t en_frame_eof_err              :    1;  /*The clear interrupt bit to sign that received pixel blocks are smaller than expected when encoding.*/
            uint32_t en_frame_eof_lack             :    1;  /*The clear interrupt bit to sign that the frame eof sign bit from dma input is missing when encoding. But the number of pixel blocks is enough.*/
            uint32_t de_frame_eof_err              :    1;  /*The clear interrupt bit to sign that decoded blocks are smaller than expected when decoding.*/
            uint32_t de_frame_eof_lack             :    1;  /*The clear interrupt bit to sign that the either frame eof from dma input or eoi marker is missing when encoding. But the number of decoded blocks is enough.*/
            uint32_t sos_unmatch_err               :    1;  /*The clear interrupt bit to sign that the component number of a scan is 0 or does not match the sos marker's length when decoding. */
            uint32_t marker_err_fst_scan           :    1;  /*The clear interrupt bit to sign that the first scan has header marker error when decoding.*/
            uint32_t marker_err_other_scan         :    1;  /*The clear interrupt bit to sign that the following scans but not the first scan have header marker error when decoding.*/
            uint32_t undet                         :    1;  /*The clear interrupt bit to sign that JPEG format is not detected at the eof data of a packet when decoding.*/
            uint32_t decode_timeout                :    1;  /*The clear interrupt bit to sign that decode pause time is longer than the setting decode timeout time when decoding.*/
            uint32_t reserved25                    :    7;
        };
        uint32_t val;
    } int_clr;
    union {
        struct {
            uint32_t reserved0                     :    2;
            uint32_t reserved2                     :    4;
            uint32_t reserved6                     :    4;
            uint32_t reserved10                    :    1;  /*indicate the source data is from dma edge extension but not from the actual picture*/
            uint32_t bitstream_eof_vld_cnt         :    6;  /*the valid bit count for last bitstream*/
            uint32_t dctout_zzscan_addr            :    6;  /*the zig-zag read addr from dctout_ram */
            uint32_t qnrval_zzscan_addr            :    6;  /*the zig-zag read addr from qnrval_ram */
            uint32_t state_yuv                     :    3;  /*the state of jpeg fsm*/
        };
        uint32_t val;
    } status0;
    union {
        struct {
            uint32_t source_pixel                  :    24;  /*source pixels fetched from dma*/
            uint32_t last_block                    :    1;  /*indicate the encoding process for the last mcu of the picture*/
            uint32_t last_mcu                      :    1;  /*indicate the encoding process for the last block of the picture*/
            uint32_t last_dc                       :    1;  /*indicate the encoding process is at the header of the last block of the picture*/
            uint32_t packfifo_ready                :    1;  /*the jpeg pack_fifo ready signal, high active*/
            uint32_t reserved28                    :    1;
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } status2;
    union {
        struct {
            uint32_t yo                            :    9;  /*component y transferred from rgb input*/
            uint32_t y_ready                       :    1;  /*component y valid signal, high active*/
            uint32_t cbo                           :    9;  /*component cb transferred from rgb input*/
            uint32_t cb_ready                      :    1;  /*component cb valid signal, high active*/
            uint32_t cro                           :    9;  /*component cr transferred from rgb input*/
            uint32_t cr_ready                      :    1;  /*component cr valid signal, high active*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } status3;
    uint32_t status4;
    uint32_t dht_totlen_dc0;
    uint32_t dht_val_dc0;
    uint32_t dht_totlen_ac0;
    uint32_t dht_val_ac0;
    uint32_t dht_totlen_dc1;
    uint32_t dht_val_dc1;
    uint32_t dht_totlen_ac1;
    uint32_t dht_val_ac1;
    uint32_t dht_codemin_dc0;
    uint32_t dht_codemin_ac0;
    uint32_t dht_codemin_dc1;
    uint32_t dht_codemin_ac1;
    union {
        struct {
            uint32_t decode_byte_cnt               :    26;  /*Reserved*/
            uint32_t header_dec_st                 :    4;  /*Reserved*/
            uint32_t decode_sample_sel             :    2;  /*Reserved*/
        };
        uint32_t val;
    } decoder_status0;
    union {
        struct {
            uint32_t encode_data                   :    16;  /*Reserved*/
            uint32_t count_q                       :    7;  /*Reserved*/
            uint32_t mcu_fsm_ready                 :    1;  /*Reserved*/
            uint32_t decode_data                   :    8;  /*Reserved*/
        };
        uint32_t val;
    } decoder_status1;
    union {
        struct {
            uint32_t comp_block_num                :    26;  /*Reserved*/
            uint32_t scan_num                      :    3;  /*Reserved*/
            uint32_t rst_check_wait                :    1;  /*Reserved*/
            uint32_t scan_check_wait               :    1;  /*Reserved*/
            uint32_t mcu_in_proc                   :    1;  /*Reserved*/
        };
        uint32_t val;
    } decoder_status2;
    uint32_t decoder_status3;
    union {
        struct {
            uint32_t block_eof_cnt                 :    26;  /*Reserved*/
            uint32_t dezigzag_ready                :    1;  /*Reserved*/
            uint32_t de_frame_eof_check            :    1;  /*Reserved*/
            uint32_t de_dma2d_in_push              :    1;  /*Reserved*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } decoder_status4;
    union {
        struct {
            uint32_t idct_hfm_data                 :    16;  /*Reserved*/
            uint32_t ns0                           :    3;  /*Reserved*/
            uint32_t ns1                           :    3;  /*Reserved*/
            uint32_t ns2                           :    3;  /*Reserved*/
            uint32_t ns3                           :    3;  /*Reserved*/
            uint32_t data_last_o                   :    1;  /*Reserved*/
            uint32_t rdn_result                    :    1;  /*redundant registers for jpeg*/
            uint32_t rdn_ena                       :    1;  /*redundant control registers for jpeg*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } decoder_status5;
    union {
        struct {
            uint32_t pic_block_num                 :    24;  /*Reserved*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } status5;
    uint32_t eco_low;
    uint32_t eco_high;
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
    union {
        struct {
            uint32_t reserved0                     :    31;
            uint32_t clk_en                        :    1;  /*Reserved*/
        };
        uint32_t val;
    } sys;
    union {
        struct {
            uint32_t ver                           :    28;  /*Reserved*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } version;
} jpeg_dev_t;
extern jpeg_dev_t JPEG;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_JPEG_STRUCT_H_ */
