/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#define DAT_020e0004 (*(uint32_t volatile *)(0x20e0004U))
#define DAT_02103330 (*(uint32_t volatile *)(0x2103330U))
#define DAT_02130021 (*(uint8_t volatile *)(0x2130021U))
#define DAT_02130028 (*(uint8_t volatile *)(0x2130028U))
#define DAT_0213002c (*(uint8_t volatile *)(0x213002cU))
#define DAT_02130030 (*(uint8_t volatile *)(0x2130030U))
#define Ram02130028 (*(uint32_t volatile *)(0x2130028U))
#define Ram0213002c (*(uint32_t volatile *)(0x213002cU))
#define Ram02130030 (*(uint32_t volatile *)(0x2130030U))
#define _DAT_0000046c (*(uint *)(0x46cU))


uint recovered_20081a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;

  piVar2 = (int *)DAT_020e0004;
  if ((((piVar2 == (int *)0x0) || (*piVar2 != 0x33454657)) || (piVar2[1] != 5)) ||
     ((uint)piVar2[2] < 0x2138)) {
    uVar8 = _DAT_0000046c;
  }
  else {
    uVar7 = recovered_2017cb0();
    if (uVar7 == 0) {
      uVar8 = 0;
    }
    else {
      cVar4 = DAT_02130021;
      if (cVar4 == '\0') {
        uVar1 = rdtsc();
        Ram0213002c = (int)((ulonglong)uVar1 >> 0x20);
        Ram02130028 = (int)uVar1;
        uVar3 = DAT_02103330;
        Ram02130030 = uVar3;
        DAT_02130021 = 1;
      }
      uVar1 = rdtsc();
      uVar8 = Ram02130028;
      uVar3 = Ram02130028;
      iVar5 = Ram02130028;
      uVar3 = Ram0213002c;
      uVar3 = Ram0213002c;
      iVar6 = Ram0213002c;
      uVar9 = recovered_20012c0((uint)uVar1 - iVar5,
                                (-(uint)((uint)uVar1 < uVar8) - iVar6) +
                                (int)((ulonglong)uVar1 >> 0x20),uVar7,0);
      uVar9 = recovered_20012c0((uint)uVar9,(uint)(uVar9 >> 0x20),0xd6a1,0);
      uVar3 = Ram02130030;
      uVar3 = Ram02130030;
      iVar5 = Ram02130030;
      uVar8 = (int)uVar9 + iVar5;
    }
    if (uVar7 == 0) {
      uVar8 = DAT_02103330;
      return uVar8;
    }
  }
  return uVar8;
}
#undef DAT_0000046c
#undef DAT_020e0004
#undef DAT_02103330
#undef DAT_02130021
#undef DAT_02130028
#undef DAT_0213002c
#undef DAT_02130030
#undef Ram02130028
#undef Ram0213002c
#undef Ram02130030
#undef _DAT_0000046c
