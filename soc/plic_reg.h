// Copyright 2017-2018 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef _PLIC_REG_H_
#define _PLIC_REG_H_


#ifdef __cplusplus
extern "C" {
#endif

#define DR_REG_PLIC_BASE       ( 0x0 )

#define PLIC_PRIO_REG(i)          (DR_REG_PLIC_BASE + (i)*4)
/* PLIC_PRIO : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: .*/
#define PLIC_PRIO    0x1F
#define PLIC_PRIO_M  ((PLIC_PRIO_V)<<(PLIC_PRIO_S))
#define PLIC_PRIO_V  0x1F
#define PLIC_PRIO_S  0

#define PLIC_INTR_TYPE_REG     (0x1000000C)
/* PLIC_PRIO : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: for bit N
  0: plic interrupt 16 + N is level interrupt
  1: plic interrupt 16 + N is edge interrupt
  default is level interrupt .*/
#define PLIC_INTR_TYPE    0xFFFFFFFF
#define PLIC_INTR_TYPE_M  ((PLIC_INTR_TYPE_V)<<(PLIC_INTR_TYPE_S))
#define PLIC_INTR_TYPE_V  0xFFFFFFFF
#define PLIC_INTR_TYPE_S  0

#define PLIC_IP_REG(i)          (DR_REG_PLIC_BASE + 0x1000 + (i)*4)
/* PLIC_PRIO : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_IP    0xFFFFFFFF
#define PLIC_IP_M  ((PLIC_IP_V)<<(PLIC_IP_S))
#define PLIC_IP_V  0xFFFFFFFF
#define PLIC_IP_S  0

#define PLIC_H0_MIE_REG(i)          (DR_REG_PLIC_BASE + 0x2000 + (i)*4)
/* PLIC_H0_MIE : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_H0_MIE    0xFFFFFFFF
#define PLIC_H0_MIE_M  ((PLIC_H0_MIE_V)<<(PLIC_H0_MIE_S))
#define PLIC_H0_MIE_V  0xFFFFFFFF
#define PLIC_H0_MIE_S  0

#define PLIC_H0_SIE_REG(i)          (DR_REG_PLIC_BASE + 0x2080 + (i)*4)
/* PLIC_H0_SIE : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_H0_SIE    0xFFFFFFFF
#define PLIC_H0_SIE_M  ((PLIC_H0_SIE_V)<<(PLIC_H0_SIE_S))
#define PLIC_H0_SIE_V  0xFFFFFFFF
#define PLIC_H0_SIE_S  0

#define PLIC_PER_REG          (DR_REG_PLIC_BASE + 0x1FFFFC)
/* PLIC_PER : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_PER    0xFFFFFFFF
#define PLIC_PER_M  ((PLIC_PER_V)<<(PLIC_PER_S))
#define PLIC_PER_V  0xFFFFFFFF
#define PLIC_PER_S  0

#define PLIC_H0_MTH_REG          (DR_REG_PLIC_BASE + 0x200000)
/* PLIC_H0_MTH : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: .*/
#define PLIC_H0_MTH    0x1F
#define PLIC_H0_MTH_M  ((PLIC_H0_MTH_V)<<(PLIC_H0_MTH_S))
#define PLIC_H0_MTH_V  0x1F
#define PLIC_H0_MTH_S  0

#define PLIC_H0_MCLAIM_REG          (DR_REG_PLIC_BASE + 0x200004)
/* PLIC_H0_MCLAIM : R/W ;bitpos:[9:0] ;default: 10'h0 ; */
/*description: .*/
#define PLIC_H0_MCLAIM    0x3FF
#define PLIC_H0_MCLAIM_M  ((PLIC_H0_MCLAIM_V)<<(PLIC_H0_MCLAIM_S))
#define PLIC_H0_MCLAIM_V  0x3FF
#define PLIC_H0_MCLAIM_S  0

#define PLIC_H0_STH_REG          (DR_REG_PLIC_BASE + 0x201000)
/* PLIC_H0_MTH : R/W ;bitpos:[4:0] ;default: 5'h0 ; */
/*description: .*/
#define PLIC_H0_STH    0xFFFFFFFF
#define PLIC_H0_STH_M  ((PLIC_H0_STH_V)<<(PLIC_H0_STH_S))
#define PLIC_H0_STH_V  0xFFFFFFFF
#define PLIC_H0_STH_S  0

#define PLIC_H0_SCLAIM_REG          (DR_REG_PLIC_BASE + 0x201004)
/* PLIC_H0_MCLAIM : R/W ;bitpos:[9:0] ;default: 10'h0 ; */
/*description: .*/
#define PLIC_H0_SCLAIM    0x3FF
#define PLIC_H0_SCLAIM_M  ((PLIC_H0_SCLAIM_V)<<(PLIC_H0_SCLAIM_S))
#define PLIC_H0_SCLAIM_V  0x3FF
#define PLIC_H0_SCLAIM_S  0

#ifdef __cplusplus
}
#endif


#endif /*_PLIC_REG_H_ */
