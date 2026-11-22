/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define DAT_020cf3cc (*(uint8_t volatile *)(0x215a7dcU))
#define DAT_020cf3d0 (*(uint32_t volatile *)(0x215a7e0U))
#define DAT_020cf3dc (*(uint32_t volatile *)(0x215a7ecU))
#define DAT_020cf3e0 (*(uint32_t volatile *)(0x215a7f0U))
#define DAT_020cf3f0 (*(uint32_t volatile *)(0x215a800U))
#define DAT_020cf408 (*(uint64_t volatile *)(0x215a818U))
#define DAT_020cf410 (*(uint64_t volatile *)(0x215a820U))
#define DAT_020cf41c (*(uint32_t volatile *)(0x215a82cU))
#define DAT_020cf420 (*(uint32_t volatile *)(0x215a830U))
#define DAT_020cf424 (*(uint8_t volatile *)(0x215a834U))
#define Ram00000000020cf3d0 (*(uint128 volatile *)(0x215a7e0U))
#define Ram00000000020cf3f0 (*(uint128 volatile *)(0x215a800U))
#define Ram00000000020cf3f8 (*(uint128 volatile *)(0x215a808U))
#define local_278 (*(undefined1 (*)[516])(frame + 536))
#define local_44 (*(undefined4 *)(frame + 1100))
#define local_478 (*(undefined1 (*)[512])(frame + 24))
#define local_48 (*(undefined4 *)(frame + 1096))
#define local_58 (*(undefined1 (*)[16])(frame + 1080))
#define local_68 (*(undefined1 (*)[16])(frame + 1064))
#define local_6c (*(undefined4 *)(frame + 1060))
#define local_74 (*(undefined1 (*)[8])(frame + 1052))
#define str_020a2588 (*(char (*)[1])(0x20ec428U))
uint recovered_206fc40(void)

{
  unsigned char frame[1200] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint128 auVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint128 auVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong size;
  ulong uVar14;
  ulong uVar15;

  lVar7 = DAT_020cf408;
  if (lVar7 == 0) {
    return 0;
  }
  cVar10 = DAT_020cf424;
  if (cVar10 == '\x01') {
    uVar11 = DAT_020cf41c;
    uVar12 = DAT_020cf3d0;
    uVar14 = (ulong)uVar11 / (ulong)(uVar12 >> 2);
    uVar11 = DAT_020cf420;
    uVar11 = uVar11 / (uVar12 >> 2);
    if ((uint)uVar14 <= uVar11) {
      lVar7 = DAT_020cf410;
      do {
        uVar12 = DAT_020cf3d0;
        uVar15 = uVar12 * uVar14;
        recovered_2002110(local_478,0,0x200);
        uVar13 = lVar7 * 4 - uVar15;
        if (uVar15 <= (ulong)(lVar7 * 4) && uVar13 != 0) {
          uVar12 = DAT_020cf3d0;
          size = (ulong)uVar12;
          if (uVar13 < uVar12) {
            size = uVar13;
          }
          uVar8 = DAT_020cf408;
          uVar8 = DAT_020cf408;
          lVar9 = DAT_020cf408;
          recovered_2001410(local_478,(void *)(uVar15 + lVar9),size);
        }
        bVar1 = DAT_020cf3cc;
        iVar3 = DAT_020cf3dc;
        uVar4 = DAT_020cf3f0;
        uVar4 = DAT_020cf3f0;
        iVar5 = DAT_020cf3f0;
        uVar12 = DAT_020cf3d0;
        uVar12 = recovered_206cfd0(bVar1,(ulong)(uint)(iVar3 + (int)uVar14 + iVar5),(long)local_478,
                                   (ulong)uVar12);
        if ((char)uVar12 == '\0') {
          return 0;
        }
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar12;
      } while (uVar12 <= uVar11);
    }
    DAT_020cf424 = 0;
  }
  recovered_2002110(local_278,0,0x200);
  recovered_2002110(local_74,0,0x44);
  recovered_2001410(local_74,str_020a2588,8);
  local_6c = 1;
  auVar2 = Ram00000000020cf3d0;
  auVar6 = Ram00000000020cf3f0;
  PF_PART4(local_68, 8) = PF_PART4(auVar6, 0);
  PF_PART8(local_68, 0) = PF_PART8(auVar2, 0);
  PF_PART4(local_68, 12) = PF_PART4(auVar6, 4);
  (*(uint128 *)(void *)local_58) = Ram00000000020cf3f8;
  local_48 = PF_PART4(DAT_020cf3a8, 0);
  local_44 = DAT_020cf3e0;
  recovered_2001410(local_278,local_74,0x44);
  bVar1 = DAT_020cf3cc;
  uVar12 = DAT_020cf3dc;
  uVar12 = recovered_206cfd0(bVar1,(ulong)uVar12,(long)local_278,0x200);
  return uVar12;
}
