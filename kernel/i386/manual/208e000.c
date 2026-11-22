/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c77f0 (*(uint32_t volatile *)(0x223dc08U))
#define DAT_020c77f4 (*(uint32_t volatile *)(0x223dc0cU))
void recovered_208e000(uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint extraout_EDX = 0;
  int iVar3;
  uint uVar4;

  iVar1 = DAT_020c77f0;
  if (iVar1 != 0) {
    DAT_020c77f0 = iVar1 + -1;
    iVar2 = DAT_020c77f4;
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + -4 + iVar1 * 8) != 0) {
        iVar3 = 0;
        uVar4 = 0;
        do {
          recovered_2043a90((undefined4 *)(*(int *)(iVar2 + -8 + iVar1 * 8) + iVar3),in_EDX);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x24;
          in_EDX = extraout_EDX;
        } while (uVar4 < *(uint *)(iVar2 + -4 + iVar1 * 8));
      }
      recovered_2001710(*(void **)(iVar2 + -8 + iVar1 * 8));
      *(undefined4 *)(iVar2 + -8 + iVar1 * 8) = 0;
      *(undefined4 *)(iVar2 + -4 + iVar1 * 8) = 0;
    }
  }
  return;
}
