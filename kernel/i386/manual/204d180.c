/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9cc0 (*(uint32_t volatile *)(0x213072cU))
#define DAT_020b9cc4 (*(uint32_t volatile *)(0x2130730U))
bool recovered_204d180(uint incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  void *pf_output_slot;
  int iVar6;

  uVar5 = DAT_020b9cc0;
  bVar2 = true;
  if (uVar5 < incoming_ecx) {
    uVar1 = DAT_020b9cc4;
    if (uVar1 == 0 || incoming_ecx <= uVar1) {
      uVar4 = 0x10;
      if (uVar5 != 0) {
        uVar4 = uVar5;
      }
      for (; uVar4 < incoming_ecx; uVar4 = uVar4 * 2) {
        if ((int)uVar4 < 0) {
          uVar4 = incoming_ecx;
          break;
        }
      }
      uVar5 = uVar4;
      if (uVar1 <= uVar4) {
        uVar5 = uVar1;
      }
      if (uVar1 == 0) {
        uVar5 = uVar4;
      }
      pvVar3 = (void *)DAT_020b9cb8;
      pvVar3 = recovered_2001860(pvVar3,uVar5 * 0x110);
      if (pvVar3 != (void *)0x0) {
        uVar1 = DAT_020b9cc0;
        iVar6 = uVar5 - uVar1;
        if (uVar1 <= uVar5 && iVar6 != 0) {
          pf_output_slot = (void *)((int)pvVar3 + uVar1 * 0x110);
          do {
            recovered_2001e00(pf_output_slot,0,0x110);
            pf_output_slot = (void *)((int)pf_output_slot + 0x110);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        DAT_020b9cb8 = pvVar3;
        DAT_020b9cc0 = uVar5;
        return incoming_ecx <= uVar5;
      }
    }
    bVar2 = false;
  }
  return bVar2;
}
