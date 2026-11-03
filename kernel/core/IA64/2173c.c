#include "functions.h"
#undef DAT_00045f68
#define DAT_00045f68 (*(uint8_t *)(0x45f68U))
#undef DAT_00045f70
#define DAT_00045f70 (*(uint8_t *)(0x45f70U))
#undef DAT_00045f78
#define DAT_00045f78 (*(uint8_t *)(0x45f78U))
#undef DAT_00045f80
#define DAT_00045f80 (*(uint8_t *)(0x45f80U))
#undef _DAT_00045f68
#define _DAT_00045f68 (*(double *)(0x45f68U))
#undef _DAT_00045f70
#define _DAT_00045f70 (*(double *)(0x45f70U))
#undef _DAT_00045f78
#define _DAT_00045f78 (*(double *)(0x45f78U))
#undef _DAT_00045f80
#define _DAT_00045f80 (*(double *)(0x45f80U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2173c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_2173c(double value)

{
  unsigned char frame[64];

  for (; _DAT_00045f68 < value; value = value + _DAT_00045f80) {
  }
  for (; value < _DAT_00045f70; value = value + _DAT_00045f78) {
  }
  return value;
}
