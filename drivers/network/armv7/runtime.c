/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Pooka's Free Software License. Recovered PC-relative descriptor. */
void *recovered_100033a8(void){return pf_module_state+0xc998U;}


#undef DAT_10003700
#define DAT_10003700 (*(int *)(0x10003700U))
#undef DAT_10003704
#define DAT_10003704 (*(int *)(0x10003704U))
#undef DAT_10003708
#define DAT_10003708 (*(int *)(0x10003708U))
#undef DAT_1000370c
#define DAT_1000370c (*(int *)(0x1000370cU))
#undef DAT_10003710
#define DAT_10003710 (*(int *)(0x10003710U))
#undef DAT_10003714
#define DAT_10003714 (*(int *)(0x10003714U))
#undef DAT_10003718
#define DAT_10003718 (*(int *)(0x10003718U))
#undef DAT_1000371c
#define DAT_1000371c (*(int *)(0x1000371cU))
#undef DAT_10003720
#define DAT_10003720 (*(int *)(0x10003720U))
#undef DAT_10003724
#define DAT_10003724 (*(int *)(0x10003724U))
#undef DAT_10003728
#define DAT_10003728 (*(int *)(0x10003728U))
#undef DAT_1000372c
#define DAT_1000372c (*(int *)(0x1000372cU))
#undef DAT_10003730
#define DAT_10003730 (*(int *)(0x10003730U))
#undef DAT_10003734
#define DAT_10003734 (*(int *)(0x10003734U))
#undef DAT_10003738
#define DAT_10003738 (*(int *)(0x10003738U))
#undef DAT_1000373c
#define DAT_1000373c (*(int *)(0x1000373cU))
#undef DAT_10003740
#define DAT_10003740 (*(int *)(0x10003740U))
#undef DAT_10003744
#define DAT_10003744 (*(int *)(0x10003744U))
#undef DAT_10003748
#define DAT_10003748 (*(int *)(0x10003748U))
#define auStack_4fc (*(undefined1 (*)[1024])(frame + 20))
#define abStack_f8 (*(byte (*)[12])(frame + 1048))
#define local_fc (*(uint *)(frame + 1044))
#define local_ec (*(char *)(frame + 1060))
#define local_94 (*(uint *)(frame + 1148))
#define local_58 (*(uint *)(frame + 1208))
#define local_54 (*(uint *)(frame + 1212))
#define local_50 (*(uint (*)[12])(frame + 1216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033b8
 */

int recovered_100033b8(int *api)

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
  recovered_1000374c(auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  recovered_1000542c((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x19fU)));
  recovered_100054e4((int)auStack_4fc,0x60,api[1]);
  recovered_1000542c((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x1aeU)));
  if (((*api == iVar3) && (0x2b < (uint)api[2])) && ((code *)api[10] != (code *)0x0)) {
    (*(code *)api[10])(auStack_4fc);
  }
  recovered_1000374c(auStack_4fc,0x400,(char *)(((uintptr_t)pf_module_state + 0x38U)));
  if (((*api == iVar3) && (0x3f < (uint)api[2])) &&
     (((code *)api[0xf] != (code *)0x0 && (iVar1 = (*(code *)api[0xf])(abStack_f8), iVar1 != 0)))) {
    recovered_10005480((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x1b5U)),local_94);
    recovered_100053bc((int)auStack_4fc,0x400,(char *)(((uintptr_t)pf_module_state + 0x1c5U)),local_58);
    recovered_10005480((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x1d4U)),local_54);
  }
  if ((code *)api[3] == (code *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)api[3])(((uintptr_t)pf_module_state + 0x1e3U),((uintptr_t)pf_module_state + 0xa4U),auStack_4fc);
  if (iVar1 == 0) {
    return 0;
  }
  if (((*api == iVar3) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    for (uVar2 = 0; uVar2 != 8; uVar2 = uVar2 + 1) {
      for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
        iVar3 = recovered_100055f8(api,uVar2 & 0xff,uVar5 & 0xff,0,abStack_f8);
        if ((iVar3 != 0) && (recovered_10003760(api,abStack_f8,(int *)&local_fc), local_ec < '\0'))
        {
          for (uVar6 = 1; uVar6 != 8; uVar6 = uVar6 + 1) {
            iVar3 = recovered_100055f8(api,uVar2 & 0xff,uVar5 & 0xff,uVar6 & 0xff,
                                       (undefined1 *)local_50);
            if (iVar3 != 0) {
              recovered_10003760(api,(byte *)local_50,(int *)&local_fc);
            }
          }
        }
      }
    }
    if (local_fc != 0) goto LAB_100036b8;
  }
  local_50[0] = 0;
  recovered_1000374c(abStack_f8,0xa0,(char *)(((uintptr_t)pf_module_state + 0xbaU)));
  iVar3 = recovered_10005364(api,0x300,1,(int)local_50);
  if (iVar3 == 0) {
    pcVar4 = (char *)(((uintptr_t)pf_module_state + 0x141U));
  }
  else {
    recovered_100053bc((int)abStack_f8,0xa0,(char *)(((uintptr_t)pf_module_state + 0x126U)),local_50[0]);
    pcVar4 = (char *)(((uintptr_t)pf_module_state + 0x12dU));
  }
  recovered_1000542c((int)abStack_f8,0xa0,pcVar4);
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(((uintptr_t)pf_module_state + 0x155U),((uintptr_t)pf_module_state + 0x16eU),abStack_f8);
  }
LAB_100036b8:
  recovered_10005480((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x177U)),local_fc);
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(((uintptr_t)pf_module_state + 0x1e3U),((uintptr_t)pf_module_state + 0xa4U),auStack_4fc);
  }
  return 1;
}

#undef DAT_10003700
#undef DAT_10003704
#undef DAT_10003708
#undef DAT_1000370c
#undef DAT_10003710
#undef DAT_10003714
#undef DAT_10003718
#undef DAT_1000371c
#undef DAT_10003720
#undef DAT_10003724
#undef DAT_10003728
#undef DAT_1000372c
#undef DAT_10003730
#undef DAT_10003734
#undef DAT_10003738
#undef DAT_1000373c
#undef DAT_10003740
#undef DAT_10003744
#undef DAT_10003748
#undef auStack_4fc
#undef abStack_f8
#undef local_fc
#undef local_ec
#undef local_94
#undef local_58
#undef local_54
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000374c
 */

void recovered_1000374c(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_1000542c((int)param_1,param_2,param_3);
  return;
}


