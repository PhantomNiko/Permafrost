#!/usr/bin/env python3
"""Compare i386 task-completion waits with a synthetic scheduler burst.

Pooka's Free Software License. No task or hardware is executed.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(binary,addresses,native):
 results=[]
 for process in [0,1,99]:
  for active,registered in [(0,1),(1,1),(1,99),(1,25)]:
   lib=Kernel(binary,addresses,native);c=lib.cpu;c.mem_write(0x21468fc,bytes(184*32));c.mem_write(0x21468fc,bytes([active]));c.mem_write(0x214690c,struct.pack('<I',registered));c.mem_write(0x21ec4e0,struct.pack('<I',22));c.mem_write(0x20de164,struct.pack('<I',4));events=[]
   def burst(c,a,z,u):
    budget=c.reg_read(UC_X86_REG_ECX)if native else int.from_bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4),'little');events.append((budget,int.from_bytes(c.mem_read(0x21ec4e0,4),'little')));c.mem_write(0x21468fc,b'\0');c.reg_write(lib.result,1);sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
   a=addresses['_scheduler_run_space_burst'];c.hook_add(UC_HOOK_CODE,burst,begin=a,end=a);lib.call('_scheduler_run_task_to_completion',process,result_bits=32);results.append((events,bytes(c.mem_read(0x21ec4e0,4))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,(e,s);print('Task completion: 12 native process ID, active slot, scheduler budget, and wait-state restoration comparisons passed.')
