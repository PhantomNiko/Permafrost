#include "functions.h"
#undef DAT_00056848
#define DAT_00056848 (*(uint8_t *)(0x56848U))
#undef DAT_00056850
#define DAT_00056850 (*(uint8_t *)(0x56850U))
#undef DAT_00056858
#define DAT_00056858 (*(uint8_t *)(0x56858U))
#undef DAT_00056860
#define DAT_00056860 (*(uint8_t *)(0x56860U))
#undef _DAT_00056848
#define _DAT_00056848 (*(double *)(0x56848U))
#undef _DAT_00056850
#define _DAT_00056850 (*(double *)(0x56850U))
#undef _DAT_00056858
#define _DAT_00056858 (*(double *)(0x56858U))
#undef _DAT_00056860
#define _DAT_00056860 (*(double *)(0x56860U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x219c7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_219c7(double value)

{
  unsigned char frame[64] = {0};

  for (; _DAT_00056848 < value; value = value + _DAT_00056860) {
  }
  for (; value < _DAT_00056850; value = value + _DAT_00056858) {
  }
  return value;
}
