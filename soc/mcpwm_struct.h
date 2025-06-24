/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_MCPWM_STRUCT_H_
#define _SOC_MCPWM_STRUCT_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

typedef volatile struct {
    struct {
        union {
            struct {
                uint32_t prescale                      :    8;  /*Configures the prescaler value of timer$n, so that the period of PT0_clk = Period of PWM_clk * (PWM_TIMER$n_PRESCALE + 1)*/
                uint32_t period                        :    16;  /*Configures the period shadow of PWM timer$n*/
                uint32_t upmethod                      :    2;  /*Configures the update method for active register of PWM timer$n period.\\0: Immediate\\1: TEZ\\2: Sync\\3: TEZ or sync\\TEZ here and below means timer equal zero event*/
                uint32_t reserved26                    :    6;  /*reserved*/
            };
            uint32_t val;
        } cfg0;
        union {
            struct {
                uint32_t start                         :    3;  /*Configures whether or not to start/stop PWM timer$n.\\0: If PWM timer$n starts, then stops at TEZ\\1: If timer$n starts, then stops at TEP\\2: PWM timer$n starts and runs on\\3: Timer$n starts and stops at the next TEZ\\4: Timer0 starts and stops at the next TEP.\\TEP here and below means the event that happens when the timer equals to period*/
                uint32_t mod                           :    2;  /*Configures the working mode of PWM timer$n.\\0: Freeze\\1: Increase mode\\2: Decrease mode\\3: Up-down mode*/
                uint32_t reserved5                     :    27;  /*reserved*/
            };
            uint32_t val;
        } cfg1;
        union {
            struct {
                uint32_t synci_en                      :    1;  /*Configures whether or not to enable timer$n reloading with phase on sync input event is enabled.\\0: Disable\\1: Enable*/
                uint32_t sync_sw                       :    1;  /*Configures the generation of software sync. Toggling this bit will trigger a software sync.*/
                uint32_t synco_sel                     :    2;  /*Configures the selection of PWM timer$n sync_out.\\0: Sync_in\\1: TEZ\\2: TEP\\3: Invalid, sync_out selects noting*/
                uint32_t phase                         :    16;  /*Configures the phase for timer$n reload on sync event.*/
                uint32_t phase_direction               :    1;  /*Configures the PWM timer$n's direction when timer$n mode is up-down mode.\\0: Increase\\1: Decrease*/
                uint32_t reserved21                    :    11;  /*reserved*/
            };
            uint32_t val;
        } sync;
        union {
            struct {
                uint32_t value                         :    16;  /*Represents current PWM timer$n counter value.*/
                uint32_t direction                     :    1;  /*Represents current PWM timer$n counter direction.\\0: Increment\\1: Decrement*/
                uint32_t reserved17                    :    15;  /*reserved*/
            };
            uint32_t val;
        } status;
    } timer[3];
    union {
        struct {
            uint32_t t0_in_sel                     :    3;  /*Configures the selection of sync input for PWM timer$n.\\1: PWM timer0 sync_out\\2: PWM timer1 sync_out\\3: PWM timer2 sync_out\\4: SYNC0 from GPIO matrix\\5: SYNC1 from GPIO matrix\\6: SYNC2 from GPIO matrix\\Other values: No sync input selected*/
            uint32_t t1_in_sel                     :    3;  /*Configures the selection of sync input for PWM timer$n.\\1: PWM timer0 sync_out\\2: PWM timer1 sync_out\\3: PWM timer2 sync_out\\4: SYNC0 from GPIO matrix\\5: SYNC1 from GPIO matrix\\6: SYNC2 from GPIO matrix\\Other values: No sync input selected*/
            uint32_t t2_in_sel                     :    3;  /*Configures the selection of sync input for PWM timer$n.\\1: PWM timer0 sync_out\\2: PWM timer1 sync_out\\3: PWM timer2 sync_out\\4: SYNC0 from GPIO matrix\\5: SYNC1 from GPIO matrix\\6: SYNC2 from GPIO matrix\\Other values: No sync input selected*/
            uint32_t ext_in0_inv                   :    1;  /*Configures whether or not to invert SYNC$n from GPIO matrix.\\0: Not invert\\1: Invert*/
            uint32_t ext_in1_inv                   :    1;  /*Configures whether or not to invert SYNC$n from GPIO matrix.\\0: Not invert\\1: Invert*/
            uint32_t ext_in2_inv                   :    1;  /*Configures whether or not to invert SYNC$n from GPIO matrix.\\0: Not invert\\1: Invert*/
            uint32_t reserved12                    :    20;  /*reserved*/
        };
        uint32_t val;
    } timer_synci_cfg;
    union {
        struct {
            uint32_t operator0_sel                 :    2;  /*Configures which PWM timer will be the timing reference for PWM operator$n.\\0: Timer0\\1: Timer1\\2: Timer2\\3: Invalid, will select timer2*/
            uint32_t operator1_sel                 :    2;  /*Configures which PWM timer will be the timing reference for PWM operator$n.\\0: Timer0\\1: Timer1\\2: Timer2\\3: Invalid, will select timer2*/
            uint32_t operator2_sel                 :    2;  /*Configures which PWM timer will be the timing reference for PWM operator$n.\\0: Timer0\\1: Timer1\\2: Timer2\\3: Invalid, will select timer2*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } timer_sel;
    struct {
        union {
            struct {
                uint32_t a_upmethod                    :    4;  /*Configures the update method for PWM generator $n time stamp A's active register.\\0: Immediately\\Bit0 is set to 1: TEZ\\Bit1 is set to 1: TEP\\Bit2 is set to 1: Sync\\Bit3 is set to 1: Disable the update*/
                uint32_t b_upmethod                    :    4;  /*Configures the update method for PWM generator $n time stamp B's active register.\\0: Immediately\\Bit0 is set to 1: TEZ\\Bit1 is set to 1: TEP\\Bit2 is set to 1: Sync\\Bit3 is set to 1: Disable the update*/
                uint32_t a_shdw_full                   :    1;  /*Represents whether or not generator$n time stamp A's shadow reg is transferred.\\0: A's active reg has been updated with shadow register latest value.\\1: A's shadow reg is filled and waiting to be transferred to A's active reg*/
                uint32_t b_shdw_full                   :    1;  /*Represents whether or not generator$n time stamp B's shadow reg is transferred.\\0: B's active reg has been updated with shadow register latest value.\\1: B's shadow reg is filled and waiting to be transferred to B's active reg*/
                uint32_t reserved10                    :    22;  /*reserved*/
            };
            uint32_t val;
        } cmpr_cfg;
        union {
            struct {
                uint32_t cmpr_val                      :    16;  /*Configures the value of PWM generator $n time stamp A's shadow register.*/
                uint32_t reserved16                    :    16;  /*reserved*/
            };
            uint32_t val;
        } cmpr_value[2];
        union {
            struct {
                uint32_t cfg_upmethod                  :    4;  /*Configures update method for PWM generator $n's active register.\\0: Immediately\\Bit0 is set to 1: TEZ\\Bit1 is set to 1: TEP\\Bit2 is set to 1: Sync\\Bit3 is set to 1: Disable the update*/
                uint32_t t0_sel                        :    3;  /*Configures source selection for PWM generator $n event_t0, take effect immediately.\\0: fault_event0\\1: fault_event1\\2: fault_event2\\3: sync_taken\\4: Invalid, Select nothing*/
                uint32_t t1_sel                        :    3;  /*Configures source selection for PWM generator $n event_t1, take effect immediately.\\0: fault_event0\\1: fault_event1\\2: fault_event2\\3: sync_taken\\4: Invalid, Select nothing*/
                uint32_t reserved10                    :    22;  /*reserved*/
            };
            uint32_t val;
        } gen_cfg0;
        union {
            struct {
                uint32_t cntuforce_upmethod            :    6;  /*Configures update method for continuous software force of PWM generator$n.\\0: Immediately\\Bit0 is set to 1: TEZ\\Bit1 is set to 1: TEP\\Bit2 is set to 1: TEA\\Bit3 is set to 1: TEB\\Bit4 is set to 1: Sync\\Bit5 is set to 1: Disable update. TEA/B here and below means an event generated when the timer's value equals to that of register A/B.*/
                uint32_t a_cntuforce_mode              :    2;  /*Configures continuous software force mode for PWM$n A.\\0: Disabled\\1: Low\\2: High\\3: Disabled*/
                uint32_t b_cntuforce_mode              :    2;  /*Configures continuous software force mode for PWM$n B.\\0: Disabled\\1: Low\\2: High\\3: Disabled*/
                uint32_t a_nciforce                    :    1;  /*Configures the generation of non-continuous immediate software-force event for PWM$n A, a toggle will trigger a force event.*/
                uint32_t a_nciforce_mode               :    2;  /*Configures non-continuous immediate software force mode for PWM$n A.\\0: Disabled\\1: Low\\2: High\\3: Disabled*/
                uint32_t b_nciforce                    :    1;  /*Configures the generation of non-continuous immediate software-force event for PWM$n B, a toggle will trigger a force event.*/
                uint32_t b_nciforce_mode               :    2;  /*Configures non-continuous immediate software force mode for PWM$n B.\\0: Disabled\\1: Low\\2: High\\3: Disabled*/
                uint32_t reserved16                    :    16;  /*reserved*/
            };
            uint32_t val;
        } gen_force;
        union {
            struct {
                uint32_t utez                          :    2;  /*Configures action on PWM$n A triggered by event TEZ when timer increasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t utep                          :    2;  /*Configures action on PWM$n A triggered by event TEP when timer increasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t utea                          :    2;  /*Configures action on PWM$n A triggered by event TEA when timer increasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t uteb                          :    2;  /*Configures action on PWM$n A triggered by event TEB when timer increasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t ut0                           :    2;  /*Configures action on PWM$n A triggered by event_t0 when timer increasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t ut1                           :    2;  /*Configures action on PWM$n A triggered by event_t1 when timer increasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t dtez                          :    2;  /*Configures action on PWM$n A triggered by event TEZ when timer decreasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t dtep                          :    2;  /*Configures action on PWM$n A triggered by event TEP when timer decreasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t dtea                          :    2;  /*Configures action on PWM$n A triggered by event TEA when timer decreasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t dteb                          :    2;  /*Configures action on PWM$n A triggered by event TEB when timer decreasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t dt0                           :    2;  /*Configures action on PWM$n A triggered by event_t0 when timer decreasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t dt1                           :    2;  /*Configures action on PWM$n A triggered by event_t1 when timer decreasing.\\0: No change\\1: Low\\2: High\\3: Toggle*/
                uint32_t reserved24                    :    8;  /*reserved*/
            };
            uint32_t val;
        } generator[2];
        union {
            struct {
                uint32_t fed_upmethod                  :    4;  /*Configures update method for FED (Falling edge delay) active register.\\0: Immediate\\Bit0 is set to 1: TEZ\\Bit1 is set to 1: TEP\\Bit2 is set to 1: Sync\\Bit3 is set to 1: Disable the update*/
                uint32_t red_upmethod                  :    4;  /*Configures update method for RED (rising edge delay) active register.\\0: Immediate\\Bit0 is set to 1: TEZ\\Bit1 is set to 1: TEP\\Bit2 is set to 1: Sync\\Bit3 is set to 1: Disable the update*/
                uint32_t deb_mode                      :    1;  /*Configures S8 in table, dual-edge B mode.\\0: fed/red take effect on different path separately\\1: fed/red take effect on B path, A out is in bypass or dulpB mode*/
                uint32_t a_outswap                     :    1;  /*Configures S6 in table.*/
                uint32_t b_outswap                     :    1;  /*Configures S7 in table.*/
                uint32_t red_insel                     :    1;  /*Configures S4 in table.*/
                uint32_t fed_insel                     :    1;  /*Configures S5 in table.*/
                uint32_t red_outinvert                 :    1;  /*Configures S2 in table.*/
                uint32_t fed_outinvert                 :    1;  /*Configures S3 in table.*/
                uint32_t a_outbypass                   :    1;  /*Configures S1 in table.*/
                uint32_t b_outbypass                   :    1;  /*Configures S0 in table.*/
                uint32_t clk_sel                       :    1;  /*Configures dead time generator $n clock selection.\\0: PWM_clk\\1: PT_clk*/
                uint32_t reserved18                    :    14;  /*reserved*/
            };
            uint32_t val;
        } db_cfg;
        union {
            struct {
                uint32_t fed                           :    16;  /*Configures shadow register for FED.*/
                uint32_t reserved16                    :    16;  /*reserved*/
            };
            uint32_t val;
        } db_fed_cfg;
        union {
            struct {
                uint32_t red                           :    16;  /*Configures shadow register for RED.*/
                uint32_t reserved16                    :    16;  /*reserved*/
            };
            uint32_t val;
        } db_red_cfg;
        union {
            struct {
                uint32_t en                            :    1;  /*Configures whether or not to enable carrier$n.\\0: Bypassed\\1: Enabled*/
                uint32_t prescale                      :    4;  /*Configures the prescale value of PWM carrier$n clock (PC_clk), so that period of PC_clk = period of PWM_clk * (PWM_CARRIER$n_PRESCALE + 1)*/
                uint32_t duty                          :    3;  /*Configures carrier duty. Duty = PWM_CARRIER$n_DUTY / 8*/
                uint32_t oshtwth                       :    4;  /*Configures width of the first pulse. Measurement unit: Periods of the carrier.*/
                uint32_t out_invert                    :    1;  /*Configures whether or not to invert the output of PWM$n A and PWM$n B for this submodule.\\0: Normal\\1: Invert*/
                uint32_t in_invert                     :    1;  /*Configures whether or not to invert the input of PWM$n A and PWM$n B for this submodule.\\0: Normal\\1: Invert*/
                uint32_t reserved14                    :    18;  /*reserved*/
            };
            uint32_t val;
        } carrier_cfg;
        union {
            struct {
                uint32_t sw_cbc                        :    1;  /*Configures whether or not to enable software force cycle-by-cycle mode action.\\0: Disable\\1: Enable*/
                uint32_t f2_cbc                        :    1;  /*Configures whether or not event_f2 will trigger cycle-by-cycle mode action.\\0: Disable\\1: Enable*/
                uint32_t f1_cbc                        :    1;  /*Configures whether or not event_f1 will trigger cycle-by-cycle mode action.\\0: Disable\\1: Enable*/
                uint32_t f0_cbc                        :    1;  /*Configures whether or not event_f0 will trigger cycle-by-cycle mode action.\\0: Disable\\1: Enable*/
                uint32_t sw_ost                        :    1;  /*Configures whether or not to enable software force one-shot mode action.\\0: Disable\\1: Enable*/
                uint32_t f2_ost                        :    1;  /*Configures whether or not event_f2 will trigger one-shot mode action.\\0: Disable\\1: Enable*/
                uint32_t f1_ost                        :    1;  /*Configures whether or not event_f1 will trigger one-shot mode action.\\0: Disable\\1: Enable*/
                uint32_t f0_ost                        :    1;  /*Configures whether or not event_f0 will trigger one-shot mode action.\\0: Disable\\1: Enable*/
                uint32_t a_cbc_d                       :    2;  /*Configures cycle-by-cycle mode action on PWM$n A when fault event occurs and timer is decreasing.\\0: Do nothing\\1: Force low\\2: Force high\\3: Toggle*/
                uint32_t a_cbc_u                       :    2;  /*Configures cycle-by-cycle mode action on PWM$n A when fault event occurs and timer is increasing.\\0: Do nothing\\1: Force low\\2: Force high\\3: Toggle*/
                uint32_t a_ost_d                       :    2;  /*Configures one-shot mode action on PWM$n A when fault event occurs and timer is decreasing.\\0: Do nothing\\1: Force low\\2: Force high\\3: Toggle*/
                uint32_t a_ost_u                       :    2;  /*Configures one-shot mode action on PWM$n A when fault event occurs and timer is increasing.\\0: Do nothing\\1: Force low\\2: Force high\\3: Toggle*/
                uint32_t b_cbc_d                       :    2;  /*Configures cycle-by-cycle mode action on PWM$n B when fault event occurs and timer is decreasing.\\0: Do nothing\\1: Force low\\2: Force high\\3: Toggle*/
                uint32_t b_cbc_u                       :    2;  /*Configures cycle-by-cycle mode action on PWM$n B when fault event occurs and timer is increasing.\\0: Do nothing\\1: Force low\\2: Force high\\3: Toggle*/
                uint32_t b_ost_d                       :    2;  /*Configures one-shot mode action on PWM$n B when fault event occurs and timer is decreasing.\\0: Do nothing\\1: Force low\\2: Force high\\3: Toggle*/
                uint32_t b_ost_u                       :    2;  /*Configures one-shot mode action on PWM$n B when fault event occurs and timer is increasing.\\0: Do nothing\\1: Force low\\2: Force high\\3: Toggle*/
                uint32_t reserved24                    :    8;  /*reserved*/
            };
            uint32_t val;
        } fh_cfg0;
        union {
            struct {
                uint32_t clr_ost                       :    1;  /*Configures the generation of software one-shot mode action clear. A toggle (software negate its value) triggers a clear for on going one-shot mode action.*/
                uint32_t cbcpulse                      :    2;  /*Configures the refresh moment selection of cycle-by-cycle mode action.\\0: Select nothing, will not refresh\\Bit0 is set to 1: TEZ\\Bit1 is set to 1: TEP*/
                uint32_t force_cbc                     :    1;  /*Configures the generation of software cycle-by-cycle mode action. A toggle (software negate its value) triggers a cycle-by-cycle mode action.*/
                uint32_t force_ost                     :    1;  /*Configures the generation of software one-shot mode action. A toggle (software negate its value) triggers a one-shot mode action.*/
                uint32_t reserved5                     :    27;  /*reserved*/
            };
            uint32_t val;
        } fh_cfg1;
        union {
            struct {
                uint32_t cbc_on                        :    1;  /*Represents whether or not an cycle-by-cycle mode action is on going.\\0:No action\\1: On going*/
                uint32_t ost_on                        :    1;  /*Represents whether or not an one-shot mode action is on going.\\0:No action\\1: On going*/
                uint32_t reserved2                     :    30;  /*reserved*/
            };
            uint32_t val;
        } fh_status;
    } channel[3];
    union {
        struct {
            uint32_t f0_en                         :    1;  /*Configures whether or not to enable event_f$n generation.\\0: Disable\\1: Enable*/
            uint32_t f1_en                         :    1;  /*Configures whether or not to enable event_f$n generation.\\0: Disable\\1: Enable*/
            uint32_t f2_en                         :    1;  /*Configures whether or not to enable event_f$n generation.\\0: Disable\\1: Enable*/
            uint32_t f0_pole                       :    1;  /*Configures event_f$n trigger polarity on FAULT$n source from GPIO matrix.\\0: Level low\\1: Level high*/
            uint32_t f1_pole                       :    1;  /*Configures event_f$n trigger polarity on FAULT$n source from GPIO matrix.\\0: Level low\\1: Level high*/
            uint32_t f2_pole                       :    1;  /*Configures event_f$n trigger polarity on FAULT$n source from GPIO matrix.\\0: Level low\\1: Level high*/
            uint32_t event_f0                      :    1;  /*Represents whether or not an event_f$n is on going.\\0: No action\\1: On going*/
            uint32_t event_f1                      :    1;  /*Represents whether or not an event_f$n is on going.\\0: No action\\1: On going*/
            uint32_t event_f2                      :    1;  /*Represents whether or not an event_f$n is on going.\\0: No action\\1: On going*/
            uint32_t reserved9                     :    23;  /*reserved*/
        };
        uint32_t val;
    } fault_detect;
    union {
        struct {
            uint32_t timer_en                      :    1;  /*Configures whether or not to enable capture timer increment.\\0: Disable\\1: Enable*/
            uint32_t synci_en                      :    1;  /*Configures whether or not to enable capture timer sync.\\0: Disable\\1: Enable*/
            uint32_t synci_sel                     :    3;  /*Configures the selection of capture module sync input.\\0: None\\1: Timer0 sync_out\\2: Timer1 sync_out\\3: Timer2 sync_out\\4: SYNC0 from GPIO matrix\\5: SYNC1 from GPIO matrix\\6: SYNC2 from GPIO matrix\\7: None*/
            uint32_t sync_sw                       :    1;  /*Configures the generation of a capture timer sync when reg_cap_synci_en is 1.\\0: Invalid, No effect\\1: Trigger a capture timer sync, capture timer is loaded with value in phase register*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } cap_timer_cfg;
    uint32_t cap_timer_phase;
    union {
        struct {
            uint32_t en                            :    1;  /*Configures whether or not to enable capture on channel $n.\\0: Disable\\1: Enable*/
            uint32_t mode                          :    2;  /*Configures which edge of capture on channel $n after prescaling is used.\\0: None\\Bit0 is set to 1: Rnable capture on the negative edge\\Bit1 is set to 1: Enable capture on the positive edge*/
            uint32_t prescale                      :    8;  /*Configures prescale value on possitive edge of CAP$n. Prescale value = PWM_CAP$n_PRESCALE + 1*/
            uint32_t in_invert                     :    1;  /*Configures whether or not to invert CAP$n from GPIO matrix before prescale.\\0: Normal\\1: Invert*/
            uint32_t sw                            :    1;  /*Configures the generation of software capture.\\0: Invalid, No effect\\1: Trigger a software forced capture on channel $n*/
            uint32_t reserved13                    :    19;  /*reserved*/
        };
        uint32_t val;
    } cap_cfg_ch[3];
    uint32_t cap_val_ch[3];
    union {
        struct {
            uint32_t cap0_edge                     :    1;  /*Represents edge of last capture trigger on channel$n.\\0: Posedge\\1: Negedge*/
            uint32_t cap1_edge                     :    1;  /*Represents edge of last capture trigger on channel$n.\\0: Posedge\\1: Negedge*/
            uint32_t cap2_edge                     :    1;  /*Represents edge of last capture trigger on channel$n.\\0: Posedge\\1: Negedge*/
            uint32_t reserved3                     :    29;  /*reserved*/
        };
        uint32_t val;
    } cap_status;
    union {
        struct {
            uint32_t global_up_en                  :    1;  /*Configures whether or not to enable global update for all active registers in MCPWM module.\\0: Disable\\1: Enable*/
            uint32_t global_force_up               :    1;  /*Configures the generation of global forced update for all active registers in MCPWM module. A toggle (software invert its value) will trigger a global forced update. Valid only when MCPWM_GLOBAL_UP_EN and MCPWM_OP0/1/2_UP_EN are both set to 1.*/
            uint32_t op0_up_en                     :    1;  /*Configures whether or not to enable update of active registers in PWM operator$n. Valid only when PWM_GLOBAL_UP_EN is set to 1.\\0: Disable\\1: Enable*/
            uint32_t op0_force_up                  :    1;  /*Configures the generation of forced update for active registers in PWM operator$n. A toggle (software invert its value) will trigger a forced update. Valid only when MCPWM_GLOBAL_UP_EN and MCPWM_OP$n_UP_EN are both set to 1.*/
            uint32_t op1_up_en                     :    1;  /*Configures whether or not to enable update of active registers in PWM operator$n. Valid only when PWM_GLOBAL_UP_EN is set to 1.\\0: Disable\\1: Enable*/
            uint32_t op1_force_up                  :    1;  /*Configures the generation of forced update for active registers in PWM operator$n. A toggle (software invert its value) will trigger a forced update. Valid only when MCPWM_GLOBAL_UP_EN and MCPWM_OP$n_UP_EN are both set to 1.*/
            uint32_t op2_up_en                     :    1;  /*Configures whether or not to enable update of active registers in PWM operator$n. Valid only when PWM_GLOBAL_UP_EN is set to 1.\\0: Disable\\1: Enable*/
            uint32_t op2_force_up                  :    1;  /*Configures the generation of forced update for active registers in PWM operator$n. A toggle (software invert its value) will trigger a forced update. Valid only when MCPWM_GLOBAL_UP_EN and MCPWM_OP$n_UP_EN are both set to 1.*/
            uint32_t reserved8                     :    24;  /*reserved*/
        };
        uint32_t val;
    } update_cfg;
    union {
        struct {
            uint32_t stop_int_ena                  :    1;  /*Enable bit: Write 1 to enable the interrupt triggered when the timer $n stops.*/
            uint32_t timer1_stop_int_ena           :    1;  /*Enable bit: Write 1 to enable the interrupt triggered when the timer $n stops.*/
            uint32_t timer2_stop_int_ena           :    1;  /*Enable bit: Write 1 to enable the interrupt triggered when the timer $n stops.*/
            uint32_t tez_int_ena                   :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t timer1_tez_int_ena            :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t timer2_tez_int_ena            :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t tep_int_ena                   :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t timer1_tep_int_ena            :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t timer2_tep_int_ena            :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t fault0_int_ena                :    1;  /*Enable bit: Write 1 to enable the interrupt triggered when event_f$n starts.*/
            uint32_t fault1_int_ena                :    1;  /*Enable bit: Write 1 to enable the interrupt triggered when event_f$n starts.*/
            uint32_t fault2_int_ena                :    1;  /*Enable bit: Write 1 to enable the interrupt triggered when event_f$n starts.*/
            uint32_t fault0_clr_int_ena            :    1;  /*Enable bit: Write 1 to enable the interrupt triggered when event_f$n clears.*/
            uint32_t fault1_clr_int_ena            :    1;  /*Enable bit: Write 1 to enable the interrupt triggered when event_f$n clears.*/
            uint32_t fault2_clr_int_ena            :    1;  /*Enable bit: Write 1 to enable the interrupt triggered when event_f$n clears.*/
            uint32_t op0_tea_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM operator $n TEA event.*/
            uint32_t op1_tea_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM operator $n TEA event.*/
            uint32_t op2_tea_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM operator $n TEA event.*/
            uint32_t op0_teb_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM operator $n TEB event.*/
            uint32_t op1_teb_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM operator $n TEB event.*/
            uint32_t op2_teb_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a PWM operator $n TEB event.*/
            uint32_t cbc_int_ena                   :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t fh1_cbc_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t fh2_cbc_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t ost_int_ena                   :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t fh1_ost_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t fh2_ost_int_ena               :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t int_ena                       :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by capture on CAP$n.*/
            uint32_t cap1_int_ena                  :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by capture on CAP$n.*/
            uint32_t cap2_int_ena                  :    1;  /*Enable bit: Write 1 to enable the interrupt triggered by capture on CAP$n.*/
            uint32_t reserved30                    :    2;  /*reserved*/
        };
        uint32_t val;
    } int_ena;
    union {
        struct {
            uint32_t stop_int_raw                  :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered when the timer $n stops.*/
            uint32_t timer1_stop_int_raw           :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered when the timer $n stops.*/
            uint32_t timer2_stop_int_raw           :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered when the timer $n stops.*/
            uint32_t tez_int_raw                   :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t timer1_tez_int_raw            :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t timer2_tez_int_raw            :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t tep_int_raw                   :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t timer1_tep_int_raw            :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t timer2_tep_int_raw            :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t fault0_int_raw                :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered when event_f$n starts.*/
            uint32_t fault1_int_raw                :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered when event_f$n starts.*/
            uint32_t fault2_int_raw                :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered when event_f$n starts.*/
            uint32_t fault0_clr_int_raw            :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered when event_f$n clears.*/
            uint32_t fault1_clr_int_raw            :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered when event_f$n clears.*/
            uint32_t fault2_clr_int_raw            :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered when event_f$n clears.*/
            uint32_t op0_tea_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM operator $n TEA event*/
            uint32_t op1_tea_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM operator $n TEA event*/
            uint32_t op2_tea_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM operator $n TEA event*/
            uint32_t op0_teb_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM operator $n TEB event*/
            uint32_t op1_teb_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM operator $n TEB event*/
            uint32_t op2_teb_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a PWM operator $n TEB event*/
            uint32_t cbc_int_raw                   :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t fh1_cbc_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t fh2_cbc_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t ost_int_raw                   :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t fh1_ost_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t fh2_ost_int_raw               :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t int_raw                       :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by capture on CAP$n.*/
            uint32_t cap1_int_raw                  :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by capture on CAP$n.*/
            uint32_t cap2_int_raw                  :    1;  /*Raw status bit: The raw interrupt status of the interrupt triggered by capture on CAP$n.*/
            uint32_t reserved30                    :    2;  /*reserved*/
        };
        uint32_t val;
    } int_raw;
    union {
        struct {
            uint32_t stop_int_st                   :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered when the timer $n stops.*/
            uint32_t timer1_stop_int_st            :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered when the timer $n stops.*/
            uint32_t timer2_stop_int_st            :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered when the timer $n stops.*/
            uint32_t tez_int_st                    :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t timer1_tez_int_st             :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t timer2_tez_int_st             :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t tep_int_st                    :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t timer1_tep_int_st             :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t timer2_tep_int_st             :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t fault0_int_st                 :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered when event_f$n starts.*/
            uint32_t fault1_int_st                 :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered when event_f$n starts.*/
            uint32_t fault2_int_st                 :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered when event_f$n starts.*/
            uint32_t fault0_clr_int_st             :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered when event_f$n clears.*/
            uint32_t fault1_clr_int_st             :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered when event_f$n clears.*/
            uint32_t fault2_clr_int_st             :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered when event_f$n clears.*/
            uint32_t op0_tea_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM operator $n TEA event*/
            uint32_t op1_tea_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM operator $n TEA event*/
            uint32_t op2_tea_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM operator $n TEA event*/
            uint32_t op0_teb_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM operator $n TEB event*/
            uint32_t op1_teb_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM operator $n TEB event*/
            uint32_t op2_teb_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a PWM operator $n TEB event*/
            uint32_t cbc_int_st                    :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t fh1_cbc_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t fh2_cbc_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t ost_int_st                    :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t fh1_ost_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t fh2_ost_int_st                :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t int_st                        :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by capture on CAP$n.*/
            uint32_t cap1_int_st                   :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by capture on CAP$n.*/
            uint32_t cap2_int_st                   :    1;  /*Masked status bit: The masked interrupt status of the interrupt triggered by capture on CAP$n.*/
            uint32_t reserved30                    :    2;  /*reserved*/
        };
        uint32_t val;
    } int_st;
    union {
        struct {
            uint32_t stop_int_clr                  :    1;  /*Clear bit: Write 1 to clear the interrupt triggered when the timer $n stops.*/
            uint32_t timer1_stop_int_clr           :    1;  /*Clear bit: Write 1 to clear the interrupt triggered when the timer $n stops.*/
            uint32_t timer2_stop_int_clr           :    1;  /*Clear bit: Write 1 to clear the interrupt triggered when the timer $n stops.*/
            uint32_t tez_int_clr                   :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t timer1_tez_int_clr            :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t timer2_tez_int_clr            :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM timer $n TEZ event.*/
            uint32_t tep_int_clr                   :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t timer1_tep_int_clr            :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t timer2_tep_int_clr            :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM timer $n TEP event.*/
            uint32_t fault0_int_clr                :    1;  /*Clear bit: Write 1 to clear the interrupt triggered when event_f$n starts.*/
            uint32_t fault1_int_clr                :    1;  /*Clear bit: Write 1 to clear the interrupt triggered when event_f$n starts.*/
            uint32_t fault2_int_clr                :    1;  /*Clear bit: Write 1 to clear the interrupt triggered when event_f$n starts.*/
            uint32_t fault0_clr_int_clr            :    1;  /*Clear bit: Write 1 to clear the interrupt triggered when event_f$n clears.*/
            uint32_t fault1_clr_int_clr            :    1;  /*Clear bit: Write 1 to clear the interrupt triggered when event_f$n clears.*/
            uint32_t fault2_clr_int_clr            :    1;  /*Clear bit: Write 1 to clear the interrupt triggered when event_f$n clears.*/
            uint32_t op0_tea_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM operator $n TEA event*/
            uint32_t op1_tea_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM operator $n TEA event*/
            uint32_t op2_tea_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM operator $n TEA event*/
            uint32_t op0_teb_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM operator $n TEB event*/
            uint32_t op1_teb_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM operator $n TEB event*/
            uint32_t op2_teb_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a PWM operator $n TEB event*/
            uint32_t cbc_int_clr                   :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t fh1_cbc_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t fh2_cbc_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a cycle-by-cycle mode action on PWM$n.*/
            uint32_t ost_int_clr                   :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t fh1_ost_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t fh2_ost_int_clr               :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by a one-shot mode action on PWM$n.*/
            uint32_t int_clr                       :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by capture on CAP$n.*/
            uint32_t cap1_int_clr                  :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by capture on CAP$n.*/
            uint32_t cap2_int_clr                  :    1;  /*Clear bit: Write 1 to clear the interrupt triggered by capture on CAP$n.*/
            uint32_t reserved30                    :    2;  /*reserved*/
        };
        uint32_t val;
    } int_clr;
    union {
        struct {
            uint32_t evt_stop_en                   :    1;  /*Configures whether or not to enable timer$n stop event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_timer1_stop_en            :    1;  /*Configures whether or not to enable timer$n stop event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_timer2_stop_en            :    1;  /*Configures whether or not to enable timer$n stop event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_tez_en                    :    1;  /*Configures whether or not to enable timer$n equal zero event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_timer1_tez_en             :    1;  /*Configures whether or not to enable timer$n equal zero event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_timer2_tez_en             :    1;  /*Configures whether or not to enable timer$n equal zero event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_tep_en                    :    1;  /*Configures whether or not to enable timer$n equal period event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_timer1_tep_en             :    1;  /*Configures whether or not to enable timer$n equal period event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_timer2_tep_en             :    1;  /*Configures whether or not to enable timer$n equal period event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op0_tea_en                :    1;  /*Configures whether or not to enable PWM generator$n timer equal a event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op1_tea_en                :    1;  /*Configures whether or not to enable PWM generator$n timer equal a event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op2_tea_en                :    1;  /*Configures whether or not to enable PWM generator$n timer equal a event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op0_teb_en                :    1;  /*Configures whether or not to enable PWM generator$n timer equal b event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op1_teb_en                :    1;  /*Configures whether or not to enable PWM generator$n timer equal b event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op2_teb_en                :    1;  /*Configures whether or not to enable PWM generator$n timer equal b event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_f0_en                     :    1;  /*Configures whether or not to enable fault$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_f1_en                     :    1;  /*Configures whether or not to enable fault$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_f2_en                     :    1;  /*Configures whether or not to enable fault$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_f0_clr_en                 :    1;  /*Configures whether or not to enable fault$n clear event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_f1_clr_en                 :    1;  /*Configures whether or not to enable fault$n clear event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_f2_clr_en                 :    1;  /*Configures whether or not to enable fault$n clear event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_tz0_cbc_en                :    1;  /*Configures whether or not to enable cycle-by-cycle trip$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_tz1_cbc_en                :    1;  /*Configures whether or not to enable cycle-by-cycle trip$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_tz2_cbc_en                :    1;  /*Configures whether or not to enable cycle-by-cycle trip$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_tz0_ost_en                :    1;  /*Configures whether or not to enable one-shot trip$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_tz1_ost_en                :    1;  /*Configures whether or not to enable one-shot trip$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_tz2_ost_en                :    1;  /*Configures whether or not to enable one-shot trip$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_cap0_en                   :    1;  /*Configures whether or not to enable capture$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_cap1_en                   :    1;  /*Configures whether or not to enable capture$n event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_cap2_en                   :    1;  /*Configures whether or not to enable capture$n event generate.\\0: Disable\\1: Enable*/
            uint32_t reserved30                    :    2;  /*reserved*/
        };
        uint32_t val;
    } evt_en;
    union {
        struct {
            uint32_t task_cmpr0_a_up_en            :    1;  /*Configures whether or not to enable PWM generator$n timer stamp A's shadow register update task receive.\\0: Disable\\1: Enable*/
            uint32_t task_cmpr1_a_up_en            :    1;  /*Configures whether or not to enable PWM generator$n timer stamp A's shadow register update task receive.\\0: Disable\\1: Enable*/
            uint32_t task_cmpr2_a_up_en            :    1;  /*Configures whether or not to enable PWM generator$n timer stamp A's shadow register update task receive.\\0: Disable\\1: Enable*/
            uint32_t task_cmpr0_b_up_en            :    1;  /*Configures whether or not to enable PWM generator$n timer stamp B's shadow register update task receive.\\0: Disable\\1: Enable*/
            uint32_t task_cmpr1_b_up_en            :    1;  /*Configures whether or not to enable PWM generator$n timer stamp B's shadow register update task receive.\\0: Disable\\1: Enable*/
            uint32_t task_cmpr2_b_up_en            :    1;  /*Configures whether or not to enable PWM generator$n timer stamp B's shadow register update task receive.\\0: Disable\\1: Enable*/
            uint32_t task_gen_stop_en              :    1;  /*Configures whether or not to enable all PWM generate stop task receive.\\0: Disable\\1: Enable*/
            uint32_t task_sync_en                  :    1;  /*Configures whether or not to enable timer$n sync task receive.\\0: Disable\\1: Enable*/
            uint32_t task_timer1_sync_en           :    1;  /*Configures whether or not to enable timer$n sync task receive.\\0: Disable\\1: Enable*/
            uint32_t task_timer2_sync_en           :    1;  /*Configures whether or not to enable timer$n sync task receive.\\0: Disable\\1: Enable*/
            uint32_t task_period_up_en             :    1;  /*Configures whether or not to enable timer$n period update task receive.\\0: Disable\\1: Enable*/
            uint32_t task_timer1_period_up_en      :    1;  /*Configures whether or not to enable timer$n period update task receive.\\0: Disable\\1: Enable*/
            uint32_t task_timer2_period_up_en      :    1;  /*Configures whether or not to enable timer$n period update task receive.\\0: Disable\\1: Enable*/
            uint32_t task_tz0_ost_en               :    1;  /*Configures whether or not to enable one shot trip$n task receive.\\0: Disable\\1: Enable*/
            uint32_t task_tz1_ost_en               :    1;  /*Configures whether or not to enable one shot trip$n task receive.\\0: Disable\\1: Enable*/
            uint32_t task_tz2_ost_en               :    1;  /*Configures whether or not to enable one shot trip$n task receive.\\0: Disable\\1: Enable*/
            uint32_t task_clr0_ost_en              :    1;  /*Configures whether or not to enable one shot trip$n clear task receive.\\0: Disable\\1: Enable*/
            uint32_t task_clr1_ost_en              :    1;  /*Configures whether or not to enable one shot trip$n clear task receive.\\0: Disable\\1: Enable*/
            uint32_t task_clr2_ost_en              :    1;  /*Configures whether or not to enable one shot trip$n clear task receive.\\0: Disable\\1: Enable*/
            uint32_t task_cap0_en                  :    1;  /*Configures whether or not to enable capture$n task receive.\\0: Disable\\1: Enable*/
            uint32_t task_cap1_en                  :    1;  /*Configures whether or not to enable capture$n task receive.\\0: Disable\\1: Enable*/
            uint32_t task_cap2_en                  :    1;  /*Configures whether or not to enable capture$n task receive.\\0: Disable\\1: Enable*/
            uint32_t reserved22                    :    10;  /*reserved*/
        };
        uint32_t val;
    } task_en;
    union {
        struct {
            uint32_t evt_op0_tee1_en               :    1;  /*Configures whether or not to enable PWM generator$n timer equal OP$n_TSTMP_E1_REG event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op1_tee1_en               :    1;  /*Configures whether or not to enable PWM generator$n timer equal OP$n_TSTMP_E1_REG event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op2_tee1_en               :    1;  /*Configures whether or not to enable PWM generator$n timer equal OP$n_TSTMP_E1_REG event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op0_tee2_en               :    1;  /*Configures whether or not to enable PWM generator$n timer equal OP$n_TSTMP_E2_REG event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op1_tee2_en               :    1;  /*Configures whether or not to enable PWM generator$n timer equal OP$n_TSTMP_E2_REG event generate.\\0: Disable\\1: Enable*/
            uint32_t evt_op2_tee2_en               :    1;  /*Configures whether or not to enable PWM generator$n timer equal OP$n_TSTMP_E2_REG event generate.\\0: Disable\\1: Enable*/
            uint32_t reserved6                     :    26;  /*reserved*/
        };
        uint32_t val;
    } evt_en2;
    union {
        struct {
            uint32_t op0_tstmp_e1                  :    16;  /*Configures generator$n timer stamp E1 value register*/
            uint32_t reserved16                    :    16;  /*reserved*/
        };
        uint32_t val;
    } op0_tstmp_e1;
    union {
        struct {
            uint32_t op0_tstmp_e2                  :    16;  /*Configures generator$n timer stamp E2 value register*/
            uint32_t reserved16                    :    16;  /*reserved*/
        };
        uint32_t val;
    } op0_tstmp_e2;
    union {
        struct {
            uint32_t op1_tstmp_e1                  :    16;  /*Configures generator$n timer stamp E1 value register*/
            uint32_t reserved16                    :    16;  /*reserved*/
        };
        uint32_t val;
    } op1_tstmp_e1;
    union {
        struct {
            uint32_t op1_tstmp_e2                  :    16;  /*Configures generator$n timer stamp E2 value register*/
            uint32_t reserved16                    :    16;  /*reserved*/
        };
        uint32_t val;
    } op1_tstmp_e2;
    union {
        struct {
            uint32_t op2_tstmp_e1                  :    16;  /*Configures generator$n timer stamp E1 value register*/
            uint32_t reserved16                    :    16;  /*reserved*/
        };
        uint32_t val;
    } op2_tstmp_e1;
    union {
        struct {
            uint32_t op2_tstmp_e2                  :    16;  /*Configures generator$n timer stamp E2 value register*/
            uint32_t reserved16                    :    16;  /*reserved*/
        };
        uint32_t val;
    } op2_tstmp_e2;
    union {
        struct {
            uint32_t clk_en                        :    1;  /*Configures whether or not to open register clock gate.\\0: Open the clock gate only when application writes registers\\1: Force open the clock gate for register*/
            uint32_t reserved1                     :    31;  /*reserved*/
        };
        uint32_t val;
    } clk;
    union {
        struct {
            uint32_t date                          :    28;  /*Configures the version.*/
            uint32_t reserved28                    :    4;  /*reserved*/
        };
        uint32_t val;
    } version;
} mcpwm_dev_t;
extern mcpwm_dev_t MCPWM0;
extern mcpwm_dev_t MCPWM1;
#ifdef __cplusplus
}
#endif



#endif /*_SOC_MCPWM_STRUCT_H_ */
