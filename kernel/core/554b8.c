#include "functions.h"
#undef DAT_00057334
#define DAT_00057334 (*(uint8_t *)(0x57334U))
#undef DAT_00057344
#define DAT_00057344 (*(uint8_t *)(0x57344U))
#undef DAT_00057348
#define DAT_00057348 (*(uint8_t *)(0x57348U))
#undef DAT_0005734c
#define DAT_0005734c (*(uint8_t *)(0x5734cU))
#undef _DAT_00057334
#define _DAT_00057334 (*(float *)(0x57334U))
#undef _DAT_00057344
#define _DAT_00057344 (*(float *)(0x57344U))
#undef _DAT_00057348
#define _DAT_00057348 (*(float *)(0x57348U))
#undef _DAT_0005734c
#define _DAT_0005734c (*(float *)(0x5734cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x554b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_554b8(float param_1)

{
  unsigned char frame[64] = {0};

  for (; _DAT_00057334 < param_1; param_1 = param_1 + _DAT_0005734c) {
  }
  for (; param_1 < _DAT_00057344; param_1 = param_1 + _DAT_00057348) {
  }
  return (longdouble)(double)param_1;
}
