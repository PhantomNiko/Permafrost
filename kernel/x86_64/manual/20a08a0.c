/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a3be3 (*(uint8_t *)(0x20f43a4U))
#define DAT_020a3be5 (*(uint8_t *)(0x20f43a6U))
#define DAT_020a3c3f (*(uint8_t *)(0x20f4400U))
#define DAT_020a3c64 (*(uint8_t *)(0x20f4425U))
#define DAT_020a3cbb (*(uint8_t *)(0x20f447cU))
#define DAT_020a3f48 (*(uint8_t *)(0x20f4709U))
#define DAT_020a409e (*(uint8_t *)(0x20f485fU))
#define DAT_020a40a0 (*(uint8_t *)(0x20f4861U))
#define DAT_020ab676 (*(uint8_t *)(0x20f37baU))
#define DAT_020ab679 (*(uint8_t *)(0x20fccedU))
#define DAT_020ab67c (*(uint8_t *)(0x20fccf0U))
#define DAT_020ab67f (*(uint8_t *)(0x20fccf3U))
#define DAT_020e60e0 (*(uint64_t volatile *)(0x2274170U))
#define DAT_020e60f0 (*(uint64_t volatile *)(0x2274180U))
#define local_38 (*(int * *)(frame + 200))
#define local_40 (*(ulong *** *)(frame + 192))
#define local_48 (*(ulong **** *)(frame + 184))
#define local_50 (*(ulong *** *)(frame + 176))
#define local_54 (*(int *)(frame + 172))
#define local_60 (*(ulong **** *)(frame + 160))
#define local_68 (*(long * *)(frame + 152))
#define local_70 (*(ulong **** *)(frame + 144))
#define local_78 (*(ulong * *)(frame + 136))
#define local_80 (*(ulong *)(frame + 128))
#define local_88 (*(ulong ** *)(frame + 120))
#define local_90 (*(long *)(frame + 112))
#define local_98 (*(ulong *** *)(frame + 104))
#define local_a0 (*(ulong **** *)(frame + 96))
#define local_a8 (*(int * *)(frame + 88))
#define local_b0 (*(ulong ** *)(frame + 80))
#define local_c0 (*(undefined8 *)(frame + 64))
#define local_d0 (*(undefined8 *)(frame + 48))
#define local_e0 (*(undefined8 *)(frame + 32))
#define local_e8 (*(undefined4 *)(frame + 24))
#define local_f0 (*(ulong *)(frame + 16))
#define str_020a3bbd (*(char (*)[1])(0x20f437eU))
#define str_020a3bc3 (*(char (*)[1])(0x20f4384U))
#define str_020a3d85 (*(char (*)[1])(0x20f4546U))
#define str_020a4201 (*(char (*)[1])(0x20f49bcU))
#define str_020ab618 (*(char (*)[1])(0x20fcc8fU))
#define str_020ab64f (*(char (*)[1])(0x20fccc6U))
#define str_020ab682 (*(char (*)[1])(0x20fccf6U))
#define str_020ab6a7 (*(char (*)[1])(0x20fcd1bU))
#define uStack_b8 (*(undefined8 *)(frame + 72))
#define uStack_c8 (*(undefined8 *)(frame + 56))
#define uStack_d8 (*(undefined8 *)(frame + 40))
uchar recovered_20a08a0(int *param_1,ulong ****param_2,ulong ***param_3,ulong ***param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long *param_10,undefined1 *param_11)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  ulong **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  uchar uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong ****ppppuVar10;
  ulong ****ppppuVar11;
  ulong ***pppuVar12;
  ulong *puVar13;
  byte bVar14;
  ulong ***pppuVar15;
  ulong *puVar16;
  ulong unaff_RBX;
  long *plVar17;
  ulong *puVar18;
  int *context;
  long *plVar19;
  ulong *puVar20;
  char cVar21;
  char *pcVar22;
  byte bVar23;
  long lVar24;
  ulong ****ppppuVar25;
  ulong uVar26;
  ulong ***pppuVar27;
  ulong ***pppuVar28;
  bool bVar29;

  if (param_3 != (ulong ***)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  if (param_2 == (ulong ****)0x0 || param_1 == (int *)0x0) {
    return '\x01';
  }
  pppuVar15 = *param_2;
  if (pppuVar15 == (ulong ***)0x0) {
    return '\x01';
  }
  ppuVar1 = *param_2[2];
  if (ppuVar1 == (ulong **)0x0) {
LAB_020632ce:
    local_40 = (ulong ***)0x0;
    local_54 = 0;
    local_98 = (ulong ***)0x0;
    if (pppuVar15 == (ulong ***)0x0) {
      return '\x01';
    }
  }
  else {
    cVar4 = *(char *)ppuVar1;
    if (cVar4 == '\0') {
      pcVar22 = str_020a3bbd;
LAB_020632c9:
      if (*pcVar22 != '\0') goto LAB_020632ce;
      local_54 = 2;
    }
    else {
      if (cVar4 != 'n') {
        cVar21 = cVar4 + -0x20;
        if (0x19 < (byte)(cVar4 + 0x9fU)) {
          cVar21 = cVar4;
        }
        if (cVar21 == 'N') goto LAB_02063044;
LAB_02063196:
        if (cVar4 != 'l') {
          cVar21 = cVar4 + -0x20;
          if (0x19 < (byte)(cVar4 + 0x9fU)) {
            cVar21 = cVar4;
          }
          if (cVar21 != 'L') goto LAB_020632ce;
        }
        cVar4 = *(char *)((long)ppuVar1 + 1);
        if (cVar4 == '\0') {
          pcVar22 = str_020a3bbd + 1;
        }
        else {
          if (cVar4 != 'o') {
            cVar21 = cVar4 + -0x20;
            if (0x19 < (byte)(cVar4 + 0x9fU)) {
              cVar21 = cVar4;
            }
            if (cVar21 != 'O') goto LAB_020632ce;
          }
          cVar4 = *(char *)((long)ppuVar1 + 2);
          if (cVar4 == '\0') {
            pcVar22 = str_020a3bbd + 2;
          }
          else {
            if (cVar4 != 'c') {
              cVar21 = cVar4 + -0x20;
              if (0x19 < (byte)(cVar4 + 0x9fU)) {
                cVar21 = cVar4;
              }
              if (cVar21 != 'C') goto LAB_020632ce;
            }
            cVar4 = *(char *)((long)ppuVar1 + 3);
            if (cVar4 == '\0') {
              pcVar22 = str_020a3bbd + 3;
            }
            else {
              if (cVar4 != 'a') {
                cVar21 = cVar4 + -0x20;
                if (0x19 < (byte)(cVar4 + 0x9fU)) {
                  cVar21 = cVar4;
                }
                if (cVar21 != 'A') goto LAB_020632ce;
              }
              cVar4 = *(char *)((long)ppuVar1 + 4);
              if (cVar4 == '\0') {
                pcVar22 = str_020a3bbd + 4;
              }
              else {
                if (cVar4 != 'l') {
                  cVar21 = cVar4 + -0x20;
                  if (0x19 < (byte)(cVar4 + 0x9fU)) {
                    cVar21 = cVar4;
                  }
                  if (cVar21 != 'L') goto LAB_020632ce;
                }
                if (*(char *)((long)ppuVar1 + 5) != '\0') goto LAB_020632ce;
                pcVar22 = str_020a3bbd + 5;
              }
            }
          }
        }
        goto LAB_020632c9;
      }
LAB_02063044:
      bVar14 = *(byte *)((long)ppuVar1 + 1);
      if (bVar14 == 0) {
        pcVar22 = str_020a3bc3 + 1;
      }
      else {
        if (bVar14 != 0x61) {
          unaff_RBX = (ulong)(bVar14 - 0x20);
          bVar23 = (byte)(bVar14 - 0x20);
          if (0x19 < (byte)(bVar14 + 0x9f)) {
            bVar23 = bVar14;
          }
          if (bVar23 != 0x41) goto LAB_02063196;
        }
        bVar14 = *(byte *)((long)ppuVar1 + 2);
        if (bVar14 == 0) {
          pcVar22 = str_020a3bc3 + 2;
        }
        else {
          if (bVar14 != 0x74) {
            unaff_RBX = (ulong)(bVar14 - 0x20);
            bVar23 = (byte)(bVar14 - 0x20);
            if (0x19 < (byte)(bVar14 + 0x9f)) {
              bVar23 = bVar14;
            }
            if (bVar23 != 0x54) goto LAB_02063196;
          }
          bVar14 = *(byte *)((long)ppuVar1 + 3);
          if (bVar14 == 0) {
            pcVar22 = str_020a3bc3 + 3;
          }
          else {
            if (bVar14 != 0x69) {
              unaff_RBX = (ulong)(bVar14 - 0x20);
              bVar23 = (byte)(bVar14 - 0x20);
              if (0x19 < (byte)(bVar14 + 0x9f)) {
                bVar23 = bVar14;
              }
              if (bVar23 != 0x49) goto LAB_02063196;
            }
            bVar14 = *(byte *)((long)ppuVar1 + 4);
            if (bVar14 == 0) {
              pcVar22 = str_020a3bc3 + 4;
            }
            else {
              if (bVar14 != 0x76) {
                unaff_RBX = (ulong)(bVar14 - 0x20);
                bVar23 = (byte)(bVar14 - 0x20);
                if (0x19 < (byte)(bVar14 + 0x9f)) {
                  bVar23 = bVar14;
                }
                if (bVar23 != 0x56) goto LAB_02063196;
              }
              bVar14 = *(byte *)((long)ppuVar1 + 5);
              if (bVar14 == 0) {
                pcVar22 = str_020a3bc3 + 5;
              }
              else {
                if (bVar14 != 0x65) {
                  unaff_RBX = (ulong)(bVar14 - 0x20);
                  bVar23 = (byte)(bVar14 - 0x20);
                  if (0x19 < (byte)(bVar14 + 0x9f)) {
                    bVar23 = bVar14;
                  }
                  if (bVar23 != 0x45) goto LAB_02063196;
                }
                if (*(char *)((long)ppuVar1 + 6) != '\0') goto LAB_02063196;
                pcVar22 = str_020a3bc3 + 6;
              }
            }
          }
        }
      }
      if (*pcVar22 != '\0') goto LAB_02063196;
      local_54 = 1;
    }
    local_98 = (ulong ***)0x1;
    local_40 = (ulong ***)CONCAT71((int7)(unaff_RBX >> 8),1);
    if (pppuVar15 < (ulong ***)0x2) {
      return '\x01';
    }
  }
  ppuVar1 = param_2[2][(long)local_98];
  if (ppuVar1 == (ulong **)0x0) {
    return '\x01';
  }
  bVar14 = *(byte *)ppuVar1;
  if (bVar14 == 0) {
    return '\x01';
  }
  if (((0x19 < (byte)((bVar14 & 0xdf) + 0xbf)) && (bVar14 != 0x5f)) && (bVar14 != 0x24)) {
    return '\x01';
  }
  bVar14 = *(byte *)((long)ppuVar1 + 1);
  if (bVar14 != 0) {
    pbVar9 = (byte *)((long)ppuVar1 + 2);
    do {
      if (((bVar14 != 0x2e) && (bVar14 != 0x24)) &&
         ((bVar14 != 0x5f &&
          ((9 < (byte)(bVar14 - 0x30U) && (0x19 < (byte)((bVar14 & 0xdf) + 0xbf))))))) {
        return '\x01';
      }
      bVar14 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar14 != 0);
  }
  ppppuVar25 = (ulong ****)0x0;
  ppppuVar10 = (ulong ****)0x0;
  plVar17 = (long *)0x0;
  local_a8 = param_1;
  local_a0 = param_2;
  local_50 = param_3;
  local_48 = param_2;
  local_38 = param_1;
  do {
    pppuVar27 = (ulong ***)local_48[2][(long)local_98];
    if (pppuVar27 == (ulong ***)0x0) break;
    bVar14 = *(byte *)pppuVar27;
    if ((bVar14 == 0) ||
       (((0x19 < (byte)((bVar14 & 0xdf) + 0xbf) && (bVar14 != 0x5f)) && (bVar14 != 0x24)))) break;
    bVar14 = *(byte *)((long)pppuVar27 + 1);
    if (bVar14 != 0) {
      pbVar9 = (byte *)((long)pppuVar27 + 2);
      do {
        if (((bVar14 != 0x2e) && (bVar14 != 0x24)) &&
           ((bVar14 != 0x5f &&
            ((9 < (byte)(bVar14 - 0x30U) && (0x19 < (byte)((bVar14 & 0xdf) + 0xbf)))))))
        goto LAB_0206366f;
        bVar14 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar14 != 0);
    }
    plVar19 = plVar17;
    local_60 = ppppuVar25;
    if (ppppuVar25 == ppppuVar10) {
      ppppuVar10 = (ulong ****)((long)ppppuVar25 * 2);
      if (ppppuVar25 == (ulong ****)0x0) {
        ppppuVar10 = (ulong ****)0x4;
      }
      plVar19 = recovered_2000d40(plVar17,(long)ppppuVar10 << 5);
      pppuVar27 = (ulong ***)local_48[2][(long)local_98];
      if (plVar19 == (long *)0x0) {
        pcVar22 = str_020ab64f;
        local_68 = plVar17;
LAB_02063637:
        pf_varargs_205eb00___(local_38,(char *)pppuVar27,pcVar22);
LAB_0206363e:
        bVar29 = false;
        uVar5 = '\0';
        goto LAB_02063643;
      }
      pppuVar15 = *local_48;
    }
    local_98 = (ulong ***)((long)local_98 + 1);
    plVar19[(long)ppppuVar25 * 4] = (long)pppuVar27;
    plVar19[(long)ppppuVar25 * 4 + 1] = 0;
    (plVar19 + (long)ppppuVar25 * 4 + 1)[1] = 0;
    plVar19[(long)ppppuVar25 * 4 + 3] = 0;
    local_68 = plVar19;
    if (local_98 < pppuVar15) {
      local_70 = (ulong ****)(plVar19 + (long)ppppuVar25 * 4);
      do {
        iVar6 = recovered_2002eb0((char *)local_48[2][(long)local_98],&DAT_020a3be3);
        if (iVar6 != 0) {
          pppuVar15 = *local_48;
          break;
        }
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_98 = (ulong ***)((long)local_98 + 1);
        uVar5 = recovered_20a1dc0((ulonglong *)&local_a8,&local_f0);
        if (uVar5 == '\0') {
          recovered_205ec00(&local_f0);
          goto LAB_0206363e;
        }
        if ((*local_a0 <= local_98) ||
           (iVar6 = recovered_2002eb0((char *)local_a0[2][(long)local_98],&DAT_020a3be5), iVar6 != 0
           )) {
          recovered_205ec00(&local_f0);
          pppuVar27 = *local_70;
          pcVar22 = str_020a4201;
LAB_02063633:
          goto LAB_02063637;
        }
        local_98 = (ulong ***)((long)local_98 + 1);
        uVar7 = recovered_209cec0(plVar19 + (long)ppppuVar25 * 4 + 1,&local_f0);
        recovered_205ec00(&local_f0);
        if ((char)uVar7 == '\0') {
          pppuVar27 = *local_70;
          pcVar22 = str_020ab64f;
          goto LAB_02063633;
        }
        pppuVar15 = *local_48;
      } while (local_98 < pppuVar15);
    }
    ppppuVar25 = (ulong ****)((long)local_60 + 1);
    if (pppuVar15 <= local_98) {
      plVar17 = local_68;
      break;
    }
    iVar6 = recovered_2002eb0((char *)local_48[2][(long)local_98],&DAT_020a3cbb);
    plVar17 = local_68;
    if (iVar6 != 0) break;
    local_98 = (ulong ***)((long)local_98 + 1);
    pppuVar15 = *local_48;
  } while (local_98 < pppuVar15);
LAB_0206366f:
  if (ppppuVar25 == (ulong ****)0x0) {
    return '\x01';
  }
  local_68 = plVar17;
  local_60 = ppppuVar25;
  if (((byte)local_40 & local_98 == *local_48) == 1) {
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uVar5 = '\x01';
    if (plVar17[1] != 0) goto LAB_02063797;
    plVar19 = plVar17 + 5;
    ppppuVar10 = (ulong ****)0x0;
    do {
      if ((ulong ****)((long)ppppuVar25 + -1) == ppppuVar10) {
        uVar7 = local_54 - 1;
        goto LAB_02063b4c;
      }
      ppppuVar10 = (ulong ****)((long)ppppuVar10 + 1);
      lVar24 = *plVar19;
      plVar19 = plVar19 + 4;
    } while (lVar24 == 0);
    bVar29 = ppppuVar25 <= ppppuVar10;
  }
  else {
    uVar5 = '\x01';
    if (local_98 < *local_48) {
      ppuVar1 = local_48[2][(long)local_98];
      iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020a3f48);
      if ((((iVar6 == 0) || (iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020ab676), iVar6 == 0))
          || (iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020ab679), iVar6 == 0)) ||
         ((iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020ab67c), iVar6 == 0 ||
          (iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020ab67f), iVar6 == 0)))) {
        if ((ppppuVar25 != (ulong ****)0x1) &&
           (iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020a3f48), iVar6 != 0)) {
          pcVar22 = str_020ab682;
LAB_02063bae:
          uVar5 = '\0';
          pf_varargs_205eb00___(local_38,(char *)ppuVar1,pcVar22);
          bVar29 = true;
          goto LAB_02063643;
        }
        pppuVar27 = (ulong ***)((long)local_98 + 1);
        pppuVar15 = *local_48;
        local_98 = pppuVar27;
        if (pppuVar15 <= pppuVar27) {
          pcVar22 = str_020ab618;
          goto LAB_02063bae;
        }
        local_b0 = (ulong **)&DAT_020a3f48;
        ppppuVar10 = (ulong ****)0x0;
        pppuVar12 = (ulong ***)0x0;
        ppppuVar25 = (ulong ****)0x0;
        local_90 = 0;
        local_78 = (ulong *)0x0;
        local_80 = 0;
        local_70 = (ulong ****)0x0;
        ppppuVar11 = local_48;
        context = local_38;
        pppuVar28 = pppuVar27;
        local_88 = ppuVar1;
        do {
          if (pppuVar28 == pppuVar15) {
LAB_0206393d:
            local_40 = pppuVar12;
            if (pppuVar28 == pppuVar27) {
              pcVar22 = str_020ab618;
              goto LAB_02063c5c;
            }
            if (ppppuVar25 == local_70) {
              local_70 = (ulong ****)((long)ppppuVar25 * 2);
              if (ppppuVar25 == (ulong ****)0x0) {
                local_70 = (ulong ****)0x4;
              }
              uVar26 = (long)local_70 * 8;
              ppppuVar11 = recovered_2000d40(ppppuVar10,uVar26);
              if (ppppuVar11 != (ulong ****)0x0) {
                pppuVar12 = recovered_2000d40(local_40,uVar26);
                ppppuVar10 = ppppuVar11;
                if (pppuVar12 != (ulong ***)0x0) {
                  ppppuVar11 = local_48;
                  context = local_38;
                  goto LAB_02063aba;
                }
              }
              pcVar22 = str_020ab64f;
              goto LAB_02063c55;
            }
LAB_02063aba:
            ppppuVar10[(long)ppppuVar25] = pppuVar27;
            pppuVar12[(long)ppppuVar25] = (ulong **)pppuVar28;
            ppppuVar25 = (ulong ****)((long)ppppuVar25 + 1);
            pppuVar27 = (ulong ***)((long)pppuVar28 + 1);
          }
          else {
            ppuVar1 = ppppuVar11[2][(long)pppuVar28];
            local_40 = pppuVar27;
            iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020a3c3f);
            if (iVar6 == 0) {
              local_80 = local_80 + 1;
            }
            else {
              iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020a3c64);
              if (iVar6 == 0) {
                bVar29 = local_80 == 0;
                local_80 = local_80 - 1;
                if (bVar29) {
                  local_80 = 0;
                }
              }
              else {
                iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020a3be3);
                if (iVar6 == 0) {
                  local_78 = (ulong *)((long)local_78 + 1);
                }
                else {
                  iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020a3be5);
                  if (iVar6 == 0) {
                    bVar29 = local_78 == (ulong *)0x0;
                    local_78 = (ulong *)((long)local_78 + -1);
                    if (bVar29) {
                      local_78 = (ulong *)0x0;
                    }
                  }
                  else {
                    iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020a409e);
                    if (iVar6 == 0) {
                      local_90 = local_90 + 1;
                    }
                    else {
                      iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020a40a0);
                      if (iVar6 == 0) {
                        bVar29 = local_90 == 0;
                        local_90 = local_90 + -1;
                        if (bVar29) {
                          local_90 = 0;
                        }
                      }
                      else if (((local_80 == 0) && (local_78 == (ulong *)0x0)) && (local_90 == 0)) {
                        iVar6 = recovered_2002eb0((char *)ppuVar1,&DAT_020a3cbb);
                        ppppuVar11 = local_48;
                        pppuVar27 = local_40;
                        context = local_38;
                        if (iVar6 == 0) goto LAB_0206393d;
                        local_80 = 0;
                        local_78 = (ulong *)0x0;
                        local_90 = 0;
                        goto LAB_02063929;
                      }
                    }
                  }
                }
              }
            }
            ppppuVar11 = local_48;
            pppuVar27 = local_40;
            context = local_38;
          }
