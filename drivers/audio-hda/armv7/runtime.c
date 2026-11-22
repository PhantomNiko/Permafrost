/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100039a4
#define DAT_100039a4 (*(uint32_t *)(0x100039a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003998
 */

void * recovered_10003998(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x48e8U));
}

#undef DAT_100039a4

#undef DAT_10003cf0
#define DAT_10003cf0 (*(int *)(0x10003cf0U))
#undef DAT_10003cf4
#define DAT_10003cf4 (*(int *)(0x10003cf4U))
#undef DAT_10003cf8
#define DAT_10003cf8 (*(int *)(0x10003cf8U))
#undef DAT_10003cfc
#define DAT_10003cfc (*(int *)(0x10003cfcU))
#undef DAT_10003d00
#define DAT_10003d00 (*(int *)(0x10003d00U))
#undef DAT_10003d04
#define DAT_10003d04 (*(int *)(0x10003d04U))
#undef DAT_10003d08
#define DAT_10003d08 (*(int *)(0x10003d08U))
#undef DAT_10003d0c
#define DAT_10003d0c (*(int *)(0x10003d0cU))
#undef DAT_10003d10
#define DAT_10003d10 (*(int *)(0x10003d10U))
#undef DAT_10003d14
#define DAT_10003d14 (*(int *)(0x10003d14U))
#undef DAT_10003d18
#define DAT_10003d18 (*(int *)(0x10003d18U))
#undef DAT_10003d1c
#define DAT_10003d1c (*(int *)(0x10003d1cU))
#undef DAT_10003d20
#define DAT_10003d20 (*(int *)(0x10003d20U))
#undef DAT_10003d24
#define DAT_10003d24 (*(int *)(0x10003d24U))
#undef DAT_10003d28
#define DAT_10003d28 (*(int *)(0x10003d28U))
#undef DAT_10003d2c
#define DAT_10003d2c (*(int *)(0x10003d2cU))
#undef DAT_10003d30
#define DAT_10003d30 (*(int *)(0x10003d30U))
#undef DAT_10003d34
#define DAT_10003d34 (*(int *)(0x10003d34U))
#undef DAT_10003d38
#define DAT_10003d38 (*(int *)(0x10003d38U))
#define local_fc (*(uint *)(frame + 1044))
#define local_ec (*(char *)(frame + 1060))
#define local_94 (*(uint *)(frame + 1148))
#define local_58 (*(uint *)(frame + 1208))
#define local_54 (*(uint *)(frame + 1212))
#define local_50 (*(uint (*)[12])(frame + 1216))
#define auStack_4fc (*(undefined1 (*)[1024])(frame + 20))
#define abStack_f8 (*(byte (*)[12])(frame + 1048))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039a8
 */

int recovered_100039a8(int *api)

{
  unsigned char frame[1328] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;

  iVar3 = (0x54584b57U);
  local_fc = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != (0x54584b57U)) {
    return 0;
  }
  if ((uint)api[2] < 0x10) {
    return 0;
  }
  recovered_10003d3c(auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  recovered_10006098((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x12dU)));
  recovered_10006150((int)auStack_4fc,0x60,api[1]);
  recovered_10006098((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x13cU)));
  if (((*api == iVar3) && (0x2b < (uint)api[2])) && ((code *)api[10] != (code *)0x0)) {
    (*(code *)api[10])(auStack_4fc);
  }
  recovered_10003d3c(auStack_4fc,0x400,(char *)(((uintptr_t)pf_module_state + 0x36U)));
  if (((*api == iVar3) && (0x3f < (uint)api[2])) &&
     (((code *)api[0xf] != (code *)0x0 && (iVar1 = (*(code *)api[0xf])(abStack_f8), iVar1 != 0)))) {
    recovered_100060ec((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x143U)),local_94);
    recovered_10006028((int)auStack_4fc,0x400,(char *)(((uintptr_t)pf_module_state + 0x153U)),local_58);
    recovered_100060ec((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x162U)),local_54);
  }
  if ((code *)api[3] == (code *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)api[3])(((uintptr_t)pf_module_state + 0x171U),((uintptr_t)pf_module_state + 0x63U),auStack_4fc);
  if (iVar1 == 0) {
    return 0;
  }
  if (((*api == iVar3) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    for (uVar2 = 0; uVar2 != 8; uVar2 = uVar2 + 1) {
      for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
        iVar3 = recovered_10006264(api,uVar2 & 0xff,uVar5 & 0xff,0,abStack_f8);
        if ((iVar3 != 0) && (recovered_10003d50(api,abStack_f8,(int *)&local_fc), local_ec < '\0'))
        {
          for (uVar6 = 1; uVar6 != 8; uVar6 = uVar6 + 1) {
            iVar3 = recovered_10006264(api,uVar2 & 0xff,uVar5 & 0xff,uVar6 & 0xff,
                                       (undefined1 *)local_50);
            if (iVar3 != 0) {
              recovered_10003d50(api,(byte *)local_50,(int *)&local_fc);
            }
          }
        }
      }
    }
    if (local_fc != 0) goto LAB_10003ca8;
  }
  local_50[0] = 0;
  recovered_10003d3c(abStack_f8,0xa0,(char *)(((uintptr_t)pf_module_state + 0x76U)));
  iVar3 = recovered_10005fd0(api,0x22e,1,(int)local_50);
  if (iVar3 == 0) {
    pcVar4 = (char *)(((uintptr_t)pf_module_state + 0xe0U));
  }
  else {
    recovered_10006028((int)abStack_f8,0xa0,(char *)(((uintptr_t)pf_module_state + 0xc2U)),local_50[0]);
    pcVar4 = (char *)(((uintptr_t)pf_module_state + 0xccU));
  }
  recovered_10006098((int)abStack_f8,0xa0,pcVar4);
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(((uintptr_t)pf_module_state + 0xf4U),((uintptr_t)pf_module_state + 0x107U),abStack_f8);
  }
LAB_10003ca8:
  recovered_100060ec((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x10cU)),local_fc);
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(((uintptr_t)pf_module_state + 0x171U),((uintptr_t)pf_module_state + 0x63U),auStack_4fc);
  }
  return 1;
}

#undef DAT_10003cf0
#undef DAT_10003cf4
#undef DAT_10003cf8
#undef DAT_10003cfc
#undef DAT_10003d00
#undef DAT_10003d04
#undef DAT_10003d08
#undef DAT_10003d0c
#undef DAT_10003d10
#undef DAT_10003d14
#undef DAT_10003d18
#undef DAT_10003d1c
#undef DAT_10003d20
#undef DAT_10003d24
#undef DAT_10003d28
#undef DAT_10003d2c
#undef DAT_10003d30
#undef DAT_10003d34
#undef DAT_10003d38
#undef local_fc
#undef local_ec
#undef local_94
#undef local_58
#undef local_54
#undef local_50
#undef auStack_4fc
#undef abStack_f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d3c
 */

