#include "functions.h"
#undef DAT_00046248
#define DAT_00046248 (*(uint8_t *)(0x46248U))
#undef DAT_0004625c
#define DAT_0004625c (*(uint8_t *)(0x4625cU))
#undef DAT_00046260
#define DAT_00046260 (*(uint8_t *)(0x46260U))
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#undef _DAT_00046248
#define _DAT_00046248 (*(float *)(0x46248U))
#undef _DAT_0004625c
#define _DAT_0004625c (*(float *)(0x4625cU))
#undef _DAT_00046260
#define _DAT_00046260 (*(float *)(0x46260U))
#undef _DAT_00046264
#define _DAT_00046264 (*(float *)(0x46264U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4546c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_4546c(float param_1)

{
  unsigned char frame[64];

  for (; _DAT_00046248 < param_1; param_1 = param_1 + _DAT_00046264) {
  }
  for (; param_1 < _DAT_0004625c; param_1 = param_1 + _DAT_00046260) {
  }
  return (longdouble)(double)param_1;
}
