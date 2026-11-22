/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047ba38 (*(uint64_t volatile *)(0x82547b18U))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_40 (*(undefined8 *)(frame + 16))
undefined8 recovered_8240fd3c(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  long *plVar2;

  plVar2 = (long *)DAT_4047ba38;
  while( true ) {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_8240fa4c();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_82410218((long)plVar2,(undefined8 *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_404079ec;
    }
    plVar2 = (long *)*plVar2;
    DAT_4047ba38 = plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_404079ec:
                    /* WARNING: Subroutine does not return */
  recovered_8240f9b8((long)plVar2);
}
