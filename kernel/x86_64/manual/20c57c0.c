/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20c57c0(undefined4 *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *out;
  undefined8 extraout_RAX = 0;

  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == 0 && param_3 != 0) {
LAB_02086e03:
    uVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      out = (void *)0x0;
    }
    else {
      out = recovered_2000ad0(param_3);
      if (out == (void *)0x0) goto LAB_02086e03;
      recovered_2001410(out,(void *)param_2,param_3);
    }
    recovered_205ec00((undefined8 *)param_1);
    *param_1 = 4;
    *(void **)(param_1 + 6) = out;
    *(long *)(param_1 + 8) = param_3;
    uVar1 = (uint)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
  }
  return uVar1;
}
