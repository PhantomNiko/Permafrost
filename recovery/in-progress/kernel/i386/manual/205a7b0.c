/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



undefined4 recovered_205a7b0(undefined4 in_EAX,char *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar3;
  undefined4 uVar2;
  char cVar4;
  char cVar5;
  int iVar6;

  bVar3 = in_EDX == (char *)0x0 || in_ECX == (char *)0x0;
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar3,in_ECX == (char *)0x0));
  if (bVar3) {
    return 0;
  }
  if (*in_EDX != '\0') {
    cVar4 = *in_ECX;
    while (cVar4 != '\0') {
      iVar6 = 0;
      do {
        cVar5 = in_EDX[iVar6];
        uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
        if (cVar5 == '\0') {
          return uVar2;
        }
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          cVar4 = cVar4 + -0x20;
        }
        if ((byte)(cVar5 + 0x9fU) < 0x1a) {
          cVar5 = cVar5 + -0x20;
        }
        if (cVar4 != cVar5) goto LAB_0205a817;
        cVar4 = in_ECX[iVar6 + 1];
        iVar6 = iVar6 + 1;
      } while (cVar4 != '\0');
      if (in_EDX[iVar6] == '\0') {
        return uVar2;
      }
LAB_0205a817:
      pcVar1 = in_ECX + 1;
      in_ECX = in_ECX + 1;
      uVar2 = 0;
      cVar4 = *pcVar1;
    }
  }
  return 0;
}
