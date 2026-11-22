#!/usr/bin/env python3
"""Compare private i386 command helpers and rejected process-image boundaries.

Pooka's Free Software License. No process image or hardware is executed.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
def exercise(binary,addresses,native):
 lib=Kernel(binary,addresses,native);results=[]
 def finish(value):
  c=lib.cpu;c.reg_write(lib.result,value);sp=c.reg_read(UC_X86_REG_ESP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,4),'little'));c.reg_write(UC_X86_REG_ESP,sp+4)
 def zero(c,a,z,u):finish(0)
 for name in ['_wm_platform_smp_current_cpu_index','_scheduler_preempt_checkpoint']:
  a=addresses[name];lib.cpu.hook_add(UC_HOOK_CODE,zero,begin=a,end=a)
 for value in [None,b'',b'a.app',b'A.APP',b'abc',b'a.app/child',b'.app',b' app',b'long.application']:
  for suffix in [None,b'',b'.app',b'APP',b'.APP',b'abc']:
   lib.cpu.mem_write(0x3000000,(value or b'')+b'\0');lib.cpu.mem_write(0x3001000,(suffix or b'')+b'\0')
   results.append(lib.call('_path_ends_with_ignore_case',0 if value is None else 0x3000000,0 if suffix is None else 0x3001000))
 for value in [None,b'',b'Tayga.app',b'freebsd',b'FREEBSD',b'freebsd-loader',b'\tfreebsd\r\n',b'"freebsd" arg',b'unknown',b'boot',b'loader']:
  lib.cpu.mem_write(0x3000000,(value or b'')+b'\0'+bytes(128));results.append(lib.call('_tayga_line_is_freebsd_loader_command',0 if value is None else 0x3000000))
 for image,size in [(0,0),(0,128),(0x3000000,0)]:
  for error in [0,0x3004000]:
   lib.cpu.mem_write(0x3000000,bytes(256));lib.cpu.mem_write(0x3001000,b'name\0');lib.cpu.mem_write(0x3002000,b'/name\0');lib.cpu.mem_write(0x3004000,b'\xa5'*176)
   result=lib.call('_scheduler_create_process_from_macho',image,size,0x3001000,7,0x3002000,error,result_bits=32);results.append((result,bytes(lib.cpu.mem_read(0x3004000,176))))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x,y)for i,(x,y)in enumerate(zip(e,s))if x!=y];print('i386 execution helpers: 71 native suffix, command, rejected image, error-buffer, and guard comparisons passed.')
