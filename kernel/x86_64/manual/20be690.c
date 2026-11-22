/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_00000008 (*(uint8_t *)(0x8U))
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a4df5 (*(uint8_t *)(0x20f5595U))
#define DAT_020a991c (*(uint8_t *)(0x20fae93U))
#define local_38 (*(undefined1 * *)(frame + 136))
#define local_48 (*(long *)(frame + 120))
#define local_50 (*(char * *)(frame + 112))
#define local_58 (*(int * *)(frame + 104))
#define local_60 (*(void * *)(frame + 96))
#define local_70 (*(char * *)(frame + 80))
#define local_78 (*(char * *)(frame + 72))
#define local_80 (*(char * *)(frame + 64))
#define local_88 (*(char * *)(frame + 56))
#define local_90 (*(char * *)(frame + 48))
#define local_98 (*(char * *)(frame + 40))
#define local_a0 (*(int * *)(frame + 32))
#define local_a8 (*(char * *)(frame + 24))
#define pcStack_68 (*(char * *)(frame + 88))
#define str_020a98ae (*(char (*)[1])(0x20fae25U))
#define str_020a98c7 (*(char (*)[1])(0x20fae3eU))
#define str_020a98f1 (*(char (*)[1])(0x20fae68U))
#define str_020a9920 (*(char (*)[1])(0x20fae97U))
#define str_020a995d (*(char (*)[1])(0x20faed4U))
#define str_020a9986 (*(char (*)[1])(0x20faefdU))
#define str_020a99a7 (*(char (*)[1])(0x20faf1eU))
#define uStack_40 (*(ulong *)(frame + 128))
ulong recovered_20be690(int *param_1,char *param_2,int *param_3,long param_4,undefined4 *param_5,
                       ulong **in_R9)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  char *pcVar4;
  char cVar5;
  uchar uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  void *pvVar12;
  char *pcVar13;
  char *pcVar14;
  undefined1 *puVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  char *pcVar19;

  if (param_4 == 3) {
    if ((*param_3 != 3) || (param_3[0x10] != 3)) {
      pcVar19 = str_020a98c7;
      goto LAB_02080486;
    }
    local_58 = param_1;
    if ((param_3[0x20] == 3) || (param_3[0x20] == 8)) {
      local_88 = *(char **)(param_3 + 4);
      if (local_88 == (char *)0x0) {
        local_88 = &DAT_020a259c;
      }
      pcVar19 = *(char **)(param_3 + 0x14);
      if (pcVar19 == (char *)0x0) {
        pcVar19 = &DAT_020a259c;
      }
      uVar9 = recovered_2002e80(&DAT_020a991c);
      uVar10 = recovered_2002e80(pcVar19);
      if ((uVar10 < uVar9) || (iVar7 = recovered_2002a00(pcVar19,&DAT_020a991c,uVar9), iVar7 != 0))
      {
        local_a0 = param_3;
        if (param_3[0x20] == 3) {
          pcVar16 = *(char **)(param_3 + 0x24);
          if (pcVar16 == (char *)0x0) {
            pcVar16 = &DAT_020a259c;
          }
          uVar9 = recovered_2002e80(pcVar16);
          pcVar11 = recovered_2000ad0(uVar9 + 1);
          if (pcVar11 == (char *)0x0) {
            pcVar19 = str_020a995d;
            goto LAB_02080fa3;
          }
          local_50 = pcVar11;
          if (uVar9 != 0) {
            recovered_2001410(pcVar11,pcVar16,uVar9);
          }
          local_50[uVar9] = '\0';
        }
        else {
          local_50 = (char *)0x0;
        }
        local_48 = 0;
        uStack_40 = 0;
        local_38 = (undefined1 *)0x0;
        pcVar16 = (char *)recovered_2002e80(local_88);
        pcVar11 = (char *)recovered_2002e80(pcVar19);
        local_90 = pcVar16;
        if (pcVar11 == (char *)0x0) {
          pcVar19 = (char *)0x0;
          do {
            local_70 = (char *)0x0;
            pcVar16 = local_50;
            if (local_50 == (char *)0x0) {
              uVar6 = recovered_20de410(local_58,param_2,*(long *)(local_a0 + 0x2c),&DAT_020a259c,0,
                                        (long *)&local_70);
              if (uVar6 == '\0') goto LAB_02081030;
              pcVar16 = local_70;
            }
            if (pcVar16 == (char *)0x0) {
              pcVar16 = &DAT_020a259c;
            }
            uVar9 = recovered_2002e80(pcVar16);
            uVar10 = uVar9 + local_48 + 1;
            if (uStack_40 < uVar10) {
              uVar18 = uStack_40;
              if (uStack_40 == 0) {
                uVar18 = 0x20;
              }
              for (; uVar18 < uVar10; uVar18 = uVar18 * 2) {
                if ((long)uVar18 < 0) {
                  uVar18 = uVar10;
                  break;
                }
              }
              puVar15 = recovered_2000d40(local_38,uVar18);
              if (puVar15 == (undefined1 *)0x0) goto LAB_02080c2e;
              uStack_40 = uVar18;
              local_38 = puVar15;
            }
            pcVar11 = local_90;
            if (uVar9 != 0) {
              recovered_2001410(local_38 + local_48,pcVar16,uVar9);
            }
            local_48 = local_48 + uVar9;
            local_38[local_48] = 0;
            recovered_2000bb0(local_70);
            if (pcVar19 < pcVar11) {
              uVar9 = local_48 + 2;
              if (uStack_40 < uVar9) {
                uVar10 = uStack_40;
                if (uStack_40 == 0) {
                  uVar10 = 0x20;
                }
                for (; uVar10 < uVar9; uVar10 = uVar10 * 2) {
                  if ((long)uVar10 < 0) {
                    uVar10 = uVar9;
                    break;
                  }
                }
                puVar15 = recovered_2000d40(local_38,uVar10);
                if (puVar15 == (undefined1 *)0x0) goto LAB_02080fb7;
                uStack_40 = uVar10;
                local_38 = puVar15;
              }
              recovered_2001410(local_38 + local_48,local_88 + (long)pcVar19,1);
              local_38[local_48 + 1] = 0;
              local_48 = local_48 + 1;
            }
            pcVar19 = pcVar19 + 1;
          } while (pcVar19 <= pcVar11);
        }
        else {
          iVar7 = recovered_2002eb0(pcVar19,&DAT_020a4df5);
          if (iVar7 == 0) {
            if (pcVar16 != (char *)0x0) {
              pcVar16 = (char *)0x0;
              pcVar19 = local_88 + 1;
              do {
                local_70 = (char *)0x0;
                pcVar11 = local_88 + (long)pcVar16;
                cVar5 = local_88[(long)pcVar16];
                if (cVar5 == '\0') {
LAB_02080be5:
                  uVar10 = (long)local_90 - (long)pcVar16;
                  uVar9 = uVar10 + local_48 + 1;
                  if (uVar9 <= uStack_40) goto LAB_02080e96;
                  uVar18 = 0x20;
                  if (uStack_40 != 0) {
                    uVar18 = uStack_40;
                  }
                  goto joined_r0x02080c12;
                }
                uVar9 = 0;
                while (9 < (byte)(cVar5 - 0x30U)) {
                  cVar5 = pcVar11[uVar9 + 1];
                  uVar9 = uVar9 + 1;
                  if (cVar5 == '\0') goto LAB_02080be5;
                }
                lVar17 = 0;
                do {
                  lVar2 = lVar17 + uVar9;
                  lVar17 = lVar17 + 1;
                } while ((byte)((pcVar19 + (long)pcVar16)[lVar2] - 0x30U) < 10);
                uVar10 = local_48 + uVar9 + 1;
                local_80 = pcVar19;
                local_78 = pcVar16;
                if (uStack_40 < uVar10) {
                  uVar18 = uStack_40;
                  if (uStack_40 == 0) {
                    uVar18 = 0x20;
                  }
                  for (; uVar18 < uVar10; uVar18 = uVar18 * 2) {
                    if ((long)uVar18 < 0) {
                      uVar18 = uVar10;
                      break;
                    }
                  }
                  puVar15 = recovered_2000d40(local_38,uVar18);
                  if (puVar15 == (undefined1 *)0x0) goto LAB_02080fb7;
                  uStack_40 = uVar18;
                  local_38 = puVar15;
                }
                piVar3 = local_a0;
                if (uVar9 != 0) {
                  recovered_2001410(local_38 + local_48,pcVar11,uVar9);
                }
                local_48 = local_48 + uVar9;
                local_38[local_48] = 0;
                if ((local_50 == (char *)0x0) &&
                   (uVar6 = recovered_20de410(local_58,param_2,*(long *)(piVar3 + 0x2c),
                                              pcVar11 + uVar9,lVar17,(long *)&local_70),
                   uVar6 == '\0')) goto LAB_02081030;
                pcVar19 = local_50;
                if (local_50 == (char *)0x0) {
                  pcVar19 = local_70;
                }
                if (pcVar19 == (char *)0x0) {
                  pcVar19 = &DAT_020a259c;
                }
                uVar8 = recovered_20a93d0(&local_48,pcVar19);
                if ((char)uVar8 == '\0') goto LAB_02080c2e;
                pcVar16 = local_78 + lVar17 + uVar9;
                recovered_2000bb0(local_70);
                pcVar19 = local_80;
              } while (pcVar16 < local_90);
            }
          }
          else {
            local_98 = pcVar11;
            local_78 = pcVar19;
            if (((pcVar11 == (char *)0x1) || (*pcVar19 != '/')) ||
               ((pcVar19 + -1)[(long)pcVar11] != '/')) {
              if (pcVar16 != (char *)0x0) {
                local_80 = pcVar11 + -(long)local_88;
                pcVar19 = (char *)0x0;
                do {
                  pcVar11 = local_88 + (long)pcVar19;
                  pcVar14 = (char *)recovered_2003550(pcVar11,local_78);
                  local_70 = (char *)0x0;
                  if (pcVar14 == (char *)0x0) {
                    uVar10 = (long)pcVar16 - (long)pcVar19;
                    uVar9 = uVar10 + local_48 + 1;
                    if (uVar9 <= uStack_40) goto LAB_02080ede;
                    uVar18 = 0x20;
                    if (uStack_40 != 0) {
                      uVar18 = uStack_40;
                    }
                    goto joined_r0x02080c88;
                  }
                  uVar18 = (long)pcVar14 - (long)pcVar11;
                  uVar10 = uVar18 + local_48 + 1;
                  uVar9 = uStack_40;
                  puVar15 = local_38;
                  if (uStack_40 < uVar10) {
                    if (uStack_40 == 0) {
                      uVar9 = 0x20;
                    }
                    for (; uVar9 < uVar10; uVar9 = uVar9 * 2) {
                      if ((long)uVar9 < 0) {
                        uVar9 = uVar10;
                        break;
                      }
                    }
                    puVar15 = recovered_2000d40(local_38,uVar9);
                    if (puVar15 == (undefined1 *)0x0) goto LAB_02080fb7;
                  }
                  local_38 = puVar15;
                  uStack_40 = uVar9;
                  if (pcVar14 != pcVar11) {
                    recovered_2001410(local_38 + local_48,pcVar11,uVar18);
                  }
                  local_48 = local_48 + uVar18;
                  local_38[local_48] = 0;
                  if ((local_50 == (char *)0x0) &&
                     (uVar6 = recovered_20de410(local_58,param_2,*(long *)(local_a0 + 0x2c),local_78
                                                ,(long)local_98,(long *)&local_70), uVar6 == '\0'))
                  goto LAB_02081030;
                  pcVar19 = local_50;
                  if (local_50 == (char *)0x0) {
                    pcVar19 = local_70;
                  }
                  if (pcVar19 == (char *)0x0) {
                    pcVar19 = &DAT_020a259c;
                  }
                  uVar9 = recovered_2002e80(pcVar19);
                  uVar10 = uVar9 + local_48 + 1;
                  if (uStack_40 < uVar10) {
                    uVar18 = uStack_40;
                    if (uStack_40 == 0) {
                      uVar18 = 0x20;
                    }
                    for (; uVar18 < uVar10; uVar18 = uVar18 * 2) {
                      if ((long)uVar18 < 0) {
                        uVar18 = uVar10;
                        break;
                      }
                    }
                    puVar15 = recovered_2000d40(local_38,uVar18);
                    if (puVar15 == (undefined1 *)0x0) goto LAB_02080c2e;
                    uStack_40 = uVar18;
                    local_38 = puVar15;
                  }
                  pcVar16 = local_90;
                  if (uVar9 != 0) {
                    recovered_2001410(local_38 + local_48,pcVar19,uVar9);
                  }
                  local_48 = local_48 + uVar9;
                  local_38[local_48] = 0;
                  recovered_2000bb0(local_70);
                  pcVar19 = pcVar14 + (long)local_80;
                } while (pcVar19 < pcVar16);
              }
            }
            else {
              local_70 = (char *)0x0;
              pcStack_68 = (char *)0x0;
              local_60 = (void *)0x0;
              pcVar19 = (char *)0x0;
              pcVar16 = (char *)0x1;
              pcVar14 = (char *)0x1;
              do {
                pcVar4 = pcStack_68;
                pcVar13 = pcVar14 + 1;
                if (pcVar13 == pcVar11) {
LAB_02080598:
                  pcVar19 = pcVar19 + 1;
                  local_80 = pcVar13;
                  if (pcStack_68 < pcVar19) {
                    pcVar11 = pcStack_68;
                    if (pcStack_68 == (char *)0x0) {
                      pcVar11 = &DAT_00000008;
                    }
                    for (; pcVar11 < pcVar19; pcVar11 = (char *)((long)pcVar11 * 2)) {
                      if ((long)pcVar11 < 0) {
                        pcVar11 = pcVar19;
                        break;
                      }
                    }
                    pvVar12 = recovered_2000d40(local_60,(long)pcVar11 * 8);
                    if (pvVar12 != (void *)0x0) {
                      uVar9 = (long)pcVar11 - (long)pcVar4;
                      if (pcVar4 <= pcVar11 && uVar9 != 0) {
                        pcVar19 = pcVar4;
                        if (3 < uVar9) {
                          uVar10 = uVar9 & 0xfffffffffffffffc;
                          pcVar19 = pcVar4 + uVar10;
                          uVar18 = 0;
                          do {
                            puVar1 = (undefined8 *)((long)pvVar12 + uVar18 * 8 + (long)pcVar4 * 8);
                            *puVar1 = 0;
                            puVar1[1] = 0;
                            puVar1 = (undefined8 *)
                                     ((long)pvVar12 + uVar18 * 8 + (long)pcVar4 * 8 + 0x10);
                            *puVar1 = 0;
                            puVar1[1] = 0;
                            uVar18 = uVar18 + 4;
                          } while (uVar10 != uVar18);
                          if (uVar9 == uVar10) goto LAB_0208063e;
                        }
                        do {
                          *(undefined8 *)((long)pvVar12 + (long)pcVar19 * 8) = 0;
                          pcVar19 = pcVar19 + 1;
                        } while (pcVar11 != pcVar19);
                      }
LAB_0208063e:
                      pcStack_68 = pcVar11;
                      local_60 = pvVar12;
                      goto LAB_02080646;
                    }
                  }
                  else {
LAB_02080646:
                    uVar9 = (long)pcVar14 - (long)pcVar16;
                    pvVar12 = recovered_2000ad0(uVar9 + 1);
                    if (pvVar12 != (void *)0x0) {
                      if (pcVar14 != pcVar16) {
                        recovered_2001410(pvVar12,pcVar16 + (long)local_78,uVar9);
                      }
                      *(undefined1 *)((long)pvVar12 + uVar9) = 0;
                      pcVar19 = local_70 + 1;
                      *(void **)((long)local_60 + (long)local_70 * 8) = pvVar12;
                      pcVar13 = local_80;
                      pcVar11 = local_98;
                      pcVar16 = local_80;
                      local_70 = pcVar19;
                      goto LAB_02080578;
                    }
                  }
                  recovered_209cca0((ulong *)&local_70);
                  recovered_2000bb0(local_38);
                  local_48 = 0;
                  uStack_40 = 0;
                  local_38 = (undefined1 *)0x0;
                  recovered_2000bb0(local_50);
                  pcVar19 = str_020a99a7;
                  goto LAB_02080fdf;
                }
                if (local_78[(long)pcVar14] == '|') goto LAB_02080598;
LAB_02080578:
                pcVar14 = pcVar13;
              } while (pcVar13 != pcVar11);
              if (local_90 != (char *)0x0) {
                pcVar19 = (char *)0x0;
                do {
                  local_a8 = (char *)0x0;
                  if (local_70 == (char *)0x0) {
LAB_02080eff:
                    uVar6 = recovered_20a9490(&local_48,(long)(local_88 + (long)pcVar19),
                                              (long)local_90 - (long)pcVar19);
                    if (uVar6 == '\0') {
LAB_02080fae:
                      recovered_209cca0((ulong *)&local_70);
                      goto LAB_02080fb7;
                    }
                    break;
                  }
                  pcVar16 = local_88 + (long)pcVar19;
                  pcVar11 = (char *)0x0;
                  local_80 = (char *)0x0;
                  local_78 = (char *)0x0;
                  uVar9 = 0xffffffffffffffff;
                  local_98 = pcVar19;
                  do {
                    pcVar19 = *(char **)((long)local_60 + (long)pcVar11 * 8);
                    pcVar13 = (char *)recovered_2002e80(pcVar19);
                    pcVar14 = pcVar16;
                    if (pcVar13 == (char *)0x0) {
LAB_02080d7a:
                      uVar10 = (long)pcVar14 - (long)local_88;
                      pcVar19 = pcVar11;
                      if (uVar9 <= (ulong)((long)pcVar14 - (long)local_88) &&
                          uVar9 != 0xffffffffffffffff) {
                        uVar10 = uVar9;
                        pcVar19 = local_80;
                        pcVar13 = local_78;
                      }
                      local_80 = pcVar19;
                      local_78 = pcVar13;
                    }
                    else {
                      pcVar14 = (char *)recovered_2003550(pcVar16,pcVar19);
                      uVar10 = uVar9;
                      if (pcVar14 != (char *)0x0) goto LAB_02080d7a;
                    }
                    pcVar11 = pcVar11 + 1;
                    uVar9 = uVar10;
                  } while (pcVar11 < local_70);
                  pcVar19 = local_98;
                  if (uVar10 == 0xffffffffffffffff) goto LAB_02080eff;
                  uVar6 = recovered_20a9490(&local_48,(long)pcVar16,uVar10 - (long)local_98);
                  pcVar19 = local_78;
                  if (uVar6 == '\0') goto LAB_02080fae;
                  if ((local_50 == (char *)0x0) &&
                     (uVar6 = recovered_20de410(local_58,param_2,*(long *)(local_a0 + 0x2c),
                                                *(undefined1 **)
                                                 ((long)local_60 + (long)local_80 * 8),
                                                (long)local_78,(long *)&local_a8), uVar6 == '\0')) {
                    recovered_209cca0((ulong *)&local_70);
LAB_02081030:
                    recovered_2000bb0(local_38);
                    local_48 = 0;
                    uStack_40 = 0;
                    local_38 = (undefined1 *)0x0;
                    recovered_2000bb0((void *)0x0);
                    uVar9 = 0;
                    goto LAB_02080492;
                  }
                  pcVar16 = local_90;
                  pcVar11 = local_50;
                  if (local_50 == (char *)0x0) {
                    pcVar11 = local_a8;
                  }
                  if (pcVar11 == (char *)0x0) {
                    pcVar11 = &DAT_020a259c;
                  }
                  uVar8 = recovered_20a93d0(&local_48,pcVar11);
                  if ((char)uVar8 == '\0') {
                    recovered_209cca0((ulong *)&local_70);
                    recovered_2000bb0(local_38);
                    local_48 = 0;
                    uStack_40 = 0;
                    local_38 = (undefined1 *)0x0;
                    recovered_2000bb0(local_50);
                    pcVar19 = local_a8;
                    goto LAB_02080fd3;
                  }
                  recovered_2000bb0(local_a8);
                  pcVar19 = pcVar19 + uVar10;
                } while (pcVar19 < pcVar16);
              }
              recovered_209cca0((ulong *)&local_70);
            }
          }
        }
        goto LAB_02080f2a;
      }
      pcVar19 = str_020a9920;
    }
    else {
      pcVar19 = str_020a98f1;
    }
    goto LAB_02080fa3;
  }
  pcVar19 = str_020a98ae;
