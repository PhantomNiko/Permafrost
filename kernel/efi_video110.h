/* Optional WFE11 source-firmware presentation service; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
static void *pf_efi110_source_context;
static inline void pf_efi110_remember_context(void *context){
 const uint32_t *w=(const uint32_t *)context;
 if(w && w[0]==0x33454657U && w[1]==11 && w[2]>=0x2560 &&
    w[0x2548/4]==0x34424650U && w[0x254c/4]==1)pf_efi110_source_context=context;
}
static inline unsigned pf_efi110_present_rectangle(void *context,uint32_t x,uint32_t y,uint32_t width,uint32_t height){
 if(pf_efi110_source_context)context=pf_efi110_source_context;
 volatile uint32_t *words=(volatile uint32_t *)context;
 if(!width || !height || !words || words[0]!=0x33454657U || words[1]!=11 ||
    words[2]<0x2560 || words[0x2548/4]!=0x34424650U || words[0x254c/4]!=1 ||
    !(words[0x2558/4]&2))return 0;
 uintptr_t address=(uintptr_t)*(volatile uint64_t *)((uint8_t *)context+0x2550);
 if(!address)return 0;
 uint32_t request[32]={9};request[8]=x;request[9]=y;request[10]=width;request[11]=height;
 words[0x2558/4]|=4;__sync_synchronize();
 ((uint32_t(*)(uint32_t *))address)(request);return 1;
}
