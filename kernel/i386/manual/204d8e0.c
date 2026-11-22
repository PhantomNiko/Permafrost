/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0213073c (*(uint8_t volatile *)(0x213073cU))
#define DAT_02130740 (*(uint32_t volatile *)(0x2130740U))
#define DAT_02130744 (*(uint32_t volatile *)(0x2130744U))
#define DAT_02130748 (*(uint32_t volatile *)(0x2130748U))
#define DAT_02130758 (*(uint32_t volatile *)(0x2130758U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_02130794 (*(uint32_t volatile *)(0x2130794U))
#define DAT_02130798 (*(uint32_t volatile *)(0x2130798U))
#define DAT_021307a4 (*(uint32_t volatile *)(0x21307a4U))
#define DAT_021307a8 (*(uint32_t volatile *)(0x21307a8U))
#define DAT_021307ac (*(uint32_t volatile *)(0x21307acU))
#define DAT_021307b0 (*(uint32_t volatile *)(0x21307b0U))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define local_14 (*(uint *)(frame + 28))


uint recovered_204d8e0(uint cluster,void *data,uint size,uint count)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong size_00;
  uint count_00;
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  void *out;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;

  cVar3 = DAT_021307dc;
  if ((((((cVar3 == '\x01') && (iVar4 = DAT_0213075c, iVar4 - 3U < 3)) &&
        (bVar6 = PF_PART1(DAT_02130758, 0), (bVar6 & 1) == 0)) &&
       ((iVar4 = DAT_02130740, iVar4 == 0x200 && (iVar4 = DAT_02130744, iVar4 != 0)))) &&
      ((size_00 = DAT_02130748, size_00 != 0 &&
       ((iVar4 = DAT_02130794, iVar4 != 0 && (iVar4 = DAT_02130798, iVar4 != 0)))))) &&
     (iVar1 = DAT_021307a4, iVar1 != 0)) {
    uVar7 = DAT_021307a8;
    uVar8 = DAT_021307ac;
    if (((uVar8 != 0 && (uint)(iVar4 * 0x200) <= uVar7) && (count != 0)) &&
       (iVar4 = DAT_021307b0, iVar4 != 0)) {
      if (cluster < 2) {
        return 0;
      }
      if (uVar8 < count) {
        return 0;
      }
      if (uVar8 + 2 <= cluster) {
        return 0;
      }
      out = recovered_2001650(size_00);
      uVar7 = 0;
      if (out == (void *)0x0) {
        return 0;
      }
      uVar8 = 1;
      while( true ) {
        iVar4 = DAT_021307a4;
        local_14 = 0;
        if (1 < cluster && iVar4 != 0) {
          iVar1 = DAT_0213075c;
          if (iVar1 == 5) {
            local_14 = *(uint *)(iVar4 + cluster * 4) & 0xfffffff;
          }
          else if (iVar1 == 4) {
            local_14 = (uint)*(ushort *)(iVar4 + cluster * 2);
          }
          else {
            local_14 = 0;
            if (iVar1 == 3) {
              iVar4 = iVar4 + (cluster >> 1);
              bVar6 = *(byte *)(cluster + iVar4);
              if ((cluster & 1) == 0) {
                local_14 = (*(byte *)(iVar4 + 1 + cluster) & 0xf) << 8;
              }
              else {
                bVar6 = bVar6 >> 4;
                local_14 = (uint)*(byte *)(iVar4 + 1 + cluster) << 4;
              }
              local_14 = local_14 | bVar6;
            }
          }
        }
        uVar5 = 0;
        if (uVar7 <= size) {
          uVar5 = size - uVar7;
        }
        count_00 = DAT_02130748;
        if (count_00 <= uVar5) {
          uVar5 = count_00;
        }
        recovered_2001e00(out,0,count_00);
        if (uVar5 != 0) {
          recovered_2001b70(out,(void *)((int)data + uVar7),uVar5);
          uVar7 = uVar7 + uVar5;
        }
        bVar6 = DAT_0213073c;
        iVar4 = DAT_02130744;
        uVar2 = DAT_021307b0;
        uVar2 = DAT_021307b0;
        iVar1 = DAT_021307b0;
        uVar5 = DAT_02130748;
        uVar5 = recovered_2050b00((uint)bVar6,(cluster - 2) * iVar4 + iVar1,(int)out,uVar5);
        if ((char)uVar5 == '\0') break;
        if (uVar8 < count) {
          if ((local_14 < 2) || (iVar4 = DAT_021307ac, iVar4 + 2U <= local_14)) break;
          iVar4 = DAT_0213075c;
          cluster = local_14;
          if (iVar4 == 5) {
            if (0xffffff7 < local_14) break;
          }
          else if (iVar4 == 4) {
            if (0xfff7 < local_14) break;
          }
          else if ((iVar4 != 3) || (0xff7 < local_14)) break;
        }
        iVar4 = (1 - count) + uVar8;
        uVar8 = uVar8 + 1;
        if (iVar4 == 1) {
          recovered_2001710(out);
          return CONCAT31((int3)(uVar7 >> 8),size <= uVar7);
        }
      }
      recovered_2001710(out);
      return 0;
    }
  }
  return CONCAT31((int3)(size >> 8),count == 0 && size == 0);
}
#undef DAT_0213073c
#undef DAT_02130740
#undef DAT_02130744
#undef DAT_02130748
#undef DAT_02130758
#undef DAT_0213075c
#undef DAT_02130794
#undef DAT_02130798
#undef DAT_021307a4
#undef DAT_021307a8
#undef DAT_021307ac
#undef DAT_021307b0
#undef DAT_021307dc
#undef local_14
