/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c722d (*(uint8_t *)(0x20c722dU))
#define DAT_020c7230 (*(uint8_t *)(0x20c7230U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020c721a (*(char (*)[1])(0x20c721aU))
#define str_020c7233 (*(char (*)[1])(0x20c7233U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_54 (*(char (*)[64])(frame + 28))
#define local_14 (*(char * *)(frame + 92))


undefined4 recovered_20308e0(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;

  local_14 = in_EDX;
  while( true ) {
    if (in_ECX == (byte *)0x0) {
      in_ECX = &DAT_020c5084;
    }
    else {
      for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
      }
    }
    local_54[0] = '\0';
    bVar2 = *in_ECX;
    uVar9 = (uint)bVar2;
    if ((uVar9 != 0x22) && (uVar9 != 0x27)) break;
    bVar2 = in_ECX[1];
    uVar10 = (uint)bVar2;
    in_ECX = in_ECX + 1;
joined_r0x02030940:
    if (bVar2 == 0) {
      uVar4 = 0;
    }
    else {
      in_ECX = in_ECX + 1;
      uVar4 = 0;
      do {
        if (uVar9 == 0) {
          if ((uVar10 - 9 < 0x18) && ((0x80001fU >> (uVar10 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar9 == (int)(char)uVar10) goto LAB_020309b1;
        if (uVar4 + 1 < 0x40) {
          local_54[uVar4] = (char)uVar10;
          uVar4 = uVar4 + 1;
        }
        bVar2 = *in_ECX;
        uVar10 = (uint)bVar2;
        in_ECX = in_ECX + 1;
      } while (bVar2 != 0);
      in_ECX = in_ECX + -1;
    }
LAB_020309b1:
    local_54[uVar4] = '\0';
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    if (uVar4 == 0) goto LAB_02030a42;
    iVar5 = recovered_20022a0(local_54,str_020c7213);
    pcVar3 = local_14;
    if (iVar5 == 0) {
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 1;
      }
      if ((*local_14 != '\0') && (uVar7 = recovered_2002270(local_14), uVar7 + 1 < param_3)) {
        (pcVar3 + uVar7)[0] = '\n';
        (pcVar3 + uVar7)[1] = '\0';
      }
      uVar7 = recovered_2002270(pcVar3);
      if (param_3 <= uVar7 + 1) {
        return 1;
      }
      cVar8 = 'u';
      iVar5 = 0;
      goto LAB_02030b20;
    }
    iVar5 = recovered_20022a0(local_54,&DAT_020c722d);
    if ((iVar5 != 0) && (iVar5 = recovered_20022a0(local_54,&DAT_020c7230), iVar5 != 0)) {
      pf_varargs_202ecc0__4_(local_14,param_3,str_020c7233,(uint)local_54);
      return 0;
    }
  }
  if (uVar9 != 0) {
    uVar10 = uVar9;
    uVar9 = 0;
    goto joined_r0x02030940;
  }
LAB_02030a42:
  pcVar3 = local_14;
  if (param_3 == 0 || local_14 == (char *)0x0) {
    return 1;
  }
  if ((*local_14 != '\0') && (uVar7 = recovered_2002270(local_14), uVar7 + 1 < param_3)) {
    (pcVar3 + uVar7)[0] = '\n';
    (pcVar3 + uVar7)[1] = '\0';
  }
  uVar7 = recovered_2002270(pcVar3);
  if (param_3 <= uVar7 + 1) {
    return 1;
  }
  cVar8 = str_020d9e14[0];
  if (cVar8 != '\0') {
    pcVar11 = str_020d9e14;
    uVar6 = uVar7;
    do {
      pcVar11 = pcVar11 + 1;
      pcVar3[uVar6] = cVar8;
      cVar8 = *pcVar11;
      uVar7 = uVar6 + 1;
      if (cVar8 == '\0') break;
      uVar9 = uVar6 + 2;
      uVar6 = uVar7;
    } while (uVar9 < param_3);
  }
  pcVar3[uVar7] = '\0';
  return 1;
  while (uVar9 = iVar5 + uVar7 + 2, iVar5 = iVar1, uVar9 < param_3) {
LAB_02030b20:
    pcVar3[iVar5 + uVar7] = cVar8;
    cVar8 = str_020c721a[iVar5 + 1];
    iVar1 = iVar5 + 1;
    if (cVar8 == '\0') break;
  }
  pcVar3[iVar1 + uVar7] = '\0';
  return 1;
}
#undef DAT_020c5084
#undef DAT_020c722d
#undef DAT_020c7230
#undef str_020c7213
#undef str_020c721a
#undef str_020c7233
#undef str_020d9e14
#undef local_54
#undef local_14
