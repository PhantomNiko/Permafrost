#include "functions.h"
#undef DAT_0210462d
#define DAT_0210462d (*(uint8_t volatile *)(0x210462dU))
#undef DAT_02104630
#define DAT_02104630 (*(uint8_t volatile *)(0x2104630U))
#undef DAT_02104632
#define DAT_02104632 (*(uint8_t volatile *)(0x2104632U))
#undef DAT_02104633
#define DAT_02104633 (*(uint8_t volatile *)(0x2104633U))
#undef DAT_0210463c
#define DAT_0210463c (*(uint32_t volatile *)(0x210463cU))
#undef DAT_02104640
#define DAT_02104640 (*(uint8_t volatile *)(0x2104640U))
#undef DAT_02104641
#define DAT_02104641 (*(uint8_t volatile *)(0x2104641U))
#undef DAT_02104644
#define DAT_02104644 (*(uint16_t volatile *)(0x2104644U))
#undef DAT_0212d640
#define DAT_0212d640 (*(uint8_t volatile *)(0x212d640U))
#undef DAT_0212d641
#define DAT_0212d641 (*(uint8_t volatile *)(0x212d641U))
#undef DAT_0212d642
#define DAT_0212d642 (*(uint8_t volatile *)(0x212d642U))
#undef DAT_0212d643
#define DAT_0212d643 (*(uint8_t volatile *)(0x212d643U))
#undef DAT_0212d644
#define DAT_0212d644 (*(uint8_t volatile *)(0x212d644U))
#undef DAT_0212d645
#define DAT_0212d645 (*(uint8_t volatile *)(0x212d645U))
#undef DAT_0212d646
#define DAT_0212d646 (*(uint8_t volatile *)(0x212d646U))
#undef DAT_0212d647
#define DAT_0212d647 (*(uint8_t volatile *)(0x212d647U))
#undef DAT_0212d648
#define DAT_0212d648 (*(uint8_t volatile *)(0x212d648U))
#undef DAT_0212d649
#define DAT_0212d649 (*(uint8_t volatile *)(0x212d649U))
#undef DAT_0212d64a
#define DAT_0212d64a (*(uint8_t volatile *)(0x212d64aU))
#undef DAT_0212d64b
#define DAT_0212d64b (*(uint8_t volatile *)(0x212d64bU))
#undef DAT_0212d64c
#define DAT_0212d64c (*(uint8_t volatile *)(0x212d64cU))
#undef DAT_0212d64d
#define DAT_0212d64d (*(uint8_t volatile *)(0x212d64dU))
#undef DAT_0212d64e
#define DAT_0212d64e (*(uint8_t volatile *)(0x212d64eU))
#undef DAT_0212d64f
#define DAT_0212d64f (*(uint8_t volatile *)(0x212d64fU))
#undef DAT_0212d8c0
#define DAT_0212d8c0 (*(uint8_t volatile *)(0x212d8c0U))
#undef DAT_02130000
#define DAT_02130000 (*(uint8_t volatile *)(0x2130000U))
#undef DAT_02130001
#define DAT_02130001 (*(uint8_t volatile *)(0x2130001U))
#undef DAT_02130002
#define DAT_02130002 (*(uint8_t volatile *)(0x2130002U))
#undef DAT_02130003
#define DAT_02130003 (*(uint8_t volatile *)(0x2130003U))
#undef DAT_02130004
#define DAT_02130004 (*(uint8_t volatile *)(0x2130004U))
#undef DAT_02130005
#define DAT_02130005 (*(uint8_t volatile *)(0x2130005U))
#undef DAT_02130006
#define DAT_02130006 (*(uint8_t volatile *)(0x2130006U))
#undef DAT_02130007
#define DAT_02130007 (*(uint8_t volatile *)(0x2130007U))
#undef DAT_02130008
#define DAT_02130008 (*(uint8_t volatile *)(0x2130008U))
#undef DAT_02130009
#define DAT_02130009 (*(uint8_t volatile *)(0x2130009U))
#undef DAT_0213000a
#define DAT_0213000a (*(uint8_t volatile *)(0x213000aU))
#undef DAT_0213000b
#define DAT_0213000b (*(uint8_t volatile *)(0x213000bU))
#undef DAT_0213000c
#define DAT_0213000c (*(uint8_t volatile *)(0x213000cU))
#undef DAT_0213000d
#define DAT_0213000d (*(uint8_t volatile *)(0x213000dU))
#undef DAT_0213000e
#define DAT_0213000e (*(uint8_t volatile *)(0x213000eU))
#undef DAT_0213000f
#define DAT_0213000f (*(uint8_t volatile *)(0x213000fU))
#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2016f40
 */

