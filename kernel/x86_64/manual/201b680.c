/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define local_148 (*(char (*)[320])(frame + 24))
void recovered_201b680(undefined *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  char *format;

  format = &DAT_020a25e3;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_020a259c;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_2005a30(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_201b370((long)local_148,(ulong)uVar1);
  }
  return;
}
