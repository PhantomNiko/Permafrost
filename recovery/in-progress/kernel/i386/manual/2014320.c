#include "functions.h"
#undef DAT_021043f8
#define DAT_021043f8 (*(uint32_t volatile *)(0x21043f8U))
#undef DAT_02104424
#define DAT_02104424 (*(uint32_t volatile *)(0x2104424U))
#undef DAT_02104428
#define DAT_02104428 (*(uint32_t volatile *)(0x2104428U))
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
#undef DAT_02104434
#define DAT_02104434 (*(uint8_t volatile *)(0x2104434U))
#undef DAT_02104438
#define DAT_02104438 (*(uint8_t volatile *)(0x2104438U))
#undef DAT_0210443c
#define DAT_0210443c (*(uint8_t volatile *)(0x210443cU))
#undef DAT_0210a010
#define DAT_0210a010 (*(uint8_t volatile *)(0x210a010U))
#undef DAT_02115000
#define DAT_02115000 (*(uint8_t volatile *)(0x2115000U))
#undef DAT_02116002
#define DAT_02116002 (*(uint8_t volatile *)(0x2116002U))
#undef UNK_02115002
#define UNK_02115002 (*(uint8_t volatile *)(0x2115002U))
#undef UNK_02115003
#define UNK_02115003 (*(uint8_t volatile *)(0x2115003U))
#undef UNK_02116004
#define UNK_02116004 (*(uint8_t volatile *)(0x2116004U))
#undef UNK_02116005
#define UNK_02116005 (*(uint8_t volatile *)(0x2116005U))
#undef UNK_02116006
#define UNK_02116006 (*(uint8_t volatile *)(0x2116006U))
#undef UNK_02116007
#define UNK_02116007 (*(uint8_t volatile *)(0x2116007U))
#undef UNK_02116008
#define UNK_02116008 (*(uint8_t volatile *)(0x2116008U))
#undef UNK_02116009
#define UNK_02116009 (*(uint8_t volatile *)(0x2116009U))
#undef UNK_0211600a
#define UNK_0211600a (*(uint8_t volatile *)(0x211600aU))
#undef UNK_0211600b
#define UNK_0211600b (*(uint8_t volatile *)(0x211600bU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2014320
 */

void recovered_2014320(uint queue,void *callback)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  undefined1 uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;

  iVar6 = queue * 0x2000;
  uVar9 = (ushort)queue;
  if (9 < uVar9) {
    return;
  }
  iVar1 = queue * 0x14;
  pcVar2 = &DAT_0210442c + iVar1;
  if (*pcVar2 != '\x01') {
    return;
  }
  if (callback == (void *)0x0) {
    return;
  }
  if ((&DAT_0210442d)[iVar1] == '\0') {
    return;
  }
  uVar4 = *(ushort *)(&DAT_02116002 + iVar6);
  *(uint *)(&DAT_0210443c + iVar1) = (uint)uVar4;
  puVar7 = &DAT_02104424;
  if (uVar9 != 2) {
    iVar10 = DAT_021043f8;
    uVar12 = 0;
    if (iVar10 != 0) {
      uVar12 = (short)iVar10 * 2 + 2;
    }
    puVar7 = &DAT_02104428;
    if (uVar12 != uVar9) goto LAB_020143b7;
  }
  *puVar7 = (uint)uVar4;
LAB_020143b7:
  uVar8 = (uint)*(ushort *)(&DAT_02104434 + iVar1);
  if (*(ushort *)(&DAT_02104434 + iVar1) != uVar4) {
    bVar5 = false;
    do {
      uVar8 = (uVar8 & 0xffff) % (uint)*(ushort *)(&DAT_02104430 + iVar1);
      uVar3 = (&UNK_02116004)[uVar8 * 8 + iVar6];
      uVar9 = CONCAT11((&UNK_02116005)[uVar8 * 8 + iVar6],uVar3);
      uVar11 = (uint)uVar9;
      if ((((uint)(byte)(&UNK_02116007)[uVar8 * 8 + iVar6] << 0x18 |
            (uint)(byte)(&UNK_02116006)[uVar8 * 8 + iVar6] << 0x10 | uVar11) <
           (uint)*(ushort *)(&DAT_02104430 + iVar1)) && (uVar11 < 8)) {
        uVar8 = CONCAT13((&UNK_0211600b)[uVar8 * 8 + iVar6],
                         CONCAT12((&UNK_0211600a)[uVar8 * 8 + iVar6],
                                  CONCAT11((&UNK_02116009)[uVar8 * 8 + iVar6],
                                           (&UNK_02116008)[uVar8 * 8 + iVar6])));
        if (0x1ff < uVar8) {
          uVar8 = 0x200;
        }
        ((void (*)(void *, uint))callback)(&DAT_0210a010 + uVar11 * 0x200 + queue * 0x1000,uVar8);
        bVar5 = true;
        if ((*pcVar2 == '\x01') && (uVar12 = *(ushort *)(&DAT_02104430 + iVar1), uVar9 < uVar12)) {
          iVar13 = (uint)uVar12 * 0x10;
          uVar9 = *(ushort *)(&DAT_02104432 + iVar1);
          uVar8 = (uint)uVar9 % (uint)uVar12;
          (&DAT_02115000)[uVar8 * 2 + iVar13 + iVar6 + 4] = uVar3;
          (&DAT_02115000)[uVar8 * 2 + iVar13 + iVar6 + 5] = 0;
          iVar10 = uVar9 + 1;
          *(short *)(&DAT_02104432 + iVar1) = (short)iVar10;
          (&UNK_02115002)[iVar13 + iVar6] = (char)iVar10;
          (&UNK_02115003)[iVar13 + iVar6] = (char)((uint)iVar10 >> 8);
        }
      }
      uVar8 = *(int *)(&DAT_02104434 + iVar1) + 1;
      *(ushort *)(&DAT_02104434 + iVar1) = (ushort)uVar8;
    } while ((ushort)uVar8 != uVar4);
    if (((bVar5) && (*pcVar2 == '\x01')) &&
       (*(undefined2 **)(&DAT_02104438 + iVar1) != (undefined2 *)0x0)) {
      **(undefined2 **)(&DAT_02104438 + iVar1) = *(undefined2 *)(&DAT_0210442e + iVar1);
    }
  }
  return;
}
