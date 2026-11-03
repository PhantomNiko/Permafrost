#include "functions.h"
#undef DAT_00045f40
#define DAT_00045f40 (*(uint8_t *)(0x45f40U))
#undef DAT_00045f44
#define DAT_00045f44 (*(uint8_t *)(0x45f44U))
#undef DAT_00045f48
#define DAT_00045f48 (*(uint8_t *)(0x45f48U))
#undef _DAT_00045f40
#define _DAT_00045f40 (*(float *)(0x45f40U))
#undef _DAT_00045f44
#define _DAT_00045f44 (*(float *)(0x45f44U))
#undef _DAT_00045f48
#define _DAT_00045f48 (*(float *)(0x45f48U))
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
  return (fVar1 * fVar1 * fVar1) / (float10)_DAT_00045f48 +
         (fVar1 * fVar1) / (float10)_DAT_00045f44 + (float10)1 + fVar1 * (float10)_DAT_00045f40;
}
