#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20c3e
 */

void recovered_20c3e(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64];

  int iVar1;
  
  if (param_3 != 0 && param_1 != param_2) {
    if (param_1 < param_2) {
      for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
        *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
      }
    }
    else {
      while (param_3 != 0) {
        *(undefined1 *)((param_1 - 1) + param_3) = *(undefined1 *)((param_2 - 1) + param_3);
        param_3 = param_3 + -1;
      }
    }
  }
  return;
}

