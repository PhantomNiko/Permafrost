/* Pooka's Free Software License. Contiguous and fragmented firmware file reads. */
#include <stdint.h>
#include <stddef.h>
void *memcpy(void *,const void *,size_t);
void *memset(void *,int,size_t);
#define assert(condition) do { if(!(condition)) __builtin_trap(); } while(0)
#include "../firmware/uefi/common/loader.c"
static uint8_t bytes[8*1024*1024],output[5*1024*1024+64],fat[512];
static unsigned reads,allocations,releases,fail_read;
static Status EFI_ABI pages(uint32_t kind,uint32_t type,uintptr_t count,uint64_t *address){
 assert(kind==1&&type==2&&count<=16);*address=0x200000;allocations++;return 0;
}
static Status EFI_ABI release(uint64_t address,uintptr_t count){assert(address==0x200000&&count<=16);releases++;return 0;}
static Status EFI_ABI read_block(Block *self,uint32_t id,uint64_t lba,uintptr_t amount,void *out){
 assert(self==disk&&id==7&&amount%512==0&&lba*512+amount<=sizeof bytes);reads++;
 if(fail_read)return (Status)1<<(sizeof(Status)*8-1);
 memcpy(out,bytes+lba*512,amount);return 0;
}
unsigned pf_test_file_chain(void){

 Services boot={.allocate_pages=pages,.free_pages=release};services=&boot;
 Media medium={.id=7,.present=1,.block_size=512,.last=sizeof bytes/512-1};Block device={.media=&medium,.read=read_block};disk=&device;payload_lba=3;
 unsigned cases=0;
 const unsigned cluster_sizes[]={1,8,128};
 for(unsigned test=0;test<3;test++){unsigned sectors=cluster_sizes[test];
  struct Volume volume={.base=5,.sectors=sizeof bytes/512-8,.cluster_sectors=sectors,.fat_sectors=1,.data_sector=8,.clusters=100};size_t cluster=sectors*512;
  for(unsigned fragmented=0;fragmented<2;fragmented++)for(unsigned partial=0;partial<2;partial++){
   size_t length=cluster*70-(partial?137:0);memset(fat,0,sizeof fat);memset(output,0xa5,sizeof output);reads=allocations=releases=fail_read=0;
   for(unsigned i=0;i<70;i++){
    unsigned id=fragmented?(i<35?2+i:51+i-35):2+i;unsigned next=i==69?0xffffffff:fragmented?(i==34?51:id+1):id+1;memcpy(fat+id*4,&next,4);
    uint8_t *data=bytes+(payload_lba+volume.base+volume.data_sector+(id-2)*sectors)*512;
    for(size_t n=0;n<cluster;n++)data[n]=(uint8_t)(i*13+n*7+5);
   }
   assert(length+32<=sizeof output);assert(chain(&volume,fat,2,length,output+16));
   for(size_t n=0;n<length;n++)assert(output[16+n]==(uint8_t)((n/cluster)*13+(n%cluster)*7+5));
   for(unsigned n=0;n<16;n++)assert(output[n]==0xa5&&output[length+16+n]==0xa5);
   assert(reads<70&&allocations==partial&&releases==partial);cases++;
  }
  memset(fat,0,sizeof fat);reads=allocations=releases=0;assert(!chain(&volume,fat,1,cluster,output));assert(!reads);cases++;
  unsigned next=3;memcpy(fat+8,&next,4);fail_read=1;assert(!chain(&volume,fat,2,cluster,output));fail_read=0;cases++;
  reads=0;assert(chain(&volume,fat,2,0,output));assert(!reads);cases++;
 }
 return cases;
}
