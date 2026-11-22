/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_40 (*(long *)(frame + 32))
#define local_48 (*(undefined1 * *)(frame + 24))
#define uStack_38 (*(undefined8 *)(frame + 40))
undefined8 * recovered_82416e04(undefined4 param_1,long param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;

  local_40 = 0;
  uStack_38 = 0;
  local_48 = (undefined1 *)0x0;
  if (param_2 != 0) {
    piVar1 = recovered_8240ed54(param_2,0x82473b5dU);
    puVar5 = (undefined8 *)0x0;
    if (piVar1 == (int *)0x0) goto LAB_40411160;
    uVar2 = recovered_8240f408(piVar1,0,2);
    if ((((int)uVar2 == 0) && (uVar3 = recovered_8240f49c((long)piVar1), -1 < (long)uVar3)) &&
       (uVar2 = recovered_8240f408(piVar1,0,0), (int)uVar2 == 0)) {
      recovered_824143d4((long *)&local_48,uVar3);
      if ((local_40 == 0) ||
         (lVar4 = recovered_8240f0e0(local_48,1,local_40,piVar1), lVar4 == local_40)) {
        recovered_8240f09c(piVar1);
        puVar5 = recovered_82416b9c(param_1,(long)local_48,local_40);
        goto LAB_40411160;
      }
    }
    recovered_8240f09c(piVar1);
  }
  puVar5 = (undefined8 *)0x0;
LAB_40411160:
  local_40 = 0;
  recovered_8240facc(local_48);
  return puVar5;
}
