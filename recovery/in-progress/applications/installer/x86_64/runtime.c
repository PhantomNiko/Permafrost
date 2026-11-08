/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10004710
#define DAT_10004710 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef DAT_10004724
#define DAT_10004724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x123U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef str_10004760
#define str_10004760 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_10004773
#define str_10004773 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
#undef str_100047c4
#define str_100047c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_100047d7
#define str_100047d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d6U)))
#undef str_100047e5
#define str_100047e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e4U)))
#undef str_100047f0
#define str_100047f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1efU)))
#undef str_100047f9
#define str_100047f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f8U)))
#undef str_10004802
#define str_10004802 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x201U)))
#undef str_10004811
#define str_10004811 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x210U)))
#undef str_1000481d
#define str_1000481d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_10004825
#define str_10004825 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_1000482d
#define str_1000482d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22cU)))
#undef str_10004835
#define str_10004835 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x234U)))
#undef str_10004855
#define str_10004855 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x254U)))
#undef str_10004878
#define str_10004878 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x277U)))
#define uStack_320 (*(undefined8 *)(frame + 4944))
#define uStack_310 (*(undefined8 *)(frame + 4960))
#define uStack_300 (*(undefined8 *)(frame + 4976))
#define uStack_2f0 (*(undefined8 *)(frame + 4992))
#define uStack_2e0 (*(undefined8 *)(frame + 5008))
#define uStack_2d0 (*(undefined8 *)(frame + 5024))
#define uStack_2c0 (*(undefined8 *)(frame + 5040))
#define uStack_2b0 (*(undefined8 *)(frame + 5056))
#define uStack_2a0 (*(undefined8 *)(frame + 5072))
#define uStack_290 (*(undefined8 *)(frame + 5088))
#define uStack_280 (*(undefined8 *)(frame + 5104))
#define uStack_270 (*(undefined8 *)(frame + 5120))
#define uStack_260 (*(undefined8 *)(frame + 5136))
#define uStack_250 (*(undefined8 *)(frame + 5152))
#define uStack_240 (*(undefined8 *)(frame + 5168))
#define uStack_230 (*(undefined8 *)(frame + 5184))
#define uStack_220 (*(undefined8 *)(frame + 5200))
#define uStack_210 (*(undefined8 *)(frame + 5216))
#define uStack_200 (*(undefined8 *)(frame + 5232))
#define uStack_1f0 (*(undefined8 *)(frame + 5248))
#define uStack_1e0 (*(undefined8 *)(frame + 5264))
#define uStack_1d0 (*(undefined8 *)(frame + 5280))
#define uStack_1c0 (*(undefined8 *)(frame + 5296))
#define uStack_1b0 (*(undefined8 *)(frame + 5312))
#define uStack_1a0 (*(undefined8 *)(frame + 5328))
#define uStack_190 (*(undefined8 *)(frame + 5344))
#define uStack_180 (*(undefined8 *)(frame + 5360))
#define uStack_170 (*(undefined8 *)(frame + 5376))
#define uStack_160 (*(undefined8 *)(frame + 5392))
#define uStack_150 (*(undefined8 *)(frame + 5408))
#define uStack_140 (*(undefined8 *)(frame + 5424))
#define uStack_130 (*(undefined8 *)(frame + 5440))
#define uStack_120 (*(undefined8 *)(frame + 5456))
#define uStack_110 (*(undefined8 *)(frame + 5472))
#define uStack_100 (*(undefined8 *)(frame + 5488))
#define local_1644 (*(uint *)(frame + 44))
#define local_1634 (*(int *)(frame + 60))
#define uStack_f0 (*(undefined8 *)(frame + 5504))
#define local_1630 (*(uint *)(frame + 64))
#define local_13d0 (*(undefined8 *)(frame + 672))
#define uStack_e0 (*(undefined8 *)(frame + 5520))
#define local_770 (*(int *)(frame + 3840))
#define local_76c (*(uint *)(frame + 3844))
#define uStack_d0 (*(undefined8 *)(frame + 5536))
#define local_768 (*(uint *)(frame + 3848))
#define local_764 (*(uint *)(frame + 3852))
#define uStack_c0 (*(undefined8 *)(frame + 5552))
#define local_760 (*(uint *)(frame + 3856))
#define local_75c (*(uint *)(frame + 3860))
#define local_758 (*(uint *)(frame + 3864))
#define local_454 (*(char *)(frame + 4636))
#define local_453 (*(char *)(frame + 4637))
#define local_450 (*(undefined1 (*)[64])(frame + 4640))
#define local_410 (*(byte *)(frame + 4704))
#define local_408 (*(undefined4 *)(frame + 4712))
#define local_3f8 (*(undefined8 *)(frame + 4728))
#define local_3e8 (*(undefined8 *)(frame + 4744))
#define local_3d8 (*(void * *)(frame + 4760))
#define local_3c8 (*(undefined8 *)(frame + 4776))
#define local_3b8 (*(undefined8 *)(frame + 4792))
#define local_3a8 (*(undefined8 *)(frame + 4808))
#define local_398 (*(undefined8 *)(frame + 4824))
#define local_388 (*(undefined8 *)(frame + 4840))
#define pvStack_90 (*(void * *)(frame + 5600))
#define local_378 (*(undefined8 *)(frame + 4856))
#define local_368 (*(undefined8 *)(frame + 4872))
#define uStack_80 (*(undefined8 *)(frame + 5616))
#define local_358 (*(undefined8 *)(frame + 4888))
#define local_348 (*(undefined8 *)(frame + 4904))
#define local_338 (*(undefined8 *)(frame + 4920))
#define local_328 (*(undefined8 *)(frame + 4936))
#define local_318 (*(undefined8 *)(frame + 4952))
#define local_308 (*(undefined8 *)(frame + 4968))
#define local_2f8 (*(undefined8 *)(frame + 4984))
#define local_2e8 (*(undefined8 *)(frame + 5000))
#define local_2d8 (*(undefined8 *)(frame + 5016))
#define local_2c8 (*(undefined8 *)(frame + 5032))
#define local_2b8 (*(undefined8 *)(frame + 5048))
#define local_2a8 (*(undefined8 *)(frame + 5064))
#define local_298 (*(undefined8 *)(frame + 5080))
#define local_288 (*(undefined8 *)(frame + 5096))
#define local_278 (*(undefined8 *)(frame + 5112))
#define local_268 (*(undefined8 *)(frame + 5128))
#define local_258 (*(undefined8 *)(frame + 5144))
#define local_248 (*(undefined8 *)(frame + 5160))
#define local_238 (*(undefined8 *)(frame + 5176))
#define local_228 (*(undefined8 *)(frame + 5192))
#define local_218 (*(undefined8 *)(frame + 5208))
#define local_208 (*(undefined8 *)(frame + 5224))
#define local_1f8 (*(undefined8 *)(frame + 5240))
#define local_1e8 (*(undefined8 *)(frame + 5256))
#define local_1d8 (*(undefined8 *)(frame + 5272))
#define local_1c8 (*(undefined8 *)(frame + 5288))
#define local_1b8 (*(undefined8 *)(frame + 5304))
#define local_1a8 (*(undefined8 *)(frame + 5320))
#define local_198 (*(undefined8 *)(frame + 5336))
#define local_188 (*(undefined8 *)(frame + 5352))
#define local_178 (*(undefined8 *)(frame + 5368))
#define local_168 (*(undefined8 *)(frame + 5384))
#define local_158 (*(undefined8 *)(frame + 5400))
#define local_148 (*(undefined8 *)(frame + 5416))
#define local_138 (*(undefined8 *)(frame + 5432))
#define local_128 (*(undefined8 *)(frame + 5448))
#define local_118 (*(undefined8 *)(frame + 5464))
#define local_108 (*(undefined8 *)(frame + 5480))
#define local_f8 (*(undefined8 *)(frame + 5496))
#define local_e8 (*(undefined8 *)(frame + 5512))
#define local_d8 (*(undefined8 *)(frame + 5528))
#define local_c8 (*(undefined8 *)(frame + 5544))
#define local_b0 (*(char *)(frame + 5568))
#define local_af (*(char *)(frame + 5569))
#define local_ae (*(char *)(frame + 5570))
#define local_ad (*(char *)(frame + 5571))
#define local_ac (*(char *)(frame + 5572))
#define local_ab (*(byte *)(frame + 5573))
#define local_aa (*(char *)(frame + 5574))
#define local_a9 (*(char *)(frame + 5575))
#define local_a8 (*(char *)(frame + 5576))
#define local_a7 (*(char *)(frame + 5577))
#define local_a6 (*(char *)(frame + 5578))
#define local_a5 (*(char *)(frame + 5579))
#define local_a4 (*(char *)(frame + 5580))
#define local_a0 (*(uint *)(frame + 5584))
#define local_98 (*(undefined8 *)(frame + 5592))
#define local_88 (*(undefined8 *)(frame + 5608))
#define local_78 (*(undefined2 *)(frame + 5624))
#define local_76 (*(char *)(frame + 5626))
#define local_75 (*(char *)(frame + 5627))
#define local_74 (*(char *)(frame + 5628))
#define local_73 (*(char *)(frame + 5629))
#define local_72 (*(char *)(frame + 5630))
#define local_71 (*(char *)(frame + 5631))
#define local_70 (*(char *)(frame + 5632))
#define local_6f (*(char *)(frame + 5633))
#define local_6e (*(char *)(frame + 5634))
#define local_6d (*(char *)(frame + 5635))
#define local_6c (*(char *)(frame + 5636))
#define local_6b (*(char *)(frame + 5637))
#define local_6a (*(char *)(frame + 5638))
#define local_69 (*(char *)(frame + 5639))
#define local_68 (*(char *)(frame + 5640))
#define local_67 (*(char *)(frame + 5641))
#define local_66 (*(char *)(frame + 5642))
#define local_65 (*(char *)(frame + 5643))
#define local_64 (*(char *)(frame + 5644))
#define local_63 (*(char *)(frame + 5645))
#define local_62 (*(char *)(frame + 5646))
#define local_61 (*(char *)(frame + 5647))
#define uStack_1650 (*(undefined8 *)(frame + 32))
#define local_60 (*(char *)(frame + 5648))
#define local_5f (*(char *)(frame + 5649))
#define local_5e (*(char *)(frame + 5650))
#define local_5d (*(char *)(frame + 5651))
#define local_5c (*(char *)(frame + 5652))
#define local_5b (*(char *)(frame + 5653))
#define local_5a (*(char *)(frame + 5654))
#define local_59 (*(char *)(frame + 5655))
#define local_58 (*(undefined2 *)(frame + 5656))
#define local_56 (*(char *)(frame + 5658))
#define local_55 (*(char *)(frame + 5659))
#define local_54 (*(char *)(frame + 5660))
#define local_53 (*(char *)(frame + 5661))
#define local_52 (*(char *)(frame + 5662))
#define local_51 (*(char *)(frame + 5663))
#define local_50 (*(char *)(frame + 5664))
#define local_4f (*(char *)(frame + 5665))
#define local_4e (*(char *)(frame + 5666))
#define local_4d (*(char *)(frame + 5667))
#define local_4c (*(char *)(frame + 5668))
#define local_4b (*(char *)(frame + 5669))
#define local_4a (*(char *)(frame + 5670))
#define local_49 (*(char *)(frame + 5671))
#define local_48 (*(char *)(frame + 5672))
#define local_47 (*(char *)(frame + 5673))
#define local_46 (*(char *)(frame + 5674))
#define local_45 (*(char *)(frame + 5675))
#define local_44 (*(char *)(frame + 5676))
#define local_43 (*(char *)(frame + 5677))
#define local_42 (*(char *)(frame + 5678))
#define local_41 (*(char (*)[15])(frame + 5679))
#define local_32 (*(char *)(frame + 5694))
#define local_31 (*(char *)(frame + 5695))
#define acStack_1649 (*(char (*)[5])(frame + 39))
#define auStack_1440 (*(undefined8 (*)[14])(frame + 560))
#define auStack_13c8 (*(undefined8 (*)[395])(frame + 680))
#define acStack_754 (*(char (*)[768])(frame + 3868))
#define uStack_404 (*(uint *)(frame + 4716))
#define uStack_400 (*(uint *)(frame + 4720))
#define uStack_3fc (*(undefined4 *)(frame + 4724))
#define uStack_3f0 (*(undefined8 *)(frame + 4736))
#define uStack_3e0 (*(undefined8 *)(frame + 4752))
#define uStack_3d0 (*(undefined8 *)(frame + 4768))
#define uStack_3c0 (*(undefined8 *)(frame + 4784))
#define uStack_3b0 (*(undefined8 *)(frame + 4800))
#define uStack_3a0 (*(undefined8 *)(frame + 4816))
#define uStack_390 (*(undefined8 *)(frame + 4832))
#define uStack_380 (*(undefined8 *)(frame + 4848))
#define uStack_370 (*(undefined8 *)(frame + 4864))
#define uStack_360 (*(undefined8 *)(frame + 4880))
#define uStack_350 (*(undefined8 *)(frame + 4896))
#define uStack_340 (*(undefined8 *)(frame + 4912))
#define uStack_330 (*(undefined8 *)(frame + 4928))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005a0
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_100005a0(void)

