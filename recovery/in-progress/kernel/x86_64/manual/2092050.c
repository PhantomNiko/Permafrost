/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf660 (*(uint8_t volatile *)(0x216a9b6U))
#define DAT_020cf668 (*(uint64_t volatile *)(0x216a9b8U))
undefined4 recovered_2092050(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  uint uVar3;

  cVar1 = DAT_020cf660;
  if ((cVar1 == '\0') && (uVar3 = recovered_2041800(), (char)uVar3 == '\0')) {
    return 0;
  }
  uVar2 = PF_PART4(DAT_020cf668, 0);
  return uVar2;
}
