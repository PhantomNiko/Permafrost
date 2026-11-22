#include "functions.h"



#undef DAT_020c77e4
#undef DAT_020c77e8
#undef DAT_020c77ec
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_30
#undef local_34
#undef local_38
#undef local_3c
#undef local_40
#undef local_44
#undef local_48
#undef local_4c
#undef local_50
#undef local_54
#undef local_58
#undef local_f8
#undef str_0208e5b8

#undef DAT_020de14c
#define DAT_020de14c (*(uint32_t volatile *)(0x20de14cU))
#undef DAT_022452c0
#define DAT_022452c0 (*(uint32_t volatile *)(0x22452c0U))
#undef DAT_0225429c
#define DAT_0225429c (*(uint32_t volatile *)(0x225429cU))
#undef DAT_022542a4
#define DAT_022542a4 (*(uint32_t volatile *)(0x22542a4U))
#undef DAT_022543bc
#define DAT_022543bc (*(uint32_t volatile *)(0x22543bcU))
#undef DAT_022543c0
#define DAT_022543c0 (*(uint32_t volatile *)(0x22543c0U))
#undef DAT_022543c4
#define DAT_022543c4 (*(uint32_t volatile *)(0x22543c4U))
#undef str_020d6fc5
#define str_020d6fc5 (*(char (*)[1])(0x20d6fc5U))
#undef str_020d6fd0
#define str_020d6fd0 (*(char (*)[1])(0x20d6fd0U))
#undef str_020d6ff4
#define str_020d6ff4 (*(char (*)[1])(0x20d6ff4U))
#undef str_020d7061
#define str_020d7061 (*(char (*)[1])(0x20d7061U))
#undef str_020d7072
#define str_020d7072 (*(char (*)[1])(0x20d7072U))
#define local_94 (*(undefined1 (*)[96])(frame + 28))
#define local_34 (*(uint *)(frame + 124))
#define local_30 (*(uint *)(frame + 128))
#define local_2c (*(uint *)(frame + 132))
#define local_28 (*(uint *)(frame + 136))
#define local_24 (*(uint *)(frame + 140))
#define local_20 (*(int *)(frame + 144))
#define local_1c (*(int *)(frame + 148))
#define local_18 (*(uint *)(frame + 152))
#define local_14 (*(undefined4 *)(frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20bf6a0
 */

uint recovered_20bf6a0(void)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *piVar2;
  uint uVar3;
  char *format;
  uchar in_CL;
  uchar in_CL_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint vararg8;
  uint *incoming_edx;
  bool bVar7;

  uVar1 = DAT_020de14c;
  uVar4 = uVar1;
  if (0x3f < uVar1) {
    uVar4 = 0x40;
  }
  uVar4 = uVar4 * 3;
  if (0x17 < uVar4) {
    uVar4 = 0x18;
  }
  local_1c = DAT_022452c0;
  uVar5 = 3;
  if (uVar1 != 0) {
    uVar5 = uVar4;
  }
  recovered_2001e00(&DAT_0225429c,0,0x120);
  DAT_022543bc = 0;
  DAT_022543c0 = 0;
  DAT_022543c4 = 0;
  if (uVar5 == 0) {
    uVar1 = DAT_022543c0;
LAB_020bf7e6:
    uVar4 = 0;
    local_14 = CONCAT31((int3)(uVar1 >> 8),1);
    uVar1 = 0;
  }
  else {
    incoming_edx = &DAT_0225429c;
    uVar1 = 0;
    do {
      uVar6 = uVar1 + 1;
      *incoming_edx = uVar6;
      incoming_edx[1] = 0x60;
      local_18 = uVar1;
      uVar1 = recovered_20392a0((int)&recovered_20bf980,(uint)incoming_edx,str_020d6fc5,0,'\0',(int)local_94,0x60)
      ;
      uVar4 = local_18;
      if (uVar1 == 0) {
        pf_varargs_20bfa70__4__4_(str_020d6fd0,local_18,(uint)local_94);
        goto LAB_020bf782;
      }
      incoming_edx = incoming_edx + 3;
      uVar1 = uVar6;
    } while (uVar5 != uVar6);
    uVar4 = uVar5;
LAB_020bf782:
    uVar1 = DAT_022543c0;
    if (uVar1 < uVar4) {
      uVar1 = 0;
      do {
        recovered_2039960(1);
        uVar5 = DAT_022543c0;
        if (uVar4 <= uVar5) break;
        bVar7 = uVar1 < 199999;
        uVar1 = uVar1 + 1;
      } while (bVar7);
    }
    else if (uVar4 == 0) goto LAB_020bf7e6;
    uVar1 = 0;
    piVar2 = &DAT_022542a4;
    uVar5 = uVar4;
    do {
      uVar1 = *piVar2 + -0x61c88647 + (uVar1 >> 2) + uVar1 * 0x40 ^ uVar1;
      piVar2 = piVar2 + 3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    local_14 = 0;
  }
  local_34 = DAT_022543c4;
  if (local_34 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = local_34;
    do {
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 & uVar6 - 1;
    } while (uVar6 != 0);
  }
  local_20 = DAT_022452c0;
  local_30 = DAT_022543bc;
  local_2c = DAT_022543c0;
  uVar6 = DAT_020de14c;
  uVar3 = uVar6;
  if (0x3f < uVar6) {
    uVar3 = 0x40;
  }
  vararg8 = local_20 - local_1c;
  local_28 = 1;
  if (uVar6 != 0) {
    local_28 = uVar3;
  }
  local_18 = uVar4;
  local_24 = recovered_2006ea0();
  uVar6 = recovered_2006e80();
  uVar4 = local_18;
  pf_varargs_20bfa70__4__4__4__4__4__4__4__4__4__4_
            (str_020d6ff4,local_18,local_30,local_2c,local_28,local_24,uVar6,uVar5,local_34,vararg8,
             uVar1);
  recovered_2027720(in_CL);
  format = str_020d7061;
  if (((char)local_14 == '\0') && (uVar1 = DAT_022543c0, uVar1 == uVar4)) {
    uVar4 = DAT_020de14c;
    uVar1 = 1;
    if ((uVar4 < 2) || (local_20 != local_1c && 1 < uVar5)) {
      uVar1 = 0;
      format = str_020d7072;
    }
  }
  else {
    uVar1 = 1;
  }
  pf_varargs_20bfa70___(format);
  recovered_2027720(in_CL_00);
  return uVar1;
}
