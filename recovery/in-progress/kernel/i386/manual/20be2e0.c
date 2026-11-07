/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_020c77e4 (*(uint32_t volatile *)(0x223dbfcU))
#define DAT_020c77e8 (*(uint32_t volatile *)(0x223dc00U))
undefined4 recovered_20be2e0(uint incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  char *text;
  ulong size;
  void *pf_output_slot;
  undefined4 uVar3;

  uVar2 = DAT_020c77e8;
  if (uVar2 <= incoming_ecx) {
    return 0;
  }
  text = &DAT_0208e2dc;
  if (incoming_edx != (char *)0x0) {
    text = incoming_edx;
  }
  size = recovered_2002270(text);
  pf_output_slot = recovered_2001650(size + 1);
  if (pf_output_slot == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    if (size != 0) {
      recovered_2001b70(pf_output_slot,text,size);
    }
    *(undefined1 *)((int)pf_output_slot + size) = 0;
    iVar1 = DAT_020c77e4;
    recovered_2001710(*(void **)(iVar1 + incoming_ecx * 4));
    iVar1 = DAT_020c77e4;
    *(void **)(iVar1 + incoming_ecx * 4) = pf_output_slot;
    uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}
