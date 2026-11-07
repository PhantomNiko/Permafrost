/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a7b95 (*(char *)(0x20f92ecU))
#define DAT_020a7b96 (*(char *)(0x20f92edU))
#define DAT_020a7b97 (*(char *)(0x20f92eeU))
#define DAT_020a7b98 (*(char *)(0x20f92efU))
#define DAT_020a7b99 (*(uint8_t *)(0x20f92f0U))
#define DAT_020a7b9a (*(uint8_t *)(0x20f92f1U))
#define DAT_020a7b9b (*(uint8_t *)(0x20f92f2U))
#define DAT_020a7b9c (*(uint8_t *)(0x20f92f3U))
#define DAT_020a7b9d (*(uint8_t *)(0x20f92f4U))
#define DAT_020a7b9e (*(uint8_t *)(0x20f92f5U))
#define DAT_020a7ba0 (*(uint8_t *)(0x20f92f7U))
#define DAT_020a7ba1 (*(uint8_t *)(0x20f92f8U))
#define DAT_020a7ba2 (*(uint8_t *)(0x20f92f9U))
#define DAT_020a7ba3 (*(uint8_t *)(0x20f92faU))
#define DAT_020a7ba4 (*(uint8_t *)(0x20f92fbU))
#define DAT_020a7ba5 (*(uint8_t *)(0x20f92fcU))
#define str_020a7ba6 (*(char (*)[1])(0x20f154dU))
#define str_020a7bb3 (*(char (*)[1])(0x20f92fdU))
uchar recovered_20d3640(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  char cVar7;

  if (param_1 == (char *)0x0) {
    return '\0';
  }
  cVar2 = *param_1;
  cVar5 = str_020a7ba6[0];
  if (cVar2 == '\0') {
    pcVar3 = &DAT_020a7b99;
LAB_0208fcea:
    if (*pcVar3 == '\0') {
      return '\x01';
    }
    if (cVar2 == '\0') goto joined_r0x0208ff8e;
  }
  else {
    cVar7 = cVar2 + -0x20;
    if (0x19 < (byte)(cVar2 + 0x9fU)) {
      cVar7 = cVar2;
    }
    if (cVar7 == 'U') {
      cVar7 = param_1[1];
      cVar6 = DAT_020a7b95;
      if (cVar7 == '\0') {
joined_r0x0208fd0a:
        if (cVar6 == '\0') {
          return '\x01';
        }
      }
      else {
        cVar6 = cVar7 + -0x20;
        if (0x19 < (byte)(cVar7 + 0x9fU)) {
          cVar6 = cVar7;
        }
        if (cVar6 == 'E') {
          cVar7 = param_1[2];
          cVar6 = DAT_020a7b96;
          if (cVar7 != '\0') {
            cVar6 = cVar7 + -0x20;
            if (0x19 < (byte)(cVar7 + 0x9fU)) {
              cVar6 = cVar7;
            }
            if (cVar6 != 'F') goto code_r0x0208fd3b;
            cVar7 = param_1[3];
            cVar6 = DAT_020a7b97;
            if (cVar7 != '\0') {
              cVar6 = cVar7 + -0x20;
              if (0x19 < (byte)(cVar7 + 0x9fU)) {
                cVar6 = cVar7;
              }
              if ((cVar6 != 'I') || (cVar6 = DAT_020a7b98, param_1[4] != '\0'))
              goto code_r0x0208fd3b;
            }
          }
          goto joined_r0x0208fd0a;
        }
      }
code_r0x0208fd3b:
      cVar7 = param_1[1];
      if (cVar7 == '\0') {
        pcVar3 = &DAT_020a7b9a;
      }
      else {
        cVar6 = cVar7 + -0x20;
        if (0x19 < (byte)(cVar7 + 0x9fU)) {
          cVar6 = cVar7;
        }
        if (cVar6 != 'B') goto LAB_0208fde1;
        cVar7 = param_1[2];
        if (cVar7 == '\0') {
          pcVar3 = &DAT_020a7b9b;
        }
        else {
          cVar6 = cVar7 + -0x20;
          if (0x19 < (byte)(cVar7 + 0x9fU)) {
            cVar6 = cVar7;
          }
          if (cVar6 != 'O') goto LAB_0208fde1;
          cVar7 = param_1[3];
          if (cVar7 == '\0') {
            pcVar3 = &DAT_020a7b9c;
          }
          else {
            cVar6 = cVar7 + -0x20;
            if (0x19 < (byte)(cVar7 + 0x9fU)) {
              cVar6 = cVar7;
            }
            if (cVar6 != 'O') goto LAB_0208fde1;
            cVar7 = param_1[4];
            if (cVar7 == '\0') {
              pcVar3 = &DAT_020a7b9d;
            }
            else {
              cVar6 = cVar7 + -0x20;
              if (0x19 < (byte)(cVar7 + 0x9fU)) {
                cVar6 = cVar7;
              }
              if ((cVar6 != 'T') || (param_1[5] != '\0')) goto LAB_0208fde1;
              pcVar3 = &DAT_020a7b9e;
            }
          }
        }
      }
      goto LAB_0208fcea;
    }
  }
LAB_0208fde1:
  cVar7 = cVar2;
  if ((byte)(cVar2 + 0x9fU) < 0x1a) {
    cVar7 = cVar2 + -0x20;
  }
  if (cVar7 == 'U') {
    cVar7 = param_1[1];
    if (cVar7 == '\0') {
      pcVar3 = &DAT_020a7ba0;
    }
    else {
      cVar6 = cVar7 + -0x20;
      if (0x19 < (byte)(cVar7 + 0x9fU)) {
        cVar6 = cVar7;
      }
      if (cVar6 != '-') goto LAB_0208ff35;
      cVar7 = param_1[2];
      if (cVar7 == '\0') {
        pcVar3 = &DAT_020a7ba1;
      }
      else {
        cVar6 = cVar7 + -0x20;
        if (0x19 < (byte)(cVar7 + 0x9fU)) {
          cVar6 = cVar7;
        }
        if (cVar6 != 'B') goto LAB_0208ff35;
        cVar7 = param_1[3];
        if (cVar7 == '\0') {
          pcVar3 = &DAT_020a7ba2;
        }
        else {
          cVar6 = cVar7 + -0x20;
          if (0x19 < (byte)(cVar7 + 0x9fU)) {
            cVar6 = cVar7;
          }
          if (cVar6 != 'O') goto LAB_0208ff35;
          cVar7 = param_1[4];
          if (cVar7 == '\0') {
            pcVar3 = &DAT_020a7ba3;
          }
          else {
            cVar6 = cVar7 + -0x20;
            if (0x19 < (byte)(cVar7 + 0x9fU)) {
              cVar6 = cVar7;
            }
            if (cVar6 != 'O') goto LAB_0208ff35;
            cVar7 = param_1[5];
            if (cVar7 == '\0') {
              pcVar3 = &DAT_020a7ba4;
            }
            else {
              cVar6 = cVar7 + -0x20;
              if (0x19 < (byte)(cVar7 + 0x9fU)) {
                cVar6 = cVar7;
              }
              if ((cVar6 != 'T') || (param_1[6] != '\0')) goto LAB_0208ff35;
              pcVar3 = &DAT_020a7ba5;
            }
          }
        }
      }
    }
    if (*pcVar3 == '\0') {
      return '\x01';
    }
    if (cVar2 == '\0') goto joined_r0x0208ff8e;
  }
LAB_0208ff35:
  lVar1 = 0;
  cVar5 = cVar2;
  do {
    lVar4 = lVar1;
    if (lVar4 == 0xc) goto LAB_0208ff90;
    cVar7 = cVar5 + -0x20;
    if (0x19 < (byte)(cVar5 + 0x9fU)) {
      cVar7 = cVar5;
    }
    cVar5 = str_020a7ba6[lVar4];
    cVar6 = cVar5 + -0x20;
    if (0x19 < (byte)(cVar5 + 0x9fU)) {
      cVar6 = cVar5;
    }
    if (cVar7 != cVar6) goto LAB_0208ff90;
    cVar5 = param_1[lVar4 + 1];
    lVar1 = lVar4 + 1;
  } while (cVar5 != '\0');
  cVar5 = str_020a7ba6[lVar4 + 1];
joined_r0x0208ff8e:
  if (cVar5 == '\0') {
    return '\x01';
  }
LAB_0208ff90:
  if (cVar2 == '\0') {
    pcVar3 = str_020a7bb3;
  }
  else {
    lVar1 = 0;
    do {
      lVar4 = lVar1;
      if (lVar4 == 0xd) {
        return '\0';
      }
      cVar5 = cVar2 + -0x20;
      if (0x19 < (byte)(cVar2 + 0x9fU)) {
        cVar5 = cVar2;
      }
      cVar2 = str_020a7bb3[lVar4];
      cVar7 = cVar2 + -0x20;
      if (0x19 < (byte)(cVar2 + 0x9fU)) {
        cVar7 = cVar2;
      }
      if (cVar5 != cVar7) {
        return '\0';
      }
      cVar2 = param_1[lVar4 + 1];
      lVar1 = lVar4 + 1;
    } while (cVar2 != '\0');
    pcVar3 = str_020a7bb3 + lVar4 + 1;
  }
  return *pcVar3 == '\0';
}
