/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_68 (*(uint *)(frame + 24))
uchar recovered_2032000(long param_1,long *param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uchar uVar13;
  bool bVar14;
  ushort uVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  byte *pbVar21;
  ushort uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;

  if ((long *)(param_1 + 8) == param_2) goto LAB_02027aab;
  uVar20 = param_2[1];
  if (uVar20 == 0) {
    pvVar16 = (void *)0x0;
    uVar24 = 0;
  }
  else {
    pvVar16 = recovered_201cb00(uVar20);
    recovered_201cb60((void *)0x0);
    uVar18 = param_2[1];
    uVar24 = 0;
    if (uVar18 != 0) {
      lVar27 = *param_2;
      uVar24 = 0;
      if ((uVar18 < 4) || ((ulong)((long)pvVar16 - lVar27) < 0x20)) {
LAB_02027a25:
        uVar28 = uVar18 & 3;
        uVar25 = uVar24;
        if (uVar28 != 0) {
          do {
            *(undefined1 *)((long)pvVar16 + uVar25) = *(undefined1 *)(lVar27 + uVar25);
            uVar25 = uVar25 + 1;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
        if (uVar24 - uVar18 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)((long)pvVar16 + uVar25) = *(undefined1 *)(lVar27 + uVar25);
            *(undefined1 *)((long)pvVar16 + uVar25 + 1) = *(undefined1 *)(lVar27 + 1 + uVar25);
            *(undefined1 *)((long)pvVar16 + uVar25 + 2) = *(undefined1 *)(lVar27 + 2 + uVar25);
            *(undefined1 *)((long)pvVar16 + uVar25 + 3) = *(undefined1 *)(lVar27 + 3 + uVar25);
            uVar25 = uVar25 + 4;
          } while (uVar18 != uVar25);
        }
      }
      else if (uVar18 < 0x20) {
        uVar25 = 0;
LAB_020279fa:
        uVar24 = uVar18 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)((long)pvVar16 + uVar25) = *(undefined4 *)(lVar27 + uVar25);
          uVar25 = uVar25 + 4;
        } while (uVar24 != uVar25);
        if (uVar18 != uVar24) goto LAB_02027a25;
      }
      else {
        uVar24 = uVar18 & 0xffffffffffffffe0;
        uVar25 = 0;
        do {
          uVar10 = ((undefined8 *)(lVar27 + uVar25))[1];
          puVar1 = (undefined8 *)(lVar27 + 0x10 + uVar25);
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          *(undefined8 *)((long)pvVar16 + uVar25) = *(undefined8 *)(lVar27 + uVar25);
          ((undefined8 *)((long)pvVar16 + uVar25))[1] = uVar10;
          puVar1 = (undefined8 *)((long)pvVar16 + uVar25 + 0x10);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          uVar25 = uVar25 + 0x20;
        } while (uVar24 != uVar25);
        if (uVar18 != uVar24) {
          uVar25 = uVar24;
          if ((uVar18 & 0x1c) == 0) goto LAB_02027a25;
          goto LAB_020279fa;
        }
      }
      uVar24 = uVar18;
    }
  }
  pvVar19 = *(void **)(param_1 + 8);
  *(void **)(param_1 + 8) = pvVar16;
  *(ulong *)(param_1 + 0x10) = uVar24;
  *(ulong *)(param_1 + 0x18) = uVar20;
  recovered_201cb60(pvVar19);
