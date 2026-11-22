/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cea30 (*(uint64_t volatile *)(0x215a260U))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_38 (*(undefined8 *)(frame + 24))
ulonglong recovered_201d0d0(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  plVar3 = (long *)DAT_020cea30;
  if (plVar3 != (long *)0x0) {
    plVar1 = (long *)param_1[3];
    do {
      if (plVar3 == plVar1) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_0200cc8c:
        *(undefined4 *)(plVar3 + 1) = uVar2;
                    /* WARNING: Subroutine does not return */
        recovered_201c9c0((long)plVar3);
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_201da20((long)plVar3,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_0200cc8c;
      }
      plVar3 = (long *)*plVar3;
      DAT_020cea30 = plVar3;
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_201ca30();
}
