/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9d0c (*(uint32_t volatile *)(0x2130778U))
#define DAT_020b9d10 (*(uint32_t volatile *)(0x213077cU))
#define DAT_020b9d14 (*(uint32_t volatile *)(0x2130780U))
#define DAT_020b9d18 (*(uint32_t volatile *)(0x2130784U))
#define DAT_020b9d1c (*(uint32_t volatile *)(0x2130788U))
#define DAT_020b9d20 (*(uint8_t volatile *)(0x213078cU))
void recovered_2052d80(uint incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;

  iVar2 = DAT_020b9d0c;
  if (iVar2 != 0) {
    bVar5 = DAT_020b9d20;
    uVar4 = DAT_020b9d10;
    do {
      if (incoming_ecx < 2) {
        return;
      }
      if (uVar4 <= incoming_ecx) {
        return;
      }
      uVar1 = *(uint *)(iVar2 + incoming_ecx * 4);
      if (uVar1 != 0) {
        *(undefined4 *)(iVar2 + incoming_ecx * 4) = 0;
        uVar4 = DAT_020b9d10;
        if (incoming_ecx < uVar4) {
          if ((bVar5 & 1) == 0) {
            DAT_020b9d18 = incoming_ecx;
            DAT_020b9d1c = incoming_ecx;
            DAT_020b9d20 = 1;
            bVar5 = 1;
          }
          else {
            uVar3 = DAT_020b9d18;
            if (incoming_ecx < uVar3) {
              DAT_020b9d18 = incoming_ecx;
            }
            uVar3 = DAT_020b9d1c;
            if (uVar3 < incoming_ecx) {
              DAT_020b9d1c = incoming_ecx;
            }
          }
        }
      }
      uVar3 = DAT_020b9d14;
      if ((uVar3 < 2) || (incoming_ecx < uVar3)) {
        DAT_020b9d14 = incoming_ecx;
      }
      incoming_ecx = uVar1;
    } while (1 < uVar1 + 1);
  }
  return;
}
