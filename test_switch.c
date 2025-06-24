#include "switch_api.h"
#include "unit_test.h"


#define EMAC_START_ID  1
#define EMAC_LAST_ID   4

typedef enum {
    EMAC0_ID = 0,
	EMAC1_ID,
	#if(CUR_USED_INTF == RGMII)
	EMAC2_ID,
	#endif
	// EMAC3_ID,
	// EMAC4_ID,
    EMAC_MAX_ID,
} EMACID;
/*********************************************************************/
/**              WRITE YOUR TEST CASE DESCRIPTION HERE              **/
/*********************************************************************/


TEST_CASE(" emac1 &tbx cntp check all", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf(" ------------- emac1 cntp num check ------------\n");
    emac_test_cntp_num_read_result(p_arg_val);
	
	cmd_printf(" -  ---------- emac1 packet len check ----------\n");
	emac_test_cntp_len_read_result(p_arg_val);
	
	cmd_printf(" ------------- tbx cntp num check -------------\n");
	emac_test_tbx_cntp_num_read_result(p_arg_val);

	cmd_printf(" -  ---------- tbx packet len check -----------\n");
	emac_test_tbx_cntp_len_read_result(p_arg_val);
}

TEST_CASE(" all emac &tbx cntp check all", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
	for(uint32_t emacid=EMAC1_ID; emacid<EMAC_MAX_ID; emacid++)
	{
		cmd_printf(" ------------- emac%d cntp num check ------------\n",emacid);
		emac_test_check_all_cntp(emacid);
	}
}

TEST_CASE("emac tx/rx clk meter check", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("check tx/rx clk meter\n");
     
    emac_test_check_txrx_clk_meter(p_arg_val);
}

TEST_CASE("emac reg check", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac reg check\n");
    for(uint32_t emacid=EMAC1_ID; emacid<EMAC_MAX_ID; emacid++)
	{
    	emac_test_emac_reg_check(emacid);
	}
}

#if (CUR_USED_INTF == SGMII)
TEST_CASE("emac basic check", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac basic check\n");
	for(uint32_t emacid = EMAC1_ID; emacid < EMAC_MAX_ID; emacid++)
	{
		printf(" ======== emac id%d basic check =========\n",emacid);
    	emac_test_basic_run(p_arg_val,emacid);
	}

}

// emac near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
TEST_CASE("emac nearend loopback test(len:1024; repeat:100)", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac nearend loopback\n");

    uint32_t total_len = 1024; 	// low 32bit
    uint32_t repeat_num = 100; 	// high 32bit
	
	// 定义64位变量存储两个32位值
	uint64_t combined_value = ((uint64_t)repeat_num << 32) | total_len;
	// 将64位值的地址转换为unsigned long*
	p_arg_val = (unsigned long*)&combined_value;

	uint32 loopmax = 10;

	for(uint32_t i=0; i<loopmax; i++)
	{
		cmd_printf("-------------- %d/%d ------------ times\n",i+1,loopmax);
		 
		if(emac_test_mac_near_end_loopback(p_arg_val) == ESPSW_FAIL)
		{
			cmd_printf("mac nearend loopback fail at %d/%d times\n",i+1,loopmax);
			break;
		}else{
			if(!((i+1)%10))
			{
				cmd_printf("mac nearend loopback pass at %d/%d times\n",i+1,loopmax);
			}
		}
		ets_delay_us(1000);
	}
}

TEST_CASE("emac nearend loopback test(len:120; repeat:100)", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac nearend loopback\n");

    uint32_t total_len = 120; 	// low 32bit
    uint32_t repeat_num = 100; 	// high 32bit
	
	// 定义64位变量存储两个32位值
	uint64_t combined_value = ((uint64_t)repeat_num << 32) | total_len;
	// 将64位值的地址转换为unsigned long*
	p_arg_val = (unsigned long*)&combined_value;

	// emac near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
    emac_test_mac_near_end_loopback(p_arg_val);
}


