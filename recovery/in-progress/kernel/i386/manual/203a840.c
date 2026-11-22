/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c6602 (*(uint8_t *)(0x20c6602U))
#define DAT_020c6603 (*(uint8_t *)(0x20c6603U))
#define DAT_020c6604 (*(uint8_t *)(0x20c6604U))
#define DAT_020c6605 (*(uint8_t *)(0x20c6605U))
#define DAT_020c6606 (*(uint8_t *)(0x20c6606U))
#define DAT_020c6607 (*(uint8_t *)(0x20c6607U))
#define DAT_020c69e5 (*(uint8_t *)(0x20c69e5U))
#define DAT_020ca0c6 (*(uint8_t *)(0x20ca0c6U))
#define DAT_020cc321 (*(uint8_t *)(0x20cc321U))
#define DAT_020d12a8 (*(uint8_t *)(0x20d12a8U))
#define DAT_020d5c23 (*(uint8_t *)(0x20d5c23U))
#define DAT_020d5cbd (*(uint8_t *)(0x20d5cbdU))
#define DAT_020d6275 (*(uint8_t *)(0x20d6275U))
#define DAT_020de150 (*(uint32_t volatile *)(0x20de150U))
#define DAT_020de164 (*(uint32_t volatile *)(0x20de164U))
#define DAT_020de168 (*(uint32_t volatile *)(0x20de168U))
#define DAT_020de500 (*(uint32_t volatile *)(0x20de500U))
#define DAT_020de504 (*(uint32_t volatile *)(0x20de504U))
#define DAT_020de508 (*(uint32_t volatile *)(0x20de508U))
#define DAT_020de50c (*(uint32_t volatile *)(0x20de50cU))
#define DAT_020de510 (*(uint32_t volatile *)(0x20de510U))
#define DAT_021408ea (*(uint8_t volatile *)(0x21408eaU))
#define DAT_021408ec (*(uint32_t volatile *)(0x21408ecU))
#define DAT_021408f0 (*(uint32_t volatile *)(0x21408f0U))
#define DAT_02140934 (*(uint8_t volatile *)(0x2140934U))
#define DAT_02140948 (*(uint32_t volatile *)(0x2140948U))
#define DAT_0214094c (*(uint32_t volatile *)(0x214094cU))
#define DAT_02148008 (*(uint32_t volatile *)(0x2148008U))
#define DAT_0214800c (*(uint32_t volatile *)(0x214800cU))
#define DAT_02148010 (*(uint8_t volatile *)(0x2148010U))
#define DAT_02148014 (*(uint32_t volatile *)(0x2148014U))
#define DAT_02148018 (*(uint32_t volatile *)(0x2148018U))
#define DAT_02148040 (*(uint8_t volatile *)(0x2148040U))
#define DAT_02148054 (*(uint32_t volatile *)(0x2148054U))
#define DAT_02148058 (*(uint32_t volatile *)(0x2148058U))
#define DAT_0214805c (*(uint32_t volatile *)(0x214805cU))
#define DAT_02148060 (*(uint8_t volatile *)(0x2148060U))
#define DAT_02148061 (*(uint8_t volatile *)(0x2148061U))
#define DAT_02148062 (*(uint8_t volatile *)(0x2148062U))
#define DAT_02148063 (*(uint8_t volatile *)(0x2148063U))
#define DAT_02148064 (*(uint8_t volatile *)(0x2148064U))
#define DAT_02148065 (*(uint8_t volatile *)(0x2148065U))
#define DAT_02148090 (*(uint8_t volatile *)(0x2148090U))
#define DAT_02148204 (*(uint32_t volatile *)(0x2148204U))
#define DAT_02148208 (*(uint32_t volatile *)(0x2148208U))
#define DAT_0214820c (*(uint32_t volatile *)(0x214820cU))
#define DAT_02148210 (*(uint32_t volatile *)(0x2148210U))
#define DAT_02148214 (*(uint32_t volatile *)(0x2148214U))
#define DAT_02148218 (*(uint32_t volatile *)(0x2148218U))
#define DAT_0214821c (*(uint32_t volatile *)(0x214821cU))
#define DAT_02148220 (*(uint32_t volatile *)(0x2148220U))
#define DAT_02148224 (*(uint32_t volatile *)(0x2148224U))
#define DAT_02148228 (*(uint32_t volatile *)(0x2148228U))
#define DAT_0214822c (*(uint8_t volatile *)(0x214822cU))
#define DAT_02148238 (*(uint32_t volatile *)(0x2148238U))
#define DAT_0214823c (*(uint32_t volatile *)(0x214823cU))
#define DAT_02148240 (*(uint32_t volatile *)(0x2148240U))
#define DAT_0214aff4 (*(uint32_t volatile *)(0x214aff4U))
#define DAT_0214b0e0 (*(uint8_t volatile *)(0x214b0e0U))
#define DAT_0214bc38 (*(uint8_t volatile *)(0x214bc38U))
#define DAT_0214bc3c (*(uint32_t volatile *)(0x214bc3cU))
#define DAT_0223b700 (*(uint32_t volatile *)(0x223b700U))
#define DAT_0223b704 (*(uint32_t volatile *)(0x223b704U))
#define DAT_0223c72c (*(uint32_t volatile *)(0x223c72cU))
#define DAT_0223c778 (*(uint8_t volatile *)(0x223c778U))
#define DAT_0223daf0 (*(uint32_t volatile *)(0x223daf0U))
#define DAT_0223daf4 (*(uint32_t volatile *)(0x223daf4U))
#define DAT_0223daf8 (*(uint32_t volatile *)(0x223daf8U))
#define DAT_0223dafc (*(uint8_t volatile *)(0x223dafcU))
#define DAT_0223dd24 (*(uint32_t volatile *)(0x223dd24U))
#define DAT_0223dd28 (*(uint32_t volatile *)(0x223dd28U))
#define DAT_0224522c (*(uint32_t volatile *)(0x224522cU))
#define DAT_02245230 (*(uint32_t volatile *)(0x2245230U))
#define DAT_0224b2d8 (*(uint32_t volatile *)(0x224b2d8U))
#define DAT_0224b324 (*(uint8_t volatile *)(0x224b324U))
#define DAT_0224c69c (*(uint8_t volatile *)(0x224c69cU))
#define DAT_0224c6b4 (*(uint8_t volatile *)(0x224c6b4U))
#define PTR_DAT_020d9c34 (*(uint8_t * *)(0x20d9c34U))
#define PTR_str_020c5884_020de16c (*(char * volatile *)(0x20de16cU))
#define PTR_str_020c5884_020de170 (*(char * volatile *)(0x20de170U))
#define PTR_str_020c5bb2_020d9cc4 (*(char * *)(0x20d9cc4U))
#define PTR_str_020ccf0d_020d9c94 (*(char * *)(0x20d9c94U))
#define str_020c5884 (*(char (*)[1])(0x20c5884U))
#define str_020c588b (*(char (*)[1])(0x20c588bU))
#define str_020c5894 (*(char (*)[1])(0x20c5894U))
#define str_020c589c (*(char (*)[1])(0x20c589cU))
#define str_020c58ab (*(char (*)[1])(0x20c58abU))
#define str_020c5b64 (*(char (*)[1])(0x20c5b64U))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020c6aa9 (*(char (*)[1])(0x20c6aa9U))
#define str_020c70d7 (*(char (*)[1])(0x20c70d7U))
#define str_020ca0fd (*(char (*)[1])(0x20ca0fdU))
#define str_020ca1b9 (*(char (*)[1])(0x20ca1b9U))
#define str_020ca20c (*(char (*)[1])(0x20ca20cU))
#define str_020ca220 (*(char (*)[1])(0x20ca220U))
#define str_020ca2bd (*(char (*)[1])(0x20ca2bdU))
#define str_020cb54c (*(char (*)[1])(0x20cb54cU))
#define str_020cbcdd (*(char (*)[1])(0x20cbcddU))
#define str_020cbd17 (*(char (*)[1])(0x20cbd17U))
#define str_020cc1b0 (*(char (*)[1])(0x20cc1b0U))
#define str_020d2dfd (*(char (*)[1])(0x20d2dfdU))
#define str_020d2e5d (*(char (*)[1])(0x20d2e5dU))
#define str_020d3237 (*(char (*)[1])(0x20d3237U))
#define str_020d33e8 (*(char (*)[1])(0x20d33e8U))
#define str_020d5ad9 (*(char (*)[1])(0x20d5ad9U))
#define str_020d5b74 (*(char (*)[1])(0x20d5b74U))
#define str_020d5b93 (*(char (*)[1])(0x20d5b93U))
#define str_020d5beb (*(char (*)[1])(0x20d5bebU))
#define str_020d5c28 (*(char (*)[1])(0x20d5c28U))
#define str_020d5cc2 (*(char (*)[1])(0x20d5cc2U))
#define str_020d5ccc (*(char (*)[1])(0x20d5cccU))
#define str_020d5d3b (*(char (*)[1])(0x20d5d3bU))
#define str_020d5d8e (*(char (*)[1])(0x20d5d8eU))
#define str_020d5dc8 (*(char (*)[1])(0x20d5dc8U))
#define str_020d5ddd (*(char (*)[1])(0x20d5dddU))
#define str_020d5e04 (*(char (*)[1])(0x20d5e04U))
#define str_020d5e27 (*(char (*)[1])(0x20d5e27U))
#define str_020d5e43 (*(char (*)[1])(0x20d5e43U))
#define str_020d5e60 (*(char (*)[1])(0x20d5e60U))
#define str_020d5e85 (*(char (*)[1])(0x20d5e85U))
#define str_020d5ea6 (*(char (*)[1])(0x20d5ea6U))
#define str_020d5ec1 (*(char (*)[1])(0x20d5ec1U))
#define str_020d5f24 (*(char (*)[1])(0x20d5f24U))
#define str_020d5f2c (*(char (*)[1])(0x20d5f2cU))
#define str_020d5fcb (*(char (*)[1])(0x20d5fcbU))
#define str_020d5fe0 (*(char (*)[1])(0x20d5fe0U))
#define str_020d5ff3 (*(char (*)[1])(0x20d5ff3U))
#define str_020d6081 (*(char (*)[1])(0x20d6081U))
#define str_020d60b4 (*(char (*)[1])(0x20d60b4U))
#define str_020d60bb (*(char (*)[1])(0x20d60bbU))
#define str_020d60c2 (*(char (*)[1])(0x20d60c2U))
#define str_020d644f (*(char (*)[1])(0x20d644fU))
#define str_020d6496 (*(char (*)[1])(0x20d6496U))
#define str_020d64a2 (*(char (*)[1])(0x20d64a2U))
#define str_020d64ae (*(char (*)[1])(0x20d64aeU))
#define str_020d64e0 (*(char (*)[1])(0x20d64e0U))
#define str_020d64eb (*(char (*)[1])(0x20d64ebU))
#define str_020d64fa (*(char (*)[1])(0x20d64faU))
#define local_48a (*(char (*)[96])(frame + 1430))
#define local_42a (*(char (*)[96])(frame + 1526))
#define local_3ca (*(byte (*)[241])(frame + 1622))
#define local_2d9 (*(char (*)[272])(frame + 1863))
#define local_1c9 (*(uchar (*)[241])(frame + 2135))
#define local_d8 (*(char (*)[96])(frame + 2376))
#define local_78 (*(uint *)(frame + 2472))
#define local_74 (*(uint *)(frame + 2476))
#define local_70 (*(uint *)(frame + 2480))
#define local_58 (*(uint *)(frame + 2504))
#define local_54 (*(uint *)(frame + 2508))
#define local_50 (*(uint *)(frame + 2512))
#define local_48 (*(uint *)(frame + 2520))
#define local_44 (*(uint *)(frame + 2524))
#define local_40 (*(uint *)(frame + 2528))
#define local_38 (*(char * *)(frame + 2536))
#define local_34 (*(char * *)(frame + 2540))
#define local_30 (*(char * *)(frame + 2544))
#define local_2c (*(char * *)(frame + 2548))
#define local_28 (*(undefined * *)(frame + 2552))
#define local_24 (*(char * *)(frame + 2556))
#define local_20 (*(uint *)(frame + 2560))
#define local_1c (*(uint * *)(frame + 2564))
#define local_18 (*(uint *)(frame + 2568))
#define local_14 (*(char * *)(frame + 2572))
#define local_a0c (*(char (*)[384])(frame + 20))
#define local_88c (*(uint (*)[8])(frame + 404))
#define local_86c (*(uint *)(frame + 436))


