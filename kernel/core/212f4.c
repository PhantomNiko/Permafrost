#include "functions.h"
#undef DAT_0003efa4
#define DAT_0003efa4 (*(uint8_t *)(0x3efa4U))
#undef DAT_0003efa8
#define DAT_0003efa8 (*(uint8_t *)(0x3efa8U))
#undef DAT_0003efac
#define DAT_0003efac (*(uint8_t *)(0x3efacU))
#undef _DAT_0003efa4
#define _DAT_0003efa4 (*(float *)(0x3efa4U))
#undef _DAT_0003efa8
#define _DAT_0003efa8 (*(float *)(0x3efa8U))
#undef _DAT_0003efac
#define _DAT_0003efac (*(float *)(0x3efacU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x212f4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_212f4(double param_1)

{
  unsigned char frame[64];

  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  dVar3 = recovered_21336(param_1);
  fVar1 = (float10)dVar3;
  fVar2 = fVar1 * fVar1;
  return ((fVar2 * fVar2 * fVar2) / (float10)_DAT_0003efac +
         (fVar2 * fVar2) / (float10)_DAT_0003efa8 + (float10)1 + fVar2 / (float10)_DAT_0003efa4) *
         fVar1;
}

