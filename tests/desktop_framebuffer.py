#!/usr/bin/env python3
"""Compare the desktop's framebuffer discovery and backing-buffer allocation.

Pooka's Free Software License. Native executables are test inputs only.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *


def exercise(reference,source,library,folder):
 libs=load(reference,source,folder,library);results=[]
 for index,lib in enumerate(libs):
  cpu=lib.cpu
  if index:
   m,_=inspect(source.read_bytes());a=next(a for a,n in m['symbols']if n=='_pf_app_initialize');lib.exports['initialize']=lib.base+a;lib.call('initialize')
  record=0x2f0000;cpu.mem_write(record,b'\1'+bytes(127));info=struct.pack('<13I',0x200000,0,160*100*4,160*4,160,100,32,8,16,8,8,8,0)
  def callback(cpu,address,size,user):
   pointer=cpu.reg_read(UC_ARM64_REG_X0)if lib.cpu_type==0x100000c else cpu.reg_read(UC_ARM_REG_R0)if lib.cpu_type==12 else cpu.reg_read(UC_X86_REG_RDI)if lib.wide else int.from_bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,4),'little');cpu.mem_write(pointer,info);cpu.reg_write(lib.result,1)
  address=0x19000
  for table in lib.api_tables:cpu.mem_write(table+0x7c,struct.pack('<I',address))
  cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in [12,0x100000c]else b'\xc3');cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
  lib.instruction_limit=100000000
  if index==0 and lib.cpu_type==7:cpu.reg_write(UC_X86_REG_ECX,record);value=lib.call('_refreshHostDisplayState',result_bits=32)
  else:value=lib.call('_refreshHostDisplayState',record,result_bits=32)
  state=bytes(cpu.mem_read(record,112));assert state[4:56]==info,('32-bit framebuffer was rejected',index,value,state[:56]);assert int.from_bytes(state[56:56+(8 if lib.wide else 4)],'little'),'backing buffer was not allocated';results.append((value,state[:56],sorted(lib.allocs.values())))
 assert results[0]==results[1],results
 print('Desktop framebuffer: native/source 32-bit mode discovery and backing-buffer allocation match.')


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args();exercise(a.reference,a.source,a.library,a.output)
