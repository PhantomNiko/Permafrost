/* Framebuffer coherency and optional firmware presentation. Pooka's Free Software License. */
#include "functions.h"
#include "efi_video110.h"
void recovered_82404d68(undefined8 x,undefined8 y,int width,int height){
 if(!width||!height)return;
 DataMemoryBarrier(2,3);
 DataSynchronizationBarrier(3,3,0);
 DataSynchronizationBarrier(3,3,0);
 pf_efi110_present_rectangle((void *)(uintptr_t)*(volatile uint64_t *)(uintptr_t)0x826f5228U,x,y,width,height);
}
