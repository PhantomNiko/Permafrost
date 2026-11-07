/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1468 (*(double *)(0x20eae48U))
#define DAT_020a1570 (*(float *)(0x20eaf50U))
float recovered_20041d0(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;

  if (((float)(int)right != right) || (NAN((float)(int)right) || NAN(right))) {
    return 0.0;
  }
  uVar2 = (uint)right;
  if (uVar2 == 0) {
    return DAT_020a1570;
  }
  dVar5 = (double)left;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_020a1468;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_020a1468 / dVar4;
  }
  return (float)dVar4;
}
