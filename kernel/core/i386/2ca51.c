#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ca51
 */

undefined4 recovered_2ca51(int param_1,int param_2)

{
  unsigned char frame[64];

  bool bVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  undefined3 extraout_var = 0;

  if (param_2 != 0 && param_1 != 0) {
    iVar2 = recovered_2cac0(param_2);
    if ((char)iVar2 != '\0') {
      puVar3 = recovered_2c096(1,param_2);
      if (puVar3 != (uint *)0x0) {
        iVar2 = recovered_213fa(param_2);
        pvVar4 = recovered_29c28(param_2,iVar2);
        puVar3[4] = (uint)pvVar4;
        if (pvVar4 != (void *)0x0) {
          bVar1 = recovered_2c13b((undefined4 *)param_1,puVar3);
          return CONCAT31(extraout_var,bVar1);
        }
        recovered_2c161(puVar3);
      }
    }
  }
  return 0;
}
