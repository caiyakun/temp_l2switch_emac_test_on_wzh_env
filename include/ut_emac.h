// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2024 Espressif Systems Co. Ltd.
 */

#ifndef _TEST_EMAC_H_
#define _TEST_EMAC_H_

#include "c_types.h"

#define SWITHC_SYS_CLK_20M      1
#define SWITHC_SYS_CLK_40M      2
#define SWITHC_SYS_CLK_USE      SWITHC_SYS_CLK_40M

//s3'b000:GMII/MII; 3'b001: RGMII; 3'b010: SGMII; 3'b011: RMII // note:here is swith20 define
#define GMII_MII                0
#define RGMII                   1
#define SGMII                   2
#define RMII                    3  //switch(digital) not support for now

#define CUR_USED_INTF          RGMII//RGMII// SGMII

#define assert(expression) \
    if (!(expression)) { \
        printf("assert err occur at: %s; line: %d ;fun_name: %s\n", __FILE__, __LINE__, __func__);\
        printf(stderr, "Assertion failed: %s, file %s, line %d\n", #expression, __FILE__, __LINE__); \
        exit(EXIT_FAILURE); \
    }

#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define DEBUG_VERBOSE       0 // low level debug info
#define DEBUG_VERBOSE1      0 // top level debug info


struct tbx_pattern_info {
    uint32_t total_len;
    uint32_t repeat_num;
};

struct tbx_cntp_num_list
{
    uint64_t rx_packet_num;
    uint64_t rx_err_packet_num;
    uint64_t tx_packet_num;
};

espsw_error_t ut_emac_basic_test(unsigned long *arg_val);
espsw_error_t ut_emac_intr_test(unsigned long *arg_val);

// espsw_error_t emac1_test_emac_check_rx_tx_bandwidth(uint32_t emac_id);
espsw_error_t emac_test_tx_rx_flow_ctrl_on(uint32_t emacid, bool en);
espsw_error_t emac_test_rx_pause_forward_on(uint32_t emacid, bool en);
espsw_error_t emac_test_dis_mru_test(uint32_t emacid, bool en);

espsw_error_t emac_test_tx_rx_flow_ctrl_off(uint32_t emacid, bool en);
espsw_error_t emac_test_tbx_tx_stop(unsigned long *arg_val, uint32_t emacid);
espsw_error_t emac_test_basic_run(unsigned long *arg_val, uint32_t emacid);
espsw_error_t emac_test_mac_near_end_loopback(unsigned long *arg_val);
espsw_error_t emac_test_pcs_near_end_loopback(unsigned long *arg_val);
espsw_error_t emac_test_pcs_near_end_loopback_no_repeat_reset(unsigned long *arg_val);
espsw_error_t emac_test_pcs_near_end_loopback_no_repeat_reset_huge_times(unsigned long *arg_val);
espsw_error_t emac_test_check_txrx_clk_meter(unsigned long *arg_val);
espsw_error_t emac_test_sfp_loopback(unsigned long *arg_val);
espsw_error_t emac_test_fpga_serdes_pcs_pma_loopback(unsigned long *arg_val);

espsw_error_t emac_test_tx_test_to_linkpartner_no_reset(unsigned long *arg_val);
espsw_error_t emac_test_tx_test_to_linkpartner_no_reset_max_9716(unsigned long *arg_val);
espsw_error_t emac_test_tx_test_to_linkpartner(unsigned long *arg_val);
espsw_error_t emac_test_rx_test_from_linkpartner(unsigned long *arg_val);
espsw_error_t emac_test_emac_reg_check(uint32_t emac_id);
espsw_error_t emac_test_emac_near_loopback_send_same_val(unsigned long *arg_val);

//for rgmii mode
espsw_error_t rgmii_emac_test_smi_mdio_read_and_write(unsigned long *arg_val);
espsw_error_t rgmii_emac_test_mac_near_end_loopback(unsigned long *arg_val);
espsw_error_t rgmii_emac_test_mac_far_end_loopback(unsigned long *arg_val);
espsw_error_t rgmii_emac_test_mac_tx_test(unsigned long *arg_val);
espsw_error_t rgmii_emac_test_mac_rx_test(unsigned long *arg_val);
espsw_error_t rgmii_emac_test_mac_rx_debug(unsigned long *arg_val);
espsw_error_t rgmii_emac_test_mac_tx_debug(unsigned long *arg_val);
espsw_error_t rgmii_emac_test_emac1_connect_emac2_test(unsigned long *arg_val);
espsw_error_t rgmii_emac_test_tx_test_to_linkpartner_no_reset(uint32_t emac_id);


espsw_error_t emac_test_cntp_num_read_result(unsigned long *arg_val);
espsw_error_t emac_test_cntp_len_read_result(unsigned long *arg_val);
espsw_error_t emac_test_tbx_cntp_num_read_result(unsigned long *arg_val);
espsw_error_t emac_test_tbx_cntp_len_read_result(unsigned long *arg_val);


void emac_test_check_all_cntp(uint32_t emac_id);

#endif
