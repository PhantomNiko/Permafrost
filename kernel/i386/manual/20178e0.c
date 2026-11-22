#include "functions.h"
#undef DAT_02104668
#define DAT_02104668 (*(uint32_t volatile *)(0x2104668U))
#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20178e0
 */

uint recovered_20178e0(void *td)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;

  DAT_02104668 = *(undefined4 *)((int)td + 4);
  if (*(char *)((int)td + 6) < '\0') {
    uVar1 = 0;
    do {
      iVar2 = 0x32;
      do {
        local_10 = 0;
        do {
          local_10 = local_10 + 1;
        } while (local_10 < 0x40);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_02104668 = *(undefined4 *)((int)td + 4);
    } while ((*(char *)((int)td + 6) < '\0') &&
            (bVar3 = uVar1 < 0xc31e, uVar1 = uVar1 + 0x32, bVar3));
  }
  DAT_02104668 = *(undefined4 *)((int)td + 4);
  return (uint)((byte)~*(byte *)((int)td + 6) >> 7);
}
