#include "functions.h"
#undef DAT_000481d4
#define DAT_000481d4 (*(uint8_t *)(0x481d4U))
#undef DAT_000481d8
#define DAT_000481d8 (*(uint8_t *)(0x481d8U))
#undef DAT_000481dc
#define DAT_000481dc (*(uint8_t *)(0x481dcU))
#undef _DAT_000481d4
#define _DAT_000481d4 (*(float *)(0x481d4U))
#undef _DAT_000481d8
#define _DAT_000481d8 (*(float *)(0x481d8U))
#undef _DAT_000481dc
#define _DAT_000481dc (*(float *)(0x481dcU))
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
  return ((fVar2 * fVar2 * fVar2) / (float10)_DAT_000481dc +
         (fVar2 * fVar2) / (float10)_DAT_000481d8 + (float10)1 + fVar2 / (float10)_DAT_000481d4) *
         fVar1;
}
