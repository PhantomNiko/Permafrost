#include "functions.h"
#undef DAT_00056810
#define DAT_00056810 (*(uint8_t *)(0x56810U))
#undef DAT_00056814
#define DAT_00056814 (*(uint8_t *)(0x56814U))
#undef DAT_00056818
#define DAT_00056818 (*(uint8_t *)(0x56818U))
#undef DAT_0005681c
#define DAT_0005681c (*(uint8_t *)(0x5681cU))
#undef DAT_00056820
#define DAT_00056820 (*(uint8_t *)(0x56820U))
#undef DAT_00056840
#define DAT_00056840 (*(uint8_t *)(0x56840U))
#undef _DAT_00056810
#define _DAT_00056810 (*(float *)(0x56810U))
#undef _DAT_00056814
#define _DAT_00056814 (*(float *)(0x56814U))
#undef _DAT_00056818
#define _DAT_00056818 (*(float *)(0x56818U))
#undef _DAT_0005681c
#define _DAT_0005681c (*(float *)(0x5681cU))
#undef _DAT_00056820
#define _DAT_00056820 (*(float *)(0x56820U))
#undef _DAT_00056840
#define _DAT_00056840 (*(double *)(0x56840U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x218ad
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_218ad(double param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;

  fVar3 = (float10)param_1;
  fVar6 = (float10)0;
  if (fVar3 <= fVar6) {
    fVar6 = (float10)_DAT_00056814;
  }
  else {
    iVar1 = 0;
    for (; (float10)_DAT_00056818 < fVar3; fVar3 = fVar3 * (float10)_DAT_00056810) {
      iVar1 = iVar1 + 1;
    }
    for (; fVar3 < (float10)_DAT_0005681c; fVar3 = fVar3 + fVar3) {
      iVar1 = iVar1 + -1;
    }
    fVar4 = (float10)1;
    fVar5 = (-fVar4 + fVar3) / (fVar3 + fVar4);
    fVar3 = fVar5 * fVar5;
    for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
      fVar6 = fVar5 / fVar4 + fVar6;
      fVar5 = fVar5 * fVar3;
      fVar4 = fVar4 + (float10)_DAT_00056820;
    }
    fVar6 = fVar6 + fVar6 + (float10)iVar1 * (float10)_DAT_00056840;
  }
  return fVar6;
}
