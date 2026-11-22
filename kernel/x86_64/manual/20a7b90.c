/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20a7b90(undefined4 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint *puVar2;
  ulong size;
  void *out;

  if (param_2 == 0 || param_1 == (undefined4 *)0x0) {
    return '\0';
  }
  uVar1 = recovered_20a60a0((char *)param_2);
  if ((uVar1 != '\0') && (puVar2 = recovered_2000ad0(0x90), puVar2 != (uint *)0x0)) {
    puVar2[0] = 1;
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    size = recovered_2002e80((char *)param_2);
    out = recovered_2000ad0(size + 1);
    if (out != (void *)0x0) {
      if (size != 0) {
        recovered_2001410(out,(void *)param_2,size);
      }
      *(undefined1 *)((long)out + size) = 0;
      *(void **)(puVar2 + 6) = out;
      recovered_205ec00((undefined8 *)param_1);
      *param_1 = 9;
      *(uint **)(param_1 + 0xe) = puVar2;
      return '\x01';
    }
    puVar2[6] = 0;
    puVar2[7] = 0;
    recovered_209d700(puVar2);
  }
  return '\0';
}
