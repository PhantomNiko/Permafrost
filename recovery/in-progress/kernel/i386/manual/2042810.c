/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0214b0e8 (*(uint32_t volatile *)(0x214b0e8U))
#define DAT_0214b0ec (*(uint32_t volatile *)(0x214b0ecU))
#define DAT_0214b0f0 (*(uint32_t volatile *)(0x214b0f0U))
#define DAT_0214b0f4 (*(uint8_t volatile *)(0x214b0f4U))
#define DAT_0214b0f5 (*(uint8_t volatile *)(0x214b0f5U))
#define DAT_0214b0f7 (*(uint8_t volatile *)(0x214b0f7U))
#define DAT_0214b0f8 (*(uint32_t volatile *)(0x214b0f8U))
#define DAT_0214b0fc (*(uint32_t volatile *)(0x214b0fcU))
#define DAT_0214b100 (*(uint32_t volatile *)(0x214b100U))
#define DAT_0214b104 (*(uint8_t volatile *)(0x214b104U))
#define DAT_0214b105 (*(uint8_t volatile *)(0x214b105U))
#define DAT_0214b107 (*(uint8_t volatile *)(0x214b107U))
#define DAT_02153c40 (*(uint8_t volatile *)(0x2153c40U))
#define Ram0214b0f5 (*(uint16_t volatile *)(0x214b0f5U))
#define Ram0214b105 (*(uint16_t volatile *)(0x214b105U))


void recovered_2042810(uint in_ECX,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *in_ECX_00;
  undefined1 *in_ECX_01;
  int iVar4;
  uint size;

  if ((in_EDX != 0 && in_ECX != 0) &&
     (iVar3 = (int)((ulonglong)in_EDX * (ulonglong)in_ECX),
     lVar2 = (ulonglong)in_EDX * (ulonglong)in_ECX + -0x40000000,
     iVar4 = (int)((ulonglong)lVar2 >> 0x20),
     iVar3 != 0 && (iVar4 == -1 && (uint)((uint)lVar2 < 0xc0000001) <= iVar4 + 1U))) {
    size = iVar3 << 2;
    in_ECX_00 = recovered_2001650(size);
    if (in_ECX_00 != (undefined1 *)0x0) {
      recovered_204bb00(in_ECX_00,size);
      in_ECX_01 = recovered_2001650(size);
      if (in_ECX_01 != (undefined1 *)0x0) {
        recovered_204bb00(in_ECX_01,size);
        pvVar1 = (void *)DAT_0214b0f0;
        recovered_2001710(pvVar1);
        DAT_0214b0f0 = 0;
        DAT_0214b0e8 = 0;
        DAT_0214b0ec = 0;
        DAT_0214b0f4 = 0;
        pvVar1 = (void *)DAT_0214b100;
        recovered_2001710(pvVar1);
        DAT_0214b0e8 = in_ECX;
        DAT_0214b0ec = in_EDX;
        DAT_0214b0f0 = in_ECX_00;
        DAT_0214b0f4 = 1;
        Ram0214b0f5 = 0;
        DAT_0214b0f7 = 0;
        DAT_0214b0f8 = in_ECX;
        DAT_0214b0fc = in_EDX;
        DAT_0214b100 = in_ECX_01;
        DAT_0214b104 = 1;
        Ram0214b105 = 0;
        DAT_0214b107 = 0;
        DAT_02153c40 = 0;
        recovered_209f910();
        return;
      }
      recovered_2001710(in_ECX_00);
    }
  }
  return;
}
#undef DAT_0214b0e8
#undef DAT_0214b0ec
#undef DAT_0214b0f0
#undef DAT_0214b0f4
#undef DAT_0214b0f5
#undef DAT_0214b0f7
#undef DAT_0214b0f8
#undef DAT_0214b0fc
#undef DAT_0214b100
#undef DAT_0214b104
#undef DAT_0214b105
#undef DAT_0214b107
#undef DAT_02153c40
#undef Ram0214b0f5
#undef Ram0214b105
