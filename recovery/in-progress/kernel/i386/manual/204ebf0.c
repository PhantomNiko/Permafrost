/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cdc (*(uint32_t volatile *)(0x2130748U))
uint recovered_204ebf0(int incoming_ecx,uint incoming_edx,char in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined4 uVar3;

  if (*(int *)(incoming_ecx + 0xf8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = DAT_020b9cdc;
    uVar2 = (*(int *)(incoming_ecx + 0xf8) + -1 + uVar2) / uVar2;
  }
  bVar1 = recovered_2052370((uint *)(incoming_ecx + 0x104),*(uint *)(incoming_ecx + 0x108),uVar2);
  if (bVar1) {
    *(uint *)(incoming_ecx + 0x108) = uVar2;
    uVar2 = recovered_2052870(*(uint *)(incoming_ecx + 0x104),*(int *)(incoming_ecx + 0xf4),
                              *(uint *)(incoming_ecx + 0xf8),uVar2);
    if ((char)uVar2 != '\0') {
      uVar3 = recovered_20529d0(incoming_edx,(uint)(in_stack_00000004 != '\0'));
      if ((char)uVar3 == '\0') {
        uVar2 = recovered_2052bd0();
        return uVar2;
      }
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return 0;
}
