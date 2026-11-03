#include "functions.h"
#undef DAT_00042360
#define DAT_00042360 (*(uint8_t *)(0x42360U))
#undef DAT_00042368
#define DAT_00042368 (*(uint8_t *)(0x42368U))
#undef DAT_00042370
#define DAT_00042370 (*(uint8_t *)(0x42370U))
#undef DAT_00042378
#define DAT_00042378 (*(uint8_t *)(0x42378U))
#undef _DAT_00042360
#define _DAT_00042360 (*(double *)(0x42360U))
#undef _DAT_00042368
#define _DAT_00042368 (*(double *)(0x42368U))
#undef _DAT_00042370
#define _DAT_00042370 (*(double *)(0x42370U))
#undef _DAT_00042378
#define _DAT_00042378 (*(double *)(0x42378U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21336
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_21336(double value)

{
  unsigned char frame[64];

  for (; _DAT_00042360 < value; value = value + _DAT_00042378) {
  }
  for (; value < _DAT_00042368; value = value + _DAT_00042370) {
  }
  return value;
}
