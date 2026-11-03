#include "functions.h"
#undef _DAT_0002c8e8
#define _DAT_0002c8e8 (*(double *)(0x2c8e8U))
#undef _DAT_0002c8f0
#define _DAT_0002c8f0 (*(double *)(0x2c8f0U))
#undef _DAT_0002c8f8
#define _DAT_0002c8f8 (*(double *)(0x2c8f8U))
#undef _DAT_0002c900
#define _DAT_0002c900 (*(double *)(0x2c900U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21011
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_21011(double value)

{
  unsigned char frame[64];

  for (; _DAT_0002c8e8 < value; value = value + _DAT_0002c900) {
  }
  for (; value < _DAT_0002c8f0; value = value + _DAT_0002c8f8) {
  }
  return value;
}

