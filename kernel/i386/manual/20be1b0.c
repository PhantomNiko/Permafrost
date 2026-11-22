/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_020c77e4 (*(uint32_t volatile *)(0x223dbfcU))
#define DAT_020c77e8 (*(uint32_t volatile *)(0x223dc00U))
#define DAT_020c77ec (*(uint32_t volatile *)(0x223dc04U))
undefined4 recovered_20be1b0(uint incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong size;
  void *pf_output_slot;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *text;

  uVar1 = DAT_020c77e8;
  if (uVar1 < incoming_ecx) {
    return 0;
  }
  text = &DAT_0208e2dc;
  if (incoming_edx != (char *)0x0) {
    text = incoming_edx;
  }
  size = recovered_2002270(text);
  pf_output_slot = recovered_2001650(size + 1);
  if (pf_output_slot == (void *)0x0) {
LAB_02087644:
    uVar4 = 0;
  }
  else {
    if (size != 0) {
      recovered_2001b70(pf_output_slot,text,size);
    }
    *(undefined1 *)((int)pf_output_slot + size) = 0;
    uVar6 = DAT_020c77e8;
    uVar1 = uVar6 + 1;
    uVar2 = DAT_020c77ec;
    if (uVar2 < uVar1) {
      uVar6 = 0x10;
      if (uVar2 != 0) {
        uVar6 = uVar2;
      }
      for (; uVar6 < uVar1; uVar6 = uVar6 * 2) {
        if ((int)uVar6 < 0) {
          uVar6 = uVar1;
          break;
        }
      }
      pvVar3 = (void *)DAT_020c77e4;
      pvVar3 = recovered_2001860(pvVar3,uVar6 * 4);
      if (pvVar3 == (void *)0x0) {
        recovered_2001710(pf_output_slot);
        goto LAB_02087644;
      }
      uVar1 = DAT_020c77ec;
      iVar5 = uVar6 - uVar1;
      if (uVar1 <= uVar6 && iVar5 != 0) {
        puVar7 = (undefined4 *)((int)pvVar3 + uVar1 * 4);
        do {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      DAT_020c77e4 = pvVar3;
      DAT_020c77ec = uVar6;
      uVar6 = DAT_020c77e8;
    }
    else {
      pvVar3 = (void *)DAT_020c77e4;
    }
    if (incoming_ecx <= uVar6 && uVar6 - incoming_ecx != 0) {
      recovered_2001c30((void *)((int)pvVar3 + incoming_ecx * 4 + 4),
                        (void *)((int)pvVar3 + incoming_ecx * 4),(uVar6 - incoming_ecx) * 4);
      pvVar3 = (void *)DAT_020c77e4;
      uVar6 = DAT_020c77e8;
    }
    *(void **)((int)pvVar3 + incoming_ecx * 4) = pf_output_slot;
    DAT_020c77e8 = uVar6 + 1;
    uVar4 = CONCAT31((int3)((uint)pvVar3 >> 8),1);
  }
  return uVar4;
}
