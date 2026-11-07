/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9c90 (*(uint32_t volatile *)(0x21306fcU))
#define DAT_020b9c94 (*(uint32_t volatile *)(0x2130700U))
#define DAT_020b9c98 (*(uint32_t volatile *)(0x2130704U))
#define DAT_020b9c9c (*(uint32_t volatile *)(0x2130708U))
#define DAT_020b9cb4 (*(uint32_t volatile *)(0x2130720U))
ulonglong recovered_204bff0(uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  void *size;
  int iVar4;
  bool bVar6;
  undefined4 extraout_EDX = 0;
  undefined4 uVar5;
  undefined4 extraout_EDX_00 = 0;
  void *pvVar7;

  DAT_020b9c9c = 0;
  iVar4 = DAT_020b9c98;
  uVar3 = iVar4 + 1;
  uVar1 = DAT_020b9c90;
  if (uVar3 < uVar1) {
    DAT_020b9c98 = uVar3;
    return CONCAT44(in_EDX,uVar3);
  }
  size = (void *)DAT_020b9c94;
  pvVar7 = (void *)DAT_020b9cb4;
  bVar6 = uVar1 == 0 || pvVar7 == (void *)0x0;
  uVar5 = CONCAT31(CONCAT21((short)(in_EDX >> 0x10),bVar6),size == (void *)0x0 || bVar6);
  if (size != (void *)0x0 && (uVar1 != 0 && pvVar7 != (void *)0x0)) {
    if (uVar1 < 2) {
      iVar4 = 0;
      uVar5 = 0;
    }
    else {
      size = recovered_2001c30(pvVar7,(void *)((int)pvVar7 + (int)size + 1),
                               (uVar1 - 1) * ((int)size + 1));
      pvVar7 = (void *)DAT_020b9cb4;
      uVar5 = extraout_EDX;
      if (pvVar7 == (void *)0x0) goto LAB_0203c12a;
      iVar2 = DAT_020b9c90;
      iVar4 = iVar2 + -1;
      uVar5 = CONCAT31((int3)((uint)extraout_EDX >> 8),iVar2 == 0);
      size = (void *)DAT_020b9c94;
    }
    if (size != (void *)0x0 && (char)uVar5 == '\0') {
      pvVar7 = (void *)((int)pvVar7 + ((int)size + 1) * iVar4);
      recovered_2001e00(pvVar7,0x20,(ulong)size);
      size = (void *)DAT_020b9c94;
      *(undefined1 *)((int)size + (int)pvVar7) = 0;
      uVar5 = extraout_EDX_00;
    }
  }
LAB_0203c12a:
  return CONCAT44(uVar5,size);
}
