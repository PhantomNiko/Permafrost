/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c531e (*(uint8_t *)(0x20c531eU))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_020d9d6a (*(uint8_t volatile *)(0x20d9d6aU))
#define DAT_020d9d6b (*(uint8_t volatile *)(0x20d9d6bU))
#define DAT_020d9d6c (*(uint32_t volatile *)(0x20d9d6cU))
#define DAT_020d9d70 (*(uint32_t volatile *)(0x20d9d70U))
#define DAT_020d9db4 (*(uint8_t volatile *)(0x20d9db4U))
#define DAT_020d9f05 (*(uint8_t volatile *)(0x20d9f05U))
#define DAT_020d9ff6 (*(uint8_t volatile *)(0x20d9ff6U))
#define DAT_020da0e7 (*(uint8_t volatile *)(0x20da0e7U))
#define str_020c71df (*(char (*)[1])(0x20c71dfU))
#define str_020c71f8 (*(char (*)[1])(0x20c71f8U))
#define str_020cc51e (*(char (*)[1])(0x20cc51eU))
#define str_020cc527 (*(char (*)[1])(0x20cc527U))
#define str_020cc535 (*(char (*)[1])(0x20cc535U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define str_020de0ec (*(char volatile (*)[1])(0x20de0ecU))
#define vararg1 (*(char * *)(frame + 36))
#define format (*(char * *)(frame + 28))


undefined4 recovered_205ead0(char *in_ECX,uint in_EDX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  char *vararg0;
  undefined4 extraout_EAX = 0;
  undefined1 *bytes;

  uVar3 = 0;
  cVar2 = DAT_020d9d6a;
  if ((cVar2 == '\x01') && (cVar2 = DAT_020d9ff6, cVar2 != '\0')) {
    iVar1 = DAT_020d9d5c;
    uVar4 = DAT_020d9d70;
    bytes = (undefined1 *)0x0;
    if (uVar4 != 0) {
      bytes = &DAT_020da0e7;
    }
    uVar4 = recovered_202b490(iVar1,&DAT_020d9ff6,bytes,uVar4);
    if (uVar4 == 0) {
      pf_varargs_202ecc0__4_(in_ECX,in_EDX,str_020c71df,0x20d9f05);
      uVar3 = 0;
    }
    else {
      DAT_020d9d6b = 0;
      iVar1 = DAT_020d9d6c;
      if (iVar1 == 0) {
        cVar2 = DAT_020d9d6a;
        if (cVar2 == '\x01') {
          cVar2 = DAT_020d9f05;
          vararg0 = str_020cc51e;
          if (cVar2 != '\0') {
            vararg0 = &DAT_020d9f05;
          }
          vararg1 = &DAT_020c5084;
          format = str_020cc527;
        }
        else {
          cVar2 = str_020d9e14[0];
          vararg1 = &DAT_020c5359;
          if (cVar2 != '\0') {
            vararg1 = str_020d9e14;
          }
          cVar2 = DAT_020d9db4;
          vararg0 = &DAT_020c531e;
          if (cVar2 != '\0') {
            vararg0 = &DAT_020d9db4;
          }
          format = str_020cc535;
        }
        pf_varargs_20044f0__4__4_(str_020de0ec,0x60,format,(uint)vararg0,(uint)vararg1);
      }
      else {
        recovered_2053bd0();
      }
      uVar4 = DAT_020d9d70;
      pf_varargs_202ecc0__4__4_(in_ECX,in_EDX,str_020c71f8,uVar4,0x20d9f05);
      uVar3 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  return uVar3;
}
#undef DAT_020c5084
#undef DAT_020c531e
#undef DAT_020c5359
#undef DAT_020d9d5c
#undef DAT_020d9d6a
#undef DAT_020d9d6b
#undef DAT_020d9d6c
#undef DAT_020d9d70
#undef DAT_020d9db4
#undef DAT_020d9f05
#undef DAT_020d9ff6
#undef DAT_020da0e7
#undef str_020c71df
#undef str_020c71f8
#undef str_020cc51e
#undef str_020cc527
#undef str_020cc535
#undef str_020d9e14
#undef str_020de0ec
#undef vararg1
#undef format
