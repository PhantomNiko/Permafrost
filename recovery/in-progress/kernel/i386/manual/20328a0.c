/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c7928 (*(uint8_t *)(0x20c7928U))
#define DAT_020cae4a (*(uint8_t *)(0x20cae4aU))
#define DAT_021ec4ec (*(uint8_t volatile *)(0x21ec4ecU))
#define DAT_021ec4f0 (*(uint32_t volatile *)(0x21ec4f0U))
#define DAT_021ec4fc (*(uint32_t volatile *)(0x21ec4fcU))
#define DAT_021ec533 (*(uint8_t volatile *)(0x21ec533U))
#define DAT_021ec534 (*(uint8_t volatile *)(0x21ec534U))
#define DAT_021ec624 (*(uint8_t volatile *)(0x21ec624U))
#define DAT_021ecc84 (*(uint8_t volatile *)(0x21ecc84U))
#define DAT_02238eec (*(uint32_t volatile *)(0x2238eecU))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cae36 (*(char (*)[1])(0x20cae36U))
#define str_020cae4d (*(char (*)[1])(0x20cae4dU))
#define str_020cae74 (*(char (*)[1])(0x20cae74U))
#define str_020cae95 (*(char (*)[1])(0x20cae95U))
#define str_020caea7 (*(char (*)[1])(0x20caea7U))
#define str_020caead (*(char (*)[1])(0x20caeadU))
#define str_020caeb3 (*(char (*)[1])(0x20caeb3U))
#define local_5c (*(char (*)[64])(frame + 20))
#define local_1c (*(uint *)(frame + 84))
#define local_18 (*(char * *)(frame + 88))
#define local_14 (*(char * *)(frame + 92))


undefined4 recovered_20328a0(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 *vararg3;
  char cVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;

  local_18 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),1);
  local_1c = 0;
  local_14 = in_EDX;
  while( true ) {
    if (in_ECX == (byte *)0x0) {
      in_ECX = &DAT_020c5084;
    }
    else {
      for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
      }
    }
    local_5c[0] = '\0';
    bVar2 = *in_ECX;
    uVar7 = (uint)bVar2;
    if ((uVar7 != 0x22) && (uVar7 != 0x27)) break;
    bVar2 = in_ECX[1];
    uVar9 = (uint)bVar2;
    in_ECX = in_ECX + 1;
joined_r0x02032900:
    if (bVar2 == 0) {
      uVar3 = 0;
    }
    else {
      in_ECX = in_ECX + 1;
      uVar3 = 0;
      do {
        if (uVar7 == 0) {
          if ((uVar9 - 9 < 0x18) && ((0x80001fU >> (uVar9 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar7 == (int)(char)uVar9) goto LAB_02032971;
        if (uVar3 + 1 < 0x40) {
          local_5c[uVar3] = (char)uVar9;
          uVar3 = uVar3 + 1;
        }
        bVar2 = *in_ECX;
        uVar9 = (uint)bVar2;
        in_ECX = in_ECX + 1;
      } while (bVar2 != 0);
      in_ECX = in_ECX + -1;
    }
LAB_02032971:
    local_5c[uVar3] = '\0';
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    if (uVar3 == 0) goto LAB_020329f2;
    iVar4 = recovered_20022a0(local_5c,str_020c7213);
    pcVar5 = local_14;
    if (iVar4 == 0) {
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 1;
      }
      if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
        (pcVar5 + uVar6)[0] = '\n';
        (pcVar5 + uVar6)[1] = '\0';
      }
      uVar6 = recovered_2002270(pcVar5);
      if (param_3 <= uVar6 + 1) {
        return 1;
      }
      cVar8 = 'u';
      iVar4 = 0;
      goto LAB_02032bb0;
    }
    iVar4 = recovered_20022a0(local_5c,&DAT_020c7928);
    if (iVar4 == 0) {
      local_1c = 1;
    }
    else {
      iVar4 = recovered_20022a0(local_5c,&DAT_020cae4a);
      local_18 = (char *)0x0;
      if (iVar4 != 0) {
        pf_varargs_202ecc0__4_(local_14,param_3,str_020cae4d,(uint)local_5c);
        return 0;
      }
    }
  }
  if (uVar7 != 0) {
    uVar9 = uVar7;
    uVar7 = 0;
    goto joined_r0x02032900;
  }
LAB_020329f2:
  pcVar5 = local_14;
  if ((((uint)local_18 & 1) == 0) || (param_3 == 0 || local_14 == (char *)0x0)) goto LAB_02032a6e;
  if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
    (pcVar5 + uVar6)[0] = '\n';
    (pcVar5 + uVar6)[1] = '\0';
  }
  uVar6 = recovered_2002270(pcVar5);
  if (param_3 <= uVar6 + 1) goto LAB_02032a6e;
  cVar8 = 'I';
  iVar4 = 0;
  do {
    pcVar5[iVar4 + uVar6] = cVar8;
    cVar8 = str_020cae74[iVar4 + 1];
    iVar1 = iVar4 + 1;
    if (cVar8 == '\0') break;
    uVar7 = iVar4 + uVar6 + 2;
    iVar4 = iVar1;
  } while (uVar7 < param_3);
  pcVar5[iVar1 + uVar6] = '\0';
