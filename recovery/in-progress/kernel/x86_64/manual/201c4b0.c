/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020adff0 (*(uint32_t volatile *)(0x2107190U))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_0000683c (*(uint *)(0x683cU))
undefined8 recovered_201c4b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    uVar2 = 5;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x3f < _DAT_00006808 && ((code *)(ulong)_DAT_0000683c != (code *)0x0)) &&
        (iVar1 = (*(code *)(ulong)_DAT_0000683c)(), iVar1 != 0)))) {
      return 0;
    }
  }
  DAT_020adff0 = uVar2;
  return 0xffffffff;
}
