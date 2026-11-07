/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define lStack_68 (*(long *)(frame + 88))
#define local_38 (*(void * *)(frame + 136))
#define local_48 (*(ulong (*)[2])(frame + 120))
#define local_50 (*(undefined8 *)(frame + 112))
#define local_60 (*(ulong *)(frame + 96))
#define local_70 (*(void * *)(frame + 80))
#define local_80 (*(ulong *)(frame + 64))
#define local_a8 (*(undefined2 *)(frame + 24))
#define pvStack_78 (*(void * *)(frame + 72))
#define pvStack_90 (*(void * *)(frame + 48))
#define uStack_58 (*(undefined8 *)(frame + 104))
#define uStack_88 (*(ulong *)(frame + 56))
#define uStack_98 (*(ulong *)(frame + 40))
#define uStack_a0 (*(ulong *)(frame + 32))
#define uStack_a6 (*(undefined6 *)(frame + 26))
uchar recovered_20e7640(long param_1,long param_2,undefined8 *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  char cVar2;
  uchar uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  char *text;
  char *pcVar7;
  long lVar8;
  void *pvVar9;
  char cVar10;
  char cVar11;
  ulong uVar12;
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  bool bVar20;

  uStack_a0 = 0;
  uStack_98 = 0;
  pvStack_90 = (void *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  pvStack_78 = (void *)0x0;
  local_70 = (void *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (param_3 == (undefined8 *)0x0) {
    return '\0';
  }
  local_a8 = 6;
  if (param_2 == 0) {
LAB_0209d3dd:
    uVar6 = uStack_88 + 1;
    if (local_80 < uVar6) {
      uVar19 = 0x10;
      if (local_80 != 0) {
        uVar19 = local_80;
      }
      for (; uVar19 < uVar6; uVar19 = uVar19 * 2) {
        if ((long)uVar19 < 0) {
          uVar19 = uVar6;
          break;
        }
      }
      pvVar9 = recovered_2000d40(pvStack_78,uVar19 * 0xc);
      if (pvVar9 == (void *)0x0) goto LAB_0209d3c6;
      uVar6 = uStack_88 + 1;
      local_80 = uVar19;
      pvStack_78 = pvVar9;
    }
    *(undefined1 *)((long)pvStack_78 + uStack_88 * 0xc) = 0x14;
    *(undefined8 *)((long)pvStack_78 + uStack_88 * 0xc + 4) = 0;
    param_3[10] = uStack_58;
    param_3[0xb] = local_50;
    param_3[8] = lStack_68;
    param_3[9] = local_60;
    param_3[6] = pvStack_78;
    param_3[7] = local_70;
    param_3[2] = uStack_98;
    param_3[3] = pvStack_90;
    *param_3 = CONCAT62(uStack_a6,local_a8);
    param_3[1] = uStack_a0;
    param_3[4] = uVar6;
    param_3[5] = local_80;
    uVar3 = '\x01';
  }
  else {
    lVar5 = 0;
LAB_0209ccb8:
    pcVar18 = &DAT_020a259c;
    if ((param_1 != 0) && (pcVar18 = *(char **)(param_1 + lVar5 * 8), pcVar18 == (char *)0x0)) {
      pcVar18 = &DAT_020a259c;
    }
    uVar6 = recovered_2002e80(pcVar18);
    text = recovered_2000ad0(uVar6 + 1);
    if (text == (char *)0x0) goto LAB_0209d3c6;
    if (uVar6 != 0) {
      recovered_2001410(text,pcVar18,uVar6);
    }
    text[uVar6] = '\0';
    cVar2 = *text;
    if (cVar2 != '\0') {
      bVar13 = false;
      bVar20 = false;
      pcVar18 = text;
      cVar11 = '\0';
      do {
        pcVar7 = pcVar18 + 1;
        cVar10 = cVar11;
        if (bVar20) {
          bVar20 = true;
          if (bVar13) {
            bVar13 = false;
          }
          else if (cVar2 == '\\') {
            bVar13 = true;
          }
          else {
            bVar13 = false;
            bVar20 = cVar2 != cVar11;
            if (!bVar20) {
              cVar10 = '\0';
            }
          }
        }
        else {
          bVar20 = true;
          cVar10 = cVar2;
          if ((cVar2 != '\"') && (cVar2 != '\'')) {
            if ((cVar2 == '@') && (*pcVar7 == '@')) {
              *pcVar18 = '\0';
              break;
            }
            bVar20 = false;
            cVar10 = cVar11;
          }
        }
        cVar2 = *pcVar7;
        pcVar18 = pcVar7;
        cVar11 = cVar10;
      } while (cVar2 != '\0');
    }
    for (lVar8 = 0; ((byte)text[lVar8] - 9 < 5 || (text[lVar8] == 0x20)); lVar8 = lVar8 + 1) {
    }
    if (lVar8 != 0) {
      uVar6 = recovered_2002e80(text + lVar8);
      recovered_2001850(text,text + lVar8,uVar6 + 1);
    }
    for (uVar6 = recovered_2002e80(text);
        (uVar6 != 0 && (((byte)text[uVar6 - 1] - 9 < 5 || (text[uVar6 - 1] == 0x20))));
        uVar6 = uVar6 - 1) {
      text[uVar6 - 1] = '\0';
    }
    uVar3 = recovered_209c670((long)text,local_48);
    if (uVar3 == '\0') goto LAB_0209d3be;
    uVar6 = lStack_68 + 1;
    if (uVar6 <= local_60) {
LAB_0209cee8:
      uVar6 = recovered_2002e80(text);
      pvVar9 = recovered_2000ad0(uVar6 + 1);
      if (pvVar9 == (void *)0x0) {
        *(undefined8 *)((long)local_70 + lStack_68 * 8) = 0;
        if (local_48[0] != 0) {
          uVar6 = 0;
          do {
            recovered_2000bb0(*(void **)((long)local_38 + uVar6 * 8));
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_48[0]);
        }
        goto LAB_0209d3a6;
      }
      if (uVar6 != 0) {
        recovered_2001410(pvVar9,text,uVar6);
      }
      *(undefined1 *)((long)pvVar9 + uVar6) = 0;
      *(void **)((long)local_70 + lStack_68 * 8) = pvVar9;
      lStack_68 = lStack_68 + 1;
      if (uStack_a0 != 0) {
        uVar6 = 0;
        do {
          iVar4 = recovered_2002eb0(*(char **)((long)pvStack_90 + uVar6 * 8),text);
          if (iVar4 == 0) goto LAB_0209d08b;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uStack_a0);
      }
      uVar6 = recovered_2002e80(text);
      uVar19 = uStack_a0 + 1;
      if (uStack_98 < uVar19) {
        uVar12 = uStack_98;
        if (uStack_98 == 0) {
          uVar12 = 8;
        }
        for (; uVar12 < uVar19; uVar12 = uVar12 * 2) {
          if ((long)uVar12 < 0) {
            uVar12 = uVar19;
            break;
          }
        }
        pvVar9 = recovered_2000d40(pvStack_90,uVar12 * 8);
        if (pvVar9 != (void *)0x0) {
          uVar19 = uVar12 - uStack_98;
          if (uStack_98 <= uVar12 && uVar19 != 0) {
            uVar14 = uStack_98;
            if (3 < uVar19) {
              uVar15 = uVar19 & 0xfffffffffffffffc;
              uVar14 = uStack_98 + uVar15;
              uVar16 = 0;
              do {
                puVar1 = (undefined8 *)((long)pvVar9 + uVar16 * 8 + uStack_98 * 8);
                *puVar1 = 0;
                puVar1[1] = 0;
                puVar1 = (undefined8 *)((long)pvVar9 + uVar16 * 8 + uStack_98 * 8 + 0x10);
                *puVar1 = 0;
                puVar1[1] = 0;
                uVar16 = uVar16 + 4;
              } while (uVar15 != uVar16);
              if (uVar19 == uVar15) goto LAB_0209d030;
            }
            do {
              *(undefined8 *)((long)pvVar9 + uVar14 * 8) = 0;
              uVar14 = uVar14 + 1;
            } while (uVar12 != uVar14);
          }
LAB_0209d030:
          uStack_98 = uVar12;
          pvStack_90 = pvVar9;
          goto LAB_0209d03e;
        }
LAB_0209d415:
        if (local_48[0] != 0) {
          uVar6 = 0;
          do {
            recovered_2000bb0(*(void **)((long)local_38 + uVar6 * 8));
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_48[0]);
        }
        goto LAB_0209d3a6;
      }
LAB_0209d03e:
      pvVar9 = recovered_2000ad0(uVar6 + 1);
      if (pvVar9 == (void *)0x0) goto LAB_0209d415;
      if (uVar6 != 0) {
        recovered_2001410(pvVar9,text,uVar6);
      }
      *(undefined1 *)((long)pvVar9 + uVar6) = 0;
      *(void **)((long)pvStack_90 + uStack_a0 * 8) = pvVar9;
      uVar6 = (ulong)((int)(uStack_a0 + 1) - 1);
      uStack_a0 = uStack_a0 + 1;
LAB_0209d08b:
      uVar12 = local_48[0];
      uVar19 = uStack_88 + 1;
      if (local_80 < uVar19) {
        uVar14 = local_80;
        if (local_80 == 0) {
          uVar14 = 0x10;
        }
        for (; uVar14 < uVar19; uVar14 = uVar14 * 2) {
          if ((long)uVar14 < 0) {
            uVar14 = uVar19;
            break;
          }
        }
        pvVar9 = recovered_2000d40(pvStack_78,uVar14 * 0xc);
        if (pvVar9 == (void *)0x0) goto LAB_0209d415;
        uVar19 = uStack_88 + 1;
        local_80 = uVar14;
        pvStack_78 = pvVar9;
      }
      *(undefined1 *)((long)pvStack_78 + uStack_88 * 0xc) = 0;
      *(int *)((long)pvStack_78 + uStack_88 * 0xc + 4) = (int)uVar6;
      *(int *)((long)pvStack_78 + uStack_88 * 0xc + 8) = (int)uVar12;
      uStack_88 = uVar19;
      if (local_48[0] != 0) {
        uVar6 = 0;
        do {
          pcVar18 = *(char **)((long)local_38 + uVar6 * 8);
          if (pcVar18 == (char *)0x0) {
            pcVar18 = &DAT_020a259c;
          }
          if (uStack_a0 != 0) {
            uVar19 = 0;
            do {
              iVar4 = recovered_2002eb0(*(char **)((long)pvStack_90 + uVar19 * 8),pcVar18);
              if (iVar4 == 0) goto LAB_0209d2dc;
              uVar19 = uVar19 + 1;
            } while (uVar19 < uStack_a0);
          }
          uVar19 = recovered_2002e80(pcVar18);
          uVar12 = uStack_a0 + 1;
          if (uStack_98 < uVar12) {
            uVar14 = uStack_98;
            if (uStack_98 == 0) {
              uVar14 = 8;
            }
            for (; uVar14 < uVar12; uVar14 = uVar14 * 2) {
              if ((long)uVar14 < 0) {
                uVar14 = uVar12;
                break;
              }
            }
            pvVar9 = recovered_2000d40(pvStack_90,uVar14 * 8);
            if (pvVar9 != (void *)0x0) {
              uVar12 = uVar14 - uStack_98;
              if (uStack_98 <= uVar14 && uVar12 != 0) {
                uVar15 = uStack_98;
                if (3 < uVar12) {
                  uVar16 = uVar12 & 0xfffffffffffffffc;
                  uVar15 = uStack_98 + uVar16;
                  uVar17 = 0;
                  do {
                    puVar1 = (undefined8 *)((long)pvVar9 + uVar17 * 8 + uStack_98 * 8);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    puVar1 = (undefined8 *)((long)pvVar9 + uVar17 * 8 + uStack_98 * 8 + 0x10);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    uVar17 = uVar17 + 4;
                  } while (uVar16 != uVar17);
                  if (uVar12 == uVar16) goto LAB_0209d280;
                }
                do {
                  *(undefined8 *)((long)pvVar9 + uVar15 * 8) = 0;
                  uVar15 = uVar15 + 1;
                } while (uVar14 != uVar15);
              }
LAB_0209d280:
              uStack_98 = uVar14;
              pvStack_90 = pvVar9;
              goto LAB_0209d28e;
            }
LAB_0209d382:
            if (local_48[0] != 0) {
              uVar6 = 0;
              do {
                recovered_2000bb0(*(void **)((long)local_38 + uVar6 * 8));
                uVar6 = uVar6 + 1;
              } while (uVar6 < local_48[0]);
            }
            goto LAB_0209d3a6;
          }
LAB_0209d28e:
          pvVar9 = recovered_2000ad0(uVar19 + 1);
          if (pvVar9 == (void *)0x0) goto LAB_0209d382;
          if (uVar19 != 0) {
            recovered_2001410(pvVar9,pcVar18,uVar19);
          }
          *(undefined1 *)((long)pvVar9 + uVar19) = 0;
          *(void **)((long)pvStack_90 + uStack_a0 * 8) = pvVar9;
          uVar19 = (ulong)((int)(uStack_a0 + 1) - 1);
          uStack_a0 = uStack_a0 + 1;
LAB_0209d2dc:
          uVar12 = uStack_88 + 1;
          if (local_80 < uVar12) {
            uVar14 = local_80;
            if (local_80 == 0) {
              uVar14 = 0x10;
            }
            for (; uVar14 < uVar12; uVar14 = uVar14 * 2) {
              if ((long)uVar14 < 0) {
                uVar14 = uVar12;
                break;
              }
            }
            pvVar9 = recovered_2000d40(pvStack_78,uVar14 * 0xc);
            if (pvVar9 == (void *)0x0) goto LAB_0209d382;
            uVar12 = uStack_88 + 1;
            local_80 = uVar14;
            pvStack_78 = pvVar9;
          }
          *(undefined1 *)((long)pvStack_78 + uStack_88 * 0xc) = 2;
          *(int *)((long)pvStack_78 + uStack_88 * 0xc + 4) = (int)uVar19;
          *(undefined4 *)((long)pvStack_78 + uStack_88 * 0xc + 8) = 0;
          uVar6 = uVar6 + 1;
          uStack_88 = uVar12;
        } while (uVar6 < local_48[0]);
        if (local_48[0] != 0) {
          uVar6 = 0;
          do {
            recovered_2000bb0(*(void **)((long)local_38 + uVar6 * 8));
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_48[0]);
        }
      }
      recovered_2000bb0(local_38);
      local_48[0] = 0;
      local_48[1] = 0;
      local_38 = (void *)0x0;
      recovered_2000bb0(text);
      lVar5 = lVar5 + 1;
      if (lVar5 == param_2) goto LAB_0209d3dd;
      goto LAB_0209ccb8;
    }
    uVar19 = local_60;
    if (local_60 == 0) {
      uVar19 = 0x10;
    }
    for (; uVar19 < uVar6; uVar19 = uVar19 * 2) {
      if ((long)uVar19 < 0) {
        uVar19 = uVar6;
        break;
      }
    }
    pvVar9 = recovered_2000d40(local_70,uVar19 * 8);
    if (pvVar9 != (void *)0x0) {
      uVar6 = uVar19 - local_60;
      if (local_60 <= uVar19 && uVar6 != 0) {
        uVar12 = local_60;
        if (3 < uVar6) {
          uVar14 = uVar6 & 0xfffffffffffffffc;
          uVar12 = local_60 + uVar14;
          uVar15 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar9 + uVar15 * 8 + local_60 * 8);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)((long)pvVar9 + uVar15 * 8 + local_60 * 8 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            uVar15 = uVar15 + 4;
          } while (uVar14 != uVar15);
          if (uVar6 == uVar14) goto LAB_0209cee0;
        }
        do {
          *(undefined8 *)((long)pvVar9 + uVar12 * 8) = 0;
          uVar12 = uVar12 + 1;
        } while (uVar19 != uVar12);
      }
LAB_0209cee0:
      local_70 = pvVar9;
      local_60 = uVar19;
      goto LAB_0209cee8;
    }
    if (local_48[0] != 0) {
      uVar6 = 0;
      do {
        recovered_2000bb0(*(void **)((long)local_38 + uVar6 * 8));
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_48[0]);
    }
LAB_0209d3a6:
    recovered_2000bb0(local_38);
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = (void *)0x0;
LAB_0209d3be:
    recovered_2000bb0(text);
LAB_0209d3c6:
    recovered_20c0290(&local_a8);
    uVar3 = '\0';
  }
  return uVar3;
}
