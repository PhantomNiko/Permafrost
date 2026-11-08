#!/usr/bin/env python3
"""Compare ARM32 firmware keyboard/delay bridge argument transport with native code.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import argparse,json,struct,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from native import inspect
from unicorn import Uc,UC_ARCH_ARM,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm_const import *
def run(binary,mapping=None):
 m,b=inspect(binary);c=Uc(UC_ARCH_ARM,UC_MODE_ARM);c.mem_map(0,0x5000000);c.mem_map(0x40000000,0x2000000);c.mem_write(m['base'],b)
 context,request,bridge=0x18000,0x1a000,0x1b000
 c.mem_write(0x40500004,struct.pack('<I',context));c.mem_write(context,struct.pack('<3I',0x33454657,5,0x2150));c.mem_write(context+0x114,struct.pack('<II',bridge,request))
 events=[];key=[0]
 def callback(c,a,z,u):
  assert c.reg_read(UC_ARM_REG_R0)==request
  command=struct.unpack('<32I',bytes(c.mem_read(request,128)));events.append((command[0],command[7] if command[0]==4 else 0))
  c.reg_write(UC_ARM_REG_R0,key[0]if command[0]==1 else 1);c.reg_write(UC_ARM_REG_PC,c.reg_read(UC_ARM_REG_LR))
 c.hook_add(UC_HOOK_CODE,callback,begin=bridge,end=bridge)
 target=0x40407e00 if mapping is None else mapping['_recovered_40407e00'];result=[]
 for value in [0x61,0x2b,0x4800,0xffff,0]:
  key[0]=value;events.clear();c.mem_write(request,bytes(128));c.reg_write(UC_ARM_REG_SP,0x4fe0000);c.reg_write(UC_ARM_REG_LR,0x4ff0000);c.emu_start(target,0x4ff0000,count=100000)
  assert c.reg_read(UC_ARM_REG_PC)==0x4ff0000
  assert c.reg_read(UC_ARM_REG_R0)&65535==value
  assert events==([(1,0)]if value else[(1,0),(4,100)]),events
  result.append((value,tuple(events)))
 return result
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--map',type=Path,required=True);a=p.parse_args()
 assert run(a.reference.read_bytes())==run(a.source.read_bytes(),json.loads(a.map.read_text()))
 print('ARM32 keyboard bridge: five native key/idle command and request-pointer comparisons passed.')
