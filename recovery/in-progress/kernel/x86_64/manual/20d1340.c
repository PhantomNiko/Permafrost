/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a2ea0 (*(char *)(0x20ecfd8U))
#define DAT_020a2ea1 (*(char *)(0x20ecfd9U))
#define DAT_020a2ea2 (*(char *)(0x20ecfdaU))
#define DAT_020a74fb (*(uint8_t *)(0x20f8b9dU))
#define DAT_020a74fc (*(uint8_t *)(0x20f8b9eU))
#define DAT_020a74fd (*(uint8_t *)(0x20f8b9fU))
#define DAT_020a74fe (*(uint8_t *)(0x20f8ba0U))
#define DAT_020a74ff (*(uint8_t *)(0x20f8ba1U))
#define str_020a775d (*(char (*)[1])(0x20f8e2dU))
#define str_020a7767 (*(char (*)[1])(0x20f8e37U))
#define str_020a7774 (*(char (*)[1])(0x20f8e44U))
#define str_020a7781 (*(char (*)[1])(0x20f8e51U))
uint recovered_20d1340(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  char cVar8;

  if (param_1 == (char *)0x0) {
    return 0;
  }
  cVar2 = *param_1;
  cVar6 = str_020a7767[0];
  if (cVar2 == '\0') {
    pcVar4 = &DAT_020a74fb;
LAB_0208d6fc:
    if (*pcVar4 == '\0') {
      return 1;
    }
    if (cVar2 == '\0') goto joined_r0x0208da1c;
  }
  else {
    cVar8 = cVar2 + -0x20;
    if (0x19 < (byte)(cVar2 + 0x9fU)) {
      cVar8 = cVar2;
    }
    if (cVar8 == 'H') {
      cVar8 = param_1[1];
      cVar7 = DAT_020a2ea0;
      if (cVar8 == '\0') {
joined_r0x0208d72d:
        if (cVar7 == '\0') {
          return 1;
        }
      }
      else {
        cVar7 = cVar8 + -0x20;
        if (0x19 < (byte)(cVar8 + 0x9fU)) {
          cVar7 = cVar8;
        }
        if (cVar7 == 'F') {
          cVar8 = param_1[2];
          cVar7 = DAT_020a2ea1;
          if (cVar8 != '\0') {
            cVar7 = cVar8 + -0x20;
            if (0x19 < (byte)(cVar8 + 0x9fU)) {
              cVar7 = cVar8;
            }
            if ((cVar7 != 'S') || (cVar7 = DAT_020a2ea2, param_1[3] != '\0')) goto code_r0x0208d738;
          }
          goto joined_r0x0208d72d;
        }
      }
code_r0x0208d738:
      cVar8 = param_1[1];
      if (cVar8 == '\0') {
        pcVar4 = &DAT_020a74fc;
      }
      else {
        cVar7 = cVar8 + -0x20;
        if (0x19 < (byte)(cVar8 + 0x9fU)) {
          cVar7 = cVar8;
        }
        if (cVar7 != 'F') goto LAB_0208d7b7;
        cVar8 = param_1[2];
        if (cVar8 == '\0') {
          pcVar4 = &DAT_020a74fd;
        }
        else {
          cVar7 = cVar8 + -0x20;
          if (0x19 < (byte)(cVar8 + 0x9fU)) {
            cVar7 = cVar8;
          }
          if (cVar7 != 'S') goto LAB_0208d7b7;
          cVar8 = param_1[3];
          if (cVar8 == '\0') {
            pcVar4 = &DAT_020a74fe;
          }
          else {
            cVar7 = cVar8 + -0x20;
            if (0x19 < (byte)(cVar8 + 0x9fU)) {
              cVar7 = cVar8;
            }
            if ((cVar7 != '+') || (param_1[4] != '\0')) goto LAB_0208d7b7;
            pcVar4 = &DAT_020a74ff;
          }
        }
      }
      goto LAB_0208d6fc;
    }
  }
LAB_0208d7b7:
  cVar8 = cVar2;
  if ((byte)(cVar2 + 0x9fU) < 0x1a) {
    cVar8 = cVar2 + -0x20;
  }
  if (cVar8 == 'A') {
    cVar8 = param_1[1];
    if (cVar8 == '\0') {
      pcVar4 = str_020a775d + 1;
    }
    else {
      cVar7 = cVar8 + -0x20;
      if (0x19 < (byte)(cVar8 + 0x9fU)) {
        cVar7 = cVar8;
      }
      if (cVar7 != 'P') goto LAB_0208d9a6;
      cVar8 = param_1[2];
      if (cVar8 == '\0') {
        pcVar4 = str_020a775d + 2;
      }
      else {
        cVar7 = cVar8 + -0x20;
        if (0x19 < (byte)(cVar8 + 0x9fU)) {
          cVar7 = cVar8;
        }
        if (cVar7 != 'P') goto LAB_0208d9a6;
        cVar8 = param_1[3];
        if (cVar8 == '\0') {
          pcVar4 = str_020a775d + 3;
        }
        else {
          cVar7 = cVar8 + -0x20;
          if (0x19 < (byte)(cVar8 + 0x9fU)) {
            cVar7 = cVar8;
          }
          if (cVar7 != 'L') goto LAB_0208d9a6;
          cVar8 = param_1[4];
          if (cVar8 == '\0') {
            pcVar4 = str_020a775d + 4;
          }
          else {
            cVar7 = cVar8 + -0x20;
            if (0x19 < (byte)(cVar8 + 0x9fU)) {
              cVar7 = cVar8;
            }
            if (cVar7 != 'E') goto LAB_0208d9a6;
            cVar8 = param_1[5];
            if (cVar8 == '\0') {
              pcVar4 = str_020a775d + 5;
            }
            else {
              cVar7 = cVar8 + -0x20;
              if (0x19 < (byte)(cVar8 + 0x9fU)) {
                cVar7 = cVar8;
              }
              if (cVar7 != '_') goto LAB_0208d9a6;
              cVar8 = param_1[6];
              if (cVar8 == '\0') {
                pcVar4 = str_020a775d + 6;
              }
              else {
                cVar7 = cVar8 + -0x20;
                if (0x19 < (byte)(cVar8 + 0x9fU)) {
                  cVar7 = cVar8;
                }
                if (cVar7 != 'H') goto LAB_0208d9a6;
                cVar8 = param_1[7];
                if (cVar8 == '\0') {
                  pcVar4 = str_020a775d + 7;
                }
                else {
                  cVar7 = cVar8 + -0x20;
                  if (0x19 < (byte)(cVar8 + 0x9fU)) {
                    cVar7 = cVar8;
                  }
                  if (cVar7 != 'F') goto LAB_0208d9a6;
                  cVar8 = param_1[8];
                  if (cVar8 == '\0') {
                    pcVar4 = str_020a775d + 8;
                  }
                  else {
                    cVar7 = cVar8 + -0x20;
                    if (0x19 < (byte)(cVar8 + 0x9fU)) {
                      cVar7 = cVar8;
                    }
                    if ((cVar7 != 'S') || (param_1[9] != '\0')) goto LAB_0208d9a6;
                    pcVar4 = str_020a775d + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (*pcVar4 == '\0') {
      return 1;
    }
    if (cVar2 == '\0') goto joined_r0x0208da1c;
  }
LAB_0208d9a6:
  lVar1 = 0;
  cVar6 = cVar2;
  do {
    lVar5 = lVar1;
    if (lVar5 == 0xc) goto LAB_0208da1e;
    cVar8 = cVar6 + -0x20;
    if (0x19 < (byte)(cVar6 + 0x9fU)) {
      cVar8 = cVar6;
    }
    cVar6 = str_020a7767[lVar5];
    cVar7 = cVar6 + -0x20;
    if (0x19 < (byte)(cVar6 + 0x9fU)) {
      cVar7 = cVar6;
    }
    if (cVar8 != cVar7) goto LAB_0208da1e;
    cVar6 = param_1[lVar5 + 1];
    lVar1 = lVar5 + 1;
  } while (cVar6 != '\0');
  cVar6 = str_020a7767[lVar5 + 1];
joined_r0x0208da1c:
  if (cVar6 != '\0') {
LAB_0208da1e:
    cVar6 = str_020a7774[0];
    if (cVar2 != '\0') {
      lVar1 = 0;
      do {
        lVar5 = lVar1;
        if (lVar5 == 0xc) goto LAB_0208da8c;
        cVar6 = cVar2 + -0x20;
        if (0x19 < (byte)(cVar2 + 0x9fU)) {
          cVar6 = cVar2;
        }
        cVar2 = str_020a7774[lVar5];
        cVar8 = cVar2 + -0x20;
        if (0x19 < (byte)(cVar2 + 0x9fU)) {
          cVar8 = cVar2;
        }
        if (cVar6 != cVar8) goto LAB_0208da8c;
        cVar2 = param_1[lVar5 + 1];
        lVar1 = lVar5 + 1;
      } while (cVar2 != '\0');
      cVar6 = str_020a7774[lVar5 + 1];
    }
    if (cVar6 != '\0') {
LAB_0208da8c:
      uVar3 = recovered_206eb80(param_1,str_020a7781);
      return uVar3;
    }
  }
  return 1;
}
