/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_202a630(long param_1,ulong param_2,uint param_3,uint param_4,long *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  void *data;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  int iVar9;
  ulong uVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;

  uVar18 = (ulong)param_4;
  uVar19 = param_3 * uVar18;
  param_5[1] = 0;
  if (uVar19 <= (ulong)param_5[2]) {
    uVar17 = 0;
    goto LAB_0201ee32;
  }
  pvVar8 = recovered_201cb00(uVar19);
  data = (void *)*param_5;
  uVar17 = param_5[1];
  if (uVar17 != 0) {
    uVar10 = 0;
    if ((3 < uVar17) && (0x1f < (ulong)((long)pvVar8 - (long)data))) {
      if (uVar17 < 0x20) {
        uVar13 = 0;
      }
      else {
        uVar10 = uVar17 & 0xffffffffffffffe0;
        uVar13 = 0;
        do {
          uVar5 = ((undefined8 *)((long)data + uVar13))[1];
          puVar1 = (undefined8 *)((long)data + uVar13 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          *(undefined8 *)((long)pvVar8 + uVar13) = *(undefined8 *)((long)data + uVar13);
          ((undefined8 *)((long)pvVar8 + uVar13))[1] = uVar5;
          puVar1 = (undefined8 *)((long)pvVar8 + uVar13 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          uVar13 = uVar13 + 0x20;
        } while (uVar10 != uVar13);
        if (uVar17 == uVar10) goto LAB_0201edff;
        uVar13 = uVar10;
        if ((uVar17 & 0x1c) == 0) goto LAB_0201ed95;
      }
      uVar10 = uVar17 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)((long)pvVar8 + uVar13) = *(undefined4 *)((long)data + uVar13);
        uVar13 = uVar13 + 4;
      } while (uVar10 != uVar13);
      if (uVar17 == uVar10) goto LAB_0201edff;
    }
LAB_0201ed95:
    uVar14 = uVar17 & 3;
    uVar13 = uVar10;
    if (uVar14 != 0) {
      do {
        *(undefined1 *)((long)pvVar8 + uVar13) = *(undefined1 *)((long)data + uVar13);
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar10 - uVar17 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)pvVar8 + uVar13) = *(undefined1 *)((long)data + uVar13);
        *(undefined1 *)((long)pvVar8 + uVar13 + 1) = *(undefined1 *)((long)data + uVar13 + 1);
        *(undefined1 *)((long)pvVar8 + uVar13 + 2) = *(undefined1 *)((long)data + uVar13 + 2);
        *(undefined1 *)((long)pvVar8 + uVar13 + 3) = *(undefined1 *)((long)data + uVar13 + 3);
        uVar13 = uVar13 + 4;
      } while (uVar17 != uVar13);
    }
  }
LAB_0201edff:
  recovered_201cb60(data);
  *param_5 = (long)pvVar8;
  param_5[2] = uVar19;
  uVar17 = param_5[1];
