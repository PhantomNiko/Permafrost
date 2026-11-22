/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9cbc (*(uint32_t volatile *)(0x2130728U))
#define DAT_020b9cd0 (*(uint8_t volatile *)(0x213073cU))
#define DAT_020b9cd8 (*(uint32_t volatile *)(0x2130744U))
#define DAT_020b9cdc (*(uint32_t volatile *)(0x2130748U))
#define DAT_020b9ce0 (*(uint32_t volatile *)(0x213074cU))
#define DAT_020b9cfc (*(uint32_t volatile *)(0x2130768U))
#define DAT_020b9d04 (*(uint32_t volatile *)(0x2130770U))
#define DAT_020b9d08 (*(uint32_t volatile *)(0x2130774U))
#define DAT_020b9d0c (*(uint32_t volatile *)(0x2130778U))
#define DAT_020b9d10 (*(uint32_t volatile *)(0x213077cU))
#define local_11c (*(char (*)[240])(frame + 20))
#define local_14 (*(uint *)(frame + 284))
#define local_18 (*(int *)(frame + 280))
#define local_1c (*(uint *)(frame + 276))
#define local_24 (*(undefined4 *)(frame + 268))
#define local_28 (*(undefined4 *)(frame + 264))
#define local_2c (*(undefined4 *)(frame + 260))
undefined4 recovered_20529d0(uint incoming_ecx,uint incoming_edx)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  void *buffer;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  iVar5 = DAT_020b9d08;
  uVar7 = 0;
  uVar9 = 0;
  if (iVar5 != 0) {
    uVar9 = DAT_020b9cdc;
    uVar9 = (iVar5 + -1 + uVar9) / uVar9;
  }
  uVar8 = DAT_020b9cbc;
  iVar5 = uVar8 * 0x100;
  if (iVar5 != 0) {
    uVar7 = DAT_020b9cdc;
    uVar7 = (iVar5 + -1 + uVar7) / uVar7;
  }
  PF_PART1(local_18, 0) = (byte)incoming_edx;
  if (((byte)local_18 & uVar7 != uVar9) == 0) {
    uVar10 = incoming_ecx * 0x100;
    uVar9 = DAT_020b9cdc;
    uVar7 = uVar10 / uVar9;
    local_1c = uVar10 % uVar9;
    if ((((local_1c + 0x100 <= uVar9) && (incoming_ecx < uVar8)) &&
        (uVar8 = DAT_020b9d04, 1 < uVar8)) && (uVar3 = DAT_020b9d10, uVar8 < uVar3)) {
      if (uVar9 <= uVar10) {
        iVar6 = DAT_020b9d0c;
        do {
          uVar8 = *(uint *)(iVar6 + uVar8 * 4);
          if (uVar8 < 2) {
            return 0;
          }
          if (uVar3 <= uVar8) {
            return 0;
          }
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      local_18 = iVar5;
      local_14 = incoming_ecx;
      buffer = recovered_2001650(uVar9);
      if (buffer != (void *)0x0) {
        bVar1 = DAT_020b9cd0;
        iVar2 = DAT_020b9cfc;
        uVar4 = DAT_020b9ce0;
        uVar4 = DAT_020b9ce0;
        iVar6 = DAT_020b9ce0;
        iVar5 = DAT_020b9cd8;
        uVar9 = DAT_020b9cdc;
        uVar4 = recovered_204ed30((uint)bVar1,iVar5 * (uVar8 - 2) + iVar2 + iVar6,(int)buffer,uVar9)
        ;
        if ((char)uVar4 == '\0') {
          recovered_2001710(buffer);
        }
        else {
          recovered_2001e00(local_11c,0,0x100);
          iVar6 = incoming_ecx * 0x110;
          iVar5 = DAT_020b9cb8;
          pf_varargs_2003aa0__4_(local_11c,0xf0,&DAT_0208e323,iVar5 + iVar6);
          iVar5 = DAT_020b9cb8;
          local_2c = *(undefined4 *)(iVar5 + 0x104 + iVar6);
          local_28 = *(undefined4 *)(iVar5 + 0xf8 + iVar6);
          local_24 = *(undefined4 *)(iVar5 + 0xfc + iVar6);
          recovered_2001b70((void *)((int)buffer + local_1c),local_11c,0x100);
          bVar1 = DAT_020b9cd0;
          iVar2 = DAT_020b9cfc;
          uVar4 = DAT_020b9ce0;
          uVar4 = DAT_020b9ce0;
          iVar6 = DAT_020b9ce0;
          iVar5 = DAT_020b9cd8;
          uVar9 = DAT_020b9cdc;
          uVar4 = recovered_2050b00((uint)bVar1,(uVar8 - 2) * iVar5 + iVar2 + iVar6,(int)buffer,
                                    uVar9);
          recovered_2001710(buffer);
          if ((char)uVar4 != '\0') {
            DAT_020b9d08 = local_18;
            uVar4 = recovered_2052e40();
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}
