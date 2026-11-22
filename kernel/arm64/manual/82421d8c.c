/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a2e4 (*(uint32_t volatile *)(0x8248ab10U))
ulong recovered_82421d8c(int param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;

  iVar1 = DAT_4045a2e4;
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if ((param_1 < 0) || (iVar1 == param_1)) {
    return 1;
  }
  uVar2 = recovered_82421b68(param_1,param_2,in_x2,in_x3,in_x4,in_x5,in_x6,in_x7);
  return uVar2;
}
