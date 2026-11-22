#include "functions.h"



#undef DAT_020c5084
#undef DAT_020c531e
#undef DAT_020c5359
#undef DAT_020cc533
#undef DAT_020d9d6a
#undef DAT_020d9d6b
#undef DAT_020d9d6c
#undef DAT_020d9db4
#undef DAT_020d9f05
#undef str_020cc51e
#undef str_020cc527
#undef str_020cc535
#undef str_020d9e14
#undef str_020de0ec
#undef format

#undef DAT_020d9d44
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#undef DAT_020d9d48
#define DAT_020d9d48 (*(uint32_t volatile *)(0x20d9d48U))
#undef DAT_020d9d4c
#define DAT_020d9d4c (*(uint32_t volatile *)(0x20d9d4cU))
#undef DAT_020d9d65
#define DAT_020d9d65 (*(uint8_t volatile *)(0x20d9d65U))
#undef DAT_020de164
#define DAT_020de164 (*(uint32_t volatile *)(0x20de164U))
#undef DAT_02130724
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#undef DAT_021468f8
#define DAT_021468f8 (*(uint32_t volatile *)(0x21468f8U))
#undef DAT_0214690c
#define DAT_0214690c (*(uint32_t volatile *)(0x214690cU))
#undef DAT_0214b320
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#undef DAT_0214b364
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#undef str_020c52de
#define str_020c52de (*(char (*)[1])(0x20c52deU))
#undef str_020c5303
#define str_020c5303 (*(char (*)[1])(0x20c5303U))
#undef str_020c5c07
#define str_020c5c07 (*(char (*)[1])(0x20c5c07U))
#define local_7ec8 (*(undefined1 (*)[496])(frame + 24))
#define local_7cd8 (*(int (*)[7940])(frame + 520))
#define local_c8 (*(char (*)[160])(frame + 32280))
#define local_28 (*(undefined1 (*)[12])(frame + 32440))
#define local_1c (*(uint *)(frame + 32452))
#define local_18 (*(uint *)(frame + 32456))
#define local_11 (*(char *)(frame + 32463))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x202ca80
 */

undefined4 recovered_202ca80(int param_1)

