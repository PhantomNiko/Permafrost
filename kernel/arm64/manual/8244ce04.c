/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8244ce04(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(ulong *)(param_1 + 0x10) < **(ulong **)(param_1 + 8)) &&
       (iVar1 = recovered_82400e0c(*(char **)((*(ulong **)(param_1 + 8))[2] +
                                             *(ulong *)(param_1 + 0x10) * 8),(char *)param_2),
       iVar1 == 0)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
