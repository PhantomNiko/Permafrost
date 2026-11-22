#!/usr/bin/env python3
"""Compare x64 command tokenization and explicit executable-path dispatch.

Pooka's Free Software License. Directory lookups and execution are synthetic.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(binary,addresses,native):
 lib=Kernel(binary,addresses);calls=[]
 def text(pointer):return bytes(lib.cpu.mem_read(pointer,512)).split(b'\0')[0]if pointer else None
 def finish(value):
  c=lib.cpu;c.reg_write(lib.result,value);sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8)
 def noop(c,a,z,u):finish(0)
 def lookup(c,a,z,u):
  path,out=[c.reg_read(r)for r in [UC_X86_REG_RDI,UC_X86_REG_RSI]];record=bytearray(504);struct.pack_into('<5I',record,484,17,0,1,7,5);c.mem_write(out,bytes(record));finish(1)
 def execute(c,a,z,u):
  if native:cmd,args,path,out,cap=[c.reg_read(r)for r in [UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8]]
  else:cmd,args,path,out,cap=struct.unpack('<5Q',bytes(c.mem_read(c.reg_read(UC_X86_REG_RSP)+24,40)))
  calls.append((text(cmd),text(args),text(path),cap));finish(1)
 for name,hook in [('_scheduler_preempt_checkpoint',noop),('_wm_kernel_tayga_status',noop),('_tayga_virtual_entry',lookup),('_tayga_try_launch_external_command',execute)]:
  a=addresses[name];lib.cpu.hook_add(UC_HOOK_CODE,hook,begin=a,end=a)
 # Initialization has a private name; the command's first call is bypassed to
 # keep the synthetic active-process state intact.
 init=addresses['_wm_kernel_tayga_execute_line'];m,memory=inspect(binary)
 # The shared lazy initializer is part of every API entry.
 for key in ['_tayga_ensure_initialized']:
  if key in addresses:
   a=addresses[key];lib.cpu.hook_add(UC_HOOK_CODE,noop,begin=a,end=a)
 lib.cpu.mem_write(0x2102804,struct.pack('<I',7));lib.cpu.mem_write(0x2102821,b'\0');results=[]
 for command in [b'/root/sdk-c',b'/root/probe one two',b'tool --version',b'./program x',b'../program',b'/root/nested/tool']:
  lib.cpu.mem_write(0x3000000,command+b'\0');lib.cpu.mem_write(0x3001000,bytes(4096));calls.clear();result=DLL.call(lib,'_wm_kernel_tayga_execute_line',0x3000000,0x3001000,4096,result_bits=32);results.append((result,tuple(calls),bytes(lib.cpu.mem_read(0x3001000,4096)).split(b'\0')[0]))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,(e,s);assert all(x[1]for x in e),e;print('Tayga dispatch: six native command, argument, explicit-path, and output comparisons passed.')
