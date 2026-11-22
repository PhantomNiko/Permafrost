#include "functions.h"
#undef DAT_021043cc
#define DAT_021043cc (*(uint8_t volatile *)(0x21043ccU))
#undef DAT_021043d4
#define DAT_021043d4 (*(uint32_t volatile *)(0x21043d4U))
#undef DAT_021043d8
#define DAT_021043d8 (*(uint32_t volatile *)(0x21043d8U))
#undef DAT_021043e0
#define DAT_021043e0 (*(uint32_t volatile *)(0x21043e0U))
#undef DAT_021043e4
#define DAT_021043e4 (*(uint16_t volatile *)(0x21043e4U))
#undef DAT_02104414
#define DAT_02104414 (*(uint32_t volatile *)(0x2104414U))
#undef DAT_02104418
#define DAT_02104418 (*(uint32_t volatile *)(0x2104418U))
#undef DAT_02104420
#define DAT_02104420 (*(uint8_t volatile *)(0x2104420U))
#undef DAT_0210442c
#define DAT_0210442c (*(uint8_t volatile *)(0x210442cU))
#undef DAT_0210a010
#define DAT_0210a010 (*(uint8_t volatile *)(0x210a010U))
#undef DAT_02115000
#define DAT_02115000 (*(uint8_t volatile *)(0x2115000U))
#undef Ram02104420
#define Ram02104420 (*(uint32_t volatile *)(0x2104420U))
#define local_4c (*(uint *)(frame + 20))
#define local_48 (*(undefined4 *)(frame + 24))
#define local_44 (*(uint *)(frame + 28))
#define local_40 (*(undefined4 *)(frame + 32))
#define local_3c (*(uint *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint (*)[2])(frame + 44))
#define local_2c (*(uint *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(undefined * *)(frame + 60))
#define local_20 (*(uint *)(frame + 64))
#define local_1c (*(uint *)(frame + 68))
#define local_18 (*(undefined * *)(frame + 72))
#define local_14 (*(char * *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2014970
 */

