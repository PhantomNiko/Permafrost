#include "functions.h"
#undef DAT_00045f58
#define DAT_00045f58 (*(uint8_t *)(0x45f58U))
#undef DAT_00045f5c
#define DAT_00045f5c (*(uint8_t *)(0x45f5cU))
#undef DAT_00045f60
#define DAT_00045f60 (*(uint8_t *)(0x45f60U))
#undef _DAT_00045f58
#define _DAT_00045f58 (*(float *)(0x45f58U))
#undef _DAT_00045f5c
#define _DAT_00045f5c (*(float *)(0x45f5cU))
#undef _DAT_00045f60
#define _DAT_00045f60 (*(float *)(0x45f60U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21774
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_21774(double param_1)

{
  unsigned char frame[64];

  float10 fVar1;
  double dVar2;

  dVar2 = recovered_2173c(param_1);
  fVar1 = (float10)dVar2 * (float10)dVar2;
  return (fVar1 * fVar1 * fVar1) / (float10)_DAT_00045f60 +
         (fVar1 * fVar1) / (float10)_DAT_00045f5c + (float10)1 + fVar1 * (float10)_DAT_00045f58;
}
