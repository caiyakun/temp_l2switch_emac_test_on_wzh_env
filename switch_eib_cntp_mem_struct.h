/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_EIB_CNTP_MEM_STRUCT_H_
#define _SWITCH_SWITCH_EIB_CNTP_MEM_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

typedef volatile struct {
    uint32_t eibcntp_date;
    union {
        struct {
            uint32_t reg_cntp_en                   :    1;  /*eibcntp enable*/
            uint32_t reg_debug_en                  :    1;  /*eibcntp debug enable,sw wrie cntp must set this bit 1*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } eibcntp_cntp_en;
    union {
        struct {
            uint32_t reg_tbx1_cntp_en              :    1;  /*Configures module cntp enable*/
            uint32_t reg_tbx0_cntp_en              :    1;  /*See bit[0]*/
            uint32_t reg_tarp0_tx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp1_tx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp2_tx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp3_tx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp4_tx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp5_tx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp6_tx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp7_tx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp0_rx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp1_rx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp2_rx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp3_rx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp4_rx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp5_rx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp6_rx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reg_tarp7_rx_cntp_en          :    1;  /*See bit[0]*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } eibcntp_module_cntp_en;
    union {
        struct {
            uint32_t reg_tbx1_cntp_afull_stop_en   :    1;  /*Configures module cntp buffer almost full strop enable, must set cntp_en first*/
            uint32_t reg_tbx0_cntp_afull_stop_en   :    1;  /*See bit[0]*/
            uint32_t reg_tarp0_tx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp1_tx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp2_tx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp3_tx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp4_tx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp5_tx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp6_tx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp7_tx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp0_rx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp1_rx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp2_rx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp3_rx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp4_rx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp5_rx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp6_rx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reg_tarp7_rx_cntp_afull_stop_en:    1;  /*See bit[0]*/
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } eibcntp_module_cntp_afull_stop_en;
    union {
        struct {
            uint32_t reg_eib_ram0_clr_type         :    2;  /*2'b11 : RAM0 total clear; 2'b10 : RAM0 range id clear; 2'b01 : RAM0 single id clear; 2'b00 : RAM0 dont need clear*/
            uint32_t reg_eib_ram1_clr_type         :    2;  /*2'b11 : RAM1 total clear; 2'b10 : RAM1 range id clear; 2'b01 : RAM1 single id clear; 2'b00 : RAM1 dont need clear*/
            uint32_t reserved4                     :    4;
            uint32_t eib_ram0_clr_done             :    1;  /*1'b1 : RAM0 clear done; 1'b0 : RAM0 is being cleaning*/
            uint32_t eib_ram1_clr_done             :    1;  /*1'b1 : RAM1 clear done; 1'b0 : RAM1 is being cleaning*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_ctrl;
    union {
        struct {
            uint32_t reg_eib_ram0_clr_id_base      :    16;  /*when ram0_clr_type = 2'b10 or 2'b01 cntp clear start from ram0_clr_id_base; When ram0_clr_type = 2'b11 clear starts from 0*/
            uint32_t reg_eib_ram0_clr_id_range     :    16;  /*0base, When ram0_clr_type=2'b10 cntp clear range is (ram0_clr_id_base ~ ram0_clr_id_base + ram0_clr_id_range)*/
        };
        uint32_t val;
    } eibcntp_ram0_range_clear;
    union {
        struct {
            uint32_t reg_eib_ram1_clr_id_base      :    16;  /*when ram1_clr_type = 2'b10 or 2'b01 cntp clear start from ram1_clr_id_base; When ram1_clr_type = 2'b11 cntp clear starts from 0*/
            uint32_t reg_eib_ram1_clr_id_range     :    16;  /*0base, When ram1_clr_type =2'b10 clr range is (ram1_clr_id_base ~ ram1_clr_id_base + ram1_clr_id_range)*/
        };
        uint32_t val;
    } eibcntp_ram1_range_clear;
    uint32_t eibcntp_tbx0_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tbx0_rx_packet_num_41to32 :    10;  /*high 32 bit of the tbx0 receive packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tbx0_rx_packet_num_41to32;
    uint32_t eibcntp_tbx0_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tbx0_rx_err_packet_num_41to32:    10;  /*high 32 bit of the tbx0 receive error packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tbx0_rx_err_packet_num_41to32;
    uint32_t eibcntp_tbx0_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tbx0_tx_packet_num_41to32 :    10;  /*high 32 bit of the tbx0 transmit packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tbx0_tx_packet_num_41to32;
    uint32_t eibcntp_tbx1_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tbx1_rx_packet_num_41to32 :    10;  /*high 32 bit of the tbx1 receive packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tbx1_rx_packet_num_41to32;
    uint32_t eibcntp_tbx1_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tbx1_rx_err_packet_num_41to32:    10;  /*high 32 bit of the tbx1 receive error packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tbx1_rx_err_packet_num_41to32;
    uint32_t eibcntp_tbx1_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tbx1_tx_packet_num_41to32 :    10;  /*high 32 bit of the tbx1 transmit packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tbx1_tx_packet_num_41to32;
    uint32_t eibcntp_tarp0_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_rx_packet_num_41to32:    10;  /*high 32 bit of the tarp0 receive packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_rx_packet_num_41to32;
    uint32_t eibcntp_tarp0_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_rx_err_packet_num_41to32:    10;  /*high 32 bit of the tarp0 receive error packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_rx_err_packet_num_41to32;
    uint32_t eibcntp_tarp0_rx_rmu_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_rx_rmu_packet_num_41to32:    10;  /*high 32 bit of the tarp0 receive rmu packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_rx_rmu_packet_num_41to32;
    uint32_t eibcntp_tarp0_rx_vlan_filter_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_rx_vlan_filter_packet_num_41to32:    10;  /*high 32 bit of the tarp0 receive s/c vlan filter drop packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_rx_vlan_filter_packet_num_41to32;
    uint32_t eibcntp_tarp0_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_packet_num_41to32:    10;  /*high 32 bit of the tarp0 transmit packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_packet_num_41to32;
    uint32_t eibcntp_tarp0_tx_rcvpd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_rcvpd_num_41to32 :    10;  /*high 32 bit of the tarp0 tx receive pd number from qman*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_rcvpd_num_41to32;
    uint32_t eibcntp_tarp0_tx_switch_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_switch_fwd_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive switch forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_switch_fwd_num_41to32;
    uint32_t eibcntp_tarp0_tx_unknown_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_unknown_flood_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive unknown flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_unknown_flood_num_41to32;
    uint32_t eibcntp_tarp0_tx_broadcast_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_broadcast_flood_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive broadcast flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_broadcast_flood_num_41to32;
    uint32_t eibcntp_tarp0_tx_cpuimp_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_cpuimp_fwd_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive cpu imp forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_cpuimp_fwd_num_41to32;
    uint32_t eibcntp_tarp0_tx_highproto_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_highproto_fwd_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive high protocol  packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_highproto_fwd_num_41to32;
    uint32_t eibcntp_tarp0_tx_cpu_high_protocol_ctrl_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_cpu_high_protocol_ctrl_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive packet number that imp to cpu reason cpu forward determ equal to 1*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_cpu_high_protocol_ctrl_num_41to32;
    uint32_t eibcntp_tarp0_tx_cpu_l2_proto_terminal_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_cpu_l2_protocol_terminal_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive packet number that imp to cpu reason l2 protocol terminal equal to 1*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_cpu_l2_proto_terminal_num_41to32;
    uint32_t eibcntp_tarp0_tx_cpu_indicates_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_cpu_indicate_flooding_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive packet number that imp to cpu reason indicates flooding equal to 1*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_cpu_indicates_flood_num_41to32;
    uint32_t eibcntp_tarp0_tx_cpu_switch_forward_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_cpu_switch_forward_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive packet number that imp to cpu reason switch forward equal to 1*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_cpu_switch_forward_num_41to32;
    uint32_t eibcntp_tarp0_tx_cpu_abnormal_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_cpu_abnormal_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive packet number that imp to cpu reason sa learn equal to 1*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_cpu_abnormal_num_41to32;
    uint32_t eibcntp_tarp0_tx_cpu_ipp_hit_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_cpu_ipp_hit_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive packet number that imp to cpu reason ipp hit offload equal to 1*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_cpu_ipp_hit_num_41to32;
    uint32_t eibcntp_tarp0_tx_imp_to_sniffer_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_imp_to_sniffer_num_41to32:    10;  /*high 32 bit of the tarp0 tx receive packet number that imp version equal to 3*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_imp_to_sniffer_num_41to32;
    uint32_t eibcntp_tarp1_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_rx_packet_num_41to32:    10;  /*high 32 bit of the tarp1 receive packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_rx_packet_num_41to32;
    uint32_t eibcntp_tarp1_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_rx_err_packet_num_41to32:    10;  /*high 32 bit of the tarp1 receive error packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_rx_err_packet_num_41to32;
    uint32_t eibcntp_tarp1_rx_rmu_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_rx_rmu_packet_num_41to32:    10;  /*high 32 bit of the tarp1 receive rmu packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_rx_rmu_packet_num_41to32;
    uint32_t eibcntp_tarp1_rx_vlan_filter_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_rx_vlan_filter_packet_num_41to32:    10;  /*high 32 bit of the tarp1 receive s/c vlan filter drop packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_rx_vlan_filter_packet_num_41to32;
    uint32_t eibcntp_tarp1_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_tx_packet_num_41to32:    10;  /*high 32 bit of the tarp1 transmit packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_tx_packet_num_41to32;
    uint32_t eibcntp_tarp1_tx_rcvpd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_tx_rcvpd_num_41to32 :    10;  /*high 32 bit of the tarp1 tx receive pd number from qman*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_tx_rcvpd_num_41to32;
    uint32_t eibcntp_tarp1_tx_switch_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_tx_switch_fwd_num_41to32:    10;  /*high 32 bit of the tarp1 tx receive switch forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_tx_switch_fwd_num_41to32;
    uint32_t eibcntp_tarp1_tx_unknown_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_tx_unknown_flood_num_41to32:    10;  /*high 32 bit of the tarp1 tx receive unknown flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_tx_unknown_flood_num_41to32;
    uint32_t eibcntp_tarp1_tx_broadcast_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_tx_broadcast_flood_num_41to32:    10;  /*high 32 bit of the tarp1 tx receive broadcast flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_tx_broadcast_flood_num_41to32;
    uint32_t eibcntp_tarp1_tx_cpuimp_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_tx_cpuimp_fwd_num_41to32:    10;  /*high 32 bit of the tarp1 tx receive cpu imp forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_tx_cpuimp_fwd_num_41to32;
    uint32_t eibcntp_tarp1_tx_highproto_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_tx_highproto_fwd_num_41to32:    10;  /*high 32 bit of the tarp1 tx receive high protocol  packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp1_tx_highproto_fwd_num_41to32;
    uint32_t eibcntp_tarp2_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_rx_packet_num_41to32:    10;  /*high 32 bit of the tarp2 receive packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_rx_packet_num_41to32;
    uint32_t eibcntp_tarp2_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_rx_err_packet_num_41to32:    10;  /*high 32 bit of the tarp2 receive error packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_rx_err_packet_num_41to32;
    uint32_t eibcntp_tarp2_rx_rmu_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_rx_rmu_packet_num_41to32:    10;  /*high 32 bit of the tarp2 receive rmu packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_rx_rmu_packet_num_41to32;
    uint32_t eibcntp_tarp2_rx_vlan_filter_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_rx_vlan_filter_packet_num_41to32:    10;  /*high 32 bit of the tarp2 receive s/c vlan filter drop packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_rx_vlan_filter_packet_num_41to32;
    uint32_t eibcntp_tarp2_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_tx_packet_num_41to32:    10;  /*high 32 bit of the tarp2 transmit packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_tx_packet_num_41to32;
    uint32_t eibcntp_tarp2_tx_rcvpd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_tx_rcvpd_num_41to32 :    10;  /*high 32 bit of the tarp2 tx receive pd number from qman*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_tx_rcvpd_num_41to32;
    uint32_t eibcntp_tarp2_tx_switch_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_tx_switch_fwd_num_41to32:    10;  /*high 32 bit of the tarp2 tx receive switch forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_tx_switch_fwd_num_41to32;
    uint32_t eibcntp_tarp2_tx_unknown_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_tx_unknown_flood_num_41to32:    10;  /*high 32 bit of the tarp2 tx receive unknown flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_tx_unknown_flood_num_41to32;
    uint32_t eibcntp_tarp2_tx_broadcast_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_tx_broadcast_flood_num_41to32:    10;  /*high 32 bit of the tarp2 tx receive broadcast flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_tx_broadcast_flood_num_41to32;
    uint32_t eibcntp_tarp2_tx_cpuimp_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_tx_cpuimp_fwd_num_41to32:    10;  /*high 32 bit of the tarp2 tx receive cpu imp forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_tx_cpuimp_fwd_num_41to32;
    uint32_t eibcntp_tarp2_tx_highproto_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_tx_highproto_fwd_num_41to32:    10;  /*high 32 bit of the tarp2 tx receive high protocol  packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp2_tx_highproto_fwd_num_41to32;
    uint32_t eibcntp_tarp3_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_rx_packet_num_41to32:    10;  /*high 32 bit of the tarp3 receive packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_rx_packet_num_41to32;
    uint32_t eibcntp_tarp3_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_rx_err_packet_num_41to32:    10;  /*high 32 bit of the tarp3 receive error packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_rx_err_packet_num_41to32;
    uint32_t eibcntp_tarp3_rx_rmu_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_rx_rmu_packet_num_41to32:    10;  /*high 32 bit of the tarp3 receive rmu packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_rx_rmu_packet_num_41to32;
    uint32_t eibcntp_tarp3_rx_vlan_filter_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_rx_vlan_filter_packet_num_41to32:    10;  /*high 32 bit of the tarp3 receive s/c vlan filter drop packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_rx_vlan_filter_packet_num_41to32;
    uint32_t eibcntp_tarp3_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_tx_packet_num_41to32:    10;  /*high 32 bit of the tarp3 transmit packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_tx_packet_num_41to32;
    uint32_t eibcntp_tarp3_tx_rcvpd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_tx_rcvpd_num_41to32 :    10;  /*high 32 bit of the tarp3 tx receive pd number from qman*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_tx_rcvpd_num_41to32;
    uint32_t eibcntp_tarp3_tx_switch_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_tx_switch_fwd_num_41to32:    10;  /*high 32 bit of the tarp3 tx receive switch forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_tx_switch_fwd_num_41to32;
    uint32_t eibcntp_tarp3_tx_unknown_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_tx_unknown_flood_num_41to32:    10;  /*high 32 bit of the tarp3 tx receive unknown flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_tx_unknown_flood_num_41to32;
    uint32_t eibcntp_tarp3_tx_broadcast_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_tx_broadcast_flood_num_41to32:    10;  /*high 32 bit of the tarp3 tx receive broadcast flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_tx_broadcast_flood_num_41to32;
    uint32_t eibcntp_tarp3_tx_cpuimp_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_tx_cpuimp_fwd_num_41to32:    10;  /*high 32 bit of the tarp3 tx receive cpu imp forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_tx_cpuimp_fwd_num_41to32;
    uint32_t eibcntp_tarp3_tx_highproto_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_tx_highproto_fwd_num_41to32:    10;  /*high 32 bit of the tarp3 tx receive high protocol  packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp3_tx_highproto_fwd_num_41to32;
    uint32_t eibcntp_tarp4_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_rx_packet_num_41to32:    10;  /*high 32 bit of the tarp4 receive packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_rx_packet_num_41to32;
    uint32_t eibcntp_tarp4_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_rx_err_packet_num_41to32:    10;  /*high 32 bit of the tarp4 receive error packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_rx_err_packet_num_41to32;
    uint32_t eibcntp_tarp4_rx_rmu_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_rx_rmu_packet_num_41to32:    10;  /*high 32 bit of the tarp4 receive rmu packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_rx_rmu_packet_num_41to32;
    uint32_t eibcntp_tarp4_rx_vlan_filter_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_rx_vlan_filter_packet_num_41to32:    10;  /*high 32 bit of the tarp4 receive s/c vlan filter drop packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_rx_vlan_filter_packet_num_41to32;
    uint32_t eibcntp_tarp4_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_tx_packet_num_41to32:    10;  /*high 32 bit of the tarp4 transmit packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_tx_packet_num_41to32;
    uint32_t eibcntp_tarp4_tx_rcvpd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_tx_rcvpd_num_41to32 :    10;  /*high 32 bit of the tarp4 tx receive pd number from qman*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_tx_rcvpd_num_41to32;
    uint32_t eibcntp_tarp4_tx_switch_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_tx_switch_fwd_num_41to32:    10;  /*high 32 bit of the tarp4 tx receive switch forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_tx_switch_fwd_num_41to32;
    uint32_t eibcntp_tarp4_tx_unknown_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_tx_unknown_flood_num_41to32:    10;  /*high 32 bit of the tarp4 tx receive unknown flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_tx_unknown_flood_num_41to32;
    uint32_t eibcntp_tarp4_tx_broadcast_flood_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_tx_broadcast_flood_num_41to32:    10;  /*high 32 bit of the tarp4 tx receive broadcast flooding packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_tx_broadcast_flood_num_41to32;
    uint32_t eibcntp_tarp4_tx_cpuimp_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_tx_cpuimp_fwd_num_41to32:    10;  /*high 32 bit of the tarp4 tx receive cpu imp forward packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_tx_cpuimp_fwd_num_41to32;
    uint32_t eibcntp_tarp4_tx_highproto_fwd_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_tx_highproto_fwd_num_41to32:    10;  /*high 32 bit of the tarp4 tx receive high protocol  packet number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } eibcntp_tarp4_tx_highproto_fwd_num_41to32;
    uint32_t eibcntp_tbx0_rx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tbx0_rx_byte_num_47to32   :    16;  /*high 32 bit of the tbx0 receive byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tbx0_rx_byte_num_47to32;
    uint32_t eibcntp_tbx0_rx_err_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tbx0_rx_err_byte_num_47to32:    16;  /*high 32 bit of the tbx0 receive error byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tbx0_rx_err_byte_num_47to32;
    uint32_t eibcntp_tbx0_tx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tbx0_tx_byte_num_47to32   :    16;  /*high 32 bit of the tbx0 transmit byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tbx0_tx_byte_num_47to32;
    uint32_t eibcntp_tbx1_rx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tbx1_rx_byte_num_47to32   :    16;  /*high 32 bit of the tbx1 receive byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tbx1_rx_byte_num_47to32;
    uint32_t eibcntp_tbx1_rx_err_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tbx1_rx_err_byte_num_47to32:    16;  /*high 32 bit of the tbx1 receive error byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tbx1_rx_err_byte_num_47to32;
    uint32_t eibcntp_tbx1_tx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tbx1_tx_byte_num_47to32   :    16;  /*high 32 bit of the tbx1 transmit byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tbx1_tx_byte_num_47to32;
    uint32_t eibcntp_tarp0_rx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_rx_byte_num_47to32  :    16;  /*high 32 bit of the tarp0 receive byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp0_rx_byte_num_47to32;
    uint32_t eibcntp_tarp0_rx_err_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_rx_err_byte_num_47to32:    16;  /*high 32 bit of the tarp0 receive error byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp0_rx_err_byte_num_47to32;
    uint32_t eibcntp_tarp0_rx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_rx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp0 receive write bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp0_rx_bman_bd_byte_num_47to32;
    uint32_t eibcntp_tarp0_tx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_byte_num_47to32  :    16;  /*high 32 bit of the tarp0 transmit byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_byte_num_47to32;
    uint32_t eibcntp_tarp0_tx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp0_tx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp0 transmit read bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp0_tx_bman_bd_byte_num_47to32;
    uint32_t eibcntp_tarp1_rx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_rx_byte_num_47to32  :    16;  /*high 32 bit of the tarp1 receive byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp1_rx_byte_num_47to32;
    uint32_t eibcntp_tarp1_rx_err_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_rx_err_byte_num_47to32:    16;  /*high 32 bit of the tarp1 receive error byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp1_rx_err_byte_num_47to32;
    uint32_t eibcntp_tarp1_rx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_rx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp1 receive write bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp1_rx_bman_bd_byte_num_47to32;
    uint32_t eibcntp_tarp1_tx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_tx_byte_num_47to32  :    16;  /*high 32 bit of the tarp1 transmit byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp1_tx_byte_num_47to32;
    uint32_t eibcntp_tarp1_tx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp1_tx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp1 transmit read bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp1_tx_bman_bd_byte_num_47to32;
    uint32_t eibcntp_tarp2_rx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_rx_byte_num_47to32  :    16;  /*high 32 bit of the tarp2 receive byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp2_rx_byte_num_47to32;
    uint32_t eibcntp_tarp2_rx_err_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_rx_err_byte_num_47to32:    16;  /*high 32 bit of the tarp2 receive error byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp2_rx_err_byte_num_47to32;
    uint32_t eibcntp_tarp2_rx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_rx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp2 receive write bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp2_rx_bman_bd_byte_num_47to32;
    uint32_t eibcntp_tarp2_tx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_tx_byte_num_47to32  :    16;  /*high 32 bit of the tarp2 transmit byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp2_tx_byte_num_47to32;
    uint32_t eibcntp_tarp2_tx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp2_tx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp2 transmit read bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp2_tx_bman_bd_byte_num_47to32;
    uint32_t eibcntp_tarp3_rx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_rx_byte_num_47to32  :    16;  /*high 32 bit of the tarp3 receive byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp3_rx_byte_num_47to32;
    uint32_t eibcntp_tarp3_rx_err_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_rx_err_byte_num_47to32:    16;  /*high 32 bit of the tarp3 receive error byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp3_rx_err_byte_num_47to32;
    uint32_t eibcntp_tarp3_rx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_rx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp3 receive write bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp3_rx_bman_bd_byte_num_47to32;
    uint32_t eibcntp_tarp3_tx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_tx_byte_num_47to32  :    16;  /*high 32 bit of the tarp3 transmit byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp3_tx_byte_num_47to32;
    uint32_t eibcntp_tarp3_tx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp3_tx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp3 transmit read bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp3_tx_bman_bd_byte_num_47to32;
    uint32_t eibcntp_tarp4_rx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_rx_byte_num_47to32  :    16;  /*high 32 bit of the tarp4 receive byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp4_rx_byte_num_47to32;
    uint32_t eibcntp_tarp4_rx_err_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_rx_err_byte_num_47to32:    16;  /*high 32 bit of the tarp4 receive error byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp4_rx_err_byte_num_47to32;
    uint32_t eibcntp_tarp4_rx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_rx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp4 receive write bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp4_rx_bman_bd_byte_num_47to32;
    uint32_t eibcntp_tarp4_tx_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_tx_byte_num_47to32  :    16;  /*high 32 bit of the tarp4 transmit byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp4_tx_byte_num_47to32;
    uint32_t eibcntp_tarp4_tx_bman_bd_byte_num_31to0;
    union {
        struct {
            uint32_t reg_tarp4_tx_bman_bd_byte_num_47to32:    16;  /*high 32 bit of the tarp4 transmit read bman bd byte number*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } eibcntp_tarp4_tx_bman_bd_byte_num_47to32;
} switch_eib_cntp_mem_dev_t;
extern switch_eib_cntp_mem_dev_t SWITCH_EIB_CNTP_MEM;
#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_EIB_CNTP_MEM_STRUCT_H_ */
