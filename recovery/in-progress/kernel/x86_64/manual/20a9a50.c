/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_20a9a50(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;

  if ((param_2 != 0 && param_1 != 0) && (uVar2 = *(ulong *)(param_1 + 8), uVar2 != 0)) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      left = *(char **)(*(long *)(param_1 + 0x18) + lVar4);
      if (left != (char *)0x0) {
        iVar1 = recovered_2002eb0(left,(char *)param_2);
        if (iVar1 == 0) {
          if ((int)(uint)uVar3 < 0) {
            return 0;
          }
          return *(long *)(param_1 + 0x18) + (ulong)((uint)uVar3 & 0x7fffffff) * 0x48 + 8;
        }
        uVar2 = *(ulong *)(param_1 + 8);
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x48;
    } while (uVar3 < uVar2);
  }
  return 0;
}
