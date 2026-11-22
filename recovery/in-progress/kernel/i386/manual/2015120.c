#include "functions.h"
#undef DAT_0210466d
#define DAT_0210466d (*(uint8_t volatile *)(0x210466dU))
#undef DAT_02104670
#define DAT_02104670 (*(uint8_t volatile *)(0x2104670U))
#undef DAT_02104688
#define DAT_02104688 (*(uint32_t volatile *)(0x2104688U))
#undef DAT_0210468f
#define DAT_0210468f (*(uint8_t volatile *)(0x210468fU))
#undef DAT_02104693
#define DAT_02104693 (*(uint8_t volatile *)(0x2104693U))
#undef DAT_02104696
#define DAT_02104696 (*(uint16_t volatile *)(0x2104696U))
#undef DAT_02104698
#define DAT_02104698 (*(uint16_t volatile *)(0x2104698U))
#undef DAT_021046b4
#define DAT_021046b4 (*(uint8_t volatile *)(0x21046b4U))
#undef DAT_021046b8
#define DAT_021046b8 (*(uint8_t volatile *)(0x21046b8U))
#undef DAT_0212c240
#define DAT_0212c240 (*(uint8_t volatile *)(0x212c240U))
#define local_14 (*(uint *)(frame + 28))
#define local_10 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2015120
 */

undefined4 recovered_2015120(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;

  local_10 = 0;
  local_14 = 0;
  uVar4 = DAT_02104698;
  if (uVar4 == 0) {
    uVar4 = DAT_02104696;
  }
  uVar6 = 0x400;
  if (0xfbff < (uVar4 - 0x401 & 0xffff)) {
    uVar6 = (uint)uVar4;
  }
  cVar1 = DAT_0210466d;
  if (((cVar1 == '\x01') && (cVar1 = DAT_02104693, cVar1 != '\0')) &&
     (uVar5 = recovered_20091e0(0x212c240,0x400,&local_14), (char)uVar5 != '\0')) {
    recovered_2001e00(&DAT_0212c240,0,0x400);
    uVar6 = recovered_20157d0(0x212c140,(uint *)&DAT_021046b4,&DAT_021046b8,local_14,local_10,uVar6,
                              0x424,(uint *)0x0);
    if ((char)uVar6 != '\0') {
      iVar2 = DAT_02104688;
      if (iVar2 != 0) {
        bVar3 = DAT_02104693;
        uVar6 = (uint)bVar3;
        bVar3 = DAT_0210468f;
        iVar2 = DAT_02104688;
        *(uint *)(iVar2 + (uint)bVar3 * 4) = uVar6;
      }
      DAT_02104670 = 1;
      return CONCAT31((int3)(uVar6 >> 8),1);
    }
  }
  return 0;
}
