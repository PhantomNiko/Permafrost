#include "functions.h"
#undef DAT_02104688
#define DAT_02104688 (*(uint32_t volatile *)(0x2104688U))
#undef DAT_0210468f
#define DAT_0210468f (*(uint8_t volatile *)(0x210468fU))
#undef DAT_021046ac
#define DAT_021046ac (*(uint8_t volatile *)(0x21046acU))
#undef DAT_021046b0
#define DAT_021046b0 (*(uint8_t volatile *)(0x21046b0U))
#undef DAT_02129000
#define DAT_02129000 (*(uint8_t volatile *)(0x2129000U))
#undef DAT_0212c100
#define DAT_0212c100 (*(uint8_t volatile *)(0x212c100U))
#undef DAT_0212c101
#define DAT_0212c101 (*(uint8_t volatile *)(0x212c101U))
#undef DAT_0212c102
#define DAT_0212c102 (*(uint8_t volatile *)(0x212c102U))
#undef DAT_0212c103
#define DAT_0212c103 (*(uint8_t volatile *)(0x212c103U))
#undef DAT_0212c104
#define DAT_0212c104 (*(uint8_t volatile *)(0x212c104U))
#undef DAT_0212c105
#define DAT_0212c105 (*(uint8_t volatile *)(0x212c105U))
#undef DAT_0212c106
#define DAT_0212c106 (*(uint8_t volatile *)(0x212c106U))
#undef DAT_0212c107
#define DAT_0212c107 (*(uint8_t volatile *)(0x212c107U))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2015af0
 */

uint recovered_2015af0(uchar kind,uchar request,ushort value,ushort index,uchar direction,
                      uchar *data,ushort size)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar12;
  undefined1 uVar11;
  uint uVar10;
  uint count;

  count = (uint)size;
  if (count == 0) {
    local_14 = 0x840;
  }
  else {
    local_14 = (uint)direction * 0x10000 + 0x20840;
  }
  local_20 = 0;
  local_24 = 0;
  local_18 = 0;
  if (0x200 < count) {
    return 0;
  }
  cVar2 = DAT_0210468f;
  if (cVar2 == '\0') {
    return 0;
  }
  if (data != (uchar *)0x0 || size == 0) {
    uVar11 = (undefined1)(value >> 8);
    uVar12 = (undefined1)(index >> 8);
    if (size == 0) {
      DAT_0212c100 = kind;
      DAT_0212c101 = request;
      DAT_0212c102 = (char)value;
      DAT_0212c103 = uVar11;
      DAT_0212c104 = (char)index;
      DAT_0212c105 = uVar12;
      DAT_0212c106 = 0;
      DAT_0212c107 = 0;
    }
    else {
      uVar10 = recovered_20091e0(0x2129000,0x200,&local_24);
      if ((char)uVar10 == '\0') {
        return 0;
      }
      DAT_0212c100 = kind;
      DAT_0212c101 = request;
      DAT_0212c102 = (char)value;
      DAT_0212c103 = uVar11;
      DAT_0212c104 = (char)index;
      DAT_0212c105 = uVar12;
      DAT_0212c106 = (char)size;
      DAT_0212c107 = (char)(size >> 8);
      if (direction == '\0') {
        recovered_2001b70(&DAT_02129000,data,count);
      }
    }
    uVar11 = DAT_0212c100;
    uVar12 = DAT_0212c101;
    uVar4 = DAT_0212c102;
    uVar5 = DAT_0212c103;
    uVar6 = DAT_0212c104;
    uVar7 = DAT_0212c105;
    uVar8 = DAT_0212c106;
    uVar9 = DAT_0212c107;
    uVar10 = recovered_20157d0(0x212c000,(uint *)&DAT_021046ac,&DAT_021046b0,
                               CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar12,uVar11))),
                               CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))),8,local_14,
                               (uint *)0x0);
    if (((char)uVar10 != '\0') &&
       ((size == 0 ||
        (uVar10 = recovered_20157d0(0x212c000,(uint *)&DAT_021046ac,&DAT_021046b0,local_24,local_20,
                                    count,(uint)direction * 0x10000 | 0xc00,(uint *)0x0),
        (char)uVar10 != '\0')))) {
      local_14 = CONCAT31(PF_PART3(local_14, 1),direction) ^ 1;
      uVar10 = recovered_20157d0(0x212c000,(uint *)&DAT_021046ac,&DAT_021046b0,0,0,0,
                                 (uint)(direction ^ 1) << 0x10 | 0x1020,(uint *)0x0);
      if ((char)uVar10 != '\0') {
        iVar1 = DAT_02104688;
        if (iVar1 != 0) {
          bVar3 = DAT_0210468f;
          iVar1 = DAT_02104688;
          *(undefined4 *)(iVar1 + (uint)bVar3 * 4) = 1;
        }
        uVar10 = recovered_2015220(1,100000,&local_18);
        if ((char)uVar10 != '\0') {
          if ((((size != 0) && (data != (uchar *)0x0)) && (data != &DAT_02129000)) &&
             (direction != '\0')) {
            recovered_2001b70(data,&DAT_02129000,count);
          }
          return CONCAT31((int3)(local_18 >> 8),local_18 == 0xd || local_18 == 1);
        }
      }
    }
  }
  return 0;
}
