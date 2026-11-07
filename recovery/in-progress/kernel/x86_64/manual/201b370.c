/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ce810 (*(uint64_t volatile *)(0x215a040U))
#define DAT_020ce820 (*(uint8_t volatile *)(0x215a050U))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_238 (*(undefined1 (*)[520])(frame + 24))
void recovered_201b370(long param_1,long param_2)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;

  if (param_2 != 0 && param_1 != 0) {
    lVar4 = 0;
    do {
      cVar1 = *(char *)(param_1 + lVar4);
      if (cVar1 == '\b') {
        lVar2 = DAT_020ce810;
        if (lVar2 != 0) {
          DAT_020ce810 = lVar2 + -1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          uVar3 = DAT_020ce810;
          if (uVar3 == 0) {
            lVar2 = 0;
          }
          else {
            recovered_2001410(local_238,&DAT_020ce820,uVar3);
            lVar2 = DAT_020ce810;
          }
          local_238[lVar2] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 &&
              ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00006840)(local_238);
          }
          DAT_020ce810 = 0;
        }
        else {
          uVar3 = DAT_020ce810;
          if (uVar3 - 0x1ff < 0xfffffffffffffe00) {
            recovered_2001410(local_238,&DAT_020ce820,uVar3);
            lVar2 = DAT_020ce810;
            local_238[lVar2] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00006840)(local_238);
            }
            uVar3 = 0;
          }
          DAT_020ce810 = uVar3 + 1;
          (&DAT_020ce820)[uVar3] = cVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
  }
  return;
}
