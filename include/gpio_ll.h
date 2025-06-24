#pragma once
#include "gpio_struct.h"


#ifdef __cplusplus
extern "C" {
#endif


/**
  * @brief Disable input mode on GPIO.
  *
  * @param hw Peripheral GPIO hardware instance address.
  * @param gpio_num GPIO number
  */
// static inline void gpio_ll_input_disable(gpio_dev_t *hw, gpio_num_t gpio_num)
// {
//     PIN_INPUT_DISABLE(GPIO_PIN_MUX_REG[gpio_num]);
// }

/**
  * @brief Enable input mode on GPIO.
  *
  * @param hw Peripheral GPIO hardware instance address.
  * @param gpio_num GPIO number
  */
// static inline void gpio_ll_input_enable(gpio_dev_t *hw, gpio_num_t gpio_num)
// {
//     PIN_INPUT_ENABLE(GPIO_PIN_MUX_REG[gpio_num]);
// }

/**
  * @brief Disable output mode on GPIO.
  *
  * @param hw Peripheral GPIO hardware instance address.
  * @param gpio_num GPIO number
  */
static inline void gpio_ll_output_disable(gpio_dev_t *hw, uint32_t gpio_num)
{
    if (gpio_num < 32) {
        hw->enable_w1tc = (0x1 << gpio_num);
    } else if (gpio_num >= 32 && gpio_num < 64) {
        hw->enable1_w1tc = (0x1 << (gpio_num - 32));
    } else if (gpio_num >= 64 && gpio_num < 96) {
        hw->enable2_w1tc = (0x1 << (gpio_num - 64));
    } else {
        hw->enable3_w1tc = (0x1 << (gpio_num - 96));
    }

    // Ensure no other output signal is routed via GPIO matrix to this pin
    // REG_WRITE(GPIO_FUNC0_OUT_SEL_CFG_REG + (gpio_num * 4),
    //           SIG_GPIO_OUT_IDX);
}

/**
  * @brief Enable output mode on GPIO.
  *
  * @param hw Peripheral GPIO hardware instance address.
  * @param gpio_num GPIO number
  */
static inline void gpio_ll_output_enable(gpio_dev_t *hw, uint32_t gpio_num)
{
    if (gpio_num < 32) {
        hw->enable_w1ts = (0x1 << gpio_num);
    } else if (gpio_num >= 32 && gpio_num < 64) {
        hw->enable1_w1ts = (0x1 << (gpio_num - 32));
    } else if (gpio_num >= 64 && gpio_num < 96) {
        hw->enable2_w1ts = (0x1 << (gpio_num - 64));
    } else {
        hw->enable3_w1ts = (0x1 << (gpio_num - 96));
    }
}

/*
 * set gpio input to a signal
 * one gpio can input to several signals
 * If gpio == 0x3C, cancel input to the signal, input 0 to signal
 * If gpio == 0x38, cancel input to the signal, input 1 to signal, for I2C pad
 */
static inline void gpio_ll_matrix_in(gpio_dev_t *hw, uint32_t io, int sig, bool inv)
{
    hw->func_in_sel_cfg[sig].func_sel = io;
    hw->func_in_sel_cfg[sig].sig_in_inv = inv;
    hw->func_in_sel_cfg[sig].sig_in_sel = 1;
}   

/*
 * set signal output to gpio
 * one signal can output to several gpios
 * If signal_idx == 0x100, cancel output put to the gpio
 */
static inline void gpio_ll_matrix_out(gpio_dev_t *hw, uint32_t io, int sig, bool inv, bool od)
{
    hw->func_out_sel_cfg[io].func_sel = sig;
    hw->func_out_sel_cfg[io].inv_sel = inv;
    hw->func_out_sel_cfg[io].oe_sel = od;
}

#ifdef __cplusplus
}
#endif