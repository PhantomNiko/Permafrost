/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8244f924(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 == 0) || (param_2 == 0)) ||
     (uVar1 = recovered_8244f978(param_1,*(long *)(param_1 + 8) + 1), (int)uVar1 == 0)) {
    return 0;
  }
  uVar1 = recovered_8244ed8c((undefined8 *)
                             (*(long *)(param_1 + 0x18) + *(long *)(param_1 + 8) * 0x40 + -0x40),
                             (undefined8 *)param_2);
  return uVar1;
}
