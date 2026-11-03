#include "functions.h"
#undef DAT_00045f30
#define DAT_00045f30 (*(uint8_t *)(0x45f30U))
#undef DAT_0004623c
#define DAT_0004623c (*(uint8_t *)(0x4623cU))
#undef DAT_00046240
#define DAT_00046240 (*(uint8_t *)(0x46240U))
#undef _DAT_00045f30
#define _DAT_00045f30 (*(float *)(0x45f30U))
#undef _DAT_0004623c
#define _DAT_0004623c (*(float *)(0x4623cU))
#undef _DAT_00046240
#define _DAT_00046240 (*(float *)(0x46240U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42b0c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_42b0c(float param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;

  fVar3 = (float10)param_1;
  fVar5 = (float10)0;
  if (fVar5 < fVar3) {
    iVar1 = 0;
    for (; (float10)_DAT_0004623c <= fVar3; fVar3 = fVar3 * (float10)_DAT_00045f30) {
      iVar1 = iVar1 + 1;
    }
    fVar5 = (float10)1;
    for (; fVar3 < fVar5; fVar3 = fVar3 + fVar3) {
      iVar1 = iVar1 + -1;
    }
    fVar4 = (-fVar5 + fVar3) / (fVar3 + fVar5);
    fVar3 = fVar4 * fVar4;
    fVar5 = fVar4;
    for (uVar2 = 3; uVar2 < 0xc; uVar2 = uVar2 + 2) {
      fVar4 = fVar4 * fVar3;
      fVar5 = fVar4 / (float10)(int)uVar2 + fVar5;
    }
    fVar5 = fVar5 + fVar5 + (float10)iVar1 * (float10)_DAT_00046240;
  }
  return fVar5;
}
