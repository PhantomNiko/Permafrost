#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c818
 */

void recovered_2c818(undefined4 *param_1)

{
  unsigned char frame[64];

  if (param_1 != (undefined4 *)0x0) {
    recovered_21203(param_1[2]);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}
