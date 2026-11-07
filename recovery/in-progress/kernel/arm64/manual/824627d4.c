/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_824627d4(int *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;

  if ((((param_1 == (int *)0x0) || (*param_1 != 8)) || (param_3 == 0)) ||
     (((param_2 == 0 || (*(long *)(param_1 + 0xc) == 0)) ||
      (puVar1 = (undefined8 *)recovered_824617b4(*(long *)(param_1 + 0xc),param_2,1),
      puVar1 == (undefined8 *)0x0)))) {
    return 0;
  }
  uVar2 = recovered_8244ed8c(puVar1,(undefined8 *)param_3);
  return uVar2;
}
