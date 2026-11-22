/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_1c (*(undefined4 *)(frame + 20))
uchar recovered_20e8da0(long *param_1,undefined4 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uchar uVar3;
  void *pvVar4;
  long lVar5;
  ulong size;

  if (param_1 == (long *)0x0) {
LAB_0209e51f:
    uVar3 = '\0';
  }
  else {
    lVar5 = *param_1;
    uVar2 = param_1[1];
    uVar1 = lVar5 + 5;
    local_1c = param_2;
    if (uVar2 < uVar1) {
      size = 0x20;
      if (uVar2 != 0) {
        size = uVar2;
      }
      for (; size < uVar1; size = size * 2) {
        if ((long)size < 0) {
          size = uVar1;
          break;
        }
      }
      pvVar4 = recovered_2000d40((void *)param_1[2],size);
      if (pvVar4 == (void *)0x0) goto LAB_0209e51f;
      param_1[2] = (long)pvVar4;
      param_1[1] = size;
      lVar5 = *param_1;
    }
    else {
      pvVar4 = (void *)param_1[2];
    }
    recovered_2001410((void *)((long)pvVar4 + lVar5),&local_1c,4);
    lVar5 = *param_1;
    *param_1 = lVar5 + 4;
    *(undefined1 *)(param_1[2] + 4 + lVar5) = 0;
    uVar3 = '\x01';
  }
  return uVar3;
}
