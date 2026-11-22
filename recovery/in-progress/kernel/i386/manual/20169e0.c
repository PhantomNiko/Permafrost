#include "functions.h"
#undef DAT_02104620
#define DAT_02104620 (*(uint32_t volatile *)(0x2104620U))
#undef DAT_02104628
#define DAT_02104628 (*(uint32_t volatile *)(0x2104628U))
#undef DAT_0212c640
#define DAT_0212c640 (*(uint8_t volatile *)(0x212c640U))
#undef DAT_0212c650
#define DAT_0212c650 (*(uint8_t volatile *)(0x212c650U))
#undef DAT_0212c660
#define DAT_0212c660 (*(uint8_t volatile *)(0x212c660U))
#undef DAT_0212d000
#define DAT_0212d000 (*(uint8_t volatile *)(0x212d000U))
#undef DAT_0212d200
#define DAT_0212d200 (*(uint8_t volatile *)(0x212d200U))
#undef DAT_0212d210
#define DAT_0212d210 (*(uint8_t volatile *)(0x212d210U))
#undef DAT_0212d211
#define DAT_0212d211 (*(uint8_t volatile *)(0x212d211U))
#undef DAT_0212d212
#define DAT_0212d212 (*(uint8_t volatile *)(0x212d212U))
#undef DAT_0212d213
#define DAT_0212d213 (*(uint8_t volatile *)(0x212d213U))
#undef DAT_0212d214
#define DAT_0212d214 (*(uint8_t volatile *)(0x212d214U))
#undef DAT_0212d215
#define DAT_0212d215 (*(uint8_t volatile *)(0x212d215U))
#undef DAT_0212d216
#define DAT_0212d216 (*(uint8_t volatile *)(0x212d216U))
#undef DAT_0212d217
#define DAT_0212d217 (*(uint8_t volatile *)(0x212d217U))
#define local_30 (*(uint *)(frame + 16))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(int *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20169e0
 */

uint recovered_20169e0(int controller,uint device,uchar a,uchar b,uchar c,uchar d,ushort e,ushort f,
                      uchar direction,void *data,ushort size)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *out;
  byte bVar8;
  byte bVar9;
  uint count;

  count = (uint)size;
  if ((controller != 0 && count < 0x101) && (data != (void *)0x0 || size == 0)) {
    local_18 = 0;
    local_1c = 0;
    uVar1 = recovered_20091e0(0x212d200,0x10,&local_1c);
    uVar7 = local_1c;
    if (((byte)uVar1 & local_18 == 0) != 0) {
      local_18 = 0;
      local_1c = 0;
      uVar2 = recovered_20091e0(0x212d210,8,&local_1c);
      uVar1 = local_1c;
      if (((byte)uVar2 & local_18 == 0) != 0) {
        local_18 = 0;
        local_1c = 0;
        uVar3 = recovered_20091e0(0x212c640,0x10,&local_1c);
        uVar2 = local_1c;
        if (((byte)uVar3 & local_18 == 0) != 0) {
          local_18 = 0;
          local_1c = 0;
          uVar4 = recovered_20091e0(0x212c650,0x10,&local_1c);
          uVar3 = local_1c;
          if (((byte)uVar4 & local_18 == 0) != 0) {
            local_18 = 0;
            local_1c = 0;
            uVar5 = recovered_20091e0(0x212c660,0x10,&local_1c);
            uVar4 = local_1c;
            if (((byte)uVar5 & local_18 == 0) != 0) {
              local_18 = 0;
              local_1c = 0;
              uVar6 = recovered_20091e0(0x212c670,0x10,&local_1c);
              uVar5 = local_1c;
              if (((byte)uVar6 & local_18 == 0) != 0) {
                if (size == 0) {
                  local_30 = 0;
                }
                else {
                  local_18 = 0;
                  local_1c = 0;
                  uVar6 = recovered_20091e0(0x212d000,0x100,&local_1c);
                  if ((local_18 == 0 & (byte)uVar6) != 1) {
                    return 0;
                  }
                  local_30 = local_1c;
                }
                bVar8 = 8;
                if (0xbf < (byte)(a + 0xbf)) {
                  bVar8 = a;
                }
                DAT_0212d210 = c;
                DAT_0212d211 = d;
                DAT_0212d212 = (char)e;
                DAT_0212d213 = (char)(e >> 8);
                DAT_0212d214 = (char)f;
                DAT_0212d215 = (char)(f >> 8);
                DAT_0212d216 = (char)size;
                bVar9 = (byte)(size >> 8);
                DAT_0212d217 = bVar9;
                if (size != 0 && direction == '\0') {
                  recovered_2001b70(&DAT_0212d000,data,count);
                }
                recovered_2001e00(&DAT_0212d200,0,0x10);
                recovered_2001e00(&DAT_0212c640,0,0x60);
                recovered_2016dc0(&DAT_0212c640,0xf2e00000,uVar1,uVar3,uVar1 + 7);
                if (size == 0) {
                  out = &DAT_0212c650;
                }
                else {
                  recovered_2016dc0(&DAT_0212c650,(uint)direction * 0x80000 + 0xf3e80000,local_30,
                                    uVar4,(count - 1) + local_30);
                  out = &DAT_0212c660;
                }
                recovered_2016dc0(out,((ushort)(CONCAT11(a + 0xbf,direction) ^ 1) & 0xff) * 0x80000
                                      + 0xf3080000,0,uVar5,0);
                recovered_2016e20(&DAT_0212d200,
                                  (uint)bVar8 << 0x10 | (uint)b << 0xd | (uint)((byte)device & 0x7f)
                                  ,uVar5,uVar2);
                *(uint *)(controller + 0x20) = uVar7;
                *(undefined4 *)(controller + 0x24) = 0;
                *(uint *)(controller + 4) = *(uint *)(controller + 4) | 0x90;
                *(undefined4 *)(controller + 8) = 2;
                uVar7 = recovered_2016e80(out);
                if ((char)uVar7 != '\0') {
                  uVar7 = CONCAT31((uint3)bVar9,1);
                  if (size == 0) {
                    return 1;
                  }
                  if (data == (void *)0x0) {
                    return uVar7;
                  }
                  if (data == &DAT_0212d000) {
                    return uVar7;
                  }
                  if (direction == '\0') {
                    return uVar7;
                  }
                  recovered_2001b70(data,&DAT_0212d000,count);
                  return uVar7;
                }
                DAT_02104628 = (uint)((byte)out[3] >> 4);
                DAT_02104620 = (byte)out[3] >> 4 | 0xff00;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
