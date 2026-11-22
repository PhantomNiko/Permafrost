/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20294f0(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = *param_3;
  if (param_4 == 4) {
    if (param_2 - uVar2 < 4 || param_2 < uVar2) {
      return '\0';
    }
    uVar1 = *(uint *)(param_1 + uVar2);
    uVar2 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
    ;
  }
  else {
    if (param_2 - uVar2 < 8 || param_2 < uVar2) {
      return '\0';
    }
    uVar2 = *(ulong *)(param_1 + uVar2);
    uVar2 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
            (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  }
  *param_5 = uVar2;
  *param_3 = *param_3 + (ulong)param_4;
  return '\x01';
}
