/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047ba38 (*(uint64_t volatile *)(0x82547b18U))
#define cStack_2e (*(char *)(frame + 18))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_30 (*(undefined2 *)(frame + 16))
#define uStack_2c (*(undefined4 *)(frame + 20))
#define uStack_2d (*(undefined1 *)(frame + 19))
ulonglong recovered_8240fc30(undefined8 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_4047ba38;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_404078ac;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_82410218((long)puVar2,(undefined8 *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_8240fd3c(param_1);
LAB_404078ac:
                    /* WARNING: Subroutine does not return */
  recovered_8240fa4c();
}