LAB_02027aab:
  if (0xb < *(ulong *)(param_1 + 0x10)) {
    puVar8 = *(uint **)(param_1 + 8);
    uVar23 = *puVar8;
    uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
    if (((uVar23 == 0x74727565) || (uVar23 == 0x10000)) &&
       (uVar22 = (ushort)puVar8[1], uVar22 = uVar22 << 8 | uVar22 >> 8,
       (ulong)uVar22 << 4 <= *(ulong *)(param_1 + 0x10) - 0xc)) {
      if (uVar22 != 0) {
        uVar15 = 0;
        do {
          lVar17 = (ulong)uVar15 * 0x10;
          lVar27 = *(long *)(param_1 + 8);
          uVar23 = *(uint *)(lVar27 + 0x14 + lVar17);
          uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                   uVar23 << 0x18;
          if (*(ulong *)(param_1 + 0x10) < (ulong)uVar23) {
            return '\0';
          }
          uVar29 = *(uint *)(lVar27 + 0x18 + lVar17);
          uVar29 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                   uVar29 << 0x18;
          if (*(ulong *)(param_1 + 0x10) - (ulong)uVar23 < (ulong)uVar29) {
            return '\0';
          }
          bVar3 = *(byte *)(lVar27 + 0xc + lVar17);
          bVar4 = *(byte *)(lVar27 + 0xd + lVar17);
          bVar5 = *(byte *)(lVar27 + 0xe + lVar17);
          bVar6 = *(byte *)(lVar27 + 0xf + lVar17);
          lVar27 = *(long *)(param_1 + 0x40);
          if (lVar27 == 0) {
            lVar17 = *(long *)(param_1 + 0x20);
          }
          else {
            lVar17 = *(long *)(param_1 + 0x20);
            lVar26 = *(long *)(*(long *)(param_1 + 0x38) +
                              (lVar27 - 1U &
                              (((((ulong)bVar6 ^ 0x14650fb0739d0383) * 0x100000001b3 ^ (ulong)bVar5)
                                * 0x100000001b3 ^ (ulong)bVar4) * 0x100000001b3 ^ (ulong)bVar3) *
                              0x100000001b3) * 8);
            if (lVar26 != -1) {
              do {
                if (*(int *)(lVar17 + lVar26 * 0xc) ==
                    ((uint)bVar5 << 8 | (uint)bVar4 << 0x10 | (uint)bVar3 << 0x18) + (uint)bVar6) {
                  lVar26 = lVar17 + lVar26 * 0xc;
                  uVar20 = *(ulong *)(param_1 + 0x28);
                  goto LAB_02027cb0;
                }
                lVar26 = *(long *)(*(long *)(param_1 + 0x50) + lVar26 * 8);
              } while (lVar26 != -1);
            }
          }
          uVar20 = *(ulong *)(param_1 + 0x28);
          lVar26 = lVar17 + uVar20 * 0xc;
LAB_02027cb0:
          if (lVar26 == lVar17 + uVar20 * 0xc) {
            if ((lVar27 == 0) || ((ulong)(lVar27 * 3) < uVar20 * 4 + 4)) {
              uVar18 = uVar20 * 2;
              uVar24 = uVar20 * 2 + 2;
              if (uVar20 < 4) {
                uVar18 = 8;
              }
              uVar20 = 8;
              if (uVar18 <= uVar24) {
                uVar18 = uVar24;
              }
              do {
                uVar24 = uVar20;
                uVar20 = uVar24 * 2;
              } while (uVar24 < uVar18);
              *(undefined8 *)(param_1 + 0x40) = 0;
              if (*(ulong *)(param_1 + 0x48) < uVar24) {
                pvVar19 = recovered_201cb00(uVar24 * 8);
                pvVar16 = *(void **)(param_1 + 0x38);
                uVar20 = *(ulong *)(param_1 + 0x40);
                if (uVar20 != 0) {
                  if (uVar20 < 4) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0;
                    if (0x1f < (ulong)((long)pvVar19 - (long)pvVar16)) {
                      uVar18 = uVar20 & 0xfffffffffffffffc;
                      uVar25 = 0;
                      do {
                        puVar1 = (undefined8 *)((long)pvVar16 + uVar25 * 8);
                        uVar10 = puVar1[1];
                        puVar2 = (undefined8 *)((long)pvVar16 + uVar25 * 8 + 0x10);
                        uVar11 = *puVar2;
                        uVar12 = puVar2[1];
                        puVar2 = (undefined8 *)((long)pvVar19 + uVar25 * 8);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar10;
                        puVar1 = (undefined8 *)((long)pvVar19 + uVar25 * 8 + 0x10);
                        *puVar1 = uVar11;
                        puVar1[1] = uVar12;
                        uVar25 = uVar25 + 4;
                      } while (uVar18 != uVar25);
                      if (uVar20 == uVar18) goto LAB_02027e1f;
                    }
                  }
                  uVar28 = uVar20 & 3;
                  uVar25 = uVar18;
                  if (uVar28 != 0) {
                    do {
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8);
                      uVar25 = uVar25 + 1;
                      uVar28 = uVar28 - 1;
                    } while (uVar28 != 0);
                  }
                  if (uVar18 - uVar20 < 0xfffffffffffffffd) {
                    do {
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8);
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8 + 8) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8 + 8);
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8 + 0x10) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8 + 0x10);
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8 + 0x18) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8 + 0x18);
                      uVar25 = uVar25 + 4;
                    } while (uVar20 != uVar25);
                  }
                }
