/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SWITCH_SWITCH_SMA_STRUCT_H_
#define _SWITCH_SWITCH_SMA_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "switch.h"

typedef volatile struct {
    union {
        struct {
            uint32_t reg_mdio_clause               :    1;  /*0 : Clause 22; 1 : Clause 45*/
            uint32_t reg_appclkrange               :    4;  /*SYS CLK Range. The SYS CLK Range selection determines the frequency of the MDC clock according to  the SYS clock frequency used in your design. The suggested range of CYS clock frequency applicable for each value(when Bit[5]=0) ensures that the MDC clock is approximately between the frequency range 1.0MHZ-2.5MHZ.; 0000 : The CYS clock frequency is 60-100MHZ and the MDC clock frequency is CYS clock/42.; 0001 : The CYS clock frequency is 100-150MHZ and the MDC clock frequency is CYS clock/62.; 0010 : The CYS clock frequency is 20-35MHZ and the MDC clock frequency is CYS clock/16.; 0011 : The CYS clock frequency is 35-60MHZ and the MDC clock frequency is CYS clock/26.; 0100 : The CYS clock frequency is 150-250MHZ and the MDC clock frequency is CYS clock/102.; 0101 : The CYS clock frequency is 250-300MHZ and the MDC clock frequency is CYS clock/124.; 0110 ,0111 : Reserved; When Bit5 is set,you can achieve higher frequency of the MAC clock than the frequency limit of 2.5MHZ. Program the following values only if the interfacing chips support faster MDC clocks.; 1000 : CYS clock/4; 1001 : CYS clock/6; 1010 : CYS clock/8; 1011 : CYS clock/10; 1100 : CYS clock/12; 1101 : CYS clock/14; 1110 : CYS clock/16; 1111 : CYS clock/18*/
            uint32_t reserved5                     :    3;
            uint32_t reg_mdio_sup_pre              :    1;  /*Configures whether to accelerate external PHY configutation management. 0:MDIO frames have 32-bit preamble(all-ones). 1:MDIO frames have 1-bit preamble(all-ones).*/
            uint32_t reserved9                     :    23;
        };
        uint32_t val;
    } sma_mdio_cfg;
    union {
        struct {
            uint32_t reg_mdio_wdata_addr           :    16;  /*When op is Write , this field is MDIO Write data[15:0]. When op is Address, this field is MDIO address[15:0].*/
            uint32_t reg_mdio_reg_dev_addr         :    5;  /*Register address[4:0] for Clause 22, Device address[4:0] for Clause 45.*/
            uint32_t reg_mdio_phy_prt_addr         :    5;  /*PHY address[4:0] for Clause 22, Port address[4:0] for Clause 45.*/
            uint32_t reg_mdio_op_code              :    2;  /*00b : Address for Clause 45; 01b : Write; 10b : Read for clause 22 or Read increment for clause 45; 11b : Read for clause 45*/
            uint32_t reg_mdio_start_busy           :    1;  /*START_BUSY, Self-clearing, CPU writes this bit to 1 in order to initiate MDIO transaction. When transaction completes hardware will clear this bit.*/
            uint32_t reg_mdio_op_done              :    1;  /*this bit is set when  transaction completes.*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } sma_mdio_cmd;
    union {
        struct {
            uint32_t reg_mdio_rdata                :    16;  /*This field contains the 16-bit data value read from the PHY after a Management Read operation.*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } sma_mdio_read_data;
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*reserved*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } sma_clk_en;
} switch_sma_dev_t;
extern switch_sma_dev_t SWITCH_SMA;
#ifdef __cplusplus
}
#endif



#endif /*_SWITCH_SWITCH_SMA_STRUCT_H_ */
