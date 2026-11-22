/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_020de168 (*(uint32_t volatile *)(0x20de168U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_021468f8 (*(uint32_t volatile *)(0x21468f8U))
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#define DAT_022452a8 (*(uint32_t volatile *)(0x22452a8U))
#define DAT_022452ac (*(uint32_t volatile *)(0x22452acU))
#define DAT_022452b0 (*(uint32_t volatile *)(0x22452b0U))
#define DAT_022452c4 (*(uint32_t volatile *)(0x22452c4U))
#define DAT_022452d0 (*(uint32_t volatile *)(0x22452d0U))
#define str_020d5971 (*(char (*)[1])(0x20d5971U))
#define str_020d598b (*(char (*)[1])(0x20d598bU))
#define local_44 (*(undefined1 (*)[32])(frame + 28))
#define local_24 (*(undefined4 *)(frame + 60))
#define local_20 (*(code * *)(frame + 64))
#define local_1c (*(uint *)(frame + 68))
#define local_18 (*(int *)(frame + 72))
#define local_14 (*(char * *)(frame + 76))


void recovered_20ba160(char *incoming_ecx,uint *incoming_edx)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uchar uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  uint uVar8;
  undefined3 extraout_var_00 = 0;
  char *extraout_ECX = 0;
  char extraout_DL = 0;
  uint *extraout_EDX = 0;
  uint *puVar9;

  if (*incoming_ecx != '\x01') {
    return;
  }
  if (incoming_ecx[2] != '\0') {
    return;
  }
  iVar6 = DAT_020d9d44;
  if (incoming_edx == (uint *)0x0) {
    uVar4 = recovered_2006ec0();
    uVar5 = 0;
    if (CONCAT31(extraout_var,uVar4) < 0x20) {
      uVar5 = CONCAT31(extraout_var,uVar4);
    }
    puVar9 = &DAT_0214b320 + uVar5 * 0x12;
    (&DAT_0214b364)[uVar5 * 0x12] = uVar5;
    incoming_edx = extraout_EDX;
    if (uVar5 != 0) goto LAB_020ba18f;
LAB_020ba1fb:
    iVar1 = *(int *)(incoming_ecx + 0x74);
    local_18 = iVar6;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x34) < 0) {
        recovered_20539f0(&DAT_02130724,(uint)incoming_edx);
        DAT_020d9d44 = 0xffffffff;
      }
      else {
        uVar5 = recovered_202ac50(*(int *)(iVar1 + 0x34),(uint)incoming_edx);
        if ((char)uVar5 == '\0') {
          pf_varargs_202ce90__4_(str_020d5971,(uint)(incoming_ecx + 0x78));
          incoming_ecx[2] = '\x01';
          return;
        }
      }
    }
    *puVar9 = (uint)incoming_ecx;
    uVar2 = DAT_020de168;
    *(undefined4 *)(incoming_ecx + 0x18) = uVar2;
    *(int *)(incoming_ecx + 0x1c) = *(int *)(incoming_ecx + 0x1c) + 1;
    local_14 = incoming_ecx;
    uVar5 = recovered_20081a0();
    iVar6 = recovered_2019420(puVar9 + 1);
    if (iVar6 != 0) {
      uVar8 = recovered_20081a0();
      uVar7 = 1;
      if (uVar8 - uVar5 != 0) {
        uVar7 = uVar8 - uVar5;
      }
      uVar5 = 0xffffffff;
      if (!CARRY4(uVar7,*(uint *)(local_14 + 0x20))) {
        uVar5 = uVar7 + *(uint *)(local_14 + 0x20);
      }
      *(uint *)(local_14 + 0x20) = uVar5;
      if (*(int *)(local_14 + 0x74) != 0) {
        uVar2 = DAT_020d9d44;
        *(undefined4 *)(*(int *)(local_14 + 0x74) + 0x34) = uVar2;
      }
      if (iVar1 != 0) {
        if (local_18 < 0) {
          recovered_20539f0(&DAT_02130724,uVar5);
          DAT_020d9d44 = 0xffffffff;
        }
        else {
          recovered_202ac50(local_18,uVar5);
        }
      }
LAB_020ba2d2:
      *puVar9 = 0;
      return;
    }
    if (local_14[1] != '\0') {
      incoming_ecx = local_14;
      goto LAB_020ba339;
    }
  }
  else {
    puVar9 = incoming_edx;
    if (incoming_edx[0x11] == 0) goto LAB_020ba1fb;
LAB_020ba18f:
    *puVar9 = (uint)incoming_ecx;
    uVar2 = DAT_020de168;
    *(undefined4 *)(incoming_ecx + 0x18) = uVar2;
    *(int *)(incoming_ecx + 0x1c) = *(int *)(incoming_ecx + 0x1c) + 1;
    uVar5 = recovered_20081a0();
    iVar6 = recovered_2019420(puVar9 + 1);
    if (iVar6 != 0) {
      uVar7 = recovered_20081a0();
      if (uVar5 <= uVar7) {
        *(uint *)(incoming_ecx + 0x20) = *(int *)(incoming_ecx + 0x20) + (uVar7 - uVar5);
      }
      goto LAB_020ba2d2;
    }
    if (incoming_ecx[1] == '\0') {
      incoming_ecx[1] = '\x01';
      recovered_2001e00(local_44,0,0x2c);
      local_1c = 0;
      if (*(int *)(incoming_ecx + 100) != 0) {
        local_1c = *(int *)(incoming_ecx + 100) + *(int *)(incoming_ecx + 0x68) & 0xfffffff0;
      }
      goto LAB_020ba3a8;
    }
LAB_020ba339:
    recovered_2019450(incoming_ecx + 0x24,1);
  }
  pcVar3 = local_14;
  local_14[1] = '\x01';
  recovered_2030300(str_020d598b,(char)*(undefined4 *)(local_14 + 0x10));
  recovered_2001e00(local_44,0,0x2c);
  local_1c = 0;
  if (*(int *)(pcVar3 + 100) != 0) {
    local_1c = *(int *)(pcVar3 + 100) + *(int *)(local_14 + 0x68) & 0xfffffff0;
  }