LAB_02063929:
          pppuVar28 = (ulong ***)((long)pppuVar28 + 1);
          pppuVar15 = *ppppuVar11;
        } while (pppuVar28 <= pppuVar15);
        puVar13 = recovered_2000ad0((long)ppppuVar25 << 6);
        local_40 = pppuVar12;
        if (puVar13 != (ulong *)0x0) {
          if (ppppuVar25 != (ulong ****)0x0) {
            if (ppppuVar25 == (ulong ****)0x1) {
              uVar26 = 0;
            }
            else {
              puVar16 = puVar13 + 0xf;
              uVar26 = 0;
              do {
                puVar16[-0xf] = 0;
                *(int *)(puVar16 + -0xe) = 0;
                puVar16[-0xd] = 0;
                puVar16[-0xc] = 0;
                puVar16[-0xb] = 0;
                puVar16[-10] = 0;
                puVar16[-9] = 0;
                puVar16[-8] = 0;
                puVar16[-7] = 0;
                *(int *)(puVar16 + -6) = 0;
                puVar16[-5] = 0;
                puVar16[-4] = 0;
                puVar16[-3] = 0;
                puVar16[-2] = 0;
                puVar16[-1] = 0;
                *puVar16 = 0;
                uVar26 = uVar26 + 2;
                puVar16 = puVar16 + 0x10;
              } while (((ulong)ppppuVar25 & 0xfffffffffffffffe) != uVar26);
            }
            if (((ulong)ppppuVar25 & 1) != 0) {
              puVar13[uVar26 * 8] = 0;
              *(int *)(puVar13 + uVar26 * 8 + 1) = 0;
              puVar13[uVar26 * 8 + 2] = 0;
              (puVar13 + uVar26 * 8 + 2)[1] = 0;
              puVar13[uVar26 * 8 + 4] = 0;
              (puVar13 + uVar26 * 8 + 4)[1] = 0;
              puVar13[uVar26 * 8 + 6] = 0;
              (puVar13 + uVar26 * 8 + 6)[1] = 0;
            }
            ppppuVar11 = (ulong ****)0x0;
            puVar16 = puVar13;
            do {
              uVar5 = recovered_20a01c0((long)local_38,(ulong *)local_48,
                                        (ulong)ppppuVar10[(long)ppppuVar11],
                                        (ulong)local_40[(long)ppppuVar11],puVar16);
              if (uVar5 == '\0') {
                bVar29 = true;
                uVar5 = '\0';
                goto LAB_020637aa;
              }
              ppppuVar11 = (ulong ****)((long)ppppuVar11 + 1);
              puVar16 = puVar16 + 8;
            } while (ppppuVar25 != ppppuVar11);
          }
          local_f0 = 0;
          local_e8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_70 = ppppuVar10;
          if (ppppuVar25 == (ulong ****)0x0) {
            ppppuVar10 = (ulong ****)0x0;
          }
          else {
            if (local_60 == (ulong ****)0x1) {
              local_b0 = local_88;
            }
            local_48 = local_60;
            if (ppppuVar25 < local_60) {
              local_48 = ppppuVar25;
            }
            puVar16 = (ulong *)(local_68 + 1);
            puVar18 = puVar13;
            ppppuVar11 = (ulong ****)0x1;
            do {
              ppppuVar10 = ppppuVar11;
              puVar20 = puVar18;
              if (((int)*puVar18 == 7) && (uVar26 = puVar18[5], uVar26 != 0)) {
                bVar14 = *(byte *)(uVar26 + 4);
                if ((local_60 == (ulong ****)0x1) && (bVar14 != 0)) {
                  if (*(long *)(uVar26 + 8) == 0) {
                    puVar16 = &local_f0;
                  }
                  else {
                    puVar16 = *(ulong **)(uVar26 + 0x18);
                  }
                  uVar7 = recovered_20e1c70(local_38,local_54,*local_68,(ulong *)(local_68 + 1),
                                            (byte *)local_88,(long)puVar16);
                  uVar5 = (uchar)uVar7;
                  goto LAB_02063f9e;
                }
                if ((ppppuVar25 == ppppuVar10 & bVar14) == 1) {
                  uVar5 = '\x01';
                  if (local_60 <= (ulong ****)((long)ppppuVar10 - 1U)) goto LAB_02063f9e;
                  ppppuVar11 = (ulong ****)0x0;
                  uVar26 = 0;
                  goto LAB_02063f0e;
                }
                if ((bVar14 != 0) && (puVar20 = &local_f0, *(long *)(uVar26 + 8) != 0)) {
                  puVar20 = *(ulong **)(uVar26 + 0x18);
                }
              }
              uVar7 = recovered_20e1c70(local_38,local_54,puVar16[-1],puVar16,(byte *)local_b0,
                                        (long)puVar20);
              if ((char)uVar7 == '\0') goto LAB_02063f70;
              puVar16 = puVar16 + 4;
              puVar18 = puVar18 + 8;
              ppppuVar11 = (ulong ****)((long)ppppuVar10 + 1);
            } while (ppppuVar10 < local_48);
          }
          uVar5 = '\x01';
          if (ppppuVar10 < local_60) {
            uVar7 = recovered_20e1c70(local_38,local_54,local_68[(long)ppppuVar10 * 4],
                                      (ulong *)(local_68 + (long)ppppuVar10 * 4 + 1),&DAT_020a3f48,
                                      (long)&local_f0);
            if ((char)uVar7 == '\0') {
              uVar5 = '\0';
            }
            else {
              puVar16 = (ulong *)(local_68 + (long)ppppuVar10 * 4 + 5);
              do {
                ppppuVar10 = (ulong ****)((long)ppppuVar10 + 1);
                if (local_60 == ppppuVar10) break;
                uVar7 = recovered_20e1c70(local_38,local_54,puVar16[-1],puVar16,&DAT_020a3f48,
                                          (long)&local_f0);
                puVar16 = puVar16 + 4;
              } while ((char)uVar7 != '\0');
              uVar5 = local_60 <= ppppuVar10;
            }
          }
          goto LAB_02063f9e;
        }
        pcVar22 = str_020ab6a7;
