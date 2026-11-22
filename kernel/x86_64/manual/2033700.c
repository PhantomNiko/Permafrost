/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_2033700(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  ushort uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ushort uVar17;
  int iVar18;
  ushort uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;

  uVar6 = *(uint *)(param_1 + 0x70);
  uVar22 = *(ulong *)(param_1 + 0x10);
  if (3 < uVar22 - uVar6 && uVar6 <= uVar22) {
    bVar23 = false;
    if (uVar6 + 4 <= uVar22) {
      uVar12 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)(uVar6 + 2));
      uVar12 = uVar12 << 8 | uVar12 >> 8;
      if ((ulong)((uint)uVar12 * 8) <= uVar22 - (uVar6 + 4)) {
        if (uVar12 != 0) {
          uVar22 = 0;
          do {
            uVar10 = (ulong)(*(int *)(param_1 + 0x70) + 4);
            lVar3 = *(long *)(param_1 + 8);
            lVar13 = lVar3 + uVar22 * 8;
            uVar6 = *(uint *)(uVar10 + 4 + lVar13);
            uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
            if (uVar6 < *(uint *)(param_1 + 0x74)) {
              uVar6 = uVar6 + *(int *)(param_1 + 0x70);
              uVar7 = (ulong)uVar6;
              uVar11 = *(ulong *)(param_1 + 0x10);
              uVar16 = uVar11 - uVar7;
              if (1 < uVar16 && uVar7 <= uVar11) {
                uVar17 = *(ushort *)(uVar10 + lVar13) << 8 | *(ushort *)(uVar10 + lVar13) >> 8;
                uVar9 = *(ushort *)(uVar10 + 2 + lVar13);
                uVar9 = uVar9 << 8 | uVar9 >> 8;
                uVar19 = *(ushort *)(lVar3 + uVar7) << 8 | *(ushort *)(lVar3 + uVar7) >> 8;
                if (uVar19 == 0xc) {
                  if (((uVar17 == 3) || (uVar17 == 0)) && (0xf < uVar16)) {
                    uVar15 = *(uint *)(lVar3 + (ulong)(uVar6 + 4));
                    uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                             uVar15 << 0x18;
                    if ((0xf < uVar15) && (uVar15 <= uVar16)) {
                      uVar10 = (ulong)(uVar6 + 0x10);
                      if (uVar10 <= uVar11) {
                        uVar6 = *(uint *)(lVar3 + (ulong)(uVar6 + 0xc));
                        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                uVar6 << 0x18;
                        uVar7 = (ulong)uVar6;
                        if ((uVar7 * 0xc <= uVar11 - uVar10) &&
                           (((*(long *)(param_1 + 0xf0) == 0 || (uVar9 == 10)) || (uVar9 == 4)))) {
                          *(undefined8 *)(param_1 + 0xf0) = 0;
                          uVar11 = *(ulong *)(param_1 + 0xf8);
                          if (*(ulong *)(param_1 + 0xf8) < uVar7) {
                            pvVar8 = recovered_201cb00(uVar7 * 0xc);
                            pvVar4 = *(void **)(param_1 + 0xe8);
                            uVar11 = *(ulong *)(param_1 + 0xf0);
                            if (uVar11 != 0) {
                              if (uVar11 == 1) {
                                uVar16 = 0;
                              }
                              else {
                                lVar13 = 0;
                                uVar16 = 0;
                                do {
                                  *(undefined4 *)((long)pvVar8 + lVar13 + 8) =
                                       *(undefined4 *)((long)pvVar4 + lVar13 + 8);
                                  *(undefined8 *)((long)pvVar8 + lVar13) =
                                       *(undefined8 *)((long)pvVar4 + lVar13);
                                  *(undefined8 *)((long)pvVar8 + lVar13 + 0xc) =
                                       *(undefined8 *)((long)pvVar4 + lVar13 + 0xc);
                                  *(undefined4 *)((long)pvVar8 + lVar13 + 0x14) =
                                       *(undefined4 *)((long)pvVar4 + lVar13 + 0x14);
                                  uVar16 = uVar16 + 2;
                                  lVar13 = lVar13 + 0x18;
                                } while ((uVar11 & 0xfffffffffffffffe) != uVar16);
                              }
                              if ((uVar11 & 1) != 0) {
                                lVar13 = uVar16 * 0xc;
                                *(undefined4 *)((long)pvVar8 + lVar13 + 8) =
                                     *(undefined4 *)((long)pvVar4 + lVar13 + 8);
                                *(undefined8 *)((long)pvVar8 + lVar13) =
                                     *(undefined8 *)((long)pvVar4 + lVar13);
                              }
                            }
                            recovered_201cb60(pvVar4);
                            *(void **)(param_1 + 0xe8) = pvVar8;
                            *(ulong *)(param_1 + 0xf8) = uVar7;
                            uVar11 = uVar7;
                          }
                          if (uVar6 != 0) {
                            uVar16 = *(ulong *)(param_1 + 0xf0);
                            uVar21 = 0;
                            do {
                              lVar13 = uVar21 * 0xc + *(long *)(param_1 + 8);
                              uVar6 = *(uint *)(uVar10 + lVar13);
                              uVar15 = *(uint *)(uVar10 + 4 + lVar13);
                              uVar2 = *(uint *)(uVar10 + 8 + lVar13);
                              if (uVar16 == uVar11) {
                                uVar14 = uVar11 * 2;
                                if (uVar11 == 0) {
                                  uVar14 = 4;
                                }
                                uVar16 = uVar11;
                                if (uVar11 < uVar14) {
                                  pvVar8 = recovered_201cb00(uVar14 * 0xc);
                                  pvVar4 = *(void **)(param_1 + 0xe8);
                                  uVar11 = *(ulong *)(param_1 + 0xf0);
                                  if (uVar11 != 0) {
                                    if (uVar11 == 1) {
                                      uVar16 = 0;
                                    }
                                    else {
                                      lVar13 = 0;
                                      uVar16 = 0;
                                      do {
                                        *(undefined4 *)((long)pvVar8 + lVar13 + 8) =
                                             *(undefined4 *)((long)pvVar4 + lVar13 + 8);
                                        *(undefined8 *)((long)pvVar8 + lVar13) =
                                             *(undefined8 *)((long)pvVar4 + lVar13);
                                        *(undefined8 *)((long)pvVar8 + lVar13 + 0xc) =
                                             *(undefined8 *)((long)pvVar4 + lVar13 + 0xc);
                                        *(undefined4 *)((long)pvVar8 + lVar13 + 0x14) =
                                             *(undefined4 *)((long)pvVar4 + lVar13 + 0x14);
                                        uVar16 = uVar16 + 2;
                                        lVar13 = lVar13 + 0x18;
                                      } while ((uVar11 & 0xfffffffffffffffe) != uVar16);
                                    }
                                    if ((uVar11 & 1) != 0) {
                                      lVar13 = uVar16 * 0xc;
                                      *(undefined4 *)((long)pvVar8 + lVar13 + 8) =
                                           *(undefined4 *)((long)pvVar4 + lVar13 + 8);
                                      *(undefined8 *)((long)pvVar8 + lVar13) =
                                           *(undefined8 *)((long)pvVar4 + lVar13);
                                    }
                                  }
                                  recovered_201cb60(pvVar4);
                                  *(void **)(param_1 + 0xe8) = pvVar8;
                                  *(ulong *)(param_1 + 0xf8) = uVar14;
                                  uVar16 = *(ulong *)(param_1 + 0xf0);
                                  uVar11 = uVar14;
                                }
                              }
                              lVar13 = *(long *)(param_1 + 0xe8);
                              *(uint *)(lVar13 + uVar16 * 0xc) =
                                   uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                   uVar6 << 0x18;
                              *(uint *)(lVar13 + 4 + uVar16 * 0xc) =
                                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 |
                                   (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
                              *(uint *)(lVar13 + 8 + uVar16 * 0xc) =
                                   uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                   uVar2 << 0x18;
                              uVar16 = uVar16 + 1;
                              *(ulong *)(param_1 + 0xf0) = uVar16;
                              uVar21 = uVar21 + 1;
                            } while (uVar21 != uVar7);
                          }
                        }
                      }
                    }
                  }
                }
                else if ((uVar19 == 4) &&
                        ((((uVar17 == 3 || (uVar17 == 0)) && (7 < uVar16)) &&
                         ((uVar17 = *(ushort *)(lVar3 + (ulong)(uVar6 + 2)),
                          uVar17 = uVar17 << 8 | uVar17 >> 8, 0xf < uVar17 && (uVar17 <= uVar16)))))
                        ) {
                  bVar1 = *(byte *)(lVar3 + 1 + (ulong)(uVar6 + 6));
                  uVar19 = CONCAT11(*(undefined1 *)(lVar3 + (ulong)(uVar6 + 6)),bVar1);
                  uVar15 = (uint)uVar19;
                  if ((uVar15 != 0) && ((bVar1 & 1) == 0)) {
                    iVar20 = uVar6 + uVar15 * 2 + 0x10;
                    iVar18 = iVar20 + uVar15;
                    uVar15 = iVar18 + uVar15;
                    if ((uVar15 <= uVar17 + uVar6 && uVar15 <= uVar11) &&
                       (((uVar9 == 1 || (*(char *)(param_1 + 0xe2) == '\0')) ||
                        ((uVar9 == 3 && (*(short *)(param_1 + 0xe0) == 0)))))) {
                      sVar5 = (short)uVar6;
                      *(uint *)(param_1 + 0xd0) = uVar6;
                      *(ushort *)(param_1 + 0xd4) = uVar19 >> 1;
                      *(undefined2 *)(param_1 + 0xd6) = 0xe;
                      *(ushort *)(param_1 + 0xd8) = uVar19 + 0x10;
                      *(short *)(param_1 + 0xda) = (short)iVar20 - sVar5;
                      *(short *)(param_1 + 0xdc) = (short)iVar18 - sVar5;
                      *(short *)(param_1 + 0xde) = (short)uVar15 - sVar5;
                      *(ushort *)(param_1 + 0xe0) = uVar17;
                      *(undefined1 *)(param_1 + 0xe2) = 1;
                    }
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar12);
        }
        bVar23 = true;
        if (*(char *)(param_1 + 0xe2) == '\0') {
          bVar23 = *(long *)(param_1 + 0xf0) != 0;
        }
      }
      return bVar23;
    }
  }
  return false;
}
