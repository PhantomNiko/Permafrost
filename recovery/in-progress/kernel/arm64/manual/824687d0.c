/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define auStack_58 (*(undefined4 (*)[4])(frame + 24))
#define uStack_34 (*(uint *)(frame + 60))
#define uStack_38 (*(uint *)(frame + 56))
#define uStack_3c (*(uint *)(frame + 52))
#define uStack_40 (*(uint *)(frame + 48))
#define uStack_48 (*(uint *)(frame + 40))
void recovered_824687d0(long param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 *puVar2;
  ulong uVar3;

  bVar1 = *(byte *)(param_1 + 4);
  puVar2 = recovered_82465e3c((uint)bVar1);
  if (puVar2 == (undefined4 *)0x0) {
LAB_40446034:
    uStack_48 = 0;
LAB_40446038:
    uStack_40 = 1;
  }
  else {
    uVar3 = recovered_82465e90((ulong)*(byte *)(puVar2 + 1),(ulong)(uint)puVar2[3],
                               (undefined8 *)auStack_58,0);
    if ((uVar3 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 4);
      goto LAB_40446034;
    }
    switch((uintptr_t)(auStack_58[0])) {
    case 1:
      bVar1 = *(byte *)(param_1 + 4);
      goto LAB_40446034;
    case 2:
      recovered_8244960c((uint)*(byte *)(param_1 + 4),uStack_38,1);
      recovered_8244960c((uint)*(byte *)(param_1 + 4),uStack_48,uStack_40);
      recovered_8244960c((uint)*(byte *)(param_1 + 4),uStack_3c,uStack_40);
      bVar1 = *(byte *)(param_1 + 4);
      uStack_48 = uStack_34;
      goto LAB_40446038;
    case 3:
    case 5:
      bVar1 = *(byte *)(param_1 + 4);
      break;
    default:
      goto switchD_4044601c_caseD_4;
    }
  }
  recovered_8244960c((uint)bVar1,uStack_48,uStack_40);
switchD_4044601c_caseD_4:
  return;
}
