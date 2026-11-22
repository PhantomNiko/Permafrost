/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_2002ef0(longlong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;

  if (param_1 < 0) {
    dVar2 = 0.0;
    dVar3 = 1.0;
    uVar4 = -(int)param_1;
    uVar6 = -(uint)((int)param_1 != 0) - PF_PART4(param_1, 4);
    do {
      if ((uVar4 & 1) != 0) {
        dVar2 = dVar3 + dVar2;
      }
      dVar3 = dVar3 + dVar3;
      bVar7 = 1 < uVar4;
      bVar8 = uVar6 != 0;
      uVar1 = -uVar6;
      uVar4 = uVar6 << 0x1f | uVar4 >> 1;
      uVar6 = uVar6 >> 1;
    } while (bVar8 || uVar1 < bVar7);
    dVar2 = -dVar2;
  }
  else {
    dVar2 = 0.0;
    if (param_1 != 0) {
      dVar2 = 0.0;
      dVar3 = 1.0;
      do {
        iVar5 = (int)((ulonglong)param_1 >> 0x20);
        uVar4 = (uint)param_1;
        if ((param_1 & 1U) != 0) {
          dVar2 = dVar3 + dVar2;
        }
        param_1 = (ulonglong)param_1 >> 1;
        dVar3 = dVar3 + dVar3;
      } while (iVar5 != 0 || (uint)-iVar5 < (uint)(1 < uVar4));
    }
  }
  return dVar2;
}