void recovered_10003d3c(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10006098((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10004d84
#define DAT_10004d84 (*(int *)(0x10004d84U))
#undef DAT_10004d88
#define DAT_10004d88 (*(int *)(0x10004d88U))
#undef DAT_10004d8c
#define DAT_10004d8c (*(int *)(0x10004d8cU))
#undef DAT_10004e98
#define DAT_10004e98 (*(int *)(0x10004e98U))
#undef DAT_10004f34
#define DAT_10004f34 (*(uint32_t *)(0x10004f34U))
#undef DAT_10004ffc
#define DAT_10004ffc (*(int *)(0x10004ffcU))
#undef DAT_10005000
#define DAT_10005000 (*(int *)(0x10005000U))
#undef DAT_10005004
#define DAT_10005004 (*(int *)(0x10005004U))
#undef DAT_10005008
#define DAT_10005008 (*(int *)(0x10005008U))
#undef DAT_100054d4
#define DAT_100054d4 (*(int *)(0x100054d4U))
#undef DAT_100054d8
#define DAT_100054d8 (*(int *)(0x100054d8U))
#undef DAT_100054dc
#define DAT_100054dc (*(int *)(0x100054dcU))
#undef DAT_100054e0
#define DAT_100054e0 (*(int *)(0x100054e0U))
#undef DAT_100054e4
#define DAT_100054e4 (*(int *)(0x100054e4U))
#undef DAT_100054e8
#define DAT_100054e8 (*(int *)(0x100054e8U))
#undef DAT_100054ec
#define DAT_100054ec (*(int *)(0x100054ecU))
#undef DAT_100054f0
#define DAT_100054f0 (*(int *)(0x100054f0U))
#undef DAT_100054f4
#define DAT_100054f4 (*(int *)(0x100054f4U))
#undef DAT_100054f8
#define DAT_100054f8 (*(int *)(0x100054f8U))
#undef DAT_100054fc
#define DAT_100054fc (*(int *)(0x100054fcU))
#undef DAT_10005500
#define DAT_10005500 (*(int *)(0x10005500U))
#undef DAT_10005504
#define DAT_10005504 (*(int *)(0x10005504U))
#undef DAT_10005508
#define DAT_10005508 (*(int *)(0x10005508U))
#undef DAT_1000550c
#define DAT_1000550c (*(int *)(0x1000550cU))
#undef DAT_10005510
#define DAT_10005510 (*(int *)(0x10005510U))
#undef DAT_10005514
#define DAT_10005514 (*(int *)(0x10005514U))
#undef DAT_10005518
#define DAT_10005518 (*(int *)(0x10005518U))
#undef DAT_10005788
#define DAT_10005788 (*(int *)(0x10005788U))
#undef DAT_1000579c
#define DAT_1000579c (*(uint32_t *)(0x1000579cU))
#undef DAT_100057b0
#define DAT_100057b0 (*(uint32_t *)(0x100057b0U))
#undef DAT_100057b4
#define DAT_100057b4 (*(int *)(0x100057b4U))
#undef DAT_100057b8
#define DAT_100057b8 (*(int *)(0x100057b8U))
#undef DAT_100057e8
#define DAT_100057e8 (*(int *)(0x100057e8U))
#undef DAT_100057ec
#define DAT_100057ec (*(int *)(0x100057ecU))
#undef DAT_100057f0
#define DAT_100057f0 (*(int *)(0x100057f0U))
#undef DAT_100057f4
#define DAT_100057f4 (*(int *)(0x100057f4U))
#undef DAT_100057f8
#define DAT_100057f8 (*(int *)(0x100057f8U))
#undef DAT_100057fc
#define DAT_100057fc (*(int *)(0x100057fcU))
#undef DAT_10005800
#define DAT_10005800 (*(int *)(0x10005800U))
#undef DAT_10005804
#define DAT_10005804 (*(int *)(0x10005804U))
#undef DAT_10005808
#define DAT_10005808 (*(int *)(0x10005808U))
#undef DAT_1000580c
#define DAT_1000580c (*(int *)(0x1000580cU))
#undef DAT_10005810
#define DAT_10005810 (*(int *)(0x10005810U))
#undef DAT_10005814
#define DAT_10005814 (*(int *)(0x10005814U))
#undef DAT_10005b5c
#define DAT_10005b5c (*(int *)(0x10005b5cU))
#undef DAT_10005b60
#define DAT_10005b60 (*(int *)(0x10005b60U))
#undef DAT_10005b64
#define DAT_10005b64 (*(int *)(0x10005b64U))
#undef DAT_10005be8
#define DAT_10005be8 (*(int *)(0x10005be8U))
#undef DAT_10005bec
#define DAT_10005bec (*(int *)(0x10005becU))
#undef DAT_10005bf0
#define DAT_10005bf0 (*(int *)(0x10005bf0U))
#undef DAT_10005bf4
#define DAT_10005bf4 (*(int *)(0x10005bf4U))
#undef DAT_10005bf8
#define DAT_10005bf8 (*(int *)(0x10005bf8U))
#undef DAT_10005bfc
#define DAT_10005bfc (*(int *)(0x10005bfcU))
#undef DAT_10005c00
#define DAT_10005c00 (*(int *)(0x10005c00U))
#undef DAT_10005c04
#define DAT_10005c04 (*(int *)(0x10005c04U))
#undef DAT_10005c08
#define DAT_10005c08 (*(int *)(0x10005c08U))
#undef DAT_10005d50
#define DAT_10005d50 (*(int *)(0x10005d50U))
#undef DAT_10005d54
#define DAT_10005d54 (*(int *)(0x10005d54U))
#undef DAT_10005d74
#define DAT_10005d74 (*(int *)(0x10005d74U))
#undef DAT_10005d78
#define DAT_10005d78 (*(int *)(0x10005d78U))
#undef DAT_10005d7c
#define DAT_10005d7c (*(int *)(0x10005d7cU))
#undef DAT_10005d80
#define DAT_10005d80 (*(int *)(0x10005d80U))
#undef DAT_10005d84
#define DAT_10005d84 (*(int *)(0x10005d84U))
#undef DAT_10005ef8
#define DAT_10005ef8 (*(int *)(0x10005ef8U))
#undef DAT_10005efc
#define DAT_10005efc (*(int *)(0x10005efcU))
#undef DAT_10005f00
#define DAT_10005f00 (*(int *)(0x10005f00U))
#undef DAT_10005f04
#define DAT_10005f04 (*(int *)(0x10005f04U))
#undef DAT_10005f08
#define DAT_10005f08 (*(int *)(0x10005f08U))
#undef DAT_10005f0c
#define DAT_10005f0c (*(int *)(0x10005f0cU))
#undef DAT_10005f10
#define DAT_10005f10 (*(int *)(0x10005f10U))
#undef DAT_10005f14
#define DAT_10005f14 (*(int *)(0x10005f14U))
#undef DAT_10005f18
#define DAT_10005f18 (*(int *)(0x10005f18U))
#undef DAT_10005f1c
#define DAT_10005f1c (*(int *)(0x10005f1cU))
#undef DAT_10005f20
#define DAT_10005f20 (*(int *)(0x10005f20U))
#undef DAT_10005f24
#define DAT_10005f24 (*(int *)(0x10005f24U))
#undef DAT_10005f28
#define DAT_10005f28 (*(int *)(0x10005f28U))
#undef DAT_10005f2c
#define DAT_10005f2c (*(int *)(0x10005f2cU))
#undef DAT_10005f30
#define DAT_10005f30 (*(int *)(0x10005f30U))
#undef DAT_10005f34
#define DAT_10005f34 (*(int *)(0x10005f34U))
#undef DAT_10005f38
#define DAT_10005f38 (*(int *)(0x10005f38U))
#undef DAT_10005f3c
#define DAT_10005f3c (*(int *)(0x10005f3cU))
#undef DAT_10005f40
#define DAT_10005f40 (*(int *)(0x10005f40U))
#undef DAT_10005f44
#define DAT_10005f44 (*(int *)(0x10005f44U))
#undef DAT_10005f48
#define DAT_10005f48 (*(int *)(0x10005f48U))
#undef DAT_10005f4c
#define DAT_10005f4c (*(uint32_t *)(0x10005f4cU))
#undef DAT_10005f50
#define DAT_10005f50 (*(uint32_t *)(0x10005f50U))
#undef DAT_10005f54
#define DAT_10005f54 (*(int *)(0x10005f54U))
#undef DAT_10005f58
#define DAT_10005f58 (*(int *)(0x10005f58U))
#undef DAT_10005f5c
#define DAT_10005f5c (*(int *)(0x10005f5cU))
#undef DAT_10005f60
#define DAT_10005f60 (*(int *)(0x10005f60U))
#undef DAT_10005f64
#define DAT_10005f64 (*(int *)(0x10005f64U))
#undef DAT_10005f68
#define DAT_10005f68 (*(int *)(0x10005f68U))
#undef DAT_10005f6c
#define DAT_10005f6c (*(int *)(0x10005f6cU))
#undef DAT_10005f70
#define DAT_10005f70 (*(int *)(0x10005f70U))
#undef DAT_10005f74
#define DAT_10005f74 (*(int *)(0x10005f74U))
#undef DAT_10005f78
#define DAT_10005f78 (*(int *)(0x10005f78U))
#undef DAT_10005f7c
#define DAT_10005f7c (*(int *)(0x10005f7cU))
#undef DAT_10005f80
#define DAT_10005f80 (*(int *)(0x10005f80U))
#undef DAT_10005f84
#define DAT_10005f84 (*(int *)(0x10005f84U))
#undef DAT_10005f88
#define DAT_10005f88 (*(int *)(0x10005f88U))
#undef DAT_10005f8c
#define DAT_10005f8c (*(int *)(0x10005f8cU))
#undef DAT_10005f90
#define DAT_10005f90 (*(int *)(0x10005f90U))
#undef DAT_10005f94
#define DAT_10005f94 (*(int *)(0x10005f94U))
#undef DAT_10005f98
#define DAT_10005f98 (*(int *)(0x10005f98U))
#undef DAT_10005f9c
#define DAT_10005f9c (*(int *)(0x10005f9cU))
#undef DAT_10005fa0
#define DAT_10005fa0 (*(int *)(0x10005fa0U))
#undef DAT_10005fa4
#define DAT_10005fa4 (*(int *)(0x10005fa4U))
#undef DAT_10005fa8
#define DAT_10005fa8 (*(int *)(0x10005fa8U))
#undef DAT_10005fac
#define DAT_10005fac (*(int *)(0x10005facU))
#undef DAT_10005fb0
#define DAT_10005fb0 (*(int *)(0x10005fb0U))
#undef DAT_10005fb4
#define DAT_10005fb4 (*(int *)(0x10005fb4U))
#undef DAT_10005fb8
#define DAT_10005fb8 (*(int *)(0x10005fb8U))
#undef DAT_10005fbc
#define DAT_10005fbc (*(int *)(0x10005fbcU))
#undef DAT_10005fc0
#define DAT_10005fc0 (*(int *)(0x10005fc0U))
#undef DAT_10005fc4
#define DAT_10005fc4 (*(int *)(0x10005fc4U))
#undef DAT_10005fc8
#define DAT_10005fc8 (*(int *)(0x10005fc8U))
#undef DAT_10005fcc
#define DAT_10005fcc (*(int *)(0x10005fccU))
#define local_8f8 (*(uint *)(frame + 24))
#define local_8f4 (*(uint *)(frame + 28))
#define local_8f0 (*(uint *)(frame + 32))
#define local_8ec (*(uint *)(frame + 36))
#define local_8e8 (*(uint *)(frame + 40))
#define local_8e0 (*(uint *)(frame + 48))
#define local_8d4 (*(char (*)[1024])(frame + 60))
#define local_4d4 (*(uint *)(frame + 1084))
#define local_4d0 (*(uint *)(frame + 1088))
#define local_4cc (*(uint *)(frame + 1092))
#define local_4c8 (*(uint *)(frame + 1096))
#define local_4c4 (*(uint *)(frame + 1100))
#define local_4c0 (*(uint *)(frame + 1104))
#define local_4bc (*(uint *)(frame + 1108))
#define local_4b8 (*(uint *)(frame + 1112))
#define local_4b4 (*(uint (*)[14])(frame + 1116))
#define local_47c (*(uint *)(frame + 1172))
#define local_478 (*(uint *)(frame + 1176))
#define local_474 (*(uint *)(frame + 1180))
#define local_470 (*(uint *)(frame + 1184))
#define local_46c (*(uint *)(frame + 1188))
#define local_468 (*(uint *)(frame + 1192))
#define local_464 (*(uint *)(frame + 1196))
#define local_460 (*(uint *)(frame + 1200))
#define local_45c (*(uint *)(frame + 1204))
#define local_458 (*(uint *)(frame + 1208))
#define local_454 (*(uint *)(frame + 1212))
#define local_450 (*(uint *)(frame + 1216))
#define local_44c (*(uint *)(frame + 1220))
#define local_448 (*(uint *)(frame + 1224))
#define local_444 (*(uint *)(frame + 1228))
#define local_440 (*(uint *)(frame + 1232))
#define local_43c (*(uint *)(frame + 1236))
#define local_438 (*(uint *)(frame + 1240))
#define local_434 (*(uint *)(frame + 1244))
#define local_430 (*(uint (*)[235])(frame + 1248))
#define local_84 (*(uint (*)[25])(frame + 2188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d50
 */

void recovered_10003d50(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2352] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int extraout_r0 = 0;
  int iVar6;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint extraout_r1_05 = 0;
  uint extraout_r1_06 = 0;
  uint extraout_r1_07 = 0;
  uint extraout_r1_08 = 0;
  uint uVar7;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;
  undefined4 extraout_r3_03 = 0;
  undefined4 extraout_r3_04 = 0;
  undefined4 uVar8;
  undefined4 extraout_r3_05 = 0;
  undefined4 extraout_r3_06 = 0;
  undefined4 extraout_r3_07 = 0;
  undefined4 extraout_r3_08 = 0;
  undefined4 extraout_r3_09 = 0;
  code *extraout_r3_10;
  code *extraout_r3_11;
  code *extraout_r3_12;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;

  if (param_2[8] != 4) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10003d3c(local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x172U)));
  uVar3 = *(ushort *)(param_2 + 4);
  bVar17 = uVar3 == 0x8086;
  if (bVar17) {
    uVar3 = (ushort)param_2[9];
  }
  if (bVar17 && uVar3 == 3) {
    recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x17dU)));
  }
  iVar4 = recovered_10006810((int)param_2);
  iVar6 = (0x54584b57U);
  uVar11 = 0;
  local_4b4[0xc] = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != (0x54584b57U))) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x1adU));