uint recovered_203a840(uchar in_CL,uchar in_DL)

{
  unsigned char frame[2624] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte bVar17;
  uchar uVar18;
  undefined3 extraout_var = 0;
  uint uVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  ulong uVar27;
  ulong uVar28;
  uchar in_CL_00;
  char *vararg2;
  uint *puVar29;
  char cVar30;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint extraout_EDX_02 = 0;
  char *vararg3;
  uint extraout_EDX_03 = 0;
  uint extraout_EDX_04 = 0;
  undefined1 *puVar31;
  uint extraout_EDX_05 = 0;
  uint extraout_EDX_06 = 0;
  uint extraout_EDX_07 = 0;
  uint extraout_EDX_08 = 0;
  int iVar32;
  uint uVar33;
  int iVar34;
  undefined *puVar35;
  undefined1 *puVar36;
  char *pcVar37;
  uint uVar38;
  undefined1 *vararg5;
  ulonglong uVar39;

  iVar34 = DAT_02148018;
  if (iVar34 == 0) {
    bVar17 = recovered_2047710();
    if (bVar17 == 0) {
      return CONCAT31(extraout_var,bVar17);
    }
  }
  local_a0c[0] = '\0';
  DAT_02148014 = 0;
  recovered_206cc70(&DAT_020c5359,0x20d5a84,0x20d5a9d);
  uVar19 = recovered_20046b0();
  if (uVar19 == 0) {
    recovered_206cc70(str_020ca0fd,0x20d60ca,0x20d60d8);
  }
  else {
    recovered_206cc70(str_020ca0fd,0x20d60ca,0x20d6105);
    recovered_20bb7e0(uVar19,0);
  }
  recovered_206cc70(&DAT_020d6275,0x20d627a,0x20d6282);
  pcVar20 = (char *)0x0;
  iVar34 = 0;
  do {
    pcVar37 = (char *)((uint)pcVar20 & 0xff);
    uVar19 = 0;
    local_24 = pcVar20;
    local_14 = pcVar37;
    do {
      local_88c[0] = 0;
      uVar18 = (uchar)uVar19;
      in_CL_00 = (uchar)pcVar37;
      uVar21 = recovered_20bbdd0(in_CL_00,uVar18,'\0');
      uVar22 = extraout_EDX;
      if ((char)uVar21 != '\0') {
        iVar34 = iVar34 + 1;
        recovered_2005080(in_CL_00,uVar18,'\0',0xc,4,local_88c);
        uVar22 = extraout_EDX_00;
        if ((local_88c[0] & 0x800000) != 0) {
          local_18 = uVar19 & 0xff;
          uVar22 = recovered_20bbdd0(in_CL_00,uVar18,'\x01');
          uVar21 = recovered_20bbdd0(in_CL_00,(uchar)local_18,'\x02');
          local_1c = (uint *)(uVar21 & 0xff);
          uVar18 = (uchar)local_18;
          uVar21 = recovered_20bbdd0((uchar)local_14,uVar18,'\x03');
          local_1c = (uint *)((uVar21 & 0xff) + (int)local_1c + iVar34 + (uVar22 & 0xff));
          local_20 = recovered_20bbdd0((uchar)local_14,uVar18,'\x04');
          local_20 = local_20 & 0xff;
          uVar22 = recovered_20bbdd0((uchar)local_14,uVar18,'\x05');
          iVar34 = (uVar22 & 0xff) + local_20;
          uVar22 = recovered_20bbdd0((uchar)local_14,uVar18,'\x06');
          iVar34 = (uVar22 & 0xff) + iVar34 + (int)local_1c;
          uVar22 = recovered_20bbdd0((uchar)local_14,(uchar)local_18,'\a');
          iVar34 = (uVar22 & 0xff) + iVar34;
          uVar22 = extraout_EDX_01;
          pcVar37 = local_14;
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x20);
    pcVar20 = local_24 + 1;
  } while (pcVar20 != (char *)0x20);
  if (iVar34 == 0) {
    uVar39 = recovered_206cc70(&DAT_020d6275,0x20d627a,0x20d62b9);
    uVar22 = (uint)(uVar39 >> 0x20);
    cVar30 = DAT_02148010;
  }
  else {
    cVar30 = DAT_02148010;
  }
  if (cVar30 == '\x01') {
    local_18 = recovered_2004c50(&DAT_0224c69c,0x140);
    uVar22 = extraout_EDX_02;
    if (local_18 != 0) {
      recovered_206cc70(str_020d644f,0x20d6455,0x20d6464);
      uVar19 = 0;
      pcVar20 = &DAT_0224c6b4;
      do {
        local_14 = pcVar20 + -0x18;
        if (pcVar20[0x14] == '\0') {
          pcVar37 = str_020d64a2;
          uVar22 = uVar19;
        }
        else {
          pcVar37 = str_020d6496;
          uVar22 = *(uint *)(pcVar20 + 0x10);
        }
        pf_varargs_20044f0__4__4_(local_2d9,0x60,pcVar37,(uint)local_14,uVar22);
        pcVar37 = pcVar20;
        if (pcVar20[-0x10] != '\0') {
          pcVar37 = pcVar20 + -0x10;
        }
        pf_varargs_20044f0__4__4_((char *)local_1c9,0x60,str_020cc1b0,(uint)pcVar37,(uint)local_14);
        pcVar37 = &DAT_020ca0c6;
        if (pcVar20[-0x10] != '\0') {
          pcVar37 = pcVar20 + -0x10;
        }
        vararg2 = &DAT_020ca0c6;
        if (*pcVar20 != '\0') {
          vararg2 = pcVar20;
        }
        vararg3 = str_020d64e0;
        if (pcVar20[0x14] != '\0') {
          vararg3 = &DAT_020c5084;
        }
        pf_varargs_20044f0__4__4__4__4__4_
                  ((char *)local_88c,0xc0,str_020d64ae,(uint)local_14,(uint)pcVar37,(uint)vararg2,
                   (uint)vararg3,*(uint *)(pcVar20 + 0x10));
        uVar39 = recovered_206cc70(local_2d9,(int)local_1c9,(int)local_88c);
        uVar22 = (uint)(uVar39 >> 0x20);
        uVar19 = uVar19 + 1;
        pcVar20 = pcVar20 + 0x30;
      } while (local_18 != uVar19);
    }
  }
  recovered_203a180(local_42a,uVar22);
  recovered_2001e00(&local_78,0,0x24);
  bVar17 = recovered_20124e0(&local_78);
  if (bVar17 == 0) {
    uVar19 = recovered_2006e80();
    uVar22 = recovered_2006ea0();
    pf_varargs_20044f0__4__4_(local_a0c,0x180,str_020d5b74,uVar19,uVar22);
    uVar19 = extraout_EDX_04;
  }
  else {
    local_18 = recovered_2006e80();
    local_1c = (uint *)recovered_2006ea0();
    local_20 = local_58;
    cVar30 = DAT_0214bc38;
    if (cVar30 == '\0') {
      recovered_2001e00(local_88c,0,0x24);
      DAT_0214bc3c = 0;
      PTR_str_020c5884_020de16c = str_020c5884;
      PTR_str_020c5884_020de170 = str_020c5884;
      bVar17 = recovered_20124e0(local_88c);
      if (bVar17 != 0) {
        DAT_0214bc3c = local_88c[0];
        pcVar20 = str_020c588b;
        if (((short)local_88c[0] < 0) || (pcVar20 = str_020c5894, 0xf < local_86c)) {
          PTR_str_020c5884_020de16c = pcVar20;
        }
        pcVar20 = str_020c589c;
        if (((~local_88c[0] & 0x400040) == 0) || (pcVar20 = str_020c58ab, (local_88c[0] & 4) != 0))
        {
          PTR_str_020c5884_020de170 = pcVar20;
        }
      }
      DAT_0214bc38 = 1;
    }
    local_14 = str_020c70d7;
    local_24 = str_020c70d7;
    if ((local_78 & 2) != 0) {
      local_24 = &DAT_020c69e5;
    }
    local_38 = str_020c70d7;
    if ((local_78 & 4) != 0) {
      local_38 = &DAT_020c69e5;
    }
    local_34 = str_020c70d7;
    if ((local_78 & 0x200000) != 0) {
      local_34 = &DAT_020c69e5;
    }
    local_30 = str_020c70d7;
    if ((local_78 & 0x400000) != 0) {
      local_30 = &DAT_020c69e5;
    }
    local_2c = str_020c70d7;
    if ((local_78 & 0x40) != 0) {
      local_2c = &DAT_020c69e5;
    }
    pcVar20 = str_020c70d7;
    if ((char)local_78 < '\0') {
      pcVar20 = &DAT_020c69e5;
    }
    pcVar37 = str_020c70d7;
    if ((local_78 & 0x800000) != 0) {
      pcVar37 = &DAT_020c69e5;
    }
    local_28 = PTR_str_020c5884_020de16c;
    puVar35 = PTR_str_020c5884_020de170;
    if ((short)local_78 < 0) {
      local_14 = &DAT_020c69e5;
    }
    pf_varargs_20044f0__4__4__4__4__4__4__4__4__4__4__4__4__4__4__4_
              (local_a0c,0x180,str_020d5ad9,local_18,(uint)local_1c,local_20,(uint)local_28,
               (uint)puVar35,local_70,local_74,(uint)local_24,(uint)local_38,(uint)local_34,
               (uint)local_30,(uint)local_2c,(uint)pcVar20,(uint)pcVar37,(uint)local_14);
    uVar19 = extraout_EDX_03;
  }
  uVar18 = recovered_203a3a0((int *)&local_54,uVar19);
  if (uVar18 == '\0') {
    uVar21 = DAT_020de168;
    uVar22 = DAT_020de164;
    uVar19 = DAT_020de150;
    pf_varargs_20044f0__4__4__4__4__4_
              ((char *)local_88c,0x400,str_020d5beb,(uint)local_42a,uVar19,uVar22,uVar21,
               (uint)local_a0c);
  }
  else {
    uVar21 = DAT_020de168;
    uVar22 = DAT_020de164;
    uVar19 = DAT_020de150;
    pf_varargs_20044f0__4__4__4__4__4__4__4__4__4__4_
              ((char *)local_88c,0x400,str_020d5b93,(uint)local_42a,local_54,local_50,local_48,
               local_44,local_40,uVar19,uVar22,uVar21,(uint)local_a0c);
  }
  recovered_206cc70(&DAT_020d5c23,(int)local_42a,(int)local_88c);
  puVar23 = recovered_2012220();
  local_14 = (char *)puVar23[3];
  puVar23 = recovered_2012220();
  local_18 = puVar23[4];
  puVar23 = recovered_2012220();
  local_1c = (uint *)puVar23[5];
  puVar23 = recovered_2012220();
  pcVar20 = str_020cb54c;
  cVar30 = DAT_0214b0e0;
  if (cVar30 == '\0') {
    pcVar20 = &DAT_020d5cbd;
  }
  uVar19 = DAT_0223daf0;
  uVar22 = DAT_0223daf4;
  uVar21 = DAT_0223daf8;
  pcVar37 = &DAT_020c69e5;
  cVar30 = DAT_0223dafc;
  if (cVar30 == '\0') {
    pcVar37 = str_020c70d7;
  }
  uVar38 = DAT_0223dd28;
  uVar33 = DAT_0223dd24;
  pf_varargs_20044f0__4__4__4__4__4__4__4__4__4__4__4_
            ((char *)local_88c,0x400,str_020d5c28,(uint)local_14,local_18,(uint)local_1c,puVar23[2],
             (uint)pcVar20,uVar19,uVar22,uVar21,(uint)pcVar37,uVar33,uVar38);
  recovered_206cc70(str_020d5cc2,0x20cbe1b,(int)local_88c);
  cVar30 = DAT_0214822c;
  if (cVar30 == '\x01') {
    uVar21 = DAT_02148240;
    uVar22 = DAT_0214823c;
    uVar19 = DAT_02148238;
    pf_varargs_20044f0__4__4__4__4__4_
              ((char *)local_88c,0x400,str_020cbcdd,0x2148244,0x2148284,uVar19,uVar22,uVar21);
  }
  else {
    pf_varargs_20044f0___((char *)local_88c,0x400,str_020d5ccc);
  }
  recovered_206cc70(str_020cbd17,0x20cbd25,(int)local_88c);
  cVar30 = DAT_02148040;
  if (cVar30 == '\x01') {
    bVar17 = DAT_02148060;
    bVar3 = DAT_02148061;
    bVar4 = DAT_02148062;
    bVar5 = DAT_02148063;
    bVar6 = DAT_02148064;
    bVar7 = DAT_02148065;
    pcVar20 = (char *)local_88c;
    pf_varargs_20044f0__4__4__4__4__4__4_
              (local_2d9,0x18,str_020ca2bd,(uint)bVar17,(uint)bVar3,(uint)bVar4,(uint)bVar5,
               (uint)bVar6,(uint)bVar7);
    uVar16 = DAT_02148228;
    uVar15 = DAT_02148224;
    uVar14 = DAT_02148220;
    uVar13 = DAT_0214821c;
    uVar12 = DAT_02148218;
    uVar11 = DAT_02148214;
    uVar10 = DAT_02148210;
    uVar9 = DAT_0214820c;
    uVar8 = DAT_02148208;
    uVar1 = DAT_02148204;
    uVar21 = DAT_0214805c;
    uVar22 = DAT_02148058;
    uVar19 = DAT_02148054;
    pf_varargs_20044f0__4__4__4__4__4__4__8__8__8__8__8_
              (pcVar20,0x400,str_020ca220,0x2148090,0x21480d0,uVar19,uVar22,uVar21,(uint)local_2d9,
               CONCAT44(uVar8,uVar1),CONCAT44(uVar10,uVar9),CONCAT44(uVar12,uVar11),
               CONCAT44(uVar14,uVar13),CONCAT44(uVar16,uVar15));
    recovered_206cc70(str_020ca1b9,0x20ca1c2,0x20ca1d6);
    puVar31 = &DAT_02148090;
  }
  else {
    recovered_206cc70(str_020ca1b9,0x20ca1c2,0x20d5d05);
    puVar31 = &DAT_020ca0c6;
    pcVar20 = str_020d5d3b;
  }
  recovered_206cc70(str_020ca20c,(int)puVar31,(int)pcVar20);
  uVar19 = DAT_0223c72c;
  uVar22 = DAT_0224b2d8;
  pf_varargs_20044f0__4__4_((char *)local_88c,0x400,str_020d5d8e,uVar22,uVar19);
  recovered_206cc70(str_020d5dc8,0x20d5dcf,(int)local_88c);
  uVar19 = DAT_0224b2d8;
  pf_varargs_20044f0__4_((char *)local_88c,0x400,str_020d5ddd,uVar19);
  recovered_206cc70(str_020d5e04,0x20d5e14,(int)local_88c);
  iVar34 = DAT_0224b2d8;
  if (iVar34 != 0) {
    uVar19 = 0;
    pcVar20 = &DAT_0224b324;
    do {
      pf_varargs_20044f0__4_(local_2d9,0x40,str_020d5e27,uVar19);
      pcVar37 = str_020c5bb8;
      if (*pcVar20 != '\0') {
        pcVar37 = pcVar20;
      }
      local_14 = pcVar20 + -0x40;
      pf_varargs_20044f0__4__4__4_
                ((char *)local_88c,0x400,str_020d5e43,(uint)local_14,*(uint *)(pcVar20 + -0x44),
                 (uint)pcVar37);
      recovered_206cc70(local_2d9,(int)local_14,(int)local_88c);
      uVar19 = uVar19 + 1;
      pcVar20 = pcVar20 + 0x13c;
      uVar22 = DAT_0224b2d8;
    } while (uVar19 < uVar22);
  }
  uVar19 = DAT_0223c72c;
  pf_varargs_20044f0__4_((char *)local_88c,0x400,str_020d5e60,uVar19);
  recovered_206cc70(str_020d5e85,0x20d5e94,(int)local_88c);
  iVar34 = DAT_0223c72c;
  if (iVar34 != 0) {
    uVar19 = 0;
    pcVar20 = &DAT_0223c778;
    do {
      pf_varargs_20044f0__4_(local_2d9,0x40,str_020d5ea6,uVar19);
      pcVar37 = str_020c5bb8;
      if (*pcVar20 != '\0') {
        pcVar37 = pcVar20;
      }
      local_14 = pcVar20 + -0x40;
      pf_varargs_20044f0__4__4__4_
                ((char *)local_88c,0x400,str_020d5e43,(uint)local_14,*(uint *)(pcVar20 + -0x44),
                 (uint)pcVar37);
      recovered_206cc70(local_2d9,(int)local_14,(int)local_88c);
      uVar19 = uVar19 + 1;
      pcVar20 = pcVar20 + 0x13c;
      uVar22 = DAT_0223c72c;
    } while (uVar19 < uVar22);
  }
  iVar34 = DAT_0214aff4;
  if (iVar34 == 0) {
    local_14 = (char *)0x0;
  }
  else {
    local_14 = *(char **)(iVar34 + 0x110);
    local_18 = *(uint *)(iVar34 + 0x114);
    if ((local_18 != 0x20202020) &&
       (0xffffefff < (local_18 - 0x1001) + (uint)(local_14 != (char *)0x0))) goto LAB_0203b287;
    local_14 = (char *)recovered_2012a70();
    if (local_14 != (char *)0x0 || extraout_EDX_05 != 0) {
      local_18 = extraout_EDX_05;
      goto LAB_0203b287;
    }
    iVar34 = DAT_0214aff4;
    local_14 = *(char **)(iVar34 + 0x88);
  }
  local_18 = 0;
LAB_0203b287:
  local_1c = (uint *)recovered_2012a70();
  iVar34 = DAT_0214aff4;
  local_20 = extraout_EDX_06;
  if (iVar34 == 0) {
    uVar22 = 0;
    uVar19 = 0;
  }
  else {
    uVar19 = *(uint *)(iVar34 + 0x110);
    uVar22 = *(uint *)(iVar34 + 0x114);
    if ((uVar22 == 0x20202020) || ((uVar22 - 0x1001) + (uint)(uVar19 != 0) < 0xfffff000)) {
      uVar19 = recovered_2012a70();
      if (uVar19 == 0 && extraout_EDX_07 == 0) {
        iVar34 = DAT_0214aff4;
        uVar19 = *(uint *)(iVar34 + 0x88);
        uVar22 = 0;
      }
      else {
        uVar22 = extraout_EDX_07;
      }
    }
  }
  uVar24 = recovered_2012a70();
  uVar21 = 0;
  uVar33 = 0;
  uVar38 = 0;
  if (extraout_EDX_08 <= uVar22 && (uint)(uVar19 < uVar24) <= uVar22 - extraout_EDX_08) {
    uVar33 = (uVar22 - extraout_EDX_08) - (uint)(uVar19 < uVar24);
    uVar38 = uVar19 - uVar24;
  }
  uVar19 = DAT_02148008;
  uVar1 = DAT_02148008;
  iVar34 = DAT_02148008;
  uVar22 = DAT_0214800c;
  uVar1 = DAT_0214800c;
  iVar2 = DAT_0214800c;
  iVar25 = 0;
  iVar32 = 0;
  if (uVar22 <= uVar33 && (uint)(uVar38 < uVar19) <= uVar33 - iVar2) {
    iVar25 = (uVar33 - iVar2) - (uint)(uVar38 < uVar19);
    iVar32 = uVar38 - iVar34;
  }
  iVar34 = DAT_0214aff4;
  uVar22 = 0;
  uVar19 = 0;
  if (iVar34 != 0) {
    uVar19 = *(uint *)(iVar34 + 0x124);
    uVar22 = *(uint *)(iVar34 + 0x230);
    uVar21 = *(uint *)(iVar34 + 0x234);
  }
  pf_varargs_20044f0__8__8__8__4__4__4_
            ((char *)local_88c,0x400,str_020d5ec1,CONCAT44(local_18,local_14),
             CONCAT44(local_20,local_1c),CONCAT44(iVar25,iVar32),uVar22,uVar21,uVar19);
  recovered_206cc70(str_020d5f24,0x20cf9ea,(int)local_88c);
  uVar19 = DAT_020de510;
  pcVar20 = str_020c70d7;
  pcVar37 = str_020c70d7;
  if ((uVar19 & 1) != 0) {
    pcVar37 = &DAT_020c69e5;
  }
  local_14 = (char *)DAT_020de500;
  uVar22 = DAT_020de504;
  uVar21 = DAT_020de508;
  uVar33 = DAT_020de50c;
  if ((uVar19 & 2) != 0) {
    pcVar20 = &DAT_020c69e5;
  }
  pf_varargs_20044f0__4__4__4__4__4__4_
            ((char *)local_88c,0x400,str_020d5f2c,(uint)local_14,uVar22,uVar21,uVar33,(uint)pcVar37,
             (uint)pcVar20);
  recovered_206cc70(str_020d5fcb,0x20d5fd4,(int)local_88c);
  cVar30 = DAT_021408ea;
  if (cVar30 == '\0') {
    recovered_202a5c0();
  }
  iVar34 = DAT_021408ec;
  if (iVar34 != 0) {
    uVar19 = 0;
    pcVar20 = &DAT_02140934;
    do {
      uVar22 = (&DAT_0214094c)[uVar19 * 0x18];
      if (uVar22 == 0) {
        uVar22 = (&DAT_02140948)[uVar19 * 0x18];
      }
      local_3ca[0] = 0;
      puVar23 = &DAT_021408f0 + uVar19 * 0x18;
      local_18 = uVar19;
      local_14 = pcVar20;
      if ((&DAT_02140934)[uVar19 * 0x60] == '\0') {
LAB_0203b539:
        pf_varargs_20044f0__4_((char *)local_3ca,0x40,&DAT_020c5119,0x20ca028);
      }
      else {
        uVar21 = 0;
        iVar34 = -0xc;
        local_20 = uVar22;
        local_1c = &DAT_021408f0 + uVar19 * 0x18;
        do {
          pcVar37 = local_14;
          bVar17 = pcVar20[iVar34 + 0xc];
          if ((bVar17 == 0) || (0x3f < uVar21 + 1)) break;
          if (bVar17 == 0x7f || bVar17 < 0x20) {
            if (0x3f < uVar21 + 4) break;
            pf_varargs_20044f0__4_
                      ((char *)(local_3ca + uVar21),0x40 - uVar21,str_020c5b64,(uint)bVar17);
            uVar21 = uVar21 + 4;
            pcVar20 = pcVar37;
          }
          else {
            local_3ca[uVar21] = bVar17;
            uVar21 = uVar21 + 1;
          }
          iVar34 = iVar34 + 1;
        } while (iVar34 != 0);
        local_3ca[uVar21] = 0;
        uVar22 = local_20;
        puVar23 = local_1c;
        if (local_3ca[0] == 0) goto LAB_0203b539;
      }
      pf_varargs_20044f0__4_((char *)local_1c9,0x40,str_020d5fe0,*puVar23);
      pcVar20 = str_020c5bb8;
      if (uVar22 - 1 < 0xc) {
        pcVar20 = (&PTR_str_020ccf0d_020d9c94)[uVar22];
      }
      pf_varargs_20044f0__4__4_(local_2d9,0x60,str_020c6aa9,(uint)pcVar20,(uint)local_3ca);
      local_1c = (uint *)puVar23[2];
      uVar19 = puVar23[3];
      local_20 = (uint)(byte)puVar23[1];
      puVar35 = &DAT_020d12a8;
      if (puVar23[0x15] - 1 < 5) {
        puVar35 = (&PTR_str_020c5bb2_020d9cc4)[puVar23[0x15]];
      }
      local_24 = (char *)puVar23[7];
      pcVar20 = &DAT_020c69e5;
      if ((char)puVar23[8] == '\0') {
        pcVar20 = str_020c70d7;
      }
      pcVar37 = str_020c5bb8;
      if (puVar23[0x17] < 0xd) {
        pcVar37 = (&PTR_DAT_020d9c34)[puVar23[0x17]];
      }
      pf_varargs_20044f0__4__4__4__8__4__4__4__4_
                ((char *)local_88c,0x400,str_020d5ff3,local_20,(uint)local_1c,uVar19,
                 (ulonglong)CONCAT24((ushort)(uVar19 >> 0x17),uVar19 << 9),(uint)puVar35,
                 (uint)local_24,(uint)pcVar20,(uint)pcVar37);
      recovered_206cc70((char *)local_1c9,(int)local_2d9,(int)local_88c);
      uVar19 = local_18 + 1;
      pcVar20 = local_14 + 0x60;
      uVar22 = DAT_021408ec;
    } while (uVar19 < uVar22);
  }
  iVar34 = DAT_0223b704;
  if (iVar34 != 0) {
    uVar19 = 0;
    iVar34 = 0x171;
    do {
      iVar2 = DAT_0223b700;
      recovered_206cc70((char *)(iVar2 + -0x171 + iVar34),iVar2 + -0x60 + iVar34,iVar2 + iVar34);
      uVar19 = uVar19 + 1;
      iVar34 = iVar34 + 0x571;
      uVar22 = DAT_0223b704;
    } while (uVar19 < uVar22);
  }
  recovered_2070260();
  uVar39 = recovered_206cc70(str_020d33e8,0x20d604f,0x20d605f);
  iVar34 = DAT_0224522c;
  if (iVar34 == 0) {
    return (uint)uVar39;
  }
  puVar31 = (undefined1 *)0x0;
  local_18 = 0x49;
LAB_0203b6d8:
  puVar23 = (uint *)DAT_02245230;
  if (puVar23 == (uint *)0x0) {
    pf_varargs_20044f0__4_(local_d8,0x40,&DAT_020c5119,0x20d60b4);
  }
  else {
    pcVar20 = str_020d60b4;
    if ((char)puVar23[(int)puVar31 * 0x1bc + 2] != '\0') {
      pcVar20 = (char *)(puVar23 + (int)puVar31 * 0x1bc + 2);
    }
    pf_varargs_20044f0__4_(local_d8,0x40,&DAT_020c5119,(uint)pcVar20);
    cVar30 = (char)puVar23[(int)puVar31 * 0x1bc + 0x12];
    if (cVar30 != '\0') {
      puVar26 = puVar23 + (int)puVar31 * 0x1bc + 0x12;
      puVar29 = (uint *)(local_18 + (int)puVar23);
      do {
        if ((cVar30 == '/') || (cVar30 == '\\')) {
          puVar26 = puVar29;
        }
        else if (cVar30 == '\0') goto code_r0x0203b747;
        cVar30 = (char)*puVar29;
        puVar29 = (uint *)((int)puVar29 + 1);
      } while( true );
    }
  }
  goto LAB_0203b7db;
code_r0x0203b747:
  if ((puVar26 == (uint *)0x0) || ((char)*puVar26 == '\0')) {
LAB_0203b7db:
    pcVar20 = puVar31 + 1;
    pcVar37 = str_020d64eb;
    puVar26 = puVar23;
  }
  else {
    local_1c = puVar23;
    pf_varargs_20044f0__4_(local_2d9,0xf1,&DAT_020c5119,(uint)puVar26);
    local_14 = (char *)recovered_2002270(local_2d9);
    puVar26 = local_1c;
    if ((undefined1 *)0x5 < local_14) {
      uVar27 = recovered_2002270(local_2d9);
      uVar28 = recovered_2002270(&DAT_020c6602);
      puVar26 = local_1c;
      if (uVar28 <= uVar27) {
        cVar30 = local_2d9[uVar27 - uVar28];
        if (cVar30 == '\0') {
          pcVar20 = &DAT_020c6602;
        }
        else {
          if ((byte)(cVar30 + 0x9fU) < 0x1a) {
            cVar30 = cVar30 + -0x20;
          }
          if (cVar30 != '.') goto joined_r0x0203b953;
          iVar34 = -uVar28;
          cVar30 = local_2d9[iVar34 + uVar27 + 1];
          if (cVar30 == '\0') {
            pcVar20 = &DAT_020c6603;
          }
          else {
            if ((byte)(cVar30 + 0x9fU) < 0x1a) {
              cVar30 = cVar30 + -0x20;
            }
            if (cVar30 != 'K') goto joined_r0x0203b953;
            cVar30 = local_2d9[iVar34 + uVar27 + 2];
            if (cVar30 == '\0') {
              pcVar20 = &DAT_020c6604;
            }
            else {
              if ((byte)(cVar30 + 0x9fU) < 0x1a) {
                cVar30 = cVar30 + -0x20;
              }
              if (cVar30 != 'E') goto joined_r0x0203b953;
              cVar30 = local_2d9[iVar34 + uVar27 + 3];
              if (cVar30 == '\0') {
                pcVar20 = &DAT_020c6605;
              }
              else {
                if ((byte)(cVar30 + 0x9fU) < 0x1a) {
                  cVar30 = cVar30 + -0x20;
                }
                if (cVar30 != 'X') goto joined_r0x0203b953;
                cVar30 = local_2d9[iVar34 + uVar27 + 4];
                if (cVar30 == '\0') {
                  pcVar20 = &DAT_020c6606;
                }
                else {
                  if ((byte)(cVar30 + 0x9fU) < 0x1a) {
                    cVar30 = cVar30 + -0x20;
                  }
                  if ((cVar30 != 'T') || (local_2d9[iVar34 + uVar27 + 5] != '\0'))
                  goto joined_r0x0203b953;
                  pcVar20 = &DAT_020c6607;
                }
              }
            }
          }
        }
        if (*pcVar20 == '\0') {
          local_14 = local_14 + -5;
        }
      }
    }
joined_r0x0203b953:
    if ((undefined1 *)0xef < local_14) {
      local_14 = (undefined1 *)0xf0;
    }
    local_1c = puVar26;
    recovered_2001b70(local_1c9,local_2d9,(ulong)local_14);
    local_1c9[(int)local_14] = '\0';
    pcVar20 = str_020c5bb8;
    if (local_1c9[0] != '\0') {
      pcVar20 = (char *)local_1c9;
    }
    pcVar37 = str_020d64fa;
  }
  pf_varargs_20044f0__4__4_((char *)local_3ca,0xf1,pcVar37,(uint)local_d8,(uint)pcVar20);
  local_1c9[0] = '\0';
  if (puVar26 != (uint *)0x0) {
    if (*(char *)((int)puVar23 + (int)puVar31 * 0x6f0 + 0x139) == '\0') {
      uVar19 = 0x203b83e;
      uVar22 = recovered_20b4cb0((int)(puVar23 + (int)puVar31 * 0x1bc + 0x12),local_1c9);
      if ((char)uVar22 != '\0') goto LAB_0203b85e;
      pcVar20 = str_020d3237;
    }
    else {
      uVar19 = (int)puVar23 + (int)puVar31 * 0x6f0 + 0x139;
      pcVar20 = &DAT_020c5119;
    }
    pf_varargs_20044f0__4_((char *)local_1c9,0xf1,pcVar20,uVar19);
  }
LAB_0203b85e:
  recovered_20b42f0((char *)local_1c9,local_2d9);
  if (*(char *)((int)puVar23 + (int)puVar31 * 0x6f0 + 0x22a) == '\0') {
    pcVar20 = str_020d2e5d;
    if (*(char *)((int)puVar23 + (int)puVar31 * 0x6f0 + 0x68a) != '\0') {
      pcVar20 = (char *)((int)puVar23 + (int)puVar31 * 0x6f0 + 0x68a);
    }
    pcVar37 = str_020d2dfd;
    if (*(char *)((int)puVar23 + (int)puVar31 * 0x6f0 + 0x6aa) != '\0') {
      pcVar37 = (char *)((int)puVar23 + (int)puVar31 * 0x6f0 + 0x6aa);
    }
    pf_varargs_20044f0__4__4_(local_48a,0x60,str_020cc1b0,(uint)pcVar20,(uint)pcVar37);
  }
  else {
    pf_varargs_20044f0__4_(local_48a,0x60,&DAT_020c5119,(int)puVar23 + (int)puVar31 * 0x6f0 + 0x22a)
    ;
  }
  pf_varargs_20044f0__4_(local_d8,0x60,&DAT_020c5119,(uint)local_48a);
  pcVar20 = str_020d60b4;
  if ((char)puVar23[(int)puVar31 * 0x1bc + 2] != '\0') {
    pcVar20 = (char *)(puVar23 + (int)puVar31 * 0x1bc + 2);
  }
  pcVar37 = str_020d60bb;
  if (*(char *)((int)puVar23 + (int)puVar31 * 0x6f0 + 0x6eb) == '\0') {
    pcVar37 = str_020d60c2;
  }
  vararg5 = &DAT_020c5084;
  puVar36 = &DAT_020c5084;
  if (*(char *)((int)puVar23 + (int)puVar31 * 0x6f0 + 0x28a) != '\0') {
    puVar36 = (undefined1 *)((int)puVar23 + (int)puVar31 * 0x6f0 + 0x28a);
    vararg5 = &DAT_020cc321;
  }
  local_14 = puVar31;
  pf_varargs_20044f0__4__4__4__4__4__4__4_
            ((char *)local_88c,0x400,str_020d6081,(uint)(puVar23 + (int)puVar31 * 0x1bc + 0x12),
             (uint)pcVar20,(uint)local_2d9,(uint)pcVar37,puVar23[(int)puVar31 * 0x1bc + 0x1bb],
             (uint)vararg5,(uint)puVar36);
  uVar39 = recovered_206cc70((char *)local_3ca,(int)local_d8,(int)local_88c);
  puVar31 = local_14 + 1;
  local_18 = local_18 + 0x6f0;
  puVar36 = (undefined1 *)DAT_0224522c;
  if (puVar36 <= puVar31) {
    return (uint)uVar39;
  }
  goto LAB_0203b6d8;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020c6602
#undef DAT_020c6603
#undef DAT_020c6604
#undef DAT_020c6605
#undef DAT_020c6606
#undef DAT_020c6607
#undef DAT_020c69e5
#undef DAT_020ca0c6
#undef DAT_020cc321
#undef DAT_020d12a8
#undef DAT_020d5c23
#undef DAT_020d5cbd
#undef DAT_020d6275
#undef DAT_020de150
#undef DAT_020de164
#undef DAT_020de168
#undef DAT_020de500
#undef DAT_020de504
#undef DAT_020de508
#undef DAT_020de50c
#undef DAT_020de510
#undef DAT_021408ea
#undef DAT_021408ec
#undef DAT_021408f0
#undef DAT_02140934
#undef DAT_02140948
#undef DAT_0214094c
#undef DAT_02148008
#undef DAT_0214800c
#undef DAT_02148010
#undef DAT_02148014
#undef DAT_02148018
#undef DAT_02148040
#undef DAT_02148054
#undef DAT_02148058
#undef DAT_0214805c
#undef DAT_02148060
#undef DAT_02148061
#undef DAT_02148062
#undef DAT_02148063
#undef DAT_02148064
#undef DAT_02148065
#undef DAT_02148090
#undef DAT_02148204
#undef DAT_02148208
#undef DAT_0214820c
#undef DAT_02148210
#undef DAT_02148214
#undef DAT_02148218
#undef DAT_0214821c
#undef DAT_02148220
#undef DAT_02148224
#undef DAT_02148228
#undef DAT_0214822c
#undef DAT_02148238
#undef DAT_0214823c
#undef DAT_02148240
#undef DAT_0214aff4
#undef DAT_0214b0e0
#undef DAT_0214bc38
#undef DAT_0214bc3c
#undef DAT_0223b700
#undef DAT_0223b704
#undef DAT_0223c72c
#undef DAT_0223c778
#undef DAT_0223daf0
#undef DAT_0223daf4
#undef DAT_0223daf8
#undef DAT_0223dafc
#undef DAT_0223dd24
#undef DAT_0223dd28
#undef DAT_0224522c
#undef DAT_02245230
#undef DAT_0224b2d8
#undef DAT_0224b324
#undef DAT_0224c69c
#undef DAT_0224c6b4
#undef PTR_DAT_020d9c34
#undef PTR_str_020c5884_020de16c
#undef PTR_str_020c5884_020de170
#undef PTR_str_020c5bb2_020d9cc4
#undef PTR_str_020ccf0d_020d9c94
#undef str_020c5884
#undef str_020c588b
#undef str_020c5894
#undef str_020c589c
#undef str_020c58ab
#undef str_020c5b64
#undef str_020c5bb8
#undef str_020c6aa9
#undef str_020c70d7
#undef str_020ca0fd
#undef str_020ca1b9
#undef str_020ca20c
#undef str_020ca220
#undef str_020ca2bd
#undef str_020cb54c
#undef str_020cbcdd
#undef str_020cbd17
#undef str_020cc1b0
#undef str_020d2dfd
#undef str_020d2e5d
#undef str_020d3237
#undef str_020d33e8
#undef str_020d5ad9
#undef str_020d5b74
#undef str_020d5b93
#undef str_020d5beb
#undef str_020d5c28
#undef str_020d5cc2
#undef str_020d5ccc
#undef str_020d5d3b
#undef str_020d5d8e
#undef str_020d5dc8
#undef str_020d5ddd
#undef str_020d5e04
#undef str_020d5e27
#undef str_020d5e43
#undef str_020d5e60
#undef str_020d5e85
#undef str_020d5ea6
#undef str_020d5ec1
#undef str_020d5f24
#undef str_020d5f2c
#undef str_020d5fcb
#undef str_020d5fe0
#undef str_020d5ff3
#undef str_020d6081
#undef str_020d60b4
#undef str_020d60bb
#undef str_020d60c2
#undef str_020d644f
#undef str_020d6496
#undef str_020d64a2
#undef str_020d64ae
#undef str_020d64e0
#undef str_020d64eb
#undef str_020d64fa
#undef local_48a
#undef local_42a
#undef local_3ca
#undef local_2d9
#undef local_1c9
#undef local_d8
#undef local_78
#undef local_74
#undef local_70
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_44
#undef local_40
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_a0c
#undef local_88c
#undef local_86c
