/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2008660(uint param_1,int param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;

  if (param_1 != 0 && param_3 != (undefined4 *)0x0) {
    puVar2 = (uint *)(ulong)param_1;
    *param_3 = 0;
    if (param_2 == 4) {
      if ((param_1 & 3) == 0) {
        uVar1 = *puVar2;
        goto LAB_02005db2;
      }
    }
    else if (param_2 == 2) {
      if ((param_1 & 1) == 0) {
        uVar1 = (uint)(ushort)*puVar2;
        goto LAB_02005db2;
      }
    }
    else if (param_2 == 1) {
      uVar1 = (uint)(byte)*puVar2;
LAB_02005db2:
      *param_3 = uVar1;
      return '\x01';
    }
  }
  return '\0';
}