#undef DAT_100046d4
#define DAT_100046d4 (*(int *)(0x100046d4U))
#undef DAT_10004804
#define DAT_10004804 (*(uint32_t *)(0x10004804U))
#undef DAT_10004808
#define DAT_10004808 (*(int *)(0x10004808U))
#undef DAT_10004840
#define DAT_10004840 (*(uint32_t *)(0x10004840U))
#undef DAT_1000489c
#define DAT_1000489c (*(int *)(0x1000489cU))
#undef DAT_100048a0
#define DAT_100048a0 (*(int *)(0x100048a0U))
#undef DAT_10004954
#define DAT_10004954 (*(int *)(0x10004954U))
#undef DAT_10004958
#define DAT_10004958 (*(int *)(0x10004958U))
#undef DAT_1000495c
#define DAT_1000495c (*(int *)(0x1000495cU))
#undef DAT_10004960
#define DAT_10004960 (*(int *)(0x10004960U))
#undef DAT_10004964
#define DAT_10004964 (*(int *)(0x10004964U))
#undef DAT_10004968
#define DAT_10004968 (*(int *)(0x10004968U))
#undef DAT_1000496c
#define DAT_1000496c (*(int *)(0x1000496cU))
#undef DAT_10004970
#define DAT_10004970 (*(int *)(0x10004970U))
#undef DAT_10004974
#define DAT_10004974 (*(int *)(0x10004974U))
#undef DAT_10004978
#define DAT_10004978 (*(int *)(0x10004978U))
#undef DAT_1000497c
#define DAT_1000497c (*(int *)(0x1000497cU))
#undef DAT_10004980
#define DAT_10004980 (*(int *)(0x10004980U))
#undef DAT_10004984
#define DAT_10004984 (*(int *)(0x10004984U))
#undef DAT_10004988
#define DAT_10004988 (*(int *)(0x10004988U))
#undef DAT_1000498c
#define DAT_1000498c (*(int *)(0x1000498cU))
#undef DAT_10004990
#define DAT_10004990 (*(int *)(0x10004990U))
#undef DAT_10004994
#define DAT_10004994 (*(int *)(0x10004994U))
#undef DAT_10004998
#define DAT_10004998 (*(int *)(0x10004998U))
#undef DAT_1000499c
#define DAT_1000499c (*(int *)(0x1000499cU))
#undef DAT_100049a0
#define DAT_100049a0 (*(int *)(0x100049a0U))
#undef DAT_100049a4
#define DAT_100049a4 (*(int *)(0x100049a4U))
#undef DAT_100049a8
#define DAT_100049a8 (*(int *)(0x100049a8U))
#undef DAT_100049ac
#define DAT_100049ac (*(int *)(0x100049acU))
#undef DAT_100049b0
#define DAT_100049b0 (*(int *)(0x100049b0U))
#undef DAT_10004cd0
#define DAT_10004cd0 (*(int *)(0x10004cd0U))
#undef DAT_10004cd4
#define DAT_10004cd4 (*(int *)(0x10004cd4U))
#undef DAT_10004cd8
#define DAT_10004cd8 (*(int *)(0x10004cd8U))
#undef DAT_10004d48
#define DAT_10004d48 (*(int *)(0x10004d48U))
#undef DAT_10004d4c
#define DAT_10004d4c (*(int *)(0x10004d4cU))
#undef DAT_10004d50
#define DAT_10004d50 (*(int *)(0x10004d50U))
#undef DAT_10004da8
#define DAT_10004da8 (*(int *)(0x10004da8U))
#undef DAT_10004e8c
#define DAT_10004e8c (*(int *)(0x10004e8cU))
#undef DAT_10004e90
#define DAT_10004e90 (*(int *)(0x10004e90U))
#undef DAT_10004e94
#define DAT_10004e94 (*(int *)(0x10004e94U))
#undef DAT_10004e98
#define DAT_10004e98 (*(int *)(0x10004e98U))
#undef DAT_10004e9c
#define DAT_10004e9c (*(int *)(0x10004e9cU))
#undef DAT_10004ea0
#define DAT_10004ea0 (*(int *)(0x10004ea0U))
#undef DAT_10004ea4
#define DAT_10004ea4 (*(int *)(0x10004ea4U))
#undef DAT_10004ea8
#define DAT_10004ea8 (*(int *)(0x10004ea8U))
#undef DAT_100050c8
#define DAT_100050c8 (*(int *)(0x100050c8U))
#undef DAT_100050cc
#define DAT_100050cc (*(int *)(0x100050ccU))
#undef DAT_10005100
#define DAT_10005100 (*(int *)(0x10005100U))
#undef DAT_10005104
#define DAT_10005104 (*(int *)(0x10005104U))
#undef DAT_10005108
#define DAT_10005108 (*(int *)(0x10005108U))
#undef DAT_100051fc
#define DAT_100051fc (*(int *)(0x100051fcU))
#undef DAT_10005210
#define DAT_10005210 (*(uint32_t *)(0x10005210U))
#undef DAT_10005234
#define DAT_10005234 (*(int *)(0x10005234U))
#undef DAT_10005238
#define DAT_10005238 (*(int *)(0x10005238U))
#undef DAT_1000523c
#define DAT_1000523c (*(int *)(0x1000523cU))
#undef DAT_10005240
#define DAT_10005240 (*(int *)(0x10005240U))
#undef DAT_10005244
#define DAT_10005244 (*(int *)(0x10005244U))
#undef DAT_10005248
#define DAT_10005248 (*(int *)(0x10005248U))
#undef DAT_1000524c
#define DAT_1000524c (*(int *)(0x1000524cU))
#undef DAT_10005250
#define DAT_10005250 (*(int *)(0x10005250U))
#undef DAT_10005254
#define DAT_10005254 (*(int *)(0x10005254U))
#undef DAT_10005258
#define DAT_10005258 (*(int *)(0x10005258U))
#undef DAT_1000525c
#define DAT_1000525c (*(int *)(0x1000525cU))
#undef DAT_10005260
#define DAT_10005260 (*(int *)(0x10005260U))
#undef DAT_10005264
#define DAT_10005264 (*(int *)(0x10005264U))
#undef DAT_10005268
#define DAT_10005268 (*(int *)(0x10005268U))
#undef DAT_1000526c
#define DAT_1000526c (*(int *)(0x1000526cU))
#undef DAT_10005270
#define DAT_10005270 (*(int *)(0x10005270U))
#undef DAT_10005274
#define DAT_10005274 (*(int *)(0x10005274U))
#undef DAT_10005278
#define DAT_10005278 (*(int *)(0x10005278U))
#undef DAT_1000527c
#define DAT_1000527c (*(int *)(0x1000527cU))
#undef DAT_10005280
#define DAT_10005280 (*(int *)(0x10005280U))
#undef DAT_10005284
#define DAT_10005284 (*(int *)(0x10005284U))
#undef DAT_10005288
#define DAT_10005288 (*(int *)(0x10005288U))
#undef DAT_1000528c
#define DAT_1000528c (*(int *)(0x1000528cU))
#undef DAT_10005290
#define DAT_10005290 (*(int *)(0x10005290U))
#undef DAT_10005294
#define DAT_10005294 (*(int *)(0x10005294U))
#undef DAT_10005298
#define DAT_10005298 (*(int *)(0x10005298U))
#undef DAT_1000529c
#define DAT_1000529c (*(int *)(0x1000529cU))
#undef DAT_100052a0
#define DAT_100052a0 (*(int *)(0x100052a0U))
#undef DAT_100052a4
#define DAT_100052a4 (*(int *)(0x100052a4U))
#undef DAT_100052a8
#define DAT_100052a8 (*(int *)(0x100052a8U))
#undef DAT_100052ac
#define DAT_100052ac (*(int *)(0x100052acU))
#undef DAT_100052b0
#define DAT_100052b0 (*(int *)(0x100052b0U))
#undef DAT_100052b4
#define DAT_100052b4 (*(int *)(0x100052b4U))
#undef DAT_100052b8
#define DAT_100052b8 (*(int *)(0x100052b8U))
#undef DAT_100052bc
#define DAT_100052bc (*(int *)(0x100052bcU))
#undef DAT_100052c0
#define DAT_100052c0 (*(int *)(0x100052c0U))
#undef DAT_100052c4
#define DAT_100052c4 (*(int *)(0x100052c4U))
#undef DAT_100052c8
#define DAT_100052c8 (*(int *)(0x100052c8U))
#undef DAT_100052cc
#define DAT_100052cc (*(int *)(0x100052ccU))
#undef DAT_100052d0
#define DAT_100052d0 (*(int *)(0x100052d0U))
#undef DAT_100052d4
#define DAT_100052d4 (*(int *)(0x100052d4U))
#undef DAT_100052d8
#define DAT_100052d8 (*(int *)(0x100052d8U))
#undef DAT_100052dc
#define DAT_100052dc (*(int *)(0x100052dcU))
#undef DAT_100052e0
#define DAT_100052e0 (*(int *)(0x100052e0U))
#undef DAT_100052e4
#define DAT_100052e4 (*(int *)(0x100052e4U))
#undef DAT_100052e8
#define DAT_100052e8 (*(int *)(0x100052e8U))
#undef DAT_100052ec
#define DAT_100052ec (*(int *)(0x100052ecU))
#undef DAT_100052f0
#define DAT_100052f0 (*(int *)(0x100052f0U))
#undef DAT_100052f4
#define DAT_100052f4 (*(int *)(0x100052f4U))
#undef DAT_100052f8
#define DAT_100052f8 (*(int *)(0x100052f8U))
#undef DAT_100052fc
#define DAT_100052fc (*(int *)(0x100052fcU))
#undef DAT_10005300
#define DAT_10005300 (*(int *)(0x10005300U))
#undef DAT_10005304
#define DAT_10005304 (*(int *)(0x10005304U))
#undef DAT_10005308
#define DAT_10005308 (*(int *)(0x10005308U))
#undef DAT_1000530c
#define DAT_1000530c (*(int *)(0x1000530cU))
#undef DAT_10005310
#define DAT_10005310 (*(int *)(0x10005310U))
#undef DAT_10005314
#define DAT_10005314 (*(int *)(0x10005314U))
#undef DAT_10005318
#define DAT_10005318 (*(int *)(0x10005318U))
#undef DAT_1000531c
#define DAT_1000531c (*(int *)(0x1000531cU))
#undef DAT_10005320
#define DAT_10005320 (*(int *)(0x10005320U))
#undef DAT_10005324
#define DAT_10005324 (*(int *)(0x10005324U))
#undef DAT_10005328
#define DAT_10005328 (*(int *)(0x10005328U))
#undef DAT_1000532c
#define DAT_1000532c (*(int *)(0x1000532cU))
#undef DAT_10005330
#define DAT_10005330 (*(int *)(0x10005330U))
#undef DAT_10005334
#define DAT_10005334 (*(int *)(0x10005334U))
#undef DAT_10005338
#define DAT_10005338 (*(int *)(0x10005338U))
#undef DAT_1000533c
#define DAT_1000533c (*(int *)(0x1000533cU))
#undef DAT_10005340
#define DAT_10005340 (*(int *)(0x10005340U))
#undef DAT_10005344
#define DAT_10005344 (*(int *)(0x10005344U))
#undef DAT_10005348
#define DAT_10005348 (*(int *)(0x10005348U))
#undef DAT_1000534c
#define DAT_1000534c (*(int *)(0x1000534cU))
#undef DAT_10005350
#define DAT_10005350 (*(int *)(0x10005350U))
#undef DAT_10005354
#define DAT_10005354 (*(int *)(0x10005354U))
#undef DAT_10005358
#define DAT_10005358 (*(int *)(0x10005358U))
#undef DAT_1000535c
#define DAT_1000535c (*(int *)(0x1000535cU))
#undef DAT_10005360
#define DAT_10005360 (*(int *)(0x10005360U))
#define local_8a0 (*(char (*)[1024])(frame + 16))
#define local_4a0 (*(uint (*)[2])(frame + 1040))
#define local_498 (*(uint *)(frame + 1048))
#define local_494 (*(uint *)(frame + 1052))
#define local_490 (*(uint *)(frame + 1056))
#define local_48c (*(uint *)(frame + 1060))
#define local_488 (*(uint *)(frame + 1064))
#define local_484 (*(uint *)(frame + 1068))
#define local_480 (*(undefined4 *)(frame + 1072))
#define local_47c (*(uint *)(frame + 1076))
#define local_478 (*(uint *)(frame + 1080))
#define local_474 (*(uint *)(frame + 1084))
#define local_470 (*(uint *)(frame + 1088))
#define local_464 (*(uint *)(frame + 1100))
#define local_460 (*(uint *)(frame + 1104))
#define local_45c (*(uint *)(frame + 1108))
#define local_458 (*(uint *)(frame + 1112))
#define local_454 (*(uint *)(frame + 1116))
#define local_450 (*(uint *)(frame + 1120))
#define local_44c (*(uint *)(frame + 1124))
#define local_448 (*(uint *)(frame + 1128))
#define auStack_404 (*(undefined1 (*)[896])(frame + 1196))
#define local_444 (*(uint *)(frame + 1132))
#define local_440 (*(uint *)(frame + 1136))
#define local_43c (*(uint *)(frame + 1140))
#define local_434 (*(uint *)(frame + 1148))
#define local_430 (*(uint *)(frame + 1152))
#define local_84 (*(uint (*)[3])(frame + 2092))
#define local_78 (*(int *)(frame + 2104))
#define local_54 (*(uint *)(frame + 2140))
#define local_48 (*(byte *)(frame + 2152))
#define local_44 (*(uint *)(frame + 2156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003760
 */

void recovered_10003760(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2256] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  short sVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;
  undefined4 extraout_r3_03 = 0;
  undefined4 extraout_r3_04 = 0;
  undefined4 extraout_r3_05 = 0;
  undefined4 extraout_r3_06 = 0;
  undefined4 extraout_r3_07 = 0;
  undefined4 extraout_r3_08 = 0;
  undefined4 extraout_r3_09 = 0;
  code *extraout_r3_10;
  code *extraout_r3_11;
  code *extraout_r3_12;
  code *pcVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  char *pcVar19;
  undefined2 *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *pointer;

  bVar2 = recovered_10005830((int)param_2);
  if (bVar2) {
    bVar2 = true;
    if (param_2 == (byte *)0x0) {
      return;
    }
  }
  else {
    if (param_2 == (byte *)0x0) {
      return;
    }
    bVar2 = false;
    if (*(short *)(param_2 + 4) == 0x1af4) {
      bVar2 = *(short *)(param_2 + 6) == 0x1041;
    }
  }
  bVar3 = recovered_10005830((int)param_2);
  if (!bVar3) {
    sVar6 = *(short *)(param_2 + 4);
    if (sVar6 == 0x106b) {
      if (*(short *)(param_2 + 6) != 0x21) goto LAB_10003de0;
    }
    else {
      if (sVar6 == 0x108e) {
        sVar6 = *(short *)(param_2 + 6);
        sVar12 = 0x2bad;
      }
      else if (sVar6 == 0x10ec) {
        sVar6 = *(short *)(param_2 + 6);
        sVar12 = -0x7fd7;
      }
      else if (sVar6 == -0x7f7a) {
        sVar6 = *(short *)(param_2 + 6);
        sVar12 = 0x100e;
      }
      else {
        if (sVar6 != 0x1af4) goto LAB_10003de0;
        sVar6 = *(short *)(param_2 + 6);
        sVar12 = 0x1041;
      }
      if (sVar6 != sVar12) {
LAB_10003de0:
        bVar4 = param_2[8];
        bVar3 = bVar4 != 2;
        if (!bVar3) {
          bVar4 = param_2[9];
        }
        if (bVar3 || bVar4 != 0) {
          return;
        }
      }
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_1000374c(local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x1e4U)));
  if (bVar2) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x21bU));
