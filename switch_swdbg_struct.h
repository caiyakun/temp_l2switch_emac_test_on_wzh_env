/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_SWDBG_STRUCT_H_
#define _SWITCH_SWITCH_SWDBG_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

typedef volatile struct {
    uint32_t swdbg_date;
    union {
        struct {
            uint32_t reg_tbx0_user_mode            :    3;  /*Configures TBX0 user mode. ; 3'd0: Bypass, ; 3'd1: User-A, TARP0; 3'd2: User-B, CPU-Agent; 3'd3: User-C, TARP1; 3'd4: User-D, MAC1; others: Reserved; ; Not support dymamic configuration.; If TBX0-TX/RX is working:; 1. turn off TBX0-TX/RX; 2. wait rx_fsm_state and rx_fsm_state back to IDLE; 3. Configures TBX0_USER_MODE; 4. turn on TBX0-TX/RX; Notice: If you want to switch TBX0 connect to a specific user, make sure that the target user is in IDLE state.*/
            uint32_t reserved3                     :    1;
            uint32_t reserved4                     :    1;
            uint32_t reserved5                     :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } swdbg_tbx0_global_cfg;
    union {
        struct {
            uint32_t reg_tbx0_tx_payload_pad       :    8;  /*Configures the Byte format of pad*/
            uint32_t reg_tbx0_tx_en                :    1;  /*Configures TX enable, after TX done, HW auto set 0*/
            uint32_t tbx0_tx_done                  :    1;  /*Only for HW*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } swdbg_tbx0_tx_ctrl;
    union {
        struct {
            uint32_t reg_tbx0_rx_rdy_htime         :    8;  /*Configures TBX0 RX o_rx_rdy set 1 clks*/
            uint32_t reg_tbx0_rx_rdy_ltime         :    8;  /*Configures TBX0 RX o_rx_rdy set 0 clks*/
            uint32_t reg_tbx0_rx_en                :    1;  /*Configures RX enable*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } swdbg_tbx0_rx_ctrl;
    union {
        struct {
            uint32_t reg_tbx1_user_mode            :    3;  /*Configures TBX1 user mode. ; 3'd0: Bypass, ; 3'd1: User-A, TARP2; 3'd2: User-B, MAC2; 3'd3: User-C, TARP3; 3'd4: User-D, MAC3; others: Reserved; ; Not support dymamic configuration.; If TBX1-TX/RX is working:; 1. turn off TBX1-TX/RX; 2. wait rx_fsm_state and rx_fsm_state back to IDLE; 3. Configures TBX1_USER_MODE; 4. turn on TBX1-TX/RX; Notice: If you want to switch TBX1 connect to a specific user, make sure that the target user is in IDLE state.*/
            uint32_t reserved3                     :    1;
            uint32_t reserved4                     :    1;
            uint32_t reserved5                     :    1;
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } swdbg_tbx1_global_cfg;
    union {
        struct {
            uint32_t reg_tbx1_tx_payload_pad       :    8;  /*Configures the Byte format of pad*/
            uint32_t reg_tbx1_tx_en                :    1;  /*Configures TX enable, after TX done, HW auto set 0*/
            uint32_t tbx1_tx_done                  :    1;  /*Only for HW*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } swdbg_tbx1_tx_ctrl;
    union {
        struct {
            uint32_t reg_tbx1_rx_rdy_htime         :    8;  /*Configures tbx1 RX o_rx_rdy set 1 clks*/
            uint32_t reg_tbx1_rx_rdy_ltime         :    8;  /*Configures tbx1 RX o_rx_rdy set 0 clks*/
            uint32_t reg_tbx1_rx_en                :    1;  /*Configures RX enable*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } swdbg_tbx1_rx_ctrl;
    uint32_t swdbg_debug_key;
    union {
        struct {
            uint32_t reg_tarp_tx_debug_stop_en_p0  :    1;  /*Configures debug stop en, must set debug key = 32'ha5a5a5a5 first*/
            uint32_t reg_tarp_tx_debug_stop_en_p1  :    1;  /*See bit[0]*/
            uint32_t reg_tarp_tx_debug_stop_en_p2  :    1;  /*See bit[0]*/
            uint32_t reg_tarp_tx_debug_stop_en_p3  :    1;  /*See bit[0]*/
            uint32_t reg_tarp_tx_debug_stop_en_p4  :    1;  /*See bit[0]*/
            uint32_t reserved5                     :    1;  /*See bit[0]*/
            uint32_t reserved6                     :    1;  /*See bit[0]*/
            uint32_t reserved7                     :    1;  /*See bit[0]*/
            uint32_t reg_tarp_rx_debug_stop_en_p0  :    1;  /*See bit[0]*/
            uint32_t reg_tarp_rx_debug_stop_en_p1  :    1;  /*See bit[0]*/
            uint32_t reg_tarp_rx_debug_stop_en_p2  :    1;  /*See bit[0]*/
            uint32_t reg_tarp_rx_debug_stop_en_p3  :    1;  /*See bit[0]*/
            uint32_t reg_tarp_rx_debug_stop_en_p4  :    1;  /*See bit[0]*/
            uint32_t reserved13                    :    1;  /*See bit[0]*/
            uint32_t reserved14                    :    1;  /*See bit[0]*/
            uint32_t reserved15                    :    1;  /*See bit[0]*/
            uint32_t reg_bman_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } swdbg_stop_module_eib_en;
    union {
        struct {
            uint32_t reg_parser_debug_stop_en      :    1;  /*Configures debug stop en, must set debug key = 32'ha5a5a5a5 first*/
            uint32_t reg_prep_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_l2fm_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_lkup_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_qman_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_epp0_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_epp1_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_epp2_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_epp3_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_epp4_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_epp5_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_epp6_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_epp7_debug_stop_en        :    1;  /*See bit[0]*/
            uint32_t reg_rmu_debug_stop_en         :    1;  /*See bit[0]*/
            uint32_t reserved14                    :    1;
            uint32_t reserved15                    :    1;
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } swdbg_stop_module_pf_en;
    union {
        struct {
            uint32_t tarp_tx_debug_stopped_p0      :    1;  /*Represent module has been stopped by debug_stop*/
            uint32_t tarp_tx_debug_stopped_p1      :    1;  /*See bit[0]*/
            uint32_t tarp_tx_debug_stopped_p2      :    1;  /*See bit[0]*/
            uint32_t tarp_tx_debug_stopped_p3      :    1;  /*See bit[0]*/
            uint32_t tarp_tx_debug_stopped_p4      :    1;  /*See bit[0]*/
            uint32_t reserved5                     :    1;  /*See bit[0]*/
            uint32_t reserved6                     :    1;  /*See bit[0]*/
            uint32_t reserved7                     :    1;  /*See bit[0]*/
            uint32_t tarp_rx_debug_stopped_p0      :    1;  /*See bit[0]*/
            uint32_t tarp_rx_debug_stopped_p1      :    1;  /*See bit[0]*/
            uint32_t tarp_rx_debug_stopped_p2      :    1;  /*See bit[0]*/
            uint32_t tarp_rx_debug_stopped_p3      :    1;  /*See bit[0]*/
            uint32_t tarp_rx_debug_stopped_p4      :    1;  /*See bit[0]*/
            uint32_t reserved13                    :    1;  /*See bit[0]*/
            uint32_t reserved14                    :    1;  /*See bit[0]*/
            uint32_t reserved15                    :    1;  /*See bit[0]*/
            uint32_t bman_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } swdbg_stopped_module_eib;
    union {
        struct {
            uint32_t parser_debug_stopped          :    1;  /*Represent module has been stopped by debug_stop*/
            uint32_t prep_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t l2fm_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t lkup_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t qman_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t epp0_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t epp1_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t epp2_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t epp3_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t epp4_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t epp5_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t epp6_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t epp7_debug_stopped            :    1;  /*See bit[0]*/
            uint32_t rmu_debug_stopped             :    1;  /*See bit[0]*/
            uint32_t reserved14                    :    18;
        };
        uint32_t val;
    } swdbg_stopped_module_pf;
    union {
        struct {
            uint32_t reg_prep_ipp_fsm_state        :    2;  /*resv*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } swdbg_prep_module_pf;
    union {
        struct {
            uint32_t reg_mem_debug_busy            :    1;  /*Configures memory debug start; CPU set = 1'b1, When operation done HW set = 1'b0*/
            uint32_t reg_mem_debug_wr_rd           :    1;  /*Configures memory debug write or read; 1'b1: Write; 1'b0: Read*/
            uint32_t reg_mem_debug_module_id       :    5;  /*Configures memory debug module id; 5'd0: BMAN; 5'd1: QMAN; 5'd2: RMU; 5'd3: TARP0; 5'd4: TARP1; 5'd5: TARP2; 5'd6: TARP3; 5'd7: TARP4; 5'd8: TARP5; 5'd9: TARP6; 5'd10: TARP7*/
            uint32_t reg_mem_debug_module_mem_id   :    5;  /*Configures memory debug module memory id*/
            uint32_t mem_debug_done                :    1;  /*Hardware Only*/
            uint32_t reserved13                    :    19;
        };
        uint32_t val;
    } swdbg_memory_debug_set;
    union {
        struct {
            uint32_t reg_mem_debug_addr            :    17;  /*Configures memory debug address*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } swdbg_memory_debug_addr;
    uint32_t swdbg_memory_debug_wdata_31to0;
    uint32_t swdbg_memory_debug_wdata_63to32;
    uint32_t swdbg_memory_debug_wdata_95to64;
    uint32_t swdbg_memory_debug_wdata_127to96;
    uint32_t swdbg_memory_debug_wdata_159to128;
    uint32_t swdbg_memory_debug_wdata_191to160;
    uint32_t swdbg_memory_debug_wdata_223to192;
    uint32_t swdbg_memory_debug_wdata_255to224;
    uint32_t swdbg_memory_debug_rdata_31to0;
    uint32_t swdbg_memory_debug_rdata_63to32;
    uint32_t swdbg_memory_debug_rdata_95to64;
    uint32_t swdbg_memory_debug_rdata_127to96;
    uint32_t swdbg_memory_debug_rdata_159to128;
    uint32_t swdbg_memory_debug_rdata_191to160;
    uint32_t swdbg_memory_debug_rdata_223to192;
    uint32_t swdbg_memory_debug_rdata_255to224;
    union {
        struct {
            uint32_t tbx0_tx_vld_state             :    1;  /*tbx0_tx_vld_state*/
            uint32_t tbx0_tx_rdy_state             :    1;  /*tbx0_tx_rdy_state*/
            uint32_t tbx0_tx_fsm_state             :    4;  /*tbx0_tx_fsm_state*/
            uint32_t reserved6                     :    2;
            uint32_t tbx0_rx_vld_state             :    1;  /*tbx0_rx_vld_state*/
            uint32_t tbx0_rx_rdy_state             :    1;  /*tbx0_rx_rdy_state*/
            uint32_t tbx0_rx_fsm_state             :    4;  /*tbx0_rx_fsm_state*/
            uint32_t reserved14                    :    18;
        };
        uint32_t val;
    } swdbg_tbx0_status;
    union {
        struct {
            uint32_t tbx1_tx_vld_state             :    1;  /*tbx1_tx_vld_state*/
            uint32_t tbx1_tx_rdy_state             :    1;  /*tbx1_tx_rdy_state*/
            uint32_t tbx1_tx_fsm_state             :    4;  /*tbx1_tx_fsm_state*/
            uint32_t reserved6                     :    2;
            uint32_t tbx1_rx_vld_state             :    1;  /*tbx1_rx_vld_state*/
            uint32_t tbx1_rx_rdy_state             :    1;  /*tbx1_rx_rdy_state*/
            uint32_t tbx1_rx_fsm_state             :    4;  /*tbx1_rx_fsm_state*/
            uint32_t reserved14                    :    18;
        };
        uint32_t val;
    } swdbg_tbx1_status;
    uint32_t swdbg_tarp0_status0;
    uint32_t swdbg_tarp0_status1;
    uint32_t swdbg_tarp0_status2;
    union {
        struct {
            uint32_t tarp_rx_pd_out_tail_bd_to_bman_buffer_realtime_p0:    3;  /*Represent TARP RX PD tail bd to bman buffer realtime*/
            uint32_t tarp_rx_pd_out_packet_info_buffer_realtime_p0:    3;  /*Represent TARP RX PD packet info buffer realtime*/
            uint32_t tarp_rx_pd_out_head_bbid_buffer_realtime_p0:    3;  /*Represent TARP RX PD head bbid buffer realtime*/
            uint32_t tarp_rx_bd_buffer_realtime_p0 :    7;  /*Represent TARP RX BD buffer data realtime, unit: 8Byte*/
            uint32_t tarp_rx_bbid_buffer_realtime_p0:    2;  /*Represent TARP RX BBID buffer num realtime*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_tarp0_status3;
    union {
        struct {
            uint32_t tarp_rx_pps_token_num_realtime_p0:    8;  /*tarp_rx_pps_token_num_realtime*/
            uint32_t tarp_rx_bps_token_num_realtime_p0:    20;  /*tarp_rx_bps_token_num_realtime*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } swdbg_tarp0_status4;
    uint32_t swdbg_tarp0_status5;
    uint32_t swdbg_tarp0_status6;
    uint32_t swdbg_tarp0_status7;
    uint32_t swdbg_tarp0_status8;
    uint32_t swdbg_tarp0_status9;
    uint32_t swdbg_tarp0_status10;
    union {
        struct {
            uint32_t tarp_tx_fsm_state_p0          :    5;  /*tarp_tx_fsm_state*/
            uint32_t tarp_rx_vld_state_p0          :    1;  /*tarp_rx_vld_state*/
            uint32_t tarp_rx_rdy_state_p0          :    1;  /*tarp_rx_rdy_state*/
            uint32_t tarp_rx_fsm_state_p0          :    6;  /*tarp_rx_fsm_state*/
            uint32_t reserved13                    :    19;
        };
        uint32_t val;
    } swdbg_tarp0_status11;
    uint32_t swdbg_tarp1_status0;
    uint32_t swdbg_tarp1_status1;
    uint32_t swdbg_tarp1_status2;
    union {
        struct {
            uint32_t tarp_rx_pd_out_tail_bd_to_bman_buffer_realtime_p1:    3;  /*Represent TARP RX PD tail bd to bman buffer realtime*/
            uint32_t tarp_rx_pd_out_packet_info_buffer_realtime_p1:    3;  /*Represent TARP RX PD packet info buffer realtime*/
            uint32_t tarp_rx_pd_out_head_bbid_buffer_realtime_p1:    3;  /*Represent TARP RX PD head bbid buffer realtime*/
            uint32_t tarp_rx_bd_buffer_realtime_p1 :    7;  /*Represent TARP RX BD buffer data realtime, unit: 8Byte*/
            uint32_t tarp_rx_bbid_buffer_realtime_p1:    2;  /*Represent TARP RX BBID buffer num realtime*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_tarp1_status3;
    union {
        struct {
            uint32_t tarp_rx_pps_token_num_realtime_p1:    8;  /*tarp_rx_pps_token_num_realtime*/
            uint32_t tarp_rx_bps_token_num_realtime_p1:    20;  /*tarp_rx_bps_token_num_realtime*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } swdbg_tarp1_status4;
    uint32_t swdbg_tarp1_status5;
    uint32_t swdbg_tarp1_status6;
    uint32_t swdbg_tarp1_status7;
    uint32_t swdbg_tarp1_status8;
    uint32_t swdbg_tarp1_status9;
    uint32_t swdbg_tarp1_status10;
    union {
        struct {
            uint32_t tarp_tx_fsm_state_p1          :    5;  /*tarp_tx_fsm_state*/
            uint32_t tarp_rx_vld_state_p1          :    1;  /*tarp_rx_vld_state*/
            uint32_t tarp_rx_rdy_state_p1          :    1;  /*tarp_rx_rdy_state*/
            uint32_t tarp_rx_fsm_state_p1          :    6;  /*tarp_rx_fsm_state*/
            uint32_t reserved13                    :    19;
        };
        uint32_t val;
    } swdbg_tarp1_status11;
    uint32_t swdbg_tarp2_status0;
    uint32_t swdbg_tarp2_status1;
    uint32_t swdbg_tarp2_status2;
    union {
        struct {
            uint32_t tarp_rx_pd_out_tail_bd_to_bman_buffer_realtime_p2:    3;  /*Represent TARP RX PD tail bd to bman buffer realtime*/
            uint32_t tarp_rx_pd_out_packet_info_buffer_realtime_p2:    3;  /*Represent TARP RX PD packet info buffer realtime*/
            uint32_t tarp_rx_pd_out_head_bbid_buffer_realtime_p2:    3;  /*Represent TARP RX PD head bbid buffer realtime*/
            uint32_t tarp_rx_bd_buffer_realtime_p2 :    7;  /*Represent TARP RX BD buffer data realtime, unit: 8Byte*/
            uint32_t tarp_rx_bbid_buffer_realtime_p2:    2;  /*Represent TARP RX BBID buffer num realtime*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_tarp2_status3;
    union {
        struct {
            uint32_t tarp_rx_pps_token_num_realtime_p2:    8;  /*tarp_rx_pps_token_num_realtime*/
            uint32_t tarp_rx_bps_token_num_realtime_p2:    20;  /*tarp_rx_bps_token_num_realtime*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } swdbg_tarp2_status4;
    uint32_t swdbg_tarp2_status5;
    uint32_t swdbg_tarp2_status6;
    uint32_t swdbg_tarp2_status7;
    uint32_t swdbg_tarp2_status8;
    uint32_t swdbg_tarp2_status9;
    uint32_t swdbg_tarp2_status10;
    union {
        struct {
            uint32_t tarp_tx_fsm_state_p2          :    5;  /*tarp_tx_fsm_state*/
            uint32_t tarp_rx_vld_state_p2          :    1;  /*tarp_rx_vld_state*/
            uint32_t tarp_rx_rdy_state_p2          :    1;  /*tarp_rx_rdy_state*/
            uint32_t tarp_rx_fsm_state_p2          :    6;  /*tarp_rx_fsm_state*/
            uint32_t reserved13                    :    19;
        };
        uint32_t val;
    } swdbg_tarp2_status11;
    uint32_t swdbg_tarp3_status0;
    uint32_t swdbg_tarp3_status1;
    uint32_t swdbg_tarp3_status2;
    union {
        struct {
            uint32_t tarp_rx_pd_out_tail_bd_to_bman_buffer_realtime_p3:    3;  /*Represent TARP RX PD tail bd to bman buffer realtime*/
            uint32_t tarp_rx_pd_out_packet_info_buffer_realtime_p3:    3;  /*Represent TARP RX PD packet info buffer realtime*/
            uint32_t tarp_rx_pd_out_head_bbid_buffer_realtime_p3:    3;  /*Represent TARP RX PD head bbid buffer realtime*/
            uint32_t tarp_rx_bd_buffer_realtime_p3 :    7;  /*Represent TARP RX BD buffer data realtime, unit: 8Byte*/
            uint32_t tarp_rx_bbid_buffer_realtime_p3:    2;  /*Represent TARP RX BBID buffer num realtime*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_tarp3_status3;
    union {
        struct {
            uint32_t tarp_rx_pps_token_num_realtime_p3:    8;  /*tarp_rx_pps_token_num_realtime*/
            uint32_t tarp_rx_bps_token_num_realtime_p3:    20;  /*tarp_rx_bps_token_num_realtime*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } swdbg_tarp3_status4;
    uint32_t swdbg_tarp3_status5;
    uint32_t swdbg_tarp3_status6;
    uint32_t swdbg_tarp3_status7;
    uint32_t swdbg_tarp3_status8;
    uint32_t swdbg_tarp3_status9;
    uint32_t swdbg_tarp3_status10;
    union {
        struct {
            uint32_t tarp_tx_fsm_state_p3          :    5;  /*tarp_tx_fsm_state*/
            uint32_t tarp_rx_vld_state_p3          :    1;  /*tarp_rx_vld_state*/
            uint32_t tarp_rx_rdy_state_p3          :    1;  /*tarp_rx_rdy_state*/
            uint32_t tarp_rx_fsm_state_p3          :    6;  /*tarp_rx_fsm_state*/
            uint32_t reserved13                    :    19;
        };
        uint32_t val;
    } swdbg_tarp3_status11;
    uint32_t swdbg_tarp4_status0;
    uint32_t swdbg_tarp4_status1;
    uint32_t swdbg_tarp4_status2;
    union {
        struct {
            uint32_t tarp_rx_pd_out_tail_bd_to_bman_buffer_realtime_p4:    3;  /*Represent TARP RX PD tail bd to bman buffer realtime*/
            uint32_t tarp_rx_pd_out_packet_info_buffer_realtime_p4:    3;  /*Represent TARP RX PD packet info buffer realtime*/
            uint32_t tarp_rx_pd_out_head_bbid_buffer_realtime_p4:    3;  /*Represent TARP RX PD head bbid buffer realtime*/
            uint32_t tarp_rx_bd_buffer_realtime_p4 :    7;  /*Represent TARP RX BD buffer data realtime, unit: 8Byte*/
            uint32_t tarp_rx_bbid_buffer_realtime_p4:    2;  /*Represent TARP RX BBID buffer num realtime*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_tarp4_status3;
    union {
        struct {
            uint32_t tarp_rx_pps_token_num_realtime_p4:    8;  /*tarp_rx_pps_token_num_realtime*/
            uint32_t tarp_rx_bps_token_num_realtime_p4:    20;  /*tarp_rx_bps_token_num_realtime*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } swdbg_tarp4_status4;
    uint32_t swdbg_tarp4_status5;
    uint32_t swdbg_tarp4_status6;
    uint32_t swdbg_tarp4_status7;
    uint32_t swdbg_tarp4_status8;
    uint32_t swdbg_tarp4_status9;
    uint32_t swdbg_tarp4_status10;
    union {
        struct {
            uint32_t tarp_tx_fsm_state_p4          :    5;  /*tarp_tx_fsm_state*/
            uint32_t tarp_rx_vld_state_p4          :    1;  /*tarp_rx_vld_state*/
            uint32_t tarp_rx_rdy_state_p4          :    1;  /*tarp_rx_rdy_state*/
            uint32_t tarp_rx_fsm_state_p4          :    6;  /*tarp_rx_fsm_state*/
            uint32_t reserved13                    :    19;
        };
        uint32_t val;
    } swdbg_tarp4_status11;
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
    uint32_t reserved_200;
    union {
        struct {
            uint32_t atu_port_last_learned_mac_address_47to32_p0:    16;  /*atu_port_last_learned_mac_address_47to32*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } swdbg_lkup_status0;
    uint32_t swdbg_lkup_status1;
    union {
        struct {
            uint32_t atu_port_last_learned_mac_address_47to32_p1:    16;  /*atu_port_last_learned_mac_address_47to32*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } swdbg_lkup_status2;
    uint32_t swdbg_lkup_status3;
    union {
        struct {
            uint32_t atu_port_last_learned_mac_address_47to32_p2:    16;  /*atu_port_last_learned_mac_address_47to32*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } swdbg_lkup_status4;
    uint32_t swdbg_lkup_status5;
    union {
        struct {
            uint32_t atu_port_last_learned_mac_address_47to32_p3:    16;  /*atu_port_last_learned_mac_address_47to32*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } swdbg_lkup_status6;
    uint32_t swdbg_lkup_status7;
    union {
        struct {
            uint32_t atu_port_last_learned_mac_address_47to32_p4:    16;  /*atu_port_last_learned_mac_address_47to32*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } swdbg_lkup_status8;
    uint32_t swdbg_lkup_status9;
    uint32_t reserved_22c;
    uint32_t reserved_230;
    uint32_t reserved_234;
    uint32_t reserved_238;
    uint32_t reserved_23c;
    uint32_t reserved_240;
    union {
        struct {
            uint32_t lkup_qry_fsm_state            :    3;  /*lkup_qry_fsm_state*/
            uint32_t lkup_hw_before_fsm_state      :    2;  /*lkup_hw_before_fsm_state*/
            uint32_t lkup_csn_fsm_state            :    5;  /*lkup_csn_fsm_state*/
            uint32_t lkup_cpu_fsm_state            :    3;  /*lkup_cpu_fsm_state*/
            uint32_t lkup_age_fsm_state            :    3;  /*lkup_age_fsm_state*/
            uint32_t lkup_rmu_fsm_state            :    5;  /*lkup_rmu_fsm_state*/
            uint32_t atu_treg_op_cnt               :    8;  /*Treg opeartion cnt*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } swdbg_lkup_status16;
    union {
        struct {
            uint32_t peid_pool_left_num            :    3;  /*peid_pool_left_num*/
            uint32_t l4_parser_fsm_state           :    4;  /*l4_parser_fsm_state*/
            uint32_t l3_parser_fsm_state           :    3;  /*l3_parser_fsm_state*/
            uint32_t l2_parser_fsm_state           :    3;  /*l2_parser_fsm_state*/
            uint32_t reserved13                    :    19;
        };
        uint32_t val;
    } swdbg_parser_status;
    union {
        struct {
            uint32_t reg_l2fm_port_bps_token_enough:    8;  /*port has enough bps*/
            uint32_t reserved8                     :    8;
            uint32_t reg_l2fm_port_pps_token_enough:    8;  /*port has enough pps*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } swdbg_l2fm_token_enough;
    uint32_t swdbg_bman_fsm_oam_p0;
    uint32_t swdbg_bman_fsm_oam_p1;
    uint32_t swdbg_bman_fsm_oam_p2;
    uint32_t swdbg_bman_fsm_oam_p3;
    uint32_t swdbg_bman_fsm_oam_p4;
    uint32_t reserved_264;
    uint32_t reserved_268;
    uint32_t reserved_26c;
    uint32_t swdbg_bman_fsm_oam0;
    uint32_t swdbg_bman_fsm_oam1;
    uint32_t swdbg_bman_depth_oam_p0;
    uint32_t swdbg_bman_depth_oam_p1;
    uint32_t swdbg_bman_depth_oam_p2;
    uint32_t swdbg_bman_depth_oam_p3;
    uint32_t swdbg_bman_depth_oam_p4;
    uint32_t reserved_28c;
    uint32_t reserved_290;
    uint32_t reserved_294;
    uint32_t swdbg_bman_depth_oam0;
    uint32_t swdbg_bman_depth_oam1;
    uint32_t swdbg_bman_pi0_info_oam;
    uint32_t swdbg_bman_thres_info_oam;
    union {
        struct {
            uint32_t bman_thres_info_oam_p0        :    18;  /*bit0-bit8:bman port0 self used oam; bit9-bit17:bman port0 share used oam*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_bman_thres_info_oam_p0;
    union {
        struct {
            uint32_t bman_thres_info_oam_p1        :    18;  /*bit0-bit8:bman port1 self used oam; bit9-bit17:bman port1 share used oam*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_bman_thres_info_oam_p1;
    union {
        struct {
            uint32_t bman_thres_info_oam_p2        :    18;  /*bit0-bit8:bman port2 self used oam; bit9-bit17:bman port2 share used oam*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_bman_thres_info_oam_p2;
    union {
        struct {
            uint32_t bman_thres_info_oam_p3        :    18;  /*bit0-bit8:bman port3 self used oam; bit9-bit17:bman port3 share used oam*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_bman_thres_info_oam_p3;
    union {
        struct {
            uint32_t bman_thres_info_oam_p4        :    18;  /*bit0-bit8:bman port4 self used oam; bit9-bit17:bman port4 share used oam*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } swdbg_bman_thres_info_oam_p4;
    uint32_t reserved_2bc;
    uint32_t reserved_2c0;
    uint32_t reserved_2c4;
    union {
        struct {
            uint32_t bman_alloc_rls_diff_oam_p0    :    10;  /*bman port0 allocate-release bbid differ oam*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } swdbg_bman_alloc_rls_diff_oam_p0;
    union {
        struct {
            uint32_t bman_alloc_rls_diff_oam_p1    :    10;  /*bman port1 allocate-release bbid differ oam*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } swdbg_bman_alloc_rls_diff_oam_p1;
    union {
        struct {
            uint32_t bman_alloc_rls_diff_oam_p2    :    10;  /*bman port2 allocate-release bbid differ oam*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } swdbg_bman_alloc_rls_diff_oam_p2;
    union {
        struct {
            uint32_t bman_alloc_rls_diff_oam_p3    :    10;  /*bman port3 allocate-release bbid differ oam*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } swdbg_bman_alloc_rls_diff_oam_p3;
    union {
        struct {
            uint32_t bman_alloc_rls_diff_oam_p4    :    10;  /*bman port4 allocate-release bbid differ oam*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } swdbg_bman_alloc_rls_diff_oam_p4;
    uint32_t reserved_2dc;
    uint32_t reserved_2e0;
    uint32_t reserved_2e4;
    union {
        struct {
            uint32_t qman_eee_sch_activating_oam   :    8;  /*bit0-bit7 represent port0-port7 lpi activating state*/
            uint32_t qman_eee_sch_aging_oam        :    8;  /*bit8-bit15 represent port0-port7 lpi aging state*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } swdbg_qman_eee_sch_oam;
    uint32_t swdbg_qman_fsm_oam0;
    uint32_t swdbg_qman_fsm_oam1;
    uint32_t swdbg_qman_fsm_oam2;
    uint32_t swdbg_qman_depth_oam0;
    uint32_t swdbg_qman_depth_oam1;
    uint32_t swdbg_qman_depth_oam2;
    uint32_t swdbg_qman_depth_oam3;
    uint32_t swdbg_qman_depth_oam4;
    uint32_t swdbg_qman_threscnt_oam_oqbb;
    uint32_t swdbg_qman_threscnt_oam_oqqe;
    uint32_t swdbg_qman_threscnt_oam_qlpbb;
    uint32_t swdbg_qman_threscnt_oam_qlpqe;
    uint32_t swdbg_qman_threscnt_oam_sppqe;
    uint32_t swdbg_qman_pi1_info_oam;
    uint32_t swdbg_qman_info_oam_oq0;
    uint32_t swdbg_qman_info_oam_oq1;
    uint32_t swdbg_qman_info_oam_oq2;
    uint32_t swdbg_qman_info_oam_oq3;
    uint32_t swdbg_qman_info_oam_oq4;
    uint32_t swdbg_qman_info_oam_oq5;
    uint32_t swdbg_qman_info_oam_oq6;
    uint32_t swdbg_qman_info_oam_oq7;
    uint32_t swdbg_qman_info_oam_oq8;
    uint32_t swdbg_qman_info_oam_oq9;
    uint32_t swdbg_qman_info_oam_oq10;
    uint32_t swdbg_qman_info_oam_oq11;
    uint32_t swdbg_qman_info_oam_oq12;
    uint32_t swdbg_qman_info_oam_oq13;
    uint32_t swdbg_qman_info_oam_oq14;
    uint32_t swdbg_qman_info_oam_oq15;
    uint32_t swdbg_qman_info_oam_oq16;
    uint32_t swdbg_qman_info_oam_oq17;
    uint32_t swdbg_qman_info_oam_oq18;
    uint32_t swdbg_qman_info_oam_oq19;
    uint32_t swdbg_qman_info_oam_oq20;
    uint32_t swdbg_qman_info_oam_oq21;
    uint32_t swdbg_qman_info_oam_oq22;
    uint32_t swdbg_qman_info_oam_oq23;
    uint32_t swdbg_qman_info_oam_oq24;
    uint32_t swdbg_qman_info_oam_oq25;
    uint32_t swdbg_qman_info_oam_oq26;
    uint32_t swdbg_qman_info_oam_oq27;
    uint32_t swdbg_qman_info_oam_oq28;
    uint32_t swdbg_qman_info_oam_oq29;
    uint32_t swdbg_qman_info_oam_oq30;
    uint32_t swdbg_qman_info_oam_oq31;
    uint32_t swdbg_qman_info_oam_oq32;
    uint32_t swdbg_qman_info_oam_oq33;
    uint32_t swdbg_qman_info_oam_oq34;
    uint32_t swdbg_qman_info_oam_oq35;
    uint32_t swdbg_qman_info_oam_oq36;
    uint32_t swdbg_qman_info_oam_oq37;
    uint32_t swdbg_qman_info_oam_oq38;
    uint32_t swdbg_qman_info_oam_oq39;
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
    uint32_t swdbg_qman_info_oam_qlp0;
    uint32_t swdbg_qman_info_oam_qlp1;
    uint32_t swdbg_qman_info_oam_qlp2;
    uint32_t swdbg_qman_info_oam_qlp3;
    uint32_t swdbg_qman_info_oam_qlp4;
    uint32_t reserved_438;
    uint32_t reserved_43c;
    uint32_t reserved_440;
    uint32_t swdbg_qman_info_oam_vpp0;
    uint32_t swdbg_qman_info_oam_vpp1;
    uint32_t swdbg_qman_info_oam_vpp2;
    uint32_t swdbg_qman_info_oam_vpp3;
    uint32_t swdbg_qman_info_oam_vpp4;
    uint32_t reserved_458;
    uint32_t reserved_45c;
    uint32_t reserved_460;
    union {
        struct {
            uint32_t epp0_fsm_state                :    3;  /*Represent EPP FSM State*/
            uint32_t epp1_fsm_state                :    3;  /*See bit[2:0]*/
            uint32_t epp2_fsm_state                :    3;  /*See bit[2:0]*/
            uint32_t epp3_fsm_state                :    3;  /*See bit[2:0]*/
            uint32_t epp4_fsm_state                :    3;  /*See bit[2:0]*/
            uint32_t epp5_fsm_state                :    3;  /*See bit[2:0]*/
            uint32_t epp6_fsm_state                :    3;  /*See bit[2:0]*/
            uint32_t epp7_fsm_state                :    3;  /*See bit[2:0]*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } swdbg_epp_state;
    union {
        struct {
            uint32_t ingmir_fsm_state              :    3;  /*Represent IMGMIR FSM State*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } swdbg_ingmir_state;
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*Configures CLK_EN*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } swdbg_clk_en;
    union {
        struct {
            uint32_t reg_probe_m_sel               :    6;  /*; ; 6'd32: ptpt; 6'd31: cntp_agent; 6'd30: cntp_pf; 6'd29: cntp_eib; 6'd28: cntp_emac; 6'd27: emac7; 6'd26: emac6; 6'd25: emac5; 6'd24: emac4; 6'd23: emac3; 6'd22: emac2; 6'd21: emac1; 6'd20: emac0 (Only exist when EMAC0 connect ot CPU); 6'd19: agent; 6'd18: epp; 6'd17: rmu; 6'd16: qman; 6'd15: ingmir; 6'd14: lkup; 6'd13: l2fm; 6'd12: prep; 6'd11: parser; 6'd10: tbx1 (Only exist in FPGA test); 6'd9: tbx0; 6'd8: tarp7; 6'd7: tarp6; 6'd6: tarp5; 6'd5: tarp4; 6'd4: tarp3; 6'd3: tarp2; 6'd2: tarp1; 6'd1: tarp0; 6'd0: bman*/
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } swdbg_debug_probe_sel;
    uint32_t swdbg_debug_probe_out_ro;
} switch_swdbg_dev_t;
extern switch_swdbg_dev_t SWITCH_SWDBG;
#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_SWDBG_STRUCT_H_ */