LAB_02027e1f:
                recovered_201cb60(pvVar16);
                *(void **)(param_1 + 0x38) = pvVar19;
                *(ulong *)(param_1 + 0x48) = uVar24;
                uVar20 = *(ulong *)(param_1 + 0x40);
                if (uVar20 < uVar24) goto LAB_02027e47;
              }
              else {
                uVar20 = 0;
                if (uVar24 != 0) {
LAB_02027e47:
                  lVar27 = *(long *)(param_1 + 0x38);
                  do {
                    *(undefined8 *)(lVar27 + uVar20 * 8) = 0xffffffffffffffff;
                    uVar20 = *(long *)(param_1 + 0x40) + 1;
                    *(ulong *)(param_1 + 0x40) = uVar20;
                  } while (uVar20 < uVar24);
                }
              }
              uVar20 = *(ulong *)(param_1 + 0x28);
              *(undefined8 *)(param_1 + 0x58) = 0;
              if (*(ulong *)(param_1 + 0x60) < uVar20) {
                pvVar19 = recovered_201cb00(uVar20 * 8);
                pvVar16 = *(void **)(param_1 + 0x50);
                uVar24 = *(ulong *)(param_1 + 0x58);
                if (uVar24 != 0) {
                  if (uVar24 < 4) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0;
                    if (0x1f < (ulong)((long)pvVar19 - (long)pvVar16)) {
                      uVar18 = uVar24 & 0xfffffffffffffffc;
                      uVar25 = 0;
                      do {
                        puVar1 = (undefined8 *)((long)pvVar16 + uVar25 * 8);
                        uVar10 = puVar1[1];
                        puVar2 = (undefined8 *)((long)pvVar16 + uVar25 * 8 + 0x10);
                        uVar11 = *puVar2;
                        uVar12 = puVar2[1];
                        puVar2 = (undefined8 *)((long)pvVar19 + uVar25 * 8);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar10;
                        puVar1 = (undefined8 *)((long)pvVar19 + uVar25 * 8 + 0x10);
                        *puVar1 = uVar11;
                        puVar1[1] = uVar12;
                        uVar25 = uVar25 + 4;
                      } while (uVar18 != uVar25);
                      if (uVar24 == uVar18) goto LAB_02027f5f;
                    }
                  }
                  uVar28 = uVar24 & 3;
                  uVar25 = uVar18;
                  if (uVar28 != 0) {
                    do {
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8);
                      uVar25 = uVar25 + 1;
                      uVar28 = uVar28 - 1;
                    } while (uVar28 != 0);
                  }
                  if (uVar18 - uVar24 < 0xfffffffffffffffd) {
                    do {
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8);
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8 + 8) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8 + 8);
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8 + 0x10) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8 + 0x10);
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8 + 0x18) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8 + 0x18);
                      uVar25 = uVar25 + 4;
                    } while (uVar24 != uVar25);
                  }
                }
