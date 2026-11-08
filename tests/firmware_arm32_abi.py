#!/usr/bin/env python3
"""Check UEFI callee-saved registers in the compiled ARM32 firmware helpers.

Pooka's Free Software License.
"""
import argparse,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM
from unicorn.arm_const import *

def exercise(path):
 metadata,memory=inspect(path.read_bytes());symbols={n:a for a,n in metadata['symbols']}
 cpu=Uc(UC_ARCH_ARM,UC_MODE_ARM);cpu.mem_map(0,0x400000);cpu.mem_write(metadata['base'],memory)
 saved=[UC_ARM_REG_R4,UC_ARM_REG_R5,UC_ARM_REG_R6,UC_ARM_REG_R7,UC_ARM_REG_R8,UC_ARM_REG_R9,UC_ARM_REG_R10,UC_ARM_REG_R11]
 count=0
 for a,b in [(0x123456789abcdef,23),(0xfffffffffffffffe,0x100000001),(0,3),(0xffffffffffffffff,7)]:
  for name,expected in [('___udivdi3',a//b)]:
   sentinels=[0xabc00000+i*0x101 for i in range(8)]
   for reg,value in zip(saved,sentinels):cpu.reg_write(reg,value)
   for reg,value in zip([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3],[a&0xffffffff,a>>32,b&0xffffffff,b>>32]):cpu.reg_write(reg,value)
   cpu.reg_write(UC_ARM_REG_SP,0x2f0000);cpu.reg_write(UC_ARM_REG_LR,0x2ff001)
   cpu.emu_start(symbols[name]|1,0x2ff000,count=100000)
   assert cpu.reg_read(UC_ARM_REG_PC)==0x2ff000
   assert cpu.reg_read(UC_ARM_REG_R0)|(cpu.reg_read(UC_ARM_REG_R1)<<32)==expected
   assert [cpu.reg_read(reg)for reg in saved]==sentinels,(name,'UEFI callee-saved register changed')
   assert cpu.reg_read(UC_ARM_REG_SP)==0x2f0000
   count+=1
 print('ARM32 firmware ABI: %d division and UEFI callee-saved register checks passed.'%count)
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('firmware',type=Path);exercise(p.parse_args().firmware)
