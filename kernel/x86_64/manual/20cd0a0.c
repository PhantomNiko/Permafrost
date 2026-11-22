/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20cd0a0(int *param_1,uint param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  bool bVar2;

  if ((((param_2 < 0x43) || (param_1 == (int *)0x0)) || (param_3 == (undefined8 *)0x0)) ||
     ((*param_1 != 0x54504257 || ((short)param_1[1] != 1)))) {
    return '\0';
  }
  uVar1 = *(ushort *)((long)param_1 + 6);
  bVar2 = 0xfffb < (ushort)(uVar1 - 5);
  if (bVar2) {
    recovered_2002110(param_3,0,0x38);
    *param_3 = 0x4200000003;
    *(uint *)(param_3 + 1) = param_2 - 1;
    *(uint *)((long)param_3 + 0xc) = (uint)uVar1;
    param_3[2] = 0x2000000041;
    *(undefined4 *)(param_3 + 3) = 1;
    *(undefined4 *)(param_3 + 4) = 0x41;
  }
  return bVar2;
}
