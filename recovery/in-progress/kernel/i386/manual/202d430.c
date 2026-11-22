/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c531e (*(uint8_t *)(0x20c531eU))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d48 (*(uint32_t volatile *)(0x20d9d48U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_020d9d60 (*(uint32_t volatile *)(0x20d9d60U))
#define DAT_020d9db4 (*(uint8_t volatile *)(0x20d9db4U))
#define DAT_021468fc (*(uint8_t volatile *)(0x21468fcU))
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#define DAT_021e025c (*(uint8_t volatile *)(0x21e025cU))
#define DAT_021e0260 (*(uint32_t volatile *)(0x21e0260U))
#define DAT_021e0264 (*(uint32_t volatile *)(0x21e0264U))
#define DAT_021e0268 (*(uint32_t volatile *)(0x21e0268U))
#define DAT_021e026c (*(uint8_t volatile *)(0x21e026cU))
#define DAT_021e035d (*(uint8_t volatile *)(0x21e035dU))
#define DAT_021e044e (*(uint8_t volatile *)(0x21e044eU))
#define DAT_021e046e (*(uint8_t volatile *)(0x21e046eU))
#define DAT_021e066e (*(uint8_t volatile *)(0x21e066eU))
#define str_020c69f1 (*(char (*)[1])(0x20c69f1U))
#define str_020c6aa1 (*(char (*)[1])(0x20c6aa1U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_14 (*(int *)(frame + 28))


undefined4 recovered_202d430(undefined4 *param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uchar uVar4;
  undefined3 extraout_var = 0;
  undefined *vararg0;
  undefined3 extraout_var_00 = 0;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;

  recovered_2026f10();
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  recovered_2001e00(param_1,0,0x620);
  *param_1 = 1;
  param_1[1] = 0x620;
  uVar4 = recovered_2006ec0();
  uVar6 = 0;
  if (CONCAT31(extraout_var,uVar4) < 0x20) {
    uVar6 = CONCAT31(extraout_var,uVar4);
  }
  (&DAT_0214b364)[uVar6 * 0x12] = uVar6;
  pcVar7 = (char *)(&DAT_0214b320)[uVar6 * 0x12];
  if (pcVar7 != (char *)0x0) {
    if (pcVar7[4] == '\0') {
      iVar11 = 0x20;
      pcVar8 = &DAT_021468fc;
      do {
        if (((*pcVar8 == '\x01') && (pcVar8[4] == '\x01')) &&
           (*(int *)(pcVar8 + 0x74) == *(int *)(pcVar7 + 0x74))) {
          pcVar7 = pcVar8;
          break;
        }
        pcVar8 = pcVar8 + 0xb8;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = *(int *)(pcVar7 + 0x10);
    if (iVar11 != 0) {
      iVar14 = 0;
      do {
        if (((&DAT_021e025c)[iVar14] == '\x01') && (*(int *)((int)&DAT_021e0260 + iVar14) == iVar11)
           ) {
          param_1[2] = 2;
          param_1[3] = iVar11;
          local_14 = 0;
          pbVar9 = &DAT_021e046e + iVar14;
          goto switchD_0202d505_caseD_20;
        }
        iVar14 = iVar14 + 0x614;
      } while (iVar14 != 0xc280);
      iVar14 = DAT_020d9d48;
      if (iVar11 == iVar14) {
        param_1[2] = 1;
        param_1[3] = iVar11;
        param_1[4] = 1;
        uVar1 = DAT_020d9d5c;
        param_1[5] = uVar1;
        uVar1 = DAT_020d9d60;
        param_1[6] = uVar1;
        pf_varargs_20044f0__4_((char *)(param_1 + 7),0xf1,&DAT_020c5119,0x20c532e);
        pf_varargs_20044f0__4_((char *)((int)param_1 + 0x10d),0xf1,&DAT_020c5119,0x20d9e14);
        pf_varargs_20044f0__4_((char *)((int)param_1 + 0x1fe),0x20,&DAT_020c5119,0x20d9db4);
        pf_varargs_20044f0__4_((char *)((int)param_1 + 0x21e),0x200,&DAT_020c5119,0x20c5353);
        cVar2 = DAT_020d9db4;
        vararg0 = &DAT_020c531e;
        if (cVar2 != '\0') {
          vararg0 = &DAT_020d9db4;
        }
        cVar2 = str_020d9e14[0];
        pcVar7 = &DAT_020c5359;
        if (cVar2 != '\0') {
          pcVar7 = str_020d9e14;
        }
        goto LAB_0202d81f;
      }
    }
  }
  uVar4 = recovered_2006ec0();
  uVar6 = 0;
  if (CONCAT31(extraout_var_00,uVar4) < 0x20) {
    uVar6 = CONCAT31(extraout_var_00,uVar4);
  }
  (&DAT_0214b364)[uVar6 * 0x12] = uVar6;
  iVar11 = (&DAT_0214b320)[uVar6 * 0x12];
  if (iVar11 == 0) {
    return 0;
  }
  iVar14 = *(int *)(iVar11 + 0x74);
  if (iVar14 == 0) {
    return 0;
  }
  if (*(int *)(iVar14 + 0x38) < 0) {
    return 0;
  }
  iVar5 = DAT_020d9d5c;
  if (iVar5 < 0) {
    return 0;
  }
  if (iVar5 != *(int *)(iVar14 + 0x38)) {
    return 0;
  }
  iVar5 = recovered_2019320((char *)(iVar14 + 0x8c),str_020c6aa1,7);
  if (iVar5 != 0) {
    return 0;
  }
  param_1[2] = 2;
  param_1[3] = *(undefined4 *)(iVar11 + 0x10);
  param_1[4] = 1;
  param_1[5] = *(undefined4 *)(iVar14 + 0x38);
  uVar1 = DAT_020d9d60;
  param_1[6] = uVar1;
  pf_varargs_20044f0__4_((char *)(param_1 + 7),0xf1,&DAT_020c5119,iVar14 + 0x92);
  cVar2 = str_020d9e14[0];
  pcVar7 = &DAT_020c5359;
  pcVar8 = &DAT_020c5359;
  if (cVar2 != '\0') {
    pcVar8 = str_020d9e14;
  }
  pf_varargs_20044f0__4_((char *)((int)param_1 + 0x10d),0xf1,&DAT_020c5119,(uint)pcVar8);
  pf_varargs_20044f0__4_((char *)((int)param_1 + 0x1fe),0x20,&DAT_020c5119,0x20d9db4);
  pf_varargs_20044f0__4_((char *)((int)param_1 + 0x21e),0x200,&DAT_020c5119,(uint)(param_1 + 7));
  cVar2 = DAT_020d9db4;
  vararg0 = &DAT_020c531e;
  if (cVar2 != '\0') {
    vararg0 = &DAT_020d9db4;
  }
  cVar2 = str_020d9e14[0];
  if (cVar2 != '\0') {
    pcVar7 = str_020d9e14;
  }
LAB_0202d81f:
  pf_varargs_20044f0__4__4__4_
            ((char *)((int)param_1 + 0x41e),0x200,str_020c69f1,(uint)vararg0,(uint)vararg0,
             (uint)pcVar7);
  return 1;
switchD_0202d505_caseD_20:
  do {
    pbVar10 = pbVar9;
    pbVar9 = pbVar10 + 1;
    bVar12 = *pbVar10;
    uVar6 = (uint)bVar12;
  } while (uVar6 - 9 < 5);
  switch((uintptr_t)(uVar6)) {
  case 0:
    goto switchD_0202d505_caseD_0;
  default:
    uVar6 = 0;
    break;
  case 0x20:
    goto switchD_0202d505_caseD_20;
  case 0x22:
  case 0x27:
    bVar12 = *pbVar9;
    pbVar10 = pbVar9;
  }
  if (bVar12 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    pbVar9 = pbVar10;
    do {
      pbVar10 = pbVar9 + 1;
      if (uVar6 == 0) {
        if ((bVar12 - 9 < 0x18) && ((0x80001fU >> (bVar12 - 9 & 0x1f) & 1) != 0)) {
          pbVar10 = pbVar9;
          break;
        }
      }
      else if (uVar6 == (int)(char)bVar12) break;
      uVar3 = uVar13 + 1;
      if (0xf0 < uVar13 + 1) {
        uVar3 = uVar13;
      }
      uVar13 = uVar3;
      bVar12 = *pbVar10;
      pbVar9 = pbVar10;
    } while (bVar12 != 0);
  }
  for (; ((uint)(*pbVar10) - 9 < 5 || (*pbVar10 == 0x20)); pbVar10 = pbVar10 + 1) {
  }
  if (uVar13 == 0) goto switchD_0202d505_caseD_0;
  local_14 = local_14 + 1;
  pbVar9 = pbVar10;
  goto switchD_0202d505_caseD_20;
switchD_0202d505_caseD_0:
  param_1[4] = local_14;
  param_1[5] = *(undefined4 *)((int)&DAT_021e0264 + iVar14);
  param_1[6] = *(undefined4 *)((int)&DAT_021e0268 + iVar14);
  pf_varargs_20044f0__4_((char *)(param_1 + 7),0xf1,&DAT_020c5119,(uint)(&DAT_021e026c + iVar14));
  pf_varargs_20044f0__4_
            ((char *)((int)param_1 + 0x10d),0xf1,&DAT_020c5119,(uint)(&DAT_021e035d + iVar14));
  pf_varargs_20044f0__4_
            ((char *)((int)param_1 + 0x1fe),0x20,&DAT_020c5119,(uint)(&DAT_021e044e + iVar14));
  pf_varargs_20044f0__4_
            ((char *)((int)param_1 + 0x21e),0x200,&DAT_020c5119,(uint)(&DAT_021e046e + iVar14));
  pf_varargs_20044f0__4_
            ((char *)((int)param_1 + 0x41e),0x200,&DAT_020c5119,(uint)(&DAT_021e066e + iVar14));
  return 1;
}
#undef DAT_020c5119
#undef DAT_020c531e
#undef DAT_020c5359
#undef DAT_020d9d48
#undef DAT_020d9d5c
#undef DAT_020d9d60
#undef DAT_020d9db4
#undef DAT_021468fc
#undef DAT_0214b320
#undef DAT_0214b364
#undef DAT_021e025c
#undef DAT_021e0260
#undef DAT_021e0264
#undef DAT_021e0268
#undef DAT_021e026c
#undef DAT_021e035d
#undef DAT_021e044e
#undef DAT_021e046e
#undef DAT_021e066e
#undef str_020c69f1
#undef str_020c6aa1
#undef str_020d9e14
#undef local_14
