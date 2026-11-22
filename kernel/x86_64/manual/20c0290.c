/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20c0290(undefined2 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *buffer;
  long lVar1;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  long lVar2;
  ulong uVar3;

  if (param_1 != (undefined2 *)0x0) {
    if (*(long *)(param_1 + 4) != 0) {
      uVar3 = 0;
      do {
        recovered_2000bb0(*(void **)(*(long *)(param_1 + 0xc) + uVar3 * 8));
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulong *)(param_1 + 4));
    }
    recovered_2000bb0(*(void **)(param_1 + 0xc));
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    recovered_2000bb0(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    buffer = *(void **)(param_1 + 0x1c);
    if (buffer != (void *)0x0) {
      lVar1 = *(long *)(param_1 + 0x20);
      if (lVar1 != 0) {
        lVar2 = 0;
        do {
          recovered_2000bb0(*(void **)((long)buffer + lVar2 * 8));
          *(undefined8 *)((long)buffer + lVar2 * 8) = 0;
          lVar2 = lVar2 + 1;
        } while (lVar1 != lVar2);
      }
      recovered_2000bb0(buffer);
    }
    recovered_2000bb0(*(void **)(param_1 + 0x28));
    recovered_2000bb0(*(void **)(param_1 + 0x2c));
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *param_1 = 1;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}
