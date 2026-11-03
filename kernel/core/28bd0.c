#include "functions.h"
#undef DAT_00056ff8
#define DAT_00056ff8 (*(uint8_t *)(0x56ff8U))
#define local_38 (*(uint *)(frame + 16))
#define local_34 (*(uint *)(frame + 20))
#define local_30 (*(int * *)(frame + 24))
#define local_2c (*(int * *)(frame + 28))
#define local_28 (*(int * *)(frame + 32))
#define local_24 (*(int * *)(frame + 36))
#define local_20 (*(int * *)(frame + 40))
#define local_1c (*(uint *)(frame + 44))
#define local_18 (*(uint * *)(frame + 48))
#define local_14 (*(uint *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28bd0
 */

bool FUN_00028bd0(int param_1,int *param_2)

{
  unsigned char frame[104] = {0};

  uint *puVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  ushort uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  bool bVar19;

  piVar16 = (int *)(param_1 + 4);
  recovered_299a8(piVar16,param_2);
  uVar6 = *(uint *)(param_1 + 8);
  if (uVar6 < 0xc) goto LAB_00029410;
  uVar5 = recovered_28b0f(piVar16,0);
  uVar15 = 0;
  if ((uVar5 != 0x74727565) && (uVar5 != 0x10000)) goto LAB_00029412;
  local_34 = (uint)(ushort)(*(ushort *)(*piVar16 + 4) << 8 | *(ushort *)(*piVar16 + 4) >> 8);
  uVar15 = 0;
  if (uVar6 - 0xc < local_34 << 4) goto LAB_00029412;
  local_24 = (int *)(param_1 + 0x10);
  local_2c = (int *)(param_1 + 0x1c);
  local_20 = (int *)(param_1 + 0x28);
  local_28 = piVar16;
  while (piVar16 = local_28, uVar15 != local_34) {
    iVar18 = uVar15 * 0x10;
    local_14 = uVar15;
    local_38 = recovered_28b0f(local_28,iVar18 + 0xc);
    uVar5 = recovered_28b0f(piVar16,iVar18 + 0x14);
    uVar6 = recovered_28b0f(piVar16,iVar18 + 0x18);
    piVar16 = local_24;
    if ((*(uint *)(param_1 + 8) < uVar5) || (*(uint *)(param_1 + 8) - uVar5 < uVar6))
    goto LAB_00029410;
    local_18 = (uint *)uVar5;
    uVar15 = recovered_29aec(local_24,(int *)&local_38);
    piVar13 = local_2c;
    uVar5 = *(uint *)(param_1 + 0x14);
    if ((uVar15 == 0xffffffff) || (uVar15 == uVar5)) {
      local_1c = uVar6;
      if ((*(int *)(param_1 + 0x20) == 0) || ((uint)(*(int *)(param_1 + 0x20) * 3) < uVar5 * 4 + 4))
      {
        uVar6 = uVar5 * 2 + 2;
        uVar15 = uVar5 * 2;
        if (uVar5 < 4) {
          uVar15 = 8;
        }
        if (uVar15 <= uVar6) {
          uVar15 = uVar6;
        }
        uVar6 = 8;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 * 2;
        } while (uVar5 < uVar15);
        recovered_29b7e(local_2c,uVar5,(undefined4 *)&DAT_00056ff8);
        recovered_29b7e(local_20,*(uint *)(param_1 + 0x14),(undefined4 *)&DAT_00056ff8);
        for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 0x20); uVar6 = uVar6 + 1) {
          *(undefined4 *)(*piVar13 + uVar6 * 4) = 0xffffffff;
        }
        for (uVar6 = 0; uVar5 = *(uint *)(param_1 + 0x14), uVar6 < uVar5; uVar6 = uVar6 + 1) {
          recovered_29ac6(piVar16,uVar6);
        }
      }
      if (uVar5 == *(uint *)(param_1 + 0x18)) {
        uVar6 = uVar5 * 2;
        if (uVar5 == 0) {
          uVar6 = 4;
        }
        if (uVar5 < uVar6) {
          local_30 = (int *)uVar6;
          pvVar7 = recovered_23162(uVar6 * 0xc);
          iVar18 = *(int *)(param_1 + 0x14);
          iVar11 = 0;
          while (bVar19 = iVar18 != 0, iVar18 = iVar18 + -1, bVar19) {
            iVar3 = *piVar16;
            *(undefined4 *)((int)pvVar7 + iVar11 + 8) = *(undefined4 *)(iVar3 + 8 + iVar11);
            uVar8 = *(undefined4 *)(iVar3 + iVar11);
            *(undefined4 *)((int)pvVar7 + iVar11 + 4) = *(undefined4 *)(iVar3 + 4 + iVar11);
            *(undefined4 *)((int)pvVar7 + iVar11) = uVar8;
            iVar11 = iVar11 + 0xc;
          }
          recovered_23194();
          *(void **)(param_1 + 0x10) = pvVar7;
          *(int **)(param_1 + 0x18) = local_30;
          uVar5 = *(uint *)(param_1 + 0x14);
        }
      }
      uVar6 = local_1c;
      iVar18 = *(int *)(param_1 + 0x10);
      iVar11 = uVar5 * 0xc;
      *(uint *)(iVar18 + iVar11) = local_38;
      *(undefined4 *)(iVar18 + 8 + iVar11) = 0;
      *(undefined4 *)(iVar18 + 4 + iVar11) = 0;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      recovered_29c88(local_20,(undefined4 *)&DAT_00056ff8);
      recovered_29ac6(piVar16,*(int *)(param_1 + 0x14) + -1);
      iVar18 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 0xc + -0xc;
    }
    else {
      iVar18 = uVar15 * 0xc + *piVar16;
    }
    *(uint **)(iVar18 + 4) = local_18;
    *(uint *)(iVar18 + 8) = uVar6;
    uVar15 = local_14 + 1;
  }
  uVar8 = recovered_299f8(param_1,0x636d6170,(undefined4 *)(param_1 + 0x38));
  if (((char)uVar8 != '\0') &&
     (uVar8 = recovered_299f8(param_1,0x676c7966,(undefined4 *)(param_1 + 0x40)),
     (char)uVar8 != '\0')) {
    puVar1 = (uint *)(param_1 + 0x48);
    uVar8 = recovered_299f8(param_1,0x6c6f6361,puVar1);
    if (((char)uVar8 != '\0') &&
       (uVar8 = recovered_299f8(param_1,0x68656164,(undefined4 *)(param_1 + 0x50)),
       (char)uVar8 != '\0')) {
      uVar8 = recovered_299f8(param_1,0x68686561,(uint *)(param_1 + 0x58));
      if (((char)uVar8 != '\0') &&
         (uVar8 = recovered_299f8(param_1,0x686d7478,(undefined4 *)(param_1 + 0x60)),
         (char)uVar8 != '\0')) {
        local_18 = (uint *)(param_1 + 0x68);
        uVar8 = recovered_299f8(param_1,0x6d617870,local_18);
        if ((char)uVar8 != '\0') {
          uVar6 = *(uint *)(param_1 + 8);
          uVar5 = *(uint *)(param_1 + 0x50);
          if (((0x35 < uVar6 - uVar5 && uVar5 <= uVar6) &&
              (uVar15 = *(uint *)(param_1 + 0x58), 0x23 < uVar6 - uVar15 && uVar15 <= uVar6)) &&
             (local_14 = *local_18, 5 < uVar6 - local_14 && local_14 <= uVar6)) {
            iVar18 = *(int *)(param_1 + 4);
            uVar9 = *(ushort *)(iVar18 + 0x12 + uVar5);
            uVar9 = uVar9 << 8 | uVar9 >> 8;
            *(ushort *)(param_1 + 0x70) = uVar9;
            if (uVar9 != 0) {
              uVar9 = *(ushort *)(iVar18 + 0x32 + uVar5);
              uVar10 = uVar9 << 8 | uVar9 >> 8;
              local_1c = CONCAT22(PF_PART2(local_1c, 2),uVar10);
              *(ushort *)(param_1 + 0x78) = uVar10;
              uVar9 = *(ushort *)(iVar18 + 4 + uVar15);
              *(ushort *)(param_1 + 0x72) = uVar9 << 8 | uVar9 >> 8;
              *(ushort *)(param_1 + 0x74) =
                   (ushort)(byte)-*(char *)(iVar18 + 6 + uVar15) * 0x100 -
                   (ushort)*(byte *)(iVar18 + 7 + uVar15);
              uVar9 = *(ushort *)(iVar18 + 8 + uVar15);
              *(ushort *)(param_1 + 0x76) = uVar9 << 8 | uVar9 >> 8;
              uVar9 = *(ushort *)(iVar18 + 0x22 + uVar15);
              uVar14 = uVar9 << 8 | uVar9 >> 8;
              *(ushort *)(param_1 + 0x7c) = uVar14;
              uVar9 = *(ushort *)(iVar18 + 4 + local_14);
              uVar9 = uVar9 << 8 | uVar9 >> 8;
              *(ushort *)(param_1 + 0x7a) = uVar9;
              if (uVar9 != 0) {
                uVar15 = 0;
                if (uVar14 == 0) goto LAB_00029412;
                uVar12 = (uint)uVar9;
                uVar5 = *puVar1;
                if (uVar10 == 0) {
                  if (uVar5 <= uVar6) {
                    uVar15 = 0;
                    if (uVar6 - uVar5 < uVar12 * 2 + 2) goto LAB_00029412;
                    local_18 = (uint *)uVar6;
                    recovered_271f2((int *)(param_1 + 0x80),uVar12 + 1);
                    local_14 = *(int *)(param_1 + 0x84);
                    for (iVar18 = 0; local_14 != iVar18; iVar18 = iVar18 + 1) {
                      *(uint *)(*(int *)(param_1 + 0x80) + iVar18 * 4) =
                           (uint)*(byte *)(*local_28 + *puVar1 + iVar18 * 2) * 0x200 +
                           (uint)*(byte *)(*local_28 + *puVar1 + 1 + iVar18 * 2) * 2;
                    }
                    goto LAB_00029088;
                  }
                }
                else if (uVar5 <= uVar6) {
                  uVar15 = 0;
                  if (uVar6 - uVar5 < uVar12 * 4 + 4) goto LAB_00029412;
                  local_18 = (uint *)(param_1 + 0x80);
                  recovered_271f2((int *)local_18,uVar12 + 1);
                  iVar18 = *(int *)(param_1 + 0x84);
                  iVar11 = 0;
                  local_14 = iVar18;
                  while (bVar19 = iVar18 != 0, iVar18 = iVar18 + -1, bVar19) {
                    uVar6 = recovered_28b0f(local_28,*puVar1 + iVar11);
                    *(uint *)(*local_18 + iVar11) = uVar6;
                    iVar11 = iVar11 + 4;
                  }
LAB_00029088:
                  iVar18 = 0;
                  do {
                    if (local_14 * 4 == iVar18) {
                      uVar6 = *(uint *)(param_1 + 8);
                      uVar5 = *(uint *)(param_1 + 0x38);
                      if ((uVar6 - uVar5 < 4 || uVar6 < uVar5) || (uVar6 < uVar5 + 4))
                      goto LAB_00029410;
                      uVar9 = *(ushort *)(*local_28 + 2 + uVar5);
                      local_34 = (uint)(ushort)(uVar9 << 8 | uVar9 >> 8);
                      uVar15 = 0;
                      if (local_34 * 8 <= uVar6 - (uVar5 + 4)) {
                        local_30 = (int *)(param_1 + 0xa0);
                        for (local_18 = (uint *)0x0; local_18 != (uint *)local_34;
                            local_18 = (uint *)((int)local_18 + 1)) {
                          iVar11 = *(int *)(param_1 + 4);
                          local_14 = *(uint *)(param_1 + 0x38);
                          iVar18 = local_14 + (int)local_18 * 8;
                          uVar9 = *(ushort *)(iVar11 + 4 + iVar18);
                          local_20 = (int *)CONCAT22(PF_PART2(local_20, 2),
                                                     *(undefined2 *)(iVar11 + 6 + iVar18));
                          local_1c = recovered_28b0f(local_28,local_14 + (int)local_18 * 8 + 8);
                          piVar16 = local_28;
                          if (local_1c < *(uint *)(param_1 + 0x3c)) {
                            piVar13 = (int *)(local_1c + local_14);
                            local_2c = *(int **)(param_1 + 8);
                            uVar6 = (int)local_2c - (int)piVar13;
                            local_24 = piVar13;
                            if (1 < uVar6 && piVar13 <= local_2c) {
                              uVar14 = uVar9 << 8 | uVar9 >> 8;
                              uVar9 = (ushort)local_20 << 8 | (ushort)local_20 >> 8;
                              local_20 = (int *)CONCAT22(PF_PART2(local_20, 2),uVar9);
                              uVar10 = *(ushort *)(iVar11 + (int)piVar13) << 8 |
                                       *(ushort *)(iVar11 + (int)piVar13) >> 8;
                              if (uVar10 == 0xc) {
                                if (((uVar14 == 3) || (uVar14 == 0)) && (0xf < uVar6)) {
                                  uVar5 = recovered_28b0f(local_28,(int)(piVar13 + 1));
                                  uVar15 = recovered_28b0f(piVar16,(int)(piVar13 + 3));
                                  if ((((uVar5 <= uVar6 && 0xf < uVar5) &&
                                       (bVar19 = local_24 + 4 <= local_2c,
                                       local_2c = (int *)((int)local_2c - (int)(local_24 + 4)),
                                       bVar19)) && ((int *)(uVar15 * 0xc) <= local_2c)) &&
                                     (((*(int *)(param_1 + 0xa4) == 0 ||
                                       (((uint)local_20 & 0xffff) == 10)) ||
                                      (((uint)local_20 & 0xffff) == 4)))) {
                                    *(undefined4 *)(param_1 + 0xa4) = 0;
                                    recovered_29cd0(local_30,uVar15);
                                    iVar18 = local_1c + local_14 + 0x18;
                                    while (piVar16 = local_28, bVar19 = uVar15 != 0,
                                          uVar15 = uVar15 - 1, bVar19) {
                                      local_14 = recovered_28b0f(local_28,iVar18 + -8);
                                      local_1c = recovered_28b0f(piVar16,iVar18 + -4);
                                      local_20 = (int *)recovered_28b0f(piVar16,iVar18);
                                      iVar11 = *(int *)(param_1 + 0xa4);
                                      if (iVar11 == *(int *)(param_1 + 0xa8)) {
                                        uVar6 = iVar11 * 2;
                                        if (iVar11 == 0) {
                                          uVar6 = 4;
                                        }
                                        recovered_29cd0(local_30,uVar6);
                                        iVar11 = *(int *)(param_1 + 0xa4);
                                      }
                                      iVar3 = *(int *)(param_1 + 0xa0);
                                      iVar17 = iVar11 * 0xc;
                                      *(uint *)(iVar3 + iVar17) = local_14;
                                      *(uint *)(iVar3 + 4 + iVar17) = local_1c;
                                      *(int **)(iVar3 + 8 + iVar17) = local_20;
                                      *(int *)(param_1 + 0xa4) = iVar11 + 1;
                                      iVar18 = iVar18 + 0xc;
                                    }
                                  }
                                }
                              }
                              else if ((((uVar10 == 4) && ((uVar14 == 3 || (uVar14 == 0)))) &&
                                       (7 < uVar6)) &&
                                      ((uVar10 = *(ushort *)(iVar11 + 2 + (int)piVar13),
                                       uVar10 = uVar10 << 8 | uVar10 >> 8, 0xf < uVar10 &&
                                       (uVar10 <= uVar6)))) {
                                bVar2 = *(byte *)(iVar11 + 7 + (int)piVar13);
                                uVar14 = CONCAT11(*(undefined1 *)(iVar11 + 6 + (int)piVar13),bVar2);
                                uVar6 = (uint)uVar14;
                                if ((uVar6 != 0) && ((bVar2 & 1) == 0)) {
                                  local_1c = uVar6 * 2 + 0x10 + (int)piVar13;
                                  piVar16 = (int *)(local_1c + uVar6 + uVar6);
                                  if (((piVar16 <= local_2c) &&
                                      (piVar16 <= (int *)((uint)uVar10 + (int)piVar13))) &&
                                     ((uVar9 == 1 ||
                                      ((*(char *)(param_1 + 0x9e) == '\0' ||
                                       ((uVar9 == 3 && (*(short *)(param_1 + 0x9c) == 0)))))))) {
                                    local_20 = (int *)0x0;
                                    *(int **)(param_1 + 0x8c) = piVar13;
                                    *(ushort *)(param_1 + 0x90) = uVar14 >> 1;
                                    *(undefined2 *)(param_1 + 0x92) = 0xe;
                                    *(ushort *)(param_1 + 0x94) = uVar14 + 0x10;
                                    sVar4 = (short)piVar13;
                                    *(short *)(param_1 + 0x96) = (short)local_1c - sVar4;
                                    *(short *)(param_1 + 0x98) = (short)(local_1c + uVar6) - sVar4;
                                    *(short *)(param_1 + 0x9a) = (short)piVar16 - sVar4;
                                    *(ushort *)(param_1 + 0x9c) = uVar10;
                                    *(undefined1 *)(param_1 + 0x9e) = 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                        uVar15 = 1;
                        if (*(char *)(param_1 + 0x9e) == '\0') {
                          uVar15 = (uint)(*(int *)(param_1 + 0xa4) != 0);
                        }
                      }
                      break;
                    }
                    puVar1 = (uint *)(*(int *)(param_1 + 0x80) + iVar18);
                    iVar18 = iVar18 + 4;
                    uVar15 = 0;
                  } while (*puVar1 <= *(uint *)(param_1 + 0x44));
                  goto LAB_00029412;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00029410:
  uVar15 = 0;
LAB_00029412:
  return SUB41(uVar15,0);
}
