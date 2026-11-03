#include "functions.h"
#undef DAT_00045f30
#define DAT_00045f30 (*(uint8_t *)(0x45f30U))
#undef _DAT_00045f30
#define _DAT_00045f30 (*(float *)(0x45f30U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21546
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_21546(double param_1,uint param_2)

{
  unsigned char frame[64];

  uint uVar1;
  float10 fVar2;

  fVar2 = (float10)param_1;
  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    fVar2 = fVar2 + fVar2;
  }
  for (uVar1 = (int)param_2 >> 0x1f & param_2; uVar1 != 0; uVar1 = uVar1 + 1) {
    fVar2 = fVar2 * (float10)_DAT_00045f30;
  }
  return fVar2;
}
