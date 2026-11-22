/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cd0 (*(uint8_t volatile *)(0x213073cU))
#define DAT_020b9cd4 (*(uint32_t volatile *)(0x2130740U))
#define DAT_020b9cd8 (*(uint32_t volatile *)(0x2130744U))
#define DAT_020b9cdc (*(uint32_t volatile *)(0x2130748U))
#define DAT_020b9ce0 (*(uint32_t volatile *)(0x213074cU))
#define DAT_020b9ce4 (*(uint32_t volatile *)(0x2130750U))
#define DAT_020b9cf0 (*(uint32_t volatile *)(0x213075cU))
#define DAT_020b9d24 (*(uint32_t volatile *)(0x2130790U))
#define DAT_020b9d28 (*(uint32_t volatile *)(0x2130794U))
#define DAT_020b9d2c (*(uint32_t volatile *)(0x2130798U))
#define DAT_020b9d30 (*(uint32_t volatile *)(0x213079cU))
undefined4 recovered_20a1a60(longlong *incoming_ecx,longlong *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *buffer;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;

  iVar2 = DAT_020b9d30;
  uVar1 = DAT_020b9cd4;
  uVar6 = 0;
  if (uVar1 != 0 && iVar2 != 0) {
    uVar6 = ((uVar1 - 1) + iVar2 * 0x20) / uVar1;
  }
  if (incoming_edx != (longlong *)0x0 && incoming_ecx != (longlong *)0x0) {
    iVar2 = DAT_020b9cf0;
    if (iVar2 - 6U < 0xfffffffd) {
      return 0;
    }
    uVar8 = DAT_020b9cd8;
    if (uVar8 == 0) {
      return 0;
    }
    iVar2 = DAT_020b9cdc;
    if (iVar2 == 0) {
      return 0;
    }
    uVar11 = DAT_020b9ce4;
    iVar4 = DAT_020b9d2c;
    iVar3 = DAT_020b9d28;
    uVar7 = DAT_020b9d24;
    uVar7 = DAT_020b9d24;
    iVar2 = DAT_020b9d24;
    uVar6 = uVar6 + iVar2 + iVar3 * iVar4;
    uVar9 = uVar11 - uVar6;
    if (uVar6 <= uVar11 && uVar9 != 0) {
      uVar9 = uVar9 / uVar8;
      buffer = recovered_2001650(iVar4 * uVar1);
      if (buffer == (void *)0x0) {
        return 0;
      }
      bVar10 = DAT_020b9cd0;
      iVar4 = DAT_020b9d24;
      uVar7 = DAT_020b9ce0;
      uVar7 = DAT_020b9ce0;
      iVar3 = DAT_020b9ce0;
      iVar2 = DAT_020b9cd4;
      iVar5 = DAT_020b9d2c;
      uVar7 = recovered_204ed30((uint)bVar10,iVar4 + iVar3,(int)buffer,iVar2 * iVar5);
      if ((char)uVar7 != '\0') {
        uVar1 = uVar9 + 2;
        uVar6 = 0;
        if (2 < uVar1) {
          uVar6 = 0;
          uVar8 = 2;
          iVar2 = DAT_020b9cf0;
          do {
            if (iVar2 == 5) {
              uVar11 = *(uint *)((int)buffer + uVar8 * 4) & 0xfffffff;
LAB_0203d95a:
              if (uVar11 == 0) goto LAB_0203d8f0;
            }
            else {
              if (iVar2 == 4) {
                uVar11 = (uint)*(ushort *)((int)buffer + uVar8 * 2);
                goto LAB_0203d95a;
              }
              if (iVar2 == 3) {
                uVar11 = uVar8 >> 1;
                bVar10 = *(byte *)((int)buffer + uVar11 + uVar8);
                if ((uVar8 & 1) == 0) {
                  uVar11 = (*(byte *)((int)buffer + uVar11 + 1 + uVar8) & 0xf) << 8;
                }
                else {
                  bVar10 = bVar10 >> 4;
                  uVar11 = (uint)*(byte *)((int)buffer + uVar11 + 1 + uVar8) << 4;
                }
                uVar11 = uVar11 | bVar10;
                goto LAB_0203d95a;
              }
LAB_0203d8f0:
              uVar6 = uVar6 + 1;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar1);
        }
        recovered_2001710(buffer);
        uVar1 = DAT_020b9cdc;
        *incoming_edx = (ulonglong)uVar1 * (ulonglong)uVar9;
        *incoming_ecx = (ulonglong)uVar1 * (ulonglong)uVar6;
        return CONCAT31((int3)(uVar6 >> 8),1);
      }
      recovered_2001710(buffer);
    }
  }
  return 0;
}
