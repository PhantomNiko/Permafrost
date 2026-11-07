/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_82469448(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  if (param_2 == (undefined1 *)0x0) {
    return 0;
  }
  recovered_82400b14(param_2,0,0xc);
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0xc), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *param_2 = 1;
    param_2[1] = *(undefined1 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_2 + 8) = iVar1;
  }
  return uVar2;
}
