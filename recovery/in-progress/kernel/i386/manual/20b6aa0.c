/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020989f4 (*(uint32_t volatile *)(0x20de4f4U))
#define DAT_020c77f8 (*(uint32_t volatile *)(0x223dc10U))
#define DAT_020c77fc (*(uint32_t volatile *)(0x223dc14U))
#define DAT_020cf1f8 (*(uint32_t volatile *)(0x2245280U))
#define local_14 (*(int * *)(frame + 76))
#define local_18 (*(uint * *)(frame + 72))
#define local_1c (*(int *)(frame + 68))
#define local_20 (*(int * *)(frame + 64))
#define local_24 (*(undefined4 *)(frame + 60))
#define local_28 (*(undefined4 *)(frame + 56))
#define local_2c (*(undefined4 *)(frame + 52))
#define local_30 (*(undefined4 *)(frame + 48))
#define local_34 (*(undefined4 *)(frame + 44))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_40 (*(uint *)(frame + 32))
#define local_44 (*(undefined4 *)(frame + 28))
#define str_02090506 (*(char (*)[1])(0x20cdac9U))
undefined4 recovered_20b6aa0(int *incoming_ecx,int *incoming_edx)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 extraout_EAX = 0;
  uint uVar5;
  uint *out;
  uint incoming_edx_00;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint uVar6;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_01;
  ulong extraout_EDX_02;
  ulong extraout_EDX_03;
  ulong size;
  ulong extraout_EDX_04;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;

  if (incoming_ecx == (int *)0x0) {
    return 0;
  }
  iVar10 = *incoming_edx;
  puVar2 = recovered_2001650(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  local_1c = iVar10;
  recovered_2043a90(incoming_ecx,incoming_edx_00);
  *incoming_ecx = 8;
  incoming_ecx[7] = (int)puVar2;
  uVar8 = *incoming_edx;
  bVar11 = true;
  uVar6 = extraout_EDX;
  local_18 = (uint *)incoming_edx;
  if (uVar8 == 0) {
    uVar7 = DAT_020c77f8;
    uVar8 = DAT_020cf1f8;
    local_14 = incoming_ecx;
    if (uVar7 == uVar8) {
      uVar8 = 8;
      if (uVar7 != 0) {
        uVar8 = uVar7 * 2;
      }
      size = extraout_EDX;
      if (uVar7 < uVar8) {
        pvVar3 = (void *)DAT_020c77fc;
        pvVar3 = recovered_2001860(pvVar3,uVar8 * 8);
        size = extraout_EDX_00;
        if (pvVar3 != (void *)0x0) {
          DAT_020c77fc = pvVar3;
          DAT_020cf1f8 = uVar8;
          uVar7 = DAT_020c77f8;
          goto LAB_0208446a;
        }
      }
      incoming_ecx = local_14;
      goto LAB_020845cd;
    }
    pvVar3 = (void *)DAT_020c77fc;
LAB_0208446a:
    uVar6 = DAT_020989f4;
    local_20 = (int *)((int)pvVar3 + 4);
    while( true ) {
      do {
        uVar8 = uVar6;
        uVar6 = uVar8 + 1 + (uint)(uVar8 == 0xffffffff);
      } while (uVar8 == 0);
      if (uVar7 == 0) break;
      uVar5 = uVar7;
      piVar9 = local_20;
      while (piVar9[-1] != uVar8) {
        piVar9 = piVar9 + 2;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_020844a2;
      }
      if (*piVar9 == 0) break;
    }
LAB_020844a2:
    DAT_020989f4 = uVar6;
    *(uint *)((int)pvVar3 + uVar7 * 8) = uVar8;
    *(uint **)((int)pvVar3 + uVar7 * 8 + 4) = local_18;
    DAT_020c77f8 = uVar7 + 1;
    *local_18 = uVar8;
    bVar11 = *local_14 == 8;
    incoming_ecx = local_14;
  }
  local_44 = 6;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_40 = uVar8;
  if (((bVar11) && (incoming_ecx[7] != 0)) &&
     (puVar2 = (undefined4 *)recovered_209b1b0(incoming_ecx[7],str_02090506,'\x01'),
     uVar6 = extraout_EDX_01, puVar2 != (undefined4 *)0x0)) {
    uVar4 = recovered_207e1d0(puVar2,&local_44);
    local_14 = (int *)CONCAT31(PF_PART3(local_14, 1),(char)uVar4);
    recovered_2043a90(&local_44,incoming_edx_01);
    size = extraout_EDX_02;
    if ((char)local_14 != '\0') {
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  else {
    recovered_2043a90(&local_44,uVar6);
    size = extraout_EDX_03;
  }
  if (local_1c == 0) {
    uVar6 = DAT_020c77f8;
    local_14 = incoming_ecx;
    if (uVar6 != 0) {
      out = (uint *)DAT_020c77fc;
      size = uVar6 * 8 - 8;
      iVar10 = -1;
      do {
        if (*out == uVar8) {
          if ((uint)-iVar10 < uVar6) {
            recovered_2001c30(out,out + 2,size);
            uVar6 = DAT_020c77f8;
            size = extraout_EDX_04;
          }
          DAT_020c77f8 = uVar6 - 1;
          break;
        }
        size = size - 8;
        out = out + 2;
        iVar1 = (uVar6 - 1) + iVar10;
        iVar10 = iVar10 + -1;
      } while (iVar1 != -1);
    }
    *local_18 = 0;
    incoming_ecx = local_14;
  }
LAB_020845cd:
  recovered_2043a90(incoming_ecx,size);
  return 0;
}
