#!/usr/bin/env python3
"""Compare recovered graphics descriptors and initialization with reference code.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
import sys,struct
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent));from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *
def run(path,commands=None):
 lib=DLL(path,instruction_limit=100000000);c=lib.cpu;arm=lib.cpu_type==12;events=[]
 regs={12:[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3],0x100000c:[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3],0x1000007:[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX]}.get(lib.cpu_type)
 def arguments():
  if regs:return [c.reg_read(r)for r in regs]
  return struct.unpack('<4I',bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,16)))

 def text(p):
  out=bytearray()
  while p and len(out)<1500:
   ch=c.mem_read(p+len(out),1)[0]
   if not ch:return bytes(out)
   out.append(ch)
  return bytes(out)
 def callback(slot):
  def hook(c,a,z,u):
   args=arguments()
   if slot==16:c.mem_write(args[0],struct.pack('<13I',0x200000,0,64000,640,160,100,32,16,8,0,8,8,8));result=1
   elif slot==3:events.append(('device',*[text(p)for p in args[:3]]));result=1
   elif slot==10:events.append(('log',text(args[0])));result=0
   elif slot==23:result=0
   elif slot==49:events.append(('provider',));result=1
   else:events.append(('call',slot,args));result=0
   c.reg_write(lib.result,result)
  return hook
 api=0x2e0000;c.mem_write(api,struct.pack('<3I',0x54584b57,0x1000000,208)+bytes(208-12))
 for slot in [3,10,16,23,49]:
  a=0x18000+slot*16;c.mem_write(a,struct.pack('<I',0xe12fff1e if arm else 0xd65f03c0)if lib.cpu_type in (12,0x100000c)else b'\xc3');c.hook_add(UC_HOOK_CODE,callback(slot),begin=a,end=a);c.mem_write(api+slot*4,struct.pack('<I',a))
 descriptor=lib.call('_winterboot_kext_descriptor',result_bits=64 if lib.wide else 32)
 record=bytes(c.mem_read(descriptor,20));fields=struct.unpack('<5I',record)
 assert fields[0]==1 and fields[1]==0
 description=tuple(text(p) for p in fields[2:])
 provider=[]
 def provider_hook(c,a,z,u):provider.append(arguments()[1]);c.reg_write(lib.result,1)
 a=0x18000+49*16;c.hook_add(UC_HOOK_CODE,provider_hook,begin=a,end=a)
 result=lib.call('_winterboot_kext_init',api,result_bits=32)
 assert provider and all(lib.base<=p<lib.base+0x100000 for p in provider),provider
 if commands is not None:
  pixels=0x2f0000;stride=48;width=8;height=8;size=stride*height;c.mem_write(pixels,b'\x5a'*size)
  encoded=bytearray()
  for kind,rect,color,vertices in commands:
   encoded+=struct.pack('<10I4i2I',kind,0,pixels,0,size,width,height,stride,1,0,*rect,color,0)
   for vertex in vertices:encoded+=struct.pack('<3iI',*vertex)
  c.mem_write(0x2f1000,bytes(encoded));lib.exports['submit']=provider[-1]
  submitted=lib.call('submit',0x2f1000,len(commands),result_bits=32)
  return submitted,bytes(c.mem_read(pixels,size))
 return description,result,events

if __name__=='__main__':
 import argparse
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args()
 assert run(a.reference)==run(a.source)
 print('Graphics driver: native descriptor, initialization records, and source callback bounds passed.')
