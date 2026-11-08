#!/usr/bin/env python3
"""Compare ARM32 guest-driver presentation argument transport with native code.

Pooka's Free Software License. Reference kernels are test inputs only.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm_const import *


def exercise(binary,mapping=None):
 m,b=inspect(binary);c=Uc(UC_ARCH_ARM,UC_MODE_ARM);c.mem_map(0,0x5000000);c.mem_map(0x40000000,0x2000000);c.mem_write(m['base'],b)
 def target(a):return a if mapping is None else mapping['_recovered_%x'%a]
 events=[]
 def hook(label,clobber=False):
  def callback(c,a,z,u):
   registers=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if label=='driver'else[UC_ARM_REG_R2,UC_ARM_REG_R3]
   events.append((label,tuple(c.reg_read(r)for r in registers)))
   if clobber:
    for r in [UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]:c.reg_write(r,0x5a)
   c.reg_write(UC_ARM_REG_PC,c.reg_read(UC_ARM_REG_LR))
  return callback
 for address,fn in [(0x19000,hook('driver',True)),(target(0x404060ac),hook('platform'))]:c.hook_add(UC_HOOK_CODE,fn,begin=address,end=address)
 results=[]
 for enabled,pointer,rect in [(1,0x19000,(7,11,320,240)),(1,0x19000,(0xffffffff,0x80000000,1,1)),(0,0x19000,(5,9,80,60)),(1,0,(5,9,80,60)),(1,0x19000,(5,9,0,60)),(1,0x19000,(5,9,80,0))]:
  events.clear();c.mem_write(0x4063eae5,bytes([enabled]));c.mem_write(0x4063eaec,struct.pack('<I',pointer))
  for r,v in zip([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3],rect):c.reg_write(r,v)
  c.reg_write(UC_ARM_REG_SP,0x4fe0000);c.reg_write(UC_ARM_REG_LR,0x4ff0000);c.emu_start(target(0x40456e24),0x4ff0000,count=10000);assert c.reg_read(UC_ARM_REG_PC)==0x4ff0000
  expected=[]if not(rect[2]and rect[3])else([('driver',rect)]if enabled and pointer else[])+[('platform',rect[2:])]
  assert events==expected,(enabled,pointer,rect,events);results.append(tuple(events))
 return results


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args();assert exercise(a.reference.read_bytes())==exercise(a.source.read_bytes(),json.loads(a.map.read_text()));print('ARM32 presentation: six native rectangle forwarding and caller-clobber comparisons passed.')
