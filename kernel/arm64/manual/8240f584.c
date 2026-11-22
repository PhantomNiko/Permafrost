/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a4d0 (*(uint32_t volatile *)(0x8248ad40U))
undefined8 recovered_8240f584(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    uVar1 = recovered_8240f5bc(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  DAT_4045a4d0 = uVar2;
  return 0xffffffff;
}
