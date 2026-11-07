/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_34 (*(uint *)(frame + 28))
uint recovered_824059dc(uint param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  uint extraout_var = 0;

  uVar2 = recovered_82405ad0(param_1);
  uVar1 = recovered_82405d14();
  if ((ulong)uVar1 == 0) {
    if ((uVar2 == 0) || (*(long *)(uVar2 + 8) == 0)) {
      uVar1 = 0;
    }
    else if ((*(char *)(*(long *)(uVar2 + 8) + 8) == '\0') ||
            (*(code **)(uVar2 + 0x28) == (code *)0x0)) {
      uVar1 = 1;
    }
    else {
      (**(code **)(uVar2 + 0x28))(uVar2);
      uVar1 = extraout_var >> 0x1f ^ 1;
    }
  }
  else {
    local_34 = 0;
    recovered_8240abb0(param_1,&local_34);
    *(uint *)((ulong)uVar1 + 0x18) = local_34;
    uVar1 = recovered_82405d44(5);
    uVar1 = (uint)(uVar1 != 0);
  }
  return uVar1;
}
