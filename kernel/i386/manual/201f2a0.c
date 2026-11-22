/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(uint *)(frame + 28))
#define local_18 (*(uint *)(frame + 24))
bool recovered_201f2a0(uint *incoming_ecx,int incoming_edx,int param_3,uint param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  if (param_3 != 0 || param_4 == 0) {
    local_18 = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
               param_4 << 0x18;
    uVar1 = recovered_2025030(0,(uchar *)incoming_edx,4);
    if (param_4 != 0) {
      uVar1 = recovered_2025030(uVar1,(uchar *)param_3,param_4);
    }
    local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    iVar2 = recovered_2018c30((int)&local_18,1,4,incoming_ecx);
    if (((iVar2 == 4) && (iVar2 = recovered_2018c30(incoming_edx,1,4,incoming_ecx), iVar2 == 4)) &&
       ((param_4 == 0 ||
        (uVar1 = recovered_2018c30(param_3,1,param_4,incoming_ecx), uVar1 == param_4)))) {
      iVar2 = recovered_2018c30((int)&local_14,1,4,incoming_ecx);
      return iVar2 == 4;
    }
  }
  return false;
}
