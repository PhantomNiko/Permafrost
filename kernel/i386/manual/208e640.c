/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0209880c (*(uint32_t volatile *)(0x20de158U))
#define DAT_020b9d54 (*(uint8_t volatile *)(0x21408e9U))
#define DAT_020c012c (*(uint8_t volatile *)(0x214b0e0U))
#define DAT_020c0134 (*(uint32_t volatile *)(0x214b108U))
#define DAT_020c0138 (*(uint32_t volatile *)(0x214b10cU))
#define local_14 (*(undefined4 *)(frame + 60))
#define local_18 (*(undefined4 *)(frame + 56))
#define local_1c (*(undefined4 *)(frame + 52))
#define local_20 (*(undefined4 *)(frame + 48))
#define local_24 (*(undefined4 *)(frame + 44))
#define local_28 (*(undefined4 *)(frame + 40))
#define local_2c (*(undefined4 *)(frame + 36))
#define local_30 (*(uint *)(frame + 32))
#define local_34 (*(undefined4 *)(frame + 28))
#define str_02091532 (*(char (*)[1])(0x20ceb0aU))
#define str_02091542 (*(char (*)[1])(0x20ceb1aU))
#define str_02091552 (*(char (*)[1])(0x20ceb2aU))
#define str_02091566 (*(char (*)[1])(0x20ceb3eU))
#define str_0209157e (*(char (*)[1])(0x20ceb56U))
undefined4 recovered_208e640(int *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint incoming_edx_00;
  uint extraout_EDX = 0;
  uint incoming_edx_01;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_02;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  uint incoming_edx_03;
  uint extraout_EDX_04 = 0;
  uint extraout_EDX_05 = 0;
  uint incoming_edx_04;
  uint extraout_EDX_06 = 0;
  uint extraout_EDX_07 = 0;
  uint incoming_edx_05;
  uint incoming_edx_06;

  if (incoming_ecx == (int *)0x0) {
    return 0;
  }
  puVar2 = recovered_2001650(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  recovered_2043a90(incoming_ecx,incoming_edx_00);
  *incoming_ecx = 8;
  incoming_ecx[7] = (int)puVar2;
  bVar1 = DAT_020c012c;
  local_30 = (uint)bVar1;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_34 = 5;
  local_2c = 0x3f800000;
  if (local_30 == 0) {
    local_2c = 0;
  }
  puVar2 = (undefined4 *)recovered_209b1b0((int)puVar2,str_02091532,'\x01');
  incoming_edx_06 = extraout_EDX;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = recovered_207e1d0(puVar2,&local_34);
    recovered_2043a90(&local_34,incoming_edx_01);
    if ((char)uVar3 == '\0') {
      return 0;
    }
    bVar1 = DAT_020b9d54;
    local_30 = (uint)bVar1;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_34 = 5;
    local_2c = 0x3f800000;
    if (local_30 == 0) {
      local_2c = 0;
    }
    incoming_edx_06 = extraout_EDX_00;
    if (((*incoming_ecx == 8) && (incoming_ecx[7] != 0)) &&
       (puVar2 = (undefined4 *)recovered_209b1b0(incoming_ecx[7],str_02091542,'\x01'),
       incoming_edx_06 = extraout_EDX_01, puVar2 != (undefined4 *)0x0)) {
      uVar3 = recovered_207e1d0(puVar2,&local_34);
      recovered_2043a90(&local_34,incoming_edx_02);
      if ((char)uVar3 == '\0') {
        return 0;
      }
      puVar4 = recovered_2012220();
      local_30 = *puVar4;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_34 = 6;
      incoming_edx_06 = extraout_EDX_02;
      if (((*incoming_ecx == 8) && (incoming_ecx[7] != 0)) &&
         (puVar2 = (undefined4 *)recovered_209b1b0(incoming_ecx[7],str_02091552,'\x01'),
         incoming_edx_06 = extraout_EDX_03, puVar2 != (undefined4 *)0x0)) {
        uVar3 = recovered_207e1d0(puVar2,&local_34);
        recovered_2043a90(&local_34,incoming_edx_03);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        puVar2 = recovered_2012220();
        local_30 = puVar2[1];
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_14 = 0;
        local_34 = 6;
        incoming_edx_06 = extraout_EDX_04;
        if (((*incoming_ecx == 8) && (incoming_ecx[7] != 0)) &&
           (puVar2 = (undefined4 *)recovered_209b1b0(incoming_ecx[7],str_02091566,'\x01'),
           incoming_edx_06 = extraout_EDX_05, puVar2 != (undefined4 *)0x0)) {
          uVar3 = recovered_207e1d0(puVar2,&local_34);
          recovered_2043a90(&local_34,incoming_edx_04);
          if ((char)uVar3 == '\0') {
            return 0;
          }
          puVar2 = recovered_2012220();
          local_30 = puVar2[2];
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_14 = 0;
          local_34 = 6;
          incoming_edx_06 = extraout_EDX_06;
          if (((*incoming_ecx == 8) && (incoming_ecx[7] != 0)) &&
             (puVar2 = (undefined4 *)recovered_209b1b0(incoming_ecx[7],str_0209157e,'\x01'),
             incoming_edx_06 = extraout_EDX_07, puVar2 != (undefined4 *)0x0)) {
            uVar3 = recovered_207e1d0(puVar2,&local_34);
            recovered_2043a90(&local_34,incoming_edx_05);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            recovered_2012220();
            uVar3 = recovered_209fae0(incoming_ecx,0x20ceb67U);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            recovered_2012220();
            uVar3 = recovered_209fae0(incoming_ecx,0x20ceb78U);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            recovered_2012220();
            uVar3 = recovered_209fae0(incoming_ecx,0x20ceb8aU);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            recovered_2012220();
            uVar3 = recovered_209fae0(incoming_ecx,0x20ceb99U);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            recovered_2012220();
            uVar3 = recovered_209fae0(incoming_ecx,0x20ceba1U);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            recovered_2012220();
            uVar3 = recovered_209fae0(incoming_ecx,0x20cebaaU);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            recovered_2012220();
            uVar3 = recovered_209fae0(incoming_ecx,0x20cebb4U);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            recovered_2012220();
            uVar3 = recovered_209fae0(incoming_ecx,0x20cebbfU);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            recovered_2012220();
            uVar3 = recovered_209fae0(incoming_ecx,0x20cebc8U);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            uVar3 = DAT_020c0134;
            uVar3 = recovered_209fae0(incoming_ecx,0x20cebd2U);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            uVar3 = DAT_020c0138;
            uVar3 = recovered_209fae0(incoming_ecx,0x20cebdfU);
            if ((char)uVar3 == '\0') {
              return 0;
            }
            uVar3 = DAT_0209880c;
            uVar3 = recovered_209fae0(incoming_ecx,0x20cebedU);
            return uVar3;
          }
        }
      }
    }
  }
  recovered_2043a90(&local_34,incoming_edx_06);
  return 0;
}
