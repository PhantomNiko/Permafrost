/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b93a8 (*(uint32_t volatile *)(0x213023cU))
#define DAT_020b93ac (*(uint32_t volatile *)(0x2130240U))
#define local_14 (*(int *)(frame + 28))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 16))
ulonglong recovered_20198e0(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte *incoming_edx_00;
  int incoming_ecx_00;
  undefined4 uVar1;
  uint incoming_edx_01;
  int *incoming_ecx_01;
  ulonglong uVar2;

  incoming_ecx_01 = (int *)DAT_020b93ac;
  local_14 = incoming_ecx;
  if (incoming_ecx_01 != (int *)0x0) {
    incoming_edx_00 = *(byte **)incoming_ecx;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_201a270((int)incoming_ecx_01,incoming_edx_00,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(local_14 + 0xc) = incoming_ecx_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        uVar2 = recovered_2019a30(local_14,incoming_edx_01);
        incoming_ecx_00 = DAT_020b93a8;
        if (incoming_ecx_00 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_2019480();
        }
        *(undefined1 *)(incoming_ecx_00 + 0x18) = 1;
        *(undefined4 *)(incoming_ecx_00 + 0xc) = 0;
        *(undefined4 *)(incoming_ecx_00 + 0x10) = 0;
        *(undefined4 *)(incoming_ecx_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_20198e0(incoming_ecx_00,(uint)(uVar2 >> 0x20));
      }
      incoming_ecx_01 = (int *)*incoming_ecx_01;
    } while (incoming_ecx_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_2019480();
}
