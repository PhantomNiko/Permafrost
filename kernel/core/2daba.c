#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2daba
 */

void recovered_2daba(int param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x1c) = 0;
  recovered_23194();
  recovered_2db2e((undefined4 *)(param_1 + 0xc));
  return;
}
