/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

float recovered_207e0c0(int *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  float fVar2;

  fVar2 = 0.0;
  if (incoming_ecx != (int *)0x0) {
    iVar1 = *incoming_ecx;
    if ((iVar1 - 5U < 2) || (iVar1 == 1)) {
      fVar2 = (float)incoming_ecx[1];
    }
    else if (iVar1 == 2) {
      return pf_bits_float((uint32_t)incoming_ecx[2]);
    }
  }
  return fVar2;
}
