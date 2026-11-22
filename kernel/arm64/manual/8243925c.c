/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8243925c(long param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;

  if ((param_1 != 0) && (1 < param_3)) {
    bVar4 = (byte)(param_4 >> 8);
    if (param_2 == 5) {
      puVar1 = (undefined4 *)(param_1 + (ulong)param_3 * 4);
      uVar3 = *puVar1;
      *(char *)puVar1 = (char)param_4;
      *(byte *)((long)puVar1 + 1) = bVar4;
      *(char *)((long)puVar1 + 2) = (char)(param_4 >> 0x10);
      *(byte *)((long)puVar1 + 3) =
           (byte)((uint)uVar3 >> 0x18) & 0xf0 | (byte)(param_4 >> 0x18) & 0xf;
    }
    else {
      if (param_2 == 4) {
        *(short *)(param_1 + (ulong)param_3 * 2) = (short)param_4;
        return;
      }
      if (param_2 == 3) {
        uVar2 = param_3 + (param_3 >> 1);
        if ((param_3 & 1) == 0) {
          *(char *)(param_1 + (ulong)uVar2) = (char)param_4;
          bVar4 = *(byte *)(param_1 + (ulong)(uVar2 + 1)) & 0xf0 | bVar4 & 0xf;
        }
        else {
          *(byte *)(param_1 + (ulong)uVar2) =
               *(byte *)(param_1 + (ulong)uVar2) & 0xf | (byte)(param_4 << 4);
          bVar4 = (byte)(param_4 >> 4);
        }
        *(byte *)(param_1 + (ulong)(uVar2 + 1)) = bVar4;
        return;
      }
    }
  }
  return;
}
