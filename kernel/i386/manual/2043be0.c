#include "functions.h"



#undef DAT_020c5084
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#undef DAT_020c5119
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#undef DAT_020c5431
#define DAT_020c5431 (*(uint8_t *)(0x20c5431U))
#undef DAT_020d9d48
#define DAT_020d9d48 (*(uint32_t volatile *)(0x20d9d48U))
#undef DAT_020d9d4c
#define DAT_020d9d4c (*(uint32_t volatile *)(0x20d9d4cU))
#undef DAT_020d9d65
#define DAT_020d9d65 (*(uint8_t volatile *)(0x20d9d65U))
#undef DAT_0214b320
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#undef DAT_0214b364
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#undef DAT_0215bc84
#define DAT_0215bc84 (*(uint32_t volatile *)(0x215bc84U))
#undef PTR_DAT_020de160
#define PTR_DAT_020de160 (*(void * volatile *)(0x20de160U))
#undef str_020c571f
#define str_020c571f (*(char (*)[1])(0x20c571fU))
#undef str_020ccdbe
#define str_020ccdbe (*(char (*)[1])(0x20ccdbeU))
#undef str_020d6aba
#define str_020d6aba (*(char (*)[1])(0x20d6abaU))
#undef str_020d6ac6
#define str_020d6ac6 (*(char (*)[1])(0x20d6ac6U))
#undef str_020d6afa
#define str_020d6afa (*(char (*)[1])(0x20d6afaU))
#undef str_020d6b05
#define str_020d6b05 (*(char (*)[1])(0x20d6b05U))
#undef str_020d6b0e
#define str_020d6b0e (*(char (*)[1])(0x20d6b0eU))
#undef str_020d6b1d
#define str_020d6b1d (*(char (*)[1])(0x20d6b1dU))
#undef str_020d6b30
#define str_020d6b30 (*(char (*)[1])(0x20d6b30U))
#undef str_020d6b38
#define str_020d6b38 (*(char (*)[1])(0x20d6b38U))
#undef str_020d6b46
#define str_020d6b46 (*(char (*)[1])(0x20d6b46U))
#undef str_020d6b4e
#define str_020d6b4e (*(char (*)[1])(0x20d6b4eU))
#undef str_020d6b54
#define str_020d6b54 (*(char (*)[1])(0x20d6b54U))
#define local_54 (*(byte (*)[64])(frame + 540))
#define local_14 (*(uint *)(frame + 604))
#define abStack_255 (*(byte (*)[513])(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2043be0
 */

uint recovered_2043be0(char *param_1,char *param_2,uint param_3)

