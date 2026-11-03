#include "functions.h"
#undef DAT_000481d0
#define DAT_000481d0 (*(uint8_t *)(0x481d0U))
#undef DAT_000484f0
#define DAT_000484f0 (*(uint8_t *)(0x484f0U))
#undef DAT_000484f4
#define DAT_000484f4 (*(uint8_t *)(0x484f4U))
#undef _DAT_000481d0
#define _DAT_000481d0 (*(float *)(0x481d0U))
#undef _DAT_000484f0
#define _DAT_000484f0 (*(float *)(0x484f0U))
#undef _DAT_000484f4
#define _DAT_000484f4 (*(float *)(0x484f4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_44960(float param_1)

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
    for (; (float10)_DAT_000484f0 <= fVar3; fVar3 = fVar3 * (float10)_DAT_000481d0) {
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
    fVar5 = fVar5 + fVar5 + (float10)iVar1 * (float10)_DAT_000484f4;
  }
  return fVar5;
}
