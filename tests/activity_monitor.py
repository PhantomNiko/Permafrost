#!/usr/bin/env python3
"""Compare recovered Activity Monitor UI behavior through the real C TerrorUI DLL.

Controlled kernel services cover unavailable and populated statistics, text
images, clipping and window queries. Pooka's Free Software License.
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
populated=glyphs=screen=False
library=None
def exercise(path):
 lib=DLL(path,instruction_limit=1000000000);ui=DLL(library);meta,raw=inspect(library.read_bytes());lib.cpu.mem_write(ui.base,bytes(ui.cpu.mem_read(ui.base,len(raw))));cpu=lib.cpu;w=8 if lib.wide else 4;events=[];presents=[];width=height=0;queries=0;statistics=0
 m,_=inspect(path.read_bytes());entry=next((n,a)for a,n in m['symbols']if n=='_main'or n.endswith('_entry'));lib.exports[entry[0]]=lib.base+entry[1]
 if entry[0]!='_main'and lib.cpu_type in [7,0x1000007]:
  _,app_memory=inspect(path.read_bytes());cpu.mem_write(0x1800000,app_memory[0x1800000:])
 for item in dynamic(path.read_bytes())['stubs']:
  if item['name']not in ui.exports:raise AssertionError(item['name'])
  target=ui.exports[item['name']];address=lib.base+item['address']
  def imported(cpu,address,size,user,target=target):cpu.reg_write(lib.pc,target)
  cpu.hook_add(UC_HOOK_CODE,imported,begin=address,end=address)
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
 specs={0xa0:('create',3),0xa4:('present',7),0xa8:('close',1),0xb0:('configure',5),0xb4:('query',2),0xec:('menus',4),0x2c:('key',0),0x9c:('yield',0),0xac:('list',3),0xfc:('pointer_event',5),0x100:('pointer_state',2),0x174:('wait',1),0x178:('text',5)}
 if populated:specs.update({0x108:('system_stats',1),0xb8:('hardware_threads',0),0xbc:('current_device',0),0xc0:('devices',3),0x104:('processes',3),0x110:('device_stats',2)})
 def service(offset):
  def call(cpu,address,size,user):
   nonlocal width,height,queries,statistics
   name,count=specs[offset];a=list(args(count));value=1
   if name=='system_stats':
    statistics+=1;record=[1000+statistics*100,0x10000000,0,0x20000000,0,0x10000000,0,0,1,2,3,statistics*3,statistics*2,statistics*4096,0,statistics*2048,0];cpu.mem_write(a[0],struct.pack('<17I',*record));a=[]
   elif name=='hardware_threads':value=4
   elif name=='current_device':value=7
   elif name=='devices':
    record=bytearray(504);record[:12]=b'Fixture disk';record[242:246]=b'[7]:';struct.pack_into('<5I',record,484,0,1,1,7,1);cpu.mem_write(a[0],bytes(record));cpu.mem_write(a[2],struct.pack('<I',1));a=[a[1]]
   elif name=='device_stats':
    record=bytearray(140);struct.pack_into('<19I',record,0,7,1,2,0,2048,1000000,512,0x10000000,0,0x20000000,0,statistics*3,0,statistics*2,0,statistics*4096,0,statistics*2048,0);record[76:88]=b'Fixture disk';assert a[0]==7,a;cpu.mem_write(a[1],bytes(record));a=a[:1]
   elif name=='processes':
    for index in range(2):
     record=bytearray(436);struct.pack_into('<16I',record,0,17+index,6,1+index,0x1000007,12+statistics,50+statistics*(10+index),0x1800000,0x20000,0x4000000,0,0x8000000,0,0x3000000,0,1000000,7);name_bytes=[b'ActivityMonitor',b'worker'][index];record[64:64+len(name_bytes)]=name_bytes;record[128:135]=b'fixture';record[160:163]=b'app';cpu.mem_write(a[0]+index*436,bytes(record))
    cpu.mem_write(a[2],struct.pack('<I',2));a=[a[1]]
   elif name=='create':a[0]=text(a[0]);width,height=(a[1]if screen else min(a[1],160)),min(a[2],320 if screen else 120);value=17
   elif name=='query':
    queries+=1
    record=bytearray(632);struct.pack_into('<2I',record,0,17,1);struct.pack_into('<I',record,16,width*height*4);struct.pack_into('<6I',record,20,1,width,height,width*4,0xefefef,0);cpu.mem_write(a[1],bytes(record));a=a[:1];value=int(queries<=(4 if screen else 24 if populated else 8))
   elif name=='present':
    a[1]=text(a[1]);pixels=bytes(cpu.mem_read(a[2],a[5]*a[4]));presents.append(pixels);a[2]=('pixels',len(pixels),__import__('hashlib').sha256(pixels).hexdigest())
   elif name=='menus':a=[a[0],*[text(v)for v in a[1:]]]
   elif name=='list':cpu.mem_write(a[2],bytes(4));a=a[1:2]
   elif name=='pointer_state':cpu.mem_write(a[1],bytes(28));a=a[:1]
   elif name=='text':
    string=text(a[0]);color=a[3]&0xffffffff
    if glyphs:
     tw=max(1,min(len(string)*3,1024));th=5;size=tw*th*4;pointer=lib.next;lib.next=(pointer+size+15)&-16;lib.allocs[pointer]=size;r,g,b=(color>>24)&255,(color>>16)&255,(color>>8)&255;pixels=b''.join(bytes((r,g,b,[0,64,128,255][i%4]))for i in range(tw*th));cpu.mem_write(pointer,pixels);cpu.mem_write(a[4],struct.pack('<Q4I',pointer,size,tw,th,tw*4));value=1
    else:cpu.mem_write(a[4],bytes(24));value=0
    a=[string,*[v&0xffffffff for v in a[1:4]]]
   elif name=='key':value=0
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
 global populated,glyphs,screen,library
 import argparse
 parser=argparse.ArgumentParser(description=__doc__)
 parser.add_argument('reference',type=Path);parser.add_argument('source',type=Path);parser.add_argument('library',type=Path)
 parser.add_argument('--statistics',action='store_true');parser.add_argument('--glyphs',action='store_true');parser.add_argument('--wide-window',action='store_true')
 args=parser.parse_args();populated=args.statistics;glyphs=args.glyphs;screen=args.wide_window;library=args.library
 meta,_=inspect(args.source.read_bytes());folder=Path('build/activity-monitor-check')/hex(meta['cpu']);folder.mkdir(parents=True,exist_ok=True)
 diagnostic_reference(args.reference,folder/'reference-diagnostic');diagnostic_reference(args.source,folder/'source-diagnostic')
 native=exercise(folder/'reference-diagnostic');actual=exercise(folder/'source-diagnostic')
 assert native[0]==actual[0]
 assert len(native[1])==len(actual[1]),(len(native[1]),len(actual[1]))
 for index,(x,y)in enumerate(zip(native[1],actual[1])):
  assert x==y,(index,x,y)
 assert native==actual
 requested={event[1]for event in native[1]if event[0]=='text'}
 assert {b'PROCESS ID',b'PROCESS NAME',b'CPU',b'# THREADS',b'REAL MEMORY',b'VIRTUAL MEMORY',b'ARCHITECTURE'}<=requested,requested
 print('Activity Monitor: native/source UI pixels, text and service calls match.')


if __name__=='__main__':main()