LAB_02027f5f:
                recovered_201cb60(pvVar16);
                *(void **)(param_1 + 0x50) = pvVar19;
                *(ulong *)(param_1 + 0x60) = uVar20;
                uVar24 = *(ulong *)(param_1 + 0x58);
                if (uVar24 < uVar20) goto LAB_02027f87;
              }
              else {
                uVar24 = 0;
                if (uVar20 != 0) {
LAB_02027f87:
                  lVar27 = *(long *)(param_1 + 0x50);
                  do {
                    *(undefined8 *)(lVar27 + uVar24 * 8) = 0xffffffffffffffff;
                    uVar24 = *(long *)(param_1 + 0x58) + 1;
                    *(ulong *)(param_1 + 0x58) = uVar24;
                  } while (uVar24 < uVar20);
                }
              }
              if (*(long *)(param_1 + 0x40) != 0) {
                lVar27 = *(long *)(param_1 + 0x38);
                uVar20 = 0;
                do {
                  *(undefined8 *)(lVar27 + uVar20 * 8) = 0xffffffffffffffff;
                  uVar20 = uVar20 + 1;
                } while (uVar20 < *(ulong *)(param_1 + 0x40));
              }
              if (*(long *)(param_1 + 0x28) != 0) {
                lVar27 = *(long *)(param_1 + 0x38);
                lVar17 = *(long *)(param_1 + 0x50);
                pbVar21 = (byte *)(*(long *)(param_1 + 0x20) + 3);
                uVar24 = 0;
                do {
                  uVar20 = *(long *)(param_1 + 0x40) - 1U &
                           ((ulong)*pbVar21 ^
                           ((ulong)pbVar21[-1] ^
                           ((ulong)pbVar21[-2] ^
                           ((ulong)pbVar21[-3] ^ 0x14650fb0739d0383) * 0x100000001b3) *
                           0x100000001b3) * 0x100000001b3) * 0x100000001b3;
                  *(undefined8 *)(lVar17 + uVar24 * 8) = *(undefined8 *)(lVar27 + uVar20 * 8);
                  *(ulong *)(lVar27 + uVar20 * 8) = uVar24;
                  uVar24 = uVar24 + 1;
                  uVar20 = *(ulong *)(param_1 + 0x28);
                  pbVar21 = pbVar21 + 0xc;
                } while (uVar24 < uVar20);
                goto LAB_02028043;
              }
              uVar20 = 0;
              if (*(long *)(param_1 + 0x30) == 0) goto LAB_0202805a;
            }
            else {
LAB_02028043:
              if (uVar20 == *(ulong *)(param_1 + 0x30)) {
LAB_0202805a:
                uVar24 = uVar20 * 2;
                if (uVar20 == 0) {
                  uVar24 = 4;
                }
                if (uVar20 < uVar24) {
                  pvVar19 = recovered_201cb00(uVar24 * 0xc);
                  pvVar16 = *(void **)(param_1 + 0x20);
                  uVar20 = *(ulong *)(param_1 + 0x28);
                  if (uVar20 != 0) {
                    if (uVar20 == 1) {
                      uVar18 = 0;
                    }
                    else {
                      lVar27 = 0;
                      uVar18 = 0;
                      do {
                        *(undefined4 *)((long)pvVar19 + lVar27 + 8) =
                             *(undefined4 *)((long)pvVar16 + lVar27 + 8);
                        *(undefined8 *)((long)pvVar19 + lVar27) =
                             *(undefined8 *)((long)pvVar16 + lVar27);
                        *(undefined8 *)((long)pvVar19 + lVar27 + 0xc) =
                             *(undefined8 *)((long)pvVar16 + lVar27 + 0xc);
                        *(undefined4 *)((long)pvVar19 + lVar27 + 0x14) =
                             *(undefined4 *)((long)pvVar16 + lVar27 + 0x14);
                        uVar18 = uVar18 + 2;
                        lVar27 = lVar27 + 0x18;
                      } while ((uVar20 & 0xfffffffffffffffe) != uVar18);
                    }
                    if ((uVar20 & 1) != 0) {
                      lVar27 = uVar18 * 0xc;
                      *(undefined4 *)((long)pvVar19 + lVar27 + 8) =
                           *(undefined4 *)((long)pvVar16 + lVar27 + 8);
                      *(undefined8 *)((long)pvVar19 + lVar27) =
                           *(undefined8 *)((long)pvVar16 + lVar27);
                    }
                  }
                  recovered_201cb60(pvVar16);
                  *(void **)(param_1 + 0x20) = pvVar19;
                  *(ulong *)(param_1 + 0x30) = uVar24;
                  uVar20 = *(ulong *)(param_1 + 0x28);
                }
              }
            }
            lVar27 = *(long *)(param_1 + 0x20);
            local_68 = (uint)bVar6;
            *(uint *)(lVar27 + uVar20 * 0xc) =
                 ((uint)bVar5 << 8 | (uint)bVar4 << 0x10 | (uint)bVar3 << 0x18) + local_68;
            *(undefined8 *)(lVar27 + 4 + uVar20 * 0xc) = 0;
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
            uVar20 = *(ulong *)(param_1 + 0x58);
            if (uVar20 == *(ulong *)(param_1 + 0x60)) {
              uVar24 = uVar20 * 2;
              if (uVar20 == 0) {
                uVar24 = 4;
              }
              if (uVar20 < uVar24) {
                pvVar19 = recovered_201cb00(uVar24 * 8);
                pvVar16 = *(void **)(param_1 + 0x50);
                uVar20 = *(ulong *)(param_1 + 0x58);
                if (uVar20 != 0) {
                  if (uVar20 < 4) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0;
                    if (0x1f < (ulong)((long)pvVar19 - (long)pvVar16)) {
                      uVar18 = uVar20 & 0xfffffffffffffffc;
                      uVar25 = 0;
                      do {
                        puVar1 = (undefined8 *)((long)pvVar16 + uVar25 * 8);
                        uVar10 = puVar1[1];
                        puVar2 = (undefined8 *)((long)pvVar16 + uVar25 * 8 + 0x10);
                        uVar11 = *puVar2;
                        uVar12 = puVar2[1];
                        puVar2 = (undefined8 *)((long)pvVar19 + uVar25 * 8);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar10;
                        puVar1 = (undefined8 *)((long)pvVar19 + uVar25 * 8 + 0x10);
                        *puVar1 = uVar11;
                        puVar1[1] = uVar12;
                        uVar25 = uVar25 + 4;
                      } while (uVar18 != uVar25);
                      if (uVar20 == uVar18) goto LAB_02027b1b;
                    }
                  }
                  uVar28 = uVar20 & 3;
                  uVar25 = uVar18;
                  if (uVar28 != 0) {
                    do {
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8);
                      uVar25 = uVar25 + 1;
                      uVar28 = uVar28 - 1;
                    } while (uVar28 != 0);
                  }
                  if (uVar18 - uVar20 < 0xfffffffffffffffd) {
                    do {
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8);
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8 + 8) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8 + 8);
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8 + 0x10) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8 + 0x10);
                      *(undefined8 *)((long)pvVar19 + uVar25 * 8 + 0x18) =
                           *(undefined8 *)((long)pvVar16 + uVar25 * 8 + 0x18);
                      uVar25 = uVar25 + 4;
                    } while (uVar20 != uVar25);
                  }
                }
