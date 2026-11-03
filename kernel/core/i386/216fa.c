#include "functions.h"
#undef DAT_00045f34
#define DAT_00045f34 (*(uint8_t *)(0x45f34U))
#undef DAT_00045f38
#define DAT_00045f38 (*(uint8_t *)(0x45f38U))
#undef DAT_00045f3c
#define DAT_00045f3c (*(uint8_t *)(0x45f3cU))
#undef _DAT_00045f34
#define _DAT_00045f34 (*(float *)(0x45f34U))
#undef _DAT_00045f38
#define _DAT_00045f38 (*(float *)(0x45f38U))
#undef _DAT_00045f3c
#define _DAT_00045f3c (*(float *)(0x45f3cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x216fa
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_216fa(double param_1)

{
  unsigned char frame[64];

  float10 fVar1;
  float10 fVar2;
  double dVar3;

  dVar3 = recovered_2173c(param_1);
  fVar1 = (float10)dVar3;
  fVar2 = fVar1 * fVar1;
  return ((fVar2 * fVar2 * fVar2) / (float10)_DAT_00045f3c +
         (fVar2 * fVar2) / (float10)_DAT_00045f38 + (float10)1 + fVar2 / (float10)_DAT_00045f34) *
         fVar1;
}
