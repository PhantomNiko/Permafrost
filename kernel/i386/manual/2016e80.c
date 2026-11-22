#include "functions.h"
#undef DAT_02104628
#define DAT_02104628 (*(uint32_t volatile *)(0x2104628U))
#define local_c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2016e80
 */

uint recovered_2016e80(void *td)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = (uint)(*(byte *)((int)td + 3) >> 4);
  DAT_02104628 = uVar1;
  if (uVar1 == 0xf) {
    uVar1 = 0;
    do {
      iVar2 = 0x32;
      do {
        local_c = 0;
        do {
          local_c = local_c + 1;
        } while (local_c < 0x40);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar3 = (uint)(*(byte *)((int)td + 3) >> 4);
      DAT_02104628 = uVar3;
    } while ((uVar3 == 0xf) && (bVar4 = uVar1 < 0xc31e, uVar1 = uVar1 + 0x32, bVar4));
  }
  DAT_02104628 = (uint)(*(byte *)((int)td + 3) >> 4);
  return (uint)(*(byte *)((int)td + 3) < 0x10);
}
