/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf1fc (*(uint32_t volatile *)(0x2245284U))
#define DAT_020cf204 (*(uint32_t volatile *)(0x224528cU))
void recovered_208dec0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint incoming_edx;
  int iVar3;
  uint uVar4;

  iVar3 = DAT_020cf1fc;
  if (iVar3 != 0) {
    DAT_020cf1fc = iVar3 + -1;
    iVar2 = DAT_020cf204;
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + (iVar3 + -1) * 0xc);
      if (piVar1[1] != 0) {
        uVar4 = 0;
        iVar3 = 4;
        do {
          recovered_2001710(*(void **)(*piVar1 + -4 + iVar3));
          recovered_2043a90((undefined4 *)(*piVar1 + iVar3),incoming_edx);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x2c;
        } while (uVar4 < (uint)piVar1[1]);
      }
      recovered_2001710((void *)*piVar1);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
  }
  return;
}
