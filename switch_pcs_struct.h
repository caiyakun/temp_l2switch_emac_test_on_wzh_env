/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_PCS_STRUCT_H_
#define _SWITCH_SWITCH_PCS_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

typedef volatile struct {
    uint32_t pcs_date;
    union {
        struct {
            uint32_t reserved0                     :    9;
            uint32_t reg_an_restart                :    1;  /*Configures whether to restart auto-negotiation if reg_an_en is set. This bit is self-clearing after auto-negotiation starts.*/
            uint32_t reserved10                    :    2;
            uint32_t reg_an_en                     :    1;  /*Configures whether to enable the PCS to perform auto-negotiation with the link partner.*/
            uint32_t reserved13                    :    1;
            uint32_t reg_nearend_lpbk_en           :    1;  /*configures whether PCS loopback the transmit data into the receive path.*/
            uint32_t reg_farend_lpbk_en            :    1;  /*configures whether PCS loopback the receive data into the transmit path.*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } pcs_ctrl;
    union {
        struct {
            uint32_t reserved0                     :    2;
            uint32_t reg_data_link_status          :    1;  /*Represent whether the data channel is up or down.If AN is going on, data  cannot be transferred across the link and hence the link is given as down.*/
            uint32_t reg_an_ability                :    1;  /*an_initiated*/
            uint32_t reserved4                     :    1;
            uint32_t reg_an_complete               :    1;  /*Represent whether the auto-negotiation process is complete.*/
            uint32_t reserved6                     :    26;
        };
        uint32_t val;
    } pcs_an_status;
    union {
        struct {
            uint32_t reg_link_timer                :    19;  /*Configures the value of link_timer,unit number of PCS RX clock*/
            uint32_t reserved19                    :    13;
        };
        uint32_t val;
    } pcs_link_timer;
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*reserved*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } pcs_clk_en;
} switch_pcs_dev_t;
extern switch_pcs_dev_t SWITCH_PCS;
#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_PCS_STRUCT_H_ */
