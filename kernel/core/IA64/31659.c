#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#define local_14 (*(undefined4 * *)(frame + 24))
#define local_1c (*(uint *)(frame + 16))
#define local_18 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31659
 */

undefined4 recovered_31659(int param_1,int param_2,undefined4 *param_3,int *param_4,undefined4 *param_5)

{
  unsigned char frame[76];

  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;

  local_14 = (undefined4 *)0x0;
  local_1c = 0;
  if (param_5 != (undefined4 *)0x0 && (param_4 != (int *)0x0 && param_3 != (undefined4 *)0x0)) {
    uVar6 = 1;
    uVar4 = 0;
    local_18 = param_2;
    do {
      if (local_18 + uVar4 == 0) {
        *param_3 = local_14;
        *param_4 = local_18;
        *param_5 = local_1c;
        return CONCAT31((int3)(local_1c >> 8),1);
      }
      if (param_1 == 0) {
        puVar5 = &DAT_0004627c;
      }
      else {
        puVar5 = *(undefined1 **)(param_1 + -4 + uVar6 * 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0004627c;
        }
      }
      uVar1 = recovered_2e3b2((int *)&local_14,&local_1c,uVar6);
      if ((char)uVar1 == '\0') {
        uVar4 = -uVar4;
        goto LAB_00031715;
      }
      iVar2 = recovered_213fa((int)puVar5);
      pvVar3 = recovered_29c3c((int)puVar5,iVar2);
      local_14[uVar6 - 1] = pvVar3;
      uVar4 = uVar4 - 1;
      iVar2 = uVar6 - 1;
      uVar6 = uVar6 + 1;
    } while (local_14[iVar2] != 0);
    uVar4 = ~uVar4;
LAB_00031715:
    recovered_2c249(local_14,uVar4);
  }
  return 0;
}
