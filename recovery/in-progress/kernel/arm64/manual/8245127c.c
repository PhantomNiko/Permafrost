/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40450398 (*(uint8_t *)(0x8247a258U))
#define acStack_50 (*(char (*)[32])(frame + 16))
int recovered_8245127c(long param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;

  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = -1;
    do {
      pf_varargs_404019bc_1(acStack_50,0x20,&DAT_40450398,(ulong)(iVar2 + 2));
      uVar1 = recovered_824512e8(param_1,(long)acStack_50);
      iVar2 = iVar2 + 1;
    } while (-1 < (int)uVar1);
  }
  return iVar2;
}
