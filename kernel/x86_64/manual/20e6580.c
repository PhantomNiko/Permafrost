/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_28 (*(undefined8 *)(frame + 24))
#define uStack_20 (*(undefined8 *)(frame + 32))
undefined8 recovered_20e6580(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = recovered_2013820((int)param_1,param_2,(undefined4 *)&local_28);
    if (uVar1 != '\0') {
      *param_3 = local_28;
      param_3[1] = uStack_20;
      uVar2 = 1;
    }
  }
  return uVar2;
}
