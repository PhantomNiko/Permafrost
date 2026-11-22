/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b93a8 (*(uint32_t volatile *)(0x213023cU))
int recovered_2019510(uint in_EDX,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = DAT_020b93a8;
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(undefined1 *)(param_2 + 0x18) = 0;
  DAT_020b93a8 = param_2;
  iVar2 = recovered_2019840(param_2,in_EDX);
  return iVar2;
}
