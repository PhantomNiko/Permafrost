#include "functions.h"
#undef DAT_0004764b
#define DAT_0004764b (*(uint8_t *)(0x4764bU))
#define local_30 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x34e76
 */

int recovered_34e76(int param_1)

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
      recovered_21de7(local_30,0x20,&DAT_0004764b,iVar2 + 2);
      uVar1 = recovered_2c672(param_1,(int)local_30);
      iVar2 = iVar2 + 1;
    } while (-1 < (int)uVar1);
  }
  return iVar2;
}
