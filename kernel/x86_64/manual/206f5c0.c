/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3cc (*(uint8_t volatile *)(0x215a7dcU))
#define DAT_020cf3d4 (*(uint32_t volatile *)(0x215a7e4U))
#define DAT_020cf3d8 (*(uint32_t volatile *)(0x215a7e8U))
#define DAT_020cf3dc (*(uint32_t volatile *)(0x215a7ecU))
#define DAT_020cf3f8 (*(uint32_t volatile *)(0x215a808U))
#define DAT_020cf408 (*(uint64_t volatile *)(0x215a818U))
#define DAT_020cf410 (*(uint64_t volatile *)(0x215a820U))
uint recovered_206f5c0(uint param_1,long param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 in_RAX;
  void *out;
  undefined8 extraout_RAX = 0;
  ulong uVar8;
  ulong uVar9;
  ulong size;
  uint uVar10;
  ulong uVar11;
  bool bVar12;

  if (param_4 == 0) {
    uVar10 = (uint)CONCAT71((int7)((ulong)in_RAX >> 8),param_3 == 0);
  }
  else {
    uVar11 = (ulong)param_1;
    uVar10 = DAT_020cf3d8;
    out = recovered_2000ad0((ulong)uVar10);
    if (out == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar9 = 0;
      uVar10 = 1;
      do {
        size = 0;
        if (uVar9 <= param_3) {
          size = param_3 - uVar9;
        }
        uVar7 = DAT_020cf3d8;
        recovered_2002110(out,0,(ulong)uVar7);
        uVar7 = DAT_020cf3d8;
        uVar8 = (ulong)uVar7;
        if (uVar8 <= size) {
          size = uVar8;
        }
        if ((param_2 != 0) && (size != 0)) {
          recovered_2001410(out,(void *)(param_2 + uVar9),size);
          uVar7 = DAT_020cf3d8;
          uVar8 = (ulong)uVar7;
        }
        bVar1 = DAT_020cf3cc;
        iVar5 = DAT_020cf3f8;
        uVar3 = DAT_020cf3dc;
        uVar3 = DAT_020cf3dc;
        iVar4 = DAT_020cf3dc;
        iVar2 = DAT_020cf3d4;
        uVar7 = recovered_206cfd0(bVar1,(ulong)(uint)(((int)uVar11 + -2) * iVar2 + iVar5 + iVar4),
                                  (long)out,uVar8);
        if ((char)uVar7 == '\0') {
LAB_0204c907:
          recovered_2000bb0(out);
          return 0;
        }
        if (uVar10 < param_4) {
          lVar6 = DAT_020cf408;
          uVar11 = (ulong)*(uint *)(lVar6 + uVar11 * 4);
          if ((uVar11 < 2) || (uVar8 = DAT_020cf410, uVar8 <= uVar11)) goto LAB_0204c907;
        }
        uVar9 = uVar9 + size;
        bVar12 = uVar10 != param_4;
        uVar10 = uVar10 + 1;
      } while (bVar12);
      recovered_2000bb0(out);
      uVar10 = (uint)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
  }
  return uVar10;
}
