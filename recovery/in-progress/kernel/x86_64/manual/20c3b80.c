/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(float *)(0x20eaf50U))
#define DAT_020a23f0 (*(float *)(0x20eb1d0U))
float recovered_20c3b80(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 param_1=pf_float_bits(value);
  float fVar1;
  float fVar2;
  undefined4 uVar3;

  fVar1 = pf_bits_float((uint32_t)param_1);
  fVar2 = 0.0;
  uVar3 = 0;
  if (0.0 < fVar1) {
    fVar2 = fVar1;
    if (fVar1 <= DAT_020a1570) {
      fVar2 = DAT_020a1570;
    }
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    fVar2 = (fVar1 / fVar2 + fVar2) * DAT_020a23f0;
    uVar3 = (int)((ulong)param_1 >> 0x20);
  }
  return fVar2;
}
