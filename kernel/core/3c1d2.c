#include "functions.h"
#undef DAT_0007cfdc
#define DAT_0007cfdc (*(int *)(0x7cfdcU))
#undef DAT_0007cfe0
#define DAT_0007cfe0 (*(int *)(0x7cfe0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c1d2
 */

void recovered_3c1d2(void)

{
  unsigned char frame[64];

  if (DAT_0007cfdc == 0) {
    return;
  }
  DAT_0007cfdc = DAT_0007cfdc + -1;
  recovered_41929((int *)(DAT_0007cfdc * 0xc + DAT_0007cfe0));
  return;
}
