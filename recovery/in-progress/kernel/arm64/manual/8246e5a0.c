/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define uStack_28 (*(undefined8 *)(frame + 24))
#define uStack_30 (*(undefined8 *)(frame + 16))
undefined8 recovered_8246e5a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = recovered_82409c38(param_1,param_2,&uStack_30);
  if ((int)uVar1 != 0) {
    param_3[1] = uStack_28;
    *param_3 = uStack_30;
    uVar1 = 1;
  }
  return uVar1;
}
