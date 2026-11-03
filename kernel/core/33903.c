#include "functions.h"
#undef DAT_000438a5
#define DAT_000438a5 (*(uint8_t *)(0x438a5U))
#define local_30 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33903
 */

int recovered_33903(int param_1)

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
      recovered_219e1(local_30,0x20,&DAT_000438a5,iVar2 + 2);
      uVar1 = recovered_2bf37(param_1,(int)local_30);
      iVar2 = iVar2 + 1;
    } while (-1 < (int)uVar1);
  }
  return iVar2;
}
