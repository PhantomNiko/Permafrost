/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c7906 (*(uint8_t volatile *)(0x223dd1eU))
#define DAT_020cf1cc (*(uint8_t volatile *)(0x2245234U))
#define DAT_020cf1d0 (*(uint32_t volatile *)(0x2245238U))
#define DAT_020cf1d4 (*(uint32_t volatile *)(0x224523cU))
#define DAT_020cf1d8 (*(uint32_t volatile *)(0x2245240U))
#define DAT_020cf1e0 (*(uint32_t volatile *)(0x2245248U))
#define DAT_020cf1e4 (*(uint32_t volatile *)(0x224524cU))
#define DAT_020cf1e8 (*(uint32_t volatile *)(0x2245250U))
#define DAT_020cf1ec (*(uint32_t volatile *)(0x2245254U))
#define DAT_020cf1f0 (*(uint32_t volatile *)(0x2245258U))
#define Ram020cf1dc (*(uint32_t volatile *)(0x2245244U))
#define Ram020cf1f4 (*(uint32_t volatile *)(0x224525cU))
void recovered_209c3f0(uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *incoming_ecx;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint incoming_edx;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint extraout_EDX_02 = 0;
  uint uVar4;
  int iVar5;
  uint uVar6;

  incoming_ecx = (uint *)DAT_020cf1d0;
  if (incoming_ecx != (uint *)0x0) {
    recovered_207b2c0(incoming_ecx,in_EDX);
  }
  DAT_020cf1d0 = 0;
  iVar5 = DAT_020cf1d8;
  if (iVar5 != 0) {
    uVar4 = 0;
    iVar5 = 4;
    do {
      iVar1 = DAT_020cf1d4;
      recovered_2001710(*(void **)(iVar1 + -4 + iVar5));
      iVar1 = DAT_020cf1d4;
      recovered_2043a90((undefined4 *)(iVar1 + iVar5),incoming_edx);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x2c;
      uVar6 = DAT_020cf1d8;
    } while (uVar4 < uVar6);
  }
  pvVar2 = (void *)DAT_020cf1d4;
  recovered_2001710(pvVar2);
  DAT_020cf1d4 = 0;
  DAT_020cf1d8 = 0;
  Ram020cf1dc = 0;
  iVar5 = DAT_020cf1e4;
  if (iVar5 != 0) {
    iVar5 = 0;
    uVar6 = 0;
    uVar4 = extraout_EDX;
    do {
      iVar1 = DAT_020cf1e0;
      recovered_2043a90((undefined4 *)(iVar1 + iVar5),uVar4);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x24;
      uVar3 = DAT_020cf1e4;
      uVar4 = extraout_EDX_00;
    } while (uVar6 < uVar3);
  }
  pvVar2 = (void *)DAT_020cf1e0;
  recovered_2001710(pvVar2);
  DAT_020cf1e0 = 0;
  DAT_020cf1e4 = 0;
  iVar5 = DAT_020cf1f0;
  if (iVar5 != 0) {
    iVar5 = 0;
    uVar6 = 0;
    uVar4 = extraout_EDX_01;
    do {
      iVar1 = DAT_020cf1ec;
      recovered_20b62b0((undefined4 *)(iVar1 + iVar5),uVar4);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x5c;
      uVar3 = DAT_020cf1f0;
      uVar4 = extraout_EDX_02;
    } while (uVar6 < uVar3);
  }
  pvVar2 = (void *)DAT_020cf1ec;
  recovered_2001710(pvVar2);
  DAT_020cf1ec = 0;
  DAT_020cf1f0 = 0;
  Ram020cf1f4 = 0;
  DAT_020cf1e8 = 0;
  DAT_020cf1cc = 0;
  DAT_020c7906 = 0;
  return;
}