TEST_CASE("emac nearend loopback test(len:8000; repeat:100)", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac nearend loopback\n");

    uint32_t total_len = 8000; 	// low 32bit
    uint32_t repeat_num = 100; 	// high 32bit
	
	// 定义64位变量存储两个32位值
	uint64_t combined_value = ((uint64_t)repeat_num << 32) | total_len;
	// 将64位值的地址转换为unsigned long*
	p_arg_val = (unsigned long*)&combined_value;

	// emac near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
    emac_test_mac_near_end_loopback(p_arg_val);
}



TEST_CASE("emac nearend loopback send all 1(CLR tbx 128B mem)", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac nearend loopback send all 0(clr tbx mem(128byte))\n");

	uint8_t tbx_128byte_pattern_value = 0xff;
	p_arg_val = (unsigned long*)&tbx_128byte_pattern_value;

	// emac near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
    emac_test_emac_near_loopback_send_same_val(p_arg_val);
}

TEST_CASE("emac nearend loopback send all 0(CLR tbx 128B mem)", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac nearend loopback send all 0(clr tbx mem(128byte))\n");

	uint8_t tbx_128byte_pattern_value = 0x00;
	p_arg_val = (unsigned long*)&tbx_128byte_pattern_value;

	// emac near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
    emac_test_emac_near_loopback_send_same_val(p_arg_val);
}

TEST_CASE("emac nearend loopback send all 0xAA(CLR tbx 128B mem)", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac nearend loopback send all 0(clr tbx mem(128byte))\n");

	uint8_t tbx_128byte_pattern_value = 0xAA;
	p_arg_val = (unsigned long*)&tbx_128byte_pattern_value;

	// emac near-end loopback mode :tbx tx -> emac tx -> emacrx ->  tbx rx 
    emac_test_emac_near_loopback_send_same_val(p_arg_val);
}


TEST_CASE("pcs nearend loopback test(repeat reset)", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("pcs nearend loopback\n");
	uint32_t loopmax = 10;

	for(uint32_t i=0; i<loopmax; i++)
	{
		cmd_printf("-------------- %d/%d ------------ times\n",i+1,loopmax);
		 
		if(emac_test_pcs_near_end_loopback_no_repeat_reset(p_arg_val) == ESPSW_FAIL)
		{
			cmd_printf("pcs neadend loopback fail at %d/%d times\n",i+1,loopmax);
			// break;
		}else{
			if(!((i+1)%10))
			{
				cmd_printf("pcs neadend loopback pass at %d/%d times\n",i+1,loopmax);
			}
		}
		ets_delay_us(100000);
	}
#if 0
	for(uint32_t i=0; i<loopmax; i++)
	{
		cmd_printf("------(huge)-------- %d/%d ------------ times\n",i+1,loopmax);
		 
		if(emac_test_pcs_near_end_loopback_no_repeat_reset_huge_times(p_arg_val) == ESPSW_FAIL)
		{
			cmd_printf("pcs neadend loopback fail at %d/%d times\n",i+1,loopmax);
			break;
		}else{
			if(!((i+1)%10))
			{
				cmd_printf("pcs neadend loopback pass at %d/%d times\n",i+1,loopmax);
			}
		}
		ets_delay_us(100000);
	}
#endif
}


TEST_CASE("pcs nearend loopback test no repeat reset", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("[no repeat reset]pcs nearend loopback\n");
	emac_test_pcs_near_end_loopback_no_repeat_reset(p_arg_val);
}


TEST_CASE("pcs nearend loopback test no repeat reset: huge times", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("[no repeat reset:huge times]pcs nearend loopback\n");
	emac_test_pcs_near_end_loopback_no_repeat_reset_huge_times(p_arg_val);

}

TEST_CASE("emac SFP loopback no repeat reset", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
	uint32_t huge_times = 5000;
	p_arg_val = (unsigned long*)&huge_times;
    cmd_printf("emac SFP loopback no repeat test\n");
     
    emac_test_sfp_loopback(p_arg_val);
}

