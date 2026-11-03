#include "functions.h"
#undef DAT_00093900
#define DAT_00093900 (*(int *)(0x93900U))
#undef DAT_00093904
#define DAT_00093904 (*(int *)(0x93904U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f715
 */

void recovered_4f715(void)

{
  unsigned char frame[64] = {0};

  if (DAT_00093900 == 0) {
    return;
  }
  DAT_00093900 = DAT_00093900 + -1;
  recovered_55328((int *)(DAT_00093900 * 0xc + DAT_00093904));
  return;
}
