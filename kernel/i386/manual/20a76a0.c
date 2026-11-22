/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20a76a0(int *incoming_ecx,uint incoming_edx,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  undefined4 uVar2;
  void *pvVar3;

  uVar2 = 0;
  if (((0x42 < incoming_edx) && (incoming_ecx != (int *)0x0)) && (param_3 != (undefined4 *)0x0)) {
    if (((*incoming_ecx == 0x54504257) && ((short)incoming_ecx[1] == 1)) &&
       (uVar1 = *(ushort *)((int)incoming_ecx + 6), 0xfffb < (ushort)(uVar1 - 5))) {
      pvVar3 = recovered_2001e00(param_3,0,0x38);
      *param_3 = 3;
      param_3[1] = 0x42;
      param_3[2] = incoming_edx - 1;
      param_3[3] = (uint)uVar1;
      param_3[4] = 0x41;
      param_3[5] = 0x20;
      param_3[6] = 1;
      param_3[8] = 0x41;
      uVar2 = CONCAT31((int3)((uint)pvVar3 >> 8),1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
