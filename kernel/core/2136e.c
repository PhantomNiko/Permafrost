#include "functions.h"
#undef DAT_0003efb0
#define DAT_0003efb0 (*(uint8_t *)(0x3efb0U))
#undef DAT_0003efb4
#define DAT_0003efb4 (*(uint8_t *)(0x3efb4U))
#undef DAT_0003efb8
#define DAT_0003efb8 (*(uint8_t *)(0x3efb8U))
#undef _DAT_0003efb0
#define _DAT_0003efb0 (*(float *)(0x3efb0U))
#undef _DAT_0003efb4
#define _DAT_0003efb4 (*(float *)(0x3efb4U))
#undef _DAT_0003efb8
#define _DAT_0003efb8 (*(float *)(0x3efb8U))
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
  return (fVar1 * fVar1 * fVar1) / (float10)_DAT_0003efb8 +
         (fVar1 * fVar1) / (float10)_DAT_0003efb4 + (float10)1 + fVar1 * (float10)_DAT_0003efb0;
}
