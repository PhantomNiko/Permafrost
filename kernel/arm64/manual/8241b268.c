/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8241b268(long *param_1,ulong *param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;

  recovered_8241b334(param_1,param_2);
  uVar3 = *param_2;
  uVar5 = param_1[1];
  if (uVar3 < uVar5) {
    lVar4 = *param_1;
    cVar2 = *(char *)(lVar4 + uVar3);
    if ((cVar2 == '-') || (cVar2 == '+')) {
      uVar3 = uVar3 + 1;
      *param_2 = uVar3;
      uVar5 = param_1[1];
    }
    if ((uVar3 < uVar5) && (0xfffffff5 < *(byte *)(lVar4 + uVar3) - 0x3a)) {
      iVar6 = 0;
      while ((uVar3 < uVar5 && (*(byte *)(lVar4 + uVar3) - 0x30U < 10))) {
        iVar6 = (uint)*(byte *)(lVar4 + uVar3) + iVar6 * 10 + -0x30;
        uVar3 = uVar3 + 1;
        *param_2 = uVar3;
        uVar5 = param_1[1];
      }
      iVar1 = -iVar6;
      if (cVar2 != '-') {
        iVar1 = iVar6;
      }
      *param_3 = iVar1;
      return 1;
    }
  }
  return 0;
}
