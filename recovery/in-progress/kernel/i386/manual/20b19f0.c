/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_23a (*(short *)(frame + 22))
#define local_23c (*(short *)(frame + 20))
#define local_240 (*(int *)(frame + 16))
#define local_40 (*(undefined1 (*)[56])(frame + 528))
undefined4 recovered_20b19f0(uint incoming_ecx,uint incoming_edx,uint param_3)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  void *pvVar2;

  if (incoming_edx < 0xffffffbf && 0x41 < param_3) {
    uVar1 = recovered_204ed30(incoming_ecx & 0xff,incoming_edx + 0x41,(int)&local_240,0x200);
    if (param_3 < 0x43) {
      return 0;
    }
    if ((char)uVar1 == '\0') {
      return 0;
    }
    if (local_240 != 0x54504257) {
      return 0;
    }
    if (local_23c != 1) {
      return 0;
    }
    if (0xfffb < (ushort)(local_23a - 5U)) {
      pvVar2 = recovered_2001e00(local_40,0,0x38);
      return CONCAT31((int3)((uint)pvVar2 >> 8),1);
    }
  }
  return 0;
}
