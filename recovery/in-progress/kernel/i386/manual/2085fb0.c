/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_10 (*(undefined4 *)(frame + 32))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_c (*(undefined1 * *)(frame + 36))
bool recovered_2085fb0(uint incoming_ecx,undefined4 *incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  if (incoming_edx == (undefined4 *)0x0) {
    return false;
  }
  *incoming_edx = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = (undefined1 *)0x0;
  uVar1 = recovered_2086030((int *)incoming_ecx,(int)&local_14,0);
  if ((char)uVar1 == '\0') {
    recovered_2001710(local_c);
    bVar2 = false;
  }
  else {
    if (local_c == (undefined1 *)0x0) {
      local_c = recovered_2001650(1);
      if (local_c == (undefined1 *)0x0) {
        local_c = (undefined1 *)0x0;
      }
      else {
        *local_c = 0;
      }
    }
    *incoming_edx = local_c;
    bVar2 = local_c != (undefined1 *)0x0;
  }
  return bVar2;
}
