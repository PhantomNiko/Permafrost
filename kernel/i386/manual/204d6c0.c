/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5030 (*(uint8_t *)(0x20c5030U))
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
#define local_20 (*(int *)(frame + 16))
#define local_14 (*(uint *)(frame + 28))


uint recovered_204d6c0(uint count,uint *cluster)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint value;
  int iVar6;
  uint uVar7;

  uVar3 = 0;
  if (((cluster != (uint *)0x0) && (cVar2 = DAT_021307dc, cVar2 == '\x01')) &&
     (iVar5 = DAT_0213075c, iVar5 - 3U < 3)) {
    uVar3 = 0;
    bVar1 = PF_PART1(DAT_02130758, 0);
    if ((((((bVar1 & 1) == 0) && (iVar5 = DAT_02130740, iVar5 == 0x200)) &&
         ((iVar5 = DAT_02130744, iVar5 != 0 &&
          ((iVar5 = DAT_02130748, iVar5 != 0 && (iVar5 = DAT_02130794, iVar5 != 0)))))) &&
        (iVar5 = DAT_02130798, iVar5 != 0)) && (iVar6 = DAT_021307a4, iVar6 != 0)) {
      uVar3 = 0;
      uVar4 = DAT_021307a8;
      if ((((uint)(iVar5 * 0x200) <= uVar4) && (iVar5 = DAT_021307ac, iVar5 != 0)) &&
         (iVar5 = DAT_021307b0, iVar5 != 0)) {
        *cluster = 0;
        uVar3 = 1;
        if (count != 0) {
          local_20 = DAT_021307ac;
          uVar3 = 0;
          if (local_20 - 1U < 0xfffffffd) {
            local_14 = 0;
            value = 2;
            iVar5 = DAT_021307a4;
            uVar4 = 0;
            uVar3 = 0;
            do {
              if (iVar5 == 0) {
LAB_0204d850:
                uVar7 = value;
                if (uVar3 != 0) {
                  uVar7 = uVar3;
                }
                if (uVar4 != 0) {
                  recovered_2050860(uVar4,value);
                }
                iVar5 = DAT_0213075c;
                uVar3 = 0;
                if (iVar5 - 3U < 3) {
                  uVar3 = *(uint *)(&DAT_020c5030 + iVar5 * 4);
                }
                recovered_2050860(value,uVar3);
                local_14 = local_14 + 1;
                iVar5 = DAT_021307a4;
                local_20 = DAT_021307ac;
                uVar4 = value;
                uVar3 = uVar7;
              }
              else {
                iVar6 = DAT_0213075c;
                if (iVar6 == 5) {
                  if ((*(uint *)(iVar5 + value * 4) & 0xfffffff) != 0) goto LAB_0204d893;
                  goto LAB_0204d850;
                }
                if (iVar6 == 4) {
                  if (*(short *)(iVar5 + value * 2) != 0) goto LAB_0204d893;
                  goto LAB_0204d850;
                }
                if (iVar6 != 3) goto LAB_0204d850;
                iVar6 = (value >> 1) + iVar5;
                if ((value & 1) == 0) {
                  if ((*(byte *)(value + 1 + iVar6) & 0xf) * 0x100 + (uint)*(byte *)(value + iVar6)
                      == 0) goto LAB_0204d850;
                }
                else if (*(char *)(value + 1 + iVar6) == '\0' && *(byte *)(value + iVar6) >> 4 == 0)
                goto LAB_0204d850;
              }
LAB_0204d893:
              value = value + 1;
            } while ((value < local_20 + 2U) && (local_14 < count));
            if (uVar3 != 0 && local_14 == count) {
              *cluster = uVar3;
              return CONCAT31((int3)(local_14 >> 8),1);
            }
          }
          recovered_204dbc0(uVar3);
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}
#undef DAT_020c5030
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
#undef local_20
#undef local_14
