/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a528 (*(uint8_t volatile *)(0x8248ad98U))
bool recovered_8240fe38(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (undefined8 *)0x0) {
LAB_40407ad8:
    bVar3 = true;
  }
  else {
    while ((puVar4 = param_1, bVar3 = puVar4 != (undefined8 *)0x0, puVar4 != param_2 &&
           (puVar4 != (undefined8 *)0x0))) {
      pcVar5 = (char *)puVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_40407ad8;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_40407ad8;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (undefined8 *)0x0;
      if ((undefined *)*puVar4 == &DAT_4045a528) {
        param_1 = (undefined8 *)puVar4[2];
      }
    }
  }
  return bVar3;
}
