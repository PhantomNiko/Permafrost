/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cea30 (*(uint64_t volatile *)(0x215a260U))
#define uStack_38 (*(undefined4 *)(frame + 24))
#define uStack_40 (*(undefined8 *)(frame + 16))
ulonglong recovered_201d0b0(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long *plVar4;

  puVar2 = (undefined8 *)DAT_020cea30;
  if (puVar2 != (undefined8 *)0x0) {
    DAT_020cea30 = *puVar2;
  }
  recovered_201d0d0(param_1,in_RSI);
  plVar4 = (long *)DAT_020cea30;
  if (plVar4 != (long *)0x0) {
    plVar1 = (long *)param_1[3];
    do {
      if (plVar4 == plVar1) {
        plVar4[2] = (long)param_1;
        *(undefined4 *)(plVar4 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar3 = *(undefined4 *)(param_1 + 4);
LAB_0200cc8c:
        *(undefined4 *)(plVar4 + 1) = uVar3;
                    /* WARNING: Subroutine does not return */
        recovered_201c9c0((long)plVar4);
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_201da20((long)plVar4,in_RSI,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        plVar4[2] = (long)param_1;
        *(undefined4 *)(plVar4 + 3) = 0;
        uVar3 = PF_PART4(uStack_40, 4);
        goto LAB_0200cc8c;
      }
      plVar4 = (long *)*plVar4;
      DAT_020cea30 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_201ca30();
}
