#include "functions.h"
#undef DAT_0003efa0
#define DAT_0003efa0 (*(uint8_t *)(0x3efa0U))
#undef _DAT_0003efa0
#define _DAT_0003efa0 (*(float *)(0x3efa0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_21140(double param_1,uint param_2)

{
  unsigned char frame[64];

  uint uVar1;
  float10 fVar2;

  fVar2 = (float10)param_1;
  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    fVar2 = fVar2 + fVar2;
  }
  for (uVar1 = (int)param_2 >> 0x1f & param_2; uVar1 != 0; uVar1 = uVar1 + 1) {
    fVar2 = fVar2 * (float10)_DAT_0003efa0;
  }
  return fVar2;
}
