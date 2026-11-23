#include "functions.h"
/* Decode ULEB high words with 64-bit shifts, including a zero bit offset. */
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20dea10
 */

undefined4 recovered_20dea10(int in_ECX,char *in_EDX,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  char *arg3;
  uint local_70;
  uint local_6c;
  uint local_64;
  uint local_60;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_3c;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;

  uVar10 = *(uint *)(in_ECX + 0x44);
  uVar9 = 0;
  if (uVar10 == 0) {
switchD_020deae0_caseD_0:
    uVar10 = recovered_20e0950(uVar9,in_ECX,*(uint *)(in_ECX + 0x48),*(uint *)(in_ECX + 0x4c),'\0',
                               in_EDX,param_3);
    if (((char)uVar10 != '\0') &&
       (uVar10 = recovered_20e0950(uVar10,in_ECX,*(uint *)(in_ECX + 0x50),*(uint *)(in_ECX + 0x54),
                                   '\x01',in_EDX,param_3), (char)uVar10 != '\0')) {
      uVar11 = recovered_20e0950(uVar10,in_ECX,*(uint *)(in_ECX + 0x58),*(uint *)(in_ECX + 0x5c),
                                 '\0',in_EDX,param_3);
      return uVar11;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x30) != 0) {
      uVar9 = *(uint *)(in_ECX + 0x40);
      uVar5 = *(uint *)(in_ECX + 0x34);
      if ((uVar9 <= uVar5) && ((uint)(uVar5 - uVar9 < uVar10) <= -(uint)(uVar5 < uVar9))) {
        iVar3 = *(int *)(in_ECX + 0x30) + uVar9;
        bVar4 = *(byte *)(in_ECX + 0xc);
        uVar5 = (uint)bVar4 * 4 + 4;
        uVar1 = (uint)((bVar4 & 1) == 0) * 4 - 9;
        local_18 = bVar4 | 2;
        iVar8 = -uVar10;
        local_3c = 1;
        local_4c = 0;
        local_6c = 0;
        local_60 = 0;
        uVar12 = 0;
        do {
          bVar4 = *(byte *)(iVar3 + uVar12);
          uVar9 = (uint)bVar4;
          if (8 < bVar4 >> 4) {
            if (param_3 == 0 || in_EDX == (char *)0x0) {
              return 0;
            }
            arg3 = "unsupported Mach-O rebase opcode";
            goto override_prt_20df254_9b0a0a95;
          }
          local_70 = uVar12 + 1;
          uVar14 = uVar9 & 0xf;
          switch(bVar4 >> 4) {
          case 0:
            goto switchD_020deae0_caseD_0;
          case 1:
            uVar9 = local_6c;
            local_3c = uVar14;
            break;
          case 2:
            if (uVar10 <= local_70) {
LAB_020df282:
              if (param_3 == 0 || in_EDX == (char *)0x0) {
                return 0;
              }
              arg3 = "invalid Mach-O rebase segment offset";
              goto override_prt_20df254_9b0a0a95;
            }
            local_70 = uVar12 + 2;
            uVar9 = 0;
            local_6c = 0;
            local_64 = 0;
            while( true ) {
              if (0x3f < uVar9) goto LAB_020df282;
              bVar4 = *(byte *)(iVar3 + -1 + local_70);
              uVar13 = (ushort)bVar4;
              if ((uVar9 == 0x3f) &&
                 (uVar13 = CONCAT11(bVar4,bVar4) & 0x7eff, (char)(uVar13 >> 8) != '\0'))
              goto LAB_020df282;
              uVar7 = CONCAT11((char)uVar13,(char)uVar13) & 0x7fff;
              uVar13 = uVar7 >> 8;
              bVar4 = (byte)uVar9 & 0x1f;
              uVar17 = (uint)uVar13 << ((byte)uVar9 & 0x1f);
              uVar12 = uVar17;
              local_60 = 0 << bVar4 | (uint)((uint)((ulonglong)uVar13 >> (0x20 - bVar4)));
              if ((uVar9 & 0x20) != 0) {
                uVar12 = 0;
                local_60 = uVar17;
              }
              local_60 = local_64 | local_60;
              local_6c = local_6c | uVar12;
              if (-1 < (char)uVar7) break;
              uVar9 = uVar9 + 7;
              iVar2 = iVar8 + 1 + local_70;
              local_70 = local_70 + 1;
              local_64 = local_60;
              if (iVar2 == 1) goto LAB_020df282;
            }
            uVar9 = uVar14;
            local_4c = uVar14;
            break;
          case 3:
            if (local_70 < uVar10) {
              local_70 = uVar12 + 2;
              uVar9 = 0;
              uVar12 = 0;
              local_64 = 0;
              while( true ) {
                if (0x3f < uVar9) goto LAB_020df2a5;
                bVar4 = *(byte *)(iVar3 + -1 + local_70);
                uVar13 = (ushort)bVar4;
                if ((uVar9 == 0x3f) &&
                   (uVar13 = CONCAT11(bVar4,bVar4) & 0x7eff, (char)(uVar13 >> 8) != '\0'))
                goto LAB_020df2a5;
                uVar7 = CONCAT11((char)uVar13,(char)uVar13) & 0x7fff;
                uVar13 = uVar7 >> 8;
                bVar4 = (byte)uVar9 & 0x1f;
                uVar16 = (uint)uVar13 << ((byte)uVar9 & 0x1f);
                uVar17 = uVar16;
                uVar14 = 0 << bVar4 | (uint)((uint)((ulonglong)uVar13 >> (0x20 - bVar4)));
                if ((uVar9 & 0x20) != 0) {
                  uVar17 = 0;
                  uVar14 = uVar16;
                }
                local_64 = local_64 | uVar14;
                uVar12 = uVar12 | uVar17;
                if (-1 < (char)uVar7) break;
                uVar9 = uVar9 + 7;
                iVar2 = iVar8 + 1 + local_70;
                local_70 = local_70 + 1;
                if (iVar2 == 1) goto LAB_020df2a5;
              }
              if (local_4c < *(uint *)(in_ECX + 0x3c)) {
                uVar9 = *(uint *)(*(int *)(in_ECX + 0x38) + 4 + local_4c * 0x28);
                uVar14 = local_64 + local_60 + (uint)CARRY4(uVar12,local_6c);
                if (local_60 == 0 && (uint)(uVar9 < local_6c) <= -local_60) {
                  uVar17 = (uint)(uVar9 < uVar12 + local_6c);
                  uVar9 = -uVar14 - uVar17;
                  local_6c = uVar12 + local_6c;
                  local_60 = uVar14;
                  if (uVar14 == 0 && uVar17 <= -uVar14) break;
                }
              }
LAB_020df30a:
              if (param_3 == 0 || in_EDX == (char *)0x0) {
                return 0;
              }
              arg3 = "Mach-O fixup offset overflow";
            }
            else {
LAB_020df2a5:
              if (param_3 == 0 || in_EDX == (char *)0x0) {
                return 0;
              }
              arg3 = "invalid Mach-O rebase address delta";
            }
            goto override_prt_20df254_9b0a0a95;
          case 4:
            bVar4 = (byte)local_18 & 0x1f;
            uVar17 = uVar14 << ((byte)local_18 & 0x1f);
            uVar9 = uVar17;
            uVar12 = 0 << bVar4 | (uint)((ulonglong)uVar14 >> (0x20 - bVar4));
            if ((local_18 & 0x20) != 0) {
              uVar9 = 0;
              uVar12 = uVar17;
            }
            if (CARRY4(local_60,uVar12) || CARRY4(local_60 + uVar12,(uint)CARRY4(local_6c,uVar9)))
            goto LAB_020df30a;
            bVar18 = CARRY4(local_6c,uVar9);
            local_6c = local_6c + uVar9;
            local_60 = local_60 + uVar12 + (uint)bVar18;
            break;
          default:
            if ((bVar4 & 0xf0) == 0x60) {
              if (uVar10 <= local_70) {
LAB_020df2c1:
                if (param_3 == 0 || in_EDX == (char *)0x0) {
                  return 0;
                }
                arg3 = "invalid Mach-O rebase count";
                goto override_prt_20df254_9b0a0a95;
              }
              local_70 = uVar12 + 2;
              uVar9 = 0;
              local_64 = 0;
              local_58 = 0;
              while( true ) {
                if ((0x3f < uVar9) ||
                   ((bVar4 = *(byte *)(iVar3 + -1 + local_70), uVar9 == 0x3f &&
                    ((bVar4 & 0x7e) != 0)))) goto LAB_020df2c1;
                bVar6 = (byte)uVar9 & 0x1f;
                uVar17 = (uint)(bVar4 & 0x7f) << ((byte)uVar9 & 0x1f);
                uVar14 = uVar17;
                uVar12 = 0 << bVar6 | (uint)((uint)((ulonglong)(bVar4 & 0x7f) >> (0x20 - bVar6)));
                if ((uVar9 & 0x20) != 0) {
                  uVar14 = 0;
                  uVar12 = uVar17;
                }
                local_58 = local_58 | uVar12;
                uVar14 = local_64 | uVar14;
                if (-1 < (char)bVar4) break;
                uVar9 = uVar9 + 7;
                iVar2 = iVar8 + 1 + local_70;
                local_70 = local_70 + 1;
                local_64 = uVar14;
                if (iVar2 == 1) goto LAB_020df2c1;
              }
            }
            else {
              local_58 = 0;
            }
            uVar9 = 0;
            if (uVar14 == 0 && local_58 == 0) {
LAB_020df1c6:
            }
            else {
              uVar12 = 0;
              uVar9 = 0;
              do {
                if ((*(uint *)(in_ECX + 0x3c) <= local_4c) ||
                   (local_60 != 0 ||
                    -local_60 <
                    (uint)(*(uint *)(*(int *)(in_ECX + 0x38) + 4 + local_4c * 0x28) < local_6c)))
                goto LAB_020df2e7;
                local_24 = (uint *)0x0;
                uVar11 = recovered_20df380(in_ECX,*(int *)(*(int *)(in_ECX + 0x38) + local_4c * 0x28
                                                          ) + local_6c,uVar5,(int *)&local_24);
                if ((char)uVar11 == '\0') {
                  return 0;
                }
                uVar11 = recovered_20e16d0(in_ECX,local_24,local_3c,in_EDX,param_3);
                if ((char)uVar11 == '\0') {
                  return 0;
                }
                bVar18 = CARRY4(local_6c,uVar5);
                local_6c = local_6c + uVar5;
                local_60 = local_60 + bVar18;
                bVar18 = 0xfffffffe < uVar12;
                uVar12 = uVar12 + 1;
                uVar9 = uVar9 + bVar18;
              } while (uVar9 < local_58 || uVar9 - local_58 < (uint)(uVar12 < uVar14));
              uVar9 = (uVar9 - local_58) - (uint)(uVar12 < uVar14);
            }
            break;
          case 7:
            if ((local_4c < *(uint *)(in_ECX + 0x3c)) &&
               (local_60 == 0 &&
                (uint)(*(uint *)(*(int *)(in_ECX + 0x38) + 4 + local_4c * 0x28) < local_6c) <=
                -local_60)) {
              local_28 = (uint *)0x0;
              uVar11 = recovered_20df380(in_ECX,*(int *)(*(int *)(in_ECX + 0x38) + local_4c * 0x28)
                                                + local_6c,uVar5,(int *)&local_28);
              if ((char)uVar11 == '\0') {
                return 0;
              }
              uVar11 = recovered_20e16d0(in_ECX,local_28,local_3c,in_EDX,param_3);
              if ((char)uVar11 == '\0') {
                return 0;
              }
              if (uVar10 <= local_70) {
                return 0;
              }
              local_70 = uVar12 + 2;
              uVar9 = 0;
              uVar12 = 0;
              local_64 = 0;
              while( true ) {
                if (0x3f < uVar9) {
                  return 0;
                }
                bVar4 = *(byte *)(iVar3 + -1 + local_70);
                uVar13 = (ushort)bVar4;
                if ((uVar9 == 0x3f) &&
                   (uVar13 = CONCAT11(bVar4,bVar4) & 0x7eff, (char)(uVar13 >> 8) != '\0')) {
                  return 0;
                }
                uVar7 = CONCAT11((char)uVar13,(char)uVar13) & 0x7fff;
                uVar13 = uVar7 >> 8;
                bVar4 = (byte)uVar9 & 0x1f;
                uVar16 = (uint)uVar13 << ((byte)uVar9 & 0x1f);
                uVar17 = uVar16;
                uVar14 = 0 << bVar4 | (uint)((uint)((ulonglong)uVar13 >> (0x20 - bVar4)));
                if ((uVar9 & 0x20) != 0) {
                  uVar17 = 0;
                  uVar14 = uVar16;
                }
                local_64 = local_64 | uVar14;
                uVar12 = uVar12 | uVar17;
                if (-1 < (char)uVar7) break;
                uVar9 = uVar9 + 7;
                iVar2 = iVar8 + 1 + local_70;
                local_70 = local_70 + 1;
                if (iVar2 == 1) {
                  return 0;
                }
              }
              if ((uint)(uVar1 < uVar12) <= -local_64 - 1) {
                uVar14 = uVar12 + uVar5;
                local_64 = local_64 + CARRY4(uVar12,uVar5);
                if (!CARRY4(local_60,local_64) &&
                    !CARRY4(local_60 + local_64,(uint)CARRY4(local_6c,uVar14))) {
                  uVar9 = local_60 + local_64 + (uint)CARRY4(local_6c,uVar14);
                  local_6c = local_6c + uVar14;
                  local_60 = uVar9;
                  break;
                }
              }
LAB_020df350:
              if (param_3 == 0 || in_EDX == (char *)0x0) {
                return 0;
              }
              arg3 = "Mach-O fixup offset overflow";
            }
            else {
LAB_020df2e7:
              if (param_3 == 0 || in_EDX == (char *)0x0) {
                return 0;
              }
              arg3 = "invalid Mach-O rebase address";
            }
            goto override_prt_20df254_9b0a0a95;
          case 8:
            if (local_70 < uVar10) {
              uVar9 = uVar12 + 2;
              local_70 = uVar12 + 3;
              uVar12 = 0;
              local_64 = 0;
              local_58 = 0;
              while( true ) {
                if (0x3f < uVar12) goto LAB_020df266;
                bVar4 = *(byte *)(iVar3 + -1 + uVar9);
                uVar13 = (ushort)bVar4;
                if ((uVar12 == 0x3f) &&
                   (uVar13 = CONCAT11(bVar4,bVar4) & 0x7eff, (char)(uVar13 >> 8) != '\0'))
                goto LAB_020df266;
                uVar7 = CONCAT11((char)uVar13,(char)uVar13) & 0x7fff;
                uVar13 = uVar7 >> 8;
                bVar4 = (byte)uVar12 & 0x1f;
                uVar16 = (uint)uVar13 << ((byte)uVar12 & 0x1f);
                uVar17 = uVar16;
                uVar14 = 0 << bVar4 | (uint)((uint)((ulonglong)uVar13 >> (0x20 - bVar4)));
                if ((uVar12 & 0x20) != 0) {
                  uVar17 = 0;
                  uVar14 = uVar16;
                }
                local_58 = local_58 | uVar14;
                local_64 = local_64 | uVar17;
                if (-1 < (char)uVar7) break;
                uVar12 = uVar12 + 7;
                iVar2 = iVar8 + 1 + uVar9;
                uVar9 = uVar9 + 1;
                local_70 = local_70 + 1;
                if (iVar2 == 1) goto LAB_020df266;
              }
              if (uVar9 < uVar10) {
                uVar9 = 0;
                uVar12 = 0;
                local_40 = 0;
                while( true ) {
                  if ((0x3f < uVar9) ||
                     ((bVar4 = *(byte *)(iVar3 + -1 + local_70), uVar9 == 0x3f &&
                      ((bVar4 & 0x7e) != 0)))) goto LAB_020df266;
                  bVar6 = (byte)uVar9 & 0x1f;
                  uVar16 = (uint)(bVar4 & 0x7f) << ((byte)uVar9 & 0x1f);
                  uVar17 = uVar16;
                  uVar14 = 0 << bVar6 | (uint)((uint)((ulonglong)(bVar4 & 0x7f) >> (0x20 - bVar6)));
                  if ((uVar9 & 0x20) != 0) {
                    uVar17 = 0;
                    uVar14 = uVar16;
                  }
                  local_40 = local_40 | uVar14;
                  uVar12 = uVar12 | uVar17;
                  if (-1 < (char)bVar4) break;
                  uVar9 = uVar9 + 7;
                  iVar2 = iVar8 + 1 + local_70;
                  local_70 = local_70 + 1;
                  if (iVar2 == 1) goto LAB_020df266;
                }
                uVar9 = 0;
                if (local_64 != 0 || local_58 != 0) {
                  uVar16 = uVar12 + uVar5;
                  uVar14 = local_40 + CARRY4(uVar12,uVar5);
                  uVar15 = 0;
                  uVar17 = 0;
                  local_20 = uVar12;
                  do {
                    local_1c = uVar17;
                    if ((*(uint *)(in_ECX + 0x3c) <= local_4c) ||
                       (local_60 != 0 ||
                        -local_60 <
                        (uint)(*(uint *)(*(int *)(in_ECX + 0x38) + 4 + local_4c * 0x28) < local_6c))
                       ) goto LAB_020df2e7;
                    local_2c = (uint *)0x0;
                    uVar11 = recovered_20df380(in_ECX,*(int *)(*(int *)(in_ECX + 0x38) +
                                                              local_4c * 0x28) + local_6c,uVar5,
                                               (int *)&local_2c);
                    if ((char)uVar11 == '\0') {
                      return 0;
                    }
                    uVar11 = recovered_20e16d0(in_ECX,local_2c,local_3c,in_EDX,param_3);
                    if ((char)uVar11 == '\0') {
                      return 0;
                    }
                    if ((-local_40 - 1 < (uint)(uVar1 < local_20)) ||
                       (CARRY4(local_60,uVar14) ||
                        CARRY4(local_60 + uVar14,(uint)CARRY4(local_6c,uVar16)))) goto LAB_020df350;
                    bVar18 = CARRY4(local_6c,uVar16);
                    local_6c = local_6c + uVar16;
                    local_60 = local_60 + uVar14 + (uint)bVar18;
                    bVar18 = 0xfffffffe < uVar15;
                    uVar15 = uVar15 + 1;
                    uVar17 = local_1c + bVar18;
                    uVar9 = (uVar17 - local_58) - (uint)(uVar15 < local_64);
                  } while (uVar17 < local_58 || uVar17 - local_58 < (uint)(uVar15 < local_64));
                }
                goto LAB_020df1c6;
              }
            }
LAB_020df266:
            if (param_3 == 0 || in_EDX == (char *)0x0) {
              return 0;
            }
            arg3 = "invalid Mach-O repeated rebase";
            goto override_prt_20df254_9b0a0a95;
          }
          uVar12 = local_70;
        } while (local_70 < uVar10);
        goto switchD_020deae0_caseD_0;
      }
    }
    if (param_3 != 0 && in_EDX != (char *)0x0) {
      arg3 = "invalid Mach-O rebase stream";
override_prt_20df254_9b0a0a95:
      recovered_2003fc0(in_EDX,param_3,&"%s",arg3);
    }
  }
  return 0;
}

