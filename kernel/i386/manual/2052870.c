/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cd0 (*(uint8_t volatile *)(0x213073cU))
#define DAT_020b9cd8 (*(uint32_t volatile *)(0x2130744U))
#define DAT_020b9cdc (*(uint32_t volatile *)(0x2130748U))
#define DAT_020b9ce0 (*(uint32_t volatile *)(0x213074cU))
#define DAT_020b9cfc (*(uint32_t volatile *)(0x2130768U))
#define DAT_020b9d0c (*(uint32_t volatile *)(0x2130778U))
#define DAT_020b9d10 (*(uint32_t volatile *)(0x213077cU))
#define local_18 (*(uint *)(frame + 24))
uint recovered_2052870(uint incoming_ecx,int incoming_edx,uint param_3,uint param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_EAX = 0;
  void *pf_output_slot;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_EAX = 0;
  uint uVar9;
  uint size;

  if (param_4 == 0) {
    uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),param_3 == 0);
  }
  else {
    uVar3 = DAT_020b9cdc;
    pf_output_slot = recovered_2001650(uVar3);
    uVar6 = 0;
    if (pf_output_slot != (void *)0x0) {
      uVar9 = 1;
      local_18 = incoming_ecx;
      do {
        size = 0;
        if (uVar6 <= param_3) {
          size = param_3 - uVar6;
        }
        uVar3 = DAT_020b9cdc;
        recovered_2001e00(pf_output_slot,0,uVar3);
        uVar7 = DAT_020b9cdc;
        if (uVar7 <= size) {
          size = uVar7;
        }
        if (incoming_edx != 0 && size != 0) {
          recovered_2001b70(pf_output_slot,(void *)(uVar6 + incoming_edx),size);
          uVar7 = DAT_020b9cdc;
        }
        bVar2 = DAT_020b9cd0;
        iVar5 = DAT_020b9cfc;
        uVar8 = DAT_020b9ce0;
        uVar8 = DAT_020b9ce0;
        iVar4 = DAT_020b9ce0;
        iVar1 = DAT_020b9cd8;
        uVar8 = recovered_2050b00((uint)bVar2,(local_18 - 2) * iVar1 + iVar5 + iVar4,(int)pf_output_slot,uVar7)
        ;
        if ((char)uVar8 == '\0') {
LAB_0203f55e:
          recovered_2001710(pf_output_slot);
          return 0;
        }
        if (uVar9 < param_4) {
          iVar1 = DAT_020b9d0c;
          local_18 = *(uint *)(iVar1 + local_18 * 4);
          if ((local_18 < 2) || (uVar7 = DAT_020b9d10, uVar7 <= local_18)) goto LAB_0203f55e;
        }
        uVar6 = uVar6 + size;
        iVar1 = (1 - param_4) + uVar9;
        uVar9 = uVar9 + 1;
      } while (iVar1 != 1);
      recovered_2001710(pf_output_slot);
      uVar6 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  return uVar6;
}
