/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

float recovered_20a0500(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  float fVar2;

  fVar2 = 0.0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if ((iVar1 - 5U < 2) || (iVar1 == 1)) {
      fVar2 = (float)param_1[1];
    }
    else if (iVar1 == 2) {
      return pf_bits_float((uint32_t)param_1[2]);
    }
  }
  return fVar2;
}
