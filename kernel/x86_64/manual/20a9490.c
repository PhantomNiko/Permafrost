/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20a9490(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong size;

  if (param_1 == (long *)0x0) {
    return '\0';
  }
  lVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_3 + lVar4 + 1;
  if (uVar1 < uVar2) {
    size = 0x20;
    if (uVar1 != 0) {
      size = uVar1;
    }
    for (; size < uVar2; size = size * 2) {
      if ((long)size < 0) {
        size = uVar2;
        break;
      }
    }
    pvVar3 = recovered_2000d40((void *)param_1[2],size);
    if (pvVar3 == (void *)0x0) {
      return '\0';
    }
    param_1[2] = (long)pvVar3;
    param_1[1] = size;
    lVar4 = *param_1;
  }
  if (param_2 != 0 && param_3 != 0) {
    recovered_2001410((void *)(lVar4 + param_1[2]),(void *)param_2,param_3);
    lVar4 = *param_1;
  }
  *param_1 = lVar4 + param_3;
  *(undefined1 *)(param_1[2] + lVar4 + param_3) = 0;
  return '\x01';
}
