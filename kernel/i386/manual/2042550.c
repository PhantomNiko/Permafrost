/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de158 (*(uint32_t volatile *)(0x20de158U))
#define DAT_020de15c (*(uint8_t volatile *)(0x20de15cU))
#define DAT_020de15d (*(uint8_t volatile *)(0x20de15dU))
#define DAT_020de15e (*(uint8_t volatile *)(0x20de15eU))
#define DAT_021306f8 (*(uint8_t volatile *)(0x21306f8U))
#define DAT_021408e9 (*(uint8_t volatile *)(0x21408e9U))
#define DAT_021468fc (*(uint8_t volatile *)(0x21468fcU))
#define DAT_0214b0e0 (*(uint8_t volatile *)(0x214b0e0U))
#define DAT_0214b0e4 (*(uint32_t volatile *)(0x214b0e4U))
#define DAT_0214b0e8 (*(uint32_t volatile *)(0x214b0e8U))
#define DAT_0214b0ec (*(uint32_t volatile *)(0x214b0ecU))
#define DAT_0214b0f8 (*(uint32_t volatile *)(0x214b0f8U))
#define DAT_0214b0fc (*(uint32_t volatile *)(0x214b0fcU))
#define DAT_0214b108 (*(uint32_t volatile *)(0x214b108U))
#define DAT_0214b10c (*(uint32_t volatile *)(0x214b10cU))
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#define DAT_0214bc2c (*(uint32_t volatile *)(0x214bc2cU))
#define DAT_0223dd2c (*(uint32_t volatile *)(0x223dd2cU))
#define DAT_0223dd30 (*(uint32_t volatile *)(0x223dd30U))


uint recovered_2042550(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  uchar uVar5;
  undefined1 uVar6;
  undefined3 extraout_var = 0;
  char *pcVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  int iVar11;

  recovered_2026f10();
  uVar5 = recovered_2006ec0();
  iVar11 = 0;
  uVar8 = 0;
  if (CONCAT31(extraout_var,uVar5) < 0x20) {
    uVar8 = CONCAT31(extraout_var,uVar5);
  }
  (&DAT_0214b364)[uVar8 * 0x12] = uVar8;
  pcVar7 = (char *)(&DAT_0214b320)[uVar8 * 0x12];
  if (pcVar7 != (char *)0x0) {
    if (*(int *)(pcVar7 + 0x74) != 0) {
      iVar11 = 0x20;
      pcVar10 = &DAT_021468fc;
      do {
        if (((*pcVar10 == '\x01') && (pcVar10[4] == '\x01')) &&
           (*(int *)(pcVar10 + 0x74) == *(int *)(pcVar7 + 0x74))) {
          pcVar7 = pcVar10;
          break;
        }
        pcVar10 = pcVar10 + 0xb8;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = *(int *)(pcVar7 + 0x10);
  }
  uVar8 = recovered_2042790();
  if ((char)uVar8 == '\0') {
    uVar8 = recovered_20116b0();
    if (((uVar8 == 0) || (puVar9 = recovered_2012220(), *puVar9 == 0 && puVar9[1] == 0)) ||
       ((puVar9 = recovered_2012220(), puVar9[2] == 0 ||
        ((puVar9 = recovered_2012220(), puVar9[3] == 0 ||
         (puVar9 = recovered_2012220(), puVar9[4] == 0)))))) {
LAB_02042619:
      uVar6 = 0;
    }
    else {
      puVar9 = recovered_2012220();
      if ((0x11 < puVar9[5] - 0xf) || (uVar6 = 1, (0x20203U >> (puVar9[5] - 0xf & 0x1f) & 1) == 0))
      goto LAB_02042619;
    }
    DAT_0214b0e0 = uVar6;
  }
  uVar8 = recovered_2042790();
  if ((char)uVar8 == '\0') {
    DAT_021408e9 = 0;
    return 0;
  }
  iVar3 = DAT_0214b0e4;
  if (iVar3 == 0) {
LAB_02042648:
    recovered_2012690('\x01');
  }
  else {
    puVar9 = recovered_2012220();
    uVar8 = DAT_0214b0e4;
    if (*puVar9 != uVar8 || puVar9[1] != 0) goto LAB_02042648;
  }
  if (iVar11 != 0) {
    DAT_0214bc2c = iVar11;
  }
  uVar8 = DAT_0214b0e8;
  puVar9 = recovered_2012220();
  if (uVar8 == puVar9[3]) {
    uVar8 = DAT_0214b0ec;
    puVar9 = recovered_2012220();
    if (uVar8 == puVar9[4]) {
      uVar8 = DAT_0214b0f8;
      puVar9 = recovered_2012220();
      if (uVar8 == puVar9[3]) {
        uVar8 = DAT_0214b0fc;
        puVar9 = recovered_2012220();
        if (uVar8 == puVar9[4]) goto LAB_020426b5;
      }
    }
  }
  puVar9 = recovered_2012220();
  uVar8 = puVar9[3];
  puVar9 = recovered_2012220();
  recovered_2042810(uVar8,puVar9[4]);
LAB_020426b5:
  DAT_021306f8 = 0;
  puVar9 = recovered_2012220();
  uVar8 = puVar9[3];
  puVar9 = recovered_2012220();
  uVar5 = recovered_2042950(uVar8,puVar9[4]);
  if (uVar5 == '\0') {
    recovered_2008f70();
    DAT_0214b0e0 = 0;
    DAT_021408e9 = 0;
    DAT_0214b108 = 0;
    DAT_0214b10c = 0;
    pvVar4 = (void *)DAT_0223dd2c;
    recovered_2001710(pvVar4);
    pvVar4 = (void *)DAT_0223dd30;
    recovered_2001710(pvVar4);
    DAT_0223dd2c = 0;
    DAT_0223dd30 = 0;
    uVar8 = 0;
    if ((iVar11 != 0) && (iVar3 = DAT_0214bc2c, iVar3 == iVar11)) {
      DAT_0214bc2c = 0;
    }
  }
  else {
    puVar9 = recovered_2012220();
    DAT_020de158 = puVar9[5];
    DAT_021408e9 = 1;
    bVar1 = DAT_020de15c;
    bVar2 = DAT_020de15d;
    uVar5 = DAT_020de15e;
    recovered_2042ad0((uint)bVar1,(uint)bVar2,uVar5);
    uVar8 = 1;
  }
  return uVar8;
}
#undef DAT_020de158
#undef DAT_020de15c
#undef DAT_020de15d
#undef DAT_020de15e
#undef DAT_021306f8
#undef DAT_021408e9
#undef DAT_021468fc
#undef DAT_0214b0e0
#undef DAT_0214b0e4
#undef DAT_0214b0e8
#undef DAT_0214b0ec
#undef DAT_0214b0f8
#undef DAT_0214b0fc
#undef DAT_0214b108
#undef DAT_0214b10c
#undef DAT_0214b320
#undef DAT_0214b364
#undef DAT_0214bc2c
#undef DAT_0223dd2c
#undef DAT_0223dd30
