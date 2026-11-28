/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000141c
#define DAT_1000141c (*(uint32_t *)(0x1000141cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001410
 */

void * recovered_10001410(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x4ab8U));
}

#undef DAT_1000141c

#undef DAT_100018c0
#define DAT_100018c0 (*(uint64_t *)(0x100018c0U))
#undef DAT_100018c8
#define DAT_100018c8 (*(uint64_t *)(0x100018c8U))
#undef DAT_100018d0
#define DAT_100018d0 (*(uint64_t *)(0x100018d0U))
#undef DAT_100018d8
#define DAT_100018d8 (*(uint64_t *)(0x100018d8U))
#undef DAT_10001b98
#define DAT_10001b98 (*(int *)(0x10001b98U))
#undef DAT_10001b9c
#define DAT_10001b9c (*(uint32_t *)(0x10001b9cU))
#undef DAT_10001ba0
#define DAT_10001ba0 (*(uint64_t *)(0x10001ba0U))
#undef DAT_10001ba8
#define DAT_10001ba8 (*(uint64_t *)(0x10001ba8U))
#undef DAT_10001bb0
#define DAT_10001bb0 (*(int *)(0x10001bb0U))
#undef DAT_10001bb4
#define DAT_10001bb4 (*(int *)(0x10001bb4U))
#undef DAT_10001bb8
#define DAT_10001bb8 (*(int *)(0x10001bb8U))
#undef DAT_10001bbc
#define DAT_10001bbc (*(int *)(0x10001bbcU))
#undef DAT_10001bc0
#define DAT_10001bc0 (*(int *)(0x10001bc0U))
#undef DAT_10001bc4
#define DAT_10001bc4 (*(int *)(0x10001bc4U))
#undef DAT_10001bc8
#define DAT_10001bc8 (*(int *)(0x10001bc8U))
#undef DAT_10001bcc
#define DAT_10001bcc (*(int *)(0x10001bccU))
#undef DAT_10001bd0
#define DAT_10001bd0 (*(int *)(0x10001bd0U))
#undef DAT_10001bd4
#define DAT_10001bd4 (*(int *)(0x10001bd4U))
#undef DAT_10001bd8
#define DAT_10001bd8 (*(int *)(0x10001bd8U))
#undef DAT_10001bdc
#define DAT_10001bdc (*(int *)(0x10001bdcU))
#undef DAT_10001be0
#define DAT_10001be0 (*(int *)(0x10001be0U))
#undef DAT_10001be4
#define DAT_10001be4 (*(int *)(0x10001be4U))
#undef DAT_10001be8
#define DAT_10001be8 (*(int *)(0x10001be8U))
#undef DAT_10001bec
#define DAT_10001bec (*(int *)(0x10001becU))
#undef DAT_10001bf0
#define DAT_10001bf0 (*(int *)(0x10001bf0U))
#undef DAT_10001bf4
#define DAT_10001bf4 (*(int *)(0x10001bf4U))
#undef DAT_10001bf8
#define DAT_10001bf8 (*(int *)(0x10001bf8U))
#undef DAT_10001bfc
#define DAT_10001bfc (*(int *)(0x10001bfcU))
#undef DAT_10001c00
#define DAT_10001c00 (*(int *)(0x10001c00U))
#undef DAT_10001c04
#define DAT_10001c04 (*(int *)(0x10001c04U))
#undef DAT_10001c08
#define DAT_10001c08 (*(int *)(0x10001c08U))
#undef DAT_10001c0c
#define DAT_10001c0c (*(int *)(0x10001c0cU))
#undef DAT_10001c10
#define DAT_10001c10 (*(int *)(0x10001c10U))
#undef DAT_10001c14
#define DAT_10001c14 (*(int *)(0x10001c14U))
#undef DAT_10001c18
#define DAT_10001c18 (*(int *)(0x10001c18U))
#undef DAT_10001c1c
#define DAT_10001c1c (*(int *)(0x10001c1cU))
#undef DAT_10001c20
#define DAT_10001c20 (*(int *)(0x10001c20U))
#undef DAT_10001c24
#define DAT_10001c24 (*(int *)(0x10001c24U))
#undef DAT_10001c28
#define DAT_10001c28 (*(int *)(0x10001c28U))
#undef DAT_10001c2c
#define DAT_10001c2c (*(int *)(0x10001c2cU))
#undef DAT_10001c30
#define DAT_10001c30 (*(int *)(0x10001c30U))
#undef DAT_10001c34
#define DAT_10001c34 (*(int *)(0x10001c34U))
#undef DAT_10001c38
#define DAT_10001c38 (*(int *)(0x10001c38U))
#undef DAT_10001c3c
#define DAT_10001c3c (*(int *)(0x10001c3cU))
#undef DAT_10001c40
#define DAT_10001c40 (*(int *)(0x10001c40U))
#undef DAT_10001c44
#define DAT_10001c44 (*(int *)(0x10001c44U))
#undef DAT_10001c48
#define DAT_10001c48 (*(int *)(0x10001c48U))
#undef DAT_10001c4c
#define DAT_10001c4c (*(int *)(0x10001c4cU))
#undef DAT_10001c50
#define DAT_10001c50 (*(int *)(0x10001c50U))
#undef DAT_10001c54
#define DAT_10001c54 (*(int *)(0x10001c54U))
#undef DAT_10001c58
#define DAT_10001c58 (*(int *)(0x10001c58U))
#undef DAT_10001c5c
#define DAT_10001c5c (*(int *)(0x10001c5cU))
#undef DAT_10001c60
#define DAT_10001c60 (*(int *)(0x10001c60U))
#undef DAT_10001c64
#define DAT_10001c64 (*(int *)(0x10001c64U))
#define auStack_6ec (*(undefined1 (*)[1772])(pf_stack_frame + 20))
#define auStack_3ec (*(undefined1 (*)[1004])(pf_stack_frame + 788))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 1568))
#define auStack_d8 (*(undefined1 (*)[216])(pf_stack_frame + 1576))
#define local_ec (*(int *)(pf_stack_frame + 1556))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 1640))
#define local_e8 (*(undefined8 *)(pf_stack_frame + 1560))
#define local_58 (*(undefined4 *)(pf_stack_frame + 1704))
#define local_54 (*(int *)(pf_stack_frame + 1708))
#define local_50 (*(uint *)(pf_stack_frame + 1712))
#define local_4c (*(uint *)(pf_stack_frame + 1716))
#define local_48 (*(int *)(pf_stack_frame + 1720))
#define local_44 (*(uint *)(pf_stack_frame + 1724))
#define local_40 (*(int *)(pf_stack_frame + 1728))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001420
 */

uint recovered_10001420(void *api)

