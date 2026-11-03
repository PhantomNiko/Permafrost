#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e133
 */

undefined4 recovered_2e133(int param_1)

{
  unsigned char frame[64];

  char *pcVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 != 0) {
    iVar2 = 0;
    if (*(short *)(param_1 + 0x1fe) != -0x55ab) {
      return 0;
    }
    do {
      if (iVar2 == 0x1b8) {
        iVar2 = -0x42;
        uVar3 = 0x1b8;
        do {
          uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),iVar2 == 0);
          if (iVar2 == 0) {
            return uVar3;
          }
          pcVar1 = (char *)(param_1 + 0x1fe + iVar2);
          iVar2 = iVar2 + 1;
        } while (*pcVar1 == '\0');
        return uVar3;
      }
      pcVar1 = (char *)(param_1 + iVar2);
      iVar2 = iVar2 + 1;
    } while (*pcVar1 == '\0');
  }
  return 0;
}
