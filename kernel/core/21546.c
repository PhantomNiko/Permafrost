#include "functions.h"
#undef DAT_000481d0
#define DAT_000481d0 (*(uint8_t *)(0x481d0U))
#undef _DAT_000481d0
#define _DAT_000481d0 (*(float *)(0x481d0U))
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
    fVar2 = fVar2 * (float10)_DAT_000481d0;
  }
  return fVar2;
}
