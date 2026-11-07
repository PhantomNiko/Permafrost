/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_824626f0(long param_1,ulong *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 != (ulong *)0x0) {
    if (((param_4 == 0xe) || (param_3 == 0x7f || param_3 == 8)) && (*param_2 != 0)) {
      uVar1 = *param_2 - 1;
      *param_2 = uVar1;
    }
    else {
      if (((((0x5e < param_3 - 0x20U || param_4 == 1) || param_3 == 0x1b) || param_3 == 0xd) ||
          param_3 == 10) || param_4 == 0x1c) {
        return;
      }
      uVar1 = *param_2;
      if (0x1fe < uVar1) {
        return;
      }
      *param_2 = uVar1 + 1;
      *(char *)(param_1 + uVar1) = (char)param_3;
      uVar1 = *param_2;
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
  }
  return;
}
