#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bfc5
 */

void recovered_2bfc5(int *param_1)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;
  uint uVar3;

  if (param_1 != (int *)0x0) {
    iVar2 = 0xf4;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      iVar1 = *(int *)(*param_1 + iVar2);
      if (iVar1 != 0) {
        recovered_21203(iVar1);
        *(undefined4 *)(*param_1 + iVar2) = 0;
      }
      iVar2 = iVar2 + 0x108;
    }
    recovered_21203(*param_1);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    recovered_21203(param_1[4]);
    param_1[4] = 0;
    param_1[5] = 0;
    recovered_21203(param_1[0x15]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}
