/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045394c (*(uint8_t *)(0x8247e712U))
#define str_40453951 (*(char (*)[1])(0x8247e717U))
undefined8 recovered_82467f8c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (bVar1 = recovered_8243a1f0((byte *)param_1,&DAT_4045394c), bVar1)) {
    return 1;
  }
  bVar1 = recovered_8243a1f0((byte *)param_1,(byte *)str_40453951);
  return (ulong)bVar1;
}
