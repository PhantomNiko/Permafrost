#!/usr/bin/env python3
"""Compare the public command entry with an inactive Tayga subsystem.

Pooka's Free Software License. No guest tasks or disks are dispatched.
"""
import argparse,json
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(binary,addresses):
 lib=Kernel(binary,addresses)
 def stop(c,a,z,u):
  c.reg_write(lib.result,0);sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8)
 a=addresses['_scheduler_preempt_checkpoint'];lib.cpu.hook_add(UC_HOOK_CODE,stop,begin=a,end=a);results=[]
 for command in [None,b'',b'help',b'pwd',b'echo example',b'\t \r\n']:
  lib.cpu.mem_write(0x3000000,(command or b'')+b'\0')
  for capacity in [0,1,8,128]:
   lib.cpu.mem_write(0x3001000,b'\xa5'*256);result=DLL.call(lib,'_wm_kernel_tayga_execute_line',0x3000000 if command is not None else 0,0x3001000,capacity,result_bits=32);results.append((result,bytes(lib.cpu.mem_read(0x3001000,256))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native);s=exercise(a.source.read_bytes(),source);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];print('Public Tayga entry: 24 native inactive-subsystem, null, whitespace, capacity, and guard comparisons passed.')
