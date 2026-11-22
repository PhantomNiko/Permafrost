/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_82441108(long param_1,ulong param_2,int param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;

  puVar4 = (ulong *)(param_2 & 0xffffffff);
  if (param_3 == 2) {
    uVar5 = (uint)*(byte *)(param_1 + 5);
    uVar2 = recovered_8243faf0((uint *)puVar4,uVar5);
    uVar3 = *(int *)(param_1 + 8) + (int)uVar2;
  }
  else {
    if (param_3 != 1) {
      recovered_8243b738(param_4,0xa0);
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 5);
    uVar5 = (uint)bVar1;
    uVar3 = *(uint *)(param_1 + 8);
    if (*(char *)(param_1 + 4) == '\x01') {
      uVar2 = recovered_8243fb00(puVar4,uVar5);
      recovered_824411b0(puVar4,uVar2 + uVar3,(uint)bVar1);
      return 1;
    }
    uVar2 = recovered_8243faf0((uint *)puVar4,uVar5);
    uVar3 = uVar3 + (int)uVar2;
  }
  recovered_824411bc((undefined1 *)puVar4,uVar3,uVar5);
  return 1;
}