LAB_10003e70:
    recovered_10006098((int)local_8d4,0x400,pcVar13);
  }
  else {
    iVar5 = recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)(local_4b4 + 0xc));
    if (iVar5 == 0) {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x1c5U));
      goto LAB_10003e70;
    }
    iVar5 = 5;
    while (iVar5 != 0xb) {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      uVar7 = uVar11;
      if (*(uint *)(param_2 + iVar1) != 0) {
        uVar7 = uVar11 | 2;
      }
      if ((*(uint *)(param_2 + iVar1) & 1) != 0) {
        uVar7 = uVar11 | 1;
      }
      uVar11 = uVar7;
    }
    iVar5 = recovered_1000623c(((uintptr_t)pf_module_state + 0x11cU));
    if (iVar5 != 0) {
      uVar11 = uVar11 | 4;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar11 = uVar11 | 2;
    }
    local_84[0] = local_4b4[0xc] | uVar11;
    if (((*param_1 == iVar6) && (99 < (uint)param_1[2])) &&
       (((code *)param_1[0x18] != (code *)0x0 &&
        (iVar6 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,local_84[0]),
        iVar6 != 0)))) {
      recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,(int)local_84)
      ;
      recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x1f6U)),local_4b4[0xc]);
      uVar7 = local_84[0];
      recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x207U)),local_84[0]);
      recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x217U)),uVar11);
      uVar11 = (uint)((uVar7 & uVar11) == uVar11);
    }
    else {
      recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x1ddU)));
      uVar11 = 0;
    }
  }
  if (iVar4 == -1) {
    bVar2 = param_2[8];
    uVar10 = 0;
    uVar7 = 0;
    bVar17 = bVar2 == 1;
    local_4b4[0xc] = 0;
    if (bVar17) {
      bVar2 = param_2[9];
    }
    local_84[0] = 0;
    local_4b4[0xb] = 0;
    local_4b4[10] = 0;
    local_4b4[9] = 0;
    if (bVar17 && bVar2 == 6) {
      uVar16 = recovered_100068d8(param_1,(int)param_2,5,0x1000,local_4b4 + 0xc);
      uVar14 = local_4b4[0xc];
      if (uVar16 == 0) {
        recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x42eU)));
      }
      else {
        recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x444U)),local_4b4[0xc],
                           extraout_r3_05);
        recovered_10006a54(param_1,uVar14,0,(int)local_84);
        recovered_10006a54(param_1,local_4b4[0xc],4,(int)(local_4b4 + 0xb));
        recovered_10006a54(param_1,local_4b4[0xc],0xc,(int)(local_4b4 + 10));
        recovered_10006a54(param_1,local_4b4[0xc],0x10,(int)(local_4b4 + 9));
        if (-1 < (int)local_4b4[0xb]) {
          recovered_10006a40(param_1,local_4b4[0xc],4,local_4b4[0xb] | 0x80000000);
          recovered_10006a54(param_1,local_4b4[0xc],4,(int)(local_4b4 + 0xb));
        }
        uVar10 = local_4b4[0xb];
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x44dU)),local_84[0]);
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x455U)),uVar10);
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x45dU)),local_4b4[10]);
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x467U)),local_4b4[9]);
        uVar10 = 1;
      }
    }
    bVar2 = param_2[8];
    local_4b4[0xc] = 0;
    bVar17 = bVar2 == 4;
    local_84[0] = 0;
    if (bVar17) {
      bVar2 = param_2[9];
    }
    local_4b4[0xb] = 0;
    local_4b4[10] = 0;
    if (bVar17 && bVar2 == 3) {
      uVar16 = recovered_100068d8(param_1,(int)param_2,0,0x1000,local_4b4 + 0xc);
      uVar14 = local_4b4[0xc];
      if (uVar16 == 0) {
        recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x473U)));
      }
      else {
        recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x488U)),local_4b4[0xc],
                           extraout_r3_06);
        recovered_10006a54(param_1,uVar14,0,(int)local_84);
        recovered_10006a54(param_1,local_4b4[0xc],8,(int)(local_4b4 + 0xb));
        if ((local_4b4[0xb] & 1) == 0) {
          recovered_10006a40(param_1,local_4b4[0xc],8,local_4b4[0xb] | 1);
          recovered_10006a54(param_1,local_4b4[0xc],8,(int)(local_4b4 + 0xb));
        }
        recovered_10006aa0(param_1,local_4b4[0xc] + 0xe,2,(int)(local_4b4 + 10));
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x490U)),local_84[0]);
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x498U)),local_4b4[0xb]);
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4a0U)),local_4b4[10]);
        uVar7 = 1;
      }
    }
    uVar14 = 0;
    local_4b4[0xc] = 0;
    local_84[0] = 0;
    local_4b4[0xb] = 0;
    local_4b4[10] = 0;
    if ((param_2[8] == 0xc) && (uVar14 = 0, param_2[9] == 3)) {
      uVar16 = recovered_100068d8(param_1,(int)param_2,0,0x1000,local_4b4 + 0xc);
      uVar14 = local_4b4[0xc];
      if (uVar16 == 0) {
        for (uVar14 = 0; uVar14 != 6; uVar14 = uVar14 + 1) {
          uVar16 = *(uint *)(param_2 + uVar14 * 4 + 0x14);
          local_4b4[9] = 0;
          if (((uVar16 & 1) != 0) &&
             (iVar6 = recovered_10005fd0(param_1,uVar16 & 0xfffc,2,(int)(local_4b4 + 9)), iVar6 != 0
             )) {
            recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4ccU)));
            recovered_10006150((int)local_8d4,0x400,uVar14);
            recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4d7U)),
                               uVar16 & 0xfffffffc);
            recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4ddU)),local_4b4[9]
                              );
            uVar14 = 1;
            goto LAB_10004dfc;
          }
        }
        recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4e7U)));
        uVar14 = 0;
      }
      else {
        recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x4acU)),local_4b4[0xc],
                           extraout_r3);
        recovered_10006a54(param_1,uVar14,0,(int)local_84);
        recovered_10006a54(param_1,local_4b4[0xc],4,(int)(local_4b4 + 0xb));
        recovered_10006a54(param_1,local_4b4[0xc],8,(int)(local_4b4 + 10));
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b4U)),local_84[0]);
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4bcU)),local_4b4[0xb]);
        recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4c4U)),local_4b4[10]);
        uVar14 = 1;
      }
    }
LAB_10004dfc:
    uVar14 = uVar7 | uVar10 | uVar14;
    bVar2 = param_2[8];
    local_4b4[0xc] = 0;
    local_84[0] = 0;
    local_4b4[0xb] = 0;
    if (bVar2 == 2) {
      for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
        uVar10 = recovered_100068d8(param_1,(int)param_2,uVar7,0x1000,local_4b4 + 0xc);
        if (uVar10 != 0) {
          recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4fcU)));
          recovered_10006150((int)local_8d4,0x400,uVar7);
          uVar10 = local_4b4[0xc];
          recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x50dU)),local_4b4[0xc],
                             extraout_r3_07);
          recovered_10006a54(param_1,uVar10,0,(int)local_84);
          recovered_10006a54(param_1,local_4b4[0xc],4,(int)(local_4b4 + 0xb));
          recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x519U)),local_84[0]);
          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x525U));
          uVar10 = local_4b4[0xb];
