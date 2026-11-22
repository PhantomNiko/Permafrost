/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5f80 (*(uint8_t *)(0x20c5f80U))
#define DAT_020c5f8c (*(uint8_t *)(0x20c5f8cU))
#define DAT_020c5fa8 (*(uint8_t *)(0x20c5fa8U))
#define DAT_020c5fb8 (*(uint8_t *)(0x20c5fb8U))
#define DAT_020c77e5 (*(uint8_t *)(0x20c77e5U))
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
#define str_020c77df (*(char (*)[1])(0x20c77dfU))
#define str_020c7891 (*(char (*)[1])(0x20c7891U))
#define str_020c78b7 (*(char (*)[1])(0x20c78b7U))
#define str_020c78e1 (*(char (*)[1])(0x20c78e1U))
#define cStack_145 (*(char *)(frame + 539))
#define local_344 (*(char (*)[484])(frame + 28))
#define local_160 (*(uint * *)(frame + 512))
#define local_15c (*(uint *)(frame + 516))
#define local_144 (*(undefined2 *)(frame + 540))
#define local_44 (*(uint *)(frame + 796))
#define local_40 (*(uint *)(frame + 800))
#define local_3c (*(undefined4 *)(frame + 804))
#define local_38 (*(uint *)(frame + 808))
#define local_34 (*(undefined4 *)(frame + 812))
#define local_30 (*(int *)(frame + 816))
#define local_2c (*(int *)(frame + 820))
#define local_28 (*(uint * *)(frame + 824))
#define local_24 (*(uint *)(frame + 828))
#define local_20 (*(uint *)(frame + 832))
#define local_1c (*(int *)(frame + 836))
#define local_18 (*(undefined4 *)(frame + 840))
#define local_11 (*(char *)(frame + 847))


undefined4 recovered_205f840(int in_ECX,int in_EDX,char param_3,char *param_4,uint param_5)

