#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b424
 */

int recovered_2b424(int *param_1,undefined1 *param_2)

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
    recovered_29a7c(param_1,uVar1);
    iVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar2) = *param_2;
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 + 1 + *param_1 + -1;
}
