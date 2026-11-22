/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_0223b700 (*(uint32_t volatile *)(0x223b700U))
#define DAT_0223b704 (*(uint32_t volatile *)(0x223b704U))


void recovered_206de50(char *in_ECX,uint in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *out;
  uint uVar5;

  iVar4 = DAT_0223b700;
  if ((in_ECX == (char *)0x0 || iVar4 == 0) || (*in_ECX == '\0')) {
    return;
  }
  iVar2 = DAT_0223b704;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    uVar5 = 0;
    do {
      iVar2 = DAT_0223b700;
      iVar2 = recovered_20022a0((char *)(iVar2 + iVar4),in_ECX);
      if (iVar2 == 0) {
        if (-1 < (int)uVar5) {
          uVar1 = DAT_0223b700;
          uVar1 = DAT_0223b700;
          iVar2 = DAT_0223b700;
          out = (char *)(iVar4 + iVar2);
          goto joined_r0x0206dece;
        }
        uVar3 = DAT_0223b704;
        break;
      }
      uVar5 = uVar5 + 1;
      uVar3 = DAT_0223b704;
      iVar4 = iVar4 + 0x571;
    } while (uVar5 < uVar3);
    if (0x2ff < uVar3) {
      return;
    }
    iVar4 = DAT_0223b700;
  }
  DAT_0223b704 = uVar3 + 1;
  out = (char *)(uVar3 * 0x571 + iVar4);
  recovered_2001e00(out,0,0x571);
  pf_varargs_20044f0__4_(out,0xf1,&DAT_020c5119,(uint)in_ECX);
joined_r0x0206dece:
  if (in_EDX != 0) {
    pf_varargs_20044f0__4_(out + 0x111,0x60,&DAT_020c5119,in_EDX);
  }
  if (param_3 != 0) {
    pf_varargs_20044f0__4_(out + 0x171,0x400,&DAT_020c5119,param_3);
  }
  recovered_206cda0(out);
  return;
}
#undef DAT_020c5119
#undef DAT_0223b700
#undef DAT_0223b704
