/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494ac0 (*(uint64_t volatile *)(0x8266f190U))
#define DAT_40494ae4 (*(uint8_t volatile *)(0x8266f1b4U))
#define DAT_40494ae8 (*(uint64_t volatile *)(0x8266f1b8U))
#define DAT_40494af4 (*(uint32_t volatile *)(0x8266f1c4U))
#define DAT_40494af8 (*(uint32_t volatile *)(0x8266f1c8U))
#define DAT_40494b08 (*(uint32_t volatile *)(0x8266f1d8U))
#define DAT_40494b20 (*(uint64_t volatile *)(0x8266f1f0U))
#define DAT_40494b34 (*(uint32_t volatile *)(0x8266f204U))
#define DAT_40494b38 (*(uint32_t volatile *)(0x8266f208U))
#define DAT_40494b3c (*(uint8_t volatile *)(0x8266f20cU))
#define Ram0000000040494af0 (*(uint64_t volatile *)(0x8266f1c0U))
#define Ram0000000040494b08 (*(uint64_t volatile *)(0x8266f1d8U))
#define Ram0000000040494b10 (*(uint64_t volatile *)(0x8266f1e0U))
#define Ram0000000040494b18 (*(uint64_t volatile *)(0x8266f1e8U))
#define Ram0000000040494b28 (*(uint64_t volatile *)(0x8266f1f8U))
#define auStack_260 (*(undefined1 (*)[512])(frame + 608))
#define auStack_460 (*(undefined1 (*)[512])(frame + 96))
#define auStack_4a4 (*(undefined1 (*)[8])(frame + 28))
#define str_4044dfe0 (*(char (*)[1])(0x82473278U))
#define uStack_474 (*(undefined4 *)(frame + 76))
#define uStack_478 (*(undefined4 *)(frame + 72))
#define uStack_480 (*(undefined8 *)(frame + 64))
#define uStack_488 (*(undefined8 *)(frame + 56))
#define uStack_490 (*(undefined8 *)(frame + 48))
#define uStack_498 (*(undefined8 *)(frame + 40))
#define uStack_49c (*(undefined4 *)(frame + 36))
undefined8 recovered_8243ab78(void)

{
  unsigned char frame[1248] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  char cVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;

  lVar6 = DAT_40494b20;
  if (lVar6 == 0) {
    return 0;
  }
  cVar9 = DAT_40494b3c;
  if (cVar9 == '\x01') {
    lVar6 = Ram0000000040494b28;
    uVar1 = PF_PART4(DAT_40494ae8, 0);
    uVar1 = uVar1 >> 2;
    uVar2 = DAT_40494b34;
    uVar8 = DAT_40494b38;
    uVar12 = 0;
    if (uVar1 != 0) {
      uVar12 = uVar2 / uVar1;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar8 / uVar1;
    }
    do {
      if (uVar2 < uVar12) {
        DAT_40494b3c = 0;
        goto LAB_40425ce4;
      }
      uVar1 = PF_PART4(DAT_40494ae8, 0);
      uVar13 = (ulong)uVar1 * (ulong)uVar12;
      recovered_82400b14(auStack_260,0,0x200);
      uVar10 = lVar6 * 4 - uVar13;
      if (uVar13 <= (ulong)(lVar6 * 4) && uVar10 != 0) {
        uVar1 = PF_PART4(DAT_40494ae8, 0);
        if (uVar1 <= uVar10) {
          uVar10 = (ulong)uVar1;
        }
        lVar7 = DAT_40494b20;
        recovered_82400928(auStack_260,(void *)(lVar7 + uVar13),uVar10);
      }
      bVar3 = DAT_40494ae4;
      iVar4 = DAT_40494af4;
      iVar5 = DAT_40494b08;
      uVar1 = PF_PART4(DAT_40494ae8, 0);
      uVar10 = recovered_824393dc((ulong)bVar3,(ulong)(iVar4 + uVar12 + iVar5),(long)auStack_260,
                                  (ulong)uVar1);
      uVar12 = uVar12 + 1;
    } while ((uVar10 & 1) != 0);
    uVar11 = 0;
  }
  else {
LAB_40425ce4:
    recovered_82400b14(auStack_460,0,0x200);
    recovered_82400b14(auStack_4a4,0,0x44);
    recovered_82400928(auStack_4a4,str_4044dfe0,8);
    uStack_49c = 1;
    uVar11 = Ram0000000040494af0;
    uStack_498 = DAT_40494ae8;
    uVar11 = Ram0000000040494b10;
    uStack_490 = Ram0000000040494b08;
    uStack_480 = Ram0000000040494b18;
    uStack_488 = Ram0000000040494b10;
    uVar11 = DAT_40494ac0;
    uStack_474 = DAT_40494af8;
    uStack_478 = (undefined4)uVar11;
    recovered_82400928(auStack_460,auStack_4a4,0x44);
    bVar3 = DAT_40494ae4;
    uVar12 = DAT_40494af4;
    uVar11 = recovered_824393dc((ulong)bVar3,(ulong)uVar12,(long)auStack_460,0x200);
  }
  return uVar11;
}
