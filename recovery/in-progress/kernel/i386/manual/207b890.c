/* Recovered TrueType contour and component decoding, with bounded recursion.
 * Pooka's Free Software License. */
#include "functions.h"
typedef struct { double x,y;unsigned char on; } pf_ttf_point110;
static uint16_t pf_ttf_u16_110(const unsigned char *p){return (uint16_t)((unsigned)p[0]<<8|p[1]);}
static int pf_ttf_i16_110(const unsigned char *p){return (int16_t)pf_ttf_u16_110(p);}
static void pf_ttf_transform110(double *out,const double *m,double x,double y){
 out[0]=m[0]*x+m[2]*y+m[4];out[1]=m[1]*x+m[3]*y+m[5];
}
static void pf_ttf_contour110(long *outline,pf_ttf_point110 *p,unsigned count,const double *matrix){
 if(!count)return;
 double start[2];unsigned first=0,remaining=count;
 if(p[0].on){start[0]=p[0].x;start[1]=p[0].y;first=1;remaining--;}
 else if(p[count-1].on){start[0]=p[count-1].x;start[1]=p[count-1].y;remaining--;}
 else{start[0]=(p[0].x+p[count-1].x)*0.5;start[1]=(p[0].y+p[count-1].y)*0.5;}
 double raw_start[2]={start[0],start[1]};pf_ttf_transform110(start,matrix,raw_start[0],raw_start[1]);
 recovered_207db00(outline,start);
 unsigned i=0;
 while(i<remaining){
  pf_ttf_point110 *point=p+(first+i)%count;double a[2];pf_ttf_transform110(a,matrix,point->x,point->y);
  if(point->on){recovered_207ddf0(outline,a);i++;continue;}
  double end[2];unsigned used=1;
  if(i+1==remaining){end[0]=start[0];end[1]=start[1];}
  else{
   pf_ttf_point110 *next=p+(first+i+1)%count;
   if(next->on){pf_ttf_transform110(end,matrix,next->x,next->y);used=2;}
   else{pf_ttf_transform110(end,matrix,(point->x+next->x)*0.5,(point->y+next->y)*0.5);}
  }
  double current[2]={((double *)(outline+8))[0],((double *)(outline+8))[1]};
  recovered_207e190(outline,current,a,end,0);i+=used;
 }
 recovered_207e000(outline);
}
uint recovered_207b890(void *backend,uint glyph,double *matrix,long *outline,uint depth){
 const unsigned char *object=backend,*data=*(const unsigned char *const *)(object+4);
 unsigned length=*(const uint32_t *)(object+8),glyphs=*(const uint16_t *)(object+0x7a);
 const uint32_t *locations=*(const uint32_t *const *)(object+0x80);
 unsigned location_count=*(const uint32_t *)(object+0x84);
 if(glyph>=glyphs || glyph+1>=location_count)return 0;
 unsigned begin=locations[glyph],end=locations[glyph+1],glyf=*(const uint32_t *)(object+0x40);
 if(end<begin || end>*(const uint32_t *)(object+0x44) || begin==end ||
    glyf>length || begin>length-glyf || length-glyf-begin<10)return 0;
 unsigned pos=glyf+begin;const unsigned char *header=data+pos;int contours=pf_ttf_i16_110(header);pos+=10;
 if(contours<0){
  if(depth>=12)return 0;
  unsigned result=0,flags;
  do{
   if(pos>length || length-pos<4)return result;
   flags=pf_ttf_u16_110(data+pos);unsigned component=pf_ttf_u16_110(data+pos+2);pos+=4;
   int dx,dy;
   if(flags&1){if(length-pos<4 || !(flags&2))return result;dx=pf_ttf_i16_110(data+pos);dy=pf_ttf_i16_110(data+pos+2);pos+=4;}
   else{if(length-pos<2 || !(flags&2))return result;dx=(signed char)data[pos];dy=(signed char)data[pos+1];pos+=2;}
   double xx=1,xy=0,yx=0,yy=1;
   if(flags&0x80){if(length-pos<8)return result;xx=pf_ttf_i16_110(data+pos)/16384.0;xy=pf_ttf_i16_110(data+pos+2)/16384.0;yx=pf_ttf_i16_110(data+pos+4)/16384.0;yy=pf_ttf_i16_110(data+pos+6)/16384.0;pos+=8;}
   else if(flags&0x40){if(length-pos<4)return result;xx=pf_ttf_i16_110(data+pos)/16384.0;yy=pf_ttf_i16_110(data+pos+2)/16384.0;pos+=4;}
   else if(flags&8){if(length-pos<2)return result;xx=yy=pf_ttf_i16_110(data+pos)/16384.0;pos+=2;}
   double child[6]={matrix[0]*xx+matrix[2]*xy,matrix[1]*xx+matrix[3]*xy,
                    matrix[0]*yx+matrix[2]*yy,matrix[1]*yx+matrix[3]*yy,
                    matrix[0]*dx+matrix[2]*dy+matrix[4],matrix[1]*dx+matrix[3]*dy+matrix[5]};
   result|=recovered_207b890(backend,component,child,outline,depth+1);
  }while(flags&0x20);
  return result;
 }
 if(!contours || (unsigned)contours>(length-pos)/2)return 0;
 const unsigned char *ends=data+pos;pos+=(unsigned)contours*2;
 if(length-pos<2)return 0;
 unsigned instructions=pf_ttf_u16_110(data+pos);pos+=2;if(instructions>length-pos)return 0;pos+=instructions;
 unsigned count=(unsigned)pf_ttf_u16_110(ends+(contours-1)*2)+1;
 unsigned char *flags=recovered_2069810(count);
 pf_ttf_point110 *points=recovered_2069810(count*sizeof(*points));
 unsigned decoded=0;int x=0,y=0;unsigned result=0;
 while(decoded<count){
  if(pos>=length)goto done;
  unsigned char flag=data[pos++];unsigned repeat=1;
  if(flag&8){if(pos>=length)goto done;repeat+=(unsigned)data[pos++];}
  if(repeat>count-decoded)goto done;
  while(repeat--)flags[decoded++]=flag;
 }
 for(unsigned i=0;i<count;i++){
  unsigned flag=flags[i];int delta=0;
  if(flag&2){if(pos>=length)goto done;delta=data[pos++];if(!(flag&0x10))delta=-delta;}
  else if(!(flag&0x10)){if(length-pos<2)goto done;delta=pf_ttf_i16_110(data+pos);pos+=2;}
  x+=delta;points[i].x=x;points[i].on=flag&1;
 }
 for(unsigned i=0;i<count;i++){
  unsigned flag=flags[i];int delta=0;
  if(flag&4){if(pos>=length)goto done;delta=data[pos++];if(!(flag&0x20))delta=-delta;}
  else if(!(flag&0x20)){if(length-pos<2)goto done;delta=pf_ttf_i16_110(data+pos);pos+=2;}
  y+=delta;points[i].y=y;
 }
 unsigned first=0;
 for(unsigned i=0;i<(unsigned)contours;i++){
  unsigned last=pf_ttf_u16_110(ends+i*2);if(last<first || last>=count)goto done;
  pf_ttf_contour110(outline,points+first,last-first+1,matrix);first=last+1;
 }
 result=1;
done:
 recovered_2069870((int)points);recovered_2069870((int)flags);return result;
}
