/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_824487dc(long param_1,uint param_2,uint param_3,int *param_4,long *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((((param_1 != 0) && (param_3 != 0)) && (param_4 != (int *)0x0)) && (param_5 != (long *)0x0)) {
    if ((*(uint *)(param_1 + 0xc) < param_2 || *(uint *)(param_1 + 0xc) - param_2 < param_3) ||
       (CARRY4(*(uint *)(param_1 + 8),param_2))) {
      return 0;
    }
    *param_4 = *(uint *)(param_1 + 8) + param_2;
    *param_5 = (ulong)param_3 << 9;
    uVar1 = 1;
  }
  return uVar1;
}
