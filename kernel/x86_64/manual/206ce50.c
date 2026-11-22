/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_206ce50(long param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;

  if (1 < param_3 && param_1 != 0) {
    cVar4 = (char)param_4;
    bVar5 = (byte)(param_4 >> 8);
    if (param_2 == 5) {
      uVar3 = (ulong)param_3;
      uVar1 = *(undefined4 *)(param_1 + uVar3 * 4);
      *(char *)(param_1 + uVar3 * 4) = cVar4;
      *(byte *)(param_1 + 1 + uVar3 * 4) = bVar5;
      *(char *)(param_1 + 2 + uVar3 * 4) = (char)(param_4 >> 0x10);
      *(byte *)(param_1 + 3 + uVar3 * 4) =
           (byte)(param_4 >> 0x18) & 0xf | (byte)((uint)uVar1 >> 0x18) & 0xf0;
      return;
    }
    if (param_2 == 4) {
      *(short *)(param_1 + (ulong)param_3 * 2) = (short)param_4;
      return;
    }
    if (param_2 == 3) {
      uVar2 = (param_3 >> 1) + param_3;
      if ((param_3 & 1) == 0) {
        *(char *)(param_1 + (ulong)uVar2) = cVar4;
        uVar3 = (ulong)(uVar2 + 1);
        bVar5 = bVar5 & 0xf | *(byte *)(param_1 + uVar3) & 0xf0;
      }
      else {
        *(byte *)(param_1 + (ulong)uVar2) = cVar4 << 4 | *(byte *)(param_1 + (ulong)uVar2) & 0xf;
        bVar5 = (byte)(param_4 >> 4);
        uVar3 = (ulong)(uVar2 + 1);
      }
      *(byte *)(param_1 + uVar3) = bVar5;
      return;
    }
  }
  return;
}
