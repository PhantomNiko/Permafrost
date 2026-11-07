/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define DAT_0208e6b2 (*(uint8_t *)(0x20d6b5bU))
#define DAT_0208f829 (*(uint8_t *)(0x20c5754U))
#define DAT_02091012 (*(uint8_t *)(0x20ce5e8U))
#define DAT_0209755f (*(uint8_t *)(0x20d6ee1U))
#define DAT_02097560 (*(uint8_t *)(0x20d6ee2U))
#define DAT_02097561 (*(uint8_t *)(0x20d6ee3U))
#define DAT_02097562 (*(uint8_t *)(0x20d6ee4U))
#define DAT_02097563 (*(char *)(0x20d6ee5U))
#define DAT_02097564 (*(uint8_t *)(0x20d6ee6U))
#define DAT_02097565 (*(char *)(0x20d6ee7U))
#define DAT_02097566 (*(uint8_t *)(0x20d6ee8U))
#define DAT_02097567 (*(uint8_t *)(0x20d6ee9U))
#define DAT_02097568 (*(uint8_t *)(0x20d6eeaU))
#define DAT_02097569 (*(uint8_t *)(0x20d6eebU))
#define DAT_0209756a (*(uint8_t *)(0x20d6eecU))
#define DAT_0209756b (*(uint8_t *)(0x20d6eedU))
#define DAT_0209756c (*(uint8_t *)(0x20d6eeeU))
#define DAT_02097571 (*(uint8_t *)(0x20d6ef3U))
#define DAT_02097575 (*(uint8_t *)(0x20d6ef7U))
#define DAT_0209757c (*(uint8_t *)(0x20d6efeU))
#define DAT_02097583 (*(uint8_t *)(0x20d6f05U))
#define DAT_020c77e4 (*(uint32_t volatile *)(0x223dbfcU))
#define DAT_020c77e8 (*(uint32_t volatile *)(0x223dc00U))
#define abStack_1d1 (*(byte (*)[321])(frame + 3103))
#define local_14 (*(ulong *)(frame + 3548))
#define local_18 (*(uint *)(frame + 3544))
#define local_1c (*(byte * *)(frame + 3540))
#define local_20 (*(uint *)(frame + 3536))
#define local_24 (*(undefined4 *)(frame + 3532))
#define local_28 (*(undefined4 *)(frame + 3528))
#define local_2c (*(undefined4 *)(frame + 3524))
#define local_30 (*(undefined4 *)(frame + 3520))
#define local_34 (*(undefined4 *)(frame + 3516))
#define local_38 (*(undefined4 *)(frame + 3512))
#define local_3c (*(undefined4 *)(frame + 3508))
#define local_40 (*(undefined4 *)(frame + 3504))
#define local_44 (*(undefined4 *)(frame + 3500))
#define local_48 (*(undefined4 *)(frame + 3496))
#define local_4c (*(undefined4 *)(frame + 3492))
#define local_50 (*(void * *)(frame + 3488))
#define local_5d0 (*(char (*)[1023])(frame + 2080))
#define local_90 (*(byte (*)[64])(frame + 3424))
#define local_dd0 (*(byte (*)[2048])(frame + 32))
#define local_dd4 (*(undefined4 *)(frame + 28))
#define str_02097589 (*(char (*)[1])(0x20d6f0bU))
#define str_02097594 (*(char (*)[1])(0x20d6f16U))
#define str_020975ae (*(char (*)[1])(0x20d6f30U))
#define str_020975c1 (*(char (*)[1])(0x20d6f43U))
#define str_020975ca (*(char (*)[1])(0x20d6f4cU))
#define str_020975df (*(char (*)[1])(0x20d6f61U))
#define str_020975f2 (*(char (*)[1])(0x20d6f74U))
#define str_02097617 (*(char (*)[1])(0x20d6f99U))
#define str_02097621 (*(char (*)[1])(0x20d6fa3U))
#define str_0209763d (*(char (*)[1])(0x20d6fbfU))
uint recovered_20492b0(char *text)

