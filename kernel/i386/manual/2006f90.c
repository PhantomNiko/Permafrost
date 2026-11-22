/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_2006f90(uint *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 != (uint *)0x0 && param_3 != (uint *)0x0) {
    *param_3 = 0;
    if (param_2 == 4) {
      if (((uint)param_1 & 3) == 0) {
        uVar1 = *param_1;
        goto LAB_02005d69;
      }
    }
    else if (param_2 == 2) {
      if (((uint)param_1 & 1) == 0) {
        uVar1 = (uint)(ushort)*param_1;
        goto LAB_02005d69;
      }
    }
    else if (param_2 == 1) {
      uVar1 = (uint)(byte)*param_1;
LAB_02005d69:
      *param_3 = uVar1;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
  }
  return 0;
}
