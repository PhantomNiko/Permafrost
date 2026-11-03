#include "functions.h"
#undef DAT_0004c614
#define DAT_0004c614 (*(char *)(0x4c614U))
#undef DAT_0004c618
#define DAT_0004c618 (*(uint *)(0x4c618U))
#undef DAT_0004c61c
#define DAT_0004c61c (*(uint *)(0x4c61cU))
#undef DAT_0004c620
#define DAT_0004c620 (*(uint8_t *)(0x4c620U))
#undef DAT_0004c621
#define DAT_0004c621 (*(uint8_t *)(0x4c621U))
#undef DAT_0004c622
#define DAT_0004c622 (*(uint8_t *)(0x4c622U))
#undef DAT_0004c623
#define DAT_0004c623 (*(uint8_t *)(0x4c623U))
#undef DAT_0004c624
#define DAT_0004c624 (*(uint8_t *)(0x4c624U))
#undef DAT_0004c625
#define DAT_0004c625 (*(uint8_t *)(0x4c625U))
#undef DAT_0004c626
#define DAT_0004c626 (*(uint8_t *)(0x4c626U))
#undef DAT_0004c627
#define DAT_0004c627 (*(uint8_t *)(0x4c627U))
#undef DAT_0004ce9c
#define DAT_0004ce9c (*(char *)(0x4ce9cU))
#undef DAT_000504b0
#define DAT_000504b0 (*(uint32_t *)(0x504b0U))
#undef DAT_000504b4
#define DAT_000504b4 (*(int *)(0x504b4U))
#undef DAT_000504bc
#define DAT_000504bc (*(char *)(0x504bcU))
#undef DAT_000b8000
#define DAT_000b8000 (*(uint8_t *)(0xb8000U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21ef3
 */

uint recovered_21ef3(void)

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

  if (DAT_0004c614 == '\x01') {
    if ((DAT_0004ce9c == '\x01') && (DAT_000504bc == '\x01')) {
      iVar2 = (DAT_000504b0 + -0x280) / 2;
      iVar3 = (DAT_000504b4 + -400) / 2;
      recovered_28cca(&DAT_000504b0,DAT_0004c620,DAT_0004c621,DAT_0004c622);
      iVar5 = 0;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      puVar6 = &DAT_0004c627;
      for (; iVar5 != 400; iVar5 = iVar5 + 0x10) {
        recovered_28d0d(iVar2,iVar3 + iVar5,puVar6,DAT_0004c623,DAT_0004c624,DAT_0004c625);
        puVar6 = puVar6 + 0x51;
      }
      if (DAT_0004c618 < 0x19 && DAT_0004c61c < 0x50) {
        recovered_28d5c((uint *)&DAT_000504b0,iVar2 + DAT_0004c61c * 8,
                        DAT_0004c618 * 0x10 + iVar3 + 0xd,8,2,DAT_0004c623,DAT_0004c624,DAT_0004c625
                       );
      }
      recovered_28e0e(0);
      recovered_28e38();
      return extraout_EAX_00;
    }
    recovered_28e0e(0);
    uVar1 = DAT_0004c626;
    puVar6 = &DAT_000b8000;
    puVar4 = &DAT_0004c627;
    for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 != 0x50; iVar3 = iVar3 + 1) {
        *(ushort *)(puVar6 + iVar3 * 2) = CONCAT11(uVar1,puVar4[iVar3]);
      }
      puVar6 = puVar6 + 0xa0;
      puVar4 = puVar4 + 0x51;
    }
    in_EAX = (uint)CONCAT11(DAT_0004c61c < 0x50,DAT_0004c618 < 0x19);
    if (DAT_0004c618 < 0x19 && DAT_0004c61c < 0x50) {
      recovered_28fc2(DAT_0004c618,DAT_0004c61c);
      recovered_28e0e(1);
      return extraout_EAX;
    }
  }
  return in_EAX;
}
