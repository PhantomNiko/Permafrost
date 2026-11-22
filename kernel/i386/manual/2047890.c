/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de4f0 (*(uint32_t volatile *)(0x20de4f0U))
#define DAT_021408ea (*(uint8_t volatile *)(0x21408eaU))
#define DAT_021408ec (*(uint32_t volatile *)(0x21408ecU))
#define DAT_021408f0 (*(uint32_t volatile *)(0x21408f0U))


uint recovered_2047890(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *in_ECX;
  uint uVar6;

  DAT_020de4f0 = 0xffffffff;
  cVar1 = DAT_021408ea;
  if (cVar1 == '\0') {
    uVar2 = recovered_202a5c0();
    if (uVar2 == '\0') {
      return 0;
    }
    iVar3 = DAT_021408ec;
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    iVar3 = DAT_021408ec;
    if (iVar3 == 0) {
      return 0;
    }
  }
  uVar6 = 0;
  in_ECX = &DAT_021408f0;
  do {
    if (((0 < in_ECX[7]) && (uVar4 = recovered_20bdc00((int)in_ECX), (char)uVar4 != '\0')) &&
       (in_ECX[0x16] - 3U < 3)) {
      iVar3 = in_ECX[0x17];
      if (iVar3 == 0) {
        uVar5 = recovered_20a3d60(*in_ECX,in_ECX[0x16]);
        if ((char)uVar5 == '\0') goto LAB_020478e0;
        iVar3 = in_ECX[0x17];
      }
      if (iVar3 - 3U < 3) {
        DAT_020de4f0 = *in_ECX;
        return CONCAT31((int3)((uint)*in_ECX >> 8),1);
      }
    }
LAB_020478e0:
    uVar6 = uVar6 + 1;
    in_ECX = in_ECX + 0x18;
    uVar5 = DAT_021408ec;
    if (uVar5 <= uVar6) {
      return 0;
    }
  } while( true );
}
#undef DAT_020de4f0
#undef DAT_021408ea
#undef DAT_021408ec
#undef DAT_021408f0
