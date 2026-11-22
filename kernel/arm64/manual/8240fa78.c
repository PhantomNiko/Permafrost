/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047ba30 (*(uint64_t volatile *)(0x82547b10U))
long recovered_8240fa78(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;

  if (param_1 == 0) {
    return 0;
  }
  uVar1 = DAT_4047ba30;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_4047ba30 = param_1;
  lVar2 = recovered_8240fbb0(param_1);
  return lVar2;
}
