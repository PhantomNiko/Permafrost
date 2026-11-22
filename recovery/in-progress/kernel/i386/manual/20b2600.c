/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c69ee (*(uint8_t *)(0x20c69eeU))
#define DAT_020c79e2 (*(uint8_t *)(0x20c79e2U))
#define DAT_020c79e3 (*(uint8_t *)(0x20c79e3U))
#define DAT_020c79e4 (*(uint8_t *)(0x20c79e4U))
#define DAT_020c79e5 (*(uint8_t *)(0x20c79e5U))
#define DAT_020cb89e (*(uint8_t *)(0x20cb89eU))
#define DAT_020d32b7 (*(uint8_t *)(0x20d32b7U))
#define DAT_020d33ce (*(uint8_t *)(0x20d33ceU))
#define DAT_020d33cf (*(uint8_t *)(0x20d33cfU))
#define DAT_020d33d0 (*(uint8_t *)(0x20d33d0U))
#define DAT_020d33d1 (*(uint8_t *)(0x20d33d1U))
#define DAT_020d33d2 (*(uint8_t *)(0x20d33d2U))
#define DAT_020d33d3 (*(uint8_t *)(0x20d33d3U))
#define DAT_020d33d4 (*(uint8_t *)(0x20d33d4U))
#define DAT_020d33d5 (*(uint8_t *)(0x20d33d5U))
#define DAT_020d33d6 (*(uint8_t *)(0x20d33d6U))
#define DAT_020d33d7 (*(uint8_t *)(0x20d33d7U))
#define DAT_020d33e3 (*(uint8_t *)(0x20d33e3U))
#define DAT_020d343b (*(uint8_t *)(0x20d343bU))
#define DAT_020d343c (*(uint8_t *)(0x20d343cU))
#define DAT_020d343d (*(uint8_t *)(0x20d343dU))
#define DAT_020d343e (*(uint8_t *)(0x20d343eU))
#define DAT_020d343f (*(uint8_t *)(0x20d343fU))
#define DAT_020d3440 (*(uint8_t *)(0x20d3440U))
#define DAT_020d3442 (*(uint8_t *)(0x20d3442U))
#define DAT_020d3443 (*(uint8_t *)(0x20d3443U))
#define DAT_020d3444 (*(uint8_t *)(0x20d3444U))
#define DAT_020d3445 (*(uint8_t *)(0x20d3445U))
#define DAT_020d3446 (*(uint8_t *)(0x20d3446U))
#define DAT_020d3447 (*(uint8_t *)(0x20d3447U))
#define DAT_020d3448 (*(uint8_t *)(0x20d3448U))
#define DAT_020d3449 (*(uint8_t *)(0x20d3449U))
#define DAT_020d352e (*(uint8_t *)(0x20d352eU))
#define DAT_020d352f (*(uint8_t *)(0x20d352fU))
#define DAT_020d3530 (*(uint8_t *)(0x20d3530U))
#define DAT_020d3531 (*(uint8_t *)(0x20d3531U))
#define DAT_020d3532 (*(uint8_t *)(0x20d3532U))
#define DAT_020d3533 (*(uint8_t *)(0x20d3533U))
#define DAT_020d35cd (*(uint8_t *)(0x20d35cdU))
#define DAT_020d3622 (*(uint8_t *)(0x20d3622U))
#define DAT_020d3634 (*(uint8_t *)(0x20d3634U))
#define DAT_020d36ea (*(uint8_t *)(0x20d36eaU))
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_020de4f0 (*(uint32_t volatile *)(0x20de4f0U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_02130728 (*(uint32_t volatile *)(0x2130728U))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define DAT_021ec533 (*(uint8_t volatile *)(0x21ec533U))
#define DAT_02238eec (*(uint32_t volatile *)(0x2238eecU))
#define DAT_0223936c (*(uint32_t volatile *)(0x223936cU))
#define DAT_0223b708 (*(uint8_t volatile *)(0x223b708U))
#define PTR_DAT_020d9b44 (*(uint8_t * *)(0x20d9b44U))
#define str_020d173e (*(char (*)[1])(0x20d173eU))
#define str_020d21b0 (*(char (*)[1])(0x20d21b0U))
#define str_020d31e5 (*(char (*)[1])(0x20d31e5U))
#define str_020d324c (*(char (*)[1])(0x20d324cU))
#define str_020d326e (*(char (*)[1])(0x20d326eU))
#define str_020d3290 (*(char (*)[1])(0x20d3290U))
#define str_020d32bb (*(char (*)[1])(0x20d32bbU))
#define str_020d32d9 (*(char (*)[1])(0x20d32d9U))
#define str_020d3313 (*(char (*)[1])(0x20d3313U))
#define str_020d3339 (*(char (*)[1])(0x20d3339U))
#define str_020d3368 (*(char (*)[1])(0x20d3368U))
#define str_020d3398 (*(char (*)[1])(0x20d3398U))
#define str_020d33dc (*(char (*)[1])(0x20d33dcU))
#define str_020d342e (*(char (*)[1])(0x20d342eU))
#define str_020d344a (*(char (*)[1])(0x20d344aU))
#define str_020d345d (*(char (*)[1])(0x20d345dU))
#define str_020d3470 (*(char (*)[1])(0x20d3470U))
#define str_020d3487 (*(char (*)[1])(0x20d3487U))
#define str_020d349e (*(char (*)[1])(0x20d349eU))
#define str_020d34b1 (*(char (*)[1])(0x20d34b1U))
#define str_020d34c4 (*(char (*)[1])(0x20d34c4U))
#define str_020d34d6 (*(char (*)[1])(0x20d34d6U))
#define str_020d34e8 (*(char (*)[1])(0x20d34e8U))
#define str_020d34f7 (*(char (*)[1])(0x20d34f7U))
#define str_020d3502 (*(char (*)[1])(0x20d3502U))
#define str_020d358d (*(char (*)[1])(0x20d358dU))
#define str_020d3596 (*(char (*)[1])(0x20d3596U))
#define str_020d359e (*(char (*)[1])(0x20d359eU))
#define str_020d35a9 (*(char (*)[1])(0x20d35a9U))
#define str_020d35b5 (*(char (*)[1])(0x20d35b5U))
#define str_020d35d2 (*(char (*)[1])(0x20d35d2U))
#define str_020d35dc (*(char (*)[1])(0x20d35dcU))
#define str_020d35e7 (*(char (*)[1])(0x20d35e7U))
#define str_020d35f2 (*(char (*)[1])(0x20d35f2U))
#define str_020d35fc (*(char (*)[1])(0x20d35fcU))
#define str_020d3606 (*(char (*)[1])(0x20d3606U))
#define str_020d3610 (*(char (*)[1])(0x20d3610U))
#define str_020d3619 (*(char (*)[1])(0x20d3619U))
#define str_020d3625 (*(char (*)[1])(0x20d3625U))
#define str_020d362d (*(char (*)[1])(0x20d362dU))
#define str_020d3639 (*(char (*)[1])(0x20d3639U))
#define str_020d3656 (*(char (*)[1])(0x20d3656U))
#define str_020d3664 (*(char (*)[1])(0x20d3664U))
#define str_020d3689 (*(char (*)[1])(0x20d3689U))
#define local_172c (*(uchar (*)[4904])(frame + 20))
#define local_404 (*(uint (*)[128])(frame + 4924))
#define local_204 (*(char (*)[160])(frame + 5436))
#define local_164 (*(uchar *)(frame + 5596))
#define local_163 (*(uchar (*)[191])(frame + 5597))
#define local_a4 (*(uint (*)[16])(frame + 5788))
#define local_64 (*(uint *)(frame + 5852))
#define local_60 (*(int *)(frame + 5856))
#define local_5c (*(uint * *)(frame + 5860))
#define local_58 (*(uint *)(frame + 5864))
#define local_54 (*(uint *)(frame + 5868))
#define local_50 (*(uint *)(frame + 5872))
#define local_4c (*(uint *)(frame + 5876))
#define local_48 (*(uint *)(frame + 5880))
#define local_44 (*(byte * *)(frame + 5884))
#define local_40 (*(uint *)(frame + 5888))
#define local_3c (*(int *)(frame + 5892))
#define local_38 (*(uint * *)(frame + 5896))
#define local_34 (*(uint *)(frame + 5900))
#define local_2f (*(char *)(frame + 5905))
#define local_2e (*(byte *)(frame + 5906))
#define local_2d (*(uchar *)(frame + 5907))
#define local_2c (*(uint *)(frame + 5908))
#define local_28 (*(byte * *)(frame + 5912))
#define local_24 (*(byte * *)(frame + 5916))
#define local_20 (*(char * *)(frame + 5920))
#define local_1c (*(byte * *)(frame + 5924))
#define local_18 (*(uint *)(frame + 5928))
#define local_11 (*(byte *)(frame + 5935))


undefined4 recovered_20b2600(uint *in_ECX_00,char *in_EDX)

{
  unsigned char frame[5984] __attribute__((aligned(16))) = {0};

  byte extraout_AL = 0;
  undefined1 uVar1;
  byte extraout_AL_00 = 0;
  char cVar11;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uchar uVar12;
  uchar *puVar6;
  undefined1 *vararg1;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 extraout_EAX = 0;
  uchar extraout_CL;
  uchar in_CL;
  undefined4 extraout_ECX = 0;
  byte *pbVar13;
  uint uVar14;
  uint *extraout_ECX_00 = 0;
  uint *extraout_ECX_01 = 0;
  undefined *vararg6;
  byte bVar15;
  uchar uVar16;
  uchar in_DL;
  char *extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  uint extraout_EDX_04 = 0;
  uint extraout_EDX_05 = 0;
  uint extraout_EDX_06 = 0;
  uchar *incoming_edx;
  uint incoming_edx_00;
  uint incoming_edx_01;
  uint *extraout_EDX_07 = 0;
  char *extraout_EDX_08 = 0;
  char *extraout_EDX_09 = 0;
  uint *extraout_EDX_10 = 0;
  uint *incoming_edx_02;
  byte bVar17;
  char cVar18;
  char *pcVar19;
  byte *pbVar20;
  int *in_ECX;
  bool bVar21;

  local_3c = DAT_020d9d44;
  local_204[0] = '\0';
  if (in_ECX_00 != (uint *)0x0) {
    *in_ECX_00 = 0;
  }
  iVar5 = DAT_020de4f0;
  local_5c = in_ECX_00;
  local_20 = in_EDX;
  if (iVar5 < 0) {
    if ((-1 < local_3c) && (uVar2 = DAT_02130728, uVar2 != 0)) {
      iVar9 = 0;
      iVar5 = DAT_02130724;
      uVar4 = 0;
      do {
        if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0xfc + iVar9) & 2) == 0)) {
          uVar3 = recovered_20b4eb0((char *)(iVar5 + iVar9),(undefined1 *)0x0,(char *)0x0,
                                    (undefined4 *)0x0);
          if ((char)uVar3 != '\0') {
            DAT_020de4f0 = local_3c;
            in_ECX_00 = extraout_ECX_00;
            in_EDX = extraout_EDX_08;
            iVar5 = local_3c;
            goto LAB_020b3bc0;
          }
          iVar5 = DAT_02130724;
          uVar2 = DAT_02130728;
        }
        uVar4 = uVar4 + 1;
        iVar9 = iVar9 + 0x110;
      } while (uVar4 < uVar2);
    }
    uVar2 = recovered_2047890();
    if ((char)uVar2 == '\0') {
      if (local_20 == (char *)0x0) {
        return 0;
      }
      pcVar19 = str_020d324c;
      pcVar10 = local_20;
    }
    else {
      iVar5 = DAT_020de4f0;
      in_ECX_00 = extraout_ECX_01;
      in_EDX = extraout_EDX_09;
LAB_020b3bc0:
      if (-1 < iVar5) goto LAB_020b2639;
      if (local_20 == (char *)0x0) {
        return 0;
      }
      pcVar19 = str_020d326e;
      pcVar10 = local_20;
    }
  }
  else {
LAB_020b2639:
    uVar16 = (uchar)in_ECX_00;
    if (local_3c == iVar5) {
LAB_020b264d:
      local_60 = iVar5;
      recovered_203a840(uVar16,(uchar)in_EDX);
      uVar3 = recovered_20b5100(&DAT_020d33d7);
      local_54 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
      local_11 = 1;
      uVar2 = extraout_EDX_00;
      if ((char)uVar3 == '\0') {
        uVar3 = recovered_20b5100(str_020d33dc);
        local_11 = 1;
        uVar2 = extraout_EDX_01;
        if ((char)uVar3 == '\0') {
          uVar3 = recovered_20b5370(&DAT_020d33d7);
          local_11 = 1;
          uVar2 = extraout_EDX_02;
          if ((char)uVar3 == '\0') {
            uVar3 = recovered_20b5370(&DAT_020d33e3);
            local_11 = 1;
            uVar2 = extraout_EDX_03;
            if ((char)uVar3 == '\0') {
              uVar3 = recovered_20b5370(str_020d33dc);
              local_11 = 1;
              uVar2 = extraout_EDX_04;
              if ((char)uVar3 == '\0') {
                pf_varargs_20044f0__4_((char *)local_172c,0x10,str_020d342e,0x1af4);
                uVar3 = recovered_20b5100((char *)local_172c);
                local_11 = 1;
                uVar2 = extraout_EDX_05;
                if ((char)uVar3 == '\0') {
                  recovered_20b5590(0x1b36);
                  uVar2 = extraout_EDX_06;
                  local_11 = extraout_AL;
                }
              }
            }
          }
        }
      }
      local_40 = 0;
      local_2c = 1;
      uVar4 = DAT_02130728;
      local_50 = 0;
      local_18 = 0;
      local_4c = 0;
LAB_020b273d:
      if (uVar4 != 0) {
        local_2e = local_11 | (byte)local_40;
        uVar2 = 0;
        local_34 = 0;
LAB_020b278d:
        local_38 = (uint *)DAT_02130724;
        pbVar13 = (byte *)(uVar2 * 0x110 + (int)local_38);
        local_44 = (byte *)0x0;
        local_2d = '\0';
        if (local_38 == (uint *)0x0) {
LAB_020b27b2:
          local_28 = pbVar13;
          uVar3 = recovered_20b4eb0((char *)pbVar13,&local_164,(char *)0x40,&local_44);
          if ((char)uVar3 != '\0') {
            local_50 = local_50 + local_2c;
            local_1c = local_44;
            if (local_44 == (byte *)0x0) goto LAB_020b2783;
            local_24 = (byte *)CONCAT31(PF_PART3(local_24, 1),local_164);
            if (local_164 == '\0') {
              uVar14 = 0;
              uVar4 = 0;
              do {
                local_58 = uVar14;
                local_64 = uVar4;
                pcVar19 = (&PTR_DAT_020d9b44)[uVar4];
                local_2f = *pcVar19;
                if (local_2f != '\0') {
                  bVar15 = *local_44;
                  pbVar13 = local_44;
                  while (bVar15 != 0) {
                    iVar5 = 0;
                    do {
                      bVar17 = pcVar19[iVar5];
                      if (bVar17 == 0) goto LAB_020b2894;
                      if ((byte)(bVar15 + 0x9f) < 0x1a) {
                        bVar15 = bVar15 - 0x20;
                      }
                      if ((byte)(bVar17 + 0x9f) < 0x1a) {
                        bVar17 = bVar17 - 0x20;
                      }
                      if (bVar15 != bVar17) goto LAB_020b2886;
                      bVar15 = pbVar13[iVar5 + 1];
                      iVar5 = iVar5 + 1;
                    } while (bVar15 != 0);
                    if (pcVar19[iVar5] == '\0') {
LAB_020b2894:
                      if (local_2f != '~') {
LAB_020b290d:
                        PF_PART1(local_58, 0) = (char)uVar14;
                        bVar21 = (char)local_58 == '\0';
                        if (bVar21) goto LAB_020b2783;
                        goto LAB_020b295b;
                      }
                      cVar18 = pcVar19[1];
                      if (cVar18 == '\0') {
                        pcVar19 = &DAT_020d352e;
                      }
                      else {
                        if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                          cVar18 = cVar18 + -0x20;
                        }
                        if (cVar18 != 'I') goto LAB_020b290d;
                        cVar18 = pcVar19[2];
                        if (cVar18 == '\0') {
                          pcVar19 = &DAT_020d352f;
                        }
                        else {
                          if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                            cVar18 = cVar18 + -0x20;
                          }
                          if (cVar18 != '3') goto LAB_020b290d;
                          cVar18 = pcVar19[3];
                          if (cVar18 == '\0') {
                            pcVar19 = &DAT_020d3530;
                          }
                          else {
                            if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                              cVar18 = cVar18 + -0x20;
                            }
                            if (cVar18 != '8') goto LAB_020b290d;
                            cVar18 = pcVar19[4];
                            if (cVar18 == '\0') {
                              pcVar19 = &DAT_020d3531;
                            }
                            else {
                              if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                                cVar18 = cVar18 + -0x20;
                              }
                              if (cVar18 != '6') goto LAB_020b290d;
                              if (pcVar19[5] == '\0') {
                                pcVar19 = &DAT_020d3532;
                              }
                              else {
                                if ((pcVar19[5] != '~') || (pcVar19[6] != '\0')) goto LAB_020b290d;
                                pcVar19 = &DAT_020d3533;
                              }
                            }
                          }
                        }
                      }
                      if (!((uVar14 & 1) != 0 || *pcVar19 == '\0')) goto LAB_020b2783;
                      goto LAB_020b295b;
                    }
LAB_020b2886:
                    pbVar20 = pbVar13 + 1;
                    pbVar13 = pbVar13 + 1;
                    bVar15 = *pbVar20;
                  }
                }
                bVar21 = 10 < uVar4;
                uVar4 = uVar4 + 1;
                uVar14 = CONCAT31((int3)((uint)pcVar19 >> 8),bVar21);
              } while (uVar4 != 0xc);
            }
LAB_020b295b:
            if ((byte)(local_164 + 0x9f) < 0x1a) {
              if (local_164 == 'q') goto LAB_020b297e;
LAB_020b2a09:
              uVar4 = (uint)*local_44;
              uVar1 = 0;
              if (*local_44 != 0) {
                pbVar13 = local_44 + 6;
                uVar14 = uVar4;
                do {
                  cVar18 = (char)uVar14;
                  bVar15 = pbVar13[-5];
                  uVar14 = (uint)bVar15;
                  if (cVar18 == '~') {
                    if (bVar15 == 0) {
                      pcVar19 = &DAT_020d343b;
                    }
                    else {
                      uVar1 = (undefined1)uVar4;
                      bVar17 = bVar15;
                      if ((byte)(bVar15 + 0x9f) < 0x1a) {
                        bVar17 = bVar15 - 0x20;
                      }
                      uVar4 = (uint)CONCAT11(bVar17,uVar1);
                      if (bVar17 != 0x51) goto LAB_020b2a2f;
                      bVar17 = pbVar13[-4];
                      uVar4 = (uint)CONCAT11(bVar17,uVar1);
                      if (bVar17 == 0) {
                        pcVar19 = &DAT_020d343c;
                      }
                      else {
                        uVar14 = (uint)CONCAT11(bVar17 + 0x9f,bVar15);
                        if ((byte)(bVar17 + 0x9f) < 0x1a) {
                          uVar4 = (uint)CONCAT11(bVar17 - 0x20,uVar1);
                        }
                        if ((char)(uVar4 >> 8) != 'E') goto LAB_020b2a2f;
                        bVar17 = pbVar13[-3];
                        uVar1 = (undefined1)uVar4;
                        uVar4 = (uint)CONCAT11(bVar17,uVar1);
                        if (bVar17 == 0) {
                          pcVar19 = &DAT_020d343d;
                        }
                        else {
                          uVar14 = (uint)CONCAT11(bVar17 + 0x9f,bVar15);
                          if ((byte)(bVar17 + 0x9f) < 0x1a) {
                            uVar4 = (uint)CONCAT11(bVar17 - 0x20,uVar1);
                          }
                          if ((char)(uVar4 >> 8) != 'M') goto LAB_020b2a2f;
                          bVar17 = pbVar13[-2];
                          uVar1 = (undefined1)uVar4;
                          uVar4 = (uint)CONCAT11(bVar17,uVar1);
                          if (bVar17 == 0) {
                            pcVar19 = &DAT_020d343e;
                          }
                          else {
                            uVar14 = (uint)CONCAT11(bVar17 + 0x9f,bVar15);
                            if ((byte)(bVar17 + 0x9f) < 0x1a) {
                              uVar4 = (uint)CONCAT11(bVar17 - 0x20,uVar1);
                            }
                            if ((char)(uVar4 >> 8) != 'U') goto LAB_020b2a2f;
                            if (pbVar13[-1] == 0) {
                              pcVar19 = &DAT_020d343f;
                            }
                            else {
                              if (pbVar13[-1] != 0x7e) goto LAB_020b2a2f;
                              pcVar19 = &DAT_020d3440;
                              if (*pbVar13 != 0) goto LAB_020b2e48;
                            }
                          }
                        }
                      }
                    }
                    if (*pcVar19 == '\0') goto LAB_020b2e48;
                  }
LAB_020b2a2f:
                  pbVar13 = pbVar13 + 1;
                } while ((char)uVar14 != '\0');
                pbVar13 = local_44 + 8;
                uVar14 = uVar4;
                do {
                  cVar18 = (char)uVar14;
                  bVar15 = pbVar13[-7];
                  uVar14 = (uint)bVar15;
                  if (cVar18 == '~') {
                    if (bVar15 == 0) {
                      pcVar19 = &DAT_020d3442;
                    }
                    else {
                      uVar1 = (undefined1)uVar4;
                      bVar17 = bVar15;
                      if ((byte)(bVar15 + 0x9f) < 0x1a) {
                        bVar17 = bVar15 - 0x20;
                      }
                      uVar4 = (uint)CONCAT11(bVar17,uVar1);
                      if (bVar17 != 0x56) goto LAB_020b2b11;
                      bVar17 = pbVar13[-6];
                      uVar4 = (uint)CONCAT11(bVar17,uVar1);
                      if (bVar17 == 0) {
                        pcVar19 = &DAT_020d3443;
                      }
                      else {
                        uVar14 = (uint)CONCAT11(bVar17 + 0x9f,bVar15);
                        if ((byte)(bVar17 + 0x9f) < 0x1a) {
                          uVar4 = (uint)CONCAT11(bVar17 - 0x20,uVar1);
                        }
                        if ((char)(uVar4 >> 8) != 'I') goto LAB_020b2b11;
                        bVar17 = pbVar13[-5];
                        uVar1 = (undefined1)uVar4;
                        uVar4 = (uint)CONCAT11(bVar17,uVar1);
                        if (bVar17 == 0) {
                          pcVar19 = &DAT_020d3444;
                        }
                        else {
                          uVar14 = (uint)CONCAT11(bVar17 + 0x9f,bVar15);
                          if ((byte)(bVar17 + 0x9f) < 0x1a) {
                            uVar4 = (uint)CONCAT11(bVar17 - 0x20,uVar1);
                          }
                          if ((char)(uVar4 >> 8) != 'R') goto LAB_020b2b11;
                          bVar17 = pbVar13[-4];
                          uVar1 = (undefined1)uVar4;
                          uVar4 = (uint)CONCAT11(bVar17,uVar1);
                          if (bVar17 == 0) {
                            pcVar19 = &DAT_020d3445;
                          }
                          else {
                            uVar14 = (uint)CONCAT11(bVar17 + 0x9f,bVar15);
                            if ((byte)(bVar17 + 0x9f) < 0x1a) {
                              uVar4 = (uint)CONCAT11(bVar17 - 0x20,uVar1);
                            }
                            if ((char)(uVar4 >> 8) != 'T') goto LAB_020b2b11;
                            bVar17 = pbVar13[-3];
                            uVar1 = (undefined1)uVar4;
                            uVar4 = (uint)CONCAT11(bVar17,uVar1);
                            if (bVar17 == 0) {
                              pcVar19 = &DAT_020d3446;
                            }
                            else {
                              uVar14 = (uint)CONCAT11(bVar17 + 0x9f,bVar15);
                              if ((byte)(bVar17 + 0x9f) < 0x1a) {
                                uVar4 = (uint)CONCAT11(bVar17 - 0x20,uVar1);
                              }
                              if ((char)(uVar4 >> 8) != 'I') goto LAB_020b2b11;
                              bVar17 = pbVar13[-2];
                              uVar1 = (undefined1)uVar4;
                              uVar4 = (uint)CONCAT11(bVar17,uVar1);
                              if (bVar17 == 0) {
                                pcVar19 = &DAT_020d3447;
                              }
                              else {
                                uVar14 = (uint)CONCAT11(bVar17 + 0x9f,bVar15);
                                if ((byte)(bVar17 + 0x9f) < 0x1a) {
                                  uVar4 = (uint)CONCAT11(bVar17 - 0x20,uVar1);
                                }
                                if ((char)(uVar4 >> 8) != 'O') goto LAB_020b2b11;
                                if (pbVar13[-1] == 0) {
                                  pcVar19 = &DAT_020d3448;
                                }
                                else {
                                  if (pbVar13[-1] != 0x7e) goto LAB_020b2b11;
                                  pcVar19 = &DAT_020d3449;
                                  if (*pbVar13 != 0) goto LAB_020b2e48;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if (*pcVar19 == '\0') goto LAB_020b2e48;
                  }
LAB_020b2b11:
                  uVar1 = (undefined1)uVar4;
                  pbVar13 = pbVar13 + 1;
                } while ((char)uVar14 != '\0');
              }
              uVar4 = (uint)CONCAT11(local_164,uVar1);
              pcVar19 = str_020d344a;
              if (local_164 != '\0') {
                iVar5 = -0x12;
                do {
                  if (iVar5 == 0) goto LAB_020b2c8b;
                  cVar18 = (char)(uVar4 >> 8);
                  if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                    uVar4 = (uint)CONCAT11(cVar18 + -0x20,(char)uVar4);
                  }
                  cVar18 = *pcVar19;
                  if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                    cVar18 = cVar18 + -0x20;
                  }
                  if ((char)(uVar4 >> 8) != cVar18) goto LAB_020b2c8b;
                  iVar9 = iVar5 + 0x12;
                  uVar4 = (uint)CONCAT11(local_163[iVar9],(char)uVar4);
                  pcVar19 = pcVar19 + 1;
                  iVar5 = iVar5 + 1;
                } while (local_163[iVar9] != '\0');
              }
              if (*pcVar19 == '\0') {
LAB_020b2d52:
                uVar3 = recovered_20b5100(str_020d358d);
                if (((char)uVar3 == '\0') &&
                   (((uVar3 = recovered_20b5100(str_020d3596), (char)uVar3 == '\0' ||
                     (uVar3 = recovered_20b5100(str_020d359e), (char)uVar3 != '\0')) ||
                    (uVar3 = recovered_20b5100(str_020d35a9), (char)uVar3 != '\0')))) {
                  uVar3 = recovered_20b5900();
                  if ((char)uVar3 != '\0') goto LAB_020b2780;
                  uVar3 = recovered_20b5a20();
                  if ((char)uVar3 != '\0') {
                    pf_varargs_20044f0__4__4_((char *)local_172c,0x28,str_020d35b5,0x10de,0x863);
                    uVar3 = recovered_20b5100((char *)local_172c);
                    if ((char)uVar3 != '\0') goto LAB_020b33a3;
                  }
                  uVar3 = recovered_20b5100(str_020d173e);
                  if (((char)uVar3 == '\0') &&
                     (uVar3 = recovered_20b5100(&DAT_020d35cd), (char)uVar3 == '\0')) {
                    pf_varargs_20044f0__4_((char *)local_172c,0x10,str_020d342e,0x106b);
                    uVar3 = recovered_20b5100((char *)local_172c);
                    if ((char)uVar3 != '\0') goto LAB_020b2e1c;
                  }
                  else {
LAB_020b2e1c:
                    uVar3 = recovered_20b5a20();
                    if (((char)uVar3 != '\0') || (uVar3 = recovered_20b5bc0(), (char)uVar3 != '\0'))
                    goto LAB_020b33a3;
                  }
                  uVar3 = recovered_20b5bc0();
                  bVar15 = (byte)uVar3;
                  goto joined_r0x020b339d;
                }
                goto LAB_020b33a3;
              }
LAB_020b2c8b:
              bVar15 = (byte)uVar4;
              uVar14 = uVar4;
              pbVar13 = local_44;
              while (bVar15 != 0) {
                iVar5 = -0x12;
                do {
                  iVar9 = iVar5;
                  cVar18 = (char)uVar4;
                  if (iVar9 == 0) goto LAB_020b2d52;
                  if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                    cVar18 = cVar18 + -0x20;
                  }
                  cVar11 = str_020d345d[iVar9 + 0x12];
                  if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                    cVar11 = cVar11 + -0x20;
                  }
                  uVar14 = (uint)CONCAT11(cVar11,(char)uVar14);
                  if (cVar18 != cVar11) goto LAB_020b2cdf;
                  uVar4 = (uint)pbVar13[iVar9 + 0x13];
                  iVar5 = iVar9 + 1;
                } while (pbVar13[iVar9 + 0x13] != 0);
                if (str_020d3470[iVar9] == '\0') goto LAB_020b2d52;
LAB_020b2cdf:
                bVar15 = pbVar13[1];
                uVar4 = (uint)bVar15;
                pbVar13 = pbVar13 + 1;
              }
              if (local_164 != '\0') {
                iVar5 = 0;
                uVar16 = local_164;
                do {
                  iVar9 = iVar5;
                  if (iVar9 == 0x16) goto LAB_020b2e67;
                  if ((byte)(uVar16 + 0x9f) < 0x1a) {
                    uVar16 = uVar16 + 0xe0;
                  }
                  uVar12 = str_020d3470[iVar9];
                  if ((byte)(uVar12 + 0x9f) < 0x1a) {
                    uVar12 = uVar12 + 0xe0;
                  }
                  uVar14 = (uint)CONCAT11(uVar12,(char)uVar14);
                  if (uVar16 != uVar12) goto LAB_020b2e67;
                  uVar16 = local_163[iVar9];
                  iVar5 = iVar9 + 1;
                } while (uVar16 != '\0');
                if (str_020d3470[iVar9 + 1] != '\0') goto LAB_020b2e67;
LAB_020b2f32:
                uVar3 = recovered_20b5900();
                bVar15 = (byte)uVar3;
                goto joined_r0x020b339d;
              }
              if (str_020d3470[0] == '\0') goto LAB_020b2f32;
LAB_020b2e67:
              bVar15 = (byte)uVar14;
              uVar4 = uVar14;
              pbVar13 = local_44;
              while (bVar15 != 0) {
                iVar5 = -0x16;
                do {
                  iVar9 = iVar5;
                  cVar18 = (char)uVar14;
                  if (iVar9 == 0) goto LAB_020b2f32;
                  if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                    cVar18 = cVar18 + -0x20;
                  }
                  cVar11 = str_020d3487[iVar9 + 0x16];
                  if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                    cVar11 = cVar11 + -0x20;
                  }
                  uVar4 = (uint)CONCAT11(cVar11,(char)uVar4);
                  if (cVar18 != cVar11) goto LAB_020b2ebf;
                  uVar14 = (uint)pbVar13[iVar9 + 0x17];
                  iVar5 = iVar9 + 1;
                } while (pbVar13[iVar9 + 0x17] != 0);
                if (str_020d349e[iVar9] == '\0') goto LAB_020b2f32;
LAB_020b2ebf:
                bVar15 = pbVar13[1];
                uVar14 = (uint)bVar15;
                pbVar13 = pbVar13 + 1;
              }
              if (local_164 != '\0') {
                iVar5 = 0;
                uVar16 = local_164;
                do {
                  iVar9 = iVar5;
                  if (iVar9 == 0x12) goto LAB_020b3013;
                  if ((byte)(uVar16 + 0x9f) < 0x1a) {
                    uVar16 = uVar16 + 0xe0;
                  }
                  uVar12 = str_020d349e[iVar9];
                  if ((byte)(uVar12 + 0x9f) < 0x1a) {
                    uVar12 = uVar12 + 0xe0;
                  }
                  uVar4 = (uint)CONCAT11(uVar12,(char)uVar4);
                  if (uVar16 != uVar12) goto LAB_020b3013;
                  uVar16 = local_163[iVar9];
                  iVar5 = iVar9 + 1;
                } while (uVar16 != '\0');
                if (str_020d349e[iVar9 + 1] != '\0') goto LAB_020b3013;
LAB_020b30da:
                uVar3 = recovered_20b5370(str_020d35d2);
                if (((char)uVar3 != '\0') ||
                   (uVar3 = recovered_20b5370(str_020d35dc), (char)uVar3 != '\0'))
                goto LAB_020b33a3;
                pcVar19 = str_020d35e7;
LAB_020b3103:
                uVar3 = recovered_20b5370(pcVar19);
                bVar15 = (byte)uVar3;
                goto joined_r0x020b339d;
              }
              if (str_020d349e[0] == '\0') goto LAB_020b30da;
LAB_020b3013:
              bVar15 = (byte)uVar4;
              uVar14 = uVar4;
              pbVar13 = local_44;
              while (bVar15 != 0) {
                iVar5 = -0x12;
                do {
                  iVar9 = iVar5;
                  cVar18 = (char)uVar4;
                  if (iVar9 == 0) goto LAB_020b30da;
                  if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                    cVar18 = cVar18 + -0x20;
                  }
                  cVar11 = str_020d34b1[iVar9 + 0x12];
                  if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                    cVar11 = cVar11 + -0x20;
                  }
                  uVar14 = (uint)CONCAT11(cVar11,(char)uVar14);
                  if (cVar18 != cVar11) goto LAB_020b306f;
                  uVar4 = (uint)pbVar13[iVar9 + 0x13];
                  iVar5 = iVar9 + 1;
                } while (pbVar13[iVar9 + 0x13] != 0);
                if (str_020d34c4[iVar9] == '\0') goto LAB_020b30da;
LAB_020b306f:
                bVar15 = pbVar13[1];
                uVar4 = (uint)bVar15;
                pbVar13 = pbVar13 + 1;
              }
              if (local_164 == '\0') {
                if (str_020d34c4[0] != '\0') goto LAB_020b312d;
LAB_020b31f2:
                uVar3 = recovered_20b5370(str_020d35f2);
                if (((((char)uVar3 != '\0') ||
                     (uVar3 = recovered_20b5370(str_020d35fc), (char)uVar3 != '\0')) ||
                    (uVar3 = recovered_20b5370(str_020d3606), (char)uVar3 != '\0')) ||
                   (uVar3 = recovered_20b5370(str_020d3610), (char)uVar3 != '\0'))
                goto LAB_020b33a3;
                uVar3 = recovered_20b5370(str_020d3619);
                if ((char)uVar3 == '\0') goto LAB_020b2780;
                pcVar19 = &DAT_020d3622;
                goto LAB_020b3103;
              }
              iVar5 = 0;
              uVar16 = local_164;
              do {
                iVar9 = iVar5;
                if (iVar9 == 0x11) goto LAB_020b312d;
                if ((byte)(uVar16 + 0x9f) < 0x1a) {
                  uVar16 = uVar16 + 0xe0;
                }
                uVar12 = str_020d34c4[iVar9];
                if ((byte)(uVar12 + 0x9f) < 0x1a) {
                  uVar12 = uVar12 + 0xe0;
                }
                uVar14 = (uint)CONCAT11(uVar12,(char)uVar14);
                if (uVar16 != uVar12) goto LAB_020b312d;
                uVar16 = local_163[iVar9];
                iVar5 = iVar9 + 1;
              } while (uVar16 != '\0');
              if (str_020d34c4[iVar9 + 1] == '\0') goto LAB_020b31f2;
LAB_020b312d:
              bVar15 = (byte)uVar14;
              uVar4 = uVar14;
              pbVar13 = local_44;
              while (bVar15 != 0) {
                iVar5 = -0x11;
                do {
                  iVar9 = iVar5;
                  cVar18 = (char)uVar14;
                  if (iVar9 == 0) goto LAB_020b31f2;
                  if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                    cVar18 = cVar18 + -0x20;
                  }
                  cVar11 = str_020d34d6[iVar9 + 0x11];
                  if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                    cVar11 = cVar11 + -0x20;
                  }
                  uVar4 = (uint)CONCAT11(cVar11,(char)uVar4);
                  if (cVar18 != cVar11) goto LAB_020b317f;
                  uVar14 = (uint)pbVar13[iVar9 + 0x12];
                  iVar5 = iVar9 + 1;
                } while (pbVar13[iVar9 + 0x12] != 0);
                if (str_020d34e8[iVar9] == '\0') goto LAB_020b31f2;