LAB_10003838:
    recovered_1000542c((int)local_8a0,0x400,pcVar13);
  }
  else {
    sVar6 = *(short *)(param_2 + 4);
    sVar12 = 0x106b;
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x256U));
    if (sVar6 != 0x106b) {
      sVar12 = 0x108e;
    }
    if (sVar6 == 0x106b || sVar6 == sVar12) goto LAB_10003838;
    if (sVar6 == 0x10ec) {
      if (*(short *)(param_2 + 6) == -0x7fd7) {
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x242U));
        goto LAB_10003838;
      }
    }
    else if ((sVar6 == -0x7f7a) && (*(short *)(param_2 + 6) == 0x100e)) {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x231U));
      goto LAB_10003838;
    }
  }
  iVar7 = recovered_10005be0((int)param_2);
  iVar9 = (*(uint32_t *)(uint64_t[]){0xe517007054584b57ULL});
  bVar2 = false;
  local_484 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint64_t[]){0xe517007054584b57ULL}))) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x285U));
LAB_10003904:
    recovered_1000542c((int)local_8a0,0x400,pcVar13);
  }
  else {
    iVar8 = recovered_100057bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)&local_484);
    if (iVar8 == 0) {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x29dU));
      goto LAB_10003904;
    }
    iVar8 = 5;
    uVar21 = 0;
    while (iVar8 != 0xb) {
      iVar11 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      uVar14 = uVar21;
      if (*(uint *)(param_2 + iVar11) != 0) {
        uVar14 = uVar21 | 2;
      }
      if ((*(uint *)(param_2 + iVar11) & 1) != 0) {
        uVar14 = uVar21 | 1;
      }
      uVar21 = uVar14;
    }
    iVar8 = recovered_100055d0(((uintptr_t)pf_module_state + 0x18aU));
    if (iVar8 != 0) {
      uVar21 = uVar21 | 4;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar21 = uVar21 | 2;
    }
    local_84[0] = local_484 | uVar21;
    if (((*param_1 == iVar9) && (99 < (uint)param_1[2])) &&
       (((code *)param_1[0x18] != (code *)0x0 &&
        (iVar9 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,local_84[0]),
        iVar9 != 0)))) {
      recovered_100057bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,(int)local_84)
      ;
      recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x2ceU)),local_484);
      uVar14 = local_84[0];
      recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x2dfU)),local_84[0]);
      recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x2efU)),uVar21);
      bVar2 = (uVar14 & uVar21) == uVar21;
    }
    else {
      recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x2b5U)));
      bVar2 = false;
    }
  }
  if (iVar7 == -1) {
    bVar4 = param_2[8];
    bVar1 = 0;
    bVar5 = 0;
    bVar3 = bVar4 == 1;
    local_484 = 0;
    if (bVar3) {
      bVar4 = param_2[9];
    }
    local_84[0] = 0;
    local_4a0[0] = 0;
    local_488 = 0;
    local_48c = 0;
    if (bVar3 && bVar4 == 6) {
      uVar14 = recovered_10006074(param_1,(int)param_2,5,0x1000,&local_484);
      uVar21 = local_484;
      if (uVar14 == 0) {
        recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x506U)));
      }
      else {
        recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x51cU)),local_484,
                           extraout_r3_05);
        recovered_100063f0(param_1,uVar21,0,(int)local_84);
        recovered_100063f0(param_1,local_484,4,(int)local_4a0);
        recovered_100063f0(param_1,local_484,0xc,(int)&local_488);
        recovered_100063f0(param_1,local_484,0x10,(int)&local_48c);
        if (-1 < (int)local_4a0[0]) {
          recovered_100063d8(param_1,local_484,4,local_4a0[0] | 0x80000000);
          recovered_100063f0(param_1,local_484,4,(int)local_4a0);
        }
        uVar21 = local_4a0[0];
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x525U)),local_84[0]);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x52dU)),uVar21);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x535U)),local_488);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x53fU)),local_48c);
        bVar5 = 1;
      }
    }
    bVar4 = param_2[8];
    local_484 = 0;
    bVar3 = bVar4 == 4;
    local_84[0] = 0;
    if (bVar3) {
      bVar4 = param_2[9];
    }
    local_4a0[0] = 0;
    local_488 = 0;
    if (bVar3 && bVar4 == 3) {
      uVar14 = recovered_10006074(param_1,(int)param_2,0,0x1000,&local_484);
      uVar21 = local_484;
      if (uVar14 == 0) {
        recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x54bU)));
      }
      else {
        recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x560U)),local_484,
                           extraout_r3_06);
        recovered_100063f0(param_1,uVar21,0,(int)local_84);
        recovered_100063f0(param_1,local_484,8,(int)local_4a0);
        if ((local_4a0[0] & 1) == 0) {
          recovered_100063d8(param_1,local_484,8,local_4a0[0] | 1);
          recovered_100063f0(param_1,local_484,8,(int)local_4a0);
        }
        recovered_1000647c(param_1,local_484 + 0xe,2,(int)&local_488);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x568U)),local_84[0]);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x570U)),local_4a0[0]);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x578U)),local_488);
        bVar1 = 1;
      }
    }
    bVar4 = 0;
    local_484 = 0;
    local_84[0] = 0;
    local_4a0[0] = 0;
    local_488 = 0;
    if ((param_2[8] == 0xc) && (bVar4 = 0, param_2[9] == 3)) {
      uVar14 = recovered_10006074(param_1,(int)param_2,0,0x1000,&local_484);
      uVar21 = local_484;
      if (uVar14 == 0) {
        for (uVar21 = 0; uVar21 != 6; uVar21 = uVar21 + 1) {
          uVar14 = *(uint *)(param_2 + uVar21 * 4 + 0x14);
          local_48c = 0;
          if (((uVar14 & 1) != 0) &&
             (iVar9 = recovered_10005364(param_1,uVar14 & 0xfffc,2,(int)&local_48c), iVar9 != 0)) {
            recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x5a4U)));
            recovered_100054e4((int)local_8a0,0x400,uVar21);
            recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x5afU)),
                               uVar14 & 0xfffffffc);
            recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x5b5U)),local_48c);
            bVar4 = 1;
            goto LAB_10004404;
          }
        }
        recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x5bfU)));
        bVar4 = 0;
      }
      else {
        recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x584U)),local_484,
                           extraout_r3_04);
        recovered_100063f0(param_1,uVar21,0,(int)local_84);
        recovered_100063f0(param_1,local_484,4,(int)local_4a0);
        recovered_100063f0(param_1,local_484,8,(int)&local_488);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x58cU)),local_84[0]);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x594U)),local_4a0[0]);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x59cU)),local_488);
        bVar4 = 1;
      }
    }
LAB_10004404:
    bVar4 = bVar1 | bVar5 | bVar4;
    bVar5 = param_2[8];
    local_484 = 0;
    local_84[0] = 0;
    local_4a0[0] = 0;
    if (bVar5 == 2) {
      for (uVar21 = 0; uVar21 != 6; uVar21 = uVar21 + 1) {
        uVar14 = recovered_10006074(param_1,(int)param_2,uVar21,0x1000,&local_484);
        if (uVar14 != 0) {
          recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x5d4U)));
          recovered_100054e4((int)local_8a0,0x400,uVar21);
          uVar14 = local_484;
          recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x5e5U)),local_484,
                             extraout_r3_07);
          recovered_100063f0(param_1,uVar14,0,(int)local_84);
          recovered_100063f0(param_1,local_484,4,(int)local_4a0);
          recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x5f1U)),local_84[0]);
          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x5fdU));
          uVar14 = local_4a0[0];
LAB_10004590:
          recovered_100053bc((int)local_8a0,0x400,pcVar13,uVar14);
          break;
        }
        uVar14 = *(uint *)(param_2 + uVar21 * 4 + 0x14);
        if (((uVar14 & 1) != 0) &&
           (iVar9 = recovered_10005364(param_1,uVar14 & 0xfffc,2,(int)local_84), iVar9 != 0)) {
          recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x609U)));
          recovered_100054e4((int)local_8a0,0x400,uVar21);
          recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x618U)),
                             uVar14 & 0xfffffffc);
          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x622U));
          uVar14 = local_84[0];
          goto LAB_10004590;
        }
      }
      if (uVar21 != 6) {
        bVar4 = 1;
      }
      bVar5 = param_2[8];
    }
    local_484 = 0;
    bVar1 = 0;
    local_84[0] = 0;
    if (bVar5 == 3) {
      for (uVar21 = 0; uVar21 != 6; uVar21 = uVar21 + 1) {
        uVar14 = recovered_10006074(param_1,(int)param_2,uVar21,0x1000,&local_484);
        if (uVar14 != 0) {
          recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x630U)));
          recovered_100054e4((int)local_8a0,0x400,uVar21);
          uVar14 = local_484;
          recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x641U)),local_484,
                             extraout_r3_08);
          uVar14 = recovered_100063f0(param_1,uVar14,0,(int)local_84);
          if (uVar14 != 0) {
            recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x64dU)),local_84[0])
            ;
          }
          break;
        }
      }
      bVar1 = 0;
      if (uVar21 != 6) {
        bVar1 = 1;
      }
    }
    bVar2 = (bool)(bVar4 | bVar1 | bVar2);
    if (!bVar2) {
      local_484 = 0;
      local_84[0] = 0;
      for (uVar21 = 0; uVar21 != 6; uVar21 = uVar21 + 1) {
        uVar14 = recovered_10006074(param_1,(int)param_2,uVar21,0x1000,&local_484);
        if (uVar14 != 0) {
          recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x659U)));
          recovered_100054e4((int)local_8a0,0x400,uVar21);
          uVar14 = local_484;
          recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x663U)),local_484,
                             extraout_r3_09);
          uVar14 = recovered_100063f0(param_1,uVar14,0,(int)local_84);
          if (uVar14 != 0) {
            recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x668U)),local_84[0])
            ;
          }
          break;
        }
      }
      bVar2 = false;
      if (uVar21 != 6) {
        bVar2 = true;
      }
    }
  }
  else {
    uVar21 = recovered_10005be0((int)param_2);
    bVar4 = 0;
    if (uVar21 != 0xffffffff) {
      recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x2feU)),uVar21);
      bVar3 = recovered_10005c20(param_1,param_2,(int *)&local_484);
      if (bVar3) {
        recovered_100061ac(param_1,(int *)&local_484,0);
        recovered_1000654c((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x32eU)),
                           ((uintptr_t)pf_module_state + 0x33eU));
        recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x323U)),local_460);
        recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x345U)),local_474);
        recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x355U)),local_484,extraout_r3)
        ;
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x362U)),local_45c);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x378U)),local_458);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x38eU)),local_454);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x3a4U)),local_450);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x3baU)),local_44c);
        recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x3d3U)),local_448);
        recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x3ebU)),local_444);
        recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x3f8U)),local_440);
        recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x409U)),local_43c);
        uVar10 = extraout_r3_00;
        if (local_434 != 0) {
          recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x41dU)),local_470);
          recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x42dU)),local_464);
          recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x444U)),local_434,
                             extraout_r3_01);
          uVar10 = extraout_r3_02;
        }
        if (local_47c != 0) {
          recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x457U)),local_47c,uVar10);
          uVar10 = extraout_r3_03;
        }
        if (local_478 != 0) {
          recovered_100065c0((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x461U)),local_478,uVar10);
        }
        recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x474U)),local_430);
        iVar9 = ((uintptr_t)pf_module_state + 0x497U);
        if ((local_448 & 8) == 0) {
          iVar9 = ((uintptr_t)pf_module_state + 0x4a3U);
        }
        recovered_1000654c((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x48bU)),iVar9);
        bVar4 = 1;
      }
      else {
        if (local_460 != 0) {
          recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x323U)),local_460);
        }
        if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
          for (uVar21 = 0; uVar21 != 6; uVar21 = uVar21 + 1) {
            local_484 = 0;
            local_84[0] = 0;
            if ((*(uint *)(param_2 + uVar21 * 4 + 0x14) & 1) != 0) {
              uVar18 = *(uint *)(param_2 + uVar21 * 4 + 0x14) & 0xfffffffc;
              uVar14 = uVar18 + 0x12 & 0xffff;
              iVar9 = recovered_10005364(param_1,uVar14,1,(int)&local_484);
              if (iVar9 != 0) {
                recovered_1000654c((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x32eU)),
                                   ((uintptr_t)pf_module_state + 0x4b4U));
                recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x4beU)));
                recovered_100054e4((int)local_8a0,0x400,uVar21);
                recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x4d2U)),uVar18);
                recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x4e1U)),
                                   local_484);
                recovered_10006668(param_1,uVar14);
                recovered_10006668(param_1,uVar14);
                bVar4 = 1;
                iVar9 = recovered_10005364(param_1,uVar14,1,(int)local_84);
                if (iVar9 != 0) {
                  recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x4f4U)),
                                     local_84[0]);
                }
                goto LAB_10003db0;
              }
            }
          }
        }
        recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x307U)));
      }
    }
