/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_34 (*(int (*)[9])(frame + 28))
undefined4 recovered_2086910(int *incoming_ecx,uint incoming_edx,int param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 extraout_EDX = 0;
  uint incoming_edx_00;
  undefined4 unaff_EBX = 0;
  int *piVar4;
  byte bVar5;

  bVar5 = 0;
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[8] = 0;
  if (param_3 != 0) {
    uVar1 = recovered_2084d80(local_34,(char *)incoming_edx);
    bVar3 = local_34[0] == 9 & (byte)uVar1;
    incoming_edx = CONCAT31((int3)((uint)extraout_EDX >> 8),bVar3);
    if ((bVar3 & local_34[8] != 0) != 0) {
      *(undefined1 *)(local_34[8] + 0xb) = 1;
      uVar1 = recovered_207e1d0((undefined4 *)(local_34[8] + 0x14),(undefined4 *)param_3);
      incoming_edx = incoming_edx_00;
      if ((char)uVar1 != '\0') {
        uVar1 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
        if (incoming_ecx == (int *)0x0) {
          return uVar1;
        }
        recovered_2043a90(incoming_ecx,incoming_edx_00);
        piVar4 = local_34;
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *incoming_ecx = *piVar4;
          piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
          incoming_ecx = incoming_ecx + (uint)bVar5 * -2 + 1;
        }
        return uVar1;
      }
    }
  }
  recovered_2043a90(local_34,incoming_edx);
  return 0;
}
