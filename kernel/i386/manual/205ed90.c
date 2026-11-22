/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c5f80 (*(uint8_t *)(0x20c5f80U))
#define DAT_020c5f8c (*(uint8_t *)(0x20c5f8cU))
#define DAT_020c5fa8 (*(uint8_t *)(0x20c5fa8U))
#define DAT_020c5fb8 (*(uint8_t *)(0x20c5fb8U))
#define DAT_020c77e5 (*(uint8_t *)(0x20c77e5U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020c5f85 (*(char (*)[1])(0x20c5f85U))
#define str_020c5f91 (*(char (*)[1])(0x20c5f91U))
#define str_020c5f98 (*(char (*)[1])(0x20c5f98U))
#define str_020c5f9f (*(char (*)[1])(0x20c5f9fU))
#define str_020c5fac (*(char (*)[1])(0x20c5facU))
#define str_020c5fbe (*(char (*)[1])(0x20c5fbeU))
#define str_020c5fc6 (*(char (*)[1])(0x20c5fc6U))
#define str_020c5fce (*(char (*)[1])(0x20c5fceU))
#define str_020c5fda (*(char (*)[1])(0x20c5fdaU))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020c7573 (*(char (*)[1])(0x20c7573U))
#define str_020c767b (*(char (*)[1])(0x20c767bU))
#define str_020c76aa (*(char (*)[1])(0x20c76aaU))
#define str_020c76c9 (*(char (*)[1])(0x20c76c9U))
#define str_020c7700 (*(char (*)[1])(0x20c7700U))
#define str_020c7721 (*(char (*)[1])(0x20c7721U))
#define str_020c7740 (*(char (*)[1])(0x20c7740U))
#define str_020c7754 (*(char (*)[1])(0x20c7754U))
#define str_020c7779 (*(char (*)[1])(0x20c7779U))
#define str_020c778f (*(char (*)[1])(0x20c778fU))
#define str_020c77df (*(char (*)[1])(0x20c77dfU))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define in_stack_ffffddf0 (*(char * *)(frame + 16))
#define local_2200 (*(char (*)[484])(frame + 32))
#define local_201c (*(uint (*)[6])(frame + 516))
#define local_2004 (*(uint (*)[1921])(frame + 540))
#define local_1fe (*(char (*)[241])(frame + 8226))
#define local_10d (*(char (*)[241])(frame + 8467))
#define local_1c (*(uint *)(frame + 8708))
#define local_18 (*(undefined4 * *)(frame + 8712))
#define local_14 (*(uint *)(frame + 8716))


undefined4 recovered_205ed90(int in_ECX,uint in_EDX,char *param_3,char *param_4,uint param_5)

