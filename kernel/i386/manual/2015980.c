#include "functions.h"
#undef DAT_02104684
#define DAT_02104684 (*(uint32_t volatile *)(0x2104684U))
#undef DAT_021046a4
#define DAT_021046a4 (*(uint32_t volatile *)(0x21046a4U))
#undef DAT_021046a8
#define DAT_021046a8 (*(uint8_t volatile *)(0x21046a8U))
#undef DAT_02104ad8
#define DAT_02104ad8 (*(uint32_t volatile *)(0x2104ad8U))
#undef DAT_02129440
#define DAT_02129440 (*(uint8_t volatile *)(0x2129440U))
#undef DAT_0212944c
#define DAT_0212944c (*(uint8_t volatile *)(0x212944cU))
#undef DAT_0212944d
#define DAT_0212944d (*(uint8_t volatile *)(0x212944dU))
#undef Ram021046a8
#define Ram021046a8 (*(uint32_t volatile *)(0x21046a8U))
#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2015980
 */

uint recovered_2015980(void *event,uint timeout)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;

  uVar3 = 0;
  if ((event != (void *)0x0) && (iVar4 = DAT_02104684, iVar4 != 0)) {
    iVar4 = DAT_021046a4;
    iVar4 = iVar4 * 0x10;
    bVar5 = (&DAT_0212944d)[iVar4];
    uVar3 = Ram021046a8;
    if ((((byte)(&DAT_0212944c)[iVar4] ^ uVar3) & 1) != 0) {
      uVar3 = 0;
      do {
        if (timeout <= uVar3) {
          return 0;
        }
        iVar4 = 0x32;
        do {
          local_14 = 0;
          do {
            local_14 = local_14 + 1;
          } while (local_14 < 0x40);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar3 = uVar3 + 0x32;
        iVar4 = DAT_021046a4;
        iVar4 = iVar4 * 0x10;
        bVar5 = (&DAT_0212944d)[iVar4];
        uVar2 = Ram021046a8;
      } while ((((byte)(&DAT_0212944c)[iVar4] ^ uVar2) & 1) != 0);
    }
    local_18 = 0;
    local_1c = 0;
    DAT_02104ad8 = (uint)(bVar5 >> 2);
    recovered_2001b70(event,&DAT_02129440 + iVar4,0x10);
    iVar4 = DAT_021046a4;
    iVar4 = iVar4 + 1;
    DAT_021046a4 = iVar4;
    if (iVar4 == 0x10) {
      DAT_021046a4 = 0;
      bVar5 = DAT_021046a8;
      DAT_021046a8 = bVar5 ^ 1;
      uVar1 = DAT_021046a8;
      uVar1 = DAT_021046a8;
      uVar1 = DAT_021046a8;
      iVar4 = 0;
    }
    uVar3 = recovered_20091e0((uint)(&DAT_02129440 + iVar4 * 0x10),0x10,&local_1c);
    if ((char)uVar3 != '\0') {
      uVar3 = DAT_02104684;
      *(uint *)(uVar3 + 0x38) = local_1c | 8;
      *(undefined4 *)(uVar3 + 0x3c) = local_18;
    }
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}
