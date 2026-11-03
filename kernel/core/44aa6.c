#include "functions.h"
#undef DAT_0005893b
#define DAT_0005893b (*(uint8_t *)(0x5893bU))
#define local_30 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44aa6
 */

int recovered_44aa6(int param_1)

{
  unsigned char frame[96] = {0};

  uint uVar1;
  int iVar2;

  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = -1;
    do {
      recovered_22362(local_30,0x20,&DAT_0005893b,iVar2 + 2);
      uVar1 = recovered_3a9bd(param_1,(int)local_30);
      iVar2 = iVar2 + 1;
    } while (-1 < (int)uVar1);
  }
  return iVar2;
}
