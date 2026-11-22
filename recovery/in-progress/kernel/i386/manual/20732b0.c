/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020cc3c1 (*(uint8_t *)(0x20cc3c1U))
#define local_683 (*(char (*)[384])(frame + 2077))
#define local_503 (*(char (*)[245])(frame + 2461))
#define local_40e (*(char *)(frame + 2706))
#define local_40d (*(char *)(frame + 2707))
#define local_40c (*(char *)(frame + 2708))
#define local_212 (*(char (*)[241])(frame + 3214))
#define local_121 (*(char (*)[241])(frame + 3455))
#define local_30 (*(char * *)(frame + 3696))
#define local_2c (*(char * *)(frame + 3700))
#define local_28 (*(uint *)(frame + 3704))
#define local_24 (*(uint * *)(frame + 3708))
#define local_20 (*(uint *)(frame + 3712))
#define local_1c (*(char * *)(frame + 3716))
#define local_18 (*(uint *)(frame + 3720))
#define local_14 (*(char * *)(frame + 3724))
#define local_e83 (*(byte (*)[512])(frame + 29))
#define local_c83 (*(char (*)[512])(frame + 541))
#define local_a83 (*(char (*)[512])(frame + 1053))
#define local_883 (*(byte (*)[512])(frame + 1565))


undefined4 recovered_20732b0(uint *in_ECX,char *in_EDX,undefined1 *param_3)

