#include "functions.h"
#define piStack_8 (*(int * *)(frame + 24))
#define unaff_retaddr (*(undefined4 * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x235cb
 */

int FUN_000235cb(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  int iVar3;

  recovered_230cf();
  iVar3 = 0;
  if (unaff_retaddr != (undefined4 *)0x0 && piStack_8 != (int *)0x0) {
    iVar1 = *(int *)(*piStack_8 + -8);
    bVar2 = recovered_2360d(*(undefined4 **)(*piStack_8 + -4),unaff_retaddr);
    iVar3 = 0;
    if (bVar2) {
      iVar3 = (int)piStack_8 + iVar1;
    }
  }
  return iVar3;
}