LAB_02080486:
  goto LAB_02080488;
joined_r0x02080c12:
  if (uVar9 <= uVar18) goto LAB_02080e72;
  if ((long)uVar18 < 0) {
    uVar18 = uVar9;
    goto LAB_02080e72;
  }
  uVar18 = uVar18 * 2;
  goto joined_r0x02080c12;
LAB_02080e72:
  puVar15 = recovered_2000d40(local_38,uVar18);
  if (puVar15 == (undefined1 *)0x0) goto LAB_02080fb7;
  uStack_40 = uVar18;
  local_38 = puVar15;
LAB_02080e96:
  recovered_2001410(local_38 + local_48,pcVar11,uVar10);
  local_48 = uVar10 + local_48;
  local_38[local_48] = 0;
  goto LAB_02080f2a;
joined_r0x02080c88:
  if (uVar9 <= uVar18) goto LAB_02080eba;
  if ((long)uVar18 < 0) {
    uVar18 = uVar9;
    goto LAB_02080eba;
  }
  uVar18 = uVar18 * 2;
  goto joined_r0x02080c88;
LAB_02080c2e:
  recovered_2000bb0(local_38);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (undefined1 *)0x0;
  recovered_2000bb0(local_50);
  pcVar19 = local_70;
LAB_02080fd3:
  recovered_2000bb0(pcVar19);
  pcVar19 = str_020a9986;
