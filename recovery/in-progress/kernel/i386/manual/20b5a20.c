/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020d35b5 (*(char (*)[1])(0x20d35b5U))
#define local_34 (*(char (*)[40])(frame + 28))


undefined4 recovered_20b5a20(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX = 0;

  pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0xab9);
  uVar1 = recovered_20b5100(local_34);
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if ((char)uVar1 == '\0') {
    pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0xac0);
    uVar1 = recovered_20b5100(local_34);
    if ((char)uVar1 == '\0') {
      pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0xaa2);
      uVar1 = recovered_20b5100(local_34);
      if ((char)uVar1 == '\0') {
        pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0xab0);
        uVar1 = recovered_20b5100(local_34);
        if ((char)uVar1 == '\0') {
          pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0xaa5);
          uVar1 = recovered_20b5100(local_34);
          if ((char)uVar1 == '\0') {
            pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0xaa6);
            uVar1 = recovered_20b5100(local_34);
            if ((char)uVar1 == '\0') {
              pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0xaa7);
              uVar1 = recovered_20b5100(local_34);
              if ((char)uVar1 == '\0') {
                pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0xaa9);
                uVar2 = recovered_20b5100(local_34);
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}
#undef str_020d35b5
#undef local_34
