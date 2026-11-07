/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9cbc (*(uint32_t volatile *)(0x2130728U))
#define DAT_020b9cdc (*(uint32_t volatile *)(0x2130748U))
#define DAT_020b9d04 (*(uint32_t volatile *)(0x2130770U))
#define DAT_020b9d08 (*(uint32_t volatile *)(0x2130774U))
#define local_14 (*(char * *)(frame + 28))
#define local_18 (*(uint *)(frame + 24))
undefined4 recovered_2052bd0(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;

  local_18 = DAT_020b9d04;
  iVar9 = DAT_020b9d08;
  if (iVar9 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = DAT_020b9cdc;
    uVar4 = (iVar9 + -1 + uVar4) / uVar4;
  }
  iVar9 = DAT_020b9cbc;
  uVar7 = iVar9 * 0x100;
  if (uVar7 == 0) {
    bVar3 = recovered_2052370(&local_18,uVar4,0);
    if (!bVar3) {
      return 0;
    }
  }
  else {
    pcVar8 = (char *)DAT_020b9cdc;
    local_14 = pcVar8 + (uVar7 - 1);
    uVar5 = (uint)local_14 / (uint)pcVar8;
    bVar3 = recovered_2052370(&local_18,uVar4,uVar5);
    if (!bVar3) {
      return 0;
    }
    if (pcVar8 <= local_14) {
      iVar9 = DAT_020b9cdc;
      local_14 = recovered_2001650(iVar9 * uVar5);
      if (local_14 != (char *)0x0) {
        iVar9 = DAT_020b9cdc;
        recovered_2001e00(local_14,0,iVar9 * uVar5);
        iVar9 = DAT_020b9cbc;
        if (iVar9 != 0) {
          iVar9 = 0;
          uVar4 = 0;
          pcVar8 = local_14;
          do {
            recovered_2001e00(pcVar8,0,0x100);
            iVar1 = DAT_020b9cb8;
            pf_varargs_2003aa0__4_(pcVar8,0xf0,&DAT_0208e323,iVar1 + iVar9);
            iVar1 = DAT_020b9cb8;
            *(undefined4 *)(pcVar8 + 0xf0) = *(undefined4 *)(iVar1 + 0x104 + iVar9);
            *(undefined4 *)(pcVar8 + 0xf4) = *(undefined4 *)(iVar1 + 0xf8 + iVar9);
            *(undefined4 *)(pcVar8 + 0xf8) = *(undefined4 *)(iVar1 + 0xfc + iVar9);
            uVar4 = uVar4 + 1;
            pcVar8 = pcVar8 + 0x100;
            iVar9 = iVar9 + 0x110;
            uVar2 = DAT_020b9cbc;
          } while (uVar4 < uVar2);
        }
        pcVar8 = local_14;
        uVar4 = recovered_2052870(local_18,(int)local_14,uVar7,uVar5);
        recovered_2001710(pcVar8);
        if ((char)uVar4 != '\0') goto LAB_0203f917;
      }
      return 0;
    }
  }
LAB_0203f917:
  DAT_020b9d04 = local_18;
  DAT_020b9d08 = uVar7;
  uVar6 = recovered_2052e40();
  return uVar6;
}
