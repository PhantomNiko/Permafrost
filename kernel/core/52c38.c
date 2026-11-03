#include "functions.h"
#undef DAT_00056810
#define DAT_00056810 (*(uint8_t *)(0x56810U))
#undef DAT_00056820
#define DAT_00056820 (*(uint8_t *)(0x56820U))
#undef DAT_00057340
#define DAT_00057340 (*(uint8_t *)(0x57340U))
#undef _DAT_00056810
#define _DAT_00056810 (*(float *)(0x56810U))
#undef _DAT_00056820
#define _DAT_00056820 (*(float *)(0x56820U))
#undef _DAT_00057340
#define _DAT_00057340 (*(float *)(0x57340U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x52c38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_52c38(float param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;

  fVar3 = (float10)param_1;
  fVar5 = (float10)0;
  if (fVar5 < fVar3) {
    iVar1 = 0;
    for (; (float10)_DAT_00056820 <= fVar3; fVar3 = fVar3 * (float10)_DAT_00056810) {
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
    fVar5 = fVar5 + fVar5 + (float10)iVar1 * (float10)_DAT_00057340;
  }
  return fVar5;
}
