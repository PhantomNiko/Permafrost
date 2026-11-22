/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_8243a008(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;

  if (param_2 != 0) {
    puVar3 = (undefined1 *)(param_2 + 8);
    pcVar7 = (char *)(param_1 + 7);
    lVar5 = -8;
    do {
      if (*pcVar7 != ' ') break;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + -1;
      pcVar7 = pcVar7 + -1;
    } while (lVar5 != 0);
    lVar9 = -lVar5;
    lVar6 = 3;
    do {
      if (*(char *)(param_1 + 7 + lVar6) != ' ') break;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    for (lVar8 = 0; -lVar8 != lVar5; lVar8 = lVar8 + 1) {
      bVar2 = *(byte *)(param_1 + lVar8);
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      *(byte *)(param_2 + lVar8) = bVar1;
    }
    if (lVar6 != 0) {
      *puVar3 = 0x2e;
      pbVar4 = (byte *)(param_1 + 8);
      lVar5 = param_2;
      for (lVar9 = -1; lVar5 = lVar5 + 1, lVar6 + lVar9 != -1; lVar9 = lVar9 + -1) {
        bVar2 = *pbVar4;
        bVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          bVar1 = bVar2;
        }
        *(byte *)(lVar5 + lVar8) = bVar1;
        pbVar4 = pbVar4 + 1;
      }
      lVar9 = lVar8 - lVar9;
    }
    *(undefined1 *)(param_2 + lVar9) = 0;
  }
  return (uint)param_1;
}
