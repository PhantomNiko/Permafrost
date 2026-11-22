/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20085d0(uint *param_1,int param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 != (uint *)0x0 && param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if (param_2 == 4) {
      if (((ulong)param_1 & 3) == 0) {
        uVar1 = *param_1;
        goto LAB_02005d25;
      }
    }
    else if (param_2 == 2) {
      if (((ulong)param_1 & 1) == 0) {
        uVar1 = (uint)(ushort)*param_1;
        goto LAB_02005d25;
      }
    }
    else if (param_2 == 1) {
      uVar1 = (uint)(byte)*param_1;
LAB_02005d25:
      *param_3 = uVar1;
      return '\x01';
    }
  }
  return '\0';
}
