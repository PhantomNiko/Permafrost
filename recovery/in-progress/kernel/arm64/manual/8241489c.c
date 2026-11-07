/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8241489c(long param_1,ulong param_2,ulong param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  uint uVar3;

  uVar1 = param_2 - param_3;
  bVar2 = param_2 >= param_3;
  if (bVar2 && 3 < uVar1) {
    uVar3 = recovered_824148d8((uint *)(param_1 + param_3));
    *param_4 = uVar3;
  }
  return (bVar2 && 2 < uVar1) && (param_2 < param_3 || uVar1 != 3);
}