LAB_02063c55:
        context = local_38;
LAB_02063c5c:
        uVar5 = '\0';
        pf_varargs_205eb00___(context,(char *)local_88,pcVar22);
        bVar29 = true;
      }
      else {
        bVar29 = false;
LAB_02063643:
        ppppuVar25 = (ulong ****)0x0;
        local_40 = (ulong ***)0x0;
        ppppuVar10 = (ulong ****)0x0;
      }
      puVar13 = (ulong *)0x0;
      goto LAB_020637aa;
    }
LAB_02063797:
    uVar5 = '\x01';
    bVar29 = false;
  }
  goto LAB_02063799;
  while( true ) {
    ppppuVar11 = local_48 + 8;
    uVar26 = local_80 + 1;
    puVar16 = local_78 + 4;
    if (local_60 <= (ulong ****)((long)ppppuVar10 + local_80)) break;
LAB_02063f0e:
    puVar20 = &local_f0;
    if (uVar26 < *(ulong *)(puVar18[5] + 8)) {
      puVar20 = (ulong *)(*(long *)(puVar18[5] + 0x18) + (long)ppppuVar11);
    }
    local_80 = uVar26;
    local_78 = puVar16;
    local_48 = ppppuVar11;
    uVar7 = recovered_20e1c70(local_38,local_54,puVar16[-1],puVar16,&DAT_020a3f48,(long)puVar20);
    if ((char)uVar7 == '\0') goto LAB_02063f70;
  }
