#include "functions.h"
#undef DAT_00047600
#define DAT_00047600 (*(char *)(0x47600U))
#undef DAT_00047604
#define DAT_00047604 (*(uint *)(0x47604U))
#undef DAT_00047608
#define DAT_00047608 (*(uint *)(0x47608U))
#undef DAT_0004760c
#define DAT_0004760c (*(uint8_t *)(0x4760cU))
#undef DAT_0004760d
#define DAT_0004760d (*(uint8_t *)(0x4760dU))
#undef DAT_0004760e
#define DAT_0004760e (*(uint8_t *)(0x4760eU))
#undef DAT_0004760f
#define DAT_0004760f (*(uint8_t *)(0x4760fU))
#undef DAT_00047610
#define DAT_00047610 (*(uint8_t *)(0x47610U))
#undef DAT_00047611
#define DAT_00047611 (*(uint8_t *)(0x47611U))
#undef DAT_00047612
#define DAT_00047612 (*(uint8_t *)(0x47612U))
#undef DAT_00047613
#define DAT_00047613 (*(uint8_t *)(0x47613U))
#undef DAT_00047e88
#define DAT_00047e88 (*(char *)(0x47e88U))
#undef DAT_0004b490
#define DAT_0004b490 (*(uint32_t *)(0x4b490U))
#undef DAT_0004b494
#define DAT_0004b494 (*(int *)(0x4b494U))
#undef DAT_0004b49c
#define DAT_0004b49c (*(char *)(0x4b49cU))
#undef DAT_000b8000
#define DAT_000b8000 (*(uint8_t *)(0xb8000U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21aed
 */

uint recovered_21aed(void)

{
  unsigned char frame[64];

  undefined1 uVar1;
  uint in_EAX = 0;
  int iVar2;
  int iVar3;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;

  if (DAT_00047600 == '\x01') {
    if ((DAT_00047e88 == '\x01') && (DAT_0004b49c == '\x01')) {
      iVar2 = (DAT_0004b490 + -0x280) / 2;
      iVar3 = (DAT_0004b494 + -400) / 2;
      recovered_27dba(&DAT_0004b490,DAT_0004760c,DAT_0004760d,DAT_0004760e);
      iVar5 = 0;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      puVar6 = &DAT_00047613;
      for (; iVar5 != 400; iVar5 = iVar5 + 0x10) {
        recovered_27dfd(iVar2,iVar3 + iVar5,puVar6,DAT_0004760f,DAT_00047610,DAT_00047611);
        puVar6 = puVar6 + 0x51;
      }
      if (DAT_00047604 < 0x19 && DAT_00047608 < 0x50) {
        recovered_27e4c((uint *)&DAT_0004b490,iVar2 + DAT_00047608 * 8,
                        DAT_00047604 * 0x10 + iVar3 + 0xd,8,2,DAT_0004760f,DAT_00047610,DAT_00047611
                       );
      }
      recovered_27efb(0);
      recovered_27f25();
      return extraout_EAX_00;
    }
    recovered_27efb(0);
    uVar1 = DAT_00047612;
    puVar6 = &DAT_000b8000;
    puVar4 = &DAT_00047613;
    for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 != 0x50; iVar3 = iVar3 + 1) {
        *(ushort *)(puVar6 + iVar3 * 2) = CONCAT11(uVar1,puVar4[iVar3]);
      }
      puVar6 = puVar6 + 0xa0;
      puVar4 = puVar4 + 0x51;
    }
    in_EAX = (uint)CONCAT11(DAT_00047608 < 0x50,DAT_00047604 < 0x19);
    if (DAT_00047604 < 0x19 && DAT_00047608 < 0x50) {
      recovered_280b0(DAT_00047604,DAT_00047608);
      recovered_27efb(1);
      return extraout_EAX;
    }
  }
  return in_EAX;
}