LAB_10004f8c:
          recovered_10006028((int)local_8d4,0x400,pcVar13,uVar10);
          break;
        }
        uVar10 = *(uint *)(param_2 + uVar7 * 4 + 0x14);
        if (((uVar10 & 1) != 0) &&
           (iVar6 = recovered_10005fd0(param_1,uVar10 & 0xfffc,2,(int)local_84), iVar6 != 0)) {
          recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x531U)));
          recovered_10006150((int)local_8d4,0x400,uVar7);
          recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x540U)),
                             uVar10 & 0xfffffffc);
          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x54aU));
          uVar10 = local_84[0];
          goto LAB_10004f8c;
        }
      }
      if (uVar7 != 6) {
        uVar14 = 1;
      }
      bVar2 = param_2[8];
    }
    local_4b4[0xc] = 0;
    uVar7 = 0;
    local_84[0] = 0;
    if (bVar2 == 3) {
      for (uVar10 = 0; uVar10 != 6; uVar10 = uVar10 + 1) {
        uVar7 = recovered_100068d8(param_1,(int)param_2,uVar10,0x1000,local_4b4 + 0xc);
        if (uVar7 != 0) {
          recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x558U)));
          recovered_10006150((int)local_8d4,0x400,uVar10);
          uVar7 = local_4b4[0xc];
          recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x569U)),local_4b4[0xc],
                             extraout_r3_08);
          recovered_10006a54(param_1,uVar7,0,(int)local_84);
          if (extraout_r0_00 != 0) {
            recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x575U)),local_84[0])
            ;
          }
          break;
        }
      }
      uVar7 = 0;
      if (uVar10 != 6) {
        uVar7 = 1;
      }
    }
    uVar7 = uVar14 | uVar7 | uVar11;
    if (uVar7 == 0) {
      local_4b4[0xc] = 0;
      local_84[0] = 0;
      for (uVar11 = 0; uVar11 != 6; uVar11 = uVar11 + 1) {
        uVar7 = recovered_100068d8(param_1,(int)param_2,uVar11,0x1000,local_4b4 + 0xc);
        if (uVar7 != 0) {
          recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x581U)));
          recovered_10006150((int)local_8d4,0x400,uVar11);
          uVar7 = local_4b4[0xc];
          recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x58bU)),local_4b4[0xc],
                             extraout_r3_09);
          recovered_10006a54(param_1,uVar7,0,(int)local_84);
          if (extraout_r0_01 != 0) {
            recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x590U)),local_84[0])
            ;
          }
          break;
        }
      }
      uVar7 = 0;
      if (uVar11 != 6) {
        uVar7 = 1;
      }
    }
  }
  else {
    uVar7 = recovered_10006810((int)param_2);
    if (uVar7 == 0xffffffff) {
      uVar7 = 0;
    }
    else {
      recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x226U)),uVar7);
      local_84[0] = 0;
      recovered_10006850((undefined1 *)(local_4b4 + 0xc),0x58);
      if (((param_2[0x12] & 0x10) != 0) &&
         (iVar6 = recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x34,1
                                     ,(int)local_84), iVar6 != 0)) {
        uVar7 = 0;
        while( true ) {
          bVar18 = 0x1e < uVar7;
          bVar17 = uVar7 == 0x1f;
          if (uVar7 < 0x20) {
            bVar18 = 0xae < local_84[0] - 0x40;
            bVar17 = local_84[0] - 0x40 == 0xaf;
          }
          if (bVar18 && !bVar17) break;
          local_4b4[0xb] = 0;
          local_4b4[10] = 0;
          local_4b4[9] = 0;
          local_4b4[8] = 0;
          local_4b4[7] = 0;
          local_4b4[6] = 0;
          iVar6 = recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                     local_84[0] & 0xffff,1,(int)(local_4b4 + 0xb));
          if ((iVar6 == 0) ||
             (iVar6 = recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_84[0] & 0xffff) + 1 & 0xffff,1,(int)(local_4b4 + 10)
                                        ), iVar6 == 0)) break;
          uVar10 = extraout_r1;
          if (local_4b4[0xb] == 9) {
            iVar6 = recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       (local_84[0] & 0xffff) + 3 & 0xffff,1,(int)(local_4b4 + 9));
            uVar10 = extraout_r1_00;
            if (iVar6 != 0) {
              iVar6 = recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_84[0] & 0xffff) + 4 & 0xffff,1,(int)(local_4b4 + 8))
              ;
              uVar10 = extraout_r1_01;
              if (iVar6 != 0) {
                iVar6 = recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                           (local_84[0] & 0xffff) + 8 & 0xffff,4,
                                           (int)(local_4b4 + 7));
                uVar10 = extraout_r1_02;
                if (iVar6 != 0) {
                  iVar6 = recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],
                                             (uint)param_2[2],(local_84[0] & 0xffff) + 0xc & 0xffff,
                                             4,(int)(local_4b4 + 6));
                  uVar10 = extraout_r1_03;
                  if (iVar6 != 0) {
                    local_4b4[5] = 0;
                    local_460 = local_460 + 1;
                    if (local_4b4[9] == 1) {
                      bVar17 = recovered_10006874(param_1,(int)param_2,local_4b4[8],local_4b4[7],
                                                  local_4b4[6],(int *)(local_4b4 + 5));
                      uVar10 = extraout_r1_04;
                      if (bVar17) {
                        local_4b4[0xc] = local_4b4[5];
                        local_474 = local_4b4[8];
                        goto LAB_100043a4;
                      }
                    }
                    if (local_4b4[9] == 2) {
                      bVar17 = recovered_10006874(param_1,(int)param_2,local_4b4[8],local_4b4[7],
                                                  local_4b4[6],(int *)(local_4b4 + 5));
                      uVar10 = extraout_r1_05;
                      if (bVar17) {
                        local_4b4[0xd] = local_4b4[5];
                        local_470 = local_4b4[8];
                        local_4b4[4] = 0;
                        iVar6 = recovered_10006428(param_1,(uint)*param_2,(uint)param_2[1],
                                                   (uint)param_2[2],
                                                   (local_84[0] & 0xffff) + 0x10 & 0xffff,4,
                                                   (int)(local_4b4 + 4));
                        uVar10 = extraout_r1_06;
                        if (iVar6 != 0) {
                          local_464 = local_4b4[4];
                        }
                        goto LAB_100043a4;
                      }
                    }
                    if (local_4b4[9] == 3) {
                      bVar17 = recovered_10006874(param_1,(int)param_2,local_4b4[8],local_4b4[7],
                                                  local_4b4[6],(int *)(local_4b4 + 5));
                      uVar10 = extraout_r1_07;
                      if (bVar17) {
                        local_47c = local_4b4[5];
                        local_46c = local_4b4[8];
                        goto LAB_100043a4;
                      }
                    }
                    if (local_4b4[9] == 4) {
                      bVar17 = recovered_10006874(param_1,(int)param_2,local_4b4[8],local_4b4[7],
                                                  local_4b4[6],(int *)(local_4b4 + 5));
                      uVar10 = extraout_r1_08;
                      if (bVar17) {
                        local_478 = local_4b4[5];
                        local_468 = local_4b4[8];
                      }
                    }
                  }
                }
              }
            }
          }
LAB_100043a4:
          if (local_4b4[10] != 0) {
            uVar10 = local_84[0];
          }
          if (local_4b4[10] == 0 || local_4b4[10] == uVar10) break;
          local_84[0] = local_4b4[10];
          uVar7 = uVar7 + 1;
        }
        if (local_4b4[0xc] != 0) {
          local_84[0] = 0;
          recovered_10006a10(param_1,local_4b4[0xc],0x14,(int)&local_44c);
          recovered_10006a2c(param_1,local_4b4[0xc],0x14,0);
          recovered_10006a40(param_1,local_4b4[0xc],0,0);
          recovered_10006a54(param_1,local_4b4[0xc],4,(int)&local_45c);
          recovered_10006a40(param_1,local_4b4[0xc],0,1);
          recovered_10006a54(param_1,local_4b4[0xc],4,(int)&local_458);
          local_450 = local_458 & 1;
          local_454 = 0;
          recovered_10006a40(param_1,local_4b4[0xc],8,0);
          recovered_10006a40(param_1,local_4b4[0xc],0xc,local_454);
          recovered_10006a40(param_1,local_4b4[0xc],8,1);
          recovered_10006a40(param_1,local_4b4[0xc],0xc,local_450);
          if ((((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) && (0x7b < (uint)param_1[2]))
             && ((code *)param_1[0x1e] != (code *)0x0)) {
            (*(code *)param_1[0x1e])();
          }
          recovered_10006a2c(param_1,local_4b4[0xc],0x14,1);
          recovered_10006a2c(param_1,local_4b4[0xc],0x14,3);
          recovered_10006a2c(param_1,local_4b4[0xc],0x14,0xb);
          recovered_10006a10(param_1,local_4b4[0xc],0x14,(int)&local_448);
          recovered_10006a70(param_1,local_4b4[0xc],0x12,(int)&local_444);
          recovered_10006a10(param_1,local_4b4[0xc],0x15,(int)local_430);
          recovered_10006a8c(param_1,local_4b4[0xc],0x16,0);
          recovered_10006a70(param_1,local_4b4[0xc],0x18,(int)&local_440);
          recovered_10006a70(param_1,local_4b4[0xc],0x1c,(int)&local_43c);
          recovered_10006a70(param_1,local_4b4[0xc],0x1e,(int)local_84);
          if ((extraout_r0 != 0) && (local_438 = local_84[0], local_4b4[0xd] != 0)) {
            local_434 = local_464 * local_84[0] + local_4b4[0xd];
          }
          recovered_10006b70((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x256U)),
                             ((uintptr_t)pf_module_state + 0x266U));
          recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x24bU)),local_460);
          recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x26dU)),local_474);
          recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x27dU)),local_4b4[0xc],
                             extraout_r3_00);
          recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x28aU)),local_45c);
          recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x2a0U)),local_458);
          recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x2b6U)),local_454);
          recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x2ccU)),local_450);
          recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x2e2U)),local_44c);
          recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x2fbU)),local_448);
          recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x313U)),local_444);
          recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x320U)),local_440);
          recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x331U)),local_43c);
          uVar7 = local_434;
          uVar8 = extraout_r3_01;
          if (local_434 != 0) {
            recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x345U)),local_470);
            recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x355U)),local_464);
            recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x36cU)),uVar7,
                               extraout_r3_02);
            uVar8 = extraout_r3_03;
          }
          if (local_47c != 0) {
            recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x37fU)),local_47c,uVar8);
            uVar8 = extraout_r3_04;
          }
          if (local_478 != 0) {
            recovered_10006be4((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x389U)),local_478,uVar8);
          }
          recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x39cU)),local_430[0]);
          iVar6 = ((uintptr_t)pf_module_state + 0x3bfU);
          if ((local_448 & 8) == 0) {
            iVar6 = ((uintptr_t)pf_module_state + 0x3cbU);
          }
          recovered_10006b70((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x3b3U)),iVar6);
          uVar7 = 1;
          goto LAB_10004828;
        }
      }
      if (local_460 != 0) {
        recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x24bU)),local_460);
      }
      if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
        for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
          local_4b4[0xc] = 0;
          local_84[0] = 0;
          if ((*(uint *)(param_2 + uVar7 * 4 + 0x14) & 1) != 0) {
            uVar14 = *(uint *)(param_2 + uVar7 * 4 + 0x14) & 0xfffffffc;
            uVar10 = uVar14 + 0x12 & 0xffff;
            iVar6 = recovered_10005fd0(param_1,uVar10,1,(int)(local_4b4 + 0xc));
            if (iVar6 != 0) {
              recovered_10006b70((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x256U)),
                                 ((uintptr_t)pf_module_state + 0x3dcU));
              recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x3e6U)));
              recovered_10006150((int)local_8d4,0x400,uVar7);
              recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x3faU)),uVar14);
              recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x409U)),
                                 local_4b4[0xc]);
              recovered_10006c8c(param_1,uVar10);
              recovered_10006c8c(param_1,uVar10);
              uVar7 = 1;
              iVar6 = recovered_10005fd0(param_1,uVar10,1,(int)local_84);
              if (iVar6 != 0) {
                recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x41cU)),
                                   local_84[0]);
              }
              goto LAB_10004828;
            }
          }
        }
      }
      recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x22fU)));
      uVar7 = 0;
    }