LAB_020b317f:
                bVar15 = pbVar13[1];
                uVar14 = (uint)bVar15;
                pbVar13 = pbVar13 + 1;
              }
              if (local_164 != '\0') {
                iVar5 = 0;
                uVar16 = local_164;
                do {
                  iVar9 = iVar5;
                  if (iVar9 == 0xc) goto LAB_020b3278;
                  if ((byte)(uVar16 + 0x9f) < 0x1a) {
                    uVar16 = uVar16 + 0xe0;
                  }
                  uVar12 = str_020d34e8[iVar9];
                  if ((byte)(uVar12 + 0x9f) < 0x1a) {
                    uVar12 = uVar12 + 0xe0;
                  }
                  uVar4 = (uint)CONCAT11(uVar12,(char)uVar4);
                  if (uVar16 != uVar12) goto LAB_020b3278;
                  uVar16 = local_163[iVar9];
                  iVar5 = iVar9 + 1;
                } while (uVar16 != '\0');
                if (str_020d34e8[iVar9 + 1] != '\0') goto LAB_020b3278;
LAB_020b3334:
                uVar3 = recovered_20b5370(str_020d3625);
                if ((((char)uVar3 != '\0') ||
                    (uVar3 = recovered_20b5370(str_020d362d), (char)uVar3 != '\0')) ||
                   (uVar3 = recovered_20b5370(&DAT_020d3634), (char)uVar3 != '\0'))
                goto LAB_020b33a3;
                pcVar19 = str_020d3639;
                goto LAB_020b3103;
              }
              if (str_020d34e8[0] == '\0') goto LAB_020b3334;
