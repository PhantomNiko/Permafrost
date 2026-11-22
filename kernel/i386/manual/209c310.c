/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(uint *)(frame + 28))
#define local_18 (*(uint *)(frame + 24))
#define local_1c (*(undefined4 * *)(frame + 20))
uint recovered_209c310(uint *incoming_ecx,uint incoming_edx,int in_stack_00000004,
                      uint in_stack_00000008)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 *buffer;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 extraout_EAX = 0;
  uint incoming_edx_00;
  uint uVar4;

  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  uVar2 = recovered_207b020(in_stack_00000004,in_stack_00000008,(int *)&local_1c,&local_18,&local_14
                           );
  uVar1 = local_14;
  uVar4 = local_18;
  buffer = local_1c;
  if ((char)uVar2 != '\0') {
    puVar3 = recovered_2086800(0,(char *)incoming_edx);
    if (puVar3 == (undefined4 *)0x0) {
      if (buffer != (undefined4 *)0x0) {
        if (uVar4 != 0) {
          puVar3 = buffer;
          do {
            recovered_2001710((void *)*puVar3);
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        recovered_2001710(buffer);
      }
    }
    else {
      *(undefined1 *)(puVar3 + 2) = 1;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = buffer;
      puVar3[0x11] = uVar4;
      puVar3[0x12] = uVar1;
      if (incoming_ecx != (uint *)0x0) {
        recovered_2043a90(incoming_ecx,incoming_edx_00);
        *incoming_ecx = 9;
        incoming_ecx[8] = (uint)puVar3;
        return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
      }
    }
  }
  return 0;
}
