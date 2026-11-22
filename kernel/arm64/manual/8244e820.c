/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8244e820(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  long lVar3;

  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  switch((uintptr_t)(*param_1)) {
  case 1:
  case 5:
  case 6:
    uVar2 = param_1[1];
    goto LAB_40430c5c;
  case 2:
    bVar1 = false;
    if (!NAN(pf_bits_float((uint32_t)param_1[2]))) {
      bVar1 = pf_bits_float((uint32_t)param_1[2]) == 0.0;
    }
    goto LAB_40430cb0;
  case 3:
    if (*(byte **)(param_1 + 4) == (byte *)0x0) {
      return false;
    }
    uVar2 = (uint)**(byte **)(param_1 + 4);
LAB_40430c5c:
    bVar1 = uVar2 == 0;
    goto LAB_40430cb0;
  case 4:
    lVar3 = *(long *)(param_1 + 8);
    break;
  case 7:
    lVar3 = *(long *)(param_1 + 10);
    goto joined_r0x40430c68;
  case 8:
    lVar3 = *(long *)(param_1 + 0xc);
joined_r0x40430c68:
    if (lVar3 == 0) {
LAB_404a003c:
      return false;
    }
    lVar3 = *(long *)(lVar3 + 8);
    break;
  case 9:
    lVar3 = *(long *)(param_1 + 0xe);
    break;
  default:
    goto LAB_404a003c;
  }
  bVar1 = lVar3 == 0;
LAB_40430cb0:
  return !bVar1;
}