LAB_020b3278:
              bVar15 = (byte)uVar4;
              pbVar13 = local_44;
              while (bVar15 != 0) {
                iVar5 = -0xc;
                do {
                  iVar9 = iVar5;
                  if (iVar9 == 0) goto LAB_020b3334;
                  cVar18 = (char)uVar4;
                  if ((byte)(cVar18 + 0x9fU) < 0x1a) {
                    cVar18 = cVar18 + -0x20;
                  }
                  cVar11 = str_020d34f7[iVar9 + 10];
                  if ((byte)(cVar11 + 0x9fU) < 0x1a) {
                    cVar11 = cVar11 + -0x20;
                  }
                  if (cVar18 != cVar11) goto LAB_020b32ce;
                  uVar4 = (uint)pbVar13[iVar9 + 0xd];
                  iVar5 = iVar9 + 1;
                } while (pbVar13[iVar9 + 0xd] != 0);
                if (str_020d3502[iVar9] == '\0') goto LAB_020b3334;
LAB_020b32ce:
                bVar15 = pbVar13[1];
                uVar4 = (uint)bVar15;
                pbVar13 = pbVar13 + 1;
              }
              uVar16 = recovered_2051f00((char *)&local_164,str_020d31e5);
              uVar4 = local_40;
              if (uVar16 == '\0') {
                uVar3 = recovered_205a7b0(local_40,(char *)local_1c,str_020d3502);
                uVar4 = local_40;
                if ((char)uVar3 == '\0') {
                  if ((char)local_24 == '\0') {
                    bVar15 = local_2e & 1;
                  }
                  else {
                    uVar3 = recovered_205a7b0(local_40,(char *)local_1c,&DAT_020cb89e);
                    if ((char)uVar3 == '\0') goto LAB_020b2780;
                    recovered_20b59f0();
                    bVar15 = extraout_AL_00;
                  }
                  goto joined_r0x020b339d;
                }
              }
              goto LAB_020b2e4c;
            }
            if (local_164 != 'Q') goto LAB_020b2a09;
