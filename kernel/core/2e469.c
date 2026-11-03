#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e469
 */

uint recovered_2e469(int param_1)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;

  if (param_1 != 0) {
    in_EAX = recovered_213af(param_1,0,0x1c);
  }
  return in_EAX;
}
