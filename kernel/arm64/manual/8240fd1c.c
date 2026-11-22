/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047ba38 (*(uint64_t volatile *)(0x82547b18U))
#define uStack_48 (*(undefined4 *)(frame + 24))
#define uStack_50 (*(undefined8 *)(frame + 16))
undefined8 recovered_8240fd1c(undefined8 *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;

  puVar2 = (undefined8 *)DAT_4047ba38;
  if (puVar2 != (undefined8 *)0x0) {
    DAT_4047ba38 = *puVar2;
  }
  puVar2 = (undefined8 *)recovered_8240fd3c(param_1);
  plVar3 = (long *)DAT_4047ba38;
  while( true ) {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_8240fa4c();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_82410218((long)plVar3,(undefined8 *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_404079ec;
    }
    plVar3 = (long *)*plVar3;
    DAT_4047ba38 = plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_404079ec:
                    /* WARNING: Subroutine does not return */
  recovered_8240f9b8((long)plVar3);
}
