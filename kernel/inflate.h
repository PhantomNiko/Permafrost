/* Recovered zlib/DEFLATE semantics: stored/fixed/dynamic blocks, canonical
 * Huffman tables, overlapping matches, exact payload end and Adler-32.
 * Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>
struct pf_inflate_bits {const uint8_t *data;uintptr_t size,position;uint32_t value;unsigned count;};
struct pf_inflate_huffman {uint16_t count[16],symbol[288];unsigned maximum;};
static int pf_inflate_read(struct pf_inflate_bits *s,unsigned count,uint32_t *out){
 while(s->count<count){if(s->position==s->size)return 0;s->value|=(uint32_t)s->data[s->position++]<<s->count;s->count+=8;}
 *out=s->value&((1U<<count)-1);s->value>>=count;s->count-=count;return 1;
}
static int pf_inflate_table(struct pf_inflate_huffman *t,const uint8_t *length,unsigned count,int empty){
 for(unsigned i=0;i<16;i++)t->count[i]=0;t->maximum=0;
 for(unsigned i=0;i<count;i++){unsigned bits=length[i];if(bits>15)return 0;t->count[bits]++;if(bits>t->maximum)t->maximum=bits;}
 if(t->count[0]==count)return empty;
 int left=1;for(unsigned i=1;i<16;i++){left=left*2-t->count[i];if(left<0)return 0;}
 unsigned offset[16];offset[0]=offset[1]=0;for(unsigned i=2;i<16;i++)offset[i]=offset[i-1]+t->count[i-1];
 for(unsigned i=0;i<count;i++)if(length[i])t->symbol[offset[length[i]]++]=(uint16_t)i;return 1;
}
static int pf_inflate_symbol(struct pf_inflate_bits *s,const struct pf_inflate_huffman *t,unsigned *out){
 unsigned code=0,first=0,index=0;for(unsigned length=1;length<=t->maximum;length++){
  uint32_t bit;if(!pf_inflate_read(s,1,&bit))return 0;code|=bit;unsigned count=t->count[length];
  if(code<first+count){*out=t->symbol[index+code-first];return 1;}index+=count;first=(first+count)<<1;code<<=1;
 }return 0;
}
static int pf_inflate_reserve(uintptr_t *v,uintptr_t count){
 if(count<=v[2])return 1;uintptr_t capacity=v[2]?v[2]:4;
 while(capacity<count){if(capacity>UINTPTR_MAX/2){capacity=count;break;}capacity*=2;}
 uint8_t *p=PF_INFLATE_MALLOC(capacity);if(!p)return 0;
 for(uintptr_t i=0;i<v[1];i++)p[i]=((const uint8_t *)v[0])[i];PF_INFLATE_FREE((void *)v[0]);v[0]=(uintptr_t)p;v[2]=capacity;return 1;
}
static int pf_inflate_byte(uintptr_t *v,uintptr_t limit,uint8_t value){
 if(v[1]>=limit || v[1]==UINTPTR_MAX || !pf_inflate_reserve(v,v[1]+1))return 0;((uint8_t *)v[0])[v[1]++]=value;return 1;
}
static int pf_inflate_block(struct pf_inflate_bits *s,const struct pf_inflate_huffman *lit,const struct pf_inflate_huffman *dist,uintptr_t *v,uintptr_t limit){
 static const uint16_t lengths[29]={3,4,5,6,7,8,9,10,11,13,15,17,19,23,27,31,35,43,51,59,67,83,99,115,131,163,195,227,258};
 static const uint8_t length_bits[29]={0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,0};
 static const uint16_t distances[30]={1,2,3,4,5,7,9,13,17,25,33,49,65,97,129,193,257,385,513,769,1025,1537,2049,3073,4097,6145,8193,12289,16385,24577};
 static const uint8_t distance_bits[30]={0,0,0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13};
 for(;;){unsigned symbol;if(!pf_inflate_symbol(s,lit,&symbol))return 0;
  if(symbol<256){if(!pf_inflate_byte(v,limit,(uint8_t)symbol))return 0;continue;}
  if(symbol==256)return 1;if(symbol>285)return 0;symbol-=257;
  uint32_t extra;if(!pf_inflate_read(s,length_bits[symbol],&extra))return 0;unsigned length=lengths[symbol]+extra;
  if(!pf_inflate_symbol(s,dist,&symbol)||symbol>=30||!pf_inflate_read(s,distance_bits[symbol],&extra))return 0;
  unsigned distance=distances[symbol]+extra;if(distance>v[1]||v[1]>limit||length>limit-v[1])return 0;
  for(unsigned i=0;i<length;i++){uint8_t value=((uint8_t *)v[0])[v[1]-distance];if(!pf_inflate_byte(v,limit,value))return 0;}
 }
}
static int pf_inflate_zlib(const uintptr_t *input,uintptr_t *output,uintptr_t limit){
 output[1]=0;const uint8_t *data=(const uint8_t *)input[0];uintptr_t size=input[1];
 if(size<6 || (data[0]&15)!=8 || (((unsigned)data[0]<<8)|data[1])%31 || (data[1]&32))return 0;
 struct pf_inflate_bits s={data+2,size-6,0,0,0};struct pf_inflate_huffman lit,dist,code;
 unsigned final=0;while(!final){uint32_t value,type;if(!pf_inflate_read(&s,1,&value))return 0;final=value;
  if(!pf_inflate_read(&s,2,&type)||type==3)return 0;
  if(type==0){unsigned discard=s.count&7;s.value>>=discard;s.count-=discard;uint32_t length,inverse;
   if(!pf_inflate_read(&s,16,&length)||!pf_inflate_read(&s,16,&inverse)||(length^inverse)!=65535)return 0;
   for(unsigned i=0;i<length;i++){if(!pf_inflate_read(&s,8,&value)||!pf_inflate_byte(output,limit,(uint8_t)value))return 0;}continue;
  }
  uint8_t a[320],b[32];if(type==1){
   for(unsigned i=0;i<288;i++)a[i]=i<144?8:i<256?9:i<280?7:8;for(unsigned i=0;i<32;i++)b[i]=5;
   if(!pf_inflate_table(&lit,a,288,0)||!pf_inflate_table(&dist,b,32,0))return 0;
  }else{
   uint32_t nl,nd,nc;if(!pf_inflate_read(&s,5,&nl)||!pf_inflate_read(&s,5,&nd)||!pf_inflate_read(&s,4,&nc))return 0;nl+=257;nd++;nc+=4;
   static const uint8_t order[19]={16,17,18,0,8,7,9,6,10,5,11,4,12,3,13,2,14,1,15};uint8_t c[19]={0};
   for(unsigned i=0;i<nc;i++){if(!pf_inflate_read(&s,3,&value))return 0;c[order[i]]=(uint8_t)value;}
   if(!pf_inflate_table(&code,c,19,0))return 0;
   unsigned used=0;while(used<nl+nd){unsigned symbol;if(!pf_inflate_symbol(&s,&code,&symbol))return 0;
    if(symbol<16){a[used++]=(uint8_t)symbol;continue;}
    unsigned count,repeat;if(symbol==16){if(!used||!pf_inflate_read(&s,2,&value))return 0;count=value+3;repeat=a[used-1];}
    else if(symbol==17){if(!pf_inflate_read(&s,3,&value))return 0;count=value+3;repeat=0;}
    else if(symbol==18){if(!pf_inflate_read(&s,7,&value))return 0;count=value+11;repeat=0;}else return 0;
    /* The native stream parser clips repeats to the declared length total. */
    while(count-- && used<nl+nd)a[used++]=(uint8_t)repeat;
   }
   if(!pf_inflate_table(&lit,a,nl,0)||!pf_inflate_table(&dist,a+nl,nd,1))return 0;
  }
  if(!pf_inflate_block(&s,&lit,&dist,output,limit))return 0;
 }
 unsigned discard=s.count&7;s.value>>=discard;s.count-=discard;if(s.position!=s.size||s.count)return 0;
 uint32_t adler_a=1,adler_b=0;for(uintptr_t i=0;i<output[1];i++){adler_a=(adler_a+((const uint8_t *)output[0])[i])%65521;adler_b=(adler_b+adler_a)%65521;}
 uint32_t expected=(uint32_t)data[size-4]<<24|(uint32_t)data[size-3]<<16|(uint32_t)data[size-2]<<8|data[size-1];
 return expected==(adler_b<<16|adler_a);
}
