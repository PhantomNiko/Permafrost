/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(uint *)(frame + 44))
#define local_28 (*(short *)(frame + 24))


uint recovered_2071480(undefined4 in_ECX,undefined1 *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  undefined3 uVar4;
  uint uVar3;
  short sVar5;
  short in_DX;
  uchar uVar6;

  local_18 = CONCAT31((int3)((uint)in_ECX >> 8),1);
  uVar2 = 0;
  do {
    uVar6 = '\0';
    local_1c = uVar2;
    do {
      local_14 = 0;
      local_20 = 0;
      uVar3 = recovered_2005080('\0',(uchar)uVar2,uVar6,0,4,&local_14);
      if (((((char)uVar3 != '\0') && ((local_14 & 0xffff) != 0)) && ((local_14 & 0xffff) != 0xffff))
         && ((uVar3 = recovered_2005080('\0',(uchar)uVar2,uVar6,8,4,&local_20), (char)uVar3 != '\0'
             && ((local_14 & 0xffff) == 0x1af4)))) {
        local_28 = (short)in_ECX;
        sVar5 = (short)(local_14 >> 0x10);
        if ((sVar5 == local_28) || (sVar5 == in_DX)) {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 0;
            param_2[1] = (char)local_1c;
            param_2[2] = uVar6;
            *(undefined2 *)(param_2 + 4) = 0x1af4;
            *(short *)(param_2 + 6) = sVar5;
            param_2[8] = (char)(local_20 >> 0x18);
            param_2[9] = (char)(local_20 >> 0x10);
            param_2[10] = (char)(local_20 >> 8);
          }
          goto LAB_02071583;
        }
      }
      uVar6 = uVar6 + '\x01';
    } while (uVar6 != '\b');
    uVar4 = (undefined3)((uint)local_1c >> 8);
    cVar1 = (byte)local_1c + 1;
    uVar2 = CONCAT31(uVar4,cVar1);
    local_18 = CONCAT31(uVar4,(byte)local_1c < 0x1f);
    if (cVar1 == ' ') {
      local_18 = 0;
LAB_02071583:
      return local_18 & 0xffffff01;
    }
  } while( true );
}
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_28