{
  unsigned char frame[3600] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 *vararg1;
  undefined4 uVar7;
  byte bVar8;
  uchar extraout_CL;
  uchar extraout_CL_00;
  uchar in_CL;
  uchar extraout_CL_01;
  uchar extraout_CL_02;
  uchar extraout_CL_03;
  uchar in_CL_00;
  uchar in_CL_01;
  char *pcVar9;
  uint extraout_ECX = 0;
  uint extraout_ECX_00 = 0;
  uint extraout_EDX = 0;
  uint incoming_edx;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  uint extraout_EDX_04 = 0;
  uint extraout_EDX_05 = 0;
  byte *pbVar10;
  uint uVar11;
  byte *text_00;
  char *pcVar12;
  int iVar13;
  char *pcVar14;

  pcVar9 = &DAT_0208e2dc;
  if (text != (char *)0x0) {
    pcVar9 = text;
  }
  pbVar10 = abStack_1d1 + 1;
  pf_varargs_2003aa0__4_((char *)pbVar10,0x140,&DAT_0208e323,(uint)pcVar9);
  iVar4 = 0;
  while ((abStack_1d1[iVar4 + 1] - 9 < 5 || (abStack_1d1[iVar4 + 1] == 0x20))) {
    iVar4 = iVar4 + 1;
  }
  if (iVar4 != 0) {
    uVar5 = recovered_2002270((char *)(abStack_1d1 + iVar4 + 1));
    recovered_2001c30(pbVar10,abStack_1d1 + iVar4 + 1,uVar5 + 1);
  }
  for (uVar5 = recovered_2002270((char *)pbVar10);
      (uVar5 != 0 && ((abStack_1d1[uVar5] - 9 < 5 || (abStack_1d1[uVar5] == 0x20))));
      uVar5 = uVar5 - 1) {
    abStack_1d1[uVar5] = 0;
  }
  if (abStack_1d1[1] == 0) {
    return 0;
  }
  if ((byte)(abStack_1d1[1] + 0x9f) < 0x1a) {
    if (abStack_1d1[1] != 0x72) goto LAB_02036ca2;
  }
  else if (abStack_1d1[1] != 0x52) goto LAB_02036ca2;
  if ((byte)(abStack_1d1[2] + 0x9f) < 0x1a) {
    abStack_1d1[2] = abStack_1d1[2] + -0x20;
  }
  if (abStack_1d1[2] == 'E') {
    if ((byte)(abStack_1d1[3] + 0x9f) < 0x1a) {
      abStack_1d1[3] = abStack_1d1[3] + -0x20;
    }
    if (abStack_1d1[3] == 'M') {
      return 0;
    }
  }
LAB_02036ca2:
  uVar11 = 0;
  do {
    switch((uintptr_t)(abStack_1d1[1])) {
    case 0:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x20:
    case 0x2c:
      goto switchD_02036cc9_caseD_0;
    default:
      if (uVar11 + 1 < 0x40) {
        if ((byte)(abStack_1d1[1] + 0x9f) < 0x1a) {
          abStack_1d1[1] = abStack_1d1[1] - 0x20;
        }
        local_90[uVar11] = abStack_1d1[1];
      }
      abStack_1d1[1] = abStack_1d1[uVar11 + 2];
      uVar11 = uVar11 + 1;
    }
  } while( true );
switchD_02036cc9_caseD_0:
  uVar6 = uVar11;
  if (0x3e < uVar11) {
    uVar6 = 0x3f;
  }
  local_90[uVar6] = 0;
  pbVar10 = abStack_1d1 + uVar6 + 1;
  for (iVar4 = 0; (pbVar10[iVar4] - 9 < 5 || (pbVar10[iVar4] == 0x20)); iVar4 = iVar4 + 1) {
  }
  uVar6 = uVar11;
  if (0x3e < uVar11) {
    uVar6 = 0x3f;
  }
  if (iVar4 != 0) {
    uVar5 = recovered_2002270((char *)(abStack_1d1 + iVar4 + uVar6 + 1));
    recovered_2001c30(pbVar10,abStack_1d1 + iVar4 + uVar6 + 1,uVar5 + 1);
  }
  uVar5 = recovered_2002270((char *)pbVar10);
  if (uVar5 != 0) {
    if (0x3e < uVar11) {
      uVar11 = 0x3f;
    }
    do {
      if ((4 < abStack_1d1[uVar5 + (uVar11 - 0x1d1) + 0x1d1] - 9) &&
         (abStack_1d1[uVar5 + (uVar11 - 0x1d1) + 0x1d1] != 0x20)) break;
      abStack_1d1[uVar5 + (uVar11 - 0x1d1) + 0x1d1] = 0;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  local_dd4 = 0;
  bVar8 = *pbVar10;
  uVar11 = 0;
  if (bVar8 != 0) {
LAB_02036dca:
    do {
      uVar6 = (uint)bVar8;
      if (uVar6 < 0x20) {
        if (uVar6 == 9) {
LAB_02036dc5:
          bVar8 = pbVar10[1];
          pbVar10 = pbVar10 + 1;
          goto LAB_02036dca;
        }
        uVar11 = local_dd4;
        if (uVar6 == 0) break;
      }
      else if ((uVar6 == 0x2c) || (uVar6 == 0x20)) goto LAB_02036dc5;
      if (7 < local_dd4) {
        uVar11 = 0;
        pcVar9 = str_02097594;
        while( true ) {
          do {
            pcVar14 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar14;
          } while (cVar2 == '\r');
          if (cVar2 == '\0') break;
          if (cVar2 == '\n') {
            recovered_20a11d0(local_5d0,uVar11,1,'\x01');
            uVar11 = 0;
          }
          else if (uVar11 + 1 < 0x400) {
            local_5d0[uVar11] = cVar2;
            uVar11 = uVar11 + 1;
          }
        }
        recovered_20a11d0(local_5d0,uVar11,1,'\x01');
        return 1;
      }
      iVar4 = local_dd4 * 0x100;
      text_00 = local_dd0 + iVar4;
      iVar13 = 0;
      if (bVar8 == 0x2c) {
        uVar11 = 0;
      }
      else {
        local_20 = 0;
        local_18 = 0;
        uVar11 = 0;
        local_1c = text_00;
        do {
          cVar2 = (char)uVar6;
          if ((cVar2 == '\'') || (uVar6 == 0x22)) {
            bVar3 = (char)local_20 != cVar2;
            uVar6 = (uint)CONCAT11(bVar3,cVar2);
            if ((byte)local_18 == 0) {
              local_20 = uVar6;
            }
            local_18 = (uint)(byte)((byte)local_18 ^ 1 | bVar3);
          }
          if (uVar11 + 1 < 0x100) {
            text_00[uVar11] = (byte)uVar6;
            uVar11 = uVar11 + 1;
          }
          bVar8 = pbVar10[1];
          pbVar10 = pbVar10 + 1;
          if (bVar8 == 0) break;
          uVar6 = (uint)bVar8;
        } while (bVar8 != 0x2c || (byte)local_18 != '\0');
      }
      text_00[uVar11] = 0;
      for (; (text_00[iVar13] - 9 < 5 || (text_00[iVar13] == 0x20)); iVar13 = iVar13 + 1) {
      }
      if (iVar13 != 0) {
        uVar5 = recovered_2002270((char *)(text_00 + iVar13));
        recovered_2001c30(text_00,text_00 + iVar13,uVar5 + 1);
      }
      uVar5 = recovered_2002270((char *)text_00);
      while ((uVar5 != 0 &&
             ((local_dd0[uVar5 + iVar4 + -1] - 9 < 5 || (local_dd0[uVar5 + iVar4 + -1] == 0x20)))))
      {
        local_dd0[uVar5 + iVar4 + -1] = 0;
        uVar5 = uVar5 - 1;
      }
      uVar11 = local_dd4 + 1;
      bVar8 = pbVar10[*pbVar10 == 0x2c];
      pbVar10 = pbVar10 + (*pbVar10 == 0x2c);
      local_dd4 = uVar11;
    } while (bVar8 != 0);
  }
  cVar2 = DAT_02097563;
  if (local_90[0] == 0) {
joined_r0x02037286:
    if (cVar2 == '\0') {
      uVar11 = DAT_020c77e8;
      if (uVar11 != 0) {
        uVar6 = 0;
        iVar4 = DAT_020c77e4;
        do {
          iVar13 = 0;
          if (iVar4 != 0) {
            recovered_2001710(*(void **)(iVar4 + uVar6 * 4));
            *(undefined4 *)(iVar4 + uVar6 * 4) = 0;
            iVar13 = DAT_020c77e4;
            uVar11 = DAT_020c77e8;
          }
          uVar6 = uVar6 + 1;
          iVar4 = iVar13;
        } while (uVar6 < uVar11);
      }
      DAT_020c77e8 = 0;
      uVar11 = 0;
      pcVar9 = &DAT_0208e6b2;
      while( true ) {
        do {
          pcVar14 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar14;
        } while (cVar2 == '\r');
        if (cVar2 == '\0') break;
        if (cVar2 == '\n') {
          recovered_20a11d0(local_5d0,uVar11,1,'\x01');
          uVar11 = 0;
        }
        else if (uVar11 + 1 < 0x400) {
          local_5d0[uVar11] = cVar2;
          uVar11 = uVar11 + 1;
        }
      }
LAB_020372de:
      recovered_20a11d0(local_5d0,uVar11,1,'\x01');
      in_CL = extraout_CL_00;
      goto LAB_020372f3;
    }
    if (local_90[0] != 0) goto LAB_0203718f;
    pcVar9 = &DAT_02097567;
LAB_02037304:
    if (*pcVar9 == '\0') {
      if (uVar11 == 0) {
        pf_varargs_2003aa0__4_(local_5d0,0xf1,&DAT_0208e323,0x20c5014U);
      }
      else {
        recovered_2086560((int)local_dd0,local_5d0,0xf1);
      }
      local_50 = (void *)0x0;
      local_14 = 0;
      iVar4 = recovered_20be360(&local_50,&local_14);
      uVar11 = extraout_EDX_04;
      if ((char)iVar4 != '\0') {
        uVar7 = recovered_2028050((int)local_5d0,local_50,local_14);
        recovered_2001710(local_50);
        uVar11 = extraout_EDX_05;
        if ((char)uVar7 != '\0') {
          pcVar9 = local_5d0;
          pcVar14 = local_5d0;
          do {
            do {
              pcVar12 = pcVar14;
              pcVar9 = pcVar9 + 1;
              cVar2 = pcVar9[-1];
              pcVar14 = pcVar9;
            } while (cVar2 == '/');
          } while ((cVar2 == '\\') || (pcVar14 = pcVar12, cVar2 != '\0'));
          pf_varargs_202ebf0__4_(str_020975c1,(uint)pcVar12);
          in_CL = extraout_CL_03;
          goto LAB_020372f3;
        }
      }
      pcVar9 = str_020975ae;
      goto LAB_0203767d;
    }
  }
  else {
    bVar8 = local_90[0];
    if ((byte)(local_90[0] + 0x9f) < 0x1a) {
      bVar8 = local_90[0] - 0x20;
    }
    if (bVar8 == 0x4e) {
      if (local_90[1] == '\0') {
        pcVar9 = &DAT_02097564;
LAB_0203717e:
        cVar2 = *pcVar9;
        goto joined_r0x02037286;
      }
      bVar8 = local_90[1];
      if ((byte)(local_90[1] + 0x9f) < 0x1a) {
        bVar8 = local_90[1] + -0x20;
      }
      if (bVar8 == 'E') {
        cVar2 = DAT_02097565;
        if (local_90[2] == '\0') goto joined_r0x02037286;
        bVar8 = local_90[2];
        if ((byte)(local_90[2] + 0x9f) < 0x1a) {
          bVar8 = local_90[2] + -0x20;
        }
        if ((bVar8 == 'W') && (pcVar9 = &DAT_02097566, local_90[3] == '\0')) goto LAB_0203717e;
      }
    }
    else if (bVar8 == 0x4c) {
      if (local_90[1] == '\0') {
        pcVar9 = &DAT_0209755f;
      }
      else {
        bVar8 = local_90[1];
        if ((byte)(local_90[1] + 0x9f) < 0x1a) {
          bVar8 = local_90[1] + -0x20;
        }
        if (bVar8 != 'I') goto LAB_0203718f;
        if (local_90[2] == '\0') {
          pcVar9 = &DAT_02097560;
        }
        else {
          bVar8 = local_90[2];
          if ((byte)(local_90[2] + 0x9f) < 0x1a) {
            bVar8 = local_90[2] + -0x20;
          }
          if (bVar8 != 'S') goto LAB_0203718f;
          if (local_90[3] == '\0') {
            pcVar9 = &DAT_02097561;
          }
          else {
            bVar8 = local_90[3];
            if ((byte)(local_90[3] + 0x9f) < 0x1a) {
              bVar8 = local_90[3] + -0x20;
            }
            if ((bVar8 != 'T') || (pcVar9 = &DAT_02097562, local_90[4] != '\0')) goto LAB_0203718f;
          }
        }
      }
      if (*pcVar9 == '\0') {
        iVar4 = DAT_020c77e8;
        if (iVar4 != 0) {
          uVar11 = 0;
          do {
            iVar4 = DAT_020c77e4;
            puVar1 = *(undefined1 **)(iVar4 + uVar11 * 4);
            vararg1 = &DAT_0208e2dc;
            if (puVar1 != (undefined1 *)0x0) {
              vararg1 = puVar1;
            }
            uVar11 = uVar11 + 1;
            pf_varargs_202ebf0__4__4_(str_0209763d,uVar11,(uint)vararg1);
            uVar6 = DAT_020c77e8;
            in_CL = extraout_CL;
          } while (uVar11 < uVar6);
          goto LAB_020372f3;
        }
        uVar11 = 0;
        pcVar9 = &DAT_0208f829;
        while( true ) {
          do {
            pcVar14 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar14;
          } while (cVar2 == '\r');
          if (cVar2 == '\0') break;
          if (cVar2 == '\n') {
            recovered_20a11d0(local_5d0,uVar11,1,'\x01');
            uVar11 = 0;
          }
          else if (uVar11 + 1 < 0x400) {
            local_5d0[uVar11] = cVar2;
            uVar11 = uVar11 + 1;
          }
        }
        goto LAB_020372de;
      }
    }
LAB_0203718f:
    if ((byte)(local_90[0] + 0x9f) < 0x1a) {
      local_90[0] = local_90[0] - 0x20;
    }
    if (local_90[0] == 0x53) {
      if (local_90[1] == '\0') {
        pcVar9 = &DAT_02097568;
      }
      else {
        if ((byte)(local_90[1] + 0x9f) < 0x1a) {
          local_90[1] = local_90[1] + -0x20;
        }
        if (local_90[1] != 'A') goto LAB_0203730d;
        if (local_90[2] == '\0') {
          pcVar9 = &DAT_02097569;
        }
        else {
          if ((byte)(local_90[2] + 0x9f) < 0x1a) {
            local_90[2] = local_90[2] + -0x20;
          }
          if (local_90[2] != 'V') goto LAB_0203730d;
          if (local_90[3] == '\0') {
            pcVar9 = &DAT_0209756a;
          }
          else {
            if ((byte)(local_90[3] + 0x9f) < 0x1a) {
              local_90[3] = local_90[3] + -0x20;
            }
            if ((local_90[3] != 'E') || (pcVar9 = &DAT_0209756b, local_90[4] != '\0'))
            goto LAB_0203730d;
          }
        }
      }
      goto LAB_02037304;
    }
  }
LAB_0203730d:
  bVar3 = recovered_2051f00((char *)local_90,&DAT_02097575);
  if (bVar3) {
    if (uVar11 == 0) {
      pf_varargs_2003aa0__4_(local_5d0,0xf1,&DAT_0208e323,0x20c5020U);
    }
    else {
      recovered_2086560((int)local_dd0,local_5d0,0xf1);
    }
    local_50 = (void *)CONCAT22(PF_PART2(local_50, 2),1);
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    iVar4 = DAT_020c77e4;
    iVar13 = DAT_020c77e8;
    uVar7 = recovered_20be4c0(iVar4,iVar13,&local_50);
    uVar11 = extraout_EDX;
    if ((char)uVar7 != '\0') {
      uVar7 = recovered_20bec40((undefined2 *)&local_50,(int)local_5d0);
      recovered_209bc20((undefined2 *)&local_50,incoming_edx);
      uVar11 = extraout_EDX_00;
      if ((char)uVar7 != '\0') {
        pcVar9 = local_5d0;
        pcVar14 = local_5d0;
        do {
          do {
            pcVar12 = pcVar14;
            pcVar9 = pcVar9 + 1;
            cVar2 = pcVar9[-1];
            pcVar14 = pcVar9;
          } while (cVar2 == '/');
        } while ((cVar2 == '\\') || (pcVar14 = pcVar12, cVar2 != '\0'));
        pf_varargs_202ebf0__4_(str_020975c1,(uint)pcVar12);
        uVar11 = extraout_ECX;
        uVar6 = 0;
        goto LAB_0203773a;
      }
    }
    recovered_203e190(str_020975ca,uVar11);
    uVar11 = extraout_ECX_00;
    uVar6 = 1;
LAB_0203773a:
    recovered_2027720((uchar)uVar11);
    return uVar6;
  }
  bVar3 = recovered_2051f00((char *)local_90,&DAT_0209756c);
  if (!bVar3) {
    bVar3 = recovered_2051f00((char *)local_90,&DAT_0209757c);
    if (!bVar3) {
      bVar3 = recovered_2051f00((char *)local_90,&DAT_02097571);
      if (!bVar3) {
        bVar3 = recovered_2051f00((char *)local_90,&DAT_02097583);
        if (bVar3) {
          if (uVar11 == 0) {
            pf_varargs_2003aa0__4_(local_5d0,0xf1,&DAT_0208e323,0x20c5020U);
          }
          else {
            recovered_2086560((int)local_dd0,local_5d0,0xf1);
          }
          uVar11 = recovered_20bdeb0((int)local_5d0);
          recovered_2027720(in_CL_01);
          return (uint)(byte)((byte)uVar11 ^ 1);
        }
        bVar3 = recovered_2051f00((char *)local_90,str_02097589);
        if (!bVar3) {
          pf_varargs_202ebf0__4_(str_02097621,(uint)local_90);
          recovered_2027720(in_CL_00);
          return 1;
        }
        uVar11 = recovered_20bf6a0();
        return uVar11;
      }
      iVar4 = DAT_020c77e4;
      uVar11 = DAT_020c77e8;
      recovered_2074860(iVar4,uVar11);
      in_CL = extraout_CL_01;
LAB_020372f3:
      recovered_2027720(in_CL);
      return 0;
    }
    if (uVar11 == 0) {
      pf_varargs_2003aa0__4_(local_5d0,0xf1,&DAT_0208e323,0x20c5020U);
    }
    else {
      recovered_2086560((int)local_dd0,local_5d0,0xf1);
    }
    uVar6 = recovered_20bf540((int)local_5d0);
    uVar11 = 1;
    if ((char)uVar6 != '\0') {
      pcVar9 = local_5d0;
      pcVar14 = local_5d0;
      do {
        do {
          pcVar12 = pcVar14;
          pcVar9 = pcVar9 + 1;
          cVar2 = pcVar9[-1];
          pcVar14 = pcVar9;
        } while (cVar2 == '/');
      } while ((cVar2 == '\\') || (pcVar14 = pcVar12, cVar2 != '\0'));
      pf_varargs_202ebf0__4_(str_02097617,(uint)pcVar12);
      uVar11 = 0;
    }
    uVar6 = uVar11;
    goto LAB_0203773a;
  }
  if (uVar11 == 0) {
    pf_varargs_2003aa0__4_(local_5d0,0xf1,&DAT_0208e323,0x20c5014U);
  }
  else {
    recovered_2086560((int)local_dd0,local_5d0,0xf1);
  }
  local_50 = (void *)0x0;
  local_14 = 0;
  uVar7 = recovered_2027f10((int)local_5d0,&local_50,&local_14);
  uVar11 = extraout_EDX_01;
  if ((char)uVar7 != '\0') {
    if ((3 < local_14) && (iVar4 = recovered_2001ff0(local_50,&DAT_02091012,4), iVar4 == 0)) {
      pcVar9 = str_020975f2;
      uVar11 = extraout_EDX_02;
      goto LAB_0203767d;
    }
    uVar6 = recovered_2074430((int)local_50,local_14);
    uVar11 = extraout_EDX_03;
    if ((char)uVar6 != '\0') {
      pcVar9 = local_5d0;
      pcVar14 = local_5d0;
      do {
        do {
          pcVar12 = pcVar14;
          pcVar9 = pcVar9 + 1;
          cVar2 = pcVar9[-1];
          pcVar14 = pcVar9;
        } while (cVar2 == '/');
      } while ((cVar2 == '\\') || (pcVar14 = pcVar12, cVar2 != '\0'));
      pf_varargs_202ebf0__4_(str_02097617,(uint)pcVar12);
      in_CL = extraout_CL_02;
      goto LAB_020372f3;
    }
  }
  pcVar9 = str_020975df;
LAB_0203767d:
  recovered_203e190(pcVar9,uVar11);
  return 1;
}
