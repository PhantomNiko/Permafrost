#!/usr/bin/env python3
"""Compare recovered Cancer 1.1 terminal behavior through the real C TerrorUI DLL.

Controlled kernel services cover keyboard input, deferred command workers,
window resizing, clipping, and partial-alpha text images. Pooka's Free Software License.
"""
from pathlib import Path
import struct,sys,json
sys.path[:0]=[str(Path(__file__).resolve().parent),str(Path(__file__).resolve().parents[1]/'tools')];from cube_render import diagnostic_reference
from dll import DLL
from native import inspect
from dylib import inspect as dynamic
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from unicorn.arm_const import *
from unicorn.arm64_const import *
glyphs=screen=False
library=None
command=""
fail_thread=False
activate_later=False
extended=False
def exercise(path):
 lib=DLL(path,instruction_limit=400000000,allocator_base=0x20000);ui=DLL(library,load_base=0x1000000);meta,raw=inspect(library.read_bytes());lib.cpu.mem_write(ui.base,bytes(ui.cpu.mem_read(ui.base,len(raw))));cpu=lib.cpu;w=8 if lib.wide else 4;events=[];presents=[];width=height=0;queries=0;ticks=0;drained=False;keys=list(command.encode())+([13]if command else[]);pending=[];queued=[]
 m,raw_app=inspect(path.read_bytes());entry=next((n,a)for a,n in m['symbols']if n=='_main'or n.endswith('_entry'));lib.exports[entry[0]]=lib.base+entry[1]
 if entry[0]!='_main':
  # Executables can contain fixed-address pointer tables without rebases.
  # Preserve their original data view as well as the relocated code view.
  _,app_memory=inspect(path.read_bytes())
  data_start=next(a+n for kind,a,n in m['sections']if kind=='__text')
  cpu.mem_write(data_start,app_memory[data_start-m['base']:])
 lazy=next(((a,n)for kind,a,n in m['sections']if kind=='__la_symbol_ptr'),None)
 for index,item in enumerate(dynamic(path.read_bytes())['stubs']):
  if item['name']not in ui.exports:raise AssertionError(item['name'])
  target=ui.exports[item['name']];address=lib.base+item['address']
  if lazy and entry[0]!='_main':
   helper=int.from_bytes(raw_app[lazy[0]+index*w-m['base']:lazy[0]+(index+1)*w-m['base']],'little')&(~1 if lib.cpu_type==12 else -1)
   cpu.hook_add(UC_HOOK_CODE,lambda cpu,address,size,user,target=target:cpu.reg_write(lib.pc,target),begin=helper,end=helper)
  def imported(cpu,address,size,user,target=target):cpu.reg_write(lib.pc,target)
  cpu.hook_add(UC_HOOK_CODE,imported,begin=address,end=address)
  if entry[0]!='_main'and lib.cpu_type in [7,0x1000007]:
   cpu.hook_add(UC_HOOK_CODE,imported,begin=item['address'],end=item['address'])
 if lib.cpu_type in [7,0x1000007]:
  cpu.mem_write(0x280800,bytes(cpu.mem_read(0x6800,412)));lib.api_tables.append(0x280800)
 for item in dynamic(path.read_bytes())['pointers']:
  if item['name'] in ui.exports:
   target=ui.exports[item['name']];cpu.mem_write(lib.base+item['address']-m['base'],target.to_bytes(w,'little'))
   if entry[0]!='_main':cpu.mem_write(item['address'],target.to_bytes(w,'little'))
 if extended:
  for table in lib.api_tables:cpu.mem_write(table,struct.pack('<III',0x50414d57,1100000,608))
 def args(count):
  if lib.cpu_type==7:
   sp=cpu.reg_read(UC_X86_REG_ESP);return list(struct.unpack('<'+'I'*count,bytes(cpu.mem_read(sp+4,count*4))))
  regs=[UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3]if lib.cpu_type==12 else[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X7]if lib.cpu_type==0x100000c else[UC_X86_REG_RDI,UC_X86_REG_RSI,UC_X86_REG_RDX,UC_X86_REG_RCX,UC_X86_REG_R8,UC_X86_REG_R9]
  out=[cpu.reg_read(r)for r in regs[:count]]
  if count>len(regs):
   sp=cpu.reg_read(UC_ARM_REG_SP if lib.cpu_type==12 else UC_ARM64_REG_SP if lib.cpu_type==0x100000c else UC_X86_REG_RSP)+(0 if lib.cpu_type in [12,0x100000c]else 8);out+=struct.unpack('<'+('Q'if lib.wide else'I')*(count-len(regs)),bytes(cpu.mem_read(sp,(count-len(regs))*w)))
  return out
 def text(ptr):
  if not ptr:return b''
  out=bytearray()
  for i in range(2048):
   v=cpu.mem_read(ptr+i,1)[0]
   if not v:return bytes(out)
   out.append(v)
  raise AssertionError('string unbounded')
 def complete_thread(cpu,address,size,user):
  original_sp,return_address,stack_data=pending.pop()
  if lib.cpu_type in [7,0x1000007]:
   reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP
   cpu.reg_write(reg,original_sp);cpu.mem_write(original_sp,stack_data)
  else:cpu.reg_write(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30,return_address)
  finish(1)
 cpu.hook_add(UC_HOOK_CODE,complete_thread,begin=0x1f000,end=0x1f000)
 def finish(value):
  cpu.reg_write(lib.result,value)
  if lib.cpu_type in [7,0x1000007]:
   spreg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;sp=cpu.reg_read(spreg);address=int.from_bytes(cpu.mem_read(sp,w),'little');cpu.reg_write(spreg,sp+w)
  else:address=cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30)
  cpu.reg_write(lib.pc,address)
 specs={0xa0:('create',3),0xa4:('present',7),0xa8:('close',1),0xb0:('configure',5),0xb4:('query',2),0xec:('menus',4),0x2c:('key',0),0x9c:('yield',0),0xac:('list',3),0xfc:('pointer_event',5),0x100:('pointer_state',2),0x174:('wait',1),0x178:('text',5)}
 specs.update({0x168:('time',1),0x28:('write',1),0xbc:('current_device',0),0x94:('thread',3),0x98:('execute',3),0x180:('clipboard_write',2),0x184:('clipboard_read',2),0x188:('clipboard_size',0)})
 if extended:specs.update({0x204:('variable',2),0x208:('custom_menus',2),0x214:('present_rect',3),0x230:('pointer_state_ex',2),0x234:('pointer_capture',2),0x238:('hotkey',1),0x23c:('terminal_open',0),0x240:('terminal_drain',2),0x244:('terminal_input_state',0),0x248:('terminal_submit',1),0x24c:('terminal_cancel',0)})
 def service(offset):
  def call(cpu,address,size,user):
   nonlocal width,height,queries,ticks,drained
   name,count=specs[offset];a=list(args(count));value=1
   if name=='variable':a=[text(a[0])];value=0
   elif name=='custom_menus':a=[a[0]&0xffffffff,text(a[1])]
   elif name=='pointer_state_ex':cpu.mem_write(a[1],bytes(48));a=a[:1]
   elif name=='hotkey':value=0
   elif name=='terminal_input_state':value=0
   elif name=='terminal_drain':
    output=b''if drained else b'channel fixture output\n';drained=True;value=min(len(output),max(0,a[1]-1));cpu.mem_write(a[0],output[:value]+b'\0');a=[a[1],output[:value]]
   elif name=='terminal_submit':a=[text(a[0])]
   elif name=='present_rect':
    record=bytes(cpu.mem_read(a[2],28));ww,hh,stride=struct.unpack_from('<3I',record);pixels=bytes(cpu.mem_read(a[1],stride*hh));presents.append(pixels);a=[a[0]&0xffffffff,record,('pixels',len(pixels),__import__('hashlib').sha256(pixels).hexdigest())]
   elif name=='time':
    cpu.mem_write(a[0],struct.pack('<6I',24,1,1000,0,ticks,0));a=[]
   elif name=='thread':
    function,context,label=a;events.append(('thread',text(label)))
    if not fail_thread:queued.append((function,context))
    finish(0 if fail_thread else 1);return
   elif name in ['yield','wait']:
    ticks+=32 if name=='yield'else max(1,a[0]//1000)
    if queued:
     events.append((name,*a));function,context=queued.pop(0)
     if lib.cpu_type in [7,0x1000007]:
      reg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;sp=cpu.reg_read(reg)
      saved=bytes(cpu.mem_read(sp,w*(2 if not lib.wide else 1)));return_address=int.from_bytes(saved[:w],'little');pending.append((sp,return_address,saved));cpu.mem_write(sp,(0x1f000).to_bytes(w,'little'))
      if lib.wide:cpu.reg_write(UC_X86_REG_RDI,context)
      else:cpu.mem_write(sp+4,struct.pack('<I',context))
     else:
      lr=UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30
      pending.append((0,cpu.reg_read(lr),b''));cpu.reg_write(lr,0x1f000);cpu.reg_write(UC_ARM_REG_R0 if lib.cpu_type==12 else UC_ARM64_REG_X0,context)
     cpu.reg_write(lib.pc,function);return
   elif name=='execute':
    line=text(a[0]);output=b'fixture output: '+line+b'\n';cpu.mem_write(a[1],output[:max(0,a[2]-1)]+b'\0');a=[line,a[2]];value=0
   elif name=='write':a=[text(a[0])]
   elif name=='clipboard_size':value=0;a=[]
   elif name=='clipboard_read':cpu.mem_write(a[0],b'\0');value=0;a=a[1:]
   elif name=='clipboard_write':a=[text(a[0]),a[1]]
   elif name=='current_device':value=7
   elif name=='create':a[0]=text(a[0]);width,height=(a[1]if screen else min(a[1],160)),min(a[2],320 if screen else 120);value=17
   elif name=='query':
    queries+=1
    if queries==3:width-=16;height-=8
    if queries==5:width+=16;height+=8
    record=bytearray(632);struct.pack_into('<2I',record,0,17,1);struct.pack_into('<I',record,16,width*height*4);struct.pack_into('<6I',record,20,1,width,height,width*4,0xefefef,8 if activate_later and queries<3 else 10);cpu.mem_write(a[1],bytes(record));a=a[:1];value=int(queries<=(4 if screen else 8))
   elif name=='present':
    # WMAP dimensions and clear colour are 32-bit wire arguments. Native
    # callers can leave unspecified high bits in the host argument registers.
    a[3:7]=[value&0xffffffff for value in a[3:7]]
    a[1]=text(a[1]);pixels=bytes(cpu.mem_read(a[2],a[5]*a[4]));presents.append(pixels);a[2]=('pixels',len(pixels),__import__('hashlib').sha256(pixels).hexdigest())
   elif name=='menus':a=[a[0],*[text(v)for v in a[1:]]]
   elif name=='list':cpu.mem_write(a[2],bytes(4));a=a[1:2]
   elif name=='pointer_state':
    record=bytes(28)
    cpu.mem_write(a[1],record);a=a[:1]
   elif name=='text':
    string=text(a[0]);color=a[3]&0xffffffff
    if glyphs:
     tw=max(1,min(len(string)*3,1024));th=5;size=tw*th*4;pointer=lib.next;lib.next=(pointer+size+15)&-16;lib.allocs[pointer]=size;r,g,b=(color>>24)&255,(color>>16)&255,(color>>8)&255;pixels=b''.join(bytes((r,g,b,[0,64,128,255][i%4]))for i in range(tw*th));cpu.mem_write(pointer,pixels);cpu.mem_write(a[4],struct.pack('<Q4I',pointer,size,tw,th,tw*4));value=1
    else:cpu.mem_write(a[4],bytes(24));value=0
    a=[string,*[v&0xffffffff for v in a[1:4]]]
   elif name=='key':value=keys.pop(0)if keys and not(activate_later and queries<3)else 0;a=[value]
   events.append((name,*a));finish(value)
  return call
 for offset in specs:
  address=0x18000+offset*16
  for table in lib.api_tables:cpu.mem_write(table+offset,struct.pack('<I',address))
  cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in [12,0x100000c]else b'\xc3');cpu.hook_add(UC_HOOK_CODE,service(offset),begin=address,end=address)
 
 try:result=lib.call(entry[0],0,0,result_bits=32)
 except Exception:
  print('failed',path.name,'frames',len(presents),'recent',events[-12:],flush=True);raise
 return result,events,presents