TEST_CASE("emac SFP loopback(repeat reset)", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac SFP loopback(repeat reset)\n");
	uint32_t huge_times = 10;
	p_arg_val = (unsigned long*)&huge_times;

    uint32_t reset_loopmax = 20;
	uint32_t pass_time = 0;
	uint32_t fail_time = 0;

	for(uint32_t i=0; i<reset_loopmax; i++)
	{
		cmd_printf("-------------- %d/%d ------------ times\n",i+1,reset_loopmax);
		 
		if(emac_test_sfp_loopback(p_arg_val) == ESPSW_FAIL)
		{
			cmd_printf("pcs neadend loopback fail at %d/%d times\n",i+1,reset_loopmax);
			fail_time++;
			// break;
		}else{
			if(!((i+1)%10)) // print every 10 times to avoid too many logs
			{
				cmd_printf("pcs neadend loopback pass at %d/%d times\n",i+1,reset_loopmax);
			}
			pass_time++;
		}
		ets_delay_us(100000);
	}

	cmd_printf("--------------** ------------ **------------ -\n");
	cmd_printf("--------------** ------------ **------------ -\n");
	cmd_printf("SFP loopback(repeat reset) pass times=%d/%d;fail_time=%d/%d \n",pass_time,reset_loopmax,fail_time);
	cmd_printf("--------------** ------------ **------------ -\n");
	cmd_printf("--------------** ------------ **------------ -\n");
}

TEST_CASE("temp_test", "[esp32x5]") //TO-DO
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("temptest\n");
     
	uint32_t loopmax = 100;
	uint32_t pass_time = 0;
	uint32_t fail_time = 0;

	for(uint32_t i=0; i<loopmax; i++)
	{
		cmd_printf("-------------- %d/%d ------------ times\n",i+1,loopmax);
		 
		if(emac_test_fpga_serdes_pcs_pma_loopback(p_arg_val) == ESPSW_FAIL)
		{
			cmd_printf("temptest fail at %d/%d times\n",i+1,loopmax);
			fail_time++;
			// break;
		}else{
			if(!((i+1)%10)) // print every 10 times to avoid too many logs
			{
				cmd_printf("temptest pass at %d/%d times\n",i+1,loopmax);
			}
			pass_time++;
		}
		ets_delay_us(10000);
	}

	cmd_printf("--------------** ------------ **------------ -\n");
	cmd_printf("--------------** ------------ **------------ -\n");
	cmd_printf("temptest pass times=%d/%d;fail_time=%d/%d \n",pass_time,loopmax,fail_time);
	cmd_printf("--------------** ------------ **------------ -\n");
	cmd_printf("--------------** ------------ **------------ -\n");
}




TEST_CASE("emac tx test(to linkpartner)-auto_nego on", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
	uint32_t loopmax = 10;

	bool auto_nego_set = TRUE;
	p_arg_val = (unsigned long*)&auto_nego_set;

    cmd_printf("emac tx test(to linkpartner)\n");
	for(uint32_t i=0; i<loopmax; i++)
	{
    	emac_test_tx_test_to_linkpartner(p_arg_val);
		cmd_printf(" --------- ------- ------ send times =%d/%d done !---------- ------- \n",i+1,loopmax);
	}
}


TEST_CASE("emac tx test(to linkpartner)-auto_nego off", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
	uint32_t loopmax = 10;

	bool auto_nego_set = FALSE;
	p_arg_val = (unsigned long*)&auto_nego_set;

    cmd_printf("emac tx test(to linkpartner)\n");
	for(uint32_t i=0; i<loopmax; i++)
	{
		cmd_printf("send times=%d/%d... \n",i+1,loopmax);
    	emac_test_tx_test_to_linkpartner(p_arg_val);
	}
}

