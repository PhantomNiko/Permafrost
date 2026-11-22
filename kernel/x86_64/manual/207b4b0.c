/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_207b4b0(long param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;

  if (param_4 != (ulong *)0x0 && (param_3 != (ulong *)0x0 && param_1 != 0)) {
    uVar3 = *param_3;
    uVar2 = 0;
    if (param_2 <= uVar3) goto LAB_02053f8a;
    uVar4 = 0;
    do {
      uVar3 = uVar3 + 1;
      *param_3 = uVar3;
      bVar1 = *(byte *)(param_1 + -1 + uVar3);
      uVar5 = bVar1 & 0x7f;
      if ((0x3f < uVar2) && ((char)uVar5 != '\0')) break;
      uVar4 = uVar4 | (ulong)uVar5 << ((byte)uVar2 & 0x3f);
      if (-1 < (char)bVar1) {
        *param_4 = uVar4;
        uVar2 = 1;
        goto LAB_02053f8a;
      }
      uVar2 = uVar2 + 7;
    } while (uVar3 != param_2);
  }
  uVar2 = 0;
LAB_02053f8a:
  return (uchar)uVar2;
}
