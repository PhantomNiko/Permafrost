/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020cc838 (*(char (*)[1])(0x20cc838U))
#define str_020cc857 (*(char (*)[1])(0x20cc857U))
#define str_020cc860 (*(char (*)[1])(0x20cc860U))
#define str_020cc872 (*(char (*)[1])(0x20cc872U))
#define str_020cc882 (*(char (*)[1])(0x20cc882U))
#define str_020cc89c (*(char (*)[1])(0x20cc89cU))
#define str_020cc8b3 (*(char (*)[1])(0x20cc8b3U))
#define str_020cc8cd (*(char (*)[1])(0x20cc8cdU))
#define str_020cc8e3 (*(char (*)[1])(0x20cc8e3U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define in_stack_ffffe950 (*(char * *)(frame + 32))
#define local_16ab (*(char (*)[3856])(frame + 37))
#define local_79b (*(char (*)[241])(frame + 3893))
#define local_6aa (*(char *)(frame + 4134))
#define local_6a9 (*(char (*)[639])(frame + 4135))
#define local_42a (*(char (*)[512])(frame + 4774))
#define local_22a (*(char (*)[241])(frame + 5286))
#define local_139 (*(char (*)[241])(frame + 5527))
#define local_48 (*(int *)(frame + 5768))
#define local_44 (*(uint *)(frame + 5772))
#define local_40 (*(byte *)(frame + 5776))
#define local_3c (*(int *)(frame + 5780))
#define local_38 (*(int *)(frame + 5784))
#define local_34 (*(undefined4 *)(frame + 5788))
#define local_30 (*(undefined4 *)(frame + 5792))
#define local_2c (*(int *)(frame + 5796))
#define local_28 (*(uint *)(frame + 5800))
#define local_24 (*(uint *)(frame + 5804))
#define local_1e (*(byte *)(frame + 5810))
#define local_1d (*(byte *)(frame + 5811))
#define local_1c (*(undefined4 *)(frame + 5812))
#define local_15 (*(char *)(frame + 5819))
#define local_14 (*(char * *)(frame + 5820))