LAB_0201ee32:
  while (uVar17 < uVar19) {
    *(undefined1 *)(*param_5 + uVar17) = 0;
    uVar17 = param_5[1] + 1;
    param_5[1] = uVar17;
  }
  if (param_4 == 0) {
    bVar22 = true;
  }
  else {
    uVar17 = 0;
    bVar22 = false;
    uVar19 = 0;
    do {
      bVar21 = param_3 != 0;
      if ((param_3 != 0) && (uVar19 < param_2)) {
        uVar10 = 0;
        do {
          uVar13 = uVar19 + 1;
          bVar2 = *(byte *)(param_1 + uVar19);
          uVar14 = (ulong)bVar2;
          iVar9 = (int)uVar10;
          if (bVar2 < 0x7f) {
            if (param_2 <= uVar13) {
              return bVar22;
            }
            if (param_3 - iVar9 <= (uint)bVar2) {
              return bVar22;
            }
            uVar14 = uVar14 + 1;
            uVar3 = *(undefined1 *)(param_1 + 1 + uVar19);
            if (bVar2 < 3) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              do {
                iVar12 = (int)uVar10;
                *(undefined1 *)(uVar17 + uVar10 * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar17 + (iVar12 + 1) * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar17 + (iVar12 + 2) * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar17 + (iVar12 + 3) * uVar18 + *param_5) = uVar3;
                uVar13 = uVar13 + 4;
                uVar10 = (ulong)(iVar12 + 4);
              } while (((uint)uVar14 & 0xfc) != uVar13);
            }
            uVar19 = uVar19 + 2;
            uVar10 = (ulong)((uint)uVar14 & 3);
            if ((uVar14 & 3) != 0) {
              uVar20 = (int)uVar13 + iVar9;
              do {
                *(undefined1 *)(uVar17 + uVar20 * uVar18 + *param_5) = uVar3;
                uVar20 = uVar20 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          else if (uVar14 == 0x80) {
            if (param_2 - uVar13 < 2) {
              return bVar22;
            }
            uVar11 = *(ushort *)(param_1 + 1 + uVar19);
            uVar4 = uVar11 >> 8;
            uVar11 = uVar11 << 8 | uVar4;
            uVar14 = (ulong)uVar11;
            if (param_3 - iVar9 <= uVar11 - 1) {
              return bVar22;
            }
            lVar15 = uVar19 + 3;
            if (param_2 - lVar15 < uVar14) {
              return bVar22;
            }
            if (uVar11 == 1) {
              uVar19 = 0;
            }
            else {
              lVar16 = uVar19 + param_1 + 4;
              uVar19 = 0;
              do {
                *(undefined1 *)(uVar17 + (uint)(iVar9 + (int)uVar19) * uVar18 + *param_5) =
                     *(undefined1 *)(lVar16 + -1 + uVar19);
                *(undefined1 *)(uVar17 + (uint)(iVar9 + 1 + (int)uVar19) * uVar18 + *param_5) =
                     *(undefined1 *)(lVar16 + uVar19);
                uVar19 = uVar19 + 2;
              } while ((uVar11 & 0xfffffffe) != uVar19);
            }
            if ((uVar4 & 1) != 0) {
              *(undefined1 *)(uVar17 + (uint)((int)uVar19 + iVar9) * uVar18 + *param_5) =
                   *(undefined1 *)(param_1 + lVar15 + uVar19);
            }
            uVar19 = lVar15 + uVar14;
          }
          else if (bVar2 == 0x7f) {
            if (param_2 - uVar13 < 3) {
              return bVar22;
            }
            uVar11 = *(ushort *)(param_1 + 1 + uVar19);
            uVar4 = uVar11 >> 8;
            uVar11 = uVar11 << 8 | uVar4;
            uVar14 = (ulong)uVar11;
            if (param_3 - iVar9 <= uVar11 - 1) {
              return bVar22;
            }
            uVar3 = *(undefined1 *)(param_1 + 3 + uVar19);
            if ((ulong)uVar11 - 1 < 3) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              do {
                iVar12 = (int)uVar10;
                *(undefined1 *)(uVar17 + uVar10 * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar17 + (iVar12 + 1) * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar17 + (iVar12 + 2) * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar17 + (iVar12 + 3) * uVar18 + *param_5) = uVar3;
                uVar13 = uVar13 + 4;
                uVar10 = (ulong)(iVar12 + 4);
              } while ((uVar11 & 0xfffffffc) != uVar13);
            }
            uVar19 = uVar19 + 4;
            uVar10 = (ulong)(uVar11 & 3);
            if ((uVar4 & 3) != 0) {
              uVar20 = (int)uVar13 + iVar9;
              do {
                *(undefined1 *)(uVar17 + uVar20 * uVar18 + *param_5) = uVar3;
                uVar20 = uVar20 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          else {
            uVar14 = 0x100 - uVar14;
            if (param_3 - iVar9 < (uint)uVar14) {
              return bVar22;
            }
            if (param_2 - uVar13 < uVar14) {
              return bVar22;
            }
            if (bVar2 == 0xff) {
              uVar19 = 0;
            }
            else {
              lVar15 = uVar19 + param_1 + 2;
              uVar19 = 0;
              do {
                *(undefined1 *)(uVar17 + (uint)(iVar9 + (int)uVar19) * uVar18 + *param_5) =
                     *(undefined1 *)(lVar15 + -1 + uVar19);
                *(undefined1 *)(uVar17 + (uint)(iVar9 + 1 + (int)uVar19) * uVar18 + *param_5) =
                     *(undefined1 *)(lVar15 + uVar19);
                uVar19 = uVar19 + 2;
              } while (((uint)uVar14 & 0xfffffffe) != uVar19);
            }
            if ((uVar14 & 1) != 0) {
              *(undefined1 *)(uVar17 + (uint)((int)uVar19 + iVar9) * uVar18 + *param_5) =
                   *(undefined1 *)(param_1 + uVar13 + uVar19);
            }
            uVar19 = uVar13 + uVar14;
          }
          uVar20 = iVar9 + (int)uVar14;
          uVar10 = (ulong)uVar20;
          bVar21 = uVar20 < param_3;
        } while ((bVar21) && (uVar19 < param_2));
      }
      if (bVar21) {
        return bVar22;
      }
      uVar17 = uVar17 + 1;
      bVar22 = uVar18 <= uVar17;
    } while (uVar17 != uVar18);
  }
  return bVar22;
}
