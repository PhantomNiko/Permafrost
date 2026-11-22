/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cea28 (*(uint64_t volatile *)(0x215a258U))
void recovered_201cf00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *buffer;

  buffer = (void *)DAT_020cea28;
  if (buffer != (void *)0x0) {
    DAT_020cea28 = *(undefined8 *)((long)buffer + 0x10);
    *(undefined8 *)((long)buffer + 0x10) = 0;
    if (*(char *)((long)buffer + 0x28) == '\0') {
      if (*(code **)((long)buffer + 8) != (code *)0x0) {
        (**(code **)((long)buffer + 8))((long)buffer + 0x30);
      }
      recovered_2000bb0(buffer);
      return;
    }
  }
  return;
}
