/* WMFS and Mach-O loading for the Permafrost BIOS boot chain.
 * Pooka's Free Software License. */
#include "bios.h"
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
struct file {uint32_t partition,cluster_sectors,fat,data,first,size;};
static int same(const uint8_t *a,const char *b) {
 for(unsigned i=0;i<240;++i) {
  unsigned x=a[i],y=(uint8_t)b[i];if(x>='A'&&x<='Z')x+=32;if(y>='A'&&y<='Z')y+=32;
  if(x!=y)return 0;if(!x)return 1;
 }
 return 0;
}
static int open_kernel(uint32_t partition,struct file *f) {
 if(!read_sector(partition,sector))return 0;
 if(le32(sector)!=0x53464d57 || le32(sector+4)!=0x3233 || le32(sector+8)!=1 || le32(sector+12)!=512)return 0;
 f->partition=partition;f->cluster_sectors=le32(sector+16);f->fat=le32(sector+20);f->data=le32(sector+36);
 uint32_t root=le32(sector+28),count=le32(sector+32);
 if(!f->cluster_sectors || f->cluster_sectors>128 || count>4096)return 0;
 for(uint32_t i=0;i<count;++i) {
  if(!read_sector(partition+root+i,directory))return 0;
  for(unsigned slot=0;slot<2;++slot) {
   const uint8_t *entry=directory+slot*256;
   if(same(entry,"Permafrost")) {f->first=le32(entry+240);f->size=le32(entry+244);return f->size>=28;}
  }
 }
 return 0;
}
static int read_file(const struct file *f,uint32_t offset,void *out,uint32_t length) {
 if(offset>f->size || length>f->size-offset)return 0;
 uint32_t cluster=f->first,cluster_bytes=f->cluster_sectors*512;
 uint32_t skip=offset/cluster_bytes;offset%=cluster_bytes;
 for(uint32_t i=0;i<skip;++i) {
  if(cluster<2 || cluster>=0xfffffff0 || !read_sector(f->partition+f->fat+cluster/128,sector))return 0;
  cluster=le32(sector+(cluster%128)*4);
 }
 while(length) {
  if(cluster<2 || cluster>=0xfffffff0)return 0;
  uint32_t disk=f->partition+f->data+(cluster-2)*f->cluster_sectors+offset/512;
  if(!read_sector(disk,sector))return 0;
  uint32_t n=512-(offset&511);if(n>length)n=length;
  copy(out,sector+(offset&511),n);out=(uint8_t *)out+n;length-=n;offset+=n;
  if(offset==cluster_bytes && length) {
   if(!read_sector(f->partition+f->fat+cluster/128,sector))return 0;
   cluster=le32(sector+(cluster%128)*4);offset=0;
  }
 }
 return 1;
}
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
void pf_firmware_main(void) {
 drive=*(uint8_t *)0x6068;
 port(0x3f9,0);port(0x3fb,0x80);port(0x3f8,1);port(0x3f9,0);port(0x3fb,3);port(0x3fa,0xc7);port(0x3fc,0x0b);
 text("Permafrost 0.9 firmware\r\n");memory_map();
 uint32_t candidates[14],count=0;
 if(read_sector(65,sector) && le32(sector)==0x54504257) {
  unsigned n=sector[6]|(unsigned)sector[7]<<8;if(n>14)n=14;
  for(unsigned i=0;i<n;++i)if(le32(sector+32+i*32)==1)candidates[count++]=le32(sector+36+i*32);
 } else candidates[count++]=65;
 for(unsigned i=0;i<count;++i) {
  struct file f;
  if(!open_kernel(candidates[i],&f))continue;
  uint32_t entry=load_kernel(&f);
  if(entry) {
   memory_map();
   *(uint32_t *)0x6118=candidates[i];*(uint32_t *)0x611c=0;*(uint32_t *)0x6120=0;
   *(uint32_t *)(uintptr_t)(kernel_first+16)=0;text("Starting Permafrost.\r\n");
   __asm__ volatile("cli; movl $0x200000,%%esp; xorl %%ebp,%%ebp; jmp *%%eax"::"a"(entry):"memory");
   __builtin_unreachable();
  }
 }
 text("Permafrost could not load a valid kernel.\r\n");
 for(;;)__asm__ volatile("cli;hlt");
}
