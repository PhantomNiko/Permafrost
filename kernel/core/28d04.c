#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28d04
 */

bool recovered_28d04(undefined4 *param_1,int param_2)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  
  if (param_2 != 0 && param_1 != (undefined4 *)0x0) {
    iVar2 = recovered_28d73(param_2);
    if ((char)iVar2 != '\0') {
      puVar3 = recovered_29539(1,param_2);
      if (puVar3 != (uint *)0x0) {
        iVar2 = recovered_20ff4(param_2);
        pvVar4 = recovered_27c30(param_2,iVar2);
        puVar3[4] = (uint)pvVar4;
        if (pvVar4 != (void *)0x0) {
          bVar1 = recovered_295da(param_1,puVar3);
          return bVar1;
        }
        recovered_28b43(puVar3);
      }
    }
  }
  return false;
}

