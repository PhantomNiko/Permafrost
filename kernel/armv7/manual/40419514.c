/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4046d650 (*(uint32_t volatile *)(0x40531220U))
long recovered_40419514(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar1 = DAT_4046d650;
  *(undefined4 *)(param_1 + 8) = uVar1;
  DAT_4046d650 = param_1;
  iVar2 = recovered_4041995c(param_1);
  return iVar2;
}
