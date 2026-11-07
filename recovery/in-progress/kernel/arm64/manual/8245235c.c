/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8245235c(long *param_1,int *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;

  if (param_2 != (int *)0x0) {
    if ((((param_3 == 0) || (*param_2 != 7)) || (*(long *)(param_2 + 10) == 0)) ||
       (*(char *)(*(long *)(param_2 + 10) + 4) != '\x01')) {
      uVar2 = recovered_8244ce58(param_1,(undefined8 *)param_2);
      return uVar2;
    }
    uVar4 = 0xffffffffffffffff;
    lVar3 = 0;
    do {
      uVar4 = uVar4 + 1;
      if (*(ulong *)(*(long *)(param_2 + 10) + 8) <= uVar4) {
        return 1;
      }
      uVar1 = recovered_8244ce58(param_1,(undefined8 *)
                                         (*(long *)(*(long *)(param_2 + 10) + 0x18) + lVar3));
      lVar3 = lVar3 + 0x40;
    } while ((uVar1 & 1) != 0);
  }
  return 0;
}
