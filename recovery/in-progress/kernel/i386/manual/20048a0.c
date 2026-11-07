/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20048a0(undefined2 param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ushort uVar2;
  uint uVar3;

  if (param_3 == (uint *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if (param_2 == 4) {
    uVar3 = in(param_1);
  }
  else if (param_2 == 2) {
    uVar2 = in(param_1);
    uVar3 = (uint)uVar2;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    bVar1 = in(param_1);
    uVar3 = (uint)bVar1;
  }
  *param_3 = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}
