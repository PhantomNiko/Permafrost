/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_021408e9 (*(uint8_t volatile *)(0x21408e9U))
#define DAT_0214b0e0 (*(uint8_t volatile *)(0x214b0e0U))
#define DAT_0214b0e4 (*(uint32_t volatile *)(0x214b0e4U))
#define DAT_0214bc2c (*(uint32_t volatile *)(0x214bc2cU))
#define DAT_0223daf0 (*(uint32_t volatile *)(0x223daf0U))
#define DAT_0223daf4 (*(uint32_t volatile *)(0x223daf4U))
#define DAT_0223daf8 (*(uint32_t volatile *)(0x223daf8U))
#define DAT_0223dafc (*(uint8_t volatile *)(0x223dafcU))
#define DAT_0223dafd (*(uint8_t volatile *)(0x223dafdU))
#define DAT_0223db00 (*(uint32_t volatile *)(0x223db00U))


uint recovered_2071d90(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  undefined4 uVar2;
  char cVar3;
  void *data;
  uint uVar4;
  void *data_00;
  uchar in_CL;
  undefined1 *in_ECX;
  uint uVar5;
  uint uVar6;
  uint in_EDX;

  uVar4 = 0;
  cVar3 = DAT_0223dafd;
  if ((cVar3 == '\0') && ((param_3 & 0xffffffdf) == 0 && (param_2 != 0 && param_1 != 0))) {
    uVar1 = (ulonglong)param_1 * (ulonglong)param_2;
    uVar4 = 0;
    uVar5 = (int)(uVar1 >> 0x20) << 2 | (uint)uVar1 >> 0x1e;
    in_EDX = (uint)uVar1 * 4;
    if ((uVar5 == 0 && (in_EDX == 0) <= uVar5) &&
       (uVar6 = (uint)((uVar1 & 0x3fffffff3fffffff) >> 0x33), uVar4 = 0,
       uVar6 == 0 &&
       (uint)(0x7fe < (uVar5 << 0xb | (uint)(uVar1 & 0x3fffffff3fffffff) >> 0x13)) <= -uVar6)) {
      data_00 = recovered_2001650(in_EDX + 0x200000);
      if (data_00 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        in_ECX = (undefined1 *)((int)data_00 + 0x1fffffU & 0xffe00000);
        recovered_204bb00(in_ECX,in_EDX);
        uVar4 = recovered_2005220((uint)in_ECX,0,param_1,param_2,param_1 * 4);
        if ((char)uVar4 == '\0') {
          recovered_2001710(data_00);
          uVar4 = 0;
        }
        else {
          data = (void *)DAT_0223db00;
          if ((data != (void *)0x0) && (data != data_00)) {
            recovered_2001710(data);
          }
          DAT_0214b0e4 = in_ECX;
          DAT_0223db00 = data_00;
          DAT_0223daf0 = param_1;
          DAT_0223daf4 = param_2;
          DAT_0223daf8 = 0x20;
          DAT_0223dafc = 0;
          recovered_200b180(param_1,param_2,0x20,'\0');
          DAT_0214b0e0 = 1;
          uVar2 = DAT_0214bc2c;
          uVar4 = recovered_2042550();
          DAT_0214bc2c = uVar2;
          if (uVar4 == 0) {
            DAT_0214b0e0 = 0;
            DAT_021408e9 = 0;
          }
          else {
            recovered_2027720(in_CL);
          }
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}
#undef DAT_021408e9
#undef DAT_0214b0e0
#undef DAT_0214b0e4
#undef DAT_0214bc2c
#undef DAT_0223daf0
#undef DAT_0223daf4
#undef DAT_0223daf8
#undef DAT_0223dafc
#undef DAT_0223dafd
#undef DAT_0223db00