{
  unsigned char frame[3776] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  uint uVar9;
  undefined4 extraout_ECX = 0;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;

  if (in_EDX == (char *)0x0) {
    return 0;
  }
  local_24 = in_ECX;
  local_1c = in_EDX;
  recovered_2001e00(param_3,0,0x65e8);
  local_14 = (char *)*local_24;
  uVar9 = local_24[1];
  uVar14 = 0;
  if (uVar9 == 0 || local_14 == (char *)0x0) {
    return 0;
  }
  pbVar16 = local_883;
  do {
    local_a83[0] = '\0';
    uVar3 = 0;
    do {
      uVar11 = uVar14;
      cVar8 = local_14[uVar11];
      if (cVar8 != '\r') {
        if (cVar8 == '\n') break;
        if (uVar3 + 1 < 0x200) {
          local_a83[uVar3] = cVar8;
          uVar3 = uVar3 + 1;
        }
      }
      uVar14 = uVar11 + 1;
    } while (uVar11 + 1 < uVar9);
    uVar14 = uVar11 + 1;
    local_a83[uVar3] = '\0';
    pf_varargs_20044f0__4_(local_503 + 0xf1,0x200,&DAT_020c5119,(uint)local_a83);
    iVar4 = 0;
    while (((byte)(uint)(local_503[iVar4 + 0xf1]) - 9 < 5 || ((byte)local_503[iVar4 + 0xf1] == 0x20))) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 != 0) {
      uVar5 = recovered_2002270(local_503 + iVar4 + 0xf1);
      recovered_2001c30(local_503 + 0xf1,local_503 + iVar4 + 0xf1,uVar5 + 1);
    }
    uVar5 = recovered_2002270(local_503 + 0xf1);
    while ((uVar5 != 0 &&
           (((byte)(uint)(local_503[uVar5 + 0xf0]) - 9 < 5 || ((byte)local_503[uVar5 + 0xf0] == 0x20))))) {
      local_503[uVar5 + 0xf0] = '\0';
      uVar5 = uVar5 - 1;
    }
    if ((byte)local_503[0xf1] < 0x23) {
      if ((local_503[0xf1] != 0) && (local_503[0xf1] != 9)) goto LAB_02073480;
    }
    else if ((local_503[0xf1] != 0x23) &&
            (((((local_503[0xf1] != 0x2e || (local_503[0xf2] != 'P')) || (local_503[0xf3] != 'H'))
              || ((local_503[0xf4] != 'O' || (local_40e != 'N')))) ||
             ((local_40d != 'Y' || (local_40c != ':')))))) {
LAB_02073480:
      pf_varargs_20044f0__4_((char *)pbVar16,0x200,&DAT_020c5119,(uint)(local_503 + 0xf1));
      bVar2 = recovered_2072420((char *)pbVar16,local_121,local_683,local_503);
      if ((!bVar2) && (pcVar6 = recovered_20024f0(local_503 + 0xf1,':'), pcVar6 != (char *)0x0)) {
        *pcVar6 = '\0';
        pf_varargs_20044f0__4_(local_c83,0x200,&DAT_020c5119,(uint)(pcVar6 + 1));
        pbVar13 = local_e83;
        recovered_2073030((int)local_24,local_503 + 0xf1,(char *)pbVar13,0x200,&DAT_020c5084,
                          &DAT_020c5084,&DAT_020c5084,&DAT_020c5084);
        local_18 = uVar14;
LAB_02073531:
        for (; ((uint)(*pbVar13) - 9 < 5 || (*pbVar13 == 0x20)); pbVar13 = pbVar13 + 1) {
        }
        local_212[0] = '\0';
        pcVar6 = (char *)(uint)*pbVar13;
        if ((pcVar6 == (char *)0x22) || (pcVar6 == (char *)0x27)) {
          pbVar12 = pbVar13 + 1;
          pcVar10 = (char *)(uint)*pbVar12;
          pbVar13 = pbVar13 + 1;
          pcVar7 = pcVar6;
          if (*pbVar12 == 0) goto LAB_02073565;
LAB_02073572:
          uVar9 = 0;
          local_14 = pcVar7;
          pbVar12 = pbVar13;
          do {
            uVar14 = local_18;
            pbVar13 = pbVar12 + 1;
            if (local_14 == (char *)0x0) {
              if ((pcVar10 + -9 < (char *)0x18) &&
                 (local_20 = uVar9, (0x80001fU >> ((uint)(pcVar10 + -9) & 0x1f) & 1) != 0)) {
                pbVar13 = pbVar12;
                break;
              }
            }
            else if (local_14 == (char *)(int)(char)pcVar10) break;
            if (uVar9 + 1 < 0xf1) {
              local_212[uVar9] = (char)pcVar10;
              uVar9 = uVar9 + 1;
            }
            pcVar10 = (char *)(uint)*pbVar13;
            pbVar12 = pbVar13;
          } while (*pbVar13 != 0);
        }
        else {
          if (pcVar6 == (char *)0x0) goto LAB_02073710;
          pcVar7 = (char *)0x0;
          pcVar10 = pcVar6;
          if (*pbVar13 != 0) goto LAB_02073572;
LAB_02073565:
          uVar9 = 0;
        }
        local_20 = uVar9;
        local_212[uVar9] = '\0';
        for (; ((uint)(*pbVar13) - 9 < 5 || (*pbVar13 == 0x20)); pbVar13 = pbVar13 + 1) {
        }
        if (local_20 != 0) {
          iVar4 = recovered_20022a0(local_212,local_1c);
          local_503[0] = '\0';
          if (iVar4 != 0) break;
          bVar2 = false;
          goto LAB_0207373b;
        }
      }
    }
LAB_02073710:
    local_14 = (char *)*local_24;
    if (local_14 == (char *)0x0) {
      return 0;
    }
    uVar9 = local_24[1];
    if (uVar9 <= uVar14) {
      return 0;
    }
  } while( true );
  pcVar6 = recovered_20024f0(local_212,'%');
  if (pcVar6 != (char *)0x0) {
    local_14 = recovered_20024f0(local_212,'%');
    local_20 = recovered_2002270(local_1c);
    if (local_14 != (char *)0x0) {
      local_2c = (char *)((int)local_14 - (int)local_212);
      local_14 = local_14 + 1;
      local_28 = recovered_2002270(local_14);
      local_30 = (char *)(local_20 - (local_28 + (int)local_2c));
      if (((local_28 + (int)local_2c <= local_20) &&
          (iVar4 = recovered_2019320(local_212,local_1c,(ulong)local_2c), iVar4 == 0)) &&
         ((local_28 == 0 ||
          (iVar4 = recovered_20022a0(local_1c + (local_20 - local_28),local_14), iVar4 == 0)))) {
        pcVar6 = local_30;
        if (0xef < local_30) {
          pcVar6 = (char *)0xf0;
        }
        recovered_2001b70(local_503,local_1c + (int)local_2c,(ulong)pcVar6);
        local_503[(int)pcVar6] = '\0';
        bVar2 = local_503[0] != '\0';
LAB_0207373b:
        *param_3 = 1;
        param_3[1] = bVar2;
        pf_varargs_20044f0__4_(param_3 + 2,0xf1,&DAT_020c5119,(uint)local_1c);
        pcVar6 = param_3 + 0xf3;
        pf_varargs_20044f0__4_(pcVar6,0xf1,&DAT_020c5119,(uint)local_503);
        local_1c = param_3 + 0x1e4;
        local_2c = param_3 + 0x3e4;
        param_3[0x1e4] = 0;
        param_3[0x3e4] = 0;
        local_14 = pcVar6;
        recovered_2073030((int)local_24,local_c83,(char *)pbVar16,0x200,&DAT_020c5084,&DAT_020c5084,
                          &DAT_020c5084,pcVar6);
        local_30 = param_3 + 0xf4;
        local_28 = 0;
        uVar9 = local_18;
        goto LAB_020737e1;
      }
    }
  }
  goto LAB_02073531;
