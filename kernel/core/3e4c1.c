#include "functions.h"
#undef DAT_0003f228
#define DAT_0003f228 (*(uint8_t *)(0x3f228U))
#undef DAT_0003f23c
#define DAT_0003f23c (*(uint8_t *)(0x3f23cU))
#undef DAT_0003f240
#define DAT_0003f240 (*(uint8_t *)(0x3f240U))
#undef DAT_0003f244
#define DAT_0003f244 (*(uint8_t *)(0x3f244U))
#undef _DAT_0003f228
#define _DAT_0003f228 (*(float *)(0x3f228U))
#undef _DAT_0003f23c
#define _DAT_0003f23c (*(float *)(0x3f23cU))
#undef _DAT_0003f240
#define _DAT_0003f240 (*(float *)(0x3f240U))
#undef _DAT_0003f244
#define _DAT_0003f244 (*(float *)(0x3f244U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3e4c1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_3e4c1(float param_1)

{
  unsigned char frame[64];

  for (; _DAT_0003f228 < param_1; param_1 = param_1 + _DAT_0003f244) {
  }
  for (; param_1 < _DAT_0003f23c; param_1 = param_1 + _DAT_0003f240) {
  }
  return (longdouble)(double)param_1;
}

