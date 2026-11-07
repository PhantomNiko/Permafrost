/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020bdb68 (*(uint8_t volatile *)(0x21483b8U))
#define DAT_020bdb6c (*(uint32_t volatile *)(0x21483bcU))
#define DAT_020bddc4 (*(uint8_t volatile *)(0x214864cU))
#define DAT_020bddc8 (*(uint32_t volatile *)(0x2148650U))
#define DAT_020be020 (*(uint8_t volatile *)(0x21488e0U))
#define DAT_020be024 (*(uint32_t volatile *)(0x21488e4U))
#define DAT_020be27c (*(uint8_t volatile *)(0x2148b74U))
#define DAT_020be280 (*(uint32_t volatile *)(0x2148b78U))
#define DAT_020be4d8 (*(uint8_t volatile *)(0x2148e08U))
#define DAT_020be4dc (*(uint32_t volatile *)(0x2148e0cU))
#define DAT_020be734 (*(uint8_t volatile *)(0x214909cU))
#define DAT_020be738 (*(uint32_t volatile *)(0x21490a0U))
#define DAT_020be990 (*(uint8_t volatile *)(0x2149330U))
#define DAT_020be994 (*(uint32_t volatile *)(0x2149334U))
#define DAT_020bebec (*(uint8_t volatile *)(0x21495c4U))
#define DAT_020bebf0 (*(uint32_t volatile *)(0x21495c8U))
#define DAT_020bee48 (*(uint8_t volatile *)(0x2149858U))
#define DAT_020bee4c (*(uint32_t volatile *)(0x214985cU))
#define DAT_020bf0a4 (*(uint8_t volatile *)(0x2149aecU))
#define DAT_020bf0a8 (*(uint32_t volatile *)(0x2149af0U))
#define DAT_020bf300 (*(uint8_t volatile *)(0x2149d80U))
#define DAT_020bf304 (*(uint32_t volatile *)(0x2149d84U))
#define DAT_020bf55c (*(uint8_t volatile *)(0x214a014U))
#define DAT_020bf560 (*(uint32_t volatile *)(0x214a018U))
#define DAT_020bf7b8 (*(uint8_t volatile *)(0x214a2a8U))
#define DAT_020bf7bc (*(uint32_t volatile *)(0x214a2acU))
#define DAT_020bfa14 (*(uint8_t volatile *)(0x214a53cU))
#define DAT_020bfa18 (*(uint32_t volatile *)(0x214a540U))
#define DAT_020bfc70 (*(uint8_t volatile *)(0x214a7d0U))
#define DAT_020bfc74 (*(uint32_t volatile *)(0x214a7d4U))
#define DAT_020bfecc (*(uint8_t volatile *)(0x214aa64U))
#define DAT_020bfed0 (*(uint32_t volatile *)(0x214aa68U))
undefined1 * recovered_203d2b0(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  undefined1 *puVar3;

  if (incoming_ecx != 0) {
    cVar1 = DAT_020bdb68;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bdb6c, iVar2 == incoming_ecx)) {
      return &DAT_020bdb68;
    }
    cVar1 = DAT_020bddc4;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bddc8, iVar2 == incoming_ecx)) {
      return &DAT_020bddc4;
    }
    cVar1 = DAT_020be020;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020be024, iVar2 == incoming_ecx)) {
      return &DAT_020be020;
    }
    cVar1 = DAT_020be27c;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020be280, iVar2 == incoming_ecx)) {
      return &DAT_020be27c;
    }
    cVar1 = DAT_020be4d8;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020be4dc, iVar2 == incoming_ecx)) {
      return &DAT_020be4d8;
    }
    cVar1 = DAT_020be734;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020be738, iVar2 == incoming_ecx)) {
      return &DAT_020be734;
    }
    cVar1 = DAT_020be990;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020be994, iVar2 == incoming_ecx)) {
      return &DAT_020be990;
    }
    cVar1 = DAT_020bebec;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bebf0, iVar2 == incoming_ecx)) {
      return &DAT_020bebec;
    }
    cVar1 = DAT_020bee48;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bee4c, iVar2 == incoming_ecx)) {
      return &DAT_020bee48;
    }
    cVar1 = DAT_020bf0a4;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bf0a8, iVar2 == incoming_ecx)) {
      return &DAT_020bf0a4;
    }
    cVar1 = DAT_020bf300;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bf304, iVar2 == incoming_ecx)) {
      return &DAT_020bf300;
    }
    cVar1 = DAT_020bf55c;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bf560, iVar2 == incoming_ecx)) {
      return &DAT_020bf55c;
    }
    cVar1 = DAT_020bf7b8;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bf7bc, iVar2 == incoming_ecx)) {
      return &DAT_020bf7b8;
    }
    cVar1 = DAT_020bfa14;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bfa18, iVar2 == incoming_ecx)) {
      return &DAT_020bfa14;
    }
    cVar1 = DAT_020bfc70;
    if ((cVar1 == '\x01') && (iVar2 = DAT_020bfc74, iVar2 == incoming_ecx)) {
      return &DAT_020bfc70;
    }
    iVar2 = DAT_020bfed0;
    puVar3 = &DAT_020bfecc;
    if (iVar2 != incoming_ecx) {
      puVar3 = (undefined1 *)0x0;
    }
    cVar1 = DAT_020bfecc;
    if (cVar1 != '\0') {
      return puVar3;
    }
  }
  return (undefined1 *)0x0;
}
