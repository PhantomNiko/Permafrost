/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8246d288(undefined8 param_1,undefined8 param_2,long param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if ((param_3 != 0) && (param_4 != (uint *)0x0)) {
    *param_4 = 0;
    uVar1 = recovered_8240221c();
    uVar2 = 0;
    if ((0 < (int)(uint)uVar1) && ((uVar1 & 3) == 0)) {
      *param_4 = (uint)uVar1 >> 2;
      uVar2 = 1;
    }
  }
  return uVar2;
}
