/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8246e704(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined4 *in_x1;
  undefined4 *in_x2;

  uVar2 = 0;
  uVar1 = (int)param_1 - 0x198;
  if ((uVar1 < 9) && ((1 << (ulong)(uVar1 & 0x1f) & 0x103U) != 0)) {
    uVar2 = recovered_82409c98(param_1,in_x1,in_x2);
  }
  return uVar2;
}
