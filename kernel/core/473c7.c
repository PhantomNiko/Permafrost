#include "functions.h"
#undef DAT_000484e4
#define DAT_000484e4 (*(uint8_t *)(0x484e4U))
#undef DAT_000484f8
#define DAT_000484f8 (*(uint8_t *)(0x484f8U))
#undef DAT_000484fc
#define DAT_000484fc (*(uint8_t *)(0x484fcU))
#undef DAT_00048500
#define DAT_00048500 (*(uint8_t *)(0x48500U))
#undef _DAT_000484e4
#define _DAT_000484e4 (*(float *)(0x484e4U))
#undef _DAT_000484f8
#define _DAT_000484f8 (*(float *)(0x484f8U))
#undef _DAT_000484fc
#define _DAT_000484fc (*(float *)(0x484fcU))
#undef _DAT_00048500
#define _DAT_00048500 (*(float *)(0x48500U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x473c7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_473c7(float param_1)

{
  unsigned char frame[64];

  for (; _DAT_000484e4 < param_1; param_1 = param_1 + _DAT_00048500) {
  }
  for (; param_1 < _DAT_000484f8; param_1 = param_1 + _DAT_000484fc) {
  }
  return (longdouble)(double)param_1;
}
