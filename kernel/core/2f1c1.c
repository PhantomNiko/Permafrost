#include "functions.h"
#undef DAT_0005dea0
#define DAT_0005dea0 (*(char *)(0x5dea0U))
#undef DAT_0005dea4
#define DAT_0005dea4 (*(uint *)(0x5dea4U))
#undef DAT_0005dea8
#define DAT_0005dea8 (*(uint *)(0x5dea8U))
#undef DAT_0005deac
#define DAT_0005deac (*(uint8_t *)(0x5deacU))
#undef DAT_0005dead
#define DAT_0005dead (*(uint8_t *)(0x5deadU))
#undef DAT_0005deae
#define DAT_0005deae (*(uint8_t *)(0x5deaeU))
#undef DAT_0005deaf
#define DAT_0005deaf (*(byte *)(0x5deafU))
#undef DAT_0005deb0
#define DAT_0005deb0 (*(byte *)(0x5deb0U))
#undef DAT_0005deb1
#define DAT_0005deb1 (*(uint8_t *)(0x5deb1U))
#undef DAT_0005deb2
#define DAT_0005deb2 (*(uint8_t *)(0x5deb2U))
#undef DAT_0005deb3
#define DAT_0005deb3 (*(uint8_t *)(0x5deb3U))
#undef DAT_0005e928
#define DAT_0005e928 (*(char *)(0x5e928U))
#undef DAT_00061d3c
#define DAT_00061d3c (*(uint32_t *)(0x61d3cU))
#undef DAT_00061d40
#define DAT_00061d40 (*(int *)(0x61d40U))
#undef DAT_00061d48
#define DAT_00061d48 (*(char *)(0x61d48U))
#undef DAT_000b8000
#define DAT_000b8000 (*(uint8_t *)(0xb8000U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f1c1
 */

uint recovered_2f1c1(void)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;
  uint in_EAX = 0;
  int iVar2;
  int iVar3;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;

  if (DAT_0005dea0 == '\x01') {
    if ((DAT_0005e928 == '\x01') && (DAT_00061d48 == '\x01')) {
      iVar2 = (DAT_00061d3c + -0x280) / 2;
      iVar3 = (DAT_00061d40 + -400) / 2;
      recovered_367e5(&DAT_00061d3c,DAT_0005deac,DAT_0005dead,DAT_0005deae);
      iVar5 = 0;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      puVar6 = &DAT_0005deb3;
      for (; iVar5 != 400; iVar5 = iVar5 + 0x10) {
        recovered_36828(iVar2,iVar3 + iVar5,puVar6,DAT_0005deaf,DAT_0005deb0,DAT_0005deb1);
        puVar6 = puVar6 + 0x51;
      }
      if (DAT_0005dea4 < 0x19 && DAT_0005dea8 < 0x50) {
        recovered_36877((uint *)&DAT_00061d3c,iVar2 + DAT_0005dea8 * 8,
                        DAT_0005dea4 * 0x10 + iVar3 + 0xd,8,2,DAT_0005deaf,DAT_0005deb0,DAT_0005deb1
                       );
      }
      recovered_36929(0);
      recovered_36953();
      return extraout_EAX_00;
    }
    recovered_36929(0);
    uVar1 = DAT_0005deb2;
    puVar6 = &DAT_000b8000;
    puVar4 = &DAT_0005deb3;
    for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 != 0x50; iVar3 = iVar3 + 1) {
        *(ushort *)(puVar6 + iVar3 * 2) = CONCAT11(uVar1,puVar4[iVar3]);
      }
      puVar6 = puVar6 + 0xa0;
      puVar4 = puVar4 + 0x51;
    }
    in_EAX = (uint)CONCAT11(DAT_0005dea8 < 0x50,DAT_0005dea4 < 0x19);
    if (DAT_0005dea4 < 0x19 && DAT_0005dea8 < 0x50) {
      recovered_36add(DAT_0005dea4,DAT_0005dea8);
      recovered_36929(1);
      return extraout_EAX;
    }
  }
  return in_EAX;
}
