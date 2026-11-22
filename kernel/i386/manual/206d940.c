/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_02148040 (*(uint8_t volatile *)(0x2148040U))
#define DAT_02148048 (*(uint32_t volatile *)(0x2148048U))
#define DAT_02148054 (*(uint32_t volatile *)(0x2148054U))
#define DAT_02148058 (*(uint32_t volatile *)(0x2148058U))
#define DAT_0214805c (*(uint32_t volatile *)(0x214805cU))
#define DAT_02148060 (*(uint8_t volatile *)(0x2148060U))
#define DAT_02148061 (*(uint8_t volatile *)(0x2148061U))
#define DAT_02148062 (*(uint8_t volatile *)(0x2148062U))
#define DAT_02148063 (*(uint8_t volatile *)(0x2148063U))
#define DAT_02148064 (*(uint8_t volatile *)(0x2148064U))
#define DAT_02148065 (*(uint8_t volatile *)(0x2148065U))
#define DAT_02148204 (*(uint32_t volatile *)(0x2148204U))
#define DAT_02148208 (*(uint32_t volatile *)(0x2148208U))
#define DAT_0214820c (*(uint32_t volatile *)(0x214820cU))
#define DAT_02148210 (*(uint32_t volatile *)(0x2148210U))
#define DAT_02148214 (*(uint32_t volatile *)(0x2148214U))
#define DAT_02148218 (*(uint32_t volatile *)(0x2148218U))
#define DAT_0214821c (*(uint32_t volatile *)(0x214821cU))
#define DAT_02148220 (*(uint32_t volatile *)(0x2148220U))
#define DAT_02148224 (*(uint32_t volatile *)(0x2148224U))
#define DAT_02148228 (*(uint32_t volatile *)(0x2148228U))
#define DAT_0223b6fc (*(uint32_t volatile *)(0x223b6fcU))
#define str_020ca1a2 (*(char (*)[1])(0x20ca1a2U))
#define str_020ca1b2 (*(char (*)[1])(0x20ca1b2U))
#define str_020ca1b9 (*(char (*)[1])(0x20ca1b9U))
#define str_020ca20c (*(char (*)[1])(0x20ca20cU))
#define str_020ca220 (*(char (*)[1])(0x20ca220U))
#define str_020ca2bd (*(char (*)[1])(0x20ca2bdU))
#define local_60c (*(char (*)[1024])(frame + 36))
#define local_20c (*(int *)(frame + 1060))
#define local_208 (*(int *)(frame + 1064))
#define local_204 (*(undefined4 *)(frame + 1068))
#define local_200 (*(byte *)(frame + 1072))
#define local_1fc (*(int *)(frame + 1076))
#define local_1f8 (*(int *)(frame + 1080))
#define local_1c4 (*(char (*)[64])(frame + 1132))
#define local_184 (*(char (*)[64])(frame + 1196))
#define local_144 (*(char (*)[284])(frame + 1260))
#define local_28 (*(char (*)[24])(frame + 1544))
#define in_stack_fffff9f0 (*(uint *)(frame + 32))
#define format (*(char * *)(frame + 28))


undefined4 recovered_206d940(ulong *param_1,int param_2,int param_3)

