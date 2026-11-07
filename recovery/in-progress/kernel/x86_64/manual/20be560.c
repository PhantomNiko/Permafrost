/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20be560(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  char *left;
  int iVar2;
  ulong uVar4;
  long lVar3;
  long lVar5;
  uint uVar6;
  ulong uVar7;

  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar7 = 0;
    do {
      left = *(char **)(*(long *)(param_1 + 0x18) + lVar5);
      if (left != (char *)0x0) {
        iVar2 = recovered_2002eb0(left,(char *)param_2);
        if (iVar2 == 0) {
          uVar6 = (uint)uVar7;
          if ((int)uVar6 < 0) {
            return 0;
          }
          uVar7 = (ulong)(uVar6 & 0x7fffffff);
          recovered_2000bb0(*(void **)(*(long *)(param_1 + 0x18) + uVar7 * 0x48));
          recovered_205ec00((undefined8 *)(*(long *)(param_1 + 0x18) + uVar7 * 0x48 + 8));
          uVar4 = *(ulong *)(param_1 + 8);
          if (uVar7 + 1 < uVar4) {
            recovered_2001850((void *)(*(long *)(param_1 + 0x18) + uVar7 * 0x48),
                              (void *)(*(long *)(param_1 + 0x18) + (ulong)(uVar6 + 1) * 0x48),
                              (uVar4 + ~uVar7) * 0x48);
            uVar4 = *(ulong *)(param_1 + 8);
          }
          lVar3 = uVar4 - 1;
          *(long *)(param_1 + 8) = lVar3;
          lVar5 = *(long *)(param_1 + 0x18);
          puVar1 = (undefined8 *)(lVar5 + lVar3 * 0x48);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(lVar5 + 0x10 + lVar3 * 0x48) = 0;
          puVar1 = (undefined8 *)(lVar5 + 0x18 + lVar3 * 0x48);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar5 + 0x28 + lVar3 * 0x48);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar5 + 0x38 + lVar3 * 0x48);
          *puVar1 = 0;
          puVar1[1] = 0;
          return (uint)CONCAT71((int7)((ulong)(lVar3 * 9) >> 8),1);
        }
        uVar4 = *(ulong *)(param_1 + 8);
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x48;
    } while (uVar7 < uVar4);
  }
  return 0;
}
