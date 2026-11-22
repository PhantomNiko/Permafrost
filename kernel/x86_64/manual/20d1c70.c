/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20d1c70(long param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if (((param_2 != 0 && param_1 != 0) &&
      (recovered_2002110((void *)param_1,0,param_2), param_3 != (undefined1 *)0x0)) &&
     (uVar1 = recovered_2002e80(param_3), uVar1 != 0)) {
    uVar2 = 1;
    do {
      if (param_2 <= uVar2) {
        return;
      }
      *(undefined1 *)(param_1 + -1 + uVar2) = *param_3;
      param_3 = param_3 + 1;
      uVar2 = uVar2 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}
