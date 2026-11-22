/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2050990(int incoming_ecx,int incoming_edx,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;

  if (1 < param_3 && incoming_ecx != 0) {
    uVar2 = (undefined1)param_4;
    bVar3 = (byte)(param_4 >> 8);
    if (incoming_edx == 5) {
      uVar1 = *(undefined4 *)(incoming_ecx + param_3 * 4);
      *(undefined1 *)(incoming_ecx + param_3 * 4) = uVar2;
      *(byte *)(incoming_ecx + 1 + param_3 * 4) = bVar3;
      *(char *)(incoming_ecx + 2 + param_3 * 4) = (char)(param_4 >> 0x10);
      *(byte *)(incoming_ecx + 3 + param_3 * 4) =
           (byte)(param_4 >> 0x18) & 0xf | (byte)((uint)uVar1 >> 0x18) & 0xf0;
    }
    else if (incoming_edx == 4) {
      *(short *)(incoming_ecx + param_3 * 2) = (short)param_4;
    }
    else if (incoming_edx == 3) {
      iVar4 = (param_3 >> 1) + param_3;
      if ((param_3 & 1) == 0) {
        *(undefined1 *)(incoming_ecx + iVar4) = uVar2;
        *(byte *)(incoming_ecx + 1 + iVar4) =
             bVar3 & 0xf | *(byte *)(incoming_ecx + 1 + iVar4) & 0xf0;
      }
      else {
        uVar5 = CONCAT11(uVar2,*(undefined1 *)(incoming_ecx + iVar4)) & 0xff0f;
        *(byte *)(incoming_ecx + iVar4) = (char)(uVar5 >> 8) << 4 | (byte)uVar5;
        *(char *)(incoming_ecx + 1 + iVar4) = (char)(param_4 >> 4);
      }
    }
  }
  return;
}