LAB_020b297e:
            if ((byte)(local_163[0] + 0x9f) < 0x1a) {
              if (local_163[0] == 'e') goto LAB_020b29a2;
              goto LAB_020b2a09;
            }
            if (local_163[0] != 'E') goto LAB_020b2a09;
LAB_020b29a2:
            if ((byte)(local_163[1] + 0x9f) < 0x1a) {
              if (local_163[1] == 'm') goto LAB_020b29c6;
              goto LAB_020b2a09;
            }
            if (local_163[1] != 'M') goto LAB_020b2a09;
LAB_020b29c6:
            if ((byte)(local_163[2] + 0x9f) < 0x1a) {
              if (local_163[2] == 'u') goto LAB_020b29ea;
              goto LAB_020b2a09;
            }
            if (local_163[2] != 'U') goto LAB_020b2a09;
LAB_020b29ea:
            if ((byte)(local_163[3] + 0x9f) < 0x1a) {
              if (local_163[3] != 'M') goto LAB_020b2a09;
            }
            else if (local_163[3] != '-') goto LAB_020b2a09;
            if (local_164 == '\0') {
              pcVar19 = &DAT_020d33ce;
            }
            else if (local_163[0] == '\0') {
              pcVar19 = &DAT_020d33cf;
            }
            else if (local_163[1] == '\0') {
              pcVar19 = &DAT_020d33d0;
            }
            else if (local_163[2] == '\0') {
              pcVar19 = &DAT_020d33d1;
            }
            else if (local_163[3] == '\0') {
              pcVar19 = &DAT_020d33d2;
            }
            else if (local_163[4] == '\0') {
              pcVar19 = &DAT_020d33d3;
            }
            else {
              uVar16 = local_163[4];
              if ((byte)(local_163[4] + 0x9f) < 0x1a) {
                uVar16 = local_163[4] + -0x20;
              }
              if (uVar16 != 'X') goto LAB_020b2783;
              if (local_163[5] == '\0') {
                pcVar19 = &DAT_020d33d4;
              }
              else {
                uVar16 = local_163[5];
                if ((byte)(local_163[5] + 0x9f) < 0x1a) {
                  uVar16 = local_163[5] + -0x20;
                }
                if (uVar16 != '8') goto LAB_020b2783;
                if (local_163[6] == '\0') {
                  pcVar19 = &DAT_020d33d5;
                }
                else {
                  uVar16 = local_163[6];
                  if ((byte)(local_163[6] + 0x9f) < 0x1a) {
                    uVar16 = local_163[6] + -0x20;
                  }
                  if (uVar16 != '6') goto LAB_020b2783;
                  pcVar19 = &DAT_020d33d6;
                  if (local_163[7] != '\0') goto LAB_020b2780;
                }
              }
            }
            bVar15 = local_11 & *pcVar19 == '\0';
