#include "functions.h"
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
#undef DAT_00061d3c
#define DAT_00061d3c (*(uint32_t *)(0x61d3cU))
#undef DAT_00061d44
#define DAT_00061d44 (*(int *)(0x61d44U))
#undef DAT_00061d48
#define DAT_00061d48 (*(byte *)(0x61d48U))
#undef DAT_00061d4c
#define DAT_00061d4c (*(char *)(0x61d4cU))
#undef DAT_00061d4d
#define DAT_00061d4d (*(char *)(0x61d4dU))
#undef DAT_00061d4e
#define DAT_00061d4e (*(byte *)(0x61d4eU))
#undef DAT_00061d4f
#define DAT_00061d4f (*(byte *)(0x61d4fU))
#undef DAT_00061d50
#define DAT_00061d50 (*(char *)(0x61d50U))
#undef DAT_00061d51
#define DAT_00061d51 (*(byte *)(0x61d51U))
#undef DAT_00061d52
#define DAT_00061d52 (*(byte *)(0x61d52U))
#undef DAT_00061e44
#define DAT_00061e44 (*(int *)(0x61e44U))
#undef DAT_00061e48
#define DAT_00061e48 (*(byte *)(0x61e48U))
#undef DAT_00061e4a
#define DAT_00061e4a (*(uint8_t *)(0x61e4aU))
#undef DAT_00062e4a
#define DAT_00062e4a (*(ushort *)(0x62e4aU))
#undef str_0005728b
#define str_0005728b (*(char (*)[1])(0x5728bU))
#undef str_000576b1
#define str_000576b1 (*(char (*)[1])(0x576b1U))
#define local_d0 (*(char (*)[128])(frame + 16))
#define local_50 (*(uint *)(frame + 144))
#define local_4c (*(undefined * *)(frame + 148))
#define local_48 (*(int *)(frame + 152))
#define local_44 (*(uint *)(frame + 156))
#define local_40 (*(uint *)(frame + 160))
#define local_3c (*(uint *)(frame + 164))
#define local_38 (*(int *)(frame + 168))
#define local_34 (*(uint *)(frame + 172))
#define local_30 (*(uint *)(frame + 176))
#define local_2c (*(int *)(frame + 180))
#define local_28 (*(int *)(frame + 184))
#define local_24 (*(int *)(frame + 188))
#define local_20 (*(uint *)(frame + 192))
#define local_1c (*(uint *)(frame + 196))
#define local_18 (*(int *)(frame + 200))
#define local_14 (*(undefined * *)(frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36b17
 */

void recovered_36b17(int param_1,int param_2,int param_3,int param_4,byte param_5,byte param_6,
               undefined1 param_7)

{
  unsigned char frame[256] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  byte bVar8;
  uint uVar7;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  if (((DAT_00061d48 == 1) && (DAT_00061d44 != 0)) && (param_3 != 0 || param_4 == 0)) {
    local_24 = 0;
    local_50 = 0;
    local_2c = param_2;
    local_18 = param_1;
    if (((DAT_00061d4c == '\0') && (DAT_00061d4d == '\0')) && (DAT_0005e71c == '\x01')) {
      DAT_00061d4d = '\x01';
      uVar4 = recovered_2f9d3(str_0005728b,&local_24,&local_50);
      if ((local_50 != 0 & (byte)uVar4) == 1) {
        uVar4 = recovered_36e2b(local_24,local_50,str_0005728b,local_d0);
        if ((char)uVar4 == '\0') {
          recovered_307b4(str_000576b1,local_d0);
        }
        recovered_32fb9();
      }
    }
    recovered_36da3();
    for (local_28 = 0; local_28 != param_4; local_28 = local_28 + 1) {
      bVar5 = *(byte *)(param_3 + local_28);
      if ((DAT_00061d4c == '\x01') && (DAT_00061d4e <= bVar5)) {
        uVar7 = (uint)bVar5 - (uint)DAT_00061d4e;
        if (DAT_00061e44 == 0 || DAT_00061d4f <= uVar7) goto LAB_00036c50;
        local_34 = (uint)DAT_00061d51;
        local_14 = (undefined *)(DAT_00061e44 + uVar7 * DAT_00061d52 * local_34);
        bVar5 = DAT_00061d52;
        cVar6 = DAT_00061d50;
LAB_00036c7b:
        bVar8 = (char)local_34 == '\0' | cVar6 == '\0' | DAT_00061d48 ^ 1 | DAT_00061d44 == 0;
        if (bVar5 != 0 && bVar8 == 0) {
          local_34 = local_34 & 0xff;
          local_1c = CONCAT11(bVar8,cVar6) & 0xff;
          local_30 = (uint)bVar5;
          local_48 = local_1c + 7;
          uVar7 = 0;
          uVar11 = local_34;
          while (uVar9 = uVar7, uVar9 != uVar11) {
            local_3c = ((uVar9 & 0xfff) << 4) / (uVar11 & 0xffff);
            uVar7 = uVar9 + 1;
            uVar10 = ((uVar7 * 0x10 + uVar11) - 1 & 0xffff) / (uVar11 & 0xffff);
            if ((ushort)local_3c < (ushort)uVar10) {
              local_38 = uVar10 - local_3c;
              local_3c = local_3c + local_2c;
              local_4c = local_14 + uVar9 * local_30;
              uVar10 = 0;
              uVar11 = local_1c;
              local_20 = uVar7;
              for (uVar9 = 0; uVar3 = local_1c, uVar11 != uVar9; uVar9 = uVar9 + 1) {
                if ((char)(local_4c[uVar9 >> 3] << ((byte)uVar9 & 7)) < '\0') {
                  uVar1 = (uVar10 & 0xffff) / (uVar11 & 0xffff);
                  uVar2 = (local_48 + uVar10 & 0xffff) / (uVar11 & 0xffff);
                  uVar7 = local_20;
                  if ((ushort)uVar1 < (ushort)uVar2) {
                    local_44 = (uint)param_6;
                    local_40 = (uint)param_5;
                    recovered_36877(&DAT_00061d3c,local_18 + uVar1,local_3c,uVar2 - uVar1,local_38,
                                    param_5,param_6,param_7);
                    uVar7 = local_20;
                    uVar11 = uVar3;
                  }
                }
                uVar10 = uVar10 + 8;
              }
              uVar11 = local_34;
            }
          }
        }
      }
      else {
LAB_00036c50:
        local_34 = (uint)DAT_00062e4a;
        if ((DAT_00062e4a != 0 & DAT_00061e48) == 1) {
          local_14 = &DAT_00061e4a + bVar5 * local_34;
          cVar6 = '\b';
          bVar5 = 1;
          goto LAB_00036c7b;
        }
      }
      local_18 = local_18 + 8;
    }
  }
  return;
}
