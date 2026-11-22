/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e198 (*(float *)(0x82473968U))
float recovered_82462198(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  if (0.0 < param_1) {
    iVar1 = 0;
    for (; 2.0 <= param_1; param_1 = param_1 * 0.5) {
      iVar1 = iVar1 + 1;
    }
    for (; param_1 < 1.0; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    fVar3 = (param_1 + -1.0) / (param_1 + 1.0);
    fVar5 = fVar3 * fVar3;
    fVar4 = fVar3;
    for (uVar2 = 3; uVar2 < 0xc; uVar2 = uVar2 + 2) {
      fVar3 = fVar5 * fVar3;
      fVar4 = fVar4 + fVar3 / (float)uVar2;
    }
    return (float)iVar1 * DAT_4044e198 + fVar4 * 2.0;
  }
  return 0.0;
}
