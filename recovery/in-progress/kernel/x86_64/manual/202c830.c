/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1c40 (*(uint8_t *)(0x20eb308U))
#define DAT_020a1cb4 (*(uint8_t *)(0x20eb37cU))
#define DAT_020a1d28 (*(uint8_t *)(0x20eb3f0U))
#define DAT_020a1da0 (*(uint8_t *)(0x20eb468U))
uint recovered_202c830(long *param_1,long param_2,long param_3,long *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  void *pvVar5;
  void *data;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;

  if (*(char *)(param_2 + 0x5c) != '\x01') {
    return 0;
  }
  do {
    uVar10 = *(uint *)(param_2 + 0x58);
    uVar18 = 0;
    if (uVar10 == 0) {
      return 0;
    }
    lVar4 = *param_1;
    uVar19 = param_1[1];
    uVar13 = *(uint *)(param_1 + 4);
    uVar14 = param_1[3];
    uVar23 = 1;
    lVar20 = 0;
    iVar16 = 0;
    uVar21 = param_1[2];
    while( true ) {
      uVar12 = uVar21;
      if (uVar13 == 0) {
        if (uVar19 <= uVar21) {
          return 0;
        }
        uVar12 = uVar21 + 1;
        param_1[2] = uVar12;
        uVar14 = uVar14 | *(byte *)(lVar4 + uVar21);
        uVar13 = 8;
      }
      uVar18 = (uint)uVar14 & 1 | uVar18;
      uVar14 = uVar14 >> 1;
      param_1[3] = uVar14;
      uVar13 = uVar13 - 1;
      *(uint *)(param_1 + 4) = uVar13;
      uVar22 = *(uint *)(param_2 + uVar23 * 4);
      uVar15 = uVar22 + iVar16;
      if (uVar18 < uVar15) break;
      lVar20 = lVar20 + (ulong)uVar22;
      iVar16 = uVar15 * 2;
      uVar18 = uVar18 * 2;
      uVar22 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar22;
      uVar21 = uVar12;
      if (uVar10 < uVar22) {
        return 0;
      }
    }
    uVar21 = lVar20 + (ulong)(uVar18 - iVar16);
    if (*(ulong *)(param_2 + 0x48) <= uVar21) {
      return 0;
    }
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x40) + uVar21 * 2);
    if (uVar3 < 0x100) {
      uVar19 = param_4[1];
      if (uVar19 == param_4[2]) {
        uVar14 = uVar19 * 2;
        if (uVar19 == 0) {
          uVar14 = 4;
        }
        if (uVar19 < uVar14) {
          pvVar9 = recovered_201cb00(uVar14);
          pvVar5 = (void *)*param_4;
          uVar19 = param_4[1];
          if (uVar19 != 0) {
            if (uVar19 < 4) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              if (0x1f < (ulong)((long)pvVar9 - (long)pvVar5)) {
                if (uVar19 < 0x20) {
                  uVar23 = 0;
                }
                else {
                  uVar21 = uVar19 & 0xffffffffffffffe0;
                  uVar23 = 0;
                  do {
                    uVar6 = ((undefined8 *)((long)pvVar5 + uVar23))[1];
                    puVar1 = (undefined8 *)((long)pvVar5 + uVar23 + 0x10);
                    uVar7 = *puVar1;
                    uVar8 = puVar1[1];
                    *(undefined8 *)((long)pvVar9 + uVar23) = *(undefined8 *)((long)pvVar5 + uVar23);
                    ((undefined8 *)((long)pvVar9 + uVar23))[1] = uVar6;
                    puVar1 = (undefined8 *)((long)pvVar9 + uVar23 + 0x10);
                    *puVar1 = uVar7;
                    puVar1[1] = uVar8;
                    uVar23 = uVar23 + 0x20;
                  } while (uVar21 != uVar23);
                  if (uVar19 == uVar21) goto LAB_0202159f;
                  uVar23 = uVar21;
                  if ((uVar19 & 0x1c) == 0) goto LAB_02021535;
                }
                uVar21 = uVar19 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)((long)pvVar9 + uVar23) = *(undefined4 *)((long)pvVar5 + uVar23);
                  uVar23 = uVar23 + 4;
                } while (uVar21 != uVar23);
                if (uVar19 == uVar21) goto LAB_0202159f;
              }
            }
LAB_02021535:
            uVar12 = uVar19 & 3;
            uVar23 = uVar21;
            if (uVar12 != 0) {
              do {
                *(undefined1 *)((long)pvVar9 + uVar23) = *(undefined1 *)((long)pvVar5 + uVar23);
                uVar23 = uVar23 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if (uVar21 - uVar19 < 0xfffffffffffffffd) {
              do {
                *(undefined1 *)((long)pvVar9 + uVar23) = *(undefined1 *)((long)pvVar5 + uVar23);
                *(undefined1 *)((long)pvVar9 + uVar23 + 1) =
                     *(undefined1 *)((long)pvVar5 + uVar23 + 1);
                *(undefined1 *)((long)pvVar9 + uVar23 + 2) =
                     *(undefined1 *)((long)pvVar5 + uVar23 + 2);
                *(undefined1 *)((long)pvVar9 + uVar23 + 3) =
                     *(undefined1 *)((long)pvVar5 + uVar23 + 3);
                uVar23 = uVar23 + 4;
              } while (uVar19 != uVar23);
            }
          }
LAB_0202159f:
          recovered_201cb60(pvVar5);
          *param_4 = (long)pvVar9;
          param_4[2] = uVar14;
          uVar19 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar19) = (char)uVar3;
      param_4[1] = param_4[1] + 1;
    }
    else {
      if (uVar3 == 0x100) {
        return (uint)CONCAT71((int7)((ulong)*(long *)(param_2 + 0x40) >> 8),1);
      }
      if (0x11d < uVar3) {
        return 0;
      }
      iVar16 = *(int *)(&DAT_020a1c40 + (ulong)(uVar3 - 0x101) * 4);
      uVar10 = *(uint *)(&DAT_020a1cb4 + (ulong)(uVar3 - 0x101) * 4);
      if (uVar10 == 0) {
        cVar2 = *(char *)(param_3 + 0x5c);
        uVar21 = uVar12;
      }
      else {
        if (0x18 < uVar10) {
          return 0;
        }
        if (uVar13 < uVar10) {
          do {
            if (uVar19 <= uVar12) goto LAB_02021171;
            uVar21 = uVar12 + 1;
            param_1[2] = uVar21;
            uVar14 = uVar14 | (ulong)*(byte *)(lVar4 + uVar12) << ((byte)uVar13 & 0x3f);
            param_1[3] = uVar14;
            uVar13 = uVar13 + 8;
            *(uint *)(param_1 + 4) = uVar13;
            uVar12 = uVar21;
          } while (uVar13 < uVar10);
        }
        else {
LAB_02021171:
          uVar21 = uVar12;
        }
        if (uVar13 < uVar10) {
          return 0;
        }
        uVar18 = (uint)uVar14;
        uVar14 = uVar14 >> ((byte)uVar10 & 0x3f);
        param_1[3] = uVar14;
        uVar13 = uVar13 - uVar10;
        *(uint *)(param_1 + 4) = uVar13;
        iVar16 = iVar16 + (~(uint)(-1L << ((byte)uVar10 & 0x3f)) & uVar18);
        cVar2 = *(char *)(param_3 + 0x5c);
      }
      if (cVar2 != '\x01') {
        return 0;
      }
      uVar10 = *(uint *)(param_3 + 0x58);
      uVar18 = 0;
      if (uVar10 == 0) {
        return 0;
      }
      uVar23 = 1;
      lVar20 = 0;
      iVar17 = 0;
      while( true ) {
        uVar12 = uVar21;
        if (uVar13 == 0) {
          if (uVar19 <= uVar21) {
            return 0;
          }
          uVar12 = uVar21 + 1;
          param_1[2] = uVar12;
          uVar14 = uVar14 | *(byte *)(lVar4 + uVar21);
          uVar13 = 8;
        }
        uVar18 = (uint)uVar14 & 1 | uVar18;
        uVar14 = uVar14 >> 1;
        param_1[3] = uVar14;
        uVar13 = uVar13 - 1;
        *(uint *)(param_1 + 4) = uVar13;
        uVar22 = *(uint *)(param_3 + uVar23 * 4);
        uVar15 = uVar22 + iVar17;
        if (uVar18 < uVar15) break;
        lVar20 = lVar20 + (ulong)uVar22;
        iVar17 = uVar15 * 2;
        uVar18 = uVar18 * 2;
        uVar22 = (int)uVar23 + 1;
        uVar23 = (ulong)uVar22;
        uVar21 = uVar12;
        if (uVar10 < uVar22) {
          return 0;
        }
      }
      uVar21 = lVar20 + (ulong)(uVar18 - iVar17);
      if (*(ulong *)(param_3 + 0x48) <= uVar21) {
        return 0;
      }
      uVar3 = *(ushort *)(*(long *)(param_3 + 0x40) + uVar21 * 2);
      if (0x1d < uVar3) {
        return 0;
      }
      lVar20 = (ulong)uVar3 * 4;
      uVar10 = *(uint *)(&DAT_020a1d28 + lVar20);
      uVar18 = *(uint *)(&DAT_020a1da0 + lVar20);
      if (uVar18 != 0) {
        if (0x18 < uVar18) {
          return 0;
        }
        for (; (uVar13 < uVar18 && (uVar12 < uVar19)); uVar12 = uVar12 + 1) {
          param_1[2] = uVar12 + 1;
          uVar14 = uVar14 | (ulong)*(byte *)(lVar4 + uVar12) << ((byte)uVar13 & 0x3f);
          param_1[3] = uVar14;
          uVar13 = uVar13 + 8;
          *(uint *)(param_1 + 4) = uVar13;
        }
        if (uVar13 < uVar18) {
          return 0;
        }
        param_1[3] = uVar14 >> ((byte)uVar18 & 0x3f);
        *(uint *)(param_1 + 4) = uVar13 - uVar18;
        uVar10 = uVar10 + (~(uint)(-1L << ((byte)uVar18 & 0x3f)) & (uint)uVar14);
      }
      if (uVar10 == 0) {
        return 0;
      }
      uVar19 = param_4[1];
      if (uVar19 < uVar10) {
        return 0;
      }
      if (iVar16 != 0) {
        iVar17 = 0;
        do {
          pvVar5 = (void *)*param_4;
          uVar14 = uVar19;
          pvVar9 = pvVar5;
          if (uVar19 == param_4[2]) {
            uVar21 = uVar19 * 2;
            if (uVar19 == 0) {
              uVar21 = 4;
            }
            if (uVar19 < uVar21) {
              pvVar9 = recovered_201cb00(uVar21);
              data = (void *)*param_4;
              uVar14 = param_4[1];
              if (uVar14 != 0) {
                if (uVar14 < 4) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                  if (0x1f < (ulong)((long)pvVar9 - (long)data)) {
                    if (uVar14 < 0x20) {
                      uVar12 = 0;
                    }
                    else {
                      uVar23 = uVar14 & 0xffffffffffffffe0;
                      uVar12 = 0;
                      do {
                        uVar6 = ((undefined8 *)((long)data + uVar12))[1];
                        puVar1 = (undefined8 *)((long)data + uVar12 + 0x10);
                        uVar7 = *puVar1;
                        uVar8 = puVar1[1];
                        *(undefined8 *)((long)pvVar9 + uVar12) =
                             *(undefined8 *)((long)data + uVar12);
                        ((undefined8 *)((long)pvVar9 + uVar12))[1] = uVar6;
                        puVar1 = (undefined8 *)((long)pvVar9 + uVar12 + 0x10);
                        *puVar1 = uVar7;
                        puVar1[1] = uVar8;
                        uVar12 = uVar12 + 0x20;
                      } while (uVar23 != uVar12);
                      if (uVar14 == uVar23) goto LAB_02021340;
                      uVar12 = uVar23;
                      if ((uVar14 & 0x1c) == 0) goto LAB_02021469;
                    }
                    uVar23 = uVar14 & 0xfffffffffffffffc;
                    do {
                      *(undefined4 *)((long)pvVar9 + uVar12) = *(undefined4 *)((long)data + uVar12);
                      uVar12 = uVar12 + 4;
                    } while (uVar23 != uVar12);
                    if (uVar14 == uVar23) goto LAB_02021340;
                  }
                }
LAB_02021469:
                uVar11 = uVar14 & 3;
                uVar12 = uVar23;
                if (uVar11 != 0) {
                  do {
                    *(undefined1 *)((long)pvVar9 + uVar12) = *(undefined1 *)((long)data + uVar12);
                    uVar12 = uVar12 + 1;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                if (uVar23 - uVar14 < 0xfffffffffffffffd) {
                  do {
                    *(undefined1 *)((long)pvVar9 + uVar12) = *(undefined1 *)((long)data + uVar12);
                    *(undefined1 *)((long)pvVar9 + uVar12 + 1) =
                         *(undefined1 *)((long)data + uVar12 + 1);
                    *(undefined1 *)((long)pvVar9 + uVar12 + 2) =
                         *(undefined1 *)((long)data + uVar12 + 2);
                    *(undefined1 *)((long)pvVar9 + uVar12 + 3) =
                         *(undefined1 *)((long)data + uVar12 + 3);
                    uVar12 = uVar12 + 4;
                  } while (uVar14 != uVar12);
                }
              }
LAB_02021340:
              recovered_201cb60(data);
              *param_4 = (long)pvVar9;
              param_4[2] = uVar21;
              uVar14 = param_4[1];
            }
          }
          *(undefined1 *)((long)pvVar9 + uVar14) = *(undefined1 *)((long)pvVar5 + (uVar19 - uVar10))
          ;
          uVar19 = param_4[1] + 1;
          param_4[1] = uVar19;
          iVar17 = iVar17 + 1;
        } while (iVar17 != iVar16);
      }
    }
    if (*(char *)(param_2 + 0x5c) == '\0') {
      return 0;
    }
  } while( true );
}
