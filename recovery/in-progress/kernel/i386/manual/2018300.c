/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e40d (*(uint8_t *)(0x20c5137U))
#define str_0208e410 (*(char (*)[1])(0x20c513aU))
void recovered_2018300(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_2002270(str_0208e410);
  recovered_2017f90(str_0208e410,uVar1);
  uVar1 = recovered_2002270(&DAT_0208e40d);
  recovered_2017f90(&DAT_0208e40d,uVar1);
  return;
}
