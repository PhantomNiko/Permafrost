/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define local_3fc (*(char (*)[506])(frame + 20))
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define str_020cc385 (*(char (*)[1])(0x20cc385U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define in_stack_fffffc00 (*(char * *)(frame + 16))
#define in_stack_fffffc04 (*(uint *)(frame + 20))
#define local_202 (*(char (*)[241])(frame + 526))
#define local_111 (*(char (*)[241])(frame + 767))
#define local_20 (*(uint * *)(frame + 1008))
#define acStack_3f6 (*(char (*)[500])(frame + 26))
#define local_1c (*(uint * *)(frame + 1012))
#define local_18 (*(uint * *)(frame + 1016))
#define local_14 (*(undefined4 *)(frame + 1020))


undefined4 recovered_2073c50(uint *in_ECX,byte *in_EDX,int param_3,char *param_4,uint param_5)

{
  unsigned char frame[1072] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined1 *data;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *left;
  byte *pbVar7;

  pbVar7 = &DAT_020c5084;
  if (in_EDX != (byte *)0x0) {
    pbVar7 = in_EDX;
  }
  local_20 = in_ECX + 0x154c;
  local_1c = (uint *)(param_3 + 1);
  local_18 = in_ECX;
LAB_02073c81:
  do {
    for (; ((uint)(*pbVar7) - 9 < 5 || (*pbVar7 == 0x20)); pbVar7 = pbVar7 + 1) {
    }
    local_111[0] = '\0';
    uVar4 = (uint)*pbVar7;
    if ((uVar4 == 0x22) || (uVar4 == 0x27)) {
      uVar6 = (uint)pbVar7[1];
      pbVar7 = pbVar7 + 1;
      uVar5 = uVar4;
    }
    else {
      if (uVar4 == 0) {
        return 1;
      }
      uVar5 = 0;
      uVar6 = uVar4;
    }
    local_14 = 1;
    if ((char)uVar6 == '\0') {
      uVar4 = 0;
    }
    else {
      pbVar7 = pbVar7 + 1;
      uVar4 = 0;
      do {
        if (uVar5 == 0) {
          if ((uVar6 - 9 < 0x18) && ((0x80001fU >> (uVar6 - 9 & 0x1f) & 1) != 0)) break;
        }
        else if (uVar5 == (int)(char)uVar6) goto LAB_02073d2b;
        if (uVar4 + 1 < 0xf1) {
          local_111[uVar4] = (char)uVar6;
          uVar4 = uVar4 + 1;
        }
        bVar1 = *pbVar7;
        uVar6 = (uint)bVar1;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      pbVar7 = pbVar7 + -1;
    }
LAB_02073d2b:
    local_111[uVar4] = '\0';
    for (; ((uint)(*pbVar7) - 9 < 5 || (*pbVar7 == 0x20)); pbVar7 = pbVar7 + 1) {
    }
    if (uVar4 == 0) {
      return local_14;
    }
    data = recovered_2001650(0x65e8);
    if (data == (undefined1 *)0x0) {
LAB_02073dc3:
      if (local_18[0x2098] != 0) {
        uVar4 = 0;
        left = local_20;
        do {
          iVar3 = recovered_20022a0((char *)left,local_111);
          if (iVar3 == 0) goto LAB_02073d99;
          uVar4 = uVar4 + 1;
          left = (uint *)((int)left + 0xf1);
        } while (uVar4 < local_18[0x2098]);
      }
      if (local_111[0] != '\0') {
        recovered_2030400(local_111,str_020d9e14,local_202);
        in_stack_fffffc00 = (char *)0x2073e3c;
        uVar4 = recovered_2030680(local_202,acStack_3f6 + -6);
        if ((char)uVar4 != '\0') goto LAB_02073c81;
      }
      pf_varargs_202ecc0__4_(param_4,param_5,str_020cc385,(uint)local_111);
      return 0;
    }
    uVar2 = recovered_20732b0(local_18,local_111,data);
    local_14 = CONCAT31(PF_PART3(local_14, 1),(char)uVar2);
    recovered_2001710(data);
    if ((char)local_14 == '\0') goto LAB_02073dc3;
LAB_02073d99:
    iVar3 = recovered_20727b0(local_18,local_1c,param_4,param_5,in_stack_fffffc00,in_stack_fffffc04)
    ;
    if (iVar3 == 0) {
      return 0;
    }
  } while( true );
}
#undef local_3fc
#undef DAT_020c5084
#undef str_020cc385
#undef str_020d9e14
#undef in_stack_fffffc00
#undef in_stack_fffffc04
#undef local_202
#undef local_111
#undef local_20
#undef acStack_3f6
#undef local_1c
#undef local_18
#undef local_14
