#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37719
 */

void recovered_37719(char *param_1)

{
  unsigned char frame[64] = {0};

  for (; (param_1 != (char *)0x0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    recovered_378c8(*param_1);
  }
  return;
}
