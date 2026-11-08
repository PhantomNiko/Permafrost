/* Pooka's Free Software License. Optional firmware presentation handshake. */
#include <assert.h>
#include "efi_video.h"
static unsigned calls;static uint32_t seen[4];
static uint32_t present(uint32_t *request){assert(request[0]==9);for(unsigned i=0;i<4;i++)seen[i]=request[8+i];calls++;return 1;}
int main(void){
 uint64_t storage[0x2150/8]={0};uint32_t *c=(uint32_t *)storage;
 c[0]=0x33454657;c[1]=5;c[2]=0x2150;c[0x2138/4]=0x34424650;c[0x213c/4]=1;
 *(uint64_t *)((uint8_t *)c+0x2140)=(uintptr_t)present;
 assert(!pf_efi_present_rectangle(c,1,2,3,4)&&!calls);
 c[0x2148/4]=2;assert(pf_efi_present_rectangle(c,1,2,3,4)&&calls==1&&c[0x2148/4]==6);
 for(unsigned i=0;i<4;i++)assert(seen[i]==i+1);
 assert(!pf_efi_present_rectangle(c,1,2,0,4)&&calls==1);
 c[2]=0x2148;assert(!pf_efi_present_rectangle(c,1,2,3,4)&&calls==1);return 0;
}
