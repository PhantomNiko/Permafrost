/* Architectural operations used by recovered x86 C. Pooka's Free Software License. */
#pragma once
#include "support.h"

static inline unsigned POPCOUNT(uint64_t value) {
    unsigned count=0;
    while(value){value&=value-1;count++;}
    return count;
}
static inline uint64_t rdtsc(void) {
    uint32_t low,high;
    __asm__ volatile("rdtsc":"=a"(low),"=d"(high));
    return (uint64_t)high<<32|low;
}
static inline uint64_t xinuse(unsigned selector) {
    uint32_t low,high;
    __asm__ volatile("xgetbv":"=a"(low),"=d"(high):"c"(selector));
    return (uint64_t)high<<32|low;
}
#define PF_CONTROL_REGISTER(number) \
static inline uintptr_t pf_read_cr##number(void){uintptr_t value; \
    __asm__ volatile("mov %%cr" #number ",%0":"=r"(value));return value;}
PF_CONTROL_REGISTER(0)
PF_CONTROL_REGISTER(3)
PF_CONTROL_REGISTER(4)
#undef PF_CONTROL_REGISTER
static inline uint16_t pf_read_cs(void) {
    uint16_t value;__asm__ volatile("mov %%cs,%0":"=r"(value));return value;
}
static inline uint64_t pf_read_xcr0(void) {return xinuse(0);}
/* WFE11 boot feature setup writes control registers before using SSE state. */
static inline void pf_x86_configure_boot_fpu110(uint32_t features) {
    if (features & 1) {
        uintptr_t control=(pf_read_cr0() & ~(uintptr_t)14) | 2;
        uint16_t precision=0x027f;
        __asm__ volatile("mov %0,%%cr0"::"r"(control):"memory");
        __asm__ volatile("fninit; fldcw %0"::"m"(precision):"memory");
    }
    if (features & 2) {
        uintptr_t control=pf_read_cr4() | 0x600;
        __asm__ volatile("mov %0,%%cr4"::"r"(control):"memory");
    }
}
static inline void invlpg(uintptr_t address) {
    __asm__ volatile("invlpg (%0)"::"r"(address):"memory");
}
static inline uintptr_t pf_read_flags(void) {
    uintptr_t value;
#if defined(__x86_64__)
    __asm__ volatile("pushfq; popq %0":"=r"(value)::"memory");
#else
    __asm__ volatile("pushfl; popl %0":"=r"(value)::"memory");
#endif
    return value;
}
static inline uint8_t pf_read_in_IF(void) {return (pf_read_flags()>>9)&1;}
static inline void pf_write_in_IF(uint8_t enabled) {
    if(enabled)__asm__ volatile("sti":::"memory");
    else __asm__ volatile("cli":::"memory");
}
static inline uint8_t pf_read_in_ID(void) {return (pf_read_flags()>>21)&1;}
static inline void pf_write_in_ID(uint8_t enabled) {
    uintptr_t flags=pf_read_flags();
    flags=(flags&~(uintptr_t)(1U<<21))|((uintptr_t)(enabled!=0)<<21);
#if defined(__x86_64__)
    __asm__ volatile("pushq %0; popfq"::"r"(flags):"memory","cc");
#else
    __asm__ volatile("pushl %0; popfl"::"r"(flags):"memory","cc");
#endif
}
static inline uint32_t pf_read_MXCSR(void) {
    uint32_t value;__asm__ volatile("stmxcsr %0":"=m"(value));return value;
}
static inline void pf_write_MXCSR(uint32_t value) {
    __asm__ volatile("ldmxcsr %0"::"m"(value));
}
static inline uint16_t TaskRegister(void) {
    uint16_t value;__asm__ volatile("str %0":"=r"(value));return value;
}
struct pf_x86_descriptor {uint16_t limit;uintptr_t base;} __attribute__((packed));
static inline uint128 GlobalDescriptorTableRegister(void) {
    struct pf_x86_descriptor value;
    __asm__ volatile("sgdt %0":"=m"(value));
    return (uint128)value.base<<16|value.limit;
}
static inline uint128 InterruptDescriptorTableRegister(void) {
    struct pf_x86_descriptor value;
    __asm__ volatile("sidt %0":"=m"(value));
    return (uint128)value.base<<16|value.limit;
}
static inline void _fxsave(void *out) {
    __asm__ volatile("fxsave %0":"=m"(*(uint8_t (*)[512])out)::"memory");
}
static inline void _fxrstor(const void *in) {
    __asm__ volatile("fxrstor %0"::"m"(*(const uint8_t (*)[512])in):"memory");
}
#if defined(__x86_64__)
static inline void _fxsave64(void *out) {
    __asm__ volatile("fxsave64 %0":"=m"(*(uint8_t (*)[512])out)::"memory");
}
static inline void _fxrstor64(const void *in) {
    __asm__ volatile("fxrstor64 %0"::"m"(*(const uint8_t (*)[512])in):"memory");
}
#endif
