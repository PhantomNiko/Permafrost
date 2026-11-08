#!/usr/bin/env python3
"""Check ARM32 xHCI operational register access widths against native code.

Pooka's Free Software License. Reference kernels are test inputs only.
"""
import argparse
import sys,json,struct
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'));from native import inspect
from unicorn import *
from unicorn.arm_const import *
def run(binary,mapping=None):
 m,b=inspect(binary);c=Uc(UC_ARCH_ARM,UC_MODE_ARM);c.mem_map(0,0x5000000);c.mem_map(0x40000000,0x2000000);c.mem_map(0x10000000,0x100000);c.mem_write(m['base'],b);c.reg_write(UC_ARM_REG_C1_C0_2,15<<20);c.reg_write(UC_ARM_REG_FPEXC,1<<30)
 def target(a):return a if mapping is None else mapping['_recovered_%x'%a]
 def finish(v):c.reg_write(UC_ARM_REG_R0,v);c.reg_write(UC_ARM_REG_PC,c.reg_read(UC_ARM_REG_LR))
 def init(c,a,z,u):finish(0)
 def physical(c,a,z,u):
  address,size,out=[c.reg_read(x)for x in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2]];c.mem_write(out,struct.pack('<Q',address));finish(1)
 for a,h in [(0x4040f490,init),(0x40407b7c,physical)]:c.hook_add(UC_HOOK_CODE,h,begin=target(a),end=target(a))
 c.mem_write(0x40505454,struct.pack('<I',1));c.mem_write(0x40505460,struct.pack('<7I',0,0x80000200,0x80000200,0xc0330,4,0x10008000,0x10000));c.mem_write(0x10008000,struct.pack('<7I',0x1000040,0x4000020,0,0,0,0x1000,0x2000));events=[]
 def read(c,access,address,size,value,user):
  if address in [4,0x10008044]:events.append((address,size));c.emu_stop()
 c.hook_add(UC_HOOK_MEM_READ,read);c.reg_write(UC_ARM_REG_R0,0x3110000);c.reg_write(UC_ARM_REG_SP,0x4fe0000);c.reg_write(UC_ARM_REG_LR,0x4ff0000);c.emu_start(target(0x4040b8c0),0x4ff0000,count=5000000);return events,bytes(c.mem_read(0x405055dc,16)).hex(),hex(c.reg_read(UC_ARM_REG_PC))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
 native=run(a.reference.read_bytes());source=run(a.source.read_bytes(),json.loads(a.map.read_text()))
 assert native[0]==[(0x10008044,4)],native
 assert source[:2]==native[:2],(native,source)
 print('ARM32 xHCI: native register initialization and 32-bit status access match.')