LAB_02080fdf:
  pf_varargs_205eb00___(local_58,param_2,pcVar19);
  uVar9 = 0;
  goto LAB_02080492;
LAB_02080eba:
  puVar15 = recovered_2000d40(local_38,uVar18);
  if (puVar15 == (undefined1 *)0x0) {
LAB_02080fb7:
    recovered_2000bb0(local_38);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = (undefined1 *)0x0;
    pcVar19 = local_50;
    goto LAB_02080fd3;
  }
  uStack_40 = uVar18;
  local_38 = puVar15;
LAB_02080ede:
  recovered_2001410(local_38 + local_48,pcVar11,uVar10);
  local_48 = uVar10 + local_48;
  local_38[local_48] = 0;
LAB_02080f2a:
  recovered_2000bb0(local_50);
  recovered_205ec00((undefined8 *)param_5);
  *param_5 = 3;
  puVar15 = local_38;
  if (local_38 == (undefined1 *)0x0) {
    puVar15 = recovered_2000ad0(1);
    if (puVar15 == (undefined1 *)0x0) {
      *(undefined8 *)(param_5 + 4) = 0;
      recovered_2000bb0(local_38);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = (undefined1 *)0x0;
      pcVar19 = str_020a9986;
LAB_02080fa3:
      param_1 = local_58;
LAB_02080488:
      uVar9 = 0;
      pf_varargs_205eb00___(param_1,param_2,pcVar19);
      goto LAB_02080492;
    }
    *puVar15 = 0;
  }
  *(undefined1 **)(param_5 + 4) = puVar15;
  uVar9 = CONCAT71((int7)((ulong)param_5 >> 8),1);
LAB_02080492:
  return uVar9 & 0xffffffff;
}
