/* ARM architectural operations; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
static inline void pf_arm_dmb(void){__asm__ volatile("dmb sy":::"memory");}
static inline void pf_arm_dsb(void){__asm__ volatile("dsb sy":::"memory");}
static inline void pf_arm_isb(void){__asm__ volatile("isb":::"memory");}
#define DataMemoryBarrier(...) pf_arm_dmb()
#define DataSynchronizationBarrier(...) pf_arm_dsb()
#define InstructionSynchronizationBarrier(...) pf_arm_isb()
#define NotUsed (*(volatile uint8_t *)(uintptr_t)0x14)
static inline void pf_clean_data_line(uint32_t address){__asm__ volatile("mcr p15,0,%0,c7,c11,1"::"r"(address):"memory");}

static inline void HintYield(void){__asm__ volatile("yield":::"memory");}
static inline void ClearExclusiveLocal(void){__asm__ volatile("clrex":::"memory");}
static inline void disableIRQinterrupts(void){__asm__ volatile("cpsid i":::"memory");}
static inline void enableIRQinterrupts(void){__asm__ volatile("cpsie i":::"memory");}
static inline void disableFIQinterrupts(void){__asm__ volatile("cpsid f":::"memory");}
static inline void enableFIQinterrupts(void){__asm__ volatile("cpsie f":::"memory");}
#define H_Reset (*(volatile uint32_t *)(uintptr_t)0xffff0000U)
static inline void WaitForInterrupt(void){__asm__ volatile("wfi":::"memory");}
static inline void SendEvent(void){__asm__ volatile("sev":::"memory");}
static inline void setSupervisorMode(void){__asm__ volatile("cps #19":::"memory");}
/* SMCCC call boundaries: r0 carries the function/result and r1-r3 arguments. */
#define PF_ARM_SUPERVISOR_CALL(name,extension,instruction) \
static __attribute__((always_inline)) inline uint32_t name(uint32_t function,uint32_t a,uint32_t b,uint32_t c){ \
 register uint32_t r0 __asm__("r0")=function;register uint32_t r1 __asm__("r1")=a; \
 register uint32_t r2 __asm__("r2")=b;register uint32_t r3 __asm__("r3")=c; \
 __asm__ volatile(".arch_extension " extension "\n" instruction " #0":"+r"(r0),"+r"(r1),"+r"(r2),"+r"(r3)::"memory","cc");return r0;}
PF_ARM_SUPERVISOR_CALL(pf_arm_smc_zero,"sec","smc")
PF_ARM_SUPERVISOR_CALL(pf_arm_hvc_zero,"virt","hvc")
#undef PF_ARM_SUPERVISOR_CALL
#define pf_arm_smc(immediate,a,b,c,d) ({_Static_assert((immediate)==0,"unsupported SMC immediate");pf_arm_smc_zero(a,b,c,d);})
#define pf_arm_hvc(immediate,a,b,c,d) ({_Static_assert((immediate)==0,"unsupported HVC immediate");pf_arm_hvc_zero(a,b,c,d);})
