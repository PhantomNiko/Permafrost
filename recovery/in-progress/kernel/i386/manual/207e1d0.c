/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define local_14 (*(char * *)(frame + 60))
#define local_18 (*(int * *)(frame + 56))
#define local_1c (*(int * *)(frame + 52))
#define local_20 (*(int * *)(frame + 48))
#define local_24 (*(ulong *)(frame + 44))
#define local_28 (*(void * *)(frame + 40))
#define local_2c (*(void * *)(frame + 36))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_34 (*(undefined4 *)(frame + 28))
#define local_38 (*(undefined4 *)(frame + 24))
undefined4 recovered_207e1d0(undefined4 *incoming_ecx,undefined4 *incoming_edx)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;
  int iVar3;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint incoming_edx_00;
  undefined4 *extraout_EDX_01 = 0;
  undefined4 *extraout_EDX_02 = 0;
  undefined4 *extraout_EDX_03 = 0;
  void *unaff_EBX;
  undefined4 *puVar4;
  byte bVar5;

  bVar5 = 0;
  if (incoming_edx == (undefined4 *)0x0 || incoming_ecx == (undefined4 *)0x0) {
    return 0;
  }
  local_2c = (void *)0x0;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_38 = *incoming_edx;
  local_34 = incoming_edx[1];
  local_30 = incoming_edx[2];
  switch((uintptr_t)(local_38)) {
  case 3:
    local_14 = &DAT_0208e2dc;
    if ((char *)incoming_edx[3] != (char *)0x0) {
      local_14 = (char *)incoming_edx[3];
    }
    uVar1 = recovered_2002270(local_14);
    unaff_EBX = recovered_2001650(uVar1 + 1);
    if (unaff_EBX == (void *)0x0) {
      return 0;
    }
    incoming_edx_00 = extraout_EDX;
    if (uVar1 != 0) {
      recovered_2001b70(unaff_EBX,local_14,uVar1);
      incoming_edx_00 = extraout_EDX_00;
    }
    *(undefined1 *)((int)unaff_EBX + uVar1) = 0;
    recovered_2043a90(&local_38,incoming_edx_00);
    local_38 = 3;
    incoming_edx = extraout_EDX_01;
    local_2c = unaff_EBX;
    break;
  case 4:
    local_14 = (char *)incoming_edx[4];
    uVar1 = incoming_edx[5];
    unaff_EBX = (void *)0x0;
    if (local_14 == (char *)0x0 && uVar1 != 0) {
      return 0;
    }
    if (uVar1 != 0) {
      unaff_EBX = recovered_2001650(uVar1);
      if (unaff_EBX == (void *)0x0) {
        return 0;
      }
      recovered_2001b70(unaff_EBX,local_14,uVar1);
      incoming_edx = extraout_EDX_02;
    }
    recovered_2043a90(&local_38,(uint)incoming_edx);
    local_38 = 4;
    incoming_edx = extraout_EDX_03;
    local_28 = unaff_EBX;
    local_24 = uVar1;
    break;
  case 7:
    piVar2 = (int *)incoming_edx[6];
    local_20 = piVar2;
    if (piVar2 == (int *)0x0) break;
    goto LAB_02053f87;
  case 8:
    piVar2 = (int *)incoming_edx[7];
    local_1c = piVar2;
    goto joined_r0x02053fae;
  case 9:
    piVar2 = (int *)incoming_edx[8];
    local_18 = piVar2;
joined_r0x02053fae:
    if (piVar2 != (int *)0x0) {
LAB_02053f87:
      *piVar2 = *piVar2 + 1;
    }
  }
  recovered_2043a90(incoming_ecx,(uint)incoming_edx);
  puVar4 = &local_38;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *incoming_ecx = *puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    incoming_ecx = incoming_ecx + (uint)bVar5 * -2 + 1;
  }
  return CONCAT31((int3)((uint)unaff_EBX >> 8),1);
}
