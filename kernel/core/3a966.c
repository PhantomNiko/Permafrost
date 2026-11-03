#include "functions.h"
#undef DAT_000938ec
#define DAT_000938ec (*(uint *)(0x938ecU))
#undef DAT_000938f0
#define DAT_000938f0 (*(int *)(0x938f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3a966
 */

uint recovered_3a966(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = 0;
  uVar4 = 0;
  uVar2 = DAT_000938ec;
  do {
    if (uVar2 <= uVar4) {
      return 0xffffffff;
    }
    if ((*(char *)(DAT_000938f0 + 0x28 + iVar3) == '\x01') && (*(int *)(DAT_000938f0 + iVar3) != 0))
    {
      iVar1 = recovered_214f9(*(int *)(DAT_000938f0 + iVar3),param_1);
      if (iVar1 == 0) {
        return uVar4;
      }
      uVar2 = DAT_000938ec;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x2c;
  } while( true );
}
