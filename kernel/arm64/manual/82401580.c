/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

float recovered_82401580(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -value;
  if (0.0 <= value) {
    fVar1 = value;
  }
  return fVar1;
}
