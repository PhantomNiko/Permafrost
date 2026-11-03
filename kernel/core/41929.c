#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41929
 */

void recovered_41929(int *param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    iVar1 = 4;
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_20dfd(*(int *)(*param_1 + -4 + iVar1));
      recovered_2aec1((undefined4 *)(*param_1 + iVar1));
      iVar1 = iVar1 + 0x2c;
    }
    recovered_20dfd(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
