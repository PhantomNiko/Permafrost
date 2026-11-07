/* ARM architectural operations; Pooka's Free Software License. */
#pragma once
static inline void pf_arm_dmb(void){__asm__ volatile("dmb sy":::"memory");}
static inline void pf_arm_dsb(void){__asm__ volatile("dsb sy":::"memory");}
static inline void pf_arm_isb(void){__asm__ volatile("isb":::"memory");}
#define DataMemoryBarrier(...) pf_arm_dmb()
#define DataSynchronizationBarrier(...) pf_arm_dsb()
#define InstructionSynchronizationBarrier(...) pf_arm_isb()
#define NotUsed (*(volatile uint8_t *)(uintptr_t)0x14)
static inline uint32_t coproc_movefrom_Main_ID(void){uint32_t value;__asm__ volatile("mrc p15,0,%0,c0,c0,0":"=r"(value));return value;}
static inline uint32_t coproc_movefrom_Cache_Type(void){uint32_t value;__asm__ volatile("mrc p15,0,%0,c0,c0,1":"=r"(value));return value;}
static inline void pf_clean_data_line(uint32_t address){__asm__ volatile("mcr p15,0,%0,c7,c11,1"::"r"(address):"memory");}
static inline void coproc_moveto_Invalidate_Instruction_Cache_by_MVA(uint32_t address){__asm__ volatile("mcr p15,0,%0,c7,c5,1"::"r"(address):"memory");}
