/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20067d0(byte param_1,byte param_2,ulong param_3,ushort param_4,uint param_5,
                      undefined4 *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;

  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
    if ((((param_4 < 0x100) && (param_2 < 0x20)) && ((byte)param_3 < 8)) &&
       ((((param_5 == 2 & (byte)param_4) == 0 && (param_5 != 4 || (param_4 & 3) == 0)) &&
        ((param_5 < 5 && ((0x16U >> (param_5 & 0x1f) & 1) != 0)))))) {
      out(0xcf8,(param_4 & 0xfc) +
                (((uint)param_3 & 0xff) << 8 | (uint)param_2 << 0xb | (uint)param_1 << 0x10) +
                -0x80000000);
      uVar2 = param_4 | 0xcfc;
      *param_6 = 0;
      if (param_5 == 4) {
        uVar3 = in(uVar2);
        uVar4 = (ulong)uVar3;
      }
      else if (param_5 == 2) {
        uVar2 = in(uVar2);
        uVar4 = (ulong)uVar2;
      }
      else {
        if (param_5 != 1) {
          return 0;
        }
        bVar1 = in(uVar2);
        uVar4 = (ulong)bVar1;
      }
      *param_6 = (int)uVar4;
      return (uint)CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return 0;
}
