/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define left (*(char * *)(frame + 32))
#define DAT_020c5082 (*(uint8_t *)(0x20c5082U))
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c5ad8 (*(uint8_t *)(0x20c5ad8U))
#define DAT_020cc543 (*(uint8_t *)(0x20cc543U))
#define DAT_020cc5b6 (*(uint8_t *)(0x20cc5b6U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cc546 (*(char (*)[1])(0x20cc546U))
#define str_020cc565 (*(char (*)[1])(0x20cc565U))
#define str_020cc57e (*(char (*)[1])(0x20cc57eU))
#define str_020cc594 (*(char (*)[1])(0x20cc594U))
#define str_020cc5ba (*(char (*)[1])(0x20cc5baU))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define vararg0 (*(char * *)(frame + 32))
#define local_150d (*(char (*)[3856])(frame + 64563))
#define local_5fd (*(uchar (*)[241])(frame + 68419))
#define local_50c (*(char (*)[484])(frame + 68660))
#define local_328 (*(uint *)(frame + 69144))
#define local_324 (*(uint *)(frame + 69148))
#define local_320 (*(int *)(frame + 69152))
#define local_313 (*(char (*)[241])(frame + 69165))
#define local_222 (*(char (*)[241])(frame + 69406))
#define local_131 (*(char (*)[241])(frame + 69647))
#define local_40 (*(char * *)(frame + 69888))
#define local_3c (*(uint *)(frame + 69892))
#define local_38 (*(uint *)(frame + 69896))
#define local_34 (*(uint *)(frame + 69900))
#define local_30 (*(uint *)(frame + 69904))
#define local_2c (*(uint *)(frame + 69908))
#define local_28 (*(uint *)(frame + 69912))
#define local_24 (*(uint *)(frame + 69916))
#define local_20 (*(undefined4 *)(frame + 69920))
#define local_1c (*(uint *)(frame + 69924))
#define local_18 (*(uint *)(frame + 69928))
#define local_14 (*(char * *)(frame + 69932))
#define uStack_10f2c (*(uint *)(frame + 532))
#define abStack_10f28 (*(byte (*)[4])(frame + 536))
#define acStack_11110 (*(char (*)[241])(frame + 48))
#define acStack_1101f (*(char (*)[243])(frame + 289))
#define aiStack_10f24 (*(int (*)[16005])(frame + 540))


undefined4 recovered_2035200(byte *in_ECX_00,char *in_EDX,uint param_3)

