#include "functions.h"
#undef DAT_00042350
#define DAT_00042350 (*(uint8_t *)(0x42350U))
#undef DAT_00042354
#define DAT_00042354 (*(uint8_t *)(0x42354U))
#undef DAT_00042358
#define DAT_00042358 (*(uint8_t *)(0x42358U))
#undef _DAT_00042350
#define _DAT_00042350 (*(float *)(0x42350U))
#undef _DAT_00042354
#define _DAT_00042354 (*(float *)(0x42354U))
#undef _DAT_00042358
#define _DAT_00042358 (*(float *)(0x42358U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2136e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_2136e(double param_1)

{
  unsigned char frame[64];

  float10 fVar1;
  double dVar2;

  dVar2 = recovered_21336(param_1);
  fVar1 = (float10)dVar2 * (float10)dVar2;
  return (fVar1 * fVar1 * fVar1) / (float10)_DAT_00042358 +
         (fVar1 * fVar1) / (float10)_DAT_00042354 + (float10)1 + fVar1 * (float10)_DAT_00042350;
}
