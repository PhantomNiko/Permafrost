#include "functions.h"
#undef DAT_00045f4c
#define DAT_00045f4c (*(uint8_t *)(0x45f4cU))
#undef DAT_00045f50
#define DAT_00045f50 (*(uint8_t *)(0x45f50U))
#undef DAT_00045f54
#define DAT_00045f54 (*(uint8_t *)(0x45f54U))
#undef _DAT_00045f4c
#define _DAT_00045f4c (*(float *)(0x45f4cU))
#undef _DAT_00045f50
#define _DAT_00045f50 (*(float *)(0x45f50U))
#undef _DAT_00045f54
#define _DAT_00045f54 (*(float *)(0x45f54U))
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
  return ((fVar2 * fVar2 * fVar2) / (float10)_DAT_00045f54 +
         (fVar2 * fVar2) / (float10)_DAT_00045f50 + (float10)1 + fVar2 / (float10)_DAT_00045f4c) *
         fVar1;
}
