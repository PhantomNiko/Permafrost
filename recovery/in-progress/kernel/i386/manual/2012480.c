/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020987ec (*(uint32_t volatile *)(0x20d9d38U))
undefined4 recovered_2012480(int param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte in_ID;

  if (param_3 != (undefined4 *)0x0) {
    uVar3 = DAT_020987ec;
    if ((int)uVar3 < 0) {
      uVar3 = (uint)(in_ID & 1) * 0x200000 ^ (uint)((in_ID & 1) != 1) * 0x200000;
      DAT_020987ec = uVar3 >> 0x15;
    }
    if (uVar3 != 0) {
      if (param_1 == 0) {
        puVar1 = (undefined4 *)cpuid_basic_info(0);
      }
      else if (param_1 == 1) {
        puVar1 = (undefined4 *)cpuid_Version_info(1);
      }
      else if (param_1 == 2) {
        puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
      }
      else if (param_1 == 3) {
        puVar1 = (undefined4 *)cpuid_serial_info(3);
      }
      else if (param_1 == 4) {
        puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
      }
      else if (param_1 == 5) {
        puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
      }
      else if (param_1 == 6) {
        puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
      }
      else if (param_1 == 7) {
        puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
      }
      else if (param_1 == 9) {
        puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
      }
      else if (param_1 == 10) {
        puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
      }
      else if (param_1 == 0xb) {
        puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
      }
      else if (param_1 == 0xd) {
        puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
      }
      else if (param_1 == 0xf) {
        puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
      }
      else if (param_1 == -0x7ffffffe) {
        puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
      }
      else if (param_1 == -0x7ffffffd) {
        puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
      }
      else if (param_1 == -0x7ffffffc) {
        puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
      }
      else {
        puVar1 = (undefined4 *)cpuid(param_1);
      }
      uVar2 = *puVar1;
      uVar6 = puVar1[1];
      uVar5 = puVar1[2];
      uVar4 = puVar1[3];
      *param_3 = uVar2;
      param_3[1] = uVar6;
      param_3[2] = uVar4;
      param_3[3] = uVar5;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return 0;
}
