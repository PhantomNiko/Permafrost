#!/usr/bin/env python3
"""Compare USB pointer registration, discovery, state forwarding and key polling.

Pooka's Free Software License. Hardware callbacks are intercepted.
"""
import argparse,struct
from pathlib import Path
from usb_xhci_driver import run
from dll import DLL
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0
from unicorn.arm64_const import UC_ARM64_REG_X0
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_RDI

def forwarding(path):
 results=[]
 for bound in [False,True]:
  lib=DLL(path);c=lib.cpu;api=0x2e0000;output=0x2f0000;events=[]
  def hook(slot):
   def callback(c,a,z,u):
    if slot==9:
     pointer=int.from_bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4),'little')if lib.cpu_type==7 else c.reg_read(UC_ARM_REG_R0 if lib.cpu_type==12 else UC_ARM64_REG_X0 if lib.cpu_type==0x100000c else UC_X86_REG_RDI)
     assert pointer==output,pointer;events.append((slot,pointer));c.mem_write(pointer,struct.pack('<4I',100,200,3,4))
    else:events.append((slot,))
    c.reg_write(lib.result,0x12345678)
   return callback
  for slot in [9,42]:
   a=0x18000+16*slot;c.mem_write(a,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');c.hook_add(UC_HOOK_CODE,hook(slot),begin=a,end=a)
  if bound:
   c.mem_write(api,struct.pack('<3I',0x54584b57,1000000,16)+bytes(208-12));lib.call('_winterboot_kext_init',api,result_bits=32)
  for size in [0,171,172,208]:
   for magic in [0,0x54584b57]:
    for available in [False,True]:
     c.mem_write(api,struct.pack('<3I',magic,1000000,size)+bytes(208-12))
     if available:
      for slot in [9,42]:c.mem_write(api+slot*4,struct.pack('<I',0x18000+slot*16))
     for pointer in [0,output]:
      c.mem_write(output,b'\xa5'*32);events.clear();status=lib.call('_winterboot_qemu_pointer_state',pointer,result_bits=32);results.append((status,tuple(events),bytes(c.mem_read(output,32))))
     events.clear();status=lib.call('_winterboot_qemu_poll_key',result_bits=32);results.append((status,tuple(events)))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();cases=[{},dict(registration=0),dict(controller=1),dict(size=12),dict(size=64),dict(magic=0),dict(enabled=False),dict(version=1),dict(pci_device=True),dict(pci_device=True,multifunction=True)]
 for i,kw in enumerate(cases):
  expected=run(a.reference,**kw);actual=run(a.source,**kw);assert expected==actual,(i,expected[:3],actual[:3],len(expected[3]),len(actual[3]))
 expected=forwarding(a.reference);actual=forwarding(a.source);assert expected==actual,[(i,x,y)for i,(x,y)in enumerate(zip(expected,actual))if x!=y][:4]
 print('USB pointer: ten native initialization/discovery and',len(expected),'state, key, API, output and guard comparisons passed.')
