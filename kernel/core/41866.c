#include "functions.h"
#undef DAT_000425e0
#define DAT_000425e0 (*(uint8_t *)(0x425e0U))
#undef DAT_000425f4
#define DAT_000425f4 (*(uint8_t *)(0x425f4U))
#undef DAT_000425f8
#define DAT_000425f8 (*(uint8_t *)(0x425f8U))
#undef DAT_000425fc
#define DAT_000425fc (*(uint8_t *)(0x425fcU))
#undef _DAT_000425e0
#define _DAT_000425e0 (*(float *)(0x425e0U))
#undef _DAT_000425f4
#define _DAT_000425f4 (*(float *)(0x425f4U))
#undef _DAT_000425f8
#define _DAT_000425f8 (*(float *)(0x425f8U))
#undef _DAT_000425fc
#define _DAT_000425fc (*(float *)(0x425fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41866
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_41866(float param_1)

{
  unsigned char frame[64];

  for (; _DAT_000425e0 < param_1; param_1 = param_1 + _DAT_000425fc) {
  }
  for (; param_1 < _DAT_000425f4; param_1 = param_1 + _DAT_000425f8) {
  }
  return (longdouble)(double)param_1;
}
