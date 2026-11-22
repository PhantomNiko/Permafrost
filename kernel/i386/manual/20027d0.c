/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_20027d0(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  double dVar3;
  uint uVar4;

  uVar1 = (uint)ROUND(right);
  dVar3 = 0.0;
  if ((((double)(int)uVar1 == right) && (!NAN((double)(int)uVar1) && !NAN(right))) &&
     (dVar3 = 1.0, uVar1 != 0)) {
    dVar3 = 1.0;
    uVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar4 & 1) != 0) {
        dVar3 = left * dVar3;
      }
      left = left * left;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      dVar3 = 1.0 / dVar3;
    }
  }
  return dVar3;
}