{
  unsigned char frame[32512] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  char *vararg0;
  undefined4 uVar6;
  uchar in_CL;
  uint *puVar7;
  uint incoming_edx;
  int *piVar8;
  uint uVar9;
  int incoming_ecx;
  int iVar10;

  recovered_2026f10();
  if (param_1 != 1) {
    if (param_1 == 0) {
      DAT_020d9d4c = 0;
      return 1;
    }
    return 0;
  }
  local_c8[0] = '\0';
  uVar5 = DAT_020d9d48;
  if ((uVar5 == 0) || (bVar2 = DAT_020d9d65, (bVar2 & 1) != 0)) {
    local_c8[0] = '\0';
    local_1c = uVar5;
    if (uVar5 == 0) {
LAB_0202cb66:
      DAT_020d9d48 = 0;
      DAT_020d9d65 = 0;
      local_18 = 0;
      iVar10 = DAT_020d9d44;
      if (iVar10 < 0) {
LAB_0202cbba:
        recovered_2001e00(local_7ec8,0,0x7e00);
        uVar5 = recovered_202a350(local_7ec8,0x40,&local_18);
        piVar8 = &DAT_020d9d44;
        if (uVar5 != 0) {
          if (local_18 < 0x41) {
            if (local_18 == 0) goto LAB_0202cc54;
          }
          else {
            local_18 = 0x40;
          }
          uVar9 = 0;
          piVar8 = local_7cd8;
          uVar5 = local_18;
          do {
            iVar10 = *piVar8;
            if (-1 < iVar10) {
              recovered_2001e00(local_28,0,0xc);
              uVar5 = recovered_202ad00(iVar10,str_020c5c07,local_28);
              if (uVar5 != 0) goto LAB_0202cc54;
              uVar5 = local_18;
            }
            uVar9 = uVar9 + 1;
            piVar8 = piVar8 + 0x7e;
          } while (uVar9 < uVar5);
          piVar8 = &DAT_020d9d44;
        }
      }
      else {
        recovered_2001e00(local_7ec8,0,0xc);
        uVar5 = recovered_202ad00(iVar10,str_020c5c07,local_7ec8);
        piVar8 = &DAT_020d9d44;
        if (uVar5 == 0) goto LAB_0202cbba;
      }
LAB_0202cc54:
      iVar10 = *piVar8;
      iVar1 = DAT_020d9d44;
      if (iVar10 < 0) {
        incoming_ecx = -1;
LAB_0202cc83:
        local_11 = iVar10 < 0;
        bVar3 = recovered_2053c90(0x20c5bfd,iVar1,local_c8,&local_1c);
        if ((bVar3) && (local_1c != 0)) {
          if (incoming_ecx != iVar10 && local_11 == '\0') {
            if (incoming_ecx < 0) {
              recovered_20539f0(&DAT_02130724,incoming_edx);
              DAT_020d9d44 = 0xffffffff;
            }
            else {
              uVar5 = recovered_202ac50(incoming_ecx,incoming_edx);
              if ((char)uVar5 == '\0') goto LAB_0202ce4f;
            }
          }
          goto LAB_0202cd13;
        }
        if (incoming_ecx != iVar10 && local_11 == '\0') {
          if (incoming_ecx < 0) {
            recovered_20539f0(&DAT_02130724,incoming_edx);
            DAT_020d9d44 = 0xffffffff;
          }
          else {
            recovered_202ac50(incoming_ecx,incoming_edx);
          }
        }
      }
      else {
        incoming_ecx = iVar10;
        if ((iVar1 == iVar10) ||
           (uVar5 = recovered_202ac50(iVar10,iVar10), incoming_ecx = iVar1, (char)uVar5 != '\0'))
        goto LAB_0202cc83;
      }
    }
    else {
      while( true ) {
        iVar10 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
        if (iVar10 == 0) break;
        do {
          iVar10 = DAT_021468f8;
        } while (iVar10 != 0);
      }
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      uVar9 = 0;
      bVar3 = true;
      puVar7 = &DAT_0214690c;
      do {
        if (((char)puVar7[-4] == '\x01') && (*puVar7 == uVar5)) break;
        bVar3 = uVar9 < 0x1f;
        uVar9 = uVar9 + 1;
        puVar7 = puVar7 + 0x2e;
      } while (uVar9 != 0x20);
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      DAT_021468f8 = 0;
      if (!bVar3) goto LAB_0202cb66;
LAB_0202cd13:
      iVar10 = 0;
      do {
        iVar1 = DAT_020d9d48;
        if (((iVar1 != 0) && (bVar2 = DAT_020d9d65, (bVar2 & 1) == 0)) || (local_1c == 0)) break;
        while( true ) {
          iVar1 = __atomic_exchange_n(&(DAT_021468f8),1,__ATOMIC_SEQ_CST);
          if (iVar1 == 0) break;
          do {
            iVar1 = DAT_021468f8;
          } while (iVar1 != 0);
        }
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        uVar5 = 0;
        bVar3 = true;
        puVar7 = &DAT_0214690c;
        do {
          if (((char)puVar7[-4] == '\x01') && (*puVar7 == local_1c)) break;
          bVar3 = uVar5 < 0x1f;
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 0x2e;
        } while (uVar5 != 0x20);
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_021468f8 = 0;
        if (!bVar3) break;
        uVar4 = recovered_2006ec0();
        uVar5 = 0;
        if (CONCAT31(extraout_var,uVar4) < 0x20) {
          uVar5 = CONCAT31(extraout_var,uVar4);
        }
        (&DAT_0214b364)[uVar5 * 0x12] = uVar5;
        if ((&DAT_0214b320)[uVar5 * 0x12] == 0) {
          uVar6 = DAT_020de164;
          recovered_2039a70(DAT_020de164);
        }
        else {
          recovered_2039960(0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != 0x40000);
      iVar10 = DAT_020d9d48;
      if ((iVar10 != 0) && (bVar2 = DAT_020d9d65, (bVar2 & 1) == 0)) goto LAB_0202ce39;
    }
LAB_0202ce4f:
    vararg0 = str_020c5303;
    if (local_c8[0] != '\0') {
      vararg0 = local_c8;
    }
    pf_varargs_202ce90__4_(str_020c52de,(uint)vararg0);
    recovered_2027720(in_CL);
    uVar6 = 0;
  }
  else {
LAB_0202ce39:
    DAT_020d9d4c = 1;
    recovered_202cf30();
    uVar6 = 1;
  }
  return uVar6;
}
