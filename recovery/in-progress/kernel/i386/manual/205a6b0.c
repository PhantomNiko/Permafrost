/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
undefined4 recovered_205a6b0(int incoming_ecx,uint incoming_edx,char param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  int iVar3;

  uVar1 = 0;
  if (((0x17 < incoming_edx) && (incoming_ecx != 0)) && (param_4 != 0)) {
    if (param_3 == '\0') {
      uVar2 = *(uint *)(incoming_ecx + 8);
    }
    else {
      uVar2 = *(uint *)(incoming_ecx + 8);
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    }
    if (uVar2 < incoming_edx) {
      iVar3 = pf_varargs_2003aa0__4_((char *)param_4,0xf1,&DAT_0208e323,incoming_ecx + uVar2);
      uVar1 = CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
