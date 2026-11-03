#include "functions.h"
#undef _DAT_0002c8cc
#define _DAT_0002c8cc (*(float *)(0x2c8ccU))
#undef _DAT_0002c8d0
#define _DAT_0002c8d0 (*(float *)(0x2c8d0U))
#undef _DAT_0002c8d4
#define _DAT_0002c8d4 (*(float *)(0x2c8d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20fcf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_20fcf(double param_1)

{
  unsigned char frame[64];

  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  dVar3 = recovered_21011(param_1);
  fVar1 = (float10)dVar3;
  fVar2 = fVar1 * fVar1;
  return ((fVar2 * fVar2 * fVar2) / (float10)_DAT_0002c8d4 +
         (fVar2 * fVar2) / (float10)_DAT_0002c8d0 + (float10)1 + fVar2 / (float10)_DAT_0002c8cc) *
         fVar1;
}

