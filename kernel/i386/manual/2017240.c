#include "functions.h"
#undef DAT_0210462d
#define DAT_0210462d (*(uint8_t volatile *)(0x210462dU))
#undef DAT_0210462f
#define DAT_0210462f (*(uint8_t volatile *)(0x210462fU))
#undef DAT_02104631
#define DAT_02104631 (*(uint8_t volatile *)(0x2104631U))
#undef DAT_02104648
#define DAT_02104648 (*(uint32_t volatile *)(0x2104648U))
#undef DAT_0210464c
#define DAT_0210464c (*(uint32_t volatile *)(0x210464cU))
#undef DAT_02104650
#define DAT_02104650 (*(uint32_t volatile *)(0x2104650U))
#undef DAT_02104654
#define DAT_02104654 (*(uint32_t volatile *)(0x2104654U))
#undef DAT_02104658
#define DAT_02104658 (*(uint32_t volatile *)(0x2104658U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2017240
 */

uint recovered_2017240(void *out)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined3 uVar6;
  uint uVar5;

  cVar1 = DAT_0210462d;
  if ((cVar1 != '\x01') || (cVar1 = DAT_0210462f, cVar1 != '\x01')) {
    return 0;
  }
  pvVar4 = recovered_2001e00(out,0,0x20);
  iVar2 = DAT_02104648;
  *(int *)((int)out + 4) = iVar2;
  cVar1 = DAT_02104631;
  uVar6 = (undefined3)((uint)pvVar4 >> 8);
  if (cVar1 == '\x01') {
    *(byte *)out = *(byte *)out | 1;
    uVar3 = DAT_0210464c;
    *(undefined4 *)((int)out + 8) = uVar3;
    uVar3 = DAT_02104650;
    *(undefined4 *)((int)out + 0xc) = uVar3;
    uVar3 = DAT_02104654;
    *(undefined4 *)((int)out + 0x18) = uVar3;
    uVar3 = DAT_02104658;
    *(undefined4 *)((int)out + 0x1c) = uVar3;
    uVar5 = CONCAT31(uVar6,1);
  }
  else {
    uVar5 = CONCAT31(uVar6,iVar2 != 0);
  }
  return uVar5;
}
