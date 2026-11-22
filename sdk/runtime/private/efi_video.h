/* Optional source-firmware presentation service; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
static inline unsigned pf_efi_present_rectangle(void *context,uint32_t x,uint32_t y,uint32_t width,uint32_t height){
 volatile uint32_t *words=(volatile uint32_t *)context;
 if(!width || !height || !words || words[0]!=0x33454657U || words[1]!=5 ||
    words[2]<0x2150 || words[0x2138/4]!=0x34424650U || words[0x213c/4]!=1 ||
    !(words[0x2148/4]&2))return 0;
 uintptr_t address=(uintptr_t)*(volatile uint64_t *)((uint8_t *)context+0x2140);
 if(!address)return 0;
 uint32_t request[32]={9};request[8]=x;request[9]=y;request[10]=width;request[11]=height;
 words[0x2148/4]|=4;__sync_synchronize();
 ((uint32_t(*)(uint32_t *))address)(request);return 1;
}
