/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494ac0 (*(uint64_t volatile *)(0x8266f190U))
#define DAT_40494ae4 (*(uint8_t volatile *)(0x8266f1b4U))
#define DAT_40494ae8 (*(uint volatile *)(0x8266f1b8U))
#define DAT_40494af0 (*(uint32_t volatile *)(0x8266f1c0U))
#define DAT_40494af4 (*(uint32_t volatile *)(0x8266f1c4U))
#define DAT_40494b10 (*(uint32_t volatile *)(0x8266f1e0U))
#define DAT_40494b18 (*(uint32_t volatile *)(0x8266f1e8U))
#define DAT_40494b1c (*(uint32_t volatile *)(0x8266f1ecU))
#define DAT_40494b20 (*(uint64_t volatile *)(0x8266f1f0U))
#define Ram0000000040494b28 (*(uint64_t volatile *)(0x8266f1f8U))
#define auStack_150 (*(undefined1 (*)[256])(frame + 16))
undefined8 recovered_8243a7fc(ulong param_1,ulong param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong size;
  void *buffer;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;

  iVar1 = DAT_40494b1c;
  if (iVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar13 = DAT_40494af0;
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = ((iVar1 + uVar13) - 1) / uVar13;
    }
  }
  uVar9 = DAT_40494ac0;
  iVar1 = (int)uVar9 * 0x100;
  if (iVar1 == 0) {
    uVar13 = 0;
  }
  else {
    uVar5 = DAT_40494af0;
    uVar13 = 0;
    if (uVar5 != 0) {
      uVar13 = ((iVar1 + uVar5) - 1) / uVar5;
    }
  }
  if ((uVar13 == uVar11) || ((param_2 & 1) == 0)) {
    uVar11 = DAT_40494af0;
    size = (ulong)uVar11;
    uVar2 = 0;
    if (size != 0) {
      uVar2 = (param_1 * 0x100) / size;
    }
    lVar14 = param_1 * 0x100 - uVar2 * size;
    uVar11 = DAT_40494b18;
    uVar15 = (ulong)uVar11;
    if (((param_1 < uVar9 && 1 < uVar11) && lVar14 + 0x100U <= size) &&
       (uVar9 = Ram0000000040494b28, uVar15 < uVar9)) {
      lVar8 = DAT_40494b20;
      iVar12 = (int)uVar2 + 1;
      do {
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) {
          buffer = recovered_82400744(size);
          if (buffer == (void *)0x0) {
            return 0;
          }
          bVar3 = DAT_40494ae4;
          uVar11 = DAT_40494af0;
          iVar6 = DAT_40494af4;
          iVar7 = DAT_40494b10;
          iVar12 = (int)uVar15 + -2;
          iVar4 = PF_PART4(DAT_40494ae8, 4);
          uVar9 = recovered_8243843c((ulong)bVar3,(ulong)(uint)(iVar7 + iVar6 + iVar4 * iVar12),
                                     (long)buffer,(ulong)uVar11);
          if ((uVar9 & 1) == 0) {
            recovered_82400748(buffer);
            return 0;
          }
          recovered_8243accc(param_1,(long)auStack_150);
          recovered_82400928((void *)((long)buffer + lVar14),auStack_150,0x100);
          bVar3 = DAT_40494ae4;
          uVar11 = DAT_40494af0;
          iVar6 = DAT_40494af4;
          iVar7 = DAT_40494b10;
          iVar4 = PF_PART4(DAT_40494ae8, 4);
          uVar10 = recovered_824393dc((ulong)bVar3,(ulong)(uint)(iVar7 + iVar6 + iVar4 * iVar12),
                                      (long)buffer,(ulong)uVar11);
          recovered_82400748(buffer);
          if ((int)uVar10 == 0) {
            return 0;
          }
          DAT_40494b1c = iVar1;
          uVar10 = recovered_8243ab78();
          return uVar10;
        }
        uVar11 = *(uint *)(lVar8 + uVar15 * 4);
        uVar15 = (ulong)uVar11;
      } while ((uVar11 >= 2 && uVar15 <= uVar9) && (uVar11 < 2 || uVar9 != uVar15));
    }
  }
  return 0;
}