LAB_02032a6e:
  iVar4 = DAT_02238eec;
  if (iVar4 == 0) {
    return 1;
  }
  uVar7 = 0;
  puVar11 = &DAT_021ec534;
LAB_02032aa3:
  iVar4 = uVar7 * 0x1328;
  if ((&DAT_021ec4ec)[iVar4] == '\x01') {
    pcVar5 = str_020caea7;
    if ((&DAT_021ec4fc)[uVar7 * 0x4ca] != 2) {
      pcVar5 = str_020caead;
    }
    if ((&DAT_021ec624)[iVar4] == '\0') {
      vararg3 = &DAT_021ec533 + iVar4;
      puVar10 = puVar11;
      do {
        cVar8 = puVar10[-1];
        if ((cVar8 == '/') || (cVar8 == '\\')) {
          vararg3 = puVar10;
        }
        else if (cVar8 == '\0') goto code_r0x02032b05;
        puVar10 = puVar10 + 1;
      } while( true );
    }
    vararg3 = &DAT_021ec624 + iVar4;
    goto LAB_02032b08;
  }
  goto LAB_02032a90;
code_r0x02032b05:
  local_18 = pcVar5;
LAB_02032b08:
  pf_varargs_202ecc0__4__4__4__4_
            (local_14,param_3,str_020cae95,(&DAT_021ec4f0)[uVar7 * 0x4ca],1,(uint)pcVar5,
             (uint)vararg3);
  if ((local_1c & 1) != 0) {
    pf_varargs_202ecc0__4_(local_14,param_3,str_020caeb3,(uint)(&DAT_021ecc84 + iVar4));
  }
LAB_02032a90:
  uVar7 = uVar7 + 1;
  puVar11 = puVar11 + 0x1328;
  uVar9 = DAT_02238eec;
  if (uVar9 <= uVar7) {
    return 1;
  }
  goto LAB_02032aa3;
  while (uVar7 = iVar4 + uVar6 + 2, iVar4 = iVar1, uVar7 < param_3) {
LAB_02032bb0:
    pcVar5[iVar4 + uVar6] = cVar8;
    cVar8 = str_020cae36[iVar4 + 1];
    iVar1 = iVar4 + 1;
    if (cVar8 == '\0') break;
  }
  pcVar5[iVar1 + uVar6] = '\0';
  return 1;
}
#undef DAT_020c5084
#undef DAT_020c7928
#undef DAT_020cae4a
#undef DAT_021ec4ec
#undef DAT_021ec4f0
#undef DAT_021ec4fc
#undef DAT_021ec533
#undef DAT_021ec534
#undef DAT_021ec624
#undef DAT_021ecc84
#undef DAT_02238eec
#undef str_020c7213
#undef str_020cae36
#undef str_020cae4d
#undef str_020cae74
#undef str_020cae95
#undef str_020caea7
#undef str_020caead
#undef str_020caeb3
#undef local_5c
#undef local_1c
#undef local_18
#undef local_14
