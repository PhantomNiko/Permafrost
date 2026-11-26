/* Native 1.1 font metrics over the recovered font-backend ABI.
 * Pooka's Free Software License. */
#pragma once
#include <stdint.h>
#include <stddef.h>
extern double ceil(double),floor(double);
extern long lround(double);
extern void free(void *);
static double pf_ttf_metric_value110(void *backend,unsigned slot){
 uintptr_t table=*(uintptr_t *)backend;
#if defined(__i386__)
 /* This portable IA32 backend retains its reviewed ARM32 word-pair results. */
 return pf_bits_double(((uint64_t (*)(void *))((uintptr_t *)table)[slot])(backend));
#else
 return ((double (*)(void *))((uintptr_t *)table)[slot])(backend);
#endif
}
static int pf_ttf_metric_round110(void *backend,double value){
 uintptr_t table=*(uintptr_t *)backend;
 int mode=((int (*)(void *))((uintptr_t *)table)[8])(backend);
 return mode==1?(int)lround(value):(int)ceil(value);
}
static void pf_ttf_metric_glyph110(void *backend,uint32_t code,double scale,pf_glyph *out){
 uintptr_t table=*(uintptr_t *)backend;
 __builtin_memset(out,0,sizeof(*out));
 ((void (*)(pf_glyph *,void *,uint32_t,double))((uintptr_t *)table)[3])(out,backend,code,scale);
}
static uint32_t pf_ttf_metric_decode110(const unsigned char **cursor){
 const unsigned char *p=*cursor;uint32_t code=*p++;unsigned tail=0;
 if(code>=0xc0&&code<0xe0){code&=31;tail=1;}
 else if(code>=0xe0&&code<0xf0){code&=15;tail=2;}
 else if(code>=0xf0&&code<0xf8){code&=7;tail=3;}
 for(unsigned i=0;i<tail;i++)if((p[i]&0xc0)!=0x80){
  uint32_t original=**cursor;*cursor=*cursor+1;return original;
 }
 for(unsigned i=0;i<tail;i++)code=(code<<6)|(*p++&63);
 *cursor=p;return code;
}
uint32_t pf_ttf_metrics110(void *font,const char *text,int32_t *out){
 if(!out)return 0;
 for(unsigned i=0;i<8;i++)out[i]=0;
 if(!font||!text||!*(void **)font)return 0;
 void *backend=*(void **)font;
 double scale=*(float *)((unsigned char *)font+sizeof(void *))/pf_ttf_metric_value110(backend,4);
 double ascent=pf_ttf_metric_value110(backend,5),descent=pf_ttf_metric_value110(backend,6),gap=pf_ttf_metric_value110(backend,7);
 out[3]=pf_ttf_metric_round110(backend,ascent*scale);
 out[4]=pf_ttf_metric_round110(backend,descent*scale);
 int baseline=out[3];if(baseline<1)baseline=1;
 int line_height=pf_ttf_metric_round110(backend,(ascent+descent+gap)*scale);if(line_height<1)line_height=1;
 out[5]=line_height;
 pf_glyph glyph;pf_ttf_metric_glyph110(backend,'x',scale,&glyph);
 out[6]=glyph.top>0?glyph.top:0;free(glyph.pixels);
 const unsigned char *cursor=(const unsigned char *)text;
 double advance=0;int min_x=0,min_y=0,max_x=0,max_y=0;int ink=0,first=1,valid=1;
 for(;;){
  int final=*cursor==0;
  uint32_t code=final?10:pf_ttf_metric_decode110(&cursor);
  if(code==13)continue;
  if(code==10){
   int width=(int)ceil(advance);if(width<1)width=1;
   int shift_x=min_x<0?-min_x:0,shift_y=min_y<0?-min_y:0;
   width=(max_x>width?max_x:width)+shift_x;
   int height=(max_y>line_height?max_y:line_height)+shift_y;
   if(out[0]<width)out[0]=width;
   if(height>0x7fffffff-out[1])valid=0;
   else{out[1]+=height;if(first){out[2]=baseline+shift_y;out[7]=shift_x;first=0;}}
   if(final)break;
   advance=0;min_x=min_y=max_x=max_y=ink=0;
  }else{
   pf_ttf_metric_glyph110(backend,code,scale,&glyph);
   int x=(int)floor(advance)+glyph.left,y=baseline-glyph.top;
   if(glyph.width>0&&glyph.height>0){
    if(!ink){min_x=x;min_y=y;max_x=x+glyph.width;max_y=y+glyph.height;ink=1;}
    else{if(x<min_x)min_x=x;if(y<min_y)min_y=y;if(x+glyph.width>max_x)max_x=x+glyph.width;if(y+glyph.height>max_y)max_y=y+glyph.height;}
   }
   advance+=glyph.advance;free(glyph.pixels);
  }
 }
 if(!*text)out[0]=out[1]=0;
 if(!valid)for(unsigned i=0;i<8;i++)out[i]=0;
 return valid;
}
