/* OpenBIOS byte transfers preserve native interrupt guards and short I/O.
 * Pooka's Free Software License. */
#include "functions.h"
static int pf_preload_disk_call110(uint32_t *request){
 uintptr_t entry=*(volatile uint32_t *)(uintptr_t)0x211e00cU;
 uint32_t flags;__asm__ volatile("pushfl; popl %0; cli":"=r"(flags)::"memory");
 int status=((int (*)(void *))entry)(request);
 if(flags&0x200)__asm__ volatile("sti":::"memory");
 return status;
}
bool recovered_2042ab0(int handle,uint lba,int buffer,uint bytes,char write){
 if(!buffer || *(volatile uint8_t *)(uintptr_t)0x211e004U ||
    !*(volatile uint32_t *)(uintptr_t)0x211e00cU)return false;
 uint32_t request[19]={0};request[0]=0x2111f3aU;request[1]=3;request[2]=1;
 request[3]=handle;request[4]=lba>>23;request[5]=lba<<9;
 if(pf_preload_disk_call110(request) || request[6])return false;
 uint32_t offset=0;
 while(offset<bytes){
  if(!handle || *(volatile uint8_t *)(uintptr_t)0x211e004U ||
     !*(volatile uint32_t *)(uintptr_t)0x211e00cU)return false;
  uint32_t amount=bytes-offset;if(amount>0x8000)amount=0x8000;
  for(unsigned i=0;i<19;i++)request[i]=0;
  request[0]=write?0x2111dbfU:0x21119f6U;request[1]=3;request[2]=1;
  request[3]=handle;request[4]=(uint32_t)buffer+offset;request[5]=amount;
  if(pf_preload_disk_call110(request))return false;
  if((int32_t)request[6]<1 || request[6]>amount)return false;
  offset+=request[6];
 }
 return true;
}
