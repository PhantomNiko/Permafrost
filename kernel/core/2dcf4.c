#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dcf4
 */

void recovered_2dcf4(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = param_1[1];
  if (iVar2 == param_1[2]) {
    uVar1 = 4;
    if (iVar2 != 0) {
      uVar1 = iVar2 * 2;
    }
    recovered_2722e(param_1,uVar1);
    iVar2 = param_1[1];
  }
  *(undefined4 *)(*param_1 + iVar2 * 4) = *param_2;
  param_1[1] = iVar2 + 1;
  return;
}
