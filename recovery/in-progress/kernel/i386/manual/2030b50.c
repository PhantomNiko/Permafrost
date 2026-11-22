/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c72a5 (*(uint8_t *)(0x20c72a5U))
#define DAT_020c72ab (*(uint8_t *)(0x20c72abU))
#define DAT_020d9db4 (*(uint8_t volatile *)(0x20d9db4U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020c7252 (*(char (*)[1])(0x20c7252U))
#define str_020c726c (*(char (*)[1])(0x20c726cU))
#define str_020c7282 (*(char (*)[1])(0x20c7282U))
#define str_020c729b (*(char (*)[1])(0x20c729bU))
#define str_020c72b0 (*(char (*)[1])(0x20c72b0U))
#define local_b4 (*(char *)(frame + 44))
#define local_b3 (*(char (*)[79])(frame + 45))
#define local_64 (*(char (*)[64])(frame + 124))
#define local_24 (*(uint *)(frame + 188))
#define local_20 (*(uint *)(frame + 192))
#define local_1c (*(uint *)(frame + 196))
#define local_18 (*(uint *)(frame + 200))
#define local_14 (*(char * *)(frame + 204))


undefined4 recovered_2030b50(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  ulong uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;

  bVar10 = false;
  local_1c = 0;
  local_20 = 0;
  uVar9 = 0;
  local_14 = in_EDX;
  while( true ) {
    if (in_ECX == (byte *)0x0) {
      in_ECX = &DAT_020c5084;
    }
    else {
      for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
      }
    }
    local_64[0] = '\0';
    bVar1 = *in_ECX;
    uVar7 = (uint)bVar1;
    local_18 = uVar9;
    if ((uVar7 != 0x22) && (uVar7 != 0x27)) break;
    bVar1 = in_ECX[1];
    uVar9 = (uint)bVar1;
    in_ECX = in_ECX + 1;
joined_r0x02030bb3:
    if (bVar1 == 0) {
      uVar2 = 0;
    }
    else {
      in_ECX = in_ECX + 1;
      uVar2 = 0;
      do {
        if (uVar7 == 0) {
          if ((uVar9 - 9 < 0x18) && (local_24 = uVar2, (0x80001fU >> (uVar9 - 9 & 0x1f) & 1) != 0))
          break;
        }
        else if (uVar7 == (int)(char)uVar9) goto LAB_02030c21;
        if (uVar2 + 1 < 0x40) {
          local_64[uVar2] = (char)uVar9;
          uVar2 = uVar2 + 1;
        }
        bVar1 = *in_ECX;
        uVar9 = (uint)bVar1;
        in_ECX = in_ECX + 1;
      } while (bVar1 != 0);
      in_ECX = in_ECX + -1;
    }
LAB_02030c21:
    local_64[uVar2] = '\0';
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
    if (uVar2 == 0) goto LAB_02030cec;
    iVar3 = recovered_20022a0(local_64,str_020c7213);
    pcVar5 = local_14;
    if (iVar3 == 0) {
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
      pcVar5 = pcVar5 + uVar6;
      cVar8 = 'u';
      iVar3 = 0;
      goto LAB_02030e00;
    }
    if ((local_64[0] != '-') ||
       (pbVar4 = (byte *)(local_64 + 1), uVar9 = local_18, local_64[1] == '\0')) {
      pcVar5 = local_64;
      pcVar13 = str_020c726c;
      goto LAB_02030cd1;
    }
    while( true ) {
      while( true ) {
        for (; bVar1 = *pbVar4, 0x6d < bVar1; pbVar4 = pbVar4 + 1) {
          if (bVar1 != 0x6e) {
            bVar10 = true;
            if (bVar1 == 0x75) goto LAB_02030cac;
            goto LAB_02030cc8;
          }
          uVar9 = CONCAT31((int3)(uVar9 >> 8),1);
        }
        if (bVar1 != 0x47) break;
        local_20 = 1;
        pbVar4 = pbVar4 + 1;
      }
      if (bVar1 != 0x67) break;
      local_1c = 1;
LAB_02030cac:
      pbVar4 = pbVar4 + 1;
    }
    if (bVar1 != 0) {
LAB_02030cc8:
      pcVar5 = (char *)(int)(char)bVar1;
      pcVar13 = str_020c7282;
LAB_02030cd1:
      pf_varargs_202ecc0__4_(local_14,param_3,pcVar13,(uint)pcVar5);
      return 0;
    }
  }
  if (uVar7 != 0) {
    uVar9 = uVar7;
    uVar7 = 0;
    goto joined_r0x02030bb3;
  }
