/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_404948b8 (*(uint64_t volatile *)(0x8266ee58U))
#define DAT_404948c0 (*(uint64_t volatile *)(0x8266ee60U))
undefined8 recovered_824535dc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  long lVar3;

  lVar3 = DAT_404948b8;
  lVar2 = DAT_404948c0;
  puVar1 = (undefined8 *)(lVar2 + 8);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(puVar1 + -1) == param_1) break;
    puVar1 = puVar1 + 2;
    lVar3 = lVar3 + -1;
  }
  return *puVar1;
}
