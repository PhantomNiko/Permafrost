#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x270f9
 */

void recovered_270f9(uint *param_1,uint param_2,uint param_3,undefined1 param_4,undefined1 param_5,
               undefined1 param_6)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  
  if ((((param_1 != (uint *)0x0) && ((char)param_1[3] == '\x01')) &&
      (uVar1 = param_1[2], -1 < (int)(param_3 | param_2) && uVar1 != 0)) &&
     ((param_2 < *param_1 && (param_3 < param_1[1])))) {
    iVar2 = *param_1 * param_3 + param_2;
    *(undefined1 *)(uVar1 + iVar2 * 4) = param_4;
    *(undefined1 *)(uVar1 + 1 + iVar2 * 4) = param_5;
    *(undefined1 *)(uVar1 + 2 + iVar2 * 4) = param_6;
    *(undefined1 *)(uVar1 + 3 + iVar2 * 4) = 0xff;
  }
  return;
}

