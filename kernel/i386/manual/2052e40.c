/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cbc (*(uint32_t volatile *)(0x2130728U))
#define DAT_020b9cd0 (*(uint8_t volatile *)(0x213073cU))
#define DAT_020b9cd4 (*(uint32_t volatile *)(0x2130740U))
#define DAT_020b9cd8 (*(uint32_t volatile *)(0x2130744U))
#define DAT_020b9ce0 (*(uint32_t volatile *)(0x213074cU))
#define DAT_020b9ce4 (*(uint32_t volatile *)(0x2130750U))
#define DAT_020b9cf4 (*(uint32_t volatile *)(0x2130760U))
#define DAT_020b9cf8 (*(uint32_t volatile *)(0x2130764U))
#define DAT_020b9cfc (*(uint32_t volatile *)(0x2130768U))
#define DAT_020b9d00 (*(uint32_t volatile *)(0x213076cU))
#define DAT_020b9d04 (*(uint32_t volatile *)(0x2130770U))
#define DAT_020b9d08 (*(uint32_t volatile *)(0x2130774U))
#define DAT_020b9d0c (*(uint32_t volatile *)(0x2130778U))
#define DAT_020b9d10 (*(uint32_t volatile *)(0x213077cU))
#define DAT_020b9d18 (*(uint32_t volatile *)(0x2130784U))
#define DAT_020b9d1c (*(uint32_t volatile *)(0x2130788U))
#define DAT_020b9d20 (*(uint8_t volatile *)(0x213078cU))
#define local_14 (*(uint *)(frame + 1116))
#define local_18 (*(uint *)(frame + 1112))
#define local_25c (*(undefined1 (*)[512])(frame + 532))
#define local_2c (*(undefined4 *)(frame + 1092))
#define local_30 (*(undefined4 *)(frame + 1088))
#define local_34 (*(undefined4 *)(frame + 1084))
#define local_38 (*(undefined4 *)(frame + 1080))
#define local_3c (*(undefined4 *)(frame + 1076))
#define local_40 (*(undefined4 *)(frame + 1072))
#define local_44 (*(undefined4 *)(frame + 1068))
#define local_45c (*(undefined1 (*)[512])(frame + 20))
#define local_48 (*(undefined4 *)(frame + 1064))
#define local_4c (*(undefined4 *)(frame + 1060))
#define local_50 (*(undefined4 *)(frame + 1056))
#define local_54 (*(undefined4 *)(frame + 1052))
#define local_5c (*(undefined1 (*)[8])(frame + 1044))
#define str_0208e2c8 (*(char (*)[1])(0x20c5070U))
undefined4 recovered_2052e40(void)

{
  unsigned char frame[1168] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;

  iVar2 = DAT_020b9d0c;
  if (iVar2 == 0) {
    return 0;
  }
  cVar5 = DAT_020b9d20;
  if (cVar5 == '\x01') {
    uVar6 = DAT_020b9d18;
    uVar7 = DAT_020b9cd4;
    uVar6 = uVar6 / (uVar7 >> 2);
    local_18 = DAT_020b9d1c;
    local_18 = local_18 / (uVar7 >> 2);
    if (uVar6 <= local_18) {
      iVar2 = DAT_020b9d10;
      local_14 = iVar2 << 2;
      do {
        iVar2 = DAT_020b9cd4;
        uVar9 = iVar2 * uVar6;
        recovered_2001e00(local_45c,0,0x200);
        uVar7 = local_14 - uVar9;
        if (uVar9 <= local_14 && uVar7 != 0) {
          uVar3 = DAT_020b9cd4;
          if (uVar3 <= uVar7) {
            uVar7 = uVar3;
          }
          uVar8 = DAT_020b9d0c;
          uVar8 = DAT_020b9d0c;
          iVar2 = DAT_020b9d0c;
          recovered_2001b70(local_45c,(void *)(uVar9 + iVar2),uVar7);
        }
        bVar1 = DAT_020b9cd0;
        iVar2 = DAT_020b9ce0;
        uVar8 = DAT_020b9cf4;
        uVar8 = DAT_020b9cf4;
        iVar4 = DAT_020b9cf4;
        uVar7 = DAT_020b9cd4;
        uVar8 = recovered_2050b00((uint)bVar1,iVar2 + uVar6 + iVar4,(int)local_45c,uVar7);
        if ((char)uVar8 == '\0') {
          return 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 <= local_18);
    }
    DAT_020b9d20 = 0;
  }
  recovered_2001e00(local_25c,0,0x200);
  recovered_2001e00(local_5c,0,0x44);
  recovered_2001b70(local_5c,str_0208e2c8,8);
  local_54 = 1;
  local_50 = DAT_020b9cd4;
  local_4c = DAT_020b9cd8;
  local_48 = DAT_020b9cf4;
  local_44 = DAT_020b9cf8;
  local_40 = DAT_020b9cfc;
  local_3c = DAT_020b9d00;
  local_38 = DAT_020b9d04;
  local_34 = DAT_020b9d08;
  local_30 = DAT_020b9cbc;
  local_2c = DAT_020b9ce4;
  recovered_2001b70(local_25c,local_5c,0x44);
  bVar1 = DAT_020b9cd0;
  uVar7 = DAT_020b9ce0;
  uVar8 = recovered_2050b00((uint)bVar1,uVar7,(int)local_25c,0x200);
  return uVar8;
}