LAB_020737e1:
  for (; ((uint)(*pbVar16) - 9 < 5 || (*pbVar16 == 0x20)); pbVar16 = pbVar16 + 1) {
  }
  local_683[0] = '\0';
  uVar14 = (uint)*pbVar16;
  if ((uVar14 == 0x22) || (uVar14 == 0x27)) {
    pbVar13 = pbVar16 + 1;
    uVar11 = (uint)*pbVar13;
    pbVar16 = pbVar16 + 1;
    uVar3 = uVar14;
    if (*pbVar13 == 0) goto LAB_02073815;
LAB_02073822:
    pbVar16 = pbVar16 + 1;
    uVar14 = 0;
    do {
      if (uVar3 == 0) {
        if ((uVar11 - 9 < 0x18) && (local_20 = uVar14, (0x80001fU >> (uVar11 - 9 & 0x1f) & 1) != 0))
        break;
      }
      else if (uVar3 == (int)(char)uVar11) goto LAB_02073887;
      if (uVar14 + 1 < 0xf1) {
        local_683[uVar14] = (char)uVar11;
        uVar14 = uVar14 + 1;
      }
      bVar1 = *pbVar16;
      uVar11 = (uint)bVar1;
      pbVar16 = pbVar16 + 1;
    } while (bVar1 != 0);
    pbVar16 = pbVar16 + -1;
  }
  else {
    if (uVar14 == 0) goto LAB_02073ae0;
    uVar3 = 0;
    uVar11 = uVar14;
    if (*pbVar16 != 0) goto LAB_02073822;
LAB_02073815:
    uVar14 = 0;
  }
LAB_02073887:
  local_683[uVar14] = '\0';
  for (; ((uint)(*pbVar16) - 9 < 5 || (*pbVar16 == 0x20)); pbVar16 = pbVar16 + 1) {
  }
  if (uVar14 == 0) goto LAB_02073ae0;
  iVar4 = recovered_20022a0(local_683,&DAT_020cc3c1);
  uVar14 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
  if (iVar4 == 0) goto LAB_02073ad6;
  local_121[0] = '\0';
  if (local_683[0] == '\0') {
LAB_02073ad1:
    uVar14 = local_28;
  }
  else {
    iVar4 = 0;
    uVar14 = 0;
    cVar8 = local_683[0];
    do {
      uVar3 = uVar14 + 1;
      if (0xf0 < uVar3) break;
      if (cVar8 == '%') {
        uVar5 = recovered_2002270(local_121);
        cVar8 = *local_14;
        if (uVar5 + 1 < 0xf1 && cVar8 != '\0') {
          pcVar6 = local_30;
          do {
            local_121[uVar5] = cVar8;
            uVar5 = uVar5 + 1;
            cVar8 = *pcVar6;
            if (cVar8 == '\0') break;
            pcVar6 = pcVar6 + 1;
          } while (uVar5 < 0xf0);
        }
        local_121[uVar5] = '\0';
        uVar3 = recovered_2002270(local_121);
        uVar9 = local_18;
      }
      else {
        local_121[uVar14] = cVar8;
        local_121[uVar14 + 1] = '\0';
      }
      cVar8 = local_683[iVar4 + 1];
      iVar4 = iVar4 + 1;
      uVar14 = uVar3;
    } while (cVar8 != '\0');
    pcVar7 = local_1c;
    pcVar6 = local_2c;
    if ((local_28 & 1) == 0) {
      if (local_121[0] != '\0') {
        if (*local_1c != '\0') {
          uVar9 = recovered_2002270(local_1c);
          if (uVar9 + 1 < 0x200) {
            pcVar7[uVar9] = ' ';
            uVar9 = uVar9 + 1;
          }
          pcVar7[uVar9] = '\0';
        }
        uVar5 = recovered_2002270(pcVar7);
        if (uVar5 + 1 < 0x200 && local_121[0] != '\0') {
          pcVar6 = local_121;
          cVar8 = local_121[0];
          do {
            pcVar6 = pcVar6 + 1;
            local_1c[uVar5] = cVar8;
            uVar5 = uVar5 + 1;
            cVar8 = *pcVar6;
            if (cVar8 == '\0') break;
          } while (uVar5 < 0x1ff);
        }
        pcVar6 = local_1c + uVar5;
        goto LAB_02073ace;
      }
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
      if (local_121[0] != '\0') {
        if (*local_2c != '\0') {
          uVar9 = recovered_2002270(local_2c);
          if (uVar9 + 1 < 0x200) {
            pcVar6[uVar9] = ' ';
            uVar9 = uVar9 + 1;
          }
          pcVar6[uVar9] = '\0';
        }
        uVar5 = recovered_2002270(pcVar6);
        if (uVar5 + 1 < 0x200 && local_121[0] != '\0') {
          pcVar6 = local_121;
          cVar8 = local_121[0];
          do {
            pcVar6 = pcVar6 + 1;
            local_2c[uVar5] = cVar8;
            uVar5 = uVar5 + 1;
            cVar8 = *pcVar6;
            if (cVar8 == '\0') break;
          } while (uVar5 < 0x1ff);
          pcVar6 = local_2c + uVar5;
        }
        else {
          pcVar6 = local_2c + uVar5;
        }
LAB_02073ace:
        *pcVar6 = '\0';
        uVar9 = local_18;
        goto LAB_02073ad1;
      }
    }
  }
