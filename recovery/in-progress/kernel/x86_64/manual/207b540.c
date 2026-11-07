/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
uchar recovered_207b540(long param_1,ulong param_2,int param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;

  puVar1 = (ulong *)(param_2 & 0xffffffff);
  if (param_3 == 2) {
    if (*(char *)(param_1 + 5) == '\x01') goto LAB_02054010;
  }
  else {
    if (param_3 != 1) {
      if (param_4 == 0) {
        return '\0';
      }
      pf_varargs_20039e0__8_((char *)param_4,0xa0,&DAT_020a25e3,0x20edbe8U);
      return '\0';
    }
    if (*(char *)(param_1 + 4) == '\x01') {
      if (*(char *)(param_1 + 5) == '\0') {
        uVar3 = (ulong)*(uint *)(param_1 + 8) + *puVar1;
        uVar7 = (undefined1)(uVar3 >> 0x20);
        uVar8 = (undefined1)(uVar3 >> 8);
        uVar9 = (undefined1)(uVar3 >> 0x10);
        uVar6 = (undefined1)(uVar3 >> 0x18);
        uVar10 = (undefined1)(uVar3 >> 0x28);
        uVar11 = (undefined1)(uVar3 >> 0x30);
        uVar5 = uVar3 >> 0x38;
      }
      else {
        uVar3 = *puVar1;
        uVar5 = (ulong)*(uint *)(param_1 + 8) +
                (uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                 (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                 (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
                uVar3 << 0x38);
        uVar6 = (undefined1)(uVar5 >> 0x20);
        uVar3 = uVar5 >> 0x38;
        uVar8 = (undefined1)(uVar5 >> 0x30);
        uVar9 = (undefined1)(uVar5 >> 0x28);
        uVar7 = (undefined1)(uVar5 >> 0x18);
        uVar10 = (undefined1)(uVar5 >> 0x10);
        uVar11 = (undefined1)(uVar5 >> 8);
      }
      *(char *)puVar1 = (char)uVar3;
      *(undefined1 *)((long)puVar1 + 1) = uVar8;
      *(undefined1 *)((long)puVar1 + 2) = uVar9;
      *(undefined1 *)((long)puVar1 + 3) = uVar6;
      *(undefined1 *)((long)puVar1 + 4) = uVar7;
      *(undefined1 *)((long)puVar1 + 5) = uVar10;
      *(undefined1 *)((long)puVar1 + 6) = uVar11;
      *(char *)((long)puVar1 + 7) = (char)uVar5;
      return '\x01';
    }
    if (*(char *)(param_1 + 5) != '\0') {
LAB_02054010:
      uVar2 = (uint)*puVar1;
      uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
              *(int *)(param_1 + 8);
      uVar6 = (undefined1)(uVar2 >> 0x10);
      uVar4 = uVar2 >> 0x18;
      uVar7 = (undefined1)(uVar2 >> 8);
      goto LAB_0205406c;
    }
  }
  uVar4 = *(int *)(param_1 + 8) + (uint)*puVar1;
  uVar7 = (undefined1)(uVar4 >> 0x10);
  uVar6 = (undefined1)(uVar4 >> 8);
  uVar2 = uVar4 >> 0x18;
LAB_0205406c:
  *(char *)puVar1 = (char)uVar4;
  *(undefined1 *)((long)puVar1 + 1) = uVar6;
  *(undefined1 *)((long)puVar1 + 2) = uVar7;
  *(char *)((long)puVar1 + 3) = (char)uVar2;
  return '\x01';
}
