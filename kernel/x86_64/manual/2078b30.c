/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_2078b30(ulong *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 == 0) {
    return *param_1;
  }
  uVar1 = *param_1;
  return uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
         (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
         (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
}
