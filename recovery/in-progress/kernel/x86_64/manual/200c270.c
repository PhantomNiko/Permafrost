/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ae0a0 (*(uint64_t volatile *)(0x210cc20U))
#define DAT_020ae0a8 (*(uint32_t volatile *)(0x210cc28U))
#define DAT_020ae0ac (*(uint32_t volatile *)(0x210cc2cU))
#define DAT_020ae0b0 (*(uint32_t volatile *)(0x210cc30U))
#define DAT_020ae0b4 (*(uint32_t volatile *)(0x210cc34U))
ulong recovered_200c270(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;

  uVar4 = 0;
  lVar1 = DAT_020ae0a0;
  if ((((lVar1 != 0) && (iVar2 = DAT_020ae0a8, iVar2 != 0)) && (iVar2 = DAT_020ae0ac, iVar2 != 0))
     && (iVar2 = DAT_020ae0b0, iVar2 != 0)) {
    uVar3 = DAT_020ae0b4;
    if (uVar3 < 0x21) {
      uVar4 = 0x101018000 >> ((byte)uVar3 & 0x3f);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4 & 0xffffffffffffff01;
}
