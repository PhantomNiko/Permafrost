/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_11 (*(undefined1 *)(frame + 47))


uint recovered_2071590(undefined4 in_ECX,int in_EDX,undefined1 *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  undefined3 uVar4;
  uint uVar3;
  uchar uVar5;
  bool bVar6;
  bool bVar7;

  local_1c = CONCAT31((int3)((uint)in_ECX >> 8),1);
  uVar2 = 0;
  local_24 = in_ECX;
  do {
    uVar5 = '\0';
    local_20 = uVar2;
    do {
      local_18 = 0;
      local_28 = 0;
      uVar3 = recovered_2005080('\0',(uchar)uVar2,uVar5,0,4,&local_18);
      if ((char)uVar3 != '\0') {
        if (((local_18 & 0xffff) != 0) && ((local_18 & 0xffff) != 0xffff)) {
          uVar3 = recovered_2005080('\0',(uchar)uVar2,uVar5,8,4,&local_28);
          if ((char)uVar3 != '\0') {
            bVar7 = in_EDX < 0;
            cVar1 = (char)(local_28 >> 0x10);
            bVar6 = cVar1 == (char)in_EDX;
            local_11 = bVar7;
            if (((char)(local_28 >> 0x18) == (char)local_24) &&
               (local_11 = bVar7 || bVar6, bVar7 || bVar6)) {
              if (param_3 != (undefined1 *)0x0) {
                *param_3 = 0;
                param_3[1] = (char)local_20;
                param_3[2] = uVar5;
                *(short *)(param_3 + 4) = (short)local_18;
                *(short *)(param_3 + 6) = (short)(local_18 >> 0x10);
                param_3[8] = (char)local_24;
                param_3[9] = cVar1;
                param_3[10] = (char)(local_28 >> 8);
              }
              goto LAB_0207169c;
            }
          }
        }
      }
      uVar5 = uVar5 + '\x01';
    } while (uVar5 != '\b');
    uVar4 = (undefined3)((uint)local_20 >> 8);
    cVar1 = (byte)local_20 + 1;
    uVar2 = CONCAT31(uVar4,cVar1);
    local_1c = CONCAT31(uVar4,(byte)local_20 < 0x1f);
    if (cVar1 == ' ') {
      local_1c = 0;
LAB_0207169c:
      return local_1c & 0xffffff01;
    }
  } while( true );
}
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
