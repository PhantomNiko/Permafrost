/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_82462a9c(int *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  switch((uintptr_t)(iVar2)) {
  case 1:
  case 5:
    if (-1 < param_1[1]) {
      *param_2 = param_1[1];
      return 1;
    }
    if (iVar2 == 3) goto switchD_40442d5c_caseD_3;
    if (iVar2 != 2) {
      return 0;
    }
  case 2:
    if (pf_bits_float((uint32_t)param_1[2]) < 0.0) {
      return 0;
    }
    iVar2 = (int)pf_bits_float((uint32_t)param_1[2]);
    break;
  case 3:
switchD_40442d5c_caseD_3:
    if (*(long *)(param_1 + 4) != 0) {
      uVar1 = recovered_824472d8(*(long *)(param_1 + 4),param_2);
      return uVar1;
    }
  default:
    return 0;
  case 6:
    iVar2 = param_1[1];
  }
  *param_2 = iVar2;
  return 1;
}