uint recovered_2014970(int controller,uint queue)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined *out;
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined *puVar10;

  uVar9 = (ushort)controller;
  out = &DAT_02115000 + controller * 0x2000;
  puVar10 = out;
  if (9 < uVar9) {
    puVar10 = (undefined *)0x0;
  }
  local_48 = 0;
  local_4c = 0;
  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_3c = 0;
  if ((((uVar9 < 10) && (cVar2 = DAT_021043cc, cVar2 == '\x01')) &&
      (iVar6 = DAT_021043d4, iVar6 != 0)) &&
     ((iVar6 = DAT_021043d8, iVar6 != 0 && (uVar1 = DAT_021043e4, uVar9 < uVar1)))) {
    local_2c = queue;
    recovered_2001e00(out,0,0x2000);
    local_24 = &DAT_0210a010 + controller * 0x1000;
    recovered_2001e00(local_24,0,0x1000);
    iVar6 = DAT_021043d4;
    *(ushort *)(iVar6 + 0x16) = uVar9;
    uVar1 = *(ushort *)(iVar6 + 0x18);
    local_28 = (uint)uVar1;
    local_20 = (uint)*(ushort *)(iVar6 + 0x1e);
    if (uVar1 == 0) {
      DAT_02104414 = 0x2b;
    }
    else {
      if (7 < uVar1) {
        local_28 = 8;
      }
      uVar7 = local_28 * 0x10;
      local_1c = local_28;
      local_18 = out;
      uVar5 = recovered_20091e0((uint)out,uVar7,&local_4c);
      if ((char)uVar5 != '\0') {
        puVar8 = local_18 + uVar7;
        uVar5 = recovered_20091e0((uint)puVar8,local_1c * 2 + 6,&local_44);
        if (((char)uVar5 != '\0') &&
           (uVar5 = recovered_20091e0((uint)(local_18 + 0x1000),local_1c * 8 + 6,&local_3c),
           (char)uVar5 != '\0')) {
          local_14 = &DAT_0210442c + controller * 0x14;
          recovered_2001e00(local_14,0,0x14);
          *local_14 = '\x01';
          local_14[1] = (char)local_2c;
          *(ushort *)(local_14 + 2) = uVar9;
          *(short *)(local_14 + 4) = (short)local_28;
          iVar4 = DAT_021043e0;
          uVar3 = DAT_021043d8;
          uVar3 = DAT_021043d8;
          iVar6 = DAT_021043d8;
          *(uint *)(local_14 + 0xc) = local_20 * iVar4 + iVar6;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          if ((char)local_2c != '\0') {
            puVar8 = puVar10 + 0xf;
            uVar5 = 0;
            do {
              local_34[1] = 0;
              local_34[0] = 0;
              uVar7 = recovered_20091e0((uint)local_24,0x200,local_34);
              if ((char)uVar7 == '\0') {
                DAT_02104414 = 0x2d;
                controller = controller * 0x10000 + uVar5;
                goto LAB_02014b47;
              }
              puVar8[-0xf] = (char)local_34[0];
              puVar8[-0xe] = (char)(local_34[0] >> 8);
              puVar8[-0xd] = (char)(local_34[0] >> 0x10);
              puVar8[-0xc] = (char)(local_34[0] >> 0x18);
              puVar8[-0xb] = (char)local_34[1];
              puVar8[-10] = (char)(local_34[1] >> 8);
              puVar8[-9] = (char)(local_34[1] >> 0x10);
              puVar8[-8] = (char)(local_34[1] >> 0x18);
              puVar8[-7] = 0;
              puVar8[-6] = 2;
              puVar8[-5] = 0;
              puVar8[-4] = 0;
              puVar8[-3] = 2;
              puVar8[-2] = 0;
              puVar8[-1] = 0;
              *puVar8 = 0;
              if ((*local_14 == '\x01') && (uVar7 = (uint)*(ushort *)(local_14 + 4), uVar5 < uVar7))
              {
                local_20 = uVar7 * 0x10;
                uVar9 = *(ushort *)(local_14 + 6);
                uVar7 = (uint)uVar9 % uVar7;
                local_18[uVar7 * 2 + local_20 + 4] = (char)uVar5;
                local_18[uVar7 * 2 + local_20 + 5] = (char)(uVar5 >> 8);
                iVar6 = uVar9 + 1;
                *(short *)(local_14 + 6) = (short)iVar6;
                local_18[local_20 + 2] = (char)iVar6;
                local_18[local_20 + 3] = (char)((uint)iVar6 >> 8);
              }
              uVar5 = uVar5 + 1;
              local_24 = local_24 + 0x200;
              puVar8 = puVar8 + 0x10;
            } while (local_1c != uVar5);
          }
          iVar6 = DAT_021043d4;
          *(short *)(iVar6 + 0x18) = (short)local_28;
          *(uint *)(iVar6 + 0x20) = local_4c;
          *(undefined4 *)(iVar6 + 0x24) = local_48;
          *(uint *)(iVar6 + 0x28) = local_44;
          *(undefined4 *)(iVar6 + 0x2c) = local_40;
          *(uint *)(iVar6 + 0x30) = local_3c;
          *(undefined4 *)(iVar6 + 0x34) = local_38;
          *(undefined2 *)(iVar6 + 0x1c) = 1;
          if ((((char)local_2c != '\0') && (*local_14 == '\x01')) &&
             (*(undefined2 **)(local_14 + 0xc) != (undefined2 *)0x0)) {
            **(undefined2 **)(local_14 + 0xc) = *(undefined2 *)(local_14 + 2);
          }
          Ram02104420 = local_1c;
          return CONCAT31((int3)(local_1c >> 8),1);
        }
      }
      DAT_02104414 = 0x2c;
    }
  }
  else {
    DAT_02104414 = 0x2a;
  }
LAB_02014b47:
  DAT_02104418 = controller;
  return 0;
}
