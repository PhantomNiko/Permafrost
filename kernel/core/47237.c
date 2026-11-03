#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x47237
 */

void recovered_47237(int *param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    iVar1 = 4;
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_21203(*(int *)(*param_1 + -4 + iVar1));
      recovered_25fea((undefined4 *)(*param_1 + iVar1));
      iVar1 = iVar1 + 0x2c;
    }
    recovered_21203(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
