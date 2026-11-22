/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

float recovered_2003300(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(value);
  fVar2 = (float)((int)ROUND(value) + -1);
  if (fVar1 <= value) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 + 1.0;
  if (value <= fVar2) {
    fVar1 = fVar2;
  }
  if (0.0 <= value) {
    fVar1 = fVar2;
  }
  return fVar1;
}
