/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e372 (*(uint8_t *)(0x82473a77U))
#define acStack_351 (*(char (*)[241])(frame + 63))
#define auStack_150 (*(undefined1 (*)[272])(frame + 576))
#define auStack_260 (*(undefined1 (*)[272])(frame + 304))
#define auStack_371 (*(undefined1 (*)[32])(frame + 31))
#define str_40454f4b (*(char (*)[1])(0x8247ffb1U))
void recovered_82469e4c(long param_1)

{
  unsigned char frame[944] __attribute__((aligned(16))) = {0};

  undefined *vararg3;
  undefined *in_x1;

  if (param_1 != 0) {
    recovered_82469b64((ulong)*(uint *)(param_1 + 4),param_1 + 0x48,(long)auStack_150);
    recovered_8246a064(param_1,acStack_351);
    recovered_82469bd4(acStack_351,(long)auStack_260);
    recovered_82469c88((long)auStack_371);
    vararg3 = &DAT_4044e372;
    if (in_x1 != (undefined *)0x0) {
      vararg3 = in_x1;
    }
    pf_varargs_4041aa18_4
              (str_40454f4b,(ulonglong)auStack_150,(ulonglong)auStack_260,(ulonglong)auStack_371,
               (ulonglong)vararg3);
  }
  return;
}
