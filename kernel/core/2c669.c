#include "functions.h"
#undef DAT_00084060
#define DAT_00084060 (*(uint *)(0x84060U))
#undef DAT_00084064
#define DAT_00084064 (*(int *)(0x84064U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c669
 */

uint recovered_2c669(int param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = 0;
  uVar4 = 0;
  uVar2 = DAT_00084060;
  do {
    if (uVar2 <= uVar4) {
      return 0xffffffff;
    }
    if ((*(char *)(DAT_00084064 + 0x28 + iVar3) == '\x01') && (*(int *)(DAT_00084064 + iVar3) != 0))
    {
      iVar1 = recovered_21415(*(int *)(DAT_00084064 + iVar3),param_1);
      if (iVar1 == 0) {
        return uVar4;
      }
      uVar2 = DAT_00084060;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x2c;
  } while( true );
}
