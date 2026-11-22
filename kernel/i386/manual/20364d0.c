/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cc612 (*(char (*)[1])(0x20cc612U))
#define str_020cc75c (*(char (*)[1])(0x20cc75cU))
#define str_020cc777 (*(char (*)[1])(0x20cc777U))
#define str_020cc77f (*(char (*)[1])(0x20cc77fU))
#define str_020cc78b (*(char (*)[1])(0x20cc78bU))
#define str_020cc7a4 (*(char (*)[1])(0x20cc7a4U))
#define str_020cc7ba (*(char (*)[1])(0x20cc7baU))
#define str_020cc7ce (*(char (*)[1])(0x20cc7ceU))
#define str_020cc7f4 (*(char (*)[1])(0x20cc7f4U))
#define str_020cc816 (*(char (*)[1])(0x20cc816U))
#define str_020cc82b (*(char (*)[1])(0x20cc82bU))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_2314 (*(char (*)[7712])(frame + 28))
#define local_4f4 (*(char (*)[505])(frame + 7740))
#define local_2fb (*(char (*)[241])(frame + 8245))
#define local_20a (*(char (*)[241])(frame + 8486))
#define local_119 (*(char (*)[241])(frame + 8727))
#define local_28 (*(uint *)(frame + 8968))
#define local_24 (*(uint *)(frame + 8972))
#define local_1e (*(char *)(frame + 8978))
#define local_1d (*(char *)(frame + 8979))
#define local_1c (*(int *)(frame + 8980))
#define local_18 (*(undefined4 *)(frame + 8984))
#define local_14 (*(char * *)(frame + 8988))


