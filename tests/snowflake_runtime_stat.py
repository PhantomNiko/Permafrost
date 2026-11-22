#!/usr/bin/env python3
"""Compare libc file-stat forwarding with native API argument boundaries.

Pooka's Free Software License. Guest reads return synthetic in-memory blobs.
"""
import argparse,struct
from pathlib import Path
from desktop_calendar import load
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm_const import *
from unicorn.arm64_const import *
from unicorn.x86_const import *

def exercise(reference,source,library,folder,write=False):
 m,_=inspect(reference.read_bytes());sm,_=inspect(source.read_bytes());native={n:a for a,n in m['symbols']};symbols={n:a for a,n in sm['symbols']};libs=load(reference,source,folder,library);sessions=[]
 for i,lib in enumerate(libs):
  if i:lib.exports['initialize']=lib.base+symbols['_pf_app_initialize'];lib.call('initialize')
  address=native['_tayga_runtime_write_file'if write else'_tayga_runtime_stat']-m['base']+0x10000000;lib.exports['stat']=lib.base+(symbols['_recovered_%x'%address]if i else native['_tayga_runtime_write_file'if write else'_tayga_runtime_stat']);api=0x82010800 if lib.cpu_type==0x100000c else 0x40010800 if lib.cpu_type==12 else 0x6800;state={'calls':[],'modern':True};sessions.append(state)
  lib.cpu.mem_write(api,struct.pack('<3I',0x50414d57,1,0x19c));lib.cpu.mem_write(api+(0xd0 if write else 0xc8),struct.pack('<I',0x1f100));lib.cpu.mem_write(api+(0x38 if write else 0x34),struct.pack('<I',0x1f100))
  def read(cpu,a,z,u,lib=lib,state=state):
   count=(4 if state['modern']else 3)if write else(3 if state['modern']else 2)
   if lib.cpu_type==7:args=struct.unpack('<'+'I'*count,bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4,4*count)))
   else:
    regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]if lib.wide and lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX];args=[cpu.reg_read(r)for r in regs[:count]]
   word=8 if lib.wide else 4
   if write:
    path,pointer,length=args[-3:];assert pointer==0x2e6000 and length==17,('lost write arguments',args);payload=bytes(cpu.mem_read(pointer,length))
   else:path,out=args[-2:];assert out,'lost output argument';payload=None;cpu.mem_write(out,b''.join(v.to_bytes(word,'little')for v in [0x2e6000,17,1]))
   text=bytes(cpu.mem_read(path,256)).split(b'\0')[0];state['calls'].append((args[0]if state['modern']else None,text,payload));cpu.reg_write(lib.result,1)
   if lib.cpu_type in [12,0x100000c]:cpu.reg_write(lib.pc,cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30))
   else:
    reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;sp=cpu.reg_read(reg);cpu.reg_write(lib.pc,int.from_bytes(cpu.mem_read(sp,word),'little'));cpu.reg_write(reg,sp+word)
  lib.cpu.hook_add(UC_HOOK_CODE,read,begin=0x1f100,end=0x1f100)
 for modern in [True,False]:
  for path in [b'/root/hello.cpp',b'/',b'/root/a/../b',b'/root/two words',b'/root/file']:
   results=[]
   for lib,state in zip(libs,sessions):
    state.update(calls=[],modern=modern);api=0x82010800 if lib.cpu_type==0x100000c else 0x40010800 if lib.cpu_type==12 else 0x6800;lib.cpu.mem_write(api+8,struct.pack('<I',0x19c if modern else 0xc8));context=bytearray(0x620);struct.pack_into('<I',context,0x14,7);lib.cpu.mem_write(0x2e0000,bytes(context));lib.cpu.mem_write(0x2e3000,path+b'\0');lib.cpu.mem_write(0x2e4000,b'\xa5'*64);lib.cpu.mem_write(0x2e6000,b'file payload data');arguments=[0x2e0000,0x2e3000]+([0x2e6000,17]if write else[0x2e4000]);
    if lib is libs[0] and lib.cpu_type==7:
     lib.cpu.reg_write(UC_X86_REG_ECX,0x2e0000);lib.cpu.reg_write(UC_X86_REG_EDX,0x2e3000);lib.cpu.reg_write(UC_X86_REG_ESP,0x4fe0000);lib.cpu.mem_write(0x4fe0000,struct.pack('<'+'I'*(1+len(arguments[2:])),lib.stop,*arguments[2:]));lib.cpu.emu_start(lib.exports['stat'],lib.stop,count=lib.instruction_limit);assert lib.cpu.reg_read(lib.pc)==lib.stop;status=lib.cpu.reg_read(lib.result)
    else:status=lib.call('stat',*arguments,result_bits=32)
    assert state['calls'];results.append((status,state['calls'],bytes(lib.cpu.mem_read(0x2e4000,64))))
   assert results[0]==results[1],(modern,path,results)
 print('Snowflake file API: ten native '+('write'if write else'read')+' comparisons of device and legacy calls, arguments, paths, and guards passed.')
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--library',type=Path,required=True);p.add_argument('--output',type=Path,required=True);p.add_argument('--write',action='store_true');a=p.parse_args();exercise(a.reference,a.source,a.library,a.output,a.write)
