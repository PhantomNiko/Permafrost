#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5611b
 */

uint recovered_5611b(int param_1,undefined1 *param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  uint *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;

  pcVar2 = &DAT_00057364;
  if (param_2 != (undefined1 *)0x0) {
    pcVar2 = param_2;
  }
  uVar4 = 0;
  if (param_3 != (uint *)0x0 && param_1 != 0) {
    puVar1 = (uint *)(param_1 + 4);
    for (; uVar4 < *puVar1; uVar4 = uVar4 + 1) {
      iVar3 = recovered_214f9(*(int *)(*(int *)(param_1 + 0xc) + uVar4 * 4),(int)pcVar2);
      if (iVar3 == 0) goto LAB_00056178;
    }
    uVar4 = recovered_4273c((int *)puVar1,pcVar2);
    if ((char)uVar4 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1 - 1;
LAB_00056178:
      *param_3 = uVar4;
      uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return uVar4;
}
