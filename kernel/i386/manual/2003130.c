/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

float recovered_2003130(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  float fVar3;
  uint uVar4;

  uVar1 = (uint)ROUND(right);
  fVar3 = 0.0;
  if ((((float)(int)uVar1 == right) && (!NAN((float)(int)uVar1) && !NAN(right))) &&
     (fVar3 = 1.0, uVar1 != 0)) {
    fVar3 = 1.0;
    uVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar4 & 1) != 0) {
        fVar3 = fVar3 * left;
      }
      left = left * left;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      fVar3 = 1.0 / fVar3;
    }
  }
  return fVar3;
}
