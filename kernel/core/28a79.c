#include "functions.h"
#undef DAT_00088e6c
#define DAT_00088e6c (*(uint *)(0x88e6cU))
#undef DAT_00088e70
#define DAT_00088e70 (*(int *)(0x88e70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28a79
 */

uint recovered_28a79(int param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 0;
  uVar2 = DAT_00088e6c;
  do {
    if (uVar2 <= uVar4) {
      return 0xffffffff;
    }
    if ((*(char *)(DAT_00088e70 + 0x28 + iVar3) == '\x01') && (*(int *)(DAT_00088e70 + iVar3) != 0))
    {
      iVar1 = recovered_2100f(*(int *)(DAT_00088e70 + iVar3),param_1);
      if (iVar1 == 0) {
        return uVar4;
      }
      uVar2 = DAT_00088e6c;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x2c;
  } while( true );
}

