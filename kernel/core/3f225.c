#include "functions.h"
#undef DAT_00042340
#define DAT_00042340 (*(uint8_t *)(0x42340U))
#undef DAT_000425ec
#define DAT_000425ec (*(uint8_t *)(0x425ecU))
#undef DAT_000425f0
#define DAT_000425f0 (*(uint8_t *)(0x425f0U))
#undef _DAT_00042340
#define _DAT_00042340 (*(float *)(0x42340U))
#undef _DAT_000425ec
#define _DAT_000425ec (*(float *)(0x425ecU))
#undef _DAT_000425f0
#define _DAT_000425f0 (*(float *)(0x425f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f225
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_3f225(float param_1)

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
    for (; (float10)_DAT_000425ec <= fVar3; fVar3 = fVar3 * (float10)_DAT_00042340) {
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
    fVar5 = fVar5 + fVar5 + (float10)iVar1 * (float10)_DAT_000425f0;
  }
  return fVar5;
}
