/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_0214822c (*(uint8_t volatile *)(0x214822cU))
#define DAT_02148230 (*(uint32_t volatile *)(0x2148230U))
#define DAT_02148238 (*(uint32_t volatile *)(0x2148238U))
#define DAT_0214823c (*(uint32_t volatile *)(0x214823cU))
#define DAT_02148240 (*(uint32_t volatile *)(0x2148240U))
#define DAT_0223b6fc (*(uint32_t volatile *)(0x223b6fcU))
#define str_020ca1b2 (*(char (*)[1])(0x20ca1b2U))
#define str_020cbcd2 (*(char (*)[1])(0x20cbcd2U))
#define str_020cbcdd (*(char (*)[1])(0x20cbcddU))
#define str_020cbd17 (*(char (*)[1])(0x20cbd17U))
#define format (*(char * *)(frame + 28))
#define in_stack_fffffa60 (*(uint *)(frame + 32))
#define local_598 (*(char (*)[1024])(frame + 40))
#define local_198 (*(int (*)[2])(frame + 1064))
#define local_190 (*(byte *)(frame + 1072))
#define local_188 (*(int *)(frame + 1080))
#define local_184 (*(char (*)[64])(frame + 1084))
#define local_144 (*(char (*)[64])(frame + 1148))
#define local_104 (*(char (*)[244])(frame + 1212))


undefined4 recovered_2071f30(ulong *param_1,int param_2)

{
  unsigned char frame[1504] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint vararg3;
  uint vararg4;
  int iVar3;
  ulong count;

  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_1[2] == 0) {
    return 0;
  }
  bVar1 = DAT_0214822c;
  if ((((bVar1 & 1) != 0) && (uVar2 = DAT_02148238, (uVar2 & 2) != 0)) && ((param_1[1] & 2) == 0)) {
    return 1;
  }
  recovered_2001e00(local_198,0,0x188);
  count = *param_1;
  if (0x8e < count - 1) {
    count = 0x90;
  }
  recovered_2001b70(local_198 + 1,param_1,count);
  local_198[1] = 0x90;
  local_190 = local_190 | 1;
  if (local_188 == 0) {
    local_188 = 0x100;
  }
  if (local_184[0] == '\0') {
    pf_varargs_20044f0___(local_184,0x40,str_020cbcd2);
  }
  iVar3 = DAT_0223b6fc;
  if (iVar3 == 0) {
    if (local_144[0] != '\0') goto LAB_02072077;
    format = str_020ca1b2;
  }
  else {
    pf_varargs_20044f0__4_(local_104,0xf1,&DAT_020c5119,iVar3 + 0x48);
    if (local_144[0] != '\0') goto LAB_02072077;
    iVar3 = DAT_0223b6fc;
    in_stack_fffffa60 = iVar3 + 0x48;
    format = &DAT_020c5119;
  }
  pf_varargs_20044f0__4_(local_144,0x40,format,in_stack_fffffa60);
LAB_02072077:
  local_198[0] = param_2;
  recovered_2001b70(&DAT_02148230,local_198,0x188);
  DAT_0214822c = 1;
  vararg4 = DAT_02148240;
  vararg3 = DAT_0214823c;
  uVar2 = DAT_02148238;
  pf_varargs_20044f0__4__4__4__4__4_
            (local_598,0x400,str_020cbcdd,0x2148244,0x2148284,uVar2,vararg3,vararg4);
  recovered_206cc70(str_020cbd17,0x20cbd25,(int)local_598);
  recovered_206de50(str_020cbd17,0x20cbd25,(int)local_598);
  return 1;
}
#undef DAT_020c5119
#undef DAT_0214822c
#undef DAT_02148230
#undef DAT_02148238
#undef DAT_0214823c
#undef DAT_02148240
#undef DAT_0223b6fc
#undef str_020ca1b2
#undef str_020cbcd2
#undef str_020cbcdd
#undef str_020cbd17
#undef format
#undef in_stack_fffffa60
#undef local_598
#undef local_198
#undef local_190
#undef local_188
#undef local_184
#undef local_144
#undef local_104