LAB_02063f9e:
  bVar29 = true;
  ppppuVar10 = local_70;
  goto LAB_020637aa;
LAB_02063f70:
  uVar5 = '\0';
  goto LAB_02063f9e;
  while( true ) {
    plVar17 = plVar17 + 4;
    ppppuVar25 = (ulong ****)((long)ppppuVar25 + -1);
    if (ppppuVar25 == (ulong ****)0x0) break;
LAB_02063b4c:
    if (uVar7 < 2) {
      lVar24 = DAT_020e60e0;
      uVar2 = DAT_020e60f0;
      uVar2 = DAT_020e60f0;
      lVar3 = DAT_020e60f0;
      plVar19 = (long *)(lVar24 * 0x18 + lVar3 + -0x18);
      if (plVar19 == (long *)0x0 || lVar24 == 0) goto LAB_02063b7e;
      uVar8 = recovered_20df440(plVar19,*plVar17,(long)&local_f0);
      cVar4 = (char)uVar8;
    }
    else {
LAB_02063b7e:
      uVar8 = recovered_20a0540(*plVar17,&local_f0);
      cVar4 = (char)uVar8;
    }
    if (cVar4 == '\0') {
      uVar5 = '\0';
      pf_varargs_205eb00__8_(local_38,(char *)*plVar17,str_020a3d85,(ulonglong)*plVar17);
      goto LAB_02063be3;
    }
  }
  uVar5 = '\x01';
