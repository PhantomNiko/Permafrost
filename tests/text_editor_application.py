#!/usr/bin/env python3
"""Compare recovered TextEditor behavior through the real C TerrorUI DLL.

Controlled kernel services cover keyboard editing, file saves, clipboard
round trips, window resizing, clipping, and partial-alpha text images. Both
applications query fresh window records: the native application's idle cache
bug is deliberately excluded from the algorithm and pixel comparison.
Pooka's Free Software License.
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
save_document=False
clipboard_case=False
idle_menu=False
def exercise(path):
 lib=DLL(path,instruction_limit=400000000);ui=DLL(library,load_base=0x1000000);meta,raw=inspect(library.read_bytes());lib.cpu.mem_write(ui.base,bytes(ui.cpu.mem_read(ui.base,len(raw))));cpu=lib.cpu;w=8 if lib.wide else 4;events=[];presents=[];width=height=0;queries=0;ticks=0;keys=[13 if key==10 else key for key in command.encode()];clipboard=b'';clipboard_reads=0
 m,_=inspect(path.read_bytes());entry=next((n,a)for a,n in m['symbols']if n=='_main'or n.endswith('_entry'));lib.exports[entry[0]]=lib.base+entry[1]
 if clipboard_case:keys += [0x40061,0x40063,0x40076]
 if entry[0]!='_main':
  # Executables can contain fixed-address pointer tables without rebases.
  # Preserve their original data view as well as the relocated code view.
  _,app_memory=inspect(path.read_bytes())
  data_start=(next(a for kind,a,n in m['sections']if kind=='__text')if lib.cpu_type in [7,0x1000007]else
              next(a+n for kind,a,n in m['sections']if kind=='__text'))
  cpu.mem_write(data_start,app_memory[data_start-m['base']:])
 for item in dynamic(path.read_bytes())['stubs']:
  if item['name']not in ui.exports:raise AssertionError(item['name'])
  target=ui.exports[item['name']];address=lib.base+item['address']
  def imported(cpu,address,size,user,target=target):cpu.reg_write(lib.pc,target)
  cpu.hook_add(UC_HOOK_CODE,imported,begin=address,end=address)
  if entry[0]!='_main'and lib.cpu_type in [7,0x1000007]:
   cpu.hook_add(UC_HOOK_CODE,imported,begin=item['address'],end=item['address'])
 if lib.cpu_type==12 and entry[0]!='_main':
  # Original ARM data overlaps the low mock allocator return instructions.
  for address in [0x10000,0x10010,0x10020]:
   cpu.mem_write(address,struct.pack('<I',0xe12fff1e))
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
 def finish(value):
  cpu.reg_write(lib.result,value)
  if lib.cpu_type in [7,0x1000007]:
   spreg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;sp=cpu.reg_read(spreg);address=int.from_bytes(cpu.mem_read(sp,w),'little');cpu.reg_write(spreg,sp+w)
  else:address=cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30)
  cpu.reg_write(lib.pc,address)
 def fresh_window_info(cpu,address,size,user):
  window=args(2)[0]
  if window:
   cpu.mem_write(window+(72 if lib.wide else 60),bytes(4))
 address=ui.exports['_terror_ui_window_query']
 if not idle_menu:
  cpu.hook_add(UC_HOOK_CODE,fresh_window_info,begin=address,end=address)
 specs={0xa0:('create',3),0xa4:('present',7),0xa8:('close',1),0xb0:('configure',5),0xb4:('query',2),0xec:('menus',4),0x2c:('key',0),0x9c:('yield',0),0xac:('list',3),0xfc:('pointer_event',5),0x100:('pointer_state',2),0x174:('wait',1),0x178:('text',5)}
 specs.update({0x34:('read',2),0xc8:('read_device',3),0x38:('write_file',3),0xd0:('write_device',4)})
 specs.update({0x168:('time',1),0x28:('write',1),0xbc:('current_device',0),0x180:('clipboard_write',2),0x184:('clipboard_read',2),0x188:('clipboard_size',0)})
 def service(offset):
  def call(cpu,address,size,user):
   nonlocal width,height,queries,ticks,clipboard,clipboard_reads
   name,count=specs[offset];a=list(args(count));value=1
   if name=='time':
    cpu.mem_write(a[0],struct.pack('<6I',24,1,1000,0,ticks,0));a=[]
   elif name in ['yield','wait']:ticks+=1
   elif name=='read':cpu.mem_write(a[1],bytes(12));a=[text(a[0])];value=0
   elif name=='read_device':cpu.mem_write(a[2],bytes(12));a=[a[0],text(a[1])];value=0
   elif name=='write_file':a=[text(a[0]),bytes(cpu.mem_read(a[1],a[2]))]
   elif name=='write_device':a=[a[0],text(a[1]),bytes(cpu.mem_read(a[2],a[3]))]
   elif name=='write':a=[text(a[0])]
   elif name=='clipboard_size':value=len(clipboard);a=[]
   elif name=='clipboard_read':
    clipboard_reads+=1;value=min(len(clipboard),max(0,a[1]-1));cpu.mem_write(a[0],clipboard[:value]+b'\0');a=a[1:]
   elif name=='clipboard_write':clipboard=bytes(cpu.mem_read(a[0],a[1]));a=[clipboard,a[1]]
   elif name=='current_device':value=7
   elif name=='create':a[0]=text(a[0]);width,height=(a[1]if screen else min(a[1],160)),min(a[2],320 if screen else 120);value=17
   elif name=='query':
    queries+=1
    if not idle_menu and queries==3:width-=16;height-=8
    if not idle_menu and queries==5:width+=16;height+=8
    record=bytearray(632);struct.pack_into('<2I',record,0,17,1);struct.pack_into('<I',record,16,width*height*4);struct.pack_into('<6I',record,20,1,width,height,width*4,0xefefef,10);
    if save_document and (ticks>=20 if idle_menu else queries>=5):struct.pack_into('<3I',record,52,1,1,2)
    cpu.mem_write(a[1],bytes(record));a=a[:1];value=int(ticks<40 if idle_menu else queries<=(4 if screen else 8))
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
   elif name=='key':value=keys.pop(0)if keys else 0;a=[value]
   events.append((name,*a));finish(value)
  return call
 for offset in specs:
  address=0x18000+offset*16
  for table in lib.api_tables:cpu.mem_write(table+offset,struct.pack('<I',address))
  cpu.mem_write(address,struct.pack('<I',0xe12fff1e if lib.cpu_type==12 else 0xd65f03c0)if lib.cpu_type in [12,0x100000c]else b'\xc3');cpu.hook_add(UC_HOOK_CODE,service(offset),begin=address,end=address)
 
 try:result=lib.call(entry[0],result_bits=32)
 except Exception:
  print('failed',path.name,'frames',len(presents),'recent',events[-12:],flush=True);raise
 return result,events,presents
def main():
 global glyphs,screen,library,command,save_document,clipboard_case,idle_menu
 import argparse
 parser=argparse.ArgumentParser(description=__doc__)
 parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('library',type=Path)
 parser.add_argument('--glyphs',action='store_true');parser.add_argument('--wide-window',action='store_true')
 parser.add_argument('--text',default='Hello')
 parser.add_argument('--save',action='store_true');parser.add_argument('--clipboard',action='store_true')
 parser.add_argument('--idle-menu',action='store_true',help='source-only regression for menu/close notifications after an active window becomes idle')
 args=parser.parse_args();glyphs=args.glyphs;screen=args.wide_window;library=args.library;command=args.text;idle_menu=args.idle_menu;save_document=args.save or idle_menu;clipboard_case=args.clipboard
 meta,_=inspect(args.source.read_bytes());folder=Path('build/editor-application-check')/hex(meta['cpu']);folder.mkdir(parents=True,exist_ok=True)
 diagnostic_reference(args.reference,folder/'reference-diagnostic');diagnostic_reference(args.source,folder/'source-diagnostic')
 if idle_menu:
  actual=exercise(folder/'source-diagnostic')
  assert actual[0]==0 and actual[2],'source editor did not finish with rendered frames'
  assert sum(event[0]=='yield'for event in actual[1])>=20,'menu was not delivered after an idle interval'
 else:
  native=exercise(folder/'reference-diagnostic');actual=exercise(folder/'source-diagnostic')
  assert native[0]==actual[0],(native[0],actual[0],len(native[2]),len(actual[2]))
  assert len(native[1])==len(actual[1]),(len(native[1]),len(actual[1]))
  for index,(x,y)in enumerate(zip(native[1],actual[1])):
   assert x==y,(index,x,y)
  assert native==actual
 requested={event[1]for event in actual[1]if event[0]=='text'}
 assert b'TextEditor.txt'in requested,requested
 if command:assert any(command.split('\n')[0].encode()in value for value in requested),'edited text was not rendered'
 if save_document:
  assert any(event[0]in ['write_file','write_device']and event[-2].endswith(b'TextEditor.txt')and event[-1]==command.encode()for event in actual[1]),'document was not saved intact'
 if clipboard_case:
  assert any(event[0]=='clipboard_write'and event[1]==command.encode()for event in actual[1]),'selection was not copied intact'
  assert any(event[0]=='clipboard_read'for event in actual[1]),'clipboard was not pasted'
 print('TextEditor: idle menu saves the edited bytes and observes close without another key.'if idle_menu else 'TextEditor: native/source UI pixels, editing, file and clipboard service calls match with fresh window records.')

if __name__=='__main__':main()
