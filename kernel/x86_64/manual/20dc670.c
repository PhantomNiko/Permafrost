/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a2300 (*(char *)(0x20eba90U))
#define DAT_020a2310 (*(byte *)(0x20ebaa0U))
#define DAT_020a2340 (*(char *)(0x20ebad0U))
#define DAT_020a2350 (*(byte *)(0x20ebae0U))
#define DAT_020a2380 (*(char *)(0x20ebb10U))
#define DAT_020a2390 (*(byte *)(0x20ebb20U))
#define _DAT_020a2360 (*(uint *)(0x20ebaf0U))
#define _DAT_020a2370 (*(uint *)(0x20ebb00U))
#define bRam00000000020a2308 (*(uint8_t *)(0x20eba98U))
#define bRam00000000020a2309 (*(uint8_t *)(0x20eba99U))
#define bRam00000000020a230a (*(uint8_t *)(0x20eba9aU))
#define bRam00000000020a230b (*(uint8_t *)(0x20eba9bU))
#define bRam00000000020a230c (*(uint8_t *)(0x20eba9cU))
#define bRam00000000020a230d (*(uint8_t *)(0x20eba9dU))
#define bRam00000000020a230e (*(uint8_t *)(0x20eba9eU))
#define bRam00000000020a230f (*(uint8_t *)(0x20eba9fU))
#define bRam00000000020a2311 (*(uint8_t *)(0x20ebaa1U))
#define bRam00000000020a2312 (*(uint8_t *)(0x20ebaa2U))
#define bRam00000000020a2313 (*(uint8_t *)(0x20ebaa3U))
#define bRam00000000020a2314 (*(uint8_t *)(0x20ebaa4U))
#define bRam00000000020a2315 (*(uint8_t *)(0x20ebaa5U))
#define bRam00000000020a2316 (*(uint8_t *)(0x20ebaa6U))
#define bRam00000000020a2317 (*(uint8_t *)(0x20ebaa7U))
#define bRam00000000020a2318 (*(uint8_t *)(0x20ebaa8U))
#define bRam00000000020a2319 (*(uint8_t *)(0x20ebaa9U))
#define bRam00000000020a231a (*(uint8_t *)(0x20ebaaaU))
#define bRam00000000020a231b (*(uint8_t *)(0x20ebaabU))
#define bRam00000000020a231c (*(uint8_t *)(0x20ebaacU))
#define bRam00000000020a231d (*(uint8_t *)(0x20ebaadU))
#define bRam00000000020a231e (*(uint8_t *)(0x20ebaaeU))
#define bRam00000000020a231f (*(uint8_t *)(0x20ebaafU))
#define bRam00000000020a2344 (*(uint8_t *)(0x20ebad4U))
#define bRam00000000020a2345 (*(uint8_t *)(0x20ebad5U))
#define bRam00000000020a2346 (*(uint8_t *)(0x20ebad6U))
#define bRam00000000020a2347 (*(uint8_t *)(0x20ebad7U))
#define bRam00000000020a2348 (*(uint8_t *)(0x20ebad8U))
#define bRam00000000020a2349 (*(uint8_t *)(0x20ebad9U))
#define bRam00000000020a234a (*(uint8_t *)(0x20ebadaU))
#define bRam00000000020a234b (*(uint8_t *)(0x20ebadbU))
#define bRam00000000020a234c (*(uint8_t *)(0x20ebadcU))
#define bRam00000000020a234d (*(uint8_t *)(0x20ebaddU))
#define bRam00000000020a234e (*(uint8_t *)(0x20ebadeU))
#define bRam00000000020a234f (*(uint8_t *)(0x20ebadfU))
#define bRam00000000020a2351 (*(uint8_t *)(0x20ebae1U))
#define bRam00000000020a2352 (*(uint8_t *)(0x20ebae2U))
#define bRam00000000020a2353 (*(uint8_t *)(0x20ebae3U))
#define bRam00000000020a2354 (*(uint8_t *)(0x20ebae4U))
#define bRam00000000020a2355 (*(uint8_t *)(0x20ebae5U))
#define bRam00000000020a2356 (*(uint8_t *)(0x20ebae6U))
#define bRam00000000020a2357 (*(uint8_t *)(0x20ebae7U))
#define bRam00000000020a2358 (*(uint8_t *)(0x20ebae8U))
#define bRam00000000020a2359 (*(uint8_t *)(0x20ebae9U))
#define bRam00000000020a235a (*(uint8_t *)(0x20ebaeaU))
#define bRam00000000020a235b (*(uint8_t *)(0x20ebaebU))
#define bRam00000000020a235c (*(uint8_t *)(0x20ebaecU))
#define bRam00000000020a235d (*(uint8_t *)(0x20ebaedU))
#define bRam00000000020a235e (*(uint8_t *)(0x20ebaeeU))
#define bRam00000000020a235f (*(uint8_t *)(0x20ebaefU))
#define bRam00000000020a2391 (*(uint8_t *)(0x20ebb21U))
#define bRam00000000020a2392 (*(uint8_t *)(0x20ebb22U))
#define bRam00000000020a2393 (*(uint8_t *)(0x20ebb23U))
#define bRam00000000020a2394 (*(uint8_t *)(0x20ebb24U))
#define bRam00000000020a2395 (*(uint8_t *)(0x20ebb25U))
#define bRam00000000020a2396 (*(uint8_t *)(0x20ebb26U))
#define bRam00000000020a2397 (*(uint8_t *)(0x20ebb27U))
#define bRam00000000020a2398 (*(uint8_t *)(0x20ebb28U))
#define bRam00000000020a2399 (*(uint8_t *)(0x20ebb29U))
#define bRam00000000020a239a (*(uint8_t *)(0x20ebb2aU))
#define bRam00000000020a239b (*(uint8_t *)(0x20ebb2bU))
#define bRam00000000020a239c (*(uint8_t *)(0x20ebb2cU))
#define bRam00000000020a239d (*(uint8_t *)(0x20ebb2dU))
#define bRam00000000020a239e (*(uint8_t *)(0x20ebb2eU))
#define bRam00000000020a239f (*(uint8_t *)(0x20ebb2fU))
#define cRam00000000020a2301 (*(uint8_t *)(0x20eba91U))
#define cRam00000000020a2302 (*(uint8_t *)(0x20eba92U))
#define cRam00000000020a2303 (*(uint8_t *)(0x20eba93U))
#define cRam00000000020a2304 (*(uint8_t *)(0x20eba94U))
#define cRam00000000020a2305 (*(uint8_t *)(0x20eba95U))
#define cRam00000000020a2306 (*(uint8_t *)(0x20eba96U))
#define cRam00000000020a2307 (*(uint8_t *)(0x20eba97U))
#define cRam00000000020a2341 (*(uint8_t *)(0x20ebad1U))
#define cRam00000000020a2342 (*(uint8_t *)(0x20ebad2U))
#define cRam00000000020a2343 (*(uint8_t *)(0x20ebad3U))
#define cRam00000000020a2381 (*(uint8_t *)(0x20ebb11U))
#define cRam00000000020a2382 (*(uint8_t *)(0x20ebb12U))
#define cRam00000000020a2383 (*(uint8_t *)(0x20ebb13U))
#define cRam00000000020a2384 (*(uint8_t *)(0x20ebb14U))
#define cRam00000000020a2385 (*(uint8_t *)(0x20ebb15U))
#define cRam00000000020a2386 (*(uint8_t *)(0x20ebb16U))
#define cRam00000000020a2387 (*(uint8_t *)(0x20ebb17U))
#define cRam00000000020a2388 (*(uint8_t *)(0x20ebb18U))
#define cRam00000000020a2389 (*(uint8_t *)(0x20ebb19U))
#define cRam00000000020a238a (*(uint8_t *)(0x20ebb1aU))
#define cRam00000000020a238b (*(uint8_t *)(0x20ebb1bU))
#define cRam00000000020a238c (*(uint8_t *)(0x20ebb1cU))
#define cRam00000000020a238d (*(uint8_t *)(0x20ebb1dU))
#define cRam00000000020a238e (*(uint8_t *)(0x20ebb1eU))
#define cRam00000000020a238f (*(uint8_t *)(0x20ebb1fU))
#define local_48 (*(byte *)(frame + 136))
#define local_68 (*(byte *)(frame + 104))
#define local_88 (*(byte *)(frame + 72))
#define local_98 (*(byte *)(frame + 56))
#define local_a8 (*(byte *)(frame + 40))
#define local_b8 (*(byte *)(frame + 24))
#define str_020a23a0 (*(char (*)[1])(0x20ebb30U))
uint recovered_20dc670(int param_1,int *param_2)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
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
  char cVar27;
  char cVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  uint uVar45;
  char cVar46;
  uint uVar47;
  ulong uVar48;
  char cVar49;
  ulong uVar50;
  uint uVar51;
  ulong uVar52;
  ulong uVar53;
  uint uVar54;
  ulong uVar55;
  uint128 auVar56;
  uint128 auVar57;
  uint128 auVar58;
  uint128 auVar59;
  char cVar71;
  char cVar73;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  uint128 auVar60;
  uint128 auVar61;
  uint128 auVar62;
  uint128 auVar63;
  uint128 auVar64;
  uint128 auVar65;
  uint128 auVar66;
  uint128 auVar67;
  uint128 auVar68;
  char cVar72;
  char cVar74;
  uint128 auVar69;
  uint128 auVar70;
  int iVar79;
  undefined5 uVar80;
  undefined6 uVar81;
  undefined1 auVar82 [12];
  undefined1 auVar83 [12];
  undefined1 auVar84 [12];
  undefined1 auVar85 [12];
  undefined1 auVar86 [12];
  undefined1 auVar87 [12];
  undefined1 auVar88 [12];
  undefined1 auVar89 [12];
  uint128 auVar90;
  uint128 auVar91;
  uint128 auVar92;
  uint128 auVar93;
  uint128 auVar94;
  uint128 auVar95;
  uint128 auVar96;
  uint128 auVar97;
  ulong uVar100;
  uint128 auVar98;
  uint128 auVar99;
  byte bVar101;
  byte bVar116;
  byte bVar118;
  byte bVar120;
  byte bVar122;
  byte bVar124;
  byte bVar126;
  byte bVar128;
  uint128 auVar103;
  uint128 auVar104;
  uint128 auVar105;
  uint128 auVar106;
  uint128 auVar107;
  uint128 auVar108;
  uint128 auVar109;
  uint128 auVar110;
  byte bVar102;
  uint128 auVar111;
  uint128 auVar112;
  byte bVar117;
  byte bVar119;
  byte bVar121;
  byte bVar123;
  byte bVar125;
  byte bVar127;
  byte bVar129;
  uint128 auVar113;
  uint128 auVar114;
  uint128 auVar115;
  uint128 auVar130;
  uint128 auVar131;
  uint128 auVar132;
  uint128 auVar133;

  if (param_2 == (int *)0x0 || param_1 == 0) {
    return 0;
  }
  recovered_2002110(param_2,0,0x264);
  *param_2 = param_1;
  uVar47 = recovered_2005cb0();
  param_2[1] = uVar47;
  uVar47 = recovered_2005c90();
  param_2[2] = uVar47;
  uVar47 = recovered_2005ca0();
  param_2[3] = uVar47;
  recovered_2005ce0((ulong)(uint)param_1,(undefined1 *)(param_2 + 9),0xa0);
  piVar1 = param_2 + 0x31;
  *(undefined1 *)(param_2 + 0x31) = 0;
  uVar47 = recovered_2005cd0();
  auVar106 = _str_020a2330;
  auVar110 = _str_020a2320;
  bVar128 = bRam00000000020a231f;
  bVar126 = bRam00000000020a231e;
  bVar124 = bRam00000000020a231d;
  bVar122 = bRam00000000020a231c;
  bVar120 = bRam00000000020a231b;
  bVar118 = bRam00000000020a231a;
  bVar116 = bRam00000000020a2319;
  bVar101 = bRam00000000020a2318;
  bVar44 = bRam00000000020a2317;
  bVar43 = bRam00000000020a2316;
  bVar42 = bRam00000000020a2315;
  bVar41 = bRam00000000020a2314;
  bVar40 = bRam00000000020a2313;
  bVar39 = bRam00000000020a2312;
  bVar38 = bRam00000000020a2311;
  bVar37 = DAT_020a2310;
  bVar36 = bRam00000000020a230f;
  bVar35 = bRam00000000020a230e;
  bVar34 = bRam00000000020a230d;
  bVar33 = bRam00000000020a230c;
  bVar32 = bRam00000000020a230b;
  bVar31 = bRam00000000020a230a;
  bVar30 = bRam00000000020a2309;
  bVar29 = bRam00000000020a2308;
  cVar28 = cRam00000000020a2307;
  cVar73 = cRam00000000020a2306;
  cVar71 = cRam00000000020a2305;
  cVar8 = cRam00000000020a2304;
  cVar27 = cRam00000000020a2303;
  cVar26 = cRam00000000020a2302;
  cVar25 = cRam00000000020a2301;
  cVar49 = DAT_020a2300;
  if (0 < (int)uVar47) {
    uVar55 = 0x3f;
    if (uVar47 < 0x3f) {
      uVar55 = (ulong)uVar47;
    }
    if (uVar47 < 4) {
      uVar48 = 0;
LAB_02097191:
      do {
        if (*(char *)((long)piVar1 + uVar48) == '\0') {
          cVar49 = ',';
LAB_02097182:
          *(char *)((long)piVar1 + uVar48) = cVar49;
        }
        else {
          cVar49 = '.';
          if ((byte)(*(char *)((long)piVar1 + uVar48) + 0x81U) < 0xa1) goto LAB_02097182;
        }
        uVar48 = uVar48 + 1;
      } while (uVar55 != uVar48);
    }
    else {
      uVar54 = (uint)uVar55;
      if (uVar47 < 0x10) {
        uVar50 = 0;
LAB_02096fe6:
        uVar45 = _DAT_020a2370;
        uVar47 = _DAT_020a2360;
        bVar121 = bRam00000000020a235f;
        bVar119 = bRam00000000020a235e;
        bVar117 = bRam00000000020a235d;
        bVar102 = bRam00000000020a235c;
        bVar128 = bRam00000000020a235b;
        bVar126 = bRam00000000020a235a;
        bVar124 = bRam00000000020a2359;
        bVar122 = bRam00000000020a2358;
        bVar120 = bRam00000000020a2357;
        bVar118 = bRam00000000020a2356;
        bVar116 = bRam00000000020a2355;
        bVar101 = bRam00000000020a2354;
        bVar44 = bRam00000000020a2353;
        bVar43 = bRam00000000020a2352;
        bVar42 = bRam00000000020a2351;
        bVar41 = DAT_020a2350;
        bVar40 = bRam00000000020a234f;
        bVar39 = bRam00000000020a234e;
        bVar38 = bRam00000000020a234d;
        bVar37 = bRam00000000020a234c;
        bVar36 = bRam00000000020a234b;
        bVar35 = bRam00000000020a234a;
        bVar34 = bRam00000000020a2349;
        bVar33 = bRam00000000020a2348;
        bVar32 = bRam00000000020a2347;
        bVar31 = bRam00000000020a2346;
        bVar30 = bRam00000000020a2345;
        bVar29 = bRam00000000020a2344;
        cVar27 = cRam00000000020a2343;
        cVar26 = cRam00000000020a2342;
        cVar25 = cRam00000000020a2341;
        cVar49 = DAT_020a2340;
        uVar48 = (ulong)(uVar54 & 0x3c);
        PF_PART4(auVar110, 8) = 0xffffffff;
        PF_PART8(auVar110, 0) = 0xffffffffffffffff;
        PF_PART4(auVar110, 12) = 0xffffffff;
        do {
          uVar6 = *(undefined4 *)((long)piVar1 + uVar50);
          cVar71 = (char)((uint)uVar6 >> 8);
          cVar73 = (char)((uint)uVar6 >> 0x10);
          cVar8 = (char)((uint)uVar6 >> 0x18);
          bVar123 = (char)uVar6 + cVar49;
          bVar125 = cVar71 + cVar25;
          bVar127 = cVar73 + cVar26;
          bVar129 = cVar8 + cVar27;
          iVar79 = CONCAT13(-((byte)((bVar129 < bVar44) * bVar44 | (bVar129 >= bVar44) * bVar129) ==
                             bVar129),
                            CONCAT12(-((byte)((bVar127 < bVar43) * bVar43 |
                                             (bVar127 >= bVar43) * bVar127) == bVar127),
                                     CONCAT11(-((byte)((bVar125 < bVar42) * bVar42 |
                                                      (bVar125 >= bVar42) * bVar125) == bVar125),
                                              -((byte)((bVar123 < bVar41) * bVar41 |
                                                      (bVar123 >= bVar41) * bVar123) == bVar123))));
          uVar80 = CONCAT14(-((byte)((bVar29 < bVar101) * bVar101 | (bVar29 >= bVar101) * bVar29) ==
                             bVar29),iVar79);
          PF_PART8(auVar84, 0) =
               CONCAT17(-((byte)((bVar32 < bVar120) * bVar120 | (bVar32 >= bVar120) * bVar32) ==
                         bVar32),CONCAT16(-((byte)((bVar31 < bVar118) * bVar118 |
                                                  (bVar31 >= bVar118) * bVar31) == bVar31),
                                          CONCAT15(-((byte)((bVar30 < bVar116) * bVar116 |
                                                           (bVar30 >= bVar116) * bVar30) == bVar30),
                                                   uVar80)));
          auVar84[8] = -((byte)((bVar33 < bVar122) * bVar122 | (bVar33 >= bVar122) * bVar33) ==
                        bVar33);
          auVar84[9] = -((byte)((bVar34 < bVar124) * bVar124 | (bVar34 >= bVar124) * bVar34) ==
                        bVar34);
          auVar84[10] = -((byte)((bVar35 < bVar126) * bVar126 | (bVar35 >= bVar126) * bVar35) ==
                         bVar35);
          auVar84[0xb] = -((byte)((bVar36 < bVar128) * bVar128 | (bVar36 >= bVar128) * bVar36) ==
                          bVar36);
          PF_PART1(auVar106,0xc) =
               -((byte)((bVar37 < bVar102) * bVar102 | (bVar37 >= bVar102) * bVar37) == bVar37);
          PF_PART12(auVar106, 0) = auVar84;
          PF_PART1(auVar106,0xd) =
               -((byte)((bVar38 < bVar117) * bVar117 | (bVar38 >= bVar117) * bVar38) == bVar38);
          PF_PART1(auVar106,0xe) =
               -((byte)((bVar39 < bVar119) * bVar119 | (bVar39 >= bVar119) * bVar39) == bVar39);
          PF_PART1(auVar106,0xf) =
               -((byte)((bVar40 < bVar121) * bVar121 | (bVar40 >= bVar121) * bVar40) == bVar40);
          uVar51 = ~CONCAT13(-(cVar8 == '\0'),
                             CONCAT12(-(cVar73 == '\0'),
                                      CONCAT11(-(cVar71 == '\0'),-((char)uVar6 == '\0')))) &
                   SUB164(auVar106 ^ auVar110,0);
          uVar51 = uVar51 & uVar45 | ~uVar51 & uVar47;
          local_a8 = SUB161(auVar106 ^ auVar110,0);
          if ((local_a8 & 1) != 0) {
            *(char *)((long)piVar1 + uVar50) = (char)uVar51;
          }
          PF_PART4(auVar105, 0) = iVar79 << 8;
          PF_PART4(auVar105, 4) = (int)((ulong)PF_PART8(auVar84, 0) >> 0x20) << 8;
          PF_PART4(auVar105, 8) = PF_PART4(auVar84, 8) << 8;
          PF_PART4(auVar105, 12) = PF_PART4(auVar106, 12) << 8;
          if ((SUB162(auVar105 ^ auVar110,2) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xc5) = (char)(uVar51 >> 8);
          }
          auVar106 = pshuflw(auVar105 ^ auVar110,auVar106,0x55);
          if (((PF_PART2(auVar106, 4) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xc6) = (char)(uVar51 >> 0x10);
          }
          if ((((ushort)((uint5)uVar80 >> 0x18) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 199) = (char)(uVar51 >> 0x18);
          }
          uVar50 = uVar50 + 4;
        } while (uVar48 != uVar50);
        if ((uVar54 & 0x3c) != uVar54) goto LAB_02097191;
      }
      else {
        uVar48 = (ulong)(uVar54 & 0x30);
        uVar50 = 0;
        PF_PART4(auVar70, 8) = 0xffffffff;
        PF_PART8(auVar70, 0) = 0xffffffffffffffff;
        PF_PART4(auVar70, 12) = 0xffffffff;
        do {
          uVar5 = *(undefined8 *)((long)piVar1 + uVar50);
          uVar4 = *(undefined8 *)((long)param_2 + uVar50 + 0xcc);
          PF_PART1(auVar103,0) = -((char)uVar5 == '\0');
          cVar72 = (char)((ulong)uVar5 >> 8);
          PF_PART1(auVar103,1) = -(cVar72 == '\0');
          cVar74 = (char)((ulong)uVar5 >> 0x10);
          PF_PART1(auVar103,2) = -(cVar74 == '\0');
          cVar75 = (char)((ulong)uVar5 >> 0x18);
          PF_PART1(auVar103,3) = -(cVar75 == '\0');
          cVar76 = (char)((ulong)uVar5 >> 0x20);
          PF_PART1(auVar103,4) = -(cVar76 == '\0');
          cVar77 = (char)((ulong)uVar5 >> 0x28);
          PF_PART1(auVar103,5) = -(cVar77 == '\0');
          cVar78 = (char)((ulong)uVar5 >> 0x30);
          cVar7 = (char)((ulong)uVar5 >> 0x38);
          PF_PART1(auVar103,6) = -(cVar78 == '\0');
          PF_PART1(auVar103,7) = -(cVar7 == '\0');
          PF_PART1(auVar103,8) = 0xff;
          PF_PART1(auVar103,9) = 0xff;
          PF_PART1(auVar103,10) = 0xff;
          PF_PART1(auVar103,0xb) = 0xff;
          PF_PART1(auVar103,0xc) = 0xff;
          PF_PART1(auVar103,0xd) = 0xff;
          PF_PART1(auVar103,0xe) = 0xff;
          PF_PART1(auVar103,0xf) = 0xff;
          bVar102 = (char)uVar5 + cVar49;
          bVar117 = cVar72 + cVar25;
          bVar119 = cVar74 + cVar26;
          bVar121 = cVar75 + cVar27;
          bVar123 = cVar76 + cVar8;
          bVar125 = cVar77 + cVar71;
          bVar127 = cVar78 + cVar73;
          bVar129 = cVar7 + cVar28;
          iVar79 = CONCAT13(-((byte)((bVar121 < bVar40) * bVar40 | (bVar121 >= bVar40) * bVar121) ==
                             bVar121),
                            CONCAT12(-((byte)((bVar119 < bVar39) * bVar39 |
                                             (bVar119 >= bVar39) * bVar119) == bVar119),
                                     CONCAT11(-((byte)((bVar117 < bVar38) * bVar38 |
                                                      (bVar117 >= bVar38) * bVar117) == bVar117),
                                              -((byte)((bVar102 < bVar37) * bVar37 |
                                                      (bVar102 >= bVar37) * bVar102) == bVar102))));
          uVar80 = CONCAT14(-((byte)((bVar123 < bVar41) * bVar41 | (bVar123 >= bVar41) * bVar123) ==
                             bVar123),iVar79);
          PF_PART8(auVar82, 0) =
               CONCAT17(-((byte)((bVar129 < bVar44) * bVar44 | (bVar129 >= bVar44) * bVar129) ==
                         bVar129),
                        CONCAT16(-((byte)((bVar127 < bVar43) * bVar43 |
                                         (bVar127 >= bVar43) * bVar127) == bVar127),
                                 CONCAT15(-((byte)((bVar125 < bVar42) * bVar42 |
                                                  (bVar125 >= bVar42) * bVar125) == bVar125),uVar80)
                                ));
          auVar82[8] = -((byte)((bVar29 < bVar101) * bVar101 | (bVar29 >= bVar101) * bVar29) ==
                        bVar29);
          auVar82[9] = -((byte)((bVar30 < bVar116) * bVar116 | (bVar30 >= bVar116) * bVar30) ==
                        bVar30);
          auVar82[10] = -((byte)((bVar31 < bVar118) * bVar118 | (bVar31 >= bVar118) * bVar31) ==
                         bVar31);
          auVar82[0xb] = -((byte)((bVar32 < bVar120) * bVar120 | (bVar32 >= bVar120) * bVar32) ==
                          bVar32);
          PF_PART1(auVar114,0xc) =
               -((byte)((bVar33 < bVar122) * bVar122 | (bVar33 >= bVar122) * bVar33) == bVar33);
          PF_PART12(auVar114, 0) = auVar82;
          PF_PART1(auVar114,0xd) =
               -((byte)((bVar34 < bVar124) * bVar124 | (bVar34 >= bVar124) * bVar34) == bVar34);
          PF_PART1(auVar114,0xe) =
               -((byte)((bVar35 < bVar126) * bVar126 | (bVar35 >= bVar126) * bVar35) == bVar35);
          PF_PART1(auVar114,0xf) =
               -((byte)((bVar36 < bVar128) * bVar128 | (bVar36 >= bVar128) * bVar36) == bVar36);
          auVar103 = ~auVar103 & (auVar114 ^ auVar70);
          auVar103 = auVar103 & auVar106 | ~auVar103 & auVar110;
          local_b8 = SUB161(auVar114 ^ auVar70,0);
          if ((local_b8 & 1) != 0) {
            *(char *)((long)piVar1 + uVar50) = PF_PART1(auVar103,0);
          }
          PF_PART4(auVar130, 0) = iVar79 << 8;
          PF_PART4(auVar131, 4) = (int)(PF_PART8(auVar82, 0) >> 0x20);
          PF_PART4(auVar130, 4) = PF_PART4(auVar131, 4) << 8;
          PF_PART4(auVar130, 8) = PF_PART4(auVar82, 8) << 8;
          PF_PART4(auVar130, 12) = PF_PART4(auVar114, 12) << 8;
          if ((~PF_PART4(auVar130, 0) >> 0x10 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xc5) = PF_PART1(auVar103,1);
          }
          auVar114 = pshuflw(auVar130,auVar114,0x55);
          if (((PF_PART2(auVar114, 4) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xc6) = PF_PART1(auVar103,2);
          }
          if ((((ushort)((uint5)uVar80 >> 0x18) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 199) = PF_PART1(auVar103,3);
          }
          PF_PART4(auVar131, 0) = PF_PART4(auVar131, 4);
          PF_PART4(auVar131, 8) = PF_PART4(auVar131, 4);
          PF_PART4(auVar131, 12) = PF_PART4(auVar131, 4);
          uVar53 = PF_PART8(auVar70, 8);
          if (((PF_PART8(auVar131, 8) ^ uVar53) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 200) = PF_PART1(auVar103,4);
          }
          if (((PF_PART8(auVar82, 0) >> 0x18 ^ uVar53) & 0x10000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xc9) = PF_PART1(auVar103,5);
          }
          if (((PF_PART8(auVar82, 0) >> 0x10 ^ uVar53) & 0x100000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xca) = PF_PART1(auVar103,6);
          }
          if (((PF_PART8(auVar82, 0) >> 8 ^ uVar53) & 0x1000000000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xcb) = PF_PART1(auVar103,7);
          }
          PF_PART1(auVar104,0) = -((char)uVar4 == '\0');
          cVar72 = (char)((ulong)uVar4 >> 8);
          PF_PART1(auVar104,1) = -(cVar72 == '\0');
          cVar74 = (char)((ulong)uVar4 >> 0x10);
          PF_PART1(auVar104,2) = -(cVar74 == '\0');
          cVar75 = (char)((ulong)uVar4 >> 0x18);
          PF_PART1(auVar104,3) = -(cVar75 == '\0');
          cVar76 = (char)((ulong)uVar4 >> 0x20);
          PF_PART1(auVar104,4) = -(cVar76 == '\0');
          cVar77 = (char)((ulong)uVar4 >> 0x28);
          PF_PART1(auVar104,5) = -(cVar77 == '\0');
          cVar78 = (char)((ulong)uVar4 >> 0x30);
          cVar7 = (char)((ulong)uVar4 >> 0x38);
          PF_PART1(auVar104,6) = -(cVar78 == '\0');
          PF_PART1(auVar104,7) = -(cVar7 == '\0');
          PF_PART1(auVar104,8) = 0xff;
          PF_PART1(auVar104,9) = 0xff;
          PF_PART1(auVar104,10) = 0xff;
          PF_PART1(auVar104,0xb) = 0xff;
          PF_PART1(auVar104,0xc) = 0xff;
          PF_PART1(auVar104,0xd) = 0xff;
          PF_PART1(auVar104,0xe) = 0xff;
          PF_PART1(auVar104,0xf) = 0xff;
          bVar102 = (char)uVar4 + cVar49;
          bVar117 = cVar72 + cVar25;
          bVar119 = cVar74 + cVar26;
          bVar121 = cVar75 + cVar27;
          bVar123 = cVar76 + cVar8;
          bVar125 = cVar77 + cVar71;
          bVar127 = cVar78 + cVar73;
          bVar129 = cVar7 + cVar28;
          bVar102 = -((byte)((bVar102 < bVar37) * bVar37 | (bVar102 >= bVar37) * bVar102) == bVar102
                     );
          iVar79 = CONCAT13(-((byte)((bVar121 < bVar40) * bVar40 | (bVar121 >= bVar40) * bVar121) ==
                             bVar121),
                            CONCAT12(-((byte)((bVar119 < bVar39) * bVar39 |
                                             (bVar119 >= bVar39) * bVar119) == bVar119),
                                     CONCAT11(-((byte)((bVar117 < bVar38) * bVar38 |
                                                      (bVar117 >= bVar38) * bVar117) == bVar117),
                                              bVar102)));
          uVar80 = CONCAT14(-((byte)((bVar123 < bVar41) * bVar41 | (bVar123 >= bVar41) * bVar123) ==
                             bVar123),iVar79);
          PF_PART8(auVar83, 0) =
               CONCAT17(-((byte)((bVar129 < bVar44) * bVar44 | (bVar129 >= bVar44) * bVar129) ==
                         bVar129),
                        CONCAT16(-((byte)((bVar127 < bVar43) * bVar43 |
                                         (bVar127 >= bVar43) * bVar127) == bVar127),
                                 CONCAT15(-((byte)((bVar125 < bVar42) * bVar42 |
                                                  (bVar125 >= bVar42) * bVar125) == bVar125),uVar80)
                                ));
          auVar83[8] = -((byte)((bVar29 < bVar101) * bVar101 | (bVar29 >= bVar101) * bVar29) ==
                        bVar29);
          auVar83[9] = -((byte)((bVar30 < bVar116) * bVar116 | (bVar30 >= bVar116) * bVar30) ==
                        bVar30);
          auVar83[10] = -((byte)((bVar31 < bVar118) * bVar118 | (bVar31 >= bVar118) * bVar31) ==
                         bVar31);
          auVar83[0xb] = -((byte)((bVar32 < bVar120) * bVar120 | (bVar32 >= bVar120) * bVar32) ==
                          bVar32);
          PF_PART1(auVar90,0xc) = -((byte)((bVar33 < bVar122) * bVar122 | (bVar33 >= bVar122) * bVar33) ==
                          bVar33);
          PF_PART12(auVar90, 0) = auVar83;
          PF_PART1(auVar90,0xd) = -((byte)((bVar34 < bVar124) * bVar124 | (bVar34 >= bVar124) * bVar34) ==
                          bVar34);
          PF_PART1(auVar90,0xe) = -((byte)((bVar35 < bVar126) * bVar126 | (bVar35 >= bVar126) * bVar35) ==
                          bVar35);
          PF_PART1(auVar90,0xf) = -((byte)((bVar36 < bVar128) * bVar128 | (bVar36 >= bVar128) * bVar36) ==
                          bVar36);
          auVar114 = ~(auVar104 | auVar90) & auVar106 | (auVar104 | auVar90) & auVar110;
          if ((~bVar102 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xcc) = PF_PART1(auVar114,0);
          }
          PF_PART4(auVar60, 0) = iVar79 << 8;
          PF_PART4(auVar61, 4) = (int)(PF_PART8(auVar83, 0) >> 0x20);
          PF_PART4(auVar60, 4) = PF_PART4(auVar61, 4) << 8;
          PF_PART4(auVar60, 8) = PF_PART4(auVar83, 8) << 8;
          PF_PART4(auVar60, 12) = PF_PART4(auVar90, 12) << 8;
          if ((~PF_PART4(auVar60, 0) >> 0x10 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xcd) = PF_PART1(auVar114,1);
          }
          auVar103 = pshuflw(auVar60,auVar90,0x55);
          if (((PF_PART2(auVar103, 4) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xce) = PF_PART1(auVar114,2);
          }
          if ((((ushort)((uint5)uVar80 >> 0x18) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xcf) = PF_PART1(auVar114,3);
          }
          PF_PART4(auVar61, 0) = PF_PART4(auVar61, 4);
          PF_PART4(auVar61, 8) = PF_PART4(auVar61, 4);
          PF_PART4(auVar61, 12) = PF_PART4(auVar61, 4);
          if (((PF_PART8(auVar61, 8) ^ uVar53) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xd0) = PF_PART1(auVar114,4);
          }
          if (((PF_PART8(auVar83, 0) >> 0x18 ^ uVar53) & 0x10000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xd1) = PF_PART1(auVar114,5);
          }
          if (((PF_PART8(auVar83, 0) >> 0x10 ^ uVar53) & 0x100000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xd2) = PF_PART1(auVar114,6);
          }
          if (((PF_PART8(auVar83, 0) >> 8 ^ uVar53) & 0x1000000000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0xd3) = PF_PART1(auVar114,7);
          }
          uVar50 = uVar50 + 0x10;
        } while (uVar48 != uVar50);
        if ((uVar54 & 0x30) != uVar54) {
          uVar50 = uVar48;
          if ((uVar55 & 0xc) == 0) goto LAB_02097191;
          goto LAB_02096fe6;
        }
      }
    }
    do {
      uVar48 = (ulong)*(byte *)((long)param_2 + uVar55 + 0xc3);
      if ((0x2e < uVar48) || ((0x500100000000U >> (uVar48 & 0x3f) & 1) == 0)) goto LAB_0209711d;
      uVar55 = uVar55 - 1;
    } while (uVar55 != 0);
    uVar55 = 0;
LAB_0209711d:
    *(char *)((long)piVar1 + uVar55) = '\0';
    if ((char)*piVar1 != '\0') {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
    }
  }
  piVar1 = param_2 + 0x41;
  *(undefined1 *)(param_2 + 0x41) = 0;
  uVar47 = recovered_2005cd0();
  auVar106 = _str_020a2330;
  auVar110 = _str_020a2320;
  bVar128 = bRam00000000020a231f;
  bVar126 = bRam00000000020a231e;
  bVar124 = bRam00000000020a231d;
  bVar122 = bRam00000000020a231c;
  bVar120 = bRam00000000020a231b;
  bVar118 = bRam00000000020a231a;
  bVar116 = bRam00000000020a2319;
  bVar101 = bRam00000000020a2318;
  bVar44 = bRam00000000020a2317;
  bVar43 = bRam00000000020a2316;
  bVar42 = bRam00000000020a2315;
  bVar41 = bRam00000000020a2314;
  bVar40 = bRam00000000020a2313;
  bVar39 = bRam00000000020a2312;
  bVar38 = bRam00000000020a2311;
  bVar37 = DAT_020a2310;
  bVar36 = bRam00000000020a230f;
  bVar35 = bRam00000000020a230e;
  bVar34 = bRam00000000020a230d;
  bVar33 = bRam00000000020a230c;
  bVar32 = bRam00000000020a230b;
  bVar31 = bRam00000000020a230a;
  bVar30 = bRam00000000020a2309;
  bVar29 = bRam00000000020a2308;
  cVar28 = cRam00000000020a2307;
  cVar73 = cRam00000000020a2306;
  cVar71 = cRam00000000020a2305;
  cVar8 = cRam00000000020a2304;
  cVar27 = cRam00000000020a2303;
  cVar26 = cRam00000000020a2302;
  cVar25 = cRam00000000020a2301;
  cVar49 = DAT_020a2300;
  if (0 < (int)uVar47) {
    uVar55 = 0x3f;
    if (uVar47 < 0x3f) {
      uVar55 = (ulong)uVar47;
    }
    if (uVar47 < 4) {
      uVar48 = 0;
LAB_02097621:
      do {
        if (*(char *)((long)piVar1 + uVar48) == '\0') {
          cVar49 = ',';
LAB_02097612:
          *(char *)((long)piVar1 + uVar48) = cVar49;
        }
        else {
          cVar49 = '.';
          if ((byte)(*(char *)((long)piVar1 + uVar48) + 0x81U) < 0xa1) goto LAB_02097612;
        }
        uVar48 = uVar48 + 1;
      } while (uVar55 != uVar48);
    }
    else {
      uVar54 = (uint)uVar55;
      if (uVar47 < 0x10) {
        uVar50 = 0;
LAB_02097476:
        uVar45 = _DAT_020a2370;
        uVar47 = _DAT_020a2360;
        bVar121 = bRam00000000020a235f;
        bVar119 = bRam00000000020a235e;
        bVar117 = bRam00000000020a235d;
        bVar102 = bRam00000000020a235c;
        bVar128 = bRam00000000020a235b;
        bVar126 = bRam00000000020a235a;
        bVar124 = bRam00000000020a2359;
        bVar122 = bRam00000000020a2358;
        bVar120 = bRam00000000020a2357;
        bVar118 = bRam00000000020a2356;
        bVar116 = bRam00000000020a2355;
        bVar101 = bRam00000000020a2354;
        bVar44 = bRam00000000020a2353;
        bVar43 = bRam00000000020a2352;
        bVar42 = bRam00000000020a2351;
        bVar41 = DAT_020a2350;
        bVar40 = bRam00000000020a234f;
        bVar39 = bRam00000000020a234e;
        bVar38 = bRam00000000020a234d;
        bVar37 = bRam00000000020a234c;
        bVar36 = bRam00000000020a234b;
        bVar35 = bRam00000000020a234a;
        bVar34 = bRam00000000020a2349;
        bVar33 = bRam00000000020a2348;
        bVar32 = bRam00000000020a2347;
        bVar31 = bRam00000000020a2346;
        bVar30 = bRam00000000020a2345;
        bVar29 = bRam00000000020a2344;
        cVar27 = cRam00000000020a2343;
        cVar26 = cRam00000000020a2342;
        cVar25 = cRam00000000020a2341;
        cVar49 = DAT_020a2340;
        uVar48 = (ulong)(uVar54 & 0x3c);
        PF_PART4(auVar57, 8) = 0xffffffff;
        PF_PART8(auVar57, 0) = 0xffffffffffffffff;
        PF_PART4(auVar57, 12) = 0xffffffff;
        do {
          uVar6 = *(undefined4 *)((long)piVar1 + uVar50);
          cVar71 = (char)((uint)uVar6 >> 8);
          cVar73 = (char)((uint)uVar6 >> 0x10);
          cVar8 = (char)((uint)uVar6 >> 0x18);
          bVar123 = (char)uVar6 + cVar49;
          bVar125 = cVar71 + cVar25;
          bVar127 = cVar73 + cVar26;
          bVar129 = cVar8 + cVar27;
          iVar79 = CONCAT13(-((byte)((bVar129 < bVar44) * bVar44 | (bVar129 >= bVar44) * bVar129) ==
                             bVar129),
                            CONCAT12(-((byte)((bVar127 < bVar43) * bVar43 |
                                             (bVar127 >= bVar43) * bVar127) == bVar127),
                                     CONCAT11(-((byte)((bVar125 < bVar42) * bVar42 |
                                                      (bVar125 >= bVar42) * bVar125) == bVar125),
                                              -((byte)((bVar123 < bVar41) * bVar41 |
                                                      (bVar123 >= bVar41) * bVar123) == bVar123))));
          uVar80 = CONCAT14(-((byte)((bVar29 < bVar101) * bVar101 | (bVar29 >= bVar101) * bVar29) ==
                             bVar29),iVar79);
          PF_PART8(auVar87, 0) =
               CONCAT17(-((byte)((bVar32 < bVar120) * bVar120 | (bVar32 >= bVar120) * bVar32) ==
                         bVar32),CONCAT16(-((byte)((bVar31 < bVar118) * bVar118 |
                                                  (bVar31 >= bVar118) * bVar31) == bVar31),
                                          CONCAT15(-((byte)((bVar30 < bVar116) * bVar116 |
                                                           (bVar30 >= bVar116) * bVar30) == bVar30),
                                                   uVar80)));
          auVar87[8] = -((byte)((bVar33 < bVar122) * bVar122 | (bVar33 >= bVar122) * bVar33) ==
                        bVar33);
          auVar87[9] = -((byte)((bVar34 < bVar124) * bVar124 | (bVar34 >= bVar124) * bVar34) ==
                        bVar34);
          auVar87[10] = -((byte)((bVar35 < bVar126) * bVar126 | (bVar35 >= bVar126) * bVar35) ==
                         bVar35);
          auVar87[0xb] = -((byte)((bVar36 < bVar128) * bVar128 | (bVar36 >= bVar128) * bVar36) ==
                          bVar36);
          PF_PART1(auVar93,0xc) = -((byte)((bVar37 < bVar102) * bVar102 | (bVar37 >= bVar102) * bVar37) ==
                          bVar37);
          PF_PART12(auVar93, 0) = auVar87;
          PF_PART1(auVar93,0xd) = -((byte)((bVar38 < bVar117) * bVar117 | (bVar38 >= bVar117) * bVar38) ==
                          bVar38);
          PF_PART1(auVar93,0xe) = -((byte)((bVar39 < bVar119) * bVar119 | (bVar39 >= bVar119) * bVar39) ==
                          bVar39);
          PF_PART1(auVar93,0xf) = -((byte)((bVar40 < bVar121) * bVar121 | (bVar40 >= bVar121) * bVar40) ==
                          bVar40);
          uVar51 = ~CONCAT13(-(cVar8 == '\0'),
                             CONCAT12(-(cVar73 == '\0'),
                                      CONCAT11(-(cVar71 == '\0'),-((char)uVar6 == '\0')))) &
                   SUB164(auVar93 ^ auVar57,0);
          uVar51 = uVar51 & uVar45 | ~uVar51 & uVar47;
          local_88 = SUB161(auVar93 ^ auVar57,0);
          if ((local_88 & 1) != 0) {
            *(char *)((long)piVar1 + uVar50) = (char)uVar51;
          }
          PF_PART4(auVar109, 0) = iVar79 << 8;
          PF_PART4(auVar109, 4) = (int)((ulong)PF_PART8(auVar87, 0) >> 0x20) << 8;
          PF_PART4(auVar109, 8) = PF_PART4(auVar87, 8) << 8;
          PF_PART4(auVar109, 12) = PF_PART4(auVar93, 12) << 8;
          if ((SUB162(auVar109 ^ auVar57,2) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x105) = (char)(uVar51 >> 8);
          }
          auVar110 = pshuflw(auVar109 ^ auVar57,auVar93,0x55);
          if (((PF_PART2(auVar110, 4) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x106) = (char)(uVar51 >> 0x10);
          }
          if ((((ushort)((uint5)uVar80 >> 0x18) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x107) = (char)(uVar51 >> 0x18);
          }
          uVar50 = uVar50 + 4;
        } while (uVar48 != uVar50);
        if ((uVar54 & 0x3c) != uVar54) goto LAB_02097621;
      }
      else {
        uVar48 = (ulong)(uVar54 & 0x30);
        uVar50 = 0;
        PF_PART4(auVar56, 8) = 0xffffffff;
        PF_PART8(auVar56, 0) = 0xffffffffffffffff;
        PF_PART4(auVar56, 12) = 0xffffffff;
        do {
          uVar5 = *(undefined8 *)((long)piVar1 + uVar50);
          uVar4 = *(undefined8 *)((long)param_2 + uVar50 + 0x10c);
          PF_PART1(auVar107,0) = -((char)uVar5 == '\0');
          cVar72 = (char)((ulong)uVar5 >> 8);
          PF_PART1(auVar107,1) = -(cVar72 == '\0');
          cVar74 = (char)((ulong)uVar5 >> 0x10);
          PF_PART1(auVar107,2) = -(cVar74 == '\0');
          cVar75 = (char)((ulong)uVar5 >> 0x18);
          PF_PART1(auVar107,3) = -(cVar75 == '\0');
          cVar76 = (char)((ulong)uVar5 >> 0x20);
          PF_PART1(auVar107,4) = -(cVar76 == '\0');
          cVar77 = (char)((ulong)uVar5 >> 0x28);
          PF_PART1(auVar107,5) = -(cVar77 == '\0');
          cVar78 = (char)((ulong)uVar5 >> 0x30);
          cVar7 = (char)((ulong)uVar5 >> 0x38);
          PF_PART1(auVar107,6) = -(cVar78 == '\0');
          PF_PART1(auVar107,7) = -(cVar7 == '\0');
          PF_PART1(auVar107,8) = 0xff;
          PF_PART1(auVar107,9) = 0xff;
          PF_PART1(auVar107,10) = 0xff;
          PF_PART1(auVar107,0xb) = 0xff;
          PF_PART1(auVar107,0xc) = 0xff;
          PF_PART1(auVar107,0xd) = 0xff;
          PF_PART1(auVar107,0xe) = 0xff;
          PF_PART1(auVar107,0xf) = 0xff;
          bVar102 = (char)uVar5 + cVar49;
          bVar117 = cVar72 + cVar25;
          bVar119 = cVar74 + cVar26;
          bVar121 = cVar75 + cVar27;
          bVar123 = cVar76 + cVar8;
          bVar125 = cVar77 + cVar71;
          bVar127 = cVar78 + cVar73;
          bVar129 = cVar7 + cVar28;
          iVar79 = CONCAT13(-((byte)((bVar121 < bVar40) * bVar40 | (bVar121 >= bVar40) * bVar121) ==
                             bVar121),
                            CONCAT12(-((byte)((bVar119 < bVar39) * bVar39 |
                                             (bVar119 >= bVar39) * bVar119) == bVar119),
                                     CONCAT11(-((byte)((bVar117 < bVar38) * bVar38 |
                                                      (bVar117 >= bVar38) * bVar117) == bVar117),
                                              -((byte)((bVar102 < bVar37) * bVar37 |
                                                      (bVar102 >= bVar37) * bVar102) == bVar102))));
          uVar80 = CONCAT14(-((byte)((bVar123 < bVar41) * bVar41 | (bVar123 >= bVar41) * bVar123) ==
                             bVar123),iVar79);
          PF_PART8(auVar85, 0) =
               CONCAT17(-((byte)((bVar129 < bVar44) * bVar44 | (bVar129 >= bVar44) * bVar129) ==
                         bVar129),
                        CONCAT16(-((byte)((bVar127 < bVar43) * bVar43 |
                                         (bVar127 >= bVar43) * bVar127) == bVar127),
                                 CONCAT15(-((byte)((bVar125 < bVar42) * bVar42 |
                                                  (bVar125 >= bVar42) * bVar125) == bVar125),uVar80)
                                ));
          auVar85[8] = -((byte)((bVar29 < bVar101) * bVar101 | (bVar29 >= bVar101) * bVar29) ==
                        bVar29);
          auVar85[9] = -((byte)((bVar30 < bVar116) * bVar116 | (bVar30 >= bVar116) * bVar30) ==
                        bVar30);
          auVar85[10] = -((byte)((bVar31 < bVar118) * bVar118 | (bVar31 >= bVar118) * bVar31) ==
                         bVar31);
          auVar85[0xb] = -((byte)((bVar32 < bVar120) * bVar120 | (bVar32 >= bVar120) * bVar32) ==
                          bVar32);
          PF_PART1(auVar91,0xc) = -((byte)((bVar33 < bVar122) * bVar122 | (bVar33 >= bVar122) * bVar33) ==
                          bVar33);
          PF_PART12(auVar91, 0) = auVar85;
          PF_PART1(auVar91,0xd) = -((byte)((bVar34 < bVar124) * bVar124 | (bVar34 >= bVar124) * bVar34) ==
                          bVar34);
          PF_PART1(auVar91,0xe) = -((byte)((bVar35 < bVar126) * bVar126 | (bVar35 >= bVar126) * bVar35) ==
                          bVar35);
          PF_PART1(auVar91,0xf) = -((byte)((bVar36 < bVar128) * bVar128 | (bVar36 >= bVar128) * bVar36) ==
                          bVar36);
          auVar70 = ~auVar107 & (auVar91 ^ auVar56);
          auVar70 = auVar70 & auVar106 | ~auVar70 & auVar110;
          local_98 = SUB161(auVar91 ^ auVar56,0);
          if ((local_98 & 1) != 0) {
            *(char *)((long)piVar1 + uVar50) = PF_PART1(auVar70,0);
          }
          PF_PART4(auVar132, 0) = iVar79 << 8;
          PF_PART4(auVar133, 4) = (int)(PF_PART8(auVar85, 0) >> 0x20);
          PF_PART4(auVar132, 4) = PF_PART4(auVar133, 4) << 8;
          PF_PART4(auVar132, 8) = PF_PART4(auVar85, 8) << 8;
          PF_PART4(auVar132, 12) = PF_PART4(auVar91, 12) << 8;
          if ((~PF_PART4(auVar132, 0) >> 0x10 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x105) = PF_PART1(auVar70,1);
          }
          auVar114 = pshuflw(auVar132,auVar91,0x55);
          if (((PF_PART2(auVar114, 4) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x106) = PF_PART1(auVar70,2);
          }
          if ((((ushort)((uint5)uVar80 >> 0x18) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x107) = PF_PART1(auVar70,3);
          }
          PF_PART4(auVar133, 0) = PF_PART4(auVar133, 4);
          PF_PART4(auVar133, 8) = PF_PART4(auVar133, 4);
          PF_PART4(auVar133, 12) = PF_PART4(auVar133, 4);
          uVar53 = PF_PART8(auVar56, 8);
          if (((PF_PART8(auVar133, 8) ^ uVar53) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x108) = PF_PART1(auVar70,4);
          }
          if (((PF_PART8(auVar85, 0) >> 0x18 ^ uVar53) & 0x10000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x109) = PF_PART1(auVar70,5);
          }
          if (((PF_PART8(auVar85, 0) >> 0x10 ^ uVar53) & 0x100000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x10a) = PF_PART1(auVar70,6);
          }
          if (((PF_PART8(auVar85, 0) >> 8 ^ uVar53) & 0x1000000000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x10b) = PF_PART1(auVar70,7);
          }
          PF_PART1(auVar108,0) = -((char)uVar4 == '\0');
          cVar72 = (char)((ulong)uVar4 >> 8);
          PF_PART1(auVar108,1) = -(cVar72 == '\0');
          cVar74 = (char)((ulong)uVar4 >> 0x10);
          PF_PART1(auVar108,2) = -(cVar74 == '\0');
          cVar75 = (char)((ulong)uVar4 >> 0x18);
          PF_PART1(auVar108,3) = -(cVar75 == '\0');
          cVar76 = (char)((ulong)uVar4 >> 0x20);
          PF_PART1(auVar108,4) = -(cVar76 == '\0');
          cVar77 = (char)((ulong)uVar4 >> 0x28);
          PF_PART1(auVar108,5) = -(cVar77 == '\0');
          cVar78 = (char)((ulong)uVar4 >> 0x30);
          cVar7 = (char)((ulong)uVar4 >> 0x38);
          PF_PART1(auVar108,6) = -(cVar78 == '\0');
          PF_PART1(auVar108,7) = -(cVar7 == '\0');
          PF_PART1(auVar108,8) = 0xff;
          PF_PART1(auVar108,9) = 0xff;
          PF_PART1(auVar108,10) = 0xff;
          PF_PART1(auVar108,0xb) = 0xff;
          PF_PART1(auVar108,0xc) = 0xff;
          PF_PART1(auVar108,0xd) = 0xff;
          PF_PART1(auVar108,0xe) = 0xff;
          PF_PART1(auVar108,0xf) = 0xff;
          bVar102 = (char)uVar4 + cVar49;
          bVar117 = cVar72 + cVar25;
          bVar119 = cVar74 + cVar26;
          bVar121 = cVar75 + cVar27;
          bVar123 = cVar76 + cVar8;
          bVar125 = cVar77 + cVar71;
          bVar127 = cVar78 + cVar73;
          bVar129 = cVar7 + cVar28;
          bVar102 = -((byte)((bVar102 < bVar37) * bVar37 | (bVar102 >= bVar37) * bVar102) == bVar102
                     );
          iVar79 = CONCAT13(-((byte)((bVar121 < bVar40) * bVar40 | (bVar121 >= bVar40) * bVar121) ==
                             bVar121),
                            CONCAT12(-((byte)((bVar119 < bVar39) * bVar39 |
                                             (bVar119 >= bVar39) * bVar119) == bVar119),
                                     CONCAT11(-((byte)((bVar117 < bVar38) * bVar38 |
                                                      (bVar117 >= bVar38) * bVar117) == bVar117),
                                              bVar102)));
          uVar80 = CONCAT14(-((byte)((bVar123 < bVar41) * bVar41 | (bVar123 >= bVar41) * bVar123) ==
                             bVar123),iVar79);
          PF_PART8(auVar86, 0) =
               CONCAT17(-((byte)((bVar129 < bVar44) * bVar44 | (bVar129 >= bVar44) * bVar129) ==
                         bVar129),
                        CONCAT16(-((byte)((bVar127 < bVar43) * bVar43 |
                                         (bVar127 >= bVar43) * bVar127) == bVar127),
                                 CONCAT15(-((byte)((bVar125 < bVar42) * bVar42 |
                                                  (bVar125 >= bVar42) * bVar125) == bVar125),uVar80)
                                ));
          auVar86[8] = -((byte)((bVar29 < bVar101) * bVar101 | (bVar29 >= bVar101) * bVar29) ==
                        bVar29);
          auVar86[9] = -((byte)((bVar30 < bVar116) * bVar116 | (bVar30 >= bVar116) * bVar30) ==
                        bVar30);
          auVar86[10] = -((byte)((bVar31 < bVar118) * bVar118 | (bVar31 >= bVar118) * bVar31) ==
                         bVar31);
          auVar86[0xb] = -((byte)((bVar32 < bVar120) * bVar120 | (bVar32 >= bVar120) * bVar32) ==
                          bVar32);
          PF_PART1(auVar92,0xc) = -((byte)((bVar33 < bVar122) * bVar122 | (bVar33 >= bVar122) * bVar33) ==
                          bVar33);
          PF_PART12(auVar92, 0) = auVar86;
          PF_PART1(auVar92,0xd) = -((byte)((bVar34 < bVar124) * bVar124 | (bVar34 >= bVar124) * bVar34) ==
                          bVar34);
          PF_PART1(auVar92,0xe) = -((byte)((bVar35 < bVar126) * bVar126 | (bVar35 >= bVar126) * bVar35) ==
                          bVar35);
          PF_PART1(auVar92,0xf) = -((byte)((bVar36 < bVar128) * bVar128 | (bVar36 >= bVar128) * bVar36) ==
                          bVar36);
          auVar70 = ~(auVar108 | auVar92) & auVar106 | (auVar108 | auVar92) & auVar110;
          if ((~bVar102 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x10c) = PF_PART1(auVar70,0);
          }
          PF_PART4(auVar62, 0) = iVar79 << 8;
          PF_PART4(auVar63, 4) = (int)(PF_PART8(auVar86, 0) >> 0x20);
          PF_PART4(auVar62, 4) = PF_PART4(auVar63, 4) << 8;
          PF_PART4(auVar62, 8) = PF_PART4(auVar86, 8) << 8;
          PF_PART4(auVar62, 12) = PF_PART4(auVar92, 12) << 8;
          if ((~PF_PART4(auVar62, 0) >> 0x10 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x10d) = PF_PART1(auVar70,1);
          }
          auVar114 = pshuflw(auVar62,auVar92,0x55);
          if (((PF_PART2(auVar114, 4) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x10e) = PF_PART1(auVar70,2);
          }
          if ((((ushort)((uint5)uVar80 >> 0x18) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x10f) = PF_PART1(auVar70,3);
          }
          PF_PART4(auVar63, 0) = PF_PART4(auVar63, 4);
          PF_PART4(auVar63, 8) = PF_PART4(auVar63, 4);
          PF_PART4(auVar63, 12) = PF_PART4(auVar63, 4);
          if (((PF_PART8(auVar63, 8) ^ uVar53) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x110) = PF_PART1(auVar70,4);
          }
          if (((PF_PART8(auVar86, 0) >> 0x18 ^ uVar53) & 0x10000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x111) = PF_PART1(auVar70,5);
          }
          if (((PF_PART8(auVar86, 0) >> 0x10 ^ uVar53) & 0x100000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x112) = PF_PART1(auVar70,6);
          }
          if (((PF_PART8(auVar86, 0) >> 8 ^ uVar53) & 0x1000000000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x113) = PF_PART1(auVar70,7);
          }
          uVar50 = uVar50 + 0x10;
        } while (uVar48 != uVar50);
        if ((uVar54 & 0x30) != uVar54) {
          uVar50 = uVar48;
          if ((uVar55 & 0xc) == 0) goto LAB_02097621;
          goto LAB_02097476;
        }
      }
    }
    do {
      uVar48 = (ulong)*(byte *)((long)param_2 + uVar55 + 0x103);
      if ((0x2e < uVar48) || ((0x500100000000U >> (uVar48 & 0x3f) & 1) == 0)) goto LAB_020975ad;
      uVar55 = uVar55 - 1;
    } while (uVar55 != 0);
    uVar55 = 0;
LAB_020975ad:
    *(char *)((long)piVar1 + uVar55) = '\0';
    if ((char)*piVar1 != '\0') {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
    }
  }
  piVar1 = param_2 + 0x51;
  *(undefined1 *)(param_2 + 0x51) = 0;
  uVar47 = recovered_2005cd0();
  auVar106 = (uint128)PF_PART16(str_020a23a0, 16);
  auVar110 = (uint128)PF_PART16(str_020a23a0, 0);
  bVar44 = bRam00000000020a239f;
  bVar43 = bRam00000000020a239e;
  bVar42 = bRam00000000020a239d;
  bVar41 = bRam00000000020a239c;
  bVar40 = bRam00000000020a239b;
  bVar39 = bRam00000000020a239a;
  bVar38 = bRam00000000020a2399;
  bVar37 = bRam00000000020a2398;
  bVar36 = bRam00000000020a2397;
  bVar35 = bRam00000000020a2396;
  bVar34 = bRam00000000020a2395;
  bVar33 = bRam00000000020a2394;
  bVar32 = bRam00000000020a2393;
  bVar31 = bRam00000000020a2392;
  bVar30 = bRam00000000020a2391;
  bVar29 = DAT_020a2390;
  cVar46 = cRam00000000020a238f;
  cVar78 = cRam00000000020a238e;
  cVar77 = cRam00000000020a238d;
  cVar76 = cRam00000000020a238c;
  cVar75 = cRam00000000020a238b;
  cVar74 = cRam00000000020a238a;
  cVar72 = cRam00000000020a2389;
  cVar7 = cRam00000000020a2388;
  cVar28 = cRam00000000020a2387;
  cVar73 = cRam00000000020a2386;
  cVar71 = cRam00000000020a2385;
  cVar8 = cRam00000000020a2384;
  cVar27 = cRam00000000020a2383;
  cVar26 = cRam00000000020a2382;
  cVar25 = cRam00000000020a2381;
  cVar49 = DAT_020a2380;
  if (0 < (int)uVar47) {
    uVar55 = 0x5f;
    if (uVar47 < 0x5f) {
      uVar55 = (ulong)uVar47;
    }
    if (uVar47 < 8) {
      uVar48 = 0;
LAB_02097b61:
      do {
        if (*(char *)((long)piVar1 + uVar48) == '\0') {
          cVar49 = ',';
LAB_02097b52:
          *(char *)((long)piVar1 + uVar48) = cVar49;
        }
        else {
          cVar49 = '.';
          if ((byte)(*(char *)((long)piVar1 + uVar48) + 0x81U) < 0xa1) goto LAB_02097b52;
        }
        uVar48 = uVar48 + 1;
      } while (uVar55 != uVar48);
    }
    else {
      uVar54 = (uint)uVar55;
      if (uVar47 < 0x20) {
        uVar50 = 0;
LAB_02097920:
        auVar106 = _str_020a2330;
        auVar110 = _str_020a2320;
        bVar128 = bRam00000000020a231f;
        bVar126 = bRam00000000020a231e;
        bVar124 = bRam00000000020a231d;
        bVar122 = bRam00000000020a231c;
        bVar120 = bRam00000000020a231b;
        bVar118 = bRam00000000020a231a;
        bVar116 = bRam00000000020a2319;
        bVar101 = bRam00000000020a2318;
        bVar44 = bRam00000000020a2317;
        bVar43 = bRam00000000020a2316;
        bVar42 = bRam00000000020a2315;
        bVar41 = bRam00000000020a2314;
        bVar40 = bRam00000000020a2313;
        bVar39 = bRam00000000020a2312;
        bVar38 = bRam00000000020a2311;
        bVar37 = DAT_020a2310;
        bVar36 = bRam00000000020a230f;
        bVar35 = bRam00000000020a230e;
        bVar34 = bRam00000000020a230d;
        bVar33 = bRam00000000020a230c;
        bVar32 = bRam00000000020a230b;
        bVar31 = bRam00000000020a230a;
        bVar30 = bRam00000000020a2309;
        bVar29 = bRam00000000020a2308;
        cVar28 = cRam00000000020a2307;
        cVar73 = cRam00000000020a2306;
        cVar71 = cRam00000000020a2305;
        cVar8 = cRam00000000020a2304;
        cVar27 = cRam00000000020a2303;
        cVar26 = cRam00000000020a2302;
        cVar25 = cRam00000000020a2301;
        cVar49 = DAT_020a2300;
        uVar48 = (ulong)(uVar54 & 0x78);
        PF_PART4(auVar58, 8) = 0xffffffff;
        PF_PART8(auVar58, 0) = 0xffffffffffffffff;
        PF_PART4(auVar58, 12) = 0xffffffff;
        do {
          uVar5 = *(undefined8 *)((long)piVar1 + uVar50);
          PF_PART1(auVar66,0) = -((char)uVar5 == '\0');
          cVar72 = (char)((ulong)uVar5 >> 8);
          PF_PART1(auVar66,1) = -(cVar72 == '\0');
          cVar74 = (char)((ulong)uVar5 >> 0x10);
          PF_PART1(auVar66,2) = -(cVar74 == '\0');
          cVar75 = (char)((ulong)uVar5 >> 0x18);
          PF_PART1(auVar66,3) = -(cVar75 == '\0');
          cVar76 = (char)((ulong)uVar5 >> 0x20);
          PF_PART1(auVar66,4) = -(cVar76 == '\0');
          cVar77 = (char)((ulong)uVar5 >> 0x28);
          PF_PART1(auVar66,5) = -(cVar77 == '\0');
          cVar78 = (char)((ulong)uVar5 >> 0x30);
          cVar7 = (char)((ulong)uVar5 >> 0x38);
          PF_PART1(auVar66,6) = -(cVar78 == '\0');
          PF_PART1(auVar66,7) = -(cVar7 == '\0');
          PF_PART1(auVar66,8) = 0xff;
          PF_PART1(auVar66,9) = 0xff;
          PF_PART1(auVar66,10) = 0xff;
          PF_PART1(auVar66,0xb) = 0xff;
          PF_PART1(auVar66,0xc) = 0xff;
          PF_PART1(auVar66,0xd) = 0xff;
          PF_PART1(auVar66,0xe) = 0xff;
          PF_PART1(auVar66,0xf) = 0xff;
          bVar102 = (char)uVar5 + cVar49;
          bVar117 = cVar72 + cVar25;
          bVar119 = cVar74 + cVar26;
          bVar121 = cVar75 + cVar27;
          bVar123 = cVar76 + cVar8;
          bVar125 = cVar77 + cVar71;
          bVar127 = cVar78 + cVar73;
          bVar129 = cVar7 + cVar28;
          iVar79 = CONCAT13(-((byte)((bVar121 < bVar40) * bVar40 | (bVar121 >= bVar40) * bVar121) ==
                             bVar121),
                            CONCAT12(-((byte)((bVar119 < bVar39) * bVar39 |
                                             (bVar119 >= bVar39) * bVar119) == bVar119),
                                     CONCAT11(-((byte)((bVar117 < bVar38) * bVar38 |
                                                      (bVar117 >= bVar38) * bVar117) == bVar117),
                                              -((byte)((bVar102 < bVar37) * bVar37 |
                                                      (bVar102 >= bVar37) * bVar102) == bVar102))));
          uVar80 = CONCAT14(-((byte)((bVar123 < bVar41) * bVar41 | (bVar123 >= bVar41) * bVar123) ==
                             bVar123),iVar79);
          PF_PART8(auVar88, 0) =
               CONCAT17(-((byte)((bVar129 < bVar44) * bVar44 | (bVar129 >= bVar44) * bVar129) ==
                         bVar129),
                        CONCAT16(-((byte)((bVar127 < bVar43) * bVar43 |
                                         (bVar127 >= bVar43) * bVar127) == bVar127),
                                 CONCAT15(-((byte)((bVar125 < bVar42) * bVar42 |
                                                  (bVar125 >= bVar42) * bVar125) == bVar125),uVar80)
                                ));
          auVar88[8] = -((byte)((bVar29 < bVar101) * bVar101 | (bVar29 >= bVar101) * bVar29) ==
                        bVar29);
          auVar88[9] = -((byte)((bVar30 < bVar116) * bVar116 | (bVar30 >= bVar116) * bVar30) ==
                        bVar30);
          auVar88[10] = -((byte)((bVar31 < bVar118) * bVar118 | (bVar31 >= bVar118) * bVar31) ==
                         bVar31);
          auVar88[0xb] = -((byte)((bVar32 < bVar120) * bVar120 | (bVar32 >= bVar120) * bVar32) ==
                          bVar32);
          PF_PART1(auVar96,0xc) = -((byte)((bVar33 < bVar122) * bVar122 | (bVar33 >= bVar122) * bVar33) ==
                          bVar33);
          PF_PART12(auVar96, 0) = auVar88;
          PF_PART1(auVar96,0xd) = -((byte)((bVar34 < bVar124) * bVar124 | (bVar34 >= bVar124) * bVar34) ==
                          bVar34);
          PF_PART1(auVar96,0xe) = -((byte)((bVar35 < bVar126) * bVar126 | (bVar35 >= bVar126) * bVar35) ==
                          bVar35);
          PF_PART1(auVar96,0xf) = -((byte)((bVar36 < bVar128) * bVar128 | (bVar36 >= bVar128) * bVar36) ==
                          bVar36);
          auVar70 = ~auVar66 & (auVar96 ^ auVar58);
          auVar70 = auVar70 & auVar106 | ~auVar70 & auVar110;
          local_68 = SUB161(auVar96 ^ auVar58,0);
          if ((local_68 & 1) != 0) {
            *(char *)((long)piVar1 + uVar50) = PF_PART1(auVar70,0);
          }
          PF_PART4(auVar111, 0) = iVar79 << 8;
          PF_PART4(auVar112, 4) = (int)(PF_PART8(auVar88, 0) >> 0x20);
          PF_PART4(auVar111, 4) = PF_PART4(auVar112, 4) << 8;
          PF_PART4(auVar111, 8) = PF_PART4(auVar88, 8) << 8;
          PF_PART4(auVar111, 12) = PF_PART4(auVar96, 12) << 8;
          if ((~PF_PART4(auVar111, 0) >> 0x10 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x145) = PF_PART1(auVar70,1);
          }
          auVar114 = pshuflw(auVar111,auVar96,0x55);
          if (((PF_PART2(auVar114, 4) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x146) = PF_PART1(auVar70,2);
          }
          if ((((ushort)((uint5)uVar80 >> 0x18) ^ 0xffff) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x147) = PF_PART1(auVar70,3);
          }
          PF_PART4(auVar112, 0) = PF_PART4(auVar112, 4);
          PF_PART4(auVar112, 8) = PF_PART4(auVar112, 4);
          PF_PART4(auVar112, 12) = PF_PART4(auVar112, 4);
          uVar53 = PF_PART8(auVar58, 8);
          if (((PF_PART8(auVar112, 8) ^ uVar53) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x148) = PF_PART1(auVar70,4);
          }
          if (((PF_PART8(auVar88, 0) >> 0x18 ^ uVar53) & 0x10000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x149) = PF_PART1(auVar70,5);
          }
          if (((PF_PART8(auVar88, 0) >> 0x10 ^ uVar53) & 0x100000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x14a) = PF_PART1(auVar70,6);
          }
          if (((PF_PART8(auVar88, 0) >> 8 ^ uVar53) & 0x1000000000000) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x14b) = PF_PART1(auVar70,7);
          }
          uVar50 = uVar50 + 8;
        } while (uVar48 != uVar50);
        if ((uVar54 & 0x78) != uVar54) goto LAB_02097b61;
      }
      else {
        uVar48 = (ulong)(uVar54 & 0x60);
        uVar50 = 0;
        do {
          pcVar2 = (char *)((long)piVar1 + uVar50);
          pcVar3 = (char *)((long)param_2 + uVar50 + 0x154);
          cVar9 = *pcVar3;
          cVar10 = pcVar3[1];
          cVar11 = pcVar3[2];
          cVar12 = pcVar3[3];
          cVar13 = pcVar3[4];
          cVar14 = pcVar3[5];
          cVar15 = pcVar3[6];
          cVar16 = pcVar3[7];
          cVar17 = pcVar3[8];
          cVar18 = pcVar3[9];
          cVar19 = pcVar3[10];
          cVar20 = pcVar3[0xb];
          cVar21 = pcVar3[0xc];
          cVar22 = pcVar3[0xd];
          cVar23 = pcVar3[0xe];
          cVar24 = pcVar3[0xf];
          PF_PART1(auVar64,0) = -(*pcVar2 == '\0');
          PF_PART1(auVar64,1) = -(pcVar2[1] == '\0');
          PF_PART1(auVar64,2) = -(pcVar2[2] == '\0');
          PF_PART1(auVar64,3) = -(pcVar2[3] == '\0');
          PF_PART1(auVar64,4) = -(pcVar2[4] == '\0');
          PF_PART1(auVar64,5) = -(pcVar2[5] == '\0');
          PF_PART1(auVar64,6) = -(pcVar2[6] == '\0');
          PF_PART1(auVar64,7) = -(pcVar2[7] == '\0');
          PF_PART1(auVar64,8) = -(pcVar2[8] == '\0');
          PF_PART1(auVar64,9) = -(pcVar2[9] == '\0');
          PF_PART1(auVar64,10) = -(pcVar2[10] == '\0');
          PF_PART1(auVar64,0xb) = -(pcVar2[0xb] == '\0');
          PF_PART1(auVar64,0xc) = -(pcVar2[0xc] == '\0');
          PF_PART1(auVar64,0xd) = -(pcVar2[0xd] == '\0');
          PF_PART1(auVar64,0xe) = -(pcVar2[0xe] == '\0');
          PF_PART1(auVar64,0xf) = -(pcVar2[0xf] == '\0');
          bVar101 = *pcVar2 + cVar49;
          bVar116 = pcVar2[1] + cVar25;
          bVar118 = pcVar2[2] + cVar26;
          bVar120 = pcVar2[3] + cVar27;
          bVar122 = pcVar2[4] + cVar8;
          bVar124 = pcVar2[5] + cVar71;
          bVar126 = pcVar2[6] + cVar73;
          bVar128 = pcVar2[7] + cVar28;
          bVar102 = pcVar2[8] + cVar7;
          bVar117 = pcVar2[9] + cVar72;
          bVar119 = pcVar2[10] + cVar74;
          bVar121 = pcVar2[0xb] + cVar75;
          bVar123 = pcVar2[0xc] + cVar76;
          bVar125 = pcVar2[0xd] + cVar77;
          bVar127 = pcVar2[0xe] + cVar78;
          bVar129 = pcVar2[0xf] + cVar46;
          bVar101 = -((byte)((bVar29 < bVar101) * bVar29 | (bVar29 >= bVar101) * bVar101) == bVar101
                     );
          bVar116 = -((byte)((bVar30 < bVar116) * bVar30 | (bVar30 >= bVar116) * bVar116) == bVar116
                     );
          bVar118 = -((byte)((bVar31 < bVar118) * bVar31 | (bVar31 >= bVar118) * bVar118) == bVar118
                     );
          bVar120 = -((byte)((bVar32 < bVar120) * bVar32 | (bVar32 >= bVar120) * bVar120) == bVar120
                     );
          bVar122 = -((byte)((bVar33 < bVar122) * bVar33 | (bVar33 >= bVar122) * bVar122) == bVar122
                     );
          uVar81 = CONCAT15(-((byte)((bVar34 < bVar124) * bVar34 | (bVar34 >= bVar124) * bVar124) ==
                             bVar124),
                            CONCAT14(bVar122,CONCAT13(bVar120,CONCAT12(bVar118,CONCAT11(bVar116,
                                                  bVar101)))));
          bVar124 = -((byte)((bVar35 < bVar126) * bVar35 | (bVar35 >= bVar126) * bVar126) == bVar126
                     );
          PF_PART8(auVar94, 0) =
               CONCAT17(-((byte)((bVar36 < bVar128) * bVar36 | (bVar36 >= bVar128) * bVar128) ==
                         bVar128),CONCAT16(bVar124,uVar81));
          PF_PART1(auVar94,8) = -((byte)((bVar37 < bVar102) * bVar37 | (bVar37 >= bVar102) * bVar102) ==
                        bVar102);
          PF_PART1(auVar94,9) = -((byte)((bVar38 < bVar117) * bVar38 | (bVar38 >= bVar117) * bVar117) ==
                        bVar117);
          PF_PART1(auVar94,10) = -((byte)((bVar39 < bVar119) * bVar39 | (bVar39 >= bVar119) * bVar119) ==
                         bVar119);
          PF_PART1(auVar94,0xb) = -((byte)((bVar40 < bVar121) * bVar40 | (bVar40 >= bVar121) * bVar121) ==
                          bVar121);
          PF_PART1(auVar94,0xc) = -((byte)((bVar41 < bVar123) * bVar41 | (bVar41 >= bVar123) * bVar123) ==
                          bVar123);
          PF_PART1(auVar94,0xd) = -((byte)((bVar42 < bVar125) * bVar42 | (bVar42 >= bVar125) * bVar125) ==
                          bVar125);
          PF_PART1(auVar94,0xe) = -((byte)((bVar43 < bVar127) * bVar43 | (bVar43 >= bVar127) * bVar127) ==
                          bVar127);
          PF_PART1(auVar94,0xf) = -((byte)((bVar44 < bVar129) * bVar44 | (bVar44 >= bVar129) * bVar129) ==
                          bVar129);
          auVar70 = ~auVar64 & auVar94 & auVar106 | ~(~auVar64 & auVar94) & auVar110;
          if ((bVar101 & 1) != 0) {
            *(char *)((long)piVar1 + uVar50) = PF_PART1(auVar70,0);
          }
          if ((bVar116 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x145) = PF_PART1(auVar70,1);
          }
          if ((bVar118 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x146) = PF_PART1(auVar70,2);
          }
          if ((bVar120 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x147) = PF_PART1(auVar70,3);
          }
          uVar100 = PF_PART8(auVar94, 8);
          uVar53 = PF_PART8(auVar70, 8);
          if ((bVar122 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x148) = PF_PART1(auVar70,4);
          }
          if (((ushort)((uint6)uVar81 >> 0x28) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x149) = PF_PART1(auVar70,5);
          }
          if ((bVar124 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x14a) = PF_PART1(auVar70,6);
          }
          if (((ushort)((ulong)PF_PART8(auVar94, 0) >> 0x38) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x14b) = PF_PART1(auVar70,7);
          }
          if ((uVar100 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x14c) = (char)(uVar53 & 0xffff);
          }
          if (((uVar100 & 0xffff) >> 8 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x14d) = (char)((uVar53 & 0xffff) >> 8);
          }
          uVar52 = uVar53 >> 0x10 & 0xffff;
          if ((uVar100 >> 0x10 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x14e) = (char)uVar52;
          }
          if (((uVar100 >> 0x10 & 0xffff) >> 8 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x14f) = (char)(uVar52 >> 8);
          }
          uVar53 = uVar53 >> 0x20 & 0xffff;
          if ((uVar100 >> 0x20 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x150) = (char)uVar53;
          }
          if (((uVar100 >> 0x20 & 0xffff) >> 8 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x151) = (char)(uVar53 >> 8);
          }
          if ((uVar100 >> 0x30 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x152) = PF_PART1(auVar70,0xe);
          }
          if ((uVar100 >> 0x38 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x153) = PF_PART1(auVar70,0xf);
          }
          PF_PART1(auVar65,0) = -(cVar9 == '\0');
          PF_PART1(auVar65,1) = -(cVar10 == '\0');
          PF_PART1(auVar65,2) = -(cVar11 == '\0');
          PF_PART1(auVar65,3) = -(cVar12 == '\0');
          PF_PART1(auVar65,4) = -(cVar13 == '\0');
          PF_PART1(auVar65,5) = -(cVar14 == '\0');
          PF_PART1(auVar65,6) = -(cVar15 == '\0');
          PF_PART1(auVar65,7) = -(cVar16 == '\0');
          PF_PART1(auVar65,8) = -(cVar17 == '\0');
          PF_PART1(auVar65,9) = -(cVar18 == '\0');
          PF_PART1(auVar65,10) = -(cVar19 == '\0');
          PF_PART1(auVar65,0xb) = -(cVar20 == '\0');
          PF_PART1(auVar65,0xc) = -(cVar21 == '\0');
          PF_PART1(auVar65,0xd) = -(cVar22 == '\0');
          PF_PART1(auVar65,0xe) = -(cVar23 == '\0');
          PF_PART1(auVar65,0xf) = -(cVar24 == '\0');
          bVar101 = cVar9 + cVar49;
          bVar116 = cVar10 + cVar25;
          bVar118 = cVar11 + cVar26;
          bVar120 = cVar12 + cVar27;
          bVar122 = cVar13 + cVar8;
          bVar124 = cVar14 + cVar71;
          bVar126 = cVar15 + cVar73;
          bVar128 = cVar16 + cVar28;
          bVar102 = cVar17 + cVar7;
          bVar117 = cVar18 + cVar72;
          bVar119 = cVar19 + cVar74;
          bVar121 = cVar20 + cVar75;
          bVar123 = cVar21 + cVar76;
          bVar125 = cVar22 + cVar77;
          bVar127 = cVar23 + cVar78;
          bVar129 = cVar24 + cVar46;
          bVar101 = -((byte)((bVar29 < bVar101) * bVar29 | (bVar29 >= bVar101) * bVar101) == bVar101
                     );
          bVar116 = -((byte)((bVar30 < bVar116) * bVar30 | (bVar30 >= bVar116) * bVar116) == bVar116
                     );
          bVar118 = -((byte)((bVar31 < bVar118) * bVar31 | (bVar31 >= bVar118) * bVar118) == bVar118
                     );
          bVar120 = -((byte)((bVar32 < bVar120) * bVar32 | (bVar32 >= bVar120) * bVar120) == bVar120
                     );
          bVar122 = -((byte)((bVar33 < bVar122) * bVar33 | (bVar33 >= bVar122) * bVar122) == bVar122
                     );
          uVar81 = CONCAT15(-((byte)((bVar34 < bVar124) * bVar34 | (bVar34 >= bVar124) * bVar124) ==
                             bVar124),
                            CONCAT14(bVar122,CONCAT13(bVar120,CONCAT12(bVar118,CONCAT11(bVar116,
                                                  bVar101)))));
          bVar124 = -((byte)((bVar35 < bVar126) * bVar35 | (bVar35 >= bVar126) * bVar126) == bVar126
                     );
          PF_PART8(auVar95, 0) =
               CONCAT17(-((byte)((bVar36 < bVar128) * bVar36 | (bVar36 >= bVar128) * bVar128) ==
                         bVar128),CONCAT16(bVar124,uVar81));
          PF_PART1(auVar95,8) = -((byte)((bVar37 < bVar102) * bVar37 | (bVar37 >= bVar102) * bVar102) ==
                        bVar102);
          PF_PART1(auVar95,9) = -((byte)((bVar38 < bVar117) * bVar38 | (bVar38 >= bVar117) * bVar117) ==
                        bVar117);
          PF_PART1(auVar95,10) = -((byte)((bVar39 < bVar119) * bVar39 | (bVar39 >= bVar119) * bVar119) ==
                         bVar119);
          PF_PART1(auVar95,0xb) = -((byte)((bVar40 < bVar121) * bVar40 | (bVar40 >= bVar121) * bVar121) ==
                          bVar121);
          PF_PART1(auVar95,0xc) = -((byte)((bVar41 < bVar123) * bVar41 | (bVar41 >= bVar123) * bVar123) ==
                          bVar123);
          PF_PART1(auVar95,0xd) = -((byte)((bVar42 < bVar125) * bVar42 | (bVar42 >= bVar125) * bVar125) ==
                          bVar125);
          PF_PART1(auVar95,0xe) = -((byte)((bVar43 < bVar127) * bVar43 | (bVar43 >= bVar127) * bVar127) ==
                          bVar127);
          PF_PART1(auVar95,0xf) = -((byte)((bVar44 < bVar129) * bVar44 | (bVar44 >= bVar129) * bVar129) ==
                          bVar129);
          auVar70 = ~auVar65 & auVar95 & auVar106 | ~(~auVar65 & auVar95) & auVar110;
          if ((bVar101 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x154) = PF_PART1(auVar70,0);
          }
          if ((bVar116 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x155) = PF_PART1(auVar70,1);
          }
          if ((bVar118 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x156) = PF_PART1(auVar70,2);
          }
          if ((bVar120 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x157) = PF_PART1(auVar70,3);
          }
          uVar100 = PF_PART8(auVar95, 8);
          uVar53 = PF_PART8(auVar70, 8);
          if ((bVar122 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x158) = PF_PART1(auVar70,4);
          }
          if (((ushort)((uint6)uVar81 >> 0x28) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x159) = PF_PART1(auVar70,5);
          }
          if ((bVar124 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x15a) = PF_PART1(auVar70,6);
          }
          if (((ushort)((ulong)PF_PART8(auVar95, 0) >> 0x38) & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x15b) = PF_PART1(auVar70,7);
          }
          if ((uVar100 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x15c) = (char)(uVar53 & 0xffff);
          }
          if (((uVar100 & 0xffff) >> 8 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x15d) = (char)((uVar53 & 0xffff) >> 8);
          }
          uVar52 = uVar53 >> 0x10 & 0xffff;
          if ((uVar100 >> 0x10 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x15e) = (char)uVar52;
          }
          if (((uVar100 >> 0x10 & 0xffff) >> 8 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x15f) = (char)(uVar52 >> 8);
          }
          uVar53 = uVar53 >> 0x20 & 0xffff;
          if ((uVar100 >> 0x20 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x160) = (char)uVar53;
          }
          if (((uVar100 >> 0x20 & 0xffff) >> 8 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x161) = (char)(uVar53 >> 8);
          }
          if ((uVar100 >> 0x30 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x162) = PF_PART1(auVar70,0xe);
          }
          if ((uVar100 >> 0x38 & 1) != 0) {
            *(char *)((long)param_2 + uVar50 + 0x163) = PF_PART1(auVar70,0xf);
          }
          uVar50 = uVar50 + 0x20;
        } while (uVar48 != uVar50);
        if ((uVar54 & 0x60) != uVar54) {
          uVar50 = uVar48;
          if ((uVar55 & 0x18) == 0) goto LAB_02097b61;
          goto LAB_02097920;
        }
      }
    }
    do {
      uVar48 = (ulong)*(byte *)((long)param_2 + uVar55 + 0x143);
      if ((0x2e < uVar48) || ((0x500100000000U >> (uVar48 & 0x3f) & 1) == 0)) goto LAB_02097aed;
      uVar55 = uVar55 - 1;
    } while (uVar55 != 0);
    uVar55 = 0;
LAB_02097aed:
    *(char *)((long)piVar1 + uVar55) = '\0';
    if ((char)*piVar1 != '\0') {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
    }
  }
  piVar1 = param_2 + 0x69;
  *(undefined1 *)(param_2 + 0x69) = 0;
  uVar47 = recovered_2005cd0();
  auVar106 = (uint128)PF_PART16(str_020a23a0, 16);
  auVar110 = (uint128)PF_PART16(str_020a23a0, 0);
  bVar44 = bRam00000000020a239f;
  bVar43 = bRam00000000020a239e;
  bVar42 = bRam00000000020a239d;
  bVar41 = bRam00000000020a239c;
  bVar40 = bRam00000000020a239b;
  bVar39 = bRam00000000020a239a;
  bVar38 = bRam00000000020a2399;
  bVar37 = bRam00000000020a2398;
  bVar36 = bRam00000000020a2397;
  bVar35 = bRam00000000020a2396;
  bVar34 = bRam00000000020a2395;
  bVar33 = bRam00000000020a2394;
  bVar32 = bRam00000000020a2393;
  bVar31 = bRam00000000020a2392;
  bVar30 = bRam00000000020a2391;
  bVar29 = DAT_020a2390;
  cVar46 = cRam00000000020a238f;
  cVar78 = cRam00000000020a238e;
  cVar77 = cRam00000000020a238d;
  cVar76 = cRam00000000020a238c;
  cVar75 = cRam00000000020a238b;
  cVar74 = cRam00000000020a238a;
  cVar72 = cRam00000000020a2389;
  cVar7 = cRam00000000020a2388;
  cVar28 = cRam00000000020a2387;
  cVar73 = cRam00000000020a2386;
  cVar71 = cRam00000000020a2385;
  cVar8 = cRam00000000020a2384;
  cVar27 = cRam00000000020a2383;
  cVar26 = cRam00000000020a2382;
  cVar25 = cRam00000000020a2381;
  cVar49 = DAT_020a2380;
  if ((int)uVar47 < 1) goto LAB_0209804c;
  uVar55 = 0xbf;
  if (uVar47 < 0xbf) {
    uVar55 = (ulong)uVar47;
  }
  if (uVar47 < 8) {
    uVar48 = 0;
LAB_02098141:
    do {
      if (*(char *)((long)piVar1 + uVar48) == '\0') {
        cVar49 = ',';
LAB_02098132:
        *(char *)((long)piVar1 + uVar48) = cVar49;
      }
      else {
        cVar49 = '.';
        if ((byte)(*(char *)((long)piVar1 + uVar48) + 0x81U) < 0xa1) goto LAB_02098132;
      }
      uVar48 = uVar48 + 1;
    } while (uVar55 != uVar48);
  }
  else {
    uVar54 = (uint)uVar55;
    if (uVar47 < 0x20) {
      uVar50 = 0;
LAB_02097e70:
      auVar106 = _str_020a2330;
      auVar110 = _str_020a2320;
      bVar128 = bRam00000000020a231f;
      bVar126 = bRam00000000020a231e;
      bVar124 = bRam00000000020a231d;
      bVar122 = bRam00000000020a231c;
      bVar120 = bRam00000000020a231b;
      bVar118 = bRam00000000020a231a;
      bVar116 = bRam00000000020a2319;
      bVar101 = bRam00000000020a2318;
      bVar44 = bRam00000000020a2317;
      bVar43 = bRam00000000020a2316;
      bVar42 = bRam00000000020a2315;
      bVar41 = bRam00000000020a2314;
      bVar40 = bRam00000000020a2313;
      bVar39 = bRam00000000020a2312;
      bVar38 = bRam00000000020a2311;
      bVar37 = DAT_020a2310;
      bVar36 = bRam00000000020a230f;
      bVar35 = bRam00000000020a230e;
      bVar34 = bRam00000000020a230d;
      bVar33 = bRam00000000020a230c;
      bVar32 = bRam00000000020a230b;
      bVar31 = bRam00000000020a230a;
      bVar30 = bRam00000000020a2309;
      bVar29 = bRam00000000020a2308;
      cVar28 = cRam00000000020a2307;
      cVar73 = cRam00000000020a2306;
      cVar71 = cRam00000000020a2305;
      cVar8 = cRam00000000020a2304;
      cVar27 = cRam00000000020a2303;
      cVar26 = cRam00000000020a2302;
      cVar25 = cRam00000000020a2301;
      cVar49 = DAT_020a2300;
      uVar48 = (ulong)(uVar54 & 0xf8);
      PF_PART4(auVar59, 8) = 0xffffffff;
      PF_PART8(auVar59, 0) = 0xffffffffffffffff;
      PF_PART4(auVar59, 12) = 0xffffffff;
      do {
        uVar5 = *(undefined8 *)((long)piVar1 + uVar50);
        PF_PART1(auVar69,0) = -((char)uVar5 == '\0');
        cVar72 = (char)((ulong)uVar5 >> 8);
        PF_PART1(auVar69,1) = -(cVar72 == '\0');
        cVar74 = (char)((ulong)uVar5 >> 0x10);
        PF_PART1(auVar69,2) = -(cVar74 == '\0');
        cVar75 = (char)((ulong)uVar5 >> 0x18);
        PF_PART1(auVar69,3) = -(cVar75 == '\0');
        cVar76 = (char)((ulong)uVar5 >> 0x20);
        PF_PART1(auVar69,4) = -(cVar76 == '\0');
        cVar77 = (char)((ulong)uVar5 >> 0x28);
        PF_PART1(auVar69,5) = -(cVar77 == '\0');
        cVar78 = (char)((ulong)uVar5 >> 0x30);
        cVar7 = (char)((ulong)uVar5 >> 0x38);
        PF_PART1(auVar69,6) = -(cVar78 == '\0');
        PF_PART1(auVar69,7) = -(cVar7 == '\0');
        PF_PART1(auVar69,8) = 0xff;
        PF_PART1(auVar69,9) = 0xff;
        PF_PART1(auVar69,10) = 0xff;
        PF_PART1(auVar69,0xb) = 0xff;
        PF_PART1(auVar69,0xc) = 0xff;
        PF_PART1(auVar69,0xd) = 0xff;
        PF_PART1(auVar69,0xe) = 0xff;
        PF_PART1(auVar69,0xf) = 0xff;
        bVar102 = (char)uVar5 + cVar49;
        bVar117 = cVar72 + cVar25;
        bVar119 = cVar74 + cVar26;
        bVar121 = cVar75 + cVar27;
        bVar123 = cVar76 + cVar8;
        bVar125 = cVar77 + cVar71;
        bVar127 = cVar78 + cVar73;
        bVar129 = cVar7 + cVar28;
        iVar79 = CONCAT13(-((byte)((bVar121 < bVar40) * bVar40 | (bVar121 >= bVar40) * bVar121) ==
                           bVar121),
                          CONCAT12(-((byte)((bVar119 < bVar39) * bVar39 |
                                           (bVar119 >= bVar39) * bVar119) == bVar119),
                                   CONCAT11(-((byte)((bVar117 < bVar38) * bVar38 |
                                                    (bVar117 >= bVar38) * bVar117) == bVar117),
                                            -((byte)((bVar102 < bVar37) * bVar37 |
                                                    (bVar102 >= bVar37) * bVar102) == bVar102))));
        uVar80 = CONCAT14(-((byte)((bVar123 < bVar41) * bVar41 | (bVar123 >= bVar41) * bVar123) ==
                           bVar123),iVar79);
        PF_PART8(auVar89, 0) =
             CONCAT17(-((byte)((bVar129 < bVar44) * bVar44 | (bVar129 >= bVar44) * bVar129) ==
                       bVar129),
                      CONCAT16(-((byte)((bVar127 < bVar43) * bVar43 | (bVar127 >= bVar43) * bVar127)
                                == bVar127),
                               CONCAT15(-((byte)((bVar125 < bVar42) * bVar42 |
                                                (bVar125 >= bVar42) * bVar125) == bVar125),uVar80)))
        ;
        auVar89[8] = -((byte)((bVar29 < bVar101) * bVar101 | (bVar29 >= bVar101) * bVar29) == bVar29
                      );
        auVar89[9] = -((byte)((bVar30 < bVar116) * bVar116 | (bVar30 >= bVar116) * bVar30) == bVar30
                      );
        auVar89[10] = -((byte)((bVar31 < bVar118) * bVar118 | (bVar31 >= bVar118) * bVar31) ==
                       bVar31);
        auVar89[0xb] = -((byte)((bVar32 < bVar120) * bVar120 | (bVar32 >= bVar120) * bVar32) ==
                        bVar32);
        PF_PART1(auVar99,0xc) = -((byte)((bVar33 < bVar122) * bVar122 | (bVar33 >= bVar122) * bVar33) ==
                        bVar33);
        PF_PART12(auVar99, 0) = auVar89;
        PF_PART1(auVar99,0xd) = -((byte)((bVar34 < bVar124) * bVar124 | (bVar34 >= bVar124) * bVar34) ==
                        bVar34);
        PF_PART1(auVar99,0xe) = -((byte)((bVar35 < bVar126) * bVar126 | (bVar35 >= bVar126) * bVar35) ==
                        bVar35);
        PF_PART1(auVar99,0xf) = -((byte)((bVar36 < bVar128) * bVar128 | (bVar36 >= bVar128) * bVar36) ==
                        bVar36);
        auVar70 = ~auVar69 & (auVar99 ^ auVar59);
        auVar70 = auVar70 & auVar106 | ~auVar70 & auVar110;
        local_48 = SUB161(auVar99 ^ auVar59,0);
        if ((local_48 & 1) != 0) {
          *(char *)((long)piVar1 + uVar50) = PF_PART1(auVar70,0);
        }
        PF_PART4(auVar113, 0) = iVar79 << 8;
        PF_PART4(auVar115, 4) = (int)(PF_PART8(auVar89, 0) >> 0x20);
        PF_PART4(auVar113, 4) = PF_PART4(auVar115, 4) << 8;
        PF_PART4(auVar113, 8) = PF_PART4(auVar89, 8) << 8;
        PF_PART4(auVar113, 12) = PF_PART4(auVar99, 12) << 8;
        if ((~PF_PART4(auVar113, 0) >> 0x10 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a5) = PF_PART1(auVar70,1);
        }
        auVar114 = pshuflw(auVar113,auVar99,0x55);
        if (((PF_PART2(auVar114, 4) ^ 0xffff) & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a6) = PF_PART1(auVar70,2);
        }
        if ((((ushort)((uint5)uVar80 >> 0x18) ^ 0xffff) & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a7) = PF_PART1(auVar70,3);
        }
        PF_PART4(auVar115, 0) = PF_PART4(auVar115, 4);
        PF_PART4(auVar115, 8) = PF_PART4(auVar115, 4);
        PF_PART4(auVar115, 12) = PF_PART4(auVar115, 4);
        uVar53 = PF_PART8(auVar59, 8);
        if (((PF_PART8(auVar115, 8) ^ uVar53) & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a8) = PF_PART1(auVar70,4);
        }
        if (((PF_PART8(auVar89, 0) >> 0x18 ^ uVar53) & 0x10000) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a9) = PF_PART1(auVar70,5);
        }
        if (((PF_PART8(auVar89, 0) >> 0x10 ^ uVar53) & 0x100000000) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1aa) = PF_PART1(auVar70,6);
        }
        if (((PF_PART8(auVar89, 0) >> 8 ^ uVar53) & 0x1000000000000) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1ab) = PF_PART1(auVar70,7);
        }
        uVar50 = uVar50 + 8;
      } while (uVar48 != uVar50);
      if ((uVar54 & 0xf8) != uVar54) goto LAB_02098141;
    }
    else {
      uVar48 = (ulong)(uVar54 & 0xe0);
      uVar50 = 0;
      do {
        pcVar2 = (char *)((long)piVar1 + uVar50);
        pcVar3 = (char *)((long)param_2 + uVar50 + 0x1b4);
        cVar9 = *pcVar3;
        cVar10 = pcVar3[1];
        cVar11 = pcVar3[2];
        cVar12 = pcVar3[3];
        cVar13 = pcVar3[4];
        cVar14 = pcVar3[5];
        cVar15 = pcVar3[6];
        cVar16 = pcVar3[7];
        cVar17 = pcVar3[8];
        cVar18 = pcVar3[9];
        cVar19 = pcVar3[10];
        cVar20 = pcVar3[0xb];
        cVar21 = pcVar3[0xc];
        cVar22 = pcVar3[0xd];
        cVar23 = pcVar3[0xe];
        cVar24 = pcVar3[0xf];
        PF_PART1(auVar67,0) = -(*pcVar2 == '\0');
        PF_PART1(auVar67,1) = -(pcVar2[1] == '\0');
        PF_PART1(auVar67,2) = -(pcVar2[2] == '\0');
        PF_PART1(auVar67,3) = -(pcVar2[3] == '\0');
        PF_PART1(auVar67,4) = -(pcVar2[4] == '\0');
        PF_PART1(auVar67,5) = -(pcVar2[5] == '\0');
        PF_PART1(auVar67,6) = -(pcVar2[6] == '\0');
        PF_PART1(auVar67,7) = -(pcVar2[7] == '\0');
        PF_PART1(auVar67,8) = -(pcVar2[8] == '\0');
        PF_PART1(auVar67,9) = -(pcVar2[9] == '\0');
        PF_PART1(auVar67,10) = -(pcVar2[10] == '\0');
        PF_PART1(auVar67,0xb) = -(pcVar2[0xb] == '\0');
        PF_PART1(auVar67,0xc) = -(pcVar2[0xc] == '\0');
        PF_PART1(auVar67,0xd) = -(pcVar2[0xd] == '\0');
        PF_PART1(auVar67,0xe) = -(pcVar2[0xe] == '\0');
        PF_PART1(auVar67,0xf) = -(pcVar2[0xf] == '\0');
        bVar101 = *pcVar2 + cVar49;
        bVar116 = pcVar2[1] + cVar25;
        bVar118 = pcVar2[2] + cVar26;
        bVar120 = pcVar2[3] + cVar27;
        bVar122 = pcVar2[4] + cVar8;
        bVar124 = pcVar2[5] + cVar71;
        bVar126 = pcVar2[6] + cVar73;
        bVar128 = pcVar2[7] + cVar28;
        bVar102 = pcVar2[8] + cVar7;
        bVar117 = pcVar2[9] + cVar72;
        bVar119 = pcVar2[10] + cVar74;
        bVar121 = pcVar2[0xb] + cVar75;
        bVar123 = pcVar2[0xc] + cVar76;
        bVar125 = pcVar2[0xd] + cVar77;
        bVar127 = pcVar2[0xe] + cVar78;
        bVar129 = pcVar2[0xf] + cVar46;
        bVar101 = -((byte)((bVar29 < bVar101) * bVar29 | (bVar29 >= bVar101) * bVar101) == bVar101);
        bVar116 = -((byte)((bVar30 < bVar116) * bVar30 | (bVar30 >= bVar116) * bVar116) == bVar116);
        bVar118 = -((byte)((bVar31 < bVar118) * bVar31 | (bVar31 >= bVar118) * bVar118) == bVar118);
        bVar120 = -((byte)((bVar32 < bVar120) * bVar32 | (bVar32 >= bVar120) * bVar120) == bVar120);
        bVar122 = -((byte)((bVar33 < bVar122) * bVar33 | (bVar33 >= bVar122) * bVar122) == bVar122);
        uVar81 = CONCAT15(-((byte)((bVar34 < bVar124) * bVar34 | (bVar34 >= bVar124) * bVar124) ==
                           bVar124),
                          CONCAT14(bVar122,CONCAT13(bVar120,CONCAT12(bVar118,CONCAT11(bVar116,
                                                  bVar101)))));
        bVar124 = -((byte)((bVar35 < bVar126) * bVar35 | (bVar35 >= bVar126) * bVar126) == bVar126);
        PF_PART8(auVar97, 0) =
             CONCAT17(-((byte)((bVar36 < bVar128) * bVar36 | (bVar36 >= bVar128) * bVar128) ==
                       bVar128),CONCAT16(bVar124,uVar81));
        PF_PART1(auVar97,8) = -((byte)((bVar37 < bVar102) * bVar37 | (bVar37 >= bVar102) * bVar102) ==
                      bVar102);
        PF_PART1(auVar97,9) = -((byte)((bVar38 < bVar117) * bVar38 | (bVar38 >= bVar117) * bVar117) ==
                      bVar117);
        PF_PART1(auVar97,10) = -((byte)((bVar39 < bVar119) * bVar39 | (bVar39 >= bVar119) * bVar119) ==
                       bVar119);
        PF_PART1(auVar97,0xb) = -((byte)((bVar40 < bVar121) * bVar40 | (bVar40 >= bVar121) * bVar121) ==
                        bVar121);
        PF_PART1(auVar97,0xc) = -((byte)((bVar41 < bVar123) * bVar41 | (bVar41 >= bVar123) * bVar123) ==
                        bVar123);
        PF_PART1(auVar97,0xd) = -((byte)((bVar42 < bVar125) * bVar42 | (bVar42 >= bVar125) * bVar125) ==
                        bVar125);
        PF_PART1(auVar97,0xe) = -((byte)((bVar43 < bVar127) * bVar43 | (bVar43 >= bVar127) * bVar127) ==
                        bVar127);
        PF_PART1(auVar97,0xf) = -((byte)((bVar44 < bVar129) * bVar44 | (bVar44 >= bVar129) * bVar129) ==
                        bVar129);
        auVar70 = ~auVar67 & auVar97 & auVar106 | ~(~auVar67 & auVar97) & auVar110;
        if ((bVar101 & 1) != 0) {
          *(char *)((long)piVar1 + uVar50) = PF_PART1(auVar70,0);
        }
        if ((bVar116 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a5) = PF_PART1(auVar70,1);
        }
        if ((bVar118 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a6) = PF_PART1(auVar70,2);
        }
        if ((bVar120 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a7) = PF_PART1(auVar70,3);
        }
        uVar100 = PF_PART8(auVar97, 8);
        uVar53 = PF_PART8(auVar70, 8);
        if ((bVar122 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a8) = PF_PART1(auVar70,4);
        }
        if (((ushort)((uint6)uVar81 >> 0x28) & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1a9) = PF_PART1(auVar70,5);
        }
        if ((bVar124 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1aa) = PF_PART1(auVar70,6);
        }
        if (((ushort)((ulong)PF_PART8(auVar97, 0) >> 0x38) & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1ab) = PF_PART1(auVar70,7);
        }
        if ((uVar100 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1ac) = (char)(uVar53 & 0xffff);
        }
        if (((uVar100 & 0xffff) >> 8 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1ad) = (char)((uVar53 & 0xffff) >> 8);
        }
        uVar52 = uVar53 >> 0x10 & 0xffff;
        if ((uVar100 >> 0x10 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1ae) = (char)uVar52;
        }
        if (((uVar100 >> 0x10 & 0xffff) >> 8 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1af) = (char)(uVar52 >> 8);
        }
        uVar53 = uVar53 >> 0x20 & 0xffff;
        if ((uVar100 >> 0x20 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b0) = (char)uVar53;
        }
        if (((uVar100 >> 0x20 & 0xffff) >> 8 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b1) = (char)(uVar53 >> 8);
        }
        if ((uVar100 >> 0x30 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b2) = PF_PART1(auVar70,0xe);
        }
        if ((uVar100 >> 0x38 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b3) = PF_PART1(auVar70,0xf);
        }
        PF_PART1(auVar68,0) = -(cVar9 == '\0');
        PF_PART1(auVar68,1) = -(cVar10 == '\0');
        PF_PART1(auVar68,2) = -(cVar11 == '\0');
        PF_PART1(auVar68,3) = -(cVar12 == '\0');
        PF_PART1(auVar68,4) = -(cVar13 == '\0');
        PF_PART1(auVar68,5) = -(cVar14 == '\0');
        PF_PART1(auVar68,6) = -(cVar15 == '\0');
        PF_PART1(auVar68,7) = -(cVar16 == '\0');
        PF_PART1(auVar68,8) = -(cVar17 == '\0');
        PF_PART1(auVar68,9) = -(cVar18 == '\0');
        PF_PART1(auVar68,10) = -(cVar19 == '\0');
        PF_PART1(auVar68,0xb) = -(cVar20 == '\0');
        PF_PART1(auVar68,0xc) = -(cVar21 == '\0');
        PF_PART1(auVar68,0xd) = -(cVar22 == '\0');
        PF_PART1(auVar68,0xe) = -(cVar23 == '\0');
        PF_PART1(auVar68,0xf) = -(cVar24 == '\0');
        bVar101 = cVar9 + cVar49;
        bVar116 = cVar10 + cVar25;
        bVar118 = cVar11 + cVar26;
        bVar120 = cVar12 + cVar27;
        bVar122 = cVar13 + cVar8;
        bVar124 = cVar14 + cVar71;
        bVar126 = cVar15 + cVar73;
        bVar128 = cVar16 + cVar28;
        bVar102 = cVar17 + cVar7;
        bVar117 = cVar18 + cVar72;
        bVar119 = cVar19 + cVar74;
        bVar121 = cVar20 + cVar75;
        bVar123 = cVar21 + cVar76;
        bVar125 = cVar22 + cVar77;
        bVar127 = cVar23 + cVar78;
        bVar129 = cVar24 + cVar46;
        bVar101 = -((byte)((bVar29 < bVar101) * bVar29 | (bVar29 >= bVar101) * bVar101) == bVar101);
        bVar116 = -((byte)((bVar30 < bVar116) * bVar30 | (bVar30 >= bVar116) * bVar116) == bVar116);
        bVar118 = -((byte)((bVar31 < bVar118) * bVar31 | (bVar31 >= bVar118) * bVar118) == bVar118);
        bVar120 = -((byte)((bVar32 < bVar120) * bVar32 | (bVar32 >= bVar120) * bVar120) == bVar120);
        bVar122 = -((byte)((bVar33 < bVar122) * bVar33 | (bVar33 >= bVar122) * bVar122) == bVar122);
        uVar81 = CONCAT15(-((byte)((bVar34 < bVar124) * bVar34 | (bVar34 >= bVar124) * bVar124) ==
                           bVar124),
                          CONCAT14(bVar122,CONCAT13(bVar120,CONCAT12(bVar118,CONCAT11(bVar116,
                                                  bVar101)))));
        bVar124 = -((byte)((bVar35 < bVar126) * bVar35 | (bVar35 >= bVar126) * bVar126) == bVar126);
        PF_PART8(auVar98, 0) =
             CONCAT17(-((byte)((bVar36 < bVar128) * bVar36 | (bVar36 >= bVar128) * bVar128) ==
                       bVar128),CONCAT16(bVar124,uVar81));
        PF_PART1(auVar98,8) = -((byte)((bVar37 < bVar102) * bVar37 | (bVar37 >= bVar102) * bVar102) ==
                      bVar102);
        PF_PART1(auVar98,9) = -((byte)((bVar38 < bVar117) * bVar38 | (bVar38 >= bVar117) * bVar117) ==
                      bVar117);
        PF_PART1(auVar98,10) = -((byte)((bVar39 < bVar119) * bVar39 | (bVar39 >= bVar119) * bVar119) ==
                       bVar119);
        PF_PART1(auVar98,0xb) = -((byte)((bVar40 < bVar121) * bVar40 | (bVar40 >= bVar121) * bVar121) ==
                        bVar121);
        PF_PART1(auVar98,0xc) = -((byte)((bVar41 < bVar123) * bVar41 | (bVar41 >= bVar123) * bVar123) ==
                        bVar123);
        PF_PART1(auVar98,0xd) = -((byte)((bVar42 < bVar125) * bVar42 | (bVar42 >= bVar125) * bVar125) ==
                        bVar125);
        PF_PART1(auVar98,0xe) = -((byte)((bVar43 < bVar127) * bVar43 | (bVar43 >= bVar127) * bVar127) ==
                        bVar127);
        PF_PART1(auVar98,0xf) = -((byte)((bVar44 < bVar129) * bVar44 | (bVar44 >= bVar129) * bVar129) ==
                        bVar129);
        auVar70 = ~auVar68 & auVar98 & auVar106 | ~(~auVar68 & auVar98) & auVar110;
        if ((bVar101 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b4) = PF_PART1(auVar70,0);
        }
        if ((bVar116 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b5) = PF_PART1(auVar70,1);
        }
        if ((bVar118 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b6) = PF_PART1(auVar70,2);
        }
        if ((bVar120 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b7) = PF_PART1(auVar70,3);
        }
        uVar100 = PF_PART8(auVar98, 8);
        uVar53 = PF_PART8(auVar70, 8);
        if ((bVar122 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b8) = PF_PART1(auVar70,4);
        }
        if (((ushort)((uint6)uVar81 >> 0x28) & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1b9) = PF_PART1(auVar70,5);
        }
        if ((bVar124 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1ba) = PF_PART1(auVar70,6);
        }
        if (((ushort)((ulong)PF_PART8(auVar98, 0) >> 0x38) & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1bb) = PF_PART1(auVar70,7);
        }
        if ((uVar100 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1bc) = (char)(uVar53 & 0xffff);
        }
        if (((uVar100 & 0xffff) >> 8 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1bd) = (char)((uVar53 & 0xffff) >> 8);
        }
        uVar52 = uVar53 >> 0x10 & 0xffff;
        if ((uVar100 >> 0x10 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1be) = (char)uVar52;
        }
        if (((uVar100 >> 0x10 & 0xffff) >> 8 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1bf) = (char)(uVar52 >> 8);
        }
        uVar53 = uVar53 >> 0x20 & 0xffff;
        if ((uVar100 >> 0x20 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1c0) = (char)uVar53;
        }
        if (((uVar100 >> 0x20 & 0xffff) >> 8 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1c1) = (char)(uVar53 >> 8);
        }
        if ((uVar100 >> 0x30 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1c2) = PF_PART1(auVar70,0xe);
        }
        if ((uVar100 >> 0x38 & 1) != 0) {
          *(char *)((long)param_2 + uVar50 + 0x1c3) = PF_PART1(auVar70,0xf);
        }
        uVar50 = uVar50 + 0x20;
      } while (uVar48 != uVar50);
      if ((uVar54 & 0xe0) != uVar54) {
        uVar50 = uVar48;
        if ((uVar55 & 0x18) == 0) goto LAB_02098141;
        goto LAB_02097e70;
      }
    }
  }
  do {
    uVar48 = (ulong)*(byte *)((long)param_2 + uVar55 + 0x1a3);
    if ((0x2e < uVar48) || ((0x500100000000U >> (uVar48 & 0x3f) & 1) == 0)) goto LAB_0209803d;
    uVar55 = uVar55 - 1;
  } while (uVar55 != 0);
  uVar55 = 0;
LAB_0209803d:
  *(char *)((long)piVar1 + uVar55) = '\0';
  if ((char)*piVar1 != '\0') {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 8;
  }
LAB_0209804c:
  uVar47 = recovered_2005cd0();
  if (uVar47 == 4) {
    param_2[5] = 0;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
  }
  uVar47 = recovered_2005cd0();
  if (uVar47 == 4) {
    param_2[6] = 0;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
  }
  uVar47 = recovered_2005cd0();
  if (uVar47 == 4) {
    param_2[7] = 0;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
  }
  uVar47 = recovered_2005cd0();
  if (uVar47 == 4) {
    param_2[8] = 0;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
  }
  return 1;
}