{
  unsigned char pf_stack_frame[1824] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  code *pcVar13;
  undefined4 *puVar14;

  iVar3 = (*(uint32_t *)(uint32_t[]){0x2b94ULL});
  iVar7 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  local_ec = 0;
  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) {
    return 0;
  }
  if (*(int *)((int)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((int)api + 8) < 0xf8) {
    return 0;
  }
  puVar14 = (undefined4 *)(((uintptr_t)pf_module_state + 0xad0U));
  recovered_10001c68((undefined1 *)puVar14,200);
  recovered_10001c68((undefined1 *)&local_58,0x34);
  *puVar14 = api;
  for (iVar5 = 0; uVar2 = (*(uint64_t *)(uint64_t[]){0x3ffff00000007ULL}), iVar5 != 0x30; iVar5 = iVar5 + 1) {
    *(undefined1 *)((int)puVar14 + iVar5 + 0x94) = 0;
  }
  *(undefined8 *)(((uintptr_t)pf_module_state+0xb64U)) = (*(uint64_t *)(uint64_t[]){0x100000030ULL});
  *(undefined8 *)(((uintptr_t)pf_module_state+0xb6cU)) = uVar2;
  uVar2 = (*(uint64_t *)(uint64_t[]){0x493e000000000ULL});
  *(undefined8 *)(((uintptr_t)pf_module_state+0xb74U)) = (*(uint64_t *)(uint64_t[]){0x3ffff00000000ULL});
  *(undefined8 *)(((uintptr_t)pf_module_state+0xb7cU)) = uVar2;
  *(undefined4 *)(((uintptr_t)pf_module_state+0xb84U)) = (*(uint32_t *)(uint32_t[]){0x16e360ULL});
  iVar5 = recovered_10001c80(api,(int)&local_58);
  if ((iVar5 != 0) && (bVar4 = recovered_10001cc8((int)&local_58), bVar4)) {
    uVar9 = 0x2001;
    uVar12 = 0xffffe27f;
    uVar6 = local_48 - 0x2001;
    uVar1 = uVar6;
    if (0xffffe27e < uVar6) {
      uVar12 = 0xffffe1df;
      uVar9 = local_44 - 0x2001;
      uVar1 = local_44;
    }
    if ((0xffffe27e < uVar6 && uVar12 <= uVar9) && ((uint)(local_48 << 2) <= local_4c)) {
      uVar9 = (uint)((ulonglong)uVar1 * (ulonglong)local_4c);
      if ((uint)(uVar9 <= local_50) <= (uint)-(int)((ulonglong)uVar1 * (ulonglong)local_4c >> 0x20))
      {
        iVar7 = ((uintptr_t)pf_module_state + 0x58U);
        goto LAB_10001544;
      }
      uVar12 = recovered_10001e54(api,0xae01000,0,0x1000,(undefined4 *)(((uintptr_t)pf_module_state+0xb44U)));
      if (uVar12 != 0) {
        bVar4 = true;
        if (*(int *)api == iVar7) {
          if (*(uint *)((int)api + 8) < 0xc0) {
            if (0x6b < *(uint *)((int)api + 8)) {
LAB_100015f4:
              pcVar13 = *(code **)((int)api + 0x68);
              if (pcVar13 != (code *)0x0) goto LAB_10001600;
            }
          }
          else {
            pcVar13 = *(code **)((int)api + 0xbc);
            if (pcVar13 == (code *)0x0) goto LAB_100015f4;
LAB_10001600:
            iVar5 = (*pcVar13)(*(undefined4 *)(((uintptr_t)pf_module_state+0xb44U)),4,&local_ec);
            bVar4 = iVar5 == 0;
          }
        }
        if ((!bVar4) && (1 < local_ec + 1U)) {
          uVar12 = recovered_10001e54(api,local_58,local_54,local_50,
                                      (undefined4 *)(((uintptr_t)pf_module_state+0xb3cU)));
          if (uVar12 == 0) {
            iVar7 = ((uintptr_t)pf_module_state + 0xa9U);
            goto LAB_100016b8;
          }
          recovered_10003570(((uintptr_t)pf_module_state+0xad4U),&local_58,0x34);
          *(int *)(((uintptr_t)pf_module_state+0xb50U)) = local_ec;
          if (((*(int *)api == iVar7) && (0x37 < *(uint *)((int)api + 8))) &&
             (*(code **)((int)api + 0x34) != (code *)0x0)) {
            iVar5 = (**(code **)((int)api + 0x34))(uVar9);
            *(int *)(((uintptr_t)pf_module_state+0xb48U)) = iVar5;
            if (iVar5 == 0) goto LAB_100016d0;
            *(uint *)(((uintptr_t)pf_module_state+0xb4cU)) = uVar9;
          }
          else {
            *(undefined4 *)(((uintptr_t)pf_module_state+0xb48U)) = 0;
LAB_100016d0:
            recovered_10001d6c(api,((uintptr_t)pf_module_state + 0xcdU));
          }
          if ((*(code **)((int)api + 0x1c) != (code *)0x0) &&
             (iVar5 = (**(code **)((int)api + 0x1c))(local_48,local_44,0x20), iVar5 != 0)) {
            iVar5 = recovered_10001c80(api,((uintptr_t)pf_module_state+0xb08U));
            if ((iVar5 != 0) && (bVar4 = recovered_10001cc8(((uintptr_t)pf_module_state+0xb08U)), bVar4)) {
              if (*(int *)(((uintptr_t)pf_module_state+0xb0cU)) == 0) {
                *(undefined4 *)(((uintptr_t)pf_module_state+0xb40U)) = *(undefined4 *)(((uintptr_t)pf_module_state+0xb08U));
                iVar5 = recovered_10001f24(0,0,*(uint *)(((uintptr_t)pf_module_state+0xb18U)),
                                           *(uint *)(((uintptr_t)pf_module_state+0xb1cU)));
                if (iVar5 != 0) {
                  if (((*(int *)api != iVar7) || (*(uint *)((int)api + 8) < 0xd0)) ||
                     ((*(code **)((int)api + 0xcc) == (code *)0x0 ||
                      (iVar5 = (**(code **)((int)api + 0xcc))(((uintptr_t)&recovered_10001f24)), iVar5 == 0
                      )))) {
                    iVar7 = ((uintptr_t)pf_module_state + 0x188U);
                    goto LAB_100016b8;
                  }
                  if ((((*(int *)api != iVar7) || (*(uint *)((int)api + 8) < 0xd8)) ||
                      (*(code **)((int)api + 0xd4) == (code *)0x0)) ||
                     (iVar5 = (**(code **)((int)api + 0xd4))(), iVar5 == 0)) {
                    iVar7 = ((uintptr_t)pf_module_state + 0x1aaU);
                    goto LAB_100016b8;
                  }
                  if (((*(int *)api == iVar7) && (0xb7 < *(uint *)((int)api + 8))) &&
                     (*(code **)((int)api + 0xb4) != (code *)0x0)) {
                    (**(code **)((int)api + 0xb4))(1);
                  }
                  recovered_10001c68((undefined1 *)&local_e8,0x90);
                  local_e8 = (*(uint64_t *)(uint64_t[]){0xc00000090ULL});
                  uStack_e0 = (*(uint64_t *)(uint64_t[]){0x10000000007ULL});
                  recovered_10002154(auStack_d8,0x40,(char *)(((uintptr_t)pf_module_state + 0x1d6U)));
                  recovered_10002154(auStack_98,0x40,(char *)(((uintptr_t)pf_module_state + 0x1f3U)));
                  if (((*(int *)api == iVar7) && (199 < *(uint *)((int)api + 8))) &&
                     (*(code **)((int)api + 0xc4) != (code *)0x0)) {
                    iVar7 = (**(code **)((int)api + 0xc4))(&local_e8,((uintptr_t)&recovered_10002168));
                    *(int *)(((uintptr_t)pf_module_state+0xb60U)) = iVar7;
                    if (iVar7 != 0) goto LAB_10001904;
                  }
                  else {
                    *(undefined4 *)(((uintptr_t)pf_module_state+0xb60U)) = 0;
                  }
                  recovered_10001d6c(api,((uintptr_t)pf_module_state + 0x209U));
LAB_10001904:
                  pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x287U));
                  if (*(int *)(((uintptr_t)pf_module_state+0xb48U)) == 0) {
                    pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x2ddU));
                  }
                  uVar9 = 6;
                  iVar7 = ((uintptr_t)&recovered_10002888);
                  if (*(int *)(((uintptr_t)pf_module_state+0xb48U)) == 0) {
                    uVar9 = 2;
                    uVar10 = 0;
                    iVar7 = 0;
                  }
                  else {
                    uVar10 = 6;
                  }
                  iVar7 = recovered_100025dc(8,uVar9,uVar10,((uintptr_t)&recovered_100026d8),iVar7,
                                             (char *)(((uintptr_t)pf_module_state + 0x24eU)),
                                             (char *)(((uintptr_t)pf_module_state + 0x264U)),
                                             (char *)(((uintptr_t)pf_module_state + 0x271U)),pcVar8);
                  if (iVar7 == 0) {
                    recovered_10001d6c(api,((uintptr_t)pf_module_state + 0x330U));
                  }
                  pcVar11 = (char *)(((uintptr_t)pf_module_state + 0x3c0U));
                  pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x422U));
                  if (*(int *)(((uintptr_t)pf_module_state+0xb60U)) == 0) {
                    pcVar11 = (char *)(((uintptr_t)pf_module_state + 0x3f0U));
                    pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x499U));
                  }
                  uVar9 = 0x1a;
                  if (*(int *)(((uintptr_t)pf_module_state+0xb60U)) == 0) {
                    uVar9 = 8;
                  }
                  iVar7 = recovered_100025dc(2,uVar9,0,((uintptr_t)&recovered_100029fc),0,
                                             (char *)(((uintptr_t)pf_module_state + 0x37dU)),
                                             (char *)(((uintptr_t)pf_module_state + 0x3a5U)),pcVar11,pcVar8);
                  if (iVar7 == 0) {
                    recovered_10001d6c(api,((uintptr_t)pf_module_state + 0x54eU));
                  }
                  recovered_10002154(auStack_3ec,0x300,(char *)(((uintptr_t)pf_module_state + 0x597U)));
                  recovered_10002b14((int)auStack_3ec,local_48);
                  recovered_10002bbc((int)auStack_3ec,0x300,(char *)(((uintptr_t)pf_module_state + 0x598U)));
                  recovered_10002b14((int)auStack_3ec,local_44);
                  recovered_10002bbc((int)auStack_3ec,0x300,(char *)(((uintptr_t)pf_module_state + 0x59cU)));
                  recovered_10002b14((int)auStack_3ec,local_40);
                  recovered_10002bbc((int)auStack_3ec,0x300,(char *)(((uintptr_t)pf_module_state + 0x59fU)));
                  if ((*(code **)((int)api + 0xc) == (code *)0x0) ||
                     (iVar7 = (**(code **)((int)api + 0xc))
                                        (((uintptr_t)pf_module_state + 0x5abU),((uintptr_t)pf_module_state + 0x24eU),
                                         auStack_3ec), iVar7 == 0)) {
                    recovered_10001d6c(api,((uintptr_t)pf_module_state + 0x5cbU));
                  }
                  recovered_10002154(auStack_6ec,0x300,(char *)(((uintptr_t)pf_module_state + 0x5fcU)));
                  recovered_10002b14((int)auStack_6ec,9);
                  recovered_10002bbc((int)auStack_6ec,0x300,(char *)(((uintptr_t)pf_module_state + 0x64fU)));
                  recovered_10002b14((int)auStack_6ec,*(int *)(((uintptr_t)pf_module_state+0xb74U)));
                  recovered_10002bbc((int)auStack_6ec,0x300,(char *)(((uintptr_t)pf_module_state + 0x666U)));
                  recovered_10002b14((int)auStack_6ec,*(int *)(((uintptr_t)pf_module_state+0xb78U)));
                  recovered_10002bbc((int)auStack_6ec,0x300,(char *)(((uintptr_t)pf_module_state + 0x677U)));
                  if ((*(code **)((int)api + 0xc) == (code *)0x0) ||
                     (iVar7 = (**(code **)((int)api + 0xc))
                                        (((uintptr_t)pf_module_state + 0x708U),((uintptr_t)pf_module_state + 0x72bU),
                                         auStack_6ec), iVar7 == 0)) {
                    recovered_10001d6c(api,((uintptr_t)pf_module_state + 0x74fU));
                    return 1;
                  }
                  return 1;
                }
                iVar7 = ((uintptr_t)pf_module_state + 0x163U);
                goto LAB_100016b8;
              }
              iVar7 = ((uintptr_t)pf_module_state + 0x137U);
              goto LAB_10001544;
            }
          }
          iVar7 = ((uintptr_t)pf_module_state + 0x115U);
          goto LAB_10001544;
        }
      }
      iVar7 = ((uintptr_t)pf_module_state + 0x83U);
