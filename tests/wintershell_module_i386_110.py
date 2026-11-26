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
 def free(c,a,z,u):
  pointer=arg(0);assert pointer==0 or pointer in allocs,('invalid free',hex(pointer));allocs.pop(pointer,None);leave(0)
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
 rm,_=inspect(reference.read_bytes());rn={n:a-rm['base']for a,n in rm['symbols']}
 from module_value_abi import check_ia32_null_provider
 check_ia32_null_provider(lib,mod,mm,symbols,reference,path!=reference)
 # The boot script calls drivers through pcall and assigns both results.
 def boot_available(c,a,z,u):leave(1)
 def load_package(c,a,z,u):
  events.append(('driver-package',arg(2)));cpu.mem_write(arg(0),struct.pack('<I',3));cpu.mem_write(arg(1),b'\0');leave(1)
 for slot,callback in [(0x98,boot_available),(0x80,load_package)]:
  address=int.from_bytes(cpu.mem_read(host+slot,4),'little');cpu.hook_add(UC_HOOK_CODE,callback,begin=address,end=address)
 # Constructors and owned vectors retain the reference result and ownership ABI.
 def entry(name):
  offset=rn[name];return mod.base+offset if path==reference else symbols['_recovered_%x'%(0x10000000+offset)]
 lib.exports['make_null']=entry('_ws_make_null');cpu.mem_write(0x3006000,b'\xa5'*40);lib.call('make_null',0x3006000,result_bits=32);value=bytes(cpu.mem_read(0x3006000,40));assert value[:36]==bytes(36)and value[36:]==b'\xa5'*4,(path,value)
 def owned(value):
  pointer=allocate(len(value)+1);cpu.mem_write(pointer,value+b'\0');return pointer
 lib.exports['release_launch']=entry('_ws_launch_arguments_free')
 for values in [[],[b'Config',b'Tundra']]:
  baseline=set(allocs);items=allocate(4*len(values))if values else 0
  for i,value in enumerate(values):cpu.mem_write(items+i*4,struct.pack('<I',owned(value)))
  cpu.mem_write(0x3006000,struct.pack('<II',len(values),items));lib.call('release_launch',0x3006000,result_bits=32);assert bytes(cpu.mem_read(0x3006000,8))==bytes(8);assert set(allocs)==baseline
 for name in ['_ws_local_frame_free','_ws_decay_frame_free','_ws_decay_task_pop_frame']:
  baseline=set(allocs);cpu.mem_write(0x3006000,bytes(512));lib.exports['cleanup']=entry(name)
  if name=='_ws_local_frame_free':
   items=allocate(44);cpu.mem_write(items,bytes(44));cpu.mem_write(items,struct.pack('<II',owned(b'Config'),3));cpu.mem_write(items+16,struct.pack('<I',owned(b'Tundra')));cpu.mem_write(0x3006000,struct.pack('<III',items,1,1))
  else:
   frame=allocate(92)if name=='_ws_decay_task_pop_frame'else 0x3006000;cpu.mem_write(frame,bytes(92));cpu.mem_write(frame+28,struct.pack('<I',owned(b'Config')));items=allocate(4);cpu.mem_write(items,struct.pack('<I',owned(b'Tundra')));cpu.mem_write(frame+44,struct.pack('<II',items,1))
   if name=='_ws_decay_task_pop_frame':cpu.mem_write(0x3006000+32,struct.pack('<II',frame,1))
  lib.native=path==reference;lib.call('cleanup',0x3006000,result_bits=32);lib.native=False
  if name=='_ws_decay_task_pop_frame':allocs.pop(frame)
  assert set(allocs)==baseline,(path,name,'ownership mismatch')
 # A multiline theme exercises token collection and nested hexadecimal values.
 current=[b'']
 def read_file(c,a,z,u):
  data=current[0];pointer=allocate(len(data)+1);cpu.mem_write(pointer,data+b'\0');cpu.mem_write(arg(1),struct.pack('<I',pointer));cpu.mem_write(arg(2),struct.pack('<I',len(data)));leave(1)
 address=names['_fs_read_file'];cpu.hook_add(UC_HOOK_CODE,read_file,begin=address,end=address)
 offset=rn['_wm_kernel_program_ws_run_file_impl'];lib.exports['load_file']=mod.base+offset if path==reference else symbols['_recovered_%x'%(0x10000000+offset)]
 for data in [b'colours = {\n WindowBackground=$F6F6F6,\n Text=$202020,\n}\nTundraAutoTime=true\n',b'desktop = {\n title="Sleet",\n menu="Document|Clipboard|View",\n}\n']:
  current[0]=data;cpu.mem_write(0x3000000,b'theme.wsh\0');events.clear();lib.native=path==reference;status=lib.call('load_file',0x3000000,result_bits=8);lib.native=False;assert status==1,(path,events)
  record=[]
  for name in [b'colours.WindowBackground',b'colours.Text',b'TundraAutoTime',b'desktop.title',b'desktop.menu']:
   cpu.mem_write(0x3002000,name+b'\0');cpu.mem_write(0x3003000,bytes(64));got=lib.call('get',0x3002000,0x3003000,result_bits=32);value=bytes(cpu.mem_read(0x3003000,64));pointer=int.from_bytes(value[12:16],'little')if got else 0;record.append((got,value[:12],text(pointer)if pointer else b''))
  assert record[0][0]==1 and int.from_bytes(record[0][1][4:8],'little')==0xF6F6F6,(path,record)
  results.append((data,status,events.copy(),record))
 for command in [b'a,b=1,2',b'a',b'b',b'driverOk, driverErr = pcall(drivers, "package", "auto")',b'driverOk',b'driverErr',b'driverOk = true',b'driverOk',b'TundraAutoTime=true',b'TundraAutoTime',b'graphicsOk = false',b'graphicsOk',b'colours={WindowBackground=$F6F6F6}',b'colours.WindowBackground',b'foo = 42', b'foo', b'bar = "snow"', b'bar', b'1+1', b'1 + 1', b'9-4', b'3*7', b'18/3', b'19//3', b'19%3', b'2^5', b'-7', b'1+2*3', b'(1+2)*3', b'9 > 4', b'4 == 4', b'4 != 5', b'"snow" + "fall"', b'foo = foo + 3', b'foo', b'desktop = {title="Sleet", menu="Document|Clipboard|View"}', b'desktop.title', b'desktop.title = "Permafrost"', b'desktop.title', b'{1,2,3}', b'1/0', b'unknown_variable']:
  events.clear();cpu.mem_write(0x3000000,command+b'\0');request=bytearray(40);struct.pack_into('<III',request,0,1,40,0x3000000);cpu.mem_write(0x3001000,bytes(request));result=lib.call('_winterboot_kmod_dispatch',16,0x50001,0x3001000,result_bits=32);record=[]
  for name in [b'a',b'b',b'driverErr',b'foo',b'bar',b'desktop.title',b'desktop.menu',b'driverOk',b'TundraAutoTime',b'graphicsOk',b'colours.WindowBackground']:
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
n=exercise(reference);s=exercise(source);assert n==s,[(x,y)for rows,other in zip(n,s)for x,y in zip(rows,other)if x!=y];print('IA32 WinterShell: 42 commands, two files, provider/ownership checks and %d lexer cases match.'%len(n[1]))
