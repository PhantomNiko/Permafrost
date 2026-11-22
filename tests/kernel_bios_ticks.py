#!/usr/bin/env python3
"""Check native EFI ticks and monotonic ticks for the flat C BIOS loader.

Pooka's Free Software License. The TSC frequency and counter are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *


def exercise(path,addresses,native,efi):
 lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;counter=[0x123456789];c.mem_write(0x46c,struct.pack('<I',1000));c.mem_write(0x2133330,struct.pack('<I',1000))
 if efi:
  data=bytearray(0x2138);struct.pack_into('<III',data,0,0x33454657,5,len(data));c.mem_write(0x3000000,bytes(data));c.mem_write(0x20e0004,struct.pack('<I',0x3000000))
 def finish(value):
  sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.result,value);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 a=addresses['_platform_x86_tsc_ticks_per_microsecond'];c.hook_add(UC_HOOK_CODE,lambda c,a,z,u:finish(1000),begin=a,end=a)
 def tsc(c,a,z,u):
  if bytes(c.mem_read(a,min(z,2)))==b'\x0f\x31':c.reg_write(UC_X86_REG_EAX,counter[0]&0xffffffff);c.reg_write(UC_X86_REG_EDX,counter[0]>>32);c.reg_write(lib.pc,a+2)
 c.hook_add(UC_HOOK_CODE,tsc);start=counter[0];values=[]
 for ticks in [0,1,2,10,100]:
  counter[0]=start+ticks*1000*0xd6a1;values.append(lib.call('_wm_platform_ticks',result_bits=32))
 return values


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in json.loads(a.abi.read_text()).values()};e=exercise(a.reference,native,True,True);s=exercise(a.source,source,False,True);assert e==s,(e,s);bios=exercise(a.source,source,False,False);assert bios==[1000,1001,1002,1010,1100],bios;print('Platform ticks: native EFI deltas match and the C BIOS clock advances with masked interrupts.')
