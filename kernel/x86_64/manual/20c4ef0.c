/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_68 (*(char (*)[96])(frame + 24))
#define str_020a5b68 (*(char (*)[1])(0x20f630aU))
void recovered_20c4ef0(uint param_1,uint param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = pf_varargs_20039e0__4__4_(local_68,0x60,str_020a5b68,param_1,param_2);
  if (0xffffffa0 < uVar1 - 0x60) {
    recovered_203f020(0x20ec130U,(long)local_68,(ulong)uVar1);
  }
  return;
}
