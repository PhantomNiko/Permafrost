/* Pooka's Free Software License. Optional firmware presentation handshake. */
#include <assert.h>
#include "efi_video110.h"
static unsigned calls;static uint32_t seen[4];
static uint32_t present(uint32_t *request){assert(request[0]==9);for(unsigned i=0;i<4;i++)seen[i]=request[8+i];calls++;return 1;}
int main(void){
 uint64_t storage[0x2560/8]={0};uint32_t *c=(uint32_t *)storage;
 c[0]=0x33454657;c[1]=11;c[2]=0x2560;c[0x2548/4]=0x34424650;c[0x254c/4]=1;
 *(uint64_t *)((uint8_t *)c+0x2550)=(uintptr_t)present;
 assert(!pf_efi110_present_rectangle(c,1,2,3,4)&&!calls);
 c[0x2558/4]=2;assert(pf_efi110_present_rectangle(c,1,2,3,4)&&calls==1&&c[0x2558/4]==6);
 for(unsigned i=0;i<4;i++)assert(seen[i]==i+1);
 assert(!pf_efi110_present_rectangle(c,1,2,0,4)&&calls==1);
 c[2]=0x2558;assert(!pf_efi110_present_rectangle(c,1,2,3,4)&&calls==1);
 c[2]=0x2560;pf_efi110_remember_context(c);
 uint32_t copied[0x2548/4]={0};copied[0]=c[0];copied[1]=11;copied[2]=sizeof(copied);
 assert(pf_efi110_present_rectangle(copied,5,6,7,8)&&calls==2);
 for(unsigned i=0;i<4;i++)assert(seen[i]==i+5);
 pf_efi110_remember_context(copied);
 assert(pf_efi110_present_rectangle(copied,9,10,11,12)&&calls==3);return 0;
}
