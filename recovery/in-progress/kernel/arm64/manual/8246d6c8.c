/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494820 (*(uint64_t volatile *)(0x8266ed80U))
#define uStack_24 (*(uint *)(frame + 28))
int recovered_8246d6c8(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;

  uStack_24 = 0;
  lVar2 = DAT_40494820;
  if (lVar2 == 0) {
    uVar5 = 0x80;
  }
  else {
    uVar5 = *(uint *)(lVar2 + 0x68);
  }
  uVar4 = recovered_8246c934((ulong)(uVar5 & 0xff),&uStack_24);
  lVar2 = DAT_40494820;
  iVar3 = (int)uVar4;
  if (lVar2 == 0) {
    iVar3 = 1;
  }
  puVar1 = &uStack_24;
  if (iVar3 == 0) {
    puVar1 = (uint *)(lVar2 + 0x84);
  }
  iVar3 = 0;
  if (0x41 < *puVar1) {
    iVar3 = *puVar1 - 0x41;
  }
  return iVar3;
}
