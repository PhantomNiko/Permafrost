#include "functions.h"
#undef DAT_0003efc0
#define DAT_0003efc0 (*(uint8_t *)(0x3efc0U))
#undef DAT_0003efc8
#define DAT_0003efc8 (*(uint8_t *)(0x3efc8U))
#undef DAT_0003efd0
#define DAT_0003efd0 (*(uint8_t *)(0x3efd0U))
#undef DAT_0003efd8
#define DAT_0003efd8 (*(uint8_t *)(0x3efd8U))
#undef _DAT_0003efc0
#define _DAT_0003efc0 (*(double *)(0x3efc0U))
#undef _DAT_0003efc8
#define _DAT_0003efc8 (*(double *)(0x3efc8U))
#undef _DAT_0003efd0
#define _DAT_0003efd0 (*(double *)(0x3efd0U))
#undef _DAT_0003efd8
#define _DAT_0003efd8 (*(double *)(0x3efd8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21336
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_21336(double value)

{
  unsigned char frame[64];

  for (; _DAT_0003efc0 < value; value = value + _DAT_0003efd8) {
  }
  for (; value < _DAT_0003efc8; value = value + _DAT_0003efd0) {
  }
  return value;
}

