/* ARM architectural operations; Pooka's Free Software License. */
#pragma once
#define DataMemoryBarrier(...) __asm__ volatile("dmb sy":::"memory")
#define DataSynchronizationBarrier(...) __asm__ volatile("dsb sy":::"memory")
#define InstructionSynchronizationBarrier(...) __asm__ volatile("isb":::"memory")
#define Yield(...) __asm__ volatile("yield":::"memory")
#define SendEvent() __asm__ volatile("sev":::"memory")
#define TLBI_VMALLE1() __asm__ volatile("tlbi vmalle1":::"memory")
#define TLBI_ALLE2() __asm__ volatile("tlbi alle2":::"memory")
#define ClearExclusiveLocal() __asm__ volatile("clrex":::"memory")
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
PF_SYSREG(icc_sre_el1)
PF_SYSREG(icc_pmr_el1)
PF_SYSREG(icc_igrpen1_el1)
#define PF_SYSREG_RO(name) static inline uint64_t pf_read_##name(void) {uint64_t v;__asm__ volatile("mrs %0," #name:"=r"(v));return v;}
PF_SYSREG_RO(mpidr_el1)
PF_SYSREG_RO(midr_el1)
PF_SYSREG_RO(ctr_el0)
PF_SYSREG_RO(currentel)
PF_SYSREG_RO(cntvct_el0)
PF_SYSREG_RO(esr_el1)
PF_SYSREG_RO(far_el1)
PF_SYSREG_RO(icc_iar1_el1)
#undef PF_SYSREG_RO
static inline void pf_write_oslar_el1(uint64_t value){__asm__ volatile("msr oslar_el1,%0"::"r"(value):"memory");}
static inline void pf_write_icc_eoir1_el1(uint64_t value){__asm__ volatile("msr icc_eoir1_el1,%0"::"r"(value):"memory");}
static inline uint64_t AT_S1E2R(uint64_t address){uint64_t result;__asm__ volatile("at s1e2r,%1\nisb\nmrs %0,par_el1":"=r"(result):"r"(address):"memory");return result;}
static inline uint64_t AT_S1E2W(uint64_t address){uint64_t result;__asm__ volatile("at s1e2w,%1\nisb\nmrs %0,par_el1":"=r"(result):"r"(address):"memory");return result;}
static inline uint64_t AT_S1E1R(uint64_t address){uint64_t result;__asm__ volatile("at s1e1r,%1\nisb\nmrs %0,par_el1":"=r"(result):"r"(address):"memory");return result;}
static inline uint64_t AT_S1E1W(uint64_t address){uint64_t result;__asm__ volatile("at s1e1w,%1\nisb\nmrs %0,par_el1":"=r"(result):"r"(address):"memory");return result;}
static inline void DC_CVAC(uint64_t p){__asm__ volatile("dc cvac,%0"::"r"(p):"memory");}
static inline void DC_CVAU(uint64_t p){__asm__ volatile("dc cvau,%0"::"r"(p):"memory");}
static inline void IC_IVAU(uint64_t p){__asm__ volatile("ic ivau,%0"::"r"(p):"memory");}
static inline uint128 NEON_ext(uint128 a,uint128 b,unsigned offset,unsigned lane){(void)lane;offset&=15;return offset?(a>>(offset*8))|(b<<((16-offset)*8)):a;}
static inline uint128 NEON_rev64(uint128 a,unsigned lane){uint128 result=0,mask=((uint128)1<<(lane*8))-1;for(unsigned group=0;group<2;++group)for(unsigned i=0;i<8/lane;++i)result|=((a>>((group*8+i*lane)*8))&mask)<<((group*8+8-lane-i*lane)*8);return result;}

