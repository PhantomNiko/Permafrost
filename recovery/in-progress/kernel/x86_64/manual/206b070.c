/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3d8 (*(uint32_t volatile *)(0x215a7e8U))
ulong recovered_206b070(long param_1,ulong param_2,char param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined4 extraout_var_00 = 0;
  undefined7 extraout_var = 0;
  uint uVar2;

  if (*(int *)(param_1 + 0x100) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = DAT_020cf3d8;
    uVar2 = ((*(int *)(param_1 + 0x100) + uVar2) - 1) / uVar2;
  }
  uVar1 = recovered_206f090((uint *)(param_1 + 0x10c),*(uint *)(param_1 + 0x110),uVar2);
  if (uVar1 != '\0') {
    *(uint *)(param_1 + 0x110) = uVar2;
    uVar2 = recovered_206f5c0(*(uint *)(param_1 + 0x10c),*(long *)(param_1 + 0xf8),
                              *(uint *)(param_1 + 0x100),uVar2);
    if ((char)uVar2 != '\0') {
      uVar2 = recovered_206f720(param_2,param_3 != '\0');
      if ((char)uVar2 == '\0') {
        uVar1 = recovered_206f950();
        return CONCAT71(extraout_var,uVar1);
      }
      return CONCAT71((int7)(CONCAT44(extraout_var_00,uVar2) >> 8),1);
    }
  }
  return 0;
}
