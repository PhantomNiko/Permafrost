#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44e1e
 */

void recovered_44e1e(undefined1 *param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  param_1[4] = param_3;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  return;
}
