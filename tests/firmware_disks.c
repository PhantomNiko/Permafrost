/* Pooka's Free Software License. WFE5 disk inventory and indexed I/O. */
#include <assert.h>
#include "../recovery/in-progress/firmware/loader.c"
static Media media[5];static Block devices[5];static void *handles[7];
static unsigned freed,reads,writes,flushes;static Block *last;
static Status EFI_ABI read_block(Block *self,uint32_t id,uint64_t lba,uintptr_t bytes,void *out){assert(id==self->media->id&&lba==37&&bytes==512&&out==(void *)(uintptr_t)0x200000);last=self;reads++;return 0;}
static Status EFI_ABI write_block(Block *self,uint32_t id,uint64_t lba,uintptr_t bytes,void *out){assert(id==self->media->id&&lba==37&&bytes==512&&out==(void *)(uintptr_t)0x200000);last=self;writes++;return 0;}
static Status EFI_ABI flush_block(Block *self){last=self;flushes++;return 0;}
static Status EFI_ABI list(uint32_t kind,Guid *guid,void *key,uintptr_t *count,void ***out){assert(kind==2&&guid==&block_guid&&!key);*count=7;*out=handles;return 0;}
static Status EFI_ABI protocol(void *handle,Guid *guid,void **out){assert(guid==&block_guid);*out=handle;return 0;}
static Status EFI_ABI release(void *pool){assert(pool==handles);freed++;return 0;}
static Status EFI_ABI boot_read(Block *self,uint32_t id,uint64_t lba,uintptr_t bytes,void *out){
 assert(id==self->media->id&&bytes==512);clear(out,bytes);
 if(lba==65&&(self==devices+1||self==devices+2))copy(out,"WBPT",4);return 0;
}
int main(void){
 uint64_t storage[PF_EFI_CONTEXT_BYTES/8]={0};context=(uint32_t *)storage;
 Services boot={.handles=list,.protocol=protocol,.free_pool=release};services=&boot;
 for(unsigned i=0;i<5;i++){media[i]=(Media){.id=7+i,.present=1,.block_size=512,.last=9999+i};devices[i]=(Block){.media=media+i,.read=read_block,.write=write_block,.flush=flush_block};}
 disk=devices+1;media[2].partition=1;media[3].block_size=4096;media[4].present=0;
 handles[0]=devices+2;handles[1]=devices;handles[2]=disk;handles[3]=devices+3;handles[4]=devices+4;handles[5]=disk;handles[6]=devices;
 context[0x2138/4]=PF_EFI_BRIDGE_MAGIC;disk_devices();assert(live_disk_count==2&&freed==1&&context[0x1530/4]==2);
 assert(live_disks[0]==disk&&live_disks[1]==devices);
 for(unsigned i=0;i<2;i++){Block *device=i?devices:disk;assert(context[0x1538/4+i]==(uint32_t)(uintptr_t)device);assert(((uint64_t *)((uint8_t *)context+0x1738))[i]==(uintptr_t)device);assert(context[0x1b38/4+i]==device->media->id);assert(context[0x1d38/4+i]==device->media->last+1);assert(!context[0x1f38/4+i]);}
 assert(context[0x2138/4]==PF_EFI_BRIDGE_MAGIC);
 uint32_t request[32]={2,0,37,0,0x200000,512,1};assert(dispatch(request)==1&&reads==1&&last==devices);
 request[0]=3;assert(dispatch(request)==1&&writes==1&&last==devices);
 request[0]=5;assert(dispatch(request)==1&&flushes==1&&last==devices);
 media[0].readonly=1;request[0]=3;assert(!dispatch(request)&&writes==1);media[0].readonly=0;
 request[6]=2;assert(!dispatch(request)&&writes==1);request[6]=0;assert(dispatch(request)&&writes==2&&last==disk);
 request[2]=media[1].last+1;assert(!dispatch(request)&&writes==2);
 media[0].last=UINT64_C(0x100000000);disk_devices();assert(context[0x1d38/4+1]==UINT32_MAX&&live_disk_count==2);
 for(unsigned i=0;i<5;i++)devices[i].read=boot_read;
 assert(select_disk()&&disk==devices+1);return 0;
}
