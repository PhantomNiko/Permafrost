/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8243bbf8(uint *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;

  bVar2 = false;
  if ((param_1 != (uint *)0x0) && (3 < param_2)) {
    uVar1 = *param_1;
    uVar3 = recovered_8243e3e4(param_1);
    bVar2 = ((uVar3 & 0xfffffffe) == 0xfeedface || (uVar3 & 0xfffffffe) == 0xcafebabe) ||
            uVar1 >> 1 == 0x7f76fd67;
  }
  return bVar2;
}
