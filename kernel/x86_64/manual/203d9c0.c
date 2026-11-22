/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1468 (*(double *)(0x20eae48U))
#define DAT_020a1488 (*(double *)(0x20eae68U))
#define DAT_020a2090 (*(float *)(0x20eb6e0U))
#define _DAT_020a2060 (*(double *)(0x20eb6b0U))
#define _DAT_020a2068 (*(double *)(0x20eb6b8U))
#define _DAT_020a2070 (*(double *)(0x20eb6c0U))
#define _DAT_020a2078 (*(double *)(0x20eb6c8U))
#define local_18 (*(double *)(frame + 24))
#define local_c (*(float *)(frame + 36))
double recovered_203d9c0(uint3 *param_1,int param_2,ushort param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  double dVar2;

  dVar2 = 0.0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_18 = 0.0;
      recovered_2001410(&local_18,param_1,8);
      dVar2 = DAT_020a1468;
      if (local_18 <= DAT_020a1468) {
        dVar2 = local_18;
      }
      dVar2 = (double)(-(ulong)(local_18 < DAT_020a1488) & (ulong)DAT_020a1488 |
                      ~-(ulong)(local_18 < DAT_020a1488) & (ulong)dVar2);
    }
    else if (param_3 == 0x20) {
      local_c = 0.0;
      recovered_2001410(&local_c,param_1,4);
      if (local_c < DAT_020a2090) {
        dVar2 = DAT_020a1488;
      }
      else {
        dVar2 = DAT_020a1468;
        if ((double)local_c <= DAT_020a1468) {
          dVar2 = (double)local_c;
        }
      }
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)((uint)param_3 << 0x1d | param_3 - 8 >> 3)) {
    case 0:
      dVar2 = (double)(int)((byte)*param_1 - 0x80) * _DAT_020a2078;
      break;
    case 1:
      dVar2 = (double)(int)(short)*param_1 * _DAT_020a2070;
      break;
    case 2:
      uVar1 = *param_1 - 0x1000000;
      if (-1 < *(char *)((long)param_1 + 2)) {
        uVar1 = (uint)*param_1;
      }
      dVar2 = (double)(int)uVar1 * _DAT_020a2068;
      break;
    case 3:
      dVar2 = (double)*(int *)param_1 * _DAT_020a2060;
    }
  }
  return dVar2;
}
