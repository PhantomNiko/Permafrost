/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020ce810 (*(uint64_t volatile *)(0x215a040U))
#define DAT_020ce820 (*(uint8_t volatile *)(0x215a050U))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(uint *)(0x6840U))
#define _DAT_00006844 (*(uint *)(0x6844U))
#define local_218 (*(undefined1 (*)[512])(frame + 24))
uint recovered_201bf40(int *param_1)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x49] != '\x01') {
    return 0xffffffff;
  }
  uVar1 = param_1[0x48];
  if (uVar1 != 0xffffffff) {
    param_1[0x48] = -1;
    return uVar1;
  }
  if (*param_1 == 1) {
    uVar4 = *(ulong *)(param_1 + 0xce);
    if (uVar4 < *(ulong *)(param_1 + 0xcc)) {
LAB_0200baca:
      *(ulong *)(param_1 + 0xce) = uVar4 + 1;
      return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
    }
    uVar4 = DAT_020ce810;
    if (uVar4 != 0) {
      recovered_2001410(local_218,&DAT_020ce820,uVar4);
      lVar2 = DAT_020ce810;
      local_218[lVar2] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00006840)(local_218);
      }
      DAT_020ce810 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
      iVar3 = (*(code *)(ulong)_DAT_00006844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_020a259c,0)
      ;
      if (iVar3 != 0) {
        uVar4 = recovered_2002e80((char *)((long)param_1 + 0x12a));
        *(ulong *)(param_1 + 0xcc) = uVar4 + 1;
        *(undefined1 *)((long)param_1 + uVar4 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar4 = 0;
        goto LAB_0200baca;
      }
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x46);
    if (uVar4 < *(ulong *)(param_1 + 0x42)) {
      *(ulong *)(param_1 + 0x46) = uVar4 + 1;
      return (uint)*(byte *)(*(long *)(param_1 + 0x3e) + uVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return 0xffffffff;
}
