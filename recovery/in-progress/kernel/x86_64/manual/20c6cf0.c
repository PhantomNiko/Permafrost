/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3cc (*(uint8_t volatile *)(0x215a7dcU))
#define DAT_020cf3d0 (*(uint32_t volatile *)(0x215a7e0U))
#define DAT_020cf3d4 (*(uint32_t volatile *)(0x215a7e4U))
#define DAT_020cf3d8 (*(uint32_t volatile *)(0x215a7e8U))
#define DAT_020cf3dc (*(uint32_t volatile *)(0x215a7ecU))
#define DAT_020cf3e0 (*(uint32_t volatile *)(0x215a7f0U))
#define DAT_020cf3ec (*(uint32_t volatile *)(0x215a7fcU))
#define DAT_020cf428 (*(uint32_t volatile *)(0x215a838U))
#define DAT_020cf42c (*(uint32_t volatile *)(0x215a83cU))
#define DAT_020cf430 (*(uint32_t volatile *)(0x215a840U))
#define DAT_020cf434 (*(uint32_t volatile *)(0x215a844U))
uchar recovered_20c6cf0(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *buffer;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;

  iVar3 = DAT_020cf434;
  uVar11 = DAT_020cf3d0;
  uVar7 = 0;
  if (iVar3 != 0 && (ulong)uVar11 != 0) {
    uVar7 = ((uVar11 + iVar3 * 0x20) - 1) / uVar11;
  }
  if (param_2 != (long *)0x0 && param_1 != (long *)0x0) {
    iVar3 = DAT_020cf3ec;
    if (iVar3 - 6U < 0xfffffffd) {
      return '\0';
    }
    uVar2 = DAT_020cf3d4;
    if (uVar2 == 0) {
      return '\0';
    }
    iVar3 = DAT_020cf3d8;
    if (iVar3 == 0) {
      return '\0';
    }
    uVar5 = DAT_020cf3e0;
    uVar6 = DAT_020cf430;
    iVar10 = DAT_020cf42c;
    uVar4 = DAT_020cf428;
    uVar4 = DAT_020cf428;
    iVar3 = DAT_020cf428;
    uVar7 = uVar7 + iVar3 + iVar10 * uVar6;
    uVar8 = uVar5 - uVar7;
    if (uVar7 <= uVar5 && uVar8 != 0) {
      uVar1 = (ulong)uVar8 / (ulong)uVar2;
      buffer = recovered_2000ad0((ulong)uVar6 * (ulong)uVar11);
      if (buffer == (void *)0x0) {
        return '\0';
      }
      iVar10 = DAT_020cf428;
      uVar4 = DAT_020cf3dc;
      uVar4 = DAT_020cf3dc;
      iVar3 = DAT_020cf3dc;
      bVar13 = DAT_020cf3cc;
      uVar11 = DAT_020cf430;
      uVar7 = DAT_020cf3d0;
      uVar7 = recovered_206b1b0(bVar13,(ulong)(uint)(iVar10 + iVar3),(long)buffer,
                                (ulong)uVar7 * (ulong)uVar11);
      if ((char)uVar7 != '\0') {
        uVar7 = (int)uVar1 + 2;
        uVar15 = 0;
        if (2 < uVar7) {
          iVar3 = DAT_020cf3ec;
          uVar9 = 2;
          iVar10 = 3;
          do {
            if (iVar3 == 5) {
              if ((*(uint *)((long)buffer + uVar9 * 4) & 0xfffffff) == 0) goto LAB_0204aa70;
            }
            else {
              if (iVar3 == 4) {
                if (*(short *)((long)buffer + uVar9 * 2) != 0) goto LAB_0204aa73;
              }
              else if (iVar3 == 3) {
                uVar11 = (uint)uVar9 >> 1;
                uVar14 = (ulong)(iVar10 + uVar11);
                bVar13 = *(byte *)((long)buffer + (ulong)(uVar11 + (uint)uVar9));
                if ((uVar9 & 1) == 0) {
                  iVar12 = (*(byte *)((long)buffer + uVar14) & 0xf) << 8;
                }
                else {
                  bVar13 = bVar13 >> 4;
                  iVar12 = (uint)*(byte *)((long)buffer + uVar14) << 4;
                }
                if (iVar12 != 0 || bVar13 != 0) goto LAB_0204aa73;
              }
LAB_0204aa70:
              uVar15 = (ulong)((int)uVar15 + 1);
            }
LAB_0204aa73:
            uVar9 = uVar9 + 1;
            iVar10 = iVar10 + 1;
          } while (uVar9 < uVar7);
        }
        recovered_2000bb0(buffer);
        uVar7 = DAT_020cf3d8;
        *param_2 = uVar1 * uVar7;
        *param_1 = uVar15 * uVar7;
        return '\x01';
      }
      recovered_2000bb0(buffer);
    }
  }
  return '\0';
}
