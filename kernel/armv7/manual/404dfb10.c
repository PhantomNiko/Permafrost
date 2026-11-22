/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_404dfb10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 *in_r1;
  undefined4 *in_r2;

  uVar1 = 0;
  if ((param_1 - 0x198U < 9) && ((1 << (param_1 - 0x198U & 0xff) & 0x103U) != 0)) {
    uVar1 = recovered_40412218(param_1,in_r1,in_r2);
  }
  return uVar1;
}
