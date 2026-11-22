/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(uint *)(frame + 28))
#define local_20 (*(int *)(frame + 16))
undefined4 recovered_2050650(int *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 in_EAX = 0;
  undefined3 uVar5;
  void *buffer;
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int *extraout_EAX = 0;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  uVar5 = (undefined3)((uint)in_EAX >> 8);
  if (incoming_edx != 0) {
    uVar7 = incoming_edx * 2;
    if (0x80000000 < uVar7) {
      uVar7 = 0x80000001;
    }
    uVar1 = 0x10;
    uVar8 = 0x10;
    if (8 < incoming_edx) {
      uVar8 = uVar7;
    }
    do {
      uVar7 = uVar1;
      uVar1 = uVar7 * 2;
    } while (uVar7 < uVar8);
    if ((incoming_ecx[4] == 0) || ((uint)incoming_ecx[5] < uVar7)) {
      buffer = recovered_2001650(uVar7 * 4);
      if (buffer == (void *)0x0) {
        return 0;
      }
      if (uVar7 == 0) {
        if (incoming_ecx[1] != 0) {
LAB_0203ef02:
          recovered_2001710(buffer);
          return 0;
        }
      }
      else {
        uVar1 = 0;
        do {
          *(undefined4 *)((int)buffer + uVar1 * 4) = 0xffffffff;
          uVar1 = uVar1 + 1;
        } while (uVar7 != uVar1);
        if (incoming_ecx[1] != 0) {
          uVar1 = uVar7 - 1;
          local_14 = 0;
          local_20 = 1;
          do {
            iVar4 = *incoming_ecx;
            uVar8 = 0x811c9dc5;
            if ((iVar4 != 0) && (bVar6 = *(byte *)(iVar4 + local_14 * 0x110), bVar6 != 0)) {
              pbVar2 = (byte *)(iVar4 + local_20);
              do {
                uVar8 = (bVar6 ^ uVar8) * 0x1000193;
                bVar6 = *pbVar2;
                pbVar2 = pbVar2 + 1;
              } while (bVar6 != 0);
            }
            uVar8 = uVar8 & uVar1;
            uVar3 = *(uint *)((int)buffer + uVar8 * 4);
            if (uVar3 == 0xffffffff) {
              *(uint *)((int)buffer + uVar8 * 4) = local_14;
            }
            else {
              uVar9 = 0;
              do {
                if (((uVar3 < (uint)incoming_ecx[1]) &&
                    (iVar4 = recovered_20022a0((char *)(uVar3 * 0x110 + *incoming_ecx),
                                               (char *)(*incoming_ecx + local_14 * 0x110)),
                    iVar4 == 0)) || (uVar1 == uVar9)) goto LAB_0203ef02;
                uVar8 = uVar8 + 1 & uVar1;
                uVar3 = *(uint *)((int)buffer + uVar8 * 4);
                uVar9 = uVar9 + 1;
              } while (uVar3 != 0xffffffff);
              *(uint *)((int)buffer + uVar8 * 4) = local_14;
              if (uVar7 <= uVar9) goto LAB_0203ef02;
            }
            local_14 = local_14 + 1;
            local_20 = local_20 + 0x110;
          } while (local_14 < (uint)incoming_ecx[1]);
        }
      }
      recovered_2001710((void *)incoming_ecx[4]);
      incoming_ecx[4] = (int)buffer;
      incoming_ecx[5] = uVar7;
      incoming_ecx = extraout_EAX;
    }
    uVar5 = (undefined3)((uint)incoming_ecx >> 8);
  }
  return CONCAT31(uVar5,1);
}
