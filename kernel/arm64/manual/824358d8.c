/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494780 (*(uint32_t volatile *)(0x8266ec60U))
#define DAT_40494788 (*(uint32_t volatile *)(0x8266ec68U))
#define DAT_404947f8 (*(uint64_t volatile *)(0x8266ed20U))
long recovered_824358d8(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;

  lVar3 = DAT_404947f8;
  if (lVar3 != 0) {
    uVar1 = DAT_40494780;
    iVar2 = DAT_40494788;
    if (param_1 < uVar1 && iVar2 != 0) {
      return lVar3 + (ulong)(iVar2 + 1) * (ulong)param_1;
    }
  }
  return 0;
}