def main():
 global glyphs,screen,library,command,fail_thread,activate_later,extended
 import argparse
 parser=argparse.ArgumentParser(description=__doc__)
 parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('library',type=Path)
 parser.add_argument('--extended',action='store_true',help='exercise the 1.1 service table and terminal output channel')
 parser.add_argument('--glyphs',action='store_true');parser.add_argument('--wide-window',action='store_true')
 parser.add_argument('--command',default='');parser.add_argument('--fail-thread',action='store_true')
 parser.add_argument('--activate-later',action='store_true',help='test source recovery from the native inactive-cache stall')
 args=parser.parse_args();extended=args.extended;glyphs=args.glyphs;screen=args.wide_window;library=args.library;command=args.command;fail_thread=args.fail_thread;activate_later=args.activate_later
 meta,_=inspect(args.source.read_bytes());folder=Path('build/terminal-application-110-check')/hex(meta['cpu']);folder.mkdir(parents=True,exist_ok=True)
 diagnostic_reference(args.reference,folder/'reference-diagnostic');diagnostic_reference(args.source,folder/'source-diagnostic')
 if activate_later:
  assert command and not fail_thread,'The focus regression requires a successful command.'
  actual=exercise(folder/'source-diagnostic')
  assert actual[0]==1 and actual[2],('source did not finish with rendered frames',actual[0])
  assert sum(event[0]=='query'for event in actual[1])>=3,'window did not refresh after activation'
 else:
  native=exercise(folder/'reference-diagnostic');actual=exercise(folder/'source-diagnostic')
  assert native[0]==actual[0],(native[0],actual[0],native[1][:4],actual[1][:4],len(native[2]),len(actual[2]))
  assert len(native[1])==len(actual[1]),(len(native[1]),len(actual[1]))
  for index,(x,y)in enumerate(zip(native[1],actual[1])):
   assert x==y,(index,x,y)
  assert native==actual
 requested={event[1]for event in actual[1]if event[0]=='text'}
 assert b'Cancer'in requested,requested
 if command and not fail_thread:assert any(event[0]=='execute'and event[1]==command.encode()for event in actual[1]),'command was not executed'
 if command and fail_thread:
  assert any(event[0]=='thread'for event in actual[1]),'worker creation was not attempted'
  assert not any(event[0]=='execute'for event in actual[1]),'failed worker unexpectedly ran'
 print('Cancer terminal: delayed activation refreshes focus and executes the command.'if activate_later else 'Cancer terminal: native/source UI pixels, command output and service calls match.')


if __name__=='__main__':main()
