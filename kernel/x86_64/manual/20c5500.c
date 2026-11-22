/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20c5500(int *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uchar uVar2;
  uint uVar3;

  if (param_2 == (uint *)0x0 || param_1 == (int *)0x0) {
    return '\0';
  }
  iVar1 = *param_1;
  uVar2 = '\0';
  switch((uintptr_t)(iVar1)) {
  case 1:
  case 5:
    if (param_1[1] < 0) {
      if (iVar1 == 3) goto switchD_02086b4e_caseD_3;
      if (iVar1 != 2) {
        return '\0';
      }
      goto switchD_02086b4e_caseD_2;
    }
    *param_2 = param_1[1];
    break;
  case 2:
switchD_02086b4e_caseD_2:
    if (pf_bits_float((uint32_t)param_1[2]) < 0.0) {
      return '\0';
    }
    *param_2 = (uint)(long)pf_bits_float((uint32_t)param_1[2]);
    break;
  case 3:
switchD_02086b4e_caseD_3:
    if (*(long *)(param_1 + 4) == 0) {
      return '\0';
    }
    uVar3 = recovered_208f550(*(long *)(param_1 + 4),param_2);
    return (uchar)uVar3;
  default:
    goto switchD_02086b4e_caseD_4;
  case 6:
    *param_2 = param_1[1];
  }
  uVar2 = '\x01';
switchD_02086b4e_caseD_4:
  return uVar2;
}
