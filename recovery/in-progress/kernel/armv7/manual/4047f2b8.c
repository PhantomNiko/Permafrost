/* Native multiline glyph coverage and RGBA text compositing.
 * Pooka's Free Software License. */
#include "functions.h"
static unsigned pf_ttf_channel110(int value){return value<0?0:value>255?255:(unsigned)value;}
void *recovered_4047f2b8(pf_font_handle110 *font,char *text,int red,int green,int blue,double opacity){
 if(!font || !font->backend || !text)return 0;
 uint32_t *bitmap;
 if(!*text){
  bitmap=recovered_4046df60(24);for(unsigned i=0;i<6;i++)bitmap[i]=0;
  uint32_t *pixels=recovered_4046df8c(4);*pixels=0;bitmap[2]=(uintptr_t)pixels;return bitmap;
 }
 pf_u32_vector decoded={0};recovered_4047e894((uint *)&decoded,(byte *)text);
 unsigned line_count=1;for(unsigned i=0;i<decoded.count;i++)if(decoded.data[i]==10)line_count++;
 pf_u32_vector *lines=recovered_4046df60(line_count*sizeof(*lines));
 uint *characters=recovered_4046df60((decoded.count?decoded.count:1)*sizeof(uint));
 unsigned used=0,first=0,line_index=0;
 for(unsigned i=0;i<=decoded.count;i++){
  uint character=i<decoded.count?decoded.data[i]:10;
  if(character==13)continue;
  if(character==10){lines[line_index++]=(pf_u32_vector){characters+first,used-first,used-first};first=used;}
  else characters[used++]=character;
 }
 pf_font_cache110 *cache=recovered_4047ee04(font);
 recovered_4047ef58((int *)&cache->entries,cache->count+decoded.count);
 pf_layout *layouts=recovered_4046df60(line_count*sizeof(*layouts));
 unsigned width=1,height=0,laid_out=0;
 for(unsigned i=0;i<line_count;i++){
  recovered_4047fec0(layouts+i,font,lines+i);laid_out++;
  if(layouts[i].right>0 && width<(unsigned)layouts[i].right)width=layouts[i].right;
  if(layouts[i].bottom<0 || (unsigned)layouts[i].bottom>0x7fffffffU-height)goto invalid;
  height+=(unsigned)layouts[i].bottom;
 }
 if(!height)height=1;
 if(width>0x7fffffffU || height>0x7fffffffU || width>0x3fffffffU/height)goto invalid;
 unsigned length=width*height;unsigned char *coverage=recovered_4046df60(length);
 for(unsigned i=0;i<length;i++)coverage[i]=0;
 unsigned top=0;
 for(unsigned line=0;line<line_count;line++){
  pf_layout *layout=layouts+line;
  for(unsigned i=0;i<layout->count;i++){
   pf_glyph_position *position=layout->data+i;pf_glyph *glyph=position->glyph;
   if(!glyph || glyph->width<1 || glyph->height<1)continue;
   for(int y=0;y<glyph->height;y++){
    int target_y=position->y+y+(int)top;if(target_y<0 || (unsigned)target_y>=height)continue;
    for(int x=0;x<glyph->width;x++){
     int target_x=position->x+x;if(target_x<0 || (unsigned)target_x>=width)continue;
     unsigned mask=glyph->pixels[(unsigned)y*(unsigned)glyph->width+(unsigned)x];
     unsigned char *out=coverage+(unsigned)target_y*width+(unsigned)target_x;
     if(mask)*out=(unsigned char)(mask+(255-mask)*(unsigned)*out/255);
    }
   }
  }
  top+=(unsigned)layout->bottom;
 }
 uint64_t bits=pf_double_bits(opacity);int alpha=(int)recovered_40404144((uint32_t)bits,(uint32_t)(bits>>32));
 unsigned a=pf_ttf_channel110(alpha),r=pf_ttf_channel110(red),g=pf_ttf_channel110(green),b=pf_ttf_channel110(blue);
 unsigned char *pixels=recovered_4046df8c(length*4);
 for(unsigned i=0;i<length;i++){pixels[i*4]=r;pixels[i*4+1]=g;pixels[i*4+2]=b;pixels[i*4+3]=coverage[i]*a/255;}
 recovered_4046dfb8((int)coverage);recovered_4047f0f8((int)font);
 bitmap=recovered_4046df60(24);for(unsigned i=0;i<6;i++)bitmap[i]=0;
 bitmap[0]=width;bitmap[1]=height;bitmap[2]=(uintptr_t)pixels;
 for(unsigned i=0;i<line_count;i++)recovered_4046dfb8((int)layouts[i].data);
 recovered_4046dfb8((int)layouts);recovered_4046dfb8((int)lines);recovered_4046dfb8((int)characters);recovered_4046dfb8((int)decoded.data);
 return bitmap;
invalid:
 for(unsigned i=0;i<laid_out;i++)recovered_4046dfb8((int)layouts[i].data);
 recovered_4046dfb8((int)layouts);recovered_4046dfb8((int)lines);recovered_4046dfb8((int)characters);recovered_4046dfb8((int)decoded.data);return 0;
}
