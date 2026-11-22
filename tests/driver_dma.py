#!/usr/bin/env python3
"""Compare ARM driver DMA address and synchronization service contracts.

Pooka's Free Software License. Kernel DMA callbacks are intercepted.
"""
import argparse,struct,itertools
from pathlib import Path
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
NAMES=['_wm_kext_dma_address','_wm_kext_dma_sync']
def exercise(path,names):
 lib=DLL(path);assert lib.cpu_type in [12,0x100000c];c=lib.cpu;meta,_=inspect(path.read_bytes());symbols={n:a+lib.base for a,n in meta['symbols']};results=[];events=[]
 for name,address in names.items():lib.exports[name]=symbols.get(name,symbols.get('_recovered_%x'%(address+0x10000000)))
 regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]
 def callback(slot):
  def fn(c,a,z,u):
   values=[c.reg_read(r)for r in regs[:4 if slot==28 else 3]];events.append((slot,tuple(values)));c.reg_write(lib.result,1)
   if slot==28 and values[3]==0x2f0000:c.mem_write(values[3],struct.pack('<Q',0x1122334455667788))
  return fn
 for slot in [28,29]:
  a=0x18000+16*slot;c.mem_write(a,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0));c.hook_add(UC_HOOK_CODE,callback(slot),begin=a,end=a)
 for name in names:
  for size,magic,enabled in [(112,0x54584b57,True),(116,0x54584b57,True),(120,0x54584b57,True),(208,0x54584b57,True),(208,0,True),(208,0x54584b57,False)]:
   for pointer,length,out in [(0x2f2000,128,0x2f0000),(0x2f2000,0,0x2f0000),(0x2f2000,65536,0x2f0000),(0,128,0x2f0000),(0x2f2000,128,0)]:
    api=0x2e0000;c.mem_write(api,struct.pack('<3I',magic,1000000,size)+bytes(208-12));c.mem_write(0x2f0000,b'\xa5'*24)
    if enabled:
     for slot in [28,29]:c.mem_write(api+slot*4,struct.pack('<I',0x18000+16*slot))
    events.clear();status=lib.call(name,api,pointer,length,*([out]if name==NAMES[0]else[]),result_bits=8);results.append((None if name==NAMES[1]else status,tuple(events),bytes(c.mem_read(0x2f0000,24))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());names={n:p for p,n in m['symbols']if n in NAMES};assert names;e=exercise(a.reference,names);s=exercise(a.source,names);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y][:3];print('Driver DMA:',len(e),'native API bounds, callbacks, sizes, pointers, output and guard comparisons passed.')
