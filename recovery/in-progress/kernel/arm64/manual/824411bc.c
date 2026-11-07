/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_824411bc(undefined1 *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;

  uVar3 = (undefined1)(param_2 >> 0x10);
  uVar2 = (undefined1)(param_2 >> 8);
  uVar1 = param_2;
  uVar4 = uVar2;
  if (param_3 != 0) {
    uVar1 = param_2 >> 0x18;
    uVar4 = uVar3;
    uVar3 = uVar2;
  }
  *param_1 = (char)uVar1;
  param_1[1] = uVar4;
  uVar1 = param_2 >> 0x18;
  if (param_3 != 0) {
    uVar1 = param_2;
  }
  param_1[2] = uVar3;
  param_1[3] = (char)uVar1;
  return;
}
