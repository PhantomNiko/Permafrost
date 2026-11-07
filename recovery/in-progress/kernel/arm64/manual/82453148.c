/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_82453148(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;

  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = param_1[2];
    if (uVar1 == 0) {
      puVar2 = recovered_82400744(1);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
      }
      return (ulong)puVar2;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return uVar1;
}
