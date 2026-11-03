#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a3b0
 */

void recovered_2a3b0(int param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[64];

  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;

  if (1 < param_3 && param_1 != 0) {
    uVar2 = (undefined1)param_4;
    bVar3 = (byte)(param_4 >> 8);
    if (param_2 == 5) {
      uVar1 = *(undefined4 *)(param_1 + param_3 * 4);
      *(undefined1 *)(param_1 + param_3 * 4) = uVar2;
      *(byte *)(param_1 + 1 + param_3 * 4) = bVar3;
      *(char *)(param_1 + 2 + param_3 * 4) = (char)(param_4 >> 0x10);
      *(byte *)(param_1 + 3 + param_3 * 4) =
           (byte)(param_4 >> 0x18) & 0xf | (byte)((uint)uVar1 >> 0x18) & 0xf0;
    }
    else if (param_2 == 4) {
      *(short *)(param_1 + param_3 * 2) = (short)param_4;
    }
    else if (param_2 == 3) {
      iVar4 = (param_3 >> 1) + param_3;
      if ((param_3 & 1) == 0) {
        *(undefined1 *)(param_1 + iVar4) = uVar2;
        *(byte *)(param_1 + 1 + iVar4) = bVar3 & 0xf | *(byte *)(param_1 + 1 + iVar4) & 0xf0;
      }
      else {
        uVar5 = CONCAT11(uVar2,*(undefined1 *)(param_1 + iVar4)) & 0xff0f;
        *(byte *)(param_1 + iVar4) = (char)(uVar5 >> 8) << 4 | (byte)uVar5;
        *(char *)(param_1 + 1 + iVar4) = (char)(param_4 >> 4);
      }
    }
  }
  return;
}
