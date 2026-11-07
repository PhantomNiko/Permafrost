/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a52b0 (*(uint8_t *)(0x20f5a50U))
#define local_38 (*(void * *)(frame + 72))
#define local_40 (*(ulong *)(frame + 64))
#define local_48 (*(long *)(frame + 56))
#define local_50 (*(long *)(frame + 48))
#define local_55 (*(undefined1 *)(frame + 43))
#define local_56 (*(undefined1 *)(frame + 42))
#define local_57 (*(undefined1 *)(frame + 41))
#define local_58 (*(undefined1 *)(frame + 40))
#define local_60 (*(undefined8 *)(frame + 32))
#define local_64 (*(undefined4 *)(frame + 28))
uint recovered_20e7fb0(undefined2 *param_1,long param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined4 uVar2;
  uchar uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *buffer;
  char *pcVar10;
  ulong uVar11;
  char *text;

  if (param_2 == 0 || param_1 == (undefined2 *)0x0) {
LAB_0209dec2:
    uVar4 = 0;
  }
  else {
    pvVar5 = recovered_2000d40((void *)0x0,0x20);
    if (pvVar5 == (void *)0x0) {
      uVar4 = 0;
      pvVar5 = (void *)0x0;
    }
    else {
      local_40 = 0x20;
      local_38 = pvVar5;
      recovered_2001410(pvVar5,&DAT_020a52b0,4);
      buffer = local_38;
      local_48 = 4;
      *(undefined1 *)((long)pvVar5 + 4) = 0;
      if (*(long *)(param_1 + 0x20) == 0) {
        PF_PART1(local_60, 0) = (undefined1)*param_1;
        PF_PART1(local_60, 1) = (undefined1)((ushort)*param_1 >> 8);
        if (local_40 < 7) {
          uVar6 = 0x20;
          if (local_40 != 0) {
            uVar6 = local_40;
          }
          for (; uVar6 < 7; uVar6 = uVar6 * 2) {
            if ((long)uVar6 < 0) {
              uVar6 = 7;
              break;
            }
          }
          pvVar5 = recovered_2000d40(local_38,uVar6);
          if (pvVar5 != (void *)0x0) {
            local_40 = uVar6;
            local_38 = pvVar5;
            goto LAB_0209d8a2;
          }
LAB_0209deb9:
          buffer = local_38;
          goto LAB_0209debd;
        }
LAB_0209d8a2:
        recovered_2001410((void *)((long)local_38 + 4),&local_60,2);
        *(undefined1 *)((long)local_38 + local_48 + 2) = 0;
        uVar2 = *(undefined4 *)(param_1 + 4);
        PF_PART1(local_60, 0) = (undefined1)uVar2;
        PF_PART1(local_60, 1) = (undefined1)((uint)uVar2 >> 8);
        PF_PART1(local_60, 2) = (undefined1)((uint)uVar2 >> 0x10);
        PF_PART1(local_60, 3) = (undefined1)((uint)uVar2 >> 0x18);
        uVar6 = local_48 + 7;
        if (local_40 < uVar6) {
          uVar7 = 0x20;
          if (local_40 != 0) {
            uVar7 = local_40;
          }
          for (; uVar7 < uVar6; uVar7 = uVar7 * 2) {
            if ((long)uVar7 < 0) {
              uVar7 = uVar6;
              break;
            }
          }
          local_48 = local_48 + 2;
          pvVar5 = recovered_2000d40(local_38,uVar7);
          if (pvVar5 == (void *)0x0) goto LAB_0209deb9;
          local_40 = uVar7;
          local_38 = pvVar5;
        }
        else {
          local_48 = local_48 + 2;
        }
        recovered_2001410((void *)((long)local_38 + local_48),&local_60,4);
        *(undefined1 *)((long)local_38 + local_48 + 4) = 0;
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        PF_PART1(local_60, 0) = (undefined1)uVar2;
        PF_PART1(local_60, 1) = (undefined1)((uint)uVar2 >> 8);
        PF_PART1(local_60, 2) = (undefined1)((uint)uVar2 >> 0x10);
        PF_PART1(local_60, 3) = (undefined1)((uint)uVar2 >> 0x18);
        uVar6 = local_48 + 9;
        if (local_40 < uVar6) {
          uVar7 = 0x20;
          if (local_40 != 0) {
            uVar7 = local_40;
          }
          for (; uVar7 < uVar6; uVar7 = uVar7 * 2) {
            if ((long)uVar7 < 0) {
              uVar7 = uVar6;
              break;
            }
          }
          local_48 = local_48 + 4;
          pvVar5 = recovered_2000d40(local_38,uVar7);
          if (pvVar5 == (void *)0x0) goto LAB_0209deb9;
          local_40 = uVar7;
          local_38 = pvVar5;
        }
        else {
          local_48 = local_48 + 4;
        }
        recovered_2001410((void *)((long)local_38 + local_48),&local_60,4);
        lVar1 = local_48 + 4;
        *(undefined1 *)((long)local_38 + local_48 + 4) = 0;
        local_48 = lVar1;
        if (*(long *)(param_1 + 4) != 0) {
          uVar6 = 0;
          do {
            pcVar10 = *(char **)(*(long *)(param_1 + 0xc) + uVar6 * 8);
            if (pcVar10 == (char *)0x0) {
              pcVar10 = &DAT_020a259c;
            }
            uVar9 = recovered_2002e80(pcVar10);
            PF_PART1(local_60, 0) = (undefined1)uVar9;
            PF_PART1(local_60, 1) = (undefined1)(uVar9 >> 8);
            PF_PART1(local_60, 2) = (undefined1)(uVar9 >> 0x10);
            PF_PART1(local_60, 3) = (undefined1)(uVar9 >> 0x18);
            uVar7 = local_48 + 5;
            if (local_40 < uVar7) {
              uVar8 = local_40;
              if (local_40 == 0) {
                uVar8 = 0x20;
              }
              for (; uVar8 < uVar7; uVar8 = uVar8 * 2) {
                if ((long)uVar8 < 0) {
                  uVar8 = uVar7;
                  break;
                }
              }
              pvVar5 = recovered_2000d40(local_38,uVar8);
              if (pvVar5 == (void *)0x0) goto LAB_0209deb9;
              local_40 = uVar8;
              local_38 = pvVar5;
            }
            recovered_2001410((void *)((long)local_38 + local_48),&local_60,4);
            lVar1 = local_48 + 4;
            *(undefined1 *)((long)local_38 + local_48 + 4) = 0;
            uVar9 = uVar9 & 0xffffffff;
            uVar8 = lVar1 + uVar9 + 1;
            local_48 = lVar1;
            uVar7 = local_40;
            pvVar5 = local_38;
            if (local_40 < uVar8) {
              if (local_40 == 0) {
                uVar7 = 0x20;
              }
              for (; uVar7 < uVar8; uVar7 = uVar7 * 2) {
                if ((long)uVar7 < 0) {
                  uVar7 = uVar8;
                  break;
                }
              }
              pvVar5 = recovered_2000d40(local_38,uVar7);
              if (pvVar5 == (void *)0x0) goto LAB_0209deb9;
            }
            local_38 = pvVar5;
            local_40 = uVar7;
            if (uVar9 != 0) {
              recovered_2001410((void *)((long)local_38 + local_48),pcVar10,uVar9);
            }
            local_48 = local_48 + uVar9;
            *(undefined1 *)((long)local_38 + local_48) = 0;
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ulong *)(param_1 + 4));
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar6 = 0;
          do {
            lVar1 = *(long *)(param_1 + 0x18);
            PF_PART1(local_60, 0) = *(undefined1 *)(lVar1 + uVar6 * 0xc);
            PF_PART1(local_60, 1) = 0;
            PF_PART1(local_60, 2) = 0;
            PF_PART1(local_60, 3) = 0;
            PF_PART1(local_60, 4) = *(undefined1 *)(lVar1 + 4 + uVar6 * 0xc);
            PF_PART1(local_60, 5) = *(undefined1 *)(lVar1 + 5 + uVar6 * 0xc);
            PF_PART1(local_60, 6) = *(undefined1 *)(lVar1 + 6 + uVar6 * 0xc);
            PF_PART1(local_60, 7) = *(undefined1 *)(lVar1 + 7 + uVar6 * 0xc);
            local_58 = *(undefined1 *)(lVar1 + 8 + uVar6 * 0xc);
            local_57 = *(undefined1 *)(lVar1 + 9 + uVar6 * 0xc);
            local_56 = *(undefined1 *)(lVar1 + 10 + uVar6 * 0xc);
            local_55 = *(undefined1 *)(lVar1 + 0xb + uVar6 * 0xc);
            uVar7 = local_48 + 0xd;
            if (local_40 < uVar7) {
              uVar9 = local_40;
              if (local_40 == 0) {
                uVar9 = 0x20;
              }
              for (; uVar9 < uVar7; uVar9 = uVar9 * 2) {
                if ((long)uVar9 < 0) {
                  uVar9 = uVar7;
                  break;
                }
              }
              pvVar5 = recovered_2000d40(local_38,uVar9);
              if (pvVar5 == (void *)0x0) goto LAB_0209deb9;
              local_40 = uVar9;
              local_38 = pvVar5;
            }
            recovered_2001410((void *)((long)local_38 + local_48),&local_60,0xc);
            lVar1 = local_48 + 0xc;
            *(undefined1 *)((long)local_38 + local_48 + 0xc) = 0;
            uVar6 = uVar6 + 1;
            local_48 = lVar1;
          } while (uVar6 < *(ulong *)(param_1 + 0x10));
        }
      }
      else {
        PF_PART1(local_60, 0) = 6;
        PF_PART1(local_60, 1) = 0;
        if (local_40 < 7) {
          uVar6 = 0x20;
          if (local_40 != 0) {
            uVar6 = local_40;
          }
          for (; uVar6 < 7; uVar6 = uVar6 * 2) {
            if ((long)uVar6 < 0) {
              uVar6 = 7;
              break;
            }
          }
          pvVar5 = recovered_2000d40(local_38,uVar6);
          if (pvVar5 != (void *)0x0) {
            local_40 = uVar6;
            local_38 = pvVar5;
            goto LAB_0209d69b;
          }
LAB_0209debd:
          recovered_2000bb0(buffer);
          goto LAB_0209dec2;
        }
LAB_0209d69b:
        recovered_2001410((void *)((long)local_38 + 4),&local_60,2);
        *(undefined1 *)((long)local_38 + local_48 + 2) = 0;
        pcVar10 = *(char **)(param_1 + 0x28);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = &DAT_020a259c;
        }
        text = *(char **)(param_1 + 0x2c);
        if (text == (char *)0x0) {
          text = &DAT_020a259c;
        }
        local_48 = local_48 + 2;
        uVar6 = recovered_2002e80(pcVar10);
        PF_PART1(local_60, 0) = (undefined1)uVar6;
        PF_PART1(local_60, 1) = (undefined1)(uVar6 >> 8);
        PF_PART1(local_60, 2) = (undefined1)(uVar6 >> 0x10);
        PF_PART1(local_60, 3) = (undefined1)(uVar6 >> 0x18);
        uVar6 = local_48 + 5;
        if (local_40 < uVar6) {
          uVar7 = 0x20;
          if (local_40 != 0) {
            uVar7 = local_40;
          }
          for (; uVar7 < uVar6; uVar7 = uVar7 * 2) {
            if ((long)uVar7 < 0) {
              uVar7 = uVar6;
              break;
            }
          }
          pvVar5 = recovered_2000d40(local_38,uVar7);
          if (pvVar5 == (void *)0x0) goto LAB_0209deb9;
          local_40 = uVar7;
          local_38 = pvVar5;
        }
        recovered_2001410((void *)((long)local_38 + local_48),&local_60,4);
        *(undefined1 *)((long)local_38 + local_48 + 4) = 0;
        local_48 = local_48 + 4;
        uVar7 = recovered_2002e80(pcVar10);
        uVar9 = local_48 + uVar7 + 1;
        uVar6 = local_40;
        pvVar5 = local_38;
        if (local_40 < uVar9) {
          uVar6 = 0x20;
          if (local_40 != 0) {
            uVar6 = local_40;
          }
          for (; uVar6 < uVar9; uVar6 = uVar6 * 2) {
            if ((long)uVar6 < 0) {
              uVar6 = uVar9;
              break;
            }
          }
          pvVar5 = recovered_2000d40(local_38,uVar6);
          if (pvVar5 == (void *)0x0) goto LAB_0209deb9;
        }
        local_38 = pvVar5;
        local_40 = uVar6;
        if (uVar7 != 0) {
          recovered_2001410((void *)((long)local_38 + local_48),pcVar10,uVar7);
        }
        local_48 = local_48 + uVar7;
        *(undefined1 *)((long)local_38 + local_48) = 0;
        uVar6 = recovered_2002e80(text);
        uVar3 = recovered_20e8da0(&local_48,(int)uVar6);
        if (((uVar3 == '\0') || (uVar4 = recovered_20a93d0(&local_48,text), (char)uVar4 == '\0')) ||
           (uVar3 = recovered_20e8da0(&local_48,*(undefined4 *)(param_1 + 0x20)), uVar3 == '\0'))
        goto LAB_0209deb9;
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar6 = 0;
          do {
            pcVar10 = *(char **)(*(long *)(param_1 + 0x1c) + uVar6 * 8);
            if (pcVar10 == (char *)0x0) {
              pcVar10 = &DAT_020a259c;
            }
            uVar7 = recovered_2002e80(pcVar10);
            uVar3 = recovered_20e8da0(&local_48,(int)uVar7);
            if (((uVar3 == '\0') ||
                (uVar3 = recovered_20a9490(&local_48,(long)pcVar10,uVar7 & 0xffffffff),
                uVar3 == '\0')) ||
               ((uVar3 = recovered_20e8da0(&local_48,(int)uVar6 + 1), uVar3 == '\0' ||
                (uVar3 = recovered_209c670((long)pcVar10,&local_60), uVar3 == '\0'))))
            goto LAB_0209deb9;
            uVar3 = recovered_20e8da0(&local_48,
                                      CONCAT13(PF_PART1(local_60, 3),
                                               CONCAT12(PF_PART1(local_60, 2),
                                                        CONCAT11(PF_PART1(local_60, 1),(undefined1)local_60
                                                                ))));
            if (uVar3 == '\0') {
LAB_0209deb0:
              recovered_209cca0(&local_60);
              goto LAB_0209deb9;
            }
            if (CONCAT17(PF_PART1(local_60, 7),
                         CONCAT16(PF_PART1(local_60, 6),
                                  CONCAT15(PF_PART1(local_60, 5),
                                           CONCAT14(PF_PART1(local_60, 4),
                                                    CONCAT13(PF_PART1(local_60, 3),
                                                             CONCAT12(PF_PART1(local_60, 2),
                                                                      CONCAT11(PF_PART1(local_60, 1),
                                                                               (undefined1)local_60)
                                                                     )))))) != 0) {
              uVar7 = 0;
              do {
                pcVar10 = *(char **)(local_50 + uVar7 * 8);
                if (pcVar10 == (char *)0x0) {
                  pcVar10 = &DAT_020a259c;
                }
                uVar8 = recovered_2002e80(pcVar10);
                local_64 = (undefined4)uVar8;
                uVar9 = local_48 + 5;
                if (local_40 < uVar9) {
                  uVar11 = local_40;
                  if (local_40 == 0) {
                    uVar11 = 0x20;
                  }
                  for (; uVar11 < uVar9; uVar11 = uVar11 * 2) {
                    if ((long)uVar11 < 0) {
                      uVar11 = uVar9;
                      break;
                    }
                  }
                  pvVar5 = recovered_2000d40(local_38,uVar11);
                  if (pvVar5 == (void *)0x0) goto LAB_0209deb0;
                  local_40 = uVar11;
                  local_38 = pvVar5;
                }
                recovered_2001410((void *)((long)local_38 + local_48),&local_64,4);
                lVar1 = local_48 + 4;
                *(undefined1 *)((long)local_38 + local_48 + 4) = 0;
                uVar8 = uVar8 & 0xffffffff;
                uVar11 = uVar8 + lVar1 + 1;
                local_48 = lVar1;
                uVar9 = local_40;
                pvVar5 = local_38;
                if (local_40 < uVar11) {
                  if (local_40 == 0) {
                    uVar9 = 0x20;
                  }
                  for (; uVar9 < uVar11; uVar9 = uVar9 * 2) {
                    if ((long)uVar9 < 0) {
                      uVar9 = uVar11;
                      break;
                    }
                  }
                  pvVar5 = recovered_2000d40(local_38,uVar9);
                  if (pvVar5 == (void *)0x0) goto LAB_0209deb0;
                }
                local_38 = pvVar5;
                local_40 = uVar9;
                if (uVar8 != 0) {
                  recovered_2001410((void *)((long)local_38 + local_48),pcVar10,uVar8);
                }
                local_48 = local_48 + uVar8;
                *(undefined1 *)((long)local_38 + local_48) = 0;
                uVar7 = uVar7 + 1;
              } while (uVar7 < CONCAT17(PF_PART1(local_60, 7),
                                        CONCAT16(PF_PART1(local_60, 6),
                                                 CONCAT15(PF_PART1(local_60, 5),
                                                          CONCAT14(PF_PART1(local_60, 4),
                                                                   CONCAT13(PF_PART1(local_60, 3),
                                                                            CONCAT12(PF_PART1(local_60, 2),
                                                                                     CONCAT11(
                                                  PF_PART1(local_60, 1),(undefined1)local_60))))))));
            }
            recovered_209cca0(&local_60);
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ulong *)(param_1 + 0x20));
        }
      }
      uVar4 = recovered_203f020(param_2,(long)local_38,local_48);
      pvVar5 = local_38;
    }
    recovered_2000bb0(pvVar5);
  }
  return uVar4;
}
