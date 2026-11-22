/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_020a27a4 (*(char (*)[1])(0x20ec5baU))
uchar recovered_201e000(byte *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;

  if (0x11 < param_2) {
    if (((0x19 < param_2) &&
        (iVar6 = recovered_2002a00(param_1 + (param_2 - 0x12),str_020a27a4,0x11), iVar6 == 0)) &&
       (param_1[param_2 - 1] == 0)) {
      return '\x01';
    }
    bVar1 = param_1[1];
    if (((bVar1 < 2) &&
        (bVar2 = param_1[2],
        (0xfd < (byte)(bVar2 - 0xb) || 0xfc < (byte)(bVar2 - 4)) || bVar2 == 0xb)) &&
       ((*(short *)(param_1 + 0xc) != 0 &&
        ((*(short *)(param_1 + 0xe) != 0 &&
         (uVar5 = *(ushort *)(param_1 + 5), bVar1 != 0 || uVar5 == 0)))))) {
      bVar3 = param_1[7];
      bVar4 = param_1[0x10];
      if ((bVar1 != 1) ||
         ((((ulong)uVar5 != 0 && (bVar3 < 0x21)) &&
          ((0x101018000U >> ((ulong)bVar3 & 0x3f) & 1) != 0)))) {
        uVar7 = bVar2 - 8;
        if (bVar2 < 8) {
          uVar7 = (uint)bVar2;
        }
        if (uVar7 == 3) {
          if ((bVar4 == 0x10) || (bVar4 == 8)) goto LAB_0200d81b;
        }
        else if (uVar7 == 2) {
          if ((bVar4 < 0x21) && ((0x101018000U >> ((ulong)bVar4 & 0x3f) & 1) != 0))
          goto LAB_0200d81b;
        }
        else if ((uVar7 != 1) || ((bVar4 == 8 || (bVar4 == 0x10)))) {
LAB_0200d81b:
          uVar8 = (ulong)*param_1 + 0x12;
          if (bVar1 == 1) {
            uVar8 = uVar8 + (ulong)(bVar3 + 7 >> 3) * (ulong)uVar5;
          }
          return uVar8 < param_2;
        }
      }
    }
  }
  return '\0';
}
