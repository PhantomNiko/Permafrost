/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20068b0(byte param_1,int param_2,ulong param_3,uint param_4,uint param_5,
                       undefined4 param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;

  if ((((0xff < param_4) || (0x1f < (byte)param_2)) || (7 < (byte)param_3)) ||
     ((((param_5 == 2 & (byte)param_4) != 0 || (param_5 == 4 && (param_4 & 3) != 0)) ||
      ((4 < param_5 || ((0x16U >> (param_5 & 0x1f) & 1) == 0)))))) {
    return '\0';
  }
  out(0xcf8,(param_4 & 0xfc) + ((int)param_3 << 8 | param_2 << 0xb | (uint)param_1 << 0x10) +
            -0x80000000);
  uVar1 = (ushort)param_4 | 0xcfc;
  if (param_5 == 4) {
    out(uVar1,param_6);
  }
  else if (param_5 == 2) {
    out(uVar1,(short)param_6);
  }
  else {
    if (param_5 != 1) {
      return '\0';
    }
    out(uVar1,(char)param_6);
  }
  return '\x01';
}
