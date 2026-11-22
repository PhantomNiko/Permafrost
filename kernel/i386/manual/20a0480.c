/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_1c (*(int *)(frame + 20))
undefined4 recovered_20a0480(int *incoming_ecx,int *incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (incoming_edx == (int *)0x0 || incoming_ecx == (int *)0x0) {
LAB_020750e0:
    uVar2 = 0;
  }
  else {
    iVar1 = *incoming_ecx;
    uVar2 = 0;
    switch((uintptr_t)(iVar1)) {
    case 1:
    case 5:
      local_1c = incoming_ecx[1];
      if (local_1c < 0) {
        if (iVar1 == 3) goto switchD_020750a2_caseD_3;
        if (iVar1 != 2) goto LAB_020750e0;
        goto switchD_020750a2_caseD_2;
      }
      break;
    case 2:
switchD_020750a2_caseD_2:
      if (pf_bits_float((uint32_t)incoming_ecx[2]) < 0.0) goto LAB_020750e0;
      local_1c = (int)(longlong)ROUND(pf_bits_float((uint32_t)incoming_ecx[2]));
      break;
    case 3:
switchD_020750a2_caseD_3:
      if (incoming_ecx[3] != 0) {
        uVar2 = recovered_206e6c0(incoming_ecx[3],incoming_edx);
        return uVar2;
      }
      goto LAB_020750e0;
    default:
      goto switchD_020750a2_caseD_4;
    case 6:
      local_1c = incoming_ecx[1];
    }
    *incoming_edx = local_1c;
    uVar2 = CONCAT31((int3)((uint)local_1c >> 8),1);
  }
switchD_020750a2_caseD_4:
  return uVar2;
}
