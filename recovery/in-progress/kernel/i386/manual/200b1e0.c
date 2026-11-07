/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_02098a58 (*(uint32_t volatile *)(0x20e3c10U))
#define DAT_02098a5c (*(uint32_t volatile *)(0x20e3c14U))
#define DAT_02098a60 (*(uint32_t volatile *)(0x20e3c18U))
#define DAT_02098a64 (*(uint32_t volatile *)(0x20e3c1cU))
#define DAT_02098a68 (*(uint32_t volatile *)(0x20e3c20U))
#define DAT_02098a6c (*(uint32_t volatile *)(0x20e3c24U))
uint recovered_200b1e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;

  iVar1 = DAT_02098a58;
  uVar3 = 0;
  iVar2 = DAT_02098a5c;
  if ((((iVar1 != 0 || iVar2 != 0) && (iVar1 = DAT_02098a60, iVar1 != 0)) &&
      (iVar1 = DAT_02098a64, iVar1 != 0)) && (iVar1 = DAT_02098a68, iVar1 != 0)) {
    iVar1 = DAT_02098a6c;
    if (iVar1 - 0xfU < 0x12) {
      uVar3 = 0x20203 >> ((byte)(iVar1 - 0xfU) & 0x1f);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffff01;
}
