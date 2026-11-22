/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a568 (*(uint64_t volatile *)(0x8248b008U))
ulong recovered_82448954(void *buffer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong extraout_x0;
  long *plVar1;
  long *plVar2;
  long *plVar3;

  plVar1 = (long *)0x0;
  if (buffer != (void *)0x0) {
    recovered_824000c0();
    *(undefined1 *)((long)buffer + -0x10) = 1;
    recovered_824007bc((long *)((long)buffer + -0x20));
    plVar3 = &DAT_4045a568;
    plVar2 = (long *)0x0;
    do {
      plVar1 = plVar2;
      plVar2 = (long *)*plVar3;
      plVar3 = plVar2 + 1;
    } while (plVar2 != (long *)0x0 && plVar2 != (long *)((long)buffer + -0x20));
    if ((plVar1 != (long *)0x0) && ((char)plVar1[2] == '\x01')) {
      recovered_824007bc(plVar1);
      return extraout_x0;
    }
  }
  return (ulong)plVar1;
}
