#include "functions.h"
#undef DAT_02104414
#define DAT_02104414 (*(uint32_t volatile *)(0x2104414U))
#undef DAT_02104418
#define DAT_02104418 (*(uint32_t volatile *)(0x2104418U))
#undef DAT_0210442c
#define DAT_0210442c (*(uint8_t volatile *)(0x210442cU))
#undef DAT_0210442d
#define DAT_0210442d (*(uint8_t volatile *)(0x210442dU))
#undef DAT_0210442e
#define DAT_0210442e (*(uint8_t volatile *)(0x210442eU))
#undef DAT_02104430
#define DAT_02104430 (*(uint8_t volatile *)(0x2104430U))
#undef DAT_02104432
#define DAT_02104432 (*(uint8_t volatile *)(0x2104432U))
#undef DAT_02104438
#define DAT_02104438 (*(uint8_t volatile *)(0x2104438U))
#undef DAT_0210a010
#define DAT_0210a010 (*(uint8_t volatile *)(0x210a010U))
#undef DAT_02115000
#define DAT_02115000 (*(uint8_t volatile *)(0x2115000U))
#undef UNK_02115001
#define UNK_02115001 (*(uint8_t volatile *)(0x2115001U))
#undef UNK_02115002
#define UNK_02115002 (*(uint8_t volatile *)(0x2115002U))
#undef UNK_02115003
#define UNK_02115003 (*(uint8_t volatile *)(0x2115003U))
#undef UNK_02115004
#define UNK_02115004 (*(uint8_t volatile *)(0x2115004U))
#undef UNK_02115005
#define UNK_02115005 (*(uint8_t volatile *)(0x2115005U))
#undef UNK_02115006
#define UNK_02115006 (*(uint8_t volatile *)(0x2115006U))
#undef UNK_02115007
#define UNK_02115007 (*(uint8_t volatile *)(0x2115007U))
#undef UNK_02115008
#define UNK_02115008 (*(uint8_t volatile *)(0x2115008U))
#undef UNK_02115009
#define UNK_02115009 (*(uint8_t volatile *)(0x2115009U))
#undef UNK_0211500a
#define UNK_0211500a (*(uint8_t volatile *)(0x211500aU))
#undef UNK_0211500b
#define UNK_0211500b (*(uint8_t volatile *)(0x211500bU))
#undef UNK_0211500c
#define UNK_0211500c (*(uint8_t volatile *)(0x211500cU))
#undef UNK_0211500d
#define UNK_0211500d (*(uint8_t volatile *)(0x211500dU))
#undef UNK_0211500e
#define UNK_0211500e (*(uint8_t volatile *)(0x211500eU))
#undef UNK_0211500f
#define UNK_0211500f (*(uint8_t volatile *)(0x211500fU))
#define local_24 (*(uint (*)[2])(frame + 28))
#define local_1a (*(ushort *)(frame + 38))
#define local_18 (*(void * *)(frame + 40))
#define local_14 (*(undefined * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2014d30
 */

uint recovered_2014d30(int controller,void *data,uint size)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;

  local_24[1] = 0;
  local_24[0] = 0;
  if ((ushort)controller < 10) {
    iVar1 = controller * 0x14;
    pcVar2 = &DAT_0210442c + iVar1;
    if (*pcVar2 == '\x01') {
      if (data == (void *)0x0) {
        return 0;
      }
      if ((&DAT_0210442d)[iVar1] != '\0') {
        return 0;
      }
      if (*(ushort *)(&DAT_02104430 + iVar1) != 0) {
        uVar7 = (uint)*(ushort *)(&DAT_02104432 + iVar1) % (uint)*(ushort *)(&DAT_02104430 + iVar1);
        local_1a = (ushort)uVar7;
        if (local_1a < 8) {
          local_14 = &DAT_0210a010 + uVar7 * 0x200 + controller * 0x1000;
          local_18 = data;
          uVar5 = recovered_20091e0((uint)local_14,size,local_24);
          if ((char)uVar5 != '\0') {
            iVar8 = controller * 0x2000;
            recovered_2001b70(local_14,local_18,size);
            iVar6 = uVar7 * 0x10;
            (&DAT_02115000)[iVar6 + iVar8] = (char)local_24[0];
            (&UNK_02115001)[iVar6 + iVar8] = (char)(local_24[0] >> 8);
            (&UNK_02115002)[iVar6 + iVar8] = (char)(local_24[0] >> 0x10);
            (&UNK_02115003)[iVar6 + iVar8] = (char)(local_24[0] >> 0x18);
            (&UNK_02115004)[iVar6 + iVar8] = (char)local_24[1];
            (&UNK_02115005)[iVar6 + iVar8] = (char)(local_24[1] >> 8);
            (&UNK_02115006)[iVar6 + iVar8] = (char)(local_24[1] >> 0x10);
            (&UNK_02115007)[iVar6 + iVar8] = (char)(local_24[1] >> 0x18);
            (&UNK_02115008)[iVar6 + iVar8] = (char)size;
            (&UNK_02115009)[iVar6 + iVar8] = (char)(size >> 8);
            (&UNK_0211500a)[iVar6 + iVar8] = (char)(size >> 0x10);
            (&UNK_0211500b)[iVar6 + iVar8] = (char)(size >> 0x18);
            (&UNK_0211500c)[iVar6 + iVar8] = 0;
            (&UNK_0211500d)[iVar6 + iVar8] = 0;
            (&UNK_0211500e)[iVar6 + iVar8] = 0;
            (&UNK_0211500f)[iVar6 + iVar8] = 0;
            if ((*pcVar2 == '\x01') &&
               (uVar3 = *(ushort *)(&DAT_02104430 + iVar1), local_1a < uVar3)) {
              iVar6 = (uint)uVar3 * 0x10;
              uVar4 = *(ushort *)(&DAT_02104432 + iVar1);
              uVar5 = (uint)uVar4 % (uint)uVar3;
              (&DAT_02115000)[uVar5 * 2 + iVar6 + iVar8 + 4] = (char)uVar7;
              (&DAT_02115000)[uVar5 * 2 + iVar6 + iVar8 + 5] = 0;
              iVar9 = uVar4 + 1;
              *(short *)(&DAT_02104432 + iVar1) = (short)iVar9;
              (&UNK_02115002)[iVar6 + iVar8] = (char)iVar9;
              (&UNK_02115003)[iVar6 + iVar8] = (char)((uint)iVar9 >> 8);
            }
            uVar7 = CONCAT31((int3)((uint)iVar6 >> 8),1);
            if (*pcVar2 != '\x01') {
              return uVar7;
            }
            if (*(undefined2 **)(&DAT_02104438 + iVar1) == (undefined2 *)0x0) {
              return uVar7;
            }
            **(undefined2 **)(&DAT_02104438 + iVar1) = *(undefined2 *)(&DAT_0210442e + iVar1);
            return uVar7;
          }
        }
        DAT_02104414 = 0x2e;
        DAT_02104418 = controller;
      }
    }
  }
  return 0;
}
