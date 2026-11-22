#!/usr/bin/env python3
"""Compare XHCI descriptors, initialization, controller records, and PCI scans.

Pooka's Free Software License. Hardware callbacks are intercepted.
"""
import argparse,struct
from pathlib import Path
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *
def run(path,version=1000000,size=208,magic=0x54584b57,registration=1,controller=0,enabled=True):
 lib=DLL(path,instruction_limit=100000000);c=lib.cpu;events=[];pci=[]
 def args(n):
  if lib.cpu_type==7:return list(struct.unpack('<'+'I'*n,bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4*n))))
  regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9]
  out=[c.reg_read(r)for r in regs[:n]]
  if n>len(regs):out+=list(struct.unpack('<'+'I'*(n-len(regs)),bytes(c.mem_read(c.reg_read(UC_ARM_REG_SP),4*(n-len(regs))))))
  return out
 def text(p):
  value=bytearray()
  while p and len(value)<2048:
   b=c.mem_read(p+len(value),1)[0]
   if not b:break
   value.append(b)
  return bytes(value)
 def hook(slot):
  def callback(c,a,z,u):
   if slot==3:events.append(('device',tuple(text(v)for v in args(3))));value=registration
   elif slot==10:events.append(('log',text(args(1)[0])));value=0
   elif slot==15:
    events.append(('controller',));c.mem_write(args(1)[0],bytes(112));value=controller
   elif slot==23:pci.append(tuple(args(4)));value=0
   else:raise AssertionError(slot)
   c.reg_write(lib.result,value)
  return callback
 api=0x2e0000;c.mem_write(api,struct.pack('<3I',magic,version,size)+bytes(208-12))
 if enabled:
  for slot in [3,10,15,23]:
   a=0x18000+16*slot;c.mem_write(a,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');c.hook_add(UC_HOOK_CODE,hook(slot),begin=a,end=a);c.mem_write(api+slot*4,struct.pack('<I',a))
 ptr=lib.call('_winterboot_kext_descriptor',result_bits=64 if lib.wide else 32);record=struct.unpack('<2I3Q'if lib.wide else'<5I',bytes(c.mem_read(ptr,32 if lib.wide else 20)));desc=(record[:2],tuple(text(v)for v in record[2:]));status=lib.call('_winterboot_kext_init',api,result_bits=32);return desc,status,events,pci
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();cases=[{},dict(registration=0),dict(controller=1),dict(size=12),dict(size=64),dict(magic=0),dict(enabled=False),dict(version=1)]
 for i,kw in enumerate(cases):
  expected=run(a.reference,**kw);actual=run(a.source,**kw);assert expected==actual,(i,expected[:3],actual[:3],len(expected[3]),len(actual[3]))
 print('XHCI driver: eight native descriptor, initialization, controller, PCI scan, API, and failure comparisons passed.')
