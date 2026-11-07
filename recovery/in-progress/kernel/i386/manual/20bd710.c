/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined1 recovered_20bd710(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;

  uVar1 = 0;
  if ((param_1 - 0x198U < 9) && ((0x103U >> (param_1 - 0x198U & 0x1f) & 1) != 0)) {
    uVar2 = recovered_2012530(param_1,param_2,param_3);
    uVar1 = (undefined1)uVar2;
  }
  return uVar1;
}