{
  unsigned char frame[896] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;

  if (in_EDX == 0) {
    uVar9 = 1;
  }
  else {
    local_11 = param_5 == 0 || param_4 == (char *)0x0;
    uVar9 = 1;
    local_30 = 0;
    local_2c = in_EDX;
    local_1c = in_ECX;
    do {
      local_18 = uVar9;
      uVar3 = recovered_205fdd0((char *)(local_30 * 0xf1 + in_ECX),local_344,param_4,param_5);
      uVar8 = local_15c;
      puVar1 = local_160;
      uVar9 = 0;
      if ((char)uVar3 != '\0') {
        PF_PART1(local_144, 0) = '\0';
        if ((local_15c < 8 || local_160 == (uint *)0x0) ||
           ((*(byte *)((int)local_160 + 3) & 0xfffffffe |
            (uint)*(byte *)((int)local_160 + 2) << 8 |
            (uint)*(byte *)((int)local_160 + 1) << 0x10 | (uint)(byte)*local_160 << 0x18) !=
            0xcafebabe)) {
          if (local_15c < 0xc || local_160 == (uint *)0x0) goto LAB_0205f880;
          uVar12 = *local_160;
          recovered_2001e00(&local_44,0,0x14);
          in_ECX = local_1c;
          local_3c = 0;
          local_38 = uVar8;
          local_34 = 0xc;
          if ((uVar12 & 0xfffffffe) == 0xfeedface) {
            local_44 = puVar1[1];
            local_40 = puVar1[2];
          }
          else {
            if ((uVar12 & 0xfeffffff) != 0xcefaedfe) goto LAB_0205f880;
            uVar8 = puVar1[1];
            local_44 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18;
            uVar8 = puVar1[2];
            local_40 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18;
          }
          if ((int)local_44 < 0x10000f8) {
            switch((uintptr_t)(local_44)) {
            case 7:
              pcVar11 = &DAT_020c5f80;
              break;
            case 8:
              pcVar11 = &DAT_020c5f8c;
              break;
            case 9:
            case 10:
            case 0xb:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
switchD_0205fbb9_caseD_1000009:
              pcVar11 = str_020c5bb8;
              break;
            case 0xc:
              pcVar11 = str_020c77df;
              if ((char)local_40 != '\t') {
                pcVar11 = &DAT_020c5fa8;
              }
              break;
            case 0x12:
              pcVar11 = &DAT_020c77e5;
              break;
            default:
              switch((uintptr_t)(local_44)) {
              case 0x1000007:
                pcVar11 = str_020c5f85;
                break;
              case 0x1000008:
                pcVar11 = str_020c5f91;
                break;
              case 0x1000009:
              case 0x100000a:
              case 0x100000b:
              case 0x100000d:
              case 0x100000e:
              case 0x100000f:
              case 0x1000010:
              case 0x1000011:
                goto switchD_0205fbb9_caseD_1000009;
              case 0x100000c:
                pcVar11 = str_020c5fac;
                break;
              case 0x1000012:
                pcVar11 = &DAT_020c5fb8;
                break;
              default:
                if (local_44 != 0xf8) goto switchD_0205fbb9_caseD_1000009;
                pcVar11 = str_020c5fce;
              }
            }
          }
          else if ((int)local_44 < 0x10000012) {
            if (local_44 == 0x10000f8) {
              pcVar11 = str_020c5fda;
            }
            else {
              if (local_44 != 0x10000008) goto switchD_0205fbb9_caseD_1000009;
              pcVar11 = str_020c5f98;
            }
          }
          else if (local_44 == 0x10000012) {
            pcVar11 = str_020c5fbe;
          }
          else if (local_44 == 0x11000008) {
            pcVar11 = str_020c5f9f;
          }
          else {
            if (local_44 != 0x11000012) goto switchD_0205fbb9_caseD_1000009;
            pcVar11 = str_020c5fc6;
          }
          uVar6 = recovered_2002270((char *)&local_144);
          if (uVar6 + 1 < 0x100) {
            cVar2 = *pcVar11;
            if (cVar2 != '\0') {
              do {
                pcVar11 = pcVar11 + 1;
                *(char *)((int)&local_144 + uVar6) = cVar2;
                uVar6 = uVar6 + 1;
                cVar2 = *pcVar11;
                if (cVar2 == '\0') break;
              } while (uVar6 < 0xff);
            }
            *(undefined1 *)((int)&local_144 + uVar6) = 0;
          }
          if (param_3 == '\0') {
            pcVar11 = str_020c78e1;
LAB_0205fd93:
            pf_varargs_202ecc0__4__4_(param_4,param_5,pcVar11,(uint)local_344,(uint)&local_144);
          }
          else {
LAB_0205fd08:
            if (local_11 == '\0') {
              if ((*param_4 != '\0') && (uVar6 = recovered_2002270(param_4), uVar6 + 1 < param_5)) {
                (param_4 + uVar6)[0] = '\n';
                (param_4 + uVar6)[1] = '\0';
              }
              uVar6 = recovered_2002270(param_4);
              if (uVar6 + 1 < param_5) {
                if ((char)local_144 != '\0') {
                  pcVar11 = (char *)((int)&local_144 + 1);
                  uVar7 = uVar6;
                  cVar2 = (char)local_144;
                  do {
                    param_4[uVar7] = cVar2;
                    cVar2 = *pcVar11;
                    uVar6 = uVar7 + 1;
                    if (cVar2 == '\0') break;
                    uVar8 = uVar7 + 2;
                    pcVar11 = pcVar11 + 1;
                    uVar7 = uVar6;
                  } while (uVar8 < param_5);
                }
                param_4[uVar6] = '\0';
              }
            }
          }
          uVar9 = local_18;
        }
        else {
          uVar12 = local_160[1];
          uVar10 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          uVar12 = uVar10 - 0x41;
          if (0xffffffbf < uVar12) {
            local_20 = CONCAT31((int3)(uVar12 >> 8),1);
            uVar12 = 0;
            local_28 = local_160;
            local_24 = uVar10;
            do {
              uVar9 = recovered_2060040((byte *)local_28,uVar8,uVar12,&local_44);
              if ((char)uVar9 == '\0') goto LAB_0205fc13;
              if ((int)local_44 < 0x10000f8) {
                switch((uintptr_t)(local_44)) {
                case 7:
                  pcVar11 = &DAT_020c5f80;
                  break;
                case 8:
                  pcVar11 = &DAT_020c5f8c;
                  break;
                case 9:
                case 10:
                case 0xb:
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                case 0x11:
switchD_0205fa1d_caseD_1000009:
                  pcVar11 = str_020c5bb8;
                  break;
                case 0xc:
                  pcVar11 = str_020c77df;
                  if ((char)local_40 != '\t') {
                    pcVar11 = &DAT_020c5fa8;
                  }
                  break;
                case 0x12:
                  pcVar11 = &DAT_020c77e5;
                  break;
                default:
                  switch((uintptr_t)(local_44)) {
                  case 0x1000007:
                    pcVar11 = str_020c5f85;
                    break;
                  case 0x1000008:
                    pcVar11 = str_020c5f91;
                    break;
                  case 0x1000009:
                  case 0x100000a:
                  case 0x100000b:
                  case 0x100000d:
                  case 0x100000e:
                  case 0x100000f:
                  case 0x1000010:
                  case 0x1000011:
                    goto switchD_0205fa1d_caseD_1000009;
                  case 0x100000c:
                    pcVar11 = str_020c5fac;
                    break;
                  case 0x1000012:
                    pcVar11 = &DAT_020c5fb8;
                    break;
                  default:
                    if (local_44 != 0xf8) goto switchD_0205fa1d_caseD_1000009;
                    pcVar11 = str_020c5fce;
                  }
                }
              }
              else if ((int)local_44 < 0x10000012) {
                if (local_44 == 0x10000f8) {
                  pcVar11 = str_020c5fda;
                }
                else {
                  if (local_44 != 0x10000008) goto switchD_0205fa1d_caseD_1000009;
                  pcVar11 = str_020c5f98;
                }
              }
              else if (local_44 == 0x10000012) {
                pcVar11 = str_020c5fbe;
              }
              else if (local_44 == 0x11000008) {
                pcVar11 = str_020c5f9f;
              }
              else {
                if (local_44 != 0x11000012) goto switchD_0205fa1d_caseD_1000009;
                pcVar11 = str_020c5fc6;
              }
              uVar4 = recovered_2002270((char *)&local_144);
              uVar10 = uVar4 + 1;
              if (uVar10 < 0x100) {
                if ((local_20 & 1) == 0) {
                  *(undefined2 *)((int)&local_144 + uVar4) = 0x20;
                  uVar5 = uVar4 + 2;
                  uVar4 = uVar10;
                  uVar10 = uVar5;
                }
                if (uVar10 < 0x100) {
                  cVar2 = *pcVar11;
                  uVar5 = uVar4;
                  if (cVar2 != '\0') {
                    do {
                      uVar4 = uVar10;
                      pcVar11 = pcVar11 + 1;
                      *(char *)((int)&local_144 + uVar5) = cVar2;
                      cVar2 = *pcVar11;
                      if (cVar2 == '\0') break;
                      uVar5 = uVar4;
                      uVar10 = uVar4 + 1;
                    } while (uVar4 < 0xff);
                  }
                }
                *(undefined1 *)((int)&local_144 + uVar4) = 0;
                local_20 = 0;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != local_24);
            uVar12 = local_24;
LAB_0205fc13:
            if (local_24 - 1 < uVar12) {
              in_ECX = local_1c;
              if (param_3 != '\0') goto LAB_0205fd08;
              pcVar11 = str_020c78b7;
              goto LAB_0205fd93;
            }
          }
LAB_0205f880:
          pf_varargs_202ecc0__4_(param_4,param_5,str_020c7891,(uint)local_344);
          uVar9 = 0;
          in_ECX = local_1c;
        }
        recovered_2001710(local_160);
      }
      local_30 = local_30 + 1;
    } while (local_30 != local_2c);
  }
  return uVar9;
}
#undef DAT_020c5f80
#undef DAT_020c5f8c
#undef DAT_020c5fa8
#undef DAT_020c5fb8
#undef DAT_020c77e5
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
#undef str_020c77df
#undef str_020c7891
#undef str_020c78b7
#undef str_020c78e1
#undef cStack_145
#undef local_344
#undef local_160
#undef local_15c
#undef local_144
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
