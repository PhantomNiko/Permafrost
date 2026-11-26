"""Compare IA32 WinterShell dispatch and lexer behavior with a native kernel host.
Pooka's Free Software License. This does not establish release-wide VM parity.
"""
from pathlib import Path
import sys,json,struct
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')];from dll import DLL
from native import inspect
from kernel_scalars import Kernel
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import argparse
p=argparse.ArgumentParser(description=__doc__);p.add_argument('kernel',type=Path);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);args=p.parse_args()
reference=args.reference;source=args.source;kernel=args.kernel;km,_=inspect(kernel.read_bytes());names={n:a for a,n in km['symbols']};host=next(a for a,n in km['data_symbols']if n=='_gWinterShellHost')

def exercise(path):
 lib=Kernel(kernel.read_bytes(),{'_ws_errorf':0x4fe0000},False);cpu=lib.cpu;mod=DLL(path,load_base=0x1000000);mm,mem=inspect(path.read_bytes());cpu.mem_write(mod.base,bytes(mod.cpu.mem_read(mod.base,len(mem))));events=[];allocs={};nextptr=0x3100000
 def text(p):
  if not p:return b''
  b=bytearray()
  while len(b)<65536:
   c=cpu.mem_read(p+len(b),1)[0]
   if not c:return bytes(b)
   b.append(c)
  raise AssertionError('unbounded string')
 def arg(i):return int.from_bytes(cpu.mem_read(cpu.reg_read(UC_X86_REG_ESP)+4+4*i,4),'little')
 def leave(value):
  sp=cpu.reg_read(UC_X86_REG_ESP);ret=int.from_bytes(cpu.mem_read(sp,4),'little');cpu.reg_write(UC_X86_REG_ESP,sp+4);cpu.reg_write(lib.result,value);cpu.reg_write(lib.pc,ret)
 def allocate(n):
  nonlocal nextptr
  assert n<0x1000000,n
  p=nextptr;nextptr=(p+max(1,n)+15)&-16;allocs[p]=n;return p
 def malloc(c,a,z,u):leave(allocate(arg(0)))
 def free(c,a,z,u):allocs.pop(arg(0),None);leave(0)
 def realloc(c,a,z,u):
  old,n=arg(0),arg(1);ptr=allocate(n)
  if old:cpu.mem_write(ptr,bytes(cpu.mem_read(old,min(n,allocs[old]))));allocs.pop(old)
  leave(ptr)
 def zero(c,a,z,u):leave(0)
 def log(c,a,z,u):events.append(('log',text(arg(0))));leave(0)
 def count(c,a,z,u):leave(len(events))
 def push(c,a,z,u):events.append(('push',bytes(cpu.mem_read(arg(0),arg(1)))));leave(0)
 hooks={'_malloc':malloc,'_realloc':realloc,'_free':free,'_scheduler_api_entry_checkpoint':zero,'_scheduler_preempt_checkpoint':zero,'_wm_platform_smp_current_cpu_index':zero,'_wm_platform_ticks':zero,'_console_log':log,'_console_log_count':count,'_console_push_line_n':push}
 for n,fn in hooks.items():
  if n in names:a=names[n];cpu.hook_add(UC_HOOK_CODE,fn,begin=a,end=a)
 context=bytearray(40);struct.pack_into('<III',context,0,0x444f4d4b,1100000,40);struct.pack_into('<I',context,36,0x19000);struct.pack_into('<I',context,20,0x19010);cpu.mem_write(0x3007000,bytes(context));cpu.hook_add(UC_HOOK_CODE,lambda c,a,z,u:leave(host),begin=0x19000,end=0x19000);cpu.hook_add(UC_HOOK_CODE,lambda c,a,z,u:leave(1),begin=0x19010,end=0x19010)
 lib.exports=dict(mod.exports);descriptor=lib.call('_winterboot_kmod_descriptor',result_bits=32);status=lib.call('_winterboot_kmod_init',0x3007000,descriptor,result_bits=32);assert status==1,(path,status)
 symbols={n:mod.base+a-mm['base']for a,n in mm['symbols']+mm['data_symbols']};lib.exports['get']=mod.base+0xcc3 if path==reference else symbols['_recovered_10000cc3'];results=[]
 for command in [b'foo = 42', b'foo', b'bar = "snow"', b'bar', b'1+1', b'1 + 1', b'9-4', b'3*7', b'18/3', b'19//3', b'19%3', b'2^5', b'-7', b'1+2*3', b'(1+2)*3', b'9 > 4', b'4 == 4', b'4 != 5', b'"snow" + "fall"', b'foo = foo + 3', b'foo', b'desktop = {title="Sleet", menu="Document|Clipboard|View"}', b'desktop.title', b'desktop.title = "Permafrost"', b'desktop.title', b'{1,2,3}', b'1/0', b'unknown_variable']:
  events.clear();cpu.mem_write(0x3000000,command+b'\0');request=bytearray(40);struct.pack_into('<III',request,0,1,40,0x3000000);cpu.mem_write(0x3001000,bytes(request));result=lib.call('_winterboot_kmod_dispatch',16,0x50001,0x3001000,result_bits=32);record=[]
  for name in [b'foo',b'bar',b'desktop.title',b'desktop.menu']:
   cpu.mem_write(0x3002000,name+b'\0');cpu.mem_write(0x3003000,b'\xa5'*64);got=lib.call('get',0x3002000,0x3003000,result_bits=32);data=bytes(cpu.mem_read(0x3003000,64));ptr=int.from_bytes(data[12:16],'little')if got else 0;record.append((name,got,data[:12],text(ptr)if ptr else b''))
  results.append((command,result,events.copy(),record))
 lib.exports['tokenize']=mod.base+0x84c2 if path==reference else symbols['_recovered_100084c2']
 tokens=[];cases=[bytes([a,b])for a in b'+-*/%=!~<>&|()[]{}'for b in b'+-*/%=!~<>&|()[]{}']+[b'1+1',b'one >= two',b'one@@comment',b'"snow fall"',b'"unterminated',b'  a\t b\n c  ',b'']
 for case in cases:
  cpu.mem_write(0x3000000,case+b'\0');cpu.mem_write(0x3001000,bytes(12));lib.native=path==reference
  ok=lib.call('tokenize',0x3000000,0x3001000,result_bits=8);lib.native=False
  count,capacity,items=struct.unpack('<III',bytes(cpu.mem_read(0x3001000,12)));assert count<100
  words=[text(int.from_bytes(cpu.mem_read(items+i*4,4),'little'))for i in range(count)];tokens.append((case,ok,words))
 return results,tokens
n=exercise(reference);s=exercise(source);assert n==s,[(x,y)for rows,other in zip(n,s)for x,y in zip(rows,other)if x!=y];print('IA32 WinterShell: %d dispatch workflows and %d lexer cases match.'%(len(n[0]),len(n[1])))
