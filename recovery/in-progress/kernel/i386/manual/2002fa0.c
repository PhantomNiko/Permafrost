/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

float recovered_2002fa0(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = 0.0;
  if ((right != 0.0) || (NAN(right))) {
    fVar1 = left - right * (float)(int)ROUND(left / right);
  }
  return fVar1;
}
