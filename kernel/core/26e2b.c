#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26e2b
 */

uint recovered_26e2b(int *container,char *text,uint size)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  if (container == (int *)0x0) {
    return 0;
  }
  uVar4 = container[1];
  uVar2 = *container + 1;
  if (uVar4 < uVar2) {
    uVar6 = 8;
    if (uVar4 != 0) {
      uVar6 = uVar4;
    }
    for (; uVar6 < uVar2; uVar6 = uVar6 * 2) {
      if ((int)uVar6 < 0) {
        uVar6 = uVar2;
        break;
      }
    }
    iVar3 = recovered_20b68(container[2],uVar6 * 4);
    if (iVar3 == 0) {
      return 0;
    }
    for (uVar4 = container[1]; uVar4 < uVar6; uVar4 = uVar4 + 1) {
      *(undefined4 *)(iVar3 + uVar4 * 4) = 0;
    }
    container[2] = iVar3;
    container[1] = uVar6;
  }
  pcVar5 = &DAT_0002ca9c;
  if (text != (char *)0x0) {
    pcVar5 = text;
  }
  iVar3 = recovered_24f9e((int)pcVar5,size);
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = *container;
  *container = iVar1 + 1;
  *(int *)(container[2] + iVar1 * 4) = iVar3;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

