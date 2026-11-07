/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_824512e8(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *left;
  ulong uVar2;
  long lVar3;

  if ((param_1 != 0) && (param_2 != 0)) {
    lVar3 = 0;
    for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 8); uVar2 = uVar2 + 1) {
      left = *(char **)(*(long *)(param_1 + 0x18) + lVar3);
      if ((left != (char *)0x0) && (iVar1 = recovered_82400e0c(left,(char *)param_2), iVar1 == 0)) {
        return uVar2;
      }
      lVar3 = lVar3 + 0x48;
    }
  }
  return 0xffffffff;
}
