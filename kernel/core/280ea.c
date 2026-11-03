#include "functions.h"
#undef DAT_0004b490
#define DAT_0004b490 (*(uint32_t *)(0x4b490U))
#undef DAT_0004b498
#define DAT_0004b498 (*(int *)(0x4b498U))
#undef DAT_0004b49c
#define DAT_0004b49c (*(byte *)(0x4b49cU))
#undef DAT_0004b4a0
#define DAT_0004b4a0 (*(char *)(0x4b4a0U))
#undef DAT_0004b4a2
#define DAT_0004b4a2 (*(byte *)(0x4b4a2U))
#undef DAT_0004b4a3
#define DAT_0004b4a3 (*(byte *)(0x4b4a3U))
#undef DAT_0004b4a4
#define DAT_0004b4a4 (*(char *)(0x4b4a4U))
#undef DAT_0004b4a5
#define DAT_0004b4a5 (*(byte *)(0x4b4a5U))
#undef DAT_0004b4a6
#define DAT_0004b4a6 (*(byte *)(0x4b4a6U))
#undef DAT_0004b598
#define DAT_0004b598 (*(int *)(0x4b598U))
#undef DAT_0004b59c
#define DAT_0004b59c (*(byte *)(0x4b59cU))
#undef DAT_0004b59e
#define DAT_0004b59e (*(uint8_t *)(0x4b59eU))
#undef DAT_0004c59e
#define DAT_0004c59e (*(ushort *)(0x4c59eU))
#define local_18 (*(int *)(frame + 16))
#define local_14 (*(undefined * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x280ea
 */

void recovered_280ea(int param_1,int param_2,int param_3,int param_4,undefined1 param_5,
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

  if (((DAT_0004b49c == 1) && (DAT_0004b498 != 0)) && (param_3 != 0 || param_4 == 0)) {
    recovered_282ee();
    recovered_2837e();
    local_18 = param_1;
    for (iVar8 = 0; iVar8 != param_4; iVar8 = iVar8 + 1) {
      bVar7 = *(byte *)(param_3 + iVar8);
      if ((DAT_0004b4a0 == '\x01') && (DAT_0004b4a2 <= bVar7)) {
        uVar10 = (uint)bVar7 - (uint)DAT_0004b4a2;
        if (DAT_0004b598 == 0 || DAT_0004b4a3 <= uVar10) goto LAB_0002819b;
        uVar5 = (uint)DAT_0004b4a5;
        local_14 = (undefined *)(DAT_0004b598 + uVar10 * DAT_0004b4a6 * uVar5);
        bVar7 = DAT_0004b4a6;
        cVar9 = DAT_0004b4a4;
LAB_000281c6:
        bVar12 = (char)uVar5 == '\0' | cVar9 == '\0' | DAT_0004b49c ^ 1 | DAT_0004b498 == 0;
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
                    recovered_27e4c(&DAT_0004b490,local_18 + uVar3,uVar1 + param_2,uVar4 - uVar3,
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
LAB_0002819b:
        uVar5 = (uint)DAT_0004c59e;
        if ((DAT_0004c59e != 0 & DAT_0004b59c) == 1) {
          local_14 = &DAT_0004b59e + bVar7 * uVar5;
          cVar9 = '\b';
          bVar7 = 1;
          goto LAB_000281c6;
        }
      }
      local_18 = local_18 + 8;
    }
  }
  return;
}
