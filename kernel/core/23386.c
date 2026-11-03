#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23386
 */

int FUN_00023386(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int unaff_ESI;
  uint uVar3;

  uVar3 = param_1 + 0x1c + (uint)(param_1 == 0);
  pvVar1 = recovered_211fa(uVar3);
  if (pvVar1 == (void *)0x0) {
    recovered_230cf();
    uVar3 = 0;
    if (unaff_ESI != 0) {
      uVar3 = recovered_21203(unaff_ESI + -0x1c);
    }
    return uVar3;
  }
  for (uVar2 = 0; uVar3 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)pvVar1 + uVar2) = 0;
  }
  return (int)pvVar1 + 0x1c;
}