{
  unsigned char frame[1616] __attribute__((aligned(16))) = {0};

  uint vararg2;
  uint vararg3;
  uint vararg4;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  ulong count;

  if (param_3 == 0 || (param_2 == 0 || param_1 == (ulong *)0x0)) {
    return 0;
  }
  if ((param_1[1] & 4) == 0) {
    return 0;
  }
  recovered_2001e00(&local_20c,0,0x1e4);
  count = *param_1;
  if (0xbe < count - 1) {
    count = 0xc0;
  }
  recovered_2001b70(&local_204,param_1,count);
  local_204 = 0xc0;
  local_200 = local_200 | 0xd;
  if (local_1fc == 0) {
    local_1fc = 0x5dc;
  }
  if (local_1f8 - 0x801U < 0xfffff800) {
    local_1f8 = 0x800;
  }
  if (local_1c4[0] == '\0') {
    pf_varargs_20044f0___(local_1c4,0x40,str_020ca1a2);
  }
  iVar17 = DAT_0223b6fc;
  if (iVar17 == 0) {
    if (local_184[0] != '\0') goto LAB_0206da83;
    format = str_020ca1b2;
  }
  else {
    pf_varargs_20044f0__4_(local_144,0xf1,&DAT_020c5119,iVar17 + 0x48);
    if (local_184[0] != '\0') goto LAB_0206da83;
    iVar17 = DAT_0223b6fc;
    in_stack_fffff9f0 = iVar17 + 0x48;
    format = &DAT_020c5119;
  }
  pf_varargs_20044f0__4_(local_184,0x40,format,in_stack_fffff9f0);
LAB_0206da83:
  local_20c = param_2;
  local_208 = param_3;
  recovered_2001b70(&DAT_02148048,&local_20c,0x1e4);
  DAT_02148040 = 1;
  bVar1 = DAT_02148060;
  bVar2 = DAT_02148061;
  bVar3 = DAT_02148062;
  bVar4 = DAT_02148063;
  bVar5 = DAT_02148064;
  bVar6 = DAT_02148065;
  pf_varargs_20044f0__4__4__4__4__4__4_
            (local_28,0x18,str_020ca2bd,(uint)bVar1,(uint)bVar2,(uint)bVar3,(uint)bVar4,(uint)bVar5,
             (uint)bVar6);
  uVar16 = DAT_02148228;
  uVar15 = DAT_02148224;
  uVar14 = DAT_02148220;
  uVar13 = DAT_0214821c;
  uVar12 = DAT_02148218;
  uVar11 = DAT_02148214;
  uVar10 = DAT_02148210;
  uVar9 = DAT_0214820c;
  uVar8 = DAT_02148208;
  uVar7 = DAT_02148204;
  vararg4 = DAT_0214805c;
  vararg3 = DAT_02148058;
  vararg2 = DAT_02148054;
  pf_varargs_20044f0__4__4__4__4__4__4__8__8__8__8__8_
            (local_60c,0x400,str_020ca220,0x2148090,0x21480d0,vararg2,vararg3,vararg4,(uint)local_28
             ,CONCAT44(uVar8,uVar7),CONCAT44(uVar10,uVar9),CONCAT44(uVar12,uVar11),
             CONCAT44(uVar14,uVar13),CONCAT44(uVar16,uVar15));
  recovered_206cc70(str_020ca1b9,0x20ca1c2,0x20ca1d6);
  recovered_206de50(str_020ca1b9,0x20ca1c2,0x20ca1d6);
  recovered_206cc70(str_020ca20c,0x2148090,(int)local_60c);
  recovered_206de50(str_020ca20c,0x2148090,(int)local_60c);
  return 1;
}
#undef DAT_020c5119
#undef DAT_02148040
#undef DAT_02148048
#undef DAT_02148054
#undef DAT_02148058
#undef DAT_0214805c
#undef DAT_02148060
#undef DAT_02148061
#undef DAT_02148062
#undef DAT_02148063
#undef DAT_02148064
#undef DAT_02148065
#undef DAT_02148204
#undef DAT_02148208
#undef DAT_0214820c
#undef DAT_02148210
#undef DAT_02148214
#undef DAT_02148218
#undef DAT_0214821c
#undef DAT_02148220
#undef DAT_02148224
#undef DAT_02148228
#undef DAT_0223b6fc
#undef str_020ca1a2
#undef str_020ca1b2
#undef str_020ca1b9
#undef str_020ca20c
#undef str_020ca220
#undef str_020ca2bd
#undef local_60c
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1c4
#undef local_184
#undef local_144
#undef local_28
#undef in_stack_fffff9f0
#undef format
