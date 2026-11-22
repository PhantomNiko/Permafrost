/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020d35b5 (*(char (*)[1])(0x20d35b5U))
#define local_34 (*(char (*)[40])(frame + 28))


undefined4 recovered_20b5bc0(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX = 0;

  pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x8086,0x2a00);
  uVar1 = recovered_20b5100(local_34);
  if ((char)uVar1 == '\0') {
    pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x8086,0x2a02);
    uVar1 = recovered_20b5100(local_34);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x8086,0x2815);
  uVar1 = recovered_20b5100(local_34);
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if ((char)uVar1 == '\0') {
    pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x8086,0x2829);
    uVar1 = recovered_20b5100(local_34);
    if ((char)uVar1 == '\0') {
      pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x8086,0x2830);
      uVar1 = recovered_20b5100(local_34);
      if ((char)uVar1 == '\0') {
        pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x8086,0x2836);
        uVar1 = recovered_20b5100(local_34);
        if ((char)uVar1 == '\0') {
          pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x8086,0x283a);
          uVar1 = recovered_20b5100(local_34);
          if ((char)uVar1 == '\0') {
            pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x8086,0x284b);
            uVar2 = recovered_20b5100(local_34);
          }
        }
      }
    }
  }
  return uVar2;
}
#undef str_020d35b5
#undef local_34
