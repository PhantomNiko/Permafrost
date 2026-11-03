#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d394
 */

void recovered_2d394(int param_1)

{
  unsigned char frame[64] = {0};

  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x10) * 3) < *(int *)(param_1 + 4) * 4 + 4U)) {
    recovered_2d560(param_1,*(int *)(param_1 + 4) * 2 + 2);
  }
  return;
}
