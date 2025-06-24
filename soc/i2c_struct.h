/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_I2C_STRUCT_H_
#define _SOC_I2C_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    union {
        struct {
            uint32_t period                        :    9;  /*Configures the low level width of the SCL Clock in master mode. \\; Measurement unit: i2c_sclk \\ */
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } scl_low_period;
    union {
        struct {
            uint32_t sda_force_out                 :    1;  /*Configures the SDA output mode.\\; 0: Open drain output \\ ; 1: Direct output \\*/
            uint32_t scl_force_out                 :    1;  /*Configures the SCL output mode.\\; 0: Open drain output \\ ; 1: Direct output \\*/
            uint32_t sample_scl_level              :    1;  /*Configures the sample mode for SDA.\\; 0: Sample SDA data on the SCL high level \\; 1: Sample SDA data on the SCL low level \\*/
            uint32_t rx_full_ack_level             :    1;  /*Configures the ACK value that needs to be sent by master when the rx_fifo_cnt has reached the threshold.\\ */
            uint32_t ms_mode                       :    1;  /*Configures the module as an I2C Master or Slave.\\ ; 0: Slave \\; 1: Master \\*/
            uint32_t trans_start                   :    1;  /*Configures whether the slave starts sending the data in txfifo.\\ ; 0: No effect \\; 1: Start */
            uint32_t tx_lsb_first                  :    1;  /*Configures to control the sending order for data needing to be sent.\\ ; 0: send data from the most significant bit \\; 1: send data from the least significant bit \\*/
            uint32_t rx_lsb_first                  :    1;  /*Configures to control the storage order for received data.\\; 0: receive data from the most significant bit \\ ; 1: receive data from the least significant bit \\; */
            uint32_t clk_en                        :    1;  /*Configures whether to gate clock signal for registers.\\; 0: Support clock only when registers are read or written to by software \\; 1: Force clock on for registers \\ */
            uint32_t arbitration_en                :    1;  /*Configures to enable I2C bus arbitration detection.\\; 0: No effect \\; 1: Enable \\ */
            uint32_t fsm_rst                       :    1;  /*Configures to reset the SCL_FSM.\\; 0: No effect \\; 1: Reset */
            uint32_t conf_upgate                   :    1;  /*Configures this bit for synchronization.\\; 0: No effect \\; 1: Synchronize */
            uint32_t slv_tx_auto_start_en          :    1;  /*Configures to enable slave to send data automatically\\; 0: Disable\\; 1: Enable \\ */
            uint32_t addr_10bit_rw_check_en        :    1;  /*Configures to check if the r/w bit of 10bit addressing consists with I2C protocol.\\; 0: Not check\\; 1: Check */
            uint32_t addr_broadcasting_en          :    1;  /*Configures to support the 7 bit general call function.\\ ; 0: Not support \\; 1: Support \\*/
            uint32_t reserved15                    :    17;  /*Reserved*/
        };
        uint32_t val;
    } ctr;
    union {
        struct {
            uint32_t resp_rec                      :    1;  /*Represents the received ACK value in master mode or slave mode.\\; 0: ACK\\; 1: NACK. */
            uint32_t slave_rw                      :    1;  /*Represents the transfer direction in slave mode.\\; 1: Master reads from slave\\; 0: Master writes to slave. */
            uint32_t reserved2                     :    1;  /*Reserved*/
            uint32_t arb_lost                      :    1;  /*Represents whether the I2C controller loses control of SCL line.\\; 0: No arbitration lost\\; 1: Arbitration lost\\ */
            uint32_t bus_busy                      :    1;  /*Represents the I2C bus state.\\; 1: The I2C bus is busy transferring data\\ ; 0: The I2C bus is in idle state.\\ */
            uint32_t slave_addressed               :    1;  /*Represents whether the address sent by the master is equal to the address of the slave.\\; Valid only when the module is configured as an I2C Slave.\\; 0: Not equal\\; 1: Equal\\ */
            uint32_t reserved6                     :    1;  /*Reserved*/
            uint32_t reserved7                     :    1;  /*Reserved*/
            uint32_t rx_fifo_cnt                   :    6;  /*Represents the number of data bytes received in RAM. */
            uint32_t stretch_cause                 :    2;  /*Represents the cause of SCL clocking stretching in slave mode.\\; 0: Stretching SCL low when the master starts to read data.\\; 1: Stretching SCL low when I2C TX FIFO is empty in slave mode.\\; 2: Stretching SCL low when I2C RX FIFO is full in slave mode. */
            uint32_t reserved16                    :    2;  /*Reserved*/
            uint32_t tx_fifo_cnt                   :    6;  /*Represents the number of data bytes to be sent. */
            uint32_t scl_main_state_last           :    3;  /*Represents the states of the I2C module state machine.\\ ; 0: Idle\\; 1: Address shift\\; 2: ACK address\\; 3: Rx data\\; 4: Tx data\\; 5: Send ACK\\; 6: Wait ACK */
            uint32_t reserved27                    :    1;  /*Reserved*/
            uint32_t scl_state_last                :    3;  /*Represents the states of the state machine used to produce SCL.\\; 0: Idle\\; 1: Start\\; 2: Negative edge\\; 3: Low\\; 4: Positive edge\\; 5: High\\; 6: Stop */
            uint32_t reserved31                    :    1;  /*Reserved*/
        };
        uint32_t val;
    } sr;
    union {
        struct {
            uint32_t time_out_value                :    5;  /*Configures the timeout threshold period for SCL stucking at high or low level. The actual period is 2\^{}(reg_time_out_value).\\; Measurement unit: i2c_sclk \\ */
            uint32_t time_out_en                   :    1;  /*Configures to enable time out control.\\; 0: No effect \\; 1: Enable \\ */
            uint32_t reserved6                     :    26;  /*Reserved*/
        };
        uint32_t val;
    } timeout;
    union {
        struct {
            uint32_t addr                          :    15;  /*Configure the slave address of I2C Slave.\\ */
            uint32_t reserved15                    :    16;  /*Reserved*/
            uint32_t en_10bit                      :    1;  /*Configures to enable the slave 10-bit addressing mode in master mode.\\ ; 0: No effect \\; 1: Enable \\ */
        };
        uint32_t val;
    } slave_addr;
    union {
        struct {
            uint32_t rx_fifo_raddr                 :    5;  /*Represents the offset address of the APB reading from RXFIFO. */
            uint32_t rx_fifo_waddr                 :    5;  /*Represents the offset address of i2c module receiving data and writing to RXFIFO. */
            uint32_t tx_fifo_raddr                 :    5;  /*Represents the offset address of i2c module reading from TXFIFO. */
            uint32_t tx_fifo_waddr                 :    5;  /*Represents the offset address of APB bus writing to TXFIFO. */
            uint32_t reserved20                    :    1;  /*Reserved*/
            uint32_t reserved21                    :    1;  /*Reserved*/
            uint32_t slave_rw_point                :    8;  /*Represents the offset address in the I2C Slave RAM addressed by I2C Master when in I2C slave mode. */
            uint32_t reserved30                    :    2;  /*Reserved*/
        };
        uint32_t val;
    } fifo_st;
    union {
        struct {
            uint32_t rx_fifo_wm_thrhd              :    5;  /*Configures the water mark threshold of RXFIFO in nonfifo access mode. When I2C_FIFO_PRT_EN is 1 and RX FIFO counter is bigger than I2C_RXFIFO_WM_THRHD[4:0], I2C_RXFIFO_WM_INT_RAW bit will be valid. ; \tododone{For CJ, please check this description. I habe doubt about reg_reg_fifo_prt_en.CJ: modified}*/
            uint32_t tx_fifo_wm_thrhd              :    5;  /*Configures the water mark threshold of TXFIFO in nonfifo access mode.  When I2C_FIFO_PRT_EN is 1 and TC FIFO counter is bigger than I2C_TXFIFO_WM_THRHD[4:0], I2C_TXFIFO_WM_INT_RAW bit will be valid. */
            uint32_t nonfifo_en                    :    1;  /*Configures to enable APB nonfifo access. */
            uint32_t fifo_addr_cfg_en              :    1;  /*Configures the slave to enable dual address mode. When this mode is enabled, the byte received after the I2C address byte represents the offset address in the I2C Slave RAM. \\; 0: Disable\\; 1: Enable \\ */
            uint32_t rx_fifo_rst                   :    1;  /*Configures to reset RXFIFO.\\; 0: No effect \\; 1: Reset */
            uint32_t tx_fifo_rst                   :    1;  /*Configures to reset TXFIFO.\\; 0: No effect \\; 1: Reset */
            uint32_t fifo_prt_en                   :    1;  /*Configures to enable FIFO pointer in non-fifo access mode. This bit controls the valid bits and the TX/RX FIFO overflow, underflow, full and empty interrupts.\\; 0: No effect \\; 1: Enable \\ */
            uint32_t reserved15                    :    5;  /*Reserved*/
            uint32_t reserved20                    :    6;  /*Reserved*/
            uint32_t reserved26                    :    1;  /*Reserved*/
            uint32_t reserved27                    :    5;  /*Reserved*/
        };
        uint32_t val;
    } fifo_conf;
    union {
        struct {
            uint32_t data                          :    8;  /*Represents the value of RXFIFO read data. */
            uint32_t reserved8                     :    24;  /*Reserved*/
        };
        uint32_t val;
    } fifo_data;
    union {
        struct {
            uint32_t rx_fifo_wm                    :    1;  /*The raw interrupt status of I2C_RXFIFO_WM_INT interrupt. */
            uint32_t tx_fifo_wm                    :    1;  /*The raw interrupt status of I2C_TXFIFO_WM_INT interrupt. */
            uint32_t rx_fifo_ovf                   :    1;  /*The raw interrupt status of I2C_RXFIFO_OVF_INT interrupt. */
            uint32_t end_detect                    :    1;  /*The raw interrupt status of the I2C_END_DETECT_INT interrupt. */
            uint32_t byte_trans_done               :    1;  /*The raw interrupt status of the I2C_END_DETECT_INT interrupt. */
            uint32_t arbitration_lost              :    1;  /*The raw interrupt status of the I2C_ARBITRATION_LOST_INT interrupt. */
            uint32_t mst_tx_fifo_udf               :    1;  /*The raw interrupt status of I2C_TRANS_COMPLETE_INT interrupt. */
            uint32_t trans_complete                :    1;  /*The raw interrupt status of the I2C_TRANS_COMPLETE_INT interrupt. */
            uint32_t time_out                      :    1;  /*The raw interrupt status of the I2C_TIME_OUT_INT interrupt. */
            uint32_t trans_start                   :    1;  /*The raw interrupt status of the I2C_TRANS_START_INT interrupt. */
            uint32_t nack                          :    1;  /*The raw interrupt status of I2C_SLAVE_STRETCH_INT interrupt. */
            uint32_t tx_fifo_ovf                   :    1;  /*The raw interrupt status of I2C_TXFIFO_OVF_INT interrupt. */
            uint32_t rx_fifo_udf                   :    1;  /*The raw interrupt status of I2C_RXFIFO_UDF_INT  interrupt. */
            uint32_t scl_st_to                     :    1;  /*The raw interrupt status of I2C_SCL_ST_TO_INT interrupt. */
            uint32_t scl_main_st_to                :    1;  /*The raw interrupt status of I2C_SCL_MAIN_ST_TO_INT interrupt. */
            uint32_t det_start                     :    1;  /*The raw interrupt status of I2C_DET_START_INT interrupt. */
            uint32_t slave_stretch                 :    1;  /*The raw interrupt status of I2C_SLAVE_STRETCH_INT interrupt. */
            uint32_t general_call                  :    1;  /*The raw interrupt status of I2C_GENARAL_CALL_INT interrupt. */
            uint32_t addr_unmatch                  :    1;  /*The raw interrupt status of I2C_SLAVE_ADDR_UNMATCH_INT_RAW interrupt. */
            uint32_t reserved19                    :    13;  /*Reserved*/
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t rx_fifo_wm                    :    1;  /*Write 1 to clear I2C_RXFIFO_WM_INT interrupt. */
            uint32_t tx_fifo_wm                    :    1;  /*Write 1 to clear I2C_TXFIFO_WM_INT interrupt. */
            uint32_t rx_fifo_ovf                   :    1;  /*Write 1 to clear I2C_RXFIFO_OVF_INT interrupt. */
            uint32_t end_detect                    :    1;  /*Write 1 to clear the I2C_END_DETECT_INT interrupt. */
            uint32_t byte_trans_done               :    1;  /*Write 1 to clear the I2C_END_DETECT_INT interrupt. */
            uint32_t arbitration_lost              :    1;  /*Write 1 to clear the I2C_ARBITRATION_LOST_INT interrupt. */
            uint32_t mst_tx_fifo_udf               :    1;  /*Write 1 to clear I2C_TRANS_COMPLETE_INT interrupt. */
            uint32_t trans_complete                :    1;  /*Write 1 to clear the I2C_TRANS_COMPLETE_INT interrupt. */
            uint32_t time_out                      :    1;  /*Write 1 to clear the I2C_TIME_OUT_INT interrupt. */
            uint32_t trans_start                   :    1;  /*Write 1 to clear the I2C_TRANS_START_INT interrupt. */
            uint32_t nack                          :    1;  /*Write 1 to clear I2C_SLAVE_STRETCH_INT interrupt. */
            uint32_t tx_fifo_ovf                   :    1;  /*Write 1 to clear I2C_TXFIFO_OVF_INT interrupt. */
            uint32_t rx_fifo_udf                   :    1;  /*Write 1 to clear I2C_RXFIFO_UDF_INT  interrupt. */
            uint32_t scl_st_to                     :    1;  /*Write 1 to clear I2C_SCL_ST_TO_INT interrupt. */
            uint32_t scl_main_st_to                :    1;  /*Write 1 to clear I2C_SCL_MAIN_ST_TO_INT interrupt. */
            uint32_t det_start                     :    1;  /*Write 1 to clear I2C_DET_START_INT interrupt. */
            uint32_t slave_stretch                 :    1;  /*Write 1 to clear I2C_SLAVE_STRETCH_INT interrupt. */
            uint32_t general_call                  :    1;  /*Write 1 to clear I2C_GENARAL_CALL_INT interrupt. */
            uint32_t addr_unmatch                  :    1;  /*Write 1 to clear I2C_SLAVE_ADDR_UNMATCH_INT_RAW interrupt. */
            uint32_t reserved19                    :    13;  /*Reserved*/
        };
        uint32_t val;
    } int_clr;
    union {
        struct {
            uint32_t rx_fifo_wm                    :    1;  /*Write 1 to enable I2C_RXFIFO_WM_INT interrupt. */
            uint32_t tx_fifo_wm                    :    1;  /*Write 1 to enable I2C_TXFIFO_WM_INT interrupt. */
            uint32_t rx_fifo_ovf                   :    1;  /*Write 1 to enable I2C_RXFIFO_OVF_INT interrupt. */
            uint32_t end_detect                    :    1;  /*Write 1 to enable the I2C_END_DETECT_INT interrupt. */
            uint32_t byte_trans_done               :    1;  /*Write 1 to enable the I2C_END_DETECT_INT interrupt. */
            uint32_t arbitration_lost              :    1;  /*Write 1 to enable the I2C_ARBITRATION_LOST_INT interrupt. */
            uint32_t mst_tx_fifo_udf               :    1;  /*Write 1 to enable I2C_TRANS_COMPLETE_INT interrupt. */
            uint32_t trans_complete                :    1;  /*Write 1 to enable the I2C_TRANS_COMPLETE_INT interrupt. */
            uint32_t time_out                      :    1;  /*Write 1 to enable the I2C_TIME_OUT_INT interrupt. */
            uint32_t trans_start                   :    1;  /*Write 1 to enable the I2C_TRANS_START_INT interrupt. */
            uint32_t nack                          :    1;  /*Write 1 to enable I2C_SLAVE_STRETCH_INT interrupt. */
            uint32_t tx_fifo_ovf                   :    1;  /*Write 1 to enable I2C_TXFIFO_OVF_INT interrupt. */
            uint32_t rx_fifo_udf                   :    1;  /*Write 1 to enable I2C_RXFIFO_UDF_INT  interrupt. */
            uint32_t scl_st_to                     :    1;  /*Write 1 to enable I2C_SCL_ST_TO_INT interrupt. */
            uint32_t scl_main_st_to                :    1;  /*Write 1 to enable I2C_SCL_MAIN_ST_TO_INT interrupt. */
            uint32_t det_start                     :    1;  /*Write 1 to enable I2C_DET_START_INT interrupt. */
            uint32_t slave_stretch                 :    1;  /*Write 1 to enable I2C_SLAVE_STRETCH_INT interrupt. */
            uint32_t general_call                  :    1;  /*Write 1 to enable I2C_GENARAL_CALL_INT interrupt. */
            uint32_t addr_unmatch                  :    1;  /*Write 1 to enable I2C_SLAVE_ADDR_UNMATCH_INT interrupt. */
            uint32_t reserved19                    :    13;  /*Reserved*/
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t rx_fifo_wm                    :    1;  /*The masked interrupt status status of I2C_RXFIFO_WM_INT interrupt. */
            uint32_t tx_fifo_wm                    :    1;  /*The masked interrupt status status of I2C_TXFIFO_WM_INT interrupt. */
            uint32_t rx_fifo_ovf                   :    1;  /*The masked interrupt status status of I2C_RXFIFO_OVF_INT interrupt. */
            uint32_t end_detect                    :    1;  /*The masked interrupt status status of the I2C_END_DETECT_INT interrupt. */
            uint32_t byte_trans_done               :    1;  /*The masked interrupt status status of the I2C_END_DETECT_INT interrupt. */
            uint32_t arbitration_lost              :    1;  /*The masked interrupt status status of the I2C_ARBITRATION_LOST_INT interrupt. */
            uint32_t mst_tx_fifo_udf               :    1;  /*The masked interrupt status status of I2C_TRANS_COMPLETE_INT interrupt. */
            uint32_t trans_complete                :    1;  /*The masked interrupt status status of the I2C_TRANS_COMPLETE_INT interrupt. */
            uint32_t time_out                      :    1;  /*The masked interrupt status status of the I2C_TIME_OUT_INT interrupt. */
            uint32_t trans_start                   :    1;  /*The masked interrupt status status of the I2C_TRANS_START_INT interrupt. */
            uint32_t nack                          :    1;  /*The masked interrupt status status of I2C_SLAVE_STRETCH_INT interrupt. */
            uint32_t tx_fifo_ovf                   :    1;  /*The masked interrupt status status of I2C_TXFIFO_OVF_INT interrupt. ; */
            uint32_t rx_fifo_udf                   :    1;  /*The masked interrupt status status of I2C_RXFIFO_UDF_INT  interrupt. */
            uint32_t scl_st_to                     :    1;  /*The masked interrupt status status of I2C_SCL_ST_TO_INT interrupt. */
            uint32_t scl_main_st_to                :    1;  /*The masked interrupt status status of I2C_SCL_MAIN_ST_TO_INT interrupt. */
            uint32_t det_start                     :    1;  /*The masked interrupt status status of I2C_DET_START_INT interrupt. */
            uint32_t slave_stretch                 :    1;  /*The masked interrupt status status of I2C_SLAVE_STRETCH_INT interrupt. */
            uint32_t general_call                  :    1;  /*The masked interrupt status status of I2C_GENARAL_CALL_INT interrupt. */
            uint32_t addr_unmatch                  :    1;  /*The masked interrupt status status of I2C_SLAVE_ADDR_UNMATCH_INT interrupt. */
            uint32_t reserved19                    :    13;  /*Reserved*/
        };
        uint32_t val;
    } int_status;
    union {
        struct {
            uint32_t time                          :    9;  /*Configures the time to hold the data after the falling edge of SCL.\\; Measurement unit: i2c_sclk \\ */
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } sda_hold;
    union {
        struct {
            uint32_t time                          :    9;  /*Configures the time for sampling SDA.\\; Measurement unit: i2c_sclk \\ */
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } sda_sample;
    union {
        struct {
            uint32_t period                        :    9;  /*Configures for how long SCL remains high in master mode.\\; Measurement unit: i2c_sclk \\ */
            uint32_t scl_wait_high_period          :    7;  /*Configures the SCL_FSM's waiting period for SCL high level in master mode.\\; Measurement unit: i2c_sclk \\ */
            uint32_t reserved16                    :    16;  /*Reserved*/
        };
        uint32_t val;
    } scl_high_period;
    uint32_t reserved_3c;
    union {
        struct {
            uint32_t time                          :    9;  /*Configures the time between the falling edge of SDA and the falling edge of SCL for a START condition.\\; Measurement unit: i2c_sclk \\ */
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } scl_start_hold;
    union {
        struct {
            uint32_t time                          :    9;  /*Configures the time between the positive edge of SCL and the negative edge of SDA for a RESTART condition.\\; Measurement unit: i2c_sclk \\ */
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } scl_rstart_setup;
    union {
        struct {
            uint32_t time                          :    9;  /*Configures the delay after the STOP condition.\\; Measurement unit: i2c_sclk \\ */
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } scl_stop_hold;
    union {
        struct {
            uint32_t time                          :    9;  /*This register is used to configure the time between the positive edgeof SCL and the positive edge of SDA, in I2C module clock cycles. */
            uint32_t reserved9                     :    23;  /*Reserved*/
        };
        uint32_t val;
    } scl_stop_setup;
    union {
        struct {
            uint32_t scl_thres                     :    4;  /*Configures the threshold pulse width to be filtered on SCL. When a pulse on the SCL input has smaller width than this register value, the I2C controller will ignore that pulse. ; Measurement unit: i2c_sclk \\ */
            uint32_t sda_thres                     :    4;  /*Configures the threshold pulse width to be filtered on SDA. When a pulse on the SDA input has smaller width than this register value, the I2C controller will ignore that pulse. ; Measurement unit: i2c_sclk \\ */
            uint32_t scl_en                        :    1;  /*Configures to enable the filter function for SCL. \\; 0: No effect \\; 1: Enable \\ */
            uint32_t sda_en                        :    1;  /*Configures to enable the filter function for SDA. \\; 0: No effect \\; 1: Enable \\ */
            uint32_t reserved10                    :    22;  /*Reserved*/
        };
        uint32_t val;
    } filter_cfg;
    union {
        struct {
            uint32_t sclk_div_num                  :    8;  /*the integral part of the fractional divisor for i2c module*/
            uint32_t sclk_div_a                    :    6;  /*the numerator of the fractional part of the fractional divisor for i2c module*/
            uint32_t sclk_div_b                    :    6;  /*the denominator of the fractional part of the fractional divisor for i2c module*/
            uint32_t sclk_sel                      :    1;  /*The clock selection for i2c module:0-XTAL,1-CLK_8MHz.*/
            uint32_t sclk_active                   :    1;  /*The clock switch for i2c module*/
            uint32_t reserved22                    :    10;  /*Reserved*/
        };
        uint32_t val;
    } clk_conf;
    union {
        struct {
            uint32_t command0                      :    14;  /*Configures command 0. \\; It consists of three parts:\\ ; op_code is the command\\; 1: WRITE\\; 2: STOP\\; 3: READ\\; 4: END\\; 6: RSTART\\; Byte_num represents the number of bytes that need to be sent or received.\\; ack_check_en, ack_exp and ack are used to control the ACK bit. See I2C cmd structure <a href=fig:i2c-cmd-structure">link</a> for more information. \\\tododone{for CJ, please add a hyperlink for I2C CMD structure.CJ: done.}"*/
            uint32_t reserved14                    :    17;  /*Reserved*/
            uint32_t command0_done                 :    1;  /*Represents whether command 0 is done in I2C Master mode.\\; 0: Not done \\; 1: Done \\ */
        };
        uint32_t val;
    } comd0;
    union {
        struct {
            uint32_t command1                      :    14;  /*Configures command 1.\\ ; See details in I2C_CMD0_REG[13:0]. */
            uint32_t reserved14                    :    17;  /*Reserved*/
            uint32_t command1_done                 :    1;  /*Represents whether command 1 is done in I2C Master mode.\\; 0: Not done \\; 1: Done \\ */
        };
        uint32_t val;
    } comd1;
    union {
        struct {
            uint32_t command2                      :    14;  /*Configures command 2. See details in I2C_CMD0_REG[13:0]. */
            uint32_t reserved14                    :    17;  /*Reserved*/
            uint32_t command2_done                 :    1;  /*Represents whether command 2 is done in I2C Master mode.\\; 0: Not done \\; 1: Done \\ */
        };
        uint32_t val;
    } comd2;
    union {
        struct {
            uint32_t command3                      :    14;  /*Configures command 3. See details in I2C_CMD0_REG[13:0]. */
            uint32_t reserved14                    :    17;  /*Reserved*/
            uint32_t command3_done                 :    1;  /*Represents whether command 3 is done in I2C Master mode.\\; 0: Not done \\; 1: Done \\ */
        };
        uint32_t val;
    } comd3;
    union {
        struct {
            uint32_t command4                      :    14;  /*Configures command 4. See details in I2C_CMD0_REG[13:0]. */
            uint32_t reserved14                    :    17;  /*Reserved*/
            uint32_t command4_done                 :    1;  /*Represents whether command 4 is done in I2C Master mode.\\; 0: Not done \\; 1: Done \\ */
        };
        uint32_t val;
    } comd4;
    union {
        struct {
            uint32_t command5                      :    14;  /*Configures command 5. See details in I2C_CMD0_REG[13:0]. */
            uint32_t reserved14                    :    17;  /*Reserved*/
            uint32_t command5_done                 :    1;  /*Represents whether command 5 is done in I2C Master mode.\\; 0: Not done \\; 1: Done \\ */
        };
        uint32_t val;
    } comd5;
    union {
        struct {
            uint32_t command6                      :    14;  /*Configures command 6. See details in I2C_CMD0_REG[13:0]. */
            uint32_t reserved14                    :    17;  /*Reserved*/
            uint32_t command6_done                 :    1;  /*Represents whether command 6 is done in I2C Master mode.\\; 0: Not done \\; 1: Done \\ */
        };
        uint32_t val;
    } comd6;
    union {
        struct {
            uint32_t command7                      :    14;  /*Configures command 7. See details in I2C_CMD0_REG[13:0]. */
            uint32_t reserved14                    :    17;  /*Reserved*/
            uint32_t command7_done                 :    1;  /*Represents whether command 7 is done in I2C Master mode.\\; 0: Not done \\; 1: Done \\ */
        };
        uint32_t val;
    } comd7;
    union {
        struct {
            uint32_t scl_st_to                     :    5;  /*Configures the threshold value of SCL_FSM state unchanged period. It should be no more than 23.\\; Measurement unit: i2c_sclk \\ */
            uint32_t reserved5                     :    27;  /*Reserved*/
        };
        uint32_t val;
    } scl_st_time_out;
    union {
        struct {
            uint32_t scl_main_st_to                :    5;  /*Configures the threshold value of SCL_MAIN_FSM state unchanged period. It should be no more than 23.\\; Measurement unit: i2c_sclk \\ */
            uint32_t reserved5                     :    27;  /*Reserved*/
        };
        uint32_t val;
    } scl_main_st_time_out;
    union {
        struct {
            uint32_t scl_rst_slv_en                :    1;  /*Configures to send out SCL pulses when I2C master is IDLE. The number of pulses equals to I2C_SCL_RST_SLV_NUM[4:0]. */
            uint32_t scl_rst_slv_num               :    5;  /*Configure the pulses of SCL generated in I2C master mode. \\; Valid when I2C_SCL_RST_SLV_EN is 1.\\; Measurement unit: i2c_sclk \\ */
            uint32_t scl_pd_en                     :    1;  /*Configures to power down the I2C output SCL line. \\; 0: Not power down.\\; 1: Not work and power down.\\; Valid only when I2C_SCL_FORCE_OUT is 1. */
            uint32_t sda_pd_en                     :    1;  /*Configures to power down the I2C output SDA line. \\; 0: Not power down.\\; 1: Not work and power down.\\; Valid only when I2C_SDA_FORCE_OUT is 1. */
            uint32_t reserved8                     :    24;  /*Reserved*/
        };
        uint32_t val;
    } scl_sp_conf;
    union {
        struct {
            uint32_t stretch_protect_num           :    10;  /*Configures the time period to release the SCL line from stretching to avoid timing violation. Usually it should be larger than the SDA setup time.\\; Measurement unit: i2c_sclk \\ */
            uint32_t slave_scl_stretch_en          :    1;  /*Configures to enable slave SCL stretch function. The SCL output line will be stretched low when I2C_SLAVE_SCL_STRETCH_EN is 1 and stretch event happens. The stretch cause can be seen in I2C_STRETCH_CAUSE.\\; 0: Disable \\; 1: Enable \\;  */
            uint32_t slave_scl_stretch_clr         :    1;  /*Configures to clear the I2C slave SCL stretch function.\\; 0: No effect \\; 1: Clear\\ */
            uint32_t slave_byte_ack_ctl_en         :    1;  /*Configures to enable the function for slave to control ACK level.\\; 0: Disable \\; 1: Enable \\ */
            uint32_t slave_byte_ack_level          :    1;  /*Set the ACK level when slave controlling ACK level function enables.\\; 0: Low level\\; 1: High level \\*/
            uint32_t reserved14                    :    18;  /*Reserved*/
        };
        uint32_t val;
    } scl_stretch_conf;
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
    uint32_t date;
    uint32_t reserved_fc;
    uint32_t txfifo_start_addr;
    uint32_t reserved_104;
    uint32_t reserved_108;
    uint32_t reserved_10c;
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
    uint32_t reserved_140;
    uint32_t reserved_144;
    uint32_t reserved_148;
    uint32_t reserved_14c;
    uint32_t reserved_150;
    uint32_t reserved_154;
    uint32_t reserved_158;
    uint32_t reserved_15c;
    uint32_t reserved_160;
    uint32_t reserved_164;
    uint32_t reserved_168;
    uint32_t reserved_16c;
    uint32_t reserved_170;
    uint32_t reserved_174;
    uint32_t reserved_178;
    uint32_t reserved_17c;
    uint32_t rxfifo_start_addr;
} i2c_dev_t;
extern i2c_dev_t I2C0;
extern i2c_dev_t I2C1;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_I2C_STRUCT_H_ */