{
  unsigned char frame[5776] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  int iVar18;
  long lVar19;
  undefined1 uVar20;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  byte bVar24;

  uStack_1650 = 0x100005d1;
  pf_app_window_spec(local_450,(char *)"Install Permafrost",0x280,0x1c8);
  local_98 = 0;
  pvStack_90 = (void *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_408 = 0;
  uStack_404 = 0;
  uStack_400 = 0;
  uStack_3fc = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = (void *)0x0;
  uStack_3d0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  lVar5 = 0x70;
  do {
    *(undefined8 *)((long)auStack_1440 + lVar5) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 8) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x10) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x18) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x20) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x28) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x30) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x38) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x40) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x48) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x50) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x58) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x60) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x68) = 0;
    *(undefined8 *)((long)auStack_1440 + lVar5 + 0x70) = 0;
    *(undefined8 *)((long)auStack_13c8 + lVar5) = 0;
    lVar5 = lVar5 + 0x80;
  } while (lVar5 != 0xff0);
  local_760 = 0x32;
  local_410 = local_410 | 1;
  uStack_1650 = 0x100007d0;
  uVar3 = terror_ui_window_open(&local_408,local_450);
  if (uVar3 == 0) {
    iVar4 = 0;
  }
  else {
    local_98 = CONCAT44(uStack_400,uStack_404);
    pvStack_90 = local_3d8;
    if (local_3d8 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      uStack_1650 = 0x10000809;
      recovered_10002240((long)&local_13d0);
      uStack_1650 = 0x1000081f;
      memset(acStack_1649 + 1,0,0x278);
      uStack_1650 = 0x1000082e;
      uVar3 = terror_ui_window_query(&local_408,acStack_1649 + 1);
      if (uVar3 != 0) {
        while( true ) {
          uStack_1650 = 0x1000087a;
          uVar2 = terror_ui_window_info_requests_close(acStack_1649 + 1);
          if (uVar2 != '\0') break;
          uStack_1650 = 0x1000088d;
          uVar3 = terror_ui_window_sync_buffer(&local_408,acStack_1649 + 1);
          if (uVar3 == 0) break;
          local_98 = CONCAT44(uStack_400,uStack_404);
          pvStack_90 = local_3d8;
          iVar4 = 1;
          if (local_3d8 == (void *)0x0) goto LAB_100021fb;
          if (0 < (int)uStack_400) {
            uVar9 = 0;
            do {
              if (0 < (int)uStack_404) {
                uVar12 = 0;
                do {
                  if (((local_3d8 != (void *)0x0) && ((long)uVar12 < (long)(int)uStack_404)) &&
                     ((long)uVar9 < (long)(int)uStack_400)) {
                    lVar5 = (long)(int)uStack_404 * uVar9 + uVar12;
                    *(undefined1 *)((long)local_3d8 + lVar5 * 4) = 0xf4;
                    *(undefined1 *)((long)local_3d8 + lVar5 * 4 + 1) = 0xf6;
                    *(undefined1 *)((long)local_3d8 + lVar5 * 4 + 2) = 0xf8;
                    *(undefined1 *)((long)local_3d8 + lVar5 * 4 + 3) = 0xff;
                  }
                  uVar12 = uVar12 + 1;
                } while (uStack_404 != uVar12);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 != uStack_400);
          }
          lVar5 = 0;
          do {
            if (0 < (int)uStack_404) {
              uVar9 = 0;
              do {
                if (((local_3d8 != (void *)0x0) && ((long)uVar9 < (long)(int)uStack_404)) &&
                   (lVar5 < (int)uStack_400)) {
                  lVar13 = (int)uStack_404 * lVar5 + uVar9;
                  *(undefined1 *)((long)local_3d8 + lVar13 * 4) = 0x22;
                  *(undefined1 *)((long)local_3d8 + lVar13 * 4 + 1) = 0x42;
                  *(undefined1 *)((long)local_3d8 + lVar13 * 4 + 2) = 0x62;
                  *(undefined1 *)((long)local_3d8 + lVar13 * 4 + 3) = 0xff;
                }
                uVar9 = uVar9 + 1;
              } while (uStack_404 != uVar9);
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0x32);
          uStack_1650 = 0xff;
          recovered_10002750((uint *)&local_98,0x1c,0x12,str_100047c4,2,0xff,0xff,0xff);
          uStack_1650 = 0x46;
          recovered_10002750((uint *)&local_98,0x1e,0x40,str_100047d7,1,0x46,0x46,0x46);
          lVar5 = 0x52;
          lVar13 = 0x69;
          uVar9 = 0;
          do {
            if (uVar9 == local_76c) {
              bVar21 = local_768 != 0;
              cVar8 = bVar21 * '\x04' + -0x14;
              cVar11 = (local_768 == 0) * '\x02' + -6;
              bVar22 = (long)uVar9 < (long)local_770;
              cVar6 = bVar21 * '\t' + -0x23;
              if ((long)local_770 <= (long)uVar9) {
                cVar8 = -4;
                cVar11 = -4;
                cVar6 = -4;
              }
            }
            else {
              bVar22 = false;
              cVar8 = -4;
              cVar11 = -4;
              cVar6 = -4;
            }
            lVar15 = lVar5;
            do {
              lVar16 = 0x1c;
              do {
                if (pvStack_90 != (void *)0x0) {
                  if ((lVar16 < (int)(uint)local_98) && (lVar15 < (int)PF_PART4(local_98, 4))) {
                    lVar19 = (int)(uint)local_98 * lVar15 + lVar16;
                    *(char *)((long)pvStack_90 + lVar19 * 4) = cVar6;
                    *(char *)((long)pvStack_90 + lVar19 * 4 + 1) = cVar8;
                    *(char *)((long)pvStack_90 + lVar19 * 4 + 2) = cVar11;
                    *(undefined1 *)((long)pvStack_90 + lVar19 * 4 + 3) = 0xff;
                  }
                }
                lVar16 = lVar16 + 1;
              } while (lVar16 != 0x264);
              lVar15 = lVar15 + 1;
            } while (lVar15 != lVar13);
            uStack_1650 = 0xc4;
            if (bVar22) {
              uStack_1650 = 0x99;
            }
            uVar20 = 0xc4;
            if (bVar22) {
              uVar20 = 0x67;
            }
            uVar17 = 0xc4;
            if (bVar22) {
              uVar17 = 0x34;
            }
            recovered_10002970((uint *)&local_98,0x1c,(int)uVar9 * 0x1a + 0x52,0x248,0x17,uVar17,
                               uVar20,bVar24);
            if ((long)uVar9 < (long)local_770) {
              pcVar7 = (char *)((long)auStack_13c8 + uVar9 * 0x84 + -4);
              iVar4 = (int)uVar9 * 0x1a + 0x5a;
              iVar18 = 0x1e;
              uStack_1650 = 0x1e;
              bVar23 = 0x1e;
LAB_10000a98:
              recovered_10002750((uint *)&local_98,0x24,iVar4,pcVar7,1,iVar18,bVar23,bVar24);
            }
            else if (uVar9 == 0) {
              iVar4 = 0x5a;
              pcVar7 = str_100047e5;
              iVar18 = 0x78;
              uStack_1650 = 0x78;
              bVar23 = 0x78;
              goto LAB_10000a98;
            }
            uVar9 = uVar9 + 1;
            lVar5 = lVar5 + 0x1a;
            lVar13 = lVar13 + 0x1a;
          } while (uVar9 != 6);
          recovered_10002b80((uint *)&local_98,0x1e,0xfa,0x138,str_100047f0,
                             &DAT_10004710 + *(int *)(&DAT_10004710 + (long)(int)local_764 * 4),
                             local_768 == 1);
          local_58 = local_58 & 0xff00;
          if ((int)local_760 < 1) {
            local_58 = 0x30;
            lVar5 = 2;
            pcVar7 = (char *)((long)&local_58 + 1);
LAB_10001160:
            *pcVar7 = '%';
LAB_10001163:
            pcVar7 = (char *)((long)&local_58 + lVar5);
          }
          else {
            uVar9 = 0;
            uVar3 = local_760;
            do {
              acStack_1649[uVar9 + 1] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
              uVar12 = uVar9 + 1;
              if (0xe < uVar9) break;
              bVar22 = 9 < uVar3;
              uVar9 = uVar12;
              uVar3 = uVar3 / 10;
            } while (bVar22);
            do {
              local_32 = acStack_1649[uVar12];
              local_31 = '\0';
              pcVar7 = &local_31;
              cVar6 = local_32;
              if ((char)local_58 == '\0') {
                uVar9 = 0;
joined_r0x10000ee5:
                while (uVar10 = uVar9, cVar6 != '\0') {
                  *(char *)((long)&local_58 + uVar9) = cVar6;
                  uVar10 = uVar9 + 1;
                  if (0x15 < uVar9) break;
                  cVar6 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  uVar9 = uVar10;
                }
LAB_10000f0a:
                pcVar7 = (char *)((long)&local_58 + uVar10);
              }
              else {
                if (PF_PART1(local_58, 1) == '\0') {
                  uVar9 = 1;
                  goto joined_r0x10000ee5;
                }
                if (local_56 == '\0') {
                  uVar9 = 2;
                  goto joined_r0x10000ee5;
                }
                if (local_55 == '\0') {
                  uVar9 = 3;
                  goto joined_r0x10000ee5;
                }
                if (local_54 == '\0') {
                  uVar9 = 4;
                  goto joined_r0x10000ee5;
                }
                if (local_53 == '\0') {
                  uVar9 = 5;
                  goto joined_r0x10000ee5;
                }
                if (local_52 == '\0') {
                  uVar9 = 6;
                  goto joined_r0x10000ee5;
                }
                if (local_51 == '\0') {
                  uVar9 = 7;
                  goto joined_r0x10000ee5;
                }
                if (local_50 == '\0') {
                  uVar9 = 8;
                  goto joined_r0x10000ee5;
                }
                if (local_4f == '\0') {
                  uVar9 = 9;
                  goto joined_r0x10000ee5;
                }
                if (local_4e == '\0') {
                  uVar9 = 10;
                  goto joined_r0x10000ee5;
                }
                if (local_4d == '\0') {
                  uVar9 = 0xb;
                  goto joined_r0x10000ee5;
                }
                if (local_4c == '\0') {
                  uVar9 = 0xc;
                  goto joined_r0x10000ee5;
                }
                if (local_4b == '\0') {
                  uVar9 = 0xd;
                  goto joined_r0x10000ee5;
                }
                if (local_4a == '\0') {
                  uVar9 = 0xe;
                  goto joined_r0x10000ee5;
                }
                if (local_49 == '\0') {
                  uVar9 = 0xf;
                  goto joined_r0x10000ee5;
                }
                if (local_48 == '\0') {
                  uVar9 = 0x10;
                  goto joined_r0x10000ee5;
                }
                if (local_47 == '\0') {
                  uVar9 = 0x11;
                  goto joined_r0x10000ee5;
                }
                if (local_46 == '\0') {
                  uVar9 = 0x12;
                  goto joined_r0x10000ee5;
                }
                if (local_45 == '\0') {
                  uVar9 = 0x13;
                  goto joined_r0x10000ee5;
                }
                if (local_44 == '\0') {
                  uVar9 = 0x14;
                  goto joined_r0x10000ee5;
                }
                if (local_43 == '\0') {
                  uVar9 = 0x15;
                  goto joined_r0x10000ee5;
                }
                if (local_42 == '\0') {
                  uVar9 = 0x16;
                  goto joined_r0x10000ee5;
                }
                pcVar7 = local_41;
                if (local_41[0] == '\0') {
                  uVar10 = 0x17;
                  goto LAB_10000f0a;
                }
              }
              *pcVar7 = '\0';
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
            if ((char)local_58 == '\0') {
              lVar5 = 1;
              pcVar7 = (char *)&local_58;
              goto LAB_10001160;
            }
            if (PF_PART1(local_58, 1) == '\0') {
              lVar5 = 2;
              pcVar7 = (char *)((long)&local_58 + 1);
              goto LAB_10001160;
            }
            if (local_56 == '\0') {
              lVar5 = 3;
              pcVar7 = &local_56;
              goto LAB_10001160;
            }
            if (local_55 == '\0') {
              lVar5 = 4;
              pcVar7 = &local_55;
              goto LAB_10001160;
            }
            if (local_54 == '\0') {
              lVar5 = 5;
              pcVar7 = &local_54;
              goto LAB_10001160;
            }
            if (local_53 == '\0') {
              lVar5 = 6;
              pcVar7 = &local_53;
              goto LAB_10001160;
            }
            if (local_52 == '\0') {
              lVar5 = 7;
              pcVar7 = &local_52;
              goto LAB_10001160;
            }
            if (local_51 == '\0') {
              lVar5 = 8;
              pcVar7 = &local_51;
              goto LAB_10001160;
            }
            if (local_50 == '\0') {
              lVar5 = 9;
              pcVar7 = &local_50;
              goto LAB_10001160;
            }
            if (local_4f == '\0') {
              lVar5 = 10;
              pcVar7 = &local_4f;
              goto LAB_10001160;
            }
            if (local_4e == '\0') {
              lVar5 = 0xb;
              pcVar7 = &local_4e;
              goto LAB_10001160;
            }
            if (local_4d == '\0') {
              lVar5 = 0xc;
              pcVar7 = &local_4d;
              goto LAB_10001160;
            }
            if (local_4c == '\0') {
              lVar5 = 0xd;
              pcVar7 = &local_4c;
              goto LAB_10001160;
            }
            if (local_4b == '\0') {
              lVar5 = 0xe;
              pcVar7 = &local_4b;
              goto LAB_10001160;
            }
            if (local_4a == '\0') {
              lVar5 = 0xf;
              pcVar7 = &local_4a;
              goto LAB_10001160;
            }
            if (local_49 == '\0') {
              lVar5 = 0x10;
              pcVar7 = &local_49;
              goto LAB_10001160;
            }
            if (local_48 == '\0') {
              lVar5 = 0x11;
              pcVar7 = &local_48;
              goto LAB_10001160;
            }
            if (local_47 == '\0') {
              lVar5 = 0x12;
              pcVar7 = &local_47;
              goto LAB_10001160;
            }
            if (local_46 == '\0') {
              lVar5 = 0x13;
              pcVar7 = &local_46;
              goto LAB_10001160;
            }
            if (local_45 == '\0') {
              lVar5 = 0x14;
              pcVar7 = &local_45;
              goto LAB_10001160;
            }
            if (local_44 == '\0') {
              lVar5 = 0x15;
              pcVar7 = &local_44;
              goto LAB_10001160;
            }
            if (local_43 == '\0') {
              lVar5 = 0x16;
              pcVar7 = &local_43;
              goto LAB_10001160;
            }
            if (local_42 == '\0') {
              lVar5 = 0x17;
              pcVar7 = &local_42;
              goto LAB_10001160;
            }
            pcVar7 = local_41;
            if (local_41[0] == '\0') {
              lVar5 = 0x17;
              goto LAB_10001163;
            }
          }
          *pcVar7 = '\0';
          recovered_10002b80((uint *)&local_98,0x184,0xfa,0xe0,str_100047f9,(char *)&local_58,
                             local_768 == 2);
          recovered_10002b80((uint *)&local_98,0x1e,0x132,0x246,str_10004802,
                             &DAT_10004724 + *(int *)(&DAT_10004724 + (long)(int)local_75c * 4),
                             local_768 == 3);
          local_78 = local_78 & 0xff00;
          if (local_758 == 0) {
            local_78 = 0x30;
          }
          else {
            uVar9 = 0;
            uVar3 = local_758;
            do {
              acStack_1649[uVar9 + 1] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
              uVar12 = uVar9 + 1;
              if (0xe < uVar9) break;
              bVar22 = 9 < uVar3;
              uVar9 = uVar12;
              uVar3 = uVar3 / 10;
            } while (bVar22);
            do {
              cVar6 = acStack_1649[uVar12];
              local_31 = '\0';
              if ((char)local_78 == '\0') {
                uVar9 = 0;
LAB_100014e0:
                pcVar7 = &local_31;
                while (uVar10 = uVar9, cVar6 != '\0') {
                  local_41[uVar9 - 0x37] = cVar6;
                  uVar10 = uVar9 + 1;
                  if (0x1d < uVar9) break;
                  cVar6 = *pcVar7;
                  uVar9 = uVar10;
                  pcVar7 = pcVar7 + 1;
                }
LAB_1000150a:
                pcVar7 = local_41 + (uVar10 - 0x37);
              }
              else {
                if (PF_PART1(local_78, 1) == '\0') {
                  uVar9 = 1;
                  goto LAB_100014e0;
                }
                if (local_76 == '\0') {
                  uVar9 = 2;
                  goto LAB_100014e0;
                }
                if (local_75 == '\0') {
                  uVar9 = 3;
                  goto LAB_100014e0;
                }
                if (local_74 == '\0') {
                  uVar9 = 4;
                  goto LAB_100014e0;
                }
                if (local_73 == '\0') {
                  uVar9 = 5;
                  goto LAB_100014e0;
                }
                if (local_72 == '\0') {
                  uVar9 = 6;
                  goto LAB_100014e0;
                }
                if (local_71 == '\0') {
                  uVar9 = 7;
                  goto LAB_100014e0;
                }
                if (local_70 == '\0') {
                  uVar9 = 8;
                  goto LAB_100014e0;
                }
                if (local_6f == '\0') {
                  uVar9 = 9;
                  goto LAB_100014e0;
                }
                if (local_6e == '\0') {
                  uVar9 = 10;
                  goto LAB_100014e0;
                }
                if (local_6d == '\0') {
                  uVar9 = 0xb;
                  goto LAB_100014e0;
                }
                if (local_6c == '\0') {
                  uVar9 = 0xc;
                  goto LAB_100014e0;
                }
                if (local_6b == '\0') {
                  uVar9 = 0xd;
                  goto LAB_100014e0;
                }
                if (local_6a == '\0') {
                  uVar9 = 0xe;
                  goto LAB_100014e0;
                }
                if (local_69 == '\0') {
                  uVar9 = 0xf;
                  goto LAB_100014e0;
                }
                if (local_68 == '\0') {
                  uVar9 = 0x10;
                  goto LAB_100014e0;
                }
                if (local_67 == '\0') {
                  uVar9 = 0x11;
                  goto LAB_100014e0;
                }
                if (local_66 == '\0') {
                  uVar9 = 0x12;
                  goto LAB_100014e0;
                }
                if (local_65 == '\0') {
                  uVar9 = 0x13;
                  goto LAB_100014e0;
                }
                if (local_64 == '\0') {
                  uVar9 = 0x14;
                  goto LAB_100014e0;
                }
                if (local_63 == '\0') {
                  uVar9 = 0x15;
                  goto LAB_100014e0;
                }
                if (local_62 == '\0') {
                  uVar9 = 0x16;
                  goto LAB_100014e0;
                }
                if (local_61 == '\0') {
                  uVar9 = 0x17;
                  goto LAB_100014e0;
                }
                if (local_60 == '\0') {
                  uVar9 = 0x18;
                  goto LAB_100014e0;
                }
                if (local_5f == '\0') {
                  uVar9 = 0x19;
                  goto LAB_100014e0;
                }
                if (local_5e == '\0') {
                  uVar9 = 0x1a;
                  goto LAB_100014e0;
                }
                if (local_5d == '\0') {
                  uVar9 = 0x1b;
                  goto LAB_100014e0;
                }
                if (local_5c == '\0') {
                  uVar9 = 0x1c;
                  goto LAB_100014e0;
                }
                if (local_5b == '\0') {
                  uVar9 = 0x1d;
                  goto LAB_100014e0;
                }
                if (local_5a == '\0') {
                  uVar9 = 0x1e;
                  goto LAB_100014e0;
                }
                pcVar7 = &local_59;
                if (local_59 == '\0') {
                  uVar10 = 0x1f;
                  goto LAB_1000150a;
                }
              }
              *pcVar7 = '\0';
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          recovered_10002b80((uint *)&local_98,0x1e,0x160,0x130,str_10004811,(char *)&local_78,
                             local_768 == 4);
          recovered_10002d70((uint *)&local_98,0x1e,0x184,0x70,0x24,str_1000481d,0);
          pcVar7 = str_1000482d;
          if (local_454 != '\0') {
            pcVar7 = str_10004825;
          }
          recovered_10002d70((uint *)&local_98,0x1de,0x184,0x86,0x24,pcVar7,local_768 == 5);
          uStack_1650 = 0x5a;
          recovered_10002750((uint *)&local_98,0xa0,0x186,str_10004835,1,0x5a,0x5a,0x5a);
          uStack_1650 = 0x5a;
          recovered_10002750((uint *)&local_98,0xa0,0x19a,str_10004855,1,0x5a,0x5a,0x5a);
          lVar5 = 0x1ae;
          pcVar7 = acStack_1649 + 1;
          do {
            if (0 < (int)(uint)local_98) {
              uVar9 = 0;
              do {
                if (((pvStack_90 != (void *)0x0) && ((long)uVar9 < (long)(int)(uint)local_98)) &&
                   (lVar5 < (int)PF_PART4(local_98, 4))) {
                  lVar13 = (int)(uint)local_98 * lVar5 + uVar9;
                  *(undefined1 *)((long)pvStack_90 + lVar13 * 4) = 0xe8;
                  *(undefined1 *)((long)pvStack_90 + lVar13 * 4 + 1) = 0xec;
                  *(undefined1 *)((long)pvStack_90 + lVar13 * 4 + 2) = 0xf0;
                  *(undefined1 *)((long)pvStack_90 + lVar13 * 4 + 3) = 0xff;
                }
                uVar9 = uVar9 + 1;
              } while ((local_98 & 0xffffffff) != uVar9);
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0x1c8);
          uStack_1650 = 0x46;
          recovered_10002750((uint *)&local_98,0x1e,0x1b6,str_10004878,1,0x46,0x46,0x46);
          lVar5 = 0;
          while( true ) {
            cVar6 = acStack_754[lVar5];
            if ((cVar6 == '\0') || (cVar6 == '\n')) goto LAB_10001790;
            acStack_1649[lVar5 + 1] = cVar6;
            cVar6 = acStack_754[lVar5 + 1];
            if ((cVar6 == '\0') || (cVar6 == '\n')) break;
            acStack_1649[lVar5 + 2] = cVar6;
            cVar6 = acStack_754[lVar5 + 2];
            if ((cVar6 == '\0') || (cVar6 == '\n')) {
              lVar5 = lVar5 + 2;
              goto LAB_10001790;
            }
            acStack_1649[lVar5 + 3] = cVar6;
            cVar6 = acStack_754[lVar5 + 3];
            if ((cVar6 == '\0') || (cVar6 == '\n')) {
              lVar5 = lVar5 + 3;
              goto LAB_10001790;
            }
            if (lVar5 == 0x5c) {
              lVar5 = 0x5f;
              goto LAB_10001790;
            }
            acStack_1649[lVar5 + 4] = cVar6;
            lVar5 = lVar5 + 4;
          }
          lVar5 = lVar5 + 1;
LAB_10001790:
          acStack_1649[lVar5 + 1] = '\0';
          uStack_1650 = 0x28;
          recovered_10002750((uint *)&local_98,0x5a,0x1b6,pcVar7,1,0x28,0x28,0x28);
          terror_ui_window_present(&local_408,(char *)"Install Permafrost",pvStack_90,(uint)local_98,PF_PART4(local_98, 4),
                             (uint)local_98 * 4,0xf6f6f6);
          uStack_1650 = 0x10001805;
          terror_ui_keyboard_poll(&local_b0);
          if ((local_b0 != '\0') || (local_a4 == '\x01')) {
            if (local_768 == 0) {
              puVar1 = &local_76c;
              uVar3 = local_76c;
            }
            else {
              puVar1 = &local_768;
              uVar3 = local_768;
            }
            if (0 < (int)uVar3) {
              *puVar1 = uVar3 - 1;
            }
          }
          if ((local_af == '\0') && (local_a5 != '\x01')) {
joined_r0x100018bf:
            if (local_ae != '\0') goto LAB_100018ce;
LAB_100018c1:
            if (local_a9 == '\x01') goto LAB_100018ce;
            goto switchD_100018ed_default;
          }
          if (local_768 != 0) {
            if ((int)local_768 < 5) goto LAB_100018b0;
            goto joined_r0x100018bf;
          }
          uVar3 = local_76c + 1;
          if (local_770 <= (int)uVar3) {
LAB_100018b0:
            local_768 = local_768 + 1;
            goto joined_r0x100018bf;
          }
          local_76c = uVar3;
          if (local_ae == '\0') goto LAB_100018c1;
LAB_100018ce:
          switch((uintptr_t)(local_768)) {
          case 1:
            iVar4 = local_764 - 1;
            if (iVar4 < 1) {
              iVar4 = 0;
            }
            iVar4 = (iVar4 + 1) - local_764;
            uVar3 = (uint)(iVar4 != 0);
            iVar4 = ((iVar4 - uVar3) / 5 + uVar3) * 5 + local_764;
            local_764 = iVar4 - 1;
            if (local_764 < 5) goto switchD_100018ed_default;
            local_764 = (iVar4 - 6U) % 5;
            break;
          case 2:
            bVar22 = (int)local_760 < 10;
            local_760 = local_760 - 5;
            if (bVar22) {
              local_760 = 5;
            }
            break;
          case 3:
            iVar4 = local_75c - 1;
            if (iVar4 < 1) {
              iVar4 = 0;
            }
            iVar4 = (iVar4 + 1) - local_75c;
            uVar3 = (uint)(iVar4 != 0);
            iVar4 = ((iVar4 - uVar3) / 0xf + uVar3) * 0xf + local_75c;
            local_75c = iVar4 - 1;
            if (local_75c < 0xf) goto switchD_100018ed_default;
            local_75c = (iVar4 - 0x10U) % 0xf;
            break;
          case 4:
            bVar22 = local_758 < 0x8000;
            local_758 = local_758 - 0x8000;
            if (bVar22) {
              local_758 = 0;
            }
          default:
switchD_100018ed_default:
          }
          if ((local_ad == '\0') && (local_a8 != '\x01')) goto switchD_10001a4f_default;
          switch((uintptr_t)(local_768)) {
          case 1:
            iVar4 = local_764 + 1;
            if (iVar4 < 1) {
              iVar4 = 0;
            }
            uVar3 = (uint)(~local_764 + iVar4 != 0);
            iVar4 = (((~local_764 + iVar4) - uVar3) / 5 + uVar3) * 5 + local_764;
            local_764 = iVar4 + 1;
            if (local_764 < 5) goto switchD_10001a4f_default;
            local_764 = (iVar4 - 4U) % 5;
            break;
          case 2:
            bVar22 = 0x5f < (int)local_760;
            local_760 = local_760 + 5;
            if (bVar22) {
              local_760 = 100;
            }
            break;
          case 3:
            iVar4 = local_75c + 1;
            if (iVar4 < 1) {
              iVar4 = 0;
            }
            uVar3 = (uint)(~local_75c + iVar4 != 0);
            iVar4 = (((~local_75c + iVar4) - uVar3) / 0xf + uVar3) * 0xf + local_75c;
            local_75c = iVar4 + 1;
            if (local_75c < 0xf) goto switchD_10001a4f_default;
            local_75c = (iVar4 - 0xeU) % 0xf;
            break;
          case 4:
            local_758 = local_758 + 0x8000;
          default:
switchD_10001a4f_default:
          }
          if (local_a6 == '\x01') {
            uStack_1650 = 0x10001b55;
            recovered_10002240((long)&local_13d0);
          }
          if (((local_ab != 0) || ((local_a0 | 0x20) == 0x69)) && (local_768 == 5)) {
            uStack_1650 = 0x10001b83;
            recovered_10002ef0((long)&local_13d0);
          }
          if (((local_ab & 1) != 0) && (local_768 != 5)) {
            uVar3 = local_768 + 1;
            if (4 < (int)local_768) {
              uVar3 = 0;
            }
            local_768 = uVar3;
          }
          uStack_1650 = 0x10001bbc;
          memset(pcVar7,0,0x1c);
          uStack_1650 = 0x10001bc7;
          uVar3 = terror_ui_window_pointer_state(&local_408,pcVar7);
          if (uVar3 != 0) {
            if ((acStack_1649[1] & 2U) == 0) {
              local_453 = '\0';
            }
            else {
              cVar6 = (char)(local_1644 & 1);
              if ((local_1644 & 1) == 0) {
                local_453 = cVar6;
              }
              else {
                bVar22 = local_453 == '\0';
                local_453 = cVar6;
                if (bVar22) {
                  if (0 < local_770) {
                    uVar3 = local_1634 - 0x1c;
                    uVar14 = 0;
                    if ((uVar3 < 0x248 && local_1630 - 0x52 < 0x17) ||
                       ((local_770 != 1 &&
                        ((uVar14 = 1, uVar3 < 0x248 && local_1630 - 0x6c < 0x17 ||
                         ((local_770 != 2 &&
                          ((uVar14 = 2, uVar3 < 0x248 && local_1630 - 0x86 < 0x17 ||
                           ((local_770 != 3 &&
                            ((uVar14 = 3, uVar3 < 0x248 && local_1630 - 0xa0 < 0x17 ||
                             ((local_770 != 4 &&
                              ((uVar14 = 4, uVar3 < 0x248 && local_1630 - 0xba < 0x17 ||
                               ((local_770 != 5 &&
                                (uVar14 = 5, uVar3 < 0x248 && local_1630 - 0xd4 < 0x17))))))))))))))
                         )))))) {
                      local_768 = 0;
                      local_76c = uVar14;
                      goto LAB_10001c90;
                    }
                  }
                  uVar3 = local_1634 - 0x1e;
                  if (uVar3 < 0x22 && 0xf9 < (int)local_1630) {
                    if (local_1630 < 0x114) {
                      local_768 = 1;
                      iVar4 = local_764 - 1;
                      if (iVar4 < 1) {
                        iVar4 = 0;
                      }
                      iVar4 = (iVar4 + 1) - local_764;
                      uVar3 = (uint)(iVar4 != 0);
                      iVar4 = ((iVar4 - uVar3) / 5 + uVar3) * 5 + local_764;
                      local_764 = iVar4 - 1;
                      if (4 < local_764) {
                        local_764 = iVar4 - 6;
LAB_10001e2b:
                        local_768 = 1;
                        local_764 = local_764 % 5;
                      }
                    }
                    else {
LAB_10001e95:
                      bVar22 = true;
                      bVar21 = false;
LAB_10001e9a:
                      if (local_1630 - 0x132 < 0x1a && uVar3 < 0x22) {
                        local_768 = 3;
                        iVar4 = local_75c - 1;
                        if (iVar4 < 1) {
                          iVar4 = 0;
                        }
                        iVar4 = (iVar4 + 1) - local_75c;
                        uVar3 = (uint)(iVar4 != 0);
                        iVar4 = ((iVar4 - uVar3) / 0xf + uVar3) * 0xf + local_75c;
                        local_75c = iVar4 - 1;
                        if (0xe < local_75c) {
                          local_75c = iVar4 - 0x10;
LAB_10001f87:
                          local_768 = 3;
                          local_75c = local_75c % 0xf;
                        }
                      }
                      else if ((bool)(local_1630 < 0x14c & bVar21 & bVar22 & 0x131 < (int)local_1630
                                     )) {
                        local_768 = 3;
                        iVar4 = local_75c + 1;
                        if (iVar4 < 1) {
                          iVar4 = 0;
                        }
                        uVar3 = (uint)(~local_75c + iVar4 != 0);
                        iVar4 = (((~local_75c + iVar4) - uVar3) / 0xf + uVar3) * 0xf + local_75c;
                        local_75c = iVar4 + 1;
                        if (0xe < local_75c) {
                          local_75c = iVar4 - 0xe;
                          goto LAB_10001f87;
                        }
                      }
                      else if ((int)local_1630 < 0x160 || 0x21 < uVar3) {
                        if (local_1634 - 300U < 0x22 && 0x15f < (int)local_1630) {
                          if (0x179 < local_1630) goto LAB_1000214a;
                          local_768 = 4;
                          local_758 = local_758 + 0x8000;
                        }
                        else {
                          bVar21 = 0x183 < (int)local_1630;
                          if (!(bool)(bVar22 & local_1630 < 0x1a8 & (0x1dd < local_1634 && bVar21)))
                          goto LAB_10002199;
                          local_768 = 5;
                          uStack_1650 = 0x10002194;
                          recovered_10002ef0((long)&local_13d0);
                        }
                      }
                      else if (local_1630 < 0x17a) {
                        local_768 = 4;
                        bVar22 = local_758 < 0x8000;
                        local_758 = local_758 - 0x8000;
                        if (bVar22) {
                          local_758 = 0;
                        }
                      }
                      else {
LAB_1000214a:
                        bVar21 = 0x183 < local_1630;
LAB_10002199:
                        if ((bool)((int)local_1630 < 0x1a8 & bVar21 & uVar3 < 0x70)) {
                          uStack_1650 = 0x100021bf;
                          recovered_10002240((long)&local_13d0);
                        }
                      }
                    }
                  }
                  else if (local_1634 - 0x134U < 0x22 && 0xf9 < (int)local_1630) {
                    if (0x113 < local_1630) goto LAB_10001e95;
                    local_768 = 1;
                    iVar4 = local_764 + 1;
                    if (iVar4 < 1) {
                      iVar4 = 0;
                    }
                    uVar3 = (uint)(~local_764 + iVar4 != 0);
                    iVar4 = (((~local_764 + iVar4) - uVar3) / 5 + uVar3) * 5 + local_764;
                    local_764 = iVar4 + 1;
                    if (4 < local_764) {
                      local_764 = iVar4 - 4;
                      goto LAB_10001e2b;
                    }
                  }
                  else if (local_1634 - 0x184U < 0x22 && 0xf9 < (int)local_1630) {
                    if (0x113 < local_1630) goto LAB_10001e95;
                    local_768 = 2;
                    uVar3 = local_760 - 5;
                    if ((int)local_760 < 10) {
                      uVar3 = 5;
                    }
                    local_760 = uVar3;
                  }
                  else {
                    bVar21 = 0x241 < local_1634;
                    bVar22 = local_1634 < 0x264;
                    if (0x19 < local_1630 - 0xfa || 0x21 < local_1634 - 0x242U) goto LAB_10001e9a;
                    local_768 = 2;
                    uVar3 = local_760 + 5;
                    if (0x5f < (int)local_760) {
                      uVar3 = 100;
                    }
                    local_760 = uVar3;
                  }
                }
              }
            }
          }
LAB_10001c90:
          if (((local_a7 != '\0') || (local_ac != '\0')) || (local_aa != '\0')) break;
          iVar4 = Ram0000000000006800;
          if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
             ((uVar3 = Ram0000000000006808, 0xb < uVar3 &&
              (uVar3 = Ram0000000000006808, 0x9f < uVar3)))) {
            uVar3 = UINT_0000689c;
            if ((code *)(ulong)uVar3 != (code *)0x0) {
              uStack_1650 = 0x10001d0b;
              (*(code *)(ulong)uVar3)();
            }
          }
          uStack_1650 = 0x1000085f;
          memset(pcVar7,0,0x278);
          uStack_1650 = 0x1000086a;
          uVar3 = terror_ui_window_query(&local_408,pcVar7);
          if (uVar3 == 0) break;
        }
      }
      iVar4 = 1;
    }
LAB_100021fb:
    uStack_1650 = 0x10002207;
    terror_ui_window_close(&local_408);
  }
  return iVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10004710
#undef DAT_10004724
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000689c
#undef str_10004760
#undef str_10004773
#undef str_100047c4
#undef str_100047d7
#undef str_100047e5
#undef str_100047f0
#undef str_100047f9
#undef str_10004802
#undef str_10004811
#undef str_1000481d
#undef str_10004825
#undef str_1000482d
#undef str_10004835
#undef str_10004855
#undef str_10004878
#undef uStack_320
#undef uStack_310
#undef uStack_300
#undef uStack_2f0
#undef uStack_2e0
#undef uStack_2d0
#undef uStack_2c0
#undef uStack_2b0
#undef uStack_2a0
#undef uStack_290
#undef uStack_280
#undef uStack_270
#undef uStack_260
#undef uStack_250
#undef uStack_240
#undef uStack_230
#undef uStack_220
#undef uStack_210
#undef uStack_200
#undef uStack_1f0
#undef uStack_1e0
#undef uStack_1d0
#undef uStack_1c0
#undef uStack_1b0
#undef uStack_1a0
#undef uStack_190
#undef uStack_180
#undef uStack_170
#undef uStack_160
#undef uStack_150
#undef uStack_140
#undef uStack_130
#undef uStack_120
#undef uStack_110
#undef uStack_100
#undef local_1644
#undef local_1634
#undef uStack_f0
#undef local_1630
#undef local_13d0
#undef uStack_e0
#undef local_770
#undef local_76c
#undef uStack_d0
#undef local_768
#undef local_764
#undef uStack_c0
#undef local_760
#undef local_75c
#undef local_758
#undef local_454
#undef local_453
#undef local_450
#undef local_410
#undef local_408
#undef local_3f8
#undef local_3e8
#undef local_3d8
#undef local_3c8
#undef local_3b8
#undef local_3a8
#undef local_398
#undef local_388
#undef pvStack_90
#undef local_378
#undef local_368
#undef uStack_80
#undef local_358
#undef local_348
#undef local_338
#undef local_328
#undef local_318
#undef local_308
#undef local_2f8
#undef local_2e8
#undef local_2d8
#undef local_2c8
#undef local_2b8
#undef local_2a8
#undef local_298
#undef local_288
#undef local_278
#undef local_268
#undef local_258
#undef local_248
#undef local_238
#undef local_228
#undef local_218
#undef local_208
#undef local_1f8
#undef local_1e8
#undef local_1d8
#undef local_1c8
#undef local_1b8
#undef local_1a8
#undef local_198
#undef local_188
#undef local_178
#undef local_168
#undef local_158
#undef local_148
#undef local_138
#undef local_128
#undef local_118
#undef local_108
#undef local_f8
#undef local_e8
#undef local_d8
#undef local_c8
#undef local_b0
#undef local_af
#undef local_ae
#undef local_ad
#undef local_ac
#undef local_ab
#undef local_aa
#undef local_a9
#undef local_a8
#undef local_a7
#undef local_a6
#undef local_a5
#undef local_a4
#undef local_a0
#undef local_98
#undef local_88
#undef local_78
#undef local_76
#undef local_75
#undef local_74
#undef local_73
#undef local_72
#undef local_71
#undef local_70
#undef local_6f
#undef local_6e
#undef local_6d
#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef uStack_1650
#undef local_60
#undef local_5f
#undef local_5e
#undef local_5d
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_56
#undef local_55
#undef local_54
#undef local_53
#undef local_52
#undef local_51
#undef local_50
#undef local_4f
#undef local_4e
#undef local_4d
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_43
#undef local_42
#undef local_41
#undef local_32
#undef local_31
#undef acStack_1649
#undef auStack_1440
#undef auStack_13c8
#undef acStack_754
#undef uStack_404
#undef uStack_400
#undef uStack_3fc
#undef uStack_3f0
#undef uStack_3e0
#undef uStack_3d0
#undef uStack_3c0
#undef uStack_3b0
#undef uStack_3a0
#undef uStack_390
#undef uStack_380
#undef uStack_370
#undef uStack_360
#undef uStack_350
#undef uStack_340
#undef uStack_330

void recovered_10002240(uintptr_t state){pf_install_refresh((void *)state);}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_50 (*(void * *)(frame + 16))
#define local_44 (*(uint *)(frame + 28))
#define local_40 (*(uint *)(frame + 32))
#define local_3c (*(uint *)(frame + 36))
#define local_38 (*(void * *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002750
 */

void recovered_10002750(uint *param_1,uint param_2,int param_3,char *param_4,uint param_5,
                       int param_6,byte param_7,byte param_8)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;

  if (param_4 != (char *)0x0) {
    memset(&local_50,0,0x18);
    iVar3 = Ram0000000000006800;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
        (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x17b < uVar4))
    {
      uVar4 = UINT_00006978;
      if ((code *)(ulong)uVar4 != (code *)0x0) {
        uVar4 = (*(code *)(ulong)uVar4)
                          (param_4,0xffffffff,param_5,
                           (uint)param_8 * 0x100 + ((uint)param_7 << 0x10 | param_6 << 0x18) + 0xff,
                           &local_50);
        if ((uVar4 != 0) && (local_38 = local_50, local_50 != (void *)0x0)) {
          if (local_40 != 0) {
            uVar6 = 0;
            uVar4 = local_44;
            do {
              if (uVar4 == 0) {
                uVar4 = 0;
              }
              else {
                uVar7 = (int)uVar6 + param_3;
                uVar9 = 0;
                lVar8 = (long)local_50 + 3;
                uVar4 = param_2;
                do {
                  lVar10 = local_3c * uVar6;
                  if (((*(char *)(lVar8 + lVar10) != '\0') && (param_1 != (uint *)0x0)) &&
                     ((-1 < (int)(uVar4 | uVar7) && *(long *)(param_1 + 2) != 0 &&
                      (((int)uVar4 < (int)*param_1 && ((int)uVar7 < (int)param_1[1])))))) {
                    uVar1 = *(undefined1 *)(lVar8 + -2 + lVar10);
                    uVar2 = *(undefined1 *)(lVar8 + -1 + lVar10);
                    lVar5 = (ulong)uVar4 + (ulong)*param_1 * (ulong)uVar7;
                    *(undefined1 *)(*(long *)(param_1 + 2) + lVar5 * 4) =
                         *(undefined1 *)(lVar8 + -3 + lVar10);
                    *(undefined1 *)(*(long *)(param_1 + 2) + 1 + lVar5 * 4) = uVar1;
                    *(undefined1 *)(*(long *)(param_1 + 2) + 2 + lVar5 * 4) = uVar2;
                    *(undefined1 *)(*(long *)(param_1 + 2) + 3 + lVar5 * 4) = 0xff;
                  }
                  uVar9 = uVar9 + 1;
                  uVar4 = uVar4 + 1;
                  lVar8 = lVar8 + 4;
                } while (uVar9 < local_44);
                uVar4 = local_44;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_40);
          }
          iVar3 = Ram0000000000006800;
          if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
              (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
             (uVar4 = Ram0000000000006808, 0x53 < uVar4)) {
            uVar4 = UINT_00006850;
            if ((code *)(ulong)uVar4 != (code *)0x0) {
              (*(code *)(ulong)uVar4)(local_50);
            }
          }
        }
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006978
#undef local_50
#undef local_44
#undef local_40
#undef local_3c
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002970
 */

void recovered_10002970(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;

  iVar3 = param_4 + param_2;
  if (0 < param_4) {
    uVar5 = param_2;
    do {
      if ((((param_1 != (uint *)0x0) && (-1 < (int)(uVar5 | param_3) && *(long *)(param_1 + 2) != 0)
           ) && ((int)uVar5 < (int)*param_1)) && ((int)param_3 < (int)param_1[1])) {
        lVar4 = (ulong)uVar5 + (ulong)*param_1 * (ulong)param_3;
        *(undefined1 *)(*(long *)(param_1 + 2) + lVar4 * 4) = param_6;
        *(undefined1 *)(*(long *)(param_1 + 2) + 1 + lVar4 * 4) = param_7;
        *(undefined1 *)(*(long *)(param_1 + 2) + 2 + lVar4 * 4) = param_8;
        *(undefined1 *)(*(long *)(param_1 + 2) + 3 + lVar4 * 4) = 0xff;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar3);
    if (0 < param_4) {
      uVar1 = (param_5 + param_3) - 1;
      uVar5 = param_2;
      do {
        if (((param_1 != (uint *)0x0) && (-1 < (int)(uVar5 | uVar1) && *(long *)(param_1 + 2) != 0))
           && (((int)uVar5 < (int)*param_1 && ((int)uVar1 < (int)param_1[1])))) {
          lVar4 = (ulong)uVar5 + (ulong)*param_1 * (ulong)uVar1;
          *(undefined1 *)(*(long *)(param_1 + 2) + lVar4 * 4) = param_6;
          *(undefined1 *)(*(long *)(param_1 + 2) + 1 + lVar4 * 4) = param_7;
          *(undefined1 *)(*(long *)(param_1 + 2) + 2 + lVar4 * 4) = param_8;
          *(undefined1 *)(*(long *)(param_1 + 2) + 3 + lVar4 * 4) = 0xff;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar3);
    }
  }
  iVar2 = param_5 + param_3;
  if (0 < param_5) {
    uVar5 = param_3;
    do {
      if (((param_1 != (uint *)0x0) && (-1 < (int)(uVar5 | param_2) && *(long *)(param_1 + 2) != 0))
         && (((int)param_2 < (int)*param_1 && ((int)uVar5 < (int)param_1[1])))) {
        lVar4 = (ulong)*param_1 * (ulong)uVar5 + (ulong)param_2;
        *(undefined1 *)(*(long *)(param_1 + 2) + lVar4 * 4) = param_6;
        *(undefined1 *)(*(long *)(param_1 + 2) + 1 + lVar4 * 4) = param_7;
        *(undefined1 *)(*(long *)(param_1 + 2) + 2 + lVar4 * 4) = param_8;
        *(undefined1 *)(*(long *)(param_1 + 2) + 3 + lVar4 * 4) = 0xff;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar2);
    uVar5 = iVar3 - 1;
    do {
      if ((((param_1 != (uint *)0x0) && (-1 < (int)(uVar5 | param_3) && *(long *)(param_1 + 2) != 0)
           ) && ((int)uVar5 < (int)*param_1)) && ((int)param_3 < (int)param_1[1])) {
        lVar4 = (ulong)*param_1 * (ulong)param_3 + (ulong)uVar5;
        *(undefined1 *)(*(long *)(param_1 + 2) + lVar4 * 4) = param_6;
        *(undefined1 *)(*(long *)(param_1 + 2) + 1 + lVar4 * 4) = param_7;
        *(undefined1 *)(*(long *)(param_1 + 2) + 2 + lVar4 * 4) = param_8;
        *(undefined1 *)(*(long *)(param_1 + 2) + 3 + lVar4 * 4) = 0xff;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < iVar2);
  }
  return;
}


#undef DAT_10004880
#define DAT_10004880 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#undef DAT_10004882
#define DAT_10004882 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x281U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b80
 */

void recovered_10002b80(uint *param_1,undefined8 param_2,uint param_3,int param_4,char *param_5,
                       char *param_6,byte param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;

  recovered_10002750(param_1,(uint)param_2,param_3 - 0x10,param_5,1,0x46,0x46,0x46);
  recovered_10002d70(param_1,(uint)param_2,param_3,0x22,0x1a,&DAT_10004880,0);
  bVar7 = param_7 != 0;
  uVar1 = 0xe1;
  if (!bVar7) {
    uVar1 = 0xf7;
  }
  uVar2 = 0xec;
  if (!bVar7) {
    uVar2 = 0xf7;
  }
  uVar4 = param_3 + 0x19;
  if ((int)(param_3 + 0x19) < (int)param_3) {
    uVar4 = param_3;
  }
  uVar5 = param_3;
  do {
    if (0x54 < param_4) {
      uVar6 = (uint)param_2 + 0x2a;
      do {
        if ((((param_1 != (uint *)0x0) && (-1 < (int)(uVar6 | uVar5) && *(long *)(param_1 + 2) != 0)
             ) && ((int)uVar6 < (int)*param_1)) && ((int)uVar5 < (int)param_1[1])) {
          lVar3 = (ulong)uVar6 + (ulong)*param_1 * (ulong)uVar5;
          *(undefined1 *)(*(long *)(param_1 + 2) + lVar3 * 4) = uVar1;
          *(undefined1 *)(*(long *)(param_1 + 2) + 1 + lVar3 * 4) = uVar2;
          *(char *)(*(long *)(param_1 + 2) + 2 + lVar3 * 4) = bVar7 * '\x03' + -9;
          *(undefined1 *)(*(long *)(param_1 + 2) + 3 + lVar3 * 4) = 0xff;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)(param_4 + (uint)param_2 + -0x2a));
    }
    bVar8 = uVar5 != uVar4;
    uVar5 = uVar5 + 1;
  } while (bVar8);
  uVar1 = 0x5f;
  if (param_7 == 0) {
    uVar1 = 0x96;
  }
  uVar2 = 0x24;
  if (param_7 == 0) {
    uVar2 = 0x96;
  }
  recovered_10002970(param_1,(uint)param_2 + 0x2a,param_3,param_4 + -0x54,0x1a,uVar2,uVar1,
                     param_7 * '\x04' + -0x6a);
  recovered_10002750(param_1,(uint)param_2 + 0x34,param_3 + 9,param_6,1,0x1e,0x1e,0x1e);
  recovered_10002d70(param_1,((uint)param_2 + param_4) - 0x22,param_3,0x22,0x1a,&DAT_10004882,0);
  return;
}

#undef DAT_10004880
#undef DAT_10004882

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d70
 */

void recovered_10002d70(uint *param_1,uint param_2,uint param_3,undefined8 param_4,int param_5,
                       char *param_6,byte param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;

  bVar8 = param_7 == 0;
  uVar1 = 0x37;
  if (bVar8) {
    uVar1 = 0xeb;
  }
  uVar3 = 0x69;
  if (bVar8) {
    uVar3 = 0xeb;
  }
  uVar4 = 0x9b;
  if (bVar8) {
    uVar4 = 0xeb;
  }
  if (0 < param_5) {
    uVar5 = param_3;
    do {
      if (0 < (int)param_4) {
        uVar7 = param_2;
        do {
          if ((((param_1 != (uint *)0x0) &&
               (-1 < (int)(uVar7 | uVar5) && *(long *)(param_1 + 2) != 0)) &&
              ((int)uVar7 < (int)*param_1)) && ((int)uVar5 < (int)param_1[1])) {
            lVar2 = (ulong)uVar7 + (ulong)*param_1 * (ulong)uVar5;
            *(undefined1 *)(*(long *)(param_1 + 2) + lVar2 * 4) = uVar1;
            *(undefined1 *)(*(long *)(param_1 + 2) + 1 + lVar2 * 4) = uVar3;
            *(undefined1 *)(*(long *)(param_1 + 2) + 2 + lVar2 * 4) = uVar4;
            *(undefined1 *)(*(long *)(param_1 + 2) + 3 + lVar2 * 4) = 0xff;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)((int)param_4 + param_2));
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)(param_5 + param_3));
  }
  bVar8 = param_7 != 0;
  uVar1 = 0x4a;
  if (!bVar8) {
    uVar1 = 0x84;
  }
  uVar3 = 0x84;
  if (bVar8) {
    uVar3 = 0x14;
  }
  iVar6 = 0xff;
  if (!bVar8) {
    iVar6 = 0x14;
  }
  recovered_10002970(param_1,param_2,param_3,(int)param_4,param_5,uVar3,uVar1,
                     (param_7 ^ 1) * '\b' + '|');
  recovered_10002750(param_1,param_2 + 10,param_3 + 10,param_6,1,iVar6,(byte)iVar6,(byte)iVar6);
  return;
}


void recovered_10002ef0(uintptr_t state){pf_install_run((void *)state);}

