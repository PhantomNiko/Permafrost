/* Native 4 by 4 nonzero-winding TrueType rasterizer.
 * Pooka's Free Software License. */
#include "functions.h"
static int pf_font_winding110(const double *segments,unsigned long count,double x,double y){
 int winding=0;
 for(unsigned long i=0;i<count;i++){
  const double *edge=segments+4*i;
  double y0=edge[1],y1=edge[3];int direction=0;
  if(y0<=y && y<y1)direction=1;
  else if(y<y0 && y1<=y)direction=-1;
  if(direction && (edge[2]-edge[0])*(y-y0)/(y1-y0)+edge[0]>x)winding+=direction;
 }
 return winding;
}
pf_glyph *recovered_82445338(pf_glyph *destination,long *outline,double advance){
 pf_glyph *out=(pf_glyph *)destination;
 *out=(pf_glyph){0};out->advance=advance;
 unsigned long count=(unsigned long)outline[1];
 if(!count || ((unsigned char *)outline)[25]!=1)return out;
 const double *bounds=(const double *)(outline+8);
 int min_x=(int)recovered_82401768(bounds[0]),max_x=(int)recovered_82401784(bounds[1]);
 int min_y=(int)recovered_82401768(bounds[2]),max_y=(int)recovered_82401784(bounds[3]);
 int width=max_x-min_x+2,height=max_y-min_y+2;
 if(width<1 || height<1)return out;
 out->left=min_x-1;out->top=max_y+1;out->width=width;out->height=height;
 unsigned long length=(unsigned long)(unsigned)width*(unsigned)height;
 unsigned char *pixels=recovered_8243b1bc(length);
 out->pixels=pixels;out->count=out->capacity=length;
 const double *segments=(const double *)(uintptr_t)outline[0];
 for(int row=0;row<height;row++)for(int column=0;column<width;column++){
  int coverage=0;
  for(int sy=0;sy<4;sy++){
   double y=(double)out->top-row-0.125-sy*0.25;
   double x=(double)out->left+column+0.125;
   for(int sx=0;sx<4;sx++)if(pf_font_winding110(segments,count,x+sx*0.25,y))coverage++;
  }
  pixels[(unsigned long)row*(unsigned)width+(unsigned)column]=(unsigned char)(coverage*255/16);
 }
 return out;
}
