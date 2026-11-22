#!/usr/bin/env python3
"""Compare x64 command output capture with a synthetic completed child.

Pooka's Free Software License. No process image or hardware is executed.
"""
import argparse,json,struct
from pathlib import Path
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

def exercise(binary,addresses,native):
 results=[]
 for payload in [b'',b'hello',b'line one\nline two\n',b'x'*3000]:
  for capacity in [0,1,8,4096]:
   lib=Kernel(binary,addresses,native);lib.cpu.mem_write(0x2102800,struct.pack('<I',7));lib.cpu.mem_write(0x2102818,struct.pack('<I',7))
   def finish(value):
    c=lib.cpu;c.reg_write(lib.result,value);sp=c.reg_read(UC_X86_REG_RSP);c.reg_write(lib.pc,int.from_bytes(c.mem_read(sp,8),'little'));c.reg_write(UC_X86_REG_RSP,sp+8)
   def zero(c,a,z,u):finish(0)
   def yes(c,a,z,u):finish(1)
   def lookup(c,a,z,u):
    out=c.reg_read(UC_X86_REG_RSI);record=bytearray(504);struct.pack_into('<5I',record,484,17,0,1,7,5);c.mem_write(out,bytes(record));finish(1)
   def queue(c,a,z,u):
    out=c.reg_read(UC_X86_REG_RCX);c.mem_write(out,struct.pack('<I',99));c.mem_write(0x2104ba3,payload+b'\0');c.mem_write(0x2106ba4,struct.pack('<I',len(payload)));finish(1)
   for name,callback in [('_scheduler_preempt_checkpoint',zero),('_wm_platform_smp_current_cpu_index',zero),('_wm_platform_ticks',zero),('_command_line_is_system_report_command',zero),('_tayga_command_is_clang_alias',zero),('_tayga_bind_user_device',yes),('_tayga_virtual_entry',lookup),('_tayga_virtual_regular_file_info',zero),('_scheduler_queue_macho_path_ex',queue)]:
    a=addresses[name];lib.cpu.hook_add(UC_HOOK_CODE,callback,begin=a,end=a)
   lib.cpu.mem_write(0x3000000,b'tool\0');lib.cpu.mem_write(0x3001000,b'\0');lib.cpu.mem_write(0x3002000,b'/root/tool\0');lib.cpu.mem_write(0x3003000,bytes(4096)+b'\xa5'*16)
   args=[0x3000000,0x3001000,0x3002000,0x3003000,capacity]
   if not native:args=[0]*8+args+[0]
   result=lib.call('_tayga_try_launch_external_command',*args,result_bits=8);results.append((result,bytes(lib.cpu.mem_read(0x3003000,4112)),int.from_bytes(lib.cpu.mem_read(0x2106ba4,4),'little')))
 return results
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);p.add_argument('--abi',type=Path,required=True);p.add_argument('--map',type=Path,required=True);a=p.parse_args();m,_=inspect(a.reference.read_bytes());native={n:p for p,n in m['symbols']};mapping=json.loads(a.map.read_text());abi=json.loads(a.abi.read_text());source={v['original']:mapping.get('_'+v['symbol'],mapping.get(v['symbol']))for v in abi.values()};e=exercise(a.reference.read_bytes(),native,True);s=exercise(a.source.read_bytes(),source,False);assert e==s,[(i,x[0],y[0],x[1][:40],y[1][:40],x[2],y[2])for i,(x,y)in enumerate(zip(e,s))if x!=y];assert e[7][1].split(b'\0')[0]==b'hello';print('Tayga capture: 16 native empty, multiline, chunked, truncated, drained-output, and guard comparisons passed.')
