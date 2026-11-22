/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_824144e8(byte *param_1,int param_2,uint param_3,byte *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  short sVar2;
  byte bVar3;

  if (param_2 == 8) {
    bVar3 = *param_1;
    *param_4 = bVar3;
  }
  else {
    if (param_2 - 0xfU < 2) {
      bVar1 = *param_1;
      bVar3 = param_1[1];
      sVar2 = *(short *)param_1;
      *param_4 = (byte)((((uint)(int)(char)bVar3 >> 2 & 0x1f) * 0xff) / 0x1f);
      param_4[1] = (byte)((((uint)(int)sVar2 >> 5 & 0x1f) * 0xff) / 0x1f);
      param_4[2] = (byte)(((bVar1 & 0x1f) * 0xff) / 0x1f);
      bVar3 = (char)bVar3 >> 7;
      if ((param_3 & 0xf) == 0 || param_2 != 0x10) {
        bVar3 = 0xff;
      }
      goto LAB_4040dbf4;
    }
    if (param_2 == 0x20) {
      *param_4 = param_1[2];
      param_4[1] = param_1[1];
      param_4[2] = *param_1;
      bVar3 = param_1[3];
      goto LAB_4040dbf4;
    }
    if (param_2 != 0x18) {
      return 0;
    }
    *param_4 = param_1[2];
    bVar3 = param_1[1];
  }
  param_4[1] = bVar3;
  param_4[2] = *param_1;
  bVar3 = 0xff;
LAB_4040dbf4:
  param_4[3] = bVar3;
  return 1;
}