joined_r0x020b339d:
            if (bVar15 == 0) goto LAB_020b2780;
            goto LAB_020b33a3;
          }
          goto LAB_020b2780;
        }
        if ((pbVar13[0xfc] & 2) == 0) goto LAB_020b27b2;
        goto LAB_020b2783;
      }
      uVar4 = 0;
      goto LAB_020b271b;
    }
    uVar2 = recovered_202ac50(iVar5,(uint)in_EDX);
    in_EDX = extraout_EDX;
    uVar16 = extraout_CL;
    if ((char)uVar2 != '\0') goto LAB_020b264d;
    if (local_20 == (char *)0x0) {
      return 0;
    }
    pcVar19 = str_020d3290;
    pcVar10 = local_20;
  }
  goto LAB_020b3bd4;
LAB_020b2e48:
  uVar4 = (uint)local_11;
LAB_020b2e4c:
  if ((uVar4 & 1) != 0) {
LAB_020b33a3:
    if (local_164 == '\0') {
      local_a4[0] = 0;
      local_48 = 0;
      if ((local_38 != (uint *)0x0) && (cVar18 = DAT_021307dc, cVar18 == '\x01')) {
        recovered_202a060((int)local_28,local_172c);
        uVar4 = recovered_202af10(local_172c,incoming_edx_00);
        uint pf_macho_source_index = uVar4;
        if ((uVar4 != 0xffffffff) &&
           (((iVar5 = DAT_02130724, iVar5 == 0 ||
             ((*(byte *)(iVar5 + 0xfc + uVar4 * 0x110) & 2) == 0)) &&
            (uVar14 = recovered_202b020(uVar4,incoming_edx_01), (char)uVar14 != '\0')))) {
          iVar5 = DAT_02130724;
          uVar4 = recovered_2059260(*(void **)(iVar5 + 0xf4 + uVar4 * 0x110),
                                    *(uint *)(iVar5 + 0xf8 + uVar4 * 0x110),7,local_a4,&local_48,
                                    (char *)local_404,0x60);
          if ((char)uVar4 != '\0') goto LAB_020b33ac;
        }
      }
    }
    else {
LAB_020b33ac:
      local_172c[0] = '\0';
      recovered_20b4cb0((int)local_44,local_172c);
      incoming_edx = &DAT_020d32b7;
      if (local_164 != '\0') {
        incoming_edx = &local_164;
      }
      puVar6 = (uchar *)0x0;
      if (local_172c[0] != '\0') {
        puVar6 = local_172c;
      }
      local_34 = local_34 + 1;
      uVar4 = recovered_20b20d0((int)local_28,incoming_edx,(char *)puVar6,(int)local_404,&local_2d);
      if ((char)uVar4 == '\0') {
        pf_varargs_20044f0__4_(local_204,0xa0,&DAT_020c5119,(uint)local_404);
        vararg1 = &DAT_020c5084;
        if (local_164 != '\0') {
          vararg1 = &DAT_020c5359;
        }
        local_4c = local_4c + 1;
        pf_varargs_202ce90__4__4__4__4_
                  (str_020d32bb,(uint)&local_164,(uint)vararg1,(uint)local_44,(uint)local_404);
      }
      else if (local_2d == '\x01') {
        uVar4 = local_18 + 1;
        recovered_203a840(in_CL,in_DL);
        local_18 = uVar4;
        goto LAB_020b2783;
      }
    }
  }
