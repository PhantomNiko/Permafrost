/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047afa8 (*(uint64_t volatile *)(0x825421d8U))
#define DAT_4047afb0 (*(uint32_t volatile *)(0x825421e0U))
#define DAT_4047afb4 (*(uint32_t volatile *)(0x825421e4U))
#define DAT_4047afb8 (*(uint32_t volatile *)(0x825421e8U))
#define DAT_4047afbc (*(uint32_t volatile *)(0x825421ecU))
uint recovered_82405e14(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = 0;
  lVar1 = DAT_4047afa8;
  if ((((lVar1 != 0) && (iVar2 = DAT_4047afb0, iVar2 != 0)) && (iVar2 = DAT_4047afb4, iVar2 != 0))
     && (iVar2 = DAT_4047afb8, iVar2 != 0)) {
    uVar3 = DAT_4047afbc;
    uVar4 = 0;
    if (uVar3 < 0x21) {
      uVar4 = (uint)(0x101018000 >> ((ulong)uVar3 & 0x3f));
    }
  }
  return uVar4 & 1;
}