LAB_10004828:
    uVar7 = uVar7 | uVar11;
  }
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x19dU));
  if (uVar7 == 0) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0xe0U));
  }
  recovered_10006098((int)local_8d4,0x400,pcVar13);
  uVar11 = 0;
  local_4b4[0xc] = 0;
  local_84[0] = 0;
  bVar2 = param_2[8];
  local_4b4[0xb] = 0;
  bVar17 = bVar2 == 4;
  local_4b4[10] = 0;
  if (bVar17) {
    bVar2 = param_2[9];
  }
  local_4b4[9] = 0;
  local_4b4[8] = 0;
  local_4b4[7] = 0;
  local_4b4[6] = 0;
  local_4b4[5] = 0;
  local_4b4[4] = 0;
  local_4b4[3] = 0;
  local_4b4[2] = 0;
  local_4b4[1] = 0;
  local_4b4[0] = 0;
  local_4b8 = 0;
  local_4bc = 0;
  local_4c0 = 0;
  if (bVar17 && bVar2 == 3) {
    uVar7 = recovered_100068d8(param_1,(int)param_2,0,0x1000,local_4b4 + 0xc);
    if (uVar7 == 0) {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x599U));
    }
    else {
      recovered_10006a54(param_1,local_4b4[0xc],8,(int)local_84);
      if ((local_84[0] & 1) == 0) {
        recovered_10006a40(param_1,local_4b4[0xc],8,local_84[0] | 1);
      }
      bVar17 = recovered_10006cd4(param_1,local_4b4[0xc],8,1,1);
      if (bVar17) {
        recovered_10006a70(param_1,local_4b4[0xc],0xe,(int)(local_4b4 + 0xb));
        if ((local_4b4[0xb] & 0x7fff) == 0) {
          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x5d2U));
        }
        else {
          iVar6 = recovered_10006d5c(param_1,((uintptr_t)pf_module_state + 0x964U),0x400,(int)(local_4b4 + 10));
          if ((iVar6 == 0) ||
             (iVar6 = recovered_10006d5c(param_1,((uintptr_t)pf_module_state + 0xd64U),0x800,
                                         (int)(local_4b4 + 8)), iVar6 == 0)) {
            pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x5e9U));
          }
          else {
            recovered_10006850((undefined1 *)(((uintptr_t)pf_module_state + 0x964U)),0x400);
            recovered_10006850((undefined1 *)(((uintptr_t)pf_module_state + 0xd64U)),0x800);
            recovered_10006a10(param_1,local_4b4[0xc],0x4c,(int)(local_4b4 + 6));
            recovered_10006a10(param_1,local_4b4[0xc],0x5c,(int)(local_4b4 + 5));
            recovered_10006a10(param_1,local_4b4[0xc],0x4e,(int)(local_4b4 + 4));
            recovered_10006a10(param_1,local_4b4[0xc],0x5e,(int)(local_4b4 + 3));
            recovered_10006a2c(param_1,local_4b4[0xc],0x4c,local_4b4[6] & 0xfffffffd);
            recovered_10006a2c(param_1,local_4b4[0xc],0x5c,local_4b4[5] & 0xfffffffd);
            uVar14 = 2;
            recovered_10006cd4(param_1,local_4b4[0xc],0x4c,2,0);
            recovered_10006cd4(param_1,local_4b4[0xc],0x5c,2,0);
            uVar10 = local_4b4[4];
            uVar7 = local_4b4[3];
            if (((local_4b4[4] & 0x40) == 0) || (local_8e0 = 0x100, (local_4b4[3] & 0x40) == 0)) {
              if ((local_4b4[4] & 0x20) == 0 || (local_4b4[3] & 0x20) == 0) {
                if ((local_4b4[4] & 0x10) == 0 || (local_4b4[3] & 0x10) == 0) {
                  recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x603U)));
                  recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x623U)),uVar10
                                    );
                  recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x62fU)),uVar7)
                  ;
                  goto LAB_100051e0;
                }
                uVar14 = 0;
                local_8e0 = 2;
              }
              else {
                uVar14 = 1;
                local_8e0 = 0x10;
              }
            }
            recovered_10006a40(param_1,local_4b4[0xc],0x40,local_4b4[10]);
            recovered_10006a40(param_1,local_4b4[0xc],0x44,local_4b4[9]);
            recovered_10006a40(param_1,local_4b4[0xc],0x50,local_4b4[8]);
            recovered_10006a40(param_1,local_4b4[0xc],0x54,local_4b4[7]);
            recovered_10006a2c(param_1,local_4b4[0xc],0x4e,local_4b4[4] & 0xf0 | uVar14);
            recovered_10006a2c(param_1,local_4b4[0xc],0x5e,local_4b4[3] & 0xf0 | uVar14);
            recovered_10006a8c(param_1,local_4b4[0xc],0x4a,0x8000);
            recovered_10006a8c(param_1,local_4b4[0xc],0x4a,0);
            recovered_10006a8c(param_1,local_4b4[0xc],0x48,0);
            recovered_10006a8c(param_1,local_4b4[0xc],0x58,0x8000);
            recovered_10006a8c(param_1,local_4b4[0xc],0x5a,1);
            recovered_10006a2c(param_1,local_4b4[0xc],0x4d,0xff);
            recovered_10006a2c(param_1,local_4b4[0xc],0x5d,0xff);
            recovered_10006db4(param_1);
            recovered_10006db4(param_1);
            recovered_10006a2c(param_1,local_4b4[0xc],0x5c,2);
            recovered_10006a2c(param_1,local_4b4[0xc],0x4c,2);
            bVar17 = recovered_10006cd4(param_1,local_4b4[0xc],0x4c,2,2);
            if ((bVar17) && (bVar17 = recovered_10006cd4(param_1,local_4b4[0xc],0x5c,2,2), bVar17))
            {
              uVar7 = 0xffffffff;
              uVar10 = 0;
              uVar14 = 0;
              local_8e8 = 0;
              local_8f4 = 0;
              local_8f0 = 0;
              local_8ec = 0;
              local_8f8 = 0;
              for (uVar16 = 0; puVar12 = local_4b4 + 2, uVar16 != 4; uVar16 = uVar16 + 1) {
                local_4c4 = 0;
                if (((local_4b4[0xb] >> (uVar16 & 0xff) & 1) != 0) &&
                   (uVar10 = uVar10 + 1, uVar7 == 0xffffffff)) {
                  iVar6 = recovered_10006df4(param_1,local_4b4[0xc],local_8e0,puVar12,local_4b4 + 1,
                                             uVar16,0,0,&local_4c4);
                  if (iVar6 == 0) {
                    uVar7 = 0xffffffff;
                  }
                  else {
                    local_8e8 = local_4c4;
                    local_4c8 = 0;
                    local_4cc = 0;
                    local_4d0 = 0;
                    recovered_10006df4(param_1,local_4b4[0xc],local_8e0,puVar12,local_4b4 + 1,uVar16
                                       ,0,2,&local_4c8);
                    recovered_10006df4(param_1,local_4b4[0xc],local_8e0,puVar12,local_4b4 + 1,uVar16
                                       ,0,4,&local_4cc);
                    uVar14 = local_4cc >> 0x10 & 0xff;
                    if (uVar14 == 0) {
                      uVar14 = 1;
                      while( true ) {
                        if (uVar14 == 0x10) break;
                        local_4d4 = 0;
                        iVar6 = recovered_10006df4(param_1,local_4b4[0xc],local_8e0,local_4b4 + 2,
                                                   local_4b4 + 1,uVar16,uVar14,5,&local_4d4);
                        if ((iVar6 != 0) && (1 < local_4d4 + 1)) {
                          local_4d0 = local_4d4;
                          local_8f8 = local_8f8 + uVar14;
                          goto LAB_10005c1c;
                        }
                        uVar14 = uVar14 + 1;
                      }
                      uVar14 = 0;
                      local_8f8 = local_8f8 + 0xf;
                    }
                    else {
                      recovered_10006df4(param_1,local_4b4[0xc],local_8e0,puVar12,local_4b4 + 1,
                                         uVar16,uVar14,5,&local_4d0);
                    }
LAB_10005c1c:
                    local_8ec = local_4d0;
                    local_8f0 = local_4cc;
                    local_8f4 = local_4c8;
                    if (uVar14 != 0) {
                      recovered_10006df4(param_1,local_4b4[0xc],local_8e0,local_4b4 + 2,
                                         local_4b4 + 1,uVar16,uVar14,4,&local_4b8);
                      recovered_10006df4(param_1,local_4b4[0xc],local_8e0,local_4b4 + 2,
                                         local_4b4 + 1,uVar16,uVar14,8,local_4b4);
                      recovered_10006df4(param_1,local_4b4[0xc],local_8e0,local_4b4 + 2,
                                         local_4b4 + 1,uVar16,uVar14,10,&local_4bc);
                      recovered_10006df4(param_1,local_4b4[0xc],local_8e0,local_4b4 + 2,
                                         local_4b4 + 1,uVar16,uVar14,0xb,&local_4c0);
                    }
                    uVar7 = uVar16;
                  }
                }
              }
              recovered_10006098((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x657U)));
              recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x66bU)),uVar10);
              recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x679U)),local_8e0);
              if (uVar7 != 0xffffffff) {
                recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x688U)),uVar7);
                recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x692U)),
                                   local_8e8);
                recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x6a1U)),
                                   local_8f4);
                recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x6b2U)),
                                   local_8f0);
                recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x6c0U)),uVar14);
                recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x6caU)),
                                   local_8ec);
                if (local_8f8 != 0) {
                  recovered_100060ec((int)local_8d4,(char *)(((uintptr_t)pf_module_state + 0x6dbU)),local_8f8);
                }
                if (uVar14 != 0) {
                  recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x6efU)),
                                     local_4b4[0]);
                  recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x6f9U)),
                                     local_4b8);
                  recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x708U)),
                                     local_4bc);
                  recovered_10006028((int)local_8d4,0x400,(char *)(((uintptr_t)pf_module_state + 0x714U)),
                                     local_4c0);
                }
              }
              goto LAB_100051e0;
            }
            pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x63bU));
          }
        }
      }
      else {
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x5b3U));
      }
    }
    recovered_10006098((int)local_8d4,0x400,pcVar13);
  }
