/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_242 (*(short *)(frame + 30))
#define local_244 (*(short *)(frame + 28))
#define local_248 (*(int *)(frame + 24))
#define local_48 (*(undefined1 (*)[56])(frame + 536))
uchar recovered_20d81f0(byte param_1,uint param_2,uint param_3)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;

  if (0xffffffbe < param_2 || param_3 < 0x42) {
    return '\0';
  }
  uVar2 = recovered_206b1b0(param_1,(ulong)(param_2 + 0x41),(long)&local_248,0x200);
  uVar1 = '\0';
  if ((((0x42 < param_3) && ((char)uVar2 != '\0')) && (local_248 == 0x54504257)) && (local_244 == 1)
     ) {
    if ((ushort)(local_242 - 5U) < 0xfffc) {
      uVar1 = '\0';
    }
    else {
      recovered_2002110(local_48,0,0x38);
      uVar1 = '\x01';
    }
  }
  return uVar1;
}
