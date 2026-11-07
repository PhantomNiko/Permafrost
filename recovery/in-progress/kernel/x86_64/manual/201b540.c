/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ce810 (*(uint64_t volatile *)(0x215a040U))
#define DAT_020ce820 (*(uint8_t volatile *)(0x215a050U))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 24))
void recovered_201b540(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong size;
  long lVar1;

  size = DAT_020ce810;
  if (size == 0) {
    lVar1 = 0;
  }
  else {
    recovered_2001410(local_208,&DAT_020ce820,size);
    lVar1 = DAT_020ce810;
  }
  local_208[lVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00006840)(local_208);
  }
  DAT_020ce810 = 0;
  return;
}
