/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_18 (*(uint *)(frame + 40))
#define local_1c (*(uint *)(frame + 36))
#define local_24 (*(uint *)(frame + 28))
undefined4 recovered_205d170(int incoming_ecx,char *incoming_edx,uint *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;

  if (((incoming_edx != (char *)0x0 && incoming_ecx != 0) &&
      (uVar2 = *(uint *)(incoming_ecx + 0x4d4), uVar2 != 0)) &&
     (uVar3 = *(uint *)(incoming_ecx + 0x4dc), uVar3 != 0)) {
    iVar4 = *(int *)(incoming_ecx + 0x20);
    if (iVar4 == 0) {
      return 0;
    }
    uVar6 = *(uint *)(incoming_ecx + 0x24);
    if (uVar2 <= uVar6) {
      iVar1 = (uint)*(byte *)(incoming_ecx + 4) * 4 + 0xc;
      local_24 = *(uint *)(incoming_ecx + 0x4d8);
      if (-(uint)(uVar6 < uVar2) < (uint)(uVar6 - uVar2 < local_24 * iVar1)) {
        return 0;
      }
      if (uVar6 < uVar3) {
        return 0;
      }
      if (-(uint)(uVar6 < uVar3) < (uint)(uVar6 - uVar3 < *(uint *)(incoming_ecx + 0x4e0))) {
        return 0;
      }
      uVar6 = 0;
      if (local_24 != 0) {
        iVar9 = uVar2 + 0xf + iVar4;
        do {
          if (*(char *)(incoming_ecx + 5) == '\x01') {
            uVar2 = *(uint *)(iVar9 + -0xf);
            local_1c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                       uVar2 << 0x18;
            bVar5 = *(byte *)(iVar9 + -0xb);
            if (*(char *)(incoming_ecx + 4) == '\0') {
              local_18 = ((uint)*(byte *)(iVar9 + -5) << 8 |
                         (uint)*(byte *)(iVar9 + -6) << 0x10 | (uint)*(byte *)(iVar9 + -7) << 0x18)
                         + (uint)*(byte *)(iVar9 + -4);
              goto LAB_02046512;
            }
            iVar8 = ((uint)*(byte *)(iVar9 + -5) << 8 |
                    (uint)*(byte *)(iVar9 + -6) << 0x10 | (uint)*(byte *)(iVar9 + -7) << 0x18) +
                    (uint)*(byte *)(iVar9 + -4);
            uVar2 = *(uint *)(iVar9 + -3);
            local_18 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                       uVar2 << 0x18;
          }
          else {
            local_1c = *(uint *)(iVar9 + -0xf);
            bVar5 = *(byte *)(iVar9 + -0xb);
            local_18 = *(uint *)(iVar9 + -7);
            if (*(char *)(incoming_ecx + 4) == '\0') {
LAB_02046512:
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(iVar9 + -3);
            }
          }
          if ((((bVar5 & 1) != 0 && bVar5 < 0x20) && ((bVar5 & 0xe) != 0)) &&
             (local_1c < *(uint *)(incoming_ecx + 0x4e0))) {
            iVar7 = recovered_20022a0((char *)(local_1c + uVar3 + iVar4),incoming_edx);
            if (iVar7 == 0) {
              if ((bVar5 & 0xe) == 0xe) {
                bVar10 = CARRY4(local_18,*(uint *)(incoming_ecx + 8));
                local_18 = local_18 + *(uint *)(incoming_ecx + 8);
                iVar8 = iVar8 + (uint)bVar10;
              }
              if (iVar8 == 0) {
                *param_3 = local_18;
                uVar6 = CONCAT31((int3)((uint)param_3 >> 8),1);
                incoming_ecx = 1;
              }
              else {
                uVar6 = CONCAT31((int3)((uint)incoming_ecx >> 8),1);
                incoming_ecx = 0;
              }
              goto LAB_0204656c;
            }
            local_24 = *(uint *)(incoming_ecx + 0x4d8);
          }
          uVar6 = uVar6 + 1;
          iVar9 = iVar9 + iVar1;
        } while (uVar6 < local_24);
        uVar6 = 0;
      }
LAB_0204656c:
      return CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 & (byte)incoming_ecx);
    }
  }
  return 0;
}