LAB_020b2780:
LAB_020b2783:
  uVar2 = uVar2 + 1;
  uVar4 = DAT_02130728;
  if (uVar4 <= uVar2) goto LAB_020b2710;
  goto LAB_020b278d;
LAB_020b2710:
  uVar2 = 0;
  if (local_34 != 0) goto LAB_020b3527;
LAB_020b271b:
  local_2c = 0;
  local_40 = CONCAT31((int3)(uVar2 >> 8),1);
  uVar14 = local_54 & 1;
  local_54 = 0;
  local_34 = 0;
  uVar2 = local_34;
  if (uVar14 == 0) goto LAB_020b3527;
  goto LAB_020b273d;
LAB_020b3527:
  local_38 = (uint *)DAT_020de4f0;
  pf_varargs_20044f0__4_((char *)local_a4,0x40,str_020d3656,0x20c5f80);
  iVar5 = DAT_02130728;
  pcVar10 = local_20;
  incoming_edx_02 = extraout_EDX_07;
  if (iVar5 != 0) {
    pbVar13 = (byte *)0x0;
    pbVar20 = (byte *)0x0;
    uVar2 = 0;
    do {
      uVar4 = DAT_02130724;
      if (uVar4 != 0) {
        if ((pbVar13[uVar4 + 0xfc] & 2) == 0) {
          local_2c = uVar4;
          local_28 = pbVar13;
          local_1c = pbVar20;
          uVar7 = recovered_2002270((char *)local_a4);
          local_24 = pbVar13 + uVar4;
          uVar8 = recovered_2002270((char *)(pbVar13 + uVar4));
          if (uVar7 <= uVar8) {
            iVar5 = recovered_2001ff0(local_24,local_a4,uVar7);
            if (iVar5 == 0) {
              uVar7 = recovered_2002270((char *)local_a4);
              pbVar13 = local_28;
              pcVar19 = recovered_20024f0((char *)(local_28 + local_2c + uVar7),'/');
              if (pcVar19 == (char *)0x0) {
                uVar7 = recovered_2002270((char *)local_24);
                uVar8 = recovered_2002270(&DAT_020c79e2);
                pbVar20 = local_1c;
                pcVar10 = local_20;
                if (uVar8 <= uVar7) {
                  uVar4 = local_2c + (uVar7 - uVar8);
                  bVar15 = pbVar13[uVar4];
                  if (bVar15 == 0) {
                    pcVar19 = &DAT_020c79e2;
LAB_020b36fe:
                    if (*pcVar19 == '\0') {
                      local_404[(int)local_1c] = uVar2;
                      pbVar20 = pbVar20 + 1;
                    }
                  }
                  else {
                    local_2c = uVar4;
                    if ((byte)(bVar15 + 0x9f) < 0x1a) {
                      bVar15 = bVar15 - 0x20;
                    }
                    if (bVar15 == 0x2e) {
                      bVar15 = pbVar13[uVar4 + 1];
                      if (bVar15 == 0) {
                        pcVar19 = &DAT_020c79e3;
                      }
                      else {
                        if ((byte)(bVar15 + 0x9f) < 0x1a) {
                          bVar15 = bVar15 - 0x20;
                        }
                        if (bVar15 != 0x4b) goto LAB_020b370b;
                        bVar15 = pbVar13[uVar4 + 2];
                        if (bVar15 == 0) {
                          pcVar19 = &DAT_020c79e4;
                        }
                        else {
                          if ((byte)(bVar15 + 0x9f) < 0x1a) {
                            bVar15 = bVar15 - 0x20;
                          }
                          if (bVar15 != 0x4f) goto LAB_020b370b;
                          if (pbVar13[uVar4 + 3] != 0) goto LAB_020b35e2;
                          pcVar19 = &DAT_020c79e5;
                        }
                      }
                      goto LAB_020b36fe;
                    }
                  }
LAB_020b370b:
                  pcVar10 = local_20;
                }
              }
              else {
                pcVar10 = local_20;
                pbVar20 = local_1c;
              }
              goto LAB_020b35e2;
            }
          }
          pcVar10 = local_20;
          pbVar13 = local_28;
          pbVar20 = local_1c;
        }
      }
LAB_020b35e2:
      incoming_edx_02 = local_a4;
      uVar2 = uVar2 + 1;
      uVar4 = DAT_02130728;
    } while ((uVar2 < uVar4) && (pbVar13 = pbVar13 + 0x110, pbVar20 < (byte *)0x80));
    if (pbVar20 != (byte *)0x0) {
      local_1c = pbVar20;
      if (pbVar20 != (byte *)0x1) {
        pbVar13 = (byte *)0x1;
        do {
          local_28 = (byte *)local_404[(int)pbVar13];
          iVar5 = DAT_02130724;
          if (iVar5 != 0) {
            pcVar19 = (char *)(iVar5 + (int)local_28 * 0x110);
            pcVar10 = (char *)(iVar5 + 1 + (int)local_28 * 0x110);
            do {
              cVar18 = pcVar10[-1];
              if ((cVar18 == '/') || (cVar18 == '\\')) {
                pcVar19 = pcVar10;
              }
              else if (cVar18 == '\0') goto LAB_020b3a95;
              pcVar10 = pcVar10 + 1;
            } while( true );
          }
          pcVar19 = &DAT_020c5084;
LAB_020b3a95:
          uVar2 = recovered_20b5d30(pcVar19);
          pbVar20 = pbVar13;
          if (0 < (int)pbVar13) {
            local_24 = pbVar13;
            do {
              pbVar20 = pbVar13 + -1;
              iVar5 = DAT_02130724;
              if (iVar5 != 0) {
                pcVar19 = (char *)(iVar5 + local_404[(int)pbVar20] * 0x110);
                pcVar10 = (char *)(iVar5 + 1 + local_404[(int)pbVar20] * 0x110);
                do {
                  cVar18 = pcVar10[-1];
                  if ((cVar18 == '/') || (cVar18 == '\\')) {
                    pcVar19 = pcVar10;
                  }
                  else if (cVar18 == '\0') goto LAB_020b3af5;
                  pcVar10 = pcVar10 + 1;
                } while( true );
              }
              pcVar19 = &DAT_020c5084;
LAB_020b3af5:
              uVar4 = recovered_20b5d30(pcVar19);
              if (uVar4 <= uVar2) goto LAB_020b3a32;
              local_404[(int)pbVar13] = local_404[(int)pbVar20];
              bVar21 = 1 < (int)pbVar13;
              pbVar13 = pbVar20;
            } while (bVar21);
            pbVar13 = (byte *)0x0;
LAB_020b3a32:
            pbVar20 = local_24;
          }
          local_404[(int)pbVar13] = (uint)local_28;
          pbVar13 = pbVar20 + 1;
        } while (pbVar13 != local_1c);
      }
      local_24 = (byte *)0x0;
      local_2c = 0;
      pbVar13 = (byte *)0x0;
      do {
        iVar5 = DAT_02130724;
        local_28 = pbVar13;
        in_ECX = (int *)(local_404[(int)pbVar13] * 0x110 + iVar5);
        local_48 = local_48 & 0xffffff00;
        local_164 = '\0';
        uVar2 = DAT_02238eec;
        if (uVar2 != 0 && iVar5 != 0) {
          uVar4 = 0;
          pcVar19 = &DAT_021ec533;
          do {
            if (pcVar19[-0x47] == '\x01') {
              iVar5 = recovered_20022a0(pcVar19,(char *)in_ECX);
              if (iVar5 == 0) {
                if (-1 < (int)uVar4) goto LAB_020b37b7;
                break;
              }
              uVar2 = DAT_02238eec;
            }
            uVar4 = uVar4 + 1;
            pcVar19 = pcVar19 + 0x1328;
          } while (uVar4 < uVar2);
        }
        uVar3 = recovered_2060420(in_ECX,(char *)in_ECX,local_38,local_172c,(char *)&local_164,0xc0,
                                  (undefined1 *)&local_48);
        if ((char)uVar3 == '\0') {
          pcVar19 = str_020d21b0;
          if (local_164 != '\0') {
            pcVar19 = (char *)&local_164;
          }
          local_2c = local_2c + 1;
          pf_varargs_202ce90__4__4_(str_020d3664,(uint)in_ECX,(uint)pcVar19);
        }
        else {
          local_24 = local_24 + (local_48 & 0xff);
        }
LAB_020b37b7:
        pbVar13 = local_28 + 1;
      } while (pbVar13 != local_1c);
      local_38 = (uint *)0x0;
      pbVar13 = (byte *)0x0;
      pbVar20 = local_1c;
      do {
        iVar5 = DAT_02130724;
        uVar2 = DAT_02238eec;
        if (uVar2 != 0 && iVar5 != 0) {
          local_28 = pbVar13;
          uVar4 = local_404[(int)pbVar13];
          uVar14 = 0;
          pcVar19 = &DAT_021ec533;
          do {
            if (pcVar19[-0x47] == '\x01') {
              iVar9 = recovered_20022a0(pcVar19,(char *)(iVar5 + uVar4 * 0x110));
              pbVar13 = local_28;
              if (iVar9 == 0) {
                if (-1 < (int)uVar14) {
                  if ((pcVar19[-3] == '\x01') && (pcVar19[-2] == '\0')) {
                    local_172c[0] = '\0';
                    recovered_206f110((int)(pcVar19 + -0x47),(char *)local_172c,0x100);
                    local_38 = (uint *)((int)local_38 + (uint)(byte)pcVar19[-2]);
                  }
                  pbVar20 = local_1c;
                  goto LAB_020b38d6;
                }
                break;
              }
              uVar2 = DAT_02238eec;
            }
            uVar14 = uVar14 + 1;
            pcVar19 = pcVar19 + 0x1328;
          } while (uVar14 < uVar2);
          pbVar13 = local_28;
          pbVar20 = local_1c;
        }
LAB_020b38d6:
        pbVar13 = pbVar13 + 1;
      } while (pbVar13 != pbVar20);
      recovered_2070260();
      uVar2 = DAT_0223936c;
      vararg6 = &DAT_020c69ee;
      cVar18 = DAT_0223b708;
      if (cVar18 == '\0') {
        vararg6 = &DAT_020d36ea;
      }
      pf_varargs_202ce90__4__4__4__4__4__4__4_
                (str_020d3689,0x20c5f80,(uint)pbVar20,(uint)local_24,(uint)local_38,local_2c,uVar2,
                 (uint)vararg6);
      pcVar10 = local_20;
      incoming_edx_02 = extraout_EDX_10;
    }
  }
  if (local_3c != local_60) {
    if (local_3c < 0) {
      recovered_20539f0(&DAT_02130724,(uint)incoming_edx_02);
      DAT_020d9d44 = 0xffffffff;
      pcVar10 = local_20;
    }
    else {
      uVar2 = recovered_202ac50(local_3c,(uint)incoming_edx_02);
      pcVar10 = local_20;
      if ((char)uVar2 == '\0') {
        if (local_20 == (char *)0x0) {
          return 0;
        }
        pcVar19 = str_020d32d9;
        goto LAB_020b3bd4;
      }
    }
  }
  uVar2 = local_18;
  if (local_50 == 0) {
    if (pcVar10 == (char *)0x0) {
      return 0;
    }
    pcVar19 = str_020d3313;
  }
  else {
    if (local_34 != 0) {
      if ((local_18 != 0) || (local_4c == 0)) {
        pf_varargs_202ce90__4__4__4__4_(str_020d3398,local_50,local_34,local_18,local_4c);
        uVar3 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
        if (local_5c == (uint *)0x0) {
          return uVar3;
        }
        *local_5c = uVar2;
        return uVar3;
      }
      if (pcVar10 == (char *)0x0) {
        return 0;
      }
      pcVar19 = str_020d3368;
      if (local_204[0] != '\0') {
        pcVar19 = local_204;
      }
      pcVar10 = local_20;
      goto LAB_020b3bdf;
    }
    if (pcVar10 == (char *)0x0) {
      return 0;
    }
    pcVar19 = str_020d3339;
  }
