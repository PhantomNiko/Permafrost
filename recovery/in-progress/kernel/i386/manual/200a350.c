/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9165 (*(uint8_t volatile *)(0x2104335U))
#define DAT_020b9194 (*(uint8_t volatile *)(0x2104b6cU))
#define DAT_020b9195 (*(uint8_t volatile *)(0x2104b6dU))
#define DAT_020b9198 (*(uint32_t volatile *)(0x2104b70U))
#define Ram020b919c (*(uint32_t volatile *)(0x2104b74U))
undefined4 recovered_200a350(uint incoming_ecx,uint incoming_edx,int param_3,byte param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;

  if (((param_3 != 0) && (cVar1 = DAT_020b9165, cVar1 == '\x01')) &&
     (cVar1 = DAT_020b9194, cVar1 == (char)incoming_ecx)) {
    bVar2 = DAT_020b9195;
    uVar3 = DAT_020b9198;
    if (uVar3 != 0 && ((param_4 ^ bVar2) & 1) == 0) {
      uVar4 = Ram020b919c;
      uVar5 = Ram020b919c;
      iVar6 = Ram020b919c;
      uVar7 = uVar3 + iVar6 ^ incoming_edx;
      return CONCAT31((int3)(uVar7 >> 8),uVar7 == 0 && !CARRY4(uVar3,uVar4));
    }
  }
  return 0;
}
