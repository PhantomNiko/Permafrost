/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_54 (*(uint *)(frame + 28))
uint recovered_82415638(long *param_1,long param_2,uint *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;

  if (*(char *)(param_2 + 0x5c) != '\x01') {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 0x58);
  if (uVar5 == 0) {
    local_54 = 0;
  }
  else {
    iVar7 = 0;
    lVar6 = 0;
    uVar8 = 0;
    local_54 = 1;
    for (uVar4 = 1; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
      local_54 = 0;
      uVar3 = recovered_8241535c(param_1,1,&local_54);
      if ((int)uVar3 == 0) {
LAB_4040f2d0:
        local_54 = 0;
        break;
      }
      local_54 = local_54 | uVar8;
      uVar2 = *(uint *)(param_2 + (ulong)uVar4 * 4);
      uVar8 = uVar2 + iVar7;
      if (local_54 < uVar8) {
        uVar1 = lVar6 + (ulong)(local_54 - iVar7);
        if (*(ulong *)(param_2 + 0x48) <= uVar1) goto LAB_4040f2d0;
        *param_3 = (uint)*(ushort *)(*(long *)(param_2 + 0x40) + uVar1 * 2);
        local_54 = 1;
        break;
      }
      lVar6 = lVar6 + (ulong)uVar2;
      iVar7 = uVar8 * 2;
      uVar8 = local_54 << 1;
      uVar5 = *(uint *)(param_2 + 0x58);
    }
    local_54 = uVar4 <= uVar5 & local_54;
  }
  return local_54;
}
