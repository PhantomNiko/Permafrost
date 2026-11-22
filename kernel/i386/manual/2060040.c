/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define local_20 (*(int *)(frame + 32))
#define local_1c (*(int *)(frame + 36))
#define local_18 (*(int *)(frame + 40))
#define local_14 (*(int *)(frame + 44))
#define local_28 (*(int *)(frame + 24))
#define local_24 (*(int *)(frame + 28))


undefined4 recovered_2060040(byte *in_ECX,uint in_EDX,uint param_3,uint *param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  if ((param_4 != (uint *)0x0) && (7 < in_EDX && in_ECX != (byte *)0x0)) {
    uVar1 = (uint)in_ECX[2] << 8 | (uint)in_ECX[1] << 0x10 | (uint)*in_ECX << 0x18;
    uVar3 = uVar1 + in_ECX[3];
    if (((uVar3 & 0xfffffffe) == 0xcafebabe) && ((uVar1 | in_ECX[3] & 0xfffffffe) == 0xcafebabe)) {
      uVar1 = *(uint *)(in_ECX + 4);
      uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      local_14 = 0x20;
      if (uVar3 != 0xcafebabf) {
        local_14 = 0x14;
      }
      if ((uVar1 < 0x41 && param_3 < uVar1) && ((param_3 + 1) * local_14 + 8 <= in_EDX)) {
        iVar4 = local_14 * param_3;
        recovered_2001e00(param_4,0,0x14);
        uVar1 = *(uint *)(in_ECX + iVar4 + 8);
        *param_4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        uVar1 = *(uint *)(in_ECX + iVar4 + 0xc);
        param_4[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
        ;
        uVar1 = *(uint *)(in_ECX + iVar4 + 0x10);
        uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        if (uVar3 == 0xcafebabf) {
          if (uVar1 != 0) {
            return 0;
          }
          uVar3 = *(uint *)(in_ECX + iVar4 + 0x18);
          if (((uVar3 >> 0x18 != 0 || (uVar3 & 0xff0000) != 0) || (uVar3 & 0xff00) != 0) ||
              (uVar3 & 0xff) != 0) {
            return 0;
          }
          uVar3 = *(uint *)(in_ECX + iVar4 + 0x14);
          uVar1 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
          local_14 = 0x23;
          local_28 = 0x22;
          local_24 = 0x21;
          local_20 = 0x20;
          local_1c = 0x1f;
          local_18 = 0x1e;
          iVar2 = 0x1d;
          iVar5 = 0x1c;
        }
        else {
          local_14 = 0x1b;
          local_28 = 0x1a;
          local_24 = 0x19;
          local_20 = 0x18;
          local_1c = 0x17;
          local_18 = 0x16;
          iVar2 = 0x15;
          iVar5 = 0x14;
        }
        param_4[2] = uVar1;
        uVar3 = (uint)in_ECX[local_1c + iVar4] |
                (uint)in_ECX[local_18 + iVar4] << 8 |
                (uint)in_ECX[iVar2 + iVar4] << 0x10 | (uint)in_ECX[iVar5 + iVar4] << 0x18;
        param_4[3] = uVar3;
        param_4[4] = (uint)in_ECX[local_14 + iVar4] |
                     (uint)in_ECX[local_28 + iVar4] << 8 |
                     (uint)in_ECX[local_24 + iVar4] << 0x10 | (uint)in_ECX[local_20 + iVar4] << 0x18
        ;
        if (uVar1 <= in_EDX) {
          return CONCAT31((int3)(in_EDX - uVar1 >> 8),uVar3 <= in_EDX - uVar1);
        }
      }
    }
  }
  return 0;
}
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_28
#undef local_24