LAB_02027b1b:
                recovered_201cb60(pvVar16);
                *(void **)(param_1 + 0x50) = pvVar19;
                *(ulong *)(param_1 + 0x60) = uVar24;
                uVar20 = *(ulong *)(param_1 + 0x58);
              }
            }
            lVar17 = *(long *)(param_1 + 0x50);
            *(undefined8 *)(lVar17 + uVar20 * 8) = 0xffffffffffffffff;
            *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
            lVar26 = *(long *)(param_1 + 0x20);
            lVar27 = *(long *)(param_1 + 0x28) + -1;
            uVar20 = *(long *)(param_1 + 0x40) - 1U &
                     ((ulong)*(byte *)(lVar26 + 3 + lVar27 * 0xc) ^
                     ((ulong)*(byte *)(lVar26 + 2 + lVar27 * 0xc) ^
                     ((ulong)*(byte *)(lVar26 + 1 + lVar27 * 0xc) ^
                     ((ulong)*(byte *)(lVar26 + lVar27 * 0xc) ^ 0x14650fb0739d0383) * 0x100000001b3)
                     * 0x100000001b3) * 0x100000001b3) * 0x100000001b3;
            lVar9 = *(long *)(param_1 + 0x38);
            *(undefined8 *)(lVar17 + -8 + *(long *)(param_1 + 0x28) * 8) =
                 *(undefined8 *)(lVar9 + uVar20 * 8);
            *(long *)(lVar9 + uVar20 * 8) = lVar27;
            lVar26 = lVar26 + *(long *)(param_1 + 0x28) * 0xc + -0xc;
          }
          *(uint *)(lVar26 + 4) = uVar23;
          *(uint *)(lVar26 + 8) = uVar29;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar22);
      }
      lVar27 = *(long *)(param_1 + 0x40);
      if (lVar27 == 0) {
        lVar17 = *(long *)(param_1 + 0x20);
      }
      else {
        uVar20 = lVar27 - 1U & 0x803da4463497c44;
        lVar17 = *(long *)(param_1 + 0x20);
        lVar26 = *(long *)(param_1 + 0x38);
        while (uVar20 = *(ulong *)(lVar26 + uVar20 * 8), uVar20 != 0xffffffffffffffff) {
          if (*(int *)(lVar17 + uVar20 * 0xc) == 0x636d6170) {
            lVar26 = lVar17 + uVar20 * 0xc;
            uVar20 = *(ulong *)(param_1 + 0x28);
            goto LAB_020282ad;
          }
          lVar26 = *(long *)(param_1 + 0x50);
        }
      }
      uVar20 = *(ulong *)(param_1 + 0x28);
      lVar26 = lVar17 + uVar20 * 0xc;
