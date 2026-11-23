#!/usr/bin/env python3
"""Compare recovered 1.1 diagnostics application behavior through the real C TerrorUI DLL.

Controlled kernel services cover platform records, power-policy controls,
window resizing, clipping, and partial-alpha text images. Pooka's Free Software License.
"""
from pathlib import Path
import struct,sys
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
extended=False
button=None
services=3
def exercise(path):
 lib=DLL(path,instruction_limit=400000000,allocator_base=0x20000);ui=DLL(library,load_base=0x1000000);meta,raw=inspect(library.read_bytes());lib.cpu.mem_write(ui.base,bytes(ui.cpu.mem_read(ui.base,len(raw))));cpu=lib.cpu;w=8 if lib.wide else 4;events=[];presents=[];width=height=0;queries=0;ticks=0
 saved_api={table:bytes(cpu.mem_read(table,608))for table in lib.api_tables}
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
 for table,data in saved_api.items():cpu.mem_write(table,data)
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
 def finish(value):
  cpu.reg_write(lib.result,value)
  if lib.cpu_type in [7,0x1000007]:
   spreg=UC_X86_REG_RSP if lib.wide else UC_X86_REG_ESP;sp=cpu.reg_read(spreg);address=int.from_bytes(cpu.mem_read(sp,w),'little');cpu.reg_write(spreg,sp+w)
  else:address=cpu.reg_read(UC_ARM_REG_LR if lib.cpu_type==12 else UC_ARM64_REG_X30)
  cpu.reg_write(lib.pc,address)
 specs={0xa0:('create',3),0xa4:('present',7),0xa8:('close',1),0xb0:('configure',5),0xb4:('query',2),0xec:('menus',4),0x28:('write',1),0x2c:('key',0),0x9c:('yield',0),0xac:('list',3),0x100:('pointer_state',2),0x174:('wait',1),0x178:('text',5),0xbc:('current_device',0)}
 if extended:specs.update({0x18c:('devices',3),0x1d8:('service_count',0),0x1dc:('service_state',2),0x1e0:('service_control',2),0x204:('variable',2)})
 def service(offset):
  def call(cpu,address,size,user):
   nonlocal width,height,queries,ticks
   name,count=specs[offset];a=list(args(count));value=1
   if name=='devices':cpu.mem_write(a[2],bytes(4));a=[a[1]];value=1
   elif name=='service_count':value=services
   elif name=='service_state':
    record=bytearray(500);index=a[0]&0xffffffff;struct.pack_into('<7I',record,0,500,1,index,[22,1,13][index%3],0x17,15,123);struct.pack_into('<I',record,28,1)
    for field_offset,field_size,label in [(0x54,64,b'fixture service'),(0x94,64,b'fixture driver'),(0xd4,96,b'fixture status'),(0x134,192,b'fixture details')]:record[field_offset:field_offset+len(label)+1]=label+b'\0'
    cpu.mem_write(a[1],bytes(record));a=[index];value=1
   elif name=='service_control':a=[a[0]&0xffffffff,bytes(cpu.mem_read(a[1],24))];value=1
   elif name=='variable':a=[text(a[0])];value=0
   elif name=='write':a=[text(a[0])]
   elif name in ['yield','wait']:ticks+=32
   elif name=='current_device':value=7
   elif name=='create':a[0]=text(a[0]);width,height=(a[1]if screen else min(a[1],160)),min(a[2],320 if screen else 120);value=17
   elif name=='query':
    queries+=1
    if queries==3:width-=16;height-=8
    if queries==5:width+=16;height+=8
    record=bytearray(632);struct.pack_into('<2I',record,0,17,1);struct.pack_into('<I',record,16,width*height*4);struct.pack_into('<6I',record,20,1,width,height,width*4,0xefefef,10);cpu.mem_write(a[1],bytes(record));a=a[:1];value=int(queries<=(4 if screen else 8))
   elif name=='present':
    # WMAP dimensions and clear colour are 32-bit wire arguments. Native
    # callers can leave unspecified high bits in the host argument registers.
    a[3:7]=[value&0xffffffff for value in a[3:7]]
    a[1]=text(a[1]);pixels=bytes(cpu.mem_read(a[2],a[5]*a[4]));presents.append(pixels);a[2]=('pixels',len(pixels),__import__('hashlib').sha256(pixels).hexdigest())
   elif name=='menus':a=[a[0],*[text(v)for v in a[1:]]]
   elif name=='list':cpu.mem_write(a[2],bytes(4));a=a[1:2]
   elif name=='pointer_state':
    record=struct.pack('<7I',2,1,1,7,7,50+button*104,75)if button is not None else bytes(28)
    cpu.mem_write(a[1],record);a=a[:1]
   elif name=='text':
    string=text(a[0]);color=a[3]&0xffffffff
    if glyphs:
     tw=max(1,min(len(string)*3,1024));th=5;size=tw*th*4;pointer=lib.next;lib.next=(pointer+size+15)&-16;lib.allocs[pointer]=size;r,g,b=(color>>24)&255,(color>>16)&255,(color>>8)&255;pixels=b''.join(bytes((r,g,b,[0,64,128,255][i%4]))for i in range(tw*th));cpu.mem_write(pointer,pixels);cpu.mem_write(a[4],struct.pack('<Q4I',pointer,size,tw,th,tw*4));value=1
    else:cpu.mem_write(a[4],bytes(24));value=0
    a=[string,*[v&0xffffffff for v in a[1:4]]]
   elif name=='key':value=0;a=[]
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
 global glyphs,screen,library,extended,button,services
 import argparse
 parser=argparse.ArgumentParser(description=__doc__)
 parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('library',type=Path)
 parser.add_argument('--glyphs',action='store_true');parser.add_argument('--wide-window',action='store_true')
 parser.add_argument('--services',type=int,choices=[0,3,72,99],default=3)
 parser.add_argument('--button',type=int,choices=range(5),help='click a power-policy control')
 parser.add_argument('--extended',action='store_true')
 args=parser.parse_args();services=args.services;button=args.button;extended=args.extended;glyphs=args.glyphs;screen=args.wide_window;library=args.library
 meta,_=inspect(args.source.read_bytes());folder=Path('build/diagnostics-application-110-check')/hex(meta['cpu']);folder.mkdir(parents=True,exist_ok=True)
 diagnostic_reference(args.reference,folder/'reference-diagnostic');diagnostic_reference(args.source,folder/'source-diagnostic')
 native=exercise(folder/'reference-diagnostic');actual=exercise(folder/'source-diagnostic')
 assert native[0]==actual[0],(native[0],actual[0])
 for index,(x,y)in enumerate(zip(native[1],actual[1])):assert x==y,(index,x,y)
 assert native==actual,('event or frame count differs',len(native[1]),len(actual[1]),len(native[2]),len(actual[2]))
 requested={event[1]for event in actual[1]if event[0]=='text'}
 assert b'FEATURE'in requested,requested
 if extended and services:assert any(event[0]=='service_state'for event in actual[1]),'diagnostic service records were not queried'
 if button is not None:
  controls=[event for event in actual[1]if event[0]=='service_control'];assert len(controls)==1,controls
  assert controls[0][1]==0 and struct.unpack_from('<3I',controls[0][2])==((56 if meta['cpu'] in [0x1000007,0x100000c]else 40),2 if button==0 else 1,button),controls
 print('Diagnostics application: native/source pixels and platform-service calls match.')


if __name__=='__main__':main()
