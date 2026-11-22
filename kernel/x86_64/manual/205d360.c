/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d5918 (*(uint8_t volatile *)(0x21765a0U))
uchar recovered_205d360(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  long *plVar2;
  ulonglong uVar3;
  bool bVar4;

  cVar1 = DAT_020d5918;
  if (cVar1 != '\x01') {
    return '\0';
  }
  plVar2 = (long *)recovered_20135a0();
  if (*plVar2 != 0) {
    uVar3 = recovered_20135a0();
    if (*(int *)(uVar3 + 8) != 0) {
      uVar3 = recovered_20135a0();
      if (*(int *)(uVar3 + 0xc) != 0) {
        uVar3 = recovered_20135a0();
        if (*(int *)(uVar3 + 0x10) != 0) {
          uVar3 = recovered_20135a0();
          bVar4 = false;
          if (((ulong)*(uint *)(uVar3 + 0x14) < 0x21) &&
             ((0x101018000U >> ((ulong)*(uint *)(uVar3 + 0x14) & 0x3f) & 1) != 0)) {
            uVar3 = recovered_20135a0();
            bVar4 = *(int *)(uVar3 + 0x14) - 1U < 0xfffffff8;
          }
          return bVar4;
        }
      }
    }
  }
  return '\0';
}
