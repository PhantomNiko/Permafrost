/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3cc (*(uint8_t volatile *)(0x215a7dcU))
#define DAT_020cf3dc (*(uint32_t volatile *)(0x215a7ecU))
uchar recovered_20e4ee0(uint param_1,int param_2,long param_3,uint param_4,uint param_5,int param_6,
                       int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  void *out;
  int iVar4;
  ulong size;
  ulong uVar5;
  ulong size_00;

  if (param_2 == 0) {
    return param_4 == 0;
  }
  if ((param_7 != 0 && 1 < param_1) && (param_3 != 0 || param_4 == 0)) {
    size = (ulong)param_5;
    out = recovered_2000ad0(size);
    if (out != (void *)0x0) {
      iVar4 = param_6 + (param_1 - 2) * param_7;
      uVar5 = 0;
      while( true ) {
        size_00 = 0;
        if (uVar5 <= param_4) {
          size_00 = param_4 - uVar5;
        }
        recovered_2002110(out,0,size);
        if (size <= size_00) {
          size_00 = size;
        }
        if (size_00 != 0) {
          recovered_2001410(out,(void *)(param_3 + uVar5),size_00);
        }
        bVar1 = DAT_020cf3cc;
        iVar2 = DAT_020cf3dc;
        uVar3 = recovered_206cfd0(bVar1,(ulong)(uint)(iVar2 + iVar4),(long)out,size);
        if ((char)uVar3 == '\0') break;
        uVar5 = uVar5 + size_00;
        iVar4 = iVar4 + param_7;
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          recovered_2000bb0(out);
          return '\x01';
        }
      }
      recovered_2000bb0(out);
    }
  }
  return '\0';
}
