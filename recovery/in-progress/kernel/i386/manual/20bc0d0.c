/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cd0 (*(uint8_t volatile *)(0x213073cU))
#define DAT_020b9ce0 (*(uint32_t volatile *)(0x213074cU))
uint recovered_20bc0d0(uint incoming_ecx,int incoming_edx,int param_3,uint param_4,uint param_5,
                      int param_6,int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  void *pf_output_slot;
  undefined4 uVar3;
  undefined4 unaff_EBX = 0;
  uint uVar4;
  uint size;
  int iVar5;

  if (incoming_edx == 0) {
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),param_4 == 0);
  }
  else if ((param_7 == 0 || incoming_ecx < 2) || (param_3 == 0 && param_4 != 0)) {
LAB_02048eba:
    uVar4 = 0;
  }
  else {
    pf_output_slot = recovered_2001650(param_5);
    uVar4 = 0;
    if (pf_output_slot != (void *)0x0) {
      iVar5 = (incoming_ecx - 2) * param_7 + param_6;
      do {
        size = 0;
        if (uVar4 <= param_4) {
          size = param_4 - uVar4;
        }
        recovered_2001e00(pf_output_slot,0,param_5);
        if (param_5 <= size) {
          size = param_5;
        }
        if (size != 0) {
          recovered_2001b70(pf_output_slot,(void *)(param_3 + uVar4),size);
        }
        bVar1 = DAT_020b9cd0;
        iVar2 = DAT_020b9ce0;
        uVar3 = recovered_2050b00((uint)bVar1,iVar2 + iVar5,(int)pf_output_slot,param_5);
        if ((char)uVar3 == '\0') {
          recovered_2001710(pf_output_slot);
          goto LAB_02048eba;
        }
        uVar4 = uVar4 + size;
        iVar5 = iVar5 + param_7;
        incoming_edx = incoming_edx + -1;
      } while (incoming_edx != 0);
      recovered_2001710(pf_output_slot);
      uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return uVar4;
}
