#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4730a
 */

void recovered_4730a(undefined4 *param_1)

{
  unsigned char frame[64];

  uint uVar1;

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  recovered_21203(param_1[7]);
  for (uVar1 = 0; uVar1 < (uint)param_1[0xc]; uVar1 = uVar1 + 1) {
    recovered_21203(*(int *)(param_1[0xb] + uVar1 * 4));
  }
  recovered_21203(param_1[0xb]);
  recovered_25fea(param_1 + 0xd);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 1;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  return;
}
