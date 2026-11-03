#include "functions.h"
#undef DAT_00056824
#define DAT_00056824 (*(uint8_t *)(0x56824U))
#undef DAT_00056828
#define DAT_00056828 (*(uint8_t *)(0x56828U))
#undef DAT_0005682c
#define DAT_0005682c (*(uint8_t *)(0x5682cU))
#undef _DAT_00056824
#define _DAT_00056824 (*(float *)(0x56824U))
#undef _DAT_00056828
#define _DAT_00056828 (*(float *)(0x56828U))
#undef _DAT_0005682c
#define _DAT_0005682c (*(float *)(0x5682cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21985
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 recovered_21985(double param_1)

{
  unsigned char frame[64] = {0};

  float10 fVar1;
  float10 fVar2;
  double dVar3;

  dVar3 = recovered_219c7(param_1);
  fVar1 = (float10)dVar3;
  fVar2 = fVar1 * fVar1;
  return ((fVar2 * fVar2 * fVar2) / (float10)_DAT_0005682c +
         (fVar2 * fVar2) / (float10)_DAT_00056828 + (float10)1 + fVar2 / (float10)_DAT_00056824) *
         fVar1;
}
