/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define str_020cc2b1 (*(char (*)[1])(0x20cc2b1U))
#define str_020cc35d (*(char (*)[1])(0x20cc35dU))
#define str_020cc385 (*(char (*)[1])(0x20cc385U))
#define str_020cc3ac (*(char (*)[1])(0x20cc3acU))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_3c (*(byte * *)(frame + 3332))
#define local_38 (*(undefined1 * *)(frame + 3336))
#define local_34 (*(char * *)(frame + 3340))
#define local_30 (*(uint * *)(frame + 3344))
#define local_2c (*(undefined4 *)(frame + 3348))
#define local_28 (*(undefined4 *)(frame + 3352))
#define local_24 (*(uint *)(frame + 3356))
#define local_20 (*(char * *)(frame + 3360))
#define local_19 (*(byte *)(frame + 3367))
#define local_18 (*(undefined1 * *)(frame + 3368))
#define local_11 (*(byte *)(frame + 3375))
#define abStack_23d (*(byte (*)[513])(frame + 2819))
#define local_d30 (*(byte (*)[512])(frame + 16))
#define local_b30 (*(char *)(frame + 528))
#define local_b2f (*(char (*)[2050])(frame + 529))
#define local_32d (*(char (*)[240])(frame + 2579))


undefined4
recovered_20727b0(uint *in_ECX,uint *in_ECX_00,char *in_EDX,uint param_4,char *param_5,uint param_6)

