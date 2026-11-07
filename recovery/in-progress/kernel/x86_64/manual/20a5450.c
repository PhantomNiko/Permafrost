/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20a5450(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;

  if ((param_2 != 0 && param_1 != 0) && (uVar2 = *(ulong *)(param_1 + 8), uVar2 != 0)) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      left = *(char **)(*(long *)(param_1 + 0x18) + lVar3);
      if (left != (char *)0x0) {
        iVar1 = recovered_2002eb0(left,(char *)param_2);
        if (iVar1 == 0) {
          return (uint)uVar4;
        }
        uVar2 = *(ulong *)(param_1 + 8);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x48;
    } while (uVar4 < uVar2);
  }
  return 0xffffffff;
}
