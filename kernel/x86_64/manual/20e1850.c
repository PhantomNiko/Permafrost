/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_020a3acf (*(char (*)[1])(0x20f4290U))
uint recovered_20e1850(long param_1,int *param_2,long in_RCX,long in_R8,undefined8 in_R9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;

  lVar2 = *(long *)(param_1 + 0x48);
  while( true ) {
    if (lVar2 == 0) {
      pf_varargs_205eb00___(param_2,(char *)0x0,str_020a3acf);
      return 0;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x40) + -0xa8 + lVar2 * 0xa8);
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    recovered_20de6a0((undefined4 *)(*(long *)(param_1 + 0x40) + lVar2 * 0xa8 + -0xa8));
    if (iVar1 != 0) break;
    lVar2 = *(long *)(param_1 + 0x48);
  }
  return (uint)CONCAT71((int7)((ulong)param_1 >> 8),1);
}
