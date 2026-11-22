/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_206ec40(long param_1,ulong param_2,long *param_3,long param_4,byte *param_5,
                       char param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *out;
  byte *pbVar1;
  uint128 auVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  ushort uVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  bool bVar18;

  lVar17 = 0x20;
  if ((param_4 != 0 && param_6 == '\x01') &&
     (uVar3 = recovered_2002e80((char *)param_4), uVar3 != 0)) {
    PF_PART8(auVar2, 8) = 0;
    PF_PART8(auVar2, 0) = uVar3 + 0xc;
    lVar17 = (SUB168(auVar2 * ZEXT816(0x4ec4ec4ec4ec4ec5),8) & 0xfffffffffffffffc) * 8 + 0x20;
  }
  if ((param_5 == (byte *)0x0 || (param_3 == (long *)0x0 || param_1 == 0)) ||
     (lVar12 = *param_3, param_2 < (ulong)(lVar17 + lVar12))) {
    return '\0';
  }
  if (param_6 != '\0') {
    if (param_4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = recovered_2002e80((char *)param_4);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uVar3 + 0xc) / 0xd;
      }
    }
    lVar12 = *param_3;
    if (uVar3 != 0) {
      bVar6 = (*param_5 >> 1 | *param_5 << 7) + param_5[1];
      bVar6 = (bVar6 >> 1 | bVar6 * -0x80) + param_5[2];
      bVar6 = (bVar6 >> 1 | bVar6 * -0x80) + param_5[3];
      bVar6 = (bVar6 >> 1 | bVar6 * -0x80) + param_5[4];
      bVar6 = (bVar6 >> 1 | bVar6 * -0x80) + param_5[5];
      bVar6 = (bVar6 >> 1 | bVar6 * -0x80) + param_5[6];
      bVar6 = (bVar6 >> 1 | bVar6 * -0x80) + param_5[7];
      bVar6 = (bVar6 >> 1 | bVar6 * -0x80) + param_5[8];
      bVar7 = (bVar6 >> 1 | bVar6 * -0x80) + param_5[9];
      bVar6 = param_5[10];
      lVar17 = 0;
      uVar15 = uVar3;
      uVar5 = uVar3 * 0xd;
      do {
        uVar14 = uVar5 - 0xd;
        out = (void *)(param_1 + lVar12);
        bVar8 = (char)uVar3 + (char)lVar17;
        bVar18 = lVar17 != 0;
        lVar17 = lVar17 + -1;
        bVar16 = bVar8 | 0x40;
        if (bVar18) {
          bVar16 = bVar8;
        }
        uVar4 = recovered_2002e80((char *)param_4);
        recovered_2002110(out,0,0x20);
        *(byte *)(param_1 + lVar12) = bVar16;
        *(undefined2 *)(param_1 + 0xb + lVar12) = 0xf;
        *(byte *)(param_1 + 0xd + lVar12) = (bVar7 >> 1 | bVar7 * -0x80) + bVar6;
        *(undefined2 *)(param_1 + 0x1a + lVar12) = 0;
        if (uVar14 < uVar4) {
          uVar5 = uVar5 - 0xc;
          uVar9 = *(undefined1 *)(param_4 + uVar14);
        }
        else {
          uVar5 = uVar15 * 0xd - 0xd;
          uVar9 = 0;
        }
        *(undefined1 *)((long)out + 1) = uVar9;
        *(undefined1 *)((long)out + 2) = 0;
        if (uVar5 < uVar4) {
          uVar10 = (ushort)*(byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (uVar14 < uVar4) - 1;
        }
        else {
          uVar10 = (uVar14 < uVar4) - 1;
          uVar13 = 0xffff;
        }
        *(ushort *)((long)out + 3) = uVar10;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar10 = uVar13;
          uVar13 = (ushort)*pbVar1;
        }
        else {
          uVar10 = 0xffff;
        }
        *(ushort *)((long)out + 5) = uVar13;
        uVar13 = uVar10;
        uVar11 = 0xffff;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (ushort)*pbVar1;
          uVar11 = uVar10;
        }
        *(ushort *)((long)out + 7) = uVar13;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (ushort)*pbVar1;
          uVar10 = uVar11;
        }
        else {
          uVar10 = 0xffff;
          uVar13 = uVar11;
        }
        *(ushort *)((long)out + 9) = uVar13;
        uVar13 = uVar10;
        uVar11 = 0xffff;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (ushort)*pbVar1;
          uVar11 = uVar10;
        }
        *(ushort *)((long)out + 0xe) = uVar13;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (ushort)*pbVar1;
          uVar10 = uVar11;
        }
        else {
          uVar10 = 0xffff;
          uVar13 = uVar11;
        }
        *(ushort *)((long)out + 0x10) = uVar13;
        uVar13 = uVar10;
        uVar11 = 0xffff;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (ushort)*pbVar1;
          uVar11 = uVar10;
        }
        *(ushort *)((long)out + 0x12) = uVar13;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (ushort)*pbVar1;
          uVar10 = uVar11;
        }
        else {
          uVar10 = 0xffff;
          uVar13 = uVar11;
        }
        *(ushort *)((long)out + 0x14) = uVar13;
        uVar13 = uVar10;
        uVar11 = 0xffff;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (ushort)*pbVar1;
          uVar11 = uVar10;
        }
        *(ushort *)((long)out + 0x16) = uVar13;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (ushort)*pbVar1;
          uVar10 = uVar11;
        }
        else {
          uVar10 = 0xffff;
          uVar13 = uVar11;
        }
        *(ushort *)((long)out + 0x18) = uVar13;
        uVar13 = uVar10;
        uVar11 = 0xffff;
        if (uVar5 < uVar4) {
          pbVar1 = (byte *)(param_4 + uVar5);
          uVar5 = uVar5 + 1;
          uVar13 = (ushort)*pbVar1;
          uVar11 = uVar10;
        }
        *(ushort *)((long)out + 0x1c) = uVar13;
        if (uVar5 < uVar4) {
          uVar11 = (ushort)*(byte *)(param_4 + uVar5);
        }
        *(ushort *)((long)out + 0x1e) = uVar11;
        lVar12 = *param_3 + 0x20;
        *param_3 = lVar12;
        uVar15 = uVar15 - 1;
        uVar5 = uVar14;
      } while (uVar3 + lVar17 != 0);
    }
  }
  recovered_2002110((void *)(param_1 + lVar12),0,0x20);
  recovered_2001410((void *)(param_1 + lVar12),param_5,0xb);
  *(undefined1 *)(param_1 + 0xb + lVar12) = param_7;
  *(char *)(param_1 + 0x14 + lVar12) = (char)((uint)param_8 >> 0x10);
  *(char *)(param_1 + 0x15 + lVar12) = (char)((uint)param_8 >> 0x18);
  *(char *)(param_1 + 0x1a + lVar12) = (char)param_8;
  *(char *)(param_1 + 0x1b + lVar12) = (char)((uint)param_8 >> 8);
  *(char *)(param_1 + 0x1c + lVar12) = (char)param_9;
  *(char *)(param_1 + 0x1d + lVar12) = (char)((uint)param_9 >> 8);
  *(char *)(param_1 + 0x1e + lVar12) = (char)((uint)param_9 >> 0x10);
  *(char *)(param_1 + 0x1f + lVar12) = (char)((uint)param_9 >> 0x18);
  *param_3 = *param_3 + 0x20;
  return '\x01';
}
