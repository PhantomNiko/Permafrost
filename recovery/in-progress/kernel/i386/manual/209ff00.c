/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_209ff00(uint incoming_ecx,uint incoming_edx,uint param_3,uint param_4,byte param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  undefined1 *puVar8;

  puVar3 = recovered_2012220();
  uVar7 = puVar3[3];
  puVar3 = recovered_2012220();
  piVar5 = (int *)puVar3[4];
  puVar3 = recovered_2012220();
  iVar1 = puVar3[2];
  puVar3 = recovered_2012220();
  iVar2 = puVar3[5];
  piVar4 = recovered_2012220();
  if ((((*piVar4 != 0 || piVar4[1] != 0) && (iVar1 != 0)) && (7 < iVar2 + 7U)) &&
     ((incoming_ecx < uVar7 && (piVar4 = piVar5, incoming_edx < piVar5)))) {
    uVar7 = iVar2 + 7U >> 3;
    piVar5 = recovered_2012220();
    puVar8 = (undefined1 *)(incoming_ecx * uVar7 + iVar1 * incoming_edx + *piVar5);
    piVar4 = (int *)recovered_204bbf0(param_3 & 0xff,param_4 & 0xff,param_5);
    bVar6 = 0;
    do {
      *puVar8 = (char)((uint)piVar4 >> (bVar6 & 0x1f));
      puVar8 = puVar8 + 1;
      bVar6 = bVar6 + 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return (uint)piVar4;
}
