#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21544
 */

int FUN_00021544(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint *puVar2;
  uint *puVar3;

  puVar3 = (uint *)0x0;
  if (param_1 != 0) {
    iVar1 = recovered_214de(param_1);
    puVar2 = recovered_20ec7(iVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      recovered_21348((int)puVar2,param_1,iVar1 + 1);
      puVar3 = puVar2;
    }
  }
  return (int)puVar3;
}
