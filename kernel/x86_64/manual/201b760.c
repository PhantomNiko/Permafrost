/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ce810 (*(uint64_t volatile *)(0x215a040U))
#define DAT_020ce820 (*(uint8_t volatile *)(0x215a050U))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(uint *)(0x6840U))
#define _DAT_00006844 (*(uint *)(0x6844U))
#define local_228 (*(undefined1 (*)[512])(frame + 24))
bool recovered_201b760(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  ulong size;
  long lVar1;
  int iVar2;
  bool bVar3;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  size = DAT_020ce810;
  if (size != 0) {
    recovered_2001410(local_228,&DAT_020ce820,size);
    lVar1 = DAT_020ce810;
    local_228[lVar1] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_228);
    }
    DAT_020ce810 = 0;
  }
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
    iVar2 = (*(code *)(ulong)_DAT_00006844)(param_1,param_2,param_3,param_4);
    bVar3 = iVar2 != 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}