undefined4 recovered_2036b20(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[5872] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  undefined4 extraout_ECX = 0;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  char *pcVar12;
  bool bVar13;
  char *pcVar14;

  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_14 = in_EDX;
LAB_02036b53:
  do {
    uVar9 = local_34;
    do {
      if (in_ECX == (byte *)0x0) {
        in_ECX = &DAT_020c5084;
      }
      else {
        for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
        }
      }
      local_139[0] = '\0';
      bVar11 = *in_ECX;
      uVar8 = (uint)bVar11;
      local_34 = uVar9;
      if ((uVar8 != 0x22) && (uVar8 != 0x27)) {
        if (uVar8 != 0) {
          uVar10 = uVar8;
          uVar8 = 0;
          goto joined_r0x02036ba3;
        }
LAB_02036d4a:
        pcVar12 = local_14;
        if (local_2c != 0) {
          local_1d = (byte)local_30 ^ 1;
          local_24 = CONCAT31((int3)(local_24 >> 8),(byte)local_24 & local_1d);
          local_15 = param_3 == 0 || local_14 == (char *)0x0;
          local_1c = 1;
          iVar2 = 0;
          bVar11 = 0;
          local_28 = 1;
          goto LAB_02036dbb;
        }
        if (param_3 == 0 || local_14 == (char *)0x0) {
          return 0;
        }
        local_1c = 0;
        if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
          (pcVar12 + uVar6)[0] = '\n';
          (pcVar12 + uVar6)[1] = '\0';
        }
        uVar6 = recovered_2002270(pcVar12);
        if (param_3 <= uVar6 + 1) {
          return local_1c;
        }
        pcVar12 = pcVar12 + uVar6;
        cVar7 = 'c';
        iVar2 = 0;
        goto LAB_02037240;
      }
      bVar11 = in_ECX[1];
      uVar10 = (uint)bVar11;
      in_ECX = in_ECX + 1;
joined_r0x02036ba3:
      if (bVar11 == 0) {
        uVar1 = 0;
      }
      else {
        in_ECX = in_ECX + 1;
        uVar1 = 0;
        do {
          if (uVar8 == 0) {
            if ((uVar10 - 9 < 0x18) && ((0x80001fU >> (uVar10 - 9 & 0x1f) & 1) != 0)) break;
          }
          else if (uVar8 == (int)(char)uVar10) goto LAB_02036c21;
          if (uVar1 + 1 < 0xf1) {
            local_139[uVar1] = (char)uVar10;
            uVar1 = uVar1 + 1;
          }
          bVar11 = *in_ECX;
          uVar10 = (uint)bVar11;
          in_ECX = in_ECX + 1;
        } while (bVar11 != 0);
        in_ECX = in_ECX + -1;
      }
LAB_02036c21:
      pcVar14 = local_139;
      local_139[uVar1] = '\0';
      for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
      }
      if (uVar1 == 0) goto LAB_02036d4a;
      iVar2 = recovered_20022a0(pcVar14,str_020c7213);
      pcVar12 = local_14;
      if (iVar2 == 0) {
        if (param_3 != 0 && local_14 != (char *)0x0) {
          if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
            (pcVar12 + uVar6)[0] = '\n';
            (pcVar12 + uVar6)[1] = '\0';
          }
          uVar6 = recovered_2002270(pcVar12);
          if (uVar6 + 1 < param_3) {
            cVar7 = 'u';
            iVar2 = 0;
            goto LAB_02037180;
          }
        }
        return 1;
      }
      iVar2 = recovered_20022a0(pcVar14,str_020cc857);
      if (iVar2 == 0) {
        local_24 = 1;
        goto LAB_02036b53;
      }
      iVar2 = recovered_20022a0(pcVar14,str_020cc860);
      if (iVar2 == 0) {
        local_30 = 1;
        goto LAB_02036b53;
      }
      iVar2 = recovered_20022a0(pcVar14,str_020cc872);
      pcVar12 = local_14;
      uVar9 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
    } while (iVar2 == 0);
    if ((local_139[0] == '-') && (local_139[1] != '\0')) {
      pcVar14 = local_139 + 1;
      do {
        cVar7 = *pcVar14;
        switch((uintptr_t)(cVar7)) {
        case 'B':
        case 'C':
        case 'D':
        case 'F':
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
        case 'a':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
          goto switchD_02036cdc_caseD_42;
        case 'b':
          local_30 = 1;
        case 'A':
        case 'E':
        case 'T':
        case 'e':
        case 't':
        case 'u':
        case 'v':
          pcVar14 = pcVar14 + 1;
          break;
        case 'n':
          local_24 = 1;
          pcVar14 = pcVar14 + 1;
          break;
        case 's':
          local_34 = 1;
          pcVar14 = pcVar14 + 1;
          break;
        default:
          goto switchD_02036cdc_default;
        }
      } while( true );
    }
    if (local_2c == 0x10) {
      if (param_3 == 0 || local_14 == (char *)0x0) {
        return 0;
      }
      local_1c = 0;
      if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
        (pcVar12 + uVar6)[0] = '\n';
        (pcVar12 + uVar6)[1] = '\0';
      }
      uVar6 = recovered_2002270(pcVar12);
      if (param_3 <= uVar6 + 1) {
        return local_1c;
      }
      pcVar12 = pcVar12 + uVar6;
      cVar7 = 'c';
      iVar2 = 0;
      goto LAB_020372cd;
    }
    iVar2 = local_2c * 0xf1;
    local_2c = local_2c + 1;
    pf_varargs_20044f0__4_(local_16ab + iVar2,0xf1,&DAT_020c5119,(uint)pcVar14);
    in_stack_ffffe950 = pcVar14;
  } while( true );
