/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define local_18 (*(undefined1 *)(frame + 24))
undefined4 recovered_205cc90(int incoming_ecx,uint *incoming_edx,int param_3,int param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;

  if (param_3 == 2) {
    if (*(char *)(incoming_ecx + 5) == '\x01') {
      uVar2 = *incoming_edx;
      uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
              *(int *)(incoming_ecx + 8);
      uVar4 = (undefined1)(uVar2 >> 0x10);
      uVar3 = uVar2 >> 0x18;
      uVar5 = (undefined1)(uVar2 >> 8);
    }
    else {
      uVar3 = *(int *)(incoming_ecx + 8) + *incoming_edx;
      uVar5 = (undefined1)(uVar3 >> 0x10);
      uVar4 = (undefined1)(uVar3 >> 8);
      uVar2 = uVar3 >> 0x18;
    }
    *(char *)incoming_edx = (char)uVar3;
    *(undefined1 *)((int)incoming_edx + 1) = uVar4;
    *(undefined1 *)((int)incoming_edx + 2) = uVar5;
    *(char *)((int)incoming_edx + 3) = (char)uVar2;
  }
  else {
    if (param_3 != 1) {
      if (param_4 != 0) {
        pf_varargs_2003aa0__4_((char *)param_4,0xa0,&DAT_0208e323,0x20c67aaU);
      }
      return 0;
    }
    if (*(char *)(incoming_ecx + 4) == '\x01') {
      if (*(char *)(incoming_ecx + 5) == '\0') {
        uVar3 = *incoming_edx + *(uint *)(incoming_ecx + 8);
        uVar1 = incoming_edx[1] + (uint)CARRY4(*incoming_edx,*(uint *)(incoming_ecx + 8));
        uVar6 = (uint)CONCAT11((char)(uVar3 >> 0x10),(char)(uVar3 >> 0x18));
        uVar2 = (uint)CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18));
        local_18 = (undefined1)(uVar3 >> 8);
        uVar4 = (undefined1)(uVar1 >> 8);
      }
      else {
        uVar3 = *incoming_edx;
        uVar2 = incoming_edx[1];
        uVar1 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar2 = uVar1 + *(uint *)(incoming_ecx + 8);
        uVar6 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) +
                (uint)CARRY4(uVar1,*(uint *)(incoming_ecx + 8));
        uVar3 = uVar6 >> 0x18;
        local_18 = (undefined1)(uVar6 >> 0x10);
        uVar1 = uVar2 >> 0x18;
        uVar4 = (undefined1)(uVar2 >> 0x10);
      }
      *(char *)incoming_edx = (char)uVar3;
      *(undefined1 *)((int)incoming_edx + 1) = local_18;
      *(char *)((int)incoming_edx + 2) = (char)(uVar6 >> 8);
      *(char *)((int)incoming_edx + 3) = (char)uVar6;
      *(char *)(incoming_edx + 1) = (char)uVar1;
      *(undefined1 *)((int)incoming_edx + 5) = uVar4;
      *(char *)((int)incoming_edx + 6) = (char)(uVar2 >> 8);
      *(char *)((int)incoming_edx + 7) = (char)uVar2;
    }
    else {
      if (*(char *)(incoming_ecx + 5) == '\0') {
        uVar3 = *(int *)(incoming_ecx + 8) + *incoming_edx;
        uVar5 = (undefined1)(uVar3 >> 0x10);
        uVar4 = (undefined1)(uVar3 >> 8);
        uVar2 = uVar3 >> 0x18;
      }
      else {
        uVar2 = *incoming_edx;
        uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
                *(int *)(incoming_ecx + 8);
        uVar4 = (undefined1)(uVar2 >> 0x10);
        uVar3 = uVar2 >> 0x18;
        uVar5 = (undefined1)(uVar2 >> 8);
      }
      *(char *)incoming_edx = (char)uVar3;
      *(undefined1 *)((int)incoming_edx + 1) = uVar4;
      *(undefined1 *)((int)incoming_edx + 2) = uVar5;
      *(char *)((int)incoming_edx + 3) = (char)uVar2;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}
