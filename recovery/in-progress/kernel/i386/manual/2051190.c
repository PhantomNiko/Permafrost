/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_02130728 (*(uint32_t volatile *)(0x2130728U))
#define str_020c526f (*(char (*)[1])(0x20c526fU))
#define local_31b (*(char (*)[241])(frame + 21))
#define local_22a (*(char (*)[241])(frame + 262))
#define local_139 (*(char (*)[241])(frame + 503))
#define local_48 (*(uint * *)(frame + 744))
#define local_44 (*(uint * *)(frame + 748))
#define local_40 (*(uint *)(frame + 752))
#define local_3c (*(uint *)(frame + 756))
#define local_38 (*(int *)(frame + 760))
#define local_34 (*(uint *)(frame + 764))
#define local_30 (*(int *)(frame + 768))
#define local_2c (*(uint *)(frame + 772))
#define local_28 (*(uint *)(frame + 776))
#define local_24 (*(char * *)(frame + 780))
#define local_20 (*(int *)(frame + 784))
#define local_1c (*(uint *)(frame + 788))
#define local_18 (*(undefined4 * *)(frame + 792))
#define local_11 (*(char *)(frame + 799))


uint recovered_2051190(uint *incoming_ecx,uint *incoming_edx)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  char *pcVar3;
  uint flags;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if (incoming_edx == (uint *)0x0 || incoming_ecx == (uint *)0x0) {
    return 0;
  }
  *incoming_ecx = 0;
  *incoming_edx = 0;
  local_48 = incoming_edx;
  local_44 = incoming_ecx;
  local_18 = recovered_2001860((void *)0x0,0x20c0);
  if (local_18 == (undefined4 *)0x0) {
LAB_02051487:
    uVar5 = 0;
  }
  else {
    recovered_2001e00(local_18,0,0x20c0);
    local_40 = 0x10;
    *local_18 = 0xffffffff;
    local_18[1] = 0xffffffff;
    *(undefined1 *)(local_18 + 0x82) = 1;
    local_18[0x80] = 2;
    local_2c = 1;
    iVar4 = DAT_02130728;
    if (iVar4 == 0) {
      local_2c = 1;
    }
    else {
      local_30 = 0;
      uVar5 = 0;
      do {
        local_20 = DAT_02130724;
        pcVar3 = (char *)(uVar5 * 0x110 + local_20);
        if (local_20 == 0) {
          local_34 = 0;
        }
        else {
          local_34 = (uint)((pcVar3[0xfc] & 2U) >> 1);
        }
        local_31b[0] = '\0';
        if (*pcVar3 == '\0') {
LAB_02051479:
          recovered_2001710(local_18);
          goto LAB_02051487;
        }
        local_20 = local_20 + local_30;
        iVar4 = 0;
        local_28 = 0;
        local_24 = pcVar3;
        local_1c = uVar5;
        while( true ) {
          iVar1 = local_20 + iVar4;
          for (uVar6 = 0; (cVar2 = *(char *)(iVar1 + uVar6), cVar2 != '\0' && (cVar2 != '/'));
              uVar6 = uVar6 + 1) {
          }
          if ((uVar6 == 0) || (0xf0 < uVar6)) goto LAB_02051479;
          local_38 = iVar4;
          recovered_2001b70(local_139,local_24 + iVar4,uVar6);
          local_139[uVar6] = '\0';
          local_11 = *(char *)(iVar1 + uVar6);
          if (local_31b[0] == '\0') {
            pf_varargs_20044f0__4_(local_22a,0xf1,&DAT_020c5119,(uint)local_139);
          }
          else {
            pf_varargs_20044f0__4__4_(local_22a,0xf1,str_020c526f,(uint)local_31b,(uint)local_139);
          }
          uVar5 = local_1c;
          if (local_22a[0] == '\0') goto LAB_02051479;
          if (local_11 == '\0' && (local_34 & 1) == 0) break;
          local_3c = 0xffffffff;
          if (local_11 == '\0') {
            flags = *(uint *)(local_24 + 0xfc) | 2;
          }
          else {
            flags = 2;
            uVar5 = 0xffffffff;
          }
          uVar5 = recovered_2051b70((int *)&local_18,&local_2c,&local_40,local_28,local_139,
                                    local_22a,uVar5,1,flags,&local_3c);
          if ((char)uVar5 == '\0') goto LAB_02051479;
          local_28 = local_3c;
          pf_varargs_20044f0__4_(local_31b,0xf1,&DAT_020c5119,(uint)local_22a);
          uVar5 = local_1c;
          if (local_11 == '\0') goto LAB_0205145a;
          iVar4 = local_38 + 1 + uVar6;
        }
        uVar6 = recovered_2051b70((int *)&local_18,&local_2c,&local_40,local_28,local_139,local_22a,
                                  local_1c,0,*(uint *)(local_24 + 0xfc) & 0xfffffffd,(uint *)0x0);
        if ((char)uVar6 == '\0') goto LAB_02051479;
LAB_0205145a:
        uVar5 = uVar5 + 1;
        local_30 = local_30 + 0x110;
        uVar6 = DAT_02130728;
      } while (uVar5 < uVar6);
    }
    *local_44 = (uint)local_18;
    *local_48 = local_2c;
    uVar5 = CONCAT31((int3)(local_2c >> 8),1);
  }
  return uVar5;
}
#undef DAT_020c5119
#undef DAT_02130724
#undef DAT_02130728
#undef str_020c526f
#undef local_31b
#undef local_22a
#undef local_139
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