LAB_02063be3:
  bVar29 = true;
LAB_02063799:
  ppppuVar25 = (ulong ****)0x0;
  local_40 = (ulong ***)0x0;
  puVar13 = (ulong *)0x0;
  ppppuVar10 = (ulong ****)0x0;
LAB_020637aa:
  if (local_50 != (ulong ***)0x0) {
    *(bool *)local_50 = bVar29;
  }
  if (ppppuVar25 != (ulong ****)0x0 && puVar13 != (ulong *)0x0) {
    puVar16 = puVar13;
    do {
      recovered_205ec00(puVar16);
      puVar16 = puVar16 + 8;
      ppppuVar25 = (ulong ****)((long)ppppuVar25 + -1);
    } while (ppppuVar25 != (ulong ****)0x0);
  }
  recovered_2000bb0(puVar13);
  recovered_2000bb0(ppppuVar10);
  recovered_2000bb0(local_40);
  if (local_68 != (long *)0x0) {
    if (local_60 != (ulong ****)0x0) {
      ppppuVar10 = (ulong ****)0x0;
      do {
        plVar17 = local_68;
        puVar13 = (ulong *)(local_68 + (long)ppppuVar10 * 4 + 1);
        if (local_68[(long)ppppuVar10 * 4 + 1] != 0) {
          lVar24 = 0;
          uVar26 = 0;
          do {
            recovered_205ec00((undefined8 *)(plVar17[(long)ppppuVar10 * 4 + 3] + lVar24));
            uVar26 = uVar26 + 1;
            lVar24 = lVar24 + 0x40;
          } while (uVar26 < *puVar13);
        }
        recovered_2000bb0((void *)plVar17[(long)ppppuVar10 * 4 + 3]);
        *puVar13 = 0;
        plVar17[(long)ppppuVar10 * 4 + 2] = 0;
        plVar17[(long)ppppuVar10 * 4 + 3] = 0;
        ppppuVar10 = (ulong ****)((long)ppppuVar10 + 1);
      } while (ppppuVar10 != local_60);
    }
    recovered_2000bb0(local_68);
  }
  return uVar5;
}
