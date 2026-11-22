/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02130798 (*(uint32_t volatile *)(0x2130798U))
#define DAT_021307b4 (*(uint32_t volatile *)(0x21307b4U))
#define DAT_021307b8 (*(uint32_t volatile *)(0x21307b8U))
#define DAT_021307bc (*(uint32_t volatile *)(0x21307bcU))
#define DAT_021307c0 (*(uint8_t volatile *)(0x21307c0U))


void recovered_2050a30(uint in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  void *out;
  int iVar3;
  int iVar4;
  uint uVar5;

  uVar5 = DAT_02130798;
  if (in_ECX < uVar5) {
    iVar3 = DAT_021307b4;
    if (iVar3 == 0) {
      uVar5 = uVar5 + 7 >> 3;
      out = recovered_2001650(uVar5);
      DAT_021307b4 = out;
      if (out == (void *)0x0) {
        DAT_021307c0 = 1;
        DAT_021307b8 = 0;
        iVar3 = DAT_02130798;
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = iVar3 + -1;
        }
        DAT_021307bc = iVar4;
        return;
      }
      recovered_2001e00(out,0,uVar5);
      iVar3 = DAT_021307b4;
    }
    pbVar1 = (byte *)(iVar3 + (in_ECX >> 3));
    *pbVar1 = *pbVar1 | (byte)(1 << ((byte)in_ECX & 7));
    cVar2 = DAT_021307c0;
    if (cVar2 == '\0') {
      DAT_021307b8 = in_ECX;
      DAT_021307bc = in_ECX;
      DAT_021307c0 = 1;
    }
    else {
      uVar5 = DAT_021307b8;
      if (in_ECX < uVar5) {
        DAT_021307b8 = in_ECX;
      }
      uVar5 = DAT_021307bc;
      if (uVar5 < in_ECX) {
        DAT_021307bc = in_ECX;
      }
    }
  }
  return;
}
#undef DAT_02130798
#undef DAT_021307b4
#undef DAT_021307b8
#undef DAT_021307bc
#undef DAT_021307c0
