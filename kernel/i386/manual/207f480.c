/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_207f480(int incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (incoming_edx != 0 && incoming_ecx != 0) {
    uVar1 = recovered_207f4d0(incoming_ecx,*(int *)(incoming_ecx + 8) + 1);
    if ((char)uVar1 != '\0') {
      uVar1 = recovered_207e1d0((undefined4 *)
                                (*(int *)(incoming_ecx + 0x10) + -0x24 +
                                *(int *)(incoming_ecx + 8) * 0x24),(undefined4 *)incoming_edx);
      return uVar1;
    }
  }
  return 0;
}
