/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8241c354(double param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  double dVar3;

  iVar1 = (**(code **)(*(long *)**(undefined8 **)*param_2 + 0x40))();
  if (iVar1 == 1) {
    uVar2 = recovered_8240153c(param_1);
  }
  else {
    dVar3 = recovered_824010f8(param_1);
    uVar2 = (ulong)(uint)(int)dVar3;
  }
  return uVar2;
}
