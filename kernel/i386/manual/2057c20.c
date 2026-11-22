/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_2057c20(int incoming_ecx,ushort *incoming_edx,int *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longlong lVar2;
  bool bVar3;
  void *pf_output_slot;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  int *piVar6;
  void *buffer;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong size;
  uint uVar10;

  iVar9 = 0;
  if (SBORROW2(0,*incoming_edx & 0xf000)) {
    iVar9 = *(int *)(incoming_edx + 0x36);
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (iVar9 != 0) {
    return 0;
  }
  uVar1 = *(uint *)(incoming_edx + 2);
  *param_3 = 0;
  *param_4 = uVar1;
  size = 1;
  if (uVar1 != 0) {
    size = uVar1;
  }
  pf_output_slot = recovered_2001650(size);
  if (pf_output_slot == (void *)0x0) {
    return 0;
  }
  recovered_2001e00(pf_output_slot,0,size);
  piVar6 = (int *)0x0;
  if (uVar1 != 0) {
    if ((incoming_edx[0x11] & 8) == 0) {
      uVar10 = 0;
      do {
        uVar8 = *(uint *)(incoming_ecx + 4);
        uVar7 = (uint)((ulonglong)uVar8 * (ulonglong)uVar10 >> 0x20);
        uVar4 = (uint)((ulonglong)uVar8 * (ulonglong)uVar10);
        if ((uVar4 < uVar1) <= uVar7) goto LAB_02042140;
        uVar5 = recovered_20580b0((int *)incoming_ecx,*(int *)(incoming_edx + uVar10 * 2 + 0x14),
                                  (int)pf_output_slot,uVar1,0,uVar4,uVar7);
        if ((char)uVar5 == '\0') goto LAB_0204221e;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0xc);
      uVar8 = *(uint *)(incoming_ecx + 4);
LAB_02042140:
      if ((uint)((ulonglong)uVar8 * 0xc >> 0x20) < (uint)((uint)((ulonglong)uVar8 * 0xc) < uVar1)) {
        uVar10 = *(uint *)(incoming_edx + 0x2c);
        if ((uVar10 == 0) || (buffer = recovered_2001650(uVar8), buffer == (void *)0x0)) {
LAB_0204221e:
          recovered_2001710(pf_output_slot);
          return 0;
        }
        uVar5 = recovered_2057e60((int *)incoming_ecx,uVar10,(int)buffer);
        if ((char)uVar5 == '\0') {
LAB_02042213:
          recovered_2001710(buffer);
          goto LAB_0204221e;
        }
        uVar10 = *(uint *)(incoming_ecx + 4);
        if (3 < uVar10) {
          uVar8 = 0;
          do {
            lVar2 = (ulonglong)(uVar8 + 0xc) * (ulonglong)uVar10;
            uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
            uVar10 = (uint)lVar2;
            if ((uVar10 < uVar1) <= uVar4) break;
            uVar5 = recovered_20580b0((int *)incoming_ecx,*(int *)((int)buffer + uVar8 * 4),(int)pf_output_slot
                                      ,uVar1,0,uVar10,uVar4);
            if ((char)uVar5 == '\0') goto LAB_02042213;
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(incoming_ecx + 4);
          } while (uVar8 < uVar10 >> 2);
        }
        recovered_2001710(buffer);
      }
      *param_3 = (int)pf_output_slot;
      piVar6 = param_3;
      goto LAB_0204212c;
    }
    bVar3 = recovered_2057eb0((int *)incoming_ecx,(short *)(incoming_edx + 0x14),(int)pf_output_slot,uVar1,0,5)
    ;
    piVar6 = (int *)CONCAT31(extraout_var,bVar3);
    if (!bVar3) goto LAB_0204221e;
  }
  *param_3 = (int)pf_output_slot;
LAB_0204212c:
  return CONCAT31((int3)((uint)piVar6 >> 8),1);
}
