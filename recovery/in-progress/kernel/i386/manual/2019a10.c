/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b93ac (*(uint32_t volatile *)(0x2130240U))
#define iStack_24 (*(int *)(frame + 28))
#define uStack_20 (*(undefined4 *)(frame + 32))
#define uStack_28 (*(undefined4 *)(frame + 24))
ulonglong recovered_2019a10(uint in_EDX,int in_stack_00000004)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *extraout_ECX = 0;
  int *incoming_ecx;

  puVar2 = (undefined4 *)DAT_020b93ac;
  if (puVar2 != (undefined4 *)0x0) {
    DAT_020b93ac = *puVar2;
  }
  recovered_2019a30(in_stack_00000004,in_EDX);
  incoming_ecx = (int *)DAT_020b93ac;
  if (incoming_ecx != (int *)0x0) {
    piVar1 = (int *)extraout_ECX[3];
    do {
      if (incoming_ecx == piVar1) {
        incoming_ecx[2] = (int)extraout_ECX;
        incoming_ecx[3] = extraout_ECX[5];
        iVar3 = extraout_ECX[4];
LAB_0200d5bb:
        incoming_ecx[1] = iVar3;
                    /* WARNING: Subroutine does not return */
        recovered_2019410((int)incoming_ecx);
      }
      uStack_20 = 0;
      iStack_24 = 0;
      uStack_28 = 0;
      recovered_201a270((int)incoming_ecx,(byte *)*extraout_ECX,(undefined2 *)&uStack_28);
      if (((char)uStack_28 == '\x01') && (PF_PART1(uStack_28, 1) == '\x01')) {
        incoming_ecx[2] = (int)extraout_ECX;
        incoming_ecx[3] = 0;
        iVar3 = iStack_24;
        goto LAB_0200d5bb;
      }
      incoming_ecx = (int *)*incoming_ecx;
      DAT_020b93ac = incoming_ecx;
    } while (incoming_ecx != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_2019480();
}
