#include "functions.h"
#undef DAT_00056830
#define DAT_00056830 (*(uint8_t *)(0x56830U))
#undef DAT_00056834
#define DAT_00056834 (*(uint8_t *)(0x56834U))
#undef DAT_00056838
#define DAT_00056838 (*(uint8_t *)(0x56838U))
#undef _DAT_00056830
#define _DAT_00056830 (*(float *)(0x56830U))
#undef _DAT_00056834
#define _DAT_00056834 (*(float *)(0x56834U))
#undef _DAT_00056838
#define _DAT_00056838 (*(float *)(0x56838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x219ff
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_219ff(double param_1)

{
  unsigned char frame[64] = {0};

  float10 fVar1;
  double dVar2;

  dVar2 = recovered_219c7(param_1);
  fVar1 = (float10)dVar2 * (float10)dVar2;
  return (fVar1 * fVar1 * fVar1) / (float10)_DAT_00056838 +
         (fVar1 * fVar1) / (float10)_DAT_00056834 + (float10)1 + fVar1 * (float10)_DAT_00056830;
}
