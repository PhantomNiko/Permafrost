/* Pooka's Free Software License. Bounded WFE5 cache publication. */
#include <assert.h>
#include "../firmware/uefi/common/loader.c"
static uint64_t allocation,read_lba[256];
static uintptr_t read_bytes[256];
static unsigned read_count;
static Status EFI_ABI pages(uint32_t kind,uint32_t type,uintptr_t count,uint64_t *address){
 assert(kind==1&&type==2&&count&&*address==0xffffffffU);
 *address=allocation;allocation+=count*4096;return 0;
}
static Status EFI_ABI read_block(Block *device,uint32_t id,uint64_t lba,uintptr_t bytes,void *buffer){
 assert(device==disk&&id==7&&buffer&&read_count<256);
 read_lba[read_count]=lba;read_bytes[read_count++]=bytes;return 0;
}
int main(void){
 Services boot={.allocate_pages=pages};services=&boot;
 Media medium={.id=7,.present=1,.block_size=512};Block device={.media=&medium,.read=read_block};disk=&device;
 uint64_t words[PF_EFI_CONTEXT_BYTES/8];context=(uint32_t *)words;
 const uint32_t sizes[]={64,4096,4097,262144,1048576,UINT32_MAX};
 for(unsigned nested=0;nested<2;nested++)for(unsigned test=0;test<sizeof sizes/sizeof *sizes;test++){
  clear(words,sizeof words);allocation=0x10000000;read_count=0;payload_lba=nested?73728:0;payload_sectors=sizes[test];medium.last=payload_lba+(uint64_t)payload_sectors+8191;
  assert(prefetch_disk_context());uint32_t expected=payload_sectors>262144U?262144U:payload_sectors;
  unsigned chunks=(expected+4095)/4096;assert(context[0x1a0]==chunks+1&&read_count==chunks+1);
  uint32_t total=0;
  for(unsigned i=0;i<chunks;i++){
   uint32_t count=expected-total;if(count>4096)count=4096;
   assert(context[0x1a2+i]==payload_lba+total&&context[0x2a2+i]==count&&context[0x3a2+i]);
   assert(read_lba[i]==payload_lba+total&&read_bytes[i]==(uintptr_t)count*512);total+=count;
  }
  assert(total==expected&&read_lba[chunks]==0&&read_bytes[chunks]==64*512);
  assert(context[0x1a2+chunks]==0&&context[0x2a2+chunks]==64&&context[0x3a2+chunks]);
 }
 return 0;
}
