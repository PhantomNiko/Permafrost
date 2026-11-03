#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25400
 */

void recovered_25400(int param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x40) = 0;
  recovered_23194();
  recovered_2de18((undefined4 *)(param_1 + 0x30));
  recovered_2de18((undefined4 *)(param_1 + 0x24));
  return;
}
