/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2075640(long *param_1,ushort *param_2,long *param_3,ulong *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uchar uVar2;
  uint uVar3;
  void *out;
  void *buffer;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  uVar4 = (ulong)*(uint *)(param_2 + 2);
  if (SBORROW2(0,*param_2 & 0xf000)) {
    uVar4 = CONCAT44(*(undefined4 *)(param_2 + 0x36),*(uint *)(param_2 + 2));
  }
  if (param_3 == (long *)0x0) {
    return '\0';
  }
  if (param_4 == (ulong *)0x0) {
    return '\0';
  }
  if (uVar4 >> 0x20 != 0) {
    return '\0';
  }
  *param_3 = 0;
  *param_4 = uVar4;
  uVar6 = uVar4 + (uVar4 == 0);
  out = recovered_2000ad0(uVar6);
  if (out == (void *)0x0) {
LAB_0204f705:
    uVar2 = '\0';
  }
  else {
    recovered_2002110(out,0,uVar6);
    if (uVar4 != 0) {
      if ((param_2[0x11] & 8) == 0) {
        lVar7 = 0;
        do {
          uVar6 = (ulong)*(uint *)(param_1 + 1);
          if (uVar4 <= lVar7 * uVar6) goto LAB_0204f638;
          uVar2 = recovered_2075a60(param_1,*(int *)(param_2 + lVar7 * 2 + 0x14),(long)out,uVar4,
                                    lVar7 * uVar6);
          if (uVar2 == '\0') goto LAB_0204f6fd;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0xc);
        uVar6 = (ulong)*(uint *)(param_1 + 1);
LAB_0204f638:
        if (uVar6 * 0xc < uVar4) {
          iVar1 = *(int *)(param_2 + 0x2c);
          if ((iVar1 != 0) && (buffer = recovered_2000ad0(uVar6), buffer != (void *)0x0)) {
            uVar2 = recovered_2075810(param_1,iVar1,(long)buffer);
            if (uVar2 != '\0') {
              uVar3 = *(uint *)(param_1 + 1);
              if (3 < uVar3) {
                uVar6 = 0;
                do {
                  uVar5 = (ulong)uVar3 * (uVar6 + 0xc);
                  if (uVar4 <= uVar5) break;
                  uVar2 = recovered_2075a60(param_1,*(int *)((long)buffer + uVar6 * 4),(long)out,
                                            uVar4,uVar5);
                  if (uVar2 == '\0') goto LAB_0204f6f5;
                  uVar6 = uVar6 + 1;
                  uVar3 = *(uint *)(param_1 + 1);
                } while (uVar6 < uVar3 >> 2);
              }
              recovered_2000bb0(buffer);
              goto LAB_0204f6ea;
            }
LAB_0204f6f5:
            recovered_2000bb0(buffer);
          }
LAB_0204f6fd:
          recovered_2000bb0(out);
          goto LAB_0204f705;
        }
      }
      else {
        uVar3 = recovered_2075860(param_1,(short *)(param_2 + 0x14),(long)out,uVar4,5);
        if ((char)uVar3 == '\0') goto LAB_0204f6fd;
      }
    }
LAB_0204f6ea:
    *param_3 = (long)out;
    uVar2 = '\x01';
  }
  return uVar2;
}
