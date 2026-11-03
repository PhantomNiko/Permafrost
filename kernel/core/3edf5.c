#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3edf5
 */

uint recovered_3edf5(int param_1,undefined1 *param_2,uint *param_3)

{
  unsigned char frame[64];

  uint *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;

  pcVar2 = &DAT_0003f254;
  if (param_2 != (undefined1 *)0x0) {
    pcVar2 = param_2;
  }
  uVar4 = 0;
  if (param_3 != (uint *)0x0 && param_1 != 0) {
    puVar1 = (uint *)(param_1 + 4);
    for (; uVar4 < *puVar1; uVar4 = uVar4 + 1) {
      iVar3 = recovered_2100f(*(int *)(*(int *)(param_1 + 0xc) + uVar4 * 4),(int)pcVar2);
      if (iVar3 == 0) goto LAB_0003ee52;
    }
    uVar4 = recovered_2eecd((int *)puVar1,pcVar2);
    if ((char)uVar4 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1 - 1;
LAB_0003ee52:
      *param_3 = uVar4;
      uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return uVar4;
}
