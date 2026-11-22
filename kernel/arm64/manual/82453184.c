/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044d4b8 (*(uint8_t *)(0x82472a58U))
uint recovered_82453184(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong size;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong size_00;
  char *text;

  text = &DAT_4044d4b8;
  if (param_2 != (undefined1 *)0x0) {
    text = param_2;
  }
  size = recovered_82400de8(text);
  if (param_1 == (long *)0x0) {
LAB_0206bb57:
    uVar3 = 0;
  }
  else {
    lVar6 = *param_1;
    uVar1 = param_1[1];
    uVar4 = size + lVar6 + 1;
    if (uVar1 < uVar4) {
      size_00 = 0x20;
      if (uVar1 != 0) {
        size_00 = uVar1;
      }
      for (; size_00 < uVar4; size_00 = size_00 * 2) {
        if ((long)size_00 < 0) {
          size_00 = uVar4;
          break;
        }
      }
      pvVar5 = recovered_82400820((void *)param_1[2],size_00);
      if (pvVar5 == (void *)0x0) goto LAB_0206bb57;
      param_1[2] = (long)pvVar5;
      param_1[1] = size_00;
      lVar6 = *param_1;
    }
    if (size != 0) {
      recovered_82400928((void *)(lVar6 + param_1[2]),text,size);
      lVar6 = *param_1;
    }
    *param_1 = lVar6 + size;
    lVar2 = param_1[2];
    *(undefined1 *)(lVar2 + lVar6 + size) = 0;
    uVar3 = (uint)CONCAT71((int7)((ulong)lVar2 >> 8),1);
  }
  return uVar3;
}
