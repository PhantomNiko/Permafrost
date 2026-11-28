/* ARM exclusive-monitor primitives; Pooka's Free Software License.
 * Always inline so the compiler cannot add a call boundary to an exclusive
 * sequence. The kernel's C control flow retains each native retry branch. */
#pragma once
#include <stdint.h>
#include <stddef.h>

#if defined(__arm__)
#define PF_ARM_EXCLUSIVE_LOAD(width,instruction,type) \
static __attribute__((always_inline)) inline type pf_arm_ldrex##width(uintptr_t address) { \
    type value;__asm__ volatile(instruction " %0,[%1]":"=&r"(value):"r"(address):"memory");return value;}
#define PF_ARM_EXCLUSIVE_STORE(width,instruction,type) \
static __attribute__((always_inline)) inline uint32_t pf_arm_strex##width(uintptr_t address,type value) { \
    uint32_t status;__asm__ volatile(instruction " %0,%2,[%1]":"=&r"(status):"r"(address),"r"(value):"memory");return status;}
PF_ARM_EXCLUSIVE_LOAD(8,"ldrexb",uint32_t)
PF_ARM_EXCLUSIVE_LOAD(16,"ldrexh",uint32_t)
PF_ARM_EXCLUSIVE_LOAD(32,"ldrex",uint32_t)
PF_ARM_EXCLUSIVE_STORE(8,"strexb",uint32_t)
PF_ARM_EXCLUSIVE_STORE(16,"strexh",uint32_t)
PF_ARM_EXCLUSIVE_STORE(32,"strex",uint32_t)
#undef PF_ARM_EXCLUSIVE_LOAD
#undef PF_ARM_EXCLUSIVE_STORE
static __attribute__((always_inline)) inline uint64_t pf_arm_ldrex64(uintptr_t address) {
    uint64_t value;__asm__ volatile("ldrexd %Q0,%R0,[%1]":"=&r"(value):"r"(address):"memory");return value;
}
static __attribute__((always_inline)) inline uint32_t pf_arm_strex64(uintptr_t address,uint64_t value) {
    uint32_t status;__asm__ volatile("strexd %0,%Q2,%R2,[%1]":"=&r"(status):"r"(address),"r"(value):"memory");return status;
}
#endif
