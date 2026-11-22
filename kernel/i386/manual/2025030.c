/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9670 (*(uint8_t volatile *)(0x21302f1U))
#define DAT_020b9674 (*(uint32_t volatile *)(0x21302f4U))
uint recovered_2025030(uint in_ECX,uchar *in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;

  cVar1 = DAT_020b9670;
  if (cVar1 == '\0') {
    uVar2 = 0;
    do {
      uVar3 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
      uVar3 = -(uVar3 & 1) & 0xedb88320 ^ uVar3 >> 1;
      uVar3 = -(uVar3 & 1) & 0xedb88320 ^ uVar3 >> 1;
      uVar3 = -(uVar3 & 1) & 0xedb88320 ^ uVar3 >> 1;
      uVar3 = -(uVar3 & 1) & 0xedb88320 ^ uVar3 >> 1;
      uVar3 = -(uVar3 & 1) & 0xedb88320 ^ uVar3 >> 1;
      uVar3 = -(uVar3 & 1) & 0xedb88320 ^ uVar3 >> 1;
      (&DAT_020b9674)[uVar2] = -(uVar3 & 1) & 0xedb88320 ^ uVar3 >> 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x100);
    DAT_020b9670 = 1;
  }
  if (param_3 != 0) {
    uVar2 = ~in_ECX;
    do {
      uVar2 = uVar2 >> 8 ^ (&DAT_020b9674)[(byte)(*in_EDX ^ (byte)uVar2)];
      in_EDX = in_EDX + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    in_ECX = ~uVar2;
  }
  return in_ECX;
}
