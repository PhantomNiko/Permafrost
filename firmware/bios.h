/* Permafrost BIOS interface; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
struct pf_bios_regs {
    uint32_t eax,ebx,ecx,edx,esi,edi,ebp,flags;
    uint16_t ds,es,interrupt,reserved;
};
extern volatile struct pf_bios_regs pf_bios_request;
extern void pf_bios_execute(void);
static inline int pf_bios_interrupt(unsigned interrupt,struct pf_bios_regs *r) {
    r->interrupt=(uint16_t)interrupt;r->flags=0;
    pf_bios_request=*r;
    __asm__ volatile("" ::: "memory");pf_bios_execute();
    __asm__ volatile("" ::: "memory");*r=pf_bios_request;
    return !(r->flags&1);
}
