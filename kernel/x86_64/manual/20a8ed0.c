/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_18 (*(undefined1 * *)(frame + 40))
#define local_28 (*(long (*)[2])(frame + 24))
uchar recovered_20a8ed0(int *param_1,undefined8 *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  bool bVar2;

  if (param_2 == (undefined8 *)0x0) {
    return '\0';
  }
  *param_2 = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_18 = (undefined1 *)0x0;
  uVar1 = recovered_20a8f50(param_1,local_28,0);
  if (uVar1 == '\0') {
    recovered_2000bb0(local_18);
    bVar2 = false;
  }
  else {
    if (local_18 == (undefined1 *)0x0) {
      local_18 = recovered_2000ad0(1);
      if (local_18 == (undefined1 *)0x0) {
        local_18 = (undefined1 *)0x0;
      }
      else {
        *local_18 = 0;
      }
    }
    *param_2 = local_18;
    bVar2 = local_18 != (undefined1 *)0x0;
  }
  return bVar2;
}
