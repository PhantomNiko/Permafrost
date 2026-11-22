#include "functions.h"
#undef DAT_02104688
#define DAT_02104688 (*(uint32_t volatile *)(0x2104688U))
#undef DAT_0210469c
#define DAT_0210469c (*(uint8_t volatile *)(0x210469cU))
#undef DAT_021046a0
#define DAT_021046a0 (*(uint8_t volatile *)(0x21046a0U))
#undef DAT_02104ad4
#define DAT_02104ad4 (*(uint32_t volatile *)(0x2104ad4U))
#define local_1c (*(int *)(frame + 36))
#define local_15 (*(byte *)(frame + 43))
#define local_13 (*(byte *)(frame + 45))
#define local_11 (*(uchar *)(frame + 47))
#define local_2c (*(uint *)(frame + 20))
#define local_28 (*(int *)(frame + 24))
#define local_20 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2015680
 */

uint recovered_2015680(uint low,uint high,uint control,int timeout,uint *slot,uchar *completion)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  local_28 = 0;
  local_2c = 0;
  uVar4 = recovered_20157d0(0x2129340,(uint *)&DAT_0210469c,&DAT_021046a0,low,high,0,
                            timeout << 0x18 | control,&local_2c);
  iVar3 = local_28;
  uVar6 = local_2c;
  if ((char)uVar4 != '\0') {
    iVar1 = DAT_02104688;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)DAT_02104688;
      *puVar2 = 0;
    }
    uVar4 = 0;
    do {
      uVar5 = recovered_2015980(&local_20,1000);
      if ((char)uVar5 == '\0') {
        uVar4 = uVar4 + 1000;
      }
      else if (((local_13 & 0xfc) == 0x84) && (local_1c == iVar3 && local_20 == uVar6)) {
        uVar6 = (uint)local_15;
        if (completion != (uchar *)0x0) {
          *completion = local_11;
        }
        if (slot != (uint *)0x0) {
          *slot = uVar6;
        }
        if (uVar6 == 1) {
          return CONCAT31((int3)((uint)slot >> 8),1);
        }
        goto LAB_020157bf;
      }
    } while (uVar4 < 100000);
    uVar6 = 0xff00;
LAB_020157bf:
    DAT_02104ad4 = uVar6;
  }
  return 0;
}
