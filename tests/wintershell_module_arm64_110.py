"""Compare ARM64 WinterShell dispatch and lexer behavior against a native host.
Pooka's Free Software License. This does not establish release-wide VM parity.
"""
from pathlib import Path
import sys,struct,json
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')];from dll import DLL
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import *
import argparse
p=argparse.ArgumentParser(description=__doc__);p.add_argument('kernel',type=Path);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);args=p.parse_args()
module=args.reference;native=args.kernel
m,mem=inspect(native.read_bytes());names={n:a for a,n in m['symbols']};host=next(a for a,n in m['data_symbols']if n=='_gWinterShellHost');heapstart=0x3100000

def exercise(path,module_file=None):
 module_file=module if module_file is None else module_file
 source_module=module_file!=module
 lib=Kernel(path.read_bytes(),{'_ws_errorf':0x4fe0000},False);cpu=lib.cpu;mod=DLL(module_file,load_base=0x1000000);mm,memory=inspect(module_file.read_bytes());cpu.mem_write(mod.base,bytes(mod.cpu.mem_read(mod.base,len(memory))));

 events=[];allocs={};nextptr=heapstart
 def text(p):
  if not p:return b''
  out=bytearray()
  while len(out)<65536:
   b=cpu.mem_read(p+len(out),1)[0]
   if not b:return bytes(out)
   out.append(b)
  raise AssertionError('Unbounded text')
 def leave(value):
  dest=cpu.reg_read(UC_ARM64_REG_X30);cpu.reg_write(lib.pc,dest);cpu.reg_write(lib.result,value)
 def arg(i):return cpu.reg_read([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3][i])
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

 context=bytearray(64);struct.pack_into('<3I',context,0,0x444f4d4b,1100000,64);struct.pack_into('<Q',context,0x38,0x19000);struct.pack_into('<Q',context,0x18,0x19010);cpu.mem_write(0x3008000,bytes(context))
 cpu.hook_add(UC_HOOK_CODE,lambda c,a,z,u:leave(host),begin=0x19000,end=0x19000);cpu.hook_add(UC_HOOK_CODE,lambda c,a,z,u:leave(1),begin=0x19010,end=0x19010)
 symbols={n:mod.base+a-mm['base']for a,n in mm['symbols']+mm['data_symbols']}
 if source_module:
  lib.exports['descriptor']=mod.exports['_winterboot_kmod_descriptor'];descriptor=lib.call('descriptor',result_bits=64);lib.exports['initialize']=mod.exports['_winterboot_kmod_init']
 else:
  lib.exports['descriptor']=mod.exports['_winterboot_kmod_descriptor'];descriptor=lib.call('descriptor',result_bits=64);lib.exports['initialize']=mod.exports['_winterboot_kmod_init']
 assert lib.call('initialize',0x3008000,descriptor,result_bits=32)==1,(module_file,events)
 lib.exports['execute']=symbols['_recovered_100025b8']if source_module else mod.base+0x25b8;lib.exports['get']=symbols['_recovered_10000a1c']if source_module else mod.base+0xa1c;results=[]
 for command in [b'foo = 42', b'foo', b'bar = "snow"', b'bar', b'1+1', b'1 + 1', b'9-4', b'3*7', b'18/3', b'19//3', b'19%3', b'2^5', b'-7', b'1+2*3', b'(1+2)*3', b'9 > 4', b'4 == 4', b'4 != 5', b'"snow" + "fall"', b'foo = foo + 3', b'foo', b'desktop = {title="Sleet", menu="Document|Clipboard|View"}', b'desktop.title', b'desktop.title = "Permafrost"', b'desktop.title', b'{1,2,3}', b'1/0', b'unknown_variable']:
  cpu.mem_write(0x3000000,command+b'\0');events.clear()
  request=bytearray(72);struct.pack_into('<IIQ',request,0,1,72,0x3000000);cpu.mem_write(0x3004000,bytes(request));lib.exports['dispatch']=mod.exports['_winterboot_kmod_dispatch'];result=lib.call('dispatch',16,0x50001,0x3004000,result_bits=32)

  record=[]
  for name in [b'foo',b'bar',b'desktop.title',b'desktop.menu']:
   cpu.mem_write(0x3001000,name+b'\0');cpu.mem_write(0x3002000,b'\xa5'*64);value=lib.call('get',0x3001000,0x3002000,result_bits=32);data=bytes(cpu.mem_read(0x3002000,64));ptr=int.from_bytes(data[16:24],'little')if value else 0;record.append((name,value,data[:16],text(ptr)if ptr else b''))
  results.append((command,result,list(events),record))
 lib.exports['tokenize']=symbols['_recovered_100062c4']if source_module else mod.base+0x62c4
 tokens=[];cases=[bytes([a,b])for a in b'+-*/%=!~<>&|()[]{}'for b in b'+-*/%=!~<>&|()[]{}']+[b'1+1',b'one >= two',b'one@@comment',b'"snow fall"',b'"unterminated',b'  a\t b\n c  ',b'']
 for case in cases:
  cpu.mem_write(0x3000000,case+b'\0');cpu.mem_write(0x3001000,bytes(24));ok=lib.call('tokenize',0x3000000,0x3001000,result_bits=8)
  count,capacity,items=struct.unpack('<QQQ',bytes(cpu.mem_read(0x3001000,24)));assert count<100
  words=[text(int.from_bytes(cpu.mem_read(items+i*8,8),'little'))for i in range(count)];tokens.append((case,ok,words))
 return results,tokens
n=exercise(native);s=exercise(native,args.source);assert n==s,[(x,y)for rows,other in zip(n,s)for x,y in zip(rows,other)if x!=y];print('ARM64 WinterShell: %d dispatch workflows and %d lexer cases match.'%(len(n[0]),len(n[1])))
