#include "functions.h"
#undef DAT_000445f0
#define DAT_000445f0 (*(char *)(0x445f0U))
#undef DAT_000445f4
#define DAT_000445f4 (*(uint *)(0x445f4U))
#undef DAT_000445f8
#define DAT_000445f8 (*(uint *)(0x445f8U))
#undef DAT_000445fc
#define DAT_000445fc (*(uint8_t *)(0x445fcU))
#undef DAT_000445fd
#define DAT_000445fd (*(uint8_t *)(0x445fdU))
#undef DAT_000445fe
#define DAT_000445fe (*(uint8_t *)(0x445feU))
#undef DAT_000445ff
#define DAT_000445ff (*(uint8_t *)(0x445ffU))
#undef DAT_00044600
#define DAT_00044600 (*(uint8_t *)(0x44600U))
#undef DAT_00044601
#define DAT_00044601 (*(uint8_t *)(0x44601U))
#undef DAT_00044602
#define DAT_00044602 (*(uint8_t *)(0x44602U))
#undef DAT_00044603
#define DAT_00044603 (*(uint8_t *)(0x44603U))
#undef DAT_00054e2c
#define DAT_00054e2c (*(char *)(0x54e2cU))
#undef DAT_00057324
#define DAT_00057324 (*(uint32_t *)(0x57324U))
#undef DAT_00057328
#define DAT_00057328 (*(int *)(0x57328U))
#undef DAT_00057330
#define DAT_00057330 (*(char *)(0x57330U))
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
  
  if (DAT_000445f0 == '\x01') {
    if ((DAT_00054e2c == '\x01') && (DAT_00057330 == '\x01')) {
      iVar2 = (DAT_00057324 + -0x280) / 2;
      iVar3 = (DAT_00057328 + -400) / 2;
      recovered_26603(&DAT_00057324,DAT_000445fc,DAT_000445fd,DAT_000445fe);
      iVar5 = 0;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      puVar6 = &DAT_00044603;
      for (; iVar5 != 400; iVar5 = iVar5 + 0x10) {
        recovered_26646(iVar2,iVar3 + iVar5,puVar6,DAT_000445ff,DAT_00044600,DAT_00044601);
        puVar6 = puVar6 + 0x51;
      }
      if (DAT_000445f4 < 0x19 && DAT_000445f8 < 0x50) {
        recovered_26695((uint *)&DAT_00057324,iVar2 + DAT_000445f8 * 8,
                        DAT_000445f4 * 0x10 + iVar3 + 0xd,8,2,DAT_000445ff,DAT_00044600,DAT_00044601
                       );
      }
      recovered_26744(0);
      recovered_2676e();
      return extraout_EAX_00;
    }
    recovered_26744(0);
    uVar1 = DAT_00044602;
    puVar6 = &DAT_000b8000;
    puVar4 = &DAT_00044603;
    for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 != 0x50; iVar3 = iVar3 + 1) {
        *(ushort *)(puVar6 + iVar3 * 2) = CONCAT11(uVar1,puVar4[iVar3]);
      }
      puVar6 = puVar6 + 0xa0;
      puVar4 = puVar4 + 0x51;
    }
    in_EAX = (uint)CONCAT11(DAT_000445f8 < 0x50,DAT_000445f4 < 0x19);
    if (DAT_000445f4 < 0x19 && DAT_000445f8 < 0x50) {
      recovered_268f9(DAT_000445f4,DAT_000445f8);
      recovered_26744(1);
      return extraout_EAX;
    }
  }
  return in_EAX;
}

