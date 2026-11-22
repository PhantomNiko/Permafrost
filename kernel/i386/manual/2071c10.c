/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_021306f8 (*(uint8_t volatile *)(0x21306f8U))
#define DAT_021408e9 (*(uint8_t volatile *)(0x21408e9U))
#define DAT_0214b0e0 (*(uint8_t volatile *)(0x214b0e0U))
#define DAT_0214b0e4 (*(uint32_t volatile *)(0x214b0e4U))
#define DAT_0214b0e8 (*(uint32_t volatile *)(0x214b0e8U))
#define DAT_0214b0ec (*(uint32_t volatile *)(0x214b0ecU))
#define DAT_0214b0f8 (*(uint32_t volatile *)(0x214b0f8U))
#define DAT_0214b0fc (*(uint32_t volatile *)(0x214b0fcU))
#define DAT_0214b108 (*(uint32_t volatile *)(0x214b108U))
#define DAT_0214b10c (*(uint32_t volatile *)(0x214b10cU))
#define DAT_0214bc2c (*(uint32_t volatile *)(0x214bc2cU))
#define DAT_0223dd2c (*(uint32_t volatile *)(0x223dd2cU))
#define DAT_0223dd30 (*(uint32_t volatile *)(0x223dd30U))


void recovered_2071c10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;

  uVar2 = DAT_0214bc2c;
  uVar5 = recovered_2042790();
  if ((char)uVar5 == '\0') {
    uVar5 = recovered_20116b0();
    if (uVar5 == 0) {
LAB_02071c79:
      uVar4 = 0;
    }
    else {
      puVar6 = recovered_2012220();
      if (*puVar6 == 0 && puVar6[1] == 0) goto LAB_02071c79;
      puVar6 = recovered_2012220();
      if (puVar6[2] == 0) goto LAB_02071c79;
      puVar6 = recovered_2012220();
      if (puVar6[3] == 0) goto LAB_02071c79;
      puVar6 = recovered_2012220();
      if (puVar6[4] == 0) goto LAB_02071c79;
      puVar6 = recovered_2012220();
      if ((0x11 < puVar6[5] - 0xf) || (uVar4 = 1, (0x20203U >> (puVar6[5] - 0xf & 0x1f) & 1) == 0))
      goto LAB_02071c79;
    }
    DAT_0214b0e0 = uVar4;
  }
  uVar5 = recovered_2042790();
  if ((char)uVar5 == '\0') {
    DAT_0214b0e0 = 0;
    DAT_021408e9 = 0;
    goto LAB_02071d79;
  }
  DAT_0214b0e0 = 1;
  iVar1 = DAT_0214b0e4;
  if (iVar1 == 0) {
LAB_02071caf:
    recovered_2012690('\x01');
  }
  else {
    puVar6 = recovered_2012220();
    uVar5 = DAT_0214b0e4;
    if (*puVar6 != uVar5 || puVar6[1] != 0) goto LAB_02071caf;
  }
  uVar5 = DAT_0214b0e8;
  puVar6 = recovered_2012220();
  if (uVar5 == puVar6[3]) {
    uVar5 = DAT_0214b0ec;
    puVar6 = recovered_2012220();
    if (uVar5 != puVar6[4]) goto LAB_02071cfb;
    uVar5 = DAT_0214b0f8;
    puVar6 = recovered_2012220();
    if (uVar5 != puVar6[3]) goto LAB_02071cfb;
    uVar5 = DAT_0214b0fc;
    puVar6 = recovered_2012220();
    if (uVar5 != puVar6[4]) goto LAB_02071cfb;
  }
  else {
LAB_02071cfb:
    puVar6 = recovered_2012220();
    uVar5 = puVar6[3];
    puVar6 = recovered_2012220();
    recovered_2042810(uVar5,puVar6[4]);
  }
  DAT_021306f8 = 0;
  DAT_021408e9 = 0;
  pvVar3 = (void *)DAT_0223dd2c;
  recovered_2001710(pvVar3);
  pvVar3 = (void *)DAT_0223dd30;
  recovered_2001710(pvVar3);
  DAT_0223dd2c = 0;
  DAT_0223dd30 = 0;
  DAT_0214b108 = 0;
  DAT_0214b10c = 0;
LAB_02071d79:
  DAT_0214bc2c = uVar2;
  return;
}
#undef DAT_021306f8
#undef DAT_021408e9
#undef DAT_0214b0e0
#undef DAT_0214b0e4
#undef DAT_0214b0e8
#undef DAT_0214b0ec
#undef DAT_0214b0f8
#undef DAT_0214b0fc
#undef DAT_0214b108
#undef DAT_0214b10c
#undef DAT_0214bc2c
#undef DAT_0223dd2c
#undef DAT_0223dd30
