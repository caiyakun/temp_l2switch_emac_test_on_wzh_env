/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_EMAC_CNTP_MEM_STRUCT_H_
#define _SWITCH_SWITCH_EMAC_CNTP_MEM_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

typedef volatile struct {
    uint32_t emaccntp_date;
    union {
        struct {
            uint32_t reg_cntp_en                   :    1;  /*emaccntp enable*/
            uint32_t reg_debug_en                  :    1;  /*emaccntp debug enable,sw wrie cntp must set this bit 1*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } emaccntp_cntp_en;
    union {
        struct {
            uint32_t reg_emac0_cntp_en             :    1;  /*Configures module cntp enable*/
            uint32_t reg_emac1_cntp_en             :    1;  /*See bit[0]*/
            uint32_t reg_emac2_cntp_en             :    1;  /*See bit[0]*/
            uint32_t reg_emac3_cntp_en             :    1;  /*See bit[0]*/
            uint32_t reg_emac4_cntp_en             :    1;  /*See bit[0]*/
            uint32_t reg_emac5_cntp_en             :    1;  /*See bit[0]*/
            uint32_t reg_emac6_cntp_en             :    1;  /*See bit[0]*/
            uint32_t reg_emac7_cntp_en             :    1;  /*See bit[0]*/
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } emaccntp_module_cntp_en;
    union {
        struct {
            uint32_t uesless_emac0_cntp_afull_stop_en:    1;  /*Useless, don't care*/
            uint32_t uesless_emac1_cntp_afull_stop_en:    1;  /*Useless, don't care*/
            uint32_t uesless_emac2_cntp_afull_stop_en:    1;  /*Useless, don't care*/
            uint32_t uesless_emac3_cntp_afull_stop_en:    1;  /*Useless, don't care*/
            uint32_t uesless_emac4_cntp_afull_stop_en:    1;  /*Useless, don't care*/
            uint32_t uesless_emac5_cntp_afull_stop_en:    1;  /*Useless, don't care*/
            uint32_t uesless_emac6_cntp_afull_stop_en:    1;  /*Useless, don't care*/
            uint32_t useless_emac7_cntp_afull_stop_en:    1;  /*Useless, don't care*/
            uint32_t reserved8                     :    24;
        };
        uint32_t val;
    } emaccntp_module_cntp_afull_stop_en;
    union {
        struct {
            uint32_t reg_emac_ram0_clr_type        :    2;  /*2'b11 : RAM0 total clear; 2'b10 : RAM0 range id clear; 2'b01 : RAM0 single id clear; 2'b00 : RAM0 dont need clear*/
            uint32_t reg_emac_ram1_clr_type        :    2;  /*2'b11 : RAM1 total clear; 2'b10 : RAM1 range id clear; 2'b01 : RAM1 single id clear; 2'b00 : RAM1 dont need clear*/
            uint32_t reserved4                     :    4;
            uint32_t emac_ram0_clr_done            :    1;  /*1'b1 : RAM0 clear done; 1'b0 : RAM0 is being cleaning*/
            uint32_t emac_ram1_clr_done            :    1;  /*1'b1 : RAM1 clear done; 1'b0 : RAM1 is being cleaning*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_ctrl;
    union {
        struct {
            uint32_t reg_emac_ram0_clr_id_base     :    16;  /*when ram0_clr_type = 2'b10 or 2'b01 cntp clear start from ram0_clr_id_base; When ram0_clr_type = 2'b11 clear starts from 0*/
            uint32_t reg_emac_ram0_clr_id_range    :    16;  /*0base, When ram0_clr_type=2'b10 cntp clear range is (ram0_clr_id_base ~ ram0_clr_id_base + ram0_clr_id_range)*/
        };
        uint32_t val;
    } emaccntp_ram0_range_clear;
    union {
        struct {
            uint32_t reg_emac_ram1_clr_id_base     :    16;  /*when ram1_clr_type = 2'b10 or 2'b01 cntp clear start from ram1_clr_id_base; When ram1_clr_type = 2'b11 cntp clear starts from 0*/
            uint32_t reg_emac_ram1_clr_id_range    :    16;  /*0base, When ram1_clr_type =2'b10 clr range is (ram1_clr_id_base ~ ram1_clr_id_base + ram1_clr_id_range)*/
        };
        uint32_t val;
    } emaccntp_ram1_range_clear;
    uint32_t emaccntp_emac1_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive total packet number,this is incremented for each good or bad frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_pause_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_pause_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive pause frame number,and is good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_pause_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_undersize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_undersize_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive undersize frame number, this is incremented each time a frame is received which is less than 64 Byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_undersize_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_64_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_64_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive 64 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_64_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_65to127_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_65to127_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive 65-127 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_65to127_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_128to255_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_128to255_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive 128-255 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_128to255_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_256to511_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_256to511_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive 256-511 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_256to511_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_512to1023_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_512to1023_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive 512-1023 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_512to1023_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_1024to1535_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_1024to1535_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive 1024-1535 byte frame number(good or bad frame), and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_1024to1535_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_1536to2047_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_1536to2047_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive 1536-2047 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_1536to2047_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_2048tomax_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_2048tomax_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive 2048-max(9K) byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_2048tomax_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_unicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_unicast_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive unicast packet number,this is incremented for each unicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_unicast_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_multicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_multicast_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive multicast packet number,this is incremented for each multicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_multicast_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_broadcast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_broadcast_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive broadcast packet number,this is incremented for each broadcast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_broadcast_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_fragment_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_fragment_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive undersize frame number, this is incremented each time a frame is received which is less than 64 byte(about phy interface), but with bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_fragment_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_oversize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_oversize_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive oversize frame number, this is incremented each time a frame is received which is more than mru byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_oversize_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_jabber_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_jabber_ppacket_num_63to32:    10;  /*high 32 bit of the emac1 receive oversize frame number, this is incremented each time a frame is received which is more than mru byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_jabber_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_long_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_long_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive oversize frame number, this is incremented each time a frame is received which is more than 9K byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_long_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit total packet number,this is incremented for each good or bad frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_pause_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_pause_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit pause frame number,and is good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_pause_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_undersize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_undersize_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit undersize frame number, this is incremented each time a frame is transmitd which is less than 64 Byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_undersize_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_64_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_64_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit 64 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_64_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_65to127_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_65to127_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit 65-127 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_65to127_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_128to255_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_128to255_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit 128-255 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_128to255_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_256to511_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_256to511_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit 256-511 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_256to511_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_512to1023_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_512to1023_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit 512-1023 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_512to1023_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_1024to1535_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_1024to1535_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit 1024-1535 byte frame number(good or bad frame), and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_1024to1535_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_1536to2047_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_1536to2047_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit 1536-2047 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_1536to2047_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_2048tomax_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_2048tomax_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit 2048-max(9K) byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_2048tomax_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_unicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_unicast_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit unicast packet number,this is incremented for each unicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_unicast_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_multicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_multicast_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit multicast packet number,this is incremented for each multicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_multicast_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_broadcast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_broadcast_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit broadcast packet number,this is incremented for each broadcast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_broadcast_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_fragment_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_fragment_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit undersize frame number, this is incremented each time a frame is transmitd which is less than 64 byte(about phy interface), but with bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_fragment_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_oversize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_oversize_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than mru byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_oversize_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_jabber_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_jabber_ppacket_num_63to32:    10;  /*high 32 bit of the emac1 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than mru byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_jabber_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_long_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_long_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than 9K byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_long_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_singlecol_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_singlecol_packet_num_63to32:    10;  /*high 32 bit of the emac1 frame number of successfully transmitted framed after a single collision in the half-duplex mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_singlecol_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_multicol_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_multicol_packet_num_63to32:    10;  /*high 32 bit of the emac1 frame number of successfully transmitted framed after multiple collisions in the half-duplex mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_multicol_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_deferred_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_deferred_packet_num_63to32:    10;  /*high 32 bit of the emac1 frame number of successfully transmitted frames after a deferral in the half-duplex mode,rx crs arised fast than tx crs,and next frame tansmit is not dropped which means collision is allowed but drop is forbidden*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_deferred_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive error frame number,including phy/fcs/length/jabber/long/undersize/dribble/outrange error*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_err_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_fcs_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_fcs_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive fcs error frame number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_fcs_err_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_drop_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_drop_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive frame number when receive afifo overflow*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_drop_err_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_len_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_len_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive frame number that 802.3 length field error*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_len_err_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_dribble_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_dribble_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive frame number that length is not an interger multiple of byte in mii mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_dribble_err_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_outrange_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_outrange_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive frame number that length/type between 1500 and 1536*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_outrange_err_packet_num_63to32;
    uint32_t emaccntp_emac1_rx_phy_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_phy_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 receive frame number that phy rx error exist*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_rx_phy_err_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit error frame number,including system error/afifo underflow/fcs error/long error/undersize error,except late collision/excessive collision/carrier error/excessive defer*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_err_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_fcs_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_fcs_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 frame number that system transmit packet carry fcs but mac check is error,attention,tx not check fcs error when transmit large frame,late collision,excessive collision, carrier err,excessive defer or transmit collision*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_fcs_err_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_underflow_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_underflow_err_packet_num_63to32:    10;  /*high 32 bit of the emac1 transmit frame number when afifo underflow*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_underflow_err_packet_num_63to32;
    uint32_t emaccntp_emac1_tx_latecol_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_latecol_num_63to32:    10;  /*high 32 bit of the emac1 collision number that transmit stop because collision happen after 512 bit times*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_latecol_num_63to32;
    uint32_t emaccntp_emac1_tx_excesscol_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_excesscol_num_63to32:    10;  /*high 32 bit of the emac1 transmit collision number that frame backoff times excess max value configured*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_excesscol_num_63to32;
    uint32_t emaccntp_emac1_tx_carrier_err_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_carrier_err_num_63to32:    10;  /*high 32 bit of the emac1 error number that crs signal have nor assert or it dessert when transmitting*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_carrier_err_num_63to32;
    uint32_t emaccntp_emac1_tx_excess_defer_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_excess_defer_num_63to32:    10;  /*high 32 bit of the emac1 error number that transmit time excess defer limit value which means channel busy*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_excess_defer_num_63to32;
    uint32_t emaccntp_emac1_tx_col_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_col_num_63to32   :    10;  /*high 32 bit of the emac1 transmit collision number except backpressure*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac1_tx_col_num_63to32;
    uint32_t emaccntp_emac2_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive total packet number,this is incremented for each good or bad frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_pause_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_pause_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive pause frame number,and is good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_pause_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_undersize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_undersize_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive undersize frame number, this is incremented each time a frame is received which is less than 64 Byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_undersize_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_64_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_64_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive 64 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_64_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_65to127_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_65to127_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive 65-127 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_65to127_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_128to255_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_128to255_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive 128-255 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_128to255_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_256to511_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_256to511_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive 256-511 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_256to511_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_512to1023_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_512to1023_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive 512-1023 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_512to1023_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_1024to1535_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_1024to1535_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive 1024-1535 byte frame number(good or bad frame), and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_1024to1535_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_1536to2047_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_1536to2047_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive 1536-2047 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_1536to2047_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_2048tomax_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_2048tomax_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive 2048-max(9K) byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_2048tomax_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_unicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_unicast_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive unicast packet number,this is incremented for each unicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_unicast_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_multicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_multicast_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive multicast packet number,this is incremented for each multicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_multicast_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_broadcast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_broadcast_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive broadcast packet number,this is incremented for each broadcast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_broadcast_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_fragment_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_fragment_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive undersize frame number, this is incremented each time a frame is received which is less than 64 byte(about phy interface), but with bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_fragment_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_oversize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_oversize_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive oversize frame number, this is incremented each time a frame is received which is more than mru byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_oversize_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_jabber_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_jabber_ppacket_num_63to32:    10;  /*high 32 bit of the emac2 receive oversize frame number, this is incremented each time a frame is received which is more than mru byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_jabber_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_long_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_long_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive oversize frame number, this is incremented each time a frame is received which is more than 9K byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_long_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit total packet number,this is incremented for each good or bad frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_pause_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_pause_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit pause frame number,and is good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_pause_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_undersize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_undersize_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit undersize frame number, this is incremented each time a frame is transmitd which is less than 64 Byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_undersize_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_64_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_64_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit 64 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_64_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_65to127_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_65to127_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit 65-127 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_65to127_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_128to255_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_128to255_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit 128-255 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_128to255_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_256to511_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_256to511_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit 256-511 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_256to511_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_512to1023_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_512to1023_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit 512-1023 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_512to1023_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_1024to1535_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_1024to1535_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit 1024-1535 byte frame number(good or bad frame), and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_1024to1535_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_1536to2047_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_1536to2047_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit 1536-2047 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_1536to2047_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_2048tomax_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_2048tomax_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit 2048-max(9K) byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_2048tomax_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_unicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_unicast_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit unicast packet number,this is incremented for each unicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_unicast_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_multicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_multicast_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit multicast packet number,this is incremented for each multicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_multicast_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_broadcast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_broadcast_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit broadcast packet number,this is incremented for each broadcast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_broadcast_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_fragment_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_fragment_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit undersize frame number, this is incremented each time a frame is transmitd which is less than 64 byte(about phy interface), but with bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_fragment_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_oversize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_oversize_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than mru byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_oversize_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_jabber_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_jabber_ppacket_num_63to32:    10;  /*high 32 bit of the emac2 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than mru byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_jabber_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_long_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_long_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than 9K byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_long_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_singlecol_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_singlecol_packet_num_63to32:    10;  /*high 32 bit of the emac2 frame number of successfully transmitted framed after a single collision in the half-duplex mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_singlecol_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_multicol_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_multicol_packet_num_63to32:    10;  /*high 32 bit of the emac2 frame number of successfully transmitted framed after multiple collisions in the half-duplex mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_multicol_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_deferred_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_deferred_packet_num_63to32:    10;  /*high 32 bit of the emac2 frame number of successfully transmitted frames after a deferral in the half-duplex mode,rx crs arised fast than tx crs,and next frame tansmit is not dropped which means collision is allowed but drop is forbidden*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_deferred_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive error frame number,including phy/fcs/length/jabber/long/undersize/dribble/outrange error*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_err_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_fcs_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_fcs_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive fcs error frame number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_fcs_err_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_drop_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_drop_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive frame number when receive afifo overflow*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_drop_err_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_len_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_len_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive frame number that 802.3 length field error*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_len_err_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_dribble_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_dribble_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive frame number that length is not an interger multiple of byte in mii mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_dribble_err_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_outrange_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_outrange_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive frame number that length/type between 1500 and 1536*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_outrange_err_packet_num_63to32;
    uint32_t emaccntp_emac2_rx_phy_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_phy_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 receive frame number that phy rx error exist*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_rx_phy_err_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit error frame number,including system error/afifo underflow/fcs error/long error/undersize error,except late collision/excessive collision/carrier error/excessive defer*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_err_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_fcs_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_fcs_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 frame number that system transmit packet carry fcs but mac check is error,attention,tx not check fcs error when transmit large frame,late collision,excessive collision, carrier err,excessive defer or transmit collision*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_fcs_err_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_underflow_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_underflow_err_packet_num_63to32:    10;  /*high 32 bit of the emac2 transmit frame number when afifo underflow*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_underflow_err_packet_num_63to32;
    uint32_t emaccntp_emac2_tx_latecol_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_latecol_num_63to32:    10;  /*high 32 bit of the emac2 collision number that transmit stop because collision happen after 512 bit times*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_latecol_num_63to32;
    uint32_t emaccntp_emac2_tx_excesscol_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_excesscol_num_63to32:    10;  /*high 32 bit of the emac2 transmit collision number that frame backoff times excess max value configured*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_excesscol_num_63to32;
    uint32_t emaccntp_emac2_tx_carrier_err_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_carrier_err_num_63to32:    10;  /*high 32 bit of the emac2 error number that crs signal have nor assert or it dessert when transmitting*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_carrier_err_num_63to32;
    uint32_t emaccntp_emac2_tx_excess_defer_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_excess_defer_num_63to32:    10;  /*high 32 bit of the emac2 error number that transmit time excess defer limit value which means channel busy*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_excess_defer_num_63to32;
    uint32_t emaccntp_emac2_tx_col_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_col_num_63to32   :    10;  /*high 32 bit of the emac2 transmit collision number except backpressure*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac2_tx_col_num_63to32;
    uint32_t emaccntp_emac3_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive total packet number,this is incremented for each good or bad frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_pause_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_pause_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive pause frame number,and is good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_pause_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_undersize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_undersize_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive undersize frame number, this is incremented each time a frame is received which is less than 64 Byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_undersize_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_64_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_64_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive 64 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_64_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_65to127_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_65to127_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive 65-127 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_65to127_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_128to255_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_128to255_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive 128-255 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_128to255_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_256to511_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_256to511_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive 256-511 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_256to511_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_512to1023_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_512to1023_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive 512-1023 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_512to1023_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_1024to1535_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_1024to1535_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive 1024-1535 byte frame number(good or bad frame), and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_1024to1535_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_1536to2047_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_1536to2047_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive 1536-2047 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_1536to2047_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_2048tomax_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_2048tomax_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive 2048-max(9K) byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_2048tomax_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_unicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_unicast_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive unicast packet number,this is incremented for each unicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_unicast_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_multicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_multicast_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive multicast packet number,this is incremented for each multicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_multicast_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_broadcast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_broadcast_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive broadcast packet number,this is incremented for each broadcast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_broadcast_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_fragment_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_fragment_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive undersize frame number, this is incremented each time a frame is received which is less than 64 byte(about phy interface), but with bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_fragment_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_oversize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_oversize_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive oversize frame number, this is incremented each time a frame is received which is more than mru byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_oversize_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_jabber_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_jabber_ppacket_num_63to32:    10;  /*high 32 bit of the emac3 receive oversize frame number, this is incremented each time a frame is received which is more than mru byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_jabber_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_long_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_long_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive oversize frame number, this is incremented each time a frame is received which is more than 9K byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_long_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit total packet number,this is incremented for each good or bad frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_pause_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_pause_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit pause frame number,and is good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_pause_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_undersize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_undersize_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit undersize frame number, this is incremented each time a frame is transmitd which is less than 64 Byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_undersize_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_64_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_64_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit 64 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_64_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_65to127_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_65to127_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit 65-127 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_65to127_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_128to255_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_128to255_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit 128-255 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_128to255_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_256to511_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_256to511_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit 256-511 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_256to511_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_512to1023_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_512to1023_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit 512-1023 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_512to1023_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_1024to1535_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_1024to1535_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit 1024-1535 byte frame number(good or bad frame), and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_1024to1535_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_1536to2047_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_1536to2047_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit 1536-2047 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_1536to2047_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_2048tomax_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_2048tomax_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit 2048-max(9K) byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_2048tomax_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_unicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_unicast_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit unicast packet number,this is incremented for each unicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_unicast_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_multicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_multicast_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit multicast packet number,this is incremented for each multicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_multicast_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_broadcast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_broadcast_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit broadcast packet number,this is incremented for each broadcast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_broadcast_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_fragment_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_fragment_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit undersize frame number, this is incremented each time a frame is transmitd which is less than 64 byte(about phy interface), but with bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_fragment_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_oversize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_oversize_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than mru byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_oversize_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_jabber_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_jabber_ppacket_num_63to32:    10;  /*high 32 bit of the emac3 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than mru byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_jabber_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_long_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_long_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than 9K byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_long_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_singlecol_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_singlecol_packet_num_63to32:    10;  /*high 32 bit of the emac3 frame number of successfully transmitted framed after a single collision in the half-duplex mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_singlecol_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_multicol_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_multicol_packet_num_63to32:    10;  /*high 32 bit of the emac3 frame number of successfully transmitted framed after multiple collisions in the half-duplex mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_multicol_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_deferred_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_deferred_packet_num_63to32:    10;  /*high 32 bit of the emac3 frame number of successfully transmitted frames after a deferral in the half-duplex mode,rx crs arised fast than tx crs,and next frame tansmit is not dropped which means collision is allowed but drop is forbidden*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_deferred_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive error frame number,including phy/fcs/length/jabber/long/undersize/dribble/outrange error*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_err_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_fcs_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_fcs_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive fcs error frame number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_fcs_err_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_drop_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_drop_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive frame number when receive afifo overflow*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_drop_err_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_len_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_len_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive frame number that 802.3 length field error*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_len_err_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_dribble_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_dribble_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive frame number that length is not an interger multiple of byte in mii mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_dribble_err_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_outrange_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_outrange_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive frame number that length/type between 1500 and 1536*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_outrange_err_packet_num_63to32;
    uint32_t emaccntp_emac3_rx_phy_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_phy_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 receive frame number that phy rx error exist*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_rx_phy_err_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit error frame number,including system error/afifo underflow/fcs error/long error/undersize error,except late collision/excessive collision/carrier error/excessive defer*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_err_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_fcs_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_fcs_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 frame number that system transmit packet carry fcs but mac check is error,attention,tx not check fcs error when transmit large frame,late collision,excessive collision, carrier err,excessive defer or transmit collision*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_fcs_err_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_underflow_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_underflow_err_packet_num_63to32:    10;  /*high 32 bit of the emac3 transmit frame number when afifo underflow*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_underflow_err_packet_num_63to32;
    uint32_t emaccntp_emac3_tx_latecol_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_latecol_num_63to32:    10;  /*high 32 bit of the emac3 collision number that transmit stop because collision happen after 512 bit times*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_latecol_num_63to32;
    uint32_t emaccntp_emac3_tx_excesscol_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_excesscol_num_63to32:    10;  /*high 32 bit of the emac3 transmit collision number that frame backoff times excess max value configured*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_excesscol_num_63to32;
    uint32_t emaccntp_emac3_tx_carrier_err_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_carrier_err_num_63to32:    10;  /*high 32 bit of the emac3 error number that crs signal have nor assert or it dessert when transmitting*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_carrier_err_num_63to32;
    uint32_t emaccntp_emac3_tx_excess_defer_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_excess_defer_num_63to32:    10;  /*high 32 bit of the emac3 error number that transmit time excess defer limit value which means channel busy*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_excess_defer_num_63to32;
    uint32_t emaccntp_emac3_tx_col_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_col_num_63to32   :    10;  /*high 32 bit of the emac3 transmit collision number except backpressure*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac3_tx_col_num_63to32;
    uint32_t emaccntp_emac4_rx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive total packet number,this is incremented for each good or bad frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_pause_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_pause_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive pause frame number,and is good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_pause_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_undersize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_undersize_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive undersize frame number, this is incremented each time a frame is received which is less than 64 Byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_undersize_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_64_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_64_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive 64 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_64_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_65to127_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_65to127_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive 65-127 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_65to127_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_128to255_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_128to255_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive 128-255 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_128to255_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_256to511_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_256to511_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive 256-511 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_256to511_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_512to1023_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_512to1023_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive 512-1023 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_512to1023_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_1024to1535_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_1024to1535_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive 1024-1535 byte frame number(good or bad frame), and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_1024to1535_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_1536to2047_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_1536to2047_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive 1536-2047 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_1536to2047_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_2048tomax_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_2048tomax_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive 2048-max(9K) byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_2048tomax_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_unicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_unicast_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive unicast packet number,this is incremented for each unicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_unicast_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_multicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_multicast_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive multicast packet number,this is incremented for each multicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_multicast_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_broadcast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_broadcast_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive broadcast packet number,this is incremented for each broadcast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_broadcast_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_fragment_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_fragment_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive undersize frame number, this is incremented each time a frame is received which is less than 64 byte(about phy interface), but with bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_fragment_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_oversize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_oversize_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive oversize frame number, this is incremented each time a frame is received which is more than mru byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_oversize_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_jabber_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_jabber_ppacket_num_63to32:    10;  /*high 32 bit of the emac4 receive oversize frame number, this is incremented each time a frame is received which is more than mru byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_jabber_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_long_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_long_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive oversize frame number, this is incremented each time a frame is received which is more than 9K byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_long_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit total packet number,this is incremented for each good or bad frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_pause_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_pause_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit pause frame number,and is good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_pause_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_undersize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_undersize_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit undersize frame number, this is incremented each time a frame is transmitd which is less than 64 Byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_undersize_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_64_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_64_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit 64 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_64_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_65to127_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_65to127_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit 65-127 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_65to127_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_128to255_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_128to255_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit 128-255 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_128to255_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_256to511_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_256to511_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit 256-511 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_256to511_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_512to1023_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_512to1023_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit 512-1023 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_512to1023_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_1024to1535_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_1024to1535_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit 1024-1535 byte frame number(good or bad frame), and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_1024to1535_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_1536to2047_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_1536to2047_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit 1536-2047 byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_1536to2047_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_2048tomax_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_2048tomax_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit 2048-max(9K) byte frame number,this bit is increment for each good or bad frame, and include 4 byte fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_2048tomax_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_unicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_unicast_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit unicast packet number,this is incremented for each unicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_unicast_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_multicast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_multicast_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit multicast packet number,this is incremented for each multicast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_multicast_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_broadcast_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_broadcast_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit broadcast packet number,this is incremented for each broadcast good frame*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_broadcast_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_fragment_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_fragment_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit undersize frame number, this is incremented each time a frame is transmitd which is less than 64 byte(about phy interface), but with bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_fragment_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_oversize_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_oversize_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than mru byte(about phy interface), and include good fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_oversize_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_jabber_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_jabber_ppacket_num_63to32:    10;  /*high 32 bit of the emac4 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than mru byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_jabber_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_long_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_long_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit oversize frame number, this is incremented each time a frame is transmitd which is more than 9K byte(about phy interface) and for good or bad fcs*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_long_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_singlecol_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_singlecol_packet_num_63to32:    10;  /*high 32 bit of the emac4 frame number of successfully transmitted framed after a single collision in the half-duplex mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_singlecol_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_multicol_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_multicol_packet_num_63to32:    10;  /*high 32 bit of the emac4 frame number of successfully transmitted framed after multiple collisions in the half-duplex mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_multicol_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_deferred_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_deferred_packet_num_63to32:    10;  /*high 32 bit of the emac4 frame number of successfully transmitted frames after a deferral in the half-duplex mode,rx crs arised fast than tx crs,and next frame tansmit is not dropped which means collision is allowed but drop is forbidden*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_deferred_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive error frame number,including phy/fcs/length/jabber/long/undersize/dribble/outrange error*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_err_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_fcs_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_fcs_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive fcs error frame number*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_fcs_err_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_drop_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_drop_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive frame number when receive afifo overflow*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_drop_err_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_len_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_len_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive frame number that 802.3 length field error*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_len_err_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_dribble_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_dribble_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive frame number that length is not an interger multiple of byte in mii mode*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_dribble_err_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_outrange_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_outrange_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive frame number that length/type between 1500 and 1536*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_outrange_err_packet_num_63to32;
    uint32_t emaccntp_emac4_rx_phy_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_phy_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 receive frame number that phy rx error exist*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_rx_phy_err_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit error frame number,including system error/afifo underflow/fcs error/long error/undersize error,except late collision/excessive collision/carrier error/excessive defer*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_err_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_fcs_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_fcs_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 frame number that system transmit packet carry fcs but mac check is error,attention,tx not check fcs error when transmit large frame,late collision,excessive collision, carrier err,excessive defer or transmit collision*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_fcs_err_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_underflow_err_packet_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_underflow_err_packet_num_63to32:    10;  /*high 32 bit of the emac4 transmit frame number when afifo underflow*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_underflow_err_packet_num_63to32;
    uint32_t emaccntp_emac4_tx_latecol_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_latecol_num_63to32:    10;  /*high 32 bit of the emac4 collision number that transmit stop because collision happen after 512 bit times*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_latecol_num_63to32;
    uint32_t emaccntp_emac4_tx_excesscol_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_excesscol_num_63to32:    10;  /*high 32 bit of the emac4 transmit collision number that frame backoff times excess max value configured*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_excesscol_num_63to32;
    uint32_t emaccntp_emac4_tx_carrier_err_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_carrier_err_num_63to32:    10;  /*high 32 bit of the emac4 error number that crs signal have nor assert or it dessert when transmitting*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_carrier_err_num_63to32;
    uint32_t emaccntp_emac4_tx_excess_defer_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_excess_defer_num_63to32:    10;  /*high 32 bit of the emac4 error number that transmit time excess defer limit value which means channel busy*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_excess_defer_num_63to32;
    uint32_t emaccntp_emac4_tx_col_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_col_num_63to32   :    10;  /*high 32 bit of the emac4 transmit collision number except backpressure*/
            uint32_t reserved10                    :    22;
        };
        uint32_t val;
    } emaccntp_emac4_tx_col_num_63to32;
    uint32_t emaccntp_emac1_rx_total_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_total_byte_num_63to32:    16;  /*high 32 bit of the emac1 receive total bytes counter,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac1_rx_total_byte_num_63to32;
    uint32_t emaccntp_emac1_rx_good_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_rx_good_byte_num_63to32:    16;  /*high 32 bit of the emac1 receive bytes of good packet,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac1_rx_good_byte_num_63to32;
    uint32_t emaccntp_emac1_tx_total_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_total_byte_num_63to32:    16;  /*high 32 bit of the emac1 transmit total bytes counter,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac1_tx_total_byte_num_63to32;
    uint32_t emaccntp_emac1_tx_good_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac1_tx_good_byte_num_63to32:    16;  /*high 32 bit of the emac1 transmit bytes of good packet,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac1_tx_good_byte_num_63to32;
    uint32_t emaccntp_emac2_rx_total_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_total_byte_num_63to32:    16;  /*high 32 bit of the emac2 receive total bytes counter,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac2_rx_total_byte_num_63to32;
    uint32_t emaccntp_emac2_rx_good_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_rx_good_byte_num_63to32:    16;  /*high 32 bit of the emac2 receive bytes of good packet,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac2_rx_good_byte_num_63to32;
    uint32_t emaccntp_emac2_tx_total_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_total_byte_num_63to32:    16;  /*high 32 bit of the emac2 transmit total bytes counter,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac2_tx_total_byte_num_63to32;
    uint32_t emaccntp_emac2_tx_good_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac2_tx_good_byte_num_63to32:    16;  /*high 32 bit of the emac2 transmit bytes of good packet,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac2_tx_good_byte_num_63to32;
    uint32_t emaccntp_emac3_rx_total_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_total_byte_num_63to32:    16;  /*high 32 bit of the emac3 receive total bytes counter,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac3_rx_total_byte_num_63to32;
    uint32_t emaccntp_emac3_rx_good_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_rx_good_byte_num_63to32:    16;  /*high 32 bit of the emac3 receive bytes of good packet,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac3_rx_good_byte_num_63to32;
    uint32_t emaccntp_emac3_tx_total_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_total_byte_num_63to32:    16;  /*high 32 bit of the emac3 transmit total bytes counter,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac3_tx_total_byte_num_63to32;
    uint32_t emaccntp_emac3_tx_good_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac3_tx_good_byte_num_63to32:    16;  /*high 32 bit of the emac3 transmit bytes of good packet,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac3_tx_good_byte_num_63to32;
    uint32_t emaccntp_emac4_rx_total_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_total_byte_num_63to32:    16;  /*high 32 bit of the emac4 receive total bytes counter,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac4_rx_total_byte_num_63to32;
    uint32_t emaccntp_emac4_rx_good_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_rx_good_byte_num_63to32:    16;  /*high 32 bit of the emac4 receive bytes of good packet,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac4_rx_good_byte_num_63to32;
    uint32_t emaccntp_emac4_tx_total_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_total_byte_num_63to32:    16;  /*high 32 bit of the emac4 transmit total bytes counter,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac4_tx_total_byte_num_63to32;
    uint32_t emaccntp_emac4_tx_good_byte_num_31to0;
    union {
        struct {
            uint32_t reg_emac4_tx_good_byte_num_63to32:    16;  /*high 32 bit of the emac4 transmit bytes of good packet,this statistic counter is incremented by the byte count of all frames received(about phy interface)*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } emaccntp_emac4_tx_good_byte_num_63to32;
} switch_emac_cntp_mem_dev_t;
extern switch_emac_cntp_mem_dev_t SWITCH_EMAC_CNTP_MEM;
#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_EMAC_CNTP_MEM_STRUCT_H_ */
