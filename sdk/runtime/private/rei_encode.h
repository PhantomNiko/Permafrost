/* Native REI single-layer stream layout. Pooka's Free Software License. */
#ifndef PF_REI_ENCODE_H
#define PF_REI_ENCODE_H
#include <stdint.h>
static void pf_rei_le32(uint8_t *out,uint32_t value){for(unsigned i=0;i<4;i++)out[i]=(uint8_t)(value>>(8*i));}
static int pf_rei_write_rgba(const char *name,const uint8_t *pixels,int width,int height,
 void *(*allocate)(uint32_t),void (*release)(void *),int (*write_file)(const char *,const void *,uint32_t)){
 if(!name||!pixels||width<=0||height<=0)return 0;
 uint64_t count=(uint64_t)(uint32_t)width*(uint32_t)height*4;
 if(count>UINT32_MAX-48)return 0;
 uint8_t *file=allocate((uint32_t)count+48);if(!file)return 0;
 for(unsigned i=0;i<48;i++)file[i]=0;
 const uint8_t signature[8]={'R','E','I','I','M','G',0,1};
 for(unsigned i=0;i<8;i++)file[i]=signature[i];
 pf_rei_le32(file+8,width);pf_rei_le32(file+12,height);pf_rei_le32(file+16,1);pf_rei_le32(file+20,1);
 pf_rei_le32(file+32,width);pf_rei_le32(file+36,height);file[40]=255;
 for(uint32_t i=0;i<(uint32_t)count;i++)file[48+i]=pixels[i];
 int result=write_file(name,file,(uint32_t)count+48)!=0;release(file);return result;
}
#endif
