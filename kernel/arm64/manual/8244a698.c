/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define lStack_28 (*(long *)(frame + 40))
#define uStack_30 (*(ulong *)(frame + 32))
#define uStack_38 (*(ulong *)(frame + 24))
undefined8 recovered_8244a698(long param_1,ulong param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  uVar1 = recovered_8244a6e0(param_1,param_2,&lStack_28,&uStack_30,&uStack_38);
  if ((int)uVar1 != 0) {
    recovered_8244a804(lStack_28,uStack_30,uStack_38);
  }
  return uVar1;
}
