/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define DAT_020cf3cc (*(uint8_t volatile *)(0x215a7dcU))
#define DAT_020cf3d0 (*(uint32_t volatile *)(0x215a7e0U))
#define DAT_020cf3d4 (*(uint32_t volatile *)(0x215a7e4U))
#define DAT_020cf3d8 (*(uint32_t volatile *)(0x215a7e8U))
#define DAT_020cf3dc (*(uint32_t volatile *)(0x215a7ecU))
#define DAT_020cf3ec (*(uint32_t volatile *)(0x215a7fcU))
#define DAT_020cf3f0 (*(uint32_t volatile *)(0x215a800U))
#define DAT_020cf3f4 (*(uint32_t volatile *)(0x215a804U))
#define DAT_020cf3f8 (*(uint32_t volatile *)(0x215a808U))
#define DAT_020cf408 (*(uint64_t volatile *)(0x215a818U))
#define DAT_020cf410 (*(uint64_t volatile *)(0x215a820U))
#define DAT_020cf454 (*(uint8_t volatile *)(0x215a894U))
#define local_34 (*(int *)(frame + 28))
#define local_40 (*(void * *)(frame + 16))
uchar recovered_20422c0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  uchar uVar11;
  uint uVar12;
  void *buffer;
  uchar uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  void *pvVar17;
  ulong uVar18;

  cVar10 = DAT_020cf454;
  if (cVar10 != '\x01') {
    return '\0';
  }
  uVar15 = DAT_020cf3a8;
  if (uVar15 <= param_1) {
    return '\0';
  }
  lVar1 = DAT_020cf3a0;
  lVar16 = param_1 * 0x118 + lVar1;
  if ((lVar1 != 0) && ((*(byte *)(lVar16 + 0x104) & 2) != 0)) goto LAB_0204aff9;
  uVar13 = '\x01';
  if (*(char *)(lVar16 + 0x114) != '\0') {
    return '\x01';
  }
  if (*(int *)(lVar16 + 0x100) == 0) {
LAB_0204afe7:
    *(undefined1 *)(lVar16 + 0x114) = 1;
  }
  else {
    uVar12 = DAT_020cf3ec;
    if ((uVar12 < 7) && ((0x46U >> (uVar12 & 0x1f) & 1) != 0)) {
      buffer = (void *)DAT_020cf408;
      uVar9 = PF_PART4(DAT_020cf410, 0);
      uVar15 = (ulong)uVar9;
      local_40 = (void *)0x0;
      uVar3 = DAT_020cf3d0;
      iVar4 = DAT_020cf3d4;
      iVar5 = DAT_020cf3d8;
      local_34 = 0;
      uVar7 = DAT_020cf3f4;
      if (uVar7 != 0 &&
          ((iVar5 != 0 && (iVar4 != 0 && uVar3 != 0)) && (0xfffffffd < uVar12 - 3 || uVar12 == 6)))
      {
        if (buffer != (void *)0x0) {
          pvVar17 = (void *)0x0;
          goto LAB_0204aee4;
        }
        uVar18 = (ulong)uVar7 * (ulong)uVar3;
        buffer = recovered_2000ad0(uVar18);
        if (buffer != (void *)0x0) {
          bVar2 = DAT_020cf3cc;
          iVar5 = DAT_020cf3f0;
          uVar6 = DAT_020cf3dc;
          uVar6 = DAT_020cf3dc;
          iVar4 = DAT_020cf3dc;
          uVar12 = recovered_206b1b0(bVar2,(ulong)(uint)(iVar5 + iVar4),(long)buffer,uVar18);
          if ((char)uVar12 != '\0') {
            if ((uint)(uVar18 >> 2) <= uVar9 - 1) {
              uVar15 = uVar18 >> 2 & 0xffffffff;
            }
            uVar12 = (uint)uVar15;
            pvVar17 = buffer;
            if (uVar12 == 0) {
              uVar15 = 0;
            }
            else {
              if (uVar12 < 8) {
                uVar18 = 0;
              }
              else {
                uVar18 = (ulong)(uVar12 & 0xfffffff8);
                uVar14 = 0;
                do {
                  uVar14 = uVar14 + 0x20;
                } while ((uVar15 * 4 & 0xffffffffffffffe0) != uVar14);
                if ((uVar12 & 0xfffffff8) == uVar12) goto LAB_0204aee4;
              }
              do {
                uVar18 = uVar18 + 1;
              } while (uVar15 != uVar18);
            }
LAB_0204aee4:
            bVar2 = DAT_020cf3cc;
            iVar5 = DAT_020cf3dc;
            iVar8 = DAT_020cf3f8;
            iVar4 = DAT_020cf3d4;
            uVar12 = DAT_020cf3d8;
            uVar12 = recovered_20e4260(bVar2,iVar5,iVar8,iVar4,uVar12,(long)buffer,(uint)uVar15,
                                       *(uint *)(lVar16 + 0x10c),*(uint *)(lVar16 + 0x100),
                                       (long *)&local_40,&local_34);
            recovered_2000bb0(pvVar17);
            buffer = local_40;
            if ((char)uVar12 != '\0') {
              *(void **)(lVar16 + 0xf8) = local_40;
              *(int *)(lVar16 + 0x110) = local_34;
              goto LAB_0204afe7;
            }
          }
          recovered_2000bb0(buffer);
        }
      }
    }
    else {
      if (uVar12 - 3 < 3) {
        uVar11 = recovered_20e3b80(lVar16,(int)param_2);
      }
      else {
        if (uVar12 != 7) goto LAB_0204aff9;
        uVar11 = recovered_20e4030(lVar16,param_2,param_3,4);
      }
      if (uVar11 != '\0') goto LAB_0204afe7;
    }
LAB_0204aff9:
    uVar13 = '\0';
  }
  return uVar13;
}
