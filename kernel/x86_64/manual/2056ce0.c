/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d3290 (*(uint8_t volatile *)(0x21737b0U))
#define DAT_020d3294 (*(uint32_t volatile *)(0x21737b4U))
#define DAT_020d34f8 (*(uint8_t volatile *)(0x2173a50U))
#define DAT_020d34fc (*(uint32_t volatile *)(0x2173a54U))
#define DAT_020d3760 (*(uint8_t volatile *)(0x2173cf0U))
#define DAT_020d3764 (*(uint32_t volatile *)(0x2173cf4U))
#define DAT_020d39c8 (*(uint8_t volatile *)(0x2173f90U))
#define DAT_020d39cc (*(uint32_t volatile *)(0x2173f94U))
#define DAT_020d3c30 (*(uint8_t volatile *)(0x2174230U))
#define DAT_020d3c34 (*(uint32_t volatile *)(0x2174234U))
#define DAT_020d3e98 (*(uint8_t volatile *)(0x21744d0U))
#define DAT_020d3e9c (*(uint32_t volatile *)(0x21744d4U))
#define DAT_020d4100 (*(uint8_t volatile *)(0x2174770U))
#define DAT_020d4104 (*(uint32_t volatile *)(0x2174774U))
#define DAT_020d4368 (*(uint8_t volatile *)(0x2174a10U))
#define DAT_020d436c (*(uint32_t volatile *)(0x2174a14U))
#define DAT_020d45d0 (*(uint8_t volatile *)(0x2174cb0U))
#define DAT_020d45d4 (*(uint32_t volatile *)(0x2174cb4U))
#define DAT_020d4838 (*(uint8_t volatile *)(0x2174f50U))
#define DAT_020d483c (*(uint32_t volatile *)(0x2174f54U))
#define DAT_020d4aa0 (*(uint8_t volatile *)(0x21751f0U))
#define DAT_020d4aa4 (*(uint32_t volatile *)(0x21751f4U))
#define DAT_020d4d08 (*(uint8_t volatile *)(0x2175490U))
#define DAT_020d4d0c (*(uint32_t volatile *)(0x2175494U))
#define DAT_020d4f70 (*(uint8_t volatile *)(0x2175730U))
#define DAT_020d4f74 (*(uint32_t volatile *)(0x2175734U))
#define DAT_020d51d8 (*(uint8_t volatile *)(0x21759d0U))
#define DAT_020d51dc (*(uint32_t volatile *)(0x21759d4U))
#define DAT_020d5440 (*(uint8_t volatile *)(0x2175c70U))
#define DAT_020d5444 (*(uint32_t volatile *)(0x2175c74U))
#define DAT_020d56a8 (*(uint8_t volatile *)(0x2175f10U))
#define DAT_020d56ac (*(uint32_t volatile *)(0x2175f14U))
ulonglong recovered_2056ce0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  undefined1 *puVar3;

  if (param_1 == 0) {
    return 0;
  }
  cVar1 = DAT_020d3290;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d3294, iVar2 == param_1)) {
    return 0x21737b0U;
  }
  cVar1 = DAT_020d34f8;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d34fc, iVar2 == param_1)) {
    return 0x2173a50U;
  }
  cVar1 = DAT_020d3760;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d3764, iVar2 == param_1)) {
    return 0x2173cf0U;
  }
  cVar1 = DAT_020d39c8;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d39cc, iVar2 == param_1)) {
    return 0x2173f90U;
  }
  cVar1 = DAT_020d3c30;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d3c34, iVar2 == param_1)) {
    return 0x2174230U;
  }
  cVar1 = DAT_020d3e98;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d3e9c, iVar2 == param_1)) {
    return 0x21744d0U;
  }
  cVar1 = DAT_020d4100;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d4104, iVar2 == param_1)) {
    return 0x2174770U;
  }
  cVar1 = DAT_020d4368;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d436c, iVar2 == param_1)) {
    return 0x2174a10U;
  }
  cVar1 = DAT_020d45d0;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d45d4, iVar2 == param_1)) {
    return 0x2174cb0U;
  }
  cVar1 = DAT_020d4838;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d483c, iVar2 == param_1)) {
    return 0x2174f50U;
  }
  cVar1 = DAT_020d4aa0;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d4aa4, iVar2 == param_1)) {
    return 0x21751f0U;
  }
  cVar1 = DAT_020d4d08;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d4d0c, iVar2 == param_1)) {
    return 0x2175490U;
  }
  cVar1 = DAT_020d4f70;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d4f74, iVar2 == param_1)) {
    return 0x2175730U;
  }
  cVar1 = DAT_020d51d8;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d51dc, iVar2 == param_1)) {
    return 0x21759d0U;
  }
  cVar1 = DAT_020d5440;
  if ((cVar1 == '\x01') && (iVar2 = DAT_020d5444, iVar2 == param_1)) {
    return 0x2175c70U;
  }
  puVar3 = &DAT_020d56a8;
  iVar2 = DAT_020d56ac;
  if (iVar2 != param_1) {
    puVar3 = (undefined1 *)0x0;
  }
  cVar1 = DAT_020d56a8;
  if (cVar1 == '\0') {
    puVar3 = (undefined1 *)0x0;
  }
  return (ulonglong)puVar3;
}
