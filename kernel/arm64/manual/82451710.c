/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_24 (*(int *)(frame + 28))
undefined8 recovered_82451710(long param_1,int *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  uVar1 = 0;
  local_24 = 0;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    uVar2 = recovered_824472d8(param_1,&local_24);
    uVar1 = 0;
    if (((int)uVar2 != 0) && (local_24 < 0)) {
      *param_2 = local_24;
      uVar1 = 1;
    }
  }
  return uVar1;
}
