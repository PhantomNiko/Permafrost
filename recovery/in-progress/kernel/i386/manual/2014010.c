#include "functions.h"
#undef DAT_02104394
#define DAT_02104394 (*(uint16_t volatile *)(0x2104394U))
#undef DAT_02104398
#define DAT_02104398 (*(uint32_t volatile *)(0x2104398U))
#undef DAT_021043b0
#define DAT_021043b0 (*(uint32_t volatile *)(0x21043b0U))
#undef DAT_021043b4
#define DAT_021043b4 (*(uint32_t volatile *)(0x21043b4U))
#undef DAT_021043b8
#define DAT_021043b8 (*(uint32_t volatile *)(0x21043b8U))
#undef DAT_021043bc
#define DAT_021043bc (*(uint32_t volatile *)(0x21043bcU))
#undef DAT_02105000
#define DAT_02105000 (*(uint8_t volatile *)(0x2105000U))
#undef DAT_02105002
#define DAT_02105002 (*(uint8_t volatile *)(0x2105002U))
#undef DAT_02105003
#define DAT_02105003 (*(uint8_t volatile *)(0x2105003U))
#undef DAT_02105004
#define DAT_02105004 (*(uint8_t volatile *)(0x2105004U))
#undef DAT_02105005
#define DAT_02105005 (*(uint8_t volatile *)(0x2105005U))
#undef DAT_0210500f
#define DAT_0210500f (*(uint8_t volatile *)(0x210500fU))
#undef DAT_02107000
#define DAT_02107000 (*(uint8_t volatile *)(0x2107000U))
#define local_2c (*(undefined * *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2014010
 */

uint recovered_2014010(uint size,uchar cycle)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined *pointer;
  int iVar9;
  undefined1 *puVar10;

  if (size == 0) {
LAB_020141f7:
    uVar4 = 0;
  }
  else {
    if (7 < (ushort)size) {
      size = 8;
    }
    recovered_2001e00(&DAT_02105000,0,0x2000);
    recovered_2001e00(&DAT_02107000,0,0x40);
    puVar7 = &DAT_02107000;
    DAT_02104394 = (short)size;
    DAT_02104398 = 0;
    DAT_021043b0 = 0x7fff;
    DAT_021043b4 = 0x7fff;
    uVar4 = size & 0xffff;
    puVar10 = &DAT_0210500f;
    pointer = &DAT_02107000;
    local_18 = 0;
    do {
      local_28 = 0;
      if (cycle == '\0') {
        local_14 = 0;
        local_2c = (undefined *)((uint)puVar7 & 0xffff);
        local_1c = 0;
        local_20 = 0;
        uVar6 = 0;
        puVar3 = puVar7;
      }
      else {
        local_2c = puVar7;
        uVar5 = recovered_20091e0((uint)pointer,8,(uint *)&local_2c);
        if ((char)uVar5 == '\0') {
          DAT_021043b8 = 4;
          DAT_021043bc = local_18;
          goto LAB_020141f7;
        }
        local_14 = local_28;
        local_20 = local_28 >> 0x10;
        uVar1 = DAT_02104394;
        size = (uint)uVar1;
        local_1c = CONCAT31((int3)(local_28 >> 8),(char)(local_28 >> 8));
        uVar6 = (undefined1)(local_28 >> 0x18);
        puVar3 = local_2c;
      }
      puVar10[-0xf] = (char)local_2c;
      puVar10[-0xe] = (char)((uint)local_2c >> 8);
      puVar10[-0xd] = (char)((uint)puVar3 >> 0x10);
      puVar10[-0xc] = (char)((uint)puVar3 >> 0x18);
      puVar10[-0xb] = (char)local_14;
      puVar10[-10] = (char)local_1c;
      puVar10[-9] = (char)local_20;
      puVar10[-8] = uVar6;
      puVar10[-7] = 8;
      puVar10[-6] = 0;
      puVar10[-5] = 0;
      puVar10[-4] = 0;
      puVar10[-3] = 2;
      puVar10[-2] = 0;
      puVar10[-1] = 0;
      *puVar10 = 0;
      if ((short)size != 0) {
        iVar9 = (size & 0xffff) * 0x10;
        uVar2 = DAT_02104398;
        uVar5 = (uVar2 & 0xffff) % (size & 0xffff);
        (&DAT_02105004)[uVar5 * 2 + iVar9] = (char)local_18;
        (&DAT_02105005)[uVar5 * 2 + iVar9] = (char)(local_18 >> 8);
        iVar8 = uVar2 + 1;
        PF_PART2(DAT_02104398, 0) = (short)iVar8;
        (&DAT_02105002)[iVar9] = (char)iVar8;
        (&DAT_02105003)[iVar9] = (char)((uint)iVar8 >> 8);
      }
      local_18 = local_18 + 1;
      puVar10 = puVar10 + 0x10;
      pointer = pointer + 8;
      puVar7 = puVar7 + 8;
    } while (uVar4 != local_18);
    uVar4 = CONCAT31((int3)(local_18 >> 8),1);
  }
  return uVar4;
}
