/* Native multiline font metrics and cache lifetime.
 * Pooka's Free Software License. */
#include "functions.h"
#include "manual/font110.h"
static int pf_font_round_metric110(void *backend,double value){
 return pf_font_mode110(backend)==1?(int)recovered_20049f0(value):(int)recovered_2003d20(value);
}
uint recovered_20856d0(long *font,byte *text,int *out){
 if(!out)return 0;
 for(unsigned i=0;i<8;i++)out[i]=0;
 if(!font || !text || !*font)return 0;
 void *backend=(void *)(uintptr_t)*font;
 double scale=(double)*(float *)(font+1)/pf_font_metric110(backend,0x20);
 out[3]=pf_font_round_metric110(backend,pf_font_metric110(backend,0x28)*scale);
 out[4]=pf_font_round_metric110(backend,pf_font_metric110(backend,0x30)*scale);
 int height=pf_font_round_metric110(backend,(pf_font_metric110(backend,0x28)+pf_font_metric110(backend,0x30)+pf_font_metric110(backend,0x38))*scale);
 out[5]=height>1?height:1;
 pf_glyph *x=recovered_2085e20(font,'x');out[6]=x->top>0?x->top:0;
 pf_u32_vector decoded={0},line={0};
 recovered_2086440((undefined8 *)&decoded,text);
 float *cache=recovered_2086bf0((long)font);
 recovered_2086d30((long *)(cache+6),*(unsigned long *)(cache+8)+decoded.count);
 bool first=true,valid=true;
 for(unsigned long i=0;i<=decoded.count;i++){
  uint character=i<decoded.count?decoded.data[i]:10;
  if(character==13)continue;
  if(character==10){
   pf_layout layout;recovered_2087e20(&layout,font,&line);
   if(out[0]<layout.right)out[0]=layout.right;
   if(layout.bottom>0x7fffffff-out[1])valid=false;
   else{
    out[1]+=layout.bottom;
    if(first){out[2]=layout.left;out[7]=layout.top;first=false;}
    line.count=0;
   }
   recovered_2072280(layout.data);
  }else{
   if(line.count==line.capacity){
    unsigned long capacity=line.capacity?line.capacity*2:4;
    uint *data=recovered_2072220(capacity*4);
    for(unsigned long j=0;j<line.count;j++)data[j]=line.data[j];
    recovered_2072280(line.data);line.data=data;line.capacity=capacity;
   }
   line.data[line.count++]=character;
  }
 }
 if(!*text)out[0]=out[1]=0;
 recovered_2086f20((long)font);
 if(!valid)for(unsigned i=0;i<8;i++)out[i]=0;
 recovered_2072280(line.data);recovered_2072280(decoded.data);
 return valid;
}