LAB_02036dbb:
  recovered_2030400(local_16ab + iVar2 * 0xf1,str_020d9e14,local_22a);
  if ((local_22a[0] == '\0') || (iVar3 = recovered_20022a0(local_22a,&DAT_020c5359), iVar3 == 0)) {
    pcVar14 = str_020c6ac7;
  }
  else {
    pcVar14 = str_020c6d20;
    in_stack_ffffe950 = local_22a;
  }
  pf_varargs_20044f0__4_(local_79b,0xf1,pcVar14,(uint)in_stack_ffffe950);
  recovered_2001e00(&local_48,0,0xc);
  iVar3 = DAT_020d9d5c;
  uVar8 = recovered_202ad00(iVar3,local_79b,&local_48);
  if ((uVar8 == 0) || ((local_40 & 2) != 0)) {
    in_stack_ffffe950 = local_22a;
    pf_varargs_202ecc0__4_(local_14,param_3,str_020cc8cd,(uint)in_stack_ffffe950);
    local_1c = 0;
  }
  else {
    local_3c = local_48;
    local_38 = iVar2;
    if (!(local_48 == 0 || local_44 == 0)) {
      uVar8 = 0;
      do {
        uVar10 = local_28;
        uVar1 = 0;
        do {
          uVar4 = uVar8;
          if (*(char *)(local_3c + uVar4) == '\n') break;
          if (uVar1 + 1 < 0x200) {
            local_42a[uVar1] = *(char *)(local_3c + uVar4);
            uVar1 = uVar1 + 1;
          }
          else {
          }
          uVar8 = uVar4 + 1;
        } while (uVar4 + 1 < local_44);
        uVar8 = uVar4 + 1;
        local_42a[uVar1] = '\0';
        bVar13 = uVar1 == 0;
        if (((byte)local_34 & bVar13 & bVar11) == 0) {
          if ((local_24 & 1) == 0) {
            bVar11 = bVar13;
            if ((uVar1 != 0 & (byte)local_30) == 1) {
              pf_varargs_20044f0__4__4_(&local_6aa,0x280,str_020cc8e3,local_28,(uint)local_42a);
              if (local_15 == '\0') {
                if ((*local_14 != '\0') &&
                   (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
                  (local_14 + uVar6)[0] = '\n';
                  (local_14 + uVar6)[1] = '\0';
                }
                uVar6 = recovered_2002270(local_14);
                if (uVar6 + 1 < param_3) {
                  uVar10 = (uint)CONCAT11(bVar13,local_6aa);
                  if (local_6aa != '\0') {
                    pcVar14 = local_6a9;
                    uVar5 = uVar6;
                    do {
                      local_14[uVar5] = (char)uVar10;
                      uVar10 = CONCAT31((int3)(uVar10 >> 8),*pcVar14);
                      uVar6 = uVar5 + 1;
                      if (*pcVar14 == '\0') break;
                      uVar4 = uVar5 + 2;
                      pcVar14 = pcVar14 + 1;
                      uVar5 = uVar6;
                    } while (uVar4 < param_3);
                  }
                  goto LAB_020370fc;
                }
              }
            }
            else if (local_15 == '\0') {
              if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3))
              {
                (local_14 + uVar6)[0] = '\n';
                (local_14 + uVar6)[1] = '\0';
              }
              uVar6 = recovered_2002270(local_14);
              if (uVar6 + 1 < param_3) {
                uVar10 = (uint)CONCAT11(bVar13,local_42a[0]);
                if (local_42a[0] != '\0') {
                  pcVar14 = local_42a;
                  uVar5 = uVar6;
                  do {
                    pcVar14 = pcVar14 + 1;
                    local_14[uVar5] = (char)uVar10;
                    uVar10 = CONCAT31((int3)(uVar10 >> 8),*pcVar14);
                    uVar6 = uVar5 + 1;
                    if (*pcVar14 == '\0') break;
                    uVar4 = uVar5 + 2;
                    uVar5 = uVar6;
                  } while (uVar4 < param_3);
                }
LAB_020370fc:
                local_14[uVar6] = '\0';
                bVar11 = SUB41(uVar10 >> 8,0);
              }
            }
            if (!(uVar1 != 0 && (local_1d & 1) == 0)) goto LAB_02036e92;
          }
          else {
            local_1e = bVar13;
            pf_varargs_20044f0__4__4_(&local_6aa,0x280,str_020cc8e3,local_28,(uint)local_42a);
            if (local_15 == '\0') {
              if ((*local_14 != '\0') && (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3))
              {
                (local_14 + uVar6)[0] = '\n';
                (local_14 + uVar6)[1] = '\0';
              }
              uVar6 = recovered_2002270(local_14);
              if (uVar6 + 1 < param_3) {
                if (local_6aa != '\0') {
                  pcVar14 = local_6a9;
                  uVar5 = uVar6;
                  cVar7 = local_6aa;
                  do {
                    local_14[uVar5] = cVar7;
                    cVar7 = *pcVar14;
                    uVar6 = uVar5 + 1;
                    if (cVar7 == '\0') break;
                    uVar1 = uVar5 + 2;
                    pcVar14 = pcVar14 + 1;
                    uVar5 = uVar6;
                  } while (uVar1 < param_3);
                }
                local_14[uVar6] = '\0';
              }
            }
            local_28 = uVar10;
            bVar11 = local_1e;
          }
          local_28 = local_28 + 1;
        }
        else {
          bVar11 = 1;
        }
LAB_02036e92:
      } while (uVar8 < local_44);
    }
    iVar2 = local_38;
  }
  iVar2 = iVar2 + 1;
  if (iVar2 == local_2c) {
    return local_1c;
  }
  goto LAB_02036dbb;
  while (uVar8 = iVar2 + uVar6 + 2, iVar2 = iVar3, uVar8 < param_3) {
LAB_02037240:
    pcVar12[iVar2] = cVar7;
    cVar7 = str_020cc8b3[iVar2 + 1];
    iVar3 = iVar2 + 1;
    if (cVar7 == '\0') break;
  }
  goto LAB_0203725a;
