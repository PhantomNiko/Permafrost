/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047ba30 (*(uint64_t volatile *)(0x82547b10U))
void recovered_8240fbb8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *buffer;

  buffer = (void *)DAT_4047ba30;
  if (buffer != (void *)0x0) {
    DAT_4047ba30 = *(undefined8 *)((long)buffer + 0x10);
    *(undefined8 *)((long)buffer + 0x10) = 0;
    if ((*(byte *)((long)buffer + 0x28) & 1) == 0) {
      if (*(code **)((long)buffer + 8) != (code *)0x0) {
        (**(code **)((long)buffer + 8))((long)buffer + 0x30);
      }
      recovered_82400748(buffer);
      return;
    }
  }
  return;
}
