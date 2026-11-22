/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a7711 (*(uint8_t *)(0x20f8de1U))
#define DAT_020a7712 (*(uint8_t *)(0x20f8de2U))
#define DAT_020a7713 (*(uint8_t *)(0x20f8de3U))
#define DAT_020a7714 (*(uint8_t *)(0x20f8de4U))
#define str_020a7715 (*(char (*)[1])(0x20f8de5U))
uint recovered_20d0e10(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  undefined8 in_RAX;
  long lVar3;
  char cVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;

  uVar2 = (uint)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  if (param_1 == (char *)0x0) {
    return uVar2;
  }
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    return uVar2;
  }
  cVar6 = cVar4 + -0x20;
  if (0x19 < (byte)(cVar4 + 0x9fU)) {
    cVar6 = cVar4;
  }
  if (cVar6 == 'W') {
    cVar6 = param_1[1];
    if (cVar6 == '\0') {
      pcVar5 = &DAT_020a7711;
    }
    else {
      cVar7 = cVar6 + -0x20;
      if (0x19 < (byte)(cVar6 + 0x9fU)) {
        cVar7 = cVar6;
      }
      if (cVar7 != 'S') goto LAB_0208d1ed;
      cVar6 = param_1[2];
      if (cVar6 == '\0') {
        pcVar5 = &DAT_020a7712;
      }
      else {
        cVar7 = cVar6 + -0x20;
        if (0x19 < (byte)(cVar6 + 0x9fU)) {
          cVar7 = cVar6;
        }
        if (cVar7 != 'H') goto LAB_0208d1ed;
        cVar6 = param_1[3];
        if (cVar6 == '\0') {
          pcVar5 = &DAT_020a7713;
        }
        else {
          cVar7 = cVar6 + -0x20;
          if (0x19 < (byte)(cVar6 + 0x9fU)) {
            cVar7 = cVar6;
          }
          if ((cVar7 != 'M') || (param_1[4] != '\0')) goto LAB_0208d1ed;
          pcVar5 = &DAT_020a7714;
        }
      }
    }
    if (*pcVar5 == '\0') {
      return uVar2;
    }
  }
LAB_0208d1ed:
  lVar1 = 0;
  while( true ) {
    lVar3 = lVar1;
    if (lVar3 == 10) {
      return 0;
    }
    cVar6 = cVar4 + -0x20;
    if (0x19 < (byte)(cVar4 + 0x9fU)) {
      cVar6 = cVar4;
    }
    cVar4 = str_020a7715[lVar3];
    cVar7 = cVar4 + -0x20;
    if (0x19 < (byte)(cVar4 + 0x9fU)) {
      cVar7 = cVar4;
    }
    if (cVar6 != cVar7) break;
    cVar4 = param_1[lVar3 + 1];
    lVar1 = lVar3 + 1;
    if (cVar4 == '\0') {
      return (uint)CONCAT71((int7)((ulong)(lVar3 + 1) >> 8),str_020a7715[lVar3 + 1] == '\0');
    }
  }
  return 0;
}
