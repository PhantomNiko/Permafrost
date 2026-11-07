/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define acStack_121 (*(char (*)[241])(frame + 31))
undefined8 recovered_82469760(long param_1)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = 0;
  do {
    if (*(char *)(param_1 + size) == '/') {
      if (size - 0xf1 < 0xffffffffffffff10) {
        return 0;
      }
      recovered_82400928(acStack_121,(void *)param_1,size);
      acStack_121[size] = '\0';
      bVar1 = recovered_82422ba4(acStack_121);
      if (bVar1 == 0) {
        return 0;
      }
    }
    else if (*(char *)(param_1 + size) == '\0') {
      return 1;
    }
    size = size + 1;
  } while( true );
}
