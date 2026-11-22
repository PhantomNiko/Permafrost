/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_0208bbb0 (*(float *)(0x20c1620U))
ulong recovered_2002690(double param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined4 in_EAX = 0;
  int iVar2;
  ushort uVar3;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  uVar3 = (ushort)(param_1 < 0.0) << 8 | (ushort)NAN(param_1) << 10 |
          (ushort)(param_1 == 0.0) << 0xe;
  if (((param_1 == 0.0) == 0) || (NAN(param_1) != 0)) {
    dVar1 = -param_1;
    if (-param_1 <= param_1) {
      dVar1 = param_1;
    }
    iVar2 = 0;
    if (1.0 <= dVar1) {
      iVar2 = 0;
      do {
        dVar1 = dVar1 * (double)_DAT_0208bbb0;
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)_DAT_0208bbb0 && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)_DAT_0208bbb0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
    uVar3 = (ushort)(0.0 < param_1) << 8 | (ushort)NAN(param_1) << 10 |
            (ushort)(param_1 == 0.0) << 0xe;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),uVar3);
}
