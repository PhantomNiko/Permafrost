/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define local_148 (*(char (*)[320])(frame + 24))
void recovered_2018250(undefined *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  char *format;
  int iVar1;
  undefined1 *puVar2;

  format = &DAT_0208e323;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_0208e2dc;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_20044f0(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_2017f90(local_148,iVar1);
  }
  return;
}
