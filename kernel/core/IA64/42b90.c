#include "functions.h"
#undef DAT_00045f48
#define DAT_00045f48 (*(uint8_t *)(0x45f48U))
#undef DAT_00046254
#define DAT_00046254 (*(uint8_t *)(0x46254U))
#undef DAT_00046258
#define DAT_00046258 (*(uint8_t *)(0x46258U))
#undef _DAT_00045f48
#define _DAT_00045f48 (*(float *)(0x45f48U))
#undef _DAT_00046254
#define _DAT_00046254 (*(float *)(0x46254U))
#undef _DAT_00046258
#define _DAT_00046258 (*(float *)(0x46258U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_42b90(float param_1)

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
    for (; (float10)_DAT_00046254 <= fVar3; fVar3 = fVar3 * (float10)_DAT_00045f48) {
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
    fVar5 = fVar5 + fVar5 + (float10)iVar1 * (float10)_DAT_00046258;
  }
  return fVar5;
}
