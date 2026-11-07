/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_2002e80(ulonglong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;

  dVar1 = 0.0;
  if (param_1 != 0) {
    dVar1 = 0.0;
    dVar2 = 1.0;
    do {
      iVar3 = (int)(param_1 >> 0x20);
      uVar4 = (uint)param_1;
      if ((param_1 & 1) != 0) {
        dVar1 = dVar1 + dVar2;
      }
      param_1 = param_1 >> 1;
      dVar2 = dVar2 + dVar2;
    } while (iVar3 != 0 || (uint)-iVar3 < (uint)(1 < uVar4));
  }
  return dVar1;
}
