/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_209f5a0(int *param_1,int *param_2,int *param_3,byte param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;

  if (param_3 != (int *)0x0 && (param_2 != (int *)0x0 && param_1 != (int *)0x0)) {
    if (*param_1 == 3) {
      if ((((*param_2 == 1) && (*param_3 == 3)) && (*(char **)(param_1 + 4) != (char *)0x0)) &&
         (*(long *)(param_3 + 4) != 0)) {
        uVar2 = recovered_2002e80(*(char **)(param_1 + 4));
        if ((long)param_2[1] < 1) {
          return '\0';
        }
        if (uVar2 < (ulong)(long)param_2[1]) {
          return '\0';
        }
        uVar2 = recovered_2002e80(*(char **)(param_3 + 4));
        if (uVar2 == 1) {
          *(undefined1 *)(*(long *)(param_1 + 4) + (ulong)(param_2[1] - 1)) =
               **(undefined1 **)(param_3 + 4);
          return '\x01';
        }
      }
    }
    else {
      puVar3 = (undefined8 *)recovered_209f320(param_1,param_2,param_4);
      if (puVar3 != (undefined8 *)0x0) {
        uVar1 = recovered_20a0670(puVar3,(undefined8 *)param_3);
        return (uchar)uVar1;
      }
    }
  }
  return '\0';
}
