#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c666
 */

uint recovered_2c666(int param_1,undefined1 *param_2,uint *param_3)

{
  unsigned char frame[64];

  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = &DAT_0002ca9c;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar4 = 0;
  if (param_3 != (uint *)0x0 && param_1 != 0) {
    puVar1 = (uint *)(param_1 + 4);
    for (; uVar4 < *puVar1; uVar4 = uVar4 + 1) {
      iVar3 = recovered_20cea(*(int *)(*(int *)(param_1 + 0xc) + uVar4 * 4),(int)puVar2);
      if (iVar3 == 0) goto LAB_0002c6c3;
    }
    uVar4 = recovered_2c6d8((int *)puVar1,puVar2);
    if ((char)uVar4 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1 - 1;
LAB_0002c6c3:
      *param_3 = uVar4;
      uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return uVar4;
}

