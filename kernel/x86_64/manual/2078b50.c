/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
uchar recovered_2078b50(long param_1,uint param_2,char param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = '\0';
  if (((0x17 < param_2) && (param_1 != 0)) && (param_4 != 0)) {
    if (param_3 == '\0') {
      uVar2 = *(uint *)(param_1 + 8);
    }
    else {
      uVar2 = *(uint *)(param_1 + 8);
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    }
    if (param_2 <= uVar2) {
      return '\0';
    }
    pf_varargs_20039e0__8_((char *)param_4,0xf1,&DAT_020a25e3,param_1 + (ulong)uVar2);
    uVar1 = '\x01';
  }
  return uVar1;
}
