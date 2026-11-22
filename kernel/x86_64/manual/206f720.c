/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define DAT_020cf3cc (*(uint8_t volatile *)(0x215a7dcU))
#define DAT_020cf3d4 (*(uint32_t volatile *)(0x215a7e4U))
#define DAT_020cf3d8 (*(uint32_t volatile *)(0x215a7e8U))
#define DAT_020cf3dc (*(uint32_t volatile *)(0x215a7ecU))
#define DAT_020cf3f8 (*(uint32_t volatile *)(0x215a808U))
#define DAT_020cf400 (*(uint32_t volatile *)(0x215a810U))
#define DAT_020cf404 (*(uint32_t volatile *)(0x215a814U))
#define DAT_020cf408 (*(uint64_t volatile *)(0x215a818U))
#define DAT_020cf410 (*(uint64_t volatile *)(0x215a820U))
#define local_138 (*(char (*)[240])(frame + 24))
#define local_38 (*(ulong *)(frame + 280))
#define local_44 (*(undefined8 *)(frame + 268))
#define local_48 (*(undefined4 *)(frame + 264))
uint recovered_206f720(ulong param_1,byte param_2)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  void *buffer;
  ulong size;
  uint uVar11;
  int iVar12;
  ulong uVar13;

  iVar12 = DAT_020cf404;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar12 != 0) {
    uVar11 = DAT_020cf3d8;
    uVar11 = ((iVar12 + uVar11) - 1) / uVar11;
  }
  uVar10 = DAT_020cf3a8;
  iVar12 = (int)uVar10 * 0x100;
  if (iVar12 != 0) {
    uVar8 = DAT_020cf3d8;
    uVar8 = ((uVar8 + iVar12) - 1) / uVar8;
  }
  if ((uVar8 != uVar11 & param_2) == 0) {
    uVar9 = param_1 << 8;
    uVar11 = DAT_020cf3d8;
    size = (ulong)uVar11;
    if ((param_1 & 0xffffffffffffff) >> 0x18 == 0) {
      uVar9 = uVar9 & 0xffffffff;
    }
    if (param_1 < uVar10) {
      uVar10 = uVar9 / size;
      uVar11 = DAT_020cf400;
      uVar13 = (ulong)uVar11;
      if (((1 < uVar11) && (uVar9 % size + 0x100 <= size)) && (uVar7 = DAT_020cf410, uVar13 < uVar7)
         ) {
        if ((int)uVar10 != 0) {
          lVar1 = DAT_020cf408;
          do {
            uVar11 = *(uint *)(lVar1 + uVar13 * 4);
            uVar13 = (ulong)uVar11;
            if (uVar13 < 2) {
              return 0;
            }
            if (uVar7 <= uVar13) {
              return 0;
            }
            uVar8 = (int)uVar10 - 1;
            uVar10 = (ulong)uVar8;
          } while (uVar8 != 0);
        }
        local_38 = param_1;
        buffer = recovered_2000ad0(size);
        if (buffer != (void *)0x0) {
          bVar2 = DAT_020cf3cc;
          iVar6 = DAT_020cf3f8;
          uVar4 = DAT_020cf3dc;
          uVar4 = DAT_020cf3dc;
          iVar5 = DAT_020cf3dc;
          iVar3 = DAT_020cf3d4;
          uVar8 = DAT_020cf3d8;
          uVar8 = recovered_206b1b0(bVar2,(ulong)(iVar3 * (uVar11 - 2) + iVar6 + iVar5),(long)buffer
                                    ,(ulong)uVar8);
          if ((char)uVar8 != '\0') {
            recovered_2002110(local_138,0,0x100);
            local_38 = local_38 * 0x118;
            lVar1 = DAT_020cf3a0;
            pf_varargs_20039e0__8_(local_138,0xf0,&DAT_020a25e3,lVar1 + local_38);
            lVar1 = DAT_020cf3a0;
            local_48 = *(undefined4 *)(lVar1 + 0x10c + local_38);
            local_44 = *(undefined8 *)(lVar1 + 0x100 + local_38);
            recovered_2001410((void *)((long)buffer + uVar9 % size),local_138,0x100);
            bVar2 = DAT_020cf3cc;
            iVar6 = DAT_020cf3f8;
            uVar4 = DAT_020cf3dc;
            uVar4 = DAT_020cf3dc;
            iVar5 = DAT_020cf3dc;
            iVar3 = DAT_020cf3d4;
            uVar8 = DAT_020cf3d8;
            uVar11 = recovered_206cfd0(bVar2,(ulong)((uVar11 - 2) * iVar3 + iVar6 + iVar5),
                                       (long)buffer,(ulong)uVar8);
            recovered_2000bb0(buffer);
            if ((char)uVar11 == '\0') {
              return 0;
            }
            DAT_020cf404 = iVar12;
            uVar11 = recovered_206fc40();
            return uVar11;
          }
          recovered_2000bb0(buffer);
        }
      }
    }
  }
  return 0;
}
