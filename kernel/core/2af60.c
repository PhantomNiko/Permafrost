#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2af60
 */

void recovered_2af60(int param_1)

{
  unsigned char frame[64] = {0};

  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x10) * 3) < *(int *)(param_1 + 4) * 4 + 4U)) {
    recovered_2b022(param_1,*(int *)(param_1 + 4) * 2 + 2);
  }
  return;
}