LAB_020282ad:
      if ((lVar26 != lVar17 + uVar20 * 0xc) &&
         (*(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar26 + 4), lVar27 != 0)) {
        uVar24 = lVar27 - 1U & 0x160729d2e35211a7;
        lVar26 = *(long *)(param_1 + 0x38);
        while (uVar24 = *(ulong *)(lVar26 + uVar24 * 8), uVar24 != 0xffffffffffffffff) {
          if (*(int *)(lVar17 + uVar24 * 0xc) == 0x676c7966) {
            if (uVar24 == uVar20) {
              return '\0';
            }
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar17 + uVar24 * 0xc + 4);
            uVar24 = lVar27 - 1U & 0x751f4ba57946a74;
            lVar27 = *(long *)(param_1 + 0x38);
            while( true ) {
              uVar24 = *(ulong *)(lVar27 + uVar24 * 8);
              if (uVar24 == 0xffffffffffffffff) {
                return '\0';
              }
              if (*(int *)(lVar17 + uVar24 * 0xc) == 0x6c6f6361) break;
              lVar27 = *(long *)(param_1 + 0x50);
            }
            if (uVar24 == uVar20) {
              return '\0';
            }
            *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar17 + uVar24 * 0xc + 4);
            uVar13 = recovered_2033190(param_1,0x68656164,(undefined8 *)(param_1 + 0x88));
            if (uVar13 == '\0') {
              return '\0';
            }
            uVar13 = recovered_2033190(param_1,0x68686561,(undefined8 *)(param_1 + 0x90));
            if (uVar13 == '\0') {
              return '\0';
            }
            uVar13 = recovered_2033190(param_1,0x686d7478,(undefined8 *)(param_1 + 0x98));
            if (uVar13 == '\0') {
              return '\0';
            }
            uVar13 = recovered_2033190(param_1,0x6d617870,(undefined8 *)(param_1 + 0xa0));
            if (uVar13 == '\0') {
              return '\0';
            }
            uVar23 = *(uint *)(param_1 + 0x88);
            uVar20 = *(ulong *)(param_1 + 0x10);
            if (uVar20 - uVar23 < 0x36 || uVar20 < uVar23) {
              return '\0';
            }
            uVar29 = *(uint *)(param_1 + 0x90);
            if (uVar20 - uVar29 < 0x24 || uVar20 < uVar29) {
              return '\0';
            }
            uVar7 = *(uint *)(param_1 + 0xa0);
            if (uVar20 - uVar7 < 6 || uVar20 < uVar7) {
              return '\0';
            }
            lVar27 = *(long *)(param_1 + 8);
            uVar22 = *(ushort *)(lVar27 + (ulong)(uVar23 + 0x12));
            uVar22 = uVar22 << 8 | uVar22 >> 8;
            *(ushort *)(param_1 + 0xa8) = uVar22;
            if (uVar22 == 0) {
              return '\0';
            }
            uVar22 = *(ushort *)(lVar27 + (ulong)(uVar23 + 0x32));
            *(ushort *)(param_1 + 0xb0) = uVar22 << 8 | uVar22 >> 8;
            uVar22 = *(ushort *)(lVar27 + (ulong)(uVar29 + 4));
            *(ushort *)(param_1 + 0xaa) = uVar22 << 8 | uVar22 >> 8;
            *(ushort *)(param_1 + 0xac) =
                 (ushort)(byte)-*(char *)(lVar27 + (ulong)(uVar29 + 6)) * 0x100 -
                 (ushort)*(byte *)(lVar27 + 1 + (ulong)(uVar29 + 6));
            uVar22 = *(ushort *)(lVar27 + (ulong)(uVar29 + 8));
            *(ushort *)(param_1 + 0xae) = uVar22 << 8 | uVar22 >> 8;
            uVar22 = *(ushort *)(lVar27 + (ulong)(uVar29 + 0x22));
            uVar15 = uVar22 << 8 | uVar22 >> 8;
            *(ushort *)(param_1 + 0xb4) = uVar15;
            uVar22 = *(ushort *)(lVar27 + (ulong)(uVar7 + 4));
            uVar22 = uVar22 << 8 | uVar22 >> 8;
            *(ushort *)(param_1 + 0xb2) = uVar22;
            if (uVar22 == 0) {
              return '\0';
            }
            if (uVar15 == 0) {
              return '\0';
            }
            uVar13 = recovered_2033260(param_1);
            if (uVar13 == '\0') {
              return '\0';
            }
            bVar14 = recovered_2033700(param_1);
            return bVar14;
          }
          lVar26 = *(long *)(param_1 + 0x50);
        }
      }
    }
  }
  return '\0';
}