LAB_10003db0:
    bVar2 = (bool)(bVar4 | bVar2);
  }
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x275U));
  if (!bVar2) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x141U));
  }
  recovered_1000542c((int)local_8a0,0x400,pcVar13);
  local_48c = 0;
  local_490 = 0;
  local_494 = 0;
  local_498 = 0;
  bVar2 = recovered_10005830((int)param_2);
  if ((!bVar2) && ((*(short *)(param_2 + 4) != 0x1af4 || (*(short *)(param_2 + 6) != 0x1041))))
  goto LAB_10004a44;
  recovered_10005fec((undefined1 *)local_4a0,6);
  recovered_10005fec((undefined1 *)(((uintptr_t)pf_module_state + 0x9b4U)),0x3c);
  bVar2 = recovered_10005c20(param_1,param_2,(int *)local_84);
  if (bVar2) {
    recovered_100061ac(param_1,(int *)local_84,0x18028);
    if ((local_48 & 8) != 0) {
      if (local_78 != 0) {
        for (iVar9 = 0; iVar9 != 6; iVar9 = iVar9 + 1) {
          local_484 = 0;
          uVar21 = recovered_100063a4(param_1,local_78,iVar9,(int)&local_484);
          if (uVar21 != 0) {
            *(char *)((int)local_4a0 + iVar9) = (char)local_484;
          }
        }
        recovered_10006448(param_1,local_78,6,(int)&local_490);
        recovered_10006448(param_1,local_78,8,(int)&local_494);
        recovered_10006448(param_1,local_78,10,(int)&local_498);
      }
      recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x792U)));
      iVar9 = 0;
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x79bU));
      do {
        uVar21 = local_490;
        if (iVar9 != 0) {
          if (iVar9 == 6) goto LAB_100049b4;
          recovered_1000542c((int)local_8a0,0x400,pcVar13);
        }
        recovered_10006a7c((int)local_8a0,0x400,(uint)*(byte *)((int)local_4a0 + iVar9),2);
        iVar9 = iVar9 + 1;
      } while( true );
    }
    pcVar13 = (char *)(((uintptr_t)pf_module_state+0x68fU));
  }
  else {
    pcVar13 = (char *)(((uintptr_t)pf_module_state+0x671U));
  }
LAB_10004a3c:
  recovered_1000542c((int)local_8a0,0x400,pcVar13);
LAB_10004a44:
  iVar9 = recovered_1000586c((int)param_2);
  recovered_1000374c((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x268U)));
  recovered_1000542c((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x7d5U)));
  recovered_10006a7c((int)local_84,0x60,(uint)*param_2,2);
  pcVar19 = (char *)(((uintptr_t)pf_module_state + 0x79bU));
  recovered_1000542c((int)local_84,0x60,pcVar19);
  recovered_10006a7c((int)local_84,0x60,(uint)param_2[1],2);
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x7d7U));
  recovered_1000542c((int)local_84,0x60,pcVar13);
  recovered_100054e4((int)local_84,0x60,(uint)param_2[2]);
  recovered_1000374c((undefined1 *)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x7d9U)));
  recovered_10006a7c((int)&local_484,0x400,(uint)*param_2,2);
  recovered_1000542c((int)&local_484,0x400,pcVar19);
  recovered_10006a7c((int)&local_484,0x400,(uint)param_2[1],2);
  recovered_1000542c((int)&local_484,0x400,pcVar13);
  recovered_100054e4((int)&local_484,0x400,(uint)param_2[2]);
  recovered_1000542c((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x7deU)));
  recovered_10006a7c((int)&local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_1000542c((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x7e7U)));
  recovered_10006a7c((int)&local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_1000542c((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x7f0U)));
  recovered_10006a7c((int)&local_484,0x400,(uint)param_2[8],2);
  recovered_1000542c((int)&local_484,0x400,pcVar13);
  recovered_10006a7c((int)&local_484,0x400,(uint)param_2[9],2);
  recovered_1000542c((int)&local_484,0x400,pcVar13);
  recovered_10006a7c((int)&local_484,0x400,(uint)param_2[10],2);
  recovered_1000542c((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x7f8U)));
  recovered_10006a7c((int)&local_484,0x400,(uint)param_2[0xb],2);
  recovered_100053bc((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x803U)),
                     *(uint *)(param_2 + 0x10));
  pcVar19 = (char *)(((uintptr_t)pf_module_state + 0x80bU));
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x4b2U));
  pcVar15 = extraout_r3_10;
  for (uVar21 = 0; uVar21 != 6; uVar21 = uVar21 + 1) {
    uVar14 = *(uint *)(param_2 + uVar21 * 4 + 0x14);
    if (uVar14 != 0) {
      recovered_1000542c((int)&local_484,0x400,pcVar19);
      recovered_100054e4((int)&local_484,0x400,uVar21);
      recovered_1000542c((int)&local_484,0x400,pcVar13);
      recovered_10006a7c((int)&local_484,0x400,uVar14,8);
      pcVar15 = extraout_r3_11;
    }
  }
  if (local_8a0[0] != '\0') {
    recovered_1000542c((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b0U)));
    recovered_1000542c((int)&local_484,0x400,local_8a0);
    pcVar15 = extraout_r3_12;
  }
  if (param_1 != (int *)0x0) {
    pcVar15 = (code *)param_1[3];
  }
  if (param_1 != (int *)0x0 && pcVar15 != (code *)0x0) {
    (*pcVar15)(local_84,iVar9,&local_484);
  }
  return;
LAB_100049b4:
  recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x6abU)),local_490);
  recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x6b9U)),local_494);
  uVar14 = local_498;
  if (local_498 != 0) {
    recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x6caU)),local_498);
  }
  recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x6d1U)),local_54);
  iVar9 = (0x32b8U);
  if (1 < local_44) {
    uVar10 = 0xc;
    puVar16 = (undefined4 *)(((uintptr_t)pf_module_state + 0x9b4U));
    if ((local_54 & 0x8000) == 0) {
      uVar10 = 10;
    }
    *(undefined4 *)(((uintptr_t)pf_module_state + 0x9c4U)) = uVar10;
    if (uVar14 == 0) {
      uVar14 = 0x5dc;
    }
    *(uint *)(iVar9 + 0x10004d74) = uVar21;
    *puVar16 = param_1;
    *(uint *)(iVar9 + 0x10004d70) = uVar14;
    for (iVar9 = 0; iVar9 != 6; iVar9 = iVar9 + 1) {
      *(undefined1 *)((int)puVar16 + iVar9 + 0x1c) = *(undefined1 *)((int)local_4a0 + iVar9);
    }
    recovered_10005fec((undefined1 *)(((uintptr_t)pf_module_state + 0x9f4U)),0x100);
    recovered_10005fec((undefined1 *)(((uintptr_t)pf_module_state + 0x9484U)),0x24);
    recovered_10005fec((undefined1 *)(((uintptr_t)pf_module_state + 0xaf4U)),0x84);
    puVar22 = (undefined1 *)(((uintptr_t)pf_module_state + 0xb84U));
    recovered_10005fec(puVar22,0x80c0);
    iVar9 = 0;
    iVar7 = ((uintptr_t)pf_module_state + 0x9f4U);
    for (iVar8 = 0; iVar11 = (0xbbfcU), iVar8 != 0x10; iVar8 = iVar8 + 1) {
      local_484 = 0;
      local_488 = 0;
      uVar21 = recovered_10006adc(param_1,(uint)puVar22,0x80c,(uint)&local_484);
      if (uVar21 == 0) {
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x79dU));
        goto LAB_100050dc;
      }
      recovered_10006b34((undefined1 *)(iVar7 + iVar9),local_484,local_488);
      iVar11 = iVar7 + iVar8 * 0x10;
      puVar22 = puVar22 + 0x80c;
      iVar9 = iVar9 + 0x10;
      *(undefined4 *)(iVar11 + 0xc) = 2;
      *(undefined4 *)(iVar11 + 8) = 0x80c;
      iVar11 = ((uintptr_t)pf_module_state + 0x9454U) + iVar8 * 2;
      *(char *)(iVar11 + 0x34) = (char)iVar8;
      *(undefined1 *)(iVar11 + 0x35) = 0;
    }
    puVar17 = (undefined4 *)(((uintptr_t)pf_module_state + 0x9454U));
    puVar16 = (undefined4 *)(((uintptr_t)pf_module_state + 0x9484U));
    *puVar16 = 0x100000;
    iVar9 = (0x3140U);
    puVar20 = (undefined2 *)(((uintptr_t)pf_module_state + 0x9d8U));
    iVar7 = recovered_10006b78(param_1,(int *)local_84,0,0x10,((uintptr_t)pf_module_state + 0x9f4U),0x100,
                               (int)puVar16,0x24,((uintptr_t)pf_module_state + 0xaf4U),0x84,puVar20);
    if (iVar7 != 0) {
      *(undefined2 *)(iVar9 + 0x10004f06) = 0x10;
      recovered_100066b0(param_1,(int)puVar20,0);
      puVar22 = (undefined1 *)(iVar11 + 0x10004ee4);
      recovered_10005fec(puVar22,0x10);
      recovered_10005fec((undefined1 *)puVar17,6);
      puVar23 = (undefined1 *)(iVar11 + 0x10004ed4);
      recovered_10005fec(puVar23,0xc);
      pointer = (undefined1 *)(((uintptr_t)pf_module_state + 0x8c44U));
      recovered_10005fec(pointer,0x80c);
      uVar21 = recovered_10006adc(param_1,(uint)pointer,0x80c,iVar9 + 0x10004ef4);
      if (uVar21 == 0) {
        pcVar13 = (char *)(((uintptr_t)pf_module_state+0x7b9U));
LAB_100050dc:
        recovered_1000542c((int)local_8a0,0x400,pcVar13);
      }
      else {
        *puVar17 = 0;
        iVar7 = recovered_10006b78(param_1,(int *)local_84,1,1,(int)puVar22,0x10,(int)puVar17,6,
                                   (int)puVar23,0xc,(undefined2 *)(iVar9 + 0x10004f10));
        if (iVar7 != 0) {
          recovered_100063a4(param_1,local_84[0],0x14,(int)&local_48c);
          recovered_100063c0(param_1,local_84[0],local_48c | 4);
          recovered_100063a4(param_1,local_84[0],0x14,(int)&local_48c);
          *(undefined4 *)(iVar9 + 0x10004ee4) = 1;
          iVar7 = 0;
          recovered_100066b0(param_1,(int)puVar20,0);
          recovered_10005fec((undefined1 *)&local_484,0xc0);
          local_478 = 0x800;
          local_47c = *(uint *)(iVar9 + 0x10004ee8);
          local_480 = 0xf;
          if ((local_490 & 1) == 0) {
            local_480 = 0xd;
          }
          local_484 = 0xc0;
          for (; iVar7 != 6; iVar7 = iVar7 + 1) {
            auStack_404[iVar7 + -0x70] = *(undefined1 *)((int)local_4a0 + iVar7);
          }
          recovered_1000374c((undefined1 *)&local_444,0x40,(char *)(((uintptr_t)pf_module_state + 0x713U)));
          recovered_1000374c(auStack_404,0x40,(char *)(((uintptr_t)pf_module_state + 0x24U)));
          if ((((param_1 == (int *)0x0) || (*param_1 != (0x54584b57U))) || ((uint)param_1[2] < 0xcc))
             || (((code *)param_1[0x32] == (code *)0x0 ||
                 (iVar7 = (*(code *)param_1[0x32])
                                    (&local_484,((uintptr_t)&recovered_100066fc),((uintptr_t)&recovered_10006868))
                 , iVar7 == 0)))) {
            recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x728U)));
            *(undefined4 *)(iVar9 + 0x10004ee4) = 0;
          }
          else {
            recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x745U)));
            recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x75bU)),
                               *(uint *)(iVar9 + 0x10004ef0));
            recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x76aU)),
                               (uint)*(ushort *)(iVar9 + 0x10004f04));
            recovered_10005480((int)local_8a0,(char *)(((uintptr_t)pf_module_state + 0x779U)),
                               (uint)*(ushort *)(iVar9 + 0x10004f10));
            recovered_100053bc((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x788U)),local_48c);
          }
          goto LAB_10004a44;
        }
      }
    }
    recovered_1000542c((int)local_8a0,0x400,(char *)(((uintptr_t)pf_module_state + 0x6fcU)));
    goto LAB_10004a44;
  }
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x6e4U));
  goto LAB_10004a3c;
}