LAB_020b3bd4:
LAB_020b3bdf:
  pf_varargs_20044f0__4_(pcVar10,0xa0,&DAT_020c5119,(uint)pcVar19);
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020c69ee
#undef DAT_020c79e2
#undef DAT_020c79e3
#undef DAT_020c79e4
#undef DAT_020c79e5
#undef DAT_020cb89e
#undef DAT_020d32b7
#undef DAT_020d33ce
#undef DAT_020d33cf
#undef DAT_020d33d0
#undef DAT_020d33d1
#undef DAT_020d33d2
#undef DAT_020d33d3
#undef DAT_020d33d4
#undef DAT_020d33d5
#undef DAT_020d33d6
#undef DAT_020d33d7
#undef DAT_020d33e3
#undef DAT_020d343b
#undef DAT_020d343c
#undef DAT_020d343d
#undef DAT_020d343e
#undef DAT_020d343f
#undef DAT_020d3440
#undef DAT_020d3442
#undef DAT_020d3443
#undef DAT_020d3444
#undef DAT_020d3445
#undef DAT_020d3446
#undef DAT_020d3447
#undef DAT_020d3448
#undef DAT_020d3449
#undef DAT_020d352e
#undef DAT_020d352f
#undef DAT_020d3530
#undef DAT_020d3531
#undef DAT_020d3532
#undef DAT_020d3533
#undef DAT_020d35cd
#undef DAT_020d3622
#undef DAT_020d3634
#undef DAT_020d36ea
#undef DAT_020d9d44
#undef DAT_020de4f0
#undef DAT_02130724
#undef DAT_02130728
#undef DAT_021307dc
#undef DAT_021ec533
#undef DAT_02238eec
#undef DAT_0223936c
#undef DAT_0223b708
#undef PTR_DAT_020d9b44
#undef str_020d173e
#undef str_020d21b0
#undef str_020d31e5
#undef str_020d324c
#undef str_020d326e
#undef str_020d3290
#undef str_020d32bb
#undef str_020d32d9
#undef str_020d3313
#undef str_020d3339
#undef str_020d3368
#undef str_020d3398
#undef str_020d33dc
#undef str_020d342e
#undef str_020d344a
#undef str_020d345d
#undef str_020d3470
#undef str_020d3487
#undef str_020d349e
#undef str_020d34b1
#undef str_020d34c4
#undef str_020d34d6
#undef str_020d34e8
#undef str_020d34f7
#undef str_020d3502
#undef str_020d358d
#undef str_020d3596
#undef str_020d359e
#undef str_020d35a9
#undef str_020d35b5
#undef str_020d35d2
#undef str_020d35dc
#undef str_020d35e7
#undef str_020d35f2
#undef str_020d35fc
#undef str_020d3606
#undef str_020d3610
#undef str_020d3619
#undef str_020d3625
#undef str_020d362d
#undef str_020d3639
#undef str_020d3656
#undef str_020d3664
#undef str_020d3689
#undef local_172c
#undef local_404
#undef local_204
#undef local_164
#undef local_163
#undef local_a4
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_2f
#undef local_2e
#undef local_2d
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