{
  unsigned char frame[69984] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  uchar uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  char *format;
  char cVar10;
  uint uVar11;
  char *pcVar12;

  local_34 = 0;
  local_24 = 0;
  local_2c = 0;
  local_18 = 0;
  local_1c = 0;
  local_38 = 0;
  local_14 = in_EDX;
  uVar6 = 1;
LAB_02035250:
  local_30 = CONCAT31(PF_PART3(local_30, 1),uVar6);
  if (in_ECX_00 == (byte *)0x0) {
    in_ECX_00 = &DAT_020c5084;
  }
  else {
    for (; ((uint)(*in_ECX_00) - 9U < 5U || (*in_ECX_00 == 0x20)); in_ECX_00 = in_ECX_00 + 1) {
    }
  }
  local_131[0] = '\0';
  uVar8 = (uint)*in_ECX_00;
  if ((uVar8 == 0x22) || (uVar8 == 0x27)) {
    pbVar1 = in_ECX_00 + 1;
    uVar11 = (uint)*pbVar1;
    in_ECX_00 = in_ECX_00 + 1;
    uVar9 = uVar8;
    if (*pbVar1 == 0) goto LAB_02035295;
LAB_020352a9:
    in_ECX_00 = in_ECX_00 + 1;
    uVar8 = 0;
    do {
      if (uVar9 == 0) {
        if ((uVar11 - 9 < 0x18) && ((0x80001fU >> (uVar11 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar9 == (int)(char)uVar11) goto LAB_02035301;
      if (uVar8 + 1 < 0xf1) {
        local_131[uVar8] = (char)uVar11;
        uVar8 = uVar8 + 1;
      }
      bVar7 = *in_ECX_00;
      uVar11 = (uint)bVar7;
      in_ECX_00 = in_ECX_00 + 1;
    } while (bVar7 != 0);
    in_ECX_00 = in_ECX_00 + -1;
LAB_02035301:
    local_131[uVar8] = '\0';
    for (; ((uint)(*in_ECX_00) - 9U < 5U || (*in_ECX_00 == 0x20)); in_ECX_00 = in_ECX_00 + 1) {
    }
    if (uVar8 == 0) goto LAB_02035423;
    if ((local_30 & 1) != 0) goto code_r0x02035333;
    goto LAB_020353d2;
  }
  if (uVar8 != 0) {
    uVar9 = 0;
    uVar11 = uVar8;
    if (*in_ECX_00 != 0) goto LAB_020352a9;
LAB_02035295:
    uVar8 = 0;
    goto LAB_02035301;
  }
LAB_02035423:
  local_3c = local_24;
  if (local_24 == 0) {
    pf_varargs_20044f0__4_(local_150d,0xf1,&DAT_020c5119,0x20d9e14);
    local_3c = 1;
  }
  local_2c = CONCAT31((int3)(local_2c >> 8),(byte)local_2c | (byte)local_34);
  local_24 = local_24 + (local_24 == 0);
  local_20 = 1;
  local_30 = 0;
  local_1c = local_1c & 1;
  local_18 = local_18 & 1;
  pcVar12 = local_14;
  goto LAB_020354c2;
code_r0x02035333:
  iVar4 = recovered_20022a0(local_131,&DAT_020cc543);
  uVar6 = 0;
  if (iVar4 != 0) {
    iVar4 = recovered_20022a0(local_131,str_020c7213);
    pcVar12 = local_14;
    if (iVar4 == 0) {
      local_20 = 1;
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 1;
      }
      if ((*local_14 != '\0') && (uVar5 = recovered_2002270(local_14), uVar5 + 1 < param_3)) {
        (pcVar12 + uVar5)[0] = '\n';
        (pcVar12 + uVar5)[1] = '\0';
      }
      uVar5 = recovered_2002270(pcVar12);
      if (param_3 <= uVar5 + 1) {
        return local_20;
      }
      cVar10 = 'u';
      iVar4 = 0;
      goto LAB_0203587a;
    }
    if ((local_131[0] == '-') && (local_131[1] != '\0')) {
      pcVar12 = local_131 + 1;
      do {
        cVar10 = *pcVar12;
        switch((uintptr_t)(cVar10)) {
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '<':
        case '=':
        case '>':
        case '?':
        case '@':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'b':
        case 'c':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
          goto switchD_020353ab_caseD_32;
        case 'A':
          local_2c = 1;
        case '1':
          pcVar12 = pcVar12 + 1;
          break;
        case 'F':
          local_1c = 1;
          pcVar12 = pcVar12 + 1;
          break;
        case 'a':
          local_34 = 1;
          pcVar12 = pcVar12 + 1;
          break;
        case 'd':
          local_38 = 1;
          pcVar12 = pcVar12 + 1;
          break;
        case 'l':
          local_18 = 1;
          pcVar12 = pcVar12 + 1;
          break;
        default:
          goto switchD_020353ab_default;
        }
      } while( true );
    }
LAB_020353d2:
    pcVar12 = local_14;
    if (local_24 == 0x10) {
      local_20 = 0;
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 0;
      }
      if ((*local_14 != '\0') && (uVar5 = recovered_2002270(local_14), uVar5 + 1 < param_3)) {
        (pcVar12 + uVar5)[0] = '\n';
        (pcVar12 + uVar5)[1] = '\0';
      }
      uVar5 = recovered_2002270(pcVar12);
      if (param_3 <= uVar5 + 1) {
        return local_20;
      }
      cVar10 = 'l';
      iVar4 = 0;
      goto LAB_020357fb;
    }
    iVar4 = local_24 * 0xf1;
    local_24 = local_24 + 1;
    pf_varargs_20044f0__4_(local_150d + iVar4,0xf1,&DAT_020c5119,(uint)local_131);
    uVar6 = (undefined1)local_30;
  }
  goto LAB_02035250;
switchD_020353ab_default:
  if (cVar10 != '\0') {
switchD_020353ab_caseD_32:
    pf_varargs_202ecc0__4_(local_14,param_3,str_020cc565,(int)cVar10);
    return 0;
  }
  uVar6 = 1;
  goto LAB_02035250;
LAB_020354c2:
  local_28 = 0;
  recovered_2030400(local_150d + local_30 * 0xf1,str_020d9e14,local_222);
  vararg0 = (char *)0x20354f7;
  uVar8 = recovered_2030680(local_222,local_50c);
  format = str_020cc594;
  if ((char)uVar8 == '\0') {
LAB_020354a0:
    pf_varargs_202ecc0__4_(pcVar12,param_3,format,(uint)local_222);
    local_20 = 0;
  }
  else {
    if (1 < local_3c) {
      vararg0 = local_222;
      pf_varargs_202ecc0__4_(pcVar12,param_3,&DAT_020cc5b6,(uint)local_222);
    }
    if (local_320 == 2) {
      if ((local_38 & 1) == 0) goto LAB_020355a0;
      bVar7 = 1;
LAB_02035564:
      recovered_2074200(pcVar12,param_3,local_50c,local_328,bVar7,(char)local_18,(byte)local_1c);
    }
    else {
      if ((local_324 & 2) == 0 || (local_38 & 1) != 0) {
        bVar7 = (byte)((local_324 & 2) >> 1);
        goto LAB_02035564;
      }
LAB_020355a0:
      if ((local_222[0] == '\0') || (iVar4 = recovered_20022a0(local_222,&DAT_020c5359), iVar4 == 0)
         ) {
        pcVar12 = str_020c6ac7;
      }
      else {
        pcVar12 = str_020c6d20;
        vararg0 = local_222;
      }
      pf_varargs_20044f0__4_(local_313,0xf1,pcVar12,(uint)vararg0);
      recovered_2001e00(acStack_11110,0,0xfc00);
      iVar4 = DAT_020d9d5c;
      uVar8 = recovered_202b3a0(iVar4,local_313,acStack_11110,0x80,&local_28);
      pcVar12 = local_14;
      if (uVar8 == 0) {
        format = str_020cc5ba;
        goto LAB_020354a0;
      }
      if (0x80 < local_28) {
        local_28 = 0x80;
      }
      if ((local_34 & 1) != 0) {
        recovered_2074200(local_14,param_3,&DAT_020c5082,0,1,(char)local_18,(byte)local_1c);
        recovered_2074200(pcVar12,param_3,&DAT_020c5ad8,0,1,(char)local_18,(byte)local_1c);
      }
      if (local_28 != 0) {
        uVar8 = 0;
        do {
          iVar4 = uVar8 * 0x1f8;
          local_40 = (char *)0x0;
          if (acStack_1101f[iVar4] != '\0') {
            recovered_202a060((int)local_313,local_5fd);
            uVar3 = recovered_202a250(acStack_1101f + iVar4,(char *)local_5fd,(uint *)&local_40);
            if ((uVar3 != '\0') && (cVar10 = *local_40, cVar10 != '\0')) {
              pcVar12 = local_40;
              while (pcVar12 = pcVar12 + 1, cVar10 != '\0') {
                if ((cVar10 == '/') || (cVar10 == '\\')) goto LAB_020356c0;
                cVar10 = *pcVar12;
              }
              if (((local_2c & 1) != 0) || (acStack_11110[iVar4] != '.')) {
                bVar7 = 1;
                if (aiStack_10f24[uVar8 * 0x7e] != 2) {
                  bVar7 = (abStack_10f28[iVar4] & 2) >> 1;
                }
                recovered_2074200(local_14,param_3,acStack_11110 + iVar4,
                                  *(uint *)(acStack_1101f + iVar4 + 0xf3),bVar7,(char)local_18,
                                  (byte)local_1c);
              }
            }
          }
LAB_020356c0:
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_28);
      }
    }
    pcVar12 = local_14;
  }
  local_30 = local_30 + 1;
  if (local_30 == local_24) {
    return local_20;
  }
  goto LAB_020354c2;
  while (uVar8 = iVar4 + uVar5 + 2, iVar4 = iVar2, uVar8 < param_3) {
LAB_0203587a:
    pcVar12[iVar4 + uVar5] = cVar10;
    cVar10 = str_020cc546[iVar4 + 1];
    iVar2 = iVar4 + 1;
    if (cVar10 == '\0') break;
  }
  pcVar12[iVar2 + uVar5] = '\0';
  return local_20;
  while (uVar8 = iVar4 + uVar5 + 2, iVar4 = iVar2, uVar8 < param_3) {
LAB_020357fb:
    pcVar12[iVar4 + uVar5] = cVar10;
    cVar10 = str_020cc57e[iVar4 + 1];
    iVar2 = iVar4 + 1;
    if (cVar10 == '\0') break;
  }
  pcVar12[iVar2 + uVar5] = '\0';
  return 0;
}
#undef left
#undef DAT_020c5082
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020c5ad8
#undef DAT_020cc543
#undef DAT_020cc5b6
#undef DAT_020d9d5c
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c7213
#undef str_020cc546
#undef str_020cc565
#undef str_020cc57e
#undef str_020cc594
#undef str_020cc5ba
#undef str_020d9e14
#undef vararg0
#undef local_150d
#undef local_5fd
#undef local_50c
#undef local_328
#undef local_324
#undef local_320
#undef local_313
#undef local_222
#undef local_131
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef uStack_10f2c
#undef abStack_10f28
#undef acStack_11110
#undef acStack_1101f
#undef aiStack_10f24