undefined4 recovered_20364d0(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[9040] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 extraout_ECX = 0;
  char cVar8;
  uint incoming_edx;
  uint extraout_EDX = 0;
  uint incoming_edx_00;
  int iVar9;
  char *pcVar10;
  char *pcVar11;

  local_1c = 0;
  local_28 = 0;
  local_24 = 0;
  local_14 = in_EDX;
LAB_020364f7:
  do {
    uVar7 = local_24;
    do {
      local_24 = uVar7;
      do {
        if (in_ECX == (byte *)0x0) {
          in_ECX = &DAT_020c5084;
        }
        else {
          for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
          }
        }
        local_119[0] = '\0';
        bVar1 = *in_ECX;
        uVar7 = (uint)bVar1;
        if ((uVar7 != 0x22) && (uVar7 != 0x27)) {
          if (uVar7 != 0) {
            uVar5 = uVar7;
            uVar7 = 0;
            goto joined_r0x02036543;
          }
LAB_020366ed:
          pcVar10 = local_14;
          if (local_1c != 0) {
            local_1d = param_3 == 0 || local_14 == (char *)0x0;
            local_18 = 1;
            iVar9 = 0;
            iVar3 = local_1c;
            goto LAB_0203672d;
          }
          if ((local_28 & 1) != 0) {
            return 1;
          }
          if (param_3 == 0 || local_14 == (char *)0x0) {
            return 0;
          }
          local_18 = 0;
          if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
            (pcVar10 + uVar6)[0] = '\n';
            (pcVar10 + uVar6)[1] = '\0';
          }
          uVar6 = recovered_2002270(pcVar10);
          if (param_3 <= uVar6 + 1) {
            return local_18;
          }
          pcVar10 = pcVar10 + uVar6;
          cVar8 = 'r';
          iVar3 = 0;
          goto LAB_020369e0;
        }
        bVar1 = in_ECX[1];
        uVar5 = (uint)bVar1;
        in_ECX = in_ECX + 1;
joined_r0x02036543:
        if (bVar1 == 0) {
          uVar2 = 0;
        }
        else {
          in_ECX = in_ECX + 1;
          uVar2 = 0;
          do {
            if (uVar7 == 0) {
              if ((uVar5 - 9 < 0x18) && ((0x80001fU >> (uVar5 - 9 & 0x1f) & 1) != 0)) break;
            }
            else if (uVar7 == (int)(char)uVar5) goto LAB_020365c1;
            if (uVar2 + 1 < 0xf1) {
              local_119[uVar2] = (char)uVar5;
              uVar2 = uVar2 + 1;
            }
            bVar1 = *in_ECX;
            uVar5 = (uint)bVar1;
            in_ECX = in_ECX + 1;
          } while (bVar1 != 0);
          in_ECX = in_ECX + -1;
        }
LAB_020365c1:
        local_119[uVar2] = '\0';
        for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
        }
        if (uVar2 == 0) goto LAB_020366ed;
        iVar3 = recovered_20022a0(local_119,str_020c7213);
        pcVar10 = local_14;
        if (iVar3 == 0) {
          if (param_3 == 0 || local_14 == (char *)0x0) {
            return 1;
          }
          if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
            (pcVar10 + uVar6)[0] = '\n';
            (pcVar10 + uVar6)[1] = '\0';
          }
          local_18 = 1;
          uVar6 = recovered_2002270(pcVar10);
          if (param_3 <= uVar6 + 1) {
            return local_18;
          }
          cVar8 = 'u';
          iVar3 = 0;
          goto LAB_02036a50;
        }
        iVar3 = recovered_20022a0(local_119,str_020cc777);
        if (iVar3 == 0) {
          local_28 = 1;
          goto LAB_020364f7;
        }
        iVar3 = recovered_20022a0(local_119,str_020cc77f);
      } while (iVar3 == 0);
      iVar3 = recovered_20022a0(local_119,str_020cc612);
      uVar7 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
    } while (iVar3 == 0);
    if ((local_119[0] != '-') || (local_119[1] == '\0')) {
      if (local_1c == 0x20) {
        local_18 = 0;
        if (param_3 == 0 || local_14 == (char *)0x0) {
          return 0;
        }
        if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
          (local_14 + uVar6)[0] = '\n';
          (local_14 + uVar6)[1] = '\0';
        }
        pcVar10 = local_14;
        uVar6 = recovered_2002270(local_14);
        if (param_3 <= uVar6 + 1) {
          return local_18;
        }
        pcVar10 = pcVar10 + uVar6;
        cVar8 = 'r';
        iVar3 = 0;
        goto LAB_02036afc;
      }
      iVar3 = local_1c * 0xf1;
      local_1c = local_1c + 1;
      pf_varargs_20044f0__4_(local_2314 + iVar3,0xf1,&DAT_020c5119,(uint)local_119);
      goto LAB_020364f7;
    }
    pcVar10 = local_119 + 2;
    cVar8 = local_119[1];
    do {
      switch((uintptr_t)((cVar8 + 0xaeU) * '@' | (byte)(cVar8 + 0xaeU) >> 2)) {
      case 0:
      case 8:
        break;
      default:
        pf_varargs_202ecc0__4_(local_14,param_3,str_020cc78b,(int)cVar8);
        return 0;
      case 5:
        local_28 = 1;
        break;
      case 9:
        local_24 = 1;
      }
      cVar8 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  } while( true );
