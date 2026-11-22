/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020d359e (*(char (*)[1])(0x20d359eU))
#define str_020d35a9 (*(char (*)[1])(0x20d35a9U))
#define str_020d35b5 (*(char (*)[1])(0x20d35b5U))
#define local_34 (*(char (*)[40])(frame + 28))


undefined4 recovered_20b5900(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 extraout_EAX = 0;
  undefined4 unaff_EBX = 0;
  undefined4 uVar2;

  uVar1 = recovered_20b5100(str_020d359e);
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if ((char)uVar1 == '\0') {
    uVar1 = recovered_20b5100(str_020d35a9);
    if ((char)uVar1 == '\0') {
      pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0x407);
      uVar1 = recovered_20b5100(local_34);
      if ((char)uVar1 == '\0') {
        pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0x409);
        uVar1 = recovered_20b5100(local_34);
        if ((char)uVar1 == '\0') {
          pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0x613);
          uVar1 = recovered_20b5100(local_34);
          if ((char)uVar1 == '\0') {
            pf_varargs_20044f0__4__4_(local_34,0x28,str_020d35b5,0x10de,0x647);
            uVar1 = recovered_20b5100(local_34);
            if ((char)uVar1 == '\0') {
              recovered_20b5b90(0x10de,0x867);
              uVar2 = extraout_EAX;
            }
          }
        }
      }
    }
  }
  return uVar2;
}
#undef str_020d359e
#undef str_020d35a9
#undef str_020d35b5
#undef local_34