switchD_02036cdc_default:
  if (cVar7 != '\0') {
switchD_02036cdc_caseD_42:
    pf_varargs_202ecc0__4_(local_14,param_3,str_020cc882,(int)cVar7);
    return 0;
  }
  goto LAB_02036b53;
  while (uVar8 = iVar2 + uVar6 + 2, iVar2 = iVar3, uVar8 < param_3) {
LAB_02037180:
    pcVar12[iVar2 + uVar6] = cVar7;
    cVar7 = str_020cc838[iVar2 + 1];
    iVar3 = iVar2 + 1;
    if (cVar7 == '\0') break;
  }
  pcVar12[iVar3 + uVar6] = '\0';
  return 1;
  while (uVar8 = iVar2 + uVar6 + 2, iVar2 = iVar3, uVar8 < param_3) {
LAB_020372cd:
    pcVar12[iVar2] = cVar7;
    cVar7 = str_020cc89c[iVar2 + 1];
    iVar3 = iVar2 + 1;
    if (cVar7 == '\0') break;
  }
LAB_0203725a:
  pcVar12[iVar3] = '\0';
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020d9d5c
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c7213
#undef str_020cc838
#undef str_020cc857
#undef str_020cc860
#undef str_020cc872
#undef str_020cc882
#undef str_020cc89c
#undef str_020cc8b3
#undef str_020cc8cd
#undef str_020cc8e3
#undef str_020d9e14
#undef in_stack_ffffe950
#undef local_16ab
#undef local_79b
#undef local_6aa
#undef local_6a9
#undef local_42a
#undef local_22a
#undef local_139
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_1e
#undef local_1d
#undef local_1c
#undef local_15
#undef local_14
