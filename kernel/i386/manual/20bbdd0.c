/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0209543b (*(uint8_t *)(0x20d63cfU))
#define DAT_02095440 (*(uint8_t *)(0x20d63d4U))
#define PTR_DAT_02098790 (*(uint8_t * *)(0x20d9cdcU))
#define local_14 (*(uint *)(frame + 476))
#define local_18 (*(uint *)(frame + 472))
#define local_1c (*(uint *)(frame + 468))
#define local_1d8 (*(char (*)[320])(frame + 24))
#define local_20 (*(uint *)(frame + 464))
#define local_24 (*(uint *)(frame + 460))
#define local_28 (*(uint *)(frame + 456))
#define local_2c (*(uint *)(frame + 452))
#define local_30 (*(uint *)(frame + 448))
#define local_34 (*(uint *)(frame + 444))
#define local_38 (*(uint *)(frame + 440))
#define local_3c (*(uint *)(frame + 436))
#define local_40 (*(uint *)(frame + 432))
#define local_44 (*(uint *)(frame + 428))
#define local_48 (*(uint *)(frame + 424))
#define local_4c (*(uint *)(frame + 420))
#define local_50 (*(uint *)(frame + 416))
#define local_54 (*(uint *)(frame + 412))
#define local_58 (*(uint *)(frame + 408))
#define local_98 (*(char (*)[64])(frame + 344))
#define str_02095365 (*(char (*)[1])(0x20d62f9U))
#define str_02095377 (*(char (*)[1])(0x20d630bU))
#define str_0209542c (*(char (*)[1])(0x20d63c0U))
#define str_02095444 (*(char (*)[1])(0x20d63d8U))
#define str_02095452 (*(char (*)[1])(0x20d63e6U))
#define str_02095461 (*(char (*)[1])(0x20d63f5U))
#define str_02095474 (*(char (*)[1])(0x20d6408U))
#define str_02095485 (*(char (*)[1])(0x20d6419U))
#define str_02095498 (*(char (*)[1])(0x20d642cU))
#define str_020954aa (*(char (*)[1])(0x20d643eU))
#define str_020954b0 (*(char (*)[1])(0x20d6444U))
uint recovered_20bbdd0(uchar in_CL,uchar in_DL,uchar param_3)

{
  unsigned char frame[528] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  char *incoming_edx;
  ulonglong uVar6;

  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  uVar2 = recovered_2005080(in_CL,in_DL,param_3,0,4,&local_48);
  if ((char)uVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (((short)local_48 != 0) && (local_18 = local_48 & 0xffff, local_18 != 0xffff)) {
      local_58 = local_48 & 0xffff;
      local_20 = local_48;
      recovered_2005080(in_CL,in_DL,param_3,8,4,&local_44);
      recovered_2005080(in_CL,in_DL,param_3,4,4,&local_40);
      recovered_2005080(in_CL,in_DL,param_3,0xc,4,&local_3c);
      local_50 = local_44;
      local_1c = local_44 >> 0x10;
      local_54 = local_44 >> 0x18;
      local_14 = local_3c >> 0x10 & 0xff;
      local_38 = 0;
      recovered_2005080(in_CL,in_DL,param_3,0x10,4,&local_38);
      local_34 = 0;
      recovered_2005080(in_CL,in_DL,param_3,0x14,4,&local_34);
      local_30 = 0;
      recovered_2005080(in_CL,in_DL,param_3,0x18,4,&local_30);
      local_2c = 0;
      recovered_2005080(in_CL,in_DL,param_3,0x1c,4,&local_2c);
      local_28 = 0;
      recovered_2005080(in_CL,in_DL,param_3,0x20,4,&local_28);
      local_24 = 0;
      recovered_2005080(in_CL,in_DL,param_3,0x24,4,&local_24);
      local_20 = local_20 >> 0x10;
      pf_varargs_2003aa0__4__4__4_(local_98,0x40,str_02095365,(uint)in_CL,(uint)in_DL,(uint)param_3)
      ;
      uVar1 = local_14;
      uVar3 = local_54;
      local_4c = local_1c & 0xff;
      local_14 = local_50 >> 8 & 0xff;
      recovered_20044f0(local_1d8,0x140,str_02095377,(uint)in_CL,(uint)in_DL,(uint)param_3,local_58,
                        local_20,local_54,local_4c,local_14,local_50 & 0xff,local_40 & 0xffff,uVar1,
                        local_38,local_34,local_30,local_2c,local_28,local_24);
      cVar5 = (char)local_1c;
      if (cVar5 == '\x03' && uVar3 == 0xc) {
        uVar3 = local_14 << 0x1c | local_14 >> 4;
        incoming_edx = str_0209542c;
        if (uVar3 < 4) {
          incoming_edx = (&PTR_DAT_02098790)[uVar3];
        }
      }
      else {
        incoming_edx = &DAT_0209543b;
        if ((uVar3 != 1 || cVar5 != '\x06') &&
           (incoming_edx = &DAT_02095440, uVar3 != 4 || cVar5 != '\x03')) {
          if ((char)uVar3 == '\x02') {
            incoming_edx = str_02095474;
            if (local_18 != 0x14e4) {
              incoming_edx = str_02095485;
            }
          }
          else if ((uVar3 & 0xff) == 6) {
            incoming_edx = str_02095498;
          }
          else if ((uVar3 & 0xff) == 3) {
            pcVar4 = str_02095452;
            if (local_18 != 0x10de) {
              pcVar4 = str_02095461;
            }
            incoming_edx = str_02095444;
            if (local_18 != 0x8086) {
              incoming_edx = pcVar4;
            }
          }
          else {
            incoming_edx = str_020954aa;
            if (cVar5 != '\x05') {
              incoming_edx = str_020954b0;
            }
            if (uVar3 != 0xc) {
              incoming_edx = str_020954b0;
            }
          }
        }
      }
      uVar6 = recovered_206cc70(local_98,(int)incoming_edx,(int)local_1d8);
      uVar3 = CONCAT31((int3)(uVar6 >> 8),1);
    }
  }
  return uVar3;
}
