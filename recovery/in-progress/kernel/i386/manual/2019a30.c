/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b93ac (*(uint32_t volatile *)(0x2130240U))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_18 (*(int *)(frame + 24))
#define local_1c (*(undefined4 *)(frame + 20))
ulonglong recovered_2019a30(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int *incoming_ecx_00;

  incoming_ecx_00 = (int *)DAT_020b93ac;
  if (incoming_ecx_00 != (int *)0x0) {
    piVar1 = *(int **)(incoming_ecx + 0xc);
    do {
      if (incoming_ecx_00 == piVar1) {
        incoming_ecx_00[2] = incoming_ecx;
        incoming_ecx_00[3] = *(int *)(incoming_ecx + 0x14);
        iVar2 = *(int *)(incoming_ecx + 0x10);
LAB_0200d5bb:
        incoming_ecx_00[1] = iVar2;
                    /* WARNING: Subroutine does not return */
        recovered_2019410((int)incoming_ecx_00);
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      recovered_201a270((int)incoming_ecx_00,*(byte **)incoming_ecx,(undefined2 *)&local_1c);
      if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
        incoming_ecx_00[2] = incoming_ecx;
        incoming_ecx_00[3] = 0;
        iVar2 = local_18;
        goto LAB_0200d5bb;
      }
      incoming_ecx_00 = (int *)*incoming_ecx_00;
      DAT_020b93ac = incoming_ecx_00;
    } while (incoming_ecx_00 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_2019480();
}
