#include "functions.h"
#undef _DAT_0002c8d8
#define _DAT_0002c8d8 (*(float *)(0x2c8d8U))
#undef _DAT_0002c8dc
#define _DAT_0002c8dc (*(float *)(0x2c8dcU))
#undef _DAT_0002c8e0
#define _DAT_0002c8e0 (*(float *)(0x2c8e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21049
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_21049(double param_1)

{
  unsigned char frame[64];

  float10 fVar1;
  double dVar2;
  
  dVar2 = recovered_21011(param_1);
  fVar1 = (float10)dVar2 * (float10)dVar2;
  return (fVar1 * fVar1 * fVar1) / (float10)_DAT_0002c8e0 +
         (fVar1 * fVar1) / (float10)_DAT_0002c8dc + (float10)1 + fVar1 * (float10)_DAT_0002c8d8;
}

