#!/usr/bin/env python3
"""Compare graphics PCI records, bus arguments, errors, and untouched bytes.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
from pathlib import Path
import sys,struct,json
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')]
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *
def run(path,native_address,fail=(),identity=0x10501af4):
 lib=DLL(path);c=lib.cpu;m,_=inspect(path.read_bytes());names=['_qemu_kext_read_pci_device',f'_recovered_{0x10000000+native_address:x}'];a=next(a for a,n in m['symbols']if n in names);lib.exports['probe']=lib.base+a
 values={0:identity,4:0x12345678,8:0x03010203,12:0x00a50000,16:0x10008004,20:0,24:0x20000000,28:0,32:0x30000000,36:0};events=[]
 def hook(c,a,z,u):
  if lib.cpu_type==12:
   off=c.reg_read(UC_ARM_REG_R3);width,out=struct.unpack('<II',bytes(c.mem_read(c.reg_read(UC_ARM_REG_SP),8)))
  elif lib.cpu_type==0x100000c:off,width,out=[c.reg_read(r)for r in [UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5]]
  elif lib.wide:off,width,out=[c.reg_read(r)for r in [UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9]]
  else:off,width,out=struct.unpack('<III',bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+16,12)))
  assert width==4,(off,width,out);events.append(off)
  if off not in fail:c.mem_write(out,struct.pack('<I',values.get(off,0)))
  c.reg_write(lib.result,0 if off in fail else 1)
 a=0x19000;c.mem_write(a,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in[12,0x100000c]else b'\xc3');c.hook_add(UC_HOOK_CODE,hook,begin=a,end=a);api=0x2e0000;c.mem_write(api,struct.pack('<3I',0x54584b57,1000000,208)+bytes(208-12));c.mem_write(api+23*4,struct.pack('<I',a));out=0x2e1000;c.mem_write(out,b'\x5a'*64)
 if lib.cpu_type==7 and '_qemu_kext_read_pci_device' in [n for _,n in m['symbols']]:
  sp=0x4fe0000;c.reg_write(UC_X86_REG_ESP,sp);c.reg_write(UC_X86_REG_ECX,api);c.reg_write(UC_X86_REG_EDX,2);c.mem_write(sp,struct.pack('<4I',lib.stop,3,4,out));c.emu_start(lib.exports['probe'],lib.stop,count=100000);assert c.reg_read(lib.pc)==lib.stop;r=c.reg_read(lib.result)
 else:r=lib.call('probe',api,2,3,4,out,result_bits=32)
 return r,bytes(c.mem_read(out,64)),events
if __name__=='__main__':
 import argparse
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());address=next(a for a,n in m['symbols']if n=='_qemu_kext_read_pci_device')
 cases=[((),0x10501af4),((0,),0x10501af4),((8,),0x10501af4),((4,),0x10501af4),((12,),0x10501af4),((20,),0x10501af4),((),0xffff),((),0)]
 for fail,identity in cases:
  expected=run(a.reference,address,fail,identity);actual=run(a.source,address,fail,identity);assert expected==actual,(fail,identity,expected,actual)
 print('Graphics PCI records: eight native bus, field, failure, identity, and untouched-byte comparisons passed.')
