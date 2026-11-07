/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_404948a8 (*(uint64_t volatile *)(0x8266ee48U))
#define DAT_404948b0 (*(uint64_t volatile *)(0x8266ee50U))
#define DAT_40494950 (*(uint64_t volatile *)(0x8266eec0U))
undefined8 recovered_82459c10(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  void *buffer;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;

  lVar2 = DAT_40494950;
  lVar5 = DAT_404948a8;
  buffer = (void *)DAT_404948b0;
  if (lVar5 == lVar2) {
    uVar1 = 4;
    if (lVar5 != 0) {
      uVar1 = lVar5 << 1;
    }
    buffer = recovered_82400820(buffer,uVar1 << 4);
    if (buffer == (void *)0x0) {
      return 0;
    }
    DAT_404948b0 = buffer;
    uVar4 = DAT_40494950;
    puVar6 = (undefined8 *)((long)buffer + uVar4 * 0x10 + 8);
    for (; uVar4 < uVar1; uVar4 = uVar4 + 1) {
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 2;
    }
    DAT_40494950 = uVar1;
    lVar5 = DAT_404948a8;
  }
  uVar3 = recovered_8246b090((long *)((long)buffer + lVar5 * 0x10),param_1,param_2);
  if ((int)uVar3 != 0) {
    lVar5 = DAT_404948a8;
    DAT_404948a8 = lVar5 + 1;
    uVar3 = 1;
  }
  return uVar3;
}
