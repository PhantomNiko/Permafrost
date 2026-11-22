/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a7721 (*(char *)(0x20f8df1U))
#define DAT_020a7722 (*(char *)(0x20f8df2U))
#define DAT_020a7723 (*(char *)(0x20f8df3U))
#define DAT_020a7724 (*(uint8_t *)(0x20f8df4U))
#define DAT_020a7725 (*(uint8_t *)(0x20f8df5U))
#define DAT_020a7726 (*(uint8_t *)(0x20f8df6U))
#define DAT_020a7727 (*(uint8_t *)(0x20f8df7U))
#define str_020a7728 (*(char (*)[1])(0x20f8df8U))
uchar recovered_20d0f50(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;

  if (param_1 == (char *)0x0) {
    return '\0';
  }
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    pcVar4 = &DAT_020a7724;
LAB_0208d2f3:
    if (*pcVar4 == '\0') {
      return '\x01';
    }
    if (cVar1 == '\0') {
      pcVar4 = str_020a7728;
      goto LAB_0208d3c7;
    }
  }
  else {
    cVar3 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar3 = cVar1;
    }
    if (cVar3 == 'E') {
      cVar3 = param_1[1];
      cVar6 = DAT_020a7721;
      if (cVar3 == '\0') {
joined_r0x0208d316:
        if (cVar6 == '\0') {
          return '\x01';
        }
      }
      else {
        cVar6 = cVar3 + -0x20;
        if (0x19 < (byte)(cVar3 + 0x9fU)) {
          cVar6 = cVar3;
        }
        if (cVar6 == 'F') {
          cVar3 = param_1[2];
          cVar6 = DAT_020a7722;
          if (cVar3 != '\0') {
            cVar6 = cVar3 + -0x20;
            if (0x19 < (byte)(cVar3 + 0x9fU)) {
              cVar6 = cVar3;
            }
            if ((cVar6 != 'I') || (cVar6 = DAT_020a7723, param_1[3] != '\0')) goto code_r0x0208d321;
          }
          goto joined_r0x0208d316;
        }
      }
code_r0x0208d321:
      cVar3 = param_1[1];
      if (cVar3 == '\0') {
        pcVar4 = &DAT_020a7725;
      }
      else {
        cVar6 = cVar3 + -0x20;
        if (0x19 < (byte)(cVar3 + 0x9fU)) {
          cVar6 = cVar3;
        }
        if (cVar6 != 'S') goto LAB_0208d373;
        cVar3 = param_1[2];
        if (cVar3 == '\0') {
          pcVar4 = &DAT_020a7726;
        }
        else {
          cVar6 = cVar3 + -0x20;
          if (0x19 < (byte)(cVar3 + 0x9fU)) {
            cVar6 = cVar3;
          }
          if ((cVar6 != 'P') || (param_1[3] != '\0')) goto LAB_0208d373;
          pcVar4 = &DAT_020a7727;
        }
      }
      goto LAB_0208d2f3;
    }
  }
LAB_0208d373:
  lVar2 = 0;
  do {
    lVar5 = lVar2;
    if (lVar5 == 10) {
      return '\0';
    }
    cVar3 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar3 = cVar1;
    }
    cVar1 = str_020a7728[lVar5];
    cVar6 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar6 = cVar1;
    }
    if (cVar3 != cVar6) {
      return '\0';
    }
    cVar1 = param_1[lVar5 + 1];
    lVar2 = lVar5 + 1;
  } while (cVar1 != '\0');
  pcVar4 = str_020a7728 + lVar5 + 1;
LAB_0208d3c7:
  return *pcVar4 == '\0';
}
