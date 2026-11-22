/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define local_14 (*(byte * *)(frame + 92))
#define local_18 (*(void * *)(frame + 88))
#define local_20 (*(uint (*)[2])(frame + 80))
#define local_24 (*(uint *)(frame + 76))
#define local_28 (*(undefined4 *)(frame + 72))
#define local_2c (*(undefined4 *)(frame + 68))
#define local_30 (*(uint *)(frame + 64))
#define local_34 (*(int *)(frame + 60))
#define local_38 (*(void * *)(frame + 56))
#define local_3c (*(void * *)(frame + 52))
#define local_40 (*(uint *)(frame + 48))
#define local_44 (*(uint *)(frame + 44))
#define local_48 (*(void * *)(frame + 40))
#define local_4c (*(uint *)(frame + 36))
#define local_50 (*(uint *)(frame + 32))
#define local_54 (*(undefined4 *)(frame + 28))
undefined4 recovered_20be4c0(int incoming_ecx,int incoming_edx,undefined4 *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  bool bVar11;
  uint extraout_EDX = 0;
  undefined4 *puVar12;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  char *pcVar16;
  uint uVar17;
  bool bVar18;
  byte bVar19;

  bVar19 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = (void *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_3c = (void *)0x0;
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  PF_PART2(local_54, 0) = 6;
  if (incoming_edx == 0) {
LAB_02087eef:
    uVar8 = local_44 + 1;
    if (local_40 < uVar8) {
      uVar10 = 0x10;
      if (local_40 != 0) {
        uVar10 = local_40;
      }
      for (; uVar10 < uVar8; uVar10 = uVar10 * 2) {
        if ((int)uVar10 < 0) {
          uVar10 = uVar8;
          break;
        }
      }
      pvVar9 = recovered_2001860(local_3c,uVar10 * 0xc);
      uVar8 = extraout_EDX_01;
      if (pvVar9 == (void *)0x0) goto LAB_02087e7f;
      local_3c = pvVar9;
      local_40 = uVar10;
      uVar8 = local_44 + 1;
    }
    *(undefined1 *)((int)local_3c + local_44 * 0xc) = 0x14;
    *(undefined4 *)((int)local_3c + local_44 * 0xc + 4) = 0;
    *(undefined4 *)((int)local_3c + local_44 * 0xc + 8) = 0;
    local_44 = uVar8;
    puVar12 = &local_54;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *puVar12;
      puVar12 = puVar12 + (uint)bVar19 * -2 + 1;
      param_3 = param_3 + (uint)bVar19 * -2 + 1;
    }
    uVar7 = CONCAT31((int3)((uint)local_3c >> 8),1);
  }
  else {
    iVar2 = 0;
LAB_020878ed:
    if (incoming_ecx == 0) {
      pcVar14 = &DAT_0208e2dc;
    }
    else {
      pcVar16 = *(char **)(incoming_ecx + iVar2 * 4);
      pcVar14 = &DAT_0208e2dc;
      if (pcVar16 != (char *)0x0) {
        pcVar14 = pcVar16;
      }
    }
    uVar3 = recovered_2002270(pcVar14);
    pbVar4 = recovered_2001650(uVar3 + 1);
    uVar8 = extraout_EDX;
    local_14 = pbVar4;
    if (pbVar4 == (byte *)0x0) goto LAB_02087e7f;
    if (uVar3 != 0) {
      recovered_2001b70(pbVar4,pcVar14,uVar3);
    }
    pbVar4[uVar3] = 0;
    bVar1 = *pbVar4;
    if (bVar1 != 0) {
      local_24 = 0;
      bVar11 = false;
      bVar18 = false;
      pbVar15 = pbVar4;
      do {
        pbVar5 = pbVar15 + 1;
        if (bVar18) {
          bVar18 = true;
          if (bVar11) {
            bVar11 = false;
          }
          else if (bVar1 == 0x5c) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
            bVar18 = bVar1 != (byte)local_24;
            if (!bVar18) {
              local_24 = 0;
            }
          }
        }
        else {
          bVar18 = true;
          if (bVar1 == 0x22) {
            local_24 = (uint)bVar1;
          }
          else {
            pbVar4 = local_14;
            if (bVar1 == 0x27) {
              local_24 = (uint)bVar1;
            }
            else {
              if ((bVar1 == 0x40) && (*pbVar5 == 0x40)) {
                *pbVar15 = 0;
                break;
              }
              bVar18 = false;
            }
          }
        }
        bVar1 = *pbVar5;
        pbVar15 = pbVar5;
      } while (bVar1 != 0);
    }
    for (iVar6 = 0; (pbVar4[iVar6] - 9 < 5 || (pbVar4[iVar6] == 0x20)); iVar6 = iVar6 + 1) {
    }
    if (iVar6 != 0) {
      pbVar15 = local_14 + iVar6;
      uVar3 = recovered_2002270((char *)pbVar15);
      pbVar4 = local_14;
      recovered_2001c30(local_14,pbVar15,uVar3 + 1);
    }
    uVar3 = recovered_2002270((char *)pbVar4);
    while ((uVar3 != 0 && ((pbVar4[uVar3 - 1] - 9 < 5 || (pbVar4[uVar3 - 1] == 0x20))))) {
      pbVar4[uVar3 - 1] = 0;
      uVar3 = uVar3 - 1;
    }
    uVar7 = recovered_207a500((char *)pbVar4,local_20);
    if ((char)uVar7 == '\0') goto LAB_02087e77;
    uVar8 = local_34 + 1;
    if (uVar8 <= local_30) {
LAB_02087ad5:
      uVar3 = recovered_2002270((char *)pbVar4);
      pvVar9 = recovered_2001650(uVar3 + 1);
      if (pvVar9 == (void *)0x0) {
        *(undefined4 *)((int)local_38 + local_34 * 4) = 0;
        if (local_20[0] != 0) {
          uVar8 = 0;
          do {
            recovered_2001710(*(void **)((int)local_18 + uVar8 * 4));
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_20[0]);
        }
        goto LAB_02087e54;
      }
      if (uVar3 != 0) {
        recovered_2001b70(pvVar9,pbVar4,uVar3);
      }
      *(undefined1 *)((int)pvVar9 + uVar3) = 0;
      *(void **)((int)local_38 + local_34 * 4) = pvVar9;
      local_34 = local_34 + 1;
      if (local_50 != 0) {
        uVar8 = 0;
        do {
          iVar6 = recovered_20022a0(*(char **)((int)local_48 + uVar8 * 4),(char *)pbVar4);
          if (iVar6 == 0) goto LAB_02087bf1;
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_50);
      }
      uVar3 = recovered_2002270((char *)pbVar4);
      uVar8 = local_50 + 1;
      if (local_4c < uVar8) {
        uVar10 = 8;
        if (local_4c != 0) {
          uVar10 = local_4c;
        }
        for (; uVar10 < uVar8; uVar10 = uVar10 * 2) {
          if ((int)uVar10 < 0) {
            uVar10 = uVar8;
            break;
          }
        }
        pvVar9 = recovered_2001860(local_48,uVar10 * 4);
        if (pvVar9 != (void *)0x0) {
          iVar6 = uVar10 - local_4c;
          if (local_4c <= uVar10 && iVar6 != 0) {
            puVar12 = (undefined4 *)((int)pvVar9 + local_4c * 4);
            do {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_4c = uVar10;
          local_48 = pvVar9;
          goto LAB_02087bb2;
        }
LAB_02087e8e:
        if (local_20[0] != 0) {
          uVar8 = 0;
          do {
            recovered_2001710(*(void **)((int)local_18 + uVar8 * 4));
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_20[0]);
        }
        goto LAB_02087e54;
      }
LAB_02087bb2:
      pvVar9 = recovered_2001650(uVar3 + 1);
      if (pvVar9 == (void *)0x0) goto LAB_02087e8e;
      if (uVar3 != 0) {
        recovered_2001b70(pvVar9,local_14,uVar3);
      }
      *(undefined1 *)((int)pvVar9 + uVar3) = 0;
      *(void **)((int)local_48 + local_50 * 4) = pvVar9;
      uVar8 = local_50;
      local_50 = local_50 + 1;
LAB_02087bf1:
      uVar17 = local_20[0];
      uVar10 = local_44 + 1;
      if (local_40 < uVar10) {
        uVar13 = 0x10;
        if (local_40 != 0) {
          uVar13 = local_40;
        }
        for (; uVar13 < uVar10; uVar13 = uVar13 * 2) {
          if ((int)uVar13 < 0) {
            uVar13 = uVar10;
            break;
          }
        }
        pvVar9 = recovered_2001860(local_3c,uVar13 * 0xc);
        if (pvVar9 == (void *)0x0) goto LAB_02087e8e;
        uVar10 = local_44 + 1;
        local_40 = uVar13;
        local_3c = pvVar9;
      }
      *(undefined1 *)((int)local_3c + local_44 * 0xc) = 0;
      *(uint *)((int)local_3c + local_44 * 0xc + 4) = uVar8;
      *(uint *)((int)local_3c + local_44 * 0xc + 8) = uVar17;
      local_44 = uVar10;
      if (local_20[0] != 0) {
        uVar8 = 0;
        do {
          pcVar14 = *(char **)((int)local_18 + uVar8 * 4);
          pcVar16 = &DAT_0208e2dc;
          if (pcVar14 != (char *)0x0) {
            pcVar16 = pcVar14;
          }
          local_24 = uVar8;
          if (local_50 != 0) {
            uVar8 = 0;
            do {
              iVar6 = recovered_20022a0(*(char **)((int)local_48 + uVar8 * 4),pcVar16);
              if (iVar6 == 0) goto LAB_02087da0;
              uVar8 = uVar8 + 1;
            } while (uVar8 < local_50);
          }
          uVar3 = recovered_2002270(pcVar16);
          uVar8 = local_50 + 1;
          if (local_4c < uVar8) {
            uVar10 = 8;
            if (local_4c != 0) {
              uVar10 = local_4c;
            }
            for (; uVar10 < uVar8; uVar10 = uVar10 * 2) {
              if ((int)uVar10 < 0) {
                uVar10 = uVar8;
                break;
              }
            }
            pvVar9 = recovered_2001860(local_48,uVar10 * 4);
            if (pvVar9 != (void *)0x0) {
              iVar6 = uVar10 - local_4c;
              if (local_4c <= uVar10 && iVar6 != 0) {
                puVar12 = (undefined4 *)((int)pvVar9 + local_4c * 4);
                do {
                  *puVar12 = 0;
                  puVar12 = puVar12 + 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              local_4c = uVar10;
              local_48 = pvVar9;
              goto LAB_02087d64;
            }
LAB_02087e29:
            if (local_20[0] != 0) {
              uVar8 = 0;
              do {
                recovered_2001710(*(void **)((int)local_18 + uVar8 * 4));
                uVar8 = uVar8 + 1;
              } while (uVar8 < local_20[0]);
            }
            goto LAB_02087e54;
          }
LAB_02087d64:
          pvVar9 = recovered_2001650(uVar3 + 1);
          if (pvVar9 == (void *)0x0) goto LAB_02087e29;
          if (uVar3 != 0) {
            recovered_2001b70(pvVar9,pcVar16,uVar3);
          }
          *(undefined1 *)((int)pvVar9 + uVar3) = 0;
          *(void **)((int)local_48 + local_50 * 4) = pvVar9;
          uVar8 = local_50;
          local_50 = local_50 + 1;
LAB_02087da0:
          uVar10 = local_44 + 1;
          if (local_40 < uVar10) {
            uVar17 = 0x10;
            if (local_40 != 0) {
              uVar17 = local_40;
            }
            for (; uVar17 < uVar10; uVar17 = uVar17 * 2) {
              if ((int)uVar17 < 0) {
                uVar17 = uVar10;
                break;
              }
            }
            pvVar9 = recovered_2001860(local_3c,uVar17 * 0xc);
            if (pvVar9 == (void *)0x0) goto LAB_02087e29;
            uVar10 = local_44 + 1;
            local_40 = uVar17;
            local_3c = pvVar9;
          }
          *(undefined1 *)((int)local_3c + local_44 * 0xc) = 2;
          *(uint *)((int)local_3c + local_44 * 0xc + 4) = uVar8;
          *(undefined4 *)((int)local_3c + local_44 * 0xc + 8) = 0;
          uVar8 = local_24 + 1;
          local_44 = uVar10;
        } while (uVar8 < local_20[0]);
        if (local_20[0] != 0) {
          uVar8 = 0;
          do {
            recovered_2001710(*(void **)((int)local_18 + uVar8 * 4));
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_20[0]);
        }
      }
      recovered_2001710(local_18);
      local_20[0] = 0;
      local_20[1] = 0;
      local_18 = (void *)0x0;
      recovered_2001710(local_14);
      iVar2 = iVar2 + 1;
      if (iVar2 == incoming_edx) goto LAB_02087eef;
      goto LAB_020878ed;
    }
    uVar10 = 0x10;
    if (local_30 != 0) {
      uVar10 = local_30;
    }
    for (; uVar10 < uVar8; uVar10 = uVar10 * 2) {
      if ((int)uVar10 < 0) {
        uVar10 = uVar8;
        break;
      }
    }
    pvVar9 = recovered_2001860(local_38,uVar10 * 4);
    if (pvVar9 != (void *)0x0) {
      iVar6 = uVar10 - local_30;
      if (local_30 <= uVar10 && iVar6 != 0) {
        puVar12 = (undefined4 *)((int)pvVar9 + local_30 * 4);
        do {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      pbVar4 = local_14;
      local_38 = pvVar9;
      local_30 = uVar10;
      goto LAB_02087ad5;
    }
    if (local_20[0] != 0) {
      uVar8 = 0;
      do {
        recovered_2001710(*(void **)((int)local_18 + uVar8 * 4));
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_20[0]);
    }
LAB_02087e54:
    recovered_2001710(local_18);
    local_20[0] = 0;
    local_20[1] = 0;
    local_18 = (void *)0x0;
    pbVar4 = local_14;
LAB_02087e77:
    recovered_2001710(pbVar4);
    uVar8 = extraout_EDX_00;
LAB_02087e7f:
    recovered_209bc20((undefined2 *)&local_54,uVar8);
    uVar7 = 0;
  }
  return uVar7;
}