static inline __attribute__((noreturn)) uintptr_t UndefinedInstructionException(unsigned reason,uintptr_t pc){(void)reason;(void)pc;__builtin_trap();}
static inline void pf_psci_cpu_on_at(uint64_t mpidr,void *context,int use_hvc,uint64_t entry){
 register uint64_t r0 __asm__("x0")=0xc4000003,r1 __asm__("x1")=mpidr,r2 __asm__("x2")=entry,r3 __asm__("x3")=(uintptr_t)context;
 if(use_hvc)__asm__ volatile("hvc #0":"+r"(r0),"+r"(r1),"+r"(r2),"+r"(r3)::"x4","x5","x6","x7","x8","x9","x10","x11","x12","x13","x14","x15","x16","x17","cc","memory");
 else __asm__ volatile("smc #0":"+r"(r0),"+r"(r1),"+r"(r2),"+r"(r3)::"x4","x5","x6","x7","x8","x9","x10","x11","x12","x13","x14","x15","x16","x17","cc","memory");
}
/* Additional architectural state used by the 1.1 native handoff. */
PF_SYSREG(cpacr_el1)
PF_SYSREG(hcr_el2)
PF_SYSREG(cptr_el2)
PF_SYSREG(cnthctl_el2)
PF_SYSREG(cntvoff_el2)
PF_SYSREG(sp_el1)
PF_SYSREG(elr_el2)
PF_SYSREG(spsr_el2)
PF_SYSREG(tpidr_el0)
PF_SYSREG(tpidrro_el0)
PF_SYSREG(fpcr)
PF_SYSREG(fpsr)
PF_SYSREG(esr_el2)
PF_SYSREG(far_el2)
static inline uint64_t pf_read_id_aa64pfr0_el1(void){uint64_t value;__asm__ volatile("mrs %0,id_aa64pfr0_el1":"=r"(value));return value;}
#define TLBI_ALLE2IS() __asm__ volatile("tlbi alle2is":::"memory")
#define TLBI_VMALLE1IS() __asm__ volatile("tlbi vmalle1is":::"memory")
#define Reset (*(volatile uint32_t *)(uintptr_t)0)
#define UnkSytemRegRead(op0,op1,crn,crm,op2) ({uint64_t value;__asm__ volatile("mrs %0,S%c1_%c2_C%c3_C%c4_%c5":"=r"(value):"i"(op0),"i"(op1),"i"(crn),"i"(crm),"i"(op2):"memory");value;})
#define UnkSytemRegWrite(op0,op1,crn,crm,op2,value) do{uint64_t pf_value=(uint64_t)(value);__asm__ volatile("msr S%c1_%c2_C%c3_C%c4_%c5,%0"::"r"(pf_value),"i"(op0),"i"(op1),"i"(crn),"i"(crm),"i"(op2):"memory");}while(0)
static inline unsigned pf_arm_popcount(uint64_t value){unsigned count=0;while(value){value&=value-1;count++;}return count;}

#undef PF_SYSREG
#define POPCOUNT(value) pf_arm_popcount((uint64_t)(value)&(sizeof(value)==1?UINT8_MAX:sizeof(value)==2?UINT16_MAX:sizeof(value)==4?UINT32_MAX:UINT64_MAX))
static inline uint64_t NEON_uaddlv(uint128 value,unsigned bytes){uint64_t result=0;unsigned bits=bytes*8;uint128 mask=(((uint128)1<<bits)-1);for(unsigned offset=0;offset<128;offset+=bits)result+=(uint64_t)((value>>offset)&mask);return result;}

#define WaitForInterrupt() __asm__ volatile("wfi":::"memory")
static inline void DC_CIVAC(uint64_t p){__asm__ volatile("dc civac,%0"::"r"(p):"memory");}
static inline void DC_IVAC(uint64_t p){__asm__ volatile("dc ivac,%0"::"r"(p):"memory");}
/* The recovered vector sites operate on two 32-bit lanes. */
static inline uint64_t NEON_smax(uint64_t a,uint64_t b,unsigned bytes){uint64_t out=0;for(unsigned i=0;i<8/bytes;i++){unsigned shift=i*bytes*8;int64_t x=(int64_t)(a<<(64-bytes*8-shift))>>(64-bytes*8),y=(int64_t)(b<<(64-bytes*8-shift))>>(64-bytes*8);uint64_t mask=UINT64_MAX>>(64-bytes*8);out|=((uint64_t)(x>y?x:y)&mask)<<shift;}return out;}
static inline uint64_t NEON_smin(uint64_t a,uint64_t b,unsigned bytes){return ~NEON_smax(~a,~b,bytes);}
static inline uint64_t NEON_umin(uint64_t a,uint64_t b,unsigned bytes){uint64_t out=0,mask=UINT64_MAX>>(64-bytes*8);for(unsigned i=0;i<8/bytes;i++){unsigned shift=i*bytes*8;uint64_t x=(a>>shift)&mask,y=(b>>shift)&mask;out|=(x<y?x:y)<<shift;}return out;}
static inline uint64_t NEON_ushl(uint64_t a,uint64_t shifts,unsigned bytes){uint64_t out=0,mask=UINT64_MAX>>(64-bytes*8);for(unsigned i=0;i<8/bytes;i++){unsigned bit=i*bytes*8;int count=(int8_t)(shifts>>bit);uint64_t x=(a>>bit)&mask;uint64_t lane=(count>=0?(count<(int)(bytes*8)?x<<count:0):(-count<(int)(bytes*8)?x>>-count:0));out|=(lane&mask)<<bit;}return out;}
#define PF_ARM64_SMCCC(name,opcode) \
static inline __attribute__((always_inline)) uint64_t name(unsigned immediate,uint64_t a0,uint64_t a1,uint64_t a2,uint64_t a3){ \
 register uint64_t r0 __asm__("x0")=a0,r1 __asm__("x1")=a1,r2 __asm__("x2")=a2,r3 __asm__("x3")=a3; \
 __asm__ volatile(opcode " #%c4":"+r"(r0),"+r"(r1),"+r"(r2),"+r"(r3):"i"(immediate):"x4","x5","x6","x7","x8","x9","x10","x11","x12","x13","x14","x15","x16","x17","cc","memory");return r0;}
PF_ARM64_SMCCC(pf_arm64_smc,"smc")
PF_ARM64_SMCCC(pf_arm64_hvc,"hvc")
#undef PF_ARM64_SMCCC
