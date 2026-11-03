#include "functions.h"
#undef DAT_00040424
#define DAT_00040424 (*(uint8_t *)(0x40424U))
#define local_30 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31181
 */

int recovered_31181(int param_1)

{
  unsigned char frame[96];

  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = -1;
    do {
      recovered_219e1(local_30,0x20,&DAT_00040424,iVar2 + 2);
      uVar1 = recovered_297af(param_1,(int)local_30);
      iVar2 = iVar2 + 1;
    } while (-1 < (int)uVar1);
  }
  return iVar2;
}

