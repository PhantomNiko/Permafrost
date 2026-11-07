/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define uStack_64 (*(uint *)(frame + 28))
ulong recovered_82417b24(long param_1,undefined8 *param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;

  recovered_82418668((undefined8 *)(param_1 + 8),param_2);
  uVar19 = *(ulong *)(param_1 + 0x10);
  if ((0xb < uVar19) &&
     (((uVar14 = recovered_82417a5c((long *)(param_1 + 8),0), uVar14 == 0x74727565 ||
       (uVar14 == 0x10000)) &&
      (uVar10 = *(ushort *)(*(long *)(param_1 + 8) + 4),
      uVar26 = (ulong)((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8), uVar26 << 4 <= uVar19 - 0xc)
      ))) {
    for (uVar19 = 0; uVar19 != uVar26; uVar19 = uVar19 + 1) {
      uStack_64 = recovered_82417a5c((long *)(param_1 + 8),(uVar19 & 0x7ffffffffffffff) << 4 | 0xc);
      uVar14 = recovered_82417a5c((long *)(param_1 + 8),uVar19 * 0x10 + 0x14);
      uVar15 = recovered_82417a5c((long *)(param_1 + 8),uVar19 * 0x10 + 0x18);
      if (*(ulong *)(param_1 + 0x10) < (ulong)uVar14 ||
          *(ulong *)(param_1 + 0x10) - (ulong)uVar14 < (ulong)uVar15) {
        return 0;
      }
      uVar17 = recovered_824187bc((long *)(param_1 + 0x20),(byte *)&uStack_64);
      uVar20 = *(ulong *)(param_1 + 0x28);
      if ((uVar17 == 0xffffffffffffffff) || (uVar17 == uVar20)) {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           ((ulong)(*(long *)(param_1 + 0x40) * 3) < uVar20 * 4 + 4)) {
          uVar17 = uVar20 * 2 + 2;
          uVar25 = 8;
          if (3 < uVar20) {
            uVar25 = uVar20 * 2;
          }
          if (uVar25 <= uVar17) {
            uVar25 = uVar17;
          }
          uVar17 = 8;
          do {
            uVar20 = uVar17;
            uVar17 = uVar20 << 1;
          } while (uVar20 < uVar25);
          recovered_82418874((long *)(param_1 + 0x38),uVar20,(undefined8 *)0x82473060U);
          recovered_82418874((long *)(param_1 + 0x50),*(ulong *)(param_1 + 0x28),
                             (undefined8 *)0x82473060U);
          for (uVar17 = 0; uVar17 < *(ulong *)(param_1 + 0x40); uVar17 = uVar17 + 1) {
            *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar17 * 8) = 0xffffffffffffffff;
          }
          for (uVar17 = 0; uVar20 = *(ulong *)(param_1 + 0x28), uVar17 < uVar20; uVar17 = uVar17 + 1
              ) {
            recovered_82418790((long *)(param_1 + 0x20),uVar17);
          }
        }
        if (uVar20 == *(ulong *)(param_1 + 0x30)) {
          uVar17 = 4;
          if (uVar20 != 0) {
            uVar17 = uVar20 << 1;
          }
          if (uVar20 < uVar17) {
            pvVar18 = recovered_8240fa98(uVar17 * 0xc);
            lVar21 = 0;
            for (lVar23 = *(long *)(param_1 + 0x28); lVar23 != 0; lVar23 = lVar23 + -1) {
              puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar21);
              uVar7 = *(undefined4 *)(puVar3 + 1);
              *(undefined8 *)((long)pvVar18 + lVar21) = *puVar3;
              *(undefined4 *)((undefined8 *)((long)pvVar18 + lVar21) + 1) = uVar7;
              lVar21 = lVar21 + 0xc;
            }
            recovered_8240facc(*(void **)(param_1 + 0x20));
            *(void **)(param_1 + 0x20) = pvVar18;
            *(ulong *)(param_1 + 0x30) = uVar17;
            uVar20 = *(ulong *)(param_1 + 0x28);
          }
        }
        puVar22 = (uint *)(*(long *)(param_1 + 0x20) + uVar20 * 0xc);
        *puVar22 = uStack_64;
        puVar22[1] = 0;
        puVar22[2] = 0;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        recovered_82418900((long *)(param_1 + 0x50),(undefined8 *)0x82473060U);
        recovered_82418790((long *)(param_1 + 0x20),*(long *)(param_1 + 0x28) + -1);
        lVar21 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * 0xc + -0xc;
      }
      else {
        lVar21 = *(long *)(param_1 + 0x20) + uVar17 * 0xc;
      }
      *(uint *)(lVar21 + 4) = uVar14;
      *(uint *)(lVar21 + 8) = uVar15;
    }
    uVar19 = recovered_824186c4(param_1,0x636d6170,(undefined8 *)(param_1 + 0x70));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_824186c4(param_1,0x676c7966,(undefined8 *)(param_1 + 0x78));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_824186c4(param_1,0x6c6f6361,(undefined8 *)(param_1 + 0x80));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_824186c4(param_1,0x68656164,(undefined8 *)(param_1 + 0x88));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_824186c4(param_1,0x68686561,(undefined8 *)(param_1 + 0x90));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_824186c4(param_1,0x686d7478,(undefined8 *)(param_1 + 0x98));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_824186c4(param_1,0x6d617870,(undefined8 *)(param_1 + 0xa0));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar14 = *(uint *)(param_1 + 0x88);
    uVar19 = *(ulong *)(param_1 + 0x10);
    if (uVar19 < uVar14) {
      return 0;
    }
    if (uVar19 - uVar14 < 0x36) {
      return 0;
    }
    uVar15 = *(uint *)(param_1 + 0x90);
    if (uVar19 < uVar15) {
      return 0;
    }
    if (uVar19 - uVar15 < 0x24) {
      return 0;
    }
    uVar16 = *(uint *)(param_1 + 0xa0);
    if (uVar16 <= uVar19 && 5 < uVar19 - uVar16) {
      lVar21 = *(long *)(param_1 + 8);
      uVar10 = *(ushort *)(lVar21 + (ulong)(uVar14 + 0x12));
      uVar10 = uVar10 >> 8 | uVar10 << 8;
      *(ushort *)(param_1 + 0xa8) = uVar10;
      if (uVar10 != 0) {
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar14 + 0x32));
        uVar11 = uVar10 >> 8 | uVar10 << 8;
        *(ushort *)(param_1 + 0xb0) = uVar11;
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar15 + 4));
        *(ushort *)(param_1 + 0xaa) = uVar10 >> 8 | uVar10 << 8;
        pbVar4 = (byte *)(lVar21 + (ulong)(uVar15 + 6));
        *(ushort *)(param_1 + 0xac) = (ushort)*pbVar4 * -0x100 - (ushort)pbVar4[1];
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar15 + 8));
        *(ushort *)(param_1 + 0xae) = uVar10 >> 8 | uVar10 << 8;
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar15 + 0x22));
        uVar12 = uVar10 >> 8 | uVar10 << 8;
        *(ushort *)(param_1 + 0xb4) = uVar12;
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar16 + 4));
        uVar14 = (uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8;
        uVar26 = (ulong)uVar14;
        *(short *)(param_1 + 0xb2) = (short)uVar14;
        if (uVar14 == 0) {
          return 0;
        }
        if (uVar12 == 0) {
          return 0;
        }
        uVar17 = (ulong)*(uint *)(param_1 + 0x80);
        if (uVar11 == 0) {
          if (uVar19 < uVar17 || uVar19 - uVar17 < uVar26 * 2 + 2) {
            return 0;
          }
          recovered_824159ac((long *)(param_1 + 0xb8),uVar26 + 1);
          lVar23 = 0;
          lVar24 = *(long *)(param_1 + 0xc0);
          for (lVar21 = 0; lVar24 != lVar21; lVar21 = lVar21 + 1) {
            pbVar4 = (byte *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x80) + lVar23);
            *(uint *)(*(long *)(param_1 + 0xb8) + lVar21 * 4) =
                 (uint)*pbVar4 << 9 | (uint)pbVar4[1] << 1;
            lVar23 = lVar23 + 2;
          }
        }
        else {
          if (uVar19 < uVar17 || uVar19 - uVar17 < uVar26 * 4 + 4) {
            return 0;
          }
          recovered_824159ac((long *)(param_1 + 0xb8),uVar26 + 1);
          lVar21 = 0;
          lVar24 = *(long *)(param_1 + 0xc0);
          for (lVar23 = lVar24; lVar23 != 0; lVar23 = lVar23 + -1) {
            uVar14 = recovered_82417a5c((long *)(param_1 + 8),
                                        lVar21 + (ulong)*(uint *)(param_1 + 0x80));
            *(uint *)(*(long *)(param_1 + 0xb8) + lVar21) = uVar14;
            lVar21 = lVar21 + 4;
          }
        }
        lVar24 = lVar24 << 2;
        puVar22 = *(uint **)(param_1 + 0xb8);
        while (lVar24 != 0) {
          uVar14 = *puVar22;
          lVar24 = lVar24 + -4;
          puVar22 = puVar22 + 1;
          if (*(uint *)(param_1 + 0x7c) < uVar14) {
            return 0;
          }
        }
        uVar14 = *(uint *)(param_1 + 0x70);
        uVar19 = *(ulong *)(param_1 + 0x10);
        if ((uVar14 <= uVar19 && 3 < uVar19 - uVar14) &&
           (uVar10 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)(uVar14 + 2)),
           uVar26 = (ulong)((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8),
           uVar14 + 4 <= uVar19 && uVar26 << 3 <= uVar19 - (uVar14 + 4))) {
          for (uVar19 = 0; uVar19 != uVar26; uVar19 = uVar19 + 1) {
            iVar8 = *(int *)(param_1 + 0x70);
            lVar21 = (ulong)(iVar8 + 4) + uVar19 * 8;
            lVar23 = *(long *)(param_1 + 8);
            puVar5 = (ushort *)(lVar23 + lVar21);
            uVar10 = *puVar5;
            uVar11 = puVar5[1];
            uVar14 = recovered_82417a5c((long *)(param_1 + 8),lVar21 + 4);
            if (uVar14 < *(uint *)(param_1 + 0x74)) {
              uVar25 = *(ulong *)(param_1 + 0x10);
              uVar14 = uVar14 + iVar8;
              uVar20 = (ulong)uVar14;
              uVar17 = uVar25 - uVar20;
              if (uVar20 <= uVar25 && 1 < uVar17) {
                uVar10 = uVar10 >> 8 | uVar10 << 8;
                uVar11 = uVar11 >> 8 | uVar11 << 8;
                uVar12 = *(ushort *)(lVar23 + uVar20) >> 8 | *(ushort *)(lVar23 + uVar20) << 8;
                if (uVar12 == 0xc) {
                  if (((uVar10 == 3 || uVar10 == 0) && 0xf < uVar17) &&
                     (uVar15 = recovered_82417a5c((long *)(param_1 + 8),(ulong)(uVar14 + 4)),
                     0xf < uVar15 && uVar15 <= uVar17)) {
                    uVar15 = recovered_82417a5c((long *)(param_1 + 8),(ulong)(uVar14 + 0xc));
                    uVar20 = (ulong)uVar15;
                    uVar17 = (ulong)(uVar14 + 0x10);
                    if ((uVar17 <= uVar25 && uVar20 * 0xc <= uVar25 - uVar17) &&
                       ((*(long *)(param_1 + 0xf0) == 0 || (uVar11 == 10 || uVar11 == 4)))) {
                      *(undefined8 *)(param_1 + 0xf0) = 0;
                      recovered_82418968((long *)(param_1 + 0xe8),uVar20);
                      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
                        uVar14 = recovered_82417a5c((long *)(param_1 + 8),uVar17);
                        uVar15 = recovered_82417a5c((long *)(param_1 + 8),uVar17 + 4);
                        uVar16 = recovered_82417a5c((long *)(param_1 + 8),uVar17 + 8);
                        lVar21 = *(long *)(param_1 + 0xf0);
                        if (lVar21 == *(long *)(param_1 + 0xf8)) {
                          uVar25 = 4;
                          if (lVar21 != 0) {
                            uVar25 = lVar21 << 1;
                          }
                          recovered_82418968((long *)(param_1 + 0xe8),uVar25);
                          lVar21 = *(long *)(param_1 + 0xf0);
                        }
                        puVar22 = (uint *)(*(long *)(param_1 + 0xe8) + lVar21 * 0xc);
                        *puVar22 = uVar14;
                        puVar22[1] = uVar15;
                        puVar22[2] = uVar16;
                        *(long *)(param_1 + 0xf0) = lVar21 + 1;
                        uVar17 = uVar17 + 0xc;
                      }
                    }
                  }
                }
                else if (((uVar12 == 4) && ((uVar10 == 3 || uVar10 == 0) && 7 < uVar17)) &&
                        (uVar10 = *(ushort *)(lVar23 + (ulong)(uVar14 + 2)),
                        uVar15 = (uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8,
                        0xf < uVar15 && uVar15 <= uVar17)) {
                  puVar6 = (undefined1 *)(lVar23 + (ulong)(uVar14 + 6));
                  bVar9 = puVar6[1];
                  uVar10 = CONCAT11(*puVar6,bVar9);
                  uVar16 = (uint)uVar10;
                  if (uVar16 != 0) {
                    iVar8 = uVar14 + uVar16 + 0x10;
                    iVar1 = iVar8 + uVar16;
                    iVar2 = iVar1 + uVar16;
                    uVar16 = iVar2 + uVar16;
                    if ((((bVar9 & 1) == 0 && uVar16 <= uVar14 + uVar15) && uVar16 <= uVar25) &&
                       (((uVar11 == 1 || ((*(byte *)(param_1 + 0xe2) & 1) == 0)) ||
                        ((uVar11 == 3 && (*(short *)(param_1 + 0xe0) == 0)))))) {
                      *(uint *)(param_1 + 0xd0) = uVar14;
                      *(ushort *)(param_1 + 0xd4) = uVar10 >> 1;
                      *(undefined2 *)(param_1 + 0xd6) = 0xe;
                      sVar13 = (short)uVar14;
                      *(short *)(param_1 + 0xd8) = (short)iVar8 - sVar13;
                      *(short *)(param_1 + 0xda) = (short)iVar1 - sVar13;
                      *(short *)(param_1 + 0xdc) = (short)iVar2 - sVar13;
                      *(short *)(param_1 + 0xde) = (short)uVar16 - sVar13;
                      *(short *)(param_1 + 0xe0) = (short)uVar15;
                      *(undefined1 *)(param_1 + 0xe2) = 1;
                    }
                  }
                }
              }
            }
          }
          if ((*(byte *)(param_1 + 0xe2) & 1) == 0) {
            return (ulong)(*(long *)(param_1 + 0xf0) != 0);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
