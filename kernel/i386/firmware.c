/* BIOS operations behind the recovered kernel's platform interface.
 * Pooka's Free Software License. */
#include "bios.h"
#include <stdint.h>
#define PF_WORD(a) (*(volatile uint32_t *)(a))
static unsigned disk_transfer(unsigned write,uint32_t drive,uint32_t lba,uint32_t sectors) {
    if(!sectors || sectors>56)return 0;
    volatile uint8_t *packet=(volatile uint8_t *)0x6000;
    packet[0]=16;packet[1]=0;*(volatile uint16_t *)(packet+2)=(uint16_t)sectors;
    *(volatile uint16_t *)(packet+4)=0;*(volatile uint16_t *)(packet+6)=0x1000;
    *(volatile uint32_t *)(packet+8)=lba;*(volatile uint32_t *)(packet+12)=0;
    struct pf_bios_regs r={.eax=write?0x4300:0x4200,.edx=drive,.esi=0x6000};
    return pf_bios_interrupt(0x13,&r);
}
unsigned FUN_0002002c(void) {
    struct pf_bios_regs r={.eax=0x0100};pf_bios_interrupt(0x16,&r);
    if(r.flags&0x40)return 0;
    r=(struct pf_bios_regs){0};pf_bios_interrupt(0x16,&r);return r.eax&0xffff;
}
unsigned FUN_00020113(void) {
    struct pf_bios_regs r={.eax=0x1130,.ebx=0x0600};pf_bios_interrupt(0x10,&r);
    *(volatile uint16_t *)0x20ccc=r.es;*(volatile uint16_t *)0x20cce=(uint16_t)r.ebp;
    *(volatile uint16_t *)0x20cd0=(uint16_t)r.ecx;
    return r.ecx!=0;
}
unsigned FUN_0002022b(void) {
    uint32_t offset=PF_WORD(0x20cda),length=PF_WORD(0x20cde);
    if(length>0x7000-(offset&511))return 0;
    unsigned ok=disk_transfer(0,PF_WORD(0x20cd2),PF_WORD(0x20cd6)+(offset>>9),((offset&511)+length+511)>>9);
    return ok;
}
unsigned FUN_00020386(void) {
    volatile uint8_t *parameters=(volatile uint8_t *)0x5000;
    for(unsigned i=0;i<32;++i)parameters[i]=0;
    *(volatile uint16_t *)parameters=30;
    struct pf_bios_regs r={.eax=0x4800,.edx=PF_WORD(0x20cee),.esi=0x5000};
    if(!pf_bios_interrupt(0x13,&r))return 0;
    uint64_t sectors=*(volatile uint64_t *)(parameters+16);
    PF_WORD(0x20cf2)=sectors>0xffffffffULL?0xffffffffU:(uint32_t)sectors;
    return sectors!=0;
}
unsigned FUN_000204b9(void) {return disk_transfer(1,PF_WORD(0x20ce2),PF_WORD(0x20ce6),PF_WORD(0x20cea));}
unsigned FUN_000205e7(void) {struct pf_bios_regs r={.eax=0x13};pf_bios_interrupt(0x10,&r);return 1;}
unsigned FUN_000206a8(unsigned microseconds) {
    struct pf_bios_regs r={.eax=0x8600,.ecx=microseconds>>16,.edx=microseconds&0xffff};
    return pf_bios_interrupt(0x15,&r);
}
unsigned FUN_000207a6(void) {
    struct pf_bios_regs r={.eax=3};pf_bios_interrupt(0x10,&r);
    PF_WORD(0x20d18)=0;return 1;
}
unsigned FUN_00020867(void) {
    volatile uint8_t *controller=(volatile uint8_t *)0x5000;
    for(unsigned i=0;i<512;++i)controller[i]=0;
    PF_WORD(0x5000)=0x32454256;
    struct pf_bios_regs r={.eax=0x4f00,.edi=0x5000};pf_bios_interrupt(0x10,&r);
    if((r.eax&0xffff)!=0x4f)return 0;
    uint32_t far_pointer=PF_WORD(0x500e);
    const uint16_t *modes=(const uint16_t *)(uintptr_t)(((far_pointer>>16)<<4)+(far_pointer&0xffff));
    for(unsigned i=0;i<256 && modes[i]!=0xffff;++i) {
        uint16_t mode=modes[i];volatile uint8_t *info=(volatile uint8_t *)0x5200;
        r=(struct pf_bios_regs){.eax=0x4f01,.ecx=mode,.edi=0x5200};pf_bios_interrupt(0x10,&r);
        if((r.eax&0xffff)!=0x4f || !(*(volatile uint16_t *)info&0x80) || info[25]!=32)continue;
        uint16_t width=*(volatile uint16_t *)(info+18),height=*(volatile uint16_t *)(info+20);
        if(width!=1280 || height!=800)continue;
        r=(struct pf_bios_regs){.eax=0x4f02,.ebx=mode|0x4000};pf_bios_interrupt(0x10,&r);
        if((r.eax&0xffff)!=0x4f)return 0;
        PF_WORD(0x20d18)=*(volatile uint32_t *)(info+40);
        PF_WORD(0x20d1c)=*(volatile uint16_t *)(info+16);PF_WORD(0x20d20)=width;PF_WORD(0x20d24)=height;PF_WORD(0x20d28)=32;
        PF_WORD(0x20d2c)=(1U<<info[31])-1;PF_WORD(0x20d30)=info[32];
        PF_WORD(0x20d34)=(1U<<info[33])-1;PF_WORD(0x20d38)=info[34];
        PF_WORD(0x20d3c)=(1U<<info[35])-1;PF_WORD(0x20d40)=info[36];return 1;
    }
    return 0;
}