LAB_0203672d:
  pcVar10 = local_20a;
  recovered_2030400(local_2314 + iVar9 * 0xf1,str_020d9e14,pcVar10);
  iVar4 = recovered_20022a0(pcVar10,&DAT_020c5359);
  if (iVar4 == 0) {
    local_18 = 0;
    if (local_1d == '\0') {
      if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
        (local_14 + uVar6)[0] = '\n';
        (local_14 + uVar6)[1] = '\0';
      }
      uVar6 = recovered_2002270(local_14);
      if (uVar6 + 1 < param_3) {
        cVar8 = 'r';
        iVar3 = 0;
        do {
          local_14[iVar3 + uVar6] = cVar8;
          cVar8 = str_020cc7ce[iVar3 + 1];
          iVar4 = iVar3 + 1;
          if (cVar8 == '\0') break;
          uVar7 = iVar3 + uVar6 + 2;
          iVar3 = iVar4;
        } while (uVar7 < param_3);
        local_14[iVar4 + uVar6] = '\0';
        local_18 = 0;
        goto LAB_02036721;
      }
    }
  }
  else {
    pcVar11 = (char *)0x2036770;
    uVar7 = recovered_2030680(pcVar10,local_4f4);
    if ((char)uVar7 == '\0') {
      if ((local_28 & 1) != 0) goto LAB_02036724;
      pcVar10 = str_020cc7f4;
    }
    else {
      if (local_20a[0] == '\0') {
LAB_0203685b:
        pcVar10 = pcVar11;
        pcVar11 = str_020c6ac7;
      }
      else {
        iVar3 = recovered_20022a0(pcVar10,&DAT_020c5359);
        if (iVar3 == 0) goto LAB_0203685b;
        pcVar11 = str_020c6d20;
      }
      pf_varargs_20044f0__4_(local_2fb,0xf1,pcVar11,(uint)pcVar10);
      iVar4 = DAT_020d9d5c;
      recovered_2026f10();
      iVar3 = DAT_020d9d44;
      uVar7 = incoming_edx;
      if (iVar3 == iVar4 || iVar4 < 0) {
LAB_020368a1:
        local_1e = iVar3 == iVar4;
        uVar7 = recovered_2028910((int)local_2fb,uVar7);
        bVar1 = 1;
        if (iVar4 < 0 || local_1e != '\0') {
LAB_020368cd:
          if (((byte)uVar7 & bVar1) == 0) goto LAB_02036912;
        }
        else {
          if (-1 < iVar3) {
            uVar5 = recovered_202ac50(iVar3,incoming_edx_00);
            bVar1 = (byte)uVar5;
            goto LAB_020368cd;
          }
          recovered_20539f0(&DAT_02130724,incoming_edx_00);
          DAT_020d9d44 = 0xffffffff;
          if ((uVar7 & 1) == 0) goto LAB_02036912;
        }
        if ((local_24 & 1) != 0) {
          pf_varargs_202ecc0__4_(local_14,param_3,str_020cc82b,(uint)local_20a);
        }
LAB_02036721:
        iVar3 = local_1c;
        goto LAB_02036724;
      }
      uVar5 = recovered_202ac50(iVar4,incoming_edx);
      uVar7 = extraout_EDX;
      if ((char)uVar5 != '\0') goto LAB_020368a1;
LAB_02036912:
      iVar3 = local_1c;
      if ((local_28 & 1) != 0) goto LAB_02036724;
      pcVar10 = str_020cc816;
    }
    pf_varargs_202ecc0__4_(local_14,param_3,pcVar10,(uint)local_20a);
    local_18 = 0;
  }
LAB_02036724:
  iVar9 = iVar9 + 1;
  if (iVar9 == iVar3) {
    return local_18;
  }
  goto LAB_0203672d;
  while (uVar7 = iVar3 + uVar6 + 2, iVar3 = iVar9, uVar7 < param_3) {
LAB_020369e0:
    pcVar10[iVar3] = cVar8;
    cVar8 = str_020cc7ba[iVar3 + 1];
    iVar9 = iVar3 + 1;
    if (cVar8 == '\0') break;
  }
  goto LAB_020369fa;
  while (uVar7 = iVar3 + uVar6 + 2, iVar3 = iVar9, uVar7 < param_3) {
LAB_02036a50:
    pcVar10[iVar3 + uVar6] = cVar8;
    cVar8 = str_020cc75c[iVar3 + 1];
    iVar9 = iVar3 + 1;
    if (cVar8 == '\0') break;
  }
  pcVar10[iVar9 + uVar6] = '\0';
  return local_18;
  while (uVar7 = iVar3 + uVar6 + 2, iVar3 = iVar9, uVar7 < param_3) {
LAB_02036afc:
    pcVar10[iVar3] = cVar8;
    cVar8 = str_020cc7a4[iVar3 + 1];
    iVar9 = iVar3 + 1;
    if (cVar8 == '\0') break;
  }
LAB_020369fa:
  pcVar10[iVar9] = '\0';
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020d9d44
#undef DAT_020d9d5c
#undef DAT_02130724
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c7213
#undef str_020cc612
#undef str_020cc75c
#undef str_020cc777
#undef str_020cc77f
#undef str_020cc78b
#undef str_020cc7a4
#undef str_020cc7ba
#undef str_020cc7ce
#undef str_020cc7f4
#undef str_020cc816
#undef str_020cc82b
#undef str_020d9e14
#undef local_2314
#undef local_4f4
#undef local_2fb
#undef local_20a
#undef local_119
#undef local_28
#undef local_24
#undef local_1e
#undef local_1d
#undef local_1c
#undef local_18
#undef local_14
