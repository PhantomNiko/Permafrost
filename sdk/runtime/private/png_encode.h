/* Recovered PNG writer: RGBA rows, stored DEFLATE blocks and PNG checksums.
 * Pooka's Free Software License. */
#ifndef PF_PNG_ENCODE_H
#define PF_PNG_ENCODE_H
#include <stdint.h>
#include <stddef.h>
static void pf_png_be32(uint8_t *p,uint32_t value){
    p[0]=value>>24;p[1]=value>>16;p[2]=value>>8;p[3]=value;
}
static uint32_t pf_png_crc(const uint8_t *p,uint32_t count){
    uint32_t crc=UINT32_MAX;
    while(count--){crc^=*p++;for(unsigned i=0;i<8;i++)crc=(crc>>1)^(0xedb88320U&(0u-(crc&1)));}
    return ~crc;
}
static int pf_png_write_rgba(const char *name,const uint8_t *pixels,int width,int height,
                            void *(*allocate)(uint32_t),void (*release)(void *),
                            int (*write_file)(const char *,const void *,uint32_t)){
    if(!name||!pixels||width<=0||height<=0||!allocate||!release||!write_file)return 0;
    uint64_t stride=(uint64_t)(uint32_t)width*4;
    uint64_t raw=(stride+1)*(uint32_t)height;
    if(raw>UINT32_MAX)return 0;
    uint64_t compressed=raw+5*((raw+65534)/65535)+6,total=compressed+57;
    if(total>UINT32_MAX)return 0;
    uint8_t *file=allocate((uint32_t)total);if(!file)return 0;
    static const uint8_t signature[8]={137,80,78,71,13,10,26,10};
    for(unsigned i=0;i<8;i++)file[i]=signature[i];
    pf_png_be32(file+8,13);file[12]='I';file[13]='H';file[14]='D';file[15]='R';
    pf_png_be32(file+16,width);pf_png_be32(file+20,height);
    file[24]=8;file[25]=6;file[26]=file[27]=file[28]=0;
    pf_png_be32(file+29,pf_png_crc(file+12,17));
    pf_png_be32(file+33,(uint32_t)compressed);
    file[37]='I';file[38]='D';file[39]='A';file[40]='T';
    uint8_t *out=file+41;*out++=0x78;*out++=1;
    uint32_t a=1,b=0;uint64_t offset=0;
    while(offset<raw){
        uint32_t block=raw-offset>65535?65535:(uint32_t)(raw-offset);
        *out++=offset+block==raw;*out++=(uint8_t)block;*out++=(uint8_t)(block>>8);
        uint16_t inverse=(uint16_t)~block;*out++=(uint8_t)inverse;*out++=(uint8_t)(inverse>>8);
        for(uint32_t i=0;i<block;i++,offset++){
            uint64_t column=offset%(stride+1),row=offset/(stride+1);
            uint8_t value=column?pixels[row*stride+column-1]:0;
            *out++=value;a=(a+value)%65521;b=(b+a)%65521;
        }
    }
    pf_png_be32(out,(b<<16)|a);out+=4;
    pf_png_be32(out,pf_png_crc(file+37,(uint32_t)compressed+4));out+=4;
    pf_png_be32(out,0);out[4]='I';out[5]='E';out[6]='N';out[7]='D';
    pf_png_be32(out+8,pf_png_crc(out+4,4));
    int result=write_file(name,file,(uint32_t)total)!=0;release(file);return result;
}
#endif
