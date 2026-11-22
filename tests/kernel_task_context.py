#!/usr/bin/env python3
"""Compare i386 first-run task context setup without transferring to a task.

Pooka's Free Software License. Context transfer and platform calls are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(binary,addresses,native):
 results=[]
 for task_stack,stack_size in [(0,0),(0x3200000,0x200000),(0x3200001,0x10001)]:
  lib=Kernel(binary,addresses,native);c=lib.cpu;task=0x3100000;cpu=0x214b320;record=bytearray(184);record[0]=1;struct.pack_into('<II',record,100,task_stack,stack_size);c.mem_write(task,bytes(record));c.mem_write(cpu,bytes(72));c.mem_write(0x20d9d44,struct.pack('<I',7));captured=[]
  def zero(c,a,z,u):
   c.reg_write(lib.result,0);sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
  def transfer(c,a,z,u):
   sp=c.reg_read(UC_X86_REG_ESP);p=int.from_bytes(c.mem_read(sp+4,4),'little');context=bytearray(c.mem_read(p,44));entry=int.from_bytes(context[36:40],'little');assert entry==addresses['_scheduler_task_bootstrap'],('task entry',hex(entry),hex(addresses['_scheduler_task_bootstrap']));context[36:40]=bytes(4);captured.append(bytes(context));c.reg_write(lib.pc,lib.stop);c.emu_stop()
  for name in ['_setjmp','_wm_platform_ticks','_tayga_debug_tracef']:
   a=addresses[name];c.hook_add(UC_HOOK_CODE,zero,begin=a,end=a)
  a=addresses['_winterboot_sjlj_jump'];c.hook_add(UC_HOOK_CODE,transfer,begin=a,end=a);lib.call('_scheduler_resume_task_on_cpu',task,cpu,result_bits=32);assert captured;results.append((captured,bytes(c.mem_read(task,32)),int.from_bytes(c.mem_read(cpu,4),'little')))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,(e,s);print('Task contexts: three native null, aligned, and unaligned stack setup comparisons passed.')
