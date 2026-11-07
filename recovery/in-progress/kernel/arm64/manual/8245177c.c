/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8245177c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;

  if ((param_1 != (char *)0x0) && (cVar2 = *param_1, cVar2 != '\0')) {
    if ((cVar2 == '-') || (cVar2 == '+')) {
      lVar6 = 1;
    }
    else {
      lVar6 = 0;
    }
    bVar4 = 0;
    pbVar7 = (byte *)(param_1 + lVar6);
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      pbVar8 = pbVar7 + 1;
      bVar1 = *pbVar7;
      if (bVar1 == 0) {
        return uVar9;
      }
      pbVar7 = pbVar8;
      uVar5 = 1;
    } while ((bVar1 - 0x30U < 10) ||
            (bVar3 = (bool)(bVar1 != 0x2e | bVar4), bVar4 = 1, uVar5 = uVar9, !bVar3));
  }
  return 0;
}
