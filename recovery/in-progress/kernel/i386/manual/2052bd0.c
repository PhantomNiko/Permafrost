/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9cbc (*(uint32_t volatile *)(0x2130728U))
#define DAT_020b9cdc (*(uint32_t volatile *)(0x2130748U))
#define DAT_020b9d04 (*(uint32_t volatile *)(0x2130770U))
#define DAT_020b9d08 (*(uint32_t volatile *)(0x2130774U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_02130728 (*(uint32_t volatile *)(0x2130728U))
#define DAT_02130748 (*(uint32_t volatile *)(0x2130748U))
#define DAT_02130770 (*(uint32_t volatile *)(0x2130770U))
#define DAT_02130774 (*(uint32_t volatile *)(0x2130774U))
#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(char * *)(frame + 28))


uint recovered_2052bd0(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;

  local_18 = DAT_02130770;
  iVar8 = DAT_02130774;
  if (iVar8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = DAT_02130748;
    uVar4 = (iVar8 + -1 + uVar4) / uVar4;
  }
  iVar8 = DAT_02130728;
  uVar6 = iVar8 * 0x100;
  if (uVar6 == 0) {
    uVar3 = recovered_2052370(&local_18,uVar4,0);
    if (uVar3 == '\0') {
      return 0;
    }
  }
  else {
    pcVar7 = (char *)DAT_02130748;
    local_14 = pcVar7 + (uVar6 - 1);
    uVar5 = (uint)local_14 / (uint)pcVar7;
    uVar3 = recovered_2052370(&local_18,uVar4,uVar5);
    if (uVar3 == '\0') {
      return 0;
    }
    if (pcVar7 <= local_14) {
      iVar8 = DAT_02130748;
      local_14 = recovered_2001650(iVar8 * uVar5);
      if (local_14 != (char *)0x0) {
        iVar8 = DAT_02130748;
        recovered_2001e00(local_14,0,iVar8 * uVar5);
        iVar8 = DAT_02130728;
        if (iVar8 != 0) {
          iVar8 = 0;
          uVar4 = 0;
          pcVar7 = local_14;
          do {
            recovered_2001e00(pcVar7,0,0x100);
            iVar1 = DAT_02130724;
            pf_varargs_20044f0__4_(pcVar7,0xf0,&DAT_020c5119,iVar1 + iVar8);
            iVar1 = DAT_02130724;
            *(undefined4 *)(pcVar7 + 0xf0) = *(undefined4 *)(iVar1 + 0x104 + iVar8);
            *(undefined4 *)(pcVar7 + 0xf4) = *(undefined4 *)(iVar1 + 0xf8 + iVar8);
            *(undefined4 *)(pcVar7 + 0xf8) = *(undefined4 *)(iVar1 + 0xfc + iVar8);
            uVar4 = uVar4 + 1;
            pcVar7 = pcVar7 + 0x100;
            iVar8 = iVar8 + 0x110;
            uVar2 = DAT_02130728;
          } while (uVar4 < uVar2);
        }
        pcVar7 = local_14;
        uVar4 = recovered_2052870(local_18,(int)local_14,uVar6,uVar5);
        recovered_2001710(pcVar7);
        if ((char)uVar4 != '\0') goto LAB_02052d57;
      }
      return 0;
    }
  }
LAB_02052d57:
  DAT_02130770 = local_18;
  DAT_02130774 = uVar6;
  uVar4 = recovered_2052e40();
  return uVar4;
}
#undef DAT_0208e323
#undef DAT_020b9cb8
#undef DAT_020b9cbc
#undef DAT_020b9cdc
#undef DAT_020b9d04
#undef DAT_020b9d08
#undef DAT_020c5119
#undef DAT_02130724
#undef DAT_02130728
#undef DAT_02130748
#undef DAT_02130770
#undef DAT_02130774
#undef local_18
#undef local_14
