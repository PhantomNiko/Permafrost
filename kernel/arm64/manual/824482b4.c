/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_34 (*(uint *)(frame + 28))
#define local_40 (*(long *)(frame + 16))
undefined8 recovered_824482b4(int param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined8 uVar2;

  puVar1 = recovered_8244878c(param_1);
  local_34 = 0;
  local_40 = 0;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_824487dc((long)puVar1,param_2,param_4,(int *)&local_34,&local_40);
    if ((int)uVar2 != 0) {
      uVar2 = recovered_8243843c((ulong)*(byte *)(puVar1 + 1),(ulong)local_34,param_3,local_40);
    }
  }
  return uVar2;
}
