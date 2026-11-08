#!/usr/bin/env python3
"""Compare ARM32 graphics PCI record fields and failed register reads.

Pooka's Free Software License. Reference binaries are test inputs only.
"""
from pathlib import Path
import sys,struct
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')]
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
def run(path,fail=(),identity=0x10501af4):
 lib=DLL(path);assert lib.cpu_type==12,'ARM32 PCI record fixture';c=lib.cpu;m,_=inspect(path.read_bytes());a=next(a for a,n in m['symbols']if n in ['_qemu_kext_read_pci_device','_recovered_100057e0']);lib.exports['probe']=lib.base+a
 values={0:identity,4:0x12345678,8:0x03010203,12:0x00a50000,16:0x10008004,20:0,24:0x20000000,28:0,32:0x30000000,36:0}
 def hook(c,a,z,u):
  off=c.reg_read(UC_ARM_REG_R3);sp=c.reg_read(UC_ARM_REG_SP);width,out=struct.unpack('<II',bytes(c.mem_read(sp,8)));assert width==4
  if off not in fail:c.mem_write(out,struct.pack('<I',values.get(off,0)))
  c.reg_write(UC_ARM_REG_R0,0 if off in fail else 1)
 a=0x19000;c.mem_write(a,struct.pack('<I',0xe12fff1e));c.hook_add(UC_HOOK_CODE,hook,begin=a,end=a);api=0x2e0000;c.mem_write(api,struct.pack('<3I',0x54584b57,1000000,208)+bytes(208-12));c.mem_write(api+23*4,struct.pack('<I',a));out=0x2e1000;c.mem_write(out,b'\x5a'*48)
 r=lib.call('probe',api,2,3,4,out,result_bits=32);return r,bytes(c.mem_read(out,48))

if __name__=='__main__':
 import argparse
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);a=p.parse_args()
 cases=[((),0x10501af4),((0,),0x10501af4),((8,),0x10501af4),((4,),0x10501af4),((12,),0x10501af4),((20,),0x10501af4),((),0xffff),((),0)]
 for failed,identity in cases:assert run(a.reference,failed,identity)==run(a.source,failed,identity),(failed,identity)
 print('Graphics PCI records: eight native field, failure, identity, and untouched-byte comparisons passed.')