LAB_020ba3a8:
  local_20 = recovered_20ba6b0;
  local_24 = 0;
  recovered_2019410(local_44);
  while( true ) {
    iVar6 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
    if (iVar6 == 0) break;
    do {
      iVar6 = DAT_021468f8;
    } while (iVar6 != 0);
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  if ((*extraout_ECX == '\x01') && (extraout_ECX[3] == '\x01')) {
    extraout_ECX[3] = '\0';
    if ((*(int *)(extraout_ECX + 0x74) == 0) && (iVar6 = DAT_022452c4, iVar6 != 0)) {
      uVar2 = DAT_022452c4;
      iVar6 = DAT_022452c4;
      DAT_022452c4 = iVar6 + -1;
      uVar2 = DAT_022452c4;
      uVar2 = DAT_022452c4;
      uVar2 = DAT_022452c4;
    }
    if ((extraout_DL != '\0') && (iVar6 = DAT_022452d0, iVar6 != 0)) {
      uVar2 = DAT_022452d0;
      iVar6 = DAT_022452d0;
      DAT_022452d0 = iVar6 + -1;
      uVar2 = DAT_022452d0;
      uVar2 = DAT_022452d0;
      uVar2 = DAT_022452d0;
    }
    if (extraout_ECX[2] == '\x01') {
      uVar4 = recovered_2006ec0();
      if (CONCAT31(extraout_var_00,uVar4) == 0) {
        recovered_205a9f0(extraout_ECX);
      }
    }
    else {
      iVar6 = DAT_022452ac;
      *(int *)(extraout_ECX + 8) = iVar6 + 1;
      iVar6 = DAT_022452b0;
      DAT_022452b0 = iVar6 + 1;
      *(int *)(extraout_ECX + 0xc) = iVar6 + 1;
      if (*(int *)(extraout_ECX + 0x74) == 0) {
        uVar2 = DAT_022452a8;
        iVar6 = DAT_022452a8;
        DAT_022452a8 = iVar6 + 1;
        uVar2 = DAT_022452a8;
        uVar2 = DAT_022452a8;
        uVar2 = DAT_022452a8;
        recovered_2006f80();
      }
    }
  }
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  DAT_021468f8 = 0;
  return;
}
#undef DAT_020d9d44
#undef DAT_020de168
#undef DAT_02130724
#undef DAT_021468f8
#undef DAT_0214b320
#undef DAT_0214b364
#undef DAT_022452a8
#undef DAT_022452ac
#undef DAT_022452b0
#undef DAT_022452c4
#undef DAT_022452d0
#undef str_020d5971
#undef str_020d598b
#undef local_44
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
