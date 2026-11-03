#include "functions.h"
#undef DAT_00045f50
#define DAT_00045f50 (*(uint8_t *)(0x45f50U))
#undef DAT_00045f58
#define DAT_00045f58 (*(uint8_t *)(0x45f58U))
#undef DAT_00045f60
#define DAT_00045f60 (*(uint8_t *)(0x45f60U))
#undef DAT_00045f68
#define DAT_00045f68 (*(uint8_t *)(0x45f68U))
#undef _DAT_00045f50
#define _DAT_00045f50 (*(double *)(0x45f50U))
#undef _DAT_00045f58
#define _DAT_00045f58 (*(double *)(0x45f58U))
#undef _DAT_00045f60
#define _DAT_00045f60 (*(double *)(0x45f60U))
#undef _DAT_00045f68
#define _DAT_00045f68 (*(double *)(0x45f68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2173c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_2173c(double value)

{
  unsigned char frame[64];

  for (; _DAT_00045f50 < value; value = value + _DAT_00045f68) {
  }
  for (; value < _DAT_00045f58; value = value + _DAT_00045f60) {
  }
  return value;
}
