/* Framebuffer coherency and optional firmware presentation. Pooka's Free Software License. */
#include "functions.h"
#include "efi_video110.h"
void recovered_40407ea8(uint32_t x,uint32_t y,int width,int height){
 if(!width||!height)return;
 DataMemoryBarrier(0xb);
 DataMemoryBarrier(0xf);
 DataMemoryBarrier(0xf);
 pf_efi110_present_rectangle((void *)(uintptr_t)*(volatile uint32_t *)(uintptr_t)0x40535000U,x,y,width,height);
}