undefined4 recovered_2016f40(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;

  uVar5 = DAT_02104644;
  uVar11 = (uint)uVar5;
  if (0x3ff < uVar11) {
    uVar11 = 0x400;
  }
  cVar1 = DAT_0210462d;
  if ((cVar1 == '\x01') && (iVar10 = DAT_0210463c, iVar10 != 0)) {
    local_18 = 0;
    local_1c = 0;
    uVar7 = recovered_20091e0(0x2130000,0x10,&local_1c);
    iVar10 = local_18;
    uVar6 = local_1c;
    if ((local_18 == 0 & (byte)uVar7) == 1) {
      local_18 = 0;
      local_1c = 0;
      uVar8 = recovered_20091e0(0x212d640,0x10,&local_1c);
      uVar7 = local_1c;
      if ((local_18 == 0 & (byte)uVar8) == 1) {
        local_18 = 0;
        local_1c = 0;
        uVar9 = recovered_20091e0(0x212d8c0,0x400,&local_1c);
        uVar8 = local_1c;
        if ((local_18 == 0 & (byte)uVar9) == 1) {
          recovered_2001e00(&DAT_02130000,0,0x10);
          recovered_2001e00(&DAT_0212d640,0,0x10);
          recovered_2001e00(&DAT_0212d8c0,0,0x400);
          bVar3 = DAT_02104640;
          bVar4 = DAT_02104641;
          bVar2 = DAT_02104633;
          cVar1 = DAT_02104632;
          uVar9 = 7;
          if (uVar5 != 0) {
            uVar9 = uVar11 + 0x7ff & 0x7ff;
          }
          DAT_0212d640 = 1;
          DAT_0212d641 = 0;
          DAT_0212d642 = 0;
          DAT_0212d643 = 0;
          DAT_0212d644 = 0;
          DAT_0212d645 = 0;
          DAT_0212d646 = 0x80;
          DAT_0212d647 = cVar1 << 2 | 0x38;
          DAT_0212d648 = 0x69;
          DAT_0212d649 = bVar4 << 7 | bVar3 & 0x7f;
          DAT_0212d64a = (byte)(((uint)bVar2 << 0x13) >> 0x10) |
                         (byte)(((bVar4 & 0xe) << 0xf) >> 0x10) | (byte)((uVar9 << 0x15) >> 0x10);
          DAT_0212d64b = (char)(uVar9 >> 3);
          DAT_0212d64c = (char)uVar8;
          DAT_0212d64d = (char)(uVar8 >> 8);
          DAT_0212d64e = (char)(uVar8 >> 0x10);
          DAT_0212d64f = (char)(uVar8 >> 0x18);
          DAT_02130000 = 1;
          DAT_02130001 = 0;
          DAT_02130002 = 0;
          DAT_02130003 = 0;
          DAT_02130004 = (char)uVar7;
          DAT_02130005 = (char)(uVar7 >> 8);
          DAT_02130006 = (char)(uVar7 >> 0x10);
          DAT_02130007 = (char)(uVar7 >> 0x18);
          DAT_02130008 = 0;
          DAT_02130009 = 0;
          DAT_0213000a = 0;
          DAT_0213000b = 0;
          DAT_0213000c = 0;
          DAT_0213000d = 0;
          DAT_0213000e = 0;
          DAT_0213000f = 0;
          if (iVar10 != 0 || uVar6 != 0) {
            iVar10 = -0x1000;
            do {
              (&DAT_02130000)[iVar10] = (byte)uVar6 | 2;
              (&DAT_02130001)[iVar10] = (char)(uVar6 >> 8);
              (&DAT_02130002)[iVar10] = (char)(uVar6 >> 0x10);
              (&DAT_02130003)[iVar10] = (char)(uVar6 >> 0x18);
              iVar10 = iVar10 + 4;
            } while (iVar10 != 0);
            iVar10 = DAT_0210463c;
            if (0xffff0002 < iVar10 - 0xfffeU) {
              out((short)iVar10 + 2,0xffff);
              iVar10 = DAT_0210463c;
            }
            uVar11 = iVar10 - 0x10000;
            if (0xffff0000 < uVar11) {
              uVar11 = CONCAT22((short)(uVar11 >> 0x10),0xc1);
              out((short)iVar10,0xc1);
            }
            DAT_02104630 = 1;
            return CONCAT31((int3)(uVar11 >> 8),1);
          }
        }
      }
    }
  }
  return 0;
}
