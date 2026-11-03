#include "functions.h"
#undef DAT_0004e614
#define DAT_0004e614 (*(char *)(0x4e614U))
#undef DAT_0004e618
#define DAT_0004e618 (*(uint *)(0x4e618U))
#undef DAT_0004e61c
#define DAT_0004e61c (*(uint *)(0x4e61cU))
#undef DAT_0004e620
#define DAT_0004e620 (*(uint8_t *)(0x4e620U))
#undef DAT_0004e621
#define DAT_0004e621 (*(uint8_t *)(0x4e621U))
#undef DAT_0004e622
#define DAT_0004e622 (*(uint8_t *)(0x4e622U))
#undef DAT_0004e623
#define DAT_0004e623 (*(uint8_t *)(0x4e623U))
#undef DAT_0004e624
#define DAT_0004e624 (*(uint8_t *)(0x4e624U))
#undef DAT_0004e625
#define DAT_0004e625 (*(uint8_t *)(0x4e625U))
#undef DAT_0004e626
#define DAT_0004e626 (*(uint8_t *)(0x4e626U))
#undef DAT_0004e627
#define DAT_0004e627 (*(uint8_t *)(0x4e627U))
#undef DAT_0004ee9c
#define DAT_0004ee9c (*(char *)(0x4ee9cU))
#undef DAT_000524b0
#define DAT_000524b0 (*(uint32_t *)(0x524b0U))
#undef DAT_000524b4
#define DAT_000524b4 (*(int *)(0x524b4U))
#undef DAT_000524bc
#define DAT_000524bc (*(char *)(0x524bcU))
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

  if (DAT_0004e614 == '\x01') {
    if ((DAT_0004ee9c == '\x01') && (DAT_000524bc == '\x01')) {
      iVar2 = (DAT_000524b0 + -0x280) / 2;
      iVar3 = (DAT_000524b4 + -400) / 2;
      recovered_28cc4(&DAT_000524b0,DAT_0004e620,DAT_0004e621,DAT_0004e622);
      iVar5 = 0;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      puVar6 = &DAT_0004e627;
      for (; iVar5 != 400; iVar5 = iVar5 + 0x10) {
        recovered_28d07(iVar2,iVar3 + iVar5,puVar6,DAT_0004e623,DAT_0004e624,DAT_0004e625);
        puVar6 = puVar6 + 0x51;
      }
      if (DAT_0004e618 < 0x19 && DAT_0004e61c < 0x50) {
        recovered_28d56((uint *)&DAT_000524b0,iVar2 + DAT_0004e61c * 8,
                        DAT_0004e618 * 0x10 + iVar3 + 0xd,8,2,DAT_0004e623,DAT_0004e624,DAT_0004e625
                       );
      }
      recovered_28e08(0);
      recovered_28e32();
      return extraout_EAX_00;
    }
    recovered_28e08(0);
    uVar1 = DAT_0004e626;
    puVar6 = &DAT_000b8000;
    puVar4 = &DAT_0004e627;
    for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 != 0x50; iVar3 = iVar3 + 1) {
        *(ushort *)(puVar6 + iVar3 * 2) = CONCAT11(uVar1,puVar4[iVar3]);
      }
      puVar6 = puVar6 + 0xa0;
      puVar4 = puVar4 + 0x51;
    }
    in_EAX = (uint)CONCAT11(DAT_0004e61c < 0x50,DAT_0004e618 < 0x19);
    if (DAT_0004e618 < 0x19 && DAT_0004e61c < 0x50) {
      recovered_28fbc(DAT_0004e618,DAT_0004e61c);
      recovered_28e08(1);
      return extraout_EAX;
    }
  }
  return in_EAX;
}
