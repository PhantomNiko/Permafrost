#!/usr/bin/env python3
"""Compare BIOS thread-yield and wait calls with their native CL arguments.

Pooka's Free Software License. Context switches and hardware waits are intercepted.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from dll import DLL
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *


def exercise(path,addresses,native):
 results=[]
 for symbol,us in [('_wm_kernel_program_thread_yield',0)]+[('_wm_kernel_program_wait_microseconds',v)for v in [0,1,1999,2000,2001,5500]]:
  lib=Kernel(path.read_bytes(),addresses,native);c=lib.cpu;events=[];c.mem_write(0x214b320,struct.pack('<I',0x3000000))
  def finish(value):
   sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.result,value);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
  def arg(private=False):return c.reg_read(UC_X86_REG_ECX)if native and private else int.from_bytes(c.mem_read(c.reg_read(UC_X86_REG_ESP)+4,4),'little')
  def yielding(c,a,z,u):events.append(('yield',arg(True)&255));finish(0)
  def wait(c,a,z,u):events.append(('wait',arg()));finish(1)
  for name,hook in [(yield_name,yielding),('_wm_platform_wait_microseconds',wait),('_wm_platform_smp_current_cpu_index',lambda c,a,z,u:finish(0))]:
   address=addresses[name];c.hook_add(UC_HOOK_CODE,hook,begin=address,end=address)
  # These public service entries use cdecl in the native i386 executable.
  DLL.call(lib,symbol,*([us]if symbol.endswith('microseconds')else[]),result_bits=8);results.append(events)
 return results


if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',required=True,type=Path);p.add_argument('--map',required=True,type=Path);a=p.parse_args();abi=json.loads(a.abi.read_text());yield_name=abi['2039960']['original'];m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference,native,True);s=exercise(a.source,source,False);assert e==s,(e,s);assert e[0]==[('yield',1)]and e[-1]==[('yield',0),('yield',0),('wait',1500)],e;print('BIOS yield arguments:',len(e),'native cooperative-yield and split-wait cases passed.')
