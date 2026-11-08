/* Pooka's Free Software License. Explicit firmware input capability gate. */
#include <assert.h>
#include "efi_input.h"
int main(void){
 uint64_t storage[0x2150/8]={0};uint32_t *ctx=(uint32_t *)storage;
 assert(!pf_efi_owns_usb_input(0));assert(!pf_efi_owns_usb_input(ctx));
 ctx[0]=0x33454657;ctx[1]=5;ctx[2]=0x2150;ctx[0x2138/4]=0x34424650;ctx[0x213c/4]=1;
 assert(!pf_efi_owns_usb_input(ctx));ctx[0x2148/4]=1;assert(pf_efi_owns_usb_input(ctx));
 ctx[2]=0x2148;assert(!pf_efi_owns_usb_input(ctx));ctx[2]=0x2150;
 ctx[1]=4;assert(!pf_efi_owns_usb_input(ctx));ctx[1]=5;
 ctx[0x213c/4]=2;assert(!pf_efi_owns_usb_input(ctx));ctx[0x213c/4]=1;
 ctx[0x2138/4]=0;assert(!pf_efi_owns_usb_input(ctx));return 0;
}