TEST_CASE("emac tx test(to linkpartner)- no reset", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac tx test no reset\n");
    emac_test_tx_test_to_linkpartner_no_reset(p_arg_val);
}


TEST_CASE("emac rx test(from linkpartner)", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac rx test\n");
    emac_test_rx_test_from_linkpartner(p_arg_val);
}

TEST_CASE("emac1(tbxnum0) tbxtx stop", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac1 tbxtx stop\n");
    emac_test_tbx_tx_stop(p_arg_val,EMAC1_ID);
}


TEST_CASE("emac1 txrx flow ctrl on", "[esp32x5]")
{
	// unsigned long* p_arg_val = NULL;
    cmd_printf("emac1 txrx flow ctrl on\n");
    emac_test_tx_rx_flow_ctrl_on(EMAC1_ID,TRUE);
}


TEST_CASE("emac1 txrx flow ctrl off", "[esp32x5]")
{
	// unsigned long* p_arg_val = NULL;
    cmd_printf("emac1 txrx flow ctrl off\n");
    emac_test_tx_rx_flow_ctrl_on(EMAC1_ID,TRUE);
}

TEST_CASE("emac1 rx pause_forward on", "[esp32x5]")
{
	// unsigned long* p_arg_val = NULL;
    cmd_printf("emac1 rx pause_forward on\n");
    emac_test_rx_pause_forward_on(EMAC1_ID,TRUE);
}




TEST_CASE("emac tx test(to linkpartner)- no reset,mru=9716", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac tx test(to linkpartner)- no reset,mru=9716\n");
    emac_test_dis_mru_test(EMAC1_ID,TRUE);
}


TEST_CASE("emac tx test(to linkpartner)- no reset,mtu=9716", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac tx test(to linkpartner)- no reset,mtu=9716\n");
    emac_test_tx_test_to_linkpartner_no_reset_max_9716(p_arg_val);
}


// TEST_CASE("emac1 tx rx bandwidth rough test", "[esp32x5]")
// {
// 	unsigned long* p_arg_val = NULL;
//     cmd_printf("emac1 tx rx bandwidth rough test\n");
//     emac1_test_emac_check_rx_tx_bandwidth(EMAC1_ID);
// }



#elif (CUR_USED_INTF == RGMII)

TEST_CASE("rgmii mdio read/write test", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("rgmii mdio read/write test\n");
    rgmii_emac_test_smi_mdio_read_and_write(p_arg_val);
}

TEST_CASE("rgmii emac nearend loopback test", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("rgmii emac nearend loopback test\n");

	uint32_t total_len = 1024; 	// low 32bit
    uint32_t repeat_num = 100; 	// high 32bit
	
	// 定义64位变量存储两个32位值
	uint64_t combined_value = ((uint64_t)repeat_num << 32) | total_len;
	// 将64位值的地址转换为unsigned long*
	p_arg_val = (unsigned long*)&combined_value;
    rgmii_emac_test_mac_near_end_loopback(p_arg_val);
}

TEST_CASE("rgmii emac farend loopback test", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("rgmii emac farend loopback test\n");
    rgmii_emac_test_mac_far_end_loopback(p_arg_val);
}


TEST_CASE("rgmii emac1 tx test", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("rgmii emac tx test\n");
    rgmii_emac_test_mac_tx_test(p_arg_val);
}

TEST_CASE("emac tx test(to linkpartner)- no reset", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac tx test no reset\n");
	for(uint32_t emacid=EMAC1_ID; emacid<EMAC_MAX_ID; emacid++)
	{
    	rgmii_emac_test_tx_test_to_linkpartner_no_reset(emacid);
	}
}

TEST_CASE("rgmii emac1 rx test", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("rgmii emac rx test\n");
    rgmii_emac_test_mac_rx_test(p_arg_val);
}

TEST_CASE("rgmii emac rx debug", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("rgmii emac rx debug\n");
    rgmii_emac_test_mac_rx_debug(p_arg_val);
}


