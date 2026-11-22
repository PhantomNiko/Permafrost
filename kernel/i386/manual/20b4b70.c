/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define DAT_0208e433 (*(uint8_t *)(0x20c515dU))
#define local_129 (*(char (*)[241])(frame + 567))
#define local_14 (*(int *)(frame + 844))
#define local_18 (*(undefined * *)(frame + 840))
#define local_239 (*(char (*)[272])(frame + 295))
#define local_349 (*(char (*)[272])(frame + 23))
#define local_38 (*(char (*)[32])(frame + 808))
#define str_02091acd (*(char (*)[1])(0x20cf0a0U))
#define str_02094a8f (*(char (*)[1])(0x20d321fU))
#define str_02094aa7 (*(char (*)[1])(0x20d3237U))
#define str_02094bc4 (*(char (*)[1])(0x20d3820U))
#define str_02094bf1 (*(char (*)[1])(0x20d384dU))
void recovered_20b4b70(int incoming_ecx,undefined *incoming_edx)

{
  unsigned char frame[896] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined *vararg3;

  if (incoming_ecx != 0) {
    uVar1 = *(uint *)(incoming_ecx + 4);
    local_14 = incoming_ecx + 0x48;
    local_18 = incoming_edx;
    recovered_202a060(local_14,local_239);
    if (local_239[0] == '\0') {
      pf_varargs_2003aa0__4_(local_349,0x110,str_02091acd,uVar1);
    }
    else {
      pf_varargs_2003aa0__4__4_(local_349,0x110,str_02094bc4,uVar1,(uint)local_239);
    }
    local_129[0] = '\0';
    if (*(char *)(incoming_ecx + 0x139) == '\0') {
      uVar1 = recovered_20b4cb0(local_14,local_129);
      if ((char)uVar1 == '\0') {
        pf_varargs_2003aa0___(local_129,0xf1,str_02094aa7);
      }
    }
    else {
      pf_varargs_2003aa0__4_(local_129,0xf1,&DAT_0208e323,incoming_ecx + 0x139);
    }
    recovered_20b42f0(local_129,local_239);
    pf_varargs_2003aa0__4__4_(local_38,0x20,str_02094bf1,1,0);
    vararg3 = &DAT_0208e433;
    if (local_18 != (undefined *)0x0) {
      vararg3 = local_18;
    }
    pf_varargs_202ebf0__4__4__4__4_
              (str_02094a8f,(uint)local_349,(uint)local_239,(uint)local_38,(uint)vararg3);
  }
  return;
}
