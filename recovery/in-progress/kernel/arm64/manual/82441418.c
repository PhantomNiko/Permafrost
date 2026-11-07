/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_82441418(long param_1,long param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong extraout_x8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;

  if ((((param_1 != 0) && (param_2 != 0)) &&
      (uVar8 = (ulong)*(uint *)(param_1 + 0x4f0), *(uint *)(param_1 + 0x4f0) != 0)) &&
     (uVar9 = (ulong)*(uint *)(param_1 + 0x4f8), *(uint *)(param_1 + 0x4f8) != 0)) {
    lVar1 = 0x10;
    if (*(char *)(param_1 + 4) == '\0') {
      lVar1 = 0xc;
    }
    lVar10 = *(long *)(param_1 + 0x30);
    if (lVar10 != 0) {
      uVar13 = *(uint *)(param_1 + 0x4f4);
      uVar11 = *(ulong *)(param_1 + 0x38);
      if ((uVar8 <= uVar11 && (ulong)(uVar13 * (int)lVar1) <= uVar11 - uVar8) &&
         (uVar9 <= uVar11 && (ulong)*(uint *)(param_1 + 0x4fc) <= uVar11 - uVar9)) {
        uVar11 = 0;
        uVar8 = uVar8 + lVar10;
        puVar12 = (uint *)(uVar8 + 8);
        do {
          uVar7 = (uint)uVar8;
          if (uVar13 <= uVar11) {
LAB_4042a790:
            return uVar11 < uVar13 & uVar7;
          }
          bVar2 = *(byte *)(param_1 + 5);
          uVar5 = recovered_8243faf0(puVar12 + -2,(uint)bVar2);
          bVar3 = (byte)puVar12[-1];
          if (*(char *)(param_1 + 4) == '\x01') {
            uVar6 = recovered_8243fb00((undefined8 *)puVar12,(uint)bVar2);
          }
          else {
            uVar6 = recovered_8243faf0(puVar12,(uint)bVar2);
            uVar6 = uVar6 & 0xffffffff;
          }
          uVar8 = (ulong)(bVar3 & 1);
          if (((bVar3 < 0x20 && (bVar3 & 1) != 0) && (bVar3 & 0xe) != 0) &&
             (uVar8 = (ulong)*(uint *)(param_1 + 0x4fc), (uint)uVar5 < *(uint *)(param_1 + 0x4fc)))
          {
            iVar4 = recovered_82400e0c((char *)(lVar10 + uVar9 + (uVar5 & 0xffffffff)),
                                       (char *)param_2);
            if (iVar4 == 0) {
              if ((bVar3 & 0xe) == 0xe) {
                uVar6 = uVar6 + *(uint *)(param_1 + 8);
              }
              if (uVar6 >> 0x20 == 0) {
                *param_3 = (int)uVar6;
                uVar7 = 1;
              }
              else {
                uVar7 = 0;
              }
              goto LAB_4042a790;
            }
            uVar13 = *(uint *)(param_1 + 0x4f4);
            uVar8 = extraout_x8;
          }
          uVar11 = uVar11 + 1;
          puVar12 = (uint *)((long)puVar12 + lVar1);
        } while( true );
      }
    }
  }
  return 0;
}
