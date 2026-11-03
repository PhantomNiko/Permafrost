#include "functions.h"
#undef DAT_000481f0
#define DAT_000481f0 (*(uint8_t *)(0x481f0U))
#undef DAT_000481f8
#define DAT_000481f8 (*(uint8_t *)(0x481f8U))
#undef DAT_00048200
#define DAT_00048200 (*(uint8_t *)(0x48200U))
#undef DAT_00048208
#define DAT_00048208 (*(uint8_t *)(0x48208U))
#undef _DAT_000481f0
#define _DAT_000481f0 (*(double *)(0x481f0U))
#undef _DAT_000481f8
#define _DAT_000481f8 (*(double *)(0x481f8U))
#undef _DAT_00048200
#define _DAT_00048200 (*(double *)(0x48200U))
#undef _DAT_00048208
#define _DAT_00048208 (*(double *)(0x48208U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2173c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_2173c(double value)

{
  unsigned char frame[64];

  for (; _DAT_000481f0 < value; value = value + _DAT_00048208) {
  }
  for (; value < _DAT_000481f8; value = value + _DAT_00048200) {
  }
  return value;
}
