#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x426a9
 */

uint recovered_426a9(int *container,char *text,uint size)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;

  if (container == (int *)0x0) {
    return 0;
  }
  uVar4 = container[1];
  uVar1 = *container + 1;
  if (uVar4 < uVar1) {
    uVar6 = 8;
    if (uVar4 != 0) {
      uVar6 = uVar4;
    }
    for (; uVar6 < uVar1; uVar6 = uVar6 * 2) {
      if ((int)uVar6 < 0) {
        uVar6 = uVar1;
        break;
      }
    }
    iVar2 = recovered_21289(container[2],uVar6 * 4);
    if (iVar2 == 0) {
      return 0;
    }
    for (uVar4 = container[1]; uVar4 < uVar6; uVar4 = uVar4 + 1) {
      *(undefined4 *)(iVar2 + uVar4 * 4) = 0;
    }
    container[2] = iVar2;
    container[1] = uVar6;
  }
  pcVar5 = &DAT_00057364;
  if (text != (char *)0x0) {
    pcVar5 = text;
  }
  pvVar3 = recovered_3773b((int)pcVar5,size);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  iVar2 = *container;
  *container = iVar2 + 1;
  *(void **)(container[2] + iVar2 * 4) = pvVar3;
  return CONCAT31((int3)((uint)pvVar3 >> 8),1);
}
