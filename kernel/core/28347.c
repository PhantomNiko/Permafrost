#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28347
 */

void recovered_28347(int param_1,int param_2)

{
  unsigned char frame[64];

  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (param_2 != 0) {
    iVar4 = 8;
    do {
      iVar2 = iVar4;
      if (iVar2 == 0) break;
      iVar4 = iVar2 + -1;
    } while (*(char *)(param_1 + -1 + iVar2) == ' ');
    for (iVar4 = 0; (iVar4 != -3 && (*(char *)(param_1 + 10 + iVar4) == ' ')); iVar4 = iVar4 + -1) {
    }
    for (iVar6 = 0; iVar2 != iVar6; iVar6 = iVar6 + 1) {
      bVar1 = *(byte *)(param_1 + iVar6);
      bVar3 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar3 = bVar1;
      }
      *(byte *)(param_2 + iVar6) = bVar3;
    }
    if (iVar4 != -3) {
      *(undefined1 *)(param_2 + iVar2) = 0x2e;
      iVar2 = iVar6;
      for (iVar5 = 0; iVar2 = iVar2 + 1, iVar4 + 3 != iVar5; iVar5 = iVar5 + 1) {
        bVar1 = *(byte *)(param_1 + 8 + iVar5);
        bVar3 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar3 = bVar1;
        }
        *(byte *)(param_2 + iVar2) = bVar3;
      }
    }
    *(undefined1 *)(param_2 + iVar2) = 0;
  }
  return;
}
