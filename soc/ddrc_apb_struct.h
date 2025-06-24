/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_DDRC_APB_STRUCT_H_
#define _SOC_DDRC_APB_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t reg_clk_en                    :    1;  /*Configures whether to force on apb_reg_file clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reserved1                     :    31;
        };
        uint32_t val;
    } clk_en;
    uint32_t reserved_4;
    uint32_t reserved_8;
    uint32_t reserved_c;
    union {
        struct {
            uint32_t reg_axiw_clk_en               :    16;  /*Configures whether to force on axi_wr 15~0 module clock. For bit n:; 0 : Not force on axi_wr n clock; 1 : Force on axi_wr n clock*/
            uint32_t reg_axir_clk_en               :    16;  /*Configures whether to force on axi_rd 15~0 module clock. For bit n:; 0 : Not force on axi_rd n clock; 1 : Force on axi_rd n clock*/
        };
        uint32_t val;
    } ddrc_module_clk_en0;
    union {
        struct {
            uint32_t reg_wr_arb_clk_en             :    1;  /*Configures whether to force on wr_arb module clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reg_rmw_clk_en                :    1;  /*Configures whether to force on rmw_cache module clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reg_wrc_clk_en                :    1;  /*Configures whether to force on wr_cache module clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reserved3                     :    5;
            uint32_t reg_rd_arb_clk_en             :    1;  /*Configures whether to force on rd_arb module clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reg_ol_clk_en                 :    1;  /*Configures whether to force on overlap module clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reg_rdc_clk_en                :    1;  /*Configures whether to force on rd_cache module clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reg_arq_clk_en                :    1;  /*Configures whether to force on ar_queue module clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reserved12                    :    4;
            uint32_t reg_ecc_clk_en                :    1;  /*Configures whether to force on ecc_cache module clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reg_aes_ctrl_clk_en           :    1;  /*Configures whether to force on sch core module clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reserved18                    :    6;
            uint32_t reg_dfic_clk_en               :    1;  /*Configures whether to force on dfi_ctrl module clock. Must set to 1 when DDRC work, because this module do not have HW auto clock gating.; 0 : Not force on; 1 : Force on*/
            uint32_t reserved25                    :    3;
            uint32_t reg_phy_clk_en                :    1;  /*Configures whether to force on PHY DFI clock. Must set to 1 when PHY work, because PHY do not have HW auto clock gating.; 0 : Not force on; 1 : Force on*/
            uint32_t reserved29                    :    1;
            uint32_t reg_wrc_mem_clk_en            :    1;  /*Configures whether to force on wr_cache memory clock.; 0 : Not force on; 1 : Force on*/
            uint32_t reg_rdc_mem_clk_en            :    1;  /*Configures whether to force on rd_cache memory clock.; 0 : Not force on; 1 : Force on*/
        };
        uint32_t val;
    } ddrc_module_clk_en1;
    union {
        struct {
            uint32_t reg_axiw_rst_n                :    16;  /*Configures whether to reset axi_wr 15~0 module. For bit n:; 0 : Reset axi_wr n; 1 : No effect*/
            uint32_t reg_axir_rst_n                :    16;  /*Configures whether to reset axi_rd 15~0 module. For bit n:; 0 : Reset axi_rd n; 1 : No effect*/
        };
        uint32_t val;
    } ddrc_module_rst_n0;
    union {
        struct {
            uint32_t reg_wr_arb_rst_n              :    1;  /*Configures whether to reset wr_arb module.; 0 : Reset; 1 : No effect*/
            uint32_t reg_rmw_rst_n                 :    1;  /*Configures whether to reset rmw_cache module.; 0 : Reset; 1 : No effect*/
            uint32_t reg_wrc_rst_n                 :    1;  /*Configures whether to reset wr_cache module.; 0 : Reset; 1 : No effect*/
            uint32_t reserved3                     :    5;
            uint32_t reg_rd_arb_rst_n              :    1;  /*Configures whether to reset rd_arb module.; 0 : Reset; 1 : No effect*/
            uint32_t reg_ol_rst_n                  :    1;  /*Configures whether to reset overlap module.; 0 : Reset; 1 : No effect*/
            uint32_t reg_rdc_rst_n                 :    1;  /*Configures whether to reset rd_cache module.; 0 : Reset; 1 : No effect*/
            uint32_t reg_arq_rst_n                 :    1;  /*Configures whether to reset ar_queue module.; 0 : Reset; 1 : No effect*/
            uint32_t reserved12                    :    4;
            uint32_t reg_ecc_rst_n                 :    1;  /*Configures whether to reset ecc_cache module.; 0 : Reset; 1 : No effect*/
            uint32_t reg_aes_ctrl_rst_n            :    1;  /*Configures whether to reset aes_ctrl module.; 0 : Reset; 1 : No effect*/
            uint32_t reserved18                    :    6;
            uint32_t reg_dfic_rst_n                :    1;  /*Configures whether to reset dfi_ctrl module.; 0 : Reset; 1 : No effect*/
            uint32_t reserved25                    :    3;
            uint32_t reg_phy_rst_n                 :    1;  /*Configures whether to reset PHY.; 0 : Reset; 1 : No effect*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddrc_module_rst_n1;
    union {
        struct {
            uint32_t reg_col_width                 :    5;  /*Configures DRAM Column address width.*/
            uint32_t reserved5                     :    3;
            uint32_t reg_row_width                 :    5;  /*Configures DRAM Row address width.*/
            uint32_t reserved13                    :    3;
            uint32_t reg_bank_width                :    2;  /*Configures DRAM Bank address width.*/
            uint32_t reserved18                    :    2;
            uint32_t reg_dq_width                  :    2;  /*Configures DRAM DQ width.; 0x0: 8bit; 0x1: 16bit; Others: Reserved*/
            uint32_t reserved22                    :    2;
            uint32_t reg_dram_ver                  :    2;  /*Configures DRAM version.; 0x0: LPDDR3; 0x1: LPDDR2; 0x2: DDR3(L); Others: Reserved*/
            uint32_t reserved26                    :    2;
            uint32_t reg_addrmap_type              :    1;  /*Configures DRAM Physical address mapping type.; 0: {Bank,Row,Column} ; 1: {Row,Bank,Column}*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddrc_ddr_type;
    union {
        struct {
            uint32_t reg_region_granu              :    2;  /*Configures granularity of region. ; 0x0: 1/32; 0x1: 1/64; 0x2: 1/128; 0x3: 1/256*/
            uint32_t reserved2                     :    30;
        };
        uint32_t val;
    } ddrcion_granu;
    uint32_t ddrcion_ecc_en;
    uint32_t ddrcion_aes_en;
    uint32_t reserved_30;
    uint32_t reserved_34;
    uint32_t reserved_38;
    uint32_t reserved_3c;
    union {
        struct {
            uint32_t reg_axiw_pri_p0               :    4;  /*Configures AXI Write Port 0 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p1               :    4;  /*Configures AXI Write Port 1 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p2               :    4;  /*Configures AXI Write Port 2 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p3               :    4;  /*Configures AXI Write Port 3 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p4               :    4;  /*Configures AXI Write Port 4 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p5               :    4;  /*Configures AXI Write Port 5 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p6               :    4;  /*Configures AXI Write Port 6 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p7               :    4;  /*Configures AXI Write Port 7 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
        };
        uint32_t val;
    } ddrc_axiw_pri0;
    union {
        struct {
            uint32_t reg_axiw_pri_p8               :    4;  /*Configures AXI Write Port 8 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p9               :    4;  /*Configures AXI Write Port 9 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p10              :    4;  /*Configures AXI Write Port 10 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p11              :    4;  /*Configures AXI Write Port 11 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p12              :    4;  /*Configures AXI Write Port 12 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p13              :    4;  /*Configures AXI Write Port 13 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p14              :    4;  /*Configures AXI Write Port 14 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axiw_pri_p15              :    4;  /*Configures AXI Write Port 15 priority. Must < AXI Write Port number, 0x0 is the lowest priority.*/
        };
        uint32_t val;
    } ddrc_axiw_pri1;
    union {
        struct {
            uint32_t reg_axiw_token_p0             :    4;  /*Configures AXI Write Port 0 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p1             :    4;  /*Configures AXI Write Port 1 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p2             :    4;  /*Configures AXI Write Port 2 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p3             :    4;  /*Configures AXI Write Port 3 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p4             :    4;  /*Configures AXI Write Port 4 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p5             :    4;  /*Configures AXI Write Port 5 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p6             :    4;  /*Configures AXI Write Port 6 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p7             :    4;  /*Configures AXI Write Port 7 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
        };
        uint32_t val;
    } ddrc_axiw_token0;
    union {
        struct {
            uint32_t reg_axiw_token_p8             :    4;  /*Configures AXI Write Port 8 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p9             :    4;  /*Configures AXI Write Port 9 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p10            :    4;  /*Configures AXI Write Port 10 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p11            :    4;  /*Configures AXI Write Port 11 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p12            :    4;  /*Configures AXI Write Port 12 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p13            :    4;  /*Configures AXI Write Port 13 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p14            :    4;  /*Configures AXI Write Port 14 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
            uint32_t reg_axiw_token_p15            :    4;  /*Configures AXI Write Port 15 token. How many wr_cache entries this AXI port can occupy at one arbiter round, must > 0.*/
        };
        uint32_t val;
    } ddrc_axiw_token1;
    union {
        struct {
            uint32_t reg_axir_pri_p0               :    4;  /*Configures AXI Read Port 0 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p1               :    4;  /*Configures AXI Read Port 1 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p2               :    4;  /*Configures AXI Read Port 2 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p3               :    4;  /*Configures AXI Read Port 3 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p4               :    4;  /*Configures AXI Read Port 4 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p5               :    4;  /*Configures AXI Read Port 5 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p6               :    4;  /*Configures AXI Read Port 6 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p7               :    4;  /*Configures AXI Read Port 7 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
        };
        uint32_t val;
    } ddrc_axir_pri0;
    union {
        struct {
            uint32_t reg_axir_pri_p8               :    4;  /*Configures AXI Read Port 8 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p9               :    4;  /*Configures AXI Read Port 9 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p10              :    4;  /*Configures AXI Read Port 10 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p11              :    4;  /*Configures AXI Read Port 11 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p12              :    4;  /*Configures AXI Read Port 12 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p13              :    4;  /*Configures AXI Read Port 13 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p14              :    4;  /*Configures AXI Read Port 14 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
            uint32_t reg_axir_pri_p15              :    4;  /*Configures AXI Read Port 15 priority. Must < AXI Read Port number, 0x0 is the lowest priority.*/
        };
        uint32_t val;
    } ddrc_axir_pri1;
    union {
        struct {
            uint32_t reg_axir_token_p0             :    4;  /*Configures AXI Read Port 0 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p1             :    4;  /*Configures AXI Read Port 1 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p2             :    4;  /*Configures AXI Read Port 2 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p3             :    4;  /*Configures AXI Read Port 3 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p4             :    4;  /*Configures AXI Read Port 4 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p5             :    4;  /*Configures AXI Read Port 5 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p6             :    4;  /*Configures AXI Read Port 6 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p7             :    4;  /*Configures AXI Read Port 7 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
        };
        uint32_t val;
    } ddrc_axir_token0;
    union {
        struct {
            uint32_t reg_axir_token_p8             :    4;  /*Configures AXI Read Port 8 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p9             :    4;  /*Configures AXI Read Port 9 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p10            :    4;  /*Configures AXI Read Port 10 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p11            :    4;  /*Configures AXI Read Port 11 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p12            :    4;  /*Configures AXI Read Port 12 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p13            :    4;  /*Configures AXI Read Port 13 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p14            :    4;  /*Configures AXI Read Port 14 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
            uint32_t reg_axir_token_p15            :    4;  /*Configures AXI Read Port 15 token. How many rd_cache entries this AXI port can occupy in one arbiter round, must > 0.*/
        };
        uint32_t val;
    } ddrc_axir_token1;
    union {
        struct {
            uint32_t reg_axir_aging_th_p0          :    8;  /*Configures AXI Read Port 0 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p1          :    8;  /*Configures AXI Read Port 1 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p2          :    8;  /*Configures AXI Read Port 2 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p3          :    8;  /*Configures AXI Read Port 3 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
        };
        uint32_t val;
    } ddrc_axir_aging_th0;
    union {
        struct {
            uint32_t reg_axir_aging_th_p4          :    8;  /*Configures AXI Read Port 4 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p5          :    8;  /*Configures AXI Read Port 5 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p6          :    8;  /*Configures AXI Read Port 6 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p7          :    8;  /*Configures AXI Read Port 7 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
        };
        uint32_t val;
    } ddrc_axir_aging_th1;
    union {
        struct {
            uint32_t reg_axir_aging_th_p8          :    8;  /*Configures AXI Read Port 8 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p9          :    8;  /*Configures AXI Read Port 9 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p10         :    8;  /*Configures AXI Read Port 10 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p11         :    8;  /*Configures AXI Read Port 11 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
        };
        uint32_t val;
    } ddrc_axir_aging_th2;
    union {
        struct {
            uint32_t reg_axir_aging_th_p12         :    8;  /*Configures AXI Read Port 12 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p13         :    8;  /*Configures AXI Read Port 13 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p14         :    8;  /*Configures AXI Read Port 14 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
            uint32_t reg_axir_aging_th_p15         :    8;  /*Configures AXI Read Port 15 aging timer threshold. Unit is DDRC_AXIR_AGING_PRESCALE  * core_clk cycles.*/
        };
        uint32_t val;
    } ddrc_axir_aging_th3;
    union {
        struct {
            uint32_t reg_axir_aging_prescale       :    16;  /*Configures AXI read port aging timer prescale.*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddrc_axir_aging_pre;
    union {
        struct {
            uint32_t reg_axir_en                   :    16;  /*Configures whether to enable AXI Write Port 15~0. For bit n:; 0 : Disable AXI Write Port n; 1 : Enable AXI Write Port n*/
            uint32_t reg_axiw_en                   :    16;  /*Configures whether to enable AXI Read Port 15~0. For bit n:; 0 : Disable AXI Read Port n; 1 : Enable AXI Read Port n*/
        };
        uint32_t val;
    } ddrc_axi_en;
    union {
        struct {
            uint32_t reg_rmw_th                    :    8;  /*Configures rmw_cache almost full threshold. Must < rmw_cache depth.*/
            uint32_t reg_wrc_th                    :    8;  /*Configures wr_cache almost full threshold. Must < wr_cache depth.*/
            uint32_t reg_ecc_th                    :    8;  /*Configures ecc_cache almost full threshold. Must < ecc_cache depth.*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } ddrc_cache_th;
    union {
        struct {
            uint32_t reserved0                     :    16;
            uint32_t reg_aes_en_credit             :    8;  /*Configures AES enable credit.; If enable AES in all DDR space, set this field to (AES outstanding number) + 8 for highest thought.; If enable AES in part of DDR space, set this field to (AES outstanding number) + en_more, where (0 <= en_more <=8) and (byp_more + en_more <= 8).*/
            uint32_t reg_aesd_byp_credit           :    8;  /*Configures AES DEC bypass credit.; If disable AES in all DDR space, set this field to 0xff for highest thought.; If enable AES in DDR space, set this field to (byp_fifo depth in aes_ctrl) + byp_more, where (0 <= byp_more <=8) and (byp_more + en_more <= 8).*/
        };
        uint32_t val;
    } ddrc_credit_ctrl;
    uint32_t reserved_80;
    uint32_t reserved_84;
    uint32_t reserved_88;
    uint32_t reserved_8c;
    uint32_t reserved_90;
    uint32_t reserved_94;
    uint32_t reserved_98;
    uint32_t reserved_9c;
    uint32_t reserved_a0;
    uint32_t reserved_a4;
    uint32_t reserved_a8;
    uint32_t reserved_ac;
    uint32_t reserved_b0;
    uint32_t reserved_b4;
    uint32_t reserved_b8;
    uint32_t reserved_bc;
    union {
        struct {
            uint32_t reg_burst_length              :    4;  /*Configures DRAM burst length. ; 0x1: BL2; 0x2: BL4; 0x4: BL8; 0x8: BL16; Others: Reserved*/
            uint32_t reserved4                     :    4;
            uint32_t reg_derate_value              :    3;  /*Configures the required cycles for de-rating. It can be determined by RU(1.875ns/tCK), HW will auto do the de-rate.*/
            uint32_t reserved11                    :    5;
            uint32_t reg_wr_odt_en                 :    1;  /*Configures whether to turn on remote ODTs port during a write to DRAM.; 0 : Turn off; 1 : Turn on */
            uint32_t reg_rd_odt_en                 :    1;  /*Configures whether to turn on remote ODTs port during a read from DRAM.; 0 : Turn off; 1 : Turn on */
            uint32_t reserved18                    :    14;
        };
        uint32_t val;
    } ddrc_ddr_static_cfg;
    union {
        struct {
            uint32_t reg_lp_en_pd                  :    1;  /*Configures whether to enable DFI Low Power interface handshaking during Power-Down Entry/Exit.*/
            uint32_t reg_lp_en_sr                  :    1;  /*Configures whether to enable DFI Low Power interface handshaking during Self-Refresh Entry/Exit.*/
            uint32_t reg_lp_en_dpd                 :    1;  /*Configures whether to enable DFI Low Power interface handshaking during Deep Power-Down Entry/Exit.*/
            uint32_t reserved3                     :    5;
            uint32_t reg_lp_wakeup_pd              :    4;  /*Configures the value drive on dfi_lp_wakeup signal when Power-Down mode is entered.*/
            uint32_t reg_lp_wakeup_sr              :    4;  /*Configures the value drive on dfi_lp_wakeup signal when Self-Refresh mode is entered.*/
            uint32_t reg_lp_wakeup_dpd             :    4;  /*Configures the value drive on dfi_lp_wakeup signal when Deep Power-Down mode is entered.*/
            uint32_t reserved20                    :    4;
            uint32_t reg_dfi_frequency             :    5;  /*Configures the value drive on dfi_frequency signal.*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddrc_dfi_static_cfg;
    uint32_t reserved_c8;
    uint32_t reserved_cc;
    union {
        struct {
            uint32_t reg_dfi_init_start            :    1;  /*Configures DFI interface signal dfi_init_start value.*/
            uint32_t reg_dfi_init_complete         :    1;  /*Represents DFI Interface signal dfi_init_complete value.*/
            uint32_t reserved2                     :    6;
            uint32_t reg_dis_auto_ctrlupd          :    1;  /*Configures whether to disable HW automatic send DFI Interface signal dfi_ctrlupd_req.; 0 : Enable; 1 : Disable*/
            uint32_t reserved9                     :    3;
            uint32_t reg_ctrlupd_req_trigger       :    1;  /*Configures whether to trigger a DFI Interface signal dfi_ctrlupd_req to the PHY. When this request finished, the bit is automatically cleared.; 0 : No effect; 1 : Trigger*/
            uint32_t reserved13                    :    3;
            uint32_t reg_en_dram_clk_disable       :    1;  /*Configures whether to enable the assertion of dfi_dram_clk_disable whenever a clock is not required by the DRAM.; 0 : dfi_dram_clk_disable is never asserted; 1 : dfi_dram_clk_disable is asserted when DRAM not require clock, for example in Power-Down, Self-Refresh, Deep Power-Down mode*/
            uint32_t reserved17                    :    7;
            uint32_t reg_dll_off_mode              :    1;  /*Configures whether  DDR3(L) work at DLL-off mode. Only used for DDR3(L).; 0: DDR3(L) work at DLL-on mode; 1: DDR3(L) work at DLL-off mode*/
            uint32_t reserved25                    :    3;
            uint32_t reg_dfi_reset_n               :    1;  /*Configures whether to force DFI Interface signal dfi_reset_n to 0.; 0: Force dfi_reset_n to 0 ; 1: Not force dfi_reset_n*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddrc_dync_cfg;
    uint32_t reserved_d4;
    uint32_t reserved_d8;
    uint32_t reserved_dc;
    union {
        struct {
            uint32_t reg_operating_mode            :    3;  /*Represents DRAM operating mode.; 0x0: Initial; 0x1: Normal; 0x2: Power-Down; 0x3: Self-Refresh; 0x4: Deep Power-Down; Others: Reserved*/
            uint32_t reserved3                     :    29;
        };
        uint32_t val;
    } ddrc_ddr_status;
    uint32_t reserved_e4;
    uint32_t reserved_e8;
    uint32_t reserved_ec;
    uint32_t reserved_f0;
    uint32_t reserved_f4;
    uint32_t reserved_f8;
    uint32_t reserved_fc;
    union {
        struct {
            uint32_t reg_t_pre_cke_x1024           :    12;  /*Configures initialization sequence timing value from release reset to driving CKE high minimum interval, unit is DFI PHY clock cycle * 1024.*/
            uint32_t reserved12                    :    4;
            uint32_t reg_t_post_cke_x1024          :    10;  /*Configures initialization sequence timing value from driving CKE high to start the SDRAM initialization sequence minimum interval, unit is DFI PHY clock cycle * 1024.*/
            uint32_t reserved26                    :    2;
            uint32_t reg_dram_init_en              :    2;  /*Configures DDRC initialization mode.; 0x0: Reserved ; 0x1: DRAM Initialization is run after dfi_ctrl reset; 0x2: Reserved ; 0x3: DRAM Initialization is skipped after dfi_ctrl reset, DDRC starts up in Self-Refresh Mode*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddrc_ddr_init0;
    union {
        struct {
            uint32_t reg_t_max_auto_init_x1024     :    10;  /*Configures initialization sequence timing value of tINIT5 (the maximum duration of the auto initialization), unit is DFI PHY clock cycle * 1024. Only used for LPDDR3/2.*/
            uint32_t reserved10                    :    6;
            uint32_t reg_t_dram_rstn_x1024         :    9;  /*Configures initialization sequence timing value of SDRAM reset signal assert minimum width, unit is DFI PHY clock cycle * 1024. Only used for DDR3(L).*/
            uint32_t reserved25                    :    7;
        };
        uint32_t val;
    } ddrc_ddr_init1;
    union {
        struct {
            uint32_t reg_init_mr0                  :    16;  /*Configures MR0 value write to DRAM in initialization sequence.*/
            uint32_t reg_init_mr1                  :    16;  /*Configures MR1 value write to DRAM in initialization sequence.*/
        };
        uint32_t val;
    } ddrc_ddr_init2;
    union {
        struct {
            uint32_t reg_init_mr2                  :    16;  /*Configures MR2 value write to DRAM in initialization sequence.*/
            uint32_t reg_init_mr3                  :    16;  /*Configures MR3 value write to DRAM in initialization sequence.*/
        };
        uint32_t val;
    } ddrc_ddr_init3;
    uint32_t reserved_110;
    uint32_t reserved_114;
    uint32_t reserved_118;
    uint32_t reserved_11c;
    uint32_t reserved_120;
    uint32_t reserved_124;
    uint32_t reserved_128;
    uint32_t reserved_12c;
    uint32_t reserved_130;
    uint32_t reserved_134;
    uint32_t reserved_138;
    uint32_t reserved_13c;
    union {
        struct {
            uint32_t reg_t_ckpde                   :    4;  /*Configures timing value of tCKPDE (minimum time CK is maintained as a valid clock after power-down Entry), unit is DFI PHY clock cycles.*/
            uint32_t reg_t_ckpdx                   :    4;  /*Configures timing value of tCKPDX (minimum time CK is maintained as a valid clock before power-down Exit), unit is DFI PHY clock cycles.*/
            uint32_t reg_t_cksre                   :    4;  /*Configures timing value of tCKSRE (minimum time CK is maintained as a valid clock after self-refresh Entry), unit is DFI PHY clock cycles.*/
            uint32_t reg_t_cksrx                   :    4;  /*Configures timing value of tCKSRX (minimum time CK is maintained as a valid clock before self-refresh Exit), unit is DFI PHY clock cycles.*/
            uint32_t reg_t_ckdpde                  :    4;  /*Configures timing value of tCKDPDE (minimum time CK is maintained as a valid clock after deep-power-down Entry), unit is DFI PHY clock cycles.*/
            uint32_t reg_t_ckdpdx                  :    4;  /*Configures timing value of tCKDPDX (minimum time CK is maintained as a valid clock before deep-power-down Exit), unit is DFI PHY clock cycles.*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } ddrc_ddr_timing0;
    union {
        struct {
            uint32_t reg_t_cke                     :    5;  /*Configures timing value of tCKE (CKE high/low pulse minimum width), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO.*/
            uint32_t reserved5                     :    3;
            uint32_t reg_t_ckesr                   :    6;  /*Configures timing value of tCKESR (CKE low minimum width during Power-Down and Self-Refresh), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO.*/
            uint32_t reserved14                    :    18;
        };
        uint32_t val;
    } ddrc_ddr_timing1;
    union {
        struct {
            uint32_t reg_t_xsr                     :    12;  /*Configures timing value of tXSR (minimum width from exit Self-Refresh to any command), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO. Only use for LPDDR3/2.*/
            uint32_t reserved12                    :    4;
            uint32_t reg_t_xs_dll_x32              :    7;  /*Configures timing value of tXSDLL (minimum width from exit Self-Refresh to any command requiring a locked DLL), unit is DFI PHY clock cycles * 32. Only used for DDR3(L).*/
            uint32_t reserved23                    :    1;
            uint32_t reg_t_xs_x32                  :    7;  /*Configures timing value of tXS (minimum width from exit Self-Refresh to any command not requiring a locked DLL), unit is DFI PHY clock cycles * 32. Only used for DDR3(L).*/
            uint32_t reserved31                    :    1;
        };
        uint32_t val;
    } ddrc_ddr_timing2;
    union {
        struct {
            uint32_t reg_t_xp                      :    5;  /*Configures timing value of tXP (minimum width from exit Power-Down to any command), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO. For DDR3(L), this must be programmed to tXPDLL if slow Power-Down exit is selected in MR0[12].*/
            uint32_t reserved5                     :    3;
            uint32_t reg_t_dpd_x4096               :    8;  /*Configures timing value of tDPD (minimum Deep Power-Down width), unit is DFI PHY clock cycles * 4096. Only use for LPDDR3/2.*/
            uint32_t reserved16                    :    16;
        };
        uint32_t val;
    } ddrc_ddr_timing3;
    union {
        struct {
            uint32_t reg_t_zqcs                    :    10;  /*Configures timing value of tZQCS (NOP required after a ZQ Short Calibration), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO.*/
            uint32_t reserved10                    :    6;
            uint32_t reg_t_zqcl                    :    11;  /*Configures timing value of tZQCL/tZQoper (NOP required after a ZQ Long Calibration), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO.*/
            uint32_t reserved27                    :    5;
        };
        uint32_t val;
    } ddrc_ddr_timing4;
    union {
        struct {
            uint32_t reg_t_zqrst                   :    10;  /*Configures timing value of tZQRESET (NOP required after a ZQ Reset Calibration), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO.*/
            uint32_t reserved10                    :    6;
            uint32_t reg_t_zqinit_x32              :    8;  /*Configures timing value of tZQINIT (NOP required after a ZQ Initial Calibration), unit is DFI PHY clock cycles *32.*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } ddrc_ddr_timing5;
    union {
        struct {
            uint32_t reg_t_mrr                     :    10;  /*Configures timing value of tMRR (wait after a mode register read), unit is DFI PHY clock cycles.*/
            uint32_t reserved10                    :    6;
            uint32_t reg_t_mrw                     :    10;  /*Configures timing value of tMRW (wait after a mode register write), unit is DFI PHY clock cycles.*/
            uint32_t reserved26                    :    6;
        };
        uint32_t val;
    } ddrc_ddr_timing6;
    union {
        struct {
            uint32_t reg_t_mod                     :    10;  /*Configures timing value of tMOD (wait after a MRS to a non-MRS), unit is DFI PHY clock cycles. Only use for DDR3(L).*/
            uint32_t reserved10                    :    6;
            uint32_t reg_t_mrr2mrw                 :    7;  /*Configures timing value from a mode register read to a mode register write, unit is DFI PHY clock cycles. Program it to max(DDRC_T_RD2WR,DDRC_T_MRR).*/
            uint32_t reserved23                    :    9;
        };
        uint32_t val;
    } ddrc_ddr_timing7;
    union {
        struct {
            uint32_t reg_t_ras                     :    6;  /*Configures timing value of tRAS (minimum width from activate to precharge to the same bank), unit is DFI PHY clock cycles, must Round UP to n*DDRC_PHY_FREQ_RATIO.*/
            uint32_t reserved6                     :    2;
            uint32_t reg_t_rcd                     :    5;  /*Configures timing value of tRCD (minimum width from activate to read or write command to same bank), unit is DFI PHY clock cycles.*/
            uint32_t reserved13                    :    3;
            uint32_t reg_t_rrd                     :    4;  /*Configures timing value of tRRD (minimum width between activate bank A to activate bank B), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO.*/
            uint32_t reg_t_rfc                     :    10;  /*Configures timing value of tRFC (minimum width from refresh to refresh or activate), unit is DFI PHY clock cycles.*/
            uint32_t reserved30                    :    2;
        };
        uint32_t val;
    } ddrc_ddr_timing8;
    union {
        struct {
            uint32_t reg_t_wr2pre                  :    8;  /*Configures timing value of minimum width from write to precharge to same bank, unit is DFI PHY clock cycles. ; For LPDDR3/2: WL + BL/2 + tWR + 1.; For DDR3(L): WL + BL/2 + tWR.*/
            uint32_t reg_t_wr2rd                   :    8;  /*Configures timing value of minimum width from write command to read command, unit is DFI PHY clock cycles.; For LPDDR3/2: WL + BL/2 + tWTR + 1; For DDR3(L): CWL + BL/2 + tWTR*/
            uint32_t reg_t_rd2pre                  :    8;  /*Configures timing value of minimum width from read to precharge to same bank, unit is DFI PHY clock cycles.; For LPDDR3: BL/2 + max(RU(tRTP/tCK),4) - 4; For LPDDR2-S2: BL/2 + RU(tRTP/tCK) – 1; For LPDDR2-S4: BL/2 + max(RU(tRTP/tCK),2) - 2; For DDR3(L): AL + max(RU(tRTP/tCK),4)*/
            uint32_t reg_t_rd2wr                   :    8;  /*Configures timing value of minimum width from read command to write command, unit is DFI PHY clock cycles.; For LPDDR3/2: RL + BL/2 + RU(tDQSCKmax/tCK) + 1 - WL; For DDR3(L): RL + BL/2 + 2 - WL + (ODT_en ? 1 : 0)*/
        };
        uint32_t val;
    } ddrc_ddr_timing9;
    union {
        struct {
            uint32_t reg_t_rpab                    :    5;  /*Configures timing value of tRPpab (minimum width from all-bank precharge to activate), unit is DFI PHY clock cycles.*/
            uint32_t reserved5                     :    3;
            uint32_t reg_t_rppb                    :    5;  /*Configures timing value of tRPpb (minimum width from single-bank precharge to activate of same bank), unit is DFI PHY clock cycles.*/
            uint32_t reserved13                    :    3;
            uint32_t reg_t_ccd                     :    8;  /*Configures timing value of tCCD (minimum width between two reads or two writes), unit is DFI PHY clock cycles. Normal is BL/2.*/
            uint32_t reserved24                    :    8;
        };
        uint32_t val;
    } ddrc_ddr_timing10;
    union {
        struct {
            uint32_t reg_t_wr_odt_hold             :    4;  /*Configures timing value to hold ODT for a write command, unit is DFI PHY clock cycles.; For LPDDR3: Recommend value when BL8 is 7 + RU(tODTon(max)/tCK); For DDR3(L): Recommend value when BL8 is 0x6*/
            uint32_t reserved4                     :    4;
            uint32_t reg_t_wr_odt_delay            :    5;  /*Configures timing value from issuing a write command to setting ODT values associated with that command, unit is DFI PHY clock cycles.; For LPDDR3: Recommend value is WL - 1 + RU(tODTon(max)/tCK); For DDR3(L): Recommend value is 0x0*/
            uint32_t reserved13                    :    3;
            uint32_t reg_t_rd_odt_hold             :    4;  /*Configures timing value to hold ODT for a read command, unit is DFI PHY clock cycles.; For LPDDR3: Recommend value when BL8 is 5 + RU(tDQSCK(max)/tCK) - RD(tDQSCK(min)/tCK) + RU(tODTon(max)/tCK); For DDR3(L): Recommend value when BL8 is 0x6*/
            uint32_t reserved20                    :    4;
            uint32_t reg_t_rd_odt_delay            :    5;  /*Configures timing value from issuing a read command to setting ODT values associated with that command, unit is DFI PHY clock cycles.; For LPDDR3: Recommend value is RL + RD(tDQSCK(min)/tCK) - 1 - RU(tODTon(max)/tCK); For DDR3(L): Recommend value is CL - CWL*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddrc_ddr_timing11;
    uint32_t reserved_170;
    uint32_t reserved_174;
    uint32_t reserved_178;
    uint32_t reserved_17c;
    union {
        struct {
            uint32_t reg_t_ctrl_delay              :    5;  /*Configures timing value of tctrl_delay (delay from DFI control signals to PHY-DRAM interface), unit is DFI PHY clock cycles.*/
            uint32_t reserved5                     :    3;
            uint32_t reg_t_dram_clk_dis            :    5;  /*Configures timing value of tdram_clk_disable (delay from DFI Interface signal dfi_dram_clk_disable assert to DRAM clock maintains low at the PHY-DRAM boundary), unit is DFI PHY clock cycles.*/
            uint32_t reserved13                    :    3;
            uint32_t reg_t_dram_clk_en             :    5;  /*Configures timing value of tdram_clk_enable (delay from DFI Interface signal dfi_dram_clk_disable de-assert to DRAM get first valid clock rising edge at the PHY-DRAM boundary), unit is DFI PHY clock cycles.*/
            uint32_t reserved21                    :    11;
        };
        uint32_t val;
    } ddrc_dfi_timing0;
    union {
        struct {
            uint32_t reg_t_phy_wr_lat              :    6;  /*Configures timing value of tphy_wrlat (delay from write command send on DFI Interface to DFI Interface signal dfi_wdata_en assert), unit is DFI PHY clock cycles.*/
            uint32_t reserved6                     :    2;
            uint32_t reg_t_phy_wrdata              :    6;  /*Configures timing value of tphy_wrdata (delay from DFI Interface signal dfi_wrdata_en assert to associated write data is driven on DFI Interface signal dfi_wrdata), unit is DFI PHY clock cycles.*/
            uint32_t reserved14                    :    2;
            uint32_t reg_t_phy_wrdata_delay        :    5;  /*Configures timing value of twrdata_delay (delay from DFI Interface signal dfi_wdata_en assert to corresponding write data transfer is completed on the DRAM bus), unit is DFI PHY clock cycles.*/
            uint32_t reserved21                    :    11;
        };
        uint32_t val;
    } ddrc_dfi_timing1;
    union {
        struct {
            uint32_t reg_t_phy_rddata_en           :    7;  /*Configures timing value of trddata_en (delay from read command send on DFI Interface to DFI Interface signal dfi_rddata_en assert), unit is DFI PHY clock cycles.*/
            uint32_t reserved7                     :    1;
            uint32_t reg_t_phy_rd_lat              :    7;  /*Configures timing value of tphy_rdlat (max delay from DFI Interface signal dfi_rdata_en assert to corresponding DFI Interface signal dfi_rdata_valid back), unit is DFI PHY clock cycles.*/
            uint32_t reserved15                    :    17;
        };
        uint32_t val;
    } ddrc_dfi_timing2;
    union {
        struct {
            uint32_t reg_t_ctrlupd_min             :    10;  /*Configures timing value of tctrlupd_min (minimum width that DFI Interface signal dfi_ctrlupd_req must assert, DDRC expects PHY to respond within this time), unit is DFI PHY clock cycle, must Round Up to n*DDRC_PHY_FREQ_RATIO.*/
            uint32_t reserved10                    :    6;
            uint32_t reg_t_ctrlupd_interval_x1024  :    8;  /*Configures timing value of tctrlupd_interval (interval between DDRC initiated DFI update requests), unit is DFI PHY clock cycle * 1024.*/
            uint32_t reg_t_lp_resp                 :    5;  /*Configures timing value of tlp_resp (minimum width that DFI Interface signal dfi_lp_req must assert, DDRC expects PHY to respond within this time), unit is DFI PHY clock cycles, must Round Up to n*DDRC_PHY_FREQ_RATIO.*/
            uint32_t reserved29                    :    3;
        };
        uint32_t val;
    } ddrc_dfi_timing3;
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
    union {
        struct {
            uint32_t reg_phy_bufferen_core         :    1;  /*Configures the value of PHY interface signal bufferen_core.; 0: PHY go into low power state, keep IO CKE low, IO RESETN high and close the other IO; 1: PHY is in normal state*/
            uint32_t reserved1                     :    15;
            uint32_t reg_phy_plllock               :    1;  /*Represents the value of PHY interface signal ddr_plllock.; 0: PLL not lock; 1: PLL lock*/
            uint32_t reserved17                    :    15;
        };
        uint32_t val;
    } ddrc_phy_io;
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
    uint32_t version;
    uint32_t eco0;
    uint32_t eco1;
    uint32_t eco2;
} ddrc_apb_dev_t;
extern ddrc_apb_dev_t DDRC_APB;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_DDRC_APB_STRUCT_H_ */
