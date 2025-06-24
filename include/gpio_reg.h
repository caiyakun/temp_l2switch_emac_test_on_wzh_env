/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_GPIO_REG_H_
#define _SOC_GPIO_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc/soc.h"

#define GPIO_STRAP_REG          (DR_REG_GPIO_BASE + 0x0)
/* GPIO_STRAPPING : RO ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: Represents the values of GPIO strapping pins. (need update the description, for
example); ;     - bit0: invalid;     - bit1: MTMS;     - bit2: MTDI;     - bit3:
 GPIO27;     - bit4: GPIO28;     - bit5: GPIO7;     - bit6 ~ bit15: invalid;.*/
#define GPIO_STRAPPING    0x0000FFFF
#define GPIO_STRAPPING_M  ((GPIO_STRAPPING_V)<<(GPIO_STRAPPING_S))
#define GPIO_STRAPPING_V  0xFFFF
#define GPIO_STRAPPING_S  0

#define GPIO_OUT_REG          (DR_REG_GPIO_BASE + 0x4)
/* GPIO_OUT_DATA : R/W/SC/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the output value of GPIO0 ~ 31 output in simple GPIO output mode.\\;
0: Low level\\; 1: High level\\; The value of bit0 ~ bit31 correspond to the out
put value of GPIO0 ~ GPIO31 respectively. Bitxx ~ bitxx is invalid.\\.*/
#define GPIO_OUT_DATA    0xFFFFFFFF
#define GPIO_OUT_DATA_M  ((GPIO_OUT_DATA_V)<<(GPIO_OUT_DATA_S))
#define GPIO_OUT_DATA_V  0xFFFFFFFF
#define GPIO_OUT_DATA_S  0

#define GPIO_OUT_W1TS_REG          (DR_REG_GPIO_BASE + 0x8)
/* GPIO_OUT_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the output register GPIO_OUT_REG of GPIO0 ~ GPI
O31.\\; 0: Not set\\; 1: The corresponding bit in GPIO_OUT_REG will be set to 1\
\; Bit0 ~ bit31 are corresponding to GPIO0 ~ GPIO31. Bitxx ~ bitxx is invalid. \
\; Recommended operation: use this register to set GPIO_OUT_REG. \\.*/
#define GPIO_OUT_W1TS    0xFFFFFFFF
#define GPIO_OUT_W1TS_M  ((GPIO_OUT_W1TS_V)<<(GPIO_OUT_W1TS_S))
#define GPIO_OUT_W1TS_V  0xFFFFFFFF
#define GPIO_OUT_W1TS_S  0

#define GPIO_OUT_W1TC_REG          (DR_REG_GPIO_BASE + 0xC)
/* GPIO_OUT_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the output register GPIO_OUT_REG of GPIO0 ~ G
PIO31 output.\\; 0: Not clear\\; 1: The corresponding bit in GPIO_OUT_REG will b
e cleared.\\; Bit0 ~ bit31 are corresponding to GPIO0 ~ GPIO31. Bitxx ~ bitxx is
 invalid. \\; Recommended operation: use this register to clear GPIO_OUT_REG. \\.*/
#define GPIO_OUT_W1TC    0xFFFFFFFF
#define GPIO_OUT_W1TC_M  ((GPIO_OUT_W1TC_V)<<(GPIO_OUT_W1TC_S))
#define GPIO_OUT_W1TC_V  0xFFFFFFFF
#define GPIO_OUT_W1TC_S  0

#define GPIO_OUT1_REG          (DR_REG_GPIO_BASE + 0x10)
/* GPIO_OUT1_DATA : R/W/SC/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the output value of GPIO32 ~ 63 output in simple GPIO output mode.\\;
 0: Low level\\; 1: High level\\; The value of bit32 ~ bit63 correspond to the o
utput value of GPIO32 ~ GPIO63 respectively. Bitxx ~ bitxx is invalid.\\.*/
#define GPIO_OUT1_DATA    0xFFFFFFFF
#define GPIO_OUT1_DATA_M  ((GPIO_OUT1_DATA_V)<<(GPIO_OUT1_DATA_S))
#define GPIO_OUT1_DATA_V  0xFFFFFFFF
#define GPIO_OUT1_DATA_S  0

#define GPIO_OUT1_W1TS_REG          (DR_REG_GPIO_BASE + 0x14)
/* GPIO_OUT1_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the output register GPIO_OUT1_REG of GPIO32 ~ G
PIO63.\\; 0: Not set\\; 1: The corresponding bit in GPIO_OUT1_REG will be set to
 1\\; Bit32 ~ bit63 are corresponding to GPIO32 ~ GPIO63. Bitxx ~ bitxx is inval
id. \\; Recommended operation: use this register to set GPIO_OUT1_REG. \\.*/
#define GPIO_OUT1_W1TS    0xFFFFFFFF
#define GPIO_OUT1_W1TS_M  ((GPIO_OUT1_W1TS_V)<<(GPIO_OUT1_W1TS_S))
#define GPIO_OUT1_W1TS_V  0xFFFFFFFF
#define GPIO_OUT1_W1TS_S  0

#define GPIO_OUT1_W1TC_REG          (DR_REG_GPIO_BASE + 0x18)
/* GPIO_OUT1_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the output register GPIO_OUT1_REG of GPIO32 ~
 GPIO63 output.\\; 0: Not clear\\; 1: The corresponding bit in GPIO_OUT1_REG wil
l be cleared.\\; Bit32 ~ bit63 are corresponding to GPIO32 ~ GPIO63. Bitxx ~ bit
xx is invalid. \\; Recommended operation: use this register to clear GPIO_OUT1_R
EG. \\.*/
#define GPIO_OUT1_W1TC    0xFFFFFFFF
#define GPIO_OUT1_W1TC_M  ((GPIO_OUT1_W1TC_V)<<(GPIO_OUT1_W1TC_S))
#define GPIO_OUT1_W1TC_V  0xFFFFFFFF
#define GPIO_OUT1_W1TC_S  0

#define GPIO_OUT2_REG          (DR_REG_GPIO_BASE + 0x1C)
/* GPIO_OUT2_DATA : R/W/SC/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the output value of GPIO64 ~ 95 output in simple GPIO output mode.\\;
 0: Low level\\; 1: High level\\; The value of bit64 ~ bit95 correspond to the o
utput value of GPIO64 ~ GPIO95 respectively. Bitxx ~ bitxx is invalid.\\.*/
#define GPIO_OUT2_DATA    0xFFFFFFFF
#define GPIO_OUT2_DATA_M  ((GPIO_OUT2_DATA_V)<<(GPIO_OUT2_DATA_S))
#define GPIO_OUT2_DATA_V  0xFFFFFFFF
#define GPIO_OUT2_DATA_S  0

#define GPIO_OUT2_W1TS_REG          (DR_REG_GPIO_BASE + 0x20)
/* GPIO_OUT2_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the output register GPIO_OUT2_REG of GPIO64 ~ G
PIO95.\\; 0: Not set\\; 1: The corresponding bit in GPIO_OUT2_REG will be set to
 1\\; Bit64 ~ bit95 are corresponding to GPIO64 ~ GPIO95. Bitxx ~ bitxx is inval
id. \\; Recommended operation: use this register to set GPIO_OUT2_REG. \\.*/
#define GPIO_OUT2_W1TS    0xFFFFFFFF
#define GPIO_OUT2_W1TS_M  ((GPIO_OUT2_W1TS_V)<<(GPIO_OUT2_W1TS_S))
#define GPIO_OUT2_W1TS_V  0xFFFFFFFF
#define GPIO_OUT2_W1TS_S  0

#define GPIO_OUT2_W1TC_REG          (DR_REG_GPIO_BASE + 0x24)
/* GPIO_OUT2_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the output register GPIO_OUT2_REG of GPIO64 ~
 GPIO95 output.\\; 0: Not clear\\; 1: The corresponding bit in GPIO_OUT2_REG wil
l be cleared.\\; Bit64 ~ bit95 are corresponding to GPIO64 ~ GPIO95. Bitxx ~ bit
xx is invalid. \\; Recommended operation: use this register to clear GPIO_OUT2_R
EG. \\.*/
#define GPIO_OUT2_W1TC    0xFFFFFFFF
#define GPIO_OUT2_W1TC_M  ((GPIO_OUT2_W1TC_V)<<(GPIO_OUT2_W1TC_S))
#define GPIO_OUT2_W1TC_V  0xFFFFFFFF
#define GPIO_OUT2_W1TC_S  0

#define GPIO_OUT3_REG          (DR_REG_GPIO_BASE + 0x28)
/* GPIO_OUT3_DATA : R/W/SC/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures the output value of GPIO96 ~ 127 output in simple GPIO output mode.\\
; 0: Low level\\; 1: High level\\; The value of bit96 ~ bit127 correspond to the
 output value of GPIO96 ~ GPIO127 respectively. Bitxx ~ bitxx is invalid.\\.*/
#define GPIO_OUT3_DATA    0xFFFFFFFF
#define GPIO_OUT3_DATA_M  ((GPIO_OUT3_DATA_V)<<(GPIO_OUT3_DATA_S))
#define GPIO_OUT3_DATA_V  0xFFFFFFFF
#define GPIO_OUT3_DATA_S  0

#define GPIO_OUT3_W1TS_REG          (DR_REG_GPIO_BASE + 0x2C)
/* GPIO_OUT3_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the output register GPIO_OUT3_REG of GPIO96 ~ G
PIO127.\\; 0: Not set\\; 1: The corresponding bit in GPIO_OUT3_REG will be set t
o 1\\; Bit96 ~ bit127 are corresponding to GPIO96 ~ GPIO127. Bitxx ~ bitxx is in
valid. \\; Recommended operation: use this register to set GPIO_OUT3_REG. \\.*/
#define GPIO_OUT3_W1TS    0xFFFFFFFF
#define GPIO_OUT3_W1TS_M  ((GPIO_OUT3_W1TS_V)<<(GPIO_OUT3_W1TS_S))
#define GPIO_OUT3_W1TS_V  0xFFFFFFFF
#define GPIO_OUT3_W1TS_S  0

#define GPIO_OUT3_W1TC_REG          (DR_REG_GPIO_BASE + 0x30)
/* GPIO_OUT3_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the output register GPIO_OUT3_REG of GPIO96 ~
 GPIO127 output.\\; 0: Not clear\\; 1: The corresponding bit in GPIO_OUT3_REG wi
ll be cleared.\\; Bit96 ~ bit127 are corresponding to GPIO96 ~ GPIO127. Bitxx ~
bitxx is invalid. \\; Recommended operation: use this register to clear GPIO_OUT
3_REG. \\.*/
#define GPIO_OUT3_W1TC    0xFFFFFFFF
#define GPIO_OUT3_W1TC_M  ((GPIO_OUT3_W1TC_V)<<(GPIO_OUT3_W1TC_S))
#define GPIO_OUT3_W1TC_V  0xFFFFFFFF
#define GPIO_OUT3_W1TC_S  0

#define GPIO_ENABLE_REG          (DR_REG_GPIO_BASE + 0x34)
/* GPIO_ENABLE_DATA : R/W/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to enable the output of GPIO0 ~ GPIO31.\\; 0: Not enab
le\\; 1: Enable\\; Bit0 ~ bit31 are corresponding to GPIO0 ~ GPIO31. Bitxx ~ bit
xx is invalid.\\.*/
#define GPIO_ENABLE_DATA    0xFFFFFFFF
#define GPIO_ENABLE_DATA_M  ((GPIO_ENABLE_DATA_V)<<(GPIO_ENABLE_DATA_S))
#define GPIO_ENABLE_DATA_V  0xFFFFFFFF
#define GPIO_ENABLE_DATA_S  0

#define GPIO_ENABLE_W1TS_REG          (DR_REG_GPIO_BASE + 0x38)
/* GPIO_ENABLE_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the output enable register GPIO_ENABLE_REG of G
PIO0 ~ GPIO31.\\; 0: Not set\\; 1: The corresponding bit in GPIO_ENABLE_REG will
 be set to 1\\; Bit0 ~ bit31 are corresponding to GPIO0 ~ GPIO31. Bitxx ~ bitxx
is invalid. \\; Recommended operation: use this register to set GPIO_ENABLE_REG.
\\.*/
#define GPIO_ENABLE_W1TS    0xFFFFFFFF
#define GPIO_ENABLE_W1TS_M  ((GPIO_ENABLE_W1TS_V)<<(GPIO_ENABLE_W1TS_S))
#define GPIO_ENABLE_W1TS_V  0xFFFFFFFF
#define GPIO_ENABLE_W1TS_S  0

#define GPIO_ENABLE_W1TC_REG          (DR_REG_GPIO_BASE + 0x3C)
/* GPIO_ENABLE_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the output enable register GPIO_ENABLE_REG of
 GPIO0 ~ GPIO31. \\; 0: Not clear\\; 1: The corresponding bit in GPIO_ENABLE_REG
 will be cleared\\; Bit0 ~ bit31 are corresponding to GPIO0 ~ GPIO31. Bitxx ~ bi
txx is invalid. \\; Recommended operation: use this register to clear GPIO_ENABL
E_REG.\\.*/
#define GPIO_ENABLE_W1TC    0xFFFFFFFF
#define GPIO_ENABLE_W1TC_M  ((GPIO_ENABLE_W1TC_V)<<(GPIO_ENABLE_W1TC_S))
#define GPIO_ENABLE_W1TC_V  0xFFFFFFFF
#define GPIO_ENABLE_W1TC_S  0

#define GPIO_ENABLE1_REG          (DR_REG_GPIO_BASE + 0x40)
/* GPIO_ENABLE1_DATA : R/W/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to enable the output of GPIO32 ~ GPIO63.\\; 0: Not ena
ble\\; 1: Enable\\; Bit32 ~ bit63 are corresponding to GPIO32 ~ GPIO63. Bitxx ~
bitxx is invalid.\\.*/
#define GPIO_ENABLE1_DATA    0xFFFFFFFF
#define GPIO_ENABLE1_DATA_M  ((GPIO_ENABLE1_DATA_V)<<(GPIO_ENABLE1_DATA_S))
#define GPIO_ENABLE1_DATA_V  0xFFFFFFFF
#define GPIO_ENABLE1_DATA_S  0

#define GPIO_ENABLE1_W1TS_REG          (DR_REG_GPIO_BASE + 0x44)
/* GPIO_ENABLE1_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the output enable register GPIO_ENABLE1_REG of
GPIO32 ~ GPIO63.\\; 0: Not set\\; 1: The corresponding bit in GPIO_ENABLE1_REG w
ill be set to 1\\; Bit32 ~ bit63 are corresponding to GPIO32 ~ GPIO63. Bitxx ~ b
itxx is invalid. \\; Recommended operation: use this register to set GPIO_ENABLE
1_REG.\\.*/
#define GPIO_ENABLE1_W1TS    0xFFFFFFFF
#define GPIO_ENABLE1_W1TS_M  ((GPIO_ENABLE1_W1TS_V)<<(GPIO_ENABLE1_W1TS_S))
#define GPIO_ENABLE1_W1TS_V  0xFFFFFFFF
#define GPIO_ENABLE1_W1TS_S  0

#define GPIO_ENABLE1_W1TC_REG          (DR_REG_GPIO_BASE + 0x48)
/* GPIO_ENABLE1_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the output enable register GPIO_ENABLE1_REG o
f GPIO32 ~ GPIO63. \\; 0: Not clear\\; 1: The corresponding bit in GPIO_ENABLE1_
REG will be cleared\\; Bit32 ~ bit63 are corresponding to GPIO32 ~ GPIO63. Bitxx
 ~ bitxx is invalid. \\; Recommended operation: use this register to clear GPIO_
ENABLE1_REG.\\.*/
#define GPIO_ENABLE1_W1TC    0xFFFFFFFF
#define GPIO_ENABLE1_W1TC_M  ((GPIO_ENABLE1_W1TC_V)<<(GPIO_ENABLE1_W1TC_S))
#define GPIO_ENABLE1_W1TC_V  0xFFFFFFFF
#define GPIO_ENABLE1_W1TC_S  0

#define GPIO_ENABLE2_REG          (DR_REG_GPIO_BASE + 0x4C)
/* GPIO_ENABLE2_DATA : R/W/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to enable the output of GPIO64 ~ GPIO95.\\; 0: Not ena
ble\\; 1: Enable\\; Bit64 ~ bit95 are corresponding to GPIO64 ~ GPIO95. Bitxx ~
bitxx is invalid.\\.*/
#define GPIO_ENABLE2_DATA    0xFFFFFFFF
#define GPIO_ENABLE2_DATA_M  ((GPIO_ENABLE2_DATA_V)<<(GPIO_ENABLE2_DATA_S))
#define GPIO_ENABLE2_DATA_V  0xFFFFFFFF
#define GPIO_ENABLE2_DATA_S  0

#define GPIO_ENABLE2_W1TS_REG          (DR_REG_GPIO_BASE + 0x50)
/* GPIO_ENABLE2_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the output enable register GPIO_ENABLE2_REG of
GPIO64 ~ GPIO95.\\; 0: Not set\\; 1: The corresponding bit in GPIO_ENABLE2_REG w
ill be set to 1\\; Bit64 ~ bit95 are corresponding to GPIO64 ~ GPIO95. Bitxx ~ b
itxx is invalid. \\; Recommended operation: use this register to set GPIO_ENABLE
2_REG.\\.*/
#define GPIO_ENABLE2_W1TS    0xFFFFFFFF
#define GPIO_ENABLE2_W1TS_M  ((GPIO_ENABLE2_W1TS_V)<<(GPIO_ENABLE2_W1TS_S))
#define GPIO_ENABLE2_W1TS_V  0xFFFFFFFF
#define GPIO_ENABLE2_W1TS_S  0

#define GPIO_ENABLE2_W1TC_REG          (DR_REG_GPIO_BASE + 0x54)
/* GPIO_ENABLE2_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the output enable register GPIO_ENABLE2_REG o
f GPIO64 ~ GPIO95. \\; 0: Not clear\\; 1: The corresponding bit in GPIO_ENABLE2_
REG will be cleared\\; Bit64 ~ bit95 are corresponding to GPIO64 ~ GPIO95. Bitxx
 ~ bitxx is invalid. \\; Recommended operation: use this register to clear GPIO_
ENABLE2_REG.\\.*/
#define GPIO_ENABLE2_W1TC    0xFFFFFFFF
#define GPIO_ENABLE2_W1TC_M  ((GPIO_ENABLE2_W1TC_V)<<(GPIO_ENABLE2_W1TC_S))
#define GPIO_ENABLE2_W1TC_V  0xFFFFFFFF
#define GPIO_ENABLE2_W1TC_S  0

#define GPIO_ENABLE3_REG          (DR_REG_GPIO_BASE + 0x58)
/* GPIO_ENABLE3_DATA : R/W/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to enable the output of GPIO96 ~ GPIO127.\\; 0: Not en
able\\; 1: Enable\\; Bit96 ~ bit127 are corresponding to GPIO96 ~ GPIO127. Bitxx
 ~ bitxx is invalid.\\.*/
#define GPIO_ENABLE3_DATA    0xFFFFFFFF
#define GPIO_ENABLE3_DATA_M  ((GPIO_ENABLE3_DATA_V)<<(GPIO_ENABLE3_DATA_S))
#define GPIO_ENABLE3_DATA_V  0xFFFFFFFF
#define GPIO_ENABLE3_DATA_S  0

#define GPIO_ENABLE3_W1TS_REG          (DR_REG_GPIO_BASE + 0x5C)
/* GPIO_ENABLE3_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the output enable register GPIO_ENABLE3_REG of
GPIO96 ~ GPIO127.\\; 0: Not set\\; 1: The corresponding bit in GPIO_ENABLE3_REG
will be set to 1\\; Bit96 ~ bit127 are corresponding to GPIO96 ~ GPIO127. Bitxx
~ bitxx is invalid. \\; Recommended operation: use this register to set GPIO_ENA
BLE3_REG.\\.*/
#define GPIO_ENABLE3_W1TS    0xFFFFFFFF
#define GPIO_ENABLE3_W1TS_M  ((GPIO_ENABLE3_W1TS_V)<<(GPIO_ENABLE3_W1TS_S))
#define GPIO_ENABLE3_W1TS_V  0xFFFFFFFF
#define GPIO_ENABLE3_W1TS_S  0

#define GPIO_ENABLE3_W1TC_REG          (DR_REG_GPIO_BASE + 0x60)
/* GPIO_ENABLE3_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the output enable register GPIO_ENABLE3_REG o
f GPIO96 ~ GPIO127. \\; 0: Not clear\\; 1: The corresponding bit in GPIO_ENABLE3
_REG will be cleared\\; Bit96 ~ bit127 are corresponding to GPIO96 ~ GPIO127. Bi
txx ~ bitxx is invalid. \\; Recommended operation: use this register to clear GP
IO_ENABLE3_REG.\\.*/
#define GPIO_ENABLE3_W1TC    0xFFFFFFFF
#define GPIO_ENABLE3_W1TC_M  ((GPIO_ENABLE3_W1TC_V)<<(GPIO_ENABLE3_W1TC_S))
#define GPIO_ENABLE3_W1TC_V  0xFFFFFFFF
#define GPIO_ENABLE3_W1TC_S  0

#define GPIO_IN_REG          (DR_REG_GPIO_BASE + 0x64)
/* GPIO_IN_DATA : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the input value of GPIO0 ~ GPIO31. Each bit represents a pin input va
lue:\\; 0: Low level\\; 1: High level\\; Bit0 ~ bit31 are corresponding to GPIO0
 ~ GPIO31. Bitxx ~ bitxx is invalid.\\.*/
#define GPIO_IN_DATA    0xFFFFFFFF
#define GPIO_IN_DATA_M  ((GPIO_IN_DATA_V)<<(GPIO_IN_DATA_S))
#define GPIO_IN_DATA_V  0xFFFFFFFF
#define GPIO_IN_DATA_S  0

#define GPIO_IN1_REG          (DR_REG_GPIO_BASE + 0x68)
/* GPIO_IN1_DATA_NEXT : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the input value of GPIO32 ~ GPIO63. Each bit represents a pin input v
alue:\\; 0: Low level\\; 1: High level\\; Bit32 ~ bit63 are corresponding to GPI
O32 ~ GPIO63. Bitxx ~ bitxx is invalid.\\.*/
#define GPIO_IN1_DATA_NEXT    0xFFFFFFFF
#define GPIO_IN1_DATA_NEXT_M  ((GPIO_IN1_DATA_NEXT_V)<<(GPIO_IN1_DATA_NEXT_S))
#define GPIO_IN1_DATA_NEXT_V  0xFFFFFFFF
#define GPIO_IN1_DATA_NEXT_S  0

#define GPIO_IN2_REG          (DR_REG_GPIO_BASE + 0x6C)
/* GPIO_IN2_DATA_NEXT : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the input value of GPIO64 ~ GPIO95. Each bit represents a pin input v
alue:\\; 0: Low level\\; 1: High level\\; Bit64 ~ bit95 are corresponding to GPI
O64 ~ GPIO95. Bitxx ~ bitxx is invalid.\\.*/
#define GPIO_IN2_DATA_NEXT    0xFFFFFFFF
#define GPIO_IN2_DATA_NEXT_M  ((GPIO_IN2_DATA_NEXT_V)<<(GPIO_IN2_DATA_NEXT_S))
#define GPIO_IN2_DATA_NEXT_V  0xFFFFFFFF
#define GPIO_IN2_DATA_NEXT_S  0

#define GPIO_IN3_REG          (DR_REG_GPIO_BASE + 0x70)
/* GPIO_IN3_DATA_NEXT : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the input value of GPIO96 ~ GPIO127. Each bit represents a pin input
value:\\; 0: Low level\\; 1: High level\\; Bit96 ~ bit127 are corresponding to G
PIO96 ~ GPIO127. Bitxx ~ bitxx is invalid.\\.*/
#define GPIO_IN3_DATA_NEXT    0xFFFFFFFF
#define GPIO_IN3_DATA_NEXT_M  ((GPIO_IN3_DATA_NEXT_V)<<(GPIO_IN3_DATA_NEXT_S))
#define GPIO_IN3_DATA_NEXT_V  0xFFFFFFFF
#define GPIO_IN3_DATA_NEXT_S  0

#define GPIO_STATUS_REG          (DR_REG_GPIO_BASE + 0x74)
/* GPIO_STATUS_INT : R/W/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: The interrupt status of GPIO0 ~ GPIO31, can be configured by the software. ; ;
   - Bit0 ~ bit31 are corresponding to GPIO0 ~ GPIO31. Bitxx ~ bitxx is invalid.
 ;     - Each bit represents the status of its corresponding GPIO:;     ;
  - 0: Represents the GPIO does not generate the interrupt configured by GPIO_PI
N$n_INT_TYPE, or this bit is configured to 0 by the software.;         - 1: Repr
esents the GPIO generates the interrupt configured by GPIO_PIN$n_INT_TYPE, or th
is bit is configured to 1 by the software.;     ;.*/
#define GPIO_STATUS_INT    0xFFFFFFFF
#define GPIO_STATUS_INT_M  ((GPIO_STATUS_INT_V)<<(GPIO_STATUS_INT_S))
#define GPIO_STATUS_INT_V  0xFFFFFFFF
#define GPIO_STATUS_INT_S  0

#define GPIO_STATUS_W1TS_REG          (DR_REG_GPIO_BASE + 0x78)
/* GPIO_STATUS_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the interrupt status register GPIO_STATUS_INTER
RUPT of GPIO0 ~ GPIO31. ; ;     - Bit0 ~ bit31 are corresponding to GPIO0 ~ GPIO
31. Bitxx ~ bitxx is invalid. ;     - If the value 1 is written to a bit here, t
he corresponding bit in GPIO_STATUS_INTERRUPT will be set to 1. \item Recommende
d operation: use this register to set GPIO_STATUS_INTERRUPT. ;.*/
#define GPIO_STATUS_W1TS    0xFFFFFFFF
#define GPIO_STATUS_W1TS_M  ((GPIO_STATUS_W1TS_V)<<(GPIO_STATUS_W1TS_S))
#define GPIO_STATUS_W1TS_V  0xFFFFFFFF
#define GPIO_STATUS_W1TS_S  0

#define GPIO_STATUS_W1TC_REG          (DR_REG_GPIO_BASE + 0x7C)
/* GPIO_STATUS_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the interrupt status register GPIO_STATUS_INT
ERRUPT of GPIO0 ~ GPIO31. ; ;     - Bit0 ~ bit31 are corresponding to GPIO0 ~ GP
IO31. Bitxx ~ bitxx is invalid. ;     - If the value 1 is written to a bit here,
 the corresponding bit in GPIO_STATUS_INTERRUPT will be cleared. \item Recommend
ed operation: use this register to clear GPIO_STATUS_INTERRUPT..*/
#define GPIO_STATUS_W1TC    0xFFFFFFFF
#define GPIO_STATUS_W1TC_M  ((GPIO_STATUS_W1TC_V)<<(GPIO_STATUS_W1TC_S))
#define GPIO_STATUS_W1TC_V  0xFFFFFFFF
#define GPIO_STATUS_W1TC_S  0

#define GPIO_STATUS1_REG          (DR_REG_GPIO_BASE + 0x80)
/* GPIO_STATUS1_INT : R/W/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: The interrupt status of GPIO32 ~ GPIO63, can be configured by the software. ; ;
    - Bit32 ~ bit63 are corresponding to GPIO32 ~ GPIO63. Bitxx ~ bitxx is inval
id. ;     - Each bit represents the status of its corresponding GPIO:;     ;
     - 0: Represents the GPIO does not generate the interrupt configured by GPIO
_PIN$n_INT_TYPE, or this bit is configured to 0 by the software.;         - 1: R
epresents the GPIO generates the interrupt configured by GPIO_PIN$n_INT_TYPE, or
 this bit is configured to 1 by the software.;     ;.*/
#define GPIO_STATUS1_INT    0xFFFFFFFF
#define GPIO_STATUS1_INT_M  ((GPIO_STATUS1_INT_V)<<(GPIO_STATUS1_INT_S))
#define GPIO_STATUS1_INT_V  0xFFFFFFFF
#define GPIO_STATUS1_INT_S  0

#define GPIO_STATUS1_W1TS_REG          (DR_REG_GPIO_BASE + 0x84)
/* GPIO_STATUS1_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the interrupt status register GPIO_STATUS1_INTE
RRUPT of GPIO32 ~ GPIO63. ; ;     - Bit32 ~ bit63 are corresponding to GPIO32 ~
GPIO63. Bitxx ~ bitxx is invalid. ;     - If the value 1 is written to a bit her
e, the corresponding bit in GPIO_STATUS1_INTERRUPT will be set to 1. \item Recom
mended operation: use this register to set GPIO_STATUS1_INTERRUPT. ;.*/
#define GPIO_STATUS1_W1TS    0xFFFFFFFF
#define GPIO_STATUS1_W1TS_M  ((GPIO_STATUS1_W1TS_V)<<(GPIO_STATUS1_W1TS_S))
#define GPIO_STATUS1_W1TS_V  0xFFFFFFFF
#define GPIO_STATUS1_W1TS_S  0

#define GPIO_STATUS1_W1TC_REG          (DR_REG_GPIO_BASE + 0x88)
/* GPIO_STATUS1_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the interrupt status register GPIO_STATUS1_IN
TERRUPT of GPIO32 ~ GPIO63. ; ;     - Bit32 ~ bit63 are corresponding to GPIO32
~ GPIO63. Bitxx ~ bitxx is invalid. ;     - If the value 1 is written to a bit h
ere, the corresponding bit in GPIO_STATUS1_INTERRUPT will be cleared. \item Reco
mmended operation: use this register to clear GPIO_STATUS1_INTERRUPT..*/
#define GPIO_STATUS1_W1TC    0xFFFFFFFF
#define GPIO_STATUS1_W1TC_M  ((GPIO_STATUS1_W1TC_V)<<(GPIO_STATUS1_W1TC_S))
#define GPIO_STATUS1_W1TC_V  0xFFFFFFFF
#define GPIO_STATUS1_W1TC_S  0

#define GPIO_STATUS2_REG          (DR_REG_GPIO_BASE + 0x8C)
/* GPIO_STATUS2_INT : R/W/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: The interrupt status of GPIO64 ~ GPIO95, can be configured by the software. ; ;
    - Bit64 ~ bit95 are corresponding to GPIO64 ~ GPIO95. Bitxx ~ bitxx is inval
id. ;     - Each bit represents the status of its corresponding GPIO:;     ;
     - 0: Represents the GPIO does not generate the interrupt configured by GPIO
_PIN$n_INT_TYPE, or this bit is configured to 0 by the software.;         - 1: R
epresents the GPIO generates the interrupt configured by GPIO_PIN$n_INT_TYPE, or
 this bit is configured to 1 by the software.;     ;.*/
#define GPIO_STATUS2_INT    0xFFFFFFFF
#define GPIO_STATUS2_INT_M  ((GPIO_STATUS2_INT_V)<<(GPIO_STATUS2_INT_S))
#define GPIO_STATUS2_INT_V  0xFFFFFFFF
#define GPIO_STATUS2_INT_S  0

#define GPIO_STATUS2_W1TS_REG          (DR_REG_GPIO_BASE + 0x90)
/* GPIO_STATUS2_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the interrupt status register GPIO_STATUS2_INTE
RRUPT of GPIO64 ~ GPIO95. ; ;     - Bit64 ~ bit95 are corresponding to GPIO64 ~
GPIO95. Bitxx ~ bitxx is invalid. ;     - If the value 1 is written to a bit her
e, the corresponding bit in GPIO_STATUS2_INTERRUPT will be set to 1. \item Recom
mended operation: use this register to set GPIO_STATUS2_INTERRUPT. ;.*/
#define GPIO_STATUS2_W1TS    0xFFFFFFFF
#define GPIO_STATUS2_W1TS_M  ((GPIO_STATUS2_W1TS_V)<<(GPIO_STATUS2_W1TS_S))
#define GPIO_STATUS2_W1TS_V  0xFFFFFFFF
#define GPIO_STATUS2_W1TS_S  0

#define GPIO_STATUS2_W1TC_REG          (DR_REG_GPIO_BASE + 0x94)
/* GPIO_STATUS2_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the interrupt status register GPIO_STATUS2_IN
TERRUPT of GPIO64 ~ GPIO95. ; ;     - Bit64 ~ bit95 are corresponding to GPIO64
~ GPIO95. Bitxx ~ bitxx is invalid. ;     - If the value 1 is written to a bit h
ere, the corresponding bit in GPIO_STATUS2_INTERRUPT will be cleared. \item Reco
mmended operation: use this register to clear GPIO_STATUS2_INTERRUPT..*/
#define GPIO_STATUS2_W1TC    0xFFFFFFFF
#define GPIO_STATUS2_W1TC_M  ((GPIO_STATUS2_W1TC_V)<<(GPIO_STATUS2_W1TC_S))
#define GPIO_STATUS2_W1TC_V  0xFFFFFFFF
#define GPIO_STATUS2_W1TC_S  0

#define GPIO_STATUS3_REG          (DR_REG_GPIO_BASE + 0x98)
/* GPIO_STATUS3_INT : R/W/WTC ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: The interrupt status of GPIO96 ~ GPIO127, can be configured by the software. ; ;
     - Bit96 ~ bit127 are corresponding to GPIO96 ~ GPIO127. Bitxx ~ bitxx is in
valid. ;     - Each bit represents the status of its corresponding GPIO:;     ;
        - 0: Represents the GPIO does not generate the interrupt configured by G
PIO_PIN$n_INT_TYPE, or this bit is configured to 0 by the software.;         - 1
: Represents the GPIO generates the interrupt configured by GPIO_PIN$n_INT_TYPE,
 or this bit is configured to 1 by the software.;     ;.*/
#define GPIO_STATUS3_INT    0xFFFFFFFF
#define GPIO_STATUS3_INT_M  ((GPIO_STATUS3_INT_V)<<(GPIO_STATUS3_INT_S))
#define GPIO_STATUS3_INT_V  0xFFFFFFFF
#define GPIO_STATUS3_INT_S  0

#define GPIO_STATUS3_W1TS_REG          (DR_REG_GPIO_BASE + 0x9C)
/* GPIO_STATUS3_W1TS : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to set the interrupt status register GPIO_STATUS3_INTE
RRUPT of GPIO96 ~ GPIO127. ; ;     - Bit96 ~ bit127 are corresponding to GPIO96
~ GPIO127. Bitxx ~ bitxx is invalid. ;     - If the value 1 is written to a bit
here, the corresponding bit in GPIO_STATUS3_INTERRUPT will be set to 1. \item Re
commended operation: use this register to set GPIO_STATUS3_INTERRUPT. ;.*/
#define GPIO_STATUS3_W1TS    0xFFFFFFFF
#define GPIO_STATUS3_W1TS_M  ((GPIO_STATUS3_W1TS_V)<<(GPIO_STATUS3_W1TS_S))
#define GPIO_STATUS3_W1TS_V  0xFFFFFFFF
#define GPIO_STATUS3_W1TS_S  0

#define GPIO_STATUS3_W1TC_REG          (DR_REG_GPIO_BASE + 0xA0)
/* GPIO_STATUS3_W1TC : WT ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Configures whether or not to clear the interrupt status register GPIO_STATUS3_IN
TERRUPT of GPIO96 ~ GPIO127. ; ;     - Bit96 ~ bit127 are corresponding to GPIO9
6 ~ GPIO127. Bitxx ~ bitxx is invalid. ;     - If the value 1 is written to a bi
t here, the corresponding bit in GPIO_STATUS3_INTERRUPT will be cleared. \item R
ecommended operation: use this register to clear GPIO_STATUS3_INTERRUPT..*/
#define GPIO_STATUS3_W1TC    0xFFFFFFFF
#define GPIO_STATUS3_W1TC_M  ((GPIO_STATUS3_W1TC_V)<<(GPIO_STATUS3_W1TC_S))
#define GPIO_STATUS3_W1TC_V  0xFFFFFFFF
#define GPIO_STATUS3_W1TC_S  0

#define GPIO_INT_0_REG          (DR_REG_GPIO_BASE + 0xA4)
/* GPIO_INT_0 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_0 interrupt status of GPIO0 ~ GPIO31. Each bit represent
s:(need update in different project)\\; 0: Represents GPIO_INT_0 interrupt is no
t enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n_
INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_PI
N$n_INT_TYPE after the GPIO_INT_0 interrupt is enabled.\\; Bit0 ~ bit31 are corr
esponding to GPIO0 ~ GPIO31. Bitxx ~ bitxx is invalid. This interrupt status is
corresponding to the bit in GPIO_STATUS_REG when assert (high) enable signal (bi
t13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_0    0xFFFFFFFF
#define GPIO_INT_0_M  ((GPIO_INT_0_V)<<(GPIO_INT_0_S))
#define GPIO_INT_0_V  0xFFFFFFFF
#define GPIO_INT_0_S  0

#define GPIO_INT_1_REG          (DR_REG_GPIO_BASE + 0xA8)
/* GPIO_INT_1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_1 interrupt status of GPIO0 ~ GPIO31. Each bit represent
s:(need update in different project)\\; 0: Represents GPIO_INT_1 interrupt is no
t enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n_
INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_PI
N$n_INT_TYPE after the GPIO_INT_1 interrupt is enabled.\\; Bit0 ~ bit31 are corr
esponding to GPIO0 ~ GPIO31. Bitxx ~ bitxx is invalid. This interrupt status is
corresponding to the bit in GPIO_STATUS_REG when assert (high) enable signal (bi
t13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_1    0xFFFFFFFF
#define GPIO_INT_1_M  ((GPIO_INT_1_V)<<(GPIO_INT_1_S))
#define GPIO_INT_1_V  0xFFFFFFFF
#define GPIO_INT_1_S  0

#define GPIO_INT_2_REG          (DR_REG_GPIO_BASE + 0xAC)
/* GPIO_INT_2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_2 interrupt status of GPIO0 ~ GPIO31. Each bit represent
s:(need update in different project)\\; 0: Represents GPIO_INT_2 interrupt is no
t enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n_
INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_PI
N$n_INT_TYPE after the GPIO_INT_2 interrupt is enabled.\\; Bit0 ~ bit31 are corr
esponding to GPIO0 ~ GPIO31. Bitxx ~ bitxx is invalid. This interrupt status is
corresponding to the bit in GPIO_STATUS_REG when assert (high) enable signal (bi
t13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_2    0xFFFFFFFF
#define GPIO_INT_2_M  ((GPIO_INT_2_V)<<(GPIO_INT_2_S))
#define GPIO_INT_2_V  0xFFFFFFFF
#define GPIO_INT_2_S  0

#define GPIO_INT_3_REG          (DR_REG_GPIO_BASE + 0xB0)
/* GPIO_INT_3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_3 interrupt status of GPIO0 ~ GPIO31. Each bit represent
s:(need update in different project)\\; 0: Represents GPIO_INT_3 interrupt is no
t enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n_
INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_PI
N$n_INT_TYPE after the GPIO_INT_3 interrupt is enabled.\\; Bit0 ~ bit31 are corr
esponding to GPIO0 ~ GPIO31. Bitxx ~ bitxx is invalid. This interrupt status is
corresponding to the bit in GPIO_STATUS_REG when assert (high) enable signal (bi
t13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_3    0xFFFFFFFF
#define GPIO_INT_3_M  ((GPIO_INT_3_V)<<(GPIO_INT_3_S))
#define GPIO_INT_3_V  0xFFFFFFFF
#define GPIO_INT_3_S  0

#define GPIO_INT_01_REG          (DR_REG_GPIO_BASE + 0xB4)
/* GPIO_INT_01 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_0 interrupt status of GPIO32 ~ GPIO63. Each bit represen
ts:(need update in different project)\\; 0: Represents GPIO_INT_0 interrupt is n
ot enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n
_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_P
IN$n_INT_TYPE after the GPIO_INT_0 interrupt is enabled.\\; Bit32 ~ bit63 are co
rresponding to GPIO32 ~ GPIO63. Bitxx ~ bitxx is invalid. This interrupt status
is corresponding to the bit in GPIO_STATUS1_REG when assert (high) enable signal
 (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_01    0xFFFFFFFF
#define GPIO_INT_01_M  ((GPIO_INT_01_V)<<(GPIO_INT_01_S))
#define GPIO_INT_01_V  0xFFFFFFFF
#define GPIO_INT_01_S  0

#define GPIO_INT_11_REG          (DR_REG_GPIO_BASE + 0xB8)
/* GPIO_INT_11 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_1 interrupt status of GPIO32 ~ GPIO63. Each bit represen
ts:(need update in different project)\\; 0: Represents GPIO_INT_1 interrupt is n
ot enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n
_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_P
IN$n_INT_TYPE after the GPIO_INT_1 interrupt is enabled.\\; Bit32 ~ bit63 are co
rresponding to GPIO32 ~ GPIO63. Bitxx ~ bitxx is invalid. This interrupt status
is corresponding to the bit in GPIO_STATUS1_REG when assert (high) enable signal
 (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_11    0xFFFFFFFF
#define GPIO_INT_11_M  ((GPIO_INT_11_V)<<(GPIO_INT_11_S))
#define GPIO_INT_11_V  0xFFFFFFFF
#define GPIO_INT_11_S  0

#define GPIO_INT_21_REG          (DR_REG_GPIO_BASE + 0xBC)
/* GPIO_INT_21 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_2 interrupt status of GPIO32 ~ GPIO63. Each bit represen
ts:(need update in different project)\\; 0: Represents GPIO_INT_2 interrupt is n
ot enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n
_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_P
IN$n_INT_TYPE after the GPIO_INT_2 interrupt is enabled.\\; Bit32 ~ bit63 are co
rresponding to GPIO32 ~ GPIO63. Bitxx ~ bitxx is invalid. This interrupt status
is corresponding to the bit in GPIO_STATUS1_REG when assert (high) enable signal
 (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_21    0xFFFFFFFF
#define GPIO_INT_21_M  ((GPIO_INT_21_V)<<(GPIO_INT_21_S))
#define GPIO_INT_21_V  0xFFFFFFFF
#define GPIO_INT_21_S  0

#define GPIO_INT_31_REG          (DR_REG_GPIO_BASE + 0xC0)
/* GPIO_INT_31 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_3 interrupt status of GPIO32 ~ GPIO63. Each bit represen
ts:(need update in different project)\\; 0: Represents GPIO_INT_3 interrupt is n
ot enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n
_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_P
IN$n_INT_TYPE after the GPIO_INT_3 interrupt is enabled.\\; Bit32 ~ bit63 are co
rresponding to GPIO32 ~ GPIO63. Bitxx ~ bitxx is invalid. This interrupt status
is corresponding to the bit in GPIO_STATUS1_REG when assert (high) enable signal
 (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_31    0xFFFFFFFF
#define GPIO_INT_31_M  ((GPIO_INT_31_V)<<(GPIO_INT_31_S))
#define GPIO_INT_31_V  0xFFFFFFFF
#define GPIO_INT_31_S  0

#define GPIO_INT_02_REG          (DR_REG_GPIO_BASE + 0xC4)
/* GPIO_INT_02 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_0 interrupt status of GPIO64 ~ GPIO95. Each bit represen
ts:(need update in different project)\\; 0: Represents GPIO_INT_0 interrupt is n
ot enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n
_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_P
IN$n_INT_TYPE after the GPIO_INT_0 interrupt is enabled.\\; Bit64 ~ bit95 are co
rresponding to GPIO64 ~ GPIO95. Bitxx ~ bitxx is invalid. This interrupt status
is corresponding to the bit in GPIO_STATUS2_REG when assert (high) enable signal
 (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_02    0xFFFFFFFF
#define GPIO_INT_02_M  ((GPIO_INT_02_V)<<(GPIO_INT_02_S))
#define GPIO_INT_02_V  0xFFFFFFFF
#define GPIO_INT_02_S  0

#define GPIO_INT_12_REG          (DR_REG_GPIO_BASE + 0xC8)
/* GPIO_INT_12 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_1 interrupt status of GPIO64 ~ GPIO95. Each bit represen
ts:(need update in different project)\\; 0: Represents GPIO_INT_1 interrupt is n
ot enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n
_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_P
IN$n_INT_TYPE after the GPIO_INT_1 interrupt is enabled.\\; Bit64 ~ bit95 are co
rresponding to GPIO64 ~ GPIO95. Bitxx ~ bitxx is invalid. This interrupt status
is corresponding to the bit in GPIO_STATUS2_REG when assert (high) enable signal
 (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_12    0xFFFFFFFF
#define GPIO_INT_12_M  ((GPIO_INT_12_V)<<(GPIO_INT_12_S))
#define GPIO_INT_12_V  0xFFFFFFFF
#define GPIO_INT_12_S  0

#define GPIO_INT_22_REG          (DR_REG_GPIO_BASE + 0xCC)
/* GPIO_INT_22 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_2 interrupt status of GPIO64 ~ GPIO95. Each bit represen
ts:(need update in different project)\\; 0: Represents GPIO_INT_2 interrupt is n
ot enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n
_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_P
IN$n_INT_TYPE after the GPIO_INT_2 interrupt is enabled.\\; Bit64 ~ bit95 are co
rresponding to GPIO64 ~ GPIO95. Bitxx ~ bitxx is invalid. This interrupt status
is corresponding to the bit in GPIO_STATUS2_REG when assert (high) enable signal
 (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_22    0xFFFFFFFF
#define GPIO_INT_22_M  ((GPIO_INT_22_V)<<(GPIO_INT_22_S))
#define GPIO_INT_22_V  0xFFFFFFFF
#define GPIO_INT_22_S  0

#define GPIO_INT_32_REG          (DR_REG_GPIO_BASE + 0xD0)
/* GPIO_INT_32 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_3 interrupt status of GPIO64 ~ GPIO95. Each bit represen
ts:(need update in different project)\\; 0: Represents GPIO_INT_3 interrupt is n
ot enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$n
_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_P
IN$n_INT_TYPE after the GPIO_INT_3 interrupt is enabled.\\; Bit64 ~ bit95 are co
rresponding to GPIO64 ~ GPIO95. Bitxx ~ bitxx is invalid. This interrupt status
is corresponding to the bit in GPIO_STATUS2_REG when assert (high) enable signal
 (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_32    0xFFFFFFFF
#define GPIO_INT_32_M  ((GPIO_INT_32_V)<<(GPIO_INT_32_S))
#define GPIO_INT_32_V  0xFFFFFFFF
#define GPIO_INT_32_S  0

#define GPIO_INT_03_REG          (DR_REG_GPIO_BASE + 0xD4)
/* GPIO_INT_03 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_0 interrupt status of GPIO96 ~ GPIO127. Each bit represe
nts:(need update in different project)\\; 0: Represents GPIO_INT_0 interrupt is
not enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$
n_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_
PIN$n_INT_TYPE after the GPIO_INT_0 interrupt is enabled.\\; Bit96 ~ bit127 are
corresponding to GPIO96 ~ GPIO127. Bitxx ~ bitxx is invalid. This interrupt stat
us is corresponding to the bit in GPIO_STATUS3_REG when assert (high) enable sig
nal (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_03    0xFFFFFFFF
#define GPIO_INT_03_M  ((GPIO_INT_03_V)<<(GPIO_INT_03_S))
#define GPIO_INT_03_V  0xFFFFFFFF
#define GPIO_INT_03_S  0

#define GPIO_INT_13_REG          (DR_REG_GPIO_BASE + 0xD8)
/* GPIO_INT_13 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_1 interrupt status of GPIO96 ~ GPIO127. Each bit represe
nts:(need update in different project)\\; 0: Represents GPIO_INT_1 interrupt is
not enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$
n_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_
PIN$n_INT_TYPE after the GPIO_INT_1 interrupt is enabled.\\; Bit96 ~ bit127 are
corresponding to GPIO96 ~ GPIO127. Bitxx ~ bitxx is invalid. This interrupt stat
us is corresponding to the bit in GPIO_STATUS3_REG when assert (high) enable sig
nal (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_13    0xFFFFFFFF
#define GPIO_INT_13_M  ((GPIO_INT_13_V)<<(GPIO_INT_13_S))
#define GPIO_INT_13_V  0xFFFFFFFF
#define GPIO_INT_13_S  0

#define GPIO_INT_23_REG          (DR_REG_GPIO_BASE + 0xDC)
/* GPIO_INT_23 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_2 interrupt status of GPIO96 ~ GPIO127. Each bit represe
nts:(need update in different project)\\; 0: Represents GPIO_INT_2 interrupt is
not enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$
n_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_
PIN$n_INT_TYPE after the GPIO_INT_2 interrupt is enabled.\\; Bit96 ~ bit127 are
corresponding to GPIO96 ~ GPIO127. Bitxx ~ bitxx is invalid. This interrupt stat
us is corresponding to the bit in GPIO_STATUS3_REG when assert (high) enable sig
nal (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_23    0xFFFFFFFF
#define GPIO_INT_23_M  ((GPIO_INT_23_V)<<(GPIO_INT_23_S))
#define GPIO_INT_23_V  0xFFFFFFFF
#define GPIO_INT_23_S  0

#define GPIO_INT_33_REG          (DR_REG_GPIO_BASE + 0xE0)
/* GPIO_INT_33 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the GPIO_INT_3 interrupt status of GPIO96 ~ GPIO127. Each bit represe
nts:(need update in different project)\\; 0: Represents GPIO_INT_3 interrupt is
not enabled, or the GPIO does not generate the interrupt configured by GPIO_PIN$
n_INT_TYPE.\\; 1: Represents the GPIO generates an interrupt configured by GPIO_
PIN$n_INT_TYPE after the GPIO_INT_3 interrupt is enabled.\\; Bit96 ~ bit127 are
corresponding to GPIO96 ~ GPIO127. Bitxx ~ bitxx is invalid. This interrupt stat
us is corresponding to the bit in GPIO_STATUS3_REG when assert (high) enable sig
nal (bit13 of GPIO_PIN$n_REG). \\.*/
#define GPIO_INT_33    0xFFFFFFFF
#define GPIO_INT_33_M  ((GPIO_INT_33_V)<<(GPIO_INT_33_S))
#define GPIO_INT_33_V  0xFFFFFFFF
#define GPIO_INT_33_S  0

#define GPIO_STATUS_NEXT_REG          (DR_REG_GPIO_BASE + 0xE4)
/* GPIO_STATUS_INTERRUPT_NEXT : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the interrupt source signal of GPIO0 ~ GPIO31.\\; Bit0 ~ bit24 are co
rresponding to GPIO0 ~ GPIO31. Bitxx ~ bitxx is invalid. Each bit represents:\\;
 0: The GPIO does not generate the interrupt configured by GPIO_PIN$n_INT_TYPE.\
\; 1: The GPIO generates an interrupt configured by GPIO_PIN$n_INT_TYPE.\\; The
interrupt could be rising edge interrupt, falling edge interrupt, level sensitiv
e interrupt and any edge interrupt.\\.*/
#define GPIO_STATUS_INTERRUPT_NEXT    0xFFFFFFFF
#define GPIO_STATUS_INTERRUPT_NEXT_M  ((GPIO_STATUS_INTERRUPT_NEXT_V)<<(GPIO_STATUS_INTERRUPT_NEXT_S))
#define GPIO_STATUS_INTERRUPT_NEXT_V  0xFFFFFFFF
#define GPIO_STATUS_INTERRUPT_NEXT_S  0

#define GPIO_STATUS_NEXT1_REG          (DR_REG_GPIO_BASE + 0xE8)
/* GPIO_STATUS_INTERRUPT_NEXT1 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the interrupt source signal of GPIO32 ~ GPIO63.\\; Bit0 ~ bit24 are c
orresponding to GPIO32 ~ GPIO63. Bitxx ~ bitxx is invalid. Each bit represents:\
\; 0: The GPIO does not generate the interrupt configured by GPIO_PIN$n_INT_TYPE
.\\; 1: The GPIO generates an interrupt configured by GPIO_PIN$n_INT_TYPE.\\; Th
e interrupt could be rising edge interrupt, falling edge interrupt, level sensit
ive interrupt and any edge interrupt.\\.*/
#define GPIO_STATUS_INTERRUPT_NEXT1    0xFFFFFFFF
#define GPIO_STATUS_INTERRUPT_NEXT1_M  ((GPIO_STATUS_INTERRUPT_NEXT1_V)<<(GPIO_STATUS_INTERRUPT_NEXT1_S))
#define GPIO_STATUS_INTERRUPT_NEXT1_V  0xFFFFFFFF
#define GPIO_STATUS_INTERRUPT_NEXT1_S  0

#define GPIO_STATUS_NEXT2_REG          (DR_REG_GPIO_BASE + 0xEC)
/* GPIO_STATUS_INTERRUPT_NEXT2 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the interrupt source signal of GPIO64 ~ GPIO95.\\; Bit0 ~ bit24 are c
orresponding to GPIO64 ~ GPIO95. Bitxx ~ bitxx is invalid. Each bit represents:\
\; 0: The GPIO does not generate the interrupt configured by GPIO_PIN$n_INT_TYPE
.\\; 1: The GPIO generates an interrupt configured by GPIO_PIN$n_INT_TYPE.\\; Th
e interrupt could be rising edge interrupt, falling edge interrupt, level sensit
ive interrupt and any edge interrupt.\\.*/
#define GPIO_STATUS_INTERRUPT_NEXT2    0xFFFFFFFF
#define GPIO_STATUS_INTERRUPT_NEXT2_M  ((GPIO_STATUS_INTERRUPT_NEXT2_V)<<(GPIO_STATUS_INTERRUPT_NEXT2_S))
#define GPIO_STATUS_INTERRUPT_NEXT2_V  0xFFFFFFFF
#define GPIO_STATUS_INTERRUPT_NEXT2_S  0

#define GPIO_STATUS_NEXT3_REG          (DR_REG_GPIO_BASE + 0xF0)
/* GPIO_STATUS_INTERRUPT_NEXT3 : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: Represents the interrupt source signal of GPIO96 ~ GPIO127.\\; Bit0 ~ bit24 are
corresponding to GPIO96 ~ GPIO127. Bitxx ~ bitxx is invalid. Each bit represents
:\\; 0: The GPIO does not generate the interrupt configured by GPIO_PIN$n_INT_TY
PE.\\; 1: The GPIO generates an interrupt configured by GPIO_PIN$n_INT_TYPE.\\;
The interrupt could be rising edge interrupt, falling edge interrupt, level sens
itive interrupt and any edge interrupt.\\.*/
#define GPIO_STATUS_INTERRUPT_NEXT3    0xFFFFFFFF
#define GPIO_STATUS_INTERRUPT_NEXT3_M  ((GPIO_STATUS_INTERRUPT_NEXT3_V)<<(GPIO_STATUS_INTERRUPT_NEXT3_S))
#define GPIO_STATUS_INTERRUPT_NEXT3_V  0xFFFFFFFF
#define GPIO_STATUS_INTERRUPT_NEXT3_S  0

#define GPIO_PIN0_REG          (DR_REG_GPIO_BASE + 0xF4)
/* GPIO_PIN0_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN0_INT_ENA    0x0000001F
#define GPIO_PIN0_INT_ENA_M  ((GPIO_PIN0_INT_ENA_V)<<(GPIO_PIN0_INT_ENA_S))
#define GPIO_PIN0_INT_ENA_V  0x1F
#define GPIO_PIN0_INT_ENA_S  13
/* GPIO_PIN0_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN0_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN0_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN0_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN0_WAKEUP_ENABLE_S  10
/* GPIO_PIN0_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN0_INT_TYPE    0x00000007
#define GPIO_PIN0_INT_TYPE_M  ((GPIO_PIN0_INT_TYPE_V)<<(GPIO_PIN0_INT_TYPE_S))
#define GPIO_PIN0_INT_TYPE_V  0x7
#define GPIO_PIN0_INT_TYPE_S  7
/* GPIO_PIN0_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN0_SYNC1_BYPASS    0x00000003
#define GPIO_PIN0_SYNC1_BYPASS_M  ((GPIO_PIN0_SYNC1_BYPASS_V)<<(GPIO_PIN0_SYNC1_BYPASS_S))
#define GPIO_PIN0_SYNC1_BYPASS_V  0x3
#define GPIO_PIN0_SYNC1_BYPASS_S  3
/* GPIO_PIN0_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN0_PAD_DRIVER    (BIT(2))
#define GPIO_PIN0_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN0_PAD_DRIVER_V  0x1
#define GPIO_PIN0_PAD_DRIVER_S  2
/* GPIO_PIN0_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN0_SYNC2_BYPASS    0x00000003
#define GPIO_PIN0_SYNC2_BYPASS_M  ((GPIO_PIN0_SYNC2_BYPASS_V)<<(GPIO_PIN0_SYNC2_BYPASS_S))
#define GPIO_PIN0_SYNC2_BYPASS_V  0x3
#define GPIO_PIN0_SYNC2_BYPASS_S  0

#define GPIO_PIN1_REG          (DR_REG_GPIO_BASE + 0xF8)
/* GPIO_PIN1_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN1_INT_ENA    0x0000001F
#define GPIO_PIN1_INT_ENA_M  ((GPIO_PIN1_INT_ENA_V)<<(GPIO_PIN1_INT_ENA_S))
#define GPIO_PIN1_INT_ENA_V  0x1F
#define GPIO_PIN1_INT_ENA_S  13
/* GPIO_PIN1_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN1_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN1_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN1_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN1_WAKEUP_ENABLE_S  10
/* GPIO_PIN1_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN1_INT_TYPE    0x00000007
#define GPIO_PIN1_INT_TYPE_M  ((GPIO_PIN1_INT_TYPE_V)<<(GPIO_PIN1_INT_TYPE_S))
#define GPIO_PIN1_INT_TYPE_V  0x7
#define GPIO_PIN1_INT_TYPE_S  7
/* GPIO_PIN1_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN1_SYNC1_BYPASS    0x00000003
#define GPIO_PIN1_SYNC1_BYPASS_M  ((GPIO_PIN1_SYNC1_BYPASS_V)<<(GPIO_PIN1_SYNC1_BYPASS_S))
#define GPIO_PIN1_SYNC1_BYPASS_V  0x3
#define GPIO_PIN1_SYNC1_BYPASS_S  3
/* GPIO_PIN1_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN1_PAD_DRIVER    (BIT(2))
#define GPIO_PIN1_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN1_PAD_DRIVER_V  0x1
#define GPIO_PIN1_PAD_DRIVER_S  2
/* GPIO_PIN1_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN1_SYNC2_BYPASS    0x00000003
#define GPIO_PIN1_SYNC2_BYPASS_M  ((GPIO_PIN1_SYNC2_BYPASS_V)<<(GPIO_PIN1_SYNC2_BYPASS_S))
#define GPIO_PIN1_SYNC2_BYPASS_V  0x3
#define GPIO_PIN1_SYNC2_BYPASS_S  0

#define GPIO_PIN2_REG          (DR_REG_GPIO_BASE + 0xFC)
/* GPIO_PIN2_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN2_INT_ENA    0x0000001F
#define GPIO_PIN2_INT_ENA_M  ((GPIO_PIN2_INT_ENA_V)<<(GPIO_PIN2_INT_ENA_S))
#define GPIO_PIN2_INT_ENA_V  0x1F
#define GPIO_PIN2_INT_ENA_S  13
/* GPIO_PIN2_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN2_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN2_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN2_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN2_WAKEUP_ENABLE_S  10
/* GPIO_PIN2_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN2_INT_TYPE    0x00000007
#define GPIO_PIN2_INT_TYPE_M  ((GPIO_PIN2_INT_TYPE_V)<<(GPIO_PIN2_INT_TYPE_S))
#define GPIO_PIN2_INT_TYPE_V  0x7
#define GPIO_PIN2_INT_TYPE_S  7
/* GPIO_PIN2_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN2_SYNC1_BYPASS    0x00000003
#define GPIO_PIN2_SYNC1_BYPASS_M  ((GPIO_PIN2_SYNC1_BYPASS_V)<<(GPIO_PIN2_SYNC1_BYPASS_S))
#define GPIO_PIN2_SYNC1_BYPASS_V  0x3
#define GPIO_PIN2_SYNC1_BYPASS_S  3
/* GPIO_PIN2_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN2_PAD_DRIVER    (BIT(2))
#define GPIO_PIN2_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN2_PAD_DRIVER_V  0x1
#define GPIO_PIN2_PAD_DRIVER_S  2
/* GPIO_PIN2_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN2_SYNC2_BYPASS    0x00000003
#define GPIO_PIN2_SYNC2_BYPASS_M  ((GPIO_PIN2_SYNC2_BYPASS_V)<<(GPIO_PIN2_SYNC2_BYPASS_S))
#define GPIO_PIN2_SYNC2_BYPASS_V  0x3
#define GPIO_PIN2_SYNC2_BYPASS_S  0

#define GPIO_PIN3_REG          (DR_REG_GPIO_BASE + 0x100)
/* GPIO_PIN3_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN3_INT_ENA    0x0000001F
#define GPIO_PIN3_INT_ENA_M  ((GPIO_PIN3_INT_ENA_V)<<(GPIO_PIN3_INT_ENA_S))
#define GPIO_PIN3_INT_ENA_V  0x1F
#define GPIO_PIN3_INT_ENA_S  13
/* GPIO_PIN3_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN3_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN3_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN3_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN3_WAKEUP_ENABLE_S  10
/* GPIO_PIN3_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN3_INT_TYPE    0x00000007
#define GPIO_PIN3_INT_TYPE_M  ((GPIO_PIN3_INT_TYPE_V)<<(GPIO_PIN3_INT_TYPE_S))
#define GPIO_PIN3_INT_TYPE_V  0x7
#define GPIO_PIN3_INT_TYPE_S  7
/* GPIO_PIN3_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN3_SYNC1_BYPASS    0x00000003
#define GPIO_PIN3_SYNC1_BYPASS_M  ((GPIO_PIN3_SYNC1_BYPASS_V)<<(GPIO_PIN3_SYNC1_BYPASS_S))
#define GPIO_PIN3_SYNC1_BYPASS_V  0x3
#define GPIO_PIN3_SYNC1_BYPASS_S  3
/* GPIO_PIN3_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN3_PAD_DRIVER    (BIT(2))
#define GPIO_PIN3_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN3_PAD_DRIVER_V  0x1
#define GPIO_PIN3_PAD_DRIVER_S  2
/* GPIO_PIN3_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN3_SYNC2_BYPASS    0x00000003
#define GPIO_PIN3_SYNC2_BYPASS_M  ((GPIO_PIN3_SYNC2_BYPASS_V)<<(GPIO_PIN3_SYNC2_BYPASS_S))
#define GPIO_PIN3_SYNC2_BYPASS_V  0x3
#define GPIO_PIN3_SYNC2_BYPASS_S  0

#define GPIO_PIN4_REG          (DR_REG_GPIO_BASE + 0x104)
/* GPIO_PIN4_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN4_INT_ENA    0x0000001F
#define GPIO_PIN4_INT_ENA_M  ((GPIO_PIN4_INT_ENA_V)<<(GPIO_PIN4_INT_ENA_S))
#define GPIO_PIN4_INT_ENA_V  0x1F
#define GPIO_PIN4_INT_ENA_S  13
/* GPIO_PIN4_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN4_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN4_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN4_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN4_WAKEUP_ENABLE_S  10
/* GPIO_PIN4_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN4_INT_TYPE    0x00000007
#define GPIO_PIN4_INT_TYPE_M  ((GPIO_PIN4_INT_TYPE_V)<<(GPIO_PIN4_INT_TYPE_S))
#define GPIO_PIN4_INT_TYPE_V  0x7
#define GPIO_PIN4_INT_TYPE_S  7
/* GPIO_PIN4_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN4_SYNC1_BYPASS    0x00000003
#define GPIO_PIN4_SYNC1_BYPASS_M  ((GPIO_PIN4_SYNC1_BYPASS_V)<<(GPIO_PIN4_SYNC1_BYPASS_S))
#define GPIO_PIN4_SYNC1_BYPASS_V  0x3
#define GPIO_PIN4_SYNC1_BYPASS_S  3
/* GPIO_PIN4_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN4_PAD_DRIVER    (BIT(2))
#define GPIO_PIN4_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN4_PAD_DRIVER_V  0x1
#define GPIO_PIN4_PAD_DRIVER_S  2
/* GPIO_PIN4_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN4_SYNC2_BYPASS    0x00000003
#define GPIO_PIN4_SYNC2_BYPASS_M  ((GPIO_PIN4_SYNC2_BYPASS_V)<<(GPIO_PIN4_SYNC2_BYPASS_S))
#define GPIO_PIN4_SYNC2_BYPASS_V  0x3
#define GPIO_PIN4_SYNC2_BYPASS_S  0

#define GPIO_PIN5_REG          (DR_REG_GPIO_BASE + 0x108)
/* GPIO_PIN5_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN5_INT_ENA    0x0000001F
#define GPIO_PIN5_INT_ENA_M  ((GPIO_PIN5_INT_ENA_V)<<(GPIO_PIN5_INT_ENA_S))
#define GPIO_PIN5_INT_ENA_V  0x1F
#define GPIO_PIN5_INT_ENA_S  13
/* GPIO_PIN5_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN5_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN5_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN5_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN5_WAKEUP_ENABLE_S  10
/* GPIO_PIN5_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN5_INT_TYPE    0x00000007
#define GPIO_PIN5_INT_TYPE_M  ((GPIO_PIN5_INT_TYPE_V)<<(GPIO_PIN5_INT_TYPE_S))
#define GPIO_PIN5_INT_TYPE_V  0x7
#define GPIO_PIN5_INT_TYPE_S  7
/* GPIO_PIN5_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN5_SYNC1_BYPASS    0x00000003
#define GPIO_PIN5_SYNC1_BYPASS_M  ((GPIO_PIN5_SYNC1_BYPASS_V)<<(GPIO_PIN5_SYNC1_BYPASS_S))
#define GPIO_PIN5_SYNC1_BYPASS_V  0x3
#define GPIO_PIN5_SYNC1_BYPASS_S  3
/* GPIO_PIN5_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN5_PAD_DRIVER    (BIT(2))
#define GPIO_PIN5_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN5_PAD_DRIVER_V  0x1
#define GPIO_PIN5_PAD_DRIVER_S  2
/* GPIO_PIN5_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN5_SYNC2_BYPASS    0x00000003
#define GPIO_PIN5_SYNC2_BYPASS_M  ((GPIO_PIN5_SYNC2_BYPASS_V)<<(GPIO_PIN5_SYNC2_BYPASS_S))
#define GPIO_PIN5_SYNC2_BYPASS_V  0x3
#define GPIO_PIN5_SYNC2_BYPASS_S  0

#define GPIO_PIN6_REG          (DR_REG_GPIO_BASE + 0x10C)
/* GPIO_PIN6_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN6_INT_ENA    0x0000001F
#define GPIO_PIN6_INT_ENA_M  ((GPIO_PIN6_INT_ENA_V)<<(GPIO_PIN6_INT_ENA_S))
#define GPIO_PIN6_INT_ENA_V  0x1F
#define GPIO_PIN6_INT_ENA_S  13
/* GPIO_PIN6_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN6_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN6_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN6_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN6_WAKEUP_ENABLE_S  10
/* GPIO_PIN6_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN6_INT_TYPE    0x00000007
#define GPIO_PIN6_INT_TYPE_M  ((GPIO_PIN6_INT_TYPE_V)<<(GPIO_PIN6_INT_TYPE_S))
#define GPIO_PIN6_INT_TYPE_V  0x7
#define GPIO_PIN6_INT_TYPE_S  7
/* GPIO_PIN6_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN6_SYNC1_BYPASS    0x00000003
#define GPIO_PIN6_SYNC1_BYPASS_M  ((GPIO_PIN6_SYNC1_BYPASS_V)<<(GPIO_PIN6_SYNC1_BYPASS_S))
#define GPIO_PIN6_SYNC1_BYPASS_V  0x3
#define GPIO_PIN6_SYNC1_BYPASS_S  3
/* GPIO_PIN6_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN6_PAD_DRIVER    (BIT(2))
#define GPIO_PIN6_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN6_PAD_DRIVER_V  0x1
#define GPIO_PIN6_PAD_DRIVER_S  2
/* GPIO_PIN6_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN6_SYNC2_BYPASS    0x00000003
#define GPIO_PIN6_SYNC2_BYPASS_M  ((GPIO_PIN6_SYNC2_BYPASS_V)<<(GPIO_PIN6_SYNC2_BYPASS_S))
#define GPIO_PIN6_SYNC2_BYPASS_V  0x3
#define GPIO_PIN6_SYNC2_BYPASS_S  0

#define GPIO_PIN7_REG          (DR_REG_GPIO_BASE + 0x110)
/* GPIO_PIN7_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN7_INT_ENA    0x0000001F
#define GPIO_PIN7_INT_ENA_M  ((GPIO_PIN7_INT_ENA_V)<<(GPIO_PIN7_INT_ENA_S))
#define GPIO_PIN7_INT_ENA_V  0x1F
#define GPIO_PIN7_INT_ENA_S  13
/* GPIO_PIN7_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN7_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN7_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN7_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN7_WAKEUP_ENABLE_S  10
/* GPIO_PIN7_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN7_INT_TYPE    0x00000007
#define GPIO_PIN7_INT_TYPE_M  ((GPIO_PIN7_INT_TYPE_V)<<(GPIO_PIN7_INT_TYPE_S))
#define GPIO_PIN7_INT_TYPE_V  0x7
#define GPIO_PIN7_INT_TYPE_S  7
/* GPIO_PIN7_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN7_SYNC1_BYPASS    0x00000003
#define GPIO_PIN7_SYNC1_BYPASS_M  ((GPIO_PIN7_SYNC1_BYPASS_V)<<(GPIO_PIN7_SYNC1_BYPASS_S))
#define GPIO_PIN7_SYNC1_BYPASS_V  0x3
#define GPIO_PIN7_SYNC1_BYPASS_S  3
/* GPIO_PIN7_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN7_PAD_DRIVER    (BIT(2))
#define GPIO_PIN7_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN7_PAD_DRIVER_V  0x1
#define GPIO_PIN7_PAD_DRIVER_S  2
/* GPIO_PIN7_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN7_SYNC2_BYPASS    0x00000003
#define GPIO_PIN7_SYNC2_BYPASS_M  ((GPIO_PIN7_SYNC2_BYPASS_V)<<(GPIO_PIN7_SYNC2_BYPASS_S))
#define GPIO_PIN7_SYNC2_BYPASS_V  0x3
#define GPIO_PIN7_SYNC2_BYPASS_S  0

#define GPIO_PIN8_REG          (DR_REG_GPIO_BASE + 0x114)
/* GPIO_PIN8_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN8_INT_ENA    0x0000001F
#define GPIO_PIN8_INT_ENA_M  ((GPIO_PIN8_INT_ENA_V)<<(GPIO_PIN8_INT_ENA_S))
#define GPIO_PIN8_INT_ENA_V  0x1F
#define GPIO_PIN8_INT_ENA_S  13
/* GPIO_PIN8_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN8_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN8_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN8_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN8_WAKEUP_ENABLE_S  10
/* GPIO_PIN8_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN8_INT_TYPE    0x00000007
#define GPIO_PIN8_INT_TYPE_M  ((GPIO_PIN8_INT_TYPE_V)<<(GPIO_PIN8_INT_TYPE_S))
#define GPIO_PIN8_INT_TYPE_V  0x7
#define GPIO_PIN8_INT_TYPE_S  7
/* GPIO_PIN8_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN8_SYNC1_BYPASS    0x00000003
#define GPIO_PIN8_SYNC1_BYPASS_M  ((GPIO_PIN8_SYNC1_BYPASS_V)<<(GPIO_PIN8_SYNC1_BYPASS_S))
#define GPIO_PIN8_SYNC1_BYPASS_V  0x3
#define GPIO_PIN8_SYNC1_BYPASS_S  3
/* GPIO_PIN8_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN8_PAD_DRIVER    (BIT(2))
#define GPIO_PIN8_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN8_PAD_DRIVER_V  0x1
#define GPIO_PIN8_PAD_DRIVER_S  2
/* GPIO_PIN8_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN8_SYNC2_BYPASS    0x00000003
#define GPIO_PIN8_SYNC2_BYPASS_M  ((GPIO_PIN8_SYNC2_BYPASS_V)<<(GPIO_PIN8_SYNC2_BYPASS_S))
#define GPIO_PIN8_SYNC2_BYPASS_V  0x3
#define GPIO_PIN8_SYNC2_BYPASS_S  0

#define GPIO_PIN9_REG          (DR_REG_GPIO_BASE + 0x118)
/* GPIO_PIN9_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN9_INT_ENA    0x0000001F
#define GPIO_PIN9_INT_ENA_M  ((GPIO_PIN9_INT_ENA_V)<<(GPIO_PIN9_INT_ENA_S))
#define GPIO_PIN9_INT_ENA_V  0x1F
#define GPIO_PIN9_INT_ENA_S  13
/* GPIO_PIN9_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN9_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN9_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN9_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN9_WAKEUP_ENABLE_S  10
/* GPIO_PIN9_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN9_INT_TYPE    0x00000007
#define GPIO_PIN9_INT_TYPE_M  ((GPIO_PIN9_INT_TYPE_V)<<(GPIO_PIN9_INT_TYPE_S))
#define GPIO_PIN9_INT_TYPE_V  0x7
#define GPIO_PIN9_INT_TYPE_S  7
/* GPIO_PIN9_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN9_SYNC1_BYPASS    0x00000003
#define GPIO_PIN9_SYNC1_BYPASS_M  ((GPIO_PIN9_SYNC1_BYPASS_V)<<(GPIO_PIN9_SYNC1_BYPASS_S))
#define GPIO_PIN9_SYNC1_BYPASS_V  0x3
#define GPIO_PIN9_SYNC1_BYPASS_S  3
/* GPIO_PIN9_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN9_PAD_DRIVER    (BIT(2))
#define GPIO_PIN9_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN9_PAD_DRIVER_V  0x1
#define GPIO_PIN9_PAD_DRIVER_S  2
/* GPIO_PIN9_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN9_SYNC2_BYPASS    0x00000003
#define GPIO_PIN9_SYNC2_BYPASS_M  ((GPIO_PIN9_SYNC2_BYPASS_V)<<(GPIO_PIN9_SYNC2_BYPASS_S))
#define GPIO_PIN9_SYNC2_BYPASS_V  0x3
#define GPIO_PIN9_SYNC2_BYPASS_S  0

#define GPIO_PIN10_REG          (DR_REG_GPIO_BASE + 0x11C)
/* GPIO_PIN10_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN10_INT_ENA    0x0000001F
#define GPIO_PIN10_INT_ENA_M  ((GPIO_PIN10_INT_ENA_V)<<(GPIO_PIN10_INT_ENA_S))
#define GPIO_PIN10_INT_ENA_V  0x1F
#define GPIO_PIN10_INT_ENA_S  13
/* GPIO_PIN10_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN10_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN10_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN10_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN10_WAKEUP_ENABLE_S  10
/* GPIO_PIN10_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN10_INT_TYPE    0x00000007
#define GPIO_PIN10_INT_TYPE_M  ((GPIO_PIN10_INT_TYPE_V)<<(GPIO_PIN10_INT_TYPE_S))
#define GPIO_PIN10_INT_TYPE_V  0x7
#define GPIO_PIN10_INT_TYPE_S  7
/* GPIO_PIN10_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN10_SYNC1_BYPASS    0x00000003
#define GPIO_PIN10_SYNC1_BYPASS_M  ((GPIO_PIN10_SYNC1_BYPASS_V)<<(GPIO_PIN10_SYNC1_BYPASS_S))
#define GPIO_PIN10_SYNC1_BYPASS_V  0x3
#define GPIO_PIN10_SYNC1_BYPASS_S  3
/* GPIO_PIN10_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN10_PAD_DRIVER    (BIT(2))
#define GPIO_PIN10_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN10_PAD_DRIVER_V  0x1
#define GPIO_PIN10_PAD_DRIVER_S  2
/* GPIO_PIN10_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN10_SYNC2_BYPASS    0x00000003
#define GPIO_PIN10_SYNC2_BYPASS_M  ((GPIO_PIN10_SYNC2_BYPASS_V)<<(GPIO_PIN10_SYNC2_BYPASS_S))
#define GPIO_PIN10_SYNC2_BYPASS_V  0x3
#define GPIO_PIN10_SYNC2_BYPASS_S  0

#define GPIO_PIN11_REG          (DR_REG_GPIO_BASE + 0x120)
/* GPIO_PIN11_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN11_INT_ENA    0x0000001F
#define GPIO_PIN11_INT_ENA_M  ((GPIO_PIN11_INT_ENA_V)<<(GPIO_PIN11_INT_ENA_S))
#define GPIO_PIN11_INT_ENA_V  0x1F
#define GPIO_PIN11_INT_ENA_S  13
/* GPIO_PIN11_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN11_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN11_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN11_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN11_WAKEUP_ENABLE_S  10
/* GPIO_PIN11_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN11_INT_TYPE    0x00000007
#define GPIO_PIN11_INT_TYPE_M  ((GPIO_PIN11_INT_TYPE_V)<<(GPIO_PIN11_INT_TYPE_S))
#define GPIO_PIN11_INT_TYPE_V  0x7
#define GPIO_PIN11_INT_TYPE_S  7
/* GPIO_PIN11_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN11_SYNC1_BYPASS    0x00000003
#define GPIO_PIN11_SYNC1_BYPASS_M  ((GPIO_PIN11_SYNC1_BYPASS_V)<<(GPIO_PIN11_SYNC1_BYPASS_S))
#define GPIO_PIN11_SYNC1_BYPASS_V  0x3
#define GPIO_PIN11_SYNC1_BYPASS_S  3
/* GPIO_PIN11_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN11_PAD_DRIVER    (BIT(2))
#define GPIO_PIN11_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN11_PAD_DRIVER_V  0x1
#define GPIO_PIN11_PAD_DRIVER_S  2
/* GPIO_PIN11_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN11_SYNC2_BYPASS    0x00000003
#define GPIO_PIN11_SYNC2_BYPASS_M  ((GPIO_PIN11_SYNC2_BYPASS_V)<<(GPIO_PIN11_SYNC2_BYPASS_S))
#define GPIO_PIN11_SYNC2_BYPASS_V  0x3
#define GPIO_PIN11_SYNC2_BYPASS_S  0

#define GPIO_PIN12_REG          (DR_REG_GPIO_BASE + 0x124)
/* GPIO_PIN12_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN12_INT_ENA    0x0000001F
#define GPIO_PIN12_INT_ENA_M  ((GPIO_PIN12_INT_ENA_V)<<(GPIO_PIN12_INT_ENA_S))
#define GPIO_PIN12_INT_ENA_V  0x1F
#define GPIO_PIN12_INT_ENA_S  13
/* GPIO_PIN12_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN12_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN12_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN12_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN12_WAKEUP_ENABLE_S  10
/* GPIO_PIN12_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN12_INT_TYPE    0x00000007
#define GPIO_PIN12_INT_TYPE_M  ((GPIO_PIN12_INT_TYPE_V)<<(GPIO_PIN12_INT_TYPE_S))
#define GPIO_PIN12_INT_TYPE_V  0x7
#define GPIO_PIN12_INT_TYPE_S  7
/* GPIO_PIN12_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN12_SYNC1_BYPASS    0x00000003
#define GPIO_PIN12_SYNC1_BYPASS_M  ((GPIO_PIN12_SYNC1_BYPASS_V)<<(GPIO_PIN12_SYNC1_BYPASS_S))
#define GPIO_PIN12_SYNC1_BYPASS_V  0x3
#define GPIO_PIN12_SYNC1_BYPASS_S  3
/* GPIO_PIN12_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN12_PAD_DRIVER    (BIT(2))
#define GPIO_PIN12_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN12_PAD_DRIVER_V  0x1
#define GPIO_PIN12_PAD_DRIVER_S  2
/* GPIO_PIN12_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN12_SYNC2_BYPASS    0x00000003
#define GPIO_PIN12_SYNC2_BYPASS_M  ((GPIO_PIN12_SYNC2_BYPASS_V)<<(GPIO_PIN12_SYNC2_BYPASS_S))
#define GPIO_PIN12_SYNC2_BYPASS_V  0x3
#define GPIO_PIN12_SYNC2_BYPASS_S  0

#define GPIO_PIN13_REG          (DR_REG_GPIO_BASE + 0x128)
/* GPIO_PIN13_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN13_INT_ENA    0x0000001F
#define GPIO_PIN13_INT_ENA_M  ((GPIO_PIN13_INT_ENA_V)<<(GPIO_PIN13_INT_ENA_S))
#define GPIO_PIN13_INT_ENA_V  0x1F
#define GPIO_PIN13_INT_ENA_S  13
/* GPIO_PIN13_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN13_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN13_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN13_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN13_WAKEUP_ENABLE_S  10
/* GPIO_PIN13_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN13_INT_TYPE    0x00000007
#define GPIO_PIN13_INT_TYPE_M  ((GPIO_PIN13_INT_TYPE_V)<<(GPIO_PIN13_INT_TYPE_S))
#define GPIO_PIN13_INT_TYPE_V  0x7
#define GPIO_PIN13_INT_TYPE_S  7
/* GPIO_PIN13_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN13_SYNC1_BYPASS    0x00000003
#define GPIO_PIN13_SYNC1_BYPASS_M  ((GPIO_PIN13_SYNC1_BYPASS_V)<<(GPIO_PIN13_SYNC1_BYPASS_S))
#define GPIO_PIN13_SYNC1_BYPASS_V  0x3
#define GPIO_PIN13_SYNC1_BYPASS_S  3
/* GPIO_PIN13_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN13_PAD_DRIVER    (BIT(2))
#define GPIO_PIN13_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN13_PAD_DRIVER_V  0x1
#define GPIO_PIN13_PAD_DRIVER_S  2
/* GPIO_PIN13_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN13_SYNC2_BYPASS    0x00000003
#define GPIO_PIN13_SYNC2_BYPASS_M  ((GPIO_PIN13_SYNC2_BYPASS_V)<<(GPIO_PIN13_SYNC2_BYPASS_S))
#define GPIO_PIN13_SYNC2_BYPASS_V  0x3
#define GPIO_PIN13_SYNC2_BYPASS_S  0

#define GPIO_PIN14_REG          (DR_REG_GPIO_BASE + 0x12C)
/* GPIO_PIN14_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN14_INT_ENA    0x0000001F
#define GPIO_PIN14_INT_ENA_M  ((GPIO_PIN14_INT_ENA_V)<<(GPIO_PIN14_INT_ENA_S))
#define GPIO_PIN14_INT_ENA_V  0x1F
#define GPIO_PIN14_INT_ENA_S  13
/* GPIO_PIN14_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN14_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN14_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN14_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN14_WAKEUP_ENABLE_S  10
/* GPIO_PIN14_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN14_INT_TYPE    0x00000007
#define GPIO_PIN14_INT_TYPE_M  ((GPIO_PIN14_INT_TYPE_V)<<(GPIO_PIN14_INT_TYPE_S))
#define GPIO_PIN14_INT_TYPE_V  0x7
#define GPIO_PIN14_INT_TYPE_S  7
/* GPIO_PIN14_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN14_SYNC1_BYPASS    0x00000003
#define GPIO_PIN14_SYNC1_BYPASS_M  ((GPIO_PIN14_SYNC1_BYPASS_V)<<(GPIO_PIN14_SYNC1_BYPASS_S))
#define GPIO_PIN14_SYNC1_BYPASS_V  0x3
#define GPIO_PIN14_SYNC1_BYPASS_S  3
/* GPIO_PIN14_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN14_PAD_DRIVER    (BIT(2))
#define GPIO_PIN14_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN14_PAD_DRIVER_V  0x1
#define GPIO_PIN14_PAD_DRIVER_S  2
/* GPIO_PIN14_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN14_SYNC2_BYPASS    0x00000003
#define GPIO_PIN14_SYNC2_BYPASS_M  ((GPIO_PIN14_SYNC2_BYPASS_V)<<(GPIO_PIN14_SYNC2_BYPASS_S))
#define GPIO_PIN14_SYNC2_BYPASS_V  0x3
#define GPIO_PIN14_SYNC2_BYPASS_S  0

#define GPIO_PIN15_REG          (DR_REG_GPIO_BASE + 0x130)
/* GPIO_PIN15_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN15_INT_ENA    0x0000001F
#define GPIO_PIN15_INT_ENA_M  ((GPIO_PIN15_INT_ENA_V)<<(GPIO_PIN15_INT_ENA_S))
#define GPIO_PIN15_INT_ENA_V  0x1F
#define GPIO_PIN15_INT_ENA_S  13
/* GPIO_PIN15_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN15_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN15_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN15_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN15_WAKEUP_ENABLE_S  10
/* GPIO_PIN15_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN15_INT_TYPE    0x00000007
#define GPIO_PIN15_INT_TYPE_M  ((GPIO_PIN15_INT_TYPE_V)<<(GPIO_PIN15_INT_TYPE_S))
#define GPIO_PIN15_INT_TYPE_V  0x7
#define GPIO_PIN15_INT_TYPE_S  7
/* GPIO_PIN15_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN15_SYNC1_BYPASS    0x00000003
#define GPIO_PIN15_SYNC1_BYPASS_M  ((GPIO_PIN15_SYNC1_BYPASS_V)<<(GPIO_PIN15_SYNC1_BYPASS_S))
#define GPIO_PIN15_SYNC1_BYPASS_V  0x3
#define GPIO_PIN15_SYNC1_BYPASS_S  3
/* GPIO_PIN15_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN15_PAD_DRIVER    (BIT(2))
#define GPIO_PIN15_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN15_PAD_DRIVER_V  0x1
#define GPIO_PIN15_PAD_DRIVER_S  2
/* GPIO_PIN15_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN15_SYNC2_BYPASS    0x00000003
#define GPIO_PIN15_SYNC2_BYPASS_M  ((GPIO_PIN15_SYNC2_BYPASS_V)<<(GPIO_PIN15_SYNC2_BYPASS_S))
#define GPIO_PIN15_SYNC2_BYPASS_V  0x3
#define GPIO_PIN15_SYNC2_BYPASS_S  0

#define GPIO_PIN16_REG          (DR_REG_GPIO_BASE + 0x134)
/* GPIO_PIN16_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN16_INT_ENA    0x0000001F
#define GPIO_PIN16_INT_ENA_M  ((GPIO_PIN16_INT_ENA_V)<<(GPIO_PIN16_INT_ENA_S))
#define GPIO_PIN16_INT_ENA_V  0x1F
#define GPIO_PIN16_INT_ENA_S  13
/* GPIO_PIN16_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN16_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN16_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN16_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN16_WAKEUP_ENABLE_S  10
/* GPIO_PIN16_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN16_INT_TYPE    0x00000007
#define GPIO_PIN16_INT_TYPE_M  ((GPIO_PIN16_INT_TYPE_V)<<(GPIO_PIN16_INT_TYPE_S))
#define GPIO_PIN16_INT_TYPE_V  0x7
#define GPIO_PIN16_INT_TYPE_S  7
/* GPIO_PIN16_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN16_SYNC1_BYPASS    0x00000003
#define GPIO_PIN16_SYNC1_BYPASS_M  ((GPIO_PIN16_SYNC1_BYPASS_V)<<(GPIO_PIN16_SYNC1_BYPASS_S))
#define GPIO_PIN16_SYNC1_BYPASS_V  0x3
#define GPIO_PIN16_SYNC1_BYPASS_S  3
/* GPIO_PIN16_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN16_PAD_DRIVER    (BIT(2))
#define GPIO_PIN16_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN16_PAD_DRIVER_V  0x1
#define GPIO_PIN16_PAD_DRIVER_S  2
/* GPIO_PIN16_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN16_SYNC2_BYPASS    0x00000003
#define GPIO_PIN16_SYNC2_BYPASS_M  ((GPIO_PIN16_SYNC2_BYPASS_V)<<(GPIO_PIN16_SYNC2_BYPASS_S))
#define GPIO_PIN16_SYNC2_BYPASS_V  0x3
#define GPIO_PIN16_SYNC2_BYPASS_S  0

#define GPIO_PIN17_REG          (DR_REG_GPIO_BASE + 0x138)
/* GPIO_PIN17_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN17_INT_ENA    0x0000001F
#define GPIO_PIN17_INT_ENA_M  ((GPIO_PIN17_INT_ENA_V)<<(GPIO_PIN17_INT_ENA_S))
#define GPIO_PIN17_INT_ENA_V  0x1F
#define GPIO_PIN17_INT_ENA_S  13
/* GPIO_PIN17_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN17_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN17_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN17_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN17_WAKEUP_ENABLE_S  10
/* GPIO_PIN17_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN17_INT_TYPE    0x00000007
#define GPIO_PIN17_INT_TYPE_M  ((GPIO_PIN17_INT_TYPE_V)<<(GPIO_PIN17_INT_TYPE_S))
#define GPIO_PIN17_INT_TYPE_V  0x7
#define GPIO_PIN17_INT_TYPE_S  7
/* GPIO_PIN17_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN17_SYNC1_BYPASS    0x00000003
#define GPIO_PIN17_SYNC1_BYPASS_M  ((GPIO_PIN17_SYNC1_BYPASS_V)<<(GPIO_PIN17_SYNC1_BYPASS_S))
#define GPIO_PIN17_SYNC1_BYPASS_V  0x3
#define GPIO_PIN17_SYNC1_BYPASS_S  3
/* GPIO_PIN17_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN17_PAD_DRIVER    (BIT(2))
#define GPIO_PIN17_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN17_PAD_DRIVER_V  0x1
#define GPIO_PIN17_PAD_DRIVER_S  2
/* GPIO_PIN17_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN17_SYNC2_BYPASS    0x00000003
#define GPIO_PIN17_SYNC2_BYPASS_M  ((GPIO_PIN17_SYNC2_BYPASS_V)<<(GPIO_PIN17_SYNC2_BYPASS_S))
#define GPIO_PIN17_SYNC2_BYPASS_V  0x3
#define GPIO_PIN17_SYNC2_BYPASS_S  0

#define GPIO_PIN18_REG          (DR_REG_GPIO_BASE + 0x13C)
/* GPIO_PIN18_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN18_INT_ENA    0x0000001F
#define GPIO_PIN18_INT_ENA_M  ((GPIO_PIN18_INT_ENA_V)<<(GPIO_PIN18_INT_ENA_S))
#define GPIO_PIN18_INT_ENA_V  0x1F
#define GPIO_PIN18_INT_ENA_S  13
/* GPIO_PIN18_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN18_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN18_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN18_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN18_WAKEUP_ENABLE_S  10
/* GPIO_PIN18_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN18_INT_TYPE    0x00000007
#define GPIO_PIN18_INT_TYPE_M  ((GPIO_PIN18_INT_TYPE_V)<<(GPIO_PIN18_INT_TYPE_S))
#define GPIO_PIN18_INT_TYPE_V  0x7
#define GPIO_PIN18_INT_TYPE_S  7
/* GPIO_PIN18_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN18_SYNC1_BYPASS    0x00000003
#define GPIO_PIN18_SYNC1_BYPASS_M  ((GPIO_PIN18_SYNC1_BYPASS_V)<<(GPIO_PIN18_SYNC1_BYPASS_S))
#define GPIO_PIN18_SYNC1_BYPASS_V  0x3
#define GPIO_PIN18_SYNC1_BYPASS_S  3
/* GPIO_PIN18_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN18_PAD_DRIVER    (BIT(2))
#define GPIO_PIN18_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN18_PAD_DRIVER_V  0x1
#define GPIO_PIN18_PAD_DRIVER_S  2
/* GPIO_PIN18_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN18_SYNC2_BYPASS    0x00000003
#define GPIO_PIN18_SYNC2_BYPASS_M  ((GPIO_PIN18_SYNC2_BYPASS_V)<<(GPIO_PIN18_SYNC2_BYPASS_S))
#define GPIO_PIN18_SYNC2_BYPASS_V  0x3
#define GPIO_PIN18_SYNC2_BYPASS_S  0

#define GPIO_PIN19_REG          (DR_REG_GPIO_BASE + 0x140)
/* GPIO_PIN19_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN19_INT_ENA    0x0000001F
#define GPIO_PIN19_INT_ENA_M  ((GPIO_PIN19_INT_ENA_V)<<(GPIO_PIN19_INT_ENA_S))
#define GPIO_PIN19_INT_ENA_V  0x1F
#define GPIO_PIN19_INT_ENA_S  13
/* GPIO_PIN19_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN19_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN19_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN19_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN19_WAKEUP_ENABLE_S  10
/* GPIO_PIN19_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN19_INT_TYPE    0x00000007
#define GPIO_PIN19_INT_TYPE_M  ((GPIO_PIN19_INT_TYPE_V)<<(GPIO_PIN19_INT_TYPE_S))
#define GPIO_PIN19_INT_TYPE_V  0x7
#define GPIO_PIN19_INT_TYPE_S  7
/* GPIO_PIN19_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN19_SYNC1_BYPASS    0x00000003
#define GPIO_PIN19_SYNC1_BYPASS_M  ((GPIO_PIN19_SYNC1_BYPASS_V)<<(GPIO_PIN19_SYNC1_BYPASS_S))
#define GPIO_PIN19_SYNC1_BYPASS_V  0x3
#define GPIO_PIN19_SYNC1_BYPASS_S  3
/* GPIO_PIN19_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN19_PAD_DRIVER    (BIT(2))
#define GPIO_PIN19_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN19_PAD_DRIVER_V  0x1
#define GPIO_PIN19_PAD_DRIVER_S  2
/* GPIO_PIN19_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN19_SYNC2_BYPASS    0x00000003
#define GPIO_PIN19_SYNC2_BYPASS_M  ((GPIO_PIN19_SYNC2_BYPASS_V)<<(GPIO_PIN19_SYNC2_BYPASS_S))
#define GPIO_PIN19_SYNC2_BYPASS_V  0x3
#define GPIO_PIN19_SYNC2_BYPASS_S  0

#define GPIO_PIN20_REG          (DR_REG_GPIO_BASE + 0x144)
/* GPIO_PIN20_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN20_INT_ENA    0x0000001F
#define GPIO_PIN20_INT_ENA_M  ((GPIO_PIN20_INT_ENA_V)<<(GPIO_PIN20_INT_ENA_S))
#define GPIO_PIN20_INT_ENA_V  0x1F
#define GPIO_PIN20_INT_ENA_S  13
/* GPIO_PIN20_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN20_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN20_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN20_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN20_WAKEUP_ENABLE_S  10
/* GPIO_PIN20_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN20_INT_TYPE    0x00000007
#define GPIO_PIN20_INT_TYPE_M  ((GPIO_PIN20_INT_TYPE_V)<<(GPIO_PIN20_INT_TYPE_S))
#define GPIO_PIN20_INT_TYPE_V  0x7
#define GPIO_PIN20_INT_TYPE_S  7
/* GPIO_PIN20_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN20_SYNC1_BYPASS    0x00000003
#define GPIO_PIN20_SYNC1_BYPASS_M  ((GPIO_PIN20_SYNC1_BYPASS_V)<<(GPIO_PIN20_SYNC1_BYPASS_S))
#define GPIO_PIN20_SYNC1_BYPASS_V  0x3
#define GPIO_PIN20_SYNC1_BYPASS_S  3
/* GPIO_PIN20_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN20_PAD_DRIVER    (BIT(2))
#define GPIO_PIN20_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN20_PAD_DRIVER_V  0x1
#define GPIO_PIN20_PAD_DRIVER_S  2
/* GPIO_PIN20_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN20_SYNC2_BYPASS    0x00000003
#define GPIO_PIN20_SYNC2_BYPASS_M  ((GPIO_PIN20_SYNC2_BYPASS_V)<<(GPIO_PIN20_SYNC2_BYPASS_S))
#define GPIO_PIN20_SYNC2_BYPASS_V  0x3
#define GPIO_PIN20_SYNC2_BYPASS_S  0

#define GPIO_PIN21_REG          (DR_REG_GPIO_BASE + 0x148)
/* GPIO_PIN21_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN21_INT_ENA    0x0000001F
#define GPIO_PIN21_INT_ENA_M  ((GPIO_PIN21_INT_ENA_V)<<(GPIO_PIN21_INT_ENA_S))
#define GPIO_PIN21_INT_ENA_V  0x1F
#define GPIO_PIN21_INT_ENA_S  13
/* GPIO_PIN21_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN21_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN21_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN21_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN21_WAKEUP_ENABLE_S  10
/* GPIO_PIN21_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN21_INT_TYPE    0x00000007
#define GPIO_PIN21_INT_TYPE_M  ((GPIO_PIN21_INT_TYPE_V)<<(GPIO_PIN21_INT_TYPE_S))
#define GPIO_PIN21_INT_TYPE_V  0x7
#define GPIO_PIN21_INT_TYPE_S  7
/* GPIO_PIN21_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN21_SYNC1_BYPASS    0x00000003
#define GPIO_PIN21_SYNC1_BYPASS_M  ((GPIO_PIN21_SYNC1_BYPASS_V)<<(GPIO_PIN21_SYNC1_BYPASS_S))
#define GPIO_PIN21_SYNC1_BYPASS_V  0x3
#define GPIO_PIN21_SYNC1_BYPASS_S  3
/* GPIO_PIN21_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN21_PAD_DRIVER    (BIT(2))
#define GPIO_PIN21_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN21_PAD_DRIVER_V  0x1
#define GPIO_PIN21_PAD_DRIVER_S  2
/* GPIO_PIN21_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN21_SYNC2_BYPASS    0x00000003
#define GPIO_PIN21_SYNC2_BYPASS_M  ((GPIO_PIN21_SYNC2_BYPASS_V)<<(GPIO_PIN21_SYNC2_BYPASS_S))
#define GPIO_PIN21_SYNC2_BYPASS_V  0x3
#define GPIO_PIN21_SYNC2_BYPASS_S  0

#define GPIO_PIN22_REG          (DR_REG_GPIO_BASE + 0x14C)
/* GPIO_PIN22_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN22_INT_ENA    0x0000001F
#define GPIO_PIN22_INT_ENA_M  ((GPIO_PIN22_INT_ENA_V)<<(GPIO_PIN22_INT_ENA_S))
#define GPIO_PIN22_INT_ENA_V  0x1F
#define GPIO_PIN22_INT_ENA_S  13
/* GPIO_PIN22_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN22_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN22_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN22_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN22_WAKEUP_ENABLE_S  10
/* GPIO_PIN22_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN22_INT_TYPE    0x00000007
#define GPIO_PIN22_INT_TYPE_M  ((GPIO_PIN22_INT_TYPE_V)<<(GPIO_PIN22_INT_TYPE_S))
#define GPIO_PIN22_INT_TYPE_V  0x7
#define GPIO_PIN22_INT_TYPE_S  7
/* GPIO_PIN22_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN22_SYNC1_BYPASS    0x00000003
#define GPIO_PIN22_SYNC1_BYPASS_M  ((GPIO_PIN22_SYNC1_BYPASS_V)<<(GPIO_PIN22_SYNC1_BYPASS_S))
#define GPIO_PIN22_SYNC1_BYPASS_V  0x3
#define GPIO_PIN22_SYNC1_BYPASS_S  3
/* GPIO_PIN22_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN22_PAD_DRIVER    (BIT(2))
#define GPIO_PIN22_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN22_PAD_DRIVER_V  0x1
#define GPIO_PIN22_PAD_DRIVER_S  2
/* GPIO_PIN22_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN22_SYNC2_BYPASS    0x00000003
#define GPIO_PIN22_SYNC2_BYPASS_M  ((GPIO_PIN22_SYNC2_BYPASS_V)<<(GPIO_PIN22_SYNC2_BYPASS_S))
#define GPIO_PIN22_SYNC2_BYPASS_V  0x3
#define GPIO_PIN22_SYNC2_BYPASS_S  0

#define GPIO_PIN23_REG          (DR_REG_GPIO_BASE + 0x150)
/* GPIO_PIN23_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN23_INT_ENA    0x0000001F
#define GPIO_PIN23_INT_ENA_M  ((GPIO_PIN23_INT_ENA_V)<<(GPIO_PIN23_INT_ENA_S))
#define GPIO_PIN23_INT_ENA_V  0x1F
#define GPIO_PIN23_INT_ENA_S  13
/* GPIO_PIN23_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN23_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN23_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN23_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN23_WAKEUP_ENABLE_S  10
/* GPIO_PIN23_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN23_INT_TYPE    0x00000007
#define GPIO_PIN23_INT_TYPE_M  ((GPIO_PIN23_INT_TYPE_V)<<(GPIO_PIN23_INT_TYPE_S))
#define GPIO_PIN23_INT_TYPE_V  0x7
#define GPIO_PIN23_INT_TYPE_S  7
/* GPIO_PIN23_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN23_SYNC1_BYPASS    0x00000003
#define GPIO_PIN23_SYNC1_BYPASS_M  ((GPIO_PIN23_SYNC1_BYPASS_V)<<(GPIO_PIN23_SYNC1_BYPASS_S))
#define GPIO_PIN23_SYNC1_BYPASS_V  0x3
#define GPIO_PIN23_SYNC1_BYPASS_S  3
/* GPIO_PIN23_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN23_PAD_DRIVER    (BIT(2))
#define GPIO_PIN23_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN23_PAD_DRIVER_V  0x1
#define GPIO_PIN23_PAD_DRIVER_S  2
/* GPIO_PIN23_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN23_SYNC2_BYPASS    0x00000003
#define GPIO_PIN23_SYNC2_BYPASS_M  ((GPIO_PIN23_SYNC2_BYPASS_V)<<(GPIO_PIN23_SYNC2_BYPASS_S))
#define GPIO_PIN23_SYNC2_BYPASS_V  0x3
#define GPIO_PIN23_SYNC2_BYPASS_S  0

#define GPIO_PIN24_REG          (DR_REG_GPIO_BASE + 0x154)
/* GPIO_PIN24_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN24_INT_ENA    0x0000001F
#define GPIO_PIN24_INT_ENA_M  ((GPIO_PIN24_INT_ENA_V)<<(GPIO_PIN24_INT_ENA_S))
#define GPIO_PIN24_INT_ENA_V  0x1F
#define GPIO_PIN24_INT_ENA_S  13
/* GPIO_PIN24_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN24_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN24_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN24_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN24_WAKEUP_ENABLE_S  10
/* GPIO_PIN24_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN24_INT_TYPE    0x00000007
#define GPIO_PIN24_INT_TYPE_M  ((GPIO_PIN24_INT_TYPE_V)<<(GPIO_PIN24_INT_TYPE_S))
#define GPIO_PIN24_INT_TYPE_V  0x7
#define GPIO_PIN24_INT_TYPE_S  7
/* GPIO_PIN24_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN24_SYNC1_BYPASS    0x00000003
#define GPIO_PIN24_SYNC1_BYPASS_M  ((GPIO_PIN24_SYNC1_BYPASS_V)<<(GPIO_PIN24_SYNC1_BYPASS_S))
#define GPIO_PIN24_SYNC1_BYPASS_V  0x3
#define GPIO_PIN24_SYNC1_BYPASS_S  3
/* GPIO_PIN24_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN24_PAD_DRIVER    (BIT(2))
#define GPIO_PIN24_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN24_PAD_DRIVER_V  0x1
#define GPIO_PIN24_PAD_DRIVER_S  2
/* GPIO_PIN24_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN24_SYNC2_BYPASS    0x00000003
#define GPIO_PIN24_SYNC2_BYPASS_M  ((GPIO_PIN24_SYNC2_BYPASS_V)<<(GPIO_PIN24_SYNC2_BYPASS_S))
#define GPIO_PIN24_SYNC2_BYPASS_V  0x3
#define GPIO_PIN24_SYNC2_BYPASS_S  0

#define GPIO_PIN25_REG          (DR_REG_GPIO_BASE + 0x158)
/* GPIO_PIN25_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN25_INT_ENA    0x0000001F
#define GPIO_PIN25_INT_ENA_M  ((GPIO_PIN25_INT_ENA_V)<<(GPIO_PIN25_INT_ENA_S))
#define GPIO_PIN25_INT_ENA_V  0x1F
#define GPIO_PIN25_INT_ENA_S  13
/* GPIO_PIN25_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN25_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN25_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN25_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN25_WAKEUP_ENABLE_S  10
/* GPIO_PIN25_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN25_INT_TYPE    0x00000007
#define GPIO_PIN25_INT_TYPE_M  ((GPIO_PIN25_INT_TYPE_V)<<(GPIO_PIN25_INT_TYPE_S))
#define GPIO_PIN25_INT_TYPE_V  0x7
#define GPIO_PIN25_INT_TYPE_S  7
/* GPIO_PIN25_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN25_SYNC1_BYPASS    0x00000003
#define GPIO_PIN25_SYNC1_BYPASS_M  ((GPIO_PIN25_SYNC1_BYPASS_V)<<(GPIO_PIN25_SYNC1_BYPASS_S))
#define GPIO_PIN25_SYNC1_BYPASS_V  0x3
#define GPIO_PIN25_SYNC1_BYPASS_S  3
/* GPIO_PIN25_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN25_PAD_DRIVER    (BIT(2))
#define GPIO_PIN25_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN25_PAD_DRIVER_V  0x1
#define GPIO_PIN25_PAD_DRIVER_S  2
/* GPIO_PIN25_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN25_SYNC2_BYPASS    0x00000003
#define GPIO_PIN25_SYNC2_BYPASS_M  ((GPIO_PIN25_SYNC2_BYPASS_V)<<(GPIO_PIN25_SYNC2_BYPASS_S))
#define GPIO_PIN25_SYNC2_BYPASS_V  0x3
#define GPIO_PIN25_SYNC2_BYPASS_S  0

#define GPIO_PIN26_REG          (DR_REG_GPIO_BASE + 0x15C)
/* GPIO_PIN26_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN26_INT_ENA    0x0000001F
#define GPIO_PIN26_INT_ENA_M  ((GPIO_PIN26_INT_ENA_V)<<(GPIO_PIN26_INT_ENA_S))
#define GPIO_PIN26_INT_ENA_V  0x1F
#define GPIO_PIN26_INT_ENA_S  13
/* GPIO_PIN26_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN26_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN26_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN26_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN26_WAKEUP_ENABLE_S  10
/* GPIO_PIN26_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN26_INT_TYPE    0x00000007
#define GPIO_PIN26_INT_TYPE_M  ((GPIO_PIN26_INT_TYPE_V)<<(GPIO_PIN26_INT_TYPE_S))
#define GPIO_PIN26_INT_TYPE_V  0x7
#define GPIO_PIN26_INT_TYPE_S  7
/* GPIO_PIN26_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN26_SYNC1_BYPASS    0x00000003
#define GPIO_PIN26_SYNC1_BYPASS_M  ((GPIO_PIN26_SYNC1_BYPASS_V)<<(GPIO_PIN26_SYNC1_BYPASS_S))
#define GPIO_PIN26_SYNC1_BYPASS_V  0x3
#define GPIO_PIN26_SYNC1_BYPASS_S  3
/* GPIO_PIN26_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN26_PAD_DRIVER    (BIT(2))
#define GPIO_PIN26_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN26_PAD_DRIVER_V  0x1
#define GPIO_PIN26_PAD_DRIVER_S  2
/* GPIO_PIN26_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN26_SYNC2_BYPASS    0x00000003
#define GPIO_PIN26_SYNC2_BYPASS_M  ((GPIO_PIN26_SYNC2_BYPASS_V)<<(GPIO_PIN26_SYNC2_BYPASS_S))
#define GPIO_PIN26_SYNC2_BYPASS_V  0x3
#define GPIO_PIN26_SYNC2_BYPASS_S  0

#define GPIO_PIN27_REG          (DR_REG_GPIO_BASE + 0x160)
/* GPIO_PIN27_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN27_INT_ENA    0x0000001F
#define GPIO_PIN27_INT_ENA_M  ((GPIO_PIN27_INT_ENA_V)<<(GPIO_PIN27_INT_ENA_S))
#define GPIO_PIN27_INT_ENA_V  0x1F
#define GPIO_PIN27_INT_ENA_S  13
/* GPIO_PIN27_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN27_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN27_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN27_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN27_WAKEUP_ENABLE_S  10
/* GPIO_PIN27_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN27_INT_TYPE    0x00000007
#define GPIO_PIN27_INT_TYPE_M  ((GPIO_PIN27_INT_TYPE_V)<<(GPIO_PIN27_INT_TYPE_S))
#define GPIO_PIN27_INT_TYPE_V  0x7
#define GPIO_PIN27_INT_TYPE_S  7
/* GPIO_PIN27_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN27_SYNC1_BYPASS    0x00000003
#define GPIO_PIN27_SYNC1_BYPASS_M  ((GPIO_PIN27_SYNC1_BYPASS_V)<<(GPIO_PIN27_SYNC1_BYPASS_S))
#define GPIO_PIN27_SYNC1_BYPASS_V  0x3
#define GPIO_PIN27_SYNC1_BYPASS_S  3
/* GPIO_PIN27_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN27_PAD_DRIVER    (BIT(2))
#define GPIO_PIN27_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN27_PAD_DRIVER_V  0x1
#define GPIO_PIN27_PAD_DRIVER_S  2
/* GPIO_PIN27_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN27_SYNC2_BYPASS    0x00000003
#define GPIO_PIN27_SYNC2_BYPASS_M  ((GPIO_PIN27_SYNC2_BYPASS_V)<<(GPIO_PIN27_SYNC2_BYPASS_S))
#define GPIO_PIN27_SYNC2_BYPASS_V  0x3
#define GPIO_PIN27_SYNC2_BYPASS_S  0

#define GPIO_PIN28_REG          (DR_REG_GPIO_BASE + 0x164)
/* GPIO_PIN28_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN28_INT_ENA    0x0000001F
#define GPIO_PIN28_INT_ENA_M  ((GPIO_PIN28_INT_ENA_V)<<(GPIO_PIN28_INT_ENA_S))
#define GPIO_PIN28_INT_ENA_V  0x1F
#define GPIO_PIN28_INT_ENA_S  13
/* GPIO_PIN28_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN28_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN28_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN28_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN28_WAKEUP_ENABLE_S  10
/* GPIO_PIN28_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN28_INT_TYPE    0x00000007
#define GPIO_PIN28_INT_TYPE_M  ((GPIO_PIN28_INT_TYPE_V)<<(GPIO_PIN28_INT_TYPE_S))
#define GPIO_PIN28_INT_TYPE_V  0x7
#define GPIO_PIN28_INT_TYPE_S  7
/* GPIO_PIN28_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN28_SYNC1_BYPASS    0x00000003
#define GPIO_PIN28_SYNC1_BYPASS_M  ((GPIO_PIN28_SYNC1_BYPASS_V)<<(GPIO_PIN28_SYNC1_BYPASS_S))
#define GPIO_PIN28_SYNC1_BYPASS_V  0x3
#define GPIO_PIN28_SYNC1_BYPASS_S  3
/* GPIO_PIN28_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN28_PAD_DRIVER    (BIT(2))
#define GPIO_PIN28_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN28_PAD_DRIVER_V  0x1
#define GPIO_PIN28_PAD_DRIVER_S  2
/* GPIO_PIN28_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN28_SYNC2_BYPASS    0x00000003
#define GPIO_PIN28_SYNC2_BYPASS_M  ((GPIO_PIN28_SYNC2_BYPASS_V)<<(GPIO_PIN28_SYNC2_BYPASS_S))
#define GPIO_PIN28_SYNC2_BYPASS_V  0x3
#define GPIO_PIN28_SYNC2_BYPASS_S  0

#define GPIO_PIN29_REG          (DR_REG_GPIO_BASE + 0x168)
/* GPIO_PIN29_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN29_INT_ENA    0x0000001F
#define GPIO_PIN29_INT_ENA_M  ((GPIO_PIN29_INT_ENA_V)<<(GPIO_PIN29_INT_ENA_S))
#define GPIO_PIN29_INT_ENA_V  0x1F
#define GPIO_PIN29_INT_ENA_S  13
/* GPIO_PIN29_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN29_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN29_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN29_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN29_WAKEUP_ENABLE_S  10
/* GPIO_PIN29_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN29_INT_TYPE    0x00000007
#define GPIO_PIN29_INT_TYPE_M  ((GPIO_PIN29_INT_TYPE_V)<<(GPIO_PIN29_INT_TYPE_S))
#define GPIO_PIN29_INT_TYPE_V  0x7
#define GPIO_PIN29_INT_TYPE_S  7
/* GPIO_PIN29_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN29_SYNC1_BYPASS    0x00000003
#define GPIO_PIN29_SYNC1_BYPASS_M  ((GPIO_PIN29_SYNC1_BYPASS_V)<<(GPIO_PIN29_SYNC1_BYPASS_S))
#define GPIO_PIN29_SYNC1_BYPASS_V  0x3
#define GPIO_PIN29_SYNC1_BYPASS_S  3
/* GPIO_PIN29_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN29_PAD_DRIVER    (BIT(2))
#define GPIO_PIN29_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN29_PAD_DRIVER_V  0x1
#define GPIO_PIN29_PAD_DRIVER_S  2
/* GPIO_PIN29_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN29_SYNC2_BYPASS    0x00000003
#define GPIO_PIN29_SYNC2_BYPASS_M  ((GPIO_PIN29_SYNC2_BYPASS_V)<<(GPIO_PIN29_SYNC2_BYPASS_S))
#define GPIO_PIN29_SYNC2_BYPASS_V  0x3
#define GPIO_PIN29_SYNC2_BYPASS_S  0

#define GPIO_PIN30_REG          (DR_REG_GPIO_BASE + 0x16C)
/* GPIO_PIN30_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN30_INT_ENA    0x0000001F
#define GPIO_PIN30_INT_ENA_M  ((GPIO_PIN30_INT_ENA_V)<<(GPIO_PIN30_INT_ENA_S))
#define GPIO_PIN30_INT_ENA_V  0x1F
#define GPIO_PIN30_INT_ENA_S  13
/* GPIO_PIN30_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN30_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN30_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN30_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN30_WAKEUP_ENABLE_S  10
/* GPIO_PIN30_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN30_INT_TYPE    0x00000007
#define GPIO_PIN30_INT_TYPE_M  ((GPIO_PIN30_INT_TYPE_V)<<(GPIO_PIN30_INT_TYPE_S))
#define GPIO_PIN30_INT_TYPE_V  0x7
#define GPIO_PIN30_INT_TYPE_S  7
/* GPIO_PIN30_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN30_SYNC1_BYPASS    0x00000003
#define GPIO_PIN30_SYNC1_BYPASS_M  ((GPIO_PIN30_SYNC1_BYPASS_V)<<(GPIO_PIN30_SYNC1_BYPASS_S))
#define GPIO_PIN30_SYNC1_BYPASS_V  0x3
#define GPIO_PIN30_SYNC1_BYPASS_S  3
/* GPIO_PIN30_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN30_PAD_DRIVER    (BIT(2))
#define GPIO_PIN30_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN30_PAD_DRIVER_V  0x1
#define GPIO_PIN30_PAD_DRIVER_S  2
/* GPIO_PIN30_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN30_SYNC2_BYPASS    0x00000003
#define GPIO_PIN30_SYNC2_BYPASS_M  ((GPIO_PIN30_SYNC2_BYPASS_V)<<(GPIO_PIN30_SYNC2_BYPASS_S))
#define GPIO_PIN30_SYNC2_BYPASS_V  0x3
#define GPIO_PIN30_SYNC2_BYPASS_S  0

#define GPIO_PIN31_REG          (DR_REG_GPIO_BASE + 0x170)
/* GPIO_PIN31_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN31_INT_ENA    0x0000001F
#define GPIO_PIN31_INT_ENA_M  ((GPIO_PIN31_INT_ENA_V)<<(GPIO_PIN31_INT_ENA_S))
#define GPIO_PIN31_INT_ENA_V  0x1F
#define GPIO_PIN31_INT_ENA_S  13
/* GPIO_PIN31_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN31_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN31_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN31_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN31_WAKEUP_ENABLE_S  10
/* GPIO_PIN31_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN31_INT_TYPE    0x00000007
#define GPIO_PIN31_INT_TYPE_M  ((GPIO_PIN31_INT_TYPE_V)<<(GPIO_PIN31_INT_TYPE_S))
#define GPIO_PIN31_INT_TYPE_V  0x7
#define GPIO_PIN31_INT_TYPE_S  7
/* GPIO_PIN31_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN31_SYNC1_BYPASS    0x00000003
#define GPIO_PIN31_SYNC1_BYPASS_M  ((GPIO_PIN31_SYNC1_BYPASS_V)<<(GPIO_PIN31_SYNC1_BYPASS_S))
#define GPIO_PIN31_SYNC1_BYPASS_V  0x3
#define GPIO_PIN31_SYNC1_BYPASS_S  3
/* GPIO_PIN31_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN31_PAD_DRIVER    (BIT(2))
#define GPIO_PIN31_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN31_PAD_DRIVER_V  0x1
#define GPIO_PIN31_PAD_DRIVER_S  2
/* GPIO_PIN31_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN31_SYNC2_BYPASS    0x00000003
#define GPIO_PIN31_SYNC2_BYPASS_M  ((GPIO_PIN31_SYNC2_BYPASS_V)<<(GPIO_PIN31_SYNC2_BYPASS_S))
#define GPIO_PIN31_SYNC2_BYPASS_V  0x3
#define GPIO_PIN31_SYNC2_BYPASS_S  0

#define GPIO_PIN32_REG          (DR_REG_GPIO_BASE + 0x174)
/* GPIO_PIN32_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN32_INT_ENA    0x0000001F
#define GPIO_PIN32_INT_ENA_M  ((GPIO_PIN32_INT_ENA_V)<<(GPIO_PIN32_INT_ENA_S))
#define GPIO_PIN32_INT_ENA_V  0x1F
#define GPIO_PIN32_INT_ENA_S  13
/* GPIO_PIN32_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN32_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN32_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN32_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN32_WAKEUP_ENABLE_S  10
/* GPIO_PIN32_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN32_INT_TYPE    0x00000007
#define GPIO_PIN32_INT_TYPE_M  ((GPIO_PIN32_INT_TYPE_V)<<(GPIO_PIN32_INT_TYPE_S))
#define GPIO_PIN32_INT_TYPE_V  0x7
#define GPIO_PIN32_INT_TYPE_S  7
/* GPIO_PIN32_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN32_SYNC1_BYPASS    0x00000003
#define GPIO_PIN32_SYNC1_BYPASS_M  ((GPIO_PIN32_SYNC1_BYPASS_V)<<(GPIO_PIN32_SYNC1_BYPASS_S))
#define GPIO_PIN32_SYNC1_BYPASS_V  0x3
#define GPIO_PIN32_SYNC1_BYPASS_S  3
/* GPIO_PIN32_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN32_PAD_DRIVER    (BIT(2))
#define GPIO_PIN32_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN32_PAD_DRIVER_V  0x1
#define GPIO_PIN32_PAD_DRIVER_S  2
/* GPIO_PIN32_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN32_SYNC2_BYPASS    0x00000003
#define GPIO_PIN32_SYNC2_BYPASS_M  ((GPIO_PIN32_SYNC2_BYPASS_V)<<(GPIO_PIN32_SYNC2_BYPASS_S))
#define GPIO_PIN32_SYNC2_BYPASS_V  0x3
#define GPIO_PIN32_SYNC2_BYPASS_S  0

#define GPIO_PIN33_REG          (DR_REG_GPIO_BASE + 0x178)
/* GPIO_PIN33_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN33_INT_ENA    0x0000001F
#define GPIO_PIN33_INT_ENA_M  ((GPIO_PIN33_INT_ENA_V)<<(GPIO_PIN33_INT_ENA_S))
#define GPIO_PIN33_INT_ENA_V  0x1F
#define GPIO_PIN33_INT_ENA_S  13
/* GPIO_PIN33_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN33_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN33_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN33_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN33_WAKEUP_ENABLE_S  10
/* GPIO_PIN33_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN33_INT_TYPE    0x00000007
#define GPIO_PIN33_INT_TYPE_M  ((GPIO_PIN33_INT_TYPE_V)<<(GPIO_PIN33_INT_TYPE_S))
#define GPIO_PIN33_INT_TYPE_V  0x7
#define GPIO_PIN33_INT_TYPE_S  7
/* GPIO_PIN33_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN33_SYNC1_BYPASS    0x00000003
#define GPIO_PIN33_SYNC1_BYPASS_M  ((GPIO_PIN33_SYNC1_BYPASS_V)<<(GPIO_PIN33_SYNC1_BYPASS_S))
#define GPIO_PIN33_SYNC1_BYPASS_V  0x3
#define GPIO_PIN33_SYNC1_BYPASS_S  3
/* GPIO_PIN33_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN33_PAD_DRIVER    (BIT(2))
#define GPIO_PIN33_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN33_PAD_DRIVER_V  0x1
#define GPIO_PIN33_PAD_DRIVER_S  2
/* GPIO_PIN33_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN33_SYNC2_BYPASS    0x00000003
#define GPIO_PIN33_SYNC2_BYPASS_M  ((GPIO_PIN33_SYNC2_BYPASS_V)<<(GPIO_PIN33_SYNC2_BYPASS_S))
#define GPIO_PIN33_SYNC2_BYPASS_V  0x3
#define GPIO_PIN33_SYNC2_BYPASS_S  0

#define GPIO_PIN34_REG          (DR_REG_GPIO_BASE + 0x17C)
/* GPIO_PIN34_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN34_INT_ENA    0x0000001F
#define GPIO_PIN34_INT_ENA_M  ((GPIO_PIN34_INT_ENA_V)<<(GPIO_PIN34_INT_ENA_S))
#define GPIO_PIN34_INT_ENA_V  0x1F
#define GPIO_PIN34_INT_ENA_S  13
/* GPIO_PIN34_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN34_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN34_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN34_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN34_WAKEUP_ENABLE_S  10
/* GPIO_PIN34_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN34_INT_TYPE    0x00000007
#define GPIO_PIN34_INT_TYPE_M  ((GPIO_PIN34_INT_TYPE_V)<<(GPIO_PIN34_INT_TYPE_S))
#define GPIO_PIN34_INT_TYPE_V  0x7
#define GPIO_PIN34_INT_TYPE_S  7
/* GPIO_PIN34_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN34_SYNC1_BYPASS    0x00000003
#define GPIO_PIN34_SYNC1_BYPASS_M  ((GPIO_PIN34_SYNC1_BYPASS_V)<<(GPIO_PIN34_SYNC1_BYPASS_S))
#define GPIO_PIN34_SYNC1_BYPASS_V  0x3
#define GPIO_PIN34_SYNC1_BYPASS_S  3
/* GPIO_PIN34_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN34_PAD_DRIVER    (BIT(2))
#define GPIO_PIN34_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN34_PAD_DRIVER_V  0x1
#define GPIO_PIN34_PAD_DRIVER_S  2
/* GPIO_PIN34_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN34_SYNC2_BYPASS    0x00000003
#define GPIO_PIN34_SYNC2_BYPASS_M  ((GPIO_PIN34_SYNC2_BYPASS_V)<<(GPIO_PIN34_SYNC2_BYPASS_S))
#define GPIO_PIN34_SYNC2_BYPASS_V  0x3
#define GPIO_PIN34_SYNC2_BYPASS_S  0

#define GPIO_PIN35_REG          (DR_REG_GPIO_BASE + 0x180)
/* GPIO_PIN35_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN35_INT_ENA    0x0000001F
#define GPIO_PIN35_INT_ENA_M  ((GPIO_PIN35_INT_ENA_V)<<(GPIO_PIN35_INT_ENA_S))
#define GPIO_PIN35_INT_ENA_V  0x1F
#define GPIO_PIN35_INT_ENA_S  13
/* GPIO_PIN35_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN35_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN35_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN35_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN35_WAKEUP_ENABLE_S  10
/* GPIO_PIN35_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN35_INT_TYPE    0x00000007
#define GPIO_PIN35_INT_TYPE_M  ((GPIO_PIN35_INT_TYPE_V)<<(GPIO_PIN35_INT_TYPE_S))
#define GPIO_PIN35_INT_TYPE_V  0x7
#define GPIO_PIN35_INT_TYPE_S  7
/* GPIO_PIN35_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN35_SYNC1_BYPASS    0x00000003
#define GPIO_PIN35_SYNC1_BYPASS_M  ((GPIO_PIN35_SYNC1_BYPASS_V)<<(GPIO_PIN35_SYNC1_BYPASS_S))
#define GPIO_PIN35_SYNC1_BYPASS_V  0x3
#define GPIO_PIN35_SYNC1_BYPASS_S  3
/* GPIO_PIN35_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN35_PAD_DRIVER    (BIT(2))
#define GPIO_PIN35_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN35_PAD_DRIVER_V  0x1
#define GPIO_PIN35_PAD_DRIVER_S  2
/* GPIO_PIN35_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN35_SYNC2_BYPASS    0x00000003
#define GPIO_PIN35_SYNC2_BYPASS_M  ((GPIO_PIN35_SYNC2_BYPASS_V)<<(GPIO_PIN35_SYNC2_BYPASS_S))
#define GPIO_PIN35_SYNC2_BYPASS_V  0x3
#define GPIO_PIN35_SYNC2_BYPASS_S  0

#define GPIO_PIN36_REG          (DR_REG_GPIO_BASE + 0x184)
/* GPIO_PIN36_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN36_INT_ENA    0x0000001F
#define GPIO_PIN36_INT_ENA_M  ((GPIO_PIN36_INT_ENA_V)<<(GPIO_PIN36_INT_ENA_S))
#define GPIO_PIN36_INT_ENA_V  0x1F
#define GPIO_PIN36_INT_ENA_S  13
/* GPIO_PIN36_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN36_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN36_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN36_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN36_WAKEUP_ENABLE_S  10
/* GPIO_PIN36_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN36_INT_TYPE    0x00000007
#define GPIO_PIN36_INT_TYPE_M  ((GPIO_PIN36_INT_TYPE_V)<<(GPIO_PIN36_INT_TYPE_S))
#define GPIO_PIN36_INT_TYPE_V  0x7
#define GPIO_PIN36_INT_TYPE_S  7
/* GPIO_PIN36_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN36_SYNC1_BYPASS    0x00000003
#define GPIO_PIN36_SYNC1_BYPASS_M  ((GPIO_PIN36_SYNC1_BYPASS_V)<<(GPIO_PIN36_SYNC1_BYPASS_S))
#define GPIO_PIN36_SYNC1_BYPASS_V  0x3
#define GPIO_PIN36_SYNC1_BYPASS_S  3
/* GPIO_PIN36_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN36_PAD_DRIVER    (BIT(2))
#define GPIO_PIN36_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN36_PAD_DRIVER_V  0x1
#define GPIO_PIN36_PAD_DRIVER_S  2
/* GPIO_PIN36_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN36_SYNC2_BYPASS    0x00000003
#define GPIO_PIN36_SYNC2_BYPASS_M  ((GPIO_PIN36_SYNC2_BYPASS_V)<<(GPIO_PIN36_SYNC2_BYPASS_S))
#define GPIO_PIN36_SYNC2_BYPASS_V  0x3
#define GPIO_PIN36_SYNC2_BYPASS_S  0

#define GPIO_PIN37_REG          (DR_REG_GPIO_BASE + 0x188)
/* GPIO_PIN37_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN37_INT_ENA    0x0000001F
#define GPIO_PIN37_INT_ENA_M  ((GPIO_PIN37_INT_ENA_V)<<(GPIO_PIN37_INT_ENA_S))
#define GPIO_PIN37_INT_ENA_V  0x1F
#define GPIO_PIN37_INT_ENA_S  13
/* GPIO_PIN37_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN37_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN37_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN37_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN37_WAKEUP_ENABLE_S  10
/* GPIO_PIN37_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN37_INT_TYPE    0x00000007
#define GPIO_PIN37_INT_TYPE_M  ((GPIO_PIN37_INT_TYPE_V)<<(GPIO_PIN37_INT_TYPE_S))
#define GPIO_PIN37_INT_TYPE_V  0x7
#define GPIO_PIN37_INT_TYPE_S  7
/* GPIO_PIN37_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN37_SYNC1_BYPASS    0x00000003
#define GPIO_PIN37_SYNC1_BYPASS_M  ((GPIO_PIN37_SYNC1_BYPASS_V)<<(GPIO_PIN37_SYNC1_BYPASS_S))
#define GPIO_PIN37_SYNC1_BYPASS_V  0x3
#define GPIO_PIN37_SYNC1_BYPASS_S  3
/* GPIO_PIN37_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN37_PAD_DRIVER    (BIT(2))
#define GPIO_PIN37_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN37_PAD_DRIVER_V  0x1
#define GPIO_PIN37_PAD_DRIVER_S  2
/* GPIO_PIN37_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN37_SYNC2_BYPASS    0x00000003
#define GPIO_PIN37_SYNC2_BYPASS_M  ((GPIO_PIN37_SYNC2_BYPASS_V)<<(GPIO_PIN37_SYNC2_BYPASS_S))
#define GPIO_PIN37_SYNC2_BYPASS_V  0x3
#define GPIO_PIN37_SYNC2_BYPASS_S  0

#define GPIO_PIN38_REG          (DR_REG_GPIO_BASE + 0x18C)
/* GPIO_PIN38_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN38_INT_ENA    0x0000001F
#define GPIO_PIN38_INT_ENA_M  ((GPIO_PIN38_INT_ENA_V)<<(GPIO_PIN38_INT_ENA_S))
#define GPIO_PIN38_INT_ENA_V  0x1F
#define GPIO_PIN38_INT_ENA_S  13
/* GPIO_PIN38_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN38_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN38_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN38_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN38_WAKEUP_ENABLE_S  10
/* GPIO_PIN38_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN38_INT_TYPE    0x00000007
#define GPIO_PIN38_INT_TYPE_M  ((GPIO_PIN38_INT_TYPE_V)<<(GPIO_PIN38_INT_TYPE_S))
#define GPIO_PIN38_INT_TYPE_V  0x7
#define GPIO_PIN38_INT_TYPE_S  7
/* GPIO_PIN38_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN38_SYNC1_BYPASS    0x00000003
#define GPIO_PIN38_SYNC1_BYPASS_M  ((GPIO_PIN38_SYNC1_BYPASS_V)<<(GPIO_PIN38_SYNC1_BYPASS_S))
#define GPIO_PIN38_SYNC1_BYPASS_V  0x3
#define GPIO_PIN38_SYNC1_BYPASS_S  3
/* GPIO_PIN38_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN38_PAD_DRIVER    (BIT(2))
#define GPIO_PIN38_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN38_PAD_DRIVER_V  0x1
#define GPIO_PIN38_PAD_DRIVER_S  2
/* GPIO_PIN38_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN38_SYNC2_BYPASS    0x00000003
#define GPIO_PIN38_SYNC2_BYPASS_M  ((GPIO_PIN38_SYNC2_BYPASS_V)<<(GPIO_PIN38_SYNC2_BYPASS_S))
#define GPIO_PIN38_SYNC2_BYPASS_V  0x3
#define GPIO_PIN38_SYNC2_BYPASS_S  0

#define GPIO_PIN39_REG          (DR_REG_GPIO_BASE + 0x190)
/* GPIO_PIN39_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN39_INT_ENA    0x0000001F
#define GPIO_PIN39_INT_ENA_M  ((GPIO_PIN39_INT_ENA_V)<<(GPIO_PIN39_INT_ENA_S))
#define GPIO_PIN39_INT_ENA_V  0x1F
#define GPIO_PIN39_INT_ENA_S  13
/* GPIO_PIN39_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN39_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN39_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN39_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN39_WAKEUP_ENABLE_S  10
/* GPIO_PIN39_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN39_INT_TYPE    0x00000007
#define GPIO_PIN39_INT_TYPE_M  ((GPIO_PIN39_INT_TYPE_V)<<(GPIO_PIN39_INT_TYPE_S))
#define GPIO_PIN39_INT_TYPE_V  0x7
#define GPIO_PIN39_INT_TYPE_S  7
/* GPIO_PIN39_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN39_SYNC1_BYPASS    0x00000003
#define GPIO_PIN39_SYNC1_BYPASS_M  ((GPIO_PIN39_SYNC1_BYPASS_V)<<(GPIO_PIN39_SYNC1_BYPASS_S))
#define GPIO_PIN39_SYNC1_BYPASS_V  0x3
#define GPIO_PIN39_SYNC1_BYPASS_S  3
/* GPIO_PIN39_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN39_PAD_DRIVER    (BIT(2))
#define GPIO_PIN39_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN39_PAD_DRIVER_V  0x1
#define GPIO_PIN39_PAD_DRIVER_S  2
/* GPIO_PIN39_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN39_SYNC2_BYPASS    0x00000003
#define GPIO_PIN39_SYNC2_BYPASS_M  ((GPIO_PIN39_SYNC2_BYPASS_V)<<(GPIO_PIN39_SYNC2_BYPASS_S))
#define GPIO_PIN39_SYNC2_BYPASS_V  0x3
#define GPIO_PIN39_SYNC2_BYPASS_S  0

#define GPIO_PIN40_REG          (DR_REG_GPIO_BASE + 0x194)
/* GPIO_PIN40_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN40_INT_ENA    0x0000001F
#define GPIO_PIN40_INT_ENA_M  ((GPIO_PIN40_INT_ENA_V)<<(GPIO_PIN40_INT_ENA_S))
#define GPIO_PIN40_INT_ENA_V  0x1F
#define GPIO_PIN40_INT_ENA_S  13
/* GPIO_PIN40_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN40_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN40_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN40_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN40_WAKEUP_ENABLE_S  10
/* GPIO_PIN40_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN40_INT_TYPE    0x00000007
#define GPIO_PIN40_INT_TYPE_M  ((GPIO_PIN40_INT_TYPE_V)<<(GPIO_PIN40_INT_TYPE_S))
#define GPIO_PIN40_INT_TYPE_V  0x7
#define GPIO_PIN40_INT_TYPE_S  7
/* GPIO_PIN40_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN40_SYNC1_BYPASS    0x00000003
#define GPIO_PIN40_SYNC1_BYPASS_M  ((GPIO_PIN40_SYNC1_BYPASS_V)<<(GPIO_PIN40_SYNC1_BYPASS_S))
#define GPIO_PIN40_SYNC1_BYPASS_V  0x3
#define GPIO_PIN40_SYNC1_BYPASS_S  3
/* GPIO_PIN40_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN40_PAD_DRIVER    (BIT(2))
#define GPIO_PIN40_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN40_PAD_DRIVER_V  0x1
#define GPIO_PIN40_PAD_DRIVER_S  2
/* GPIO_PIN40_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN40_SYNC2_BYPASS    0x00000003
#define GPIO_PIN40_SYNC2_BYPASS_M  ((GPIO_PIN40_SYNC2_BYPASS_V)<<(GPIO_PIN40_SYNC2_BYPASS_S))
#define GPIO_PIN40_SYNC2_BYPASS_V  0x3
#define GPIO_PIN40_SYNC2_BYPASS_S  0

#define GPIO_PIN41_REG          (DR_REG_GPIO_BASE + 0x198)
/* GPIO_PIN41_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN41_INT_ENA    0x0000001F
#define GPIO_PIN41_INT_ENA_M  ((GPIO_PIN41_INT_ENA_V)<<(GPIO_PIN41_INT_ENA_S))
#define GPIO_PIN41_INT_ENA_V  0x1F
#define GPIO_PIN41_INT_ENA_S  13
/* GPIO_PIN41_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN41_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN41_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN41_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN41_WAKEUP_ENABLE_S  10
/* GPIO_PIN41_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN41_INT_TYPE    0x00000007
#define GPIO_PIN41_INT_TYPE_M  ((GPIO_PIN41_INT_TYPE_V)<<(GPIO_PIN41_INT_TYPE_S))
#define GPIO_PIN41_INT_TYPE_V  0x7
#define GPIO_PIN41_INT_TYPE_S  7
/* GPIO_PIN41_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN41_SYNC1_BYPASS    0x00000003
#define GPIO_PIN41_SYNC1_BYPASS_M  ((GPIO_PIN41_SYNC1_BYPASS_V)<<(GPIO_PIN41_SYNC1_BYPASS_S))
#define GPIO_PIN41_SYNC1_BYPASS_V  0x3
#define GPIO_PIN41_SYNC1_BYPASS_S  3
/* GPIO_PIN41_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN41_PAD_DRIVER    (BIT(2))
#define GPIO_PIN41_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN41_PAD_DRIVER_V  0x1
#define GPIO_PIN41_PAD_DRIVER_S  2
/* GPIO_PIN41_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN41_SYNC2_BYPASS    0x00000003
#define GPIO_PIN41_SYNC2_BYPASS_M  ((GPIO_PIN41_SYNC2_BYPASS_V)<<(GPIO_PIN41_SYNC2_BYPASS_S))
#define GPIO_PIN41_SYNC2_BYPASS_V  0x3
#define GPIO_PIN41_SYNC2_BYPASS_S  0

#define GPIO_PIN42_REG          (DR_REG_GPIO_BASE + 0x19C)
/* GPIO_PIN42_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN42_INT_ENA    0x0000001F
#define GPIO_PIN42_INT_ENA_M  ((GPIO_PIN42_INT_ENA_V)<<(GPIO_PIN42_INT_ENA_S))
#define GPIO_PIN42_INT_ENA_V  0x1F
#define GPIO_PIN42_INT_ENA_S  13
/* GPIO_PIN42_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN42_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN42_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN42_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN42_WAKEUP_ENABLE_S  10
/* GPIO_PIN42_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN42_INT_TYPE    0x00000007
#define GPIO_PIN42_INT_TYPE_M  ((GPIO_PIN42_INT_TYPE_V)<<(GPIO_PIN42_INT_TYPE_S))
#define GPIO_PIN42_INT_TYPE_V  0x7
#define GPIO_PIN42_INT_TYPE_S  7
/* GPIO_PIN42_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN42_SYNC1_BYPASS    0x00000003
#define GPIO_PIN42_SYNC1_BYPASS_M  ((GPIO_PIN42_SYNC1_BYPASS_V)<<(GPIO_PIN42_SYNC1_BYPASS_S))
#define GPIO_PIN42_SYNC1_BYPASS_V  0x3
#define GPIO_PIN42_SYNC1_BYPASS_S  3
/* GPIO_PIN42_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN42_PAD_DRIVER    (BIT(2))
#define GPIO_PIN42_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN42_PAD_DRIVER_V  0x1
#define GPIO_PIN42_PAD_DRIVER_S  2
/* GPIO_PIN42_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN42_SYNC2_BYPASS    0x00000003
#define GPIO_PIN42_SYNC2_BYPASS_M  ((GPIO_PIN42_SYNC2_BYPASS_V)<<(GPIO_PIN42_SYNC2_BYPASS_S))
#define GPIO_PIN42_SYNC2_BYPASS_V  0x3
#define GPIO_PIN42_SYNC2_BYPASS_S  0

#define GPIO_PIN43_REG          (DR_REG_GPIO_BASE + 0x1A0)
/* GPIO_PIN43_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN43_INT_ENA    0x0000001F
#define GPIO_PIN43_INT_ENA_M  ((GPIO_PIN43_INT_ENA_V)<<(GPIO_PIN43_INT_ENA_S))
#define GPIO_PIN43_INT_ENA_V  0x1F
#define GPIO_PIN43_INT_ENA_S  13
/* GPIO_PIN43_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN43_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN43_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN43_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN43_WAKEUP_ENABLE_S  10
/* GPIO_PIN43_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN43_INT_TYPE    0x00000007
#define GPIO_PIN43_INT_TYPE_M  ((GPIO_PIN43_INT_TYPE_V)<<(GPIO_PIN43_INT_TYPE_S))
#define GPIO_PIN43_INT_TYPE_V  0x7
#define GPIO_PIN43_INT_TYPE_S  7
/* GPIO_PIN43_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN43_SYNC1_BYPASS    0x00000003
#define GPIO_PIN43_SYNC1_BYPASS_M  ((GPIO_PIN43_SYNC1_BYPASS_V)<<(GPIO_PIN43_SYNC1_BYPASS_S))
#define GPIO_PIN43_SYNC1_BYPASS_V  0x3
#define GPIO_PIN43_SYNC1_BYPASS_S  3
/* GPIO_PIN43_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN43_PAD_DRIVER    (BIT(2))
#define GPIO_PIN43_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN43_PAD_DRIVER_V  0x1
#define GPIO_PIN43_PAD_DRIVER_S  2
/* GPIO_PIN43_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN43_SYNC2_BYPASS    0x00000003
#define GPIO_PIN43_SYNC2_BYPASS_M  ((GPIO_PIN43_SYNC2_BYPASS_V)<<(GPIO_PIN43_SYNC2_BYPASS_S))
#define GPIO_PIN43_SYNC2_BYPASS_V  0x3
#define GPIO_PIN43_SYNC2_BYPASS_S  0

#define GPIO_PIN44_REG          (DR_REG_GPIO_BASE + 0x1A4)
/* GPIO_PIN44_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN44_INT_ENA    0x0000001F
#define GPIO_PIN44_INT_ENA_M  ((GPIO_PIN44_INT_ENA_V)<<(GPIO_PIN44_INT_ENA_S))
#define GPIO_PIN44_INT_ENA_V  0x1F
#define GPIO_PIN44_INT_ENA_S  13
/* GPIO_PIN44_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN44_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN44_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN44_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN44_WAKEUP_ENABLE_S  10
/* GPIO_PIN44_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN44_INT_TYPE    0x00000007
#define GPIO_PIN44_INT_TYPE_M  ((GPIO_PIN44_INT_TYPE_V)<<(GPIO_PIN44_INT_TYPE_S))
#define GPIO_PIN44_INT_TYPE_V  0x7
#define GPIO_PIN44_INT_TYPE_S  7
/* GPIO_PIN44_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN44_SYNC1_BYPASS    0x00000003
#define GPIO_PIN44_SYNC1_BYPASS_M  ((GPIO_PIN44_SYNC1_BYPASS_V)<<(GPIO_PIN44_SYNC1_BYPASS_S))
#define GPIO_PIN44_SYNC1_BYPASS_V  0x3
#define GPIO_PIN44_SYNC1_BYPASS_S  3
/* GPIO_PIN44_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN44_PAD_DRIVER    (BIT(2))
#define GPIO_PIN44_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN44_PAD_DRIVER_V  0x1
#define GPIO_PIN44_PAD_DRIVER_S  2
/* GPIO_PIN44_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN44_SYNC2_BYPASS    0x00000003
#define GPIO_PIN44_SYNC2_BYPASS_M  ((GPIO_PIN44_SYNC2_BYPASS_V)<<(GPIO_PIN44_SYNC2_BYPASS_S))
#define GPIO_PIN44_SYNC2_BYPASS_V  0x3
#define GPIO_PIN44_SYNC2_BYPASS_S  0

#define GPIO_PIN45_REG          (DR_REG_GPIO_BASE + 0x1A8)
/* GPIO_PIN45_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN45_INT_ENA    0x0000001F
#define GPIO_PIN45_INT_ENA_M  ((GPIO_PIN45_INT_ENA_V)<<(GPIO_PIN45_INT_ENA_S))
#define GPIO_PIN45_INT_ENA_V  0x1F
#define GPIO_PIN45_INT_ENA_S  13
/* GPIO_PIN45_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN45_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN45_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN45_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN45_WAKEUP_ENABLE_S  10
/* GPIO_PIN45_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN45_INT_TYPE    0x00000007
#define GPIO_PIN45_INT_TYPE_M  ((GPIO_PIN45_INT_TYPE_V)<<(GPIO_PIN45_INT_TYPE_S))
#define GPIO_PIN45_INT_TYPE_V  0x7
#define GPIO_PIN45_INT_TYPE_S  7
/* GPIO_PIN45_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN45_SYNC1_BYPASS    0x00000003
#define GPIO_PIN45_SYNC1_BYPASS_M  ((GPIO_PIN45_SYNC1_BYPASS_V)<<(GPIO_PIN45_SYNC1_BYPASS_S))
#define GPIO_PIN45_SYNC1_BYPASS_V  0x3
#define GPIO_PIN45_SYNC1_BYPASS_S  3
/* GPIO_PIN45_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN45_PAD_DRIVER    (BIT(2))
#define GPIO_PIN45_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN45_PAD_DRIVER_V  0x1
#define GPIO_PIN45_PAD_DRIVER_S  2
/* GPIO_PIN45_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN45_SYNC2_BYPASS    0x00000003
#define GPIO_PIN45_SYNC2_BYPASS_M  ((GPIO_PIN45_SYNC2_BYPASS_V)<<(GPIO_PIN45_SYNC2_BYPASS_S))
#define GPIO_PIN45_SYNC2_BYPASS_V  0x3
#define GPIO_PIN45_SYNC2_BYPASS_S  0

#define GPIO_PIN46_REG          (DR_REG_GPIO_BASE + 0x1AC)
/* GPIO_PIN46_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN46_INT_ENA    0x0000001F
#define GPIO_PIN46_INT_ENA_M  ((GPIO_PIN46_INT_ENA_V)<<(GPIO_PIN46_INT_ENA_S))
#define GPIO_PIN46_INT_ENA_V  0x1F
#define GPIO_PIN46_INT_ENA_S  13
/* GPIO_PIN46_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN46_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN46_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN46_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN46_WAKEUP_ENABLE_S  10
/* GPIO_PIN46_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN46_INT_TYPE    0x00000007
#define GPIO_PIN46_INT_TYPE_M  ((GPIO_PIN46_INT_TYPE_V)<<(GPIO_PIN46_INT_TYPE_S))
#define GPIO_PIN46_INT_TYPE_V  0x7
#define GPIO_PIN46_INT_TYPE_S  7
/* GPIO_PIN46_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN46_SYNC1_BYPASS    0x00000003
#define GPIO_PIN46_SYNC1_BYPASS_M  ((GPIO_PIN46_SYNC1_BYPASS_V)<<(GPIO_PIN46_SYNC1_BYPASS_S))
#define GPIO_PIN46_SYNC1_BYPASS_V  0x3
#define GPIO_PIN46_SYNC1_BYPASS_S  3
/* GPIO_PIN46_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN46_PAD_DRIVER    (BIT(2))
#define GPIO_PIN46_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN46_PAD_DRIVER_V  0x1
#define GPIO_PIN46_PAD_DRIVER_S  2
/* GPIO_PIN46_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN46_SYNC2_BYPASS    0x00000003
#define GPIO_PIN46_SYNC2_BYPASS_M  ((GPIO_PIN46_SYNC2_BYPASS_V)<<(GPIO_PIN46_SYNC2_BYPASS_S))
#define GPIO_PIN46_SYNC2_BYPASS_V  0x3
#define GPIO_PIN46_SYNC2_BYPASS_S  0

#define GPIO_PIN47_REG          (DR_REG_GPIO_BASE + 0x1B0)
/* GPIO_PIN47_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN47_INT_ENA    0x0000001F
#define GPIO_PIN47_INT_ENA_M  ((GPIO_PIN47_INT_ENA_V)<<(GPIO_PIN47_INT_ENA_S))
#define GPIO_PIN47_INT_ENA_V  0x1F
#define GPIO_PIN47_INT_ENA_S  13
/* GPIO_PIN47_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN47_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN47_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN47_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN47_WAKEUP_ENABLE_S  10
/* GPIO_PIN47_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN47_INT_TYPE    0x00000007
#define GPIO_PIN47_INT_TYPE_M  ((GPIO_PIN47_INT_TYPE_V)<<(GPIO_PIN47_INT_TYPE_S))
#define GPIO_PIN47_INT_TYPE_V  0x7
#define GPIO_PIN47_INT_TYPE_S  7
/* GPIO_PIN47_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN47_SYNC1_BYPASS    0x00000003
#define GPIO_PIN47_SYNC1_BYPASS_M  ((GPIO_PIN47_SYNC1_BYPASS_V)<<(GPIO_PIN47_SYNC1_BYPASS_S))
#define GPIO_PIN47_SYNC1_BYPASS_V  0x3
#define GPIO_PIN47_SYNC1_BYPASS_S  3
/* GPIO_PIN47_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN47_PAD_DRIVER    (BIT(2))
#define GPIO_PIN47_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN47_PAD_DRIVER_V  0x1
#define GPIO_PIN47_PAD_DRIVER_S  2
/* GPIO_PIN47_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN47_SYNC2_BYPASS    0x00000003
#define GPIO_PIN47_SYNC2_BYPASS_M  ((GPIO_PIN47_SYNC2_BYPASS_V)<<(GPIO_PIN47_SYNC2_BYPASS_S))
#define GPIO_PIN47_SYNC2_BYPASS_V  0x3
#define GPIO_PIN47_SYNC2_BYPASS_S  0

#define GPIO_PIN48_REG          (DR_REG_GPIO_BASE + 0x1B4)
/* GPIO_PIN48_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN48_INT_ENA    0x0000001F
#define GPIO_PIN48_INT_ENA_M  ((GPIO_PIN48_INT_ENA_V)<<(GPIO_PIN48_INT_ENA_S))
#define GPIO_PIN48_INT_ENA_V  0x1F
#define GPIO_PIN48_INT_ENA_S  13
/* GPIO_PIN48_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN48_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN48_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN48_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN48_WAKEUP_ENABLE_S  10
/* GPIO_PIN48_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN48_INT_TYPE    0x00000007
#define GPIO_PIN48_INT_TYPE_M  ((GPIO_PIN48_INT_TYPE_V)<<(GPIO_PIN48_INT_TYPE_S))
#define GPIO_PIN48_INT_TYPE_V  0x7
#define GPIO_PIN48_INT_TYPE_S  7
/* GPIO_PIN48_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN48_SYNC1_BYPASS    0x00000003
#define GPIO_PIN48_SYNC1_BYPASS_M  ((GPIO_PIN48_SYNC1_BYPASS_V)<<(GPIO_PIN48_SYNC1_BYPASS_S))
#define GPIO_PIN48_SYNC1_BYPASS_V  0x3
#define GPIO_PIN48_SYNC1_BYPASS_S  3
/* GPIO_PIN48_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN48_PAD_DRIVER    (BIT(2))
#define GPIO_PIN48_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN48_PAD_DRIVER_V  0x1
#define GPIO_PIN48_PAD_DRIVER_S  2
/* GPIO_PIN48_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN48_SYNC2_BYPASS    0x00000003
#define GPIO_PIN48_SYNC2_BYPASS_M  ((GPIO_PIN48_SYNC2_BYPASS_V)<<(GPIO_PIN48_SYNC2_BYPASS_S))
#define GPIO_PIN48_SYNC2_BYPASS_V  0x3
#define GPIO_PIN48_SYNC2_BYPASS_S  0

#define GPIO_PIN49_REG          (DR_REG_GPIO_BASE + 0x1B8)
/* GPIO_PIN49_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN49_INT_ENA    0x0000001F
#define GPIO_PIN49_INT_ENA_M  ((GPIO_PIN49_INT_ENA_V)<<(GPIO_PIN49_INT_ENA_S))
#define GPIO_PIN49_INT_ENA_V  0x1F
#define GPIO_PIN49_INT_ENA_S  13
/* GPIO_PIN49_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN49_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN49_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN49_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN49_WAKEUP_ENABLE_S  10
/* GPIO_PIN49_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN49_INT_TYPE    0x00000007
#define GPIO_PIN49_INT_TYPE_M  ((GPIO_PIN49_INT_TYPE_V)<<(GPIO_PIN49_INT_TYPE_S))
#define GPIO_PIN49_INT_TYPE_V  0x7
#define GPIO_PIN49_INT_TYPE_S  7
/* GPIO_PIN49_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN49_SYNC1_BYPASS    0x00000003
#define GPIO_PIN49_SYNC1_BYPASS_M  ((GPIO_PIN49_SYNC1_BYPASS_V)<<(GPIO_PIN49_SYNC1_BYPASS_S))
#define GPIO_PIN49_SYNC1_BYPASS_V  0x3
#define GPIO_PIN49_SYNC1_BYPASS_S  3
/* GPIO_PIN49_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN49_PAD_DRIVER    (BIT(2))
#define GPIO_PIN49_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN49_PAD_DRIVER_V  0x1
#define GPIO_PIN49_PAD_DRIVER_S  2
/* GPIO_PIN49_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN49_SYNC2_BYPASS    0x00000003
#define GPIO_PIN49_SYNC2_BYPASS_M  ((GPIO_PIN49_SYNC2_BYPASS_V)<<(GPIO_PIN49_SYNC2_BYPASS_S))
#define GPIO_PIN49_SYNC2_BYPASS_V  0x3
#define GPIO_PIN49_SYNC2_BYPASS_S  0

#define GPIO_PIN50_REG          (DR_REG_GPIO_BASE + 0x1BC)
/* GPIO_PIN50_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN50_INT_ENA    0x0000001F
#define GPIO_PIN50_INT_ENA_M  ((GPIO_PIN50_INT_ENA_V)<<(GPIO_PIN50_INT_ENA_S))
#define GPIO_PIN50_INT_ENA_V  0x1F
#define GPIO_PIN50_INT_ENA_S  13
/* GPIO_PIN50_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN50_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN50_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN50_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN50_WAKEUP_ENABLE_S  10
/* GPIO_PIN50_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN50_INT_TYPE    0x00000007
#define GPIO_PIN50_INT_TYPE_M  ((GPIO_PIN50_INT_TYPE_V)<<(GPIO_PIN50_INT_TYPE_S))
#define GPIO_PIN50_INT_TYPE_V  0x7
#define GPIO_PIN50_INT_TYPE_S  7
/* GPIO_PIN50_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN50_SYNC1_BYPASS    0x00000003
#define GPIO_PIN50_SYNC1_BYPASS_M  ((GPIO_PIN50_SYNC1_BYPASS_V)<<(GPIO_PIN50_SYNC1_BYPASS_S))
#define GPIO_PIN50_SYNC1_BYPASS_V  0x3
#define GPIO_PIN50_SYNC1_BYPASS_S  3
/* GPIO_PIN50_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN50_PAD_DRIVER    (BIT(2))
#define GPIO_PIN50_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN50_PAD_DRIVER_V  0x1
#define GPIO_PIN50_PAD_DRIVER_S  2
/* GPIO_PIN50_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN50_SYNC2_BYPASS    0x00000003
#define GPIO_PIN50_SYNC2_BYPASS_M  ((GPIO_PIN50_SYNC2_BYPASS_V)<<(GPIO_PIN50_SYNC2_BYPASS_S))
#define GPIO_PIN50_SYNC2_BYPASS_V  0x3
#define GPIO_PIN50_SYNC2_BYPASS_S  0

#define GPIO_PIN51_REG          (DR_REG_GPIO_BASE + 0x1C0)
/* GPIO_PIN51_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN51_INT_ENA    0x0000001F
#define GPIO_PIN51_INT_ENA_M  ((GPIO_PIN51_INT_ENA_V)<<(GPIO_PIN51_INT_ENA_S))
#define GPIO_PIN51_INT_ENA_V  0x1F
#define GPIO_PIN51_INT_ENA_S  13
/* GPIO_PIN51_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN51_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN51_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN51_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN51_WAKEUP_ENABLE_S  10
/* GPIO_PIN51_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN51_INT_TYPE    0x00000007
#define GPIO_PIN51_INT_TYPE_M  ((GPIO_PIN51_INT_TYPE_V)<<(GPIO_PIN51_INT_TYPE_S))
#define GPIO_PIN51_INT_TYPE_V  0x7
#define GPIO_PIN51_INT_TYPE_S  7
/* GPIO_PIN51_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN51_SYNC1_BYPASS    0x00000003
#define GPIO_PIN51_SYNC1_BYPASS_M  ((GPIO_PIN51_SYNC1_BYPASS_V)<<(GPIO_PIN51_SYNC1_BYPASS_S))
#define GPIO_PIN51_SYNC1_BYPASS_V  0x3
#define GPIO_PIN51_SYNC1_BYPASS_S  3
/* GPIO_PIN51_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN51_PAD_DRIVER    (BIT(2))
#define GPIO_PIN51_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN51_PAD_DRIVER_V  0x1
#define GPIO_PIN51_PAD_DRIVER_S  2
/* GPIO_PIN51_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN51_SYNC2_BYPASS    0x00000003
#define GPIO_PIN51_SYNC2_BYPASS_M  ((GPIO_PIN51_SYNC2_BYPASS_V)<<(GPIO_PIN51_SYNC2_BYPASS_S))
#define GPIO_PIN51_SYNC2_BYPASS_V  0x3
#define GPIO_PIN51_SYNC2_BYPASS_S  0

#define GPIO_PIN52_REG          (DR_REG_GPIO_BASE + 0x1C4)
/* GPIO_PIN52_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN52_INT_ENA    0x0000001F
#define GPIO_PIN52_INT_ENA_M  ((GPIO_PIN52_INT_ENA_V)<<(GPIO_PIN52_INT_ENA_S))
#define GPIO_PIN52_INT_ENA_V  0x1F
#define GPIO_PIN52_INT_ENA_S  13
/* GPIO_PIN52_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN52_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN52_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN52_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN52_WAKEUP_ENABLE_S  10
/* GPIO_PIN52_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN52_INT_TYPE    0x00000007
#define GPIO_PIN52_INT_TYPE_M  ((GPIO_PIN52_INT_TYPE_V)<<(GPIO_PIN52_INT_TYPE_S))
#define GPIO_PIN52_INT_TYPE_V  0x7
#define GPIO_PIN52_INT_TYPE_S  7
/* GPIO_PIN52_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN52_SYNC1_BYPASS    0x00000003
#define GPIO_PIN52_SYNC1_BYPASS_M  ((GPIO_PIN52_SYNC1_BYPASS_V)<<(GPIO_PIN52_SYNC1_BYPASS_S))
#define GPIO_PIN52_SYNC1_BYPASS_V  0x3
#define GPIO_PIN52_SYNC1_BYPASS_S  3
/* GPIO_PIN52_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN52_PAD_DRIVER    (BIT(2))
#define GPIO_PIN52_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN52_PAD_DRIVER_V  0x1
#define GPIO_PIN52_PAD_DRIVER_S  2
/* GPIO_PIN52_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN52_SYNC2_BYPASS    0x00000003
#define GPIO_PIN52_SYNC2_BYPASS_M  ((GPIO_PIN52_SYNC2_BYPASS_V)<<(GPIO_PIN52_SYNC2_BYPASS_S))
#define GPIO_PIN52_SYNC2_BYPASS_V  0x3
#define GPIO_PIN52_SYNC2_BYPASS_S  0

#define GPIO_PIN53_REG          (DR_REG_GPIO_BASE + 0x1C8)
/* GPIO_PIN53_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN53_INT_ENA    0x0000001F
#define GPIO_PIN53_INT_ENA_M  ((GPIO_PIN53_INT_ENA_V)<<(GPIO_PIN53_INT_ENA_S))
#define GPIO_PIN53_INT_ENA_V  0x1F
#define GPIO_PIN53_INT_ENA_S  13
/* GPIO_PIN53_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN53_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN53_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN53_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN53_WAKEUP_ENABLE_S  10
/* GPIO_PIN53_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN53_INT_TYPE    0x00000007
#define GPIO_PIN53_INT_TYPE_M  ((GPIO_PIN53_INT_TYPE_V)<<(GPIO_PIN53_INT_TYPE_S))
#define GPIO_PIN53_INT_TYPE_V  0x7
#define GPIO_PIN53_INT_TYPE_S  7
/* GPIO_PIN53_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN53_SYNC1_BYPASS    0x00000003
#define GPIO_PIN53_SYNC1_BYPASS_M  ((GPIO_PIN53_SYNC1_BYPASS_V)<<(GPIO_PIN53_SYNC1_BYPASS_S))
#define GPIO_PIN53_SYNC1_BYPASS_V  0x3
#define GPIO_PIN53_SYNC1_BYPASS_S  3
/* GPIO_PIN53_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN53_PAD_DRIVER    (BIT(2))
#define GPIO_PIN53_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN53_PAD_DRIVER_V  0x1
#define GPIO_PIN53_PAD_DRIVER_S  2
/* GPIO_PIN53_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN53_SYNC2_BYPASS    0x00000003
#define GPIO_PIN53_SYNC2_BYPASS_M  ((GPIO_PIN53_SYNC2_BYPASS_V)<<(GPIO_PIN53_SYNC2_BYPASS_S))
#define GPIO_PIN53_SYNC2_BYPASS_V  0x3
#define GPIO_PIN53_SYNC2_BYPASS_S  0

#define GPIO_PIN54_REG          (DR_REG_GPIO_BASE + 0x1CC)
/* GPIO_PIN54_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN54_INT_ENA    0x0000001F
#define GPIO_PIN54_INT_ENA_M  ((GPIO_PIN54_INT_ENA_V)<<(GPIO_PIN54_INT_ENA_S))
#define GPIO_PIN54_INT_ENA_V  0x1F
#define GPIO_PIN54_INT_ENA_S  13
/* GPIO_PIN54_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN54_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN54_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN54_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN54_WAKEUP_ENABLE_S  10
/* GPIO_PIN54_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN54_INT_TYPE    0x00000007
#define GPIO_PIN54_INT_TYPE_M  ((GPIO_PIN54_INT_TYPE_V)<<(GPIO_PIN54_INT_TYPE_S))
#define GPIO_PIN54_INT_TYPE_V  0x7
#define GPIO_PIN54_INT_TYPE_S  7
/* GPIO_PIN54_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN54_SYNC1_BYPASS    0x00000003
#define GPIO_PIN54_SYNC1_BYPASS_M  ((GPIO_PIN54_SYNC1_BYPASS_V)<<(GPIO_PIN54_SYNC1_BYPASS_S))
#define GPIO_PIN54_SYNC1_BYPASS_V  0x3
#define GPIO_PIN54_SYNC1_BYPASS_S  3
/* GPIO_PIN54_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN54_PAD_DRIVER    (BIT(2))
#define GPIO_PIN54_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN54_PAD_DRIVER_V  0x1
#define GPIO_PIN54_PAD_DRIVER_S  2
/* GPIO_PIN54_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN54_SYNC2_BYPASS    0x00000003
#define GPIO_PIN54_SYNC2_BYPASS_M  ((GPIO_PIN54_SYNC2_BYPASS_V)<<(GPIO_PIN54_SYNC2_BYPASS_S))
#define GPIO_PIN54_SYNC2_BYPASS_V  0x3
#define GPIO_PIN54_SYNC2_BYPASS_S  0

#define GPIO_PIN55_REG          (DR_REG_GPIO_BASE + 0x1D0)
/* GPIO_PIN55_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN55_INT_ENA    0x0000001F
#define GPIO_PIN55_INT_ENA_M  ((GPIO_PIN55_INT_ENA_V)<<(GPIO_PIN55_INT_ENA_S))
#define GPIO_PIN55_INT_ENA_V  0x1F
#define GPIO_PIN55_INT_ENA_S  13
/* GPIO_PIN55_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN55_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN55_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN55_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN55_WAKEUP_ENABLE_S  10
/* GPIO_PIN55_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN55_INT_TYPE    0x00000007
#define GPIO_PIN55_INT_TYPE_M  ((GPIO_PIN55_INT_TYPE_V)<<(GPIO_PIN55_INT_TYPE_S))
#define GPIO_PIN55_INT_TYPE_V  0x7
#define GPIO_PIN55_INT_TYPE_S  7
/* GPIO_PIN55_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN55_SYNC1_BYPASS    0x00000003
#define GPIO_PIN55_SYNC1_BYPASS_M  ((GPIO_PIN55_SYNC1_BYPASS_V)<<(GPIO_PIN55_SYNC1_BYPASS_S))
#define GPIO_PIN55_SYNC1_BYPASS_V  0x3
#define GPIO_PIN55_SYNC1_BYPASS_S  3
/* GPIO_PIN55_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN55_PAD_DRIVER    (BIT(2))
#define GPIO_PIN55_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN55_PAD_DRIVER_V  0x1
#define GPIO_PIN55_PAD_DRIVER_S  2
/* GPIO_PIN55_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN55_SYNC2_BYPASS    0x00000003
#define GPIO_PIN55_SYNC2_BYPASS_M  ((GPIO_PIN55_SYNC2_BYPASS_V)<<(GPIO_PIN55_SYNC2_BYPASS_S))
#define GPIO_PIN55_SYNC2_BYPASS_V  0x3
#define GPIO_PIN55_SYNC2_BYPASS_S  0

#define GPIO_PIN56_REG          (DR_REG_GPIO_BASE + 0x1D4)
/* GPIO_PIN56_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN56_INT_ENA    0x0000001F
#define GPIO_PIN56_INT_ENA_M  ((GPIO_PIN56_INT_ENA_V)<<(GPIO_PIN56_INT_ENA_S))
#define GPIO_PIN56_INT_ENA_V  0x1F
#define GPIO_PIN56_INT_ENA_S  13
/* GPIO_PIN56_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN56_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN56_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN56_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN56_WAKEUP_ENABLE_S  10
/* GPIO_PIN56_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN56_INT_TYPE    0x00000007
#define GPIO_PIN56_INT_TYPE_M  ((GPIO_PIN56_INT_TYPE_V)<<(GPIO_PIN56_INT_TYPE_S))
#define GPIO_PIN56_INT_TYPE_V  0x7
#define GPIO_PIN56_INT_TYPE_S  7
/* GPIO_PIN56_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN56_SYNC1_BYPASS    0x00000003
#define GPIO_PIN56_SYNC1_BYPASS_M  ((GPIO_PIN56_SYNC1_BYPASS_V)<<(GPIO_PIN56_SYNC1_BYPASS_S))
#define GPIO_PIN56_SYNC1_BYPASS_V  0x3
#define GPIO_PIN56_SYNC1_BYPASS_S  3
/* GPIO_PIN56_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN56_PAD_DRIVER    (BIT(2))
#define GPIO_PIN56_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN56_PAD_DRIVER_V  0x1
#define GPIO_PIN56_PAD_DRIVER_S  2
/* GPIO_PIN56_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN56_SYNC2_BYPASS    0x00000003
#define GPIO_PIN56_SYNC2_BYPASS_M  ((GPIO_PIN56_SYNC2_BYPASS_V)<<(GPIO_PIN56_SYNC2_BYPASS_S))
#define GPIO_PIN56_SYNC2_BYPASS_V  0x3
#define GPIO_PIN56_SYNC2_BYPASS_S  0

#define GPIO_PIN57_REG          (DR_REG_GPIO_BASE + 0x1D8)
/* GPIO_PIN57_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN57_INT_ENA    0x0000001F
#define GPIO_PIN57_INT_ENA_M  ((GPIO_PIN57_INT_ENA_V)<<(GPIO_PIN57_INT_ENA_S))
#define GPIO_PIN57_INT_ENA_V  0x1F
#define GPIO_PIN57_INT_ENA_S  13
/* GPIO_PIN57_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN57_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN57_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN57_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN57_WAKEUP_ENABLE_S  10
/* GPIO_PIN57_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN57_INT_TYPE    0x00000007
#define GPIO_PIN57_INT_TYPE_M  ((GPIO_PIN57_INT_TYPE_V)<<(GPIO_PIN57_INT_TYPE_S))
#define GPIO_PIN57_INT_TYPE_V  0x7
#define GPIO_PIN57_INT_TYPE_S  7
/* GPIO_PIN57_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN57_SYNC1_BYPASS    0x00000003
#define GPIO_PIN57_SYNC1_BYPASS_M  ((GPIO_PIN57_SYNC1_BYPASS_V)<<(GPIO_PIN57_SYNC1_BYPASS_S))
#define GPIO_PIN57_SYNC1_BYPASS_V  0x3
#define GPIO_PIN57_SYNC1_BYPASS_S  3
/* GPIO_PIN57_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN57_PAD_DRIVER    (BIT(2))
#define GPIO_PIN57_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN57_PAD_DRIVER_V  0x1
#define GPIO_PIN57_PAD_DRIVER_S  2
/* GPIO_PIN57_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN57_SYNC2_BYPASS    0x00000003
#define GPIO_PIN57_SYNC2_BYPASS_M  ((GPIO_PIN57_SYNC2_BYPASS_V)<<(GPIO_PIN57_SYNC2_BYPASS_S))
#define GPIO_PIN57_SYNC2_BYPASS_V  0x3
#define GPIO_PIN57_SYNC2_BYPASS_S  0

#define GPIO_PIN58_REG          (DR_REG_GPIO_BASE + 0x1DC)
/* GPIO_PIN58_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN58_INT_ENA    0x0000001F
#define GPIO_PIN58_INT_ENA_M  ((GPIO_PIN58_INT_ENA_V)<<(GPIO_PIN58_INT_ENA_S))
#define GPIO_PIN58_INT_ENA_V  0x1F
#define GPIO_PIN58_INT_ENA_S  13
/* GPIO_PIN58_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN58_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN58_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN58_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN58_WAKEUP_ENABLE_S  10
/* GPIO_PIN58_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN58_INT_TYPE    0x00000007
#define GPIO_PIN58_INT_TYPE_M  ((GPIO_PIN58_INT_TYPE_V)<<(GPIO_PIN58_INT_TYPE_S))
#define GPIO_PIN58_INT_TYPE_V  0x7
#define GPIO_PIN58_INT_TYPE_S  7
/* GPIO_PIN58_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN58_SYNC1_BYPASS    0x00000003
#define GPIO_PIN58_SYNC1_BYPASS_M  ((GPIO_PIN58_SYNC1_BYPASS_V)<<(GPIO_PIN58_SYNC1_BYPASS_S))
#define GPIO_PIN58_SYNC1_BYPASS_V  0x3
#define GPIO_PIN58_SYNC1_BYPASS_S  3
/* GPIO_PIN58_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN58_PAD_DRIVER    (BIT(2))
#define GPIO_PIN58_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN58_PAD_DRIVER_V  0x1
#define GPIO_PIN58_PAD_DRIVER_S  2
/* GPIO_PIN58_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN58_SYNC2_BYPASS    0x00000003
#define GPIO_PIN58_SYNC2_BYPASS_M  ((GPIO_PIN58_SYNC2_BYPASS_V)<<(GPIO_PIN58_SYNC2_BYPASS_S))
#define GPIO_PIN58_SYNC2_BYPASS_V  0x3
#define GPIO_PIN58_SYNC2_BYPASS_S  0

#define GPIO_PIN59_REG          (DR_REG_GPIO_BASE + 0x1E0)
/* GPIO_PIN59_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN59_INT_ENA    0x0000001F
#define GPIO_PIN59_INT_ENA_M  ((GPIO_PIN59_INT_ENA_V)<<(GPIO_PIN59_INT_ENA_S))
#define GPIO_PIN59_INT_ENA_V  0x1F
#define GPIO_PIN59_INT_ENA_S  13
/* GPIO_PIN59_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN59_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN59_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN59_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN59_WAKEUP_ENABLE_S  10
/* GPIO_PIN59_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN59_INT_TYPE    0x00000007
#define GPIO_PIN59_INT_TYPE_M  ((GPIO_PIN59_INT_TYPE_V)<<(GPIO_PIN59_INT_TYPE_S))
#define GPIO_PIN59_INT_TYPE_V  0x7
#define GPIO_PIN59_INT_TYPE_S  7
/* GPIO_PIN59_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN59_SYNC1_BYPASS    0x00000003
#define GPIO_PIN59_SYNC1_BYPASS_M  ((GPIO_PIN59_SYNC1_BYPASS_V)<<(GPIO_PIN59_SYNC1_BYPASS_S))
#define GPIO_PIN59_SYNC1_BYPASS_V  0x3
#define GPIO_PIN59_SYNC1_BYPASS_S  3
/* GPIO_PIN59_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN59_PAD_DRIVER    (BIT(2))
#define GPIO_PIN59_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN59_PAD_DRIVER_V  0x1
#define GPIO_PIN59_PAD_DRIVER_S  2
/* GPIO_PIN59_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN59_SYNC2_BYPASS    0x00000003
#define GPIO_PIN59_SYNC2_BYPASS_M  ((GPIO_PIN59_SYNC2_BYPASS_V)<<(GPIO_PIN59_SYNC2_BYPASS_S))
#define GPIO_PIN59_SYNC2_BYPASS_V  0x3
#define GPIO_PIN59_SYNC2_BYPASS_S  0

#define GPIO_PIN60_REG          (DR_REG_GPIO_BASE + 0x1E4)
/* GPIO_PIN60_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN60_INT_ENA    0x0000001F
#define GPIO_PIN60_INT_ENA_M  ((GPIO_PIN60_INT_ENA_V)<<(GPIO_PIN60_INT_ENA_S))
#define GPIO_PIN60_INT_ENA_V  0x1F
#define GPIO_PIN60_INT_ENA_S  13
/* GPIO_PIN60_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN60_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN60_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN60_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN60_WAKEUP_ENABLE_S  10
/* GPIO_PIN60_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN60_INT_TYPE    0x00000007
#define GPIO_PIN60_INT_TYPE_M  ((GPIO_PIN60_INT_TYPE_V)<<(GPIO_PIN60_INT_TYPE_S))
#define GPIO_PIN60_INT_TYPE_V  0x7
#define GPIO_PIN60_INT_TYPE_S  7
/* GPIO_PIN60_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN60_SYNC1_BYPASS    0x00000003
#define GPIO_PIN60_SYNC1_BYPASS_M  ((GPIO_PIN60_SYNC1_BYPASS_V)<<(GPIO_PIN60_SYNC1_BYPASS_S))
#define GPIO_PIN60_SYNC1_BYPASS_V  0x3
#define GPIO_PIN60_SYNC1_BYPASS_S  3
/* GPIO_PIN60_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN60_PAD_DRIVER    (BIT(2))
#define GPIO_PIN60_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN60_PAD_DRIVER_V  0x1
#define GPIO_PIN60_PAD_DRIVER_S  2
/* GPIO_PIN60_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN60_SYNC2_BYPASS    0x00000003
#define GPIO_PIN60_SYNC2_BYPASS_M  ((GPIO_PIN60_SYNC2_BYPASS_V)<<(GPIO_PIN60_SYNC2_BYPASS_S))
#define GPIO_PIN60_SYNC2_BYPASS_V  0x3
#define GPIO_PIN60_SYNC2_BYPASS_S  0

#define GPIO_PIN61_REG          (DR_REG_GPIO_BASE + 0x1E8)
/* GPIO_PIN61_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN61_INT_ENA    0x0000001F
#define GPIO_PIN61_INT_ENA_M  ((GPIO_PIN61_INT_ENA_V)<<(GPIO_PIN61_INT_ENA_S))
#define GPIO_PIN61_INT_ENA_V  0x1F
#define GPIO_PIN61_INT_ENA_S  13
/* GPIO_PIN61_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN61_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN61_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN61_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN61_WAKEUP_ENABLE_S  10
/* GPIO_PIN61_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN61_INT_TYPE    0x00000007
#define GPIO_PIN61_INT_TYPE_M  ((GPIO_PIN61_INT_TYPE_V)<<(GPIO_PIN61_INT_TYPE_S))
#define GPIO_PIN61_INT_TYPE_V  0x7
#define GPIO_PIN61_INT_TYPE_S  7
/* GPIO_PIN61_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN61_SYNC1_BYPASS    0x00000003
#define GPIO_PIN61_SYNC1_BYPASS_M  ((GPIO_PIN61_SYNC1_BYPASS_V)<<(GPIO_PIN61_SYNC1_BYPASS_S))
#define GPIO_PIN61_SYNC1_BYPASS_V  0x3
#define GPIO_PIN61_SYNC1_BYPASS_S  3
/* GPIO_PIN61_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN61_PAD_DRIVER    (BIT(2))
#define GPIO_PIN61_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN61_PAD_DRIVER_V  0x1
#define GPIO_PIN61_PAD_DRIVER_S  2
/* GPIO_PIN61_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN61_SYNC2_BYPASS    0x00000003
#define GPIO_PIN61_SYNC2_BYPASS_M  ((GPIO_PIN61_SYNC2_BYPASS_V)<<(GPIO_PIN61_SYNC2_BYPASS_S))
#define GPIO_PIN61_SYNC2_BYPASS_V  0x3
#define GPIO_PIN61_SYNC2_BYPASS_S  0

#define GPIO_PIN62_REG          (DR_REG_GPIO_BASE + 0x1EC)
/* GPIO_PIN62_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN62_INT_ENA    0x0000001F
#define GPIO_PIN62_INT_ENA_M  ((GPIO_PIN62_INT_ENA_V)<<(GPIO_PIN62_INT_ENA_S))
#define GPIO_PIN62_INT_ENA_V  0x1F
#define GPIO_PIN62_INT_ENA_S  13
/* GPIO_PIN62_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN62_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN62_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN62_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN62_WAKEUP_ENABLE_S  10
/* GPIO_PIN62_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN62_INT_TYPE    0x00000007
#define GPIO_PIN62_INT_TYPE_M  ((GPIO_PIN62_INT_TYPE_V)<<(GPIO_PIN62_INT_TYPE_S))
#define GPIO_PIN62_INT_TYPE_V  0x7
#define GPIO_PIN62_INT_TYPE_S  7
/* GPIO_PIN62_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN62_SYNC1_BYPASS    0x00000003
#define GPIO_PIN62_SYNC1_BYPASS_M  ((GPIO_PIN62_SYNC1_BYPASS_V)<<(GPIO_PIN62_SYNC1_BYPASS_S))
#define GPIO_PIN62_SYNC1_BYPASS_V  0x3
#define GPIO_PIN62_SYNC1_BYPASS_S  3
/* GPIO_PIN62_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN62_PAD_DRIVER    (BIT(2))
#define GPIO_PIN62_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN62_PAD_DRIVER_V  0x1
#define GPIO_PIN62_PAD_DRIVER_S  2
/* GPIO_PIN62_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN62_SYNC2_BYPASS    0x00000003
#define GPIO_PIN62_SYNC2_BYPASS_M  ((GPIO_PIN62_SYNC2_BYPASS_V)<<(GPIO_PIN62_SYNC2_BYPASS_S))
#define GPIO_PIN62_SYNC2_BYPASS_V  0x3
#define GPIO_PIN62_SYNC2_BYPASS_S  0

#define GPIO_PIN63_REG          (DR_REG_GPIO_BASE + 0x1F0)
/* GPIO_PIN63_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN63_INT_ENA    0x0000001F
#define GPIO_PIN63_INT_ENA_M  ((GPIO_PIN63_INT_ENA_V)<<(GPIO_PIN63_INT_ENA_S))
#define GPIO_PIN63_INT_ENA_V  0x1F
#define GPIO_PIN63_INT_ENA_S  13
/* GPIO_PIN63_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN63_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN63_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN63_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN63_WAKEUP_ENABLE_S  10
/* GPIO_PIN63_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN63_INT_TYPE    0x00000007
#define GPIO_PIN63_INT_TYPE_M  ((GPIO_PIN63_INT_TYPE_V)<<(GPIO_PIN63_INT_TYPE_S))
#define GPIO_PIN63_INT_TYPE_V  0x7
#define GPIO_PIN63_INT_TYPE_S  7
/* GPIO_PIN63_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN63_SYNC1_BYPASS    0x00000003
#define GPIO_PIN63_SYNC1_BYPASS_M  ((GPIO_PIN63_SYNC1_BYPASS_V)<<(GPIO_PIN63_SYNC1_BYPASS_S))
#define GPIO_PIN63_SYNC1_BYPASS_V  0x3
#define GPIO_PIN63_SYNC1_BYPASS_S  3
/* GPIO_PIN63_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN63_PAD_DRIVER    (BIT(2))
#define GPIO_PIN63_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN63_PAD_DRIVER_V  0x1
#define GPIO_PIN63_PAD_DRIVER_S  2
/* GPIO_PIN63_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN63_SYNC2_BYPASS    0x00000003
#define GPIO_PIN63_SYNC2_BYPASS_M  ((GPIO_PIN63_SYNC2_BYPASS_V)<<(GPIO_PIN63_SYNC2_BYPASS_S))
#define GPIO_PIN63_SYNC2_BYPASS_V  0x3
#define GPIO_PIN63_SYNC2_BYPASS_S  0

#define GPIO_PIN64_REG          (DR_REG_GPIO_BASE + 0x1F4)
/* GPIO_PIN64_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN64_INT_ENA    0x0000001F
#define GPIO_PIN64_INT_ENA_M  ((GPIO_PIN64_INT_ENA_V)<<(GPIO_PIN64_INT_ENA_S))
#define GPIO_PIN64_INT_ENA_V  0x1F
#define GPIO_PIN64_INT_ENA_S  13
/* GPIO_PIN64_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN64_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN64_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN64_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN64_WAKEUP_ENABLE_S  10
/* GPIO_PIN64_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN64_INT_TYPE    0x00000007
#define GPIO_PIN64_INT_TYPE_M  ((GPIO_PIN64_INT_TYPE_V)<<(GPIO_PIN64_INT_TYPE_S))
#define GPIO_PIN64_INT_TYPE_V  0x7
#define GPIO_PIN64_INT_TYPE_S  7
/* GPIO_PIN64_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN64_SYNC1_BYPASS    0x00000003
#define GPIO_PIN64_SYNC1_BYPASS_M  ((GPIO_PIN64_SYNC1_BYPASS_V)<<(GPIO_PIN64_SYNC1_BYPASS_S))
#define GPIO_PIN64_SYNC1_BYPASS_V  0x3
#define GPIO_PIN64_SYNC1_BYPASS_S  3
/* GPIO_PIN64_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN64_PAD_DRIVER    (BIT(2))
#define GPIO_PIN64_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN64_PAD_DRIVER_V  0x1
#define GPIO_PIN64_PAD_DRIVER_S  2
/* GPIO_PIN64_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN64_SYNC2_BYPASS    0x00000003
#define GPIO_PIN64_SYNC2_BYPASS_M  ((GPIO_PIN64_SYNC2_BYPASS_V)<<(GPIO_PIN64_SYNC2_BYPASS_S))
#define GPIO_PIN64_SYNC2_BYPASS_V  0x3
#define GPIO_PIN64_SYNC2_BYPASS_S  0

#define GPIO_PIN65_REG          (DR_REG_GPIO_BASE + 0x1F8)
/* GPIO_PIN65_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN65_INT_ENA    0x0000001F
#define GPIO_PIN65_INT_ENA_M  ((GPIO_PIN65_INT_ENA_V)<<(GPIO_PIN65_INT_ENA_S))
#define GPIO_PIN65_INT_ENA_V  0x1F
#define GPIO_PIN65_INT_ENA_S  13
/* GPIO_PIN65_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN65_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN65_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN65_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN65_WAKEUP_ENABLE_S  10
/* GPIO_PIN65_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN65_INT_TYPE    0x00000007
#define GPIO_PIN65_INT_TYPE_M  ((GPIO_PIN65_INT_TYPE_V)<<(GPIO_PIN65_INT_TYPE_S))
#define GPIO_PIN65_INT_TYPE_V  0x7
#define GPIO_PIN65_INT_TYPE_S  7
/* GPIO_PIN65_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN65_SYNC1_BYPASS    0x00000003
#define GPIO_PIN65_SYNC1_BYPASS_M  ((GPIO_PIN65_SYNC1_BYPASS_V)<<(GPIO_PIN65_SYNC1_BYPASS_S))
#define GPIO_PIN65_SYNC1_BYPASS_V  0x3
#define GPIO_PIN65_SYNC1_BYPASS_S  3
/* GPIO_PIN65_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN65_PAD_DRIVER    (BIT(2))
#define GPIO_PIN65_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN65_PAD_DRIVER_V  0x1
#define GPIO_PIN65_PAD_DRIVER_S  2
/* GPIO_PIN65_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN65_SYNC2_BYPASS    0x00000003
#define GPIO_PIN65_SYNC2_BYPASS_M  ((GPIO_PIN65_SYNC2_BYPASS_V)<<(GPIO_PIN65_SYNC2_BYPASS_S))
#define GPIO_PIN65_SYNC2_BYPASS_V  0x3
#define GPIO_PIN65_SYNC2_BYPASS_S  0

#define GPIO_PIN66_REG          (DR_REG_GPIO_BASE + 0x1FC)
/* GPIO_PIN66_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN66_INT_ENA    0x0000001F
#define GPIO_PIN66_INT_ENA_M  ((GPIO_PIN66_INT_ENA_V)<<(GPIO_PIN66_INT_ENA_S))
#define GPIO_PIN66_INT_ENA_V  0x1F
#define GPIO_PIN66_INT_ENA_S  13
/* GPIO_PIN66_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN66_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN66_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN66_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN66_WAKEUP_ENABLE_S  10
/* GPIO_PIN66_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN66_INT_TYPE    0x00000007
#define GPIO_PIN66_INT_TYPE_M  ((GPIO_PIN66_INT_TYPE_V)<<(GPIO_PIN66_INT_TYPE_S))
#define GPIO_PIN66_INT_TYPE_V  0x7
#define GPIO_PIN66_INT_TYPE_S  7
/* GPIO_PIN66_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN66_SYNC1_BYPASS    0x00000003
#define GPIO_PIN66_SYNC1_BYPASS_M  ((GPIO_PIN66_SYNC1_BYPASS_V)<<(GPIO_PIN66_SYNC1_BYPASS_S))
#define GPIO_PIN66_SYNC1_BYPASS_V  0x3
#define GPIO_PIN66_SYNC1_BYPASS_S  3
/* GPIO_PIN66_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN66_PAD_DRIVER    (BIT(2))
#define GPIO_PIN66_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN66_PAD_DRIVER_V  0x1
#define GPIO_PIN66_PAD_DRIVER_S  2
/* GPIO_PIN66_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN66_SYNC2_BYPASS    0x00000003
#define GPIO_PIN66_SYNC2_BYPASS_M  ((GPIO_PIN66_SYNC2_BYPASS_V)<<(GPIO_PIN66_SYNC2_BYPASS_S))
#define GPIO_PIN66_SYNC2_BYPASS_V  0x3
#define GPIO_PIN66_SYNC2_BYPASS_S  0

#define GPIO_PIN67_REG          (DR_REG_GPIO_BASE + 0x200)
/* GPIO_PIN67_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN67_INT_ENA    0x0000001F
#define GPIO_PIN67_INT_ENA_M  ((GPIO_PIN67_INT_ENA_V)<<(GPIO_PIN67_INT_ENA_S))
#define GPIO_PIN67_INT_ENA_V  0x1F
#define GPIO_PIN67_INT_ENA_S  13
/* GPIO_PIN67_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN67_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN67_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN67_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN67_WAKEUP_ENABLE_S  10
/* GPIO_PIN67_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN67_INT_TYPE    0x00000007
#define GPIO_PIN67_INT_TYPE_M  ((GPIO_PIN67_INT_TYPE_V)<<(GPIO_PIN67_INT_TYPE_S))
#define GPIO_PIN67_INT_TYPE_V  0x7
#define GPIO_PIN67_INT_TYPE_S  7
/* GPIO_PIN67_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN67_SYNC1_BYPASS    0x00000003
#define GPIO_PIN67_SYNC1_BYPASS_M  ((GPIO_PIN67_SYNC1_BYPASS_V)<<(GPIO_PIN67_SYNC1_BYPASS_S))
#define GPIO_PIN67_SYNC1_BYPASS_V  0x3
#define GPIO_PIN67_SYNC1_BYPASS_S  3
/* GPIO_PIN67_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN67_PAD_DRIVER    (BIT(2))
#define GPIO_PIN67_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN67_PAD_DRIVER_V  0x1
#define GPIO_PIN67_PAD_DRIVER_S  2
/* GPIO_PIN67_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN67_SYNC2_BYPASS    0x00000003
#define GPIO_PIN67_SYNC2_BYPASS_M  ((GPIO_PIN67_SYNC2_BYPASS_V)<<(GPIO_PIN67_SYNC2_BYPASS_S))
#define GPIO_PIN67_SYNC2_BYPASS_V  0x3
#define GPIO_PIN67_SYNC2_BYPASS_S  0

#define GPIO_PIN68_REG          (DR_REG_GPIO_BASE + 0x204)
/* GPIO_PIN68_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN68_INT_ENA    0x0000001F
#define GPIO_PIN68_INT_ENA_M  ((GPIO_PIN68_INT_ENA_V)<<(GPIO_PIN68_INT_ENA_S))
#define GPIO_PIN68_INT_ENA_V  0x1F
#define GPIO_PIN68_INT_ENA_S  13
/* GPIO_PIN68_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN68_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN68_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN68_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN68_WAKEUP_ENABLE_S  10
/* GPIO_PIN68_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN68_INT_TYPE    0x00000007
#define GPIO_PIN68_INT_TYPE_M  ((GPIO_PIN68_INT_TYPE_V)<<(GPIO_PIN68_INT_TYPE_S))
#define GPIO_PIN68_INT_TYPE_V  0x7
#define GPIO_PIN68_INT_TYPE_S  7
/* GPIO_PIN68_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN68_SYNC1_BYPASS    0x00000003
#define GPIO_PIN68_SYNC1_BYPASS_M  ((GPIO_PIN68_SYNC1_BYPASS_V)<<(GPIO_PIN68_SYNC1_BYPASS_S))
#define GPIO_PIN68_SYNC1_BYPASS_V  0x3
#define GPIO_PIN68_SYNC1_BYPASS_S  3
/* GPIO_PIN68_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN68_PAD_DRIVER    (BIT(2))
#define GPIO_PIN68_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN68_PAD_DRIVER_V  0x1
#define GPIO_PIN68_PAD_DRIVER_S  2
/* GPIO_PIN68_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN68_SYNC2_BYPASS    0x00000003
#define GPIO_PIN68_SYNC2_BYPASS_M  ((GPIO_PIN68_SYNC2_BYPASS_V)<<(GPIO_PIN68_SYNC2_BYPASS_S))
#define GPIO_PIN68_SYNC2_BYPASS_V  0x3
#define GPIO_PIN68_SYNC2_BYPASS_S  0

#define GPIO_PIN69_REG          (DR_REG_GPIO_BASE + 0x208)
/* GPIO_PIN69_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN69_INT_ENA    0x0000001F
#define GPIO_PIN69_INT_ENA_M  ((GPIO_PIN69_INT_ENA_V)<<(GPIO_PIN69_INT_ENA_S))
#define GPIO_PIN69_INT_ENA_V  0x1F
#define GPIO_PIN69_INT_ENA_S  13
/* GPIO_PIN69_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN69_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN69_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN69_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN69_WAKEUP_ENABLE_S  10
/* GPIO_PIN69_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN69_INT_TYPE    0x00000007
#define GPIO_PIN69_INT_TYPE_M  ((GPIO_PIN69_INT_TYPE_V)<<(GPIO_PIN69_INT_TYPE_S))
#define GPIO_PIN69_INT_TYPE_V  0x7
#define GPIO_PIN69_INT_TYPE_S  7
/* GPIO_PIN69_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN69_SYNC1_BYPASS    0x00000003
#define GPIO_PIN69_SYNC1_BYPASS_M  ((GPIO_PIN69_SYNC1_BYPASS_V)<<(GPIO_PIN69_SYNC1_BYPASS_S))
#define GPIO_PIN69_SYNC1_BYPASS_V  0x3
#define GPIO_PIN69_SYNC1_BYPASS_S  3
/* GPIO_PIN69_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN69_PAD_DRIVER    (BIT(2))
#define GPIO_PIN69_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN69_PAD_DRIVER_V  0x1
#define GPIO_PIN69_PAD_DRIVER_S  2
/* GPIO_PIN69_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN69_SYNC2_BYPASS    0x00000003
#define GPIO_PIN69_SYNC2_BYPASS_M  ((GPIO_PIN69_SYNC2_BYPASS_V)<<(GPIO_PIN69_SYNC2_BYPASS_S))
#define GPIO_PIN69_SYNC2_BYPASS_V  0x3
#define GPIO_PIN69_SYNC2_BYPASS_S  0

#define GPIO_PIN70_REG          (DR_REG_GPIO_BASE + 0x20C)
/* GPIO_PIN70_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN70_INT_ENA    0x0000001F
#define GPIO_PIN70_INT_ENA_M  ((GPIO_PIN70_INT_ENA_V)<<(GPIO_PIN70_INT_ENA_S))
#define GPIO_PIN70_INT_ENA_V  0x1F
#define GPIO_PIN70_INT_ENA_S  13
/* GPIO_PIN70_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN70_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN70_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN70_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN70_WAKEUP_ENABLE_S  10
/* GPIO_PIN70_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN70_INT_TYPE    0x00000007
#define GPIO_PIN70_INT_TYPE_M  ((GPIO_PIN70_INT_TYPE_V)<<(GPIO_PIN70_INT_TYPE_S))
#define GPIO_PIN70_INT_TYPE_V  0x7
#define GPIO_PIN70_INT_TYPE_S  7
/* GPIO_PIN70_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN70_SYNC1_BYPASS    0x00000003
#define GPIO_PIN70_SYNC1_BYPASS_M  ((GPIO_PIN70_SYNC1_BYPASS_V)<<(GPIO_PIN70_SYNC1_BYPASS_S))
#define GPIO_PIN70_SYNC1_BYPASS_V  0x3
#define GPIO_PIN70_SYNC1_BYPASS_S  3
/* GPIO_PIN70_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN70_PAD_DRIVER    (BIT(2))
#define GPIO_PIN70_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN70_PAD_DRIVER_V  0x1
#define GPIO_PIN70_PAD_DRIVER_S  2
/* GPIO_PIN70_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN70_SYNC2_BYPASS    0x00000003
#define GPIO_PIN70_SYNC2_BYPASS_M  ((GPIO_PIN70_SYNC2_BYPASS_V)<<(GPIO_PIN70_SYNC2_BYPASS_S))
#define GPIO_PIN70_SYNC2_BYPASS_V  0x3
#define GPIO_PIN70_SYNC2_BYPASS_S  0

#define GPIO_PIN71_REG          (DR_REG_GPIO_BASE + 0x210)
/* GPIO_PIN71_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN71_INT_ENA    0x0000001F
#define GPIO_PIN71_INT_ENA_M  ((GPIO_PIN71_INT_ENA_V)<<(GPIO_PIN71_INT_ENA_S))
#define GPIO_PIN71_INT_ENA_V  0x1F
#define GPIO_PIN71_INT_ENA_S  13
/* GPIO_PIN71_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN71_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN71_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN71_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN71_WAKEUP_ENABLE_S  10
/* GPIO_PIN71_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN71_INT_TYPE    0x00000007
#define GPIO_PIN71_INT_TYPE_M  ((GPIO_PIN71_INT_TYPE_V)<<(GPIO_PIN71_INT_TYPE_S))
#define GPIO_PIN71_INT_TYPE_V  0x7
#define GPIO_PIN71_INT_TYPE_S  7
/* GPIO_PIN71_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN71_SYNC1_BYPASS    0x00000003
#define GPIO_PIN71_SYNC1_BYPASS_M  ((GPIO_PIN71_SYNC1_BYPASS_V)<<(GPIO_PIN71_SYNC1_BYPASS_S))
#define GPIO_PIN71_SYNC1_BYPASS_V  0x3
#define GPIO_PIN71_SYNC1_BYPASS_S  3
/* GPIO_PIN71_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN71_PAD_DRIVER    (BIT(2))
#define GPIO_PIN71_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN71_PAD_DRIVER_V  0x1
#define GPIO_PIN71_PAD_DRIVER_S  2
/* GPIO_PIN71_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN71_SYNC2_BYPASS    0x00000003
#define GPIO_PIN71_SYNC2_BYPASS_M  ((GPIO_PIN71_SYNC2_BYPASS_V)<<(GPIO_PIN71_SYNC2_BYPASS_S))
#define GPIO_PIN71_SYNC2_BYPASS_V  0x3
#define GPIO_PIN71_SYNC2_BYPASS_S  0

#define GPIO_PIN72_REG          (DR_REG_GPIO_BASE + 0x214)
/* GPIO_PIN72_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN72_INT_ENA    0x0000001F
#define GPIO_PIN72_INT_ENA_M  ((GPIO_PIN72_INT_ENA_V)<<(GPIO_PIN72_INT_ENA_S))
#define GPIO_PIN72_INT_ENA_V  0x1F
#define GPIO_PIN72_INT_ENA_S  13
/* GPIO_PIN72_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN72_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN72_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN72_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN72_WAKEUP_ENABLE_S  10
/* GPIO_PIN72_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN72_INT_TYPE    0x00000007
#define GPIO_PIN72_INT_TYPE_M  ((GPIO_PIN72_INT_TYPE_V)<<(GPIO_PIN72_INT_TYPE_S))
#define GPIO_PIN72_INT_TYPE_V  0x7
#define GPIO_PIN72_INT_TYPE_S  7
/* GPIO_PIN72_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN72_SYNC1_BYPASS    0x00000003
#define GPIO_PIN72_SYNC1_BYPASS_M  ((GPIO_PIN72_SYNC1_BYPASS_V)<<(GPIO_PIN72_SYNC1_BYPASS_S))
#define GPIO_PIN72_SYNC1_BYPASS_V  0x3
#define GPIO_PIN72_SYNC1_BYPASS_S  3
/* GPIO_PIN72_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN72_PAD_DRIVER    (BIT(2))
#define GPIO_PIN72_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN72_PAD_DRIVER_V  0x1
#define GPIO_PIN72_PAD_DRIVER_S  2
/* GPIO_PIN72_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN72_SYNC2_BYPASS    0x00000003
#define GPIO_PIN72_SYNC2_BYPASS_M  ((GPIO_PIN72_SYNC2_BYPASS_V)<<(GPIO_PIN72_SYNC2_BYPASS_S))
#define GPIO_PIN72_SYNC2_BYPASS_V  0x3
#define GPIO_PIN72_SYNC2_BYPASS_S  0

#define GPIO_PIN73_REG          (DR_REG_GPIO_BASE + 0x218)
/* GPIO_PIN73_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN73_INT_ENA    0x0000001F
#define GPIO_PIN73_INT_ENA_M  ((GPIO_PIN73_INT_ENA_V)<<(GPIO_PIN73_INT_ENA_S))
#define GPIO_PIN73_INT_ENA_V  0x1F
#define GPIO_PIN73_INT_ENA_S  13
/* GPIO_PIN73_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN73_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN73_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN73_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN73_WAKEUP_ENABLE_S  10
/* GPIO_PIN73_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN73_INT_TYPE    0x00000007
#define GPIO_PIN73_INT_TYPE_M  ((GPIO_PIN73_INT_TYPE_V)<<(GPIO_PIN73_INT_TYPE_S))
#define GPIO_PIN73_INT_TYPE_V  0x7
#define GPIO_PIN73_INT_TYPE_S  7
/* GPIO_PIN73_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN73_SYNC1_BYPASS    0x00000003
#define GPIO_PIN73_SYNC1_BYPASS_M  ((GPIO_PIN73_SYNC1_BYPASS_V)<<(GPIO_PIN73_SYNC1_BYPASS_S))
#define GPIO_PIN73_SYNC1_BYPASS_V  0x3
#define GPIO_PIN73_SYNC1_BYPASS_S  3
/* GPIO_PIN73_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN73_PAD_DRIVER    (BIT(2))
#define GPIO_PIN73_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN73_PAD_DRIVER_V  0x1
#define GPIO_PIN73_PAD_DRIVER_S  2
/* GPIO_PIN73_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN73_SYNC2_BYPASS    0x00000003
#define GPIO_PIN73_SYNC2_BYPASS_M  ((GPIO_PIN73_SYNC2_BYPASS_V)<<(GPIO_PIN73_SYNC2_BYPASS_S))
#define GPIO_PIN73_SYNC2_BYPASS_V  0x3
#define GPIO_PIN73_SYNC2_BYPASS_S  0

#define GPIO_PIN74_REG          (DR_REG_GPIO_BASE + 0x21C)
/* GPIO_PIN74_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN74_INT_ENA    0x0000001F
#define GPIO_PIN74_INT_ENA_M  ((GPIO_PIN74_INT_ENA_V)<<(GPIO_PIN74_INT_ENA_S))
#define GPIO_PIN74_INT_ENA_V  0x1F
#define GPIO_PIN74_INT_ENA_S  13
/* GPIO_PIN74_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN74_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN74_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN74_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN74_WAKEUP_ENABLE_S  10
/* GPIO_PIN74_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN74_INT_TYPE    0x00000007
#define GPIO_PIN74_INT_TYPE_M  ((GPIO_PIN74_INT_TYPE_V)<<(GPIO_PIN74_INT_TYPE_S))
#define GPIO_PIN74_INT_TYPE_V  0x7
#define GPIO_PIN74_INT_TYPE_S  7
/* GPIO_PIN74_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN74_SYNC1_BYPASS    0x00000003
#define GPIO_PIN74_SYNC1_BYPASS_M  ((GPIO_PIN74_SYNC1_BYPASS_V)<<(GPIO_PIN74_SYNC1_BYPASS_S))
#define GPIO_PIN74_SYNC1_BYPASS_V  0x3
#define GPIO_PIN74_SYNC1_BYPASS_S  3
/* GPIO_PIN74_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN74_PAD_DRIVER    (BIT(2))
#define GPIO_PIN74_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN74_PAD_DRIVER_V  0x1
#define GPIO_PIN74_PAD_DRIVER_S  2
/* GPIO_PIN74_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN74_SYNC2_BYPASS    0x00000003
#define GPIO_PIN74_SYNC2_BYPASS_M  ((GPIO_PIN74_SYNC2_BYPASS_V)<<(GPIO_PIN74_SYNC2_BYPASS_S))
#define GPIO_PIN74_SYNC2_BYPASS_V  0x3
#define GPIO_PIN74_SYNC2_BYPASS_S  0

#define GPIO_PIN75_REG          (DR_REG_GPIO_BASE + 0x220)
/* GPIO_PIN75_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN75_INT_ENA    0x0000001F
#define GPIO_PIN75_INT_ENA_M  ((GPIO_PIN75_INT_ENA_V)<<(GPIO_PIN75_INT_ENA_S))
#define GPIO_PIN75_INT_ENA_V  0x1F
#define GPIO_PIN75_INT_ENA_S  13
/* GPIO_PIN75_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN75_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN75_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN75_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN75_WAKEUP_ENABLE_S  10
/* GPIO_PIN75_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN75_INT_TYPE    0x00000007
#define GPIO_PIN75_INT_TYPE_M  ((GPIO_PIN75_INT_TYPE_V)<<(GPIO_PIN75_INT_TYPE_S))
#define GPIO_PIN75_INT_TYPE_V  0x7
#define GPIO_PIN75_INT_TYPE_S  7
/* GPIO_PIN75_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN75_SYNC1_BYPASS    0x00000003
#define GPIO_PIN75_SYNC1_BYPASS_M  ((GPIO_PIN75_SYNC1_BYPASS_V)<<(GPIO_PIN75_SYNC1_BYPASS_S))
#define GPIO_PIN75_SYNC1_BYPASS_V  0x3
#define GPIO_PIN75_SYNC1_BYPASS_S  3
/* GPIO_PIN75_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN75_PAD_DRIVER    (BIT(2))
#define GPIO_PIN75_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN75_PAD_DRIVER_V  0x1
#define GPIO_PIN75_PAD_DRIVER_S  2
/* GPIO_PIN75_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN75_SYNC2_BYPASS    0x00000003
#define GPIO_PIN75_SYNC2_BYPASS_M  ((GPIO_PIN75_SYNC2_BYPASS_V)<<(GPIO_PIN75_SYNC2_BYPASS_S))
#define GPIO_PIN75_SYNC2_BYPASS_V  0x3
#define GPIO_PIN75_SYNC2_BYPASS_S  0

#define GPIO_PIN76_REG          (DR_REG_GPIO_BASE + 0x224)
/* GPIO_PIN76_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN76_INT_ENA    0x0000001F
#define GPIO_PIN76_INT_ENA_M  ((GPIO_PIN76_INT_ENA_V)<<(GPIO_PIN76_INT_ENA_S))
#define GPIO_PIN76_INT_ENA_V  0x1F
#define GPIO_PIN76_INT_ENA_S  13
/* GPIO_PIN76_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN76_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN76_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN76_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN76_WAKEUP_ENABLE_S  10
/* GPIO_PIN76_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN76_INT_TYPE    0x00000007
#define GPIO_PIN76_INT_TYPE_M  ((GPIO_PIN76_INT_TYPE_V)<<(GPIO_PIN76_INT_TYPE_S))
#define GPIO_PIN76_INT_TYPE_V  0x7
#define GPIO_PIN76_INT_TYPE_S  7
/* GPIO_PIN76_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN76_SYNC1_BYPASS    0x00000003
#define GPIO_PIN76_SYNC1_BYPASS_M  ((GPIO_PIN76_SYNC1_BYPASS_V)<<(GPIO_PIN76_SYNC1_BYPASS_S))
#define GPIO_PIN76_SYNC1_BYPASS_V  0x3
#define GPIO_PIN76_SYNC1_BYPASS_S  3
/* GPIO_PIN76_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN76_PAD_DRIVER    (BIT(2))
#define GPIO_PIN76_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN76_PAD_DRIVER_V  0x1
#define GPIO_PIN76_PAD_DRIVER_S  2
/* GPIO_PIN76_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN76_SYNC2_BYPASS    0x00000003
#define GPIO_PIN76_SYNC2_BYPASS_M  ((GPIO_PIN76_SYNC2_BYPASS_V)<<(GPIO_PIN76_SYNC2_BYPASS_S))
#define GPIO_PIN76_SYNC2_BYPASS_V  0x3
#define GPIO_PIN76_SYNC2_BYPASS_S  0

#define GPIO_PIN77_REG          (DR_REG_GPIO_BASE + 0x228)
/* GPIO_PIN77_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN77_INT_ENA    0x0000001F
#define GPIO_PIN77_INT_ENA_M  ((GPIO_PIN77_INT_ENA_V)<<(GPIO_PIN77_INT_ENA_S))
#define GPIO_PIN77_INT_ENA_V  0x1F
#define GPIO_PIN77_INT_ENA_S  13
/* GPIO_PIN77_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN77_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN77_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN77_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN77_WAKEUP_ENABLE_S  10
/* GPIO_PIN77_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN77_INT_TYPE    0x00000007
#define GPIO_PIN77_INT_TYPE_M  ((GPIO_PIN77_INT_TYPE_V)<<(GPIO_PIN77_INT_TYPE_S))
#define GPIO_PIN77_INT_TYPE_V  0x7
#define GPIO_PIN77_INT_TYPE_S  7
/* GPIO_PIN77_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN77_SYNC1_BYPASS    0x00000003
#define GPIO_PIN77_SYNC1_BYPASS_M  ((GPIO_PIN77_SYNC1_BYPASS_V)<<(GPIO_PIN77_SYNC1_BYPASS_S))
#define GPIO_PIN77_SYNC1_BYPASS_V  0x3
#define GPIO_PIN77_SYNC1_BYPASS_S  3
/* GPIO_PIN77_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN77_PAD_DRIVER    (BIT(2))
#define GPIO_PIN77_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN77_PAD_DRIVER_V  0x1
#define GPIO_PIN77_PAD_DRIVER_S  2
/* GPIO_PIN77_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN77_SYNC2_BYPASS    0x00000003
#define GPIO_PIN77_SYNC2_BYPASS_M  ((GPIO_PIN77_SYNC2_BYPASS_V)<<(GPIO_PIN77_SYNC2_BYPASS_S))
#define GPIO_PIN77_SYNC2_BYPASS_V  0x3
#define GPIO_PIN77_SYNC2_BYPASS_S  0

#define GPIO_PIN78_REG          (DR_REG_GPIO_BASE + 0x22C)
/* GPIO_PIN78_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN78_INT_ENA    0x0000001F
#define GPIO_PIN78_INT_ENA_M  ((GPIO_PIN78_INT_ENA_V)<<(GPIO_PIN78_INT_ENA_S))
#define GPIO_PIN78_INT_ENA_V  0x1F
#define GPIO_PIN78_INT_ENA_S  13
/* GPIO_PIN78_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN78_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN78_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN78_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN78_WAKEUP_ENABLE_S  10
/* GPIO_PIN78_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN78_INT_TYPE    0x00000007
#define GPIO_PIN78_INT_TYPE_M  ((GPIO_PIN78_INT_TYPE_V)<<(GPIO_PIN78_INT_TYPE_S))
#define GPIO_PIN78_INT_TYPE_V  0x7
#define GPIO_PIN78_INT_TYPE_S  7
/* GPIO_PIN78_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN78_SYNC1_BYPASS    0x00000003
#define GPIO_PIN78_SYNC1_BYPASS_M  ((GPIO_PIN78_SYNC1_BYPASS_V)<<(GPIO_PIN78_SYNC1_BYPASS_S))
#define GPIO_PIN78_SYNC1_BYPASS_V  0x3
#define GPIO_PIN78_SYNC1_BYPASS_S  3
/* GPIO_PIN78_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN78_PAD_DRIVER    (BIT(2))
#define GPIO_PIN78_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN78_PAD_DRIVER_V  0x1
#define GPIO_PIN78_PAD_DRIVER_S  2
/* GPIO_PIN78_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN78_SYNC2_BYPASS    0x00000003
#define GPIO_PIN78_SYNC2_BYPASS_M  ((GPIO_PIN78_SYNC2_BYPASS_V)<<(GPIO_PIN78_SYNC2_BYPASS_S))
#define GPIO_PIN78_SYNC2_BYPASS_V  0x3
#define GPIO_PIN78_SYNC2_BYPASS_S  0

#define GPIO_PIN79_REG          (DR_REG_GPIO_BASE + 0x230)
/* GPIO_PIN79_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN79_INT_ENA    0x0000001F
#define GPIO_PIN79_INT_ENA_M  ((GPIO_PIN79_INT_ENA_V)<<(GPIO_PIN79_INT_ENA_S))
#define GPIO_PIN79_INT_ENA_V  0x1F
#define GPIO_PIN79_INT_ENA_S  13
/* GPIO_PIN79_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN79_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN79_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN79_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN79_WAKEUP_ENABLE_S  10
/* GPIO_PIN79_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN79_INT_TYPE    0x00000007
#define GPIO_PIN79_INT_TYPE_M  ((GPIO_PIN79_INT_TYPE_V)<<(GPIO_PIN79_INT_TYPE_S))
#define GPIO_PIN79_INT_TYPE_V  0x7
#define GPIO_PIN79_INT_TYPE_S  7
/* GPIO_PIN79_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN79_SYNC1_BYPASS    0x00000003
#define GPIO_PIN79_SYNC1_BYPASS_M  ((GPIO_PIN79_SYNC1_BYPASS_V)<<(GPIO_PIN79_SYNC1_BYPASS_S))
#define GPIO_PIN79_SYNC1_BYPASS_V  0x3
#define GPIO_PIN79_SYNC1_BYPASS_S  3
/* GPIO_PIN79_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN79_PAD_DRIVER    (BIT(2))
#define GPIO_PIN79_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN79_PAD_DRIVER_V  0x1
#define GPIO_PIN79_PAD_DRIVER_S  2
/* GPIO_PIN79_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN79_SYNC2_BYPASS    0x00000003
#define GPIO_PIN79_SYNC2_BYPASS_M  ((GPIO_PIN79_SYNC2_BYPASS_V)<<(GPIO_PIN79_SYNC2_BYPASS_S))
#define GPIO_PIN79_SYNC2_BYPASS_V  0x3
#define GPIO_PIN79_SYNC2_BYPASS_S  0

#define GPIO_PIN80_REG          (DR_REG_GPIO_BASE + 0x234)
/* GPIO_PIN80_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN80_INT_ENA    0x0000001F
#define GPIO_PIN80_INT_ENA_M  ((GPIO_PIN80_INT_ENA_V)<<(GPIO_PIN80_INT_ENA_S))
#define GPIO_PIN80_INT_ENA_V  0x1F
#define GPIO_PIN80_INT_ENA_S  13
/* GPIO_PIN80_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN80_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN80_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN80_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN80_WAKEUP_ENABLE_S  10
/* GPIO_PIN80_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN80_INT_TYPE    0x00000007
#define GPIO_PIN80_INT_TYPE_M  ((GPIO_PIN80_INT_TYPE_V)<<(GPIO_PIN80_INT_TYPE_S))
#define GPIO_PIN80_INT_TYPE_V  0x7
#define GPIO_PIN80_INT_TYPE_S  7
/* GPIO_PIN80_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN80_SYNC1_BYPASS    0x00000003
#define GPIO_PIN80_SYNC1_BYPASS_M  ((GPIO_PIN80_SYNC1_BYPASS_V)<<(GPIO_PIN80_SYNC1_BYPASS_S))
#define GPIO_PIN80_SYNC1_BYPASS_V  0x3
#define GPIO_PIN80_SYNC1_BYPASS_S  3
/* GPIO_PIN80_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN80_PAD_DRIVER    (BIT(2))
#define GPIO_PIN80_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN80_PAD_DRIVER_V  0x1
#define GPIO_PIN80_PAD_DRIVER_S  2
/* GPIO_PIN80_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN80_SYNC2_BYPASS    0x00000003
#define GPIO_PIN80_SYNC2_BYPASS_M  ((GPIO_PIN80_SYNC2_BYPASS_V)<<(GPIO_PIN80_SYNC2_BYPASS_S))
#define GPIO_PIN80_SYNC2_BYPASS_V  0x3
#define GPIO_PIN80_SYNC2_BYPASS_S  0

#define GPIO_PIN81_REG          (DR_REG_GPIO_BASE + 0x238)
/* GPIO_PIN81_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN81_INT_ENA    0x0000001F
#define GPIO_PIN81_INT_ENA_M  ((GPIO_PIN81_INT_ENA_V)<<(GPIO_PIN81_INT_ENA_S))
#define GPIO_PIN81_INT_ENA_V  0x1F
#define GPIO_PIN81_INT_ENA_S  13
/* GPIO_PIN81_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN81_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN81_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN81_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN81_WAKEUP_ENABLE_S  10
/* GPIO_PIN81_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN81_INT_TYPE    0x00000007
#define GPIO_PIN81_INT_TYPE_M  ((GPIO_PIN81_INT_TYPE_V)<<(GPIO_PIN81_INT_TYPE_S))
#define GPIO_PIN81_INT_TYPE_V  0x7
#define GPIO_PIN81_INT_TYPE_S  7
/* GPIO_PIN81_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN81_SYNC1_BYPASS    0x00000003
#define GPIO_PIN81_SYNC1_BYPASS_M  ((GPIO_PIN81_SYNC1_BYPASS_V)<<(GPIO_PIN81_SYNC1_BYPASS_S))
#define GPIO_PIN81_SYNC1_BYPASS_V  0x3
#define GPIO_PIN81_SYNC1_BYPASS_S  3
/* GPIO_PIN81_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN81_PAD_DRIVER    (BIT(2))
#define GPIO_PIN81_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN81_PAD_DRIVER_V  0x1
#define GPIO_PIN81_PAD_DRIVER_S  2
/* GPIO_PIN81_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN81_SYNC2_BYPASS    0x00000003
#define GPIO_PIN81_SYNC2_BYPASS_M  ((GPIO_PIN81_SYNC2_BYPASS_V)<<(GPIO_PIN81_SYNC2_BYPASS_S))
#define GPIO_PIN81_SYNC2_BYPASS_V  0x3
#define GPIO_PIN81_SYNC2_BYPASS_S  0

#define GPIO_PIN82_REG          (DR_REG_GPIO_BASE + 0x23C)
/* GPIO_PIN82_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN82_INT_ENA    0x0000001F
#define GPIO_PIN82_INT_ENA_M  ((GPIO_PIN82_INT_ENA_V)<<(GPIO_PIN82_INT_ENA_S))
#define GPIO_PIN82_INT_ENA_V  0x1F
#define GPIO_PIN82_INT_ENA_S  13
/* GPIO_PIN82_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN82_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN82_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN82_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN82_WAKEUP_ENABLE_S  10
/* GPIO_PIN82_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN82_INT_TYPE    0x00000007
#define GPIO_PIN82_INT_TYPE_M  ((GPIO_PIN82_INT_TYPE_V)<<(GPIO_PIN82_INT_TYPE_S))
#define GPIO_PIN82_INT_TYPE_V  0x7
#define GPIO_PIN82_INT_TYPE_S  7
/* GPIO_PIN82_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN82_SYNC1_BYPASS    0x00000003
#define GPIO_PIN82_SYNC1_BYPASS_M  ((GPIO_PIN82_SYNC1_BYPASS_V)<<(GPIO_PIN82_SYNC1_BYPASS_S))
#define GPIO_PIN82_SYNC1_BYPASS_V  0x3
#define GPIO_PIN82_SYNC1_BYPASS_S  3
/* GPIO_PIN82_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN82_PAD_DRIVER    (BIT(2))
#define GPIO_PIN82_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN82_PAD_DRIVER_V  0x1
#define GPIO_PIN82_PAD_DRIVER_S  2
/* GPIO_PIN82_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN82_SYNC2_BYPASS    0x00000003
#define GPIO_PIN82_SYNC2_BYPASS_M  ((GPIO_PIN82_SYNC2_BYPASS_V)<<(GPIO_PIN82_SYNC2_BYPASS_S))
#define GPIO_PIN82_SYNC2_BYPASS_V  0x3
#define GPIO_PIN82_SYNC2_BYPASS_S  0

#define GPIO_PIN83_REG          (DR_REG_GPIO_BASE + 0x240)
/* GPIO_PIN83_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN83_INT_ENA    0x0000001F
#define GPIO_PIN83_INT_ENA_M  ((GPIO_PIN83_INT_ENA_V)<<(GPIO_PIN83_INT_ENA_S))
#define GPIO_PIN83_INT_ENA_V  0x1F
#define GPIO_PIN83_INT_ENA_S  13
/* GPIO_PIN83_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN83_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN83_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN83_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN83_WAKEUP_ENABLE_S  10
/* GPIO_PIN83_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN83_INT_TYPE    0x00000007
#define GPIO_PIN83_INT_TYPE_M  ((GPIO_PIN83_INT_TYPE_V)<<(GPIO_PIN83_INT_TYPE_S))
#define GPIO_PIN83_INT_TYPE_V  0x7
#define GPIO_PIN83_INT_TYPE_S  7
/* GPIO_PIN83_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN83_SYNC1_BYPASS    0x00000003
#define GPIO_PIN83_SYNC1_BYPASS_M  ((GPIO_PIN83_SYNC1_BYPASS_V)<<(GPIO_PIN83_SYNC1_BYPASS_S))
#define GPIO_PIN83_SYNC1_BYPASS_V  0x3
#define GPIO_PIN83_SYNC1_BYPASS_S  3
/* GPIO_PIN83_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN83_PAD_DRIVER    (BIT(2))
#define GPIO_PIN83_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN83_PAD_DRIVER_V  0x1
#define GPIO_PIN83_PAD_DRIVER_S  2
/* GPIO_PIN83_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN83_SYNC2_BYPASS    0x00000003
#define GPIO_PIN83_SYNC2_BYPASS_M  ((GPIO_PIN83_SYNC2_BYPASS_V)<<(GPIO_PIN83_SYNC2_BYPASS_S))
#define GPIO_PIN83_SYNC2_BYPASS_V  0x3
#define GPIO_PIN83_SYNC2_BYPASS_S  0

#define GPIO_PIN84_REG          (DR_REG_GPIO_BASE + 0x244)
/* GPIO_PIN84_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN84_INT_ENA    0x0000001F
#define GPIO_PIN84_INT_ENA_M  ((GPIO_PIN84_INT_ENA_V)<<(GPIO_PIN84_INT_ENA_S))
#define GPIO_PIN84_INT_ENA_V  0x1F
#define GPIO_PIN84_INT_ENA_S  13
/* GPIO_PIN84_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN84_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN84_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN84_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN84_WAKEUP_ENABLE_S  10
/* GPIO_PIN84_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN84_INT_TYPE    0x00000007
#define GPIO_PIN84_INT_TYPE_M  ((GPIO_PIN84_INT_TYPE_V)<<(GPIO_PIN84_INT_TYPE_S))
#define GPIO_PIN84_INT_TYPE_V  0x7
#define GPIO_PIN84_INT_TYPE_S  7
/* GPIO_PIN84_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN84_SYNC1_BYPASS    0x00000003
#define GPIO_PIN84_SYNC1_BYPASS_M  ((GPIO_PIN84_SYNC1_BYPASS_V)<<(GPIO_PIN84_SYNC1_BYPASS_S))
#define GPIO_PIN84_SYNC1_BYPASS_V  0x3
#define GPIO_PIN84_SYNC1_BYPASS_S  3
/* GPIO_PIN84_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN84_PAD_DRIVER    (BIT(2))
#define GPIO_PIN84_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN84_PAD_DRIVER_V  0x1
#define GPIO_PIN84_PAD_DRIVER_S  2
/* GPIO_PIN84_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN84_SYNC2_BYPASS    0x00000003
#define GPIO_PIN84_SYNC2_BYPASS_M  ((GPIO_PIN84_SYNC2_BYPASS_V)<<(GPIO_PIN84_SYNC2_BYPASS_S))
#define GPIO_PIN84_SYNC2_BYPASS_V  0x3
#define GPIO_PIN84_SYNC2_BYPASS_S  0

#define GPIO_PIN85_REG          (DR_REG_GPIO_BASE + 0x248)
/* GPIO_PIN85_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN85_INT_ENA    0x0000001F
#define GPIO_PIN85_INT_ENA_M  ((GPIO_PIN85_INT_ENA_V)<<(GPIO_PIN85_INT_ENA_S))
#define GPIO_PIN85_INT_ENA_V  0x1F
#define GPIO_PIN85_INT_ENA_S  13
/* GPIO_PIN85_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN85_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN85_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN85_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN85_WAKEUP_ENABLE_S  10
/* GPIO_PIN85_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN85_INT_TYPE    0x00000007
#define GPIO_PIN85_INT_TYPE_M  ((GPIO_PIN85_INT_TYPE_V)<<(GPIO_PIN85_INT_TYPE_S))
#define GPIO_PIN85_INT_TYPE_V  0x7
#define GPIO_PIN85_INT_TYPE_S  7
/* GPIO_PIN85_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN85_SYNC1_BYPASS    0x00000003
#define GPIO_PIN85_SYNC1_BYPASS_M  ((GPIO_PIN85_SYNC1_BYPASS_V)<<(GPIO_PIN85_SYNC1_BYPASS_S))
#define GPIO_PIN85_SYNC1_BYPASS_V  0x3
#define GPIO_PIN85_SYNC1_BYPASS_S  3
/* GPIO_PIN85_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN85_PAD_DRIVER    (BIT(2))
#define GPIO_PIN85_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN85_PAD_DRIVER_V  0x1
#define GPIO_PIN85_PAD_DRIVER_S  2
/* GPIO_PIN85_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN85_SYNC2_BYPASS    0x00000003
#define GPIO_PIN85_SYNC2_BYPASS_M  ((GPIO_PIN85_SYNC2_BYPASS_V)<<(GPIO_PIN85_SYNC2_BYPASS_S))
#define GPIO_PIN85_SYNC2_BYPASS_V  0x3
#define GPIO_PIN85_SYNC2_BYPASS_S  0

#define GPIO_PIN86_REG          (DR_REG_GPIO_BASE + 0x24C)
/* GPIO_PIN86_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN86_INT_ENA    0x0000001F
#define GPIO_PIN86_INT_ENA_M  ((GPIO_PIN86_INT_ENA_V)<<(GPIO_PIN86_INT_ENA_S))
#define GPIO_PIN86_INT_ENA_V  0x1F
#define GPIO_PIN86_INT_ENA_S  13
/* GPIO_PIN86_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN86_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN86_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN86_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN86_WAKEUP_ENABLE_S  10
/* GPIO_PIN86_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN86_INT_TYPE    0x00000007
#define GPIO_PIN86_INT_TYPE_M  ((GPIO_PIN86_INT_TYPE_V)<<(GPIO_PIN86_INT_TYPE_S))
#define GPIO_PIN86_INT_TYPE_V  0x7
#define GPIO_PIN86_INT_TYPE_S  7
/* GPIO_PIN86_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN86_SYNC1_BYPASS    0x00000003
#define GPIO_PIN86_SYNC1_BYPASS_M  ((GPIO_PIN86_SYNC1_BYPASS_V)<<(GPIO_PIN86_SYNC1_BYPASS_S))
#define GPIO_PIN86_SYNC1_BYPASS_V  0x3
#define GPIO_PIN86_SYNC1_BYPASS_S  3
/* GPIO_PIN86_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN86_PAD_DRIVER    (BIT(2))
#define GPIO_PIN86_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN86_PAD_DRIVER_V  0x1
#define GPIO_PIN86_PAD_DRIVER_S  2
/* GPIO_PIN86_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN86_SYNC2_BYPASS    0x00000003
#define GPIO_PIN86_SYNC2_BYPASS_M  ((GPIO_PIN86_SYNC2_BYPASS_V)<<(GPIO_PIN86_SYNC2_BYPASS_S))
#define GPIO_PIN86_SYNC2_BYPASS_V  0x3
#define GPIO_PIN86_SYNC2_BYPASS_S  0

#define GPIO_PIN87_REG          (DR_REG_GPIO_BASE + 0x250)
/* GPIO_PIN87_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN87_INT_ENA    0x0000001F
#define GPIO_PIN87_INT_ENA_M  ((GPIO_PIN87_INT_ENA_V)<<(GPIO_PIN87_INT_ENA_S))
#define GPIO_PIN87_INT_ENA_V  0x1F
#define GPIO_PIN87_INT_ENA_S  13
/* GPIO_PIN87_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN87_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN87_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN87_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN87_WAKEUP_ENABLE_S  10
/* GPIO_PIN87_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN87_INT_TYPE    0x00000007
#define GPIO_PIN87_INT_TYPE_M  ((GPIO_PIN87_INT_TYPE_V)<<(GPIO_PIN87_INT_TYPE_S))
#define GPIO_PIN87_INT_TYPE_V  0x7
#define GPIO_PIN87_INT_TYPE_S  7
/* GPIO_PIN87_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN87_SYNC1_BYPASS    0x00000003
#define GPIO_PIN87_SYNC1_BYPASS_M  ((GPIO_PIN87_SYNC1_BYPASS_V)<<(GPIO_PIN87_SYNC1_BYPASS_S))
#define GPIO_PIN87_SYNC1_BYPASS_V  0x3
#define GPIO_PIN87_SYNC1_BYPASS_S  3
/* GPIO_PIN87_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN87_PAD_DRIVER    (BIT(2))
#define GPIO_PIN87_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN87_PAD_DRIVER_V  0x1
#define GPIO_PIN87_PAD_DRIVER_S  2
/* GPIO_PIN87_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN87_SYNC2_BYPASS    0x00000003
#define GPIO_PIN87_SYNC2_BYPASS_M  ((GPIO_PIN87_SYNC2_BYPASS_V)<<(GPIO_PIN87_SYNC2_BYPASS_S))
#define GPIO_PIN87_SYNC2_BYPASS_V  0x3
#define GPIO_PIN87_SYNC2_BYPASS_S  0

#define GPIO_PIN88_REG          (DR_REG_GPIO_BASE + 0x254)
/* GPIO_PIN88_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN88_INT_ENA    0x0000001F
#define GPIO_PIN88_INT_ENA_M  ((GPIO_PIN88_INT_ENA_V)<<(GPIO_PIN88_INT_ENA_S))
#define GPIO_PIN88_INT_ENA_V  0x1F
#define GPIO_PIN88_INT_ENA_S  13
/* GPIO_PIN88_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN88_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN88_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN88_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN88_WAKEUP_ENABLE_S  10
/* GPIO_PIN88_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN88_INT_TYPE    0x00000007
#define GPIO_PIN88_INT_TYPE_M  ((GPIO_PIN88_INT_TYPE_V)<<(GPIO_PIN88_INT_TYPE_S))
#define GPIO_PIN88_INT_TYPE_V  0x7
#define GPIO_PIN88_INT_TYPE_S  7
/* GPIO_PIN88_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN88_SYNC1_BYPASS    0x00000003
#define GPIO_PIN88_SYNC1_BYPASS_M  ((GPIO_PIN88_SYNC1_BYPASS_V)<<(GPIO_PIN88_SYNC1_BYPASS_S))
#define GPIO_PIN88_SYNC1_BYPASS_V  0x3
#define GPIO_PIN88_SYNC1_BYPASS_S  3
/* GPIO_PIN88_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN88_PAD_DRIVER    (BIT(2))
#define GPIO_PIN88_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN88_PAD_DRIVER_V  0x1
#define GPIO_PIN88_PAD_DRIVER_S  2
/* GPIO_PIN88_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN88_SYNC2_BYPASS    0x00000003
#define GPIO_PIN88_SYNC2_BYPASS_M  ((GPIO_PIN88_SYNC2_BYPASS_V)<<(GPIO_PIN88_SYNC2_BYPASS_S))
#define GPIO_PIN88_SYNC2_BYPASS_V  0x3
#define GPIO_PIN88_SYNC2_BYPASS_S  0

#define GPIO_PIN89_REG          (DR_REG_GPIO_BASE + 0x258)
/* GPIO_PIN89_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN89_INT_ENA    0x0000001F
#define GPIO_PIN89_INT_ENA_M  ((GPIO_PIN89_INT_ENA_V)<<(GPIO_PIN89_INT_ENA_S))
#define GPIO_PIN89_INT_ENA_V  0x1F
#define GPIO_PIN89_INT_ENA_S  13
/* GPIO_PIN89_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN89_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN89_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN89_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN89_WAKEUP_ENABLE_S  10
/* GPIO_PIN89_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN89_INT_TYPE    0x00000007
#define GPIO_PIN89_INT_TYPE_M  ((GPIO_PIN89_INT_TYPE_V)<<(GPIO_PIN89_INT_TYPE_S))
#define GPIO_PIN89_INT_TYPE_V  0x7
#define GPIO_PIN89_INT_TYPE_S  7
/* GPIO_PIN89_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN89_SYNC1_BYPASS    0x00000003
#define GPIO_PIN89_SYNC1_BYPASS_M  ((GPIO_PIN89_SYNC1_BYPASS_V)<<(GPIO_PIN89_SYNC1_BYPASS_S))
#define GPIO_PIN89_SYNC1_BYPASS_V  0x3
#define GPIO_PIN89_SYNC1_BYPASS_S  3
/* GPIO_PIN89_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN89_PAD_DRIVER    (BIT(2))
#define GPIO_PIN89_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN89_PAD_DRIVER_V  0x1
#define GPIO_PIN89_PAD_DRIVER_S  2
/* GPIO_PIN89_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN89_SYNC2_BYPASS    0x00000003
#define GPIO_PIN89_SYNC2_BYPASS_M  ((GPIO_PIN89_SYNC2_BYPASS_V)<<(GPIO_PIN89_SYNC2_BYPASS_S))
#define GPIO_PIN89_SYNC2_BYPASS_V  0x3
#define GPIO_PIN89_SYNC2_BYPASS_S  0

#define GPIO_PIN90_REG          (DR_REG_GPIO_BASE + 0x25C)
/* GPIO_PIN90_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN90_INT_ENA    0x0000001F
#define GPIO_PIN90_INT_ENA_M  ((GPIO_PIN90_INT_ENA_V)<<(GPIO_PIN90_INT_ENA_S))
#define GPIO_PIN90_INT_ENA_V  0x1F
#define GPIO_PIN90_INT_ENA_S  13
/* GPIO_PIN90_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN90_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN90_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN90_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN90_WAKEUP_ENABLE_S  10
/* GPIO_PIN90_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN90_INT_TYPE    0x00000007
#define GPIO_PIN90_INT_TYPE_M  ((GPIO_PIN90_INT_TYPE_V)<<(GPIO_PIN90_INT_TYPE_S))
#define GPIO_PIN90_INT_TYPE_V  0x7
#define GPIO_PIN90_INT_TYPE_S  7
/* GPIO_PIN90_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN90_SYNC1_BYPASS    0x00000003
#define GPIO_PIN90_SYNC1_BYPASS_M  ((GPIO_PIN90_SYNC1_BYPASS_V)<<(GPIO_PIN90_SYNC1_BYPASS_S))
#define GPIO_PIN90_SYNC1_BYPASS_V  0x3
#define GPIO_PIN90_SYNC1_BYPASS_S  3
/* GPIO_PIN90_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN90_PAD_DRIVER    (BIT(2))
#define GPIO_PIN90_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN90_PAD_DRIVER_V  0x1
#define GPIO_PIN90_PAD_DRIVER_S  2
/* GPIO_PIN90_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN90_SYNC2_BYPASS    0x00000003
#define GPIO_PIN90_SYNC2_BYPASS_M  ((GPIO_PIN90_SYNC2_BYPASS_V)<<(GPIO_PIN90_SYNC2_BYPASS_S))
#define GPIO_PIN90_SYNC2_BYPASS_V  0x3
#define GPIO_PIN90_SYNC2_BYPASS_S  0

#define GPIO_PIN91_REG          (DR_REG_GPIO_BASE + 0x260)
/* GPIO_PIN91_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN91_INT_ENA    0x0000001F
#define GPIO_PIN91_INT_ENA_M  ((GPIO_PIN91_INT_ENA_V)<<(GPIO_PIN91_INT_ENA_S))
#define GPIO_PIN91_INT_ENA_V  0x1F
#define GPIO_PIN91_INT_ENA_S  13
/* GPIO_PIN91_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN91_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN91_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN91_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN91_WAKEUP_ENABLE_S  10
/* GPIO_PIN91_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN91_INT_TYPE    0x00000007
#define GPIO_PIN91_INT_TYPE_M  ((GPIO_PIN91_INT_TYPE_V)<<(GPIO_PIN91_INT_TYPE_S))
#define GPIO_PIN91_INT_TYPE_V  0x7
#define GPIO_PIN91_INT_TYPE_S  7
/* GPIO_PIN91_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN91_SYNC1_BYPASS    0x00000003
#define GPIO_PIN91_SYNC1_BYPASS_M  ((GPIO_PIN91_SYNC1_BYPASS_V)<<(GPIO_PIN91_SYNC1_BYPASS_S))
#define GPIO_PIN91_SYNC1_BYPASS_V  0x3
#define GPIO_PIN91_SYNC1_BYPASS_S  3
/* GPIO_PIN91_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN91_PAD_DRIVER    (BIT(2))
#define GPIO_PIN91_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN91_PAD_DRIVER_V  0x1
#define GPIO_PIN91_PAD_DRIVER_S  2
/* GPIO_PIN91_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN91_SYNC2_BYPASS    0x00000003
#define GPIO_PIN91_SYNC2_BYPASS_M  ((GPIO_PIN91_SYNC2_BYPASS_V)<<(GPIO_PIN91_SYNC2_BYPASS_S))
#define GPIO_PIN91_SYNC2_BYPASS_V  0x3
#define GPIO_PIN91_SYNC2_BYPASS_S  0

#define GPIO_PIN92_REG          (DR_REG_GPIO_BASE + 0x264)
/* GPIO_PIN92_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN92_INT_ENA    0x0000001F
#define GPIO_PIN92_INT_ENA_M  ((GPIO_PIN92_INT_ENA_V)<<(GPIO_PIN92_INT_ENA_S))
#define GPIO_PIN92_INT_ENA_V  0x1F
#define GPIO_PIN92_INT_ENA_S  13
/* GPIO_PIN92_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN92_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN92_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN92_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN92_WAKEUP_ENABLE_S  10
/* GPIO_PIN92_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN92_INT_TYPE    0x00000007
#define GPIO_PIN92_INT_TYPE_M  ((GPIO_PIN92_INT_TYPE_V)<<(GPIO_PIN92_INT_TYPE_S))
#define GPIO_PIN92_INT_TYPE_V  0x7
#define GPIO_PIN92_INT_TYPE_S  7
/* GPIO_PIN92_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN92_SYNC1_BYPASS    0x00000003
#define GPIO_PIN92_SYNC1_BYPASS_M  ((GPIO_PIN92_SYNC1_BYPASS_V)<<(GPIO_PIN92_SYNC1_BYPASS_S))
#define GPIO_PIN92_SYNC1_BYPASS_V  0x3
#define GPIO_PIN92_SYNC1_BYPASS_S  3
/* GPIO_PIN92_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN92_PAD_DRIVER    (BIT(2))
#define GPIO_PIN92_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN92_PAD_DRIVER_V  0x1
#define GPIO_PIN92_PAD_DRIVER_S  2
/* GPIO_PIN92_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN92_SYNC2_BYPASS    0x00000003
#define GPIO_PIN92_SYNC2_BYPASS_M  ((GPIO_PIN92_SYNC2_BYPASS_V)<<(GPIO_PIN92_SYNC2_BYPASS_S))
#define GPIO_PIN92_SYNC2_BYPASS_V  0x3
#define GPIO_PIN92_SYNC2_BYPASS_S  0

#define GPIO_PIN93_REG          (DR_REG_GPIO_BASE + 0x268)
/* GPIO_PIN93_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN93_INT_ENA    0x0000001F
#define GPIO_PIN93_INT_ENA_M  ((GPIO_PIN93_INT_ENA_V)<<(GPIO_PIN93_INT_ENA_S))
#define GPIO_PIN93_INT_ENA_V  0x1F
#define GPIO_PIN93_INT_ENA_S  13
/* GPIO_PIN93_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN93_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN93_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN93_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN93_WAKEUP_ENABLE_S  10
/* GPIO_PIN93_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN93_INT_TYPE    0x00000007
#define GPIO_PIN93_INT_TYPE_M  ((GPIO_PIN93_INT_TYPE_V)<<(GPIO_PIN93_INT_TYPE_S))
#define GPIO_PIN93_INT_TYPE_V  0x7
#define GPIO_PIN93_INT_TYPE_S  7
/* GPIO_PIN93_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN93_SYNC1_BYPASS    0x00000003
#define GPIO_PIN93_SYNC1_BYPASS_M  ((GPIO_PIN93_SYNC1_BYPASS_V)<<(GPIO_PIN93_SYNC1_BYPASS_S))
#define GPIO_PIN93_SYNC1_BYPASS_V  0x3
#define GPIO_PIN93_SYNC1_BYPASS_S  3
/* GPIO_PIN93_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN93_PAD_DRIVER    (BIT(2))
#define GPIO_PIN93_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN93_PAD_DRIVER_V  0x1
#define GPIO_PIN93_PAD_DRIVER_S  2
/* GPIO_PIN93_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN93_SYNC2_BYPASS    0x00000003
#define GPIO_PIN93_SYNC2_BYPASS_M  ((GPIO_PIN93_SYNC2_BYPASS_V)<<(GPIO_PIN93_SYNC2_BYPASS_S))
#define GPIO_PIN93_SYNC2_BYPASS_V  0x3
#define GPIO_PIN93_SYNC2_BYPASS_S  0

#define GPIO_PIN94_REG          (DR_REG_GPIO_BASE + 0x26C)
/* GPIO_PIN94_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN94_INT_ENA    0x0000001F
#define GPIO_PIN94_INT_ENA_M  ((GPIO_PIN94_INT_ENA_V)<<(GPIO_PIN94_INT_ENA_S))
#define GPIO_PIN94_INT_ENA_V  0x1F
#define GPIO_PIN94_INT_ENA_S  13
/* GPIO_PIN94_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN94_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN94_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN94_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN94_WAKEUP_ENABLE_S  10
/* GPIO_PIN94_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN94_INT_TYPE    0x00000007
#define GPIO_PIN94_INT_TYPE_M  ((GPIO_PIN94_INT_TYPE_V)<<(GPIO_PIN94_INT_TYPE_S))
#define GPIO_PIN94_INT_TYPE_V  0x7
#define GPIO_PIN94_INT_TYPE_S  7
/* GPIO_PIN94_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN94_SYNC1_BYPASS    0x00000003
#define GPIO_PIN94_SYNC1_BYPASS_M  ((GPIO_PIN94_SYNC1_BYPASS_V)<<(GPIO_PIN94_SYNC1_BYPASS_S))
#define GPIO_PIN94_SYNC1_BYPASS_V  0x3
#define GPIO_PIN94_SYNC1_BYPASS_S  3
/* GPIO_PIN94_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN94_PAD_DRIVER    (BIT(2))
#define GPIO_PIN94_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN94_PAD_DRIVER_V  0x1
#define GPIO_PIN94_PAD_DRIVER_S  2
/* GPIO_PIN94_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN94_SYNC2_BYPASS    0x00000003
#define GPIO_PIN94_SYNC2_BYPASS_M  ((GPIO_PIN94_SYNC2_BYPASS_V)<<(GPIO_PIN94_SYNC2_BYPASS_S))
#define GPIO_PIN94_SYNC2_BYPASS_V  0x3
#define GPIO_PIN94_SYNC2_BYPASS_S  0

#define GPIO_PIN95_REG          (DR_REG_GPIO_BASE + 0x270)
/* GPIO_PIN95_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN95_INT_ENA    0x0000001F
#define GPIO_PIN95_INT_ENA_M  ((GPIO_PIN95_INT_ENA_V)<<(GPIO_PIN95_INT_ENA_S))
#define GPIO_PIN95_INT_ENA_V  0x1F
#define GPIO_PIN95_INT_ENA_S  13
/* GPIO_PIN95_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN95_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN95_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN95_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN95_WAKEUP_ENABLE_S  10
/* GPIO_PIN95_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN95_INT_TYPE    0x00000007
#define GPIO_PIN95_INT_TYPE_M  ((GPIO_PIN95_INT_TYPE_V)<<(GPIO_PIN95_INT_TYPE_S))
#define GPIO_PIN95_INT_TYPE_V  0x7
#define GPIO_PIN95_INT_TYPE_S  7
/* GPIO_PIN95_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN95_SYNC1_BYPASS    0x00000003
#define GPIO_PIN95_SYNC1_BYPASS_M  ((GPIO_PIN95_SYNC1_BYPASS_V)<<(GPIO_PIN95_SYNC1_BYPASS_S))
#define GPIO_PIN95_SYNC1_BYPASS_V  0x3
#define GPIO_PIN95_SYNC1_BYPASS_S  3
/* GPIO_PIN95_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN95_PAD_DRIVER    (BIT(2))
#define GPIO_PIN95_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN95_PAD_DRIVER_V  0x1
#define GPIO_PIN95_PAD_DRIVER_S  2
/* GPIO_PIN95_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN95_SYNC2_BYPASS    0x00000003
#define GPIO_PIN95_SYNC2_BYPASS_M  ((GPIO_PIN95_SYNC2_BYPASS_V)<<(GPIO_PIN95_SYNC2_BYPASS_S))
#define GPIO_PIN95_SYNC2_BYPASS_V  0x3
#define GPIO_PIN95_SYNC2_BYPASS_S  0

#define GPIO_PIN96_REG          (DR_REG_GPIO_BASE + 0x274)
/* GPIO_PIN96_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN96_INT_ENA    0x0000001F
#define GPIO_PIN96_INT_ENA_M  ((GPIO_PIN96_INT_ENA_V)<<(GPIO_PIN96_INT_ENA_S))
#define GPIO_PIN96_INT_ENA_V  0x1F
#define GPIO_PIN96_INT_ENA_S  13
/* GPIO_PIN96_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN96_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN96_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN96_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN96_WAKEUP_ENABLE_S  10
/* GPIO_PIN96_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN96_INT_TYPE    0x00000007
#define GPIO_PIN96_INT_TYPE_M  ((GPIO_PIN96_INT_TYPE_V)<<(GPIO_PIN96_INT_TYPE_S))
#define GPIO_PIN96_INT_TYPE_V  0x7
#define GPIO_PIN96_INT_TYPE_S  7
/* GPIO_PIN96_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN96_SYNC1_BYPASS    0x00000003
#define GPIO_PIN96_SYNC1_BYPASS_M  ((GPIO_PIN96_SYNC1_BYPASS_V)<<(GPIO_PIN96_SYNC1_BYPASS_S))
#define GPIO_PIN96_SYNC1_BYPASS_V  0x3
#define GPIO_PIN96_SYNC1_BYPASS_S  3
/* GPIO_PIN96_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN96_PAD_DRIVER    (BIT(2))
#define GPIO_PIN96_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN96_PAD_DRIVER_V  0x1
#define GPIO_PIN96_PAD_DRIVER_S  2
/* GPIO_PIN96_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN96_SYNC2_BYPASS    0x00000003
#define GPIO_PIN96_SYNC2_BYPASS_M  ((GPIO_PIN96_SYNC2_BYPASS_V)<<(GPIO_PIN96_SYNC2_BYPASS_S))
#define GPIO_PIN96_SYNC2_BYPASS_V  0x3
#define GPIO_PIN96_SYNC2_BYPASS_S  0

#define GPIO_PIN97_REG          (DR_REG_GPIO_BASE + 0x278)
/* GPIO_PIN97_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN97_INT_ENA    0x0000001F
#define GPIO_PIN97_INT_ENA_M  ((GPIO_PIN97_INT_ENA_V)<<(GPIO_PIN97_INT_ENA_S))
#define GPIO_PIN97_INT_ENA_V  0x1F
#define GPIO_PIN97_INT_ENA_S  13
/* GPIO_PIN97_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN97_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN97_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN97_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN97_WAKEUP_ENABLE_S  10
/* GPIO_PIN97_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN97_INT_TYPE    0x00000007
#define GPIO_PIN97_INT_TYPE_M  ((GPIO_PIN97_INT_TYPE_V)<<(GPIO_PIN97_INT_TYPE_S))
#define GPIO_PIN97_INT_TYPE_V  0x7
#define GPIO_PIN97_INT_TYPE_S  7
/* GPIO_PIN97_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN97_SYNC1_BYPASS    0x00000003
#define GPIO_PIN97_SYNC1_BYPASS_M  ((GPIO_PIN97_SYNC1_BYPASS_V)<<(GPIO_PIN97_SYNC1_BYPASS_S))
#define GPIO_PIN97_SYNC1_BYPASS_V  0x3
#define GPIO_PIN97_SYNC1_BYPASS_S  3
/* GPIO_PIN97_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN97_PAD_DRIVER    (BIT(2))
#define GPIO_PIN97_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN97_PAD_DRIVER_V  0x1
#define GPIO_PIN97_PAD_DRIVER_S  2
/* GPIO_PIN97_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN97_SYNC2_BYPASS    0x00000003
#define GPIO_PIN97_SYNC2_BYPASS_M  ((GPIO_PIN97_SYNC2_BYPASS_V)<<(GPIO_PIN97_SYNC2_BYPASS_S))
#define GPIO_PIN97_SYNC2_BYPASS_V  0x3
#define GPIO_PIN97_SYNC2_BYPASS_S  0

#define GPIO_PIN98_REG          (DR_REG_GPIO_BASE + 0x27C)
/* GPIO_PIN98_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN98_INT_ENA    0x0000001F
#define GPIO_PIN98_INT_ENA_M  ((GPIO_PIN98_INT_ENA_V)<<(GPIO_PIN98_INT_ENA_S))
#define GPIO_PIN98_INT_ENA_V  0x1F
#define GPIO_PIN98_INT_ENA_S  13
/* GPIO_PIN98_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN98_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN98_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN98_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN98_WAKEUP_ENABLE_S  10
/* GPIO_PIN98_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN98_INT_TYPE    0x00000007
#define GPIO_PIN98_INT_TYPE_M  ((GPIO_PIN98_INT_TYPE_V)<<(GPIO_PIN98_INT_TYPE_S))
#define GPIO_PIN98_INT_TYPE_V  0x7
#define GPIO_PIN98_INT_TYPE_S  7
/* GPIO_PIN98_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN98_SYNC1_BYPASS    0x00000003
#define GPIO_PIN98_SYNC1_BYPASS_M  ((GPIO_PIN98_SYNC1_BYPASS_V)<<(GPIO_PIN98_SYNC1_BYPASS_S))
#define GPIO_PIN98_SYNC1_BYPASS_V  0x3
#define GPIO_PIN98_SYNC1_BYPASS_S  3
/* GPIO_PIN98_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN98_PAD_DRIVER    (BIT(2))
#define GPIO_PIN98_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN98_PAD_DRIVER_V  0x1
#define GPIO_PIN98_PAD_DRIVER_S  2
/* GPIO_PIN98_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN98_SYNC2_BYPASS    0x00000003
#define GPIO_PIN98_SYNC2_BYPASS_M  ((GPIO_PIN98_SYNC2_BYPASS_V)<<(GPIO_PIN98_SYNC2_BYPASS_S))
#define GPIO_PIN98_SYNC2_BYPASS_V  0x3
#define GPIO_PIN98_SYNC2_BYPASS_S  0

#define GPIO_PIN99_REG          (DR_REG_GPIO_BASE + 0x280)
/* GPIO_PIN99_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN99_INT_ENA    0x0000001F
#define GPIO_PIN99_INT_ENA_M  ((GPIO_PIN99_INT_ENA_V)<<(GPIO_PIN99_INT_ENA_S))
#define GPIO_PIN99_INT_ENA_V  0x1F
#define GPIO_PIN99_INT_ENA_S  13
/* GPIO_PIN99_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN99_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN99_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN99_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN99_WAKEUP_ENABLE_S  10
/* GPIO_PIN99_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN99_INT_TYPE    0x00000007
#define GPIO_PIN99_INT_TYPE_M  ((GPIO_PIN99_INT_TYPE_V)<<(GPIO_PIN99_INT_TYPE_S))
#define GPIO_PIN99_INT_TYPE_V  0x7
#define GPIO_PIN99_INT_TYPE_S  7
/* GPIO_PIN99_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN99_SYNC1_BYPASS    0x00000003
#define GPIO_PIN99_SYNC1_BYPASS_M  ((GPIO_PIN99_SYNC1_BYPASS_V)<<(GPIO_PIN99_SYNC1_BYPASS_S))
#define GPIO_PIN99_SYNC1_BYPASS_V  0x3
#define GPIO_PIN99_SYNC1_BYPASS_S  3
/* GPIO_PIN99_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN99_PAD_DRIVER    (BIT(2))
#define GPIO_PIN99_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN99_PAD_DRIVER_V  0x1
#define GPIO_PIN99_PAD_DRIVER_S  2
/* GPIO_PIN99_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN99_SYNC2_BYPASS    0x00000003
#define GPIO_PIN99_SYNC2_BYPASS_M  ((GPIO_PIN99_SYNC2_BYPASS_V)<<(GPIO_PIN99_SYNC2_BYPASS_S))
#define GPIO_PIN99_SYNC2_BYPASS_V  0x3
#define GPIO_PIN99_SYNC2_BYPASS_S  0

#define GPIO_PIN100_REG          (DR_REG_GPIO_BASE + 0x284)
/* GPIO_PIN100_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN100_INT_ENA    0x0000001F
#define GPIO_PIN100_INT_ENA_M  ((GPIO_PIN100_INT_ENA_V)<<(GPIO_PIN100_INT_ENA_S))
#define GPIO_PIN100_INT_ENA_V  0x1F
#define GPIO_PIN100_INT_ENA_S  13
/* GPIO_PIN100_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN100_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN100_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN100_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN100_WAKEUP_ENABLE_S  10
/* GPIO_PIN100_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN100_INT_TYPE    0x00000007
#define GPIO_PIN100_INT_TYPE_M  ((GPIO_PIN100_INT_TYPE_V)<<(GPIO_PIN100_INT_TYPE_S))
#define GPIO_PIN100_INT_TYPE_V  0x7
#define GPIO_PIN100_INT_TYPE_S  7
/* GPIO_PIN100_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN100_SYNC1_BYPASS    0x00000003
#define GPIO_PIN100_SYNC1_BYPASS_M  ((GPIO_PIN100_SYNC1_BYPASS_V)<<(GPIO_PIN100_SYNC1_BYPASS_S))
#define GPIO_PIN100_SYNC1_BYPASS_V  0x3
#define GPIO_PIN100_SYNC1_BYPASS_S  3
/* GPIO_PIN100_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN100_PAD_DRIVER    (BIT(2))
#define GPIO_PIN100_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN100_PAD_DRIVER_V  0x1
#define GPIO_PIN100_PAD_DRIVER_S  2
/* GPIO_PIN100_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN100_SYNC2_BYPASS    0x00000003
#define GPIO_PIN100_SYNC2_BYPASS_M  ((GPIO_PIN100_SYNC2_BYPASS_V)<<(GPIO_PIN100_SYNC2_BYPASS_S))
#define GPIO_PIN100_SYNC2_BYPASS_V  0x3
#define GPIO_PIN100_SYNC2_BYPASS_S  0

#define GPIO_PIN101_REG          (DR_REG_GPIO_BASE + 0x288)
/* GPIO_PIN101_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN101_INT_ENA    0x0000001F
#define GPIO_PIN101_INT_ENA_M  ((GPIO_PIN101_INT_ENA_V)<<(GPIO_PIN101_INT_ENA_S))
#define GPIO_PIN101_INT_ENA_V  0x1F
#define GPIO_PIN101_INT_ENA_S  13
/* GPIO_PIN101_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN101_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN101_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN101_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN101_WAKEUP_ENABLE_S  10
/* GPIO_PIN101_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN101_INT_TYPE    0x00000007
#define GPIO_PIN101_INT_TYPE_M  ((GPIO_PIN101_INT_TYPE_V)<<(GPIO_PIN101_INT_TYPE_S))
#define GPIO_PIN101_INT_TYPE_V  0x7
#define GPIO_PIN101_INT_TYPE_S  7
/* GPIO_PIN101_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN101_SYNC1_BYPASS    0x00000003
#define GPIO_PIN101_SYNC1_BYPASS_M  ((GPIO_PIN101_SYNC1_BYPASS_V)<<(GPIO_PIN101_SYNC1_BYPASS_S))
#define GPIO_PIN101_SYNC1_BYPASS_V  0x3
#define GPIO_PIN101_SYNC1_BYPASS_S  3
/* GPIO_PIN101_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN101_PAD_DRIVER    (BIT(2))
#define GPIO_PIN101_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN101_PAD_DRIVER_V  0x1
#define GPIO_PIN101_PAD_DRIVER_S  2
/* GPIO_PIN101_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN101_SYNC2_BYPASS    0x00000003
#define GPIO_PIN101_SYNC2_BYPASS_M  ((GPIO_PIN101_SYNC2_BYPASS_V)<<(GPIO_PIN101_SYNC2_BYPASS_S))
#define GPIO_PIN101_SYNC2_BYPASS_V  0x3
#define GPIO_PIN101_SYNC2_BYPASS_S  0

#define GPIO_PIN102_REG          (DR_REG_GPIO_BASE + 0x28C)
/* GPIO_PIN102_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN102_INT_ENA    0x0000001F
#define GPIO_PIN102_INT_ENA_M  ((GPIO_PIN102_INT_ENA_V)<<(GPIO_PIN102_INT_ENA_S))
#define GPIO_PIN102_INT_ENA_V  0x1F
#define GPIO_PIN102_INT_ENA_S  13
/* GPIO_PIN102_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN102_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN102_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN102_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN102_WAKEUP_ENABLE_S  10
/* GPIO_PIN102_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN102_INT_TYPE    0x00000007
#define GPIO_PIN102_INT_TYPE_M  ((GPIO_PIN102_INT_TYPE_V)<<(GPIO_PIN102_INT_TYPE_S))
#define GPIO_PIN102_INT_TYPE_V  0x7
#define GPIO_PIN102_INT_TYPE_S  7
/* GPIO_PIN102_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN102_SYNC1_BYPASS    0x00000003
#define GPIO_PIN102_SYNC1_BYPASS_M  ((GPIO_PIN102_SYNC1_BYPASS_V)<<(GPIO_PIN102_SYNC1_BYPASS_S))
#define GPIO_PIN102_SYNC1_BYPASS_V  0x3
#define GPIO_PIN102_SYNC1_BYPASS_S  3
/* GPIO_PIN102_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN102_PAD_DRIVER    (BIT(2))
#define GPIO_PIN102_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN102_PAD_DRIVER_V  0x1
#define GPIO_PIN102_PAD_DRIVER_S  2
/* GPIO_PIN102_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN102_SYNC2_BYPASS    0x00000003
#define GPIO_PIN102_SYNC2_BYPASS_M  ((GPIO_PIN102_SYNC2_BYPASS_V)<<(GPIO_PIN102_SYNC2_BYPASS_S))
#define GPIO_PIN102_SYNC2_BYPASS_V  0x3
#define GPIO_PIN102_SYNC2_BYPASS_S  0

#define GPIO_PIN103_REG          (DR_REG_GPIO_BASE + 0x290)
/* GPIO_PIN103_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN103_INT_ENA    0x0000001F
#define GPIO_PIN103_INT_ENA_M  ((GPIO_PIN103_INT_ENA_V)<<(GPIO_PIN103_INT_ENA_S))
#define GPIO_PIN103_INT_ENA_V  0x1F
#define GPIO_PIN103_INT_ENA_S  13
/* GPIO_PIN103_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN103_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN103_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN103_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN103_WAKEUP_ENABLE_S  10
/* GPIO_PIN103_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN103_INT_TYPE    0x00000007
#define GPIO_PIN103_INT_TYPE_M  ((GPIO_PIN103_INT_TYPE_V)<<(GPIO_PIN103_INT_TYPE_S))
#define GPIO_PIN103_INT_TYPE_V  0x7
#define GPIO_PIN103_INT_TYPE_S  7
/* GPIO_PIN103_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN103_SYNC1_BYPASS    0x00000003
#define GPIO_PIN103_SYNC1_BYPASS_M  ((GPIO_PIN103_SYNC1_BYPASS_V)<<(GPIO_PIN103_SYNC1_BYPASS_S))
#define GPIO_PIN103_SYNC1_BYPASS_V  0x3
#define GPIO_PIN103_SYNC1_BYPASS_S  3
/* GPIO_PIN103_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN103_PAD_DRIVER    (BIT(2))
#define GPIO_PIN103_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN103_PAD_DRIVER_V  0x1
#define GPIO_PIN103_PAD_DRIVER_S  2
/* GPIO_PIN103_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN103_SYNC2_BYPASS    0x00000003
#define GPIO_PIN103_SYNC2_BYPASS_M  ((GPIO_PIN103_SYNC2_BYPASS_V)<<(GPIO_PIN103_SYNC2_BYPASS_S))
#define GPIO_PIN103_SYNC2_BYPASS_V  0x3
#define GPIO_PIN103_SYNC2_BYPASS_S  0

#define GPIO_PIN104_REG          (DR_REG_GPIO_BASE + 0x294)
/* GPIO_PIN104_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN104_INT_ENA    0x0000001F
#define GPIO_PIN104_INT_ENA_M  ((GPIO_PIN104_INT_ENA_V)<<(GPIO_PIN104_INT_ENA_S))
#define GPIO_PIN104_INT_ENA_V  0x1F
#define GPIO_PIN104_INT_ENA_S  13
/* GPIO_PIN104_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN104_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN104_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN104_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN104_WAKEUP_ENABLE_S  10
/* GPIO_PIN104_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN104_INT_TYPE    0x00000007
#define GPIO_PIN104_INT_TYPE_M  ((GPIO_PIN104_INT_TYPE_V)<<(GPIO_PIN104_INT_TYPE_S))
#define GPIO_PIN104_INT_TYPE_V  0x7
#define GPIO_PIN104_INT_TYPE_S  7
/* GPIO_PIN104_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN104_SYNC1_BYPASS    0x00000003
#define GPIO_PIN104_SYNC1_BYPASS_M  ((GPIO_PIN104_SYNC1_BYPASS_V)<<(GPIO_PIN104_SYNC1_BYPASS_S))
#define GPIO_PIN104_SYNC1_BYPASS_V  0x3
#define GPIO_PIN104_SYNC1_BYPASS_S  3
/* GPIO_PIN104_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN104_PAD_DRIVER    (BIT(2))
#define GPIO_PIN104_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN104_PAD_DRIVER_V  0x1
#define GPIO_PIN104_PAD_DRIVER_S  2
/* GPIO_PIN104_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN104_SYNC2_BYPASS    0x00000003
#define GPIO_PIN104_SYNC2_BYPASS_M  ((GPIO_PIN104_SYNC2_BYPASS_V)<<(GPIO_PIN104_SYNC2_BYPASS_S))
#define GPIO_PIN104_SYNC2_BYPASS_V  0x3
#define GPIO_PIN104_SYNC2_BYPASS_S  0

#define GPIO_PIN105_REG          (DR_REG_GPIO_BASE + 0x298)
/* GPIO_PIN105_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN105_INT_ENA    0x0000001F
#define GPIO_PIN105_INT_ENA_M  ((GPIO_PIN105_INT_ENA_V)<<(GPIO_PIN105_INT_ENA_S))
#define GPIO_PIN105_INT_ENA_V  0x1F
#define GPIO_PIN105_INT_ENA_S  13
/* GPIO_PIN105_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN105_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN105_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN105_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN105_WAKEUP_ENABLE_S  10
/* GPIO_PIN105_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN105_INT_TYPE    0x00000007
#define GPIO_PIN105_INT_TYPE_M  ((GPIO_PIN105_INT_TYPE_V)<<(GPIO_PIN105_INT_TYPE_S))
#define GPIO_PIN105_INT_TYPE_V  0x7
#define GPIO_PIN105_INT_TYPE_S  7
/* GPIO_PIN105_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN105_SYNC1_BYPASS    0x00000003
#define GPIO_PIN105_SYNC1_BYPASS_M  ((GPIO_PIN105_SYNC1_BYPASS_V)<<(GPIO_PIN105_SYNC1_BYPASS_S))
#define GPIO_PIN105_SYNC1_BYPASS_V  0x3
#define GPIO_PIN105_SYNC1_BYPASS_S  3
/* GPIO_PIN105_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN105_PAD_DRIVER    (BIT(2))
#define GPIO_PIN105_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN105_PAD_DRIVER_V  0x1
#define GPIO_PIN105_PAD_DRIVER_S  2
/* GPIO_PIN105_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN105_SYNC2_BYPASS    0x00000003
#define GPIO_PIN105_SYNC2_BYPASS_M  ((GPIO_PIN105_SYNC2_BYPASS_V)<<(GPIO_PIN105_SYNC2_BYPASS_S))
#define GPIO_PIN105_SYNC2_BYPASS_V  0x3
#define GPIO_PIN105_SYNC2_BYPASS_S  0

#define GPIO_PIN106_REG          (DR_REG_GPIO_BASE + 0x29C)
/* GPIO_PIN106_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN106_INT_ENA    0x0000001F
#define GPIO_PIN106_INT_ENA_M  ((GPIO_PIN106_INT_ENA_V)<<(GPIO_PIN106_INT_ENA_S))
#define GPIO_PIN106_INT_ENA_V  0x1F
#define GPIO_PIN106_INT_ENA_S  13
/* GPIO_PIN106_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN106_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN106_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN106_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN106_WAKEUP_ENABLE_S  10
/* GPIO_PIN106_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN106_INT_TYPE    0x00000007
#define GPIO_PIN106_INT_TYPE_M  ((GPIO_PIN106_INT_TYPE_V)<<(GPIO_PIN106_INT_TYPE_S))
#define GPIO_PIN106_INT_TYPE_V  0x7
#define GPIO_PIN106_INT_TYPE_S  7
/* GPIO_PIN106_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN106_SYNC1_BYPASS    0x00000003
#define GPIO_PIN106_SYNC1_BYPASS_M  ((GPIO_PIN106_SYNC1_BYPASS_V)<<(GPIO_PIN106_SYNC1_BYPASS_S))
#define GPIO_PIN106_SYNC1_BYPASS_V  0x3
#define GPIO_PIN106_SYNC1_BYPASS_S  3
/* GPIO_PIN106_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN106_PAD_DRIVER    (BIT(2))
#define GPIO_PIN106_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN106_PAD_DRIVER_V  0x1
#define GPIO_PIN106_PAD_DRIVER_S  2
/* GPIO_PIN106_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN106_SYNC2_BYPASS    0x00000003
#define GPIO_PIN106_SYNC2_BYPASS_M  ((GPIO_PIN106_SYNC2_BYPASS_V)<<(GPIO_PIN106_SYNC2_BYPASS_S))
#define GPIO_PIN106_SYNC2_BYPASS_V  0x3
#define GPIO_PIN106_SYNC2_BYPASS_S  0

#define GPIO_PIN107_REG          (DR_REG_GPIO_BASE + 0x2A0)
/* GPIO_PIN107_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN107_INT_ENA    0x0000001F
#define GPIO_PIN107_INT_ENA_M  ((GPIO_PIN107_INT_ENA_V)<<(GPIO_PIN107_INT_ENA_S))
#define GPIO_PIN107_INT_ENA_V  0x1F
#define GPIO_PIN107_INT_ENA_S  13
/* GPIO_PIN107_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN107_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN107_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN107_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN107_WAKEUP_ENABLE_S  10
/* GPIO_PIN107_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN107_INT_TYPE    0x00000007
#define GPIO_PIN107_INT_TYPE_M  ((GPIO_PIN107_INT_TYPE_V)<<(GPIO_PIN107_INT_TYPE_S))
#define GPIO_PIN107_INT_TYPE_V  0x7
#define GPIO_PIN107_INT_TYPE_S  7
/* GPIO_PIN107_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN107_SYNC1_BYPASS    0x00000003
#define GPIO_PIN107_SYNC1_BYPASS_M  ((GPIO_PIN107_SYNC1_BYPASS_V)<<(GPIO_PIN107_SYNC1_BYPASS_S))
#define GPIO_PIN107_SYNC1_BYPASS_V  0x3
#define GPIO_PIN107_SYNC1_BYPASS_S  3
/* GPIO_PIN107_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN107_PAD_DRIVER    (BIT(2))
#define GPIO_PIN107_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN107_PAD_DRIVER_V  0x1
#define GPIO_PIN107_PAD_DRIVER_S  2
/* GPIO_PIN107_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN107_SYNC2_BYPASS    0x00000003
#define GPIO_PIN107_SYNC2_BYPASS_M  ((GPIO_PIN107_SYNC2_BYPASS_V)<<(GPIO_PIN107_SYNC2_BYPASS_S))
#define GPIO_PIN107_SYNC2_BYPASS_V  0x3
#define GPIO_PIN107_SYNC2_BYPASS_S  0

#define GPIO_PIN108_REG          (DR_REG_GPIO_BASE + 0x2A4)
/* GPIO_PIN108_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN108_INT_ENA    0x0000001F
#define GPIO_PIN108_INT_ENA_M  ((GPIO_PIN108_INT_ENA_V)<<(GPIO_PIN108_INT_ENA_S))
#define GPIO_PIN108_INT_ENA_V  0x1F
#define GPIO_PIN108_INT_ENA_S  13
/* GPIO_PIN108_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN108_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN108_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN108_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN108_WAKEUP_ENABLE_S  10
/* GPIO_PIN108_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN108_INT_TYPE    0x00000007
#define GPIO_PIN108_INT_TYPE_M  ((GPIO_PIN108_INT_TYPE_V)<<(GPIO_PIN108_INT_TYPE_S))
#define GPIO_PIN108_INT_TYPE_V  0x7
#define GPIO_PIN108_INT_TYPE_S  7
/* GPIO_PIN108_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN108_SYNC1_BYPASS    0x00000003
#define GPIO_PIN108_SYNC1_BYPASS_M  ((GPIO_PIN108_SYNC1_BYPASS_V)<<(GPIO_PIN108_SYNC1_BYPASS_S))
#define GPIO_PIN108_SYNC1_BYPASS_V  0x3
#define GPIO_PIN108_SYNC1_BYPASS_S  3
/* GPIO_PIN108_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN108_PAD_DRIVER    (BIT(2))
#define GPIO_PIN108_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN108_PAD_DRIVER_V  0x1
#define GPIO_PIN108_PAD_DRIVER_S  2
/* GPIO_PIN108_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN108_SYNC2_BYPASS    0x00000003
#define GPIO_PIN108_SYNC2_BYPASS_M  ((GPIO_PIN108_SYNC2_BYPASS_V)<<(GPIO_PIN108_SYNC2_BYPASS_S))
#define GPIO_PIN108_SYNC2_BYPASS_V  0x3
#define GPIO_PIN108_SYNC2_BYPASS_S  0

#define GPIO_PIN109_REG          (DR_REG_GPIO_BASE + 0x2A8)
/* GPIO_PIN109_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN109_INT_ENA    0x0000001F
#define GPIO_PIN109_INT_ENA_M  ((GPIO_PIN109_INT_ENA_V)<<(GPIO_PIN109_INT_ENA_S))
#define GPIO_PIN109_INT_ENA_V  0x1F
#define GPIO_PIN109_INT_ENA_S  13
/* GPIO_PIN109_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN109_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN109_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN109_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN109_WAKEUP_ENABLE_S  10
/* GPIO_PIN109_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN109_INT_TYPE    0x00000007
#define GPIO_PIN109_INT_TYPE_M  ((GPIO_PIN109_INT_TYPE_V)<<(GPIO_PIN109_INT_TYPE_S))
#define GPIO_PIN109_INT_TYPE_V  0x7
#define GPIO_PIN109_INT_TYPE_S  7
/* GPIO_PIN109_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN109_SYNC1_BYPASS    0x00000003
#define GPIO_PIN109_SYNC1_BYPASS_M  ((GPIO_PIN109_SYNC1_BYPASS_V)<<(GPIO_PIN109_SYNC1_BYPASS_S))
#define GPIO_PIN109_SYNC1_BYPASS_V  0x3
#define GPIO_PIN109_SYNC1_BYPASS_S  3
/* GPIO_PIN109_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN109_PAD_DRIVER    (BIT(2))
#define GPIO_PIN109_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN109_PAD_DRIVER_V  0x1
#define GPIO_PIN109_PAD_DRIVER_S  2
/* GPIO_PIN109_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN109_SYNC2_BYPASS    0x00000003
#define GPIO_PIN109_SYNC2_BYPASS_M  ((GPIO_PIN109_SYNC2_BYPASS_V)<<(GPIO_PIN109_SYNC2_BYPASS_S))
#define GPIO_PIN109_SYNC2_BYPASS_V  0x3
#define GPIO_PIN109_SYNC2_BYPASS_S  0

#define GPIO_PIN110_REG          (DR_REG_GPIO_BASE + 0x2AC)
/* GPIO_PIN110_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN110_INT_ENA    0x0000001F
#define GPIO_PIN110_INT_ENA_M  ((GPIO_PIN110_INT_ENA_V)<<(GPIO_PIN110_INT_ENA_S))
#define GPIO_PIN110_INT_ENA_V  0x1F
#define GPIO_PIN110_INT_ENA_S  13
/* GPIO_PIN110_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN110_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN110_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN110_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN110_WAKEUP_ENABLE_S  10
/* GPIO_PIN110_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN110_INT_TYPE    0x00000007
#define GPIO_PIN110_INT_TYPE_M  ((GPIO_PIN110_INT_TYPE_V)<<(GPIO_PIN110_INT_TYPE_S))
#define GPIO_PIN110_INT_TYPE_V  0x7
#define GPIO_PIN110_INT_TYPE_S  7
/* GPIO_PIN110_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN110_SYNC1_BYPASS    0x00000003
#define GPIO_PIN110_SYNC1_BYPASS_M  ((GPIO_PIN110_SYNC1_BYPASS_V)<<(GPIO_PIN110_SYNC1_BYPASS_S))
#define GPIO_PIN110_SYNC1_BYPASS_V  0x3
#define GPIO_PIN110_SYNC1_BYPASS_S  3
/* GPIO_PIN110_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN110_PAD_DRIVER    (BIT(2))
#define GPIO_PIN110_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN110_PAD_DRIVER_V  0x1
#define GPIO_PIN110_PAD_DRIVER_S  2
/* GPIO_PIN110_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN110_SYNC2_BYPASS    0x00000003
#define GPIO_PIN110_SYNC2_BYPASS_M  ((GPIO_PIN110_SYNC2_BYPASS_V)<<(GPIO_PIN110_SYNC2_BYPASS_S))
#define GPIO_PIN110_SYNC2_BYPASS_V  0x3
#define GPIO_PIN110_SYNC2_BYPASS_S  0

#define GPIO_PIN111_REG          (DR_REG_GPIO_BASE + 0x2B0)
/* GPIO_PIN111_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN111_INT_ENA    0x0000001F
#define GPIO_PIN111_INT_ENA_M  ((GPIO_PIN111_INT_ENA_V)<<(GPIO_PIN111_INT_ENA_S))
#define GPIO_PIN111_INT_ENA_V  0x1F
#define GPIO_PIN111_INT_ENA_S  13
/* GPIO_PIN111_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN111_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN111_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN111_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN111_WAKEUP_ENABLE_S  10
/* GPIO_PIN111_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN111_INT_TYPE    0x00000007
#define GPIO_PIN111_INT_TYPE_M  ((GPIO_PIN111_INT_TYPE_V)<<(GPIO_PIN111_INT_TYPE_S))
#define GPIO_PIN111_INT_TYPE_V  0x7
#define GPIO_PIN111_INT_TYPE_S  7
/* GPIO_PIN111_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN111_SYNC1_BYPASS    0x00000003
#define GPIO_PIN111_SYNC1_BYPASS_M  ((GPIO_PIN111_SYNC1_BYPASS_V)<<(GPIO_PIN111_SYNC1_BYPASS_S))
#define GPIO_PIN111_SYNC1_BYPASS_V  0x3
#define GPIO_PIN111_SYNC1_BYPASS_S  3
/* GPIO_PIN111_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN111_PAD_DRIVER    (BIT(2))
#define GPIO_PIN111_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN111_PAD_DRIVER_V  0x1
#define GPIO_PIN111_PAD_DRIVER_S  2
/* GPIO_PIN111_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN111_SYNC2_BYPASS    0x00000003
#define GPIO_PIN111_SYNC2_BYPASS_M  ((GPIO_PIN111_SYNC2_BYPASS_V)<<(GPIO_PIN111_SYNC2_BYPASS_S))
#define GPIO_PIN111_SYNC2_BYPASS_V  0x3
#define GPIO_PIN111_SYNC2_BYPASS_S  0

#define GPIO_PIN112_REG          (DR_REG_GPIO_BASE + 0x2B4)
/* GPIO_PIN112_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN112_INT_ENA    0x0000001F
#define GPIO_PIN112_INT_ENA_M  ((GPIO_PIN112_INT_ENA_V)<<(GPIO_PIN112_INT_ENA_S))
#define GPIO_PIN112_INT_ENA_V  0x1F
#define GPIO_PIN112_INT_ENA_S  13
/* GPIO_PIN112_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN112_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN112_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN112_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN112_WAKEUP_ENABLE_S  10
/* GPIO_PIN112_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN112_INT_TYPE    0x00000007
#define GPIO_PIN112_INT_TYPE_M  ((GPIO_PIN112_INT_TYPE_V)<<(GPIO_PIN112_INT_TYPE_S))
#define GPIO_PIN112_INT_TYPE_V  0x7
#define GPIO_PIN112_INT_TYPE_S  7
/* GPIO_PIN112_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN112_SYNC1_BYPASS    0x00000003
#define GPIO_PIN112_SYNC1_BYPASS_M  ((GPIO_PIN112_SYNC1_BYPASS_V)<<(GPIO_PIN112_SYNC1_BYPASS_S))
#define GPIO_PIN112_SYNC1_BYPASS_V  0x3
#define GPIO_PIN112_SYNC1_BYPASS_S  3
/* GPIO_PIN112_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN112_PAD_DRIVER    (BIT(2))
#define GPIO_PIN112_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN112_PAD_DRIVER_V  0x1
#define GPIO_PIN112_PAD_DRIVER_S  2
/* GPIO_PIN112_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN112_SYNC2_BYPASS    0x00000003
#define GPIO_PIN112_SYNC2_BYPASS_M  ((GPIO_PIN112_SYNC2_BYPASS_V)<<(GPIO_PIN112_SYNC2_BYPASS_S))
#define GPIO_PIN112_SYNC2_BYPASS_V  0x3
#define GPIO_PIN112_SYNC2_BYPASS_S  0

#define GPIO_PIN113_REG          (DR_REG_GPIO_BASE + 0x2B8)
/* GPIO_PIN113_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN113_INT_ENA    0x0000001F
#define GPIO_PIN113_INT_ENA_M  ((GPIO_PIN113_INT_ENA_V)<<(GPIO_PIN113_INT_ENA_S))
#define GPIO_PIN113_INT_ENA_V  0x1F
#define GPIO_PIN113_INT_ENA_S  13
/* GPIO_PIN113_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN113_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN113_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN113_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN113_WAKEUP_ENABLE_S  10
/* GPIO_PIN113_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN113_INT_TYPE    0x00000007
#define GPIO_PIN113_INT_TYPE_M  ((GPIO_PIN113_INT_TYPE_V)<<(GPIO_PIN113_INT_TYPE_S))
#define GPIO_PIN113_INT_TYPE_V  0x7
#define GPIO_PIN113_INT_TYPE_S  7
/* GPIO_PIN113_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN113_SYNC1_BYPASS    0x00000003
#define GPIO_PIN113_SYNC1_BYPASS_M  ((GPIO_PIN113_SYNC1_BYPASS_V)<<(GPIO_PIN113_SYNC1_BYPASS_S))
#define GPIO_PIN113_SYNC1_BYPASS_V  0x3
#define GPIO_PIN113_SYNC1_BYPASS_S  3
/* GPIO_PIN113_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN113_PAD_DRIVER    (BIT(2))
#define GPIO_PIN113_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN113_PAD_DRIVER_V  0x1
#define GPIO_PIN113_PAD_DRIVER_S  2
/* GPIO_PIN113_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN113_SYNC2_BYPASS    0x00000003
#define GPIO_PIN113_SYNC2_BYPASS_M  ((GPIO_PIN113_SYNC2_BYPASS_V)<<(GPIO_PIN113_SYNC2_BYPASS_S))
#define GPIO_PIN113_SYNC2_BYPASS_V  0x3
#define GPIO_PIN113_SYNC2_BYPASS_S  0

#define GPIO_PIN114_REG          (DR_REG_GPIO_BASE + 0x2BC)
/* GPIO_PIN114_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN114_INT_ENA    0x0000001F
#define GPIO_PIN114_INT_ENA_M  ((GPIO_PIN114_INT_ENA_V)<<(GPIO_PIN114_INT_ENA_S))
#define GPIO_PIN114_INT_ENA_V  0x1F
#define GPIO_PIN114_INT_ENA_S  13
/* GPIO_PIN114_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN114_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN114_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN114_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN114_WAKEUP_ENABLE_S  10
/* GPIO_PIN114_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN114_INT_TYPE    0x00000007
#define GPIO_PIN114_INT_TYPE_M  ((GPIO_PIN114_INT_TYPE_V)<<(GPIO_PIN114_INT_TYPE_S))
#define GPIO_PIN114_INT_TYPE_V  0x7
#define GPIO_PIN114_INT_TYPE_S  7
/* GPIO_PIN114_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN114_SYNC1_BYPASS    0x00000003
#define GPIO_PIN114_SYNC1_BYPASS_M  ((GPIO_PIN114_SYNC1_BYPASS_V)<<(GPIO_PIN114_SYNC1_BYPASS_S))
#define GPIO_PIN114_SYNC1_BYPASS_V  0x3
#define GPIO_PIN114_SYNC1_BYPASS_S  3
/* GPIO_PIN114_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN114_PAD_DRIVER    (BIT(2))
#define GPIO_PIN114_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN114_PAD_DRIVER_V  0x1
#define GPIO_PIN114_PAD_DRIVER_S  2
/* GPIO_PIN114_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN114_SYNC2_BYPASS    0x00000003
#define GPIO_PIN114_SYNC2_BYPASS_M  ((GPIO_PIN114_SYNC2_BYPASS_V)<<(GPIO_PIN114_SYNC2_BYPASS_S))
#define GPIO_PIN114_SYNC2_BYPASS_V  0x3
#define GPIO_PIN114_SYNC2_BYPASS_S  0

#define GPIO_PIN115_REG          (DR_REG_GPIO_BASE + 0x2C0)
/* GPIO_PIN115_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN115_INT_ENA    0x0000001F
#define GPIO_PIN115_INT_ENA_M  ((GPIO_PIN115_INT_ENA_V)<<(GPIO_PIN115_INT_ENA_S))
#define GPIO_PIN115_INT_ENA_V  0x1F
#define GPIO_PIN115_INT_ENA_S  13
/* GPIO_PIN115_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN115_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN115_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN115_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN115_WAKEUP_ENABLE_S  10
/* GPIO_PIN115_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN115_INT_TYPE    0x00000007
#define GPIO_PIN115_INT_TYPE_M  ((GPIO_PIN115_INT_TYPE_V)<<(GPIO_PIN115_INT_TYPE_S))
#define GPIO_PIN115_INT_TYPE_V  0x7
#define GPIO_PIN115_INT_TYPE_S  7
/* GPIO_PIN115_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN115_SYNC1_BYPASS    0x00000003
#define GPIO_PIN115_SYNC1_BYPASS_M  ((GPIO_PIN115_SYNC1_BYPASS_V)<<(GPIO_PIN115_SYNC1_BYPASS_S))
#define GPIO_PIN115_SYNC1_BYPASS_V  0x3
#define GPIO_PIN115_SYNC1_BYPASS_S  3
/* GPIO_PIN115_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN115_PAD_DRIVER    (BIT(2))
#define GPIO_PIN115_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN115_PAD_DRIVER_V  0x1
#define GPIO_PIN115_PAD_DRIVER_S  2
/* GPIO_PIN115_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN115_SYNC2_BYPASS    0x00000003
#define GPIO_PIN115_SYNC2_BYPASS_M  ((GPIO_PIN115_SYNC2_BYPASS_V)<<(GPIO_PIN115_SYNC2_BYPASS_S))
#define GPIO_PIN115_SYNC2_BYPASS_V  0x3
#define GPIO_PIN115_SYNC2_BYPASS_S  0

#define GPIO_PIN116_REG          (DR_REG_GPIO_BASE + 0x2C4)
/* GPIO_PIN116_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN116_INT_ENA    0x0000001F
#define GPIO_PIN116_INT_ENA_M  ((GPIO_PIN116_INT_ENA_V)<<(GPIO_PIN116_INT_ENA_S))
#define GPIO_PIN116_INT_ENA_V  0x1F
#define GPIO_PIN116_INT_ENA_S  13
/* GPIO_PIN116_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN116_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN116_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN116_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN116_WAKEUP_ENABLE_S  10
/* GPIO_PIN116_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN116_INT_TYPE    0x00000007
#define GPIO_PIN116_INT_TYPE_M  ((GPIO_PIN116_INT_TYPE_V)<<(GPIO_PIN116_INT_TYPE_S))
#define GPIO_PIN116_INT_TYPE_V  0x7
#define GPIO_PIN116_INT_TYPE_S  7
/* GPIO_PIN116_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN116_SYNC1_BYPASS    0x00000003
#define GPIO_PIN116_SYNC1_BYPASS_M  ((GPIO_PIN116_SYNC1_BYPASS_V)<<(GPIO_PIN116_SYNC1_BYPASS_S))
#define GPIO_PIN116_SYNC1_BYPASS_V  0x3
#define GPIO_PIN116_SYNC1_BYPASS_S  3
/* GPIO_PIN116_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN116_PAD_DRIVER    (BIT(2))
#define GPIO_PIN116_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN116_PAD_DRIVER_V  0x1
#define GPIO_PIN116_PAD_DRIVER_S  2
/* GPIO_PIN116_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN116_SYNC2_BYPASS    0x00000003
#define GPIO_PIN116_SYNC2_BYPASS_M  ((GPIO_PIN116_SYNC2_BYPASS_V)<<(GPIO_PIN116_SYNC2_BYPASS_S))
#define GPIO_PIN116_SYNC2_BYPASS_V  0x3
#define GPIO_PIN116_SYNC2_BYPASS_S  0

#define GPIO_PIN117_REG          (DR_REG_GPIO_BASE + 0x2C8)
/* GPIO_PIN117_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN117_INT_ENA    0x0000001F
#define GPIO_PIN117_INT_ENA_M  ((GPIO_PIN117_INT_ENA_V)<<(GPIO_PIN117_INT_ENA_S))
#define GPIO_PIN117_INT_ENA_V  0x1F
#define GPIO_PIN117_INT_ENA_S  13
/* GPIO_PIN117_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN117_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN117_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN117_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN117_WAKEUP_ENABLE_S  10
/* GPIO_PIN117_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN117_INT_TYPE    0x00000007
#define GPIO_PIN117_INT_TYPE_M  ((GPIO_PIN117_INT_TYPE_V)<<(GPIO_PIN117_INT_TYPE_S))
#define GPIO_PIN117_INT_TYPE_V  0x7
#define GPIO_PIN117_INT_TYPE_S  7
/* GPIO_PIN117_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN117_SYNC1_BYPASS    0x00000003
#define GPIO_PIN117_SYNC1_BYPASS_M  ((GPIO_PIN117_SYNC1_BYPASS_V)<<(GPIO_PIN117_SYNC1_BYPASS_S))
#define GPIO_PIN117_SYNC1_BYPASS_V  0x3
#define GPIO_PIN117_SYNC1_BYPASS_S  3
/* GPIO_PIN117_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN117_PAD_DRIVER    (BIT(2))
#define GPIO_PIN117_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN117_PAD_DRIVER_V  0x1
#define GPIO_PIN117_PAD_DRIVER_S  2
/* GPIO_PIN117_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN117_SYNC2_BYPASS    0x00000003
#define GPIO_PIN117_SYNC2_BYPASS_M  ((GPIO_PIN117_SYNC2_BYPASS_V)<<(GPIO_PIN117_SYNC2_BYPASS_S))
#define GPIO_PIN117_SYNC2_BYPASS_V  0x3
#define GPIO_PIN117_SYNC2_BYPASS_S  0

#define GPIO_PIN118_REG          (DR_REG_GPIO_BASE + 0x2CC)
/* GPIO_PIN118_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN118_INT_ENA    0x0000001F
#define GPIO_PIN118_INT_ENA_M  ((GPIO_PIN118_INT_ENA_V)<<(GPIO_PIN118_INT_ENA_S))
#define GPIO_PIN118_INT_ENA_V  0x1F
#define GPIO_PIN118_INT_ENA_S  13
/* GPIO_PIN118_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN118_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN118_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN118_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN118_WAKEUP_ENABLE_S  10
/* GPIO_PIN118_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN118_INT_TYPE    0x00000007
#define GPIO_PIN118_INT_TYPE_M  ((GPIO_PIN118_INT_TYPE_V)<<(GPIO_PIN118_INT_TYPE_S))
#define GPIO_PIN118_INT_TYPE_V  0x7
#define GPIO_PIN118_INT_TYPE_S  7
/* GPIO_PIN118_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN118_SYNC1_BYPASS    0x00000003
#define GPIO_PIN118_SYNC1_BYPASS_M  ((GPIO_PIN118_SYNC1_BYPASS_V)<<(GPIO_PIN118_SYNC1_BYPASS_S))
#define GPIO_PIN118_SYNC1_BYPASS_V  0x3
#define GPIO_PIN118_SYNC1_BYPASS_S  3
/* GPIO_PIN118_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN118_PAD_DRIVER    (BIT(2))
#define GPIO_PIN118_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN118_PAD_DRIVER_V  0x1
#define GPIO_PIN118_PAD_DRIVER_S  2
/* GPIO_PIN118_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN118_SYNC2_BYPASS    0x00000003
#define GPIO_PIN118_SYNC2_BYPASS_M  ((GPIO_PIN118_SYNC2_BYPASS_V)<<(GPIO_PIN118_SYNC2_BYPASS_S))
#define GPIO_PIN118_SYNC2_BYPASS_V  0x3
#define GPIO_PIN118_SYNC2_BYPASS_S  0

#define GPIO_PIN119_REG          (DR_REG_GPIO_BASE + 0x2D0)
/* GPIO_PIN119_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN119_INT_ENA    0x0000001F
#define GPIO_PIN119_INT_ENA_M  ((GPIO_PIN119_INT_ENA_V)<<(GPIO_PIN119_INT_ENA_S))
#define GPIO_PIN119_INT_ENA_V  0x1F
#define GPIO_PIN119_INT_ENA_S  13
/* GPIO_PIN119_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN119_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN119_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN119_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN119_WAKEUP_ENABLE_S  10
/* GPIO_PIN119_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN119_INT_TYPE    0x00000007
#define GPIO_PIN119_INT_TYPE_M  ((GPIO_PIN119_INT_TYPE_V)<<(GPIO_PIN119_INT_TYPE_S))
#define GPIO_PIN119_INT_TYPE_V  0x7
#define GPIO_PIN119_INT_TYPE_S  7
/* GPIO_PIN119_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN119_SYNC1_BYPASS    0x00000003
#define GPIO_PIN119_SYNC1_BYPASS_M  ((GPIO_PIN119_SYNC1_BYPASS_V)<<(GPIO_PIN119_SYNC1_BYPASS_S))
#define GPIO_PIN119_SYNC1_BYPASS_V  0x3
#define GPIO_PIN119_SYNC1_BYPASS_S  3
/* GPIO_PIN119_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN119_PAD_DRIVER    (BIT(2))
#define GPIO_PIN119_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN119_PAD_DRIVER_V  0x1
#define GPIO_PIN119_PAD_DRIVER_S  2
/* GPIO_PIN119_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN119_SYNC2_BYPASS    0x00000003
#define GPIO_PIN119_SYNC2_BYPASS_M  ((GPIO_PIN119_SYNC2_BYPASS_V)<<(GPIO_PIN119_SYNC2_BYPASS_S))
#define GPIO_PIN119_SYNC2_BYPASS_V  0x3
#define GPIO_PIN119_SYNC2_BYPASS_S  0

#define GPIO_PIN120_REG          (DR_REG_GPIO_BASE + 0x2D4)
/* GPIO_PIN120_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN120_INT_ENA    0x0000001F
#define GPIO_PIN120_INT_ENA_M  ((GPIO_PIN120_INT_ENA_V)<<(GPIO_PIN120_INT_ENA_S))
#define GPIO_PIN120_INT_ENA_V  0x1F
#define GPIO_PIN120_INT_ENA_S  13
/* GPIO_PIN120_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN120_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN120_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN120_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN120_WAKEUP_ENABLE_S  10
/* GPIO_PIN120_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN120_INT_TYPE    0x00000007
#define GPIO_PIN120_INT_TYPE_M  ((GPIO_PIN120_INT_TYPE_V)<<(GPIO_PIN120_INT_TYPE_S))
#define GPIO_PIN120_INT_TYPE_V  0x7
#define GPIO_PIN120_INT_TYPE_S  7
/* GPIO_PIN120_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN120_SYNC1_BYPASS    0x00000003
#define GPIO_PIN120_SYNC1_BYPASS_M  ((GPIO_PIN120_SYNC1_BYPASS_V)<<(GPIO_PIN120_SYNC1_BYPASS_S))
#define GPIO_PIN120_SYNC1_BYPASS_V  0x3
#define GPIO_PIN120_SYNC1_BYPASS_S  3
/* GPIO_PIN120_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN120_PAD_DRIVER    (BIT(2))
#define GPIO_PIN120_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN120_PAD_DRIVER_V  0x1
#define GPIO_PIN120_PAD_DRIVER_S  2
/* GPIO_PIN120_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN120_SYNC2_BYPASS    0x00000003
#define GPIO_PIN120_SYNC2_BYPASS_M  ((GPIO_PIN120_SYNC2_BYPASS_V)<<(GPIO_PIN120_SYNC2_BYPASS_S))
#define GPIO_PIN120_SYNC2_BYPASS_V  0x3
#define GPIO_PIN120_SYNC2_BYPASS_S  0

#define GPIO_PIN121_REG          (DR_REG_GPIO_BASE + 0x2D8)
/* GPIO_PIN121_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN121_INT_ENA    0x0000001F
#define GPIO_PIN121_INT_ENA_M  ((GPIO_PIN121_INT_ENA_V)<<(GPIO_PIN121_INT_ENA_S))
#define GPIO_PIN121_INT_ENA_V  0x1F
#define GPIO_PIN121_INT_ENA_S  13
/* GPIO_PIN121_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN121_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN121_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN121_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN121_WAKEUP_ENABLE_S  10
/* GPIO_PIN121_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN121_INT_TYPE    0x00000007
#define GPIO_PIN121_INT_TYPE_M  ((GPIO_PIN121_INT_TYPE_V)<<(GPIO_PIN121_INT_TYPE_S))
#define GPIO_PIN121_INT_TYPE_V  0x7
#define GPIO_PIN121_INT_TYPE_S  7
/* GPIO_PIN121_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN121_SYNC1_BYPASS    0x00000003
#define GPIO_PIN121_SYNC1_BYPASS_M  ((GPIO_PIN121_SYNC1_BYPASS_V)<<(GPIO_PIN121_SYNC1_BYPASS_S))
#define GPIO_PIN121_SYNC1_BYPASS_V  0x3
#define GPIO_PIN121_SYNC1_BYPASS_S  3
/* GPIO_PIN121_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN121_PAD_DRIVER    (BIT(2))
#define GPIO_PIN121_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN121_PAD_DRIVER_V  0x1
#define GPIO_PIN121_PAD_DRIVER_S  2
/* GPIO_PIN121_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN121_SYNC2_BYPASS    0x00000003
#define GPIO_PIN121_SYNC2_BYPASS_M  ((GPIO_PIN121_SYNC2_BYPASS_V)<<(GPIO_PIN121_SYNC2_BYPASS_S))
#define GPIO_PIN121_SYNC2_BYPASS_V  0x3
#define GPIO_PIN121_SYNC2_BYPASS_S  0

#define GPIO_PIN122_REG          (DR_REG_GPIO_BASE + 0x2DC)
/* GPIO_PIN122_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN122_INT_ENA    0x0000001F
#define GPIO_PIN122_INT_ENA_M  ((GPIO_PIN122_INT_ENA_V)<<(GPIO_PIN122_INT_ENA_S))
#define GPIO_PIN122_INT_ENA_V  0x1F
#define GPIO_PIN122_INT_ENA_S  13
/* GPIO_PIN122_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN122_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN122_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN122_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN122_WAKEUP_ENABLE_S  10
/* GPIO_PIN122_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN122_INT_TYPE    0x00000007
#define GPIO_PIN122_INT_TYPE_M  ((GPIO_PIN122_INT_TYPE_V)<<(GPIO_PIN122_INT_TYPE_S))
#define GPIO_PIN122_INT_TYPE_V  0x7
#define GPIO_PIN122_INT_TYPE_S  7
/* GPIO_PIN122_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN122_SYNC1_BYPASS    0x00000003
#define GPIO_PIN122_SYNC1_BYPASS_M  ((GPIO_PIN122_SYNC1_BYPASS_V)<<(GPIO_PIN122_SYNC1_BYPASS_S))
#define GPIO_PIN122_SYNC1_BYPASS_V  0x3
#define GPIO_PIN122_SYNC1_BYPASS_S  3
/* GPIO_PIN122_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN122_PAD_DRIVER    (BIT(2))
#define GPIO_PIN122_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN122_PAD_DRIVER_V  0x1
#define GPIO_PIN122_PAD_DRIVER_S  2
/* GPIO_PIN122_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN122_SYNC2_BYPASS    0x00000003
#define GPIO_PIN122_SYNC2_BYPASS_M  ((GPIO_PIN122_SYNC2_BYPASS_V)<<(GPIO_PIN122_SYNC2_BYPASS_S))
#define GPIO_PIN122_SYNC2_BYPASS_V  0x3
#define GPIO_PIN122_SYNC2_BYPASS_S  0

#define GPIO_PIN123_REG          (DR_REG_GPIO_BASE + 0x2E0)
/* GPIO_PIN123_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN123_INT_ENA    0x0000001F
#define GPIO_PIN123_INT_ENA_M  ((GPIO_PIN123_INT_ENA_V)<<(GPIO_PIN123_INT_ENA_S))
#define GPIO_PIN123_INT_ENA_V  0x1F
#define GPIO_PIN123_INT_ENA_S  13
/* GPIO_PIN123_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN123_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN123_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN123_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN123_WAKEUP_ENABLE_S  10
/* GPIO_PIN123_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN123_INT_TYPE    0x00000007
#define GPIO_PIN123_INT_TYPE_M  ((GPIO_PIN123_INT_TYPE_V)<<(GPIO_PIN123_INT_TYPE_S))
#define GPIO_PIN123_INT_TYPE_V  0x7
#define GPIO_PIN123_INT_TYPE_S  7
/* GPIO_PIN123_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN123_SYNC1_BYPASS    0x00000003
#define GPIO_PIN123_SYNC1_BYPASS_M  ((GPIO_PIN123_SYNC1_BYPASS_V)<<(GPIO_PIN123_SYNC1_BYPASS_S))
#define GPIO_PIN123_SYNC1_BYPASS_V  0x3
#define GPIO_PIN123_SYNC1_BYPASS_S  3
/* GPIO_PIN123_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN123_PAD_DRIVER    (BIT(2))
#define GPIO_PIN123_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN123_PAD_DRIVER_V  0x1
#define GPIO_PIN123_PAD_DRIVER_S  2
/* GPIO_PIN123_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN123_SYNC2_BYPASS    0x00000003
#define GPIO_PIN123_SYNC2_BYPASS_M  ((GPIO_PIN123_SYNC2_BYPASS_V)<<(GPIO_PIN123_SYNC2_BYPASS_S))
#define GPIO_PIN123_SYNC2_BYPASS_V  0x3
#define GPIO_PIN123_SYNC2_BYPASS_S  0

#define GPIO_PIN124_REG          (DR_REG_GPIO_BASE + 0x2E4)
/* GPIO_PIN124_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN124_INT_ENA    0x0000001F
#define GPIO_PIN124_INT_ENA_M  ((GPIO_PIN124_INT_ENA_V)<<(GPIO_PIN124_INT_ENA_S))
#define GPIO_PIN124_INT_ENA_V  0x1F
#define GPIO_PIN124_INT_ENA_S  13
/* GPIO_PIN124_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN124_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN124_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN124_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN124_WAKEUP_ENABLE_S  10
/* GPIO_PIN124_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN124_INT_TYPE    0x00000007
#define GPIO_PIN124_INT_TYPE_M  ((GPIO_PIN124_INT_TYPE_V)<<(GPIO_PIN124_INT_TYPE_S))
#define GPIO_PIN124_INT_TYPE_V  0x7
#define GPIO_PIN124_INT_TYPE_S  7
/* GPIO_PIN124_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN124_SYNC1_BYPASS    0x00000003
#define GPIO_PIN124_SYNC1_BYPASS_M  ((GPIO_PIN124_SYNC1_BYPASS_V)<<(GPIO_PIN124_SYNC1_BYPASS_S))
#define GPIO_PIN124_SYNC1_BYPASS_V  0x3
#define GPIO_PIN124_SYNC1_BYPASS_S  3
/* GPIO_PIN124_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN124_PAD_DRIVER    (BIT(2))
#define GPIO_PIN124_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN124_PAD_DRIVER_V  0x1
#define GPIO_PIN124_PAD_DRIVER_S  2
/* GPIO_PIN124_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN124_SYNC2_BYPASS    0x00000003
#define GPIO_PIN124_SYNC2_BYPASS_M  ((GPIO_PIN124_SYNC2_BYPASS_V)<<(GPIO_PIN124_SYNC2_BYPASS_S))
#define GPIO_PIN124_SYNC2_BYPASS_V  0x3
#define GPIO_PIN124_SYNC2_BYPASS_S  0

#define GPIO_PIN125_REG          (DR_REG_GPIO_BASE + 0x2E8)
/* GPIO_PIN125_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN125_INT_ENA    0x0000001F
#define GPIO_PIN125_INT_ENA_M  ((GPIO_PIN125_INT_ENA_V)<<(GPIO_PIN125_INT_ENA_S))
#define GPIO_PIN125_INT_ENA_V  0x1F
#define GPIO_PIN125_INT_ENA_S  13
/* GPIO_PIN125_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN125_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN125_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN125_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN125_WAKEUP_ENABLE_S  10
/* GPIO_PIN125_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN125_INT_TYPE    0x00000007
#define GPIO_PIN125_INT_TYPE_M  ((GPIO_PIN125_INT_TYPE_V)<<(GPIO_PIN125_INT_TYPE_S))
#define GPIO_PIN125_INT_TYPE_V  0x7
#define GPIO_PIN125_INT_TYPE_S  7
/* GPIO_PIN125_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN125_SYNC1_BYPASS    0x00000003
#define GPIO_PIN125_SYNC1_BYPASS_M  ((GPIO_PIN125_SYNC1_BYPASS_V)<<(GPIO_PIN125_SYNC1_BYPASS_S))
#define GPIO_PIN125_SYNC1_BYPASS_V  0x3
#define GPIO_PIN125_SYNC1_BYPASS_S  3
/* GPIO_PIN125_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN125_PAD_DRIVER    (BIT(2))
#define GPIO_PIN125_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN125_PAD_DRIVER_V  0x1
#define GPIO_PIN125_PAD_DRIVER_S  2
/* GPIO_PIN125_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN125_SYNC2_BYPASS    0x00000003
#define GPIO_PIN125_SYNC2_BYPASS_M  ((GPIO_PIN125_SYNC2_BYPASS_V)<<(GPIO_PIN125_SYNC2_BYPASS_S))
#define GPIO_PIN125_SYNC2_BYPASS_V  0x3
#define GPIO_PIN125_SYNC2_BYPASS_S  0

#define GPIO_PIN126_REG          (DR_REG_GPIO_BASE + 0x2EC)
/* GPIO_PIN126_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN126_INT_ENA    0x0000001F
#define GPIO_PIN126_INT_ENA_M  ((GPIO_PIN126_INT_ENA_V)<<(GPIO_PIN126_INT_ENA_S))
#define GPIO_PIN126_INT_ENA_V  0x1F
#define GPIO_PIN126_INT_ENA_S  13
/* GPIO_PIN126_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN126_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN126_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN126_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN126_WAKEUP_ENABLE_S  10
/* GPIO_PIN126_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN126_INT_TYPE    0x00000007
#define GPIO_PIN126_INT_TYPE_M  ((GPIO_PIN126_INT_TYPE_V)<<(GPIO_PIN126_INT_TYPE_S))
#define GPIO_PIN126_INT_TYPE_V  0x7
#define GPIO_PIN126_INT_TYPE_S  7
/* GPIO_PIN126_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN126_SYNC1_BYPASS    0x00000003
#define GPIO_PIN126_SYNC1_BYPASS_M  ((GPIO_PIN126_SYNC1_BYPASS_V)<<(GPIO_PIN126_SYNC1_BYPASS_S))
#define GPIO_PIN126_SYNC1_BYPASS_V  0x3
#define GPIO_PIN126_SYNC1_BYPASS_S  3
/* GPIO_PIN126_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN126_PAD_DRIVER    (BIT(2))
#define GPIO_PIN126_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN126_PAD_DRIVER_V  0x1
#define GPIO_PIN126_PAD_DRIVER_S  2
/* GPIO_PIN126_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN126_SYNC2_BYPASS    0x00000003
#define GPIO_PIN126_SYNC2_BYPASS_M  ((GPIO_PIN126_SYNC2_BYPASS_V)<<(GPIO_PIN126_SYNC2_BYPASS_S))
#define GPIO_PIN126_SYNC2_BYPASS_V  0x3
#define GPIO_PIN126_SYNC2_BYPASS_S  0

#define GPIO_PIN127_REG          (DR_REG_GPIO_BASE + 0x2F0)
/* GPIO_PIN127_INT_ENA : R/W ;bitpos:[17:13] ;default: 5'h0 ; */
/*description: Configures whether or not to enable gpio_int_0 or gpio_int_1 or gpio_int_2 or gp
io_int_3(need update in different project).; ;     - bit13: Configures whether o
r not to enable gpio_int_0(need update in different project):\\;     0: Disable\
\;     1: Enable\\    - bit14: Configures whether or not to enable gpio_int_1(ne
ed update in different project):\\;     0: Disable\\;     1: Enable\\    - bit15
: Configures whether or not to enable gpio_int_2(need update in different projec
t):\\;     0: Disable\\;     1: Enable\\    - bit16: Configures whether or not t
o enable gpio_int_3(need update in different project):\\;     0: Disable\\;
1: Enable\\;     - bit17: invalid;.*/
#define GPIO_PIN127_INT_ENA    0x0000001F
#define GPIO_PIN127_INT_ENA_M  ((GPIO_PIN127_INT_ENA_V)<<(GPIO_PIN127_INT_ENA_S))
#define GPIO_PIN127_INT_ENA_V  0x1F
#define GPIO_PIN127_INT_ENA_S  13
/* GPIO_PIN127_WAKEUP_ENABLE : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures whether or not to enable GPIO wake-up function.\\; 0: Disable\\; 1: E
nable\\; This function only wakes up the CPU from Light-sleep. \\.*/
#define GPIO_PIN127_WAKEUP_ENABLE    (BIT(10))
#define GPIO_PIN127_WAKEUP_ENABLE_M  (BIT(10))
#define GPIO_PIN127_WAKEUP_ENABLE_V  0x1
#define GPIO_PIN127_WAKEUP_ENABLE_S  10
/* GPIO_PIN127_INT_TYPE : R/W ;bitpos:[9:7] ;default: 3'h0 ; */
/*description: Configures GPIO interrupt type.\\; 0: GPIO interrupt disabled\\; 1: Rising edge
trigger\\; 2: Falling edge trigger\\; 3: Any edge trigger\\; 4: Low level trigge
r\\; 5: High level trigger\\.*/
#define GPIO_PIN127_INT_TYPE    0x00000007
#define GPIO_PIN127_INT_TYPE_M  ((GPIO_PIN127_INT_TYPE_V)<<(GPIO_PIN127_INT_TYPE_S))
#define GPIO_PIN127_INT_TYPE_V  0x7
#define GPIO_PIN127_INT_TYPE_S  7
/* GPIO_PIN127_SYNC1_BYPASS : R/W ;bitpos:[4:3] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the first-level synchronization.\\; 0: Not synchronize\\;
1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroniz
e on rising edge\\.*/
#define GPIO_PIN127_SYNC1_BYPASS    0x00000003
#define GPIO_PIN127_SYNC1_BYPASS_M  ((GPIO_PIN127_SYNC1_BYPASS_V)<<(GPIO_PIN127_SYNC1_BYPASS_S))
#define GPIO_PIN127_SYNC1_BYPASS_V  0x3
#define GPIO_PIN127_SYNC1_BYPASS_S  3
/* GPIO_PIN127_PAD_DRIVER : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: Configures to select pin drive mode. \\; 0: Normal output\\; 1: Open drain outpu
t \\.*/
#define GPIO_PIN127_PAD_DRIVER    (BIT(2))
#define GPIO_PIN127_PAD_DRIVER_M  (BIT(2))
#define GPIO_PIN127_PAD_DRIVER_V  0x1
#define GPIO_PIN127_PAD_DRIVER_S  2
/* GPIO_PIN127_SYNC2_BYPASS : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: Configures whether or not to synchronize GPIO input data on either edge of IO MU
X operating clock for the second-level synchronization.\\; 0: Not synchronize\\;
 1: Synchronize on falling edge\\; 2: Synchronize on rising edge\\; 3: Synchroni
ze on rising edge\\.*/
#define GPIO_PIN127_SYNC2_BYPASS    0x00000003
#define GPIO_PIN127_SYNC2_BYPASS_M  ((GPIO_PIN127_SYNC2_BYPASS_V)<<(GPIO_PIN127_SYNC2_BYPASS_S))
#define GPIO_PIN127_SYNC2_BYPASS_V  0x3
#define GPIO_PIN127_SYNC2_BYPASS_S  0

#define GPIO_FUNC0_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x2F4)
/* GPIO_SIG0_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG0_IN_SEL    (BIT(9))
#define GPIO_SIG0_IN_SEL_M  (BIT(9))
#define GPIO_SIG0_IN_SEL_V  0x1
#define GPIO_SIG0_IN_SEL_S  9
/* GPIO_FUNC0_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC0_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC0_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC0_IN_INV_SEL_V  0x1
#define GPIO_FUNC0_IN_INV_SEL_S  8
/* GPIO_FUNC0_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $a
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC0_IN_SEL    0x000000FF
#define GPIO_FUNC0_IN_SEL_M  ((GPIO_FUNC0_IN_SEL_V)<<(GPIO_FUNC0_IN_SEL_S))
#define GPIO_FUNC0_IN_SEL_V  0xFF
#define GPIO_FUNC0_IN_SEL_S  0

#define GPIO_FUNC1_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x2F8)
/* GPIO_SIG1_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG1_IN_SEL    (BIT(9))
#define GPIO_SIG1_IN_SEL_M  (BIT(9))
#define GPIO_SIG1_IN_SEL_V  0x1
#define GPIO_SIG1_IN_SEL_S  9
/* GPIO_FUNC1_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC1_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC1_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC1_IN_INV_SEL_V  0x1
#define GPIO_FUNC1_IN_INV_SEL_S  8
/* GPIO_FUNC1_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $a
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC1_IN_SEL    0x000000FF
#define GPIO_FUNC1_IN_SEL_M  ((GPIO_FUNC1_IN_SEL_V)<<(GPIO_FUNC1_IN_SEL_S))
#define GPIO_FUNC1_IN_SEL_V  0xFF
#define GPIO_FUNC1_IN_SEL_S  0

#define GPIO_FUNC2_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x2FC)
/* GPIO_SIG2_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG2_IN_SEL    (BIT(9))
#define GPIO_SIG2_IN_SEL_M  (BIT(9))
#define GPIO_SIG2_IN_SEL_V  0x1
#define GPIO_SIG2_IN_SEL_S  9
/* GPIO_FUNC2_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC2_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC2_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC2_IN_INV_SEL_V  0x1
#define GPIO_FUNC2_IN_INV_SEL_S  8
/* GPIO_FUNC2_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $a
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC2_IN_SEL    0x000000FF
#define GPIO_FUNC2_IN_SEL_M  ((GPIO_FUNC2_IN_SEL_V)<<(GPIO_FUNC2_IN_SEL_S))
#define GPIO_FUNC2_IN_SEL_V  0xFF
#define GPIO_FUNC2_IN_SEL_S  0

#define GPIO_FUNC3_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x300)
/* GPIO_SIG3_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG3_IN_SEL    (BIT(9))
#define GPIO_SIG3_IN_SEL_M  (BIT(9))
#define GPIO_SIG3_IN_SEL_V  0x1
#define GPIO_SIG3_IN_SEL_S  9
/* GPIO_FUNC3_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC3_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC3_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC3_IN_INV_SEL_V  0x1
#define GPIO_FUNC3_IN_INV_SEL_S  8
/* GPIO_FUNC3_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $a
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC3_IN_SEL    0x000000FF
#define GPIO_FUNC3_IN_SEL_M  ((GPIO_FUNC3_IN_SEL_V)<<(GPIO_FUNC3_IN_SEL_S))
#define GPIO_FUNC3_IN_SEL_V  0xFF
#define GPIO_FUNC3_IN_SEL_S  0

#define GPIO_FUNC4_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x304)
/* GPIO_SIG4_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG4_IN_SEL    (BIT(9))
#define GPIO_SIG4_IN_SEL_M  (BIT(9))
#define GPIO_SIG4_IN_SEL_V  0x1
#define GPIO_SIG4_IN_SEL_S  9
/* GPIO_FUNC4_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC4_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC4_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC4_IN_INV_SEL_V  0x1
#define GPIO_FUNC4_IN_INV_SEL_S  8
/* GPIO_FUNC4_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $a
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC4_IN_SEL    0x000000FF
#define GPIO_FUNC4_IN_SEL_M  ((GPIO_FUNC4_IN_SEL_V)<<(GPIO_FUNC4_IN_SEL_S))
#define GPIO_FUNC4_IN_SEL_V  0xFF
#define GPIO_FUNC4_IN_SEL_S  0

#define GPIO_FUNC5_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x308)
/* GPIO_SIG5_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG5_IN_SEL    (BIT(9))
#define GPIO_SIG5_IN_SEL_M  (BIT(9))
#define GPIO_SIG5_IN_SEL_V  0x1
#define GPIO_SIG5_IN_SEL_S  9
/* GPIO_FUNC5_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC5_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC5_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC5_IN_INV_SEL_V  0x1
#define GPIO_FUNC5_IN_INV_SEL_S  8
/* GPIO_FUNC5_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $a
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC5_IN_SEL    0x000000FF
#define GPIO_FUNC5_IN_SEL_M  ((GPIO_FUNC5_IN_SEL_V)<<(GPIO_FUNC5_IN_SEL_S))
#define GPIO_FUNC5_IN_SEL_V  0xFF
#define GPIO_FUNC5_IN_SEL_S  0

#define GPIO_FUNC6_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x30C)
/* GPIO_SIG6_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG6_IN_SEL    (BIT(9))
#define GPIO_SIG6_IN_SEL_M  (BIT(9))
#define GPIO_SIG6_IN_SEL_V  0x1
#define GPIO_SIG6_IN_SEL_S  9
/* GPIO_FUNC6_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC6_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC6_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC6_IN_INV_SEL_V  0x1
#define GPIO_FUNC6_IN_INV_SEL_S  8
/* GPIO_FUNC6_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $a
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC6_IN_SEL    0x000000FF
#define GPIO_FUNC6_IN_SEL_M  ((GPIO_FUNC6_IN_SEL_V)<<(GPIO_FUNC6_IN_SEL_S))
#define GPIO_FUNC6_IN_SEL_V  0xFF
#define GPIO_FUNC6_IN_SEL_S  0

#define GPIO_FUNC7_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x310)
/* GPIO_SIG7_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG7_IN_SEL    (BIT(9))
#define GPIO_SIG7_IN_SEL_M  (BIT(9))
#define GPIO_SIG7_IN_SEL_V  0x1
#define GPIO_SIG7_IN_SEL_S  9
/* GPIO_FUNC7_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC7_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC7_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC7_IN_INV_SEL_V  0x1
#define GPIO_FUNC7_IN_INV_SEL_S  8
/* GPIO_FUNC7_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $a
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC7_IN_SEL    0x000000FF
#define GPIO_FUNC7_IN_SEL_M  ((GPIO_FUNC7_IN_SEL_V)<<(GPIO_FUNC7_IN_SEL_S))
#define GPIO_FUNC7_IN_SEL_V  0xFF
#define GPIO_FUNC7_IN_SEL_S  0

#define GPIO_FUNC10_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x31C)
/* GPIO_SIG10_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG10_IN_SEL    (BIT(9))
#define GPIO_SIG10_IN_SEL_M  (BIT(9))
#define GPIO_SIG10_IN_SEL_V  0x1
#define GPIO_SIG10_IN_SEL_S  9
/* GPIO_FUNC10_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC10_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC10_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC10_IN_INV_SEL_V  0x1
#define GPIO_FUNC10_IN_INV_SEL_S  8
/* GPIO_FUNC10_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC10_IN_SEL    0x000000FF
#define GPIO_FUNC10_IN_SEL_M  ((GPIO_FUNC10_IN_SEL_V)<<(GPIO_FUNC10_IN_SEL_S))
#define GPIO_FUNC10_IN_SEL_V  0xFF
#define GPIO_FUNC10_IN_SEL_S  0

#define GPIO_FUNC11_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x320)
/* GPIO_SIG11_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG11_IN_SEL    (BIT(9))
#define GPIO_SIG11_IN_SEL_M  (BIT(9))
#define GPIO_SIG11_IN_SEL_V  0x1
#define GPIO_SIG11_IN_SEL_S  9
/* GPIO_FUNC11_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC11_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC11_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC11_IN_INV_SEL_V  0x1
#define GPIO_FUNC11_IN_INV_SEL_S  8
/* GPIO_FUNC11_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC11_IN_SEL    0x000000FF
#define GPIO_FUNC11_IN_SEL_M  ((GPIO_FUNC11_IN_SEL_V)<<(GPIO_FUNC11_IN_SEL_S))
#define GPIO_FUNC11_IN_SEL_V  0xFF
#define GPIO_FUNC11_IN_SEL_S  0

#define GPIO_FUNC12_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x324)
/* GPIO_SIG12_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG12_IN_SEL    (BIT(9))
#define GPIO_SIG12_IN_SEL_M  (BIT(9))
#define GPIO_SIG12_IN_SEL_V  0x1
#define GPIO_SIG12_IN_SEL_S  9
/* GPIO_FUNC12_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC12_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC12_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC12_IN_INV_SEL_V  0x1
#define GPIO_FUNC12_IN_INV_SEL_S  8
/* GPIO_FUNC12_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC12_IN_SEL    0x000000FF
#define GPIO_FUNC12_IN_SEL_M  ((GPIO_FUNC12_IN_SEL_V)<<(GPIO_FUNC12_IN_SEL_S))
#define GPIO_FUNC12_IN_SEL_V  0xFF
#define GPIO_FUNC12_IN_SEL_S  0

#define GPIO_FUNC13_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x328)
/* GPIO_SIG13_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG13_IN_SEL    (BIT(9))
#define GPIO_SIG13_IN_SEL_M  (BIT(9))
#define GPIO_SIG13_IN_SEL_V  0x1
#define GPIO_SIG13_IN_SEL_S  9
/* GPIO_FUNC13_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC13_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC13_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC13_IN_INV_SEL_V  0x1
#define GPIO_FUNC13_IN_INV_SEL_S  8
/* GPIO_FUNC13_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC13_IN_SEL    0x000000FF
#define GPIO_FUNC13_IN_SEL_M  ((GPIO_FUNC13_IN_SEL_V)<<(GPIO_FUNC13_IN_SEL_S))
#define GPIO_FUNC13_IN_SEL_V  0xFF
#define GPIO_FUNC13_IN_SEL_S  0

#define GPIO_FUNC14_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x32C)
/* GPIO_SIG14_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG14_IN_SEL    (BIT(9))
#define GPIO_SIG14_IN_SEL_M  (BIT(9))
#define GPIO_SIG14_IN_SEL_V  0x1
#define GPIO_SIG14_IN_SEL_S  9
/* GPIO_FUNC14_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC14_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC14_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC14_IN_INV_SEL_V  0x1
#define GPIO_FUNC14_IN_INV_SEL_S  8
/* GPIO_FUNC14_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC14_IN_SEL    0x000000FF
#define GPIO_FUNC14_IN_SEL_M  ((GPIO_FUNC14_IN_SEL_V)<<(GPIO_FUNC14_IN_SEL_S))
#define GPIO_FUNC14_IN_SEL_V  0xFF
#define GPIO_FUNC14_IN_SEL_S  0

#define GPIO_FUNC15_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x330)
/* GPIO_SIG15_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG15_IN_SEL    (BIT(9))
#define GPIO_SIG15_IN_SEL_M  (BIT(9))
#define GPIO_SIG15_IN_SEL_V  0x1
#define GPIO_SIG15_IN_SEL_S  9
/* GPIO_FUNC15_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC15_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC15_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC15_IN_INV_SEL_V  0x1
#define GPIO_FUNC15_IN_INV_SEL_S  8
/* GPIO_FUNC15_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC15_IN_SEL    0x000000FF
#define GPIO_FUNC15_IN_SEL_M  ((GPIO_FUNC15_IN_SEL_V)<<(GPIO_FUNC15_IN_SEL_S))
#define GPIO_FUNC15_IN_SEL_V  0xFF
#define GPIO_FUNC15_IN_SEL_S  0

#define GPIO_FUNC16_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x334)
/* GPIO_SIG16_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG16_IN_SEL    (BIT(9))
#define GPIO_SIG16_IN_SEL_M  (BIT(9))
#define GPIO_SIG16_IN_SEL_V  0x1
#define GPIO_SIG16_IN_SEL_S  9
/* GPIO_FUNC16_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC16_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC16_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC16_IN_INV_SEL_V  0x1
#define GPIO_FUNC16_IN_INV_SEL_S  8
/* GPIO_FUNC16_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC16_IN_SEL    0x000000FF
#define GPIO_FUNC16_IN_SEL_M  ((GPIO_FUNC16_IN_SEL_V)<<(GPIO_FUNC16_IN_SEL_S))
#define GPIO_FUNC16_IN_SEL_V  0xFF
#define GPIO_FUNC16_IN_SEL_S  0

#define GPIO_FUNC17_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x338)
/* GPIO_SIG17_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG17_IN_SEL    (BIT(9))
#define GPIO_SIG17_IN_SEL_M  (BIT(9))
#define GPIO_SIG17_IN_SEL_V  0x1
#define GPIO_SIG17_IN_SEL_S  9
/* GPIO_FUNC17_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC17_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC17_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC17_IN_INV_SEL_V  0x1
#define GPIO_FUNC17_IN_INV_SEL_S  8
/* GPIO_FUNC17_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC17_IN_SEL    0x000000FF
#define GPIO_FUNC17_IN_SEL_M  ((GPIO_FUNC17_IN_SEL_V)<<(GPIO_FUNC17_IN_SEL_S))
#define GPIO_FUNC17_IN_SEL_V  0xFF
#define GPIO_FUNC17_IN_SEL_S  0

#define GPIO_FUNC18_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x33C)
/* GPIO_SIG18_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG18_IN_SEL    (BIT(9))
#define GPIO_SIG18_IN_SEL_M  (BIT(9))
#define GPIO_SIG18_IN_SEL_V  0x1
#define GPIO_SIG18_IN_SEL_S  9
/* GPIO_FUNC18_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC18_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC18_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC18_IN_INV_SEL_V  0x1
#define GPIO_FUNC18_IN_INV_SEL_S  8
/* GPIO_FUNC18_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC18_IN_SEL    0x000000FF
#define GPIO_FUNC18_IN_SEL_M  ((GPIO_FUNC18_IN_SEL_V)<<(GPIO_FUNC18_IN_SEL_S))
#define GPIO_FUNC18_IN_SEL_V  0xFF
#define GPIO_FUNC18_IN_SEL_S  0

#define GPIO_FUNC19_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x340)
/* GPIO_SIG19_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG19_IN_SEL    (BIT(9))
#define GPIO_SIG19_IN_SEL_M  (BIT(9))
#define GPIO_SIG19_IN_SEL_V  0x1
#define GPIO_SIG19_IN_SEL_S  9
/* GPIO_FUNC19_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC19_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC19_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC19_IN_INV_SEL_V  0x1
#define GPIO_FUNC19_IN_INV_SEL_S  8
/* GPIO_FUNC19_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC19_IN_SEL    0x000000FF
#define GPIO_FUNC19_IN_SEL_M  ((GPIO_FUNC19_IN_SEL_V)<<(GPIO_FUNC19_IN_SEL_S))
#define GPIO_FUNC19_IN_SEL_V  0xFF
#define GPIO_FUNC19_IN_SEL_S  0

#define GPIO_FUNC20_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x344)
/* GPIO_SIG20_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG20_IN_SEL    (BIT(9))
#define GPIO_SIG20_IN_SEL_M  (BIT(9))
#define GPIO_SIG20_IN_SEL_V  0x1
#define GPIO_SIG20_IN_SEL_S  9
/* GPIO_FUNC20_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC20_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC20_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC20_IN_INV_SEL_V  0x1
#define GPIO_FUNC20_IN_INV_SEL_S  8
/* GPIO_FUNC20_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC20_IN_SEL    0x000000FF
#define GPIO_FUNC20_IN_SEL_M  ((GPIO_FUNC20_IN_SEL_V)<<(GPIO_FUNC20_IN_SEL_S))
#define GPIO_FUNC20_IN_SEL_V  0xFF
#define GPIO_FUNC20_IN_SEL_S  0

#define GPIO_FUNC21_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x348)
/* GPIO_SIG21_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG21_IN_SEL    (BIT(9))
#define GPIO_SIG21_IN_SEL_M  (BIT(9))
#define GPIO_SIG21_IN_SEL_V  0x1
#define GPIO_SIG21_IN_SEL_S  9
/* GPIO_FUNC21_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC21_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC21_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC21_IN_INV_SEL_V  0x1
#define GPIO_FUNC21_IN_INV_SEL_S  8
/* GPIO_FUNC21_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC21_IN_SEL    0x000000FF
#define GPIO_FUNC21_IN_SEL_M  ((GPIO_FUNC21_IN_SEL_V)<<(GPIO_FUNC21_IN_SEL_S))
#define GPIO_FUNC21_IN_SEL_V  0xFF
#define GPIO_FUNC21_IN_SEL_S  0

#define GPIO_FUNC22_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x34C)
/* GPIO_SIG22_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG22_IN_SEL    (BIT(9))
#define GPIO_SIG22_IN_SEL_M  (BIT(9))
#define GPIO_SIG22_IN_SEL_V  0x1
#define GPIO_SIG22_IN_SEL_S  9
/* GPIO_FUNC22_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC22_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC22_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC22_IN_INV_SEL_V  0x1
#define GPIO_FUNC22_IN_INV_SEL_S  8
/* GPIO_FUNC22_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC22_IN_SEL    0x000000FF
#define GPIO_FUNC22_IN_SEL_M  ((GPIO_FUNC22_IN_SEL_V)<<(GPIO_FUNC22_IN_SEL_S))
#define GPIO_FUNC22_IN_SEL_V  0xFF
#define GPIO_FUNC22_IN_SEL_S  0

#define GPIO_FUNC23_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x350)
/* GPIO_SIG23_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG23_IN_SEL    (BIT(9))
#define GPIO_SIG23_IN_SEL_M  (BIT(9))
#define GPIO_SIG23_IN_SEL_V  0x1
#define GPIO_SIG23_IN_SEL_S  9
/* GPIO_FUNC23_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC23_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC23_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC23_IN_INV_SEL_V  0x1
#define GPIO_FUNC23_IN_INV_SEL_S  8
/* GPIO_FUNC23_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC23_IN_SEL    0x000000FF
#define GPIO_FUNC23_IN_SEL_M  ((GPIO_FUNC23_IN_SEL_V)<<(GPIO_FUNC23_IN_SEL_S))
#define GPIO_FUNC23_IN_SEL_V  0xFF
#define GPIO_FUNC23_IN_SEL_S  0

#define GPIO_FUNC24_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x354)
/* GPIO_SIG24_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG24_IN_SEL    (BIT(9))
#define GPIO_SIG24_IN_SEL_M  (BIT(9))
#define GPIO_SIG24_IN_SEL_V  0x1
#define GPIO_SIG24_IN_SEL_S  9
/* GPIO_FUNC24_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC24_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC24_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC24_IN_INV_SEL_V  0x1
#define GPIO_FUNC24_IN_INV_SEL_S  8
/* GPIO_FUNC24_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC24_IN_SEL    0x000000FF
#define GPIO_FUNC24_IN_SEL_M  ((GPIO_FUNC24_IN_SEL_V)<<(GPIO_FUNC24_IN_SEL_S))
#define GPIO_FUNC24_IN_SEL_V  0xFF
#define GPIO_FUNC24_IN_SEL_S  0

#define GPIO_FUNC25_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x358)
/* GPIO_SIG25_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG25_IN_SEL    (BIT(9))
#define GPIO_SIG25_IN_SEL_M  (BIT(9))
#define GPIO_SIG25_IN_SEL_V  0x1
#define GPIO_SIG25_IN_SEL_S  9
/* GPIO_FUNC25_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC25_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC25_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC25_IN_INV_SEL_V  0x1
#define GPIO_FUNC25_IN_INV_SEL_S  8
/* GPIO_FUNC25_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC25_IN_SEL    0x000000FF
#define GPIO_FUNC25_IN_SEL_M  ((GPIO_FUNC25_IN_SEL_V)<<(GPIO_FUNC25_IN_SEL_S))
#define GPIO_FUNC25_IN_SEL_V  0xFF
#define GPIO_FUNC25_IN_SEL_S  0

#define GPIO_FUNC26_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x35C)
/* GPIO_SIG26_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG26_IN_SEL    (BIT(9))
#define GPIO_SIG26_IN_SEL_M  (BIT(9))
#define GPIO_SIG26_IN_SEL_V  0x1
#define GPIO_SIG26_IN_SEL_S  9
/* GPIO_FUNC26_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC26_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC26_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC26_IN_INV_SEL_V  0x1
#define GPIO_FUNC26_IN_INV_SEL_S  8
/* GPIO_FUNC26_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC26_IN_SEL    0x000000FF
#define GPIO_FUNC26_IN_SEL_M  ((GPIO_FUNC26_IN_SEL_V)<<(GPIO_FUNC26_IN_SEL_S))
#define GPIO_FUNC26_IN_SEL_V  0xFF
#define GPIO_FUNC26_IN_SEL_S  0

#define GPIO_FUNC27_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x360)
/* GPIO_SIG27_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG27_IN_SEL    (BIT(9))
#define GPIO_SIG27_IN_SEL_M  (BIT(9))
#define GPIO_SIG27_IN_SEL_V  0x1
#define GPIO_SIG27_IN_SEL_S  9
/* GPIO_FUNC27_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC27_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC27_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC27_IN_INV_SEL_V  0x1
#define GPIO_FUNC27_IN_INV_SEL_S  8
/* GPIO_FUNC27_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC27_IN_SEL    0x000000FF
#define GPIO_FUNC27_IN_SEL_M  ((GPIO_FUNC27_IN_SEL_V)<<(GPIO_FUNC27_IN_SEL_S))
#define GPIO_FUNC27_IN_SEL_V  0xFF
#define GPIO_FUNC27_IN_SEL_S  0

#define GPIO_FUNC28_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x364)
/* GPIO_SIG28_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG28_IN_SEL    (BIT(9))
#define GPIO_SIG28_IN_SEL_M  (BIT(9))
#define GPIO_SIG28_IN_SEL_V  0x1
#define GPIO_SIG28_IN_SEL_S  9
/* GPIO_FUNC28_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC28_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC28_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC28_IN_INV_SEL_V  0x1
#define GPIO_FUNC28_IN_INV_SEL_S  8
/* GPIO_FUNC28_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC28_IN_SEL    0x000000FF
#define GPIO_FUNC28_IN_SEL_M  ((GPIO_FUNC28_IN_SEL_V)<<(GPIO_FUNC28_IN_SEL_S))
#define GPIO_FUNC28_IN_SEL_V  0xFF
#define GPIO_FUNC28_IN_SEL_S  0

#define GPIO_FUNC29_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x368)
/* GPIO_SIG29_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG29_IN_SEL    (BIT(9))
#define GPIO_SIG29_IN_SEL_M  (BIT(9))
#define GPIO_SIG29_IN_SEL_V  0x1
#define GPIO_SIG29_IN_SEL_S  9
/* GPIO_FUNC29_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC29_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC29_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC29_IN_INV_SEL_V  0x1
#define GPIO_FUNC29_IN_INV_SEL_S  8
/* GPIO_FUNC29_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC29_IN_SEL    0x000000FF
#define GPIO_FUNC29_IN_SEL_M  ((GPIO_FUNC29_IN_SEL_V)<<(GPIO_FUNC29_IN_SEL_S))
#define GPIO_FUNC29_IN_SEL_V  0xFF
#define GPIO_FUNC29_IN_SEL_S  0

#define GPIO_FUNC30_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x36C)
/* GPIO_SIG30_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG30_IN_SEL    (BIT(9))
#define GPIO_SIG30_IN_SEL_M  (BIT(9))
#define GPIO_SIG30_IN_SEL_V  0x1
#define GPIO_SIG30_IN_SEL_S  9
/* GPIO_FUNC30_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC30_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC30_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC30_IN_INV_SEL_V  0x1
#define GPIO_FUNC30_IN_INV_SEL_S  8
/* GPIO_FUNC30_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC30_IN_SEL    0x000000FF
#define GPIO_FUNC30_IN_SEL_M  ((GPIO_FUNC30_IN_SEL_V)<<(GPIO_FUNC30_IN_SEL_S))
#define GPIO_FUNC30_IN_SEL_V  0xFF
#define GPIO_FUNC30_IN_SEL_S  0

#define GPIO_FUNC31_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x370)
/* GPIO_SIG31_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG31_IN_SEL    (BIT(9))
#define GPIO_SIG31_IN_SEL_M  (BIT(9))
#define GPIO_SIG31_IN_SEL_V  0x1
#define GPIO_SIG31_IN_SEL_S  9
/* GPIO_FUNC31_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC31_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC31_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC31_IN_INV_SEL_V  0x1
#define GPIO_FUNC31_IN_INV_SEL_S  8
/* GPIO_FUNC31_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC31_IN_SEL    0x000000FF
#define GPIO_FUNC31_IN_SEL_M  ((GPIO_FUNC31_IN_SEL_V)<<(GPIO_FUNC31_IN_SEL_S))
#define GPIO_FUNC31_IN_SEL_V  0xFF
#define GPIO_FUNC31_IN_SEL_S  0

#define GPIO_FUNC32_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x374)
/* GPIO_SIG32_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG32_IN_SEL    (BIT(9))
#define GPIO_SIG32_IN_SEL_M  (BIT(9))
#define GPIO_SIG32_IN_SEL_V  0x1
#define GPIO_SIG32_IN_SEL_S  9
/* GPIO_FUNC32_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC32_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC32_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC32_IN_INV_SEL_V  0x1
#define GPIO_FUNC32_IN_INV_SEL_S  8
/* GPIO_FUNC32_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC32_IN_SEL    0x000000FF
#define GPIO_FUNC32_IN_SEL_M  ((GPIO_FUNC32_IN_SEL_V)<<(GPIO_FUNC32_IN_SEL_S))
#define GPIO_FUNC32_IN_SEL_V  0xFF
#define GPIO_FUNC32_IN_SEL_S  0

#define GPIO_FUNC33_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x378)
/* GPIO_SIG33_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG33_IN_SEL    (BIT(9))
#define GPIO_SIG33_IN_SEL_M  (BIT(9))
#define GPIO_SIG33_IN_SEL_V  0x1
#define GPIO_SIG33_IN_SEL_S  9
/* GPIO_FUNC33_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC33_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC33_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC33_IN_INV_SEL_V  0x1
#define GPIO_FUNC33_IN_INV_SEL_S  8
/* GPIO_FUNC33_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC33_IN_SEL    0x000000FF
#define GPIO_FUNC33_IN_SEL_M  ((GPIO_FUNC33_IN_SEL_V)<<(GPIO_FUNC33_IN_SEL_S))
#define GPIO_FUNC33_IN_SEL_V  0xFF
#define GPIO_FUNC33_IN_SEL_S  0

#define GPIO_FUNC34_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x37C)
/* GPIO_SIG34_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG34_IN_SEL    (BIT(9))
#define GPIO_SIG34_IN_SEL_M  (BIT(9))
#define GPIO_SIG34_IN_SEL_V  0x1
#define GPIO_SIG34_IN_SEL_S  9
/* GPIO_FUNC34_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC34_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC34_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC34_IN_INV_SEL_V  0x1
#define GPIO_FUNC34_IN_INV_SEL_S  8
/* GPIO_FUNC34_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC34_IN_SEL    0x000000FF
#define GPIO_FUNC34_IN_SEL_M  ((GPIO_FUNC34_IN_SEL_V)<<(GPIO_FUNC34_IN_SEL_S))
#define GPIO_FUNC34_IN_SEL_V  0xFF
#define GPIO_FUNC34_IN_SEL_S  0

#define GPIO_FUNC35_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x380)
/* GPIO_SIG35_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG35_IN_SEL    (BIT(9))
#define GPIO_SIG35_IN_SEL_M  (BIT(9))
#define GPIO_SIG35_IN_SEL_V  0x1
#define GPIO_SIG35_IN_SEL_S  9
/* GPIO_FUNC35_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC35_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC35_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC35_IN_INV_SEL_V  0x1
#define GPIO_FUNC35_IN_INV_SEL_S  8
/* GPIO_FUNC35_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC35_IN_SEL    0x000000FF
#define GPIO_FUNC35_IN_SEL_M  ((GPIO_FUNC35_IN_SEL_V)<<(GPIO_FUNC35_IN_SEL_S))
#define GPIO_FUNC35_IN_SEL_V  0xFF
#define GPIO_FUNC35_IN_SEL_S  0

#define GPIO_FUNC36_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x384)
/* GPIO_SIG36_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG36_IN_SEL    (BIT(9))
#define GPIO_SIG36_IN_SEL_M  (BIT(9))
#define GPIO_SIG36_IN_SEL_V  0x1
#define GPIO_SIG36_IN_SEL_S  9
/* GPIO_FUNC36_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC36_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC36_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC36_IN_INV_SEL_V  0x1
#define GPIO_FUNC36_IN_INV_SEL_S  8
/* GPIO_FUNC36_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC36_IN_SEL    0x000000FF
#define GPIO_FUNC36_IN_SEL_M  ((GPIO_FUNC36_IN_SEL_V)<<(GPIO_FUNC36_IN_SEL_S))
#define GPIO_FUNC36_IN_SEL_V  0xFF
#define GPIO_FUNC36_IN_SEL_S  0

#define GPIO_FUNC37_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x388)
/* GPIO_SIG37_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG37_IN_SEL    (BIT(9))
#define GPIO_SIG37_IN_SEL_M  (BIT(9))
#define GPIO_SIG37_IN_SEL_V  0x1
#define GPIO_SIG37_IN_SEL_S  9
/* GPIO_FUNC37_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC37_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC37_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC37_IN_INV_SEL_V  0x1
#define GPIO_FUNC37_IN_INV_SEL_S  8
/* GPIO_FUNC37_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC37_IN_SEL    0x000000FF
#define GPIO_FUNC37_IN_SEL_M  ((GPIO_FUNC37_IN_SEL_V)<<(GPIO_FUNC37_IN_SEL_S))
#define GPIO_FUNC37_IN_SEL_V  0xFF
#define GPIO_FUNC37_IN_SEL_S  0

#define GPIO_FUNC38_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x38C)
/* GPIO_SIG38_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG38_IN_SEL    (BIT(9))
#define GPIO_SIG38_IN_SEL_M  (BIT(9))
#define GPIO_SIG38_IN_SEL_V  0x1
#define GPIO_SIG38_IN_SEL_S  9
/* GPIO_FUNC38_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC38_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC38_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC38_IN_INV_SEL_V  0x1
#define GPIO_FUNC38_IN_INV_SEL_S  8
/* GPIO_FUNC38_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC38_IN_SEL    0x000000FF
#define GPIO_FUNC38_IN_SEL_M  ((GPIO_FUNC38_IN_SEL_V)<<(GPIO_FUNC38_IN_SEL_S))
#define GPIO_FUNC38_IN_SEL_V  0xFF
#define GPIO_FUNC38_IN_SEL_S  0

#define GPIO_FUNC39_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x390)
/* GPIO_SIG39_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG39_IN_SEL    (BIT(9))
#define GPIO_SIG39_IN_SEL_M  (BIT(9))
#define GPIO_SIG39_IN_SEL_V  0x1
#define GPIO_SIG39_IN_SEL_S  9
/* GPIO_FUNC39_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC39_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC39_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC39_IN_INV_SEL_V  0x1
#define GPIO_FUNC39_IN_INV_SEL_S  8
/* GPIO_FUNC39_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC39_IN_SEL    0x000000FF
#define GPIO_FUNC39_IN_SEL_M  ((GPIO_FUNC39_IN_SEL_V)<<(GPIO_FUNC39_IN_SEL_S))
#define GPIO_FUNC39_IN_SEL_V  0xFF
#define GPIO_FUNC39_IN_SEL_S  0

#define GPIO_FUNC40_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x394)
/* GPIO_SIG40_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG40_IN_SEL    (BIT(9))
#define GPIO_SIG40_IN_SEL_M  (BIT(9))
#define GPIO_SIG40_IN_SEL_V  0x1
#define GPIO_SIG40_IN_SEL_S  9
/* GPIO_FUNC40_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC40_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC40_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC40_IN_INV_SEL_V  0x1
#define GPIO_FUNC40_IN_INV_SEL_S  8
/* GPIO_FUNC40_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC40_IN_SEL    0x000000FF
#define GPIO_FUNC40_IN_SEL_M  ((GPIO_FUNC40_IN_SEL_V)<<(GPIO_FUNC40_IN_SEL_S))
#define GPIO_FUNC40_IN_SEL_V  0xFF
#define GPIO_FUNC40_IN_SEL_S  0

#define GPIO_FUNC41_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x398)
/* GPIO_SIG41_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG41_IN_SEL    (BIT(9))
#define GPIO_SIG41_IN_SEL_M  (BIT(9))
#define GPIO_SIG41_IN_SEL_V  0x1
#define GPIO_SIG41_IN_SEL_S  9
/* GPIO_FUNC41_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC41_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC41_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC41_IN_INV_SEL_V  0x1
#define GPIO_FUNC41_IN_INV_SEL_S  8
/* GPIO_FUNC41_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC41_IN_SEL    0x000000FF
#define GPIO_FUNC41_IN_SEL_M  ((GPIO_FUNC41_IN_SEL_V)<<(GPIO_FUNC41_IN_SEL_S))
#define GPIO_FUNC41_IN_SEL_V  0xFF
#define GPIO_FUNC41_IN_SEL_S  0

#define GPIO_FUNC42_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x39C)
/* GPIO_SIG42_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG42_IN_SEL    (BIT(9))
#define GPIO_SIG42_IN_SEL_M  (BIT(9))
#define GPIO_SIG42_IN_SEL_V  0x1
#define GPIO_SIG42_IN_SEL_S  9
/* GPIO_FUNC42_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC42_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC42_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC42_IN_INV_SEL_V  0x1
#define GPIO_FUNC42_IN_INV_SEL_S  8
/* GPIO_FUNC42_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC42_IN_SEL    0x000000FF
#define GPIO_FUNC42_IN_SEL_M  ((GPIO_FUNC42_IN_SEL_V)<<(GPIO_FUNC42_IN_SEL_S))
#define GPIO_FUNC42_IN_SEL_V  0xFF
#define GPIO_FUNC42_IN_SEL_S  0

#define GPIO_FUNC43_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3A0)
/* GPIO_SIG43_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG43_IN_SEL    (BIT(9))
#define GPIO_SIG43_IN_SEL_M  (BIT(9))
#define GPIO_SIG43_IN_SEL_V  0x1
#define GPIO_SIG43_IN_SEL_S  9
/* GPIO_FUNC43_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC43_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC43_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC43_IN_INV_SEL_V  0x1
#define GPIO_FUNC43_IN_INV_SEL_S  8
/* GPIO_FUNC43_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC43_IN_SEL    0x000000FF
#define GPIO_FUNC43_IN_SEL_M  ((GPIO_FUNC43_IN_SEL_V)<<(GPIO_FUNC43_IN_SEL_S))
#define GPIO_FUNC43_IN_SEL_V  0xFF
#define GPIO_FUNC43_IN_SEL_S  0

#define GPIO_FUNC44_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3A4)
/* GPIO_SIG44_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG44_IN_SEL    (BIT(9))
#define GPIO_SIG44_IN_SEL_M  (BIT(9))
#define GPIO_SIG44_IN_SEL_V  0x1
#define GPIO_SIG44_IN_SEL_S  9
/* GPIO_FUNC44_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC44_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC44_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC44_IN_INV_SEL_V  0x1
#define GPIO_FUNC44_IN_INV_SEL_S  8
/* GPIO_FUNC44_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC44_IN_SEL    0x000000FF
#define GPIO_FUNC44_IN_SEL_M  ((GPIO_FUNC44_IN_SEL_V)<<(GPIO_FUNC44_IN_SEL_S))
#define GPIO_FUNC44_IN_SEL_V  0xFF
#define GPIO_FUNC44_IN_SEL_S  0

#define GPIO_FUNC45_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3A8)
/* GPIO_SIG45_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG45_IN_SEL    (BIT(9))
#define GPIO_SIG45_IN_SEL_M  (BIT(9))
#define GPIO_SIG45_IN_SEL_V  0x1
#define GPIO_SIG45_IN_SEL_S  9
/* GPIO_FUNC45_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC45_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC45_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC45_IN_INV_SEL_V  0x1
#define GPIO_FUNC45_IN_INV_SEL_S  8
/* GPIO_FUNC45_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $b
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC45_IN_SEL    0x000000FF
#define GPIO_FUNC45_IN_SEL_M  ((GPIO_FUNC45_IN_SEL_V)<<(GPIO_FUNC45_IN_SEL_S))
#define GPIO_FUNC45_IN_SEL_V  0xFF
#define GPIO_FUNC45_IN_SEL_S  0

#define GPIO_FUNC47_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3B0)
/* GPIO_SIG47_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG47_IN_SEL    (BIT(9))
#define GPIO_SIG47_IN_SEL_M  (BIT(9))
#define GPIO_SIG47_IN_SEL_V  0x1
#define GPIO_SIG47_IN_SEL_S  9
/* GPIO_FUNC47_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC47_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC47_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC47_IN_INV_SEL_V  0x1
#define GPIO_FUNC47_IN_INV_SEL_S  8
/* GPIO_FUNC47_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC47_IN_SEL    0x000000FF
#define GPIO_FUNC47_IN_SEL_M  ((GPIO_FUNC47_IN_SEL_V)<<(GPIO_FUNC47_IN_SEL_S))
#define GPIO_FUNC47_IN_SEL_V  0xFF
#define GPIO_FUNC47_IN_SEL_S  0

#define GPIO_FUNC48_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3B4)
/* GPIO_SIG48_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG48_IN_SEL    (BIT(9))
#define GPIO_SIG48_IN_SEL_M  (BIT(9))
#define GPIO_SIG48_IN_SEL_V  0x1
#define GPIO_SIG48_IN_SEL_S  9
/* GPIO_FUNC48_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC48_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC48_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC48_IN_INV_SEL_V  0x1
#define GPIO_FUNC48_IN_INV_SEL_S  8
/* GPIO_FUNC48_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC48_IN_SEL    0x000000FF
#define GPIO_FUNC48_IN_SEL_M  ((GPIO_FUNC48_IN_SEL_V)<<(GPIO_FUNC48_IN_SEL_S))
#define GPIO_FUNC48_IN_SEL_V  0xFF
#define GPIO_FUNC48_IN_SEL_S  0

#define GPIO_FUNC49_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3B8)
/* GPIO_SIG49_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG49_IN_SEL    (BIT(9))
#define GPIO_SIG49_IN_SEL_M  (BIT(9))
#define GPIO_SIG49_IN_SEL_V  0x1
#define GPIO_SIG49_IN_SEL_S  9
/* GPIO_FUNC49_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC49_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC49_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC49_IN_INV_SEL_V  0x1
#define GPIO_FUNC49_IN_INV_SEL_S  8
/* GPIO_FUNC49_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC49_IN_SEL    0x000000FF
#define GPIO_FUNC49_IN_SEL_M  ((GPIO_FUNC49_IN_SEL_V)<<(GPIO_FUNC49_IN_SEL_S))
#define GPIO_FUNC49_IN_SEL_V  0xFF
#define GPIO_FUNC49_IN_SEL_S  0

#define GPIO_FUNC50_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3BC)
/* GPIO_SIG50_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG50_IN_SEL    (BIT(9))
#define GPIO_SIG50_IN_SEL_M  (BIT(9))
#define GPIO_SIG50_IN_SEL_V  0x1
#define GPIO_SIG50_IN_SEL_S  9
/* GPIO_FUNC50_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC50_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC50_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC50_IN_INV_SEL_V  0x1
#define GPIO_FUNC50_IN_INV_SEL_S  8
/* GPIO_FUNC50_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC50_IN_SEL    0x000000FF
#define GPIO_FUNC50_IN_SEL_M  ((GPIO_FUNC50_IN_SEL_V)<<(GPIO_FUNC50_IN_SEL_S))
#define GPIO_FUNC50_IN_SEL_V  0xFF
#define GPIO_FUNC50_IN_SEL_S  0

#define GPIO_FUNC51_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3C0)
/* GPIO_SIG51_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG51_IN_SEL    (BIT(9))
#define GPIO_SIG51_IN_SEL_M  (BIT(9))
#define GPIO_SIG51_IN_SEL_V  0x1
#define GPIO_SIG51_IN_SEL_S  9
/* GPIO_FUNC51_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC51_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC51_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC51_IN_INV_SEL_V  0x1
#define GPIO_FUNC51_IN_INV_SEL_S  8
/* GPIO_FUNC51_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC51_IN_SEL    0x000000FF
#define GPIO_FUNC51_IN_SEL_M  ((GPIO_FUNC51_IN_SEL_V)<<(GPIO_FUNC51_IN_SEL_S))
#define GPIO_FUNC51_IN_SEL_V  0xFF
#define GPIO_FUNC51_IN_SEL_S  0

#define GPIO_FUNC52_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3C4)
/* GPIO_SIG52_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG52_IN_SEL    (BIT(9))
#define GPIO_SIG52_IN_SEL_M  (BIT(9))
#define GPIO_SIG52_IN_SEL_V  0x1
#define GPIO_SIG52_IN_SEL_S  9
/* GPIO_FUNC52_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC52_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC52_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC52_IN_INV_SEL_V  0x1
#define GPIO_FUNC52_IN_INV_SEL_S  8
/* GPIO_FUNC52_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC52_IN_SEL    0x000000FF
#define GPIO_FUNC52_IN_SEL_M  ((GPIO_FUNC52_IN_SEL_V)<<(GPIO_FUNC52_IN_SEL_S))
#define GPIO_FUNC52_IN_SEL_V  0xFF
#define GPIO_FUNC52_IN_SEL_S  0

#define GPIO_FUNC53_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3C8)
/* GPIO_SIG53_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG53_IN_SEL    (BIT(9))
#define GPIO_SIG53_IN_SEL_M  (BIT(9))
#define GPIO_SIG53_IN_SEL_V  0x1
#define GPIO_SIG53_IN_SEL_S  9
/* GPIO_FUNC53_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC53_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC53_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC53_IN_INV_SEL_V  0x1
#define GPIO_FUNC53_IN_INV_SEL_S  8
/* GPIO_FUNC53_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC53_IN_SEL    0x000000FF
#define GPIO_FUNC53_IN_SEL_M  ((GPIO_FUNC53_IN_SEL_V)<<(GPIO_FUNC53_IN_SEL_S))
#define GPIO_FUNC53_IN_SEL_V  0xFF
#define GPIO_FUNC53_IN_SEL_S  0

#define GPIO_FUNC54_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3CC)
/* GPIO_SIG54_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG54_IN_SEL    (BIT(9))
#define GPIO_SIG54_IN_SEL_M  (BIT(9))
#define GPIO_SIG54_IN_SEL_V  0x1
#define GPIO_SIG54_IN_SEL_S  9
/* GPIO_FUNC54_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC54_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC54_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC54_IN_INV_SEL_V  0x1
#define GPIO_FUNC54_IN_INV_SEL_S  8
/* GPIO_FUNC54_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC54_IN_SEL    0x000000FF
#define GPIO_FUNC54_IN_SEL_M  ((GPIO_FUNC54_IN_SEL_V)<<(GPIO_FUNC54_IN_SEL_S))
#define GPIO_FUNC54_IN_SEL_V  0xFF
#define GPIO_FUNC54_IN_SEL_S  0

#define GPIO_FUNC55_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3D0)
/* GPIO_SIG55_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG55_IN_SEL    (BIT(9))
#define GPIO_SIG55_IN_SEL_M  (BIT(9))
#define GPIO_SIG55_IN_SEL_V  0x1
#define GPIO_SIG55_IN_SEL_S  9
/* GPIO_FUNC55_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC55_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC55_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC55_IN_INV_SEL_V  0x1
#define GPIO_FUNC55_IN_INV_SEL_S  8
/* GPIO_FUNC55_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC55_IN_SEL    0x000000FF
#define GPIO_FUNC55_IN_SEL_M  ((GPIO_FUNC55_IN_SEL_V)<<(GPIO_FUNC55_IN_SEL_S))
#define GPIO_FUNC55_IN_SEL_V  0xFF
#define GPIO_FUNC55_IN_SEL_S  0

#define GPIO_FUNC56_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3D4)
/* GPIO_SIG56_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG56_IN_SEL    (BIT(9))
#define GPIO_SIG56_IN_SEL_M  (BIT(9))
#define GPIO_SIG56_IN_SEL_V  0x1
#define GPIO_SIG56_IN_SEL_S  9
/* GPIO_FUNC56_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC56_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC56_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC56_IN_INV_SEL_V  0x1
#define GPIO_FUNC56_IN_INV_SEL_S  8
/* GPIO_FUNC56_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC56_IN_SEL    0x000000FF
#define GPIO_FUNC56_IN_SEL_M  ((GPIO_FUNC56_IN_SEL_V)<<(GPIO_FUNC56_IN_SEL_S))
#define GPIO_FUNC56_IN_SEL_V  0xFF
#define GPIO_FUNC56_IN_SEL_S  0

#define GPIO_FUNC57_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3D8)
/* GPIO_SIG57_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG57_IN_SEL    (BIT(9))
#define GPIO_SIG57_IN_SEL_M  (BIT(9))
#define GPIO_SIG57_IN_SEL_V  0x1
#define GPIO_SIG57_IN_SEL_S  9
/* GPIO_FUNC57_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC57_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC57_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC57_IN_INV_SEL_V  0x1
#define GPIO_FUNC57_IN_INV_SEL_S  8
/* GPIO_FUNC57_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC57_IN_SEL    0x000000FF
#define GPIO_FUNC57_IN_SEL_M  ((GPIO_FUNC57_IN_SEL_V)<<(GPIO_FUNC57_IN_SEL_S))
#define GPIO_FUNC57_IN_SEL_V  0xFF
#define GPIO_FUNC57_IN_SEL_S  0

#define GPIO_FUNC58_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3DC)
/* GPIO_SIG58_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG58_IN_SEL    (BIT(9))
#define GPIO_SIG58_IN_SEL_M  (BIT(9))
#define GPIO_SIG58_IN_SEL_V  0x1
#define GPIO_SIG58_IN_SEL_S  9
/* GPIO_FUNC58_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC58_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC58_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC58_IN_INV_SEL_V  0x1
#define GPIO_FUNC58_IN_INV_SEL_S  8
/* GPIO_FUNC58_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC58_IN_SEL    0x000000FF
#define GPIO_FUNC58_IN_SEL_M  ((GPIO_FUNC58_IN_SEL_V)<<(GPIO_FUNC58_IN_SEL_S))
#define GPIO_FUNC58_IN_SEL_V  0xFF
#define GPIO_FUNC58_IN_SEL_S  0

#define GPIO_FUNC59_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3E0)
/* GPIO_SIG59_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG59_IN_SEL    (BIT(9))
#define GPIO_SIG59_IN_SEL_M  (BIT(9))
#define GPIO_SIG59_IN_SEL_V  0x1
#define GPIO_SIG59_IN_SEL_S  9
/* GPIO_FUNC59_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC59_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC59_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC59_IN_INV_SEL_V  0x1
#define GPIO_FUNC59_IN_INV_SEL_S  8
/* GPIO_FUNC59_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC59_IN_SEL    0x000000FF
#define GPIO_FUNC59_IN_SEL_M  ((GPIO_FUNC59_IN_SEL_V)<<(GPIO_FUNC59_IN_SEL_S))
#define GPIO_FUNC59_IN_SEL_V  0xFF
#define GPIO_FUNC59_IN_SEL_S  0

#define GPIO_FUNC60_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3E4)
/* GPIO_SIG60_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG60_IN_SEL    (BIT(9))
#define GPIO_SIG60_IN_SEL_M  (BIT(9))
#define GPIO_SIG60_IN_SEL_V  0x1
#define GPIO_SIG60_IN_SEL_S  9
/* GPIO_FUNC60_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC60_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC60_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC60_IN_INV_SEL_V  0x1
#define GPIO_FUNC60_IN_INV_SEL_S  8
/* GPIO_FUNC60_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC60_IN_SEL    0x000000FF
#define GPIO_FUNC60_IN_SEL_M  ((GPIO_FUNC60_IN_SEL_V)<<(GPIO_FUNC60_IN_SEL_S))
#define GPIO_FUNC60_IN_SEL_V  0xFF
#define GPIO_FUNC60_IN_SEL_S  0

#define GPIO_FUNC61_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3E8)
/* GPIO_SIG61_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG61_IN_SEL    (BIT(9))
#define GPIO_SIG61_IN_SEL_M  (BIT(9))
#define GPIO_SIG61_IN_SEL_V  0x1
#define GPIO_SIG61_IN_SEL_S  9
/* GPIO_FUNC61_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC61_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC61_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC61_IN_INV_SEL_V  0x1
#define GPIO_FUNC61_IN_INV_SEL_S  8
/* GPIO_FUNC61_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC61_IN_SEL    0x000000FF
#define GPIO_FUNC61_IN_SEL_M  ((GPIO_FUNC61_IN_SEL_V)<<(GPIO_FUNC61_IN_SEL_S))
#define GPIO_FUNC61_IN_SEL_V  0xFF
#define GPIO_FUNC61_IN_SEL_S  0

#define GPIO_FUNC62_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3EC)
/* GPIO_SIG62_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG62_IN_SEL    (BIT(9))
#define GPIO_SIG62_IN_SEL_M  (BIT(9))
#define GPIO_SIG62_IN_SEL_V  0x1
#define GPIO_SIG62_IN_SEL_S  9
/* GPIO_FUNC62_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC62_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC62_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC62_IN_INV_SEL_V  0x1
#define GPIO_FUNC62_IN_INV_SEL_S  8
/* GPIO_FUNC62_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC62_IN_SEL    0x000000FF
#define GPIO_FUNC62_IN_SEL_M  ((GPIO_FUNC62_IN_SEL_V)<<(GPIO_FUNC62_IN_SEL_S))
#define GPIO_FUNC62_IN_SEL_V  0xFF
#define GPIO_FUNC62_IN_SEL_S  0

#define GPIO_FUNC63_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3F0)
/* GPIO_SIG63_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG63_IN_SEL    (BIT(9))
#define GPIO_SIG63_IN_SEL_M  (BIT(9))
#define GPIO_SIG63_IN_SEL_V  0x1
#define GPIO_SIG63_IN_SEL_S  9
/* GPIO_FUNC63_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC63_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC63_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC63_IN_INV_SEL_V  0x1
#define GPIO_FUNC63_IN_INV_SEL_S  8
/* GPIO_FUNC63_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC63_IN_SEL    0x000000FF
#define GPIO_FUNC63_IN_SEL_M  ((GPIO_FUNC63_IN_SEL_V)<<(GPIO_FUNC63_IN_SEL_S))
#define GPIO_FUNC63_IN_SEL_V  0xFF
#define GPIO_FUNC63_IN_SEL_S  0

#define GPIO_FUNC64_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3F4)
/* GPIO_SIG64_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG64_IN_SEL    (BIT(9))
#define GPIO_SIG64_IN_SEL_M  (BIT(9))
#define GPIO_SIG64_IN_SEL_V  0x1
#define GPIO_SIG64_IN_SEL_S  9
/* GPIO_FUNC64_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC64_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC64_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC64_IN_INV_SEL_V  0x1
#define GPIO_FUNC64_IN_INV_SEL_S  8
/* GPIO_FUNC64_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC64_IN_SEL    0x000000FF
#define GPIO_FUNC64_IN_SEL_M  ((GPIO_FUNC64_IN_SEL_V)<<(GPIO_FUNC64_IN_SEL_S))
#define GPIO_FUNC64_IN_SEL_V  0xFF
#define GPIO_FUNC64_IN_SEL_S  0

#define GPIO_FUNC65_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3F8)
/* GPIO_SIG65_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG65_IN_SEL    (BIT(9))
#define GPIO_SIG65_IN_SEL_M  (BIT(9))
#define GPIO_SIG65_IN_SEL_V  0x1
#define GPIO_SIG65_IN_SEL_S  9
/* GPIO_FUNC65_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC65_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC65_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC65_IN_INV_SEL_V  0x1
#define GPIO_FUNC65_IN_INV_SEL_S  8
/* GPIO_FUNC65_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC65_IN_SEL    0x000000FF
#define GPIO_FUNC65_IN_SEL_M  ((GPIO_FUNC65_IN_SEL_V)<<(GPIO_FUNC65_IN_SEL_S))
#define GPIO_FUNC65_IN_SEL_V  0xFF
#define GPIO_FUNC65_IN_SEL_S  0

#define GPIO_FUNC66_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x3FC)
/* GPIO_SIG66_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG66_IN_SEL    (BIT(9))
#define GPIO_SIG66_IN_SEL_M  (BIT(9))
#define GPIO_SIG66_IN_SEL_V  0x1
#define GPIO_SIG66_IN_SEL_S  9
/* GPIO_FUNC66_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC66_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC66_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC66_IN_INV_SEL_V  0x1
#define GPIO_FUNC66_IN_INV_SEL_S  8
/* GPIO_FUNC66_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $c
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC66_IN_SEL    0x000000FF
#define GPIO_FUNC66_IN_SEL_M  ((GPIO_FUNC66_IN_SEL_V)<<(GPIO_FUNC66_IN_SEL_S))
#define GPIO_FUNC66_IN_SEL_V  0xFF
#define GPIO_FUNC66_IN_SEL_S  0

#define GPIO_FUNC68_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x404)
/* GPIO_SIG68_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG68_IN_SEL    (BIT(9))
#define GPIO_SIG68_IN_SEL_M  (BIT(9))
#define GPIO_SIG68_IN_SEL_V  0x1
#define GPIO_SIG68_IN_SEL_S  9
/* GPIO_FUNC68_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC68_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC68_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC68_IN_INV_SEL_V  0x1
#define GPIO_FUNC68_IN_INV_SEL_S  8
/* GPIO_FUNC68_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $d
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC68_IN_SEL    0x000000FF
#define GPIO_FUNC68_IN_SEL_M  ((GPIO_FUNC68_IN_SEL_V)<<(GPIO_FUNC68_IN_SEL_S))
#define GPIO_FUNC68_IN_SEL_V  0xFF
#define GPIO_FUNC68_IN_SEL_S  0

#define GPIO_FUNC69_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x408)
/* GPIO_SIG69_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG69_IN_SEL    (BIT(9))
#define GPIO_SIG69_IN_SEL_M  (BIT(9))
#define GPIO_SIG69_IN_SEL_V  0x1
#define GPIO_SIG69_IN_SEL_S  9
/* GPIO_FUNC69_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC69_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC69_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC69_IN_INV_SEL_V  0x1
#define GPIO_FUNC69_IN_INV_SEL_S  8
/* GPIO_FUNC69_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $d
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC69_IN_SEL    0x000000FF
#define GPIO_FUNC69_IN_SEL_M  ((GPIO_FUNC69_IN_SEL_V)<<(GPIO_FUNC69_IN_SEL_S))
#define GPIO_FUNC69_IN_SEL_V  0xFF
#define GPIO_FUNC69_IN_SEL_S  0

#define GPIO_FUNC70_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x40C)
/* GPIO_SIG70_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG70_IN_SEL    (BIT(9))
#define GPIO_SIG70_IN_SEL_M  (BIT(9))
#define GPIO_SIG70_IN_SEL_V  0x1
#define GPIO_SIG70_IN_SEL_S  9
/* GPIO_FUNC70_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC70_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC70_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC70_IN_INV_SEL_V  0x1
#define GPIO_FUNC70_IN_INV_SEL_S  8
/* GPIO_FUNC70_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $d
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC70_IN_SEL    0x000000FF
#define GPIO_FUNC70_IN_SEL_M  ((GPIO_FUNC70_IN_SEL_V)<<(GPIO_FUNC70_IN_SEL_S))
#define GPIO_FUNC70_IN_SEL_V  0xFF
#define GPIO_FUNC70_IN_SEL_S  0

#define GPIO_FUNC71_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x410)
/* GPIO_SIG71_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG71_IN_SEL    (BIT(9))
#define GPIO_SIG71_IN_SEL_M  (BIT(9))
#define GPIO_SIG71_IN_SEL_V  0x1
#define GPIO_SIG71_IN_SEL_S  9
/* GPIO_FUNC71_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC71_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC71_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC71_IN_INV_SEL_V  0x1
#define GPIO_FUNC71_IN_INV_SEL_S  8
/* GPIO_FUNC71_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $d
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC71_IN_SEL    0x000000FF
#define GPIO_FUNC71_IN_SEL_M  ((GPIO_FUNC71_IN_SEL_V)<<(GPIO_FUNC71_IN_SEL_S))
#define GPIO_FUNC71_IN_SEL_V  0xFF
#define GPIO_FUNC71_IN_SEL_S  0

#define GPIO_FUNC80_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x434)
/* GPIO_SIG80_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG80_IN_SEL    (BIT(9))
#define GPIO_SIG80_IN_SEL_M  (BIT(9))
#define GPIO_SIG80_IN_SEL_V  0x1
#define GPIO_SIG80_IN_SEL_S  9
/* GPIO_FUNC80_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC80_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC80_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC80_IN_INV_SEL_V  0x1
#define GPIO_FUNC80_IN_INV_SEL_S  8
/* GPIO_FUNC80_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $e
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC80_IN_SEL    0x000000FF
#define GPIO_FUNC80_IN_SEL_M  ((GPIO_FUNC80_IN_SEL_V)<<(GPIO_FUNC80_IN_SEL_S))
#define GPIO_FUNC80_IN_SEL_V  0xFF
#define GPIO_FUNC80_IN_SEL_S  0

#define GPIO_FUNC81_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x438)
/* GPIO_SIG81_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG81_IN_SEL    (BIT(9))
#define GPIO_SIG81_IN_SEL_M  (BIT(9))
#define GPIO_SIG81_IN_SEL_V  0x1
#define GPIO_SIG81_IN_SEL_S  9
/* GPIO_FUNC81_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC81_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC81_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC81_IN_INV_SEL_V  0x1
#define GPIO_FUNC81_IN_INV_SEL_S  8
/* GPIO_FUNC81_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $e
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC81_IN_SEL    0x000000FF
#define GPIO_FUNC81_IN_SEL_M  ((GPIO_FUNC81_IN_SEL_V)<<(GPIO_FUNC81_IN_SEL_S))
#define GPIO_FUNC81_IN_SEL_V  0xFF
#define GPIO_FUNC81_IN_SEL_S  0

#define GPIO_FUNC82_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x43C)
/* GPIO_SIG82_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG82_IN_SEL    (BIT(9))
#define GPIO_SIG82_IN_SEL_M  (BIT(9))
#define GPIO_SIG82_IN_SEL_V  0x1
#define GPIO_SIG82_IN_SEL_S  9
/* GPIO_FUNC82_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC82_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC82_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC82_IN_INV_SEL_V  0x1
#define GPIO_FUNC82_IN_INV_SEL_S  8
/* GPIO_FUNC82_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $e
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC82_IN_SEL    0x000000FF
#define GPIO_FUNC82_IN_SEL_M  ((GPIO_FUNC82_IN_SEL_V)<<(GPIO_FUNC82_IN_SEL_S))
#define GPIO_FUNC82_IN_SEL_V  0xFF
#define GPIO_FUNC82_IN_SEL_S  0

#define GPIO_FUNC84_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x444)
/* GPIO_SIG84_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG84_IN_SEL    (BIT(9))
#define GPIO_SIG84_IN_SEL_M  (BIT(9))
#define GPIO_SIG84_IN_SEL_V  0x1
#define GPIO_SIG84_IN_SEL_S  9
/* GPIO_FUNC84_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC84_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC84_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC84_IN_INV_SEL_V  0x1
#define GPIO_FUNC84_IN_INV_SEL_S  8
/* GPIO_FUNC84_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC84_IN_SEL    0x000000FF
#define GPIO_FUNC84_IN_SEL_M  ((GPIO_FUNC84_IN_SEL_V)<<(GPIO_FUNC84_IN_SEL_S))
#define GPIO_FUNC84_IN_SEL_V  0xFF
#define GPIO_FUNC84_IN_SEL_S  0

#define GPIO_FUNC85_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x448)
/* GPIO_SIG85_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG85_IN_SEL    (BIT(9))
#define GPIO_SIG85_IN_SEL_M  (BIT(9))
#define GPIO_SIG85_IN_SEL_V  0x1
#define GPIO_SIG85_IN_SEL_S  9
/* GPIO_FUNC85_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC85_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC85_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC85_IN_INV_SEL_V  0x1
#define GPIO_FUNC85_IN_INV_SEL_S  8
/* GPIO_FUNC85_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC85_IN_SEL    0x000000FF
#define GPIO_FUNC85_IN_SEL_M  ((GPIO_FUNC85_IN_SEL_V)<<(GPIO_FUNC85_IN_SEL_S))
#define GPIO_FUNC85_IN_SEL_V  0xFF
#define GPIO_FUNC85_IN_SEL_S  0

#define GPIO_FUNC86_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x44C)
/* GPIO_SIG86_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG86_IN_SEL    (BIT(9))
#define GPIO_SIG86_IN_SEL_M  (BIT(9))
#define GPIO_SIG86_IN_SEL_V  0x1
#define GPIO_SIG86_IN_SEL_S  9
/* GPIO_FUNC86_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC86_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC86_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC86_IN_INV_SEL_V  0x1
#define GPIO_FUNC86_IN_INV_SEL_S  8
/* GPIO_FUNC86_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC86_IN_SEL    0x000000FF
#define GPIO_FUNC86_IN_SEL_M  ((GPIO_FUNC86_IN_SEL_V)<<(GPIO_FUNC86_IN_SEL_S))
#define GPIO_FUNC86_IN_SEL_V  0xFF
#define GPIO_FUNC86_IN_SEL_S  0

#define GPIO_FUNC87_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x450)
/* GPIO_SIG87_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG87_IN_SEL    (BIT(9))
#define GPIO_SIG87_IN_SEL_M  (BIT(9))
#define GPIO_SIG87_IN_SEL_V  0x1
#define GPIO_SIG87_IN_SEL_S  9
/* GPIO_FUNC87_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC87_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC87_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC87_IN_INV_SEL_V  0x1
#define GPIO_FUNC87_IN_INV_SEL_S  8
/* GPIO_FUNC87_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC87_IN_SEL    0x000000FF
#define GPIO_FUNC87_IN_SEL_M  ((GPIO_FUNC87_IN_SEL_V)<<(GPIO_FUNC87_IN_SEL_S))
#define GPIO_FUNC87_IN_SEL_V  0xFF
#define GPIO_FUNC87_IN_SEL_S  0

#define GPIO_FUNC88_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x454)
/* GPIO_SIG88_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG88_IN_SEL    (BIT(9))
#define GPIO_SIG88_IN_SEL_M  (BIT(9))
#define GPIO_SIG88_IN_SEL_V  0x1
#define GPIO_SIG88_IN_SEL_S  9
/* GPIO_FUNC88_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC88_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC88_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC88_IN_INV_SEL_V  0x1
#define GPIO_FUNC88_IN_INV_SEL_S  8
/* GPIO_FUNC88_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC88_IN_SEL    0x000000FF
#define GPIO_FUNC88_IN_SEL_M  ((GPIO_FUNC88_IN_SEL_V)<<(GPIO_FUNC88_IN_SEL_S))
#define GPIO_FUNC88_IN_SEL_V  0xFF
#define GPIO_FUNC88_IN_SEL_S  0

#define GPIO_FUNC89_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x458)
/* GPIO_SIG89_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG89_IN_SEL    (BIT(9))
#define GPIO_SIG89_IN_SEL_M  (BIT(9))
#define GPIO_SIG89_IN_SEL_V  0x1
#define GPIO_SIG89_IN_SEL_S  9
/* GPIO_FUNC89_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC89_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC89_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC89_IN_INV_SEL_V  0x1
#define GPIO_FUNC89_IN_INV_SEL_S  8
/* GPIO_FUNC89_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC89_IN_SEL    0x000000FF
#define GPIO_FUNC89_IN_SEL_M  ((GPIO_FUNC89_IN_SEL_V)<<(GPIO_FUNC89_IN_SEL_S))
#define GPIO_FUNC89_IN_SEL_V  0xFF
#define GPIO_FUNC89_IN_SEL_S  0

#define GPIO_FUNC90_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x45C)
/* GPIO_SIG90_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG90_IN_SEL    (BIT(9))
#define GPIO_SIG90_IN_SEL_M  (BIT(9))
#define GPIO_SIG90_IN_SEL_V  0x1
#define GPIO_SIG90_IN_SEL_S  9
/* GPIO_FUNC90_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC90_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC90_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC90_IN_INV_SEL_V  0x1
#define GPIO_FUNC90_IN_INV_SEL_S  8
/* GPIO_FUNC90_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC90_IN_SEL    0x000000FF
#define GPIO_FUNC90_IN_SEL_M  ((GPIO_FUNC90_IN_SEL_V)<<(GPIO_FUNC90_IN_SEL_S))
#define GPIO_FUNC90_IN_SEL_V  0xFF
#define GPIO_FUNC90_IN_SEL_S  0

#define GPIO_FUNC91_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x460)
/* GPIO_SIG91_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG91_IN_SEL    (BIT(9))
#define GPIO_SIG91_IN_SEL_M  (BIT(9))
#define GPIO_SIG91_IN_SEL_V  0x1
#define GPIO_SIG91_IN_SEL_S  9
/* GPIO_FUNC91_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC91_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC91_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC91_IN_INV_SEL_V  0x1
#define GPIO_FUNC91_IN_INV_SEL_S  8
/* GPIO_FUNC91_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC91_IN_SEL    0x000000FF
#define GPIO_FUNC91_IN_SEL_M  ((GPIO_FUNC91_IN_SEL_V)<<(GPIO_FUNC91_IN_SEL_S))
#define GPIO_FUNC91_IN_SEL_V  0xFF
#define GPIO_FUNC91_IN_SEL_S  0

#define GPIO_FUNC92_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x464)
/* GPIO_SIG92_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG92_IN_SEL    (BIT(9))
#define GPIO_SIG92_IN_SEL_M  (BIT(9))
#define GPIO_SIG92_IN_SEL_V  0x1
#define GPIO_SIG92_IN_SEL_S  9
/* GPIO_FUNC92_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC92_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC92_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC92_IN_INV_SEL_V  0x1
#define GPIO_FUNC92_IN_INV_SEL_S  8
/* GPIO_FUNC92_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC92_IN_SEL    0x000000FF
#define GPIO_FUNC92_IN_SEL_M  ((GPIO_FUNC92_IN_SEL_V)<<(GPIO_FUNC92_IN_SEL_S))
#define GPIO_FUNC92_IN_SEL_V  0xFF
#define GPIO_FUNC92_IN_SEL_S  0

#define GPIO_FUNC93_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x468)
/* GPIO_SIG93_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG93_IN_SEL    (BIT(9))
#define GPIO_SIG93_IN_SEL_M  (BIT(9))
#define GPIO_SIG93_IN_SEL_V  0x1
#define GPIO_SIG93_IN_SEL_S  9
/* GPIO_FUNC93_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC93_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC93_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC93_IN_INV_SEL_V  0x1
#define GPIO_FUNC93_IN_INV_SEL_S  8
/* GPIO_FUNC93_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC93_IN_SEL    0x000000FF
#define GPIO_FUNC93_IN_SEL_M  ((GPIO_FUNC93_IN_SEL_V)<<(GPIO_FUNC93_IN_SEL_S))
#define GPIO_FUNC93_IN_SEL_V  0xFF
#define GPIO_FUNC93_IN_SEL_S  0

#define GPIO_FUNC94_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x46C)
/* GPIO_SIG94_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG94_IN_SEL    (BIT(9))
#define GPIO_SIG94_IN_SEL_M  (BIT(9))
#define GPIO_SIG94_IN_SEL_V  0x1
#define GPIO_SIG94_IN_SEL_S  9
/* GPIO_FUNC94_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC94_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC94_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC94_IN_INV_SEL_V  0x1
#define GPIO_FUNC94_IN_INV_SEL_S  8
/* GPIO_FUNC94_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC94_IN_SEL    0x000000FF
#define GPIO_FUNC94_IN_SEL_M  ((GPIO_FUNC94_IN_SEL_V)<<(GPIO_FUNC94_IN_SEL_S))
#define GPIO_FUNC94_IN_SEL_V  0xFF
#define GPIO_FUNC94_IN_SEL_S  0

#define GPIO_FUNC95_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x470)
/* GPIO_SIG95_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG95_IN_SEL    (BIT(9))
#define GPIO_SIG95_IN_SEL_M  (BIT(9))
#define GPIO_SIG95_IN_SEL_V  0x1
#define GPIO_SIG95_IN_SEL_S  9
/* GPIO_FUNC95_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC95_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC95_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC95_IN_INV_SEL_V  0x1
#define GPIO_FUNC95_IN_INV_SEL_S  8
/* GPIO_FUNC95_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC95_IN_SEL    0x000000FF
#define GPIO_FUNC95_IN_SEL_M  ((GPIO_FUNC95_IN_SEL_V)<<(GPIO_FUNC95_IN_SEL_S))
#define GPIO_FUNC95_IN_SEL_V  0xFF
#define GPIO_FUNC95_IN_SEL_S  0

#define GPIO_FUNC96_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x474)
/* GPIO_SIG96_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG96_IN_SEL    (BIT(9))
#define GPIO_SIG96_IN_SEL_M  (BIT(9))
#define GPIO_SIG96_IN_SEL_V  0x1
#define GPIO_SIG96_IN_SEL_S  9
/* GPIO_FUNC96_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC96_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC96_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC96_IN_INV_SEL_V  0x1
#define GPIO_FUNC96_IN_INV_SEL_S  8
/* GPIO_FUNC96_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC96_IN_SEL    0x000000FF
#define GPIO_FUNC96_IN_SEL_M  ((GPIO_FUNC96_IN_SEL_V)<<(GPIO_FUNC96_IN_SEL_S))
#define GPIO_FUNC96_IN_SEL_V  0xFF
#define GPIO_FUNC96_IN_SEL_S  0

#define GPIO_FUNC97_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x478)
/* GPIO_SIG97_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG97_IN_SEL    (BIT(9))
#define GPIO_SIG97_IN_SEL_M  (BIT(9))
#define GPIO_SIG97_IN_SEL_V  0x1
#define GPIO_SIG97_IN_SEL_S  9
/* GPIO_FUNC97_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC97_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC97_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC97_IN_INV_SEL_V  0x1
#define GPIO_FUNC97_IN_INV_SEL_S  8
/* GPIO_FUNC97_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC97_IN_SEL    0x000000FF
#define GPIO_FUNC97_IN_SEL_M  ((GPIO_FUNC97_IN_SEL_V)<<(GPIO_FUNC97_IN_SEL_S))
#define GPIO_FUNC97_IN_SEL_V  0xFF
#define GPIO_FUNC97_IN_SEL_S  0

#define GPIO_FUNC98_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x47C)
/* GPIO_SIG98_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG98_IN_SEL    (BIT(9))
#define GPIO_SIG98_IN_SEL_M  (BIT(9))
#define GPIO_SIG98_IN_SEL_V  0x1
#define GPIO_SIG98_IN_SEL_S  9
/* GPIO_FUNC98_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC98_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC98_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC98_IN_INV_SEL_V  0x1
#define GPIO_FUNC98_IN_INV_SEL_S  8
/* GPIO_FUNC98_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC98_IN_SEL    0x000000FF
#define GPIO_FUNC98_IN_SEL_M  ((GPIO_FUNC98_IN_SEL_V)<<(GPIO_FUNC98_IN_SEL_S))
#define GPIO_FUNC98_IN_SEL_V  0xFF
#define GPIO_FUNC98_IN_SEL_S  0

#define GPIO_FUNC99_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x480)
/* GPIO_SIG99_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG99_IN_SEL    (BIT(9))
#define GPIO_SIG99_IN_SEL_M  (BIT(9))
#define GPIO_SIG99_IN_SEL_V  0x1
#define GPIO_SIG99_IN_SEL_S  9
/* GPIO_FUNC99_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC99_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC99_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC99_IN_INV_SEL_V  0x1
#define GPIO_FUNC99_IN_INV_SEL_S  8
/* GPIO_FUNC99_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC99_IN_SEL    0x000000FF
#define GPIO_FUNC99_IN_SEL_M  ((GPIO_FUNC99_IN_SEL_V)<<(GPIO_FUNC99_IN_SEL_S))
#define GPIO_FUNC99_IN_SEL_V  0xFF
#define GPIO_FUNC99_IN_SEL_S  0

#define GPIO_FUNC100_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x484)
/* GPIO_SIG100_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG100_IN_SEL    (BIT(9))
#define GPIO_SIG100_IN_SEL_M  (BIT(9))
#define GPIO_SIG100_IN_SEL_V  0x1
#define GPIO_SIG100_IN_SEL_S  9
/* GPIO_FUNC100_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC100_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC100_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC100_IN_INV_SEL_V  0x1
#define GPIO_FUNC100_IN_INV_SEL_S  8
/* GPIO_FUNC100_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC100_IN_SEL    0x000000FF
#define GPIO_FUNC100_IN_SEL_M  ((GPIO_FUNC100_IN_SEL_V)<<(GPIO_FUNC100_IN_SEL_S))
#define GPIO_FUNC100_IN_SEL_V  0xFF
#define GPIO_FUNC100_IN_SEL_S  0

#define GPIO_FUNC101_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x488)
/* GPIO_SIG101_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG101_IN_SEL    (BIT(9))
#define GPIO_SIG101_IN_SEL_M  (BIT(9))
#define GPIO_SIG101_IN_SEL_V  0x1
#define GPIO_SIG101_IN_SEL_S  9
/* GPIO_FUNC101_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC101_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC101_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC101_IN_INV_SEL_V  0x1
#define GPIO_FUNC101_IN_INV_SEL_S  8
/* GPIO_FUNC101_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC101_IN_SEL    0x000000FF
#define GPIO_FUNC101_IN_SEL_M  ((GPIO_FUNC101_IN_SEL_V)<<(GPIO_FUNC101_IN_SEL_S))
#define GPIO_FUNC101_IN_SEL_V  0xFF
#define GPIO_FUNC101_IN_SEL_S  0

#define GPIO_FUNC102_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x48C)
/* GPIO_SIG102_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG102_IN_SEL    (BIT(9))
#define GPIO_SIG102_IN_SEL_M  (BIT(9))
#define GPIO_SIG102_IN_SEL_V  0x1
#define GPIO_SIG102_IN_SEL_S  9
/* GPIO_FUNC102_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC102_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC102_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC102_IN_INV_SEL_V  0x1
#define GPIO_FUNC102_IN_INV_SEL_S  8
/* GPIO_FUNC102_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC102_IN_SEL    0x000000FF
#define GPIO_FUNC102_IN_SEL_M  ((GPIO_FUNC102_IN_SEL_V)<<(GPIO_FUNC102_IN_SEL_S))
#define GPIO_FUNC102_IN_SEL_V  0xFF
#define GPIO_FUNC102_IN_SEL_S  0

#define GPIO_FUNC103_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x490)
/* GPIO_SIG103_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG103_IN_SEL    (BIT(9))
#define GPIO_SIG103_IN_SEL_M  (BIT(9))
#define GPIO_SIG103_IN_SEL_V  0x1
#define GPIO_SIG103_IN_SEL_S  9
/* GPIO_FUNC103_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC103_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC103_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC103_IN_INV_SEL_V  0x1
#define GPIO_FUNC103_IN_INV_SEL_S  8
/* GPIO_FUNC103_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC103_IN_SEL    0x000000FF
#define GPIO_FUNC103_IN_SEL_M  ((GPIO_FUNC103_IN_SEL_V)<<(GPIO_FUNC103_IN_SEL_S))
#define GPIO_FUNC103_IN_SEL_V  0xFF
#define GPIO_FUNC103_IN_SEL_S  0

#define GPIO_FUNC104_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x494)
/* GPIO_SIG104_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG104_IN_SEL    (BIT(9))
#define GPIO_SIG104_IN_SEL_M  (BIT(9))
#define GPIO_SIG104_IN_SEL_V  0x1
#define GPIO_SIG104_IN_SEL_S  9
/* GPIO_FUNC104_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC104_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC104_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC104_IN_INV_SEL_V  0x1
#define GPIO_FUNC104_IN_INV_SEL_S  8
/* GPIO_FUNC104_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC104_IN_SEL    0x000000FF
#define GPIO_FUNC104_IN_SEL_M  ((GPIO_FUNC104_IN_SEL_V)<<(GPIO_FUNC104_IN_SEL_S))
#define GPIO_FUNC104_IN_SEL_V  0xFF
#define GPIO_FUNC104_IN_SEL_S  0

#define GPIO_FUNC105_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x498)
/* GPIO_SIG105_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG105_IN_SEL    (BIT(9))
#define GPIO_SIG105_IN_SEL_M  (BIT(9))
#define GPIO_SIG105_IN_SEL_V  0x1
#define GPIO_SIG105_IN_SEL_S  9
/* GPIO_FUNC105_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC105_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC105_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC105_IN_INV_SEL_V  0x1
#define GPIO_FUNC105_IN_INV_SEL_S  8
/* GPIO_FUNC105_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC105_IN_SEL    0x000000FF
#define GPIO_FUNC105_IN_SEL_M  ((GPIO_FUNC105_IN_SEL_V)<<(GPIO_FUNC105_IN_SEL_S))
#define GPIO_FUNC105_IN_SEL_V  0xFF
#define GPIO_FUNC105_IN_SEL_S  0

#define GPIO_FUNC106_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x49C)
/* GPIO_SIG106_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG106_IN_SEL    (BIT(9))
#define GPIO_SIG106_IN_SEL_M  (BIT(9))
#define GPIO_SIG106_IN_SEL_V  0x1
#define GPIO_SIG106_IN_SEL_S  9
/* GPIO_FUNC106_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC106_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC106_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC106_IN_INV_SEL_V  0x1
#define GPIO_FUNC106_IN_INV_SEL_S  8
/* GPIO_FUNC106_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $f
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC106_IN_SEL    0x000000FF
#define GPIO_FUNC106_IN_SEL_M  ((GPIO_FUNC106_IN_SEL_V)<<(GPIO_FUNC106_IN_SEL_S))
#define GPIO_FUNC106_IN_SEL_V  0xFF
#define GPIO_FUNC106_IN_SEL_S  0

#define GPIO_FUNC108_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4A4)
/* GPIO_SIG108_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG108_IN_SEL    (BIT(9))
#define GPIO_SIG108_IN_SEL_M  (BIT(9))
#define GPIO_SIG108_IN_SEL_V  0x1
#define GPIO_SIG108_IN_SEL_S  9
/* GPIO_FUNC108_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC108_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC108_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC108_IN_INV_SEL_V  0x1
#define GPIO_FUNC108_IN_INV_SEL_S  8
/* GPIO_FUNC108_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC108_IN_SEL    0x000000FF
#define GPIO_FUNC108_IN_SEL_M  ((GPIO_FUNC108_IN_SEL_V)<<(GPIO_FUNC108_IN_SEL_S))
#define GPIO_FUNC108_IN_SEL_V  0xFF
#define GPIO_FUNC108_IN_SEL_S  0

#define GPIO_FUNC109_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4A8)
/* GPIO_SIG109_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG109_IN_SEL    (BIT(9))
#define GPIO_SIG109_IN_SEL_M  (BIT(9))
#define GPIO_SIG109_IN_SEL_V  0x1
#define GPIO_SIG109_IN_SEL_S  9
/* GPIO_FUNC109_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC109_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC109_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC109_IN_INV_SEL_V  0x1
#define GPIO_FUNC109_IN_INV_SEL_S  8
/* GPIO_FUNC109_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC109_IN_SEL    0x000000FF
#define GPIO_FUNC109_IN_SEL_M  ((GPIO_FUNC109_IN_SEL_V)<<(GPIO_FUNC109_IN_SEL_S))
#define GPIO_FUNC109_IN_SEL_V  0xFF
#define GPIO_FUNC109_IN_SEL_S  0

#define GPIO_FUNC110_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4AC)
/* GPIO_SIG110_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG110_IN_SEL    (BIT(9))
#define GPIO_SIG110_IN_SEL_M  (BIT(9))
#define GPIO_SIG110_IN_SEL_V  0x1
#define GPIO_SIG110_IN_SEL_S  9
/* GPIO_FUNC110_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC110_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC110_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC110_IN_INV_SEL_V  0x1
#define GPIO_FUNC110_IN_INV_SEL_S  8
/* GPIO_FUNC110_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC110_IN_SEL    0x000000FF
#define GPIO_FUNC110_IN_SEL_M  ((GPIO_FUNC110_IN_SEL_V)<<(GPIO_FUNC110_IN_SEL_S))
#define GPIO_FUNC110_IN_SEL_V  0xFF
#define GPIO_FUNC110_IN_SEL_S  0

#define GPIO_FUNC111_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4B0)
/* GPIO_SIG111_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG111_IN_SEL    (BIT(9))
#define GPIO_SIG111_IN_SEL_M  (BIT(9))
#define GPIO_SIG111_IN_SEL_V  0x1
#define GPIO_SIG111_IN_SEL_S  9
/* GPIO_FUNC111_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC111_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC111_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC111_IN_INV_SEL_V  0x1
#define GPIO_FUNC111_IN_INV_SEL_S  8
/* GPIO_FUNC111_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC111_IN_SEL    0x000000FF
#define GPIO_FUNC111_IN_SEL_M  ((GPIO_FUNC111_IN_SEL_V)<<(GPIO_FUNC111_IN_SEL_S))
#define GPIO_FUNC111_IN_SEL_V  0xFF
#define GPIO_FUNC111_IN_SEL_S  0

#define GPIO_FUNC112_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4B4)
/* GPIO_SIG112_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG112_IN_SEL    (BIT(9))
#define GPIO_SIG112_IN_SEL_M  (BIT(9))
#define GPIO_SIG112_IN_SEL_V  0x1
#define GPIO_SIG112_IN_SEL_S  9
/* GPIO_FUNC112_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC112_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC112_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC112_IN_INV_SEL_V  0x1
#define GPIO_FUNC112_IN_INV_SEL_S  8
/* GPIO_FUNC112_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC112_IN_SEL    0x000000FF
#define GPIO_FUNC112_IN_SEL_M  ((GPIO_FUNC112_IN_SEL_V)<<(GPIO_FUNC112_IN_SEL_S))
#define GPIO_FUNC112_IN_SEL_V  0xFF
#define GPIO_FUNC112_IN_SEL_S  0

#define GPIO_FUNC113_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4B8)
/* GPIO_SIG113_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG113_IN_SEL    (BIT(9))
#define GPIO_SIG113_IN_SEL_M  (BIT(9))
#define GPIO_SIG113_IN_SEL_V  0x1
#define GPIO_SIG113_IN_SEL_S  9
/* GPIO_FUNC113_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC113_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC113_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC113_IN_INV_SEL_V  0x1
#define GPIO_FUNC113_IN_INV_SEL_S  8
/* GPIO_FUNC113_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC113_IN_SEL    0x000000FF
#define GPIO_FUNC113_IN_SEL_M  ((GPIO_FUNC113_IN_SEL_V)<<(GPIO_FUNC113_IN_SEL_S))
#define GPIO_FUNC113_IN_SEL_V  0xFF
#define GPIO_FUNC113_IN_SEL_S  0

#define GPIO_FUNC114_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4BC)
/* GPIO_SIG114_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG114_IN_SEL    (BIT(9))
#define GPIO_SIG114_IN_SEL_M  (BIT(9))
#define GPIO_SIG114_IN_SEL_V  0x1
#define GPIO_SIG114_IN_SEL_S  9
/* GPIO_FUNC114_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC114_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC114_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC114_IN_INV_SEL_V  0x1
#define GPIO_FUNC114_IN_INV_SEL_S  8
/* GPIO_FUNC114_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC114_IN_SEL    0x000000FF
#define GPIO_FUNC114_IN_SEL_M  ((GPIO_FUNC114_IN_SEL_V)<<(GPIO_FUNC114_IN_SEL_S))
#define GPIO_FUNC114_IN_SEL_V  0xFF
#define GPIO_FUNC114_IN_SEL_S  0

#define GPIO_FUNC115_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4C0)
/* GPIO_SIG115_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG115_IN_SEL    (BIT(9))
#define GPIO_SIG115_IN_SEL_M  (BIT(9))
#define GPIO_SIG115_IN_SEL_V  0x1
#define GPIO_SIG115_IN_SEL_S  9
/* GPIO_FUNC115_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC115_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC115_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC115_IN_INV_SEL_V  0x1
#define GPIO_FUNC115_IN_INV_SEL_S  8
/* GPIO_FUNC115_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC115_IN_SEL    0x000000FF
#define GPIO_FUNC115_IN_SEL_M  ((GPIO_FUNC115_IN_SEL_V)<<(GPIO_FUNC115_IN_SEL_S))
#define GPIO_FUNC115_IN_SEL_V  0xFF
#define GPIO_FUNC115_IN_SEL_S  0

#define GPIO_FUNC116_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4C4)
/* GPIO_SIG116_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG116_IN_SEL    (BIT(9))
#define GPIO_SIG116_IN_SEL_M  (BIT(9))
#define GPIO_SIG116_IN_SEL_V  0x1
#define GPIO_SIG116_IN_SEL_S  9
/* GPIO_FUNC116_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC116_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC116_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC116_IN_INV_SEL_V  0x1
#define GPIO_FUNC116_IN_INV_SEL_S  8
/* GPIO_FUNC116_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC116_IN_SEL    0x000000FF
#define GPIO_FUNC116_IN_SEL_M  ((GPIO_FUNC116_IN_SEL_V)<<(GPIO_FUNC116_IN_SEL_S))
#define GPIO_FUNC116_IN_SEL_V  0xFF
#define GPIO_FUNC116_IN_SEL_S  0

#define GPIO_FUNC117_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4C8)
/* GPIO_SIG117_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG117_IN_SEL    (BIT(9))
#define GPIO_SIG117_IN_SEL_M  (BIT(9))
#define GPIO_SIG117_IN_SEL_V  0x1
#define GPIO_SIG117_IN_SEL_S  9
/* GPIO_FUNC117_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC117_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC117_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC117_IN_INV_SEL_V  0x1
#define GPIO_FUNC117_IN_INV_SEL_S  8
/* GPIO_FUNC117_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC117_IN_SEL    0x000000FF
#define GPIO_FUNC117_IN_SEL_M  ((GPIO_FUNC117_IN_SEL_V)<<(GPIO_FUNC117_IN_SEL_S))
#define GPIO_FUNC117_IN_SEL_V  0xFF
#define GPIO_FUNC117_IN_SEL_S  0

#define GPIO_FUNC118_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4CC)
/* GPIO_SIG118_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG118_IN_SEL    (BIT(9))
#define GPIO_SIG118_IN_SEL_M  (BIT(9))
#define GPIO_SIG118_IN_SEL_V  0x1
#define GPIO_SIG118_IN_SEL_S  9
/* GPIO_FUNC118_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC118_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC118_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC118_IN_INV_SEL_V  0x1
#define GPIO_FUNC118_IN_INV_SEL_S  8
/* GPIO_FUNC118_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC118_IN_SEL    0x000000FF
#define GPIO_FUNC118_IN_SEL_M  ((GPIO_FUNC118_IN_SEL_V)<<(GPIO_FUNC118_IN_SEL_S))
#define GPIO_FUNC118_IN_SEL_V  0xFF
#define GPIO_FUNC118_IN_SEL_S  0

#define GPIO_FUNC119_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4D0)
/* GPIO_SIG119_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG119_IN_SEL    (BIT(9))
#define GPIO_SIG119_IN_SEL_M  (BIT(9))
#define GPIO_SIG119_IN_SEL_V  0x1
#define GPIO_SIG119_IN_SEL_S  9
/* GPIO_FUNC119_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC119_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC119_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC119_IN_INV_SEL_V  0x1
#define GPIO_FUNC119_IN_INV_SEL_S  8
/* GPIO_FUNC119_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $g
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC119_IN_SEL    0x000000FF
#define GPIO_FUNC119_IN_SEL_M  ((GPIO_FUNC119_IN_SEL_V)<<(GPIO_FUNC119_IN_SEL_S))
#define GPIO_FUNC119_IN_SEL_V  0xFF
#define GPIO_FUNC119_IN_SEL_S  0

#define GPIO_FUNC121_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4D8)
/* GPIO_SIG121_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG121_IN_SEL    (BIT(9))
#define GPIO_SIG121_IN_SEL_M  (BIT(9))
#define GPIO_SIG121_IN_SEL_V  0x1
#define GPIO_SIG121_IN_SEL_S  9
/* GPIO_FUNC121_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC121_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC121_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC121_IN_INV_SEL_V  0x1
#define GPIO_FUNC121_IN_INV_SEL_S  8
/* GPIO_FUNC121_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $h
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC121_IN_SEL    0x000000FF
#define GPIO_FUNC121_IN_SEL_M  ((GPIO_FUNC121_IN_SEL_V)<<(GPIO_FUNC121_IN_SEL_S))
#define GPIO_FUNC121_IN_SEL_V  0xFF
#define GPIO_FUNC121_IN_SEL_S  0

#define GPIO_FUNC122_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4DC)
/* GPIO_SIG122_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG122_IN_SEL    (BIT(9))
#define GPIO_SIG122_IN_SEL_M  (BIT(9))
#define GPIO_SIG122_IN_SEL_V  0x1
#define GPIO_SIG122_IN_SEL_S  9
/* GPIO_FUNC122_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC122_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC122_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC122_IN_INV_SEL_V  0x1
#define GPIO_FUNC122_IN_INV_SEL_S  8
/* GPIO_FUNC122_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $h
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC122_IN_SEL    0x000000FF
#define GPIO_FUNC122_IN_SEL_M  ((GPIO_FUNC122_IN_SEL_V)<<(GPIO_FUNC122_IN_SEL_S))
#define GPIO_FUNC122_IN_SEL_V  0xFF
#define GPIO_FUNC122_IN_SEL_S  0

#define GPIO_FUNC123_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4E0)
/* GPIO_SIG123_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG123_IN_SEL    (BIT(9))
#define GPIO_SIG123_IN_SEL_M  (BIT(9))
#define GPIO_SIG123_IN_SEL_V  0x1
#define GPIO_SIG123_IN_SEL_S  9
/* GPIO_FUNC123_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC123_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC123_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC123_IN_INV_SEL_V  0x1
#define GPIO_FUNC123_IN_INV_SEL_S  8
/* GPIO_FUNC123_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $h
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC123_IN_SEL    0x000000FF
#define GPIO_FUNC123_IN_SEL_M  ((GPIO_FUNC123_IN_SEL_V)<<(GPIO_FUNC123_IN_SEL_S))
#define GPIO_FUNC123_IN_SEL_V  0xFF
#define GPIO_FUNC123_IN_SEL_S  0

#define GPIO_FUNC124_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4E4)
/* GPIO_SIG124_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG124_IN_SEL    (BIT(9))
#define GPIO_SIG124_IN_SEL_M  (BIT(9))
#define GPIO_SIG124_IN_SEL_V  0x1
#define GPIO_SIG124_IN_SEL_S  9
/* GPIO_FUNC124_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC124_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC124_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC124_IN_INV_SEL_V  0x1
#define GPIO_FUNC124_IN_INV_SEL_S  8
/* GPIO_FUNC124_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $h
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC124_IN_SEL    0x000000FF
#define GPIO_FUNC124_IN_SEL_M  ((GPIO_FUNC124_IN_SEL_V)<<(GPIO_FUNC124_IN_SEL_S))
#define GPIO_FUNC124_IN_SEL_V  0xFF
#define GPIO_FUNC124_IN_SEL_S  0

#define GPIO_FUNC126_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4EC)
/* GPIO_SIG126_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG126_IN_SEL    (BIT(9))
#define GPIO_SIG126_IN_SEL_M  (BIT(9))
#define GPIO_SIG126_IN_SEL_V  0x1
#define GPIO_SIG126_IN_SEL_S  9
/* GPIO_FUNC126_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC126_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC126_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC126_IN_INV_SEL_V  0x1
#define GPIO_FUNC126_IN_INV_SEL_S  8
/* GPIO_FUNC126_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $i
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC126_IN_SEL    0x000000FF
#define GPIO_FUNC126_IN_SEL_M  ((GPIO_FUNC126_IN_SEL_V)<<(GPIO_FUNC126_IN_SEL_S))
#define GPIO_FUNC126_IN_SEL_V  0xFF
#define GPIO_FUNC126_IN_SEL_S  0

#define GPIO_FUNC127_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4F0)
/* GPIO_SIG127_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG127_IN_SEL    (BIT(9))
#define GPIO_SIG127_IN_SEL_M  (BIT(9))
#define GPIO_SIG127_IN_SEL_V  0x1
#define GPIO_SIG127_IN_SEL_S  9
/* GPIO_FUNC127_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC127_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC127_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC127_IN_INV_SEL_V  0x1
#define GPIO_FUNC127_IN_INV_SEL_S  8
/* GPIO_FUNC127_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $i
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC127_IN_SEL    0x000000FF
#define GPIO_FUNC127_IN_SEL_M  ((GPIO_FUNC127_IN_SEL_V)<<(GPIO_FUNC127_IN_SEL_S))
#define GPIO_FUNC127_IN_SEL_V  0xFF
#define GPIO_FUNC127_IN_SEL_S  0

#define GPIO_FUNC128_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4F4)
/* GPIO_SIG128_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG128_IN_SEL    (BIT(9))
#define GPIO_SIG128_IN_SEL_M  (BIT(9))
#define GPIO_SIG128_IN_SEL_V  0x1
#define GPIO_SIG128_IN_SEL_S  9
/* GPIO_FUNC128_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC128_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC128_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC128_IN_INV_SEL_V  0x1
#define GPIO_FUNC128_IN_INV_SEL_S  8
/* GPIO_FUNC128_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $i
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC128_IN_SEL    0x000000FF
#define GPIO_FUNC128_IN_SEL_M  ((GPIO_FUNC128_IN_SEL_V)<<(GPIO_FUNC128_IN_SEL_S))
#define GPIO_FUNC128_IN_SEL_V  0xFF
#define GPIO_FUNC128_IN_SEL_S  0

#define GPIO_FUNC129_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4F8)
/* GPIO_SIG129_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG129_IN_SEL    (BIT(9))
#define GPIO_SIG129_IN_SEL_M  (BIT(9))
#define GPIO_SIG129_IN_SEL_V  0x1
#define GPIO_SIG129_IN_SEL_S  9
/* GPIO_FUNC129_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC129_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC129_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC129_IN_INV_SEL_V  0x1
#define GPIO_FUNC129_IN_INV_SEL_S  8
/* GPIO_FUNC129_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $i
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC129_IN_SEL    0x000000FF
#define GPIO_FUNC129_IN_SEL_M  ((GPIO_FUNC129_IN_SEL_V)<<(GPIO_FUNC129_IN_SEL_S))
#define GPIO_FUNC129_IN_SEL_V  0xFF
#define GPIO_FUNC129_IN_SEL_S  0

#define GPIO_FUNC130_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x4FC)
/* GPIO_SIG130_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG130_IN_SEL    (BIT(9))
#define GPIO_SIG130_IN_SEL_M  (BIT(9))
#define GPIO_SIG130_IN_SEL_V  0x1
#define GPIO_SIG130_IN_SEL_S  9
/* GPIO_FUNC130_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC130_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC130_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC130_IN_INV_SEL_V  0x1
#define GPIO_FUNC130_IN_INV_SEL_S  8
/* GPIO_FUNC130_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $i
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC130_IN_SEL    0x000000FF
#define GPIO_FUNC130_IN_SEL_M  ((GPIO_FUNC130_IN_SEL_V)<<(GPIO_FUNC130_IN_SEL_S))
#define GPIO_FUNC130_IN_SEL_V  0xFF
#define GPIO_FUNC130_IN_SEL_S  0

#define GPIO_FUNC131_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x500)
/* GPIO_SIG131_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG131_IN_SEL    (BIT(9))
#define GPIO_SIG131_IN_SEL_M  (BIT(9))
#define GPIO_SIG131_IN_SEL_V  0x1
#define GPIO_SIG131_IN_SEL_S  9
/* GPIO_FUNC131_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC131_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC131_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC131_IN_INV_SEL_V  0x1
#define GPIO_FUNC131_IN_INV_SEL_S  8
/* GPIO_FUNC131_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'h80 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $i
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC131_IN_SEL    0x000000FF
#define GPIO_FUNC131_IN_SEL_M  ((GPIO_FUNC131_IN_SEL_V)<<(GPIO_FUNC131_IN_SEL_S))
#define GPIO_FUNC131_IN_SEL_V  0xFF
#define GPIO_FUNC131_IN_SEL_S  0

#define GPIO_FUNC132_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x504)
/* GPIO_SIG132_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG132_IN_SEL    (BIT(9))
#define GPIO_SIG132_IN_SEL_M  (BIT(9))
#define GPIO_SIG132_IN_SEL_V  0x1
#define GPIO_SIG132_IN_SEL_S  9
/* GPIO_FUNC132_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC132_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC132_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC132_IN_INV_SEL_V  0x1
#define GPIO_FUNC132_IN_INV_SEL_S  8
/* GPIO_FUNC132_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $i
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC132_IN_SEL    0x000000FF
#define GPIO_FUNC132_IN_SEL_M  ((GPIO_FUNC132_IN_SEL_V)<<(GPIO_FUNC132_IN_SEL_S))
#define GPIO_FUNC132_IN_SEL_V  0xFF
#define GPIO_FUNC132_IN_SEL_S  0

#define GPIO_FUNC133_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x508)
/* GPIO_SIG133_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG133_IN_SEL    (BIT(9))
#define GPIO_SIG133_IN_SEL_M  (BIT(9))
#define GPIO_SIG133_IN_SEL_V  0x1
#define GPIO_SIG133_IN_SEL_S  9
/* GPIO_FUNC133_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC133_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC133_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC133_IN_INV_SEL_V  0x1
#define GPIO_FUNC133_IN_INV_SEL_S  8
/* GPIO_FUNC133_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $i
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC133_IN_SEL    0x000000FF
#define GPIO_FUNC133_IN_SEL_M  ((GPIO_FUNC133_IN_SEL_V)<<(GPIO_FUNC133_IN_SEL_S))
#define GPIO_FUNC133_IN_SEL_V  0xFF
#define GPIO_FUNC133_IN_SEL_S  0

#define GPIO_FUNC141_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x528)
/* GPIO_SIG141_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG141_IN_SEL    (BIT(9))
#define GPIO_SIG141_IN_SEL_M  (BIT(9))
#define GPIO_SIG141_IN_SEL_V  0x1
#define GPIO_SIG141_IN_SEL_S  9
/* GPIO_FUNC141_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC141_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC141_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC141_IN_INV_SEL_V  0x1
#define GPIO_FUNC141_IN_INV_SEL_S  8
/* GPIO_FUNC141_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC141_IN_SEL    0x000000FF
#define GPIO_FUNC141_IN_SEL_M  ((GPIO_FUNC141_IN_SEL_V)<<(GPIO_FUNC141_IN_SEL_S))
#define GPIO_FUNC141_IN_SEL_V  0xFF
#define GPIO_FUNC141_IN_SEL_S  0

#define GPIO_FUNC142_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x52C)
/* GPIO_SIG142_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG142_IN_SEL    (BIT(9))
#define GPIO_SIG142_IN_SEL_M  (BIT(9))
#define GPIO_SIG142_IN_SEL_V  0x1
#define GPIO_SIG142_IN_SEL_S  9
/* GPIO_FUNC142_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC142_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC142_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC142_IN_INV_SEL_V  0x1
#define GPIO_FUNC142_IN_INV_SEL_S  8
/* GPIO_FUNC142_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC142_IN_SEL    0x000000FF
#define GPIO_FUNC142_IN_SEL_M  ((GPIO_FUNC142_IN_SEL_V)<<(GPIO_FUNC142_IN_SEL_S))
#define GPIO_FUNC142_IN_SEL_V  0xFF
#define GPIO_FUNC142_IN_SEL_S  0

#define GPIO_FUNC143_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x530)
/* GPIO_SIG143_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG143_IN_SEL    (BIT(9))
#define GPIO_SIG143_IN_SEL_M  (BIT(9))
#define GPIO_SIG143_IN_SEL_V  0x1
#define GPIO_SIG143_IN_SEL_S  9
/* GPIO_FUNC143_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC143_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC143_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC143_IN_INV_SEL_V  0x1
#define GPIO_FUNC143_IN_INV_SEL_S  8
/* GPIO_FUNC143_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC143_IN_SEL    0x000000FF
#define GPIO_FUNC143_IN_SEL_M  ((GPIO_FUNC143_IN_SEL_V)<<(GPIO_FUNC143_IN_SEL_S))
#define GPIO_FUNC143_IN_SEL_V  0xFF
#define GPIO_FUNC143_IN_SEL_S  0

#define GPIO_FUNC144_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x534)
/* GPIO_SIG144_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG144_IN_SEL    (BIT(9))
#define GPIO_SIG144_IN_SEL_M  (BIT(9))
#define GPIO_SIG144_IN_SEL_V  0x1
#define GPIO_SIG144_IN_SEL_S  9
/* GPIO_FUNC144_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC144_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC144_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC144_IN_INV_SEL_V  0x1
#define GPIO_FUNC144_IN_INV_SEL_S  8
/* GPIO_FUNC144_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC144_IN_SEL    0x000000FF
#define GPIO_FUNC144_IN_SEL_M  ((GPIO_FUNC144_IN_SEL_V)<<(GPIO_FUNC144_IN_SEL_S))
#define GPIO_FUNC144_IN_SEL_V  0xFF
#define GPIO_FUNC144_IN_SEL_S  0

#define GPIO_FUNC145_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x538)
/* GPIO_SIG145_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG145_IN_SEL    (BIT(9))
#define GPIO_SIG145_IN_SEL_M  (BIT(9))
#define GPIO_SIG145_IN_SEL_V  0x1
#define GPIO_SIG145_IN_SEL_S  9
/* GPIO_FUNC145_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC145_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC145_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC145_IN_INV_SEL_V  0x1
#define GPIO_FUNC145_IN_INV_SEL_S  8
/* GPIO_FUNC145_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC145_IN_SEL    0x000000FF
#define GPIO_FUNC145_IN_SEL_M  ((GPIO_FUNC145_IN_SEL_V)<<(GPIO_FUNC145_IN_SEL_S))
#define GPIO_FUNC145_IN_SEL_V  0xFF
#define GPIO_FUNC145_IN_SEL_S  0

#define GPIO_FUNC146_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x53C)
/* GPIO_SIG146_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG146_IN_SEL    (BIT(9))
#define GPIO_SIG146_IN_SEL_M  (BIT(9))
#define GPIO_SIG146_IN_SEL_V  0x1
#define GPIO_SIG146_IN_SEL_S  9
/* GPIO_FUNC146_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC146_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC146_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC146_IN_INV_SEL_V  0x1
#define GPIO_FUNC146_IN_INV_SEL_S  8
/* GPIO_FUNC146_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC146_IN_SEL    0x000000FF
#define GPIO_FUNC146_IN_SEL_M  ((GPIO_FUNC146_IN_SEL_V)<<(GPIO_FUNC146_IN_SEL_S))
#define GPIO_FUNC146_IN_SEL_V  0xFF
#define GPIO_FUNC146_IN_SEL_S  0

#define GPIO_FUNC147_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x540)
/* GPIO_SIG147_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG147_IN_SEL    (BIT(9))
#define GPIO_SIG147_IN_SEL_M  (BIT(9))
#define GPIO_SIG147_IN_SEL_V  0x1
#define GPIO_SIG147_IN_SEL_S  9
/* GPIO_FUNC147_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC147_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC147_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC147_IN_INV_SEL_V  0x1
#define GPIO_FUNC147_IN_INV_SEL_S  8
/* GPIO_FUNC147_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC147_IN_SEL    0x000000FF
#define GPIO_FUNC147_IN_SEL_M  ((GPIO_FUNC147_IN_SEL_V)<<(GPIO_FUNC147_IN_SEL_S))
#define GPIO_FUNC147_IN_SEL_V  0xFF
#define GPIO_FUNC147_IN_SEL_S  0

#define GPIO_FUNC148_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x544)
/* GPIO_SIG148_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG148_IN_SEL    (BIT(9))
#define GPIO_SIG148_IN_SEL_M  (BIT(9))
#define GPIO_SIG148_IN_SEL_V  0x1
#define GPIO_SIG148_IN_SEL_S  9
/* GPIO_FUNC148_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC148_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC148_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC148_IN_INV_SEL_V  0x1
#define GPIO_FUNC148_IN_INV_SEL_S  8
/* GPIO_FUNC148_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC148_IN_SEL    0x000000FF
#define GPIO_FUNC148_IN_SEL_M  ((GPIO_FUNC148_IN_SEL_V)<<(GPIO_FUNC148_IN_SEL_S))
#define GPIO_FUNC148_IN_SEL_V  0xFF
#define GPIO_FUNC148_IN_SEL_S  0

#define GPIO_FUNC149_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x548)
/* GPIO_SIG149_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG149_IN_SEL    (BIT(9))
#define GPIO_SIG149_IN_SEL_M  (BIT(9))
#define GPIO_SIG149_IN_SEL_V  0x1
#define GPIO_SIG149_IN_SEL_S  9
/* GPIO_FUNC149_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC149_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC149_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC149_IN_INV_SEL_V  0x1
#define GPIO_FUNC149_IN_INV_SEL_S  8
/* GPIO_FUNC149_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC149_IN_SEL    0x000000FF
#define GPIO_FUNC149_IN_SEL_M  ((GPIO_FUNC149_IN_SEL_V)<<(GPIO_FUNC149_IN_SEL_S))
#define GPIO_FUNC149_IN_SEL_V  0xFF
#define GPIO_FUNC149_IN_SEL_S  0

#define GPIO_FUNC150_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x54C)
/* GPIO_SIG150_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG150_IN_SEL    (BIT(9))
#define GPIO_SIG150_IN_SEL_M  (BIT(9))
#define GPIO_SIG150_IN_SEL_V  0x1
#define GPIO_SIG150_IN_SEL_S  9
/* GPIO_FUNC150_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC150_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC150_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC150_IN_INV_SEL_V  0x1
#define GPIO_FUNC150_IN_INV_SEL_S  8
/* GPIO_FUNC150_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC150_IN_SEL    0x000000FF
#define GPIO_FUNC150_IN_SEL_M  ((GPIO_FUNC150_IN_SEL_V)<<(GPIO_FUNC150_IN_SEL_S))
#define GPIO_FUNC150_IN_SEL_V  0xFF
#define GPIO_FUNC150_IN_SEL_S  0

#define GPIO_FUNC151_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x550)
/* GPIO_SIG151_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG151_IN_SEL    (BIT(9))
#define GPIO_SIG151_IN_SEL_M  (BIT(9))
#define GPIO_SIG151_IN_SEL_V  0x1
#define GPIO_SIG151_IN_SEL_S  9
/* GPIO_FUNC151_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC151_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC151_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC151_IN_INV_SEL_V  0x1
#define GPIO_FUNC151_IN_INV_SEL_S  8
/* GPIO_FUNC151_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC151_IN_SEL    0x000000FF
#define GPIO_FUNC151_IN_SEL_M  ((GPIO_FUNC151_IN_SEL_V)<<(GPIO_FUNC151_IN_SEL_S))
#define GPIO_FUNC151_IN_SEL_V  0xFF
#define GPIO_FUNC151_IN_SEL_S  0

#define GPIO_FUNC152_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x554)
/* GPIO_SIG152_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG152_IN_SEL    (BIT(9))
#define GPIO_SIG152_IN_SEL_M  (BIT(9))
#define GPIO_SIG152_IN_SEL_V  0x1
#define GPIO_SIG152_IN_SEL_S  9
/* GPIO_FUNC152_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC152_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC152_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC152_IN_INV_SEL_V  0x1
#define GPIO_FUNC152_IN_INV_SEL_S  8
/* GPIO_FUNC152_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC152_IN_SEL    0x000000FF
#define GPIO_FUNC152_IN_SEL_M  ((GPIO_FUNC152_IN_SEL_V)<<(GPIO_FUNC152_IN_SEL_S))
#define GPIO_FUNC152_IN_SEL_V  0xFF
#define GPIO_FUNC152_IN_SEL_S  0

#define GPIO_FUNC153_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x558)
/* GPIO_SIG153_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG153_IN_SEL    (BIT(9))
#define GPIO_SIG153_IN_SEL_M  (BIT(9))
#define GPIO_SIG153_IN_SEL_V  0x1
#define GPIO_SIG153_IN_SEL_S  9
/* GPIO_FUNC153_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC153_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC153_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC153_IN_INV_SEL_V  0x1
#define GPIO_FUNC153_IN_INV_SEL_S  8
/* GPIO_FUNC153_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC153_IN_SEL    0x000000FF
#define GPIO_FUNC153_IN_SEL_M  ((GPIO_FUNC153_IN_SEL_V)<<(GPIO_FUNC153_IN_SEL_S))
#define GPIO_FUNC153_IN_SEL_V  0xFF
#define GPIO_FUNC153_IN_SEL_S  0

#define GPIO_FUNC154_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x55C)
/* GPIO_SIG154_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG154_IN_SEL    (BIT(9))
#define GPIO_SIG154_IN_SEL_M  (BIT(9))
#define GPIO_SIG154_IN_SEL_V  0x1
#define GPIO_SIG154_IN_SEL_S  9
/* GPIO_FUNC154_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC154_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC154_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC154_IN_INV_SEL_V  0x1
#define GPIO_FUNC154_IN_INV_SEL_S  8
/* GPIO_FUNC154_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC154_IN_SEL    0x000000FF
#define GPIO_FUNC154_IN_SEL_M  ((GPIO_FUNC154_IN_SEL_V)<<(GPIO_FUNC154_IN_SEL_S))
#define GPIO_FUNC154_IN_SEL_V  0xFF
#define GPIO_FUNC154_IN_SEL_S  0

#define GPIO_FUNC155_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x560)
/* GPIO_SIG155_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG155_IN_SEL    (BIT(9))
#define GPIO_SIG155_IN_SEL_M  (BIT(9))
#define GPIO_SIG155_IN_SEL_V  0x1
#define GPIO_SIG155_IN_SEL_S  9
/* GPIO_FUNC155_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC155_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC155_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC155_IN_INV_SEL_V  0x1
#define GPIO_FUNC155_IN_INV_SEL_S  8
/* GPIO_FUNC155_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC155_IN_SEL    0x000000FF
#define GPIO_FUNC155_IN_SEL_M  ((GPIO_FUNC155_IN_SEL_V)<<(GPIO_FUNC155_IN_SEL_S))
#define GPIO_FUNC155_IN_SEL_V  0xFF
#define GPIO_FUNC155_IN_SEL_S  0

#define GPIO_FUNC156_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x564)
/* GPIO_SIG156_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG156_IN_SEL    (BIT(9))
#define GPIO_SIG156_IN_SEL_M  (BIT(9))
#define GPIO_SIG156_IN_SEL_V  0x1
#define GPIO_SIG156_IN_SEL_S  9
/* GPIO_FUNC156_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC156_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC156_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC156_IN_INV_SEL_V  0x1
#define GPIO_FUNC156_IN_INV_SEL_S  8
/* GPIO_FUNC156_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $j
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC156_IN_SEL    0x000000FF
#define GPIO_FUNC156_IN_SEL_M  ((GPIO_FUNC156_IN_SEL_V)<<(GPIO_FUNC156_IN_SEL_S))
#define GPIO_FUNC156_IN_SEL_V  0xFF
#define GPIO_FUNC156_IN_SEL_S  0

#define GPIO_FUNC158_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x56C)
/* GPIO_SIG158_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG158_IN_SEL    (BIT(9))
#define GPIO_SIG158_IN_SEL_M  (BIT(9))
#define GPIO_SIG158_IN_SEL_V  0x1
#define GPIO_SIG158_IN_SEL_S  9
/* GPIO_FUNC158_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC158_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC158_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC158_IN_INV_SEL_V  0x1
#define GPIO_FUNC158_IN_INV_SEL_S  8
/* GPIO_FUNC158_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC158_IN_SEL    0x000000FF
#define GPIO_FUNC158_IN_SEL_M  ((GPIO_FUNC158_IN_SEL_V)<<(GPIO_FUNC158_IN_SEL_S))
#define GPIO_FUNC158_IN_SEL_V  0xFF
#define GPIO_FUNC158_IN_SEL_S  0

#define GPIO_FUNC159_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x570)
/* GPIO_SIG159_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG159_IN_SEL    (BIT(9))
#define GPIO_SIG159_IN_SEL_M  (BIT(9))
#define GPIO_SIG159_IN_SEL_V  0x1
#define GPIO_SIG159_IN_SEL_S  9
/* GPIO_FUNC159_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC159_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC159_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC159_IN_INV_SEL_V  0x1
#define GPIO_FUNC159_IN_INV_SEL_S  8
/* GPIO_FUNC159_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC159_IN_SEL    0x000000FF
#define GPIO_FUNC159_IN_SEL_M  ((GPIO_FUNC159_IN_SEL_V)<<(GPIO_FUNC159_IN_SEL_S))
#define GPIO_FUNC159_IN_SEL_V  0xFF
#define GPIO_FUNC159_IN_SEL_S  0

#define GPIO_FUNC160_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x574)
/* GPIO_SIG160_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG160_IN_SEL    (BIT(9))
#define GPIO_SIG160_IN_SEL_M  (BIT(9))
#define GPIO_SIG160_IN_SEL_V  0x1
#define GPIO_SIG160_IN_SEL_S  9
/* GPIO_FUNC160_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC160_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC160_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC160_IN_INV_SEL_V  0x1
#define GPIO_FUNC160_IN_INV_SEL_S  8
/* GPIO_FUNC160_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC160_IN_SEL    0x000000FF
#define GPIO_FUNC160_IN_SEL_M  ((GPIO_FUNC160_IN_SEL_V)<<(GPIO_FUNC160_IN_SEL_S))
#define GPIO_FUNC160_IN_SEL_V  0xFF
#define GPIO_FUNC160_IN_SEL_S  0

#define GPIO_FUNC161_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x578)
/* GPIO_SIG161_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG161_IN_SEL    (BIT(9))
#define GPIO_SIG161_IN_SEL_M  (BIT(9))
#define GPIO_SIG161_IN_SEL_V  0x1
#define GPIO_SIG161_IN_SEL_S  9
/* GPIO_FUNC161_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC161_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC161_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC161_IN_INV_SEL_V  0x1
#define GPIO_FUNC161_IN_INV_SEL_S  8
/* GPIO_FUNC161_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC161_IN_SEL    0x000000FF
#define GPIO_FUNC161_IN_SEL_M  ((GPIO_FUNC161_IN_SEL_V)<<(GPIO_FUNC161_IN_SEL_S))
#define GPIO_FUNC161_IN_SEL_V  0xFF
#define GPIO_FUNC161_IN_SEL_S  0

#define GPIO_FUNC162_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x57C)
/* GPIO_SIG162_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG162_IN_SEL    (BIT(9))
#define GPIO_SIG162_IN_SEL_M  (BIT(9))
#define GPIO_SIG162_IN_SEL_V  0x1
#define GPIO_SIG162_IN_SEL_S  9
/* GPIO_FUNC162_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC162_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC162_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC162_IN_INV_SEL_V  0x1
#define GPIO_FUNC162_IN_INV_SEL_S  8
/* GPIO_FUNC162_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC162_IN_SEL    0x000000FF
#define GPIO_FUNC162_IN_SEL_M  ((GPIO_FUNC162_IN_SEL_V)<<(GPIO_FUNC162_IN_SEL_S))
#define GPIO_FUNC162_IN_SEL_V  0xFF
#define GPIO_FUNC162_IN_SEL_S  0

#define GPIO_FUNC163_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x580)
/* GPIO_SIG163_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG163_IN_SEL    (BIT(9))
#define GPIO_SIG163_IN_SEL_M  (BIT(9))
#define GPIO_SIG163_IN_SEL_V  0x1
#define GPIO_SIG163_IN_SEL_S  9
/* GPIO_FUNC163_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC163_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC163_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC163_IN_INV_SEL_V  0x1
#define GPIO_FUNC163_IN_INV_SEL_S  8
/* GPIO_FUNC163_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC163_IN_SEL    0x000000FF
#define GPIO_FUNC163_IN_SEL_M  ((GPIO_FUNC163_IN_SEL_V)<<(GPIO_FUNC163_IN_SEL_S))
#define GPIO_FUNC163_IN_SEL_V  0xFF
#define GPIO_FUNC163_IN_SEL_S  0

#define GPIO_FUNC164_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x584)
/* GPIO_SIG164_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG164_IN_SEL    (BIT(9))
#define GPIO_SIG164_IN_SEL_M  (BIT(9))
#define GPIO_SIG164_IN_SEL_V  0x1
#define GPIO_SIG164_IN_SEL_S  9
/* GPIO_FUNC164_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC164_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC164_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC164_IN_INV_SEL_V  0x1
#define GPIO_FUNC164_IN_INV_SEL_S  8
/* GPIO_FUNC164_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC164_IN_SEL    0x000000FF
#define GPIO_FUNC164_IN_SEL_M  ((GPIO_FUNC164_IN_SEL_V)<<(GPIO_FUNC164_IN_SEL_S))
#define GPIO_FUNC164_IN_SEL_V  0xFF
#define GPIO_FUNC164_IN_SEL_S  0

#define GPIO_FUNC165_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x588)
/* GPIO_SIG165_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG165_IN_SEL    (BIT(9))
#define GPIO_SIG165_IN_SEL_M  (BIT(9))
#define GPIO_SIG165_IN_SEL_V  0x1
#define GPIO_SIG165_IN_SEL_S  9
/* GPIO_FUNC165_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC165_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC165_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC165_IN_INV_SEL_V  0x1
#define GPIO_FUNC165_IN_INV_SEL_S  8
/* GPIO_FUNC165_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC165_IN_SEL    0x000000FF
#define GPIO_FUNC165_IN_SEL_M  ((GPIO_FUNC165_IN_SEL_V)<<(GPIO_FUNC165_IN_SEL_S))
#define GPIO_FUNC165_IN_SEL_V  0xFF
#define GPIO_FUNC165_IN_SEL_S  0

#define GPIO_FUNC166_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x58C)
/* GPIO_SIG166_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG166_IN_SEL    (BIT(9))
#define GPIO_SIG166_IN_SEL_M  (BIT(9))
#define GPIO_SIG166_IN_SEL_V  0x1
#define GPIO_SIG166_IN_SEL_S  9
/* GPIO_FUNC166_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC166_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC166_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC166_IN_INV_SEL_V  0x1
#define GPIO_FUNC166_IN_INV_SEL_S  8
/* GPIO_FUNC166_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC166_IN_SEL    0x000000FF
#define GPIO_FUNC166_IN_SEL_M  ((GPIO_FUNC166_IN_SEL_V)<<(GPIO_FUNC166_IN_SEL_S))
#define GPIO_FUNC166_IN_SEL_V  0xFF
#define GPIO_FUNC166_IN_SEL_S  0

#define GPIO_FUNC167_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x590)
/* GPIO_SIG167_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG167_IN_SEL    (BIT(9))
#define GPIO_SIG167_IN_SEL_M  (BIT(9))
#define GPIO_SIG167_IN_SEL_V  0x1
#define GPIO_SIG167_IN_SEL_S  9
/* GPIO_FUNC167_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC167_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC167_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC167_IN_INV_SEL_V  0x1
#define GPIO_FUNC167_IN_INV_SEL_S  8
/* GPIO_FUNC167_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC167_IN_SEL    0x000000FF
#define GPIO_FUNC167_IN_SEL_M  ((GPIO_FUNC167_IN_SEL_V)<<(GPIO_FUNC167_IN_SEL_S))
#define GPIO_FUNC167_IN_SEL_V  0xFF
#define GPIO_FUNC167_IN_SEL_S  0

#define GPIO_FUNC168_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x594)
/* GPIO_SIG168_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG168_IN_SEL    (BIT(9))
#define GPIO_SIG168_IN_SEL_M  (BIT(9))
#define GPIO_SIG168_IN_SEL_V  0x1
#define GPIO_SIG168_IN_SEL_S  9
/* GPIO_FUNC168_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC168_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC168_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC168_IN_INV_SEL_V  0x1
#define GPIO_FUNC168_IN_INV_SEL_S  8
/* GPIO_FUNC168_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC168_IN_SEL    0x000000FF
#define GPIO_FUNC168_IN_SEL_M  ((GPIO_FUNC168_IN_SEL_V)<<(GPIO_FUNC168_IN_SEL_S))
#define GPIO_FUNC168_IN_SEL_V  0xFF
#define GPIO_FUNC168_IN_SEL_S  0

#define GPIO_FUNC169_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x598)
/* GPIO_SIG169_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG169_IN_SEL    (BIT(9))
#define GPIO_SIG169_IN_SEL_M  (BIT(9))
#define GPIO_SIG169_IN_SEL_V  0x1
#define GPIO_SIG169_IN_SEL_S  9
/* GPIO_FUNC169_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC169_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC169_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC169_IN_INV_SEL_V  0x1
#define GPIO_FUNC169_IN_INV_SEL_S  8
/* GPIO_FUNC169_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC169_IN_SEL    0x000000FF
#define GPIO_FUNC169_IN_SEL_M  ((GPIO_FUNC169_IN_SEL_V)<<(GPIO_FUNC169_IN_SEL_S))
#define GPIO_FUNC169_IN_SEL_V  0xFF
#define GPIO_FUNC169_IN_SEL_S  0

#define GPIO_FUNC170_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x59C)
/* GPIO_SIG170_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG170_IN_SEL    (BIT(9))
#define GPIO_SIG170_IN_SEL_M  (BIT(9))
#define GPIO_SIG170_IN_SEL_V  0x1
#define GPIO_SIG170_IN_SEL_S  9
/* GPIO_FUNC170_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC170_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC170_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC170_IN_INV_SEL_V  0x1
#define GPIO_FUNC170_IN_INV_SEL_S  8
/* GPIO_FUNC170_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC170_IN_SEL    0x000000FF
#define GPIO_FUNC170_IN_SEL_M  ((GPIO_FUNC170_IN_SEL_V)<<(GPIO_FUNC170_IN_SEL_S))
#define GPIO_FUNC170_IN_SEL_V  0xFF
#define GPIO_FUNC170_IN_SEL_S  0

#define GPIO_FUNC171_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5A0)
/* GPIO_SIG171_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG171_IN_SEL    (BIT(9))
#define GPIO_SIG171_IN_SEL_M  (BIT(9))
#define GPIO_SIG171_IN_SEL_V  0x1
#define GPIO_SIG171_IN_SEL_S  9
/* GPIO_FUNC171_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC171_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC171_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC171_IN_INV_SEL_V  0x1
#define GPIO_FUNC171_IN_INV_SEL_S  8
/* GPIO_FUNC171_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC171_IN_SEL    0x000000FF
#define GPIO_FUNC171_IN_SEL_M  ((GPIO_FUNC171_IN_SEL_V)<<(GPIO_FUNC171_IN_SEL_S))
#define GPIO_FUNC171_IN_SEL_V  0xFF
#define GPIO_FUNC171_IN_SEL_S  0

#define GPIO_FUNC172_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5A4)
/* GPIO_SIG172_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG172_IN_SEL    (BIT(9))
#define GPIO_SIG172_IN_SEL_M  (BIT(9))
#define GPIO_SIG172_IN_SEL_V  0x1
#define GPIO_SIG172_IN_SEL_S  9
/* GPIO_FUNC172_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC172_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC172_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC172_IN_INV_SEL_V  0x1
#define GPIO_FUNC172_IN_INV_SEL_S  8
/* GPIO_FUNC172_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC172_IN_SEL    0x000000FF
#define GPIO_FUNC172_IN_SEL_M  ((GPIO_FUNC172_IN_SEL_V)<<(GPIO_FUNC172_IN_SEL_S))
#define GPIO_FUNC172_IN_SEL_V  0xFF
#define GPIO_FUNC172_IN_SEL_S  0

#define GPIO_FUNC173_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5A8)
/* GPIO_SIG173_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG173_IN_SEL    (BIT(9))
#define GPIO_SIG173_IN_SEL_M  (BIT(9))
#define GPIO_SIG173_IN_SEL_V  0x1
#define GPIO_SIG173_IN_SEL_S  9
/* GPIO_FUNC173_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC173_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC173_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC173_IN_INV_SEL_V  0x1
#define GPIO_FUNC173_IN_INV_SEL_S  8
/* GPIO_FUNC173_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC173_IN_SEL    0x000000FF
#define GPIO_FUNC173_IN_SEL_M  ((GPIO_FUNC173_IN_SEL_V)<<(GPIO_FUNC173_IN_SEL_S))
#define GPIO_FUNC173_IN_SEL_V  0xFF
#define GPIO_FUNC173_IN_SEL_S  0

#define GPIO_FUNC174_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5AC)
/* GPIO_SIG174_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG174_IN_SEL    (BIT(9))
#define GPIO_SIG174_IN_SEL_M  (BIT(9))
#define GPIO_SIG174_IN_SEL_V  0x1
#define GPIO_SIG174_IN_SEL_S  9
/* GPIO_FUNC174_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC174_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC174_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC174_IN_INV_SEL_V  0x1
#define GPIO_FUNC174_IN_INV_SEL_S  8
/* GPIO_FUNC174_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC174_IN_SEL    0x000000FF
#define GPIO_FUNC174_IN_SEL_M  ((GPIO_FUNC174_IN_SEL_V)<<(GPIO_FUNC174_IN_SEL_S))
#define GPIO_FUNC174_IN_SEL_V  0xFF
#define GPIO_FUNC174_IN_SEL_S  0

#define GPIO_FUNC175_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5B0)
/* GPIO_SIG175_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG175_IN_SEL    (BIT(9))
#define GPIO_SIG175_IN_SEL_M  (BIT(9))
#define GPIO_SIG175_IN_SEL_V  0x1
#define GPIO_SIG175_IN_SEL_S  9
/* GPIO_FUNC175_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC175_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC175_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC175_IN_INV_SEL_V  0x1
#define GPIO_FUNC175_IN_INV_SEL_S  8
/* GPIO_FUNC175_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC175_IN_SEL    0x000000FF
#define GPIO_FUNC175_IN_SEL_M  ((GPIO_FUNC175_IN_SEL_V)<<(GPIO_FUNC175_IN_SEL_S))
#define GPIO_FUNC175_IN_SEL_V  0xFF
#define GPIO_FUNC175_IN_SEL_S  0

#define GPIO_FUNC176_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5B4)
/* GPIO_SIG176_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG176_IN_SEL    (BIT(9))
#define GPIO_SIG176_IN_SEL_M  (BIT(9))
#define GPIO_SIG176_IN_SEL_V  0x1
#define GPIO_SIG176_IN_SEL_S  9
/* GPIO_FUNC176_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC176_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC176_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC176_IN_INV_SEL_V  0x1
#define GPIO_FUNC176_IN_INV_SEL_S  8
/* GPIO_FUNC176_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC176_IN_SEL    0x000000FF
#define GPIO_FUNC176_IN_SEL_M  ((GPIO_FUNC176_IN_SEL_V)<<(GPIO_FUNC176_IN_SEL_S))
#define GPIO_FUNC176_IN_SEL_V  0xFF
#define GPIO_FUNC176_IN_SEL_S  0

#define GPIO_FUNC177_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5B8)
/* GPIO_SIG177_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG177_IN_SEL    (BIT(9))
#define GPIO_SIG177_IN_SEL_M  (BIT(9))
#define GPIO_SIG177_IN_SEL_V  0x1
#define GPIO_SIG177_IN_SEL_S  9
/* GPIO_FUNC177_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC177_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC177_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC177_IN_INV_SEL_V  0x1
#define GPIO_FUNC177_IN_INV_SEL_S  8
/* GPIO_FUNC177_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $k
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC177_IN_SEL    0x000000FF
#define GPIO_FUNC177_IN_SEL_M  ((GPIO_FUNC177_IN_SEL_V)<<(GPIO_FUNC177_IN_SEL_S))
#define GPIO_FUNC177_IN_SEL_V  0xFF
#define GPIO_FUNC177_IN_SEL_S  0

#define GPIO_FUNC185_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5D8)
/* GPIO_SIG185_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG185_IN_SEL    (BIT(9))
#define GPIO_SIG185_IN_SEL_M  (BIT(9))
#define GPIO_SIG185_IN_SEL_V  0x1
#define GPIO_SIG185_IN_SEL_S  9
/* GPIO_FUNC185_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC185_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC185_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC185_IN_INV_SEL_V  0x1
#define GPIO_FUNC185_IN_INV_SEL_S  8
/* GPIO_FUNC185_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $l
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC185_IN_SEL    0x000000FF
#define GPIO_FUNC185_IN_SEL_M  ((GPIO_FUNC185_IN_SEL_V)<<(GPIO_FUNC185_IN_SEL_S))
#define GPIO_FUNC185_IN_SEL_V  0xFF
#define GPIO_FUNC185_IN_SEL_S  0

#define GPIO_FUNC186_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5DC)
/* GPIO_SIG186_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG186_IN_SEL    (BIT(9))
#define GPIO_SIG186_IN_SEL_M  (BIT(9))
#define GPIO_SIG186_IN_SEL_V  0x1
#define GPIO_SIG186_IN_SEL_S  9
/* GPIO_FUNC186_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC186_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC186_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC186_IN_INV_SEL_V  0x1
#define GPIO_FUNC186_IN_INV_SEL_S  8
/* GPIO_FUNC186_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $l
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC186_IN_SEL    0x000000FF
#define GPIO_FUNC186_IN_SEL_M  ((GPIO_FUNC186_IN_SEL_V)<<(GPIO_FUNC186_IN_SEL_S))
#define GPIO_FUNC186_IN_SEL_V  0xFF
#define GPIO_FUNC186_IN_SEL_S  0

#define GPIO_FUNC187_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5E0)
/* GPIO_SIG187_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG187_IN_SEL    (BIT(9))
#define GPIO_SIG187_IN_SEL_M  (BIT(9))
#define GPIO_SIG187_IN_SEL_V  0x1
#define GPIO_SIG187_IN_SEL_S  9
/* GPIO_FUNC187_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC187_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC187_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC187_IN_INV_SEL_V  0x1
#define GPIO_FUNC187_IN_INV_SEL_S  8
/* GPIO_FUNC187_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $l
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC187_IN_SEL    0x000000FF
#define GPIO_FUNC187_IN_SEL_M  ((GPIO_FUNC187_IN_SEL_V)<<(GPIO_FUNC187_IN_SEL_S))
#define GPIO_FUNC187_IN_SEL_V  0xFF
#define GPIO_FUNC187_IN_SEL_S  0

#define GPIO_FUNC188_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5E4)
/* GPIO_SIG188_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG188_IN_SEL    (BIT(9))
#define GPIO_SIG188_IN_SEL_M  (BIT(9))
#define GPIO_SIG188_IN_SEL_V  0x1
#define GPIO_SIG188_IN_SEL_S  9
/* GPIO_FUNC188_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC188_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC188_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC188_IN_INV_SEL_V  0x1
#define GPIO_FUNC188_IN_INV_SEL_S  8
/* GPIO_FUNC188_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $l
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC188_IN_SEL    0x000000FF
#define GPIO_FUNC188_IN_SEL_M  ((GPIO_FUNC188_IN_SEL_V)<<(GPIO_FUNC188_IN_SEL_S))
#define GPIO_FUNC188_IN_SEL_V  0xFF
#define GPIO_FUNC188_IN_SEL_S  0

#define GPIO_FUNC189_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5E8)
/* GPIO_SIG189_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG189_IN_SEL    (BIT(9))
#define GPIO_SIG189_IN_SEL_M  (BIT(9))
#define GPIO_SIG189_IN_SEL_V  0x1
#define GPIO_SIG189_IN_SEL_S  9
/* GPIO_FUNC189_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC189_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC189_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC189_IN_INV_SEL_V  0x1
#define GPIO_FUNC189_IN_INV_SEL_S  8
/* GPIO_FUNC189_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $l
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC189_IN_SEL    0x000000FF
#define GPIO_FUNC189_IN_SEL_M  ((GPIO_FUNC189_IN_SEL_V)<<(GPIO_FUNC189_IN_SEL_S))
#define GPIO_FUNC189_IN_SEL_V  0xFF
#define GPIO_FUNC189_IN_SEL_S  0

#define GPIO_FUNC190_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5EC)
/* GPIO_SIG190_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG190_IN_SEL    (BIT(9))
#define GPIO_SIG190_IN_SEL_M  (BIT(9))
#define GPIO_SIG190_IN_SEL_V  0x1
#define GPIO_SIG190_IN_SEL_S  9
/* GPIO_FUNC190_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC190_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC190_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC190_IN_INV_SEL_V  0x1
#define GPIO_FUNC190_IN_INV_SEL_S  8
/* GPIO_FUNC190_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $l
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC190_IN_SEL    0x000000FF
#define GPIO_FUNC190_IN_SEL_M  ((GPIO_FUNC190_IN_SEL_V)<<(GPIO_FUNC190_IN_SEL_S))
#define GPIO_FUNC190_IN_SEL_V  0xFF
#define GPIO_FUNC190_IN_SEL_S  0

#define GPIO_FUNC191_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5F0)
/* GPIO_SIG191_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG191_IN_SEL    (BIT(9))
#define GPIO_SIG191_IN_SEL_M  (BIT(9))
#define GPIO_SIG191_IN_SEL_V  0x1
#define GPIO_SIG191_IN_SEL_S  9
/* GPIO_FUNC191_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC191_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC191_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC191_IN_INV_SEL_V  0x1
#define GPIO_FUNC191_IN_INV_SEL_S  8
/* GPIO_FUNC191_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $l
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC191_IN_SEL    0x000000FF
#define GPIO_FUNC191_IN_SEL_M  ((GPIO_FUNC191_IN_SEL_V)<<(GPIO_FUNC191_IN_SEL_S))
#define GPIO_FUNC191_IN_SEL_V  0xFF
#define GPIO_FUNC191_IN_SEL_S  0

#define GPIO_FUNC192_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5F4)
/* GPIO_SIG192_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG192_IN_SEL    (BIT(9))
#define GPIO_SIG192_IN_SEL_M  (BIT(9))
#define GPIO_SIG192_IN_SEL_V  0x1
#define GPIO_SIG192_IN_SEL_S  9
/* GPIO_FUNC192_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC192_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC192_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC192_IN_INV_SEL_V  0x1
#define GPIO_FUNC192_IN_INV_SEL_S  8
/* GPIO_FUNC192_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $l
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC192_IN_SEL    0x000000FF
#define GPIO_FUNC192_IN_SEL_M  ((GPIO_FUNC192_IN_SEL_V)<<(GPIO_FUNC192_IN_SEL_S))
#define GPIO_FUNC192_IN_SEL_V  0xFF
#define GPIO_FUNC192_IN_SEL_S  0

#define GPIO_FUNC193_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x5F8)
/* GPIO_SIG193_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG193_IN_SEL    (BIT(9))
#define GPIO_SIG193_IN_SEL_M  (BIT(9))
#define GPIO_SIG193_IN_SEL_V  0x1
#define GPIO_SIG193_IN_SEL_S  9
/* GPIO_FUNC193_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC193_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC193_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC193_IN_INV_SEL_V  0x1
#define GPIO_FUNC193_IN_INV_SEL_S  8
/* GPIO_FUNC193_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $l
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC193_IN_SEL    0x000000FF
#define GPIO_FUNC193_IN_SEL_M  ((GPIO_FUNC193_IN_SEL_V)<<(GPIO_FUNC193_IN_SEL_S))
#define GPIO_FUNC193_IN_SEL_V  0xFF
#define GPIO_FUNC193_IN_SEL_S  0

#define GPIO_FUNC198_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x60C)
/* GPIO_SIG198_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG198_IN_SEL    (BIT(9))
#define GPIO_SIG198_IN_SEL_M  (BIT(9))
#define GPIO_SIG198_IN_SEL_V  0x1
#define GPIO_SIG198_IN_SEL_S  9
/* GPIO_FUNC198_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC198_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC198_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC198_IN_INV_SEL_V  0x1
#define GPIO_FUNC198_IN_INV_SEL_S  8
/* GPIO_FUNC198_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal 19
8.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123
: Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly lo
w input\\.*/
#define GPIO_FUNC198_IN_SEL    0x000000FF
#define GPIO_FUNC198_IN_SEL_M  ((GPIO_FUNC198_IN_SEL_V)<<(GPIO_FUNC198_IN_SEL_S))
#define GPIO_FUNC198_IN_SEL_V  0xFF
#define GPIO_FUNC198_IN_SEL_S  0

#define GPIO_FUNC214_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x64C)
/* GPIO_SIG214_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG214_IN_SEL    (BIT(9))
#define GPIO_SIG214_IN_SEL_M  (BIT(9))
#define GPIO_SIG214_IN_SEL_V  0x1
#define GPIO_SIG214_IN_SEL_S  9
/* GPIO_FUNC214_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC214_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC214_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC214_IN_INV_SEL_V  0x1
#define GPIO_FUNC214_IN_INV_SEL_S  8
/* GPIO_FUNC214_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC214_IN_SEL    0x000000FF
#define GPIO_FUNC214_IN_SEL_M  ((GPIO_FUNC214_IN_SEL_V)<<(GPIO_FUNC214_IN_SEL_S))
#define GPIO_FUNC214_IN_SEL_V  0xFF
#define GPIO_FUNC214_IN_SEL_S  0

#define GPIO_FUNC215_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x650)
/* GPIO_SIG215_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG215_IN_SEL    (BIT(9))
#define GPIO_SIG215_IN_SEL_M  (BIT(9))
#define GPIO_SIG215_IN_SEL_V  0x1
#define GPIO_SIG215_IN_SEL_S  9
/* GPIO_FUNC215_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC215_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC215_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC215_IN_INV_SEL_V  0x1
#define GPIO_FUNC215_IN_INV_SEL_S  8
/* GPIO_FUNC215_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC215_IN_SEL    0x000000FF
#define GPIO_FUNC215_IN_SEL_M  ((GPIO_FUNC215_IN_SEL_V)<<(GPIO_FUNC215_IN_SEL_S))
#define GPIO_FUNC215_IN_SEL_V  0xFF
#define GPIO_FUNC215_IN_SEL_S  0

#define GPIO_FUNC216_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x654)
/* GPIO_SIG216_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG216_IN_SEL    (BIT(9))
#define GPIO_SIG216_IN_SEL_M  (BIT(9))
#define GPIO_SIG216_IN_SEL_V  0x1
#define GPIO_SIG216_IN_SEL_S  9
/* GPIO_FUNC216_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC216_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC216_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC216_IN_INV_SEL_V  0x1
#define GPIO_FUNC216_IN_INV_SEL_S  8
/* GPIO_FUNC216_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC216_IN_SEL    0x000000FF
#define GPIO_FUNC216_IN_SEL_M  ((GPIO_FUNC216_IN_SEL_V)<<(GPIO_FUNC216_IN_SEL_S))
#define GPIO_FUNC216_IN_SEL_V  0xFF
#define GPIO_FUNC216_IN_SEL_S  0

#define GPIO_FUNC217_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x658)
/* GPIO_SIG217_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG217_IN_SEL    (BIT(9))
#define GPIO_SIG217_IN_SEL_M  (BIT(9))
#define GPIO_SIG217_IN_SEL_V  0x1
#define GPIO_SIG217_IN_SEL_S  9
/* GPIO_FUNC217_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC217_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC217_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC217_IN_INV_SEL_V  0x1
#define GPIO_FUNC217_IN_INV_SEL_S  8
/* GPIO_FUNC217_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC217_IN_SEL    0x000000FF
#define GPIO_FUNC217_IN_SEL_M  ((GPIO_FUNC217_IN_SEL_V)<<(GPIO_FUNC217_IN_SEL_S))
#define GPIO_FUNC217_IN_SEL_V  0xFF
#define GPIO_FUNC217_IN_SEL_S  0

#define GPIO_FUNC218_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x65C)
/* GPIO_SIG218_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG218_IN_SEL    (BIT(9))
#define GPIO_SIG218_IN_SEL_M  (BIT(9))
#define GPIO_SIG218_IN_SEL_V  0x1
#define GPIO_SIG218_IN_SEL_S  9
/* GPIO_FUNC218_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC218_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC218_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC218_IN_INV_SEL_V  0x1
#define GPIO_FUNC218_IN_INV_SEL_S  8
/* GPIO_FUNC218_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC218_IN_SEL    0x000000FF
#define GPIO_FUNC218_IN_SEL_M  ((GPIO_FUNC218_IN_SEL_V)<<(GPIO_FUNC218_IN_SEL_S))
#define GPIO_FUNC218_IN_SEL_V  0xFF
#define GPIO_FUNC218_IN_SEL_S  0

#define GPIO_FUNC219_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x660)
/* GPIO_SIG219_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG219_IN_SEL    (BIT(9))
#define GPIO_SIG219_IN_SEL_M  (BIT(9))
#define GPIO_SIG219_IN_SEL_V  0x1
#define GPIO_SIG219_IN_SEL_S  9
/* GPIO_FUNC219_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC219_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC219_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC219_IN_INV_SEL_V  0x1
#define GPIO_FUNC219_IN_INV_SEL_S  8
/* GPIO_FUNC219_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC219_IN_SEL    0x000000FF
#define GPIO_FUNC219_IN_SEL_M  ((GPIO_FUNC219_IN_SEL_V)<<(GPIO_FUNC219_IN_SEL_S))
#define GPIO_FUNC219_IN_SEL_V  0xFF
#define GPIO_FUNC219_IN_SEL_S  0

#define GPIO_FUNC220_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x664)
/* GPIO_SIG220_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG220_IN_SEL    (BIT(9))
#define GPIO_SIG220_IN_SEL_M  (BIT(9))
#define GPIO_SIG220_IN_SEL_V  0x1
#define GPIO_SIG220_IN_SEL_S  9
/* GPIO_FUNC220_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC220_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC220_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC220_IN_INV_SEL_V  0x1
#define GPIO_FUNC220_IN_INV_SEL_S  8
/* GPIO_FUNC220_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC220_IN_SEL    0x000000FF
#define GPIO_FUNC220_IN_SEL_M  ((GPIO_FUNC220_IN_SEL_V)<<(GPIO_FUNC220_IN_SEL_S))
#define GPIO_FUNC220_IN_SEL_V  0xFF
#define GPIO_FUNC220_IN_SEL_S  0

#define GPIO_FUNC221_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x668)
/* GPIO_SIG221_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG221_IN_SEL    (BIT(9))
#define GPIO_SIG221_IN_SEL_M  (BIT(9))
#define GPIO_SIG221_IN_SEL_V  0x1
#define GPIO_SIG221_IN_SEL_S  9
/* GPIO_FUNC221_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC221_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC221_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC221_IN_INV_SEL_V  0x1
#define GPIO_FUNC221_IN_INV_SEL_S  8
/* GPIO_FUNC221_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC221_IN_SEL    0x000000FF
#define GPIO_FUNC221_IN_SEL_M  ((GPIO_FUNC221_IN_SEL_V)<<(GPIO_FUNC221_IN_SEL_S))
#define GPIO_FUNC221_IN_SEL_V  0xFF
#define GPIO_FUNC221_IN_SEL_S  0

#define GPIO_FUNC222_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x66C)
/* GPIO_SIG222_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG222_IN_SEL    (BIT(9))
#define GPIO_SIG222_IN_SEL_M  (BIT(9))
#define GPIO_SIG222_IN_SEL_V  0x1
#define GPIO_SIG222_IN_SEL_S  9
/* GPIO_FUNC222_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC222_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC222_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC222_IN_INV_SEL_V  0x1
#define GPIO_FUNC222_IN_INV_SEL_S  8
/* GPIO_FUNC222_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC222_IN_SEL    0x000000FF
#define GPIO_FUNC222_IN_SEL_M  ((GPIO_FUNC222_IN_SEL_V)<<(GPIO_FUNC222_IN_SEL_S))
#define GPIO_FUNC222_IN_SEL_V  0xFF
#define GPIO_FUNC222_IN_SEL_S  0

#define GPIO_FUNC223_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x670)
/* GPIO_SIG223_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG223_IN_SEL    (BIT(9))
#define GPIO_SIG223_IN_SEL_M  (BIT(9))
#define GPIO_SIG223_IN_SEL_V  0x1
#define GPIO_SIG223_IN_SEL_S  9
/* GPIO_FUNC223_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC223_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC223_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC223_IN_INV_SEL_V  0x1
#define GPIO_FUNC223_IN_INV_SEL_S  8
/* GPIO_FUNC223_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC223_IN_SEL    0x000000FF
#define GPIO_FUNC223_IN_SEL_M  ((GPIO_FUNC223_IN_SEL_V)<<(GPIO_FUNC223_IN_SEL_S))
#define GPIO_FUNC223_IN_SEL_V  0xFF
#define GPIO_FUNC223_IN_SEL_S  0

#define GPIO_FUNC224_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x674)
/* GPIO_SIG224_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG224_IN_SEL    (BIT(9))
#define GPIO_SIG224_IN_SEL_M  (BIT(9))
#define GPIO_SIG224_IN_SEL_V  0x1
#define GPIO_SIG224_IN_SEL_S  9
/* GPIO_FUNC224_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC224_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC224_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC224_IN_INV_SEL_V  0x1
#define GPIO_FUNC224_IN_INV_SEL_S  8
/* GPIO_FUNC224_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC224_IN_SEL    0x000000FF
#define GPIO_FUNC224_IN_SEL_M  ((GPIO_FUNC224_IN_SEL_V)<<(GPIO_FUNC224_IN_SEL_S))
#define GPIO_FUNC224_IN_SEL_V  0xFF
#define GPIO_FUNC224_IN_SEL_S  0

#define GPIO_FUNC225_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x678)
/* GPIO_SIG225_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG225_IN_SEL    (BIT(9))
#define GPIO_SIG225_IN_SEL_M  (BIT(9))
#define GPIO_SIG225_IN_SEL_V  0x1
#define GPIO_SIG225_IN_SEL_S  9
/* GPIO_FUNC225_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC225_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC225_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC225_IN_INV_SEL_V  0x1
#define GPIO_FUNC225_IN_INV_SEL_S  8
/* GPIO_FUNC225_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC225_IN_SEL    0x000000FF
#define GPIO_FUNC225_IN_SEL_M  ((GPIO_FUNC225_IN_SEL_V)<<(GPIO_FUNC225_IN_SEL_S))
#define GPIO_FUNC225_IN_SEL_V  0xFF
#define GPIO_FUNC225_IN_SEL_S  0

#define GPIO_FUNC226_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x67C)
/* GPIO_SIG226_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG226_IN_SEL    (BIT(9))
#define GPIO_SIG226_IN_SEL_M  (BIT(9))
#define GPIO_SIG226_IN_SEL_V  0x1
#define GPIO_SIG226_IN_SEL_S  9
/* GPIO_FUNC226_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC226_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC226_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC226_IN_INV_SEL_V  0x1
#define GPIO_FUNC226_IN_INV_SEL_S  8
/* GPIO_FUNC226_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC226_IN_SEL    0x000000FF
#define GPIO_FUNC226_IN_SEL_M  ((GPIO_FUNC226_IN_SEL_V)<<(GPIO_FUNC226_IN_SEL_S))
#define GPIO_FUNC226_IN_SEL_V  0xFF
#define GPIO_FUNC226_IN_SEL_S  0

#define GPIO_FUNC227_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x680)
/* GPIO_SIG227_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG227_IN_SEL    (BIT(9))
#define GPIO_SIG227_IN_SEL_M  (BIT(9))
#define GPIO_SIG227_IN_SEL_V  0x1
#define GPIO_SIG227_IN_SEL_S  9
/* GPIO_FUNC227_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC227_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC227_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC227_IN_INV_SEL_V  0x1
#define GPIO_FUNC227_IN_INV_SEL_S  8
/* GPIO_FUNC227_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC227_IN_SEL    0x000000FF
#define GPIO_FUNC227_IN_SEL_M  ((GPIO_FUNC227_IN_SEL_V)<<(GPIO_FUNC227_IN_SEL_S))
#define GPIO_FUNC227_IN_SEL_V  0xFF
#define GPIO_FUNC227_IN_SEL_S  0

#define GPIO_FUNC228_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x684)
/* GPIO_SIG228_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG228_IN_SEL    (BIT(9))
#define GPIO_SIG228_IN_SEL_M  (BIT(9))
#define GPIO_SIG228_IN_SEL_V  0x1
#define GPIO_SIG228_IN_SEL_S  9
/* GPIO_FUNC228_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC228_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC228_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC228_IN_INV_SEL_V  0x1
#define GPIO_FUNC228_IN_INV_SEL_S  8
/* GPIO_FUNC228_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC228_IN_SEL    0x000000FF
#define GPIO_FUNC228_IN_SEL_M  ((GPIO_FUNC228_IN_SEL_V)<<(GPIO_FUNC228_IN_SEL_S))
#define GPIO_FUNC228_IN_SEL_V  0xFF
#define GPIO_FUNC228_IN_SEL_S  0

#define GPIO_FUNC229_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x688)
/* GPIO_SIG229_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG229_IN_SEL    (BIT(9))
#define GPIO_SIG229_IN_SEL_M  (BIT(9))
#define GPIO_SIG229_IN_SEL_V  0x1
#define GPIO_SIG229_IN_SEL_S  9
/* GPIO_FUNC229_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC229_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC229_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC229_IN_INV_SEL_V  0x1
#define GPIO_FUNC229_IN_INV_SEL_S  8
/* GPIO_FUNC229_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC229_IN_SEL    0x000000FF
#define GPIO_FUNC229_IN_SEL_M  ((GPIO_FUNC229_IN_SEL_V)<<(GPIO_FUNC229_IN_SEL_S))
#define GPIO_FUNC229_IN_SEL_V  0xFF
#define GPIO_FUNC229_IN_SEL_S  0

#define GPIO_FUNC230_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x68C)
/* GPIO_SIG230_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG230_IN_SEL    (BIT(9))
#define GPIO_SIG230_IN_SEL_M  (BIT(9))
#define GPIO_SIG230_IN_SEL_V  0x1
#define GPIO_SIG230_IN_SEL_S  9
/* GPIO_FUNC230_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC230_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC230_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC230_IN_INV_SEL_V  0x1
#define GPIO_FUNC230_IN_INV_SEL_S  8
/* GPIO_FUNC230_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC230_IN_SEL    0x000000FF
#define GPIO_FUNC230_IN_SEL_M  ((GPIO_FUNC230_IN_SEL_V)<<(GPIO_FUNC230_IN_SEL_S))
#define GPIO_FUNC230_IN_SEL_V  0xFF
#define GPIO_FUNC230_IN_SEL_S  0

#define GPIO_FUNC231_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x690)
/* GPIO_SIG231_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG231_IN_SEL    (BIT(9))
#define GPIO_SIG231_IN_SEL_M  (BIT(9))
#define GPIO_SIG231_IN_SEL_V  0x1
#define GPIO_SIG231_IN_SEL_S  9
/* GPIO_FUNC231_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC231_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC231_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC231_IN_INV_SEL_V  0x1
#define GPIO_FUNC231_IN_INV_SEL_S  8
/* GPIO_FUNC231_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC231_IN_SEL    0x000000FF
#define GPIO_FUNC231_IN_SEL_M  ((GPIO_FUNC231_IN_SEL_V)<<(GPIO_FUNC231_IN_SEL_S))
#define GPIO_FUNC231_IN_SEL_V  0xFF
#define GPIO_FUNC231_IN_SEL_S  0

#define GPIO_FUNC232_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x694)
/* GPIO_SIG232_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG232_IN_SEL    (BIT(9))
#define GPIO_SIG232_IN_SEL_M  (BIT(9))
#define GPIO_SIG232_IN_SEL_V  0x1
#define GPIO_SIG232_IN_SEL_S  9
/* GPIO_FUNC232_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC232_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC232_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC232_IN_INV_SEL_V  0x1
#define GPIO_FUNC232_IN_INV_SEL_S  8
/* GPIO_FUNC232_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC232_IN_SEL    0x000000FF
#define GPIO_FUNC232_IN_SEL_M  ((GPIO_FUNC232_IN_SEL_V)<<(GPIO_FUNC232_IN_SEL_S))
#define GPIO_FUNC232_IN_SEL_V  0xFF
#define GPIO_FUNC232_IN_SEL_S  0

#define GPIO_FUNC233_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x698)
/* GPIO_SIG233_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG233_IN_SEL    (BIT(9))
#define GPIO_SIG233_IN_SEL_M  (BIT(9))
#define GPIO_SIG233_IN_SEL_V  0x1
#define GPIO_SIG233_IN_SEL_S  9
/* GPIO_FUNC233_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC233_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC233_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC233_IN_INV_SEL_V  0x1
#define GPIO_FUNC233_IN_INV_SEL_S  8
/* GPIO_FUNC233_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC233_IN_SEL    0x000000FF
#define GPIO_FUNC233_IN_SEL_M  ((GPIO_FUNC233_IN_SEL_V)<<(GPIO_FUNC233_IN_SEL_S))
#define GPIO_FUNC233_IN_SEL_V  0xFF
#define GPIO_FUNC233_IN_SEL_S  0

#define GPIO_FUNC234_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x69C)
/* GPIO_SIG234_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG234_IN_SEL    (BIT(9))
#define GPIO_SIG234_IN_SEL_M  (BIT(9))
#define GPIO_SIG234_IN_SEL_V  0x1
#define GPIO_SIG234_IN_SEL_S  9
/* GPIO_FUNC234_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC234_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC234_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC234_IN_INV_SEL_V  0x1
#define GPIO_FUNC234_IN_INV_SEL_S  8
/* GPIO_FUNC234_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC234_IN_SEL    0x000000FF
#define GPIO_FUNC234_IN_SEL_M  ((GPIO_FUNC234_IN_SEL_V)<<(GPIO_FUNC234_IN_SEL_S))
#define GPIO_FUNC234_IN_SEL_V  0xFF
#define GPIO_FUNC234_IN_SEL_S  0

#define GPIO_FUNC235_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6A0)
/* GPIO_SIG235_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG235_IN_SEL    (BIT(9))
#define GPIO_SIG235_IN_SEL_M  (BIT(9))
#define GPIO_SIG235_IN_SEL_V  0x1
#define GPIO_SIG235_IN_SEL_S  9
/* GPIO_FUNC235_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC235_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC235_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC235_IN_INV_SEL_V  0x1
#define GPIO_FUNC235_IN_INV_SEL_S  8
/* GPIO_FUNC235_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC235_IN_SEL    0x000000FF
#define GPIO_FUNC235_IN_SEL_M  ((GPIO_FUNC235_IN_SEL_V)<<(GPIO_FUNC235_IN_SEL_S))
#define GPIO_FUNC235_IN_SEL_V  0xFF
#define GPIO_FUNC235_IN_SEL_S  0

#define GPIO_FUNC236_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6A4)
/* GPIO_SIG236_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG236_IN_SEL    (BIT(9))
#define GPIO_SIG236_IN_SEL_M  (BIT(9))
#define GPIO_SIG236_IN_SEL_V  0x1
#define GPIO_SIG236_IN_SEL_S  9
/* GPIO_FUNC236_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC236_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC236_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC236_IN_INV_SEL_V  0x1
#define GPIO_FUNC236_IN_INV_SEL_S  8
/* GPIO_FUNC236_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC236_IN_SEL    0x000000FF
#define GPIO_FUNC236_IN_SEL_M  ((GPIO_FUNC236_IN_SEL_V)<<(GPIO_FUNC236_IN_SEL_S))
#define GPIO_FUNC236_IN_SEL_V  0xFF
#define GPIO_FUNC236_IN_SEL_S  0

#define GPIO_FUNC237_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6A8)
/* GPIO_SIG237_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG237_IN_SEL    (BIT(9))
#define GPIO_SIG237_IN_SEL_M  (BIT(9))
#define GPIO_SIG237_IN_SEL_V  0x1
#define GPIO_SIG237_IN_SEL_S  9
/* GPIO_FUNC237_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC237_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC237_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC237_IN_INV_SEL_V  0x1
#define GPIO_FUNC237_IN_INV_SEL_S  8
/* GPIO_FUNC237_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC237_IN_SEL    0x000000FF
#define GPIO_FUNC237_IN_SEL_M  ((GPIO_FUNC237_IN_SEL_V)<<(GPIO_FUNC237_IN_SEL_S))
#define GPIO_FUNC237_IN_SEL_V  0xFF
#define GPIO_FUNC237_IN_SEL_S  0

#define GPIO_FUNC238_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6AC)
/* GPIO_SIG238_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG238_IN_SEL    (BIT(9))
#define GPIO_SIG238_IN_SEL_M  (BIT(9))
#define GPIO_SIG238_IN_SEL_V  0x1
#define GPIO_SIG238_IN_SEL_S  9
/* GPIO_FUNC238_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC238_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC238_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC238_IN_INV_SEL_V  0x1
#define GPIO_FUNC238_IN_INV_SEL_S  8
/* GPIO_FUNC238_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC238_IN_SEL    0x000000FF
#define GPIO_FUNC238_IN_SEL_M  ((GPIO_FUNC238_IN_SEL_V)<<(GPIO_FUNC238_IN_SEL_S))
#define GPIO_FUNC238_IN_SEL_V  0xFF
#define GPIO_FUNC238_IN_SEL_S  0

#define GPIO_FUNC239_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6B0)
/* GPIO_SIG239_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG239_IN_SEL    (BIT(9))
#define GPIO_SIG239_IN_SEL_M  (BIT(9))
#define GPIO_SIG239_IN_SEL_V  0x1
#define GPIO_SIG239_IN_SEL_S  9
/* GPIO_FUNC239_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC239_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC239_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC239_IN_INV_SEL_V  0x1
#define GPIO_FUNC239_IN_INV_SEL_S  8
/* GPIO_FUNC239_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC239_IN_SEL    0x000000FF
#define GPIO_FUNC239_IN_SEL_M  ((GPIO_FUNC239_IN_SEL_V)<<(GPIO_FUNC239_IN_SEL_S))
#define GPIO_FUNC239_IN_SEL_V  0xFF
#define GPIO_FUNC239_IN_SEL_S  0

#define GPIO_FUNC240_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6B4)
/* GPIO_SIG240_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG240_IN_SEL    (BIT(9))
#define GPIO_SIG240_IN_SEL_M  (BIT(9))
#define GPIO_SIG240_IN_SEL_V  0x1
#define GPIO_SIG240_IN_SEL_S  9
/* GPIO_FUNC240_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC240_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC240_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC240_IN_INV_SEL_V  0x1
#define GPIO_FUNC240_IN_INV_SEL_S  8
/* GPIO_FUNC240_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC240_IN_SEL    0x000000FF
#define GPIO_FUNC240_IN_SEL_M  ((GPIO_FUNC240_IN_SEL_V)<<(GPIO_FUNC240_IN_SEL_S))
#define GPIO_FUNC240_IN_SEL_V  0xFF
#define GPIO_FUNC240_IN_SEL_S  0

#define GPIO_FUNC241_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6B8)
/* GPIO_SIG241_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG241_IN_SEL    (BIT(9))
#define GPIO_SIG241_IN_SEL_M  (BIT(9))
#define GPIO_SIG241_IN_SEL_V  0x1
#define GPIO_SIG241_IN_SEL_S  9
/* GPIO_FUNC241_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC241_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC241_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC241_IN_INV_SEL_V  0x1
#define GPIO_FUNC241_IN_INV_SEL_S  8
/* GPIO_FUNC241_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC241_IN_SEL    0x000000FF
#define GPIO_FUNC241_IN_SEL_M  ((GPIO_FUNC241_IN_SEL_V)<<(GPIO_FUNC241_IN_SEL_S))
#define GPIO_FUNC241_IN_SEL_V  0xFF
#define GPIO_FUNC241_IN_SEL_S  0

#define GPIO_FUNC242_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6BC)
/* GPIO_SIG242_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG242_IN_SEL    (BIT(9))
#define GPIO_SIG242_IN_SEL_M  (BIT(9))
#define GPIO_SIG242_IN_SEL_V  0x1
#define GPIO_SIG242_IN_SEL_S  9
/* GPIO_FUNC242_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC242_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC242_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC242_IN_INV_SEL_V  0x1
#define GPIO_FUNC242_IN_INV_SEL_S  8
/* GPIO_FUNC242_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC242_IN_SEL    0x000000FF
#define GPIO_FUNC242_IN_SEL_M  ((GPIO_FUNC242_IN_SEL_V)<<(GPIO_FUNC242_IN_SEL_S))
#define GPIO_FUNC242_IN_SEL_V  0xFF
#define GPIO_FUNC242_IN_SEL_S  0

#define GPIO_FUNC243_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6C0)
/* GPIO_SIG243_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG243_IN_SEL    (BIT(9))
#define GPIO_SIG243_IN_SEL_M  (BIT(9))
#define GPIO_SIG243_IN_SEL_V  0x1
#define GPIO_SIG243_IN_SEL_S  9
/* GPIO_FUNC243_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC243_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC243_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC243_IN_INV_SEL_V  0x1
#define GPIO_FUNC243_IN_INV_SEL_S  8
/* GPIO_FUNC243_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC243_IN_SEL    0x000000FF
#define GPIO_FUNC243_IN_SEL_M  ((GPIO_FUNC243_IN_SEL_V)<<(GPIO_FUNC243_IN_SEL_S))
#define GPIO_FUNC243_IN_SEL_V  0xFF
#define GPIO_FUNC243_IN_SEL_S  0

#define GPIO_FUNC244_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6C4)
/* GPIO_SIG244_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG244_IN_SEL    (BIT(9))
#define GPIO_SIG244_IN_SEL_M  (BIT(9))
#define GPIO_SIG244_IN_SEL_V  0x1
#define GPIO_SIG244_IN_SEL_S  9
/* GPIO_FUNC244_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC244_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC244_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC244_IN_INV_SEL_V  0x1
#define GPIO_FUNC244_IN_INV_SEL_S  8
/* GPIO_FUNC244_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC244_IN_SEL    0x000000FF
#define GPIO_FUNC244_IN_SEL_M  ((GPIO_FUNC244_IN_SEL_V)<<(GPIO_FUNC244_IN_SEL_S))
#define GPIO_FUNC244_IN_SEL_V  0xFF
#define GPIO_FUNC244_IN_SEL_S  0

#define GPIO_FUNC245_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6C8)
/* GPIO_SIG245_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG245_IN_SEL    (BIT(9))
#define GPIO_SIG245_IN_SEL_M  (BIT(9))
#define GPIO_SIG245_IN_SEL_V  0x1
#define GPIO_SIG245_IN_SEL_S  9
/* GPIO_FUNC245_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC245_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC245_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC245_IN_INV_SEL_V  0x1
#define GPIO_FUNC245_IN_INV_SEL_S  8
/* GPIO_FUNC245_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC245_IN_SEL    0x000000FF
#define GPIO_FUNC245_IN_SEL_M  ((GPIO_FUNC245_IN_SEL_V)<<(GPIO_FUNC245_IN_SEL_S))
#define GPIO_FUNC245_IN_SEL_V  0xFF
#define GPIO_FUNC245_IN_SEL_S  0

#define GPIO_FUNC246_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6CC)
/* GPIO_SIG246_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG246_IN_SEL    (BIT(9))
#define GPIO_SIG246_IN_SEL_M  (BIT(9))
#define GPIO_SIG246_IN_SEL_V  0x1
#define GPIO_SIG246_IN_SEL_S  9
/* GPIO_FUNC246_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC246_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC246_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC246_IN_INV_SEL_V  0x1
#define GPIO_FUNC246_IN_INV_SEL_S  8
/* GPIO_FUNC246_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC246_IN_SEL    0x000000FF
#define GPIO_FUNC246_IN_SEL_M  ((GPIO_FUNC246_IN_SEL_V)<<(GPIO_FUNC246_IN_SEL_S))
#define GPIO_FUNC246_IN_SEL_V  0xFF
#define GPIO_FUNC246_IN_SEL_S  0

#define GPIO_FUNC247_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6D0)
/* GPIO_SIG247_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG247_IN_SEL    (BIT(9))
#define GPIO_SIG247_IN_SEL_M  (BIT(9))
#define GPIO_SIG247_IN_SEL_V  0x1
#define GPIO_SIG247_IN_SEL_S  9
/* GPIO_FUNC247_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC247_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC247_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC247_IN_INV_SEL_V  0x1
#define GPIO_FUNC247_IN_INV_SEL_S  8
/* GPIO_FUNC247_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC247_IN_SEL    0x000000FF
#define GPIO_FUNC247_IN_SEL_M  ((GPIO_FUNC247_IN_SEL_V)<<(GPIO_FUNC247_IN_SEL_S))
#define GPIO_FUNC247_IN_SEL_V  0xFF
#define GPIO_FUNC247_IN_SEL_S  0

#define GPIO_FUNC248_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6D4)
/* GPIO_SIG248_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG248_IN_SEL    (BIT(9))
#define GPIO_SIG248_IN_SEL_M  (BIT(9))
#define GPIO_SIG248_IN_SEL_V  0x1
#define GPIO_SIG248_IN_SEL_S  9
/* GPIO_FUNC248_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC248_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC248_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC248_IN_INV_SEL_V  0x1
#define GPIO_FUNC248_IN_INV_SEL_S  8
/* GPIO_FUNC248_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC248_IN_SEL    0x000000FF
#define GPIO_FUNC248_IN_SEL_M  ((GPIO_FUNC248_IN_SEL_V)<<(GPIO_FUNC248_IN_SEL_S))
#define GPIO_FUNC248_IN_SEL_V  0xFF
#define GPIO_FUNC248_IN_SEL_S  0

#define GPIO_FUNC249_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6D8)
/* GPIO_SIG249_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG249_IN_SEL    (BIT(9))
#define GPIO_SIG249_IN_SEL_M  (BIT(9))
#define GPIO_SIG249_IN_SEL_V  0x1
#define GPIO_SIG249_IN_SEL_S  9
/* GPIO_FUNC249_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC249_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC249_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC249_IN_INV_SEL_V  0x1
#define GPIO_FUNC249_IN_INV_SEL_S  8
/* GPIO_FUNC249_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $m
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC249_IN_SEL    0x000000FF
#define GPIO_FUNC249_IN_SEL_M  ((GPIO_FUNC249_IN_SEL_V)<<(GPIO_FUNC249_IN_SEL_S))
#define GPIO_FUNC249_IN_SEL_V  0xFF
#define GPIO_FUNC249_IN_SEL_S  0

#define GPIO_FUNC251_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6E0)
/* GPIO_SIG251_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG251_IN_SEL    (BIT(9))
#define GPIO_SIG251_IN_SEL_M  (BIT(9))
#define GPIO_SIG251_IN_SEL_V  0x1
#define GPIO_SIG251_IN_SEL_S  9
/* GPIO_FUNC251_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC251_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC251_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC251_IN_INV_SEL_V  0x1
#define GPIO_FUNC251_IN_INV_SEL_S  8
/* GPIO_FUNC251_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $n
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC251_IN_SEL    0x000000FF
#define GPIO_FUNC251_IN_SEL_M  ((GPIO_FUNC251_IN_SEL_V)<<(GPIO_FUNC251_IN_SEL_S))
#define GPIO_FUNC251_IN_SEL_V  0xFF
#define GPIO_FUNC251_IN_SEL_S  0

#define GPIO_FUNC252_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6E4)
/* GPIO_SIG252_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG252_IN_SEL    (BIT(9))
#define GPIO_SIG252_IN_SEL_M  (BIT(9))
#define GPIO_SIG252_IN_SEL_V  0x1
#define GPIO_SIG252_IN_SEL_S  9
/* GPIO_FUNC252_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC252_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC252_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC252_IN_INV_SEL_V  0x1
#define GPIO_FUNC252_IN_INV_SEL_S  8
/* GPIO_FUNC252_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $n
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC252_IN_SEL    0x000000FF
#define GPIO_FUNC252_IN_SEL_M  ((GPIO_FUNC252_IN_SEL_V)<<(GPIO_FUNC252_IN_SEL_S))
#define GPIO_FUNC252_IN_SEL_V  0xFF
#define GPIO_FUNC252_IN_SEL_S  0

#define GPIO_FUNC253_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6E8)
/* GPIO_SIG253_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG253_IN_SEL    (BIT(9))
#define GPIO_SIG253_IN_SEL_M  (BIT(9))
#define GPIO_SIG253_IN_SEL_V  0x1
#define GPIO_SIG253_IN_SEL_S  9
/* GPIO_FUNC253_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC253_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC253_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC253_IN_INV_SEL_V  0x1
#define GPIO_FUNC253_IN_INV_SEL_S  8
/* GPIO_FUNC253_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $n
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC253_IN_SEL    0x000000FF
#define GPIO_FUNC253_IN_SEL_M  ((GPIO_FUNC253_IN_SEL_V)<<(GPIO_FUNC253_IN_SEL_S))
#define GPIO_FUNC253_IN_SEL_V  0xFF
#define GPIO_FUNC253_IN_SEL_S  0

#define GPIO_FUNC254_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6EC)
/* GPIO_SIG254_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG254_IN_SEL    (BIT(9))
#define GPIO_SIG254_IN_SEL_M  (BIT(9))
#define GPIO_SIG254_IN_SEL_V  0x1
#define GPIO_SIG254_IN_SEL_S  9
/* GPIO_FUNC254_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC254_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC254_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC254_IN_INV_SEL_V  0x1
#define GPIO_FUNC254_IN_INV_SEL_S  8
/* GPIO_FUNC254_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $n
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC254_IN_SEL    0x000000FF
#define GPIO_FUNC254_IN_SEL_M  ((GPIO_FUNC254_IN_SEL_V)<<(GPIO_FUNC254_IN_SEL_S))
#define GPIO_FUNC254_IN_SEL_V  0xFF
#define GPIO_FUNC254_IN_SEL_S  0

#define GPIO_FUNC255_IN_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0x6F0)
/* GPIO_SIG255_IN_SEL : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to route signals via GPIO matrix.\\; 0: Bypass GPIO ma
trix, i.e., connect signals directly to peripheral configured in IO MUX.\\; 1: R
oute signals via GPIO matrix.\\.*/
#define GPIO_SIG255_IN_SEL    (BIT(9))
#define GPIO_SIG255_IN_SEL_M  (BIT(9))
#define GPIO_SIG255_IN_SEL_V  0x1
#define GPIO_SIG255_IN_SEL_S  9
/* GPIO_FUNC255_IN_INV_SEL : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the input value.\\; 0: Not invert\\; 1: Inve
rt\\.*/
#define GPIO_FUNC255_IN_INV_SEL    (BIT(8))
#define GPIO_FUNC255_IN_INV_SEL_M  (BIT(8))
#define GPIO_FUNC255_IN_INV_SEL_V  0x1
#define GPIO_FUNC255_IN_INV_SEL_S  8
/* GPIO_FUNC255_IN_SEL : R/W ;bitpos:[7:0] ;default: 8'hc0 ; */
/*description: Configures to select a pin from the 124 GPIO pins to connect the input signal $n
.\\; 0: Select GPIO0\\; 1: Select GPIO1\\; ......\\; 122: Select GPIO122\\; 123:
 Select GPIO123\\; Or\\; 0x80: A constantly high input\\; 0xc0: A constantly low
 input\\.*/
#define GPIO_FUNC255_IN_SEL    0x000000FF
#define GPIO_FUNC255_IN_SEL_M  ((GPIO_FUNC255_IN_SEL_V)<<(GPIO_FUNC255_IN_SEL_S))
#define GPIO_FUNC255_IN_SEL_V  0xFF
#define GPIO_FUNC255_IN_SEL_S  0

#define GPIO_FUNC0_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xAF4)
/* GPIO_FUNC0_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC0_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC0_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC0_OE_INV_SEL_V  0x1
#define GPIO_FUNC0_OE_INV_SEL_S  11
/* GPIO_FUNC0_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC0_OE_SEL    (BIT(10))
#define GPIO_FUNC0_OE_SEL_M  (BIT(10))
#define GPIO_FUNC0_OE_SEL_V  0x1
#define GPIO_FUNC0_OE_SEL_S  10
/* GPIO_FUNC0_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC0_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC0_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC0_OUT_INV_SEL_V  0x1
#define GPIO_FUNC0_OUT_INV_SEL_S  9
/* GPIO_FUNC0_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC0_OUT_SEL    0x000001FF
#define GPIO_FUNC0_OUT_SEL_M  ((GPIO_FUNC0_OUT_SEL_V)<<(GPIO_FUNC0_OUT_SEL_S))
#define GPIO_FUNC0_OUT_SEL_V  0x1FF
#define GPIO_FUNC0_OUT_SEL_S  0

#define GPIO_FUNC1_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xAF8)
/* GPIO_FUNC1_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC1_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC1_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC1_OE_INV_SEL_V  0x1
#define GPIO_FUNC1_OE_INV_SEL_S  11
/* GPIO_FUNC1_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC1_OE_SEL    (BIT(10))
#define GPIO_FUNC1_OE_SEL_M  (BIT(10))
#define GPIO_FUNC1_OE_SEL_V  0x1
#define GPIO_FUNC1_OE_SEL_S  10
/* GPIO_FUNC1_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC1_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC1_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC1_OUT_INV_SEL_V  0x1
#define GPIO_FUNC1_OUT_INV_SEL_S  9
/* GPIO_FUNC1_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC1_OUT_SEL    0x000001FF
#define GPIO_FUNC1_OUT_SEL_M  ((GPIO_FUNC1_OUT_SEL_V)<<(GPIO_FUNC1_OUT_SEL_S))
#define GPIO_FUNC1_OUT_SEL_V  0x1FF
#define GPIO_FUNC1_OUT_SEL_S  0

#define GPIO_FUNC2_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xAFC)
/* GPIO_FUNC2_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC2_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC2_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC2_OE_INV_SEL_V  0x1
#define GPIO_FUNC2_OE_INV_SEL_S  11
/* GPIO_FUNC2_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC2_OE_SEL    (BIT(10))
#define GPIO_FUNC2_OE_SEL_M  (BIT(10))
#define GPIO_FUNC2_OE_SEL_V  0x1
#define GPIO_FUNC2_OE_SEL_S  10
/* GPIO_FUNC2_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC2_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC2_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC2_OUT_INV_SEL_V  0x1
#define GPIO_FUNC2_OUT_INV_SEL_S  9
/* GPIO_FUNC2_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC2_OUT_SEL    0x000001FF
#define GPIO_FUNC2_OUT_SEL_M  ((GPIO_FUNC2_OUT_SEL_V)<<(GPIO_FUNC2_OUT_SEL_S))
#define GPIO_FUNC2_OUT_SEL_V  0x1FF
#define GPIO_FUNC2_OUT_SEL_S  0

#define GPIO_FUNC3_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB00)
/* GPIO_FUNC3_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC3_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC3_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC3_OE_INV_SEL_V  0x1
#define GPIO_FUNC3_OE_INV_SEL_S  11
/* GPIO_FUNC3_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC3_OE_SEL    (BIT(10))
#define GPIO_FUNC3_OE_SEL_M  (BIT(10))
#define GPIO_FUNC3_OE_SEL_V  0x1
#define GPIO_FUNC3_OE_SEL_S  10
/* GPIO_FUNC3_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC3_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC3_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC3_OUT_INV_SEL_V  0x1
#define GPIO_FUNC3_OUT_INV_SEL_S  9
/* GPIO_FUNC3_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC3_OUT_SEL    0x000001FF
#define GPIO_FUNC3_OUT_SEL_M  ((GPIO_FUNC3_OUT_SEL_V)<<(GPIO_FUNC3_OUT_SEL_S))
#define GPIO_FUNC3_OUT_SEL_V  0x1FF
#define GPIO_FUNC3_OUT_SEL_S  0

#define GPIO_FUNC4_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB04)
/* GPIO_FUNC4_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC4_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC4_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC4_OE_INV_SEL_V  0x1
#define GPIO_FUNC4_OE_INV_SEL_S  11
/* GPIO_FUNC4_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC4_OE_SEL    (BIT(10))
#define GPIO_FUNC4_OE_SEL_M  (BIT(10))
#define GPIO_FUNC4_OE_SEL_V  0x1
#define GPIO_FUNC4_OE_SEL_S  10
/* GPIO_FUNC4_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC4_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC4_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC4_OUT_INV_SEL_V  0x1
#define GPIO_FUNC4_OUT_INV_SEL_S  9
/* GPIO_FUNC4_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC4_OUT_SEL    0x000001FF
#define GPIO_FUNC4_OUT_SEL_M  ((GPIO_FUNC4_OUT_SEL_V)<<(GPIO_FUNC4_OUT_SEL_S))
#define GPIO_FUNC4_OUT_SEL_V  0x1FF
#define GPIO_FUNC4_OUT_SEL_S  0

#define GPIO_FUNC5_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB08)
/* GPIO_FUNC5_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC5_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC5_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC5_OE_INV_SEL_V  0x1
#define GPIO_FUNC5_OE_INV_SEL_S  11
/* GPIO_FUNC5_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC5_OE_SEL    (BIT(10))
#define GPIO_FUNC5_OE_SEL_M  (BIT(10))
#define GPIO_FUNC5_OE_SEL_V  0x1
#define GPIO_FUNC5_OE_SEL_S  10
/* GPIO_FUNC5_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC5_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC5_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC5_OUT_INV_SEL_V  0x1
#define GPIO_FUNC5_OUT_INV_SEL_S  9
/* GPIO_FUNC5_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC5_OUT_SEL    0x000001FF
#define GPIO_FUNC5_OUT_SEL_M  ((GPIO_FUNC5_OUT_SEL_V)<<(GPIO_FUNC5_OUT_SEL_S))
#define GPIO_FUNC5_OUT_SEL_V  0x1FF
#define GPIO_FUNC5_OUT_SEL_S  0

#define GPIO_FUNC6_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB0C)
/* GPIO_FUNC6_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC6_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC6_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC6_OE_INV_SEL_V  0x1
#define GPIO_FUNC6_OE_INV_SEL_S  11
/* GPIO_FUNC6_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC6_OE_SEL    (BIT(10))
#define GPIO_FUNC6_OE_SEL_M  (BIT(10))
#define GPIO_FUNC6_OE_SEL_V  0x1
#define GPIO_FUNC6_OE_SEL_S  10
/* GPIO_FUNC6_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC6_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC6_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC6_OUT_INV_SEL_V  0x1
#define GPIO_FUNC6_OUT_INV_SEL_S  9
/* GPIO_FUNC6_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC6_OUT_SEL    0x000001FF
#define GPIO_FUNC6_OUT_SEL_M  ((GPIO_FUNC6_OUT_SEL_V)<<(GPIO_FUNC6_OUT_SEL_S))
#define GPIO_FUNC6_OUT_SEL_V  0x1FF
#define GPIO_FUNC6_OUT_SEL_S  0

#define GPIO_FUNC7_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB10)
/* GPIO_FUNC7_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC7_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC7_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC7_OE_INV_SEL_V  0x1
#define GPIO_FUNC7_OE_INV_SEL_S  11
/* GPIO_FUNC7_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC7_OE_SEL    (BIT(10))
#define GPIO_FUNC7_OE_SEL_M  (BIT(10))
#define GPIO_FUNC7_OE_SEL_V  0x1
#define GPIO_FUNC7_OE_SEL_S  10
/* GPIO_FUNC7_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC7_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC7_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC7_OUT_INV_SEL_V  0x1
#define GPIO_FUNC7_OUT_INV_SEL_S  9
/* GPIO_FUNC7_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC7_OUT_SEL    0x000001FF
#define GPIO_FUNC7_OUT_SEL_M  ((GPIO_FUNC7_OUT_SEL_V)<<(GPIO_FUNC7_OUT_SEL_S))
#define GPIO_FUNC7_OUT_SEL_V  0x1FF
#define GPIO_FUNC7_OUT_SEL_S  0

#define GPIO_FUNC8_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB14)
/* GPIO_FUNC8_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC8_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC8_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC8_OE_INV_SEL_V  0x1
#define GPIO_FUNC8_OE_INV_SEL_S  11
/* GPIO_FUNC8_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC8_OE_SEL    (BIT(10))
#define GPIO_FUNC8_OE_SEL_M  (BIT(10))
#define GPIO_FUNC8_OE_SEL_V  0x1
#define GPIO_FUNC8_OE_SEL_S  10
/* GPIO_FUNC8_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC8_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC8_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC8_OUT_INV_SEL_V  0x1
#define GPIO_FUNC8_OUT_INV_SEL_S  9
/* GPIO_FUNC8_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC8_OUT_SEL    0x000001FF
#define GPIO_FUNC8_OUT_SEL_M  ((GPIO_FUNC8_OUT_SEL_V)<<(GPIO_FUNC8_OUT_SEL_S))
#define GPIO_FUNC8_OUT_SEL_V  0x1FF
#define GPIO_FUNC8_OUT_SEL_S  0

#define GPIO_FUNC9_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB18)
/* GPIO_FUNC9_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC9_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC9_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC9_OE_INV_SEL_V  0x1
#define GPIO_FUNC9_OE_INV_SEL_S  11
/* GPIO_FUNC9_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC9_OE_SEL    (BIT(10))
#define GPIO_FUNC9_OE_SEL_M  (BIT(10))
#define GPIO_FUNC9_OE_SEL_V  0x1
#define GPIO_FUNC9_OE_SEL_S  10
/* GPIO_FUNC9_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC9_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC9_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC9_OUT_INV_SEL_V  0x1
#define GPIO_FUNC9_OUT_INV_SEL_S  9
/* GPIO_FUNC9_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC9_OUT_SEL    0x000001FF
#define GPIO_FUNC9_OUT_SEL_M  ((GPIO_FUNC9_OUT_SEL_V)<<(GPIO_FUNC9_OUT_SEL_S))
#define GPIO_FUNC9_OUT_SEL_V  0x1FF
#define GPIO_FUNC9_OUT_SEL_S  0

#define GPIO_FUNC10_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB1C)
/* GPIO_FUNC10_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC10_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC10_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC10_OE_INV_SEL_V  0x1
#define GPIO_FUNC10_OE_INV_SEL_S  11
/* GPIO_FUNC10_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC10_OE_SEL    (BIT(10))
#define GPIO_FUNC10_OE_SEL_M  (BIT(10))
#define GPIO_FUNC10_OE_SEL_V  0x1
#define GPIO_FUNC10_OE_SEL_S  10
/* GPIO_FUNC10_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC10_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC10_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC10_OUT_INV_SEL_V  0x1
#define GPIO_FUNC10_OUT_INV_SEL_S  9
/* GPIO_FUNC10_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC10_OUT_SEL    0x000001FF
#define GPIO_FUNC10_OUT_SEL_M  ((GPIO_FUNC10_OUT_SEL_V)<<(GPIO_FUNC10_OUT_SEL_S))
#define GPIO_FUNC10_OUT_SEL_V  0x1FF
#define GPIO_FUNC10_OUT_SEL_S  0

#define GPIO_FUNC11_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB20)
/* GPIO_FUNC11_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC11_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC11_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC11_OE_INV_SEL_V  0x1
#define GPIO_FUNC11_OE_INV_SEL_S  11
/* GPIO_FUNC11_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC11_OE_SEL    (BIT(10))
#define GPIO_FUNC11_OE_SEL_M  (BIT(10))
#define GPIO_FUNC11_OE_SEL_V  0x1
#define GPIO_FUNC11_OE_SEL_S  10
/* GPIO_FUNC11_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC11_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC11_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC11_OUT_INV_SEL_V  0x1
#define GPIO_FUNC11_OUT_INV_SEL_S  9
/* GPIO_FUNC11_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC11_OUT_SEL    0x000001FF
#define GPIO_FUNC11_OUT_SEL_M  ((GPIO_FUNC11_OUT_SEL_V)<<(GPIO_FUNC11_OUT_SEL_S))
#define GPIO_FUNC11_OUT_SEL_V  0x1FF
#define GPIO_FUNC11_OUT_SEL_S  0

#define GPIO_FUNC12_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB24)
/* GPIO_FUNC12_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC12_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC12_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC12_OE_INV_SEL_V  0x1
#define GPIO_FUNC12_OE_INV_SEL_S  11
/* GPIO_FUNC12_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC12_OE_SEL    (BIT(10))
#define GPIO_FUNC12_OE_SEL_M  (BIT(10))
#define GPIO_FUNC12_OE_SEL_V  0x1
#define GPIO_FUNC12_OE_SEL_S  10
/* GPIO_FUNC12_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC12_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC12_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC12_OUT_INV_SEL_V  0x1
#define GPIO_FUNC12_OUT_INV_SEL_S  9
/* GPIO_FUNC12_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC12_OUT_SEL    0x000001FF
#define GPIO_FUNC12_OUT_SEL_M  ((GPIO_FUNC12_OUT_SEL_V)<<(GPIO_FUNC12_OUT_SEL_S))
#define GPIO_FUNC12_OUT_SEL_V  0x1FF
#define GPIO_FUNC12_OUT_SEL_S  0

#define GPIO_FUNC13_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB28)
/* GPIO_FUNC13_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC13_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC13_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC13_OE_INV_SEL_V  0x1
#define GPIO_FUNC13_OE_INV_SEL_S  11
/* GPIO_FUNC13_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC13_OE_SEL    (BIT(10))
#define GPIO_FUNC13_OE_SEL_M  (BIT(10))
#define GPIO_FUNC13_OE_SEL_V  0x1
#define GPIO_FUNC13_OE_SEL_S  10
/* GPIO_FUNC13_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC13_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC13_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC13_OUT_INV_SEL_V  0x1
#define GPIO_FUNC13_OUT_INV_SEL_S  9
/* GPIO_FUNC13_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC13_OUT_SEL    0x000001FF
#define GPIO_FUNC13_OUT_SEL_M  ((GPIO_FUNC13_OUT_SEL_V)<<(GPIO_FUNC13_OUT_SEL_S))
#define GPIO_FUNC13_OUT_SEL_V  0x1FF
#define GPIO_FUNC13_OUT_SEL_S  0

#define GPIO_FUNC14_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB2C)
/* GPIO_FUNC14_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC14_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC14_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC14_OE_INV_SEL_V  0x1
#define GPIO_FUNC14_OE_INV_SEL_S  11
/* GPIO_FUNC14_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC14_OE_SEL    (BIT(10))
#define GPIO_FUNC14_OE_SEL_M  (BIT(10))
#define GPIO_FUNC14_OE_SEL_V  0x1
#define GPIO_FUNC14_OE_SEL_S  10
/* GPIO_FUNC14_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC14_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC14_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC14_OUT_INV_SEL_V  0x1
#define GPIO_FUNC14_OUT_INV_SEL_S  9
/* GPIO_FUNC14_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC14_OUT_SEL    0x000001FF
#define GPIO_FUNC14_OUT_SEL_M  ((GPIO_FUNC14_OUT_SEL_V)<<(GPIO_FUNC14_OUT_SEL_S))
#define GPIO_FUNC14_OUT_SEL_V  0x1FF
#define GPIO_FUNC14_OUT_SEL_S  0

#define GPIO_FUNC15_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB30)
/* GPIO_FUNC15_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC15_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC15_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC15_OE_INV_SEL_V  0x1
#define GPIO_FUNC15_OE_INV_SEL_S  11
/* GPIO_FUNC15_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC15_OE_SEL    (BIT(10))
#define GPIO_FUNC15_OE_SEL_M  (BIT(10))
#define GPIO_FUNC15_OE_SEL_V  0x1
#define GPIO_FUNC15_OE_SEL_S  10
/* GPIO_FUNC15_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC15_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC15_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC15_OUT_INV_SEL_V  0x1
#define GPIO_FUNC15_OUT_INV_SEL_S  9
/* GPIO_FUNC15_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC15_OUT_SEL    0x000001FF
#define GPIO_FUNC15_OUT_SEL_M  ((GPIO_FUNC15_OUT_SEL_V)<<(GPIO_FUNC15_OUT_SEL_S))
#define GPIO_FUNC15_OUT_SEL_V  0x1FF
#define GPIO_FUNC15_OUT_SEL_S  0

#define GPIO_FUNC16_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB34)
/* GPIO_FUNC16_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC16_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC16_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC16_OE_INV_SEL_V  0x1
#define GPIO_FUNC16_OE_INV_SEL_S  11
/* GPIO_FUNC16_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC16_OE_SEL    (BIT(10))
#define GPIO_FUNC16_OE_SEL_M  (BIT(10))
#define GPIO_FUNC16_OE_SEL_V  0x1
#define GPIO_FUNC16_OE_SEL_S  10
/* GPIO_FUNC16_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC16_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC16_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC16_OUT_INV_SEL_V  0x1
#define GPIO_FUNC16_OUT_INV_SEL_S  9
/* GPIO_FUNC16_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC16_OUT_SEL    0x000001FF
#define GPIO_FUNC16_OUT_SEL_M  ((GPIO_FUNC16_OUT_SEL_V)<<(GPIO_FUNC16_OUT_SEL_S))
#define GPIO_FUNC16_OUT_SEL_V  0x1FF
#define GPIO_FUNC16_OUT_SEL_S  0

#define GPIO_FUNC17_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB38)
/* GPIO_FUNC17_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC17_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC17_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC17_OE_INV_SEL_V  0x1
#define GPIO_FUNC17_OE_INV_SEL_S  11
/* GPIO_FUNC17_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC17_OE_SEL    (BIT(10))
#define GPIO_FUNC17_OE_SEL_M  (BIT(10))
#define GPIO_FUNC17_OE_SEL_V  0x1
#define GPIO_FUNC17_OE_SEL_S  10
/* GPIO_FUNC17_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC17_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC17_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC17_OUT_INV_SEL_V  0x1
#define GPIO_FUNC17_OUT_INV_SEL_S  9
/* GPIO_FUNC17_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC17_OUT_SEL    0x000001FF
#define GPIO_FUNC17_OUT_SEL_M  ((GPIO_FUNC17_OUT_SEL_V)<<(GPIO_FUNC17_OUT_SEL_S))
#define GPIO_FUNC17_OUT_SEL_V  0x1FF
#define GPIO_FUNC17_OUT_SEL_S  0

#define GPIO_FUNC18_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB3C)
/* GPIO_FUNC18_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC18_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC18_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC18_OE_INV_SEL_V  0x1
#define GPIO_FUNC18_OE_INV_SEL_S  11
/* GPIO_FUNC18_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC18_OE_SEL    (BIT(10))
#define GPIO_FUNC18_OE_SEL_M  (BIT(10))
#define GPIO_FUNC18_OE_SEL_V  0x1
#define GPIO_FUNC18_OE_SEL_S  10
/* GPIO_FUNC18_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC18_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC18_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC18_OUT_INV_SEL_V  0x1
#define GPIO_FUNC18_OUT_INV_SEL_S  9
/* GPIO_FUNC18_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC18_OUT_SEL    0x000001FF
#define GPIO_FUNC18_OUT_SEL_M  ((GPIO_FUNC18_OUT_SEL_V)<<(GPIO_FUNC18_OUT_SEL_S))
#define GPIO_FUNC18_OUT_SEL_V  0x1FF
#define GPIO_FUNC18_OUT_SEL_S  0

#define GPIO_FUNC19_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB40)
/* GPIO_FUNC19_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC19_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC19_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC19_OE_INV_SEL_V  0x1
#define GPIO_FUNC19_OE_INV_SEL_S  11
/* GPIO_FUNC19_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC19_OE_SEL    (BIT(10))
#define GPIO_FUNC19_OE_SEL_M  (BIT(10))
#define GPIO_FUNC19_OE_SEL_V  0x1
#define GPIO_FUNC19_OE_SEL_S  10
/* GPIO_FUNC19_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC19_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC19_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC19_OUT_INV_SEL_V  0x1
#define GPIO_FUNC19_OUT_INV_SEL_S  9
/* GPIO_FUNC19_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC19_OUT_SEL    0x000001FF
#define GPIO_FUNC19_OUT_SEL_M  ((GPIO_FUNC19_OUT_SEL_V)<<(GPIO_FUNC19_OUT_SEL_S))
#define GPIO_FUNC19_OUT_SEL_V  0x1FF
#define GPIO_FUNC19_OUT_SEL_S  0

#define GPIO_FUNC20_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB44)
/* GPIO_FUNC20_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC20_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC20_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC20_OE_INV_SEL_V  0x1
#define GPIO_FUNC20_OE_INV_SEL_S  11
/* GPIO_FUNC20_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC20_OE_SEL    (BIT(10))
#define GPIO_FUNC20_OE_SEL_M  (BIT(10))
#define GPIO_FUNC20_OE_SEL_V  0x1
#define GPIO_FUNC20_OE_SEL_S  10
/* GPIO_FUNC20_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC20_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC20_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC20_OUT_INV_SEL_V  0x1
#define GPIO_FUNC20_OUT_INV_SEL_S  9
/* GPIO_FUNC20_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC20_OUT_SEL    0x000001FF
#define GPIO_FUNC20_OUT_SEL_M  ((GPIO_FUNC20_OUT_SEL_V)<<(GPIO_FUNC20_OUT_SEL_S))
#define GPIO_FUNC20_OUT_SEL_V  0x1FF
#define GPIO_FUNC20_OUT_SEL_S  0

#define GPIO_FUNC21_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB48)
/* GPIO_FUNC21_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC21_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC21_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC21_OE_INV_SEL_V  0x1
#define GPIO_FUNC21_OE_INV_SEL_S  11
/* GPIO_FUNC21_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC21_OE_SEL    (BIT(10))
#define GPIO_FUNC21_OE_SEL_M  (BIT(10))
#define GPIO_FUNC21_OE_SEL_V  0x1
#define GPIO_FUNC21_OE_SEL_S  10
/* GPIO_FUNC21_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC21_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC21_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC21_OUT_INV_SEL_V  0x1
#define GPIO_FUNC21_OUT_INV_SEL_S  9
/* GPIO_FUNC21_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC21_OUT_SEL    0x000001FF
#define GPIO_FUNC21_OUT_SEL_M  ((GPIO_FUNC21_OUT_SEL_V)<<(GPIO_FUNC21_OUT_SEL_S))
#define GPIO_FUNC21_OUT_SEL_V  0x1FF
#define GPIO_FUNC21_OUT_SEL_S  0

#define GPIO_FUNC22_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB4C)
/* GPIO_FUNC22_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC22_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC22_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC22_OE_INV_SEL_V  0x1
#define GPIO_FUNC22_OE_INV_SEL_S  11
/* GPIO_FUNC22_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC22_OE_SEL    (BIT(10))
#define GPIO_FUNC22_OE_SEL_M  (BIT(10))
#define GPIO_FUNC22_OE_SEL_V  0x1
#define GPIO_FUNC22_OE_SEL_S  10
/* GPIO_FUNC22_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC22_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC22_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC22_OUT_INV_SEL_V  0x1
#define GPIO_FUNC22_OUT_INV_SEL_S  9
/* GPIO_FUNC22_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC22_OUT_SEL    0x000001FF
#define GPIO_FUNC22_OUT_SEL_M  ((GPIO_FUNC22_OUT_SEL_V)<<(GPIO_FUNC22_OUT_SEL_S))
#define GPIO_FUNC22_OUT_SEL_V  0x1FF
#define GPIO_FUNC22_OUT_SEL_S  0

#define GPIO_FUNC23_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB50)
/* GPIO_FUNC23_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC23_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC23_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC23_OE_INV_SEL_V  0x1
#define GPIO_FUNC23_OE_INV_SEL_S  11
/* GPIO_FUNC23_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC23_OE_SEL    (BIT(10))
#define GPIO_FUNC23_OE_SEL_M  (BIT(10))
#define GPIO_FUNC23_OE_SEL_V  0x1
#define GPIO_FUNC23_OE_SEL_S  10
/* GPIO_FUNC23_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC23_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC23_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC23_OUT_INV_SEL_V  0x1
#define GPIO_FUNC23_OUT_INV_SEL_S  9
/* GPIO_FUNC23_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC23_OUT_SEL    0x000001FF
#define GPIO_FUNC23_OUT_SEL_M  ((GPIO_FUNC23_OUT_SEL_V)<<(GPIO_FUNC23_OUT_SEL_S))
#define GPIO_FUNC23_OUT_SEL_V  0x1FF
#define GPIO_FUNC23_OUT_SEL_S  0

#define GPIO_FUNC24_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB54)
/* GPIO_FUNC24_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC24_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC24_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC24_OE_INV_SEL_V  0x1
#define GPIO_FUNC24_OE_INV_SEL_S  11
/* GPIO_FUNC24_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC24_OE_SEL    (BIT(10))
#define GPIO_FUNC24_OE_SEL_M  (BIT(10))
#define GPIO_FUNC24_OE_SEL_V  0x1
#define GPIO_FUNC24_OE_SEL_S  10
/* GPIO_FUNC24_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC24_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC24_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC24_OUT_INV_SEL_V  0x1
#define GPIO_FUNC24_OUT_INV_SEL_S  9
/* GPIO_FUNC24_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC24_OUT_SEL    0x000001FF
#define GPIO_FUNC24_OUT_SEL_M  ((GPIO_FUNC24_OUT_SEL_V)<<(GPIO_FUNC24_OUT_SEL_S))
#define GPIO_FUNC24_OUT_SEL_V  0x1FF
#define GPIO_FUNC24_OUT_SEL_S  0

#define GPIO_FUNC25_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB58)
/* GPIO_FUNC25_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC25_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC25_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC25_OE_INV_SEL_V  0x1
#define GPIO_FUNC25_OE_INV_SEL_S  11
/* GPIO_FUNC25_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC25_OE_SEL    (BIT(10))
#define GPIO_FUNC25_OE_SEL_M  (BIT(10))
#define GPIO_FUNC25_OE_SEL_V  0x1
#define GPIO_FUNC25_OE_SEL_S  10
/* GPIO_FUNC25_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC25_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC25_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC25_OUT_INV_SEL_V  0x1
#define GPIO_FUNC25_OUT_INV_SEL_S  9
/* GPIO_FUNC25_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC25_OUT_SEL    0x000001FF
#define GPIO_FUNC25_OUT_SEL_M  ((GPIO_FUNC25_OUT_SEL_V)<<(GPIO_FUNC25_OUT_SEL_S))
#define GPIO_FUNC25_OUT_SEL_V  0x1FF
#define GPIO_FUNC25_OUT_SEL_S  0

#define GPIO_FUNC26_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB5C)
/* GPIO_FUNC26_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC26_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC26_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC26_OE_INV_SEL_V  0x1
#define GPIO_FUNC26_OE_INV_SEL_S  11
/* GPIO_FUNC26_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC26_OE_SEL    (BIT(10))
#define GPIO_FUNC26_OE_SEL_M  (BIT(10))
#define GPIO_FUNC26_OE_SEL_V  0x1
#define GPIO_FUNC26_OE_SEL_S  10
/* GPIO_FUNC26_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC26_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC26_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC26_OUT_INV_SEL_V  0x1
#define GPIO_FUNC26_OUT_INV_SEL_S  9
/* GPIO_FUNC26_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC26_OUT_SEL    0x000001FF
#define GPIO_FUNC26_OUT_SEL_M  ((GPIO_FUNC26_OUT_SEL_V)<<(GPIO_FUNC26_OUT_SEL_S))
#define GPIO_FUNC26_OUT_SEL_V  0x1FF
#define GPIO_FUNC26_OUT_SEL_S  0

#define GPIO_FUNC27_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB60)
/* GPIO_FUNC27_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC27_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC27_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC27_OE_INV_SEL_V  0x1
#define GPIO_FUNC27_OE_INV_SEL_S  11
/* GPIO_FUNC27_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC27_OE_SEL    (BIT(10))
#define GPIO_FUNC27_OE_SEL_M  (BIT(10))
#define GPIO_FUNC27_OE_SEL_V  0x1
#define GPIO_FUNC27_OE_SEL_S  10
/* GPIO_FUNC27_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC27_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC27_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC27_OUT_INV_SEL_V  0x1
#define GPIO_FUNC27_OUT_INV_SEL_S  9
/* GPIO_FUNC27_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC27_OUT_SEL    0x000001FF
#define GPIO_FUNC27_OUT_SEL_M  ((GPIO_FUNC27_OUT_SEL_V)<<(GPIO_FUNC27_OUT_SEL_S))
#define GPIO_FUNC27_OUT_SEL_V  0x1FF
#define GPIO_FUNC27_OUT_SEL_S  0

#define GPIO_FUNC28_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB64)
/* GPIO_FUNC28_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC28_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC28_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC28_OE_INV_SEL_V  0x1
#define GPIO_FUNC28_OE_INV_SEL_S  11
/* GPIO_FUNC28_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC28_OE_SEL    (BIT(10))
#define GPIO_FUNC28_OE_SEL_M  (BIT(10))
#define GPIO_FUNC28_OE_SEL_V  0x1
#define GPIO_FUNC28_OE_SEL_S  10
/* GPIO_FUNC28_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC28_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC28_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC28_OUT_INV_SEL_V  0x1
#define GPIO_FUNC28_OUT_INV_SEL_S  9
/* GPIO_FUNC28_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC28_OUT_SEL    0x000001FF
#define GPIO_FUNC28_OUT_SEL_M  ((GPIO_FUNC28_OUT_SEL_V)<<(GPIO_FUNC28_OUT_SEL_S))
#define GPIO_FUNC28_OUT_SEL_V  0x1FF
#define GPIO_FUNC28_OUT_SEL_S  0

#define GPIO_FUNC29_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB68)
/* GPIO_FUNC29_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC29_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC29_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC29_OE_INV_SEL_V  0x1
#define GPIO_FUNC29_OE_INV_SEL_S  11
/* GPIO_FUNC29_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC29_OE_SEL    (BIT(10))
#define GPIO_FUNC29_OE_SEL_M  (BIT(10))
#define GPIO_FUNC29_OE_SEL_V  0x1
#define GPIO_FUNC29_OE_SEL_S  10
/* GPIO_FUNC29_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC29_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC29_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC29_OUT_INV_SEL_V  0x1
#define GPIO_FUNC29_OUT_INV_SEL_S  9
/* GPIO_FUNC29_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC29_OUT_SEL    0x000001FF
#define GPIO_FUNC29_OUT_SEL_M  ((GPIO_FUNC29_OUT_SEL_V)<<(GPIO_FUNC29_OUT_SEL_S))
#define GPIO_FUNC29_OUT_SEL_V  0x1FF
#define GPIO_FUNC29_OUT_SEL_S  0

#define GPIO_FUNC30_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB6C)
/* GPIO_FUNC30_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC30_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC30_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC30_OE_INV_SEL_V  0x1
#define GPIO_FUNC30_OE_INV_SEL_S  11
/* GPIO_FUNC30_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC30_OE_SEL    (BIT(10))
#define GPIO_FUNC30_OE_SEL_M  (BIT(10))
#define GPIO_FUNC30_OE_SEL_V  0x1
#define GPIO_FUNC30_OE_SEL_S  10
/* GPIO_FUNC30_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC30_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC30_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC30_OUT_INV_SEL_V  0x1
#define GPIO_FUNC30_OUT_INV_SEL_S  9
/* GPIO_FUNC30_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC30_OUT_SEL    0x000001FF
#define GPIO_FUNC30_OUT_SEL_M  ((GPIO_FUNC30_OUT_SEL_V)<<(GPIO_FUNC30_OUT_SEL_S))
#define GPIO_FUNC30_OUT_SEL_V  0x1FF
#define GPIO_FUNC30_OUT_SEL_S  0

#define GPIO_FUNC31_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB70)
/* GPIO_FUNC31_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC31_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC31_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC31_OE_INV_SEL_V  0x1
#define GPIO_FUNC31_OE_INV_SEL_S  11
/* GPIO_FUNC31_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC31_OE_SEL    (BIT(10))
#define GPIO_FUNC31_OE_SEL_M  (BIT(10))
#define GPIO_FUNC31_OE_SEL_V  0x1
#define GPIO_FUNC31_OE_SEL_S  10
/* GPIO_FUNC31_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC31_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC31_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC31_OUT_INV_SEL_V  0x1
#define GPIO_FUNC31_OUT_INV_SEL_S  9
/* GPIO_FUNC31_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC31_OUT_SEL    0x000001FF
#define GPIO_FUNC31_OUT_SEL_M  ((GPIO_FUNC31_OUT_SEL_V)<<(GPIO_FUNC31_OUT_SEL_S))
#define GPIO_FUNC31_OUT_SEL_V  0x1FF
#define GPIO_FUNC31_OUT_SEL_S  0

#define GPIO_FUNC32_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB74)
/* GPIO_FUNC32_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC32_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC32_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC32_OE_INV_SEL_V  0x1
#define GPIO_FUNC32_OE_INV_SEL_S  11
/* GPIO_FUNC32_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC32_OE_SEL    (BIT(10))
#define GPIO_FUNC32_OE_SEL_M  (BIT(10))
#define GPIO_FUNC32_OE_SEL_V  0x1
#define GPIO_FUNC32_OE_SEL_S  10
/* GPIO_FUNC32_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC32_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC32_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC32_OUT_INV_SEL_V  0x1
#define GPIO_FUNC32_OUT_INV_SEL_S  9
/* GPIO_FUNC32_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC32_OUT_SEL    0x000001FF
#define GPIO_FUNC32_OUT_SEL_M  ((GPIO_FUNC32_OUT_SEL_V)<<(GPIO_FUNC32_OUT_SEL_S))
#define GPIO_FUNC32_OUT_SEL_V  0x1FF
#define GPIO_FUNC32_OUT_SEL_S  0

#define GPIO_FUNC33_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB78)
/* GPIO_FUNC33_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC33_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC33_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC33_OE_INV_SEL_V  0x1
#define GPIO_FUNC33_OE_INV_SEL_S  11
/* GPIO_FUNC33_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC33_OE_SEL    (BIT(10))
#define GPIO_FUNC33_OE_SEL_M  (BIT(10))
#define GPIO_FUNC33_OE_SEL_V  0x1
#define GPIO_FUNC33_OE_SEL_S  10
/* GPIO_FUNC33_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC33_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC33_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC33_OUT_INV_SEL_V  0x1
#define GPIO_FUNC33_OUT_INV_SEL_S  9
/* GPIO_FUNC33_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC33_OUT_SEL    0x000001FF
#define GPIO_FUNC33_OUT_SEL_M  ((GPIO_FUNC33_OUT_SEL_V)<<(GPIO_FUNC33_OUT_SEL_S))
#define GPIO_FUNC33_OUT_SEL_V  0x1FF
#define GPIO_FUNC33_OUT_SEL_S  0

#define GPIO_FUNC34_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB7C)
/* GPIO_FUNC34_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC34_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC34_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC34_OE_INV_SEL_V  0x1
#define GPIO_FUNC34_OE_INV_SEL_S  11
/* GPIO_FUNC34_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC34_OE_SEL    (BIT(10))
#define GPIO_FUNC34_OE_SEL_M  (BIT(10))
#define GPIO_FUNC34_OE_SEL_V  0x1
#define GPIO_FUNC34_OE_SEL_S  10
/* GPIO_FUNC34_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC34_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC34_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC34_OUT_INV_SEL_V  0x1
#define GPIO_FUNC34_OUT_INV_SEL_S  9
/* GPIO_FUNC34_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC34_OUT_SEL    0x000001FF
#define GPIO_FUNC34_OUT_SEL_M  ((GPIO_FUNC34_OUT_SEL_V)<<(GPIO_FUNC34_OUT_SEL_S))
#define GPIO_FUNC34_OUT_SEL_V  0x1FF
#define GPIO_FUNC34_OUT_SEL_S  0

#define GPIO_FUNC35_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB80)
/* GPIO_FUNC35_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC35_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC35_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC35_OE_INV_SEL_V  0x1
#define GPIO_FUNC35_OE_INV_SEL_S  11
/* GPIO_FUNC35_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC35_OE_SEL    (BIT(10))
#define GPIO_FUNC35_OE_SEL_M  (BIT(10))
#define GPIO_FUNC35_OE_SEL_V  0x1
#define GPIO_FUNC35_OE_SEL_S  10
/* GPIO_FUNC35_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC35_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC35_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC35_OUT_INV_SEL_V  0x1
#define GPIO_FUNC35_OUT_INV_SEL_S  9
/* GPIO_FUNC35_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC35_OUT_SEL    0x000001FF
#define GPIO_FUNC35_OUT_SEL_M  ((GPIO_FUNC35_OUT_SEL_V)<<(GPIO_FUNC35_OUT_SEL_S))
#define GPIO_FUNC35_OUT_SEL_V  0x1FF
#define GPIO_FUNC35_OUT_SEL_S  0

#define GPIO_FUNC36_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB84)
/* GPIO_FUNC36_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC36_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC36_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC36_OE_INV_SEL_V  0x1
#define GPIO_FUNC36_OE_INV_SEL_S  11
/* GPIO_FUNC36_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC36_OE_SEL    (BIT(10))
#define GPIO_FUNC36_OE_SEL_M  (BIT(10))
#define GPIO_FUNC36_OE_SEL_V  0x1
#define GPIO_FUNC36_OE_SEL_S  10
/* GPIO_FUNC36_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC36_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC36_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC36_OUT_INV_SEL_V  0x1
#define GPIO_FUNC36_OUT_INV_SEL_S  9
/* GPIO_FUNC36_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC36_OUT_SEL    0x000001FF
#define GPIO_FUNC36_OUT_SEL_M  ((GPIO_FUNC36_OUT_SEL_V)<<(GPIO_FUNC36_OUT_SEL_S))
#define GPIO_FUNC36_OUT_SEL_V  0x1FF
#define GPIO_FUNC36_OUT_SEL_S  0

#define GPIO_FUNC37_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB88)
/* GPIO_FUNC37_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC37_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC37_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC37_OE_INV_SEL_V  0x1
#define GPIO_FUNC37_OE_INV_SEL_S  11
/* GPIO_FUNC37_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC37_OE_SEL    (BIT(10))
#define GPIO_FUNC37_OE_SEL_M  (BIT(10))
#define GPIO_FUNC37_OE_SEL_V  0x1
#define GPIO_FUNC37_OE_SEL_S  10
/* GPIO_FUNC37_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC37_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC37_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC37_OUT_INV_SEL_V  0x1
#define GPIO_FUNC37_OUT_INV_SEL_S  9
/* GPIO_FUNC37_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC37_OUT_SEL    0x000001FF
#define GPIO_FUNC37_OUT_SEL_M  ((GPIO_FUNC37_OUT_SEL_V)<<(GPIO_FUNC37_OUT_SEL_S))
#define GPIO_FUNC37_OUT_SEL_V  0x1FF
#define GPIO_FUNC37_OUT_SEL_S  0

#define GPIO_FUNC38_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB8C)
/* GPIO_FUNC38_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC38_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC38_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC38_OE_INV_SEL_V  0x1
#define GPIO_FUNC38_OE_INV_SEL_S  11
/* GPIO_FUNC38_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC38_OE_SEL    (BIT(10))
#define GPIO_FUNC38_OE_SEL_M  (BIT(10))
#define GPIO_FUNC38_OE_SEL_V  0x1
#define GPIO_FUNC38_OE_SEL_S  10
/* GPIO_FUNC38_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC38_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC38_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC38_OUT_INV_SEL_V  0x1
#define GPIO_FUNC38_OUT_INV_SEL_S  9
/* GPIO_FUNC38_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC38_OUT_SEL    0x000001FF
#define GPIO_FUNC38_OUT_SEL_M  ((GPIO_FUNC38_OUT_SEL_V)<<(GPIO_FUNC38_OUT_SEL_S))
#define GPIO_FUNC38_OUT_SEL_V  0x1FF
#define GPIO_FUNC38_OUT_SEL_S  0

#define GPIO_FUNC39_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB90)
/* GPIO_FUNC39_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC39_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC39_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC39_OE_INV_SEL_V  0x1
#define GPIO_FUNC39_OE_INV_SEL_S  11
/* GPIO_FUNC39_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC39_OE_SEL    (BIT(10))
#define GPIO_FUNC39_OE_SEL_M  (BIT(10))
#define GPIO_FUNC39_OE_SEL_V  0x1
#define GPIO_FUNC39_OE_SEL_S  10
/* GPIO_FUNC39_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC39_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC39_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC39_OUT_INV_SEL_V  0x1
#define GPIO_FUNC39_OUT_INV_SEL_S  9
/* GPIO_FUNC39_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC39_OUT_SEL    0x000001FF
#define GPIO_FUNC39_OUT_SEL_M  ((GPIO_FUNC39_OUT_SEL_V)<<(GPIO_FUNC39_OUT_SEL_S))
#define GPIO_FUNC39_OUT_SEL_V  0x1FF
#define GPIO_FUNC39_OUT_SEL_S  0

#define GPIO_FUNC40_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB94)
/* GPIO_FUNC40_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC40_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC40_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC40_OE_INV_SEL_V  0x1
#define GPIO_FUNC40_OE_INV_SEL_S  11
/* GPIO_FUNC40_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC40_OE_SEL    (BIT(10))
#define GPIO_FUNC40_OE_SEL_M  (BIT(10))
#define GPIO_FUNC40_OE_SEL_V  0x1
#define GPIO_FUNC40_OE_SEL_S  10
/* GPIO_FUNC40_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC40_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC40_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC40_OUT_INV_SEL_V  0x1
#define GPIO_FUNC40_OUT_INV_SEL_S  9
/* GPIO_FUNC40_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC40_OUT_SEL    0x000001FF
#define GPIO_FUNC40_OUT_SEL_M  ((GPIO_FUNC40_OUT_SEL_V)<<(GPIO_FUNC40_OUT_SEL_S))
#define GPIO_FUNC40_OUT_SEL_V  0x1FF
#define GPIO_FUNC40_OUT_SEL_S  0

#define GPIO_FUNC41_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB98)
/* GPIO_FUNC41_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC41_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC41_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC41_OE_INV_SEL_V  0x1
#define GPIO_FUNC41_OE_INV_SEL_S  11
/* GPIO_FUNC41_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC41_OE_SEL    (BIT(10))
#define GPIO_FUNC41_OE_SEL_M  (BIT(10))
#define GPIO_FUNC41_OE_SEL_V  0x1
#define GPIO_FUNC41_OE_SEL_S  10
/* GPIO_FUNC41_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC41_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC41_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC41_OUT_INV_SEL_V  0x1
#define GPIO_FUNC41_OUT_INV_SEL_S  9
/* GPIO_FUNC41_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC41_OUT_SEL    0x000001FF
#define GPIO_FUNC41_OUT_SEL_M  ((GPIO_FUNC41_OUT_SEL_V)<<(GPIO_FUNC41_OUT_SEL_S))
#define GPIO_FUNC41_OUT_SEL_V  0x1FF
#define GPIO_FUNC41_OUT_SEL_S  0

#define GPIO_FUNC42_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xB9C)
/* GPIO_FUNC42_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC42_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC42_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC42_OE_INV_SEL_V  0x1
#define GPIO_FUNC42_OE_INV_SEL_S  11
/* GPIO_FUNC42_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC42_OE_SEL    (BIT(10))
#define GPIO_FUNC42_OE_SEL_M  (BIT(10))
#define GPIO_FUNC42_OE_SEL_V  0x1
#define GPIO_FUNC42_OE_SEL_S  10
/* GPIO_FUNC42_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC42_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC42_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC42_OUT_INV_SEL_V  0x1
#define GPIO_FUNC42_OUT_INV_SEL_S  9
/* GPIO_FUNC42_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC42_OUT_SEL    0x000001FF
#define GPIO_FUNC42_OUT_SEL_M  ((GPIO_FUNC42_OUT_SEL_V)<<(GPIO_FUNC42_OUT_SEL_S))
#define GPIO_FUNC42_OUT_SEL_V  0x1FF
#define GPIO_FUNC42_OUT_SEL_S  0

#define GPIO_FUNC43_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBA0)
/* GPIO_FUNC43_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC43_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC43_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC43_OE_INV_SEL_V  0x1
#define GPIO_FUNC43_OE_INV_SEL_S  11
/* GPIO_FUNC43_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC43_OE_SEL    (BIT(10))
#define GPIO_FUNC43_OE_SEL_M  (BIT(10))
#define GPIO_FUNC43_OE_SEL_V  0x1
#define GPIO_FUNC43_OE_SEL_S  10
/* GPIO_FUNC43_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC43_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC43_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC43_OUT_INV_SEL_V  0x1
#define GPIO_FUNC43_OUT_INV_SEL_S  9
/* GPIO_FUNC43_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC43_OUT_SEL    0x000001FF
#define GPIO_FUNC43_OUT_SEL_M  ((GPIO_FUNC43_OUT_SEL_V)<<(GPIO_FUNC43_OUT_SEL_S))
#define GPIO_FUNC43_OUT_SEL_V  0x1FF
#define GPIO_FUNC43_OUT_SEL_S  0

#define GPIO_FUNC44_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBA4)
/* GPIO_FUNC44_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC44_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC44_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC44_OE_INV_SEL_V  0x1
#define GPIO_FUNC44_OE_INV_SEL_S  11
/* GPIO_FUNC44_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC44_OE_SEL    (BIT(10))
#define GPIO_FUNC44_OE_SEL_M  (BIT(10))
#define GPIO_FUNC44_OE_SEL_V  0x1
#define GPIO_FUNC44_OE_SEL_S  10
/* GPIO_FUNC44_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC44_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC44_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC44_OUT_INV_SEL_V  0x1
#define GPIO_FUNC44_OUT_INV_SEL_S  9
/* GPIO_FUNC44_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC44_OUT_SEL    0x000001FF
#define GPIO_FUNC44_OUT_SEL_M  ((GPIO_FUNC44_OUT_SEL_V)<<(GPIO_FUNC44_OUT_SEL_S))
#define GPIO_FUNC44_OUT_SEL_V  0x1FF
#define GPIO_FUNC44_OUT_SEL_S  0

#define GPIO_FUNC45_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBA8)
/* GPIO_FUNC45_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC45_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC45_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC45_OE_INV_SEL_V  0x1
#define GPIO_FUNC45_OE_INV_SEL_S  11
/* GPIO_FUNC45_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC45_OE_SEL    (BIT(10))
#define GPIO_FUNC45_OE_SEL_M  (BIT(10))
#define GPIO_FUNC45_OE_SEL_V  0x1
#define GPIO_FUNC45_OE_SEL_S  10
/* GPIO_FUNC45_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC45_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC45_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC45_OUT_INV_SEL_V  0x1
#define GPIO_FUNC45_OUT_INV_SEL_S  9
/* GPIO_FUNC45_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC45_OUT_SEL    0x000001FF
#define GPIO_FUNC45_OUT_SEL_M  ((GPIO_FUNC45_OUT_SEL_V)<<(GPIO_FUNC45_OUT_SEL_S))
#define GPIO_FUNC45_OUT_SEL_V  0x1FF
#define GPIO_FUNC45_OUT_SEL_S  0

#define GPIO_FUNC46_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBAC)
/* GPIO_FUNC46_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC46_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC46_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC46_OE_INV_SEL_V  0x1
#define GPIO_FUNC46_OE_INV_SEL_S  11
/* GPIO_FUNC46_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC46_OE_SEL    (BIT(10))
#define GPIO_FUNC46_OE_SEL_M  (BIT(10))
#define GPIO_FUNC46_OE_SEL_V  0x1
#define GPIO_FUNC46_OE_SEL_S  10
/* GPIO_FUNC46_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC46_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC46_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC46_OUT_INV_SEL_V  0x1
#define GPIO_FUNC46_OUT_INV_SEL_S  9
/* GPIO_FUNC46_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC46_OUT_SEL    0x000001FF
#define GPIO_FUNC46_OUT_SEL_M  ((GPIO_FUNC46_OUT_SEL_V)<<(GPIO_FUNC46_OUT_SEL_S))
#define GPIO_FUNC46_OUT_SEL_V  0x1FF
#define GPIO_FUNC46_OUT_SEL_S  0

#define GPIO_FUNC47_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBB0)
/* GPIO_FUNC47_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC47_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC47_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC47_OE_INV_SEL_V  0x1
#define GPIO_FUNC47_OE_INV_SEL_S  11
/* GPIO_FUNC47_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC47_OE_SEL    (BIT(10))
#define GPIO_FUNC47_OE_SEL_M  (BIT(10))
#define GPIO_FUNC47_OE_SEL_V  0x1
#define GPIO_FUNC47_OE_SEL_S  10
/* GPIO_FUNC47_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC47_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC47_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC47_OUT_INV_SEL_V  0x1
#define GPIO_FUNC47_OUT_INV_SEL_S  9
/* GPIO_FUNC47_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC47_OUT_SEL    0x000001FF
#define GPIO_FUNC47_OUT_SEL_M  ((GPIO_FUNC47_OUT_SEL_V)<<(GPIO_FUNC47_OUT_SEL_S))
#define GPIO_FUNC47_OUT_SEL_V  0x1FF
#define GPIO_FUNC47_OUT_SEL_S  0

#define GPIO_FUNC48_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBB4)
/* GPIO_FUNC48_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC48_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC48_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC48_OE_INV_SEL_V  0x1
#define GPIO_FUNC48_OE_INV_SEL_S  11
/* GPIO_FUNC48_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC48_OE_SEL    (BIT(10))
#define GPIO_FUNC48_OE_SEL_M  (BIT(10))
#define GPIO_FUNC48_OE_SEL_V  0x1
#define GPIO_FUNC48_OE_SEL_S  10
/* GPIO_FUNC48_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC48_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC48_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC48_OUT_INV_SEL_V  0x1
#define GPIO_FUNC48_OUT_INV_SEL_S  9
/* GPIO_FUNC48_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC48_OUT_SEL    0x000001FF
#define GPIO_FUNC48_OUT_SEL_M  ((GPIO_FUNC48_OUT_SEL_V)<<(GPIO_FUNC48_OUT_SEL_S))
#define GPIO_FUNC48_OUT_SEL_V  0x1FF
#define GPIO_FUNC48_OUT_SEL_S  0

#define GPIO_FUNC49_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBB8)
/* GPIO_FUNC49_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC49_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC49_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC49_OE_INV_SEL_V  0x1
#define GPIO_FUNC49_OE_INV_SEL_S  11
/* GPIO_FUNC49_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC49_OE_SEL    (BIT(10))
#define GPIO_FUNC49_OE_SEL_M  (BIT(10))
#define GPIO_FUNC49_OE_SEL_V  0x1
#define GPIO_FUNC49_OE_SEL_S  10
/* GPIO_FUNC49_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC49_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC49_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC49_OUT_INV_SEL_V  0x1
#define GPIO_FUNC49_OUT_INV_SEL_S  9
/* GPIO_FUNC49_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC49_OUT_SEL    0x000001FF
#define GPIO_FUNC49_OUT_SEL_M  ((GPIO_FUNC49_OUT_SEL_V)<<(GPIO_FUNC49_OUT_SEL_S))
#define GPIO_FUNC49_OUT_SEL_V  0x1FF
#define GPIO_FUNC49_OUT_SEL_S  0

#define GPIO_FUNC50_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBBC)
/* GPIO_FUNC50_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC50_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC50_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC50_OE_INV_SEL_V  0x1
#define GPIO_FUNC50_OE_INV_SEL_S  11
/* GPIO_FUNC50_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC50_OE_SEL    (BIT(10))
#define GPIO_FUNC50_OE_SEL_M  (BIT(10))
#define GPIO_FUNC50_OE_SEL_V  0x1
#define GPIO_FUNC50_OE_SEL_S  10
/* GPIO_FUNC50_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC50_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC50_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC50_OUT_INV_SEL_V  0x1
#define GPIO_FUNC50_OUT_INV_SEL_S  9
/* GPIO_FUNC50_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC50_OUT_SEL    0x000001FF
#define GPIO_FUNC50_OUT_SEL_M  ((GPIO_FUNC50_OUT_SEL_V)<<(GPIO_FUNC50_OUT_SEL_S))
#define GPIO_FUNC50_OUT_SEL_V  0x1FF
#define GPIO_FUNC50_OUT_SEL_S  0

#define GPIO_FUNC51_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBC0)
/* GPIO_FUNC51_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC51_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC51_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC51_OE_INV_SEL_V  0x1
#define GPIO_FUNC51_OE_INV_SEL_S  11
/* GPIO_FUNC51_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC51_OE_SEL    (BIT(10))
#define GPIO_FUNC51_OE_SEL_M  (BIT(10))
#define GPIO_FUNC51_OE_SEL_V  0x1
#define GPIO_FUNC51_OE_SEL_S  10
/* GPIO_FUNC51_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC51_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC51_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC51_OUT_INV_SEL_V  0x1
#define GPIO_FUNC51_OUT_INV_SEL_S  9
/* GPIO_FUNC51_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC51_OUT_SEL    0x000001FF
#define GPIO_FUNC51_OUT_SEL_M  ((GPIO_FUNC51_OUT_SEL_V)<<(GPIO_FUNC51_OUT_SEL_S))
#define GPIO_FUNC51_OUT_SEL_V  0x1FF
#define GPIO_FUNC51_OUT_SEL_S  0

#define GPIO_FUNC52_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBC4)
/* GPIO_FUNC52_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC52_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC52_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC52_OE_INV_SEL_V  0x1
#define GPIO_FUNC52_OE_INV_SEL_S  11
/* GPIO_FUNC52_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC52_OE_SEL    (BIT(10))
#define GPIO_FUNC52_OE_SEL_M  (BIT(10))
#define GPIO_FUNC52_OE_SEL_V  0x1
#define GPIO_FUNC52_OE_SEL_S  10
/* GPIO_FUNC52_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC52_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC52_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC52_OUT_INV_SEL_V  0x1
#define GPIO_FUNC52_OUT_INV_SEL_S  9
/* GPIO_FUNC52_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC52_OUT_SEL    0x000001FF
#define GPIO_FUNC52_OUT_SEL_M  ((GPIO_FUNC52_OUT_SEL_V)<<(GPIO_FUNC52_OUT_SEL_S))
#define GPIO_FUNC52_OUT_SEL_V  0x1FF
#define GPIO_FUNC52_OUT_SEL_S  0

#define GPIO_FUNC53_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBC8)
/* GPIO_FUNC53_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC53_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC53_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC53_OE_INV_SEL_V  0x1
#define GPIO_FUNC53_OE_INV_SEL_S  11
/* GPIO_FUNC53_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC53_OE_SEL    (BIT(10))
#define GPIO_FUNC53_OE_SEL_M  (BIT(10))
#define GPIO_FUNC53_OE_SEL_V  0x1
#define GPIO_FUNC53_OE_SEL_S  10
/* GPIO_FUNC53_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC53_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC53_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC53_OUT_INV_SEL_V  0x1
#define GPIO_FUNC53_OUT_INV_SEL_S  9
/* GPIO_FUNC53_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC53_OUT_SEL    0x000001FF
#define GPIO_FUNC53_OUT_SEL_M  ((GPIO_FUNC53_OUT_SEL_V)<<(GPIO_FUNC53_OUT_SEL_S))
#define GPIO_FUNC53_OUT_SEL_V  0x1FF
#define GPIO_FUNC53_OUT_SEL_S  0

#define GPIO_FUNC54_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBCC)
/* GPIO_FUNC54_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC54_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC54_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC54_OE_INV_SEL_V  0x1
#define GPIO_FUNC54_OE_INV_SEL_S  11
/* GPIO_FUNC54_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC54_OE_SEL    (BIT(10))
#define GPIO_FUNC54_OE_SEL_M  (BIT(10))
#define GPIO_FUNC54_OE_SEL_V  0x1
#define GPIO_FUNC54_OE_SEL_S  10
/* GPIO_FUNC54_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC54_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC54_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC54_OUT_INV_SEL_V  0x1
#define GPIO_FUNC54_OUT_INV_SEL_S  9
/* GPIO_FUNC54_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC54_OUT_SEL    0x000001FF
#define GPIO_FUNC54_OUT_SEL_M  ((GPIO_FUNC54_OUT_SEL_V)<<(GPIO_FUNC54_OUT_SEL_S))
#define GPIO_FUNC54_OUT_SEL_V  0x1FF
#define GPIO_FUNC54_OUT_SEL_S  0

#define GPIO_FUNC55_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBD0)
/* GPIO_FUNC55_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC55_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC55_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC55_OE_INV_SEL_V  0x1
#define GPIO_FUNC55_OE_INV_SEL_S  11
/* GPIO_FUNC55_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC55_OE_SEL    (BIT(10))
#define GPIO_FUNC55_OE_SEL_M  (BIT(10))
#define GPIO_FUNC55_OE_SEL_V  0x1
#define GPIO_FUNC55_OE_SEL_S  10
/* GPIO_FUNC55_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC55_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC55_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC55_OUT_INV_SEL_V  0x1
#define GPIO_FUNC55_OUT_INV_SEL_S  9
/* GPIO_FUNC55_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC55_OUT_SEL    0x000001FF
#define GPIO_FUNC55_OUT_SEL_M  ((GPIO_FUNC55_OUT_SEL_V)<<(GPIO_FUNC55_OUT_SEL_S))
#define GPIO_FUNC55_OUT_SEL_V  0x1FF
#define GPIO_FUNC55_OUT_SEL_S  0

#define GPIO_FUNC56_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBD4)
/* GPIO_FUNC56_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC56_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC56_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC56_OE_INV_SEL_V  0x1
#define GPIO_FUNC56_OE_INV_SEL_S  11
/* GPIO_FUNC56_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC56_OE_SEL    (BIT(10))
#define GPIO_FUNC56_OE_SEL_M  (BIT(10))
#define GPIO_FUNC56_OE_SEL_V  0x1
#define GPIO_FUNC56_OE_SEL_S  10
/* GPIO_FUNC56_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC56_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC56_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC56_OUT_INV_SEL_V  0x1
#define GPIO_FUNC56_OUT_INV_SEL_S  9
/* GPIO_FUNC56_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC56_OUT_SEL    0x000001FF
#define GPIO_FUNC56_OUT_SEL_M  ((GPIO_FUNC56_OUT_SEL_V)<<(GPIO_FUNC56_OUT_SEL_S))
#define GPIO_FUNC56_OUT_SEL_V  0x1FF
#define GPIO_FUNC56_OUT_SEL_S  0

#define GPIO_FUNC57_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBD8)
/* GPIO_FUNC57_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC57_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC57_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC57_OE_INV_SEL_V  0x1
#define GPIO_FUNC57_OE_INV_SEL_S  11
/* GPIO_FUNC57_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC57_OE_SEL    (BIT(10))
#define GPIO_FUNC57_OE_SEL_M  (BIT(10))
#define GPIO_FUNC57_OE_SEL_V  0x1
#define GPIO_FUNC57_OE_SEL_S  10
/* GPIO_FUNC57_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC57_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC57_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC57_OUT_INV_SEL_V  0x1
#define GPIO_FUNC57_OUT_INV_SEL_S  9
/* GPIO_FUNC57_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC57_OUT_SEL    0x000001FF
#define GPIO_FUNC57_OUT_SEL_M  ((GPIO_FUNC57_OUT_SEL_V)<<(GPIO_FUNC57_OUT_SEL_S))
#define GPIO_FUNC57_OUT_SEL_V  0x1FF
#define GPIO_FUNC57_OUT_SEL_S  0

#define GPIO_FUNC58_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBDC)
/* GPIO_FUNC58_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC58_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC58_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC58_OE_INV_SEL_V  0x1
#define GPIO_FUNC58_OE_INV_SEL_S  11
/* GPIO_FUNC58_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC58_OE_SEL    (BIT(10))
#define GPIO_FUNC58_OE_SEL_M  (BIT(10))
#define GPIO_FUNC58_OE_SEL_V  0x1
#define GPIO_FUNC58_OE_SEL_S  10
/* GPIO_FUNC58_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC58_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC58_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC58_OUT_INV_SEL_V  0x1
#define GPIO_FUNC58_OUT_INV_SEL_S  9
/* GPIO_FUNC58_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC58_OUT_SEL    0x000001FF
#define GPIO_FUNC58_OUT_SEL_M  ((GPIO_FUNC58_OUT_SEL_V)<<(GPIO_FUNC58_OUT_SEL_S))
#define GPIO_FUNC58_OUT_SEL_V  0x1FF
#define GPIO_FUNC58_OUT_SEL_S  0

#define GPIO_FUNC59_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBE0)
/* GPIO_FUNC59_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC59_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC59_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC59_OE_INV_SEL_V  0x1
#define GPIO_FUNC59_OE_INV_SEL_S  11
/* GPIO_FUNC59_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC59_OE_SEL    (BIT(10))
#define GPIO_FUNC59_OE_SEL_M  (BIT(10))
#define GPIO_FUNC59_OE_SEL_V  0x1
#define GPIO_FUNC59_OE_SEL_S  10
/* GPIO_FUNC59_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC59_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC59_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC59_OUT_INV_SEL_V  0x1
#define GPIO_FUNC59_OUT_INV_SEL_S  9
/* GPIO_FUNC59_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC59_OUT_SEL    0x000001FF
#define GPIO_FUNC59_OUT_SEL_M  ((GPIO_FUNC59_OUT_SEL_V)<<(GPIO_FUNC59_OUT_SEL_S))
#define GPIO_FUNC59_OUT_SEL_V  0x1FF
#define GPIO_FUNC59_OUT_SEL_S  0

#define GPIO_FUNC60_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBE4)
/* GPIO_FUNC60_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC60_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC60_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC60_OE_INV_SEL_V  0x1
#define GPIO_FUNC60_OE_INV_SEL_S  11
/* GPIO_FUNC60_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC60_OE_SEL    (BIT(10))
#define GPIO_FUNC60_OE_SEL_M  (BIT(10))
#define GPIO_FUNC60_OE_SEL_V  0x1
#define GPIO_FUNC60_OE_SEL_S  10
/* GPIO_FUNC60_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC60_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC60_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC60_OUT_INV_SEL_V  0x1
#define GPIO_FUNC60_OUT_INV_SEL_S  9
/* GPIO_FUNC60_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC60_OUT_SEL    0x000001FF
#define GPIO_FUNC60_OUT_SEL_M  ((GPIO_FUNC60_OUT_SEL_V)<<(GPIO_FUNC60_OUT_SEL_S))
#define GPIO_FUNC60_OUT_SEL_V  0x1FF
#define GPIO_FUNC60_OUT_SEL_S  0

#define GPIO_FUNC61_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBE8)
/* GPIO_FUNC61_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC61_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC61_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC61_OE_INV_SEL_V  0x1
#define GPIO_FUNC61_OE_INV_SEL_S  11
/* GPIO_FUNC61_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC61_OE_SEL    (BIT(10))
#define GPIO_FUNC61_OE_SEL_M  (BIT(10))
#define GPIO_FUNC61_OE_SEL_V  0x1
#define GPIO_FUNC61_OE_SEL_S  10
/* GPIO_FUNC61_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC61_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC61_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC61_OUT_INV_SEL_V  0x1
#define GPIO_FUNC61_OUT_INV_SEL_S  9
/* GPIO_FUNC61_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC61_OUT_SEL    0x000001FF
#define GPIO_FUNC61_OUT_SEL_M  ((GPIO_FUNC61_OUT_SEL_V)<<(GPIO_FUNC61_OUT_SEL_S))
#define GPIO_FUNC61_OUT_SEL_V  0x1FF
#define GPIO_FUNC61_OUT_SEL_S  0

#define GPIO_FUNC62_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBEC)
/* GPIO_FUNC62_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC62_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC62_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC62_OE_INV_SEL_V  0x1
#define GPIO_FUNC62_OE_INV_SEL_S  11
/* GPIO_FUNC62_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC62_OE_SEL    (BIT(10))
#define GPIO_FUNC62_OE_SEL_M  (BIT(10))
#define GPIO_FUNC62_OE_SEL_V  0x1
#define GPIO_FUNC62_OE_SEL_S  10
/* GPIO_FUNC62_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC62_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC62_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC62_OUT_INV_SEL_V  0x1
#define GPIO_FUNC62_OUT_INV_SEL_S  9
/* GPIO_FUNC62_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC62_OUT_SEL    0x000001FF
#define GPIO_FUNC62_OUT_SEL_M  ((GPIO_FUNC62_OUT_SEL_V)<<(GPIO_FUNC62_OUT_SEL_S))
#define GPIO_FUNC62_OUT_SEL_V  0x1FF
#define GPIO_FUNC62_OUT_SEL_S  0

#define GPIO_FUNC63_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBF0)
/* GPIO_FUNC63_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC63_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC63_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC63_OE_INV_SEL_V  0x1
#define GPIO_FUNC63_OE_INV_SEL_S  11
/* GPIO_FUNC63_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC63_OE_SEL    (BIT(10))
#define GPIO_FUNC63_OE_SEL_M  (BIT(10))
#define GPIO_FUNC63_OE_SEL_V  0x1
#define GPIO_FUNC63_OE_SEL_S  10
/* GPIO_FUNC63_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC63_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC63_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC63_OUT_INV_SEL_V  0x1
#define GPIO_FUNC63_OUT_INV_SEL_S  9
/* GPIO_FUNC63_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC63_OUT_SEL    0x000001FF
#define GPIO_FUNC63_OUT_SEL_M  ((GPIO_FUNC63_OUT_SEL_V)<<(GPIO_FUNC63_OUT_SEL_S))
#define GPIO_FUNC63_OUT_SEL_V  0x1FF
#define GPIO_FUNC63_OUT_SEL_S  0

#define GPIO_FUNC64_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBF4)
/* GPIO_FUNC64_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC64_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC64_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC64_OE_INV_SEL_V  0x1
#define GPIO_FUNC64_OE_INV_SEL_S  11
/* GPIO_FUNC64_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC64_OE_SEL    (BIT(10))
#define GPIO_FUNC64_OE_SEL_M  (BIT(10))
#define GPIO_FUNC64_OE_SEL_V  0x1
#define GPIO_FUNC64_OE_SEL_S  10
/* GPIO_FUNC64_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC64_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC64_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC64_OUT_INV_SEL_V  0x1
#define GPIO_FUNC64_OUT_INV_SEL_S  9
/* GPIO_FUNC64_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC64_OUT_SEL    0x000001FF
#define GPIO_FUNC64_OUT_SEL_M  ((GPIO_FUNC64_OUT_SEL_V)<<(GPIO_FUNC64_OUT_SEL_S))
#define GPIO_FUNC64_OUT_SEL_V  0x1FF
#define GPIO_FUNC64_OUT_SEL_S  0

#define GPIO_FUNC65_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBF8)
/* GPIO_FUNC65_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC65_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC65_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC65_OE_INV_SEL_V  0x1
#define GPIO_FUNC65_OE_INV_SEL_S  11
/* GPIO_FUNC65_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC65_OE_SEL    (BIT(10))
#define GPIO_FUNC65_OE_SEL_M  (BIT(10))
#define GPIO_FUNC65_OE_SEL_V  0x1
#define GPIO_FUNC65_OE_SEL_S  10
/* GPIO_FUNC65_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC65_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC65_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC65_OUT_INV_SEL_V  0x1
#define GPIO_FUNC65_OUT_INV_SEL_S  9
/* GPIO_FUNC65_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC65_OUT_SEL    0x000001FF
#define GPIO_FUNC65_OUT_SEL_M  ((GPIO_FUNC65_OUT_SEL_V)<<(GPIO_FUNC65_OUT_SEL_S))
#define GPIO_FUNC65_OUT_SEL_V  0x1FF
#define GPIO_FUNC65_OUT_SEL_S  0

#define GPIO_FUNC66_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xBFC)
/* GPIO_FUNC66_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC66_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC66_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC66_OE_INV_SEL_V  0x1
#define GPIO_FUNC66_OE_INV_SEL_S  11
/* GPIO_FUNC66_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC66_OE_SEL    (BIT(10))
#define GPIO_FUNC66_OE_SEL_M  (BIT(10))
#define GPIO_FUNC66_OE_SEL_V  0x1
#define GPIO_FUNC66_OE_SEL_S  10
/* GPIO_FUNC66_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC66_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC66_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC66_OUT_INV_SEL_V  0x1
#define GPIO_FUNC66_OUT_INV_SEL_S  9
/* GPIO_FUNC66_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC66_OUT_SEL    0x000001FF
#define GPIO_FUNC66_OUT_SEL_M  ((GPIO_FUNC66_OUT_SEL_V)<<(GPIO_FUNC66_OUT_SEL_S))
#define GPIO_FUNC66_OUT_SEL_V  0x1FF
#define GPIO_FUNC66_OUT_SEL_S  0

#define GPIO_FUNC67_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC00)
/* GPIO_FUNC67_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC67_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC67_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC67_OE_INV_SEL_V  0x1
#define GPIO_FUNC67_OE_INV_SEL_S  11
/* GPIO_FUNC67_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC67_OE_SEL    (BIT(10))
#define GPIO_FUNC67_OE_SEL_M  (BIT(10))
#define GPIO_FUNC67_OE_SEL_V  0x1
#define GPIO_FUNC67_OE_SEL_S  10
/* GPIO_FUNC67_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC67_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC67_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC67_OUT_INV_SEL_V  0x1
#define GPIO_FUNC67_OUT_INV_SEL_S  9
/* GPIO_FUNC67_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC67_OUT_SEL    0x000001FF
#define GPIO_FUNC67_OUT_SEL_M  ((GPIO_FUNC67_OUT_SEL_V)<<(GPIO_FUNC67_OUT_SEL_S))
#define GPIO_FUNC67_OUT_SEL_V  0x1FF
#define GPIO_FUNC67_OUT_SEL_S  0

#define GPIO_FUNC68_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC04)
/* GPIO_FUNC68_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC68_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC68_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC68_OE_INV_SEL_V  0x1
#define GPIO_FUNC68_OE_INV_SEL_S  11
/* GPIO_FUNC68_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC68_OE_SEL    (BIT(10))
#define GPIO_FUNC68_OE_SEL_M  (BIT(10))
#define GPIO_FUNC68_OE_SEL_V  0x1
#define GPIO_FUNC68_OE_SEL_S  10
/* GPIO_FUNC68_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC68_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC68_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC68_OUT_INV_SEL_V  0x1
#define GPIO_FUNC68_OUT_INV_SEL_S  9
/* GPIO_FUNC68_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC68_OUT_SEL    0x000001FF
#define GPIO_FUNC68_OUT_SEL_M  ((GPIO_FUNC68_OUT_SEL_V)<<(GPIO_FUNC68_OUT_SEL_S))
#define GPIO_FUNC68_OUT_SEL_V  0x1FF
#define GPIO_FUNC68_OUT_SEL_S  0

#define GPIO_FUNC69_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC08)
/* GPIO_FUNC69_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC69_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC69_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC69_OE_INV_SEL_V  0x1
#define GPIO_FUNC69_OE_INV_SEL_S  11
/* GPIO_FUNC69_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC69_OE_SEL    (BIT(10))
#define GPIO_FUNC69_OE_SEL_M  (BIT(10))
#define GPIO_FUNC69_OE_SEL_V  0x1
#define GPIO_FUNC69_OE_SEL_S  10
/* GPIO_FUNC69_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC69_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC69_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC69_OUT_INV_SEL_V  0x1
#define GPIO_FUNC69_OUT_INV_SEL_S  9
/* GPIO_FUNC69_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC69_OUT_SEL    0x000001FF
#define GPIO_FUNC69_OUT_SEL_M  ((GPIO_FUNC69_OUT_SEL_V)<<(GPIO_FUNC69_OUT_SEL_S))
#define GPIO_FUNC69_OUT_SEL_V  0x1FF
#define GPIO_FUNC69_OUT_SEL_S  0

#define GPIO_FUNC70_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC0C)
/* GPIO_FUNC70_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC70_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC70_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC70_OE_INV_SEL_V  0x1
#define GPIO_FUNC70_OE_INV_SEL_S  11
/* GPIO_FUNC70_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC70_OE_SEL    (BIT(10))
#define GPIO_FUNC70_OE_SEL_M  (BIT(10))
#define GPIO_FUNC70_OE_SEL_V  0x1
#define GPIO_FUNC70_OE_SEL_S  10
/* GPIO_FUNC70_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC70_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC70_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC70_OUT_INV_SEL_V  0x1
#define GPIO_FUNC70_OUT_INV_SEL_S  9
/* GPIO_FUNC70_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC70_OUT_SEL    0x000001FF
#define GPIO_FUNC70_OUT_SEL_M  ((GPIO_FUNC70_OUT_SEL_V)<<(GPIO_FUNC70_OUT_SEL_S))
#define GPIO_FUNC70_OUT_SEL_V  0x1FF
#define GPIO_FUNC70_OUT_SEL_S  0

#define GPIO_FUNC71_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC10)
/* GPIO_FUNC71_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC71_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC71_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC71_OE_INV_SEL_V  0x1
#define GPIO_FUNC71_OE_INV_SEL_S  11
/* GPIO_FUNC71_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC71_OE_SEL    (BIT(10))
#define GPIO_FUNC71_OE_SEL_M  (BIT(10))
#define GPIO_FUNC71_OE_SEL_V  0x1
#define GPIO_FUNC71_OE_SEL_S  10
/* GPIO_FUNC71_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC71_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC71_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC71_OUT_INV_SEL_V  0x1
#define GPIO_FUNC71_OUT_INV_SEL_S  9
/* GPIO_FUNC71_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC71_OUT_SEL    0x000001FF
#define GPIO_FUNC71_OUT_SEL_M  ((GPIO_FUNC71_OUT_SEL_V)<<(GPIO_FUNC71_OUT_SEL_S))
#define GPIO_FUNC71_OUT_SEL_V  0x1FF
#define GPIO_FUNC71_OUT_SEL_S  0

#define GPIO_FUNC72_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC14)
/* GPIO_FUNC72_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC72_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC72_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC72_OE_INV_SEL_V  0x1
#define GPIO_FUNC72_OE_INV_SEL_S  11
/* GPIO_FUNC72_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC72_OE_SEL    (BIT(10))
#define GPIO_FUNC72_OE_SEL_M  (BIT(10))
#define GPIO_FUNC72_OE_SEL_V  0x1
#define GPIO_FUNC72_OE_SEL_S  10
/* GPIO_FUNC72_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC72_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC72_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC72_OUT_INV_SEL_V  0x1
#define GPIO_FUNC72_OUT_INV_SEL_S  9
/* GPIO_FUNC72_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC72_OUT_SEL    0x000001FF
#define GPIO_FUNC72_OUT_SEL_M  ((GPIO_FUNC72_OUT_SEL_V)<<(GPIO_FUNC72_OUT_SEL_S))
#define GPIO_FUNC72_OUT_SEL_V  0x1FF
#define GPIO_FUNC72_OUT_SEL_S  0

#define GPIO_FUNC73_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC18)
/* GPIO_FUNC73_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC73_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC73_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC73_OE_INV_SEL_V  0x1
#define GPIO_FUNC73_OE_INV_SEL_S  11
/* GPIO_FUNC73_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC73_OE_SEL    (BIT(10))
#define GPIO_FUNC73_OE_SEL_M  (BIT(10))
#define GPIO_FUNC73_OE_SEL_V  0x1
#define GPIO_FUNC73_OE_SEL_S  10
/* GPIO_FUNC73_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC73_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC73_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC73_OUT_INV_SEL_V  0x1
#define GPIO_FUNC73_OUT_INV_SEL_S  9
/* GPIO_FUNC73_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC73_OUT_SEL    0x000001FF
#define GPIO_FUNC73_OUT_SEL_M  ((GPIO_FUNC73_OUT_SEL_V)<<(GPIO_FUNC73_OUT_SEL_S))
#define GPIO_FUNC73_OUT_SEL_V  0x1FF
#define GPIO_FUNC73_OUT_SEL_S  0

#define GPIO_FUNC74_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC1C)
/* GPIO_FUNC74_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC74_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC74_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC74_OE_INV_SEL_V  0x1
#define GPIO_FUNC74_OE_INV_SEL_S  11
/* GPIO_FUNC74_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC74_OE_SEL    (BIT(10))
#define GPIO_FUNC74_OE_SEL_M  (BIT(10))
#define GPIO_FUNC74_OE_SEL_V  0x1
#define GPIO_FUNC74_OE_SEL_S  10
/* GPIO_FUNC74_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC74_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC74_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC74_OUT_INV_SEL_V  0x1
#define GPIO_FUNC74_OUT_INV_SEL_S  9
/* GPIO_FUNC74_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC74_OUT_SEL    0x000001FF
#define GPIO_FUNC74_OUT_SEL_M  ((GPIO_FUNC74_OUT_SEL_V)<<(GPIO_FUNC74_OUT_SEL_S))
#define GPIO_FUNC74_OUT_SEL_V  0x1FF
#define GPIO_FUNC74_OUT_SEL_S  0

#define GPIO_FUNC75_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC20)
/* GPIO_FUNC75_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC75_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC75_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC75_OE_INV_SEL_V  0x1
#define GPIO_FUNC75_OE_INV_SEL_S  11
/* GPIO_FUNC75_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC75_OE_SEL    (BIT(10))
#define GPIO_FUNC75_OE_SEL_M  (BIT(10))
#define GPIO_FUNC75_OE_SEL_V  0x1
#define GPIO_FUNC75_OE_SEL_S  10
/* GPIO_FUNC75_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC75_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC75_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC75_OUT_INV_SEL_V  0x1
#define GPIO_FUNC75_OUT_INV_SEL_S  9
/* GPIO_FUNC75_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC75_OUT_SEL    0x000001FF
#define GPIO_FUNC75_OUT_SEL_M  ((GPIO_FUNC75_OUT_SEL_V)<<(GPIO_FUNC75_OUT_SEL_S))
#define GPIO_FUNC75_OUT_SEL_V  0x1FF
#define GPIO_FUNC75_OUT_SEL_S  0

#define GPIO_FUNC76_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC24)
/* GPIO_FUNC76_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC76_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC76_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC76_OE_INV_SEL_V  0x1
#define GPIO_FUNC76_OE_INV_SEL_S  11
/* GPIO_FUNC76_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC76_OE_SEL    (BIT(10))
#define GPIO_FUNC76_OE_SEL_M  (BIT(10))
#define GPIO_FUNC76_OE_SEL_V  0x1
#define GPIO_FUNC76_OE_SEL_S  10
/* GPIO_FUNC76_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC76_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC76_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC76_OUT_INV_SEL_V  0x1
#define GPIO_FUNC76_OUT_INV_SEL_S  9
/* GPIO_FUNC76_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC76_OUT_SEL    0x000001FF
#define GPIO_FUNC76_OUT_SEL_M  ((GPIO_FUNC76_OUT_SEL_V)<<(GPIO_FUNC76_OUT_SEL_S))
#define GPIO_FUNC76_OUT_SEL_V  0x1FF
#define GPIO_FUNC76_OUT_SEL_S  0

#define GPIO_FUNC77_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC28)
/* GPIO_FUNC77_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC77_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC77_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC77_OE_INV_SEL_V  0x1
#define GPIO_FUNC77_OE_INV_SEL_S  11
/* GPIO_FUNC77_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC77_OE_SEL    (BIT(10))
#define GPIO_FUNC77_OE_SEL_M  (BIT(10))
#define GPIO_FUNC77_OE_SEL_V  0x1
#define GPIO_FUNC77_OE_SEL_S  10
/* GPIO_FUNC77_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC77_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC77_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC77_OUT_INV_SEL_V  0x1
#define GPIO_FUNC77_OUT_INV_SEL_S  9
/* GPIO_FUNC77_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC77_OUT_SEL    0x000001FF
#define GPIO_FUNC77_OUT_SEL_M  ((GPIO_FUNC77_OUT_SEL_V)<<(GPIO_FUNC77_OUT_SEL_S))
#define GPIO_FUNC77_OUT_SEL_V  0x1FF
#define GPIO_FUNC77_OUT_SEL_S  0

#define GPIO_FUNC78_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC2C)
/* GPIO_FUNC78_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC78_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC78_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC78_OE_INV_SEL_V  0x1
#define GPIO_FUNC78_OE_INV_SEL_S  11
/* GPIO_FUNC78_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC78_OE_SEL    (BIT(10))
#define GPIO_FUNC78_OE_SEL_M  (BIT(10))
#define GPIO_FUNC78_OE_SEL_V  0x1
#define GPIO_FUNC78_OE_SEL_S  10
/* GPIO_FUNC78_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC78_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC78_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC78_OUT_INV_SEL_V  0x1
#define GPIO_FUNC78_OUT_INV_SEL_S  9
/* GPIO_FUNC78_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC78_OUT_SEL    0x000001FF
#define GPIO_FUNC78_OUT_SEL_M  ((GPIO_FUNC78_OUT_SEL_V)<<(GPIO_FUNC78_OUT_SEL_S))
#define GPIO_FUNC78_OUT_SEL_V  0x1FF
#define GPIO_FUNC78_OUT_SEL_S  0

#define GPIO_FUNC79_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC30)
/* GPIO_FUNC79_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC79_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC79_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC79_OE_INV_SEL_V  0x1
#define GPIO_FUNC79_OE_INV_SEL_S  11
/* GPIO_FUNC79_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC79_OE_SEL    (BIT(10))
#define GPIO_FUNC79_OE_SEL_M  (BIT(10))
#define GPIO_FUNC79_OE_SEL_V  0x1
#define GPIO_FUNC79_OE_SEL_S  10
/* GPIO_FUNC79_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC79_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC79_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC79_OUT_INV_SEL_V  0x1
#define GPIO_FUNC79_OUT_INV_SEL_S  9
/* GPIO_FUNC79_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC79_OUT_SEL    0x000001FF
#define GPIO_FUNC79_OUT_SEL_M  ((GPIO_FUNC79_OUT_SEL_V)<<(GPIO_FUNC79_OUT_SEL_S))
#define GPIO_FUNC79_OUT_SEL_V  0x1FF
#define GPIO_FUNC79_OUT_SEL_S  0

#define GPIO_FUNC80_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC34)
/* GPIO_FUNC80_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC80_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC80_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC80_OE_INV_SEL_V  0x1
#define GPIO_FUNC80_OE_INV_SEL_S  11
/* GPIO_FUNC80_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC80_OE_SEL    (BIT(10))
#define GPIO_FUNC80_OE_SEL_M  (BIT(10))
#define GPIO_FUNC80_OE_SEL_V  0x1
#define GPIO_FUNC80_OE_SEL_S  10
/* GPIO_FUNC80_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC80_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC80_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC80_OUT_INV_SEL_V  0x1
#define GPIO_FUNC80_OUT_INV_SEL_S  9
/* GPIO_FUNC80_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC80_OUT_SEL    0x000001FF
#define GPIO_FUNC80_OUT_SEL_M  ((GPIO_FUNC80_OUT_SEL_V)<<(GPIO_FUNC80_OUT_SEL_S))
#define GPIO_FUNC80_OUT_SEL_V  0x1FF
#define GPIO_FUNC80_OUT_SEL_S  0

#define GPIO_FUNC81_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC38)
/* GPIO_FUNC81_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC81_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC81_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC81_OE_INV_SEL_V  0x1
#define GPIO_FUNC81_OE_INV_SEL_S  11
/* GPIO_FUNC81_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC81_OE_SEL    (BIT(10))
#define GPIO_FUNC81_OE_SEL_M  (BIT(10))
#define GPIO_FUNC81_OE_SEL_V  0x1
#define GPIO_FUNC81_OE_SEL_S  10
/* GPIO_FUNC81_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC81_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC81_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC81_OUT_INV_SEL_V  0x1
#define GPIO_FUNC81_OUT_INV_SEL_S  9
/* GPIO_FUNC81_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC81_OUT_SEL    0x000001FF
#define GPIO_FUNC81_OUT_SEL_M  ((GPIO_FUNC81_OUT_SEL_V)<<(GPIO_FUNC81_OUT_SEL_S))
#define GPIO_FUNC81_OUT_SEL_V  0x1FF
#define GPIO_FUNC81_OUT_SEL_S  0

#define GPIO_FUNC82_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC3C)
/* GPIO_FUNC82_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC82_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC82_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC82_OE_INV_SEL_V  0x1
#define GPIO_FUNC82_OE_INV_SEL_S  11
/* GPIO_FUNC82_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC82_OE_SEL    (BIT(10))
#define GPIO_FUNC82_OE_SEL_M  (BIT(10))
#define GPIO_FUNC82_OE_SEL_V  0x1
#define GPIO_FUNC82_OE_SEL_S  10
/* GPIO_FUNC82_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC82_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC82_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC82_OUT_INV_SEL_V  0x1
#define GPIO_FUNC82_OUT_INV_SEL_S  9
/* GPIO_FUNC82_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC82_OUT_SEL    0x000001FF
#define GPIO_FUNC82_OUT_SEL_M  ((GPIO_FUNC82_OUT_SEL_V)<<(GPIO_FUNC82_OUT_SEL_S))
#define GPIO_FUNC82_OUT_SEL_V  0x1FF
#define GPIO_FUNC82_OUT_SEL_S  0

#define GPIO_FUNC83_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC40)
/* GPIO_FUNC83_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC83_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC83_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC83_OE_INV_SEL_V  0x1
#define GPIO_FUNC83_OE_INV_SEL_S  11
/* GPIO_FUNC83_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC83_OE_SEL    (BIT(10))
#define GPIO_FUNC83_OE_SEL_M  (BIT(10))
#define GPIO_FUNC83_OE_SEL_V  0x1
#define GPIO_FUNC83_OE_SEL_S  10
/* GPIO_FUNC83_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC83_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC83_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC83_OUT_INV_SEL_V  0x1
#define GPIO_FUNC83_OUT_INV_SEL_S  9
/* GPIO_FUNC83_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC83_OUT_SEL    0x000001FF
#define GPIO_FUNC83_OUT_SEL_M  ((GPIO_FUNC83_OUT_SEL_V)<<(GPIO_FUNC83_OUT_SEL_S))
#define GPIO_FUNC83_OUT_SEL_V  0x1FF
#define GPIO_FUNC83_OUT_SEL_S  0

#define GPIO_FUNC84_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC44)
/* GPIO_FUNC84_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC84_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC84_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC84_OE_INV_SEL_V  0x1
#define GPIO_FUNC84_OE_INV_SEL_S  11
/* GPIO_FUNC84_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC84_OE_SEL    (BIT(10))
#define GPIO_FUNC84_OE_SEL_M  (BIT(10))
#define GPIO_FUNC84_OE_SEL_V  0x1
#define GPIO_FUNC84_OE_SEL_S  10
/* GPIO_FUNC84_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC84_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC84_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC84_OUT_INV_SEL_V  0x1
#define GPIO_FUNC84_OUT_INV_SEL_S  9
/* GPIO_FUNC84_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC84_OUT_SEL    0x000001FF
#define GPIO_FUNC84_OUT_SEL_M  ((GPIO_FUNC84_OUT_SEL_V)<<(GPIO_FUNC84_OUT_SEL_S))
#define GPIO_FUNC84_OUT_SEL_V  0x1FF
#define GPIO_FUNC84_OUT_SEL_S  0

#define GPIO_FUNC85_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC48)
/* GPIO_FUNC85_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC85_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC85_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC85_OE_INV_SEL_V  0x1
#define GPIO_FUNC85_OE_INV_SEL_S  11
/* GPIO_FUNC85_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC85_OE_SEL    (BIT(10))
#define GPIO_FUNC85_OE_SEL_M  (BIT(10))
#define GPIO_FUNC85_OE_SEL_V  0x1
#define GPIO_FUNC85_OE_SEL_S  10
/* GPIO_FUNC85_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC85_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC85_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC85_OUT_INV_SEL_V  0x1
#define GPIO_FUNC85_OUT_INV_SEL_S  9
/* GPIO_FUNC85_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC85_OUT_SEL    0x000001FF
#define GPIO_FUNC85_OUT_SEL_M  ((GPIO_FUNC85_OUT_SEL_V)<<(GPIO_FUNC85_OUT_SEL_S))
#define GPIO_FUNC85_OUT_SEL_V  0x1FF
#define GPIO_FUNC85_OUT_SEL_S  0

#define GPIO_FUNC86_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC4C)
/* GPIO_FUNC86_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC86_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC86_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC86_OE_INV_SEL_V  0x1
#define GPIO_FUNC86_OE_INV_SEL_S  11
/* GPIO_FUNC86_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC86_OE_SEL    (BIT(10))
#define GPIO_FUNC86_OE_SEL_M  (BIT(10))
#define GPIO_FUNC86_OE_SEL_V  0x1
#define GPIO_FUNC86_OE_SEL_S  10
/* GPIO_FUNC86_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC86_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC86_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC86_OUT_INV_SEL_V  0x1
#define GPIO_FUNC86_OUT_INV_SEL_S  9
/* GPIO_FUNC86_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC86_OUT_SEL    0x000001FF
#define GPIO_FUNC86_OUT_SEL_M  ((GPIO_FUNC86_OUT_SEL_V)<<(GPIO_FUNC86_OUT_SEL_S))
#define GPIO_FUNC86_OUT_SEL_V  0x1FF
#define GPIO_FUNC86_OUT_SEL_S  0

#define GPIO_FUNC87_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC50)
/* GPIO_FUNC87_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC87_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC87_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC87_OE_INV_SEL_V  0x1
#define GPIO_FUNC87_OE_INV_SEL_S  11
/* GPIO_FUNC87_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC87_OE_SEL    (BIT(10))
#define GPIO_FUNC87_OE_SEL_M  (BIT(10))
#define GPIO_FUNC87_OE_SEL_V  0x1
#define GPIO_FUNC87_OE_SEL_S  10
/* GPIO_FUNC87_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC87_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC87_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC87_OUT_INV_SEL_V  0x1
#define GPIO_FUNC87_OUT_INV_SEL_S  9
/* GPIO_FUNC87_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC87_OUT_SEL    0x000001FF
#define GPIO_FUNC87_OUT_SEL_M  ((GPIO_FUNC87_OUT_SEL_V)<<(GPIO_FUNC87_OUT_SEL_S))
#define GPIO_FUNC87_OUT_SEL_V  0x1FF
#define GPIO_FUNC87_OUT_SEL_S  0

#define GPIO_FUNC88_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC54)
/* GPIO_FUNC88_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC88_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC88_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC88_OE_INV_SEL_V  0x1
#define GPIO_FUNC88_OE_INV_SEL_S  11
/* GPIO_FUNC88_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC88_OE_SEL    (BIT(10))
#define GPIO_FUNC88_OE_SEL_M  (BIT(10))
#define GPIO_FUNC88_OE_SEL_V  0x1
#define GPIO_FUNC88_OE_SEL_S  10
/* GPIO_FUNC88_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC88_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC88_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC88_OUT_INV_SEL_V  0x1
#define GPIO_FUNC88_OUT_INV_SEL_S  9
/* GPIO_FUNC88_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC88_OUT_SEL    0x000001FF
#define GPIO_FUNC88_OUT_SEL_M  ((GPIO_FUNC88_OUT_SEL_V)<<(GPIO_FUNC88_OUT_SEL_S))
#define GPIO_FUNC88_OUT_SEL_V  0x1FF
#define GPIO_FUNC88_OUT_SEL_S  0

#define GPIO_FUNC89_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC58)
/* GPIO_FUNC89_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC89_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC89_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC89_OE_INV_SEL_V  0x1
#define GPIO_FUNC89_OE_INV_SEL_S  11
/* GPIO_FUNC89_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC89_OE_SEL    (BIT(10))
#define GPIO_FUNC89_OE_SEL_M  (BIT(10))
#define GPIO_FUNC89_OE_SEL_V  0x1
#define GPIO_FUNC89_OE_SEL_S  10
/* GPIO_FUNC89_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC89_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC89_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC89_OUT_INV_SEL_V  0x1
#define GPIO_FUNC89_OUT_INV_SEL_S  9
/* GPIO_FUNC89_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC89_OUT_SEL    0x000001FF
#define GPIO_FUNC89_OUT_SEL_M  ((GPIO_FUNC89_OUT_SEL_V)<<(GPIO_FUNC89_OUT_SEL_S))
#define GPIO_FUNC89_OUT_SEL_V  0x1FF
#define GPIO_FUNC89_OUT_SEL_S  0

#define GPIO_FUNC90_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC5C)
/* GPIO_FUNC90_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC90_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC90_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC90_OE_INV_SEL_V  0x1
#define GPIO_FUNC90_OE_INV_SEL_S  11
/* GPIO_FUNC90_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC90_OE_SEL    (BIT(10))
#define GPIO_FUNC90_OE_SEL_M  (BIT(10))
#define GPIO_FUNC90_OE_SEL_V  0x1
#define GPIO_FUNC90_OE_SEL_S  10
/* GPIO_FUNC90_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC90_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC90_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC90_OUT_INV_SEL_V  0x1
#define GPIO_FUNC90_OUT_INV_SEL_S  9
/* GPIO_FUNC90_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC90_OUT_SEL    0x000001FF
#define GPIO_FUNC90_OUT_SEL_M  ((GPIO_FUNC90_OUT_SEL_V)<<(GPIO_FUNC90_OUT_SEL_S))
#define GPIO_FUNC90_OUT_SEL_V  0x1FF
#define GPIO_FUNC90_OUT_SEL_S  0

#define GPIO_FUNC91_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC60)
/* GPIO_FUNC91_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC91_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC91_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC91_OE_INV_SEL_V  0x1
#define GPIO_FUNC91_OE_INV_SEL_S  11
/* GPIO_FUNC91_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC91_OE_SEL    (BIT(10))
#define GPIO_FUNC91_OE_SEL_M  (BIT(10))
#define GPIO_FUNC91_OE_SEL_V  0x1
#define GPIO_FUNC91_OE_SEL_S  10
/* GPIO_FUNC91_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC91_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC91_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC91_OUT_INV_SEL_V  0x1
#define GPIO_FUNC91_OUT_INV_SEL_S  9
/* GPIO_FUNC91_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC91_OUT_SEL    0x000001FF
#define GPIO_FUNC91_OUT_SEL_M  ((GPIO_FUNC91_OUT_SEL_V)<<(GPIO_FUNC91_OUT_SEL_S))
#define GPIO_FUNC91_OUT_SEL_V  0x1FF
#define GPIO_FUNC91_OUT_SEL_S  0

#define GPIO_FUNC92_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC64)
/* GPIO_FUNC92_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC92_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC92_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC92_OE_INV_SEL_V  0x1
#define GPIO_FUNC92_OE_INV_SEL_S  11
/* GPIO_FUNC92_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC92_OE_SEL    (BIT(10))
#define GPIO_FUNC92_OE_SEL_M  (BIT(10))
#define GPIO_FUNC92_OE_SEL_V  0x1
#define GPIO_FUNC92_OE_SEL_S  10
/* GPIO_FUNC92_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC92_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC92_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC92_OUT_INV_SEL_V  0x1
#define GPIO_FUNC92_OUT_INV_SEL_S  9
/* GPIO_FUNC92_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC92_OUT_SEL    0x000001FF
#define GPIO_FUNC92_OUT_SEL_M  ((GPIO_FUNC92_OUT_SEL_V)<<(GPIO_FUNC92_OUT_SEL_S))
#define GPIO_FUNC92_OUT_SEL_V  0x1FF
#define GPIO_FUNC92_OUT_SEL_S  0

#define GPIO_FUNC93_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC68)
/* GPIO_FUNC93_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC93_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC93_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC93_OE_INV_SEL_V  0x1
#define GPIO_FUNC93_OE_INV_SEL_S  11
/* GPIO_FUNC93_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC93_OE_SEL    (BIT(10))
#define GPIO_FUNC93_OE_SEL_M  (BIT(10))
#define GPIO_FUNC93_OE_SEL_V  0x1
#define GPIO_FUNC93_OE_SEL_S  10
/* GPIO_FUNC93_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC93_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC93_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC93_OUT_INV_SEL_V  0x1
#define GPIO_FUNC93_OUT_INV_SEL_S  9
/* GPIO_FUNC93_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC93_OUT_SEL    0x000001FF
#define GPIO_FUNC93_OUT_SEL_M  ((GPIO_FUNC93_OUT_SEL_V)<<(GPIO_FUNC93_OUT_SEL_S))
#define GPIO_FUNC93_OUT_SEL_V  0x1FF
#define GPIO_FUNC93_OUT_SEL_S  0

#define GPIO_FUNC94_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC6C)
/* GPIO_FUNC94_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC94_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC94_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC94_OE_INV_SEL_V  0x1
#define GPIO_FUNC94_OE_INV_SEL_S  11
/* GPIO_FUNC94_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC94_OE_SEL    (BIT(10))
#define GPIO_FUNC94_OE_SEL_M  (BIT(10))
#define GPIO_FUNC94_OE_SEL_V  0x1
#define GPIO_FUNC94_OE_SEL_S  10
/* GPIO_FUNC94_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC94_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC94_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC94_OUT_INV_SEL_V  0x1
#define GPIO_FUNC94_OUT_INV_SEL_S  9
/* GPIO_FUNC94_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC94_OUT_SEL    0x000001FF
#define GPIO_FUNC94_OUT_SEL_M  ((GPIO_FUNC94_OUT_SEL_V)<<(GPIO_FUNC94_OUT_SEL_S))
#define GPIO_FUNC94_OUT_SEL_V  0x1FF
#define GPIO_FUNC94_OUT_SEL_S  0

#define GPIO_FUNC95_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC70)
/* GPIO_FUNC95_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC95_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC95_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC95_OE_INV_SEL_V  0x1
#define GPIO_FUNC95_OE_INV_SEL_S  11
/* GPIO_FUNC95_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC95_OE_SEL    (BIT(10))
#define GPIO_FUNC95_OE_SEL_M  (BIT(10))
#define GPIO_FUNC95_OE_SEL_V  0x1
#define GPIO_FUNC95_OE_SEL_S  10
/* GPIO_FUNC95_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC95_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC95_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC95_OUT_INV_SEL_V  0x1
#define GPIO_FUNC95_OUT_INV_SEL_S  9
/* GPIO_FUNC95_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC95_OUT_SEL    0x000001FF
#define GPIO_FUNC95_OUT_SEL_M  ((GPIO_FUNC95_OUT_SEL_V)<<(GPIO_FUNC95_OUT_SEL_S))
#define GPIO_FUNC95_OUT_SEL_V  0x1FF
#define GPIO_FUNC95_OUT_SEL_S  0

#define GPIO_FUNC96_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC74)
/* GPIO_FUNC96_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC96_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC96_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC96_OE_INV_SEL_V  0x1
#define GPIO_FUNC96_OE_INV_SEL_S  11
/* GPIO_FUNC96_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC96_OE_SEL    (BIT(10))
#define GPIO_FUNC96_OE_SEL_M  (BIT(10))
#define GPIO_FUNC96_OE_SEL_V  0x1
#define GPIO_FUNC96_OE_SEL_S  10
/* GPIO_FUNC96_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC96_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC96_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC96_OUT_INV_SEL_V  0x1
#define GPIO_FUNC96_OUT_INV_SEL_S  9
/* GPIO_FUNC96_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC96_OUT_SEL    0x000001FF
#define GPIO_FUNC96_OUT_SEL_M  ((GPIO_FUNC96_OUT_SEL_V)<<(GPIO_FUNC96_OUT_SEL_S))
#define GPIO_FUNC96_OUT_SEL_V  0x1FF
#define GPIO_FUNC96_OUT_SEL_S  0

#define GPIO_FUNC97_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC78)
/* GPIO_FUNC97_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC97_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC97_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC97_OE_INV_SEL_V  0x1
#define GPIO_FUNC97_OE_INV_SEL_S  11
/* GPIO_FUNC97_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC97_OE_SEL    (BIT(10))
#define GPIO_FUNC97_OE_SEL_M  (BIT(10))
#define GPIO_FUNC97_OE_SEL_V  0x1
#define GPIO_FUNC97_OE_SEL_S  10
/* GPIO_FUNC97_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC97_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC97_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC97_OUT_INV_SEL_V  0x1
#define GPIO_FUNC97_OUT_INV_SEL_S  9
/* GPIO_FUNC97_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC97_OUT_SEL    0x000001FF
#define GPIO_FUNC97_OUT_SEL_M  ((GPIO_FUNC97_OUT_SEL_V)<<(GPIO_FUNC97_OUT_SEL_S))
#define GPIO_FUNC97_OUT_SEL_V  0x1FF
#define GPIO_FUNC97_OUT_SEL_S  0

#define GPIO_FUNC98_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC7C)
/* GPIO_FUNC98_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC98_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC98_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC98_OE_INV_SEL_V  0x1
#define GPIO_FUNC98_OE_INV_SEL_S  11
/* GPIO_FUNC98_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC98_OE_SEL    (BIT(10))
#define GPIO_FUNC98_OE_SEL_M  (BIT(10))
#define GPIO_FUNC98_OE_SEL_V  0x1
#define GPIO_FUNC98_OE_SEL_S  10
/* GPIO_FUNC98_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC98_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC98_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC98_OUT_INV_SEL_V  0x1
#define GPIO_FUNC98_OUT_INV_SEL_S  9
/* GPIO_FUNC98_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC98_OUT_SEL    0x000001FF
#define GPIO_FUNC98_OUT_SEL_M  ((GPIO_FUNC98_OUT_SEL_V)<<(GPIO_FUNC98_OUT_SEL_S))
#define GPIO_FUNC98_OUT_SEL_V  0x1FF
#define GPIO_FUNC98_OUT_SEL_S  0

#define GPIO_FUNC99_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC80)
/* GPIO_FUNC99_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC99_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC99_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC99_OE_INV_SEL_V  0x1
#define GPIO_FUNC99_OE_INV_SEL_S  11
/* GPIO_FUNC99_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC99_OE_SEL    (BIT(10))
#define GPIO_FUNC99_OE_SEL_M  (BIT(10))
#define GPIO_FUNC99_OE_SEL_V  0x1
#define GPIO_FUNC99_OE_SEL_S  10
/* GPIO_FUNC99_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC99_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC99_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC99_OUT_INV_SEL_V  0x1
#define GPIO_FUNC99_OUT_INV_SEL_S  9
/* GPIO_FUNC99_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC99_OUT_SEL    0x000001FF
#define GPIO_FUNC99_OUT_SEL_M  ((GPIO_FUNC99_OUT_SEL_V)<<(GPIO_FUNC99_OUT_SEL_S))
#define GPIO_FUNC99_OUT_SEL_V  0x1FF
#define GPIO_FUNC99_OUT_SEL_S  0

#define GPIO_FUNC100_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC84)
/* GPIO_FUNC100_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC100_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC100_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC100_OE_INV_SEL_V  0x1
#define GPIO_FUNC100_OE_INV_SEL_S  11
/* GPIO_FUNC100_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC100_OE_SEL    (BIT(10))
#define GPIO_FUNC100_OE_SEL_M  (BIT(10))
#define GPIO_FUNC100_OE_SEL_V  0x1
#define GPIO_FUNC100_OE_SEL_S  10
/* GPIO_FUNC100_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC100_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC100_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC100_OUT_INV_SEL_V  0x1
#define GPIO_FUNC100_OUT_INV_SEL_S  9
/* GPIO_FUNC100_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC100_OUT_SEL    0x000001FF
#define GPIO_FUNC100_OUT_SEL_M  ((GPIO_FUNC100_OUT_SEL_V)<<(GPIO_FUNC100_OUT_SEL_S))
#define GPIO_FUNC100_OUT_SEL_V  0x1FF
#define GPIO_FUNC100_OUT_SEL_S  0

#define GPIO_FUNC101_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC88)
/* GPIO_FUNC101_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC101_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC101_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC101_OE_INV_SEL_V  0x1
#define GPIO_FUNC101_OE_INV_SEL_S  11
/* GPIO_FUNC101_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC101_OE_SEL    (BIT(10))
#define GPIO_FUNC101_OE_SEL_M  (BIT(10))
#define GPIO_FUNC101_OE_SEL_V  0x1
#define GPIO_FUNC101_OE_SEL_S  10
/* GPIO_FUNC101_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC101_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC101_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC101_OUT_INV_SEL_V  0x1
#define GPIO_FUNC101_OUT_INV_SEL_S  9
/* GPIO_FUNC101_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC101_OUT_SEL    0x000001FF
#define GPIO_FUNC101_OUT_SEL_M  ((GPIO_FUNC101_OUT_SEL_V)<<(GPIO_FUNC101_OUT_SEL_S))
#define GPIO_FUNC101_OUT_SEL_V  0x1FF
#define GPIO_FUNC101_OUT_SEL_S  0

#define GPIO_FUNC102_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC8C)
/* GPIO_FUNC102_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC102_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC102_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC102_OE_INV_SEL_V  0x1
#define GPIO_FUNC102_OE_INV_SEL_S  11
/* GPIO_FUNC102_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC102_OE_SEL    (BIT(10))
#define GPIO_FUNC102_OE_SEL_M  (BIT(10))
#define GPIO_FUNC102_OE_SEL_V  0x1
#define GPIO_FUNC102_OE_SEL_S  10
/* GPIO_FUNC102_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC102_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC102_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC102_OUT_INV_SEL_V  0x1
#define GPIO_FUNC102_OUT_INV_SEL_S  9
/* GPIO_FUNC102_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC102_OUT_SEL    0x000001FF
#define GPIO_FUNC102_OUT_SEL_M  ((GPIO_FUNC102_OUT_SEL_V)<<(GPIO_FUNC102_OUT_SEL_S))
#define GPIO_FUNC102_OUT_SEL_V  0x1FF
#define GPIO_FUNC102_OUT_SEL_S  0

#define GPIO_FUNC103_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC90)
/* GPIO_FUNC103_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC103_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC103_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC103_OE_INV_SEL_V  0x1
#define GPIO_FUNC103_OE_INV_SEL_S  11
/* GPIO_FUNC103_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC103_OE_SEL    (BIT(10))
#define GPIO_FUNC103_OE_SEL_M  (BIT(10))
#define GPIO_FUNC103_OE_SEL_V  0x1
#define GPIO_FUNC103_OE_SEL_S  10
/* GPIO_FUNC103_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC103_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC103_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC103_OUT_INV_SEL_V  0x1
#define GPIO_FUNC103_OUT_INV_SEL_S  9
/* GPIO_FUNC103_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC103_OUT_SEL    0x000001FF
#define GPIO_FUNC103_OUT_SEL_M  ((GPIO_FUNC103_OUT_SEL_V)<<(GPIO_FUNC103_OUT_SEL_S))
#define GPIO_FUNC103_OUT_SEL_V  0x1FF
#define GPIO_FUNC103_OUT_SEL_S  0

#define GPIO_FUNC104_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC94)
/* GPIO_FUNC104_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC104_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC104_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC104_OE_INV_SEL_V  0x1
#define GPIO_FUNC104_OE_INV_SEL_S  11
/* GPIO_FUNC104_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC104_OE_SEL    (BIT(10))
#define GPIO_FUNC104_OE_SEL_M  (BIT(10))
#define GPIO_FUNC104_OE_SEL_V  0x1
#define GPIO_FUNC104_OE_SEL_S  10
/* GPIO_FUNC104_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC104_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC104_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC104_OUT_INV_SEL_V  0x1
#define GPIO_FUNC104_OUT_INV_SEL_S  9
/* GPIO_FUNC104_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC104_OUT_SEL    0x000001FF
#define GPIO_FUNC104_OUT_SEL_M  ((GPIO_FUNC104_OUT_SEL_V)<<(GPIO_FUNC104_OUT_SEL_S))
#define GPIO_FUNC104_OUT_SEL_V  0x1FF
#define GPIO_FUNC104_OUT_SEL_S  0

#define GPIO_FUNC105_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC98)
/* GPIO_FUNC105_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC105_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC105_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC105_OE_INV_SEL_V  0x1
#define GPIO_FUNC105_OE_INV_SEL_S  11
/* GPIO_FUNC105_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC105_OE_SEL    (BIT(10))
#define GPIO_FUNC105_OE_SEL_M  (BIT(10))
#define GPIO_FUNC105_OE_SEL_V  0x1
#define GPIO_FUNC105_OE_SEL_S  10
/* GPIO_FUNC105_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC105_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC105_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC105_OUT_INV_SEL_V  0x1
#define GPIO_FUNC105_OUT_INV_SEL_S  9
/* GPIO_FUNC105_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC105_OUT_SEL    0x000001FF
#define GPIO_FUNC105_OUT_SEL_M  ((GPIO_FUNC105_OUT_SEL_V)<<(GPIO_FUNC105_OUT_SEL_S))
#define GPIO_FUNC105_OUT_SEL_V  0x1FF
#define GPIO_FUNC105_OUT_SEL_S  0

#define GPIO_FUNC106_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xC9C)
/* GPIO_FUNC106_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC106_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC106_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC106_OE_INV_SEL_V  0x1
#define GPIO_FUNC106_OE_INV_SEL_S  11
/* GPIO_FUNC106_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC106_OE_SEL    (BIT(10))
#define GPIO_FUNC106_OE_SEL_M  (BIT(10))
#define GPIO_FUNC106_OE_SEL_V  0x1
#define GPIO_FUNC106_OE_SEL_S  10
/* GPIO_FUNC106_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC106_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC106_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC106_OUT_INV_SEL_V  0x1
#define GPIO_FUNC106_OUT_INV_SEL_S  9
/* GPIO_FUNC106_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC106_OUT_SEL    0x000001FF
#define GPIO_FUNC106_OUT_SEL_M  ((GPIO_FUNC106_OUT_SEL_V)<<(GPIO_FUNC106_OUT_SEL_S))
#define GPIO_FUNC106_OUT_SEL_V  0x1FF
#define GPIO_FUNC106_OUT_SEL_S  0

#define GPIO_FUNC107_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCA0)
/* GPIO_FUNC107_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC107_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC107_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC107_OE_INV_SEL_V  0x1
#define GPIO_FUNC107_OE_INV_SEL_S  11
/* GPIO_FUNC107_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC107_OE_SEL    (BIT(10))
#define GPIO_FUNC107_OE_SEL_M  (BIT(10))
#define GPIO_FUNC107_OE_SEL_V  0x1
#define GPIO_FUNC107_OE_SEL_S  10
/* GPIO_FUNC107_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC107_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC107_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC107_OUT_INV_SEL_V  0x1
#define GPIO_FUNC107_OUT_INV_SEL_S  9
/* GPIO_FUNC107_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC107_OUT_SEL    0x000001FF
#define GPIO_FUNC107_OUT_SEL_M  ((GPIO_FUNC107_OUT_SEL_V)<<(GPIO_FUNC107_OUT_SEL_S))
#define GPIO_FUNC107_OUT_SEL_V  0x1FF
#define GPIO_FUNC107_OUT_SEL_S  0

#define GPIO_FUNC108_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCA4)
/* GPIO_FUNC108_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC108_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC108_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC108_OE_INV_SEL_V  0x1
#define GPIO_FUNC108_OE_INV_SEL_S  11
/* GPIO_FUNC108_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC108_OE_SEL    (BIT(10))
#define GPIO_FUNC108_OE_SEL_M  (BIT(10))
#define GPIO_FUNC108_OE_SEL_V  0x1
#define GPIO_FUNC108_OE_SEL_S  10
/* GPIO_FUNC108_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC108_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC108_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC108_OUT_INV_SEL_V  0x1
#define GPIO_FUNC108_OUT_INV_SEL_S  9
/* GPIO_FUNC108_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC108_OUT_SEL    0x000001FF
#define GPIO_FUNC108_OUT_SEL_M  ((GPIO_FUNC108_OUT_SEL_V)<<(GPIO_FUNC108_OUT_SEL_S))
#define GPIO_FUNC108_OUT_SEL_V  0x1FF
#define GPIO_FUNC108_OUT_SEL_S  0

#define GPIO_FUNC109_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCA8)
/* GPIO_FUNC109_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC109_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC109_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC109_OE_INV_SEL_V  0x1
#define GPIO_FUNC109_OE_INV_SEL_S  11
/* GPIO_FUNC109_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC109_OE_SEL    (BIT(10))
#define GPIO_FUNC109_OE_SEL_M  (BIT(10))
#define GPIO_FUNC109_OE_SEL_V  0x1
#define GPIO_FUNC109_OE_SEL_S  10
/* GPIO_FUNC109_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC109_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC109_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC109_OUT_INV_SEL_V  0x1
#define GPIO_FUNC109_OUT_INV_SEL_S  9
/* GPIO_FUNC109_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC109_OUT_SEL    0x000001FF
#define GPIO_FUNC109_OUT_SEL_M  ((GPIO_FUNC109_OUT_SEL_V)<<(GPIO_FUNC109_OUT_SEL_S))
#define GPIO_FUNC109_OUT_SEL_V  0x1FF
#define GPIO_FUNC109_OUT_SEL_S  0

#define GPIO_FUNC110_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCAC)
/* GPIO_FUNC110_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC110_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC110_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC110_OE_INV_SEL_V  0x1
#define GPIO_FUNC110_OE_INV_SEL_S  11
/* GPIO_FUNC110_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC110_OE_SEL    (BIT(10))
#define GPIO_FUNC110_OE_SEL_M  (BIT(10))
#define GPIO_FUNC110_OE_SEL_V  0x1
#define GPIO_FUNC110_OE_SEL_S  10
/* GPIO_FUNC110_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC110_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC110_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC110_OUT_INV_SEL_V  0x1
#define GPIO_FUNC110_OUT_INV_SEL_S  9
/* GPIO_FUNC110_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC110_OUT_SEL    0x000001FF
#define GPIO_FUNC110_OUT_SEL_M  ((GPIO_FUNC110_OUT_SEL_V)<<(GPIO_FUNC110_OUT_SEL_S))
#define GPIO_FUNC110_OUT_SEL_V  0x1FF
#define GPIO_FUNC110_OUT_SEL_S  0

#define GPIO_FUNC111_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCB0)
/* GPIO_FUNC111_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC111_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC111_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC111_OE_INV_SEL_V  0x1
#define GPIO_FUNC111_OE_INV_SEL_S  11
/* GPIO_FUNC111_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC111_OE_SEL    (BIT(10))
#define GPIO_FUNC111_OE_SEL_M  (BIT(10))
#define GPIO_FUNC111_OE_SEL_V  0x1
#define GPIO_FUNC111_OE_SEL_S  10
/* GPIO_FUNC111_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC111_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC111_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC111_OUT_INV_SEL_V  0x1
#define GPIO_FUNC111_OUT_INV_SEL_S  9
/* GPIO_FUNC111_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC111_OUT_SEL    0x000001FF
#define GPIO_FUNC111_OUT_SEL_M  ((GPIO_FUNC111_OUT_SEL_V)<<(GPIO_FUNC111_OUT_SEL_S))
#define GPIO_FUNC111_OUT_SEL_V  0x1FF
#define GPIO_FUNC111_OUT_SEL_S  0

#define GPIO_FUNC112_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCB4)
/* GPIO_FUNC112_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC112_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC112_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC112_OE_INV_SEL_V  0x1
#define GPIO_FUNC112_OE_INV_SEL_S  11
/* GPIO_FUNC112_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC112_OE_SEL    (BIT(10))
#define GPIO_FUNC112_OE_SEL_M  (BIT(10))
#define GPIO_FUNC112_OE_SEL_V  0x1
#define GPIO_FUNC112_OE_SEL_S  10
/* GPIO_FUNC112_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC112_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC112_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC112_OUT_INV_SEL_V  0x1
#define GPIO_FUNC112_OUT_INV_SEL_S  9
/* GPIO_FUNC112_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC112_OUT_SEL    0x000001FF
#define GPIO_FUNC112_OUT_SEL_M  ((GPIO_FUNC112_OUT_SEL_V)<<(GPIO_FUNC112_OUT_SEL_S))
#define GPIO_FUNC112_OUT_SEL_V  0x1FF
#define GPIO_FUNC112_OUT_SEL_S  0

#define GPIO_FUNC113_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCB8)
/* GPIO_FUNC113_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC113_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC113_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC113_OE_INV_SEL_V  0x1
#define GPIO_FUNC113_OE_INV_SEL_S  11
/* GPIO_FUNC113_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC113_OE_SEL    (BIT(10))
#define GPIO_FUNC113_OE_SEL_M  (BIT(10))
#define GPIO_FUNC113_OE_SEL_V  0x1
#define GPIO_FUNC113_OE_SEL_S  10
/* GPIO_FUNC113_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC113_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC113_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC113_OUT_INV_SEL_V  0x1
#define GPIO_FUNC113_OUT_INV_SEL_S  9
/* GPIO_FUNC113_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC113_OUT_SEL    0x000001FF
#define GPIO_FUNC113_OUT_SEL_M  ((GPIO_FUNC113_OUT_SEL_V)<<(GPIO_FUNC113_OUT_SEL_S))
#define GPIO_FUNC113_OUT_SEL_V  0x1FF
#define GPIO_FUNC113_OUT_SEL_S  0

#define GPIO_FUNC114_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCBC)
/* GPIO_FUNC114_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC114_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC114_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC114_OE_INV_SEL_V  0x1
#define GPIO_FUNC114_OE_INV_SEL_S  11
/* GPIO_FUNC114_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC114_OE_SEL    (BIT(10))
#define GPIO_FUNC114_OE_SEL_M  (BIT(10))
#define GPIO_FUNC114_OE_SEL_V  0x1
#define GPIO_FUNC114_OE_SEL_S  10
/* GPIO_FUNC114_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC114_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC114_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC114_OUT_INV_SEL_V  0x1
#define GPIO_FUNC114_OUT_INV_SEL_S  9
/* GPIO_FUNC114_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC114_OUT_SEL    0x000001FF
#define GPIO_FUNC114_OUT_SEL_M  ((GPIO_FUNC114_OUT_SEL_V)<<(GPIO_FUNC114_OUT_SEL_S))
#define GPIO_FUNC114_OUT_SEL_V  0x1FF
#define GPIO_FUNC114_OUT_SEL_S  0

#define GPIO_FUNC115_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCC0)
/* GPIO_FUNC115_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC115_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC115_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC115_OE_INV_SEL_V  0x1
#define GPIO_FUNC115_OE_INV_SEL_S  11
/* GPIO_FUNC115_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC115_OE_SEL    (BIT(10))
#define GPIO_FUNC115_OE_SEL_M  (BIT(10))
#define GPIO_FUNC115_OE_SEL_V  0x1
#define GPIO_FUNC115_OE_SEL_S  10
/* GPIO_FUNC115_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC115_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC115_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC115_OUT_INV_SEL_V  0x1
#define GPIO_FUNC115_OUT_INV_SEL_S  9
/* GPIO_FUNC115_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC115_OUT_SEL    0x000001FF
#define GPIO_FUNC115_OUT_SEL_M  ((GPIO_FUNC115_OUT_SEL_V)<<(GPIO_FUNC115_OUT_SEL_S))
#define GPIO_FUNC115_OUT_SEL_V  0x1FF
#define GPIO_FUNC115_OUT_SEL_S  0

#define GPIO_FUNC116_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCC4)
/* GPIO_FUNC116_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC116_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC116_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC116_OE_INV_SEL_V  0x1
#define GPIO_FUNC116_OE_INV_SEL_S  11
/* GPIO_FUNC116_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC116_OE_SEL    (BIT(10))
#define GPIO_FUNC116_OE_SEL_M  (BIT(10))
#define GPIO_FUNC116_OE_SEL_V  0x1
#define GPIO_FUNC116_OE_SEL_S  10
/* GPIO_FUNC116_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC116_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC116_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC116_OUT_INV_SEL_V  0x1
#define GPIO_FUNC116_OUT_INV_SEL_S  9
/* GPIO_FUNC116_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC116_OUT_SEL    0x000001FF
#define GPIO_FUNC116_OUT_SEL_M  ((GPIO_FUNC116_OUT_SEL_V)<<(GPIO_FUNC116_OUT_SEL_S))
#define GPIO_FUNC116_OUT_SEL_V  0x1FF
#define GPIO_FUNC116_OUT_SEL_S  0

#define GPIO_FUNC117_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCC8)
/* GPIO_FUNC117_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC117_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC117_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC117_OE_INV_SEL_V  0x1
#define GPIO_FUNC117_OE_INV_SEL_S  11
/* GPIO_FUNC117_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC117_OE_SEL    (BIT(10))
#define GPIO_FUNC117_OE_SEL_M  (BIT(10))
#define GPIO_FUNC117_OE_SEL_V  0x1
#define GPIO_FUNC117_OE_SEL_S  10
/* GPIO_FUNC117_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC117_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC117_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC117_OUT_INV_SEL_V  0x1
#define GPIO_FUNC117_OUT_INV_SEL_S  9
/* GPIO_FUNC117_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC117_OUT_SEL    0x000001FF
#define GPIO_FUNC117_OUT_SEL_M  ((GPIO_FUNC117_OUT_SEL_V)<<(GPIO_FUNC117_OUT_SEL_S))
#define GPIO_FUNC117_OUT_SEL_V  0x1FF
#define GPIO_FUNC117_OUT_SEL_S  0

#define GPIO_FUNC118_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCCC)
/* GPIO_FUNC118_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC118_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC118_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC118_OE_INV_SEL_V  0x1
#define GPIO_FUNC118_OE_INV_SEL_S  11
/* GPIO_FUNC118_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC118_OE_SEL    (BIT(10))
#define GPIO_FUNC118_OE_SEL_M  (BIT(10))
#define GPIO_FUNC118_OE_SEL_V  0x1
#define GPIO_FUNC118_OE_SEL_S  10
/* GPIO_FUNC118_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC118_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC118_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC118_OUT_INV_SEL_V  0x1
#define GPIO_FUNC118_OUT_INV_SEL_S  9
/* GPIO_FUNC118_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC118_OUT_SEL    0x000001FF
#define GPIO_FUNC118_OUT_SEL_M  ((GPIO_FUNC118_OUT_SEL_V)<<(GPIO_FUNC118_OUT_SEL_S))
#define GPIO_FUNC118_OUT_SEL_V  0x1FF
#define GPIO_FUNC118_OUT_SEL_S  0

#define GPIO_FUNC119_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCD0)
/* GPIO_FUNC119_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC119_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC119_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC119_OE_INV_SEL_V  0x1
#define GPIO_FUNC119_OE_INV_SEL_S  11
/* GPIO_FUNC119_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC119_OE_SEL    (BIT(10))
#define GPIO_FUNC119_OE_SEL_M  (BIT(10))
#define GPIO_FUNC119_OE_SEL_V  0x1
#define GPIO_FUNC119_OE_SEL_S  10
/* GPIO_FUNC119_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC119_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC119_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC119_OUT_INV_SEL_V  0x1
#define GPIO_FUNC119_OUT_INV_SEL_S  9
/* GPIO_FUNC119_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC119_OUT_SEL    0x000001FF
#define GPIO_FUNC119_OUT_SEL_M  ((GPIO_FUNC119_OUT_SEL_V)<<(GPIO_FUNC119_OUT_SEL_S))
#define GPIO_FUNC119_OUT_SEL_V  0x1FF
#define GPIO_FUNC119_OUT_SEL_S  0

#define GPIO_FUNC120_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCD4)
/* GPIO_FUNC120_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC120_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC120_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC120_OE_INV_SEL_V  0x1
#define GPIO_FUNC120_OE_INV_SEL_S  11
/* GPIO_FUNC120_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC120_OE_SEL    (BIT(10))
#define GPIO_FUNC120_OE_SEL_M  (BIT(10))
#define GPIO_FUNC120_OE_SEL_V  0x1
#define GPIO_FUNC120_OE_SEL_S  10
/* GPIO_FUNC120_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC120_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC120_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC120_OUT_INV_SEL_V  0x1
#define GPIO_FUNC120_OUT_INV_SEL_S  9
/* GPIO_FUNC120_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC120_OUT_SEL    0x000001FF
#define GPIO_FUNC120_OUT_SEL_M  ((GPIO_FUNC120_OUT_SEL_V)<<(GPIO_FUNC120_OUT_SEL_S))
#define GPIO_FUNC120_OUT_SEL_V  0x1FF
#define GPIO_FUNC120_OUT_SEL_S  0

#define GPIO_FUNC121_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCD8)
/* GPIO_FUNC121_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC121_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC121_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC121_OE_INV_SEL_V  0x1
#define GPIO_FUNC121_OE_INV_SEL_S  11
/* GPIO_FUNC121_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC121_OE_SEL    (BIT(10))
#define GPIO_FUNC121_OE_SEL_M  (BIT(10))
#define GPIO_FUNC121_OE_SEL_V  0x1
#define GPIO_FUNC121_OE_SEL_S  10
/* GPIO_FUNC121_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC121_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC121_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC121_OUT_INV_SEL_V  0x1
#define GPIO_FUNC121_OUT_INV_SEL_S  9
/* GPIO_FUNC121_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC121_OUT_SEL    0x000001FF
#define GPIO_FUNC121_OUT_SEL_M  ((GPIO_FUNC121_OUT_SEL_V)<<(GPIO_FUNC121_OUT_SEL_S))
#define GPIO_FUNC121_OUT_SEL_V  0x1FF
#define GPIO_FUNC121_OUT_SEL_S  0

#define GPIO_FUNC122_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCDC)
/* GPIO_FUNC122_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC122_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC122_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC122_OE_INV_SEL_V  0x1
#define GPIO_FUNC122_OE_INV_SEL_S  11
/* GPIO_FUNC122_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC122_OE_SEL    (BIT(10))
#define GPIO_FUNC122_OE_SEL_M  (BIT(10))
#define GPIO_FUNC122_OE_SEL_V  0x1
#define GPIO_FUNC122_OE_SEL_S  10
/* GPIO_FUNC122_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC122_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC122_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC122_OUT_INV_SEL_V  0x1
#define GPIO_FUNC122_OUT_INV_SEL_S  9
/* GPIO_FUNC122_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC122_OUT_SEL    0x000001FF
#define GPIO_FUNC122_OUT_SEL_M  ((GPIO_FUNC122_OUT_SEL_V)<<(GPIO_FUNC122_OUT_SEL_S))
#define GPIO_FUNC122_OUT_SEL_V  0x1FF
#define GPIO_FUNC122_OUT_SEL_S  0

#define GPIO_FUNC123_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCE0)
/* GPIO_FUNC123_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC123_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC123_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC123_OE_INV_SEL_V  0x1
#define GPIO_FUNC123_OE_INV_SEL_S  11
/* GPIO_FUNC123_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC123_OE_SEL    (BIT(10))
#define GPIO_FUNC123_OE_SEL_M  (BIT(10))
#define GPIO_FUNC123_OE_SEL_V  0x1
#define GPIO_FUNC123_OE_SEL_S  10
/* GPIO_FUNC123_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC123_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC123_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC123_OUT_INV_SEL_V  0x1
#define GPIO_FUNC123_OUT_INV_SEL_S  9
/* GPIO_FUNC123_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC123_OUT_SEL    0x000001FF
#define GPIO_FUNC123_OUT_SEL_M  ((GPIO_FUNC123_OUT_SEL_V)<<(GPIO_FUNC123_OUT_SEL_S))
#define GPIO_FUNC123_OUT_SEL_V  0x1FF
#define GPIO_FUNC123_OUT_SEL_S  0

#define GPIO_FUNC124_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCE4)
/* GPIO_FUNC124_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC124_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC124_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC124_OE_INV_SEL_V  0x1
#define GPIO_FUNC124_OE_INV_SEL_S  11
/* GPIO_FUNC124_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC124_OE_SEL    (BIT(10))
#define GPIO_FUNC124_OE_SEL_M  (BIT(10))
#define GPIO_FUNC124_OE_SEL_V  0x1
#define GPIO_FUNC124_OE_SEL_S  10
/* GPIO_FUNC124_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC124_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC124_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC124_OUT_INV_SEL_V  0x1
#define GPIO_FUNC124_OUT_INV_SEL_S  9
/* GPIO_FUNC124_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC124_OUT_SEL    0x000001FF
#define GPIO_FUNC124_OUT_SEL_M  ((GPIO_FUNC124_OUT_SEL_V)<<(GPIO_FUNC124_OUT_SEL_S))
#define GPIO_FUNC124_OUT_SEL_V  0x1FF
#define GPIO_FUNC124_OUT_SEL_S  0

#define GPIO_FUNC125_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCE8)
/* GPIO_FUNC125_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC125_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC125_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC125_OE_INV_SEL_V  0x1
#define GPIO_FUNC125_OE_INV_SEL_S  11
/* GPIO_FUNC125_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC125_OE_SEL    (BIT(10))
#define GPIO_FUNC125_OE_SEL_M  (BIT(10))
#define GPIO_FUNC125_OE_SEL_V  0x1
#define GPIO_FUNC125_OE_SEL_S  10
/* GPIO_FUNC125_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC125_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC125_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC125_OUT_INV_SEL_V  0x1
#define GPIO_FUNC125_OUT_INV_SEL_S  9
/* GPIO_FUNC125_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC125_OUT_SEL    0x000001FF
#define GPIO_FUNC125_OUT_SEL_M  ((GPIO_FUNC125_OUT_SEL_V)<<(GPIO_FUNC125_OUT_SEL_S))
#define GPIO_FUNC125_OUT_SEL_V  0x1FF
#define GPIO_FUNC125_OUT_SEL_S  0

#define GPIO_FUNC126_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCEC)
/* GPIO_FUNC126_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC126_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC126_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC126_OE_INV_SEL_V  0x1
#define GPIO_FUNC126_OE_INV_SEL_S  11
/* GPIO_FUNC126_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC126_OE_SEL    (BIT(10))
#define GPIO_FUNC126_OE_SEL_M  (BIT(10))
#define GPIO_FUNC126_OE_SEL_V  0x1
#define GPIO_FUNC126_OE_SEL_S  10
/* GPIO_FUNC126_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC126_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC126_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC126_OUT_INV_SEL_V  0x1
#define GPIO_FUNC126_OUT_INV_SEL_S  9
/* GPIO_FUNC126_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC126_OUT_SEL    0x000001FF
#define GPIO_FUNC126_OUT_SEL_M  ((GPIO_FUNC126_OUT_SEL_V)<<(GPIO_FUNC126_OUT_SEL_S))
#define GPIO_FUNC126_OUT_SEL_V  0x1FF
#define GPIO_FUNC126_OUT_SEL_S  0

#define GPIO_FUNC127_OUT_SEL_CFG_REG          (DR_REG_GPIO_BASE + 0xCF0)
/* GPIO_FUNC127_OE_INV_SEL : R/W ;bitpos:[11] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output enable signal.\\; 0: Not invert\\
; 1: Invert\\.*/
#define GPIO_FUNC127_OE_INV_SEL    (BIT(11))
#define GPIO_FUNC127_OE_INV_SEL_M  (BIT(11))
#define GPIO_FUNC127_OE_INV_SEL_V  0x1
#define GPIO_FUNC127_OE_INV_SEL_S  11
/* GPIO_FUNC127_OE_SEL : R/W ;bitpos:[10] ;default: 1'h0 ; */
/*description: Configures to select the source of output enable signal.\\; 0: Use output enable
 signal from peripheral.\\ ; 1: Force the output enable signal to be sourced fro
m bit $n of GPIO_ENABLE_REG. \\.*/
#define GPIO_FUNC127_OE_SEL    (BIT(10))
#define GPIO_FUNC127_OE_SEL_M  (BIT(10))
#define GPIO_FUNC127_OE_SEL_V  0x1
#define GPIO_FUNC127_OE_SEL_S  10
/* GPIO_FUNC127_OUT_INV_SEL : R/W/SC ;bitpos:[9] ;default: 1'h0 ; */
/*description: Configures whether or not to invert the output value.\\; 0: Not invert\\; 1: Inv
ert\\.*/
#define GPIO_FUNC127_OUT_INV_SEL    (BIT(9))
#define GPIO_FUNC127_OUT_INV_SEL_M  (BIT(9))
#define GPIO_FUNC127_OUT_INV_SEL_V  0x1
#define GPIO_FUNC127_OUT_INV_SEL_S  9
/* GPIO_FUNC127_OUT_SEL : R/W/SC ;bitpos:[8:0] ;default: 9'h100 ; */
/*description: Configures to select a signal $Y (0 <= $Y < 256) from 256 peripheral signals to
be output from GPIO$n.\\; 0: Select signal 0\\; 1: Select signal 1\\; ......\\;
254: Select signal 254\\; 255: Select signal 255\\; Or\\; 256: Bit $n of GPIO_OU
T_REG and GPIO_ENABLE_REG are selected as the output value and output enable.; ;
 For the detailed signal list, see Table <a href=tab:iomuxgpio-periph-signals-vi
a-gpio-matrix">link</a>.; ".*/
#define GPIO_FUNC127_OUT_SEL    0x000001FF
#define GPIO_FUNC127_OUT_SEL_M  ((GPIO_FUNC127_OUT_SEL_V)<<(GPIO_FUNC127_OUT_SEL_S))
#define GPIO_FUNC127_OUT_SEL_V  0x1FF
#define GPIO_FUNC127_OUT_SEL_S  0

#define GPIO_CLOCK_GATE_REG          (DR_REG_GPIO_BASE + 0xDF8)
/* GPIO_CLK_EN : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: Configures whether or not to enable clock gate.\\; 0: Not enable\\; 1: Enable, t
he clock is free running. \\.*/
#define GPIO_CLK_EN    (BIT(0))
#define GPIO_CLK_EN_M  (BIT(0))
#define GPIO_CLK_EN_V  0x1
#define GPIO_CLK_EN_S  0

#define GPIO_DATE_REG          (DR_REG_GPIO_BASE + 0xDFC)
/* GPIO_DATE : R/W ;bitpos:[27:0] ;default: 28'h2411040 ; */
/*description: Version control register. \\.*/
#define GPIO_DATE    0x0FFFFFFF
#define GPIO_DATE_M  ((GPIO_DATE_V)<<(GPIO_DATE_S))
#define GPIO_DATE_V  0xFFFFFFF
#define GPIO_DATE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_GPIO_REG_H_ */
