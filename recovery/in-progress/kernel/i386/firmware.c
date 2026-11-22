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
unsigned pf_bios_poll_key(void) {
    struct pf_bios_regs r={.eax=0x0100};pf_bios_interrupt(0x16,&r);
    if(r.flags&0x40)return 0;
    r=(struct pf_bios_regs){0};pf_bios_interrupt(0x16,&r);return r.eax&0xffff;
}

unsigned pf_bios_read_bundle(void) {
    uint32_t offset=PF_WORD(0x2000c40),length=PF_WORD(0x2000c44);
    if(length>0x7000-(offset&511))return 0;
    unsigned ok=disk_transfer(0,PF_WORD(0x2000c38),PF_WORD(0x2000c3c)+(offset>>9),((offset&511)+length+511)>>9);
    return ok;
}
unsigned pf_bios_query_capacity(void) {
    volatile uint8_t *parameters=(volatile uint8_t *)0x5000;
    for(unsigned i=0;i<32;++i)parameters[i]=0;
    *(volatile uint16_t *)parameters=30;
    struct pf_bios_regs r={.eax=0x4800,.edx=PF_WORD(0x2000c54),.esi=0x5000};
    if(!pf_bios_interrupt(0x13,&r))return 0;
    uint64_t sectors=*(volatile uint64_t *)(parameters+16);
    PF_WORD(0x2000c58)=sectors>0xffffffffULL?0xffffffffU:(uint32_t)sectors;
    return sectors!=0;
}
unsigned pf_bios_write_sectors(void) {return disk_transfer(1,PF_WORD(0x2000c48),PF_WORD(0x2000c4c),PF_WORD(0x2000c50));}
unsigned pf_bios_set_mode13(void) {struct pf_bios_regs r={.eax=0x13};pf_bios_interrupt(0x10,&r);return 1;}
unsigned pf_bios_wait_microseconds(unsigned microseconds) {
    struct pf_bios_regs r={.eax=0x8600,.ecx=microseconds>>16,.edx=microseconds&0xffff};
    return pf_bios_interrupt(0x15,&r);
}
unsigned pf_bios_set_text_mode(void) {
    struct pf_bios_regs r={.eax=3};pf_bios_interrupt(0x10,&r);
    PF_WORD(0x2000c7e)=0;return 1;
}
unsigned pf_bios_set_wxga_mode(void) {
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
        PF_WORD(0x2000c7e)=*(volatile uint32_t *)(info+40);
        PF_WORD(0x2000c82)=*(volatile uint16_t *)(info+16);PF_WORD(0x2000c86)=width;PF_WORD(0x2000c8a)=height;PF_WORD(0x2000c8e)=32;
        PF_WORD(0x2000c92)=(1U<<info[31])-1;PF_WORD(0x2000c96)=info[32];
        PF_WORD(0x2000c9a)=(1U<<info[33])-1;PF_WORD(0x2000c9e)=info[34];
        PF_WORD(0x2000ca2)=(1U<<info[35])-1;PF_WORD(0x2000ca6)=info[36];return 1;
    }
    return 0;
}