TEST_CASE("rgmii emac tx debug", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("rgmii emac tx debug\n");
    rgmii_emac_test_mac_tx_debug(p_arg_val);
}


TEST_CASE("rgmii emac1 connect emac2 test", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("rgmii emac rx test\n");
    rgmii_emac_test_emac1_connect_emac2_test(p_arg_val);
}
#endif

/*
TEST_CASE("emac cntp num check", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac cntp num check\n");
     
    emac_test_cntp_num_read_result(p_arg_val);
}


TEST_CASE("emac cntp len check", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("emac cntp len check\n");
     
    emac_test_cntp_len_read_result(p_arg_val);
}

TEST_CASE("tbx cntp num check", "[esp32x5]")
{
	unsigned long* p_arg_val = NULL;
    cmd_printf("tbx cntp num check\n");
     
    emac_test_tbx_cntp_num_read_result(p_arg_val);
}
*/


#if 0
TEST_CASE("switch agent rx", "[esp32x5]")
{
	register_switch_isr();
	fal_switch_init();
	switch_agent_rx_init();
	
	ut_agent_rx(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch agent tx", "[esp32x5]")
{
	ut_switch_setup();
	ut_agent_tx(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch tarp rx", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_tarp_rx_check(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch tarp tx", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_tarp_tx_check(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch global interrupt test", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_interrupt_sw_glb(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch bman test", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_bman_init_check(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_bman_link_check(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_bman_alloc_release(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_bman_thresh_dynamic(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_bman_thresh_static(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch qman test", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_qman_oq_map(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qman_spp_qe_threshold(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qman_qlp_qe_threshold(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qman_qlp_bb_threshold(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qman_oq_qe_threshold(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qman_oq_bb_threshold(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qman_qeid_exhaust(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qman_qlp_timeout(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qman_eee_test(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qman_vpp_map(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch prep test", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_prep_filter_abn_glb(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_prep_filter_norm_glb(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_prep_filter_port(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_prep_ipp_pattern(NULL);
	ut_switch_tear_down();
	
	ut_switch_setup();
	ut_prep_ipp_index(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_prep_ipp_rule_link(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_prep_intr_test(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch l2fm test", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_l2fm_bypss(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_8021q_mode(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_vtu_operation(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_salearn_policy(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_salearn_violation(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_flooding_mask(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_reserved_multicast(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_determination(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_forward_analyzer(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_loopback_abn(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_link_agg_portmask(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_egress_vlan(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_stp_check(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_intr_test(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_to_cpuq_map(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_pcp_remap(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_lkup_muti_fwd(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_lkup_cpu_fwd(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_fid_fwd(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2fm_prep_replace_vid(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch l2pc test", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_l2pc_pd_copy(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2pc_mirror(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2pc_sniffer(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_l2pc_intr_test(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch lookup test", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_lookup_intr_test(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_lookup_entry_test(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_lookup_entry_flush_test(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_lookup_age_test(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_lookup_misc_test(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch qos test", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_qos_cpu_imp_tc(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qos_acl_hit_tc(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qos_atu_match_tc(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qos_dscp_tc(NULL);
	ut_switch_tear_down();
	
	ut_switch_setup();
	ut_qos_vlan_tc(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qos_port_tc(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qos_tocpu_tc(NULL);
	ut_switch_tear_down();

	ut_switch_setup();
	ut_qos_mirror_tc(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch parser stress test ", "[esp32x5]")
{
	register_switch_isr();
	ut_switch_setup();
	ut_protocol_parser(NULL);
	ut_switch_tear_down();
}

TEST_CASE("switch l2fm stress test", "[esp32x5]")
{
	register_switch_isr();
#if 1
	ut_switch_setup();
#else
	fal_switch_init();
	//dump agent rx buffer
	switch_agent_rx_init();
#endif
	ut_protocol_l2fm(NULL);
	ut_switch_tear_down();
}
#endif