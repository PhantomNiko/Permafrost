#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27c0e
 */

void recovered_27c0e(char *param_1)

{
  unsigned char frame[64];

  for (; (param_1 != (char *)0x0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    recovered_27dbd(*param_1);
  }
  return;
}

