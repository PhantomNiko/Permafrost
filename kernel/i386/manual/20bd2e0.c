#include "functions.h"


#undef DAT_020c5119
#undef DAT_020d6b5b
#undef DAT_0215bc80
#undef DAT_0215bc84
#undef str_020d6b5e
#undef local_18

#undef DAT_0215bc80
#define DAT_0215bc80 (*(uint32_t volatile *)(0x215bc80U))
#undef DAT_0215bc84
#define DAT_0215bc84 (*(uint32_t volatile *)(0x215bc84U))
#undef str_020d6b64
#define str_020d6b64 (*(char (*)[1])(0x20d6b64U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20bd2e0
 */

undefined1 recovered_20bd2e0(uint in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar4 = DAT_0215bc80;
  if (iVar4 != 0) {
    uVar1 = DAT_0215bc84;
    uVar3 = 0;
    if (in_ECX <= uVar1) {
      uVar3 = in_ECX;
    }
    if (uVar3 < uVar1) {
      iVar4 = uVar3 * 0x402;
      do {
        iVar2 = DAT_0215bc80;
        iVar2 = recovered_2019320((char *)(iVar2 + iVar4),str_020d6b64,0x12);
        if (iVar2 == 0) {
          return 1;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x402;
        uVar1 = DAT_0215bc84;
      } while (uVar3 < uVar1);
    }
  }
  return 0;
}
