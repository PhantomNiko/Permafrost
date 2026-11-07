/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_0208e76a (*(uint8_t *)(0x20c526dU))
#define DAT_020c0144 (*(uint32_t volatile *)(0x215bc84U))
#define DAT_020c0148 (*(uint32_t volatile *)(0x215bc80U))
#define DAT_020c1290 (*(uint8_t volatile *)(0x21408e8U))
#define DAT_020c1294 (*(uint8_t volatile *)(0x223de28U))
#define local_14 (*(undefined1 * *)(frame + 44))
#define local_18 (*(uint *)(frame + 40))
uint recovered_20a11d0(undefined1 *incoming_ecx,uint incoming_edx,byte param_3,char param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 in_EAX = 0;
  undefined4 uVar2;
  void *pvVar3;
  uint extraout_EAX = 0;
  int iVar4;
  uint size;
  undefined1 *puVar5;

  local_14 = (undefined1 *)0x0;
  if (incoming_ecx == (undefined1 *)0x0 && incoming_edx != 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),incoming_ecx == (undefined1 *)0x0);
  }
  local_18 = incoming_edx;
  if ((param_4 != '\0') && (bVar1 = DAT_020c1294, (bVar1 & 1) != 0)) {
    uVar2 = recovered_20a1380(incoming_ecx,(undefined *)incoming_edx,&local_14,&local_18);
    if ((char)uVar2 == '\0') {
      recovered_2001710(local_14);
      local_14 = (undefined1 *)0x0;
    }
    else {
      incoming_ecx = local_14;
      incoming_edx = local_18;
    }
  }
  pvVar3 = (void *)DAT_020c0148;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = recovered_2001650(0x40200);
    DAT_020c0148 = pvVar3;
    if (pvVar3 != (void *)0x0) {
      recovered_2001e00(pvVar3,0,0x40200);
      pvVar3 = (void *)DAT_020c0148;
      goto LAB_0203c1de;
    }
    DAT_020c0144 = 0;
    bVar1 = DAT_020c1290;
    if ((param_3 & bVar1) != 1) goto LAB_0203c296;
    puVar5 = &DAT_0208e2dc;
    if (incoming_ecx != (undefined1 *)0x0) {
      puVar5 = incoming_ecx;
    }
  }
  else {
LAB_0203c1de:
    iVar4 = DAT_020c0144;
    if (iVar4 == 0x100) {
      recovered_2001c30(pvVar3,(void *)((int)pvVar3 + 0x402),0x3fdfe);
      DAT_020c0144 = 0xff;
      iVar4 = 0xff;
      pvVar3 = (void *)DAT_020c0148;
    }
    size = incoming_edx;
    if (0x3fe < incoming_edx) {
      size = 0x3ff;
    }
    if (incoming_edx != 0) {
      recovered_2001b70((void *)((int)pvVar3 + iVar4 * 0x402),incoming_ecx,size);
      pvVar3 = (void *)DAT_020c0148;
      iVar4 = DAT_020c0144;
    }
    puVar5 = (undefined1 *)((int)pvVar3 + iVar4 * 0x402);
    puVar5[size] = 0;
    *(short *)((int)pvVar3 + iVar4 * 0x402 + 0x400) = (short)size;
    DAT_020c0144 = iVar4 + 1;
    bVar1 = DAT_020c1290;
    if ((param_3 & bVar1) != 1) goto LAB_0203c296;
    incoming_edx = size;
  }
  recovered_2012370((int)puVar5,incoming_edx);
  recovered_20122e0(&DAT_0208e76a);
LAB_0203c296:
  recovered_2001710(local_14);
  return extraout_EAX;
}
