#include "functions.h"
#undef DAT_0003efa0
#define DAT_0003efa0 (*(uint8_t *)(0x3efa0U))
#undef DAT_0003f234
#define DAT_0003f234 (*(uint8_t *)(0x3f234U))
#undef DAT_0003f238
#define DAT_0003f238 (*(uint8_t *)(0x3f238U))
#undef _DAT_0003efa0
#define _DAT_0003efa0 (*(float *)(0x3efa0U))
#undef _DAT_0003f234
#define _DAT_0003f234 (*(float *)(0x3f234U))
#undef _DAT_0003f238
#define _DAT_0003f238 (*(float *)(0x3f238U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c0cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_3c0cc(float param_1)

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
    for (; (float10)_DAT_0003f234 <= fVar3; fVar3 = fVar3 * (float10)_DAT_0003efa0) {
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
    fVar5 = fVar5 + fVar5 + (float10)iVar1 * (float10)_DAT_0003f238;
  }
  return fVar5;
}