#undef DAT_100046d4
#undef DAT_10004804
#undef DAT_10004808
#undef DAT_10004840
#undef DAT_1000489c
#undef DAT_100048a0
#undef DAT_10004954
#undef DAT_10004958
#undef DAT_1000495c
#undef DAT_10004960
#undef DAT_10004964
#undef DAT_10004968
#undef DAT_1000496c
#undef DAT_10004970
#undef DAT_10004974
#undef DAT_10004978
#undef DAT_1000497c
#undef DAT_10004980
#undef DAT_10004984
#undef DAT_10004988
#undef DAT_1000498c
#undef DAT_10004990
#undef DAT_10004994
#undef DAT_10004998
#undef DAT_1000499c
#undef DAT_100049a0
#undef DAT_100049a4
#undef DAT_100049a8
#undef DAT_100049ac
#undef DAT_100049b0
#undef DAT_10004cd0
#undef DAT_10004cd4
#undef DAT_10004cd8
#undef DAT_10004d48
#undef DAT_10004d4c
#undef DAT_10004d50
#undef DAT_10004da8
#undef DAT_10004e8c
#undef DAT_10004e90
#undef DAT_10004e94
#undef DAT_10004e98
#undef DAT_10004e9c
#undef DAT_10004ea0
#undef DAT_10004ea4
#undef DAT_10004ea8
#undef DAT_100050c8
#undef DAT_100050cc
#undef DAT_10005100
#undef DAT_10005104
#undef DAT_10005108
#undef DAT_100051fc
#undef DAT_10005210
#undef DAT_10005234
#undef DAT_10005238
#undef DAT_1000523c
#undef DAT_10005240
#undef DAT_10005244
#undef DAT_10005248
#undef DAT_1000524c
#undef DAT_10005250
#undef DAT_10005254
#undef DAT_10005258
#undef DAT_1000525c
#undef DAT_10005260
#undef DAT_10005264
#undef DAT_10005268
#undef DAT_1000526c
#undef DAT_10005270
#undef DAT_10005274
#undef DAT_10005278
#undef DAT_1000527c
#undef DAT_10005280
#undef DAT_10005284
#undef DAT_10005288
#undef DAT_1000528c
#undef DAT_10005290
#undef DAT_10005294
#undef DAT_10005298
#undef DAT_1000529c
#undef DAT_100052a0
#undef DAT_100052a4
#undef DAT_100052a8
#undef DAT_100052ac
#undef DAT_100052b0
#undef DAT_100052b4
#undef DAT_100052b8
#undef DAT_100052bc
#undef DAT_100052c0
#undef DAT_100052c4
#undef DAT_100052c8
#undef DAT_100052cc
#undef DAT_100052d0
#undef DAT_100052d4
#undef DAT_100052d8
#undef DAT_100052dc
#undef DAT_100052e0
#undef DAT_100052e4
#undef DAT_100052e8
#undef DAT_100052ec
#undef DAT_100052f0
#undef DAT_100052f4
#undef DAT_100052f8
#undef DAT_100052fc
#undef DAT_10005300
#undef DAT_10005304
#undef DAT_10005308
#undef DAT_1000530c
#undef DAT_10005310
#undef DAT_10005314
#undef DAT_10005318
#undef DAT_1000531c
#undef DAT_10005320
#undef DAT_10005324
#undef DAT_10005328
#undef DAT_1000532c
#undef DAT_10005330
#undef DAT_10005334
#undef DAT_10005338
#undef DAT_1000533c
#undef DAT_10005340
#undef DAT_10005344
#undef DAT_10005348
#undef DAT_1000534c
#undef DAT_10005350
#undef DAT_10005354
#undef DAT_10005358
#undef DAT_1000535c
#undef DAT_10005360
#undef local_8a0
#undef local_4a0
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450
#undef local_44c
#undef local_448
#undef auStack_404
#undef local_444
#undef local_440
#undef local_43c
#undef local_434
#undef local_430
#undef local_84
#undef local_78
#undef local_54
#undef local_48
#undef local_44

#undef DAT_100053b8
#define DAT_100053b8 (*(int *)(0x100053b8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005364
 */

undefined4 recovered_10005364(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0 || param_4 == 0)) || (*param_1 != (0x54584b57U))) ||
     (((uint)param_1[2] < 0x58 || ((code *)param_1[0x15] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100053b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_100053b8

#undef DAT_10005424
#define DAT_10005424 (*(int *)(0x10005424U))
#undef DAT_10005428
#define DAT_10005428 (*(int *)(0x10005428U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053bc
 */

void recovered_100053bc(int param_1,uint param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000542c(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x4b0U)));
  recovered_1000542c(param_1,param_2,param_3);
  recovered_1000542c(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x4b2U)));
  recovered_10006a7c(param_1,param_2,param_4,8);
  return;
}

#undef DAT_10005424
#undef DAT_10005428

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000542c
 */

void recovered_1000542c(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100055d0(param_1);
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


#undef DAT_100054dc
#define DAT_100054dc (*(int *)(0x100054dcU))
#undef DAT_100054e0
#define DAT_100054e0 (*(int *)(0x100054e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005480
 */

void recovered_10005480(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000542c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b0U)));
  recovered_1000542c(param_1,0x400,param_2);
  recovered_1000542c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b2U)));
  recovered_100054e4(param_1,0x400,param_3);
  return;
}

#undef DAT_100054dc
#undef DAT_100054e0

#define abStack_a8 (*(byte (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054e4
 */

void recovered_100054e4(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10005594(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10007030(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10005594(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005594
 */

void recovered_10005594(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100055d0(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055d0
 */

int recovered_100055d0(int param_1)

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
undefined4 recovered_100055f8(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_100057bc((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_100057bc((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_100057bc((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_100057bc((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_100057bc((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_1000582c
#define DAT_1000582c (*(uint8_t * *)(0x1000582cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057bc
 */

undefined4
recovered_100057bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_1000582c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005830
 */

bool recovered_10005830(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 == 0) {
    return false;
  }
  if (*(short *)(param_1 + 4) == 0x1af4) {
    bVar1 = true;
    if (*(short *)(param_1 + 6) != 0x1000) {
      bVar1 = *(short *)(param_1 + 6) == 0x1040;
    }
  }
  return bVar1;
}


#undef DAT_10005a74
#define DAT_10005a74 (*(uint *)(0x10005a74U))
#undef DAT_10005b88
#define DAT_10005b88 (*(uint32_t *)(0x10005b88U))
#undef DAT_10005b8c
#define DAT_10005b8c (*(int *)(0x10005b8cU))
#undef DAT_10005b90
#define DAT_10005b90 (*(int *)(0x10005b90U))
#undef DAT_10005b94
#define DAT_10005b94 (*(int *)(0x10005b94U))
#undef DAT_10005b98
#define DAT_10005b98 (*(int *)(0x10005b98U))
#undef DAT_10005b9c
#define DAT_10005b9c (*(int *)(0x10005b9cU))
#undef DAT_10005ba0
#define DAT_10005ba0 (*(int *)(0x10005ba0U))
#undef DAT_10005ba4
#define DAT_10005ba4 (*(int *)(0x10005ba4U))
#undef DAT_10005ba8
#define DAT_10005ba8 (*(int *)(0x10005ba8U))
#undef DAT_10005bac
#define DAT_10005bac (*(int *)(0x10005bacU))
#undef DAT_10005bb0
#define DAT_10005bb0 (*(int *)(0x10005bb0U))
#undef DAT_10005bb4
#define DAT_10005bb4 (*(int *)(0x10005bb4U))
#undef DAT_10005bb8
#define DAT_10005bb8 (*(int *)(0x10005bb8U))
#undef DAT_10005bbc
#define DAT_10005bbc (*(int *)(0x10005bbcU))
#undef DAT_10005bc0
#define DAT_10005bc0 (*(int *)(0x10005bc0U))
#undef DAT_10005bc4
#define DAT_10005bc4 (*(int *)(0x10005bc4U))
#undef DAT_10005bc8
#define DAT_10005bc8 (*(int *)(0x10005bc8U))
#undef DAT_10005bcc
#define DAT_10005bcc (*(int *)(0x10005bccU))
#undef DAT_10005bd0
#define DAT_10005bd0 (*(int *)(0x10005bd0U))
#undef DAT_10005bd4
#define DAT_10005bd4 (*(int *)(0x10005bd4U))
#undef DAT_10005bd8
#define DAT_10005bd8 (*(int *)(0x10005bd8U))
#undef DAT_10005bdc
#define DAT_10005bdc (*(int *)(0x10005bdcU))
#undef switchdataD_10005a74
#define switchdataD_10005a74 (*(uint *)(0x10005a74U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000586c
 */

int recovered_1000586c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_10005a70_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x8caU);
    }
LAB_10005a50:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_10005a70_caseD_5;
    iVar3 = (int)&DAT_10005a74 + (0x24eeU);
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x91cU);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x909U);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x92fU);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10005ad4:
        iVar3 = recovered_10006f9c((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_10005a70_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x810U);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x8c1U);
      }
      goto LAB_10005a50;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10005a10:
        return ((uintptr_t)pf_module_state + 0x8efU);
      }
      goto LAB_10005a50;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10005a10;
      goto LAB_10005a50;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x8e6U);
      }
      goto LAB_10005a50;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x8d5U);
      }
      goto LAB_10005a50;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x8abU);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10005ad4;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x8b7U);
        }
      }
      goto LAB_10005a50;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x8deU);
      }
      goto LAB_10005a50;
    }
    if (sVar2 != 0x1af4) goto LAB_10005a50;
    iVar3 = ((uintptr_t)pf_module_state + 0x81bU);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10005910_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0x82aU);
      break;
    case 0x1043:
switchD_10005910_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x84eU);
      break;
    case 0x1044:
switchD_10005910_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x871U);
      break;
    case 0x1045:
switchD_10005910_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x83bU);
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
switchD_10005910_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x8a0U);
      break;
    case 0x1048:
switchD_10005910_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x861U);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x880U);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x88fU);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10005910_caseD_1042;
      case 0x1002:
        goto switchD_10005910_caseD_1045;
      case 0x1003:
        goto switchD_10005910_caseD_1043;
      case 0x1004:
        goto switchD_10005910_caseD_1048;
      case 0x1005:
        goto switchD_10005910_caseD_1044;
      default:
        goto switchD_10005910_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_10005a74
#undef DAT_10005b88
#undef DAT_10005b8c
#undef DAT_10005b90
#undef DAT_10005b94
#undef DAT_10005b98
#undef DAT_10005b9c
#undef DAT_10005ba0
#undef DAT_10005ba4
#undef DAT_10005ba8
#undef DAT_10005bac
#undef DAT_10005bb0
#undef DAT_10005bb4
#undef DAT_10005bb8
#undef DAT_10005bbc
#undef DAT_10005bc0
#undef DAT_10005bc4
#undef DAT_10005bc8
#undef DAT_10005bcc
#undef DAT_10005bd0
#undef DAT_10005bd4
#undef DAT_10005bd8
#undef DAT_10005bdc
#undef switchdataD_10005a74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005be0
 */

int recovered_10005be0(int param_1)

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


#define local_44 (*(int *)(frame + 28))
#define local_40 (*(int *)(frame + 32))
#define local_3c (*(uint *)(frame + 36))
#define local_38 (*(uint *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
#define local_30 (*(int *)(frame + 48))
#define local_2c (*(int * *)(frame + 52))
#define local_28 (*(int *)(frame + 56))
#define local_24 (*(int * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c20
 */

bool recovered_10005c20(int *param_1,undefined1 *param_2,int *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint extraout_r0 = 0;
  uint uVar2;
  int iVar3;
  int *extraout_r1 = 0;
  int *extraout_r1_00 = 0;
  int *extraout_r1_01 = 0;
  int *extraout_r1_02 = 0;
  int *extraout_r1_03 = 0;
  int *extraout_r1_04 = 0;
  int *extraout_r1_05 = 0;
  int *extraout_r1_06 = 0;
  int *extraout_r1_07 = 0;
  int *extraout_r1_08 = 0;
  int *piVar4;
  bool bVar5;
  bool bVar6;

  bVar5 = false;
  local_24 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    recovered_10005fec((undefined1 *)param_3,0x58);
    uVar2 = extraout_r0;
    if (param_2 != (undefined1 *)0x0) {
      uVar2 = (uint)(byte)param_2[0x12];
    }
    if ((param_2 != (undefined1 *)0x0 && (uVar2 & 0x10) != 0) &&
       (iVar3 = recovered_100057bc(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                   (uint)(byte)param_2[2],0x34,1,(int)&local_24), iVar3 != 0)) {
      uVar2 = 0;
      while( true ) {
        bVar6 = 0x1e < uVar2;
        bVar5 = uVar2 == 0x1f;
        if (uVar2 < 0x20) {
          bVar6 = (int *)0xae < local_24 + -0x10;
          bVar5 = local_24 + -0x10 == (int *)0xaf;
        }
        if (bVar6 && !bVar5) break;
        local_28 = 0;
        local_2c = (int *)0x0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        iVar3 = recovered_100057bc(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                   (uint)(byte)param_2[2],(uint)local_24 & 0xffff,1,(int)&local_28);
        if ((iVar3 == 0) ||
           (iVar3 = recovered_100057bc(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                       (uint)(byte)param_2[2],((uint)local_24 & 0xffff) + 1 & 0xffff
                                       ,1,(int)&local_2c), iVar3 == 0)) break;
        piVar4 = extraout_r1;
        if ((local_28 == 9) &&
           ((((iVar3 = recovered_100057bc(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                          (uint)(byte)param_2[2],
                                          ((uint)local_24 & 0xffff) + 3 & 0xffff,1,(int)&local_30),
              piVar4 = extraout_r1_00, iVar3 != 0 &&
              (iVar3 = recovered_100057bc(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                          (uint)(byte)param_2[2],
                                          ((uint)local_24 & 0xffff) + 4 & 0xffff,1,(int)&local_34),
              piVar4 = extraout_r1_01, iVar3 != 0)) &&
             (iVar3 = recovered_100057bc(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                         (uint)(byte)param_2[2],
                                         ((uint)local_24 & 0xffff) + 8 & 0xffff,4,(int)&local_38),
             piVar4 = extraout_r1_02, iVar3 != 0)) &&
            (iVar3 = recovered_100057bc(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                        (uint)(byte)param_2[2],
                                        ((uint)local_24 & 0xffff) + 0xc & 0xffff,4,(int)&local_3c),
            piVar4 = extraout_r1_03, iVar3 != 0)))) {
          local_40 = 0;
          param_3[9] = param_3[9] + 1;
          piVar4 = param_3;
          if (local_30 == 1) {
            bVar5 = recovered_10006010(param_1,(int)param_2,local_34,local_38,local_3c,&local_40);
            if (bVar5) {
              *param_3 = local_40;
              param_3[4] = local_34;
              goto LAB_10005fac;
            }
            piVar4 = extraout_r1_04;
          }
          if ((local_30 == 2) &&
             (bVar5 = recovered_10006010(param_1,(int)param_2,local_34,local_38,local_3c,&local_40),
             piVar4 = extraout_r1_05, bVar5)) {
            bVar1 = *param_2;
            param_3[1] = local_40;
            param_3[5] = local_34;
            local_44 = 0;
            iVar3 = recovered_100057bc(param_1,(uint)bVar1,(uint)(byte)param_2[1],
                                       (uint)(byte)param_2[2],
                                       ((uint)local_24 & 0xffff) + 0x10 & 0xffff,4,(int)&local_44);
            piVar4 = extraout_r1_06;
            if (iVar3 != 0) {
              param_3[8] = local_44;
            }
          }
          else if ((local_30 == 3) &&
                  (bVar5 = recovered_10006010(param_1,(int)param_2,local_34,local_38,local_3c,
                                              &local_40), piVar4 = extraout_r1_07, bVar5)) {
            param_3[2] = local_40;
            param_3[6] = local_34;
            piVar4 = param_3;
          }
          else if ((local_30 == 4) &&
                  (bVar5 = recovered_10006010(param_1,(int)param_2,local_34,local_38,local_3c,
                                              &local_40), piVar4 = extraout_r1_08, bVar5)) {
            param_3[3] = local_40;
            param_3[7] = local_34;
            piVar4 = param_3;
          }
        }
LAB_10005fac:
        if (local_2c != (int *)0x0) {
          piVar4 = local_24;
        }
        if (local_2c == (int *)0x0 || local_2c == piVar4) break;
        local_24 = local_2c;
        uVar2 = uVar2 + 1;
      }
      bVar5 = *param_3 != 0;
    }
  }
  return bVar5;
}

#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fec
 */

void recovered_10005fec(undefined1 *param_1,int param_2)

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
 * Address: 0x10006010
 */

bool recovered_10006010(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
  {
    uVar1 = recovered_10006074(param_1,param_2,param_3,param_5 + param_4,param_6);
    bVar2 = uVar1 != 0;
    if (bVar2) {
      *param_6 = *param_6 + param_4;
    }
  }
  return bVar2;
}


#undef DAT_100061a8
#define DAT_100061a8 (*(int *)(0x100061a8U))
#define local_1c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006074
 */

uint recovered_10006074(int *param_1,int param_2,uint param_3,int param_4,undefined4 *param_5)

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

#undef DAT_100061a8
#undef local_1c

#define local_18 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061ac
 */