LAB_100051e0:
  iVar6 = recovered_1000649c((int)param_2);
  recovered_10003d3c((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x192U)));
  recovered_10006098((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x725U)));
  recovered_10006fec((int)local_84,0x60,(uint)*param_2,2);
  pcVar15 = (char *)(((uintptr_t)pf_module_state + 0x727U));
  recovered_10006098((int)local_84,0x60,pcVar15);
  recovered_10006fec((int)local_84,0x60,(uint)param_2[1],2);
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x729U));
  recovered_10006098((int)local_84,0x60,pcVar13);
  recovered_10006150((int)local_84,0x60,(uint)param_2[2]);
  puVar12 = local_4b4 + 0xc;
  recovered_10003d3c((undefined1 *)puVar12,0x400,(char *)(((uintptr_t)pf_module_state + 0x72bU)));
  recovered_10006fec((int)puVar12,0x400,(uint)*param_2,2);
  recovered_10006098((int)puVar12,0x400,pcVar15);
  recovered_10006fec((int)puVar12,0x400,(uint)param_2[1],2);
  recovered_10006098((int)puVar12,0x400,pcVar13);
  recovered_10006150((int)puVar12,0x400,(uint)param_2[2]);
  recovered_10006098((int)puVar12,0x400,(char *)(((uintptr_t)pf_module_state + 0x730U)));
  recovered_10006fec((int)puVar12,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10006098((int)puVar12,0x400,(char *)(((uintptr_t)pf_module_state + 0x739U)));
  recovered_10006fec((int)puVar12,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10006098((int)puVar12,0x400,(char *)(((uintptr_t)pf_module_state + 0x742U)));
  recovered_10006fec((int)puVar12,0x400,(uint)param_2[8],2);
  recovered_10006098((int)puVar12,0x400,pcVar13);
  recovered_10006fec((int)puVar12,0x400,(uint)param_2[9],2);
  recovered_10006098((int)puVar12,0x400,pcVar13);
  recovered_10006fec((int)puVar12,0x400,(uint)param_2[10],2);
  recovered_10006098((int)puVar12,0x400,(char *)(((uintptr_t)pf_module_state + 0x74aU)));
  recovered_10006fec((int)puVar12,0x400,(uint)param_2[0xb],2);
  recovered_10006028((int)puVar12,0x400,(char *)(((uintptr_t)pf_module_state + 0x755U)),
                     *(uint *)(param_2 + 0x10));
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x75dU));
  pcVar15 = (char *)(((uintptr_t)pf_module_state + 0x3daU));
  pcVar9 = extraout_r3_10;
  for (; uVar11 != 6; uVar11 = uVar11 + 1) {
    uVar7 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
    if (uVar7 != 0) {
      recovered_10006098((int)puVar12,0x400,pcVar13);
      recovered_10006150((int)puVar12,0x400,uVar11);
      recovered_10006098((int)puVar12,0x400,pcVar15);
      recovered_10006fec((int)puVar12,0x400,uVar7,8);
      pcVar9 = extraout_r3_11;
    }
  }
  if (local_8d4[0] != '\0') {
    recovered_10006098((int)(local_4b4 + 0xc),0x400,(char *)(((uintptr_t)pf_module_state + 0x3d8U)));
    recovered_10006098((int)(local_4b4 + 0xc),0x400,local_8d4);
    pcVar9 = extraout_r3_12;
  }
  if (param_1 != (int *)0x0) {
    pcVar9 = (code *)param_1[3];
  }
  if (param_1 != (int *)0x0 && pcVar9 != (code *)0x0) {
    (*pcVar9)(local_84,iVar6,local_4b4 + 0xc);
  }
  return;
}

#undef DAT_10004d84
#undef DAT_10004d88
#undef DAT_10004d8c
#undef DAT_10004e98
#undef DAT_10004f34
#undef DAT_10004ffc
#undef DAT_10005000
#undef DAT_10005004
#undef DAT_10005008
#undef DAT_100054d4
#undef DAT_100054d8
#undef DAT_100054dc
#undef DAT_100054e0
#undef DAT_100054e4
#undef DAT_100054e8
#undef DAT_100054ec
#undef DAT_100054f0
#undef DAT_100054f4
#undef DAT_100054f8
#undef DAT_100054fc
#undef DAT_10005500
#undef DAT_10005504
#undef DAT_10005508
#undef DAT_1000550c
#undef DAT_10005510
#undef DAT_10005514
#undef DAT_10005518
#undef DAT_10005788
#undef DAT_1000579c
#undef DAT_100057b0
#undef DAT_100057b4
#undef DAT_100057b8
#undef DAT_100057e8
#undef DAT_100057ec
#undef DAT_100057f0
#undef DAT_100057f4
#undef DAT_100057f8
#undef DAT_100057fc
#undef DAT_10005800
#undef DAT_10005804
#undef DAT_10005808
#undef DAT_1000580c
#undef DAT_10005810
#undef DAT_10005814
#undef DAT_10005b5c
#undef DAT_10005b60
#undef DAT_10005b64
#undef DAT_10005be8
#undef DAT_10005bec
#undef DAT_10005bf0
#undef DAT_10005bf4
#undef DAT_10005bf8
#undef DAT_10005bfc
#undef DAT_10005c00
#undef DAT_10005c04
#undef DAT_10005c08
#undef DAT_10005d50
#undef DAT_10005d54
#undef DAT_10005d74
#undef DAT_10005d78
#undef DAT_10005d7c
#undef DAT_10005d80
#undef DAT_10005d84
#undef DAT_10005ef8
#undef DAT_10005efc
#undef DAT_10005f00
#undef DAT_10005f04
#undef DAT_10005f08
#undef DAT_10005f0c
#undef DAT_10005f10
#undef DAT_10005f14
#undef DAT_10005f18
#undef DAT_10005f1c
#undef DAT_10005f20
#undef DAT_10005f24
#undef DAT_10005f28
#undef DAT_10005f2c
#undef DAT_10005f30
#undef DAT_10005f34
#undef DAT_10005f38
#undef DAT_10005f3c
#undef DAT_10005f40
#undef DAT_10005f44
#undef DAT_10005f48
#undef DAT_10005f4c
#undef DAT_10005f50
#undef DAT_10005f54
#undef DAT_10005f58
#undef DAT_10005f5c
#undef DAT_10005f60
#undef DAT_10005f64
#undef DAT_10005f68
#undef DAT_10005f6c
#undef DAT_10005f70
#undef DAT_10005f74
#undef DAT_10005f78
#undef DAT_10005f7c
#undef DAT_10005f80
#undef DAT_10005f84
#undef DAT_10005f88
#undef DAT_10005f8c
#undef DAT_10005f90
#undef DAT_10005f94
#undef DAT_10005f98
#undef DAT_10005f9c
#undef DAT_10005fa0
#undef DAT_10005fa4
#undef DAT_10005fa8
#undef DAT_10005fac
#undef DAT_10005fb0
#undef DAT_10005fb4
#undef DAT_10005fb8
#undef DAT_10005fbc
#undef DAT_10005fc0
#undef DAT_10005fc4
#undef DAT_10005fc8
#undef DAT_10005fcc
#undef local_8f8
#undef local_8f4
#undef local_8f0
#undef local_8ec
#undef local_8e8
#undef local_8e0
#undef local_8d4
#undef local_4d4
#undef local_4d0
#undef local_4cc
#undef local_4c8
#undef local_4c4
#undef local_4c0
#undef local_4bc
#undef local_4b8
#undef local_4b4
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_46c
#undef local_468
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450
#undef local_44c
#undef local_448
#undef local_444
#undef local_440
#undef local_43c
#undef local_438
#undef local_434
#undef local_430
#undef local_84

