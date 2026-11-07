/* Scalar equivalent of the native SIMD and tail pixel conversions.
 * Pooka's Free Software License. */
#include "functions.h"
void recovered_204b7e0(uint32_t *surface,uint32_t *framebuffer,int pitch){
 uint32_t width=surface[0],height=surface[1];
 uint8_t *source=(uint8_t *)(uintptr_t)surface[2];
 uint8_t *destination=(uint8_t *)framebuffer;
 for(uint32_t y=0;y<height;++y){
  if(width && source && destination){
   for(uint32_t x=0;x<width;++x){
    destination[x*4]=source[x*4+2];
    destination[x*4+1]=source[x*4+1];
    destination[x*4+2]=source[x*4];
    destination[x*4+3]=0;
   }
  }
  if(source)source+=width*4;
  destination=(uint8_t *)((uintptr_t)destination+(uintptr_t)pitch);
 }
}
