#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4219a
 */

uint recovered_4219a(int param_1,undefined1 *param_2,uint *param_3)

{
  unsigned char frame[64];

  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;

  puVar2 = &DAT_00042614;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar4 = 0;
  if (param_3 != (uint *)0x0 && param_1 != 0) {
    puVar1 = (uint *)(param_1 + 4);
    for (; uVar4 < *puVar1; uVar4 = uVar4 + 1) {
      iVar3 = recovered_2100f(*(int *)(*(int *)(param_1 + 0xc) + uVar4 * 4),(int)puVar2);
      if (iVar3 == 0) goto LAB_000421f7;
    }
    uVar4 = recovered_3164f((int *)puVar1,puVar2);
    if ((char)uVar4 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1 - 1;
LAB_000421f7:
      *param_3 = uVar4;
      uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return uVar4;
}