#undef DAT_10006024
#define DAT_10006024 (*(int *)(0x10006024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fd0
 */

undefined4 recovered_10005fd0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0 || param_4 == 0)) || (*param_1 != (0x54584b57U))) ||
     (((uint)param_1[2] < 0x58 || ((code *)param_1[0x15] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_10006024

#undef DAT_10006090
#define DAT_10006090 (*(int *)(0x10006090U))
#undef DAT_10006094
#define DAT_10006094 (*(int *)(0x10006094U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006028
 */

void recovered_10006028(int param_1,uint param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006098(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x3d8U)));
  recovered_10006098(param_1,param_2,param_3);
  recovered_10006098(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x3daU)));
  recovered_10006fec(param_1,param_2,param_4,8);
  return;
}

#undef DAT_10006090
#undef DAT_10006094

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006098
 */

void recovered_10006098(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_1000623c(param_1);
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


#undef DAT_10006148
#define DAT_10006148 (*(int *)(0x10006148U))
#undef DAT_1000614c
#define DAT_1000614c (*(int *)(0x1000614cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060ec
 */

void recovered_100060ec(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006098(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x3d8U)));
  recovered_10006098(param_1,0x400,param_2);
  recovered_10006098(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x3daU)));
  recovered_10006150(param_1,0x400,param_3);
  return;
}

#undef DAT_10006148
#undef DAT_1000614c

#define abStack_a8 (*(byte (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006150
 */

void recovered_10006150(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10006200(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_100070e0(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10006200(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006200
 */

void recovered_10006200(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_1000623c(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000623c
 */

int recovered_1000623c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10006264(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10006428((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10006428((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10006428((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10006428((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10006428((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10006498
#define DAT_10006498 (*(uint8_t * *)(0x10006498U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006428
 */

undefined4
recovered_10006428(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (0x54584b57U))) &&
     (0x5f < (uint)param_1[2])) {
    pcVar2 = (0x54584b57U);
    if (param_7 != 0) {
      pcVar2 = (code *)param_1[0x17];
    }
    if (param_7 != 0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006498

#undef DAT_100066a4
#define DAT_100066a4 (*(uint *)(0x100066a4U))
#undef DAT_100067b8
#define DAT_100067b8 (*(uint32_t *)(0x100067b8U))
#undef DAT_100067bc
#define DAT_100067bc (*(int *)(0x100067bcU))
#undef DAT_100067c0
#define DAT_100067c0 (*(int *)(0x100067c0U))
#undef DAT_100067c4
#define DAT_100067c4 (*(int *)(0x100067c4U))
#undef DAT_100067c8
#define DAT_100067c8 (*(int *)(0x100067c8U))
#undef DAT_100067cc
#define DAT_100067cc (*(int *)(0x100067ccU))
#undef DAT_100067d0
#define DAT_100067d0 (*(int *)(0x100067d0U))
#undef DAT_100067d4
#define DAT_100067d4 (*(int *)(0x100067d4U))
#undef DAT_100067d8
#define DAT_100067d8 (*(int *)(0x100067d8U))
#undef DAT_100067dc
#define DAT_100067dc (*(int *)(0x100067dcU))
#undef DAT_100067e0
#define DAT_100067e0 (*(int *)(0x100067e0U))
#undef DAT_100067e4
#define DAT_100067e4 (*(int *)(0x100067e4U))
#undef DAT_100067e8
#define DAT_100067e8 (*(int *)(0x100067e8U))
#undef DAT_100067ec
#define DAT_100067ec (*(int *)(0x100067ecU))
#undef DAT_100067f0
#define DAT_100067f0 (*(int *)(0x100067f0U))
#undef DAT_100067f4
#define DAT_100067f4 (*(int *)(0x100067f4U))
#undef DAT_100067f8
#define DAT_100067f8 (*(int *)(0x100067f8U))
#undef DAT_100067fc
#define DAT_100067fc (*(int *)(0x100067fcU))
#undef DAT_10006800
#define DAT_10006800 (*(int *)(0x10006800U))
#undef DAT_10006804
#define DAT_10006804 (*(int *)(0x10006804U))
#undef DAT_10006808
#define DAT_10006808 (*(int *)(0x10006808U))
#undef DAT_1000680c
#define DAT_1000680c (*(int *)(0x1000680cU))
#undef switchdataD_100066a4
#define switchdataD_100066a4 (*(uint *)(0x100066a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000649c
 */

int recovered_1000649c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_100066a0_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x81cU);
    }
LAB_10006680:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_100066a0_caseD_5;
    iVar3 = (int)&DAT_100066a4 + (0x18c0U);
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x86eU);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x85bU);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x881U);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10006704:
        iVar3 = recovered_1000704c((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_100066a0_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x762U);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x813U);
      }
      goto LAB_10006680;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10006640:
        return ((uintptr_t)pf_module_state + 0x841U);
      }
      goto LAB_10006680;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10006640;
      goto LAB_10006680;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x838U);
      }
      goto LAB_10006680;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x827U);
      }
      goto LAB_10006680;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x7fdU);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10006704;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x809U);
        }
      }
      goto LAB_10006680;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x830U);
      }
      goto LAB_10006680;
    }
    if (sVar2 != 0x1af4) goto LAB_10006680;
    iVar3 = ((uintptr_t)pf_module_state + 0x76dU);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10006540_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0x77cU);
      break;
    case 0x1043:
switchD_10006540_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x7a0U);
      break;
    case 0x1044:
switchD_10006540_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x7c3U);
      break;
    case 0x1045:
switchD_10006540_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x78dU);
      break;
    case 0x1046:
    case 0x1047:
    case 0x1049:
    case 0x104a:
    case 0x104b:
    case 0x104c:
    case 0x104d:
    case 0x104e:
    case 0x104f:
    case 0x1051:
switchD_10006540_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x7f2U);
      break;
    case 0x1048:
switchD_10006540_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x7b3U);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x7d2U);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x7e1U);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10006540_caseD_1042;
      case 0x1002:
        goto switchD_10006540_caseD_1045;
      case 0x1003:
        goto switchD_10006540_caseD_1043;
      case 0x1004:
        goto switchD_10006540_caseD_1048;
      case 0x1005:
        goto switchD_10006540_caseD_1044;
      default:
        goto switchD_10006540_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_100066a4
#undef DAT_100067b8
#undef DAT_100067bc
#undef DAT_100067c0
#undef DAT_100067c4
#undef DAT_100067c8
#undef DAT_100067cc
#undef DAT_100067d0
#undef DAT_100067d4
#undef DAT_100067d8
#undef DAT_100067dc
#undef DAT_100067e0
#undef DAT_100067e4
#undef DAT_100067e8
#undef DAT_100067ec
#undef DAT_100067f0
#undef DAT_100067f4
#undef DAT_100067f8
#undef DAT_100067fc
#undef DAT_10006800
#undef DAT_10006804
#undef DAT_10006808
#undef DAT_1000680c
#undef switchdataD_100066a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006810
 */

