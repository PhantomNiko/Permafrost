#include "functions.h"
#undef DAT_00056810
#define DAT_00056810 (*(uint8_t *)(0x56810U))
#undef DAT_00056830
#define DAT_00056830 (*(uint8_t *)(0x56830U))
#undef _DAT_00056810
#define _DAT_00056810 (*(float *)(0x56810U))
#undef _DAT_00056830
#define _DAT_00056830 (*(float *)(0x56830U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x236f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_000236f8(double param_1)

{
  unsigned char frame[64] = {0};

  float10 fVar1;
  float10 fVar2;

  fVar1 = recovered_217e7(param_1);
  if ((float10)_DAT_00056810 <= (float10)param_1 - fVar1) {
    fVar2 = (float10)1;
  }
  else {
    if ((float10)_DAT_00056830 < (float10)param_1 - fVar1) {
      return fVar1;
    }
    fVar2 = -(float10)1;
  }
  return fVar2 + fVar1;
}