LAB_02073ad6:
  local_28 = uVar14;
  goto LAB_020737e1;
LAB_02073ae0:
  uVar14 = *local_24;
  uVar3 = local_24[1];
  if (uVar3 <= uVar9 || uVar14 == 0) {
switchD_02073b6b_caseD_1:
    return CONCAT31((int3)(uVar14 >> 8),1);
  }
  local_14 = param_3 + 0x5e4;
  do {
    local_883[0] = 0;
    uVar11 = 0;
    do {
      uVar15 = uVar9;
      bVar1 = *(byte *)(uVar14 + uVar15);
      if (bVar1 != 0xd) {
        if (bVar1 == 10) break;
        if (uVar11 + 1 < 0x200) {
          local_883[uVar11] = bVar1;
          uVar11 = uVar11 + 1;
        }
      }
      uVar9 = uVar15 + 1;
    } while (uVar15 + 1 < uVar3);
    uVar9 = uVar15 + 1;
    local_883[uVar11] = 0;
    uVar11 = (uint)local_883[0];
    switch((uintptr_t)(uVar11)) {
    case 0:
      goto switchD_02073b6b_caseD_0;
    default:
      goto switchD_02073b6b_caseD_1;
    case 9:
      pbVar16 = local_883 + 1;
      bVar1 = local_883[1];
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x20:
      local_18 = uVar9;
      pbVar16 = local_883;
      while ((uVar11 - 9 < 5 || (uVar11 == 0x20))) {
        pbVar13 = pbVar16 + 1;
        pbVar16 = pbVar16 + 1;
        uVar11 = (uint)*pbVar13;
      }
      bVar1 = (char)uVar11;
    }
    if ((bVar1 != '\0') && (uVar11 = *(uint *)(param_3 + 0x65e4), uVar11 < 0x30)) {
      *(uint *)(param_3 + 0x65e4) = uVar11 + 1;
      pf_varargs_20044f0__4_(local_14 + uVar11 * 0x200,0x200,&DAT_020c5119,(uint)pbVar16);
      uVar14 = *local_24;
      uVar3 = local_24[1];
    }
switchD_02073b6b_caseD_0:
    if ((uVar14 == 0) || (uVar3 <= uVar9)) goto switchD_02073b6b_caseD_1;
  } while( true );
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020cc3c1
#undef local_683
#undef local_503
#undef local_40e
#undef local_40d
#undef local_40c
#undef local_212
#undef local_121
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_e83
#undef local_c83
#undef local_a83
#undef local_883
