/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(ulong *)(frame + 24))
#define local_40 (*(long *)(frame + 16))
uchar recovered_206cab0(long *param_1,ulong param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  void *buffer;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;

  uVar4 = 0x10;
  if (8 < param_2) {
    uVar4 = param_2 * 2;
  }
  if (param_2 == 0) {
    return '\x01';
  }
  uVar8 = 0x10;
  do {
    uVar7 = uVar8;
    uVar10 = (ulong)uVar7;
    if (0x80000000 < uVar7) break;
    uVar8 = uVar7 * 2;
  } while (uVar10 < uVar4);
  if ((param_1[4] != 0) && (uVar7 <= *(uint *)(param_1 + 5))) {
    return '\x01';
  }
  buffer = recovered_2000ad0(uVar10 * 4);
  if (buffer == (void *)0x0) {
    return '\0';
  }
  if (uVar7 == 0) {
    if (param_1[1] != 0) {
LAB_0204c282:
      recovered_2000bb0(buffer);
      return '\0';
    }
  }
  else {
    uVar4 = 0;
    do {
      puVar1 = (undefined4 *)((long)buffer + uVar4 * 4);
      *puVar1 = 0xffffffff;
      puVar1[1] = 0xffffffff;
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0xffffffff;
      puVar1 = (undefined4 *)((long)buffer + uVar4 * 4 + 0x10);
      *puVar1 = 0xffffffff;
      puVar1[1] = 0xffffffff;
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0xffffffff;
      uVar4 = uVar4 + 8;
    } while (uVar10 != uVar4);
    if (param_1[1] != 0) {
      if (uVar7 == 0) goto LAB_0204c282;
      uVar8 = uVar7 - 1;
      local_40 = 1;
      local_38 = 0;
      do {
        lVar2 = *param_1;
        uVar9 = 0x811c9dc5;
        if ((lVar2 != 0) && (bVar6 = *(byte *)(lVar2 + local_38 * 0x118), bVar6 != 0)) {
          pbVar5 = (byte *)(lVar2 + local_40);
          uVar9 = 0x811c9dc5;
          do {
            uVar9 = (bVar6 ^ uVar9) * 0x1000193;
            bVar6 = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while (bVar6 != 0);
        }
        uVar4 = (ulong)(uVar9 & uVar8);
        uVar9 = *(uint *)((long)buffer + uVar4 * 4);
        if (uVar9 == 0xffffffff) {
          *(int *)((long)buffer + uVar4 * 4) = (int)local_38;
        }
        else {
          uVar11 = 0;
          do {
            if ((((ulong)uVar9 < (ulong)param_1[1]) &&
                (iVar3 = recovered_2002eb0((char *)((ulong)uVar9 * 0x118 + *param_1),
                                           (char *)(*param_1 + local_38 * 0x118)), iVar3 == 0)) ||
               (uVar8 == uVar11)) goto LAB_0204c282;
            uVar4 = (ulong)((int)uVar4 + 1U & uVar8);
            uVar9 = *(uint *)((long)buffer + uVar4 * 4);
            uVar11 = uVar11 + 1;
          } while (uVar9 != 0xffffffff);
          *(int *)((long)buffer + uVar4 * 4) = (int)local_38;
          if (uVar7 <= uVar11) goto LAB_0204c282;
        }
        local_38 = local_38 + 1;
        local_40 = local_40 + 0x118;
      } while (local_38 < (ulong)param_1[1]);
    }
  }
  recovered_2000bb0((void *)param_1[4]);
  param_1[4] = (long)buffer;
  *(uint *)(param_1 + 5) = uVar7;
  return '\x01';
}
