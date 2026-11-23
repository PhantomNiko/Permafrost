/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_00280a3c
#define DAT_00280a3c (*(uint8_t *)(0x280a3cU))
#undef DAT_00280a4c
#define DAT_00280a4c (*(uint8_t *)(0x280a4cU))
#undef DAT_1000f040
#define DAT_1000f040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x254U)))
#undef DAT_1000f050
#define DAT_1000f050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
#undef DAT_1000f060
#define DAT_1000f060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x274U)))
#undef DAT_1000f070
#define DAT_1000f070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x284U)))
#undef DAT_1000f1f7
#define DAT_1000f1f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40bU)))
#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef DAT_1000f3b9
#define DAT_1000f3b9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cdU)))
#undef DAT_1000fc51
#define DAT_1000fc51 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe65U)))
#undef DAT_10012108
#define DAT_10012108 (*(uint *)(((uintptr_t)pf_module_state + 0x331cU)))
#undef DAT_1001210c
#define DAT_1001210c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3320U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280828
#define UINT_00280828 (*(uint *)(0x280828U))
#undef UINT_0028082c
#define UINT_0028082c (*(uint *)(0x28082cU))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#undef UINT_00280894
#define UINT_00280894 (*(uint *)(0x280894U))
#undef UINT_0028089c
#define UINT_0028089c (*(uint *)(0x28089cU))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#undef UINT_00280984
#define UINT_00280984 (*(uint *)(0x280984U))
#undef UNK_1000f064
#define UNK_1000f064 (*(uint *)(((uintptr_t)pf_module_state + 0x278U)))
#undef UNK_1000f068
#define UNK_1000f068 (*(int *)(((uintptr_t)pf_module_state + 0x27cU)))
#undef UNK_1000f06c
#define UNK_1000f06c (*(int *)(((uintptr_t)pf_module_state + 0x280U)))
#undef UNK_1000f074
#define UNK_1000f074 (*(int *)(((uintptr_t)pf_module_state + 0x288U)))
#undef UNK_1000f078
#define UNK_1000f078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef UNK_1000f07c
#define UNK_1000f07c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x290U)))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef _DAT_00280a3c
#define _DAT_00280a3c (*(uint *)(0x280a3cU))
#undef _DAT_00280a4c
#define _DAT_00280a4c (*(uint *)(0x280a4cU))
#undef _DAT_1000f050
#define _DAT_1000f050 (*(uint128 *)(((uintptr_t)pf_module_state + 0x264U)))
#undef _DAT_1000f060
#define _DAT_1000f060 (*(int *)(((uintptr_t)pf_module_state + 0x274U)))
#undef _DAT_1000f070
#define _DAT_1000f070 (*(int *)(((uintptr_t)pf_module_state + 0x284U)))
#undef iRam000000001000f068
#define iRam000000001000f068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27cU)))
#undef iRam000000001000f06c
#define iRam000000001000f06c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef iRam000000001000f074
#define iRam000000001000f074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef str_1000f140
#define str_1000f140 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x354U)))
#undef str_1000f160
#define str_1000f160 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_1000f170
#define str_1000f170 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x384U)))
#undef str_1000f177
#define str_1000f177 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38bU)))
#undef str_1000f187
#define str_1000f187 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39bU)))
#undef str_1000f192
#define str_1000f192 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a6U)))
#undef str_1000f199
#define str_1000f199 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3adU)))
#undef str_1000f1a1
#define str_1000f1a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b5U)))
#undef str_1000f1bf
#define str_1000f1bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d3U)))
#undef str_1000f1da
#define str_1000f1da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3eeU)))
#undef str_1000f236
#define str_1000f236 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44aU)))
#undef str_1000f440
#define str_1000f440 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x654U)))
#undef str_1000f450
#define str_1000f450 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x664U)))
#undef str_1000f482
#define str_1000f482 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x696U)))
#undef str_1000f4a2
#define str_1000f4a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b6U)))
#undef str_1000fc4a
#define str_1000fc4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe5eU)))
#undef uRam000000001000f064
#define uRam000000001000f064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x278U)))
#undef uRam000000001000f078
#define uRam000000001000f078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef uRam000000001000f07c
#define uRam000000001000f07c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x290U)))
#define local_318 (*(undefined4 *)(pf_stack_frame + 16408))
#define local_310 (*(uint *)(pf_stack_frame + 16416))
#define local_30c (*(undefined8 *)(pf_stack_frame + 16420))
#define local_304 (*(int *)(pf_stack_frame + 16428))
#define local_300 (*(uint *)(pf_stack_frame + 16432))
#define local_2fc (*(int *)(pf_stack_frame + 16436))
#define local_2f8 (*(byte *)(pf_stack_frame + 16440))
#define local_b8 (*(ulong *)(pf_stack_frame + 17016))
#define local_b0 (*(uint *)(pf_stack_frame + 17024))
#define local_ac (*(uint *)(pf_stack_frame + 17028))
#define local_a8 (*(uint *)(pf_stack_frame + 17032))
#define local_a4 (*(uint *)(pf_stack_frame + 17036))
#define local_a0 (*(undefined4 * *)(pf_stack_frame + 17040))
#define local_98 (*(undefined8 *)(pf_stack_frame + 17048))
#define local_90 (*(uint *)(pf_stack_frame + 17056))
#define local_88 (*(ulong *)(pf_stack_frame + 17064))
#define local_80 (*(ulong *)(pf_stack_frame + 17072))
#define local_78 (*(uint *)(pf_stack_frame + 17080))
#define local_68 (*(ulong *)(pf_stack_frame + 17096))
#define local_60 (*(ulong *)(pf_stack_frame + 17104))
#define local_58 (*(uint *)(pf_stack_frame + 17112))
#define local_54 (*(uint *)(pf_stack_frame + 17116))
#define local_50 (*(ulong *)(pf_stack_frame + 17120))
#define local_48 (*(undefined8 *)(pf_stack_frame + 17128))
#define local_38 (*(undefined8 *)(pf_stack_frame + 17144))
#define bStack_4313 (*(byte *)(pf_stack_frame + 29))
#define bStack_4312 (*(byte *)(pf_stack_frame + 30))
#define cStack_4311 (*(char *)(pf_stack_frame + 31))
#define uStack_4310 (*(uint *)(pf_stack_frame + 32))
#define uStack_3f38 (*(ulong *)(pf_stack_frame + 1016))
#define pcStack_3eb8 (*(char * *)(pf_stack_frame + 1144))
#define uStack_b80 (*(undefined4 *)(pf_stack_frame + 14256))
#define uStack_334 (*(uint *)(pf_stack_frame + 16380))
#define uStack_330 (*(uint *)(pf_stack_frame + 16384))
#define uStack_328 (*(undefined4 *)(pf_stack_frame + 16392))
#define uStack_324 (*(uint *)(pf_stack_frame + 16396))
#define uStack_320 (*(uint *)(pf_stack_frame + 16400))
#define uStack_31c (*(undefined4 *)(pf_stack_frame + 16404))
#define uStack_74 (*(uint *)(pf_stack_frame + 17084))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 17088))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 17136))
#define local_4318 (*(undefined4 *)(pf_stack_frame + 24))
#define local_4314 (*(byte *)(pf_stack_frame + 28))
#define local_430c (*(uint *)(pf_stack_frame + 36))
#define local_42e8 (*(void * *)(pf_stack_frame + 72))
#define local_3fc8 (*(uint *)(pf_stack_frame + 872))
#define local_3fc4 (*(char *)(pf_stack_frame + 876))
#define local_3fc3 (*(undefined1 *)(pf_stack_frame + 877))
#define local_3fc0 (*(undefined1 (*)[16320])(pf_stack_frame + 880))
#define local_3fb0 (*(ulonglong *)(pf_stack_frame + 896))
#define local_3fa8 (*(ulonglong *)(pf_stack_frame + 904))
#define local_3f90 (*(void * *)(pf_stack_frame + 928))
#define local_3f88 (*(void * *)(pf_stack_frame + 936))
#define local_3f80 (*(char * *)(pf_stack_frame + 944))
#define local_3f78 (*(ulong *)(pf_stack_frame + 952))
#define local_3f68 (*(undefined8 *)(pf_stack_frame + 968))
#define local_3f60 (*(uint *)(pf_stack_frame + 976))
#define local_3f5c (*(undefined8 *)(pf_stack_frame + 980))
#define local_3f54 (*(uint *)(pf_stack_frame + 988))
#define local_3f50 (*(char *)(pf_stack_frame + 992))
#define local_3f4f (*(char *)(pf_stack_frame + 993))
#define local_3f4e (*(byte *)(pf_stack_frame + 994))
#define local_3f4c (*(int *)(pf_stack_frame + 996))
#define local_3f48 (*(undefined8 *)(pf_stack_frame + 1000))
#define local_3f40 (*(byte * *)(pf_stack_frame + 1008))
#define local_3f30 (*(ulong *)(pf_stack_frame + 1024))
#define local_3f28 (*(uint *)(pf_stack_frame + 1032))
#define local_3f24 (*(int *)(pf_stack_frame + 1036))
#define local_3f20 (*(void * *)(pf_stack_frame + 1040))
#define local_3f10 (*(int *)(pf_stack_frame + 1056))
#define local_3f0c (*(int *)(pf_stack_frame + 1060))
#define local_3f08 (*(uint *)(pf_stack_frame + 1064))
#define local_3f04 (*(uint *)(pf_stack_frame + 1068))
#define local_3f00 (*(int *)(pf_stack_frame + 1072))
#define local_3ef8 (*(ulong *)(pf_stack_frame + 1080))
#define local_3eec (*(uint *)(pf_stack_frame + 1092))
#define local_3ee8 (*(uint *)(pf_stack_frame + 1096))
#define local_3ee4 (*(int *)(pf_stack_frame + 1100))
#define local_3ee0 (*(byte *)(pf_stack_frame + 1104))
#define local_3edf (*(char *)(pf_stack_frame + 1105))
#define local_3ede (*(char *)(pf_stack_frame + 1106))
#define local_3ed8 (*(int *)(pf_stack_frame + 1112))
#define local_3ed4 (*(int *)(pf_stack_frame + 1116))
#define local_3ed0 (*(int *)(pf_stack_frame + 1120))
#define local_3ecc (*(uint *)(pf_stack_frame + 1124))
#define local_3ec8 (*(undefined1 * *)(pf_stack_frame + 1128))
#define local_3ec0 (*(undefined8 *)(pf_stack_frame + 1136))
#define local_3eb0 (*(undefined8 *)(pf_stack_frame + 1152))
#define local_3ea8 (*(char (*)[16040])(pf_stack_frame + 1160))
#define local_3e28 (*(char (*)[15912])(pf_stack_frame + 1288))
#define local_3da8 (*(undefined1 (*)[15784])(pf_stack_frame + 1416))
#define local_3d80 (*(char (*)[15744])(pf_stack_frame + 1456))
#define local_3d58 (*(uint *)(pf_stack_frame + 1496))
#define local_3d54 (*(undefined4 *)(pf_stack_frame + 1500))
#define local_3d50 (*(undefined1 (*)[15696])(pf_stack_frame + 1504))
#define local_3d10 (*(char *)(pf_stack_frame + 1568))
#define local_3d0f (*(char *)(pf_stack_frame + 1569))
#define local_3d0d (*(bool *)(pf_stack_frame + 1571))
#define local_3d0c (*(undefined4 *)(pf_stack_frame + 1572))
#define local_3d08 (*(uint *)(pf_stack_frame + 1576))
#define local_3cfc (*(undefined1 (*)[15612])(pf_stack_frame + 1588))
#define local_3cbc (*(undefined1 (*)[15548])(pf_stack_frame + 1652))
#define local_3bbc (*(undefined1 (*)[15292])(pf_stack_frame + 1908))
#define local_3abc (*(undefined4 *)(pf_stack_frame + 2164))
#define local_3ab8 (*(undefined4 *)(pf_stack_frame + 2168))
#define local_3aac (*(undefined1 (*)[15020])(pf_stack_frame + 2180))
#define local_39a4 (*(undefined1 (*)[14756])(pf_stack_frame + 2444))
#define local_389c (*(char (*)[14492])(pf_stack_frame + 2708))
#define local_3898 (*(char *)(pf_stack_frame + 2712))
#define local_3897 (*(char *)(pf_stack_frame + 2713))
#define local_3896 (*(char *)(pf_stack_frame + 2714))
#define local_3895 (*(char *)(pf_stack_frame + 2715))
#define local_3894 (*(undefined1 (*)[14484])(pf_stack_frame + 2716))
#define local_388c (*(undefined1 (*)[14476])(pf_stack_frame + 2724))
#define local_3888 (*(uint *)(pf_stack_frame + 2728))
#define local_3884 (*(uint (*)[3617])(pf_stack_frame + 2732))
#define local_3877 (*(char (*)[14455])(pf_stack_frame + 2745))
#define local_3724 (*(undefined1 (*)[14116])(pf_stack_frame + 3084))
#define local_371c (*(uint (*)[3527])(pf_stack_frame + 3092))
#define local_b8c (*(int *)(pf_stack_frame + 14244))
#define local_b88 (*(uint *)(pf_stack_frame + 14248))
#define local_b84 (*(int *)(pf_stack_frame + 14252))
#define local_b7c (*(undefined4 *)(pf_stack_frame + 14260))
#define local_a24 (*(uint *)(pf_stack_frame + 14604))
#define local_a1c (*(int *)(pf_stack_frame + 14612))
#define local_a18 (*(undefined8 *)(pf_stack_frame + 14616))
#define local_a10 (*(undefined4 *)(pf_stack_frame + 14624))
#define local_a0c (*(uint *)(pf_stack_frame + 14628))
#define local_a08 (*(int *)(pf_stack_frame + 14632))
#define local_a04 (*(int *)(pf_stack_frame + 14636))
#define local_a00 (*(int *)(pf_stack_frame + 14640))
#define local_9fc (*(char *)(pf_stack_frame + 14644))
#define local_9fb (*(char *)(pf_stack_frame + 14645))
#define local_9fa (*(byte *)(pf_stack_frame + 14646))
#define local_9f9 (*(char *)(pf_stack_frame + 14647))
#define local_9f8 (*(char (*)[2552])(pf_stack_frame + 14648))
#define local_678 (*(uint * *)(pf_stack_frame + 15544))
#define local_670 (*(int *)(pf_stack_frame + 15552))
#define local_66c (*(int *)(pf_stack_frame + 15556))
#define local_668 (*(int *)(pf_stack_frame + 15560))
#define local_664 (*(int *)(pf_stack_frame + 15564))
#define local_660 (*(int *)(pf_stack_frame + 15568))
#define local_65c (*(char *)(pf_stack_frame + 15572))
#define local_654 (*(char (*)[1620])(pf_stack_frame + 15580))
#define local_564 (*(uint *)(pf_stack_frame + 15820))
#define local_560 (*(uint *)(pf_stack_frame + 15824))
#define local_55c (*(char *)(pf_stack_frame + 15828))
#define local_558 (*(int *)(pf_stack_frame + 15832))
#define local_4e8 (*(undefined4 *)(pf_stack_frame + 15944))
#define local_4e0 (*(byte *)(pf_stack_frame + 15952))
#define local_4dc (*(int (*)[311])(pf_stack_frame + 15956))
#define local_340 (*(int *)(pf_stack_frame + 16368))
#define local_33c (*(undefined1 *)(pf_stack_frame + 16372))
#define local_338 (*(uint *)(pf_stack_frame + 16376))
#define local_32c (*(uint *)(pf_stack_frame + 16388))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100005e0(int argc,char **argv)

{
  unsigned char pf_stack_frame[17232] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char **ppcVar2;
  byte bVar3;
  char cVar4;
  uchar uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  code *pcVar16;
  void *pvVar17;
  undefined7 extraout_var = 0;
  char *pcVar18;
  uint *puVar19;
  undefined8 uVar20;
  byte *pbVar21;
  ulong uVar22;
  int *piVar23;
  uint uVar24;
  ulong uVar25;
  byte bVar26;
  uint uVar27;
  char *pcVar28;
  ulong uVar29;
  undefined4 uVar30;
  int iVar31;
  long lVar32;
  int iVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  bool bVar37;
  uint128 auVar38;
  uint128 auVar39;
  uint128 auVar40;

  uVar7 = 0;
  if ((argv != (char **)0x0 && argc != 0) && (*argv != (char *)0x0)) {
    pcVar14 = strstr(*argv,str_1000f170);
    uVar7 = (uint)(pcVar14 != (char *)0x0);
  }
  DAT_10012108 = uVar7;
  DAT_1001210c = 0;
  if (1 < argc && argv != (char **)0x0) {
    uVar34 = 1;
    do {
      iVar6 = strcmp(argv[uVar34],str_1000f177);
      if (iVar6 == 0) {
        DAT_10012108 = 1;
      }
      iVar6 = strncmp(argv[uVar34],str_1000f187,10);
      if (iVar6 == 0) {
        pcVar14 = argv[uVar34] + 10;
LAB_100006c4:
        cVar4 = *pcVar14;
        if (cVar4 == '\0') {
          return 0;
        }
        uVar7 = 0;
        do {
          pcVar14 = pcVar14 + 1;
          if ((byte)(cVar4 - 0x3aU) < 0xf6) {
            return 0;
          }
          if (((byte)(cVar4 - 0x30U) ^ 0x7ffffffe) / 10 < uVar7) {
            return 0;
          }
          uVar7 = (uint)(byte)(cVar4 - 0x30U) + uVar7 * 10;
          cVar4 = *pcVar14;
        } while (cVar4 != '\0');
        if (uVar7 == 0) {
          return 0;
        }
        DAT_1001210c = uVar7;
      }
      else {
        iVar6 = strncmp(argv[uVar34],str_1000f192,6);
        if (iVar6 == 0) {
          pcVar14 = argv[uVar34] + 6;
          goto LAB_100006c4;
        }
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != (uint)argc);
  }
  if (1 < argc && argv != (char **)0x0) {
    uVar34 = 1;
    local_48 = argv;
    do {
      pcVar14 = argv[uVar34];
      if (pcVar14 != (char *)0x0) {
        pcVar18 = strchr(pcVar14,0x3d);
        uVar36 = (long)pcVar18 - (long)pcVar14;
        if ((uVar36 != 0 && pcVar18 != (char *)0x0) && (uVar36 < 0x10)) {
          memcpy(&local_4318,pcVar14,uVar36);
          *(undefined1 *)((long)&local_4318 + uVar36) = 0;
          argv = local_48;
          if ((byte)local_4318 == 0) {
            lVar35 = 0;
          }
          else {
            bVar3 = (byte)local_4318 | 0x20;
            if (0x19 < (byte)((byte)local_4318 + 0xbf)) {
              bVar3 = (byte)local_4318;
            }
            if (bVar3 != 99) goto LAB_10000a20;
            if (PF_PART1(local_4318, 1) == 0) {
              lVar35 = 1;
            }
            else {
              bVar3 = PF_PART1(local_4318, 1) | 0x20;
              if (0x19 < (byte)(PF_PART1(local_4318, 1) + 0xbf)) {
                bVar3 = PF_PART1(local_4318, 1);
              }
              if (bVar3 != 0x6f) goto LAB_10000a20;
              if (PF_PART1(local_4318, 2) == 0) {
                lVar35 = 2;
              }
              else {
                bVar3 = PF_PART1(local_4318, 2) | 0x20;
                if (0x19 < (byte)(PF_PART1(local_4318, 2) + 0xbf)) {
                  bVar3 = PF_PART1(local_4318, 2);
                }
                if (bVar3 != 0x6d) goto LAB_10000a20;
                if (PF_PART1(local_4318, 3) == 0) {
                  lVar35 = 3;
                }
                else {
                  bVar3 = PF_PART1(local_4318, 3) | 0x20;
                  if (0x19 < (byte)(PF_PART1(local_4318, 3) + 0xbf)) {
                    bVar3 = PF_PART1(local_4318, 3);
                  }
                  if (bVar3 != 0x6d) goto LAB_10000a20;
                  if (local_4314 == 0) {
                    lVar35 = 4;
                  }
                  else {
                    bVar3 = local_4314 | 0x20;
                    if (0x19 < (byte)(local_4314 + 0xbf)) {
                      bVar3 = local_4314;
                    }
                    if (bVar3 != 0x61) goto LAB_10000a20;
                    if (bStack_4313 == 0) {
                      lVar35 = 5;
                    }
                    else {
                      bVar3 = bStack_4313 | 0x20;
                      if (0x19 < (byte)(bStack_4313 + 0xbf)) {
                        bVar3 = bStack_4313;
                      }
                      if (bVar3 != 0x6e) goto LAB_10000a20;
                      if (bStack_4312 == 0) {
                        lVar35 = 6;
                      }
                      else {
                        bVar3 = bStack_4312 | 0x20;
                        if (0x19 < (byte)(bStack_4312 + 0xbf)) {
                          bVar3 = bStack_4312;
                        }
                        if ((bVar3 != 100) || (lVar35 = 7, cStack_4311 != '\0')) goto LAB_10000a20;
                      }
                    }
                  }
                }
              }
            }
          }
          if (str_1000f199[lVar35] == '\0') {
            pbVar21 = (byte *)(pcVar18 + 1);
            goto LAB_10000753;
          }
        }
      }
LAB_10000a20:
      uVar34 = uVar34 + 1;
    } while ((uint)argc != uVar34);
  }
  pbVar21 = (byte *)0x0;
LAB_10000753:
  memset(&local_4318,0,0x3fe0);
  if (local_3f30 < 0x40 || local_3f40 == (byte *)0x0) {
    uVar34 = local_3f30;
    uVar36 = local_3f30;
    if (local_3f30 == 0) {
      uVar34 = 0x40;
    }
    while (uVar34 < 0x40) {
      uVar34 = uVar36 * 2;
      bVar37 = (long)uVar36 < 0;
      uVar36 = uVar34;
      if (bVar37) {
        uVar34 = 0x40;
      }
    }
    iVar6 = Ram0000000000280800;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
        (uVar7 = Ram0000000000280808, 0xb < uVar7)) && (uVar7 = Ram0000000000280808, 0x57 < uVar7))
    {
      uVar7 = UINT_00280854;
      if (((code *)(ulong)uVar7 != (code *)0x0) &&
         (pbVar15 = (*(code *)(ulong)uVar7)(local_3f40,uVar34), pbVar15 != (byte *)0x0)) {
        if (local_3f40 == (byte *)0x0) {
          *pbVar15 = 0;
        }
        local_3f40 = pbVar15;
        local_3f30 = uVar34;
        goto LAB_10000825;
      }
    }
LAB_1000084d:
    iVar6 = Ram0000000000280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
       ((uVar7 = Ram0000000000280808, 0xb < uVar7 && (uVar7 = Ram0000000000280808, 0x53 < uVar7))))
    {
      uVar7 = UINT_00280850;
      if ((code *)(ulong)uVar7 != (code *)0x0) {
        (*(code *)(ulong)uVar7)(local_3f40);
      }
    }
    iVar6 = Ram0000000000280800;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
        (uVar7 = Ram0000000000280808, 0xb < uVar7)) && (uVar7 = Ram0000000000280808, 0x53 < uVar7))
    {
      uVar7 = UINT_00280850;
      if ((code *)(ulong)uVar7 != (code *)0x0) {
        (*(code *)(ulong)uVar7)(local_3ec8);
      }
    }
    iVar6 = Ram0000000000280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
       ((uVar7 = Ram0000000000280808, 0xb < uVar7 && (uVar7 = Ram0000000000280808, 0x53 < uVar7))))
    {
      uVar7 = UINT_00280850;
      if ((code *)(ulong)uVar7 != (code *)0x0) {
        (*(code *)(ulong)uVar7)(pcStack_3eb8);
      }
    }
    local_3ec8 = (undefined1 *)0x0;
    local_3f40 = (byte *)0x0;
    uStack_3f38 = 0;
    local_3f30 = 0;
    local_3eb0 = 0;
    local_3ec0 = 0;
    pcStack_3eb8 = (char *)0x0;
    iVar6 = Ram0000000000280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
       ((uVar7 = Ram0000000000280808, 0xb < uVar7 && (uVar7 = Ram0000000000280808, 0x53 < uVar7))))
    {
      uVar7 = UINT_00280850;
      if ((code *)(ulong)uVar7 != (code *)0x0) {
        (*(code *)(ulong)uVar7)(local_3f88);
      }
    }
    iVar6 = Ram0000000000280800;
    if ((((iVar6 != 0x50414d57) || (iVar6 = Ram0000000000280804, iVar6 == 0)) ||
        (uVar7 = Ram0000000000280808, uVar7 < 0xc)) || (uVar7 = Ram0000000000280808, uVar7 < 0x54))
    goto LAB_10000fdc;
    uVar7 = UINT_00280850;
    pcVar16 = (code *)(ulong)uVar7;
    if (pcVar16 == (code *)0x0) goto LAB_10000fdc;
  }
  else {
LAB_10000825:
    uVar34 = recovered_10006ff0((long)&local_4318,0x80);
    if (((char)uVar34 == '\0') || ((long)local_3f24 == 0x7fffffff)) goto LAB_1000084d;
    if ((int)local_3f28 <= local_3f24) {
      uVar7 = 0x10;
      if (local_3f28 != 0) {
        uVar7 = local_3f28;
      }
      uVar34 = 0x7fffffff;
      if (uVar7 < 0x40000000) {
        uVar34 = (long)(int)uVar7 * 2;
      }
      uVar36 = 0x10;
      if (local_3f28 != 0) {
        uVar36 = uVar34;
      }
      if ((((uVar36 < 0x80000000 && (ulong)(long)local_3f24 < uVar36) &&
           (iVar6 = Ram0000000000280800, iVar6 == 0x50414d57)) &&
          (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
         ((uVar7 = Ram0000000000280808, 0xb < uVar7 && (uVar7 = Ram0000000000280808, 0x57 < uVar7)))
         ) {
        uVar7 = UINT_00280854;
        if (((code *)(ulong)uVar7 != (code *)0x0) &&
           (pvVar17 = (*(code *)(ulong)uVar7)(local_3f88,uVar36 << 4), pvVar17 != (void *)0x0)) {
          local_3f28 = (uint)uVar36;
          local_3f88 = pvVar17;
          goto LAB_10000c07;
        }
      }
      goto LAB_1000084d;
    }
LAB_10000c07:
    pcVar14 = str_1000f170;
    if (DAT_10012108 == 0) {
      pcVar14 = str_1000fc4a;
    }
    uVar7 = 0x2a8;
    if (DAT_10012108 == 0) {
      uVar7 = 400;
    }
    pf_app_window_spec(&local_338,pcVar14,0x2f8,uVar7);
    uStack_324 = terror_ui_colour(0);
    local_2f8 = local_2f8 | 1;
    uVar7 = terror_ui_window_open(&local_4318,&local_338);
    if (uVar7 != 0) {
      pcVar14 = str_1000f1bf;
      if (DAT_10012108 == 1) {
        pcVar14 = str_1000f1a1;
      }
      terror_ui_window_set_custom_menus(&local_4318,pcVar14);
      if ((local_3f90 != (void *)0x0) || (local_3f90 = local_42e8, local_42e8 != (void *)0x0)) {
        local_3f48 = 0xa00000006;
        memset(&local_a0,0,0x18);
        iVar6 = Ram0000000000280800;
        if (((iVar6 == 0x50414d57) &&
            ((iVar6 = Ram0000000000280804, iVar6 != 0 && (uVar7 = Ram0000000000280808, 0xb < uVar7))
            )) && (uVar7 = Ram0000000000280808, 0x17b < uVar7)) {
          uVar7 = UINT_00280978;
          if (((code *)(ulong)uVar7 != (code *)0x0) &&
             (uVar7 = (*(code *)(ulong)uVar7)(&DAT_1000f1f7,0xffffffff,0x80000001,0,&local_a0),
             uVar7 != 0)) {
            if (PF_PART4(local_98, 4) - 1U < 0x40) {
              local_3f48 = CONCAT44(PF_PART4(local_3f48, 4),PF_PART4(local_98, 4));
            }
            if (local_90 - 1 < 0x40) {
              local_3f48 = CONCAT44(local_90,(int)local_3f48);
            }
            if ((((local_a0 != (undefined4 *)0x0) &&
                 (iVar6 = Ram0000000000280800, iVar6 == 0x50414d57)) &&
                (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
               ((uVar7 = Ram0000000000280808, 0xb < uVar7 &&
                (uVar7 = Ram0000000000280808, 0x53 < uVar7)))) {
              uVar7 = UINT_00280850;
              if ((code *)(ulong)uVar7 != (code *)0x0) {
                (*(code *)(ulong)uVar7)(local_a0);
              }
            }
            memset(&local_a0,0,0x18);
          }
        }
        pcVar14 = str_1000f170;
        if (DAT_10012108 == 0) {
          pcVar14 = str_1000fc4a;
        }
        uVar34 = strlen(pcVar14);
        recovered_10007480((long)&local_4318,(ulong)pcVar14,uVar34,'\0');
        if (DAT_10012108 != 0) {
          snprintf(local_3ea8,0x80,str_1000f1da);
          local_3d58 = DAT_1001210c;
          local_9fc = '\x01';
        }
        local_3eec = recovered_10007370((long)&local_4318);
        local_3edf = '\x01';
        if (DAT_10012108 == 0) {
          iVar6 = Ram0000000000280800;
          if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
             ((uVar7 = Ram0000000000280808, 0xb < uVar7 &&
              ((uVar7 = Ram0000000000280808, 0x23f < uVar7 &&
               ((code *)(ulong)_DAT_00280a3c != (code *)0x0)))))) {
            uVar20 = (*(code *)(ulong)_DAT_00280a3c)();
            uVar34 = CONCAT71((int7)((ulong)uVar20 >> 8),(int)uVar20 != 0);
          }
          else {
            uVar34 = 0;
          }
        }
        else {
          uVar34 = 0;
        }
        uVar7 = local_3ee8;
        local_3ede = (char)uVar34;
        if (pbVar21 != (byte *)0x0) {
          uVar34 = recovered_10003d40((long)&local_4318,pbVar21);
        }
        if (local_3edf == '\x01') {
          uVar7 = uVar7 >> 0xc & 1;
          local_50 = CONCAT44(PF_PART4(local_50, 4),(int)CONCAT71((int7)(uVar34 >> 8),1));
LAB_100010ea:
          terror_ui_window_begin_frame(&local_4318);
          local_48 = (char **)CONCAT44(uStack_4310,
                                       CONCAT13(cStack_4311,
                                                CONCAT12(bStack_4312,
                                                         CONCAT11(bStack_4313,local_4314))));
          uStack_40 = 0;
          memset(&local_338,0,0x278);
          uVar8 = terror_ui_window_query(&local_4318,&local_338);
          if ((uVar8 != 0) && (uVar8 = terror_ui_window_sync_buffer(&local_4318,&local_338), uVar8 != 0)) {
            iVar6 = CONCAT13(cStack_4311,CONCAT12(bStack_4312,CONCAT11(bStack_4313,local_4314)));
            local_3f90 = local_42e8;
            PF_PART4(auVar39, 0) = -(uint)(iVar6 == (uint)local_48);
            PF_PART4(auVar39, 4) = PF_PART4(auVar39, 0);
            PF_PART4(auVar39, 8) = -(uint)(uStack_4310 == PF_PART4(local_48, 4));
            PF_PART4(auVar39, 12) = -(uint)(uStack_4310 == PF_PART4(local_48, 4));
            iVar6 = movmskpd(iVar6,auVar39);
            if (iVar6 != 3) {
              local_3ee0 = 1;
            }
            local_3f68 = local_30c;
            local_3f60 = local_310;
            if ((local_304 != 0) && (local_304 != local_3ee4)) {
              local_3ee4 = local_304;
              if ((local_300 ^ 2) == 0 && local_2fc == 0) {
                recovered_10008fe0((long)&local_4318);
              }
              else if ((local_300 ^ 2) == 0 && local_2fc == 1) {
                recovered_10009160((long)&local_4318);
              }
            }
            bVar3 = local_3ee0;
            if ((local_310 & 0x11) == 0) {
              local_68 = CONCAT44(PF_PART4(local_68, 4),uVar7);
              if (local_3ee0 == 1) {
                local_3ee0 = 0;
              }
              cVar4 = recovered_10004f70((long)&local_4318);
              if ((local_3ed8 != 0) && (local_3ed4 != 0)) {
                local_54 = local_3eec;
                iVar6 = recovered_10007370((long)&local_4318);
                pcVar14 = pcStack_3eb8;
                local_48 = (char **)CONCAT44(PF_PART4(local_48, 4),
                                             (int)(char **)CONCAT71(extraout_var,cVar4));
                local_38 = CONCAT44(PF_PART4(local_38, 4),iVar6);
                if (DAT_10012108 == 0) {
                  if (*pcStack_3eb8 == '\0') {
                    if (local_3ed0 == 0) {
                      uVar34 = strlen(str_1000f236);
                      recovered_10007480((long)&local_4318,((uintptr_t)pf_module_state + 0x44aU),uVar34,'\0');
                    }
                  }
                  else {
                    if ((pcStack_3eb8 < local_3f80 || local_3f80 == (char *)0x0) ||
                       (local_3f78 <= (ulong)((long)pcStack_3eb8 - (long)local_3f80))) {
                      pcVar18 = (char *)0x0;
LAB_1000133d:
                      bVar37 = false;
                      pcVar28 = pcVar14;
                      pcVar1 = pcVar14;
                      do {
                        cVar4 = *pcVar1;
                        if (cVar4 == '\n') {
                          uVar34 = recovered_10007480((long)&local_4318,(ulong)pcVar28,
                                                      (long)pcVar14 - (long)pcVar28,'\x01');
                          if ((char)uVar34 == '\0') goto LAB_100016a7;
                          bVar37 = false;
                          pcVar28 = pcVar1 + 1;
                        }
                        else if (cVar4 != '\r') {
                          if (cVar4 == '\0') goto LAB_10001690;
                          bVar37 = true;
                        }
                        pcVar14 = pcVar14 + 1;
                        pcVar1 = pcVar1 + 1;
                      } while( true );
                    }
                    uVar34 = strlen(pcStack_3eb8);
                    if ((((uVar34 != 0xffffffffffffffff) &&
                         (iVar6 = Ram0000000000280800, iVar6 == 0x50414d57)) &&
                        (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
                       ((uVar7 = Ram0000000000280808, 0xb < uVar7 &&
                        (uVar7 = Ram0000000000280808, 0x4f < uVar7)))) {
                      uVar7 = UINT_0028084c;
                      if ((code *)(ulong)uVar7 != (code *)0x0) {
                        pcVar18 = (*(code *)(ulong)uVar7)(uVar34 + 1);
                        if (pcVar18 != (char *)0x0) {
                          memcpy(pcVar18,pcVar14,uVar34 + 1);
                          pcVar14 = pcVar18;
                          goto LAB_1000133d;
                        }
                      }
                    }
                  }
                }
                else {
                  if ((uint)local_a18 != 0) {
                    if (DAT_1001210c == 0) {
                      if (local_a04 == local_a08) {
                        DAT_1001210c = (uint)local_a18;
                        local_3d58 = (uint)local_a18;
                      }
                    }
                    else if ((local_b8c == 0) || (local_b84 != 0)) goto LAB_10001418;
                    if (local_a24 != 0) {
                      if (local_a24 == 1) {
                        uVar34 = 0;
                      }
                      else {
                        puVar19 = local_371c;
                        uVar34 = 0;
                        do {
                          if (puVar19[-0x5a] == 0) {
                            puVar19[-0x5a] = (uint)local_a18;
                          }
                          if (*puVar19 == 0) {
                            *puVar19 = (uint)local_a18;
                          }
                          uVar34 = uVar34 + 2;
                          puVar19 = puVar19 + 0xb4;
                        } while ((local_a24 & 0xfffffffe) != uVar34);
                      }
                      if (((local_a24 & 1) != 0) && (local_3884[uVar34 * 0x5a] == 0)) {
                        local_3884[uVar34 * 0x5a] = (uint)local_a18;
                      }
                    }
                    if (local_564 != 0) {
                      if (local_564 == 1) {
                        uVar34 = 0;
                      }
                      else {
                        uVar34 = 0;
                        puVar19 = local_678;
                        do {
                          if ((*puVar19 == 0) && (*(char *)((long)puVar19 + 0x15) == '\x01')) {
                            *puVar19 = (uint)local_a18;
                          }
                          if ((puVar19[0x43] == 0) && (*(char *)((long)puVar19 + 0x121) == '\x01'))
                          {
                            puVar19[0x43] = (uint)local_a18;
                          }
                          uVar34 = uVar34 + 2;
                          puVar19 = puVar19 + 0x86;
                        } while ((local_564 & 0xfffffffe) != uVar34);
                      }
                      if ((((local_564 & 1) != 0) && (local_678[uVar34 * 0x43] == 0)) &&
                         (*(char *)((long)(local_678 + uVar34 * 0x43) + 0x15) == '\x01')) {
                        local_678[uVar34 * 0x43] = (uint)local_a18;
                      }
                    }
                  }
LAB_10001418:
                  local_3d54 = local_3d0c;
                  memcpy(local_3d50,local_3cfc,0x40);
                  if ((uint)local_a18 == DAT_1001210c) {
                    local_9f9 = local_3d0f;
                    if (local_9fb == '\x01') {
                      snprintf(local_3d80,0x28,&DAT_1000f3b9,local_3da8);
                      memcpy(local_39a4,local_3aac,0x108);
                      memcpy(local_3894,local_389c,8);
                      memcpy(local_3bbc,local_3cbc,0x100);
                      local_3ab8 = local_3abc;
                      if (((local_b8c == 0) && (local_a04 == local_a08)) &&
                         (local_389c[local_3d08] == '\0')) {
                        uVar7 = 0;
                        if (((local_389c[0] == '\0') && (uVar7 = 1, local_389c[1] == '\0')) &&
                           ((uVar7 = 2, local_389c[2] == '\0' &&
                            ((((uVar7 = 3, local_389c[3] == '\0' && (uVar7 = 4, local_3898 == '\0'))
                              && (uVar7 = 5, local_3897 == '\0')) && (uVar7 = 6, local_3896 == '\0')
                             ))))) {
                          uVar7 = 7;
                          if (local_3895 == '\0') goto LAB_1000157f;
                        }
                        local_3d08 = uVar7;
                      }
                    }
LAB_1000157f:
                    if (local_9f8[0] == '\0') {
                      snprintf(local_3ea8,0x80,&DAT_1000f3b9,local_3e28);
                    }
                  }
                  iVar6 = local_a1c;
                  if (local_b8c == 0) {
LAB_10001880:
                    if ((local_3d0f != '\x01') || (local_3d10 == '\x01')) {
LAB_10001892:
                      local_a00 = local_3ee8 + 0x3c;
                    }
                  }
                  else {
                    if (local_a1c == 2) goto LAB_10001892;
                    if (local_564 != 0) {
                      bVar37 = local_a1c != 1;
                      if (local_564 == 1) {
                        uVar34 = 0;
                      }
                      else {
                        puVar19 = local_678 + 0x49;
                        uVar34 = 0;
                        do {
                          if (puVar19[-0x43] == local_b88) {
                            *(undefined1 *)((long)puVar19 + -0x10f) = 0;
                            *(bool *)((long)puVar19 + -0x10e) = bVar37;
                          }
                          if (*puVar19 == local_b88) {
                            *(undefined1 *)((long)puVar19 + -3) = 0;
                            *(bool *)((long)puVar19 + -2) = bVar37;
                          }
                          uVar34 = uVar34 + 2;
                          puVar19 = puVar19 + 0x86;
                        } while ((local_564 & 0xfffffffe) != uVar34);
                      }
                      if (((local_564 & 1) != 0) && (local_678[uVar34 * 0x43 + 6] == local_b88)) {
                        *(undefined1 *)((long)local_678 + uVar34 * 0x10c + 0x15) = 0;
                        *(bool *)((long)local_678 + uVar34 * 0x10c + 0x16) = bVar37;
                      }
                    }
                    if ((ulong)local_a24 != 0) {
                      iVar33 = 1;
                      puVar19 = &local_3888;
                      lVar35 = 0;
                      do {
                        if (*puVar19 == local_b88) {
                          memset(local_388c + -lVar35,0,0x168);
                          uVar7 = local_a24 - iVar33;
                          local_a24 = local_a24 - 1;
                          memmove(local_388c + -lVar35,local_3724 + -lVar35,
                                             (ulong)uVar7 * 0x168);
                          memset(local_388c + (ulong)local_a24 * 0x168,0,0x168);
                          break;
                        }
                        iVar33 = iVar33 + 1;
                        lVar35 = lVar35 + -0x168;
                        puVar19 = puVar19 + 0x5a;
                      } while ((ulong)local_a24 * 0x168 + lVar35 != 0);
                    }
                    if (iVar6 == 1) {
                      if (local_b8c != 2) goto LAB_1000187c;
                      local_9fc = '\x01';
                    }
                    else {
                      pcVar14 = local_3e28;
                      if (local_3e28[0] == '\0') {
                        pcVar14 = str_1000f450;
                      }
                      snprintf(local_9f8,0x80,str_1000f440,(uint)local_a18,pcVar14);
                      snprintf(local_3ea8,0x80,&DAT_1000f3b9,local_9f8);
LAB_1000187c:
                      if (local_b8c == 0) goto LAB_10001880;
                    }
                  }
                  memset(&local_b8c,0,0x168);
                  if (local_55c == '\x01') {
                    if (local_564 == 0) {
                      uVar7 = 0;
                    }
                    else {
                      lVar35 = 0x1c;
                      uVar34 = 0;
                      uVar7 = local_564;
                      do {
                        puVar19 = local_678;
                        if (*(int *)((long)local_678 + lVar35 + -0x1c) == local_670) {
                          if (((local_664 != 0) &&
                              (*(int *)((long)local_678 + lVar35 + -0x10) == local_664)) &&
                             (*(int *)((long)local_678 + lVar35 + -0x18) == local_66c))
                          goto LAB_10001a71;
                          if (((((*(char *)((long)local_678 + lVar35 + -8) == '\x01') &&
                                (*(int *)((long)local_678 + lVar35 + -0x10) == 0)) &&
                               ((*(char *)((long)local_678 + lVar35 + -7) == '\0' &&
                                ((*(char *)((long)local_678 + lVar35 + -6) == '\0' &&
                                 (local_65c == '\x01')))))) &&
                              (*(int *)((long)local_678 + lVar35 + -0x14) == local_668)) &&
                             (*(int *)((long)local_678 + lVar35 + -0xc) == local_660)) {
                            iVar6 = strcmp((char *)((long)local_678 + lVar35),local_654)
                            ;
                            if (iVar6 == 0) {
                              *(int *)((long)puVar19 + lVar35 + -0x10) = local_664;
                              goto LAB_10001a71;
                            }
                            uVar7 = local_564;
                          }
                        }
                        uVar34 = uVar34 + 1;
                        lVar35 = lVar35 + 0x10c;
                      } while (uVar34 < uVar7);
                    }
                    if (uVar7 < local_560) {
                      local_564 = uVar7;
LAB_100019a5:
                      uVar34 = (ulong)local_564;
                      local_564 = local_564 + 1;
                      memcpy(local_678 + uVar34 * 0x43,&local_670,0x10c);
                    }
                    else {
                      uVar7 = local_560 * 2;
                      if (local_560 == 0) {
                        uVar7 = 0x80;
                      }
                      if ((((uVar7 < 0x10001 && local_560 <= uVar7) &&
                           (iVar6 = Ram0000000000280800, iVar6 == 0x50414d57)) &&
                          (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
                         ((uVar8 = Ram0000000000280808, 0xb < uVar8 &&
                          (uVar8 = Ram0000000000280808, 0x57 < uVar8)))) {
                        uVar8 = UINT_00280854;
                        if (((code *)(ulong)uVar8 != (code *)0x0) &&
                           (puVar19 = (*(code *)(ulong)uVar8)(local_678,(ulong)(uVar7 * 0x10c)),
                           puVar19 != (uint *)0x0)) {
                          local_678 = puVar19;
                          local_560 = uVar7;
                          goto LAB_100019a5;
                        }
                      }
                      snprintf(local_3ea8,0x80,str_1000f482);
                    }
                  }
                }
                goto LAB_10001a71;
              }
              bVar26 = 0;
              ppcVar2 = (char **)CONCAT71(extraout_var,cVar4);
              goto LAB_10001ac6;
            }
          }
        }
LAB_10003a03:
        if ((((local_3ede == '\x01') && (iVar6 = Ram0000000000280800, iVar6 == 0x50414d57)) &&
            ((iVar6 = Ram0000000000280804, iVar6 != 0 &&
             ((uVar7 = Ram0000000000280808, 0xb < uVar7 &&
              (uVar7 = Ram0000000000280808, 0x24f < uVar7)))))) &&
           ((code *)(ulong)_DAT_00280a4c != (code *)0x0)) {
          (*(code *)(ulong)_DAT_00280a4c)();
        }
        if (local_3ed8 != 0) {
          do {
            if (local_3ed4 != 0) break;
            recovered_10004f70((long)&local_4318);
            iVar6 = Ram0000000000280800;
            if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
                (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
               (uVar7 = Ram0000000000280808, 0x9f < uVar7)) {
              uVar7 = UINT_0028089c;
              if ((code *)(ulong)uVar7 != (code *)0x0) {
                (*(code *)(ulong)uVar7)();
              }
            }
          } while (local_3ed8 != 0);
        }
        terror_ui_scrollbar_release(local_3fc0);
        if (local_4318 != 0) {
          terror_ui_window_close(&local_4318);
        }
        if (((local_3f88 != (void *)0x0) && (iVar6 = Ram0000000000280800, iVar6 == 0x50414d57)) &&
           ((iVar6 = Ram0000000000280804, iVar6 != 0 &&
            ((uVar7 = Ram0000000000280808, 0xb < uVar7 &&
             (uVar7 = Ram0000000000280808, 0x53 < uVar7)))))) {
          uVar7 = UINT_00280850;
          if ((code *)(ulong)uVar7 != (code *)0x0) {
            (*(code *)(ulong)uVar7)(local_3f88);
          }
        }
        iVar6 = Ram0000000000280800;
        if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
            (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
           (uVar7 = Ram0000000000280808, 0x53 < uVar7)) {
          uVar7 = UINT_00280850;
          if ((code *)(ulong)uVar7 != (code *)0x0) {
            (*(code *)(ulong)uVar7)(local_3f20);
          }
        }
        iVar6 = Ram0000000000280800;
        if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
           ((uVar7 = Ram0000000000280808, 0xb < uVar7 && (uVar7 = Ram0000000000280808, 0x53 < uVar7)
            ))) {
          uVar7 = UINT_00280850;
          if ((code *)(ulong)uVar7 != (code *)0x0) {
            (*(code *)(ulong)uVar7)(local_3f80);
          }
        }
        iVar6 = Ram0000000000280800;
        if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
           ((uVar7 = Ram0000000000280808, 0xb < uVar7 && (uVar7 = Ram0000000000280808, 0x53 < uVar7)
            ))) {
          uVar7 = UINT_00280850;
          if ((code *)(ulong)uVar7 != (code *)0x0) {
            (*(code *)(ulong)uVar7)(local_3f40);
          }
        }
        iVar6 = Ram0000000000280800;
        if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
            (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
           (uVar7 = Ram0000000000280808, 0x53 < uVar7)) {
          uVar7 = UINT_00280850;
          if ((code *)(ulong)uVar7 != (code *)0x0) {
            (*(code *)(ulong)uVar7)(local_3ec8);
          }
        }
        iVar6 = Ram0000000000280800;
        if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
           ((uVar7 = Ram0000000000280808, 0xb < uVar7 && (uVar7 = Ram0000000000280808, 0x53 < uVar7)
            ))) {
          uVar7 = UINT_00280850;
          if ((code *)(ulong)uVar7 != (code *)0x0) {
            (*(code *)(ulong)uVar7)(pcStack_3eb8);
          }
        }
        local_3ec8 = (undefined1 *)0x0;
        local_3f40 = (byte *)0x0;
        uStack_3f38 = 0;
        local_3f30 = 0;
        local_3eb0 = 0;
        local_3ec0 = 0;
        pcStack_3eb8 = (char *)0x0;
        if (local_678 == (uint *)0x0) {
          return 1;
        }
        iVar6 = Ram0000000000280800;
        if (iVar6 != 0x50414d57) {
          return 1;
        }
        iVar6 = Ram0000000000280804;
        if (iVar6 == 0) {
          return 1;
        }
        uVar7 = Ram0000000000280808;
        if (uVar7 < 0xc) {
          return 1;
        }
        uVar7 = Ram0000000000280808;
        if (uVar7 < 0x54) {
          return 1;
        }
        uVar7 = UINT_00280850;
        if ((code *)(ulong)uVar7 == (code *)0x0) {
          return 1;
        }
        (*(code *)(ulong)uVar7)(local_678);
        return 1;
      }
      terror_ui_window_close(&local_4318);
    }
    recovered_10007200((long)&local_4318);
    iVar6 = Ram0000000000280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
       ((uVar7 = Ram0000000000280808, 0xb < uVar7 && (uVar7 = Ram0000000000280808, 0x53 < uVar7))))
    {
      uVar7 = UINT_00280850;
      if ((code *)(ulong)uVar7 != (code *)0x0) {
        (*(code *)(ulong)uVar7)(local_3f88);
      }
    }
    iVar6 = Ram0000000000280800;
    if ((((iVar6 != 0x50414d57) || (iVar6 = Ram0000000000280804, iVar6 == 0)) ||
        (uVar7 = Ram0000000000280808, uVar7 < 0xc)) ||
       ((uVar7 = Ram0000000000280808, uVar7 < 0x54 || (uVar7 = UINT_00280850, uVar7 == 0))))
    goto LAB_10000fdc;
    pcVar16 = (code *)(ulong)uVar7;
  }
  (*pcVar16)(local_3f80);
LAB_10000fdc:
  local_3f88 = (void *)0x0;
  iVar6 = Ram0000000000280800;
  if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
     ((uVar7 = Ram0000000000280808, 0xb < uVar7 && (uVar7 = Ram0000000000280808, 0x2b < uVar7)))) {
    uVar7 = UINT_00280828;
    if ((code *)(ulong)uVar7 != (code *)0x0) {
      (*(code *)(ulong)uVar7)(str_1000f140);
    }
  }
  return 0;
LAB_10001690:
  if (bVar37) {
    recovered_10007480((long)&local_4318,(ulong)pcVar28,(long)pcVar14 - (long)pcVar28,'\x01');
  }
LAB_100016a7:
  iVar6 = Ram0000000000280800;
  if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
     ((uVar7 = Ram0000000000280808, 0xb < uVar7 &&
      ((uVar7 = Ram0000000000280808, 0x53 < uVar7 && (uVar7 = UINT_00280850, uVar7 != 0)))))) {
    (*(code *)(ulong)uVar7)(pcVar18);
  }
LAB_10001a71:
  *pcStack_3eb8 = '\0';
  *local_3ec8 = 0;
  local_3ecc = 0;
  local_3ed4 = 0;
  local_3ed8 = 0;
  bVar26 = 1;
  ppcVar2 = local_48;
  if ((int)(uint)local_38 <= (int)local_54) {
    local_3eec = recovered_10007370((long)&local_4318);
    ppcVar2 = local_48;
  }
LAB_10001ac6:
  uVar30 = (undefined4)
           CONCAT71((int7)(((ulong)ppcVar2 & 0xffffffff) >> 8),
                    (byte)((ulong)ppcVar2 & 0xffffffff) | bVar26 | bVar3);
  if (DAT_10012108 == 0) {
    local_338 = 0;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_324 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    local_318 = 0;
    iVar6 = Ram0000000000280800;
    if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
       ((uVar7 = Ram0000000000280808, 0xb < uVar7 &&
        (((uVar7 = Ram0000000000280808, 0x207 < uVar7 &&
          ((code *)(ulong)_DAT_00280a04 != (code *)0x0)) &&
         (iVar6 = (*(code *)(ulong)_DAT_00280a04)(str_1000f160), iVar6 != 0)))))) {
      if ((local_338 & 0xfffffffb) != 1) {
        if ((byte *)CONCAT44(uStack_324,uStack_328) != (byte *)0x0 && local_338 == 3) {
          bVar3 = *(byte *)CONCAT44(uStack_324,uStack_328);
          uVar7 = bVar3 - 0x54;
          if (((uVar7 < 0x26) && ((0x2100000021U >> ((ulong)uVar7 & 0x3f) & 1) != 0)) ||
             (bVar3 == 0x31)) {
            uVar9 = 1;
            goto LAB_10001c31;
          }
        }
        goto LAB_10001c2e;
      }
      uVar9 = (int)CONCAT71((uint7)(uint3)(local_338 >> 8),1);
      if (uStack_334 == 0) goto LAB_10001c2e;
    }
    else {
LAB_10001c2e:
      uVar9 = uVar30;
    }
LAB_10001c31:
    local_48 = (char **)CONCAT44(PF_PART4(local_48, 4),uVar9);
    if (DAT_10012108 != 0) goto LAB_10001c44;
  }
  else {
    local_48 = (char **)CONCAT44(PF_PART4(local_48, 4),uVar30);
LAB_10001c44:
    if (local_3ed8 == 0) {
      memset(&local_b8c,0,0x168);
      piVar23 = (int *)&DAT_1001210c;
      if (local_4e0 != 0) {
        piVar23 = local_4dc;
      }
      local_a18 = CONCAT44(local_3d08,*piVar23);
      local_a10 = local_4e8;
      local_a04 = local_a08;
      local_a0c = local_3ee8;
      local_9fa = true;
      if ((local_9fc == '\0') && (*piVar23 != 0)) {
        local_9fa = (local_3ee8 * -0x11111111 >> 2 | local_3ee8 * -0x40000000) < 0x4444445;
      }
      local_a1c = 0;
      iVar6 = local_3ee8 - local_a00;
      uVar34 = 0;
      uVar7 = local_a24;
      if ((local_4e0 & local_a24 != 0) == 1) {
        pcVar14 = local_3877;
        uVar34 = 0;
        do {
          if (*(int *)(pcVar14 + -0x15) == 1) {
            iVar33 = strcmp(pcVar14,str_1000f4a2);
            uVar7 = local_a24;
            if (iVar33 == 0) break;
          }
          uVar34 = uVar34 + 1;
          pcVar14 = pcVar14 + 0x168;
        } while (uVar34 < uVar7);
      }
      if ((uint)uVar34 < uVar7) {
        iVar33 = strcmp(local_3877 + (uVar34 & 0xffffffff) * 0x168,str_1000f4a2);
        bVar37 = iVar33 == 0;
        uVar7 = local_a24;
      }
      else {
        bVar37 = false;
      }
      if ((uVar7 <= (uint)uVar34) || (!(-1 < iVar6 || bVar37))) {
        if (iVar6 < 0) goto LAB_10001f18;
        if ((local_9fc == '\0') && (local_340 != 0)) {
          local_3d0d = (local_3ee8 * -0x11111111 >> 2 | local_3ee8 * -0x40000000) < 0x4444445;
          if (local_3d0d) {
            local_33c = 0;
          }
          else {
            if ((local_3ee8 & 3) != 0) goto LAB_10001f18;
            local_33c = 1;
          }
        }
        else {
          local_3d0d = true;
          local_33c = 0;
        }
      }
      else {
        memcpy(&local_b8c,local_388c + (uVar34 & 0xffffffff) * 0x168,0x168);
        local_a18 = CONCAT44(uStack_b80,local_b84);
        local_a10 = local_b7c;
        local_9fa = local_9fa | local_b84 == 0;
        local_3d0d = false;
        local_33c = 0;
      }
      local_9fc = '\0';
      local_3ed4 = 0;
      local_3ed8 = 1;
      pcVar14 = str_1000f170;
      if (DAT_10012108 == 0) {
        pcVar14 = str_1000fc4a;
      }
      iVar6 = Ram0000000000280800;
      if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
          (uVar7 = Ram0000000000280808, 0xb < uVar7)) && (uVar7 = Ram0000000000280808, 0x97 < uVar7)
         ) {
        uVar7 = UINT_00280894;
        if ((code *)(ulong)uVar7 == (code *)0x0) goto LAB_10001ef5;
        local_3ecc = (*(code *)(ulong)uVar7)(recovered_10005160,&local_4318,pcVar14);
        if (local_3ecc != 0) goto LAB_10001f18;
      }
      else {
LAB_10001ef5:
        local_3ecc = 0;
      }
      local_3ed8 = 0;
      local_a00 = local_3ee8 + 0x3c;
    }
  }
LAB_10001f18:
  uVar8 = local_3f54;
  local_54 = local_3f60;
  local_38 = CONCAT44(PF_PART4(local_38, 4),(uint)local_3f5c);
  iVar6 = PF_PART4(local_3f5c, 4);
  local_3fc4 = '\0';
  memset(&local_338,0,0x30);
  uVar10 = terror_ui_window_pointer_state_ex(&local_4318,&local_338);
  uVar11 = uStack_334;
  uVar13 = local_338;
  uVar7 = (uint)local_48;
  if (uVar10 != 0) {
    if (local_3f50 == '\0') {
      local_3f50 = '\x01';
      iVar33 = CONCAT13(cStack_4311,CONCAT12(bStack_4312,CONCAT11(bStack_4313,local_4314)));
      uVar34 = CONCAT44(-(uint)(uStack_4310 == uRam000000001000f064),
                        -(uint)(iVar33 == _DAT_1000f060));
      local_3f5c = uVar34 & (ulong)DAT_1000f040 |
                   ~uVar34 & CONCAT44((int)uStack_4310 / 2,iVar33 / 2);
    }
    uVar34 = CONCAT44(uStack_320,uStack_324);
    bVar37 = false;
    if ((local_338 & 2) != 0) {
      local_78 = uStack_324;
      uStack_74 = uStack_320;
      uStack_70 = 0;
      auVar39 = recovered_10007d20((long)&local_4318);
      uVar34 = CONCAT44(uStack_74,local_78);
      bVar37 = false;
      if ((local_78 - 10 < 0xc) && (PF_PART4(auVar39, 4) <= (int)uStack_74)) {
        bVar37 = (int)uStack_74 <
                 (int)(((PF_PART8(auVar39, 0) & 0xffffffff00000000) + PF_PART8(auVar39, 8) & 0xffffffff00000000) -
                       0xdfffffff6 >> 0x20) + 0xe;
      }
    }
    local_3fc4 = bVar37;
    local_3f54 = 0;
    if ((uVar13 & 4) != 0) {
      iVar33 = CONCAT13(cStack_4311,CONCAT12(bStack_4312,CONCAT11(bStack_4313,local_4314)));
      PF_PART4(auVar38, 0) = -(uint)(iVar33 == _DAT_1000f060);
      PF_PART4(auVar38, 4) = -(uint)(uStack_4310 == uRam000000001000f064);
      PF_PART4(auVar38, 8) = -(uint)(iRam000000001000f068 == 0);
      PF_PART4(auVar38, 12) = -(uint)(iRam000000001000f06c == 0);
      PF_PART4(auVar40, 0) = iVar33 + _DAT_1000f070;
      PF_PART4(auVar40, 4) = uStack_4310 + iRam000000001000f074;
      PF_PART4(auVar40, 8) = uRam000000001000f078;
      PF_PART4(auVar40, 12) = uRam000000001000f07c;
      auVar39 = auVar38 & _DAT_1000f050 | ~auVar38 & auVar40;
      uVar36 = CONCAT44(-(uint)((int)(uVar34 >> 0x20) < PF_PART4(auVar39, 4)),
                        -(uint)((int)uVar34 < PF_PART4(auVar39, 0)));
      local_3f5c = ~CONCAT44(-(uint)((long)uVar34 < 0),-(uint)((int)uVar34 < 0)) &
                   (~uVar36 & PF_PART8(auVar39, 0) | uVar34 & uVar36);
      local_3f54 = uVar11;
    }
    uVar7 = (uint)local_48;
  }
  uVar34 = (ulong)uVar7;
  local_54 = local_54 & 6;
  if (DAT_10012108 == 0) {
    if (local_54 == 2) {
      local_338 = 0;
      uStack_334 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_324 = 0;
      uStack_320 = 0;
      uStack_31c = 0;
      local_318 = 0;
      iVar6 = Ram0000000000280800;
      if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000280804, iVar6 != 0)) &&
         ((uVar8 = Ram0000000000280808, 0xb < uVar8 &&
          (((uVar8 = Ram0000000000280808, 0x207 < uVar8 &&
            ((code *)(ulong)_DAT_00280a04 != (code *)0x0)) &&
           (iVar6 = (*(code *)(ulong)_DAT_00280a04)(str_1000f160), iVar6 != 0)))))) {
        if ((local_338 & 0xfffffffb) == 1) {
          if (uStack_334 != 0) goto LAB_100026c8;
        }
        else if ((byte *)CONCAT44(uStack_324,uStack_328) != (byte *)0x0 && local_338 == 3) {
          bVar3 = *(byte *)CONCAT44(uStack_324,uStack_328);
          uVar8 = bVar3 - 0x54;
          if (((uVar8 < 0x26) && ((0x2100000021U >> ((ulong)uVar8 & 0x3f) & 1) != 0)) ||
             (bVar3 == 0x31)) goto LAB_100026c8;
        }
      }
      goto LAB_10002201;
    }
  }
  else {
    uVar7 = CONCAT31((int3)(uVar7 >> 8),
                     (byte)uVar7 |
                     (uVar8 != local_3f54 ||
                     (iVar6 != PF_PART4(local_3f5c, 4) || (uint)local_38 != (uint)local_3f5c)));
    uVar34 = (ulong)uVar7;
    if (local_54 == 2) {
LAB_10002201:
      local_48 = (char **)CONCAT44(PF_PART4(local_48, 4),uVar7);
      uVar34 = 0;
      iVar6 = 0;
      do {
        iVar33 = Ram0000000000280800;
        if (((iVar33 != 0x50414d57) || (iVar33 = Ram0000000000280804, iVar33 == 0)) ||
           ((uVar7 = Ram0000000000280808, uVar7 < 0xc || (uVar7 = Ram0000000000280808, uVar7 < 0x30)
            ))) {
LAB_100026b6:
          uVar36 = uVar34;
          break;
        }
        uVar7 = UINT_0028082c;
        if (((code *)(ulong)uVar7 == (code *)0x0) || (uVar7 = (*(code *)(ulong)uVar7)(), uVar7 == 0)
           ) goto LAB_100026b6;
        uVar8 = uVar7 >> 8 & 0xff;
        if ((uVar7 & 0x800000ff) == 0x80000000 && uVar8 == 0) {
LAB_1000227a:
          uVar36 = uVar34;
        }
        else {
          uVar13 = uVar7 & 0xff;
          uVar36 = (ulong)DAT_10012108;
          if ((uVar7 & 0x40000) == 0) {
            if (DAT_10012108 != 0) {
              bVar37 = recovered_1000a470((long)&local_4318,uVar13,uVar8);
              uVar36 = CONCAT71((int7)(uVar36 >> 8),1);
              if (bVar37) goto LAB_1000227d;
            }
            if ((uVar7 & 0x20000) == 0) {
              uVar11 = uVar13 - 0x20;
              uVar36 = (ulong)uVar11;
              bVar3 = (byte)uVar7;
              if (uVar11 < 0x5f) {
                if (uStack_3f38 < 0xfffffffffffffffe) {
                  uVar36 = uStack_3f38 + 2;
                  if (uVar36 <= local_3f30 && local_3f40 != (byte *)0x0) {
LAB_1000266a:
                    uVar36 = uStack_3f38 + 1;
                    local_3f40[uStack_3f38] = bVar3;
                    local_3f40[uVar36] = 0;
                    uStack_3f38 = uVar36;
                    goto LAB_1000268a;
                  }
                  uVar22 = local_3f30;
                  if (local_3f30 == 0) {
                    uVar22 = 0x40;
                  }
                  while (uVar22 < uVar36) {
                    bVar37 = (long)uVar22 < 0;
                    uVar22 = uVar22 * 2;
                    if (bVar37) {
                      uVar22 = uVar36;
                    }
                  }
                  iVar33 = Ram0000000000280800;
                  if ((((iVar33 == 0x50414d57) && (iVar33 = Ram0000000000280804, iVar33 != 0)) &&
                      (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
                     (uVar7 = Ram0000000000280808, 0x57 < uVar7)) {
                    uVar7 = UINT_00280854;
                    if ((code *)(ulong)uVar7 != (code *)0x0) {
                      pbVar21 = (*(code *)(ulong)uVar7)(local_3f40,uVar22);
                      uVar36 = uVar34;
                      if (pbVar21 == (byte *)0x0) goto LAB_1000227d;
                      if (local_3f40 == (byte *)0x0) {
                        *pbVar21 = 0;
                      }
                      local_3f40 = pbVar21;
                      local_3f30 = uVar22;
                      goto LAB_1000266a;
                    }
                  }
                }
                goto LAB_1000227a;
              }
              if (((uVar8 == 0xe) || (bVar3 == 0x7f)) || (uVar13 == 8)) {
                uVar36 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
                if (uStack_3f38 != 0) {
                  do {
                    uStack_3f38 = uStack_3f38 - 1;
                    if (uStack_3f38 == 0) break;
                  } while (SBORROW1('\0',local_3f40[uStack_3f38] & 0xc0));
                  local_3f40[uStack_3f38] = 0;
                }
              }
              else {
                if (((uVar8 != 0x1c) && (bVar3 != 0xd)) && (uVar13 != 10)) {
                  if ((uVar13 != 0x1b) && (uVar36 = uVar34, uVar8 != 1)) goto LAB_1000227d;
                  local_3edf = '\0';
                  uVar34 = CONCAT71((int7)(uVar34 >> 8),1);
                  goto LAB_100026c8;
                }
                uVar34 = recovered_10003d40((long)&local_4318,local_3f40);
                uVar36 = CONCAT71((int7)(uVar36 >> 8),1);
                if ((char)uVar34 != '\0') {
                  if (local_3f40 != (byte *)0x0) {
                    *local_3f40 = 0;
                  }
                  uStack_3f38 = 0;
                }
              }
            }
            else {
              if ((local_3ede != '\x01') || (local_3ed8 == 0)) goto LAB_1000227a;
              uVar36 = uVar34;
              if (((uVar7 & 0xbf) != 3 && uVar13 != 99) && uVar8 != 0x2e) goto LAB_1000227d;
              iVar33 = Ram0000000000280800;
              if ((((iVar33 == 0x50414d57) && (iVar33 = Ram0000000000280804, iVar33 != 0)) &&
                  (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
                 ((uVar7 = Ram0000000000280808, 0x24f < uVar7 &&
                  ((code *)(ulong)_DAT_00280a4c != (code *)0x0)))) {
                (*(code *)(ulong)_DAT_00280a4c)();
                uVar36 = uVar34;
              }
              recovered_10008540((long)&local_4318,&DAT_1000fc51);
              if (local_3f40 != (byte *)0x0) {
                *local_3f40 = 0;
              }
              uStack_3f38 = 0;
LAB_1000268a:
              uVar36 = CONCAT71((int7)(uVar36 >> 8),1);
            }
          }
          else {
            if (((uVar7 & 0xbf) != 3 && uVar13 != 99) && uVar8 != 0x2e) {
              if (((uVar7 & 0xbf) == 0x16 || uVar13 == 0x76) || uVar8 == 0x2f) {
                if ((DAT_10012108 == 0) || (local_558 == 0)) {
                  uVar20 = recovered_10009160((long)&local_4318);
                  uVar36 = CONCAT71((int7)(uVar36 >> 8),1);
                  if ((char)uVar20 != '\0') goto LAB_1000227d;
                }
                else {
                  iVar33 = Ram0000000000280800;
                  if ((((iVar33 == 0x50414d57) && (iVar33 = Ram0000000000280804, iVar33 != 0)) &&
                      (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
                     (uVar7 = Ram0000000000280808, 0x187 < uVar7)) {
                    uVar7 = UINT_00280984;
                    if (((code *)(ulong)uVar7 != (code *)0x0) &&
                       (uVar7 = (*(code *)(ulong)uVar7)((char *)&local_338,0x42), uVar7 != 0)) {
                      uVar34 = (ulong)uVar7;
                      if (0x41 < uVar7) {
                        uVar34 = 0x42;
                      }
                      uVar22 = 0;
                      do {
                        bVar3 = *(byte *)((long)&local_338 + uVar22);
                        if (bVar3 == 0) break;
                        if (0x1f < bVar3) {
                          recovered_1000a470((long)&local_4318,(uint)bVar3,0);
                        }
                        uVar22 = uVar22 + 1;
                      } while (uVar34 != uVar22);
                      goto LAB_1000268a;
                    }
                  }
                }
              }
              goto LAB_1000227a;
            }
            uVar36 = recovered_10008fe0((long)&local_4318);
            uVar36 = CONCAT71((int7)((uVar36 & 0xffffffff) >> 8),
                              (byte)(uVar36 & 0xffffffff) | (byte)uVar34);
          }
        }
LAB_1000227d:
        iVar6 = iVar6 + 1;
        uVar34 = uVar36 & 0xffffffff;
      } while (iVar6 != 0x18);
      uVar34 = (ulong)CONCAT31((int3)((ulong)local_48 >> 8),(byte)local_48 | (byte)uVar36);
    }
  }
LAB_100026c8:
  uVar7 = local_3f54;
  uVar34 = uVar34 & 0xffffffffffffff01;
  uVar8 = local_3f54 & 1;
  if (uVar8 == 0) {
    local_3f4e = 0;
  }
  else {
    local_48 = (char **)CONCAT44(PF_PART4(local_48, 4),(int)uVar34);
    uVar13 = PF_PART4(local_3f5c, 4);
    if (local_3f4f != '\0') goto LAB_10002a2e;
    uVar11 = (uint)local_3f5c;
    if (DAT_10012108 != 0) {
      memset(&local_338,0,0x2c);
      local_338 = 1;
      uStack_334 = uVar11;
      uStack_330 = uVar13;
      local_32c = 1;
      uStack_328 = 1;
      local_a0 = &local_4318;
      local_90 = local_90 & 0xffffff00;
      local_98 = &local_338;
      recovered_1000aab0((ulong *)&local_a0);
      local_48 = (char **)(CONCAT44(PF_PART4(local_48, 4),
                                    CONCAT31((int3)((ulong)local_48 >> 8),
                                             (byte)local_48 | (byte)local_90)) & 0xffffffffffffff01)
      ;
      if (DAT_10012108 != 0) goto LAB_10002a2e;
    }
    local_38 = CONCAT44(PF_PART4(local_38, 4),uVar7) & 0xffffffff00000001;
    auVar39 = recovered_10007d20((long)&local_4318);
    auVar40 = recovered_1000e590((long)&local_4318);
    local_60 = PF_PART8(auVar40, 0);
    local_78 = PF_PART4(auVar40, 8);
    uStack_74 = PF_PART4(auVar40, 12);
    local_80 = (ulong)local_3eec;
    auVar40 = recovered_10007d20((long)&local_4318);
    uVar34 = (PF_PART8(auVar40, 0) & 0xffffffff00000000) + PF_PART8(auVar40, 8) & 0xffffffff00000000;
    uVar7 = uVar11 - 10;
    uVar10 = (uint)local_80;
    if (((uVar7 < 0xc) && (iVar6 = (int)(uVar34 - 0x1dfffffff6 >> 0x20), iVar6 <= (int)uVar13)) &&
       ((int)uVar13 < iVar6 + 0xe)) {
      uVar8 = uVar10 - 1;
      local_3eec = uVar8;
      uVar7 = recovered_10007370((long)&local_4318);
      if ((int)uVar8 < (int)uVar7) {
        uVar7 = uVar8;
      }
      uVar34 = (ulong)uVar7;
      if ((int)uVar10 < 1) {
        uVar34 = 0;
      }
LAB_100028a3:
      local_3eec = (uint)uVar34;
      uVar8 = (uint)local_38;
      if (local_3eec != uVar10) {
LAB_100028bb:
        local_48 = (char **)CONCAT44(PF_PART4(local_48, 4),(int)CONCAT71((int7)(uVar34 >> 8),1));
      }
    }
    else {
      if (((uVar7 < 0xc) && (iVar6 = (int)(uVar34 - 0xdfffffff6 >> 0x20), iVar6 <= (int)uVar13)) &&
         ((int)uVar13 < iVar6 + 0xe)) {
        uVar8 = uVar10 + 1;
        local_3eec = uVar8;
        uVar7 = recovered_10007370((long)&local_4318);
        if ((int)uVar8 < (int)uVar7) {
          uVar7 = uVar8;
        }
        uVar34 = (ulong)uVar7;
        if ((int)uVar10 < -1) {
          uVar34 = 0;
        }
        goto LAB_100028a3;
      }
      uVar8 = (uint)local_38;
      if (!((int)uVar13 < PF_PART4(auVar39, 4) || 0xb < uVar7)) {
        iVar6 = (int)((PF_PART8(auVar39, 8) & 0xffffffff00000000) - 0x21fffffff4 >> 0x20);
        if (PF_PART4(auVar39, 12) + -0x1e < 0x16) {
          iVar6 = 0x12;
        }
        if (iVar6 + PF_PART4(auVar39, 4) <= (int)uVar13) goto LAB_10002a2e;
        iVar6 = (int)(local_60 >> 0x20);
        if (((int)(local_78 + (int)local_60) <= (int)uVar11 ||
             ((int)uVar13 < iVar6 || (int)uVar11 < (int)local_60)) ||
           ((int)(uStack_74 + iVar6) <= (int)uVar13)) {
          local_78 = uVar13;
          local_60 = PF_PART8(auVar40, 0);
          auVar39 = recovered_1000e590((long)&local_4318);
          uVar7 = recovered_10007370((long)&local_4318);
          iVar6 = (int)((PF_PART8(auVar40, 8) & 0xffffffff00000000) - 0x21fffffff4 >> 0x20);
          if (PF_PART4(auVar40, 12) + -0x1e < 0x16) {
            iVar6 = 0x12;
          }
          local_3eec = 0;
          if ((int)uVar7 < 1) {
LAB_100039ac:
            uVar8 = (uint)local_38;
          }
          else {
            uVar13 = iVar6 - PF_PART4(auVar39, 12);
            uVar8 = (uint)local_38;
            if (0 < (int)uVar13) {
              uVar34 = (long)(int)(local_78 - ((PF_PART4(auVar39, 12) >> 1) + (int)(local_60 >> 0x20))) *
                       (ulong)uVar7;
              if (uVar34 >> 0x20 == 0) {
                uVar34 = (uVar34 & 0xffffffff) / (ulong)uVar13;
              }
              else {
                uVar34 = (long)uVar34 / (long)(ulong)uVar13;
              }
              if ((long)uVar34 <= (long)(ulong)uVar7) {
                uVar7 = (uint)uVar34;
              }
              if ((long)uVar34 < 0) {
                uVar7 = 0;
              }
              local_3eec = uVar7;
              local_3eec = recovered_10007370((long)&local_4318);
              if ((int)uVar7 < (int)local_3eec) {
                local_3eec = uVar7;
              }
              if ((int)uVar7 < 0) {
                local_3eec = 0;
              }
              goto LAB_100039ac;
            }
          }
          uVar13 = local_78;
        }
        auVar39 = recovered_1000e590((long)&local_4318);
        local_3f4e = 1;
        local_3f4c = uVar13 - PF_PART4(auVar39, 4);
        uVar34 = local_80;
        if (local_3eec == (uint)local_80) goto LAB_10002a2e;
        goto LAB_100028bb;
      }
    }
LAB_10002a2e:
    if (local_3f4e == 1) {
      local_38 = CONCAT44(PF_PART4(local_38, 4),uVar8);
      local_78 = uVar13;
      auVar39 = recovered_10007d20((long)&local_4318);
      auVar40 = recovered_1000e590((long)&local_4318);
      uVar8 = recovered_10007370((long)&local_4318);
      ppcVar2 = local_48;
      uVar7 = local_3eec;
      iVar6 = (int)((PF_PART8(auVar39, 8) & 0xffffffff00000000) - 0x21fffffff4 >> 0x20);
      if (PF_PART4(auVar39, 12) + -0x1e < 0x16) {
        iVar6 = 0x12;
      }
      if (local_3f4e == 1) {
        if ((int)uVar8 < 1) {
          uVar34 = (ulong)local_48 & 0xffffffff;
        }
        else {
          uVar13 = iVar6 - PF_PART4(auVar40, 12);
          uVar34 = (ulong)local_48 & 0xffffffff;
          if (0 < (int)uVar13) {
            uVar34 = (long)(int)(local_78 - (PF_PART4(auVar39, 4) + local_3f4c)) * (ulong)uVar8;
            if (uVar34 >> 0x20 == 0) {
              uVar34 = (uVar34 & 0xffffffff) / (ulong)uVar13;
            }
            else {
              uVar34 = (long)uVar34 / (long)(ulong)uVar13;
            }
            if ((long)uVar34 <= (long)(ulong)uVar8) {
              uVar8 = (uint)uVar34;
            }
            if ((long)uVar34 < 0) {
              uVar8 = 0;
            }
            local_3eec = uVar8;
            local_3eec = recovered_10007370((long)&local_4318);
            if ((int)uVar8 < (int)local_3eec) {
              local_3eec = uVar8;
            }
            if ((int)uVar8 < 0) {
              local_3eec = 0;
            }
            uVar34 = (ulong)ppcVar2 & 0xff;
            if (local_3eec != uVar7) {
              uVar34 = 1;
            }
          }
        }
      }
      else {
        uVar34 = (ulong)local_48 & 0xffffffff;
      }
      uVar8 = (uint)local_38;
    }
    else {
      uVar34 = (ulong)local_48 & 0xffffffff;
    }
  }
  uVar13 = local_3eec;
  local_3f4f = (char)uVar8;
  local_3eec = recovered_10007370((long)&local_4318);
  uVar8 = local_3fc8;
  if ((int)uVar13 < (int)local_3eec) {
    local_3eec = uVar13;
  }
  if ((int)uVar13 < 0) {
    local_3eec = 0;
  }
  uVar7 = local_3ee8 >> 0xc & 1;
  iVar6 = 1;
  if (local_54 != 2) {
    uVar7 = 1;
  }
  uVar34 = uVar34 & 0xff;
  if ((uint)local_68 != uVar7 || local_3eec != uVar13) {
    uVar34 = 1;
  }
  if ((local_3fc4 == '\0') && ((local_3f4e & 1) == 0)) {
    iVar6 = -1;
    if (local_3fc8 != 0) goto LAB_10002be8;
    uVar13 = 0;
  }
  else {
    uVar13 = local_3fc8;
    if (local_3fc8 < 0x20) {
LAB_10002be8:
      local_3fc8 = iVar6 + local_3fc8;
      uVar13 = local_3fc8;
    }
  }
  if ((local_50 & 1) == 0) {
    if (0x1f < uVar13) {
      uVar13 = 0x20;
    }
    if (0x1f < uVar8) {
      uVar8 = 0x20;
    }
    if (((char)uVar34 != '\0') ||
       (0x3ff < (((uVar8 * -0x40 + 0xc00) * uVar8 * 0x20 * uVar8 * 0x20 + 0x80000 >> 0x14) * 10 +
                 0x200 ^ ((uVar13 * -0x40 + 0xc00) * uVar13 * 0x20 * uVar13 * 0x20 + 0x80000 >> 0x14
                         ) * 10 + 0x200))) {
      if (((char)uVar34 != '\0') ||
         (uVar5 = terror_ui_scrollbar_restore(local_3fc0,&local_4318), uVar5 == '\0')) goto LAB_10002bfc;
      local_3fc3 = 1;
      recovered_10006910((long)&local_4318);
      local_3fc3 = 0;
      pf_app_terror_ui_window_present_rect(&local_4318,local_3fb0,local_3fa8);
      local_50 = local_50 & 0xffffffff00000000;
    }
  }
  else {
LAB_10002bfc:
    local_a8 = uVar7;
    local_a4 = (uint)uVar34;
    if (DAT_10012108 == 0) {
      uVar7 = CONCAT13(cStack_4311,CONCAT12(bStack_4312,CONCAT11(bStack_4313,local_4314)));
      if (uVar7 == 0) {
        uVar7 = 0x2f8;
      }
      uVar8 = uStack_4310;
      if (uStack_4310 == 0) {
        uVar8 = 400;
      }
      uVar11 = terror_ui_colour(0);
      uVar13 = CONCAT13(cStack_4311,CONCAT12(bStack_4312,CONCAT11(bStack_4313,local_4314)));
      if (uVar13 == 0) {
        uVar13 = 0x2f8;
      }
      uVar10 = uStack_4310;
      if (uStack_4310 == 0) {
        uVar10 = 400;
      }
      uVar24 = (int)uVar10 >> 0x1f & uVar10;
      uVar27 = uVar13;
      if ((int)uVar7 < (int)uVar13) {
        uVar27 = uVar7;
      }
      if ((int)uVar7 < 0) {
        uVar27 = 0;
      }
      if ((int)uVar8 < (int)uVar10) {
        uVar10 = uVar8;
      }
      if ((int)uVar8 < 0) {
        uVar10 = 0;
      }
      if ((int)uVar24 < (int)uVar10) {
        uVar13 = (int)uVar13 >> 0x1f & uVar13;
        do {
          if ((int)uVar13 < (int)uVar27) {
            uVar7 = uVar13;
            do {
              if (-1 < (int)(uVar7 | uVar24) && local_3f90 != (void *)0x0) {
                iVar6 = CONCAT13(cStack_4311,CONCAT12(bStack_4312,CONCAT11(bStack_4313,local_4314)))
                ;
                iVar33 = iVar6;
                if (iVar6 == 0) {
                  iVar33 = 0x2f8;
                }
                if ((int)uVar7 < iVar33) {
                  uVar8 = uStack_4310;
                  if (uStack_4310 == 0) {
                    uVar8 = 400;
                  }
                  if ((int)uVar24 < (int)uVar8) {
                    uVar34 = (ulong)(uint)(iVar6 * 4);
                    if (iVar6 == 0) {
                      uVar34 = 0xbe0;
                    }
                    if (local_430c != 0) {
                      uVar34 = (ulong)local_430c;
                    }
                    lVar35 = uVar34 * uVar24 + (ulong)uVar7 * 4;
                    *(char *)((long)local_3f90 + lVar35) = (char)(uVar11 >> 0x10);
                    *(char *)((long)local_3f90 + lVar35 + 1) = (char)(uVar11 >> 8);
                    *(char *)((long)local_3f90 + lVar35 + 2) = (char)uVar11;
                    *(undefined1 *)((long)local_3f90 + lVar35 + 3) = 0xd9;
                  }
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar27 != uVar7);
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar10);
      }
      auVar39 = recovered_10007d20((long)&local_4318);
      uVar36 = PF_PART8(auVar39, 8);
      uVar34 = PF_PART8(auVar39, 0);
      local_78 = terror_ui_colour(1);
      auVar40 = recovered_10007d20((long)&local_4318);
      iVar6 = (int)local_3f48;
      if ((int)local_3f48 < 1) {
        iVar6 = 6;
      }
      iVar6 = (PF_PART4(auVar40, 8) + -8) / iVar6;
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      local_50 = CONCAT44(PF_PART4(local_50, 4),iVar6);
      iVar6 = PF_PART4(local_3f48, 4) + 2;
      if ((int)PF_PART4(local_3f48, 4) < 1) {
        iVar6 = 0xc;
      }
      iVar6 = PF_PART4(auVar40, 12) / iVar6;
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      local_38 = CONCAT44(PF_PART4(local_38, 4),iVar6);
      local_338 = 0;
      uVar22 = recovered_10009570((long)&local_4318,(long)(int)local_3eec,&local_338);
      local_58 = (uint)uVar22;
      uVar7 = terror_ui_colour(0);
      recovered_1000e980((long)&local_4318,uVar34,uVar36,
                         (uVar7 & 0xff0000) >> 0x10 | uVar7 << 0x10 | uVar7 & 0xff00);
      uVar7 = terror_ui_colour(3);
      uVar7 = (uVar7 & 0xff0000) >> 0x10 | uVar7 << 0x10 | uVar7 & 0xff00;
      local_48 = (char **)(uVar34 & 0xffffffff);
      lVar35 = (uVar36 & 0xffffffff) + 0x100000000;
      local_68 = uVar36;
      recovered_1000e790((long)&local_4318,uVar34,lVar35,uVar7);
      recovered_1000e790((long)&local_4318,
                         ((uVar36 & 0xffffffff00000000) + uVar34 & 0xffffffff00000000) - 0x100000000
                         | (ulong)local_48,lVar35,uVar7);
      uVar36 = uVar36 & 0xffffffff00000000 | 1;
      recovered_1000e790((long)&local_4318,uVar34,uVar36,uVar7);
      recovered_1000e790((long)&local_4318,
                         (ulong)(PF_PART4(auVar39, 0) + -1 + (uint)local_68) | uVar34 & 0xffffffff00000000,
                         uVar36,uVar7);
      if ((-1 < (int)local_58) && ((int)local_58 < local_3f24)) {
        local_b0 = (local_78 & 0xff0000) >> 0x10 | local_78 & 0xff00 | local_78 << 0x10;
        uVar34 = local_50 & 0xffffffff;
        local_80 = CONCAT44(PF_PART4(local_80, 4),PF_PART4(auVar39, 4) + 2);
        local_68 = (ulong)(uint)((int)(local_68 >> 0x20) + PF_PART4(auVar39, 4));
        local_ac = PF_PART4(auVar39, 0) + 4;
        local_b8 = (ulong)local_58;
        iVar33 = 0;
        local_78 = (uint)local_50;
        uStack_74 = 0;
        iVar6 = local_3f24;
        local_88 = local_b8;
LAB_100030c2:
        pcVar14 = &DAT_1000f1f9;
        if (local_3f88 != (void *)0x0) {
          pcVar14 = local_3f80 + *(long *)((long)local_3f88 + local_88 * 0x10);
        }
        uVar36 = *(ulong *)((long)local_3f88 + local_88 * 0x10 + 8);
        if ((local_3f0c == (uint)local_50) && ((int)local_88 < local_3f10)) {
          uVar22 = *(long *)((long)local_3f20 + local_88 * 8 + 8) -
                   *(long *)((long)local_3f20 + local_88 * 8);
          if (0x7ffffffe < uVar22) {
            uVar22 = 0x7fffffff;
          }
          iVar12 = (int)uVar22;
        }
        else {
          iVar12 = recovered_10007b90((long)&local_4318,pcVar14,uVar36);
          uVar34 = CONCAT44(uStack_74,local_78);
        }
        uVar7 = local_338 - iVar12;
        if ((int)local_338 < iVar12) {
          if ((((local_88 == local_b8) && (local_3f08 == local_58)) && (local_3f04 == local_338)) &&
             (local_3f00 == (uint)local_50)) {
            uVar22 = local_3ef8;
          }
          else {
            if ((int)local_338 < 1) {
              uVar22 = 0;
            }
            else {
              uVar22 = 0;
              if (uVar36 != 0) {
                iVar6 = 0;
                uVar22 = 0;
                do {
                  if (pcVar14 != (char *)0x0) {
                    uVar25 = uVar36 - uVar22;
                    if (uVar34 < uVar25) {
                      iVar31 = -1;
                      uVar29 = 0;
                      do {
                        cVar4 = pcVar14[uVar29 + uVar22];
                        if (cVar4 == '\0') break;
                        if (cVar4 == '\t') {
                          iVar31 = (int)uVar29;
                        }
                        if (cVar4 == ' ') {
                          iVar31 = (int)uVar29;
                        }
                        uVar29 = uVar29 + 1;
                      } while (uVar34 != uVar29);
                      uVar29 = local_50 & 0xffffffff;
                      if (iVar31 < 1) {
                        do {
                          iVar31 = (int)uVar29;
                          if (!SBORROW1('\0',pcVar14[uVar29 + uVar22] & 0xc0)) goto LAB_10003247;
                          uVar29 = (ulong)(iVar31 - 1);
                        } while (1 < iVar31);
                        iVar31 = (int)uVar36 - (int)uVar22;
                        uVar29 = 1;
                        do {
                          if (!SBORROW1('\0',pcVar14[uVar29 + uVar22] & 0xc0)) {
                            iVar31 = (int)uVar29;
                            break;
                          }
                          uVar29 = uVar29 + 1;
                        } while (uVar25 != uVar29);
                      }
                    }
                    else {
                      iVar31 = (int)uVar25;
                    }
LAB_10003247:
                    uVar22 = uVar22 + (long)iVar31;
                    if (uVar22 < uVar36) {
                      while ((pcVar14[uVar22] == ' ' || (pcVar14[uVar22] == '\t'))) {
                        uVar22 = uVar22 + 1;
                        if (uVar36 <= uVar22) {
                          uVar22 = uVar36;
                          goto LAB_10003290;
                        }
                      }
                    }
                  }
                  iVar6 = iVar6 + 1;
                } while ((iVar6 < (int)local_338) && (uVar22 < uVar36));
              }
            }
LAB_10003290:
            if (local_88 == local_b8) {
              local_3f08 = local_58;
              local_3f04 = local_338;
              local_3f00 = (uint)local_50;
              local_3ef8 = uVar22;
            }
          }
          uVar7 = local_338;
          local_60 = uVar36;
LAB_100032c1:
          uVar8 = 0;
          if ((pcVar14 != (char *)0x0) &&
             (uVar36 = local_60 - uVar22, uVar22 <= local_60 && uVar36 != 0)) {
            if (uVar34 < uVar36) {
              uVar8 = 0xffffffff;
              uVar25 = 0;
              do {
                cVar4 = pcVar14[uVar25 + uVar22];
                if (cVar4 == '\0') break;
                if (cVar4 == '\t') {
                  uVar8 = (uint)uVar25;
                }
                if (cVar4 == ' ') {
                  uVar8 = (uint)uVar25;
                }
                uVar25 = uVar25 + 1;
              } while (uVar34 != uVar25);
              uVar13 = (uint)local_50;
              if ((int)uVar8 < 1) {
                do {
                  uVar34 = (ulong)uVar13;
                  if (!SBORROW1('\0',pcVar14[uVar34 + uVar22] & 0xc0)) goto LAB_10003360;
                  bVar37 = 1 < (int)uVar13;
                  uVar13 = uVar13 - 1;
                } while (bVar37);
                uVar8 = (int)local_60 - (int)uVar22;
                uVar34 = 1;
                do {
                  if (!SBORROW1('\0',pcVar14[uVar34 + uVar22] & 0xc0)) goto LAB_10003360;
                  uVar34 = uVar34 + 1;
                } while (uVar36 != uVar34);
              }
            }
            else {
              uVar8 = (uint)uVar36;
            }
          }
          goto LAB_10003363;
        }
        goto LAB_1000345a;
      }
LAB_10003476:
      recovered_10006910((long)&local_4318);
      auVar39 = recovered_10007d20((long)&local_4318);
      uStack_74 = PF_PART4(auVar39, 12) + PF_PART4(auVar39, 4) + 8;
      local_50 = (ulong)uStack_74;
      iVar6 = CONCAT13(cStack_4311,CONCAT12(bStack_4312,CONCAT11(bStack_4313,local_4314)));
      uVar7 = iVar6 - 0x14;
      if (iVar6 == 0) {
        uVar7 = 0x2e4;
      }
      uVar8 = uStack_4310;
      if (uStack_4310 == 0) {
        uVar8 = 400;
      }
      uVar13 = (uVar8 - uStack_74) - 10;
      local_68 = (ulong)uVar13;
      uVar11 = PF_PART4(auVar39, 8) - 0x60;
      if (DAT_10012108 == 0) {
        uVar11 = uVar7;
      }
      uVar7 = (int)local_3f48 + 8;
      if ((int)local_3f48 < 1) {
        uVar7 = 0xe;
      }
      if ((int)uVar7 < (int)uVar11) {
        uVar7 = uVar11;
      }
      if ((int)PF_PART4(local_3f48, 4) < 1) {
        uVar11 = 10;
        if ((int)(uVar8 - uStack_74) < 0x1c) goto LAB_10003511;
      }
      else {
        uVar11 = PF_PART4(local_3f48, 4);
        if ((int)uVar13 < (int)(PF_PART4(local_3f48, 4) + 8)) {
LAB_10003511:
          local_68 = (ulong)(uVar11 + 8);
        }
      }
      local_48 = (char **)(ulong)PF_PART4(auVar39, 0);
      if (DAT_10012108 == 0) {
        local_48 = (char **)0xa;
      }
      local_78 = 0;
      uVar34 = (local_50 << 0x20) + (long)local_48;
      lVar35 = local_68 << 0x20;
      local_38 = (ulong)PF_PART4(local_3f48, 4);
      if ((int)PF_PART4(local_3f48, 4) < 1) {
        local_38 = 10;
      }
      local_80 = CONCAT44(PF_PART4(local_80, 4),uVar7);
      uVar8 = terror_ui_colour(2);
      recovered_1000e980((long)&local_4318,uVar34,lVar35 + (ulong)uVar7,
                         (uVar8 & 0xff0000) >> 0x10 | uVar8 << 0x10 | uVar8 & 0xff00);
      uVar8 = terror_ui_colour(3);
      uVar8 = (uVar8 & 0xff0000) >> 0x10 | uVar8 << 0x10 | uVar8 & 0xff00;
      lVar32 = (ulong)uVar7 + 0x100000000;
      local_60 = uVar34;
      recovered_1000e790((long)&local_4318,uVar34,lVar32,uVar8);
      ppcVar2 = local_48;
      recovered_1000e790((long)&local_4318,
                         (lVar35 + uVar34 & 0xffffffff00000000) - 0x100000000 | (ulong)local_48,
                         lVar32,uVar8);
      recovered_1000e790((long)&local_4318,local_60,lVar35 + 1,uVar8);
      iVar6 = (int)local_80;
      recovered_1000e790((long)&local_4318,
                         (ulong)(uint)((int)ppcVar2 + -1 + (int)local_80) +
                         CONCAT44(uStack_74,local_78),lVar35 + 1,uVar8);
      iVar33 = (int)local_3f48;
      if ((int)local_3f48 < 1) {
        iVar33 = 6;
      }
      iVar33 = (iVar6 + -10) / iVar33;
      uVar34 = (long)iVar33 - 0x10;
      if (0xff < uVar34) {
        uVar34 = 0x100;
      }
      if (iVar33 < 0x11) {
        uVar34 = 1;
      }
      uVar36 = 0;
      if (uVar34 <= uStack_3f38) {
        uVar36 = uStack_3f38 - uVar34;
      }
      if (uVar36 < uStack_3f38) {
        if (uStack_3f38 <= uVar34) {
          uVar34 = uStack_3f38;
        }
        do {
          if (!SBORROW1('\0',local_3f40[uVar36] & 0xc0)) goto LAB_100036e6;
          uVar36 = uVar36 + 1;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
        uVar36 = uStack_3f38;
      }
LAB_100036e6:
      iVar6 = ((int)local_68 - (int)local_38) / 2 + (int)local_50;
      recovered_100081a0((long)&local_338,0x180,(undefined8 *)(local_3f40 + uVar36));
      uVar8 = (int)local_48 + 4;
      uVar7 = terror_ui_colour(1);
      recovered_1000eb70((long)&local_4318,uVar8,iVar6,(long)&local_338,iVar33,
                         (uVar7 & 0xff0000) >> 0x10 | uVar7 << 0x10 | uVar7 & 0xff00);
      if (((local_3f60 & 6) == 2) && ((local_3ee8 & 0x1000) == 0)) {
        uVar34 = strlen((char *)&local_338);
        if (iVar33 < 1) {
          iVar33 = 0;
        }
        iVar12 = (int)uVar34;
        if (iVar12 < iVar33) {
          iVar33 = iVar12;
        }
        if (iVar12 < 0) {
          iVar33 = 0;
        }
        iVar12 = 6;
        if (0 < (int)local_3f48) {
          iVar12 = (int)local_3f48;
        }
        iVar31 = PF_PART4(local_3f48, 4);
        if ((int)PF_PART4(local_3f48, 4) < 1) {
          iVar31 = 10;
        }
        uVar34 = (ulong)((int)local_3f48 - 1);
        if ((int)local_3f48 < 2) {
          uVar34 = 5;
        }
        uVar7 = terror_ui_colour(4);
        recovered_1000e790((long)&local_4318,CONCAT44(iVar6 + iVar31 + -1,iVar12 * iVar33 + uVar8),
                           uVar34 | 0x200000000,
                           (uVar7 & 0xff0000) >> 0x10 | uVar7 << 0x10 | uVar7 & 0xff00);
      }
    }
    else {
      memset(&local_338,0,0x2c);
      if ((local_3f60 & 6) == 2) {
        local_338 = 1;
        uStack_334 = (uint)local_3f5c;
        uStack_330 = (uint)(local_3f5c >> 0x20);
        local_32c = local_3f54;
      }
      local_90 = local_90 & 0xffffff00;
      local_a0 = &local_4318;
      local_98 = &local_338;
      recovered_1000aab0((ulong *)&local_a0);
    }
    pvVar17 = local_3f90;
    uVar8 = local_430c;
    uVar7 = uStack_4310;
    pcVar14 = str_1000f170;
    if (DAT_10012108 == 0) {
      pcVar14 = str_1000fc4a;
    }
    local_48 = (char **)CONCAT44(PF_PART4(local_48, 4),
                                 CONCAT13(cStack_4311,
                                          CONCAT12(bStack_4312,CONCAT11(bStack_4313,local_4314))));
    local_50 = local_50 & 0xffffffff00000000;
    uVar13 = terror_ui_colour(0);
    terror_ui_window_present(&local_4318,pcVar14,pvVar17,(uint)local_48,uVar7,uVar8,uVar13);
    uVar34 = (ulong)local_a4;
    uVar7 = local_a8;
  }
  local_3ee8 = local_3ee8 + 1;
  if (local_3fc8 - 1 < 0x1f) {
    uVar8 = 2;
  }
  else {
    if (((char)uVar34 != '\0') || ((local_50 & 1) != 0)) {
      iVar6 = Ram0000000000280800;
      if ((iVar6 == 0x50414d57) &&
         (((iVar6 = Ram0000000000280804, iVar6 != 0 && (uVar8 = Ram0000000000280808, 0xb < uVar8))
          && (uVar8 = Ram0000000000280808, 0x9f < uVar8)))) {
        uVar8 = UINT_0028089c;
        if ((code *)(ulong)uVar8 != (code *)0x0) {
          (*(code *)(ulong)uVar8)();
        }
      }
      goto LAB_100010dd;
    }
    uVar8 = 0x18;
    if (local_54 == 2) {
      uVar8 = 6;
    }
  }
  terror_ui_yield_frames(uVar8);
LAB_100010dd:
  if (local_3edf == '\0') goto LAB_10003a03;
  goto LAB_100010ea;
LAB_10003360:
  uVar8 = (uint)uVar34;
LAB_10003363:
  iVar6 = PF_PART4(local_3f48, 4) + 2;
  iVar31 = PF_PART4(local_3f48, 4);
  if ((int)PF_PART4(local_3f48, 4) < 1) {
    iVar6 = 0xc;
    iVar31 = 10;
  }
  iVar6 = iVar6 * iVar33 + (int)local_80;
  if ((int)(uint)local_68 < iVar31 + iVar6) goto LAB_10003476;
  local_48 = (char **)CONCAT44(PF_PART4(local_48, 4),uVar7);
  uVar7 = (uint)local_50;
  if (0 < (int)uVar8) {
    uVar7 = uVar8;
  }
  recovered_1000eb70((long)&local_4318,local_ac,iVar6,(long)(pcVar14 + uVar22),uVar7,local_b0);
  if (((0 < (int)uVar8) && (uVar22 = uVar22 + uVar8, pcVar14 != (char *)0x0)) && (uVar22 < local_60)
     ) {
    do {
      if ((pcVar14[uVar22] != ' ') && (pcVar14[uVar22] != '\t')) goto LAB_10003438;
      uVar22 = uVar22 + 1;
    } while (uVar22 < local_60);
    uVar22 = local_60;
  }
LAB_10003438:
  uVar34 = CONCAT44(uStack_74,local_78);
  iVar33 = iVar33 + 1;
  uVar7 = (uint)local_48 + 1;
  if ((iVar12 <= (int)uVar7) || ((int)(uint)local_38 <= iVar33)) goto LAB_1000344d;
  goto LAB_100032c1;
LAB_1000344d:
  uVar7 = 0;
  iVar6 = local_3f24;
LAB_1000345a:
  local_88 = local_88 + 1;
  local_338 = uVar7;
  if ((iVar6 <= (int)local_88) || ((int)(uint)local_38 <= iVar33)) goto LAB_10003476;
  goto LAB_100030c2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_00280a3c
#undef DAT_00280a4c
#undef DAT_1000f040
#undef DAT_1000f050
#undef DAT_1000f060
#undef DAT_1000f070
#undef DAT_1000f1f7
#undef DAT_1000f1f9
#undef DAT_1000f3b9
#undef DAT_1000fc51
#undef DAT_10012108
#undef DAT_1001210c
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280828
#undef UINT_0028082c
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280854
#undef UINT_00280894
#undef UINT_0028089c
#undef UINT_00280978
#undef UINT_00280984
#undef UNK_1000f064
#undef UNK_1000f068
#undef UNK_1000f06c
#undef UNK_1000f074
#undef UNK_1000f078
#undef UNK_1000f07c
#undef _DAT_00280a04
#undef _DAT_00280a3c
#undef _DAT_00280a4c
#undef _DAT_1000f050
#undef _DAT_1000f060
#undef _DAT_1000f070
#undef iRam000000001000f068
#undef iRam000000001000f06c
#undef iRam000000001000f074
#undef str_1000f140
#undef str_1000f160
#undef str_1000f170
#undef str_1000f177
#undef str_1000f187
#undef str_1000f192
#undef str_1000f199
#undef str_1000f1a1
#undef str_1000f1bf
#undef str_1000f1da
#undef str_1000f236
#undef str_1000f440
#undef str_1000f450
#undef str_1000f482
#undef str_1000f4a2
#undef str_1000fc4a
#undef uRam000000001000f064
#undef uRam000000001000f078
#undef uRam000000001000f07c
#undef local_318
#undef local_310
#undef local_30c
#undef local_304
#undef local_300
#undef local_2fc
#undef local_2f8
#undef local_b8
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_68
#undef local_60
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_38
#undef bStack_4313
#undef bStack_4312
#undef cStack_4311
#undef uStack_4310
#undef uStack_3f38
#undef pcStack_3eb8
#undef uStack_b80
#undef uStack_334
#undef uStack_330
#undef uStack_328
#undef uStack_324
#undef uStack_320
#undef uStack_31c
#undef uStack_74
#undef uStack_70
#undef uStack_40
#undef local_4318
#undef local_4314
#undef local_430c
#undef local_42e8
#undef local_3fc8
#undef local_3fc4
#undef local_3fc3
#undef local_3fc0
#undef local_3fb0
#undef local_3fa8
#undef local_3f90
#undef local_3f88
#undef local_3f80
#undef local_3f78
#undef local_3f68
#undef local_3f60
#undef local_3f5c
#undef local_3f54
#undef local_3f50
#undef local_3f4f
#undef local_3f4e
#undef local_3f4c
#undef local_3f48
#undef local_3f40
#undef local_3f30
#undef local_3f28
#undef local_3f24
#undef local_3f20
#undef local_3f10
#undef local_3f0c
#undef local_3f08
#undef local_3f04
#undef local_3f00
#undef local_3ef8
#undef local_3eec
#undef local_3ee8
#undef local_3ee4
#undef local_3ee0
#undef local_3edf
#undef local_3ede
#undef local_3ed8
#undef local_3ed4
#undef local_3ed0
#undef local_3ecc
#undef local_3ec8
#undef local_3ec0
#undef local_3eb0
#undef local_3ea8
#undef local_3e28
#undef local_3da8
#undef local_3d80
#undef local_3d58
#undef local_3d54
#undef local_3d50
#undef local_3d10
#undef local_3d0f
#undef local_3d0d
#undef local_3d0c
#undef local_3d08
#undef local_3cfc
#undef local_3cbc
#undef local_3bbc
#undef local_3abc
#undef local_3ab8
#undef local_3aac
#undef local_39a4
#undef local_389c
#undef local_3898
#undef local_3897
#undef local_3896
#undef local_3895
#undef local_3894
#undef local_388c
#undef local_3888
#undef local_3884
#undef local_3877
#undef local_3724
#undef local_371c
#undef local_b8c
#undef local_b88
#undef local_b84
#undef local_b7c
#undef local_a24
#undef local_a1c
#undef local_a18
#undef local_a10
#undef local_a0c
#undef local_a08
#undef local_a04
#undef local_a00
#undef local_9fc
#undef local_9fb
#undef local_9fa
#undef local_9f9
#undef local_9f8
#undef local_678
#undef local_670
#undef local_66c
#undef local_668
#undef local_664
#undef local_660
#undef local_65c
#undef local_654
#undef local_564
#undef local_560
#undef local_55c
#undef local_558
#undef local_4e8
#undef local_4e0
#undef local_4dc
#undef local_340
#undef local_33c
#undef local_338
#undef local_32c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_00280a44
#define DAT_00280a44 (*(uint8_t *)(0x280a44U))
#undef DAT_00280a48
#define DAT_00280a48 (*(uint8_t *)(0x280a48U))
#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef DAT_1000f224
#define DAT_1000f224 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x438U)))
#undef DAT_1000f38a
#define DAT_1000f38a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59eU)))
#undef DAT_1000f38e
#define DAT_1000f38e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2U)))
#undef DAT_1000f393
#define DAT_1000f393 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a7U)))
#undef DAT_1000f397
#define DAT_1000f397 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5abU)))
#undef DAT_1000f39c
#define DAT_1000f39c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b0U)))
#undef DAT_1000f3a1
#define DAT_1000f3a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5U)))
#undef DAT_1000f3a5
#define DAT_1000f3a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b9U)))
#undef DAT_1000f3ac
#define DAT_1000f3ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c0U)))
#undef DAT_1000f3b3
#define DAT_1000f3b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c7U)))
#undef DAT_10012108
#define DAT_10012108 (*(int *)(((uintptr_t)pf_module_state + 0x331cU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280894
#define UINT_00280894 (*(uint *)(0x280894U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef _DAT_00280a44
#define _DAT_00280a44 (*(uint *)(0x280a44U))
#undef _DAT_00280a48
#define _DAT_00280a48 (*(uint *)(0x280a48U))
#undef str_1000f120
#define str_1000f120 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x334U)))
#undef str_1000f1fa
#define str_1000f1fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40eU)))
#undef str_1000f226
#define str_1000f226 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43aU)))
#undef str_1000f236
#define str_1000f236 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44aU)))
#undef str_1000f23c
#define str_1000f23c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x450U)))
#undef str_1000f261
#define str_1000f261 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x475U)))
#undef str_1000f289
#define str_1000f289 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49dU)))
#undef str_1000f298
#define str_1000f298 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4acU)))
#define uStack_180 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 312))
#define local_178 (*(byte (*)[376])(pf_stack_frame + 24))
#define local_70 (*(undefined8 *)(pf_stack_frame + 288))
#define local_68 (*(undefined4 *)(pf_stack_frame + 296))
#define local_60 (*(byte * *)(pf_stack_frame + 304))
#define local_50 (*(undefined4 *)(pf_stack_frame + 320))
#define local_44 (*(int *)(pf_stack_frame + 332))
#define local_40 (*(byte * *)(pf_stack_frame + 336))
#define local_34 (*(int *)(pf_stack_frame + 348))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10003d40(long param_1,byte *param_2)

{
  unsigned char pf_stack_frame[432] __attribute__((aligned(16))) = {0};

  void *dst;
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar11;
  byte bVar12;
  undefined *puVar13;
  byte bVar14;
  long lVar15;
  char *text;
  undefined7 uVar16;
  bool bVar17;

  if (DAT_10012108 != 0) {
    uVar5 = recovered_10007e90(param_1,param_2);
    return uVar5;
  }
  local_34 = *(int *)(param_1 + 0x42c);
  uStack_180 = 0x10003d90;
  iVar2 = recovered_10007370(param_1);
  uVar16 = (undefined7)((ulong)param_2 >> 8);
  if (((((*(char *)(param_1 + 0x43a) == '\x01') && (*(int *)(param_1 + 0x440) != 0)) &&
       (iVar3 = Ram0000000000280800, iVar3 == 0x50414d57)) &&
      ((iVar3 = Ram0000000000280804, iVar3 != 0 && (uVar4 = Ram0000000000280808, 0xb < uVar4)))) &&
     ((uVar4 = Ram0000000000280808, 0x247 < uVar4 && ((code *)(ulong)_DAT_00280a44 != (code *)0x0)))
     ) {
    uStack_180 = 0x10003de5;
    uVar5 = (*(code *)(ulong)_DAT_00280a44)();
    if ((uVar5 & 1) == 0) goto LAB_10003ded;
    pbVar6 = &DAT_1000f1f9;
    if (param_2 != (byte *)0x0) {
      pbVar6 = param_2;
    }
    iVar2 = Ram0000000000280800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
       ((uVar4 = Ram0000000000280808, 0xb < uVar4 &&
        ((uVar4 = Ram0000000000280808, 0x24b < uVar4 &&
         ((code *)(ulong)_DAT_00280a48 != (code *)0x0)))))) {
      uStack_180 = 0x10004286;
      iVar2 = (*(code *)(ulong)_DAT_00280a48)(pbVar6);
      uVar5 = CONCAT71(uVar16,1);
      if (iVar2 != 0) goto LAB_10004ec0;
    }
    text = str_1000f1fa;
  }
  else {
LAB_10003ded:
    if (param_2 == (byte *)0x0) {
LAB_100047b2:
      bVar17 = false;
    }
    else {
      pbVar6 = param_2;
      while( true ) {
        bVar10 = *pbVar6;
        uVar5 = (ulong)bVar10;
        if ((0x20 < uVar5) || ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0)) break;
        pbVar6 = pbVar6 + 1;
      }
      if (bVar10 == 0) goto LAB_100047b2;
      bVar12 = bVar10;
      pbVar11 = pbVar6;
      while( true ) {
        pbVar9 = pbVar11 + 1;
        uVar8 = (ulong)bVar12;
        if (0x3e < bVar12) break;
        if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) {
          if (uVar8 == 0) goto LAB_10003ebc;
          if (uVar8 == 0x3e) goto LAB_10003e63;
          break;
        }
        bVar12 = *pbVar9;
        pbVar11 = pbVar9;
      }
      bVar14 = bVar12 | 0x20;
      if (0x19 < (byte)(bVar12 + 0xbf)) {
        bVar14 = bVar12;
      }
      if ((byte)(pbVar11[bVar14 == 0x69] - 0x30U) < 10) {
        pbVar9 = pbVar9 + (bVar14 == 0x69);
        do {
          bVar12 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while ((byte)(bVar12 - 0x30U) < 10);
        bVar17 = true;
        if (bVar12 != 0x3e) goto LAB_10003ebc;
      }
      else {
LAB_10003ebc:
        lVar15 = 4;
        uVar8 = 0;
        while( true ) {
          if ((bVar10 < 0x2d) && ((0x100100000201U >> (uVar5 & 0x3f) & 1) != 0)) {
            uVar8 = lVar15 - 4;
            goto LAB_10003f60;
          }
          local_178[lVar15 + -4] = (byte)uVar5;
          bVar10 = pbVar6[lVar15 + -3];
          if (((ulong)bVar10 < 0x2d) && ((0x100100000201U >> ((ulong)bVar10 & 0x3f) & 1) != 0)) {
            uVar8 = lVar15 - 3;
            goto LAB_10003f60;
          }
          local_178[lVar15 + -3] = bVar10;
          bVar10 = pbVar6[lVar15 + -2];
          if (((ulong)bVar10 < 0x2d) && ((0x100100000201U >> ((ulong)bVar10 & 0x3f) & 1) != 0)) {
            uVar8 = lVar15 - 2;
            goto LAB_10003f60;
          }
          local_178[lVar15 + -2] = bVar10;
          bVar10 = pbVar6[lVar15 + -1];
          if (((ulong)bVar10 < 0x2d) && ((0x100100000201U >> ((ulong)bVar10 & 0x3f) & 1) != 0)) {
            uVar8 = lVar15 - 1;
            goto LAB_10003f60;
          }
          if (lVar15 == 0x40) break;
          uVar8 = uVar8 + 4;
          local_178[lVar15 + -1] = bVar10;
          bVar10 = pbVar6[lVar15];
          uVar5 = (ulong)bVar10;
          lVar15 = lVar15 + 4;
        }
        uVar8 = uVar8 | 3;
LAB_10003f60:
        local_178[uVar8] = 0;
        if (local_178[0] == 0) {
          lVar15 = 0;
        }
        else {
          bVar10 = local_178[0];
          if ((byte)(local_178[0] + 0xbf) < 0x1a) {
            bVar10 = local_178[0] | 0x20;
          }
          switch((uintptr_t)(bVar10)) {
          case 0x6c:
            if (local_178[1] == 0) {
              lVar15 = 1;
LAB_10004374:
              if ((&DAT_1000f38e)[lVar15] == '\0') goto LAB_10003e63;
            }
            else {
              bVar10 = local_178[1] | 0x20;
              if (0x19 < (byte)(local_178[1] + 0xbf)) {
                bVar10 = local_178[1];
              }
              if (bVar10 == 0x69) {
                if (local_178[2] == 0) {
                  lVar15 = 2;
                }
                else {
                  bVar10 = local_178[2] | 0x20;
                  if (0x19 < (byte)(local_178[2] + 0xbf)) {
                    bVar10 = local_178[2];
                  }
                  if (bVar10 != 0x73) goto LAB_10004385;
                  if (local_178[3] == 0) {
                    lVar15 = 3;
                  }
                  else {
                    bVar10 = local_178[3] | 0x20;
                    if (0x19 < (byte)(local_178[3] + 0xbf)) {
                      bVar10 = local_178[3];
                    }
                    if ((bVar10 != 0x74) || (lVar15 = 4, local_178[4] != 0)) goto LAB_10004385;
                  }
                }
                goto LAB_10004374;
              }
            }
LAB_10004385:
            if (local_178[1] == 0) {
              lVar15 = 1;
LAB_1000458f:
              if ((&DAT_1000f39c)[lVar15] == '\0') goto LAB_10003e63;
            }
            else {
              bVar10 = local_178[1] | 0x20;
              if (0x19 < (byte)(local_178[1] + 0xbf)) {
                bVar10 = local_178[1];
              }
              if (bVar10 == 0x6f) {
                if (local_178[2] == 0) {
                  lVar15 = 2;
                }
                else {
                  bVar10 = local_178[2] | 0x20;
                  if (0x19 < (byte)(local_178[2] + 0xbf)) {
                    bVar10 = local_178[2];
                  }
                  if (bVar10 != 0x61) goto LAB_100045a0;
                  if (local_178[3] == 0) {
                    lVar15 = 3;
                  }
                  else {
                    bVar10 = local_178[3] | 0x20;
                    if (0x19 < (byte)(local_178[3] + 0xbf)) {
                      bVar10 = local_178[3];
                    }
                    if ((bVar10 != 100) || (lVar15 = 4, local_178[4] != 0)) goto LAB_100045a0;
                  }
                }
                goto LAB_1000458f;
              }
            }
LAB_100045a0:
            if (local_178[1] == 0) {
              lVar15 = 1;
LAB_100046e8:
              puVar13 = &DAT_1000f3ac;
              goto LAB_100046ef;
            }
            bVar10 = local_178[1] | 0x20;
            if (0x19 < (byte)(local_178[1] + 0xbf)) {
              bVar10 = local_178[1];
            }
            if (bVar10 == 0x6f) {
              if (local_178[2] == 0) {
                lVar15 = 2;
              }
              else {
                bVar10 = local_178[2] | 0x20;
                if (0x19 < (byte)(local_178[2] + 0xbf)) {
                  bVar10 = local_178[2];
                }
                if (bVar10 != 0x61) break;
                if (local_178[3] == 0) {
                  lVar15 = 3;
                }
                else {
                  bVar10 = local_178[3] | 0x20;
                  if (0x19 < (byte)(local_178[3] + 0xbf)) {
                    bVar10 = local_178[3];
                  }
                  if (bVar10 != 100) break;
                  if (local_178[4] == 0) {
                    lVar15 = 4;
                  }
                  else {
                    bVar10 = local_178[4] | 0x20;
                    if (0x19 < (byte)(local_178[4] + 0xbf)) {
                      bVar10 = local_178[4];
                    }
                    if (bVar10 != 0x62) break;
                    if (local_178[5] == 0) {
                      lVar15 = 5;
                    }
                    else {
                      bVar10 = local_178[5] | 0x20;
                      if (0x19 < (byte)(local_178[5] + 0xbf)) {
                        bVar10 = local_178[5];
                      }
                      if ((bVar10 != 99) || (lVar15 = 6, local_178[6] != '\0')) break;
                    }
                  }
                }
              }
              goto LAB_100046e8;
            }
            break;
          default:
            break;
          case 0x6e:
            if (local_178[1] == 0) {
              lVar15 = 1;
            }
            else {
              bVar10 = local_178[1] | 0x20;
              if (0x19 < (byte)(local_178[1] + 0xbf)) {
                bVar10 = local_178[1];
              }
              if (bVar10 != 0x65) break;
              if (local_178[2] == 0) {
                lVar15 = 2;
              }
              else {
                bVar10 = local_178[2] | 0x20;
                if (0x19 < (byte)(local_178[2] + 0xbf)) {
                  bVar10 = local_178[2];
                }
                if ((bVar10 != 0x77) || (lVar15 = 3, local_178[3] != 0)) break;
              }
            }
            puVar13 = &DAT_1000f393;
            goto LAB_100046ef;
          case 0x72:
            if (local_178[1] == 0) {
              lVar15 = 1;
LAB_100042a2:
              if ((&DAT_1000f38a)[lVar15] == '\0') goto LAB_10003e63;
            }
            else {
              bVar10 = local_178[1] | 0x20;
              if (0x19 < (byte)(local_178[1] + 0xbf)) {
                bVar10 = local_178[1];
              }
              if (bVar10 == 0x65) {
                if (local_178[2] == 0) {
                  lVar15 = 2;
                }
                else {
                  bVar10 = local_178[2] | 0x20;
                  if (0x19 < (byte)(local_178[2] + 0xbf)) {
                    bVar10 = local_178[2];
                  }
                  if ((bVar10 != 0x6d) || (lVar15 = 3, local_178[3] != 0)) goto LAB_100042b3;
                }
                goto LAB_100042a2;
              }
            }
LAB_100042b3:
            if (local_178[1] == 0) {
              lVar15 = 1;
              puVar13 = &DAT_1000f3a1;
            }
            else {
              bVar10 = local_178[1] | 0x20;
              if (0x19 < (byte)(local_178[1] + 0xbf)) {
                bVar10 = local_178[1];
              }
              if (bVar10 != 0x75) break;
              if (local_178[2] == 0) {
                lVar15 = 2;
                puVar13 = &DAT_1000f3a1;
              }
              else {
                bVar10 = local_178[2] | 0x20;
                if (0x19 < (byte)(local_178[2] + 0xbf)) {
                  bVar10 = local_178[2];
                }
                if ((bVar10 != 0x6e) || (lVar15 = 3, local_178[3] != 0)) break;
                puVar13 = &DAT_1000f3a1;
              }
            }
LAB_100046ef:
            if (puVar13[lVar15] == '\0') goto LAB_10003e63;
            break;
          case 0x73:
            if (local_178[1] != 0) {
              bVar10 = local_178[1] | 0x20;
              if (0x19 < (byte)(local_178[1] + 0xbf)) {
                bVar10 = local_178[1];
              }
              if (bVar10 == 0x61) {
                if (local_178[2] == 0) {
                  lVar15 = 2;
                }
                else {
                  bVar10 = local_178[2] | 0x20;
                  if (0x19 < (byte)(local_178[2] + 0xbf)) {
                    bVar10 = local_178[2];
                  }
                  if (bVar10 != 0x76) goto LAB_10004455;
                  if (local_178[3] == 0) {
                    lVar15 = 3;
                  }
                  else {
                    bVar10 = local_178[3] | 0x20;
                    if (0x19 < (byte)(local_178[3] + 0xbf)) {
                      bVar10 = local_178[3];
                    }
                    if ((bVar10 != 0x65) || (lVar15 = 4, local_178[4] != 0)) goto LAB_10004455;
                  }
                }
                goto LAB_10004444;
              }
LAB_10004455:
              if (local_178[1] != 0) {
                bVar10 = local_178[1] | 0x20;
                if (0x19 < (byte)(local_178[1] + 0xbf)) {
                  bVar10 = local_178[1];
                }
                if (bVar10 == 0x61) {
                  if (local_178[2] == 0) {
                    lVar15 = 2;
                    puVar13 = &DAT_1000f3a5;
                  }
                  else {
                    bVar10 = local_178[2] | 0x20;
                    if (0x19 < (byte)(local_178[2] + 0xbf)) {
                      bVar10 = local_178[2];
                    }
                    if (bVar10 != 0x76) break;
                    if (local_178[3] == 0) {
                      lVar15 = 3;
                      puVar13 = &DAT_1000f3a5;
                    }
                    else {
                      bVar10 = local_178[3] | 0x20;
                      if (0x19 < (byte)(local_178[3] + 0xbf)) {
                        bVar10 = local_178[3];
                      }
                      if (bVar10 != 0x65) break;
                      if (local_178[4] == 0) {
                        lVar15 = 4;
                        puVar13 = &DAT_1000f3a5;
                      }
                      else {
                        bVar10 = local_178[4] | 0x20;
                        if (0x19 < (byte)(local_178[4] + 0xbf)) {
                          bVar10 = local_178[4];
                        }
                        if (bVar10 != 0x62) break;
                        if (local_178[5] == 0) {
                          lVar15 = 5;
                          puVar13 = &DAT_1000f3a5;
                        }
                        else {
                          bVar10 = local_178[5] | 0x20;
                          if (0x19 < (byte)(local_178[5] + 0xbf)) {
                            bVar10 = local_178[5];
                          }
                          if ((bVar10 != 99) || (lVar15 = 6, local_178[6] != '\0')) break;
                          puVar13 = &DAT_1000f3a5;
                        }
                      }
                    }
                  }
                  goto LAB_100046ef;
                }
                break;
              }
              lVar15 = 1;
              puVar13 = &DAT_1000f3a5;
              goto LAB_100046ef;
            }
            lVar15 = 1;
LAB_10004444:
            if ((&DAT_1000f397)[lVar15] != '\0') goto LAB_10004455;
LAB_10003e63:
            bVar17 = true;
            goto LAB_100047b5;
          }
          if ((byte)(local_178[0] + 0xbf) < 0x1a) {
            local_178[0] = local_178[0] | 0x20;
          }
          if (local_178[0] != 0x72) goto LAB_100047b2;
          if (local_178[1] == 0) {
            lVar15 = 1;
          }
          else {
            bVar10 = local_178[1] | 0x20;
            if (0x19 < (byte)(local_178[1] + 0xbf)) {
              bVar10 = local_178[1];
            }
            if (bVar10 != 0x75) goto LAB_100047b2;
            if (local_178[2] == 0) {
              lVar15 = 2;
            }
            else {
              bVar10 = local_178[2] | 0x20;
              if (0x19 < (byte)(local_178[2] + 0xbf)) {
                bVar10 = local_178[2];
              }
              if (bVar10 != 0x6e) goto LAB_100047b2;
              if (local_178[3] == 0) {
                lVar15 = 3;
              }
              else {
                bVar10 = local_178[3] | 0x20;
                if (0x19 < (byte)(local_178[3] + 0xbf)) {
                  bVar10 = local_178[3];
                }
                if (bVar10 != 0x62) goto LAB_100047b2;
                if (local_178[4] == 0) {
                  lVar15 = 4;
                }
                else {
                  bVar10 = local_178[4] | 0x20;
                  if (0x19 < (byte)(local_178[4] + 0xbf)) {
                    bVar10 = local_178[4];
                  }
                  bVar17 = false;
                  if ((bVar10 != 99) || (lVar15 = 5, local_178[5] != 0)) goto LAB_100047b5;
                }
              }
            }
          }
        }
        bVar17 = (&DAT_1000f3b3)[lVar15] == '\0';
      }
    }
LAB_100047b5:
    uStack_180 = 0x100047d0;
    recovered_100081a0((long)local_178,0x100,(undefined8 *)&DAT_1000f1f9);
    uStack_180 = 0x100047d8;
    uVar5 = strlen(&DAT_1000f1f9);
    uStack_180 = 0x100047e8;
    uVar5 = recovered_10007480(param_1,((uintptr_t)pf_module_state + 0x40dU),uVar5,'\0');
    if ((char)uVar5 != '\0') {
      *(undefined4 *)(param_1 + 0x428) = 1;
      uStack_180 = 0x10004805;
      recovered_10008540(param_1,local_178);
      pbVar6 = &DAT_1000f1f9;
      if (param_2 != (byte *)0x0) {
        pbVar6 = param_2;
      }
      uStack_180 = 0x10004817;
      recovered_10008540(param_1,pbVar6);
      uStack_180 = 0x10004826;
      recovered_10008540(param_1,&DAT_1000f224);
    }
    if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
      uVar5 = CONCAT71(uVar16,1);
      goto LAB_10004867;
    }
    local_44 = iVar2;
    if (bVar17) {
      if (*(int *)(param_1 + 0x440) != 0) goto LAB_10004a4b;
    }
    else {
      local_70 = 0;
      local_68 = 0;
      local_60 = (byte *)0x0;
      uStack_58 = 0;
      local_50 = 0;
      iVar3 = Ram0000000000280800;
      if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
          (uVar4 = Ram0000000000280808, 0xb < uVar4)) &&
         ((uVar4 = Ram0000000000280808, 0x207 < uVar4 &&
          ((code *)(ulong)_DAT_00280a04 != (code *)0x0)))) {
        uStack_180 = 0x100048fc;
        iVar3 = (*(code *)(ulong)_DAT_00280a04)(str_1000f226,&local_70);
        if (iVar3 == 0) goto LAB_1000496c;
        if (((uint)local_70 & 0xfffffffb) != 1) {
          if (local_60 != (byte *)0x0 && (uint)local_70 == 3) {
            uVar4 = *local_60 - 0x54;
            if (((uVar4 < 0x26) && ((0x2100000021U >> ((ulong)uVar4 & 0x3f) & 1) != 0)) ||
               (*local_60 == 0x31)) goto LAB_10004a42;
          }
          goto LAB_1000496c;
        }
        if (PF_PART4(local_70, 4) == 0) goto LAB_1000496c;
      }
      else {
LAB_1000496c:
        bVar10 = *param_2;
        if (bVar10 != 0) {
          pbVar6 = param_2;
          do {
            pbVar6 = pbVar6 + 1;
            if (bVar10 < 0x21) {
              if ((0x100002600U >> ((ulong)bVar10 & 0x3f) & 1) != 0) break;
              if ((ulong)bVar10 == 0) goto code_r0x100049ad;
            }
            bVar10 = *pbVar6;
          } while( true );
        }
      }
LAB_10004a42:
      if (*(int *)(param_1 + 0x440) != 0) {
LAB_10004a4b:
        uStack_180 = 0x10004a5a;
        uVar8 = strlen(str_1000f23c);
        uVar5 = 0;
        uStack_180 = 0x10004a6d;
        recovered_10007480(param_1,((uintptr_t)pf_module_state + 0x450U),uVar8,'\0');
        if (iVar2 <= local_34) {
          uStack_180 = 0x10004a7f;
          iVar2 = recovered_10007370(param_1);
          *(int *)(param_1 + 0x42c) = iVar2;
          uVar5 = 0;
        }
        goto LAB_10004ec0;
      }
      local_70 = 0;
      local_68 = 0;
      local_60 = (byte *)0x0;
      uStack_58 = 0;
      local_50 = 0;
      iVar2 = Ram0000000000280800;
      if ((((iVar2 != 0x50414d57) || (iVar2 = Ram0000000000280804, iVar2 == 0)) ||
          (uVar4 = Ram0000000000280808, uVar4 < 0xc)) ||
         ((uVar4 = Ram0000000000280808, uVar4 < 0x208 ||
          ((code *)(ulong)_DAT_00280a04 == (code *)0x0)))) {
LAB_10004bad:
        pbVar6 = param_2;
        do {
          uVar5 = (ulong)*pbVar6;
          if (uVar5 < 0x21) {
            if ((0x100002600U >> (uVar5 & 0x3f) & 1) != 0) {
              cVar1 = '\0';
              goto LAB_10004bee;
            }
            if (uVar5 == 0) goto code_r0x10004bd7;
          }
          pbVar6 = pbVar6 + 1;
        } while( true );
      }
      uStack_180 = 0x10004b09;
      iVar2 = (*(code *)(ulong)_DAT_00280a04)(str_1000f226,&local_70);
      if (iVar2 == 0) goto LAB_10004bad;
      if (((uint)local_70 & 0xfffffffb) == 1) {
        if (PF_PART4(local_70, 4) == 0) goto LAB_10004bad;
      }
      else {
        if (local_60 == (byte *)0x0 || (uint)local_70 != 3) goto LAB_10004bad;
        uVar4 = *local_60 - 0x54;
        if (((0x25 < uVar4) || ((0x2100000021U >> ((ulong)uVar4 & 0x3f) & 1) == 0)) &&
           (*local_60 != 0x31)) goto LAB_10004bad;
      }
    }
    uStack_180 = 0x1000484f;
    uVar5 = strlen((char *)param_2);
    if (uVar5 != 0xffffffffffffffff) {
      pbVar11 = (byte *)(uVar5 + 1);
LAB_10004c32:
      bVar17 = false;
      pbVar6 = pbVar11;
LAB_10004c38:
      pbVar9 = *(byte **)(param_1 + 0x450);
      if ((param_2 < pbVar9 || pbVar9 == (byte *)0x0) ||
         (*(ulong *)(param_1 + 0x458) <= (ulong)((long)param_2 - (long)pbVar9))) {
        pbVar9 = (byte *)0x0;
LAB_10004ce1:
        uStack_180 = 0x10004ce9;
        uVar5 = recovered_10006ff0(param_1,(ulong)pbVar11);
        if ((char)uVar5 == '\0') {
          bVar17 = false;
        }
        else {
          dst = *(void **)(param_1 + 0x450);
          local_40 = pbVar9;
          if (bVar17) {
            uVar5 = *(ulong *)(param_1 + 0x458);
            if (0x1f < uVar5 && dst != (void *)0x0) {
              lVar15 = 0x1f;
              uStack_180 = 0x10004d3b;
              memcpy(dst,str_1000f120,0x1f);
              bVar10 = *param_2;
              while (bVar10 != 0) {
                if (uVar5 < (ulong)(bVar10 == 0x22 || bVar10 == 0x2f) + lVar15 + 4)
                goto LAB_10004db5;
                if ((bVar10 == 0x2f) || (bVar10 == 0x22)) {
                  *(undefined1 *)((long)dst + lVar15) = 0x2f;
                  lVar15 = lVar15 + 1;
                  bVar10 = *param_2;
                }
                *(byte *)((long)dst + lVar15) = bVar10;
                lVar15 = lVar15 + 1;
                bVar10 = param_2[1];
                param_2 = param_2 + 1;
              }
              if (lVar15 + 3U <= uVar5) {
                *(undefined2 *)((long)dst + lVar15) = 0x7d22;
                *(undefined1 *)((long)dst + lVar15 + 2) = 0;
                goto LAB_10004da3;
              }
            }
LAB_10004db5:
            bVar17 = false;
          }
          else {
            uStack_180 = 0x10004da3;
            memcpy(dst,param_2,(ulong)pbVar6);
LAB_10004da3:
            bVar17 = true;
          }
          pbVar9 = local_40;
        }
        iVar2 = Ram0000000000280800;
        if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
           ((uVar4 = Ram0000000000280808, 0xb < uVar4 && (uVar4 = Ram0000000000280808, 0x53 < uVar4)
            ))) {
          uVar4 = UINT_00280850;
          if ((code *)(ulong)uVar4 != (code *)0x0) {
            uStack_180 = 0x10004dfd;
            (*(code *)(ulong)uVar4)(pbVar9);
          }
        }
        if (bVar17) {
          **(undefined1 **)(param_1 + 0x460) = 0;
          *(undefined4 *)(param_1 + 0x444) = 0;
          *(undefined4 *)(param_1 + 0x448) = 0;
          *(undefined4 *)(param_1 + 0x440) = 1;
          iVar2 = Ram0000000000280800;
          if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
              (uVar4 = Ram0000000000280808, 0xb < uVar4)) &&
             (uVar4 = Ram0000000000280808, 0x97 < uVar4)) {
            uVar4 = UINT_00280894;
            if ((code *)(ulong)uVar4 == (code *)0x0) goto LAB_10004ed5;
            uStack_180 = 0x10004e87;
            uVar4 = (*(code *)(ulong)uVar4)(recovered_10005160,(void *)param_1,str_1000f289);
            *(uint *)(param_1 + 0x44c) = uVar4;
            iVar2 = local_44;
            if (uVar4 == 0) goto LAB_10004eea;
          }
          else {
LAB_10004ed5:
            *(undefined4 *)(param_1 + 0x44c) = 0;
LAB_10004eea:
            iVar2 = local_44;
            *(undefined4 *)(param_1 + 0x440) = 0;
            *(undefined4 *)(param_1 + 0x444) = 0;
            uStack_180 = 0x10004f0d;
            recovered_10007330(param_1,str_1000f298);
          }
          if (iVar2 <= local_34) {
            uStack_180 = 0x10004f1b;
            iVar2 = recovered_10007370(param_1);
            *(int *)(param_1 + 0x42c) = iVar2;
          }
          uVar5 = CONCAT71((int7)((ulong)(param_1 + 0x44c) >> 8),*(int *)(param_1 + 0x44c) != 0);
          goto LAB_10004ec0;
        }
      }
      else {
        iVar2 = Ram0000000000280800;
        if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
            (uVar4 = Ram0000000000280808, 0xb < uVar4)) &&
           (uVar4 = Ram0000000000280808, 0x4f < uVar4)) {
          uVar4 = UINT_0028084c;
          if ((code *)(ulong)uVar4 != (code *)0x0) {
            uStack_180 = 0x10004cbb;
            local_40 = pbVar11;
            pbVar9 = (*(code *)(ulong)uVar4)((ulong)pbVar6);
            if (pbVar9 != (byte *)0x0) {
              uStack_180 = 0x10004cd5;
              memcpy(pbVar9,param_2,(ulong)pbVar6);
              pbVar11 = local_40;
              param_2 = pbVar9;
              goto LAB_10004ce1;
            }
          }
        }
      }
    }
LAB_10004e9e:
    text = str_1000f261;
  }
  uStack_180 = 0x10004ead;
  uVar8 = strlen(text);
  uVar5 = 0;
  uStack_180 = 0x10004ec0;
  recovered_10007480(param_1,(ulong)text,uVar8,'\0');
LAB_10004ec0:
  return uVar5 & 0xffffffff;
code_r0x100049ad:
  uStack_180 = 0x100049bc;
  cVar1 = recovered_10008a90((char *)param_2,((uintptr_t)pf_module_state + 0x62eU));
  if (cVar1 == '\0') {
    uStack_180 = 0x100049cf;
    cVar1 = recovered_10008a90((char *)param_2,((uintptr_t)pf_module_state + 0x633U));
    if (cVar1 == '\0') {
      uStack_180 = 0x100049e2;
      cVar1 = recovered_10008a90((char *)param_2,((uintptr_t)pf_module_state + 0x638U));
      if (cVar1 != '\0') goto LAB_10004a32;
      uStack_180 = 0x100049f5;
      cVar1 = recovered_10008a90((char *)param_2,((uintptr_t)pf_module_state + 0x63dU));
      if (cVar1 != '\0') goto LAB_10004a32;
      uStack_180 = 0x10004a08;
      cVar1 = recovered_10008a90((char *)param_2,((uintptr_t)pf_module_state + 0x646U));
      if (cVar1 != '\0') goto LAB_10004a32;
      uStack_180 = 0x10004a1b;
      cVar1 = recovered_10008a90((char *)param_2,((uintptr_t)pf_module_state + 0x64bU));
      if (cVar1 != '\0') goto LAB_10004a32;
      uStack_180 = 0x10004a2e;
      cVar1 = recovered_10008a90((char *)param_2,((uintptr_t)pf_module_state + 0x650U));
      if (cVar1 != '\0') goto LAB_10004a32;
      goto LAB_10004a42;
    }
  }
LAB_10004a32:
  uStack_180 = 0x10004a3a;
  cVar1 = recovered_10008980((char *)param_2);
  if (cVar1 != '\0') goto LAB_10004a42;
  uStack_180 = 0x10004b35;
  recovered_10008a10((char *)param_2);
  uStack_180 = 0x10004b44;
  uVar7 = recovered_100089c0();
  bVar17 = (int)uVar7 != 0;
  uVar5 = CONCAT71(uVar16,bVar17);
  if (!bVar17) {
    uStack_180 = 0x10004b5f;
    recovered_10007330(param_1,str_1000f236);
  }
LAB_10004867:
  if (iVar2 <= local_34) {
    uStack_180 = 0x10004879;
    iVar2 = recovered_10007370(param_1);
    *(int *)(param_1 + 0x42c) = iVar2;
  }
  goto LAB_10004ec0;
code_r0x10004bd7:
  uStack_180 = 0x10004be6;
  cVar1 = recovered_10008a90((char *)param_2,((uintptr_t)pf_module_state + 0x471U));
LAB_10004bee:
  if (param_1 != 0) {
    uStack_180 = 0x10004bff;
    uVar5 = strlen((char *)param_2);
    if (uVar5 != 0xffffffffffffffff) {
      pbVar6 = (byte *)(uVar5 + 1);
      pbVar11 = pbVar6;
      if (cVar1 == '\0') goto LAB_10004c32;
      if (0x7fffffffffffffee < uVar5) goto LAB_10004e9e;
      pbVar11 = (byte *)(uVar5 * 2 + 0x22);
      bVar17 = true;
      goto LAB_10004c38;
    }
  }
  goto LAB_10004e9e;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_00280a44
#undef DAT_00280a48
#undef DAT_1000f1f9
#undef DAT_1000f224
#undef DAT_1000f38a
#undef DAT_1000f38e
#undef DAT_1000f393
#undef DAT_1000f397
#undef DAT_1000f39c
#undef DAT_1000f3a1
#undef DAT_1000f3a5
#undef DAT_1000f3ac
#undef DAT_1000f3b3
#undef DAT_10012108
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280894
#undef _DAT_00280a04
#undef _DAT_00280a44
#undef _DAT_00280a48
#undef str_1000f120
#undef str_1000f1fa
#undef str_1000f226
#undef str_1000f236
#undef str_1000f23c
#undef str_1000f261
#undef str_1000f289
#undef str_1000f298
#undef uStack_180
#undef uStack_58
#undef local_178
#undef local_70
#undef local_68
#undef local_60
#undef local_50
#undef local_44
#undef local_40
#undef local_34

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a40
#define DAT_00280a40 (*(uint8_t *)(0x280a40U))
#undef DAT_00280a44
#define DAT_00280a44 (*(uint8_t *)(0x280a44U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a40
#define _DAT_00280a40 (*(uint *)(0x280a40U))
#undef _DAT_00280a44
#define _DAT_00280a44 (*(uint *)(0x280a44U))
#define local_438 (*(byte (*)[1080])(pf_stack_frame + 24))
#define local_34 (*(int *)(pf_stack_frame + 1052))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char recovered_10004f70(long param_1)

{
  unsigned char pf_stack_frame[1136] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;

  if ((param_1 == 0) || (*(char *)(param_1 + 0x43a) != '\x01')) {
    cVar7 = '\0';
  }
  else {
    iVar6 = *(int *)(param_1 + 0x42c);
    iVar3 = recovered_10007370(param_1);
    iVar4 = Ram0000000000280800;
    iVar5 = 0;
    cVar7 = '\0';
    if (iVar4 == 0x50414d57) {
      iVar4 = Ram0000000000280804;
      if ((((iVar4 == 0) || (uVar2 = Ram0000000000280808, uVar2 < 0xc)) ||
          (uVar2 = Ram0000000000280808, uVar2 < 0x244)) ||
         ((code *)(ulong)_DAT_00280a40 == (code *)0x0)) {
        cVar7 = '\0';
      }
      else {
        local_34 = iVar3;
        iVar4 = (*(code *)(ulong)_DAT_00280a40)(local_438,0x400);
        if (iVar4 == 0) {
          cVar7 = '\0';
LAB_1000514e:
          iVar3 = local_34;
        }
        else {
          recovered_10008540(param_1,local_438);
          iVar4 = 0xf;
          do {
            iVar1 = Ram0000000000280800;
            cVar7 = '\x01';
            iVar3 = local_34;
            if (((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000280804, iVar1 == 0)) ||
               ((uVar2 = Ram0000000000280808, uVar2 < 0xc ||
                ((uVar2 = Ram0000000000280808, uVar2 < 0x244 ||
                 ((code *)(ulong)_DAT_00280a40 == (code *)0x0)))))) break;
            iVar3 = (*(code *)(ulong)_DAT_00280a40)(local_438,0x400);
            if (iVar3 == 0) goto LAB_1000514e;
            recovered_10008540(param_1,local_438);
            iVar4 = iVar4 + -1;
            iVar3 = local_34;
          } while (iVar4 != 0);
        }
      }
    }
    iVar4 = Ram0000000000280800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
        (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
       ((uVar2 = Ram0000000000280808, 0x247 < uVar2 && ((code *)(ulong)_DAT_00280a44 != (code *)0x0)
        ))) {
      iVar5 = (*(code *)(ulong)_DAT_00280a44)();
    }
    if (iVar5 != *(int *)(param_1 + 0x43c)) {
      *(int *)(param_1 + 0x43c) = iVar5;
      cVar7 = '\x01';
    }
    if ((cVar7 != '\0') && (iVar3 <= iVar6)) {
      iVar6 = recovered_10007370(param_1);
      *(int *)(param_1 + 0x42c) = iVar6;
    }
  }
  return cVar7;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a40
#undef DAT_00280a44
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef _DAT_00280a40
#undef _DAT_00280a44
#undef local_438
#undef local_34

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_00280a3c
#define DAT_00280a3c (*(uint8_t *)(0x280a3cU))
#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef DAT_1000f3b9
#define DAT_1000f3b9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cdU)))
#undef DAT_1000f40f
#define DAT_1000f40f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x623U)))
#undef DAT_1000f662
#define DAT_1000f662 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x876U)))
#undef DAT_1000f667
#define DAT_1000f667 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87bU)))
#undef DAT_1000f66c
#define DAT_1000f66c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x880U)))
#undef DAT_1000f66f
#define DAT_1000f66f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x883U)))
#undef DAT_1000f67a
#define DAT_1000f67a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88eU)))
#undef DAT_1000f7a7
#define DAT_1000f7a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bbU)))
#undef DAT_1000f820
#define DAT_1000f820 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa34U)))
#undef DAT_1000fa3e
#define DAT_1000fa3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc52U)))
#undef DAT_10012108
#define DAT_10012108 (*(int *)(((uintptr_t)pf_module_state + 0x331cU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef UINT_00280890
#define UINT_00280890 (*(uint *)(0x280890U))
#undef UINT_00280898
#define UINT_00280898 (*(uint *)(0x280898U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef _DAT_00280a3c
#define _DAT_00280a3c (*(uint *)(0x280a3cU))
#undef str_1000f414
#define str_1000f414 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x628U)))
#undef str_1000f4a2
#define str_1000f4a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b6U)))
#undef str_1000f4aa
#define str_1000f4aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6beU)))
#undef str_1000f4c3
#define str_1000f4c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d7U)))
#undef str_1000f50e
#define str_1000f50e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x722U)))
#undef str_1000f526
#define str_1000f526 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73aU)))
#undef str_1000f54e
#define str_1000f54e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x762U)))
#undef str_1000f575
#define str_1000f575 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x789U)))
#undef str_1000f5a2
#define str_1000f5a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b6U)))
#undef str_1000f5ce
#define str_1000f5ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e2U)))
#undef str_1000f611
#define str_1000f611 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x825U)))
#undef str_1000f61a
#define str_1000f61a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82eU)))
#undef str_1000f622
#define str_1000f622 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x836U)))
#undef str_1000f62a
#define str_1000f62a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83eU)))
#undef str_1000f672
#define str_1000f672 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x886U)))
#undef str_1000f67f
#define str_1000f67f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x893U)))
#undef str_1000f6b1
#define str_1000f6b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c5U)))
#undef str_1000f6c6
#define str_1000f6c6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8daU)))
#undef str_1000f705
#define str_1000f705 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x919U)))
#undef str_1000f710
#define str_1000f710 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x924U)))
#undef str_1000f747
#define str_1000f747 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x95bU)))
#undef str_1000f750
#define str_1000f750 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x964U)))
#undef str_1000f76f
#define str_1000f76f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x983U)))
#undef str_1000f7ac
#define str_1000f7ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9c0U)))
#undef str_1000f7c3
#define str_1000f7c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d7U)))
#undef str_1000f7f3
#define str_1000f7f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa07U)))
#undef str_1000f80b
#define str_1000f80b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1fU)))
#undef str_1000f825
#define str_1000f825 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa39U)))
#undef str_1000f82e
#define str_1000f82e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa42U)))
#undef str_1000f838
#define str_1000f838 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa4cU)))
#undef str_1000f83f
#define str_1000f83f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa53U)))
#undef str_1000f878
#define str_1000f878 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8cU)))
#undef str_1000f87f
#define str_1000f87f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa93U)))
#undef str_1000f8a4
#define str_1000f8a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab8U)))
#undef str_1000f8ae
#define str_1000f8ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xac2U)))
#undef str_1000f8e1
#define str_1000f8e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf5U)))
#undef str_1000fa16
#define str_1000fa16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2aU)))
#undef str_1000fa41
#define str_1000fa41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc55U)))
#undef str_1000fa74
#define str_1000fa74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc88U)))
#undef str_1000fa9f
#define str_1000fa9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb3U)))
#undef str_1000fabe
#define str_1000fabe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd2U)))
#undef str_1000faf5
#define str_1000faf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd09U)))
#undef str_1000fc39
#define str_1000fc39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4dU)))
#define iStack_b4 (*(int *)(pf_stack_frame + 828))
#define local_3d8 (*(int (*)[246])(pf_stack_frame + 24))
#define local_1d8 (*(undefined4 *)(pf_stack_frame + 536))
#define local_118 (*(char (*)[280])(pf_stack_frame + 728))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 824))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 832))
#define local_a8 (*(undefined1 (*)[168])(pf_stack_frame + 840))
#define local_98 (*(undefined4 *)(pf_stack_frame + 856))
#define local_50 (*(char * *)(pf_stack_frame + 928))
#define local_48 (*(char * *)(pf_stack_frame + 936))
#define local_40 (*(char * *)(pf_stack_frame + 944))
#define local_38 (*(char * *)(pf_stack_frame + 952))
#define stack0xffffffffffffff49 (*(uint64_t *)(pf_stack_frame + 825))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005160
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005160(char *param_1)

{
  unsigned char pf_stack_frame[1040] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  uint *puVar13;
  byte *pbVar14;
  char *pcVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 unaff_R13;
  ulong uVar18;
  char *pcVar19;
  bool bVar20;
  bool bVar21;

  if (param_1 == (char *)0x0) {
    return true;
  }
  **(undefined1 **)(param_1 + 0x460) = 0;
  if ((((param_1[0x43a] == '\x01') && (iVar5 = Ram0000000000280800, iVar5 == 0x50414d57)) &&
      (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
     (((uVar6 = Ram0000000000280808, 0xb < uVar6 && (uVar6 = Ram0000000000280808, 0x23f < uVar6)) &&
      ((code *)(ulong)_DAT_00280a3c != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00280a3c)();
  }
  if (DAT_10012108 == 0) {
    pcVar19 = *(char **)(param_1 + 0x450);
    uVar6 = 0;
    if (pcVar19 == (char *)0x0) {
      pcVar19 = (char *)0x0;
    }
    else {
      cVar3 = recovered_10008a90(pcVar19,((uintptr_t)pf_module_state + 0x63dU));
      if ((cVar3 != '\0') || (cVar3 = recovered_10008a90(pcVar19,((uintptr_t)pf_module_state + 0x646U)), cVar3 != '\0')) {
        pcVar19 = *(char **)(param_1 + 0x450);
        cVar3 = recovered_10008a90(pcVar19,((uintptr_t)pf_module_state + 0x63dU));
        uVar8 = 5;
        if (cVar3 == '\0') {
          cVar3 = recovered_10008a90(pcVar19,((uintptr_t)pf_module_state + 0x646U));
          uVar8 = 2;
          if (cVar3 == '\0') {
            cVar3 = recovered_10008a90(pcVar19,((uintptr_t)pf_module_state + 0x64bU));
            uVar8 = 3;
            if (cVar3 == '\0') {
              bVar4 = recovered_10008a90(pcVar19,((uintptr_t)pf_module_state + 0x650U));
              uVar8 = (uint)bVar4 * 3 + 1;
            }
          }
        }
        iVar5 = Ram0000000000280800;
        uVar6 = 0;
        if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
            (uVar7 = Ram0000000000280808, 0xb < uVar7)) &&
           (uVar7 = Ram0000000000280808, 0x93 < uVar7)) {
          uVar7 = UINT_00280890;
          if ((code *)(ulong)uVar7 != (code *)0x0) {
            uVar6 = (*(code *)(ulong)uVar7)(pcVar19,uVar8);
          }
        }
        goto LAB_10005ef4;
      }
      pcVar19 = *(char **)(param_1 + 0x450);
    }
    iVar5 = Ram0000000000280800;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
       ((uVar8 = Ram0000000000280808, 0xb < uVar8 && (uVar8 = Ram0000000000280808, 0x9b < uVar8))))
    {
      uVar8 = UINT_00280898;
      if ((code *)(ulong)uVar8 != (code *)0x0) {
        uVar6 = (*(code *)(ulong)uVar8)
                          (pcVar19,*(char **)(param_1 + 0x460),*(uint *)(param_1 + 0x468));
      }
    }
    goto LAB_10005ef4;
  }
  param_1[0x3dbc] = '\0';
  **(undefined1 **)(param_1 + 0x460) = 0;
  if ((*(int *)(param_1 + 0x378c) == 1) &&
     (iVar5 = strcmp(param_1 + 0x37a1,str_1000f4a2), iVar5 == 0)) {
    param_1[0x3e38] = '\0';
    param_1[0x3e39] = '\0';
    snprintf(param_1 + 0x3f58,0x80,str_1000f4aa);
    snprintf(param_1 + 0x4f0,0x80,&DAT_1000f3b9,param_1 + 0x3f58);
    param_1[0x38fc] = '\x01';
    param_1[0x38fd] = '\0';
    param_1[0x38fe] = '\0';
    param_1[0x38ff] = '\0';
    uVar6 = 1;
    goto LAB_10005ef4;
  }
  if (param_1[0x60b] == '\x01') {
    param_1[0x608] = '\0';
    param_1[0x609] = '\0';
    param_1[0x60a] = '\0';
    param_1[0x391d] = '\0';
LAB_10005392:
    pcVar19 = param_1 + 0x60a;
    pcVar15 = param_1 + 0x609;
    pcVar11 = param_1 + 0x391d;
    snprintf((char *)&local_1d8,0xc0,str_1000f710,*(uint *)param_1);
    iVar5 = Ram0000000000280800;
    uVar17 = (undefined4)CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
    if (iVar5 == 0x50414d57) {
      iVar5 = Ram0000000000280804;
      if (iVar5 != 0) {
        uVar6 = Ram0000000000280808;
        if (0xb < uVar6) {
          uVar6 = Ram0000000000280808;
          if (0x9b < uVar6) {
            uVar6 = UINT_00280898;
            if ((code *)(ulong)uVar6 != (code *)0x0) {
              uVar6 = (*(code *)(ulong)uVar6)((char *)&local_1d8,(char *)local_3d8,0x100);
              if (uVar6 != 0) {
                local_48 = pcVar11;
                local_40 = pcVar19;
                local_38 = pcVar15;
                uVar6 = recovered_10009f70((undefined4 *)param_1,str_1000f705);
                param_1[0x60c] = '\0';
                param_1[0x60d] = '\0';
                param_1[0x60e] = '\0';
                param_1[0x60f] = '\0';
                uVar18 = 0x10;
                if (uVar6 < 0x10) {
                  uVar18 = (ulong)uVar6;
                }
                if (uVar6 != 0) {
                  uVar8 = (uint)uVar18;
                  uVar18 = (ulong)-uVar8;
                  uVar6 = 1;
                  do {
                    snprintf(local_118,0x60,str_1000f747,uVar6);
                    uVar7 = recovered_10009f70((undefined4 *)param_1,local_118);
                    if (uVar7 != 0) {
                      uVar2 = *(uint *)(param_1 + 0x60c);
                      *(uint *)(param_1 + 0x60c) = uVar2 + 1;
                      *(uint *)(param_1 + (ulong)uVar2 * 4 + 0x61c) = uVar7;
                    }
                    bVar20 = uVar6 != uVar8;
                    uVar6 = uVar6 + 1;
                  } while (bVar20);
                }
                uVar17 = (undefined4)CONCAT71((int7)(uVar18 >> 8),1);
                pcVar11 = local_48;
                pcVar15 = local_38;
                pcVar19 = local_40;
                if ((*(int *)(param_1 + 0x3900) == 0) && (*(int *)(param_1 + 0x60c) != 0)) {
                  *(undefined4 *)(param_1 + 0x3900) = *(undefined4 *)(param_1 + 0x61c);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    param_1[0x608] = '\0';
    param_1[0x609] = '\0';
    pcVar19 = param_1 + 0x60a;
    param_1[0x60a] = '\0';
    pcVar15 = param_1 + 0x609;
    pcVar11 = param_1 + 0x391d;
    param_1[0x391d] = '\0';
    if (param_1[0x391e] == '\x01') goto LAB_10005392;
    uVar17 = 0;
  }
  uVar6 = *(uint *)(param_1 + 0x3900);
  if (uVar6 == 0) {
    snprintf(param_1 + 0x4f0,0x80,str_1000f750);
LAB_100056d8:
    if (param_1[0x60b] == '\0') {
LAB_10005ed6:
      (void)__atomic_exchange_n((uint32_t *)((unsigned char *)param_1 + 0x3fd8),0x0ULL,__ATOMIC_SEQ_CST);
      uVar6 = 0;
      if (*(int *)(param_1 + 0x378c) != 0) {
        param_1[0x38fc] = '\x02';
        param_1[0x38fd] = '\0';
        param_1[0x38fe] = '\0';
        param_1[0x38ff] = '\0';
      }
      goto LAB_10005ef4;
    }
    uVar6 = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x868) != uVar6) {
      *(uint *)(param_1 + 0x868) = uVar6;
      param_1[0x85c] = '\0';
      param_1[0x85d] = '\0';
      param_1[0x85e] = '\0';
      param_1[0x85f] = '\0';
      param_1[0x864] = '<';
      param_1[0x865] = '\0';
      param_1[0x866] = '\0';
      param_1[0x867] = '\0';
    }
    snprintf((char *)&local_1d8,0xc0,str_1000f76f,*(uint *)param_1,uVar6);
    iVar5 = Ram0000000000280800;
    if ((((iVar5 != 0x50414d57) || (iVar5 = Ram0000000000280804, iVar5 == 0)) ||
        (uVar6 = Ram0000000000280808, uVar6 < 0xc)) || (uVar6 = Ram0000000000280808, uVar6 < 0x9c))
    {
LAB_10005673:
      pcVar19 = strstr((char *)local_3d8,&DAT_1000f7a7);
      param_1[0x608] = pcVar19 != (char *)0x0;
      pcVar15 = str_1000f7c3;
      if (pcVar19 != (char *)0x0) {
        pcVar15 = str_1000f7ac;
      }
      snprintf(param_1 + 0x4f0,0x80,&DAT_1000f3b9,pcVar15);
      goto LAB_100056d8;
    }
    uVar6 = UINT_00280898;
    if (((code *)(ulong)uVar6 == (code *)0x0) ||
       (uVar6 = (*(code *)(ulong)uVar6)((char *)&local_1d8,(char *)local_3d8,0x100), uVar6 == 0))
    goto LAB_10005673;
    local_50 = (char *)CONCAT44(PF_PART4(local_50, 4),uVar17);
    bVar20 = false;
    local_48 = pcVar11;
    local_38 = pcVar15;
    snprintf(local_118,0x60,str_1000f7f3,*(uint *)param_1);
    PF_PART8(local_b8,0) = 0;
    local_b0 = 0;
    PF_PART16(local_a8,0) = (uint128)0x0;
    local_98 = 0;
    iVar5 = Ram0000000000280800;
    if (iVar5 == 0x50414d57) {
      iVar5 = Ram0000000000280804;
      if (((iVar5 != 0) && (uVar6 = Ram0000000000280808, 0xb < uVar6)) &&
         ((uVar6 = Ram0000000000280808, 0x207 < uVar6 &&
          (((code *)(ulong)_DAT_00280a04 != (code *)0x0 &&
           (iVar5 = (*(code *)(ulong)_DAT_00280a04)(local_118,&local_b8), iVar5 != 0)))))) {
        if ((local_b8 & 0xfffffffb) == 1) {
          bVar20 = iStack_b4 != 0;
          goto LAB_10005847;
        }
        if ((byte *)PF_PART8(local_a8, 0) != (byte *)0x0 && local_b8 == 3) {
          bVar20 = true;
          uVar6 = *(byte *)PF_PART8(local_a8, 0) - 0x54;
          if (((uVar6 < 0x26) && ((0x2100000021U >> ((ulong)uVar6 & 0x3f) & 1) != 0)) ||
             (*(byte *)PF_PART8(local_a8, 0) == 0x31)) goto LAB_10005847;
        }
      }
      bVar20 = false;
    }
LAB_10005847:
    param_1[0x609] = bVar20;
    bVar20 = false;
    snprintf(local_118,0x60,str_1000f80b,*(uint *)param_1);
    PF_PART8(local_b8,0) = 0;
    local_b0 = 0;
    PF_PART16(local_a8,0) = (uint128)0x0;
    local_98 = 0;
    iVar5 = Ram0000000000280800;
    if (iVar5 == 0x50414d57) {
      iVar5 = Ram0000000000280804;
      if (((iVar5 != 0) && (uVar6 = Ram0000000000280808, 0xb < uVar6)) &&
         ((uVar6 = Ram0000000000280808, 0x207 < uVar6 &&
          (((code *)(ulong)_DAT_00280a04 != (code *)0x0 &&
           (iVar5 = (*(code *)(ulong)_DAT_00280a04)(local_118,&local_b8), iVar5 != 0)))))) {
        if ((local_b8 & 0xfffffffb) == 1) {
          bVar20 = iStack_b4 != 0;
          goto LAB_10005953;
        }
        if ((byte *)PF_PART8(local_a8, 0) != (byte *)0x0 && local_b8 == 3) {
          bVar20 = true;
          uVar6 = *(byte *)PF_PART8(local_a8, 0) - 0x54;
          if (((uVar6 < 0x26) && ((0x2100000021U >> ((ulong)uVar6 & 0x3f) & 1) != 0)) ||
             (*(byte *)PF_PART8(local_a8, 0) == 0x31)) goto LAB_10005953;
        }
      }
      bVar20 = false;
    }
LAB_10005953:
    param_1[0x60a] = bVar20;
    local_40 = pcVar19;
    snprintf((char *)&local_b8,0x60,str_1000fc39,*(uint *)param_1,&DAT_1000f820);
    recovered_10008d90(&local_b8,param_1 + 0x570,0x28,&DAT_1000f1f9);
    uVar8 = recovered_10009f70((undefined4 *)param_1,str_1000f825);
    uVar6 = 8;
    if (uVar8 < 8) {
      uVar6 = uVar8;
    }
    *(uint *)(param_1 + 0x614) = uVar6;
    memset(param_1 + 0xa7c,0,8);
    if (*(int *)(param_1 + 0x614) != 0) {
      lVar16 = 0x86c;
      uVar18 = 0;
      do {
        snprintf(local_118,0x60,str_1000f82e,(uint)uVar18);
        snprintf((char *)&local_b8,0x60,str_1000fc39,*(uint *)param_1,local_118);
        recovered_10008d90(&local_b8,param_1 + lVar16,0x21,&DAT_1000f1f9);
        snprintf(local_118,0x60,str_1000f838,(uint)uVar18);
        uVar6 = recovered_10009f70((undefined4 *)param_1,local_118);
        param_1[uVar18 + 0xa7c] = (char)uVar6;
        uVar18 = uVar18 + 1;
        lVar16 = lVar16 + 0x21;
      } while (uVar18 < *(uint *)(param_1 + 0x614));
    }
    *local_48 = '\x01';
    if (((char)local_50 != '\0') ||
       (uVar6 = *(uint *)(param_1 + 0x864), *(uint *)(param_1 + 0x864) = uVar6 + 1, 0x3b < uVar6)) {
      param_1[0x864] = '\0';
      param_1[0x865] = '\0';
      param_1[0x866] = '\0';
      param_1[0x867] = '\0';
      snprintf((char *)&local_1d8,0xc0,str_1000f83f,*(uint *)param_1,
                         *(uint *)(param_1 + 0x3900));
      iVar5 = Ram0000000000280800;
      if (((iVar5 == 0x50414d57) &&
          ((iVar5 = Ram0000000000280804, iVar5 != 0 && (uVar6 = Ram0000000000280808, 0xb < uVar6))))
         && (uVar6 = Ram0000000000280808, 0x9b < uVar6)) {
        uVar6 = UINT_00280898;
        if (((code *)(ulong)uVar6 != (code *)0x0) &&
           (uVar6 = (*(code *)(ulong)uVar6)((char *)&local_1d8,(char *)local_3d8,0x100), uVar6 != 0)
           ) {
          uVar8 = recovered_10009f70((undefined4 *)param_1,str_1000f705);
          param_1[0x85c] = '\0';
          param_1[0x85d] = '\0';
          param_1[0x85e] = '\0';
          param_1[0x85f] = '\0';
          uVar6 = 0x40;
          if (uVar8 < 0x40) {
            uVar6 = uVar8;
          }
          if (uVar8 != 0) {
            uVar8 = 1;
            do {
              snprintf(local_118,0x60,str_1000f878,uVar8);
              uVar7 = recovered_10009f70((undefined4 *)param_1,local_118);
              if (uVar7 - 1 < 0xfffffffe) {
                uVar2 = *(uint *)(param_1 + 0x85c);
                *(uint *)(param_1 + 0x85c) = uVar2 + 1;
                *(uint *)(param_1 + (ulong)uVar2 * 4 + 0x65c) = uVar7;
              }
              bVar20 = uVar8 != uVar6;
              uVar8 = uVar8 + 1;
            } while (bVar20);
          }
        }
      }
    }
    pcVar15 = local_40;
    pcVar19 = param_1 + 0x4f0;
    if (param_1[0x609] == '\x01') {
      pcVar11 = str_1000f8ae;
      if (*local_40 != '\0') {
        pcVar11 = str_1000f8a4;
      }
    }
    else {
      pcVar11 = str_1000f87f;
    }
    snprintf(pcVar19,0x80,&DAT_1000f3b9,pcVar11);
    if ((param_1[0x3e38] == '\x01') && (*pcVar15 == '\x01')) {
      snprintf(pcVar19,0x80,str_1000f8e1,*(int *)(param_1 + 0x3e4c) + 1,
                         *(int *)(param_1 + 0x3e48) + 1);
    }
    else if ((param_1[0x3f58] != '\0') && (*pcVar15 == '\x01')) {
      snprintf(pcVar19,0x80,&DAT_1000f3b9,param_1 + 0x3f58);
    }
    if (*local_38 != '\x01') goto LAB_100056d8;
    uVar8 = *(uint *)(param_1 + 0x3900);
    if (param_1[0x60b] == '\0') {
      iVar5 = *(int *)(param_1 + 0x378c);
      if (param_1[0x60a] != 0) {
LAB_10005cde:
        if (iVar5 == 1) {
          param_1[0x38fc] = '\x03';
          param_1[0x38fd] = '\0';
          param_1[0x38fe] = '\0';
          param_1[0x38ff] = '\0';
          pcVar15 = param_1 + 0x37a1;
          if (param_1[0x37a1] != '$') {
            param_1[0x3f58] = '\0';
            bVar20 = recovered_100097b0((undefined4 *)param_1,uVar8,
                                        (ulong)*(uint *)(param_1 + 0x3904),
                                        (ulong)(-(uint)(*(uint *)(param_1 + 0x3908) == 0) |
                                               *(uint *)(param_1 + 0x3908)),(long)pcVar15);
            if (bVar20) {
              param_1[0x38fc] = '\x01';
              param_1[0x38fd] = '\0';
              param_1[0x38fe] = '\0';
              param_1[0x38ff] = '\0';
              snprintf(pcVar19,0x80,str_1000f575);
              uVar6 = 1;
            }
            else {
              uVar18 = recovered_10009710(*(undefined8 *)(param_1 + 0x460));
              *(uint *)(param_1 + 0x38fc) = (uint)uVar18 & 0xff ^ 3;
              if ((char)uVar18 == '\0') {
                pcVar15 = *(char **)(param_1 + 0x460);
              }
              else {
                pcVar15 = str_1000f54e;
              }
              uVar6 = 0;
              snprintf(pcVar19,0x80,&DAT_1000f3b9,pcVar15);
            }
            goto LAB_10005ef4;
          }
          if (param_1[0x3e38] == '\x01') {
            snprintf(pcVar19,0x80,str_1000fa16);
          }
          else {
            pcVar11 = param_1 + 0x37a0;
            do {
              local_48 = pcVar11;
              pcVar15 = pcVar15 + 1;
              pcVar11 = local_48 + 1;
            } while (local_48[2] == ' ');
            local_48 = local_48 + 2;
            local_40 = pcVar19;
            local_38 = param_1;
            local_50 = strstr(local_48,&DAT_1000fa3e);
            if (local_50 == (char *)0x0) {
              uVar18 = strlen(local_48);
            }
            else {
              uVar18 = (long)local_50 - (long)pcVar15;
            }
            pcVar19 = local_38 + 0x3e59;
            uVar10 = 0;
            do {
              if (uVar18 == uVar10) goto LAB_10006620;
              pcVar19 = pcVar19 + -1;
              uVar10 = uVar10 + 1;
              pcVar15 = pcVar11 + uVar18;
              pcVar11 = pcVar11 + -1;
            } while (*pcVar15 == ' ');
            if ((uVar18 - uVar10 < 0x7f) && (*(int *)(local_38 + 0x3908) != 0)) {
              pcVar15 = local_38 + 0x3e58;
              memcpy(pcVar15,local_48,(uVar18 - uVar10) + 1);
              pcVar19[uVar18] = '\0';
              pcVar19 = local_50 + 2;
              if (local_50 == (char *)0x0) {
                pcVar19 = pcVar15;
              }
              pcVar19 = pcVar19 + -1;
              do {
                pcVar11 = pcVar19;
                pcVar19 = pcVar11 + 1;
              } while (pcVar11[1] == ' ');
              uVar18 = strlen(pcVar19);
              if ((uVar18 - 0x80 < 0xffffffffffffff81) || (*pcVar19 != '/')) {
                pcVar19 = str_1000fa74;
              }
              else {
                if (uVar18 != 1) {
                  lVar16 = 0;
                  do {
                    bVar4 = pcVar11[lVar16 + 2];
                    if (((bVar4 < 0x20) || (bVar4 == 0x5c)) ||
                       ((bVar4 == 0x2e && (pcVar19[lVar16] == '.')))) {
                      pcVar19 = str_1000fa9f;
                      goto LAB_10006627;
                    }
                    lVar16 = lVar16 + 1;
                  } while (uVar18 - 1 != lVar16);
                }
                memcpy(local_38 + 0x3ed8,pcVar19,uVar18 + 1);
                local_3d8[2] = 0;
                local_3d8[0] = 0;
                local_3d8[1] = 0;
                iVar5 = Ram0000000000280800;
                if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
                    (uVar6 = Ram0000000000280808, 0xb < uVar6)) &&
                   (uVar6 = Ram0000000000280808, 0x37 < uVar6)) {
                  uVar6 = UINT_00280834;
                  if (((code *)(ulong)uVar6 != (code *)0x0) &&
                     (uVar6 = (*(code *)(ulong)uVar6)(pcVar15,local_3d8), uVar6 != 0)) {
                    if (((uint)local_3d8[1] < 0xffdd) && (local_3d8[1] == 0 || local_3d8[0] != 0)) {
                      *(undefined4 *)(local_38 + 0x3e3c) = *(undefined4 *)(local_38 + 0x3900);
                      *(ulong *)(local_38 + 0x3e40) =
                           CONCAT44((int)*(undefined8 *)(local_38 + 0x3904),
                                    (int)((ulong)*(undefined8 *)(local_38 + 0x3904) >> 0x20));
                      *(int *)(local_38 + 0x3e50) = local_3d8[1];
                      *(uint *)(local_38 + 0x3e48) = (local_3d8[1] + 99U) / 100;
                      local_38[0x3e4c] = '\0';
                      local_38[0x3e4d] = '\0';
                      local_38[0x3e4e] = '\0';
                      local_38[0x3e4f] = '\0';
                      local_38[0x3e38] = '\x01';
                      local_38[0x3e39] = '\0';
                      local_38[0x3f58] = '\0';
                      uVar9 = recovered_10009b10((undefined4 *)local_38);
                      param_1 = local_38;
                      if ((char)uVar9 != '\0') {
                        uVar6 = 1;
                        local_38[0x38fc] = '\x01';
                        local_38[0x38fd] = '\0';
                        local_38[0x38fe] = '\0';
                        local_38[0x38ff] = '\0';
                        goto LAB_10005ef4;
                      }
                      local_38[0x3e38] = '\0';
                      snprintf(local_40,0x80,str_1000faf5,*(void **)(local_38 + 0x460));
                      goto LAB_1000663b;
                    }
                  }
                }
                pcVar19 = str_1000fabe;
              }
            }
            else {
LAB_10006620:
              pcVar19 = str_1000fa41;
            }
LAB_10006627:
            snprintf(local_40,0x80,pcVar19);
            param_1 = local_38;
          }
LAB_1000663b:
          uVar18 = recovered_10009710(*(undefined8 *)(param_1 + 0x460));
          uVar6 = 0;
          *(uint *)(param_1 + 0x38fc) = (uint)uVar18 & 0xff ^ 3;
          goto LAB_10005ef4;
        }
        if (iVar5 == 2) goto LAB_10005dd4;
        if ((((param_1[0x3e38] == '\x01') && (param_1[0x3e39] == '\x01')) &&
            (0x1df < (uint)(*(int *)(param_1 + 0x390c) - *(int *)(param_1 + 0x3e54)))) &&
           (uVar9 = recovered_10009b10((undefined4 *)param_1), (char)uVar9 == '\0')) {
          param_1[0x3e39] = '\0';
          *(undefined4 *)(param_1 + 0x3e54) = *(undefined4 *)(param_1 + 0x390c);
          snprintf(pcVar19,0x80,str_1000f5a2,*(void **)(param_1 + 0x460));
        }
        if (((param_1[0x3e38] == '\x01') && (param_1[0x3e39] == '\0')) &&
           (0x3b < (uint)(*(int *)(param_1 + 0x390c) - *(int *)(param_1 + 0x3e54)))) {
          recovered_10009b10((undefined4 *)param_1);
        }
        puVar1 = (uint *)(param_1 + 0x39a0);
        uVar8 = *(uint *)(param_1 + 0x3900);
        uVar18 = 0;
        puVar13 = puVar1;
        do {
          if ((*puVar13 == 0) || (*puVar13 == uVar8)) goto LAB_1000608f;
          if ((puVar13[6] == 0) || (puVar13[6] == uVar8)) {
            uVar18 = uVar18 + 1;
            goto LAB_1000608f;
          }
          uVar18 = uVar18 + 2;
          puVar13 = puVar13 + 0xc;
        } while (uVar18 != 0x20);
        uVar18 = 0;
LAB_1000608f:
        puVar13 = puVar1 + (uVar18 & 0xffffffff) * 6;
        if (puVar1[(uVar18 & 0xffffffff) * 6] != uVar8) {
          memset(puVar13,0,0x18);
          puVar13[5] = 0x3c;
          uVar8 = *(uint *)(param_1 + 0x3900);
        }
        *puVar13 = uVar8;
        uVar6 = 0;
        snprintf((char *)local_3d8,0x200,str_1000f5ce,*(uint *)param_1,uVar8,puVar13[1],
                           puVar13[2]);
        pcVar15 = *(char **)(param_1 + 0x460);
        iVar5 = Ram0000000000280800;
        if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
            (uVar8 = Ram0000000000280808, 0xb < uVar8)) &&
           (uVar8 = Ram0000000000280808, 0x9b < uVar8)) {
          uVar8 = UINT_00280898;
          if ((code *)(ulong)uVar8 != (code *)0x0) {
            uVar8 = (*(code *)(ulong)uVar8)((char *)local_3d8,pcVar15,*(uint *)(param_1 + 0x468));
            if (uVar8 != 0) {
              uVar6 = recovered_10009f70((undefined4 *)param_1,str_1000f611);
              puVar13[1] = uVar6;
              uVar6 = recovered_10009f70((undefined4 *)param_1,str_1000f61a);
              puVar13[2] = uVar6;
              uVar6 = recovered_10009f70((undefined4 *)param_1,str_1000f622);
              if (uVar6 != 0) {
                snprintf(pcVar19,0x80,str_1000f62a);
              }
              uVar6 = recovered_10009f70((undefined4 *)param_1,&DAT_1000f662);
              if (uVar6 != 1) {
                uVar8 = *(uint *)(param_1 + 0x3900);
                if ((uVar8 < 0x40000000) &&
                   ((puVar13[3] < puVar13[4] ||
                    (uVar6 = puVar13[5], puVar13[5] = uVar6 + 1, 0x3b < uVar6)))) {
                  puVar13[5] = 0;
                  uVar6 = 0;
                  snprintf((char *)local_3d8,0x200,str_1000f6c6,*(uint *)param_1,uVar8,
                                     puVar13[3]);
                  uVar9 = recovered_100096c0();
                  if ((int)uVar9 == 0) goto LAB_10005ef4;
                  uVar6 = recovered_10009f70((undefined4 *)param_1,str_1000f705);
                  puVar13[4] = uVar6;
                  if (puVar13[3] < uVar6) {
                    puVar13[3] = puVar13[3] + 1;
                    bVar21 = false;
                    memset(param_1 + 0x3ca8,0,0x10c);
                    *(undefined4 *)(param_1 + 0x3ca8) = *(undefined4 *)(param_1 + 0x3900);
                    uVar6 = recovered_10009f70((undefined4 *)param_1,&DAT_1000f667);
                    *(uint *)(param_1 + 0x3cac) = uVar6;
                    uVar6 = recovered_10009f70((undefined4 *)param_1,&DAT_1000f66c);
                    *(uint *)(param_1 + 0x3cb0) = uVar6;
                    uVar6 = recovered_10009f70((undefined4 *)param_1,&DAT_1000f66f);
                    *(uint *)(param_1 + 0x3cb4) = uVar6;
                    uVar6 = recovered_10009f70((undefined4 *)param_1,str_1000f672);
                    *(uint *)(param_1 + 0x3cb8) = uVar6;
                    bVar20 = recovered_1000a360((undefined4 *)param_1);
                    param_1[0x3cbc] = bVar20;
                    recovered_1000a040((undefined4 *)param_1,&DAT_1000f67a,param_1 + 0x3cc4,0xf0);
                    if (*(int *)(param_1 + 0x3cb4) != 0) {
                      bVar21 = param_1[0x3cc4] != '\0';
                    }
                    param_1[0x3dbc] = bVar21;
                    uVar6 = 1;
                    goto LAB_10005ef4;
                  }
                }
                uVar6 = 1;
                goto LAB_10005ef4;
              }
              memset(param_1 + 0x3ca8,0,0x10c);
              *(undefined4 *)(param_1 + 0x3ca8) = *(undefined4 *)(param_1 + 0x3900);
              uVar6 = recovered_10009f70((undefined4 *)param_1,&DAT_1000f667);
              *(uint *)(param_1 + 0x3cac) = uVar6;
              uVar6 = recovered_10009f70((undefined4 *)param_1,&DAT_1000f66c);
              *(uint *)(param_1 + 0x3cb0) = uVar6;
              uVar6 = recovered_10009f70((undefined4 *)param_1,&DAT_1000f66f);
              *(uint *)(param_1 + 0x3cb4) = uVar6;
              uVar6 = recovered_10009f70((undefined4 *)param_1,str_1000f672);
              *(uint *)(param_1 + 0x3cb8) = uVar6;
              pcVar15 = param_1 + 0x3cc4;
              recovered_1000a040((undefined4 *)param_1,&DAT_1000f67a,pcVar15,0xf0);
              cVar3 = param_1[0x3cc4];
              if (cVar3 == '$') {
                uVar18 = strlen(pcVar15);
                uVar9 = recovered_1000a0a0(pcVar15,uVar18,&local_1d8,&local_b8,local_118);
                if ((char)uVar9 != '\0') {
                  if (((local_118[0] == '?') || (local_118[0] == '!')) &&
                     ((param_1[0x3e38] == '\x01' &&
                      ((((param_1[0x3e39] == '\x01' &&
                         (*(int *)(param_1 + 0x3cac) == *(int *)(param_1 + 0x3e40))) &&
                        (local_1d8 == *(uint *)(param_1 + 0x3e48))) &&
                       (local_b8 == *(uint *)(param_1 + 0x3e4c))))))) {
                    param_1[0x3e39] = '\0';
                    if (local_118[0] == '?') {
                      param_1[0x3e38] = '\0';
                      snprintf(param_1 + 0x3f58,0x80,str_1000f67f,local_b8 + 1);
                    }
                    else {
                      if (local_b8 != local_1d8) {
                        *(uint *)(param_1 + 0x3e4c) = local_b8 + 1;
                        recovered_10009b10((undefined4 *)param_1);
                        goto LAB_100068f2;
                      }
                      param_1[0x3e38] = '\0';
                      snprintf(param_1 + 0x3f58,0x80,str_1000f6b1,param_1 + 0x3ed8);
                    }
                    snprintf(pcVar19,0x80,&DAT_1000f3b9,param_1 + 0x3f58);
                  }
LAB_100068f2:
                  param_1[0x3dbc] = '\0';
                  uVar6 = 1;
                  goto LAB_10005ef4;
                }
                cVar3 = *pcVar15;
              }
              param_1[0x3dbc] = cVar3 != '\0';
              uVar6 = 1;
              goto LAB_10005ef4;
            }
            pcVar15 = *(char **)(param_1 + 0x460);
          }
        }
LAB_100063e2:
        snprintf(pcVar19,0x80,&DAT_1000f3b9,pcVar15);
        goto LAB_10005ef4;
      }
      if (iVar5 == 2) {
LAB_10005dd4:
        param_1[0x38fc] = '\x03';
        param_1[0x38fd] = '\0';
        param_1[0x38fe] = '\0';
        param_1[0x38ff] = '\0';
        PF_PART8(local_b8,0) = CONCAT71(stack0xffffffffffffff49,0x22);
        bVar4 = param_1[0x3891];
        lVar16 = 1;
        lVar12 = 1;
        if (bVar4 != 0) {
          pbVar14 = (byte *)(param_1 + 0x3892);
          do {
            uVar6 = 0;
            if ((bVar4 < 0x20) || (0x43 < lVar12 + 3U)) goto LAB_10005ef4;
            if ((bVar4 == 0x2f) || (bVar4 == 0x22)) {
              local_118[lVar12 + 0x60] = '/';
              lVar12 = lVar12 + 1;
            }
            local_118[lVar12 + 0x60] = bVar4;
            lVar12 = lVar12 + 1;
            bVar4 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (bVar4 != 0);
        }
        (local_118 + lVar12 + 0x60)[0] = '\"';
        (local_118 + lVar12 + 0x60)[1] = '\0';
        local_1d8 = CONCAT31(PF_PART3(local_1d8, 1),0x22);
        bVar4 = param_1[0x38b2];
        if (bVar4 != 0) {
          pbVar14 = (byte *)(param_1 + 0x38b3);
          lVar16 = 1;
          do {
            uVar6 = 0;
            if ((bVar4 < 0x20) || (0x83 < lVar16 + 3U)) goto LAB_10005ef4;
            if ((bVar4 == 0x2f) || (bVar4 == 0x22)) {
              *(undefined1 *)((long)local_3d8 + lVar16 + 0x200) = 0x2f;
              lVar16 = lVar16 + 1;
            }
            *(byte *)((long)local_3d8 + lVar16 + 0x200) = bVar4;
            lVar16 = lVar16 + 1;
            bVar4 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (bVar4 != 0);
        }
        *(undefined2 *)((long)local_3d8 + lVar16 + 0x200) = 0x22;
        pcVar15 = str_1000f414;
        if (param_1[0x37a0] != '\0') {
          pcVar15 = &DAT_1000f40f;
        }
        snprintf((char *)local_3d8,0x200,str_1000f4c3,*(uint *)param_1,uVar8,
                           *(uint *)(param_1 + 0x3798),&local_b8,&local_1d8,pcVar15);
        uVar9 = recovered_100096c0();
        if ((int)uVar9 == 0) {
          uVar18 = recovered_10009710(*(undefined8 *)(param_1 + 0x460));
          *(uint *)(param_1 + 0x38fc) = (uint)uVar18 & 0xff ^ 3;
          if ((char)uVar18 == '\0') {
            pcVar15 = *(char **)(param_1 + 0x460);
          }
          else {
            pcVar15 = str_1000f526;
          }
        }
        else {
          param_1[0x38fc] = '\x01';
          param_1[0x38fd] = '\0';
          param_1[0x38fe] = '\0';
          param_1[0x38ff] = '\0';
          pcVar15 = str_1000f50e;
        }
        uVar6 = (uint)((int)uVar9 != 0);
        goto LAB_100063e2;
      }
      if ((param_1[0x3fdc] & uVar8 < 0x40000000) != 0) goto LAB_10005cde;
      goto LAB_10005ed6;
    }
    uVar6 = (uint)(byte)(param_1[0x60a] | uVar8 < 0x40000000);
  }
  (void)__atomic_exchange_n(&(*(uint *)(param_1 + 0x3fd8)),uVar6,__ATOMIC_SEQ_CST);
  uVar6 = 1;
LAB_10005ef4:
  *(uint *)(param_1 + 0x448) = uVar6;
  (void)__atomic_exchange_n((uint32_t *)((unsigned char *)param_1 + 0x444),0x1ULL,__ATOMIC_SEQ_CST);
  return *(int *)(param_1 + 0x448) == 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_00280a3c
#undef DAT_1000f1f9
#undef DAT_1000f3b9
#undef DAT_1000f40f
#undef DAT_1000f662
#undef DAT_1000f667
#undef DAT_1000f66c
#undef DAT_1000f66f
#undef DAT_1000f67a
#undef DAT_1000f7a7
#undef DAT_1000f820
#undef DAT_1000fa3e
#undef DAT_10012108
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280834
#undef UINT_00280890
#undef UINT_00280898
#undef _DAT_00280a04
#undef _DAT_00280a3c
#undef str_1000f414
#undef str_1000f4a2
#undef str_1000f4aa
#undef str_1000f4c3
#undef str_1000f50e
#undef str_1000f526
#undef str_1000f54e
#undef str_1000f575
#undef str_1000f5a2
#undef str_1000f5ce
#undef str_1000f611
#undef str_1000f61a
#undef str_1000f622
#undef str_1000f62a
#undef str_1000f672
#undef str_1000f67f
#undef str_1000f6b1
#undef str_1000f6c6
#undef str_1000f705
#undef str_1000f710
#undef str_1000f747
#undef str_1000f750
#undef str_1000f76f
#undef str_1000f7ac
#undef str_1000f7c3
#undef str_1000f7f3
#undef str_1000f80b
#undef str_1000f825
#undef str_1000f82e
#undef str_1000f838
#undef str_1000f83f
#undef str_1000f878
#undef str_1000f87f
#undef str_1000f8a4
#undef str_1000f8ae
#undef str_1000f8e1
#undef str_1000fa16
#undef str_1000fa41
#undef str_1000fa74
#undef str_1000fa9f
#undef str_1000fabe
#undef str_1000faf5
#undef str_1000fc39
#undef iStack_b4
#undef local_3d8
#undef local_1d8
#undef local_118
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_98
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef stack0xffffffffffffff49

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006910
 */

void recovered_10006910(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint128 auVar18;
  uint128 auVar19;
  uint128 auVar20;

  auVar18 = recovered_10007d20(param_1);
  uVar9 = PF_PART8(auVar18, 0) & 0xffffffff00000000;
  lVar10 = uVar9 + 10;
  uVar7 = 0x120000000c;
  if (0x15 < PF_PART4(auVar18, 12) + -0x1e) {
    uVar7 = (PF_PART8(auVar18, 8) & 0xffffffff00000000) - 0x21fffffff4;
  }
  auVar19 = recovered_1000e590(param_1);
  uVar5 = PF_PART8(auVar19, 0);
  uVar1 = terror_ui_colour(0xb);
  auVar20 = recovered_10007d20(param_1);
  uVar6 = (PF_PART8(auVar20, 0) & 0xffffffff00000000) + PF_PART8(auVar20, 8) & 0xffffffff00000000;
  uVar11 = uVar6 - 0x1dfffffff6;
  lVar13 = uVar6 - 0xdfffffff6;
  if (*(char *)(param_1 + 0x355) == '\0') {
    uVar14 = uVar11 >> 0x20;
    uVar3 = PF_PART4(auVar18, 4);
    if ((int)uVar3 < (int)(uVar11 >> 0x20)) {
      uVar14 = (ulong)uVar3;
    }
    iVar2 = (int)((ulong)lVar13 >> 0x20) + 0xe;
    iVar8 = (int)(uVar7 >> 0x20) + uVar3;
    if (iVar8 < iVar2) {
      iVar8 = iVar2;
    }
    pf_app_terror_ui_scrollbar_capture((void *)(param_1 + 0x358),(void *)param_1,uVar14 << 0x20 | 10,
                       (ulong)(uint)(iVar8 - (int)uVar14) << 0x20 | 0xc);
  }
  uVar3 = 0x20;
  if (*(uint *)(param_1 + 0x350) < 0x20) {
    uVar3 = *(uint *)(param_1 + 0x350);
  }
  uVar12 = (uVar3 * -0x40 + 0xc00) * uVar3 * 0x20 * uVar3 * 0x20;
  uVar3 = uVar12 + 0x80000 >> 0x14;
  uVar15 = uVar3 * 10 + 0x200 >> 10;
  uVar14 = (ulong)uVar15;
  iVar8 = uVar15 + 2;
  uVar7 = uVar7 & 0xffffffff00000000;
  uVar15 = terror_ui_colour(5);
  recovered_1000e790(param_1,lVar10,uVar7 + uVar14 + 2,
                     (uVar15 & 0xff0000) >> 0x10 | uVar15 << 0x10 | uVar15 & 0xff00);
  uVar15 = terror_ui_colour(8);
  uVar15 = (uVar15 & 0xff0000) >> 0x10 | uVar15 << 0x10 | uVar15 & 0xff00;
  lVar16 = uVar14 + 0x100000002;
  recovered_1000e790(param_1,lVar10,lVar16,uVar15);
  recovered_1000e790(param_1,uVar7 + (uVar9 - 0xfffffff6),lVar16,uVar15);
  recovered_1000e790(param_1,lVar10,uVar7 | 1,uVar15);
  recovered_1000e790(param_1,uVar14 + uVar9 + 0xb,uVar7 | 1,uVar15);
  if (PF_PART8(auVar19, 8) >> 0x20 != 0) {
    uVar7 = PF_PART8(auVar19, 8) & 0xffffffff00000000;
    uVar15 = (uint)(0x337ffff < uVar12);
    uVar4 = terror_ui_colour(6);
    recovered_1000e790(param_1,CONCAT44(PF_PART4(auVar19, 4) + uVar15,
                                        (uint)(0x337ffff < uVar12) + PF_PART4(auVar19, 0)),
                       CONCAT44(PF_PART4(auVar19, 12) + uVar15 * -2,iVar8 + uVar15 * -2),
                       (uVar4 & 0xff0000) >> 0x10 | uVar4 << 0x10 | uVar4 & 0xff00);
    uVar15 = terror_ui_colour(9);
    uVar15 = (uVar15 & 0xff0000) >> 0x10 | uVar15 << 0x10 | uVar15 & 0xff00;
    recovered_1000e790(param_1,uVar5,lVar16,uVar15);
    recovered_1000e790(param_1,(uVar5 + uVar7 & 0xffffffff00000000) - 0x100000000 |
                               uVar5 & 0xffffffff,lVar16,uVar15);
    uVar7 = uVar7 | 1;
    recovered_1000e790(param_1,uVar5,uVar7,uVar15);
    recovered_1000e790(param_1,(ulong)((iVar8 + PF_PART4(auVar19, 0)) - 1) | uVar5 & 0xffffffff00000000,
                       uVar7,uVar15);
  }
  iVar8 = (uVar1 << 0x10 | uVar1 & 0xff00) + ((uVar1 & 0xff0000) >> 0x10);
  uVar1 = terror_ui_colour(7);
  recovered_1000e790(param_1,uVar11,uVar14 + 0xe00000002,
                     (uVar1 & 0xff0000) >> 0x10 | uVar1 << 0x10 | uVar1 & 0xff00);
  uVar1 = terror_ui_colour(10);
  uVar1 = (uVar1 & 0xff0000) >> 0x10 | uVar1 << 0x10 | uVar1 & 0xff00;
  recovered_1000e790(param_1,uVar11,lVar16,uVar1);
  recovered_1000e790(param_1,uVar6 - 0x10fffffff6,lVar16,uVar1);
  recovered_1000e790(param_1,uVar11,0xe00000001,uVar1);
  recovered_1000e790(param_1,uVar14 + 0xb | uVar6 - 0x1e00000000,0xe00000001,uVar1);
  uVar1 = uVar3 * 10 + 0x200 >> 10;
  uVar9 = (ulong)(uVar1 + 3 >> 1);
  uVar7 = 4;
  if (uVar9 < 4) {
    uVar7 = uVar9;
  }
  lVar17 = ((ulong)(uVar1 + 2 >> 1) | uVar6 - 0x1e00000000) + 0x30000000a;
  lVar10 = 0x100000001;
  do {
    recovered_1000e790(param_1,lVar17,lVar10,iVar8);
    lVar10 = lVar10 + 2;
    lVar17 = lVar17 + 0xffffffff;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  uVar1 = terror_ui_colour(7);
  recovered_1000e790(param_1,lVar13,uVar14 + 0xe00000002,
                     (uVar1 & 0xff0000) >> 0x10 | uVar1 << 0x10 | uVar1 & 0xff00);
  uVar1 = terror_ui_colour(10);
  uVar1 = (uVar1 & 0xff0000) >> 0x10 | uVar1 << 0x10 | uVar1 & 0xff00;
  recovered_1000e790(param_1,lVar13,lVar16,uVar1);
  recovered_1000e790(param_1,uVar6 - 0xfffffff6,lVar16,uVar1);
  recovered_1000e790(param_1,lVar13,0xe00000001,uVar1);
  recovered_1000e790(param_1,uVar14 + 0xb | uVar6 - 0xe00000000,0xe00000001,uVar1);
  uVar15 = (uVar3 * 10 + 0x200 >> 10) + 3 >> 1;
  uVar1 = 4;
  if (uVar15 < 4) {
    uVar1 = uVar15;
  }
  uVar7 = (ulong)(uVar1 * 2);
  uVar3 = uVar3 * 10 + 0x200 >> 10;
  uVar15 = uVar3 + 3 >> 1;
  uVar1 = 4;
  if (uVar15 < 4) {
    uVar1 = uVar15;
  }
  lVar10 = ((ulong)(((uVar3 + 2 >> 1) - uVar1) + 0xb) | uVar6 - 0xe00000000) + 0x500000000;
  do {
    uVar7 = uVar7 - 2;
    recovered_1000e790(param_1,lVar10,uVar7 & 0xffffffff | 0x100000001,iVar8);
    lVar10 = lVar10 + 0x100000001;
  } while (uVar7 != 0);
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff0
 */

ulong recovered_10006ff0(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong size;
  ulong unaff_RBX;
  ulong uVar6;
  bool bVar7;

  if ((param_1 != 0) && (param_2 != 0)) {
    uVar5 = *(ulong *)(param_1 + 0x458);
    if (uVar5 < param_2 || *(void **)(param_1 + 0x450) == (void *)0x0) {
      unaff_RBX = 0x40;
      if (uVar5 != 0) {
        unaff_RBX = uVar5;
      }
      if (unaff_RBX < param_2) {
        do {
          bVar7 = (long)unaff_RBX < 0;
          unaff_RBX = unaff_RBX * 2;
          if (bVar7) {
            unaff_RBX = param_2;
          }
        } while (unaff_RBX < param_2);
      }
      iVar2 = Ram0000000000280800;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
          (uVar3 = Ram0000000000280808, 0xb < uVar3)) && (uVar3 = Ram0000000000280808, 0x57 < uVar3)
         ) {
        uVar3 = UINT_00280854;
        if (((code *)(ulong)uVar3 != (code *)0x0) &&
           (puVar4 = (*(code *)(ulong)uVar3)(*(void **)(param_1 + 0x450),unaff_RBX),
           puVar4 != (undefined1 *)0x0)) {
          if (*(long *)(param_1 + 0x450) == 0) {
            *puVar4 = 0;
          }
          *(undefined1 **)(param_1 + 0x450) = puVar4;
          *(ulong *)(param_1 + 0x458) = unaff_RBX;
          goto LAB_100070f1;
        }
      }
    }
    else {
LAB_100070f1:
      uVar5 = 0x1000;
      if (0x1000 < param_2) {
        uVar5 = param_2;
      }
      if (0xfffffffe < uVar5) {
        uVar5 = 0xffffffff;
      }
      uVar1 = *(ulong *)(param_1 + 0x468);
      uVar6 = CONCAT71((int7)(unaff_RBX >> 8),1);
      if (uVar5 <= uVar1 && *(void **)(param_1 + 0x460) != (void *)0x0) goto LAB_100071e8;
      size = 0x40;
      if (uVar1 != 0) {
        size = uVar1;
      }
      if (size >> 0x20 != 0) {
        size = uVar5;
      }
      if (size < uVar5) {
        do {
          bVar7 = 0x7fffffff < size;
          size = size * 2;
          if (bVar7) {
            size = uVar5;
          }
        } while (size < uVar5);
      }
      iVar2 = Ram0000000000280800;
      if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
         ((uVar3 = Ram0000000000280808, 0xb < uVar3 && (uVar3 = Ram0000000000280808, 0x57 < uVar3)))
         ) {
        uVar3 = UINT_00280854;
        if (((code *)(ulong)uVar3 != (code *)0x0) &&
           (puVar4 = (*(code *)(ulong)uVar3)(*(void **)(param_1 + 0x460),size),
           puVar4 != (undefined1 *)0x0)) {
          if (*(long *)(param_1 + 0x460) == 0) {
            *puVar4 = 0;
          }
          *(undefined1 **)(param_1 + 0x460) = puVar4;
          *(ulong *)(param_1 + 0x468) = size;
          goto LAB_100071e8;
        }
      }
    }
  }
  uVar6 = 0;
LAB_100071e8:
  return uVar6 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280854

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007200
 */

void recovered_10007200(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x53 < uVar2)) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x3d8));
    }
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x53 < uVar2)))) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x450));
    }
  }
  iVar1 = Ram0000000000280800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x53 < uVar2)))) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x460));
    }
  }
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850

#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007330
 */

void recovered_10007330(long param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_1000f1f9;
  }
  uVar1 = strlen(param_2);
  recovered_10007480(param_1,(ulong)param_2,uVar1,'\0');
  return;
}

#undef DAT_1000f1f9

#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007370
 */

int recovered_10007370(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint128 auVar10;

  if (param_1 == 0) {
    uVar8 = 0;
    auVar10 = recovered_10007d20(0);
    iVar4 = PF_PART4(auVar10, 12);
  }
  else {
    uVar5 = recovered_100079a0(param_1);
    if ((char)uVar5 == '\0') {
      iVar4 = *(int *)(param_1 + 0x3f4);
      if ((long)iVar4 < 1) {
        uVar8 = 0;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x390);
        lVar7 = 0;
        uVar8 = 0;
        do {
          pcVar6 = &DAT_1000f1f9;
          if (lVar2 != 0) {
            pcVar6 = (char *)(*(long *)(param_1 + 0x398) + *(long *)(lVar2 + lVar7));
          }
          iVar3 = recovered_10007b90(param_1,pcVar6,*(ulong *)(lVar2 + 8 + lVar7));
          if ((int)(uVar8 ^ 0x7fffffff) < iVar3) {
            uVar8 = 0x7fffffff;
            break;
          }
          uVar8 = uVar8 + iVar3;
          lVar7 = lVar7 + 0x10;
        } while ((long)iVar4 * 0x10 != lVar7);
      }
    }
    else {
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x3f8) + (long)*(int *)(param_1 + 0x3f4) * 8);
      uVar9 = 0x7fffffff;
      if (uVar1 < 0x7fffffff) {
        uVar9 = uVar1;
      }
      uVar8 = (uint)uVar9;
    }
    auVar10 = recovered_10007d20(param_1);
    iVar4 = PF_PART4(auVar10, 12);
    iVar3 = *(int *)(param_1 + 0x3d4);
    if (0 < iVar3) goto LAB_10007444;
  }
  iVar3 = 10;
LAB_10007444:
  iVar4 = iVar4 / (iVar3 + 2);
  iVar3 = 1;
  if (1 < iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = 0;
  if (0 < (int)(uVar8 - iVar3)) {
    iVar4 = uVar8 - iVar3;
  }
  return iVar4;
}

#undef DAT_1000f1f9

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

ulong recovered_10007480(long param_1,ulong param_2,ulong param_3,char param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  void *dst;
  void *pvVar6;
  undefined1 *ptr;
  long lVar7;
  undefined7 uVar8;
  void *pvVar9;
  uint uVar10;
  long lVar11;
  byte bVar12;
  ulong unaff_R14;
  ulong uVar13;
  bool bVar14;

  if ((param_2 == 0 || param_1 == 0) ||
     (uVar5 = *(ulong *)(param_1 + 0x3a0), -uVar5 - 2 < param_3 || uVar5 == 0xffffffffffffffff)) {
    return 0;
  }
  uVar13 = *(ulong *)(param_1 + 0x398);
  if (param_2 - uVar13 < uVar5 && (uVar13 <= param_2 && uVar13 != 0)) {
    uVar5 = strlen((char *)param_2);
    if ((((uVar5 != 0xffffffffffffffff) && (iVar1 = Ram0000000000280800, iVar1 == 0x50414d57)) &&
        (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x4f < uVar2))))
    {
      uVar2 = UINT_0028084c;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        dst = (*(code *)(ulong)uVar2)(uVar5 + 1);
        if (dst != (void *)0x0) {
          memcpy(dst,(void *)param_2,uVar5 + 1);
          pvVar9 = dst;
          unaff_R14 = param_2;
          goto LAB_10007598;
        }
      }
    }
LAB_1000784d:
    uVar5 = 0;
  }
  else {
    dst = (void *)0x0;
    pvVar9 = (void *)param_2;
LAB_10007598:
    iVar1 = *(int *)(param_1 + 0x3f4);
    if ((long)iVar1 == 0x7fffffff) {
LAB_100077fe:
      iVar1 = Ram0000000000280800;
      if (((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000280804, iVar1 == 0)) ||
         ((uVar2 = Ram0000000000280808, uVar2 < 0xc || (uVar2 = Ram0000000000280808, uVar2 < 0x54)))
         ) goto LAB_1000784d;
      uVar2 = UINT_00280850;
      uVar13 = 0;
      uVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x3f0);
      if ((int)uVar2 <= iVar1) {
        uVar10 = 0x10;
        if (uVar2 != 0) {
          uVar10 = uVar2;
        }
        uVar5 = 0x7fffffff;
        if (uVar10 < 0x40000000) {
          uVar5 = (long)(int)uVar10 * 2;
        }
        unaff_R14 = 0x10;
        if (uVar2 != 0) {
          unaff_R14 = uVar5;
        }
        if (unaff_R14 < 0x80000000 && (ulong)(long)iVar1 < unaff_R14) {
          iVar1 = Ram0000000000280800;
          if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
             ((uVar2 = Ram0000000000280808, 0xb < uVar2 &&
              (uVar2 = Ram0000000000280808, 0x57 < uVar2)))) {
            uVar2 = UINT_00280854;
            if (((code *)(ulong)uVar2 != (code *)0x0) &&
               (pvVar6 = (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x390),unaff_R14 << 4),
               pvVar6 != (void *)0x0)) {
              *(void **)(param_1 + 0x390) = pvVar6;
              *(int *)(param_1 + 0x3f0) = (int)unaff_R14;
              goto LAB_100075bb;
            }
          }
        }
        goto LAB_100077fe;
      }
LAB_100075bb:
      lVar7 = *(long *)(param_1 + 0x3a0);
      uVar5 = lVar7 + param_3 + 1;
      if (uVar5 == 0) goto LAB_100077fe;
      ptr = *(undefined1 **)(param_1 + 0x398);
      uVar13 = *(ulong *)(param_1 + 0x3a8);
      if ((ptr == (undefined1 *)0x0) || (uVar13 < uVar5)) {
        unaff_R14 = 0x40;
        if (uVar13 != 0) {
          unaff_R14 = uVar13;
        }
        if (unaff_R14 < uVar5) {
          do {
            bVar14 = (long)unaff_R14 < 0;
            unaff_R14 = unaff_R14 * 2;
            if (bVar14) {
              unaff_R14 = uVar5;
            }
          } while (unaff_R14 < uVar5);
        }
        iVar1 = Ram0000000000280800;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
            (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
           (uVar2 = Ram0000000000280808, 0x57 < uVar2)) {
          uVar2 = UINT_00280854;
          if (((code *)(ulong)uVar2 != (code *)0x0) &&
             (ptr = (*(code *)(ulong)uVar2)(ptr,unaff_R14), ptr != (undefined1 *)0x0)) {
            if (*(long *)(param_1 + 0x398) == 0) {
              *ptr = 0;
            }
            *(undefined1 **)(param_1 + 0x398) = ptr;
            *(ulong *)(param_1 + 0x3a8) = unaff_R14;
            lVar7 = *(long *)(param_1 + 0x3a0);
            goto LAB_100075ef;
          }
        }
        goto LAB_100077fe;
      }
LAB_100075ef:
      iVar1 = *(int *)(param_1 + 0x3f4);
      if (param_3 == 0) {
        lVar11 = 0;
      }
      else {
        if (param_3 == 1) {
          uVar5 = 0;
          lVar11 = 0;
        }
        else {
          unaff_R14 = param_3 & 0xfffffffffffffffe;
          uVar5 = 0;
          lVar11 = 0;
          do {
            bVar12 = *(byte *)((long)pvVar9 + uVar5);
            if ((param_4 == '\0') || (bVar12 != 0xd)) {
              if (bVar12 < 0x21) {
                bVar12 = 0x20;
              }
              *(byte *)(lVar11 + *(long *)(param_1 + 0x398) + lVar7) = bVar12;
              lVar11 = lVar11 + 1;
            }
            bVar12 = *(byte *)((long)pvVar9 + uVar5 + 1);
            if ((param_4 == '\0') || (bVar12 != 0xd)) {
              if (bVar12 < 0x21) {
                bVar12 = 0x20;
              }
              *(byte *)(lVar11 + *(long *)(param_1 + 0x398) + lVar7) = bVar12;
              lVar11 = lVar11 + 1;
            }
            uVar5 = uVar5 + 2;
          } while (unaff_R14 != uVar5);
        }
        if (((param_3 & 1) != 0) &&
           ((bVar12 = *(byte *)((long)pvVar9 + uVar5), param_4 == '\0' || (bVar12 != 0xd)))) {
          bVar4 = 0x20;
          if (0x20 < bVar12) {
            bVar4 = bVar12;
          }
          *(byte *)(lVar11 + *(long *)(param_1 + 0x398) + lVar7) = bVar4;
          lVar11 = lVar11 + 1;
        }
        ptr = *(undefined1 **)(param_1 + 0x398);
      }
      ptr[lVar11 + lVar7] = 0;
      lVar3 = *(long *)(param_1 + 0x390);
      *(long *)(lVar3 + (long)iVar1 * 0x10) = lVar7;
      *(long *)(lVar3 + 8 + (long)iVar1 * 0x10) = lVar11;
      lVar7 = lVar11 + lVar7 + 1;
      *(long *)(param_1 + 0x3a0) = lVar7;
      *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
      *(undefined4 *)(param_1 + 0x428) = 0;
      if (iVar1 < *(int *)(param_1 + 0x408)) {
        *(int *)(param_1 + 0x408) = iVar1;
      }
      if (*(int *)(param_1 + 0x410) == iVar1) {
        *(undefined4 *)(param_1 + 0x410) = 0xffffffff;
      }
      iVar1 = Ram0000000000280800;
      uVar8 = (undefined7)((ulong)lVar7 >> 8);
      uVar5 = CONCAT71(uVar8,1);
      if (iVar1 != 0x50414d57) {
        return uVar5;
      }
      iVar1 = Ram0000000000280804;
      if (iVar1 == 0) {
        return uVar5;
      }
      uVar2 = Ram0000000000280808;
      if (uVar2 < 0xc) {
        return uVar5;
      }
      uVar2 = Ram0000000000280808;
      if (uVar2 < 0x54) {
        return uVar5;
      }
      uVar2 = UINT_00280850;
      uVar13 = CONCAT71((int7)(unaff_R14 >> 8),1);
      uVar5 = CONCAT71(uVar8,1);
    }
    if (uVar2 != 0) {
      (*(code *)(ulong)uVar2)(dst);
      uVar5 = uVar13 & 0xffffffff;
    }
  }
  return uVar5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280854

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079a0
 */

undefined8 recovered_100079a0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  char *pcVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint128 auVar15;

  if (*(long *)(param_1 + 0x390) == 0) {
    return 0;
  }
  uVar13 = (ulong)*(int *)(param_1 + 0x3f4);
  uVar1 = uVar13 + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar9 = *(ulong *)(param_1 + 0x400);
    if (uVar1 <= uVar9) {
LAB_10007a76:
      auVar15 = recovered_10007d20(param_1);
      iVar5 = 6;
      if (0 < *(int *)(param_1 + 0x3d0)) {
        iVar5 = *(int *)(param_1 + 0x3d0);
      }
      iVar5 = (PF_PART4(auVar15, 8) + -8) / iVar5;
      iVar7 = 1;
      if (1 < iVar5) {
        iVar7 = iVar5;
      }
      iVar5 = (int)uVar13;
      if ((iVar7 != *(int *)(param_1 + 0x40c)) || (iVar6 = *(int *)(param_1 + 0x408), iVar5 < iVar6)
         ) {
        *(undefined4 *)(param_1 + 0x408) = 0;
        *(int *)(param_1 + 0x40c) = iVar7;
        iVar6 = 0;
      }
      puVar2 = *(undefined8 **)(param_1 + 0x3f8);
      *puVar2 = 0;
      if (iVar6 < iVar5) {
        lVar3 = *(long *)(param_1 + 0x390);
        lVar12 = (long)iVar6;
        lVar14 = puVar2[lVar12];
        puVar11 = (ulong *)(lVar12 * 0x10 + lVar3 + 8);
        do {
          pcVar10 = &DAT_1000f1f9;
          if (-1 < lVar12 && lVar3 != 0) {
            pcVar10 = (char *)(*(long *)(param_1 + 0x398) + puVar11[-1]);
          }
          iVar7 = recovered_10007b90(param_1,pcVar10,*puVar11);
          lVar14 = lVar14 + iVar7;
          puVar2[lVar12 + 1] = lVar14;
          lVar12 = lVar12 + 1;
          puVar11 = puVar11 + 2;
        } while (iVar5 != lVar12);
      }
      *(int *)(param_1 + 0x408) = iVar5;
      return CONCAT71((int7)(uVar13 >> 8),1);
    }
    uVar13 = 0x10;
    if (uVar9 != 0) {
      uVar13 = uVar9;
    }
    do {
      uVar9 = uVar13;
      uVar13 = uVar9 * 2;
    } while (uVar9 < uVar1);
    iVar5 = Ram0000000000280800;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
        (uVar4 = Ram0000000000280808, 0xb < uVar4)) && (uVar4 = Ram0000000000280808, 0x57 < uVar4))
    {
      uVar4 = UINT_00280854;
      if (((code *)(ulong)uVar4 != (code *)0x0) &&
         (pvVar8 = (*(code *)(ulong)uVar4)(*(void **)(param_1 + 0x3f8),uVar9 * 8),
         pvVar8 != (void *)0x0)) {
        *(void **)(param_1 + 0x3f8) = pvVar8;
        *(ulong *)(param_1 + 0x400) = uVar9;
        uVar13 = (ulong)*(uint *)(param_1 + 0x3f4);
        goto LAB_10007a76;
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000f1f9
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b90
 */

int recovered_10007b90(long param_1,char *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint128 auVar11;

  auVar11 = recovered_10007d20(param_1);
  if (param_1 == 0) {
    iVar5 = 6;
  }
  else {
    iVar5 = 6;
    if (0 < *(int *)(param_1 + 0x3d0)) {
      iVar5 = *(int *)(param_1 + 0x3d0);
    }
  }
  uVar4 = (PF_PART4(auVar11, 8) + -8) / iVar5;
  iVar5 = 1;
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
LAB_10007d0b:
  }
  else {
    if (param_3 != 0) {
      iVar6 = 0;
      uVar7 = 0;
      do {
        uVar8 = param_3 - uVar7;
        if (uVar4 < uVar8) {
          uVar10 = 0xffffffff;
          uVar9 = 0;
          do {
            cVar1 = param_2[uVar9 + uVar7];
            if (cVar1 == '\0') break;
            if (cVar1 == '\t') {
              uVar10 = uVar9 & 0xffffffff;
            }
            if (cVar1 == ' ') {
              uVar10 = uVar9 & 0xffffffff;
            }
            uVar9 = uVar9 + 1;
          } while (uVar4 != uVar9);
          uVar3 = uVar4;
          if ((int)uVar10 < 1) {
            do {
              uVar10 = (ulong)uVar3;
              if (!SBORROW1('\0',param_2[uVar10 + uVar7] & 0xc0)) goto LAB_10007ca3;
              bVar2 = 1 < (int)uVar3;
              uVar3 = uVar3 - 1;
            } while (bVar2);
            uVar10 = (ulong)(uint)((int)param_3 - (int)uVar7);
            uVar9 = 1;
            do {
              if (!SBORROW1('\0',param_2[uVar9 + uVar7] & 0xc0)) {
                uVar10 = uVar9 & 0xffffffff;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar8 != uVar9);
            goto LAB_10007ca3;
          }
        }
        else {
          uVar10 = uVar8 & 0xffffffff;
LAB_10007ca3:
          if ((int)uVar10 < 1) goto LAB_10007cf9;
        }
        if (iVar6 == 0x7fffffff) {
          iVar5 = 0x7fffffff;
          goto LAB_10007d0b;
        }
        iVar6 = iVar6 + 1;
        uVar7 = uVar7 + uVar10;
        if (uVar7 < param_3) {
          while ((param_2[uVar7] == ' ' || (param_2[uVar7] == '\t'))) {
            uVar7 = uVar7 + 1;
            if (param_3 <= uVar7) goto LAB_10007cf9;
          }
        }
        if (param_3 <= uVar7) goto LAB_10007cf9;
      } while( true );
    }
    iVar6 = 0;
LAB_10007cf9:
    iVar5 = 1;
    if (1 < iVar6) {
      iVar5 = iVar6;
    }
  }
  return iVar5;
}


#undef DAT_10012108
#define DAT_10012108 (*(int *)(((uintptr_t)pf_module_state + 0x331cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d20
 */

uint128 recovered_10007d20(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint128 auVar12;

  if (param_1 == 0) {
    if (DAT_10012108 == 0) {
      uVar9 = 0x15e;
      uVar8 = 0x2dc;
      uVar6 = 0x12;
      uVar3 = 10;
    }
    else {
      uVar9 = 0x122;
      uVar8 = 0x208;
      uVar6 = 0xe4;
      uVar3 = 0x46;
    }
    goto LAB_10007e7c;
  }
  iVar10 = *(int *)(param_1 + 0x3d4);
  if (iVar10 < 1) {
    iVar4 = 0x16;
    iVar2 = 0x16;
    if (DAT_10012108 != 0) goto LAB_10007d3f;
LAB_10007dab:
    iVar4 = iVar2;
    bVar1 = true;
    uVar3 = 10;
  }
  else {
    iVar4 = iVar10 + 0xc;
    iVar2 = iVar4;
    if (DAT_10012108 == 0) goto LAB_10007dab;
LAB_10007d3f:
    iVar2 = 0x56;
    if (0 < iVar10) {
      iVar2 = iVar10 + 0x4c;
    }
    iVar7 = 0x18;
    if (0 < iVar10) {
      iVar7 = iVar10 * 2 + 4;
    }
    if (0x207 < *(int *)(param_1 + 4)) {
      iVar2 = 0x2e;
    }
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = 0x2e;
    }
    uVar3 = iVar2 + iVar7;
    bVar1 = false;
  }
  uVar8 = *(uint *)(param_1 + 4);
  uVar11 = 0x2dc;
  if (uVar8 != 0) {
    uVar11 = uVar8 - 0x1c;
  }
  iVar10 = 0x186;
  if (*(int *)(param_1 + 8) != 0) {
    iVar10 = *(int *)(param_1 + 8) + -10;
  }
  iVar10 = iVar10 - (iVar4 + uVar3);
  uVar6 = 0x12;
  if (!bVar1) {
    uVar11 = 0xb0;
    if (699 < uVar8) {
      uVar11 = 0xe4;
    }
    uVar5 = 0xc;
    if (0x207 < (int)uVar8) {
      uVar5 = uVar11;
    }
    uVar6 = (ulong)uVar5;
    if (uVar8 == 0) {
      uVar6 = 0xe4;
    }
    iVar4 = 0x2ec;
    if (uVar8 != 0) {
      iVar4 = uVar8 - 0xc;
    }
    uVar11 = iVar4 - (int)uVar6;
  }
  uVar5 = iVar10 - 8;
  uVar9 = (ulong)uVar5;
  iVar4 = *(int *)(param_1 + 0x3d4);
  uVar8 = 0xe;
  if (0 < *(int *)(param_1 + 0x3d0)) {
    uVar8 = *(int *)(param_1 + 0x3d0) + 8;
  }
  if ((int)uVar8 < (int)uVar11) {
    uVar8 = uVar11;
  }
  if (iVar4 < 1) {
    iVar4 = 10;
    if (0x17 < iVar10) goto LAB_10007e7c;
  }
  else if (iVar4 + 6 <= (int)uVar5) goto LAB_10007e7c;
  uVar9 = (ulong)(iVar4 + 6);
LAB_10007e7c:
  PF_PART8(auVar12, 0) = (ulong)uVar3 << 0x20 | uVar6;
  PF_PART8(auVar12, 8) = (ulong)uVar8 | uVar9 << 0x20;
  return auVar12;
}

#undef DAT_10012108

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1001210c
#define DAT_1001210c (*(uint *)(((uintptr_t)pf_module_state + 0x3320U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#undef str_1000f2be
#define str_1000f2be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d2U)))
#undef str_1000f2fa
#define str_1000f2fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50eU)))
#undef str_1000f326
#define str_1000f326 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53aU)))
#undef str_1000f35f
#define str_1000f35f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x573U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e90
 */

ulong recovered_10007e90(long param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  uint uVar7;
  char *arg2;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  long lVar11;

  if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
    uVar5 = 0;
    goto LAB_10007f6b;
  }
  uVar5 = strlen((char *)param_2);
  arg2 = str_1000f2be;
  if (uVar5 < 0xea) {
    bVar2 = *param_2;
    if (bVar2 == 0x24) {
LAB_10007f08:
      arg2 = str_1000f2fa;
      bVar9 = bVar2;
      pbVar8 = param_2;
      do {
        pbVar8 = pbVar8 + 1;
        if (bVar9 < 0x20) goto LAB_10007f56;
        bVar9 = *pbVar8;
      } while (bVar9 != 0);
      uVar7 = *(uint *)(param_1 + 0x38f4);
      if (uVar7 == 0x20) goto LAB_10007f4f;
      if (bVar2 == 0x24) {
LAB_10007f8e:
        *(uint *)(param_1 + 0x38f4) = uVar7 + 1;
        lVar11 = (ulong)uVar7 * 0x168;
        lVar1 = param_1 + lVar11;
        memset((void *)(lVar1 + 0xa8c),0,0x168);
        *(undefined4 *)(param_1 + 0xa8c + lVar11) = 1;
        iVar4 = *(int *)(param_1 + 0x38f8) + 1;
        *(int *)(param_1 + 0x38f8) = iVar4;
        *(int *)(param_1 + 0xa90 + lVar11) = iVar4;
        *(uint *)(param_1 + 0xa94 + lVar11) = DAT_1001210c;
        *(undefined4 *)(param_1 + 0xa98 + lVar11) = *(undefined4 *)(param_1 + 0x610);
        *(undefined4 *)(param_1 + 0xa9c + lVar11) = *(undefined4 *)(param_1 + 0x3e30);
        memcpy((void *)(param_1 + lVar11 + 0xaa1),param_2,uVar5 + 1);
        if (*param_2 != 0x24) {
          lVar11 = *(long *)(param_1 + 0x3ca0);
          uVar7 = *(uint *)(param_1 + 0x3db4);
          *(uint *)(param_1 + 0x3db4) = uVar7 + 1;
          lVar10 = (ulong)uVar7 * 0x10c;
          memset((void *)(lVar11 + lVar10),0,0x10c);
          *(undefined4 *)(lVar11 + lVar10) = *(undefined4 *)(lVar1 + 0xa94);
          *(undefined4 *)(lVar11 + 0x10 + lVar10) = *(undefined4 *)(lVar1 + 0xa98);
          *(uint *)(lVar11 + 8 + lVar10) =
               -(uint)(*(uint *)(lVar1 + 0xa9c) == 0) | *(uint *)(lVar1 + 0xa9c);
          *(undefined2 *)(lVar11 + 0x14 + lVar10) = 0x101;
          *(undefined4 *)(lVar11 + 0x18 + lVar10) = *(undefined4 *)(lVar1 + 0xa90);
          memcpy((void *)(lVar11 + lVar10 + 0x1c),param_2,uVar5 + 1);
        }
        *(undefined4 *)(param_1 + 0x618) = 0;
        *(undefined1 *)(param_1 + 0x3920) = 0;
        uVar5 = CONCAT71((int7)((ulong)param_2 >> 8),1);
        arg2 = str_1000f35f;
        goto LAB_10007f58;
      }
LAB_10007f7c:
      uVar3 = *(uint *)(param_1 + 0x3db8);
      if (*(uint *)(param_1 + 0x3db4) < uVar3) goto LAB_10007f8e;
      uVar7 = 0x80;
      if (uVar3 != 0) {
        uVar7 = uVar3 * 2;
      }
      arg2 = str_1000f326;
      if (uVar7 < 0x10001 && uVar3 <= uVar7) {
        iVar4 = Ram0000000000280800;
        if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
           ((uVar3 = Ram0000000000280808, 0xb < uVar3 && (uVar3 = Ram0000000000280808, 0x57 < uVar3)
            ))) {
          uVar3 = UINT_00280854;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            pvVar6 = (*(code *)(ulong)uVar3)(*(void **)(param_1 + 0x3ca0),(ulong)(uVar7 * 0x10c));
            if (pvVar6 == (void *)0x0) {
              uVar5 = 0;
              arg2 = str_1000f326;
              goto LAB_10007f58;
            }
            *(void **)(param_1 + 0x3ca0) = pvVar6;
            *(uint *)(param_1 + 0x3db8) = uVar7;
            uVar7 = *(uint *)(param_1 + 0x38f4);
            goto LAB_10007f8e;
          }
        }
      }
    }
    else {
      if (((0xdd < uVar5) && (*(int *)(param_1 + 0x3e30) != 0)) && (DAT_1001210c < 0x40000000))
      goto LAB_10007f56;
      if (bVar2 != 0) goto LAB_10007f08;
      uVar7 = *(uint *)(param_1 + 0x38f4);
      if (uVar7 != 0x20) goto LAB_10007f7c;
LAB_10007f4f:
      arg2 = str_1000f326;
    }
LAB_10007f56:
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
  }
LAB_10007f58:
  snprintf((char *)(param_1 + 0x470),0x80,arg2);
LAB_10007f6b:
  return uVar5 & 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1001210c
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280854
#undef str_1000f2be
#undef str_1000f2fa
#undef str_1000f326
#undef str_1000f35f

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_00280a44
#define DAT_00280a44 (*(uint8_t *)(0x280a44U))
#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef DAT_1000f3b9
#define DAT_1000f3b9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cdU)))
#undef DAT_1000f3f8
#define DAT_1000f3f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60cU)))
#undef DAT_1000f3fd
#define DAT_1000f3fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x611U)))
#undef DAT_1000f40c
#define DAT_1000f40c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x620U)))
#undef DAT_10012108
#define DAT_10012108 (*(int *)(((uintptr_t)pf_module_state + 0x331cU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef _DAT_00280a44
#define _DAT_00280a44 (*(uint *)(0x280a44U))
#undef str_1000f160
#define str_1000f160 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_1000f226
#define str_1000f226 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43aU)))
#undef str_1000f3bc
#define str_1000f3bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d0U)))
#undef str_1000f3d2
#define str_1000f3d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e6U)))
#undef str_1000f3e4
#define str_1000f3e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f8U)))
#undef str_1000f400
#define str_1000f400 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x614U)))
#define local_118 (*(byte * *)(pf_stack_frame + 168))
#define local_108 (*(undefined4 *)(pf_stack_frame + 184))
#define uStack_110 (*(undefined8 *)(pf_stack_frame + 176))
#define local_1a8 (*(char (*)[424])(pf_stack_frame + 24))
#define local_128 (*(undefined8 *)(pf_stack_frame + 152))
#define local_120 (*(undefined4 *)(pf_stack_frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100081a0(long param_1,ulong param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[480] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;
  char *arg3;
  undefined8 *puVar4;
  ulong n;

  if (param_1 == 0) {
    return;
  }
  arg3 = &DAT_1000f3fd;
  if (DAT_10012108 == 0) {
    iVar1 = Ram0000000000280800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
        (uVar3 = Ram0000000000280808, 0xb < uVar3)) &&
       ((uVar3 = Ram0000000000280808, 0x247 < uVar3 && ((code *)(ulong)_DAT_00280a44 != (code *)0x0)
        ))) {
      uVar2 = (*(code *)(ulong)_DAT_00280a44)();
      if ((uVar2 & 1) != 0) {
        if ((uVar2 & 2) == 0) {
          puVar4 = (undefined8 *)&DAT_1000f1f9;
          if (param_3 != (undefined8 *)0x0) {
            puVar4 = param_3;
          }
          snprintf((char *)param_1,param_2,&DAT_1000f3b9,puVar4);
          return;
        }
        if (param_3 == (undefined8 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = strlen((char *)param_3);
        }
        n = param_2 - 1;
        if (uVar2 < param_2) {
          n = uVar2;
        }
        memset((void *)param_1,0x2a,n);
        *(undefined1 *)(param_1 + n) = 0;
        return;
      }
      arg3 = &DAT_1000f3fd;
      if (DAT_10012108 != 0) goto LAB_10008364;
    }
    local_128 = 0;
    local_120 = 0;
    local_118 = (byte *)0x0;
    uStack_110 = 0;
    local_108 = 0;
    iVar1 = Ram0000000000280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
       ((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
        (((uVar3 = Ram0000000000280808, 0x207 < uVar3 &&
          ((code *)(ulong)_DAT_00280a04 != (code *)0x0)) &&
         (iVar1 = (*(code *)(ulong)_DAT_00280a04)(str_1000f226,&local_128), iVar1 != 0)))))) {
      if (((uint)local_128 & 0xfffffffb) == 1) {
        if (PF_PART4(local_128, 4) != 0) {
LAB_10008354:
          arg3 = str_1000f400;
          goto LAB_10008364;
        }
      }
      else if (local_118 != (byte *)0x0 && (uint)local_128 == 3) {
        uVar3 = *local_118 - 0x54;
        if (((uVar3 < 0x26) && ((0x2100000021U >> ((ulong)uVar3 & 0x3f) & 1) != 0)) ||
           (*local_118 == 0x31)) goto LAB_10008354;
      }
    }
    arg3 = &DAT_1000f40c;
  }
LAB_10008364:
  snprintf(local_1a8,0x80,&DAT_1000f3b9,arg3);
  if (DAT_10012108 == 0) {
    local_128 = 0;
    local_120 = 0;
    local_118 = (byte *)0x0;
    uStack_110 = 0;
    local_108 = 0;
    iVar1 = Ram0000000000280800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
       ((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
        (((uVar3 = Ram0000000000280808, 0x207 < uVar3 &&
          ((code *)(ulong)_DAT_00280a04 != (code *)0x0)) &&
         (iVar1 = (*(code *)(ulong)_DAT_00280a04)(str_1000f160,&local_128), iVar1 != 0)))))) {
      if (((uint)local_128 & 0xfffffffb) == 1) {
        if (PF_PART4(local_128, 4) != 0) {
LAB_10008476:
          recovered_10008d90(str_1000f3bc,local_1a8,0x80,str_1000f3d2);
          puVar4 = &local_128;
          recovered_10008d90(str_1000f3e4,(undefined1 *)puVar4,0x100,&DAT_1000f1f9);
          goto LAB_100084f1;
        }
      }
      else if (local_118 != (byte *)0x0 && (uint)local_128 == 3) {
        uVar3 = *local_118 - 0x54;
        if (((uVar3 < 0x26) && ((0x2100000021U >> ((ulong)uVar3 & 0x3f) & 1) != 0)) ||
           (*local_118 == 0x31)) goto LAB_10008476;
      }
    }
  }
  puVar4 = (undefined8 *)&DAT_1000f1f9;
  if (param_3 != (undefined8 *)0x0) {
    puVar4 = param_3;
  }
LAB_100084f1:
  snprintf((char *)param_1,param_2,&DAT_1000f3f8,local_1a8,puVar4);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_00280a44
#undef DAT_1000f1f9
#undef DAT_1000f3b9
#undef DAT_1000f3f8
#undef DAT_1000f3fd
#undef DAT_1000f40c
#undef DAT_10012108
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef _DAT_00280a04
#undef _DAT_00280a44
#undef str_1000f160
#undef str_1000f226
#undef str_1000f3bc
#undef str_1000f3d2
#undef str_1000f3e4
#undef str_1000f400
#undef local_118
#undef local_108
#undef uStack_110
#undef local_1a8
#undef local_128
#undef local_120

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#define local_38 (*(byte * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008540
 */

void recovered_10008540(long param_1,byte *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *ptr;
  long lVar5;
  long lVar6;
  ulong size;
  long lVar7;
  byte bVar8;
  long lVar9;
  bool bVar10;

  if (param_1 == 0) {
    return;
  }
  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x390) == 0) {
    return;
  }
  pbVar1 = *(byte **)(param_1 + 0x398);
  if ((param_2 < pbVar1 || pbVar1 == (byte *)0x0) ||
     (*(ulong *)(param_1 + 0x3a0) <= (ulong)((long)param_2 - (long)pbVar1))) {
    local_38 = (byte *)0x0;
  }
  else {
    uVar4 = strlen((char *)param_2);
    if (uVar4 == 0xffffffffffffffff) {
      return;
    }
    iVar3 = Ram0000000000280800;
    if (iVar3 != 0x50414d57) {
      return;
    }
    iVar3 = Ram0000000000280804;
    if (iVar3 == 0) {
      return;
    }
    uVar2 = Ram0000000000280808;
    if (uVar2 < 0xc) {
      return;
    }
    uVar2 = Ram0000000000280808;
    if (uVar2 < 0x50) {
      return;
    }
    uVar2 = UINT_0028084c;
    if ((code *)(ulong)uVar2 == (code *)0x0) {
      return;
    }
    local_38 = (*(code *)(ulong)uVar2)(uVar4 + 1);
    if (local_38 == (byte *)0x0) {
      return;
    }
    memcpy(local_38,param_2,uVar4 + 1);
    param_2 = local_38;
  }
LAB_10008653:
  bVar8 = *param_2;
  switch((uintptr_t)(bVar8)) {
  case 0:
    goto switchD_10008668_caseD_0;
  default:
    if (bVar8 < 0x21) {
      bVar8 = 0x20;
    }
    if (*(int *)(param_1 + 0x428) == 0) {
      uVar4 = strlen(&DAT_1000f1f9);
      uVar4 = recovered_10007480(param_1,((uintptr_t)pf_module_state + 0x40dU),uVar4,'\0');
      if ((char)uVar4 == '\0') goto switchD_10008668_caseD_0;
      *(undefined4 *)(param_1 + 0x428) = 1;
    }
    uVar4 = *(ulong *)(param_1 + 0x3a0);
    if (uVar4 == 0xffffffffffffffff) goto switchD_10008668_caseD_0;
    lVar9 = (long)*(int *)(param_1 + 0x3f4) * 0x10 + *(long *)(param_1 + 0x390);
    ptr = *(undefined1 **)(param_1 + 0x398);
    size = *(ulong *)(param_1 + 0x3a8);
    if (size <= uVar4 || ptr == (undefined1 *)0x0) {
      if (size == 0) {
        size = 0x40;
      }
      if (size <= uVar4) {
        do {
          bVar10 = (long)size < 0;
          size = size * 2;
          if (bVar10) {
            size = uVar4 + 1;
          }
        } while (size <= uVar4);
      }
      iVar3 = Ram0000000000280800;
      if ((((iVar3 != 0x50414d57) || (iVar3 = Ram0000000000280804, iVar3 == 0)) ||
          (uVar2 = Ram0000000000280808, uVar2 < 0xc)) || (uVar2 = Ram0000000000280808, uVar2 < 0x58)
         ) goto switchD_10008668_caseD_0;
      uVar2 = UINT_00280854;
      if (((code *)(ulong)uVar2 == (code *)0x0) ||
         (ptr = (*(code *)(ulong)uVar2)(ptr,size), ptr == (undefined1 *)0x0))
      goto switchD_10008668_caseD_0;
      if (*(long *)(param_1 + 0x398) == 0) {
        *ptr = 0;
      }
      *(undefined1 **)(param_1 + 0x398) = ptr;
      *(ulong *)(param_1 + 0x3a8) = size;
    }
    lVar5 = *(long *)(lVar9 + -0x10);
    lVar7 = *(long *)(lVar9 + -8);
    *(long *)(lVar9 + -8) = lVar7 + 1;
    ptr[lVar7 + lVar5] = bVar8;
    ptr[*(long *)(lVar9 + -8) + lVar5] = 0;
    lVar5 = *(long *)(lVar9 + -0x10) + *(long *)(lVar9 + -8);
LAB_100088ad:
    *(long *)(param_1 + 0x3a0) = lVar5 + 1;
    iVar3 = *(int *)(param_1 + 0x3f4) + -1;
    if (*(int *)(param_1 + 0x3f4) <= *(int *)(param_1 + 0x408)) {
      *(int *)(param_1 + 0x408) = iVar3;
    }
    if (*(int *)(param_1 + 0x410) == iVar3) {
      *(undefined4 *)(param_1 + 0x410) = 0xffffffff;
    }
    break;
  case 8:
    if ((*(int *)(param_1 + 0x428) != 0) && (0 < (long)*(int *)(param_1 + 0x3f4))) {
      lVar7 = (long)*(int *)(param_1 + 0x3f4) * 0x10;
      lVar9 = *(long *)(param_1 + 0x390);
      lVar5 = *(long *)(lVar9 + -8 + lVar7);
      if (lVar5 != 0) {
        lVar6 = *(long *)(param_1 + 0x398) + *(long *)(lVar9 + -0x10 + lVar7);
        do {
          lVar5 = lVar5 + -1;
          if (lVar5 == 0) break;
        } while (SBORROW1('\0',*(byte *)(lVar6 + lVar5) & 0xc0));
        *(undefined1 *)(lVar6 + lVar5) = 0;
        *(long *)(lVar9 + lVar7 + -8) = lVar5;
        lVar5 = *(long *)(lVar9 + lVar7 + -0x10) + lVar5;
        goto LAB_100088ad;
      }
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x428) != 0) goto LAB_10008717;
    uVar4 = strlen(&DAT_1000f1f9);
    uVar4 = recovered_10007480(param_1,((uintptr_t)pf_module_state + 0x40dU),uVar4,'\0');
    if ((char)uVar4 == '\0') goto switchD_10008668_caseD_0;
LAB_10008717:
    *(undefined4 *)(param_1 + 0x428) = 0;
    param_2 = param_2 + 1;
    goto LAB_10008653;
  case 0xd:
    break;
  }
  param_2 = param_2 + 1;
  goto LAB_10008653;
switchD_10008668_caseD_0:
  iVar3 = Ram0000000000280800;
  if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000280804, iVar3 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x53 < uVar2)))) {
    uVar2 = UINT_00280850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10008934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(local_38);
      return;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000f1f9
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280854
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008980
 */

undefined1 recovered_10008980(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined1 uVar2;

  if (param_1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = recovered_10008a90(param_1,((uintptr_t)pf_module_state + 0x63dU));
    uVar2 = 1;
    if (cVar1 == '\0') {
      uVar2 = recovered_10008a90(param_1,((uintptr_t)pf_module_state + 0x646U));
      return uVar2;
    }
  }
  return uVar2;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280890
#define UINT_00280890 (*(uint *)(0x280890U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089c0
 */

undefined8 recovered_100089c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_var = 0;
  uint in_ESI;
  char *in_RDI;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x93 < uVar2)) {
    uVar2 = UINT_00280890;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10008a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(in_RDI,in_ESI);
      return CONCAT44(extraout_var,uVar2);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280890

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a10
 */

int recovered_10008a10(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  int iVar3;

  cVar1 = recovered_10008a90(param_1,((uintptr_t)pf_module_state + 0x63dU));
  iVar3 = 5;
  if (cVar1 == '\0') {
    cVar1 = recovered_10008a90(param_1,((uintptr_t)pf_module_state + 0x646U));
    iVar3 = 2;
    if (cVar1 == '\0') {
      cVar1 = recovered_10008a90(param_1,((uintptr_t)pf_module_state + 0x64bU));
      iVar3 = 3;
      if (cVar1 == '\0') {
        bVar2 = recovered_10008a90(param_1,((uintptr_t)pf_module_state + 0x650U));
        iVar3 = (uint)bVar2 * 3 + 1;
      }
    }
  }
  return iVar3;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a20
#define _DAT_00280a20 (*(uint *)(0x280a20U))
#define local_128 (*(char (*)[296])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 recovered_10008a90(char *param_1,long param_2)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  long lVar8;
  byte bVar9;
  char *pcVar10;
  byte bVar11;
  ulong uVar12;
  bool bVar13;

  if (param_2 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  uVar4 = strlen(param_1);
  if (uVar4 == 0) {
    strlen((char *)param_2);
    return 0;
  }
  if ((param_1[uVar4 - 1] != '>') || (*param_1 != '[')) goto LAB_10008d0b;
  uVar6 = 0;
  for (lVar5 = 1; (cVar7 = param_1[lVar5], cVar7 != '\0' && (cVar7 != ']')); lVar5 = lVar5 + 1) {
    if (uVar6 + 1 < 0x80) {
      local_128[uVar6] = cVar7;
      uVar6 = uVar6 + 1;
    }
  }
  local_128[uVar6] = '\0';
  if ((cVar7 == ']') && (lVar5 + 1U < 0x82)) {
    pcVar10 = local_128;
    if (local_128[0] == '[') {
      pcVar10 = local_128 + 1;
    }
    uVar12 = 0;
    for (uVar6 = 3; (cVar7 = pcVar10[uVar6 - 3], cVar7 != '\0' && (cVar7 != ']')); uVar6 = uVar6 + 4
        ) {
      local_128[uVar6 + 0x7d] = cVar7;
      cVar7 = pcVar10[uVar6 - 2];
      if ((cVar7 == '\0') || (cVar7 == ']')) {
        uVar6 = uVar6 - 2;
        goto LAB_10008bed;
      }
      local_128[uVar6 + 0x7e] = cVar7;
      cVar7 = pcVar10[uVar6 - 1];
      if ((cVar7 == '\0') || (cVar7 == ']')) {
        uVar6 = uVar6 - 1;
        goto LAB_10008bed;
      }
      local_128[uVar6 + 0x7f] = cVar7;
      cVar7 = pcVar10[uVar6];
      if ((cVar7 == '\0') || (cVar7 == ']')) goto LAB_10008bed;
      if (uVar6 == 0x7f) {
        uVar6 = uVar12 | 3;
        goto LAB_10008bed;
      }
      uVar12 = uVar12 + 4;
      local_128[uVar6 + 0x80] = cVar7;
    }
    uVar6 = uVar6 - 3;
LAB_10008bed:
    local_128[uVar6 + 0x80] = '\0';
    if (local_128[0] == '[') {
      if (cVar7 != ']') goto LAB_10008d08;
      cVar7 = local_128[uVar6 + 2];
    }
    if ((cVar7 == '\0') && (local_128[0x80] != 0)) {
      lVar5 = 1;
      lVar8 = 0;
      uVar6 = 1;
      do {
        if (lVar5 == 0x80) goto LAB_10008d08;
        if (local_128[0x80] == 0x5c) {
          if ((lVar8 == 0) || (uVar6 = uVar6 + 1, 6 < uVar6)) goto LAB_10008d08;
          lVar8 = 0;
        }
        else {
          if ((((9 < (byte)(local_128[0x80] - 0x30U)) &&
               (0x19 < (byte)((local_128[0x80] & 0xdfU) + 0xbf))) && (local_128[0x80] != 0x5f)) &&
             (local_128[0x80] != 0x2d)) goto LAB_10008d08;
          lVar8 = lVar8 + 1;
        }
        local_128[0x80] = local_128[lVar5 + 0x80];
        lVar5 = lVar5 + 1;
      } while (local_128[0x80] != 0);
      if (((1 < uVar6 && lVar8 != 0) && (iVar2 = Ram0000000000280800, iVar2 == 0x50414d57)) &&
         ((iVar2 = Ram0000000000280804, iVar2 != 0 &&
          (((uVar3 = Ram0000000000280808, 0xb < uVar3 &&
            (uVar3 = Ram0000000000280808, 0x223 < uVar3)) && (_DAT_00280a20 != 0)))))) {
        (*(code *)(ulong)_DAT_00280a20)(0xfffffffe,local_128 + 0x80,0x80);
      }
    }
  }
LAB_10008d08:
  uVar4 = uVar4 - 1;
LAB_10008d0b:
  uVar6 = strlen((char *)param_2);
  if (uVar4 <= uVar6 - 1) {
    return 0;
  }
  uVar12 = 0;
  while( true ) {
    bVar1 = param_1[uVar12 + (uVar4 - uVar6)];
    bVar9 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar9 = bVar1;
    }
    bVar1 = *(byte *)(param_2 + uVar12);
    bVar11 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar11 = bVar1;
    }
    if (bVar9 != bVar11) break;
    bVar13 = uVar6 - 1 == uVar12;
    uVar12 = uVar12 + 1;
    if (bVar13) {
      return 1;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef _DAT_00280a20
#undef local_128

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef DAT_1000f40f
#define DAT_1000f40f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x623U)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef str_1000f414
#define str_1000f414 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x628U)))
#define local_48 (*(undefined8 *)(pf_stack_frame + 40))
#define local_40 (*(undefined4 *)(pf_stack_frame + 48))
#define local_38 (*(long *)(pf_stack_frame + 56))
#define local_28 (*(undefined4 *)(pf_stack_frame + 72))
#define abStack_55 (*(byte (*)[85])(pf_stack_frame + 27))
#define uStack_30 (*(undefined8 *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008d90(undefined8 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;

  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar6 = Ram0000000000280808, 0xb < uVar6)) &&
     ((uVar6 = Ram0000000000280808, 0x207 < uVar6 && ((code *)(ulong)_DAT_00280a04 != (code *)0x0)))
     ) {
    iVar1 = (*(code *)(ulong)_DAT_00280a04)(param_1,&local_48);
    if ((local_38 != 0 && (int)local_48 == 3) && iVar1 != 0) {
      if (param_3 < 2) {
        *param_2 = 0;
        return;
      }
      uVar5 = (ulong)(param_3 - 1);
      uVar2 = 0;
      do {
        if (*(char *)(local_38 + uVar2) == '\0') {
          uVar5 = uVar2 & 0xffffffff;
          break;
        }
        param_2[uVar2] = *(char *)(local_38 + uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar5 != uVar2);
      param_2[uVar5] = 0;
      return;
    }
    if ((int)local_48 == 1 && iVar1 != 0) {
      uVar6 = -PF_PART4(local_48, 4);
      if ((int)-PF_PART4(local_48, 4) < 0) {
        uVar6 = PF_PART4(local_48, 4);
      }
      uVar2 = 0;
      do {
        abStack_55[uVar2 + 1] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
        uVar5 = uVar2 + 1;
        if (10 < uVar2) break;
        bVar9 = 9 < uVar6;
        uVar2 = uVar5;
        uVar6 = uVar6 / 10;
      } while (bVar9);
      bVar9 = local_48 < 0;
      if (bVar9) {
        *param_2 = 0x2d;
      }
      uVar2 = (ulong)bVar9;
      if (bVar9 + 1 < param_3) {
        uVar7 = uVar2;
        do {
          param_2[uVar7] = abStack_55[uVar5];
          uVar2 = uVar7 + 1;
          if (uVar5 - 1 == 0) break;
          uVar8 = uVar7 + 2;
          uVar7 = uVar2;
          uVar5 = uVar5 - 1;
        } while (uVar8 < param_3);
      }
      param_2[uVar2 & 0xffffffff] = 0;
      return;
    }
    if ((int)local_48 != 5 || iVar1 == 0) goto LAB_10008f84;
    pcVar3 = &DAT_1000f40f;
    if (PF_PART4(local_48, 4) == 0) {
      pcVar3 = str_1000f414;
    }
    if (1 < param_3) {
      uVar2 = (ulong)(param_3 - 1);
      uVar5 = 0;
      do {
        if (pcVar3[uVar5] == '\0') goto LAB_10008fb9;
        param_2[uVar5] = pcVar3[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
      goto LAB_10008fbd;
    }
  }
  else {
LAB_10008f84:
    puVar4 = &DAT_1000f1f9;
    if (param_4 != (undefined1 *)0x0) {
      puVar4 = param_4;
    }
    if (1 < param_3) {
      uVar2 = (ulong)(param_3 - 1);
      uVar5 = 0;
      do {
        if (puVar4[uVar5] == '\0') goto LAB_10008fb9;
        param_2[uVar5] = puVar4[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
      goto LAB_10008fbd;
    }
  }
  uVar2 = 0;
LAB_10008fbd:
  param_2[uVar2] = 0;
  return;
LAB_10008fb9:
  uVar2 = uVar5 & 0xffffffff;
  goto LAB_10008fbd;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_1000f1f9
#undef DAT_1000f40f
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef _DAT_00280a04
#undef str_1000f414
#undef local_48
#undef local_40
#undef local_38
#undef local_28
#undef abStack_55
#undef uStack_30

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280980
#define UINT_00280980 (*(uint *)(0x280980U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fe0
 */

undefined8 recovered_10008fe0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 extraout_var = 0;
  int iVar5;
  int iVar6;
  char *text;
  uint128 auVar7;

  if (param_1 == 0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x3bc);
  iVar1 = *(int *)(param_1 + 0x3c0);
  auVar7 = recovered_10007d20(param_1);
  iVar6 = PF_PART4(auVar7, 4);
  if ((iVar5 < PF_PART4(auVar7, 0) + PF_PART4(auVar7, 8) && (iVar6 <= iVar1 && PF_PART4(auVar7, 0) <= iVar5)) &&
     (iVar1 < PF_PART4(auVar7, 12) + iVar6)) {
    iVar5 = 0xc;
    if (0 < *(int *)(param_1 + 0x3d4)) {
      iVar5 = *(int *)(param_1 + 0x3d4) + 2;
    }
    uVar4 = (long)((iVar1 - iVar6) + -2) / (long)iVar5;
    uVar3 = uVar4 & 0xffffffff;
    if ((int)uVar4 < 1) {
      uVar3 = 0;
    }
    uVar4 = recovered_10009570(param_1,(long)*(int *)(param_1 + 0x42c) + uVar3,(undefined4 *)0x0);
    if ((int)uVar4 < 0) goto LAB_100090af;
    text = &DAT_1000f1f9;
    if (((*(long *)(param_1 + 0x390) == 0) || (*(int *)(param_1 + 0x3f4) <= (int)uVar4)) ||
       (text = (char *)(*(long *)(param_1 + 0x398) +
                       *(long *)(*(long *)(param_1 + 0x390) + (uVar4 & 0xffffffff) * 0x10)),
       text != (char *)0x0)) goto LAB_100090bb;
LAB_100090aa:
    text = (char *)0x0;
  }
  else {
LAB_100090af:
    text = *(char **)(param_1 + 0x3d8);
    if (text == (char *)0x0) goto LAB_100090aa;
LAB_100090bb:
    if (*text != '\0') goto LAB_100090f5;
  }
  if (0 < (long)*(int *)(param_1 + 0x3f4)) {
    if (*(long *)(param_1 + 0x390) == 0) {
      text = &DAT_1000f1f9;
    }
    else {
      text = (char *)(*(long *)(param_1 + 0x398) +
                     *(long *)(*(long *)(param_1 + 0x390) + -0x10 +
                              (long)*(int *)(param_1 + 0x3f4) * 0x10));
    }
  }
LAB_100090f5:
  uVar4 = strlen(text);
  iVar5 = Ram0000000000280800;
  if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000280804, iVar5 != 0)) &&
     ((uVar2 = Ram0000000000280808, 0xb < uVar2 && (uVar2 = Ram0000000000280808, 0x183 < uVar2)))) {
    uVar2 = UINT_00280980;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      uVar2 = (*(code *)(ulong)uVar2)(text,(uint)uVar4);
      if (uVar2 != 0) {
        *(undefined1 *)(param_1 + 0x438) = 1;
        return CONCAT71((int7)(CONCAT44(extraout_var,uVar2) >> 8),1);
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_1000f1f9
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280980

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_0028084c
#define UINT_0028084c (*(uint *)(0x28084cU))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280854
#define UINT_00280854 (*(uint *)(0x280854U))
#undef UINT_00280984
#define UINT_00280984 (*(uint *)(0x280984U))
#undef UINT_00280988
#define UINT_00280988 (*(uint *)(0x280988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009160
 */

undefined8 recovered_10009160(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  byte *outText;
  ulong size;
  undefined1 *ptr;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  bool bVar13;

  iVar2 = Ram0000000000280800;
  if (iVar2 != 0x50414d57) {
    return 0;
  }
  iVar2 = Ram0000000000280804;
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = Ram0000000000280808;
  if (uVar3 < 0xc) {
    return 0;
  }
  uVar3 = Ram0000000000280808;
  if (uVar3 < 0x18c) {
    return 0;
  }
  uVar3 = UINT_00280988;
  if ((code *)(ulong)uVar3 == (code *)0x0) {
    return 0;
  }
  uVar3 = (*(code *)(ulong)uVar3)();
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = uVar3 + 1;
  if (uVar3 < 2) {
    return 0;
  }
  uVar10 = *(ulong *)(param_1 + 0x3e0);
  iVar2 = Ram0000000000280800;
  if (iVar2 != 0x50414d57) {
    return 0;
  }
  iVar2 = Ram0000000000280804;
  if (iVar2 == 0) {
    return 0;
  }
  uVar11 = Ram0000000000280808;
  if (uVar11 < 0xc) {
    return 0;
  }
  uVar11 = Ram0000000000280808;
  if (uVar11 < 0x50) {
    return 0;
  }
  uVar11 = UINT_0028084c;
  if ((code *)(ulong)uVar11 == (code *)0x0) {
    return 0;
  }
  outText = (*(code *)(ulong)uVar11)((ulong)uVar3);
  if (outText == (byte *)0x0) {
    return 0;
  }
  iVar2 = Ram0000000000280800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
      (uVar11 = Ram0000000000280808, 0xb < uVar11)) &&
     (uVar11 = Ram0000000000280808, 0x187 < uVar11)) {
    uVar9 = UINT_00280984;
    uVar11 = 0;
    if (((code *)(ulong)uVar9 != (code *)0x0) &&
       (uVar3 = (*(code *)(ulong)uVar9)((char *)outText,uVar3), uVar3 != 0)) {
      lVar8 = -1;
      uVar11 = 1;
      do {
        uVar9 = uVar11;
        if (uVar3 == uVar9) {
          bVar6 = *outText;
          break;
        }
        bVar6 = outText[lVar8 + (ulong)uVar3 & 0xffffffff];
        lVar8 = lVar8 + -1;
        uVar11 = uVar9 + 1;
      } while (SBORROW1('\0',bVar6 & 0xc0));
      uVar7 = 4;
      if ((4 < (byte)(bVar6 + 0x10)) && (uVar7 = 3, (bVar6 & 0xf0) != 0xe0)) {
        uVar7 = ((byte)(bVar6 + 0x3e) < 0x1e) + 1;
      }
      uVar11 = uVar3;
      if (uVar9 < uVar7) {
        uVar11 = uVar3 - uVar9;
      }
    }
  }
  else {
    *outText = 0;
    uVar11 = 0;
  }
  uVar12 = (ulong)uVar11;
  if ((uVar10 <= -uVar12 - 2) && (uVar4 = uVar10 + uVar12 + 1, uVar4 != 0)) {
    ptr = *(undefined1 **)(param_1 + 0x3d8);
    uVar1 = *(ulong *)(param_1 + 1000);
    if ((ptr != (undefined1 *)0x0) && (uVar4 <= uVar1)) {
joined_r0x100094a4:
      if (uVar12 == 0) {
        bVar13 = false;
      }
      else {
        uVar4 = 0;
        bVar13 = false;
        do {
          bVar6 = outText[uVar4];
          bVar5 = 0x20;
          if ((bVar6 & 0xfb) != 9) {
            bVar5 = bVar6;
          }
          if (bVar6 == 10) {
            bVar5 = 0x20;
          }
          if (bVar5 != 0x7f && 0x1f < bVar5) {
            *(byte *)(*(long *)(param_1 + 0x3d8) + uVar10) = bVar5;
            uVar10 = uVar10 + 1;
            bVar13 = true;
          }
          uVar4 = uVar4 + 1;
        } while (uVar12 != uVar4);
        ptr = *(undefined1 **)(param_1 + 0x3d8);
      }
      ptr[uVar10] = 0;
      *(ulong *)(param_1 + 0x3e0) = uVar10;
      uVar3 = Ram0000000000280800;
      uVar10 = (ulong)uVar3;
      if ((uVar3 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) {
        uVar3 = Ram0000000000280808;
        uVar10 = (ulong)uVar3;
        if (0xb < uVar3) {
          uVar3 = Ram0000000000280808;
          uVar10 = (ulong)uVar3;
          if (0x53 < uVar3) {
            uVar3 = UINT_00280850;
            uVar10 = 0;
            if ((code *)(ulong)uVar3 != (code *)0x0) {
              uVar10 = (*(code *)(ulong)uVar3)(outText);
            }
          }
        }
      }
      if (!bVar13) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x438) = 1;
      return CONCAT71((int7)(uVar10 >> 8),1);
    }
    size = 0x40;
    if (uVar1 != 0) {
      size = uVar1;
    }
    if (size < uVar4) {
      do {
        bVar13 = (long)size < 0;
        size = size * 2;
        if (bVar13) {
          size = uVar4;
        }
      } while (size < uVar4);
    }
    iVar2 = Ram0000000000280800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
        (uVar3 = Ram0000000000280808, 0xb < uVar3)) && (uVar3 = Ram0000000000280808, 0x57 < uVar3))
    {
      uVar3 = UINT_00280854;
      if (((code *)(ulong)uVar3 != (code *)0x0) &&
         (ptr = (*(code *)(ulong)uVar3)(ptr,size), ptr != (undefined1 *)0x0)) {
        if (*(long *)(param_1 + 0x3d8) == 0) {
          *ptr = 0;
        }
        *(undefined1 **)(param_1 + 0x3d8) = ptr;
        *(ulong *)(param_1 + 1000) = size;
        goto joined_r0x100094a4;
      }
    }
  }
  iVar2 = Ram0000000000280800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
      (uVar3 = Ram0000000000280808, 0xb < uVar3)) && (uVar3 = Ram0000000000280808, 0x53 < uVar3)) {
    uVar3 = UINT_00280850;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      (*(code *)(ulong)uVar3)(outText);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_0028084c
#undef UINT_00280850
#undef UINT_00280854
#undef UINT_00280984
#undef UINT_00280988

#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009570
 */

ulong recovered_10009570(long param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  ulong uVar10;

  uVar10 = 0xffffffff;
  if (-1 < (long)param_2 && param_1 != 0) {
    uVar3 = recovered_100079a0(param_1);
    uVar1 = *(uint *)(param_1 + 0x3f4);
    if ((char)uVar3 == '\0') {
      if (0 < (int)uVar1) {
        lVar2 = *(long *)(param_1 + 0x390);
        puVar6 = (ulong *)(lVar2 + 8);
        uVar10 = 0;
        do {
          pcVar8 = &DAT_1000f1f9;
          if (lVar2 != 0) {
            pcVar8 = (char *)(*(long *)(param_1 + 0x398) + puVar6[-1]);
          }
          iVar5 = recovered_10007b90(param_1,pcVar8,*puVar6);
          if ((long)param_2 < (long)iVar5) {
            if (param_3 != (undefined4 *)0x0) goto LAB_100096a4;
            goto LAB_100096a7;
          }
          uVar10 = uVar10 + 1;
          puVar6 = puVar6 + 2;
          param_2 = param_2 - (long)iVar5;
        } while (uVar1 != uVar10);
        uVar10 = 0xffffffff;
      }
    }
    else {
      if ((int)uVar1 < 1) {
        uVar10 = 0;
        if (uVar1 == 0) {
          return 0xffffffff;
        }
      }
      else {
        uVar10 = 0;
        uVar4 = uVar1;
        do {
          while( true ) {
            iVar9 = (int)uVar10;
            iVar5 = (int)(uVar4 - iVar9) / 2;
            uVar7 = iVar5 + iVar9;
            if (*(ulong *)(*(long *)(param_1 + 0x3f8) + 8 + (long)(int)uVar7 * 8) <= param_2) break;
            uVar4 = uVar7;
            if ((int)uVar7 <= iVar9) goto LAB_100095fe;
          }
          uVar7 = iVar9 + iVar5 + 1;
          uVar10 = (ulong)uVar7;
        } while ((int)uVar7 < (int)uVar4);
LAB_100095fe:
        if ((uint)uVar10 == uVar1) {
          return 0xffffffff;
        }
      }
      if (param_3 != (undefined4 *)0x0) {
        param_2 = param_2 - *(long *)(*(long *)(param_1 + 0x3f8) + (long)(int)uVar10 * 8);
LAB_100096a4:
        *param_3 = (int)param_2;
      }
LAB_100096a7:
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  return uVar10;
}

#undef DAT_1000f1f9

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280898
#define UINT_00280898 (*(uint *)(0x280898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096c0
 */

undefined8 recovered_100096c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_var = 0;
  uint in_EDX;
  char *in_RSI;
  char *in_RDI;

  iVar1 = Ram0000000000280800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000280804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000280808, 0xb < uVar2)) && (uVar2 = Ram0000000000280808, 0x9b < uVar2)) {
    uVar2 = UINT_00280898;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10009703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(in_RDI,in_RSI,in_EDX);
      return CONCAT44(extraout_var,uVar2);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280898

#undef str_1000f911
#define str_1000f911 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb25U)))
#undef str_1000f924
#define str_1000f924 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb38U)))
#undef str_1000f955
#define str_1000f955 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb69U)))
#undef str_1000f971
#define str_1000f971 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb85U)))
#undef str_1000f993
#define str_1000f993 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba7U)))
#undef str_1000f9c1
#define str_1000f9c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd5U)))
#undef str_1000fa02
#define str_1000fa02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009710
 */

ulong recovered_10009710(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulong uVar2;

  pcVar1 = strstr(param_1,str_1000f911);
  uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(param_1,str_1000f924);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(param_1,str_1000f955);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = strstr(param_1,str_1000f971);
        if (pcVar1 == (char *)0x0) {
          pcVar1 = strstr(param_1,str_1000f993);
          if (pcVar1 == (char *)0x0) {
            pcVar1 = strstr(param_1,str_1000f9c1);
            if (pcVar1 == (char *)0x0) {
              pcVar1 = strstr(param_1,str_1000fa02);
              uVar2 = CONCAT71(uVar3,pcVar1 != (char *)0x0);
            }
          }
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}

#undef str_1000f911
#undef str_1000f924
#undef str_1000f955
#undef str_1000f971
#undef str_1000f993
#undef str_1000f9c1
#undef str_1000fa02

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280898
#define UINT_00280898 (*(uint *)(0x280898U))
#undef str_1000fb1d
#define str_1000fb1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd31U)))
#undef str_1000fb53
#define str_1000fb53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd67U)))
#undef str_1000fb9d
#define str_1000fb9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb1U)))
#define local_4a8 (*(char (*)[1192])(pf_stack_frame + 24))
#define local_2a8 (*(byte (*)[680])(pf_stack_frame + 536))
#define local_c8 (*(byte (*)[200])(pf_stack_frame + 1016))
#define local_48 (*(ulong *)(pf_stack_frame + 1144))
#define local_40 (*(ulong *)(pf_stack_frame + 1152))
#define local_34 (*(uint *)(pf_stack_frame + 1164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097b0
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_100097b0(undefined4 *param_1,uint param_2,ulong param_3,ulong param_4,long param_5)

{
  unsigned char pf_stack_frame[1248] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  byte *pbVar6;
  ulong n;

  local_34 = param_2;
  uVar3 = strlen((char *)param_5);
  if (0xffffffffffffff16 < uVar3 - 0xea) {
    n = 0x78;
    if (uVar3 < 0x78) {
      n = uVar3;
    }
    local_48 = param_3 & 0xffffffff;
    memcpy(local_c8,(void *)param_5,n);
    local_c8[n] = 0;
    local_2a8[0] = 0x22;
    local_40 = param_4 & 0xffffffff;
    lVar4 = 1;
    if (local_c8[0] != 0) {
      pbVar6 = local_c8;
      do {
        pbVar6 = pbVar6 + 1;
        if (local_c8[0] < 0x20) {
          return false;
        }
        if (0x1d7 < lVar4 + 3U) {
          return false;
        }
        if ((local_c8[0] == 0x2f) || (local_c8[0] == 0x22)) {
          local_2a8[lVar4] = 0x2f;
          lVar4 = lVar4 + 1;
        }
        local_2a8[lVar4] = local_c8[0];
        lVar4 = lVar4 + 1;
        local_c8[0] = *pbVar6;
      } while (local_c8[0] != 0);
    }
    (local_2a8 + lVar4)[0] = 0x22;
    (local_2a8 + lVar4)[1] = 0;
    snprintf(local_4a8,0x200,str_1000fb1d,*param_1,local_2a8);
    iVar1 = Ram0000000000280800;
    if (iVar1 != 0x50414d57) {
      return false;
    }
    iVar1 = Ram0000000000280804;
    if (((iVar1 != 0) && (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
       (uVar2 = Ram0000000000280808, 0x9b < uVar2)) {
      uVar2 = UINT_00280898;
      if (((code *)(ulong)uVar2 != (code *)0x0) &&
         (uVar2 = (*(code *)(ulong)uVar2)(local_4a8,*(char **)(param_1 + 0x118),param_1[0x11a]),
         uVar2 != 0)) {
        if (0x78 < uVar3) {
          local_2a8[0] = 0x22;
          bVar5 = *(byte *)(param_5 + n);
          if (bVar5 == 0) {
            lVar4 = 1;
          }
          else {
            pbVar6 = (byte *)(n + param_5);
            lVar4 = 1;
            do {
              pbVar6 = pbVar6 + 1;
              if (bVar5 < 0x20) {
                return false;
              }
              if (0x1d7 < lVar4 + 3U) {
                return false;
              }
              if ((bVar5 == 0x2f) || (bVar5 == 0x22)) {
                local_2a8[lVar4] = 0x2f;
                lVar4 = lVar4 + 1;
              }
              local_2a8[lVar4] = bVar5;
              lVar4 = lVar4 + 1;
              bVar5 = *pbVar6;
            } while (bVar5 != 0);
          }
          (local_2a8 + lVar4)[0] = 0x22;
          (local_2a8 + lVar4)[1] = 0;
          snprintf(local_4a8,0x200,str_1000fb53,*param_1,*param_1,local_2a8);
          iVar1 = Ram0000000000280800;
          if (iVar1 != 0x50414d57) {
            return false;
          }
          iVar1 = Ram0000000000280804;
          if (iVar1 == 0) {
            return false;
          }
          uVar2 = Ram0000000000280808;
          if (uVar2 < 0xc) {
            return false;
          }
          uVar2 = Ram0000000000280808;
          if (uVar2 < 0x9c) {
            return false;
          }
          uVar2 = UINT_00280898;
          if ((code *)(ulong)uVar2 == (code *)0x0) {
            return false;
          }
          uVar2 = (*(code *)(ulong)uVar2)(local_4a8,*(char **)(param_1 + 0x118),param_1[0x11a]);
          if (uVar2 == 0) {
            return false;
          }
        }
        snprintf(local_4a8,0x200,str_1000fb9d,*param_1,local_34,*param_1,(uint)local_48,
                           (uint)local_40);
        iVar1 = Ram0000000000280800;
        if (iVar1 != 0x50414d57) {
          return false;
        }
        iVar1 = Ram0000000000280804;
        if (((iVar1 != 0) && (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
           (uVar2 = Ram0000000000280808, 0x9b < uVar2)) {
          uVar2 = UINT_00280898;
          if ((code *)(ulong)uVar2 != (code *)0x0) {
            uVar2 = (*(code *)(ulong)uVar2)(local_4a8,*(char **)(param_1 + 0x118),param_1[0x11a]);
            return uVar2 != 0;
          }
        }
      }
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280898
#undef str_1000fb1d
#undef str_1000fb53
#undef str_1000fb9d
#undef local_4a8
#undef local_2a8
#undef local_c8
#undef local_48
#undef local_40
#undef local_34

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280834
#define UINT_00280834 (*(uint *)(0x280834U))
#undef str_1000fbf0
#define str_1000fbf0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe04U)))
#undef str_1000fc28
#define str_1000fc28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe3cU)))
#define local_118 (*(undefined1 *)(pf_stack_frame + 24))
#define local_117 (*(char *)(pf_stack_frame + 25))
#define local_116 (*(char *)(pf_stack_frame + 26))
#define local_115 (*(char *)(pf_stack_frame + 27))
#define local_114 (*(char *)(pf_stack_frame + 28))
#define local_113 (*(char *)(pf_stack_frame + 29))
#define local_112 (*(char *)(pf_stack_frame + 30))
#define local_111 (*(char *)(pf_stack_frame + 31))
#define local_110 (*(char *)(pf_stack_frame + 32))
#define local_10f (*(char *)(pf_stack_frame + 33))
#define local_10e (*(char *)(pf_stack_frame + 34))
#define acStack_109 (*(char (*)[265])(pf_stack_frame + 39))
#define local_10d (*(char *)(pf_stack_frame + 35))
#define local_10c (*(char *)(pf_stack_frame + 36))
#define local_10b (*(undefined2 *)(pf_stack_frame + 37))
#define local_28 (*(undefined8 *)(pf_stack_frame + 264))
#define local_20 (*(undefined4 *)(pf_stack_frame + 272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b10
 */

undefined8 recovered_10009b10(undefined4 *param_1)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 extraout_var = 0;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;

  uVar4 = param_1[0xf92];
  uVar1 = param_1[0xf93];
  if (0xffffff < (uVar1 | uVar4)) {
    return 0;
  }
  local_118 = 0x24;
  local_117 = str_1000fc28[uVar4 >> 0x14];
  local_116 = str_1000fc28[uVar4 >> 0x10 & 0xf];
  local_115 = str_1000fc28[uVar4 >> 0xc & 0xf];
  local_114 = str_1000fc28[uVar4 >> 8 & 0xf];
  local_113 = str_1000fc28[uVar4 >> 4 & 0xf];
  local_112 = str_1000fc28[uVar4 & 0xf];
  local_111 = str_1000fc28[uVar1 >> 0x14];
  local_110 = str_1000fc28[uVar1 >> 0x10 & 0xf];
  local_10f = str_1000fc28[uVar1 >> 0xc & 0xf];
  local_10e = str_1000fc28[uVar1 >> 8 & 0xf];
  local_10d = str_1000fc28[uVar1 >> 4 & 0xf];
  local_10c = str_1000fc28[uVar1 & 0xf];
  local_10b = 0x3a;
  if (uVar1 == uVar4) {
    uVar5 = strlen((char *)(param_1 + 0xfb6));
    if (0xef < uVar5 + 0xe) {
      return 0;
    }
    memcpy((void *)((long)&local_10b + 1),param_1 + 0xfb6,uVar5 + 1);
  }
  else {
    local_20 = 0;
    local_28 = 0;
    iVar3 = Ram0000000000280800;
    if (iVar3 != 0x50414d57) {
      return 0;
    }
    iVar3 = Ram0000000000280804;
    if (iVar3 == 0) {
      return 0;
    }
    uVar4 = Ram0000000000280808;
    if (uVar4 < 0xc) {
      return 0;
    }
    uVar4 = Ram0000000000280808;
    if (uVar4 < 0x38) {
      return 0;
    }
    uVar4 = UINT_00280834;
    if ((code *)(ulong)uVar4 == (code *)0x0) {
      return 0;
    }
    uVar4 = (*(code *)(ulong)uVar4)((char *)(param_1 + 0xf96),&local_28);
    if (uVar4 == 0) {
      return 0;
    }
    if ((int)local_28 == 0 || PF_PART4(local_28, 4) != param_1[0xf94]) {
      return 0;
    }
    uVar4 = param_1[0xf93];
    uVar8 = (ulong)uVar4;
    uVar9 = (ulong)PF_PART4(local_28, 4) + uVar8 * -100;
    uVar5 = 100;
    if (uVar9 < 100) {
      uVar5 = uVar9;
    }
    lVar6 = (ulong)PF_PART4(local_28, 4) + uVar8 * -100;
    if (lVar6 == 0) {
      return 0;
    }
    uVar1 = param_1[0xf92];
    if (0xffffff < (uVar4 | uVar1)) {
      return 0;
    }
    uVar9 = local_28 & 0xffffffff;
    local_118 = 0x24;
    local_117 = str_1000fc28[uVar1 >> 0x14];
    local_116 = str_1000fc28[uVar1 >> 0x10 & 0xf];
    local_115 = str_1000fc28[uVar1 >> 0xc & 0xf];
    local_114 = str_1000fc28[uVar1 >> 8 & 0xf];
    local_113 = str_1000fc28[uVar1 >> 4 & 0xf];
    local_112 = str_1000fc28[uVar1 & 0xf];
    local_111 = str_1000fc28[uVar4 >> 0x14];
    local_110 = str_1000fc28[uVar4 >> 0x10 & 0xf];
    local_10f = str_1000fc28[uVar4 >> 0xc & 0xf];
    local_10e = str_1000fc28[uVar4 >> 8 & 0xf];
    local_10d = str_1000fc28[uVar4 >> 4 & 0xf];
    local_10c = str_1000fc28[uVar4 & 0xf];
    local_10b = 0x3a;
    if (lVar6 == 1) {
      uVar7 = 0;
    }
    else {
      lVar6 = uVar8 * 100 + uVar9;
      uVar7 = 0;
      do {
        acStack_109[uVar7 * 2 + -1] = str_1000fc28[*(byte *)(lVar6 + uVar7) >> 4];
        acStack_109[uVar7 * 2] = str_1000fc28[*(byte *)(lVar6 + uVar7) & 0xf];
        acStack_109[uVar7 * 2 + 1] = str_1000fc28[*(byte *)(lVar6 + 1 + uVar7) >> 4];
        acStack_109[uVar7 * 2 + 2] = str_1000fc28[*(byte *)(lVar6 + 1 + uVar7) & 0xf];
        uVar7 = uVar7 + 2;
      } while (((uint)uVar5 & 0x7e) != uVar7);
    }
    if ((uVar5 & 1) != 0) {
      lVar6 = uVar9 + uVar8 * 100;
      acStack_109[uVar7 * 2 + -1] = str_1000fc28[*(byte *)(lVar6 + uVar7) >> 4];
      acStack_109[uVar7 * 2] = str_1000fc28[*(byte *)(lVar6 + uVar7) & 0xf];
    }
    acStack_109[uVar5 * 2 + -1] = '\0';
  }
  bVar2 = recovered_100097b0(param_1,param_1[0xf8f],(ulong)(uint)param_1[0xf91],
                             (ulong)(uint)param_1[0xf90],(long)&local_118);
  if (bVar2) {
    *(undefined1 *)((long)param_1 + 0x3e39) = 1;
    param_1[0xf95] = param_1[0xe43];
    iVar3 = snprintf((char *)(param_1 + 0x13c),0x80,str_1000fbf0,param_1[0xf93] + 1,
                               param_1[0xf92] + 1);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),1);
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280834
#undef str_1000fbf0
#undef str_1000fc28
#undef local_118
#undef local_117
#undef local_116
#undef local_115
#undef local_114
#undef local_113
#undef local_112
#undef local_111
#undef local_110
#undef local_10f
#undef local_10e
#undef acStack_109
#undef local_10d
#undef local_10c
#undef local_10b
#undef local_28
#undef local_20

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef str_1000fc39
#define str_1000fc39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4dU)))
#define local_28 (*(undefined8 *)(pf_stack_frame + 136))
#define local_18 (*(undefined4 *)(pf_stack_frame + 152))
#define uStack_20 (*(undefined8 *)(pf_stack_frame + 144))
#define local_98 (*(char (*)[152])(pf_stack_frame + 24))
#define local_38 (*(undefined8 *)(pf_stack_frame + 120))
#define local_30 (*(float *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10009f70(undefined4 *param_1,void *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar3 = 0;
  snprintf(local_98,0x60,str_1000fc39,*param_1,param_2);
  local_38 = 0;
  local_30 = 0.0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  iVar2 = Ram0000000000280800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000280804, iVar2 != 0)) &&
      (uVar1 = Ram0000000000280808, 0xb < uVar1)) &&
     ((uVar1 = Ram0000000000280808, 0x207 < uVar1 && ((code *)(ulong)_DAT_00280a04 != (code *)0x0)))
     ) {
    iVar2 = (*(code *)(ulong)_DAT_00280a04)(local_98,&local_38);
    if (iVar2 != 0) {
      if ((int)local_38 == 5) {
        uVar3 = (uint)(PF_PART4(local_38, 4) != 0);
      }
      else if ((int)local_38 == 2) {
        uVar3 = (uint)local_30;
      }
      else if ((int)local_38 == 1) {
        uVar3 = PF_PART4(local_38, 4);
      }
    }
  }
  return uVar3;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef _DAT_00280a04
#undef str_1000fc39
#undef local_28
#undef local_18
#undef uStack_20
#undef local_98
#undef local_38
#undef local_30

#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef str_1000fc39
#define str_1000fc39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4dU)))
#define local_88 (*(char (*)[136])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a040
 */

void recovered_1000a040(undefined4 *param_1,void *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  snprintf(local_88,0x60,str_1000fc39,*param_1,param_2);
  recovered_10008d90(local_88,param_3,param_4,&DAT_1000f1f9);
  return;
}

#undef DAT_1000f1f9
#undef str_1000fc39
#undef local_88

#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(uint (*)[14])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0a0
 */

undefined8 recovered_1000a0a0(char *param_1,ulong param_2,uint *param_3,uint *param_4,char *param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;

  if ((param_2 < 0xe || param_1 == (char *)0x0) || (*param_1 != '$')) {
    return 0;
  }
  local_38[0] = 0;
  local_3c = 0;
  puVar9 = local_38;
  lVar7 = 0;
  bVar3 = true;
  do {
    bVar8 = bVar3;
    cVar1 = param_1[lVar7 + 1];
    iVar10 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar10 = iVar10 + -0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar10 = iVar10 + -0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000a325;
      iVar10 = iVar10 + -0x57;
    }
    if (iVar10 < 0) goto LAB_1000a325;
    cVar1 = param_1[lVar7 + 2];
    iVar13 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar14 = iVar13 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      uVar14 = iVar13 - 0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000a325;
      uVar14 = iVar13 - 0x57;
    }
    if ((int)uVar14 < 0) goto LAB_1000a325;
    cVar1 = param_1[lVar7 + 3];
    iVar13 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar13 = iVar13 + -0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar13 = iVar13 + -0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000a325;
      iVar13 = iVar13 + -0x57;
    }
    if (iVar13 < 0) goto LAB_1000a325;
    cVar1 = param_1[lVar7 + 4];
    iVar11 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar12 = iVar11 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      uVar12 = iVar11 - 0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000a325;
      uVar12 = iVar11 - 0x57;
    }
    if ((int)uVar12 < 0) goto LAB_1000a325;
    cVar1 = param_1[lVar7 + 5];
    iVar11 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar11 = iVar11 + -0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar11 = iVar11 + -0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000a325;
      iVar11 = iVar11 + -0x57;
    }
    if (iVar11 < 0) goto LAB_1000a325;
    cVar1 = param_1[lVar7 + 6];
    iVar5 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar6 = iVar5 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      uVar6 = iVar5 - 0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_1000a325;
      uVar6 = iVar5 - 0x57;
    }
    if ((int)uVar6 < 0) goto LAB_1000a325;
    *puVar9 = iVar11 << 4 | uVar6 |
              (iVar13 << 4 | uVar12 | (*puVar9 << 8 | uVar14 | iVar10 << 4) << 8) << 8;
    lVar7 = 6;
    puVar9 = &local_3c;
    bVar3 = false;
  } while (bVar8);
  bVar2 = param_1[0xd];
  uVar4 = 0;
  if (((ulong)bVar2 < 0x40) && ((0x8400000200000000U >> ((ulong)bVar2 & 0x3f) & 1) != 0)) {
    if (param_2 == 0xe || bVar2 == 0x3a) {
      *param_3 = local_38[0];
      *param_4 = local_3c;
      *param_5 = param_1[0xd];
      uVar4 = 1;
    }
    else {
LAB_1000a325:
      uVar4 = 0;
    }
  }
  return uVar4;
}

#undef local_3c
#undef local_38

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_1000f70b
#define DAT_1000f70b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91fU)))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(uint *)(0x280a04U))
#undef str_1000fc39
#define str_1000fc39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4dU)))
#define local_28 (*(byte * *)(pf_stack_frame + 136))
#define local_18 (*(undefined4 *)(pf_stack_frame + 152))
#define uStack_20 (*(undefined8 *)(pf_stack_frame + 144))
#define local_98 (*(char (*)[152])(pf_stack_frame + 24))
#define local_38 (*(undefined8 *)(pf_stack_frame + 120))
#define local_30 (*(undefined4 *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000a360(undefined4 *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  snprintf(local_98,0x60,str_1000fc39,*param_1,&DAT_1000f70b);
  local_38 = 0;
  local_30 = 0;
  local_28 = (byte *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  iVar1 = Ram0000000000280800;
  if (iVar1 != 0x50414d57) {
    return false;
  }
  iVar1 = Ram0000000000280804;
  if ((((iVar1 != 0) && (uVar2 = Ram0000000000280808, 0xb < uVar2)) &&
      (uVar2 = Ram0000000000280808, 0x207 < uVar2)) &&
     (((code *)(ulong)_DAT_00280a04 != (code *)0x0 &&
      (iVar1 = (*(code *)(ulong)_DAT_00280a04)(local_98,&local_38), iVar1 != 0)))) {
    if (((uint)local_38 & 0xfffffffb) == 1) {
      return PF_PART4(local_38, 4) != 0;
    }
    if (local_28 != (byte *)0x0 && (uint)local_38 == 3) {
      uVar2 = *local_28 - 0x54;
      if ((uVar2 < 0x26) && ((0x2100000021U >> ((ulong)uVar2 & 0x3f) & 1) != 0)) {
        return true;
      }
      if (*local_28 == 0x31) {
        return true;
      }
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_1000f70b
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef _DAT_00280a04
#undef str_1000fc39
#undef local_28
#undef local_18
#undef uStack_20
#undef local_98
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a470
 */

bool recovered_1000a470(long param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  ulong uVar3;
  char *text;
  ulong uVar4;
  bool bVar5;

  iVar1 = *(int *)(param_1 + 0x3dc0);
  if (iVar1 != 0) {
    if (param_2 == 0x1b || param_3 == 1) {
      *(undefined4 *)(param_1 + 0x3dc0) = 0;
      memset((void *)(param_1 + 0x3dee),0,0x41);
    }
    else if (param_2 == 9) {
      *(byte *)(param_1 + 0x3dc4) = *(byte *)(param_1 + 0x3dc4) ^ 1;
    }
    else if (((param_3 == 0x1c) || (param_2 == 0xd)) || (param_2 == 10)) {
      recovered_1000a590(param_1);
    }
    else {
      if (iVar1 == 2) {
        lVar2 = 0x3dcd;
        uVar4 = 0x21;
      }
      else {
        bVar5 = *(int *)(param_1 + 0x3dc4) != 0;
        lVar2 = 0x3dee;
        if (!bVar5) {
          lVar2 = 0x3dcd;
        }
        uVar4 = (ulong)bVar5 * 0x20 + 0x21;
      }
      text = (char *)(param_1 + lVar2);
      uVar3 = strlen(text);
      if (((param_2 == 0x7f || param_2 == 8) || param_3 == 0xe) && (uVar3 != 0)) {
        text[uVar3 - 1] = '\0';
      }
      else if ((param_2 - 0x20U < 0x5f) && (uVar3 + 1 < uVar4)) {
        text[uVar3] = (char)param_2;
        text[uVar3 + 1] = '\0';
      }
    }
  }
  return iVar1 != 0;
}


#undef DAT_1000f080
#define DAT_1000f080 (*(char *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000f090
#define DAT_1000f090 (*(byte *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef DAT_1000f0a0
#define DAT_1000f0a0 (*(char *)(((uintptr_t)pf_module_state + 0x2b4U)))
#undef DAT_1000f0b0
#define DAT_1000f0b0 (*(byte *)(((uintptr_t)pf_module_state + 0x2c4U)))
#undef DAT_1000f0c0
#define DAT_1000f0c0 (*(char *)(((uintptr_t)pf_module_state + 0x2d4U)))
#undef DAT_1000f0d0
#define DAT_1000f0d0 (*(char *)(((uintptr_t)pf_module_state + 0x2e4U)))
#undef DAT_1000f0e0
#define DAT_1000f0e0 (*(byte *)(((uintptr_t)pf_module_state + 0x2f4U)))
#undef DAT_1000f0f0
#define DAT_1000f0f0 (*(char *)(((uintptr_t)pf_module_state + 0x304U)))
#undef DAT_1000f100
#define DAT_1000f100 (*(byte *)(((uintptr_t)pf_module_state + 0x314U)))
#undef DAT_1000f110
#define DAT_1000f110 (*(char *)(((uintptr_t)pf_module_state + 0x324U)))
#undef DAT_1000fc55
#define DAT_1000fc55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe69U)))
#undef DAT_1000fd10
#define DAT_1000fd10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf24U)))
#undef DAT_1001210c
#define DAT_1001210c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3320U)))
#undef UNK_1000f081
#define UNK_1000f081 (*(char *)(((uintptr_t)pf_module_state + 0x295U)))
#undef UNK_1000f082
#define UNK_1000f082 (*(char *)(((uintptr_t)pf_module_state + 0x296U)))
#undef UNK_1000f083
#define UNK_1000f083 (*(char *)(((uintptr_t)pf_module_state + 0x297U)))
#undef UNK_1000f084
#define UNK_1000f084 (*(char *)(((uintptr_t)pf_module_state + 0x298U)))
#undef UNK_1000f085
#define UNK_1000f085 (*(char *)(((uintptr_t)pf_module_state + 0x299U)))
#undef UNK_1000f086
#define UNK_1000f086 (*(char *)(((uintptr_t)pf_module_state + 0x29aU)))
#undef UNK_1000f087
#define UNK_1000f087 (*(char *)(((uintptr_t)pf_module_state + 0x29bU)))
#undef UNK_1000f088
#define UNK_1000f088 (*(char *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef UNK_1000f089
#define UNK_1000f089 (*(char *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef UNK_1000f08a
#define UNK_1000f08a (*(char *)(((uintptr_t)pf_module_state + 0x29eU)))
#undef UNK_1000f08b
#define UNK_1000f08b (*(char *)(((uintptr_t)pf_module_state + 0x29fU)))
#undef UNK_1000f08c
#define UNK_1000f08c (*(char *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef UNK_1000f08d
#define UNK_1000f08d (*(char *)(((uintptr_t)pf_module_state + 0x2a1U)))
#undef UNK_1000f08e
#define UNK_1000f08e (*(char *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef UNK_1000f08f
#define UNK_1000f08f (*(char *)(((uintptr_t)pf_module_state + 0x2a3U)))
#undef UNK_1000f091
#define UNK_1000f091 (*(byte *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef UNK_1000f092
#define UNK_1000f092 (*(byte *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef UNK_1000f093
#define UNK_1000f093 (*(byte *)(((uintptr_t)pf_module_state + 0x2a7U)))
#undef UNK_1000f094
#define UNK_1000f094 (*(byte *)(((uintptr_t)pf_module_state + 0x2a8U)))
#undef UNK_1000f095
#define UNK_1000f095 (*(byte *)(((uintptr_t)pf_module_state + 0x2a9U)))
#undef UNK_1000f096
#define UNK_1000f096 (*(byte *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef UNK_1000f097
#define UNK_1000f097 (*(byte *)(((uintptr_t)pf_module_state + 0x2abU)))
#undef UNK_1000f098
#define UNK_1000f098 (*(byte *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef UNK_1000f099
#define UNK_1000f099 (*(byte *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef UNK_1000f09a
#define UNK_1000f09a (*(byte *)(((uintptr_t)pf_module_state + 0x2aeU)))
#undef UNK_1000f09b
#define UNK_1000f09b (*(byte *)(((uintptr_t)pf_module_state + 0x2afU)))
#undef UNK_1000f09c
#define UNK_1000f09c (*(byte *)(((uintptr_t)pf_module_state + 0x2b0U)))
#undef UNK_1000f09d
#define UNK_1000f09d (*(byte *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef UNK_1000f09e
#define UNK_1000f09e (*(byte *)(((uintptr_t)pf_module_state + 0x2b2U)))
#undef UNK_1000f09f
#define UNK_1000f09f (*(byte *)(((uintptr_t)pf_module_state + 0x2b3U)))
#undef UNK_1000f0a1
#define UNK_1000f0a1 (*(char *)(((uintptr_t)pf_module_state + 0x2b5U)))
#undef UNK_1000f0a2
#define UNK_1000f0a2 (*(char *)(((uintptr_t)pf_module_state + 0x2b6U)))
#undef UNK_1000f0a3
#define UNK_1000f0a3 (*(char *)(((uintptr_t)pf_module_state + 0x2b7U)))
#undef UNK_1000f0a4
#define UNK_1000f0a4 (*(char *)(((uintptr_t)pf_module_state + 0x2b8U)))
#undef UNK_1000f0a5
#define UNK_1000f0a5 (*(char *)(((uintptr_t)pf_module_state + 0x2b9U)))
#undef UNK_1000f0a6
#define UNK_1000f0a6 (*(char *)(((uintptr_t)pf_module_state + 0x2baU)))
#undef UNK_1000f0a7
#define UNK_1000f0a7 (*(char *)(((uintptr_t)pf_module_state + 0x2bbU)))
#undef UNK_1000f0a8
#define UNK_1000f0a8 (*(char *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef UNK_1000f0a9
#define UNK_1000f0a9 (*(char *)(((uintptr_t)pf_module_state + 0x2bdU)))
#undef UNK_1000f0aa
#define UNK_1000f0aa (*(char *)(((uintptr_t)pf_module_state + 0x2beU)))
#undef UNK_1000f0ab
#define UNK_1000f0ab (*(char *)(((uintptr_t)pf_module_state + 0x2bfU)))
#undef UNK_1000f0ac
#define UNK_1000f0ac (*(char *)(((uintptr_t)pf_module_state + 0x2c0U)))
#undef UNK_1000f0ad
#define UNK_1000f0ad (*(char *)(((uintptr_t)pf_module_state + 0x2c1U)))
#undef UNK_1000f0ae
#define UNK_1000f0ae (*(char *)(((uintptr_t)pf_module_state + 0x2c2U)))
#undef UNK_1000f0af
#define UNK_1000f0af (*(char *)(((uintptr_t)pf_module_state + 0x2c3U)))
#undef UNK_1000f0b1
#define UNK_1000f0b1 (*(byte *)(((uintptr_t)pf_module_state + 0x2c5U)))
#undef UNK_1000f0b2
#define UNK_1000f0b2 (*(byte *)(((uintptr_t)pf_module_state + 0x2c6U)))
#undef UNK_1000f0b3
#define UNK_1000f0b3 (*(byte *)(((uintptr_t)pf_module_state + 0x2c7U)))
#undef UNK_1000f0b4
#define UNK_1000f0b4 (*(byte *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef UNK_1000f0b5
#define UNK_1000f0b5 (*(byte *)(((uintptr_t)pf_module_state + 0x2c9U)))
#undef UNK_1000f0b6
#define UNK_1000f0b6 (*(byte *)(((uintptr_t)pf_module_state + 0x2caU)))
#undef UNK_1000f0b7
#define UNK_1000f0b7 (*(byte *)(((uintptr_t)pf_module_state + 0x2cbU)))
#undef UNK_1000f0b8
#define UNK_1000f0b8 (*(byte *)(((uintptr_t)pf_module_state + 0x2ccU)))
#undef UNK_1000f0b9
#define UNK_1000f0b9 (*(byte *)(((uintptr_t)pf_module_state + 0x2cdU)))
#undef UNK_1000f0ba
#define UNK_1000f0ba (*(byte *)(((uintptr_t)pf_module_state + 0x2ceU)))
#undef UNK_1000f0bb
#define UNK_1000f0bb (*(byte *)(((uintptr_t)pf_module_state + 0x2cfU)))
#undef UNK_1000f0bc
#define UNK_1000f0bc (*(byte *)(((uintptr_t)pf_module_state + 0x2d0U)))
#undef UNK_1000f0bd
#define UNK_1000f0bd (*(byte *)(((uintptr_t)pf_module_state + 0x2d1U)))
#undef UNK_1000f0be
#define UNK_1000f0be (*(byte *)(((uintptr_t)pf_module_state + 0x2d2U)))
#undef UNK_1000f0bf
#define UNK_1000f0bf (*(byte *)(((uintptr_t)pf_module_state + 0x2d3U)))
#undef UNK_1000f0c1
#define UNK_1000f0c1 (*(char *)(((uintptr_t)pf_module_state + 0x2d5U)))
#undef UNK_1000f0c2
#define UNK_1000f0c2 (*(char *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef UNK_1000f0c3
#define UNK_1000f0c3 (*(char *)(((uintptr_t)pf_module_state + 0x2d7U)))
#undef UNK_1000f0c4
#define UNK_1000f0c4 (*(char *)(((uintptr_t)pf_module_state + 0x2d8U)))
#undef UNK_1000f0c5
#define UNK_1000f0c5 (*(char *)(((uintptr_t)pf_module_state + 0x2d9U)))
#undef UNK_1000f0c6
#define UNK_1000f0c6 (*(char *)(((uintptr_t)pf_module_state + 0x2daU)))
#undef UNK_1000f0c7
#define UNK_1000f0c7 (*(char *)(((uintptr_t)pf_module_state + 0x2dbU)))
#undef UNK_1000f0c8
#define UNK_1000f0c8 (*(char *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef UNK_1000f0c9
#define UNK_1000f0c9 (*(char *)(((uintptr_t)pf_module_state + 0x2ddU)))
#undef UNK_1000f0ca
#define UNK_1000f0ca (*(char *)(((uintptr_t)pf_module_state + 0x2deU)))
#undef UNK_1000f0cb
#define UNK_1000f0cb (*(char *)(((uintptr_t)pf_module_state + 0x2dfU)))
#undef UNK_1000f0cc
#define UNK_1000f0cc (*(char *)(((uintptr_t)pf_module_state + 0x2e0U)))
#undef UNK_1000f0cd
#define UNK_1000f0cd (*(char *)(((uintptr_t)pf_module_state + 0x2e1U)))
#undef UNK_1000f0ce
#define UNK_1000f0ce (*(char *)(((uintptr_t)pf_module_state + 0x2e2U)))
#undef UNK_1000f0cf
#define UNK_1000f0cf (*(char *)(((uintptr_t)pf_module_state + 0x2e3U)))
#undef UNK_1000f0d1
#define UNK_1000f0d1 (*(char *)(((uintptr_t)pf_module_state + 0x2e5U)))
#undef UNK_1000f0d2
#define UNK_1000f0d2 (*(char *)(((uintptr_t)pf_module_state + 0x2e6U)))
#undef UNK_1000f0d3
#define UNK_1000f0d3 (*(char *)(((uintptr_t)pf_module_state + 0x2e7U)))
#undef UNK_1000f0d4
#define UNK_1000f0d4 (*(char *)(((uintptr_t)pf_module_state + 0x2e8U)))
#undef UNK_1000f0d5
#define UNK_1000f0d5 (*(char *)(((uintptr_t)pf_module_state + 0x2e9U)))
#undef UNK_1000f0d6
#define UNK_1000f0d6 (*(char *)(((uintptr_t)pf_module_state + 0x2eaU)))
#undef UNK_1000f0d7
#define UNK_1000f0d7 (*(char *)(((uintptr_t)pf_module_state + 0x2ebU)))
#undef UNK_1000f0e1
#define UNK_1000f0e1 (*(byte *)(((uintptr_t)pf_module_state + 0x2f5U)))
#undef UNK_1000f0e2
#define UNK_1000f0e2 (*(byte *)(((uintptr_t)pf_module_state + 0x2f6U)))
#undef UNK_1000f0e3
#define UNK_1000f0e3 (*(byte *)(((uintptr_t)pf_module_state + 0x2f7U)))
#undef UNK_1000f0e4
#define UNK_1000f0e4 (*(byte *)(((uintptr_t)pf_module_state + 0x2f8U)))
#undef UNK_1000f0e5
#define UNK_1000f0e5 (*(byte *)(((uintptr_t)pf_module_state + 0x2f9U)))
#undef UNK_1000f0e6
#define UNK_1000f0e6 (*(byte *)(((uintptr_t)pf_module_state + 0x2faU)))
#undef UNK_1000f0e7
#define UNK_1000f0e7 (*(byte *)(((uintptr_t)pf_module_state + 0x2fbU)))
#undef UNK_1000f0f1
#define UNK_1000f0f1 (*(char *)(((uintptr_t)pf_module_state + 0x305U)))
#undef UNK_1000f0f2
#define UNK_1000f0f2 (*(char *)(((uintptr_t)pf_module_state + 0x306U)))
#undef UNK_1000f0f3
#define UNK_1000f0f3 (*(char *)(((uintptr_t)pf_module_state + 0x307U)))
#undef UNK_1000f0f4
#define UNK_1000f0f4 (*(char *)(((uintptr_t)pf_module_state + 0x308U)))
#undef UNK_1000f0f5
#define UNK_1000f0f5 (*(char *)(((uintptr_t)pf_module_state + 0x309U)))
#undef UNK_1000f0f6
#define UNK_1000f0f6 (*(char *)(((uintptr_t)pf_module_state + 0x30aU)))
#undef UNK_1000f0f7
#define UNK_1000f0f7 (*(char *)(((uintptr_t)pf_module_state + 0x30bU)))
#undef UNK_1000f101
#define UNK_1000f101 (*(byte *)(((uintptr_t)pf_module_state + 0x315U)))
#undef UNK_1000f102
#define UNK_1000f102 (*(byte *)(((uintptr_t)pf_module_state + 0x316U)))
#undef UNK_1000f103
#define UNK_1000f103 (*(byte *)(((uintptr_t)pf_module_state + 0x317U)))
#undef UNK_1000f104
#define UNK_1000f104 (*(byte *)(((uintptr_t)pf_module_state + 0x318U)))
#undef UNK_1000f105
#define UNK_1000f105 (*(byte *)(((uintptr_t)pf_module_state + 0x319U)))
#undef UNK_1000f106
#define UNK_1000f106 (*(byte *)(((uintptr_t)pf_module_state + 0x31aU)))
#undef UNK_1000f107
#define UNK_1000f107 (*(byte *)(((uintptr_t)pf_module_state + 0x31bU)))
#undef UNK_1000f111
#define UNK_1000f111 (*(char *)(((uintptr_t)pf_module_state + 0x325U)))
#undef UNK_1000f112
#define UNK_1000f112 (*(char *)(((uintptr_t)pf_module_state + 0x326U)))
#undef UNK_1000f113
#define UNK_1000f113 (*(char *)(((uintptr_t)pf_module_state + 0x327U)))
#undef UNK_1000f114
#define UNK_1000f114 (*(char *)(((uintptr_t)pf_module_state + 0x328U)))
#undef UNK_1000f115
#define UNK_1000f115 (*(char *)(((uintptr_t)pf_module_state + 0x329U)))
#undef UNK_1000f116
#define UNK_1000f116 (*(char *)(((uintptr_t)pf_module_state + 0x32aU)))
#undef UNK_1000f117
#define UNK_1000f117 (*(char *)(((uintptr_t)pf_module_state + 0x32bU)))
#undef UNK_1000f118
#define UNK_1000f118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32cU)))
#undef UNK_1000f119
#define UNK_1000f119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32dU)))
#undef UNK_1000f11a
#define UNK_1000f11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32eU)))
#undef UNK_1000f11b
#define UNK_1000f11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32fU)))
#undef UNK_1000f11c
#define UNK_1000f11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x330U)))
#undef UNK_1000f11d
#define UNK_1000f11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x331U)))
#undef bRam000000001000f091
#define bRam000000001000f091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef bRam000000001000f092
#define bRam000000001000f092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef bRam000000001000f093
#define bRam000000001000f093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a7U)))
#undef bRam000000001000f094
#define bRam000000001000f094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a8U)))
#undef bRam000000001000f095
#define bRam000000001000f095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a9U)))
#undef bRam000000001000f096
#define bRam000000001000f096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef bRam000000001000f097
#define bRam000000001000f097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2abU)))
#undef bRam000000001000f098
#define bRam000000001000f098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef bRam000000001000f099
#define bRam000000001000f099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef bRam000000001000f09a
#define bRam000000001000f09a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aeU)))
#undef bRam000000001000f09b
#define bRam000000001000f09b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afU)))
#undef bRam000000001000f09c
#define bRam000000001000f09c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
#undef bRam000000001000f09d
#define bRam000000001000f09d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef bRam000000001000f09e
#define bRam000000001000f09e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b2U)))
#undef bRam000000001000f09f
#define bRam000000001000f09f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b3U)))
#undef bRam000000001000f0b1
#define bRam000000001000f0b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c5U)))
#undef bRam000000001000f0b2
#define bRam000000001000f0b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c6U)))
#undef bRam000000001000f0b3
#define bRam000000001000f0b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c7U)))
#undef bRam000000001000f0b4
#define bRam000000001000f0b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef bRam000000001000f0b5
#define bRam000000001000f0b5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c9U)))
#undef bRam000000001000f0b6
#define bRam000000001000f0b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2caU)))
#undef bRam000000001000f0b7
#define bRam000000001000f0b7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cbU)))
#undef bRam000000001000f0b8
#define bRam000000001000f0b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
#undef bRam000000001000f0b9
#define bRam000000001000f0b9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cdU)))
#undef bRam000000001000f0ba
#define bRam000000001000f0ba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ceU)))
#undef bRam000000001000f0bb
#define bRam000000001000f0bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cfU)))
#undef bRam000000001000f0bc
#define bRam000000001000f0bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d0U)))
#undef bRam000000001000f0bd
#define bRam000000001000f0bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d1U)))
#undef bRam000000001000f0be
#define bRam000000001000f0be (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d2U)))
#undef bRam000000001000f0bf
#define bRam000000001000f0bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d3U)))
#undef bRam000000001000f0e1
#define bRam000000001000f0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f5U)))
#undef bRam000000001000f0e2
#define bRam000000001000f0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f6U)))
#undef bRam000000001000f0e3
#define bRam000000001000f0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f7U)))
#undef bRam000000001000f0e4
#define bRam000000001000f0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f8U)))
#undef bRam000000001000f0e5
#define bRam000000001000f0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f9U)))
#undef bRam000000001000f0e6
#define bRam000000001000f0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2faU)))
#undef bRam000000001000f0e7
#define bRam000000001000f0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fbU)))
#undef bRam000000001000f101
#define bRam000000001000f101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x315U)))
#undef bRam000000001000f102
#define bRam000000001000f102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x316U)))
#undef bRam000000001000f103
#define bRam000000001000f103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x317U)))
#undef bRam000000001000f104
#define bRam000000001000f104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x318U)))
#undef bRam000000001000f105
#define bRam000000001000f105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x319U)))
#undef bRam000000001000f106
#define bRam000000001000f106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31aU)))
#undef bRam000000001000f107
#define bRam000000001000f107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31bU)))
#undef cRam000000001000f081
#define cRam000000001000f081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x295U)))
#undef cRam000000001000f082
#define cRam000000001000f082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x296U)))
#undef cRam000000001000f083
#define cRam000000001000f083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x297U)))
#undef cRam000000001000f084
#define cRam000000001000f084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x298U)))
#undef cRam000000001000f085
#define cRam000000001000f085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x299U)))
#undef cRam000000001000f086
#define cRam000000001000f086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29aU)))
#undef cRam000000001000f087
#define cRam000000001000f087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29bU)))
#undef cRam000000001000f088
#define cRam000000001000f088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef cRam000000001000f089
#define cRam000000001000f089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef cRam000000001000f08a
#define cRam000000001000f08a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29eU)))
#undef cRam000000001000f08b
#define cRam000000001000f08b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29fU)))
#undef cRam000000001000f08c
#define cRam000000001000f08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef cRam000000001000f08d
#define cRam000000001000f08d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a1U)))
#undef cRam000000001000f08e
#define cRam000000001000f08e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef cRam000000001000f08f
#define cRam000000001000f08f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a3U)))
#undef cRam000000001000f0a1
#define cRam000000001000f0a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b5U)))
#undef cRam000000001000f0a2
#define cRam000000001000f0a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b6U)))
#undef cRam000000001000f0a3
#define cRam000000001000f0a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b7U)))
#undef cRam000000001000f0a4
#define cRam000000001000f0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
#undef cRam000000001000f0a5
#define cRam000000001000f0a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b9U)))
#undef cRam000000001000f0a6
#define cRam000000001000f0a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2baU)))
#undef cRam000000001000f0a7
#define cRam000000001000f0a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bbU)))
#undef cRam000000001000f0a8
#define cRam000000001000f0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef cRam000000001000f0a9
#define cRam000000001000f0a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bdU)))
#undef cRam000000001000f0aa
#define cRam000000001000f0aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2beU)))
#undef cRam000000001000f0ab
#define cRam000000001000f0ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bfU)))
#undef cRam000000001000f0ac
#define cRam000000001000f0ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c0U)))
#undef cRam000000001000f0ad
#define cRam000000001000f0ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c1U)))
#undef cRam000000001000f0ae
#define cRam000000001000f0ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c2U)))
#undef cRam000000001000f0af
#define cRam000000001000f0af (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c3U)))
#undef cRam000000001000f0c1
#define cRam000000001000f0c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d5U)))
#undef cRam000000001000f0c2
#define cRam000000001000f0c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d6U)))
#undef cRam000000001000f0c3
#define cRam000000001000f0c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d7U)))
#undef cRam000000001000f0c4
#define cRam000000001000f0c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d8U)))
#undef cRam000000001000f0c5
#define cRam000000001000f0c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d9U)))
#undef cRam000000001000f0c6
#define cRam000000001000f0c6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2daU)))
#undef cRam000000001000f0c7
#define cRam000000001000f0c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dbU)))
#undef cRam000000001000f0c8
#define cRam000000001000f0c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef cRam000000001000f0c9
#define cRam000000001000f0c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ddU)))
#undef cRam000000001000f0ca
#define cRam000000001000f0ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2deU)))
#undef cRam000000001000f0cb
#define cRam000000001000f0cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dfU)))
#undef cRam000000001000f0cc
#define cRam000000001000f0cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e0U)))
#undef cRam000000001000f0cd
#define cRam000000001000f0cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e1U)))
#undef cRam000000001000f0ce
#define cRam000000001000f0ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e2U)))
#undef cRam000000001000f0cf
#define cRam000000001000f0cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e3U)))
#undef cRam000000001000f0d1
#define cRam000000001000f0d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e5U)))
#undef cRam000000001000f0d2
#define cRam000000001000f0d2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e6U)))
#undef cRam000000001000f0d3
#define cRam000000001000f0d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e7U)))
#undef cRam000000001000f0d4
#define cRam000000001000f0d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e8U)))
#undef cRam000000001000f0d5
#define cRam000000001000f0d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e9U)))
#undef cRam000000001000f0d6
#define cRam000000001000f0d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2eaU)))
#undef cRam000000001000f0d7
#define cRam000000001000f0d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ebU)))
#undef cRam000000001000f0f1
#define cRam000000001000f0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x305U)))
#undef cRam000000001000f0f2
#define cRam000000001000f0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x306U)))
#undef cRam000000001000f0f3
#define cRam000000001000f0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x307U)))
#undef cRam000000001000f0f4
#define cRam000000001000f0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x308U)))
#undef cRam000000001000f0f5
#define cRam000000001000f0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x309U)))
#undef cRam000000001000f0f6
#define cRam000000001000f0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30aU)))
#undef cRam000000001000f0f7
#define cRam000000001000f0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30bU)))
#undef cRam000000001000f111
#define cRam000000001000f111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef cRam000000001000f112
#define cRam000000001000f112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x326U)))
#undef cRam000000001000f113
#define cRam000000001000f113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x327U)))
#undef cRam000000001000f114
#define cRam000000001000f114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x328U)))
#undef cRam000000001000f115
#define cRam000000001000f115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x329U)))
#undef cRam000000001000f116
#define cRam000000001000f116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32aU)))
#undef cRam000000001000f117
#define cRam000000001000f117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32bU)))
#undef str_1000fc59
#define str_1000fc59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe6dU)))
#undef str_1000fc86
#define str_1000fc86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe9aU)))
#undef str_1000fcb3
#define str_1000fcb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xec7U)))
#undef str_1000fce3
#define str_1000fce3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xef7U)))
#undef str_1000fd08
#define str_1000fd08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf1cU)))
#undef str_1000fd15
#define str_1000fd15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf29U)))
#undef str_1000fd57
#define str_1000fd57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf6bU)))
#undef str_1000fd84
#define str_1000fd84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a590
 */

void recovered_1000a590(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  char *pcVar31;
  ulong uVar32;
  long lVar33;
  byte *a;
  bool bVar34;
  uint128 auVar35;
  byte bVar36;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  uint128 auVar39;
  uint128 auVar38;
  uint128 auVar37;
  uint128 auVar40;
  char cVar49;
  byte bVar48;
  byte bVar50;
  char cVar53;
  byte bVar52;
  byte bVar54;
  char cVar56;
  byte bVar55;
  byte bVar57;
  char cVar59;
  byte bVar58;
  byte bVar60;
  char cVar62;
  byte bVar61;
  byte bVar63;
  char cVar65;
  byte bVar64;
  byte bVar66;
  char cVar68;
  byte bVar67;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  uint128 auVar51;
  uint128 auVar72;
  uint128 auVar73;
  uint128 auVar74;
  uint128 auVar75;
  uint128 auVar76;

  a = (byte *)(param_1 + 0x3dcd);
  if (*(int *)(param_1 + 0x3dc0) == 2) {
    iVar27 = strcmp((char *)a,&DAT_1000fc55);
    if (iVar27 == 0) {
      iVar27 = 0;
LAB_1000a6ad:
      *(int *)(param_1 + 0x3e30) = iVar27;
      *(undefined4 *)(param_1 + 0x618) = 0;
      *(int *)(param_1 + 0x3910) = *(int *)(param_1 + 0x3910) + 1;
      *(undefined4 *)(param_1 + 0x3dc0) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x3dcd) == '!') {
      a = (byte *)(param_1 + 0x3dce);
    }
    uVar28 = strlen((char *)a);
    if (uVar28 == 8) {
      bVar36 = *a;
      if (bVar36 != 0) {
        iVar27 = 0;
        do {
          a = a + 1;
          if ((byte)(bVar36 - 0x30U) < 10) {
            uVar30 = (uint)(byte)(bVar36 - 0x30U);
          }
          else if ((byte)(bVar36 + 0x9f) < 6) {
            uVar30 = bVar36 - 0x57;
          }
          else {
            if (5 < (byte)(bVar36 + 0xbf)) {
              pcVar31 = str_1000fc86;
              goto LAB_1000aa91;
            }
            uVar30 = bVar36 - 0x37;
          }
          iVar27 = iVar27 * 0x10 + uVar30;
          bVar36 = *a;
        } while (bVar36 != 0);
        if (1 < iVar27 + 1U) goto LAB_1000a6ad;
      }
      pcVar31 = str_1000fcb3;
    }
    else {
      pcVar31 = str_1000fc59;
    }
    goto LAB_1000aa91;
  }
  if ((*a == 0) || (*(char *)(param_1 + 0x3dee) == '\0')) {
    pcVar31 = str_1000fce3;
    goto LAB_1000aa91;
  }
  text = (char *)(param_1 + 0x3dee);
  uVar28 = strlen(text);
  iVar27 = strcmp(text,str_1000fd08);
  if (iVar27 == 0) {
    bVar34 = true;
    if (uVar28 != 0x40) goto LAB_1000a70c;
LAB_1000a716:
    if (uVar28 < 8) {
      bVar34 = true;
      uVar29 = 0;
    }
    else {
      if (uVar28 < 0x20) {
        bVar34 = true;
        uVar32 = 0;
LAB_1000a85e:
        uVar29 = uVar28 & 0xfffffffffffffff8;
        auVar35 = pshuflw(ZEXT116(bVar34 ^ 1),ZEXT116(bVar34 ^ 1),0);
        PF_PART4(auVar35, 4) = PF_PART4(auVar35, 0);
        PF_PART4(auVar35, 8) = PF_PART4(auVar35, 0);
        PF_PART4(auVar35, 12) = PF_PART4(auVar35, 0);
        do {
          uVar1 = *(undefined8 *)(text + uVar32);
          cVar49 = (char)uVar1;
          bVar48 = cVar49 + DAT_1000f0d0;
          cVar53 = (char)((ulong)uVar1 >> 8);
          bVar52 = cVar53 + cRam000000001000f0d1;
          cVar56 = (char)((ulong)uVar1 >> 0x10);
          bVar55 = cVar56 + cRam000000001000f0d2;
          cVar59 = (char)((ulong)uVar1 >> 0x18);
          bVar58 = cVar59 + cRam000000001000f0d3;
          cVar62 = (char)((ulong)uVar1 >> 0x20);
          bVar61 = cVar62 + cRam000000001000f0d4;
          cVar65 = (char)((ulong)uVar1 >> 0x28);
          bVar64 = cVar65 + cRam000000001000f0d5;
          cVar68 = (char)((ulong)uVar1 >> 0x30);
          cVar2 = (char)((ulong)uVar1 >> 0x38);
          bVar67 = cVar68 + cRam000000001000f0d6;
          bVar70 = cVar2 + cRam000000001000f0d7;
          bVar50 = cVar49 + DAT_1000f0f0;
          bVar54 = cVar53 + cRam000000001000f0f1;
          bVar57 = cVar56 + cRam000000001000f0f2;
          bVar60 = cVar59 + cRam000000001000f0f3;
          bVar63 = cVar62 + cRam000000001000f0f4;
          bVar66 = cVar65 + cRam000000001000f0f5;
          bVar69 = cVar68 + cRam000000001000f0f6;
          bVar71 = cVar2 + cRam000000001000f0f7;
          bVar36 = cVar49 + DAT_1000f110;
          bVar41 = cVar53 + cRam000000001000f111;
          bVar42 = cVar56 + cRam000000001000f112;
          bVar43 = cVar59 + cRam000000001000f113;
          bVar44 = cVar62 + cRam000000001000f114;
          bVar45 = cVar65 + cRam000000001000f115;
          bVar46 = cVar68 + cRam000000001000f116;
          bVar47 = cVar2 + cRam000000001000f117;
          PF_PART8(auVar39, 8) =
               (undefined8)
               (CONCAT72((int7)(CONCAT63(CONCAT51((int5)(CONCAT45(CONCAT31((int3)(CONCAT27(CONCAT11(
                                                  -((byte)((bVar47 < bRam000000001000f107) *
                                                           bRam000000001000f107 |
                                                          (bVar47 >= bRam000000001000f107) * bVar47)
                                                   == bVar47) |
                                                  -((byte)((bVar71 < bRam000000001000f107) *
                                                           bRam000000001000f107 |
                                                          (bVar71 >= bRam000000001000f107) * bVar71)
                                                   == bVar71) |
                                                  -((byte)((bVar70 < bRam000000001000f0e7) *
                                                           bRam000000001000f0e7 |
                                                          (bVar70 >= bRam000000001000f0e7) * bVar70)
                                                   == bVar70),bVar47) ^ 0xff00,
                                                  (uint7)(byte)(-((byte)((bVar46 <
                                                  bRam000000001000f106) * bRam000000001000f106 |
                                                  (bVar46 >= bRam000000001000f106) * bVar46) ==
                                                  bVar46) | -((byte)((bVar69 < bRam000000001000f106)
                                                                     * bRam000000001000f106 |
                                                                    (bVar69 >= bRam000000001000f106)
                                                                    * bVar69) == bVar69) |
                                                            -((byte)((bVar67 < bRam000000001000f0e6)
                                                                     * bRam000000001000f0e6 |
                                                                    (bVar67 >= bRam000000001000f0e6)
                                                                    * bVar67) == bVar67)) << 0x30 ^
                                                  0xff000000000000) >> 0x30),bVar46),
                                                  (uint5)(byte)(-((byte)((bVar45 <
                                                  bRam000000001000f105) * bRam000000001000f105 |
                                                  (bVar45 >= bRam000000001000f105) * bVar45) ==
                                                  bVar45) | -((byte)((bVar66 < bRam000000001000f105)
                                                                     * bRam000000001000f105 |
                                                                    (bVar66 >= bRam000000001000f105)
                                                                    * bVar66) == bVar66) |
                                                            -((byte)((bVar64 < bRam000000001000f0e5)
                                                                     * bRam000000001000f0e5 |
                                                                    (bVar64 >= bRam000000001000f0e5)
                                                                    * bVar64) == bVar64)) << 0x20 ^
                                                  0xff00000000) >> 0x20),bVar45),
                                         (uint3)(byte)(-((byte)((bVar44 < bRam000000001000f104) *
                                                                bRam000000001000f104 |
                                                               (bVar44 >= bRam000000001000f104) *
                                                               bVar44) == bVar44) |
                                                      -((byte)((bVar63 < bRam000000001000f104) *
                                                               bRam000000001000f104 |
                                                              (bVar63 >= bRam000000001000f104) *
                                                              bVar63) == bVar63) |
                                                      -((byte)((bVar61 < bRam000000001000f0e4) *
                                                               bRam000000001000f0e4 |
                                                              (bVar61 >= bRam000000001000f0e4) *
                                                              bVar61) == bVar61)) << 0x10 ^ 0xff0000
                                        ) >> 0x10),CONCAT11(bVar44,bVar47)) >> 8);
          PF_PART8(auVar39, 0) =
               (ulong)(byte)(-((byte)((bVar43 < bRam000000001000f103) * bRam000000001000f103 |
                                     (bVar43 >= bRam000000001000f103) * bVar43) == bVar43) |
                            -((byte)((bVar60 < bRam000000001000f103) * bRam000000001000f103 |
                                    (bVar60 >= bRam000000001000f103) * bVar60) == bVar60) |
                            -((byte)((bVar58 < bRam000000001000f0e3) * bRam000000001000f0e3 |
                                    (bVar58 >= bRam000000001000f0e3) * bVar58) == bVar58)) << 0x38 ^
               0xff00000000000000;
          PF_PART9(auVar38, 7) = PF_PART9(auVar39, 7);
          ((uint8_t *)(void *)&auVar38)[6] = bVar43;
          PF_PART6(auVar38, 0) =
               (uint6)(byte)(-((byte)((bVar42 < bRam000000001000f102) * bRam000000001000f102 |
                                     (bVar42 >= bRam000000001000f102) * bVar42) == bVar42) |
                            -((byte)((bVar57 < bRam000000001000f102) * bRam000000001000f102 |
                                    (bVar57 >= bRam000000001000f102) * bVar57) == bVar57) |
                            -((byte)((bVar55 < bRam000000001000f0e2) * bRam000000001000f0e2 |
                                    (bVar55 >= bRam000000001000f0e2) * bVar55) == bVar55)) << 0x28 ^
               0xff0000000000;
          PF_PART11(auVar37, 5) = PF_PART11(auVar38, 5);
          ((uint8_t *)(void *)&auVar37)[4] = bVar42;
          PF_PART4(auVar37, 0) =
               (uint)(byte)(-((byte)((bVar41 < bRam000000001000f101) * bRam000000001000f101 |
                                    (bVar41 >= bRam000000001000f101) * bVar41) == bVar41) |
                           -((byte)((bVar54 < bRam000000001000f101) * bRam000000001000f101 |
                                   (bVar54 >= bRam000000001000f101) * bVar54) == bVar54) |
                           -((byte)((bVar52 < bRam000000001000f0e1) * bRam000000001000f0e1 |
                                   (bVar52 >= bRam000000001000f0e1) * bVar52) == bVar52)) << 0x18 ^
               0xff000000;
          PF_PART13(auVar40, 3) = PF_PART13(auVar37, 3);
          ((uint8_t *)(void *)&auVar40)[2] = bVar41;
          PF_PART2(auVar40, 0) =
               CONCAT11(-((byte)((bVar36 < DAT_1000f100) * DAT_1000f100 |
                                (bVar36 >= DAT_1000f100) * bVar36) == bVar36) |
                        -((byte)((bVar50 < DAT_1000f100) * DAT_1000f100 |
                                (bVar50 >= DAT_1000f100) * bVar50) == bVar50) |
                        -((byte)((bVar48 < DAT_1000f0e0) * DAT_1000f0e0 |
                                (bVar48 >= DAT_1000f0e0) * bVar48) == bVar48),bVar36) ^ 0xff00;
          auVar40 = pf_psraw(auVar40,8);
          auVar35 = auVar35 | auVar40;
          uVar32 = uVar32 + 8;
        } while (uVar29 != uVar32);
        auVar35 = pf_psllw(auVar35,7);
        bVar34 = (((((((SUB161(auVar35 >> 7,0) & 1) == 0 && (SUB161(auVar35 >> 0x17,0) & 1) == 0) &&
                     (SUB161(auVar35 >> 0x27,0) & 1) == 0) && (SUB161(auVar35 >> 0x37,0) & 1) == 0)
                   && (SUB161(auVar35 >> 0x47,0) & 1) == 0) && (SUB161(auVar35 >> 0x57,0) & 1) == 0)
                 && (SUB161(auVar35 >> 0x67,0) & 1) == 0) && (SUB161(auVar35 >> 0x77,0) & 1) == 0;
        goto LAB_1000a948;
      }
      uVar29 = uVar28 & 0xffffffffffffffe0;
      auVar35 = (uint128)0x0;
      uVar32 = 0;
      auVar40 = (uint128)0x0;
      do {
        pcVar31 = (char *)(param_1 + 0x3dee + uVar32);
        cVar2 = *pcVar31;
        cVar49 = pcVar31[1];
        cVar53 = pcVar31[2];
        cVar56 = pcVar31[3];
        cVar59 = pcVar31[4];
        cVar62 = pcVar31[5];
        cVar65 = pcVar31[6];
        cVar68 = pcVar31[7];
        cVar3 = pcVar31[8];
        cVar4 = pcVar31[9];
        cVar5 = pcVar31[10];
        cVar6 = pcVar31[0xb];
        cVar7 = pcVar31[0xc];
        cVar8 = pcVar31[0xd];
        cVar9 = pcVar31[0xe];
        cVar10 = pcVar31[0xf];
        pcVar31 = (char *)(param_1 + 0x3dfe + uVar32);
        cVar11 = *pcVar31;
        cVar12 = pcVar31[1];
        cVar13 = pcVar31[2];
        cVar14 = pcVar31[3];
        cVar15 = pcVar31[4];
        cVar16 = pcVar31[5];
        cVar17 = pcVar31[6];
        cVar18 = pcVar31[7];
        cVar19 = pcVar31[8];
        cVar20 = pcVar31[9];
        cVar21 = pcVar31[10];
        cVar22 = pcVar31[0xb];
        cVar23 = pcVar31[0xc];
        cVar24 = pcVar31[0xd];
        cVar25 = pcVar31[0xe];
        cVar26 = pcVar31[0xf];
        bVar36 = cVar2 + DAT_1000f080;
        bVar41 = cVar49 + cRam000000001000f081;
        bVar42 = cVar53 + cRam000000001000f082;
        bVar43 = cVar56 + cRam000000001000f083;
        bVar44 = cVar59 + cRam000000001000f084;
        bVar45 = cVar62 + cRam000000001000f085;
        bVar46 = cVar65 + cRam000000001000f086;
        bVar47 = cVar68 + cRam000000001000f087;
        bVar48 = cVar3 + cRam000000001000f088;
        bVar50 = cVar4 + cRam000000001000f089;
        bVar52 = cVar5 + cRam000000001000f08a;
        bVar54 = cVar6 + cRam000000001000f08b;
        bVar55 = cVar7 + cRam000000001000f08c;
        bVar57 = cVar8 + cRam000000001000f08d;
        bVar58 = cVar9 + cRam000000001000f08e;
        bVar60 = cVar10 + cRam000000001000f08f;
        ((uint8_t *)(void *)&auVar73)[0] = -((byte)((DAT_1000f090 < bVar36) * DAT_1000f090 |
                             (DAT_1000f090 >= bVar36) * bVar36) == bVar36);
        ((uint8_t *)(void *)&auVar73)[1] = -((byte)((bRam000000001000f091 < bVar41) * bRam000000001000f091 |
                             (bRam000000001000f091 >= bVar41) * bVar41) == bVar41);
        ((uint8_t *)(void *)&auVar73)[2] = -((byte)((bRam000000001000f092 < bVar42) * bRam000000001000f092 |
                             (bRam000000001000f092 >= bVar42) * bVar42) == bVar42);
        ((uint8_t *)(void *)&auVar73)[3] = -((byte)((bRam000000001000f093 < bVar43) * bRam000000001000f093 |
                             (bRam000000001000f093 >= bVar43) * bVar43) == bVar43);
        ((uint8_t *)(void *)&auVar73)[4] = -((byte)((bRam000000001000f094 < bVar44) * bRam000000001000f094 |
                             (bRam000000001000f094 >= bVar44) * bVar44) == bVar44);
        ((uint8_t *)(void *)&auVar73)[5] = -((byte)((bRam000000001000f095 < bVar45) * bRam000000001000f095 |
                             (bRam000000001000f095 >= bVar45) * bVar45) == bVar45);
        ((uint8_t *)(void *)&auVar73)[6] = -((byte)((bRam000000001000f096 < bVar46) * bRam000000001000f096 |
                             (bRam000000001000f096 >= bVar46) * bVar46) == bVar46);
        ((uint8_t *)(void *)&auVar73)[7] = -((byte)((bRam000000001000f097 < bVar47) * bRam000000001000f097 |
                             (bRam000000001000f097 >= bVar47) * bVar47) == bVar47);
        ((uint8_t *)(void *)&auVar73)[8] = -((byte)((bRam000000001000f098 < bVar48) * bRam000000001000f098 |
                             (bRam000000001000f098 >= bVar48) * bVar48) == bVar48);
        ((uint8_t *)(void *)&auVar73)[9] = -((byte)((bRam000000001000f099 < bVar50) * bRam000000001000f099 |
                             (bRam000000001000f099 >= bVar50) * bVar50) == bVar50);
        ((uint8_t *)(void *)&auVar73)[10] = -((byte)((bRam000000001000f09a < bVar52) * bRam000000001000f09a |
                              (bRam000000001000f09a >= bVar52) * bVar52) == bVar52);
        ((uint8_t *)(void *)&auVar73)[0xb] = -((byte)((bRam000000001000f09b < bVar54) * bRam000000001000f09b |
                               (bRam000000001000f09b >= bVar54) * bVar54) == bVar54);
        ((uint8_t *)(void *)&auVar73)[0xc] = -((byte)((bRam000000001000f09c < bVar55) * bRam000000001000f09c |
                               (bRam000000001000f09c >= bVar55) * bVar55) == bVar55);
        ((uint8_t *)(void *)&auVar73)[0xd] = -((byte)((bRam000000001000f09d < bVar57) * bRam000000001000f09d |
                               (bRam000000001000f09d >= bVar57) * bVar57) == bVar57);
        ((uint8_t *)(void *)&auVar73)[0xe] = -((byte)((bRam000000001000f09e < bVar58) * bRam000000001000f09e |
                               (bRam000000001000f09e >= bVar58) * bVar58) == bVar58);
        ((uint8_t *)(void *)&auVar73)[0xf] = -((byte)((bRam000000001000f09f < bVar60) * bRam000000001000f09f |
                               (bRam000000001000f09f >= bVar60) * bVar60) == bVar60);
        bVar36 = cVar11 + DAT_1000f080;
        bVar41 = cVar12 + cRam000000001000f081;
        bVar42 = cVar13 + cRam000000001000f082;
        bVar43 = cVar14 + cRam000000001000f083;
        bVar44 = cVar15 + cRam000000001000f084;
        bVar45 = cVar16 + cRam000000001000f085;
        bVar46 = cVar17 + cRam000000001000f086;
        bVar47 = cVar18 + cRam000000001000f087;
        bVar48 = cVar19 + cRam000000001000f088;
        bVar50 = cVar20 + cRam000000001000f089;
        bVar52 = cVar21 + cRam000000001000f08a;
        bVar54 = cVar22 + cRam000000001000f08b;
        bVar55 = cVar23 + cRam000000001000f08c;
        bVar57 = cVar24 + cRam000000001000f08d;
        bVar58 = cVar25 + cRam000000001000f08e;
        bVar60 = cVar26 + cRam000000001000f08f;
        ((uint8_t *)(void *)&auVar75)[0] = -((byte)((DAT_1000f090 < bVar36) * DAT_1000f090 |
                             (DAT_1000f090 >= bVar36) * bVar36) == bVar36);
        ((uint8_t *)(void *)&auVar75)[1] = -((byte)((bRam000000001000f091 < bVar41) * bRam000000001000f091 |
                             (bRam000000001000f091 >= bVar41) * bVar41) == bVar41);
        ((uint8_t *)(void *)&auVar75)[2] = -((byte)((bRam000000001000f092 < bVar42) * bRam000000001000f092 |
                             (bRam000000001000f092 >= bVar42) * bVar42) == bVar42);
        ((uint8_t *)(void *)&auVar75)[3] = -((byte)((bRam000000001000f093 < bVar43) * bRam000000001000f093 |
                             (bRam000000001000f093 >= bVar43) * bVar43) == bVar43);
        ((uint8_t *)(void *)&auVar75)[4] = -((byte)((bRam000000001000f094 < bVar44) * bRam000000001000f094 |
                             (bRam000000001000f094 >= bVar44) * bVar44) == bVar44);
        ((uint8_t *)(void *)&auVar75)[5] = -((byte)((bRam000000001000f095 < bVar45) * bRam000000001000f095 |
                             (bRam000000001000f095 >= bVar45) * bVar45) == bVar45);
        ((uint8_t *)(void *)&auVar75)[6] = -((byte)((bRam000000001000f096 < bVar46) * bRam000000001000f096 |
                             (bRam000000001000f096 >= bVar46) * bVar46) == bVar46);
        ((uint8_t *)(void *)&auVar75)[7] = -((byte)((bRam000000001000f097 < bVar47) * bRam000000001000f097 |
                             (bRam000000001000f097 >= bVar47) * bVar47) == bVar47);
        ((uint8_t *)(void *)&auVar75)[8] = -((byte)((bRam000000001000f098 < bVar48) * bRam000000001000f098 |
                             (bRam000000001000f098 >= bVar48) * bVar48) == bVar48);
        ((uint8_t *)(void *)&auVar75)[9] = -((byte)((bRam000000001000f099 < bVar50) * bRam000000001000f099 |
                             (bRam000000001000f099 >= bVar50) * bVar50) == bVar50);
        ((uint8_t *)(void *)&auVar75)[10] = -((byte)((bRam000000001000f09a < bVar52) * bRam000000001000f09a |
                              (bRam000000001000f09a >= bVar52) * bVar52) == bVar52);
        ((uint8_t *)(void *)&auVar75)[0xb] = -((byte)((bRam000000001000f09b < bVar54) * bRam000000001000f09b |
                               (bRam000000001000f09b >= bVar54) * bVar54) == bVar54);
        ((uint8_t *)(void *)&auVar75)[0xc] = -((byte)((bRam000000001000f09c < bVar55) * bRam000000001000f09c |
                               (bRam000000001000f09c >= bVar55) * bVar55) == bVar55);
        ((uint8_t *)(void *)&auVar75)[0xd] = -((byte)((bRam000000001000f09d < bVar57) * bRam000000001000f09d |
                               (bRam000000001000f09d >= bVar57) * bVar57) == bVar57);
        ((uint8_t *)(void *)&auVar75)[0xe] = -((byte)((bRam000000001000f09e < bVar58) * bRam000000001000f09e |
                               (bRam000000001000f09e >= bVar58) * bVar58) == bVar58);
        ((uint8_t *)(void *)&auVar75)[0xf] = -((byte)((bRam000000001000f09f < bVar60) * bRam000000001000f09f |
                               (bRam000000001000f09f >= bVar60) * bVar60) == bVar60);
        bVar36 = cVar2 + DAT_1000f0a0;
        bVar41 = cVar49 + cRam000000001000f0a1;
        bVar42 = cVar53 + cRam000000001000f0a2;
        bVar43 = cVar56 + cRam000000001000f0a3;
        bVar44 = cVar59 + cRam000000001000f0a4;
        bVar45 = cVar62 + cRam000000001000f0a5;
        bVar46 = cVar65 + cRam000000001000f0a6;
        bVar47 = cVar68 + cRam000000001000f0a7;
        bVar48 = cVar3 + cRam000000001000f0a8;
        bVar50 = cVar4 + cRam000000001000f0a9;
        bVar52 = cVar5 + cRam000000001000f0aa;
        bVar54 = cVar6 + cRam000000001000f0ab;
        bVar55 = cVar7 + cRam000000001000f0ac;
        bVar57 = cVar8 + cRam000000001000f0ad;
        bVar58 = cVar9 + cRam000000001000f0ae;
        bVar60 = cVar10 + cRam000000001000f0af;
        ((uint8_t *)(void *)&auVar76)[0] = -((byte)((DAT_1000f0b0 < bVar36) * DAT_1000f0b0 |
                             (DAT_1000f0b0 >= bVar36) * bVar36) == bVar36);
        ((uint8_t *)(void *)&auVar76)[1] = -((byte)((bRam000000001000f0b1 < bVar41) * bRam000000001000f0b1 |
                             (bRam000000001000f0b1 >= bVar41) * bVar41) == bVar41);
        ((uint8_t *)(void *)&auVar76)[2] = -((byte)((bRam000000001000f0b2 < bVar42) * bRam000000001000f0b2 |
                             (bRam000000001000f0b2 >= bVar42) * bVar42) == bVar42);
        ((uint8_t *)(void *)&auVar76)[3] = -((byte)((bRam000000001000f0b3 < bVar43) * bRam000000001000f0b3 |
                             (bRam000000001000f0b3 >= bVar43) * bVar43) == bVar43);
        ((uint8_t *)(void *)&auVar76)[4] = -((byte)((bRam000000001000f0b4 < bVar44) * bRam000000001000f0b4 |
                             (bRam000000001000f0b4 >= bVar44) * bVar44) == bVar44);
        ((uint8_t *)(void *)&auVar76)[5] = -((byte)((bRam000000001000f0b5 < bVar45) * bRam000000001000f0b5 |
                             (bRam000000001000f0b5 >= bVar45) * bVar45) == bVar45);
        ((uint8_t *)(void *)&auVar76)[6] = -((byte)((bRam000000001000f0b6 < bVar46) * bRam000000001000f0b6 |
                             (bRam000000001000f0b6 >= bVar46) * bVar46) == bVar46);
        ((uint8_t *)(void *)&auVar76)[7] = -((byte)((bRam000000001000f0b7 < bVar47) * bRam000000001000f0b7 |
                             (bRam000000001000f0b7 >= bVar47) * bVar47) == bVar47);
        ((uint8_t *)(void *)&auVar76)[8] = -((byte)((bRam000000001000f0b8 < bVar48) * bRam000000001000f0b8 |
                             (bRam000000001000f0b8 >= bVar48) * bVar48) == bVar48);
        ((uint8_t *)(void *)&auVar76)[9] = -((byte)((bRam000000001000f0b9 < bVar50) * bRam000000001000f0b9 |
                             (bRam000000001000f0b9 >= bVar50) * bVar50) == bVar50);
        ((uint8_t *)(void *)&auVar76)[10] = -((byte)((bRam000000001000f0ba < bVar52) * bRam000000001000f0ba |
                              (bRam000000001000f0ba >= bVar52) * bVar52) == bVar52);
        ((uint8_t *)(void *)&auVar76)[0xb] = -((byte)((bRam000000001000f0bb < bVar54) * bRam000000001000f0bb |
                               (bRam000000001000f0bb >= bVar54) * bVar54) == bVar54);
        ((uint8_t *)(void *)&auVar76)[0xc] = -((byte)((bRam000000001000f0bc < bVar55) * bRam000000001000f0bc |
                               (bRam000000001000f0bc >= bVar55) * bVar55) == bVar55);
        ((uint8_t *)(void *)&auVar76)[0xd] = -((byte)((bRam000000001000f0bd < bVar57) * bRam000000001000f0bd |
                               (bRam000000001000f0bd >= bVar57) * bVar57) == bVar57);
        ((uint8_t *)(void *)&auVar76)[0xe] = -((byte)((bRam000000001000f0be < bVar58) * bRam000000001000f0be |
                               (bRam000000001000f0be >= bVar58) * bVar58) == bVar58);
        ((uint8_t *)(void *)&auVar76)[0xf] = -((byte)((bRam000000001000f0bf < bVar60) * bRam000000001000f0bf |
                               (bRam000000001000f0bf >= bVar60) * bVar60) == bVar60);
        bVar36 = cVar11 + DAT_1000f0a0;
        bVar41 = cVar12 + cRam000000001000f0a1;
        bVar42 = cVar13 + cRam000000001000f0a2;
        bVar43 = cVar14 + cRam000000001000f0a3;
        bVar44 = cVar15 + cRam000000001000f0a4;
        bVar45 = cVar16 + cRam000000001000f0a5;
        bVar46 = cVar17 + cRam000000001000f0a6;
        bVar47 = cVar18 + cRam000000001000f0a7;
        bVar48 = cVar19 + cRam000000001000f0a8;
        bVar50 = cVar20 + cRam000000001000f0a9;
        bVar52 = cVar21 + cRam000000001000f0aa;
        bVar54 = cVar22 + cRam000000001000f0ab;
        bVar55 = cVar23 + cRam000000001000f0ac;
        bVar57 = cVar24 + cRam000000001000f0ad;
        bVar58 = cVar25 + cRam000000001000f0ae;
        bVar60 = cVar26 + cRam000000001000f0af;
        ((uint8_t *)(void *)&auVar74)[0] = -((byte)((DAT_1000f0b0 < bVar36) * DAT_1000f0b0 |
                             (DAT_1000f0b0 >= bVar36) * bVar36) == bVar36);
        ((uint8_t *)(void *)&auVar74)[1] = -((byte)((bRam000000001000f0b1 < bVar41) * bRam000000001000f0b1 |
                             (bRam000000001000f0b1 >= bVar41) * bVar41) == bVar41);
        ((uint8_t *)(void *)&auVar74)[2] = -((byte)((bRam000000001000f0b2 < bVar42) * bRam000000001000f0b2 |
                             (bRam000000001000f0b2 >= bVar42) * bVar42) == bVar42);
        ((uint8_t *)(void *)&auVar74)[3] = -((byte)((bRam000000001000f0b3 < bVar43) * bRam000000001000f0b3 |
                             (bRam000000001000f0b3 >= bVar43) * bVar43) == bVar43);
        ((uint8_t *)(void *)&auVar74)[4] = -((byte)((bRam000000001000f0b4 < bVar44) * bRam000000001000f0b4 |
                             (bRam000000001000f0b4 >= bVar44) * bVar44) == bVar44);
        ((uint8_t *)(void *)&auVar74)[5] = -((byte)((bRam000000001000f0b5 < bVar45) * bRam000000001000f0b5 |
                             (bRam000000001000f0b5 >= bVar45) * bVar45) == bVar45);
        ((uint8_t *)(void *)&auVar74)[6] = -((byte)((bRam000000001000f0b6 < bVar46) * bRam000000001000f0b6 |
                             (bRam000000001000f0b6 >= bVar46) * bVar46) == bVar46);
        ((uint8_t *)(void *)&auVar74)[7] = -((byte)((bRam000000001000f0b7 < bVar47) * bRam000000001000f0b7 |
                             (bRam000000001000f0b7 >= bVar47) * bVar47) == bVar47);
        ((uint8_t *)(void *)&auVar74)[8] = -((byte)((bRam000000001000f0b8 < bVar48) * bRam000000001000f0b8 |
                             (bRam000000001000f0b8 >= bVar48) * bVar48) == bVar48);
        ((uint8_t *)(void *)&auVar74)[9] = -((byte)((bRam000000001000f0b9 < bVar50) * bRam000000001000f0b9 |
                             (bRam000000001000f0b9 >= bVar50) * bVar50) == bVar50);
        ((uint8_t *)(void *)&auVar74)[10] = -((byte)((bRam000000001000f0ba < bVar52) * bRam000000001000f0ba |
                              (bRam000000001000f0ba >= bVar52) * bVar52) == bVar52);
        ((uint8_t *)(void *)&auVar74)[0xb] = -((byte)((bRam000000001000f0bb < bVar54) * bRam000000001000f0bb |
                               (bRam000000001000f0bb >= bVar54) * bVar54) == bVar54);
        ((uint8_t *)(void *)&auVar74)[0xc] = -((byte)((bRam000000001000f0bc < bVar55) * bRam000000001000f0bc |
                               (bRam000000001000f0bc >= bVar55) * bVar55) == bVar55);
        ((uint8_t *)(void *)&auVar74)[0xd] = -((byte)((bRam000000001000f0bd < bVar57) * bRam000000001000f0bd |
                               (bRam000000001000f0bd >= bVar57) * bVar57) == bVar57);
        ((uint8_t *)(void *)&auVar74)[0xe] = -((byte)((bRam000000001000f0be < bVar58) * bRam000000001000f0be |
                               (bRam000000001000f0be >= bVar58) * bVar58) == bVar58);
        ((uint8_t *)(void *)&auVar74)[0xf] = -((byte)((bRam000000001000f0bf < bVar60) * bRam000000001000f0bf |
                               (bRam000000001000f0bf >= bVar60) * bVar60) == bVar60);
        bVar36 = cVar2 + DAT_1000f0c0;
        bVar41 = cVar49 + cRam000000001000f0c1;
        bVar42 = cVar53 + cRam000000001000f0c2;
        bVar43 = cVar56 + cRam000000001000f0c3;
        bVar44 = cVar59 + cRam000000001000f0c4;
        bVar45 = cVar62 + cRam000000001000f0c5;
        bVar46 = cVar65 + cRam000000001000f0c6;
        bVar47 = cVar68 + cRam000000001000f0c7;
        bVar48 = cVar3 + cRam000000001000f0c8;
        bVar50 = cVar4 + cRam000000001000f0c9;
        bVar52 = cVar5 + cRam000000001000f0ca;
        bVar54 = cVar6 + cRam000000001000f0cb;
        bVar55 = cVar7 + cRam000000001000f0cc;
        bVar57 = cVar8 + cRam000000001000f0cd;
        bVar58 = cVar9 + cRam000000001000f0ce;
        bVar60 = cVar10 + cRam000000001000f0cf;
        ((uint8_t *)(void *)&auVar72)[0] = -((byte)((DAT_1000f0b0 < bVar36) * DAT_1000f0b0 |
                             (DAT_1000f0b0 >= bVar36) * bVar36) == bVar36);
        ((uint8_t *)(void *)&auVar72)[1] = -((byte)((bRam000000001000f0b1 < bVar41) * bRam000000001000f0b1 |
                             (bRam000000001000f0b1 >= bVar41) * bVar41) == bVar41);
        ((uint8_t *)(void *)&auVar72)[2] = -((byte)((bRam000000001000f0b2 < bVar42) * bRam000000001000f0b2 |
                             (bRam000000001000f0b2 >= bVar42) * bVar42) == bVar42);
        ((uint8_t *)(void *)&auVar72)[3] = -((byte)((bRam000000001000f0b3 < bVar43) * bRam000000001000f0b3 |
                             (bRam000000001000f0b3 >= bVar43) * bVar43) == bVar43);
        ((uint8_t *)(void *)&auVar72)[4] = -((byte)((bRam000000001000f0b4 < bVar44) * bRam000000001000f0b4 |
                             (bRam000000001000f0b4 >= bVar44) * bVar44) == bVar44);
        ((uint8_t *)(void *)&auVar72)[5] = -((byte)((bRam000000001000f0b5 < bVar45) * bRam000000001000f0b5 |
                             (bRam000000001000f0b5 >= bVar45) * bVar45) == bVar45);
        ((uint8_t *)(void *)&auVar72)[6] = -((byte)((bRam000000001000f0b6 < bVar46) * bRam000000001000f0b6 |
                             (bRam000000001000f0b6 >= bVar46) * bVar46) == bVar46);
        ((uint8_t *)(void *)&auVar72)[7] = -((byte)((bRam000000001000f0b7 < bVar47) * bRam000000001000f0b7 |
                             (bRam000000001000f0b7 >= bVar47) * bVar47) == bVar47);
        ((uint8_t *)(void *)&auVar72)[8] = -((byte)((bRam000000001000f0b8 < bVar48) * bRam000000001000f0b8 |
                             (bRam000000001000f0b8 >= bVar48) * bVar48) == bVar48);
        ((uint8_t *)(void *)&auVar72)[9] = -((byte)((bRam000000001000f0b9 < bVar50) * bRam000000001000f0b9 |
                             (bRam000000001000f0b9 >= bVar50) * bVar50) == bVar50);
        ((uint8_t *)(void *)&auVar72)[10] = -((byte)((bRam000000001000f0ba < bVar52) * bRam000000001000f0ba |
                              (bRam000000001000f0ba >= bVar52) * bVar52) == bVar52);
        ((uint8_t *)(void *)&auVar72)[0xb] = -((byte)((bRam000000001000f0bb < bVar54) * bRam000000001000f0bb |
                               (bRam000000001000f0bb >= bVar54) * bVar54) == bVar54);
        ((uint8_t *)(void *)&auVar72)[0xc] = -((byte)((bRam000000001000f0bc < bVar55) * bRam000000001000f0bc |
                               (bRam000000001000f0bc >= bVar55) * bVar55) == bVar55);
        ((uint8_t *)(void *)&auVar72)[0xd] = -((byte)((bRam000000001000f0bd < bVar57) * bRam000000001000f0bd |
                               (bRam000000001000f0bd >= bVar57) * bVar57) == bVar57);
        ((uint8_t *)(void *)&auVar72)[0xe] = -((byte)((bRam000000001000f0be < bVar58) * bRam000000001000f0be |
                               (bRam000000001000f0be >= bVar58) * bVar58) == bVar58);
        ((uint8_t *)(void *)&auVar72)[0xf] = -((byte)((bRam000000001000f0bf < bVar60) * bRam000000001000f0bf |
                               (bRam000000001000f0bf >= bVar60) * bVar60) == bVar60);
        auVar35 = auVar35 | auVar72 & auVar76 & auVar73;
        bVar36 = cVar11 + DAT_1000f0c0;
        bVar41 = cVar12 + cRam000000001000f0c1;
        bVar42 = cVar13 + cRam000000001000f0c2;
        bVar43 = cVar14 + cRam000000001000f0c3;
        bVar44 = cVar15 + cRam000000001000f0c4;
        bVar45 = cVar16 + cRam000000001000f0c5;
        bVar46 = cVar17 + cRam000000001000f0c6;
        bVar47 = cVar18 + cRam000000001000f0c7;
        bVar48 = cVar19 + cRam000000001000f0c8;
        bVar50 = cVar20 + cRam000000001000f0c9;
        bVar52 = cVar21 + cRam000000001000f0ca;
        bVar54 = cVar22 + cRam000000001000f0cb;
        bVar55 = cVar23 + cRam000000001000f0cc;
        bVar57 = cVar24 + cRam000000001000f0cd;
        bVar58 = cVar25 + cRam000000001000f0ce;
        bVar60 = cVar26 + cRam000000001000f0cf;
        ((uint8_t *)(void *)&auVar51)[0] = -((byte)((DAT_1000f0b0 < bVar36) * DAT_1000f0b0 |
                             (DAT_1000f0b0 >= bVar36) * bVar36) == bVar36);
        ((uint8_t *)(void *)&auVar51)[1] = -((byte)((bRam000000001000f0b1 < bVar41) * bRam000000001000f0b1 |
                             (bRam000000001000f0b1 >= bVar41) * bVar41) == bVar41);
        ((uint8_t *)(void *)&auVar51)[2] = -((byte)((bRam000000001000f0b2 < bVar42) * bRam000000001000f0b2 |
                             (bRam000000001000f0b2 >= bVar42) * bVar42) == bVar42);
        ((uint8_t *)(void *)&auVar51)[3] = -((byte)((bRam000000001000f0b3 < bVar43) * bRam000000001000f0b3 |
                             (bRam000000001000f0b3 >= bVar43) * bVar43) == bVar43);
        ((uint8_t *)(void *)&auVar51)[4] = -((byte)((bRam000000001000f0b4 < bVar44) * bRam000000001000f0b4 |
                             (bRam000000001000f0b4 >= bVar44) * bVar44) == bVar44);
        ((uint8_t *)(void *)&auVar51)[5] = -((byte)((bRam000000001000f0b5 < bVar45) * bRam000000001000f0b5 |
                             (bRam000000001000f0b5 >= bVar45) * bVar45) == bVar45);
        ((uint8_t *)(void *)&auVar51)[6] = -((byte)((bRam000000001000f0b6 < bVar46) * bRam000000001000f0b6 |
                             (bRam000000001000f0b6 >= bVar46) * bVar46) == bVar46);
        ((uint8_t *)(void *)&auVar51)[7] = -((byte)((bRam000000001000f0b7 < bVar47) * bRam000000001000f0b7 |
                             (bRam000000001000f0b7 >= bVar47) * bVar47) == bVar47);
        ((uint8_t *)(void *)&auVar51)[8] = -((byte)((bRam000000001000f0b8 < bVar48) * bRam000000001000f0b8 |
                             (bRam000000001000f0b8 >= bVar48) * bVar48) == bVar48);
        ((uint8_t *)(void *)&auVar51)[9] = -((byte)((bRam000000001000f0b9 < bVar50) * bRam000000001000f0b9 |
                             (bRam000000001000f0b9 >= bVar50) * bVar50) == bVar50);
        ((uint8_t *)(void *)&auVar51)[10] = -((byte)((bRam000000001000f0ba < bVar52) * bRam000000001000f0ba |
                              (bRam000000001000f0ba >= bVar52) * bVar52) == bVar52);
        ((uint8_t *)(void *)&auVar51)[0xb] = -((byte)((bRam000000001000f0bb < bVar54) * bRam000000001000f0bb |
                               (bRam000000001000f0bb >= bVar54) * bVar54) == bVar54);
        ((uint8_t *)(void *)&auVar51)[0xc] = -((byte)((bRam000000001000f0bc < bVar55) * bRam000000001000f0bc |
                               (bRam000000001000f0bc >= bVar55) * bVar55) == bVar55);
        ((uint8_t *)(void *)&auVar51)[0xd] = -((byte)((bRam000000001000f0bd < bVar57) * bRam000000001000f0bd |
                               (bRam000000001000f0bd >= bVar57) * bVar57) == bVar57);
        ((uint8_t *)(void *)&auVar51)[0xe] = -((byte)((bRam000000001000f0be < bVar58) * bRam000000001000f0be |
                               (bRam000000001000f0be >= bVar58) * bVar58) == bVar58);
        ((uint8_t *)(void *)&auVar51)[0xf] = -((byte)((bRam000000001000f0bf < bVar60) * bRam000000001000f0bf |
                               (bRam000000001000f0bf >= bVar60) * bVar60) == bVar60);
        auVar40 = auVar40 | auVar51 & auVar74 & auVar75;
        uVar32 = uVar32 + 0x20;
      } while (uVar29 != uVar32);
      auVar35 = pf_psllw(auVar40 | auVar35,7);
      bVar34 = (((((((((((((((SUB161(auVar35 >> 7,0) & 1) == 0 &&
                            (SUB161(auVar35 >> 0xf,0) & 1) == 0) &&
                           (SUB161(auVar35 >> 0x17,0) & 1) == 0) &&
                          (SUB161(auVar35 >> 0x1f,0) & 1) == 0) &&
                         (SUB161(auVar35 >> 0x27,0) & 1) == 0) &&
                        (SUB161(auVar35 >> 0x2f,0) & 1) == 0) &&
                       (SUB161(auVar35 >> 0x37,0) & 1) == 0) && (SUB161(auVar35 >> 0x3f,0) & 1) == 0
                      ) && (SUB161(auVar35 >> 0x47,0) & 1) == 0) &&
                    (SUB161(auVar35 >> 0x4f,0) & 1) == 0) && (SUB161(auVar35 >> 0x57,0) & 1) == 0)
                  && (SUB161(auVar35 >> 0x5f,0) & 1) == 0) && (SUB161(auVar35 >> 0x67,0) & 1) == 0)
                && (SUB161(auVar35 >> 0x6f,0) & 1) == 0) && (SUB161(auVar35 >> 0x77,0) & 1) == 0) &&
               -1 < ((uint8_t *)(void *)&auVar35)[0xf];
      if (uVar28 == uVar29) goto LAB_1000a97d;
      uVar32 = uVar29;
      if ((uVar28 & 0x18) != 0) goto LAB_1000a85e;
    }
    do {
      cVar2 = text[uVar29];
      if (5 < (byte)(cVar2 + 0x9fU) && 9 < (byte)(cVar2 - 0x30U)) {
        bVar34 = (bool)(bVar34 & (byte)(cVar2 + 0xbfU) < 6);
      }
      uVar29 = uVar29 + 1;
LAB_1000a948:
    } while (uVar28 != uVar29);
  }
  else {
    iVar27 = strcmp(text,&DAT_1000fd10);
    bVar34 = iVar27 == 0;
    if (uVar28 == 0x40) goto LAB_1000a716;
LAB_1000a70c:
    if (uVar28 == 0x20) goto LAB_1000a716;
  }
LAB_1000a97d:
  pcVar31 = str_1000fd15;
  if ((0xfffffff8 < *(int *)(param_1 + 0x3dc8) - 8U) && ((bool)(*a != 0 & bVar34))) {
    uVar30 = *(uint *)(param_1 + 0x38f4);
    if ((ulong)uVar30 == 0x20) {
      pcVar31 = str_1000fd57;
    }
    else {
      *(uint *)(param_1 + 0x38f4) = uVar30 + 1;
      lVar33 = (ulong)uVar30 * 0x168;
      memset((void *)(param_1 + lVar33 + 0xa8c),0,0x168);
      *(undefined4 *)(param_1 + 0xa8c + lVar33) = 2;
      iVar27 = *(int *)(param_1 + 0x38f8) + 1;
      *(int *)(param_1 + 0x38f8) = iVar27;
      *(int *)(param_1 + 0xa90 + lVar33) = iVar27;
      *(undefined4 *)(param_1 + 0xa94 + lVar33) = DAT_1001210c;
      *(undefined4 *)(param_1 + 0xa98 + lVar33) = *(undefined4 *)(param_1 + 0x3dc8);
      *(undefined1 *)(param_1 + 0xaa0 + lVar33) = *(undefined1 *)(param_1 + 0x3dcc);
      memcpy((void *)(param_1 + lVar33 + 0xb91),a,0x21);
      memcpy((void *)(param_1 + lVar33 + 0xbb2),text,0x41);
      *(undefined4 *)(param_1 + 0x3dc0) = 0;
      memset(text,0,0x41);
      *(undefined1 *)(param_1 + 0x3920) = 0;
      pcVar31 = str_1000fd84;
    }
  }
LAB_1000aa91:
  snprintf((char *)(param_1 + 0x470),0x80,pcVar31);
  return;
}

#undef DAT_1000f080
#undef DAT_1000f090
#undef DAT_1000f0a0
#undef DAT_1000f0b0
#undef DAT_1000f0c0
#undef DAT_1000f0d0
#undef DAT_1000f0e0
#undef DAT_1000f0f0
#undef DAT_1000f100
#undef DAT_1000f110
#undef DAT_1000fc55
#undef DAT_1000fd10
#undef DAT_1001210c
#undef UNK_1000f081
#undef UNK_1000f082
#undef UNK_1000f083
#undef UNK_1000f084
#undef UNK_1000f085
#undef UNK_1000f086
#undef UNK_1000f087
#undef UNK_1000f088
#undef UNK_1000f089
#undef UNK_1000f08a
#undef UNK_1000f08b
#undef UNK_1000f08c
#undef UNK_1000f08d
#undef UNK_1000f08e
#undef UNK_1000f08f
#undef UNK_1000f091
#undef UNK_1000f092
#undef UNK_1000f093
#undef UNK_1000f094
#undef UNK_1000f095
#undef UNK_1000f096
#undef UNK_1000f097
#undef UNK_1000f098
#undef UNK_1000f099
#undef UNK_1000f09a
#undef UNK_1000f09b
#undef UNK_1000f09c
#undef UNK_1000f09d
#undef UNK_1000f09e
#undef UNK_1000f09f
#undef UNK_1000f0a1
#undef UNK_1000f0a2
#undef UNK_1000f0a3
#undef UNK_1000f0a4
#undef UNK_1000f0a5
#undef UNK_1000f0a6
#undef UNK_1000f0a7
#undef UNK_1000f0a8
#undef UNK_1000f0a9
#undef UNK_1000f0aa
#undef UNK_1000f0ab
#undef UNK_1000f0ac
#undef UNK_1000f0ad
#undef UNK_1000f0ae
#undef UNK_1000f0af
#undef UNK_1000f0b1
#undef UNK_1000f0b2
#undef UNK_1000f0b3
#undef UNK_1000f0b4
#undef UNK_1000f0b5
#undef UNK_1000f0b6
#undef UNK_1000f0b7
#undef UNK_1000f0b8
#undef UNK_1000f0b9
#undef UNK_1000f0ba
#undef UNK_1000f0bb
#undef UNK_1000f0bc
#undef UNK_1000f0bd
#undef UNK_1000f0be
#undef UNK_1000f0bf
#undef UNK_1000f0c1
#undef UNK_1000f0c2
#undef UNK_1000f0c3
#undef UNK_1000f0c4
#undef UNK_1000f0c5
#undef UNK_1000f0c6
#undef UNK_1000f0c7
#undef UNK_1000f0c8
#undef UNK_1000f0c9
#undef UNK_1000f0ca
#undef UNK_1000f0cb
#undef UNK_1000f0cc
#undef UNK_1000f0cd
#undef UNK_1000f0ce
#undef UNK_1000f0cf
#undef UNK_1000f0d1
#undef UNK_1000f0d2
#undef UNK_1000f0d3
#undef UNK_1000f0d4
#undef UNK_1000f0d5
#undef UNK_1000f0d6
#undef UNK_1000f0d7
#undef UNK_1000f0e1
#undef UNK_1000f0e2
#undef UNK_1000f0e3
#undef UNK_1000f0e4
#undef UNK_1000f0e5
#undef UNK_1000f0e6
#undef UNK_1000f0e7
#undef UNK_1000f0f1
#undef UNK_1000f0f2
#undef UNK_1000f0f3
#undef UNK_1000f0f4
#undef UNK_1000f0f5
#undef UNK_1000f0f6
#undef UNK_1000f0f7
#undef UNK_1000f101
#undef UNK_1000f102
#undef UNK_1000f103
#undef UNK_1000f104
#undef UNK_1000f105
#undef UNK_1000f106
#undef UNK_1000f107
#undef UNK_1000f111
#undef UNK_1000f112
#undef UNK_1000f113
#undef UNK_1000f114
#undef UNK_1000f115
#undef UNK_1000f116
#undef UNK_1000f117
#undef UNK_1000f118
#undef UNK_1000f119
#undef UNK_1000f11a
#undef UNK_1000f11b
#undef UNK_1000f11c
#undef UNK_1000f11d
#undef bRam000000001000f091
#undef bRam000000001000f092
#undef bRam000000001000f093
#undef bRam000000001000f094
#undef bRam000000001000f095
#undef bRam000000001000f096
#undef bRam000000001000f097
#undef bRam000000001000f098
#undef bRam000000001000f099
#undef bRam000000001000f09a
#undef bRam000000001000f09b
#undef bRam000000001000f09c
#undef bRam000000001000f09d
#undef bRam000000001000f09e
#undef bRam000000001000f09f
#undef bRam000000001000f0b1
#undef bRam000000001000f0b2
#undef bRam000000001000f0b3
#undef bRam000000001000f0b4
#undef bRam000000001000f0b5
#undef bRam000000001000f0b6
#undef bRam000000001000f0b7
#undef bRam000000001000f0b8
#undef bRam000000001000f0b9
#undef bRam000000001000f0ba
#undef bRam000000001000f0bb
#undef bRam000000001000f0bc
#undef bRam000000001000f0bd
#undef bRam000000001000f0be
#undef bRam000000001000f0bf
#undef bRam000000001000f0e1
#undef bRam000000001000f0e2
#undef bRam000000001000f0e3
#undef bRam000000001000f0e4
#undef bRam000000001000f0e5
#undef bRam000000001000f0e6
#undef bRam000000001000f0e7
#undef bRam000000001000f101
#undef bRam000000001000f102
#undef bRam000000001000f103
#undef bRam000000001000f104
#undef bRam000000001000f105
#undef bRam000000001000f106
#undef bRam000000001000f107
#undef cRam000000001000f081
#undef cRam000000001000f082
#undef cRam000000001000f083
#undef cRam000000001000f084
#undef cRam000000001000f085
#undef cRam000000001000f086
#undef cRam000000001000f087
#undef cRam000000001000f088
#undef cRam000000001000f089
#undef cRam000000001000f08a
#undef cRam000000001000f08b
#undef cRam000000001000f08c
#undef cRam000000001000f08d
#undef cRam000000001000f08e
#undef cRam000000001000f08f
#undef cRam000000001000f0a1
#undef cRam000000001000f0a2
#undef cRam000000001000f0a3
#undef cRam000000001000f0a4
#undef cRam000000001000f0a5
#undef cRam000000001000f0a6
#undef cRam000000001000f0a7
#undef cRam000000001000f0a8
#undef cRam000000001000f0a9
#undef cRam000000001000f0aa
#undef cRam000000001000f0ab
#undef cRam000000001000f0ac
#undef cRam000000001000f0ad
#undef cRam000000001000f0ae
#undef cRam000000001000f0af
#undef cRam000000001000f0c1
#undef cRam000000001000f0c2
#undef cRam000000001000f0c3
#undef cRam000000001000f0c4
#undef cRam000000001000f0c5
#undef cRam000000001000f0c6
#undef cRam000000001000f0c7
#undef cRam000000001000f0c8
#undef cRam000000001000f0c9
#undef cRam000000001000f0ca
#undef cRam000000001000f0cb
#undef cRam000000001000f0cc
#undef cRam000000001000f0cd
#undef cRam000000001000f0ce
#undef cRam000000001000f0cf
#undef cRam000000001000f0d1
#undef cRam000000001000f0d2
#undef cRam000000001000f0d3
#undef cRam000000001000f0d4
#undef cRam000000001000f0d5
#undef cRam000000001000f0d6
#undef cRam000000001000f0d7
#undef cRam000000001000f0f1
#undef cRam000000001000f0f2
#undef cRam000000001000f0f3
#undef cRam000000001000f0f4
#undef cRam000000001000f0f5
#undef cRam000000001000f0f6
#undef cRam000000001000f0f7
#undef cRam000000001000f111
#undef cRam000000001000f112
#undef cRam000000001000f113
#undef cRam000000001000f114
#undef cRam000000001000f115
#undef cRam000000001000f116
#undef cRam000000001000f117
#undef str_1000fc59
#undef str_1000fc86
#undef str_1000fcb3
#undef str_1000fce3
#undef str_1000fd08
#undef str_1000fd15
#undef str_1000fd57
#undef str_1000fd84

#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef DAT_1000f3b9
#define DAT_1000f3b9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cdU)))
#undef DAT_1000fee1
#define DAT_1000fee1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10f5U)))
#undef DAT_1000ffde
#define DAT_1000ffde (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11f2U)))
#undef DAT_1000ffe0
#define DAT_1000ffe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11f4U)))
#undef DAT_1001001a
#define DAT_1001001a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x122eU)))
#undef str_1000f170
#define str_1000f170 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x384U)))
#undef str_1000f672
#define str_1000f672 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x886U)))
#undef str_1000fdd5
#define str_1000fdd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfe9U)))
#undef str_1000fdf6
#define str_1000fdf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100aU)))
#undef str_1000fec5
#define str_1000fec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10d9U)))
#undef str_1000fecb
#define str_1000fecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10dfU)))
#undef str_1000fed8
#define str_1000fed8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10ecU)))
#undef str_1000fee6
#define str_1000fee6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10faU)))
#undef str_1000feee
#define str_1000feee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1102U)))
#undef str_1000fefc
#define str_1000fefc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1110U)))
#undef str_1000ff0c
#define str_1000ff0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1120U)))
#undef str_1000ff1c
#define str_1000ff1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1130U)))
#undef str_1000ff35
#define str_1000ff35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1149U)))
#undef str_1000ff48
#define str_1000ff48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115cU)))
#undef str_1000ff4e
#define str_1000ff4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1162U)))
#undef str_1000ff55
#define str_1000ff55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1169U)))
#undef str_1000ff5d
#define str_1000ff5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1171U)))
#undef str_1000ff6b
#define str_1000ff6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117fU)))
#undef str_1000ff9e
#define str_1000ff9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b2U)))
#undef str_1000ffa4
#define str_1000ffa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b8U)))
#undef str_1000ffad
#define str_1000ffad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11c1U)))
#undef str_1000ffb4
#define str_1000ffb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11c8U)))
#undef str_1000ffbd
#define str_1000ffbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11d1U)))
#undef str_1000ffc3
#define str_1000ffc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11d7U)))
#undef str_1000ffd4
#define str_1000ffd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11e8U)))
#undef str_1000ffe5
#define str_1000ffe5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11f9U)))
#undef str_1000fff3
#define str_1000fff3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1207U)))
#undef str_1001000f
#define str_1001000f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1223U)))
#define local_70 (*(ulong * *)(pf_stack_frame + 8080))
#define local_68 (*(ulong *)(pf_stack_frame + 8088))
#define local_60 (*(ulong *)(pf_stack_frame + 8096))
#define local_58 (*(ulong *)(pf_stack_frame + 8104))
#define local_50 (*(ulong *)(pf_stack_frame + 8112))
#define local_48 (*(ulonglong *)(pf_stack_frame + 8120))
#define local_40 (*(ulong *)(pf_stack_frame + 8128))
#define local_38 (*(ulong *)(pf_stack_frame + 8136))
#define uStack_1fc0 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_1fb0 (*(undefined8 *)(pf_stack_frame + 80))
#define uStack_1fa0 (*(undefined8 *)(pf_stack_frame + 96))
#define uStack_1f90 (*(ulonglong *)(pf_stack_frame + 112))
#define uStack_160 (*(undefined8 *)(pf_stack_frame + 7840))
#define uStack_150 (*(undefined8 *)(pf_stack_frame + 7856))
#define uStack_140 (*(undefined8 *)(pf_stack_frame + 7872))
#define uStack_130 (*(undefined8 *)(pf_stack_frame + 7888))
#define uStack_120 (*(undefined8 *)(pf_stack_frame + 7904))
#define uStack_110 (*(ulonglong *)(pf_stack_frame + 7920))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 7984))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 8000))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 8016))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 8032))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 8048))
#define uStack_80 (*(ulonglong *)(pf_stack_frame + 8064))
#define local_1fe8 (*(ulong * (*)[1021])(pf_stack_frame + 24))
#define local_1fc8 (*(undefined8 *)(pf_stack_frame + 56))
#define local_1fb8 (*(undefined8 *)(pf_stack_frame + 72))
#define local_1fa8 (*(undefined8 *)(pf_stack_frame + 88))
#define local_1f98 (*(undefined8 *)(pf_stack_frame + 104))
#define local_1e8 (*(char (*)[488])(pf_stack_frame + 7704))
#define local_1a0 (*(ulong *)(pf_stack_frame + 7776))
#define local_198 (*(ulong *)(pf_stack_frame + 7784))
#define local_190 (*(long *)(pf_stack_frame + 7792))
#define local_188 (*(ulong *)(pf_stack_frame + 7800))
#define local_180 (*(undefined8 *)(pf_stack_frame + 7808))
#define local_178 (*(undefined8 *)(pf_stack_frame + 7816))
#define local_16c (*(uint *)(pf_stack_frame + 7828))
#define local_168 (*(ulong * *)(pf_stack_frame + 7832))
#define local_158 (*(undefined8 *)(pf_stack_frame + 7848))
#define local_148 (*(undefined8 *)(pf_stack_frame + 7864))
#define local_138 (*(undefined8 *)(pf_stack_frame + 7880))
#define local_128 (*(undefined8 *)(pf_stack_frame + 7896))
#define local_118 (*(undefined8 *)(pf_stack_frame + 7912))
#define local_108 (*(ulong *)(pf_stack_frame + 7928))
#define local_fc (*(uint *)(pf_stack_frame + 7940))
#define local_f8 (*(ulong * *)(pf_stack_frame + 7944))
#define local_f0 (*(undefined8 *)(pf_stack_frame + 7952))
#define local_e8 (*(char * *)(pf_stack_frame + 7960))
#define local_e0 (*(void * *)(pf_stack_frame + 7968))
#define local_d8 (*(ulong * *)(pf_stack_frame + 7976))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 7992))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 8008))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 8024))
#define local_98 (*(undefined8 *)(pf_stack_frame + 8040))
#define local_88 (*(undefined8 *)(pf_stack_frame + 8056))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aab0
 */

void recovered_1000aab0(ulong *param_1)

{
  unsigned char pf_stack_frame[8224] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  long lVar3;
  PFUiView view;
  PFUiView view_00;
  PFUiView view_01;
  uint128 auVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong in_R9;
  int iVar16;
  int iVar17;
  ulong uVar18;
  ulong *puVar19;
  int iVar20;
  char *pcVar21;
  ulong uVar22;
  long lVar23;
  ulonglong uVar24;
  bool bVar25;
  uint128 auVar26;

  uVar18 = *param_1;
  if (uVar18 == 0) {
    uVar22 = 0x2f8;
    uVar7 = 400;
  }
  else {
    uVar22 = 0x2f8;
    if (*(uint *)(uVar18 + 4) != 0) {
      uVar22 = (ulong)*(uint *)(uVar18 + 4);
    }
    uVar7 = 400;
    if (*(uint *)(uVar18 + 8) != 0) {
      uVar7 = *(uint *)(uVar18 + 8);
    }
  }
  uVar6 = terror_ui_colour(0);
  pf_app_terror_ui_rectangle(&local_d8,uVar6);
  local_1f98 = local_88;
  uStack_1f90 = uStack_80;
  local_1fa8 = local_98;
  uStack_1fa0 = uStack_90;
  local_1fb8 = local_a8;
  uStack_1fb0 = uStack_a0;
  local_1fc8 = local_b8;
  uStack_1fc0 = uStack_b0;
  local_1fe8[2] = (ulong *)local_c8;
  local_1fe8[3] = (ulong *)uStack_c0;
  local_1fe8[0] = local_d8;
  local_1fe8[1] = (ulong *)uStack_d0;
  if ((0 < (int)uVar22) && (0 < (int)uVar7)) {
    if ((char)param_1[2] == '\0') {
      pvVar13 = (void *)param_1[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1fe8,0,(ulong)uVar7 << 0x20 | uVar22,pvVar13);
  }
  uVar22 = param_1[1];
  if (uVar22 == 0 || *(int *)(uVar18 + 0x3dc0) == 0) {
    if (*(int *)(uVar18 + 0x3dc0) != 0) goto LAB_1000abd6;
  }
  else {
    if (*(int *)(uVar22 + 0x10) != 0) {
      recovered_1000ca60((long *)param_1);
      *(undefined1 *)(param_1 + 2) = 1;
    }
LAB_1000abd6:
    param_1[1] = 0;
  }
  uVar18 = *param_1;
  local_1a0 = uVar22;
  local_70 = param_1;
  if (uVar18 == 0) {
    iVar16 = 400;
    local_40 = 0x1c;
    iVar8 = 0xd8;
LAB_1000ac98:
    uVar7 = terror_ui_colour(0x2d);
    pf_app_terror_ui_rectangle(&local_d8,uVar7);
    local_1f98 = local_88;
    uStack_1f90 = uStack_80;
    local_1fa8 = local_98;
    uStack_1fa0 = uStack_90;
    local_1fb8 = local_a8;
    uStack_1fb0 = uStack_a0;
    local_1fc8 = local_b8;
    uStack_1fc0 = uStack_b0;
    local_1fe8[2] = (ulong *)local_c8;
    local_1fe8[3] = (ulong *)uStack_c0;
    local_1fe8[0] = local_d8;
    local_1fe8[1] = (ulong *)uStack_d0;
    if (0 < iVar16) {
      if ((char)param_1[2] == '\0') {
        pvVar13 = (void *)param_1[1];
      }
      else {
        pvVar13 = (void *)0x0;
      }
      pf_app_terror_ui_view_draw((void *)*param_1,local_1fe8,0,CONCAT44(iVar16,iVar8),pvVar13);
    }
    if ((uVar18 == 0) || (iVar16 = *(int *)(uVar18 + 0x3d4), iVar16 < 1)) {
      iVar16 = 10;
    }
    local_108 = (ulong)(iVar8 - 0x1cU);
    recovered_1000d900(param_1,0xc0000000e,CONCAT44(iVar16 + 2,iVar8 - 0x1cU),str_1000f170,1,in_R9);
    if ((uVar18 == 0) || (iVar16 = *(int *)(uVar18 + 0x3d4), iVar16 < 1)) {
      iVar16 = 10;
    }
    pcVar21 = str_1000fecb;
    if (*(char *)(uVar18 + 0x598) != '\0') {
      pcVar21 = (char *)(uVar18 + 0x598);
    }
    local_48 = (ulong)(iVar8 - 0x14) | local_40 << 0x20;
    uStack_160 = 0;
    local_168 = param_1;
    pf_app_terror_ui_button(&local_d8,pcVar21,recovered_1000dde0,&local_168);
    local_1f98 = local_88;
    uStack_1f90 = uStack_80;
    local_1fa8 = local_98;
    uStack_1fa0 = uStack_90;
    local_1fb8 = local_a8;
    uStack_1fb0 = uStack_a0;
    local_1fc8 = local_b8;
    uStack_1fc0 = uStack_b0;
    local_1fe8[2] = (ulong *)local_c8;
    local_1fe8[3] = (ulong *)uStack_c0;
    local_1fe8[0] = local_d8;
    local_1fe8[1] = (ulong *)uStack_d0;
    if ((char)param_1[2] == '\0') {
      pvVar13 = (void *)param_1[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1fe8,(ulong)(iVar16 + 0x1aU) << 0x20 | 10,local_48,
                       pvVar13);
    iVar8 = (int)local_40;
    uVar7 = iVar16 + 0x1aU + iVar8 + 0x12;
    uVar22 = 0xc;
    if (0 < *(int *)(uVar18 + 0x3d4)) {
      uVar22 = (ulong)(*(int *)(uVar18 + 0x3d4) + 2);
    }
    recovered_1000d900(param_1,(ulong)uVar7 << 0x20 | 0xe,(uVar22 << 0x20) + local_108,str_1000fed8,
                       0x31,in_R9);
    iVar16 = *(int *)(uVar18 + 0x3d4);
    iVar17 = 0x14;
    if (0 < iVar16) {
      iVar17 = iVar16 + 10;
    }
    iVar20 = 400;
    if (*(int *)(uVar18 + 8) != 0) {
      iVar20 = *(int *)(uVar18 + 8);
    }
    if (*(char *)(uVar18 + 0xa85) == '\0') {
      local_60 = CONCAT44(PF_PART4(local_60, 4),1);
      if (*(int *)(uVar18 + 0x610) == 1) goto LAB_1000aef6;
    }
    else {
LAB_1000aef6:
      local_60 = CONCAT44(PF_PART4(local_60, 4),2);
    }
    if ((*(char *)(uVar18 + 0xa86) != '\0') || (*(int *)(uVar18 + 0x610) == 2)) {
      local_60 = CONCAT44(PF_PART4(local_60, 4),(uint)local_60 + 1);
    }
    if ((*(char *)(uVar18 + 0xa87) != '\0') || (*(int *)(uVar18 + 0x610) == 3)) {
      local_60 = CONCAT44(PF_PART4(local_60, 4),(uint)local_60 + 1);
    }
    if ((*(char *)(uVar18 + 0xa88) != '\0') || (*(int *)(uVar18 + 0x610) == 4)) {
      local_60 = CONCAT44(PF_PART4(local_60, 4),(uint)local_60 + 1);
    }
    if ((*(char *)(uVar18 + 0xa89) != '\0') || (*(int *)(uVar18 + 0x610) == 5)) {
      local_60 = CONCAT44(PF_PART4(local_60, 4),(uint)local_60 + 1);
    }
    if ((*(char *)(uVar18 + 0xa8a) != '\0') || (*(int *)(uVar18 + 0x610) == 6)) {
      local_60 = CONCAT44(PF_PART4(local_60, 4),(uint)local_60 + 1);
    }
    if ((*(char *)(uVar18 + 0xa8b) != '\0') || (*(int *)(uVar18 + 0x610) == 7)) {
      local_60 = CONCAT44(PF_PART4(local_60, 4),(uint)local_60 + 1);
    }
    uVar7 = iVar17 + uVar7;
    local_38 = (ulong)uVar7;
    iVar17 = -0xc;
    if (0 < iVar16) {
      iVar17 = -2 - iVar16;
    }
    uVar6 = (iVar20 + iVar17 + iVar8 * -2) - 0x1c;
    local_68 = (ulong)uVar6;
    if (uVar6 - uVar7 == 0 || (int)uVar6 < (int)uVar7) {
      local_fc = 0;
    }
    else {
      local_fc = (int)((uVar6 - uVar7) + -0xe) / (iVar8 + 4);
    }
    local_50 = (ulong)(iVar8 + 4);
    iVar16 = local_fc - (local_fc != 0 && local_fc < (uint)local_60);
    local_58 = uVar18;
    if (iVar16 != 0) {
      pcVar21 = str_1000fee6;
      if (*(char *)(uVar18 + 0x974) != '\0') {
        pcVar21 = (char *)(uVar18 + 0x974);
      }
      bVar25 = false;
      snprintf((char *)local_1fe8,0x30,&DAT_1000fee1,pcVar21);
      uVar22 = local_38;
      if (*(int *)(uVar18 + 0x3e30) == 0) {
        bVar25 = *(int *)(uVar18 + 0x610) == 0;
      }
      iVar16 = iVar16 + -1;
      in_R9 = 0;
      recovered_1000dbd0(param_1,local_38 << 0x20 | 10,local_48,local_1fe8,1,0,bVar25);
      local_38 = (ulong)(uint)((int)uVar22 + (int)local_50);
      pcVar21 = (char *)(uVar18 + 0x995);
      uVar18 = 1;
      lVar23 = -7;
      local_e8 = pcVar21;
      do {
        if ((local_e8[lVar23 + 0xf7] != '\0') || (uVar18 == *(uint *)(local_58 + 0x610))) {
          if (iVar16 == 0) break;
          pcVar10 = str_1000f672;
          if (*pcVar21 != '\0') {
            pcVar10 = pcVar21;
          }
          snprintf((char *)local_1fe8,0x30,&DAT_1000fee1,pcVar10);
          uVar22 = local_38;
          bVar25 = false;
          if (*(int *)(local_58 + 0x3e30) == 0) {
            bVar25 = uVar18 == *(uint *)(local_58 + 0x610);
          }
          local_e0 = (void *)CONCAT44(PF_PART4(local_e0, 4),iVar16 + -1);
          in_R9 = uVar18 & 0xffffffff;
          recovered_1000dbd0(local_70,local_38 << 0x20 | 10,local_48,local_1fe8,1,(int)uVar18,bVar25
                            );
          local_38 = (ulong)(uint)((int)uVar22 + (int)local_50);
          iVar16 = (uint)local_e0;
        }
        uVar18 = uVar18 + 1;
        pcVar21 = pcVar21 + 0x21;
        lVar23 = lVar23 + 1;
      } while (lVar23 != 0);
    }
    uVar18 = local_58;
    param_1 = local_70;
    uVar22 = local_38;
    if (local_fc < (uint)local_60) {
      iVar16 = (int)local_38;
      if ((int)local_40 + iVar16 < (int)local_68) {
        uVar22 = local_38 << 0x20;
        local_168 = local_70;
        uStack_160 = 0x10;
        pf_app_terror_ui_button(&local_d8,str_1000feee,recovered_1000dde0,&local_168);
        local_1f98 = local_88;
        uStack_1f90 = uStack_80;
        local_1fa8 = local_98;
        uStack_1fa0 = uStack_90;
        local_1fb8 = local_a8;
        uStack_1fb0 = uStack_a0;
        local_1fc8 = local_b8;
        uStack_1fc0 = uStack_b0;
        local_1fe8[2] = (ulong *)local_c8;
        local_1fe8[3] = (ulong *)uStack_c0;
        local_1fe8[0] = local_d8;
        local_1fe8[1] = (ulong *)uStack_d0;
        if ((char)param_1[2] == '\0') {
          pvVar13 = (void *)param_1[1];
        }
        else {
          pvVar13 = (void *)0x0;
        }
        pf_app_terror_ui_view_draw((void *)*param_1,local_1fe8,uVar22 | 10,local_48,pvVar13);
        uVar22 = (ulong)(uint)(iVar16 + (int)local_50);
      }
    }
    iVar16 = *(int *)(uVar18 + 0x3d4);
    iVar8 = (int)uVar22;
    if (iVar16 < 1) {
      iVar16 = 10;
      if (iVar8 + 0x1a < (int)local_68) goto LAB_1000b294;
LAB_1000b3a3:
      iVar16 = 10;
    }
    else if (iVar8 + iVar16 + 0x10 < (int)local_68) {
LAB_1000b294:
      recovered_1000d900(param_1,(ulong)(iVar8 + 0xe) << 0x20 | 0xe,
                         ((ulong)(iVar16 + 2) << 0x20) + local_108,str_1000fefc,0x31,in_R9);
      iVar16 = *(int *)(uVar18 + 0x3d4);
      iVar17 = 10;
      if (0 < iVar16) {
        iVar17 = iVar16;
      }
      if ((int)local_40 + iVar8 + iVar17 + 0x18 < (int)local_68) {
        iVar20 = (int)local_40 + iVar8 + iVar17 + 0x18;
        uVar18 = (ulong)(iVar8 + iVar17 + 0x18) << 0x20 | 10;
        local_38 = local_50 << 0x20;
        iVar16 = 0;
        do {
          uVar7 = recovered_1000da70(local_58,iVar16);
          if (uVar7 == 0) break;
          snprintf((char *)local_1fe8,0x20,str_1000fdf6,uVar7);
          in_R9 = (ulong)uVar7;
          recovered_1000dbd0(local_70,uVar18,local_48,local_1fe8,4,uVar7,
                             *(uint *)(local_58 + 0x3e30) == uVar7);
          iVar16 = iVar16 + 1;
          iVar20 = iVar20 + (int)local_50;
          uVar18 = uVar18 + local_38;
        } while (iVar20 < (int)local_68);
        iVar16 = *(int *)(local_58 + 0x3d4);
        param_1 = local_70;
        uVar18 = local_58;
      }
      if (iVar16 < 1) goto LAB_1000b3a3;
    }
    uVar22 = local_68;
    pcVar21 = str_1000ff1c;
    if (*(char *)(uVar18 + 0x391f) != '\0') {
      pcVar21 = str_1000ff0c;
    }
    recovered_1000d900(param_1,local_68 << 0x20 | 0xe,((ulong)(iVar16 + 2) << 0x20) + local_108,
                       pcVar21,0x31,in_R9);
    iVar16 = *(int *)(uVar18 + 0x3d4) + 2;
    if (*(int *)(uVar18 + 0x3d4) < 1) {
      iVar16 = 0xc;
    }
    uStack_160 = 3;
    local_168 = param_1;
    pf_app_terror_ui_button(&local_d8,str_1000ff35,recovered_1000dde0,&local_168);
    local_1f98 = local_88;
    uStack_1f90 = uStack_80;
    local_1fa8 = local_98;
    uStack_1fa0 = uStack_90;
    local_1fb8 = local_a8;
    uStack_1fb0 = uStack_a0;
    local_1fc8 = local_b8;
    uStack_1fc0 = uStack_b0;
    local_1fe8[2] = (ulong *)local_c8;
    local_1fe8[3] = (ulong *)uStack_c0;
    local_1fe8[0] = local_d8;
    local_1fe8[1] = (ulong *)uStack_d0;
    if ((char)param_1[2] == '\0') {
      pvVar13 = (void *)param_1[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1fe8,(ulong)((int)uVar22 + iVar16 + 8) << 0x20 | 10,
                       local_48,pvVar13);
    iVar16 = 0xc;
    if (0 < *(int *)(uVar18 + 0x3d4)) {
      iVar16 = *(int *)(uVar18 + 0x3d4) + 2;
    }
    iVar8 = (int)local_40 + (int)local_68;
    uStack_160 = 2;
    local_168 = param_1;
    pf_app_terror_ui_button(&local_d8,str_1000fdd5,recovered_1000dde0,&local_168);
    local_1f98 = local_88;
    uStack_1f90 = uStack_80;
    local_1fa8 = local_98;
    uStack_1fa0 = uStack_90;
    local_1fb8 = local_a8;
    uStack_1fb0 = uStack_a0;
    local_1fc8 = local_b8;
    uStack_1fc0 = uStack_b0;
    local_1fe8[2] = (ulong *)local_c8;
    local_1fe8[3] = (ulong *)uStack_c0;
    local_1fe8[0] = local_d8;
    local_1fe8[1] = (ulong *)uStack_d0;
    if ((char)param_1[2] == '\0') {
      pvVar13 = (void *)param_1[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1fe8,(ulong)(iVar16 + iVar8 + 0xe) << 0x20 | 10,
                       local_48,pvVar13);
    uVar18 = *param_1;
    if (uVar18 != 0) goto LAB_1000b59a;
    iVar16 = 0xc;
    uVar6 = 0x220;
    uVar7 = 0xd8;
    local_38 = 0x1c;
    uVar18 = 0;
    iVar8 = 0x24;
  }
  else {
    uVar7 = *(uint *)(uVar18 + 4);
    if (uVar7 == 0) {
      local_40 = 0x1c;
      if (0 < *(int *)(uVar18 + 0x3d4)) {
        local_40 = (ulong)(*(int *)(uVar18 + 0x3d4) + 0x12);
      }
      iVar8 = 0xd8;
LAB_1000ac8a:
      iVar16 = 400;
      if (*(int *)(uVar18 + 8) != 0) {
        iVar16 = *(int *)(uVar18 + 8);
      }
      goto LAB_1000ac98;
    }
    iVar8 = 0xd8;
    if (uVar7 < 700) {
      iVar8 = 0xa4;
    }
    uVar6 = *(uint *)(uVar18 + 0x3d4);
    local_40 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      local_40 = 0x1c;
      if (0x207 < (int)uVar7) goto LAB_1000ac8a;
    }
    else if (0x207 < (int)uVar7) {
      local_40 = (ulong)(uVar6 + 0x12);
      goto LAB_1000ac8a;
    }
LAB_1000b59a:
    uVar9 = *(uint *)(uVar18 + 4);
    uVar6 = 0xa4;
    if (699 < uVar9) {
      uVar6 = 0xd8;
    }
    uVar7 = 0;
    if (0x207 < (int)uVar9) {
      uVar7 = uVar6;
    }
    bVar25 = uVar9 == 0;
    if (bVar25) {
      uVar7 = 0xd8;
    }
    uVar6 = 0x2f8;
    if (!bVar25) {
      uVar6 = uVar9;
    }
    uVar6 = uVar6 - uVar7;
    iVar17 = *(int *)(uVar18 + 0x3d4);
    in_R9 = 0x1c;
    if (0 < iVar17) {
      in_R9 = (ulong)(iVar17 + 0x12);
    }
    iVar16 = 0xc;
    if (0 < iVar17) {
      iVar16 = iVar17 + 2;
    }
    iVar8 = 0x24;
    local_38 = in_R9;
    if (!bVar25 && (int)uVar9 < 0x208) {
      iVar8 = 0x4c;
      if (0 < iVar17) {
        iVar8 = iVar17 + 0x42;
      }
    }
  }
  uVar9 = iVar8 + iVar16 * 2;
  uVar22 = (ulong)uVar9;
  local_58 = (ulong)uVar7;
  local_48 = (ulonglong)uVar6;
  uVar7 = terror_ui_colour(0);
  pf_app_terror_ui_rectangle(&local_d8,uVar7);
  local_1f98 = local_88;
  uStack_1f90 = uStack_80;
  local_1fa8 = local_98;
  uStack_1fa0 = uStack_90;
  local_1fb8 = local_a8;
  uStack_1fb0 = uStack_a0;
  local_1fc8 = local_b8;
  uStack_1fc0 = uStack_b0;
  local_1fe8[2] = (ulong *)local_c8;
  local_1fe8[3] = (ulong *)uStack_c0;
  local_1fe8[0] = local_d8;
  local_1fe8[1] = (ulong *)uStack_d0;
  if ((0 < (int)uVar6) && (0 < (int)uVar9)) {
    if ((char)param_1[2] == '\0') {
      pvVar13 = (void *)param_1[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1fe8,local_58,(uVar22 << 0x20) + local_48,pvVar13);
  }
  local_60 = uVar22;
  if (*(uint *)(uVar18 + 0x3e30) == 0) {
    lVar23 = (ulong)*(uint *)(uVar18 + 0x610) * 0x21;
    pcVar21 = str_1000fee6;
    if (*(char *)(uVar18 + 0x974 + lVar23) != '\0') {
      pcVar21 = (char *)(uVar18 + 0x974 + lVar23);
    }
    snprintf(local_1e8,0x38,&DAT_1000fee1,pcVar21);
  }
  else {
    snprintf(local_1e8,0x38,str_1000fdf6,*(uint *)(uVar18 + 0x3e30));
  }
  uVar7 = (uint)(0x1df < (int)local_48) * 0x10;
  local_68 = (ulong)uVar7;
  uVar7 = uVar7 + 0x34;
  uVar22 = 0xc;
  if (0 < *(int *)(uVar18 + 0x3d4)) {
    uVar22 = (ulong)(*(int *)(uVar18 + 0x3d4) + 2);
  }
  local_e8 = (char *)(ulong)((int)local_58 + 0xe);
  recovered_1000d900(param_1,(ulong)local_e8 | 0xc00000000,
                     (ulong)(((int)local_48 + uVar7 * -3) - 0x2c) | uVar22 << 0x20,local_1e8,1,in_R9
                    );
  uVar22 = local_38;
  local_50 = (ulong)(uVar7 * -3 - 0x1c);
  local_40 = local_38 << 0x20;
  local_e0 = (void *)(uVar7 | local_40);
  iVar16 = *(int *)(uVar18 + 4);
  if (iVar16 == 0) {
    iVar16 = 0x2f8;
  }
  uStack_160 = 5;
  local_168 = param_1;
  pf_app_terror_ui_button(&local_d8,str_1000ff48,recovered_1000dde0,&local_168);
  local_1f98 = local_88;
  uStack_1f90 = uStack_80;
  local_1fa8 = local_98;
  uStack_1fa0 = uStack_90;
  local_1fb8 = local_a8;
  uStack_1fb0 = uStack_a0;
  local_1fc8 = local_b8;
  uStack_1fc0 = uStack_b0;
  local_1fe8[2] = (ulong *)local_c8;
  local_1fe8[3] = (ulong *)uStack_c0;
  local_1fe8[0] = local_d8;
  local_1fe8[1] = (ulong *)uStack_d0;
  if (0 < (int)uVar22) {
    if ((char)param_1[2] == '\0') {
      pvVar13 = (void *)param_1[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1fe8,
                       (ulong)(uint)(iVar16 + (int)local_50) | 0x800000000,(ulonglong)local_e0,
                       pvVar13);
    param_1 = local_70;
  }
  iVar8 = (int)local_68 + 0x3c;
  iVar16 = 0x2f8;
  if (*(int *)(uVar18 + 4) != 0) {
    iVar16 = *(int *)(uVar18 + 4);
  }
  uStack_160 = 6;
  local_168 = param_1;
  pf_app_terror_ui_button(&local_d8,str_1000ff4e,recovered_1000dde0,&local_168);
  local_1f98 = local_88;
  uStack_1f90 = uStack_80;
  local_1fa8 = local_98;
  uStack_1fa0 = uStack_90;
  local_1fb8 = local_a8;
  uStack_1fb0 = uStack_a0;
  local_1fc8 = local_b8;
  uStack_1fc0 = uStack_b0;
  local_1fe8[2] = (ulong *)local_c8;
  local_1fe8[3] = (ulong *)uStack_c0;
  local_1fe8[0] = local_d8;
  local_1fe8[1] = (ulong *)uStack_d0;
  if (0 < (int)local_38) {
    if ((char)param_1[2] == '\0') {
      pvVar13 = (void *)param_1[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*param_1,local_1fe8,
                       (ulong)(uint)(iVar16 + (int)local_50 + iVar8) | 0x800000000,
                       (ulonglong)local_e0,pvVar13);
    param_1 = local_70;
  }
  iVar16 = 0x2f8;
  if (*(int *)(uVar18 + 4) != 0) {
    iVar16 = *(int *)(uVar18 + 4);
  }
  uStack_160 = 7;
  local_168 = param_1;
  pf_app_terror_ui_button(&local_d8,str_1000ff55,recovered_1000dde0,&local_168);
  local_1f98 = local_88;
  uStack_1f90 = uStack_80;
  local_1fa8 = local_98;
  uStack_1fa0 = uStack_90;
  local_1fb8 = local_a8;
  uStack_1fb0 = uStack_a0;
  local_1fc8 = local_b8;
  uStack_1fc0 = uStack_b0;
  local_1fe8[2] = (ulong *)local_c8;
  local_1fe8[3] = (ulong *)uStack_c0;
  local_1fe8[0] = local_d8;
  local_1fe8[1] = (ulong *)uStack_d0;
  iVar17 = (int)local_38;
  if (0 < iVar17) {
    if ((char)local_70[2] == '\0') {
      pvVar13 = (void *)local_70[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*local_70,local_1fe8,
                       (ulong)(uint)((int)local_50 + iVar8 * 2 + iVar16) | 0x800000000,
                       (ulonglong)local_e0,pvVar13);
  }
  pcVar21 = (char *)(uVar18 + 0x470);
  if (*(uint *)(uVar18 + 0x38f4) == 0) {
    pcVar10 = str_1000ff6b;
    if (*pcVar21 != '\0') {
      pcVar10 = pcVar21;
    }
    snprintf((char *)local_1fe8,0xa0,&DAT_1000f3b9,pcVar10);
  }
  else {
    snprintf((char *)local_1fe8,0xa0,str_1000ff5d,*(uint *)(uVar18 + 0x38f4),pcVar21);
  }
  uVar24 = local_48;
  puVar19 = local_70;
  iVar16 = (int)local_48;
  uVar22 = 0xc;
  if (0 < *(int *)(uVar18 + 0x3d4)) {
    uVar22 = (ulong)(*(int *)(uVar18 + 0x3d4) + 2);
  }
  recovered_1000d900(local_70,((ulong)(iVar17 + 0xe) << 0x20) + (long)local_e8,
                     (ulong)(iVar16 - 0x1c) | uVar22 << 0x20,local_1fe8,0x31,in_R9);
  if (local_58 == 0) {
    local_38 = CONCAT71(PF_PART7(local_38, 1),iVar17 < 1);
    uVar22 = 0x3c;
    if (0 < *(int *)(uVar18 + 0x3d4)) {
      uVar22 = (ulong)(*(int *)(uVar18 + 0x3d4) * 2 + 0x28);
    }
    iVar8 = iVar16 + -0x2f;
    if (-1 < iVar16 + -0x32) {
      iVar8 = iVar16 + -0x32;
    }
    uVar7 = iVar8 >> 2;
    uVar22 = uVar22 << 0x20;
    uVar18 = local_40 | uVar7;
    local_f8 = puVar19;
    local_f0 = 0;
    pf_app_terror_ui_button(&local_168,str_1000ff9e,recovered_1000dde0,&local_f8);
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_98 = local_128;
    uStack_90 = uStack_120;
    local_a8 = local_138;
    uStack_a0 = uStack_130;
    local_b8 = local_148;
    uStack_b0 = uStack_140;
    local_c8 = local_158;
    uStack_c0 = uStack_150;
    local_d8 = local_168;
    uStack_d0 = uStack_160;
    bVar25 = 0x35 < iVar16;
    cVar5 = (char)local_38;
    if (bVar25 && (char)local_38 == '\0') {
      if ((char)puVar19[2] == '\0') {
        pvVar13 = (void *)puVar19[1];
      }
      else {
        pvVar13 = (void *)0x0;
      }
      pf_app_terror_ui_view_draw((void *)*puVar19,&local_d8,uVar22 + 10,uVar18,pvVar13);
    }
    local_f8 = puVar19;
    local_f0 = 0x10;
    pf_app_terror_ui_button(&local_168,str_1000ffa4,recovered_1000dde0,&local_f8);
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_98 = local_128;
    uStack_90 = uStack_120;
    local_a8 = local_138;
    uStack_a0 = uStack_130;
    local_b8 = local_148;
    uStack_b0 = uStack_140;
    local_c8 = local_158;
    uStack_c0 = uStack_150;
    local_d8 = local_168;
    uStack_d0 = uStack_160;
    if (bVar25 && cVar5 == '\0') {
      if ((char)puVar19[2] == '\0') {
        pvVar13 = (void *)puVar19[1];
      }
      else {
        pvVar13 = (void *)0x0;
      }
      pf_app_terror_ui_view_draw((void *)*puVar19,&local_d8,uVar7 + 0x14 | uVar22,uVar18,pvVar13);
    }
    local_f8 = puVar19;
    local_f0 = 3;
    pf_app_terror_ui_button(&local_168,str_1000ffad,recovered_1000dde0,&local_f8);
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_98 = local_128;
    uStack_90 = uStack_120;
    local_a8 = local_138;
    uStack_a0 = uStack_130;
    local_b8 = local_148;
    uStack_b0 = uStack_140;
    local_c8 = local_158;
    uStack_c0 = uStack_150;
    local_d8 = local_168;
    uStack_d0 = uStack_160;
    if (bVar25 && cVar5 == '\0') {
      if ((char)puVar19[2] == '\0') {
        pvVar13 = (void *)puVar19[1];
      }
      else {
        pvVar13 = (void *)0x0;
      }
      pf_app_terror_ui_view_draw((void *)*puVar19,&local_d8,uVar7 * 2 + 0x1e | uVar22,uVar18,pvVar13);
    }
    local_f8 = puVar19;
    local_f0 = 2;
    pf_app_terror_ui_button(&local_168,str_1000ffb4,recovered_1000dde0,&local_f8);
    uVar24 = local_48;
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_98 = local_128;
    uStack_90 = uStack_120;
    local_a8 = local_138;
    uStack_a0 = uStack_130;
    local_b8 = local_148;
    uStack_b0 = uStack_140;
    local_c8 = local_158;
    uStack_c0 = uStack_150;
    local_d8 = local_168;
    uStack_d0 = uStack_160;
    if (bVar25 && cVar5 == '\0') {
      if ((char)puVar19[2] == '\0') {
        pvVar13 = (void *)puVar19[1];
      }
      else {
        pvVar13 = (void *)0x0;
      }
      pf_app_terror_ui_view_draw((void *)*puVar19,&local_d8,uVar22 | uVar7 * 3 + 0x28,uVar18,pvVar13);
    }
  }
  uVar7 = terror_ui_colour(0x15);
  pf_app_terror_ui_rectangle(&local_168,uVar7);
  local_88 = local_118;
  uStack_80 = uStack_110;
  local_98 = local_128;
  uStack_90 = uStack_120;
  local_a8 = local_138;
  uStack_a0 = uStack_130;
  local_b8 = local_148;
  uStack_b0 = uStack_140;
  local_c8 = local_158;
  uStack_c0 = uStack_150;
  local_d8 = local_168;
  uStack_d0 = uStack_160;
  if (0 < (int)uVar24) {
    if ((char)puVar19[2] == '\0') {
      pvVar13 = (void *)puVar19[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*puVar19,&local_d8,((ulong)((int)local_60 - 1) << 0x20) + local_58,
                       uVar24 + 0x100000000,pvVar13);
  }
  uVar18 = *puVar19;
  auVar26 = recovered_10007d20(uVar18);
  uVar7 = terror_ui_colour(0);
  pf_app_terror_ui_rectangle(&local_d8,uVar7);
  local_1f98 = local_88;
  uStack_1f90 = uStack_80;
  local_1fa8 = local_98;
  uStack_1fa0 = uStack_90;
  local_1fb8 = local_a8;
  uStack_1fb0 = uStack_a0;
  local_1fc8 = local_b8;
  uStack_1fc0 = uStack_b0;
  local_1fe8[2] = (ulong *)local_c8;
  local_1fe8[3] = (ulong *)uStack_c0;
  local_1fe8[0] = local_d8;
  local_1fe8[1] = (ulong *)uStack_d0;
  iVar16 = PF_PART4(auVar26, 8);
  if (0 < PF_PART4(auVar26, 12) && 0 < iVar16) {
    if ((char)puVar19[2] == '\0') {
      pvVar13 = (void *)puVar19[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*puVar19,local_1fe8,PF_PART8(auVar26, 0),PF_PART8(auVar26, 8),pvVar13);
  }
  if (uVar18 == 0) {
    uVar7 = (iVar16 + -0x40) / 6;
LAB_1000bff9:
    local_e8 = (char *)0xa;
  }
  else {
    local_e8 = (char *)(ulong)*(uint *)(uVar18 + 0x3d4);
    iVar8 = 6;
    if (0 < *(int *)(uVar18 + 0x3d0)) {
      iVar8 = *(int *)(uVar18 + 0x3d0);
    }
    uVar7 = (iVar16 + -0x40) / iVar8;
    if ((int)*(uint *)(uVar18 + 0x3d4) < 1) goto LAB_1000bff9;
  }
  PF_PART8(auVar4, 8) = local_180;
  PF_PART8(auVar4, 0) = local_178;
  if (0 < (int)uVar7) {
    uVar6 = (int)local_e8 + 2;
    local_50 = (ulong)uVar6;
    local_40 = PF_PART8(auVar26, 0) >> 0x20;
    uVar22 = (ulong)*(uint *)(uVar18 + 0x3db4);
    if (uVar22 != 0) {
      local_68 = (ulong)((PF_PART4(auVar26, 4) + PF_PART4(auVar26, 12)) - 8);
      uVar15 = 0xef;
      if (uVar7 < 0xef) {
        uVar15 = (ulong)uVar7;
      }
      local_188 = (ulong)(PF_PART4(auVar26, 0) + 4);
      local_58 = (ulong)(PF_PART4(auVar26, 0) + 0x32);
      in_R9 = CONCAT44(uVar6,iVar16 + -0x36);
      lVar23 = uVar22 * 0x10c + -0xf0;
      local_e8 = (char *)(ulong)((int)local_e8 - 0xc);
      uVar6 = 0;
      uVar7 = 0;
      local_108 = uVar18;
      local_48 = uVar15;
      local_38 = in_R9;
      do {
        lVar3 = *(long *)(uVar18 + 0x3ca0);
        uVar22 = uVar22 - 1;
        if (*(int *)(lVar3 + uVar22 * 0x10c) == *(int *)(uVar18 + 0x5c0)) {
          uVar12 = uVar22 * 0x10c + lVar3;
          if (*(int *)(uVar18 + 0x3e30) == 0) {
            if ((*(int *)(uVar12 + 0x10) == *(int *)(uVar18 + 0x610)) &&
               (*(int *)(uVar12 + 8) == -1)) goto LAB_1000c131;
          }
          else {
            iVar16 = *(int *)(uVar12 + 8);
            if (*(char *)(uVar12 + 0x14) != '\x01') {
              if (iVar16 == -1) goto LAB_1000c0c2;
              iVar16 = *(int *)(uVar12 + 4);
            }
            if (iVar16 == *(int *)(uVar18 + 0x3e30)) {
LAB_1000c131:
              uVar9 = uVar6 + 1;
              bVar25 = *(uint *)(uVar18 + 0x618) <= uVar6;
              uVar6 = uVar9;
              if (bVar25) {
                cVar5 = *(char *)(uVar12 + 0x1c);
                local_198 = uVar22;
                local_190 = lVar23;
                local_16c = uVar9;
                local_fc = uVar7;
                local_60 = uVar12;
                if (cVar5 == '\0') {
                  local_1fe8[0] = (ulong *)((ulong)local_1fe8[0] & 0xffffffffffffff00);
                  uVar22 = 1;
                }
                else {
                  pvVar13 = (void *)(uVar12 + 0x1c);
                  lVar11 = 0;
                  uVar18 = 0;
                  local_e0 = pvVar13;
                  do {
                    local_180 = PF_PART8(auVar26, 8);
                    local_178 = PF_PART8(auVar26, 0);
                    uVar12 = 0;
                    uVar22 = 0;
                    cVar2 = cVar5;
                    while( true ) {
                      if ((cVar2 == '\0') || (cVar2 == '\n')) goto LAB_1000c1c3;
                      if (uVar15 == uVar12) break;
                      if (cVar2 == ' ') {
                        uVar22 = uVar12;
                      }
                      cVar2 = *(char *)((long)pvVar13 + uVar12 + 1);
                      uVar12 = uVar12 + 1;
                    }
                    uVar12 = uVar15;
LAB_1000c1c3:
                    if (uVar22 == 0) {
                      uVar22 = uVar12;
                    }
                    if (cVar2 == '\n') {
                      uVar22 = uVar12;
                    }
                    if (cVar2 == '\0') {
                      uVar22 = uVar12;
                    }
                    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
                      if (!SBORROW1('\0',*(byte *)((long)pvVar13 + uVar22) & 0xc0))
                      goto LAB_1000c240;
                    }
                    if (cVar5 == '\n') {
                      uVar22 = 0;
                    }
                    else {
                      uVar22 = 2;
                      do {
                        if (!SBORROW1('\0',*(byte *)((long)pvVar13 + (uVar22 - 1)) & 0xc0)) {
                          uVar22 = uVar22 - 1;
                          goto LAB_1000c240;
                        }
                        if (!SBORROW1('\0',*(byte *)((long)pvVar13 + uVar22) & 0xc0))
                        goto LAB_1000c240;
                        uVar22 = uVar22 + 2;
                      } while (uVar22 != 0xf0);
                      uVar22 = 0xef;
                    }
LAB_1000c240:
                    memcpy(local_1fe8 + uVar18 * 0x1e,pvVar13,uVar22);
                    PF_PART8(auVar26, 8) = local_180;
                    PF_PART8(auVar26, 0) = local_178;
                    *(undefined1 *)(uVar22 + (long)(local_1fe8 + uVar18 * 0x1e)) = 0;
                    lVar1 = uVar22 + lVar11;
                    if (*(char *)((long)local_e0 + lVar1) == '\n') {
                      cVar5 = *(char *)((long)local_e0 + lVar1 + 1);
                      lVar11 = lVar1 + 1;
                    }
                    else {
                      lVar11 = lVar11 + uVar22 + -1;
                      do {
                        cVar5 = *(char *)(lVar3 + lVar23 + 1 + lVar11);
                        lVar11 = lVar11 + 1;
                      } while (cVar5 == ' ');
                    }
                    uVar22 = uVar18 + 1;
                    if (cVar5 == '\0') break;
                    pvVar13 = (void *)((long)local_e0 + lVar11);
                    bVar25 = uVar18 < 0x1f;
                    uVar15 = local_48;
                    uVar18 = uVar22;
                  } while (bVar25);
                  uVar18 = local_108;
                  puVar19 = local_70;
                }
                uVar15 = local_60;
                local_180 = PF_PART8(auVar26, 8);
                local_178 = PF_PART8(auVar26, 0);
                iVar8 = (int)local_68;
                iVar16 = ((iVar8 - (int)local_40) + -0xe) / (int)local_50;
                if (iVar16 < 2) {
                  uVar7 = local_fc;
                  break;
                }
                uVar7 = iVar16 - 1;
                uVar6 = (uint)uVar22;
                if (uVar6 < uVar7) {
                  uVar7 = uVar6;
                }
                local_e0 = (void *)CONCAT44(PF_PART4(local_e0, 4),uVar7);
                if (*(char *)(local_60 + 0x14) == '\x01') {
                  pcVar21 = str_1000ffc3;
                  if ((*(char *)(local_60 + 0x16) == '\0') &&
                     (pcVar21 = &DAT_1000f1f9, *(char *)(local_60 + 0x15) != '\0')) {
                    pcVar21 = str_1000ffd4;
                  }
                  snprintf(local_1e8,0x40,str_1000ffbd,pcVar21);
                  snprintf((char *)&local_f8,4,&DAT_1000ffde);
                }
                else {
                  snprintf(local_1e8,0x40,str_1000fec5,*(uint *)(local_60 + 4));
                  snprintf((char *)&local_f8,4,&DAT_1000ffe0,(uint)*(byte *)(uVar15 + 4));
                }
                pf_app_terror_ui_text(&local_d8,(char *)&local_f8);
                view.words[1] = uStack_d0;
                view.words[0] = (ulonglong)local_d8;
                view.words[2] = local_c8;
                view.words[3] = uStack_c0;
                view.words[4] = local_b8;
                view.words[5] = uStack_b0;
                view.words[6] = local_a8;
                view.words[7] = uStack_a0;
                view.words[8] = local_98;
                view.words[9] = uStack_90;
                view.words[10] = local_88;
                view.words[0xb] = uStack_80;
                pf_app_terror_ui_view_alignment(&local_168,view,1);
                uVar7 = terror_ui_colour(4);
                view_00.words[1] = uStack_160;
                view_00.words[0] = (ulonglong)local_168;
                view_00.words[2] = local_158;
                view_00.words[3] = uStack_150;
                view_00.words[4] = local_148;
                view_00.words[5] = uStack_140;
                view_00.words[6] = local_138;
                view_00.words[7] = uStack_130;
                view_00.words[8] = local_128;
                view_00.words[9] = uStack_120;
                view_00.words[10] = local_118;
                view_00.words[0xb] = uStack_110;
                pf_app_terror_ui_view_foreground(&local_d8,view_00,uVar7);
                local_118 = local_88;
                uStack_110 = uStack_80;
                local_128 = local_98;
                uStack_120 = uStack_90;
                local_138 = local_a8;
                uStack_130 = uStack_a0;
                local_148 = local_b8;
                uStack_140 = uStack_b0;
                local_158 = local_c8;
                uStack_150 = uStack_c0;
                local_168 = local_d8;
                uStack_160 = uStack_d0;
                uVar7 = terror_ui_colour(0x2d);
                view_01.words[1] = uStack_160;
                view_01.words[0] = (ulonglong)local_168;
                view_01.words[2] = local_158;
                view_01.words[3] = uStack_150;
                view_01.words[4] = local_148;
                view_01.words[5] = uStack_140;
                view_01.words[6] = local_138;
                view_01.words[7] = uStack_130;
                view_01.words[8] = local_128;
                view_01.words[9] = uStack_120;
                view_01.words[10] = local_118;
                view_01.words[0xb] = uStack_110;
                pf_app_terror_ui_view_background(&local_d8,view_01,uVar7);
                local_118 = local_88;
                uStack_110 = uStack_80;
                local_128 = local_98;
                uStack_120 = uStack_90;
                local_138 = local_a8;
                uStack_130 = uStack_a0;
                local_148 = local_b8;
                uStack_140 = uStack_b0;
                local_158 = local_c8;
                uStack_150 = uStack_c0;
                local_168 = local_d8;
                uStack_160 = uStack_d0;
                if ((char)puVar19[2] == '\0') {
                  pvVar13 = (void *)puVar19[1];
                }
                else {
                  pvVar13 = (void *)0x0;
                }
                iVar16 = ~(uint)local_e0 * (int)local_50;
                iVar8 = iVar8 + iVar16;
                uVar18 = (ulong)(iVar8 - 0xe) << 0x20;
                pf_app_terror_ui_view_draw((void *)*puVar19,&local_d8,uVar18 + local_188,0x2400000024,
                                   pvVar13);
                uVar14 = 0x12;
                if ((*(char *)(local_60 + 0x16) == '\0') &&
                   (uVar14 = 4, *(char *)(local_60 + 0x15) != '\0')) {
                  uVar14 = 0x31;
                }
                recovered_1000d900(puVar19,uVar18 | local_58,local_38,local_1e8,uVar14,in_R9);
                uVar18 = local_50;
                uVar22 = (ulong)((uint)local_e0 + ((uint)local_e0 == 0));
                uVar6 = uVar6 - (uint)local_e0;
                uVar7 = (int)local_68 + (int)local_e8 + iVar16;
                do {
                  recovered_1000d900(local_70,((ulong)uVar7 << 0x20) + local_58,local_38,
                                     local_1fe8 + (ulong)uVar6 * 0x1e,1,in_R9);
                  PF_PART8(auVar26, 8) = local_180;
                  PF_PART8(auVar26, 0) = local_178;
                  uVar6 = uVar6 + 1;
                  uVar7 = uVar7 + (int)uVar18;
                  uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
                local_68 = (ulong)(iVar8 - 0x16);
                uVar7 = local_fc + 1;
                uVar22 = local_198;
                uVar15 = local_48;
                lVar23 = local_190;
                uVar18 = local_108;
                puVar19 = local_70;
                uVar6 = local_16c;
              }
            }
          }
        }
LAB_1000c0c2:
        lVar23 = lVar23 + -0x10c;
      } while (uVar22 != 0);
      auVar4 = auVar26;
      if (uVar7 != 0) goto LAB_1000c7e1;
    }
    local_180 = PF_PART8(auVar26, 8);
    local_178 = PF_PART8(auVar26, 0);
    if (*(uint *)(uVar18 + 0x3e30) == 0) {
      lVar23 = (ulong)*(uint *)(uVar18 + 0x610) * 0x21;
      pcVar21 = str_1000fee6;
      if (*(char *)(uVar18 + 0x974 + lVar23) != '\0') {
        pcVar21 = (char *)(uVar18 + 0x974 + lVar23);
      }
      snprintf((char *)&local_d8,0x38,&DAT_1000fee1,pcVar21);
    }
    else {
      snprintf((char *)&local_d8,0x38,str_1000fdf6,*(uint *)(uVar18 + 0x3e30));
    }
    snprintf((char *)local_1fe8,0x50,str_1000ffe5,&local_d8);
    uVar18 = local_50;
    iVar8 = (int)local_178 + 0x10;
    iVar16 = (int)local_40;
    uVar22 = (ulong)((int)local_180 - 0x20) | local_50 << 0x20;
    recovered_1000d900(puVar19,CONCAT44(iVar16 + 0x18,iVar8),uVar22,local_1fe8,1,in_R9);
    recovered_1000d900(puVar19,CONCAT44(iVar16 + (int)uVar18 * 2 + 0x18,iVar8),uVar22,str_1000fff3,
                       0x31,in_R9);
    PF_PART8(auVar4, 8) = local_180;
    PF_PART8(auVar4, 0) = local_178;
  }
LAB_1000c7e1:
  local_180 = PF_PART8(auVar4, 8);
  local_178 = PF_PART8(auVar4, 0);
  uVar18 = *puVar19;
  auVar26 = recovered_1000e480(uVar18);
  if (*(uint *)(uVar18 + 0x3e30) == 0) {
    lVar23 = (ulong)*(uint *)(uVar18 + 0x610) * 0x21;
    pcVar21 = str_1000fee6;
    if (*(char *)(uVar18 + 0x974 + lVar23) != '\0') {
      pcVar21 = (char *)(uVar18 + 0x974 + lVar23);
    }
    snprintf(local_1e8,0x38,&DAT_1000fee1,pcVar21);
  }
  else {
    snprintf(local_1e8,0x38,str_1000fdf6,*(uint *)(uVar18 + 0x3e30));
  }
  bVar25 = false;
  snprintf((char *)&local_168,0x50,str_1001000f,local_1e8);
  if ((*(uint *)(uVar18 + 0x3b8) & 6) == 2) {
    bVar25 = *(int *)(uVar18 + 0x3dc0) == 0;
  }
  local_f0 = 0xd;
  local_f8 = puVar19;
  pf_app_terror_ui_text_field(&local_d8,*(char **)(uVar18 + 0x3d8),(ulong)&local_168,bVar25,
                     recovered_1000dde0,&local_f8);
  local_1f98 = local_88;
  uStack_1f90 = uStack_80;
  local_1fa8 = local_98;
  uStack_1fa0 = uStack_90;
  local_1fb8 = local_a8;
  uStack_1fb0 = uStack_a0;
  local_1fc8 = local_b8;
  uStack_1fc0 = uStack_b0;
  local_1fe8[2] = (ulong *)local_c8;
  local_1fe8[3] = (ulong *)uStack_c0;
  local_1fe8[0] = local_d8;
  local_1fe8[1] = (ulong *)uStack_d0;
  if (0 < PF_PART4(auVar26, 12) && 0 < PF_PART4(auVar26, 8)) {
    if ((char)puVar19[2] == '\0') {
      pvVar13 = (void *)puVar19[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*puVar19,local_1fe8,PF_PART8(auVar26, 0),PF_PART8(auVar26, 8),pvVar13);
  }
  local_f0 = 8;
  local_f8 = puVar19;
  pf_app_terror_ui_button(&local_d8,&DAT_1001001a,recovered_1000dde0,&local_f8);
  local_1f98 = local_88;
  uStack_1f90 = uStack_80;
  local_1fa8 = local_98;
  uStack_1fa0 = uStack_90;
  local_1fb8 = local_a8;
  uStack_1fb0 = uStack_a0;
  local_1fc8 = local_b8;
  uStack_1fc0 = uStack_b0;
  local_1fe8[2] = (ulong *)local_c8;
  local_1fe8[3] = (ulong *)uStack_c0;
  local_1fe8[0] = local_d8;
  local_1fe8[1] = (ulong *)uStack_d0;
  if (0 < PF_PART4(auVar26, 12)) {
    if ((char)puVar19[2] == '\0') {
      pvVar13 = (void *)puVar19[1];
    }
    else {
      pvVar13 = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*puVar19,local_1fe8,
                       (ulong)(PF_PART4(auVar26, 8) + PF_PART4(auVar26, 0) + 8) |
                       PF_PART8(auVar26, 0) & 0xffffffff00000000,PF_PART8(auVar26, 8) & 0xffffffff00000000 | 0x58,
                       pvVar13);
  }
  puVar19[1] = local_1a0;
  recovered_1000ca60((long *)puVar19);
  return;
}

#undef DAT_1000f1f9
#undef DAT_1000f3b9
#undef DAT_1000fee1
#undef DAT_1000ffde
#undef DAT_1000ffe0
#undef DAT_1001001a
#undef str_1000f170
#undef str_1000f672
#undef str_1000fdd5
#undef str_1000fdf6
#undef str_1000fec5
#undef str_1000fecb
#undef str_1000fed8
#undef str_1000fee6
#undef str_1000feee
#undef str_1000fefc
#undef str_1000ff0c
#undef str_1000ff1c
#undef str_1000ff35
#undef str_1000ff48
#undef str_1000ff4e
#undef str_1000ff55
#undef str_1000ff5d
#undef str_1000ff6b
#undef str_1000ff9e
#undef str_1000ffa4
#undef str_1000ffad
#undef str_1000ffb4
#undef str_1000ffbd
#undef str_1000ffc3
#undef str_1000ffd4
#undef str_1000ffe5
#undef str_1000fff3
#undef str_1001000f
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef uStack_1fc0
#undef uStack_1fb0
#undef uStack_1fa0
#undef uStack_1f90
#undef uStack_160
#undef uStack_150
#undef uStack_140
#undef uStack_130
#undef uStack_120
#undef uStack_110
#undef uStack_d0
#undef uStack_c0
#undef uStack_b0
#undef uStack_a0
#undef uStack_90
#undef uStack_80
#undef local_1fe8
#undef local_1fc8
#undef local_1fb8
#undef local_1fa8
#undef local_1f98
#undef local_1e8
#undef local_1a0
#undef local_198
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_16c
#undef local_168
#undef local_158
#undef local_148
#undef local_138
#undef local_128
#undef local_118
#undef local_108
#undef local_fc
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_98
#undef local_88

#undef DAT_1000fe32
#define DAT_1000fe32 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1046U)))
#undef DAT_1000fe37
#define DAT_1000fe37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104bU)))
#undef str_1000fdb9
#define str_1000fdb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfcdU)))
#undef str_1000fdd5
#define str_1000fdd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfe9U)))
#undef str_1000fdf6
#define str_1000fdf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100aU)))
#undef str_1000fdfe
#define str_1000fdfe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1012U)))
#undef str_1000fe11
#define str_1000fe11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1025U)))
#undef str_1000fe21
#define str_1000fe21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1035U)))
#undef str_1000fe29
#define str_1000fe29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x103dU)))
#undef str_1000fe3b
#define str_1000fe3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x104fU)))
#undef str_1000fe47
#define str_1000fe47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x105bU)))
#undef str_1000fe54
#define str_1000fe54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1068U)))
#undef str_1000fe72
#define str_1000fe72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1086U)))
#undef str_1000fe9f
#define str_1000fe9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10b3U)))
#undef str_1000feb1
#define str_1000feb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10c5U)))
#undef str_1000febe
#define str_1000febe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10d2U)))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 248))
#define local_c0 (*(char * *)(pf_stack_frame + 256))
#define local_b8 (*(ulonglong *)(pf_stack_frame + 264))
#define local_b0 (*(ulong *)(pf_stack_frame + 272))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 280))
#define local_98 (*(undefined8 *)(pf_stack_frame + 296))
#define local_88 (*(undefined8 *)(pf_stack_frame + 312))
#define local_78 (*(undefined8 *)(pf_stack_frame + 328))
#define local_68 (*(undefined8 *)(pf_stack_frame + 344))
#define local_58 (*(undefined8 *)(pf_stack_frame + 360))
#define local_40 (*(ulong *)(pf_stack_frame + 384))
#define local_38 (*(long * *)(pf_stack_frame + 392))
#define uStack_128 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_118 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_108 (*(undefined8 *)(pf_stack_frame + 184))
#define uStack_f8 (*(undefined8 *)(pf_stack_frame + 200))
#define uStack_e8 (*(undefined8 *)(pf_stack_frame + 216))
#define uStack_d8 (*(undefined8 *)(pf_stack_frame + 232))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 288))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 304))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 320))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 336))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 352))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 368))
#define local_1a8 (*(ulong *)(pf_stack_frame + 24))
#define local_1a0 (*(ulonglong *)(pf_stack_frame + 32))
#define local_18c (*(byte *)(pf_stack_frame + 52))
#define local_188 (*(long * *)(pf_stack_frame + 56))
#define local_180 (*(undefined8 *)(pf_stack_frame + 64))
#define local_140 (*(int *)(pf_stack_frame + 128))
#define local_13c (*(uint *)(pf_stack_frame + 132))
#define local_138 (*(char * *)(pf_stack_frame + 136))
#define local_130 (*(ulong *)(pf_stack_frame + 144))
#define local_120 (*(ulong *)(pf_stack_frame + 160))
#define local_110 (*(undefined8 *)(pf_stack_frame + 176))
#define local_100 (*(undefined8 *)(pf_stack_frame + 192))
#define local_f0 (*(undefined8 *)(pf_stack_frame + 208))
#define local_e0 (*(undefined8 *)(pf_stack_frame + 224))
#define local_d0 (*(long * *)(pf_stack_frame + 240))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca60
 */

void recovered_1000ca60(long *param_1)

{
  unsigned char pf_stack_frame[480] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined *puVar9;
  char *capacity;
  long *plVar10;
  int iVar11;
  void *pvVar12;
  undefined8 in_R9;
  long **context;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;

  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x3dc0) != 0) {
    local_38 = param_1;
    recovered_1000d6e0((int *)&local_1a8,lVar1);
    uVar5 = terror_ui_colour(0x2d);
    pf_app_terror_ui_rectangle(&local_130,uVar5);
    local_58 = local_e0;
    uStack_50 = uStack_d8;
    local_68 = local_f0;
    uStack_60 = uStack_e8;
    local_78 = local_100;
    uStack_70 = uStack_f8;
    local_88 = local_110;
    uStack_80 = uStack_108;
    local_98 = local_120;
    uStack_90 = uStack_118;
    local_a8 = local_130;
    uStack_a0 = uStack_128;
    if (0 < (int)(local_1a0 >> 0x20) && 0 < (int)local_1a0) {
      if ((char)local_38[2] == '\0') {
        pvVar12 = (void *)local_38[1];
      }
      else {
        pvVar12 = (void *)0x0;
      }
      pf_app_terror_ui_view_draw((void *)*local_38,&local_a8,local_1a8,local_1a0,pvVar12);
    }
    plVar10 = local_38;
    uVar7 = 0xc;
    if (0 < *(int *)(lVar1 + 0x3d4)) {
      uVar7 = (ulong)(*(int *)(lVar1 + 0x3d4) + 2);
    }
    pcVar8 = str_1000fdd5;
    if (*(int *)(lVar1 + 0x3dc0) == 2) {
      pcVar8 = str_1000fdb9;
    }
    recovered_1000d900(local_38,((ulong)((int)local_1a8 + 0x12) | local_1a8 & 0xffffffff00000000) +
                                0x1000000000,(ulong)((int)local_1a0 - 0x24) | uVar7 << 0x20,pcVar8,1
                       ,in_R9);
    local_40 = lVar1;
    if (*(int *)(lVar1 + 0x3dc0) == 2) {
      recovered_1000d6e0((int *)&local_a8,lVar1);
      iVar11 = (int)local_a8;
      iVar4 = (int)uStack_a0;
      iVar14 = (int)uStack_90 + PF_PART4(local_a8, 4);
      iVar13 = (int)local_98;
      local_188 = plVar10;
      local_180 = 0xd;
      pf_app_terror_ui_text_field(&local_130,(char *)(lVar1 + 0x3dcd),((uintptr_t)pf_module_state + 0xffaU),'\x01',recovered_1000dde0,
                         &local_188);
      local_58 = local_e0;
      uStack_50 = uStack_d8;
      local_68 = local_f0;
      uStack_60 = uStack_e8;
      local_78 = local_100;
      uStack_70 = uStack_f8;
      local_88 = local_110;
      uStack_80 = uStack_108;
      local_98 = local_120;
      uStack_90 = uStack_118;
      local_a8 = local_130;
      uStack_a0 = uStack_128;
      if (0 < iVar13 && 0x24 < iVar4) {
        if ((char)local_38[2] == '\0') {
          pvVar12 = (void *)local_38[1];
        }
        else {
          pvVar12 = (void *)0x0;
        }
        pf_app_terror_ui_view_draw((void *)*local_38,&local_a8,CONCAT44(iVar14,iVar11 + 0x12),
                           CONCAT44(iVar13,iVar4 + -0x24),pvVar12);
      }
      local_b0 = CONCAT44(PF_PART4(local_b0, 4),2 - (uint)local_18c);
      local_b8 = CONCAT71(PF_PART7(local_b8, 1),local_18c) ^ 1;
      local_13c = local_18c ^ 3;
      uVar5 = 0;
      uVar7 = local_40;
      do {
        iVar11 = (*(int *)(uVar7 + 0x3e34) << ((byte)local_b8 & 0x1f)) + uVar5;
        uVar5 = uVar5 + 1;
        uVar6 = recovered_1000da70(uVar7,iVar11);
        if (uVar6 != 0) {
          snprintf((char *)&local_188,0x30,str_1000fdf6,uVar6);
          recovered_1000d6e0((int *)&local_a8,uVar7);
          if ((uVar5 & 0x7ffffffe) == 4) {
            iVar11 = ((int)uStack_a0 - ((int)uStack_a0 + -0x2c >> 0x1f)) + -0x2c >> 1;
            uVar2 = 4 - PF_PART1(uStack_90, 4);
          }
          else {
            iVar11 = (int)uStack_a0 + -0x24;
            uVar2 = uVar5;
          }
          local_c0 = (char *)CONCAT44(PF_PART4(local_c0, 4),PF_PART4(local_98, 4) * uVar2);
          local_138 = (char *)CONCAT44(PF_PART4(local_138, 4),(int)local_a8);
          local_140 = PF_PART4(local_a8, 4);
          iVar13 = (int)uStack_90;
          iVar4 = (int)local_98;
          local_d0 = local_38;
          local_c8 = CONCAT44(uVar6,4);
          pf_app_terror_ui_button(&local_130,(char *)&local_188,recovered_1000dde0,&local_d0);
          local_58 = local_e0;
          uStack_50 = uStack_d8;
          local_68 = local_f0;
          uStack_60 = uStack_e8;
          local_78 = local_100;
          uStack_70 = uStack_f8;
          local_88 = local_110;
          uStack_80 = uStack_108;
          local_98 = local_120;
          uStack_90 = uStack_118;
          local_a8 = local_130;
          uStack_a0 = uStack_128;
          if ((0 < iVar11) && (0 < iVar4)) {
            if ((char)local_38[2] == '\0') {
              pvVar12 = (void *)local_38[1];
            }
            else {
              pvVar12 = (void *)0x0;
            }
            pf_app_terror_ui_view_draw((void *)*local_38,&local_a8,
                               CONCAT44(iVar13 + local_140 + (int)local_c0,(int)local_138 + 0x12),
                               CONCAT44(iVar4,iVar11),pvVar12);
          }
          uVar7 = local_40;
        }
      } while ((uint)local_b0 != uVar5);
      iVar11 = recovered_1000da70(uVar7,(uint)local_b0);
      if (iVar11 != 0) {
        recovered_1000d6e0((int *)&local_a8,uVar7);
        iVar13 = (int)local_98;
        iVar11 = (int)local_a8;
        iVar4 = (int)uStack_a0;
        iVar14 = local_13c * PF_PART4(local_98, 4);
        iVar15 = (int)uStack_90 + PF_PART4(local_a8, 4);
        local_188 = local_38;
        local_180 = 0xf;
        pf_app_terror_ui_button(&local_130,str_1000fdfe,recovered_1000dde0,&local_188);
        local_58 = local_e0;
        uStack_50 = uStack_d8;
        local_68 = local_f0;
        uStack_60 = uStack_e8;
        local_78 = local_100;
        uStack_70 = uStack_f8;
        local_88 = local_110;
        uStack_80 = uStack_108;
        local_98 = local_120;
        uStack_90 = uStack_118;
        local_a8 = local_130;
        uStack_a0 = uStack_128;
        if (0 < iVar13 && 0x24 < iVar4) {
          if ((char)local_38[2] == '\0') {
            pvVar12 = (void *)local_38[1];
          }
          else {
            pvVar12 = (void *)0x0;
          }
          pf_app_terror_ui_view_draw((void *)*local_38,&local_a8,CONCAT44(iVar15 + iVar14,iVar11 + 0x12),
                             CONCAT44(iVar13,iVar4 + -0x24),pvVar12);
        }
        uVar7 = local_40;
      }
    }
    else {
      snprintf((char *)&local_188,0x40,str_1000fe11,*(uint *)(lVar1 + 0x3dc8));
      recovered_1000d6e0((int *)&local_a8,lVar1);
      iVar11 = (int)local_a8;
      iVar4 = (int)uStack_a0;
      iVar15 = (int)uStack_90 + PF_PART4(local_a8, 4);
      iVar13 = (int)local_98;
      iVar14 = ((int)uStack_a0 - ((int)uStack_a0 + -0x2c >> 0x1f)) + -0x2c >> 1;
      local_b8 = CONCAT44((int)local_98,iVar14);
      local_b0 = CONCAT44(PF_PART4(local_b0, 4),(int)local_a8 + 0x1a + iVar14);
      local_d0 = plVar10;
      local_c8 = 0xb;
      pf_app_terror_ui_button(&local_130,(char *)&local_188,recovered_1000dde0,&local_d0);
      uVar3 = local_b8;
      local_58 = local_e0;
      uStack_50 = uStack_d8;
      local_68 = local_f0;
      uStack_60 = uStack_e8;
      local_78 = local_100;
      uStack_70 = uStack_f8;
      local_88 = local_110;
      uStack_80 = uStack_108;
      local_98 = local_120;
      uStack_90 = uStack_118;
      local_a8 = local_130;
      uStack_a0 = uStack_128;
      if (0 < iVar13 && 0x2d < iVar4) {
        if ((char)plVar10[2] == '\0') {
          pvVar12 = (void *)plVar10[1];
        }
        else {
          pvVar12 = (void *)0x0;
        }
        pf_app_terror_ui_view_draw((void *)*plVar10,&local_a8,CONCAT44(iVar15,iVar11 + 0x12),local_b8,
                           pvVar12);
        plVar10 = local_38;
      }
      uVar7 = local_40;
      pcVar8 = str_1000fe29;
      if (*(char *)(local_40 + 0x3dcc) != '\0') {
        pcVar8 = str_1000fe21;
      }
      context = (long **)0x0;
      recovered_1000dbd0(plVar10,CONCAT44(iVar15,(uint)local_b0),uVar3,pcVar8,0xc,0,
                         *(char *)(local_40 + 0x3dcc));
      iVar11 = 1;
      local_b8 = CONCAT71(PF_PART7(local_b8, 1),local_18c);
      local_c0 = (char *)(uVar7 + 0x3dee);
      local_138 = (char *)(uVar7 + 0x3dcd);
      do {
        recovered_1000d6e0((int *)&local_a8,uVar7);
        plVar10 = local_38;
        iVar4 = (int)local_a8;
        iVar13 = (int)uStack_a0;
        iVar15 = (int)local_a8 + 0x12;
        uVar6 = (int)uStack_a0 - 0x24;
        local_b0 = local_98 & 0xffffffff;
        iVar14 = (int)uStack_90 + PF_PART4(local_a8, 4) + PF_PART4(local_98, 4) * iVar11;
        uVar5 = *(int *)(uVar7 + 0x3d4) + 2;
        if (*(int *)(uVar7 + 0x3d4) < 1) {
          uVar5 = 0xc;
        }
        if ((byte)local_b8 == '\0') {
          pcVar8 = str_1000fe3b;
          if (iVar11 == 1) {
            pcVar8 = &DAT_1000fe32;
          }
          recovered_1000d900(local_38,CONCAT44(iVar14 - uVar5,iVar15),CONCAT44(uVar5,uVar6),pcVar8,
                             0x31,context);
        }
        else {
          puVar9 = &DAT_1000fe37;
          if (iVar11 == 1) {
            puVar9 = &DAT_1000fe32;
          }
          recovered_1000d900(local_38,CONCAT44((int)((int)local_98 - uVar5) / 2 + iVar14,iVar15),
                             (ulong)uVar5 << 0x20 | 0x40,puVar9,0x31,context);
          iVar15 = iVar4 + 0x5a;
          uVar6 = iVar13 - 0x6c;
        }
        bVar16 = iVar11 == 1;
        pcVar8 = local_c0;
        if (bVar16) {
          pcVar8 = local_138;
        }
        capacity = str_1000fe54;
        if (bVar16) {
          capacity = str_1000fe47;
        }
        local_d0 = plVar10;
        local_c8 = (ulong)(0xe - bVar16);
        context = &local_d0;
        pf_app_terror_ui_text_field(&local_130,pcVar8,(ulong)capacity,
                           bVar16 != (*(int *)(local_40 + 0x3dc4) != 0),recovered_1000dde0,context);
        local_58 = local_e0;
        uStack_50 = uStack_d8;
        local_68 = local_f0;
        uStack_60 = uStack_e8;
        local_78 = local_100;
        uStack_70 = uStack_f8;
        local_88 = local_110;
        uStack_80 = uStack_108;
        local_98 = local_120;
        uStack_90 = uStack_118;
        local_a8 = local_130;
        uStack_a0 = uStack_128;
        if (0 < (int)local_b0 && 0 < (int)uVar6) {
          if ((char)local_38[2] == '\0') {
            pvVar12 = (void *)local_38[1];
          }
          else {
            pvVar12 = (void *)0x0;
          }
          pf_app_terror_ui_view_draw((void *)*local_38,&local_a8,CONCAT44(iVar14,iVar15),
                             (ulong)uVar6 | local_b0 << 0x20,pvVar12);
        }
        uVar7 = local_40;
        iVar11 = iVar11 + 1;
      } while (iVar11 != 3);
      if ((byte)local_b8 == '\0') {
        recovered_1000d6e0((int *)&local_a8,local_40);
        recovered_1000d900(local_38,CONCAT44((int)uStack_90 + PF_PART4(local_a8, 4) + PF_PART4(local_98, 4) * 3,
                                             (int)local_a8 + 0x12),
                           CONCAT44((int)local_98,(int)uStack_a0 + -0x24),str_1000fe72,0x31,context)
        ;
      }
    }
    recovered_1000d6e0((int *)&local_a8,uVar7);
    plVar10 = local_38;
    local_b0 = local_a8 & 0xffffffff;
    iVar11 = (int)uStack_a0;
    iVar4 = (int)local_98;
    iVar14 = (4 - (uint)PF_PART1(uStack_90, 4)) * PF_PART4(local_98, 4);
    iVar13 = (int)uStack_90 + PF_PART4(local_a8, 4);
    pcVar8 = str_1000feb1;
    if (*(int *)(uVar7 + 0x3dc0) == 2) {
      pcVar8 = str_1000fe9f;
    }
    local_188 = local_38;
    local_180 = 9;
    pf_app_terror_ui_button(&local_130,pcVar8,recovered_1000dde0,&local_188);
    local_58 = local_e0;
    uStack_50 = uStack_d8;
    local_68 = local_f0;
    uStack_60 = uStack_e8;
    local_78 = local_100;
    uStack_70 = uStack_f8;
    local_88 = local_110;
    uStack_80 = uStack_108;
    local_98 = local_120;
    uStack_90 = uStack_118;
    local_a8 = local_130;
    uStack_a0 = uStack_128;
    if (0 < iVar4 && 0x2d < iVar11) {
      if ((char)plVar10[2] == '\0') {
        pvVar12 = (void *)plVar10[1];
      }
      else {
        pvVar12 = (void *)0x0;
      }
      pf_app_terror_ui_view_draw((void *)*plVar10,&local_a8,CONCAT44(iVar13 + iVar14,(int)local_b0 + 0x12),
                         CONCAT44(iVar4,(iVar11 - (iVar11 + -0x2c >> 0x1f)) + -0x2c >> 1),pvVar12);
      plVar10 = local_38;
    }
    recovered_1000d6e0((int *)&local_a8,local_40);
    local_40 = local_a8 & 0xffffffff;
    iVar11 = (int)uStack_a0;
    iVar4 = (int)local_98;
    iVar13 = (4 - (uint)PF_PART1(uStack_90, 4)) * PF_PART4(local_98, 4);
    iVar14 = (int)uStack_90 + PF_PART4(local_a8, 4);
    local_180 = 10;
    local_188 = plVar10;
    pf_app_terror_ui_button(&local_130,str_1000febe,recovered_1000dde0,&local_188);
    local_58 = local_e0;
    uStack_50 = uStack_d8;
    local_68 = local_f0;
    uStack_60 = uStack_e8;
    local_78 = local_100;
    uStack_70 = uStack_f8;
    local_88 = local_110;
    uStack_80 = uStack_108;
    local_98 = local_120;
    uStack_90 = uStack_118;
    local_a8 = local_130;
    uStack_a0 = uStack_128;
    if (0 < iVar4 && 0x2d < iVar11) {
      iVar11 = (iVar11 - (iVar11 + -0x2c >> 0x1f)) + -0x2c >> 1;
      if ((char)plVar10[2] == '\0') {
        pvVar12 = (void *)plVar10[1];
      }
      else {
        pvVar12 = (void *)0x0;
      }
      pf_app_terror_ui_view_draw((void *)*plVar10,&local_a8,
                         CONCAT44(iVar14 + iVar13,(int)local_40 + iVar11 + 0x1a),
                         CONCAT44(iVar4,iVar11),pvVar12);
    }
  }
  return;
}

#undef DAT_1000fe32
#undef DAT_1000fe37
#undef str_1000fdb9
#undef str_1000fdd5
#undef str_1000fdf6
#undef str_1000fdfe
#undef str_1000fe11
#undef str_1000fe21
#undef str_1000fe29
#undef str_1000fe3b
#undef str_1000fe47
#undef str_1000fe54
#undef str_1000fe72
#undef str_1000fe9f
#undef str_1000feb1
#undef str_1000febe
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_40
#undef local_38
#undef uStack_128
#undef uStack_118
#undef uStack_108
#undef uStack_f8
#undef uStack_e8
#undef uStack_d8
#undef uStack_a0
#undef uStack_90
#undef uStack_80
#undef uStack_70
#undef uStack_60
#undef uStack_50
#undef local_1a8
#undef local_1a0
#undef local_18c
#undef local_188
#undef local_180
#undef local_140
#undef local_13c
#undef local_138
#undef local_130
#undef local_120
#undef local_110
#undef local_100
#undef local_f0
#undef local_e0
#undef local_d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d6e0
 */

int * recovered_1000d6e0(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint128 auVar14;

  auVar14 = recovered_10007d20(param_2);
  uVar5 = PF_PART4(auVar14, 8);
  if (param_2 == 0) {
    param_1[4] = 0x1c;
    param_1[6] = 0x2e;
    iVar7 = 400;
    iVar1 = 0x2e;
    iVar3 = 0x1c;
    iVar6 = 0x230;
    if (0x187 < (int)uVar5) {
      uVar12 = 0x250;
      if (uVar5 < 0x250) {
        uVar12 = uVar5;
      }
      iVar6 = uVar12 - 0x20;
    }
    goto LAB_1000d7bf;
  }
  iVar1 = *(int *)(param_2 + 0x3d4);
  if (iVar1 < 1) {
    param_1[4] = 0x1c;
    param_1[6] = 0x2e;
    if ((int)uVar5 < 0x188) {
      iVar1 = 0x2e;
      iVar3 = 0x1c;
      goto LAB_1000d790;
    }
    uVar12 = 0x250;
    if (uVar5 < 0x250) {
      uVar12 = uVar5;
    }
    iVar1 = 0x2e;
    iVar3 = 0x1c;
  }
  else {
    iVar3 = iVar1 + 0x12;
    param_1[4] = iVar3;
    iVar1 = iVar1 + 0x24;
    param_1[6] = iVar1;
    uVar4 = uVar5;
    if ((int)uVar5 < 0x188) {
LAB_1000d790:
      uVar4 = 0x2f8;
      if (*(uint *)(param_2 + 4) != 0) {
        uVar4 = *(uint *)(param_2 + 4);
      }
    }
    uVar12 = 0x250;
    if ((int)uVar4 < 0x250) {
      uVar12 = uVar4;
    }
  }
  iVar6 = uVar12 - 0x20;
  iVar7 = 400;
  if (*(int *)(param_2 + 8) != 0) {
    iVar7 = *(int *)(param_2 + 8);
  }
LAB_1000d7bf:
  iVar2 = PF_PART4(auVar14, 4);
  iVar7 = (iVar7 - iVar2) + -0xc;
  iVar8 = (uintptr_t)iVar3 * 5 + iVar1 + 0x62;
  *(bool *)(param_1 + 7) = iVar7 < iVar8;
  iVar9 = 0x14;
  if (iVar7 < iVar8) {
    iVar9 = 8;
  }
  uVar12 = iVar7 < iVar8 ^ 5;
  iVar11 = uVar12 * iVar3;
  iVar10 = iVar1 + iVar11;
  iVar13 = uVar12 - 1;
  iVar8 = iVar13 * iVar9 + iVar10 + 0x12;
  if (iVar7 < iVar8) {
    if (param_2 == 0) {
      iVar7 = 0x178;
    }
    else {
      iVar7 = 0x178;
      if (*(int *)(param_2 + 8) != 0) {
        iVar7 = *(int *)(param_2 + 8) + -0x18;
      }
    }
    iVar2 = ((iVar7 - iVar10) + -0x12) / iVar13;
    if (iVar2 < iVar9) {
      iVar9 = iVar2;
    }
    if (iVar2 < 0) {
      iVar9 = 0;
    }
    iVar8 = iVar1 + iVar11 + 0x12 + iVar13 * iVar9;
    iVar2 = 0xc;
  }
  param_1[5] = iVar9 + iVar3;
  if ((int)uVar5 < iVar6) {
    if (param_2 == 0) {
      iVar3 = 0x2f8;
    }
    else {
      iVar3 = 0x2f8;
      if (*(int *)(param_2 + 4) != 0) {
        iVar3 = *(int *)(param_2 + 4);
      }
    }
    iVar3 = (iVar3 - iVar6) / 2;
  }
  else {
    iVar3 = (int)(uVar5 - iVar6) / 2 + PF_PART4(auVar14, 0);
  }
  iVar1 = 0;
  if (iVar7 - iVar8 != 0 && iVar8 <= iVar7) {
    iVar1 = (iVar7 - iVar8) / 2;
  }
  *param_1 = iVar3;
  param_1[1] = iVar1 + iVar2;
  param_1[2] = iVar6;
  param_1[3] = iVar8;
  return param_1;
}


#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 80))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 96))
#define uStack_90 (*(ulonglong *)(pf_stack_frame + 112))
#define local_e8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 128))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 56))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 72))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 144))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 88))
#define local_98 (*(undefined8 *)(pf_stack_frame + 104))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 160))
#define local_88 (*(undefined8 *)(pf_stack_frame + 120))
#define local_78 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 176))
#define local_68 (*(undefined8 *)(pf_stack_frame + 152))
#define local_58 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 192))
#define local_48 (*(undefined8 *)(pf_stack_frame + 184))
#define local_38 (*(undefined8 *)(pf_stack_frame + 200))
#define uStack_30 (*(ulonglong *)(pf_stack_frame + 208))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d900
 */

void recovered_1000d900(undefined8 *param_1,ulonglong param_2,ulonglong param_3,char *param_4,
                       uint param_5,undefined8 param_6)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  PFUiView view;
  PFUiView view_00;
  uint value;
  void *input;

  pf_app_terror_ui_text(&local_88,param_4);
  value = terror_ui_colour(param_5);
  view.words[1] = uStack_80;
  view.words[0] = local_88;
  view.words[2] = local_78;
  view.words[3] = uStack_70;
  view.words[4] = local_68;
  view.words[5] = uStack_60;
  view.words[6] = local_58;
  view.words[7] = uStack_50;
  view.words[8] = local_48;
  view.words[9] = uStack_40;
  view.words[10] = local_38;
  view.words[0xb] = uStack_30;
  pf_app_terror_ui_view_foreground(&local_e8,view,value);
  view_00.words[1] = uStack_e0;
  view_00.words[0] = local_e8;
  view_00.words[2] = local_d8;
  view_00.words[3] = uStack_d0;
  view_00.words[4] = local_c8;
  view_00.words[5] = uStack_c0;
  view_00.words[6] = local_b8;
  view_00.words[7] = uStack_b0;
  view_00.words[8] = local_a8;
  view_00.words[9] = uStack_a0;
  view_00.words[10] = local_98;
  view_00.words[0xb] = uStack_90;
  pf_app_terror_ui_view_alignment(&local_88,view_00,3);
  local_98 = local_38;
  uStack_90 = uStack_30;
  local_a8 = local_48;
  uStack_a0 = uStack_40;
  local_b8 = local_58;
  uStack_b0 = uStack_50;
  local_c8 = local_68;
  uStack_c0 = uStack_60;
  local_d8 = local_78;
  uStack_d0 = uStack_70;
  local_e8 = local_88;
  uStack_e0 = uStack_80;
  if (0 < (int)(param_3 >> 0x20) && 0 < (int)param_3) {
    if (*(char *)(param_1 + 2) == '\0') {
      input = (void *)param_1[1];
    }
    else {
      input = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*param_1,&local_88,param_2,param_3,input);
  }
  return;
}

#undef uStack_b0
#undef uStack_a0
#undef uStack_90
#undef local_e8
#undef local_d8
#undef uStack_80
#undef local_c8
#undef local_b8
#undef uStack_70
#undef local_a8
#undef local_98
#undef uStack_60
#undef local_88
#undef local_78
#undef uStack_50
#undef local_68
#undef local_58
#undef uStack_40
#undef local_48
#undef local_38
#undef uStack_30
#undef uStack_e0
#undef uStack_d0
#undef uStack_c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da70
 */

int recovered_1000da70(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  uVar7 = (ulong)*(uint *)(param_1 + 0x860);
  iVar8 = 0;
  if (uVar7 != 0) {
    uVar10 = 0;
    iVar8 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x75c + uVar10 * 4);
      if (1 < iVar5 + 1U) {
        if (uVar10 != 0) {
          uVar11 = 0;
          do {
            if (*(int *)(param_1 + 0x75c + uVar11 * 4) == iVar5) goto LAB_1000da9a;
            uVar11 = uVar11 + 1;
          } while (uVar10 != uVar11);
        }
        if (iVar8 == param_2) {
          return iVar5;
        }
        iVar8 = iVar8 + 1;
      }
LAB_1000da9a:
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar7);
  }
  uVar10 = (ulong)*(uint *)(param_1 + 0x3db4);
  iVar5 = 0;
  if (uVar10 != 0) {
    lVar2 = *(long *)(param_1 + 0x3ca0);
    piVar1 = (int *)(uVar10 * 0x10c + lVar2);
    uVar11 = uVar10;
    do {
      uVar9 = uVar11 - 1;
      lVar6 = uVar9 * 0x10c;
      if ((*(int *)(lVar2 + lVar6) == *(int *)(param_1 + 0x5c0)) &&
         (iVar5 = *(int *)(lVar2 + lVar6 + 4 + (ulong)*(byte *)(lVar2 + 0x14 + lVar6) * 4),
         1 < iVar5 + 1U)) {
        piVar3 = piVar1;
        uVar4 = uVar10;
        if (uVar7 != 0) {
          uVar12 = 0;
          do {
            if (*(int *)(param_1 + 0x75c + uVar12 * 4) == iVar5) goto LAB_1000db20;
            uVar12 = uVar12 + 1;
          } while (uVar7 != uVar12);
        }
        for (; uVar11 < uVar4; uVar4 = uVar4 - 1) {
          if ((piVar3[-0x43] == *(int *)(param_1 + 0x5c0)) &&
             (piVar3[(ulong)*(byte *)(piVar3 + -0x3e) - 0x42] == iVar5)) goto LAB_1000db20;
          piVar3 = piVar3 + -0x43;
        }
        if (iVar8 == param_2) goto LAB_1000dbc1;
        iVar8 = iVar8 + 1;
      }
LAB_1000db20:
      uVar11 = uVar9;
    } while (uVar9 != 0);
    iVar5 = 0;
  }
LAB_1000dbc1:
  return iVar5;
}


#define uStack_f0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_f8 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 48))
#define local_e8 (*(undefined8 *)(pf_stack_frame + 40))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 64))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 72))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 88))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 80))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 104))
#define local_98 (*(undefined8 * *)(pf_stack_frame + 120))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 96))
#define local_90 (*(undefined4 *)(pf_stack_frame + 128))
#define local_8c (*(undefined4 *)(pf_stack_frame + 132))
#define uStack_a0 (*(ulonglong *)(pf_stack_frame + 112))
#define local_88 (*(undefined8 *)(pf_stack_frame + 136))
#define local_78 (*(undefined8 *)(pf_stack_frame + 152))
#define local_68 (*(undefined8 *)(pf_stack_frame + 168))
#define local_58 (*(undefined8 *)(pf_stack_frame + 184))
#define local_48 (*(undefined8 *)(pf_stack_frame + 200))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 144))
#define local_38 (*(undefined8 *)(pf_stack_frame + 216))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 160))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 176))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 192))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 208))
#define uStack_30 (*(ulonglong *)(pf_stack_frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dbd0
 */

void recovered_1000dbd0(undefined8 *param_1,ulonglong param_2,ulonglong param_3,char *param_4,
                       undefined4 param_5,undefined4 param_6,char param_7)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  PFUiView view;
  PFUiView view_00;
  uint uVar1;
  void *input;

  local_98 = param_1;
  local_90 = param_5;
  local_8c = param_6;
  pf_app_terror_ui_button(&local_88,param_4,recovered_1000dde0,&local_98);
  if (param_7 != '\0') {
    uVar1 = terror_ui_colour(0x2b);
    view.words[1] = uStack_80;
    view.words[0] = local_88;
    view.words[2] = local_78;
    view.words[3] = uStack_70;
    view.words[4] = local_68;
    view.words[5] = uStack_60;
    view.words[6] = local_58;
    view.words[7] = uStack_50;
    view.words[8] = local_48;
    view.words[9] = uStack_40;
    view.words[10] = local_38;
    view.words[0xb] = uStack_30;
    pf_app_terror_ui_view_background(&local_f8,view,uVar1);
    local_38 = local_a8;
    uStack_30 = uStack_a0;
    local_48 = local_b8;
    uStack_40 = uStack_b0;
    local_58 = local_c8;
    uStack_50 = uStack_c0;
    local_68 = local_d8;
    uStack_60 = uStack_d0;
    local_78 = local_e8;
    uStack_70 = uStack_e0;
    local_88 = local_f8;
    uStack_80 = uStack_f0;
    uVar1 = terror_ui_colour(0xe);
    view_00.words[1] = uStack_80;
    view_00.words[0] = local_88;
    view_00.words[2] = local_78;
    view_00.words[3] = uStack_70;
    view_00.words[4] = local_68;
    view_00.words[5] = uStack_60;
    view_00.words[6] = local_58;
    view_00.words[7] = uStack_50;
    view_00.words[8] = local_48;
    view_00.words[9] = uStack_40;
    view_00.words[10] = local_38;
    view_00.words[0xb] = uStack_30;
    pf_app_terror_ui_view_foreground(&local_f8,view_00,uVar1);
    local_38 = local_a8;
    uStack_30 = uStack_a0;
    local_48 = local_b8;
    uStack_40 = uStack_b0;
    local_58 = local_c8;
    uStack_50 = uStack_c0;
    local_68 = local_d8;
    uStack_60 = uStack_d0;
    local_78 = local_e8;
    uStack_70 = uStack_e0;
    local_88 = local_f8;
    uStack_80 = uStack_f0;
  }
  local_a8 = local_38;
  uStack_a0 = uStack_30;
  local_b8 = local_48;
  uStack_b0 = uStack_40;
  local_c8 = local_58;
  uStack_c0 = uStack_50;
  local_d8 = local_68;
  uStack_d0 = uStack_60;
  local_e8 = local_78;
  uStack_e0 = uStack_70;
  local_f8 = local_88;
  uStack_f0 = uStack_80;
  if (0 < (int)(param_3 >> 0x20) && 0 < (int)param_3) {
    if (*(char *)(param_1 + 2) == '\0') {
      input = (void *)param_1[1];
    }
    else {
      input = (void *)0x0;
    }
    pf_app_terror_ui_view_draw((void *)*param_1,&local_f8,param_2,param_3,input);
  }
  return;
}

#undef uStack_f0
#undef local_f8
#undef uStack_e0
#undef local_e8
#undef local_d8
#undef uStack_d0
#undef local_c8
#undef local_b8
#undef uStack_c0
#undef local_a8
#undef local_98
#undef uStack_b0
#undef local_90
#undef local_8c
#undef uStack_a0
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48
#undef uStack_80
#undef local_38
#undef uStack_70
#undef uStack_60
#undef uStack_50
#undef uStack_40
#undef uStack_30

#undef DAT_1000f3b9
#define DAT_1000f3b9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cdU)))
#undef str_1000fec5
#define str_1000fec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10d9U)))
#define local_50 (*(int (*)[20])(pf_stack_frame + 16))
#define local_34 (*(byte *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dde0
 */

void recovered_1000dde0(long *param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;

  plVar2 = (long *)*param_1;
  if ((char)plVar2[2] != '\0') {
    return;
  }
  lVar3 = *plVar2;
  *(undefined1 *)(plVar2 + 2) = 1;
  switch((uintptr_t)((int)param_1[1])) {
  case 0:
    uVar9 = *(uint *)(lVar3 + 0x5c4);
    uVar6 = (ulong)uVar9;
    if (uVar6 != 0) {
      iVar14 = *(int *)(lVar3 + 0x5c0);
      if (uVar9 < 4) {
        uVar13 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar11 = 0;
        do {
          iVar5 = (int)uVar11;
          uVar12 = iVar5 + 1;
          if (uVar6 - 1 == uVar11) {
            uVar12 = 0;
          }
          if (*(int *)(lVar3 + 0x5c8 + uVar11 * 4) != iVar14) {
            uVar12 = uVar4;
          }
          uVar4 = iVar5 + 2;
          if (uVar6 - 2 == uVar11) {
            uVar4 = 0;
          }
          if (*(int *)(lVar3 + 0x5cc + uVar11 * 4) != iVar14) {
            uVar4 = uVar12;
          }
          uVar12 = iVar5 + 3;
          if (uVar6 - 3 == uVar11) {
            uVar12 = 0;
          }
          if (*(int *)(lVar3 + 0x5d0 + uVar11 * 4) != iVar14) {
            uVar12 = uVar4;
          }
          uVar13 = uVar11 + 4;
          uVar4 = (uint)uVar13;
          if (uVar6 - 4 == uVar11) {
            uVar4 = 0;
          }
          if (*(int *)(lVar3 + 0x5d4 + uVar11 * 4) != iVar14) {
            uVar4 = uVar12;
          }
          uVar11 = uVar13;
        } while ((uVar9 & 0xfffffffc) != uVar13);
      }
      if ((ulong)(uVar9 & 3) != 0) {
        uVar11 = 0;
        do {
          uVar12 = (int)uVar13 + 1 + (int)uVar11;
          if ((uVar13 - uVar6) + 1 + uVar11 == 0) {
            uVar12 = 0;
          }
          if (*(int *)(lVar3 + uVar13 * 4 + 0x5c8 + uVar11 * 4) == iVar14) {
            uVar4 = uVar12;
          }
          uVar11 = uVar11 + 1;
        } while ((uVar9 & 3) != uVar11);
      }
      recovered_1000e400(lVar3,*(undefined4 *)(lVar3 + 0x5c8 + (ulong)uVar4 * 4));
      return;
    }
  case 7:
    *(undefined1 *)(lVar3 + 0x391c) = 1;
    break;
  case 1:
    if (7 < *(uint *)((long)param_1 + 0xc)) {
      return;
    }
    *(uint *)(lVar3 + 0x610) = *(uint *)((long)param_1 + 0xc);
    goto LAB_1000e0d7;
  case 2:
    uVar9 = *(uint *)(lVar3 + 0x610);
    if (uVar9 == 0) {
      if (*(char *)(lVar3 + 0xa85) == '\0') {
        uVar9 = 1;
      }
      else if (*(char *)(lVar3 + 0xa86) == '\0') {
        uVar9 = 2;
      }
      else if (*(char *)(lVar3 + 0xa87) == '\0') {
        uVar9 = 3;
      }
      else if (*(char *)(lVar3 + 0xa88) == '\0') {
        uVar9 = 4;
      }
      else if (*(char *)(lVar3 + 0xa89) == '\0') {
        uVar9 = 5;
      }
      else if (*(char *)(lVar3 + 0xa8a) == '\0') {
        uVar9 = 6;
      }
      else {
        uVar9 = uVar9 + (uVar9 == 0);
        if (*(char *)(lVar3 + 0xa8b) == '\0') {
          uVar9 = 7;
        }
      }
    }
    *(undefined8 *)(lVar3 + 0x3dc0) = 1;
    *(uint *)(lVar3 + 0x3dc8) = uVar9;
    *(undefined1 *)(lVar3 + 0x3dcc) = 1;
    lVar7 = (ulong)uVar9 * 0x21;
    goto LAB_1000e01d;
  case 3:
    *(undefined4 *)(lVar3 + 0x3dc0) = 2;
    *(undefined4 *)(lVar3 + 0x3e34) = 0;
    if (*(uint *)(lVar3 + 0x3e30) != 0) {
      snprintf((char *)(lVar3 + 0x3dcd),0x21,str_1000fec5,*(uint *)(lVar3 + 0x3e30));
      return;
    }
    *(char *)(lVar3 + 0x3dcd) = '\0';
    break;
  case 4:
    *(undefined4 *)(lVar3 + 0x3e30) = *(undefined4 *)((long)param_1 + 0xc);
    *(undefined4 *)(lVar3 + 0x618) = 0;
    *(int *)(lVar3 + 0x3910) = *(int *)(lVar3 + 0x3910) + 1;
    *(undefined4 *)(lVar3 + 0x3dc0) = 0;
    break;
  case 5:
    if ((ulong)*(uint *)(lVar3 + 0x3db4) != 0) {
      lVar7 = *(long *)(lVar3 + 0x3ca0);
      lVar10 = 0;
      uVar9 = 0;
      do {
        if (*(int *)(lVar7 + lVar10) == *(int *)(lVar3 + 0x5c0)) {
          if (*(int *)(lVar3 + 0x3e30) == 0) {
            if ((*(int *)(lVar7 + 0x10 + lVar10) == *(int *)(lVar3 + 0x610)) &&
               (*(int *)(lVar7 + 8 + lVar10) == -1)) goto LAB_1000e11f;
          }
          else {
            iVar14 = *(int *)(lVar7 + 8 + lVar10);
            if (*(char *)(lVar7 + 0x14 + lVar10) != '\x01') {
              if (iVar14 == -1) goto LAB_1000e130;
              iVar14 = *(int *)(lVar7 + 4 + lVar10);
            }
            if (iVar14 == *(int *)(lVar3 + 0x3e30)) {
LAB_1000e11f:
              uVar9 = uVar9 + 1;
            }
          }
        }
LAB_1000e130:
        lVar10 = lVar10 + 0x10c;
      } while ((ulong)*(uint *)(lVar3 + 0x3db4) * 0x10c != lVar10);
      uVar4 = *(int *)(lVar3 + 0x618) + 1;
      if (uVar4 < uVar9) {
        *(uint *)(lVar3 + 0x618) = uVar4;
      }
    }
    break;
  case 6:
    *(undefined4 *)(lVar3 + 0x618) = 0;
    break;
  case 8:
    uVar6 = recovered_10007e90(lVar3,*(byte **)(lVar3 + 0x3d8));
    if ((char)uVar6 != '\0') {
      if (*(undefined1 **)(lVar3 + 0x3d8) != (undefined1 *)0x0) {
        **(undefined1 **)(lVar3 + 0x3d8) = 0;
      }
      *(undefined8 *)(lVar3 + 0x3e0) = 0;
    }
    break;
  case 9:
    recovered_1000a590(lVar3);
    return;
  case 10:
    *(undefined4 *)(lVar3 + 0x3dc0) = 0;
    memset((void *)(lVar3 + 0x3dee),0,0x41);
    return;
  case 0xb:
    uVar9 = *(uint *)(lVar3 + 0x3dc8);
    *(uint *)(lVar3 + 0x3dc8) = uVar9 % 7 + 1;
    *(undefined1 *)(lVar3 + 0x3dcc) = 1;
    lVar7 = (ulong)(uVar9 % 7) * 0x21 + 0x21;
LAB_1000e01d:
    snprintf((char *)(lVar3 + 0x3dcd),0x21,&DAT_1000f3b9,(void *)(lVar3 + lVar7 + 0x974));
    *(undefined1 *)(lVar3 + 0x3dee) = 0;
    break;
  case 0xc:
    *(byte *)(lVar3 + 0x3dcc) = *(byte *)(lVar3 + 0x3dcc) ^ 1;
    break;
  case 0xd:
    *(undefined4 *)(lVar3 + 0x3dc4) = 0;
    break;
  case 0xe:
    *(undefined4 *)(lVar3 + 0x3dc4) = 1;
    break;
  case 0xf:
    recovered_1000d6e0(local_50,lVar3);
    iVar14 = *(int *)(lVar3 + 0x3e34) + 1;
    iVar5 = recovered_1000da70(lVar3,iVar14 << ((local_34 ^ 1) & 0x1f));
    if (iVar5 == 0) {
      iVar14 = 0;
    }
    *(int *)(lVar3 + 0x3e34) = iVar14;
    break;
  case 0x10:
    uVar9 = *(uint *)(lVar3 + 0x610);
    uVar6 = (ulong)(uVar9 + 1 & 7);
    if (((~(byte)uVar9 & 7) != 0) && (*(char *)(lVar3 + 0xa84 + uVar6) == '\0')) {
      uVar6 = (ulong)(uVar9 + 2 & 7);
      bVar8 = (byte)uVar9 & 7;
      if ((bVar8 != 6) &&
         (((*(char *)(lVar3 + 0xa84 + uVar6) == '\0' && (uVar6 = (ulong)(uVar9 + 3 & 7), bVar8 != 5)
           ) && (*(char *)(lVar3 + 0xa84 + uVar6) == '\0')))) {
        uVar6 = (ulong)(uVar9 & 7) ^ 4;
        if (((((bVar8 != 4) && (*(char *)(lVar3 + 0xa84 + uVar6) == '\0')) &&
             (uVar6 = (ulong)(uVar9 + 5 & 7), bVar8 != 3)) &&
            ((*(char *)(lVar3 + 0xa84 + uVar6) == '\0' &&
             (uVar6 = (ulong)(uVar9 + 6 & 7), bVar8 != 2)))) &&
           (*(char *)(lVar3 + 0xa84 + uVar6) == '\0')) {
          uVar4 = uVar9 - 1 & 7;
          uVar6 = (ulong)uVar4;
          if ((bVar8 != 1) &&
             (pcVar1 = (char *)(lVar3 + 0xa84 + uVar6), uVar6 = (ulong)(uVar9 & 7), *pcVar1 != '\0')
             ) {
            uVar6 = (ulong)uVar4;
          }
        }
      }
    }
    *(int *)(lVar3 + 0x610) = (int)uVar6;
LAB_1000e0d7:
    *(undefined4 *)(lVar3 + 0x3e30) = 0;
    *(undefined4 *)(lVar3 + 0x618) = 0;
    *(int *)(lVar3 + 0x3910) = *(int *)(lVar3 + 0x3910) + 1;
  }
  return;
}

#undef DAT_1000f3b9
#undef str_1000fec5
#undef local_50
#undef local_34

#undef DAT_1001210c
#define DAT_1001210c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3320U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e400
 */

void recovered_1000e400(long param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1001210c = param_2;
  *(undefined4 *)(param_1 + 0x5c0) = param_2;
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(int *)(param_1 + 0x3910) = *(int *)(param_1 + 0x3910) + 1;
  *(undefined1 *)(param_1 + 0x598) = 0;
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined1 *)(param_1 + 0x391f) = 0;
  memset((void *)(param_1 + 0x974),0,0x108);
  memset((void *)(param_1 + 0xa84),0,8);
  *(undefined1 *)(param_1 + 0x391c) = 1;
  return;
}

#undef DAT_1001210c

#undef DAT_10012108
#define DAT_10012108 (*(int *)(((uintptr_t)pf_module_state + 0x331cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e480
 */

uint128 recovered_1000e480(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint128 auVar9;

  auVar9 = recovered_10007d20(param_1);
  uVar2 = PF_PART4(auVar9, 4) + PF_PART4(auVar9, 12) + 8;
  iVar6 = PF_PART4(auVar9, 8);
  if (param_1 == 0) {
    iVar7 = 0x6e;
    if (0x6e < iVar6) {
      iVar7 = iVar6;
    }
    uVar8 = 0x2e4;
    if (DAT_10012108 != 0) {
      uVar8 = iVar7 - 0x60;
    }
    iVar6 = 10;
    if ((int)uVar2 < 0x175) {
      uVar3 = (ulong)(0x186 - uVar2);
      goto LAB_1000e55f;
    }
  }
  else {
    uVar8 = 0x2e4;
    if (*(int *)(param_1 + 4) != 0) {
      uVar8 = *(int *)(param_1 + 4) - 0x14;
    }
    iVar7 = 400;
    if (*(int *)(param_1 + 8) != 0) {
      iVar7 = *(int *)(param_1 + 8);
    }
    uVar1 = (iVar7 - uVar2) - 10;
    uVar3 = (ulong)uVar1;
    uVar5 = iVar6 - 0x60;
    if (DAT_10012108 == 0) {
      uVar5 = uVar8;
    }
    uVar8 = 0xe;
    if (0 < *(int *)(param_1 + 0x3d0)) {
      uVar8 = *(int *)(param_1 + 0x3d0) + 8;
    }
    if ((int)uVar8 < (int)uVar5) {
      uVar8 = uVar5;
    }
    iVar6 = *(int *)(param_1 + 0x3d4);
    if (iVar6 < 1) {
      iVar6 = 10;
      if (0x1b < (int)(iVar7 - uVar2)) goto LAB_1000e55f;
    }
    else if (iVar6 + 8 <= (int)uVar1) goto LAB_1000e55f;
  }
  uVar3 = (ulong)(iVar6 + 8);
LAB_1000e55f:
  uVar4 = 10;
  if (DAT_10012108 != 0) {
    uVar4 = (ulong)PF_PART4(auVar9, 0);
  }
  PF_PART8(auVar9, 0) = (ulong)uVar2 << 0x20 | uVar4;
  PF_PART8(auVar9, 8) = (ulong)uVar8 | uVar3 << 0x20;
  return auVar9;
}

#undef DAT_10012108

#undef DAT_1000f1f9
#define DAT_1000f1f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e590
 */

uint128 recovered_1000e590(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint128 auVar14;

  auVar14 = recovered_10007d20(param_1);
  iVar5 = PF_PART4(auVar14, 12);
  uVar12 = 0x12;
  if (0x15 < iVar5 + -0x1e) {
    uVar12 = (uint)((PF_PART8(auVar14, 8) & 0xffffffff00000000) - 0x21fffffff4 >> 0x20);
  }
  if (param_1 == 0) {
    iVar10 = 1;
    if (1 < iVar5 / 0xc) {
      iVar10 = iVar5 / 0xc;
    }
    uVar4 = 0;
  }
  else {
    iVar2 = 0xc;
    if (0 < *(int *)(param_1 + 0x3d4)) {
      iVar2 = *(int *)(param_1 + 0x3d4) + 2;
    }
    iVar10 = 1;
    if (1 < iVar5 / iVar2) {
      iVar10 = iVar5 / iVar2;
    }
    uVar6 = recovered_100079a0(param_1);
    if ((char)uVar6 == '\0') {
      iVar5 = *(int *)(param_1 + 0x3f4);
      if ((long)iVar5 < 1) {
        uVar4 = 0;
      }
      else {
        lVar1 = *(long *)(param_1 + 0x390);
        lVar13 = 0;
        uVar4 = 0;
        do {
          pcVar9 = &DAT_1000f1f9;
          if (lVar1 != 0) {
            pcVar9 = (char *)(*(long *)(param_1 + 0x398) + *(long *)(lVar1 + lVar13));
          }
          iVar2 = recovered_10007b90(param_1,pcVar9,*(ulong *)(lVar1 + 8 + lVar13));
          if ((int)(uVar4 ^ 0x7fffffff) < iVar2) {
            uVar4 = 0x7fffffff;
            break;
          }
          uVar4 = uVar4 + iVar2;
          lVar13 = lVar13 + 0x10;
        } while ((long)iVar5 * 0x10 != lVar13);
      }
    }
    else {
      uVar8 = *(ulong *)(*(long *)(param_1 + 0x3f8) + (long)*(int *)(param_1 + 0x3f4) * 8);
      uVar11 = 0x7fffffff;
      if (uVar8 < 0x7fffffff) {
        uVar11 = uVar8;
      }
      uVar4 = (uint)uVar11;
    }
  }
  uVar8 = PF_PART8(auVar14, 0) >> 0x20;
  uVar3 = recovered_10007370(param_1);
  if ((int)uVar3 < 1 || (int)uVar4 <= iVar10) {
    uVar7 = uVar12;
  }
  else {
    uVar4 = (int)(iVar10 * uVar12) / (int)uVar4;
    uVar7 = 0x12;
    if (0x12 < (int)uVar4) {
      uVar7 = uVar4;
    }
    if ((int)uVar12 <= (int)uVar7) {
      uVar7 = uVar12;
    }
    uVar8 = (long)*(int *)(param_1 + 0x42c) * (long)(int)(uVar12 - uVar7);
    if (uVar8 >> 0x20 == 0) {
      iVar5 = (int)((uVar8 & 0xffffffff) / (ulong)uVar3);
    }
    else {
      iVar5 = (int)((long)uVar8 / (long)(ulong)uVar3);
    }
    uVar8 = (ulong)(uint)(PF_PART4(auVar14, 4) + iVar5);
  }
  PF_PART8(auVar14, 8) = (ulong)uVar7 << 0x20 | 0xc;
  PF_PART8(auVar14, 0) = uVar8 << 0x20 | 10;
  return auVar14;
}

#undef DAT_1000f1f9

#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e790
 */

void recovered_1000e790(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;

  uVar5 = (uint)param_2;
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  if (param_1 == 0) {
    local_34 = 0x2f8;
    if ((int)uVar5 < 0x2f8) {
      local_34 = uVar5;
    }
    if ((int)local_34 < 1) {
      local_34 = 0;
    }
    uVar6 = 400;
    if (param_2 < 0x19000000000) {
      uVar6 = uVar8;
    }
    uVar7 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      uVar7 = 0;
    }
    uVar5 = (int)param_3 + uVar5;
    uVar6 = 0x2f8;
    if ((int)uVar5 < 0x2f8) {
      uVar6 = uVar5;
    }
    uVar4 = 400;
    if ((int)uVar6 < 1) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0x2f8;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar6 = *(uint *)(param_1 + 4);
    }
    local_34 = uVar6;
    if ((int)uVar5 < (int)uVar6) {
      local_34 = uVar5;
    }
    if ((int)uVar5 < 0) {
      local_34 = 0;
    }
    uVar4 = 400;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar4 = *(uint *)(param_1 + 8);
    }
    uVar3 = uVar4;
    if ((int)uVar8 < (int)uVar4) {
      uVar3 = uVar8;
    }
    uVar7 = (ulong)uVar3;
    if (param_2 < 0) {
      uVar7 = 0;
    }
    uVar5 = (int)param_3 + uVar5;
    if ((int)uVar5 < (int)uVar6) {
      uVar6 = uVar5;
    }
    if ((int)uVar5 < 0) {
      uVar6 = 0;
    }
  }
  uVar8 = (int)((ulong)param_3 >> 0x20) + uVar8;
  if ((int)uVar8 < (int)uVar4) {
    uVar4 = uVar8;
  }
  uVar5 = 0;
  if (-1 < (int)uVar8) {
    uVar5 = uVar4;
  }
  if ((int)uVar7 < (int)uVar5) {
    do {
      uVar8 = (uint)uVar7;
      if ((int)local_34 < (int)uVar6) {
        uVar4 = local_34;
        do {
          if ((param_1 != 0) && (-1 < (int)(uVar4 | uVar8) && *(long *)(param_1 + 0x388) != 0)) {
            iVar2 = *(int *)(param_1 + 4);
            iVar9 = iVar2;
            if (iVar2 == 0) {
              iVar9 = 0x2f8;
            }
            if ((int)uVar4 < iVar9) {
              iVar9 = *(int *)(param_1 + 8);
              if (iVar9 == 0) {
                iVar9 = 400;
              }
              if ((int)uVar8 < iVar9) {
                uVar10 = (ulong)(uint)(iVar2 * 4);
                if (iVar2 == 0) {
                  uVar10 = 0xbe0;
                }
                if (*(uint *)(param_1 + 0xc) != 0) {
                  uVar10 = (ulong)*(uint *)(param_1 + 0xc);
                }
                lVar1 = uVar10 * uVar7 + (ulong)uVar4 * 4;
                *(char *)(*(long *)(param_1 + 0x388) + lVar1) = (char)param_4;
                *(char *)(*(long *)(param_1 + 0x388) + 1 + lVar1) = (char)((uint)param_4 >> 8);
                *(char *)(*(long *)(param_1 + 0x388) + 2 + lVar1) = (char)((uint)param_4 >> 0x10);
                *(undefined1 *)(*(long *)(param_1 + 0x388) + 3 + lVar1) = 0xff;
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
      uVar7 = (ulong)(uVar8 + 1);
    } while (uVar8 + 1 != uVar5);
  }
  return;
}

#undef local_34

#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e980
 */

void recovered_1000e980(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;

  uVar5 = (uint)param_2;
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  if (param_1 == 0) {
    local_34 = 0x2f8;
    if ((int)uVar5 < 0x2f8) {
      local_34 = uVar5;
    }
    if ((int)local_34 < 1) {
      local_34 = 0;
    }
    uVar6 = 400;
    if (param_2 < 0x19000000000) {
      uVar6 = uVar8;
    }
    uVar7 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      uVar7 = 0;
    }
    uVar5 = (int)param_3 + uVar5;
    uVar6 = 0x2f8;
    if ((int)uVar5 < 0x2f8) {
      uVar6 = uVar5;
    }
    uVar4 = 400;
    if ((int)uVar6 < 1) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0x2f8;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar6 = *(uint *)(param_1 + 4);
    }
    local_34 = uVar6;
    if ((int)uVar5 < (int)uVar6) {
      local_34 = uVar5;
    }
    if ((int)uVar5 < 0) {
      local_34 = 0;
    }
    uVar4 = 400;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar4 = *(uint *)(param_1 + 8);
    }
    uVar3 = uVar4;
    if ((int)uVar8 < (int)uVar4) {
      uVar3 = uVar8;
    }
    uVar7 = (ulong)uVar3;
    if (param_2 < 0) {
      uVar7 = 0;
    }
    uVar5 = (int)param_3 + uVar5;
    if ((int)uVar5 < (int)uVar6) {
      uVar6 = uVar5;
    }
    if ((int)uVar5 < 0) {
      uVar6 = 0;
    }
  }
  uVar8 = (int)((ulong)param_3 >> 0x20) + uVar8;
  if ((int)uVar8 < (int)uVar4) {
    uVar4 = uVar8;
  }
  uVar5 = 0;
  if (-1 < (int)uVar8) {
    uVar5 = uVar4;
  }
  if ((int)uVar7 < (int)uVar5) {
    do {
      uVar8 = (uint)uVar7;
      if ((int)local_34 < (int)uVar6) {
        uVar4 = local_34;
        do {
          if ((param_1 != 0) && (-1 < (int)(uVar4 | uVar8) && *(long *)(param_1 + 0x388) != 0)) {
            iVar2 = *(int *)(param_1 + 4);
            iVar9 = iVar2;
            if (iVar2 == 0) {
              iVar9 = 0x2f8;
            }
            if ((int)uVar4 < iVar9) {
              iVar9 = *(int *)(param_1 + 8);
              if (iVar9 == 0) {
                iVar9 = 400;
              }
              if ((int)uVar8 < iVar9) {
                uVar10 = (ulong)(uint)(iVar2 * 4);
                if (iVar2 == 0) {
                  uVar10 = 0xbe0;
                }
                if (*(uint *)(param_1 + 0xc) != 0) {
                  uVar10 = (ulong)*(uint *)(param_1 + 0xc);
                }
                lVar1 = uVar10 * uVar7 + (ulong)uVar4 * 4;
                *(char *)(*(long *)(param_1 + 0x388) + lVar1) = (char)param_4;
                *(char *)(*(long *)(param_1 + 0x388) + 1 + lVar1) = (char)((uint)param_4 >> 8);
                *(char *)(*(long *)(param_1 + 0x388) + 2 + lVar1) = (char)((uint)param_4 >> 0x10);
                *(undefined1 *)(*(long *)(param_1 + 0x388) + 3 + lVar1) = 0xd9;
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
      uVar7 = (ulong)(uVar8 + 1);
    } while (uVar8 + 1 != uVar5);
  }
  return;
}

#undef local_34

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef Ram0000000000280800
#define Ram0000000000280800 (*(uint32_t *)(0x280800U))
#undef Ram0000000000280804
#define Ram0000000000280804 (*(uint32_t *)(0x280804U))
#undef Ram0000000000280808
#define Ram0000000000280808 (*(uint32_t *)(0x280808U))
#undef UINT_00280850
#define UINT_00280850 (*(uint *)(0x280850U))
#undef UINT_00280978
#define UINT_00280978 (*(uint *)(0x280978U))
#define local_58 (*(void * *)(pf_stack_frame + 24))
#define local_4c (*(uint *)(pf_stack_frame + 36))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_44 (*(uint *)(pf_stack_frame + 44))
#define local_3c (*(uint *)(pf_stack_frame + 52))
#define local_38 (*(void * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb70
 */

void recovered_1000eb70(long param_1,uint param_2,int param_3,long param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;

  if (param_5 < 1 || param_4 == 0) {
    return;
  }
  local_3c = param_2;
  memset(&local_58,0,0x18);
  iVar4 = Ram0000000000280800;
  if (iVar4 != 0x50414d57) {
    return;
  }
  iVar4 = Ram0000000000280804;
  if (iVar4 == 0) {
    return;
  }
  uVar5 = Ram0000000000280808;
  if (uVar5 < 0xc) {
    return;
  }
  uVar5 = Ram0000000000280808;
  if (uVar5 < 0x17c) {
    return;
  }
  uVar5 = UINT_00280978;
  if ((code *)(ulong)uVar5 == (code *)0x0) {
    return;
  }
  uVar5 = (*(code *)(ulong)uVar5)
                    ((char *)param_4,param_5,0x80000001,
                     (param_6 | 0xff000000) >> 0x18 | (param_6 & 0xff0000) >> 8 |
                     (param_6 & 0xff00) << 8 | param_6 << 0x18,&local_58);
  if (uVar5 == 0) {
    return;
  }
  local_38 = local_58;
  if (local_58 != (void *)0x0) {
    if (local_48 != 0) {
      uVar6 = 0;
      uVar5 = local_4c;
      do {
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar8 = (int)uVar6 + param_3;
          uVar7 = 0;
          lVar9 = (long)local_58 + 3;
          uVar5 = local_3c;
          do {
            lVar12 = local_44 * uVar6;
            if (((*(char *)(lVar9 + lVar12) != '\0') && (param_1 != 0)) &&
               (-1 < (int)(uVar5 | uVar8) && *(long *)(param_1 + 0x388) != 0)) {
              iVar4 = *(int *)(param_1 + 4);
              iVar10 = iVar4;
              if (iVar4 == 0) {
                iVar10 = 0x2f8;
              }
              if ((int)uVar5 < iVar10) {
                iVar10 = *(int *)(param_1 + 8);
                if (iVar10 == 0) {
                  iVar10 = 400;
                }
                if ((int)uVar8 < iVar10) {
                  uVar11 = (ulong)(uint)(iVar4 * 4);
                  if (iVar4 == 0) {
                    uVar11 = 0xbe0;
                  }
                  if (*(uint *)(param_1 + 0xc) != 0) {
                    uVar11 = (ulong)*(uint *)(param_1 + 0xc);
                  }
                  uVar2 = *(undefined1 *)(lVar9 + -2 + lVar12);
                  uVar3 = *(undefined1 *)(lVar9 + -1 + lVar12);
                  lVar1 = uVar11 * uVar8 + (ulong)uVar5 * 4;
                  *(undefined1 *)(*(long *)(param_1 + 0x388) + lVar1) =
                       *(undefined1 *)(lVar9 + -3 + lVar12);
                  *(undefined1 *)(*(long *)(param_1 + 0x388) + 1 + lVar1) = uVar2;
                  *(undefined1 *)(*(long *)(param_1 + 0x388) + 2 + lVar1) = uVar3;
                  *(undefined1 *)(*(long *)(param_1 + 0x388) + 3 + lVar1) = 0xff;
                }
              }
            }
            uVar7 = uVar7 + 1;
            uVar5 = uVar5 + 1;
            lVar9 = lVar9 + 4;
          } while (uVar7 < local_4c);
          uVar5 = local_4c;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_48);
      if (local_58 == (void *)0x0) goto LAB_1000edcd;
    }
    iVar4 = Ram0000000000280800;
    if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000280804, iVar4 != 0)) &&
       ((uVar5 = Ram0000000000280808, 0xb < uVar5 && (uVar5 = Ram0000000000280808, 0x53 < uVar5))))
    {
      uVar5 = UINT_00280850;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(local_58);
      }
    }
  }
LAB_1000edcd:
  memset(&local_58,0,0x18);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef Ram0000000000280800
#undef Ram0000000000280804
#undef Ram0000000000280808
#undef UINT_00280850
#undef UINT_00280978
#undef local_58
#undef local_4c
#undef local_48
#undef local_44
#undef local_3c
#undef local_38
