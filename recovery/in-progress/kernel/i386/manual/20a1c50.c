/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cd0 (*(uint8_t volatile *)(0x213073cU))
#define DAT_020b9cd4 (*(uint32_t volatile *)(0x2130740U))
#define DAT_020b9cdc (*(uint32_t volatile *)(0x2130748U))
#define DAT_020b9ce0 (*(uint32_t volatile *)(0x213074cU))
#define DAT_020b9cf0 (*(uint32_t volatile *)(0x213075cU))
#define DAT_020b9d24 (*(uint32_t volatile *)(0x2130790U))
#define DAT_020b9d2c (*(uint32_t volatile *)(0x2130798U))
#define DAT_020b9d30 (*(uint32_t volatile *)(0x213079cU))
undefined4 recovered_20a1c50(longlong *incoming_ecx,longlong *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *buffer;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;

  if ((((incoming_ecx != (longlong *)0x0) && (incoming_edx != (longlong *)0x0)) &&
      (iVar8 = DAT_020b9cf0, iVar8 == 7)) &&
     (((iVar8 = DAT_020b9d30, iVar8 != 0 && (iVar8 = DAT_020b9d2c, iVar8 != 0)) &&
      (iVar2 = DAT_020b9cdc, iVar2 != 0)))) {
    iVar2 = DAT_020b9cd4;
    buffer = recovered_2001650(iVar8 * iVar2);
    if (buffer != (void *)0x0) {
      bVar1 = DAT_020b9cd0;
      iVar5 = DAT_020b9d24;
      uVar7 = DAT_020b9ce0;
      uVar7 = DAT_020b9ce0;
      iVar4 = DAT_020b9ce0;
      uVar7 = recovered_204ed30((uint)bVar1,iVar5 + iVar4,(int)buffer,iVar8 * iVar2);
      if ((char)uVar7 != '\0') {
        iVar8 = DAT_020b9d30;
        uVar10 = 0;
        if (2 < iVar8 + 2U) {
          piVar9 = (int *)((int)buffer + 8);
          uVar10 = 0;
          do {
            uVar10 = uVar10 + (*piVar9 == 0);
            piVar9 = piVar9 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        recovered_2001710(buffer);
        uVar3 = DAT_020b9cdc;
        uVar6 = DAT_020b9d30;
        *incoming_edx = (ulonglong)uVar3 * (ulonglong)uVar6;
        *incoming_ecx = (ulonglong)uVar3 * (ulonglong)uVar10;
        return CONCAT31((int3)((ulonglong)uVar3 * (ulonglong)uVar10 >> 8),1);
      }
      recovered_2001710(buffer);
    }
  }
  return 0;
}
