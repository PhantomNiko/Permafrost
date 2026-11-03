#include "functions.h"
#undef DAT_00084058
#define DAT_00084058 (*(int *)(0x84058U))
#undef DAT_0008405c
#define DAT_0008405c (*(int *)(0x8405cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25954
 */

void recovered_25954(void)

{
  unsigned char frame[64];

  recovered_21203(DAT_00084058);
  recovered_21203(DAT_0008405c);
  DAT_00084058 = 0;
  DAT_0008405c = 0;
  return;
}
