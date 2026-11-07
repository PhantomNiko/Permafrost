/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2075a60(long *param_1,int param_2,long param_3,ulong param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  ulong size;
  void *buffer;
  ulong size_00;
  uchar uVar3;

  uVar3 = '\x01';
  size_00 = param_4 - param_5;
  if (param_5 <= param_4 && size_00 != 0) {
    size = (ulong)*(uint *)(param_1 + 1);
    if (size <= size_00) {
      size_00 = size;
    }
    if (param_2 == 0) {
      recovered_2002110((void *)(param_3 + param_5),0,size_00);
    }
    else {
      buffer = recovered_2000ad0(size);
      if (buffer != (void *)0x0) {
        lVar1 = *param_1;
        if (lVar1 != 0) {
          uVar2 = *(uint *)(param_1 + 1);
          if (((uVar2 & 0x1ff) == 0 && 0x1ff < (ulong)uVar2) &&
             (uVar2 = recovered_206b1b0(*(byte *)(lVar1 + 4),
                                        (ulong)((uVar2 >> 9) * param_2 + *(int *)(lVar1 + 8)),
                                        (long)buffer,(ulong)uVar2), (char)uVar2 != '\0')) {
            recovered_2001410((void *)(param_3 + param_5),buffer,size_00);
            recovered_2000bb0(buffer);
            return '\x01';
          }
        }
        recovered_2000bb0(buffer);
      }
      uVar3 = '\0';
    }
  }
  return uVar3;
}
