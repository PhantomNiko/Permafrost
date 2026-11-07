/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a2d8 (*(uint32_t volatile *)(0x8248aaf8U))
#define DAT_404948b8 (*(uint64_t volatile *)(0x8266ee58U))
#define DAT_404948c0 (*(uint64_t volatile *)(0x8266ee60U))
#define DAT_40494930 (*(uint64_t volatile *)(0x8266eea0U))
#define uStack_58 (*(undefined8 *)(frame + 72))
#define uStack_60 (*(undefined8 *)(frame + 64))
#define uStack_68 (*(undefined8 *)(frame + 56))
#define uStack_70 (*(undefined8 *)(frame + 48))
#define uStack_78 (*(undefined8 *)(frame + 40))
#define uStack_80 (*(undefined8 *)(frame + 32))
#define uStack_88 (*(undefined4 *)(frame + 24))
#define uStack_90 (*(undefined8 *)(frame + 16))
undefined8 recovered_8246ae18(int *param_1,int *param_2)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  int *out;
  ulong size;
  ulong uVar8;
  int iVar9;
  int iVar10;

  iVar2 = *param_2;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uVar4 = recovered_8244e540(param_1);
  if ((int)uVar4 == 0) {
    return 0;
  }
  iVar9 = *param_2;
  if (iVar9 == 0) {
    uVar7 = DAT_404948b8;
    uVar8 = DAT_40494930;
    if (uVar7 == uVar8) {
      uVar8 = 8;
      if (uVar7 != 0) {
        uVar8 = uVar7 << 1;
      }
      if (uVar8 <= uVar7) goto LAB_40448ee0;
      pvVar5 = (void *)DAT_404948c0;
      pvVar5 = recovered_82400820(pvVar5,uVar8 << 4);
      if (pvVar5 == (void *)0x0) goto LAB_40448ee0;
      DAT_404948c0 = pvVar5;
      DAT_40494930 = uVar8;
    }
    iVar10 = DAT_4045a2d8;
    do {
      iVar9 = iVar10;
      iVar10 = 1;
      if (1 < iVar9 + 1U) {
        iVar10 = iVar9 + 1;
      }
      DAT_4045a2d8 = iVar10;
    } while ((iVar9 == 0) || (lVar6 = recovered_824535dc(iVar9), lVar6 != 0));
    lVar6 = DAT_404948b8;
    lVar3 = DAT_404948c0;
    piVar1 = (int *)(lVar3 + lVar6 * 0x10);
    *piVar1 = iVar9;
    *(int **)(piVar1 + 2) = param_2;
    DAT_404948b8 = lVar6 + 1;
    *param_2 = iVar9;
  }
  recovered_82451760((undefined4 *)&uStack_90,iVar9);
  uVar7 = recovered_824627d4(param_1,0x8247a879U,(long)&uStack_90);
  recovered_8243166c(&uStack_90);
  if ((uVar7 & 1) != 0) {
    return 1;
  }
  if (iVar2 == 0) {
    uVar7 = 0;
    uVar8 = DAT_404948b8;
    piVar1 = (int *)DAT_404948c0;
    size = uVar8 << 4;
    do {
      out = piVar1;
      if (uVar8 == uVar7) goto LAB_40448edc;
      uVar7 = uVar7 + 1;
      size = size - 0x10;
      piVar1 = out + 4;
    } while (*out != iVar9);
    if (uVar7 < uVar8) {
      recovered_82400a00(out,out + 4,size);
      uVar8 = DAT_404948b8;
    }
    DAT_404948b8 = uVar8 - 1;
LAB_40448edc:
    *param_2 = 0;
  }
LAB_40448ee0:
  recovered_8243166c((undefined8 *)param_1);
  return 0;
}
