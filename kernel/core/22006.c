#include "functions.h"
#undef DAT_0005683c
#define DAT_0005683c (*(uint8_t *)(0x5683cU))
#undef DAT_0005738e
#define DAT_0005738e (*(uint8_t *)(0x5738eU))
#undef _DAT_0005683c
#define _DAT_0005683c (*(float *)(0x5683cU))
#define local_1c (*(int *)(frame + 72))
#define local_18 (*(uint *)(frame + 76))
#define local_14 (*(char * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22006
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_22006(char *param_1,uint param_2,char *param_3,double *param_4)

{
  unsigned char frame[132] = {0};

  char *pcVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;

  local_14 = param_1;
  local_18 = param_2;
  local_1c = 0;
  if (param_2 != 0) {
    *param_1 = '\0';
  }
  do {
    cVar5 = *param_3;
    if (cVar5 == '%') {
      cVar5 = param_3[1];
      param_3 = param_3 + 1;
      if (cVar5 == '%') {
        if (1 < local_18) {
          *local_14 = '%';
LAB_00022069:
          local_14 = local_14 + 1;
          local_18 = local_18 - 1;
        }
      }
      else {
        while ((byte)(cVar5 - 0x30U) < 10) {
          pcVar1 = param_3 + 1;
          param_3 = param_3 + 1;
          cVar5 = *pcVar1;
        }
        if (cVar5 == '.') {
          do {
            cVar5 = param_3[1];
            param_3 = param_3 + 1;
          } while ((byte)(cVar5 - 0x30U) < 10);
        }
LAB_00022097:
        switch((uintptr_t)(cVar5)) {
        case 'c':
          if (1 < local_18) {
            *local_14 = *(char *)param_4;
            local_14 = local_14 + 1;
            local_18 = local_18 - 1;
          }
          param_4 = (double *)((int)param_4 + 4);
          break;
        case 'e':
        case 'g':
        case 'j':
        case 'k':
        case 'm':
        case 'n':
        case 'o':
        case 'q':
        case 'r':
        case 'v':
        case 'w':
        case 'y':
switchD_000220a2_caseD_65:
          if (local_18 < 2) break;
          *local_14 = '?';
          goto LAB_00022069;
        case 'f':
          dVar3 = *param_4;
          if (dVar3 < 0.0) {
            if (1 < local_18) {
              *local_14 = '-';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            local_1c = local_1c + 1;
            dVar3 = -dVar3;
          }
          recovered_222f7((int *)&local_14,&local_18,&local_1c,(int)ROUND(dVar3),10,'\0');
          if (1 < local_18) {
            *local_14 = '.';
            local_14 = local_14 + 1;
            local_18 = local_18 - 1;
          }
          param_4 = param_4 + 1;
          dVar3 = dVar3 - (double)(int)ROUND(dVar3);
          iVar7 = 6;
          while (bVar8 = iVar7 != 0, iVar7 = iVar7 + -1, bVar8) {
            dVar4 = (double)_DAT_0005683c;
            iVar2 = (int)ROUND(dVar3 * dVar4);
            if (1 < local_18) {
              *local_14 = (char)iVar2 + '0';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            dVar3 = dVar3 * dVar4 - (double)iVar2;
          }
          local_1c = local_1c + 7;
          goto LAB_00022074;
        case 'h':
        case 'l':
        case 't':
        case 'z':
          goto switchD_000220a2_caseD_68;
        case 'p':
          uVar6 = *(uint *)param_4;
          recovered_222b6((int *)&local_14,&local_18,&local_1c,&DAT_0005738e);
          cVar5 = '\0';
          uVar9 = 0x10;
          goto LAB_00022270;
        case 's':
          recovered_222b6((int *)&local_14,&local_18,&local_1c,*(char **)param_4);
          goto LAB_00022279;
        case 'u':
          cVar5 = '\0';
          uVar9 = 10;
          goto LAB_0002226b;
        case 'x':
          cVar5 = '\0';
LAB_0002225d:
          uVar9 = 0x10;
LAB_0002226b:
          uVar6 = *(uint *)param_4;
          goto LAB_00022270;
        default:
          if (cVar5 != 'I') {
            if (cVar5 == 'X') {
              cVar5 = '\x01';
              goto LAB_0002225d;
            }
            goto switchD_000220a2_caseD_65;
          }
        case 'd':
        case 'i':
          uVar6 = *(uint *)param_4;
          if ((int)uVar6 < 0) {
            if (1 < local_18) {
              *local_14 = '-';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            local_1c = local_1c + 1;
            uVar6 = -uVar6;
          }
          cVar5 = '\0';
          uVar9 = 10;
LAB_00022270:
          recovered_222f7((int *)&local_14,&local_18,&local_1c,uVar6,uVar9,cVar5);
LAB_00022279:
          param_4 = (double *)((int)param_4 + 4);
          goto LAB_00022074;
        }
      }
    }
    else {
      if (cVar5 == '\0') {
        if (param_2 != 0) {
          *local_14 = '\0';
        }
        return local_1c;
      }
      if (1 < local_18) {
        *local_14 = cVar5;
        local_14 = local_14 + 1;
        local_18 = local_18 - 1;
      }
    }
    local_1c = local_1c + 1;
LAB_00022074:
    param_3 = param_3 + 1;
  } while( true );
switchD_000220a2_caseD_68:
  cVar5 = param_3[1];
  param_3 = param_3 + 1;
  goto LAB_00022097;
}