void recovered_100061ac(int *param_1,int *param_2,uint param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *unaff_r4;

  iVar2 = 0;
  if (param_2 != (int *)0x0) {
    iVar2 = *param_2;
    unaff_r4 = param_2;
  }
  local_18 = 0;
  if (param_2 != (int *)0x0 && iVar2 != 0) {
    recovered_100063a4(param_1,iVar2,0x14,(int)(unaff_r4 + 0xe));
    recovered_100063c0(param_1,*unaff_r4,0);
    recovered_100063d8(param_1,*unaff_r4,0,0);
    recovered_100063f0(param_1,*unaff_r4,4,(int)(unaff_r4 + 10));
    recovered_100063d8(param_1,*unaff_r4,0,1);
    recovered_100063f0(param_1,*unaff_r4,4,(int)(unaff_r4 + 0xb));
    unaff_r4[0xc] = unaff_r4[10] & param_3;
    unaff_r4[0xd] = unaff_r4[0xb] & 1;
    recovered_100063d8(param_1,*unaff_r4,8,0);
    recovered_100063d8(param_1,*unaff_r4,0xc,unaff_r4[0xc]);
    recovered_100063d8(param_1,*unaff_r4,8,1);
    recovered_100063d8(param_1,*unaff_r4,0xc,unaff_r4[0xd]);
    recovered_1000640c(param_1);
    recovered_100063c0(param_1,*unaff_r4,1);
    recovered_100063c0(param_1,*unaff_r4,3);
    recovered_100063c0(param_1,*unaff_r4,0xb);
    recovered_100063a4(param_1,*unaff_r4,0x14,(int)(unaff_r4 + 0xf));
    recovered_10006448(param_1,*unaff_r4,0x12,(int)(unaff_r4 + 0x10));
    recovered_100063a4(param_1,*unaff_r4,0x15,(int)(unaff_r4 + 0x15));
    recovered_10006464(param_1,*unaff_r4,0x16,0);
    recovered_10006448(param_1,*unaff_r4,0x18,(int)(unaff_r4 + 0x11));
    recovered_10006448(param_1,*unaff_r4,0x1c,(int)(unaff_r4 + 0x12));
    uVar1 = recovered_10006448(param_1,*unaff_r4,0x1e,(int)&local_18);
    if (uVar1 != 0) {
      unaff_r4[0x13] = local_18;
      if (unaff_r4[1] != 0) {
        unaff_r4[0x14] = unaff_r4[8] * local_18 + unaff_r4[1];
      }
    }
  }
  return;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063a4
 */

uint recovered_100063a4(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  uVar1 = recovered_1000647c(param_1,param_3 + param_2,1,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063c0
 */

uint recovered_100063c0(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 0) {
    return (uint)param_1;
  }
  uVar1 = recovered_100064e8(param_1,param_2 + 0x14,1,param_3);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063d8
 */

uint recovered_100063d8(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_100064e8(param_1,param_3 + param_2,4,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063f0
 */

uint recovered_100063f0(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  uVar1 = recovered_1000647c(param_1,param_3 + param_2,4,param_4);
  return uVar1;
}


#undef DAT_10006444
#define DAT_10006444 (*(int *)(0x10006444U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000640c
 */

void recovered_1000640c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000643c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10006444

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006448
 */

uint recovered_10006448(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  uVar1 = recovered_1000647c(param_1,param_3 + param_2,2,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006464
 */

uint recovered_10006464(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_100064e8(param_1,param_3 + param_2,2,param_4);
  return uVar1;
}


#undef DAT_100064e4
#define DAT_100064e4 (*(uint8_t * *)(0x100064e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000647c
 */

undefined4 recovered_1000647c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_100064d4;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_100064d4:
                    /* WARNING: Could not recover jumptable at 0x100064e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100064e4

#undef DAT_10006548
#define DAT_10006548 (*(int *)(0x10006548U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064e8
 */

undefined4 recovered_100064e8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006530;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006530:
                    /* WARNING: Could not recover jumptable at 0x1000653c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006548

#undef DAT_100065b4
#define DAT_100065b4 (*(int *)(0x100065b4U))
#undef DAT_100065b8
#define DAT_100065b8 (*(int *)(0x100065b8U))
#undef DAT_100065bc
#define DAT_100065bc (*(int *)(0x100065bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000654c
 */

void recovered_1000654c(int param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  recovered_1000542c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b0U)));
  recovered_1000542c(param_1,0x400,param_2);
  recovered_1000542c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b2U)));
  pcVar1 = (char *)(((uintptr_t)pf_module_state + 0x1e3U));
  if (param_3 != 0) {
    pcVar1 = (char *)param_3;
  }
  recovered_1000542c(param_1,0x400,pcVar1);
  return;
}

#undef DAT_100065b4
#undef DAT_100065b8
#undef DAT_100065bc

#undef DAT_10006660
#define DAT_10006660 (*(int *)(0x10006660U))
#undef DAT_10006664
#define DAT_10006664 (*(int *)(0x10006664U))
#define uStack_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065c0
 */

void recovered_100065c0(int param_1,char *param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uStack_24 = 0;
  recovered_1000542c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b0U)));
  recovered_1000542c(param_1,0x400,param_2);
  recovered_1000542c(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b2U)));
  for (uVar4 = 0x1c; uVar4 != 0xfffffffc; uVar4 = uVar4 - 4) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    uStack_24 = (uint)CONCAT12(bVar3,(undefined2)uStack_24);
    recovered_1000542c(param_1,0x400,(char *)((int)&uStack_24 + 2));
  }
  return;
}

#undef DAT_10006660
#undef DAT_10006664
#undef uStack_24

#undef DAT_100066ac
#define DAT_100066ac (*(int *)(0x100066acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006668
 */

void recovered_10006668(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0 && param_2 != 0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x5c) {
      return;
    }
    if ((code *)param_1[0x16] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100066a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x16])(param_2,1);
      return;
    }
  }
  return;
}

#undef DAT_100066ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066b0
 */

void recovered_100066b0(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0) || (*(int *)(param_2 + 8) == 0)) {
    return;
  }
  recovered_1000640c(param_1);
  recovered_10006464(param_1,*(int *)(param_2 + 8),0,param_3);
  return;
}


#undef DAT_10006854
#define DAT_10006854 (*(int *)(0x10006854U))
#undef DAT_10006858
#define DAT_10006858 (*(int *)(0x10006858U))
#undef DAT_1000685c
#define DAT_1000685c (*(int *)(0x1000685cU))
#undef DAT_10006860
#define DAT_10006860 (*(int *)(0x10006860U))
#undef DAT_10006864
#define DAT_10006864 (*(int *)(0x10006864U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066fc
 */

undefined4 recovered_100066fc(undefined1 *param_1,uint param_2,uint *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *api;
  uint uVar4;
  uint pointer;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;

  iVar2 = (0x1900U);
  uVar5 = 0;
  uVar7 = *(uint *)(((uintptr_t)pf_module_state + 0x9c4U));
  if (uVar7 == 0) {
    uVar7 = 10;
  }
  puVar3 = param_1;
  if (param_3 != (uint *)0x0) {
    puVar3 = (undefined1 *)0x0;
    *param_3 = 0;
  }
  iVar6 = (0x19dcU);
  if (param_1 != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(((uintptr_t)pf_module_state+0x9b8U));
  }
  if (param_1 != (undefined1 *)0x0 && puVar3 != (undefined1 *)0x0) {
    api = *(int **)(((uintptr_t)pf_module_state + 0x9b4U));
    if (api != (int *)0x0) {
      param_4 = (uint)*(ushort *)(((uintptr_t)pf_module_state+0x9d8U));
    }
    if (api != (int *)0x0 && param_4 != 0) {
      uVar8 = ((uintptr_t)pf_module_state + 0xaf4U);
      recovered_10006e28(api,uVar8,0x84);
      uVar1 = *(ushort *)(((uintptr_t)pf_module_state+0x9dcU));
      if ((uint)*(ushort *)(((uintptr_t)pf_module_state+0xaf6U)) != (uint)uVar1) {
        uVar4 = recovered_10007080((uint)uVar1,(uint)*(ushort *)(((uintptr_t)pf_module_state+0x9d8U)));
        iVar6 = uVar8 + uVar4 * 8;
        uVar8 = recovered_10006e68((undefined4 *)(iVar6 + 4));
        uVar4 = recovered_10006e68((undefined4 *)(iVar6 + 8));
        *(ushort *)(((uintptr_t)pf_module_state+0x9dcU)) = uVar1 + 1;
        if ((uVar8 < 0x10) && (uVar7 < uVar4)) {
          pointer = uVar8 * 0x80c + ((uintptr_t)pf_module_state + 0xb84U);
          recovered_10006e28(*(int **)(((uintptr_t)pf_module_state + 0x9b4U)),pointer,0x80c);
          uVar4 = uVar4 - uVar7;
          uVar5 = 0;
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar4;
          }
          bVar10 = param_2 <= uVar4;
          bVar9 = uVar4 == param_2;
          if (!bVar10 || bVar9) {
            bVar10 = 0x7ff < uVar4;
            bVar9 = uVar4 == 0x800;
          }
          if (!bVar10 || bVar9) {
            recovered_10006f74(param_1,(undefined1 *)(pointer + uVar7),uVar4);
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 0;
          if (0xf < uVar8) {
            return 0;
          }
        }
        recovered_10006e90(uVar8 & 0xffff);
      }
    }
  }
  return uVar5;
}

#undef DAT_10006854
#undef DAT_10006858
#undef DAT_1000685c
#undef DAT_10006860
#undef DAT_10006864

#undef DAT_10006a50
#define DAT_10006a50 (*(int *)(0x10006a50U))
#undef DAT_10006a54
#define DAT_10006a54 (*(int *)(0x10006a54U))
#undef DAT_10006a58
#define DAT_10006a58 (*(int *)(0x10006a58U))
#undef DAT_10006a5c
#define DAT_10006a5c (*(int *)(0x10006a5cU))
#undef DAT_10006a60
#define DAT_10006a60 (*(int *)(0x10006a60U))
#undef DAT_10006a64
#define DAT_10006a64 (*(int *)(0x10006a64U))
#undef DAT_10006a68
#define DAT_10006a68 (*(int *)(0x10006a68U))
#undef DAT_10006a6c
#define DAT_10006a6c (*(int *)(0x10006a6cU))
#undef DAT_10006a70
#define DAT_10006a70 (*(int *)(0x10006a70U))
#undef DAT_10006a74
#define DAT_10006a74 (*(int *)(0x10006a74U))
#undef DAT_10006a78
#define DAT_10006a78 (*(int *)(0x10006a78U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006868
 */

bool recovered_10006868(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint pointer;
  undefined1 *pointer_00;
  uint uVar5;
  int iVar6;
  undefined1 *pointer_01;
  bool bVar7;

  iVar2 = (0x179cU);
  iVar6 = *(int *)(((uintptr_t)pf_module_state + 0x9c4U));
  if (iVar6 == 0) {
    iVar6 = 10;
  }
  if (param_1 != (undefined1 *)0x0) {
    bVar7 = *(int *)(((uintptr_t)pf_module_state + 0x9b8U)) != 0;
    iVar3 = 0;
    if (bVar7) {
      iVar3 = *(int *)(((uintptr_t)pf_module_state + 0x9b4U));
    }
    if ((((bVar7 && iVar3 != 0) && (0xfffff80c < param_2 - 0x801U)) &&
        (*(short *)(((uintptr_t)pf_module_state + 0x9e4U)) != 0)) && (uVar5 = iVar6 + param_2, uVar5 < 0x80d)) {
      pointer_01 = (undefined1 *)(((uintptr_t)pf_module_state + 0x8c44U));
      recovered_10005fec(pointer_01,0x80c);
      recovered_10006f74(pointer_01 + iVar6,param_1,param_2);
      iVar3 = (0xa190U);
      pointer = ((uintptr_t)pf_module_state+0x9454U);
      pointer_00 = (undefined1 *)(((uintptr_t)pf_module_state + 0x9474U));
      recovered_10006b34(pointer_00,*(undefined4 *)(((uintptr_t)pf_module_state+0x9c8U)),
                         *(undefined4 *)(((uintptr_t)pf_module_state+0x9ccU)));
      *(char *)(((uintptr_t)pf_module_state+0x947dU)) = (char)(uVar5 >> 8);
      uVar1 = *(ushort *)(((uintptr_t)pf_module_state+0x9e6U));
      *(undefined2 *)(((uintptr_t)pf_module_state+0x9482U)) = 0;
      iVar6 = uVar1 + 1;
      *(short *)(((uintptr_t)pf_module_state+0x9e6U)) = (short)iVar6;
      *(char *)(((uintptr_t)pf_module_state+0x9456U)) = (char)iVar6;
      *(undefined4 *)(((uintptr_t)pf_module_state+0x947eU)) = 0;
      *(char *)(((uintptr_t)pf_module_state+0x947cU)) = (char)uVar5;
      *(undefined2 *)(((uintptr_t)pf_module_state+0x9458U)) = 0;
      *(char *)(((uintptr_t)pf_module_state+0x9457U)) = (char)((uint)iVar6 >> 8);
      recovered_10006e28(*(int **)(((uintptr_t)pf_module_state + 0x9b4U)),(uint)pointer_01,uVar5);
      recovered_10006e28(*(int **)(((uintptr_t)pf_module_state + 0x9b4U)),(uint)pointer_00,0x10);
      recovered_10006e28(*(int **)(((uintptr_t)pf_module_state + 0x9b4U)),pointer,6);
      recovered_100066b0(*(int **)(((uintptr_t)pf_module_state + 0x9b4U)),((uintptr_t)pf_module_state+0x9e4U),1);
      iVar6 = (0x54584b57U);
      for (uVar5 = 0; uVar5 != 1000; uVar5 = uVar5 + 1) {
        recovered_10006e28(*(int **)(((uintptr_t)pf_module_state + 0x9b4U)),((uintptr_t)pf_module_state+0x9464U),0xc);
        if (*(short *)(((uintptr_t)pf_module_state+0x9466U)) != *(short *)(((uintptr_t)pf_module_state+0x9e8U))) {
          *(short *)(((uintptr_t)pf_module_state+0x9e8U)) = *(short *)(((uintptr_t)pf_module_state+0x9466U));
          return uVar5 < 1000;
        }
        piVar4 = *(int **)(((uintptr_t)pf_module_state + 0x9b4U));
        if (((piVar4 != (int *)0x0) && (*piVar4 == iVar6)) &&
           ((0x33 < (uint)piVar4[2] && ((code *)piVar4[0xc] != (code *)0x0)))) {
          (*(code *)piVar4[0xc])(100);
        }
      }
    }
  }
  return false;
}

