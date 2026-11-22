/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1468 (*(double *)(0x20eae48U))
double recovered_20037c0(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;

  dVar4 = 0.0;
  if (((double)(int)right == right) && (!NAN((double)(int)right) && !NAN(right))) {
    uVar2 = (uint)right;
    if (uVar2 == 0) {
      return DAT_020a1468;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_020a1468;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * left;
      }
      left = left * left;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_020a1468 / dVar4;
    }
  }
  return dVar4;
}
