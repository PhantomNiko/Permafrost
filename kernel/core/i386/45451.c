#include "functions.h"
#undef DAT_00046230
#define DAT_00046230 (*(uint8_t *)(0x46230U))
#undef DAT_00046244
#define DAT_00046244 (*(uint8_t *)(0x46244U))
#undef DAT_00046248
#define DAT_00046248 (*(uint8_t *)(0x46248U))
#undef DAT_0004624c
#define DAT_0004624c (*(uint8_t *)(0x4624cU))
#undef _DAT_00046230
#define _DAT_00046230 (*(float *)(0x46230U))
#undef _DAT_00046244
#define _DAT_00046244 (*(float *)(0x46244U))
#undef _DAT_00046248
#define _DAT_00046248 (*(float *)(0x46248U))
#undef _DAT_0004624c
#define _DAT_0004624c (*(float *)(0x4624cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45451
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_45451(float param_1)

{
  unsigned char frame[64];

  for (; _DAT_00046230 < param_1; param_1 = param_1 + _DAT_0004624c) {
  }
  for (; param_1 < _DAT_00046244; param_1 = param_1 + _DAT_00046248) {
  }
  return (longdouble)(double)param_1;
}
