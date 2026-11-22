/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020cc35b (*(uint8_t *)(0x20cc35bU))
#define local_70 (*(char (*)[64])(frame + 16))
#define local_30 (*(char * *)(frame + 80))
#define local_2c (*(char * *)(frame + 84))
#define local_28 (*(char * *)(frame + 88))
#define local_24 (*(char * *)(frame + 92))
#define local_20 (*(char * *)(frame + 96))
#define local_1c (*(int *)(frame + 100))
#define local_18 (*(char * *)(frame + 104))
#define local_11 (*(byte *)(frame + 111))


void recovered_2073030(int in_ECX,char *in_EDX,char *param_3,uint param_4,char *param_5,
                      char *param_6,char *param_7,char *param_8)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;

  if ((param_3 != (char *)0x0) && (*param_3 = '\0', in_EDX != (char *)0x0)) {
    local_2c = &DAT_020c5084;
    local_28 = &DAT_020c5084;
    if (param_8 != (char *)0x0) {
      local_28 = param_8;
    }
    local_24 = &DAT_020c5084;
    if (param_7 != (char *)0x0) {
      local_24 = param_7;
    }
    local_20 = &DAT_020c5084;
    if (param_6 != (char *)0x0) {
      local_20 = param_6;
    }
    if (param_5 != (char *)0x0) {
      local_2c = param_5;
    }
    cVar5 = *in_EDX;
    if (cVar5 != '\0') {
      local_30 = (char *)(in_ECX + 0xf9);
      iVar8 = 0;
      uVar4 = 0;
      local_1c = in_ECX;
      local_18 = in_EDX;
      do {
        uVar3 = uVar4 + 1;
        if (param_4 <= uVar3) {
          return;
        }
        if (cVar5 != '$') {
          iVar8 = iVar8 + 1;
          goto LAB_02073121;
        }
        cVar5 = in_EDX[1];
        switch((uintptr_t)(cVar5)) {
        case '$':
          pcVar7 = &DAT_020cc35b;
          break;
        case '%':
        case '&':
        case '\'':
        case ')':
        case '+':
        case ',':
        case '-':
        case '.':
        case '/':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '=':
        case '>':
        case '?':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
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
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
          goto switchD_02073105_caseD_25;
        case '(':
switchD_02073105_caseD_28:
          cVar1 = ')';
          if (cVar5 != '(') {
            cVar1 = '}';
          }
          iVar9 = iVar8 + 2;
          pcVar7 = (char *)0x0;
          uVar4 = 0;
          cVar5 = local_18[iVar8 + 2];
          while ((local_11 = cVar5 == cVar1, cVar5 != '\0' && (cVar5 != cVar1))) {
            if (uVar4 + 1 < 0x40) {
              local_70[uVar4] = cVar5;
              uVar4 = uVar4 + 1;
            }
            iVar8 = iVar9 + 1;
            iVar9 = iVar9 + 1;
            cVar5 = local_18[iVar8];
          }
          local_70[uVar4] = '\0';
          if (*(int *)(local_1c + 0x552c) != 0) {
            uVar4 = 0;
            pcVar7 = local_30;
            do {
              iVar8 = recovered_20022a0(pcVar7,local_70);
              if (iVar8 == 0) goto LAB_020731c7;
              uVar4 = uVar4 + 1;
              pcVar7 = pcVar7 + 0x1c1;
            } while (uVar4 < *(uint *)(local_1c + 0x552c));
            pcVar7 = (char *)0x0;
          }
LAB_020731c7:
          pcVar10 = &DAT_020c5084;
          if (pcVar7 != (char *)0x0) {
            pcVar10 = pcVar7 + 0x40;
          }
          uVar2 = recovered_2002270(param_3);
          cVar5 = *pcVar10;
          if (uVar2 + 1 < param_4 && cVar5 != '\0') {
            do {
              pcVar10 = pcVar10 + 1;
              param_3[uVar2] = cVar5;
              cVar5 = *pcVar10;
              uVar6 = uVar2 + 1;
              if (cVar5 == '\0') break;
              uVar4 = uVar2 + 2;
              uVar2 = uVar6;
            } while (uVar4 < param_4);
          }
          else {
            uVar6 = uVar2;
          }
          iVar8 = iVar9 + (uint)local_11;
          param_3[uVar6] = '\0';
          uVar3 = recovered_2002270(param_3);
          goto LAB_020730d1;
        case '*':
          pcVar7 = local_28;
          break;
        case '<':
          pcVar7 = local_20;
          break;
        case '@':
          pcVar7 = local_2c;
          break;
        case '^':
          pcVar7 = local_24;
          break;
        default:
          if (cVar5 == '{') goto switchD_02073105_caseD_28;
          if (cVar5 == '\0') {
            (param_3 + uVar4)[0] = '$';
            (param_3 + uVar4)[1] = '\0';
            return;
          }
          goto switchD_02073105_caseD_25;
        }
        uVar2 = recovered_2002270(param_3);
        cVar5 = *pcVar7;
        if (uVar2 + 1 < param_4 && cVar5 != '\0') {
          do {
            pcVar7 = pcVar7 + 1;
            param_3[uVar2] = cVar5;
            cVar5 = *pcVar7;
            uVar6 = uVar2 + 1;
            if (cVar5 == '\0') break;
            uVar4 = uVar2 + 2;
            uVar2 = uVar6;
          } while (uVar4 < param_4);
        }
        else {
          uVar6 = uVar2;
        }
        param_3[uVar6] = '\0';
        uVar3 = recovered_2002270(param_3);
        iVar8 = iVar8 + 2;
LAB_020730d1:
        in_EDX = local_18 + iVar8;
        cVar5 = local_18[iVar8];
        uVar4 = uVar3;
      } while (cVar5 != '\0');
    }
  }
  return;
switchD_02073105_caseD_25:
  iVar8 = iVar8 + 2;
LAB_02073121:
  param_3[uVar4] = cVar5;
  param_3[uVar4 + 1] = '\0';
  goto LAB_020730d1;
}
#undef DAT_020c5084
#undef DAT_020cc35b
#undef local_70
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
