#include "functions.h"
#undef DAT_00057324
#define DAT_00057324 (*(uint32_t *)(0x57324U))
#undef DAT_0005732c
#define DAT_0005732c (*(int *)(0x5732cU))
#undef DAT_00057330
#define DAT_00057330 (*(byte *)(0x57330U))
#undef DAT_00057334
#define DAT_00057334 (*(char *)(0x57334U))
#undef DAT_00057336
#define DAT_00057336 (*(byte *)(0x57336U))
#undef DAT_00057337
#define DAT_00057337 (*(byte *)(0x57337U))
#undef DAT_00057338
#define DAT_00057338 (*(char *)(0x57338U))
#undef DAT_00057339
#define DAT_00057339 (*(byte *)(0x57339U))
#undef DAT_0005733a
#define DAT_0005733a (*(byte *)(0x5733aU))
#undef DAT_0005742c
#define DAT_0005742c (*(int *)(0x5742cU))
#undef DAT_00057430
#define DAT_00057430 (*(byte *)(0x57430U))
#undef DAT_00057432
#define DAT_00057432 (*(uint8_t *)(0x57432U))
#undef DAT_00058432
#define DAT_00058432 (*(ushort *)(0x58432U))
#define local_18 (*(int *)(frame + 16))
#define local_14 (*(undefined * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26933
 */

void recovered_26933(int param_1,int param_2,int param_3,int param_4,undefined1 param_5,
               undefined1 param_6,undefined1 param_7)

{
  unsigned char frame[72];

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  char cVar9;
  byte bVar12;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;

  if (((DAT_00057330 == 1) && (DAT_0005732c != 0)) && (param_3 != 0 || param_4 == 0)) {
    recovered_26b37();
    recovered_26bc7();
    local_18 = param_1;
    for (iVar8 = 0; iVar8 != param_4; iVar8 = iVar8 + 1) {
      bVar7 = *(byte *)(param_3 + iVar8);
      if ((DAT_00057334 == '\x01') && (DAT_00057336 <= bVar7)) {
        uVar10 = (uint)bVar7 - (uint)DAT_00057336;
        if (DAT_0005742c == 0 || DAT_00057337 <= uVar10) goto LAB_000269e4;
        uVar5 = (uint)DAT_00057339;
        local_14 = (undefined *)(DAT_0005742c + uVar10 * DAT_0005733a * uVar5);
        bVar7 = DAT_0005733a;
        cVar9 = DAT_00057338;
LAB_00026a0f:
        bVar12 = (char)uVar5 == '\0' | cVar9 == '\0' | DAT_00057330 ^ 1 | DAT_0005732c == 0;
        if (bVar7 != 0 && bVar12 == 0) {
          uVar5 = uVar5 & 0xff;
          uVar6 = CONCAT11(bVar12,cVar9) & 0xff;
          uVar10 = 0;
          while (uVar11 = uVar10, uVar11 != uVar5) {
            uVar1 = ((uVar11 & 0xfff) << 4) / uVar5;
            uVar10 = uVar11 + 1;
            uVar2 = ((uVar10 * 0x10 + uVar5) - 1 & 0xffff) / uVar5;
            if ((ushort)uVar1 < (ushort)uVar2) {
              uVar14 = 0;
              for (uVar13 = 0; uVar6 != uVar13; uVar13 = uVar13 + 1) {
                if ((char)(local_14[(uVar13 >> 3) + uVar11 * bVar7] << ((byte)uVar13 & 7)) < '\0') {
                  uVar3 = (uVar14 & 0xffff) / uVar6;
                  uVar4 = (uVar6 + 7 + uVar14 & 0xffff) / uVar6;
                  if ((ushort)uVar3 < (ushort)uVar4) {
                    recovered_26695(&DAT_00057324,local_18 + uVar3,uVar1 + param_2,uVar4 - uVar3,
                                    uVar2 - uVar1,param_5,param_6,param_7);
                  }
                }
                uVar14 = uVar14 + 8;
              }
            }
          }
        }
      }
      else {
LAB_000269e4:
        uVar5 = (uint)DAT_00058432;
        if ((DAT_00058432 != 0 & DAT_00057430) == 1) {
          local_14 = &DAT_00057432 + bVar7 * uVar5;
          cVar9 = '\b';
          bVar7 = 1;
          goto LAB_00026a0f;
        }
      }
      local_18 = local_18 + 8;
    }
  }
  return;
}
