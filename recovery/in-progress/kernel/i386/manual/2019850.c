/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b93a8 (*(uint32_t volatile *)(0x213023cU))
void recovered_2019850(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *buffer;

  buffer = (void *)DAT_020b93a8;
  if (buffer != (void *)0x0) {
    DAT_020b93a8 = *(undefined4 *)((int)buffer + 8);
    *(undefined4 *)((int)buffer + 8) = 0;
    if (*(char *)((int)buffer + 0x18) == '\0') {
      if (*(code **)((int)buffer + 4) != (code *)0x0) {
        (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
      }
      recovered_2001710(buffer);
    }
  }
  return;
}