int recovered_10006810(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = -1;
  if (param_1 == 0) {
    return -1;
  }
  if (*(short *)(param_1 + 4) == 0x1af4) {
    uVar2 = (uint)*(ushort *)(param_1 + 6);
    if ((uVar2 & 0xffffffc0) == 0x1000) {
      return uVar2 - 0x1000;
    }
    if ((uVar2 & 0xffffffc0) == 0x1040) {
      iVar1 = uVar2 - 0x1040;
    }
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006850
 */

void recovered_10006850(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006874
 */

bool recovered_10006874(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
  {
    uVar1 = recovered_100068d8(param_1,param_2,param_3,param_5 + param_4,param_6);
    bVar2 = uVar1 != 0;
    if (bVar2) {
      *param_6 = *param_6 + param_4;
    }
  }
  return bVar2;
}


#undef DAT_10006a0c
#define DAT_10006a0c (*(int *)(0x10006a0cU))
#define local_1c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068d8
 */

uint recovered_100068d8(int *param_1,int param_2,uint param_3,int param_4,undefined4 *param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  uVar3 = 0;
  if ((param_5 != (undefined4 *)0x0) &&
     ((param_3 == 0 || ((*(uint *)(param_2 + param_3 * 4 + 0x10) & 7) != 4)))) {
    uVar4 = *(uint *)(param_2 + 0x14 + param_3 * 4);
    if ((uVar4 != 0) && ((uVar4 & 1) == 0)) {
      iVar2 = 0;
      if ((uVar4 & 6) == 4) {
        if (4 < param_3) {
          return 0;
        }
        iVar2 = *(int *)(param_2 + 0x14 + param_3 * 4 + 4);
      }
      if ((param_4 != 0) && (uVar4 = uVar4 & 0xfffffff0, uVar4 != 0 || iVar2 != 0)) {
        *param_5 = 0;
        local_1c = 0;
        if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
          if (((uint)param_1[2] < 0xbc) || ((code *)param_1[0x2e] == (code *)0x0)) {
            if ((iVar2 == 0) &&
               ((0x67 < (uint)param_1[2] && ((code *)param_1[0x19] != (code *)0x0)))) {
              iVar2 = (*(code *)param_1[0x19])(uVar4,0,param_4,&local_1c);
              bVar5 = iVar2 != 0;
              uVar1 = 0;
              if (bVar5) {
                uVar1 = local_1c;
              }
              uVar3 = (uint)bVar5;
              if (bVar5) {
                *param_5 = uVar1;
              }
            }
          }
          else {
            uVar3 = (*(code *)param_1[0x2e])(uVar4,iVar2,param_4,param_5);
          }
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_10006a0c
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a10
 */

void recovered_10006a10(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10006aa0(param_1,param_3 + param_2,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a2c
 */

void recovered_10006a2c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006b0c(param_1,param_3 + param_2,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a40
 */

void recovered_10006a40(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006b0c(param_1,param_3 + param_2,4,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a54
 */

void recovered_10006a54(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10006aa0(param_1,param_3 + param_2,4,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a70
 */

void recovered_10006a70(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10006aa0(param_1,param_3 + param_2,2,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a8c
 */

void recovered_10006a8c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006b0c(param_1,param_3 + param_2,2,param_4);
  return;
}


#undef DAT_10006b08
#define DAT_10006b08 (*(uint8_t * *)(0x10006b08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006aa0
 */

undefined4 recovered_10006aa0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && ((code *)*param_1 == (0x54584b57U))) {
    UNRECOVERED_JUMPTABLE = (0x54584b57U);
    if ((uint)param_1[2] < 0xc0) {
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
    }
    else {
      if (param_4 != 0) {
        UNRECOVERED_JUMPTABLE = (code *)param_1[0x2f];
      }
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006af8;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006af8:
                    /* WARNING: Could not recover jumptable at 0x10006b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006b08

#undef DAT_10006b6c
#define DAT_10006b6c (*(int *)(0x10006b6cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b0c
 */

undefined4 recovered_10006b0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0xc4) {
      if ((uint)param_1[2] < 0x70) {
        return 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x30];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006b54;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006b54:
                    /* WARNING: Could not recover jumptable at 0x10006b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006b6c

#undef DAT_10006bd8
#define DAT_10006bd8 (*(int *)(0x10006bd8U))
#undef DAT_10006bdc
#define DAT_10006bdc (*(int *)(0x10006bdcU))
#undef DAT_10006be0
#define DAT_10006be0 (*(int *)(0x10006be0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b70
 */

void recovered_10006b70(int param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  recovered_10006098(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x3d8U)));
  recovered_10006098(param_1,0x400,param_2);
  recovered_10006098(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x3daU)));
  pcVar1 = (char *)(((uintptr_t)pf_module_state + 0x171U));
  if (param_3 != 0) {
    pcVar1 = (char *)param_3;
  }
  recovered_10006098(param_1,0x400,pcVar1);
  return;
}

#undef DAT_10006bd8
#undef DAT_10006bdc
#undef DAT_10006be0

#undef DAT_10006c84
#define DAT_10006c84 (*(int *)(0x10006c84U))
#undef DAT_10006c88
#define DAT_10006c88 (*(int *)(0x10006c88U))
#define uStack_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006be4
 */

void recovered_10006be4(int param_1,char *param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uStack_24 = 0;
  recovered_10006098(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x3d8U)));
  recovered_10006098(param_1,0x400,param_2);
  recovered_10006098(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x3daU)));
  for (uVar4 = 0x1c; uVar4 != 0xfffffffc; uVar4 = uVar4 - 4) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    uStack_24 = (uint)CONCAT12(bVar3,(undefined2)uStack_24);
    recovered_10006098(param_1,0x400,(char *)((int)&uStack_24 + 2));
  }
  return;
}

#undef DAT_10006c84
#undef DAT_10006c88
#undef uStack_24

#undef DAT_10006cd0
#define DAT_10006cd0 (*(int *)(0x10006cd0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c8c
 */

void recovered_10006c8c(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0 && param_2 != 0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x5c) {
      return;
    }
    if ((code *)param_1[0x16] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x16])(param_2,1);
      return;
    }
  }
  return;
}

#undef DAT_10006cd0

#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cd4
 */

bool recovered_10006cd4(int *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  uint uVar1;

  uVar1 = 0;
  local_24 = 0;
  while ((uVar1 != 100 &&
         ((recovered_10006a10(param_1,param_2,param_3,(int)&local_24), extraout_r0 == 0 ||
          ((local_24 & param_4) != param_5))))) {
    recovered_10006f84(param_1);
    uVar1 = uVar1 + 1;
  }
  return uVar1 < 100;
}

#undef local_24

#undef DAT_10006db0
#define DAT_10006db0 (*(int *)(0x10006db0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d5c
 */

undefined4 recovered_10006d5c(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (0x54584b57U))) || ((uint)param_1[2] < 0x74)) ||
     ((param_4 == 0 || param_2 == 0 || ((code *)param_1[0x1c] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x1c])(0);
  return uVar1;
}

#undef DAT_10006db0

#undef DAT_10006df0
#define DAT_10006df0 (*(int *)(0x10006df0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006db4
 */

void recovered_10006db4(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(0);
      return;
    }
  }
  return;
}

#undef DAT_10006df0

#undef DAT_10006f7c
#define DAT_10006f7c (*(int *)(0x10006f7cU))
#undef DAT_10006f80
#define DAT_10006f80 (*(int *)(0x10006f80U))
#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df4
 */

undefined4
recovered_10006df4(int *param_1,int param_2,uint param_3,uint *param_4,uint *param_5,int param_6,
                  uint param_7,undefined1 param_8,undefined4 *param_9)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;

  if (param_9 != (undefined4 *)0x0) {
    local_24 = 0;
    puVar1 = (uint *)0x0;
    if (param_4 != (uint *)0x0) {
      puVar1 = param_5;
    }
    if (param_4 != (uint *)0x0 && puVar1 != (uint *)0x0) {
      uVar4 = *param_4 + 1;
      if (param_3 <= uVar4) {
        uVar4 = 0;
      }
      puVar3 = (undefined1 *)(((uintptr_t)pf_module_state + 0x964U) + uVar4 * 4);
      *puVar3 = param_8;
      puVar3[1] = 0;
      puVar3[3] = (byte)(((param_7 & 0xf0) << 0x14) >> 0x18) |
                  (byte)((uint)(param_6 << 0x1c) >> 0x18);
      puVar3[2] = (byte)(param_7 << 4) | 0xf;
      recovered_10006db4(param_1);
      puVar6 = (undefined4 *)(((uintptr_t)pf_module_state + 0xd64U));
      recovered_10006db4(param_1);
      recovered_10006a8c(param_1,param_2,0x48,uVar4);
      for (iVar5 = 100; iVar5 != 0; iVar5 = iVar5 + -1) {
        recovered_10006db4(param_1);
        recovered_10006a70(param_1,param_2,0x58,(int)&local_24);
        uVar7 = local_24 & 0xff;
        local_24 = uVar7;
        if (uVar7 != (byte)*param_5) {
          if (uVar7 < param_3) {
            puVar6 = puVar6 + uVar7 * 2;
          }
          uVar2 = recovered_10006fc4(puVar6);
          recovered_10006fc4(puVar6 + 1);
          *param_4 = uVar4;
          *param_5 = uVar7;
          *param_9 = uVar2;
          return 1;
        }
        recovered_10006f84(param_1);
      }
    }
  }
  return 0;
}

#undef DAT_10006f7c
#undef DAT_10006f80
#undef local_24

#undef DAT_10006fc0
#define DAT_10006fc0 (*(int *)(0x10006fc0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f84
 */

void recovered_10006f84(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x34) {
      return;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xc])(100);
      return;
    }
  }
  return;
}

#undef DAT_10006fc0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fc4
 */

undefined4 recovered_10006fc4(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fec
 */

void recovered_10006fec(int param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; uVar4 = uVar4 - 4, param_4 != 0; param_4 = param_4 + -1) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    recovered_10006200(param_1,param_2,bVar3);
  }
  return;
}


#undef DAT_100070c0
#define DAT_100070c0 (*(uint32_t *)(0x100070c0U))
#undef DAT_100070c4
#define DAT_100070c4 (*(int *)(0x100070c4U))
#undef DAT_100070c8
#define DAT_100070c8 (*(int *)(0x100070c8U))
#undef DAT_100070cc
#define DAT_100070cc (*(int *)(0x100070ccU))
#undef DAT_100070d0
#define DAT_100070d0 (*(int *)(0x100070d0U))
#undef DAT_100070d4
#define DAT_100070d4 (*(int *)(0x100070d4U))
#undef DAT_100070d8
#define DAT_100070d8 (*(int *)(0x100070d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000704c
 */

int recovered_1000704c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x897U);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x8b6U);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x8a1U);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x8a6U);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x8abU);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x89cU);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x8bfU);
  }
  return iVar1;
}

#undef DAT_100070c0
#undef DAT_100070c4
#undef DAT_100070c8
#undef DAT_100070cc
#undef DAT_100070d0
#undef DAT_100070d4
#undef DAT_100070d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070e0
 */

uint recovered_100070e0(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007130
 */

uint recovered_10007130(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007168
 */

uint recovered_10007168(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100071d8
 */

uint recovered_100071d8(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007240
 */

undefined8 recovered_10007240(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007324
 */

undefined8 recovered_10007324(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100073a4
 */

undefined8 recovered_100073a4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100074c4
 */

undefined8 recovered_100074c4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10007600
#define DAT_10007600 (*(double *)(0x10007600U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007580
 */

undefined8 recovered_10007580(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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

#undef DAT_10007600

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007608
 */

undefined8 recovered_10007608(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10007580(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10007580(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007654
 */

void recovered_10007654(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007580(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x8e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007664
 */

void recovered_10007664(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x8d0U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007674
 */

double recovered_10007674(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100076bc
 */

void recovered_100076bc(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_10007674(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10007674(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076e4
 */

float recovered_100076e4(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007674(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007700
 */

float recovered_10007700(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100076bc(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
