#include "functions.h"
#undef DAT_00084074
#define DAT_00084074 (*(int *)(0x84074U))
#undef DAT_00084078
#define DAT_00084078 (*(int *)(0x84078U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41426
 */

void recovered_41426(void)

{
  unsigned char frame[64];

  if (DAT_00084074 == 0) {
    return;
  }
  DAT_00084074 = DAT_00084074 + -1;
  recovered_47237((int *)(DAT_00084074 * 0xc + DAT_00084078));
  return;
}
