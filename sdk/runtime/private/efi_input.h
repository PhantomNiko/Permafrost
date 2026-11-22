/* Firmware USB input ownership extension; Pooka's Free Software License. */
#pragma once
#include <stdint.h>
static inline unsigned pf_efi_owns_usb_input(const void *context){
 const uint32_t *words=(const uint32_t *)context;
 return words && words[0]==0x33454657U && words[1]==5 &&
        words[2]>=0x2150U && words[0x2138/4]==0x34424650U &&
        words[0x213c/4]==1 && (words[0x2148/4]&1)!=0;
}