{
  unsigned char frame[3424] __attribute__((aligned(16))) = {0};

  uint *in_ECX_01;
  byte bVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  uint uVar10;
  char *in_EDX_00;
  uint uVar11;
  bool bVar12;
  char *pcVar13;
  int iVar14;

  if (in_EDX_00 == (char *)0x0) {
    return 0;
  }
  if (*in_EDX_00 == '\0') {
    return 0;
  }
  if ((uint *)0x20 < in_ECX_00) {
    if (param_4 == 0 || in_EDX == (char *)0x0) {
      return 0;
    }
    if ((*in_EDX != '\0') && (uVar2 = recovered_2002270(in_EDX), uVar2 + 1 < param_4)) {
      (in_EDX + uVar2)[0] = '\n';
      (in_EDX + uVar2)[1] = '\0';
    }
    uVar2 = recovered_2002270(in_EDX);
    if (param_4 <= uVar2 + 1) {
      return 0;
    }
    pcVar13 = in_EDX + uVar2;
    cVar9 = 'm';
    iVar4 = 0;
    do {
      pcVar13[iVar4] = cVar9;
      cVar9 = str_020cc35d[iVar4 + 1];
      iVar14 = iVar4 + 1;
      if (cVar9 == '\0') break;
      uVar11 = iVar4 + uVar2 + 2;
      iVar4 = iVar14;
    } while (uVar11 < param_4);
LAB_020729e9:
    pcVar13[iVar14] = '\0';
    return 0;
  }
  local_30 = in_ECX;
  local_20 = in_EDX_00;
  local_18 = recovered_2001650(0x65e8);
  pcVar13 = local_20;
  in_ECX_01 = local_30;
  if (local_18 == (undefined1 *)0x0) {
    if (param_4 == 0 || in_EDX == (char *)0x0) {
      return 0;
    }
    if ((*in_EDX != '\0') && (uVar2 = recovered_2002270(in_EDX), uVar2 + 1 < param_4)) {
      (in_EDX + uVar2)[0] = '\n';
      (in_EDX + uVar2)[1] = '\0';
    }
    uVar2 = recovered_2002270(in_EDX);
    if (param_4 <= uVar2 + 1) {
      return 0;
    }
    pcVar13 = in_EDX + uVar2;
    cVar9 = 'm';
    iVar4 = 0;
    do {
      pcVar13[iVar4] = cVar9;
      cVar9 = str_020cc2b1[iVar4 + 1];
      iVar14 = iVar4 + 1;
      if (cVar9 == '\0') break;
      uVar11 = iVar4 + uVar2 + 2;
      iVar4 = iVar14;
    } while (uVar11 < param_4);
    goto LAB_020729e9;
  }
  uVar3 = recovered_20732b0(local_30,local_20,local_18);
  if ((char)uVar3 == '\0') {
    if (*pcVar13 != '\0') {
      recovered_2030400(pcVar13,str_020d9e14,(char *)(abStack_23d + 1));
      uVar11 = recovered_2030680((char *)(abStack_23d + 1),&local_b30);
      pcVar13 = local_20;
      if ((char)uVar11 != '\0') {
        recovered_2001710(local_18);
        return 1;
      }
    }
    pf_varargs_202ecc0__4_(in_EDX,param_4,str_020cc385,(uint)pcVar13);
LAB_02072a0f:
    recovered_2001710(local_18);
    return 0;
  }
  iVar4 = recovered_2073c50(in_ECX_01,local_18 + 0x3e4,(int)in_ECX_00,in_EDX,param_4);
  if (iVar4 == 0) goto LAB_02072a0f;
  pbVar5 = local_18 + 0x1e4;
  iVar4 = recovered_2073c50(in_ECX_01,pbVar5,(int)in_ECX_00,in_EDX,param_4);
  if (iVar4 == 0) goto LAB_02072a0f;
  for (pbVar6 = pbVar5; ((uint)(*pbVar6) - 9 < 5 || (*pbVar6 == 0x20)); pbVar6 = pbVar6 + 1) {
  }
  local_32d[0] = '\0';
  uVar11 = (uint)*pbVar6;
  local_3c = pbVar5;
  if (uVar11 != 0) {
    if ((uVar11 == 0x22) || (uVar11 == 0x27)) {
      pbVar5 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      uVar7 = uVar11;
      uVar11 = (uint)*pbVar5;
    }
    else {
      uVar7 = 0;
    }
    if ((char)uVar11 == '\0') {
      uVar10 = 0;
    }
    else {
      pbVar6 = pbVar6 + 1;
      uVar10 = 0;
      do {
        if (uVar7 == 0) {
          if ((uVar11 - 9 < 0x18) &&
             (local_24 = uVar10, (0x80001fU >> (uVar11 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar7 == (int)(char)uVar11) goto LAB_02072a79;
        if (uVar10 + 1 < 0xf1) {
          local_32d[uVar10] = (char)uVar11;
          uVar10 = uVar10 + 1;
        }
        bVar1 = *pbVar6;
        uVar11 = (uint)bVar1;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
      pbVar6 = pbVar6 + -1;
    }
LAB_02072a79:
    local_32d[uVar10] = '\0';
    for (; ((uint)(*pbVar6) - 9 < 5 || (*pbVar6 == 0x20)); pbVar6 = pbVar6 + 1) {
    }
    if (uVar10 != 0) goto LAB_02072aac;
  }
  local_32d[0] = '\0';
LAB_02072aac:
  local_28 = 1;
  if (*(int *)(local_18 + 0x65e4) == 0) {
LAB_02073014:
    recovered_2001710(local_18);
    return local_28;
  }
  local_38 = local_18 + 0x5e4;
  local_34 = local_18 + 0xf3;
  local_19 = in_EDX == (char *)0x0 || param_4 == 0;
  local_11 = in_EDX != (char *)0x0 && param_4 != 0;
  uVar11 = 0;
LAB_02072b13:
  pcVar13 = local_38 + uVar11 * 0x200;
  local_2c = 0;
  bVar12 = false;
  do {
    switch((uintptr_t)(*pcVar13)) {
    default:
      goto switchD_02072b3c_caseD_e;
    case '-':
      local_2c = 1;
    case '\t':
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case ' ':
      pcVar13 = pcVar13 + 1;
      break;
    case '@':
      bVar12 = true;
      pcVar13 = pcVar13 + 1;
    }
  } while( true );
switchD_02072b3c_caseD_e:
  recovered_2073030((int)local_30,pcVar13,(char *)(abStack_23d + 1),0x200,local_20,local_32d,
                    (char *)local_3c,local_34);
  iVar4 = 0;
  while (((uint)(abStack_23d[iVar4 + 1]) - 9 < 5 || (abStack_23d[iVar4 + 1] == 0x20))) {
    iVar4 = iVar4 + 1;
  }
  local_24 = uVar11;
  if (iVar4 != 0) {
    uVar2 = recovered_2002270((char *)(abStack_23d + iVar4 + 1));
    recovered_2001c30(abStack_23d + 1,abStack_23d + iVar4 + 1,uVar2 + 1);
  }
  for (uVar2 = recovered_2002270((char *)(abStack_23d + 1));
      (uVar2 != 0 && (((uint)(abStack_23d[uVar2]) - 9 < 5 || (abStack_23d[uVar2] == 0x20))));
      uVar2 = uVar2 - 1) {
    abStack_23d[uVar2] = 0;
  }
  if (abStack_23d[1] == '\0') goto LAB_02072b03;
  if (bVar12 || (local_19 & 1) != 0) {
LAB_02072c9f:
    if (abStack_23d[1] != '!') goto LAB_02072dc4;
LAB_02072ca8:
    if ((4 < abStack_23d[2] - 9) && (abStack_23d[2] != 0x20)) goto LAB_02072dc4;
    pbVar5 = abStack_23d + 2;
    bVar1 = abStack_23d[2];
    while (((uint)(bVar1) - 9 < 5 || (bVar1 == 0x20))) {
      pbVar6 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar6;
    }
    pf_varargs_20044f0__4_((char *)local_d30,0x200,&DAT_020c5119,(uint)pbVar5);
    local_b30 = '\0';
    uVar11 = recovered_202ed80(local_d30,&local_b30,0x800);
    if (uVar11 != 0) {
      if (local_b30 == '\0') goto LAB_02072fca;
      if (local_11 == 0) {
        if (in_EDX == (char *)0x0) goto LAB_02072fca;
      }
      else if ((*in_EDX != '\0') && (uVar2 = recovered_2002270(in_EDX), uVar2 + 1 < param_4)) {
        (in_EDX + uVar2)[0] = '\n';
        (in_EDX + uVar2)[1] = '\0';
      }
      uVar2 = recovered_2002270(in_EDX);
      if ((uVar2 + 1 < param_4 & local_11) != 1) goto LAB_02072fca;
      if (local_b30 != '\0') {
        pcVar13 = local_b2f;
        uVar8 = uVar2;
        cVar9 = local_b30;
        do {
          in_EDX[uVar8] = cVar9;
          cVar9 = *pcVar13;
          uVar2 = uVar8 + 1;
          if (cVar9 == '\0') break;
          uVar11 = uVar8 + 2;
          pcVar13 = pcVar13 + 1;
          uVar8 = uVar2;
        } while (uVar11 < param_4);
      }
      goto LAB_02072fc3;
    }
    bVar1 = 1;
    if (local_b30 != '\0') {
      if (local_11 == 0) {
        if (in_EDX == (char *)0x0) goto LAB_02072fd2;
      }
      else if ((*in_EDX != '\0') && (uVar2 = recovered_2002270(in_EDX), uVar2 + 1 < param_4)) {
        (in_EDX + uVar2)[0] = '\n';
        (in_EDX + uVar2)[1] = '\0';
      }
      uVar2 = recovered_2002270(in_EDX);
      if ((uVar2 + 1 < param_4 & local_11) == 1) {
        if (local_b30 != '\0') {
          pcVar13 = local_b2f;
          uVar8 = uVar2;
          cVar9 = local_b30;
          do {
            in_EDX[uVar8] = cVar9;
            cVar9 = *pcVar13;
            uVar2 = uVar8 + 1;
            if (cVar9 == '\0') break;
            uVar11 = uVar8 + 2;
            pcVar13 = pcVar13 + 1;
            uVar8 = uVar2;
          } while (uVar11 < param_4);
        }
        in_EDX[uVar2] = '\0';
        bVar1 = 1;
      }
    }
  }
  else {
    if ((*in_EDX != '\0') && (uVar2 = recovered_2002270(in_EDX), uVar2 + 1 < param_4)) {
      (in_EDX + uVar2)[0] = '\n';
      (in_EDX + uVar2)[1] = '\0';
    }
    uVar2 = recovered_2002270(in_EDX);
    if (param_4 <= uVar2 + 1) goto LAB_02072c9f;
    if (abStack_23d[1] == '\0') {
      uVar11 = 0;
    }
    else {
      pbVar5 = abStack_23d + 2;
      uVar11 = (uint)CONCAT11(abStack_23d[1],abStack_23d[1]);
      uVar8 = uVar2;
      do {
        in_EDX[uVar8] = (char)(uVar11 >> 8);
        uVar11 = (uint)CONCAT11(*pbVar5,(char)uVar11);
        uVar2 = uVar8 + 1;
        if (*pbVar5 == 0) break;
        uVar7 = uVar8 + 2;
        pbVar5 = pbVar5 + 1;
        uVar8 = uVar2;
      } while (uVar7 < param_4);
    }
    in_EDX[uVar2] = '\0';
    if ((char)uVar11 == '!') goto LAB_02072ca8;
LAB_02072dc4:
    local_b30 = '\0';
    uVar11 = recovered_202ed80(abStack_23d + 1,&local_b30,0x800);
    if (uVar11 != 0) {
      if (local_b30 != '\0') {
        if (local_11 == 0) {
          if (in_EDX == (char *)0x0) goto LAB_02072b03;
        }
        else if ((*in_EDX != '\0') && (uVar2 = recovered_2002270(in_EDX), uVar2 + 1 < param_4)) {
          (in_EDX + uVar2)[0] = '\n';
          (in_EDX + uVar2)[1] = '\0';
        }
        uVar2 = recovered_2002270(in_EDX);
        if ((uVar2 + 1 < param_4 & local_11) == 1) {
          if (local_b30 != '\0') {
            pcVar13 = local_b2f;
            uVar8 = uVar2;
            cVar9 = local_b30;
            do {
              in_EDX[uVar8] = cVar9;
              cVar9 = *pcVar13;
              uVar2 = uVar8 + 1;
              if (cVar9 == '\0') break;
              uVar11 = uVar8 + 2;
              pcVar13 = pcVar13 + 1;
              uVar8 = uVar2;
            } while (uVar11 < param_4);
          }
          in_EDX[uVar2] = '\0';
        }
      }
      goto LAB_02072b03;
    }
    if (local_b30 != '\0') {
      if (local_11 == 0) {
        if (in_EDX == (char *)0x0) goto LAB_02072fca;
      }
      else if ((*in_EDX != '\0') && (uVar2 = recovered_2002270(in_EDX), uVar2 + 1 < param_4)) {
        (in_EDX + uVar2)[0] = '\n';
        (in_EDX + uVar2)[1] = '\0';
      }
      uVar2 = recovered_2002270(in_EDX);
      if ((uVar2 + 1 < param_4 & local_11) == 1) {
        if (local_b30 != '\0') {
          pcVar13 = local_b2f;
          uVar8 = uVar2;
          cVar9 = local_b30;
          do {
            in_EDX[uVar8] = cVar9;
            cVar9 = *pcVar13;
            uVar2 = uVar8 + 1;
            if (cVar9 == '\0') break;
            uVar11 = uVar8 + 2;
            pcVar13 = pcVar13 + 1;
            uVar8 = uVar2;
          } while (uVar11 < param_4);
        }
LAB_02072fc3:
        in_EDX[uVar2] = '\0';
      }
    }
LAB_02072fca:
    bVar1 = (byte)local_2c & 1;
  }
LAB_02072fd2:
  if (bVar1 == 0) {
    pf_varargs_202ecc0__4_(in_EDX,param_4,str_020cc3ac,(uint)local_20);
    local_28 = 0;
    goto LAB_02073014;
  }
LAB_02072b03:
  uVar11 = local_24 + 1;
  if (*(uint *)(local_18 + 0x65e4) <= uVar11) goto LAB_02073014;
  goto LAB_02072b13;
}
#undef DAT_020c5119
#undef str_020cc2b1
#undef str_020cc35d
#undef str_020cc385
#undef str_020cc3ac
#undef str_020d9e14
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_19
#undef local_18
#undef local_11
#undef abStack_23d
#undef local_d30
#undef local_b30
#undef local_b2f
#undef local_32d