LAB_100016b8:
      recovered_10001d6c(api,iVar7);
      recovered_10001dac();
      return 0;
    }
  }
  iVar7 = ((uintptr_t)pf_module_state + 0x30U);
LAB_10001544:
  recovered_10001d6c(api,iVar7);
  recovered_10001dac();
  return 0;
}

#undef DAT_100018c0
#undef DAT_100018c8
#undef DAT_100018d0
#undef DAT_100018d8
#undef DAT_10001b98
#undef DAT_10001b9c
#undef DAT_10001ba0
#undef DAT_10001ba8
#undef DAT_10001bb0
#undef DAT_10001bb4
#undef DAT_10001bb8
#undef DAT_10001bbc
#undef DAT_10001bc0
#undef DAT_10001bc4
#undef DAT_10001bc8
#undef DAT_10001bcc
#undef DAT_10001bd0
#undef DAT_10001bd4
#undef DAT_10001bd8
#undef DAT_10001bdc
#undef DAT_10001be0
#undef DAT_10001be4
#undef DAT_10001be8
#undef DAT_10001bec
#undef DAT_10001bf0
#undef DAT_10001bf4
#undef DAT_10001bf8
#undef DAT_10001bfc
#undef DAT_10001c00
#undef DAT_10001c04
#undef DAT_10001c08
#undef DAT_10001c0c
#undef DAT_10001c10
#undef DAT_10001c14
#undef DAT_10001c18
#undef DAT_10001c1c
#undef DAT_10001c20
#undef DAT_10001c24
#undef DAT_10001c28
#undef DAT_10001c2c
#undef DAT_10001c30
#undef DAT_10001c34
#undef DAT_10001c38
#undef DAT_10001c3c
#undef DAT_10001c40
#undef DAT_10001c44
#undef DAT_10001c48
#undef DAT_10001c4c
#undef DAT_10001c50
#undef DAT_10001c54
#undef DAT_10001c58
#undef DAT_10001c5c
#undef DAT_10001c60
#undef DAT_10001c64
#undef auStack_6ec
#undef auStack_3ec
#undef uStack_e0
#undef auStack_d8
#undef local_ec
#undef auStack_98
#undef local_e8
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c68
 */

