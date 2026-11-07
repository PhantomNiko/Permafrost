/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40450365 (*(uint8_t *)(0x8247a225U))
#define DAT_404504cb (*(uint8_t *)(0x8247a380U))
#define local_18 (*(char * *)(frame + 24))
#define str_40457c2e (*(char (*)[1])(0x824844e0U))
void recovered_8246f050(long param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *pcVar2;

  local_18 = (char *)0x0;
  if (param_1 == 0) {
    recovered_8242d468(&DAT_40450365);
    return;
  }
  bVar1 = recovered_82452da0((int *)param_1,&local_18);
  if ((bVar1 & 1) == 0) {
    pcVar2 = str_40457c2e;
  }
  else {
    pcVar2 = &DAT_404504cb;
    if (local_18 != (char *)0x0) {
      pcVar2 = local_18;
    }
  }
  recovered_8242d468(pcVar2);
  recovered_82400748(local_18);
  return;
}
