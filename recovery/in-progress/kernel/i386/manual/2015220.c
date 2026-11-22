#include "functions.h"
#undef DAT_0210468f
#define DAT_0210468f (*(uint8_t volatile *)(0x210468fU))
#undef DAT_02104692
#define DAT_02104692 (*(uint8_t volatile *)(0x2104692U))
#undef DAT_02104693
#define DAT_02104693 (*(uint8_t volatile *)(0x2104693U))
#undef DAT_02104ad4
#define DAT_02104ad4 (*(uint32_t volatile *)(0x2104ad4U))
#define local_28 (*(undefined1 (*)[11])(frame + 24))
#define local_1d (*(byte *)(frame + 35))
#define local_1b (*(byte *)(frame + 37))
#define local_1a (*(byte *)(frame + 38))
#define local_19 (*(byte *)(frame + 39))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2015220
 */

uint recovered_2015220(int controller,uint timeout,uint *out)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  uVar6 = 0;
  local_18 = timeout;
  local_14 = controller;
  do {
    while( true ) {
      uVar7 = 0;
      if (uVar6 <= local_18) {
        uVar7 = local_18 - uVar6;
      }
      if (999 < uVar7) {
        uVar7 = 1000;
      }
      uVar5 = recovered_2015980(local_28,uVar7);
      if ((char)uVar5 == '\0') break;
      if (SBORROW1('\0',local_1b & 0xfc)) {
        uVar7 = local_1a & 0x1f;
        bVar1 = DAT_0210468f;
        if (local_19 == bVar1) {
          bVar3 = true;
          bVar1 = DAT_02104693;
          if ((byte)uVar7 != (byte)local_14) {
            bVar2 = DAT_02104692;
            bVar3 = (bVar2 == (byte)uVar7 && bVar1 == (byte)local_14) && bVar2 != 0;
          }
          if (((bVar3) || (1 < (byte)local_14 && controller - 1U == uVar7)) ||
             (bVar1 == (byte)local_14)) {
            if (out != (uint *)0x0) {
              *out = (uint)local_1d;
            }
            DAT_02104ad4 = (uint)local_1d;
            return uVar5;
          }
          iVar4 = local_14 + 0x40000000 + (uVar7 << 8 | (uint)local_19 << 0x10);
        }
        else {
          iVar4 = local_14 + -0x80000000LL + (uVar7 << 8 | (uint)local_19 << 0x10);
        }
        DAT_02104ad4 = iVar4;
      }
      if (local_18 < uVar6) {
        return 0;
      }
    }
    if (local_18 <= uVar6) {
      return uVar5;
    }
    uVar6 = uVar6 + uVar7;
  } while (uVar6 <= local_18);
  return 0;
}
