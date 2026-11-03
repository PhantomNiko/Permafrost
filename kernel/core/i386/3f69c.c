#include "functions.h"
#undef DAT_00082074
#define DAT_00082074 (*(int *)(0x82074U))
#undef DAT_00082078
#define DAT_00082078 (*(int *)(0x82078U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f69c
 */

void recovered_3f69c(void)

{
  unsigned char frame[64];

  if (DAT_00082074 == 0) {
    return;
  }
  DAT_00082074 = DAT_00082074 + -1;
  recovered_45514((int *)(DAT_00082074 * 0xc + DAT_00082078));
  return;
}
