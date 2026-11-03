#include "functions.h"
#undef DAT_0007cfe4
#define DAT_0007cfe4 (*(uint *)(0x7cfe4U))
#undef DAT_0007cfe8
#define DAT_0007cfe8 (*(int *)(0x7cfe8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b1d9
 */

uint recovered_2b1d9(int param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = 0;
  uVar4 = 0;
  uVar2 = DAT_0007cfe4;
  do {
    if (uVar2 <= uVar4) {
      return 0xffffffff;
    }
    if ((*(char *)(DAT_0007cfe8 + 0x28 + iVar3) == '\x01') && (*(int *)(DAT_0007cfe8 + iVar3) != 0))
    {
      iVar1 = recovered_2100f(*(int *)(DAT_0007cfe8 + iVar3),param_1);
      if (iVar1 == 0) {
        return uVar4;
      }
      uVar2 = DAT_0007cfe4;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x2c;
  } while( true );
}
