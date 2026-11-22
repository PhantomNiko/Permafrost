/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020d6a07 (*(char (*)[1])(0x20d6a07U))
#define str_020d6a11 (*(char (*)[1])(0x20d6a11U))
#define str_020d6a28 (*(char (*)[1])(0x20d6a28U))
#define format (*(char * *)(frame + 28))


undefined4 recovered_20bcf90(ushort *in_ECX,uint in_EDX,ushort param_3,uint *param_4,char *param_5)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;

  if (in_EDX < 0xc || in_ECX == (ushort *)0x0) {
    return 0;
  }
  if ((ushort)(*in_ECX << 8 | *in_ECX >> 8) != param_3) {
    return 0;
  }
  if (-1 < (char)in_ECX[1]) {
    return 0;
  }
  if ((*(byte *)((int)in_ECX + 3) & 0xf) == 0) {
    uVar8 = in_ECX[2] << 8 | in_ECX[2] >> 8;
    uVar4 = 0xc;
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        uVar3 = 0;
        while( true ) {
          if (in_EDX <= uVar4) goto LAB_020bd163;
          uVar5 = uVar4 + 1;
          uVar7 = (uint)*(byte *)((int)in_ECX + uVar4);
          if ((*(byte *)((int)in_ECX + uVar4) & 0xc0) != 0) break;
          if (uVar7 == 0) goto LAB_020bd075;
          uVar4 = uVar5 + uVar7;
          if ((in_EDX < uVar4) || (bVar1 = 0x7f < uVar3, uVar3 = uVar3 + 1, bVar1))
          goto LAB_020bd163;
        }
        if (((uVar7 & 0xc0) != 0xc0) || (in_EDX <= uVar5)) goto LAB_020bd163;
        uVar5 = uVar4 + 2;
LAB_020bd075:
        uVar4 = uVar5 + 4;
        if (in_EDX < uVar4) goto LAB_020bd163;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
    uVar8 = in_ECX[3] << 8 | in_ECX[3] >> 8;
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        uVar3 = 0;
        while( true ) {
          if (in_EDX <= uVar4) goto LAB_020bd163;
          uVar5 = uVar4 + 1;
          uVar7 = (uint)*(byte *)((int)in_ECX + uVar4);
          if ((*(byte *)((int)in_ECX + uVar4) & 0xc0) != 0) break;
          if (uVar7 == 0) goto LAB_020bd107;
          uVar4 = uVar5 + uVar7;
          if ((in_EDX < uVar4) || (bVar1 = 0x7f < uVar3, uVar3 = uVar3 + 1, bVar1))
          goto LAB_020bd163;
        }
        if (((uVar7 & 0xc0) != 0xc0) || (in_EDX <= uVar5)) goto LAB_020bd163;
        uVar5 = uVar4 + 2;
LAB_020bd107:
        uVar3 = uVar5 + 10;
        if (in_EDX < uVar3) goto LAB_020bd163;
        uVar2 = *(ushort *)((int)in_ECX + uVar5 + 8);
        uVar2 = uVar2 << 8 | uVar2 >> 8;
        uVar4 = uVar2 + uVar3;
        if (in_EDX < uVar4) goto LAB_020bd163;
        if (((uVar2 == 4) &&
            ((ushort)(*(ushort *)((int)in_ECX + uVar5) << 8 | *(ushort *)((int)in_ECX + uVar5) >> 8)
             == 1)) &&
           (uVar2 = *(ushort *)((int)in_ECX + uVar5 + 2), (ushort)(uVar2 << 8 | uVar2 >> 8) == 1)) {
          uVar4 = *(uint *)((int)in_ECX + uVar3);
          uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          *param_4 = uVar4;
          return CONCAT31((int3)(uVar4 >> 8),uVar4 != 0);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
    format = str_020d6a28;
  }
  else {
    format = str_020d6a07;
  }
LAB_020bd16b:
  pf_varargs_20044f0___(param_5,0x60,format);
  return 0;
LAB_020bd163:
  format = str_020d6a11;
  goto LAB_020bd16b;
}
#undef str_020d6a07
#undef str_020d6a11
#undef str_020d6a28
#undef format
