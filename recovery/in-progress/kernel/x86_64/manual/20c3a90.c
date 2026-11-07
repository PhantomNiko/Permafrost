/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(float *)(0x20eaf50U))
#define DAT_020a2090 (*(float *)(0x20eb6e0U))
#define DAT_020a23ec (*(float *)(0x20ebb8cU))
#define DAT_020a23f0 (*(float *)(0x20eb1d0U))
#define _DAT_020a2270 (*(uint128 *)(0x20eb9d0U))
#define _DAT_020a2280 (*(uint128 *)(0x20eb9e0U))
#define _DAT_020a23f4 (*(float *)(0x20ebb90U))
#define _DAT_020a23f8 (*(float *)(0x20ebb94U))
float recovered_20c3a90(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint128 auVar4;
  float fVar5;
  float fVar6;

  if (0.0 < param_1) {
    iVar1 = 0;
    if (DAT_020a23ec <= param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_020a23f0;
        iVar1 = iVar1 + 1;
      } while (DAT_020a23ec <= param_1);
    }
    for (; param_1 < DAT_020a1570; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    fVar5 = (DAT_020a2090 + param_1) / (param_1 + DAT_020a1570);
    fVar6 = fVar5 * fVar5;
    PF_PART4(auVar3, 0) = fVar6 * fVar6 * fVar5;
    PF_PART4(auVar3, 4) = fVar6 * PF_PART4(auVar3, 0);
    PF_PART8(auVar3, 8) = 0;
    auVar4 = divps(auVar3,_DAT_020a2270);
    PF_PART4(auVar2, 0) = fVar6 * PF_PART4(auVar3, 0) * fVar6;
    PF_PART4(auVar2, 4) = fVar6 * PF_PART4(auVar2, 0);
    PF_PART8(auVar2, 8) = 0;
    auVar2 = divps(auVar2,_DAT_020a2280);
    fVar5 = PF_PART4(auVar2, 4) +
            PF_PART4(auVar4, 4) + (fVar6 * fVar5) / _DAT_020a23f4 + fVar5 + PF_PART4(auVar4, 0) + PF_PART4(auVar2, 0);
    return fVar5 + fVar5 + (float)iVar1 * _DAT_020a23f8;
  }
  return 0.0;
}
