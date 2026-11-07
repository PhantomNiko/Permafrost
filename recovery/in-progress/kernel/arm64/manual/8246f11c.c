/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e262 (*(uint8_t *)(0x82473a33U))
#define local_28 (*(void * *)(frame + 24))
undefined8 recovered_8246f11c(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar2 = 0;
  local_28 = (void *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = recovered_82452da0((int *)param_1,&local_28);
    if (uVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      pf_varargs_404019bc_1((char *)param_2,0xf1,&DAT_4044e262,(ulonglong)local_28);
      uVar2 = 1;
    }
  }
  recovered_82400748(local_28);
  return uVar2;
}
