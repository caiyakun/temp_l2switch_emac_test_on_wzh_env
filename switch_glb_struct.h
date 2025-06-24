/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_GLB_STRUCT_H_
#define _SWITCH_SWITCH_GLB_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

typedef volatile struct {
    uint32_t glb_date;
    uint32_t glb_switch_mac_addr_31to0;
    union {
        struct {
            uint32_t reg_switch_mac_addr_47to32    :    16;  /*Configures SWITCH MAC address*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } glb_switch_mac_addr_15to0;
    union {
        struct {
            uint32_t pp0_id                        :    3;  /*Respresent Physical Port ID*/
            uint32_t pp1_id                        :    3;  /*Respresent Physical Port ID*/
            uint32_t pp2_id                        :    3;  /*Respresent Physical Port ID*/
            uint32_t pp3_id                        :    3;  /*Respresent Physical Port ID*/
            uint32_t pp4_id                        :    3;  /*Respresent Physical Port ID*/
            uint32_t pp5_id                        :    3;  /*Respresent Physical Port ID*/
            uint32_t pp6_id                        :    3;  /*Respresent Physical Port ID*/
            uint32_t pp7_id                        :    3;  /*Respresent Physical Port ID*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } glb_physical_port_id;
    union {
        struct {
            uint32_t reg_lp0_id                    :    3;  /*Configures Logic Port ID*/
            uint32_t reg_lp1_id                    :    3;  /*Configures Logic Port ID*/
            uint32_t reg_lp2_id                    :    3;  /*Configures Logic Port ID*/
            uint32_t reg_lp3_id                    :    3;  /*Configures Logic Port ID*/
            uint32_t reg_lp4_id                    :    3;  /*Configures Logic Port ID*/
            uint32_t reg_lp5_id                    :    3;  /*Configures Logic Port ID*/
            uint32_t reg_lp6_id                    :    3;  /*Configures Logic Port ID*/
            uint32_t reg_lp7_id                    :    3;  /*Configures Logic Port ID*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } glb_logic_port_id;
    union {
        struct {
            uint32_t reg_pp0_imp_tag_en            :    1;  /*Configures Physical Port 0, IMP Tag en*/
            uint32_t reserved1                     :    15;
            uint32_t reg_imp_tag_type              :    16;  /*Configures IMP Tag type*/
        };
        uint32_t val;
    } glb_imp_tag;
    union {
        struct {
            uint32_t reg_gap_value                 :    8;  /*Configures Packet gap value; IPG+CRC+Preamble; Default: 24Byte*/
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } glb_pkt_gap_value;
    union {
        struct {
            uint32_t reg_rmu_tag_type              :    16;  /*Configures RMU Tag Type*/
            uint32_t reg_rmu_en_p0                 :    1;  /*Configures RMU enable for Port*/
            uint32_t reg_rmu_en_p1                 :    1;  /*See bit[16]*/
            uint32_t reg_rmu_en_p2                 :    1;  /*See bit[16]*/
            uint32_t reg_rmu_en_p3                 :    1;  /*See bit[16]*/
            uint32_t reg_rmu_en_p4                 :    1;  /*See bit[16]*/
            uint32_t reserved21                    :    1;  /*See bit[16]*/
            uint32_t reserved22                    :    1;  /*See bit[16]*/
            uint32_t reserved23                    :    1;  /*See bit[16]*/
            uint32_t reg_rmu_tx_timeout            :    4;  /*Configures RMU TX Packet timeout; 4'd0: 0us; 4'd1: 1us; 4'd2: 2us; 4'd3: 4us; 4'd4: 8us; 4'd5: 16us; 4'd6: 32us; 4'd7: 64us; 4'd8: 128us; 4'd9: 256us; 4'd10: 512us; Others: Resv*/
            uint32_t reserved28                    :    4;
        };
        uint32_t val;
    } glb_rmu;
    union {
        struct {
            uint32_t reg_pt_pulse_1us_en           :    1;  /*Configures ptpt 1us enable*/
            uint32_t reg_pt_pulse_1ms_en           :    1;  /*Configures ptpt 1ms enable*/
            uint32_t reg_pt_pulse_10ms_en          :    1;  /*Configures ptpt 10ms enable*/
            uint32_t reg_pt_pulse_1s_en            :    1;  /*Configures ptpt 1s enable*/
            uint32_t reg_pt_timer_en               :    1;  /*Configures ptpt enable*/
            uint32_t reg_pt_nsec_integer           :    8;  /*Configures ptpt timer period ns integer(0~255ns)*/
            uint32_t reg_pt_nsec_fraction          :    8;  /*Configures ptpt timer period ns fraction(fraction * 1/256ns)*/
            uint32_t reserved21                    :    11;
        };
        uint32_t val;
    } glb_ptpt_cfg;
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*Configures CLK_EN*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } glb_clk_en;
} switch_glb_dev_t;
extern switch_glb_dev_t SWITCH_GLB;
#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_GLB_STRUCT_H_ */
