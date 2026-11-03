#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cc28
 */

void recovered_2cc28(int *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = 0x10;
    if (iVar1 != 0) {
      uVar2 = iVar1 * 2;
    }
    recovered_2cbd8(param_1,uVar2);
  }
  recovered_2cc96(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}
