#!/usr/bin/env python3
"""Compare initialized WinterShell statements using native/source kernel hosts.

The reference module stays an external differential-test input. Allocation,
scheduling and console sinks are controlled. Pooka's Free Software License.
"""
from pathlib import Path
import sys,struct,json
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')];from dll import DLL
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import argparse
parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('module',type=Path);parser.add_argument('--map',type=Path,required=True);args=parser.parse_args();native=args.reference;source=args.source;module=args.module

m,mem=inspect(native.read_bytes());names={n:a for a,n in m['symbols']};heapstart=0x3100000

def exercise(path):
 lib=Kernel(path.read_bytes(),{'_ws_errorf':0x4fe0000},False);cpu=lib.cpu;mod=DLL(module,load_base=0x1000000);mm,memory=inspect(module.read_bytes());cpu.mem_write(mod.base,bytes(mod.cpu.mem_read(mod.base,len(memory))));cpu.mem_write(mod.base+0x3b010,struct.pack('<Q',0x2132620));events=[];allocs={};nextptr=heapstart
 def text(p):
  if not p:return b''
  out=bytearray()
  while len(out)<65536:
   b=cpu.mem_read(p+len(out),1)[0]
   if not b:return bytes(out)
   out.append(b)
  raise AssertionError('Unbounded text')
 def leave(value):
  sp=cpu.reg_read(UC_X86_REG_RSP);dest=int.from_bytes(cpu.mem_read(sp,8),'little');cpu.reg_write(UC_X86_REG_RSP,sp+8);cpu.reg_write(lib.pc,dest);cpu.reg_write(lib.result,value)
 def arg(i):return cpu.reg_read([UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX][i])
 def allocate(n):
  nonlocal nextptr
  assert n<0x1000000,n
  result=nextptr;nextptr=(result+max(1,n)+15)&-16;allocs[result]=n;return result
 def malloc(c,a,z,u):leave(allocate(arg(0)))
 def realloc(c,a,z,u):
  old,n=arg(0),arg(1);ptr=allocate(n)
  if old:cpu.mem_write(ptr,bytes(cpu.mem_read(old,min(n,allocs[old]))));allocs.pop(old)
  leave(ptr)
 def free(c,a,z,u):allocs.pop(arg(0),None);leave(0)
 def zero(c,a,z,u):leave(0)
 def log(c,a,z,u):events.append(('log',text(arg(0))));leave(0)
 def push(c,a,z,u):events.append(('push',bytes(cpu.mem_read(arg(0),arg(1)))));leave(0)
 def count(c,a,z,u):leave(len(events))
 hooks={'_malloc':malloc,'_realloc':realloc,'_free':free,'_scheduler_api_entry_checkpoint':zero,'_scheduler_preempt_checkpoint':zero,'_wm_platform_smp_current_cpu_index':zero,'_wm_platform_ticks':zero,'_console_log':log,'_console_push_line_n':push,'_console_log_count':count}
 for name,fn in hooks.items():
  if name in names:
   address=names[name];cpu.hook_add(UC_HOOK_CODE,fn,begin=address,end=address)
   if path==source:
    symbols=json.loads(args.map.read_text());target=symbols.get('recovered_%x'%address)
    if target:cpu.hook_add(UC_HOOK_CODE,fn,begin=target,end=target)
 context=bytearray(64);struct.pack_into('<3I',context,0,0x444f4d4b,1100000,64);struct.pack_into('<Q',context,0x38,0x19000);struct.pack_into('<Q',context,0x18,0x19010);cpu.mem_write(0x3008000,bytes(context))
 cpu.hook_add(UC_HOOK_CODE,lambda c,a,z,u:leave(0x2132620),begin=0x19000,end=0x19000);cpu.hook_add(UC_HOOK_CODE,lambda c,a,z,u:leave(1),begin=0x19010,end=0x19010)
 lib.exports['initialize']=mod.base+0x3b4d;assert lib.call('initialize',0x3008000,mod.base+0x39230,result_bits=32)==1,'module initialization failed'
 lib.exports['execute']=mod.base+0x2c21;lib.exports['get']=mod.base+0xb07;results=[]
 for command in [b'foo = 42',b'foo',b'bar = "snow"',b'bar',b'1+1',b'desktop = {title="Sleet", menu="Document|Clipboard|View"}',b'desktop.title']:
  cpu.mem_write(0x3000000,command+b'\0');events.clear();None
  try:lib.call('execute',0x3000000,result_bits=8);result=0
  except Exception:print('events',events,'pc',hex(cpu.reg_read(lib.pc)),flush=True);raise
  record=[]
  for name in [b'foo',b'bar',b'desktop.title',b'desktop.menu']:
   cpu.mem_write(0x3001000,name+b'\0');cpu.mem_write(0x3002000,b'\xa5'*64);value=lib.call('get',0x3001000,0x3002000,result_bits=32);data=bytes(cpu.mem_read(0x3002000,64));ptr=int.from_bytes(data[16:24],'little')if value else 0;record.append((name,value,data[:16],text(ptr)if ptr else b''))
  results.append((command,result,list(events),record))
 return results
n=exercise(native);s=exercise(source);assert n[0][3][0][1]==1 and int.from_bytes(n[0][3][0][2][4:8],'little')==42,'integer assignment not exercised';assert n[2][3][1][3]==b'snow','string assignment not exercised';assert n[5][3][3][3]==b'Document|Clipboard|View','nested menu variable not exercised';assert n==s,[(x,y)for x,y in zip(n,s)if x!=y];print('WinterShell using native/source kernel host services: all script workflows match.')
