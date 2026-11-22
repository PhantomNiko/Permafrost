/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c012c (*(uint8_t volatile *)(0x214b0e0U))
undefined4 recovered_2042790(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int *piVar2;
  undefined4 *puVar3;

  cVar1 = DAT_020c012c;
  if (cVar1 != '\x01') {
    return 0;
  }
  piVar2 = recovered_2012220();
  if ((((*piVar2 == 0 && piVar2[1] == 0) || (puVar3 = recovered_2012220(), puVar3[2] == 0)) ||
      (puVar3 = recovered_2012220(), puVar3[3] == 0)) ||
     (puVar3 = recovered_2012220(), puVar3[4] == 0)) {
    return 0;
  }
  puVar3 = recovered_2012220();
  if (0x11 < puVar3[5] - 0xf) {
    return 0;
  }
  if ((0x20203U >> (puVar3[5] - 0xf & 0x1f) & 1) == 0) {
    return 0;
  }
  puVar3 = recovered_2012220();
  return CONCAT31((int3)(puVar3[5] - 1 >> 8),puVar3[5] - 1 < 0xfffffff8);
}
