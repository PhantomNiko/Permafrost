/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c77f0 (*(uint32_t volatile *)(0x223dc08U))
#define DAT_020c77f4 (*(uint32_t volatile *)(0x223dc0cU))
#define DAT_020cf208 (*(uint32_t volatile *)(0x2245290U))
undefined4 recovered_208df50(uint incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  void *buffer;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;

  iVar5 = DAT_020c77f0;
  iVar2 = DAT_020cf208;
  buffer = (void *)DAT_020c77f4;
  if (iVar5 == iVar2) {
    uVar7 = 4;
    if (iVar5 != 0) {
      uVar7 = iVar5 * 2;
    }
    buffer = recovered_2001860(buffer,uVar7 * 8);
    if (buffer == (void *)0x0) {
      return 0;
    }
    DAT_020c77f4 = buffer;
    uVar3 = DAT_020cf208;
    iVar5 = uVar7 - uVar3;
    if (uVar3 <= uVar7 && iVar5 != 0) {
      puVar6 = (undefined4 *)((int)buffer + uVar3 * 8 + 4);
      do {
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6 = puVar6 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    DAT_020cf208 = uVar7;
    iVar5 = DAT_020c77f0;
  }
  uVar4 = recovered_20b7050((int *)((int)buffer + iVar5 * 8),incoming_ecx,incoming_edx);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  uVar1 = DAT_020c77f0;
  iVar5 = DAT_020c77f0;
  DAT_020c77f0 = iVar5 + 1;
  uVar1 = DAT_020c77f0;
  uVar1 = DAT_020c77f0;
  uVar1 = DAT_020c77f0;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}
