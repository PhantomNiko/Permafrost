/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044df78 (*(uint64_t *)(0x82473248U))
#define DAT_4044df80 (*(uint64_t *)(0x82473250U))
undefined8 recovered_8246666c(int *param_1,uint param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if (((0x42 < param_2) && (param_1 != (int *)0x0)) && (param_3 != (undefined8 *)0x0)) {
    if (((*param_1 == 0x54504257) && ((short)param_1[1] == 1)) &&
       (uVar1 = *(ushort *)((long)param_1 + 6), 0xfffffffb < uVar1 - 5)) {
      recovered_82400b14(param_3,0,0x38);
      *param_3 = DAT_4044df78;
      *(uint *)(param_3 + 1) = param_2 - 1;
      *(uint *)((long)param_3 + 0xc) = (uint)uVar1;
      param_3[2] = DAT_4044df80;
      uVar2 = 1;
      *(undefined4 *)(param_3 + 3) = 1;
      *(undefined4 *)(param_3 + 4) = 0x41;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
