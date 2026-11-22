/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_24 (*(undefined4 *)(frame + 28))
undefined8 recovered_824186c4(long param_1,undefined4 param_2,undefined8 *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;

  local_24 = param_2;
  lVar1 = recovered_824187bc((long *)(param_1 + 0x20),(byte *)&local_24);
  if ((lVar1 == -1) || (lVar1 == *(long *)(param_1 + 0x28))) {
    uVar2 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1 * 0xc + 4);
    uVar2 = 1;
  }
  return uVar2;
}
