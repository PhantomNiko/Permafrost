/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b91a0 (*(uint32_t volatile *)(0x2130034U))
#define DAT_020b91a4 (*(uint8_t volatile *)(0x2130038U))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(code * *)(0x6840U))
#define _DAT_00006844 (*(code * *)(0x6844U))
#define local_210 (*(undefined1 (*)[512])(frame + 16))
bool recovered_2018350(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong size;
  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    size = DAT_020b91a0;
    if (size != 0) {
      recovered_2001b70(local_210,&DAT_020b91a4,size);
      iVar1 = DAT_020b91a0;
      local_210[iVar1] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_210);
      }
      DAT_020b91a0 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)(param_1,param_2,param_3,param_4);
      return iVar1 != 0;
    }
  }
  return false;
}
