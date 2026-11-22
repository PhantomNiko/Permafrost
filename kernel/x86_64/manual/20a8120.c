/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20a8120(long *param_1,int *param_2,char param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;

  if (param_2 == (int *)0x0) {
    uVar1 = '\0';
  }
  else {
    if ((((param_3 == '\0') || (*param_2 != 7)) || (lVar3 = *(long *)(param_2 + 10), lVar3 == 0)) ||
       (*(char *)(lVar3 + 4) != '\x01')) {
      uVar2 = recovered_209cec0(param_1,(undefined8 *)param_2);
      return (uchar)uVar2;
    }
    if (*(long *)(lVar3 + 8) == 0) {
      uVar1 = '\x01';
    }
    else {
      lVar4 = 0;
      uVar5 = 0;
      do {
        uVar2 = recovered_209cec0(param_1,(undefined8 *)(*(long *)(lVar3 + 0x18) + lVar4));
        uVar1 = (uchar)uVar2;
        if (uVar1 == '\0') {
          return '\0';
        }
        uVar5 = uVar5 + 1;
        lVar3 = *(long *)(param_2 + 10);
        lVar4 = lVar4 + 0x40;
      } while (uVar5 < *(ulong *)(lVar3 + 8));
    }
  }
  return uVar1;
}
