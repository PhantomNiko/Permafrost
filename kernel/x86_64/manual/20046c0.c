/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_020a1560 (*(uint *)(0x20eaf40U))
float recovered_20046c0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = (float)(_DAT_020a1560 ^ (uint)value);
  if ((float)(_DAT_020a1560 ^ (uint)value) <= value) {
    fVar1 = value;
  }
  return fVar1;
}
