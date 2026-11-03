#include "functions.h"
#undef DAT_00082058
#define DAT_00082058 (*(int *)(0x82058U))
#undef DAT_0008205c
#define DAT_0008205c (*(int *)(0x8205cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x259a8
 */

void recovered_259a8(void)

{
  unsigned char frame[64];

  recovered_21203(DAT_00082058);
  recovered_21203(DAT_0008205c);
  DAT_00082058 = 0;
  DAT_0008205c = 0;
  return;
}