#undef DAT_10006a50
#undef DAT_10006a54
#undef DAT_10006a58
#undef DAT_10006a5c
#undef DAT_10006a60
#undef DAT_10006a64
#undef DAT_10006a68
#undef DAT_10006a6c
#undef DAT_10006a70
#undef DAT_10006a74
#undef DAT_10006a78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a7c
 */

void recovered_10006a7c(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_10005594(param_1,param_2,bVar3);
  }
  return;
}


/* Pooka's Free Software License. Recovered DMA service contract. */
unsigned int recovered_10006adc(int *api,unsigned int pointer,unsigned int size,unsigned int output){
 if(!api||(unsigned)api[0]!=0x54584b57U||(unsigned)api[2]<116||!pointer||!output||!api[28])return 0;
 return ((unsigned int (*)(unsigned int,unsigned int,unsigned int,unsigned int))(uintptr_t)(unsigned)api[28])(0,pointer,size,output);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b34
 */

void recovered_10006b34(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  param_1[4] = (char)param_3;
  param_1[7] = (char)((uint)param_3 >> 0x18);
  *param_1 = (char)param_2;
  param_1[5] = (char)((uint)param_3 >> 8);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  param_1[6] = (char)((uint)param_3 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[1] = (char)((uint)param_2 >> 8);
  return;
}


#define local_3c (*(undefined4 *)(frame + 20))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_34 (*(undefined4 *)(frame + 28))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_2c (*(int *)(frame + 36))
#define local_28 (*(int *)(frame + 40))
#define local_24 (*(uint *)(frame + 44))
#define local_40 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b78
 */

undefined4
recovered_10006b78(int *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5,
                  uint param_6,int param_7,uint param_8,int param_9,uint param_10,
                  undefined2 *param_11)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint unaff_r11;

  uVar5 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  if (param_11 != (undefined2 *)0x0) {
    iVar3 = 0;
    if (param_2 != (int *)0x0) {
      iVar3 = *param_2;
    }
    local_24 = 0;
    local_28 = 0;
    if (param_2 != (int *)0x0 && iVar3 != 0) {
      recovered_10006464(param_1,iVar3,0x16,param_3);
      uVar2 = recovered_10006448(param_1,*param_2,0x18,(int)&local_24);
      if (uVar2 != 0) {
        unaff_r11 = local_24;
      }
      if (uVar2 != 0 && unaff_r11 != 0) {
        uVar2 = recovered_10006448(param_1,*param_2,0x1e,(int)&local_28);
        iVar4 = 0;
        iVar3 = 0;
        if (uVar2 != 0) {
          iVar3 = param_2[1];
        }
        if (uVar2 != 0 && iVar3 != 0) {
          iVar4 = param_2[8] * local_28 + iVar3;
        }
        if ((((iVar4 != 0) && (param_4 <= (unaff_r11 & 0xffff))) &&
            (uVar2 = recovered_10006adc(param_1,param_5,param_6,(uint)&local_30), uVar2 != 0)) &&
           ((uVar2 = recovered_10006adc(param_1,param_7,param_8,(uint)&local_38), uVar2 != 0 &&
            (uVar2 = recovered_10006adc(param_1,param_9,param_10,(uint)&local_40), uVar2 != 0)))) {
          recovered_10006464(param_1,*param_2,0x16,param_3);
          recovered_10006464(param_1,*param_2,0x18,param_4);
          recovered_10006dec(param_1,*param_2,0x20,local_30,local_34);
          recovered_10006dec(param_1,*param_2,0x28,local_38,local_3c);
          recovered_10006dec(param_1,*param_2,0x30,local_40,0);
          recovered_10006e28(param_1,param_5,param_6);
          recovered_10006e28(param_1,param_7,param_8);
          recovered_10006e28(param_1,param_9,param_10);
          recovered_10006464(param_1,*param_2,0x1c,1);
          recovered_10006448(param_1,*param_2,0x1c,(int)&local_2c);
          if (local_2c != 0) {
            *param_11 = (short)param_4;
            uVar5 = 1;
            param_11[1] = *(undefined2 *)(param_7 + 2);
            uVar1 = *(undefined2 *)(param_9 + 2);
            *(int *)(param_11 + 4) = iVar4;
            param_11[2] = uVar1;
          }
        }
      }
    }
  }
  return uVar5;
}

#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dec
 */

void recovered_10006dec(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100063d8(param_1,param_2,param_3,param_4);
  if (uVar1 == 0) {
    return;
  }
  recovered_100063d8(param_1,param_2,param_3 + 4,param_5);
  return;
}


/* Pooka's Free Software License. Recovered DMA service contract. */
void recovered_10006e28(int *api,unsigned int pointer,unsigned int size){
 if(api&&(unsigned)api[0]==0x54584b57U&&(unsigned)api[2]>=120&&api[29])
 ((void (*)(unsigned int,unsigned int,unsigned int))(uintptr_t)(unsigned)api[29])(0,pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e68
 */

undefined4 recovered_10006e68(undefined4 *param_1)

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


#undef DAT_10006f58
#define DAT_10006f58 (*(int *)(0x10006f58U))
#undef DAT_10006f5c
#define DAT_10006f5c (*(int *)(0x10006f5cU))
#undef DAT_10006f60
#define DAT_10006f60 (*(int *)(0x10006f60U))
#undef DAT_10006f64
#define DAT_10006f64 (*(int *)(0x10006f64U))
#undef DAT_10006f68
#define DAT_10006f68 (*(int *)(0x10006f68U))
#undef DAT_10006f6c
#define DAT_10006f6c (*(int *)(0x10006f6cU))
#undef DAT_10006f70
#define DAT_10006f70 (*(int *)(0x10006f70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e90
 */

void recovered_10006e90(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  uint pointer;
  undefined1 *pointer_00;
  bool bVar7;

  bVar7 = *(int *)(((uintptr_t)pf_module_state + 0x9b4U)) != 0;
  sVar1 = 0;
  if (bVar7) {
    unaff_r4 = ((uintptr_t)pf_module_state + 0x9b4U);
    sVar1 = *(short *)(((uintptr_t)pf_module_state + 0x9d8U));
  }
  if (bVar7 && sVar1 != 0) {
    pointer_00 = (undefined1 *)(param_1 * 0x80c + ((uintptr_t)pf_module_state + 0xb84U));
    recovered_10005fec(pointer_00,0x80c);
    uVar2 = *(ushort *)(unaff_r4 + 0x26);
    iVar6 = uVar2 + 1;
    *(short *)(unaff_r4 + 0x26) = (short)iVar6;
    iVar4 = (0x9bc4U);
    uVar3 = *(ushort *)(unaff_r4 + 0x24);
    *(char *)(((uintptr_t)pf_module_state + 0x9486U)) = (char)iVar6;
    uVar5 = recovered_10007080((uint)uVar2,(uint)uVar3);
    pointer = ((uintptr_t)pf_module_state+0x9484U);
    *(short *)(pointer + uVar5 * 2 + 4) = (short)param_1;
    *(char *)(((uintptr_t)pf_module_state+0x9487U)) = (char)((uint)iVar6 >> 8);
    recovered_10006e28(*(int **)(((uintptr_t)pf_module_state + 0x9b4U)),(uint)pointer_00,0x80c);
    recovered_10006e28(*(int **)(((uintptr_t)pf_module_state + 0x9b4U)),pointer,0x24);
    recovered_100066b0(*(int **)(((uintptr_t)pf_module_state + 0x9b4U)),unaff_r4 + 0x24,0);
    return;
  }
  return;
}

#undef DAT_10006f58
#undef DAT_10006f5c
#undef DAT_10006f60
#undef DAT_10006f64
#undef DAT_10006f68
#undef DAT_10006f6c
#undef DAT_10006f70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f74
 */

void recovered_10006f74(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0 || param_2 == (undefined1 *)0x0) {
    return;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


#undef DAT_10007010
#define DAT_10007010 (*(uint32_t *)(0x10007010U))
#undef DAT_10007014
#define DAT_10007014 (*(int *)(0x10007014U))
#undef DAT_10007018
#define DAT_10007018 (*(int *)(0x10007018U))
#undef DAT_1000701c
#define DAT_1000701c (*(int *)(0x1000701cU))
#undef DAT_10007020
#define DAT_10007020 (*(int *)(0x10007020U))
#undef DAT_10007024
#define DAT_10007024 (*(int *)(0x10007024U))
#undef DAT_10007028
#define DAT_10007028 (*(int *)(0x10007028U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f9c
 */

int recovered_10006f9c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x945U);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x964U);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x94fU);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x954U);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x959U);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x94aU);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x96dU);
  }
  return iVar1;
}

#undef DAT_10007010
#undef DAT_10007014
#undef DAT_10007018
#undef DAT_1000701c
#undef DAT_10007020
#undef DAT_10007024
#undef DAT_10007028

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007030
 */

uint recovered_10007030(uint param_1,uint param_2)

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
 * Address: 0x10007080
 */

uint recovered_10007080(uint param_1,uint param_2)

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
 * Address: 0x100070b8
 */

uint recovered_100070b8(uint param_1,uint param_2)

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
 * Address: 0x10007128
 */

uint recovered_10007128(uint param_1,uint param_2)

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
 * Address: 0x10007190
 */

undefined8 recovered_10007190(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10007274
 */

undefined8 recovered_10007274(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100072f4
 */

undefined8 recovered_100072f4(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10007414
 */

undefined8 recovered_10007414(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10007550
#define DAT_10007550 (*(double *)(0x10007550U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074d0
 */

undefined8 recovered_100074d0(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10007550

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007558
 */

undefined8 recovered_10007558(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_100074d0(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_100074d0(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075a4
 */

void recovered_100075a4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100074d0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x994U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075b4
 */

void recovered_100075b4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x97cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075c4
 */

double recovered_100075c4(uint param_1,uint param_2)

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
 * Address: 0x1000760c
 */

void recovered_1000760c(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_100075c4(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_100075c4(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007634
 */

float recovered_10007634(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100075c4(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007650
 */

float recovered_10007650(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_1000760c(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
