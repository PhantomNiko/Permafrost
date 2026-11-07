/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20c4970(int *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;

  if ((((param_1 != (int *)0x0) && (*param_1 == 8)) && (param_3 != 0)) &&
     ((param_2 != 0 && (*(long *)(param_1 + 0xc) != 0)))) {
    puVar2 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),param_2,'\x01');
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = recovered_20a0670(puVar2,(undefined8 *)param_3);
      return (uchar)uVar1;
    }
  }
  return '\0';
}
