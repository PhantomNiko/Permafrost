#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x367e5
 */

void recovered_367e5(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (((param_1 != (int *)0x0) && ((char)param_1[3] == '\x01')) && (param_1[2] != 0)) {
    iVar1 = param_1[1];
    iVar2 = *param_1;
    for (iVar4 = 0; iVar1 * iVar2 != iVar4; iVar4 = iVar4 + 1) {
      iVar3 = param_1[2];
      *(undefined1 *)(iVar3 + iVar4 * 4) = param_2;
      *(undefined1 *)(iVar3 + 1 + iVar4 * 4) = param_3;
      *(undefined1 *)(iVar3 + 2 + iVar4 * 4) = param_4;
      *(undefined1 *)(iVar3 + 3 + iVar4 * 4) = 0xff;
    }
  }
  return;
}
