/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define Ram000000004045a2b0 (*(uint64_t volatile *)(0x824866c8U))
#define Ram000000004045a2b8 (*(uint64_t volatile *)(0x824866d0U))
#define Ram000000004045a2c0 (*(uint32_t volatile *)(0x824866d8U))
void recovered_824022b0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;

  if (param_1 != (undefined8 *)0x0) {
    uVar2 = Ram000000004045a2b8;
    uVar1 = Ram000000004045a2b0;
    uVar3 = Ram000000004045a2c0;
    *(undefined4 *)(param_1 + 2) = uVar3;
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  return;
}
