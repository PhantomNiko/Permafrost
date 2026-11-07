/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_2c (*(uint *)(frame + 20))
#define local_30 (*(uint *)(frame + 16))
uint recovered_2024810(uint *param_1,long param_2,long param_3,ulong param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulonglong uVar2;

  if (param_4 >> 0x20 != 0) {
    return 0;
  }
  if (param_3 == 0 && param_4 != 0) {
    return 0;
  }
  uVar1 = (uint)param_4;
  local_30 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = recovered_202de00(0,param_2,4);
  if (param_4 != 0) {
    uVar1 = recovered_202de00(uVar1,param_3,param_4);
  }
  local_2c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar2 = recovered_201c130((long)&local_30,1,4,param_1);
  if (((uVar2 == 4) && (uVar2 = recovered_201c130(param_2,1,4,param_1), uVar2 == 4)) &&
     ((param_4 == 0 || (uVar2 = recovered_201c130(param_3,1,param_4,param_1), uVar2 == param_4)))) {
    uVar2 = recovered_201c130((long)&local_2c,1,4,param_1);
    return (uint)CONCAT71((int7)(uVar2 >> 8),uVar2 == 4);
  }
  return 0;
}
