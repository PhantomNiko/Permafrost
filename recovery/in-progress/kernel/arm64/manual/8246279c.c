/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define auStack_60 (*(undefined8 (*)[8])(frame + 16))
undefined8 recovered_8246279c(int *param_1,long param_2,undefined8 param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_82451760((undefined4 *)auStack_60,(undefined4)param_3);
  uVar1 = recovered_824627d4(param_1,param_2,(long)auStack_60);
  recovered_8243166c(auStack_60);
  return uVar1;
}
