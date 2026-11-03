#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4189e
 */

void recovered_4189e(int param_1)

{
  unsigned char frame[64];

  recovered_20dfd(*(int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  recovered_20dfd(*(int *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00028c9d((undefined4 *)(param_1 + 0x14));
  return;
}
