#include "functions.h"
#undef DAT_00042344
#define DAT_00042344 (*(uint8_t *)(0x42344U))
#undef DAT_00042348
#define DAT_00042348 (*(uint8_t *)(0x42348U))
#undef DAT_0004234c
#define DAT_0004234c (*(uint8_t *)(0x4234cU))
#undef _DAT_00042344
#define _DAT_00042344 (*(float *)(0x42344U))
#undef _DAT_00042348
#define _DAT_00042348 (*(float *)(0x42348U))
#undef _DAT_0004234c
#define _DAT_0004234c (*(float *)(0x4234cU))
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
  return ((fVar2 * fVar2 * fVar2) / (float10)_DAT_0004234c +
         (fVar2 * fVar2) / (float10)_DAT_00042348 + (float10)1 + fVar2 / (float10)_DAT_00042344) *
         fVar1;
}
