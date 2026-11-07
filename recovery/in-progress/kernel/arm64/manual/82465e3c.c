/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047c328 (*(uint32_t volatile *)(0x82558008U))
#define DAT_40494800 (*(uint64_t volatile *)(0x8266ed28U))
undefined4 * recovered_82465e3c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;

  uVar3 = 0;
  uVar1 = DAT_40494800;
  puVar2 = &DAT_4047c328;
  while( true ) {
    if (uVar1 <= uVar3) {
      return (undefined4 *)0x0;
    }
    if (((*(byte *)(puVar2 + 1) == param_1) && (puVar2[7] == 0)) &&
       (*(char *)((long)puVar2 + 0x21) != '\x01')) break;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xf;
  }
  return puVar2;
}