void recovered_10001c68(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_10001cc4
#define DAT_10001cc4 (*(int *)(0x10001cc4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c80
 */

undefined4 recovered_10001c80(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if (((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
     (UNRECOVERED_JUMPTABLE = (code *)param_1[2], (code *)0x43 < UNRECOVERED_JUMPTABLE)) {
    if (param_2 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x10];
    }
    if (param_2 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10001cc4

#undef DAT_10001d68
#define DAT_10001d68 (*(uint *)(0x10001d68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc8
 */

bool recovered_10001cc8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    bVar5 = iVar2 == 0x20;
    if (bVar5) {
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    if (bVar5 && iVar2 == 8) {
      iVar2 = *(int *)(param_1 + 0x24);
      bVar5 = iVar2 == 8;
      if (bVar5) {
        iVar2 = *(int *)(param_1 + 0x2c);
      }
      if ((((bVar5 && iVar2 == 8) && (uVar4 = *(uint *)(param_1 + 0x20), uVar4 < 0x11)) &&
          (((*(uint32_t *)(uint32_t[]){0x10101ULL}) & 1 << (uVar4 & 0xff)) != 0)) &&
         (uVar3 = *(uint *)(param_1 + 0x28), uVar3 < 0x11)) {
        if (((*(uint32_t *)(uint32_t[]){0x10101ULL}) & 1 << (uVar3 & 0xff)) == 0) {
          return false;
        }
        uVar1 = *(uint *)(param_1 + 0x30);
        if ((uVar1 < 0x11) && (((*(uint32_t *)(uint32_t[]){0x10101ULL}) & 1 << (uVar1 & 0xff)) != 0 && uVar4 != uVar3)) {
          return uVar4 != uVar1 && uVar3 != uVar1;
        }
      }
    }
  }
  return false;
}

#undef DAT_10001d68

#undef DAT_10001da8
#define DAT_10001da8 (*(int *)(0x10001da8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d6c
 */

void recovered_10001d6c(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x2c) {
      return;
    }
    if ((code *)param_1[10] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[10])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_10001da8

#undef DAT_10001e44
#define DAT_10001e44 (*(int *)(0x10001e44U))
#undef DAT_10001e48
#define DAT_10001e48 (*(int *)(0x10001e48U))
#undef DAT_10001e4c
#define DAT_10001e4c (*(uint32_t *)(0x10001e4cU))
#undef DAT_10001e50
#define DAT_10001e50 (*(int *)(0x10001e50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dac
 */

void recovered_10001dac(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  piVar3 = *(int **)(((uintptr_t)pf_module_state + 0xad0U));
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(((uintptr_t)pf_module_state + 0xb48U));
    if (((*piVar3 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) && (0xdb < (uint)piVar3[2])) &&
       ((code *)piVar3[0x36] != (code *)0x0)) {
      (*(code *)piVar3[0x36])();
    }
    if (((iVar2 != 0) && (*piVar3 == iVar1)) &&
       ((0x3b < (uint)piVar3[2] && ((code *)piVar3[0xe] != (code *)0x0)))) {
      (*(code *)piVar3[0xe])(iVar2);
    }
  }
  recovered_10001c68((undefined1 *)(((uintptr_t)pf_module_state + 0xad0U)),200);
  return;
}

#undef DAT_10001e44
#undef DAT_10001e48
#undef DAT_10001e4c
#undef DAT_10001e50

#undef DAT_10001f20
#define DAT_10001f20 (*(int *)(0x10001f20U))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e54
 */

uint recovered_10001e54(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                       undefined4 *param_5)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  local_1c = 0;
  if ((param_5 != (undefined4 *)0x0 && param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((0xbb < (uint)param_1[2]) && ((code *)param_1[0x2e] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10001ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)param_1[0x2e])(param_2,param_3,param_4,param_5);
      return uVar3;
    }
    if (((param_3 == 0) && (0x67 < (uint)param_1[2])) && ((code *)param_1[0x19] != (code *)0x0)) {
      iVar2 = (*(code *)param_1[0x19])(param_2,0,param_4,&local_1c);
      bVar4 = iVar2 != 0;
      uVar1 = 0;
      if (bVar4) {
        uVar1 = local_1c;
      }
      uVar3 = (uint)bVar4;
      if (bVar4) {
        *param_5 = uVar1;
      }
    }
  }
  return uVar3;
}

#undef DAT_10001f20
#undef local_1c

#undef DAT_10002148
#define DAT_10002148 (*(int *)(0x10002148U))
#undef DAT_1000214c
#define DAT_1000214c (*(int *)(0x1000214cU))
#undef DAT_10002150
#define DAT_10002150 (*(int *)(0x10002150U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f24
 */

undefined4 recovered_10001f24(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint unaff_r5;
  uint unaff_r8;
  uint uVar9;
  bool bVar10;
  bool bVar11;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x20b8ULL});
  uVar2 = 0;
  if (param_4 != 0) {
    uVar6 = param_4;
    if (param_3 != 0) {
      uVar6 = *(uint *)(((uintptr_t)pf_module_state + 0xad0U));
      unaff_r8 = param_4;
    }
    if (param_3 != 0 && uVar6 != 0) {
      bVar10 = *(int *)(((uintptr_t)pf_module_state + 0xb40U)) != 0;
      uVar6 = 0;
      if (bVar10) {
        uVar6 = *(uint *)(((uintptr_t)pf_module_state + 0xb3cU));
      }
      if (bVar10 && uVar6 != 0) {
        uVar9 = *(uint *)(((uintptr_t)pf_module_state + 0xb18U));
        bVar11 = param_1 <= uVar9;
        bVar10 = uVar9 == param_1;
        if (bVar11 && !bVar10) {
          uVar6 = *(uint *)(((uintptr_t)pf_module_state + 0xb1cU));
          bVar11 = param_2 <= uVar6;
          bVar10 = uVar6 == param_2;
        }
        if (bVar11 && !bVar10) {
          uVar8 = *(uint *)(((uintptr_t)pf_module_state + 0xae4U));
          bVar11 = param_1 <= uVar8;
          bVar10 = uVar8 == param_1;
          if (bVar11 && !bVar10) {
            unaff_r5 = *(uint *)(((uintptr_t)pf_module_state + 0xae8U));
            bVar11 = param_2 <= unaff_r5;
            bVar10 = unaff_r5 == param_2;
          }
          if (bVar11 && !bVar10) {
            if (uVar6 - param_2 < unaff_r8) {
              unaff_r8 = uVar6 - param_2;
            }
            if (unaff_r5 - param_2 <= unaff_r8) {
              unaff_r8 = unaff_r5 - param_2;
            }
            if (uVar9 - param_1 < param_3) {
              param_3 = uVar9 - param_1;
            }
            if (uVar8 - param_1 <= param_3) {
              param_3 = uVar8 - param_1;
            }
            if (param_3 != 0 && unaff_r8 != 0) {
              bVar10 = true;
              if ((((*(int *)(((uintptr_t)pf_module_state + 0xb24U)) == *(int *)(((uintptr_t)pf_module_state + 0xaf0U))) &&
                   (*(int *)(((uintptr_t)pf_module_state + 0xb28U)) == *(int *)(((uintptr_t)pf_module_state + 0xaf4U)))) &&
                  (*(int *)(((uintptr_t)pf_module_state + 0xb2cU)) == *(int *)(((uintptr_t)pf_module_state + 0xaf8U)))) &&
                 (((*(int *)(((uintptr_t)pf_module_state + 0xb30U)) == *(int *)(((uintptr_t)pf_module_state + 0xafcU)) &&
                   (*(int *)(((uintptr_t)pf_module_state + 0xb34U)) == *(int *)(((uintptr_t)pf_module_state + 0xb00U)))) &&
                  (bVar10 = false,
                  *(int *)(((uintptr_t)pf_module_state + 0xb38U)) != *(int *)(((uintptr_t)pf_module_state + 0xb04U)))))) {
                bVar10 = true;
              }
              recovered_10002c10();
              if (*(int *)(((uintptr_t)pf_module_state+0xb5cU)) == 0) {
                iVar3 = *(int *)(((uintptr_t)pf_module_state+0xb3cU));
                iVar5 = *(int *)(((uintptr_t)pf_module_state+0xb40U));
                for (uVar6 = 0; uVar6 != unaff_r8; uVar6 = uVar6 + 1) {
                  puVar4 = (uint *)(*(int *)(((uintptr_t)pf_module_state+0xb14U)) * (uVar6 + param_2) +
                                   iVar5 + param_1 * 4);
                  puVar7 = (uint *)(*(int *)(((uintptr_t)pf_module_state+0xae0U)) * (uVar6 + param_2) +
                                   iVar3 + param_1 * 4);
                  for (uVar9 = param_3; uVar9 != 0; uVar9 = uVar9 - 1) {
                    uVar8 = *puVar4;
                    if (bVar10) {
                      uVar8 = (uVar8 >> (*(uint *)(((uintptr_t)pf_module_state+0xb28U)) & 0xff) & 0xff) <<
                              (*(uint *)(((uintptr_t)pf_module_state+0xaf4U)) & 0xff) |
                              (uVar8 >> (*(uint *)(((uintptr_t)pf_module_state+0xb30U)) & 0xff) & 0xff) <<
                              (*(uint *)(((uintptr_t)pf_module_state+0xafcU)) & 0xff) |
                              (uVar8 >> (*(uint *)(((uintptr_t)pf_module_state+0xb38U)) & 0xff) & 0xff) <<
                              (*(uint *)(((uintptr_t)pf_module_state+0xb04U)) & 0xff) | 0xff000000;
                    }
                    *puVar7 = uVar8;
                    puVar4 = puVar4 + 1;
                    puVar7 = puVar7 + 1;
                  }
                }
                recovered_10002c44(*(int **)(((uintptr_t)pf_module_state + 0xad0U)));
                *(int *)(((uintptr_t)pf_module_state+0xb54U)) = *(int *)(((uintptr_t)pf_module_state+0xb54U)) + 1;
                DataMemoryBarrier(0xb);
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
                DataMemoryBarrier(0xb);
              }
              *(undefined4 *)(((uintptr_t)pf_module_state+0xb94U)) = 0;
            }
          }
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_10002148
#undef DAT_1000214c
#undef DAT_10002150

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002154
 */

void recovered_10002154(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10002bbc((int)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002168
 */

undefined4 recovered_10002168(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  undefined8 uVar39;
  undefined8 uVar40;

  uVar3 = 0;
  if (param_1 != 0 && param_2 != 0) {
    iVar25 = param_1;
    for (uVar22 = 0; uVar22 != param_2; uVar22 = uVar22 + 1) {
      piVar19 = (int *)(param_1 + uVar22 * 0x70);
      iVar4 = *piVar19;
      if (iVar4 == 3) {
        uVar9 = piVar19[0xe];
        bVar2 = recovered_10002db0(piVar19 + 2);
        if (!bVar2) goto LAB_100025c4;
        uVar34 = piVar19[0x11];
        piVar5 = piVar19 + 0x10;
        uVar36 = piVar19[0x10];
        iVar4 = 0;
        uVar10 = uVar34;
        uVar14 = uVar34;
        uVar23 = uVar36;
        uVar30 = uVar36;
        while (iVar4 != 2) {
          iVar16 = iVar25 + iVar4 * 0x10;
          iVar4 = iVar4 + 1;
          uVar15 = *(uint *)(iVar16 + 0x50);
          uVar11 = *(uint *)(iVar16 + 0x54);
          if ((int)uVar14 < (int)uVar11) {
            uVar14 = uVar11;
          }
          if ((int)uVar30 < (int)uVar15) {
            uVar30 = uVar15;
          }
          if ((int)uVar11 < (int)uVar10) {
            uVar10 = uVar11;
          }
          if ((int)uVar15 < (int)uVar23) {
            uVar23 = uVar15;
          }
        }
        if (-1 < (int)uVar30 && -1 < (int)uVar14) {
          iVar16 = piVar19[5];
          bVar2 = SBORROW4(uVar23,iVar16);
          iVar4 = uVar23 - iVar16;
          piVar31 = piVar19;
          if ((int)uVar23 < iVar16) {
            piVar31 = (int *)piVar19[6];
            bVar2 = SBORROW4(uVar10,(int)piVar31);
            iVar4 = uVar10 - (int)piVar31;
          }
          if (iVar4 < 0 != bVar2) {
            piVar6 = piVar19 + 0x18;
            iVar4 = *piVar6;
            piVar12 = piVar19 + 0x14;
            iVar17 = piVar19[0x19];
            lVar38 = recovered_10002e74(piVar5,piVar12,iVar4,iVar17);
            if ((int)piVar31 <= (int)uVar14) {
              uVar14 = (int)piVar31 - 1;
            }
            if (iVar16 <= (int)uVar30) {
              uVar30 = iVar16 - 1;
            }
            if (lVar38 != 0) {
              uVar10 = uVar10 & ~((int)uVar10 >> 0x1f);
              uVar23 = uVar23 & ~((int)uVar23 >> 0x1f);
              iVar16 = piVar19[0x15];
              iVar26 = piVar19[0x14];
              uVar39 = recovered_10002e74(piVar12,piVar6,uVar23,uVar10);
              iVar28 = (int)((ulonglong)uVar39 >> 0x20);
              lVar38 = recovered_10002e74(piVar6,piVar5,uVar23,uVar10);
              uVar40 = recovered_10002e74(piVar5,piVar12,uVar23,uVar10);
              iVar18 = piVar19[2];
              if (iVar18 == 0) {
                iVar18 = 0;
              }
              else if (piVar19[3] != 0) {
                iVar18 = 0;
              }
              uVar15 = uVar36 - iVar4;
              uVar36 = iVar26 - uVar36;
              uVar7 = iVar4 - iVar26;
              uVar35 = iVar17 - iVar16;
              uVar29 = iVar16 - uVar34;
              uVar11 = (uint)uVar40;
              while( true ) {
                uVar1 = (ulonglong)lVar38 >> 0x20;
                uVar13 = (uint)lVar38;
                iVar4 = (int)((ulonglong)uVar40 >> 0x20);
                uVar32 = (uint)uVar39;
                if ((int)uVar14 < (int)uVar10) break;
                uVar24 = piVar19[7] * uVar10 + iVar18;
                iVar8 = piVar19[7] * uVar10 + iVar18;
                iVar16 = iVar28;
                iVar26 = iVar4;
                uVar27 = uVar11;
                uVar33 = uVar23;
                uVar37 = uVar32;
                while( true ) {
                  iVar20 = (int)((ulonglong)lVar38 >> 0x20);
                  if ((int)uVar30 < (int)uVar33) break;
                  if ((((-1 < iVar16 && -1 < lVar38) && (-1 < iVar26)) ||
                      (((int)-(iVar16 + (uint)(uVar37 != 0)) < 0 ==
                        (SBORROW4(0,iVar16) != SBORROW4(-iVar16,(uint)(uVar37 != 0))) &&
                       ((bVar2 = (int)lVar38 != 0,
                        (int)-(iVar20 + (uint)bVar2) < 0 ==
                        (SBORROW4(0,iVar20) != SBORROW4(-iVar20,(uint)bVar2)) &&
                        ((int)-(iVar26 + (uint)(uVar27 != 0)) < 0 ==
                         (SBORROW4(0,iVar26) != SBORROW4(-iVar26,(uint)(uVar27 != 0))))))))) &&
                     (iVar18 != 0)) {
                    if ((uVar24 & 3) == 0) {
                      *(uint *)(iVar8 + uVar33 * 4) =
                           uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18;
                    }
                    else {
                      puVar21 = (undefined1 *)(iVar8 + uVar33 * 4);
                      *puVar21 = (char)(uVar9 >> 0x18);
                      puVar21[3] = (char)uVar9;
                      puVar21[2] = (char)(uVar9 >> 8);
                      puVar21[1] = (char)(uVar9 >> 0x10);
                    }
                  }
                  bVar2 = CARRY4(uVar27,uVar29);
                  uVar27 = uVar27 + uVar29;
                  iVar26 = iVar26 + ((int)uVar29 >> 0x1f) + (uint)bVar2;
                  uVar24 = uVar24 + 4;
                  uVar33 = uVar33 + 1;
                  lVar38 = lVar38 + (int)(uVar34 - iVar17);
                  bVar2 = CARRY4(uVar37,uVar35);
                  uVar37 = uVar37 + uVar35;
                  iVar16 = iVar16 + ((int)uVar35 >> 0x1f) + (uint)bVar2;
                }
                uVar40 = CONCAT44(iVar4 - (((int)uVar36 >> 0x1f) + (uint)(uVar11 < uVar36)),uVar11);
                lVar38 = CONCAT44((int)uVar1 - (((int)uVar15 >> 0x1f) + (uint)(uVar13 < uVar15)),
                                  uVar13 - uVar15);
                uVar39 = CONCAT44(iVar28,uVar32 - uVar7);
                uVar10 = uVar10 + 1;
                iVar28 = iVar28 - (((int)uVar7 >> 0x1f) + (uint)(uVar32 < uVar7));
                uVar11 = uVar11 - uVar36;
              }
            }
          }
        }
      }
      else {
        if (iVar4 == 2) {
          iVar4 = piVar19[0xd];
          uVar10 = piVar19[10];
          uVar14 = piVar19[0xb];
          iVar16 = piVar19[0xc];
          uVar9 = piVar19[0xe];
        }
        else {
          if (iVar4 != 1) goto LAB_100025c4;
          iVar4 = piVar19[6];
          uVar14 = 0;
          uVar9 = piVar19[0xe];
          iVar16 = piVar19[5];
          uVar10 = 0;
        }
        iVar4 = recovered_10002c80(piVar19 + 2,uVar10,uVar14,iVar16,iVar4,uVar9);
        if (iVar4 == 0) {
          goto LAB_100025c4;
        }
      }
      iVar25 = iVar25 + 0x70;
    }
    uVar22 = param_2;
LAB_100025c4:
    uVar3 = 0;
    if (param_2 <= uVar22) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


#undef DAT_100026d0
#define DAT_100026d0 (*(int *)(0x100026d0U))
#undef DAT_100026d4
#define DAT_100026d4 (*(int *)(0x100026d4U))
#define local_1e0 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1dc (*(undefined4 *)(pf_stack_frame + 20))
#define local_1d8 (*(undefined4 *)(pf_stack_frame + 24))
#define local_1d4 (*(uint *)(pf_stack_frame + 28))
#define local_1d0 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_1c4 (*(undefined1 (*)[452])(pf_stack_frame + 44))
#define local_1cc (*(undefined4 *)(pf_stack_frame + 36))
#define auStack_184 (*(undefined1 (*)[388])(pf_stack_frame + 108))
#define local_1c8 (*(undefined4 *)(pf_stack_frame + 40))
#define auStack_144 (*(undefined1 (*)[324])(pf_stack_frame + 172))
#define auStack_e4 (*(undefined1 (*)[228])(pf_stack_frame + 268))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025dc
 */

undefined4
recovered_100025dc(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,char *param_6,char *param_7,char *param_8,char *param_9)

{
  unsigned char pf_stack_frame[528] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int *piVar3;

  recovered_10001c68((undefined1 *)&local_1e0,0x1bc);
  local_1c8 = param_5;
  local_1d4 = param_2 | 1;
  local_1dc = 1;
  local_1e0 = 0x1bc;
  local_1d8 = param_1;
  local_1d0 = param_3;
  local_1cc = param_4;
  recovered_10002154(auStack_1c4,0x40,param_6);
  recovered_10002154(auStack_184,0x40,param_7);
  recovered_10002154(auStack_144,0x60,param_8);
  recovered_10002154(auStack_e4,0xc0,param_9);
  uVar1 = 0;
  piVar3 = *(int **)(((uintptr_t)pf_module_state + 0xad0U));
  if ((((piVar3 != (int *)0x0) && (*piVar3 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0xef < (uint)piVar3[2])) &&
     (((code *)piVar3[0x3b] != (code *)0x0 &&
      (iVar2 = (*(code *)piVar3[0x3b])(&local_1e0), uVar1 = 0, iVar2 != 0)))) {
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_100026d0
#undef DAT_100026d4
#undef local_1e0
#undef local_1dc
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef auStack_1c4
#undef local_1cc
#undef auStack_184
#undef local_1c8
#undef auStack_144
#undef auStack_e4

#undef DAT_10002860
#define DAT_10002860 (*(int *)(0x10002860U))
#undef DAT_10002864
#define DAT_10002864 (*(int *)(0x10002864U))
#undef DAT_10002868
#define DAT_10002868 (*(int *)(0x10002868U))
#undef DAT_1000286c
#define DAT_1000286c (*(int *)(0x1000286cU))
#undef DAT_10002870
#define DAT_10002870 (*(int *)(0x10002870U))
#undef DAT_10002874
#define DAT_10002874 (*(int *)(0x10002874U))
#undef DAT_10002878
#define DAT_10002878 (*(int *)(0x10002878U))
#undef DAT_1000287c
#define DAT_1000287c (*(int *)(0x1000287cU))
#undef DAT_10002880
#define DAT_10002880 (*(int *)(0x10002880U))
#undef DAT_10002884
#define DAT_10002884 (*(int *)(0x10002884U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026d8
 */

undefined4 recovered_100026d8(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int unaff_r5;
  undefined4 uVar6;
  bool bVar7;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    bVar7 = *(int *)(((uintptr_t)pf_module_state + 0xad0U)) != 0;
    iVar3 = 0;
    if (bVar7) {
      unaff_r5 = ((uintptr_t)pf_module_state + 0xad0U);
      iVar3 = *(int *)(((uintptr_t)pf_module_state + 0xb3cU));
    }
    if (bVar7 && iVar3 != 0) {
      recovered_10002c10();
      uVar1 = *(undefined4 *)(unaff_r5 + 0x84);
      uVar6 = *(undefined4 *)(unaff_r5 + 0x88);
      iVar3 = *(int *)(unaff_r5 + 0x8c);
      DataMemoryBarrier(0xb);
      *(undefined4 *)(unaff_r5 + 0xc4) = 0;
      recovered_10001c68((undefined1 *)param_1,500);
      *param_1 = 500;
      param_1[4] = 3;
      param_1[3] = 8;
      param_1[1] = 1;
      if (*(int *)(unaff_r5 + 0x78) == 0) {
        uVar2 = 0x13;
      }
      else {
        param_1[5] = 6;
        param_1[4] = 7;
        uVar2 = 0x17;
      }
      if (iVar3 == 0) {
        param_1[4] = uVar2;
      }
      uVar2 = 0;
      piVar4 = *(int **)(((uintptr_t)pf_module_state + 0xad0U));
      if ((((piVar4 != (int *)0x0) && (*piVar4 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0x2f < (uint)piVar4[2])) &&
         ((code *)piVar4[0xb] != (code *)0x0)) {
        uVar2 = (*(code *)piVar4[0xb])();
      }
      param_1[6] = uVar2;
      uVar2 = *(undefined4 *)(unaff_r5 + 0x18);
      param_1[0x11] = *(undefined4 *)(unaff_r5 + 0x14);
      param_1[0x12] = uVar2;
      param_1[0x14] = uVar6;
      param_1[0x13] = uVar1;
      recovered_10002154((undefined1 *)(param_1 + 0x15),0x40,(char *)(((uintptr_t)pf_module_state + 0x24eU)));
      recovered_10002154((undefined1 *)(param_1 + 0x25),0x40,(char *)(((uintptr_t)pf_module_state + 0x264U)));
      pcVar5 = (char *)(((uintptr_t)pf_module_state + 0x7c7U));
      if (iVar3 == 0) {
        pcVar5 = (char *)(((uintptr_t)pf_module_state + 0x271U));
      }
      recovered_10002154((undefined1 *)(param_1 + 0x35),0x60,pcVar5);
      pcVar5 = (char *)(((uintptr_t)pf_module_state + 0x7ebU));
      if (*(int *)(unaff_r5 + 0x78) == 0) {
        pcVar5 = (char *)(((uintptr_t)pf_module_state + 0x88dU));
      }
      recovered_10002154((undefined1 *)(param_1 + 0x4d),0xc0,pcVar5);
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10002860
#undef DAT_10002864
#undef DAT_10002868
#undef DAT_1000286c
#undef DAT_10002870
#undef DAT_10002874
#undef DAT_10002878
#undef DAT_1000287c
#undef DAT_10002880
#undef DAT_10002884

#undef DAT_100029ec
#define DAT_100029ec (*(int *)(0x100029ecU))
#undef DAT_100029f0
#define DAT_100029f0 (*(int *)(0x100029f0U))
#undef DAT_100029f4
#define DAT_100029f4 (*(int *)(0x100029f4U))
#undef DAT_100029f8
#define DAT_100029f8 (*(int *)(0x100029f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002888
 */

undefined4 recovered_10002888(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x1744ULL});
  if ((((param_1 != (uint *)0x0) && (0x27 < *param_1)) && (param_1[1] == 3 || param_1[1] == 4)) &&
     (*(int *)(((uintptr_t)pf_module_state + 0xad0U)) != 0)) {
    bVar6 = *(int *)(((uintptr_t)pf_module_state + 0xb48U)) != 0;
    iVar2 = 0;
    if (bVar6) {
      iVar2 = *(int *)(((uintptr_t)pf_module_state + 0xb4cU));
    }
    if (bVar6 && iVar2 != 0) {
      recovered_10002c10();
      if (param_1[1] == 3) {
        if (*(int *)(((uintptr_t)pf_module_state+0xb5cU)) == 0) {
          for (uVar3 = 0; iVar2 = *(int *)(((uintptr_t)pf_module_state+0xb3cU)),
              uVar3 < *(uint *)(((uintptr_t)pf_module_state+0xb4cU)); uVar3 = uVar3 + 1) {
            *(undefined1 *)(*(int *)(((uintptr_t)pf_module_state+0xb48U)) + uVar3) = *(undefined1 *)(iVar2 + uVar3);
          }
          for (uVar3 = 0; uVar3 < *(uint *)(((uintptr_t)pf_module_state+0xae8U)); uVar3 = uVar3 + 1) {
            iVar4 = *(int *)(((uintptr_t)pf_module_state+0xae0U));
            for (uVar5 = 0; uVar5 < *(uint *)(((uintptr_t)pf_module_state+0xae4U)); uVar5 = uVar5 + 1) {
              *(undefined4 *)(iVar4 * uVar3 + iVar2 + uVar5 * 4) = 0xff000000;
            }
          }
          recovered_10002c44(*(int **)(((uintptr_t)pf_module_state + 0xad0U)));
          *(undefined4 *)(((uintptr_t)pf_module_state+0xb5cU)) = 1;
          *(int *)(((uintptr_t)pf_module_state+0xb58U)) = *(int *)(((uintptr_t)pf_module_state+0xb58U)) + 1;
        }
      }
      else if (*(int *)(((uintptr_t)pf_module_state+0xb5cU)) != 0) {
        for (uVar3 = 0; uVar3 < *(uint *)(((uintptr_t)pf_module_state+0xb4cU)); uVar3 = uVar3 + 1) {
          *(undefined1 *)(*(int *)(((uintptr_t)pf_module_state+0xb3cU)) + uVar3) =
               *(undefined1 *)(*(int *)(((uintptr_t)pf_module_state+0xb48U)) + uVar3);
        }
        recovered_10002c44(*(int **)(((uintptr_t)pf_module_state + 0xad0U)));
        *(undefined4 *)(((uintptr_t)pf_module_state+0xb5cU)) = 0;
      }
      DataMemoryBarrier(0xb);
      *(undefined4 *)(((uintptr_t)pf_module_state+0xb94U)) = 0;
      return 1;
    }
  }
  return 0;
}

#undef DAT_100029ec
#undef DAT_100029f0
#undef DAT_100029f4
#undef DAT_100029f8

#undef DAT_10002af8
#define DAT_10002af8 (*(int *)(0x10002af8U))
#undef DAT_10002afc
#define DAT_10002afc (*(int *)(0x10002afcU))
#undef DAT_10002b00
#define DAT_10002b00 (*(int *)(0x10002b00U))
#undef DAT_10002b04
#define DAT_10002b04 (*(int *)(0x10002b04U))
#undef DAT_10002b08
#define DAT_10002b08 (*(int *)(0x10002b08U))
#undef DAT_10002b0c
#define DAT_10002b0c (*(int *)(0x10002b0cU))
#undef DAT_10002b10
#define DAT_10002b10 (*(int *)(0x10002b10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029fc
 */

undefined4 recovered_100029fc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  bool bVar7;

  iVar1 = recovered_100026d8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  param_1[4] = 9;
  param_1[5] = 0;
  param_1[3] = 2;
  iVar1 = (*(uint32_t *)(uint32_t[]){0x15e0ULL});
  param_1[0xe] = 0;
  uVar2 = *(undefined4 *)(((uintptr_t)pf_module_state+0xb74U));
  bVar7 = *(int *)(((uintptr_t)pf_module_state+0xb60U)) != 0;
  uVar4 = *(undefined4 *)(((uintptr_t)pf_module_state+0xb80U));
  uVar3 = 0;
  if (bVar7) {
    uVar3 = 0x100;
  }
  uVar6 = *(undefined4 *)(((uintptr_t)pf_module_state+0xb84U));
  if (bVar7) {
    param_1[5] = uVar3;
    param_1[4] = 0x1b;
  }
  uVar3 = *(undefined4 *)(((uintptr_t)pf_module_state+0xb78U));
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  param_1[0x14] = uVar6;
  recovered_10002154((undefined1 *)(param_1 + 0x15),0x40,(char *)(((uintptr_t)pf_module_state + 0x37dU)));
  recovered_10002154((undefined1 *)(param_1 + 0x25),0x40,(char *)(((uintptr_t)pf_module_state + 0x3a5U)));
  pcVar5 = (char *)(((uintptr_t)pf_module_state + 0x3c0U));
  if (*(int *)(((uintptr_t)pf_module_state+0xb60U)) == 0) {
    pcVar5 = (char *)(((uintptr_t)pf_module_state + 0x3f0U));
  }
  recovered_10002154((undefined1 *)(param_1 + 0x35),0x60,pcVar5);
  pcVar5 = (char *)(((uintptr_t)pf_module_state + 0x925U));
  if (*(int *)(((uintptr_t)pf_module_state+0xb60U)) == 0) {
    pcVar5 = (char *)(((uintptr_t)pf_module_state + 0x9deU));
  }
  recovered_10002154((undefined1 *)(param_1 + 0x4d),0xc0,pcVar5);
  return 1;
}

#undef DAT_10002af8
#undef DAT_10002afc
#undef DAT_10002b00
#undef DAT_10002b04
#undef DAT_10002b08
#undef DAT_10002b0c
#undef DAT_10002b10

#define local_23 (*(byte (*)[35])(pf_stack_frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b14
 */

void recovered_10002b14(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if (param_2 == 0) {
    recovered_10002ea8(param_1,0x30);
    return;
  }
  for (uVar3 = 0; (param_2 != 0 && (uVar3 < 10)); uVar3 = uVar3 + 1) {
    uVar1 = recovered_10002f10(param_2,10);
    local_23[uVar3 + 1] = (char)param_2 + (char)uVar1 * -10 | 0x30;
    param_2 = uVar1;
  }
  for (iVar2 = -uVar3; iVar2 != 0; iVar2 = iVar2 + 1) {
    recovered_10002ea8(param_1,local_23[-iVar2]);
  }
  return;
}

#undef local_23

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bbc
 */

void recovered_10002bbc(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002ee4(param_1);
  if (param_1 == 0 || param_3 == (char *)0x0) {
    return;
  }
  while( true ) {
    if ((*param_3 == '\0') || (param_2 <= uVar1 + 1)) break;
    *(char *)(param_1 + uVar1) = *param_3;
    uVar1 = uVar1 + 1;
    param_3 = param_3 + 1;
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}


#undef DAT_10002c40
#define DAT_10002c40 (*(int *)(0x10002c40U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c10
 */

void recovered_10002c10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  do {
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0xb94U));
    } while (iVar1 != 0);
    iVar1 = pf_arm_strex32(((uintptr_t)pf_module_state + 0xb94U),1);
    DataMemoryBarrier(0xb);
  } while (iVar1 != 0);
  return;
}

#undef DAT_10002c40

#undef DAT_10002c7c
#define DAT_10002c7c (*(int *)(0x10002c7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c44
 */

void recovered_10002c44(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10002c7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c80
 */

undefined4
recovered_10002c80(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint extraout_r3 = 0;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  bVar1 = recovered_10002db0(param_1);
  uVar7 = 0;
  iVar3 = param_5;
  if (0 < param_5) {
    iVar3 = param_4;
  }
  if ((0 < iVar3) && (bVar1)) {
    uVar2 = param_4 + param_2;
    uVar7 = 1;
    uVar5 = uVar2;
    uVar9 = extraout_r1;
    if (0 < (int)uVar2) {
      uVar5 = param_5 + param_3;
      uVar9 = uVar5;
    }
    if (0 < (int)uVar5) {
      uVar10 = param_1[3];
      bVar11 = SBORROW4(uVar10,param_2);
      iVar3 = uVar10 - param_2;
      bVar1 = uVar10 == param_2;
      uVar5 = extraout_r3;
      if ((int)param_2 < (int)uVar10) {
        uVar5 = param_1[4];
        bVar11 = SBORROW4(uVar5,param_3);
        iVar3 = uVar5 - param_3;
        bVar1 = uVar5 == param_3;
      }
      if (!bVar1 && iVar3 < 0 == bVar11) {
        if ((int)uVar9 < (int)uVar5) {
          uVar5 = uVar9;
        }
        if ((int)uVar2 < (int)uVar10) {
          uVar10 = uVar2;
        }
        uVar2 = param_2 & ~((int)param_2 >> 0x1f);
        iVar3 = recovered_10002e34(param_1,uVar9,1);
        for (uVar9 = param_3 & ~((int)param_3 >> 0x1f); (int)uVar9 < (int)uVar5; uVar9 = uVar9 + 1)
        {
          iVar4 = param_1[5];
          puVar8 = (uint *)(iVar4 * uVar9 + iVar3 + uVar2 * 4);
          uVar6 = uVar2;
          if (((uint)puVar8 & 3) == 0) {
            for (; (int)uVar6 < (int)uVar10; uVar6 = uVar6 + 1) {
              *(uint *)(iVar4 * uVar9 + iVar3 + uVar6 * 4) =
                   param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
                   param_6 >> 0x18;
            }
          }
          else {
            for (; (int)uVar6 < (int)uVar10; uVar6 = uVar6 + 1) {
              recovered_10002e64(puVar8,param_6);
              puVar8 = puVar8 + 1;
            }
          }
        }
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002db0
 */

bool recovered_10002db0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint in_r12;

  if (param_1 == (int *)0x0) {
    return false;
  }
  bVar2 = false;
  if (param_1[6] == 1) {
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      in_r12 = param_1[4];
    }
    if (uVar3 != 0 && in_r12 != 0) {
      if ((uint)(uVar3 << 2 <= (uint)param_1[5]) <= -(uVar3 >> 0x1e)) {
        return false;
      }
      if ((param_1[2] == 0) ||
         (lVar1 = (ulonglong)(uint)param_1[5] * (ulonglong)in_r12,
         (uint)-(int)((ulonglong)lVar1 >> 0x20) < (uint)((uint)lVar1 <= (uint)param_1[2]))) {
        if (*param_1 != 0) {
          bVar2 = param_1[1] == 0;
        }
        return bVar2;
      }
    }
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e34
 */

int recovered_10002e34(int *param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (int *)0x0) {
    param_3 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_3 != 0) {
    if (param_1[1] != 0) {
      param_3 = 0;
    }
    return param_3;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e64
 */

void recovered_10002e64(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (uint *)0x0) {
    *param_1 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
               param_2 >> 0x18;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e74
 */

undefined8 recovered_10002e74(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;

  lVar1 = (longlong)(*param_2 - *param_1) * (longlong)(param_4 - param_1[1]);
  uVar4 = (uint)lVar1;
  lVar2 = (longlong)(param_2[1] - param_1[1]) * (longlong)(param_3 - *param_1);
  uVar3 = (uint)lVar2;
  return CONCAT44((int)((ulonglong)lVar2 >> 0x20) -
                  ((int)((ulonglong)lVar1 >> 0x20) + (uint)(uVar3 < uVar4)),uVar3 - uVar4);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea8
 */

void recovered_10002ea8(int param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002ee4(param_1);
  if (param_1 != 0) {
    if (2 < iVar1 + 1U >> 8) {
      return;
    }
    *(undefined1 *)(param_1 + iVar1) = param_2;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ee4
 */

int recovered_10002ee4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f10
 */

uint recovered_10002f10(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (param_2 <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - param_2;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f60
 */

uint recovered_10002f60(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f98
 */

uint recovered_10002f98(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0x1f;
    do {
      uVar2 = uVar3 >> (uVar1 & 0xff) & 1 | uVar2 << 1;
      if (uVar4 <= uVar2) {
        uVar5 = uVar5 | 1 << (uVar1 & 0xff);
        uVar2 = uVar2 - uVar4;
      }
      bVar6 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar6);
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003008
 */

uint recovered_10003008(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x1f;
    do {
      uVar3 = uVar5 >> (uVar2 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar1 = uVar3;
      }
      bVar6 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar6);
  }
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003070
 */

undefined8 recovered_10003070(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f;
    do {
      uVar7 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar3 = uVar2 - 0x20;
      uVar4 = param_1 >> (uVar2 & 0xff) | param_2 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = param_2 >> (uVar3 & 0xff);
      }
      uVar5 = uVar4 & 1 | uVar9 << 1;
      bVar10 = uVar7 <= param_4;
      bVar1 = (uint)(param_3 <= uVar5) <= uVar7 - param_4;
      uVar4 = uVar7 - (param_4 + (param_3 > uVar5));
      uVar9 = uVar5 - param_3;
      if (bVar10 && bVar1) {
        uVar4 = uVar7;
        uVar9 = uVar5;
      }
      uVar7 = 1 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 1 << (uVar3 & 0xff);
      }
      if (!bVar10 || !bVar1) {
        uVar8 = uVar8 | uVar7;
      }
      uVar7 = 1 << (uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      if (!bVar10 || !bVar1) {
        uVar6 = uVar6 | uVar7;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar8,uVar6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003154
 */

undefined8 recovered_10003154(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = param_2 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - param_3;
    uVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d4
 */

undefined8 recovered_100031d4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;

  uVar1 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar1) - uVar1;
  uVar2 = (int)param_2 >> 0x1f;
  uVar13 = (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1));
  uVar11 = (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2));
  if (param_3 == 0 && param_4 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0x3f;
    do {
      uVar6 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar5 = uVar10 - 0x20;
      uVar4 = (param_1 ^ uVar2) - uVar2 >> (uVar10 & 0xff) | uVar11 << (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar4 = uVar11 >> (uVar5 & 0xff);
      }
      uVar7 = uVar4 & 1 | uVar9 << 1;
      bVar15 = uVar6 <= uVar13;
      bVar3 = (uint)(uVar8 <= uVar7) <= uVar6 - uVar13;
      uVar4 = uVar6 - (uVar13 + (uVar8 > uVar7));
      uVar9 = uVar7 - uVar8;
      if (bVar15 && bVar3) {
        uVar4 = uVar6;
        uVar9 = uVar7;
      }
      uVar6 = 1 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 1 << (uVar5 & 0xff);
      }
      if (!bVar15 || !bVar3) {
        uVar14 = uVar14 | uVar6;
      }
      uVar6 = 1 << (uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
      }
      if (!bVar15 || !bVar3) {
        uVar12 = uVar12 | uVar6;
      }
      bVar15 = uVar10 != 0;
      uVar10 = uVar10 - 1;
    } while (bVar15);
  }
  uVar11 = -uVar12;
  uVar8 = -(uVar14 + (uVar12 != 0));
  if (-uVar2 == -uVar1) {
    uVar11 = uVar12;
    uVar8 = uVar14;
  }
  return CONCAT44(uVar8,uVar11);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032f4
 */

undefined8 recovered_100032f4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar7 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar7) - uVar7;
  uVar1 = (int)param_2 >> 0x1f;
  uVar9 = (param_4 ^ uVar7) - (uVar7 + ((param_3 ^ uVar7) < uVar7));
  uVar7 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0x3f;
    do {
      uVar5 = uVar4 << 1 | uVar3 >> 0x1f;
      uVar4 = (param_1 ^ uVar1) - uVar1 >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)(uVar2 - 0x20)) {
        uVar4 = uVar7 >> (uVar2 - 0x20 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar3 << 1;
      uVar3 = uVar6 - uVar8;
      uVar4 = uVar5 - (uVar9 + (uVar8 > uVar6));
      if (uVar5 <= uVar9 && (uint)(uVar8 <= uVar6) <= uVar5 - uVar9) {
        uVar3 = uVar6;
        uVar4 = uVar5;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  uVar1 = -uVar3;
  uVar7 = -(uVar4 + (uVar3 != 0));
  if (-1 < (int)param_2) {
    uVar1 = uVar3;
    uVar7 = uVar4;
  }
  return CONCAT44(uVar7,uVar1);
}


#undef DAT_10003430
#define DAT_10003430 (*(double *)(0x10003430U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033b0
 */

undefined8 recovered_100033b0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    if (dVar8 <= dVar7) {
      uVar1 = uVar1 | uVar4;
    }
    uVar4 = 1 >> (0x20 - uVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (dVar8 <= dVar7) {
      uVar2 = uVar2 | uVar4;
      dVar7 = dVar7 - dVar8;
    }
    bVar6 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10003430

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003438
 */

undefined8 recovered_10003438(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_100033b0(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_100033b0(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003484
 */

undefined8 recovered_10003484(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_100033b0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0xab4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003494
 */

void recovered_10003494(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0xa9cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034a4
 */

double recovered_100034a4(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar2 = 1.0;
  dVar3 = 0.0;
  do {
    dVar4 = dVar3 + dVar2;
    dVar2 = dVar2 + dVar2;
    if ((param_1 & 1) == 0) {
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034ec
 */

double recovered_100034ec(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_100034a4(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_100034a4(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003514
 */

float recovered_10003514(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100034a4(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003530
 */

float recovered_10003530(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100034ec(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Freestanding memcpy import; Pooka's Free Software License. */
void *recovered_10003570(void *dest,const void *source,size_t bytes) {
 volatile unsigned char *out=dest;const volatile unsigned char *in=source;
 for(size_t i=0;i<bytes;i++)out[i]=in[i];return dest;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
