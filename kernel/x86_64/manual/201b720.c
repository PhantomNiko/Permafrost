/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a26cd (*(uint8_t *)(0x20ec4f1U))
#define str_020a26d0 (*(char (*)[1])(0x20ec4f4U))
void recovered_201b720(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_2002e80(str_020a26d0);
  recovered_201b370(0x20ec4f4U,uVar1);
  uVar1 = recovered_2002e80(&DAT_020a26cd);
  recovered_201b370(0x20ec4f1U,uVar1);
  return;
}
