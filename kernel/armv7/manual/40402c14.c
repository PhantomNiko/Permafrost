/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_40402c14(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  dVar2 = (double)(((ulonglong)right & 0xffffffff00000000) + ((ulonglong)right & 0xffffffff));
  if (dVar2 == 0.0) {
    return 0.0;
  }
  dVar3 = (double)(((ulonglong)left & 0xffffffff00000000) + ((ulonglong)left & 0xffffffff));
  uVar1 = VectorFloatToSigned(dVar3 / dVar2,3);
  dVar4 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return dVar3 - dVar4 * dVar2;
}
