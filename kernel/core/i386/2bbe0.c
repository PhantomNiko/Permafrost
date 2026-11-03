#include "functions.h"
#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bbe0
 */

void recovered_2bbe0(int param_1,int param_2,int param_3)

{
  unsigned char frame[68];

  char cVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;

  if (param_3 != 0) {
    local_14 = 0;
    for (iVar4 = 0; param_2 != iVar4; iVar4 = iVar4 + 1) {
      cVar1 = *(char *)(param_1 + iVar4);
      cVar3 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar3 = cVar1;
      }
      if ((cVar3 == ' ') || (cVar3 == '.')) {
        uVar5 = local_14;
      }
      else {
        uVar5 = local_14 + 1;
        if (0xf0 < uVar5) break;
        uVar2 = recovered_2bc72(cVar3);
        if ((char)uVar2 == '\0') {
          cVar3 = '_';
        }
        *(char *)(param_3 + local_14) = cVar3;
      }
      local_14 = uVar5;
    }
    *(undefined1 *)(param_3 + local_14) = 0;
  }
  return;
}