{
  unsigned char frame[656] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  uchar uVar5;
  char *vararg0;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined3 extraout_var = 0;
  uchar in_CL;
  uchar extraout_CL;
  uchar extraout_CL_00;
  uchar in_CL_00;
  uchar extraout_CL_01;
  uint uVar10;
  uint uVar11;
  uint extraout_EDX = 0;
  uint uVar12;
  uint extraout_EDX_00 = 0;
  undefined1 uVar13;

  recovered_2026f10();
  PTR_DAT_020de160 = str_020d6aba;
  local_14 = DAT_0215bc84;
  if (param_3 != 0 && param_2 != (char *)0x0) {
    *param_2 = '\0';
  }
  vararg0 = &DAT_020c5084;
  if (param_1 != (char *)0x0) {
    vararg0 = param_1;
  }
  pbVar9 = abStack_255 + 1;
  pf_varargs_20044f0__4_((char *)pbVar9,0x200,&DAT_020c5119,(uint)vararg0);
  iVar6 = 0;
  while ((abStack_255[iVar6 + 1] - 9 < 5 || (abStack_255[iVar6 + 1] == 0x20))) {
    iVar6 = iVar6 + 1;
  }
  if (iVar6 != 0) {
    uVar7 = recovered_2002270((char *)(abStack_255 + iVar6 + 1));
    recovered_2001c30(pbVar9,abStack_255 + iVar6 + 1,uVar7 + 1);
  }
  for (uVar7 = recovered_2002270((char *)pbVar9);
      (uVar7 != 0 && ((abStack_255[uVar7] - 9 < 5 || (abStack_255[uVar7] == 0x20))));
      uVar7 = uVar7 - 1) {
    abStack_255[uVar7] = 0;
  }
  uVar1 = DAT_020d9d4c;
  uVar1 = DAT_020d9d48;
  uVar13 = DAT_020d9d65;
  recovered_2047db0((void*)pbVar9);
  recovered_2030300(str_020d6ac6,(char)pbVar9);
  if (abStack_255[1] == '\0') {
    PTR_DAT_020de160 = str_020d6afa;
    uVar8 = 1;
    goto LAB_02043ff3;
  }
  uVar8 = recovered_2047930((void*)pbVar9);
  if ((char)uVar8 != '\0') {
    PTR_DAT_020de160 = str_020ccdbe;
    recovered_2047ac0();
    recovered_20bd1a0(param_2,param_3,local_14,'\x01');
    recovered_2027720(in_CL);
    uVar8 = 1;
    goto LAB_02043ff3;
  }
  uVar8 = recovered_2047db0((void*)pbVar9);
  iVar6 = DAT_020d9d4c;
  if (iVar6 == 1) {
    iVar6 = DAT_020d9d48;
    bVar4 = DAT_020d9d65;
    if (((bVar4 | (byte)uVar8) & 1) != 0 || iVar6 == 0) goto LAB_02043db2;
    PTR_DAT_020de160 = str_020d6b05;
LAB_02043e8a:
    uVar8 = recovered_2048050(abStack_255+1,param_2,param_3);
    uVar8 = (uint)(uVar8 != 0);
    uVar5 = extraout_CL;
  }
  else {
LAB_02043db2:
    bVar3 = recovered_2048120(abStack_255+1);
    if (bVar3) {
      PTR_DAT_020de160 = str_020d6b0e;
      goto LAB_02043e8a;
    }
    iVar6 = DAT_020d9d48;
    uVar11 = extraout_EDX;
    if ((iVar6 != 0) && (bVar4 = DAT_020d9d65, (bVar4 & 1) == 0)) {
      pbVar9 = abStack_255 + 2;
      while( true ) {
        bVar4 = pbVar9[-1];
        uVar13 = (undefined1)uVar8;
        uVar8 = (uint)CONCAT11(bVar4,uVar13);
        uVar10 = (uint)bVar4;
        uVar11 = uVar10 - 9;
        if ((4 < uVar11) && (uVar10 != 0x20)) break;
        pbVar9 = pbVar9 + 1;
      }
      local_54[0] = 0;
      if (bVar4 != 0) {
        if ((uVar10 == 0x22) || (uVar10 == 0x27)) {
          uVar8 = (uint)CONCAT11(*pbVar9,uVar13);
          if (*pbVar9 != 0) goto LAB_02043e38;
LAB_02043eb8:
          uVar12 = 0;
        }
        else {
          pbVar9 = pbVar9 + -1;
          uVar10 = 0;
          if (bVar4 == 0) goto LAB_02043eb8;
LAB_02043e38:
          pbVar9 = pbVar9 + 1;
          uVar12 = 0;
          do {
            bVar4 = (byte)(uVar8 >> 8);
            if (uVar10 == 0) {
              if ((bVar4 - 9 < 0x18) && ((0x80001fU >> (bVar4 - 9 & 0x1f) & 1) != 0)) break;
            }
            else if (uVar10 == (int)(char)bVar4) goto LAB_02043eba;
            if (uVar12 + 1 < 0x40) {
              local_54[uVar12] = bVar4;
              uVar12 = uVar12 + 1;
            }
            bVar4 = *pbVar9;
            uVar8 = (uint)CONCAT11(bVar4,(char)uVar8);
            pbVar9 = pbVar9 + 1;
          } while (bVar4 != 0);
          pbVar9 = pbVar9 + -1;
        }
LAB_02043eba:
        local_54[uVar12] = 0;
        for (; (*pbVar9 - 9 < 5 || (*pbVar9 == 0x20)); pbVar9 = pbVar9 + 1) {
        }
        uVar11 = 0;
        if (uVar12 != 0) {
          iVar6 = recovered_20022a0((char *)local_54,&DAT_020c5431);
          uVar11 = extraout_EDX_00;
          if (iVar6 == 0) {
            PTR_DAT_020de160 = str_020d6b1d;
            goto LAB_02043e8a;
          }
        }
      }
    }
    if ((char)uVar8 == '\0') {
      uVar8 = recovered_2048850((int)(abStack_255 + 1),uVar11);
      if ((char)uVar8 == '\0') {
        uVar5 = recovered_2048b80((char *)(abStack_255 + 1));
        if (uVar5 == '\0') {
          local_54[0] = 0;
          PTR_DAT_020de160 = str_020d6b4e;
          uVar8 = recovered_2048290((uint)(abStack_255 + 1),local_54);
          if (local_54[0] == 0) {
            uVar1 = DAT_0215bc84;
            PTR_DAT_020de160 = str_020d6b54;
            recovered_2049ef0((char *)(abStack_255 + 1));
            bVar4 = recovered_20bd2e0(local_14);
            uVar8 = (uint)(bVar4 ^ 1);
          }
        }
        else {
          PTR_DAT_020de160 = str_020d6b46;
          uVar8 = recovered_20492b0((char *)(abStack_255 + 1));
          uVar8 = (uint)(uVar8 == 0);
        }
      }
      else {
        PTR_DAT_020de160 = str_020d6b38;
        recovered_2027720(in_CL_00);
        uVar8 = 1;
      }
      recovered_20bd1a0(param_2,param_3,local_14,(char)uVar8);
      uVar5 = extraout_CL_01;
    }
    else {
      local_54[0] = 0;
      PTR_DAT_020de160 = str_020d6b30;
      uVar8 = recovered_2048290((uint)(abStack_255 + 1),local_54);
      uVar5 = extraout_CL_00;
    }
  }
  recovered_2027720(uVar5);
  uVar8 = uVar8 & 0xff;
LAB_02043ff3:
  uVar5 = recovered_2006ec0();
  uVar11 = 0;
  if (CONCAT31(extraout_var,uVar5) < 0x20) {
    uVar11 = CONCAT31(extraout_var,uVar5);
  }
  (&DAT_0214b364)[uVar11 * 0x12] = uVar11;
  if (((param_1 != (char *)0x0) && ((&DAT_0214b320)[uVar11 * 0x12] != 0)) && (*param_1 != '\0')) {
    puVar2 = PTR_DAT_020de160;
    if (param_2 != (char *)0x0) {
      recovered_2002270(param_2);
    }
    recovered_2030300(str_020c571f,(char)param_1);
  }
  return uVar8;
}
