/* ARM architectural operations; Pooka's Free Software License. */
#pragma once
#define DataMemoryBarrier(...) __asm__ volatile("dmb sy":::"memory")
#define DataSynchronizationBarrier(...) __asm__ volatile("dsb sy":::"memory")
#define InstructionSynchronizationBarrier(...) __asm__ volatile("isb":::"memory")
#define Yield(...) __asm__ volatile("yield":::"memory")
#define TLBI_VMALLE1() __asm__ volatile("tlbi vmalle1":::"memory")
#define PF_SYSREG(name) static inline uint64_t pf_read_##name(void) {uint64_t v;__asm__ volatile("mrs %0," #name:"=r"(v));return v;} static inline void pf_write_##name(uint64_t v){__asm__ volatile("msr " #name ",%0"::"r"(v):"memory");}
PF_SYSREG(mair_el1)
PF_SYSREG(tcr_el1)
PF_SYSREG(ttbr0_el1)
PF_SYSREG(ttbr1_el1)
PF_SYSREG(sctlr_el1)
PF_SYSREG(mair_el2)
PF_SYSREG(tcr_el2)
PF_SYSREG(ttbr0_el2)
PF_SYSREG(sctlr_el2)
PF_SYSREG(daif)
PF_SYSREG(elr_el1)
PF_SYSREG(spsr_el1)
PF_SYSREG(vbar_el1)
PF_SYSREG(vbar_el2)
PF_SYSREG(mdscr_el1)
PF_SYSREG(dbgwcr0_el1)
PF_SYSREG(dbgwvr0_el1)
PF_SYSREG(par_el1)
PF_SYSREG(cntv_tval_el0)
PF_SYSREG(cntv_ctl_el0)
PF_SYSREG(cntfrq_el0)
#undef PF_SYSREG
#define PF_SYSREG_RO(name) static inline uint64_t pf_read_##name(void) {uint64_t v;__asm__ volatile("mrs %0," #name:"=r"(v));return v;}
PF_SYSREG_RO(mpidr_el1)
PF_SYSREG_RO(midr_el1)
PF_SYSREG_RO(ctr_el0)
PF_SYSREG_RO(currentel)
PF_SYSREG_RO(cntvct_el0)
PF_SYSREG_RO(esr_el1)
PF_SYSREG_RO(far_el1)
#undef PF_SYSREG_RO
static inline void pf_write_oslar_el1(uint64_t value){__asm__ volatile("msr oslar_el1,%0"::"r"(value):"memory");}
static inline void DC_CVAC(uint64_t p){__asm__ volatile("dc cvac,%0"::"r"(p):"memory");}
static inline void DC_CVAU(uint64_t p){__asm__ volatile("dc cvau,%0"::"r"(p):"memory");}
static inline void IC_IVAU(uint64_t p){__asm__ volatile("ic ivau,%0"::"r"(p):"memory");}
static inline uint128 NEON_ext(uint128 a,uint128 b,unsigned offset,unsigned lane){(void)lane;offset&=15;return offset?(a>>(offset*8))|(b<<((16-offset)*8)):a;}
static inline uint128 NEON_rev64(uint128 a,unsigned lane){uint128 result=0,mask=((uint128)1<<(lane*8))-1;for(unsigned group=0;group<2;++group)for(unsigned i=0;i<8/lane;++i)result|=((a>>((group*8+i*lane)*8))&mask)<<((group*8+8-lane-i*lane)*8);return result;}

static inline __attribute__((noreturn)) uintptr_t UndefinedInstructionException(unsigned reason,uintptr_t pc){(void)reason;(void)pc;__builtin_trap();}
static inline void pf_psci_cpu_on(uint64_t mpidr,void *context,int use_hvc){
 register uint64_t r0 __asm__("x0")=0xc4000003,r1 __asm__("x1")=mpidr,r2 __asm__("x2")=0x40400030,r3 __asm__("x3")=(uintptr_t)context;
 if(use_hvc)__asm__ volatile("hvc #0":"+r"(r0),"+r"(r1),"+r"(r2),"+r"(r3)::"x4","x5","x6","x7","x8","x9","x10","x11","x12","x13","x14","x15","x16","x17","cc","memory");
 else __asm__ volatile("smc #0":"+r"(r0),"+r"(r1),"+r"(r2),"+r"(r3)::"x4","x5","x6","x7","x8","x9","x10","x11","x12","x13","x14","x15","x16","x17","cc","memory");
}
