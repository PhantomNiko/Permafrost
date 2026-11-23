/* Exercise real exclusive-monitor instructions. Pooka's Free Software License. */
#include <stdint.h>
#include "arm_exclusive.h"
static uint64_t words[4] __attribute__((aligned(16)));
unsigned pf_test_exclusive(void) {
    uintptr_t address=(uintptr_t)words;
    words[0]=UINT64_C(0x11223344a1b2c3d4);
    if(pf_arm_ldrex8(address)!=0xd4 || pf_arm_strex8(address,0xab))return 1;
    if(words[0]!=UINT64_C(0x11223344a1b2c3ab))return 2;
    if(pf_arm_ldrex16(address)!=0xc3ab || pf_arm_strex16(address,0x9876))return 3;
    if(words[0]!=UINT64_C(0x11223344a1b29876))return 4;
    if(pf_arm_ldrex32(address)!=0xa1b29876 || pf_arm_strex32(address,0xfedcba98))return 5;
    if(words[0]!=UINT64_C(0x11223344fedcba98))return 6;
    if(pf_arm_ldrex64(address)!=words[0] || pf_arm_strex64(address,UINT64_C(0x9876543210abcdef)))return 7;
    if(words[0]!=UINT64_C(0x9876543210abcdef))return 8;
    (void)pf_arm_ldrex32(address);
    __asm__ volatile("clrex":::"memory");
    if(!pf_arm_strex32(address,0) || words[0]!=UINT64_C(0x9876543210abcdef))return 9;
    (void)pf_arm_ldrex64(address);
    __asm__ volatile("clrex":::"memory");
    if(!pf_arm_strex64(address,0) || words[0]!=UINT64_C(0x9876543210abcdef))return 10;
    unsigned attempts=0,status;
    uint32_t previous;
    do {
        previous=pf_arm_ldrex32(address);
        if(!attempts++)__asm__ volatile("clrex":::"memory");
        status=pf_arm_strex32(address,previous+1);
    }while(status);
    if(attempts!=2 || words[0]!=UINT64_C(0x9876543210abcdf0))return 11;
    return 0;
}
