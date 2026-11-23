/* Native text layout: font metrics, cached glyphs, placement and clipped bounds.
 * Pooka's Free Software License. */
#include "functions.h"
#include "manual/font110.h"
pf_layout *recovered_82443658(pf_layout *out,void *font,pf_u32_vector *text){
 out->left=out->top=0;out->right=out->bottom=1;out->data=0;out->count=out->capacity=0;
 if(!font || !*(void **)font)return out;
 void *backend=*(void **)font;
 double scale=*(float *)((unsigned char *)font+8)/pf_font_metric110(backend,0x20);
 double ascent=pf_font_metric110(backend,0x28);
 int baseline=pf_font_mode110(backend)==1?(int)recovered_82401bc8(ascent*scale):(int)recovered_82401784(ascent*scale);
 if(baseline<1)baseline=1;
 ascent=pf_font_metric110(backend,0x28);
 double descent=pf_font_metric110(backend,0x30),gap=pf_font_metric110(backend,0x38);
 int height=pf_font_mode110(backend)==1?(int)recovered_82401bc8((ascent+descent+gap)*scale):(int)recovered_82401784((ascent+descent+gap)*scale);
 if(height<1)height=1;
 double cursor=0;int min_x=0,min_y=0,max_x=0,max_y=0;bool ink=false;
 for(unsigned long i=0;i<text->count;i++){
  pf_glyph *glyph=recovered_82442c08(font,text->data[i]);
  int x=(int)recovered_82401768(cursor)+glyph->left,y=baseline-glyph->top;
  if(out->count==out->capacity){
   unsigned long capacity=out->capacity?out->capacity*2:4;
   pf_glyph_position *positions=recovered_8243b1bc(capacity*sizeof(*positions));
   for(unsigned long j=0;j<out->count;j++)positions[j]=out->data[j];
   recovered_8243b1f0(out->data);out->data=positions;out->capacity=capacity;
  }
  out->data[out->count++]=(pf_glyph_position){glyph,x,y};
  if(glyph->width>0 && glyph->height>0){
   if(!ink){min_x=x;min_y=y;max_x=x+glyph->width;max_y=y+glyph->height;ink=true;}
   else{if(x<min_x)min_x=x;if(y<min_y)min_y=y;if(x+glyph->width>max_x)max_x=x+glyph->width;if(y+glyph->height>max_y)max_y=y+glyph->height;}
  }
  cursor+=glyph->advance;
 }
 int width=(int)recovered_82401784(cursor);if(width<1)width=1;
 int shift_x=min_x<0?-min_x:0,shift_y=min_y<0?-min_y:0;
 out->right=(max_x>width?max_x:width)+shift_x;
 out->bottom=(max_y>height?max_y:height)+shift_y;
 out->left=baseline+shift_y;out->top=shift_x;
 for(unsigned long i=0;i<out->count;i++){out->data[i].x+=shift_x;out->data[i].y+=shift_y;}
 return out;
}
