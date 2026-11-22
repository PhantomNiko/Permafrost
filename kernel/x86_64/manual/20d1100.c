/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a7734 (*(char *)(0x20f8e04U))
#define DAT_020a7735 (*(char *)(0x20f8e05U))
#define DAT_020a7736 (*(char *)(0x20f8e06U))
#define DAT_020a7737 (*(char *)(0x20f8e07U))
#define str_020a7738 (*(char (*)[1])(0x20f8e08U))
#define str_020a7745 (*(char (*)[1])(0x20f8e15U))
#define str_020a7752 (*(char (*)[1])(0x20f8e22U))
uchar recovered_20d1100(char *param_1)

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
  cVar5 = str_020a7738[0];
  if (cVar2 == '\0') goto joined_r0x0208d4d3;
  cVar5 = cVar2 + -0x20;
  if (0x19 < (byte)(cVar2 + 0x9fU)) {
    cVar5 = cVar2;
  }
  if (cVar5 == 'P') {
    cVar5 = param_1[1];
    cVar6 = DAT_020a7734;
    if (cVar5 != '\0') {
      cVar6 = cVar5 + -0x20;
      if (0x19 < (byte)(cVar5 + 0x9fU)) {
        cVar6 = cVar5;
      }
      if (cVar6 != 'R') goto LAB_0208d510;
      cVar5 = param_1[2];
      cVar6 = DAT_020a7735;
      if (cVar5 != '\0') {
        cVar6 = cVar5 + -0x20;
        if (0x19 < (byte)(cVar5 + 0x9fU)) {
          cVar6 = cVar5;
        }
        if (cVar6 != 'E') goto LAB_0208d510;
        cVar5 = param_1[3];
        cVar6 = DAT_020a7736;
        if (cVar5 != '\0') {
          cVar6 = cVar5 + -0x20;
          if (0x19 < (byte)(cVar5 + 0x9fU)) {
            cVar6 = cVar5;
          }
          if ((cVar6 != 'P') || (cVar6 = DAT_020a7737, param_1[4] != '\0')) goto LAB_0208d510;
        }
      }
    }
    if (cVar6 == '\0') {
      return '\x01';
    }
  }
LAB_0208d510:
  lVar1 = 0;
  cVar5 = cVar2;
  do {
    lVar4 = lVar1;
    if (lVar4 == 0xc) goto LAB_0208d570;
    cVar6 = cVar5 + -0x20;
    if (0x19 < (byte)(cVar5 + 0x9fU)) {
      cVar6 = cVar5;
    }
    cVar5 = str_020a7738[lVar4];
    cVar7 = cVar5 + -0x20;
    if (0x19 < (byte)(cVar5 + 0x9fU)) {
      cVar7 = cVar5;
    }
    if (cVar6 != cVar7) goto LAB_0208d570;
    cVar5 = param_1[lVar4 + 1];
    lVar1 = lVar4 + 1;
  } while (cVar5 != '\0');
  cVar5 = str_020a7738[lVar4 + 1];
joined_r0x0208d4d3:
  if (cVar5 != '\0') {
LAB_0208d570:
    cVar5 = str_020a7745[0];
    if (cVar2 != '\0') {
      lVar1 = 0;
      cVar5 = cVar2;
      do {
        lVar4 = lVar1;
        if (lVar4 == 0xc) goto LAB_0208d5e0;
        cVar6 = cVar5 + -0x20;
        if (0x19 < (byte)(cVar5 + 0x9fU)) {
          cVar6 = cVar5;
        }
        cVar5 = str_020a7745[lVar4];
        cVar7 = cVar5 + -0x20;
        if (0x19 < (byte)(cVar5 + 0x9fU)) {
          cVar7 = cVar5;
        }
        if (cVar6 != cVar7) goto LAB_0208d5e0;
        cVar5 = param_1[lVar4 + 1];
        lVar1 = lVar4 + 1;
      } while (cVar5 != '\0');
      cVar5 = str_020a7745[lVar4 + 1];
    }
    if (cVar5 != '\0') {
LAB_0208d5e0:
      if (cVar2 == '\0') {
        pcVar3 = str_020a7752;
      }
      else {
        lVar1 = 0;
        do {
          lVar4 = lVar1;
          if (lVar4 == 10) {
            return '\0';
          }
          cVar5 = cVar2 + -0x20;
          if (0x19 < (byte)(cVar2 + 0x9fU)) {
            cVar5 = cVar2;
          }
          cVar2 = str_020a7752[lVar4];
          cVar6 = cVar2 + -0x20;
          if (0x19 < (byte)(cVar2 + 0x9fU)) {
            cVar6 = cVar2;
          }
          if (cVar5 != cVar6) {
            return '\0';
          }
          cVar2 = param_1[lVar4 + 1];
          lVar1 = lVar4 + 1;
        } while (cVar2 != '\0');
        pcVar3 = str_020a7752 + lVar4 + 1;
      }
      return *pcVar3 == '\0';
    }
  }
  return '\x01';
}
