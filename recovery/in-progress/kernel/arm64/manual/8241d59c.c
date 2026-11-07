/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(float *)(frame + 28))
#define local_20 (*(double *)(frame + 16))
uint128 recovered_8241d59c(uint3 *param_1,int param_2,int param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint128 auVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;

  dVar5 = 0.0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_20 = 0.0;
      recovered_82400928(&local_20,param_1,8);
      dVar5 = 1.0;
      if (local_20 <= 1.0) {
        dVar5 = local_20;
      }
      uVar3 = 0;
      uVar4 = 0xbff00000;
      if (-1.0 <= local_20) {
        uVar3 = SUB84(dVar5,0);
        uVar4 = (undefined4)((ulong)dVar5 >> 0x20);
      }
      dVar5 = pf_bits_double(CONCAT44(uVar4,uVar3));
    }
    else if (param_3 == 0x20) {
      local_14 = 0.0;
      recovered_82400928(&local_14,param_1,4);
      dVar5 = 1.0;
      if ((double)local_14 <= 1.0) {
        dVar5 = (double)local_14;
      }
      uVar3 = 0;
      uVar4 = 0xbff00000;
      if (-1.0 <= local_14) {
        uVar3 = SUB84(dVar5,0);
        uVar4 = (undefined4)((ulong)dVar5 >> 0x20);
      }
      dVar5 = pf_bits_double(CONCAT44(uVar4,uVar3));
    }
  }
  else {
    dVar5 = 0.0;
    if (param_2 == 1) {
      dVar5 = 0.0;
      switch((uintptr_t)(param_3 - 8U >> 3 | param_3 << 0x1d)) {
      case 0:
        dVar5 = (double)(int)((byte)*param_1 - 0x80) / 128.0;
        break;
      case 1:
        dVar5 = (double)(int)(short)*param_1 / 32768.0;
        break;
      case 2:
        uVar1 = *param_1 | 0xff000000;
        if (-1 < *(char *)((long)param_1 + 2)) {
          uVar1 = (uint)*param_1;
        }
        dVar5 = (double)(int)uVar1 / 8388608.0;
        break;
      case 3:
        dVar5 = (double)*(int *)param_1 / 2147483648.0;
      }
    }
  }
  PF_PART8(auVar2, 8) = 0;
  PF_PART8(auVar2, 0) = dVar5;
  return auVar2;
}
