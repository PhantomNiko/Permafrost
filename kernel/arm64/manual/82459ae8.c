/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494938 (*(uint64_t volatile *)(0x8266eea8U))
#define DAT_40494940 (*(uint64_t volatile *)(0x8266eeb0U))
#define DAT_40494948 (*(uint64_t volatile *)(0x8266eeb8U))
undefined8 recovered_82459ae8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  void *buffer;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;

  lVar4 = DAT_40494938;
  lVar2 = DAT_40494940;
  buffer = (void *)DAT_40494948;
  if (lVar4 == lVar2) {
    uVar1 = 4;
    if (lVar4 != 0) {
      uVar1 = lVar4 << 1;
    }
    buffer = recovered_82400820(buffer,uVar1 * 0x18);
    if (buffer == (void *)0x0) {
      return 0;
    }
    DAT_40494948 = buffer;
    uVar3 = DAT_40494940;
    puVar5 = (undefined8 *)((long)buffer + uVar3 * 0x18 + 8);
    for (; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[-1] = 0;
      puVar5 = puVar5 + 3;
    }
    DAT_40494940 = uVar1;
    lVar4 = DAT_40494938;
  }
  recovered_8246aa08((long *)((long)buffer + lVar4 * 0x18));
  lVar2 = DAT_40494948;
  lVar4 = DAT_40494938;
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar2 + lVar4 * 0x18);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
  }
  DAT_40494938 = lVar4 + 1;
  return 1;
}
