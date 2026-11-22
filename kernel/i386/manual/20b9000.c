/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_0208f831 (*(char (*)[1])(0x20cce2eU))
undefined4 recovered_20b9000(int incoming_ecx,int *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint incoming_edx_00;
  int iVar2;
  undefined4 extraout_EAX = 0;

  iVar1 = *(int *)(incoming_ecx + 0x24);
  while( true ) {
    if (iVar1 == 0) {
      pf_varargs_204ff60___(incoming_edx,(char *)0x0,str_0208f831);
      return 0;
    }
    incoming_edx_00 = *(uint *)(incoming_ecx + 0x20);
    iVar2 = *(int *)((incoming_edx_00 - 0x5c) + iVar1 * 0x5c);
    *(int *)(incoming_ecx + 0x24) = iVar1 + -1;
    recovered_20b62b0((undefined4 *)((incoming_edx_00 - 0x5c) + iVar1 * 0x5c),incoming_edx_00);
    if (iVar2 != 0) break;
    iVar1 = *(int *)(incoming_ecx + 0x24);
  }
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}