{
  unsigned char frame[8768] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 *out;
  uint uVar7;
  char cVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;

  local_18 = (undefined4 *)in_ECX;
  recovered_2001e00(local_2200,0,0x2000);
  if (in_EDX == 0) {
    if (param_5 == 0 || param_4 == (char *)0x0) {
      return 0;
    }
    if ((*param_4 != '\0') && (uVar3 = recovered_2002270(param_4), uVar3 + 1 < param_5)) {
      (param_4 + uVar3)[0] = '\n';
      (param_4 + uVar3)[1] = '\0';
    }
    uVar3 = recovered_2002270(param_4);
    if (param_5 <= uVar3 + 1) {
      return 0;
    }
    cVar8 = 'l';
    pcVar10 = str_020c767b;
    do {
      pcVar10 = pcVar10 + 1;
      param_4[uVar3] = cVar8;
      cVar8 = *pcVar10;
      uVar9 = uVar3 + 1;
      if (cVar8 == '\0') break;
      uVar4 = uVar3 + 2;
      uVar3 = uVar9;
    } while (uVar4 < param_5);
LAB_0205ef37:
    param_4[uVar9] = '\0';
    return 0;
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    if (param_5 == 0 || param_4 == (char *)0x0) {
      return 0;
    }
    if ((*param_4 != '\0') && (uVar3 = recovered_2002270(param_4), uVar3 + 1 < param_5)) {
      (param_4 + uVar3)[0] = '\n';
      (param_4 + uVar3)[1] = '\0';
    }
    uVar3 = recovered_2002270(param_4);
    if (param_5 <= uVar3 + 1) {
      return 0;
    }
    cVar8 = 'l';
    pcVar10 = str_020c76aa;
    do {
      pcVar10 = pcVar10 + 1;
      param_4[uVar3] = cVar8;
      cVar8 = *pcVar10;
      uVar9 = uVar3 + 1;
      if (cVar8 == '\0') break;
      uVar4 = uVar3 + 2;
      uVar3 = uVar9;
    } while (uVar4 < param_5);
    goto LAB_0205ef37;
  }
  if (0x10 < in_EDX) {
    if (param_5 == 0 || param_4 == (char *)0x0) {
      return 0;
    }
    if ((*param_4 != '\0') && (uVar3 = recovered_2002270(param_4), uVar3 + 1 < param_5)) {
      (param_4 + uVar3)[0] = '\n';
      (param_4 + uVar3)[1] = '\0';
    }
    uVar3 = recovered_2002270(param_4);
    if (param_5 <= uVar3 + 1) {
      return 0;
    }
    cVar8 = 'l';
    pcVar10 = str_020c7573;
    do {
      pcVar10 = pcVar10 + 1;
      param_4[uVar3] = cVar8;
      cVar8 = *pcVar10;
      uVar9 = uVar3 + 1;
      if (cVar8 == '\0') break;
      uVar4 = uVar3 + 2;
      uVar3 = uVar9;
    } while (uVar4 < param_5);
    goto LAB_0205ef37;
  }
  uVar4 = 0;
  iVar12 = 1;
  local_1c = in_EDX;
  do {
    local_14 = uVar4;
    uVar5 = recovered_205fdd0((char *)(uVar4 * 0xf1 + (int)local_18),local_2200 + uVar4 * 0x200,
                              param_4,param_5);
    uVar7 = local_1c;
    if ((char)uVar5 == '\0') {
      if (local_14 == 0) {
        return 0;
      }
      puVar6 = local_201c;
      uVar4 = local_14;
      do {
        recovered_2001710((void *)*puVar6);
        *puVar6 = 0;
        puVar6 = puVar6 + 0x80;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      return 0;
    }
    pbVar2 = (byte *)local_201c[uVar4 * 0x80];
    if (((pbVar2 != (byte *)0x0) && (7 < local_201c[uVar4 * 0x80 + 1])) &&
       ((pbVar2[3] & 0xfffffffe |
        (uint)pbVar2[2] << 8 | (uint)pbVar2[1] << 0x10 | (uint)*pbVar2 << 0x18) == 0xcafebabe)) {
      pf_varargs_202ecc0__4_(param_4,param_5,str_020c76c9,(uint)(local_2200 + uVar4 * 0x200));
      puVar6 = local_201c;
      do {
        recovered_2001710((void *)*puVar6);
        *puVar6 = 0;
        puVar6 = puVar6 + 0x80;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      return 0;
    }
    if (local_14 != 0) {
      uVar13 = local_201c[uVar4 * 0x80 + 2];
      puVar6 = local_201c + 3;
      uVar11 = local_14;
      do {
        if ((puVar6[-1] == uVar13) && (*puVar6 == local_201c[uVar4 * 0x80 + 3])) {
          if (0x10000f7 < (int)uVar13) {
            if ((int)uVar13 < 0x10000012) {
              if (uVar13 == 0x10000f8) {
                pcVar10 = str_020c5fda;
                goto LAB_0205f2d1;
              }
              if (uVar13 == 0x10000008) {
                pcVar10 = str_020c5f98;
                goto LAB_0205f2d1;
              }
            }
            else {
              if (uVar13 == 0x10000012) {
                pcVar10 = str_020c5fbe;
                goto LAB_0205f2d1;
              }
              if (uVar13 == 0x11000008) {
                pcVar10 = str_020c5f9f;
                goto LAB_0205f2d1;
              }
              if (uVar13 == 0x11000012) {
                pcVar10 = str_020c5fc6;
                goto LAB_0205f2d1;
              }
            }
            goto switchD_0205f030_caseD_1000009;
          }
          switch((uintptr_t)(uVar13)) {
          case 7:
            pcVar10 = &DAT_020c5f80;
            break;
          case 8:
            pcVar10 = &DAT_020c5f8c;
            break;
          case 9:
          case 10:
          case 0xb:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
            goto switchD_0205f030_caseD_1000009;
          case 0xc:
            pcVar10 = str_020c77df;
            if ((char)*puVar6 != '\t') {
              pcVar10 = &DAT_020c5fa8;
            }
            break;
          case 0x12:
            pcVar10 = &DAT_020c77e5;
            break;
          default:
            switch((uintptr_t)(uVar13)) {
            case 0x1000007:
              pcVar10 = str_020c5f85;
              break;
            case 0x1000008:
              pcVar10 = str_020c5f91;
              break;
            case 0x100000c:
              pcVar10 = str_020c5fac;
              break;
            case 0x1000012:
              pcVar10 = &DAT_020c5fb8;
              break;
            default:
              if (uVar13 == 0xf8) {
                pcVar10 = str_020c5fce;
                break;
              }
            case 0x1000009:
            case 0x100000a:
            case 0x100000b:
            case 0x100000d:
            case 0x100000e:
            case 0x100000f:
            case 0x1000010:
            case 0x1000011:
switchD_0205f030_caseD_1000009:
              pcVar10 = str_020c5bb8;
            }
          }
LAB_0205f2d1:
          pf_varargs_202ecc0__4_(param_4,param_5,str_020c7700,(uint)pcVar10);
          puVar6 = local_201c;
          do {
            recovered_2001710((void *)*puVar6);
            *puVar6 = 0;
            puVar6 = puVar6 + 0x80;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          return 0;
        }
        puVar6 = puVar6 + 0x80;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uVar4 = local_14 + 1;
    iVar12 = iVar12 + 1;
  } while (uVar4 != local_1c);
  uVar13 = 0x1000;
  puVar6 = local_201c + 6;
  uVar4 = local_1c;
  do {
    puVar6[-2] = uVar13;
    uVar11 = puVar6[-5];
    puVar6[-1] = uVar11;
    *puVar6 = 0xc;
    if (CARRY4(uVar13,uVar11)) {
      if (param_5 == 0 || param_4 == (char *)0x0) goto LAB_0205f388;
      if ((*param_4 != '\0') && (uVar3 = recovered_2002270(param_4), uVar3 + 1 < param_5)) {
        (param_4 + uVar3)[0] = '\n';
        (param_4 + uVar3)[1] = '\0';
      }
      uVar3 = recovered_2002270(param_4);
      if (param_5 <= uVar3 + 1) goto LAB_0205f388;
      cVar8 = 'l';
      iVar12 = 0;
      goto LAB_0205f36a;
    }
    uVar13 = uVar11 + 0xfff + uVar13 & 0xfffff000;
    puVar6 = puVar6 + 0x80;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  out = recovered_2001650(uVar13 + (uVar13 == 0));
  if (out == (undefined4 *)0x0) {
    if (param_5 != 0 && param_4 != (char *)0x0) {
      if ((*param_4 != '\0') && (uVar3 = recovered_2002270(param_4), uVar3 + 1 < param_5)) {
        (param_4 + uVar3)[0] = '\n';
        (param_4 + uVar3)[1] = '\0';
      }
      uVar3 = recovered_2002270(param_4);
      if (uVar3 + 1 < param_5) {
        cVar8 = 'l';
        iVar12 = 0;
        do {
          param_4[iVar12 + uVar3] = cVar8;
          cVar8 = str_020c7740[iVar12 + 1];
          iVar1 = iVar12 + 1;
          if (cVar8 == '\0') break;
          uVar4 = iVar12 + uVar3 + 2;
          iVar12 = iVar1;
        } while (uVar4 < param_5);
        param_4[iVar1 + uVar3] = '\0';
      }
    }
    puVar6 = local_201c;
    do {
      recovered_2001710((void *)*puVar6);
      *puVar6 = 0;
      puVar6 = puVar6 + 0x80;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    return 0;
  }
  recovered_2001e00(out,0,uVar13);
  *out = 0xbebafeca;
  *(undefined2 *)(out + 1) = 0;
  *(undefined1 *)((int)out + 6) = 0;
  *(char *)((int)out + 7) = (char)uVar7;
  puVar6 = local_201c + 6;
  iVar12 = (int)out + 0x1b;
  local_18 = out;
  do {
    uVar4 = puVar6[-4];
    *(uint *)(iVar12 + -0x13) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = puVar6[-3];
    *(uint *)(iVar12 + -0xf) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = puVar6[-2];
    *(uint *)(iVar12 + -0xb) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = puVar6[-1];
    *(uint *)(iVar12 + -7) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = *puVar6;
    *(uint *)(iVar12 + -3) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    local_14 = uVar7;
    recovered_2001b70((void *)(puVar6[-2] + (int)local_18),(void *)puVar6[-6],puVar6[-5]);
    puVar6 = puVar6 + 0x80;
    iVar12 = iVar12 + 0x14;
    uVar7 = local_14 - 1;
  } while (uVar7 != 0);
  recovered_2030400(param_3,str_020d9e14,local_1fe);
  iVar12 = recovered_20022a0(local_1fe,&DAT_020c5359);
  if (iVar12 == 0) {
    recovered_202dd30(param_4,param_5,str_020c7754);
  }
  else {
    if ((local_1fe[0] == '\0') || (iVar12 = recovered_20022a0(local_1fe,&DAT_020c5359), iVar12 == 0)
       ) {
      pcVar10 = str_020c6ac7;
    }
    else {
      pcVar10 = str_020c6d20;
      in_stack_ffffddf0 = local_1fe;
    }
    pf_varargs_20044f0__4_(local_10d,0xf1,pcVar10,(uint)in_stack_ffffddf0);
    iVar12 = DAT_020d9d5c;
    uVar4 = recovered_202b490(iVar12,local_10d,local_18,uVar13);
    if (uVar4 != 0) {
      pf_varargs_202ecc0__4_(param_4,param_5,str_020c778f,(uint)local_1fe);
      uVar5 = 1;
      goto LAB_0205f4ca;
    }
    pf_varargs_202ecc0__4_(param_4,param_5,str_020c7779,(uint)local_1fe);
  }
  uVar5 = 0;
LAB_0205f4ca:
  recovered_2001710(local_18);
  puVar6 = local_201c;
  uVar4 = local_1c;
  do {
    recovered_2001710((void *)*puVar6);
    *puVar6 = 0;
    puVar6 = puVar6 + 0x80;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return uVar5;
  while (uVar4 = iVar12 + uVar3 + 2, iVar12 = iVar1, uVar4 < param_5) {
LAB_0205f36a:
    param_4[iVar12 + uVar3] = cVar8;
    cVar8 = str_020c7721[iVar12 + 1];
    iVar1 = iVar12 + 1;
    if (cVar8 == '\0') break;
  }
  param_4[iVar1 + uVar3] = '\0';
LAB_0205f388:
  puVar6 = local_201c;
  do {
    recovered_2001710((void *)*puVar6);
    *puVar6 = 0;
    puVar6 = puVar6 + 0x80;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  return 0;
}
#undef DAT_020c5359
#undef DAT_020c5f80
#undef DAT_020c5f8c
#undef DAT_020c5fa8
#undef DAT_020c5fb8
#undef DAT_020c77e5
#undef DAT_020d9d5c
#undef str_020c5bb8
#undef str_020c5f85
#undef str_020c5f91
#undef str_020c5f98
#undef str_020c5f9f
#undef str_020c5fac
#undef str_020c5fbe
#undef str_020c5fc6
#undef str_020c5fce
#undef str_020c5fda
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020c7573
#undef str_020c767b
#undef str_020c76aa
#undef str_020c76c9
#undef str_020c7700
#undef str_020c7721
#undef str_020c7740
#undef str_020c7754
#undef str_020c7779
#undef str_020c778f
#undef str_020c77df
#undef str_020d9e14
#undef in_stack_ffffddf0
#undef local_2200
#undef local_201c
#undef local_2004
#undef local_1fe
#undef local_10d
#undef local_1c
#undef local_18
#undef local_14
