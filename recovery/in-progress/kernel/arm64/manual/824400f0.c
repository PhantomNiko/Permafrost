/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define uStack_68 (*(ulong *)(frame + 56))
#define uStack_70 (*(ulong *)(frame + 48))
#define uStack_78 (*(ulong *)(frame + 40))
#define uStack_80 (*(ulong *)(frame + 32))
#define uStack_88 (*(ulong *)(frame + 24))
#define uStack_8c (*(uint *)(frame + 20))
undefined1 recovered_824400f0(long param_1,long param_2)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;

  uVar10 = (ulong)*(uint *)(param_1 + 0x4cc);
  if (*(uint *)(param_1 + 0x4cc) != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (uVar9 = (ulong)*(uint *)(param_1 + 0x4c8),
       *(ulong *)(param_1 + 0x38) < uVar9 || *(ulong *)(param_1 + 0x38) - uVar9 < uVar10)) {
LAB_40429210:
      recovered_8243b738(param_2,0xa0);
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x30) + uVar9;
    uStack_70 = 0;
    bVar4 = *(char *)(param_1 + 4) == '\0';
    uVar8 = 8;
    if (bVar4) {
      uVar8 = 4;
    }
    uVar9 = (ulong)uVar8;
    lVar2 = 2;
    if (!bVar4) {
      lVar2 = 3;
    }
    uVar11 = 1;
    uVar13 = 0;
    uVar14 = 0;
    while (uVar13 < uVar10) {
      uStack_68 = uVar13 + 1;
      bVar3 = *(byte *)(lVar1 + uVar13);
      uStack_78 = 0;
      if (8 < bVar3 >> 4) goto LAB_40429210;
      uVar12 = (ulong)bVar3 & 0xf;
      piVar15 = (int *)(param_1 + 0x40 + uVar14 * 0x24);
      iVar7 = (int)uVar11;
      switch((uintptr_t)(bVar3 >> 4)) {
      case 0:
        goto switchD_404292a4_caseD_0;
      case 1:
        break;
      case 2:
        uVar13 = recovered_824410a0(lVar1,uVar10,&uStack_68,&uStack_70);
        if ((uVar13 & 1) != 0) goto LAB_4042946c;
        goto LAB_40429210;
      case 3:
        uVar13 = recovered_824410a0(lVar1,uVar10,&uStack_68,&uStack_78);
        if ((uVar13 & 1) != 0) {
          uVar13 = uStack_78;
          goto LAB_4042945c;
        }
        goto LAB_40429210;
      case 4:
        uVar13 = uVar12 << lVar2;
LAB_4042945c:
        uStack_70 = uStack_70 + uVar13;
LAB_40429464:
        uVar12 = uVar11;
        break;
      default:
        uStack_80 = uVar12;
        if (((bVar3 & 0xf0) == 0x60) &&
           (uVar13 = recovered_824410a0(lVar1,uVar10,&uStack_68,&uStack_80), (uVar13 & 1) == 0))
        goto LAB_40429210;
        for (uVar13 = 0; uVar12 = uVar11, uVar13 < uStack_80; uVar13 = uVar13 + 1) {
          if ((*(ulong *)(param_1 + 0x4c0) <= uVar14) || ((uint)piVar15[1] < uStack_70))
          goto LAB_40429210;
          uStack_88 = uStack_88 & 0xffffffff00000000;
          uVar6 = recovered_82440438(param_1,*piVar15 + (int)uStack_70,uVar8,(int *)&uStack_88);
          if ((int)uVar6 == 0) {
            return 0;
          }
          uVar12 = recovered_82441108(param_1,uStack_88 & 0xffffffff,iVar7,param_2);
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          uStack_70 = uStack_70 + uVar9;
        }
        break;
      case 7:
        if ((uVar14 < *(ulong *)(param_1 + 0x4c0)) &&
           (piVar15 = (int *)(param_1 + 0x40 + uVar14 * 0x24), uStack_70 <= (uint)piVar15[1])) {
          uStack_80 = uStack_80 & 0xffffffff00000000;
          uVar6 = recovered_82440438(param_1,*piVar15 + (int)uStack_70,uVar8,(int *)&uStack_80);
          if ((int)uVar6 == 0) {
            return 0;
          }
          uVar6 = recovered_82441108(param_1,uStack_80 & 0xffffffff,iVar7,param_2);
          if ((int)uVar6 == 0) {
            return 0;
          }
          uVar13 = recovered_824410a0(lVar1,uVar10,&uStack_68,&uStack_78);
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          uStack_70 = uStack_78 + uVar9 + uStack_70;
          goto LAB_40429464;
        }
        goto LAB_40429210;
      case 8:
        uStack_88 = 0;
        uStack_80 = 0;
        uVar6 = recovered_824410a0(lVar1,uVar10,&uStack_68,&uStack_80);
        if (((int)uVar6 == 0) ||
           (uVar6 = recovered_824410a0(lVar1,uVar10,&uStack_68,&uStack_88), (int)uVar6 == 0))
        goto LAB_40429210;
        for (uVar13 = 0; uVar12 = uVar11, uVar13 < uStack_80; uVar13 = uVar13 + 1) {
          if ((*(ulong *)(param_1 + 0x4c0) <= uVar14) || ((uint)piVar15[1] < uStack_70))
          goto LAB_40429210;
          uStack_8c = 0;
          uVar6 = recovered_82440438(param_1,*piVar15 + (int)uStack_70,uVar8,(int *)&uStack_8c);
          if ((int)uVar6 == 0) {
            return 0;
          }
          uVar12 = recovered_82441108(param_1,(ulong)uStack_8c,iVar7,param_2);
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          uStack_70 = uStack_88 + uVar9 + uStack_70;
        }
      }
      uVar11 = uVar12;
      uVar12 = uVar14;
LAB_4042946c:
      uVar13 = uStack_68;
      uVar14 = uVar12;
    }
  }
switchD_404292a4_caseD_0:
  bVar4 = recovered_82440c98(param_1,*(uint *)(param_1 + 0x4d0),*(uint *)(param_1 + 0x4d4),0,param_2
                            );
  uVar5 = 0;
  if (bVar4) {
    bVar4 = recovered_82440c98(param_1,*(uint *)(param_1 + 0x4d8),*(uint *)(param_1 + 0x4dc),1,
                               param_2);
    uVar5 = 0;
    if (bVar4) {
      bVar4 = recovered_82440c98(param_1,*(uint *)(param_1 + 0x4e0),*(uint *)(param_1 + 0x4e4),0,
                                 param_2);
      uVar5 = 0;
      if (bVar4) {
        recovered_824404d0(*(ulong *)(param_1 + 0x10),*(long *)(param_1 + 0x20));
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}
