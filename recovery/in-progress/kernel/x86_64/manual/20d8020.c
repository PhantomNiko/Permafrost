/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_18 (*(undefined1 * *)(frame + 216))
#define local_20 (*(undefined1 * *)(frame + 208))
#define local_28 (*(undefined8 *)(frame + 200))
#define local_38 (*(undefined8 *)(frame + 184))
#define local_48 (*(undefined8 *)(frame + 168))
#define local_58 (*(undefined8 *)(frame + 152))
#define local_68 (*(undefined8 *)(frame + 136))
#define local_78 (*(undefined8 *)(frame + 120))
#define local_88 (*(undefined8 *)(frame + 104))
#define local_98 (*(undefined8 *)(frame + 88))
#define local_a8 (*(undefined8 *)(frame + 72))
#define local_b0 (*(undefined8 *)(frame + 64))
#define local_b8 (*(undefined8 *)(frame + 56))
#define local_c0 (*(undefined8 *)(frame + 48))
#define local_d8 (*(undefined1 (*)[24])(frame + 24))
void recovered_20d8020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,char *param_11,undefined8 param_12,
                      undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char in_AL;

  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  if (param_9 != 0) {
    local_18 = local_d8;
    local_20 = &param_15;
    local_28 = 0x3000000018;
    local_c0 = param_12;
    local_b8 = param_13;
    local_b0 = param_14;
    recovered_2004bb0((char *)param_9,0xc0,param_11,&local_28);
  }
  return;
}