LAB_02030cec:
  pcVar5 = local_14;
  if ((local_20 & 1) == 0) {
    if ((local_1c & 1) == 0) {
      if (!bVar10) {
        pf_varargs_202ecc0__4__4__4_(local_14,param_3,str_020c72b0,0x20d9db4,0x20d9db4,0x20d9db4);
        return 1;
      }
      pcVar13 = &DAT_020d9db4;
      if ((local_18 & 1) == 0) {
        pcVar13 = &DAT_020c72ab;
      }
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 1;
      }
      if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
        (pcVar5 + uVar6)[0] = '\n';
        (pcVar5 + uVar6)[1] = '\0';
      }
      uVar6 = recovered_2002270(pcVar5);
      if (uVar6 + 1 < param_3) {
        cVar8 = *pcVar13;
        if (cVar8 != '\0') {
          do {
            pcVar13 = pcVar13 + 1;
            pcVar5[uVar6] = cVar8;
            cVar8 = *pcVar13;
            uVar12 = uVar6 + 1;
            if (cVar8 == '\0') break;
            uVar9 = uVar6 + 2;
            uVar6 = uVar12;
          } while (uVar9 < param_3);
          goto LAB_02030fe0;
        }
        goto LAB_02031018;
      }
    }
    else {
      pcVar13 = &DAT_020d9db4;
      if ((local_18 & 1) == 0) {
        pcVar13 = &DAT_020c72ab;
      }
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 1;
      }
      if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
        (pcVar5 + uVar6)[0] = '\n';
        (pcVar5 + uVar6)[1] = '\0';
      }
      uVar6 = recovered_2002270(pcVar5);
      if (uVar6 + 1 < param_3) {
        cVar8 = *pcVar13;
        if (cVar8 != '\0') {
          do {
            pcVar13 = pcVar13 + 1;
            pcVar5[uVar6] = cVar8;
            cVar8 = *pcVar13;
            uVar12 = uVar6 + 1;
            if (cVar8 == '\0') break;
            uVar9 = uVar6 + 2;
            uVar6 = uVar12;
          } while (uVar9 < param_3);
LAB_02030fe0:
          pcVar5[uVar12] = '\0';
          return 1;
        }
LAB_02031018:
        pcVar5[uVar6] = '\0';
        return 1;
      }
    }
  }
  else if ((local_18 & 1) == 0) {
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 1;
    }
    if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
      (pcVar5 + uVar6)[0] = '\n';
      (pcVar5 + uVar6)[1] = '\0';
    }
    uVar6 = recovered_2002270(pcVar5);
    if (uVar6 + 1 < param_3) {
      pcVar5 = pcVar5 + uVar6;
      cVar8 = '1';
      iVar3 = 0;
      do {
        pcVar5[iVar3] = cVar8;
        cVar8 = (&DAT_020c72a5)[iVar3];
        iVar11 = iVar3 + 1;
        if (cVar8 == '\0') break;
        uVar9 = iVar3 + uVar6 + 2;
        iVar3 = iVar11;
      } while (uVar9 < param_3);
      goto LAB_02030f4c;
    }
  }
  else {
    pf_varargs_20044f0__4_(&local_b4,0x50,str_020c729b,0x20d9db4);
    pcVar5 = local_14;
    if (param_3 == 0 || local_14 == (char *)0x0) {
      return 1;
    }
    if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
      (pcVar5 + uVar6)[0] = '\n';
      (pcVar5 + uVar6)[1] = '\0';
    }
    uVar6 = recovered_2002270(pcVar5);
    if (uVar6 + 1 < param_3) {
      if (local_b4 == '\0') {
        pcVar5[uVar6] = '\0';
      }
      else {
        pcVar13 = local_b3;
        do {
          pcVar5[uVar6] = local_b4;
          local_b4 = *pcVar13;
          uVar12 = uVar6 + 1;
          if (local_b4 == '\0') break;
          uVar9 = uVar6 + 2;
          pcVar13 = pcVar13 + 1;
          uVar6 = uVar12;
        } while (uVar9 < param_3);
        pcVar5[uVar12] = '\0';
      }
    }
  }
  return 1;
  while (uVar9 = iVar3 + uVar6 + 2, iVar3 = iVar11, uVar9 < param_3) {
LAB_02030e00:
    pcVar5[iVar3] = cVar8;
    cVar8 = str_020c7252[iVar3 + 1];
    iVar11 = iVar3 + 1;
    if (cVar8 == '\0') break;
  }
LAB_02030f4c:
  pcVar5[iVar11] = '\0';
  return 1;
}
#undef DAT_020c5084
#undef DAT_020c72a5
#undef DAT_020c72ab
#undef DAT_020d9db4
#undef str_020c7213
#undef str_020c7252
#undef str_020c726c
#undef str_020c7282
#undef str_020c729b
#undef str_020c72b0
#undef local_b4
#undef local_b3
#undef local_64
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
