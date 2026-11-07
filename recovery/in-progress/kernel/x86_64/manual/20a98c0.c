/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_20a98c0(undefined4 param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *buffer;
  ulong size;
  void *out;

  buffer = recovered_2000ad0(0x90);
  if (buffer != (undefined4 *)0x0) {
    *buffer = 1;
    buffer[1] = param_1;
    buffer[2] = 0;
    *(undefined8 *)(buffer + 4) = 0;
    *(undefined8 *)(buffer + 6) = 0;
    *(undefined8 *)(buffer + 8) = 0;
    buffer[10] = 0;
    *(undefined8 *)(buffer + 0xc) = 0;
    *(undefined8 *)(buffer + 0xe) = 0;
    *(undefined8 *)(buffer + 0x10) = 0;
    *(undefined8 *)(buffer + 0x12) = 0;
    *(undefined8 *)(buffer + 0x14) = 0;
    *(undefined8 *)(buffer + 0x16) = 0;
    *(undefined8 *)(buffer + 0x18) = 0;
    *(undefined8 *)(buffer + 0x1a) = 0;
    *(undefined8 *)(buffer + 0x1c) = 0;
    *(undefined8 *)(buffer + 0x1e) = 0;
    *(undefined8 *)(buffer + 0x20) = 0;
    *(undefined8 *)(buffer + 0x22) = 0;
    if (param_2 == 0) {
      return (ulonglong)buffer;
    }
    size = recovered_2002e80((char *)param_2);
    out = recovered_2000ad0(size + 1);
    if (out != (void *)0x0) {
      if (size != 0) {
        recovered_2001410(out,(void *)param_2,size);
      }
      *(undefined1 *)((long)out + size) = 0;
      *(void **)(buffer + 4) = out;
      return (ulonglong)buffer;
    }
    *(undefined8 *)(buffer + 4) = 0;
    recovered_2000bb0(buffer);
  }
  return 0;
}
