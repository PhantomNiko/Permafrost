#include "functions.h"
#undef DAT_000504b0
#define DAT_000504b0 (*(uint32_t *)(0x504b0U))
#undef DAT_000504b8
#define DAT_000504b8 (*(int *)(0x504b8U))
#undef DAT_000504bc
#define DAT_000504bc (*(byte *)(0x504bcU))
#undef DAT_000504c0
#define DAT_000504c0 (*(char *)(0x504c0U))
#undef DAT_000504c2
#define DAT_000504c2 (*(byte *)(0x504c2U))
#undef DAT_000504c3
#define DAT_000504c3 (*(byte *)(0x504c3U))
#undef DAT_000504c4
#define DAT_000504c4 (*(char *)(0x504c4U))
#undef DAT_000504c5
#define DAT_000504c5 (*(byte *)(0x504c5U))
#undef DAT_000504c6
#define DAT_000504c6 (*(byte *)(0x504c6U))
#undef DAT_000505b8
#define DAT_000505b8 (*(int *)(0x505b8U))
#undef DAT_000505bc
#define DAT_000505bc (*(byte *)(0x505bcU))
#undef DAT_000505be
#define DAT_000505be (*(uint8_t *)(0x505beU))
#undef DAT_000515be
#define DAT_000515be (*(ushort *)(0x515beU))
#define local_18 (*(int *)(frame + 16))
#define local_14 (*(undefined * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29010
 */

void recovered_29010(int param_1,int param_2,int param_3,int param_4,undefined1 param_5,
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

  if (((DAT_000504bc == 1) && (DAT_000504b8 != 0)) && (param_3 != 0 || param_4 == 0)) {
    recovered_29214();
    recovered_292a4();
    local_18 = param_1;
    for (iVar8 = 0; iVar8 != param_4; iVar8 = iVar8 + 1) {
      bVar7 = *(byte *)(param_3 + iVar8);
      if ((DAT_000504c0 == '\x01') && (DAT_000504c2 <= bVar7)) {
        uVar10 = (uint)bVar7 - (uint)DAT_000504c2;
        if (DAT_000505b8 == 0 || DAT_000504c3 <= uVar10) goto LAB_000290c1;
        uVar5 = (uint)DAT_000504c5;
        local_14 = (undefined *)(DAT_000505b8 + uVar10 * DAT_000504c6 * uVar5);
        bVar7 = DAT_000504c6;
        cVar9 = DAT_000504c4;
LAB_000290ec:
        bVar12 = (char)uVar5 == '\0' | cVar9 == '\0' | DAT_000504bc ^ 1 | DAT_000504b8 == 0;
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
                    recovered_28d70(&DAT_000504b0,local_18 + uVar3,uVar1 + param_2,uVar4 - uVar3,
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
LAB_000290c1:
        uVar5 = (uint)DAT_000515be;
        if ((DAT_000515be != 0 & DAT_000505bc) == 1) {
          local_14 = &DAT_000505be + bVar7 * uVar5;
          cVar9 = '\b';
          bVar7 = 1;
          goto LAB_000290ec;
        }
      }
      local_18 = local_18 + 8;
    }
  }
  return;
}
