/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8241d514(ushort *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (ushort *)0x0) {
LAB_404174ec:
    uVar1 = 0;
  }
  else {
    if (*param_1 == 0xfffe) {
      if (param_2 == 0) {
        return 0;
      }
      if (param_3 < 0x28) {
        return 0;
      }
      if ((*(ushort *)(param_2 + 0x10) < 0x16) || ((*(ushort *)(param_2 + 0x18) & 0xfffd) != 1))
      goto LAB_404174ec;
      *param_1 = *(ushort *)(param_2 + 0x18);
    }
    uVar1 = 1;
  }
  return uVar1;
}
