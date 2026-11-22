/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20ac3d0(void *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;

  if (incoming_ecx != (void *)0x0) {
    recovered_2001e00(incoming_ecx,0,0xc);
    if (incoming_edx != (char *)0x0) {
      size = recovered_2002270(incoming_edx);
      if (0xb < size) {
        size = 0xc;
      }
      recovered_2001b70(incoming_ecx,incoming_edx,size);
    }
  }
  return;
}
