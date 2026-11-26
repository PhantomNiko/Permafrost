"""Compare x64 WinterShell module statements and lexer behavior.

The host is the reference kernel. This checks recovered module behavior,
not the complete kernel host or VM integration. Pooka's Free Software License.
"""
from pathlib import Path
import sys,struct,json
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')];from dll import DLL
from kernel_scalars import Kernel
from native import inspect
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
import argparse
p=argparse.ArgumentParser(description=__doc__);p.add_argument('kernel',type=Path);p.add_argument('reference',type=Path);p.add_argument('source',type=Path);args=p.parse_args()
module=args.reference;native=args.kernel;source=None
m,mem=inspect(native.read_bytes());names={n:a for a,n in m['symbols']};heapstart=0x3100000

def exercise(path,module_file=None):
 module_file=module if module_file is None else module_file
 source_module=module_file!=module
 lib=Kernel(path.read_bytes(),{'_ws_errorf':0x4fe0000},False);cpu=lib.cpu;mod=DLL(module_file,load_base=0x1000000);mm,memory=inspect(module_file.read_bytes());cpu.mem_write(mod.base,bytes(mod.cpu.mem_read(mod.base,len(memory))));
 if not source_module:cpu.mem_write(mod.base+0x3b010,struct.pack('<Q',0x2132620))
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
    symbols=json.loads(Path('build/kernel-110/x86_64/core-map.json').read_text());target=symbols.get('recovered_%x'%address)
    if target:cpu.hook_add(UC_HOOK_CODE,fn,begin=target,end=target)
 context=bytearray(64);struct.pack_into('<3I',context,0,0x444f4d4b,1100000,64);struct.pack_into('<Q',context,0x38,0x19000);struct.pack_into('<Q',context,0x18,0x19010);cpu.mem_write(0x3008000,bytes(context))
 cpu.hook_add(UC_HOOK_CODE,lambda c,a,z,u:leave(0x2132620),begin=0x19000,end=0x19000);cpu.hook_add(UC_HOOK_CODE,lambda c,a,z,u:leave(1),begin=0x19010,end=0x19010)
 symbols={n:mod.base+a-mm['base']for a,n in mm['symbols']+mm['data_symbols']}
 if source_module:
  lib.exports['descriptor']=mod.exports['_winterboot_kmod_descriptor'];descriptor=lib.call('descriptor',result_bits=64);lib.exports['initialize']=mod.exports['_winterboot_kmod_init']
 else:descriptor=mod.base+0x39230;lib.exports['initialize']=mod.base+0x3b4d
 assert lib.call('initialize',0x3008000,descriptor,result_bits=32)==1
 lib.exports['execute']=symbols['_recovered_10002c21']if source_module else mod.base+0x2c21;lib.exports['get']=symbols['_recovered_10000b07']if source_module else mod.base+0xb07;results=[]
 for command in [b'foo = 42', b'foo', b'bar = "snow"', b'bar', b'1+1', b'1 + 1', b'9-4', b'3*7', b'18/3', b'19//3', b'19%3', b'2^5', b'-7', b'1+2*3', b'(1+2)*3', b'9 > 4', b'4 == 4', b'4 != 5', b'"snow" + "fall"', b'foo = foo + 3', b'foo', b'desktop = {title="Sleet", menu="Document|Clipboard|View"}', b'desktop.title', b'desktop.title = "Permafrost"', b'desktop.title', b'{1,2,3}', b'1/0', b'unknown_variable']:
  cpu.mem_write(0x3000000,command+b'\0');events.clear()
  try:lib.call('execute',*([0]*8+[0x3000000]if source_module else[0x3000000]),result_bits=8);result=0
  except Exception:print('events',events,'pc',hex(cpu.reg_read(lib.pc)),flush=True);raise
  record=[]
  for name in [b'foo',b'bar',b'desktop.title',b'desktop.menu']:
   cpu.mem_write(0x3001000,name+b'\0');cpu.mem_write(0x3002000,b'\xa5'*64);value=lib.call('get',0x3001000,0x3002000,result_bits=32);data=bytes(cpu.mem_read(0x3002000,64));ptr=int.from_bytes(data[16:24],'little')if value else 0;record.append((name,value,data[:16],text(ptr)if ptr else b''))
  results.append((command,result,list(events),record))
 # Direct lexer checks cover every adjacent punctuation pair, whitespace,
 # comments and quoted strings, independent of statement dispatch.
 lib.exports['tokenize']=symbols['_recovered_10008216']if source_module else mod.base+0x8216
 tokens=[]
 cases=[bytes([a,b])for a in b'+-*/%=!~<>&|()[]{}'for b in b'+-*/%=!~<>&|()[]{}']
 cases += [b'1+1',b'one >= two',b'one@@comment',b'"snow fall"',b'"unterminated',b'  a\t b\n c  ',b'']
 for case in cases:
  cpu.mem_write(0x3000000,case+b'\0');cpu.mem_write(0x3001000,bytes(24));ok=lib.call('tokenize',0x3000000,0x3001000,result_bits=8)
  count,capacity,items=struct.unpack('<QQQ',bytes(cpu.mem_read(0x3001000,24)));assert count<100
  words=[text(int.from_bytes(cpu.mem_read(items+i*8,8),'little'))for i in range(count)]
  tokens.append((case,ok,words))
 lib.exports['dispatch']=mod.exports['_winterboot_kmod_dispatch']
 dispatch=[]
 cases=[(0,0x50005,1,72,False),(16,0x50005,2,72,False),(16,0x50005,1,71,False),(16,0x50005,1,72,True),(16,0,1,72,False),(16,0x50003,1,72,False),(16,0x50005,1,72,False)]
 for capability,operation,version,size,null in cases:
  request=bytearray(72);struct.pack_into('<II',request,0,version,size);cpu.mem_write(0x3004000,bytes(request));events.clear()
  status=lib.call('dispatch',capability,operation,0 if null else 0x3004000,result_bits=32)
  dispatch.append((capability,operation,version,size,null,status,bytes(cpu.mem_read(0x3004000,72)),list(events)))
 return results,tokens,dispatch
n=exercise(native);s=exercise(native,args.source);assert n==s,[(x,y)for rows,other in zip(n,s)for x,y in zip(rows,other)if x!=y];print('WinterShell: %d statement workflows %d lexer cases and %d public dispatch records match.'%(len(n[0]),len(n[1]),len(n[2])))
