/* PolynyaFS and Mach-O loading for the Permafrost BIOS boot chain.
 * Pooka's Free Software License. */
#include "bios.h"
#include "pfs.h"
#include <stddef.h>
static uint8_t sector[512];
static uint8_t directory[512];
static uint8_t drive;
static uint32_t kernel_first,kernel_last;
#define KERNEL_MIN 0x02000000U
#define KERNEL_MAX 0x03000000U
static uint32_t le32(const void *p) { const uint8_t *s=p;return (uint32_t)s[0]|(uint32_t)s[1]<<8|(uint32_t)s[2]<<16|(uint32_t)s[3]<<24; }
static uint32_t be32(const void *p) { const uint8_t *s=p;return (uint32_t)s[3]|(uint32_t)s[2]<<8|(uint32_t)s[1]<<16|(uint32_t)s[0]<<24; }
static void copy(void *out,const void *in,uint32_t n) {uint8_t *d=out;const uint8_t *s=in;while(n--)*d++=*s++;}
static void zero(void *out,uint32_t n) {uint8_t *d=out;while(n--)*d++=0;}
static void port(unsigned p,unsigned v) {__asm__ volatile("outb %b0,%w1"::"a"(v),"Nd"(p));}
static unsigned input(unsigned p) {uint8_t v;__asm__ volatile("inb %w1,%0":"=a"(v):"Nd"(p));return v;}
#include "ps2.h"
static void text(const char *s) {
 while(*s) {
  unsigned c=(uint8_t)*s++;unsigned spins=100000;
  while(spins-- && !(input(0x3fd)&32)){}
  port(0x3f8,c);
  struct pf_bios_regs r={.eax=0x0e00|c,.ebx=7};pf_bios_interrupt(0x10,&r);
 }
}
static int read_sector(uint32_t lba,void *out) {
 volatile uint8_t *packet=(volatile uint8_t *)0x6000;
 packet[0]=16;packet[1]=0;*(volatile uint16_t *)(packet+2)=1;
 *(volatile uint16_t *)(packet+4)=0;*(volatile uint16_t *)(packet+6)=0x1000;
 *(volatile uint32_t *)(packet+8)=lba;*(volatile uint32_t *)(packet+12)=0;
 struct pf_bios_regs r={.eax=0x4200,.edx=drive,.esi=0x6000};
 if(!pf_bios_interrupt(0x13,&r))return 0;
 copy(out,(const void *)0x10000,512);return 1;
}
static struct pf_pfs volume;
struct file {struct pf_pfs_entry entry;uint32_t size;};
static int disk_bytes(void *opaque,uint64_t offset,void *output,size_t length){
 (void)opaque;unsigned char *out=output;
 while(length){uint64_t lba=offset/512;if(lba>0xffffffffULL || !read_sector((uint32_t)lba,sector))return 0;unsigned start=offset&511,n=512-start;if(n>length)n=length;copy(out,sector+start,n);out+=n;offset+=n;length-=n;}return 1;
}
static int open_kernel(uint32_t partition,struct file *file){
 uint64_t header=(uint64_t)partition*512+PF_PFS_BLOCK_SIZE;
 if(pf_pfs_open(&volume,disk_bytes,0,header,(void *)0x100000)!=PF_PFS_OK)return 0;
 if(pf_pfs_lookup(&volume,"Kernel/Permafrost.kernel",&file->entry)!=PF_PFS_OK || file->entry.kind!=1 || file->entry.size>0xffffffffU)return 0;
 file->size=(uint32_t)file->entry.size;return 1;
}
static int read_file(const struct file *file,uint32_t offset,void *out,uint32_t bytes){return pf_pfs_read_file(&volume,&file->entry,offset,out,bytes)==PF_PFS_OK;}
static uint32_t load_kernel(const struct file *f) {
 kernel_first=KERNEL_MAX;kernel_last=KERNEL_MIN;
 uint8_t header[80];uint32_t slice=0;
 if(!read_file(f,0,header,28))return 0;
 if(be32(header)==0xcafebabe) {
  uint32_t count=be32(header+4);if(!count || count>16)return 0;
  for(uint32_t i=0;i<count;++i) {
   if(!read_file(f,8+i*20,header,20))return 0;
   if(be32(header)==7) {slice=be32(header+8);break;}
  }
  if(!slice || !read_file(f,slice,header,28))return 0;
 }
 if(le32(header)!=0xfeedface || le32(header+4)!=7 || le32(header+12)!=5)return 0;
 uint32_t commands=le32(header+16),bytes=le32(header+20),position=slice+28,end=position+bytes,entry=0;
 if(commands>1024 || bytes>65536 || end<position || end>f->size)return 0;
 for(uint32_t i=0;i<commands;++i) {
  if(position>end || end-position<8 || !read_file(f,position,header,8))return 0;
  uint32_t command=le32(header),size=le32(header+4);
  if(size<8 || size>end-position)return 0;
  if(command==1) {
   if(size<56 || !read_file(f,position,header,56))return 0;
   uint32_t address=le32(header+24),memory=le32(header+28),offset=le32(header+32),used=le32(header+36);
   if(used>memory || address<KERNEL_MIN || address>=KERNEL_MAX || memory>KERNEL_MAX-address || slice+offset<slice)return 0;
   if(address<kernel_first)kernel_first=address;
   if(address+memory>kernel_last)kernel_last=address+memory;
   if(!read_file(f,slice+offset,(void *)(uintptr_t)address,used))return 0;
   zero((void *)(uintptr_t)(address+used),memory-used);
  } else if(command==5) {
   if(size<80 || !read_file(f,position,header,80) || le32(header+8)!=1 || le32(header+12)!=16)return 0;
   entry=le32(header+56);
  }
  position+=size;
 }
 return position==end && entry>=KERNEL_MIN && entry<KERNEL_MAX ? entry:0;
}
static void add_memory_range(uint64_t base,uint64_t length,uint32_t *count,uint32_t *wide_count) {
 if(base<0x300000){uint64_t trim=0x300000-base;if(trim>=length)return;base+=trim;length-=trim;}
 if(!length)return;
 if(*wide_count<64) {
  ((uint64_t *)0x6240)[*wide_count*2]=base;((uint64_t *)0x6240)[*wide_count*2+1]=length;++*wide_count;
 }
 if(*count<16 && length<=0xffffffffULL) {
  ((uint32_t *)0x6090)[*count*2]=(uint32_t)base;((uint32_t *)0x6090)[*count*2+1]=(uint32_t)length;++*count;
 }
}
static void available_memory(uint64_t base,uint64_t end,uint32_t *count,uint32_t *wide_count) {
 if(kernel_first<kernel_last && base<kernel_last && kernel_first<end) {
  if(base<kernel_first)add_memory_range(base,kernel_first-base,count,wide_count);
  if(kernel_last<end)add_memory_range(kernel_last,end-kernel_last,count,wide_count);
 }else add_memory_range(base,end-base,count,wide_count);
}
static void memory_map(void) {
 uint32_t continuation=0,count=0,wide_count=0,maximum=0;
 do {
  zero((void *)0x5000,24);
  struct pf_bios_regs r={.eax=0xe820,.ebx=continuation,.ecx=24,.edx=0x534d4150,.edi=0x5000};
  if(!pf_bios_interrupt(0x15,&r) || r.eax!=0x534d4150 || r.ecx<20)break;
  uint64_t base=*(uint64_t *)0x5000,length=*(uint64_t *)0x5008;
  uint32_t type=*(uint32_t *)0x5010;
  if(type==1 && length && base<0x100000000ULL) {
   if(length>0x100000000ULL-base)length=0x100000000ULL-base;
   uint64_t end=base+length;if(end>maximum)maximum=end>=0xffffffffULL?0xfffffff0U:(uint32_t)end;
   available_memory(base,end,&count,&wide_count);
  }
  continuation=r.ebx;
 } while(continuation);
 if(!count) {available_memory(0x100000,0x4000000,&count,&wide_count);maximum=0x4000000;}
 *(uint32_t *)0x6088=maximum;*(uint32_t *)0x608c=count;
 *(uint32_t *)0x6238=0x34364857;*(uint32_t *)0x623c=wide_count;
}
static uint32_t *const context=(uint32_t *)0x40000;
static uint32_t *const command=(uint32_t *)0x43000;
static uint32_t disk_sectors;
static int transfer(uint32_t lba,void *out,unsigned write){
 if(!write)return read_sector(lba,out);
 volatile uint8_t *packet=(volatile uint8_t *)0x6000;
 copy((void *)0x10000,out,512);packet[0]=16;packet[1]=0;*(volatile uint16_t *)(packet+2)=1;
 *(volatile uint16_t *)(packet+4)=0;*(volatile uint16_t *)(packet+6)=0x1000;*(volatile uint32_t *)(packet+8)=lba;*(volatile uint32_t *)(packet+12)=0;
 struct pf_bios_regs r={.eax=0x4300,.edx=drive,.esi=0x6000};return pf_bios_interrupt(0x13,&r);
}
static uint32_t bridge(uint32_t *request){
 if(!request)return 0;uint32_t result=0;
 switch(request[0]){
 case 1:{struct pf_bios_regs r={.eax=0x0100};pf_bios_interrupt(0x16,&r);if(!(r.flags&0x40)){r.eax=0;pf_bios_interrupt(0x16,&r);result=r.eax&0xffff;}break;}
 case 2:case 3:{uint64_t lba=request[2]|(uint64_t)request[3]<<32;unsigned length=request[5];unsigned char *p=(void *)(uintptr_t)request[4];if(!p || !length || (length&511) || lba>0xffffffffULL || length/512-1>0xffffffffULL-lba)break;result=1;for(unsigned n=0;n<length/512;n++)if(!transfer((uint32_t)lba+n,p+n*512,request[0]==3)){result=0;break;}break;}
 case 4:{uint32_t usec=request[7];struct pf_bios_regs r={.eax=0x8600,.ecx=usec>>16,.edx=usec&0xffff};pf_bios_interrupt(0x15,&r);result=1;break;}
 case 5:result=1;break;
 case 6:{const uint16_t *p=(const void *)(uintptr_t)request[4];if(p){while(*p){char text16[2]={(char)*p++,0};text(text16);}result=1;}break;}
 case 7:if(request[4] && request[5]>=32)result=pf_bios_ps2_pointer_absolute((void *)(uintptr_t)request[4],context[0x16],context[0x17]);break;
 case 8:if(context[0x13] && (!request[8] || request[8]==context[0x16]) && (!request[9] || request[9]==context[0x17])){request[12]=context[0x13];request[13]=0;for(unsigned n=0;n<11;n++)request[14+n]=context[0x14+n];result=1;}break;
 case 9:result=1;break;
 }
 request[1]=result;return result;
}
static int video_context(void){
 zero((void *)0x5000,512);*(uint32_t *)0x5000=0x32454256;
 struct pf_bios_regs r={.eax=0x4f00,.edi=0x5000};if(!pf_bios_interrupt(0x10,&r) || (r.eax&0xffff)!=0x4f)return 0;
 uint32_t modes=*(uint32_t *)0x500e;uint16_t *list=(uint16_t *)(uintptr_t)(((modes>>16)<<4)+(modes&0xffff));uint16_t mode=0xffff;uint64_t score=~0ULL;unsigned limit=0;
 for(;limit<512 && list[limit]!=0xffff;limit++){
  uint16_t current=list[limit];r=(struct pf_bios_regs){.eax=0x4f01,.ecx=current,.edi=0x5200};if(!pf_bios_interrupt(0x10,&r) || (r.eax&0xffff)!=0x4f)continue;
  uint8_t *info=(void *)0x5200;unsigned flags=*(uint16_t *)info,w=*(uint16_t *)(info+18),h=*(uint16_t *)(info+20);if((flags&0x91)!=0x91 || info[25]!=32 || !*(uint32_t *)(info+40) || !w || !h)continue;
  unsigned dx=w>1280?w-1280:1280-w,dy=h>800?h-800:800-h;uint64_t distance=dx+dy;if(distance<score){score=distance;mode=current;}
 }
 if(mode==0xffff)return 0;r=(struct pf_bios_regs){.eax=0x4f01,.ecx=mode,.edi=0x5200};if(!pf_bios_interrupt(0x10,&r))return 0;
 uint8_t *info=(void *)0x5200;context[0x13]=*(uint32_t *)(info+40);context[0x15]=*(uint16_t *)(info+16);context[0x16]=*(uint16_t *)(info+18);context[0x17]=*(uint16_t *)(info+20);context[0x18]=32;context[0x14]=context[0x15]*context[0x17];
 context[0x19]=((1U<<info[31])-1)<<info[32];context[0x1a]=((1U<<info[33])-1)<<info[34];context[0x1b]=((1U<<info[35])-1)<<info[36];context[0x1c]=info[32];context[0x1d]=info[34];context[0x1e]=info[36];
 r=(struct pf_bios_regs){.eax=0x4f02,.ebx=(uint32_t)mode|0x4000};return pf_bios_interrupt(0x10,&r) && (r.eax&0xffff)==0x4f;
}
static void handoff(uint32_t partition,uint32_t partition_sectors){
 unsigned a=1,b,c,d;__asm__ volatile("cpuid":"+a"(a),"=b"(b),"=c"(c),"=d"(d));
 if((d&0x3000000)==0x3000000){unsigned cr0,cr4;__asm__ volatile("mov %%cr0,%0;mov %%cr4,%1":"=r"(cr0),"=r"(cr4));cr0=(cr0&~4U)|2U;cr4|=0x600;__asm__ volatile("mov %0,%%cr0;mov %1,%%cr4"::"r"(cr0),"r"(cr4):"memory");}

 kernel_first&=~4095U;kernel_last=(kernel_last+4095U)&~4095U;memory_map();zero(context,0x2540);zero(command,256);context[0]=0x33454657;context[1]=11;context[2]=0x2540;
 context[9]=0;context[10]=disk_sectors;context[11]=partition;context[12]=partition_sectors;context[0x21]=disk_sectors;
 context[0x1530/4]=1;context[0x1538/4]=0x47000;((uint64_t *)((unsigned char *)context+0x1738))[0]=0x47000;context[0x1b38/4]=0;context[0x1d38/4]=disk_sectors;
 context[0x45]=(uintptr_t)bridge;context[0x46]=(uintptr_t)command;context[0x8c]=0x1001;context[0x8d]=0x50000;context[0x8e]=65536;
 unsigned count=*(uint32_t *)0x608c;if(count>16)count=16;context[0x24]=count;context[0x8f]=0x34364857;context[0x90]=count;uint64_t top=0;
 for(unsigned n=0;n<count;n++){uint32_t base=((uint32_t *)0x6090)[n*2],length=((uint32_t *)0x6090)[n*2+1];context[0x25+n]=base;context[0x35+n]=length;((uint64_t *)(context+0x92))[n]=base;((uint64_t *)(context+0x112))[n]=length;if(top<(uint64_t)base+length)top=(uint64_t)base+length;}
 context[0x1f]=(uint32_t)top;context[0x20]=top>>32;video_context();
 if(pf_bios_ps2_pointer_init())context[0x4d7]=1;
}
void pf_firmware_main(void){
 drive=*(uint8_t *)0x6068;port(0x3f9,0);port(0x3fb,0x80);port(0x3f8,1);port(0x3f9,0);port(0x3fb,3);port(0x3fa,0xc7);port(0x3fc,0x0b);text("Permafrost 1.1 C BIOS firmware\r\n");
 if(!read_sector(0,sector))goto failed;uint32_t partitions[4],lengths[4],count=0;disk_sectors=0;
 for(unsigned n=0;n<4;n++){uint32_t first=le32(sector+446+n*16+8),length=le32(sector+446+n*16+12);if(first+length>disk_sectors)disk_sectors=first+length;if(sector[446+n*16+4]==0x7f){partitions[count]=first;lengths[count++]=length;}}
 for(unsigned n=0;n<count;n++){struct file file;if(!open_kernel(partitions[n],&file))continue;uint32_t entry=load_kernel(&file);if(!entry)continue;handoff(partitions[n],lengths[n]);*(uint32_t *)(uintptr_t)(kernel_first+16)=(uintptr_t)context;__asm__ volatile("cli;movl $0x200000,%%esp;xorl %%ebp,%%ebp;jmp *%%eax"::"a"(entry):"memory");__builtin_unreachable();}
failed:text("No valid Permafrost kernel was found.\r\n");for(;;)__asm__ volatile("cli;hlt");
}
