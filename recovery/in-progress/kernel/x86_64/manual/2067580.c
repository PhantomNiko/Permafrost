/* Scalar native pixel conversion. Pooka's Free Software License. */
#include "functions.h"
#define DAT_02177a30 (*(char *)(uintptr_t)0x2177a30)
#define DAT_02177a38 (*(uint32_t *)(uintptr_t)0x2177a38)
#define PTR_str_020ecc8f_02106c30 (*(uintptr_t *)(uintptr_t)0x2106c30)
#define PTR_str_020ecc8f_02106c38 (*(uintptr_t *)(uintptr_t)0x2106c38)
#define str_020ecc8f (*(uintptr_t *)(uintptr_t)0x20ecc8f)
#define str_020ecc96 (*(uintptr_t *)(uintptr_t)0x20ecc96)
#define str_020ecc9f (*(uintptr_t *)(uintptr_t)0x20ecc9f)
#define str_020ecca7 (*(uintptr_t *)(uintptr_t)0x20ecca7)
#define str_020eccb8 (*(uintptr_t *)(uintptr_t)0x20eccb8)
#define str_020eccc7 (*(uintptr_t *)(uintptr_t)0x20eccc7)
#define str_020ecc8f ((char *)(uintptr_t)0x20ecc8f)
#define str_020ecc9f ((char *)(uintptr_t)0x20ecc9f)
#define PTR_str_020ecc8f_02106c38 (*(char **)(uintptr_t)0x2106c38)
#define PTR_str_020ecc8f_02106c30 (*(char **)(uintptr_t)0x2106c30)
#define str_020eccc7 ((char *)(uintptr_t)0x20eccc7)
#define str_020eccb8 ((char *)(uintptr_t)0x20eccb8)
#define str_020ecc96 ((char *)(uintptr_t)0x20ecc96)
#define str_020ecca7 ((char *)(uintptr_t)0x20ecca7)
void recovered_2067580(uint32_t *surface,uintptr_t destination,uintptr_t pitch) {
 uint32_t width=surface[0],height=surface[1];
 uintptr_t source=*(uintptr_t *)(surface+2);
 if(!height)return;
 if(width && source && destination) {
 uint32_t local_7c[9]={0};uint32_t local_5c=0;char *pcVar7;uint8_t bVar4;
         if (DAT_02177a30 == '\0') {
          recovered_2002110(local_7c,0,0x24);
          DAT_02177a38 = 0;
          PTR_str_020ecc8f_02106c30 = str_020ecc8f;
          PTR_str_020ecc8f_02106c38 = str_020ecc8f;
          bVar4 = recovered_2013850((undefined8 *)local_7c);
          if (bVar4 != 0) {
            DAT_02177a38 = local_7c[0];
            pcVar7 = str_020ecc96;
            if (((short)local_7c[0] < 0) || (pcVar7 = str_020ecc9f, 0xf < local_7c[8])) {
              PTR_str_020ecc8f_02106c30 = pcVar7;
            }
            pcVar7 = str_020ecca7;
            if ((((~local_7c[0] & 0x800080) == 0) ||
                (pcVar7 = str_020eccb8, (~local_7c[0] & 0x400040) == 0)) ||
               (pcVar7 = str_020eccc7, (local_7c[0] & 4) != 0)) {
              PTR_str_020ecc8f_02106c38 = pcVar7;
            }
          }
          DAT_02177a30 = '\x01';
        }

 for(uint32_t y=0;y<height;y++)for(uint32_t x=0;x<width;x++) {
  const uint8_t *in=(const uint8_t *)(source+((uintptr_t)y*width+x)*4);
  uint8_t *out=(uint8_t *)(destination+(uintptr_t)y*(uint32_t)pitch+(uintptr_t)x*4);
  out[0]=in[2];out[1]=in[1];out[2]=in[0];out[3]=0;
 }
 }
}
